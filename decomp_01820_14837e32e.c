// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14837e32e FUN_14837e32e body=149 status=ok
// SIG undefined FUN_14837e32e(void)

longlong * FUN_14837e32e(longlong param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_1 + 400) == 0) {
    iVar1 = *(int *)(param_1 + 0x180);
    param_2[2] = 0;
    param_2[4] = (longlong)&PTR_LAB_14ae75590;
    if (iVar1 == 1) {
      pcVar2 = FUN_143b13ca3;
    }
    else if (iVar1 == 2) {
      pcVar2 = FUN_143b13ba9;
    }
    else {
      pcVar2 = FUN_143b13d95;
    }
    param_2[5] = (longlong)pcVar2;
    *param_2 = (longlong)FUN_1483b22f2;
  }
  else {
    *param_2 = *(longlong *)(param_1 + 400);
    param_2[2] = 0;
    puVar3 = (undefined8 *)(param_1 + 0x1b0);
    if (*(undefined8 **)(param_1 + 0x1a0) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x1a0);
    }
    (**(code **)*puVar3)(puVar3,param_2 + 2);
  }
  return param_2;
}



// FUNCTION 14837e3c4 FUN_14837e3c4 body=476 status=ok
// SIG undefined FUN_14837e3c4(void)

void FUN_14837e3c4(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_158 [32];
  code *local_138 [2];
  longlong *local_128;
  longlong local_118 [4];
  longlong *local_f8;
  longlong local_e8;
  longlong *local_d8 [2];
  longlong local_c8 [4];
  code *local_a8;
  undefined8 local_98;
  undefined **local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_68 [2];
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  (**(code **)(*param_1 + 0xa0))(param_1,local_68);
  if (param_2 == '\0') {
    (**(code **)(*param_1 + 0x78))(param_1);
    local_f8 = param_1;
    local_e8 = local_68[0];
    local_d8[0] = (longlong *)0x0;
    if (local_68[0] != 0) {
      plVar1 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar1 = local_48;
      }
      (**(code **)*plVar1)(plVar1,local_d8);
    }
    local_138[0] = (code *)0x0;
    plVar1 = (longlong *)FUN_14001cc68(0x60,0x10);
    *plVar1 = (longlong)&PTR_FUN_14ae755d0;
    plVar1[2] = (longlong)local_f8;
    plVar1[4] = local_e8;
    plVar1[6] = 0;
    local_128 = plVar1;
    if (local_e8 != 0) {
      plVar2 = local_d8[0];
      if (local_d8[0] == (longlong *)0x0) {
        plVar2 = local_c8;
      }
      (**(code **)*plVar2)(plVar2,plVar1 + 6);
    }
    if (plVar1 != (longlong *)&DAT_fffffffffffffff0) {
      local_138[0] = FUN_143b1cf5c;
    }
    (**(code **)(*param_1 + 0x98))(param_1,local_138);
    if (local_138[0] != (code *)0x0) {
      plVar1 = local_128;
      if (local_128 == (longlong *)0x0) {
        plVar1 = local_118;
      }
      (**(code **)(*plVar1 + 0x10))();
    }
    (**(code **)(*param_1 + 0x80))(param_1,0);
    if (local_e8 != 0) {
      plVar1 = local_d8[0];
      if (local_d8[0] == (longlong *)0x0) {
        plVar1 = local_c8;
      }
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  else {
    local_98 = 0;
    local_88 = &PTR_LAB_14ae755b0;
    local_a8 = FUN_143b1ce7c;
    local_80 = local_68;
    local_78 = param_1;
    FUN_14837e5a2(param_1);
  }
  if (local_68[0] != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837e5a2 FUN_14837e5a2 body=291 status=ok
// SIG undefined FUN_14837e5a2(void)

void FUN_14837e5a2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  code *local_98;
  longlong **local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong *local_78 [2];
  longlong local_68;
  longlong *local_58 [2];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x78))();
  local_68 = *param_2;
  local_58[0] = (longlong *)0x0;
  local_78[0] = param_1;
  if (local_68 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)*plVar1)(plVar1,local_58);
  }
  local_a8 = &local_88;
  local_88 = 0;
  local_80 = 0;
  local_98 = FUN_143b1d5a4;
  local_90 = local_78;
  local_b0 = 0;
  FUN_1427ae281(L"ParallelFor Task",
                *(int *)(param_1[1] + 0x20) * 0x200 + *(int *)(param_1[1] + 0x24),1);
  if (local_68 != 0) {
    plVar1 = local_58[0];
    if (local_58[0] == (longlong *)0x0) {
      plVar1 = local_48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  (**(code **)(*param_1 + 0x80))(param_1,1);
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837e6c6 FUN_14837e6c6 body=533 status=ok
// SIG undefined FUN_14837e6c6(void)

void FUN_14837e6c6(longlong param_1,char param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  longlong local_78;
  undefined4 local_70;
  code *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar10 = *(longlong *)(param_1 + 8);
  uVar11 = *(int *)(lVar10 + 0x20) * 0x200 + *(int *)(lVar10 + 0x24);
  if (param_2 == '\0') {
    uVar14 = 0;
    if ((uVar11 != 0) &&
       (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar10 + 0x28) - 1U))) {
      uVar7 = 1;
      uVar8 = 1;
      if (1 < (int)uVar11) {
        uVar7 = uVar11;
      }
      do {
        uVar14 = uVar7;
        if (uVar7 == uVar8) break;
        uVar9 = uVar8 >> 9;
        uVar13 = uVar8 & 0x1ff;
        uVar14 = uVar8;
        uVar8 = uVar8 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar10 + 0x28))[uVar9] +
                                           (ulonglong)uVar13 * 2) - 1U));
    }
    if (uVar14 != uVar11) {
      do {
        if (*(char *)(*(longlong *)(param_1 + 0x280) + (longlong)(int)uVar14) == '\x01') {
          lVar2 = *(longlong *)(param_1 + 8);
          uVar7 = uVar14 & 0x1ff;
          puVar12 = (undefined4 *)
                    ((ulonglong)(uVar7 * 0x18) +
                    *(longlong *)(*(longlong *)(param_1 + 0x270) + (ulonglong)(uVar14 >> 9) * 8));
          cVar6 = FUN_146bfed03(puVar12);
          if (cVar6 != '\0') {
            lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar14 >> 9) * 8);
            *(undefined8 *)(lVar2 + 0x10 + (ulonglong)uVar7 * 0x18) = *(undefined8 *)(puVar12 + 4);
            uVar3 = puVar12[1];
            uVar4 = puVar12[2];
            uVar5 = puVar12[3];
            puVar1 = (undefined4 *)(lVar2 + (ulonglong)uVar7 * 0x18);
            *puVar1 = *puVar12;
            puVar1[1] = uVar3;
            puVar1[2] = uVar4;
            puVar1[3] = uVar5;
          }
        }
        uVar7 = uVar14 + 1;
        if ((int)(uVar14 + 1) < (int)uVar11) {
          uVar7 = uVar11;
        }
        do {
          uVar8 = uVar7;
          if (uVar7 - 1 == uVar14) break;
          uVar14 = uVar14 + 1;
          uVar8 = uVar14;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar10 + 0x28) +
                                               (ulonglong)(uVar14 >> 9) * 8) +
                                             (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
        uVar14 = uVar8;
      } while (uVar14 != uVar11);
      lVar10 = *(longlong *)(param_1 + 8);
    }
    if (*(char *)(lVar10 + 0x210) == '\0') goto LAB_14837e86d;
  }
  else {
    local_60 = &local_78;
    local_70 = 1000;
    local_88 = &local_58;
    local_58 = 0;
    local_50 = 0;
    local_68 = FUN_143b1d11c;
    local_90 = 0;
    local_78 = param_1;
    FUN_1427ae281(L"ParallelFor Task",
                  -((int)ROUND(-0.5 - ((float)(int)uVar11 / 1000.0 + (float)(int)uVar11 / 1000.0))
                   >> 1),1);
    lVar10 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar10 + 0x210) != '\x01') goto LAB_14837e86d;
  }
  LOCK();
  *(int *)(lVar10 + 0x214) = *(int *)(lVar10 + 0x214) + 1;
  UNLOCK();
LAB_14837e86d:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14837e8dc FUN_14837e8dc body=666 status=ok
// SIG undefined FUN_14837e8dc(void)

undefined4 *
FUN_14837e8dc(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4,
             undefined1 *param_5)

{
  undefined4 *puVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  char local_5f;
  longlong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_5 = 0;
  local_5f = '\x01';
  local_58 = (longlong *)0x0;
  if ((*(char *)(param_1 + 200) != '\x01') ||
     (FUN_1483a4c02(param_1 + 0x10,param_3,&local_60), local_5f != '\0')) {
    pcVar2 = *(code **)(param_1 + 0xe0);
    if (pcVar2 == (code *)0x0) {
      uVar5 = 0;
    }
    else {
      local_78 = CONCAT44(local_78._4_4_,param_3);
      plVar8 = (longlong *)(param_1 + 0x100);
      if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_1 + 0xf0);
      }
      uVar6 = (**(code **)(*plVar8 + 8))();
      uVar5 = (*pcVar2)(uVar6,&local_78);
      if ((uVar5 & 1) != 0) goto LAB_14837e9c4;
      uVar5 = uVar5 & 0xff;
    }
    pcVar2 = *(code **)(param_1 + 0x1d0);
    if (pcVar2 == (code *)0x0) {
      dVar10 = *(double *)(param_1 + 0x178);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 8);
      local_78 = CONCAT44(local_78._4_4_,param_3);
      plVar8 = (longlong *)(param_1 + 0x1f0);
      if (*(longlong **)(param_1 + 0x1e0) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_1 + 0x1e0);
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      dVar10 = (double)(*pcVar2)(uVar7,uVar6,&local_78);
    }
    if (0.0 < dVar10) {
      local_90 = *(undefined8 *)(param_1 + 0x178);
      uVar6 = *(undefined8 *)(param_1 + 8);
      pcVar2 = (code *)*param_4;
      plVar8 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar8 = (longlong *)param_4[2];
      }
      local_4c = param_3;
      uVar7 = (**(code **)(*plVar8 + 8))();
      local_98 = &local_90;
      (*pcVar2)(&local_78,uVar7,uVar6,&local_4c);
      cVar4 = FUN_146bfed03(&local_78);
      if (cVar4 != '\0') {
        if (local_58 == (longlong *)0x0) {
          if ((*(char *)(param_1 + 0x138) == '\x02') &&
             (plVar8 = *(longlong **)(param_1 + 0xd0),
             (char)((uVar5 & 2) >> 1) == '\0' && plVar8 != (longlong *)0x0)) {
            (**(code **)(*plVar8 + 8))(plVar8,&local_90,&local_78,param_3);
            local_68 = local_80;
            local_78 = local_90;
            uStack_70 = uStack_88;
          }
        }
        else {
          (**(code **)(*local_58 + 8))(local_58,&local_90,&local_78,param_3);
          local_68 = local_80;
          local_78 = local_90;
          uStack_70 = uStack_88;
        }
        *param_5 = 1;
        *(undefined8 *)(param_2 + 4) = local_68;
        uVar9 = (undefined4)local_78;
        uVar11 = local_78._4_4_;
        uVar12 = (undefined4)uStack_70;
        uVar13 = uStack_70._4_4_;
        goto LAB_14837e9ec;
      }
    }
  }
LAB_14837e9c4:
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (ulonglong)(param_3 >> 9) * 8);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(lVar3 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18)
  ;
  puVar1 = (undefined4 *)(lVar3 + (ulonglong)(param_3 & 0x1ff) * 0x18);
  uVar9 = *puVar1;
  uVar11 = puVar1[1];
  uVar12 = puVar1[2];
  uVar13 = puVar1[3];
LAB_14837e9ec:
  *param_2 = uVar9;
  param_2[1] = uVar11;
  param_2[2] = uVar12;
  param_2[3] = uVar13;
  if (*param_4 != 0) {
    plVar8 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14837eb78 FUN_14837eb78 body=296 status=ok
// SIG undefined FUN_14837eb78(void)

void FUN_14837eb78(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar7 = *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24);
  uVar9 = 0;
  if ((uVar7 != 0) && (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))
     ) {
    uVar10 = 1;
    uVar4 = 1;
    if (1 < (int)uVar7) {
      uVar10 = uVar7;
    }
    do {
      uVar9 = uVar10;
      if (uVar10 == uVar4) break;
      uVar6 = uVar4 >> 9;
      uVar8 = uVar4 & 0x1ff;
      uVar9 = uVar4;
      uVar4 = uVar4 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x28))[uVar6] +
                                         (ulonglong)uVar8 * 2) - 1U));
  }
  if (uVar9 != uVar7) {
    do {
      pcVar2 = (code *)*param_2;
      plVar5 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar5 = param_2 + 4;
      }
      local_44 = uVar9;
      uVar3 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar3,&local_44);
      uVar10 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar7) {
        uVar10 = uVar7;
      }
      do {
        uVar4 = uVar10;
        if (uVar10 - 1 == uVar9) break;
        uVar9 = uVar9 + 1;
        uVar4 = uVar9;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x28) +
                                             (ulonglong)(uVar9 >> 9) * 8) +
                                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
      uVar9 = uVar4;
    } while (uVar9 != uVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14837eca2 FUN_14837eca2 body=187 status=ok
// SIG undefined FUN_14837eca2(void)

void FUN_14837eca2(longlong *param_1,char param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_b8 [32];
  code *local_98 [2];
  undefined ***local_88;
  undefined **local_78;
  longlong *local_70;
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == '\0') {
    local_88 = (undefined ***)0x0;
    local_78 = &PTR_LAB_14ae75610;
    local_98[0] = FUN_143b1d40c;
    local_70 = param_1;
    (**(code **)(*param_1 + 0xc0))(param_1,local_98);
    if (local_98[0] != (code *)0x0) {
      pppuVar1 = local_88;
      if (local_88 == (undefined ***)0x0) {
        pppuVar1 = &local_78;
      }
      (*(code *)(*pppuVar1)[2])();
    }
  }
  else {
    local_48 = 0;
    local_38 = &PTR_LAB_14ae755f0;
    local_58 = FUN_143b1d1fa;
    local_30 = param_1;
    FUN_14837e5a2();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837ed5e FUN_14837ed5e body=296 status=ok
// SIG undefined FUN_14837ed5e(void)

void FUN_14837ed5e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar7 = *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24);
  uVar9 = 0;
  if ((uVar7 != 0) && (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))
     ) {
    uVar10 = 1;
    uVar4 = 1;
    if (1 < (int)uVar7) {
      uVar10 = uVar7;
    }
    do {
      uVar9 = uVar10;
      if (uVar10 == uVar4) break;
      uVar6 = uVar4 >> 9;
      uVar8 = uVar4 & 0x1ff;
      uVar9 = uVar4;
      uVar4 = uVar4 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x28))[uVar6] +
                                         (ulonglong)uVar8 * 2) - 1U));
  }
  if (uVar9 != uVar7) {
    do {
      pcVar2 = (code *)*param_2;
      plVar5 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar5 = param_2 + 4;
      }
      local_44 = uVar9;
      uVar3 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar3,&local_44);
      uVar10 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar7) {
        uVar10 = uVar7;
      }
      do {
        uVar4 = uVar10;
        if (uVar10 - 1 == uVar9) break;
        uVar9 = uVar9 + 1;
        uVar4 = uVar9;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x28) +
                                             (ulonglong)(uVar9 >> 9) * 8) +
                                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
      uVar9 = uVar4;
    } while (uVar9 != uVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14837ee87 FUN_14837ee87 body=1356 status=ok
// SIG undefined FUN_14837ee87(void)

longlong FUN_14837ee87(longlong *param_1,double *param_2,double *param_3,undefined4 *param_4,
                      undefined8 *param_5,double param_6,char param_7)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  double dVar8;
  undefined1 auStack_2d8 [32];
  undefined8 *local_2b8;
  double *local_2b0;
  undefined4 local_2a4;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined1 local_278 [8];
  undefined1 local_270 [12];
  undefined4 local_264 [3];
  double local_258;
  double dStack_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double dStack_220;
  double local_218;
  double local_210;
  double dStack_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  undefined1 local_1e0 [16];
  double local_1d0;
  double local_1c8 [2];
  longlong local_1b8;
  longlong *local_1a8;
  longlong local_198 [4];
  undefined1 local_178;
  double local_168 [2];
  longlong local_158;
  longlong *local_148;
  longlong local_138 [4];
  undefined1 local_118;
  double local_108 [2];
  longlong local_f8;
  longlong *local_e8;
  longlong local_d8 [4];
  undefined1 local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  dVar8 = param_3[2];
  local_230 = -dVar8;
  dVar1 = *param_3;
  dVar2 = param_3[1];
  local_238 = -dVar2;
  local_240 = -dVar1;
  local_1e8 = dVar8 * param_6 + param_2[2];
  local_1f0 = dVar2 * param_6 + param_2[1];
  local_1f8 = dVar1 * param_6 + *param_2;
  local_1e0._8_4_ = SUB84(dVar2,0);
  local_1e0._0_8_ = local_240;
  local_1e0._12_4_ = (int)((ulonglong)local_238 >> 0x20);
  dVar8 = dVar8 * dVar8 + dVar1 * dVar1 + dVar2 * dVar2;
  local_1d0 = local_230;
  if (9.99999993922529e-09 < dVar8) {
    local_1d0 = 1.0 / SQRT(dVar8);
    local_1e0._8_8_ = local_1d0 * local_238;
    local_1e0._0_8_ = local_1d0 * local_240;
    local_1d0 = local_1d0 * local_230;
  }
  local_218 = param_2[2];
  local_228 = *param_2;
  dStack_220 = param_2[1];
  local_210 = *param_3;
  dStack_208 = param_3[1];
  local_200 = param_3[2];
  dVar1 = local_200 * local_200 + local_210 * local_210 + dStack_208 * dStack_208;
  if (9.99999993922529e-09 < dVar1) {
    dVar1 = 1.0 / SQRT(dVar1);
    local_210 = local_210 * dVar1;
    dStack_208 = dStack_208 * dVar1;
    local_200 = local_200 * dVar1;
  }
  local_248 = param_2[2];
  local_258 = *param_2;
  dStack_250 = param_2[1];
  if (9.99999993922529e-09 < dVar8) {
    dVar8 = 1.0 / SQRT(dVar8);
    local_240 = dVar8 * local_240;
    local_238 = dVar8 * local_238;
    local_230 = dVar8 * local_230;
  }
  local_264[2] = 0xffffffff;
  puVar7 = local_264 + 1;
  local_264[1] = 0xffffffff;
  local_264[0] = 0xffffffff;
  local_280 = 0x47efffffe0000000;
  local_f8 = 0;
  local_e8 = (longlong *)0x0;
  local_b8 = 0;
  local_108[0] = param_6;
  local_2b8 = &local_298;
  local_2b0 = local_108;
  lVar5 = (**(code **)(*param_1 + 0x78))(param_1,&local_1f8,local_278,puVar7);
  if (lVar5 == 0) {
    puVar7 = local_264 + 2;
    local_2b8 = &local_298;
    local_2b0 = local_108;
    lVar5 = (**(code **)(*param_1 + 0x78))(param_1,&local_228,local_270,puVar7);
    if (lVar5 != 0) goto LAB_14837f186;
    puVar7 = local_264;
    local_2b8 = &local_298;
    local_2b0 = local_108;
    lVar5 = (**(code **)(*param_1 + 0x78))(param_1,&local_258,&local_280,puVar7);
    if (lVar5 != 0) goto LAB_14837f186;
  }
  else {
LAB_14837f186:
    uVar3 = *puVar7;
    cVar4 = (**(code **)(*param_1 + 0x90))(param_1,lVar5,uVar3);
    if (cVar4 != '\0') {
      *param_4 = uVar3;
      param_5[2] = local_288;
      *param_5 = local_298;
      param_5[1] = uStack_290;
      goto LAB_14837f1be;
    }
  }
  local_158 = 0;
  local_148 = (longlong *)0x0;
  local_118 = 0;
  local_168[0] = param_6;
  local_2a0 = 0;
  local_2a4 = 0xffffffff;
  if (param_7 == '\0') {
    local_2b0 = local_168;
    local_2b8 = &local_298;
    lVar5 = (**(code **)(*param_1 + 0x70))(param_1,param_2,&local_2a0,&local_2a4);
  }
  else {
    local_2b0 = local_1c8;
    local_1c8[0] = 1.79769313486232e+308;
    local_1b8 = 0;
    local_1a8 = (longlong *)0x0;
    local_178 = 0;
    local_2b8 = &local_298;
    lVar5 = (**(code **)(*param_1 + 0x70))(param_1,param_2,&local_2a0,&local_2a4);
    if (local_1b8 != 0) {
      plVar6 = local_1a8;
      if (local_1a8 == (longlong *)0x0) {
        plVar6 = local_198;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if (lVar5 != 0) {
    cVar4 = (**(code **)(*param_1 + 0x90))(param_1,lVar5,local_2a4);
    if (cVar4 != '\0') {
      *param_4 = local_2a4;
      param_5[2] = local_288;
      *param_5 = local_298;
      param_5[1] = uStack_290;
    }
  }
  if (local_158 != 0) {
    plVar6 = local_148;
    if (local_148 == (longlong *)0x0) {
      plVar6 = local_138;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
LAB_14837f1be:
  if (local_f8 != 0) {
    plVar6 = local_e8;
    if (local_e8 == (longlong *)0x0) {
      plVar6 = local_d8;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((local_a0 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837f3d4 FUN_14837f3d4 body=288 status=ok
// SIG undefined FUN_14837f3d4(void)

longlong FUN_14837f3d4(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98 [2];
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  undefined1 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_a0 = 0x47efffffe0000000;
  local_a4 = 0xffffffff;
  local_d8 = &local_c8;
  local_b8 = DAT_14c8464f0;
  local_c8 = (undefined4)DAT_14c8464e0;
  uStack_c4 = DAT_14c8464e0._4_4_;
  uStack_c0 = (undefined4)DAT_14c8464e8;
  uStack_bc = DAT_14c8464e8._4_4_;
  local_d0 = local_98;
  local_98[0] = 0x7fefffffffffffff;
  local_88 = 0;
  local_78 = (longlong *)0x0;
  local_48 = 0;
  lVar2 = (**(code **)(*param_1 + 0x70))(param_1);
  if (local_88 != 0) {
    plVar3 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar3 = local_68;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (lVar2 != 0) {
    cVar1 = (**(code **)(*param_1 + 0x90))(param_1,lVar2,local_a4);
    if (cVar1 != '\0') {
      *param_3 = local_a4;
      *(undefined8 *)(param_4 + 4) = local_b8;
      *param_4 = local_c8;
      param_4[1] = uStack_c4;
      param_4[2] = uStack_c0;
      param_4[3] = uStack_bc;
      goto LAB_14837f4c7;
    }
  }
  lVar2 = 0;
LAB_14837f4c7:
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837f4f6 FUN_14837f4f6 body=19 status=ok
// SIG undefined FUN_14837f4f6(void)

void FUN_14837f4f6(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_14ae74c50;
  *(undefined4 *)(param_1 + 1) = param_2;
  return;
}



// FUNCTION 14837f50a FUN_14837f50a body=89 status=ok
// SIG undefined FUN_14837f50a(void)

void FUN_14837f50a(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_3 = &LAB_14837f564;
  param_3[1] = &LAB_14837f57a;
  param_3[2] = &LAB_14837f58e;
  param_3[3] = &LAB_14837f5b4;
  param_3[4] = param_1;
  *(undefined4 *)(param_3 + 5) = 1;
  uVar1 = (**(code **)(*param_1 + 0x10))();
  FUN_14837f5c6(param_3 + 6,uVar1);
  return;
}



// FUNCTION 14837f5c6 FUN_14837f5c6 body=88 status=ok
// SIG undefined FUN_14837f5c6(void)

undefined8 * FUN_14837f5c6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1483b26ac(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 14837f61e FUN_14837f61e body=149 status=ok
// SIG undefined FUN_14837f61e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14837f61e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb46788) {
    FUN_144b3d300(&DAT_14cb46788);
    if (DAT_14cb46788 == -1) {
      DAT_14cb46778 = (undefined4 *)0x0;
      _DAT_14cb46780 = 1;
      FUN_1483b26ac(&DAT_14cb46778,1,0);
      *DAT_14cb46778 = 1;
      atexit((_func_5014 *)&LAB_143b13e8d);
      _Init_thread_footer(&DAT_14cb46788);
    }
  }
  return &DAT_14cb46778;
}



// FUNCTION 14837f6b4 FUN_14837f6b4 body=272 status=ok
// SIG undefined FUN_14837f6b4(void)

void FUN_14837f6b4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  longlong *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x38) != 0) goto LAB_14837f6d1;
  plVar3 = (longlong *)FUN_1483b28e9();
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0x10;
    plVar4 = *(longlong **)(param_1 + 0x40);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
LAB_14837f726:
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
      if (plVar3 != (longlong *)0x0) goto LAB_14837f748;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x38) = plVar3 + 2;
    plVar4 = *(longlong **)(param_1 + 0x40);
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x40) = plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_14837f726;
    }
LAB_14837f748:
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  local_30 = &local_28;
  local_38 = &LAB_143b1d69e;
  local_28 = param_1;
  (**(code **)(**(longlong **)(param_1 + 0x48) + 8))();
LAB_14837f6d1:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837f7c6 FUN_14837f7c6 body=437 status=ok
// SIG undefined FUN_14837f7c6(void)

void FUN_14837f7c6(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  double *pdVar5;
  double *pdVar6;
  undefined4 uVar7;
  undefined4 uVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar8;
  
  *param_3 = FUN_14837f97c;
  param_3[1] = &LAB_14837f9a4;
  param_3[2] = FUN_14837f9b6;
  param_3[3] = &LAB_14837fada;
  param_3[4] = param_1;
  *(undefined4 *)(param_3 + 5) = 0;
  uVar3 = (**(code **)(*param_1 + 0x10))();
  FUN_14837f5c6(param_3 + 6,uVar3);
  param_1[9] = *(longlong *)(param_2 + 0x38);
  FUN_14837f6b4(param_1);
  param_1[10] = -0x10000000000001;
  param_1[0xb] = 0x7fefffffffffffff;
  if ((int)param_1[2] == 1) {
    plVar4 = param_1 + 10;
LAB_14837f865:
    *plVar4 = 0;
  }
  else if ((int)param_1[2] == 2) {
    plVar4 = param_1 + 0xb;
    goto LAB_14837f865;
  }
  lVar2 = param_1[7];
  iVar1 = (int)param_1[1];
  if (iVar1 == 1) {
    pdVar6 = (double *)(lVar2 + 0x50);
    pdVar5 = (double *)(lVar2 + 0x58);
  }
  else if (iVar1 == 2) {
    pdVar6 = (double *)(lVar2 + 0x78);
    pdVar5 = (double *)(lVar2 + 0x80);
  }
  else if (iVar1 == 3) {
    pdVar6 = (double *)(lVar2 + 0xa0);
    pdVar5 = (double *)(lVar2 + 0xa8);
  }
  else {
    pdVar5 = (double *)(lVar2 + 0x30);
    pdVar6 = (double *)(lVar2 + 0x28);
  }
  if ((char)param_1[5] == '\x01') {
    dVar10 = (double)param_1[6];
  }
  else {
    dVar10 = *pdVar6 + *pdVar5;
  }
  param_1[0xc] = (longlong)((double)param_1[4] * (double)param_1[3] * dVar10);
  param_1[0xd] = (longlong)((double)param_1[3] * dVar10);
  if (*(int *)((longlong)param_1 + 0xc) == 2) {
    uVar8 = 0;
  }
  else {
    if (*(int *)((longlong)param_1 + 0xc) != 1) {
      uVar11 = 0x3f800000;
      uVar7 = 0x3f000000;
      uVar8 = 0x3f000000;
      uVar9 = 0;
      goto LAB_14837f910;
    }
    uVar8 = 0x3f800000;
  }
  uVar9 = 0x3f800000;
  uVar7 = 0;
  uVar11 = 0;
LAB_14837f910:
  *(undefined4 *)(param_1 + 0xe) = uVar9;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar7;
  *(undefined4 *)(param_1 + 0x10) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar7;
  *(undefined4 *)(param_1 + 0x11) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar11;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  return;
}



// FUNCTION 14837f97c FUN_14837f97c body=40 status=ok
// SIG undefined FUN_14837f97c(void)

void FUN_14837f97c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  float *pfVar1;
  double dVar2;
  
  dVar2 = (double)FUN_14837fc10(param_3);
  pfVar1 = (float *)*param_1;
  *param_1 = (longlong)(pfVar1 + 1);
  *pfVar1 = (float)dVar2;
  return;
}



// FUNCTION 14837f9b6 FUN_14837f9b6 body=291 status=ok
// SIG undefined FUN_14837f9b6(void)

void FUN_14837f9b6(undefined8 param_1,longlong *param_2,float *param_3,longlong param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float *pfVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  fVar2 = *(float *)*param_2;
  uVar10 = -(uint)(-fVar2 <= fVar2);
  dVar8 = (double)(float)(~uVar10 & (uint)-fVar2 | uVar10 & (uint)fVar2);
  dVar6 = *(double *)(param_4 + 0x60);
  fVar12 = 0.0;
  if (dVar6 < dVar8) {
    dVar7 = *(double *)(param_4 + 0x68);
    if (dVar7 <= dVar8) {
      fVar12 = 1.0;
    }
    else if ((dVar6 != dVar7) || (NAN(dVar6) || NAN(dVar7))) {
      fVar12 = (float)((dVar8 - dVar6) / (dVar7 - dVar6));
    }
    else {
      fVar12 = 0.5;
    }
  }
  pfVar1 = (float *)(param_4 + 0x70);
  pfVar9 = (float *)(param_4 + 0x78);
  fVar11 = 1.0 - fVar12;
  if (0.0 <= fVar2) {
    pfVar9 = (float *)(param_4 + 0x90);
    pfVar1 = (float *)(param_4 + 0x88);
  }
  fVar3 = *pfVar9;
  fVar4 = *(float *)(param_4 + 0x84);
  pfVar9 = (float *)(param_4 + 0x74);
  if (0.0 <= fVar2) {
    pfVar9 = (float *)(param_4 + 0x8c);
  }
  fVar2 = *pfVar9;
  fVar5 = *(float *)(param_4 + 0x80);
  *param_3 = fVar11 * *(float *)(param_4 + 0x7c) + fVar12 * *pfVar1;
  param_3[1] = fVar5 * fVar11 + fVar2 * fVar12;
  param_3[2] = fVar4 * fVar11 + fVar3 * fVar12;
  param_3[3] = 1.0;
  *param_2 = *param_2 + 4;
  return;
}



// FUNCTION 14837fb7a FUN_14837fb7a body=149 status=ok
// SIG undefined FUN_14837fb7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14837fb7a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb467a0) {
    FUN_144b3d300(&DAT_14cb467a0);
    if (DAT_14cb467a0 == -1) {
      DAT_14cb46790 = (undefined4 *)0x0;
      _DAT_14cb46798 = 1;
      FUN_1483b26ac(&DAT_14cb46790,1,0);
      *DAT_14cb46790 = 1;
      atexit((_func_5014 *)&LAB_143b13e9e);
      _Init_thread_footer(&DAT_14cb467a0);
    }
  }
  return &DAT_14cb46790;
}



// FUNCTION 14837fc10 FUN_14837fc10 body=185 status=ok
// SIG undefined FUN_14837fc10(void)

void FUN_14837fc10(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x98))
            (*(longlong **)(param_1 + 0x48),&local_4c,*(undefined8 *)(param_2 + 0xe0),
             *(undefined4 *)(param_2 + 0xe8));
  dVar1 = (double)FUN_14837fcca(param_1,local_4c);
  dVar2 = (double)FUN_14837fcca(param_1,local_48);
  dVar3 = (double)FUN_14837fcca(param_1,local_44);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(dVar3 * *(double *)(param_2 + 0x100) +
                dVar1 * *(double *)(param_2 + 0xf0) + dVar2 * *(double *)(param_2 + 0xf8));
}



// FUNCTION 14837fcca FUN_14837fcca body=106 status=ok
// SIG undefined FUN_14837fcca(void)

ulonglong FUN_14837fcca(longlong param_1,int param_2)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  double *pdVar4;
  longlong lVar5;
  ulonglong uVar6;
  double dVar7;
  
  iVar2 = *(int *)(param_1 + 8);
  lVar3 = **(longlong **)(param_1 + 0x38);
  lVar5 = (longlong)param_2 * 0x20;
  if (iVar2 == 1) {
    pdVar4 = (double *)(lVar3 + lVar5 + 8);
  }
  else if (iVar2 == 2) {
    pdVar4 = (double *)(lVar3 + lVar5 + 0x10);
  }
  else if (iVar2 == 3) {
    pdVar4 = (double *)(lVar3 + lVar5 + 0x18);
  }
  else {
    pdVar4 = (double *)(lVar3 + lVar5);
  }
  dVar1 = *pdVar4;
  dVar7 = *(double *)(param_1 + 0x58);
  if (dVar1 <= *(double *)(param_1 + 0x58)) {
    dVar7 = dVar1;
  }
  uVar6 = -(ulonglong)(dVar1 < *(double *)(param_1 + 0x50));
  return uVar6 & (ulonglong)*(double *)(param_1 + 0x50) | ~uVar6 & (ulonglong)dVar7;
}



// FUNCTION 14837fd34 FUN_14837fd34 body=121 status=ok
// SIG undefined FUN_14837fd34(void)

void FUN_14837fd34(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1483b31c2(param_1,iVar1);
    }
    FUN_1483b31a2((longlong)iVar1 * 0x40 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1483b3248(param_1,param_2,iVar1 - param_2);
    FUN_1483b32a2(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14837fdae FUN_14837fdae body=187 status=ok
// SIG undefined FUN_14837fdae(void)

void FUN_14837fdae(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < param_2 - iVar3) {
      FUN_1483b336e(param_1);
    }
    memset((void *)((longlong)iVar3 * 8 + *param_1),0,(longlong)(int)(param_2 - iVar3) << 3);
    return;
  }
  if (-1 < (int)param_2) {
    iVar2 = iVar3 - param_2;
    if (iVar2 == 0 || iVar3 < (int)param_2) {
      return;
    }
    _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
    FUN_1483b3432(_Dst,iVar2);
    iVar1 = (int)param_1[1] - iVar3;
    if (iVar1 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar2 * 8),(longlong)iVar1 << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - iVar2;
    FUN_1483b33f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14837fe6a FUN_14837fe6a body=307 status=ok
// SIG undefined FUN_14837fe6a(void)

void FUN_14837fe6a(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a12820(param_1 + 0x500,*(undefined4 *)(param_1 + 0x4c8),1);
  uVar2 = *(undefined8 *)(param_1 + 0x500);
  lVar6 = (longlong)*(int *)(param_1 + 0x4d8);
  local_48 = uVar2;
  if (lVar6 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
  }
  lVar4 = 0;
  do {
    (**(code **)(*(longlong *)(param_1 + 0x4e0) + 8 + lVar4))
              (&local_48,*(undefined8 *)(*(longlong *)(param_1 + 0x4e0) + 0x20 + lVar4));
    lVar4 = lVar4 + 0x40;
  } while (lVar6 << 6 != lVar4);
  local_48 = uVar2;
  FUN_140330574(param_1 + 0x510,*(undefined4 *)(param_1 + 0x548),1);
  lVar4 = 0;
  do {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x4e0) + 0x38 + lVar4 * 0x40);
    if (0 < iVar1) {
      lVar5 = *(longlong *)(param_1 + 0x4e0) + lVar4 * 0x40;
      uVar3 = 0;
      do {
        (**(code **)(lVar5 + 0x10))
                  (uVar3 & 0xffffffff,&local_48,
                   ((longlong)*(int *)(*(longlong *)(param_1 + 0x520) + lVar4 * 4) + uVar3) * 0x10 +
                   *(longlong *)(param_1 + 0x510),*(undefined8 *)(lVar5 + 0x20));
        uVar3 = uVar3 + 1;
      } while (iVar1 != (int)uVar3);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != lVar6);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14837ffba FUN_14837ffba body=295 status=ok
// SIG undefined FUN_14837ffba(void)

void FUN_14837ffba(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = (ulonglong)(uint)(*(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144));
  FUN_144a127d2(param_2,uVar4,1);
  if ((longlong)(int)param_2[1] != 0) {
    memset((void *)*param_2,(int)CONCAT71((int7)(uVar4 >> 8),0xff),(longlong)(int)param_2[1] << 2);
  }
  lVar3 = *(longlong *)(param_1 + 0x208);
  if (((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x28))) && (**(longlong **)(lVar3 + 0x20) != 0)) {
    local_78 = 0;
    uStack_70 = 0;
    local_58 = 0;
    local_48 = &PTR_LAB_14ae75650;
    local_68 = &LAB_143b1f860;
    local_80 = param_1;
    local_40 = **(longlong **)(lVar3 + 0x20);
    FUN_142984024();
    if (0 < (longlong)(int)uStack_70) {
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(local_78 + lVar3 * 8);
        lVar5 = (longlong)(int)plVar1[1];
        if (lVar5 != 0) {
          lVar2 = *plVar1;
          lVar6 = 0;
          do {
            *(int *)(*param_2 + (longlong)*(int *)(lVar2 + lVar6) * 4) = (int)lVar3;
            lVar6 = lVar6 + 4;
          } while (lVar5 * 4 != lVar6);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != (int)uStack_70);
    }
    FUN_146be9400(&local_78);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483800f8 FUN_1483800f8 body=148 status=ok
// SIG undefined FUN_1483800f8(void)

void FUN_1483800f8(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1483b273a(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x18 + *param_1),0,(longlong)(param_2 - iVar1) * 0x18);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_1483b27ce(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_1483b2834(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14838018e FUN_14838018e body=608 status=ok
// SIG undefined FUN_14838018e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14838018e(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  int *param_5,longlong param_6)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  float fVar10;
  undefined8 local_f8;
  undefined1 *local_f0;
  longlong local_e8;
  int *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  int *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined1 *local_90;
  undefined4 local_84;
  ulonglong local_80;
  undefined1 local_78 [56];
  
  puVar7 = &local_f8;
  local_80 = DAT_14c707940 ^ (ulonglong)local_78;
  if ((longlong)*(int *)(param_1 + 0x4c8) == 0) {
    local_f0 = (undefined1 *)0x0;
  }
  else {
    lVar9 = -((longlong)*(int *)(param_1 + 0x4c8) * 4 + 0x1eU & 0xfffffffffffffff0);
    puVar7 = (undefined8 *)((longlong)&local_f8 + lVar9);
    local_f0 = (undefined1 *)((longlong)&local_f8 + lVar9);
  }
  iVar1 = *(int *)(param_1 + 0x4d8);
  local_f8 = param_4;
  local_90 = local_f0;
  if (0 < (longlong)iVar1) {
    lVar9 = 0;
    do {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x4e0) + 0x20 + lVar9);
      pcVar3 = *(code **)(*(longlong *)(param_1 + 0x4e0) + lVar9);
      *(undefined8 *)((longlong)puVar7 + -0x28) = 0x148380238;
      (*pcVar3)(&local_90,param_3,uVar2);
      lVar9 = lVar9 + 0x40;
    } while ((longlong)iVar1 * 0x40 != lVar9);
  }
  puVar8 = local_f0;
  uVar2 = local_f8;
  local_98 = *(undefined4 *)
              (*(longlong *)(param_6 + 0x88) +
              (longlong)
              ((param_5[1] - *(int *)(param_6 + 0xc)) * *(int *)(param_6 + 0x18) +
              (*param_5 - *(int *)(param_6 + 8))) * 4);
  local_c0 = param_5;
  local_b8 = local_f8;
  local_a0 = param_6;
  local_e0 = param_5;
  pcVar3 = *(code **)(param_1 + 0x100);
  local_e8 = param_1;
  local_d8 = param_2;
  local_d0 = param_2;
  local_c8 = param_1;
  local_b0 = param_2;
  local_a8 = param_2;
  if (pcVar3 == (code *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x4f0);
    *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1483803e7;
    FUN_143b151ec(&local_c8,uVar2,puVar8,0x3f800000);
  }
  else {
    local_84 = *param_3;
    plVar6 = (longlong *)(param_1 + 0x120);
    if (*(longlong **)(param_1 + 0x110) != (longlong *)0x0) {
      plVar6 = *(longlong **)(param_1 + 0x110);
    }
    pcVar4 = *(code **)(*plVar6 + 8);
    *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1483802d5;
    uVar5 = (*pcVar4)();
    *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1483802e3;
    fVar10 = (float)(*pcVar3)(uVar5,param_5,uVar2,&local_84);
    puVar8 = local_f0;
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x4f0);
    *(undefined8 *)((longlong)puVar7 + -0x28) = 0x148380327;
    FUN_143b151ec(&local_c8,uVar2,puVar8,fVar10);
    uVar2 = *(undefined8 *)(param_1 + 0x4f0);
    uVar5 = *(undefined8 *)(param_1 + 0x500);
    *(undefined8 *)((longlong)puVar7 + -0x28) = 0x14838034c;
    FUN_143b151ec(&local_c8,uVar2,uVar5,1.0 - fVar10);
    if ((fVar10 == 0.0) && (!NAN(fVar10))) {
      puVar8 = *(undefined1 **)(param_1 + 0x500);
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x4f0);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x148380376;
  FUN_143b154c0(&local_e8,lVar9 + 0x10,puVar8);
  if ((local_80 ^ (ulonglong)local_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)puVar7 + -0x28) = &UNK_1483803b1;
  FUN_144d8e3a0();
}



// FUNCTION 1483803f4 FUN_1483803f4 body=98 status=ok
// SIG undefined FUN_1483803f4(void)

int FUN_1483803f4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x4d8);
  *(uint *)(param_1 + 0x4d8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4dc) < iVar1 + 1U) {
    FUN_1483b35f6((longlong *)(param_1 + 0x4d0),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x4d0);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return iVar1;
}



// FUNCTION 148380456 FUN_148380456 body=19 status=ok
// SIG undefined FUN_148380456(void)

undefined8 FUN_148380456(longlong param_1,int param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x4d0) + (longlong)param_2 * 0x10);
}



// FUNCTION 14838046a FUN_14838046a body=7 status=ok
// SIG undefined FUN_14838046a(void)

undefined4 FUN_14838046a(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x4d8);
}



// FUNCTION 148380472 FUN_148380472 body=44 status=ok
// SIG undefined FUN_148380472(void)

longlong * FUN_148380472(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x520) + (longlong)param_3 * 4);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x520) + 4 + (longlong)param_3 * 4);
  *param_2 = (longlong)iVar1 * 8 + *(longlong *)(param_1 + 0x540);
  *(int *)(param_2 + 1) = iVar2 - iVar1;
  return param_2;
}



// FUNCTION 14838049e FUN_14838049e body=8 status=ok
// SIG undefined FUN_14838049e(void)

void FUN_14838049e(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x490) = param_2;
  return;
}



// FUNCTION 1483804a6 FUN_1483804a6 body=7 status=ok
// SIG undefined FUN_1483804a6(void)

void FUN_1483804a6(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4a0) = param_2;
  return;
}



// FUNCTION 1483804ae FUN_1483804ae body=7 status=ok
// SIG undefined FUN_1483804ae(void)

void FUN_1483804ae(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4b0) = param_2;
  return;
}



// FUNCTION 14838054e FUN_14838054e body=113 status=ok
// SIG undefined FUN_14838054e(void)

void FUN_14838054e(double *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &DAT_14cb467a8;
  fVar1 = (float)FUN_1483b36c4(&local_38,(float)*param_1);
  fVar2 = (float)FUN_1483b36c4(&local_38,(float)param_1[1]);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar2 * fVar1);
}



// FUNCTION 14838062a FUN_14838062a body=113 status=ok
// SIG undefined FUN_14838062a(void)

void FUN_14838062a(double *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &DAT_14cb467c8;
  fVar1 = (float)FUN_1483b374e(&local_38,(float)*param_1);
  fVar2 = (float)FUN_1483b374e(&local_38,(float)param_1[1]);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar2 * fVar1);
}



// FUNCTION 148380706 FUN_148380706 body=203 status=ok
// SIG undefined FUN_148380706(void)

void FUN_148380706(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_58 [32];
  code *local_38;
  longlong **local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_2 + 0x38);
  param_1[1] = (longlong)plVar1;
  local_30 = &local_28;
  local_38 = FUN_143b1f8be;
  local_28 = param_1;
  (**(code **)(*plVar1 + 8))();
  param_1[0xd] = *(longlong *)(param_2 + 0x10);
  pcVar3 = FUN_148380856;
  if ((char)param_1[0xc] != '\0') {
    pcVar3 = FUN_1483807d2;
  }
  *param_3 = pcVar3;
  param_3[1] = &LAB_1483808da;
  param_3[2] = &LAB_148380914;
  param_3[3] = &LAB_148380970;
  param_3[4] = param_1;
  *(undefined4 *)(param_3 + 5) = 0;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  FUN_14837f5c6(param_3 + 6,uVar2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483807d2 FUN_1483807d2 body=131 status=ok
// SIG undefined FUN_1483807d2(void)

void FUN_1483807d2(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1483b3ce0(param_3,&local_24,param_2);
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_24;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_20;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148380856 FUN_148380856 body=131 status=ok
// SIG undefined FUN_148380856(void)

void FUN_148380856(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1483b41c6(param_3,&local_24,param_2);
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_24;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_20;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838097c FUN_14838097c body=150 status=ok
// SIG undefined FUN_14838097c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14838097c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb467f8) {
    FUN_144b3d300(&DAT_14cb467f8);
    if (DAT_14cb467f8 == -1) {
      DAT_14cb467e8 = (undefined4 *)0x0;
      _DAT_14cb467f0 = 1;
      FUN_1483b26ac(&DAT_14cb467e8,1,0);
      *DAT_14cb467e8 = 3;
      atexit((_func_5014 *)&LAB_143b15590);
      _Init_thread_footer(&DAT_14cb467f8);
    }
  }
  return &DAT_14cb467e8;
}



// FUNCTION 148380a12 FUN_148380a12 body=1442 status=ok
// SIG undefined FUN_148380a12(void)

void FUN_148380a12(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  int local_f8;
  uint local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar6 = (**(code **)(*param_1 + 0x10))();
  FUN_14837f5c6(param_3 + 6,uVar6);
  bVar2 = *(byte *)(param_1 + 1);
  if ((~bVar2 & 3) == 0) {
    if ((int)param_1[6] == 0) {
      puVar7 = &LAB_148381130;
      puVar8 = &LAB_1483810bc;
      puVar10 = &LAB_148381068;
      pcVar14 = FUN_148380fb6;
    }
    else {
      puVar7 = &LAB_1483812c8;
      puVar8 = &LAB_148381254;
      puVar10 = &LAB_148381200;
      pcVar14 = FUN_148381148;
    }
LAB_148380ae3:
    *param_3 = pcVar14;
    param_3[1] = puVar10;
    param_3[2] = puVar8;
    param_3[3] = puVar7;
    param_3[4] = param_1;
    *(undefined4 *)(param_3 + 5) = 0;
    param_1[7] = *(longlong *)(param_2 + 0x38);
    if (((*(byte *)(param_1 + 1) & 2) == 0) || ((int)param_1[6] != 0)) goto LAB_148380b23;
    lVar11 = 0x40;
    lVar9 = 0x10;
  }
  else {
    if ((bVar2 & 1) != 0) {
      puVar7 = &LAB_148381390;
      puVar8 = &LAB_14838136a;
      puVar10 = &LAB_148381358;
      pcVar14 = FUN_1483812e0;
      goto LAB_148380ae3;
    }
    lVar9 = 0x38;
    lVar11 = 0x38;
    if ((bVar2 & 2) != 0) {
      if ((int)param_1[6] == 0) {
        puVar7 = &LAB_1483814c8;
        puVar8 = &LAB_14838146c;
        puVar10 = &LAB_148381428;
        pcVar14 = FUN_1483813a2;
      }
      else {
        puVar7 = &LAB_148381600;
        puVar8 = &LAB_1483815a4;
        puVar10 = &LAB_148381560;
        pcVar14 = FUN_1483814d4;
      }
      goto LAB_148380ae3;
    }
  }
  *(undefined8 *)((longlong)param_1 + lVar11) = *(undefined8 *)(param_2 + lVar9);
LAB_148380b23:
  dVar15 = 90.0 - (double)param_1[5];
  dVar16 = 90.0;
  if (dVar15 <= 90.0) {
    dVar16 = dVar15;
  }
  dVar16 = cos((double)(~-(ulonglong)(dVar15 < 0.0) & (ulonglong)(dVar16 * 0.017453292519943295)));
  param_1[9] = (longlong)dVar16;
  iVar13 = *(int *)((longlong)param_1 + 0xc);
  if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar13);
  }
  plVar1 = param_1 + 10;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) != iVar13) {
    FUN_1447a8aa0(plVar1,iVar13);
    iVar13 = *(int *)((longlong)param_1 + 0xc);
  }
  local_f4 = (uint)((int)param_1[4] != 0);
  local_f8 = iVar13;
  if (0 < iVar13) {
    iVar12 = 0;
    do {
      FUN_1483b437a(&local_f8,&local_118,iVar12);
      dVar16 = local_118;
      if (0.0 < local_108) {
        dVar15 = SQRT(local_108 * local_108 + local_118 * local_118 + local_110 * local_110);
        dVar21 = 1.0 / dVar15;
        if (0.0 < dVar15) {
          dVar24 = local_108 * dVar21;
          dVar17 = local_110 * dVar21;
        }
        else {
          dVar17 = 0.0;
          dVar24 = 0.0;
        }
        iVar3 = (int)param_1[0xb];
        lVar9 = (longlong)iVar3;
        *(uint *)(param_1 + 0xb) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0x5c) < iVar3 + 1U) {
          FUN_1403e3958(plVar1,iVar3);
        }
        lVar11 = *plVar1;
        *(ulonglong *)(lVar11 + lVar9 * 0x18) =
             -(ulonglong)(0.0 < dVar15) & (ulonglong)(dVar16 * dVar21);
        *(double *)(lVar11 + 8 + lVar9 * 0x18) = dVar17;
        *(double *)(lVar11 + 0x10 + lVar9 * 0x18) = dVar24;
      }
      iVar12 = iVar12 + 1;
    } while (iVar13 != iVar12);
  }
  if (0 < (int)param_1[0xb]) {
    dVar15 = (double)param_1[3] * 0.5;
    dVar16 = 90.0;
    if (dVar15 <= 90.0) {
      dVar16 = dVar15;
    }
    lVar11 = 0;
    lVar9 = 0;
    do {
      lVar4 = param_1[10];
      dVar17 = *(double *)(lVar4 + 0x10 + lVar11) * DAT_14c8463c8 +
               *(double *)(lVar4 + lVar11) * DAT_14c8463b8 +
               DAT_14c8463c0 * *(double *)(lVar4 + 8 + lVar11);
      dVar21 = 1.0;
      if (dVar17 <= 1.0) {
        dVar21 = dVar17;
      }
      dVar18 = acos((double)(-(ulonglong)(dVar17 < -1.0) & 0xbff0000000000000 |
                            ~-(ulonglong)(dVar17 < -1.0) & (ulonglong)dVar21));
      dVar21 = *(double *)(lVar4 + 8 + lVar11);
      dVar23 = DAT_14c8463b8 * dVar21;
      dVar21 = dVar21 * DAT_14c8463c8;
      dVar22 = DAT_14c8463c8 * *(double *)(lVar4 + lVar11);
      dVar24 = *(double *)(lVar4 + lVar11) * DAT_14c8463c0;
      dVar17 = *(double *)(lVar4 + 0x10 + lVar11);
      dVar5 = DAT_14c8463b8 * dVar17;
      dVar17 = DAT_14c8463c0 * dVar17;
      dVar19 = (dVar18 * 57.29577951308232) / 90.0;
      dVar20 = 1.0;
      if (dVar19 <= 1.0) {
        dVar20 = dVar19;
      }
      dVar20 = (double)(~-(ulonglong)(dVar19 < 0.0) & (ulonglong)dVar20);
      dVar20 = (dVar18 * 57.29577951308232 -
               ((1.0 - dVar20) * 0.0 +
               dVar20 * (double)(-(ulonglong)(dVar15 < 0.0001) & 0x3f1a36e2eb1c432d |
                                ~-(ulonglong)(dVar15 < 0.0001) & (ulonglong)dVar16))) *
               0.017453292519943295 * 0.5;
      dVar18 = sin(dVar20);
      local_100 = cos(dVar20);
      local_118 = (dVar21 - dVar17) * dVar18;
      local_110 = (dVar5 - dVar22) * dVar18;
      local_108 = (dVar24 - dVar23) * dVar18;
      FUN_146bed047(&local_130,&local_118,lVar11 + lVar4);
      *(undefined8 *)(lVar4 + 0x10 + lVar11) = local_120;
      *(undefined8 *)(lVar4 + lVar11) = local_130;
      ((undefined8 *)(lVar4 + lVar11))[1] = uStack_128;
      lVar9 = lVar9 + 1;
      lVar11 = lVar11 + 0x18;
    } while (lVar9 < (int)param_1[0xb]);
  }
  if ((local_f0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148380fb6 FUN_148380fb6 body=176 status=ok
// SIG undefined FUN_148380fb6(void)

void FUN_148380fb6(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined1 auStack_48 [32];
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1483b456c(param_3,&local_28,param_2);
  local_28 = 1.0 - local_28;
  fVar3 = 1.0;
  if (local_28 <= 1.0) {
    fVar3 = local_28;
  }
  puVar1 = (uint *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = ~-(uint)(local_28 < 0.0) & (uint)fVar3;
  puVar2 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar2 + 1);
  *puVar2 = local_24;
  puVar2 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar2 + 1);
  *puVar2 = local_20;
  puVar2 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar2 + 1);
  *puVar2 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148381148 FUN_148381148 body=183 status=ok
// SIG undefined FUN_148381148(void)

void FUN_148381148(longlong *param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined1 auStack_48 [32];
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1483b4cf6(param_3,&local_28,param_2,param_2 + 200);
  local_28 = 1.0 - local_28;
  fVar3 = 1.0;
  if (local_28 <= 1.0) {
    fVar3 = local_28;
  }
  puVar1 = (uint *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = ~-(uint)(local_28 < 0.0) & (uint)fVar3;
  puVar2 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar2 + 1);
  *puVar2 = local_24;
  puVar2 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar2 + 1);
  *puVar2 = local_20;
  puVar2 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar2 + 1);
  *puVar2 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483812e0 FUN_1483812e0 body=119 status=ok
// SIG undefined FUN_1483812e0(void)

void FUN_1483812e0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  float fVar2;
  undefined1 auStack_48 [32];
  float local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1483b53ae(param_3,local_28,param_2);
  local_28[0] = 1.0 - local_28[0];
  fVar2 = 1.0;
  if (local_28[0] <= 1.0) {
    fVar2 = local_28[0];
  }
  puVar1 = (uint *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = ~-(uint)(local_28[0] < 0.0) & (uint)fVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483813a2 FUN_1483813a2 body=132 status=ok
// SIG undefined FUN_1483813a2(void)

void FUN_1483813a2(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1483b59e4(param_3,local_28,param_2);
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_24;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_20;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483814d4 FUN_1483814d4 body=139 status=ok
// SIG undefined FUN_1483814d4(void)

void FUN_1483814d4(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1483b6056(param_3,local_28,param_2,param_2 + 200);
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_24;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_20;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838160c FUN_14838160c body=587 status=ok
// SIG undefined FUN_14838160c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14838160c(longlong param_1)

{
  byte bVar1;
  int iVar2;
  _func_5014 *p_Var3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  
  bVar1 = *(byte *)(param_1 + 8);
  if ((~bVar1 & 3) == 0) {
    if (DAT_14cb46840 <=
        *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110)) {
      return &DAT_14cb46830;
    }
    puVar5 = &DAT_14cb46840;
    FUN_144b3d300(&DAT_14cb46840);
    if (DAT_14cb46840 != -1) {
      return &DAT_14cb46830;
    }
    DAT_14cb46830 = (undefined8 *)0x0;
    puVar4 = &DAT_14cb46830;
    _DAT_14cb46838 = 2;
    FUN_1483b26ac(&DAT_14cb46830,2,0);
    *DAT_14cb46830 = 0x300000001;
    p_Var3 = (_func_5014 *)&LAB_143b155a1;
  }
  else if ((bVar1 & 1) == 0) {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110);
    if ((bVar1 & 2) == 0) {
      if (DAT_14cb46888 <= iVar2) {
        return &DAT_14cb46878;
      }
      puVar5 = &DAT_14cb46888;
      FUN_144b3d300(&DAT_14cb46888);
      if (DAT_14cb46888 != -1) {
        return &DAT_14cb46878;
      }
      DAT_14cb46878 = (undefined4 *)0x0;
      puVar4 = &DAT_14cb46878;
      _DAT_14cb46880 = 1;
      FUN_1483b26ac(&DAT_14cb46878,1,0);
      *DAT_14cb46878 = 1;
      p_Var3 = (_func_5014 *)&LAB_143b155d4;
    }
    else {
      if (DAT_14cb46870 <= iVar2) {
        return &DAT_14cb46860;
      }
      puVar5 = &DAT_14cb46870;
      FUN_144b3d300(&DAT_14cb46870);
      if (DAT_14cb46870 != -1) {
        return &DAT_14cb46860;
      }
      DAT_14cb46860 = (undefined4 *)0x0;
      puVar4 = &DAT_14cb46860;
      _DAT_14cb46868 = 1;
      FUN_1483b26ac(&DAT_14cb46860,1,0);
      *DAT_14cb46860 = 3;
      p_Var3 = (_func_5014 *)&LAB_143b155c3;
    }
  }
  else {
    if (DAT_14cb46858 <=
        *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110)) {
      return &DAT_14cb46848;
    }
    puVar5 = &DAT_14cb46858;
    FUN_144b3d300(&DAT_14cb46858);
    if (DAT_14cb46858 != -1) {
      return &DAT_14cb46848;
    }
    DAT_14cb46848 = (undefined4 *)0x0;
    puVar4 = &DAT_14cb46848;
    _DAT_14cb46850 = 1;
    FUN_1483b26ac(&DAT_14cb46848,1,0);
    *DAT_14cb46848 = 1;
    p_Var3 = (_func_5014 *)&LAB_143b155b2;
  }
  atexit(p_Var3);
  _Init_thread_footer(puVar5);
  return puVar4;
}



// FUNCTION 148381858 FUN_148381858 body=1139 status=ok
// SIG undefined FUN_148381858(void)

void FUN_148381858(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  bool bVar2;
  float fVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_e8 [32];
  double local_c8 [3];
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  code *local_98;
  longlong **local_90;
  longlong *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = *(longlong **)(param_2 + 0x38);
  param_1[2] = (longlong)plVar1;
  local_90 = &local_88;
  local_98 = FUN_143b1f96e;
  local_88 = param_1;
  (**(code **)(*plVar1 + 8))();
  pcVar6 = FUN_148381d50;
  if ((char)param_1[0xd] != '\0') {
    pcVar6 = FUN_148381ccc;
  }
  *param_3 = pcVar6;
  param_3[1] = &LAB_148381dd4;
  param_3[2] = &LAB_148381e18;
  param_3[3] = &LAB_148381e3a;
  param_3[4] = param_1;
  *(undefined4 *)(param_3 + 5) = 0;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  FUN_14837f5c6(param_3 + 6,uVar4);
  (**(code **)(*(longlong *)param_1[2] + 0x88))((longlong *)param_1[2],local_c8);
  param_1[0x12] = local_a8;
  param_1[0x13] = lStack_a0;
  param_1[0x10] = (longlong)local_c8[2];
  param_1[0x11] = lStack_b0;
  param_1[0xe] = (longlong)local_c8[0];
  param_1[0xf] = (longlong)local_c8[1];
  uVar7 = (undefined4)param_1[0x10];
  uVar8 = (undefined4)((ulonglong)param_1[0x10] >> 0x20);
  dVar12 = (double)param_1[0xe];
  uVar9 = (undefined4)param_1[0xf];
  uVar11 = (undefined4)((ulonglong)param_1[0xf] >> 0x20);
  lVar5 = 0;
  do {
    local_c8[0] = (double)param_1[0x11] - dVar12;
    local_c8[1] = (double)param_1[0x12] - (double)CONCAT44(uVar11,uVar9);
    local_c8[2] = (double)param_1[0x13] - (double)CONCAT44(uVar8,uVar7);
    if (local_c8[lVar5] <= 9.999999974752427e-07 && local_c8[lVar5] != 9.999999974752427e-07) {
      local_c8[0] = (dVar12 + (double)param_1[0x11]) * 0.5;
      local_c8[1] = ((double)CONCAT44(uVar11,uVar9) + (double)param_1[0x12]) * 0.5;
      local_c8[2] = ((double)CONCAT44(uVar8,uVar7) + (double)param_1[0x13]) * 0.5;
      param_1[lVar5 + 0xe] = (longlong)(local_c8[lVar5] + -9.999999974752427e-07);
      dVar14 = (double)param_1[0x10];
      uVar7 = SUB84(dVar14,0);
      uVar8 = (undefined4)((ulonglong)dVar14 >> 0x20);
      dVar12 = (double)param_1[0xe];
      dVar13 = (double)param_1[0xf];
      uVar9 = SUB84(dVar13,0);
      uVar11 = (undefined4)((ulonglong)dVar13 >> 0x20);
      local_c8[0] = ((double)param_1[0x11] + dVar12) * 0.5;
      local_c8[1] = ((double)param_1[0x12] + dVar13) * 0.5;
      local_c8[2] = ((double)param_1[0x13] + dVar14) * 0.5;
      param_1[lVar5 + 0x11] = (longlong)(local_c8[lVar5] + 9.999999974752427e-07);
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  *(undefined4 *)(param_1 + 0x15) = DAT_14c846338;
  param_1[0x14] = DAT_14c846330;
  switch((int)param_1[1]) {
  case 1:
    dVar14 = (double)param_1[0x11] - dVar12;
    dVar13 = ((dVar12 + (double)param_1[0x11]) * 0.5 - dVar12) /
             (double)(-(ulonglong)(0.0 <= dVar14) & (ulonglong)dVar14);
    dVar12 = (double)param_1[0x12] - (double)CONCAT44(uVar11,uVar9);
    dVar12 = (((double)CONCAT44(uVar11,uVar9) + (double)param_1[0x12]) * 0.5 -
             (double)CONCAT44(uVar11,uVar9)) /
             (double)(-(ulonglong)(0.0 <= dVar12) & (ulonglong)dVar12);
    dVar14 = (double)param_1[0x13] - (double)CONCAT44(uVar8,uVar7);
    dVar14 = (((double)CONCAT44(uVar8,uVar7) + (double)param_1[0x13]) * 0.5 -
             (double)CONCAT44(uVar8,uVar7)) /
             (double)(-(ulonglong)(0.0 <= dVar14) & (ulonglong)dVar14);
    goto LAB_148381b44;
  case 2:
  case 3:
    dVar14 = (DAT_14c8463c8 + DAT_14c846520) * 0.5;
    dVar12 = (DAT_14c8463c0 + DAT_14c846518) * 0.5;
    dVar13 = (DAT_14c8463b8 + DAT_14c846510) * 0.5;
LAB_148381b44:
    *(float *)(param_1 + 0x14) = (float)dVar13;
    *(float *)((longlong)param_1 + 0xa4) = (float)dVar12;
    *(float *)(param_1 + 0x15) = (float)dVar14;
    break;
  case 4:
    fVar3 = 1.0;
    if ((float)DAT_14c84635c <= 1.0) {
      fVar3 = (float)DAT_14c84635c;
    }
    fVar10 = 1.0;
    if (DAT_14c84635c._4_4_ <= 1.0) {
      fVar10 = DAT_14c84635c._4_4_;
    }
    bVar2 = DAT_14c84635c._4_4_ < 0.0;
    *(uint *)(param_1 + 0x14) = ~-(uint)((float)DAT_14c84635c < 0.0) & (uint)fVar3;
    *(uint *)((longlong)param_1 + 0xa4) = ~-(uint)bVar2 & (uint)fVar10;
    *(undefined4 *)(param_1 + 0x15) = 0;
    break;
  case 5:
  case 7:
    param_1[0x14] = 0x3f36b6b73f800000;
    *(undefined4 *)(param_1 + 0x15) = 0x3f41c1c2;
    *(undefined4 *)(param_3 + 5) = 1;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x15) = DAT_14c846358;
    param_1[0x14] = DAT_14c846350;
  }
  if ((local_80 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148381ccc FUN_148381ccc body=131 status=ok
// SIG undefined FUN_148381ccc(void)

void FUN_148381ccc(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1483b68e4(param_3,&local_24,param_2);
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_24;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_20;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148381d50 FUN_148381d50 body=131 status=ok
// SIG undefined FUN_148381d50(void)

void FUN_148381d50(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1483b6fdc(param_3,&local_24,param_2);
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_24;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_20;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148381e4c FUN_148381e4c body=150 status=ok
// SIG undefined FUN_148381e4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148381e4c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb468a0) {
    FUN_144b3d300(&DAT_14cb468a0);
    if (DAT_14cb468a0 == -1) {
      DAT_14cb46890 = (undefined4 *)0x0;
      _DAT_14cb46898 = 1;
      FUN_1483b26ac(&DAT_14cb46890,1,0);
      *DAT_14cb46890 = 3;
      atexit((_func_5014 *)&LAB_143b155e5);
      _Init_thread_footer(&DAT_14cb468a0);
    }
  }
  return &DAT_14cb46890;
}



// FUNCTION 148381ee2 FUN_148381ee2 body=97 status=ok
// SIG undefined FUN_148381ee2(void)

void FUN_148381ee2(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_3 = FUN_148381f44;
  param_3[1] = &LAB_148381fdc;
  param_3[2] = &LAB_148382014;
  param_3[4] = param_1;
  *(undefined4 *)(param_3 + 5) = 0;
  uVar1 = (**(code **)(*param_1 + 0x10))();
  FUN_14837f5c6(param_3 + 6,uVar1);
  param_1[4] = *(longlong *)(param_2 + 0x38);
  return;
}



// FUNCTION 148381f44 FUN_148381f44 body=150 status=ok
// SIG undefined FUN_148381f44(void)

void FUN_148381f44(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1483820ba(param_3,&local_28,param_2);
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_28;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_24;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_20;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148382024 FUN_148382024 body=150 status=ok
// SIG undefined FUN_148382024(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148382024(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb468b8) {
    FUN_144b3d300(&DAT_14cb468b8);
    if (DAT_14cb468b8 == -1) {
      DAT_14cb468a8 = (undefined4 *)0x0;
      _DAT_14cb468b0 = 1;
      FUN_1483b26ac(&DAT_14cb468a8,1,0);
      *DAT_14cb468a8 = 4;
      atexit((_func_5014 *)&LAB_143b155f6);
      _Init_thread_footer(&DAT_14cb468b8);
    }
  }
  return &DAT_14cb468a8;
}



// FUNCTION 1483820ba FUN_1483820ba body=327 status=ok
// SIG undefined FUN_1483820ba(void)

undefined8 * FUN_1483820ba(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  float *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  float local_64;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = *(undefined8 *)(param_3 + 0xe0);
  uVar1 = *(undefined4 *)(param_3 + 0xe8);
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))
                     (*(longlong **)(param_1 + 0x20),uVar3);
  if (puVar5 == (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0x3f80000000000000;
  }
  else {
    piVar4 = (int *)*puVar5;
    uVar2 = *(undefined4 *)(puVar5 + 1);
    *param_2 = 0;
    param_2[1] = 0x3f80000000000000;
    if (piVar4 != (int *)0x0) {
      local_80 = &local_68;
      local_88 = uVar2;
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0xf0))
                (*(longlong **)(param_1 + 0x20),uVar3,uVar1,param_3 + 0xf0);
      local_78 = 0;
      uStack_70 = 0x3f80000000000000;
      local_60 = 0.0;
      if (0.0 <= local_68) {
        local_60 = 1.0;
        if ((double)local_68 <= 1.0) {
          local_60 = (double)local_68;
        }
      }
      local_58 = 0.0;
      if ((0.0 <= local_64) && (local_58 = 1.0, (double)local_64 <= 1.0)) {
        local_58 = (double)local_64;
      }
      local_58 = (double)piVar4[1] * local_58;
      local_60 = local_60 * (double)*piVar4;
      FUN_1483b7358(piVar4,param_2,&local_60,&local_78);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148382214 FUN_148382214 body=114 status=ok
// SIG undefined FUN_148382214(void)

void FUN_148382214(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_3 = FUN_148382286;
  param_3[1] = &LAB_148381fdc;
  param_3[2] = &LAB_148382014;
  param_3[3] = &LAB_148382202;
  param_3[4] = param_1;
  *(undefined4 *)(param_3 + 5) = 0;
  uVar1 = (**(code **)(*param_1 + 0x10))();
  FUN_14837f5c6(param_3 + 6,uVar1);
  param_1[4] = *(longlong *)(param_2 + 0x38);
  *(int *)((longlong)param_1 + 0x3c) = (int)param_1[6];
  return;
}



// FUNCTION 148382286 FUN_148382286 body=150 status=ok
// SIG undefined FUN_148382286(void)

void FUN_148382286(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14838231e(param_3,&local_28,param_2);
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_28;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_24;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_20;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838231e FUN_14838231e body=336 status=ok
// SIG undefined FUN_14838231e(void)

undefined8 * FUN_14838231e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int *piVar3;
  uint uVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  float *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  float local_64;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0x3f80000000000000;
  uVar2 = *(undefined8 *)(param_3 + 0xe0);
  uVar1 = *(undefined4 *)(param_3 + 0xe8);
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xb0))
                    (*(longlong **)(param_1 + 0x20),uVar2,uVar1);
  if (((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x3c))) &&
     (piVar3 = *(int **)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar4 * 0x10),
     piVar3 != (int *)0x0)) {
    local_88 = *(undefined4 *)(param_1 + 0x38);
    local_80 = &local_68;
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0xf0))
              (*(longlong **)(param_1 + 0x20),uVar2,uVar1,param_3 + 0xf0);
    local_78 = 0;
    uStack_70 = 0x3f80000000000000;
    local_60 = 0.0;
    if (0.0 <= local_68) {
      local_60 = 1.0;
      if ((double)local_68 <= 1.0) {
        local_60 = (double)local_68;
      }
    }
    local_58 = 0.0;
    if ((0.0 <= local_64) && (local_58 = 1.0, (double)local_64 <= 1.0)) {
      local_58 = (double)local_64;
    }
    local_58 = (double)piVar3[1] * local_58;
    local_60 = local_60 * (double)*piVar3;
    FUN_1483b7358(piVar3,param_2,&local_60,&local_78);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148382470 FUN_148382470 body=82 status=ok
// SIG undefined FUN_148382470(void)

void FUN_148382470(longlong param_1)

{
  if (*(char *)(param_1 + 0x19) == '\0') {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x14);
    *(longlong *)(param_1 + 0x38) = param_1 + 0x20;
    *(undefined8 *)(param_1 + 0x40) = 0;
    FUN_1483b75a2(param_1 + 0x30);
    *(ulonglong *)(param_1 + 0x40) =
         (ulonglong)
         (uint)(*(int *)(**(longlong **)(param_1 + 0x38) + 0x214) +
               *(int *)(**(longlong **)(param_1 + 0x38) + 0x218));
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  return;
}



// FUNCTION 1483824c2 FUN_1483824c2 body=412 status=ok
// SIG undefined FUN_1483824c2(void)

void FUN_1483824c2(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  double dVar2;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined8 *local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined1 local_e0 [28];
  undefined4 local_c4;
  undefined1 local_c0 [8];
  undefined8 local_b8 [2];
  longlong local_a8;
  longlong *local_98;
  longlong local_88 [4];
  undefined1 local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_e8 = -DAT_14c8463c8;
  local_110 = *param_2;
  uStack_108 = param_2[1];
  local_100 = 0x4059000000000000;
  local_f8._8_4_ = SUB84(DAT_14c8463c0,0);
  local_f8._0_8_ = -DAT_14c8463b8;
  local_f8._12_4_ = (int)((ulonglong)-DAT_14c8463c0 >> 0x20);
  dVar2 = DAT_14c8463c8 * DAT_14c8463c8 +
          DAT_14c8463b8 * DAT_14c8463b8 + DAT_14c8463c0 * DAT_14c8463c0;
  if (9.99999993922529e-09 < dVar2) {
    dVar2 = 1.0 / SQRT(dVar2);
    local_f8._8_8_ = -DAT_14c8463c0 * dVar2;
    local_f8._0_8_ = -DAT_14c8463b8 * dVar2;
    local_e8 = dVar2 * local_e8;
  }
  local_120 = local_b8;
  local_b8[0] = 0x7fefffffffffffff;
  local_a8 = 0;
  local_98 = (longlong *)0x0;
  local_68 = 0;
  local_128 = local_e0;
  (**(code **)(param_1[6] + 0x30))(param_1 + 6,&local_110,local_c0,&local_c4);
  if (local_a8 != 0) {
    plVar1 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar1 = local_88;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  (**(code **)(*param_1 + 0x10))(param_1,local_c4,param_2,param_3);
  if ((local_50 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148382660 FUN_148382660 body=84 status=ok
// SIG undefined FUN_148382660(void)

undefined4 FUN_148382660(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 local_38 [28];
  undefined4 local_1c;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = local_38;
  local_40 = param_3;
  (**(code **)(*param_1 + 0x30))(param_1,param_2,local_18,&local_1c);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483826b6 FUN_1483826b6 body=689 status=ok
// SIG undefined FUN_1483826b6(void)

undefined8 FUN_1483826b6(longlong param_1,uint param_2,undefined8 param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_a8 [32];
  uint *local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_4 = param_2;
  if ((-1 < (int)param_2) &&
     (lVar10 = *(longlong *)(param_1 + 8),
     (int)param_2 < *(int *)(lVar10 + 0x140) * 0x200 + *(int *)(lVar10 + 0x144))) {
    uVar17 = (ulonglong)(param_2 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar10 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
                           uVar17 * 2) - 1U) < 0xfffe) {
      lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
      uVar9 = *(undefined8 *)(lVar10 + uVar17 * 0xc);
      param_4[3] = *(uint *)(lVar10 + 8 + uVar17 * 0xc);
      *(undefined8 *)(param_4 + 1) = uVar9;
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
      lVar7 = *(longlong *)(lVar10 + (ulonglong)(param_4[3] >> 9) * 8);
      uVar17 = (ulonglong)param_4[3] & 0x1ff;
      local_38 = *(undefined8 *)(lVar7 + 0x10 + uVar17 * 0x18);
      puVar12 = (undefined8 *)(lVar7 + uVar17 * 0x18);
      local_48 = *puVar12;
      uStack_40 = puVar12[1];
      lVar7 = *(longlong *)(lVar10 + (ulonglong)(param_4[2] >> 9) * 8);
      uVar17 = (ulonglong)param_4[2] & 0x1ff;
      local_50 = *(undefined8 *)(lVar7 + 0x10 + uVar17 * 0x18);
      puVar12 = (undefined8 *)(lVar7 + uVar17 * 0x18);
      local_60 = *puVar12;
      uStack_58 = puVar12[1];
      lVar10 = *(longlong *)(lVar10 + (ulonglong)(param_4[1] >> 9) * 8);
      uVar17 = (ulonglong)param_4[1] & 0x1ff;
      local_68 = *(undefined8 *)(lVar10 + 0x10 + uVar17 * 0x18);
      puVar12 = (undefined8 *)(lVar10 + uVar17 * 0x18);
      local_78 = *puVar12;
      uStack_70 = puVar12[1];
      puVar12 = &local_78;
      puVar14 = param_4 + 4;
      for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
        *(undefined8 *)puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 2;
      }
      uVar16 = param_2 * 3 + 2;
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x78);
      uVar16 = *(uint *)(*(longlong *)(lVar10 + (ulonglong)(uVar16 >> 9) * 8) +
                        (ulonglong)(uVar16 & 0x1ff) * 4);
      uVar11 = param_2 * 3 + 1;
      uVar11 = *(uint *)(*(longlong *)(lVar10 + (ulonglong)(uVar11 >> 9) * 8) +
                        (ulonglong)(uVar11 & 0x1ff) * 4);
      uVar6 = *(uint *)(*(longlong *)(lVar10 + (ulonglong)(param_2 * 3 >> 9) * 8) +
                       (ulonglong)(param_2 * 3 & 0x1ff) * 4);
      param_4[0x16] = uVar6;
      param_4[0x17] = uVar11;
      param_4[0x18] = uVar16;
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48);
      lVar7 = *(longlong *)(lVar10 + (ulonglong)(uVar16 >> 5 & 0x3fffff8));
      uVar17 = (ulonglong)((uVar16 & 0xff) << 3);
      lVar8 = *(longlong *)(lVar10 + (ulonglong)(uVar11 >> 5 & 0x3fffff8));
      uVar13 = (ulonglong)((uVar11 & 0xff) << 3);
      fVar1 = *(float *)(lVar7 + 4 + uVar17);
      lVar10 = *(longlong *)(lVar10 + (ulonglong)(uVar6 >> 5 & 0x3fffff8));
      uVar15 = (ulonglong)((uVar6 & 0xff) << 3);
      fVar2 = *(float *)(lVar8 + 4 + uVar13);
      fVar3 = *(float *)(lVar7 + uVar17);
      fVar4 = *(float *)(lVar8 + uVar13);
      fVar5 = *(float *)(lVar10 + 4 + uVar15);
      *(double *)(param_4 + 0x1a) = (double)*(float *)(lVar10 + uVar15);
      *(double *)(param_4 + 0x1c) = (double)fVar5;
      *(double *)(param_4 + 0x1e) = (double)fVar4;
      *(double *)(param_4 + 0x20) = (double)fVar2;
      local_88 = param_4 + 0x22;
      *(double *)(param_4 + 0x22) = (double)fVar3;
      *(double *)(param_4 + 0x24) = (double)fVar1;
      FUN_146c8e3d3(&local_78,param_3,param_4 + 0x1a,param_4 + 0x1e);
      *(undefined8 *)(param_4 + 0x2a) = local_68;
      *(undefined8 *)(param_4 + 0x26) = local_78;
      *(undefined8 *)(param_4 + 0x28) = uStack_70;
      local_88 = *(uint **)(param_4 + 0x28);
      uStack_80 = param_4[0x2a];
      uStack_7c = param_4[0x2b];
      FUN_146c148ec(*(undefined8 *)(param_1 + 8),&local_78,*param_4,*(undefined8 *)(param_4 + 0x26))
      ;
      *(undefined8 *)(param_4 + 0x30) = local_68;
      param_4[0x2c] = (uint)local_78;
      param_4[0x2d] = local_78._4_4_;
      param_4[0x2e] = (uint)uStack_70;
      param_4[0x2f] = uStack_70._4_4_;
      uVar9 = 1;
      goto LAB_148382723;
    }
  }
  uVar9 = 0;
LAB_148382723:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148382968 FUN_148382968 body=108 status=ok
// SIG undefined FUN_148382968(void)

void FUN_148382968(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_3 = FUN_1483829d4;
  param_3[1] = &LAB_148382a6c;
  param_3[2] = &LAB_148382aba;
  param_3[3] = &LAB_148382aca;
  param_3[4] = param_1;
  *(undefined4 *)(param_3 + 5) = 0;
  uVar1 = (**(code **)(*param_1 + 0x10))();
  FUN_14837f5c6(param_3 + 6,uVar1);
  param_1[0xb] = *(longlong *)(param_2 + 0x38);
  return;
}



// FUNCTION 1483829d4 FUN_1483829d4 body=150 status=ok
// SIG undefined FUN_1483829d4(void)

void FUN_1483829d4(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148382b72(param_3,&local_28,param_2);
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_28;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_24;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_20;
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar1 + 1);
  *puVar1 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148382adc FUN_148382adc body=150 status=ok
// SIG undefined FUN_148382adc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148382adc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb468d0) {
    FUN_144b3d300(&DAT_14cb468d0);
    if (DAT_14cb468d0 == -1) {
      DAT_14cb468c0 = (undefined4 *)0x0;
      _DAT_14cb468c8 = 1;
      FUN_1483b26ac(&DAT_14cb468c0,1,0);
      *DAT_14cb468c0 = 4;
      atexit((_func_5014 *)&LAB_143b15607);
      _Init_thread_footer(&DAT_14cb468d0);
    }
  }
  return &DAT_14cb468c0;
}



// FUNCTION 148382b72 FUN_148382b72 body=674 status=ok
// SIG undefined FUN_148382b72(void)

undefined4 * FUN_148382b72(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_128 [32];
  float *local_108;
  float *local_100;
  float *local_f8;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar3 = *(undefined8 *)(param_3 + 0xe0);
  uVar2 = *(undefined4 *)(param_3 + 0xe8);
  uVar4 = *(undefined4 *)(param_1 + 0x44);
  uVar5 = *(undefined4 *)(param_1 + 0x48);
  uVar6 = *(undefined4 *)(param_1 + 0x4c);
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  cVar7 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x90))
                    (*(longlong **)(param_1 + 0x58),uVar3,uVar2);
  if (cVar7 != '\0') {
    local_f8 = &local_e8;
    local_100 = &local_e0;
    local_108 = &local_d8;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0xa8))
              (*(longlong **)(param_1 + 0x58),uVar3,uVar2,*(undefined4 *)(param_1 + 0x50));
    fVar12 = ((local_e8 * local_d4 - local_d8 * local_e4) +
             (local_e0 * local_e4 - local_e8 * local_dc) +
             (local_d8 * local_dc - local_e0 * local_d4)) * 0.5;
    uVar8 = -(uint)(-fVar12 <= fVar12);
    fVar11 = (float)(~uVar8 & (uint)-fVar12 | (uint)fVar12 & uVar8);
    fVar12 = (float)*(double *)(param_3 + 0x100) * fVar11;
    fVar10 = (float)*(double *)(param_3 + 0xf8) * fVar11;
    fVar11 = fVar11 * (float)*(double *)(param_3 + 0xf0);
    fVar9 = (fVar12 + fVar12) /
            SQRT((local_e0 - local_e8) * (local_e0 - local_e8) +
                 (local_dc - local_e4) * (local_dc - local_e4));
    fVar10 = (fVar10 + fVar10) /
             SQRT((local_d8 - local_e0) * (local_d8 - local_e0) +
                  (local_d4 - local_dc) * (local_d4 - local_dc));
    fVar12 = (fVar11 + fVar11) /
             SQRT((local_e8 - local_d8) * (local_e8 - local_d8) +
                  (local_e4 - local_d4) * (local_e4 - local_d4));
    if (fVar10 <= fVar12) {
      fVar12 = fVar10;
    }
    if (fVar9 <= fVar12) {
      fVar12 = fVar9;
    }
    puVar1 = (undefined4 *)
             (param_1 + 0x20 +
             (ulonglong)(*(float *)(param_1 + 0x18) <= fVar12 / (float)*(double *)(param_1 + 8)) *
             0x10);
    uVar2 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    *param_2 = *puVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
  }
  if ((local_d0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148382e16 FUN_148382e16 body=993 status=ok
// SIG undefined FUN_148382e16(void)

void FUN_148382e16(longlong param_1)

{
  longlong *plVar1;
  DWORD *pDVar2;
  uint uVar3;
  undefined *puVar4;
  longlong lVar5;
  double dVar6;
  code *pcVar7;
  ulonglong *puVar8;
  int iVar9;
  longlong lVar10;
  undefined *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_b8 [32];
  longlong local_98;
  DWORD *local_90;
  LARGE_INTEGER local_88;
  DWORD DStack_80;
  DWORD DStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 0x98) = 0;
  QueryPerformanceCounter(&local_88);
  dVar6 = DAT_14c83f420;
  lVar17 = CONCAT44(local_88.s.HighPart,local_88.s.LowPart);
  if ((((*(longlong *)(param_1 + 8) != 0) &&
       (lVar14 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x208), lVar14 != 0)) &&
      (*(longlong *)(lVar14 + 0x40) != 0)) && (*(longlong *)(param_1 + 0x38) != 0)) {
    plVar1 = (longlong *)(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x100) = 0;
    if (*(int *)(param_1 + 0x104) < 0) {
      FUN_1483b854c(plVar1);
    }
    if (*(int *)(param_1 + 0x40) == 0) {
      puVar11 = &DAT_14cb468d8;
      if (*(undefined **)(param_1 + 0x48) != (undefined *)0x0) {
        puVar11 = *(undefined **)(param_1 + 0x48);
      }
      iVar9 = *(int *)(param_1 + 0x100);
      *(uint *)(param_1 + 0x100) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x104) < iVar9 + 1U) {
        FUN_1483b857c(plVar1,iVar9);
      }
      *(undefined **)(*plVar1 + (longlong)iVar9 * 8) = puVar11;
      pcVar7 = FUN_1483831f8;
    }
    else {
      lVar14 = -0x40;
      local_98 = lVar17;
      do {
        puVar11 = &DAT_14cb468d8;
        if (lVar14 == -0x10) {
          puVar11 = &DAT_14cb468e8;
        }
        puVar4 = *(undefined **)(param_1 + 0x98 + lVar14);
        iVar9 = *(int *)(param_1 + 0x100);
        *(uint *)(param_1 + 0x100) = iVar9 + 1U;
        if (*(uint *)(param_1 + 0x104) < iVar9 + 1U) {
          FUN_1483b857c(plVar1,iVar9);
        }
        if (puVar4 != (undefined *)0x0) {
          puVar11 = puVar4;
        }
        *(undefined **)(*plVar1 + (longlong)iVar9 * 8) = puVar11;
        lVar14 = lVar14 + 0x10;
      } while (lVar14 != 0);
      pcVar7 = FUN_1483833ae;
      lVar17 = local_98;
    }
    *(code **)(param_1 + 0x138) = pcVar7;
    uVar3 = *(uint *)(param_1 + 0x100);
    uVar12 = (ulonglong)uVar3;
    if (uVar12 != 0) {
      *(undefined4 *)(param_1 + 0x120) = 0;
      *(undefined4 *)(param_1 + 0x124) = 0;
      *(undefined4 *)(param_1 + 0x128) = 0;
      *(undefined4 *)(param_1 + 300) = 0x3f800000;
      iVar9 = *(int *)(param_1 + 0x114);
      local_90 = (DWORD *)(param_1 + 0x120);
      FUN_1483b32e0(*(undefined8 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x110));
      *(undefined4 *)(param_1 + 0x110) = 0;
      if ((iVar9 < 0) && (*(int *)(param_1 + 0x114) != 0)) {
        FUN_1483b97aa(param_1 + 0x108);
      }
      FUN_14837fd34(param_1 + 0x108,uVar12);
      *(undefined4 *)(param_1 + 0x130) = 0;
      if (0 < (int)uVar3) {
        uVar15 = 0;
        do {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + uVar15 * 8);
          lVar16 = uVar15 * 0x40;
          (**(code **)(*plVar1 + 8))(plVar1,param_1,*(longlong *)(param_1 + 0x108) + lVar16);
          lVar14 = *(longlong *)(param_1 + 0x108);
          lVar10 = (longlong)*(int *)(lVar14 + 0x38 + lVar16);
          iVar9 = *(int *)(param_1 + 0x130);
          if (lVar10 != 0) {
            lVar5 = *(longlong *)(lVar14 + 0x30 + lVar16);
            lVar13 = 0;
            do {
              iVar9 = iVar9 + *(int *)(lVar5 + lVar13);
              *(int *)(param_1 + 0x130) = iVar9;
              lVar13 = lVar13 + 4;
            } while (lVar10 * 4 != lVar13);
          }
          if (4 < iVar9) goto LAB_148382f4a;
          (**(code **)(lVar14 + 8 + lVar16))(&local_90,*(undefined8 *)(lVar14 + 0x20 + lVar16));
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar12);
      }
      uVar12 = (ulonglong)
               *(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x208) + 0x40) +
                        0x38) | 0x100000000;
      *(ulonglong *)(param_1 + 0xe4) = uVar12;
      puVar8 = (ulonglong *)FUN_14001cc68(0x30,0x10);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      lVar14 = *(longlong *)(param_1 + 0xf0);
      *(ulonglong **)(param_1 + 0xf0) = puVar8;
      if (lVar14 != 0) {
        if (*(longlong *)(lVar14 + 8) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar14);
        uVar12 = *(ulonglong *)(param_1 + 0xe4);
        puVar8 = *(ulonglong **)(param_1 + 0xf0);
      }
      *puVar8 = uVar12;
      puVar8[4] = (longlong)(int)uVar12;
      puVar8[5] = (longlong)uVar12 >> 0x20;
      FUN_1483b251e(puVar8 + 1,((longlong)uVar12 >> 0x20) * (longlong)(int)uVar12,1);
      lVar14 = *(longlong *)(param_1 + 0xf0);
      local_88.s.LowPart = *(DWORD *)(param_1 + 0x120);
      local_88.s.HighPart = *(DWORD *)(param_1 + 0x124);
      DStack_80 = *(DWORD *)(param_1 + 0x128);
      DStack_7c = *(DWORD *)(param_1 + 300);
      lVar10 = *(longlong *)(lVar14 + 0x28) * *(longlong *)(lVar14 + 0x20);
      if (0 < lVar10) {
        lVar16 = 0;
        do {
          pDVar2 = (DWORD *)(*(longlong *)(lVar14 + 8) + lVar16);
          *pDVar2 = local_88.s.LowPart;
          pDVar2[1] = local_88.s.HighPart;
          pDVar2[2] = DStack_80;
          pDVar2[3] = DStack_7c;
          lVar16 = lVar16 + 0x10;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      (**(code **)(param_1 + 0x138))(param_1);
    }
  }
LAB_148382f4a:
  QueryPerformanceCounter(&local_88);
  *(double *)(param_1 + 0x98) =
       (((double)CONCAT44(local_88.s.HighPart,local_88.s.LowPart) * DAT_14c83f420 + 16777216.0) -
       ((double)lVar17 * dVar6 + 16777216.0)) + *(double *)(param_1 + 0x98);
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483831f8 FUN_1483831f8 body=436 status=ok
// SIG undefined FUN_1483831f8(void)

void FUN_1483831f8(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 auStack_e8 [40];
  uint local_c0;
  undefined8 *local_b8;
  ulonglong local_a8;
  ulonglong *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  ulonglong *local_90;
  ulonglong local_88;
  int local_80;
  undefined4 local_7c;
  ulonglong local_78;
  undefined8 *local_70;
  ulonglong *local_68;
  undefined8 local_60;
  int local_58;
  code *local_50;
  ulonglong *local_48;
  undefined1 *local_40;
  ulonglong *local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_1 != 0) {
    local_58 = *(int *)(param_1 + 0x30);
    if (local_58 == 3) {
      local_30 = CONCAT71(local_30._1_7_,1);
      local_68 = &local_a8;
      local_a8 = local_a8 & 0xffffffff00000000;
      local_48 = &local_78;
      local_50 = FUN_1483b8602;
      local_78 = param_1;
      local_70 = &local_30;
      (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
      local_58 = (uint)((int)local_a8 == 1 & (byte)local_30) * 2 + 1;
    }
    local_70 = *(undefined8 **)(param_1 + 8);
    lVar1 = *(longlong *)((longlong)local_70 + 0x208);
    local_68 = *(ulonglong **)(lVar1 + 0x40);
    if (*(int *)(lVar1 + 0x38) < 1) {
      local_60 = 0;
    }
    else {
      local_60 = **(undefined8 **)(lVar1 + 0x30);
    }
    local_90 = &local_78;
    local_88 = *(ulonglong *)(param_1 + 0xe4);
    local_a0 = &local_88;
    iVar3 = (int)local_88;
    local_80 = 1;
    if (1 < iVar3) {
      local_80 = iVar3;
    }
    if (0x3ff < local_80) {
      local_80 = 0x400;
    }
    local_7c = 1;
    uVar2 = (ulonglong)(uint)(iVar3 >> 0x1f) << 0x20 | local_88 & 0xffffffff;
    local_94 = *(undefined4 *)(param_1 + 0x100);
    local_c0 = *(byte *)(param_1 + 0xe0) ^ 1;
    local_38 = &local_a8;
    local_98 = 0x400;
    local_30 = 0;
    local_28 = 0;
    local_40 = &LAB_1483b8654;
    local_b8 = &local_30;
    local_a8 = param_1;
    local_78 = param_1;
    FUN_1401f8d10(L"ParallelFor Task",
                  (int)(local_88 >> 0x20) *
                  (((int)((longlong)uVar2 / (longlong)local_80) + 1) -
                  (uint)((int)((longlong)uVar2 % (longlong)local_80) == 0)),1);
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483833ae FUN_1483833ae body=436 status=ok
// SIG undefined FUN_1483833ae(void)

void FUN_1483833ae(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 auStack_e8 [40];
  uint local_c0;
  undefined8 *local_b8;
  ulonglong local_a8;
  ulonglong *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  ulonglong *local_90;
  ulonglong local_88;
  int local_80;
  undefined4 local_7c;
  ulonglong local_78;
  undefined8 *local_70;
  ulonglong *local_68;
  undefined8 local_60;
  int local_58;
  code *local_50;
  ulonglong *local_48;
  undefined1 *local_40;
  ulonglong *local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_1 != 0) {
    local_58 = *(int *)(param_1 + 0x30);
    if (local_58 == 3) {
      local_30 = CONCAT71(local_30._1_7_,1);
      local_68 = &local_a8;
      local_a8 = local_a8 & 0xffffffff00000000;
      local_48 = &local_78;
      local_50 = FUN_1483b8eb2;
      local_78 = param_1;
      local_70 = &local_30;
      (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
      local_58 = (uint)((int)local_a8 == 1 & (byte)local_30) * 2 + 1;
    }
    local_70 = *(undefined8 **)(param_1 + 8);
    lVar1 = *(longlong *)((longlong)local_70 + 0x208);
    local_68 = *(ulonglong **)(lVar1 + 0x40);
    if (*(int *)(lVar1 + 0x38) < 1) {
      local_60 = 0;
    }
    else {
      local_60 = **(undefined8 **)(lVar1 + 0x30);
    }
    local_90 = &local_78;
    local_88 = *(ulonglong *)(param_1 + 0xe4);
    local_a0 = &local_88;
    iVar3 = (int)local_88;
    local_80 = 1;
    if (1 < iVar3) {
      local_80 = iVar3;
    }
    if (0x3ff < local_80) {
      local_80 = 0x400;
    }
    local_7c = 1;
    uVar2 = (ulonglong)(uint)(iVar3 >> 0x1f) << 0x20 | local_88 & 0xffffffff;
    local_94 = *(undefined4 *)(param_1 + 0x100);
    local_c0 = *(byte *)(param_1 + 0xe0) ^ 1;
    local_38 = &local_a8;
    local_98 = 0x400;
    local_30 = 0;
    local_28 = 0;
    local_40 = &LAB_1483b8f04;
    local_b8 = &local_30;
    local_a8 = param_1;
    local_78 = param_1;
    FUN_1401f8d10(L"ParallelFor Task",
                  (int)(local_88 >> 0x20) *
                  (((int)((longlong)uVar2 / (longlong)local_80) + 1) -
                  (uint)((int)((longlong)uVar2 % (longlong)local_80) == 0)),1);
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148383564 FUN_148383564 body=8 status=ok
// SIG undefined FUN_148383564(void)

undefined8 FUN_148383564(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



// FUNCTION 14838356c FUN_14838356c body=22 status=ok
// SIG undefined FUN_14838356c(void)

void FUN_14838356c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4)

{
  *param_1 = param_2;
  param_1[1] = *param_3;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 1);
  *(undefined1 *)((longlong)param_1 + 0x14) = param_4;
  return;
}



// FUNCTION 148383582 FUN_148383582 body=18 status=ok
// SIG undefined FUN_148383582(void)

void FUN_148383582(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 8) = *param_2;
  *(undefined1 *)(param_1 + 0x14) = param_3;
  return;
}



// FUNCTION 148383594 FUN_148383594 body=326 status=ok
// SIG undefined FUN_148383594(void)

void FUN_148383594(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = *param_1;
  plVar1 = (longlong *)(lVar4 + 8);
  lVar2 = lVar4 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar6 = 0;
  local_60 = lVar2;
  if (*(int *)(lVar4 + 0x30) != 0) {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(lVar4 + 0x30);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar6) || (local_60 != lVar2)) {
    do {
      uVar5 = *(undefined8 *)(*local_90 + (longlong)iStack_74 * 0x10);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_14479d316(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar5;
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (local_80 != lVar2 || iStack_74 != iVar6));
  }
  FUN_147e3ce0c(*param_1 + 8);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483836dc FUN_1483836dc body=183 status=ok
// SIG undefined FUN_1483836dc(void)

undefined1 FUN_1483836dc(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
    FUN_148383794(param_1,param_2,&local_11);
  }
  else {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 0x3c)) {
      lVar3 = lVar1 + 0x40;
      if (*(longlong *)(lVar1 + 0x48) != 0) {
        lVar3 = *(longlong *)(lVar1 + 0x48);
      }
      iVar2 = *(int *)(lVar3 + (ulonglong)
                               (*(int *)(lVar1 + 0x50) - 1U &
                               (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
      if (iVar2 != -1) {
        do {
          local_11 = *(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)iVar2 * 0x10) == param_2;
          if ((bool)local_11) break;
          iVar2 = *(int *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8) + 8);
        } while (iVar2 != -1);
        goto LAB_148383707;
      }
    }
    local_11 = 0;
  }
LAB_148383707:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_11;
}



// FUNCTION 148383794 FUN_148383794 body=287 status=ok
// SIG undefined FUN_148383794(void)

ulonglong FUN_148383794(longlong *param_1,ulonglong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong *puVar4;
  int iVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_3 = 0;
  lVar3 = *param_1;
  plVar1 = (longlong *)(lVar3 + 8);
  lVar2 = lVar3 + 0x18;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(lVar3 + 0x30) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar5 = *(int *)(lVar3 + 0x30);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar5) || (uStack_50 != lVar2)) {
    do {
      if ((*(ulonglong *)(*local_80 + (longlong)iStack_64 * 0x10) ^ param_2) >> 0x20 == 0) {
        puVar4 = (ulonglong *)(*local_80 + (longlong)iStack_64 * 0x10);
        if (puVar4 != (ulonglong *)0x0) {
          *param_3 = 1;
          param_2 = *puVar4;
        }
        break;
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while ((CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar5) || local_80 != plVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483838b4 FUN_1483838b4 body=104 status=ok
// SIG undefined FUN_1483838b4(void)

bool FUN_1483838b4(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)((longlong)param_1 + 0x14) == '\x01') &&
     (param_2 = FUN_148383794(param_1,param_2,&local_19), local_19 != '\x01')) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_14838391e(*param_1 + 8,param_2);
    bVar1 = 0 < iVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar1;
}



// FUNCTION 14838391e FUN_14838391e body=124 status=ok
// SIG undefined FUN_14838391e(void)

undefined8 FUN_14838391e(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_1483b97da(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14838399a FUN_14838399a body=659 status=ok
// SIG undefined FUN_14838399a(void)

ulonglong FUN_14838399a(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined1 local_94 [4];
  longlong *local_90;
  undefined8 local_88;
  int *piStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  int *piStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  piVar3 = (int *)*param_1;
  if (*piVar3 == *param_2) {
    uVar8 = 0;
    iVar7 = 0;
    if (piVar3[1] == param_2[1]) {
      plVar1 = (longlong *)(piVar3 + 2);
      piVar2 = piVar3 + 6;
      local_68 = 0x100000000;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uStack_50 = 0;
      local_a0 = param_1;
      piStack_60 = piVar2;
      if (piVar3[0xc] != 0) {
        FUN_1449c0562(&local_68);
        iVar7 = piVar3[0xc];
      }
      local_78._0_4_ = (uint)local_58;
      local_78._4_4_ = local_58._4_4_;
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_88 = local_68;
      piStack_80 = piStack_60;
      local_90 = plVar1;
      if ((local_58._4_4_ != iVar7) || (piStack_60 != piVar2)) {
        do {
          uVar4 = *(undefined8 *)(*local_90 + (longlong)local_78._4_4_ * 0x10);
          iVar6 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar6 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
            FUN_14479d316(param_3,iVar6);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar6 * 8) = uVar4;
          local_78._0_4_ = (uint)local_78 & ~local_88._4_4_;
          FUN_1449c0562(&local_88);
        } while (local_90 != plVar1 || (piStack_80 != piVar2 || local_78._4_4_ != iVar7));
      }
      plVar5 = local_a0;
      FUN_147e3ce0c(*local_a0 + 8);
      plVar1 = (longlong *)(param_2 + 2);
      piVar3 = param_2 + 6;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      piStack_60 = piVar3;
      if (param_2[0xc] == 0) {
        iVar7 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar7 = param_2[0xc];
      }
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar4 = local_78;
      local_88 = local_68;
      piStack_80 = piStack_60;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_90 = plVar1;
      if ((local_78._4_4_ != iVar7) || (piStack_60 != piVar3)) {
        iVar6 = local_78._4_4_;
        local_78 = uVar4;
        do {
          local_68 = *(undefined8 *)(*local_90 + (longlong)iVar6 * 0x10);
          FUN_1403458a2(*plVar5 + 8,local_94,&local_68,0);
          iVar6 = (int)param_3[3];
          *(uint *)(param_3 + 3) = iVar6 + 1U;
          if (*(uint *)((longlong)param_3 + 0x1c) < iVar6 + 1U) {
            FUN_14479d316(param_3 + 2,iVar6);
          }
          *(undefined8 *)(param_3[2] + (longlong)iVar6 * 8) = local_68;
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar6 = local_78._4_4_;
          uVar4 = local_78;
        } while (local_90 != plVar1 || (piStack_80 != piVar3 || local_78._4_4_ != iVar7));
      }
      local_78 = uVar4;
      uVar8 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    }
  }
  else {
    uVar8 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148383c2e FUN_148383c2e body=890 status=ok
// SIG undefined FUN_148383c2e(void)

undefined8 FUN_148383c2e(int *param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_e8 [44];
  uint local_bc;
  longlong *local_b8;
  undefined8 uStack_b0;
  longlong *plStack_a8;
  undefined8 uStack_a0;
  longlong *plStack_98;
  longlong *local_90;
  undefined8 uStack_88;
  longlong *local_80;
  undefined8 uStack_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
     (param_1[4] - param_1[0xf] == param_2[4] - param_2[0xf])) {
    plVar1 = (longlong *)(param_1 + 2);
    plVar2 = (longlong *)(param_1 + 6);
    if (param_1[1] == 2) {
      local_90 = (longlong *)&DAT_100000000;
      local_80 = (longlong *)&DAT_ffffffff;
      uStack_78 = (longlong *)((ulonglong)uStack_78 & 0xffffffff00000000);
      uStack_88 = plVar2;
      if (param_1[0xc] == 0) {
        uVar11 = 0;
      }
      else {
        FUN_1449c0562(&local_90);
        uVar11 = param_1[0xc];
      }
      uStack_a0 = local_80;
      plVar3 = uStack_a0;
      plStack_98 = uStack_78;
      uStack_b0 = local_90;
      plStack_a8 = uStack_88;
      uStack_a0._4_4_ = (uint)((ulonglong)local_80 >> 0x20);
      uVar8 = (ulonglong)uStack_a0._4_4_;
      local_b8 = plVar1;
      uStack_a0 = plVar3;
      if ((uStack_a0._4_4_ != uVar11) || (uStack_88 != plVar2)) {
        plVar3 = (longlong *)(param_2 + 2);
        plVar4 = (longlong *)(param_2 + 6);
        local_bc = uVar11;
        do {
          uVar8 = *(ulonglong *)(*local_b8 + (longlong)(int)uVar8 * 0x10);
          local_68 = (longlong *)&DAT_100000000;
          local_58 = (longlong *)&DAT_ffffffff;
          uStack_50 = 0;
          plStack_60 = plVar4;
          if (param_2[0xc] == 0) {
            iVar12 = 0;
          }
          else {
            FUN_1449c0562(&local_68);
            iVar12 = param_2[0xc];
          }
          plStack_70 = (longlong *)CONCAT44(uStack_4c,uStack_50);
          uStack_78 = local_58;
          plVar6 = uStack_78;
          uStack_88 = local_68;
          local_80 = plStack_60;
          uStack_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
          iVar7 = uStack_78._4_4_;
          local_90 = plVar3;
          if ((uStack_78._4_4_ == iVar12) && (uStack_78 = plVar6, plStack_60 == plVar4))
          goto LAB_148383f6a;
          while( true ) {
            uStack_78 = plVar6;
            if ((*(ulonglong *)(*local_90 + (longlong)iVar7 * 0x10) ^ uVar8) >> 0x20 == 0) break;
            uStack_78 = (longlong *)CONCAT44(uStack_78._4_4_,(uint)uStack_78 & ~uStack_88._4_4_);
            FUN_1449c0562(&uStack_88);
            iVar7 = uStack_78._4_4_;
            plVar6 = uStack_78;
            if ((local_80 == plVar4 && uStack_78._4_4_ == iVar12) && local_90 == plVar3)
            goto LAB_148383f6a;
          }
          if (*local_90 + (longlong)iVar7 * 0x10 == 0) goto LAB_148383f6a;
          uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
          FUN_1449c0562(&uStack_b0);
          uVar8 = (ulonglong)uStack_a0._4_4_;
        } while (local_b8 != plVar1 || (plStack_a8 != plVar2 || uStack_a0._4_4_ != local_bc));
      }
    }
    else {
      local_b8 = (longlong *)&DAT_100000000;
      plStack_a8 = (longlong *)&DAT_ffffffff;
      uStack_a0 = (longlong *)((ulonglong)uStack_a0 & 0xffffffff00000000);
      uStack_b0 = plVar2;
      if (param_1[0xc] == 0) {
        uVar11 = 0;
      }
      else {
        FUN_1449c0562(&local_b8);
        uVar11 = param_1[0xc];
      }
      uStack_78 = plStack_a8;
      plVar3 = uStack_78;
      plStack_70 = uStack_a0;
      uStack_88 = local_b8;
      local_80 = uStack_b0;
      uStack_78._4_4_ = (uint)((ulonglong)plStack_a8 >> 0x20);
      uVar8 = (ulonglong)uStack_78._4_4_;
      local_90 = plVar1;
      uStack_78 = plVar3;
      if ((uStack_78._4_4_ != uVar11) || (uStack_b0 != plVar2)) {
        do {
          if (param_2[4] == param_2[0xf]) goto LAB_148383f6a;
          lVar5 = *(longlong *)(*local_90 + (longlong)(int)uVar8 * 0x10);
          piVar10 = *(int **)(param_2 + 0x12);
          if (*(int **)(param_2 + 0x12) == (int *)0x0) {
            piVar10 = param_2 + 0x10;
          }
          iVar12 = piVar10[param_2[0x14] - 1U & (int)lVar5 + (int)((ulonglong)lVar5 >> 0x20) * 0x17]
          ;
          if (iVar12 == -1) goto LAB_148383f6a;
          while (*(longlong *)(*(longlong *)(param_2 + 2) + (longlong)iVar12 * 0x10) != lVar5) {
            iVar12 = *(int *)((longlong)iVar12 * 0x10 + *(longlong *)(param_2 + 2) + 8);
            if (iVar12 == -1) goto LAB_148383f6a;
          }
          uStack_78 = (longlong *)CONCAT44(uStack_78._4_4_,(uint)uStack_78 & ~uStack_88._4_4_);
          FUN_1449c0562(&uStack_88);
          uVar8 = (ulonglong)uStack_78._4_4_;
        } while (local_90 != plVar1 || (local_80 != plVar2 || uStack_78._4_4_ != uVar11));
      }
    }
    uVar9 = CONCAT71((int7)(uVar8 >> 8),1);
  }
  else {
LAB_148383f6a:
    uVar9 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 148383fa9 FUN_148383fa9 body=278 status=ok
// SIG undefined FUN_148383fa9(void)

undefined8 FUN_148383fa9(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar7 = *(int *)(param_1 + 0x30);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar7) || (uStack_50 != lVar2)) {
    do {
      lVar3 = (longlong)iStack_64 * 0x10;
      if (*(int *)(*local_80 + 4 + lVar3) == param_2) {
        puVar6 = (undefined8 *)(*local_80 + lVar3);
        if (puVar6 != (undefined8 *)0x0) {
          uVar5 = *puVar6;
          uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
          goto LAB_148384040;
        }
        break;
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while ((CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar7) || local_80 != plVar1);
  }
  uVar4 = 0;
  uVar5 = 0;
LAB_148384040:
  *param_3 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483840c0 FUN_1483840c0 body=176 status=ok
// SIG undefined FUN_1483840c0(void)

undefined4 FUN_1483840c0(undefined8 param_1,int param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_4 == (longlong *)0x0) {
    param_4 = local_48;
  }
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar1 = FUN_148384240(param_1,param_3,param_4);
      goto LAB_148384105;
    }
    if (param_2 != 2) {
      uVar1 = 0;
      goto LAB_148384105;
    }
    FUN_148383594(param_1,param_4);
  }
  uVar1 = FUN_148384172(param_1,param_3,param_4);
LAB_148384105:
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 148384172 FUN_148384172 body=205 status=ok
// SIG undefined FUN_148384172(void)

ulonglong FUN_148384172(longlong *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_78 [36];
  undefined1 local_54 [4];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = param_2[1];
  uVar5 = 0;
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar6 = 0;
    do {
      local_50 = *(undefined8 *)(lVar2 + lVar6);
      cVar4 = FUN_1483836dc(param_1);
      if (cVar4 == '\0') {
        FUN_1403458a2(*param_1 + 8,local_54,&local_50,0);
        iVar1 = *(int *)(param_3 + 0x18);
        *(uint *)(param_3 + 0x18) = iVar1 + 1U;
        if (*(uint *)(param_3 + 0x1c) < iVar1 + 1U) {
          FUN_14479d316((longlong *)(param_3 + 0x10),iVar1);
        }
        *(undefined8 *)(*(longlong *)(param_3 + 0x10) + (longlong)iVar1 * 8) = local_50;
        uVar5 = (ulonglong)((int)uVar5 + 1);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
    uVar5 = CONCAT71((int7)(uVar5 >> 8),0 < (int)uVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148384240 FUN_148384240 body=132 status=ok
// SIG undefined FUN_148384240(void)

ulonglong FUN_148384240(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar4 = param_2[1];
  uVar7 = 0;
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_2;
    lVar6 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar6);
      cVar5 = FUN_1483838b4(param_1,uVar3);
      if (cVar5 != '\0') {
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_14479d316(param_3,iVar1);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = uVar3;
        uVar7 = (ulonglong)((int)uVar7 + 1);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar6);
    uVar7 = CONCAT71((int7)(uVar7 >> 8),0 < (int)uVar7);
  }
  return uVar7;
}



// FUNCTION 1483842c4 FUN_1483842c4 body=3340 status=ok
// SIG undefined FUN_1483842c4(void)

ulonglong FUN_1483842c4(int *param_1,longlong param_2,double *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  double dVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined8 *puVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_1a8 [36];
  uint local_184;
  undefined8 *local_180;
  undefined1 local_178 [16];
  double local_168;
  undefined1 local_158 [16];
  double local_148;
  longlong *local_140;
  undefined8 local_138;
  int *piStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  double local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (param_1[1] == 1) {
    iVar24 = *param_1;
    uVar29 = 0;
    if (iVar24 == 1) {
      plVar1 = (longlong *)(param_1 + 2);
      piVar2 = param_1 + 6;
      local_118._8_8_ = piVar2;
      local_118._0_8_ = 0x100000000;
      local_108 = 2.12199579047121e-314;
      uStack_100 = 0;
      if (param_1[0xc] != 0) {
        FUN_1449c0562(local_118);
        uVar29 = (ulonglong)(uint)param_1[0xc];
      }
      local_128 = local_108;
      dVar6 = local_128;
      uStack_120 = CONCAT44(uStack_fc,uStack_100);
      local_138 = local_118._0_8_;
      piStack_130 = (int *)local_118._8_8_;
      local_128._4_4_ = (uint)((ulonglong)local_108 >> 0x20);
      iVar24 = local_128._4_4_;
      local_140 = plVar1;
      if ((local_128._4_4_ != (int)uVar29) || (local_128 = dVar6, (int *)local_118._8_8_ != piVar2))
      {
        do {
          local_128 = dVar6;
          uVar25 = *(ulonglong *)(*local_140 + (longlong)iVar24 * 0x10);
          uVar28 = (uint)uVar25;
          if ((-1 < (int)uVar28) &&
             ((int)uVar28 < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24))) {
            uVar26 = (ulonglong)((uint)(uVar25 >> 9) & 0x3fffff);
            uVar28 = uVar28 & 0x1ff;
            if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + uVar26 * 8) +
                                   (ulonglong)uVar28 * 2) - 1U) < 0xfffe) {
              lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar26 * 8);
              local_108 = *(double *)(lVar8 + 0x10 + (ulonglong)uVar28 * 0x18);
              pauVar3 = (undefined1 (*) [16])(lVar8 + (ulonglong)uVar28 * 0x18);
              auVar22 = *pauVar3;
              local_118 = auVar22;
              if (param_3 != (double *)0x0) {
                local_118._0_8_ = SUB128(*(undefined1 (*) [12])*pauVar3,0);
                local_118._8_8_ = auVar22._8_8_;
                dVar35 = (double)local_118._0_8_ * param_3[8];
                dVar30 = (double)local_118._8_8_ * param_3[9];
                local_108 = local_108 * param_3[10];
                dVar10 = *param_3;
                dVar11 = param_3[1];
                dVar12 = param_3[2];
                dVar6 = param_3[3];
                dVar31 = dVar30 * dVar10 - dVar35 * dVar11;
                dVar32 = local_108 * dVar11 - dVar30 * dVar12;
                dVar33 = dVar35 * dVar12 - dVar10 * local_108;
                dVar32 = dVar32 + dVar32;
                dVar33 = dVar33 + dVar33;
                dVar31 = dVar31 + dVar31;
                dVar30 = (dVar12 * dVar32 - dVar10 * dVar31) + param_3[3] * dVar33 + dVar30 +
                         param_3[5];
                local_108 = dVar31 * dVar6 + local_108 + (dVar33 * dVar10 - dVar32 * dVar11) +
                            param_3[6];
                local_118._8_4_ = SUB84(dVar30,0);
                local_118._0_8_ =
                     (dVar31 * dVar11 - dVar33 * dVar12) + dVar6 * dVar32 + dVar35 + param_3[4];
                local_118._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
              }
              local_158._0_8_ = uVar25;
              (*(code *)*param_4)(param_4[1],local_158,local_118);
            }
          }
          local_128 = (double)CONCAT44(local_128._4_4_,(uint)local_128 & ~local_138._4_4_);
          FUN_1449c0562(&local_138);
          iVar24 = local_128._4_4_;
          dVar6 = local_128;
        } while (local_140 != plVar1 || (piStack_130 != piVar2 || local_128._4_4_ != (int)uVar29));
      }
    }
    else if (iVar24 == 2) {
      plVar1 = (longlong *)(param_1 + 2);
      piVar2 = param_1 + 6;
      local_118._8_8_ = piVar2;
      local_118._0_8_ = 0x100000000;
      local_108 = 2.12199579047121e-314;
      uStack_100 = 0;
      if (param_1[0xc] == 0) {
        uVar29 = 0;
      }
      else {
        FUN_1449c0562(local_118);
        uVar29 = (ulonglong)(uint)param_1[0xc];
      }
      uStack_120 = CONCAT44(uStack_fc,uStack_100);
      local_128 = local_108;
      dVar6 = local_128;
      local_138 = local_118._0_8_;
      piStack_130 = local_118._8_8_;
      local_128._4_4_ = (uint)((ulonglong)local_108 >> 0x20);
      iVar24 = local_128._4_4_;
      local_140 = plVar1;
      if ((local_128._4_4_ != (int)uVar29) || (local_128 = dVar6, piStack_130 != piVar2)) {
        do {
          local_128 = dVar6;
          uVar25 = *(ulonglong *)(*local_140 + (longlong)iVar24 * 0x10);
          uVar28 = (uint)uVar25;
          uVar27 = uVar28 & 0xfffffff;
          if ((int)uVar27 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144)) {
            uVar26 = (ulonglong)(uVar27 >> 9);
            uVar28 = uVar28 & 0x1ff;
            if ((((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x148) + uVar26 * 8) +
                                     (ulonglong)uVar28 * 2) - 1U) < 0xfffe) &&
                (uVar28 = *(uint *)((ulonglong)uVar28 * 0xc +
                                    *(longlong *)(*(longlong *)(param_2 + 0x180) + uVar26 * 8) +
                                   (ulonglong)((uint)(uVar25 >> 0x1e) & 3) * 4), -1 < (int)uVar28))
               && ((int)uVar28 < *(int *)(param_2 + 0x1d0) * 0x200 + *(int *)(param_2 + 0x1d4))) {
              if ((ushort)(*(short *)(*(longlong *)
                                       (*(longlong *)(param_2 + 0x1d8) +
                                       (ulonglong)(uVar28 >> 9) * 8) +
                                     (ulonglong)(uVar28 & 0x1ff) * 2) - 1U) < 0xfffe) {
                uVar25 = *(ulonglong *)
                          (*(longlong *)
                            (*(longlong *)(param_2 + 0x1c0) + (ulonglong)(uVar28 >> 9) * 8) +
                          (ulonglong)((uVar28 & 0x1ff) << 4));
                uVar26 = uVar25 >> 0x20 & 0x1ff;
                lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (uVar25 >> 9 & 0x7fffff) * 8);
                pauVar3 = (undefined1 (*) [16])(lVar8 + (uVar25 & 0x1ff) * 0x18);
                local_118 = *pauVar3;
                local_108 = *(double *)(lVar8 + 0x10 + (uVar25 & 0x1ff) * 0x18);
                lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (uVar25 >> 0x29) * 8);
                pauVar4 = (undefined1 (*) [16])(lVar8 + uVar26 * 0x18);
                auVar22 = *pauVar4;
                local_148 = *(double *)(lVar8 + 0x10 + uVar26 * 0x18);
                local_158 = auVar22;
                if (param_3 != (double *)0x0) {
                  dVar34 = *(double *)*pauVar3 * param_3[8];
                  dVar35 = *(double *)(*pauVar3 + 8) * param_3[9];
                  local_108 = local_108 * param_3[10];
                  dVar31 = param_3[3];
                  dVar6 = param_3[3];
                  dVar13 = *param_3;
                  dVar16 = param_3[1];
                  dVar17 = param_3[2];
                  dVar10 = dVar35 * dVar13 - dVar34 * dVar16;
                  dVar11 = local_108 * dVar16 - dVar35 * dVar17;
                  dVar12 = dVar34 * dVar17 - local_108 * dVar13;
                  dVar11 = dVar11 + dVar11;
                  dVar12 = dVar12 + dVar12;
                  dVar10 = dVar10 + dVar10;
                  local_158._0_8_ = SUB128(*(undefined1 (*) [12])*pauVar4,0);
                  local_158._8_8_ = auVar22._8_8_;
                  dVar33 = param_3[8] * (double)local_158._0_8_;
                  dVar30 = param_3[9] * (double)local_158._8_8_;
                  local_148 = local_148 * param_3[10];
                  dVar32 = dVar30 * dVar13 - dVar16 * dVar33;
                  dVar14 = local_148 * dVar16 - dVar17 * dVar30;
                  dVar15 = dVar33 * dVar17 - dVar13 * local_148;
                  dVar14 = dVar14 + dVar14;
                  dVar15 = dVar15 + dVar15;
                  dVar32 = dVar32 + dVar32;
                  dVar35 = (dVar17 * dVar11 - dVar13 * dVar10) + dVar6 * dVar12 + dVar35 +
                           param_3[5];
                  local_108 = dVar10 * dVar31 + local_108 + (dVar12 * dVar13 - dVar11 * dVar16) +
                              param_3[6];
                  local_118._8_4_ = SUB84(dVar35,0);
                  local_118._0_8_ =
                       (dVar10 * dVar16 - dVar12 * dVar17) + dVar31 * dVar11 + dVar34 + param_3[4];
                  local_118._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
                  dVar6 = (dVar17 * dVar14 - dVar13 * dVar32) + dVar6 * dVar15 + dVar30 + param_3[5]
                  ;
                  local_148 = dVar32 * dVar31 + local_148 + (dVar15 * dVar13 - dVar14 * dVar16) +
                              param_3[6];
                  local_158._8_4_ = SUB84(dVar6,0);
                  local_158._0_8_ =
                       (dVar32 * dVar16 - dVar15 * dVar17) + dVar31 * dVar14 + dVar33 + param_3[4];
                  local_158._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
                }
                local_178._0_8_ = (longlong)(int)uVar25;
                (*(code *)*param_4)(param_4[1],local_178,local_118);
                local_178._0_8_ = (longlong)uVar25 >> 0x20;
                (*(code *)*param_4)(param_4[1],local_178,local_158);
              }
            }
          }
          local_128 = (double)CONCAT44(local_128._4_4_,(uint)local_128 & ~local_138._4_4_);
          FUN_1449c0562(&local_138);
          iVar24 = local_128._4_4_;
          dVar6 = local_128;
        } while (local_140 != plVar1 || (piStack_130 != piVar2 || local_128._4_4_ != (int)uVar29));
      }
    }
    else {
      if (iVar24 != 4) goto LAB_148384898;
      plVar1 = (longlong *)(param_1 + 2);
      piVar2 = param_1 + 6;
      local_118._8_8_ = piVar2;
      local_118._0_8_ = 0x100000000;
      local_108 = 2.12199579047121e-314;
      uStack_100 = 0;
      if (param_1[0xc] == 0) {
        uVar29 = 0;
      }
      else {
        FUN_1449c0562(local_118);
        uVar29 = (ulonglong)(uint)param_1[0xc];
      }
      uStack_120 = CONCAT44(uStack_fc,uStack_100);
      local_128 = local_108;
      dVar6 = local_128;
      local_138 = local_118._0_8_;
      piStack_130 = local_118._8_8_;
      local_128._4_4_ = (uint)((ulonglong)local_108 >> 0x20);
      local_184 = (uint)uVar29;
      uVar28 = local_128._4_4_;
      local_180 = param_4;
      local_140 = plVar1;
      if ((local_128._4_4_ != local_184) || (local_128 = dVar6, piStack_130 != piVar2)) {
        do {
          local_128 = dVar6;
          puVar23 = local_180;
          uVar25 = *(ulonglong *)(*local_140 + (longlong)(int)uVar28 * 0x10);
          uVar28 = (uint)uVar25;
          if ((-1 < (int)uVar28) &&
             ((int)uVar28 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) {
            uVar26 = (ulonglong)((uint)(uVar25 >> 9) & 0x3fffff);
            uVar25 = (ulonglong)(uVar28 & 0x1ff);
            if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x148) + uVar26 * 8) +
                                   (ulonglong)(uVar28 & 0x1ff) * 2) - 1U) < 0xfffe) {
              lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x130) + uVar26 * 8);
              uVar28 = *(uint *)(lVar8 + uVar25 * 0xc);
              uVar27 = *(uint *)(lVar8 + 4 + uVar25 * 0xc);
              uVar7 = *(uint *)(lVar8 + 8 + uVar25 * 0xc);
              lVar8 = *(longlong *)(param_2 + 0x10);
              lVar9 = *(longlong *)(lVar8 + (ulonglong)(uVar28 >> 9) * 8);
              pauVar3 = (undefined1 (*) [16])(lVar9 + ((ulonglong)uVar28 & 0x1ff) * 0x18);
              local_118 = *pauVar3;
              local_108 = *(double *)(lVar9 + 0x10 + ((ulonglong)uVar28 & 0x1ff) * 0x18);
              lVar9 = *(longlong *)(lVar8 + (ulonglong)(uVar27 >> 9) * 8);
              pauVar4 = (undefined1 (*) [16])(lVar9 + ((ulonglong)uVar27 & 0x1ff) * 0x18);
              local_158 = *pauVar4;
              local_148 = *(double *)(lVar9 + 0x10 + ((ulonglong)uVar27 & 0x1ff) * 0x18);
              lVar8 = *(longlong *)(lVar8 + (ulonglong)(uVar7 >> 9) * 8);
              pauVar5 = (undefined1 (*) [16])(lVar8 + ((ulonglong)uVar7 & 0x1ff) * 0x18);
              auVar22 = *pauVar5;
              local_168 = *(double *)(lVar8 + 0x10 + ((ulonglong)uVar7 & 0x1ff) * 0x18);
              local_178 = auVar22;
              if (param_3 != (double *)0x0) {
                dVar30 = param_3[8];
                dVar10 = param_3[9];
                dVar12 = *(double *)*pauVar3 * dVar30;
                dVar33 = *(double *)(*pauVar3 + 8) * dVar10;
                dVar34 = param_3[10];
                local_108 = local_108 * dVar34;
                dVar6 = param_3[3];
                dVar31 = param_3[3];
                dVar18 = *param_3;
                dVar19 = param_3[1];
                dVar20 = param_3[2];
                dVar21 = param_3[4];
                dVar17 = param_3[5];
                dVar35 = dVar33 * dVar18 - dVar12 * dVar19;
                dVar32 = local_108 * dVar19 - dVar33 * dVar20;
                dVar11 = dVar12 * dVar20 - local_108 * dVar18;
                dVar32 = dVar32 + dVar32;
                dVar11 = dVar11 + dVar11;
                dVar35 = dVar35 + dVar35;
                dVar14 = (dVar20 * dVar32 - dVar18 * dVar35) + dVar31 * dVar11 + dVar33 + dVar17;
                dVar33 = param_3[6];
                local_108 = dVar35 * dVar6 + local_108 + (dVar11 * dVar18 - dVar32 * dVar19) +
                            dVar33;
                local_118._8_4_ = SUB84(dVar14,0);
                local_118._0_8_ =
                     (dVar35 * dVar19 - dVar11 * dVar20) + dVar6 * dVar32 + dVar12 + dVar21;
                local_118._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
                dVar13 = *(double *)*pauVar4 * dVar30;
                dVar15 = *(double *)(*pauVar4 + 8) * dVar10;
                local_148 = local_148 * dVar34;
                dVar32 = dVar15 * dVar18 - dVar19 * dVar13;
                dVar16 = local_148 * dVar19 - dVar20 * dVar15;
                dVar14 = dVar13 * dVar20 - dVar18 * local_148;
                dVar16 = dVar16 + dVar16;
                dVar14 = dVar14 + dVar14;
                dVar32 = dVar32 + dVar32;
                local_178._0_8_ = SUB128(*(undefined1 (*) [12])*pauVar5,0);
                local_178._8_8_ = auVar22._8_8_;
                dVar30 = dVar30 * (double)local_178._0_8_;
                dVar10 = dVar10 * (double)local_178._8_8_;
                local_168 = local_168 * dVar34;
                dVar11 = dVar10 * dVar18 - dVar19 * dVar30;
                dVar12 = local_168 * dVar19 - dVar20 * dVar10;
                dVar35 = dVar30 * dVar20 - dVar18 * local_168;
                dVar12 = dVar12 + dVar12;
                dVar35 = dVar35 + dVar35;
                dVar11 = dVar11 + dVar11;
                dVar15 = (dVar20 * dVar16 - dVar18 * dVar32) + dVar31 * dVar14 + dVar15 + dVar17;
                local_148 = dVar32 * dVar6 + local_148 + (dVar14 * dVar18 - dVar16 * dVar19) +
                            dVar33;
                local_158._8_4_ = SUB84(dVar15,0);
                local_158._0_8_ =
                     (dVar32 * dVar19 - dVar14 * dVar20) + dVar6 * dVar16 + dVar13 + dVar21;
                local_158._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
                dVar17 = (dVar20 * dVar12 - dVar18 * dVar11) + dVar31 * dVar35 + dVar10 + dVar17;
                local_168 = dVar11 * dVar6 + local_168 + (dVar35 * dVar18 - dVar12 * dVar19) +
                            dVar33;
                local_178._8_4_ = SUB84(dVar17,0);
                local_178._0_8_ =
                     (dVar11 * dVar19 - dVar35 * dVar20) + dVar6 * dVar12 + dVar30 + dVar21;
                local_178._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
              }
              local_f8 = (longlong)(int)uVar28;
              (*(code *)*local_180)(local_180[1],&local_f8,local_118);
              local_f8 = (longlong)(int)uVar27;
              (*(code *)*puVar23)(puVar23[1],&local_f8,local_158);
              local_f8 = (longlong)(int)uVar7;
              (*(code *)*puVar23)(puVar23[1],&local_f8,local_178);
              uVar29 = (ulonglong)local_184;
            }
          }
          local_128 = (double)CONCAT44(local_128._4_4_,(uint)local_128 & ~local_138._4_4_);
          FUN_1449c0562(&local_138);
          uVar28 = local_128._4_4_;
          dVar6 = local_128;
        } while (local_140 != plVar1 || (piStack_130 != piVar2 || local_128._4_4_ != (uint)uVar29));
      }
    }
    uVar29 = CONCAT71((int7)(uVar29 >> 8),1);
  }
  else {
    uVar29 = 0;
  }
LAB_148384898:
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar29;
}



// FUNCTION 148384fd1 FUN_148384fd1 body=2936 status=ok
// SIG undefined FUN_148384fd1(void)

ulonglong FUN_148384fd1(int *param_1,longlong param_2,longlong param_3,double *param_4,
                       undefined8 *param_5)

{
  int *piVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  longlong *local_108;
  int local_fc;
  int *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  int *piStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_1[1] == 2) {
    iVar19 = *param_1;
    uVar18 = 0;
    if (iVar19 == 1) {
      plVar15 = (longlong *)(param_1 + 2);
      piVar1 = param_1 + 6;
      local_b8._8_8_ = piVar1;
      local_b8._0_8_ = 0x100000000;
      local_a8 = 2.12199579047121e-314;
      uStack_a0 = 0;
      if (param_1[0xc] != 0) {
        FUN_1449c0562(local_b8);
        uVar18 = (ulonglong)(uint)param_1[0xc];
      }
      local_c8 = local_a8;
      dVar3 = local_c8;
      uStack_c0 = CONCAT44(uStack_9c,uStack_a0);
      local_d8 = local_b8._0_8_;
      piStack_d0 = (int *)local_b8._8_8_;
      local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
      iVar19 = local_c8._4_4_;
      local_e0 = plVar15;
      if ((local_c8._4_4_ != (int)uVar18) || ((int *)local_b8._8_8_ != piVar1)) {
        do {
          local_c8 = dVar3;
          uVar12 = *(ulonglong *)(*local_e0 + (longlong)iVar19 * 0x10);
          uVar17 = (uint)uVar12;
          if ((-1 < (int)uVar17) &&
             ((int)uVar17 < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24))) {
            uVar12 = (ulonglong)((uint)(uVar12 >> 9) & 0x3fffff);
            uVar14 = uVar17 & 0x1ff;
            if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + uVar12 * 8) +
                                   (ulonglong)uVar14 * 2) - 1U) < 0xfffe) {
              lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar12 * 8);
              pdVar2 = (double *)(lVar11 + (ulonglong)uVar14 * 0x18);
              dVar22 = *pdVar2 * param_4[8];
              dVar23 = pdVar2[1] * param_4[9];
              dVar21 = *(double *)(lVar11 + 0x10 + (ulonglong)uVar14 * 0x18) * param_4[10];
              dVar6 = *param_4;
              dVar7 = param_4[1];
              dVar8 = param_4[2];
              dVar3 = param_4[3];
              dVar24 = dVar23 * dVar6 - dVar22 * dVar7;
              dVar25 = dVar21 * dVar7 - dVar23 * dVar8;
              dVar26 = dVar22 * dVar8 - dVar6 * dVar21;
              dVar25 = dVar25 + dVar25;
              dVar26 = dVar26 + dVar26;
              dVar24 = dVar24 + dVar24;
              dVar23 = (dVar8 * dVar25 - dVar6 * dVar24) + param_4[3] * dVar26 + dVar23 + param_4[5]
              ;
              local_a8 = dVar24 * dVar3 + dVar21 + (dVar26 * dVar6 - dVar25 * dVar7) + param_4[6];
              local_b8._8_4_ = SUB84(dVar23,0);
              local_b8._0_8_ =
                   (dVar24 * dVar7 - dVar26 * dVar8) + dVar3 * dVar25 + dVar22 + param_4[4];
              local_b8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
              local_98 = (ulonglong)(uVar17 & 0x7fffffff);
              (*(code *)*param_5)(param_5[1]);
            }
          }
          local_c8 = (double)CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
          FUN_1449c0562(&local_d8);
          iVar19 = local_c8._4_4_;
          dVar3 = local_c8;
        } while (local_e0 != plVar15 || (piStack_d0 != piVar1 || local_c8._4_4_ != (int)uVar18));
      }
    }
    else {
      local_110 = param_3;
      if (iVar19 == 2) {
        plVar15 = (longlong *)(param_1 + 2);
        piVar1 = param_1 + 6;
        local_b8._8_8_ = piVar1;
        local_b8._0_8_ = 0x100000000;
        local_a8 = 2.12199579047121e-314;
        uStack_a0 = 0;
        if (param_1[0xc] == 0) {
          uVar18 = 0;
        }
        else {
          FUN_1449c0562(local_b8);
          uVar18 = (ulonglong)(uint)param_1[0xc];
        }
        uStack_c0 = CONCAT44(uStack_9c,uStack_a0);
        local_c8 = local_a8;
        dVar3 = local_c8;
        local_d8 = local_b8._0_8_;
        piStack_d0 = (int *)local_b8._8_8_;
        local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
        iVar19 = local_c8._4_4_;
        local_e0 = plVar15;
        if ((local_c8._4_4_ != (int)uVar18) || ((int *)local_b8._8_8_ != piVar1)) {
          do {
            local_c8 = dVar3;
            lVar11 = local_110;
            uVar12 = *(ulonglong *)(*local_e0 + (longlong)iVar19 * 0x10);
            uVar17 = (uint)uVar12;
            uVar14 = uVar17 & 0xfffffff;
            if ((int)uVar14 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144)) {
              uVar16 = (ulonglong)(uVar14 >> 9);
              uVar17 = uVar17 & 0x1ff;
              if (((((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x148) + uVar16 * 8)
                                        + (ulonglong)uVar17 * 2) - 1U) < 0xfffe) &&
                   (uVar17 = *(uint *)((ulonglong)uVar17 * 0xc +
                                       *(longlong *)(*(longlong *)(param_2 + 0x180) + uVar16 * 8) +
                                      (ulonglong)((uint)(uVar12 >> 0x1e) & 3) * 4), -1 < (int)uVar17
                   )) && ((int)uVar17 <
                          *(int *)(param_2 + 0x1d0) * 0x200 + *(int *)(param_2 + 0x1d4))) &&
                 ((ushort)(*(short *)(*(longlong *)
                                       (*(longlong *)(param_2 + 0x1d8) +
                                       (ulonglong)(uVar17 >> 9) * 8) +
                                     (ulonglong)(uVar17 & 0x1ff) * 2) - 1U) < 0xfffe)) {
                uVar10 = FUN_1482abca2(local_110);
                plVar13 = (longlong *)FUN_1482abdda(lVar11,uVar10);
                lVar11 = plVar13[1];
                if ((longlong)(int)lVar11 != 0) {
                  local_118 = *plVar13;
                  lVar20 = 0;
                  do {
                    uVar17 = *(uint *)(local_118 + lVar20);
                    local_98 = (ulonglong)(int)uVar17;
                    lVar5 = *(longlong *)
                             (*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar17 >> 9) * 8);
                    pdVar2 = (double *)(lVar5 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
                    dVar22 = *pdVar2 * param_4[8];
                    dVar23 = pdVar2[1] * param_4[9];
                    dVar21 = *(double *)(lVar5 + 0x10 + (ulonglong)(uVar17 & 0x1ff) * 0x18) *
                             param_4[10];
                    dVar6 = *param_4;
                    dVar7 = param_4[1];
                    dVar8 = param_4[2];
                    dVar3 = param_4[3];
                    dVar24 = dVar23 * dVar6 - dVar22 * dVar7;
                    dVar25 = dVar21 * dVar7 - dVar23 * dVar8;
                    dVar26 = dVar22 * dVar8 - dVar6 * dVar21;
                    dVar25 = dVar25 + dVar25;
                    dVar26 = dVar26 + dVar26;
                    dVar24 = dVar24 + dVar24;
                    dVar23 = (dVar8 * dVar25 - dVar6 * dVar24) + param_4[3] * dVar26 + dVar23 +
                             param_4[5];
                    local_a8 = dVar24 * dVar3 + dVar21 + (dVar26 * dVar6 - dVar25 * dVar7) +
                               param_4[6];
                    local_b8._8_4_ = SUB84(dVar23,0);
                    local_b8._0_8_ =
                         (dVar24 * dVar7 - dVar26 * dVar8) + dVar3 * dVar25 + dVar22 + param_4[4];
                    local_b8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
                    (*(code *)*param_5)(param_5[1]);
                    lVar20 = lVar20 + 4;
                  } while ((longlong)(int)lVar11 << 2 != lVar20);
                }
              }
            }
            local_c8 = (double)CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
            FUN_1449c0562(&local_d8);
            iVar19 = local_c8._4_4_;
            dVar3 = local_c8;
          } while (local_e0 != plVar15 || (piStack_d0 != piVar1 || local_c8._4_4_ != (int)uVar18));
        }
      }
      else {
        if (iVar19 != 4) goto LAB_1483855b3;
        local_108 = (longlong *)(param_1 + 2);
        local_f8 = param_1 + 6;
        local_b8._8_8_ = local_f8;
        local_b8._0_8_ = 0x100000000;
        local_a8 = 2.12199579047121e-314;
        uStack_a0 = 0;
        if (param_1[0xc] == 0) {
          iVar19 = 0;
        }
        else {
          FUN_1449c0562(local_b8);
          iVar19 = param_1[0xc];
        }
        uStack_c0 = CONCAT44(uStack_9c,uStack_a0);
        local_c8 = local_a8;
        dVar3 = local_c8;
        local_d8 = local_b8._0_8_;
        piStack_d0 = (int *)local_b8._8_8_;
        local_e0 = local_108;
        local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
        if ((local_c8._4_4_ != iVar19) || ((int *)local_b8._8_8_ != local_f8)) {
          local_f0 = (longlong *)(local_110 + 0xc0);
          iVar9 = local_c8._4_4_;
          local_fc = iVar19;
          local_c8 = dVar3;
          do {
            uVar12 = *(ulonglong *)(*local_e0 + (longlong)iVar9 * 0x10);
            uVar17 = (uint)uVar12;
            if (((-1 < (int)uVar17) &&
                ((int)uVar17 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) &&
               ((ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(param_2 + 0x148) +
                                     (ulonglong)((uint)(uVar12 >> 6) & 0x1fffff8)) +
                                   (ulonglong)(uVar17 & 0x1ff) * 2) - 1U) < 0xfffe)) {
              if ((((longlong)uVar12 < 0) || (*(int *)(local_110 + 0x98) <= (int)(uVar12 >> 0x20)))
                 || (lVar11 = (longlong)
                              *(int *)(*(longlong *)(local_110 + 0x90) + (uVar12 >> 0x20) * 4),
                    lVar11 == -1)) {
                lVar11 = 0;
              }
              else {
                lVar11 = lVar11 * 0x38 + *(longlong *)(local_110 + 0x60);
              }
              plVar15 = (longlong *)(lVar11 + 8);
              if (lVar11 == 0) {
                plVar15 = local_f0;
              }
              local_118 = (longlong)(int)plVar15[1];
              if (local_118 != 0) {
                local_e8 = *plVar15;
                local_118 = local_118 << 2;
                lVar11 = 0;
                do {
                  lVar20 = *(longlong *)
                            (*(longlong *)(param_2 + 0x130) +
                            (ulonglong)(*(uint *)(local_e8 + lVar11) >> 9) * 8);
                  uVar12 = (ulonglong)*(uint *)(local_e8 + lVar11) & 0x1ff;
                  uVar17 = *(uint *)(lVar20 + uVar12 * 0xc);
                  local_98 = (ulonglong)(int)uVar17;
                  uVar14 = *(uint *)(lVar20 + 4 + uVar12 * 0xc);
                  uVar18 = (ulonglong)(int)uVar14;
                  uVar4 = *(uint *)(lVar20 + 8 + uVar12 * 0xc);
                  lVar20 = *(longlong *)
                            (*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar17 >> 9) * 8);
                  pdVar2 = (double *)(lVar20 + (local_98 & 0x1ff) * 0x18);
                  dVar22 = *pdVar2 * param_4[8];
                  dVar23 = pdVar2[1] * param_4[9];
                  dVar21 = *(double *)(lVar20 + 0x10 + (local_98 & 0x1ff) * 0x18) * param_4[10];
                  dVar6 = *param_4;
                  dVar7 = param_4[1];
                  dVar8 = param_4[2];
                  dVar3 = param_4[3];
                  dVar24 = dVar23 * dVar6 - dVar22 * dVar7;
                  dVar25 = dVar21 * dVar7 - dVar23 * dVar8;
                  dVar26 = dVar22 * dVar8 - dVar6 * dVar21;
                  dVar25 = dVar25 + dVar25;
                  dVar26 = dVar26 + dVar26;
                  dVar24 = dVar24 + dVar24;
                  dVar23 = (dVar8 * dVar25 - dVar6 * dVar24) + param_4[3] * dVar26 + dVar23 +
                           param_4[5];
                  local_a8 = dVar24 * dVar3 + dVar21 + (dVar26 * dVar6 - dVar25 * dVar7) +
                             param_4[6];
                  local_b8._8_4_ = SUB84(dVar23,0);
                  local_b8._0_8_ =
                       (dVar24 * dVar7 - dVar26 * dVar8) + dVar3 * dVar25 + dVar22 + param_4[4];
                  local_b8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
                  (*(code *)*param_5)(param_5[1],&local_98,local_b8);
                  lVar20 = *(longlong *)
                            (*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar14 >> 9) * 8);
                  pdVar2 = (double *)(lVar20 + (uVar18 & 0x1ff) * 0x18);
                  dVar22 = *pdVar2 * param_4[8];
                  dVar23 = pdVar2[1] * param_4[9];
                  dVar21 = *(double *)(lVar20 + 0x10 + (uVar18 & 0x1ff) * 0x18) * param_4[10];
                  dVar6 = *param_4;
                  dVar7 = param_4[1];
                  dVar8 = param_4[2];
                  dVar3 = param_4[3];
                  dVar24 = dVar23 * dVar6 - dVar22 * dVar7;
                  dVar25 = dVar21 * dVar7 - dVar23 * dVar8;
                  dVar26 = dVar22 * dVar8 - dVar6 * dVar21;
                  dVar25 = dVar25 + dVar25;
                  dVar26 = dVar26 + dVar26;
                  dVar24 = dVar24 + dVar24;
                  dVar23 = (dVar8 * dVar25 - dVar6 * dVar24) + param_4[3] * dVar26 + dVar23 +
                           param_4[5];
                  local_a8 = dVar24 * dVar3 + dVar21 + (dVar26 * dVar6 - dVar25 * dVar7) +
                             param_4[6];
                  local_b8._8_4_ = SUB84(dVar23,0);
                  local_b8._0_8_ =
                       (dVar24 * dVar7 - dVar26 * dVar8) + dVar3 * dVar25 + dVar22 + param_4[4];
                  local_b8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
                  local_98 = uVar18;
                  (*(code *)*param_5)(param_5[1],&local_98,local_b8);
                  lVar20 = *(longlong *)
                            (*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
                  uVar12 = (longlong)(int)uVar4 & 0x1ff;
                  pdVar2 = (double *)(lVar20 + uVar12 * 0x18);
                  dVar22 = *pdVar2 * param_4[8];
                  dVar23 = pdVar2[1] * param_4[9];
                  dVar21 = *(double *)(lVar20 + 0x10 + uVar12 * 0x18) * param_4[10];
                  dVar6 = *param_4;
                  dVar7 = param_4[1];
                  dVar8 = param_4[2];
                  dVar3 = param_4[3];
                  dVar24 = dVar23 * dVar6 - dVar22 * dVar7;
                  dVar25 = dVar21 * dVar7 - dVar23 * dVar8;
                  dVar26 = dVar22 * dVar8 - dVar6 * dVar21;
                  dVar25 = dVar25 + dVar25;
                  dVar26 = dVar26 + dVar26;
                  dVar24 = dVar24 + dVar24;
                  dVar23 = (dVar8 * dVar25 - dVar6 * dVar24) + param_4[3] * dVar26 + dVar23 +
                           param_4[5];
                  local_a8 = dVar24 * dVar3 + dVar21 + (dVar26 * dVar6 - dVar25 * dVar7) +
                             param_4[6];
                  local_b8._8_4_ = SUB84(dVar23,0);
                  local_b8._0_8_ =
                       (dVar24 * dVar7 - dVar26 * dVar8) + dVar3 * dVar25 + dVar22 + param_4[4];
                  local_b8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
                  local_98 = (longlong)(int)uVar4;
                  (*(code *)*param_5)(param_5[1],&local_98,local_b8);
                  lVar11 = lVar11 + 4;
                } while (local_118 != lVar11);
              }
            }
            local_c8 = (double)CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
            FUN_1449c0562(&local_d8);
            iVar9 = local_c8._4_4_;
            dVar3 = local_c8;
          } while (local_e0 != local_108 || (piStack_d0 != local_f8 || local_c8._4_4_ != local_fc));
        }
      }
    }
    local_c8 = dVar3;
    uVar18 = CONCAT71((int7)(uVar18 >> 8),1);
  }
  else {
    uVar18 = 0;
  }
LAB_1483855b3:
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18 & 0xffffffff;
}



// FUNCTION 148385b4a FUN_148385b4a body=204 status=ok
// SIG undefined FUN_148385b4a(void)

undefined8
FUN_148385b4a(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 4) == 2) {
    local_38 = *param_3;
    local_30 = param_3[1];
    if (param_4 == (undefined8 *)0x0) {
      uStack_50 = 0;
      local_48 = 0xffffffff;
      local_58 = param_2;
      FUN_148376a28();
    }
    else {
      local_48 = param_4[2];
      local_58 = *param_4;
      uStack_50 = param_4[1];
    }
    uVar1 = FUN_148386011(param_1,param_2,&local_58,&local_38);
  }
  else if (*(int *)(param_1 + 4) == 1) {
    local_28 = *param_3;
    local_20 = param_3[1];
    uVar1 = FUN_148385c17(param_1,param_2,&local_28);
  }
  else {
    uVar1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 148385c17 FUN_148385c17 body=1017 status=ok
// SIG undefined FUN_148385c17(void)

ulonglong FUN_148385c17(int *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_c8 [32];
  code *local_a8;
  undefined8 **local_a0;
  code *local_98;
  undefined8 **local_90;
  longlong *local_88;
  undefined8 local_80;
  int *piStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  int *piStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1[1] == 1) {
    iVar10 = *param_1;
    puVar9 = (undefined8 *)0x0;
    if (iVar10 == 1) {
      plVar1 = (longlong *)(param_1 + 2);
      piVar2 = param_1 + 6;
      local_60 = (undefined8 *)&DAT_100000000;
      local_50 = 0xffffffff;
      uStack_48 = 0;
      piStack_58 = piVar2;
      if (param_1[0xc] != 0) {
        FUN_1449c0562(&local_60);
        puVar9 = (undefined8 *)(ulonglong)(uint)param_1[0xc];
      }
      local_70 = local_50;
      uVar4 = local_70;
      uStack_68 = CONCAT44(uStack_44,uStack_48);
      local_80 = local_60;
      piStack_78 = piStack_58;
      local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      iVar10 = local_70._4_4_;
      local_88 = plVar1;
      if ((local_70._4_4_ != (int)puVar9) || (local_70 = uVar4, piStack_58 != piVar2)) {
        do {
          local_70 = uVar4;
          local_a0 = &local_60;
          local_a8 = FUN_143b1fa60;
          local_60 = param_3;
          FUN_146c03fd0(param_2,*(undefined4 *)(*local_88 + (longlong)iVar10 * 0x10));
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
          FUN_1449c0562(&local_80);
          iVar10 = local_70._4_4_;
          uVar4 = local_70;
        } while (local_88 != plVar1 || (piStack_78 != piVar2 || local_70._4_4_ != (int)puVar9));
      }
    }
    else if (iVar10 == 2) {
      plVar1 = (longlong *)(param_1 + 2);
      piVar2 = param_1 + 6;
      local_60 = (undefined8 *)&DAT_100000000;
      local_50 = 0xffffffff;
      uStack_48 = 0;
      piStack_58 = piVar2;
      if (param_1[0xc] == 0) {
        iVar10 = 0;
      }
      else {
        FUN_1449c0562(&local_60);
        iVar10 = param_1[0xc];
      }
      puVar9 = &local_80;
      uStack_68 = CONCAT44(uStack_44,uStack_48);
      local_70 = local_50;
      uVar4 = local_70;
      local_80 = local_60;
      piStack_78 = piStack_58;
      local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      iVar5 = local_70._4_4_;
      local_88 = plVar1;
      if ((local_70._4_4_ != iVar10) || (local_70 = uVar4, piStack_58 != piVar2)) {
        do {
          local_70 = uVar4;
          uVar3 = *(ulonglong *)(*local_88 + (longlong)iVar5 * 0x10);
          uVar11 = (uint)uVar3;
          uVar6 = uVar11 & 0xfffffff;
          uVar8 = 0xffffffff;
          if ((int)uVar6 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144)) {
            uVar7 = (ulonglong)(uVar6 >> 9);
            uVar11 = uVar11 & 0x1ff;
            if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x148) + uVar7 * 8) +
                                   (ulonglong)uVar11 * 2) - 1U) < 0xfffe) {
              uVar8 = *(undefined4 *)
                       ((ulonglong)uVar11 * 0xc +
                        *(longlong *)(*(longlong *)(param_2 + 0x180) + uVar7 * 8) +
                       (ulonglong)((uint)(uVar3 >> 0x1e) & 3) * 4);
            }
          }
          local_90 = &local_60;
          local_98 = FUN_143b1fa1e;
          local_60 = param_3;
          FUN_146c04194(param_2,uVar8);
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
          FUN_1449c0562(puVar9);
          iVar5 = local_70._4_4_;
          uVar4 = local_70;
        } while (local_88 != plVar1 || (piStack_78 != piVar2 || local_70._4_4_ != iVar10));
      }
    }
    else {
      if (iVar10 != 4) goto LAB_148385d82;
      plVar1 = (longlong *)(param_1 + 2);
      piVar2 = param_1 + 6;
      local_60 = (undefined8 *)&DAT_100000000;
      local_50 = 0xffffffff;
      uStack_48 = 0;
      piStack_58 = piVar2;
      if (param_1[0xc] == 0) {
        iVar10 = 0;
      }
      else {
        FUN_1449c0562(&local_60);
        iVar10 = param_1[0xc];
      }
      puVar9 = &local_80;
      uStack_68 = CONCAT44(uStack_44,uStack_48);
      local_70 = local_50;
      uVar4 = local_70;
      local_80 = local_60;
      piStack_78 = piStack_58;
      local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      iVar5 = local_70._4_4_;
      local_88 = plVar1;
      if ((local_70._4_4_ != iVar10) || (local_70 = uVar4, piStack_58 != piVar2)) {
        do {
          local_70 = uVar4;
          uVar3 = *(ulonglong *)(*local_88 + (longlong)iVar5 * 0x10);
          uVar11 = (uint)uVar3;
          if ((-1 < (int)uVar11) &&
             (((int)uVar11 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144) &&
              ((ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(param_2 + 0x148) +
                                    (ulonglong)((uint)(uVar3 >> 6) & 0x1fffff8)) +
                                  (ulonglong)(uVar11 & 0x1ff) * 2) - 1U) < 0xfffe)))) {
            local_60 = (undefined8 *)CONCAT44(local_60._4_4_,uVar11);
            (*(code *)*param_3)(param_3[1]);
          }
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
          FUN_1449c0562(puVar9);
          iVar5 = local_70._4_4_;
          uVar4 = local_70;
        } while (local_88 != plVar1 || (piStack_78 != piVar2 || local_70._4_4_ != iVar10));
      }
    }
    puVar9 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
  }
  else {
    puVar9 = (undefined8 *)0x0;
  }
LAB_148385d82:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar9 & 0xffffffff;
}



// FUNCTION 148386011 FUN_148386011 body=2301 status=ok
// SIG undefined FUN_148386011(void)

ulonglong FUN_148386011(int *param_1,longlong **param_2,longlong ***param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong **pplVar9;
  uint uVar10;
  int iVar11;
  longlong **pplVar12;
  undefined1 auStack_1d8 [32];
  code **local_1b8;
  longlong **local_1a8;
  longlong ***local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong *local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  code *local_170;
  undefined8 *local_168;
  undefined4 local_15c;
  longlong local_158 [2];
  code *local_148;
  undefined8 *local_140;
  code *local_138;
  undefined8 *local_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  longlong *local_108;
  longlong *plStack_100;
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong **local_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  longlong *plStack_c8;
  int local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  pplVar12 = (longlong **)0x0;
  local_1a8 = param_2;
  if (param_1[1] != 2) goto LAB_1483866cb;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  iVar11 = *param_1;
  if (iVar11 == 1) {
    pplVar9 = (longlong **)(param_1 + 2);
    plVar2 = (longlong *)(param_1 + 6);
    local_198 = (longlong ***)&DAT_100000000;
    local_188 = (longlong *)&DAT_ffffffff;
    uStack_180 = (longlong *)((ulonglong)uStack_180._4_4_ << 0x20);
    uStack_190 = plVar2;
    if (param_1[0xc] == 0) {
      iVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_198);
      iVar11 = param_1[0xc];
    }
    pplVar12 = local_1a8;
    local_d0 = local_188;
    plVar3 = local_d0;
    plStack_c8 = uStack_180;
    uStack_e0._0_4_ = SUB84(local_198,0);
    uStack_e0._4_4_ = local_198._4_4_;
    uStack_d8 = (undefined4)uStack_190;
    uStack_d4 = uStack_190._4_4_;
    local_d0._4_4_ = (int)((ulonglong)local_188 >> 0x20);
    iVar4 = local_d0._4_4_;
    local_e8 = pplVar9;
    if ((local_d0._4_4_ != iVar11) || (uStack_190 != plVar2)) {
      do {
        local_d0 = plVar3;
        local_140 = &local_198;
        uStack_190 = &local_98;
        local_188 = &local_118;
        uStack_180 = &local_128;
        local_148 = FUN_143b1fbd2;
        local_198 = param_3;
        FUN_146c03fd0(pplVar12,(int)(*local_e8)[(longlong)iVar4 * 2]);
        local_d0 = (longlong *)CONCAT44(local_d0._4_4_,(uint)local_d0 & ~uStack_e0._4_4_);
        FUN_1449c0562(&uStack_e0);
        iVar4 = local_d0._4_4_;
        plVar3 = local_d0;
      } while (local_e8 != pplVar9 ||
               ((longlong *)CONCAT44(uStack_d4,uStack_d8) != plVar2 || local_d0._4_4_ != iVar11));
    }
LAB_14838642e:
    local_d0 = plVar3;
    plStack_c8 = (longlong *)0x0;
    local_c0 = 0;
    local_e8 = (longlong **)0x0;
    uStack_e0 = (longlong ***)0x0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_158[0] = 0;
    local_158[1] = 0;
    local_1a0 = (longlong ***)(longlong)(int)uStack_110;
    if (0 < (longlong)local_1a0) {
      lVar8 = 0;
      pplVar12 = &local_108;
      do {
        local_15c = *(undefined4 *)(local_118 + lVar8 * 4);
        uStack_190 = (longlong *)&local_15c;
        local_168 = &local_198;
        local_170 = FUN_143b1fd02;
        uVar7 = *(undefined4 *)(local_128 + lVar8 * 4);
        local_108 = (longlong *)0x0;
        plStack_100 = (longlong *)CONCAT44(plStack_100._4_4_,1);
        local_198 = param_3;
        FUN_144a06ca8(pplVar12,1,0);
        *(undefined4 *)local_108 = uVar7;
        local_1b8 = &local_170;
        FUN_146c81f86(local_1a8,pplVar12,&local_e8,local_158);
        if (local_108 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        local_108 = (longlong *)&DAT_100000000;
        local_f8 = (longlong *)&DAT_ffffffff;
        uStack_f0 = 0;
        plStack_100 = (longlong *)&uStack_d8;
        if (local_c0 == 0) {
          iVar11 = 0;
        }
        else {
          FUN_1449c0562(pplVar12);
          iVar11 = local_c0;
        }
        uStack_178 = CONCAT44(uStack_ec,uStack_f0);
        uStack_180 = local_f8;
        plVar2 = uStack_180;
        uStack_190 = local_108;
        local_188 = plStack_100;
        uStack_180._4_4_ = (uint)((ulonglong)local_f8 >> 0x20);
        iVar4 = uStack_180._4_4_;
        local_198 = &local_e8;
        if ((uStack_180._4_4_ != iVar11) ||
           (uStack_180 = plVar2, plStack_100 != (longlong *)&uStack_d8)) {
          do {
            uStack_180 = plVar2;
            local_108 = (longlong *)
                        CONCAT44(local_108._4_4_,
                                 *(undefined4 *)((longlong)*local_198 + (longlong)iVar4 * 0xc));
            (*(code *)*param_4)(param_4[1],pplVar12);
            uStack_180 = (longlong *)CONCAT44(uStack_180._4_4_,(uint)uStack_180 & ~uStack_190._4_4_)
            ;
            FUN_1449c0562(&uStack_190);
            iVar4 = uStack_180._4_4_;
            plVar2 = uStack_180;
          } while (local_198 != &local_e8 ||
                   (local_188 != (longlong *)&uStack_d8 || uStack_180._4_4_ != iVar11));
        }
        lVar8 = lVar8 + 1;
      } while ((longlong ***)lVar8 != local_1a0);
      if (local_158[0] != 0) {
        FUN_1400020a8();
      }
    }
    local_a0 = 0;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_e8);
    local_50 = 0;
    pplVar12 = (longlong **)CONCAT71((int7)((ulonglong)pplVar12 >> 8),1);
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (iVar11 == 2) {
      pplVar12 = (longlong **)(param_1 + 2);
      plVar2 = (longlong *)(param_1 + 6);
      local_198 = (longlong ***)&DAT_100000000;
      local_188 = (longlong *)&DAT_ffffffff;
      uStack_180 = (longlong *)((ulonglong)uStack_180._4_4_ << 0x20);
      uStack_190 = plVar2;
      if (param_1[0xc] == 0) {
        iVar11 = 0;
      }
      else {
        FUN_1449c0562(&local_198);
        iVar11 = param_1[0xc];
      }
      local_d0 = local_188;
      plVar3 = local_d0;
      plStack_c8 = uStack_180;
      uStack_e0._0_4_ = SUB84(local_198,0);
      uStack_e0._4_4_ = local_198._4_4_;
      uStack_d8 = (undefined4)uStack_190;
      uStack_d4 = uStack_190._4_4_;
      local_d0._4_4_ = (int)((ulonglong)local_188 >> 0x20);
      iVar4 = local_d0._4_4_;
      local_e8 = pplVar12;
      if ((local_d0._4_4_ != iVar11) || (uStack_190 != plVar2)) {
        do {
          local_d0 = plVar3;
          uVar10 = (uint)(*local_e8)[(longlong)iVar4 * 2];
          uVar5 = uVar10 & 0xfffffff;
          uVar7 = 0xffffffff;
          if ((int)uVar5 <
              *(int *)(local_1a8 + 0x28) * 0x200 + *(int *)((longlong)local_1a8 + 0x144)) {
            uVar5 = uVar5 >> 9;
            uVar10 = uVar10 & 0x1ff;
            if ((ushort)(*(short *)(local_1a8[0x29][uVar5] + (ulonglong)uVar10 * 2) - 1U) < 0xfffe)
            {
              uVar7 = *(undefined4 *)
                       ((ulonglong)uVar10 * 0xc + local_1a8[0x30][uVar5] +
                       (ulonglong)((uint)((ulonglong)(*local_e8)[(longlong)iVar4 * 2] >> 0x1e) & 3)
                       * 4);
            }
          }
          local_130 = &local_198;
          uStack_190 = &local_98;
          local_188 = &local_118;
          uStack_180 = &local_128;
          local_138 = FUN_143b1faa2;
          local_198 = param_3;
          FUN_146c04194(local_1a8,uVar7);
          local_d0 = (longlong *)CONCAT44(local_d0._4_4_,(uint)local_d0 & ~uStack_e0._4_4_);
          FUN_1449c0562(&uStack_e0);
          iVar4 = local_d0._4_4_;
          plVar3 = local_d0;
        } while (local_e8 != pplVar12 ||
                 ((longlong *)CONCAT44(uStack_d4,uStack_d8) != plVar2 || local_d0._4_4_ != iVar11));
      }
      goto LAB_14838642e;
    }
    pplVar12 = (longlong **)0x0;
    if (iVar11 == 4) {
      plVar2 = (longlong *)(param_1 + 6);
      local_198 = (longlong ***)&DAT_100000000;
      local_188 = (longlong *)&DAT_ffffffff;
      uStack_180 = (longlong *)((ulonglong)uStack_180 & 0xffffffff00000000);
      local_1a0 = param_3;
      uStack_190 = plVar2;
      if (param_1[0xc] == 0) {
        iVar11 = 0;
      }
      else {
        FUN_1449c0562(&local_198);
        iVar11 = param_1[0xc];
      }
      local_d0 = local_188;
      plVar3 = local_d0;
      plStack_c8 = uStack_180;
      uStack_e0 = local_198;
      uStack_d8 = (undefined4)uStack_190;
      uStack_d4 = uStack_190._4_4_;
      local_e8 = (longlong **)(param_1 + 2);
      local_d0._4_4_ = (int)((ulonglong)local_188 >> 0x20);
      if ((local_d0._4_4_ != iVar11) || (param_3 = local_1a0, uStack_190 != plVar2)) {
        pplVar9 = local_1a8;
        iVar4 = local_d0._4_4_;
        local_d0 = plVar3;
        do {
          uVar1 = (*local_e8)[(longlong)iVar4 * 2];
          uVar10 = (uint)uVar1;
          if ((-1 < (int)uVar10) &&
             ((int)uVar10 < *(int *)(pplVar9 + 0x28) * 0x200 + *(int *)((longlong)pplVar9 + 0x144)))
          {
            uVar5 = (uint)(uVar1 >> 9) & 0x3fffff;
            if ((ushort)(*(short *)(pplVar9[0x29][uVar5] + (ulonglong)(uVar10 & 0x1ff) * 2) - 1U) <
                0xfffe) {
              if (local_1a0[1] == (longlong **)0x0) {
                uVar5 = FUN_146bc96d4(*local_1a0,uVar1 & 0xffffffff);
              }
              else {
                uVar5 = *(uint *)(local_1a0[1][4][uVar5] + (ulonglong)(uVar10 & 0x1ff) * 4);
              }
              local_198 = (longlong ***)CONCAT44(local_198._4_4_,uVar5);
              if (-1 < (int)uVar5) {
                if ((int)uStack_90 != local_64) {
                  puVar6 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar6 = local_60;
                  }
                  for (iVar4 = *(int *)(puVar6 + (ulonglong)(local_50 + 0x7fffffffU & uVar5) * 4);
                      iVar4 != -1; iVar4 = *(int *)(local_98 + (longlong)iVar4 * 0xc + 4)) {
                    if (*(uint *)(local_98 + (longlong)iVar4 * 0xc) == uVar5) goto LAB_148386837;
                  }
                }
                FUN_1447cbafe(&local_98,&local_108,&local_198,0);
                uVar1 = uStack_110;
                lVar8 = (longlong)(int)uStack_110;
                uVar5 = (int)uStack_110 + 1;
                uStack_110 = CONCAT44(uStack_110._4_4_,uVar5);
                if (uStack_110._4_4_ < uVar5) {
                  FUN_1446f48e2(&local_118,uVar1 & 0xffffffff);
                }
                uVar1 = uStack_120;
                *(undefined4 *)(local_118 + lVar8 * 4) = (undefined4)local_198;
                pplVar12 = (longlong **)(longlong)(int)uStack_120;
                uVar5 = (int)uStack_120 + 1;
                uStack_120 = CONCAT44(uStack_120._4_4_,uVar5);
                if (uStack_120._4_4_ < uVar5) {
                  FUN_1446f48e2(&local_128,uVar1 & 0xffffffff);
                }
                *(uint *)(local_128 + (longlong)pplVar12 * 4) = uVar10;
                pplVar9 = local_1a8;
              }
            }
          }
LAB_148386837:
          local_d0 = (longlong *)CONCAT44(local_d0._4_4_,(uint)local_d0 & ~uStack_e0._4_4_);
          FUN_1449c0562(&uStack_e0);
          param_3 = local_1a0;
          iVar4 = local_d0._4_4_;
          plVar3 = local_d0;
        } while (local_e8 != (longlong **)(param_1 + 2) ||
                 ((longlong *)CONCAT44(uStack_d4,uStack_d8) != plVar2 || local_d0._4_4_ != iVar11));
      }
      goto LAB_14838642e;
    }
  }
  FUN_1447a082e(&local_98);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
LAB_1483866cb:
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return (ulonglong)pplVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838690f FUN_14838690f body=204 status=ok
// SIG undefined FUN_14838690f(void)

undefined8
FUN_14838690f(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 4) == 2) {
    local_38 = *param_3;
    local_30 = param_3[1];
    if (param_4 == (undefined8 *)0x0) {
      uStack_50 = 0;
      local_48 = 0xffffffff;
      local_58 = param_2;
      FUN_148376a28();
    }
    else {
      local_48 = param_4[2];
      local_58 = *param_4;
      uStack_50 = param_4[1];
    }
    uVar1 = FUN_148386e56(param_1,param_2,&local_58,&local_38);
  }
  else if (*(int *)(param_1 + 4) == 1) {
    local_28 = *param_3;
    local_20 = param_3[1];
    uVar1 = FUN_1483869dc(param_1,param_2,&local_28);
  }
  else {
    uVar1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1483869dc FUN_1483869dc body=1145 status=ok
// SIG undefined FUN_1483869dc(void)

ulonglong FUN_1483869dc(int *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  code *local_a0;
  undefined8 **local_98;
  longlong *local_90;
  undefined8 local_88;
  int *piStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  int *piStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1[1] == 1) {
    iVar12 = *param_1;
    puVar11 = (undefined8 *)0x0;
    if (iVar12 == 1) {
      plVar13 = (longlong *)(param_1 + 2);
      piVar1 = param_1 + 6;
      local_68 = (undefined8 *)&DAT_100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      piStack_60 = piVar1;
      if (param_1[0xc] != 0) {
        FUN_1449c0562(&local_68);
        puVar11 = (undefined8 *)(ulonglong)(uint)param_1[0xc];
      }
      local_78 = local_58;
      uVar5 = local_78;
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_88 = local_68;
      piStack_80 = piStack_60;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_90 = plVar13;
      if ((local_78._4_4_ != (int)puVar11) || (piStack_60 != piVar1)) {
        iVar12 = local_78._4_4_;
        local_78 = uVar5;
        do {
          local_a0 = FUN_143b1fd48;
          local_98 = &local_68;
          local_68 = param_3;
          FUN_146bd7d34(param_2 + 0xb8,*(undefined4 *)(*local_90 + (longlong)iVar12 * 0x10),
                        &local_a0);
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar12 = local_78._4_4_;
          uVar5 = local_78;
        } while (local_90 != plVar13 || (piStack_80 != piVar1 || local_78._4_4_ != (int)puVar11));
      }
    }
    else if (iVar12 == 2) {
      plVar13 = (longlong *)(param_1 + 2);
      piVar1 = param_1 + 6;
      local_68 = (undefined8 *)&DAT_100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      piStack_60 = piVar1;
      if (param_1[0xc] == 0) {
        iVar12 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar12 = param_1[0xc];
      }
      puVar11 = &local_88;
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar5 = local_78;
      local_88 = local_68;
      piStack_80 = piStack_60;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar6 = local_78._4_4_;
      local_90 = plVar13;
      if ((local_78._4_4_ != iVar12) || (piStack_60 != piVar1)) {
        do {
          local_78 = uVar5;
          uVar7 = *(ulonglong *)(*local_90 + (longlong)iVar6 * 0x10);
          uVar10 = (uint)uVar7;
          uVar8 = uVar10 & 0xfffffff;
          if ((int)uVar8 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144)) {
            uVar9 = (ulonglong)(uVar8 >> 9);
            uVar10 = uVar10 & 0x1ff;
            if (((((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x148) + uVar9 * 8) +
                                      (ulonglong)uVar10 * 2) - 1U) < 0xfffe) &&
                 (uVar10 = *(uint *)((ulonglong)uVar10 * 0xc +
                                     *(longlong *)(*(longlong *)(param_2 + 0x180) + uVar9 * 8) +
                                    (ulonglong)((uint)(uVar7 >> 0x1e) & 3) * 4), -1 < (int)uVar10))
                && ((int)uVar10 < *(int *)(param_2 + 0x1d0) * 0x200 + *(int *)(param_2 + 0x1d4))) &&
               ((ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(param_2 + 0x1d8) + (ulonglong)(uVar10 >> 9) * 8)
                                   + (ulonglong)(uVar10 & 0x1ff) * 2) - 1U) < 0xfffe)) {
              local_68 = (undefined8 *)CONCAT44(local_68._4_4_,uVar10);
              (*(code *)*param_3)(param_3[1]);
            }
          }
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(puVar11);
          iVar6 = local_78._4_4_;
          uVar5 = local_78;
        } while (local_90 != plVar13 || (piStack_80 != piVar1 || local_78._4_4_ != iVar12));
      }
    }
    else {
      if (iVar12 != 4) goto LAB_148386ba3;
      plVar13 = (longlong *)(param_1 + 2);
      piVar1 = param_1 + 6;
      local_68 = (undefined8 *)&DAT_100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      piStack_60 = piVar1;
      if (param_1[0xc] == 0) {
        iVar12 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar12 = param_1[0xc];
      }
      puVar11 = &local_88;
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar5 = local_78;
      local_88 = local_68;
      piStack_80 = piStack_60;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar6 = local_78._4_4_;
      local_a8 = plVar13;
      local_90 = plVar13;
      if ((local_78._4_4_ != iVar12) || (piStack_60 != piVar1)) {
        do {
          local_78 = uVar5;
          uVar7 = *(ulonglong *)(*local_90 + (longlong)iVar6 * 0x10);
          uVar10 = (uint)uVar7;
          if ((-1 < (int)uVar10) &&
             ((int)uVar10 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) {
            uVar9 = (ulonglong)((uint)(uVar7 >> 9) & 0x3fffff);
            uVar7 = (ulonglong)(uVar10 & 0x1ff);
            if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x148) + uVar9 * 8) +
                                   (ulonglong)(uVar10 & 0x1ff) * 2) - 1U) < 0xfffe) {
              lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x180) + uVar9 * 8);
              uVar2 = *(undefined4 *)(lVar4 + 4 + uVar7 * 0xc);
              uVar3 = *(undefined4 *)(lVar4 + 8 + uVar7 * 0xc);
              local_68._0_4_ = *(undefined4 *)(lVar4 + uVar7 * 0xc);
              (*(code *)*param_3)(param_3[1],&local_68);
              local_68._0_4_ = uVar2;
              (*(code *)*param_3)(param_3[1],&local_68);
              plVar13 = local_a8;
              local_68 = (undefined8 *)CONCAT44(local_68._4_4_,uVar3);
              (*(code *)*param_3)(param_3[1],&local_68);
            }
          }
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(puVar11);
          iVar6 = local_78._4_4_;
          uVar5 = local_78;
        } while (local_90 != plVar13 || (piStack_80 != piVar1 || local_78._4_4_ != iVar12));
      }
    }
    local_78 = uVar5;
    puVar11 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar11 >> 8),1);
  }
  else {
    puVar11 = (undefined8 *)0x0;
  }
LAB_148386ba3:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar11 & 0xffffffff;
}



// FUNCTION 148386e56 FUN_148386e56 body=3447 status=ok
// SIG undefined FUN_148386e56(void)

ulonglong FUN_148386e56(int *param_1,longlong **param_2,longlong **param_3,undefined8 *param_4)

{
  longlong **pplVar1;
  longlong *plVar2;
  int **ppiVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  int ***pppiVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_1f8 [32];
  code **local_1d8;
  longlong **local_1c8;
  longlong **local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  code *local_198;
  longlong ***local_190;
  code *local_188;
  longlong ***local_180;
  code *local_178;
  longlong ***local_170;
  int *local_168;
  ulonglong uStack_160;
  longlong local_158 [3];
  code *local_140;
  longlong ***local_138;
  longlong **local_130;
  undefined8 uStack_128;
  int ***pppiStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  int *local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  int **local_d8;
  int ***pppiStack_d0;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined8 uStack_b0;
  int **local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  int local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (param_1[1] != 2) {
    puVar17 = (undefined8 *)0x0;
    goto LAB_148387311;
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = (int *)0x0;
  uStack_100 = 0;
  iVar15 = *param_1;
  puVar17 = (undefined8 *)0x0;
  iVar8 = 0;
  local_1c8 = param_2;
  local_1b0 = param_4;
  if (iVar15 == 1) {
    plVar2 = (longlong *)(param_1 + 2);
    ppiVar3 = (int **)(param_1 + 6);
    local_130 = (longlong **)&DAT_100000000;
    pppiStack_120 = (int ***)&DAT_ffffffff;
    uStack_118 = (ulonglong)uStack_118._4_4_ << 0x20;
    uStack_128 = (longlong **)ppiVar3;
    if (param_1[0xc] != 0) {
      FUN_1449c0562(&local_130);
      iVar8 = param_1[0xc];
    }
    local_a8 = (int **)uStack_128;
    local_a0 = pppiStack_120;
    pppiVar7 = local_a0;
    lStack_98 = uStack_118;
    uStack_b0 = local_130;
    local_a0._4_4_ = (int)((ulonglong)pppiStack_120 >> 0x20);
    iVar15 = local_a0._4_4_;
    local_b8 = plVar2;
    if ((local_a0._4_4_ != iVar8) || (local_a0 = pppiVar7, uStack_128 != (longlong **)ppiVar3)) {
      do {
        local_a0 = pppiVar7;
        uVar10 = *(ulonglong *)(*local_b8 + (longlong)iVar15 * 0x10);
        uVar14 = (uint)uVar10;
        if ((-1 < (int)uVar14) &&
           (((int)uVar14 < *(int *)(param_2 + 4) * 0x200 + *(int *)((longlong)param_2 + 0x24) &&
            ((ushort)(*(short *)(*(longlong *)
                                  ((longlong)param_2[5] +
                                  (ulonglong)((uint)(uVar10 >> 6) & 0x1fffff8)) +
                                (ulonglong)(uVar14 & 0x1ff) * 2) - 1U) < 0xfffe)))) {
          local_138 = &local_130;
          uStack_128 = (longlong **)&local_108;
          local_140 = FUN_143b1fd8a;
          local_130 = param_2;
          FUN_146bd7d34(param_2 + 0x17);
        }
        local_a0 = (int ***)CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_b0._4_4_);
        FUN_1449c0562(&uStack_b0);
        iVar15 = local_a0._4_4_;
        pppiVar7 = local_a0;
      } while (local_b8 != plVar2 || (local_a8 != ppiVar3 || local_a0._4_4_ != iVar8));
    }
LAB_148387004:
    puVar6 = local_1b0;
    puVar17 = (undefined8 *)0x0;
    lStack_98 = 0;
    local_90 = 0;
    local_b8 = (longlong *)0x0;
    uStack_b0 = (longlong **)0x0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    local_158[0] = 0;
    local_158[1] = 0;
    if (*param_1 - 1U < 2) {
      puVar16 = (undefined8 *)(longlong)(int)uStack_100;
      if (0 < (longlong)puVar16) {
        puVar17 = (undefined8 *)0x0;
        local_1c0 = param_3;
        local_1b8 = puVar16;
        do {
          local_168 = (int *)0x0;
          uStack_160 = 0;
          uStack_128 = (longlong **)&local_168;
          local_170 = &local_130;
          local_178 = FUN_143b1fdfc;
          local_130 = param_3;
          FUN_146c04194(local_1c8,local_108[(longlong)puVar17],&local_178);
          FUN_144958a06(local_168,uStack_160 & 0xffffffff);
          pplVar1 = local_1c8;
          if (((int)uStack_160 != 2) || (*local_168 != local_168[1])) {
            local_130 = local_1c8;
            pppiStack_120 = (int ***)&local_168;
            local_180 = &local_130;
            local_188 = FUN_143b1fe66;
            iVar15 = local_108[(longlong)puVar17];
            local_d8 = (int **)0x0;
            pppiStack_d0 = (int ***)CONCAT44(pppiStack_d0._4_4_,1);
            uStack_128 = param_3;
            FUN_144a06ca8(&local_d8,1,0);
            *(int *)local_d8 = iVar15;
            local_1d8 = &local_188;
            FUN_146c8215c(pplVar1,&local_d8,&local_b8,local_158);
            if (local_d8 != (int **)0x0) {
              FUN_1400020a8();
            }
            local_d8 = (int **)&DAT_100000000;
            local_c8 = 0xffffffff;
            uStack_c0 = 0;
            pppiStack_d0 = &local_a8;
            if (local_90 == 0) {
              iVar15 = 0;
            }
            else {
              FUN_1449c0562(&local_d8);
              iVar15 = local_90;
            }
            param_3 = local_1c0;
            uStack_110 = CONCAT44(uStack_bc,uStack_c0);
            uStack_118 = local_c8;
            lVar12 = uStack_118;
            uStack_128 = (longlong **)local_d8;
            pppiStack_120 = pppiStack_d0;
            uStack_118._4_4_ = (uint)((ulonglong)local_c8 >> 0x20);
            iVar8 = uStack_118._4_4_;
            local_130 = &local_b8;
            if ((uStack_118._4_4_ != iVar15) ||
               (puVar16 = local_1b8, uStack_118 = lVar12, pppiStack_d0 != &local_a8)) {
              do {
                uStack_118 = lVar12;
                local_d8 = (int **)CONCAT44(local_d8._4_4_,
                                            *(undefined4 *)
                                             ((longlong)*local_130 + (longlong)iVar8 * 0xc));
                (*(code *)*puVar6)(puVar6[1],&local_d8);
                uStack_118 = CONCAT44(uStack_118._4_4_,(uint)uStack_118 & ~uStack_128._4_4_);
                FUN_1449c0562(&uStack_128);
                puVar16 = local_1b8;
                iVar8 = uStack_118._4_4_;
                lVar12 = uStack_118;
              } while (local_130 != &local_b8 ||
                       (pppiStack_120 != &local_a8 || uStack_118._4_4_ != iVar15));
            }
          }
          if (local_168 != (int *)0x0) {
            FUN_1400020a8();
          }
          puVar17 = (undefined8 *)((longlong)puVar17 + 1);
        } while (puVar17 != puVar16);
      }
LAB_1483875cc:
      puVar17 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar17 >> 8),1);
      if (local_158[0] != 0) {
        FUN_1400020a8();
      }
    }
    else if (*param_1 == 4) {
      local_1a8 = (longlong)(int)uStack_e0;
      if (0 < local_1a8) {
        lVar12 = 0;
        local_1c0 = param_3;
        do {
          local_168 = (int *)CONCAT44(local_168._4_4_,*(undefined4 *)(local_e8 + lVar12 * 4));
          uStack_128 = (longlong **)&local_168;
          local_190 = &local_130;
          local_198 = FUN_143b1ff9a;
          uVar4 = *(undefined4 *)(local_f8 + lVar12 * 4);
          local_d8 = (int **)0x0;
          pppiStack_d0 = (int ***)CONCAT44(pppiStack_d0._4_4_,1);
          local_1a0 = lVar12;
          local_130 = local_1c0;
          FUN_144a06ca8(&local_d8,1,0);
          pplVar1 = local_1c8;
          *(undefined4 *)local_d8 = uVar4;
          local_1d8 = &local_198;
          FUN_146c81f86(local_1c8,&local_d8);
          if (local_d8 != (int **)0x0) {
            FUN_1400020a8();
          }
          local_d8 = (int **)&DAT_100000000;
          local_c8 = 0xffffffff;
          uStack_c0 = 0;
          pppiStack_d0 = &local_a8;
          if (local_90 == 0) {
            iVar15 = 0;
          }
          else {
            FUN_1449c0562(&local_d8);
            iVar15 = local_90;
          }
          uStack_110 = CONCAT44(uStack_bc,uStack_c0);
          uStack_118 = local_c8;
          lVar12 = uStack_118;
          uStack_128 = (longlong **)local_d8;
          pppiStack_120 = pppiStack_d0;
          uStack_118._4_4_ = (uint)((ulonglong)local_c8 >> 0x20);
          local_130 = &local_b8;
          if ((uStack_118._4_4_ != iVar15) || (pppiStack_d0 != &local_a8)) {
            local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,iVar15);
            iVar15 = uStack_118._4_4_;
            uStack_118 = lVar12;
            do {
              uVar14 = *(uint *)((longlong)*local_130 + (longlong)iVar15 * 0xc);
              lVar12 = pplVar1[0x30][uVar14 >> 9];
              uVar10 = (ulonglong)(uVar14 & 0x1ff);
              uVar4 = *(undefined4 *)(lVar12 + 4 + uVar10 * 0xc);
              uVar5 = *(undefined4 *)(lVar12 + 8 + uVar10 * 0xc);
              local_d8._0_4_ = *(undefined4 *)(lVar12 + uVar10 * 0xc);
              (*(code *)*puVar6)(puVar6[1],&local_d8);
              local_d8._0_4_ = uVar4;
              (*(code *)*puVar6)(puVar6[1],&local_d8);
              local_d8 = (int **)CONCAT44(local_d8._4_4_,uVar5);
              (*(code *)*puVar6)(puVar6[1],&local_d8);
              uStack_118 = CONCAT44(uStack_118._4_4_,(uint)uStack_118 & ~uStack_128._4_4_);
              FUN_1449c0562(&uStack_128);
              iVar15 = uStack_118._4_4_;
              lVar12 = uStack_118;
            } while (local_130 != &local_b8 ||
                     (pppiStack_120 != &local_a8 || uStack_118._4_4_ != (int)local_1b8));
          }
          uStack_118 = lVar12;
          lVar12 = local_1a0 + 1;
          puVar17 = puVar6;
        } while (lVar12 != local_1a8);
        goto LAB_1483875cc;
      }
      puVar17 = (undefined8 *)&DAT_00000001;
    }
    local_70 = 0;
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_b8);
    if (local_108 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (iVar15 == 2) {
      plVar2 = (longlong *)(param_1 + 2);
      ppiVar3 = (int **)(param_1 + 6);
      local_130 = (longlong **)&DAT_100000000;
      pppiStack_120 = (int ***)&DAT_ffffffff;
      uStack_118 = (ulonglong)uStack_118._4_4_ << 0x20;
      uStack_128 = (longlong **)ppiVar3;
      if (param_1[0xc] == 0) {
        iVar15 = 0;
      }
      else {
        FUN_1449c0562(&local_130);
        iVar15 = param_1[0xc];
      }
      local_a0 = pppiStack_120;
      pppiVar7 = local_a0;
      lStack_98 = uStack_118;
      uStack_b0 = local_130;
      local_a8 = (int **)uStack_128;
      local_a0._4_4_ = (int)((ulonglong)pppiStack_120 >> 0x20);
      iVar8 = local_a0._4_4_;
      local_b8 = plVar2;
      if ((local_a0._4_4_ != iVar15) ||
         (local_a0 = pppiStack_120, uStack_128 != (longlong **)ppiVar3)) {
        do {
          local_a0 = pppiVar7;
          uVar11 = uStack_100;
          uVar10 = *(ulonglong *)(*local_b8 + (longlong)iVar8 * 0x10);
          uVar14 = (uint)uVar10;
          uVar9 = uVar14 & 0xfffffff;
          if ((int)uVar9 <
              *(int *)(local_1c8 + 0x28) * 0x200 + *(int *)((longlong)local_1c8 + 0x144)) {
            uVar9 = uVar9 >> 9;
            uVar14 = uVar14 & 0x1ff;
            if (((((ushort)(*(short *)(local_1c8[0x29][uVar9] + (ulonglong)uVar14 * 2) - 1U) <
                   0xfffe) &&
                 (uVar14 = *(uint *)((ulonglong)uVar14 * 0xc + local_1c8[0x30][uVar9] +
                                    (ulonglong)((uint)(uVar10 >> 0x1e) & 3) * 4), -1 < (int)uVar14))
                && ((int)uVar14 <
                    *(int *)(local_1c8 + 0x3a) * 0x200 + *(int *)((longlong)local_1c8 + 0x1d4))) &&
               ((ushort)(*(short *)(local_1c8[0x3b][uVar14 >> 9] + (ulonglong)(uVar14 & 0x1ff) * 2)
                        - 1U) < 0xfffe)) {
              lVar12 = (longlong)(int)uStack_100;
              uVar9 = (int)uStack_100 + 1;
              uStack_100 = CONCAT44(uStack_100._4_4_,uVar9);
              if (uStack_100._4_4_ < uVar9) {
                FUN_1446f48e2(&local_108,uVar11 & 0xffffffff);
              }
              local_108[lVar12] = uVar14;
            }
          }
          local_a0 = (int ***)CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_b0._4_4_);
          FUN_1449c0562(&uStack_b0);
          iVar8 = local_a0._4_4_;
          pppiVar7 = local_a0;
        } while (local_b8 != plVar2 || (local_a8 != ppiVar3 || local_a0._4_4_ != iVar15));
      }
      goto LAB_148387004;
    }
    if (iVar15 == 4) {
      lStack_98 = 0;
      iVar15 = 0;
      local_90 = 0;
      local_b8 = (longlong *)0x0;
      uStack_b0 = (longlong **)0x0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = (undefined1 *)0x0;
      local_70 = 0;
      pplVar1 = (longlong **)(param_1 + 2);
      pppiVar7 = (int ***)(param_1 + 6);
      local_d8 = (int **)&DAT_100000000;
      local_c8 = 0xffffffff;
      uStack_c0 = 0;
      pppiStack_d0 = pppiVar7;
      if (param_1[0xc] != 0) {
        FUN_1449c0562(&local_d8);
        iVar15 = param_1[0xc];
      }
      uStack_118 = local_c8;
      lVar12 = uStack_118;
      uStack_110 = CONCAT44(uStack_bc,uStack_c0);
      uStack_128 = (longlong **)local_d8;
      pppiStack_120 = pppiStack_d0;
      uStack_118._4_4_ = (uint)((ulonglong)local_c8 >> 0x20);
      iVar8 = uStack_118._4_4_;
      local_130 = pplVar1;
      if ((uStack_118._4_4_ != iVar15) || (uStack_118 = lVar12, pppiStack_d0 != pppiVar7)) {
        do {
          uStack_118 = lVar12;
          uVar10 = (*local_130)[(longlong)iVar8 * 2];
          uVar14 = (uint)uVar10;
          if ((-1 < (int)uVar14) &&
             ((int)uVar14 <
              *(int *)(local_1c8 + 0x28) * 0x200 + *(int *)((longlong)local_1c8 + 0x144))) {
            uVar11 = (ulonglong)((uint)(uVar10 >> 9) & 0x3fffff);
            if ((ushort)(*(short *)(local_1c8[0x29][uVar11] + (ulonglong)(uVar14 & 0x1ff) * 2) - 1U)
                < 0xfffe) {
              if (param_3[1] == (longlong *)0x0) {
                uVar9 = FUN_146bc96d4(*param_3,uVar10 & 0xffffffff);
              }
              else {
                uVar9 = *(uint *)(*(longlong *)(param_3[1][4] + uVar11 * 8) +
                                 (ulonglong)(uVar14 & 0x1ff) * 4);
              }
              local_d8 = (int **)CONCAT44(local_d8._4_4_,uVar9);
              if (-1 < (int)uVar9) {
                if ((int)uStack_b0 != local_84) {
                  puVar13 = local_78;
                  if (local_78 == (undefined1 *)0x0) {
                    puVar13 = local_80;
                  }
                  for (iVar8 = *(int *)(puVar13 + (ulonglong)(local_70 + 0x7fffffffU & uVar9) * 4);
                      iVar8 != -1; iVar8 = *(int *)((longlong)local_b8 + (longlong)iVar8 * 0xc + 4))
                  {
                    if (*(uint *)((longlong)local_b8 + (longlong)iVar8 * 0xc) == uVar9)
                    goto LAB_148387a32;
                  }
                }
                FUN_1447cbafe(&local_b8,local_158,&local_d8,0);
                uVar10 = uStack_e0;
                lVar12 = (longlong)(int)uStack_e0;
                uVar9 = (int)uStack_e0 + 1;
                uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar9);
                if (uStack_e0._4_4_ < uVar9) {
                  FUN_1446f48e2(&local_e8,uVar10 & 0xffffffff);
                }
                uVar10 = uStack_f0;
                *(undefined4 *)(local_e8 + lVar12 * 4) = local_d8._0_4_;
                lVar12 = (longlong)(int)uStack_f0;
                uVar9 = (int)uStack_f0 + 1;
                uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar9);
                if (uStack_f0._4_4_ < uVar9) {
                  FUN_1446f48e2(&local_f8,uVar10 & 0xffffffff);
                }
                *(uint *)(local_f8 + lVar12 * 4) = uVar14;
              }
            }
          }
LAB_148387a32:
          uStack_118 = CONCAT44(uStack_118._4_4_,(uint)uStack_118 & ~uStack_128._4_4_);
          FUN_1449c0562(&uStack_128);
          iVar8 = uStack_118._4_4_;
          lVar12 = uStack_118;
        } while (local_130 != pplVar1 || (pppiStack_120 != pppiVar7 || uStack_118._4_4_ != iVar15));
      }
      local_70 = 0;
      if (local_78 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(&local_b8);
      goto LAB_148387004;
    }
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
LAB_148387311:
  if ((local_60 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return (ulonglong)puVar17 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148387bce FUN_148387bce body=2165 status=ok
// SIG undefined FUN_148387bce(void)

void FUN_148387bce(int *param_1,longlong param_2,longlong **param_3,undefined8 *param_4)

{
  int *piVar1;
  int **ppiVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong **pplVar13;
  int iVar14;
  int *piVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_158 [44];
  int local_12c;
  longlong **local_128;
  int *local_120;
  longlong **local_118;
  code *local_110;
  longlong ***local_108;
  longlong **local_100;
  undefined8 uStack_f8;
  int *piStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  int *local_d8;
  undefined8 uStack_d0;
  int **local_c0;
  int *piStack_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_9c;
  longlong *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  longlong lStack_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_1[1] == 2) {
    local_d8 = (int *)0x0;
    uStack_d0 = 0;
    iVar14 = *param_1;
    if (iVar14 == 1) {
      plVar7 = (longlong *)(param_1 + 2);
      ppiVar2 = (int **)(param_1 + 6);
      local_100 = (longlong **)&DAT_100000000;
      piStack_f0 = (int *)&DAT_ffffffff;
      uStack_e8 = (ulonglong)uStack_e8._4_4_ << 0x20;
      uStack_f8 = ppiVar2;
      if (param_1[0xc] == 0) {
        iVar14 = 0;
      }
      else {
        FUN_1449c0562(&local_100);
        iVar14 = param_1[0xc];
      }
      local_88 = (undefined4)uStack_f8;
      uStack_84 = uStack_f8._4_4_;
      lStack_78 = uStack_e8;
      local_80 = piStack_f0;
      puVar5 = local_80;
      uStack_90 = local_100;
      local_80._4_4_ = (int)((ulonglong)piStack_f0 >> 0x20);
      iVar6 = local_80._4_4_;
      local_98 = plVar7;
      if ((local_80._4_4_ != iVar14) || (local_80 = piStack_f0, uStack_f8 != ppiVar2)) {
        do {
          local_80 = puVar5;
          uVar9 = *(ulonglong *)(*local_98 + (longlong)iVar6 * 0x10);
          uVar12 = (uint)uVar9;
          if ((-1 < (int)uVar12) &&
             (((int)uVar12 < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24) &&
              ((ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(param_2 + 0x28) +
                                    (ulonglong)((uint)(uVar9 >> 6) & 0x1fffff8)) +
                                  (ulonglong)(uVar12 & 0x1ff) * 2) - 1U) < 0xfffe)))) {
            local_108 = &local_100;
            uStack_f8 = &local_d8;
            local_110 = FUN_143b1ffe0;
            local_100 = param_3;
            FUN_146bd7d34(param_2 + 0xb8);
          }
          local_80 = (undefined4 *)CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_90._4_4_);
          FUN_1449c0562(&uStack_90);
          bVar18 = local_80._4_4_ != iVar14;
          iVar6 = local_80._4_4_;
          puVar5 = local_80;
        } while (local_98 != plVar7 || ((int **)CONCAT44(uStack_84,local_88) != ppiVar2 || bVar18));
      }
    }
    else if (iVar14 == 2) {
      plVar7 = (longlong *)(param_1 + 2);
      ppiVar2 = (int **)(param_1 + 6);
      local_100 = (longlong **)&DAT_100000000;
      piStack_f0 = (int *)&DAT_ffffffff;
      uStack_e8 = (ulonglong)uStack_e8._4_4_ << 0x20;
      uStack_f8 = ppiVar2;
      if (param_1[0xc] == 0) {
        iVar14 = 0;
      }
      else {
        FUN_1449c0562(&local_100);
        iVar14 = param_1[0xc];
      }
      local_80 = piStack_f0;
      puVar5 = local_80;
      lStack_78 = uStack_e8;
      uStack_90 = local_100;
      local_88 = (undefined4)uStack_f8;
      uStack_84 = uStack_f8._4_4_;
      local_80._4_4_ = (int)((ulonglong)piStack_f0 >> 0x20);
      iVar6 = local_80._4_4_;
      local_98 = plVar7;
      if ((local_80._4_4_ != iVar14) || (local_80 = puVar5, uStack_f8 != ppiVar2)) {
        do {
          local_80 = puVar5;
          uVar9 = *(ulonglong *)(*local_98 + (longlong)iVar6 * 0x10);
          uVar12 = (uint)uVar9;
          uVar10 = uVar12 & 0xfffffff;
          if ((int)uVar10 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144)) {
            uVar11 = (ulonglong)(uVar10 >> 9);
            uVar12 = uVar12 & 0x1ff;
            if (((((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x148) + uVar11 * 8) +
                                      (ulonglong)uVar12 * 2) - 1U) < 0xfffe) &&
                 (uVar12 = *(uint *)((ulonglong)uVar12 * 0xc +
                                     *(longlong *)(*(longlong *)(param_2 + 0x180) + uVar11 * 8) +
                                    (ulonglong)((uint)(uVar9 >> 0x1e) & 3) * 4), -1 < (int)uVar12))
                && ((int)uVar12 < *(int *)(param_2 + 0x1d0) * 0x200 + *(int *)(param_2 + 0x1d4))) &&
               (((ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(param_2 + 0x1d8) + (ulonglong)(uVar12 >> 9) * 8
                                      ) + (ulonglong)(uVar12 & 0x1ff) * 2) - 1U) < 0xfffe &&
                (iVar6 = FUN_1482abca2(param_3), iVar6 != -1)))) {
              pplVar13 = (longlong **)(longlong)(int)uStack_d0;
              uVar12 = (int)uStack_d0 + 1;
              uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar12);
              if (uStack_d0._4_4_ < uVar12) {
                local_12c = iVar6;
                local_128 = pplVar13;
                FUN_1446f48e2(&local_d8,pplVar13);
                pplVar13 = local_128;
                iVar6 = local_12c;
              }
              local_d8[(longlong)pplVar13] = iVar6;
            }
          }
          local_80 = (undefined4 *)CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_90._4_4_);
          FUN_1449c0562(&uStack_90);
          iVar6 = local_80._4_4_;
          puVar5 = local_80;
        } while (local_98 != plVar7 ||
                 ((int **)CONCAT44(uStack_84,local_88) != ppiVar2 || local_80._4_4_ != iVar14));
      }
    }
    else {
      if (iVar14 != 4) goto LAB_148388258;
      lStack_78 = 0;
      iVar14 = 0;
      local_70 = 0;
      local_98 = (longlong *)0x0;
      uStack_90 = (longlong **)0x0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      pplVar13 = (longlong **)(param_1 + 2);
      piVar1 = param_1 + 6;
      local_c0 = (int **)0x100000000;
      local_b0._0_4_ = 0xffffffff;
      local_b0._4_4_ = 0;
      uStack_a8 = 0;
      piStack_b8 = piVar1;
      if (param_1[0xc] != 0) {
        FUN_1449c0562(&local_c0);
        iVar14 = param_1[0xc];
      }
      uStack_e8._0_4_ = (uint)local_b0;
      uStack_e8._4_4_ = local_b0._4_4_;
      uStack_e0 = CONCAT44(uStack_a4,uStack_a8);
      uStack_f8 = local_c0;
      piStack_f0 = piStack_b8;
      local_120 = param_1;
      local_100 = pplVar13;
      if ((local_b0._4_4_ != iVar14) || (piStack_b8 != piVar1)) {
        do {
          uVar12 = (uint)(*local_100)[(longlong)(int)uStack_e8._4_4_ * 2];
          if ((-1 < (int)uVar12) &&
             (((int)uVar12 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144) &&
              ((ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(param_2 + 0x148) +
                                    (ulonglong)
                                    ((uint)((ulonglong)
                                            (*local_100)[(longlong)(int)uStack_e8._4_4_ * 2] >> 6) &
                                    0x1fffff8)) + (ulonglong)(uVar12 & 0x1ff) * 2) - 1U) < 0xfffe)))
             ) {
            iVar6 = (*(code *)(*param_3)[3])(param_3);
            local_c0 = (int **)CONCAT44(local_c0._4_4_,iVar6);
            if (-1 < iVar6) {
              FUN_1447cbafe(&local_98,&local_9c,&local_c0,0);
            }
          }
          uStack_e8._0_4_ = (uint)uStack_e8 & ~uStack_f8._4_4_;
          FUN_1449c0562(&uStack_f8);
        } while (local_100 != pplVar13 || (piStack_f0 != piVar1 || uStack_e8._4_4_ != iVar14));
      }
      local_c0 = (int **)&DAT_100000000;
      local_b0 = 0xffffffff;
      uStack_a8 = 0;
      piStack_b8 = &local_88;
      if (local_70 == 0) {
        iVar14 = 0;
      }
      else {
        FUN_1449c0562(&local_c0);
        iVar14 = local_70;
      }
      uStack_e0 = CONCAT44(uStack_a4,uStack_a8);
      uStack_e8 = local_b0;
      lVar8 = uStack_e8;
      uStack_f8 = local_c0;
      piStack_f0 = piStack_b8;
      local_100 = &local_98;
      uStack_e8._4_4_ = (uint)((ulonglong)local_b0 >> 0x20);
      if ((uStack_e8._4_4_ != iVar14) || (piStack_b8 != &local_88)) {
        local_128 = param_3 + 0x18;
        iVar6 = uStack_e8._4_4_;
        local_12c = iVar14;
        local_118 = param_3;
        uStack_e8 = lVar8;
        do {
          iVar6 = *(int *)((longlong)*local_100 + (longlong)iVar6 * 0xc);
          if ((longlong)iVar6 < 0) {
LAB_148387ec8:
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = (longlong *)0x0;
            if (iVar6 < *(int *)(param_3 + 0x13)) {
              lVar8 = (longlong)*(int *)((longlong)param_3[0x12] + (longlong)iVar6 * 4);
              if (lVar8 == -1) goto LAB_148387ec8;
              plVar7 = param_3[0xc] + lVar8 * 7;
            }
          }
          pplVar13 = (longlong **)(plVar7 + 1);
          if (plVar7 == (longlong *)0x0) {
            pplVar13 = local_128;
          }
          local_c0 = (int **)0x0;
          iVar6 = *(int *)(pplVar13 + 1);
          plVar7 = *pplVar13;
          piStack_b8 = (int *)CONCAT44(piStack_b8._4_4_,iVar6);
          if ((longlong)iVar6 != 0) {
            FUN_144a06ca8(&local_c0,iVar6,0);
            memcpy(local_c0,plVar7,(longlong)iVar6 << 2);
            ppiVar2 = local_c0;
            lVar8 = (longlong)(int)piStack_b8;
            if (lVar8 != 0) {
              lVar17 = 0;
              do {
                lVar16 = *(longlong *)
                          (*(longlong *)(param_2 + 0x180) +
                          (ulonglong)(*(uint *)((longlong)ppiVar2 + lVar17) >> 9) * 8);
                uVar9 = (ulonglong)(*(uint *)((longlong)ppiVar2 + lVar17) & 0x1ff);
                local_9c = *(undefined4 *)(lVar16 + uVar9 * 0xc);
                uVar3 = *(undefined4 *)(lVar16 + 4 + uVar9 * 0xc);
                uVar4 = *(undefined4 *)(lVar16 + 8 + uVar9 * 0xc);
                (*(code *)*param_4)(param_4[1],&local_9c);
                local_9c = uVar3;
                (*(code *)*param_4)(param_4[1],&local_9c);
                local_9c = uVar4;
                (*(code *)*param_4)(param_4[1],&local_9c);
                lVar17 = lVar17 + 4;
                param_3 = local_118;
                iVar14 = local_12c;
              } while (lVar8 * 4 != lVar17);
            }
            if (local_c0 != (int **)0x0) {
              FUN_1400020a8(local_c0);
            }
          }
          uStack_e8 = CONCAT44(uStack_e8._4_4_,(uint)uStack_e8 & ~uStack_f8._4_4_);
          FUN_1449c0562(&uStack_f8);
          iVar6 = uStack_e8._4_4_;
          lVar8 = uStack_e8;
        } while (local_100 != &local_98 || (piStack_f0 != &local_88 || uStack_e8._4_4_ != iVar14));
      }
      uStack_e8 = lVar8;
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(&local_98);
      param_1 = local_120;
    }
    if (*param_1 - 1U < 2) {
      if ((longlong)(int)uStack_d0 != 0) {
        piVar1 = local_d8 + (int)uStack_d0;
        piVar15 = local_d8;
        do {
          lVar8 = (longlong)(int)param_3[0xe][(longlong)*piVar15 * 10 + 5];
          if (lVar8 != 0) {
            lVar17 = param_3[0xe][(longlong)*piVar15 * 10 + 4];
            lVar16 = 0;
            do {
              local_98 = (longlong *)CONCAT44(local_98._4_4_,*(undefined4 *)(lVar17 + lVar16));
              (*(code *)*param_4)(param_4[1],&local_98);
              lVar16 = lVar16 + 4;
            } while (lVar8 * 4 != lVar16);
          }
          piVar15 = piVar15 + 1;
        } while (piVar15 != piVar1);
      }
    }
    if (local_d8 != (int *)0x0) {
      FUN_1400020a8(local_d8);
    }
  }
LAB_148388258:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148388444 FUN_148388444 body=163 status=ok
// SIG undefined FUN_148388444(void)

void FUN_148388444(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,char param_7)

{
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_60;
  char local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_7 * '\x02' + '\x01';
  local_28 = *param_5;
  local_68 = &local_28;
  local_20 = param_5[1];
  local_38 = *param_4;
  local_30 = param_4[1];
  local_48 = *param_3;
  local_40 = param_3[1];
  local_60 = param_6;
  FUN_1483884e8(param_1,param_2,&local_48,&local_38);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483884e8 FUN_1483884e8 body=358 status=ok
// SIG undefined FUN_1483884e8(void)

ulonglong FUN_1483884e8(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,byte param_7)

{
  int iVar1;
  byte bVar2;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  ulonglong uVar3;
  undefined1 auStack_c8 [40];
  code *local_a0;
  undefined8 *local_98;
  code *local_90;
  undefined8 **local_88;
  code *local_80;
  undefined8 **local_78;
  code *local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  bVar2 = param_7;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1[1] == 1) {
    local_58 = &param_6;
    local_38 = param_5;
    iVar1 = *param_1;
    uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
    local_60 = param_3;
    local_50 = param_4;
    local_48 = param_2;
    local_40 = local_58;
    local_30 = param_2;
    if (iVar1 == 4) {
      if ((param_7 & 1) != 0) {
        local_68 = &local_40;
        local_70 = FUN_143b20026;
        FUN_148385c17(param_1,param_2);
      }
      uVar3 = CONCAT71(uVar4,1);
      if ((bVar2 & 2) != 0) {
        local_78 = &local_58;
        local_80 = FUN_143b204c0;
        FUN_1483869dc(param_1,param_2);
      }
      goto LAB_148388572;
    }
    if (iVar1 == 1) {
      local_98 = &local_60;
      local_a0 = FUN_143b208ea;
      FUN_1483842c4(param_1,param_2,param_6);
    }
    else {
      if (iVar1 != 2) goto LAB_148388570;
      local_88 = &local_58;
      local_90 = FUN_143b204c0;
      FUN_1483869dc(param_1,param_2);
    }
    uVar3 = CONCAT71(uVar4,1);
  }
  else {
LAB_148388570:
    uVar3 = 0;
  }
LAB_148388572:
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838864f FUN_14838864f body=177 status=ok
// SIG undefined FUN_14838864f(void)

void FUN_14838864f(void)

{
  undefined8 *in_R9;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  char in_stack_00000040;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  char local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = in_stack_00000040 * '\x02' + '\x01';
  local_30 = *in_stack_00000030;
  local_70 = &local_30;
  local_28 = in_stack_00000030[1];
  local_40 = *in_stack_00000028;
  local_78 = &local_40;
  local_38 = in_stack_00000028[1];
  local_50 = *in_R9;
  local_48 = in_R9[1];
  local_68 = in_stack_00000038;
  FUN_148388701();
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148388701 FUN_148388701 body=3225 status=ok
// SIG undefined FUN_148388701(void)

ulonglong FUN_148388701(int *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                       undefined8 param_5,undefined8 *param_6,double *param_7,byte param_8)

{
  int *piVar1;
  double *pdVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  int *piVar15;
  undefined1 auVar16 [16];
  int iVar17;
  longlong lVar18;
  uint uVar19;
  longlong *plVar20;
  longlong *plVar21;
  uint uVar22;
  longlong lVar23;
  int *piVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int iVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auStack_258 [44];
  int local_22c;
  longlong local_228;
  int *local_220;
  longlong *local_218;
  ulonglong local_210;
  longlong *local_208;
  longlong local_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  longlong *local_188;
  undefined8 uStack_180;
  int *piStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  longlong local_160;
  longlong local_158;
  double *local_150;
  undefined8 local_148;
  uint local_13c;
  undefined1 local_138 [12];
  uint uStack_12c;
  int *local_128;
  undefined1 auStack_120 [8];
  undefined8 local_118;
  double local_110;
  undefined1 local_108 [16];
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (param_1[1] == 2) {
    local_150 = param_7;
    local_148 = param_5;
    iVar29 = *param_1;
    piVar24 = (int *)0x0;
    local_160 = param_3;
    local_158 = param_2;
    if (iVar29 == 1) {
      plVar20 = (longlong *)(param_1 + 2);
      piVar1 = param_1 + 6;
      local_188 = (longlong *)&DAT_100000000;
      piStack_178 = (int *)&DAT_ffffffff;
      uStack_170 = (int *)((ulonglong)uStack_170._4_4_ << 0x20);
      uStack_180 = piVar1;
      if (param_1[0xc] != 0) {
        FUN_1449c0562(&local_188);
        piVar24 = (int *)(ulonglong)(uint)param_1[0xc];
      }
      local_118._0_4_ = (uint)uStack_170;
      auStack_120 = (undefined1  [8])piStack_178;
      local_118._4_4_ = uStack_170._4_4_;
      auVar16 = _auStack_120;
      local_128 = uStack_180;
      stack0xfffffffffffffed0 = (int *)local_188;
      local_138._0_8_ = plVar20;
      auStack_120._4_4_ = (undefined4)((ulonglong)piStack_178 >> 0x20);
      plVar21 = plVar20;
      iVar29 = auStack_120._4_4_;
      if ((auStack_120._4_4_ != (int)piVar24) ||
         (piVar15 = uStack_170, _auStack_120 = auVar16, uStack_180 != piVar1)) {
        do {
          _auStack_120 = auVar16;
          uVar26 = *(ulonglong *)(*plVar21 + (longlong)iVar29 * 0x10);
          uVar22 = (uint)uVar26;
          if ((-1 < (int)uVar22) &&
             ((int)uVar22 < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24))) {
            uVar26 = (ulonglong)((uint)(uVar26 >> 9) & 0x3fffff);
            uVar19 = uVar22 & 0x1ff;
            if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + uVar26 * 8) +
                                   (ulonglong)uVar19 * 2) - 1U) < 0xfffe) {
              lVar18 = *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar26 * 8);
              puVar3 = (undefined8 *)(lVar18 + (ulonglong)uVar19 * 0x18);
              local_188 = (longlong *)*puVar3;
              uStack_180 = (int *)puVar3[1];
              piStack_178 = *(int **)(lVar18 + 0x10 + (ulonglong)uVar19 * 0x18);
              if (param_7 != (double *)0x0) {
                dVar32 = (double)local_188 * param_7[8];
                dVar33 = (double)uStack_180 * param_7[9];
                dVar35 = (double)piStack_178 * param_7[10];
                dVar39 = *param_7;
                dVar7 = param_7[1];
                dVar9 = param_7[2];
                dVar6 = param_7[3];
                dVar36 = dVar33 * dVar39 - dVar32 * dVar7;
                dVar40 = dVar35 * dVar7 - dVar33 * dVar9;
                dVar41 = dVar32 * dVar9 - dVar39 * dVar35;
                dVar40 = dVar40 + dVar40;
                dVar41 = dVar41 + dVar41;
                dVar36 = dVar36 + dVar36;
                local_188 = (longlong *)
                            ((dVar36 * dVar7 - dVar41 * dVar9) + dVar6 * dVar40 + dVar32 +
                            param_7[4]);
                uStack_180 = (int *)((dVar9 * dVar40 - dVar39 * dVar36) +
                                     param_7[3] * dVar41 + dVar33 + param_7[5]);
                piStack_178 = (int *)(dVar36 * dVar6 + dVar35 + (dVar41 * dVar39 - dVar40 * dVar7) +
                                     param_7[6]);
              }
              local_13c = uVar22;
              (*(code *)*param_4)(param_4[1]);
            }
          }
          auStack_120._0_4_ = auStack_120._0_4_ & ~uStack_12c;
          FUN_1449c0562(local_138 + 8);
          plVar21 = (longlong *)local_138._0_8_;
          iVar29 = auStack_120._4_4_;
          piVar15 = uStack_170;
          auVar16 = _auStack_120;
        } while ((longlong *)local_138._0_8_ != plVar20 ||
                 (local_128 != piVar1 || auStack_120._4_4_ != (int)piVar24));
      }
    }
    else if (iVar29 == 2) {
      plVar20 = (longlong *)(param_1 + 2);
      piVar1 = param_1 + 6;
      local_188 = (longlong *)&DAT_100000000;
      piStack_178 = (int *)&DAT_ffffffff;
      uStack_170 = (int *)((ulonglong)uStack_170._4_4_ << 0x20);
      uStack_180 = piVar1;
      if (param_1[0xc] == 0) {
        iVar29 = 0;
      }
      else {
        FUN_1449c0562(&local_188);
        iVar29 = param_1[0xc];
      }
      piVar24 = (int *)(local_138 + 8);
      local_118 = uStack_170;
      auStack_120 = (undefined1  [8])piStack_178;
      auVar16 = _auStack_120;
      local_128 = uStack_180;
      stack0xfffffffffffffed0 = (int *)local_188;
      local_138._0_8_ = plVar20;
      auStack_120._4_4_ = (undefined4)((ulonglong)piStack_178 >> 0x20);
      plVar21 = plVar20;
      iVar17 = auStack_120._4_4_;
      if ((auStack_120._4_4_ != iVar29) ||
         (piVar15 = uStack_170, _auStack_120 = auVar16, uStack_180 != piVar1)) {
        do {
          _auStack_120 = auVar16;
          uVar26 = *(ulonglong *)(*plVar21 + (longlong)iVar17 * 0x10);
          uVar22 = (uint)uVar26;
          uVar19 = uVar22 & 0xfffffff;
          if ((int)uVar19 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144)) {
            uVar27 = (ulonglong)(uVar19 >> 9);
            uVar22 = uVar22 & 0x1ff;
            if (((((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x148) + uVar27 * 8) +
                                      (ulonglong)uVar22 * 2) - 1U) < 0xfffe) &&
                 (uVar22 = *(uint *)((ulonglong)uVar22 * 0xc +
                                     *(longlong *)(*(longlong *)(param_2 + 0x180) + uVar27 * 8) +
                                    (ulonglong)((uint)(uVar26 >> 0x1e) & 3) * 4), -1 < (int)uVar22))
                && ((int)uVar22 < *(int *)(param_2 + 0x1d0) * 0x200 + *(int *)(param_2 + 0x1d4))) &&
               (((ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(param_2 + 0x1d8) + (ulonglong)(uVar22 >> 9) * 8
                                      ) + (ulonglong)(uVar22 & 0x1ff) * 2) - 1U) < 0xfffe &&
                (iVar17 = FUN_1482abca2(param_3), iVar17 != -1)))) {
              FUN_143b15618(&local_160,iVar17);
            }
          }
          auStack_120._0_4_ = auStack_120._0_4_ & ~uStack_12c;
          FUN_1449c0562(piVar24);
          plVar21 = (longlong *)local_138._0_8_;
          iVar17 = auStack_120._4_4_;
          piVar15 = uStack_170;
          auVar16 = _auStack_120;
        } while ((longlong *)local_138._0_8_ != plVar20 ||
                 (local_128 != piVar1 || auStack_120._4_4_ != iVar29));
      }
    }
    else {
      if (iVar29 != 4) goto LAB_148388edd;
      plVar20 = (longlong *)(param_1 + 2);
      piVar24 = param_1 + 6;
      stack0xfffffffffffffed0 = piVar24;
      local_138._0_8_ = 0x100000000;
      local_128 = (int *)&DAT_ffffffff;
      auVar16._12_4_ = 0;
      auVar16._0_12_ = stack0xfffffffffffffee4;
      _auStack_120 = auVar16 << 0x20;
      local_228 = param_3;
      if (param_1[0xc] == 0) {
        iVar29 = 0;
      }
      else {
        FUN_1449c0562(local_138);
        iVar29 = param_1[0xc];
      }
      uStack_170 = local_128;
      piVar15 = uStack_170;
      uStack_168 = auStack_120;
      uStack_180 = (int *)local_138._0_8_;
      piStack_178 = stack0xfffffffffffffed0;
      uStack_170._4_4_ = (uint)((ulonglong)local_128 >> 0x20);
      local_188 = plVar20;
      if ((uStack_170._4_4_ != iVar29) || (stack0xfffffffffffffed0 != piVar24)) {
        local_208 = (longlong *)(local_228 + 0xc0);
        iVar17 = uStack_170._4_4_;
        local_22c = iVar29;
        local_220 = piVar24;
        local_218 = plVar20;
        uStack_170 = piVar15;
        do {
          uVar26 = *(ulonglong *)(*local_188 + (longlong)iVar17 * 0x10);
          uVar22 = (uint)uVar26;
          if (((-1 < (int)uVar22) &&
              ((int)uVar22 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(param_2 + 0x148) +
                                   (ulonglong)((uint)(uVar26 >> 6) & 0x1fffff8)) +
                                 (ulonglong)(uVar22 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            local_210 = uVar26 >> 0x20;
            if ((param_8 & 1) != 0) {
              if ((((longlong)uVar26 < 0) || (*(int *)(local_228 + 0x98) <= (int)(uVar26 >> 0x20)))
                 || (lVar18 = (longlong)*(int *)(*(longlong *)(local_228 + 0x90) + local_210 * 4),
                    lVar18 == -1)) {
                lVar18 = 0;
              }
              else {
                lVar18 = lVar18 * 0x38 + *(longlong *)(local_228 + 0x60);
              }
              plVar20 = (longlong *)(lVar18 + 8);
              if (lVar18 == 0) {
                plVar20 = local_208;
              }
              lVar18 = plVar20[1];
              if ((longlong)(int)lVar18 != 0) {
                local_200 = *plVar20;
                lVar23 = 0;
                do {
                  local_13c = *(uint *)(local_200 + lVar23);
                  lVar25 = *(longlong *)(param_2 + 0x10);
                  lVar5 = *(longlong *)
                           (*(longlong *)(param_2 + 0x130) + (ulonglong)(local_13c >> 9) * 8);
                  uVar26 = (ulonglong)local_13c & 0x1ff;
                  uVar22 = *(uint *)(lVar5 + uVar26 * 0xc);
                  uVar19 = *(uint *)(lVar5 + 4 + uVar26 * 0xc);
                  uVar27 = (ulonglong)uVar22 & 0x1ff;
                  uVar28 = (ulonglong)uVar19 & 0x1ff;
                  uVar4 = *(uint *)(lVar5 + 8 + uVar26 * 0xc);
                  uVar26 = (ulonglong)uVar4 & 0x1ff;
                  lVar5 = *(longlong *)(lVar25 + (ulonglong)(uVar22 >> 9) * 8);
                  pdVar2 = (double *)(lVar5 + uVar27 * 0x18);
                  dVar9 = *pdVar2;
                  dVar32 = pdVar2[1];
                  local_128 = *(int **)(lVar5 + 0x10 + uVar27 * 0x18);
                  lVar5 = *(longlong *)(lVar25 + (ulonglong)(uVar19 >> 9) * 8);
                  pdVar2 = (double *)(lVar5 + uVar28 * 0x18);
                  dVar39 = *pdVar2;
                  dVar7 = pdVar2[1];
                  local_110 = *(double *)(lVar5 + 0x10 + uVar28 * 0x18);
                  lVar25 = *(longlong *)(lVar25 + (ulonglong)(uVar4 >> 9) * 8);
                  pdVar2 = (double *)(lVar25 + uVar26 * 0x18);
                  dVar6 = *pdVar2;
                  dVar41 = pdVar2[1];
                  local_f8 = *(double *)(lVar25 + 0x10 + uVar26 * 0x18);
                  if (param_7 != (double *)0x0) {
                    dVar36 = param_7[8];
                    dVar40 = param_7[9];
                    dVar9 = dVar9 * dVar36;
                    dVar32 = dVar32 * dVar40;
                    local_1d8 = param_7[10];
                    dStack_1d0 = param_7[0xb];
                    local_198 = (double)local_128 * local_1d8;
                    dStack_190 = dStack_1d0 * 0.0;
                    local_1a8._8_4_ = SUB84(dVar32,0);
                    local_1a8._0_8_ = dVar9;
                    local_1a8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
                    dVar11 = *param_7;
                    local_1e8 = param_7[1];
                    dStack_1e0 = param_7[2];
                    dVar37 = dVar32 * dVar11 - dVar9 * local_1e8;
                    dVar10 = local_198 * local_1e8 - dVar32 * dStack_1e0;
                    dVar30 = dVar9 * dStack_1e0 - local_198 * dVar11;
                    dVar39 = dVar39 * dVar36;
                    dVar7 = dVar7 * dVar40;
                    local_1b8 = local_110 * local_1d8;
                    dStack_1b0 = dStack_1d0 * 0.0;
                    dVar34 = dVar7 * dVar11 - dVar39 * local_1e8;
                    dVar8 = local_1b8 * local_1e8 - dVar7 * dStack_1e0;
                    dVar31 = dVar39 * dStack_1e0 - local_1b8 * dVar11;
                    dVar8 = dVar8 + dVar8;
                    dVar31 = dVar31 + dVar31;
                    dVar33 = param_7[3];
                    dVar35 = param_7[3];
                    local_1c8 = dVar33 * dVar8 + dVar39;
                    dStack_1c0 = dVar35 * dVar31 + dVar7;
                    dVar6 = dVar6 * dVar36;
                    dVar41 = dVar41 * dVar40;
                    local_1d8 = local_f8 * local_1d8;
                    dStack_1d0 = dStack_1d0 * 0.0;
                    dVar36 = dVar41 * dVar11 - dVar6 * local_1e8;
                    dVar40 = local_1d8 * local_1e8 - dVar41 * dStack_1e0;
                    dVar38 = dVar6 * dStack_1e0 - dVar11 * local_1d8;
                    dVar39 = dStack_1d0 * param_7[3] - param_7[3] * dStack_1d0;
                    dVar40 = dVar40 + dVar40;
                    dVar38 = dVar38 + dVar38;
                    dVar10 = dVar10 + dVar10;
                    dVar30 = dVar30 + dVar30;
                    dVar37 = dVar37 + dVar37;
                    dVar34 = dVar34 + dVar34;
                    dVar36 = dVar36 + dVar36;
                    dVar39 = local_1e8 * (dVar39 + dVar39);
                    local_1f8._8_4_ = SUB84(dVar39,0);
                    local_1f8._0_8_ = dVar11 * dVar36;
                    local_1f8._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
                    dVar12 = param_7[4];
                    dVar13 = param_7[5];
                    dVar9 = (dVar37 * local_1e8 - dVar30 * dStack_1e0) + dVar33 * dVar10 + dVar9 +
                            dVar12;
                    dVar32 = (dStack_1e0 * dVar10 - dVar11 * dVar37) +
                             dVar35 * dVar30 + (double)local_1a8._8_8_ + dVar13;
                    dVar39 = (dVar34 * local_1e8 - dVar31 * dStack_1e0) + local_1c8 + dVar12;
                    dVar7 = (dStack_1e0 * dVar8 - dVar11 * dVar34) + dStack_1c0 + dVar13;
                    dVar6 = (dVar36 * local_1e8 - dVar38 * dStack_1e0) + dVar33 * dVar40 + dVar6 +
                            dVar12;
                    dVar41 = (dStack_1e0 * dVar40 - dVar11 * dVar36) + dVar35 * dVar38 + dVar41 +
                             dVar13;
                    local_f8 = param_7[6];
                    local_128 = (int *)(dVar37 * dVar33 + local_198 +
                                        (dVar30 * dVar11 - dVar10 * local_1e8) + local_f8);
                    local_110 = dVar34 * dVar33 + local_1b8 + (dVar31 * dVar11 - dVar8 * local_1e8)
                                + local_f8;
                    local_f8 = dVar36 * dVar33 + local_1d8 + (dVar38 * dVar11 - dVar40 * local_1e8)
                               + local_f8;
                  }
                  local_138._8_4_ = SUB84(dVar32,0);
                  local_138._0_8_ = dVar9;
                  uStack_12c = (int)((ulonglong)dVar32 >> 0x20);
                  local_118._0_4_ = SUB84(dVar7,0);
                  auStack_120 = (undefined1  [8])dVar39;
                  local_118._4_4_ = (int)((ulonglong)dVar7 >> 0x20);
                  local_108._8_4_ = SUB84(dVar41,0);
                  local_108._0_8_ = dVar6;
                  local_108._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
                  (*(code *)*param_6)(param_6[1],&local_13c,local_138);
                  lVar23 = lVar23 + 4;
                } while ((longlong)(int)lVar18 * 4 != lVar23);
              }
            }
            piVar24 = local_220;
            plVar20 = local_218;
            iVar29 = local_22c;
            if ((param_8 & 2) != 0) {
              _local_138 = ZEXT816(0);
              lVar18 = FUN_1482abc36(local_228,local_210);
              if ((lVar18 != 0) && ((longlong)*(int *)(lVar18 + 0x20) != 0)) {
                plVar21 = *(longlong **)(lVar18 + 0x18);
                plVar20 = plVar21 + (longlong)*(int *)(lVar18 + 0x20) * 5;
                do {
                  lVar18 = plVar21[1];
                  if ((longlong)(int)lVar18 != 0) {
                    lVar23 = *plVar21;
                    lVar25 = 0;
                    do {
                      local_13c = *(uint *)(lVar23 + lVar25);
                      FUN_1449e3bb0(local_138,&local_13c);
                      lVar25 = lVar25 + 4;
                    } while ((longlong)(int)lVar18 * 4 != lVar25);
                  }
                  plVar21 = plVar21 + 5;
                } while (plVar21 != plVar20);
              }
              uVar14 = local_138._0_8_;
              lVar18 = (longlong)(int)local_138._8_4_;
              if (lVar18 != 0) {
                lVar23 = 0;
                do {
                  FUN_143b15618(&local_160,*(undefined4 *)(uVar14 + lVar23));
                  lVar23 = lVar23 + 4;
                } while (lVar18 * 4 != lVar23);
              }
              plVar20 = local_218;
              piVar24 = local_220;
              iVar29 = local_22c;
              if (local_138._0_8_ != 0) {
                FUN_1400020a8(local_138._0_8_);
              }
            }
          }
          uStack_170 = (int *)CONCAT44(uStack_170._4_4_,(uint)uStack_170 & ~uStack_180._4_4_);
          FUN_1449c0562(&uStack_180);
          iVar17 = uStack_170._4_4_;
          piVar15 = uStack_170;
        } while (local_188 != plVar20 || (piStack_178 != piVar24 || uStack_170._4_4_ != iVar29));
      }
    }
    uStack_170 = piVar15;
    piVar24 = (int *)CONCAT71((int7)((ulonglong)piVar24 >> 8),1);
  }
  else {
    piVar24 = (int *)0x0;
  }
LAB_148388edd:
  if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)piVar24 & 0xffffffff;
}



// FUNCTION 14838939c FUN_14838939c body=237 status=ok
// SIG undefined FUN_14838939c(void)

void FUN_14838939c(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = param_2[1];
  local_58 = param_1;
  if ((longlong)(int)lVar5 != 0) {
    lVar3 = *param_2;
    param_1 = param_1 + 1;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)
               (*(longlong *)(*local_58 + 0x180) + (ulonglong)(*(uint *)(lVar3 + lVar7) >> 9) * 8);
      uVar6 = (ulonglong)(*(uint *)(lVar3 + lVar7) & 0x1ff);
      local_4c = *(undefined4 *)(lVar4 + uVar6 * 0xc);
      uVar1 = *(undefined4 *)(lVar4 + 4 + uVar6 * 0xc);
      uVar2 = *(undefined4 *)(lVar4 + 8 + uVar6 * 0xc);
      FUN_1447cbafe(param_1,local_50,&local_4c,0);
      local_4c = uVar1;
      FUN_1447cbafe(param_1,local_50,&local_4c);
      local_4c = uVar2;
      FUN_1447cbafe(param_1,local_50,&local_4c);
      lVar7 = lVar7 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838948a FUN_14838948a body=104 status=ok
// SIG undefined FUN_14838948a(void)

void FUN_14838948a(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001483894ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_14ae74c70)
            [(longlong)((param_3[1] / 2) * 3 + *param_3 / 2) * 6 +
             (longlong)((param_4[1] / 2) * 3 + *param_4 / 2)])();
  return;
}



// FUNCTION 1483894f2 FUN_1483894f2 body=365 status=ok
// SIG undefined FUN_1483894f2(void)

bool FUN_1483894f2(undefined8 param_1,int *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 **local_a0;
  code *local_98;
  undefined8 **local_90;
  undefined8 local_88;
  undefined8 **local_80;
  code *local_78;
  undefined8 **local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 **local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar1 = param_2[1];
  if (iVar1 == 1) {
    FUN_1402226aa(param_3);
    FUN_1402226aa(param_4);
    if (param_2[4] != param_2[0xf]) {
      local_68 = param_3;
      if (*param_2 == 4) {
        local_48 = &local_68;
        local_50 = FUN_143b2092c;
        local_60 = param_4;
        local_58 = param_1;
        FUN_148385c17(param_2,param_1);
      }
      else {
        if (param_5 == (undefined8 *)0x0 || *param_2 != 2) {
          local_98 = FUN_143b20ab4;
          local_90 = &local_68;
          FUN_148385c17(param_2,param_1);
          puVar3 = &local_a8;
          pcVar2 = FUN_143b20afe;
          local_a0 = &local_68;
        }
        else {
          *param_5 = &DAT_100000001;
          local_78 = FUN_143b209f6;
          local_70 = &local_68;
          FUN_148385c17(param_2,param_1);
          local_60 = param_5;
          puVar3 = &local_88;
          pcVar2 = FUN_143b20a40;
          local_80 = &local_68;
        }
        *puVar3 = pcVar2;
        local_68 = param_4;
        FUN_1483842c4(param_2,param_1,0);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return iVar1 == 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148389660 FUN_148389660 body=425 status=ok
// SIG undefined FUN_148389660(void)

undefined4
FUN_148389660(undefined1 *param_1,undefined8 param_2,int *param_3,undefined8 param_4,
             undefined8 param_5,undefined1 **param_6)

{
  undefined4 uVar1;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  code *local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3[1] == 2) {
    if (*param_3 == 4) {
      local_98 = 0;
      uStack_90 = 0xffffffff;
      local_a0 = param_1;
      FUN_148376a28(&local_a0);
      local_a8 = &local_c8;
      local_c0 = param_5;
      local_b0 = FUN_143b20b48;
      local_c8 = param_4;
      local_b8 = param_1;
      uVar1 = FUN_148386011(param_3,param_1,&local_a0);
    }
    else {
      local_a0 = &DAT_100000004;
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      if (param_6 == (undefined1 **)0x0) {
        param_6 = &local_a0;
      }
      *param_6 = &DAT_100000001;
      local_d8 = local_d8 & 0xffffffff00000000;
      (*(code *)(&PTR_FUN_14ae74c70)[(longlong)((param_3[1] / 2) * 3 + *param_3 / 2) * 6])
                (param_1,param_2,param_3,param_6);
      local_d8 = 0;
      uVar1 = FUN_1483894f2(param_1,param_6,param_4,param_5);
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_140345f8a(&local_98);
    }
  }
  else {
    uVar1 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838980a FUN_14838980a body=284 status=ok
// SIG undefined FUN_14838980a(void)

void FUN_14838980a(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) +
                    8 + (ulonglong)((param_2 & 0x1ff) << 4));
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(uVar3 >> 9) * 8);
  if (*(uint *)(lVar1 + (ulonglong)(uVar3 & 0x1ff) * 0xc) == param_2) {
    local_34 = uVar3 << 2;
  }
  else {
    local_34 = (uVar3 * 4 -
               (uint)(*(uint *)(lVar1 + (ulonglong)(uVar3 & 0x1ff) * 0xc + 4) == param_2)) + 2;
  }
  (*(code *)*param_3)(param_3[1]);
  uVar2 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) + 8 +
           (ulonglong)((param_2 & 0x1ff) << 4));
  if (uVar2 >> 0x20 != 0xffffffff) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (uVar2 >> 0x29) * 8);
    uVar3 = (uint)(uVar2 >> 0x20);
    if (*(uint *)(lVar1 + (ulonglong)(uVar3 & 0x1ff) * 0xc) == param_2) {
      local_34 = uVar3 << 2;
    }
    else {
      local_34 = (uVar3 * 4 -
                 (uint)(*(uint *)(lVar1 + (ulonglong)(uVar3 & 0x1ff) * 0xc + 4) == param_2)) + 2;
    }
    (*(code *)*param_3)(param_3[1]);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148389927 FUN_148389927 body=2478 status=ok
// SIG undefined FUN_148389927(void)

ulonglong FUN_148389927(int *param_1,int *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong **pplVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  int *piVar13;
  longlong lVar14;
  undefined1 auStack_1d8 [40];
  int *local_1b0;
  undefined1 local_1a4 [4];
  longlong *local_1a0;
  undefined8 uStack_198;
  int *local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  int *local_178;
  int *piStack_170;
  longlong local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  undefined8 local_150;
  int *piStack_148;
  undefined8 local_140;
  longlong lStack_138;
  longlong **local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  uVar12 = 0;
  if ((*param_1 != *param_2) || (iVar10 = param_1[1], iVar10 != param_2[1])) goto LAB_148389bea;
  if (iVar10 == 2) {
    uVar12 = 1;
    if (param_3 == '\x02') {
      local_58 = (longlong **)0x0;
      local_50 = 0x2000000000;
      plVar1 = (longlong *)(param_1 + 2);
      piVar13 = param_1 + 6;
      local_178 = (int *)&DAT_100000000;
      local_168 = 0xffffffff;
      uStack_160 = 0;
      piStack_170 = piVar13;
      if (param_1[0xc] == 0) {
        iVar10 = 0;
      }
      else {
        FUN_1449c0562(&local_178);
        iVar10 = param_1[0xc];
      }
      uStack_180 = CONCAT44(uStack_15c,uStack_160);
      uStack_188 = local_168;
      lVar14 = uStack_188;
      uStack_198 = local_178;
      local_190 = piStack_170;
      uStack_188._4_4_ = (uint)((ulonglong)local_168 >> 0x20);
      iVar5 = uStack_188._4_4_;
      local_1a0 = plVar1;
      if ((uStack_188._4_4_ == iVar10) && (piStack_170 == piVar13)) {
        uVar12 = 1;
      }
      else {
        do {
          uStack_188 = lVar14;
          plVar3 = *(longlong **)(*local_1a0 + (longlong)iVar5 * 0x10);
          cVar4 = FUN_148383fa9(param_1,(ulonglong)plVar3 >> 0x20,&local_178);
          uVar12 = local_50;
          if (cVar4 == '\0') {
            lVar14 = (longlong)(int)local_50;
            uVar6 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar6);
            if (local_50._4_4_ < uVar6) {
              FUN_146f4cfd4(&local_158,uVar12 & 0xffffffff);
            }
            pplVar8 = local_58;
            if (local_58 == (longlong **)0x0) {
              pplVar8 = &local_158;
            }
            pplVar8[lVar14] = plVar3;
          }
          uStack_188 = CONCAT44(uStack_188._4_4_,(uint)uStack_188 & ~uStack_198._4_4_);
          FUN_1449c0562(&uStack_198);
          iVar5 = uStack_188._4_4_;
          lVar14 = uStack_188;
        } while (local_1a0 != plVar1 || (local_190 != piVar13 || uStack_188._4_4_ != iVar10));
        lVar11 = (longlong)(int)local_50;
        uVar12 = CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
        if (0 < lVar11) {
          pplVar8 = local_58;
          if (local_58 == (longlong **)0x0) {
            pplVar8 = &local_158;
          }
          lVar14 = 0;
          do {
            FUN_14838391e(plVar1,*(undefined8 *)((longlong)pplVar8 + lVar14));
            lVar14 = lVar14 + 8;
          } while (lVar11 * 8 != lVar14);
          cVar4 = FUN_1483b996c(plVar1);
          lVar14 = uStack_188;
          if (cVar4 != '\0') {
            iVar10 = 1;
            if (3 < (uint)(param_1[4] - param_1[0xf])) {
              uVar7 = (ulonglong)(param_1[4] - param_1[0xf] & 0xfffffffe) + 0xf;
              lVar14 = 0x3f;
              if (uVar7 != 0) {
                for (; uVar7 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              iVar10 = 1 << ((byte)lVar14 & 0x1f);
            }
            param_1[0x14] = iVar10;
LAB_14838a19f:
            FUN_14034644e(param_1 + 2);
            lVar14 = uStack_188;
          }
        }
      }
LAB_14838a0fc:
      uStack_188 = lVar14;
      if (local_58 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      goto LAB_148389bea;
    }
    if (param_3 == '\x01') {
      if (param_2[4] == param_2[0xf]) goto LAB_148389bea;
      plVar1 = (longlong *)(param_2 + 2);
      piVar13 = param_2 + 6;
      local_1a0 = (longlong *)&DAT_100000000;
      local_190 = (int *)&DAT_ffffffff;
      uStack_188 = (ulonglong)uStack_188._4_4_ << 0x20;
      iVar10 = 0;
      uStack_198 = piVar13;
      if (param_2[0xc] != 0) {
        FUN_1449c0562(&local_1a0);
        iVar10 = param_2[0xc];
      }
      local_140 = local_190;
      piVar9 = local_140;
      lStack_138 = uStack_188;
      local_150 = local_1a0;
      piStack_148 = uStack_198;
      local_140._4_4_ = (int)((ulonglong)local_190 >> 0x20);
      local_158 = plVar1;
      if ((local_140._4_4_ != iVar10) || (uStack_198 != piVar13)) {
        iVar5 = local_140._4_4_;
        local_140 = piVar9;
        do {
          cVar4 = FUN_148383fa9(param_1,*(undefined4 *)(*local_158 + 4 + (longlong)iVar5 * 0x10),
                                &local_1a0);
          if (cVar4 != '\0') {
            FUN_14838391e(param_1 + 2,local_1a0);
          }
          local_140 = (int *)CONCAT44(local_140._4_4_,(uint)local_140 & ~local_150._4_4_);
          FUN_1449c0562(&local_150);
          iVar5 = local_140._4_4_;
          piVar9 = local_140;
        } while (local_158 != plVar1 || (piStack_148 != piVar13 || local_140._4_4_ != iVar10));
      }
      local_140 = piVar9;
      cVar4 = FUN_1483b996c(param_1 + 2);
      piVar9 = local_140;
      if (cVar4 != '\0') {
        uVar6 = param_1[4] - param_1[0xf];
        uVar12 = CONCAT71((int7)((ulonglong)piVar13 >> 8),1);
        goto joined_r0x000148389ec0;
      }
    }
    else {
      if (param_3 != '\0') goto LAB_148389bea;
      plVar1 = (longlong *)(param_2 + 2);
      piVar2 = param_2 + 6;
      local_1a0 = (longlong *)&DAT_100000000;
      local_190 = (int *)&DAT_ffffffff;
      uStack_188 = (ulonglong)uStack_188._4_4_ << 0x20;
      uStack_198 = piVar2;
      if (param_2[0xc] == 0) {
        piVar13 = (int *)0x0;
      }
      else {
        FUN_1449c0562(&local_1a0);
        piVar13 = (int *)(ulonglong)(uint)param_2[0xc];
      }
      local_140 = local_190;
      piVar9 = local_140;
      lStack_138 = uStack_188;
      local_150 = local_1a0;
      piStack_148 = uStack_198;
      local_140._4_4_ = (int)((ulonglong)local_190 >> 0x20);
      local_158 = plVar1;
      if ((local_140._4_4_ != (int)piVar13) || (uStack_198 != piVar2)) {
        iVar10 = local_140._4_4_;
        local_140 = piVar9;
        do {
          local_1a0 = *(longlong **)(*local_158 + (longlong)iVar10 * 0x10);
          cVar4 = FUN_148383fa9(param_1,(ulonglong)local_1a0 >> 0x20,&local_178);
          if (cVar4 == '\0') {
            FUN_1403458a2(param_1 + 2,local_1a4,&local_1a0,0);
          }
          local_140 = (int *)CONCAT44(local_140._4_4_,(uint)local_140 & ~local_150._4_4_);
          FUN_1449c0562(&local_150);
          iVar10 = local_140._4_4_;
          piVar9 = local_140;
        } while (local_158 != plVar1 || (piStack_148 != piVar2 || local_140._4_4_ != (int)piVar13));
      }
    }
  }
  else {
    if (iVar10 != 1) {
      uVar12 = 0;
      goto LAB_148389bea;
    }
    uVar12 = 1;
    if (param_3 == '\x02') {
      local_58 = (longlong **)0x0;
      local_50 = 0x2000000000;
      plVar1 = (longlong *)(param_1 + 2);
      piVar13 = param_1 + 6;
      local_178 = (int *)&DAT_100000000;
      local_168 = 0xffffffff;
      uStack_160 = 0;
      piStack_170 = piVar13;
      if (param_1[0xc] == 0) {
        iVar10 = 0;
      }
      else {
        FUN_1449c0562(&local_178);
        iVar10 = param_1[0xc];
      }
      uStack_180 = CONCAT44(uStack_15c,uStack_160);
      uStack_188 = local_168;
      lVar14 = uStack_188;
      uStack_198 = local_178;
      local_190 = piStack_170;
      uStack_188._4_4_ = (uint)((ulonglong)local_168 >> 0x20);
      local_1a0 = plVar1;
      if ((uStack_188._4_4_ != iVar10) || (piStack_170 != piVar13)) {
        local_1b0 = param_2 + 0x10;
        iVar5 = uStack_188._4_4_;
        uStack_188 = lVar14;
        do {
          uVar12 = local_50;
          plVar3 = *(longlong **)(*local_1a0 + (longlong)iVar5 * 0x10);
          if (param_2[4] != param_2[0xf]) {
            piVar9 = *(int **)(param_2 + 0x12);
            if (*(int **)(param_2 + 0x12) == (int *)0x0) {
              piVar9 = local_1b0;
            }
            iVar5 = piVar9[param_2[0x14] - 1U &
                           (int)plVar3 + (int)((ulonglong)plVar3 >> 0x20) * 0x17];
            if (iVar5 != -1) {
              do {
                if (*(longlong **)(*(longlong *)(param_2 + 2) + (longlong)iVar5 * 0x10) == plVar3)
                goto LAB_148389fb6;
                iVar5 = *(int *)((longlong)iVar5 * 0x10 + *(longlong *)(param_2 + 2) + 8);
              } while (iVar5 != -1);
            }
          }
          lVar14 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_146f4cfd4(&local_158,uVar12 & 0xffffffff);
          }
          pplVar8 = local_58;
          if (local_58 == (longlong **)0x0) {
            pplVar8 = &local_158;
          }
          pplVar8[lVar14] = plVar3;
LAB_148389fb6:
          uStack_188 = CONCAT44(uStack_188._4_4_,(uint)uStack_188 & ~uStack_198._4_4_);
          FUN_1449c0562(&uStack_198);
          iVar5 = uStack_188._4_4_;
        } while (local_1a0 != plVar1 || (local_190 != piVar13 || uStack_188._4_4_ != iVar10));
        lVar11 = (longlong)(int)local_50;
        uVar12 = CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
        lVar14 = uStack_188;
        if (0 < lVar11) {
          pplVar8 = &local_158;
          if (local_58 != (longlong **)0x0) {
            pplVar8 = local_58;
          }
          lVar14 = 0;
          do {
            FUN_14838391e(plVar1,*(undefined8 *)((longlong)pplVar8 + lVar14));
            lVar14 = lVar14 + 8;
          } while (lVar11 * 8 != lVar14);
          cVar4 = FUN_1483b996c(plVar1);
          lVar14 = uStack_188;
          if (cVar4 != '\0') {
            iVar10 = 1;
            if (3 < (uint)(param_1[4] - param_1[0xf])) {
              uVar7 = (ulonglong)(param_1[4] - param_1[0xf] & 0xfffffffe) + 0xf;
              lVar14 = 0x3f;
              if (uVar7 != 0) {
                for (; uVar7 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              iVar10 = 1 << ((byte)lVar14 & 0x1f);
            }
            param_1[0x14] = iVar10;
            goto LAB_14838a19f;
          }
        }
      }
      goto LAB_14838a0fc;
    }
    if (param_3 == '\x01') {
      if (param_2[4] == param_2[0xf]) goto LAB_148389bea;
      plVar1 = (longlong *)(param_2 + 2);
      piVar13 = param_2 + 6;
      local_1a0 = (longlong *)&DAT_100000000;
      local_190 = (int *)&DAT_ffffffff;
      uStack_188 = (ulonglong)uStack_188._4_4_ << 0x20;
      iVar10 = 0;
      uStack_198 = piVar13;
      if (param_2[0xc] != 0) {
        FUN_1449c0562(&local_1a0);
        iVar10 = param_2[0xc];
      }
      local_140 = local_190;
      piVar9 = local_140;
      lStack_138 = uStack_188;
      local_150 = local_1a0;
      piStack_148 = uStack_198;
      local_140._4_4_ = (int)((ulonglong)local_190 >> 0x20);
      local_158 = plVar1;
      if ((local_140._4_4_ != iVar10) || (uStack_198 != piVar13)) {
        iVar5 = local_140._4_4_;
        local_140 = piVar9;
        do {
          FUN_14838391e(param_1 + 2,*(undefined8 *)(*local_158 + (longlong)iVar5 * 0x10));
          local_140 = (int *)CONCAT44(local_140._4_4_,(uint)local_140 & ~local_150._4_4_);
          FUN_1449c0562(&local_150);
          iVar5 = local_140._4_4_;
          piVar9 = local_140;
        } while (local_158 != plVar1 || (piStack_148 != piVar13 || local_140._4_4_ != iVar10));
      }
      local_140 = piVar9;
      cVar4 = FUN_1483b996c(param_1 + 2);
      if (cVar4 == '\0') goto LAB_148389bea;
      uVar6 = param_1[4] - param_1[0xf];
joined_r0x000148389ec0:
      iVar10 = 1;
      if (3 < uVar6) {
        uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
        lVar14 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar10 = 1 << ((byte)lVar14 & 0x1f);
      }
      param_1[0x14] = iVar10;
      FUN_14034644e(param_1 + 2);
      goto LAB_148389bea;
    }
    if (param_3 != '\0') goto LAB_148389bea;
    plVar1 = (longlong *)(param_2 + 2);
    piVar13 = param_2 + 6;
    local_1a0 = (longlong *)&DAT_100000000;
    local_190 = (int *)&DAT_ffffffff;
    uStack_188 = (ulonglong)uStack_188._4_4_ << 0x20;
    uStack_198 = piVar13;
    if (param_2[0xc] == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_1a0);
      iVar10 = param_2[0xc];
    }
    local_140 = local_190;
    piVar9 = local_140;
    lStack_138 = uStack_188;
    local_150 = local_1a0;
    piStack_148 = uStack_198;
    local_140._4_4_ = (int)((ulonglong)local_190 >> 0x20);
    local_158 = plVar1;
    if ((local_140._4_4_ != iVar10) || (uStack_198 != piVar13)) {
      iVar5 = local_140._4_4_;
      local_140 = piVar9;
      do {
        local_1a0 = *(longlong **)(*local_158 + (longlong)iVar5 * 0x10);
        FUN_1403458a2(param_1 + 2,&local_178,&local_1a0,0);
        local_140 = (int *)CONCAT44(local_140._4_4_,(uint)local_140 & ~local_150._4_4_);
        FUN_1449c0562(&local_150);
        iVar5 = local_140._4_4_;
        piVar9 = local_140;
      } while (local_158 != plVar1 || (piStack_148 != piVar13 || local_140._4_4_ != iVar10));
    }
  }
  local_140 = piVar9;
  uVar12 = CONCAT71((int7)((ulonglong)piVar13 >> 8),1);
LAB_148389bea:
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return uVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838a2d6 FUN_14838a2d6 body=914 status=ok
// SIG undefined FUN_14838a2d6(void)

void FUN_14838a2d6(int *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  longlong *local_88;
  int *local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar10 = (int)param_4[1];
  local_90 = (ulonglong)*(uint *)(param_3 + 8);
  *param_1 = iVar10;
  param_1[1] = 2;
  local_88 = (longlong *)(param_1 + 2);
  local_78 = param_2;
  FUN_140bfc200(local_88,2,1);
  local_70 = param_4;
  FUN_14054c6c4(*(undefined8 *)(param_1 + 2),param_4);
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  if (*(int *)(*(longlong *)(param_1 + 2) + 0x1c) < iVar10) {
    FUN_14481578e(*(longlong *)(param_1 + 2) + 0x10,iVar10);
  }
  local_80 = param_1 + 6;
  FUN_1482ee16c(local_80,1,1);
  FUN_14838a66a(*(undefined8 *)(param_1 + 6),param_3);
  if (0 < (int)local_90) {
    uVar9 = 0;
    do {
      iVar10 = *(int *)(*local_70 + uVar9 * 4);
      iVar3 = *(int *)(*local_70 + 4 + uVar9 * 4);
      lVar11 = **(longlong **)local_80;
      uVar4 = *(uint *)(lVar11 + uVar9 * 8);
      lVar13 = *(longlong *)(*(longlong *)(local_78 + 0x130) + (ulonglong)(uVar4 >> 9) * 8);
      uVar14 = (ulonglong)uVar4 & 0x1ff;
      local_50 = *(undefined4 *)(lVar13 + 8 + uVar14 * 0xc);
      local_58 = *(undefined8 *)(lVar13 + uVar14 * 0xc);
      uVar5 = *(uint *)(lVar11 + 4 + uVar9 * 8);
      lVar12 = *(longlong *)(*(longlong *)(local_78 + 0x130) + (ulonglong)(uVar5 >> 9) * 8);
      uVar16 = (ulonglong)uVar5 & 0x1ff;
      uVar8 = *(undefined8 *)(lVar12 + uVar16 * 0xc);
      local_68 = uVar8;
      uVar8 = local_68;
      local_60 = *(int *)(lVar12 + 8 + uVar16 * 0xc);
      local_68._4_4_ = (int)((ulonglong)uVar8 >> 0x20);
      if ((local_60 == iVar10 || (local_68._4_4_ == iVar10 || (int)uVar8 == iVar10)) &&
         (local_60 == iVar3 || (local_68._4_4_ == iVar3 || (int)uVar8 == iVar3))) {
        puVar1 = (undefined8 *)(lVar13 + uVar14 * 0xc);
        puVar2 = (undefined8 *)(lVar12 + uVar16 * 0xc);
        local_60 = *(int *)(puVar1 + 1);
        local_68 = *puVar1;
        local_58 = *puVar2;
        local_50 = *(undefined4 *)(puVar2 + 1);
        *(uint *)(lVar11 + uVar9 * 8) = uVar5;
        *(uint *)(lVar11 + 4 + uVar9 * 8) = uVar4;
        uVar8 = local_68;
      }
      local_68 = uVar8;
      uVar14 = uVar9 + 1;
      lVar11 = 0;
      do {
        lVar13 = lVar11 + 1;
        lVar12 = 0;
        if (lVar11 != 2) {
          lVar12 = lVar13;
        }
        iVar15 = *(int *)((longlong)&local_58 + lVar12 * 4);
        iVar6 = *(int *)((longlong)&local_58 + lVar11 * 4);
        if (iVar6 == iVar10) {
          if (iVar15 == iVar3) {
LAB_14838a4d4:
            uVar16 = (ulonglong)((int)lVar11 - 1);
            if (lVar11 == 0) {
              uVar16 = 2;
            }
            iVar15 = *(int *)((longlong)&local_58 + uVar16 * 4);
            goto LAB_14838a4ef;
          }
        }
        else if (iVar6 == iVar3 && iVar15 == iVar10) goto LAB_14838a4d4;
        lVar11 = lVar13;
      } while (lVar13 != 3);
      iVar15 = -1;
LAB_14838a4ef:
      if ((((int)local_68 == iVar10) || (local_68._4_4_ == iVar10)) || (local_60 == iVar10)) {
        lVar11 = 0;
        do {
          lVar12 = lVar11 + 1;
          lVar13 = 0;
          if (lVar11 != 2) {
            lVar13 = lVar12;
          }
          iVar6 = *(int *)((longlong)&local_68 + lVar13 * 4);
          iVar3 = *(int *)((longlong)&local_68 + lVar11 * 4);
          if (((iVar3 == iVar10) || (bVar17 = iVar6 == iVar10, iVar6 = iVar3, bVar17)) &&
             (iVar6 == iVar15)) {
            uVar16 = (ulonglong)((int)lVar11 - 1);
            if (lVar11 == 0) {
              uVar16 = 2;
            }
            iVar10 = *(int *)((longlong)&local_68 + uVar16 * 4);
            goto LAB_14838a5c4;
          }
          lVar11 = lVar12;
        } while (lVar12 != 3);
        iVar10 = -1;
      }
      else {
        lVar11 = 0;
        do {
          lVar12 = lVar11 + 1;
          lVar13 = 0;
          if (lVar11 != 2) {
            lVar13 = lVar12;
          }
          iVar7 = *(int *)((longlong)&local_68 + lVar13 * 4);
          iVar6 = *(int *)((longlong)&local_68 + lVar11 * 4);
          iVar10 = iVar15;
          if (((iVar6 == iVar3) || (bVar17 = iVar7 == iVar3, iVar7 = iVar6, bVar17)) &&
             (iVar7 == iVar15)) {
            uVar16 = (ulonglong)((int)lVar11 - 1);
            if (lVar11 == 0) {
              uVar16 = 2;
            }
            iVar15 = *(int *)((longlong)&local_68 + uVar16 * 4);
            goto LAB_14838a5c4;
          }
          lVar11 = lVar12;
        } while (lVar12 != 3);
        iVar15 = -1;
      }
LAB_14838a5c4:
      if (uVar9 == 0) {
        lVar11 = *local_88;
        iVar3 = *(int *)(lVar11 + 0x18);
        *(uint *)(lVar11 + 0x18) = iVar3 + 1U;
        if (*(uint *)(lVar11 + 0x1c) < iVar3 + 1U) {
          FUN_1446f48e2((longlong *)(lVar11 + 0x10),iVar3);
        }
        *(int *)(*(longlong *)(lVar11 + 0x10) + (longlong)iVar3 * 4) = iVar10;
      }
      lVar11 = *local_88;
      iVar10 = *(int *)(lVar11 + 0x18);
      *(uint *)(lVar11 + 0x18) = iVar10 + 1U;
      if (*(uint *)(lVar11 + 0x1c) < iVar10 + 1U) {
        FUN_1446f48e2((longlong *)(lVar11 + 0x10),iVar10);
      }
      *(int *)(*(longlong *)(lVar11 + 0x10) + (longlong)iVar10 * 4) = iVar15;
      uVar9 = uVar14;
    } while (uVar14 != local_90);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838a66a FUN_14838a66a body=88 status=ok
// SIG undefined FUN_14838a66a(void)

undefined8 * FUN_14838a66a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14830bcc8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14838a6c2 FUN_14838a6c2 body=1187 status=ok
// SIG undefined FUN_14838a6c2(void)

undefined8 FUN_14838a6c2(int *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 unaff_RBP;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStack_108 [32];
  longlong local_e8;
  uint local_dc;
  longlong *local_d8;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  int local_bc;
  longlong *local_b8;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined4 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [24];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar2 = *(int *)(*param_3 + 8);
  if ((iVar2 == *(int *)(*param_4 + 8) + -1) && ((int)param_3[1] == (int)param_4[1] + -1)) {
    *param_1 = *(int *)(*param_4 + 8);
    iVar5 = (int)param_4[1];
    param_1[1] = iVar5;
    if (1 < (longlong)iVar5) {
      lVar16 = 0;
      do {
        if (*(int *)(*param_4 + 0x18 + lVar16) != *(int *)(*param_4 + 8)) goto LAB_14838aace;
        lVar16 = lVar16 + 0x10;
      } while ((longlong)iVar5 * 0x10 + -0x10 != lVar16);
    }
    lVar16 = param_3[1];
    uVar14 = (ulonglong)(int)lVar16;
    if (1 < (longlong)uVar14) {
      lVar17 = 0;
      do {
        if (*(int *)(*param_3 + 0x18 + lVar17) != *(int *)(*param_3 + 8)) goto LAB_14838aace;
        lVar17 = lVar17 + 0x10;
      } while (uVar14 * 0x10 + -0x10 != lVar17);
    }
    local_d8 = (longlong *)(param_1 + 2);
    FUN_144aa2ab0(local_d8,param_4);
    local_b8 = (longlong *)(param_1 + 6);
    FUN_14838ab66(local_b8,param_3);
    if (0 < (int)lVar16) {
      uVar15 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
      uVar11 = 0;
      local_b0 = uVar14;
LAB_14838a7b3:
      lVar16 = uVar11 << 4;
      lVar17 = 0;
      local_e8 = lVar16;
      local_a0 = uVar11;
LAB_14838a7c7:
      if ((lVar17 < iVar2 & (byte)uVar15) == 1) {
        lVar13 = *local_d8;
        lVar7 = *(longlong *)(*local_b8 + lVar16);
        uVar3 = *(uint *)(lVar7 + lVar17 * 8);
        if ((-1 < (int)uVar3) &&
           (uVar18 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144),
           (int)uVar3 < (int)uVar18)) {
          uVar14 = (ulonglong)(uVar3 & 0x1ff);
          if (((ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar3 >> 9) * 8) +
                                  uVar14 * 2) - 1U) < 0xfffe) &&
             ((uVar4 = *(uint *)(lVar7 + 4 + lVar17 * 8), -1 < (int)uVar4 && (uVar4 < uVar18)))) {
            uVar11 = (ulonglong)(uVar4 & 0x1ff);
            if ((ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar4 >> 9) * 8)
                                   + uVar11 * 2) - 1U) < 0xfffe) {
              local_dc = (uint)uVar15;
              lVar8 = *(longlong *)(lVar13 + 0x10 + lVar16);
              iVar5 = *(int *)(*(longlong *)(lVar13 + lVar16) + lVar17 * 4);
              iVar6 = *(int *)(*(longlong *)(lVar13 + lVar16) + 4 + lVar17 * 4);
              lVar16 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
              local_c4 = *(undefined4 *)(lVar16 + uVar14 * 0xc);
              local_c8 = *(undefined4 *)(lVar16 + 4 + uVar14 * 0xc);
              local_cc = *(int *)(lVar16 + 8 + uVar14 * 0xc);
              local_bc = *(int *)(lVar8 + lVar17 * 4);
              local_c0 = *(int *)(lVar8 + 4 + lVar17 * 4);
              lVar16 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar4 >> 9) * 8);
              local_80 = *(int *)(lVar16 + 8 + uVar11 * 0xc);
              local_88 = *(undefined8 *)(lVar16 + uVar11 * 0xc);
              local_98 = &local_7c;
              local_90 = local_70;
              local_a8 = lVar7;
              local_7c = local_c4;
              local_78 = local_c8;
              local_74 = local_cc;
              FUN_14838abc6(local_70,&local_98);
              FUN_146f0005e(local_70,&local_88);
              FUN_146f0005e(local_70,(longlong)&local_88 + 4);
              FUN_146f0005e(local_70);
              lVar16 = local_e8;
              if (local_50 == 4) {
                puVar10 = local_58;
                if (local_58 == (undefined1 *)0x0) {
                  puVar10 = local_70;
                }
                lVar13 = 0;
                do {
                  if (*(int *)(puVar10 + lVar13) == iVar5) {
                    lVar13 = 0;
                    goto LAB_14838a9e8;
                  }
                  lVar13 = lVar13 + 4;
                } while (lVar13 != 0x10);
              }
              goto LAB_14838a99d;
            }
          }
        }
        goto LAB_14838aa7b;
      }
      goto LAB_14838a9fa;
    }
    uVar12 = 1;
    goto LAB_14838aad0;
  }
LAB_14838aace:
  uVar12 = 0;
LAB_14838aad0:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
  while (lVar13 = lVar13 + 4, lVar13 != 0x10) {
LAB_14838a9e8:
    if (*(int *)(puVar10 + lVar13) == iVar6) {
      lVar13 = 0;
      goto LAB_14838a9c2;
    }
  }
  goto LAB_14838a99d;
  while (lVar13 = lVar13 + 4, lVar13 != 0x10) {
LAB_14838a9c2:
    if (*(int *)(puVar10 + lVar13) == local_c0) {
      lVar13 = 0;
      goto LAB_14838a9d4;
    }
  }
  goto LAB_14838a99d;
  while (lVar13 = lVar13 + 4, lVar13 != 0x10) {
LAB_14838a9d4:
    if (*(int *)(puVar10 + lVar13) == local_bc) {
      bVar9 = true;
      uVar3 = local_dc;
      if ((local_80 == iVar5 || (local_88._4_4_ == iVar5 || (int)local_88 == iVar5)) &&
         (local_80 == iVar6 || (local_88._4_4_ == iVar6 || (int)local_88 == iVar6))) {
        local_88 = CONCAT44(local_c8,local_c4);
        local_80 = local_cc;
        puVar1 = (ulonglong *)(local_a8 + lVar17 * 8);
        *puVar1 = *puVar1 << 0x20 | *puVar1 >> 0x20;
      }
      goto LAB_14838a99f;
    }
  }
LAB_14838a99d:
  bVar9 = false;
  uVar3 = 0;
LAB_14838a99f:
  uVar15 = (ulonglong)uVar3;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  lVar17 = lVar17 + 1;
  if (!bVar9) goto LAB_14838a9fa;
  goto LAB_14838a7c7;
LAB_14838a9fa:
  uVar11 = local_a0 + 1;
  if ((local_b0 <= uVar11) || ((uVar15 & 1) == 0)) goto LAB_14838aa6b;
  goto LAB_14838a7b3;
LAB_14838aa6b:
  uVar12 = 1;
  if ((uVar15 & 1) != 0) goto LAB_14838aad0;
  lVar13 = *local_d8;
LAB_14838aa7b:
  iVar2 = param_1[5];
  FUN_144716727(lVar13,param_1[4]);
  param_1[4] = 0;
  if ((iVar2 < 0) && (param_1[5] != 0)) {
    FUN_1403b10bc(local_d8,0);
  }
  iVar2 = param_1[9];
  FUN_148308bdd(*(undefined8 *)(param_1 + 6),param_1[8]);
  param_1[8] = 0;
  if ((iVar2 < 0) && (param_1[9] != 0)) {
    FUN_148308c08(local_b8,0);
  }
  param_1[0] = 0;
  param_1[1] = 0;
  goto LAB_14838aace;
}



// FUNCTION 14838ab66 FUN_14838ab66 body=95 status=ok
// SIG undefined FUN_14838ab66(void)

undefined8 * FUN_14838ab66(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148308bdd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14830bd2a(param_1,iVar1);
      FUN_14830bd8c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14838abc6 FUN_14838abc6 body=104 status=ok
// SIG undefined FUN_14838abc6(void)

void * FUN_14838abc6(void *param_1,undefined8 *param_2)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  ulonglong uVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  _Src = (void *)*param_2;
  uVar2 = param_2[1] - (longlong)_Src;
  iVar1 = (int)(uVar2 >> 2);
  *(int *)((longlong)param_1 + 0x20) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 6;
  }
  else {
    FUN_1483b9abe(param_1);
    _Dst = *(void **)((longlong)param_1 + 0x18);
    if (*(void **)((longlong)param_1 + 0x18) == (void *)0x0) {
      _Dst = param_1;
    }
    memcpy(_Dst,_Src,(longlong)(uVar2 * 0x40000000) >> 0x1e & 0xfffffffffffffffc);
  }
  return param_1;
}



// FUNCTION 14838ac2e FUN_14838ac2e body=196 status=ok
// SIG undefined FUN_14838ac2e(void)

void FUN_14838ac2e(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar2 = *(uint *)(param_1 + 0x20);
  if (1 < (longlong)(int)uVar2) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar7 = (longlong)(int)uVar2 << 4;
    lVar8 = 0;
    do {
      lVar7 = lVar7 + -0x10;
      uVar4 = *(undefined8 *)(lVar3 + lVar8);
      uVar5 = ((undefined8 *)(lVar3 + lVar8))[1];
      uVar6 = ((undefined8 *)(lVar3 + lVar7))[1];
      *(undefined8 *)(lVar3 + lVar8) = *(undefined8 *)(lVar3 + lVar7);
      ((undefined8 *)(lVar3 + lVar8))[1] = uVar6;
      local_18._0_4_ = (undefined4)uVar4;
      local_18._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_10._0_4_ = (undefined4)uVar5;
      uStack_10._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar1 = (undefined4 *)(lVar3 + lVar7);
      *puVar1 = (undefined4)local_18;
      puVar1[1] = local_18._4_4_;
      puVar1[2] = (undefined4)uStack_10;
      puVar1[3] = uStack_10._4_4_;
      lVar8 = lVar8 + 0x10;
      local_18 = uVar4;
      uStack_10 = uVar5;
    } while ((ulonglong)(uVar2 >> 1) << 4 != lVar8);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if (1 < (longlong)(int)uVar2) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar7 = (longlong)(int)uVar2 << 4;
    lVar8 = 0;
    do {
      lVar7 = lVar7 + -0x10;
      uVar4 = *(undefined8 *)(lVar3 + lVar8);
      uVar5 = ((undefined8 *)(lVar3 + lVar8))[1];
      uVar6 = ((undefined8 *)(lVar3 + lVar7))[1];
      *(undefined8 *)(lVar3 + lVar8) = *(undefined8 *)(lVar3 + lVar7);
      ((undefined8 *)(lVar3 + lVar8))[1] = uVar6;
      local_18._0_4_ = (undefined4)uVar4;
      local_18._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_10._0_4_ = (undefined4)uVar5;
      uStack_10._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar1 = (undefined4 *)(lVar3 + lVar7);
      *puVar1 = (undefined4)local_18;
      puVar1[1] = local_18._4_4_;
      puVar1[2] = (undefined4)uStack_10;
      puVar1[3] = uStack_10._4_4_;
      lVar8 = lVar8 + 0x10;
      local_18 = uVar4;
      uStack_10 = uVar5;
    } while ((ulonglong)(uVar2 >> 1) << 4 != lVar8);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838acf4 FUN_14838acf4 body=384 status=ok
// SIG undefined FUN_14838acf4(void)

undefined8 FUN_14838acf4(uint *param_1,uint *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar1 = *param_2;
  if (uVar1 == *param_1) {
    if (param_3 == '\x01' && 0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (*(int *)(*(longlong *)
                      (*(longlong *)(param_1 + 2) + (longlong)(int)(param_1[4] - 1) * 0x10) +
                    uVar5 * 4) != *(int *)(**(longlong **)(param_2 + 2) + uVar5 * 4))
        goto LAB_14838ae57;
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
    if (1 < (int)param_2[1]) {
      lVar8 = 1;
      lVar6 = 0x1c;
      do {
        lVar2 = *(longlong *)(param_2 + 2);
        uVar1 = param_1[4];
        param_1[4] = uVar1 + 1;
        if (param_1[5] < uVar1 + 1) {
          FUN_140bfc2d4(param_1 + 2,uVar1);
        }
        lVar3 = *(longlong *)(param_1 + 2);
        lVar7 = (longlong)(int)uVar1 * 0x10;
        *(undefined8 *)(lVar3 + lVar7) = 0;
        *(undefined8 *)(lVar3 + lVar7) = *(undefined8 *)(lVar2 + -0xc + lVar6);
        *(undefined8 *)(lVar2 + -0xc + lVar6) = 0;
        *(undefined4 *)(lVar3 + 8 + lVar7) = *(undefined4 *)(lVar2 + -4 + lVar6);
        *(undefined4 *)(lVar3 + 0xc + lVar7) = *(undefined4 *)(lVar2 + lVar6);
        *(undefined8 *)(lVar2 + -4 + lVar6) = 0;
        lVar8 = lVar8 + 1;
        lVar6 = lVar6 + 0x10;
      } while (lVar8 < (int)param_2[1]);
      if (1 < (int)param_2[1]) {
        lVar8 = 0xc;
        lVar6 = 0;
        do {
          lVar2 = *(longlong *)(param_2 + 6);
          uVar1 = param_1[8];
          param_1[8] = uVar1 + 1;
          if (param_1[9] < uVar1 + 1) {
            FUN_148308db6(param_1 + 6,uVar1);
          }
          lVar3 = *(longlong *)(param_1 + 6);
          lVar7 = (longlong)(int)uVar1 * 0x10;
          *(undefined8 *)(lVar3 + lVar7) = 0;
          *(undefined8 *)(lVar3 + lVar7) = *(undefined8 *)(lVar2 + -0xc + lVar8);
          *(undefined8 *)(lVar2 + -0xc + lVar8) = 0;
          *(undefined4 *)(lVar3 + 8 + lVar7) = *(undefined4 *)(lVar2 + -4 + lVar8);
          *(undefined4 *)(lVar3 + 0xc + lVar7) = *(undefined4 *)(lVar2 + lVar8);
          *(undefined8 *)(lVar2 + -4 + lVar8) = 0;
          lVar6 = lVar6 + 1;
          lVar8 = lVar8 + 0x10;
        } while (lVar6 < (longlong)(int)param_2[1] + -1);
      }
    }
    param_1[1] = param_1[4];
    uVar4 = CONCAT71((uint7)(uint3)(param_1[4] >> 8),1);
  }
  else {
LAB_14838ae57:
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 14838ae74 FUN_14838ae74 body=212 status=ok
// SIG undefined FUN_14838ae74(void)

void FUN_14838ae74(int *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  
  iVar4 = (param_1[1] * 2 + -2) * (*param_1 + -1) + (int)param_2[1];
  if (-1 < iVar4) {
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      FUN_14481578e(param_2);
    }
    if ((longlong)param_1[8] != 0) {
      plVar7 = *(longlong **)(param_1 + 6);
      plVar5 = plVar7 + (longlong)param_1[8] * 2;
      do {
        lVar3 = plVar7[1];
        if ((longlong)(int)lVar3 != 0) {
          lVar1 = *plVar7;
          lVar6 = 0;
          do {
            uVar2 = *(undefined8 *)(lVar1 + lVar6);
            iVar4 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
              FUN_1446f48e2(param_2,iVar4);
            }
            *(int *)(*param_2 + (longlong)iVar4 * 4) = (int)uVar2;
            iVar4 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
              FUN_1446f48e2(param_2,iVar4);
            }
            *(int *)(*param_2 + (longlong)iVar4 * 4) = (int)((ulonglong)uVar2 >> 0x20);
            lVar6 = lVar6 + 8;
          } while ((longlong)(int)lVar3 * 8 != lVar6);
        }
        plVar7 = plVar7 + 2;
      } while (plVar7 != plVar5);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4);
}



// FUNCTION 14838af4a FUN_14838af4a body=458 status=ok
// SIG undefined FUN_14838af4a(void)

undefined8 *
FUN_14838af4a(longlong param_1,undefined8 *param_2,longlong param_3,int param_4,uint param_5,
             int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [28];
  int iStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  lVar7 = (longlong)(int)param_5;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar11 = (longlong)param_4 * 0x10;
  uVar6 = *(uint *)(lVar7 * 8 + *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11) +
                   (longlong)param_6 * 4);
  lVar8 = *(longlong *)(*(longlong *)(param_3 + 0x130) + (ulonglong)(uVar6 >> 9) * 8);
  uVar13 = (ulonglong)(uVar6 & 0x1ff);
  local_50 = *(undefined4 *)(lVar8 + 8 + uVar13 * 0xc);
  local_58 = *(undefined8 *)(lVar8 + uVar13 * 0xc);
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar11);
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10 + lVar11);
  iVar1 = *(int *)(lVar11 + lVar7 * 4);
  iVar2 = *(int *)(lVar11 + 4 + lVar7 * 4);
  iVar3 = *(int *)(lVar8 + lVar7 * 4);
  iVar4 = *(int *)(lVar8 + 4 + lVar7 * 4);
  uVar5 = param_4 * 0x100000;
  uVar10 = uVar5 + 0x100000 | param_5 + 1;
  uVar9 = uVar5 + 0x100000 | param_5;
  uVar6 = param_5 + 1 | uVar5;
  *param_2 = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  lVar8 = 0;
  do {
    if (*(int *)((longlong)&local_58 + lVar8 * 4) == iVar3) {
      uVar12 = (int)lVar8 + 1;
      if (lVar8 == 2) {
        uVar12 = 0;
      }
      uVar13 = (ulonglong)uVar12;
      if (*(int *)((longlong)&local_58 + uVar13 * 4) == iVar2) {
        uVar12 = 2;
        if (lVar8 != 0) {
          uVar12 = (int)lVar8 - 1;
        }
      }
      else {
        uVar13 = lVar8 - 1U & 0xffffffff;
        if (lVar8 == 0) {
          uVar13 = 2;
        }
        if (*(int *)((longlong)&local_58 + uVar13 * 4) != iVar2) goto LAB_14838b044;
      }
      *(uint *)((longlong)param_2 + lVar8 * 4) = uVar5 | param_5;
      *(uint *)((longlong)param_2 + (longlong)(int)uVar13 * 4) = uVar10;
      lVar8 = (longlong)(int)uVar12;
      if (*(int *)((longlong)&local_58 + lVar8 * 4) == iVar1) {
        uVar6 = uVar9;
      }
      goto LAB_14838b0b9;
    }
LAB_14838b044:
    lVar8 = lVar8 + 1;
  } while (lVar8 != 3);
  lVar8 = 0;
  while (*(int *)((longlong)&local_58 + lVar8 * 4) != iVar4) {
LAB_14838b084:
    lVar8 = lVar8 + 1;
    if (lVar8 == 3) goto LAB_14838b0bc;
  }
  uVar12 = (int)lVar8 + 1;
  if (lVar8 == 2) {
    uVar12 = 0;
  }
  uVar13 = (ulonglong)uVar12;
  if (*(int *)((longlong)&local_58 + uVar13 * 4) == iVar1) {
    uVar12 = 2;
    if (lVar8 != 0) {
      uVar12 = (int)lVar8 - 1;
    }
  }
  else {
    uVar13 = lVar8 - 1U & 0xffffffff;
    if (lVar8 == 0) {
      uVar13 = 2;
    }
    if (*(int *)((longlong)&local_58 + uVar13 * 4) != iVar1) goto LAB_14838b084;
  }
  *(uint *)((longlong)param_2 + lVar8 * 4) = uVar6;
  lVar8 = (longlong)(int)uVar12;
  iVar1 = *(int *)((longlong)&local_58 + lVar8 * 4);
  *(uint *)((longlong)param_2 + (longlong)(int)uVar13 * 4) = uVar9;
  uVar6 = uVar5 | param_5;
  if (iVar1 == iVar2) {
    uVar6 = uVar10;
  }
LAB_14838b0b9:
  *(uint *)((longlong)param_2 + lVar8 * 4) = uVar6;
LAB_14838b0bc:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14838b116 FUN_14838b116 body=165 status=ok
// SIG undefined FUN_14838b116(void)

ulonglong FUN_14838b116(longlong param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((int)param_2 < 0) || (*(int *)(*(longlong *)(param_1 + 8) + 8) <= (int)param_2)) {
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) < 0) {
      FUN_14481578e(param_3,0);
    }
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar4);
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_3,iVar1);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) =
             *(undefined4 *)(lVar2 + (ulonglong)param_2 * 4);
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0x10;
      } while (lVar5 < *(int *)(param_1 + 0x10));
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14838b1bc FUN_14838b1bc body=82 status=ok
// SIG undefined FUN_14838b1bc(void)

ulonglong FUN_14838b1bc(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    plVar1 = *(longlong **)(param_1 + 8);
    plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x10) * 2;
    do {
      if ((longlong)(int)plVar1[1] != 0) {
        lVar3 = (longlong)(int)plVar1[1] << 2;
        uVar4 = 0;
        do {
          if (*(int *)(*plVar1 + uVar4 * 4) == param_2) {
            if ((int)uVar4 != -1) {
              return uVar4 & 0xffffffff;
            }
            break;
          }
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + -4;
        } while (lVar3 != 0);
      }
      plVar1 = plVar1 + 2;
    } while (plVar1 != plVar2);
  }
  return 0xffffffff;
}



// FUNCTION 14838b20e FUN_14838b20e body=535 status=ok
// SIG undefined FUN_14838b20e(void)

void FUN_14838b20e(longlong param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar4 = param_4 - param_3;
  param_5[1] = param_2 + 2U;
  *param_5 = iVar4 + 2U;
  puVar1 = param_5 + 2;
  FUN_140bfc200(puVar1,param_2 + 2U,1);
  FUN_1482ee16c(param_5 + 6,param_5[1] - 1,1);
  if (-1 < param_2) {
    uVar7 = 0;
    do {
      lVar8 = (longlong)param_3;
      uVar6 = (ulonglong)(iVar4 + 1);
      if (-1 < iVar4) {
        do {
          lVar3 = *(longlong *)puVar1;
          lVar9 = uVar7 * 0x10;
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar9);
          iVar2 = *(int *)(lVar3 + 8 + lVar9);
          *(uint *)(lVar3 + 8 + lVar9) = iVar2 + 1U;
          if (*(uint *)(lVar3 + 0xc + lVar9) < iVar2 + 1U) {
            FUN_1446f48e2((longlong *)(lVar3 + lVar9),iVar2);
          }
          *(undefined4 *)(*(longlong *)(lVar3 + lVar9) + (longlong)iVar2 * 4) =
               *(undefined4 *)(lVar5 + lVar8 * 4);
          lVar3 = *(longlong *)(param_5 + 6);
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar9);
          iVar2 = *(int *)(lVar3 + 8 + lVar9);
          *(uint *)(lVar3 + 8 + lVar9) = iVar2 + 1U;
          if (*(uint *)(lVar3 + 0xc + lVar9) < iVar2 + 1U) {
            FUN_146be54b8((longlong *)(lVar3 + lVar9),iVar2);
          }
          *(undefined8 *)(*(longlong *)(lVar3 + lVar9) + (longlong)iVar2 * 8) =
               *(undefined8 *)(lVar5 + lVar8 * 8);
          lVar8 = lVar8 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      lVar8 = *(longlong *)puVar1;
      lVar5 = uVar7 * 0x10;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar5);
      iVar2 = *(int *)(lVar8 + 8 + lVar5);
      *(uint *)(lVar8 + 8 + lVar5) = iVar2 + 1U;
      if (*(uint *)(lVar8 + 0xc + lVar5) < iVar2 + 1U) {
        FUN_1446f48e2((longlong *)(lVar8 + lVar5),iVar2);
      }
      *(undefined4 *)(*(longlong *)(lVar8 + lVar5) + (longlong)iVar2 * 4) =
           *(undefined4 *)(lVar3 + 4 + (longlong)param_4 * 4);
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_2 + 1);
  }
  if (-2 < iVar4) {
    lVar8 = (longlong)param_3;
    uVar7 = (ulonglong)(iVar4 + 2U);
    do {
      lVar3 = *(longlong *)puVar1 + (longlong)param_2 * 0x10;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)param_2 * 0x10);
      iVar4 = *(int *)(lVar3 + 0x18);
      *(uint *)(lVar3 + 0x18) = iVar4 + 1U;
      if (*(uint *)(lVar3 + 0x1c) < iVar4 + 1U) {
        FUN_1446f48e2((longlong *)(lVar3 + 0x10),iVar4);
      }
      *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar4 * 4) =
           *(undefined4 *)(lVar5 + lVar8 * 4);
      lVar8 = lVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 14838b426 FUN_14838b426 body=556 status=ok
// SIG undefined FUN_14838b426(void)

void FUN_14838b426(int *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  int *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar4 = 0;
  iVar7 = 0;
  local_a0 = param_1;
  if (2 < *param_1) {
    iVar7 = *param_1 + -2;
    iVar4 = 0;
    iVar6 = 0;
    do {
      iVar3 = iVar6 + 1;
      local_98 = CONCAT44(local_98._4_4_,iVar3);
      local_64 = iVar6;
      cVar2 = (*(code *)*param_2)(param_2[1],&local_64,&local_98);
      if (cVar2 != '\0') {
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_78 = 0;
        local_a8 = &local_98;
        FUN_14838b20e(local_a0,local_a0[1] + -2,iVar4,iVar6);
        iVar4 = (int)param_3[1];
        lVar5 = (longlong)iVar4;
        *(uint *)(param_3 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
          FUN_1483b9b1e(param_3,iVar4);
        }
        lVar1 = *param_3;
        *(undefined8 *)(lVar1 + lVar5 * 0x28) = local_98;
        *(undefined8 *)(lVar1 + 8 + lVar5 * 0x28) = 0;
        *(undefined8 *)(lVar1 + 8 + lVar5 * 0x28) = uStack_90;
        uStack_90 = 0;
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x28) = (undefined4)local_88;
        *(undefined4 *)(lVar1 + 0x14 + lVar5 * 0x28) = local_88._4_4_;
        local_88 = 0;
        *(undefined8 *)(lVar1 + 0x18 + lVar5 * 0x28) = 0;
        *(undefined8 *)(lVar1 + 0x18 + lVar5 * 0x28) = uStack_80;
        uStack_80 = 0;
        *(undefined4 *)(lVar1 + 0x20 + lVar5 * 0x28) = (undefined4)local_78;
        *(undefined4 *)(lVar1 + 0x24 + lVar5 * 0x28) = local_78._4_4_;
        local_78 = 0;
        FUN_1482fe62a(&local_98);
        iVar4 = iVar3;
      }
      iVar6 = iVar3;
    } while (iVar7 != iVar3);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0;
  local_a8 = &local_98;
  FUN_14838b20e(local_a0,local_a0[1] + -2,iVar4,iVar7);
  iVar4 = (int)param_3[1];
  lVar5 = (longlong)iVar4;
  *(uint *)(param_3 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
    FUN_1483b9b1e(param_3,iVar4);
  }
  lVar1 = *param_3;
  *(undefined8 *)(lVar1 + lVar5 * 0x28) = local_98;
  *(undefined8 *)(lVar1 + 8 + lVar5 * 0x28) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar5 * 0x28) = uStack_90;
  uStack_90 = 0;
  *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x28) = (undefined4)local_88;
  *(undefined4 *)(lVar1 + 0x14 + lVar5 * 0x28) = local_88._4_4_;
  local_88 = 0;
  *(undefined8 *)(lVar1 + 0x18 + lVar5 * 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x18 + lVar5 * 0x28) = uStack_80;
  uStack_80 = 0;
  *(undefined4 *)(lVar1 + 0x20 + lVar5 * 0x28) = (undefined4)local_78;
  *(undefined4 *)(lVar1 + 0x24 + lVar5 * 0x28) = local_78._4_4_;
  local_78 = 0;
  FUN_1482fe62a();
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14838b654 FUN_14838b654 body=267 status=ok
// SIG undefined FUN_14838b654(void)

double FUN_14838b654(longlong param_1,longlong param_2,int param_3,undefined8 param_4,int param_5)

{
  ulonglong uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_146c061e0(param_2,*(undefined4 *)
                                 (*(longlong *)
                                   (*(longlong *)(param_1 + 8) + (longlong)param_5 * 0x10) +
                                 (longlong)param_3 * 4),
                        *(undefined4 *)
                         (*(longlong *)
                           (*(longlong *)(param_1 + 8) + 0x10 + (longlong)param_5 * 0x10) +
                         (longlong)param_3 * 4));
  uVar1 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x1c0) + (ulonglong)(uVar2 >> 9) * 8) + 8 +
           (ulonglong)((uVar2 & 0x1ff) << 4));
  FUN_146c13dec(param_2,&local_40,uVar1);
  FUN_146c13dec(param_2,&local_58,uVar1 >> 0x20);
  dVar3 = local_30 * local_48 + local_40 * local_58 + local_38 * local_50;
  dVar4 = 1.0;
  if (dVar3 <= 1.0) {
    dVar4 = dVar3;
  }
  dVar4 = acos((double)(-(ulonglong)(dVar3 < -1.0) & 0xbff0000000000000 |
                       ~-(ulonglong)(dVar3 < -1.0) & (ulonglong)dVar4));
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return dVar4 * 57.29577951308232;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838b760 FUN_14838b760 body=1148 status=ok
// SIG undefined FUN_14838b760(void)

undefined8 * FUN_14838b760(undefined8 *param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  double dVar19;
  undefined1 auStack_198 [40];
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108 [4];
  double local_e8 [9];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  dVar1 = (double)param_2[3];
  dVar2 = (double)param_2[4];
  dVar3 = (double)param_2[5];
  dVar19 = dVar3 + dVar3;
  dVar8 = dVar2 + dVar2;
  dVar4 = (double)param_2[6];
  local_e8[2] = dVar19 * dVar1 - dVar8 * dVar4;
  local_e8[1] = dVar19 * dVar4 + dVar8 * dVar1;
  local_e8[0] = 1.0 - (dVar2 * dVar8 + dVar3 * dVar19);
  local_e8[7] = dVar4 * (dVar1 + dVar1);
  dVar9 = (dVar1 + dVar1) * dVar1;
  local_e8[5] = dVar19 * dVar2 + local_e8[7];
  local_e8[4] = 1.0 - (dVar3 * dVar19 + dVar9);
  local_e8[3] = dVar8 * dVar1 - dVar19 * dVar4;
  local_e8[8] = 1.0 - (dVar9 + dVar2 * dVar8);
  local_e8[7] = dVar19 * dVar2 - local_e8[7];
  local_e8[6] = dVar19 * dVar1 + dVar8 * dVar4;
  dVar2 = ABS(local_e8[8]);
  dVar3 = ABS(local_e8[5]);
  dVar1 = ABS(local_e8[2]);
  uVar10 = (dVar3 <= dVar2) + 1;
  if (dVar3 < dVar1) {
    uVar10 = (uint)(dVar1 <= dVar2) * 2;
  }
  uVar13 = (ulonglong)uVar10;
  dVar1 = local_e8[uVar13 * 3 + 2];
  local_108[0] = local_e8[1];
  local_108[1] = local_e8[4];
  local_108[2] = local_e8[7];
  local_108[uVar13] = 0.0;
  uVar11 = (ABS(local_108[1]) <= ABS(local_108[2])) + 1;
  if (ABS(local_108[1]) < ABS(local_108[0])) {
    uVar11 = (uint)(ABS(local_108[0]) <= ABS(local_108[2])) * 2;
  }
  uVar15 = (uVar10 ^ 3) - uVar11;
  uVar17 = 2;
  if ((int)uVar15 < 2) {
    uVar17 = (ulonglong)uVar15;
  }
  uVar16 = 0;
  if (0 < (int)uVar17) {
    uVar16 = uVar17;
  }
  if ((((uint)uVar16 != uVar10) && (uVar11 != uVar10)) && ((uint)uVar16 != uVar11)) {
    uVar17 = (ulonglong)uVar11;
    uVar18 = -(ulonglong)(0.0 < *(double *)((longlong)local_108 + (ulonglong)(uVar11 << 3)));
    local_138 = (double)(~uVar18 & 0xbff0000000000000 | uVar18 & 0x3ff0000000000000);
    local_168 = local_e8[uVar17 * 3] * local_138;
    local_150 = local_e8[uVar17 * 3 + 1] * local_138;
    local_138 = local_138 * local_e8[uVar17 * 3 + 2];
    uVar17 = -(ulonglong)(0.0 < dVar1);
    local_130 = (double)(~uVar17 & 0xbff0000000000000 |
                        (ulonglong)((uint)(uVar17 >> 0x20) & 0x3ff00000) << 0x20);
    local_160 = local_e8[uVar13 * 3] * local_130;
    local_148 = local_e8[uVar13 * 3 + 1] * local_130;
    local_130 = local_130 * dVar1;
    uVar5 = param_2[uVar13 + 7];
    uVar6 = *(undefined8 *)((longlong)param_2 + (ulonglong)(uVar11 << 3) + 0x38);
    uVar7 = param_2[uVar16 + 7];
    local_170 = local_150 * local_130 - local_148 * local_138;
    param_1[2] = param_2[2];
    uVar12 = param_2[1];
    local_140 = local_168 * local_148 - local_160 * local_150;
    local_158 = local_138 * local_160 - local_130 * local_168;
    *param_1 = *param_2;
    param_1[1] = uVar12;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0x3ff0000000000000;
    FUN_146bfbbda(&local_128);
    param_1[3] = local_128;
    param_1[4] = uStack_120;
    param_1[5] = local_118;
    param_1[6] = uStack_110;
    param_1[7] = uVar7;
    param_1[8] = uVar6;
    param_1[9] = uVar5;
    if ((local_a0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
  for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_198);
}



// FUNCTION 14838bbde FUN_14838bbde body=83 status=ok
// SIG undefined FUN_14838bbde(void)

void FUN_14838bbde(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_14838bc31(param_1,param_2 + 10);
  uVar2 = 4;
  if (cVar1 == '\0') {
    cVar1 = FUN_14838c8d0(param_1,param_2 + 2);
    uVar2 = 2;
    if (cVar1 == '\0') {
      cVar1 = FUN_14838d4be(param_1,param_2 + 0x1e);
      uVar2 = 8;
      if (cVar1 == '\0') {
        return;
      }
    }
  }
  *param_2 = uVar2;
  return;
}



// FUNCTION 14838bc31 FUN_14838bc31 body=3230 status=ok
// SIG undefined FUN_14838bc31(void)

ulonglong FUN_14838bc31(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined **ppuVar10;
  double *pdVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  double *pdVar19;
  uint uVar20;
  ulonglong uVar21;
  bool bVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_378 [40];
  undefined8 *local_350;
  double local_348;
  double local_340;
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  int local_2c0 [4];
  char local_2b0 [8];
  int *local_2a8;
  uint local_2a0;
  uint local_29c;
  longlong local_298 [2];
  longlong *local_288;
  longlong local_278 [4];
  undefined *local_258;
  uint uStack_250;
  int iStack_24c;
  code *local_248;
  undefined **local_238;
  longlong local_230;
  undefined *local_228 [4];
  double local_208;
  double local_200;
  double *local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  int *local_1c8;
  double adStack_1b8 [6];
  double local_188 [19];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (*(int *)(param_1 + 0x50) < 6) {
LAB_14838bcc2:
    uVar21 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x200);
    iVar16 = 2;
    if (2 < iVar5 / 10) {
      iVar16 = iVar5 / 10;
    }
    local_350 = param_2;
    if (0 < iVar5) {
      uVar20 = 0;
      do {
        if ((int)uVar20 < *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4)) {
          if (((ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(param_1 + 0x1d8) + (ulonglong)(uVar20 >> 9) * 8)
                                  + (ulonglong)(uVar20 & 0x1ff) * 2) - 1U) < 0xfffe) &&
             (uVar21 = *(ulonglong *)
                        (*(longlong *)
                          (*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar20 >> 9) * 8) + 8 +
                        (ulonglong)((uVar20 & 0x1ff) << 4)) >> 0x20, uVar21 != 0xffffffff)) {
            FUN_146c13dec(param_1,local_188);
            FUN_146c13dec(param_1,&local_208,uVar21);
            dVar25 = local_188[2] * (double)local_1f8 +
                     local_188[0] * local_208 + local_188[1] * local_200;
            uVar21 = -(ulonglong)(-dVar25 <= dVar25);
            dVar25 = (double)(~uVar21 & (ulonglong)-dVar25 | (ulonglong)dVar25 & uVar21);
            if ((0.0017453283658982615 < dVar25) && (dVar25 < 0.9999984769132877))
            goto LAB_14838bcc2;
          }
        }
        uVar20 = uVar20 + iVar16;
      } while ((int)uVar20 < iVar5);
    }
    uVar13 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
    uVar20 = 0;
    if ((uVar13 != 0) &&
       (uVar20 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
      uVar15 = 1;
      uVar4 = 1;
      if (1 < (int)uVar13) {
        uVar15 = uVar13;
      }
      do {
        uVar20 = uVar15;
        if (uVar15 == uVar4) break;
        uVar12 = uVar4 >> 9;
        uVar17 = uVar4 & 0x1ff;
        uVar20 = uVar4;
        uVar4 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar12] +
                                           (ulonglong)uVar17 * 2) - 1U));
    }
    uVar21 = 0;
    if (uVar20 != uVar13) {
      do {
        uVar15 = *(uint *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar20 >> 9) * 8) +
                          (ulonglong)(uVar20 & 0x1ff) * 0xc);
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar15 >> 9) * 8);
        uVar6 = (ulonglong)(uVar15 & 0x1ff);
        dVar25 = *(double *)(lVar7 + uVar6 * 0x18);
        dVar24 = *(double *)(lVar7 + 8 + uVar6 * 0x18);
        dVar26 = *(double *)(lVar7 + 0x10 + uVar6 * 0x18);
        FUN_146c13dec(param_1,&local_208);
        uVar15 = (uint)uVar21;
        if ((int)uVar15 < 1) {
          uVar4 = 0;
        }
        else {
          uVar6 = 0;
          pdVar11 = local_188 + 2;
          do {
            if (0.9999984769132877 <
                *pdVar11 * (double)local_1f8 + pdVar11[-2] * local_208 + pdVar11[-1] * local_200) {
              if (0.01 < ABS((dVar26 * (double)local_1f8 + dVar25 * local_208 + dVar24 * local_200)
                             - adStack_1b8[uVar6])) goto LAB_14838bcc2;
              goto LAB_14838c015;
            }
            uVar6 = uVar6 + 1;
            pdVar11 = pdVar11 + 3;
          } while (uVar21 != uVar6);
          uVar4 = uVar15;
          if (5 < (int)uVar15) goto LAB_14838bcc2;
        }
        uVar21 = (ulonglong)uVar4;
        local_188[uVar21 * 3] = local_208;
        local_188[uVar21 * 3 + 1] = local_200;
        local_188[uVar21 * 3 + 2] = (double)local_1f8;
        adStack_1b8[uVar21] = dVar26 * (double)local_1f8 + dVar25 * local_208 + dVar24 * local_200;
        uVar21 = (ulonglong)(uVar15 + 1);
LAB_14838c015:
        uVar15 = uVar20 + 1;
        if ((int)(uVar20 + 1) < (int)uVar13) {
          uVar15 = uVar13;
        }
        do {
          uVar4 = uVar15;
          if (uVar15 - 1 == uVar20) break;
          uVar20 = uVar20 + 1;
          uVar4 = uVar20;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x148) +
                                               (ulonglong)(uVar20 >> 9) * 8) +
                                             (ulonglong)(uVar20 & 0x1ff) * 2) - 1U));
        uVar20 = uVar4;
      } while (uVar20 != uVar13);
      iVar5 = 0;
      iVar16 = (int)uVar21;
      uVar21 = 0;
      if (iVar16 == 6) {
        local_2c0[0] = -1;
        local_2c0[1] = -1;
        local_2c0[2] = -1;
        local_2b0[4] = '\0';
        local_2b0[5] = '\0';
        local_2b0[0] = '\0';
        local_2b0[1] = '\0';
        local_2b0[2] = '\0';
        local_2b0[3] = '\0';
        pdVar11 = local_188 + 5;
        uVar21 = 0;
        bVar22 = false;
        do {
          if (local_2b0[uVar21] == '\0') {
            uVar6 = uVar21;
            pdVar19 = pdVar11;
            do {
              uVar18 = uVar6;
              if (uVar18 == 5) {
                uVar6 = 0xffffffff;
                goto LAB_14838c214;
              }
              uVar6 = uVar18 + 1;
              dVar25 = *pdVar19 * local_188[uVar21 * 3 + 2] +
                       pdVar19[-2] * local_188[uVar21 * 3] + pdVar19[-1] * local_188[uVar21 * 3 + 1]
              ;
              uVar23 = -(ulonglong)(-dVar25 <= dVar25);
              pdVar19 = pdVar19 + 3;
            } while ((double)(~uVar23 & (ulonglong)-dVar25 | uVar23 & (ulonglong)dVar25) <=
                     0.0017453283658982615);
            if (-0.9999984769132877 < dVar25) break;
            local_2b0[uVar18 + 1] = '\x01';
LAB_14838c214:
            if (iVar5 < 3) {
              uVar18 = uVar6;
              if ((int)uVar21 < (int)uVar6) {
                uVar18 = uVar21;
              }
              if ((int)uVar6 == -1) {
                uVar18 = uVar21;
              }
              lVar7 = (longlong)iVar5;
              iVar5 = iVar5 + 1;
              local_2c0[lVar7] = (int)uVar18;
            }
          }
          bVar22 = 4 < uVar21;
          uVar21 = uVar21 + 1;
          pdVar11 = pdVar11 + 3;
        } while (uVar21 != 6);
        bVar14 = iVar5 == 3 & bVar22;
        uVar21 = (ulonglong)bVar14;
        if (bVar14 == 1) {
          lVar7 = (longlong)local_2c0[0];
          local_208 = local_188[lVar7 * 3];
          local_1f0 = local_188[lVar7 * 3 + 1];
          local_1d8 = local_188[lVar7 * 3 + 2];
          lVar7 = (longlong)local_2c0[1];
          local_200 = local_188[lVar7 * 3];
          local_1e8 = local_188[lVar7 * 3 + 1];
          local_1d0 = local_188[lVar7 * 3 + 2];
          lVar7 = (longlong)local_2c0[2];
          dVar25 = local_188[lVar7 * 3];
          local_1e0 = local_188[lVar7 * 3 + 1];
          dVar24 = local_188[lVar7 * 3 + 2];
          uVar20 = (uint)((ulonglong)dVar24 >> 0x20);
          dVar31 = (local_208 * local_1e8 - local_200 * local_1f0) * dVar24 +
                   (local_1f0 * local_1d0 - local_1e8 * local_1d8) * dVar25 +
                   (local_1d8 * local_200 - local_1d0 * local_208) * local_1e0;
          dVar26 = 0.0;
          uVar6 = -(ulonglong)(dVar31 < 0.0);
          local_1f8 = (double *)(~uVar6 & (ulonglong)dVar25 | (ulonglong)-dVar25 & uVar6);
          if (dVar31 < 0.0) {
            uVar20 = uVar20 ^ 0x80000000;
            local_1e0 = -local_1e0;
          }
          local_1c8 = (int *)CONCAT44(uVar20,SUB84(dVar24,0));
          local_2e8 = 0.0;
          dStack_2e0 = 0.0;
          local_2d8 = 0.0;
          dStack_2d0 = 1.0;
          FUN_146bfbbda(&local_2e8);
          dVar28 = dStack_2d0 * dStack_2d0 +
                   local_2d8 * local_2d8 + local_2e8 * local_2e8 + dStack_2e0 * dStack_2e0;
          dVar24 = 0.0;
          dVar31 = 0.0;
          dVar25 = 0.0;
          if (0.0 < dVar28) {
            dVar28 = 1.0 / dVar28;
            dVar25 = dStack_2d0 * dVar28;
            dVar31 = -local_2d8 * dVar28;
            dVar24 = -dStack_2e0 * dVar28;
            dVar26 = -local_2e8 * dVar28;
          }
          local_248 = (code *)0x0;
          local_238 = &PTR_DAT_149f363e0;
          local_258 = &DAT_146be727e;
          local_230 = param_1;
          FUN_146be708e(param_1 + 0x20,&local_208);
          FUN_146be6fec(&local_208,&local_258);
          local_2a0 = *local_1c8 * 0x200 + local_1c8[1];
          local_288 = (longlong *)0x0;
          local_298[0] = 0;
          local_2a8 = local_1c8;
          local_29c = local_2a0;
          FUN_146be715a(local_298,&local_208);
          if (uStack_250 == local_2a0) {
            dVar27 = -1.79769313486232e+308;
            dVar1 = 1.79769313486232e+308;
            dVar29 = -1.79769313486232e+308;
            dVar25 = -1.79769313486232e+308;
            dVar30 = dVar1;
            dVar2 = dVar1;
          }
          else {
            dVar28 = dVar24 + dVar24;
            dVar29 = dVar31 + dVar31;
            dVar27 = dVar26 * (dVar26 + dVar26);
            local_310 = (dVar26 + dVar26) * dVar25;
            local_320 = dVar26 * dVar29 + dVar28 * dVar25;
            local_328 = dVar26 * dVar28 - dVar25 * dVar29;
            local_338 = 1.0 - (dVar28 * dVar24 + dVar29 * dVar31);
            local_340 = dVar24 * dVar29 - local_310;
            local_348 = 1.0 - (dVar29 * dVar31 + dVar27);
            local_318 = dVar26 * dVar28 + dVar25 * dVar29;
            local_330 = 1.0 - (dVar28 * dVar24 + dVar27);
            local_310 = dVar24 * dVar29 + local_310;
            local_308 = dVar26 * dVar29 - dVar28 * dVar25;
            dVar26 = 1.79769313486232e+308;
            dVar25 = -1.79769313486232e+308;
            dVar27 = -1.79769313486232e+308;
            dVar24 = -1.79769313486232e+308;
            dVar31 = dVar26;
            dVar28 = dVar26;
            do {
              pcVar3 = local_248;
              ppuVar10 = local_238;
              if (local_238 == (undefined **)0x0) {
                ppuVar10 = local_228;
              }
              local_2c0[3] = uStack_250;
              uVar8 = (**(code **)(*ppuVar10 + 8))();
              (*pcVar3)(&local_300,uVar8,local_2c0 + 3);
              dVar32 = local_330 * local_2f0 + local_308 * local_300 + local_310 * local_2f8;
              dVar29 = local_340 * local_2f0 + local_318 * local_300 + local_348 * local_2f8;
              dVar30 = local_2f0 * local_320 + local_300 * local_338 + local_2f8 * local_328;
              dVar1 = dVar30;
              if (dVar26 <= dVar30) {
                dVar1 = dVar26;
              }
              if (dVar30 <= dVar27) {
                dVar30 = dVar27;
              }
              dVar27 = dVar30;
              dVar30 = dVar29;
              if (dVar31 <= dVar29) {
                dVar30 = dVar31;
              }
              if (dVar29 <= dVar24) {
                dVar29 = dVar24;
              }
              dVar2 = dVar32;
              if (dVar28 <= dVar32) {
                dVar2 = dVar28;
              }
              if (dVar32 <= dVar25) {
                dVar32 = dVar25;
              }
              do {
                dVar25 = dVar32;
                uStack_250 = uStack_250 + 1;
                if (iStack_24c <= (int)uStack_250) break;
                dVar32 = dVar25;
              } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                     (*(longlong *)(local_258 + 8) +
                                                     (ulonglong)(uStack_250 >> 9) * 8) +
                                                   (ulonglong)(uStack_250 & 0x1ff) * 2) - 1U));
              dVar24 = dVar29;
              dVar26 = dVar1;
              dVar31 = dVar30;
              dVar28 = dVar2;
            } while (local_2a0 != uStack_250);
          }
          if (local_298[0] != 0) {
            plVar9 = local_288;
            if (local_288 == (longlong *)0x0) {
              plVar9 = local_278;
            }
            (**(code **)(*plVar9 + 0x10))();
          }
          if (local_248 != (code *)0x0) {
            ppuVar10 = local_238;
            if (local_238 == (undefined **)0x0) {
              ppuVar10 = local_228;
            }
            (**(code **)(*ppuVar10 + 0x10))();
          }
          if (local_208 != 0.0) {
            pdVar11 = local_1f8;
            if (local_1f8 == (double *)0x0) {
              pdVar11 = &local_1e8;
            }
            (**(code **)((longlong)*pdVar11 + 0x10))();
          }
          local_1f8 = (double *)((dVar2 + dVar25) * 0.5);
          local_200 = (dVar30 + dVar29) * 0.5;
          local_208 = (dVar1 + dVar27) * 0.5;
          FUN_146bed047(&local_258,&local_2e8);
          *local_350 = local_258;
          local_350[1] = CONCAT44(iStack_24c,uStack_250);
          local_350[2] = local_248;
          local_350[3] = local_2e8;
          local_350[4] = dStack_2e0;
          local_350[5] = local_2d8;
          local_350[6] = dStack_2d0;
          local_350[7] = (dVar27 - dVar1) * 0.5;
          local_350[8] = (dVar29 - dVar30) * 0.5;
          local_350[9] = (dVar25 - dVar2) * 0.5;
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar21;
}



// FUNCTION 14838c8d0 FUN_14838c8d0 body=3053 status=ok
// SIG undefined FUN_14838c8d0(void)

undefined8 FUN_14838c8d0(longlong param_1,double *param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined **ppuVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
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
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined1 auStack_248 [40];
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  uint local_1ec;
  int *local_1e8;
  uint local_1e0;
  uint local_1dc;
  longlong local_1d8 [2];
  longlong *local_1c8;
  longlong local_1b8 [4];
  undefined *local_198;
  uint local_190;
  int local_18c;
  code *local_188;
  undefined **local_178;
  longlong local_170;
  undefined *local_168 [4];
  longlong local_148 [2];
  longlong *local_138;
  longlong local_128 [4];
  int *local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (9 < *(int *)(param_1 + 0x50)) {
    local_218 = DAT_14c8464e0;
    local_210 = DAT_14c8464e8;
    local_220 = DAT_14c8464f0;
    local_188 = (code *)0x0;
    local_178 = &PTR_DAT_149f363e0;
    local_198 = &DAT_146be727e;
    local_170 = param_1;
    FUN_146be708e(param_1 + 0x20,local_148);
    FUN_146be6fec(local_148,&local_198);
    local_1e0 = *local_108 * 0x200 + local_108[1];
    local_1c8 = (longlong *)0x0;
    local_1d8[0] = 0;
    local_1e8 = local_108;
    local_1dc = local_1e0;
    FUN_146be715a(local_1d8,local_148);
    if (local_190 == local_1e0) {
      uVar32 = 0xffffffff;
      uVar34 = 0xffefffff;
      uVar36 = 0xffffffff;
      uVar38 = 0x7fefffff;
      uVar41 = uVar36;
      uVar43 = uVar38;
      uVar45 = uVar32;
      uVar47 = uVar34;
      uVar48 = uVar32;
      uVar49 = uVar34;
      uVar52 = uVar36;
      uVar54 = uVar38;
    }
    else {
      uVar37 = 0xffffffff;
      uVar39 = 0x7fefffff;
      uVar48 = 0xffffffff;
      uVar49 = 0xffefffff;
      uVar33 = uVar48;
      uVar35 = uVar49;
      uVar40 = uVar37;
      uVar42 = uVar39;
      uVar44 = uVar48;
      uVar46 = uVar49;
      uVar51 = uVar37;
      uVar53 = uVar39;
      do {
        pcVar5 = local_188;
        ppuVar8 = local_178;
        if (local_178 == (undefined **)0x0) {
          ppuVar8 = local_168;
        }
        local_1ec = local_190;
        uVar6 = (**(code **)(*ppuVar8 + 8))();
        (*pcVar5)(&local_208,uVar6,&local_1ec);
        uVar34 = (undefined4)((ulonglong)local_208 >> 0x20);
        uVar47 = (undefined4)((ulonglong)local_200 >> 0x20);
        local_218 = local_218 + local_208;
        local_210 = local_210 + local_200;
        uVar50 = (undefined4)((ulonglong)local_1f8 >> 0x20);
        local_220 = local_220 + local_1f8;
        uVar36 = SUB84(local_208,0);
        uVar38 = uVar34;
        if ((double)CONCAT44(uVar39,uVar37) <= local_208) {
          uVar36 = uVar37;
          uVar38 = uVar39;
        }
        uVar32 = SUB84(local_208,0);
        if (local_208 <= (double)CONCAT44(uVar35,uVar33)) {
          uVar32 = uVar33;
          uVar34 = uVar35;
        }
        uVar41 = SUB84(local_200,0);
        uVar43 = uVar47;
        if ((double)CONCAT44(uVar42,uVar40) <= local_200) {
          uVar41 = uVar40;
          uVar43 = uVar42;
        }
        uVar45 = SUB84(local_200,0);
        if (local_200 <= (double)CONCAT44(uVar46,uVar44)) {
          uVar45 = uVar44;
          uVar47 = uVar46;
        }
        uVar52 = SUB84(local_1f8,0);
        uVar54 = uVar50;
        if ((double)CONCAT44(uVar53,uVar51) <= local_1f8) {
          uVar52 = uVar51;
          uVar54 = uVar53;
        }
        uVar33 = SUB84(local_1f8,0);
        if (local_1f8 <= (double)CONCAT44(uVar49,uVar48)) {
          uVar50 = uVar49;
          uVar33 = uVar48;
        }
        do {
          uVar48 = uVar33;
          uVar49 = uVar50;
          local_190 = local_190 + 1;
          if (local_18c <= (int)local_190) break;
          uVar50 = uVar49;
          uVar33 = uVar48;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(local_198 + 8) +
                                               (ulonglong)(local_190 >> 9) * 8) +
                                             (ulonglong)(local_190 & 0x1ff) * 2) - 1U));
        uVar33 = uVar32;
        uVar35 = uVar34;
        uVar37 = uVar36;
        uVar39 = uVar38;
        uVar40 = uVar41;
        uVar42 = uVar43;
        uVar44 = uVar45;
        uVar46 = uVar47;
        uVar51 = uVar52;
        uVar53 = uVar54;
      } while (local_1e0 != local_190);
    }
    if (local_1d8[0] != 0) {
      plVar9 = local_1c8;
      if (local_1c8 == (longlong *)0x0) {
        plVar9 = local_1b8;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    dVar22 = local_218;
    dVar4 = local_220;
    if (local_188 != (code *)0x0) {
      ppuVar8 = local_178;
      if (local_178 == (undefined **)0x0) {
        ppuVar8 = local_168;
      }
      (**(code **)(*ppuVar8 + 0x10))();
    }
    if (local_148[0] != 0) {
      plVar9 = local_138;
      if (local_138 == (longlong *)0x0) {
        plVar9 = local_128;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    dVar2 = 1.0 / (double)*(int *)(param_1 + 0x50);
    dVar22 = dVar22 * dVar2;
    dVar18 = local_210 * dVar2;
    dVar4 = dVar4 * dVar2;
    *param_2 = dVar22;
    param_2[1] = dVar18;
    param_2[2] = dVar4;
    dVar19 = (double)CONCAT44(uVar49,uVar48) - (double)CONCAT44(uVar54,uVar52);
    dVar19 = (double)(-(ulonglong)(0.0 <= dVar19) & (ulonglong)dVar19);
    dVar2 = (double)CONCAT44(uVar47,uVar45) - (double)CONCAT44(uVar43,uVar41);
    dVar2 = (double)(-(ulonglong)(0.0 <= dVar2) & (ulonglong)dVar2);
    dVar20 = (double)(~-(ulonglong)(dVar2 <= dVar19) & (ulonglong)dVar19 |
                     -(ulonglong)(dVar2 <= dVar19) & (ulonglong)dVar2);
    dVar23 = (double)CONCAT44(uVar34,uVar32) - (double)CONCAT44(uVar38,uVar36);
    dVar23 = (double)(-(ulonglong)(0.0 <= dVar23) & (ulonglong)dVar23);
    uVar17 = -(ulonglong)(dVar23 <= dVar20);
    dVar20 = (double)(uVar17 & (ulonglong)dVar23 | ~uVar17 & (ulonglong)dVar20);
    if (0.0 < dVar20) {
      dVar2 = (double)(~-(ulonglong)(dVar19 <= dVar2) & (ulonglong)dVar19 |
                      -(ulonglong)(dVar19 <= dVar2) & (ulonglong)dVar2);
      uVar17 = -(ulonglong)(dVar2 <= dVar23);
      dVar20 = (double)(uVar17 & (ulonglong)dVar23 | ~uVar17 & (ulonglong)dVar2) / dVar20;
      uVar6 = 0;
      if (dVar20 < *(double *)(&DAT_14ae74a70 + (ulonglong)(*(int *)(param_1 + 0x50) < 0x32) * 8) ||
          dVar20 == *(double *)(&DAT_14ae74a70 + (ulonglong)(*(int *)(param_1 + 0x50) < 0x32) * 8))
      {
        iVar14 = 0;
        dVar2 = dVar22;
        dVar23 = dVar18;
        local_220 = dVar4;
        local_210 = (double)(param_1 + 0x20);
        do {
          dVar29 = DAT_14c8464f0;
          dVar20 = DAT_14c8464e8;
          dVar19 = DAT_14c8464e0;
          local_218 = (double)CONCAT44(local_218._4_4_,iVar14);
          local_188 = (code *)0x0;
          local_178 = &PTR_DAT_149f363e0;
          local_198 = &DAT_146be727e;
          local_170 = param_1;
          FUN_146be708e(local_210,local_148,&local_198);
          FUN_146be6fec(local_148,&local_198);
          local_1e0 = *local_108 * 0x200 + local_108[1];
          local_1c8 = (longlong *)0x0;
          local_1d8[0] = 0;
          local_1e8 = local_108;
          local_1dc = local_1e0;
          FUN_146be715a(local_1d8,local_148);
          iVar14 = local_218._0_4_;
          if (local_190 == local_1e0) {
            dVar3 = 0.0;
          }
          else {
            dVar3 = 0.0;
            do {
              pcVar5 = local_188;
              ppuVar8 = local_178;
              if (local_178 == (undefined **)0x0) {
                ppuVar8 = local_168;
              }
              local_1ec = local_190;
              uVar6 = (**(code **)(*ppuVar8 + 8))();
              (*pcVar5)(&local_208,uVar6,&local_1ec);
              dVar27 = local_1f8 - param_2[2];
              dVar25 = local_200 - param_2[1];
              dVar24 = local_208 - *param_2;
              dVar26 = SQRT(dVar27 * dVar27 + dVar24 * dVar24 + dVar25 * dVar25);
              if (0.0 < dVar26) {
                dVar3 = dVar3 + dVar26;
                dVar26 = 1.0 / dVar26;
                dVar19 = dVar19 - dVar24 * dVar26;
                dVar20 = dVar20 - dVar25 * dVar26;
                dVar29 = dVar29 - dVar27 * dVar26;
              }
              do {
                local_190 = local_190 + 1;
                if (local_18c <= (int)local_190) break;
              } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                     (*(longlong *)(local_198 + 8) +
                                                     (ulonglong)(local_190 >> 9) * 8) +
                                                   (ulonglong)(local_190 & 0x1ff) * 2) - 1U));
            } while (local_1e0 != local_190);
          }
          if (local_1d8[0] != 0) {
            plVar9 = local_1c8;
            if (local_1c8 == (longlong *)0x0) {
              plVar9 = local_1b8;
            }
            (**(code **)(*plVar9 + 0x10))();
          }
          if (local_188 != (code *)0x0) {
            ppuVar8 = local_178;
            if (local_178 == (undefined **)0x0) {
              ppuVar8 = local_168;
            }
            (**(code **)(*ppuVar8 + 0x10))();
          }
          if (local_148[0] != 0) {
            plVar9 = local_138;
            if (local_138 == (longlong *)0x0) {
              plVar9 = local_128;
            }
            (**(code **)(*plVar9 + 0x10))();
          }
          dVar25 = 1.0 / (double)*(int *)(param_1 + 0x50);
          dVar3 = dVar3 * dVar25;
          dVar29 = dVar29 * dVar25 * dVar3 + local_220;
          dVar20 = dVar20 * dVar25 * dVar3 + dVar18;
          dVar19 = dVar19 * dVar25 * dVar3 + dVar22;
          *param_2 = dVar19;
          param_2[1] = dVar20;
          param_2[2] = dVar29;
          dVar25 = dVar2 - dVar19;
          dVar24 = dVar23 - dVar20;
          dVar27 = dVar4 - dVar29;
          param_2[3] = dVar3;
          iVar14 = iVar14 + 1;
          dVar2 = dVar19;
          dVar4 = dVar29;
          dVar23 = dVar20;
        } while (iVar14 != 5 &&
                 9.999999974752427e-07 <= dVar27 * dVar27 + dVar25 * dVar25 + dVar24 * dVar24);
        uVar11 = *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4);
        uVar15 = 0;
        if ((uVar11 != 0) &&
           (uVar15 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x1d8) - 1U))) {
          uVar16 = 1;
          uVar7 = 1;
          if (1 < (int)uVar11) {
            uVar16 = uVar11;
          }
          do {
            uVar15 = uVar16;
            if (uVar16 == uVar7) break;
            uVar10 = uVar7 >> 9;
            uVar12 = uVar7 & 0x1ff;
            uVar15 = uVar7;
            uVar7 = uVar7 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x1d8))[uVar10] +
                                               (ulonglong)uVar12 * 2) - 1U));
        }
        uVar6 = 1;
        if (uVar15 != uVar11) {
          local_220 = (dVar3 + dVar3) * 0.025;
          do {
            uVar17 = *(ulonglong *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar15 >> 9) * 8)
                      + (ulonglong)((uVar15 & 0x1ff) << 4));
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (uVar17 >> 9 & 0x7fffff) * 8);
            uVar13 = uVar17 & 0x1ff;
            dVar22 = *(double *)(lVar1 + uVar13 * 0x18);
            dVar4 = *(double *)(lVar1 + 8 + uVar13 * 0x18);
            dVar2 = *(double *)(lVar1 + 0x10 + uVar13 * 0x18);
            dVar18 = dVar2 - dVar29;
            dVar23 = dVar4 - dVar20;
            dVar25 = dVar22 - dVar19;
            dVar27 = dVar18 * dVar18 + dVar25 * dVar25 + dVar23 * dVar23;
            if (((dVar27 != 1.0) || (dVar26 = dVar25, dVar21 = dVar18, dVar24 = dVar23, NAN(dVar27))
                ) && (dVar26 = DAT_14c8464e0, dVar21 = DAT_14c8464f0, dVar24 = DAT_14c8464e8,
                     9.99999993922529e-09 <= dVar27)) {
              dVar27 = 1.0 / SQRT(dVar27);
              dVar26 = dVar25 * dVar27;
              dVar21 = dVar18 * dVar27;
              dVar24 = dVar23 * dVar27;
            }
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (uVar17 >> 0x29) * 8);
            uVar17 = uVar17 >> 0x20 & 0x1ff;
            dVar23 = *(double *)(lVar1 + uVar17 * 0x18);
            dVar18 = *(double *)(lVar1 + 8 + uVar17 * 0x18);
            dVar25 = *(double *)(lVar1 + 0x10 + uVar17 * 0x18);
            dVar29 = dVar25 - dVar29;
            dVar20 = dVar18 - dVar20;
            dVar19 = dVar23 - dVar19;
            dVar27 = dVar29 * dVar29 + dVar19 * dVar19 + dVar20 * dVar20;
            if (((dVar27 != 1.0) || (dVar30 = dVar29, dVar31 = dVar19, dVar28 = dVar20, NAN(dVar27))
                ) && (dVar30 = DAT_14c8464f0, dVar31 = DAT_14c8464e0, dVar28 = DAT_14c8464e8,
                     9.99999993922529e-09 <= dVar27)) {
              dVar27 = 1.0 / SQRT(dVar27);
              dVar30 = dVar29 * dVar27;
              dVar31 = dVar19 * dVar27;
              dVar28 = dVar20 * dVar27;
            }
            if (dVar24 * dVar28 + dVar26 * dVar31 + dVar21 * dVar30 <= 0.30901699437494745)
            goto LAB_14838c961;
            dVar19 = SQRT((dVar25 - dVar2) * (dVar25 - dVar2) +
                          (dVar23 - dVar22) * (dVar23 - dVar22) +
                          (dVar18 - dVar4) * (dVar18 - dVar4)) * 0.5;
            dVar27 = dVar3 * dVar3 - dVar19 * dVar19;
            if (dVar27 < 0.0) {
              dVar27 = sqrt(dVar27);
            }
            else {
              dVar27 = SQRT(dVar27);
            }
            dVar19 = *param_2;
            dVar20 = param_2[1];
            dVar22 = (dVar22 + dVar23) * 0.5 - dVar19;
            dVar23 = (dVar4 + dVar18) * 0.5 - dVar20;
            dVar29 = param_2[2];
            dVar4 = (dVar2 + dVar25) * 0.5 - dVar29;
            dVar22 = SQRT(dVar4 * dVar4 + dVar22 * dVar22 + dVar23 * dVar23) - param_2[3];
            uVar17 = -(ulonglong)(-dVar22 <= dVar22);
            if ((dVar3 - dVar27) + local_220 <
                (double)(~uVar17 & (ulonglong)-dVar22 | (ulonglong)dVar22 & uVar17))
            goto LAB_14838c961;
            uVar16 = uVar15 + 1;
            if ((int)(uVar15 + 1) < (int)uVar11) {
              uVar16 = uVar11;
            }
            do {
              uVar7 = uVar16;
              if (uVar16 - 1 == uVar15) break;
              uVar15 = uVar15 + 1;
              uVar7 = uVar15;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(param_1 + 0x1d8) +
                                                   (ulonglong)(uVar15 >> 9) * 8) +
                                                 (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
            uVar15 = uVar7;
          } while (uVar15 != uVar11);
        }
      }
      goto LAB_14838c963;
    }
  }
LAB_14838c961:
  uVar6 = 0;
LAB_14838c963:
  if ((local_f0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14838d4be FUN_14838d4be body=3018 status=ok
// SIG undefined FUN_14838d4be(void)

ulonglong FUN_14838d4be(longlong *param_1,double *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  code *pcVar15;
  uint uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  undefined **ppuVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  char cVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  uint uVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  longlong *plVar32;
  longlong *plVar33;
  longlong *plVar34;
  double dVar35;
  double dVar36;
  undefined1 auStack_278 [40];
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 local_210;
  longlong local_208;
  undefined8 uStack_200;
  uint local_1ec;
  longlong *local_1e8;
  uint local_1e0;
  uint local_1dc;
  longlong local_1d8 [2];
  longlong *local_1c8;
  longlong local_1b8 [4];
  undefined1 *local_198;
  undefined8 local_190;
  code *local_188;
  undefined **local_178;
  longlong *local_170;
  undefined *local_168 [4];
  char local_148;
  undefined7 uStack_147;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  double dStack_120;
  double dStack_118;
  double local_110;
  longlong *plStack_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  dVar8 = local_230;
  if (9 < (int)param_1[10]) {
    if ((int)param_1[7] * 0x200 + *(int *)((longlong)param_1 + 0x3c) == 0) {
      local_190 = &local_1e8;
      local_148 = '\0';
      local_140 = DAT_14c8464e0;
      uStack_138 = DAT_14c8464e8;
      local_130 = DAT_14c8464f0;
      uStack_128 = DAT_14c8463a0;
      dStack_120 = DAT_14c8463a8;
      dStack_118 = DAT_14c8463b0;
      local_110 = 0.0;
      plStack_108 = (longlong *)0x0;
      local_198 = &LAB_143b2390e;
      local_1e8 = param_1;
      FUN_14826a2e6();
      *(undefined4 *)param_2 = (undefined4)local_140;
      *(undefined4 *)((longlong)param_2 + 4) = local_140._4_4_;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_138;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_138._4_4_;
      param_2[2] = local_130;
      param_2[3] = uStack_128;
      param_2[4] = dStack_120;
      param_2[5] = dStack_118;
      param_2[6] = local_110;
      param_2[7] = (double)plStack_108;
      cVar23 = local_148;
    }
    else {
      local_208 = 0;
      uStack_200 = 0;
      FUN_1447a8aa0(&local_208);
      local_188 = (code *)0x0;
      local_178 = &PTR_DAT_149f363e0;
      local_198 = &DAT_146be727e;
      local_170 = param_1;
      FUN_146be708e(param_1 + 4,&local_148);
      FUN_146be6fec(&local_148,&local_198);
      local_1e0 = (int)*plStack_108 * 0x200 + *(int *)((longlong)plStack_108 + 4);
      local_1c8 = (longlong *)0x0;
      local_1d8[0] = 0;
      local_1e8 = plStack_108;
      local_1dc = local_1e0;
      FUN_146be715a(local_1d8,&local_148);
      if ((uint)local_190 != local_1e0) {
        uVar24 = (uint)local_190;
        do {
          pcVar15 = local_188;
          ppuVar19 = local_178;
          if (local_178 == (undefined **)0x0) {
            ppuVar19 = local_168;
          }
          local_1ec = uVar24;
          uVar17 = (**(code **)(*ppuVar19 + 8))();
          (*pcVar15)(&local_220,uVar17,&local_1ec);
          uVar22 = uStack_200;
          lVar29 = (longlong)(int)uStack_200;
          uVar24 = (int)uStack_200 + 1;
          uStack_200 = CONCAT44(uStack_200._4_4_,uVar24);
          if (uStack_200._4_4_ < uVar24) {
            FUN_1403e3958(&local_208,uVar22 & 0xffffffff);
          }
          *(undefined8 *)(local_208 + 0x10 + lVar29 * 0x18) = local_210;
          puVar1 = (undefined4 *)(local_208 + lVar29 * 0x18);
          *puVar1 = local_220;
          puVar1[1] = uStack_21c;
          puVar1[2] = uStack_218;
          puVar1[3] = uStack_214;
          iVar14 = local_190._4_4_;
          uVar24 = (uint)local_190;
          do {
            uVar24 = uVar24 + 1;
            local_190 = (longlong **)CONCAT44(local_190._4_4_,uVar24);
            if (iVar14 <= (int)uVar24) break;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(local_198 + 8) +
                                                 (ulonglong)(uVar24 >> 9) * 8) +
                                               (ulonglong)(uVar24 & 0x1ff) * 2) - 1U));
        } while (local_1e0 != uVar24);
      }
      if (local_1d8[0] != 0) {
        plVar32 = local_1c8;
        if (local_1c8 == (longlong *)0x0) {
          plVar32 = local_1b8;
        }
        (**(code **)(*plVar32 + 0x10))();
      }
      if (local_188 != (code *)0x0) {
        ppuVar19 = local_178;
        if (local_178 == (undefined **)0x0) {
          ppuVar19 = local_168;
        }
        (**(code **)(*ppuVar19 + 0x10))();
      }
      if (CONCAT71(uStack_147,local_148) != 0) {
        if (uStack_138 == (longlong *)0x0) {
          uStack_138 = &uStack_128;
        }
        (**(code **)(*uStack_138 + 0x10))();
      }
      local_190 = &local_1e8;
      local_148 = '\0';
      local_140 = DAT_14c8464e0;
      uStack_138 = DAT_14c8464e8;
      local_130 = DAT_14c8464f0;
      uStack_128 = DAT_14c8463a0;
      dStack_120 = DAT_14c8463a8;
      dStack_118 = DAT_14c8463b0;
      local_110 = 0.0;
      plStack_108 = (longlong *)0x0;
      local_198 = &LAB_143b23942;
      local_1e8 = &local_208;
      FUN_14826a2e6(&local_148,uStack_200 & 0xffffffff);
      cVar23 = local_148;
      *(undefined4 *)param_2 = (undefined4)local_140;
      *(undefined4 *)((longlong)param_2 + 4) = local_140._4_4_;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_138;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_138._4_4_;
      *(undefined4 *)(param_2 + 2) = (undefined4)local_130;
      *(undefined4 *)((longlong)param_2 + 0x14) = local_130._4_4_;
      *(undefined4 *)(param_2 + 3) = (undefined4)uStack_128;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_128._4_4_;
      param_2[4] = dStack_120;
      param_2[5] = dStack_118;
      param_2[6] = local_110;
      param_2[7] = (double)plStack_108;
      if (local_208 != 0) {
        FUN_1400020a8();
      }
    }
    uVar22 = 0;
    if (cVar23 == '\0') goto LAB_14838d556;
    dVar2 = param_2[7];
    uVar24 = (int)param_1[0x3a] * 0x200 + *(int *)((longlong)param_1 + 0x1d4);
    if ((uVar24 != 0) && (0xfffd < (ushort)(**(short **)param_1[0x3b] - 1U))) {
      uVar27 = 1;
      uVar20 = 1;
      if (1 < (int)uVar24) {
        uVar27 = (ulonglong)uVar24;
      }
      do {
        uVar18 = uVar20;
        uVar16 = (uint)uVar18;
        uVar22 = uVar27;
        if ((uint)uVar27 == uVar16) break;
        uVar20 = (ulonglong)(uVar16 + 1);
        uVar22 = uVar18;
      } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[0x3b])[uVar18 >> 9] +
                                           (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
    }
    uVar16 = (uint)uVar22;
    dVar3 = (dVar2 + dVar2) * 0.025;
    dVar8 = local_230;
    while (local_230 = dVar3, uVar16 != uVar24) {
      uVar20 = *(ulonglong *)
                (*(longlong *)(param_1[0x38] + (uVar22 >> 9) * 8) +
                (ulonglong)(((uint)uVar22 & 0x1ff) << 4));
      lVar29 = *(longlong *)(param_1[2] + (uVar20 >> 9 & 0x7fffff) * 8);
      uVar27 = uVar20 & 0x1ff;
      local_250 = *(double *)(lVar29 + uVar27 * 0x18);
      local_248 = *(double *)(lVar29 + 8 + uVar27 * 0x18);
      local_228 = *(double *)(lVar29 + 0x10 + uVar27 * 0x18);
      lVar29 = *(longlong *)(param_1[2] + (uVar20 >> 0x29) * 8);
      uVar20 = uVar20 >> 0x20 & 0x1ff;
      dVar3 = *(double *)(lVar29 + uVar20 * 0x18);
      dVar9 = *(double *)(lVar29 + 8 + uVar20 * 0x18);
      dVar4 = *(double *)(lVar29 + 0x10 + uVar20 * 0x18);
      local_240 = (local_228 + dVar4) * 0.5;
      dVar11 = (local_248 + dVar9) * 0.5;
      dVar10 = (local_250 + dVar3) * 0.5;
      dVar5 = param_2[2];
      dVar6 = *param_2;
      dVar7 = param_2[1];
      dVar8 = param_2[3];
      dVar30 = param_2[4];
      dVar35 = param_2[5];
      dVar36 = (local_240 - dVar5) * dVar35 + (dVar10 - dVar6) * dVar8 + (dVar11 - dVar7) * dVar30;
      dVar31 = param_2[6];
      if (dVar31 <= dVar36 + 0.0001) {
        dVar5 = dVar5 + dVar35 * dVar31;
        dVar7 = dVar7 + dVar30 * dVar31;
        dVar6 = dVar6 + dVar8 * dVar31;
      }
      else if (dVar36 + -0.0001 <= -dVar31) {
        dVar5 = dVar5 - dVar35 * dVar31;
        dVar7 = dVar7 - dVar30 * dVar31;
        dVar6 = dVar6 - dVar8 * dVar31;
      }
      else {
        dVar31 = (local_228 - dVar5) * dVar35 +
                 (local_250 - dVar6) * dVar8 + (local_248 - dVar7) * dVar30;
        local_228 = local_228 - dVar35 * dVar31;
        local_248 = local_248 - dVar30 * dVar31;
        local_250 = local_250 - dVar31 * dVar8;
        dVar31 = (dVar4 - dVar5) * dVar35 + (dVar3 - dVar6) * dVar8 + (dVar9 - dVar7) * dVar30;
        dVar4 = dVar4 - dVar35 * dVar31;
        dVar9 = dVar9 - dVar30 * dVar31;
        dVar3 = dVar3 - dVar31 * dVar8;
        local_240 = (local_228 + dVar4) * 0.5;
        dVar11 = (local_248 + dVar9) * 0.5;
        dVar10 = (local_250 + dVar3) * 0.5;
      }
      dVar30 = local_228 - dVar5;
      plVar32 = (longlong *)(local_248 - dVar7);
      dVar35 = local_250 - dVar6;
      dVar8 = dVar30 * dVar30 + dVar35 * dVar35 + (double)plVar32 * (double)plVar32;
      if (((dVar8 != 1.0) || (dVar31 = dVar30, dVar36 = dVar35, plVar33 = plVar32, NAN(dVar8))) &&
         (dVar31 = DAT_14c8464f0, dVar36 = DAT_14c8464e0, plVar33 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar8)) {
        dVar8 = 1.0 / SQRT(dVar8);
        dVar31 = dVar30 * dVar8;
        dVar36 = dVar35 * dVar8;
        plVar33 = (longlong *)((double)plVar32 * dVar8);
      }
      dVar30 = dVar4 - dVar5;
      plVar32 = (longlong *)(dVar9 - dVar7);
      dVar35 = dVar3 - dVar6;
      dVar8 = dVar30 * dVar30 + dVar35 * dVar35 + (double)plVar32 * (double)plVar32;
      if (((dVar8 != 1.0) || (plVar34 = plVar32, dVar12 = dVar30, dVar13 = dVar35, NAN(dVar8))) &&
         (plVar34 = DAT_14c8464e8, dVar12 = DAT_14c8464f0, dVar13 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar8)) {
        dVar8 = 1.0 / SQRT(dVar8);
        plVar34 = (longlong *)((double)plVar32 * dVar8);
        dVar12 = dVar30 * dVar8;
        dVar13 = dVar35 * dVar8;
      }
      local_238 = dVar2;
      dVar8 = local_230;
      if ((double)plVar33 * (double)plVar34 + dVar36 * dVar13 + dVar31 * dVar12 <=
          0.30901699437494745) goto LAB_14838d554;
      dVar8 = SQRT((dVar4 - local_228) * (dVar4 - local_228) +
                   (dVar3 - local_250) * (dVar3 - local_250) +
                   (dVar9 - local_248) * (dVar9 - local_248)) * 0.5;
      dVar3 = dVar2 * dVar2 - dVar8 * dVar8;
      if (dVar3 < 0.0) {
        dVar3 = sqrt(dVar3);
      }
      else {
        dVar3 = SQRT(dVar3);
      }
      dVar9 = SQRT((dVar5 - local_240) * (dVar5 - local_240) +
                   (dVar7 - dVar11) * (dVar7 - dVar11) + (dVar6 - dVar10) * (dVar6 - dVar10)) -
              dVar2;
      uVar20 = -(ulonglong)(-dVar9 <= dVar9);
      dVar8 = local_230;
      if ((dVar2 - dVar3) + local_230 <
          (double)(~uVar20 & (ulonglong)-dVar9 | (ulonglong)dVar9 & uVar20)) goto LAB_14838d554;
      uVar16 = (uint)uVar22 + 1;
      if ((int)uVar16 < (int)uVar24) {
        uVar16 = uVar24;
      }
      do {
        if (uVar16 - 1 == (int)uVar22) {
          uVar22 = (ulonglong)uVar16;
          break;
        }
        uVar21 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar21;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (param_1[0x3b] + (ulonglong)(uVar21 >> 9) * 8) +
                                           (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
      dVar2 = local_238;
      dVar3 = local_230;
      uVar16 = (uint)uVar22;
    }
    uVar16 = (int)param_1[4] * 0x200 + *(int *)((longlong)param_1 + 0x24);
    uVar24 = 0;
    if ((uVar16 != 0) && (uVar24 = 0, 0xfffd < (ushort)(**(short **)param_1[5] - 1U))) {
      uVar21 = 1;
      uVar25 = 1;
      if (1 < (int)uVar16) {
        uVar21 = uVar16;
      }
      do {
        uVar24 = uVar21;
        if (uVar21 == uVar25) break;
        uVar26 = uVar25 >> 9;
        uVar28 = uVar25 & 0x1ff;
        uVar24 = uVar25;
        uVar25 = uVar25 + 1;
      } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[5])[uVar26] +
                                           (ulonglong)uVar28 * 2) - 1U));
    }
    if (uVar24 == uVar16) {
      dVar4 = 1.79769313486232e+308;
      dVar9 = -1.79769313486232e+308;
    }
    else {
      dVar2 = -1.79769313486232e+308;
      dVar3 = 1.79769313486232e+308;
      do {
        lVar29 = *(longlong *)(param_1[2] + (ulonglong)(uVar24 >> 9) * 8);
        uVar20 = (ulonglong)(uVar24 & 0x1ff);
        dVar9 = (*(double *)(lVar29 + 0x10 + uVar20 * 0x18) - param_2[2]) * param_2[5] +
                (*(double *)(lVar29 + 8 + uVar20 * 0x18) - param_2[1]) * param_2[4] +
                (*(double *)(lVar29 + uVar20 * 0x18) - *param_2) * param_2[3];
        dVar4 = dVar9;
        if (dVar3 <= dVar9) {
          dVar4 = dVar3;
        }
        if (dVar9 <= dVar2) {
          dVar9 = dVar2;
        }
        uVar21 = uVar24 + 1;
        if ((int)(uVar24 + 1) < (int)uVar16) {
          uVar21 = uVar16;
        }
        do {
          uVar25 = uVar21;
          if (uVar21 - 1 == uVar24) break;
          uVar24 = uVar24 + 1;
          uVar25 = uVar24;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (param_1[5] + (ulonglong)(uVar24 >> 9) * 8) +
                                             (ulonglong)(uVar24 & 0x1ff) * 2) - 1U));
        uVar24 = uVar25;
        dVar2 = dVar9;
        dVar3 = dVar4;
      } while (uVar24 != uVar16);
    }
    if (((param_2[6] + param_2[7]) - local_230 <= dVar9) &&
       (dVar4 <= local_230 + (-param_2[6] - param_2[7]))) {
      uVar22 = CONCAT71((int7)(uVar22 >> 8),1);
      local_230 = dVar8;
      goto LAB_14838d556;
    }
  }
LAB_14838d554:
  local_230 = dVar8;
  uVar22 = 0;
LAB_14838d556:
  if ((local_f0 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return uVar22;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838e08a FUN_14838e08a body=189 status=ok
// SIG undefined FUN_14838e08a(void)

void FUN_14838e08a(longlong param_1)

{
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined8 *local_48;
  longlong local_40;
  undefined1 *local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14838e148(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) < 0) {
    FUN_1483b9c14(param_1 + 0x80,0);
  }
  FUN_14838e1a0(param_1 + 0x80,*(undefined4 *)(param_1 + 0x78));
  local_30 = &local_40;
  local_48 = &local_28;
  local_28 = 0;
  local_20 = 0;
  local_38 = &LAB_143b20c12;
  local_50 = 0;
  local_40 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x78),1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838e148 FUN_14838e148 body=88 status=ok
// SIG undefined FUN_14838e148(void)

undefined8 * FUN_14838e148(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1483b9bb2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14838e1a0 FUN_14838e1a0 body=115 status=ok
// SIG undefined FUN_14838e1a0(void)

void FUN_14838e1a0(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1483b9d38(param_1,iVar1);
    }
    FUN_1483b9c87((longlong)iVar1 * 0xb8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1483b9dce(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14838e214 FUN_14838e214 body=441 status=ok
// SIG undefined FUN_14838e214(void)

undefined8 FUN_14838e214(char *param_1,int *param_2,longlong *param_3,LPCRITICAL_SECTION param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [32];
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *param_2;
  if (iVar1 == 8) {
    if (param_1[2] == '\x01') {
      EnterCriticalSection(param_4);
      local_88 = param_2[0x1e];
      iStack_84 = param_2[0x1f];
      iStack_80 = param_2[0x20];
      iStack_7c = param_2[0x21];
      local_78 = param_2[0x22];
      iStack_74 = param_2[0x23];
      iStack_70 = param_2[0x24];
      iStack_6c = param_2[0x25];
      local_68 = param_2[0x26];
      iStack_64 = param_2[0x27];
      iStack_60 = param_2[0x28];
      iStack_5c = param_2[0x29];
      local_58 = param_2[0x2a];
      iStack_54 = param_2[0x2b];
      iStack_50 = param_2[0x2c];
      iStack_4c = param_2[0x2d];
      iVar1 = (int)param_3[5];
      *(uint *)(param_3 + 5) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0x2c) < iVar1 + 1U) {
        FUN_1483b9f98(param_3 + 4,iVar1);
      }
      lVar3 = param_3[4];
      lVar5 = (longlong)iVar1 * 0x40;
      puVar6 = (undefined8 *)(lVar3 + 0x30 + lVar5);
      *puVar6 = CONCAT44(iStack_54,local_58);
      puVar6[1] = CONCAT44(iStack_4c,iStack_50);
      puVar6 = (undefined8 *)(lVar3 + 0x20 + lVar5);
      *puVar6 = CONCAT44(iStack_64,local_68);
      puVar6[1] = CONCAT44(iStack_5c,iStack_60);
LAB_14838e342:
      piVar4 = (int *)(lVar3 + 0x10 + lVar5);
      *piVar4 = local_78;
      piVar4[1] = iStack_74;
      piVar4[2] = iStack_70;
      piVar4[3] = iStack_6c;
      piVar4 = (int *)(lVar3 + lVar5);
      *piVar4 = local_88;
      piVar4[1] = iStack_84;
      piVar4[2] = iStack_80;
      piVar4[3] = iStack_7c;
LAB_14838e34b:
      LeaveCriticalSection(param_4);
      uVar2 = 1;
      goto LAB_14838e2a4;
    }
  }
  else if (iVar1 == 4) {
    if (param_1[1] == '\x01') {
      FUN_14838b760(&local_88,param_2 + 10);
      EnterCriticalSection(param_4);
      iVar1 = (int)param_3[3];
      *(uint *)(param_3 + 3) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0x1c) < iVar1 + 1U) {
        FUN_1483b9f04(param_3 + 2,iVar1);
      }
      piVar4 = &local_88;
      puVar6 = (undefined8 *)((longlong)iVar1 * 0x50 + param_3[2]);
      for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar6 = *(undefined8 *)piVar4;
        piVar4 = piVar4 + 2;
        puVar6 = puVar6 + 1;
      }
      goto LAB_14838e34b;
    }
  }
  else if ((iVar1 == 2) && (*param_1 == '\x01')) {
    EnterCriticalSection(param_4);
    local_88 = param_2[2];
    iStack_84 = param_2[3];
    iStack_80 = param_2[4];
    iStack_7c = param_2[5];
    local_78 = param_2[6];
    iStack_74 = param_2[7];
    iStack_70 = param_2[8];
    iStack_6c = param_2[9];
    iVar1 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
      FUN_1483b9e7e(param_3,iVar1);
    }
    lVar3 = *param_3;
    lVar5 = (longlong)iVar1 << 5;
    goto LAB_14838e342;
  }
  uVar2 = 0;
LAB_14838e2a4:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14838e3ce FUN_14838e3ce body=189 status=ok
// SIG undefined FUN_14838e3ce(void)

void FUN_14838e3ce(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  longlong local_80;
  undefined8 local_78;
  LPCRITICAL_SECTION local_70;
  code *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  _RTL_CRITICAL_SECTION local_48;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  InitializeCriticalSection(&local_48);
  SetCriticalSectionSpinCount(&local_48,4000);
  local_60 = &local_80;
  local_88 = &local_58;
  local_58 = 0;
  local_50 = 0;
  local_68 = FUN_143b20c34;
  local_90 = 0;
  local_80 = param_1;
  local_78 = param_2;
  local_70 = &local_48;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x78),1);
  DeleteCriticalSection(&local_48);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838e48c FUN_14838e48c body=208 status=ok
// SIG undefined FUN_14838e48c(void)

void FUN_14838e48c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  longlong local_98;
  undefined8 local_90;
  LPCRITICAL_SECTION local_88;
  undefined8 *local_80;
  undefined8 local_78;
  code *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  _RTL_CRITICAL_SECTION local_50;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = param_3;
  InitializeCriticalSection(&local_50);
  SetCriticalSectionSpinCount(&local_50,4000);
  local_68 = &local_98;
  local_a8 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_70 = FUN_143b20e54;
  local_b0 = 0;
  local_98 = param_1;
  local_90 = param_2;
  local_88 = &local_50;
  local_80 = &local_78;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x78),1);
  DeleteCriticalSection(&local_50);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838e55e FUN_14838e55e body=189 status=ok
// SIG undefined FUN_14838e55e(void)

void FUN_14838e55e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  longlong local_80;
  undefined8 local_78;
  LPCRITICAL_SECTION local_70;
  code *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  _RTL_CRITICAL_SECTION local_48;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  InitializeCriticalSection(&local_48);
  SetCriticalSectionSpinCount(&local_48,4000);
  local_60 = &local_80;
  local_88 = &local_58;
  local_58 = 0;
  local_50 = 0;
  local_68 = FUN_143b2146e;
  local_90 = 0;
  local_80 = param_1;
  local_78 = param_2;
  local_70 = &local_48;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x78),1);
  DeleteCriticalSection(&local_48);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838e61c FUN_14838e61c body=189 status=ok
// SIG undefined FUN_14838e61c(void)

void FUN_14838e61c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  longlong local_80;
  undefined8 local_78;
  LPCRITICAL_SECTION local_70;
  code *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  _RTL_CRITICAL_SECTION local_48;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  InitializeCriticalSection(&local_48);
  SetCriticalSectionSpinCount(&local_48,4000);
  local_60 = &local_80;
  local_88 = &local_58;
  local_58 = 0;
  local_50 = 0;
  local_68 = FUN_143b2159c;
  local_90 = 0;
  local_80 = param_1;
  local_78 = param_2;
  local_70 = &local_48;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x78),1);
  DeleteCriticalSection(&local_48);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838e6da FUN_14838e6da body=208 status=ok
// SIG undefined FUN_14838e6da(void)

void FUN_14838e6da(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  longlong local_98;
  undefined8 local_90;
  LPCRITICAL_SECTION local_88;
  undefined8 *local_80;
  undefined8 local_78;
  code *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  _RTL_CRITICAL_SECTION local_50;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = param_3;
  InitializeCriticalSection(&local_50);
  SetCriticalSectionSpinCount(&local_50,4000);
  local_68 = &local_98;
  local_a8 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_70 = FUN_143b2170e;
  local_b0 = 0;
  local_98 = param_1;
  local_90 = param_2;
  local_88 = &local_50;
  local_80 = &local_78;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x78),1);
  DeleteCriticalSection(&local_50);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838e7ac FUN_14838e7ac body=208 status=ok
// SIG undefined FUN_14838e7ac(void)

void FUN_14838e7ac(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  longlong local_98;
  undefined8 local_90;
  LPCRITICAL_SECTION local_88;
  undefined8 *local_80;
  undefined8 local_78;
  code *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  _RTL_CRITICAL_SECTION local_50;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = param_3;
  InitializeCriticalSection(&local_50);
  SetCriticalSectionSpinCount(&local_50,4000);
  local_68 = &local_98;
  local_a8 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_70 = FUN_143b21854;
  local_b0 = 0;
  local_98 = param_1;
  local_90 = param_2;
  local_88 = &local_50;
  local_80 = &local_78;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x78),1);
  DeleteCriticalSection(&local_50);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838e87e FUN_14838e87e body=208 status=ok
// SIG undefined FUN_14838e87e(void)

void FUN_14838e87e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  longlong local_98;
  undefined8 local_90;
  LPCRITICAL_SECTION local_88;
  undefined4 *local_80;
  undefined4 local_74;
  code *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  _RTL_CRITICAL_SECTION local_50;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_74 = param_3;
  InitializeCriticalSection(&local_50);
  SetCriticalSectionSpinCount(&local_50,4000);
  local_68 = &local_98;
  local_a8 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_70 = FUN_143b21f1c;
  local_b0 = 0;
  local_98 = param_1;
  local_90 = param_2;
  local_88 = &local_50;
  local_80 = &local_74;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x78),1);
  DeleteCriticalSection(&local_50);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838e950 FUN_14838e950 body=208 status=ok
// SIG undefined FUN_14838e950(void)

void FUN_14838e950(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  longlong local_98;
  undefined8 local_90;
  LPCRITICAL_SECTION local_88;
  undefined8 *local_80;
  undefined8 local_78;
  code *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  _RTL_CRITICAL_SECTION local_50;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = param_3;
  InitializeCriticalSection(&local_50);
  SetCriticalSectionSpinCount(&local_50,4000);
  local_68 = &local_98;
  local_a8 = &local_60;
  local_60 = 0;
  local_58 = 0;
  local_70 = FUN_143b226e4;
  local_b0 = 0;
  local_98 = param_1;
  local_90 = param_2;
  local_88 = &local_50;
  local_80 = &local_78;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x78),1);
  DeleteCriticalSection(&local_50);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838ea22 FUN_14838ea22 body=189 status=ok
// SIG undefined FUN_14838ea22(void)

void FUN_14838ea22(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  longlong local_80;
  undefined8 local_78;
  LPCRITICAL_SECTION local_70;
  code *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  _RTL_CRITICAL_SECTION local_48;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  InitializeCriticalSection(&local_48);
  SetCriticalSectionSpinCount(&local_48,4000);
  local_60 = &local_80;
  local_88 = &local_58;
  local_58 = 0;
  local_50 = 0;
  local_68 = FUN_143b233e2;
  local_90 = 0;
  local_80 = param_1;
  local_78 = param_2;
  local_70 = &local_48;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x78),1);
  DeleteCriticalSection(&local_48);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14838eae0 FUN_14838eae0 body=4837 status=ok
// SIG undefined FUN_14838eae0(void)

void FUN_14838eae0(double *param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  uint uVar16;
  longlong lVar17;
  undefined **ppuVar18;
  uint uVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  undefined8 *puVar26;
  undefined4 *puVar27;
  longlong lVar28;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auStack_258 [32];
  undefined **local_238;
  double *local_228;
  longlong local_220;
  longlong local_218 [3];
  ulonglong uStack_200;
  undefined *local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  double local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined *local_1b8;
  undefined **local_1b0;
  undefined *local_1a8;
  undefined **local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined *local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined **local_158;
  longlong lStack_150;
  undefined8 local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_218[2] = 0;
  uStack_200 = 0;
  FUN_143b16bf9(param_1,local_218 + 2);
  lVar22 = (longlong)(int)uStack_200;
  local_218[0] = 0;
  local_218[1] = 0;
  local_128 = (double)((ulonglong)local_128 & 0xffffffffffffff00);
  FUN_14475e60e(local_218,&local_128,uStack_200 & 0xffffffff);
  local_220 = lVar22;
  if (lVar22 < 1) {
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0.0;
    uStack_100 = 0;
    local_118 = 0.0;
    uStack_110 = 0;
    local_128 = 0.0;
    uStack_120 = 0.0;
  }
  else {
    uVar32 = 1;
    lVar23 = 0x14;
    lVar22 = 0;
    local_228 = param_1;
    do {
      if (*(char *)(local_218[0] + lVar22) == '\0') {
        iVar1 = *(int *)(local_218[2] + lVar22 * 0x10);
        lVar24 = (longlong)*(int *)(local_218[2] + 4 + lVar22 * 0x10);
        if (iVar1 < 8) {
          if (iVar1 == 2) {
            if (lVar22 + 1 < (longlong)(int)uStack_200) {
              lVar25 = lVar24 * 0x20 + (longlong)*param_1;
              uVar30 = uStack_200 & 0xffffffff;
              uVar31 = uVar32;
              lVar24 = lVar23;
              do {
                if (*(char *)(local_218[0] + uVar31) == '\0') {
                  lVar17 = (longlong)*(int *)(local_218[2] + lVar24);
                  iVar1 = *(int *)(local_218[2] + -4 + lVar24);
                  if (iVar1 < 8) {
                    if (iVar1 != 2) {
                      if (iVar1 == 4) {
                        ppuVar18 = (undefined **)(lVar17 * 0x50 + (longlong)param_1[2]);
                        goto LAB_14838f8b9;
                      }
                      goto LAB_14838f7b1;
                    }
                    cVar12 = FUN_146c663d6(lVar25,lVar17 * 0x20 + (longlong)*param_1);
                  }
                  else if (iVar1 == 8) {
                    cVar12 = FUN_146c6641f(lVar25,lVar17 * 0x40 + (longlong)param_1[4]);
                  }
                  else if (iVar1 == 0x20) {
                    dVar15 = param_1[8];
                    lVar17 = lVar17 * 0x90;
                    local_140 = (double)*(float *)((longlong)dVar15 + 0x80 + lVar17) * 0.5;
                    local_130 = (double)*(int *)((longlong)dVar15 + 0x78 + lVar17) * local_140;
                    local_138 = (double)*(int *)((longlong)dVar15 + 0x74 + lVar17) * local_140;
                    local_140 = local_140 * (double)*(int *)((longlong)dVar15 + 0x70 + lVar17);
                    uStack_160 = *(undefined8 *)((longlong)dVar15 + lVar17);
                    local_158 = (undefined **)((undefined8 *)((longlong)dVar15 + lVar17))[1];
                    puVar21 = (undefined8 *)((longlong)dVar15 + 0x20 + lVar17);
                    local_178 = (undefined *)*puVar21;
                    dStack_170 = (double)puVar21[1];
                    local_168 = *(double *)((longlong)dVar15 + 0x30 + lVar17);
                    lStack_150 = *(longlong *)((longlong)dVar15 + 0x10 + lVar17);
                    local_148 = *(undefined8 *)((longlong)dVar15 + 0x18 + lVar17);
                    ppuVar18 = &local_178;
LAB_14838f8b9:
                    cVar12 = FUN_146c66558(lVar25,ppuVar18);
                  }
                  else {
                    if (iVar1 != 0x10) goto LAB_14838f7b1;
                    lStack_150 = (longlong)param_1[6] + lVar17 * 0x220;
                    local_168 = 0.0;
                    local_158 = &PTR_DAT_149f363e0;
                    local_178 = &DAT_146be727e;
                    FUN_146be708e(lVar17 * 0x220 + (longlong)param_1[6] + 0x20,&local_128,&local_178
                                 );
                    cVar12 = FUN_1483ab955(lVar25,&local_128);
                  }
                  if (cVar12 != '\0') {
                    *(undefined1 *)(local_218[0] + uVar31) = 1;
                  }
                }
LAB_14838f7b1:
                uVar31 = uVar31 + 1;
                lVar24 = lVar24 + 0x10;
              } while (uVar30 != uVar31);
            }
          }
          else if ((iVar1 == 4) && (lVar22 + 1 < (longlong)(int)uStack_200)) {
            lVar25 = lVar24 * 0x50 + (longlong)param_1[2];
            uVar30 = uStack_200 & 0xffffffff;
            uVar31 = uVar32;
            lVar24 = lVar23;
            do {
              if (*(char *)(local_218[0] + uVar31) == '\0') {
                lVar17 = (longlong)*(int *)(local_218[2] + lVar24);
                iVar1 = *(int *)(local_218[2] + -4 + lVar24);
                if (iVar1 < 8) {
                  if (iVar1 != 2) {
                    if (iVar1 == 4) {
                      ppuVar18 = (undefined **)(lVar17 * 0x50 + (longlong)param_1[2]);
                      goto LAB_14838f09f;
                    }
                    goto LAB_14838ef97;
                  }
                  cVar12 = FUN_146c67a78(lVar25,lVar17 * 0x20 + (longlong)*param_1);
                }
                else if (iVar1 == 8) {
                  cVar12 = FUN_146c67de2(lVar25,lVar17 * 0x40 + (longlong)param_1[4]);
                }
                else if (iVar1 == 0x20) {
                  dVar15 = param_1[8];
                  lVar17 = lVar17 * 0x90;
                  local_140 = (double)*(float *)((longlong)dVar15 + 0x80 + lVar17) * 0.5;
                  local_130 = (double)*(int *)((longlong)dVar15 + 0x78 + lVar17) * local_140;
                  local_138 = (double)*(int *)((longlong)dVar15 + 0x74 + lVar17) * local_140;
                  local_140 = local_140 * (double)*(int *)((longlong)dVar15 + 0x70 + lVar17);
                  uStack_160 = *(undefined8 *)((longlong)dVar15 + lVar17);
                  local_158 = (undefined **)((undefined8 *)((longlong)dVar15 + lVar17))[1];
                  puVar21 = (undefined8 *)((longlong)dVar15 + 0x20 + lVar17);
                  local_178 = (undefined *)*puVar21;
                  dStack_170 = (double)puVar21[1];
                  local_168 = *(double *)((longlong)dVar15 + 0x30 + lVar17);
                  lStack_150 = *(longlong *)((longlong)dVar15 + 0x10 + lVar17);
                  local_148 = *(undefined8 *)((longlong)dVar15 + 0x18 + lVar17);
                  ppuVar18 = &local_178;
LAB_14838f09f:
                  cVar12 = FUN_146c674ef(lVar25,ppuVar18);
                }
                else {
                  if (iVar1 != 0x10) goto LAB_14838ef97;
                  lStack_150 = (longlong)param_1[6] + lVar17 * 0x220;
                  local_168 = 0.0;
                  local_158 = &PTR_DAT_149f363e0;
                  local_178 = &DAT_146be727e;
                  FUN_146be708e(lVar17 * 0x220 + (longlong)param_1[6] + 0x20,&local_128,&local_178);
                  cVar12 = FUN_1483abda7(lVar25,&local_128);
                }
                if (cVar12 != '\0') {
                  *(undefined1 *)(local_218[0] + uVar31) = 1;
                }
              }
LAB_14838ef97:
              uVar31 = uVar31 + 1;
              lVar24 = lVar24 + 0x10;
            } while (uVar30 != uVar31);
          }
        }
        else if (iVar1 == 8) {
          if (lVar22 + 1 < (longlong)(int)uStack_200) {
            lVar25 = lVar24 * 0x40 + (longlong)param_1[4];
            uVar30 = uStack_200 & 0xffffffff;
            uVar31 = uVar32;
            lVar24 = lVar23;
            do {
              if (*(char *)(local_218[0] + uVar31) == '\0') {
                lVar17 = (longlong)*(int *)(local_218[2] + lVar24);
                iVar1 = *(int *)(local_218[2] + -4 + lVar24);
                if (iVar1 < 8) {
                  if (iVar1 != 2) {
                    if (iVar1 == 4) {
                      ppuVar18 = (undefined **)(lVar17 * 0x50 + (longlong)param_1[2]);
                      goto LAB_14838f28e;
                    }
                    goto LAB_14838f186;
                  }
                  cVar12 = FUN_146c66d43(lVar25,lVar17 * 0x20 + (longlong)*param_1);
                }
                else if (iVar1 == 8) {
                  cVar12 = FUN_146c66c05(lVar25,lVar17 * 0x40 + (longlong)param_1[4]);
                }
                else if (iVar1 == 0x20) {
                  dVar15 = param_1[8];
                  lVar17 = lVar17 * 0x90;
                  local_140 = (double)*(float *)((longlong)dVar15 + 0x80 + lVar17) * 0.5;
                  local_130 = (double)*(int *)((longlong)dVar15 + 0x78 + lVar17) * local_140;
                  local_138 = (double)*(int *)((longlong)dVar15 + 0x74 + lVar17) * local_140;
                  local_140 = local_140 * (double)*(int *)((longlong)dVar15 + 0x70 + lVar17);
                  uStack_160 = *(undefined8 *)((longlong)dVar15 + lVar17);
                  local_158 = (undefined **)((undefined8 *)((longlong)dVar15 + lVar17))[1];
                  puVar21 = (undefined8 *)((longlong)dVar15 + 0x20 + lVar17);
                  local_178 = (undefined *)*puVar21;
                  dStack_170 = (double)puVar21[1];
                  local_168 = *(double *)((longlong)dVar15 + 0x30 + lVar17);
                  lStack_150 = *(longlong *)((longlong)dVar15 + 0x10 + lVar17);
                  local_148 = *(undefined8 *)((longlong)dVar15 + 0x18 + lVar17);
                  ppuVar18 = &local_178;
LAB_14838f28e:
                  cVar12 = FUN_146c66dac(lVar25,ppuVar18);
                }
                else {
                  if (iVar1 != 0x10) goto LAB_14838f186;
                  lStack_150 = (longlong)param_1[6] + lVar17 * 0x220;
                  local_168 = 0.0;
                  local_158 = &PTR_DAT_149f363e0;
                  local_178 = &DAT_146be727e;
                  FUN_146be708e(lVar17 * 0x220 + (longlong)param_1[6] + 0x20,&local_128,&local_178);
                  cVar12 = FUN_1483abb91(lVar25,&local_128);
                }
                if (cVar12 != '\0') {
                  *(undefined1 *)(local_218[0] + uVar31) = 1;
                }
              }
LAB_14838f186:
              uVar31 = uVar31 + 1;
              lVar24 = lVar24 + 0x10;
            } while (uVar30 != uVar31);
          }
        }
        else if (iVar1 == 0x10) {
          dVar15 = param_1[6];
          lVar24 = lVar24 * 0x220;
          lVar25 = (longlong)dVar15 + lVar24;
          local_1f8 = (undefined *)0x0;
          uStack_1f0 = 0;
          uVar29 = *(int *)((longlong)dVar15 + 0x140 + lVar24) * 0x200 +
                   *(int *)((longlong)dVar15 + 0x144 + lVar24);
          uVar14 = 0;
          if ((uVar29 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar25 + 0x148) - 1U))
             ) {
            uVar13 = 1;
            uVar19 = 1;
            if (1 < (int)uVar29) {
              uVar19 = uVar29;
            }
            do {
              uVar16 = uVar13;
              uVar14 = uVar19;
              if (uVar19 == uVar16) break;
              uVar13 = uVar16 + 1;
              uVar14 = uVar16;
            } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar25 + 0x148))[uVar16 >> 9] +
                                                 (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
          }
LAB_14838f38c:
          if (uVar14 != uVar29) {
            local_238 = &local_178;
            FUN_146c1477c(lVar25,uVar14,&local_128,&local_1a8);
            dVar9 = local_118;
            dVar8 = uStack_120;
            dVar7 = local_128;
            uVar31 = uStack_1f0;
            dVar2 = dStack_170 * uStack_120;
            dVar3 = (double)local_178 * local_128;
            dVar15 = local_168 * local_118;
            lVar24 = (longlong)(int)uStack_1f0;
            uVar13 = (int)uStack_1f0 + 1;
            uStack_1f0 = CONCAT44(uStack_1f0._4_4_,uVar13);
            if (uStack_1f0._4_4_ < uVar13) {
              FUN_1483ac346(&local_1f8,uVar31 & 0xffffffff);
            }
            lVar24 = lVar24 * 0x20;
            *(double *)(local_1f8 + lVar24) = dVar7;
            *(double *)(local_1f8 + lVar24 + 8) = dVar8;
            *(double *)(local_1f8 + lVar24 + 0x10) = dVar9;
            *(double *)(local_1f8 + lVar24 + 0x18) = dVar15 + dVar3 + dVar2;
            uVar13 = uVar14 + 1;
            if ((int)(uVar14 + 1) < (int)uVar29) {
              uVar13 = uVar29;
            }
            uVar19 = uVar14;
            do {
              uVar14 = uVar13;
              if (uVar13 - 1 == uVar19) break;
              uVar14 = uVar19 + 1;
              uVar19 = uVar14;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(lVar25 + 0x148) +
                                                   (ulonglong)(uVar14 >> 9) * 8) +
                                                 (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
            goto LAB_14838f38c;
          }
          if (lVar22 + 1 < (longlong)(int)uStack_200) {
            uVar30 = uStack_200 & 0xffffffff;
            uVar31 = uVar32;
            do {
              if (*(char *)(local_218[0] + uVar31) != '\0') goto LAB_14838f4c6;
              lVar24 = (longlong)*(int *)(local_218[2] + 4 + uVar31 * 0x10);
              iVar1 = *(int *)(local_218[2] + uVar31 * 0x10);
              if (iVar1 < 8) {
                if (iVar1 == 2) {
                  if ((longlong)(int)uStack_1f0 != 0) {
                    dVar15 = *local_228;
                    lVar25 = (longlong)(int)uStack_1f0 << 5;
                    puVar20 = local_1f8;
                    do {
                      cVar12 = FUN_146c67da8(puVar20,lVar24 * 0x20 + (longlong)dVar15);
                      if (cVar12 != '\0') goto LAB_14838f4c6;
                      puVar20 = puVar20 + 0x20;
                      lVar25 = lVar25 + -0x20;
                    } while (lVar25 != 0);
                  }
                }
                else {
                  if (iVar1 != 4) goto LAB_14838f4c6;
                  if ((longlong)(int)uStack_1f0 != 0) {
                    dVar15 = local_228[2];
                    lVar25 = (longlong)(int)uStack_1f0 << 5;
                    puVar20 = local_1f8;
                    do {
                      cVar12 = FUN_146c6780b(puVar20,lVar24 * 0x50 + (longlong)dVar15);
                      if (cVar12 != '\0') goto LAB_14838f4c6;
                      puVar20 = puVar20 + 0x20;
                      lVar25 = lVar25 + -0x20;
                    } while (lVar25 != 0);
                  }
                }
LAB_14838f6b9:
                *(undefined1 *)(local_218[0] + uVar31) = 1;
              }
              else {
                if (iVar1 == 8) {
                  if ((longlong)(int)uStack_1f0 != 0) {
                    dVar15 = local_228[4];
                    lVar25 = (longlong)(int)uStack_1f0 << 5;
                    puVar20 = local_1f8;
                    do {
                      cVar12 = FUN_146c6822f(puVar20,lVar24 * 0x40 + (longlong)dVar15);
                      if (cVar12 != '\0') goto LAB_14838f4c6;
                      puVar20 = puVar20 + 0x20;
                      lVar25 = lVar25 + -0x20;
                    } while (lVar25 != 0);
                  }
                  goto LAB_14838f6b9;
                }
                if (iVar1 == 0x20) {
                  dVar15 = local_228[8];
                  lVar24 = lVar24 * 0x90;
                  local_140 = (double)*(float *)((longlong)dVar15 + 0x80 + lVar24) * 0.5;
                  local_130 = (double)*(int *)((longlong)dVar15 + 0x78 + lVar24) * local_140;
                  local_138 = (double)*(int *)((longlong)dVar15 + 0x74 + lVar24) * local_140;
                  local_140 = local_140 * (double)*(int *)((longlong)dVar15 + 0x70 + lVar24);
                  uStack_160 = *(undefined8 *)((longlong)dVar15 + lVar24);
                  local_158 = (undefined **)((undefined8 *)((longlong)dVar15 + lVar24))[1];
                  puVar21 = (undefined8 *)((longlong)dVar15 + 0x20 + lVar24);
                  local_178 = (undefined *)*puVar21;
                  dStack_170 = (double)puVar21[1];
                  local_168 = *(double *)((longlong)dVar15 + 0x30 + lVar24);
                  local_148 = *(undefined8 *)((longlong)dVar15 + 0x18 + lVar24);
                  lStack_150 = *(longlong *)((longlong)dVar15 + 0x10 + lVar24);
                  if ((longlong)(int)uStack_1f0 != 0) {
                    lVar24 = (longlong)(int)uStack_1f0 << 5;
                    puVar20 = local_1f8;
                    do {
                      cVar12 = FUN_146c6780b(puVar20,&local_178);
                      if (cVar12 != '\0') goto LAB_14838f4c6;
                      puVar20 = puVar20 + 0x20;
                      lVar24 = lVar24 + -0x20;
                    } while (lVar24 != 0);
                  }
                  goto LAB_14838f6b9;
                }
                if (iVar1 == 0x10) {
                  lStack_150 = (longlong)local_228[6] + lVar24 * 0x220;
                  local_168 = 0.0;
                  local_158 = &PTR_DAT_149f363e0;
                  local_178 = &DAT_146be727e;
                  FUN_146be708e(lVar24 * 0x220 + (longlong)local_228[6] + 0x20,&local_128,&local_178
                               );
                  local_1a8 = local_1f8;
                  local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,(int)uStack_1f0);
                  cVar12 = FUN_1483ac0c2(&local_1a8,&local_128);
                  if (cVar12 != '\0') goto LAB_14838f6b9;
                }
              }
LAB_14838f4c6:
              uVar31 = uVar31 + 1;
            } while (uVar31 != uVar30);
          }
          param_1 = local_228;
          if (local_1f8 != (undefined *)0x0) {
            FUN_1400020a8();
            param_1 = local_228;
          }
        }
        else if (iVar1 == 0x20) {
          lVar25 = lVar24 * 0x90 + (longlong)param_1[8];
          local_1f8 = (undefined *)(lVar25 + 0x60);
          local_1c8 = *(undefined4 *)(lVar25 + 0x78);
          local_1d0 = *(undefined8 *)(lVar25 + 0x70);
          local_1d8 = (double)*(float *)(lVar25 + 0x80);
          local_1e0 = DAT_14c8464f0;
          uStack_1f0 = DAT_14c8464e0;
          uStack_1e8 = DAT_14c8464e8;
          local_1c0 = 0x47efffffe0000000;
          lVar25 = (longlong)(int)uStack_200;
          if (1 < lVar25) {
            puVar20 = (undefined *)((longlong)param_1[8] + lVar24 * 0x90);
            lVar24 = 1;
            lVar17 = 0x14;
            do {
              if (*(char *)(local_218[0] + lVar24) == '\0') {
                lVar28 = (longlong)*(int *)(local_218[2] + lVar17);
                iVar1 = *(int *)(local_218[2] + -4 + lVar17);
                if (iVar1 < 8) {
                  if (iVar1 == 2) {
                    cVar12 = FUN_1483ac3cb(&local_1f8,puVar20,lVar28 * 0x20 + (longlong)*param_1);
                  }
                  else {
                    if (iVar1 != 4) goto LAB_14838ec99;
                    local_178 = (undefined *)0x7fefffffffffffff;
                    dStack_170 = 1.79769313486232e+308;
                    local_168 = 1.79769313486232e+308;
                    uStack_160 = 0xffefffffffffffff;
                    local_158 = (undefined **)0xffefffffffffffff;
                    lStack_150 = -0x10000000000001;
                    local_1a0 = &local_178;
                    local_1a8 = puVar20;
                    FUN_1483acf16(lVar28 * 0x50 + (longlong)param_1[2],&local_1a8);
                    ppuVar18 = &local_178;
LAB_14838ee93:
                    cVar12 = FUN_1483acb79(&local_1f8,ppuVar18);
                  }
                }
                else if (iVar1 == 8) {
                  cVar12 = FUN_1483ac503(&local_1f8,puVar20,lVar28 * 0x40 + (longlong)param_1[4]);
                }
                else {
                  if (iVar1 != 0x10) {
                    if (iVar1 == 0x20) {
                      dVar15 = param_1[8];
                      lVar28 = lVar28 * 0x90;
                      local_140 = (double)*(float *)((longlong)dVar15 + 0x80 + lVar28) * 0.5;
                      local_130 = (double)*(int *)((longlong)dVar15 + 0x78 + lVar28) * local_140;
                      local_138 = (double)*(int *)((longlong)dVar15 + 0x74 + lVar28) * local_140;
                      local_140 = local_140 * (double)*(int *)((longlong)dVar15 + 0x70 + lVar28);
                      uStack_160 = *(undefined8 *)((longlong)dVar15 + lVar28);
                      local_158 = (undefined **)((undefined8 *)((longlong)dVar15 + lVar28))[1];
                      puVar21 = (undefined8 *)((longlong)dVar15 + 0x20 + lVar28);
                      local_178 = (undefined *)*puVar21;
                      dStack_170 = (double)puVar21[1];
                      local_168 = *(double *)((longlong)dVar15 + 0x30 + lVar28);
                      lStack_150 = *(longlong *)((longlong)dVar15 + 0x10 + lVar28);
                      local_148 = *(undefined8 *)((longlong)dVar15 + 0x18 + lVar28);
                      local_1a8 = (undefined *)0x7fefffffffffffff;
                      local_1a0 = (undefined **)0x7fefffffffffffff;
                      local_198 = 0x7fefffffffffffff;
                      local_190 = 0xffefffffffffffff;
                      local_188 = 0xffefffffffffffff;
                      local_180 = 0xffefffffffffffff;
                      local_1b0 = &local_1a8;
                      local_1b8 = puVar20;
                      FUN_1483acf16(&local_178,&local_1b8);
                      ppuVar18 = &local_1a8;
                      goto LAB_14838ee93;
                    }
                    goto LAB_14838ec99;
                  }
                  lStack_150 = (longlong)param_1[6] + lVar28 * 0x220;
                  local_168 = 0.0;
                  local_158 = &PTR_DAT_149f363e0;
                  local_178 = &DAT_146be727e;
                  FUN_146be708e(lVar28 * 0x220 + (longlong)param_1[6] + 0x20,&local_128,&local_178);
                  cVar12 = FUN_1483ac5a8(&local_1f8,puVar20,&local_128);
                }
                if (cVar12 != '\0') {
                  *(undefined1 *)(local_218[0] + lVar24) = 1;
                }
              }
LAB_14838ec99:
              lVar24 = lVar24 + 1;
              lVar17 = lVar17 + 0x10;
            } while (lVar25 != lVar24);
          }
        }
      }
      lVar22 = lVar22 + 1;
      uVar32 = uVar32 + 1;
      lVar23 = lVar23 + 0x10;
    } while (lVar22 != local_220);
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0.0;
    uStack_100 = 0;
    local_118 = 0.0;
    uStack_110 = 0;
    local_128 = 0.0;
    uStack_120 = 0.0;
    lVar23 = 4;
    lVar22 = 0;
    do {
      uVar11 = uStack_e0;
      uVar10 = uStack_f0;
      uVar30 = uStack_100;
      uVar31 = uStack_110;
      uVar32 = (ulonglong)uStack_120;
      if (*(char *)(local_218[0] + lVar22) == '\0') {
        iVar1 = *(int *)(local_218[2] + -4 + lVar23);
        lVar24 = (longlong)*(int *)(local_218[2] + lVar23);
        if (iVar1 < 8) {
          if (iVar1 == 2) {
            puVar27 = (undefined4 *)(lVar24 * 0x20 + (longlong)*param_1);
            lVar24 = (longlong)(int)uStack_120;
            uVar14 = (int)uStack_120 + 1;
            uStack_120 = (double)CONCAT44(uStack_120._4_4_,uVar14);
            if (uStack_120._4_4_ < uVar14) {
              FUN_1483b9e7e(&local_128,uVar32 & 0xffffffff);
            }
            lVar24 = lVar24 << 5;
            uVar33 = *puVar27;
            uVar34 = puVar27[1];
            uVar35 = puVar27[2];
            uVar36 = puVar27[3];
            uVar37 = puVar27[4];
            uVar38 = puVar27[5];
            uVar39 = puVar27[6];
            uVar40 = puVar27[7];
            dVar15 = local_128;
            goto LAB_14838fb90;
          }
          if (iVar1 == 4) {
            dVar15 = param_1[2];
            lVar25 = (longlong)(int)uStack_110;
            uVar14 = (int)uStack_110 + 1;
            uStack_110 = CONCAT44(uStack_110._4_4_,uVar14);
            if (uStack_110._4_4_ < uVar14) {
              FUN_1483b9f04(&local_118,uVar31 & 0xffffffff);
            }
            puVar21 = (undefined8 *)(lVar24 * 0x50 + (longlong)dVar15);
            puVar26 = (undefined8 *)(lVar25 * 0x50 + (longlong)local_118);
            for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
              *puVar26 = *puVar21;
              puVar21 = puVar21 + 1;
              puVar26 = puVar26 + 1;
            }
          }
        }
        else if (iVar1 == 8) {
          puVar27 = (undefined4 *)(lVar24 * 0x40 + (longlong)param_1[4]);
          lVar24 = (longlong)(int)uStack_100;
          uVar14 = (int)uStack_100 + 1;
          uStack_100 = CONCAT44(uStack_100._4_4_,uVar14);
          if (uStack_100._4_4_ < uVar14) {
            FUN_1483b9f98(&local_108,uVar30 & 0xffffffff);
          }
          lVar24 = lVar24 * 0x40;
          uVar33 = *puVar27;
          uVar34 = puVar27[1];
          uVar35 = puVar27[2];
          uVar36 = puVar27[3];
          uVar37 = puVar27[4];
          uVar38 = puVar27[5];
          uVar39 = puVar27[6];
          uVar40 = puVar27[7];
          uVar4 = *(undefined8 *)(puVar27 + 8);
          uVar5 = *(undefined8 *)(puVar27 + 10);
          uVar6 = *(undefined8 *)(puVar27 + 0xe);
          puVar21 = (undefined8 *)((longlong)local_108 + 0x30 + lVar24);
          *puVar21 = *(undefined8 *)(puVar27 + 0xc);
          puVar21[1] = uVar6;
          puVar21 = (undefined8 *)((longlong)local_108 + 0x20 + lVar24);
          *puVar21 = uVar4;
          puVar21[1] = uVar5;
          dVar15 = local_108;
LAB_14838fb90:
          puVar27 = (undefined4 *)((longlong)dVar15 + 0x10 + lVar24);
          *puVar27 = uVar37;
          puVar27[1] = uVar38;
          puVar27[2] = uVar39;
          puVar27[3] = uVar40;
          puVar27 = (undefined4 *)((longlong)dVar15 + lVar24);
          *puVar27 = uVar33;
          puVar27[1] = uVar34;
          puVar27[2] = uVar35;
          puVar27[3] = uVar36;
        }
        else if (iVar1 == 0x10) {
          dVar15 = param_1[6];
          lVar25 = (longlong)(int)uStack_f0;
          uVar14 = (int)uStack_f0 + 1;
          uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar14);
          if (uStack_f0._4_4_ < uVar14) {
            FUN_1483ba0ee(&local_f8,uVar10 & 0xffffffff);
          }
          FUN_146bff712(lVar25 * 0x220 + local_f8,lVar24 * 0x220 + (longlong)dVar15);
        }
        else if (iVar1 == 0x20) {
          dVar15 = param_1[8];
          lVar25 = (longlong)(int)uStack_e0;
          uVar14 = (int)uStack_e0 + 1;
          uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar14);
          if (uStack_e0._4_4_ < uVar14) {
            FUN_1483bea4e(&local_e8,uVar11 & 0xffffffff);
          }
          FUN_1483beb90(lVar25 * 0x90 + local_e8,lVar24 * 0x90 + (longlong)dVar15);
        }
      }
      lVar22 = lVar22 + 1;
      lVar23 = lVar23 + 0x10;
    } while (local_220 != lVar22);
  }
  if (&local_128 != param_1) {
    if (*param_1 != 0.0) {
      FUN_1400020a8();
    }
    *param_1 = local_128;
    local_128 = 0.0;
    *(int *)(param_1 + 1) = (int)uStack_120;
    *(uint *)((longlong)param_1 + 0xc) = uStack_120._4_4_;
    uStack_120 = 0.0;
    if (param_1[2] != 0.0) {
      FUN_1400020a8();
    }
    param_1[2] = local_118;
    local_118 = 0.0;
    *(int *)(param_1 + 3) = (int)uStack_110;
    *(uint *)((longlong)param_1 + 0x1c) = uStack_110._4_4_;
    uStack_110 = 0;
    if (param_1[4] != 0.0) {
      FUN_1400020a8();
    }
    param_1[4] = local_108;
    local_108 = 0.0;
    *(int *)(param_1 + 5) = (int)uStack_100;
    *(uint *)((longlong)param_1 + 0x2c) = uStack_100._4_4_;
    uStack_100 = 0;
  }
  FUN_14838fdc6(param_1 + 6,&local_f8);
  FUN_14838fe16(param_1 + 8,&local_e8);
  FUN_14838fe66(&local_128);
  if (local_218[0] != 0) {
    FUN_1400020a8();
  }
  if (local_218[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14838fdc6 FUN_14838fdc6 body=80 status=ok
// SIG undefined FUN_14838fdc6(void)

longlong * FUN_14838fdc6(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1483beb67(*param_1,(int)param_1[1]);
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



// FUNCTION 14838fe16 FUN_14838fe16 body=80 status=ok
// SIG undefined FUN_14838fe16(void)

longlong * FUN_14838fe16(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1483ad986(*param_1,(int)param_1[1]);
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



// FUNCTION 14838fe66 FUN_14838fe66 body=113 status=ok
// SIG undefined FUN_14838fe66(void)

void FUN_14838fe66(longlong *param_1)

{
  FUN_1483ad986(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1483beb67(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 14838fed8 FUN_14838fed8 body=727 status=ok
// SIG undefined FUN_14838fed8(void)

void FUN_14838fed8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar11 = param_2[1];
  if ((longlong)(int)lVar11 != 0) {
    lVar12 = *param_2;
    lVar13 = 0;
    do {
      puVar2 = (undefined4 *)(lVar12 + lVar13);
      puVar3 = (undefined4 *)(lVar12 + 0x10 + lVar13);
      local_88 = *puVar3;
      uStack_84 = puVar3[1];
      uStack_80 = puVar3[2];
      uStack_7c = puVar3[3];
      local_98._0_4_ = *puVar2;
      local_98._4_4_ = puVar2[1];
      uStack_90 = puVar2[2];
      uStack_8c = puVar2[3];
      iVar5 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
        FUN_1483b9e7e(param_1,iVar5);
      }
      lVar6 = *param_1;
      puVar8 = (undefined8 *)(lVar6 + 0x10 + (longlong)iVar5 * 0x20);
      *puVar8 = CONCAT44(uStack_84,local_88);
      puVar8[1] = CONCAT44(uStack_7c,uStack_80);
      puVar2 = (undefined4 *)(lVar6 + (longlong)iVar5 * 0x20);
      *puVar2 = (undefined4)local_98;
      puVar2[1] = local_98._4_4_;
      puVar2[2] = uStack_90;
      puVar2[3] = uStack_8c;
      lVar13 = lVar13 + 0x20;
    } while ((longlong)(int)lVar11 * 0x20 != lVar13);
  }
  lVar11 = param_2[3];
  local_a0 = param_2;
  if ((longlong)(int)lVar11 != 0) {
    lVar12 = param_2[2];
    lVar13 = 0;
    do {
      puVar8 = (undefined8 *)(lVar13 + lVar12);
      puVar9 = &local_98;
      for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      iVar5 = (int)param_1[3];
      *(uint *)(param_1 + 3) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar5 + 1U) {
        FUN_1483b9f04(param_1 + 2,iVar5);
      }
      puVar8 = &local_98;
      puVar9 = (undefined8 *)((longlong)iVar5 * 0x50 + param_1[2]);
      for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      lVar13 = lVar13 + 0x50;
    } while ((longlong)(int)lVar11 * 0x50 != lVar13);
  }
  plVar4 = local_a0;
  lVar11 = local_a0[5];
  if ((longlong)(int)lVar11 != 0) {
    lVar12 = local_a0[4];
    lVar13 = 0;
    do {
      puVar2 = (undefined4 *)(lVar12 + lVar13);
      local_98._0_4_ = *puVar2;
      local_98._4_4_ = puVar2[1];
      uStack_90 = puVar2[2];
      uStack_8c = puVar2[3];
      puVar2 = (undefined4 *)(lVar12 + 0x10 + lVar13);
      local_88 = *puVar2;
      uStack_84 = puVar2[1];
      uStack_80 = puVar2[2];
      uStack_7c = puVar2[3];
      puVar2 = (undefined4 *)(lVar12 + 0x20 + lVar13);
      local_78 = *puVar2;
      uStack_74 = puVar2[1];
      uStack_70 = puVar2[2];
      uStack_6c = puVar2[3];
      puVar2 = (undefined4 *)(lVar12 + 0x30 + lVar13);
      local_68 = *puVar2;
      uStack_64 = puVar2[1];
      uStack_60 = puVar2[2];
      uStack_5c = puVar2[3];
      iVar5 = (int)param_1[5];
      *(uint *)(param_1 + 5) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0x2c) < iVar5 + 1U) {
        FUN_1483b9f98(param_1 + 4,iVar5);
      }
      lVar6 = param_1[4];
      lVar10 = (longlong)iVar5 * 0x40;
      puVar8 = (undefined8 *)(lVar6 + 0x30 + lVar10);
      *puVar8 = CONCAT44(uStack_64,local_68);
      puVar8[1] = CONCAT44(uStack_5c,uStack_60);
      puVar8 = (undefined8 *)(lVar6 + 0x20 + lVar10);
      *puVar8 = CONCAT44(uStack_74,local_78);
      puVar8[1] = CONCAT44(uStack_6c,uStack_70);
      puVar8 = (undefined8 *)(lVar6 + 0x10 + lVar10);
      *puVar8 = CONCAT44(uStack_84,local_88);
      puVar8[1] = CONCAT44(uStack_7c,uStack_80);
      puVar2 = (undefined4 *)(lVar6 + lVar10);
      *puVar2 = (undefined4)local_98;
      puVar2[1] = local_98._4_4_;
      puVar2[2] = uStack_90;
      puVar2[3] = uStack_8c;
      lVar13 = lVar13 + 0x40;
    } while ((longlong)(int)lVar11 * 0x40 != lVar13);
  }
  iVar5 = (int)plVar4[7];
  iVar7 = (int)param_1[7] + iVar5;
  if (-1 < iVar7) {
    plVar1 = param_1 + 6;
    if (*(int *)((longlong)param_1 + 0x3c) < iVar7) {
      FUN_1483bec22(plVar1);
      iVar5 = (int)plVar4[7];
    }
    if (iVar5 != 0) {
      lVar11 = plVar4[6];
      lVar12 = (longlong)iVar5 * 0x220;
      do {
        iVar5 = (int)param_1[7];
        *(uint *)(param_1 + 7) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0x3c) < iVar5 + 1U) {
          FUN_1483ba0ee(plVar1,iVar5);
        }
        FUN_146bff712((longlong)iVar5 * 0x220 + *plVar1,lVar11);
        lVar11 = lVar11 + 0x220;
        lVar12 = lVar12 + -0x220;
      } while (lVar12 != 0);
    }
    iVar5 = (int)plVar4[9];
    iVar7 = (int)param_1[9] + iVar5;
    if (-1 < iVar7) {
      plVar1 = param_1 + 8;
      if (*(int *)((longlong)param_1 + 0x4c) < iVar7) {
        FUN_1483bec92(plVar1);
        iVar5 = (int)plVar4[9];
      }
      if (iVar5 != 0) {
        lVar11 = plVar4[8];
        lVar12 = (longlong)iVar5 * 0x90;
        do {
          iVar5 = (int)param_1[9];
          *(uint *)(param_1 + 9) = iVar5 + 1U;
          if (*(uint *)((longlong)param_1 + 0x4c) < iVar5 + 1U) {
            FUN_1483bea4e(plVar1,iVar5);
          }
          FUN_1483beb90((longlong)iVar5 * 0x90 + *plVar1,lVar11);
          lVar11 = lVar11 + 0x90;
          lVar12 = lVar12 + -0x90;
        } while (lVar12 != 0);
      }
      if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar7);
}



// FUNCTION 1483901b2 FUN_1483901b2 body=1379 status=ok
// SIG undefined FUN_1483901b2(void)

void FUN_1483901b2(longlong *param_1,longlong *param_2,double *param_3)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  undefined8 *puVar19;
  double *pdVar20;
  undefined8 *puVar21;
  longlong lVar22;
  double *pdVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_138 [32];
  longlong *local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((longlong)(int)param_2[1] != 0) {
    pdVar23 = (double *)*param_2;
    pdVar20 = pdVar23 + (longlong)(int)param_2[1] * 4;
    do {
      dVar11 = *param_3;
      dVar12 = param_3[1];
      dVar13 = param_3[2];
      dVar25 = pdVar23[2] * param_3[10];
      dVar7 = ABS(param_3[10]);
      dVar5 = *pdVar23 * param_3[8];
      dVar6 = pdVar23[1] * param_3[9];
      dVar8 = ABS(param_3[8]);
      if (ABS(param_3[9]) <= dVar8) {
        dVar8 = ABS(param_3[9]);
      }
      dVar2 = param_3[3];
      dVar26 = dVar6 * dVar11 - dVar5 * dVar12;
      dVar27 = dVar25 * dVar12 - dVar6 * dVar13;
      dVar28 = dVar5 * dVar13 - dVar11 * dVar25;
      dVar27 = dVar27 + dVar27;
      dVar28 = dVar28 + dVar28;
      dVar26 = dVar26 + dVar26;
      dVar3 = param_3[4];
      dVar10 = (dVar13 * dVar27 - dVar11 * dVar26) + param_3[3] * dVar28 + dVar6 + param_3[5];
      dVar6 = param_3[6];
      if (dVar7 <= dVar8) {
        dVar8 = dVar7;
      }
      dVar7 = pdVar23[3];
      iVar15 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar15 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar15 + 1U) {
        FUN_1483b9e7e(param_1,iVar15);
      }
      lVar22 = *param_1;
      lVar18 = (longlong)iVar15 * 0x20;
      auVar9._8_4_ = SUB84(dVar10,0);
      auVar9._0_8_ = (dVar26 * dVar12 - dVar28 * dVar13) + dVar2 * dVar27 + dVar5 + dVar3;
      auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])(lVar22 + lVar18) = auVar9;
      *(double *)(lVar22 + 0x10 + lVar18) =
           dVar26 * dVar2 + dVar25 + (dVar28 * dVar11 - dVar27 * dVar12) + dVar6;
      *(double *)(lVar22 + 0x18 + lVar18) = dVar8 * dVar7;
      pdVar23 = pdVar23 + 4;
    } while (pdVar23 != pdVar20);
  }
  lVar22 = param_2[3];
  local_118 = param_2;
  if ((longlong)(int)lVar22 != 0) {
    local_110 = param_2[2];
    lVar18 = 0;
    do {
      puVar19 = (undefined8 *)(local_110 + lVar18);
      puVar21 = &local_108;
      for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
        *puVar21 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar21 = puVar21 + 1;
      }
      FUN_1483bed02(&local_108,param_3);
      dStack_d0 = param_3[8] * dStack_d0;
      local_c8 = param_3[9] * local_c8;
      local_c0 = param_3[10] * local_c0;
      iVar15 = (int)param_1[3];
      *(uint *)(param_1 + 3) = iVar15 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar15 + 1U) {
        FUN_1483b9f04(param_1 + 2,iVar15);
      }
      puVar19 = &local_108;
      puVar21 = (undefined8 *)((longlong)iVar15 * 0x50 + param_1[2]);
      for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
        *puVar21 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar21 = puVar21 + 1;
      }
      lVar18 = lVar18 + 0x50;
    } while ((longlong)(int)lVar22 * 0x50 != lVar18);
  }
  lVar22 = local_118[5];
  if ((longlong)(int)lVar22 != 0) {
    lVar18 = local_118[4];
    lVar16 = 0;
    do {
      local_108 = *(double *)(lVar18 + lVar16);
      uStack_100 = ((double *)(lVar18 + lVar16))[1];
      pdVar23 = (double *)(lVar18 + 0x10 + lVar16);
      local_f8 = *pdVar23;
      dStack_f0 = pdVar23[1];
      pdVar23 = (double *)(lVar18 + 0x20 + lVar16);
      local_e8 = *pdVar23;
      dStack_e0 = pdVar23[1];
      pdVar23 = (double *)(lVar18 + 0x30 + lVar16);
      local_d8 = *pdVar23;
      dStack_d0 = pdVar23[1];
      FUN_143b173ec(&local_108,param_3);
      iVar15 = (int)param_1[5];
      *(uint *)(param_1 + 5) = iVar15 + 1U;
      if (*(uint *)((longlong)param_1 + 0x2c) < iVar15 + 1U) {
        FUN_1483b9f98(param_1 + 4,iVar15);
      }
      lVar4 = param_1[4];
      lVar24 = (longlong)iVar15 * 0x40;
      pdVar23 = (double *)(lVar4 + 0x30 + lVar24);
      *pdVar23 = local_d8;
      pdVar23[1] = dStack_d0;
      pdVar23 = (double *)(lVar4 + 0x20 + lVar24);
      *pdVar23 = local_e8;
      pdVar23[1] = dStack_e0;
      pdVar23 = (double *)(lVar4 + 0x10 + lVar24);
      *pdVar23 = local_f8;
      pdVar23[1] = dStack_f0;
      puVar1 = (undefined4 *)(lVar4 + lVar24);
      *puVar1 = (undefined4)local_108;
      puVar1[1] = local_108._4_4_;
      puVar1[2] = (undefined4)uStack_100;
      puVar1[3] = uStack_100._4_4_;
      lVar16 = lVar16 + 0x40;
    } while ((longlong)(int)lVar22 * 0x40 != lVar16);
  }
  plVar14 = local_118;
  iVar15 = (int)local_118[7];
  iVar17 = (int)param_1[7] + iVar15;
  if (-1 < iVar17) {
    if (*(int *)((longlong)param_1 + 0x3c) < iVar17) {
      FUN_1483bec22(param_1 + 6);
      iVar15 = (int)plVar14[7];
    }
    if (iVar15 != 0) {
      lVar22 = plVar14[6];
      lVar18 = (longlong)iVar15 * 0x220;
      do {
        iVar15 = (int)param_1[7];
        *(uint *)(param_1 + 7) = iVar15 + 1U;
        if (*(uint *)((longlong)param_1 + 0x3c) < iVar15 + 1U) {
          FUN_1483ba0ee(param_1 + 6,iVar15);
        }
        FUN_146bff712((longlong)iVar15 * 0x220 + param_1[6],lVar22);
        local_108 = *param_3;
        uStack_100 = param_3[1];
        local_f8 = param_3[2];
        dStack_f0 = param_3[3];
        local_e8 = param_3[4];
        dStack_e0 = param_3[5];
        local_d8 = param_3[6];
        dStack_d0 = param_3[8];
        local_c8 = param_3[9];
        local_c0 = param_3[10];
        FUN_146c3cd49((longlong)((int)param_1[7] + -1) * 0x220 + param_1[6],&local_108,1);
        lVar22 = lVar22 + 0x220;
        lVar18 = lVar18 + -0x220;
      } while (lVar18 != 0);
    }
    iVar15 = (int)plVar14[9];
    iVar17 = (int)param_1[9] + iVar15;
    if (-1 < iVar17) {
      if (*(int *)((longlong)param_1 + 0x4c) < iVar17) {
        FUN_1483bec92(param_1 + 8);
        iVar15 = (int)plVar14[9];
      }
      if (iVar15 != 0) {
        lVar22 = plVar14[8];
        lVar18 = (longlong)iVar15 * 0x90;
        do {
          iVar15 = (int)param_1[9];
          *(uint *)(param_1 + 9) = iVar15 + 1U;
          if (*(uint *)((longlong)param_1 + 0x4c) < iVar15 + 1U) {
            FUN_1483bea4e(param_1 + 8,iVar15);
          }
          FUN_1483beb90((longlong)iVar15 * 0x90 + param_1[8],lVar22);
          FUN_143b1799f((longlong)((int)param_1[9] + -1) * 0x90 + param_1[8],param_3);
          lVar22 = lVar22 + 0x90;
          lVar18 = lVar18 + -0x90;
        } while (lVar18 != 0);
      }
      if ((local_b0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar17);
}



// FUNCTION 148390718 FUN_148390718 body=7748 status=ok
// SIG undefined FUN_148390718(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148390718(longlong *param_1,longlong *param_2,longlong *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  double *pdVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  double *pdVar23;
  double *pdVar24;
  longlong *plVar25;
  double *pdVar26;
  longlong *plVar27;
  ulonglong uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar45;
  double dVar46;
  undefined1 auVar44 [16];
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  double dVar53;
  double dVar57;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar58;
  double dVar61;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar64;
  double dVar65;
  double dVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined4 uVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar78;
  undefined1 auVar77 [16];
  undefined1 auStack_378 [40];
  longlong *local_350;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  longlong *local_300;
  longlong *local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [24];
  double local_2c0;
  double local_2b8;
  undefined8 uStack_2b0;
  double local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178 [4];
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if ((longlong)(int)param_2[1] != 0) {
    pdVar26 = (double *)*param_2;
    pdVar18 = pdVar26 + (longlong)(int)param_2[1] * 4;
    do {
      dVar48 = *pdVar26;
      dVar52 = pdVar26[1];
      dVar40 = pdVar26[2];
      dVar64 = pdVar26[3];
      if ((longlong)(int)param_3[1] != 0) {
        lVar22 = *param_3;
        lVar20 = 0;
        do {
          dVar65 = *(double *)(lVar22 + lVar20);
          dVar30 = ((double *)(lVar22 + lVar20))[1];
          dVar47 = *(double *)(lVar22 + 0x10 + lVar20);
          pdVar23 = (double *)(lVar22 + 0x40 + lVar20);
          dVar29 = *pdVar23;
          dVar48 = dVar48 * dVar29;
          dVar52 = dVar52 * pdVar23[1];
          dVar38 = *(double *)(lVar22 + 0x50 + lVar20);
          dVar40 = dVar40 * dVar38;
          pdVar23 = (double *)(lVar22 + 0x18 + lVar20);
          dVar41 = *pdVar23;
          dVar58 = dVar52 * dVar65 - dVar48 * dVar30;
          dVar61 = dVar40 * dVar30 - dVar52 * dVar47;
          dVar74 = dVar48 * dVar47 - dVar65 * dVar40;
          dVar61 = dVar61 + dVar61;
          dVar74 = dVar74 + dVar74;
          dVar58 = dVar58 + dVar58;
          pdVar24 = (double *)(lVar22 + 0x20 + lVar20);
          dVar48 = (dVar58 * dVar30 - dVar74 * dVar47) + dVar41 * dVar61 + dVar48 + *pdVar24;
          dVar52 = (dVar47 * dVar61 - dVar65 * dVar58) + *pdVar23 * dVar74 + dVar52 + pdVar24[1];
          dVar40 = dVar58 * dVar41 + dVar40 + (dVar74 * dVar65 - dVar61 * dVar30) +
                   *(double *)(lVar22 + 0x30 + lVar20);
          dVar38 = ABS(dVar38);
          dVar41 = ABS(*(double *)(lVar22 + 0x48 + lVar20));
          dVar29 = ABS(dVar29);
          if (dVar41 <= dVar29) {
            dVar29 = dVar41;
          }
          if (dVar38 <= dVar29) {
            dVar29 = dVar38;
          }
          dVar64 = dVar64 * dVar29;
          lVar20 = lVar20 + 0x60;
        } while ((longlong)(int)param_3[1] * 0x60 != lVar20);
      }
      lVar22 = param_1[1];
      uVar14 = (int)lVar22 + 1;
      *(uint *)(param_1 + 1) = uVar14;
      if (*(uint *)((longlong)param_1 + 0xc) < uVar14) {
        FUN_1483b9e7e(param_1);
      }
      lVar20 = *param_1;
      lVar22 = (longlong)(int)lVar22 * 0x20;
      auVar62._8_4_ = SUB84(dVar52,0);
      auVar62._0_8_ = dVar48;
      auVar62._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
      *(undefined1 (*) [16])(lVar20 + lVar22) = auVar62;
      *(double *)(lVar20 + 0x10 + lVar22) = dVar40;
      *(double *)(lVar20 + 0x18 + lVar22) = dVar64;
      pdVar26 = pdVar26 + 4;
    } while (pdVar26 != pdVar18);
  }
  local_350 = param_2;
  if ((longlong)(int)param_2[3] != 0) {
    pdVar26 = (double *)param_2[2];
    pdVar18 = pdVar26 + (longlong)(int)param_2[3] * 10;
    do {
      pdVar23 = pdVar26;
      pdVar24 = local_178;
      for (lVar22 = 10; lVar22 != 0; lVar22 = lVar22 + -1) {
        *pdVar24 = *pdVar23;
        pdVar23 = pdVar23 + 1;
        pdVar24 = pdVar24 + 1;
      }
      if ((longlong)(int)param_3[1] != 0) {
        lVar22 = *param_3;
        lVar20 = (longlong)(int)param_3[1] * 0x60 + lVar22;
        do {
          FUN_1483bed02(local_178,lVar22);
          dStack_140 = *(double *)(lVar22 + 0x40) * dStack_140;
          local_138 = *(double *)(lVar22 + 0x48) * local_138;
          local_130 = *(double *)(lVar22 + 0x50) * local_130;
          lVar22 = lVar22 + 0x60;
        } while (lVar22 != lVar20);
      }
      iVar15 = (int)param_1[3];
      *(uint *)(param_1 + 3) = iVar15 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar15 + 1U) {
        FUN_1483b9f04(param_1 + 2,iVar15);
      }
      pdVar23 = local_178;
      pdVar24 = (double *)((longlong)iVar15 * 0x50 + param_1[2]);
      for (lVar22 = 10; lVar22 != 0; lVar22 = lVar22 + -1) {
        *pdVar24 = *pdVar23;
        pdVar23 = pdVar23 + 1;
        pdVar24 = pdVar24 + 1;
      }
      pdVar26 = pdVar26 + 10;
    } while (pdVar26 != pdVar18);
  }
  plVar25 = local_350;
  if ((longlong)(int)local_350[5] != 0) {
    pdVar26 = (double *)local_350[4];
    pdVar18 = pdVar26 + (longlong)(int)local_350[5] * 8;
    local_300 = param_1 + 4;
    do {
      local_1f8 = *pdVar26;
      dStack_1f0 = pdVar26[1];
      local_1e8 = pdVar26[2];
      local_178[3] = pdVar26[3];
      local_158 = pdVar26[4];
      dStack_150 = pdVar26[5];
      local_148 = pdVar26[6];
      dVar41 = pdVar26[7];
      dVar64 = local_1e8 - dStack_150 * local_148;
      dVar52 = dStack_1f0 - local_158 * local_148;
      dVar48 = local_1f8 - local_148 * local_178[3];
      dVar40 = dStack_150 * local_148 + local_1e8;
      dVar30 = local_158 * local_148 + dStack_1f0;
      dVar65 = local_148 * local_178[3] + local_1f8;
      uStack_1e0 = 0;
      auStack_1d8 = ZEXT816(0);
      local_1c8 = 1.0;
      local_268 = DAT_14c8463c8;
      local_278 = DAT_14c8463b8;
      dStack_270 = DAT_14c8463c0;
      local_178[0] = local_1f8;
      local_178[1] = dStack_1f0;
      local_178[2] = local_1e8;
      dStack_140 = dVar41;
      FUN_146bfb7f2(&uStack_1e0,&local_278,local_178 + 3);
      local_288 = 0.0;
      local_298 = dVar41;
      dStack_290 = dVar41;
      FUN_146bed047(&local_278,&uStack_1e0,&local_298);
      local_2c0 = (local_268 + local_1e8) - local_1e8;
      local_2b8 = (dStack_270 + dStack_1f0) - dStack_1f0;
      local_2a8 = (local_278 + local_1f8) - local_1f8;
      uStack_2a0 = 0;
      uStack_2b0 = 0;
      dVar47 = local_2c0;
      dVar41 = local_2a8;
      dVar29 = local_2b8;
      if ((longlong)(int)param_3[1] != 0) {
        lVar22 = *param_3;
        lVar20 = 0;
        do {
          pdVar23 = (double *)(lVar22 + 0x40 + lVar20);
          dVar74 = *pdVar23;
          dVar53 = pdVar23[1];
          dVar48 = dVar48 * dVar74;
          dVar52 = dVar52 * dVar53;
          pdVar23 = (double *)(lVar22 + 0x50 + lVar20);
          local_338._0_8_ = *pdVar23;
          dVar57 = pdVar23[1];
          local_348._0_8_ = dVar64 * (double)local_338._0_8_;
          local_348._8_8_ = dVar57 * 0.0;
          dVar66 = *(double *)(lVar22 + lVar20);
          local_328 = ((double *)(lVar22 + lVar20))[1];
          pdVar23 = (double *)(lVar22 + 0x10 + lVar20);
          dStack_320 = *pdVar23;
          dStack_2f0 = pdVar23[1];
          dVar64 = dVar52 * dVar66 - dVar48 * local_328;
          dVar58 = (double)local_348._0_8_ * local_328 - dVar52 * dStack_320;
          dVar61 = dVar48 * dStack_320 - (double)local_348._0_8_ * dVar66;
          dVar65 = dVar65 * dVar74;
          dVar30 = dVar30 * dVar53;
          local_2d8._0_8_ = dVar40 * (double)local_338._0_8_;
          local_2d8._8_8_ = dVar57 * 0.0;
          dVar75 = dVar30 * dVar66 - dVar65 * local_328;
          dVar78 = (double)local_2d8._0_8_ * local_328 - dVar30 * dStack_320;
          dVar31 = dVar65 * dStack_320 - (double)local_2d8._0_8_ * dVar66;
          dVar78 = dVar78 + dVar78;
          dVar31 = dVar31 + dVar31;
          pdVar23 = (double *)(lVar22 + 0x18 + lVar20);
          dVar38 = *pdVar23;
          dVar40 = *pdVar23;
          local_2e8._0_8_ = dVar38 * dVar78 + dVar65;
          local_2e8._8_8_ = dVar40 * dVar31 + dVar30;
          dVar41 = dVar41 * dVar74;
          dVar29 = dVar29 * dVar53;
          local_338._0_8_ = dVar47 * (double)local_338._0_8_;
          local_338._8_8_ = dVar57 * 0.0;
          dVar53 = dVar29 * dVar66 - dVar41 * local_328;
          dVar57 = (double)local_338._0_8_ * local_328 - dVar29 * dStack_320;
          dVar74 = dVar41 * dStack_320 - dVar66 * (double)local_338._0_8_;
          dVar57 = dVar57 + dVar57;
          dVar74 = dVar74 + dVar74;
          local_318 = dVar38 * dVar57 + dVar41;
          dStack_310 = dVar40 * dVar74 + dVar29;
          dVar58 = dVar58 + dVar58;
          dVar61 = dVar61 + dVar61;
          dVar64 = dVar64 + dVar64;
          dVar75 = dVar75 + dVar75;
          dVar53 = dVar53 + dVar53;
          pdVar23 = (double *)(lVar22 + 0x20 + lVar20);
          dVar65 = *pdVar23;
          dVar30 = pdVar23[1];
          dVar48 = (dVar64 * local_328 - dVar61 * dStack_320) + dVar38 * dVar58 + dVar48 + dVar65;
          dVar52 = (dStack_320 * dVar58 - dVar66 * dVar64) + dVar40 * dVar61 + dVar52 + dVar30;
          dVar65 = (dVar75 * local_328 - dVar31 * dStack_320) + (double)local_2e8._0_8_ + dVar65;
          dVar30 = (dStack_320 * dVar78 - dVar66 * dVar75) + (double)local_2e8._8_8_ + dVar30;
          dVar40 = *(double *)(lVar22 + 0x30 + lVar20);
          dVar64 = dVar64 * dVar38 + (double)local_348._0_8_ +
                   (dVar61 * dVar66 - dVar58 * local_328) + dVar40;
          dVar40 = dVar75 * dVar38 + (double)local_2d8._0_8_ +
                   (dVar31 * dVar66 - dVar78 * local_328) + dVar40;
          dVar47 = dVar53 * dVar38 + (double)local_338._0_8_ +
                   (dVar74 * dVar66 - dVar57 * local_328);
          dVar41 = (dVar53 * local_328 - dVar74 * dStack_320) + local_318;
          dVar29 = (dStack_320 * dVar57 - dVar66 * dVar53) + dStack_310;
          lVar20 = lVar20 + 0x60;
          local_2f8 = (longlong *)dStack_320;
        } while ((longlong)(int)param_3[1] * 0x60 != lVar20);
      }
      local_178[2] = (dVar40 + dVar64) * 0.5;
      local_178[1] = (dVar30 + dVar52) * 0.5;
      local_178[0] = (dVar65 + dVar48) * 0.5;
      dVar40 = dVar40 - dVar64;
      dVar30 = dVar30 - dVar52;
      dVar65 = dVar65 - dVar48;
      dVar64 = SQRT(dVar40 * dVar40 + dVar65 * dVar65 + dVar30 * dVar30);
      local_178[3] = 0.0;
      local_158 = 0.0;
      dStack_150 = 0.0;
      local_148 = 0.0;
      if (0.0 < dVar64) {
        dStack_150 = 1.0 / dVar64;
        local_178[3] = dVar65 * dStack_150;
        local_158 = dVar30 * dStack_150;
        dStack_150 = dVar40 * dStack_150;
        local_148 = dVar64 * 0.5;
      }
      dStack_140 = (SQRT(dVar47 * dVar47 + dVar41 * dVar41 + dVar29 * dVar29) /
                   SQRT(local_2c0 * local_2c0 + local_2a8 * local_2a8 + local_2b8 * local_2b8)) *
                   dStack_140;
      iVar15 = (int)param_1[5];
      *(uint *)(param_1 + 5) = iVar15 + 1U;
      if (*(uint *)((longlong)param_1 + 0x2c) < iVar15 + 1U) {
        FUN_1483b9f98(local_300,iVar15);
      }
      lVar22 = *local_300;
      lVar20 = (longlong)iVar15 * 0x40;
      pdVar23 = (double *)(lVar22 + 0x30 + lVar20);
      *pdVar23 = local_148;
      pdVar23[1] = dStack_140;
      pdVar23 = (double *)(lVar22 + 0x20 + lVar20);
      *pdVar23 = local_158;
      pdVar23[1] = dStack_150;
      pdVar23 = (double *)(lVar22 + 0x10 + lVar20);
      *pdVar23 = local_178[2];
      pdVar23[1] = local_178[3];
      *(double *)(lVar22 + lVar20) = local_178[0];
      ((double *)(lVar22 + lVar20))[1] = local_178[1];
      pdVar26 = pdVar26 + 8;
    } while (pdVar26 != pdVar18);
  }
  iVar15 = (int)plVar25[7];
  iVar19 = (int)param_1[7] + iVar15;
  if (-1 < iVar19) {
    local_348._0_8_ = param_1 + 6;
    if (*(int *)((longlong)param_1 + 0x3c) < iVar19) {
      FUN_1483bec22(param_1 + 6);
      iVar15 = (int)plVar25[7];
    }
    if (iVar15 != 0) {
      lVar22 = local_350[6];
      lVar20 = (longlong)iVar15 * 0x220 + lVar22;
      do {
        iVar15 = (int)param_1[7];
        *(uint *)(param_1 + 7) = iVar15 + 1U;
        if (*(uint *)((longlong)param_1 + 0x3c) < iVar15 + 1U) {
          FUN_1483ba0ee(local_348._0_8_,iVar15);
        }
        FUN_146bff712((longlong)iVar15 * 0x220 + *(longlong *)local_348._0_8_,lVar22);
        if ((longlong)(int)param_3[1] != 0) {
          pdVar26 = (double *)*param_3;
          pdVar18 = pdVar26 + (longlong)(int)param_3[1] * 0xc;
          do {
            local_178[0] = *pdVar26;
            local_178[1] = pdVar26[1];
            local_178[2] = pdVar26[2];
            local_178[3] = pdVar26[3];
            local_158 = pdVar26[4];
            dStack_150 = pdVar26[5];
            local_148 = pdVar26[6];
            dStack_140 = pdVar26[8];
            local_138 = pdVar26[9];
            local_130 = pdVar26[10];
            FUN_146c3cd49((longlong)((int)param_1[7] + -1) * 0x220 + param_1[6],local_178,1);
            pdVar26 = pdVar26 + 0xc;
          } while (pdVar26 != pdVar18);
        }
        lVar22 = lVar22 + 0x220;
      } while (lVar22 != lVar20);
    }
    plVar25 = local_350;
    iVar15 = (int)local_350[9];
    iVar19 = (int)param_1[9] + iVar15;
    if (-1 < iVar19) {
      local_2f8 = param_1 + 8;
      if (*(int *)((longlong)param_1 + 0x4c) < iVar19) {
        FUN_1483bec92(local_2f8);
        iVar15 = (int)plVar25[9];
      }
      if (iVar15 != 0) {
        plVar25 = (longlong *)plVar25[8];
        plVar27 = plVar25 + (longlong)iVar15 * 0x12;
        local_350 = plVar27;
        do {
          iVar15 = (int)param_1[9];
          *(uint *)(param_1 + 9) = iVar15 + 1U;
          if (*(uint *)((longlong)param_1 + 0x4c) < iVar15 + 1U) {
            FUN_1483bea4e(local_2f8,iVar15);
          }
          FUN_1483beb90((longlong)iVar15 * 0x90 + param_1[8],plVar25);
          auVar54 = _DAT_149934d80;
          lVar22 = param_1[8];
          lVar20 = (longlong)((int)param_1[9] + -1) * 0x90;
          pdVar26 = (double *)(lVar22 + lVar20);
          dVar40 = (double)*(float *)(lVar22 + 0x80 + lVar20);
          dVar64 = dVar40 * -0.5;
          local_318 = DAT_14c846520;
          dStack_310 = 0.0;
          local_328 = DAT_14c846518;
          dStack_320 = 0.0;
          local_338._8_8_ = 0;
          local_338._0_8_ = DAT_14c846510;
          dVar40 = dVar40 * 0.5;
          local_348 = *(undefined1 (*) [16])(lVar22 + 0x40 + lVar20);
          auVar62 = *(undefined1 (*) [16])(lVar22 + 0x50 + lVar20);
          auVar67 = minpd(local_348,_DAT_149934d80);
          auVar43 = minpd(auVar62,ZEXT816(0x3ff0000000000000));
          auVar69._8_8_ = -(ulonglong)(auVar67._8_8_ < 0.0);
          auVar69._0_8_ = -(ulonglong)(auVar67._0_8_ < 0.0);
          iVar15 = movmskpd((int)lVar20,auVar69);
          auVar39._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
          auVar39._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
          uVar14 = movmskpd((int)lVar22,auVar39);
          auVar43 = ZEXT816(0x3ff0000000000000) << 0x40;
          local_2e8 = auVar43;
          if ((uVar14 & 0x3fffffff) == 0 && iVar15 == 0) {
            dVar47 = pdVar26[4];
            dVar38 = pdVar26[5];
            dVar48 = *pdVar26 * 0.0;
            dVar52 = pdVar26[1] * 0.0;
            dVar65 = pdVar26[2] * 0.0;
            dVar30 = pdVar26[3] * 0.0;
            dVar41 = dVar30 * 1.0;
            dVar29 = dVar65 * -1.0;
            dVar65 = dVar52 * -1.0 + *pdVar26 + dVar41 + dVar65;
            dVar30 = dVar48 * 1.0 + pdVar26[1] + dVar29 + dVar30;
            auVar54._0_8_ = ((dVar52 * 1.0 + pdVar26[2]) - dVar48) + dVar41;
            auVar54._8_8_ = ((dVar48 * -1.0 + pdVar26[3]) - dVar52) + dVar29;
            dVar58 = pdVar26[6] * 1.0;
            dVar61 = pdVar26[7] * 0.0;
            dVar41 = dVar38 * 0.0 - dVar47 * 0.0;
            dVar74 = dVar58 * 0.0 - dVar38 * 0.0;
            dVar48 = dVar47 * 0.0 - dVar58 * 0.0;
            dVar52 = dVar61 * 1.0 - dVar61 * 1.0;
            dVar74 = dVar74 + dVar74;
            dVar48 = dVar48 + dVar48;
            dVar41 = dVar41 + dVar41;
            dVar52 = dVar52 + dVar52;
            dVar29 = dVar64 * DAT_14c846510 + (dVar41 * 0.0 - dVar48 * 0.0) + dVar47 + dVar74;
            dVar47 = DAT_14c846518 * dVar64 + (dVar74 * 0.0 - dVar41 * 0.0) + dVar38 + dVar48;
            dVar41 = DAT_14c846520 * dVar64 + (dVar48 * 0.0 - dVar74 * 0.0) + dVar58 + dVar41;
            dVar52 = (dVar52 * 1.0 - dVar52 * 1.0) + dVar61 + dVar52 + 0.0;
            pdVar18 = (double *)0x0;
            dVar48 = (double)local_348._0_8_;
            dVar64 = (double)local_348._8_8_;
          }
          else {
            local_1f8 = 1.0;
            dStack_1f0 = 0.0;
            local_1e8 = 0.0;
            uStack_1e0 = 0;
            local_1b8 = 0.0;
            dStack_1b0 = 0.0;
            local_1c8 = 0.0;
            uStack_1c0 = 0;
            local_1a8 = 1.0;
            uStack_1a0 = 0;
            local_198._8_8_ = DAT_14c846518 * dVar64;
            local_198._0_8_ = dVar64 * DAT_14c846510;
            uStack_180 = 0x3ff0000000000000;
            dVar52 = *pdVar26;
            dVar41 = pdVar26[1];
            dVar29 = pdVar26[2];
            local_268 = pdVar26[8];
            local_258 = pdVar26[9];
            dStack_230 = pdVar26[10];
            dVar47 = dVar41 + dVar41;
            dVar65 = dVar29 + dVar29;
            dVar48 = dVar52 * (dVar52 + dVar52);
            local_278 = ((double)DAT_149934d80 - (dVar29 * dVar65 + dVar41 * dVar47)) * local_268;
            dStack_250 = (DAT_149934d80._8_8_ - (dVar29 * dVar65 + dVar48)) * local_258;
            local_228 = (1.0 - (dVar48 + dVar41 * dVar47)) * dStack_230;
            dVar48 = pdVar26[3];
            dVar29 = dVar65 * dVar48;
            dVar30 = (dVar52 + dVar52) * pdVar26[3];
            dVar48 = dVar47 * dVar48;
            dStack_270 = (dVar47 * dVar52 + dVar29) * local_268;
            local_248 = (dVar65 * dVar41 + dVar30) * local_258;
            local_238 = (dVar48 + *pdVar26 * dVar65) * dStack_230;
            local_268 = (*pdVar26 * dVar65 - dVar48) * local_268;
            local_258 = (dVar47 * dVar52 - dVar29) * local_258;
            dStack_230 = (dVar65 * dVar41 - dVar30) * dStack_230;
            uStack_260 = 0;
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = pdVar26[4];
            dStack_210 = pdVar26[5];
            local_208 = pdVar26[6];
            uStack_200 = 0x3ff0000000000000;
            auStack_1d8 = auVar43;
            local_188 = DAT_14c846520 * dVar64;
            FUN_1447fea8d(local_178,&local_278,&local_1f8);
            FUN_144a1c686(local_178,0x3e45798ee0000000);
            dVar48 = (double)local_348._0_8_;
            dVar64 = (double)local_348._8_8_;
            auVar32._8_8_ = -(ulonglong)(0.0 <= (double)local_348._8_8_);
            auVar32._0_8_ = -(ulonglong)(0.0 <= (double)local_348._0_8_);
            auVar39 = blendvpd(_DAT_149936790,auVar54,auVar32);
            uVar28 = -(ulonglong)(0.0 <= auVar62._0_8_ * 1.0);
            dVar52 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
            dVar41 = auVar39._0_8_;
            local_178[2] = local_178[2] * dVar41;
            local_178[1] = local_178[1] * dVar41;
            local_178[0] = local_178[0] * dVar41;
            dVar41 = auVar39._8_8_;
            local_148 = local_148 * dVar41;
            dStack_150 = dStack_150 * dVar41;
            local_158 = dVar41 * local_158;
            local_128 = local_128 * dVar52;
            local_130 = local_130 * dVar52;
            local_138 = dVar52 * local_138;
            pdVar18 = &local_298;
            FUN_14481fd10(pdVar18,local_178);
            dVar52 = local_288 * local_288 + local_298 * local_298;
            dVar41 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar49._0_8_ = dVar52 + dVar41;
            auVar49._8_8_ = dVar52 + dVar41;
            auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar49._8_8_);
            auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar49._0_8_);
            auVar39 = sqrtpd(auVar49,auVar49);
            auVar54 = divpd(auVar54,auVar39);
            auVar55._0_8_ = auVar54._0_8_ * local_288;
            auVar55._8_8_ = auVar54._8_8_ * dStack_280;
            dVar65 = (double)((ulonglong)(local_298 * auVar54._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar49._0_8_));
            dVar30 = (double)((ulonglong)(dStack_290 * auVar54._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar49._8_8_));
            auVar54 = blendvpd(auVar43,auVar55,auVar33);
            dVar52 = 0.0;
            dVar41 = local_108;
            dVar29 = local_118;
            dVar47 = dStack_110;
          }
          dVar61 = auVar62._0_8_ * 1.0;
          dVar74 = auVar62._8_8_ * 0.0;
          uVar16 = SUB84(pdVar18,0);
          uVar73 = local_338._12_4_;
          dVar38 = local_338._0_8_ * dVar40;
          *pdVar26 = dVar65;
          pdVar26[1] = dVar30;
          *(undefined1 (*) [16])(pdVar26 + 2) = auVar54;
          pdVar26[4] = dVar29;
          pdVar26[5] = dVar47;
          pdVar26[6] = dVar41;
          pdVar26[7] = dVar52;
          pdVar26[8] = dVar48;
          pdVar26[9] = dVar64;
          auVar43._8_4_ = SUB84(dVar74,0);
          auVar43._0_8_ = dVar61;
          auVar43._12_4_ = (int)((ulonglong)dVar74 >> 0x20);
          *(undefined1 (*) [16])(pdVar26 + 10) = auVar43;
          iVar15 = (int)param_3[1];
          lVar22 = (longlong)iVar15;
          dVar58 = local_328 * dVar40;
          dVar53 = local_318 * dVar40;
          if (lVar22 != 0) {
            local_338._8_4_ = local_338._8_4_;
            local_338._0_8_ = dVar38;
            local_338._12_4_ = uVar73;
            lVar20 = *param_3;
            uVar28 = lVar22 * 0x20;
            lVar21 = 0;
            local_328 = local_328 * dVar40;
            local_318 = local_318 * dVar40;
            do {
              auVar39 = _DAT_149934d80;
              auVar62 = *(undefined1 (*) [16])(lVar20 + 0x40 + lVar21);
              dVar40 = auVar62._0_8_;
              dVar58 = auVar62._8_8_;
              auVar43 = *(undefined1 (*) [16])(lVar20 + 0x50 + lVar21);
              dVar38 = auVar43._0_8_;
              auVar67._8_8_ = dVar64;
              auVar67._0_8_ = dVar48;
              auVar62 = minpd(auVar67,auVar62);
              auVar68._8_8_ = dVar74;
              auVar68._0_8_ = dVar61;
              auVar69 = minpd(auVar68,auVar43);
              auVar63._8_8_ = -(ulonglong)(auVar62._8_8_ < 0.0);
              auVar63._0_8_ = -(ulonglong)(auVar62._0_8_ < 0.0);
              uVar14 = movmskpd((int)uVar28,auVar63);
              uVar28 = (ulonglong)uVar14;
              auVar70._8_8_ = -(ulonglong)(auVar69._8_8_ < 0.0);
              auVar70._0_8_ = -(ulonglong)(auVar69._0_8_ < 0.0);
              uVar17 = movmskpd((int)pdVar18,auVar70);
              dVar53 = auVar54._8_8_;
              if ((uVar17 & 0x3fffffff) == 0 && uVar14 == 0) {
                dVar10 = *(double *)(lVar20 + lVar21);
                dVar11 = ((double *)(lVar20 + lVar21))[1];
                pdVar18 = (double *)(lVar20 + 0x10 + lVar21);
                dVar12 = *pdVar18;
                dVar13 = pdVar18[1];
                pdVar18 = (double *)(lVar20 + 0x18 + lVar21);
                dVar66 = *pdVar18;
                dVar57 = *pdVar18;
                dVar76 = auVar54._0_8_;
                local_2d8._8_4_ = SUB84(dVar74,0);
                local_2d8._0_8_ = dVar61;
                local_2d8._12_4_ = (int)((ulonglong)dVar74 >> 0x20);
                dVar74 = *(double *)(lVar20 + lVar21);
                dVar31 = *(double *)(lVar20 + lVar21);
                auVar9._8_4_ = SUB84(dVar64,0);
                auVar9._0_8_ = dVar48;
                auVar9._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
                dVar5 = dVar74 * dVar30;
                dVar6 = dVar31 * dVar65;
                pdVar18 = (double *)(lVar20 + 8 + lVar21);
                dVar64 = *pdVar18;
                dVar75 = *pdVar18;
                dVar42 = dVar65 * dVar64;
                dVar45 = dVar30 * dVar75;
                pdVar18 = (double *)(lVar20 + 0x10 + lVar21);
                dVar1 = *pdVar18;
                dVar78 = *pdVar18;
                dVar46 = dVar65 * dVar78;
                dVar65 = dVar30 * dVar1 * -1.0 +
                         dVar76 * dVar64 + dVar53 * dVar74 * 1.0 + dVar65 * dVar66;
                dVar30 = dVar46 * 1.0 + dVar53 * dVar75 + dVar76 * dVar31 * -1.0 + dVar30 * dVar57;
                dVar29 = dVar29 * dVar40;
                dVar47 = dVar47 * dVar58;
                dVar41 = dVar41 * dVar38;
                dVar52 = dVar52 * auVar43._8_8_;
                dVar75 = dVar47 * dVar10 - dVar29 * dVar11;
                dVar46 = dVar41 * dVar11 - dVar47 * dVar12;
                dVar74 = dVar29 * dVar12 - dVar41 * dVar10;
                dVar31 = dVar52 * dVar13 - dVar52 * dVar13;
                dVar46 = dVar46 + dVar46;
                dVar74 = dVar74 + dVar74;
                dVar75 = dVar75 + dVar75;
                dVar31 = dVar31 + dVar31;
                local_348._8_8_ = auVar9._8_8_;
                dVar64 = (double)local_348._8_8_ * dVar58;
                local_348._8_8_ = dVar64;
                local_348._0_8_ = dVar48 * dVar40;
                pdVar18 = (double *)(lVar20 + 0x20 + lVar21);
                dVar29 = (dVar75 * dVar11 - dVar12 * dVar74) + dVar66 * dVar46 + dVar29 + *pdVar18;
                dVar47 = (dVar46 * dVar12 - dVar75 * dVar10) + dVar57 * dVar74 + dVar47 + pdVar18[1]
                ;
                pdVar18 = (double *)(lVar20 + 0x30 + lVar21);
                dVar41 = (dVar74 * dVar10 - dVar11 * dVar46) + dVar66 * dVar75 + dVar41 + *pdVar18;
                dVar52 = (dVar31 * dVar13 - dVar31 * dVar13) + dVar57 * dVar31 + dVar52 + pdVar18[1]
                ;
                auVar54._8_8_ = dVar76 * dVar78 * -1.0 + ((dVar6 * -1.0 + dVar53 * dVar57) - dVar45)
                ;
                auVar54._0_8_ = dVar53 * dVar1 * 1.0 + ((dVar5 * 1.0 + dVar76 * dVar66) - dVar42);
                pdVar18 = (double *)0x0;
                dVar74 = (double)local_2d8._8_8_;
              }
              else {
                dVar64 = dVar64 * dVar58;
                dVar41 = *(double *)(lVar20 + lVar21);
                dVar29 = ((double *)(lVar20 + lVar21))[1];
                dVar65 = *(double *)(lVar20 + 0x10 + lVar21);
                dVar30 = dVar29 + dVar29;
                dVar47 = dVar65 + dVar65;
                dVar66 = dVar41 * (dVar41 + dVar41);
                local_1f8 = ((double)DAT_149934d80 - (dVar65 * dVar47 + dVar29 * dVar30)) * dVar40;
                local_1a8 = (1.0 - (dVar66 + dVar29 * dVar30)) * dVar38;
                dVar31 = *(double *)(lVar20 + lVar21) * dVar47;
                pdVar18 = (double *)(lVar20 + 0x18 + lVar21);
                dVar52 = *pdVar18;
                dVar53 = dVar47 * dVar52;
                dVar57 = (dVar41 + dVar41) * *pdVar18;
                dVar52 = dVar30 * dVar52;
                dStack_1f0 = (dVar30 * dVar41 + dVar53) * dVar40;
                local_1c8 = (dVar47 * dVar29 + dVar57) * dVar58;
                local_1b8 = (dVar52 + dVar31) * dVar38;
                dStack_1b0 = (dVar47 * dVar29 - dVar57) * dVar38;
                local_1e8 = (dVar31 - dVar52) * dVar40;
                uStack_1e0 = 0;
                auStack_1d8._8_8_ = (DAT_149934d80._8_8_ - (dVar65 * dVar47 + dVar66)) * dVar58;
                auStack_1d8._0_8_ = (dVar30 * dVar41 - dVar53) * dVar58;
                uStack_1c0 = 0;
                uStack_1a0 = 0;
                local_198 = *(undefined1 (*) [16])(lVar20 + 0x20 + lVar21);
                local_188 = *(double *)(lVar20 + 0x30 + lVar21);
                uStack_180 = 0x3ff0000000000000;
                dVar41 = *pdVar26;
                dVar29 = pdVar26[1];
                dVar52 = pdVar26[2];
                local_268 = pdVar26[8];
                local_258 = pdVar26[9];
                dStack_230 = pdVar26[10];
                dVar58 = dVar29 + dVar29;
                dVar65 = dVar52 + dVar52;
                dVar30 = dVar41 * (dVar41 + dVar41);
                local_278 = ((double)DAT_149934d80 - (dVar52 * dVar65 + dVar29 * dVar58)) *
                            local_268;
                dStack_250 = (DAT_149934d80._8_8_ - (dVar52 * dVar65 + dVar30)) * local_258;
                local_228 = (1.0 - (dVar30 + dVar29 * dVar58)) * dStack_230;
                dVar52 = pdVar26[3];
                dVar30 = dVar65 * dVar52;
                dVar47 = (dVar41 + dVar41) * pdVar26[3];
                dVar52 = dVar58 * dVar52;
                dStack_270 = (dVar58 * dVar41 + dVar30) * local_268;
                local_248 = (dVar65 * dVar29 + dVar47) * local_258;
                local_238 = (dVar52 + *pdVar26 * dVar65) * dStack_230;
                local_268 = (*pdVar26 * dVar65 - dVar52) * local_268;
                local_258 = (dVar58 * dVar41 - dVar30) * local_258;
                dStack_230 = (dVar65 * dVar29 - dVar47) * dStack_230;
                uStack_260 = 0;
                uStack_240 = 0;
                uStack_220 = 0;
                local_218 = pdVar26[4];
                dStack_210 = pdVar26[5];
                local_208 = pdVar26[6];
                uStack_200 = 0x3ff0000000000000;
                FUN_1447fea8d(local_178,&local_278,&local_1f8);
                FUN_144a1c686(local_178,0x3e45798ee0000000);
                auVar34._8_8_ = -(ulonglong)(0.0 <= dVar64);
                auVar34._0_8_ = -(ulonglong)(0.0 <= dVar48 * dVar40);
                auVar62 = blendvpd(_DAT_149936790,auVar39,auVar34);
                uVar28 = -(ulonglong)(0.0 <= dVar61 * dVar38);
                dVar52 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
                dVar41 = auVar62._0_8_;
                local_178[2] = local_178[2] * dVar41;
                local_178[1] = local_178[1] * dVar41;
                local_178[0] = local_178[0] * dVar41;
                dVar41 = auVar62._8_8_;
                local_148 = local_148 * dVar41;
                dStack_150 = dStack_150 * dVar41;
                local_158 = dVar41 * local_158;
                local_128 = local_128 * dVar52;
                local_130 = local_130 * dVar52;
                local_138 = dVar52 * local_138;
                pdVar18 = &local_298;
                uVar28 = FUN_14481fd10(pdVar18,local_178);
                dVar52 = local_288 * local_288 + local_298 * local_298;
                dVar41 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                auVar50._0_8_ = dVar52 + dVar41;
                auVar50._8_8_ = dVar52 + dVar41;
                auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_);
                auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_);
                auVar62 = sqrtpd(auVar50,auVar50);
                auVar62 = divpd(auVar39,auVar62);
                auVar56._0_8_ = auVar62._0_8_ * local_288;
                auVar56._8_8_ = auVar62._8_8_ * dStack_280;
                dVar65 = (double)((ulonglong)(local_298 * auVar62._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_));
                dVar30 = (double)((ulonglong)(dStack_290 * auVar62._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_));
                auVar54 = blendvpd(local_2e8,auVar56,auVar35);
                dVar52 = 0.0;
                dVar41 = local_108;
                dVar29 = local_118;
                dVar47 = dStack_110;
              }
              dVar61 = dVar61 * dVar38;
              dVar48 = dVar48 * dVar40;
              dVar74 = dVar74 * auVar43._8_8_;
              uVar16 = SUB84(pdVar18,0);
              iVar15 = (int)uVar28;
              *pdVar26 = dVar65;
              pdVar26[1] = dVar30;
              *(undefined1 (*) [16])(pdVar26 + 2) = auVar54;
              pdVar26[4] = dVar29;
              pdVar26[5] = dVar47;
              pdVar26[6] = dVar41;
              pdVar26[7] = dVar52;
              auVar7._8_4_ = SUB84(dVar64,0);
              auVar7._0_8_ = dVar48;
              auVar7._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
              *(undefined1 (*) [16])(pdVar26 + 8) = auVar7;
              auVar3._8_4_ = SUB84(dVar74,0);
              auVar3._0_8_ = dVar61;
              auVar3._12_4_ = (int)((ulonglong)dVar74 >> 0x20);
              *(undefined1 (*) [16])(pdVar26 + 10) = auVar3;
              lVar21 = lVar21 + 0x60;
            } while (lVar22 * 0x60 != lVar21);
            auVar71._8_8_ = dVar64;
            auVar71._0_8_ = dVar48;
            auVar67 = minpd(auVar71,_DAT_149934d80);
            plVar27 = local_350;
            dVar38 = (double)local_338._0_8_;
            dVar58 = local_328;
            dVar53 = local_318;
          }
          auVar43 = local_2e8;
          auVar62 = _DAT_149934d80;
          auVar59._8_8_ = dVar74;
          auVar59._0_8_ = dVar61;
          auVar39 = minpd(auVar59,ZEXT816(0x3ff0000000000000));
          auVar72._8_8_ = -(ulonglong)(auVar67._8_8_ < 0.0);
          auVar72._0_8_ = -(ulonglong)(auVar67._0_8_ < 0.0);
          iVar15 = movmskpd(iVar15,auVar72);
          auVar60._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
          auVar60._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
          uVar14 = movmskpd(uVar16,auVar60);
          if ((uVar14 & 0x3fffffff) == 0 && iVar15 == 0) {
            dVar66 = auVar54._0_8_ * 0.0;
            dVar31 = auVar54._8_8_ * 0.0;
            dVar75 = dVar65 * 0.0;
            dVar78 = dVar30 * 0.0;
            dVar40 = dVar31 * 1.0;
            dVar57 = dVar66 * -1.0;
            dVar66 = dVar78 * -1.0 + dVar65 + dVar40 + dVar66;
            dVar31 = dVar75 * 1.0 + dVar30 + dVar57 + dVar31;
            auVar77._0_8_ = ((dVar78 * 1.0 + auVar54._0_8_) - dVar75) + dVar40;
            auVar77._8_8_ = ((dVar75 * -1.0 + auVar54._8_8_) - dVar78) + dVar57;
            dVar41 = dVar41 * 1.0;
            dVar52 = dVar52 * 0.0;
            dVar40 = dVar47 * 0.0 - dVar29 * 0.0;
            dVar65 = dVar41 * 0.0 - dVar47 * 0.0;
            dVar30 = dVar29 * 0.0 - dVar41 * 0.0;
            dVar57 = dVar52 * 1.0 - dVar52 * 1.0;
            dVar65 = dVar65 + dVar65;
            dVar30 = dVar30 + dVar30;
            dVar40 = dVar40 + dVar40;
            dVar57 = dVar57 + dVar57;
            dVar38 = dVar38 + (dVar40 * 0.0 - dVar30 * 0.0) + dVar29 + dVar65;
            dVar58 = dVar58 + (dVar65 * 0.0 - dVar40 * 0.0) + dVar47 + dVar30;
            dVar53 = dVar53 + (dVar30 * 0.0 - dVar65 * 0.0) + dVar41 + dVar40;
            dVar40 = (dVar57 * 1.0 - dVar57 * 1.0) + dVar52 + dVar57 + 0.0;
          }
          else {
            local_1f8 = 1.0;
            dStack_1f0 = 0.0;
            local_1e8 = 0.0;
            uStack_1e0 = 0;
            auStack_1d8 = local_2e8;
            local_1b8 = 0.0;
            dStack_1b0 = 0.0;
            local_1c8 = 0.0;
            uStack_1c0 = 0;
            local_1a8 = 1.0;
            uStack_1a0 = 0;
            local_198._8_4_ = SUB84(dVar58,0);
            local_198._0_8_ = dVar38;
            local_198._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
            uStack_180 = 0x3ff0000000000000;
            dVar52 = *pdVar26;
            dVar41 = pdVar26[1];
            dVar40 = pdVar26[2];
            local_268 = pdVar26[8];
            local_258 = pdVar26[9];
            dStack_230 = pdVar26[10];
            dVar47 = dVar41 + dVar41;
            dVar29 = dVar40 + dVar40;
            dVar65 = dVar52 * (dVar52 + dVar52);
            local_278 = ((double)DAT_149934d80 - (dVar40 * dVar29 + dVar41 * dVar47)) * local_268;
            dStack_250 = (DAT_149934d80._8_8_ - (dVar40 * dVar29 + dVar65)) * local_258;
            local_228 = (1.0 - (dVar65 + dVar41 * dVar47)) * dStack_230;
            dVar40 = pdVar26[3];
            dVar65 = dVar29 * dVar40;
            dVar30 = (dVar52 + dVar52) * pdVar26[3];
            dVar40 = dVar47 * dVar40;
            dStack_270 = (dVar47 * dVar52 + dVar65) * local_268;
            local_248 = (dVar29 * dVar41 + dVar30) * local_258;
            local_238 = (dVar40 + *pdVar26 * dVar29) * dStack_230;
            local_268 = (*pdVar26 * dVar29 - dVar40) * local_268;
            local_258 = (dVar47 * dVar52 - dVar65) * local_258;
            dStack_230 = (dVar29 * dVar41 - dVar30) * dStack_230;
            uStack_260 = 0;
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = pdVar26[4];
            dStack_210 = pdVar26[5];
            local_208 = pdVar26[6];
            uStack_200 = 0x3ff0000000000000;
            local_188 = dVar53;
            FUN_1447fea8d(local_178,&local_278,&local_1f8);
            FUN_144a1c686(local_178,0x3e45798ee0000000);
            auVar36._8_8_ = -(ulonglong)(0.0 <= dVar64);
            auVar36._0_8_ = -(ulonglong)(0.0 <= dVar48);
            auVar54 = blendvpd(_DAT_149936790,auVar62,auVar36);
            uVar28 = -(ulonglong)(0.0 <= dVar61 * 1.0);
            dVar40 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
            dVar52 = auVar54._0_8_;
            local_178[2] = local_178[2] * dVar52;
            local_178[1] = local_178[1] * dVar52;
            local_178[0] = local_178[0] * dVar52;
            dVar52 = auVar54._8_8_;
            local_148 = local_148 * dVar52;
            dStack_150 = dStack_150 * dVar52;
            local_158 = dVar52 * local_158;
            local_128 = local_128 * dVar40;
            local_130 = local_130 * dVar40;
            local_138 = dVar40 * local_138;
            FUN_14481fd10(&local_298,local_178);
            dVar40 = local_288 * local_288 + local_298 * local_298;
            dVar52 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar44._0_8_ = dVar40 + dVar52;
            auVar44._8_8_ = dVar40 + dVar52;
            auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
            auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
            auVar54 = sqrtpd(auVar44,auVar44);
            auVar62 = divpd(auVar62,auVar54);
            auVar51._0_8_ = auVar62._0_8_ * local_288;
            auVar51._8_8_ = auVar62._8_8_ * dStack_280;
            dVar66 = (double)((ulonglong)(local_298 * auVar62._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_));
            dVar31 = (double)((ulonglong)(dStack_290 * auVar62._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_));
            auVar77 = blendvpd(auVar43,auVar51,auVar37);
            dVar40 = 0.0;
            dVar38 = local_118;
            dVar58 = dStack_110;
            dVar53 = local_108;
          }
          *pdVar26 = dVar66;
          pdVar26[1] = dVar31;
          *(undefined1 (*) [16])(pdVar26 + 2) = auVar77;
          auVar2._8_4_ = SUB84(dVar58,0);
          auVar2._0_8_ = dVar38;
          auVar2._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
          *(undefined1 (*) [16])(pdVar26 + 4) = auVar2;
          pdVar26[6] = dVar53;
          pdVar26[7] = dVar40;
          auVar8._8_4_ = SUB84(dVar64,0);
          auVar8._0_8_ = dVar48;
          auVar8._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
          *(undefined1 (*) [16])(pdVar26 + 8) = auVar8;
          auVar4._8_4_ = SUB84(dVar74 * 0.0,0);
          auVar4._0_8_ = dVar61 * 1.0;
          auVar4._12_4_ = (int)((ulonglong)(dVar74 * 0.0) >> 0x20);
          *(undefined1 (*) [16])(pdVar26 + 10) = auVar4;
          plVar25 = plVar25 + 0x12;
        } while (plVar25 != plVar27);
      }
      if ((local_f0 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar19);
}



// FUNCTION 14839255e FUN_14839255e body=7531 status=ok
// SIG undefined FUN_14839255e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14839255e(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  longlong lVar19;
  double *pdVar20;
  int iVar21;
  double *pdVar22;
  double *pdVar23;
  longlong lVar24;
  longlong lVar25;
  double *pdVar26;
  longlong lVar27;
  ulonglong uVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar37;
  undefined1 auVar36 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar47;
  undefined1 auVar45 [16];
  double dVar48;
  double dVar49;
  double dVar57;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar64;
  double dVar65;
  double dVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  double dVar70;
  double dVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined4 uVar76;
  undefined1 auStack_368 [32];
  undefined1 local_348 [24];
  longlong local_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [24];
  longlong *local_300;
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  undefined8 uStack_2d0;
  double local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8 [16];
  longlong local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178 [4];
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  local_348._0_8_ = param_2;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    pdVar20 = (double *)*param_2;
    pdVar26 = pdVar20 + (longlong)*(int *)(param_2 + 1) * 4;
    do {
      dVar69 = *pdVar20;
      dVar29 = pdVar20[1];
      dVar48 = pdVar20[2];
      dVar65 = pdVar20[3];
      lVar19 = *(longlong *)(param_3 + 0xa0);
      if (*(longlong *)(param_3 + 0xa0) == 0) {
        lVar19 = param_3;
      }
      if ((longlong)*(int *)(param_3 + 0xa8) != 0) {
        lVar25 = (longlong)*(int *)(param_3 + 0xa8) * 0x50;
        do {
          local_1e8 = dVar48 * *(double *)(lVar19 + 0x48);
          dStack_1f0 = dVar29 * *(double *)(lVar19 + 0x40);
          local_1f8 = dVar69 * *(double *)(lVar19 + 0x38);
          FUN_146bed047(local_178,lVar19,&local_1f8);
          dVar48 = local_178[2] + *(double *)(lVar19 + 0x30);
          dVar29 = local_178[1] + *(double *)(lVar19 + 0x28);
          dVar69 = local_178[0] + *(double *)(lVar19 + 0x20);
          dVar49 = ABS(*(double *)(lVar19 + 0x38));
          if (ABS(*(double *)(lVar19 + 0x40)) <= ABS(*(double *)(lVar19 + 0x38))) {
            dVar49 = ABS(*(double *)(lVar19 + 0x40));
          }
          if (ABS(*(double *)(lVar19 + 0x48)) <= dVar49) {
            dVar49 = ABS(*(double *)(lVar19 + 0x48));
          }
          dVar65 = dVar65 * dVar49;
          lVar19 = lVar19 + 0x50;
          lVar25 = lVar25 + -0x50;
        } while (lVar25 != 0);
      }
      iVar14 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar14 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar14 + 1U) {
        FUN_1483b9e7e(param_1,iVar14);
      }
      lVar19 = *param_1;
      lVar25 = (longlong)iVar14 * 0x20;
      *(double *)(lVar19 + lVar25) = dVar69;
      *(double *)(lVar19 + 8 + lVar25) = dVar29;
      *(double *)(lVar19 + 0x10 + lVar25) = dVar48;
      *(double *)(lVar19 + 0x18 + lVar25) = dVar65;
      pdVar20 = pdVar20 + 4;
    } while (pdVar20 != pdVar26);
  }
  local_330 = param_3;
  if ((longlong)*(int *)(local_348._0_8_ + 0x18) != 0) {
    pdVar20 = *(double **)(local_348._0_8_ + 0x10);
    pdVar26 = pdVar20 + (longlong)*(int *)(local_348._0_8_ + 0x18) * 10;
    do {
      pdVar22 = pdVar20;
      pdVar23 = local_178;
      for (lVar19 = 10; lVar19 != 0; lVar19 = lVar19 + -1) {
        *pdVar23 = *pdVar22;
        pdVar22 = pdVar22 + 1;
        pdVar23 = pdVar23 + 1;
      }
      lVar19 = *(longlong *)(local_330 + 0xa0);
      if (*(longlong *)(local_330 + 0xa0) == 0) {
        lVar19 = local_330;
      }
      if ((longlong)*(int *)(local_330 + 0xa8) != 0) {
        lVar25 = (longlong)*(int *)(local_330 + 0xa8) * 0x50;
        do {
          local_268 = *(double *)(lVar19 + 0x48) * local_178[2];
          dStack_270 = *(double *)(lVar19 + 0x40) * local_178[1];
          local_278 = *(double *)(lVar19 + 0x38) * local_178[0];
          FUN_146bed047(&local_1f8,lVar19,&local_278);
          local_178[2] = local_1e8 + *(double *)(lVar19 + 0x30);
          local_178[1] = dStack_1f0 + *(double *)(lVar19 + 0x28);
          local_178[0] = local_1f8 + *(double *)(lVar19 + 0x20);
          FUN_1482ff674(local_178,lVar19);
          dStack_140 = *(double *)(lVar19 + 0x38) * dStack_140;
          local_138 = *(double *)(lVar19 + 0x40) * local_138;
          local_130 = *(double *)(lVar19 + 0x48) * local_130;
          lVar19 = lVar19 + 0x50;
          lVar25 = lVar25 + -0x50;
        } while (lVar25 != 0);
      }
      iVar14 = (int)param_1[3];
      *(uint *)(param_1 + 3) = iVar14 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar14 + 1U) {
        FUN_1483b9f04(param_1 + 2,iVar14);
      }
      pdVar22 = local_178;
      pdVar23 = (double *)((longlong)iVar14 * 0x50 + param_1[2]);
      for (lVar19 = 10; lVar19 != 0; lVar19 = lVar19 + -1) {
        *pdVar23 = *pdVar22;
        pdVar22 = pdVar22 + 1;
        pdVar23 = pdVar23 + 1;
      }
      pdVar20 = pdVar20 + 10;
    } while (pdVar20 != pdVar26);
  }
  if ((longlong)*(int *)(local_348._0_8_ + 0x28) != 0) {
    pdVar20 = *(double **)(local_348._0_8_ + 0x20);
    pdVar26 = pdVar20 + (longlong)*(int *)(local_348._0_8_ + 0x28) * 8;
    local_318._0_8_ = param_1 + 4;
    do {
      local_1f8 = *pdVar20;
      dStack_1f0 = pdVar20[1];
      local_1e8 = pdVar20[2];
      local_178[3] = pdVar20[3];
      local_158 = pdVar20[4];
      dStack_150 = pdVar20[5];
      local_148 = pdVar20[6];
      dVar65 = pdVar20[7];
      dVar49 = local_1e8 - dStack_150 * local_148;
      dVar69 = dStack_1f0 - local_158 * local_148;
      dVar60 = local_1f8 - local_148 * local_178[3];
      dVar70 = dStack_150 * local_148 + local_1e8;
      dVar48 = local_158 * local_148 + dStack_1f0;
      dVar29 = local_148 * local_178[3] + local_1f8;
      uStack_1e0 = 0;
      auStack_1d8 = ZEXT816(0);
      local_1c8 = 1.0;
      local_268 = DAT_14c8463c8;
      local_278 = DAT_14c8463b8;
      dStack_270 = DAT_14c8463c0;
      local_178[0] = local_1f8;
      local_178[1] = dStack_1f0;
      local_178[2] = local_1e8;
      dStack_140 = dVar65;
      FUN_146bfb7f2(&uStack_1e0,&local_278,local_178 + 3);
      local_288 = 0.0;
      local_298 = dVar65;
      dStack_290 = dVar65;
      FUN_146bed047(&local_278,&uStack_1e0,&local_298);
      local_2e8 = (local_268 + local_1e8) - local_1e8;
      local_328 = (dStack_270 + dStack_1f0) - dStack_1f0;
      dVar65 = (local_278 + local_1f8) - local_1f8;
      lVar19 = *(longlong *)(local_330 + 0xa0);
      if (*(longlong *)(local_330 + 0xa0) == 0) {
        lVar19 = local_330;
      }
      dVar46 = local_2e8;
      dVar57 = local_328;
      dVar39 = dVar65;
      if ((longlong)*(int *)(local_330 + 0xa8) != 0) {
        lVar25 = (longlong)*(int *)(local_330 + 0xa8) * 0x50;
        do {
          local_288 = dVar49 * *(double *)(lVar19 + 0x48);
          dStack_290 = dVar69 * *(double *)(lVar19 + 0x40);
          local_298 = dVar60 * *(double *)(lVar19 + 0x38);
          FUN_146bed047(&local_278,lVar19,&local_298);
          dVar49 = local_268 + *(double *)(lVar19 + 0x30);
          dVar69 = dStack_270 + *(double *)(lVar19 + 0x28);
          dVar60 = local_278 + *(double *)(lVar19 + 0x20);
          local_288 = dVar70 * *(double *)(lVar19 + 0x48);
          dStack_290 = dVar48 * *(double *)(lVar19 + 0x40);
          local_298 = dVar29 * *(double *)(lVar19 + 0x38);
          FUN_146bed047(&local_278,lVar19,&local_298);
          dVar70 = local_268 + *(double *)(lVar19 + 0x30);
          dVar48 = dStack_270 + *(double *)(lVar19 + 0x28);
          dVar29 = local_278 + *(double *)(lVar19 + 0x20);
          local_268 = dVar46 * *(double *)(lVar19 + 0x48);
          dStack_270 = dVar57 * *(double *)(lVar19 + 0x40);
          local_278 = dVar39 * *(double *)(lVar19 + 0x38);
          FUN_146bed047(&local_298,lVar19,&local_278);
          lVar19 = lVar19 + 0x50;
          lVar25 = lVar25 + -0x50;
          dVar46 = local_288;
          dVar57 = dStack_290;
          dVar39 = local_298;
        } while (lVar25 != 0);
      }
      local_178[2] = (dVar70 + dVar49) * 0.5;
      local_178[1] = (dVar48 + dVar69) * 0.5;
      local_178[0] = (dVar29 + dVar60) * 0.5;
      dVar70 = dVar70 - dVar49;
      dVar48 = dVar48 - dVar69;
      dVar29 = dVar29 - dVar60;
      dVar69 = SQRT(dVar70 * dVar70 + dVar29 * dVar29 + dVar48 * dVar48);
      local_178[3] = 0.0;
      local_158 = 0.0;
      dStack_150 = 0.0;
      local_148 = 0.0;
      if (0.0 < dVar69) {
        dStack_150 = 1.0 / dVar69;
        local_178[3] = dVar29 * dStack_150;
        local_158 = dVar48 * dStack_150;
        dStack_150 = dVar70 * dStack_150;
        local_148 = dVar69 * 0.5;
      }
      dStack_140 = (SQRT(dVar46 * dVar46 + dVar39 * dVar39 + dVar57 * dVar57) /
                   SQRT(local_2e8 * local_2e8 + dVar65 * dVar65 + local_328 * local_328)) *
                   dStack_140;
      iVar14 = (int)param_1[5];
      *(uint *)(param_1 + 5) = iVar14 + 1U;
      if (*(uint *)((longlong)param_1 + 0x2c) < iVar14 + 1U) {
        FUN_1483b9f98(local_318._0_8_,iVar14);
      }
      lVar19 = *(longlong *)local_318._0_8_;
      lVar25 = (longlong)iVar14 * 0x40;
      pdVar22 = (double *)(lVar19 + 0x30 + lVar25);
      *pdVar22 = local_148;
      pdVar22[1] = dStack_140;
      pdVar22 = (double *)(lVar19 + 0x20 + lVar25);
      *pdVar22 = local_158;
      pdVar22[1] = dStack_150;
      pdVar22 = (double *)(lVar19 + 0x10 + lVar25);
      *pdVar22 = local_178[2];
      pdVar22[1] = local_178[3];
      *(double *)(lVar19 + lVar25) = local_178[0];
      ((double *)(lVar19 + lVar25))[1] = local_178[1];
      pdVar20 = pdVar20 + 8;
    } while (pdVar20 != pdVar26);
  }
  lVar19 = local_330;
  iVar14 = *(int *)(local_348._0_8_ + 0x38);
  iVar21 = (int)param_1[7] + iVar14;
  if (-1 < iVar21) {
    plVar1 = param_1 + 6;
    if (*(int *)((longlong)param_1 + 0x3c) < iVar21) {
      FUN_1483bec22(plVar1);
      iVar14 = *(int *)(local_348._0_8_ + 0x38);
    }
    if (iVar14 != 0) {
      lVar25 = *(longlong *)(local_348._0_8_ + 0x30);
      lVar27 = (longlong)iVar14 * 0x220 + lVar25;
      do {
        iVar14 = (int)param_1[7];
        *(uint *)(param_1 + 7) = iVar14 + 1U;
        if (*(uint *)((longlong)param_1 + 0x3c) < iVar14 + 1U) {
          FUN_1483ba0ee(plVar1,iVar14);
        }
        FUN_146bff712((longlong)iVar14 * 0x220 + *plVar1,lVar25);
        lVar15 = *(longlong *)(lVar19 + 0xa0);
        if (*(longlong *)(lVar19 + 0xa0) == 0) {
          lVar15 = lVar19;
        }
        if ((longlong)*(int *)(lVar19 + 0xa8) != 0) {
          lVar24 = (longlong)*(int *)(lVar19 + 0xa8) * 0x50;
          do {
            FUN_146c3cd49((longlong)((int)param_1[7] + -1) * 0x220 + param_1[6],lVar15,1);
            lVar15 = lVar15 + 0x50;
            lVar24 = lVar24 + -0x50;
          } while (lVar24 != 0);
        }
        lVar25 = lVar25 + 0x220;
      } while (lVar25 != lVar27);
    }
    iVar14 = *(int *)(local_348._0_8_ + 0x48);
    iVar21 = (int)param_1[9] + iVar14;
    if (-1 < iVar21) {
      local_300 = param_1 + 8;
      if (*(int *)((longlong)param_1 + 0x4c) < iVar21) {
        FUN_1483bec92(local_300);
        iVar14 = *(int *)(local_348._0_8_ + 0x48);
      }
      if (iVar14 != 0) {
        lVar19 = *(longlong *)(local_348._0_8_ + 0x40);
        lVar25 = (longlong)iVar14 * 0x90 + lVar19;
        local_2a0 = lVar25;
        do {
          iVar14 = (int)param_1[9];
          *(uint *)(param_1 + 9) = iVar14 + 1U;
          if (*(uint *)((longlong)param_1 + 0x4c) < iVar14 + 1U) {
            FUN_1483bea4e(local_300,iVar14);
          }
          FUN_1483beb90((longlong)iVar14 * 0x90 + param_1[8],lVar19);
          auVar50 = _DAT_149934d80;
          lVar27 = param_1[8];
          lVar15 = (longlong)((int)param_1[9] + -1) * 0x90;
          pauVar2 = (undefined1 (*) [16])(lVar27 + lVar15);
          dVar69 = (double)*(float *)(lVar27 + 0x80 + lVar15);
          dVar29 = dVar69 * -0.5;
          local_2c8 = DAT_14c846520;
          uStack_2c0 = 0;
          local_2d8 = DAT_14c846518;
          uStack_2d0 = 0;
          local_2b8._8_8_ = 0;
          local_2b8._0_8_ = DAT_14c846510;
          dVar69 = dVar69 * 0.5;
          auVar63 = *(undefined1 (*) [16])(lVar27 + 0x40 + lVar15);
          auVar36 = *(undefined1 (*) [16])(lVar27 + 0x50 + lVar15);
          auVar67 = minpd(auVar63,_DAT_149934d80);
          auVar41 = minpd(auVar36,ZEXT816(0x3ff0000000000000));
          auVar73._8_8_ = -(ulonglong)(auVar67._8_8_ < 0.0);
          auVar73._0_8_ = -(ulonglong)(auVar67._0_8_ < 0.0);
          iVar14 = movmskpd((int)lVar15,auVar73);
          auVar42._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
          auVar42._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
          uVar16 = movmskpd((int)lVar27,auVar42);
          local_2f8 = ZEXT816(0x3ff0000000000000) << 0x40;
          if ((uVar16 & 0x3fffffff) == 0 && iVar14 == 0) {
            dVar70 = *(double *)pauVar2[2];
            dVar39 = *(double *)(pauVar2[2] + 8);
            dVar46 = *(double *)*pauVar2 * 0.0;
            dVar57 = *(double *)(*pauVar2 + 8) * 0.0;
            dVar48 = *(double *)pauVar2[1] * 0.0;
            dVar65 = *(double *)(pauVar2[1] + 8) * 0.0;
            dVar71 = dVar65 * 1.0;
            dVar66 = dVar48 * -1.0;
            dVar49 = dVar57 * -1.0 + *(double *)*pauVar2 + dVar71 + dVar48;
            dVar60 = dVar46 * 1.0 + *(double *)(*pauVar2 + 8) + dVar66 + dVar65;
            auVar50._0_8_ = ((dVar57 * 1.0 + *(double *)pauVar2[1]) - dVar46) + dVar71;
            auVar50._8_8_ = ((dVar46 * -1.0 + *(double *)(pauVar2[1] + 8)) - dVar57) + dVar66;
            dVar46 = *(double *)pauVar2[3] * 1.0;
            dVar57 = *(double *)(pauVar2[3] + 8) * 0.0;
            dVar71 = dVar39 * 0.0 - dVar70 * 0.0;
            dVar66 = dVar46 * 0.0 - dVar39 * 0.0;
            dVar48 = dVar70 * 0.0 - dVar46 * 0.0;
            dVar65 = dVar57 * 1.0 - dVar57 * 1.0;
            dVar66 = dVar66 + dVar66;
            dVar48 = dVar48 + dVar48;
            dVar71 = dVar71 + dVar71;
            dVar65 = dVar65 + dVar65;
            dVar70 = dVar29 * DAT_14c846510 + (dVar71 * 0.0 - dVar48 * 0.0) + dVar70 + dVar66;
            dVar39 = DAT_14c846518 * dVar29 + (dVar66 * 0.0 - dVar71 * 0.0) + dVar39 + dVar48;
            dVar29 = DAT_14c846520 * dVar29 + (dVar48 * 0.0 - dVar66 * 0.0) + dVar46 + dVar71;
            dVar48 = (dVar65 * 1.0 - dVar65 * 1.0) + dVar57 + dVar65 + 0.0;
            pdVar20 = (double *)0x0;
            local_348._0_16_ = auVar63;
            local_328 = dVar29;
            dStack_320 = dVar48;
          }
          else {
            local_1f8 = 1.0;
            dStack_1f0 = 0.0;
            local_1e8 = 0.0;
            uStack_1e0 = 0;
            local_1b8 = 0.0;
            dStack_1b0 = 0.0;
            local_1c8 = 0.0;
            uStack_1c0 = 0;
            local_1a8 = 1.0;
            uStack_1a0 = 0;
            local_198._8_8_ = DAT_14c846518 * dVar29;
            local_198._0_8_ = dVar29 * DAT_14c846510;
            uStack_180 = 0x3ff0000000000000;
            dVar49 = *(double *)*pauVar2;
            dVar60 = *(double *)(*pauVar2 + 8);
            dVar65 = *(double *)pauVar2[1];
            local_268 = *(double *)pauVar2[4];
            local_258 = *(double *)(pauVar2[4] + 8);
            dStack_230 = *(double *)pauVar2[5];
            dVar57 = dVar60 + dVar60;
            dVar70 = dVar65 + dVar65;
            dVar48 = dVar49 * (dVar49 + dVar49);
            local_278 = ((double)DAT_149934d80 - (dVar65 * dVar70 + dVar60 * dVar57)) * local_268;
            dStack_250 = (DAT_149934d80._8_8_ - (dVar65 * dVar70 + dVar48)) * local_258;
            local_228 = (1.0 - (dVar48 + dVar60 * dVar57)) * dStack_230;
            dVar65 = *(double *)*pauVar2 * dVar70;
            dVar48 = *(double *)(pauVar2[1] + 8);
            dVar39 = dVar70 * dVar48;
            dVar46 = (dVar49 + dVar49) * *(double *)(pauVar2[1] + 8);
            dVar48 = dVar57 * dVar48;
            dStack_270 = (dVar57 * dVar49 + dVar39) * local_268;
            local_248 = (dVar70 * dVar60 + dVar46) * local_258;
            local_238 = (dVar48 + dVar65) * dStack_230;
            local_268 = (dVar65 - dVar48) * local_268;
            local_258 = (dVar57 * dVar49 - dVar39) * local_258;
            dStack_230 = (dVar70 * dVar60 - dVar46) * dStack_230;
            uStack_260 = 0;
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = *(undefined8 *)pauVar2[2];
            uStack_210 = *(undefined8 *)(pauVar2[2] + 8);
            local_208 = *(undefined8 *)pauVar2[3];
            uStack_200 = 0x3ff0000000000000;
            auStack_1d8 = local_2f8;
            local_188 = DAT_14c846520 * dVar29;
            FUN_1447fea8d(local_178,&local_278,&local_1f8);
            FUN_144a1c686(local_178,0x3e45798ee0000000);
            auVar41._8_8_ = -(ulonglong)(0.0 <= auVar63._8_8_);
            auVar41._0_8_ = -(ulonglong)(0.0 <= auVar63._0_8_);
            auVar41 = blendvpd(_DAT_149936790,auVar50,auVar41);
            uVar28 = -(ulonglong)(0.0 <= auVar36._0_8_ * 1.0);
            dVar29 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
            dVar48 = auVar41._0_8_;
            local_178[2] = local_178[2] * dVar48;
            local_178[1] = local_178[1] * dVar48;
            local_178[0] = local_178[0] * dVar48;
            dVar48 = auVar41._8_8_;
            local_148 = local_148 * dVar48;
            dStack_150 = dStack_150 * dVar48;
            local_158 = dVar48 * local_158;
            local_128 = local_128 * dVar29;
            local_130 = local_130 * dVar29;
            local_138 = dVar29 * local_138;
            pdVar20 = &local_298;
            FUN_14481fd10(&local_298,local_178);
            dVar29 = local_288 * local_288 + local_298 * local_298;
            dVar48 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar43._0_8_ = dVar29 + dVar48;
            auVar43._8_8_ = dVar29 + dVar48;
            auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
            auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
            auVar41 = sqrtpd(auVar43,auVar43);
            auVar50 = divpd(auVar50,auVar41);
            auVar51._0_8_ = auVar50._0_8_ * local_288;
            auVar51._8_8_ = auVar50._8_8_ * dStack_280;
            dVar49 = (double)((ulonglong)(local_298 * auVar50._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_));
            dVar60 = (double)((ulonglong)(dStack_290 * auVar50._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_));
            auVar50 = blendvpd(local_2f8,auVar51,auVar30);
            dVar48 = 0.0;
            dVar29 = local_108;
            dVar70 = local_118;
            dVar39 = dStack_110;
          }
          dVar46 = auVar36._0_8_ * 1.0;
          dVar57 = auVar36._8_8_ * 0.0;
          uVar17 = SUB84(pdVar20,0);
          dVar65 = local_2b8._0_8_ * dVar69;
          uVar76 = local_2b8._12_4_;
          auVar10._8_4_ = SUB84(dVar60,0);
          auVar10._0_8_ = dVar49;
          auVar10._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
          *pauVar2 = auVar10;
          pauVar2[1] = auVar50;
          *(double *)pauVar2[2] = dVar70;
          *(double *)(pauVar2[2] + 8) = dVar39;
          *(double *)pauVar2[3] = dVar29;
          *(double *)(pauVar2[3] + 8) = dVar48;
          pauVar2[4] = auVar63;
          auVar36._8_4_ = SUB84(dVar57,0);
          auVar36._0_8_ = dVar46;
          auVar36._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
          pauVar2[5] = auVar36;
          lVar27 = *(longlong *)(local_330 + 0xa0);
          if (*(longlong *)(local_330 + 0xa0) == 0) {
            lVar27 = local_330;
          }
          iVar14 = *(int *)(local_330 + 0xa8);
          lVar15 = (longlong)iVar14;
          dVar71 = local_2d8 * dVar69;
          dVar66 = local_2c8 * dVar69;
          if (lVar15 != 0) {
            local_2b8._8_4_ = local_2b8._8_4_;
            local_2b8._0_8_ = dVar65;
            local_2b8._12_4_ = uVar76;
            uVar28 = lVar15 * 0x10;
            lVar25 = 0;
            dVar65 = dVar29;
            local_2d8 = local_2d8 * dVar69;
            local_2c8 = local_2c8 * dVar69;
            do {
              auVar42 = _DAT_149934d80;
              dVar69 = *(double *)(lVar27 + lVar25);
              auVar62._8_8_ = 0;
              auVar62._0_8_ = dVar69;
              dVar64 = *(double *)(lVar27 + lVar25);
              dVar13 = ((double *)(lVar27 + lVar25))[1];
              auVar36 = *(undefined1 (*) [16])(lVar27 + lVar25 + 0x10);
              dVar66 = auVar36._0_8_;
              dVar59 = auVar36._8_8_;
              pauVar3 = (undefined1 (*) [16])(lVar27 + lVar25 + 0x20);
              local_2e8 = *(double *)*pauVar3;
              dStack_2e0 = *(double *)(*pauVar3 + 8);
              dVar29 = *(double *)(lVar27 + lVar25 + 0x30);
              auVar41 = *(undefined1 (*) [16])(lVar27 + lVar25 + 0x38);
              dVar58 = auVar41._0_8_;
              dVar61 = auVar41._8_8_;
              dVar71 = *(double *)(lVar27 + lVar25 + 0x48);
              auVar41 = minpd(auVar63,auVar41);
              auVar72._8_8_ = dVar57;
              auVar72._0_8_ = dVar46;
              auVar67._8_8_ = 0;
              auVar67._0_8_ = dVar71;
              auVar73 = minpd(auVar72,auVar67);
              auVar52._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
              auVar52._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
              uVar16 = movmskpd((int)uVar28,auVar52);
              uVar28 = (ulonglong)uVar16;
              auVar74._8_8_ = -(ulonglong)(auVar73._8_8_ < 0.0);
              auVar74._0_8_ = -(ulonglong)(auVar73._0_8_ < 0.0);
              uVar18 = movmskpd((int)pdVar20,auVar74);
              dVar37 = auVar50._8_8_;
              local_348._0_8_ = auVar63._0_8_;
              local_348._8_8_ = auVar63._8_8_;
              local_348._0_16_ = auVar63;
              local_328 = dVar65;
              dStack_320 = dVar48;
              if ((uVar18 & 0x3fffffff) == 0 && uVar16 == 0) {
                dVar35 = auVar50._0_8_;
                local_318._8_4_ = SUB84(dVar57,0);
                local_318._0_8_ = dVar46;
                local_318._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
                dVar4 = dVar13 * dVar49;
                dVar5 = dVar13 * dVar60;
                dVar7 = dVar69 * dVar60;
                dVar8 = dVar69 * dVar49;
                dVar57 = *(double *)(lVar27 + lVar25 + 0x10);
                dVar38 = dVar49 * dVar57;
                dVar49 = dVar60 * dVar57 * -1.0 +
                         dVar35 * dVar13 + dVar37 * dVar69 * 1.0 + dVar49 * dVar59;
                dVar60 = dVar38 * 1.0 + dVar37 * dVar13 + dVar35 * dVar69 * -1.0 + dVar60 * dVar59;
                dVar70 = dVar70 * dVar58;
                dVar39 = dVar39 * dVar61;
                dVar65 = dVar65 * dVar71;
                dVar48 = dVar48 * 0.0;
                auVar63 = blendpd(auVar62,auVar36,2);
                dVar40 = dVar39 * dVar64 - dVar70 * dVar13;
                dVar47 = dVar65 * dVar13 - dVar39 * dVar57;
                dVar69 = dVar70 * dVar66 - dVar65 * auVar63._0_8_;
                dVar38 = dVar48 * dVar59 - dVar48 * auVar63._8_8_;
                dVar47 = dVar47 + dVar47;
                dVar69 = dVar69 + dVar69;
                dVar40 = dVar40 + dVar40;
                dVar38 = dVar38 + dVar38;
                dVar70 = local_2e8 + (dVar40 * dVar13 - dVar57 * dVar69) + dVar59 * dVar47 + dVar70;
                dVar39 = dStack_2e0 +
                         (dVar47 * dVar66 - dVar40 * auVar63._0_8_) + dVar59 * dVar69 + dVar39;
                dVar29 = dVar29 + (dVar69 * dVar64 - dVar13 * dVar47) + dVar59 * dVar40 + dVar65;
                dVar48 = (dVar38 * dVar59 - dVar38 * auVar63._8_8_) + dVar59 * dVar38 + dVar48 + 0.0
                ;
                auVar50._8_8_ = dVar35 * dVar57 * -1.0 + ((dVar8 * -1.0 + dVar37 * dVar59) - dVar5);
                auVar50._0_8_ = dVar37 * dVar57 * 1.0 + ((dVar7 * 1.0 + dVar35 * dVar59) - dVar4);
                auVar63._8_8_ = (double)local_348._8_8_ * dVar61;
                auVar63._0_8_ = (double)local_348._0_8_ * dVar58;
                pdVar20 = (double *)0x0;
                dVar57 = (double)local_318._8_8_;
              }
              else {
                dVar48 = dVar13 + dVar13;
                dVar49 = dVar66 + dVar66;
                dVar65 = dVar64 * (dVar64 + dVar64);
                local_1a8 = (1.0 - (dVar65 + dVar13 * dVar48)) * dVar71;
                dVar60 = (dVar64 + dVar64) * dVar59;
                local_1b8 = (dVar48 * dVar59 + dVar69 * dVar49) * dVar71;
                dStack_1b0 = (dVar49 * dVar13 - dVar60) * dVar71;
                auVar63._0_8_ = (double)local_348._0_8_ * dVar58;
                auVar63._8_8_ = (double)local_348._8_8_ * dVar61;
                local_1f8 = (1.0 - (dVar66 * dVar49 + dVar13 * dVar48)) * dVar58;
                dStack_1f0 = (dVar48 * dVar64 + dVar49 * dVar59) * dVar58;
                local_1c8 = (dVar49 * dVar13 + dVar60) * dVar61;
                local_1e8 = (dVar69 * dVar49 - dVar48 * dVar59) * dVar58;
                uStack_1e0 = 0;
                auStack_1d8._8_8_ = (1.0 - (dVar66 * dVar49 + dVar65)) * dVar61;
                auStack_1d8._0_8_ = (dVar48 * dVar64 - dVar49 * dVar59) * dVar61;
                uStack_1c0 = 0;
                uStack_1a0 = 0;
                uStack_180 = 0x3ff0000000000000;
                dVar48 = *(double *)*pauVar2;
                dVar65 = *(double *)(*pauVar2 + 8);
                dVar69 = *(double *)pauVar2[1];
                local_268 = *(double *)pauVar2[4];
                local_258 = *(double *)(pauVar2[4] + 8);
                dStack_230 = *(double *)pauVar2[5];
                dVar39 = dVar65 + dVar65;
                dVar49 = dVar69 + dVar69;
                dVar60 = dVar48 * (dVar48 + dVar48);
                local_278 = ((double)DAT_149934d80 - (dVar69 * dVar49 + dVar65 * dVar39)) *
                            local_268;
                dStack_250 = (DAT_149934d80._8_8_ - (dVar69 * dVar49 + dVar60)) * local_258;
                local_228 = (1.0 - (dVar60 + dVar65 * dVar39)) * dStack_230;
                dVar66 = *(double *)*pauVar2 * dVar49;
                dVar69 = *(double *)(pauVar2[1] + 8);
                dVar60 = dVar49 * dVar69;
                dVar70 = (dVar48 + dVar48) * *(double *)(pauVar2[1] + 8);
                dVar69 = dVar39 * dVar69;
                dStack_270 = (dVar39 * dVar48 + dVar60) * local_268;
                local_248 = (dVar49 * dVar65 + dVar70) * local_258;
                local_238 = (dVar69 + dVar66) * dStack_230;
                local_268 = (dVar66 - dVar69) * local_268;
                local_258 = (dVar39 * dVar48 - dVar60) * local_258;
                dStack_230 = (dVar49 * dVar65 - dVar70) * dStack_230;
                uStack_260 = 0;
                uStack_240 = 0;
                uStack_220 = 0;
                local_218 = *(undefined8 *)pauVar2[2];
                uStack_210 = *(undefined8 *)(pauVar2[2] + 8);
                local_208 = *(undefined8 *)pauVar2[3];
                uStack_200 = 0x3ff0000000000000;
                local_198 = *pauVar3;
                local_188 = dVar29;
                FUN_1447fea8d(local_178,&local_278,&local_1f8);
                FUN_144a1c686(local_178,0x3e45798ee0000000);
                auVar31._8_8_ = -(ulonglong)(0.0 <= auVar63._8_8_);
                auVar31._0_8_ = -(ulonglong)(0.0 <= auVar63._0_8_);
                auVar36 = blendvpd(_DAT_149936790,auVar42,auVar31);
                uVar28 = -(ulonglong)(0.0 <= dVar46 * dVar71);
                dVar69 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
                dVar29 = auVar36._0_8_;
                local_178[2] = local_178[2] * dVar29;
                local_178[1] = local_178[1] * dVar29;
                local_178[0] = local_178[0] * dVar29;
                dVar29 = auVar36._8_8_;
                local_148 = local_148 * dVar29;
                dStack_150 = dStack_150 * dVar29;
                local_158 = dVar29 * local_158;
                local_128 = local_128 * dVar69;
                local_130 = local_130 * dVar69;
                local_138 = dVar69 * local_138;
                pdVar20 = &local_298;
                uVar28 = FUN_14481fd10(&local_298,local_178);
                dVar69 = local_288 * local_288 + local_298 * local_298;
                dVar29 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                auVar44._0_8_ = dVar69 + dVar29;
                auVar44._8_8_ = dVar69 + dVar29;
                auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
                auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
                auVar36 = sqrtpd(auVar44,auVar44);
                auVar36 = divpd(auVar42,auVar36);
                auVar53._0_8_ = auVar36._0_8_ * local_288;
                auVar53._8_8_ = auVar36._8_8_ * dStack_280;
                dVar49 = (double)((ulonglong)(local_298 * auVar36._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_));
                dVar60 = (double)((ulonglong)(dStack_290 * auVar36._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_));
                auVar50 = blendvpd(local_2f8,auVar53,auVar32);
                dVar48 = 0.0;
                dVar29 = local_108;
                dVar70 = local_118;
                dVar39 = dStack_110;
              }
              dVar46 = dVar46 * dVar71;
              dVar57 = dVar57 * 0.0;
              uVar17 = SUB84(pdVar20,0);
              iVar14 = (int)uVar28;
              auVar11._8_4_ = SUB84(dVar60,0);
              auVar11._0_8_ = dVar49;
              auVar11._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
              *pauVar2 = auVar11;
              pauVar2[1] = auVar50;
              *(double *)pauVar2[2] = dVar70;
              *(double *)(pauVar2[2] + 8) = dVar39;
              *(double *)pauVar2[3] = dVar29;
              *(double *)(pauVar2[3] + 8) = dVar48;
              pauVar2[4] = auVar63;
              auVar6._8_4_ = SUB84(dVar57,0);
              auVar6._0_8_ = dVar46;
              auVar6._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
              pauVar2[5] = auVar6;
              lVar25 = lVar25 + 0x50;
              dVar65 = dVar29;
            } while (lVar15 * 0x50 != lVar25);
            auVar67 = minpd(auVar63,_DAT_149934d80);
            lVar25 = local_2a0;
            dVar71 = local_2d8;
            dVar65 = (double)local_2b8._0_8_;
            dVar66 = local_2c8;
          }
          auVar36 = _DAT_149934d80;
          auVar54._8_8_ = dVar57;
          auVar54._0_8_ = dVar46;
          auVar41 = minpd(auVar54,ZEXT816(0x3ff0000000000000));
          auVar68._8_8_ = -(ulonglong)(auVar67._8_8_ < 0.0);
          auVar68._0_8_ = -(ulonglong)(auVar67._0_8_ < 0.0);
          iVar14 = movmskpd(iVar14,auVar68);
          auVar55._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
          auVar55._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
          uVar16 = movmskpd(uVar17,auVar55);
          if ((uVar16 & 0x3fffffff) == 0 && iVar14 == 0) {
            dVar58 = auVar50._0_8_ * 0.0;
            dVar59 = auVar50._8_8_ * 0.0;
            dVar61 = dVar49 * 0.0;
            dVar64 = dVar60 * 0.0;
            local_318._8_4_ = SUB84(dVar57,0);
            local_318._0_8_ = dVar46;
            local_318._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
            dVar69 = dVar59 * 1.0;
            dVar57 = dVar58 * -1.0;
            dVar58 = dVar64 * -1.0 + dVar49 + dVar69 + dVar58;
            dVar59 = dVar61 * 1.0 + dVar60 + dVar57 + dVar59;
            auVar75._0_8_ = ((dVar64 * 1.0 + auVar50._0_8_) - dVar61) + dVar69;
            auVar75._8_8_ = ((dVar61 * -1.0 + auVar50._8_8_) - dVar64) + dVar57;
            dVar29 = dVar29 * 1.0;
            dVar48 = dVar48 * 0.0;
            dVar69 = dVar39 * 0.0 - dVar70 * 0.0;
            dVar49 = dVar29 * 0.0 - dVar39 * 0.0;
            dVar60 = dVar70 * 0.0 - dVar29 * 0.0;
            dVar57 = dVar48 * 1.0 - dVar48 * 1.0;
            dVar49 = dVar49 + dVar49;
            dVar60 = dVar60 + dVar60;
            dVar69 = dVar69 + dVar69;
            dVar57 = dVar57 + dVar57;
            dVar65 = dVar65 + (dVar69 * 0.0 - dVar60 * 0.0) + dVar70 + dVar49;
            dVar71 = dVar71 + (dVar49 * 0.0 - dVar69 * 0.0) + dVar39 + dVar60;
            dVar66 = dVar66 + (dVar60 * 0.0 - dVar49 * 0.0) + dVar29 + dVar69;
            dVar69 = (dVar57 * 1.0 - dVar57 * 1.0) + dVar48 + dVar57 + 0.0;
            dVar57 = (double)local_318._8_8_;
          }
          else {
            local_1f8 = 1.0;
            dStack_1f0 = 0.0;
            local_1e8 = 0.0;
            uStack_1e0 = 0;
            local_1b8 = 0.0;
            dStack_1b0 = 0.0;
            local_1c8 = 0.0;
            uStack_1c0 = 0;
            local_1a8 = 1.0;
            uStack_1a0 = 0;
            local_198._8_4_ = SUB84(dVar71,0);
            local_198._0_8_ = dVar65;
            local_198._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
            uStack_180 = 0x3ff0000000000000;
            dVar48 = *(double *)*pauVar2;
            dVar65 = *(double *)(*pauVar2 + 8);
            dVar69 = *(double *)pauVar2[1];
            local_268 = *(double *)pauVar2[4];
            local_258 = *(double *)(pauVar2[4] + 8);
            dStack_230 = *(double *)pauVar2[5];
            dVar39 = dVar65 + dVar65;
            dVar49 = dVar69 + dVar69;
            dVar29 = dVar48 * (dVar48 + dVar48);
            local_278 = ((double)DAT_149934d80 - (dVar69 * dVar49 + dVar65 * dVar39)) * local_268;
            dStack_250 = (DAT_149934d80._8_8_ - (dVar69 * dVar49 + dVar29)) * local_258;
            local_228 = (1.0 - (dVar29 + dVar65 * dVar39)) * dStack_230;
            dVar29 = *(double *)*pauVar2 * dVar49;
            dVar69 = *(double *)(pauVar2[1] + 8);
            dVar60 = dVar49 * dVar69;
            dVar70 = (dVar48 + dVar48) * *(double *)(pauVar2[1] + 8);
            dVar69 = dVar39 * dVar69;
            dStack_270 = (dVar39 * dVar48 + dVar60) * local_268;
            local_248 = (dVar49 * dVar65 + dVar70) * local_258;
            local_238 = (dVar69 + dVar29) * dStack_230;
            local_268 = (dVar29 - dVar69) * local_268;
            local_258 = (dVar39 * dVar48 - dVar60) * local_258;
            dStack_230 = (dVar49 * dVar65 - dVar70) * dStack_230;
            uStack_260 = 0;
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = *(undefined8 *)pauVar2[2];
            uStack_210 = *(undefined8 *)(pauVar2[2] + 8);
            local_208 = *(undefined8 *)pauVar2[3];
            uStack_200 = 0x3ff0000000000000;
            auStack_1d8 = local_2f8;
            local_188 = dVar66;
            FUN_1447fea8d(local_178,&local_278,&local_1f8);
            FUN_144a1c686(local_178,0x3e45798ee0000000);
            auVar33._8_8_ = -(ulonglong)(0.0 <= auVar63._8_8_);
            auVar33._0_8_ = -(ulonglong)(0.0 <= auVar63._0_8_);
            auVar50 = blendvpd(_DAT_149936790,auVar36,auVar33);
            uVar28 = -(ulonglong)(0.0 <= dVar46 * 1.0);
            dVar69 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
            dVar29 = auVar50._0_8_;
            local_178[2] = local_178[2] * dVar29;
            local_178[1] = local_178[1] * dVar29;
            local_178[0] = local_178[0] * dVar29;
            dVar29 = auVar50._8_8_;
            local_148 = local_148 * dVar29;
            dStack_150 = dStack_150 * dVar29;
            local_158 = dVar29 * local_158;
            local_128 = local_128 * dVar69;
            local_130 = local_130 * dVar69;
            local_138 = dVar69 * local_138;
            FUN_14481fd10(&local_298,local_178);
            dVar69 = local_288 * local_288 + local_298 * local_298;
            dVar29 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar45._0_8_ = dVar69 + dVar29;
            auVar45._8_8_ = dVar69 + dVar29;
            auVar34._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
            auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
            auVar50 = sqrtpd(auVar45,auVar45);
            auVar36 = divpd(auVar36,auVar50);
            auVar56._0_8_ = auVar36._0_8_ * local_288;
            auVar56._8_8_ = auVar36._8_8_ * dStack_280;
            dVar58 = (double)((ulonglong)(local_298 * auVar36._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_));
            dVar59 = (double)((ulonglong)(dStack_290 * auVar36._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_));
            auVar75 = blendvpd(local_2f8,auVar56,auVar34);
            dVar69 = 0.0;
            dVar65 = local_118;
            dVar71 = dStack_110;
            dVar66 = local_108;
          }
          *(double *)*pauVar2 = dVar58;
          *(double *)(*pauVar2 + 8) = dVar59;
          pauVar2[1] = auVar75;
          auVar12._8_4_ = SUB84(dVar71,0);
          auVar12._0_8_ = dVar65;
          auVar12._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
          pauVar2[2] = auVar12;
          *(double *)pauVar2[3] = dVar66;
          *(double *)(pauVar2[3] + 8) = dVar69;
          pauVar2[4] = auVar63;
          auVar9._8_4_ = SUB84(dVar57 * 0.0,0);
          auVar9._0_8_ = dVar46 * 1.0;
          auVar9._12_4_ = (int)((ulonglong)(dVar57 * 0.0) >> 0x20);
          pauVar2[5] = auVar9;
          lVar19 = lVar19 + 0x90;
        } while (lVar19 != lVar25);
      }
      if ((local_f0 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar21);
}



// FUNCTION 1483942cc FUN_1483942cc body=836 status=ok
// SIG undefined FUN_1483942cc(void)

void FUN_1483942cc(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  uStack_70 = 0;
  FUN_143b16bf9(param_1,&local_78);
  if ((int)param_2 < (int)uStack_70) {
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    if (0 < (int)param_2) {
      lVar18 = 0;
      do {
        uVar9 = uStack_80;
        uVar8 = uStack_90;
        uVar7 = uStack_a0;
        uVar6 = uStack_b0;
        uVar5 = uStack_c0;
        iVar1 = *(int *)(local_78 + lVar18);
        lVar14 = (longlong)*(int *)(local_78 + 4 + lVar18);
        if (iVar1 < 8) {
          if (iVar1 == 2) {
            puVar17 = (undefined4 *)(lVar14 * 0x20 + *param_1);
            lVar14 = (longlong)(int)uStack_c0;
            uVar10 = (int)uStack_c0 + 1;
            uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar10);
            if (uStack_c0._4_4_ < uVar10) {
              FUN_1483b9e7e(&local_c8,uVar5 & 0xffffffff);
            }
            lVar14 = lVar14 << 5;
            uVar19 = *puVar17;
            uVar20 = puVar17[1];
            uVar21 = puVar17[2];
            uVar22 = puVar17[3];
            uVar23 = puVar17[4];
            uVar24 = puVar17[5];
            uVar25 = puVar17[6];
            uVar26 = puVar17[7];
            lVar11 = local_c8;
            goto LAB_1483944a9;
          }
          if (iVar1 == 4) {
            lVar11 = param_1[2];
            lVar15 = (longlong)(int)uStack_b0;
            uVar10 = (int)uStack_b0 + 1;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar10);
            if (uStack_b0._4_4_ < uVar10) {
              FUN_1483b9f04(&local_b8,uVar6 & 0xffffffff);
            }
            puVar13 = (undefined8 *)(lVar14 * 0x50 + lVar11);
            puVar16 = (undefined8 *)(lVar15 * 0x50 + local_b8);
            for (lVar12 = 10; lVar12 != 0; lVar12 = lVar12 + -1) {
              *puVar16 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar16 = puVar16 + 1;
            }
          }
        }
        else if (iVar1 == 8) {
          puVar17 = (undefined4 *)(lVar14 * 0x40 + param_1[4]);
          lVar14 = (longlong)(int)uStack_a0;
          uVar10 = (int)uStack_a0 + 1;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar10);
          if (uStack_a0._4_4_ < uVar10) {
            FUN_1483b9f98(&local_a8,uVar7 & 0xffffffff);
          }
          lVar14 = lVar14 * 0x40;
          uVar19 = *puVar17;
          uVar20 = puVar17[1];
          uVar21 = puVar17[2];
          uVar22 = puVar17[3];
          uVar23 = puVar17[4];
          uVar24 = puVar17[5];
          uVar25 = puVar17[6];
          uVar26 = puVar17[7];
          uVar2 = *(undefined8 *)(puVar17 + 8);
          uVar3 = *(undefined8 *)(puVar17 + 10);
          uVar4 = *(undefined8 *)(puVar17 + 0xe);
          puVar13 = (undefined8 *)(local_a8 + 0x30 + lVar14);
          *puVar13 = *(undefined8 *)(puVar17 + 0xc);
          puVar13[1] = uVar4;
          puVar13 = (undefined8 *)(local_a8 + 0x20 + lVar14);
          *puVar13 = uVar2;
          puVar13[1] = uVar3;
          lVar11 = local_a8;
LAB_1483944a9:
          puVar17 = (undefined4 *)(lVar11 + 0x10 + lVar14);
          *puVar17 = uVar23;
          puVar17[1] = uVar24;
          puVar17[2] = uVar25;
          puVar17[3] = uVar26;
          puVar17 = (undefined4 *)(lVar11 + lVar14);
          *puVar17 = uVar19;
          puVar17[1] = uVar20;
          puVar17[2] = uVar21;
          puVar17[3] = uVar22;
        }
        else if (iVar1 == 0x10) {
          lVar11 = param_1[6];
          lVar15 = (longlong)(int)uStack_90;
          uVar10 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar10);
          if (uStack_90._4_4_ < uVar10) {
            FUN_1483ba0ee(&local_98,uVar8 & 0xffffffff);
          }
          FUN_146bff712(lVar15 * 0x220 + local_98,lVar14 * 0x220 + lVar11);
        }
        else if (iVar1 == 0x20) {
          lVar11 = param_1[8];
          lVar15 = (longlong)(int)uStack_80;
          uVar10 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
          if (uStack_80._4_4_ < uVar10) {
            FUN_1483bea4e(&local_88,uVar9 & 0xffffffff);
          }
          FUN_1483beb90(lVar15 * 0x90 + local_88,lVar14 * 0x90 + lVar11);
        }
        lVar18 = lVar18 + 0x10;
      } while ((ulonglong)param_2 << 4 != lVar18);
    }
    if (&local_c8 != param_1) {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_c8;
      local_c8 = 0;
      *(int *)(param_1 + 1) = (int)uStack_c0;
      *(uint *)((longlong)param_1 + 0xc) = uStack_c0._4_4_;
      uStack_c0 = 0;
      if (param_1[2] != 0) {
        FUN_1400020a8();
      }
      param_1[2] = local_b8;
      local_b8 = 0;
      *(int *)(param_1 + 3) = (int)uStack_b0;
      *(uint *)((longlong)param_1 + 0x1c) = uStack_b0._4_4_;
      uStack_b0 = 0;
      if (param_1[4] != 0) {
        FUN_1400020a8();
      }
      param_1[4] = local_a8;
      local_a8 = 0;
      *(int *)(param_1 + 5) = (int)uStack_a0;
      *(uint *)((longlong)param_1 + 0x2c) = uStack_a0._4_4_;
      uStack_a0 = 0;
    }
    FUN_14838fdc6(param_1 + 6,&local_98);
    FUN_14838fe16(param_1 + 8,&local_88);
    FUN_14838fe66(&local_c8);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148394612 FUN_148394612 body=790 status=ok
// SIG undefined FUN_148394612(void)

void FUN_148394612(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_108 [40];
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((longlong)(int)param_1[1] != 0) {
    pauVar11 = (undefined1 (*) [16])*param_1;
    pauVar10 = pauVar11 + (longlong)(int)param_1[1] * 2;
    do {
      dVar1 = *param_2;
      dVar8 = param_2[1];
      dVar9 = param_2[2];
      dVar15 = *(double *)pauVar11[1] * param_2[10];
      dVar2 = ABS(param_2[10]);
      dVar16 = *(double *)*pauVar11 * param_2[8];
      dVar17 = *(double *)(*pauVar11 + 8) * param_2[9];
      dVar14 = ABS(param_2[8]);
      if (ABS(param_2[9]) <= dVar14) {
        dVar14 = ABS(param_2[9]);
      }
      if (dVar2 <= dVar14) {
        dVar14 = dVar2;
      }
      dVar2 = param_2[3];
      dVar3 = dVar17 * dVar1 - dVar16 * dVar8;
      dVar4 = dVar15 * dVar8 - dVar17 * dVar9;
      dVar6 = dVar16 * dVar9 - dVar1 * dVar15;
      dVar4 = dVar4 + dVar4;
      dVar6 = dVar6 + dVar6;
      dVar3 = dVar3 + dVar3;
      dVar7 = (dVar9 * dVar4 - dVar1 * dVar3) + param_2[3] * dVar6 + dVar17 + param_2[5];
      dVar17 = param_2[6];
      auVar5._8_4_ = SUB84(dVar7,0);
      auVar5._0_8_ = (dVar3 * dVar8 - dVar6 * dVar9) + dVar2 * dVar4 + dVar16 + param_2[4];
      auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *pauVar11 = auVar5;
      *(double *)pauVar11[1] = dVar3 * dVar2 + dVar15 + (dVar6 * dVar1 - dVar4 * dVar8) + dVar17;
      *(double *)(pauVar11[1] + 8) = dVar14 * *(double *)(pauVar11[1] + 8);
      pauVar11 = pauVar11 + 2;
    } while (pauVar11 != pauVar10);
  }
  if ((longlong)(int)param_1[3] != 0) {
    lVar12 = param_1[2];
    lVar13 = (longlong)(int)param_1[3] * 0x50 + lVar12;
    do {
      FUN_1483bed02(lVar12,param_2);
      dVar2 = param_2[10];
      dVar1 = param_2[9];
      *(double *)(lVar12 + 0x38) = param_2[8] * *(double *)(lVar12 + 0x38);
      *(double *)(lVar12 + 0x40) = dVar1 * *(double *)(lVar12 + 0x40);
      *(double *)(lVar12 + 0x48) = dVar2 * *(double *)(lVar12 + 0x48);
      lVar12 = lVar12 + 0x50;
    } while (lVar12 != lVar13);
  }
  if ((longlong)(int)param_1[5] != 0) {
    lVar12 = param_1[4];
    lVar13 = (longlong)(int)param_1[5] << 6;
    do {
      FUN_143b173ec(lVar12,param_2);
      lVar12 = lVar12 + 0x40;
      lVar13 = lVar13 + -0x40;
    } while (lVar13 != 0);
  }
  if ((longlong)(int)param_1[7] != 0) {
    lVar12 = param_1[6];
    lVar13 = (longlong)(int)param_1[7] * 0x220;
    do {
      local_e0 = *param_2;
      dStack_d8 = param_2[1];
      local_d0 = param_2[2];
      dStack_c8 = param_2[3];
      local_c0 = param_2[4];
      dStack_b8 = param_2[5];
      local_b0 = param_2[6];
      local_a8 = *(undefined4 *)(param_2 + 8);
      uStack_a4 = *(undefined4 *)((longlong)param_2 + 0x44);
      uStack_a0 = *(undefined4 *)(param_2 + 9);
      uStack_9c = *(undefined4 *)((longlong)param_2 + 0x4c);
      local_98 = param_2[10];
      FUN_146c3cd49(lVar12,&local_e0,1);
      lVar12 = lVar12 + 0x220;
      lVar13 = lVar13 + -0x220;
    } while (lVar13 != 0);
  }
  if ((longlong)(int)param_1[9] != 0) {
    lVar12 = param_1[8];
    lVar13 = (longlong)(int)param_1[9] * 0x90;
    do {
      FUN_143b1799f(lVar12,param_2);
      lVar12 = lVar12 + 0x90;
      lVar13 = lVar13 + -0x90;
    } while (lVar13 != 0);
  }
  if ((local_90 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839492a FUN_14839492a body=7252 status=ok
// SIG undefined FUN_14839492a(void)

ulonglong FUN_14839492a(double *param_1,int param_2,char *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  uint uVar12;
  undefined1 (**ppauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined8 uVar15;
  double dVar16;
  int iVar17;
  int iVar18;
  longlong *plVar19;
  undefined **ppuVar20;
  double *pdVar21;
  longlong lVar22;
  undefined8 *puVar23;
  double dVar24;
  double *pdVar25;
  undefined4 *puVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  double dVar35;
  undefined8 uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auStack_8d8 [32];
  undefined1 **local_8b8;
  undefined8 *local_8b0;
  int local_8a8;
  longlong *local_8a0;
  undefined8 local_898;
  double *local_888;
  double *local_880;
  double local_878;
  double local_870;
  double local_868;
  undefined8 uStack_860;
  double *local_858;
  int local_84c;
  char *local_848;
  double *local_840;
  double local_838;
  double local_830;
  double local_828;
  double local_820;
  double local_818;
  double local_810;
  double local_808;
  double local_800;
  double local_7f8;
  undefined8 uStack_7f0;
  double local_7e8;
  undefined8 uStack_7e0;
  double local_7d8;
  undefined8 uStack_7d0;
  longlong local_7c8;
  undefined8 uStack_7c0;
  longlong local_7b8;
  undefined8 uStack_7b0;
  undefined1 *local_7a8;
  undefined8 *local_7a0;
  undefined1 *local_798;
  undefined1 (***local_790) [16];
  undefined1 *local_788;
  undefined8 *local_780;
  undefined8 local_778;
  undefined4 local_770;
  undefined4 *local_768;
  ulonglong uStack_760;
  undefined1 (*local_758) [16];
  undefined4 local_750;
  undefined1 (*local_748) [16];
  undefined4 local_740;
  undefined8 *local_738;
  undefined4 local_730;
  undefined1 (*local_728) [16];
  undefined4 local_720;
  longlong *local_718;
  undefined1 (***local_710) [16];
  longlong *local_708;
  undefined1 (**local_700) [16];
  undefined1 (***local_6f8) [16];
  undefined1 (**local_6f0) [16];
  longlong local_6e8;
  undefined8 uStack_6e0;
  undefined1 (**local_6d8) [16];
  undefined8 uStack_6d0;
  undefined1 (*local_6c8) [16];
  undefined8 uStack_6c0;
  longlong local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 local_680;
  undefined4 local_678;
  undefined8 local_674;
  undefined4 local_66c;
  longlong local_660;
  undefined4 local_658;
  undefined8 local_650;
  undefined8 local_648;
  undefined4 local_640;
  undefined1 (**local_638) [16];
  undefined8 uStack_630;
  code *local_628;
  double dStack_620;
  longlong *local_618;
  longlong local_608 [20];
  undefined1 (**local_568) [16];
  undefined8 uStack_560;
  code *local_558;
  double dStack_550;
  undefined **local_548;
  double local_540;
  undefined *local_538;
  undefined4 local_530;
  undefined2 local_52c;
  undefined8 local_528;
  int local_520;
  longlong local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_488;
  undefined4 local_480;
  undefined8 local_47c;
  undefined4 local_474;
  undefined8 local_468;
  undefined4 local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438 [2];
  undefined8 local_428;
  undefined8 local_3f8 [2];
  undefined8 local_3e8;
  undefined8 local_3b8;
  undefined1 (*pauStack_3b0) [16];
  double *local_3a8;
  double local_3a0;
  double local_398;
  undefined1 local_390;
  char cStack_38f;
  undefined2 uStack_38e;
  undefined4 uStack_38c;
  undefined8 local_388;
  double local_380;
  undefined1 (**local_378) [16];
  double local_370;
  double local_368;
  double dStack_360;
  double *local_358;
  double local_350;
  double local_348;
  undefined8 local_340;
  undefined8 local_338;
  double local_330;
  double local_328;
  double local_320;
  double local_318 [6];
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined8 local_2e0;
  double local_2d8;
  double local_2d0;
  undefined1 *local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_294;
  undefined4 local_28c;
  undefined8 local_280;
  undefined4 local_278;
  undefined2 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_23c;
  undefined4 local_234;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined4 local_1e4;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_194;
  undefined4 local_18c;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 local_120;
  undefined1 local_11f;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_8d8;
  iVar18 = *(int *)(param_1 + 3);
  iVar17 = *(int *)(param_1 + 1) + iVar18 + *(int *)(param_1 + 5) + *(int *)(param_1 + 7);
  uVar30 = 0;
  local_388 = (double)CONCAT44(local_388._4_4_,(undefined4)local_388);
  local_340 = (double)CONCAT44(local_340._4_4_,(undefined4)local_340);
  local_338 = (double)CONCAT44(local_338._4_4_,(undefined4)local_338);
  local_2e0 = (double)CONCAT44(local_2e0._4_4_,(undefined4)local_2e0);
  if ((1 < iVar17) &&
     (local_388 = (double)CONCAT44(local_388._4_4_,(undefined4)local_388),
     local_340 = (double)CONCAT44(local_340._4_4_,(undefined4)local_340),
     local_338 = (double)CONCAT44(local_338._4_4_,(undefined4)local_338),
     local_2e0 = (double)CONCAT44(local_2e0._4_4_,(undefined4)local_2e0),
     param_2 < iVar17 + *(int *)(param_1 + 9))) {
    local_6b8 = 0;
    uStack_6b0 = 0;
    local_6c8 = (undefined1 (*) [16])0x0;
    uStack_6c0 = 0;
    local_6d8 = (undefined1 (**) [16])0x0;
    uStack_6d0 = 0;
    local_6e8 = 0;
    uStack_6e0 = 0;
    local_6f0 = (undefined1 (**) [16])0x0;
    local_84c = param_2;
    local_848 = param_3;
    if (*param_3 == '\x01') {
      ppauVar13 = (undefined1 (**) [16])FUN_14001cc68(0x220);
      local_8b8 = (undefined1 **)((ulonglong)local_8b8 & 0xffffffffffffff00);
      FUN_1411b354a(ppauVar13,0,0,0);
      iVar18 = *(int *)(param_1 + 3);
      local_6f0 = ppauVar13;
    }
    local_6f8 = &local_6f0;
    local_718 = &local_6e8;
    local_710 = &local_6d8;
    local_708 = &local_6b8;
    local_700 = &local_6c8;
    local_858 = param_1 + 2;
    if (0 < iVar18) {
      lVar22 = 0x48;
      lVar29 = 0;
      do {
        dVar4 = *local_858;
        local_878 = *(double *)((longlong)dVar4 + -0x48 + lVar22);
        local_870 = *(double *)((longlong)dVar4 + -0x40 + lVar22);
        dVar24 = *(double *)((longlong)dVar4 + -0x38 + lVar22);
        dVar35 = *(double *)((longlong)dVar4 + -0x30 + lVar22);
        dVar16 = *(double *)((longlong)dVar4 + -0x28 + lVar22);
        dVar1 = *(double *)((longlong)dVar4 + -0x20 + lVar22);
        dVar2 = *(double *)((longlong)dVar4 + -0x18 + lVar22);
        local_868 = *(double *)((longlong)dVar4 + -0x10 + lVar22);
        uStack_860 = 0;
        dVar3 = *(double *)((longlong)dVar4 + -8 + lVar22);
        dVar4 = *(double *)((longlong)dVar4 + lVar22);
        if (local_6f0 == (undefined1 (**) [16])0x0) {
          dVar38 = dVar16 + dVar16;
          dVar41 = dVar1 + dVar1;
          dVar40 = dVar35 * (dVar35 + dVar35);
          local_818 = (dVar35 + dVar35) * dVar2;
          dVar6 = 1.0 - (dVar38 * dVar16 + dVar41 * dVar1);
          local_820 = 1.0 - (dVar41 * dVar1 + dVar40);
          dVar42 = dVar35 * dVar38 - dVar2 * dVar41;
          dVar1 = dVar35 * dVar38 + dVar2 * dVar41;
          local_800 = 1.0 - (dVar38 * dVar16 + dVar40);
          local_808 = dVar16 * dVar41 - local_818;
          local_818 = dVar16 * dVar41 + local_818;
          local_810 = dVar35 * dVar41 + dVar38 * dVar2;
          dVar38 = dVar35 * dVar41 - dVar38 * dVar2;
          uStack_7d0 = 0;
          dVar16 = -dVar4;
          dVar35 = -dVar3;
          uStack_7f0 = 0;
          dVar37 = -local_868;
          local_830 = dVar38 * dVar37;
          dVar44 = local_800 * dVar16;
          local_828 = dVar1 * dVar37;
          dVar39 = local_808 * dVar16;
          dVar41 = dVar35 * dVar42;
          dVar37 = dVar37 * dVar6;
          local_7e8 = dVar37 + dVar41;
          uStack_7e0 = 0x8000000000000000;
          dVar16 = dVar16 * local_810;
          local_3b8 = (undefined **)(dVar16 + local_7e8 + local_878);
          dVar40 = local_828 + local_820 * dVar35;
          pauStack_3b0 = (undefined1 (*) [16])(dVar39 + dVar40 + local_870);
          dVar2 = local_830 + local_818 * dVar35;
          local_3a8 = (double *)(dVar44 + dVar2 + dVar24);
          dVar6 = dVar6 * local_868;
          dVar41 = dVar41 + dVar6;
          local_3a0 = dVar16 + dVar41 + local_878;
          dVar1 = dVar1 * local_868;
          dVar43 = local_820 * dVar35 + dVar1;
          local_398 = dVar39 + dVar43 + local_870;
          dVar38 = dVar38 * local_868;
          local_880 = (double *)(local_818 * dVar35 + dVar38);
          dVar35 = dVar44 + (double)local_880 + dVar24;
          local_390 = SUB81(dVar35,0);
          cStack_38f = (char)((ulonglong)dVar35 >> 8);
          uStack_38e = (undefined2)((ulonglong)dVar35 >> 0x10);
          uStack_38c = (undefined4)((ulonglong)dVar35 >> 0x20);
          dVar42 = dVar42 * dVar3;
          dVar6 = dVar6 + dVar42;
          local_388 = dVar16 + dVar6 + local_878;
          dVar1 = dVar1 + local_820 * dVar3;
          local_380 = dVar39 + dVar1 + local_870;
          dVar38 = dVar38 + local_818 * dVar3;
          local_378 = (undefined1 (**) [16])(dVar44 + dVar38 + dVar24);
          dVar35 = local_818 * dVar3 + local_830;
          dVar7 = local_820 * dVar3 + local_828;
          local_888 = (double *)(dVar42 + dVar37);
          local_370 = dVar16 + (double)local_888 + local_878;
          local_368 = dVar39 + dVar7 + local_870;
          dStack_360 = dVar44 + dVar35 + dVar24;
          dVar37 = local_810 * dVar4;
          local_358 = (double *)(local_7e8 + dVar37 + local_878);
          dVar16 = local_808 * dVar4;
          local_350 = dVar40 + dVar16 + local_870;
          dVar40 = local_800 * dVar4;
          local_348 = dVar2 + dVar40 + dVar24;
          local_340 = dVar41 + dVar37 + local_878;
          local_338 = dVar43 + dVar16 + local_870;
          local_330 = (double)local_880 + dVar40 + dVar24;
          local_328 = dVar6 + dVar37 + local_878;
          local_320 = dVar1 + dVar16 + local_870;
          local_318[0] = dVar38 + dVar40 + dVar24;
          local_318[1] = dVar37 + (double)local_888 + local_878;
          local_318[2] = dVar16 + dVar7 + local_870;
          local_318[3] = dVar40 + dVar35 + dVar24;
          local_318[4] = 1.69759663316747e-313;
          uVar31 = 0;
          uVar32 = 0;
          if (0.0 <= local_868) {
            uVar31 = SUB84(local_868,0);
            uVar32 = (undefined4)((ulonglong)local_868 >> 0x20);
          }
          dVar35 = 0.0;
          if (0.0 <= dVar3) {
            dVar35 = dVar3;
          }
          dVar16 = 0.0;
          if (0.0 <= dVar4) {
            dVar16 = dVar4;
          }
          local_730 = 8;
          local_838 = dVar24;
          local_7f8 = dVar3;
          local_7d8 = dVar4;
          local_738 = &local_3b8;
          FUN_143b18e56(&local_718,&local_738,
                        dVar16 * dVar35 * (double)CONCAT44(uVar32,uVar31) * 8.0,lVar29 + 0x400000000
                       );
        }
        else {
          memset(&pauStack_3b0,0,0x91);
          dVar38 = local_868;
          local_3b8 = &PTR_FUN_14ae75120;
          local_2c0 = CONCAT26(local_2c0._6_2_,0x100000000);
          local_2c8 = &DAT_100000001;
          local_2c0 = CONCAT44(local_2c0._4_4_,1);
          local_318[0] = local_878;
          local_318[1] = local_870;
          local_2e8 = SUB84(dVar2,0);
          uStack_2e4 = (undefined4)((ulonglong)dVar2 >> 0x20);
          local_318[2] = dVar24;
          local_318[3] = dVar35;
          local_318[4] = dVar16;
          local_318[5] = dVar1;
          local_2d8 = dVar3;
          local_2d0 = dVar4;
          local_2e0 = local_868;
          FUN_148396580(&local_3b8);
          dVar24 = 0.0;
          if (0.0 <= dVar38) {
            dVar24 = dVar38;
          }
          dVar35 = 0.0;
          if (0.0 <= dVar3) {
            dVar35 = dVar3;
          }
          dVar16 = 0.0;
          if (0.0 <= dVar4) {
            dVar16 = dVar4;
          }
          local_728 = pauStack_3b0;
          local_720 = (int)local_3a8;
          FUN_143b18e56(&local_718,&local_728,dVar16 * dVar35 * dVar24 * 8.0,lVar29 + 0x400000000);
          FUN_143b18f04(&local_6f8);
          FUN_146bd8050(&local_3b8);
        }
        lVar29 = lVar29 + 1;
        lVar22 = lVar22 + 0x50;
      } while (lVar29 < *(int *)(param_1 + 3));
    }
    if (0 < *(int *)(param_1 + 1)) {
      lVar22 = 0;
      lVar29 = 0;
      do {
        dVar24 = *param_1;
        memset(&pauStack_3b0,0,0x91);
        local_318[3] = 0.0;
        local_318[4] = 0.0;
        local_318[5] = 0.0;
        local_2e8 = 0;
        uStack_2e4 = 0x3ff00000;
        local_2e0._0_4_ = 0;
        local_2e0._4_4_ = 0x3ff00000;
        local_2d8 = 1.0;
        local_2d0 = 1.0;
        local_2c0 = CONCAT26((short)((ulonglong)local_2c0 >> 0x30),0x100000000);
        local_3b8 = &PTR_FUN_14ae75170;
        local_318[2] = *(double *)((longlong)dVar24 + 0x10 + lVar22);
        local_318[0] = *(double *)((longlong)dVar24 + lVar22);
        local_318[1] = ((double *)((longlong)dVar24 + lVar22))[1];
        dVar24 = *(double *)((longlong)dVar24 + 0x18 + lVar22);
        uVar31 = 0xa0000000;
        uVar32 = 0x3eb0c6f7;
        if (9.999999974752427e-07 <= dVar24) {
          uVar31 = SUB84(dVar24,0);
          uVar32 = (undefined4)((ulonglong)dVar24 >> 0x20);
        }
        uStack_2b8 = CONCAT44(1,(float)(double)CONCAT44(uVar32,uVar31));
        local_2c8 = (undefined1 *)0x600000006;
        local_2c0 = CONCAT44(local_2c0._4_4_,6);
        FUN_148397678(&local_3b8);
        local_568 = &pauStack_3b0;
        uStack_560 = &dStack_360;
        FUN_1483adb3a(&local_638,&local_568);
        local_748 = pauStack_3b0;
        local_740 = (int)local_3a8;
        FUN_143b18e56(&local_718,&local_748,local_638,lVar29 + 0x200000000);
        FUN_143b18f04(&local_6f8);
        FUN_146bd8050(&local_3b8);
        lVar29 = lVar29 + 1;
        lVar22 = lVar22 + 0x20;
      } while (lVar29 < *(int *)(param_1 + 1));
    }
    local_880 = param_1 + 4;
    if (0 < *(int *)(param_1 + 5)) {
      uVar30 = 0;
      do {
        dVar24 = *local_880;
        memset(&pauStack_3b0,0,0x91);
        local_3b8 = &PTR_FUN_14ae75180;
        local_318[3] = (double)((ulonglong)local_318[3] & 0xffffff0000000000);
        pdVar21 = (double *)((longlong)dVar24 + 0x18 + uVar30 * 0x40);
        local_318[0] = pdVar21[4];
        local_318[1] = pdVar21[3] + pdVar21[3];
        local_318[2] = 3.39519326593969e-313;
        FUN_148397c72(&local_3b8);
        local_638 = (undefined1 (**) [16])0x0;
        uStack_630 = 0.0;
        local_628 = (code *)0x0;
        dStack_620 = 1.0;
        FUN_146bfb7f2(&local_638,&DAT_14c8463b8,pdVar21);
        dVar4 = pdVar21[3] + pdVar21[3];
        dVar24 = pdVar21[2];
        dVar35 = pdVar21[1];
        dVar16 = *pdVar21;
        dVar1 = pdVar21[-1];
        dVar2 = pdVar21[-3];
        dVar3 = pdVar21[-2];
        local_568 = local_638;
        uStack_560 = (double *)uStack_630;
        local_558 = local_628;
        dStack_550 = dStack_620;
        FUN_1448052ee(&local_568,&local_6a8);
        FUN_144a7484c(&local_6a8,&local_568);
        if ((longlong)(int)local_3a8 != 0) {
          pauVar14 = pauStack_3b0;
          do {
            dVar6 = *(double *)*pauVar14;
            dVar37 = *(double *)(*pauVar14 + 8);
            dVar44 = *(double *)pauVar14[1] * 1.0;
            dVar38 = dVar37 * (double)local_568 - (double)uStack_560 * dVar6;
            dVar40 = dVar44 * (double)uStack_560 - (double)local_558 * dVar37;
            dVar41 = dVar6 * (double)local_558 - (double)local_568 * dVar44;
            dVar40 = dVar40 + dVar40;
            dVar41 = dVar41 + dVar41;
            dVar38 = dVar38 + dVar38;
            dVar37 = ((double)local_558 * dVar40 - (double)local_568 * dVar38) +
                     dStack_550 * dVar41 + dVar37 + (dVar3 - dVar35 * dVar4 * 0.5);
            auVar5._8_4_ = SUB84(dVar37,0);
            auVar5._0_8_ = (dVar38 * (double)uStack_560 - dVar41 * (double)local_558) +
                           dStack_550 * dVar40 + dVar6 + (dVar2 - dVar4 * dVar16 * 0.5);
            auVar5._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
            *pauVar14 = auVar5;
            *(double *)pauVar14[1] =
                 dVar38 * dStack_550 + dVar44 +
                 (dVar41 * (double)local_568 - dVar40 * (double)uStack_560) +
                 (dVar1 - dVar24 * dVar4 * 0.5);
            pauVar14 = (undefined1 (*) [16])(pauVar14[1] + 8);
          } while (pauVar14 !=
                   (undefined1 (*) [16])((longlong)pauStack_3b0 + (longlong)(int)local_3a8 * 0x18));
        }
        local_568 = &pauStack_3b0;
        uStack_560 = &dStack_360;
        FUN_1483adb3a(&local_6a8,&local_568);
        local_758 = pauStack_3b0;
        local_750 = (int)local_3a8;
        FUN_143b18e56(&local_718,&local_758,local_6a8,uVar30 | 0x800000000);
        FUN_143b18f04(&local_6f8);
        FUN_146bd8050(&local_3b8);
        uVar30 = uVar30 + 1;
      } while ((longlong)uVar30 < (longlong)*(int *)(param_1 + 5));
    }
    local_888 = param_1 + 6;
    if (0 < *(int *)(param_1 + 7)) {
      dVar24 = 0.0;
      local_840 = param_1;
      do {
        dVar16 = *local_888;
        dVar35 = (double)((longlong)dVar16 + (longlong)dVar24 * 0x220);
        local_878 = dVar24;
        FUN_1482e1672(&local_3b8,dVar35);
        pauVar14 = (undefined1 (*) [16])local_3b8;
        local_558 = (code *)0x0;
        local_548 = &PTR_DAT_149f363e0;
        local_568 = (undefined1 (**) [16])&DAT_146be727e;
        local_868 = dVar35;
        local_540 = dVar35;
        FUN_146be708e((longlong)dVar16 + (longlong)dVar24 * 0x220 + 0x20,&local_3b8,&local_568);
        FUN_146be6fec(&local_3b8,&local_568);
        iVar18 = *(int *)local_378 * 0x200 + *(int *)((longlong)local_378 + 4);
        local_618 = (longlong *)0x0;
        local_628 = (code *)0x0;
        local_638 = local_378;
        uStack_630 = (double)CONCAT44(iVar18,iVar18);
        FUN_146be715a(&local_628,&local_3b8);
        uVar12 = (uint)uStack_560;
        if ((uint)uStack_560 != (uint)uStack_630) {
          do {
            pcVar11 = local_558;
            local_7c8 = CONCAT44(local_7c8._4_4_,uVar12);
            ppuVar20 = local_548;
            if (local_548 == (undefined **)0x0) {
              ppuVar20 = &local_538;
            }
            uVar15 = (**(code **)(*ppuVar20 + 8))();
            (*pcVar11)(&local_6a8,uVar15,&local_7c8);
            uVar30 = uStack_6b0;
            lVar22 = (longlong)(int)uStack_6b0;
            uVar12 = (int)uStack_6b0 + 1;
            uStack_6b0 = CONCAT44(uStack_6b0._4_4_,uVar12);
            if (uStack_6b0._4_4_ < uVar12) {
              FUN_1403e3958(&local_6b8,uVar30 & 0xffffffff);
            }
            *(undefined8 *)(local_6b8 + 0x10 + lVar22 * 0x18) = local_698;
            puVar26 = (undefined4 *)(local_6b8 + lVar22 * 0x18);
            *puVar26 = (undefined4)local_6a8;
            puVar26[1] = local_6a8._4_4_;
            puVar26[2] = (undefined4)uStack_6a0;
            puVar26[3] = uStack_6a0._4_4_;
            iVar18 = uStack_560._4_4_;
            uVar12 = (uint)uStack_560;
            do {
              uVar12 = uVar12 + 1;
              uStack_560 = (double *)CONCAT44(uStack_560._4_4_,uVar12);
              if (iVar18 <= (int)uVar12) break;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*local_568[1] + (ulonglong)(uVar12 >> 9) * 8) +
                                                 (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
          } while ((uint)uStack_630 != uVar12);
        }
        if (local_628 != (code *)0x0) {
          plVar19 = local_618;
          if (local_618 == (longlong *)0x0) {
            plVar19 = local_608;
          }
          (**(code **)(*plVar19 + 0x10))();
        }
        param_1 = local_840;
        dVar24 = local_878;
        if (local_558 != (code *)0x0) {
          ppuVar20 = local_548;
          if (local_548 == (undefined **)0x0) {
            ppuVar20 = &local_538;
          }
          (**(code **)(*ppuVar20 + 0x10))();
        }
        if ((undefined1 (*) [16])local_3b8 != (undefined1 (*) [16])0x0) {
          pdVar21 = local_3a8;
          if (local_3a8 == (double *)0x0) {
            pdVar21 = &local_398;
          }
          (**(code **)((longlong)*pdVar21 + 0x10))();
        }
        uVar30 = uStack_6c0;
        uVar31 = *(undefined4 *)((longlong)local_868 + 0x50);
        lVar22 = (longlong)(int)uStack_6c0;
        uVar12 = (int)uStack_6c0 + 1;
        uStack_6c0 = CONCAT44(uStack_6c0._4_4_,uVar12);
        if (uStack_6c0._4_4_ < uVar12) {
          FUN_1446f48e2(&local_6c8,uVar30 & 0xffffffff);
        }
        uVar30 = uStack_6d0;
        *(undefined4 *)(*local_6c8 + lVar22 * 4) = uVar31;
        lVar22 = (longlong)(int)uStack_6d0;
        uVar12 = (int)uStack_6d0 + 1;
        uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uVar12);
        if (uStack_6d0._4_4_ < uVar12) {
          FUN_144941252(&local_6d8,uVar30 & 0xffffffff);
        }
        uVar30 = uStack_6e0;
        local_6d8[lVar22] = pauVar14;
        lVar22 = (longlong)(int)uStack_6e0;
        uVar12 = (int)uStack_6e0 + 1;
        uStack_6e0 = CONCAT44(uStack_6e0._4_4_,uVar12);
        if (uStack_6e0._4_4_ < uVar12) {
          FUN_143b23964(&local_6e8,uVar30 & 0xffffffff);
        }
        *(ulonglong *)(local_6e8 + lVar22 * 8) = (ulonglong)dVar24 | 0x1000000000;
        if (local_6f0 != (undefined1 (**) [16])0x0) {
          local_568 = local_6f0;
          local_398 = 0.0;
          local_390 = 0;
          cStack_38f = '\0';
          uStack_38e = 0;
          local_3b8 = (undefined **)0x0;
          pauStack_3b0 = (undefined1 (*) [16])0x0;
          uStack_38c = 0x80;
          local_388._0_4_ = 0xffffffff;
          local_388._4_4_ = 0;
          local_378 = (undefined1 (**) [16])0x0;
          local_370 = (double)((ulonglong)local_370 & 0xffffffff00000000);
          local_348 = 0.0;
          local_340._0_4_ = 0;
          local_368 = 0.0;
          dStack_360 = 0.0;
          local_340._4_4_ = 0x80;
          local_338._0_4_ = 0xffffffff;
          local_338._4_4_ = 0;
          local_328 = 0.0;
          local_320 = (double)((ulonglong)local_320 & 0xffffffff00000000);
          local_318[0] = (double)CONCAT62(local_318[0]._2_6_,0x101);
          local_318[5] = 0.0;
          local_2e8 = 0;
          local_318[1] = 0.0;
          local_318[2] = 0.0;
          uStack_2e4 = 0x80;
          local_2e0._0_4_ = 0xffffffff;
          local_2e0._4_4_ = 0;
          local_2d0 = 0.0;
          local_2c8 = (undefined1 *)((ulonglong)local_2c8 & 0xffffffff00000000);
          local_2a0 = 0;
          local_298 = 0;
          local_2c0 = 0;
          uStack_2b8 = 0;
          local_294 = 0xffffffff00000080;
          local_28c = 0;
          local_280 = 0;
          local_278 = 0;
          local_270 = 0x101;
          local_248 = 0;
          local_240 = 0;
          local_268 = 0;
          uStack_260 = 0;
          local_23c = 0xffffffff00000080;
          local_234 = 0;
          local_228 = 0;
          local_220 = 0;
          local_1f8 = 0;
          local_1f0 = 0;
          local_218 = 0;
          uStack_210 = 0;
          local_1ec = 0xffffffff00000080;
          local_1e4 = 0;
          local_1d8 = 0;
          local_1d0 = 0;
          local_1c7 = 1;
          local_1c8 = 1;
          local_1a0 = 0;
          local_198 = 0;
          local_1c0 = 0;
          uStack_1b8 = 0;
          local_194 = 0xffffffff00000080;
          local_18c = 0;
          local_180 = 0;
          local_178 = 0;
          local_150 = 0;
          local_148 = 0;
          local_170 = 0;
          uStack_168 = 0;
          local_144 = 0xffffffff00000080;
          local_13c = 0;
          local_130 = 0;
          local_128 = 0;
          local_11f = 1;
          local_120 = 1;
          local_108 = 0;
          uStack_100 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_3f8[0] = 0;
          local_3e8 = 0;
          local_438[0] = 0;
          local_428 = 0;
          local_8b8 = (undefined1 **)local_3f8;
          local_8b0 = (undefined8 *)((ulonglong)local_8b0 & 0xffffffffffffff00);
          FUN_146bcbbdc(&local_568,local_868,&local_3b8,local_438);
          FUN_146bfdcfe(&local_3b8);
        }
        dVar24 = (double)((longlong)dVar24 + 1);
      } while ((longlong)dVar24 < (longlong)*(int *)(param_1 + 7));
    }
    uVar30 = uStack_6c0;
    iVar18 = (int)uStack_6c0;
    lVar22 = (longlong)(int)uStack_6c0;
    if (lVar22 < 2) {
      uVar30 = 0;
    }
    else {
      local_768 = (undefined4 *)0x0;
      uStack_760 = 0;
      FUN_144a127d2((undefined1 (*) [16])&local_768,uStack_6c0 & 0xffffffff,1);
      *local_768 = 0;
      iVar17 = *(int *)*local_6c8;
      lVar29 = 1;
      do {
        local_768[lVar29] = iVar17;
        iVar17 = iVar17 + *(int *)(*local_6c8 + lVar29 * 4);
        lVar29 = lVar29 + 1;
      } while (lVar22 != lVar29);
      local_568 = (undefined1 (**) [16])0x3f50624dd2f1a9fc;
      uStack_560 = (double *)0x3f50624dd2f1a9fc;
      local_558 = (code *)0x3e7ad7f29abcaf48;
      dStack_550 = 0.99;
      local_548 = (undefined **)0x403e000000000000;
      local_540 = 170.0;
      local_538 = (undefined *)0x3fb999999999999a;
      local_530 = 0x32;
      local_52c = 0x101;
      local_528 = 0;
      local_520 = 0xffffffff;
      local_518 = 0;
      uStack_510 = 0;
      local_4d0 = DAT_14c846510;
      uStack_4c8 = DAT_14c846518;
      local_4c0 = DAT_14c846520;
      local_4e8 = (undefined4)DAT_14c8464e0;
      uStack_4e4 = DAT_14c8464e0._4_4_;
      uStack_4e0 = (undefined4)DAT_14c8464e8;
      uStack_4dc = DAT_14c8464e8._4_4_;
      local_4d8 = DAT_14c8464f0;
      local_508 = 0;
      uStack_500 = 0;
      local_4f8 = 0;
      local_4f0 = 0x3ff0000000000000;
      local_488 = 0;
      local_480 = 0;
      local_4a8 = 0;
      uStack_4a0 = 0;
      local_4b8 = 0;
      uStack_4b0 = 0;
      local_47c = 0xffffffff00000080;
      local_474 = 0;
      local_468 = 0;
      local_460 = 0;
      local_458 = 0;
      uStack_450 = 0;
      local_448 = 0;
      uStack_440 = 0;
      local_8b0 = &local_778;
      local_778 = 0;
      local_770 = 0;
      local_780 = &local_3b8;
      pauStack_3b0 = (undefined1 (*) [16])&local_6b8;
      local_8b8 = &local_788;
      local_788 = &LAB_143b23adc;
      local_638 = &local_6c8;
      local_798 = &LAB_143b23ace;
      local_7a0 = &local_6a8;
      local_6a8 = &local_6d8;
      local_7a8 = &LAB_143b23abe;
      local_790 = &local_638;
      local_3b8 = (undefined **)&local_768;
      FUN_146ba4c5e(&local_568,uStack_760 & 0xffffffff);
      local_7b8 = 0;
      uStack_7b0 = 0;
      local_7c8 = 0;
      uStack_7c0 = 0;
      dVar24 = 0.0;
      plVar19 = (longlong *)0x0;
      dVar35 = local_388;
      if (*local_848 != '\0') {
        pauStack_3b0 = (undefined1 (*) [16])0x4008000000000000;
        local_3a8 = (double *)((ulonglong)local_3a8 & 0xffffffffffffff00);
        uStack_38c = 0x80;
        local_388._0_4_ = CONCAT31(local_388._1_3_,1);
        local_380 = 0.5;
        local_378 = (undefined1 (**) [16])((ulonglong)local_378 & 0xffffffffffffff00);
        local_370 = 1.0;
        local_368 = 0.0;
        local_358 = (double *)0x0;
        local_328 = 1.0;
        pdVar21 = (double *)&DAT_14c846480;
        pdVar25 = local_318;
        for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
          *pdVar25 = *pdVar21;
          pdVar21 = pdVar21 + 1;
          pdVar25 = pdVar25 + 1;
        }
        cStack_38f = local_848[0x18];
        dVar35 = *(double *)(local_848 + 8);
        dVar24 = (*(double *)(local_848 + 0x10) + dVar35) * 0.5;
        local_398 = 1.0;
        if (1.0 <= dVar24) {
          local_398 = dVar24;
        }
        local_3b8 = (undefined **)CONCAT71(local_3b8._1_7_,1);
        local_390 = 1;
        local_3b8 = (undefined **)CONCAT44(1,(undefined4)local_3b8);
        local_3a0 = dVar35;
        FUN_146ba21d6(&local_638,local_6f0,1);
        local_680 = 0;
        local_678 = 0;
        uStack_6a0 = 0;
        local_698 = 0;
        local_674 = 0xffffffff00000080;
        local_66c = 0;
        local_660 = 0;
        local_658 = 0;
        local_650 = 0;
        local_648 = 0x4000000000000000;
        local_640 = 2;
        local_6a8 = &local_638;
        FUN_146bef8a8(&local_6a8,1);
        FUN_146b9dbb6(&local_7c8,&local_6a8,&local_3b8,0);
        local_658 = 0;
        if (local_660 != 0) {
          FUN_1400020a8();
        }
        FUN_146bddd50(&uStack_6a0);
        FUN_1457e5b52(&local_638);
        if (local_368 != 0.0) {
          pdVar21 = local_358;
          if (local_358 == (double *)0x0) {
            pdVar21 = &local_348;
          }
          (**(code **)((longlong)*pdVar21 + 0x10))();
        }
        dVar24 = dVar35 * 0.5;
        if (dVar35 * 0.5 <= 0.0) {
          dVar24 = 0.0;
        }
        plVar19 = (longlong *)0x0;
        dVar35 = (double)CONCAT44(local_388._4_4_,(undefined4)local_388);
        if (0 < (int)uStack_7c0) {
          plVar19 = &local_7c8;
          dVar35 = (double)CONCAT44(local_388._4_4_,(undefined4)local_388);
        }
      }
      local_388 = dVar35;
      FUN_146ba52d2(&local_568,0x3fd0000000000000,0x3fb999999999999a,dVar24);
      local_8a8 = 0;
      if (0 < local_84c - *(int *)(param_1 + 9)) {
        local_8a8 = local_84c - *(int *)(param_1 + 9);
      }
      local_520 = local_8a8 * local_8a8 + 1000;
      local_898 = 0;
      local_8b0 = (undefined8 *)((ulonglong)local_8b0 & 0xffffffffffffff00);
      local_8b8 = (undefined1 **)CONCAT71(local_8b8._1_7_,1);
      local_8a0 = plVar19;
      FUN_146ba2a14(&local_568,local_8a8,0,0);
      uVar30 = CONCAT71((int7)(int3)(uVar30 >> 8),(int)uStack_510 != iVar18);
      if ((int)uStack_510 != iVar18) {
        local_868 = *param_1;
        local_878 = param_1[2];
        *param_1 = 0.0;
        param_1[1] = 0.0;
        *local_858 = 0.0;
        local_858[1] = 0.0;
        dVar24 = param_1[4];
        *local_880 = 0.0;
        local_880[1] = 0.0;
        dVar35 = param_1[6];
        local_870 = (double)CONCAT44(local_870._4_4_,*(undefined4 *)(param_1 + 7));
        param_1[6] = 0.0;
        param_1[7] = 0.0;
        if (0 < (int)uStack_510) {
          uVar28 = 0;
          do {
            lVar22 = (longlong)*(int *)(*(longlong *)(local_518 + uVar28 * 8) + 0x240);
            if (lVar22 < 0) {
switchD_14839630f_caseD_2:
              FUN_148397d06(&local_568,&local_3b8,uVar28 & 0xffffffff);
              iVar18 = *(int *)(param_1 + 7);
              *(uint *)(param_1 + 7) = iVar18 + 1U;
              if (*(uint *)((longlong)param_1 + 0x3c) < iVar18 + 1U) {
                FUN_1483ba0ee(local_888,iVar18);
              }
              FUN_146bffece((longlong)iVar18 * 0x220 + (longlong)*local_888,&local_3b8);
              FUN_141082778(&local_3b8);
              goto LAB_148396398;
            }
            uVar12 = *(int *)(local_6e8 + 4 + lVar22 * 8) - 2;
            switch(uVar12 >> 1 | (uint)((uVar12 & 1) != 0) << 0x1f) {
            case 0:
              iVar18 = *(int *)(local_6e8 + lVar22 * 8);
              iVar17 = *(int *)(param_1 + 1);
              *(uint *)(param_1 + 1) = iVar17 + 1U;
              if (*(uint *)((longlong)param_1 + 0xc) < iVar17 + 1U) {
                FUN_1483b9e7e(param_1,iVar17);
              }
              puVar26 = (undefined4 *)((longlong)iVar18 * 0x20 + (longlong)local_868);
              dVar16 = *param_1;
              lVar22 = (longlong)iVar17 << 5;
              uVar31 = *puVar26;
              uVar32 = puVar26[1];
              uVar33 = puVar26[2];
              uVar34 = puVar26[3];
              uVar15 = *(undefined8 *)(puVar26 + 4);
              uVar36 = *(undefined8 *)(puVar26 + 6);
              goto LAB_14839638d;
            case 1:
              iVar18 = *(int *)(local_6e8 + lVar22 * 8);
              iVar17 = *(int *)(param_1 + 3);
              *(uint *)(param_1 + 3) = iVar17 + 1U;
              if (*(uint *)((longlong)param_1 + 0x1c) < iVar17 + 1U) {
                FUN_1483b9f04(local_858,iVar17);
              }
              puVar23 = (undefined8 *)((longlong)iVar18 * 0x50 + (longlong)local_878);
              puVar27 = (undefined8 *)((longlong)iVar17 * 0x50 + (longlong)*local_858);
              for (lVar22 = 10; lVar22 != 0; lVar22 = lVar22 + -1) {
                *puVar27 = *puVar23;
                puVar23 = puVar23 + 1;
                puVar27 = puVar27 + 1;
              }
              break;
            default:
              goto switchD_14839630f_caseD_2;
            case 3:
              iVar18 = *(int *)(local_6e8 + lVar22 * 8);
              iVar17 = *(int *)(param_1 + 5);
              *(uint *)(param_1 + 5) = iVar17 + 1U;
              if (*(uint *)((longlong)param_1 + 0x2c) < iVar17 + 1U) {
                FUN_1483b9f98(local_880,iVar17);
              }
              puVar26 = (undefined4 *)((longlong)iVar18 * 0x40 + (longlong)dVar24);
              dVar16 = *local_880;
              lVar22 = (longlong)iVar17 * 0x40;
              uVar31 = *puVar26;
              uVar32 = puVar26[1];
              uVar33 = puVar26[2];
              uVar34 = puVar26[3];
              uVar15 = *(undefined8 *)(puVar26 + 4);
              uVar36 = *(undefined8 *)(puVar26 + 6);
              uVar8 = *(undefined8 *)(puVar26 + 8);
              uVar9 = *(undefined8 *)(puVar26 + 10);
              uVar10 = *(undefined8 *)(puVar26 + 0xe);
              puVar23 = (undefined8 *)((longlong)dVar16 + 0x30 + lVar22);
              *puVar23 = *(undefined8 *)(puVar26 + 0xc);
              puVar23[1] = uVar10;
              puVar23 = (undefined8 *)((longlong)dVar16 + 0x20 + lVar22);
              *puVar23 = uVar8;
              puVar23[1] = uVar9;
LAB_14839638d:
              puVar23 = (undefined8 *)((longlong)dVar16 + 0x10 + lVar22);
              *puVar23 = uVar15;
              puVar23[1] = uVar36;
              puVar26 = (undefined4 *)((longlong)dVar16 + lVar22);
              *puVar26 = uVar31;
              puVar26[1] = uVar32;
              puVar26[2] = uVar33;
              puVar26[3] = uVar34;
              break;
            case 7:
              iVar18 = *(int *)(local_6e8 + lVar22 * 8);
              iVar17 = *(int *)(param_1 + 7);
              *(uint *)(param_1 + 7) = iVar17 + 1U;
              if (*(uint *)((longlong)param_1 + 0x3c) < iVar17 + 1U) {
                FUN_1483ba0ee(local_888,iVar17);
              }
              FUN_146bffece((longlong)iVar17 * 0x220 + (longlong)*local_888,
                            (longlong)iVar18 * 0x220 + (longlong)dVar35);
            }
LAB_148396398:
            uVar28 = uVar28 + 1;
          } while ((longlong)uVar28 < (longlong)(int)uStack_510);
        }
        FUN_1483beb67(dVar35,(ulonglong)local_870 & 0xffffffff);
        if (dVar35 != 0.0) {
          FUN_1400020a8(dVar35);
        }
        if (dVar24 != 0.0) {
          FUN_1400020a8(dVar24);
        }
        if (local_878 != 0.0) {
          FUN_1400020a8();
        }
        if (local_868 != 0.0) {
          FUN_1400020a8();
        }
      }
      if (local_7b8 != 0) {
        FUN_1400020a8();
      }
      if (local_7c8 != 0) {
        FUN_1400020a8();
      }
      FUN_146ec51d6(&local_568);
      if (local_768 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_6f0 != (undefined1 (**) [16])0x0) {
      (**(code **)**local_6f0)(local_6f0,1);
    }
    if (local_6e8 != 0) {
      FUN_1400020a8();
    }
    if (local_6d8 != (undefined1 (**) [16])0x0) {
      FUN_1400020a8();
    }
    if (local_6c8 != (undefined1 (*) [16])0x0) {
      FUN_1400020a8();
    }
    if (local_6b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_8d8) == DAT_14c707940) {
    return uVar30 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148396580 FUN_148396580 body=4343 status=ok
// SIG undefined FUN_148396580(void)

longlong FUN_148396580(longlong param_1)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  int *piVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  int iVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  uint *puVar35;
  ulonglong uVar36;
  bool bVar37;
  int iVar38;
  int iVar39;
  uint uVar40;
  ulonglong uVar41;
  bool bVar42;
  float fVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStack_258 [32];
  int local_238;
  longlong local_228;
  uint local_21c;
  ulonglong local_218;
  ulonglong local_210;
  ulonglong local_208;
  ulonglong local_200;
  ulonglong local_1f8;
  longlong local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  undefined4 local_1d4;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined4 local_1b8;
  uint local_1b4;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  longlong local_188;
  ulonglong local_180;
  longlong local_178;
  ulonglong local_170;
  undefined8 local_164;
  float local_15c;
  longlong local_158;
  ulonglong uStack_150;
  int local_144 [4];
  int iStack_134;
  int local_130;
  int local_128 [4];
  double local_118 [3];
  uint local_100 [4];
  undefined8 local_f0;
  double local_e8;
  double local_e0;
  uint local_d8 [4];
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  iVar14 = (int)*(undefined8 *)(param_1 + 0xf0);
  if (iVar14 < 3) {
    iVar14 = 2;
  }
  local_100[1] = (uint)((ulonglong)*(undefined8 *)(param_1 + 0xf0) >> 0x20);
  uVar22 = local_100[1];
  if ((int)local_100[1] < 3) {
    uVar22 = 2;
  }
  local_100[1] = uVar22;
  local_100[0] = iVar14;
  iVar23 = 2;
  if (2 < *(int *)(param_1 + 0xf8)) {
    iVar23 = *(int *)(param_1 + 0xf8);
  }
  local_130 = iVar23 + -1;
  dVar45 = 1.0;
  local_118[2] = 1.0 / (double)local_130;
  local_118[1] = 1.0 / (double)(int)(uVar22 + -1);
  local_118[0] = 1.0 / (double)(iVar14 + -1);
  local_128[1] = uVar22 + -2;
  local_128[0] = iVar14 + -2;
  local_128[2] = iVar23 + -2;
  stack0xfffffffffffffec8 = CONCAT44(uVar22 + -1,iVar14 + -1);
  local_238 = ((iVar23 + iVar14) * uVar22 + iVar23 * iVar14) * 2;
  iVar38 = iVar23 + iVar14 + -4;
  local_228 = param_1;
  local_100[2] = iVar23;
  FUN_146c5e8c6(local_118[0],
                (local_128[2] * (iVar14 + -2) + iVar38 * (uVar22 + -2)) * 2 +
                (uVar22 + iVar38 + -2) * 4 + 8,
                (local_130 * (iVar14 + -1) + (iVar14 + iVar23 + -2) * (uVar22 + -1)) * 4);
  local_144[2] = iVar14 * uVar22;
  local_144[0] = iVar23 * uVar22;
  local_158 = 0;
  uStack_150 = 0;
  local_144[1] = iVar23 * iVar14;
  FUN_140bfc200(&local_158,6,1);
  lVar24 = 0;
  do {
    iVar14 = *(int *)((longlong)&DAT_14ae75130 + lVar24);
    uVar7 = *(undefined4 *)((longlong)local_144 + lVar24);
    FUN_144a1a59e((longlong)iVar14 * 0x20 + local_158,uVar7,1);
    FUN_144a1a59e((longlong)(iVar14 * 2 + 1) * 0x10 + local_158,uVar7,1);
    lVar24 = lVar24 + 4;
  } while (lVar24 != 0xc);
  uVar29 = local_228 + 0xa0;
  uVar25 = 0;
  do {
    FUN_1483ad9de(uVar29,local_d8,uVar25 & 0xffffffff);
    lVar24 = *(longlong *)(local_228 + 8);
    *(double *)(lVar24 + 0x10 + uVar25 * 0x18) = local_c8;
    puVar1 = (undefined8 *)(lVar24 + uVar25 * 0x18);
    *puVar1 = CONCAT44(local_d8[1],local_d8[0]);
    puVar1[1] = CONCAT44(local_d8[3],local_d8[2]);
    uVar22 = (uint)(uVar25 >> 1);
    local_d8[0] = (uVar22 & 0x7fffffff ^ (uint)uVar25) & 1;
    local_d8[1] = uVar22 & 1;
    local_d8[2] = (uint)(3 < uVar25);
    lVar24 = 0;
    do {
      *(uint *)(*(longlong *)
                 (local_158 +
                 ((longlong)*(int *)((longlong)local_d8 + lVar24) +
                 (longlong)*(int *)((longlong)&DAT_14ae75130 + lVar24) * 2) * 0x10) +
               (longlong)
               (int)(local_100[*(int *)((longlong)&DAT_14ae75140 + lVar24)] *
                     local_d8[*(int *)((longlong)&DAT_14ae7514c + lVar24)] *
                     (local_100[*(int *)((longlong)&DAT_14ae7514c + lVar24)] - 1) +
                    (local_100[*(int *)((longlong)&DAT_14ae75140 + lVar24)] - 1) *
                    local_d8[*(int *)((longlong)&DAT_14ae75140 + lVar24)]) * 4) = (uint)uVar25;
      lVar24 = lVar24 + 4;
    } while (lVar24 != 0xc);
    uVar25 = uVar25 + 1;
  } while (uVar25 != 8);
  uVar25 = 8;
  lVar24 = 0;
  do {
    uVar22 = local_100[lVar24];
    if (2 < (int)uVar22) {
      iVar14 = (&DAT_14ae75130)[lVar24];
      local_210 = (longlong)iVar14 * 2;
      iVar23 = (&DAT_14ae75130)[(int)(&DAT_14ae75140)[lVar24]];
      local_1c8 = CONCAT44(local_1c8._4_4_,iVar23 * 2);
      iVar38 = (&DAT_14ae75130)[(int)(&DAT_14ae7514c)[lVar24]];
      local_208 = CONCAT44(local_208._4_4_,iVar38 * 2);
      local_1d0 = (longlong)(int)local_100[(int)(&DAT_14ae75140)[lVar24]] + -1;
      iVar16 = local_100[(int)(&DAT_14ae75140)[lVar24]] *
               (local_100[(int)(&DAT_14ae7514c)[lVar24]] - 1);
      local_d8[0] = 0;
      local_1e0 = (ulonglong)iVar16;
      dVar46 = local_118[lVar24];
      uVar21 = CONCAT71((int7)(int3)((uint)iVar16 >> 8),1);
      lVar32 = 0;
      do {
        local_1c0 = lVar32;
        local_1e8 = CONCAT44(local_1e8._4_4_,(int)uVar21);
        local_164 = CONCAT44(local_164._4_4_,iVar23 * 2 | (uint)local_1c0);
        local_d8[1] = 0;
        lVar32 = 0;
        bVar42 = true;
        do {
          bVar13 = bVar42;
          local_1b4 = iVar38 * 2 | (uint)lVar32;
          lVar19 = lVar32 * local_1e0 + local_1c0 * local_1d0;
          lVar27 = (longlong)
                   *(int *)(*(longlong *)(local_158 + (longlong)iVar14 * 0x20) + lVar19 * 4);
          lVar31 = *(longlong *)(local_228 + 8);
          dVar44 = *(double *)(lVar31 + lVar27 * 0x18);
          dVar2 = *(double *)(lVar31 + 8 + lVar27 * 0x18);
          dVar3 = *(double *)(lVar31 + 0x10 + lVar27 * 0x18);
          lVar19 = (longlong)
                   *(int *)(*(longlong *)(local_158 + (longlong)((int)local_210 + 1) * 0x10) +
                           lVar19 * 4);
          dVar4 = *(double *)(lVar31 + lVar19 * 0x18);
          dVar5 = *(double *)(lVar31 + 8 + lVar19 * 0x18);
          dVar6 = *(double *)(lVar31 + 0x10 + lVar19 * 0x18);
          uVar25 = (ulonglong)(int)uVar25;
          uVar18 = 2;
          uVar26 = 1;
          do {
            uVar17 = uVar18;
            dVar10 = (double)(int)uVar26 * dVar46;
            dVar11 = 1.0 - dVar10;
            lVar31 = *(longlong *)(local_228 + 8);
            *(double *)(lVar31 + uVar25 * 0x18) = dVar11 * dVar44 + dVar10 * dVar4;
            *(double *)(lVar31 + 8 + uVar25 * 0x18) = dVar11 * dVar2 + dVar5 * dVar10;
            *(double *)(lVar31 + 0x10 + uVar25 * 0x18) = dVar11 * dVar3 + dVar6 * dVar10;
            uVar29 = 0;
            piVar20 = (int *)&local_f0;
            puVar35 = (uint *)&local_164;
            bVar42 = true;
            do {
              bVar37 = bVar42;
              lVar31 = (longlong)(int)(&DAT_14ae75140)[uVar29 * 3 + lVar24];
              uVar28 = uVar29 << 2 ^ 4;
              *(uint *)((longlong)&local_f0 + uVar28) = uVar26;
              *piVar20 = *(int *)((longlong)local_d8 + uVar28) *
                         local_144[(longlong)(int)(&DAT_14ae75140)[uVar29 * 3 + lVar31] + 3];
              *(int *)(*(longlong *)(local_158 + (longlong)(int)*puVar35 * 0x10) +
                      ((longlong)(int)local_100[(int)(&DAT_14ae75140)[lVar31]] *
                       (longlong)local_f0._4_4_ + (longlong)(int)local_f0) * 4) = (int)uVar25;
              uVar29 = 1;
              piVar20 = (int *)((longlong)&local_f0 + 4);
              puVar35 = &local_1b4;
              bVar42 = false;
            } while (bVar37);
            uVar25 = uVar25 + 1;
            uVar18 = uVar17 + 1;
            uVar26 = uVar17;
          } while (uVar18 != uVar22);
          local_d8[1] = (uint)lVar32 + 1;
          lVar32 = 1;
          bVar42 = false;
        } while (bVar13);
        local_d8[0] = (uint)local_1c0 + 1;
        uVar28 = uVar21 & 1;
        uVar21 = 0;
      } while (uVar28 != 0);
    }
    lVar24 = lVar24 + 1;
  } while (lVar24 != 3);
  uVar21 = 0;
  do {
    local_1f8 = uVar21;
    local_200 = (ulonglong)(int)(&DAT_14ae7514c)[local_1f8];
    if (0 < local_128[local_200] * local_128[(int)(&DAT_14ae75140)[local_1f8]]) {
      local_210 = (longlong)(int)(&DAT_14ae75130)[local_1f8] * 2;
      uVar22 = local_100[(int)(&DAT_14ae75140)[local_1f8]];
      local_208 = (ulonglong)uVar22 * 4 + 4;
      uVar29 = (ulonglong)uVar22 * 4;
      uVar21 = 0;
      bVar42 = true;
      do {
        bVar13 = bVar42;
        if (2 < (int)uVar22) {
          uVar26 = local_100[local_200];
          uVar18 = uVar26 - 1;
          uVar28 = 1;
          lVar24 = (uVar21 | local_210) * 0x10;
          uVar21 = local_208;
          do {
            if (2 < (int)uVar26) {
              piVar20 = (int *)(*(longlong *)(local_158 + lVar24) + uVar28 * 4);
              lVar31 = (longlong)*piVar20;
              lVar32 = *(longlong *)(local_228 + 8);
              dVar46 = *(double *)(lVar32 + lVar31 * 0x18);
              dVar44 = *(double *)(lVar32 + 8 + lVar31 * 0x18);
              dVar2 = *(double *)(lVar32 + 0x10 + lVar31 * 0x18);
              lVar31 = (longlong)piVar20[(int)(uVar18 * uVar22)];
              dVar3 = *(double *)(lVar32 + lVar31 * 0x18);
              dVar4 = *(double *)(lVar32 + 8 + lVar31 * 0x18);
              dVar5 = *(double *)(lVar32 + 0x10 + lVar31 * 0x18);
              dVar6 = local_118[local_200];
              lVar32 = (longlong)(int)uVar25 * 0x18;
              uVar34 = 1;
              uVar36 = uVar21;
              do {
                dVar10 = (double)(int)uVar34 * dVar6;
                dVar11 = 1.0 - dVar10;
                lVar31 = *(longlong *)(local_228 + 8);
                *(double *)(lVar31 + lVar32) = dVar11 * dVar46 + dVar10 * dVar3;
                *(double *)(lVar31 + 8 + lVar32) = dVar11 * dVar44 + dVar4 * dVar10;
                *(double *)(lVar31 + 0x10 + lVar32) = dVar11 * dVar2 + dVar5 * dVar10;
                *(int *)(*(longlong *)(local_158 + lVar24) + uVar36) = (int)uVar25;
                uVar34 = uVar34 + 1;
                uVar36 = uVar36 + uVar29;
                uVar25 = (ulonglong)((int)uVar25 + 1);
                lVar32 = lVar32 + 0x18;
              } while (uVar18 != uVar34);
            }
            uVar28 = uVar28 + 1;
            uVar21 = uVar21 + 4;
          } while (uVar28 != uVar22 - 1);
        }
        uVar21 = 1;
        bVar42 = false;
      } while (bVar13);
    }
    uVar21 = local_1f8 + 1;
  } while (local_1f8 + 1 != 3);
  if (*(char *)(local_228 + 0xfc) != '\0') {
    dVar45 = *(double *)(local_228 + 0xe8) + *(double *)(local_228 + 0xe8);
    dVar46 = *(double *)(local_228 + 0xe0) + *(double *)(local_228 + 0xe0);
    dVar44 = *(double *)(local_228 + 0xd8) + *(double *)(local_228 + 0xd8);
    uVar25 = -(ulonglong)(-dVar45 <= dVar45);
    dVar45 = (double)(uVar25 & (ulonglong)dVar45 | ~uVar25 & (ulonglong)-dVar45);
    uVar25 = -(ulonglong)(-dVar46 <= dVar46);
    dVar46 = (double)(uVar25 & (ulonglong)dVar46 | ~uVar25 & (ulonglong)-dVar46);
    uVar25 = -(ulonglong)(-dVar44 <= dVar44);
    dVar44 = (double)(uVar25 & (ulonglong)dVar44 | ~uVar25 & (ulonglong)-dVar44);
    uVar25 = -(ulonglong)(dVar46 <= dVar44);
    dVar46 = (double)(~uVar25 & (ulonglong)dVar46 | uVar25 & (ulonglong)dVar44);
    uVar25 = -(ulonglong)(dVar45 <= dVar46);
    dVar45 = (double)(1.0 / (float)(double)(~uVar25 & (ulonglong)dVar45 | uVar25 & (ulonglong)dVar46
                                           ));
  }
  local_188 = local_228 + 0xb8;
  lVar24 = 0;
  uVar22 = 0;
  uVar25 = 0;
  local_1f8 = local_1f8 & 0xffffffff00000000;
  do {
    local_190 = (longlong)(int)(&DAT_14ae75130)[lVar24] * 2;
    local_1a8 = (longlong)(int)(&DAT_14ae75140)[lVar24];
    dVar46 = *(double *)(local_228 + 0xd8 + local_1a8 * 8);
    uVar21 = -(ulonglong)(-dVar46 <= dVar46);
    dVar44 = (double)(~uVar21 & (ulonglong)-dVar46 | (ulonglong)dVar46 & uVar21);
    local_1b0 = (longlong)(int)(&DAT_14ae7514c)[lVar24];
    dVar46 = *(double *)(local_228 + 0xd8 + local_1b0 * 8);
    uVar21 = -(ulonglong)(-dVar46 <= dVar46);
    dVar46 = (double)(~uVar21 & (ulonglong)-dVar46 | (ulonglong)dVar46 & uVar21);
    uVar29 = CONCAT71((int7)(uVar29 >> 8),1);
    uVar21 = 0;
    local_1f0 = lVar24;
    do {
      local_164 = 0;
      uVar26 = (uint)uVar21;
      iVar14 = uVar26 * 2 + -1;
      local_210 = CONCAT44(local_210._4_4_,iVar14);
      local_15c = 0.0;
      *(float *)((longlong)&local_164 + lVar24 * 4) = (float)iVar14;
      local_e0 = (double)local_15c;
      local_e8 = (double)local_164._4_4_;
      local_f0 = (double)(float)local_164;
      local_21c = uVar22;
      local_218 = uVar25;
      FUN_146bed047(local_d8,local_188,&local_f0);
      local_15c = (float)local_c8;
      local_164 = CONCAT44((float)(double)CONCAT44(local_d8[3],local_d8[2]),
                           (float)(double)CONCAT44(local_d8[1],local_d8[0]));
      uVar18 = local_100[local_1a8];
      lVar32 = (longlong)(int)uVar18;
      uVar25 = local_218;
      uVar22 = local_21c;
      if (0 < lVar32) {
        local_1d4 = (undefined4)uVar29;
        local_1e8 = uVar21 ^ 1;
        uVar17 = local_100[local_1b0];
        local_200 = (ulonglong)uVar17;
        lVar31 = 0;
        uVar25 = local_218 & 0xffffffff;
        do {
          if (0 < (int)uVar17) {
            fVar43 = (float)((double)(int)lVar31 * local_118[local_1a8] + -0.5);
            iVar14 = (&DAT_14ae75158)[lVar24];
            iVar23 = (&DAT_14ae75164)[lVar24];
            dVar2 = local_118[local_1b0];
            lVar15 = (longlong)(int)uVar25;
            lVar19 = lVar15 * 0xc;
            uVar28 = 0;
            lVar27 = lVar31;
            do {
              fVar47 = (float)((double)(int)uVar28 * dVar2 + -0.5);
              bVar42 = lVar24 != 1;
              fVar48 = fVar43;
              if (bVar42) {
                fVar48 = fVar47;
                fVar47 = fVar43;
              }
              fVar47 = fVar47 * (float)(iVar14 * (int)local_210);
              fVar49 = fVar48 * (float)iVar23;
              if (bVar42) {
                fVar49 = fVar47;
                fVar47 = fVar48 * (float)iVar23;
              }
              fVar49 = (float)((double)(fVar49 + 0.5) * (dVar44 + dVar44) * dVar45);
              fVar47 = (float)((double)(fVar47 + 0.5) * (dVar46 + dVar46) * dVar45);
              fVar48 = fVar47;
              if (bVar42) {
                fVar48 = fVar49;
                fVar49 = fVar47;
              }
              lVar24 = *(longlong *)(local_228 + 0x18) + lVar15 * 8 + 4;
              *(float *)(lVar24 + -4 + uVar28 * 8) = fVar48;
              *(float *)(lVar24 + uVar28 * 8) = fVar49;
              lVar24 = *(longlong *)(local_228 + 0x38);
              *(float *)(lVar24 + 8 + lVar19) = local_15c;
              *(undefined8 *)(lVar24 + lVar19) = local_164;
              lVar24 = (uVar21 | local_190) * 0x10;
              *(undefined4 *)(*(longlong *)(local_228 + 0x28) + lVar15 * 4 + uVar28 * 4) =
                   *(undefined4 *)(*(longlong *)(local_158 + lVar24) + lVar27 * 4);
              *(undefined4 *)(*(longlong *)(local_228 + 0x48) + lVar15 * 4 + uVar28 * 4) =
                   *(undefined4 *)(*(longlong *)(local_158 + lVar24) + lVar27 * 4);
              uVar28 = uVar28 + 1;
              lVar19 = lVar19 + 0xc;
              lVar27 = lVar27 + lVar32;
              lVar24 = local_1f0;
            } while (local_200 != uVar28);
            uVar25 = (ulonglong)(uint)((int)uVar25 + (int)uVar28);
          }
          lVar31 = lVar31 + 1;
        } while (lVar31 != lVar32);
        local_1e0 = uVar21;
        if (uVar18 != 1) {
          local_1b8 = (undefined4)uVar25;
          iVar14 = (int)local_218;
          uVar41 = local_218 & 0xffffffff;
          local_170 = (ulonglong)(uVar17 - 1);
          local_180 = (ulonglong)(uVar18 - 1);
          local_178 = local_1e8 * 4 * lVar32 + uVar21 * 4;
          local_1c0 = lVar32 * 4;
          uVar36 = (ulonglong)(uVar17 * (int)local_1e8 + iVar14 + uVar26);
          uVar34 = (ulonglong)(iVar14 + uVar17 + 1);
          local_1c8 = local_1e8 * 4 + uVar21 * 4 * lVar32;
          uVar33 = (ulonglong)(iVar14 + (int)local_1e8 + uVar26 * uVar17);
          local_1d0 = lVar32 * 4 + 4;
          local_1a0 = 0;
          uVar28 = 0;
          uVar18 = local_21c;
          local_208 = uVar34;
          do {
            local_198 = uVar28;
            uVar22 = uVar18;
            if (1 < (int)uVar17) {
              local_1e0 = (longlong)(int)local_1f8 * 4;
              lVar24 = (longlong)(int)local_1f8 * 0xc;
              local_1e8 = (ulonglong)uVar18;
              uVar28 = 0;
              lVar32 = local_1a0;
              do {
                lVar27 = (uVar21 | local_190) * 0x10;
                lVar19 = *(longlong *)(local_158 + lVar27);
                lVar31 = lVar19 + lVar32;
                uVar7 = *(undefined4 *)(local_1d0 + lVar31);
                uVar8 = *(undefined4 *)(lVar19 + lVar32);
                uVar9 = uVar7;
                if (*(char *)(local_228 + 0x98) == '\0') {
                  uVar9 = uVar8;
                  uVar8 = uVar7;
                }
                uVar7 = *(undefined4 *)(local_1c8 + lVar31);
                lVar31 = *(longlong *)(local_228 + 0x58);
                *(undefined4 *)(lVar31 + lVar24) = uVar9;
                *(undefined4 *)(lVar31 + 4 + lVar24) = uVar7;
                *(undefined4 *)(lVar31 + 8 + lVar24) = uVar8;
                iVar14 = (int)uVar28;
                iVar16 = (int)uVar41 + iVar14;
                iVar30 = (int)uVar34 + iVar14;
                iVar23 = iVar16;
                iVar38 = iVar30;
                if (*(char *)(local_228 + 0x98) != '\0') {
                  iVar23 = iVar30;
                  iVar38 = iVar16;
                }
                lVar31 = *(longlong *)(local_228 + 0x68);
                *(int *)(lVar31 + lVar24) = iVar23;
                iVar39 = (int)uVar36 + iVar14;
                *(int *)(lVar31 + 4 + lVar24) = iVar39;
                *(int *)(lVar31 + 8 + lVar24) = iVar38;
                iVar23 = iVar16;
                iVar38 = iVar30;
                if (*(char *)(local_228 + 0x98) != '\0') {
                  iVar23 = iVar30;
                  iVar38 = iVar16;
                }
                lVar31 = *(longlong *)(local_228 + 0x78);
                *(int *)(lVar31 + lVar24) = iVar23;
                *(int *)(lVar31 + 4 + lVar24) = iVar39;
                *(int *)(lVar31 + 8 + lVar24) = iVar38;
                uVar40 = uVar18 + iVar14;
                uVar22 = uVar26 | (uint)local_190;
                if (*(char *)(local_228 + 0xfd) != '\0') {
                  uVar22 = uVar40;
                }
                *(uint *)(*(longlong *)(local_228 + 0x88) + local_1e0 + uVar28 * 8) = uVar22;
                lVar19 = *(longlong *)(local_158 + lVar27);
                lVar31 = lVar19 + lVar32;
                uVar7 = *(undefined4 *)(local_178 + lVar31);
                uVar8 = *(undefined4 *)(local_1d0 + lVar31);
                uVar9 = *(undefined4 *)(lVar19 + lVar32);
                uVar12 = uVar7;
                if (*(char *)(local_228 + 0x98) == '\0') {
                  uVar12 = uVar9;
                  uVar9 = uVar7;
                }
                lVar31 = *(longlong *)(local_228 + 0x58);
                *(undefined4 *)(lVar31 + 0xc + lVar24) = uVar12;
                *(undefined4 *)(lVar31 + 0x10 + lVar24) = uVar8;
                *(undefined4 *)(lVar31 + 0x14 + lVar24) = uVar9;
                iVar14 = (int)uVar33 + iVar14;
                bVar42 = *(char *)(local_228 + 0x98) != '\0';
                iVar23 = iVar16;
                if (bVar42) {
                  iVar23 = iVar14;
                }
                lVar31 = *(longlong *)(local_228 + 0x68);
                *(int *)(lVar31 + 0xc + lVar24) = iVar23;
                iVar23 = iVar14;
                if (bVar42) {
                  iVar23 = iVar16;
                }
                *(int *)(lVar31 + 0x10 + lVar24) = iVar30;
                *(int *)(lVar31 + 0x14 + lVar24) = iVar23;
                iVar23 = iVar14;
                if (*(char *)(local_228 + 0x98) == '\0') {
                  iVar23 = iVar16;
                  iVar16 = iVar14;
                }
                lVar31 = *(longlong *)(local_228 + 0x78);
                *(int *)(lVar31 + 0xc + lVar24) = iVar23;
                *(int *)(lVar31 + 0x10 + lVar24) = iVar30;
                *(int *)(lVar31 + 0x14 + lVar24) = iVar16;
                if (*(char *)(local_228 + 0xfd) == '\0') {
                  uVar40 = uVar26 | (uint)local_190;
                }
                *(uint *)(*(longlong *)(local_228 + 0x88) + local_1e0 + 4 + uVar28 * 8) = uVar40;
                uVar28 = uVar28 + 1;
                local_1f8 = CONCAT44(local_1f8._4_4_,(int)local_1f8 + 2);
                lVar24 = lVar24 + 0x18;
                lVar32 = lVar32 + local_1c0;
              } while (local_170 != uVar28);
              uVar22 = uVar18 + (int)uVar28;
              lVar24 = local_1f0;
              local_21c = uVar18;
              local_218 = uVar33;
              local_210 = uVar36;
              local_208 = uVar34;
            }
            local_1a0 = local_1a0 + 4;
            uVar36 = uVar36 + local_200;
            uVar34 = uVar34 + local_200;
            uVar41 = uVar41 + local_200;
            uVar33 = uVar33 + local_200;
            uVar28 = local_198 + 1;
            uVar18 = uVar22;
          } while (local_198 + 1 != local_180);
        }
        uVar29 = uVar29 & 0xffffffff;
      }
      uVar21 = 1;
      uVar28 = uVar29 & 1;
      uVar29 = 0;
    } while (uVar28 != 0);
    lVar24 = lVar24 + 1;
  } while (lVar24 != 3);
  FUN_144716727(local_158,uStack_150 & 0xffffffff);
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if ((local_c0 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return local_228;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148397678 FUN_148397678 body=1530 status=ok
// SIG undefined FUN_148397678(void)

longlong FUN_148397678(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  FUN_148396580();
  dVar1 = *(double *)(param_1 + 0xa0);
  dVar2 = *(double *)(param_1 + 0xa8);
  dVar3 = *(double *)(param_1 + 0xb0);
  iVar15 = *(int *)(param_1 + 0x10);
  if (0 < iVar15) {
    dVar24 = *(double *)(param_1 + 0xc0);
    dVar4 = *(double *)(param_1 + 200);
    dVar21 = dVar4 + dVar4;
    dVar22 = dVar24 + dVar24;
    dVar23 = *(double *)(param_1 + 0xd0);
    dVar25 = *(double *)(param_1 + 0xb8);
    dVar6 = dVar21 * dVar25 - dVar22 * dVar23;
    dVar7 = dVar21 * dVar23 + dVar22 * dVar25;
    dVar12 = 1.0 - (dVar24 * dVar22 + dVar4 * dVar21);
    dVar26 = dVar23 * (dVar25 + dVar25);
    dVar20 = (dVar25 + dVar25) * dVar25;
    dVar10 = dVar21 * dVar24 + dVar26;
    dVar11 = 1.0 - (dVar4 * dVar21 + dVar20);
    dVar4 = dVar22 * dVar25 - dVar21 * dVar23;
    dVar20 = 1.0 - (dVar20 + dVar24 * dVar22);
    dVar26 = dVar21 * dVar24 - dVar26;
    dVar24 = dVar21 * dVar25 + dVar22 * dVar23;
    lVar19 = 0x10;
    lVar18 = 0;
    do {
      lVar16 = *(longlong *)(param_1 + 8);
      dVar23 = *(double *)(lVar16 + lVar19) - dVar3;
      dVar21 = *(double *)(lVar16 + -8 + lVar19) - dVar2;
      dVar25 = *(double *)(lVar16 + -0x10 + lVar19) - dVar1;
      if (*(int *)(param_1 + 0x104) == 1) {
        dVar8 = (dVar23 * dVar10 + dVar25 * dVar4 + dVar11 * dVar21) / *(double *)(param_1 + 0xe0);
        dVar13 = (dVar23 * dVar20 + dVar25 * dVar24 + dVar21 * dVar26) / *(double *)(param_1 + 0xe8)
        ;
        dVar14 = dVar8 * dVar8;
        dVar27 = dVar13 * dVar13;
        dVar22 = (dVar14 * dVar27) / 3.0 + ((1.0 - dVar14 * 0.5) - dVar27 * 0.5);
        dVar25 = (dVar23 * dVar6 + dVar25 * dVar12 + dVar7 * dVar21) / *(double *)(param_1 + 0xd8);
        if (dVar22 < 0.0) {
          dVar22 = sqrt(dVar22);
        }
        else {
          dVar22 = SQRT(dVar22);
        }
        dVar23 = dVar25 * dVar25;
        dVar9 = 1.0 - dVar23 * 0.5;
        dVar21 = (dVar23 * dVar27) / 3.0 + -dVar27 * 0.5 + dVar9;
        if (dVar21 < 0.0) {
          dVar21 = sqrt(dVar21);
        }
        else {
          dVar21 = SQRT(dVar21);
        }
        dVar23 = (dVar23 * dVar14) / 3.0 + -dVar14 * 0.5 + dVar9;
        if (dVar23 < 0.0) {
          dVar23 = sqrt(dVar23);
        }
        else {
          dVar23 = SQRT(dVar23);
        }
        dVar25 = dVar25 * dVar22;
        dVar8 = dVar8 * dVar21;
        dVar13 = dVar13 * dVar23;
        dVar23 = dVar20 * dVar13 + dVar10 * dVar8 + dVar6 * dVar25;
        dVar21 = dVar26 * dVar13 + dVar11 * dVar8 + dVar7 * dVar25;
        dVar25 = dVar13 * dVar24 + dVar8 * dVar4 + dVar25 * dVar12;
        lVar16 = *(longlong *)(param_1 + 8);
      }
      dVar22 = SQRT(dVar23 * dVar23 + dVar25 * dVar25 + dVar21 * dVar21);
      dVar27 = 1.0 / dVar22;
      if (0.0 < dVar22) {
        dVar25 = dVar25 * dVar27;
        dVar21 = dVar21 * dVar27;
      }
      else {
        dVar25 = 0.0;
        dVar21 = 0.0;
      }
      *(double *)(lVar16 + -0x10 + lVar19) = dVar25;
      *(double *)(lVar16 + -8 + lVar19) = dVar21;
      *(ulonglong *)(lVar16 + lVar19) = -(ulonglong)(0.0 < dVar22) & (ulonglong)(dVar23 * dVar27);
      lVar18 = lVar18 + 1;
      iVar15 = *(int *)(param_1 + 0x10);
      lVar19 = lVar19 + 0x18;
    } while (lVar18 < iVar15);
  }
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar18 = 2;
    lVar19 = 0;
    do {
      lVar17 = (longlong)*(int *)(*(longlong *)(param_1 + 0x48) + lVar19 * 4);
      lVar16 = *(longlong *)(param_1 + 8);
      dVar24 = *(double *)(lVar16 + 0x10 + lVar17 * 0x18);
      dVar4 = *(double *)(lVar16 + 8 + lVar17 * 0x18);
      lVar5 = *(longlong *)(param_1 + 0x38);
      *(float *)(lVar5 + -8 + lVar18 * 4) = (float)*(double *)(lVar16 + lVar17 * 0x18);
      *(float *)(lVar5 + -4 + lVar18 * 4) = (float)dVar4;
      *(float *)(lVar5 + lVar18 * 4) = (float)dVar24;
      lVar19 = lVar19 + 1;
      lVar18 = lVar18 + 3;
    } while (lVar19 < *(int *)(param_1 + 0x40));
    iVar15 = *(int *)(param_1 + 0x10);
  }
  if (0 < iVar15) {
    lVar18 = 0x10;
    lVar19 = 0;
    do {
      lVar16 = *(longlong *)(param_1 + 8);
      dVar24 = (double)*(float *)(param_1 + 0x100);
      *(double *)(lVar16 + -0x10 + lVar18) = dVar24 * *(double *)(lVar16 + -0x10 + lVar18) + dVar1;
      *(double *)(lVar16 + -8 + lVar18) = *(double *)(lVar16 + -8 + lVar18) * dVar24 + dVar2;
      *(double *)(lVar16 + lVar18) = *(double *)(lVar16 + lVar18) * dVar24 + dVar3;
      lVar19 = lVar19 + 1;
      lVar18 = lVar18 + 0x18;
    } while (lVar19 < *(int *)(param_1 + 0x10));
  }
  return param_1;
}



// FUNCTION 148397c72 FUN_148397c72 body=147 status=ok
// SIG undefined FUN_148397c72(void)

longlong FUN_148397c72(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 2;
  if (2 < *(int *)(param_1 + 0xb0)) {
    iVar2 = *(int *)(param_1 + 0xb0);
  }
  *(int *)(param_1 + 0xb0) = iVar2;
  iVar4 = 3;
  if (3 < *(int *)(param_1 + 0xb4)) {
    iVar4 = *(int *)(param_1 + 0xb4);
  }
  *(int *)(param_1 + 0xb4) = iVar4;
  iVar1 = *(int *)(param_1 + 0xb8) + iVar2 * 2 + -2;
  iVar3 = iVar1 * iVar4;
  iVar2 = iVar3 + 2;
  FUN_146c5e8c6(param_1,iVar2,iVar3 * 2,(iVar4 + 1) * iVar1 + iVar4 * 2,iVar2);
  FUN_1483adcee(param_1);
  FUN_1483ae2ee(param_1);
  FUN_1483ae50c(param_1);
  FUN_1483ae86e(param_1);
  return param_1;
}



// FUNCTION 148397d06 FUN_148397d06 body=532 status=ok
// SIG undefined FUN_148397d06(void)

undefined8 FUN_148397d06(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  uVar3 = 0;
  FUN_1411b354a(param_2,0,0,0);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)param_3 * 8);
  if (0 < *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24)) {
    do {
      uVar1 = (ulonglong)(uVar3 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar3 >> 9) * 8) +
                             uVar1 * 2) - 1U) < 0xfffe) {
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
        local_90 = *(double *)(lVar2 + 0x10 + uVar1 * 0x18) * *(double *)(param_1 + 0xa8);
        local_98 = *(double *)(lVar2 + 8 + uVar1 * 0x18) * *(double *)(param_1 + 0xa0);
        local_a0 = *(double *)(lVar2 + uVar1 * 0x18) * *(double *)(param_1 + 0x98);
        FUN_146bed047(&local_88,param_1 + 0x60,&local_a0);
        local_78 = local_78 + *(double *)(param_1 + 0x90);
        dStack_80 = dStack_80 + *(double *)(param_1 + 0x88);
        local_88 = local_88 + *(double *)(param_1 + 0x80);
      }
      else {
        local_78 = DAT_14c8464f0;
        local_88 = DAT_14c8464e0;
        dStack_80 = DAT_14c8464e8;
      }
      local_68 = DAT_14c846338;
      local_70 = DAT_14c846330;
      local_5c = DAT_14c846338;
      local_64 = DAT_14c846330;
      local_58 = DAT_14c84635c;
      local_50 = 0;
      local_4e = 0;
      FUN_146c02208(param_2,&local_88);
      uVar3 = uVar3 + 1;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)param_3 * 8);
    } while ((int)uVar3 < *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24));
  }
  if ((longlong)*(int *)(lVar2 + 0x228) != 0) {
    lVar4 = *(longlong *)(lVar2 + 0x220);
    lVar2 = (longlong)*(int *)(lVar2 + 0x228) * 0xc;
    do {
      FUN_146c01152(param_2,lVar4,0);
      lVar4 = lVar4 + 0xc;
      lVar2 = lVar2 + -0xc;
    } while (lVar2 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148397f1b FUN_148397f1b body=65 status=ok
// SIG undefined FUN_148397f1b(void)

undefined8 * FUN_148397f1b(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x1c0,0x10);
  FUN_148397f5c(uVar1,param_3,param_2);
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 148397f5c FUN_148397f5c body=327 status=ok
// SIG undefined FUN_148397f5c(void)

undefined8 * FUN_148397f5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_b8 [39];
  undefined1 local_91;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1483984b6(param_1,param_2,param_3,0);
  *param_1 = &PTR_FUN_14ae74e30;
  FUN_1483af29a(param_1 + 0x2c,*(undefined4 *)(param_1 + 0x16));
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FUN_148399cb4(param_1,param_2,param_1 + 0x32);
  uVar1 = *(undefined8 *)(param_1[0x22] + 0x30);
  iVar4 = 0;
  do {
    lVar2 = (ulonglong)(iVar4 != 1) * 0x10 + 0x10;
    if (iVar4 == 0) {
      lVar2 = 0;
    }
    lVar3 = (longlong)*(int *)((longlong)param_1 + lVar2 + 0x198);
    local_68 = 0;
    local_60 = 0;
    if (0 < lVar3) {
      local_68 = *(undefined8 *)((longlong)(param_1 + 0x32) + lVar2);
      local_60 = lVar3;
    }
    lVar3 = (longlong)*(int *)((longlong)param_1 + lVar2 + 0x168);
    local_90 = 0;
    local_88 = 0;
    if (0 < lVar3) {
      local_90 = *(undefined8 *)((longlong)(param_1 + 0x2c) + lVar2);
      local_88 = lVar3;
    }
    local_70 = uVar1;
    FUN_1483c1774(&local_90,&local_70,&local_91);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483980a4 FUN_1483980a4 body=56 status=ok
// SIG undefined FUN_1483980a4(void)

undefined8 * FUN_1483980a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x1c0,0x10);
  FUN_1483980dc(uVar1,param_2);
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 1483980dc FUN_1483980dc body=315 status=ok
// SIG undefined FUN_1483980dc(void)

undefined8 * FUN_1483980dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_b8 [39];
  undefined1 local_91;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1483bf184();
  *param_1 = &PTR_FUN_14ae74e30;
  FUN_1483af29a(param_1 + 0x2c,*(undefined4 *)(param_1 + 0x16));
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FUN_1483bf35e(param_1,param_2,param_1 + 0x32);
  uVar1 = *(undefined8 *)(param_1[0x22] + 0x30);
  iVar3 = 0;
  do {
    lVar2 = (ulonglong)(iVar3 != 1) * 0x10 + 0x10;
    if (iVar3 == 0) {
      lVar2 = 0;
    }
    lVar4 = (longlong)*(int *)((longlong)param_1 + lVar2 + 0x198);
    local_68 = 0;
    local_60 = 0;
    if (0 < lVar4) {
      local_68 = *(undefined8 *)((longlong)(param_1 + 0x32) + lVar2);
      local_60 = lVar4;
    }
    lVar4 = (longlong)*(int *)((longlong)param_1 + lVar2 + 0x168);
    local_90 = 0;
    local_88 = 0;
    if (0 < lVar4) {
      local_90 = *(undefined8 *)((longlong)(param_1 + 0x2c) + lVar2);
      local_88 = lVar4;
    }
    local_70 = uVar1;
    FUN_1483c1774(&local_90,&local_70,&local_91);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 3);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148398218 FUN_148398218 body=56 status=ok
// SIG undefined FUN_148398218(void)

undefined8 * FUN_148398218(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_148398250(uVar1,param_2);
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 148398250 FUN_148398250 body=473 status=ok
// SIG undefined FUN_148398250(void)

undefined8 * FUN_148398250(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_c8 [47];
  undefined1 local_99;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1483992ae();
  *param_1 = &PTR_FUN_14ae74e80;
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
  param_1[0x1e] = 0;
  iVar6 = *(int *)(param_1 + 0xd);
  FUN_1483af29a(&local_78,iVar6);
  FUN_1483af516(param_1 + 0x13,&local_78);
  FUN_148398478(&local_78);
  FUN_14839a04c(param_1 + 0x19,iVar6);
  if (0 < (longlong)iVar6) {
    lVar4 = 0;
    do {
      uVar3 = *(uint *)(param_1[0xc] + lVar4 * 4);
      lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
      uVar5 = (ulonglong)(uVar3 & 0x1ff);
      uVar1 = *(undefined8 *)(lVar7 + 8 + uVar5 * 0x18);
      uVar2 = *(undefined8 *)(lVar7 + 0x10 + uVar5 * 0x18);
      *(undefined8 *)(param_1[0x19] + lVar4 * 8) = *(undefined8 *)(lVar7 + uVar5 * 0x18);
      *(undefined8 *)(param_1[0x1b] + lVar4 * 8) = uVar1;
      *(undefined8 *)(param_1[0x1d] + lVar4 * 8) = uVar2;
      lVar4 = lVar4 + 1;
    } while (iVar6 != lVar4);
  }
  uVar1 = *(undefined8 *)(param_1[0x11] + 0x30);
  iVar6 = 0;
  do {
    lVar4 = (ulonglong)(iVar6 != 1) * 0x10 + 0x10;
    if (iVar6 == 0) {
      lVar4 = 0;
    }
    lVar7 = (longlong)*(int *)((longlong)param_1 + lVar4 + 0xd0);
    local_70 = 0;
    local_68 = 0;
    if (0 < lVar7) {
      local_70 = *(undefined8 *)((longlong)(param_1 + 0x19) + lVar4);
      local_68 = lVar7;
    }
    lVar7 = (longlong)*(int *)((longlong)param_1 + lVar4 + 0xa0);
    local_98 = 0;
    local_90 = 0;
    if (0 < lVar7) {
      local_98 = *(undefined8 *)((longlong)(param_1 + 0x13) + lVar4);
      local_90 = lVar7;
    }
    local_78 = uVar1;
    FUN_1483c1774(&local_98,&local_78,&local_99);
    iVar6 = iVar6 + 1;
  } while (iVar6 != 3);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839842a FUN_14839842a body=78 status=ok
// SIG undefined FUN_14839842a(void)

undefined8 * FUN_14839842a(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x160,0x10);
  FUN_1483984b6(puVar1,param_3,param_2,0);
  *puVar1 = &PTR_FUN_14ae75190;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 148398478 FUN_148398478 body=61 status=ok
// SIG undefined FUN_148398478(void)

void FUN_148398478(longlong *param_1)

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



// FUNCTION 1483984b6 FUN_1483984b6 body=501 status=ok
// SIG undefined FUN_1483984b6(void)

undefined8 *
FUN_1483984b6(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 *local_100;
  undefined4 local_f4;
  undefined1 local_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *param_1 = &PTR_FUN_14ae74d90;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0x50);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 0x109) = 0;
  *(undefined8 *)((longlong)param_1 + 0x111) = 0;
  param_1[0x24] = 0xffffffffffffffff;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  local_f4 = param_4;
  FUN_146de45bc(param_1 + 0x23,0,0);
  local_a8[0] = 0;
  local_a0 = 0xffffffffffffffff;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_146de45bc(local_a8,0,0);
  local_f0[0] = 0;
  local_e8 = 0xffffffffffffffff;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  FUN_146de45bc(local_f0,0,0);
  local_108 = local_f0;
  FUN_1483986ac(param_3,param_2,param_1 + 0x17,local_a8);
  local_108 = local_a8;
  local_100 = local_f0;
  FUN_14839874a(param_1,param_2,param_3,local_f4);
  FUN_146de5508(local_f0);
  FUN_146de5508(local_a8);
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483986ac FUN_1483986ac body=157 status=ok
// SIG undefined FUN_1483986ac(void)

void FUN_1483986ac(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  
  switch(param_1) {
  case 1:
    FUN_14839a884(param_2,param_3,param_4);
    return;
  case 2:
    FUN_14839ae10(param_2,param_3,param_4);
    return;
  case 3:
    FUN_14839b432(param_2,param_3,param_4);
    return;
  case 4:
    uVar1 = 0;
    break;
  case 5:
    uVar1 = 1;
    break;
  case 6:
    FUN_14839c3c1(param_2,param_3,param_4);
    return;
  default:
    FUN_14839d23d(param_2,param_3,param_4,param_5);
    return;
  }
  FUN_14839cd3f(param_2,param_3,param_4,param_5,uVar1);
  return;
}



// FUNCTION 14839874a FUN_14839874a body=710 status=ok
// SIG undefined FUN_14839874a(void)

void FUN_14839874a(longlong param_1,longlong param_2,uint param_3,undefined4 param_4,
                  ulonglong param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  void *_Src;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_c8 [40];
  undefined1 *local_a0;
  void *local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = *(uint *)(param_1 + 0xd8);
  *(uint *)(param_1 + 0xb0) = *(int *)(param_1 + 0xac) - uVar3;
  local_98 = (void *)0x0;
  uVar4 = *(uint *)(param_1 + 0xc0);
  _Src = *(void **)(param_1 + 0xb8);
  local_90 = CONCAT44(local_90._4_4_,uVar4);
  if ((longlong)(int)uVar4 == 0) {
    local_90 = (ulonglong)uVar4;
  }
  else {
    FUN_144a06ca8(&local_98,uVar4,0);
    memcpy(local_98,_Src,(longlong)(int)uVar4 << 2);
  }
  FUN_14839a04c(param_1 + 0xe0,uVar3);
  if (0 < (int)uVar3) {
    uVar6 = 0;
    do {
      uVar4 = *(uint *)((longlong)local_98 + ((longlong)*(int *)(param_1 + 0xb0) + uVar6) * 4);
      lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
      uVar9 = (ulonglong)(uVar4 & 0x1ff);
      uVar1 = *(undefined8 *)(lVar5 + 8 + uVar9 * 0x18);
      uVar2 = *(undefined8 *)(lVar5 + 0x10 + uVar9 * 0x18);
      *(undefined8 *)(*(longlong *)(param_1 + 0xe0) + uVar6 * 8) =
           *(undefined8 *)(lVar5 + uVar9 * 0x18);
      *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + uVar6 * 8) = uVar1;
      *(undefined8 *)(*(longlong *)(param_1 + 0x100) + uVar6 * 8) = uVar2;
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  puVar7 = (undefined1 *)FUN_14001cc68(0x48,0x10);
  uVar1 = *(undefined8 *)(param_5 + 8);
  uVar2 = *(undefined8 *)(param_5 + 0x10);
  *puVar7 = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  *(undefined8 *)(puVar7 + 0x20) = 0;
  *(undefined8 *)(puVar7 + 0x28) = 0;
  *(undefined8 *)(puVar7 + 0x30) = 0;
  *(undefined8 *)(puVar7 + 0x38) = 0;
  *(undefined8 *)(puVar7 + 0x40) = 0;
  FUN_146de45bc(puVar7,uVar2,uVar1);
  local_a0 = puVar7;
  if ((param_3 & 0xfffffffd) == 0) {
    local_98 = (void *)((ulonglong)local_98._1_7_ << 8);
    local_90 = param_5;
    local_88 = param_5;
    FUN_14839d134(puVar7,&local_98);
    uStack_78 = *(undefined8 *)(param_5 + 8);
    local_80 = *(undefined8 *)(param_5 + 0x10);
    local_98 = (void *)((ulonglong)local_98 & 0xffffffffffffff00);
    local_90 = local_90 & 0xffffffffffffff00;
    local_70 = 0xbff0000000000000;
    local_68 = param_5;
    local_58 = param_6;
    FUN_1483afd38(param_1 + 0x118,&local_98);
  }
  else {
    local_98 = (void *)((ulonglong)local_98._1_7_ << 8);
    local_90 = local_90 & 0xffffffffffffff00;
    local_88 = param_5;
    local_80 = param_5;
    FUN_1483bff26(puVar7,&local_98);
    local_80 = *(undefined8 *)(param_5 + 8);
    uStack_78 = *(undefined8 *)(param_5 + 0x10);
    local_98 = (void *)((ulonglong)local_98 & 0xffffffffffffff00);
    local_90 = local_90 & 0xffffffffffffff00;
    local_70 = 0xbff0000000000000;
    local_68 = local_68 & 0xffffffffffffff00;
    local_60 = param_5;
    local_50 = param_6;
    FUN_1483c0044(param_1 + 0x118,&local_98);
  }
  lVar8 = FUN_14001cc68(0xd8,0x10);
  FUN_1483996b6(lVar8,&local_a0,param_4);
  lVar5 = *(longlong *)(param_1 + 0x110);
  if ((lVar5 != lVar8) && (*(longlong *)(param_1 + 0x110) = lVar8, lVar5 != 0)) {
    FUN_1483c0eca(lVar5);
    FUN_1400020a8(lVar5);
  }
  puVar7 = local_a0;
  if (local_a0 != (undefined1 *)0x0) {
    FUN_146de5508(local_a0);
    FUN_1400020a8(puVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148398a12 FUN_148398a12 body=256 status=ok
// SIG undefined FUN_148398a12(void)

void FUN_148398a12(longlong param_1,int param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined1 param_5)

{
  int iVar1;
  undefined1 auStack_b8 [40];
  undefined8 **local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 *local_60;
  undefined8 **local_58;
  undefined8 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((param_2 <= *(int *)(param_1 + 0xd0)) &&
      (iVar1 = *(int *)(*(longlong *)(param_1 + 200) + (longlong)param_2 * 4), iVar1 != -1)) &&
     (iVar1 < *(int *)(param_1 + 0xb0))) {
    *(undefined2 *)(param_1 + 0xa8) = 0x101;
    local_50 = &local_88;
    local_90 = (undefined8 **)CONCAT44(local_90._4_4_,iVar1);
    local_88 = (undefined8 **)CONCAT44(iVar1,param_2);
    local_80 = *param_4;
    uStack_7c = param_4[1];
    uStack_78 = param_4[2];
    uStack_74 = param_4[3];
    local_70 = *(undefined8 *)(param_4 + 4);
    local_68 = param_5;
    local_58 = &local_90;
    local_60 = param_3;
    FUN_1483c0f26(param_1 + 8,local_44,&local_58);
    local_58 = (undefined8 **)CONCAT44(local_58._4_4_,iVar1);
    local_88 = &local_50;
    local_90 = &local_58;
    local_50 = param_3;
    FUN_1483c124c(param_1 + 0x58,local_44,&local_90);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148398bae FUN_148398bae body=218 status=ok
// SIG undefined FUN_148398bae(void)

longlong FUN_148398bae(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_68 [40];
  int local_40 [2];
  undefined8 local_38;
  int *local_30;
  undefined8 *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((int)param_2 <= *(int *)(param_1 + 0xd0)) &&
      (iVar2 = *(int *)(*(longlong *)(param_1 + 200) + (longlong)(int)param_2 * 4), iVar2 != -1)) &&
     (iVar2 < *(int *)(param_1 + 0xb0))) {
    *(undefined1 *)(param_1 + 0xa9) = 1;
    local_28 = &local_38;
    local_30 = local_40;
    local_40[0] = iVar2;
    local_38 = param_3;
    FUN_1483c124c(param_1 + 0x58,local_1c);
    if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
      lVar1 = param_1 + 0x40;
      if (*(longlong *)(param_1 + 0x48) != 0) {
        lVar1 = *(longlong *)(param_1 + 0x48);
      }
      iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
      if (iVar2 != -1) {
        do {
          bVar3 = *(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x40) == param_2;
          lVar1 = CONCAT71((int7)((ulonglong)lVar1 >> 8),bVar3);
          if (bVar3) break;
          iVar2 = *(int *)((longlong)iVar2 * 0x40 + *(longlong *)(param_1 + 8) + 0x38);
        } while (iVar2 != -1);
        goto LAB_148398bec;
      }
    }
  }
  lVar1 = 0;
LAB_148398bec:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 148398d0a FUN_148398d0a body=82 status=ok
// SIG undefined FUN_148398d0a(void)

void FUN_148398d0a(longlong param_1)

{
  if (*(char *)(param_1 + 0xa9) == '\x01') {
    FUN_148398d5c(*(undefined8 *)(param_1 + 0x110),param_1 + 0x58);
    *(undefined1 *)(param_1 + 0xa9) = 0;
  }
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    FUN_148398f2c(*(undefined8 *)(param_1 + 0x110),param_1 + 8);
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 148398d5c FUN_148398d5c body=462 status=ok
// SIG undefined FUN_148398d5c(void)

void FUN_148398d5c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  double dVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *plStack_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *plStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1483aec20();
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  FUN_148333c92(&local_68,(longlong)(int)param_2[1] - (longlong)*(int *)((longlong)param_2 + 0x34));
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar4 = 0;
  plStack_48 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_50);
    iVar4 = (int)param_2[5];
  }
  local_78 = local_40;
  iStack_74 = iStack_3c;
  local_70 = local_38;
  local_6c = local_34;
  local_88 = local_50;
  local_80 = plStack_48;
  local_90 = param_2;
  if ((iStack_3c != iVar4) || (plStack_48 != plVar1)) {
    do {
      uVar3 = *(undefined4 *)(*local_90 + (longlong)iStack_74 * 0x18);
      dVar2 = *(double *)(*local_90 + 8 + (longlong)iStack_74 * 0x18);
      plStack_48 = (longlong *)(dVar2 * dVar2);
      local_50 = CONCAT44(uVar3,uVar3);
      if (plStack_60 == local_58) {
        FUN_14834da9e(&local_68,plStack_60,&local_50);
      }
      else {
        *plStack_60 = local_50;
        plStack_60[1] = (longlong)plStack_48;
        plStack_60 = plStack_60 + 2;
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 || (local_80 != plVar1 || iStack_74 != iVar4));
  }
  local_90 = plStack_60;
  local_50 = local_68;
  FUN_14836a965(&local_50,&local_90,param_1 + 0x38);
  FUN_14834db6e(param_1 + 0x38);
  FUN_1483aec82(param_1);
  FUN_14834dc94(&local_68);
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148398f2c FUN_148398f2c body=305 status=ok
// SIG undefined FUN_148398f2c(void)

void FUN_148398f2c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14839a04c(param_1,*(undefined4 *)(param_1[6] + 8));
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar5 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar5) || (uStack_48 != plVar1)) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x40;
      lVar4 = (longlong)*(int *)(lVar2 + lVar3);
      *(undefined8 *)(*param_1 + lVar4 * 8) = *(undefined8 *)(lVar2 + 0x10 + lVar3);
      *(undefined8 *)(param_1[2] + lVar4 * 8) = *(undefined8 *)(lVar2 + 0x18 + lVar3);
      *(undefined8 *)(param_1[4] + lVar4 * 8) = *(undefined8 *)(lVar2 + 0x20 + lVar3);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar5));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839905e FUN_14839905e body=160 status=ok
// SIG undefined FUN_14839905e(void)

void FUN_14839905e(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar3 = (int)param_2[1];
  iVar7 = -1;
  if ((int)param_2[5] == iVar3 && (int)param_2[3] == iVar3) {
    iVar7 = iVar3;
  }
  if (((iVar7 == (int)param_2[5] && ((int)param_2[3] == iVar7 && iVar3 == iVar7)) &&
      ((int)param_3[1] == *(int *)(param_1 + 0xc0))) && (0 < *(int *)(param_1 + 0xb0))) {
    lVar5 = 0;
    do {
      lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0xb8) + lVar5 * 4);
      uVar1 = *(undefined8 *)(param_2[4] + lVar5 * 8);
      uVar2 = *(undefined8 *)(param_2[2] + lVar5 * 8);
      lVar4 = *param_3;
      *(undefined8 *)(lVar4 + lVar6 * 0x18) = *(undefined8 *)(*param_2 + lVar5 * 8);
      *(undefined8 *)(lVar4 + 8 + lVar6 * 0x18) = uVar2;
      *(undefined8 *)(lVar4 + 0x10 + lVar6 * 0x18) = uVar1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xb0));
  }
  return;
}



// FUNCTION 1483990fe FUN_1483990fe body=129 status=ok
// SIG undefined FUN_1483990fe(void)

void FUN_1483990fe(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (((int)param_2[1] == *(int *)(param_1 + 0xc0)) &&
     (uVar4 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xb0),
     uVar4 != 0 && *(int *)(param_1 + 0xb0) <= *(int *)(param_1 + 0xac))) {
    uVar5 = 0;
    do {
      lVar6 = (longlong)
              *(int *)(*(longlong *)(param_1 + 0xb8) +
                      (longlong)(*(int *)(param_1 + 0xb0) + (int)uVar5) * 4);
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x100) + uVar5 * 8);
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + uVar5 * 8);
      lVar3 = *param_2;
      *(undefined8 *)(lVar3 + lVar6 * 0x18) =
           *(undefined8 *)(*(longlong *)(param_1 + 0xe0) + uVar5 * 8);
      *(undefined8 *)(lVar3 + 8 + lVar6 * 0x18) = uVar2;
      *(undefined8 *)(lVar3 + 0x10 + lVar6 * 0x18) = uVar1;
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
  }
  return;
}



// FUNCTION 148399180 FUN_148399180 body=301 status=ok
// SIG undefined FUN_148399180(void)

void FUN_148399180(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar5 = *(int *)(param_1 + 0x30);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar5) || (uStack_48 != lVar2)) {
    do {
      if (*(char *)(*local_78 + 0x28 + (longlong)iStack_5c * 0x40) == '\x01') {
        piVar4 = (int *)(*local_78 + (longlong)iStack_5c * 0x40);
        lVar3 = (longlong)*piVar4;
        *(undefined8 *)(*param_2 + lVar3 * 8) = *(undefined8 *)(piVar4 + 4);
        *(undefined8 *)(param_2[2] + lVar3 * 8) = *(undefined8 *)(piVar4 + 6);
        *(undefined8 *)(param_2[4] + lVar3 * 8) = *(undefined8 *)(piVar4 + 8);
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar5));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483992ae FUN_1483992ae body=745 status=ok
// SIG undefined FUN_1483992ae(void)

undefined8 * FUN_1483992ae(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  ulonglong local_168;
  undefined1 local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148 [8];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 *local_100;
  undefined1 local_f8 [128];
  longlong local_78;
  undefined1 *local_70;
  ulonglong local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *param_1 = &PTR_FUN_14ae74de0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  puVar1 = param_1 + 0xc;
  param_1[0x11] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0x3ff0000000000000;
  FUN_14836b25a(puVar1);
  FUN_14836b2a0(puVar1,*(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24),
                *(undefined4 *)(param_2 + 0x50),param_2 + 0x20);
  FUN_1483c137e(puVar1,param_2);
  FUN_148333d12(local_f8,*(undefined4 *)(param_1 + 0xd),*(undefined4 *)(param_1 + 0xd));
  local_178 = 1;
  FUN_14833454f(param_2,puVar1,local_f8,1);
  local_148[0] = 0;
  local_140 = 0xffffffffffffffff;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  FUN_146de45bc(local_148,0,0);
  local_168 = local_68;
  local_100 = local_70;
  FUN_14836a965(&local_100,&local_168,local_78);
  FUN_14834db6e(local_78);
  uVar2 = *(undefined8 *)(local_78 + 0x18);
  *(undefined8 *)(local_78 + 0x18) = uStack_130;
  uVar3 = *(undefined8 *)(local_78 + 0x10);
  *(undefined8 *)(local_78 + 0x10) = local_138;
  uVar4 = *(undefined8 *)(local_78 + 8);
  *(undefined8 *)(local_78 + 8) = local_140;
  uVar5 = *(undefined8 *)(local_78 + 0x20);
  *(undefined8 *)(local_78 + 0x20) = local_128;
  uVar6 = *(undefined8 *)(local_78 + 0x28);
  *(undefined8 *)(local_78 + 0x28) = uStack_120;
  uVar7 = *(undefined8 *)(local_78 + 0x30);
  *(undefined8 *)(local_78 + 0x30) = local_118;
  uVar8 = *(undefined8 *)(local_78 + 0x38);
  *(undefined8 *)(local_78 + 0x38) = uStack_110;
  uVar9 = *(undefined8 *)(local_78 + 0x40);
  *(undefined8 *)(local_78 + 0x40) = local_108;
  local_140 = uVar4;
  local_138 = uVar3;
  uStack_130 = uVar2;
  local_128 = uVar5;
  uStack_120 = uVar6;
  local_118 = uVar7;
  uStack_110 = uVar8;
  local_108 = uVar9;
  puVar11 = (undefined1 *)FUN_14001cc68(0x48,0x10);
  *puVar11 = 0;
  *(undefined8 *)(puVar11 + 8) = 0;
  *(undefined8 *)(puVar11 + 0x10) = 0;
  *(undefined8 *)(puVar11 + 0x18) = 0;
  *(undefined8 *)(puVar11 + 0x20) = 0;
  *(undefined8 *)(puVar11 + 0x28) = 0;
  *(undefined8 *)(puVar11 + 0x30) = 0;
  *(undefined8 *)(puVar11 + 0x38) = 0;
  *(undefined8 *)(puVar11 + 0x40) = 0;
  FUN_146de45bc(puVar11,local_138,local_140);
  local_168 = local_168 & 0xffffffffffffff00;
  local_160 = 0;
  local_158 = local_148;
  local_150 = local_148;
  local_100 = puVar11;
  FUN_148399598(puVar11,&local_168);
  lVar12 = FUN_14001cc68(0xd8,0x10);
  FUN_1483996b6(lVar12,&local_100,0);
  lVar10 = param_1[0x11];
  if ((lVar10 != lVar12) && (param_1[0x11] = lVar12, lVar10 != 0)) {
    FUN_1483c0eca(lVar10);
    FUN_1400020a8(lVar10);
  }
  puVar11 = local_100;
  if (local_100 != (undefined1 *)0x0) {
    FUN_146de5508(local_100);
    FUN_1400020a8(puVar11);
  }
  FUN_146de5508(local_148);
  FUN_148334b02(local_f8);
  if ((local_50 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148399598 FUN_148399598 body=284 status=ok
// SIG undefined FUN_148399598(void)

longlong FUN_148399598(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_146de45bc(local_80,*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 8),
                *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 8));
  local_38 = *(undefined4 *)(param_2 + 8);
  uStack_34 = *(undefined4 *)(param_2 + 0xc);
  uStack_30 = *(undefined4 *)(param_2 + 0x10);
  uStack_2c = *(undefined4 *)(param_2 + 0x14);
  FUN_1483c1566(&local_38,*(undefined8 *)(param_2 + 0x18),local_80);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = local_68;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uStack_70;
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = local_78;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uStack_60;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = local_58;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uStack_50;
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = local_48;
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uStack_40;
  local_78 = uVar3;
  uStack_70 = uVar2;
  local_68 = uVar1;
  uStack_60 = uVar4;
  local_58 = uVar5;
  uStack_50 = uVar6;
  local_48 = uVar7;
  uStack_40 = uVar8;
  FUN_146de5508(local_80);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483996b6 FUN_1483996b6 body=306 status=ok
// SIG undefined FUN_1483996b6(void)

longlong FUN_1483996b6(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_44 = param_3;
  FUN_1483af29a(param_1,*(undefined4 *)(*param_2 + 8));
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_146de45bc(param_1 + 0x38,0,0);
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  FUN_146de45bc(param_1 + 0x80,0,0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  lVar1 = *param_2;
  *param_2 = 0;
  lVar2 = *(longlong *)(param_1 + 0x30);
  if ((lVar2 != lVar1) && (*(longlong *)(param_1 + 0x30) = lVar1, lVar2 != 0)) {
    FUN_146de5508(lVar2);
    FUN_1400020a8(lVar2);
  }
  *(undefined1 *)(param_1 + 200) = 1;
  FUN_14839d3b3(&local_50,&local_44);
  puVar3 = *(undefined8 **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = local_50;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483997ea FUN_1483997ea body=114 status=ok
// SIG undefined FUN_1483997ea(void)

void FUN_1483997ea(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ae74de0;
  lVar1 = param_1[0x11];
  if (lVar1 != 0) {
    FUN_1483c0eca(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1483aeb92(param_1 + 1);
  return;
}



// FUNCTION 14839985c FUN_14839985c body=70 status=ok
// SIG undefined FUN_14839985c(void)

void FUN_14839985c(longlong param_1)

{
  if (*(char *)(param_1 + 0x59) == '\x01') {
    FUN_1483998a2(*(undefined8 *)(param_1 + 0x88),param_1 + 8);
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_148398f2c(*(undefined8 *)(param_1 + 0x88),param_1 + 8);
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1483998a2 FUN_1483998a2 body=462 status=ok
// SIG undefined FUN_1483998a2(void)

void FUN_1483998a2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  double dVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *plStack_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *plStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1483aec20();
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  FUN_148333c92(&local_68,(longlong)(int)param_2[1] - (longlong)*(int *)((longlong)param_2 + 0x34));
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar4 = 0;
  plStack_48 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_50);
    iVar4 = (int)param_2[5];
  }
  local_78 = local_40;
  iStack_74 = iStack_3c;
  local_70 = local_38;
  local_6c = local_34;
  local_88 = local_50;
  local_80 = plStack_48;
  local_90 = param_2;
  if ((iStack_3c != iVar4) || (plStack_48 != plVar1)) {
    do {
      uVar3 = *(undefined4 *)(*local_90 + (longlong)iStack_74 * 0x40);
      dVar2 = *(double *)(*local_90 + 0x30 + (longlong)iStack_74 * 0x40);
      plStack_48 = (longlong *)(dVar2 * dVar2);
      local_50 = CONCAT44(uVar3,uVar3);
      if (plStack_60 == local_58) {
        FUN_14834da9e(&local_68,plStack_60,&local_50);
      }
      else {
        *plStack_60 = local_50;
        plStack_60[1] = (longlong)plStack_48;
        plStack_60 = plStack_60 + 2;
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 || (local_80 != plVar1 || iStack_74 != iVar4));
  }
  local_90 = plStack_60;
  local_50 = local_68;
  FUN_14836a965(&local_50,&local_90,param_1 + 0x38);
  FUN_14834db6e(param_1 + 0x38);
  FUN_1483aec82(param_1);
  FUN_14834dc94(&local_68);
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148399a72 FUN_148399a72 body=167 status=ok
// SIG undefined FUN_148399a72(void)

void FUN_148399a72(longlong param_1,uint param_2,undefined8 param_3,undefined4 *param_4,
                  undefined1 param_5)

{
  int iVar1;
  undefined1 auStack_88 [40];
  uint local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  int local_2c;
  int *local_28;
  uint *local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x78))) &&
     (iVar1 = *(int *)(*(longlong *)(param_1 + 0x70) + (ulonglong)param_2 * 4), -1 < iVar1)) {
    local_28 = &local_2c;
    local_20 = &local_60;
    local_58 = *param_4;
    uStack_54 = param_4[1];
    uStack_50 = param_4[2];
    uStack_4c = param_4[3];
    local_48 = *(undefined8 *)(param_4 + 4);
    local_40 = param_5;
    local_60 = param_2;
    local_5c = iVar1;
    local_38 = param_3;
    local_2c = iVar1;
    FUN_1483c1644(param_1 + 8,local_14);
    *(undefined2 *)(param_1 + 0x58) = 0x101;
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148399c8c FUN_148399c8c body=29 status=ok
// SIG undefined FUN_148399c8c(void)

void FUN_148399c8c(longlong param_1)

{
  FUN_1483bee58(param_1 + 8);
  *(undefined2 *)(param_1 + 0x58) = 0x101;
  return;
}



// FUNCTION 148399cb4 FUN_148399cb4 body=142 status=ok
// SIG undefined FUN_148399cb4(void)

void FUN_148399cb4(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  FUN_14839a04c(param_3,*(undefined4 *)(param_1 + 0xb0));
  if (0 < *(int *)(param_1 + 0xb0)) {
    lVar5 = 0;
    do {
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0xb8) + lVar5 * 4);
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
      uVar6 = (ulonglong)(uVar3 & 0x1ff);
      uVar1 = *(undefined8 *)(lVar4 + 8 + uVar6 * 0x18);
      uVar2 = *(undefined8 *)(lVar4 + 0x10 + uVar6 * 0x18);
      *(undefined8 *)(*param_3 + lVar5 * 8) = *(undefined8 *)(lVar4 + uVar6 * 0x18);
      *(undefined8 *)(param_3[2] + lVar5 * 8) = uVar1;
      *(undefined8 *)(param_3[4] + lVar5 * 8) = uVar2;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xb0));
  }
  return;
}



// FUNCTION 148399d42 FUN_148399d42 body=256 status=ok
// SIG undefined FUN_148399d42(void)

undefined4 FUN_148399d42(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148398d0a();
  if (*(int *)(param_1 + 0xb0) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_1483af29a(local_58);
    uVar2 = FUN_148399e44(*(undefined8 *)(param_1 + 0x110),param_1 + 400,param_1 + 0x160,local_58);
    FUN_148399180(param_1);
    uVar1 = *(uint *)(param_1 + 0xc0);
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar1);
    }
    *(undefined4 *)(param_2 + 8) = 0;
    iVar4 = 0;
    uVar3 = uVar1;
    if (*(uint *)(param_2 + 0xc) != uVar1) {
      FUN_1447a8aa0(param_2,uVar1);
      iVar4 = *(int *)(param_2 + 8);
      uVar3 = *(uint *)(param_2 + 0xc);
    }
    *(uint *)(param_2 + 8) = iVar4 + uVar1;
    if (uVar3 - iVar4 < uVar1) {
      FUN_1403e3958(param_2);
    }
    FUN_14839905e(param_1,local_58,param_2);
    FUN_1483990fe(param_1,param_2);
    FUN_148398478(local_58);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148399e44 FUN_148399e44 body=497 status=ok
// SIG undefined FUN_148399e44(void)

void FUN_148399e44(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_148 [40];
  longlong *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  int aiStack_100 [10];
  longlong local_d8 [2];
  undefined1 local_c1;
  undefined8 local_c0;
  longlong local_b8;
  undefined1 local_a0 [8];
  undefined8 local_98;
  longlong local_90;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 8))();
  if (cVar2 != '\0') {
    local_120 = *(longlong **)(param_1 + 0xd0);
    local_118 = param_2;
    local_110 = param_4;
    FUN_144a82cde();
    FUN_140056680(local_d8,L"Post-setup solve time");
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1483af29a(&local_108,*(undefined4 *)(*(longlong *)(param_1 + 0x30) + 8));
    iVar5 = 0;
    do {
      lVar3 = (ulonglong)(iVar5 != 1) * 0x10 + 0x10;
      if (iVar5 == 0) {
        lVar3 = 0;
      }
      lVar4 = (longlong)*(int *)(param_3 + 8 + lVar3);
      local_98 = 0;
      local_90 = 0;
      if (0 < lVar4) {
        local_98 = *(undefined8 *)(param_3 + lVar3);
        local_90 = lVar4;
      }
      lVar4 = (longlong)*(int *)(param_1 + 8 + lVar3);
      local_70 = 0;
      local_68 = 0;
      if (0 < lVar4) {
        local_70 = *(undefined8 *)(param_1 + lVar3);
        local_68 = lVar4;
      }
      local_c0 = 0;
      local_b8 = 0;
      if (0 < (longlong)*(int *)((longlong)aiStack_100 + lVar3)) {
        local_c0 = *(undefined8 *)((longlong)aiStack_100 + lVar3 + -8);
        local_b8 = (longlong)*(int *)((longlong)aiStack_100 + lVar3);
      }
      local_78 = param_1 + 0x38;
      FUN_1483af2ed(&local_c0,local_a0,&local_c1);
      plVar1 = local_120;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 3);
    (**(code **)(*local_120 + 0x50))(local_120,local_118,&local_108,local_110);
    (**(code **)(*plVar1 + 0x38))(plVar1);
    FUN_148398478(&local_108);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_148);
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    FUN_14839a5e6(param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839a04c FUN_14839a04c body=135 status=ok
// SIG undefined FUN_14839a04c(void)

void FUN_14839a04c(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_140cb0586(param_1,0);
  }
  FUN_146be4e92(param_1,param_2,0);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) < 0) {
    FUN_140cb0586(param_1 + 0x10,0);
  }
  FUN_146be4e92(param_1 + 0x10,param_2,0);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < 0) {
    FUN_140cb0586(param_1 + 0x20,0);
  }
  FUN_146be4e92(param_1 + 0x20,param_2,0);
  return;
}



// FUNCTION 14839a0d4 FUN_14839a0d4 body=801 status=ok
// SIG undefined FUN_14839a0d4(void)

undefined4 FUN_14839a0d4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  uint local_98;
  longlong local_90 [2];
  longlong local_80;
  longlong local_70;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14839985c();
  FUN_1483af29a(local_90,*(undefined4 *)(param_1 + 0x68));
  if ((*(double *)(param_1 + 0x90) != 1.0) || (NAN(*(double *)(param_1 + 0x90)))) {
    FUN_1483af5b6(&local_c0,param_1 + 0x98);
    uVar7 = 0xffffffff;
    if (local_98 == (uint)local_b8 && local_a8 == (uint)local_b8) {
      uVar7 = (uint)local_b8;
    }
    if (0 < (int)uVar7) {
      uVar11 = 0;
      do {
        dVar2 = *(double *)(param_1 + 0x90);
        dVar3 = *(double *)(CONCAT44(uStack_9c,local_a0) + uVar11 * 8);
        dVar4 = *(double *)(local_b0 + uVar11 * 8);
        local_c0[uVar11] = (longlong)(dVar2 * (double)local_c0[uVar11]);
        *(double *)(local_b0 + uVar11 * 8) = dVar4 * dVar2;
        *(double *)(CONCAT44(uStack_9c,local_a0) + uVar11 * 8) = dVar3 * dVar2;
        uVar11 = uVar11 + 1;
      } while (uVar7 != uVar11);
    }
    uVar8 = FUN_148399e44(*(undefined8 *)(param_1 + 0x88),param_1 + 200,&local_c0,local_90);
    FUN_148398478(&local_c0);
  }
  else {
    uVar8 = FUN_148399e44(*(undefined8 *)(param_1 + 0x88),param_1 + 200,param_1 + 0x98,local_90);
  }
  plVar1 = (longlong *)(param_1 + 8);
  lVar13 = param_1 + 0x18;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar15 = 0;
  local_58 = lVar13;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_60);
    iVar15 = *(int *)(param_1 + 0x30);
  }
  local_a8 = local_50;
  iStack_a4 = iStack_4c;
  local_a0 = local_48;
  uStack_9c = local_44;
  local_b8 = local_60;
  local_b0 = local_58;
  local_c0 = plVar1;
  if ((iStack_4c != iVar15) || (local_58 != lVar13)) {
    do {
      if (*(char *)(*local_c0 + 0x28 + (longlong)iStack_a4 * 0x40) == '\x01') {
        piVar12 = (int *)(*local_c0 + (longlong)iStack_a4 * 0x40);
        lVar10 = (longlong)*piVar12;
        *(undefined8 *)(local_90[0] + lVar10 * 8) = *(undefined8 *)(piVar12 + 4);
        *(undefined8 *)(local_80 + lVar10 * 8) = *(undefined8 *)(piVar12 + 6);
        *(undefined8 *)(local_70 + lVar10 * 8) = *(undefined8 *)(piVar12 + 8);
      }
      local_a8 = local_a8 & ~local_b8._4_4_;
      FUN_1449c0562(&local_b8);
    } while (local_c0 != plVar1 || (local_b0 != lVar13 || iStack_a4 != iVar15));
  }
  uVar7 = *(uint *)(param_1 + 0x68);
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar7);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  iVar15 = 0;
  uVar9 = uVar7;
  if (*(uint *)((longlong)param_2 + 0xc) != uVar7) {
    FUN_1447a8aa0(param_2,uVar7);
    iVar15 = (int)param_2[1];
    uVar9 = *(uint *)((longlong)param_2 + 0xc);
  }
  *(uint *)(param_2 + 1) = iVar15 + uVar7;
  if (uVar9 - iVar15 < uVar7) {
    FUN_1403e3958();
  }
  iVar15 = *(int *)(param_1 + 0x68);
  if (0 < (longlong)iVar15) {
    lVar13 = 0;
    do {
      lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x60) + lVar13 * 4);
      uVar5 = *(undefined8 *)(local_70 + lVar13 * 8);
      uVar6 = *(undefined8 *)(local_80 + lVar13 * 8);
      lVar10 = *param_2;
      *(undefined8 *)(lVar10 + lVar14 * 0x18) = *(undefined8 *)(local_90[0] + lVar13 * 8);
      *(undefined8 *)(lVar10 + 8 + lVar14 * 0x18) = uVar6;
      *(undefined8 *)(lVar10 + 0x10 + lVar14 * 0x18) = uVar5;
      lVar13 = lVar13 + 1;
    } while (iVar15 != lVar13);
  }
  FUN_148398478(local_90);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839a3f8 FUN_14839a3f8 body=491 status=ok
// SIG undefined FUN_14839a3f8(void)

undefined4 FUN_14839a3f8(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  int aiStack_c8 [11];
  undefined1 local_99;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_148398d0a();
  FUN_1483af29a(&local_d0,*(undefined4 *)(param_1 + 0xb0));
  if (*(int *)(param_1 + 0xb0) == *(int *)(param_1 + 0xac)) {
    FUN_14839a04c(&local_d0);
  }
  else {
    iVar5 = 0;
    do {
      lVar4 = (ulonglong)(iVar5 != 1) * 0x10 + 0x10;
      if (iVar5 == 0) {
        lVar4 = 0;
      }
      lVar6 = (longlong)*(int *)(param_1 + 0xe8 + lVar4);
      local_90 = 0;
      local_88 = 0;
      if (0 < lVar6) {
        local_90 = *(undefined8 *)(param_1 + 0xe0 + lVar4);
        local_88 = lVar6;
      }
      local_68 = 0;
      local_60 = 0;
      if (0 < (longlong)*(int *)((longlong)aiStack_c8 + lVar4)) {
        local_68 = *(undefined8 *)((longlong)aiStack_c8 + lVar4 + -8);
        local_60 = (longlong)*(int *)((longlong)aiStack_c8 + lVar4);
      }
      local_98 = param_1 + 0x118;
      FUN_1483c1774(&local_68,&local_98,&local_99);
      iVar5 = iVar5 + 1;
    } while (iVar5 != 3);
  }
  FUN_1483af29a(&local_98,*(undefined4 *)(param_1 + 0xb0));
  uVar2 = FUN_14839a5e6(*(undefined8 *)(param_1 + 0x110),&local_d0,&local_98);
  FUN_148399180(param_1);
  uVar1 = *(uint *)(param_1 + 0xc0);
  if (-1 < (int)uVar1) {
    *(undefined4 *)(param_2 + 8) = 0;
    iVar5 = 0;
    uVar3 = uVar1;
    if (*(uint *)(param_2 + 0xc) != uVar1) {
      FUN_1447a8aa0(param_2,uVar1);
      iVar5 = *(int *)(param_2 + 8);
      uVar3 = *(uint *)(param_2 + 0xc);
    }
    *(uint *)(param_2 + 8) = iVar5 + uVar1;
    if (uVar3 - iVar5 < uVar1) {
      FUN_1403e3958(param_2);
    }
    FUN_14839905e(param_1,&local_98,param_2);
    FUN_1483990fe(param_1,param_2);
    FUN_148398478(&local_98);
    FUN_148398478(&local_d0);
    if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14839a5e6 FUN_14839a5e6 body=409 status=ok
// SIG undefined FUN_14839a5e6(void)

undefined4 FUN_14839a5e6(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined8 local_108;
  int aiStack_100 [10];
  longlong local_d8 [2];
  undefined1 local_c1;
  undefined8 local_c0;
  longlong local_b8;
  undefined1 local_a0 [8];
  undefined8 local_98;
  longlong local_90;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_110 = param_3;
  FUN_144a82cde();
  FUN_140056680(local_d8,L"Post-setup solve time");
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1483af29a(&local_108,*(undefined4 *)(*(longlong *)(param_1 + 0x30) + 8));
  iVar3 = 0;
  do {
    lVar2 = (ulonglong)(iVar3 != 1) * 0x10 + 0x10;
    if (iVar3 == 0) {
      lVar2 = 0;
    }
    lVar4 = (longlong)*(int *)(param_2 + 8 + lVar2);
    local_98 = 0;
    local_90 = 0;
    if (0 < lVar4) {
      local_98 = *(undefined8 *)(param_2 + lVar2);
      local_90 = lVar4;
    }
    lVar4 = (longlong)*(int *)(param_1 + 8 + lVar2);
    local_70 = 0;
    local_68 = 0;
    if (0 < lVar4) {
      local_70 = *(undefined8 *)(param_1 + lVar2);
      local_68 = lVar4;
    }
    local_c0 = 0;
    local_b8 = 0;
    if (0 < (longlong)*(int *)((longlong)aiStack_100 + lVar2)) {
      local_c0 = *(undefined8 *)((longlong)aiStack_100 + lVar2 + -8);
      local_b8 = (longlong)*(int *)((longlong)aiStack_100 + lVar2);
    }
    local_78 = param_1 + 0x38;
    FUN_1483af2ed(&local_c0,local_a0,&local_c1);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 3);
  (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x10))
            (*(longlong **)(param_1 + 0xd0),&local_108,local_110);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x38))();
  FUN_148398478(&local_108);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839a780 FUN_14839a780 body=259 status=ok
// SIG undefined FUN_14839a780(void)

void FUN_14839a780(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(param_2 + 1);
  iVar3 = (int)param_3[1];
  if (iVar3 == 0 && uVar1 == 0) {
    FUN_1483c19d6(param_4,param_1,&local_49);
  }
  else {
    uVar2 = *(uint *)(param_1 + 1);
    if (uVar2 != 0) {
      if (uVar1 == 0) {
        uVar1 = uVar2;
      }
      uVar5 = iVar3 + (uint)(iVar3 == 0);
      FUN_14828b000(param_4);
      if (0 < (int)uVar1) {
        uVar4 = 0;
        do {
          if (0 < (int)uVar5) {
            uVar6 = 0;
            do {
              iVar3 = *(int *)(*param_2 + uVar4 * 4);
              if ((((longlong)iVar3 < 0) || ((int)uVar2 <= iVar3)) ||
                 (*(int *)(*param_3 + uVar6 * 4) != 0)) goto LAB_14839a7bd;
              *(undefined8 *)(param_4[1] * uVar6 * 8 + *param_4 + uVar4 * 8) =
                   *(undefined8 *)(*param_1 + (longlong)iVar3 * 8);
              uVar6 = uVar6 + 1;
            } while (uVar5 != uVar6);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar1);
      }
    }
  }
LAB_14839a7bd:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14839a884 FUN_14839a884 body=373 status=ok
// SIG undefined FUN_14839a884(void)

void FUN_14839a884(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188 [128];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8 [128];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_14836b25a(param_2);
  FUN_14836b2a0(param_2,*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),
                *(undefined4 *)(param_1 + 0x50),param_1 + 0x20);
  FUN_1483c137e(param_2,param_1);
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 8) - iVar1;
  FUN_148333d12(local_e8,iVar2,iVar2);
  FUN_148333d12(local_188,iVar2,iVar1);
  FUN_14839a9fa(param_1,param_2,local_e8,local_188);
  local_190 = local_58;
  local_198 = local_60;
  FUN_14836a965(&local_198,&local_190,local_68);
  FUN_14834db6e(local_68);
  FUN_146de59cc(param_3,local_68);
  local_190 = local_f8;
  local_198 = local_100;
  FUN_14836a965(&local_198,&local_190,local_108);
  FUN_14834db6e(local_108);
  FUN_146de59cc(param_4,local_108);
  FUN_148334b02(local_188);
  FUN_148334b02(local_e8);
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839a9fa FUN_14839a9fa body=1045 status=ok
// SIG undefined FUN_14839a9fa(void)

void FUN_14839a9fa(code *param_1,longlong *param_2,undefined8 *param_3,longlong param_4)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  code *pcVar8;
  uint uVar9;
  undefined1 auStack_218 [40];
  code *local_1f0;
  longlong *local_1e8;
  ulonglong local_1e0;
  code *local_1d8;
  longlong *local_1d0;
  longlong local_1c8 [2];
  undefined4 local_1b8;
  int local_1b4;
  double local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  int local_1a0;
  int local_190;
  int local_18c;
  longlong local_178;
  longlong *local_168;
  longlong local_158 [4];
  undefined1 *local_138;
  int local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined **local_118;
  undefined4 local_110;
  code *local_108;
  longlong *local_f8;
  longlong local_e8 [4];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  longlong local_b8 [2];
  longlong *local_a8;
  longlong local_98 [5];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_218;
  iVar3 = (int)param_2[1];
  uVar9 = iVar3 - (int)param_2[4];
  uVar2 = FUN_14836b4e1();
  local_138 = (undefined1 *)CONCAT44(local_138._4_4_,uVar2);
  pcVar8 = (code *)*param_3;
  plVar5 = param_3 + 4;
  if ((longlong *)param_3[2] != (longlong *)0x0) {
    plVar5 = (longlong *)param_3[2];
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar8)(uVar4,&local_138);
  local_1c8[0] = 0;
  local_1c8[1] = 0;
  FUN_144a127d2(local_1c8,iVar3,1);
  if (0 < (longlong)iVar3) {
    lVar7 = 0;
    do {
      uVar2 = FUN_146be99b0(param_1,*(undefined4 *)(*param_2 + lVar7 * 4));
      *(undefined4 *)(local_1c8[0] + lVar7 * 4) = uVar2;
      lVar7 = lVar7 + 1;
    } while (iVar3 != lVar7);
  }
  local_1f0 = param_1;
  if (0 < (int)uVar9) {
    local_1d8 = param_1 + 0xb8;
    local_1d0 = (longlong *)(param_4 + 0x60);
    local_1e8 = param_3 + 0xc;
    local_1e0 = (ulonglong)uVar9;
    uVar6 = 0;
    do {
      iVar3 = *(int *)(local_1c8[0] + uVar6 * 4);
      dVar1 = 0.0;
      if (iVar3 != 0) {
        dVar1 = 1.0 / (double)iVar3;
      }
      local_110 = *(undefined4 *)(*param_2 + uVar6 * 4);
      local_128 = 0;
      local_118 = &PTR_LAB_149f3b7b0;
      local_108 = local_1f0;
      local_138 = &LAB_146c413d0;
      FUN_146c41260(local_1d8,&local_c8,local_110,&local_138);
      FUN_146c41458(CONCAT44(uStack_c4,local_c8),&local_138,local_c0,local_b8);
      FUN_146c41662(CONCAT44(uStack_c4,local_c8),&local_1a8,local_c0,local_b8);
      while ((((pcVar8 = local_108, uVar2 = (undefined4)uVar6,
               local_138 != (undefined1 *)CONCAT44(uStack_1a4,local_1a8) || (local_130 != local_1a0)
               ) || ((int)local_120 != local_190)) || (local_120._4_4_ != local_18c))) {
        local_1b0 = (double)CONCAT44(local_1b0._4_4_,local_118._0_4_);
        plVar5 = local_f8;
        if (local_f8 == (longlong *)0x0) {
          plVar5 = local_e8;
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        iVar3 = (*pcVar8)(uVar4,&local_1b0);
        local_1b4 = *(int *)(param_2[2] + (longlong)iVar3 * 4);
        iVar3 = local_1b4 - uVar9;
        if (local_1b4 < (int)uVar9) {
          pcVar8 = (code *)param_3[8];
          plVar5 = (longlong *)param_3[10];
          if (plVar5 == (longlong *)0x0) {
            plVar5 = local_1e8;
          }
        }
        else {
          pcVar8 = *(code **)(param_4 + 0x40);
          plVar5 = *(longlong **)(param_4 + 0x50);
          local_1b4 = iVar3;
          if (*(longlong **)(param_4 + 0x50) == (longlong *)0x0) {
            plVar5 = local_1d0;
          }
        }
        local_1b8 = uVar2;
        local_1b0 = dVar1;
        uVar4 = (**(code **)(*plVar5 + 8))();
        (*pcVar8)(uVar4,&local_1b8,&local_1b4,&local_1b0);
        if ((int)local_128 == 0) {
          local_12c = 0xffffffff;
          local_120 = 0xffffffffffffffff;
        }
        else {
          FUN_146be9922(&local_138);
        }
      }
      if (local_178 != 0) {
        plVar5 = local_168;
        if (local_168 == (longlong *)0x0) {
          plVar5 = local_158;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if (local_108 != (code *)0x0) {
        plVar5 = local_f8;
        if (local_f8 == (longlong *)0x0) {
          plVar5 = local_e8;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if (local_b8[0] != 0) {
        plVar5 = local_a8;
        if (local_a8 == (longlong *)0x0) {
          plVar5 = local_98;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      local_138 = (undefined1 *)0xbff0000000000000;
      pcVar8 = (code *)param_3[8];
      plVar5 = (longlong *)param_3[10];
      if ((longlong *)param_3[10] == (longlong *)0x0) {
        plVar5 = local_1e8;
      }
      local_1a8 = uVar2;
      local_c8 = uVar2;
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar8)(uVar4,&local_c8,&local_1a8,&local_138);
      uVar6 = uVar6 + 1;
    } while (uVar6 != local_1e0);
  }
  if (local_1c8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14839ae10 FUN_14839ae10 body=373 status=ok
// SIG undefined FUN_14839ae10(void)

void FUN_14839ae10(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188 [128];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8 [128];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_14836b25a(param_2);
  FUN_14836b2a0(param_2,*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),
                *(undefined4 *)(param_1 + 0x50),param_1 + 0x20);
  FUN_1483c137e(param_2,param_1);
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 8) - iVar1;
  FUN_148333d12(local_e8,iVar2,iVar2);
  FUN_148333d12(local_188,iVar2,iVar1);
  FUN_14839af86(param_1,param_2,local_e8,local_188);
  local_190 = local_58;
  local_198 = local_60;
  FUN_14836a965(&local_198,&local_190,local_68);
  FUN_14834db6e(local_68);
  FUN_146de59cc(param_3,local_68);
  local_190 = local_f8;
  local_198 = local_100;
  FUN_14836a965(&local_198,&local_190,local_108);
  FUN_14834db6e(local_108);
  FUN_146de59cc(param_4,local_108);
  FUN_148334b02(local_188);
  FUN_148334b02(local_e8);
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839af86 FUN_14839af86 body=1195 status=ok
// SIG undefined FUN_14839af86(void)

void FUN_14839af86(code *param_1,longlong *param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  code *pcVar11;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  code *local_230;
  longlong local_228;
  longlong *local_220;
  ulonglong local_218;
  code *local_210;
  code *local_208;
  longlong *local_200;
  longlong local_1f8 [2];
  undefined4 local_1e8;
  int local_1e4;
  double local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  int local_1d0;
  int local_1c0;
  int local_1bc;
  longlong local_1a8;
  longlong *local_198;
  longlong local_188 [4];
  undefined1 *local_168;
  int local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined **local_148;
  undefined4 local_140;
  code *local_138;
  longlong *local_128;
  longlong local_118 [4];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  longlong local_e8 [2];
  longlong *local_d8;
  longlong local_c8 [5];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  iVar1 = (int)param_2[1];
  uVar10 = iVar1 - (int)param_2[4];
  local_228 = param_4;
  uVar4 = FUN_14836b4e1();
  local_168 = (undefined1 *)CONCAT44(local_168._4_4_,uVar4);
  pcVar11 = (code *)*param_3;
  plVar7 = param_3 + 4;
  if ((longlong *)param_3[2] != (longlong *)0x0) {
    plVar7 = (longlong *)param_3[2];
  }
  local_238 = param_3;
  uVar6 = (**(code **)(*plVar7 + 8))();
  (*pcVar11)(uVar6,&local_168);
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  FUN_144a127d2(local_1f8,iVar1,1);
  if (0 < (longlong)iVar1) {
    lVar9 = 0;
    do {
      uVar4 = FUN_146be99b0(param_1,*(undefined4 *)(*param_2 + lVar9 * 4));
      *(undefined4 *)(local_1f8[0] + lVar9 * 4) = uVar4;
      lVar9 = lVar9 + 1;
    } while (iVar1 != lVar9);
  }
  local_230 = param_1;
  if (0 < (int)uVar10) {
    local_210 = param_1 + 0xb8;
    local_200 = (longlong *)(local_228 + 0x60);
    local_220 = local_238 + 0xc;
    local_218 = (ulonglong)uVar10;
    uVar8 = 0;
    do {
      local_140 = *(undefined4 *)(*param_2 + uVar8 * 4);
      iVar1 = *(int *)(local_1f8[0] + uVar8 * 4);
      local_158 = 0;
      local_148 = &PTR_LAB_149f3b7b0;
      local_138 = local_230;
      local_168 = &LAB_146c413d0;
      FUN_146c41260(local_210,&local_f8,local_140,&local_168);
      FUN_146c41458(CONCAT44(uStack_f4,local_f8),&local_168,local_f0,local_e8);
      FUN_146c41662(CONCAT44(uStack_f4,local_f8),&local_1d8,local_f0,local_e8);
      dVar3 = 0.0;
      while ((((pcVar11 = local_138, uVar4 = (undefined4)uVar8,
               local_168 != (undefined1 *)CONCAT44(uStack_1d4,local_1d8) || (local_160 != local_1d0)
               ) || ((int)local_150 != local_1c0)) || (local_150._4_4_ != local_1bc))) {
        local_1e0 = (double)CONCAT44(local_1e0._4_4_,local_148._0_4_);
        plVar7 = local_128;
        if (local_128 == (longlong *)0x0) {
          plVar7 = local_118;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        iVar5 = (*pcVar11)(uVar6,&local_1e0);
        iVar5 = *(int *)(param_2[2] + (longlong)iVar5 * 4);
        dVar2 = (double)(*(int *)(local_1f8[0] + (longlong)iVar5 * 4) + iVar1);
        if (dVar2 < 0.0) {
          dVar2 = sqrt(dVar2);
        }
        else {
          dVar2 = SQRT(dVar2);
        }
        if (iVar5 < (int)uVar10) {
          pcVar11 = (code *)local_238[8];
          plVar7 = (longlong *)local_238[10];
          local_1e4 = iVar5;
          if (plVar7 == (longlong *)0x0) {
            plVar7 = local_220;
          }
        }
        else {
          pcVar11 = *(code **)(local_228 + 0x40);
          plVar7 = *(longlong **)(local_228 + 0x50);
          local_1e4 = iVar5 - uVar10;
          if (*(longlong **)(local_228 + 0x50) == (longlong *)0x0) {
            plVar7 = local_200;
          }
        }
        local_1e8 = uVar4;
        local_1e0 = 1.0 / dVar2;
        uVar6 = (**(code **)(*plVar7 + 8))();
        (*pcVar11)(uVar6,&local_1e8,&local_1e4,&local_1e0);
        dVar3 = dVar3 + 1.0 / dVar2;
        if ((int)local_158 == 0) {
          local_15c = 0xffffffff;
          local_150 = 0xffffffffffffffff;
        }
        else {
          FUN_146be9922(&local_168);
        }
      }
      if (local_1a8 != 0) {
        plVar7 = local_198;
        if (local_198 == (longlong *)0x0) {
          plVar7 = local_188;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (local_138 != (code *)0x0) {
        plVar7 = local_128;
        if (local_128 == (longlong *)0x0) {
          plVar7 = local_118;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (local_e8[0] != 0) {
        plVar7 = local_d8;
        if (local_d8 == (longlong *)0x0) {
          plVar7 = local_c8;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      local_168 = (undefined1 *)((ulonglong)dVar3 ^ 0x8000000000000000);
      local_208 = (code *)local_238[8];
      plVar7 = (longlong *)local_238[10];
      if ((longlong *)local_238[10] == (longlong *)0x0) {
        plVar7 = local_220;
      }
      local_1d8 = uVar4;
      local_f8 = uVar4;
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*local_208)(uVar6,&local_f8,&local_1d8,&local_168);
      uVar8 = uVar8 + 1;
    } while (uVar8 != local_218);
  }
  if (local_1f8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14839b432 FUN_14839b432 body=373 status=ok
// SIG undefined FUN_14839b432(void)

void FUN_14839b432(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188 [128];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8 [128];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_14836b25a(param_2);
  FUN_14836b2a0(param_2,*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),
                *(undefined4 *)(param_1 + 0x50),param_1 + 0x20);
  FUN_1483c137e(param_2,param_1);
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 8) - iVar1;
  FUN_148333d12(local_e8,iVar2,iVar2);
  FUN_148333d12(local_188,iVar2,iVar1);
  FUN_14839b5a8(param_1,param_2,local_e8,local_188);
  local_190 = local_58;
  local_198 = local_60;
  FUN_14836a965(&local_198,&local_190,local_68);
  FUN_14834db6e(local_68);
  FUN_146de59cc(param_3,local_68);
  local_190 = local_f8;
  local_198 = local_100;
  FUN_14836a965(&local_198,&local_190,local_108);
  FUN_14834db6e(local_108);
  FUN_146de59cc(param_4,local_108);
  FUN_148334b02(local_188);
  FUN_148334b02(local_e8);
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839b5a8 FUN_14839b5a8 body=1067 status=ok
// SIG undefined FUN_14839b5a8(void)

void FUN_14839b5a8(longlong param_1,longlong *param_2,undefined8 *param_3,longlong param_4)

{
  double dVar1;
  uint *puVar2;
  int *piVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  code *pcVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  ulonglong local_110;
  longlong *local_108;
  double local_100;
  int local_f8;
  undefined4 local_f4;
  int local_f0;
  undefined8 local_e8;
  uint local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8 [5];
  int local_a0;
  int local_9c;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar15 = (int)param_2[1] - (int)param_2[4];
  local_128 = param_4;
  local_118 = param_2;
  uVar8 = FUN_14836b4e1();
  local_100 = (double)CONCAT44(local_100._4_4_,uVar8);
  pcVar16 = (code *)*param_3;
  plVar12 = param_3 + 4;
  if ((longlong *)param_3[2] != (longlong *)0x0) {
    plVar12 = (longlong *)param_3[2];
  }
  uVar9 = (**(code **)(*plVar12 + 8))();
  (*pcVar16)(uVar9,&local_100);
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  FUN_14836b25a(local_c8);
  FUN_14836b2a0(local_c8,*(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144),
                *(undefined4 *)(param_1 + 0x170),param_1 + 0x140);
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_1483c1adc(param_1,local_c8);
  if (0 < (int)uVar15) {
    dVar1 = (double)(param_1 + 0xb8);
    local_108 = (longlong *)(local_128 + 0x60);
    local_120 = param_3 + 0xc;
    local_110 = (ulonglong)uVar15;
    uVar22 = 0;
    do {
      iVar5 = *(int *)(*local_118 + uVar22 * 4);
      FUN_146be983e(&local_100,dVar1,iVar5,0);
      iVar21 = (int)uVar22;
      if (((local_100 == dVar1) && (local_f8 == iVar5)) && ((int)local_e8 == -1)) {
        dVar6 = 0.0;
        if (local_e8._4_4_ != -1) goto LAB_14839b77d;
      }
      else {
LAB_14839b77d:
        dVar6 = 0.0;
        do {
          lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_e0 >> 9) * 8);
          uVar13 = (ulonglong)((local_e0 & 0x1ff) << 4);
          iVar10 = *(int *)(lVar19 + 0xc + uVar13);
          lVar11 = (longlong)*(int *)(local_c8[2] + (longlong)*(int *)(lVar19 + 8 + uVar13) * 4) *
                   0x50 + local_d8;
          lVar14 = 0x18;
          do {
            lVar17 = lVar14 + 4;
            piVar3 = (int *)(lVar11 + -0x14 + lVar14);
            lVar14 = lVar17;
          } while (*piVar3 != iVar5);
          lVar14 = 0x10;
          do {
            lVar18 = lVar14 + 4;
            puVar2 = (uint *)(lVar11 + lVar14);
            lVar14 = lVar18;
          } while (*puVar2 != local_e0);
          iVar7 = *(int *)(lVar19 + 4 + uVar13);
          if (*(int *)(lVar19 + uVar13) != iVar5) {
            iVar7 = *(int *)(lVar19 + uVar13);
          }
          if (iVar10 == -1) {
            dVar24 = 0.0;
          }
          else {
            lVar14 = local_d8 + (longlong)*(int *)(local_c8[2] + (longlong)iVar10 * 4) * 0x50;
            lVar19 = 0x18;
            do {
              lVar20 = lVar19 + 4;
              piVar3 = (int *)(lVar14 + -0x14 + lVar19);
              lVar19 = lVar20;
            } while (*piVar3 != iVar5);
            dVar24 = *(double *)(lVar14 + lVar20 * 2);
          }
          dVar4 = *(double *)(lVar11 + -8 + lVar18 * 2);
          dVar23 = 1e-05;
          if (1e-05 <= dVar4) {
            dVar23 = dVar4;
          }
          dVar23 = (*(double *)(lVar11 + lVar17 * 2) + dVar24) / dVar23;
          local_9c = *(int *)(local_118[2] + (longlong)iVar7 * 4);
          iVar10 = local_9c - uVar15;
          if (local_9c < (int)uVar15) {
            pcVar16 = (code *)param_3[8];
            plVar12 = (longlong *)param_3[10];
            if (plVar12 == (longlong *)0x0) {
              plVar12 = local_120;
            }
          }
          else {
            pcVar16 = *(code **)(local_128 + 0x40);
            plVar12 = *(longlong **)(local_128 + 0x50);
            local_9c = iVar10;
            if (*(longlong **)(local_128 + 0x50) == (longlong *)0x0) {
              plVar12 = local_108;
            }
          }
          local_a0 = iVar21;
          local_98 = dVar23;
          uVar9 = (**(code **)(*plVar12 + 8))();
          (*pcVar16)(uVar9,&local_a0,&local_9c,&local_98);
          if (local_f0 == 0) {
            local_f4 = 0xffffffff;
            local_e8 = 0xffffffffffffffff;
            local_e8._4_4_ = -1;
            local_e8._0_4_ = -1;
          }
          else {
            FUN_146be9922(&local_100);
          }
          dVar6 = dVar6 + dVar23;
        } while (((local_100 != dVar1) || (local_f8 != iVar5)) ||
                (((int)local_e8 != -1 || (local_e8._4_4_ != -1))));
      }
      local_100 = -dVar6;
      local_98 = (double)CONCAT44(local_98._4_4_,iVar21);
      pcVar16 = (code *)param_3[8];
      plVar12 = (longlong *)param_3[10];
      if ((longlong *)param_3[10] == (longlong *)0x0) {
        plVar12 = local_120;
      }
      local_9c = iVar21;
      uVar9 = (**(code **)(*plVar12 + 8))();
      (*pcVar16)(uVar9,&local_9c,&local_98);
      uVar22 = uVar22 + 1;
    } while (uVar22 != local_110);
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_c8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14839b9d4 FUN_14839b9d4 body=482 status=ok
// SIG undefined FUN_14839b9d4(void)

void FUN_14839b9d4(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228 [128];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_188 [128];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8 [128];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_14836b25a(param_2);
  FUN_14836b2a0(param_2,*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),
                *(undefined4 *)(param_1 + 0x50),param_1 + 0x20);
  FUN_1483c137e(param_2,param_1);
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 8) - iVar1;
  FUN_148333d12(local_e8,iVar2,iVar2);
  FUN_148333d12(local_188,iVar2,iVar1);
  FUN_148333d12(local_228,iVar2,iVar2);
  local_248 = local_188;
  FUN_14839bbb7(param_1,param_2,local_228,local_e8);
  local_230 = local_58;
  local_238 = local_60;
  FUN_14836a965(&local_238,&local_230,local_68);
  FUN_14834db6e(local_68);
  FUN_146de59cc(param_4,local_68);
  local_230 = local_f8;
  local_238 = local_100;
  FUN_14836a965(&local_238,&local_230,local_108);
  FUN_14834db6e(local_108);
  FUN_146de59cc(param_5,local_108);
  local_230 = local_198;
  local_238 = local_1a0;
  FUN_14836a965(&local_238,&local_230,local_1a8);
  FUN_14834db6e(local_1a8);
  FUN_146de59cc(param_3,local_1a8);
  FUN_148334b02(local_228);
  FUN_148334b02(local_188);
  FUN_148334b02(local_e8);
  if ((local_48 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839bbb7 FUN_14839bbb7 body=2057 status=ok
// SIG undefined FUN_14839bbb7(void)

void FUN_14839bbb7(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  double dVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  code **ppcVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  code *pcVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_338 [36];
  uint local_314;
  code *local_310;
  longlong *local_308;
  longlong *local_300;
  longlong *local_2f8;
  longlong *local_2f0;
  ulonglong local_2e8;
  longlong *local_2e0;
  undefined8 *local_2d8;
  longlong *local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  longlong local_2b8;
  undefined8 uStack_2b0;
  longlong local_2a8 [4];
  code *local_288;
  undefined8 uStack_280;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 local_22c;
  longlong local_228 [2];
  longlong *local_218;
  longlong local_208 [4];
  code *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined **local_1c8;
  longlong local_1c0;
  int iStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  uint local_190;
  undefined4 local_18c;
  longlong local_188 [2];
  longlong *local_178;
  longlong local_168 [4];
  int local_148;
  undefined4 uStack_144;
  longlong *local_138;
  longlong local_128 [4];
  code *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  lVar12 = param_2[1];
  uVar14 = (int)lVar12 - (int)param_2[4];
  local_300 = param_2;
  local_1e8._0_4_ = FUN_14836b4e1();
  pcVar4 = (code *)*param_4;
  plVar11 = param_4 + 4;
  if ((longlong *)param_4[2] != (longlong *)0x0) {
    plVar11 = (longlong *)param_4[2];
  }
  uVar8 = (**(code **)(*plVar11 + 8))();
  (*pcVar4)(uVar8,&local_1e8);
  local_2a8[2] = 0;
  local_2a8[3] = 0;
  local_2a8[0] = 0;
  local_2a8[1] = 0;
  FUN_14836b25a(local_2a8);
  FUN_14836b2a0(local_2a8,*(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144),
                *(undefined4 *)(param_1 + 0x170),param_1 + 0x140);
  local_1e8 = (code *)CONCAT44(local_1e8._4_4_,(int)lVar12);
  pcVar4 = (code *)*param_3;
  plVar11 = param_3 + 4;
  if ((longlong *)param_3[2] != (longlong *)0x0) {
    plVar11 = (longlong *)param_3[2];
  }
  uVar8 = (**(code **)(*plVar11 + 8))();
  (*pcVar4)(uVar8,&local_1e8);
  local_2b8 = 0;
  uStack_2b0 = 0;
  FUN_14836b58e(param_1,local_2a8);
  local_314 = uVar14;
  if ((int)uVar14 < 1) {
LAB_14839c329:
    if (local_2b8 != 0) {
      FUN_1400020a8();
    }
    if (local_2a8[2] != 0) {
      FUN_1400020a8();
    }
    if (local_2a8[0] != 0) {
      FUN_1400020a8();
    }
    if ((local_b0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_310 = (code *)(param_1 + 0xb8);
  local_2f8 = local_208;
  local_2f0 = local_168;
  local_2d0 = (longlong *)(param_5 + 0x60);
  local_308 = param_4 + 0xc;
  local_2e0 = param_3 + 0xc;
  local_2e8 = (ulonglong)uVar14;
  uVar16 = 0;
  local_2d8 = param_4;
LAB_14839bd73:
  iVar2 = *(int *)(*local_300 + uVar16 * 4);
  local_1d8 = 0;
  local_1c8 = &PTR_LAB_149f3aae0;
  local_1e8 = FUN_146be9588;
  local_288 = local_310;
  uStack_280 = CONCAT44(uStack_280._4_4_,iVar2);
  local_1c0 = param_1;
  iStack_1b8 = iVar2;
  FUN_146be94ac(&local_148,&local_288,&local_1e8);
  local_198 = 0xffffffffffffffff;
  local_188[0] = 0;
  local_178 = (longlong *)0x0;
  local_1c8 = (undefined **)local_e8;
  local_1d8 = local_f8;
  uStack_1d0 = uStack_f0;
  local_1e8 = local_108;
  uStack_1e0 = uStack_100;
  iStack_1b8 = uStack_d8;
  uStack_1b4 = uStack_d4;
  local_1b0 = local_d0;
  uStack_1ac = uStack_cc;
  uStack_1a8 = uStack_c8;
  uStack_1a4 = uStack_c4;
  local_1a0 = local_c0;
  FUN_146be971a(local_188,&local_148);
  local_18c = 0;
  FUN_146bfd1f0(&local_1e8);
  local_238 = 0xffffffffffffffff;
  local_228[0] = 0;
  local_218 = (longlong *)0x0;
  local_268 = local_c0;
  local_288 = (code *)CONCAT44(uStack_dc,local_e0);
  uStack_280 = CONCAT44(uStack_d4,uStack_d8);
  uStack_270 = CONCAT44(uStack_c4,uStack_c8);
  local_260 = local_e0;
  uStack_25c = uStack_dc;
  uStack_258 = uStack_d8;
  uStack_254 = uStack_d4;
  local_250 = local_d0;
  uStack_24c = uStack_cc;
  uStack_248 = uStack_c8;
  uStack_244 = uStack_c4;
  local_240 = local_c0;
  FUN_146be971a(local_228,&local_148);
  local_22c = 0;
  pcVar4 = (code *)0x0;
  ppcVar10 = &local_288;
  do {
    FUN_146bfd1f0(ppcVar10);
    puVar7 = local_2d8;
    if (local_1e8 == local_288) {
      if ((int)uStack_1e0 == (int)uStack_280) {
        if ((int)uStack_1d0 == (int)uStack_270) {
          if (uStack_1d0._4_4_ == uStack_270._4_4_) break;
        }
      }
    }
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(local_190 >> 9) * 8);
    local_2c0 = *(undefined4 *)(lVar12 + 8 + (ulonglong)(local_190 & 0x1ff) * 0xc);
    local_2c8 = *(undefined8 *)(lVar12 + (ulonglong)(local_190 & 0x1ff) * 0xc);
    lVar12 = 0;
    do {
      lVar13 = lVar12 + 4;
      piVar1 = (int *)((longlong)&local_2c8 + lVar12);
      lVar12 = lVar13;
    } while (*piVar1 != iVar2);
    pcVar4 = (code *)((double)pcVar4 +
                     *(double *)
                      (local_2b8 +
                       (longlong)*(int *)(local_2a8[2] + (longlong)(int)local_190 * 4) * 0x50 + 0x18
                      + lVar13 * 2));
    ppcVar10 = &local_1e8;
  } while( true );
  if (local_228[0] != 0) {
    plVar11 = local_218;
    if (local_218 == (longlong *)0x0) {
      plVar11 = local_2f8;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_188[0] != 0) {
    plVar11 = local_178;
    if (local_178 == (longlong *)0x0) {
      plVar11 = local_2f0;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (CONCAT44(uStack_144,local_148) != 0) {
    plVar11 = local_138;
    if (local_138 == (longlong *)0x0) {
      plVar11 = local_128;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  pcVar5 = local_310;
  FUN_146be983e(&local_1e8,local_310,iVar2,0);
  iVar15 = (int)uVar16;
  if (((local_1e8 == pcVar5) && ((int)uStack_1e0 == iVar2)) && ((int)uStack_1d0 == -1)) {
    dVar6 = 0.0;
    if (uStack_1d0._4_4_ == -1) goto LAB_14839c06c;
  }
  dVar6 = 0.0;
  do {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)((uint)local_1c8 >> 9) * 8);
    uVar17 = (ulonglong)(((uint)local_1c8 & 0x1ff) << 4);
    iVar9 = *(int *)(lVar12 + uVar17);
    if (iVar9 == iVar2) {
      iVar9 = *(int *)(lVar12 + 4 + uVar17);
    }
    lVar18 = (longlong)*(int *)(local_2a8[2] + (longlong)*(int *)(lVar12 + 8 + uVar17) * 4) * 0x50;
    lVar13 = local_2b8 + lVar18;
    if (*(uint *)(local_2b8 + 0x40 + lVar18) == (uint)local_1c8) {
      lVar18 = 0;
LAB_14839c178:
      uVar8 = *(undefined8 *)(lVar13 + 8 + lVar18 * 8);
      uVar22 = (int)uVar8;
      uVar23 = (int)((ulonglong)uVar8 >> 0x20);
    }
    else {
      lVar18 = 1;
      if ((*(uint *)(lVar13 + 0x44) == (uint)local_1c8) ||
         (lVar18 = 2, uVar22 = 0, uVar23 = 0xbff00000, *(uint *)(lVar13 + 0x48) == (uint)local_1c8))
      goto LAB_14839c178;
    }
    iVar3 = *(int *)(lVar12 + 0xc + uVar17);
    if (iVar3 == -1) {
      uVar20 = 0;
      uVar21 = 0;
    }
    else {
      lVar13 = (longlong)*(int *)(local_2a8[2] + (longlong)iVar3 * 4) * 0x50;
      lVar12 = local_2b8 + lVar13;
      if (*(uint *)(local_2b8 + 0x40 + lVar13) == (uint)local_1c8) {
        lVar13 = 0;
      }
      else {
        lVar13 = 1;
        if ((*(uint *)(lVar12 + 0x44) != (uint)local_1c8) &&
           (lVar13 = 2, uVar20 = 0, uVar21 = 0xbff00000, *(uint *)(lVar12 + 0x48) != (uint)local_1c8
           )) goto LAB_14839c1b2;
      }
      uVar8 = *(undefined8 *)(lVar12 + 8 + lVar13 * 8);
      uVar20 = (int)uVar8;
      uVar21 = (int)((ulonglong)uVar8 >> 0x20);
    }
LAB_14839c1b2:
    pcVar5 = (code *)(((double)CONCAT44(uVar23,uVar22) + (double)CONCAT44(uVar21,uVar20)) * 0.5);
    local_148 = *(int *)(local_300[2] + (longlong)iVar9 * 4);
    iVar9 = local_148 - local_314;
    if (local_148 < (int)local_314) {
      pcVar19 = (code *)puVar7[8];
      plVar11 = (longlong *)puVar7[10];
      if (plVar11 == (longlong *)0x0) {
        plVar11 = local_308;
      }
    }
    else {
      pcVar19 = *(code **)(param_5 + 0x40);
      plVar11 = *(longlong **)(param_5 + 0x50);
      local_148 = iVar9;
      if (*(longlong **)(param_5 + 0x50) == (longlong *)0x0) {
        plVar11 = local_2d0;
      }
    }
    local_2c8 = CONCAT44(local_2c8._4_4_,iVar15);
    local_288 = pcVar5;
    uVar8 = (**(code **)(*plVar11 + 8))();
    (*pcVar19)(uVar8,&local_2c8,&local_148,&local_288);
    if ((int)local_1d8 == 0) {
      uStack_1e0 = CONCAT44(0xffffffff,(int)uStack_1e0);
      uStack_1d0 = 0xffffffffffffffff;
      uStack_1d0._4_4_ = -1;
      uStack_1d0._0_4_ = -1;
    }
    else {
      FUN_146be9922(&local_1e8);
    }
    dVar6 = dVar6 + (double)pcVar5;
  } while ((((local_1e8 != local_310) || ((int)uStack_1e0 != iVar2)) || ((int)uStack_1d0 != -1)) ||
          (uStack_1d0._4_4_ != -1));
LAB_14839c06c:
  local_1e8 = (code *)((ulonglong)dVar6 ^ 0x8000000000000000);
  pcVar5 = (code *)puVar7[8];
  plVar11 = (longlong *)puVar7[10];
  if ((longlong *)puVar7[10] == (longlong *)0x0) {
    plVar11 = local_308;
  }
  local_148 = iVar15;
  local_288._0_4_ = iVar15;
  uVar8 = (**(code **)(*plVar11 + 8))();
  (*pcVar5)(uVar8,&local_148,&local_288,&local_1e8);
  local_288 = (code *)CONCAT44(local_288._4_4_,iVar15);
  pcVar5 = (code *)param_3[8];
  plVar11 = (longlong *)param_3[10];
  if ((longlong *)param_3[10] == (longlong *)0x0) {
    plVar11 = local_2e0;
  }
  local_1e8 = pcVar4;
  local_148 = iVar15;
  uVar8 = (**(code **)(*plVar11 + 8))();
  (*pcVar5)(uVar8,&local_148,&local_288);
  uVar16 = uVar16 + 1;
  if (uVar16 == local_2e8) goto LAB_14839c329;
  goto LAB_14839bd73;
}



// FUNCTION 14839c3c1 FUN_14839c3c1 body=373 status=ok
// SIG undefined FUN_14839c3c1(void)

void FUN_14839c3c1(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188 [128];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8 [128];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_14836b25a(param_2);
  FUN_14836b2a0(param_2,*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),
                *(undefined4 *)(param_1 + 0x50),param_1 + 0x20);
  FUN_1483c137e(param_2,param_1);
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 8) - iVar1;
  FUN_148333d12(local_e8,iVar2,iVar2);
  FUN_148333d12(local_188,iVar2,iVar1);
  FUN_14839c537(param_1,param_2,local_e8,local_188);
  local_190 = local_58;
  local_198 = local_60;
  FUN_14836a965(&local_198,&local_190,local_68);
  FUN_14834db6e(local_68);
  FUN_146de59cc(param_3,local_68);
  local_190 = local_f8;
  local_198 = local_100;
  FUN_14836a965(&local_198,&local_190,local_108);
  FUN_14834db6e(local_108);
  FUN_146de59cc(param_4,local_108);
  FUN_148334b02(local_188);
  FUN_148334b02(local_e8);
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839c537 FUN_14839c537 body=2055 status=ok
// SIG undefined FUN_14839c537(void)

void FUN_14839c537(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong param_4)

{
  double dVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  uint uVar12;
  code *pcVar13;
  undefined1 *puVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_388 [32];
  longlong *local_368;
  longlong *local_360;
  ulonglong local_358;
  undefined1 *local_350;
  int local_348;
  undefined4 local_344;
  int local_340;
  undefined8 local_338;
  uint local_330;
  void *local_328;
  ulonglong uStack_320;
  int local_318;
  int local_314;
  double local_310;
  longlong local_308;
  undefined8 uStack_300;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2dc;
  int local_2d4;
  undefined1 local_2d0 [8];
  undefined1 *local_2c8;
  int local_2c0;
  undefined1 local_2b0 [104];
  undefined1 local_248 [224];
  longlong local_168;
  int local_158;
  int local_154;
  longlong local_150;
  longlong local_118;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  uVar15 = (int)param_2[1] - (int)param_2[4];
  FUN_1482e33e6(local_2b0,param_1);
  local_2e8 = 0;
  local_2e0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_2dc = 0xffffffff00000080;
  local_2d4 = 0;
  local_2c8 = (undefined1 *)0x0;
  local_2c0 = 0;
  FUN_1482e31ae(local_2b0,&local_308,0x7fffffff);
  uVar6 = FUN_14836b3c5(local_2b0,param_2);
  local_350 = (undefined1 *)CONCAT44(local_350._4_4_,uVar6);
  pcVar13 = (code *)*param_3;
  plVar10 = param_3 + 4;
  if ((longlong *)param_3[2] != (longlong *)0x0) {
    plVar10 = (longlong *)param_3[2];
  }
  uVar7 = (**(code **)(*plVar10 + 8))();
  (*pcVar13)(uVar7);
  local_328 = (void *)0x0;
  uVar12 = local_158 * 0x200 + local_154;
  uStack_320 = (ulonglong)uVar12;
  if (uVar12 != 0) {
    FUN_144941252(&local_328);
    memset(local_328,0,(longlong)(int)uVar12 << 3);
    if (0 < (int)uVar12) {
      uVar17 = 0;
      do {
        if (((longlong)uVar17 < (longlong)(local_158 * 0x200 + local_154)) &&
           ((ushort)(*(short *)(*(longlong *)(local_150 + (uVar17 >> 9 & 0x7fffff) * 8) +
                               (ulonglong)((uint)uVar17 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          dVar19 = (double)FUN_1482e4776(local_2b0,uVar17 & 0xffffffff);
          *(ulonglong *)((longlong)local_328 + uVar17 * 8) =
               ~-(ulonglong)(dVar19 <= 0.0) & (ulonglong)dVar19;
        }
        uVar17 = uVar17 + 1;
      } while (uVar12 != uVar17);
    }
  }
  if (0 < (int)uVar15) {
    local_360 = (longlong *)(param_4 + 0x60);
    local_368 = param_3 + 0xc;
    local_358 = (ulonglong)uVar15;
    uVar17 = 0;
    do {
      iVar2 = *(int *)(*param_2 + uVar17 * 4);
      FUN_146be983e(&local_350,local_248,iVar2,0);
      iVar16 = (int)uVar17;
      if ((((local_350 == local_248) && (local_348 == iVar2)) && ((int)local_338 == -1)) &&
         (dVar19 = 1e-05, local_338._4_4_ == -1)) {
LAB_14839c7c8:
        FUN_146be983e(&local_350,local_248,iVar2,0);
        if (((local_350 == local_248) && (local_348 == iVar2)) &&
           (((int)local_338 == -1 && (local_338._4_4_ == -1)))) {
          dVar5 = 0.0;
        }
        else {
          dVar5 = 0.0;
          do {
            lVar4 = *(longlong *)(local_168 + (ulonglong)(local_330 >> 9) * 8);
            uVar18 = (ulonglong)((local_330 & 0x1ff) << 4);
            iVar9 = *(int *)(lVar4 + uVar18);
            iVar3 = *(int *)(lVar4 + 4 + uVar18);
            if (iVar9 != iVar3) {
              dVar1 = *(double *)((longlong)local_328 + (longlong)(int)local_330 * 8);
              dVar20 = dVar19 * 100000.0;
              if (dVar1 <= dVar19 * 100000.0) {
                dVar20 = dVar1;
              }
              uVar18 = -(ulonglong)(dVar1 < dVar19 * -100000.0);
              local_310 = (double)(uVar18 & (ulonglong)(dVar19 * -100000.0) |
                                  ~uVar18 & (ulonglong)dVar20) / dVar19;
              dVar5 = dVar5 + local_310;
              if (iVar9 != iVar2) {
                iVar3 = iVar9;
              }
              local_314 = *(int *)(param_2[2] + (longlong)iVar3 * 4);
              iVar9 = local_314 - uVar15;
              if (local_314 < (int)uVar15) {
                pcVar13 = (code *)param_3[8];
                plVar10 = (longlong *)param_3[10];
                if (plVar10 == (longlong *)0x0) {
                  plVar10 = local_368;
                }
              }
              else {
                pcVar13 = *(code **)(param_4 + 0x40);
                plVar10 = *(longlong **)(param_4 + 0x50);
                local_314 = iVar9;
                if (*(longlong **)(param_4 + 0x50) == (longlong *)0x0) {
                  plVar10 = local_360;
                }
              }
              local_318 = iVar16;
              uVar7 = (**(code **)(*plVar10 + 8))();
              (*pcVar13)(uVar7,&local_318,&local_314,&local_310);
            }
            if (local_340 == 0) {
              local_344 = 0xffffffff;
              local_338 = 0xffffffffffffffff;
              local_338._4_4_ = -1;
              local_338._0_4_ = -1;
            }
            else {
              FUN_146be9922(&local_350);
            }
          } while (((local_350 != local_248) || (local_348 != iVar2)) ||
                  (((int)local_338 != -1 || (local_338._4_4_ != -1))));
        }
      }
      else {
        dVar5 = 0.0;
        bVar11 = false;
        puVar8 = local_350;
        iVar9 = local_348;
        do {
          if ((int)uStack_300 != local_2d4) {
            puVar14 = local_2c8;
            if (local_2c8 == (undefined1 *)0x0) {
              puVar14 = local_2d0;
            }
            for (iVar3 = *(int *)(puVar14 + (ulonglong)(local_2c0 - 1U & local_330) * 4);
                iVar3 != -1; iVar3 = *(int *)(local_308 + (longlong)iVar3 * 0xc + 4)) {
              if (*(uint *)(local_308 + (longlong)iVar3 * 0xc) == local_330) {
                bVar11 = true;
                break;
              }
            }
          }
          dVar19 = *(double *)
                    (*(longlong *)(local_118 + (ulonglong)(local_330 >> 9) * 8) +
                    (ulonglong)(local_330 & 0x1ff) * 8);
          dVar1 = *(double *)((longlong)local_328 + (longlong)(int)local_330 * 8);
          if (local_340 == 0) {
            local_344 = 0xffffffff;
            local_338 = 0xffffffffffffffff;
            local_338._4_4_ = -1;
            local_338._0_4_ = -1;
          }
          else {
            FUN_146be9922(&local_350);
            puVar8 = local_350;
            iVar9 = local_348;
          }
          dVar5 = dVar5 + dVar19 * dVar1 * dVar19;
        } while (((puVar8 != local_248) || (iVar9 != iVar2)) ||
                (((int)local_338 != -1 || (local_338._4_4_ != -1))));
        dVar19 = dVar5 * 0.25;
        if (dVar5 * 0.25 <= 1e-05) {
          dVar19 = 1e-05;
        }
        if (!bVar11) goto LAB_14839c7c8;
        FUN_146be983e(&local_350,local_248,iVar2,0);
        if (((local_350 == local_248) && (local_348 == iVar2)) && ((int)local_338 == -1)) {
          dVar5 = 0.0;
          if (local_338._4_4_ != -1) goto LAB_14839cb5e;
        }
        else {
LAB_14839cb5e:
          dVar5 = 0.0;
          do {
            lVar4 = *(longlong *)(local_168 + (ulonglong)(local_330 >> 9) * 8);
            uVar18 = (ulonglong)((local_330 & 0x1ff) << 4);
            iVar9 = *(int *)(lVar4 + uVar18);
            if (iVar9 == iVar2) {
              iVar9 = *(int *)(lVar4 + 4 + uVar18);
            }
            local_314 = *(int *)(param_2[2] + (longlong)iVar9 * 4);
            dVar5 = dVar5 + 1.0;
            iVar9 = local_314 - uVar15;
            if (local_314 < (int)uVar15) {
              pcVar13 = (code *)param_3[8];
              plVar10 = (longlong *)param_3[10];
              if (plVar10 == (longlong *)0x0) {
                plVar10 = local_368;
              }
            }
            else {
              pcVar13 = *(code **)(param_4 + 0x40);
              plVar10 = *(longlong **)(param_4 + 0x50);
              local_314 = iVar9;
              if (*(longlong **)(param_4 + 0x50) == (longlong *)0x0) {
                plVar10 = local_360;
              }
            }
            local_310 = 1.0;
            local_318 = iVar16;
            uVar7 = (**(code **)(*plVar10 + 8))();
            (*pcVar13)(uVar7,&local_318,&local_314,&local_310);
            if (local_340 == 0) {
              local_344 = 0xffffffff;
              local_338 = 0xffffffffffffffff;
              local_338._4_4_ = -1;
              local_338._0_4_ = -1;
            }
            else {
              FUN_146be9922(&local_350);
            }
          } while ((((local_350 != local_248) || (local_348 != iVar2)) || ((int)local_338 != -1)) ||
                  (local_338._4_4_ != -1));
        }
      }
      local_350 = (undefined1 *)((ulonglong)dVar5 ^ 0x8000000000000000);
      local_310 = (double)CONCAT44(local_310._4_4_,iVar16);
      pcVar13 = (code *)param_3[8];
      plVar10 = (longlong *)param_3[10];
      if ((longlong *)param_3[10] == (longlong *)0x0) {
        plVar10 = local_368;
      }
      local_314 = iVar16;
      uVar7 = (**(code **)(*plVar10 + 8))();
      (*pcVar13)(uVar7,&local_314,&local_310);
      uVar17 = uVar17 + 1;
    } while (uVar17 != local_358);
  }
  if (local_328 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_2c0 = 0;
  if (local_2c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_308);
  FUN_14830d2e0(local_2b0);
  if ((local_f0 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839cd3f FUN_14839cd3f body=876 status=ok
// SIG undefined FUN_14839cd3f(void)

void FUN_14839cd3f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_218 [32];
  undefined1 *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  uint *local_1e0;
  uint *local_1d8;
  undefined1 *local_1d0;
  undefined8 local_1c8;
  uint local_1c0;
  uint uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  uint *puStack_170;
  uint *local_168;
  undefined1 local_158 [8];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_c8[0] = 0;
  local_c0 = 0xffffffffffffffff;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_1f0 = param_4;
  local_1e8 = param_3;
  FUN_146de45bc(local_c8,0,0);
  local_110[0] = 0;
  local_108 = 0xffffffffffffffff;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  FUN_146de45bc(local_110,0,0);
  local_158[0] = 0;
  local_150 = 0xffffffffffffffff;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  FUN_146de45bc(local_158,0,0);
  local_1f8 = local_158;
  FUN_14839b9d4(param_1,param_2,local_c8,local_110);
  dVar2 = 0.0;
  uVar4 = (uint)local_c0;
  if (0 < (int)uVar4) {
    uVar5 = 0;
    dVar2 = 0.0;
    do {
      dVar1 = (double)FUN_14839d0ac(local_c8,uVar5,uVar5);
      dVar2 = dVar2 + dVar1;
      uVar5 = uVar5 + 1;
    } while ((uVar4 & 0x7fffffff) != uVar5);
  }
  lVar6 = (longlong)(int)uVar4;
  local_178 = 0;
  puStack_170 = (uint *)0x0;
  local_168 = (uint *)0x0;
  FUN_148333c92(&local_178,lVar6);
  if (0 < (int)uVar4) {
    uVar5 = 0;
    do {
      uStack_1b8 = (double)FUN_14839d0ac(local_c8,uVar5,uVar5);
      uStack_1b8 = (dVar2 / (double)(int)uVar4) / uStack_1b8;
      if (param_5 != '\0') {
        dVar1 = 5.0;
        if (uStack_1b8 <= 5.0) {
          dVar1 = uStack_1b8;
        }
        uStack_1b8 = (double)(-(ulonglong)(uStack_1b8 < 0.5) & 0x3fe0000000000000 |
                             ~-(ulonglong)(uStack_1b8 < 0.5) & (ulonglong)dVar1);
      }
      local_1c0 = (uint)uVar5;
      uStack_1bc = local_1c0;
      if (puStack_170 == local_168) {
        FUN_14834da9e(&local_178,puStack_170,&local_1c0);
      }
      else {
        uStack_1b8._4_4_ = (uint)((ulonglong)uStack_1b8 >> 0x20);
        *puStack_170 = local_1c0;
        puStack_170[1] = local_1c0;
        puStack_170[2] = (uint)uStack_1b8;
        puStack_170[3] = uStack_1b8._4_4_;
        puStack_170 = puStack_170 + 4;
      }
      uVar5 = uVar5 + 1;
    } while ((uVar4 & 0x7fffffff) != uVar5);
  }
  local_1c0 = local_1c0 & 0xffffff00;
  uStack_1b8 = 0.0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  FUN_146de45bc(&local_1c0,lVar6,lVar6);
  local_1e0 = puStack_170;
  local_1c8 = local_178;
  FUN_14836a965(&local_1c8,&local_1e0,&local_1c0);
  FUN_14834db6e(&local_1c0);
  uVar3 = local_1f0;
  local_1e0 = (uint *)((ulonglong)local_1e0 & 0xffffffffffffff00);
  local_1d8 = &local_1c0;
  local_1d0 = local_158;
  FUN_14839d134(local_1f0,&local_1e0);
  FUN_14834db6e(uVar3);
  uVar3 = local_1e8;
  local_1e0 = (uint *)((ulonglong)local_1e0 & 0xffffffffffffff00);
  local_1d8 = &local_1c0;
  local_1d0 = local_110;
  FUN_14839d134(local_1e8,&local_1e0);
  FUN_14834db6e(uVar3);
  FUN_146de5508(&local_1c0);
  FUN_14834dc94(&local_178);
  FUN_146de5508(local_158);
  FUN_146de5508(local_110);
  FUN_146de5508(local_c8);
  if ((local_80 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839d0ac FUN_14839d0ac body=135 status=ok
// SIG undefined FUN_14839d0ac(void)

undefined8 FUN_14839d0ac(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  lVar7 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    iVar6 = *(int *)(lVar7 + param_3 * 4);
    iVar2 = *(int *)(lVar7 + 4 + param_3 * 4);
  }
  else {
    iVar6 = *(int *)(lVar7 + param_3 * 4);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x20) + param_3 * 4) + iVar6;
  }
  uVar8 = 0;
  if (iVar6 < iVar2) {
    lVar4 = (longlong)iVar2;
    lVar1 = *(longlong *)(param_1 + 0x30);
    lVar7 = lVar4 + -1;
    if (param_2 != *(int *)(lVar1 + -4 + lVar4 * 4)) {
      lVar3 = (longlong)iVar6;
      while (lVar5 = lVar7, lVar3 < lVar5) {
        lVar7 = lVar3 + lVar5 >> 1;
        if (*(int *)(lVar1 + lVar7 * 4) < param_2) {
          lVar3 = lVar7 + 1;
          lVar7 = lVar5;
        }
      }
      if (lVar4 <= lVar3) {
        return 0;
      }
      lVar7 = lVar3;
      if (param_2 != *(int *)(lVar1 + lVar3 * 4)) {
        return 0;
      }
    }
    uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar7 * 8);
  }
  return uVar8;
}



// FUNCTION 14839d134 FUN_14839d134 body=264 status=ok
// SIG undefined FUN_14839d134(void)

longlong FUN_14839d134(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_146de45bc(local_68,*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x10),
                *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 8));
  FUN_14836bdce(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),local_68);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = local_50;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uStack_58;
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = local_60;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uStack_48;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = local_40;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uStack_38;
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = local_30;
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uStack_28;
  local_60 = uVar3;
  uStack_58 = uVar2;
  local_50 = uVar1;
  uStack_48 = uVar4;
  local_40 = uVar5;
  uStack_38 = uVar6;
  local_30 = uVar7;
  uStack_28 = uVar8;
  FUN_146de5508(local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839d23d FUN_14839d23d body=373 status=ok
// SIG undefined FUN_14839d23d(void)

void FUN_14839d23d(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188 [128];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8 [128];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_14836b25a(param_2);
  FUN_14836b2a0(param_2,*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),
                *(undefined4 *)(param_1 + 0x50),param_1 + 0x20);
  FUN_1483c137e(param_2,param_1);
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 8) - iVar1;
  FUN_148333d12(local_e8,iVar2,iVar2);
  FUN_148333d12(local_188,iVar2,iVar1);
  FUN_1483c1cc6(param_1,param_2,local_e8,local_188);
  local_190 = local_58;
  local_198 = local_60;
  FUN_14836a965(&local_198,&local_190,local_68);
  FUN_14834db6e(local_68);
  FUN_146de59cc(param_3,local_68);
  local_190 = local_f8;
  local_198 = local_100;
  FUN_14836a965(&local_198,&local_190,local_108);
  FUN_14834db6e(local_108);
  FUN_146de59cc(param_4,local_108);
  FUN_148334b02(local_188);
  FUN_148334b02(local_e8);
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839d3b3 FUN_14839d3b3 body=322 status=ok
// SIG undefined FUN_14839d3b3(void)

undefined8 * FUN_14839d3b3(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  switch(*param_2) {
  case 1:
    puVar1 = (undefined8 *)FUN_14001cc68(400,0x10);
    *puVar1 = &PTR_FUN_14ae75860;
    *(undefined1 *)(puVar1 + 1) = 0;
    FUN_1483ce324(puVar1 + 2);
    break;
  case 2:
    puVar1 = (undefined8 *)FUN_14001cc68(0x1a0,0x10);
    *puVar1 = &PTR_FUN_14ae75940;
    *(undefined1 *)(puVar1 + 1) = 0;
    FUN_1483d4924(puVar1 + 2);
    puVar1[0x2f] = 1000;
    puVar1[0x30] = 0x3f1a36e2eb1c432d;
    break;
  case 3:
    puVar1 = (undefined8 *)FUN_14001cc68(0x130,0x10);
    *puVar1 = &PTR_FUN_14ae758d0;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    FUN_1483d2618(puVar1 + 3);
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined2 *)((longlong)puVar1 + 300) = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    *(undefined1 *)(puVar1 + 0x20) = 0;
    puVar1[0x21] = 1000;
    puVar1[0x22] = 0x3f1a36e2eb1c432d;
    break;
  default:
    puVar1 = (undefined8 *)FUN_14001cc68(600,0x10);
    *puVar1 = &PTR_FUN_14ae75750;
    *(undefined1 *)(puVar1 + 1) = 0;
    FUN_1483c209e(puVar1 + 2);
  }
  if (puVar1 != (undefined8 *)0x0) {
    *param_1 = puVar1;
  }
  return param_1;
}



// FUNCTION 14839d4f6 FUN_14839d4f6 body=202 status=ok
// SIG undefined FUN_14839d4f6(void)

undefined8 * FUN_14839d4f6(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_LAB_14ae74ed0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[9] = 0xffffffffffffffff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_146de45bc(param_1 + 8,0,0);
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0xffffffffffffffff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_146de45bc(param_1 + 0x11,0,0);
  *(undefined1 *)(param_1 + 7) = 0;
  memset(param_1 + 0x1a,0,0xac);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x50);
  return param_1;
}



// FUNCTION 14839d5c0 FUN_14839d5c0 body=428 status=ok
// SIG undefined FUN_14839d5c0(void)

void FUN_14839d5c0(longlong *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (**(code **)(*param_1 + 8))
            (param_1,param_3,param_2,param_1 + 7,param_1 + 2,param_1 + 8,param_1 + 0x11);
  uVar3 = *(uint *)(param_1 + 6);
  *(uint *)((longlong)param_1 + 0xc) = (int)param_1[1] - uVar3;
  FUN_14839a04c(param_1 + 0x23);
  FUN_14839a04c(param_1 + 0x29,*(undefined4 *)((longlong)param_1 + 0xc));
  if (0 < *(int *)((longlong)param_1 + 0xc)) {
    lVar6 = 0;
    do {
      uVar4 = *(uint *)(param_1[2] + lVar6 * 4);
      lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
      uVar7 = (ulonglong)(uVar4 & 0x1ff);
      uVar1 = *(undefined8 *)(lVar5 + 8 + uVar7 * 0x18);
      uVar2 = *(undefined8 *)(lVar5 + 0x10 + uVar7 * 0x18);
      *(undefined8 *)(param_1[0x23] + lVar6 * 8) = *(undefined8 *)(lVar5 + uVar7 * 0x18);
      *(undefined8 *)(param_1[0x25] + lVar6 * 8) = uVar1;
      *(undefined8 *)(param_1[0x27] + lVar6 * 8) = uVar2;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((longlong)param_1 + 0xc));
  }
  FUN_14839a04c(param_1 + 0x1d,uVar3);
  if (0 < (int)uVar3) {
    uVar7 = 0;
    do {
      uVar4 = *(uint *)(param_1[2] + ((longlong)*(int *)((longlong)param_1 + 0xc) + uVar7) * 4);
      lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
      uVar8 = (ulonglong)(uVar4 & 0x1ff);
      uVar1 = *(undefined8 *)(lVar6 + 8 + uVar8 * 0x18);
      uVar2 = *(undefined8 *)(lVar6 + 0x10 + uVar8 * 0x18);
      *(undefined8 *)(param_1[0x1d] + uVar7 * 8) = *(undefined8 *)(lVar6 + uVar8 * 0x18);
      *(undefined8 *)(param_1[0x1f] + uVar7 * 8) = uVar1;
      *(undefined8 *)(param_1[0x21] + uVar7 * 8) = uVar2;
      uVar7 = uVar7 + 1;
    } while (uVar3 != uVar7);
  }
  lVar6 = param_1[10];
  param_1[0x1c] = 0;
  if (0 < (int)(uint)lVar6) {
    uVar10 = 0;
    uVar11 = 0;
    uVar7 = 0;
    do {
      dVar9 = (double)FUN_14839d0ac(param_1 + 8,uVar7,uVar7);
      if ((double)CONCAT44(uVar11,uVar10) <= dVar9) {
        dVar9 = (double)CONCAT44(uVar11,uVar10);
      }
      param_1[0x1c] = (longlong)dVar9;
      uVar7 = uVar7 + 1;
      uVar10 = SUB84(dVar9,0);
      uVar11 = (undefined4)((ulonglong)dVar9 >> 0x20);
    } while (((uint)lVar6 & 0x7fffffff) != uVar7);
  }
  return;
}



// FUNCTION 14839d76c FUN_14839d76c body=1179 status=ok
// SIG undefined FUN_14839d76c(void)

void FUN_14839d76c(longlong param_1,undefined4 param_2,int param_3,ulonglong param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_218 [44];
  int local_1ec;
  undefined8 local_1e8;
  int aiStack_1e0 [10];
  longlong *local_1b8;
  undefined1 local_1b0 [8];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined1 local_119;
  undefined8 local_118;
  longlong local_110;
  undefined1 local_f8 [8];
  undefined1 *local_f0;
  ulonglong local_e8;
  undefined8 local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_98;
  longlong local_90;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_168[0] = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = param_2;
  FUN_146de45bc(local_168,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48));
  FUN_14839dc08(local_168);
  local_d0 = *(ulonglong *)(param_1 + 0x48);
  local_d8 = *(undefined8 *)(param_1 + 0x50);
  local_f8[0] = 0;
  local_e8 = local_e8 & 0xffffffffffffff00;
  local_c8 = param_4 & 0x7fffffffffffffff;
  local_1b0[0] = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_f0 = local_168;
  local_c0 = param_1 + 0x40;
  FUN_1483d986e(local_1b0);
  FUN_14834db6e(local_1b0);
  FUN_14839d3b3(&local_1b8,&local_120);
  (**(code **)(*local_1b8 + 0x28))(local_1b8,local_1b0,*(undefined1 *)(param_1 + 0x38));
  FUN_1483af29a(&local_1e8,*(undefined4 *)(param_1 + 0xc));
  cVar1 = (**(code **)(*local_1b8 + 8))(local_1b8);
  *(undefined4 *)(param_1 + 0x178) = 0;
  local_1ec = param_3;
  if (cVar1 == '\0') {
    if (0 < param_3) {
      iVar6 = 0;
      do {
        iVar7 = *(int *)(param_1 + 0x178);
        *(int *)(param_1 + 0x178) = 1 - iVar7;
        lVar3 = (longlong)iVar7 * 0x30 + param_1 + 0x118;
        iVar7 = 0;
        do {
          lVar2 = (ulonglong)(iVar7 != 1) * 0x10 + 0x10;
          if (iVar7 == 0) {
            lVar2 = 0;
          }
          uVar4 = (ulonglong)*(int *)(lVar3 + 8 + lVar2);
          local_f0 = (undefined1 *)0x0;
          local_e8 = 0;
          if (0 < (longlong)uVar4) {
            local_f0 = *(undefined1 **)(lVar3 + lVar2);
            local_e8 = uVar4;
          }
          lVar5 = (longlong)*(int *)(param_1 + 0xf0 + lVar2);
          local_98 = 0;
          local_90 = 0;
          if (0 < lVar5) {
            local_98 = *(undefined8 *)(param_1 + 0xe8 + lVar2);
            local_90 = lVar5;
          }
          local_b8 = *(undefined8 *)(param_1 + 0x90);
          local_c0 = *(longlong *)(param_1 + 0x98);
          local_d0 = local_d0 & 0xffffffffffffff00;
          local_b0 = param_4 & 0x7fffffffffffffff;
          local_118 = 0;
          local_110 = 0;
          if (0 < (longlong)*(int *)((longlong)aiStack_1e0 + lVar2)) {
            local_118 = *(undefined8 *)((longlong)aiStack_1e0 + lVar2 + -8);
            local_110 = (longlong)*(int *)((longlong)aiStack_1e0 + lVar2);
          }
          local_a8 = param_1 + 0x88;
          FUN_1483d9db2(&local_118,local_f8,&local_119);
          iVar7 = iVar7 + 1;
        } while (iVar7 != 3);
        (**(code **)(*local_1b8 + 0x10))
                  (local_1b8,&local_1e8,(longlong)*(int *)(param_1 + 0x178) * 0x30 + param_1 + 0x118
                  );
        iVar6 = iVar6 + 1;
      } while (iVar6 != local_1ec);
    }
  }
  else if (0 < param_3) {
    iVar6 = 0;
    do {
      iVar7 = *(int *)(param_1 + 0x178);
      *(int *)(param_1 + 0x178) = 1 - iVar7;
      lVar3 = (longlong)iVar7 * 0x30 + param_1 + 0x118;
      iVar7 = 0;
      do {
        lVar2 = (ulonglong)(iVar7 != 1) * 0x10 + 0x10;
        if (iVar7 == 0) {
          lVar2 = 0;
        }
        uVar4 = (ulonglong)*(int *)(lVar3 + 8 + lVar2);
        local_f0 = (undefined1 *)0x0;
        local_e8 = 0;
        if (0 < (longlong)uVar4) {
          local_f0 = *(undefined1 **)(lVar3 + lVar2);
          local_e8 = uVar4;
        }
        lVar5 = (longlong)*(int *)(param_1 + 0xf0 + lVar2);
        local_98 = 0;
        local_90 = 0;
        if (0 < lVar5) {
          local_98 = *(undefined8 *)(param_1 + 0xe8 + lVar2);
          local_90 = lVar5;
        }
        local_b8 = *(undefined8 *)(param_1 + 0x90);
        local_c0 = *(longlong *)(param_1 + 0x98);
        local_d0 = local_d0 & 0xffffffffffffff00;
        local_b0 = param_4 & 0x7fffffffffffffff;
        local_118 = 0;
        local_110 = 0;
        if (0 < (longlong)*(int *)((longlong)aiStack_1e0 + lVar2)) {
          local_118 = *(undefined8 *)((longlong)aiStack_1e0 + lVar2 + -8);
          local_110 = (longlong)*(int *)((longlong)aiStack_1e0 + lVar2);
        }
        local_a8 = param_1 + 0x88;
        FUN_1483d9db2(&local_118,local_f8,&local_119);
        iVar7 = iVar7 + 1;
      } while (iVar7 != 3);
      (**(code **)(*local_1b8 + 0x50))
                (local_1b8,lVar3,&local_1e8,
                 (longlong)*(int *)(param_1 + 0x178) * 0x30 + param_1 + 0x118);
      iVar6 = iVar6 + 1;
    } while (iVar6 != local_1ec);
  }
  FUN_148398478(&local_1e8);
  if (local_1b8 != (longlong *)0x0) {
    (**(code **)*local_1b8)(local_1b8,1);
  }
  FUN_146de5508(local_1b0);
  FUN_146de5508(local_168);
  if ((local_70 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14839dc08 FUN_14839dc08 body=429 status=ok
// SIG undefined FUN_14839dc08(void)

void FUN_14839dc08(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_b8 [39];
  undefined1 local_91;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_50 [2];
  ulonglong local_40;
  undefined8 local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_146de554a(param_1 + 0x28,*(undefined8 *)(param_1 + 0x10),0);
  local_68 = *(ulonglong *)(param_1 + 0x10);
  iVar8 = (int)local_68;
  iVar10 = iVar8 + -1;
  iVar7 = 1;
  if (1 < (longlong)local_68) {
    iVar7 = iVar10;
  }
  iVar3 = -iVar8;
  if (-1 < iVar10) {
    iVar3 = iVar8;
  }
  iVar11 = -iVar10;
  if (-iVar10 < 0) {
    iVar11 = iVar10;
  }
  if (0 < (longlong)local_68) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    iVar15 = 0;
    uVar13 = 0;
    do {
      iVar4 = iVar15;
      if (1 < (longlong)local_68 && (longlong)(ulonglong)(iVar11 + 1U) < (longlong)local_68) {
        iVar4 = (int)((longlong)
                      ((ulonglong)(uint)((int)uVar13 >> 0x1f) << 0x20 | uVar13 & 0xffffffff) /
                     (longlong)((iVar3 + iVar8 + -1) / (int)(iVar11 + 1U)));
      }
      *(int *)(lVar1 + uVar13 * 4) = iVar4;
      uVar13 = uVar13 + 1;
      iVar15 = iVar15 + iVar10 / iVar7;
    } while (local_68 != uVar13);
    local_68 = *(ulonglong *)(param_1 + 0x10);
  }
  local_70 = *(undefined8 *)(param_1 + 0x28);
  local_78 = &local_70;
  local_88 = local_38;
  local_38[0] = 0x3ff0000000000000;
  local_90 = local_50;
  local_80 = &local_91;
  local_50[0] = local_70;
  local_40 = local_68;
  FUN_146de3bbc();
  uVar13 = *(ulonglong *)(param_1 + 0x10);
  uVar9 = (uint)(uVar13 + 1);
  iVar8 = 1;
  if (0 < (longlong)uVar13) {
    iVar8 = uVar9 - 1;
  }
  uVar12 = (uint)uVar13;
  uVar5 = ~uVar12;
  if (-1 < (int)uVar12) {
    uVar5 = uVar9;
  }
  uVar9 = -uVar12;
  if ((int)-uVar12 < 0) {
    uVar9 = uVar12;
  }
  uVar9 = uVar9 + 1;
  uVar6 = (longlong)(int)(uVar5 + uVar12) % (longlong)(int)uVar9 & 0xffffffff;
  if (-1 < (longlong)uVar13) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    iVar7 = 0;
    uVar14 = 0;
    do {
      iVar10 = iVar7;
      if (0 < (longlong)uVar13 && (longlong)(ulonglong)uVar9 <= (longlong)uVar13) {
        lVar2 = (longlong)((int)(uVar5 + uVar12) / (int)uVar9);
        uVar6 = (ulonglong)(uint)((int)uVar14 >> 0x1f) << 0x20 | uVar14 & 0xffffffff;
        iVar10 = (int)((longlong)uVar6 / lVar2);
        uVar6 = (longlong)uVar6 % lVar2 & 0xffffffff;
      }
      *(int *)(lVar1 + uVar14 * 4) = iVar10;
      uVar14 = uVar14 + 1;
      iVar7 = iVar7 + (int)((longlong)
                            ((ulonglong)(uint)((int)uVar12 >> 0x1f) << 0x20 | uVar13 & 0xffffffff) /
                           (longlong)iVar8);
    } while (uVar13 + 1 != uVar14);
  }
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x20),uVar6);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839ddb6 FUN_14839ddb6 body=135 status=ok
// SIG undefined FUN_14839ddb6(void)

void FUN_14839ddb6(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (-1 < (int)uVar1) {
    *(undefined4 *)(param_2 + 8) = 0;
    iVar3 = 0;
    uVar2 = uVar1;
    if (*(uint *)(param_2 + 0xc) != uVar1) {
      FUN_1447a8aa0(param_2,uVar1);
      iVar3 = *(int *)(param_2 + 8);
      uVar2 = *(uint *)(param_2 + 0xc);
    }
    *(uint *)(param_2 + 8) = iVar3 + uVar1;
    if (uVar2 - iVar3 < uVar1) {
      FUN_1403e3958(param_2);
    }
    FUN_14839de3e(param_1,param_1 + (longlong)*(int *)(param_1 + 0x178) * 0x30 + 0x118,param_2);
    FUN_14839ded2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14839de3e FUN_14839de3e body=148 status=ok
// SIG undefined FUN_14839de3e(void)

void FUN_14839de3e(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar3 = (int)param_2[1];
  iVar7 = -1;
  if ((int)param_2[5] == iVar3 && (int)param_2[3] == iVar3) {
    iVar7 = iVar3;
  }
  if (((iVar7 == (int)param_2[5] && ((int)param_2[3] == iVar7 && iVar3 == iVar7)) &&
      (*(int *)(param_1 + 0x18) == (int)param_3[1])) && (0 < *(int *)(param_1 + 0xc))) {
    lVar5 = 0;
    do {
      lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + lVar5 * 4);
      uVar1 = *(undefined8 *)(param_2[4] + lVar5 * 8);
      uVar2 = *(undefined8 *)(param_2[2] + lVar5 * 8);
      lVar4 = *param_3;
      *(undefined8 *)(lVar4 + lVar6 * 0x18) = *(undefined8 *)(*param_2 + lVar5 * 8);
      *(undefined8 *)(lVar4 + 8 + lVar6 * 0x18) = uVar2;
      *(undefined8 *)(lVar4 + 0x10 + lVar6 * 0x18) = uVar1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xc));
  }
  return;
}



// FUNCTION 14839ded2 FUN_14839ded2 body=114 status=ok
// SIG undefined FUN_14839ded2(void)

void FUN_14839ded2(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (((int)param_2[1] == *(int *)(param_1 + 0x18)) &&
     (uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc),
     uVar4 != 0 && *(int *)(param_1 + 0xc) <= *(int *)(param_1 + 8))) {
    uVar5 = 0;
    do {
      lVar6 = (longlong)
              *(int *)(*(longlong *)(param_1 + 0x10) +
                      (longlong)(*(int *)(param_1 + 0xc) + (int)uVar5) * 4);
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x108) + uVar5 * 8);
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + uVar5 * 8);
      lVar3 = *param_2;
      *(undefined8 *)(lVar3 + lVar6 * 0x18) =
           *(undefined8 *)(*(longlong *)(param_1 + 0xe8) + uVar5 * 8);
      *(undefined8 *)(lVar3 + 8 + lVar6 * 0x18) = uVar2;
      *(undefined8 *)(lVar3 + 0x10 + lVar6 * 0x18) = uVar1;
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
  }
  return;
}



// FUNCTION 14839df44 FUN_14839df44 body=138 status=ok
// SIG undefined FUN_14839df44(void)

undefined8 * FUN_14839df44(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_LAB_14ae74ee0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x101;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = param_2;
  FUN_14836b25a(param_1 + 0xc);
  FUN_14836b2a0(param_1 + 0xc,*(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24),
                *(undefined4 *)(param_2 + 0x50),param_2 + 0x20);
  return param_1;
}



// FUNCTION 14839dfce FUN_14839dfce body=153 status=ok
// SIG undefined FUN_14839dfce(void)

void FUN_14839dfce(longlong param_1,uint param_2,undefined8 param_3,undefined4 *param_4,
                  undefined1 param_5)

{
  int iVar1;
  undefined1 auStack_78 [32];
  uint local_58;
  int local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  undefined8 local_38;
  int local_2c;
  int *local_28;
  uint *local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x78))) &&
     (iVar1 = *(int *)(*(longlong *)(param_1 + 0x70) + (ulonglong)param_2 * 4), -1 < iVar1)) {
    local_28 = &local_2c;
    local_20 = &local_58;
    local_50 = *param_4;
    uStack_4c = param_4[1];
    uStack_48 = param_4[2];
    uStack_44 = param_4[3];
    local_40 = param_5;
    local_58 = param_2;
    local_54 = iVar1;
    local_38 = param_3;
    local_2c = iVar1;
    FUN_1483d9f88(param_1 + 8,local_14);
    *(undefined2 *)(param_1 + 0x58) = 0x101;
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839e1d2 FUN_14839e1d2 body=29 status=ok
// SIG undefined FUN_14839e1d2(void)

void FUN_14839e1d2(longlong param_1)

{
  FUN_1483da448(param_1 + 8);
  *(undefined2 *)(param_1 + 0x58) = 0x101;
  return;
}



// FUNCTION 14839e1f0 FUN_14839e1f0 body=895 status=ok
// SIG undefined FUN_14839e1f0(void)

void FUN_14839e1f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_178 [32];
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  int *piStack_120;
  int *local_118;
  undefined8 local_108;
  longlong lStack_100;
  undefined8 local_f8;
  undefined3 uStack_f0;
  undefined5 local_ed;
  undefined3 uStack_e8;
  undefined8 uStack_e5;
  undefined1 *local_dc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  iVar1 = *(int *)(param_1 + 0x68);
  local_108 = *(undefined8 *)(param_1 + 0x88);
  lStack_100 = 0;
  uStack_e8 = 0;
  uStack_e5 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_ed = 0;
  local_dc = &DAT_100000002;
  lVar8 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_158 = param_1;
  local_150 = param_2;
  FUN_146c68b4c(&local_108);
  if ((longlong)(int)local_f8 != 0) {
    lVar6 = 0;
    do {
      lVar8 = (longlong)(int)lVar8 + (longlong)*(int *)(lStack_100 + 0x10 + lVar6) * 4;
      lVar6 = lVar6 + 0x40;
    } while ((longlong)(int)local_f8 * 0x40 != lVar6);
  }
  local_128 = 0;
  piStack_120 = (int *)0x0;
  local_118 = (int *)0x0;
  FUN_148333c92(&local_128,lVar8);
  if ((longlong)(int)local_f8 != 0) {
    local_148 = (longlong)(int)local_f8 * 0x40 + lStack_100;
    lVar8 = local_158;
    lVar6 = lStack_100;
    do {
      lVar10 = (longlong)*(int *)(lVar6 + 0x10);
      if (0 < lVar10) {
        lVar11 = 1;
        do {
          lVar5 = lVar11;
          if (lVar11 == lVar10) {
            lVar5 = 0;
          }
          iVar2 = *(int *)(*(longlong *)(lVar8 + 0x70) +
                          (longlong)*(int *)(*(longlong *)(lVar6 + 8) + lVar5 * 4) * 4);
          iVar3 = *(int *)(*(longlong *)(lVar8 + 0x70) +
                          (longlong)*(int *)(*(longlong *)(lVar6 + 8) + -4 + lVar11 * 4) * 4);
          iVar7 = iVar3 + iVar1;
          local_138 = (int *)CONCAT44(iVar7,iVar2);
          uStack_130 = 0x3ff0000000000000;
          if (piStack_120 == local_118) {
            FUN_14834da9e(&local_128,piStack_120,&local_138);
            lVar8 = local_158;
          }
          else {
            *piStack_120 = iVar2;
            piStack_120[1] = iVar7;
            piStack_120[2] = 0;
            piStack_120[3] = 0x3ff00000;
            piStack_120 = piStack_120 + 4;
          }
          iVar9 = iVar2 + iVar1;
          local_138 = (int *)CONCAT44(iVar9,iVar3);
          uStack_130 = 0xbff0000000000000;
          if (piStack_120 == local_118) {
            FUN_14834da9e(&local_128,piStack_120,&local_138);
            lVar8 = local_158;
          }
          else {
            *piStack_120 = iVar3;
            piStack_120[1] = iVar9;
            piStack_120[2] = 0;
            piStack_120[3] = -0x40100000;
            piStack_120 = piStack_120 + 4;
          }
          local_138 = (int *)CONCAT44(iVar2,iVar7);
          uStack_130 = 0x3ff0000000000000;
          if (piStack_120 == local_118) {
            FUN_14834da9e(&local_128,piStack_120,&local_138);
            lVar8 = local_158;
          }
          else {
            *piStack_120 = iVar7;
            piStack_120[1] = iVar2;
            piStack_120[2] = 0;
            piStack_120[3] = 0x3ff00000;
            piStack_120 = piStack_120 + 4;
          }
          local_138 = (int *)CONCAT44(iVar3,iVar9);
          uStack_130 = 0xbff0000000000000;
          if (piStack_120 == local_118) {
            FUN_14834da9e(&local_128,piStack_120,&local_138);
            lVar8 = local_158;
          }
          else {
            *piStack_120 = iVar9;
            piStack_120[1] = iVar3;
            piStack_120[2] = 0;
            piStack_120[3] = -0x40100000;
            piStack_120 = piStack_120 + 4;
          }
          bVar12 = lVar11 != lVar10;
          lVar11 = lVar11 + 1;
        } while (bVar12);
      }
      lVar6 = lVar6 + 0x40;
    } while (lVar6 != local_148);
  }
  uVar4 = local_150;
  FUN_146de45bc(local_150,(longlong)iVar1 * 2,(longlong)iVar1 * 2);
  local_138 = piStack_120;
  local_140 = local_128;
  FUN_14836a965(&local_140,&local_138,uVar4);
  FUN_14834dc94(&local_128);
  FUN_1482f1656(&local_108);
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14839e570 FUN_14839e570 body=1386 status=ok
// SIG undefined FUN_14839e570(void)

void FUN_14839e570(longlong param_1,undefined8 param_2,double *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_128 [32];
  longlong local_108;
  uint local_fc;
  double *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8 [3];
  undefined8 *puStack_b0;
  undefined8 *local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar1 = *(int *)(param_1 + 0x68);
  local_c8[2] = 0;
  puStack_b0 = (undefined8 *)0x0;
  local_a8 = (undefined8 *)0x0;
  local_f0 = param_2;
  FUN_148333c92(local_c8 + 2,(longlong)*(int *)(*(longlong *)(param_1 + 0x88) + 0x170) * 0xc);
  local_c8[0] = 0;
  local_c8[1] = 0;
  FUN_1400bd09c(local_c8,*(int *)(*(longlong *)(param_1 + 0x88) + 0x140) * 0x200 +
                         *(int *)(*(longlong *)(param_1 + 0x88) + 0x144),1);
  *param_3 = -1.0;
  lVar14 = *(longlong *)(param_1 + 0x88);
  uVar10 = *(int *)(lVar14 + 0x140) * 0x200 + *(int *)(lVar14 + 0x144);
  uVar8 = 0;
  if ((uVar10 != 0) &&
     (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar14 + 0x148) - 1U))) {
    uVar9 = 1;
    uVar7 = 1;
    if (1 < (int)uVar10) {
      uVar9 = uVar10;
    }
    do {
      uVar8 = uVar9;
      if (uVar9 == uVar7) break;
      uVar6 = uVar7 >> 9;
      uVar12 = uVar7 & 0x1ff;
      uVar8 = uVar7;
      uVar7 = uVar7 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar14 + 0x148))[uVar6] +
                                         (ulonglong)uVar12 * 2) - 1U));
  }
  local_108 = param_1;
  local_f8 = param_3;
  if (uVar8 != uVar10) {
    do {
      dVar16 = (double)FUN_146c14650(*(undefined8 *)(local_108 + 0x88),uVar8);
      uVar15 = -(ulonglong)(dVar16 <= *local_f8);
      *local_f8 = (double)(uVar15 & (ulonglong)*local_f8 | ~uVar15 & (ulonglong)dVar16);
      *(double *)(local_c8[0] + (longlong)(int)uVar8 * 8) = dVar16;
      uVar9 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar10) {
        uVar9 = uVar10;
      }
      uVar7 = uVar8;
      do {
        uVar8 = uVar9;
        if (uVar9 - 1 == uVar7) break;
        uVar8 = uVar7 + 1;
        uVar7 = uVar8;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar14 + 0x148) +
                                             (ulonglong)(uVar8 >> 9) * 8) +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
    } while (uVar8 != uVar10);
    lVar14 = *(longlong *)(local_108 + 0x88);
    uVar10 = *(int *)(lVar14 + 0x140) * 0x200 + *(int *)(lVar14 + 0x144);
  }
  uVar8 = 0;
  if ((uVar10 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar14 + 0x148) - 1U))) {
    uVar9 = 1;
    uVar7 = 1;
    if (1 < (int)uVar10) {
      uVar9 = uVar10;
    }
    do {
      uVar8 = uVar9;
      if (uVar9 == uVar7) break;
      uVar6 = uVar7 >> 9;
      uVar12 = uVar7 & 0x1ff;
      uVar8 = uVar7;
      uVar7 = uVar7 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar14 + 0x148))[uVar6] +
                                         (ulonglong)uVar12 * 2) - 1U));
  }
  lVar13 = local_108;
  if (uVar8 != uVar10) {
    do {
      local_fc = uVar10;
      lVar11 = *(longlong *)
                (*(longlong *)(*(longlong *)(lVar13 + 0x88) + 0x130) + (ulonglong)(uVar8 >> 9) * 8);
      local_d0 = *(undefined4 *)(lVar11 + 8 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
      local_d8 = *(undefined8 *)(lVar11 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
      dVar16 = *(double *)(local_c8[0] + (longlong)(int)uVar8 * 8);
      dVar17 = 9.99999993922529e-09;
      if (9.99999993922529e-09 <= dVar16) {
        dVar17 = dVar16;
      }
      dVar16 = 1.0 / (dVar17 / *local_f8);
      dVar17 = -dVar16;
      lVar11 = 1;
      do {
        lVar5 = lVar11;
        if (lVar11 == 3) {
          lVar5 = 0;
        }
        iVar2 = *(int *)(*(longlong *)(lVar13 + 0x70) +
                        (longlong)*(int *)((longlong)&local_d8 + lVar5 * 4) * 4);
        iVar3 = *(int *)(*(longlong *)(lVar13 + 0x70) +
                        (longlong)*(int *)((longlong)&uStack_e0 + lVar11 * 4 + 4) * 4);
        local_e8 = (undefined8 *)CONCAT44(iVar3 + iVar1,iVar2);
        if (puStack_b0 == local_a8) {
          uStack_e0 = dVar16;
          FUN_14834da9e(local_c8 + 2,puStack_b0,&local_e8);
          lVar13 = local_108;
        }
        else {
          *puStack_b0 = local_e8;
          puStack_b0[1] = dVar16;
          puStack_b0 = puStack_b0 + 2;
        }
        local_e8 = (undefined8 *)CONCAT44(iVar3,iVar2 + iVar1);
        if (puStack_b0 == local_a8) {
          uStack_e0 = dVar17;
          FUN_14834da9e(local_c8 + 2,puStack_b0,&local_e8);
          lVar13 = local_108;
        }
        else {
          *puStack_b0 = local_e8;
          puStack_b0[1] = dVar17;
          puStack_b0 = puStack_b0 + 2;
        }
        local_e8 = (undefined8 *)CONCAT44(iVar2,iVar3 + iVar1);
        if (puStack_b0 == local_a8) {
          uStack_e0 = dVar16;
          FUN_14834da9e(local_c8 + 2,puStack_b0,&local_e8);
          lVar13 = local_108;
        }
        else {
          *puStack_b0 = local_e8;
          puStack_b0[1] = dVar16;
          puStack_b0 = puStack_b0 + 2;
        }
        local_e8 = (undefined8 *)CONCAT44(iVar2 + iVar1,iVar3);
        if (puStack_b0 == local_a8) {
          uStack_e0 = dVar17;
          FUN_14834da9e(local_c8 + 2,puStack_b0,&local_e8);
          lVar13 = local_108;
        }
        else {
          *puStack_b0 = local_e8;
          puStack_b0[1] = dVar17;
          puStack_b0 = puStack_b0 + 2;
          uStack_e0 = dVar17;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 != 4);
      uVar10 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)local_fc) {
        uVar10 = local_fc;
      }
      do {
        uVar9 = uVar10;
        if (uVar10 - 1 == uVar8) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar14 + 0x148) +
                                             (ulonglong)(uVar8 >> 9) * 8) +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
      uVar8 = uVar9;
      uVar10 = local_fc;
    } while (uVar8 != local_fc);
  }
  uVar4 = local_f0;
  FUN_146de45bc(local_f0,(longlong)iVar1 * 2,(longlong)iVar1 * 2);
  local_e8 = puStack_b0;
  local_d8 = local_c8[2];
  FUN_14836a965(&local_d8,&local_e8,uVar4);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14834dc94(local_c8 + 2);
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14839eadc FUN_14839eadc body=658 status=ok
// SIG undefined FUN_14839eadc(void)

void FUN_14839eadc(longlong param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  ulonglong local_200;
  ulonglong local_1f8 [9];
  undefined1 local_1b0 [8];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  ulonglong local_168;
  undefined1 local_160;
  undefined8 local_150;
  undefined8 local_148;
  ulonglong local_140;
  undefined1 *local_138;
  ulonglong *local_128;
  undefined1 local_118 [128];
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_14839ed70(local_118,*(undefined4 *)(param_1 + 0x68));
  local_208 = 0;
  FUN_14833454f(*(undefined8 *)(param_1 + 0x88),param_1 + 0x60,local_118,param_3 + 1);
  local_1b0[0] = 0;
  local_1a8 = 0xffffffffffffffff;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  FUN_146de45bc(local_1b0,0,0);
  local_168 = local_88;
  local_1f8[0] = local_90;
  FUN_14836a965(local_1f8);
  FUN_14834db6e(local_98);
  uVar1 = *(undefined8 *)(local_98 + 0x18);
  *(undefined8 *)(local_98 + 0x18) = uStack_198;
  uVar2 = *(undefined8 *)(local_98 + 0x10);
  *(undefined8 *)(local_98 + 0x10) = local_1a0;
  uVar3 = *(undefined8 *)(local_98 + 8);
  *(undefined8 *)(local_98 + 8) = local_1a8;
  uVar4 = *(undefined8 *)(local_98 + 0x20);
  *(undefined8 *)(local_98 + 0x20) = local_190;
  uVar5 = *(undefined8 *)(local_98 + 0x28);
  *(undefined8 *)(local_98 + 0x28) = uStack_188;
  uVar6 = *(undefined8 *)(local_98 + 0x30);
  *(undefined8 *)(local_98 + 0x30) = local_180;
  uVar7 = *(undefined8 *)(local_98 + 0x38);
  *(undefined8 *)(local_98 + 0x38) = uStack_178;
  uVar8 = *(undefined8 *)(local_98 + 0x40);
  *(undefined8 *)(local_98 + 0x40) = local_170;
  local_1f8[0] = local_1f8[0] & 0xffffffffffffff00;
  local_1f8[1] = 0xffffffffffffffff;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  local_1f8[4] = 0;
  local_1f8[5] = 0;
  local_1f8[6] = 0;
  local_1f8[7] = 0;
  local_1f8[8] = 0;
  local_1a8 = uVar3;
  local_1a0 = uVar2;
  uStack_198 = uVar1;
  local_190 = uVar4;
  uStack_188 = uVar5;
  local_180 = uVar6;
  uStack_178 = uVar7;
  local_170 = uVar8;
  FUN_146de45bc(local_1f8,0);
  if (param_3 == 0) {
    FUN_14839e1f0(param_1,local_1f8);
    local_140 = 0xbff0000000000000;
  }
  else {
    FUN_14839e570(param_1,local_1f8);
    local_140 = local_200 ^ 0x8000000000000000;
  }
  local_160 = 0;
  local_168 = local_168 & 0xffffffffffffff00;
  local_150 = local_1a0;
  local_148 = local_1a8;
  local_138 = local_1b0;
  local_128 = local_1f8;
  FUN_14839efe4(param_2);
  FUN_146de5508(local_1f8);
  FUN_146de5508(local_1b0);
  FUN_14839f016(local_118);
  if ((local_60 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839ed70 FUN_14839ed70 body=627 status=ok
// SIG undefined FUN_14839ed70(void)

longlong * FUN_14839ed70(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(int *)(param_1 + 0x14) = param_2;
  puVar5 = (undefined1 *)FUN_14001cc68(0x48,0x10);
  *puVar5 = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined8 *)(puVar5 + 0x20) = 0;
  *(undefined8 *)(puVar5 + 0x28) = 0;
  *(undefined8 *)(puVar5 + 0x30) = 0;
  *(undefined8 *)(puVar5 + 0x38) = 0;
  *(undefined8 *)(puVar5 + 0x40) = 0;
  FUN_146de45bc(puVar5,(longlong)(param_2 * 2),(longlong)(param_2 * 2));
  lVar1 = param_1[0x10];
  param_1[0x10] = (longlong)puVar5;
  if (lVar1 != 0) {
    FUN_146de5508(lVar1);
    FUN_1400020a8(lVar1);
  }
  local_b8 = *param_1;
  uStack_70 = param_1[1];
  local_a8 = (longlong *)param_1[2];
  uStack_60 = param_1[3];
  local_58 = param_1[4];
  lStack_50 = param_1[5];
  local_48 = param_1[6];
  uStack_40 = param_1[7];
  lVar3 = local_48;
  lVar4 = uStack_40;
  local_68 = local_a8;
  lVar2 = uStack_60;
  local_78 = local_b8;
  lVar1 = uStack_70;
  param_1[6] = CONCAT44(uStack_84,local_88);
  param_1[7] = CONCAT44(uStack_7c,uStack_80);
  param_1[4] = (longlong)&PTR_LAB_14ae75230;
  param_1[5] = (longlong)param_1;
  param_1[2] = 0;
  param_1[3] = CONCAT44(uStack_9c,uStack_a0);
  *param_1 = (longlong)&LAB_1483af6a4;
  param_1[1] = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = local_58;
  lStack_90 = lStack_50;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  if (local_b8 != 0) {
    plVar6 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar6 = &local_98;
    }
    uStack_70 = lVar1;
    uStack_60 = lVar2;
    local_48 = lVar3;
    uStack_40 = lVar4;
    (**(code **)(*plVar6 + 0x10))();
  }
  local_b8 = param_1[8];
  uStack_70 = param_1[9];
  local_a8 = (longlong *)param_1[10];
  uStack_60 = param_1[0xb];
  local_58 = param_1[0xc];
  lStack_50 = param_1[0xd];
  local_48 = param_1[0xe];
  uStack_40 = param_1[0xf];
  lVar3 = local_48;
  lVar4 = uStack_40;
  local_68 = local_a8;
  lVar2 = uStack_60;
  local_78 = local_b8;
  lVar1 = uStack_70;
  param_1[0xe] = CONCAT44(uStack_84,local_88);
  param_1[0xf] = CONCAT44(uStack_7c,uStack_80);
  param_1[0xc] = (longlong)&PTR_LAB_14ae75250;
  param_1[0xd] = (longlong)param_1;
  param_1[10] = 0;
  param_1[0xb] = CONCAT44(uStack_9c,uStack_a0);
  param_1[8] = (longlong)&LAB_1483af6ec;
  param_1[9] = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = local_58;
  lStack_90 = lStack_50;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_70 = lVar1;
  uStack_60 = lVar2;
  local_48 = lVar3;
  uStack_40 = lVar4;
  if (local_b8 != 0) {
    plVar6 = &local_98;
    if (local_a8 != (longlong *)0x0) {
      plVar6 = local_a8;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839efe4 FUN_14839efe4 body=49 status=ok
// SIG undefined FUN_14839efe4(void)

undefined8 FUN_14839efe4(undefined8 param_1,char *param_2)

{
  if (*param_2 == '\x01') {
    FUN_1483da5cc(param_1,param_2);
  }
  FUN_1483da601(param_1,param_2);
  return param_1;
}



// FUNCTION 14839f016 FUN_14839f016 body=124 status=ok
// SIG undefined FUN_14839f016(void)

void FUN_14839f016(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_14834dc94(param_1 + 0x11);
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    FUN_146de5508(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (param_1[8] != 0) {
    plVar2 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*param_1 != 0) {
    plVar2 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014839f074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    return;
  }
  return;
}



// FUNCTION 14839f092 FUN_14839f092 body=478 status=ok
// SIG undefined FUN_14839f092(void)

void FUN_14839f092(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = (longlong)*(int *)(param_1 + 0x68);
  iVar7 = 0;
  FUN_14839eadc(param_1,param_2,0);
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_78 = 0x100000000;
  local_68 = 0xffffffff;
  local_60._0_4_ = 0;
  local_70 = lVar2;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_78);
    iVar7 = *(int *)(param_1 + 0x30);
  }
  local_88 = local_68;
  lVar6 = local_88;
  local_80 = (undefined4)local_60;
  local_7c = local_60._4_4_;
  local_98 = local_78;
  local_90 = local_70;
  local_88._4_4_ = (int)((ulonglong)local_68 >> 0x20);
  iVar3 = local_88._4_4_;
  local_b0 = lVar5;
  local_a0 = plVar1;
  if ((local_88._4_4_ != iVar7) || (local_88 = lVar6, local_70 != lVar2)) {
    do {
      local_88 = lVar6;
      lVar6 = (longlong)*(int *)(*local_a0 + 0xc + (longlong)iVar3 * 0x38);
      local_a8 = 0;
      local_78 = local_78 & 0xffffffffffffff00;
      local_60 = 0;
      local_50 = *(undefined8 *)(param_2 + 8);
      local_70 = param_2;
      local_68 = lVar6;
      FUN_14839f272(&local_78,&local_a8);
      local_a8 = 0;
      lVar5 = lVar6 + local_b0;
      local_78 = local_78 & 0xffffffffffffff00;
      local_60._0_4_ = 0;
      local_60._4_4_ = 0;
      local_50 = *(undefined8 *)(param_2 + 8);
      local_70 = param_2;
      local_68 = lVar5;
      FUN_14839f272(&local_78,&local_a8);
      puVar4 = (undefined8 *)FUN_14839f31c(param_2,lVar6,lVar6);
      *puVar4 = 0x3ff0000000000000;
      puVar4 = (undefined8 *)FUN_14839f31c(param_2,lVar5,lVar5);
      *puVar4 = 0x3ff0000000000000;
      local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
      FUN_1449c0562(&local_98);
      iVar3 = local_88._4_4_;
      lVar6 = local_88;
    } while (local_a0 != plVar1 || (local_90 != lVar2 || local_88._4_4_ != iVar7));
  }
  FUN_14834db6e(param_2);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839f272 FUN_14839f272 body=169 status=ok
// SIG undefined FUN_14839f272(void)

longlong FUN_14839f272(longlong param_1,double *param_2)

{
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  longlong local_78;
  longlong local_68;
  longlong local_60;
  longlong local_48;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = *(undefined8 *)(param_1 + 8);
  local_30 = 0;
  local_28 = param_1;
  FUN_1483dab3a(local_80);
  if (local_78 < local_68) {
    do {
      *(double *)(local_60 + local_48 * 8) = *param_2 * *(double *)(local_60 + local_48 * 8);
      FUN_1483dabee(local_80);
    } while (local_78 < local_68);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839f31c FUN_14839f31c body=122 status=ok
// SIG undefined FUN_14839f31c(void)

longlong FUN_14839f31c(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + param_3 * 4);
  lVar2 = (longlong)iVar1;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 4 + param_3 * 4);
  }
  else {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + param_3 * 4) + iVar1;
  }
  if (iVar1 < iVar4) {
    lVar5 = (longlong)iVar4 + -1;
    if (lVar2 < lVar5) {
      do {
        lVar3 = lVar2 + lVar5 >> 1;
        if (*(int *)(*(longlong *)(param_1 + 0x30) + lVar3 * 4) < param_2) {
          lVar2 = lVar3 + 1;
          lVar3 = lVar5;
        }
        lVar5 = lVar3;
      } while (lVar2 < lVar3);
    }
    if ((lVar2 < iVar4) && (*(int *)(*(longlong *)(param_1 + 0x30) + lVar2 * 4) == param_2)) {
      return lVar2 * 8 + *(longlong *)(param_1 + 0x28);
    }
  }
  lVar2 = FUN_1483d1888();
  return lVar2;
}



// FUNCTION 14839f396 FUN_14839f396 body=553 status=ok
// SIG undefined FUN_14839f396(void)

undefined4 FUN_14839f396(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar3 = *(int *)(param_1 + 0x68);
  local_94 = param_3;
  FUN_14839d3b3(&local_a0);
  uVar9 = 0;
  (**(code **)(*local_a0 + 0x28))(local_a0,param_2,0);
  cVar7 = (**(code **)(*local_a0 + 0x38))(local_a0);
  if (cVar7 != '\0') {
    lVar5 = (longlong)iVar3 * 2;
    local_b0 = 0;
    if (iVar3 != 0) {
      if (iVar3 < 1) {
        local_b0 = 0;
      }
      else {
        local_b0 = FUN_146de3b53(lVar5);
      }
    }
    local_58 = 0;
    local_a8 = lVar5;
    local_68 = lVar5;
    FUN_146de41cc(&local_b0,&local_70,&local_90);
    plVar1 = (longlong *)(param_1 + 8);
    lVar2 = param_1 + 0x18;
    local_90 = 0x100000000;
    local_80 = 0xffffffff;
    uStack_78 = 0;
    iVar12 = 0;
    uStack_88 = lVar2;
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_1449c0562(&local_90);
      iVar12 = *(int *)(param_1 + 0x30);
    }
    uStack_50 = CONCAT44(uStack_74,uStack_78);
    local_58 = local_80;
    uVar6 = local_58;
    local_68 = local_90;
    uStack_60 = (undefined4)uStack_88;
    uStack_5c = uStack_88._4_4_;
    local_58._4_4_ = (int)((ulonglong)local_80 >> 0x20);
    iVar8 = local_58._4_4_;
    local_70 = plVar1;
    if ((local_58._4_4_ != iVar12) || (local_58 = uVar6, uStack_88 != lVar2)) {
      do {
        local_58 = uVar6;
        lVar4 = *local_70;
        lVar10 = (longlong)iVar8 * 0x38;
        lVar11 = (longlong)*(int *)(lVar4 + 0xc + lVar10);
        *(undefined8 *)(local_b0 + lVar11 * 8) = *(undefined8 *)(lVar4 + 0x10 + lVar10);
        *(undefined8 *)(local_b0 + (lVar11 + iVar3) * 8) = *(undefined8 *)(lVar4 + 0x18 + lVar10);
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar8 = local_58._4_4_;
        uVar6 = local_58;
      } while (local_70 != plVar1 ||
               (CONCAT44(uStack_5c,uStack_60) != lVar2 || local_58._4_4_ != iVar12));
    }
    FUN_146de3c6e(param_4,lVar5,1);
    (**(code **)(*local_a0 + 0x20))(local_a0,&local_b0,param_4);
    uVar9 = (**(code **)(*local_a0 + 0x38))(local_a0);
    FUN_1400020a8(local_b0);
  }
  if (local_a0 != (longlong *)0x0) {
    (**(code **)*local_a0)(local_a0,1);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14839f5c0 FUN_14839f5c0 body=375 status=ok
// SIG undefined FUN_14839f5c0(void)

undefined4 FUN_14839f5c0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78[0] = 0;
  local_70 = 0xffffffffffffffff;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_146de45bc(local_78,0,0);
  FUN_14839f092(param_1,local_78);
  local_88[0] = 0;
  local_88[1] = 0;
  cVar8 = FUN_14839f396(param_1,local_78,0);
  uVar9 = (undefined4)CONCAT71((int7)((ulonglong)local_78 >> 8),1);
  if (cVar8 == '\0') {
    uVar9 = FUN_14839f396(param_1,local_78,1,local_88);
  }
  FUN_1407feed2(param_3,*(int *)(*(longlong *)(param_1 + 0x88) + 0x20) * 0x200 +
                        *(int *)(*(longlong *)(param_1 + 0x88) + 0x24),1);
  if ((char)uVar9 == '\0') {
    if (0 < *(int *)(param_1 + 0x68)) {
      lVar10 = 0;
      do {
        uVar7 = DAT_14c8463f8._4_4_;
        uVar6 = (undefined4)DAT_14c8463f8;
        uVar5 = DAT_14c8463f0._4_4_;
        puVar1 = (undefined4 *)
                 (*param_3 + (longlong)*(int *)(*(longlong *)(param_1 + 0x60) + lVar10 * 4) * 0x10);
        *puVar1 = (undefined4)DAT_14c8463f0;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(param_1 + 0x68));
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x68);
    if (0 < (longlong)iVar3) {
      lVar10 = 0;
      do {
        uVar2 = *(undefined8 *)((longlong)iVar3 * 8 + local_88[0] + lVar10 * 8);
        lVar4 = *param_3;
        lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x60) + lVar10 * 4) * 0x10;
        *(undefined8 *)(lVar4 + lVar11) = *(undefined8 *)(local_88[0] + lVar10 * 8);
        *(undefined8 *)(lVar4 + 8 + lVar11) = uVar2;
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(param_1 + 0x68));
    }
  }
  FUN_1400020a8(local_88[0]);
  FUN_146de5508(local_78);
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14839f738 FUN_14839f738 body=1445 status=ok
// SIG undefined FUN_14839f738(void)

void FUN_14839f738(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_158 [40];
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  uint *puStack_100;
  uint *local_f8;
  uint *local_f0;
  undefined8 local_e8;
  double dStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint *puStack_a0;
  uint *local_98;
  undefined8 local_90;
  double dStack_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar3 = *(int *)(param_1 + 0x68);
  local_110 = param_4;
  FUN_14839eadc(param_1,param_2,*(undefined1 *)(param_1 + 0x90));
  FUN_14834db6e(param_2);
  puVar1 = (uint *)(param_1 + 8);
  lVar7 = (longlong)*(int *)(param_1 + 0x10) - (longlong)*(int *)(param_1 + 0x3c);
  local_128 = lVar7 * 2;
  local_a8 = 0;
  puStack_a0 = (uint *)0x0;
  local_98 = (uint *)0x0;
  FUN_148333c92();
  dVar2 = (double)(param_1 + 0x18);
  local_90 = 0x100000000;
  local_80 = 0xffffffff;
  iStack_7c = 0;
  local_78 = 0;
  iVar8 = 0;
  dStack_88 = dVar2;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_90);
    iVar8 = *(int *)(param_1 + 0x30);
  }
  local_d8._0_4_ = local_80;
  local_d8._4_4_ = iStack_7c;
  uStack_d0 = CONCAT44(local_74,local_78);
  local_e8 = local_90;
  dStack_e0 = dStack_88;
  local_130 = param_1;
  local_120 = lVar7;
  local_118 = param_3;
  local_f0 = puVar1;
  if ((iStack_7c != iVar8) || (dStack_88 != dVar2)) {
    do {
      uVar9 = *(uint *)(*(longlong *)local_f0 + 0xc + (longlong)local_d8._4_4_ * 0x38);
      local_90 = CONCAT44(uVar9,uVar9);
      dStack_88 = 1.0;
      if (puStack_a0 == local_98) {
        FUN_14834da9e(&local_a8,puStack_a0,&local_90);
      }
      else {
        *puStack_a0 = uVar9;
        puStack_a0[1] = uVar9;
        puStack_a0[2] = 0;
        puStack_a0[3] = 0x3ff00000;
        puStack_a0 = puStack_a0 + 4;
      }
      uVar9 = uVar9 + iVar3;
      local_90 = CONCAT44(uVar9,uVar9);
      dStack_88 = 1.0;
      if (puStack_a0 == local_98) {
        FUN_14834da9e(&local_a8,puStack_a0,&local_90);
      }
      else {
        *puStack_a0 = uVar9;
        puStack_a0[1] = uVar9;
        puStack_a0[2] = 0;
        puStack_a0[3] = 0x3ff00000;
        puStack_a0 = puStack_a0 + 4;
      }
      local_d8._0_4_ = (uint)local_d8 & ~local_e8._4_4_;
      FUN_1449c0562(&local_e8);
    } while (local_f0 != puVar1 || (dStack_e0 != dVar2 || local_d8._4_4_ != iVar8));
  }
  lVar7 = (longlong)iVar3 * 2;
  local_f0 = (uint *)((ulonglong)local_f0 & 0xffffffffffffff00);
  local_e8 = 0;
  dStack_e0 = 0.0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_146de45bc(&local_f0,lVar7,lVar7);
  uVar6 = local_118;
  FUN_146de5a4e(local_118,&local_f0);
  FUN_146de5508(&local_f0);
  local_f0 = puStack_a0;
  local_90 = local_a8;
  FUN_14836a965(&local_90,&local_f0,uVar6);
  FUN_14834db6e(uVar6);
  local_108 = 0;
  puStack_100 = (uint *)0x0;
  local_f8 = (uint *)0x0;
  FUN_148333c92(&local_108,local_128);
  dVar4 = (double)(int)local_120;
  if (dVar4 < 0.0) {
    dVar4 = sqrt(dVar4);
  }
  else {
    dVar4 = SQRT(dVar4);
  }
  lVar5 = local_130;
  local_90 = 0x100000000;
  local_80 = 0xffffffff;
  iStack_7c = 0;
  local_78 = 0;
  iVar8 = 0;
  dStack_88 = dVar2;
  if (*(int *)(local_130 + 0x30) != 0) {
    FUN_1449c0562(&local_90);
    iVar8 = *(int *)(lVar5 + 0x30);
  }
  dVar4 = 1.0 / dVar4;
  local_d8._0_4_ = local_80;
  local_d8._4_4_ = iStack_7c;
  uStack_d0 = CONCAT44(local_74,local_78);
  local_e8 = local_90;
  dStack_e0 = dStack_88;
  local_f0 = puVar1;
  if ((iStack_7c != iVar8) || (dStack_88 != dVar2)) {
    do {
      uVar9 = *(uint *)(*(longlong *)local_f0 + 0xc + (longlong)local_d8._4_4_ * 0x38);
      local_90 = (ulonglong)uVar9;
      if (puStack_100 == local_f8) {
        dStack_88 = dVar4;
        FUN_14834da9e(&local_108,puStack_100,&local_90);
      }
      else {
        *puStack_100 = uVar9;
        puStack_100[1] = 0;
        *(double *)(puStack_100 + 2) = dVar4;
        puStack_100 = puStack_100 + 4;
      }
      local_90 = CONCAT44(1,uVar9 + iVar3);
      if (puStack_100 == local_f8) {
        dStack_88 = dVar4;
        FUN_14834da9e(&local_108,puStack_100,&local_90);
      }
      else {
        *puStack_100 = uVar9 + iVar3;
        puStack_100[1] = 1;
        *(double *)(puStack_100 + 2) = dVar4;
        puStack_100 = puStack_100 + 4;
        dStack_88 = dVar4;
      }
      local_d8._0_4_ = (uint)local_d8 & ~local_e8._4_4_;
      FUN_1449c0562(&local_e8);
    } while (local_f0 != puVar1 || (dStack_e0 != dVar2 || local_d8._4_4_ != iVar8));
  }
  local_f0 = (uint *)((ulonglong)local_f0 & 0xffffffffffffff00);
  local_e8 = 0;
  dStack_e0 = 0.0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_146de45bc(&local_f0,lVar7,2);
  uVar6 = local_110;
  FUN_146de5a4e(local_110,&local_f0);
  FUN_146de5508(&local_f0);
  local_f0 = puStack_100;
  local_90 = local_108;
  FUN_14836a965(&local_90,&local_f0,uVar6);
  FUN_14834db6e(uVar6);
  FUN_14834dc94(&local_108);
  FUN_14834dc94(&local_a8);
  if ((local_70 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14839fcde FUN_14839fcde body=116 status=ok
// SIG undefined FUN_14839fcde(void)

void FUN_14839fcde(longlong *param_1)

{
  longlong *plVar1;
  
  if (param_1[0x10] != 0) {
    plVar1 = param_1 + 0x14;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x12];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*param_1 != 0) {
    plVar1 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014839fd47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14839fd52 FUN_14839fd52 body=502 status=ok
// SIG undefined FUN_14839fd52(void)

undefined4 FUN_14839fd52(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_168 [32];
  longlong *local_148;
  longlong local_138 [2];
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_98[0] = 0;
  local_90 = 0xffffffffffffffff;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_146de45bc(local_98,0,0);
  local_e0[0] = 0;
  local_d8 = 0xffffffffffffffff;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  FUN_146de45bc(local_e0,0,0);
  local_128[0] = 0;
  local_120 = 0xffffffffffffffff;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  FUN_146de45bc(local_128,0,0);
  FUN_14839f738(param_1,local_98,local_e0,local_128);
  local_148 = local_138;
  local_138[0] = 0;
  local_138[1] = 0;
  uVar8 = FUN_143b19062(param_1,local_98,local_e0,local_128);
  FUN_1407feed2(param_3,*(int *)(*(longlong *)(param_1 + 0x88) + 0x20) * 0x200 +
                        *(int *)(*(longlong *)(param_1 + 0x88) + 0x24),1);
  if ((char)uVar8 == '\0') {
    if (0 < *(int *)(param_1 + 0x68)) {
      lVar9 = 0;
      do {
        uVar7 = DAT_14c8463f8._4_4_;
        uVar6 = (undefined4)DAT_14c8463f8;
        uVar5 = DAT_14c8463f0._4_4_;
        puVar1 = (undefined4 *)
                 (*param_3 + (longlong)*(int *)(*(longlong *)(param_1 + 0x60) + lVar9 * 4) * 0x10);
        *puVar1 = (undefined4)DAT_14c8463f0;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(param_1 + 0x68));
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x68);
    if (0 < (longlong)iVar3) {
      lVar9 = 0;
      do {
        uVar2 = *(undefined8 *)((longlong)iVar3 * 8 + local_138[0] + lVar9 * 8);
        lVar4 = *param_3;
        lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x60) + lVar9 * 4) * 0x10;
        *(undefined8 *)(lVar4 + lVar10) = *(undefined8 *)(local_138[0] + lVar9 * 8);
        *(undefined8 *)(lVar4 + 8 + lVar10) = uVar2;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(param_1 + 0x68));
    }
  }
  FUN_1400020a8(local_138[0]);
  FUN_146de5508(local_128);
  FUN_146de5508(local_e0);
  FUN_146de5508(local_98);
  if ((local_50 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14839ff4a FUN_14839ff4a body=553 status=ok
// SIG undefined FUN_14839ff4a(void)

undefined8 FUN_14839ff4a(longlong *param_1,double *param_2,undefined8 *param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  double _X;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_d8 [39];
  undefined1 local_b1;
  undefined1 local_b0 [8];
  undefined8 *local_a8;
  int *local_98;
  int local_90;
  int local_8c;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar2 = (**(code **)(*param_1 + 0x38))(param_1,param_4);
  uVar5 = 3;
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_4);
    uVar5 = 2;
    if (cVar2 != '\0') {
      if ((char)param_1[0x39] == '\x01') {
        FUN_146de611d(param_3,param_1 + 0x37,local_b0);
      }
      else {
        pcVar1 = (code *)param_1[0x12];
        plVar4 = param_1 + 0x16;
        if ((longlong *)param_1[0x14] != (longlong *)0x0) {
          plVar4 = (longlong *)param_1[0x14];
        }
        uVar6 = (**(code **)(*plVar4 + 8))();
        iVar3 = (*pcVar1)(uVar6);
        local_90 = rand();
        local_98 = &local_90;
        local_a8 = (undefined8 *)(longlong)iVar3;
        local_8c = local_90;
        FUN_1483c1947(param_3);
      }
      *(undefined4 *)(param_1 + 0x3b) = 0;
      if (0 < (int)param_1[0x36]) {
        do {
          cVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4);
          if (cVar2 == '\0') goto LAB_14839ffb4;
          uVar7 = 0;
          uVar8 = 0;
          local_a8 = param_3;
          if (param_3[1] != 0) {
            local_88 = *param_3;
            uVar6 = FUN_146de3ea2(&local_90,&local_b1,local_b0);
            uVar7 = (undefined4)uVar6;
            uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
          }
          iVar3 = _finite((double)CONCAT44(uVar8,uVar7));
          if ((ABS((double)CONCAT44(uVar8,uVar7)) <= 1e-08) || (iVar3 == 0)) goto LAB_14839ffb4;
          (**(code **)(*param_1 + 0x20))(param_1,param_3);
          _X = (double)(**(code **)(*param_1 + 0x18))(param_1,param_3);
          *param_2 = _X;
          iVar3 = _finite(_X);
          if (iVar3 == 0) goto LAB_14839ffb4;
          cVar2 = (**(code **)(*param_1 + 0x10))(param_1,*param_2,param_3);
          if (cVar2 != '\0') {
            uVar5 = 0;
            goto LAB_14839ffb4;
          }
          iVar3 = (int)param_1[0x3b] + 1;
          *(int *)(param_1 + 0x3b) = iVar3;
        } while (iVar3 < (int)param_1[0x36]);
      }
      uVar5 = 1;
    }
  }
LAB_14839ffb4:
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1483a0174 FUN_1483a0174 body=414 status=ok
// SIG undefined FUN_1483a0174(void)

ulonglong FUN_1483a0174(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  double dVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 *local_d8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f8 = 0;
  uStack_f0 = 0;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,param_3,&local_f8);
  uVar3 = local_f8;
  local_d8 = &local_f8;
  local_b0 = param_2;
  local_68 = param_2;
  if (*(char *)(param_1 + 400) == '\x01') {
    local_108 = 0;
    uStack_100 = 0;
    pcVar2 = *(code **)(param_1 + 0xd0);
    plVar4 = (longlong *)(param_1 + 0xf0);
    if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0xe0);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,param_3,&local_108);
    uVar3 = local_108;
    local_c0 = uStack_100;
    local_78 = local_f8;
    local_58 = local_108;
    local_a8 = &local_108;
    uVar5 = FUN_1483db822();
    *(undefined8 *)(param_1 + 0x1d0) = uVar5;
    FUN_1400020a8(uVar3);
    dVar6 = *(double *)(param_1 + 0x1d0);
    uVar3 = local_f8;
  }
  else {
    local_c0 = param_3[1];
    local_78 = local_f8;
    local_58 = *param_3;
    local_a8 = param_3;
    dVar6 = (double)FUN_1483db822();
    *(double *)(param_1 + 0x1d0) = dVar6;
  }
  dVar1 = *(double *)(param_1 + 0x1a8);
  FUN_1400020a8(uVar3);
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)param_1 >> 8),dVar6 < dVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a0314 FUN_1483a0314 body=456 status=ok
// SIG undefined FUN_1483a0314(void)

double FUN_1483a0314(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong lStack_a0;
  undefined1 local_89;
  undefined1 local_88 [8];
  undefined8 *local_80;
  undefined8 *local_78;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 400) == '\x01') {
    local_a8 = 0;
    lStack_a0 = 0;
    pcVar1 = *(code **)(param_1 + 0xd0);
    plVar3 = (longlong *)(param_1 + 0xf0);
    if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0xe0);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,param_2,&local_a8);
    uVar5 = 0;
    uVar6 = 0;
    local_80 = param_2;
    local_78 = &local_a8;
    if (lStack_a0 != 0) {
      local_60 = *param_2;
      local_58 = local_a8;
      uVar2 = FUN_146de40ee(local_68,&local_89,local_88);
      uVar5 = (undefined4)uVar2;
      uVar6 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    FUN_1400020a8(local_a8);
  }
  else {
    uVar2 = FUN_1483db9b2(param_2,param_2);
    uVar5 = (undefined4)uVar2;
    uVar6 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  local_a8 = 0;
  lStack_a0 = 0;
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar3 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x20);
  }
  uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
  (*pcVar1)(uVar2,param_2,&local_a8);
  uVar7 = 0;
  uVar8 = 0;
  local_80 = param_2;
  local_78 = &local_a8;
  if (lStack_a0 != 0) {
    local_60 = *param_2;
    local_58 = local_a8;
    uVar2 = FUN_146de40ee(local_68,&local_89,local_88);
    uVar7 = (undefined4)uVar2;
    uVar8 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  uVar4 = -(ulonglong)(ABS((double)CONCAT44(uVar6,uVar5)) <= 1e-08);
  FUN_1400020a8(local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return (double)CONCAT44(uVar8,uVar7) /
           (double)(~uVar4 & CONCAT44(uVar6,uVar5) | uVar4 & 0x3ff0000000000000);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a04de FUN_1483a04de body=247 status=ok
// SIG undefined FUN_1483a04de(void)

bool FUN_1483a04de(longlong param_1,char param_2)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = *(undefined8 **)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  ppuVar1 = (undefined8 **)(param_1 + 0x1a0);
  if (param_2 == '\0') {
    pcVar5 = *(code **)(param_1 + 0x50);
    plVar3 = *(longlong **)(param_1 + 0x60);
    plVar6 = (longlong *)(param_1 + 0x70);
  }
  else {
    bVar7 = true;
    if (*(char *)(param_1 + 400) != '\x01') goto LAB_1483a05b7;
    pcVar5 = *(code **)(param_1 + 0x110);
    plVar3 = *(longlong **)(param_1 + 0x120);
    plVar6 = (longlong *)(param_1 + 0x130);
  }
  if (plVar3 != (longlong *)0x0) {
    plVar6 = plVar3;
  }
  uVar4 = (**(code **)(*plVar6 + 8))(plVar6);
  (*pcVar5)(&local_28,uVar4);
  if (ppuVar1 == &local_28) {
LAB_1483a059c:
    if (local_28 != (undefined8 *)0x0) {
      (**(code **)*local_28)(local_28,1);
    }
  }
  else {
    puVar2 = *ppuVar1;
    *ppuVar1 = local_28;
    local_28 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      goto LAB_1483a059c;
    }
  }
  bVar7 = *ppuVar1 != (undefined8 *)0x0;
LAB_1483a05b7:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a05d6 FUN_1483a05d6 body=285 status=ok
// SIG undefined FUN_1483a05d6(void)

undefined8 FUN_1483a05d6(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 400) == '\x01') {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    plVar6 = (longlong *)(param_1 + 0x20);
    if (param_3 == '\0') {
      plVar6 = (longlong *)(param_1 + 0xe0);
      puVar1 = (undefined8 *)(param_1 + 0xd0);
    }
    pcVar2 = (code *)*puVar1;
    plVar5 = (longlong *)(param_1 + 0x30);
    if (param_3 == '\0') {
      plVar5 = (longlong *)(param_1 + 0xf0);
    }
    if ((longlong *)*plVar6 != (longlong *)0x0) {
      plVar5 = (longlong *)*plVar6;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,param_2,param_2);
LAB_1483a064d:
    local_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x20))(*(longlong **)(param_1 + 0x1a0),param_2);
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x38))();
    if (cVar3 == '\0') {
      FUN_1400020a8(local_38);
      uVar4 = 0;
      goto LAB_1483a0686;
    }
    FUN_146de611d(param_2,&local_38,&local_21);
    FUN_1400020a8(local_38);
  }
  else {
    if (param_3 == '\0') goto LAB_1483a064d;
    pcVar2 = *(code **)(param_1 + 0x10);
    plVar6 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar6 = *(longlong **)(param_1 + 0x20);
    }
    uVar4 = (**(code **)(*plVar6 + 8))(plVar6);
    (*pcVar2)(uVar4,param_2,param_2);
  }
  uVar4 = 1;
LAB_1483a0686:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a06f4 FUN_1483a06f4 body=162 status=ok
// SIG undefined FUN_1483a06f4(void)

undefined8 FUN_1483a06f4(longlong param_1,char param_2)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return 0;
  }
  pcVar1 = *(code **)(param_1 + 0x90);
  if (pcVar1 == (code *)0x0) {
    return 0;
  }
  if (*(char *)(param_1 + 400) == '\x01') {
    if (*(longlong *)(param_1 + 0xd0) == 0) {
      return 0;
    }
    if (param_2 == '\0') goto LAB_1483a073b;
    lVar2 = *(longlong *)(param_1 + 0x110);
  }
  else {
    if (param_2 != '\0') goto LAB_1483a073b;
    lVar2 = *(longlong *)(param_1 + 0x50);
  }
  if (lVar2 == 0) {
    return 0;
  }
LAB_1483a073b:
  if ((*(int *)(param_1 + 0x1b0) < 2) ||
     (*(double *)(param_1 + 0x1a8) <= 0.0 && *(double *)(param_1 + 0x1a8) != 0.0)) {
    return 0;
  }
  if (*(char *)(param_1 + 0x1c8) == '\x01') {
    lVar2 = *(longlong *)(param_1 + 0x1c0);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    iVar3 = (*pcVar1)(uVar4);
    if (lVar2 != iVar3) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1483a0796 FUN_1483a0796 body=759 status=ok
// SIG undefined FUN_1483a0796(void)

void FUN_1483a0796(longlong param_1,char *param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined2 uStack_7b;
  undefined1 uStack_79;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong lStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  bVar1 = param_2[1];
  bVar7 = 1;
  if (*param_2 == '\0') {
    bVar7 = bVar1;
  }
  local_b8 = *param_3;
  uStack_70 = param_3[1];
  local_a8 = (longlong *)param_3[2];
  uStack_60 = param_3[3];
  local_58 = param_3[4];
  lStack_50 = param_3[5];
  local_48 = param_3[6];
  lStack_40 = param_3[7];
  lVar4 = local_48;
  lVar5 = lStack_40;
  local_68 = local_a8;
  lVar3 = uStack_60;
  local_78 = local_b8;
  lVar2 = uStack_70;
  param_3[6] = CONCAT44(uStack_84,local_88);
  param_3[7] = CONCAT17(uStack_79,CONCAT25(uStack_7b,CONCAT14(uStack_7c,uStack_80)));
  param_3[4] = (longlong)&PTR_LAB_14ae75a50;
  param_3[5] = param_1;
  param_3[2] = 0;
  param_3[3] = CONCAT44(uStack_9c,uStack_a0);
  *param_3 = (longlong)FUN_143b2599c;
  param_3[1] = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)lStack_40;
  uStack_7c = (undefined1)((ulonglong)lStack_40 >> 0x20);
  uStack_7b = (undefined2)((ulonglong)lStack_40 >> 0x28);
  uStack_79 = (undefined1)((ulonglong)lStack_40 >> 0x38);
  local_98 = local_58;
  lStack_90 = lStack_50;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  if (local_b8 != 0) {
    plVar6 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar6 = &local_98;
    }
    uStack_70 = lVar2;
    uStack_60 = lVar3;
    local_48 = lVar4;
    lStack_40 = lVar5;
    (**(code **)(*plVar6 + 0x10))();
  }
  local_b8 = param_3[8];
  uStack_70 = param_3[9];
  local_a8 = (longlong *)param_3[10];
  uStack_60 = param_3[0xb];
  local_58 = param_3[0xc];
  lStack_50 = param_3[0xd];
  local_48 = param_3[0xe];
  lStack_40 = param_3[0xf];
  lVar4 = local_48;
  lVar5 = lStack_40;
  local_68 = local_a8;
  lVar3 = uStack_60;
  local_78 = local_b8;
  lVar2 = uStack_70;
  *(uint *)(param_3 + 0xe) = (uint)bVar1 << 2;
  *(byte *)((longlong)param_3 + 0x74) = bVar7;
  *(ulonglong *)((longlong)param_3 + 0x75) = CONCAT17(uStack_7c,CONCAT43(uStack_80,uStack_84._1_3_))
  ;
  *(undefined2 *)((longlong)param_3 + 0x7d) = uStack_7b;
  *(undefined1 *)((longlong)param_3 + 0x7f) = uStack_79;
  param_3[0xc] = (longlong)&PTR_LAB_14ae75a70;
  param_3[0xd] = param_1;
  param_3[10] = 0;
  param_3[0xb] = CONCAT44(uStack_9c,uStack_a0);
  param_3[8] = (longlong)FUN_143b25a2e;
  param_3[9] = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)lStack_40;
  uStack_7c = (undefined1)((ulonglong)lStack_40 >> 0x20);
  uStack_7b = (undefined2)((ulonglong)lStack_40 >> 0x28);
  uStack_79 = (undefined1)((ulonglong)lStack_40 >> 0x38);
  local_98 = local_58;
  lStack_90 = lStack_50;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  if (local_b8 != 0) {
    plVar6 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar6 = &local_98;
    }
    uStack_70 = lVar2;
    uStack_60 = lVar3;
    local_48 = lVar4;
    lStack_40 = lVar5;
    (**(code **)(*plVar6 + 0x10))();
  }
  local_b8 = param_3[0x10];
  uStack_70 = param_3[0x11];
  local_a8 = (longlong *)param_3[0x12];
  uStack_60 = param_3[0x13];
  local_58 = param_3[0x14];
  lStack_50 = param_3[0x15];
  local_48 = param_3[0x16];
  lStack_40 = param_3[0x17];
  lVar4 = local_48;
  lVar5 = lStack_40;
  local_68 = local_a8;
  lVar3 = uStack_60;
  local_78 = local_b8;
  lVar2 = uStack_70;
  param_3[0x16] = CONCAT44(uStack_84,local_88);
  param_3[0x17] = CONCAT17(uStack_79,CONCAT25(uStack_7b,CONCAT14(uStack_7c,uStack_80)));
  param_3[0x14] = (longlong)&PTR_LAB_14ae75a90;
  param_3[0x15] = param_1;
  param_3[0x12] = 0;
  param_3[0x13] = CONCAT44(uStack_9c,uStack_a0);
  param_3[0x10] = (longlong)&LAB_143b25ad0;
  param_3[0x11] = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)lStack_40;
  uStack_7c = (undefined1)((ulonglong)lStack_40 >> 0x20);
  uStack_7b = (undefined2)((ulonglong)lStack_40 >> 0x28);
  uStack_79 = (undefined1)((ulonglong)lStack_40 >> 0x38);
  local_98 = local_58;
  lStack_90 = lStack_50;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_70 = lVar2;
  uStack_60 = lVar3;
  local_48 = lVar4;
  lStack_40 = lVar5;
  if (local_b8 != 0) {
    plVar6 = &local_98;
    if (local_a8 != (longlong *)0x0) {
      plVar6 = local_a8;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a0a8e FUN_1483a0a8e body=720 status=ok
// SIG undefined FUN_1483a0a8e(void)

undefined4 FUN_1483a0a8e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  byte bVar8;
  undefined1 *puVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined4 local_a4;
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 *local_48;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((char)param_1[2] != '\x01') {
    uVar6 = 0;
    goto LAB_1483a0ab8;
  }
  uVar2 = *(uint *)(*param_1 + 0x10);
  iVar5 = *(int *)(param_1[3] + 8);
  local_48 = (undefined1 *)0x0;
  local_3c = 0x80;
  local_40 = uVar2;
  uVar14 = uVar2 + 0x1f;
  if (0x1f < uVar14) {
    if (uVar14 < 0xa0) {
      puVar9 = local_58;
LAB_1483a0d08:
      uVar14 = uVar14 >> 3 & 0xfffffffc;
      iVar10 = (int)CONCAT71((int7)((ulonglong)param_2 >> 8),0xff);
    }
    else {
      param_2 = 0;
      FUN_14499171c(local_58,0,uVar14 >> 5,4);
      local_3c = uVar14 & 0xffffffe0;
      puVar9 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar9 = local_58;
      }
      if (uVar14 < 0x120) goto LAB_1483a0d08;
      uVar14 = (uVar14 >> 5) << 2;
      iVar10 = (int)CONCAT71((int7)((ulonglong)param_2 >> 8),0xff);
    }
    memset(puVar9,iVar10,(ulonglong)uVar14);
    uVar14 = local_40 + 0x1f;
    if (-1 < (int)local_40) {
      uVar14 = local_40;
    }
    if ((int)local_40 % 0x20 != 0) {
      puVar9 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar9 = local_58;
      }
      bVar8 = -(char)((int)local_40 % 0x20);
      *(uint *)(puVar9 + (longlong)((int)uVar14 >> 5) * 4) =
           (uint)(*(int *)(puVar9 + (longlong)((int)uVar14 >> 5) * 4) << (bVar8 & 0x1f)) >>
           (bVar8 & 0x1f);
    }
  }
  lVar7 = (longlong)(int)((longlong *)param_1[3])[1];
  if (lVar7 != 0) {
    lVar3 = *(longlong *)param_1[3];
    lVar12 = 0;
    do {
      iVar10 = *(int *)(lVar3 + lVar12);
      puVar9 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar9 = local_58;
      }
      iVar13 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar13 = iVar10;
      }
      bVar8 = (byte)iVar10 & 0x1f;
      *(uint *)(puVar9 + (longlong)(iVar13 >> 5) * 4) =
           *(uint *)(puVar9 + (longlong)(iVar13 >> 5) * 4) &
           (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
      lVar12 = lVar12 + 4;
    } while (lVar7 * 4 != lVar12);
  }
  plVar1 = param_1 + 6;
  FUN_144a127d2(plVar1,uVar2 - iVar5,1);
  if (0 < (int)uVar2) {
    iVar5 = 0;
    uVar11 = 0;
    do {
      puVar9 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar9 = local_58;
      }
      uVar14 = (uint)uVar11;
      if ((*(uint *)(puVar9 + (uVar11 >> 5) * 4) >> (uVar14 & 0x1f) & 1) != 0) {
        lVar7 = (longlong)iVar5;
        iVar5 = iVar5 + 1;
        *(uint *)(*plVar1 + lVar7 * 4) = uVar14;
      }
      uVar11 = (ulonglong)(uVar14 + 1);
    } while (uVar2 != uVar14 + 1);
  }
  local_a0[0] = 0;
  local_98 = 0xffffffffffffffff;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_146de45bc(local_a0,0,0);
  FUN_1483a0d5f(*param_1,plVar1,plVar1,local_a0);
  local_a4 = 4;
  FUN_14839d3b3(&local_b0);
  puVar4 = (undefined8 *)param_1[8];
  param_1[8] = (longlong)local_b0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
    local_b0 = (longlong *)param_1[8];
  }
  (**(code **)(*local_b0 + 0x28))(local_b0,local_a0,1);
  uVar6 = (**(code **)(*(longlong *)param_1[8] + 0x38))();
  if ((char)uVar6 == '\0') {
    puVar4 = (undefined8 *)param_1[8];
    param_1[8] = 0;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  FUN_146de5508(local_a0);
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_1483a0ab8:
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a0d5f FUN_1483a0d5f body=1663 status=ok
// SIG undefined FUN_1483a0d5f(void)

void FUN_1483a0d5f(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_198 [32];
  longlong *local_178;
  int local_164;
  longlong local_160;
  longlong *local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  undefined8 *local_130;
  int *local_128;
  undefined8 *puStack_120;
  undefined8 *local_118;
  int local_10c;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  iVar1 = *(int *)(param_1 + 8);
  iVar7 = *(int *)(param_1 + 0x10);
  local_160 = param_1;
  uVar8 = FUN_146de5690();
  uVar2 = *(uint *)(param_2 + 1);
  uVar3 = *(uint *)(param_3 + 1);
  local_158 = param_3;
  local_140 = param_2;
  if (uVar3 == 0 && uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_198);
  }
  if (iVar1 != 0 && iVar7 != 0) {
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    if (uVar2 != 0) {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar2);
      }
      FUN_140ab2830(&local_b8,uVar2);
      iVar6 = 1;
      if (3 < uVar2) {
        uVar5 = (uVar2 | 1) + 0xe;
        iVar6 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = 1 << ((byte)iVar6 & 0x1f);
      }
      if ((local_70 == 0) || (local_70 < iVar6)) {
        local_70 = iVar6;
        FUN_140264164();
      }
    }
    local_e8 = 0;
    local_e0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_dc = 0xffffffff00000080;
    local_d4 = 0;
    local_c8 = (undefined1 *)0x0;
    local_c0 = 0;
    local_164 = iVar7;
    local_150 = uVar8;
    local_148 = param_4;
    if (uVar3 != 0) {
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar3);
      }
      FUN_140ab2830(&local_108,uVar3);
      iVar7 = 1;
      if (3 < uVar3) {
        uVar5 = (uVar3 | 1) + 0xe;
        iVar7 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        iVar7 = 1 << ((byte)iVar7 & 0x1f);
      }
      if ((local_c0 == 0) || (local_c0 < iVar7)) {
        local_c0 = iVar7;
        FUN_140264164();
      }
    }
    local_138 = (int *)((ulonglong)local_138._4_4_ << 0x20);
    if (uVar2 != 0) {
      iVar7 = 0;
      do {
        local_10c = *(int *)(*local_140 + (longlong)iVar7 * 4);
        if ((local_10c < 0) || (local_164 <= local_10c)) goto LAB_1483a136d;
        local_128 = &local_10c;
        puStack_120 = &local_138;
        FUN_140263e2a(&local_b8,&local_130,&local_128,0);
        iVar7 = (int)local_138 + 1;
        local_138 = (int *)CONCAT44(local_138._4_4_,iVar7);
      } while (iVar7 < (int)uVar2);
    }
    local_138 = (int *)((ulonglong)local_138 & 0xffffffff00000000);
    if (0 < (int)uVar3) {
      iVar7 = 0;
      do {
        local_10c = *(int *)(*local_158 + (longlong)iVar7 * 4);
        if ((local_10c < 0) || (iVar1 <= local_10c)) goto LAB_1483a136d;
        local_128 = &local_10c;
        puStack_120 = &local_138;
        FUN_140263e2a(&local_108,&local_130,&local_128,0);
        iVar7 = (int)local_138 + 1;
        local_138 = (int *)CONCAT44(local_138._4_4_,iVar7);
      } while (iVar7 < (int)uVar3);
    }
    local_128 = (int *)0x0;
    puStack_120 = (undefined8 *)0x0;
    local_118 = (undefined8 *)0x0;
    FUN_148333c92(&local_128,
                  (longlong)
                  (int)((float)(int)(uVar3 * uVar2) *
                       (((float)(int)local_150 / (float)local_164) / (float)iVar1)));
    lVar9 = *(longlong *)(local_160 + 8);
    if (0 < lVar9) {
      uVar17 = 0;
      lVar15 = local_160;
      do {
        lVar16 = (longlong)*(int *)(*(longlong *)(lVar15 + 0x18) + uVar17 * 4);
        if (*(longlong *)(lVar15 + 0x20) == 0) {
          lVar14 = (longlong)*(int *)(*(longlong *)(lVar15 + 0x18) + 4 + uVar17 * 4);
        }
        else {
          lVar14 = *(int *)(*(longlong *)(lVar15 + 0x20) + uVar17 * 4) + lVar16;
        }
        if (lVar16 < lVar14) {
          plVar13 = *(longlong **)(lVar15 + 0x28);
          lVar9 = *(longlong *)(lVar15 + 0x30);
          do {
            uVar5 = *(uint *)(lVar9 + lVar16 * 4);
            if (uVar2 == 0) {
LAB_1483a1110:
              if (uVar3 == 0) {
LAB_1483a1175:
                if ((int)uStack_b0 != local_84) {
                  puVar10 = local_78;
                  if (local_78 == (undefined1 *)0x0) {
                    puVar10 = local_80;
                  }
                  iVar1 = *(int *)(puVar10 + (ulonglong)(local_70 - 1U & uVar5) * 4);
                  while (iVar1 != -1) {
                    lVar11 = local_b8 + (longlong)iVar1 * 0x10;
                    if (*(uint *)(local_b8 + (longlong)iVar1 * 0x10) == uVar5) goto LAB_1483a1187;
                    iVar1 = *(int *)(lVar11 + 8);
                  }
                }
                lVar11 = 0;
LAB_1483a1187:
                local_130 = (undefined8 *)CONCAT44(local_130._4_4_,*(undefined4 *)(lVar11 + 4));
                if ((int)uStack_100 != local_d4) {
                  puVar10 = local_c8;
                  if (local_c8 == (undefined1 *)0x0) {
                    puVar10 = local_d0;
                  }
                  iVar1 = *(int *)(puVar10 + (ulonglong)(local_c0 + 0x7fffffffU & (uint)uVar17) * 4)
                  ;
                  while (iVar1 != -1) {
                    lVar12 = local_108 + (longlong)iVar1 * 0x10;
                    if (uVar17 == *(uint *)(local_108 + (longlong)iVar1 * 0x10)) goto LAB_1483a11a4;
                    iVar1 = *(int *)(lVar12 + 8);
                  }
                }
                lVar12 = 0;
LAB_1483a11a4:
                uVar4 = *(undefined4 *)(lVar12 + 4);
                local_138 = (int *)CONCAT44(local_138._4_4_,uVar4);
                if (puStack_120 == local_118) {
                  local_178 = plVar13 + lVar16;
                  local_158 = plVar13;
                  FUN_14834d8b4(&local_128,puStack_120,&local_130,&local_138);
                  plVar13 = local_158;
                  lVar15 = local_160;
                }
                else {
                  *(undefined4 *)puStack_120 = *(undefined4 *)(lVar11 + 4);
                  *(undefined4 *)((longlong)puStack_120 + 4) = uVar4;
                  puStack_120[1] = plVar13[lVar16];
                  puStack_120 = puStack_120 + 2;
                }
              }
              else if ((int)uStack_100 != local_d4) {
                puVar10 = local_c8;
                if (local_c8 == (undefined1 *)0x0) {
                  puVar10 = local_d0;
                }
                for (iVar1 = *(int *)(puVar10 +
                                     (ulonglong)(local_c0 + 0x7fffffffU & (uint)uVar17) * 4);
                    iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x10 + local_108 + 8)) {
                  if (uVar17 == *(uint *)(local_108 + (longlong)iVar1 * 0x10)) goto LAB_1483a1175;
                }
              }
            }
            else if ((int)uStack_b0 != local_84) {
              puVar10 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar10 = local_80;
              }
              for (iVar1 = *(int *)(puVar10 + (ulonglong)(local_70 - 1U & uVar5) * 4); iVar1 != -1;
                  iVar1 = *(int *)((longlong)iVar1 * 0x10 + local_b8 + 8)) {
                if (*(uint *)(local_b8 + (longlong)iVar1 * 0x10) == uVar5) goto LAB_1483a1110;
              }
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 != lVar14);
          lVar9 = *(longlong *)(lVar15 + 8);
        }
        uVar17 = uVar17 + 1;
      } while ((longlong)uVar17 < lVar9);
    }
    uVar8 = local_148;
    FUN_146de45bc(local_148,(longlong)(int)uVar2,(longlong)(int)uVar3);
    local_130 = puStack_120;
    local_138 = local_128;
    FUN_14836a965(&local_138,&local_130,uVar8);
    FUN_14834dc94(&local_128);
LAB_1483a136d:
    local_c0 = 0;
    if (local_c8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_144a6bfa8(&local_108);
    local_70 = 0;
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_144a6bfa8(&local_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a1408 FUN_1483a1408 body=895 status=ok
// SIG undefined FUN_1483a1408(void)

undefined8 FUN_1483a1408(longlong *param_1,longlong param_2,char param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_188 [40];
  uint local_160;
  undefined8 *local_158;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  longlong local_c8;
  char local_b9;
  code *local_b8;
  longlong **local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong *local_98;
  longlong *plStack_90;
  undefined8 *local_88;
  undefined1 *local_80;
  char *local_78;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_b9 = param_3;
  FUN_140212f8e(&local_c8);
  if ((char)param_1[2] == '\x01') {
    if (param_1[8] != 0) {
      lVar5 = param_1[5];
      if (param_1[4] == 0) {
        if (lVar5 != 0) {
          puVar3 = (ulonglong *)(lVar5 + 0x10);
          goto LAB_1483a148f;
        }
      }
      else if (lVar5 == 0) {
        puVar3 = (ulonglong *)(param_1[4] + 8);
LAB_1483a148f:
        uVar6 = *puVar3;
        local_110 = 0;
        local_108 = 0xffffffffffffffff;
        local_100 = 0;
        uStack_f8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = 0;
        FUN_146de45bc(&local_110,0,0);
        FUN_1483a0d5f(*param_1,param_1 + 6,param_1[3],&local_110);
        local_118 = 0;
        local_128 = 0;
        uStack_120 = 0;
        if (param_1[1] != 0) {
          local_98 = (longlong *)0x0;
          plStack_90 = (longlong *)0x0;
          FUN_14839a780(param_1[1],param_1 + 6,&local_98,&local_128);
        }
        if (param_3 == '\0') {
          lVar5 = *(longlong *)(*param_1 + 0x10);
        }
        else {
          lVar5 = (longlong)(int)param_1[7];
        }
        FUN_14828b000(param_2,lVar5,(longlong)(int)uVar6);
        plStack_90 = *(longlong **)(param_2 + 8);
        local_88 = *(undefined8 **)(param_2 + 0x10);
        local_80 = (undefined1 *)0x0;
        FUN_1483dba7a(param_2);
        local_138 = 0;
        uStack_130 = 0;
        lVar5 = param_1[4];
        if ((lVar5 != 0) && (0 < *(longlong *)(lVar5 + 8))) {
          lVar7 = 0;
          do {
            if (param_1[1] == 0) {
              local_98 = (longlong *)((ulonglong)local_98 & 0xffffffffffffff00);
              plStack_90 = (longlong *)lVar5;
              local_88 = (undefined8 *)lVar7;
              lVar5 = FUN_1483a1788(&local_98);
              uVar1 = uStack_130;
              if (0 < lVar5) {
                lVar5 = (longlong)(int)uStack_130;
                uVar2 = (int)uStack_130 + 1;
                uStack_130 = CONCAT44(uStack_130._4_4_,uVar2);
                if (uStack_130._4_4_ < uVar2) {
                  FUN_1446f48e2(&local_138,uVar1 & 0xffffffff);
                }
                *(int *)(local_138 + lVar5 * 4) = (int)lVar7;
              }
            }
            lVar7 = lVar7 + 1;
            lVar5 = param_1[4];
          } while (lVar7 < *(longlong *)(lVar5 + 8));
        }
        local_148 = 0;
        uStack_140 = 0;
        local_98 = (longlong *)CONCAT71(local_98._1_7_,1);
        FUN_14475e60e(&local_148,&local_98,*(undefined4 *)(param_2 + 0x10));
        if (param_1[4] != 0) {
          uVar6 = uStack_130 & 0xffffffff;
        }
        local_160 = *(byte *)(param_1 + 9) ^ 1;
        plStack_90 = &local_138;
        local_88 = &local_128;
        local_78 = &local_b9;
        local_158 = &local_a8;
        local_a8 = 0;
        local_a0 = 0;
        local_b8 = FUN_143b25b20;
        local_b0 = &local_98;
        local_98 = param_1;
        local_80 = &local_110;
        local_70 = param_2;
        local_68 = &local_148;
        FUN_1401f8d10(L"ParallelFor Task",uVar6 & 0xffffffff,1);
        if ((longlong)(int)uStack_140 != 0) {
          lVar5 = 0;
          do {
            if (*(char *)(local_148 + lVar5) == '\0') {
              if (local_148 != 0) {
                FUN_1400020a8();
              }
              if (local_138 != 0) {
                FUN_1400020a8();
              }
              FUN_1400020a8(local_128);
              FUN_146de5508(&local_110);
              goto LAB_1483a1476;
            }
            lVar5 = lVar5 + 1;
          } while ((int)uStack_140 != lVar5);
        }
        if (local_148 != 0) {
          FUN_1400020a8();
        }
        if (local_138 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_128);
        FUN_146de5508(&local_110);
        goto LAB_1483a16df;
      }
    }
LAB_1483a1476:
    uVar4 = 0;
  }
  else {
LAB_1483a16df:
    FUN_140212f8e(&local_110);
    local_c8 = CONCAT71(uStack_10f,local_110) - local_c8;
    param_1[10] = (longlong)((double)local_c8 / 10000000.0);
    uVar4 = CONCAT71((int7)((ulonglong)local_c8 >> 8),1);
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1483a1788 FUN_1483a1788 body=139 status=ok
// SIG undefined FUN_1483a1788(void)

longlong FUN_1483a1788(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  longlong local_40;
  undefined8 local_38;
  longlong local_20 [2];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x20);
  lVar1 = lVar3 + lVar2 * 4;
  if (lVar1 == 0 || lVar3 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
    iVar4 = *(int *)(lVar1 + 4 + lVar2 * 4) - *(int *)(lVar1 + lVar2 * 4);
  }
  else {
    local_38 = 1;
    local_10 = 1;
    local_40 = lVar1;
    local_20[0] = lVar1;
    iVar4 = FUN_146ddd0fe(local_20,&local_41);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (longlong)iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a1814 FUN_1483a1814 body=455 status=ok
// SIG undefined FUN_1483a1814(void)

undefined4 FUN_1483a1814(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  undefined4 **local_d8;
  undefined8 local_c8;
  ulonglong local_c0;
  undefined4 *local_b8;
  undefined4 local_ac;
  ulonglong local_a8;
  undefined4 *puStack_a0;
  undefined4 *local_98;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88 = 0;
  lStack_80 = 0;
  local_78 = 0;
  uVar2 = FUN_1483a1408();
  if ((char)uVar2 != '\0') {
    local_a8 = 0;
    puStack_a0 = (undefined4 *)0x0;
    local_98 = (undefined4 *)0x0;
    local_c0 = local_c0 & 0xffffffff00000000;
    local_c8 = param_2;
    if (0 < local_78) {
      lVar8 = 0;
      uVar5 = 0;
      lVar3 = lStack_80;
      lVar7 = local_78;
      do {
        local_ac = 0;
        if (0 < lVar3) {
          lVar6 = 0;
          do {
            local_b8 = *(undefined4 **)(lVar3 * lVar8 + local_88 + lVar6 * 8);
            if (param_4 < ABS((double)local_b8)) {
              if (puStack_a0 == local_98) {
                local_d8 = &local_b8;
                FUN_1483af816(&local_a8,puStack_a0,&local_ac,&local_c0);
              }
              else {
                *puStack_a0 = (int)lVar6;
                puStack_a0[1] = (int)uVar5;
                *(undefined4 **)(puStack_a0 + 2) = local_b8;
                puStack_a0 = puStack_a0 + 4;
              }
            }
            lVar6 = lVar6 + 1;
            local_ac = (undefined4)lVar6;
            lVar3 = lStack_80;
            lVar7 = local_78;
          } while (lVar6 < lStack_80);
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        local_c0 = CONCAT44(local_c0._4_4_,uVar4);
        lVar8 = lVar8 + 8;
      } while ((longlong)uVar5 < lVar7);
    }
    uVar1 = local_c8;
    FUN_146de45bc(local_c8);
    local_b8 = puStack_a0;
    local_c0 = local_a8;
    FUN_14836a965(&local_c0,&local_b8,uVar1);
    FUN_14834dc94(&local_a8);
  }
  FUN_1400020a8(local_88);
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1483a19dc FUN_1483a19dc body=438 status=ok
// SIG undefined FUN_1483a19dc(void)

undefined4
FUN_1483a19dc(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined1 param_6,undefined4 param_7,void **param_8)

{
  void *_Src;
  char cVar1;
  undefined4 uVar2;
  void **unaff_RBX;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88;
  longlong local_80;
  longlong lStack_78;
  undefined8 local_70;
  void *pvStack_68;
  ulonglong local_60;
  undefined8 *puStack_58;
  undefined1 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_70 = 0;
  pvStack_68 = (void *)0x0;
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 1;
  local_48 = 0;
  local_98 = param_1;
  local_90 = param_2;
  if (param_4 != 0 && param_3 != 0) {
    uVar2 = 0;
    if ((*(longlong *)(param_4 + 0x10) != (longlong)*(int *)(param_3 + 8)) ||
       (*(longlong *)(param_1 + 0x10) < (longlong)*(int *)(param_3 + 8))) goto LAB_1483a1a72;
    local_88 = 1;
    local_80 = param_3;
    lStack_78 = param_4;
    cVar1 = FUN_1483a0a8e();
    _Src = pvStack_68;
    if (cVar1 != '\0') {
      local_a8 = (void *)0x0;
      lVar3 = (longlong)(int)local_60;
      local_a0 = (int)local_60;
      if (lVar3 == 0) {
        local_9c = 0;
      }
      else {
        unaff_RBX = &local_a8;
        FUN_144a06ca8(unaff_RBX,local_60 & 0xffffffff,0);
        memcpy(local_a8,_Src,lVar3 << 2);
      }
      if (&local_a8 == param_8) {
        if (local_a8 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_8 != (void *)0x0) {
          FUN_1400020a8();
        }
        *param_8 = local_a8;
        local_a8 = (void *)0x0;
        *(int *)(param_8 + 1) = local_a0;
        *(undefined4 *)((longlong)param_8 + 0xc) = local_9c;
      }
      uVar2 = FUN_1483a1814(&local_98,param_5,
                            CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_6) & 0xffffffff,param_7
                           );
      goto LAB_1483a1a72;
    }
  }
  uVar2 = 0;
LAB_1483a1a72:
  if (puStack_58 != (undefined8 *)0x0) {
    (**(code **)*puStack_58)(puStack_58,1);
  }
  if (pvStack_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a1b93 FUN_1483a1b93 body=66 status=ok
// SIG undefined FUN_1483a1b93(void)

undefined8 * FUN_1483a1b93(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  FUN_14839df44(puVar1,param_2);
  *puVar1 = &PTR_FUN_14ae75270;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 1483a1bd5 FUN_1483a1bd5 body=116 status=ok
// SIG undefined FUN_1483a1bd5(void)

undefined8 * FUN_1483a1bd5(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
  FUN_14839df44(puVar1,param_2);
  *puVar1 = &PTR_FUN_14ae752b0;
  *(undefined1 *)(puVar1 + 0x12) = param_3;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0xffffffff00000000;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 1483a1c49 FUN_1483a1c49 body=215 status=ok
// SIG undefined FUN_1483a1c49(void)

void FUN_1483a1c49(uint param_1,undefined8 param_2,double param_3,double param_4,undefined4 param_5,
                  undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_1f8 [40];
  undefined **local_1d0 [48];
  ulonglong local_50;
  
  uVar1 = SUB84(param_4,0);
  uVar2 = (undefined4)((ulonglong)param_4 >> 0x20);
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (1000000.0 <= param_4) {
    uVar1 = 0;
    uVar2 = 0x412e8480;
  }
  FUN_14839d4f6(local_1d0);
  local_1d0[0] = &PTR_FUN_14ae752e8;
  FUN_14839d5c0(local_1d0,param_2,param_1);
  FUN_14839d76c(local_1d0,((param_1 & 0xfffffffd) == 0) * '\x03',param_5,
                (double)CONCAT44(uVar2,uVar1) * param_3);
  FUN_14839ddb6(local_1d0,param_6);
  FUN_1483a1dda(local_1d0);
  if ((local_50 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a1d22 FUN_1483a1d22 body=183 status=ok
// SIG undefined FUN_1483a1d22(void)

void FUN_1483a1d22(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ae74d90;
  FUN_146de5508(param_1 + 0x23);
  lVar1 = param_1[0x22];
  if (lVar1 != 0) {
    FUN_1483c0eca(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_148398478(param_1 + 0x1c);
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_146e2d074(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1483aeb92(param_1 + 1);
  return;
}



// FUNCTION 1483a1dda FUN_1483a1dda body=142 status=ok
// SIG undefined FUN_1483a1dda(void)

void FUN_1483a1dda(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_14ae74ed0;
  lVar1 = 0;
  do {
    FUN_148398478((longlong)param_1 + lVar1 + 0x148);
    lVar1 = lVar1 + -0x30;
  } while (lVar1 != -0x60);
  FUN_148398478(param_1 + 0x1d);
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_146de5508(param_1 + 0x11);
  FUN_146de5508(param_1 + 8);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483a1e68 FUN_1483a1e68 body=871 status=ok
// SIG undefined FUN_1483a1e68(void)

void FUN_1483a1e68(undefined1 param_1,char param_2,longlong ****param_3,longlong ****param_4,
                  int param_5,longlong ***param_6)

{
  longlong ***ppplVar1;
  longlong ***ppplVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_148 [40];
  undefined4 local_120;
  longlong ****local_118;
  undefined1 local_106;
  char local_105;
  uint local_104;
  longlong ****local_100;
  longlong ****local_f8;
  undefined8 local_f0;
  longlong ****local_e8;
  longlong ****local_e0;
  longlong ****local_d8;
  longlong ****local_d0;
  longlong ***local_c8;
  longlong ***local_c0;
  longlong **local_b8;
  undefined8 uStack_b0;
  longlong ***local_a8;
  undefined8 uStack_a0;
  longlong ***local_98;
  undefined8 uStack_90;
  longlong ****local_80;
  longlong ****local_78;
  longlong ***local_70;
  longlong ****local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar6 = *(int *)(param_3 + 4) * 0x200 + *(int *)((longlong)param_3 + 0x24);
  local_98 = (longlong ***)0x0;
  uStack_90 = 0;
  local_a8 = (longlong ***)0x0;
  uStack_a0 = 0;
  local_106 = param_1;
  local_105 = param_2;
  local_100 = param_4;
  FUN_1448c4dd6(&local_98,uVar6,1);
  local_68 = (longlong ****)&local_80;
  local_118 = (longlong ****)&local_f8;
  local_f8 = (longlong ****)0x0;
  local_f0 = (longlong ****)((ulonglong)local_f0._4_4_ << 0x20);
  local_70 = (longlong ***)FUN_143b25e2a;
  local_120 = 0;
  local_80 = param_3;
  local_78 = &local_98;
  FUN_1401f8d10(L"ParallelFor Task",uVar6,1);
  local_104 = uVar6;
  if (0 < (int)uVar6) {
    uVar5 = 0;
    do {
      uVar3 = uStack_a0;
      if (*(char *)((longlong)local_98 + uVar5) == '\x01') {
        lVar7 = (longlong)(int)uStack_a0;
        uVar4 = (int)uStack_a0 + 1;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar4);
        if (uStack_a0._4_4_ < uVar4) {
          FUN_1446f48e2(&local_a8,uVar3 & 0xffffffff);
        }
        *(int *)((longlong)local_a8 + lVar7 * 4) = (int)uVar5;
      }
      uVar5 = uVar5 + 1;
    } while (uVar6 != uVar5);
  }
  local_b8 = (longlong **)0x0;
  uStack_b0 = 0;
  FUN_140b463b8(&local_b8,local_104,1);
  local_c0 = param_6;
  local_c8 = &local_b8;
  if (0 < param_5) {
    do {
      local_f8 = (longlong ****)CONCAT71(local_f8._1_7_,local_106);
      local_e8 = local_100;
      local_e0 = &local_98;
      local_70 = (longlong ***)0x0;
      local_68 = (longlong ****)((ulonglong)local_68 & 0xffffffff00000000);
      local_80 = (longlong ****)FUN_143b25e92;
      local_78 = (longlong ****)&local_f8;
      local_118 = &local_70;
      local_120 = 0;
      local_f0 = param_3;
      local_d8 = &local_c0;
      local_d0 = &local_c8;
      FUN_1401f8d10(L"ParallelFor Task",local_104,1,&local_80);
      if (local_105 != '\0') {
        local_f0 = local_100;
        local_d8 = &local_98;
        local_d0 = &local_a8;
        local_70 = (longlong ***)0x0;
        local_68 = (longlong ****)((ulonglong)local_68 & 0xffffffff00000000);
        local_80 = (longlong ****)FUN_143b260f4;
        local_78 = (longlong ****)&local_f8;
        local_118 = &local_70;
        local_120 = 0;
        local_f8 = param_3;
        local_e8 = &local_c0;
        local_e0 = &local_c8;
        FUN_1401f8d10(L"ParallelFor Task",uStack_a0 & 0xffffffff,1,&local_80);
      }
      ppplVar2 = local_c0;
      ppplVar1 = local_c8;
      local_c0 = local_c8;
      local_c8 = ppplVar2;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
    if (ppplVar1 != param_6) {
      if (*param_6 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      *param_6 = *ppplVar1;
      *ppplVar1 = (longlong **)0x0;
      *(undefined4 *)(param_6 + 1) = *(undefined4 *)(ppplVar1 + 1);
      *(undefined4 *)((longlong)param_6 + 0xc) = *(undefined4 *)((longlong)ppplVar1 + 0xc);
      ppplVar1[1] = (longlong **)0x0;
    }
  }
  if (local_b8 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (longlong ***)0x0) {
    FUN_1400020a8();
  }
  if ((longlong ****)local_98 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a21d0 FUN_1483a21d0 body=1024 status=ok
// SIG undefined FUN_1483a21d0(void)

void FUN_1483a21d0(uint *param_1,longlong param_2,uint param_3)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  
  *param_1 = param_3;
  lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x180) + (ulonglong)(param_3 >> 9) * 8);
  lVar13 = (ulonglong)((param_3 & 0x1ff) << 2) * 3;
  uVar3 = *(uint *)(lVar14 + lVar13);
  lVar5 = *(longlong *)(param_2 + 0x10);
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar4 = *(uint *)(lVar6 + 4 + lVar13);
  lVar7 = *(longlong *)(lVar5 + (ulonglong)(*(uint *)(lVar6 + lVar13) >> 9) * 8);
  uVar15 = (ulonglong)*(uint *)(lVar6 + lVar13) & 0x1ff;
  dVar24 = *(double *)(lVar7 + uVar15 * 0x18);
  dVar2 = *(double *)(lVar7 + 8 + uVar15 * 0x18);
  dVar20 = *(double *)(lVar7 + 0x10 + uVar15 * 0x18);
  lVar7 = *(longlong *)(lVar5 + (ulonglong)(uVar4 >> 9) * 8);
  uVar15 = (ulonglong)uVar4 & 0x1ff;
  dVar17 = *(double *)(lVar7 + uVar15 * 0x18);
  dVar21 = *(double *)(lVar7 + 8 + uVar15 * 0x18);
  dVar19 = *(double *)(lVar7 + 0x10 + uVar15 * 0x18);
  uVar4 = *(uint *)(lVar6 + 8 + lVar13);
  lVar5 = *(longlong *)(lVar5 + (ulonglong)(uVar4 >> 9) * 8);
  uVar15 = (ulonglong)uVar4 & 0x1ff;
  dVar22 = *(double *)(lVar5 + uVar15 * 0x18);
  dVar23 = *(double *)(lVar5 + 8 + uVar15 * 0x18);
  dVar16 = *(double *)(lVar5 + 0x10 + uVar15 * 0x18);
  dVar18 = dVar19 - dVar20;
  dVar9 = dVar21 - dVar2;
  dVar8 = dVar17 - dVar24;
  dVar20 = dVar16 - dVar20;
  dVar2 = dVar23 - dVar2;
  dVar24 = dVar22 - dVar24;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar14 + 4 + lVar13);
  param_1[0x12] = uVar3;
  dVar10 = dVar8 * dVar2 - dVar24 * dVar9;
  dVar11 = dVar18 * dVar24 - dVar20 * dVar8;
  dVar12 = dVar9 * dVar20 - dVar2 * dVar18;
  dVar10 = SQRT(dVar10 * dVar10 + dVar12 * dVar12 + dVar11 * dVar11);
  if (dVar10 <= 1.999999987845058e-08) {
    param_1[2] = 0x4590331d;
    param_1[3] = 0x3fe279a7;
    param_1[4] = 0x4590331d;
    param_1[5] = 0x3fe279a7;
    param_1[6] = 0x4590331d;
    param_1[7] = 0x3fe279a7;
    param_1[8] = 0xd5555555;
    param_1[9] = 0x3e2ca213;
    param_1[10] = 0xd5555555;
    param_1[0xb] = 0x3e2ca213;
    param_1[0xc] = 0xd5555555;
    param_1[0xd] = 0x3e2ca213;
    param_1[0xe] = 0xe0000000;
    param_1[0xf] = 0x3e45798e;
  }
  else {
    dVar16 = dVar16 - dVar19;
    dVar23 = dVar23 - dVar21;
    dVar22 = dVar22 - dVar17;
    dVar17 = (dVar18 * dVar20 + dVar8 * dVar24 + dVar9 * dVar2) / dVar10;
    *(double *)(param_1 + 2) = dVar17;
    dVar21 = -(dVar18 * dVar16 + dVar8 * dVar22 + dVar9 * dVar23) / dVar10;
    *(double *)(param_1 + 4) = dVar21;
    dVar19 = (dVar20 * dVar16 + dVar24 * dVar22 + dVar2 * dVar23) / dVar10;
    *(double *)(param_1 + 6) = dVar19;
    *(double *)(param_1 + 0xe) = dVar10 * 0.5;
    if (((dVar19 < 0.0) || (dVar17 < 0.0)) || (dVar21 < 0.0)) {
      dVar24 = dVar10 * 0.5 * 0.25;
      *(double *)(param_1 + 8) = dVar24;
      *(double *)(param_1 + 10) = dVar24;
      *(double *)(param_1 + 0xc) = dVar24;
      lVar14 = -0x18;
      do {
        pdVar1 = (double *)((longlong)param_1 + lVar14 + 0x20);
        if (*pdVar1 <= 0.0 && *pdVar1 != 0.0) {
          *(double *)((longlong)param_1 + lVar14 + 0x38) = *(double *)(param_1 + 0xe) * 0.5;
        }
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0);
    }
    else {
      dVar21 = (dVar20 * dVar20 + dVar24 * dVar24 + dVar2 * dVar2) * dVar21;
      dVar19 = (dVar18 * dVar18 + dVar8 * dVar8 + dVar9 * dVar9) * dVar19;
      dVar17 = (dVar16 * dVar16 + dVar22 * dVar22 + dVar23 * dVar23) * dVar17;
      *(double *)(param_1 + 8) = (dVar19 + dVar21) * 0.125;
      *(double *)(param_1 + 10) = (dVar19 + dVar17) * 0.125;
      *(double *)(param_1 + 0xc) = (dVar17 + dVar21) * 0.125;
    }
  }
  return;
}



// FUNCTION 1483a25d0 FUN_1483a25d0 body=975 status=ok
// SIG undefined FUN_1483a25d0(void)

void FUN_1483a25d0(uint *param_1,longlong param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  *param_1 = param_3;
  uVar11 = (ulonglong)(param_3 >> 9);
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x130) + uVar11 * 8);
  lVar10 = (ulonglong)((param_3 & 0x1ff) << 2) * 3;
  uVar7 = *(undefined8 *)(lVar6 + lVar10);
  param_1[3] = *(uint *)(lVar6 + 8 + lVar10);
  *(undefined8 *)(param_1 + 1) = uVar7;
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x180) + uVar11 * 8);
  uVar7 = *(undefined8 *)(lVar6 + lVar10);
  param_1[6] = *(uint *)(lVar6 + 8 + lVar10);
  *(undefined8 *)(param_1 + 4) = uVar7;
  lVar6 = *(longlong *)(param_2 + 0x10);
  lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x130) + uVar11 * 8);
  uVar5 = *(uint *)(lVar8 + 4 + lVar10);
  lVar9 = *(longlong *)(lVar6 + (ulonglong)(*(uint *)(lVar8 + lVar10) >> 9) * 8);
  uVar11 = (ulonglong)*(uint *)(lVar8 + lVar10) & 0x1ff;
  dVar14 = *(double *)(lVar9 + uVar11 * 0x18);
  dVar1 = *(double *)(lVar9 + 8 + uVar11 * 0x18);
  dVar13 = *(double *)(lVar9 + 0x10 + uVar11 * 0x18);
  lVar9 = *(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8);
  uVar11 = (ulonglong)uVar5 & 0x1ff;
  dVar16 = *(double *)(lVar9 + uVar11 * 0x18);
  dVar18 = *(double *)(lVar9 + 8 + uVar11 * 0x18);
  dVar19 = *(double *)(lVar9 + 0x10 + uVar11 * 0x18);
  uVar5 = *(uint *)(lVar8 + 8 + lVar10);
  lVar6 = *(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8);
  uVar11 = (ulonglong)uVar5 & 0x1ff;
  dVar2 = *(double *)(lVar6 + uVar11 * 0x18);
  dVar3 = *(double *)(lVar6 + 8 + uVar11 * 0x18);
  dVar4 = *(double *)(lVar6 + 0x10 + uVar11 * 0x18);
  dVar12 = dVar4 - dVar19;
  dVar19 = dVar19 - dVar13;
  dVar17 = dVar3 - dVar18;
  dVar18 = dVar18 - dVar1;
  dVar15 = dVar2 - dVar16;
  dVar16 = dVar16 - dVar14;
  dVar4 = dVar4 - dVar13;
  dVar3 = dVar3 - dVar1;
  dVar2 = dVar2 - dVar14;
  dVar21 = SQRT(dVar19 * dVar19 + dVar16 * dVar16 + dVar18 * dVar18);
  *(double *)(param_1 + 8) = dVar21;
  dVar14 = SQRT(dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3);
  *(double *)(param_1 + 10) = dVar14;
  dVar1 = SQRT(dVar12 * dVar12 + dVar15 * dVar15 + dVar17 * dVar17);
  *(double *)(param_1 + 0xc) = dVar1;
  *(byte *)(param_1 + 7) = dVar1 < 0.0001 | (-(dVar14 < 0.0001) | -(dVar21 < 0.0001)) & 1U;
  dVar20 = dVar19 * dVar4 + dVar16 * dVar2 + dVar18 * dVar3;
  dVar18 = dVar18 * dVar17 + dVar15 * dVar16 + dVar12 * dVar19;
  dVar13 = dVar12 * dVar4 + dVar15 * dVar2 + dVar17 * dVar3;
  dVar16 = (dVar21 * dVar14 - dVar20) / (dVar21 * dVar14 + dVar20 + 1e-06);
  *(double *)(param_1 + 0x10) = (dVar21 * dVar1 + dVar18) / ((dVar21 * dVar1 - dVar18) + 1e-06);
  *(double *)(param_1 + 0x12) = (dVar14 * dVar1 - dVar13) / (dVar14 * dVar1 + dVar13 + 1e-06);
  uVar11 = -(ulonglong)(-dVar16 <= dVar16);
  dVar14 = (double)(~uVar11 & (ulonglong)-dVar16 | (ulonglong)dVar16 & uVar11);
  if (dVar14 < 0.0) {
    dVar14 = sqrt(dVar14);
  }
  else {
    dVar14 = SQRT(dVar14);
  }
  *(double *)(param_1 + 0xe) = dVar14;
  dVar14 = *(double *)(param_1 + 0x10);
  uVar11 = -(ulonglong)(-dVar14 <= dVar14);
  dVar14 = (double)(~uVar11 & (ulonglong)-dVar14 | (ulonglong)dVar14 & uVar11);
  if (dVar14 < 0.0) {
    dVar14 = sqrt(dVar14);
  }
  else {
    dVar14 = SQRT(dVar14);
  }
  *(double *)(param_1 + 0x10) = dVar14;
  dVar14 = *(double *)(param_1 + 0x12);
  uVar11 = -(ulonglong)(-dVar14 <= dVar14);
  dVar14 = (double)(~uVar11 & (ulonglong)-dVar14 | (ulonglong)dVar14 & uVar11);
  if (dVar14 < 0.0) {
    dVar14 = sqrt(dVar14);
  }
  else {
    dVar14 = SQRT(dVar14);
  }
  *(double *)(param_1 + 0x12) = dVar14;
  return;
}



// FUNCTION 1483a299f FUN_1483a299f body=859 status=ok
// SIG undefined FUN_1483a299f(void)

void FUN_1483a299f(longlong param_1,longlong *param_2,double param_3,double param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_14836b5f0(local_68,*(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144),1);
  uVar5 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
  uVar11 = 0;
  if ((uVar5 != 0) &&
     (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
    uVar3 = 1;
    uVar10 = 1;
    if (1 < (int)uVar5) {
      uVar3 = uVar5;
    }
    do {
      uVar11 = uVar3;
      if (uVar3 == uVar10) break;
      uVar4 = uVar10 >> 9;
      uVar6 = uVar10 & 0x1ff;
      uVar11 = uVar10;
      uVar10 = uVar10 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar4] +
                                         (ulonglong)uVar6 * 2) - 1U));
  }
LAB_1483a2ac3:
  if (uVar11 != uVar5) {
    FUN_1483a21d0((longlong)(int)uVar11 * 0x50 + local_68[0],param_1,uVar11);
    uVar3 = uVar11 + 1;
    if ((int)(uVar11 + 1) < (int)uVar5) {
      uVar3 = uVar5;
    }
    uVar10 = uVar11;
    do {
      uVar11 = uVar3;
      if (uVar3 - 1 == uVar10) break;
      uVar11 = uVar10 + 1;
      uVar10 = uVar11;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_1 + 0x148) +
                                           (ulonglong)(uVar11 >> 9) * 8) +
                                         (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
    goto LAB_1483a2ac3;
  }
  FUN_146bad8b2(param_2,*(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4),1);
  uVar5 = *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4);
  uVar11 = 0;
  if ((uVar5 != 0) &&
     (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x1d8) - 1U))) {
    uVar3 = 1;
    uVar10 = 1;
    if (1 < (int)uVar5) {
      uVar3 = uVar5;
    }
    do {
      uVar4 = uVar10;
      uVar11 = uVar3;
      if (uVar3 == uVar4) break;
      uVar10 = uVar4 + 1;
      uVar11 = uVar4;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x1d8))[uVar4 >> 9] +
                                         (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
  }
  do {
    uVar3 = uVar11;
    if (uVar3 == uVar5) {
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar3 >> 9) * 8);
    uVar7 = (ulonglong)((uVar3 & 0x1ff) << 4);
    lVar9 = (longlong)*(int *)(lVar8 + 8 + uVar7) * 0x50;
    lVar1 = local_68[0] + lVar9;
    if (*(uint *)(local_68[0] + 0x40 + lVar9) == uVar3) {
      lVar9 = 0;
LAB_1483a2b9a:
      dVar12 = *(double *)(lVar1 + 8 + lVar9 * 8);
    }
    else {
      lVar9 = 1;
      if (*(uint *)(lVar1 + 0x44) == uVar3) goto LAB_1483a2b9a;
      lVar9 = 2;
      dVar12 = -1.0;
      if (*(uint *)(lVar1 + 0x48) == uVar3) goto LAB_1483a2b9a;
    }
    iVar2 = *(int *)(lVar8 + 0xc + uVar7);
    if (iVar2 == -1) {
      dVar13 = 0.0;
    }
    else {
      lVar8 = (longlong)iVar2 * 0x50;
      lVar1 = local_68[0] + lVar8;
      if (*(uint *)(local_68[0] + 0x40 + lVar8) == uVar3) {
        lVar8 = 0;
      }
      else {
        lVar8 = 1;
        if (*(uint *)(lVar1 + 0x44) != uVar3) {
          lVar8 = 2;
          dVar13 = -1.0;
          if (*(uint *)(lVar1 + 0x48) != uVar3) goto LAB_1483a2bd0;
        }
      }
      dVar13 = *(double *)(lVar1 + 8 + lVar8 * 8);
    }
LAB_1483a2bd0:
    dVar12 = dVar12 + dVar13;
    dVar13 = param_4;
    if (dVar12 <= param_4) {
      dVar13 = dVar12;
    }
    *(ulonglong *)(*param_2 + (longlong)(int)uVar3 * 8) =
         -(ulonglong)(dVar12 < param_3) & (ulonglong)param_3 |
         ~-(ulonglong)(dVar12 < param_3) & (ulonglong)dVar13;
    uVar10 = uVar3 + 1;
    if ((int)(uVar3 + 1) < (int)uVar5) {
      uVar10 = uVar5;
    }
    do {
      uVar11 = uVar10;
      if (uVar10 - 1 == uVar3) break;
      uVar3 = uVar3 + 1;
      uVar11 = uVar3;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_1 + 0x1d8) +
                                           (ulonglong)(uVar3 >> 9) * 8) +
                                         (ulonglong)(uVar3 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 1483a2cfc FUN_1483a2cfc body=29 status=ok
// SIG undefined FUN_1483a2cfc(void)

undefined8 FUN_1483a2cfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483a2d1e FUN_1483a2d1e body=38 status=ok
// SIG undefined FUN_1483a2d1e(void)

undefined8 FUN_1483a2d1e(undefined8 param_1,int param_2)

{
  FUN_1483a1d22();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483a2d44 FUN_1483a2d44 body=48 status=ok
// SIG undefined FUN_1483a2d44(void)

void FUN_1483a2d44(longlong param_1)

{
  FUN_1483bee58(param_1 + 8);
  *(undefined1 *)(param_1 + 0xa8) = 1;
  FUN_1483dc200(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0xa9) = 1;
  return;
}



// FUNCTION 1483a2d74 FUN_1483a2d74 body=30 status=ok
// SIG undefined FUN_1483a2d74(void)

void FUN_1483a2d74(longlong param_1)

{
  FUN_1483dc200(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0xa9) = 1;
  return;
}



// FUNCTION 1483a2d92 FUN_1483a2d92 body=30 status=ok
// SIG undefined FUN_1483a2d92(void)

void FUN_1483a2d92(longlong param_1)

{
  FUN_1483bee58(param_1 + 8);
  *(undefined1 *)(param_1 + 0xa8) = 1;
  return;
}


