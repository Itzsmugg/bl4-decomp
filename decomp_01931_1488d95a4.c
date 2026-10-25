// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1488d95a4 FUN_1488d95a4 body=829 status=ok
// SIG undefined FUN_1488d95a4(void)

ulonglong FUN_1488d95a4(longlong param_1,int *param_2,longlong param_3)

{
  uint *puVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_78 [40];
  undefined **local_50;
  undefined *local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_3 != 0) && ((longlong)*(int *)(param_3 + 0x20) != 0)) {
    uVar8 = (ulonglong)(uint)param_2[0x3a];
    lVar11 = 0;
    uVar9 = 0;
    do {
      if (*(int *)(*(longlong *)(param_3 + 0x18) + lVar11) == *param_2) {
        puVar1 = (uint *)(*(longlong *)(param_3 + 0x18) + 8 + lVar11);
        uVar7 = (uint)uVar8;
        bVar12 = uVar7 < *puVar1;
        uVar7 = uVar7 - *puVar1;
        uVar8 = (ulonglong)uVar7;
        if (bVar12) {
          uVar8 = uVar9;
        }
        if (bVar12 || uVar7 == 0) goto LAB_1488d9755;
      }
      lVar11 = lVar11 + 0xc;
    } while ((longlong)*(int *)(param_3 + 0x20) * 0xc != lVar11);
  }
  FUN_140265f12();
  local_48 = &DAT_14cb83310;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = &PTR_FUN_14b1828b0;
  plVar10 = (longlong *)(param_2 + 2);
  FUN_140f0c707(plVar10);
  if ((*(longlong *)(param_1 + 0xb8) != 0) && ((longlong)*(int *)(param_1 + 200) != 0)) {
    lVar11 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar11) != 0) {
        cVar3 = FUN_144a8028a(&local_50,param_1 + 0xb0);
        if (cVar3 == '\0') goto LAB_1488d9720;
        break;
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)*(int *)(param_1 + 200) * 8 != lVar11);
  }
  if ((*(longlong *)(param_1 + 0xd8) != 0) && ((longlong)*(int *)(param_1 + 0xe8) != 0)) {
    lVar11 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xe0) + lVar11) != 0) {
        cVar3 = FUN_1405d595e(&local_50,param_1 + 0xd0);
        if (cVar3 != '\0') goto LAB_1488d9720;
        break;
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)*(int *)(param_1 + 0xe8) * 8 != lVar11);
  }
  lVar11 = *plVar10;
  lVar5 = *(longlong *)(param_1 + 0x80);
  if (lVar5 == 0) {
    uVar4 = FUN_14042c486();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x80) = lVar5;
  }
  lVar6 = *(longlong *)(param_1 + 0x88);
  if (lVar6 == 0) {
    if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x88) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x78));
        *(longlong *)(param_1 + 0x88) = lVar6;
        if (lVar6 != 0) goto LAB_1488d96eb;
      }
    }
LAB_1488d9804:
    lVar5 = *(longlong *)(param_1 + 0xa0);
    if (lVar5 == 0) {
      uVar4 = FUN_140428d10();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0xa0) = lVar5;
    }
    lVar6 = *(longlong *)(param_1 + 0xa8);
    if (lVar6 == 0) {
      if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x98) != 0)) {
        plVar2 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          *(undefined8 *)(param_1 + 0xa8) = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x98));
          *(longlong *)(param_1 + 0xa8) = lVar6;
          if (lVar6 != 0) goto LAB_1488d9830;
        }
      }
    }
    else {
LAB_1488d9830:
      if ((lVar11 == 0) || (lVar5 = FUN_140a2d0dc(lVar11), lVar5 != lVar6)) goto LAB_1488d9720;
    }
    if ((*(char *)(param_1 + 0xf8) != '\x01') || (cVar3 = FUN_1488d98e2(plVar10), cVar3 != '\0')) {
      uVar9 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
      goto LAB_1488d9722;
    }
  }
  else {
LAB_1488d96eb:
    if (*(char *)(param_1 + 0x90) == '\x01') {
      if ((lVar11 != 0) && (cVar3 = FUN_1457b768a(lVar11), cVar3 != '\0')) goto LAB_1488d9804;
    }
    else if (lVar6 == lVar11) goto LAB_1488d9804;
  }
LAB_1488d9720:
  uVar9 = 0;
LAB_1488d9722:
  uVar7 = uStack_38._4_4_;
  local_50 = (undefined **)&DAT_14a171d50;
  uStack_38 = (ulonglong)uStack_38._4_4_ << 0x20;
  if (uVar7 != 0) {
    FUN_140115c12(&local_40,0);
  }
  local_48 = (undefined *)0x0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
LAB_1488d9755:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1488d98e2 FUN_1488d98e2 body=209 status=ok
// SIG undefined FUN_1488d98e2(void)

ulonglong FUN_1488d98e2(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong uStack_60;
  undefined1 local_50 [40];
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 != 0) {
    if ((longlong)(int)param_1[3] != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(param_1[2] + lVar3) == 0) goto LAB_1488d9937;
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)param_1[3] * 8 != lVar3);
    }
    if (param_1[1] != 0) {
      iVar1 = FUN_1488cb758();
      if (iVar1 != 0) {
        local_68 = 0;
        uStack_60 = 0;
        local_50[0] = 0;
        local_28 = 0;
        FUN_1456bb102(local_50,0);
        iVar1 = FUN_1488d99c4(param_1,&local_68,local_50);
        uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),0 < iVar1);
        FUN_144a5ac3a(local_50);
        FUN_1488dc84c(local_68,uStack_60 & 0xffffffff);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1488d9939;
      }
    }
  }
LAB_1488d9937:
  uVar2 = 0;
LAB_1488d9939:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d99c4 FUN_1488d99c4 body=514 status=ok
// SIG undefined FUN_1488d99c4(void)

ulonglong FUN_1488d99c4(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_118 [32];
  uint *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  undefined4 local_d8;
  ulonglong local_c8;
  undefined8 local_c0;
  uint local_b8;
  undefined4 uStack_b4;
  undefined **local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = param_3;
  uVar2 = FUN_1488cb758(*param_1);
  FUN_1488d9bc8(param_2,uVar2);
  if ((longlong)*(int *)(param_1 + 3) == 0) {
    local_c8 = 0;
  }
  else {
    plVar5 = (longlong *)param_1[2];
    plVar7 = plVar5 + *(int *)(param_1 + 3);
    local_c8 = 0;
    do {
      lVar1 = *plVar5;
      if ((lVar1 != 0) && (*(char *)(lVar1 + 0x3e) == '\x01')) {
        FUN_1488cb766(*param_1,&local_b8);
        uVar3 = 0xffffffff;
        if ((longlong)(int)local_b0 != 0) {
          lVar4 = (longlong)(int)local_b0 << 3;
          lVar6 = 0;
          do {
            if (*(longlong *)(CONCAT44(uStack_b4,local_b8) + lVar6 * 8) ==
                *(longlong *)(lVar1 + 0x40)) {
              uVar3 = (uint)lVar6;
              break;
            }
            lVar6 = lVar6 + 1;
            lVar4 = lVar4 + -8;
          } while (lVar4 != 0);
        }
        if (CONCAT44(uStack_b4,local_b8) != 0) {
          FUN_1400020a8();
        }
        if (((-1 < (int)uVar3) && ((int)uVar3 < (int)param_2[1])) &&
           (lVar4 = (ulonglong)uVar3 * 0x10, *(int *)(*param_2 + 8 + lVar4) == 0)) {
          uVar3 = FUN_140b479f0(param_1,&DAT_14cb843e8,0);
          local_b8 = uVar3;
          FUN_140265f12();
          local_a8 = &DAT_14cb83310;
          local_a0 = 0;
          uStack_98 = 0;
          local_b0 = &PTR_FUN_14b1828b0;
          local_70 = 0;
          local_68 = 0x800000000;
          local_e0 = *param_2 + lVar4;
          local_f0 = 0;
          uStack_e8 = 0;
          local_d8 = 0;
          local_f8 = &local_b8;
          FUN_143da6172(*param_1,local_c0,*(undefined8 *)(lVar1 + 0x40),uVar3);
          local_c8 = (ulonglong)((int)local_c8 + (uint)(1 < *(int *)(*param_2 + 8 + lVar4)));
          FUN_141897848(&local_b8);
        }
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_c8;
}



// FUNCTION 1488d9bc8 FUN_1488d9bc8 body=130 status=ok
// SIG undefined FUN_1488d9bc8(void)

void FUN_1488d9bc8(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1488dc72e(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1488dc7b4(param_1,param_2,iVar1 - param_2);
    FUN_1488dc80e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1488d9c4b FUN_1488d9c4b body=594 status=ok
// SIG undefined FUN_1488d9c4b(void)

ulonglong FUN_1488d9c4b(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  ulonglong uStack_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined4 local_a0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*param_1 != 0) {
    if ((longlong)(int)param_1[3] != 0) {
      lVar8 = 0;
      do {
        if (*(longlong *)(param_1[2] + lVar8) == 0) goto LAB_1488d9cbd;
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)param_1[3] * 8 != lVar8);
    }
    if ((param_1[1] != 0) && (iVar2 = FUN_1488cb758(), iVar2 != 0)) {
      FUN_14100aa2a(&local_c8,param_1);
      FUN_1488d9e9e(param_3,&local_c8);
      FUN_140372a38(&local_c8);
      local_d8 = 0;
      uStack_d0 = 0;
      uVar3 = FUN_1488cb758(*param_1);
      FUN_1488d9bc8(&local_d8,uVar3);
      local_c8 = 0;
      local_a0 = 0;
      FUN_1456bb102(&local_c8,param_2);
      iVar2 = FUN_1488d99c4(param_1,&local_d8);
      FUN_144a5ac3a(&local_c8);
      uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),iVar2 != 0);
      if (iVar2 != 0) {
        lVar8 = param_1[3];
        if ((longlong)(int)lVar8 != 0) {
          lVar9 = param_1[2];
          lVar10 = 0;
          do {
            lVar1 = *(longlong *)(lVar9 + lVar10);
            if ((lVar1 != 0) && (*(char *)(lVar1 + 0x3e) == '\0')) {
              FUN_140feb76e(param_3,lVar1,0x3f800000);
            }
            lVar10 = lVar10 + 8;
          } while ((longlong)(int)lVar8 * 8 != lVar10);
        }
        iVar7 = 1;
        if (0 < iVar2) {
          uVar4 = rand();
          iVar5 = (int)((float)iVar2 * ((float)(uVar4 & 0x7fff) / 32767.0));
          iVar7 = iVar2 + -1;
          if (iVar5 < iVar2 + -1) {
            iVar7 = iVar5;
          }
          iVar7 = iVar7 + 1;
        }
        if (0 < (longlong)(int)uStack_d0) {
          lVar8 = 0;
          do {
            if ((1 < *(int *)(local_d8 + 8 + lVar8 * 2)) && (iVar7 = iVar7 + -1, iVar7 == 0)) {
              FUN_1488cb766(*param_1,&local_c8);
              lVar8 = *(longlong *)(CONCAT71(uStack_c7,local_c8) + lVar8);
              if (CONCAT71(uStack_c7,local_c8) != 0) {
                FUN_1400020a8();
              }
              if ((longlong)(int)param_1[3] != 0) {
                lVar9 = 0;
                goto LAB_1488d9e7a;
              }
              break;
            }
            lVar8 = lVar8 + 8;
          } while ((longlong)(int)uStack_d0 * 8 != lVar8);
        }
      }
      goto LAB_1488d9e1f;
    }
  }
LAB_1488d9cbd:
  uVar6 = 0;
  goto LAB_1488d9cbf;
  while (lVar9 = lVar9 + 8, (longlong)(int)param_1[3] * 8 != lVar9) {
LAB_1488d9e7a:
    if ((*(longlong *)(param_1[2] + lVar9) != 0) &&
       (*(longlong *)(*(longlong *)(param_1[2] + lVar9) + 0x40) == lVar8)) {
      FUN_1488cef56(param_3);
      break;
    }
  }
LAB_1488d9e1f:
  FUN_1488dc84c(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
LAB_1488d9cbf:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1488d9e9e FUN_1488d9e9e body=250 status=ok
// SIG undefined FUN_1488d9e9e(void)

undefined4 * FUN_1488d9e9e(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  if (param_1 == param_2) {
    (**(code **)(*(longlong *)(param_1 + 0xe) + 0x20))(param_1 + 0xe,0);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    FUN_1406022fe(param_1 + 0x12,param_2 + 0x12);
  }
  else {
    if (*(longlong *)(param_1 + 6) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 6) = 0;
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    *(undefined8 *)(param_2 + 8) = 0;
    if (*(longlong *)(param_1 + 10) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 10) = 0;
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    *(undefined8 *)(param_2 + 0xc) = 0;
    (**(code **)(*(longlong *)(param_1 + 0xe) + 0x20))(param_1 + 0xe,0);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    FUN_1406022fe(param_1 + 0x12,param_2 + 0x12);
    if (*(longlong *)(param_1 + 0x16) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
    *(undefined8 *)(param_2 + 0x16) = 0;
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = param_2[0x19];
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



// FUNCTION 1488d9f98 FUN_1488d9f98 body=1003 status=ok
// SIG undefined FUN_1488d9f98(void)

void FUN_1488d9f98(char *param_1,longlong *param_2,longlong param_3,int *param_4,undefined8 param_5)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined4 local_108;
  undefined4 local_f4;
  uint local_f0 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  undefined **local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 ***local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_f0[0] = local_f0[0] & 0xffffff00;
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_1456bb102(local_f0,param_5);
  FUN_1448729ea(param_1 + 0x70,local_88,local_f0);
  local_f4 = FUN_1405d5f74(local_88);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar9 = local_88;
    if (0x18 < local_70) {
      ppppuVar9 = (undefined8 ****)local_88[0];
    }
    (*pcVar2)(ppppuVar9);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88[0]);
  }
  FUN_144a5ac3a(local_f0);
  local_f0[0] = local_f0[0] & 0xffffff00;
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_1456bb102(local_f0,param_5);
  FUN_1448729ea(param_1 + 0x20,local_88,local_f0);
  iVar4 = FUN_1405d5f74(local_88);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar9 = local_88;
    if (0x18 < local_70) {
      ppppuVar9 = (undefined8 ****)local_88[0];
    }
    (*pcVar2)(ppppuVar9);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88[0]);
  }
  FUN_144a5ac3a(local_f0);
  if (*param_1 == '\x01') {
    if ((param_4 != (int *)0x0 && param_3 != 0) && (*param_4 != -1)) {
      local_88[0] = (undefined8 ****)0x0;
      lVar5 = FUN_1488c6656(param_3);
      if ((lVar5 != 0) && ((*(int *)(lVar5 + 0xf8) != -1 && (*(longlong *)(lVar5 + 8) != 0)))) {
        if ((longlong)*(int *)(lVar5 + 0x20) != 0) {
          lVar8 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar5 + 0x18) + lVar8) == 0) goto LAB_1488da344;
            lVar8 = lVar8 + 8;
          } while ((longlong)*(int *)(lVar5 + 0x20) * 8 != lVar8);
        }
        local_f0[0] = 1;
        local_e8 = 0;
        uStack_e0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        FUN_140265f12();
        local_b0 = &DAT_14cb83310;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = &PTR_FUN_14b1828b0;
        local_98 = 0;
        uStack_90 = 0;
        cVar3 = FUN_1488d9c4b(lVar5 + 8,param_5,local_f0);
        if (cVar3 != '\0') {
          iVar4 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
            FUN_140372f76(param_2,iVar4);
          }
          FUN_140372eb8((longlong)iVar4 * 0x68 + *param_2,local_f0);
        }
        FUN_140372a38(local_f0);
      }
    }
  }
  else if (*(undefined8 *****)(param_1 + 8) == (undefined8 ****)0x0) {
    if (0 < iVar4) {
      do {
        uVar6 = FUN_1488dc956(param_1 + 0xd8);
        uVar7 = FUN_1488dc8d8(param_1 + 0xc0);
        FUN_145e127ec(local_f0,local_f4,uVar7,uVar6);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_140372f76(param_2,iVar1);
        }
        FUN_140372eb8((longlong)iVar1 * 0x68 + *param_2,local_f0);
        FUN_140372a38(local_f0);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else {
    local_88[0] = *(undefined8 *****)(param_1 + 8);
    FUN_1446dcdd4(local_f0);
    lVar5 = FUN_146554086(local_f0);
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (0 < iVar4 && lVar5 != 0) {
      do {
        local_f0[0] = local_f0[0] & 0xffffff00;
        local_c8 = local_c8 & 0xffffffff00000000;
        FUN_14575a19a(local_f0,0);
        local_108 = 0;
        local_110 = 0;
        local_118 = 0;
        local_120 = 0;
        local_128 = 0;
        FUN_140cc60a8(param_2,lVar5,local_f4,local_f0);
        FUN_144a5ac3a(local_f0);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
LAB_1488da344:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488da384 FUN_1488da384 body=299 status=ok
// SIG undefined FUN_1488da384(void)

void FUN_1488da384(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  longlong local_158;
  ulonglong uStack_150;
  undefined1 local_148 [40];
  undefined4 local_120;
  undefined1 local_118 [216];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = param_5;
  FUN_1488d9f98(0,&local_158);
  if ((longlong)(int)uStack_150 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = (longlong)(int)uStack_150 * 0x68;
    lVar3 = local_158;
    do {
      local_148[0] = 0;
      local_120 = 0;
      FUN_1456bb102(local_148,param_5);
      FUN_140368c94(lVar3,local_118,local_148,0);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1465551ca(param_2,iVar1);
      }
      FUN_140d8ebf0((longlong)iVar1 * 0xd8 + *param_2,local_118);
      FUN_140368b56(local_118);
      FUN_144a5ac3a(local_148);
      lVar3 = lVar3 + 0x68;
      lVar4 = lVar4 + -0x68;
    } while (lVar4 != 0);
    uVar2 = uStack_150 & 0xffffffff;
  }
  FUN_14036924e(local_158,uVar2);
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488da4d7 FUN_1488da4d7 body=106 status=ok
// SIG undefined FUN_1488da4d7(void)

bool FUN_1488da4d7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_1488d90d8();
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x20) != 0)) {
    lVar2 = *(longlong *)(lVar1 + 0x18);
    lVar3 = (longlong)*(int *)(lVar1 + 0x20) * 0xf0;
    do {
      FUN_1488d9f98(lVar2,param_2,0,0,param_3);
      lVar2 = lVar2 + 0xf0;
      lVar3 = lVar3 + -0xf0;
    } while (lVar3 != 0);
  }
  return lVar1 != 0;
}



// FUNCTION 1488da592 FUN_1488da592 body=192 status=ok
// SIG undefined FUN_1488da592(void)

void FUN_1488da592(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_60;
  code *local_58;
  undefined8 **local_50;
  undefined8 local_48;
  code **local_40;
  code *local_38;
  undefined8 **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) != 0) {
    FUN_1488dcb12(param_3);
  }
  local_48 = 0;
  cVar1 = FUN_1407a7474(param_1 + 0x390,&local_48,param_2);
  if (cVar1 != '\0') {
    local_50 = &local_68;
    local_40 = &local_58;
    local_58 = FUN_143dbc7f4;
    local_30 = &local_40;
    local_38 = FUN_1488dcddc;
    local_68 = &local_48;
    local_60 = param_3;
    FUN_1488dcb42(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488da6c0 FUN_1488da6c0 body=53 status=ok
// SIG undefined FUN_1488da6c0(void)

undefined8 FUN_1488da6c0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144837462(DAT_14cb84af8,param_1);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return uVar1;
}



// FUNCTION 1488da6f6 FUN_1488da6f6 body=289 status=ok
// SIG undefined FUN_1488da6f6(void)

void FUN_1488da6f6(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_1 != (longlong *)0x0) && (lVar4 = (**(code **)(*param_1 + 0x180))(), lVar4 != 0)) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_1488da592(DAT_14cb84af8,param_2);
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) != 0) {
      FUN_1488dcea6(param_3);
    }
    lVar4 = local_58;
    lVar7 = (longlong)(int)uStack_50;
    if (lVar7 != 0) {
      lVar5 = 0;
      do {
        FUN_144a79b68(&local_48,*(undefined8 *)(lVar4 + lVar5));
        uVar3 = local_48;
        iVar1 = (int)param_3[1];
        lVar6 = (longlong)iVar1;
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_1488dca7e(param_3,iVar1);
        }
        lVar2 = *param_3;
        *(undefined8 *)(lVar2 + lVar6 * 0x18) = uVar3;
        *(undefined4 *)(lVar2 + 8 + lVar6 * 0x18) = 0xdeadbeef;
        *(undefined8 *)(lVar2 + 0x10 + lVar6 * 0x18) = 0;
        lVar5 = lVar5 + 8;
      } while (lVar7 * 8 != lVar5);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488da818 FUN_1488da818 body=135 status=ok
// SIG undefined FUN_1488da818(void)

void FUN_1488da818(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      lVar1 = FUN_1487cafbe(param_2);
      if (lVar1 != 0) {
        FUN_140009b9a(local_28,lVar1 + 0x18);
        FUN_140008f88(param_3,local_28);
        if (local_28[0] != (longlong *)0x0) {
          (**(code **)(*local_28[0] + 0x10))();
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488da8a0 FUN_1488da8a0 body=188 status=ok
// SIG undefined FUN_1488da8a0(void)

void FUN_1488da8a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  thunk_FUN_1401b21c4();
  if ((*(longlong *)(param_1 + 0x398) != 0) && (*(char *)(param_1 + 0x3a0) == '\0')) {
    lVar1 = FUN_1447210f0(param_1);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x152) == '\x02')) {
      lVar1 = FUN_144860928();
      lVar1 = FUN_1488da95c(lVar1 + 0xe60);
      if (lVar1 != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x398) + 0x720))(*(longlong **)(param_1 + 0x398),1);
        lVar2 = *(longlong *)(param_1 + 0x398);
        if (-1 < (char)*(byte *)(lVar2 + 0x9e)) {
          *(byte *)(lVar2 + 0x9e) = *(byte *)(lVar2 + 0x9e) | 0x80;
          FUN_140381836(lVar2,0);
          lVar2 = *(longlong *)(param_1 + 0x398);
        }
        *(undefined1 *)(lVar2 + 0x4f5) = 1;
        FUN_14350a424(*(longlong *)(param_1 + 0x398) + 0x590,lVar1);
        *(undefined1 *)(param_1 + 0x3a0) = 1;
      }
    }
  }
  return;
}



// FUNCTION 1488da95c FUN_1488da95c body=61 status=ok
// SIG undefined FUN_1488da95c(void)

longlong FUN_1488da95c(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_1408f3dc6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1488da99a FUN_1488da99a body=130 status=ok
// SIG undefined FUN_1488da99a(void)

undefined8 FUN_1488da99a(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  ulonglong local_28;
  
  lVar1 = DAT_14cb84f20;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb84f20 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_1400f0e12(param_1,local_34,1);
    FUN_144a7660c(param_1,local_40,1);
    uVar2 = FUN_1488daa1e(lVar1,local_40,local_34);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488daa1e FUN_1488daa1e body=176 status=ok
// SIG undefined FUN_1488daa1e(void)

longlong * FUN_1488daa1e(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14039d08e();
  local_30 = *param_3;
  local_28 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_2;
  local_38 = *(undefined4 *)(param_2 + 1);
  plVar2 = (longlong *)FUN_14050b224(param_1,&local_40,&local_30,uVar1);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
    lVar4 = FUN_14039d08e();
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
      plVar5 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        plVar5 = plVar2;
      }
      goto LAB_1488daa9c;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_1488daa9c:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5;
}



// FUNCTION 1488daafa FUN_1488daafa body=2687 status=ok
// SIG undefined FUN_1488daafa(void)

undefined4 * FUN_1488daafa(longlong param_1,undefined4 *param_2,double *param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  int iVar27;
  int iVar28;
  longlong lVar29;
  longlong *plVar30;
  longlong lVar31;
  undefined8 *puVar32;
  bool bVar33;
  float fVar34;
  undefined1 auStack_478 [32];
  undefined4 *local_458;
  double *local_450;
  longlong local_448;
  undefined8 uStack_440;
  longlong local_438;
  ulonglong uStack_430;
  double local_420;
  double local_418;
  double local_410;
  double local_408;
  undefined1 local_400;
  longlong local_3f8;
  longlong local_3f0;
  undefined4 local_3e8 [188];
  undefined8 local_f8 [15];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_478;
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
    uVar9 = DAT_14c8464e8._4_4_;
    uVar8 = (undefined4)DAT_14c8464e8;
    uVar7 = DAT_14c8464e0._4_4_;
    *param_2 = (undefined4)DAT_14c8464e0;
    param_2[1] = uVar7;
    param_2[2] = uVar8;
    param_2[3] = uVar9;
    param_2[6] = 0xffffffff;
    goto LAB_1488dabe3;
  }
  local_420 = (double)param_4;
  local_408 = param_3[1] + local_420;
  local_410 = *param_3 + local_420;
  local_418 = param_3[1] - local_420;
  local_420 = *param_3 - local_420;
  local_400 = 1;
  local_438 = 0;
  uStack_430 = 0;
  FUN_140b34eca(*(longlong *)(param_1 + 0xb8),&local_420,&local_438);
  if ((uStack_430 & 0xffffffff) == 0) {
    *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
    uVar9 = DAT_14c8464e8._4_4_;
    uVar8 = (undefined4)DAT_14c8464e8;
    uVar7 = DAT_14c8464e0._4_4_;
    *param_2 = (undefined4)DAT_14c8464e0;
    param_2[1] = uVar7;
    param_2[2] = uVar8;
    param_2[3] = uVar9;
    param_2[6] = 0xffffffff;
  }
  else {
    local_448 = 0;
    uStack_440 = 0;
    local_458 = param_2;
    local_450 = param_3;
    if ((int)uStack_430 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_430 & 0xffffffff);
    }
    FUN_1488dd1ae(&local_448);
    lVar12 = local_438;
    lVar15 = (longlong)(int)uStack_430;
    if (lVar15 != 0) {
      lVar31 = 0;
      do {
        uVar23 = uStack_440;
        if ((-1 < *(int *)(lVar12 + lVar31)) &&
           (*(int *)(lVar12 + lVar31) < *(int *)(param_1 + 0xb0))) {
          lVar29 = (longlong)(int)uStack_440;
          uVar10 = (int)uStack_440 + 1;
          uStack_440 = CONCAT44(uStack_440._4_4_,uVar10);
          if (uStack_440._4_4_ < uVar10) {
            FUN_1488dd212(&local_448,uVar23 & 0xffffffff);
          }
          FUN_14064dde8(lVar29 * 0x78 + local_448);
        }
        lVar31 = lVar31 + 4;
      } while (lVar15 * 4 != lVar31);
    }
    lVar12 = local_448;
    iVar17 = (int)uStack_440;
    uVar23 = uStack_440 & 0xffffffff;
    if (uVar23 == 0) {
LAB_1488dac90:
      *(undefined8 *)(local_458 + 4) = DAT_14c8464f0;
      uVar9 = DAT_14c8464e8._4_4_;
      uVar8 = (undefined4)DAT_14c8464e8;
      uVar7 = DAT_14c8464e0._4_4_;
      *local_458 = (undefined4)DAT_14c8464e0;
      local_458[1] = uVar7;
      local_458[2] = uVar8;
      local_458[3] = uVar9;
      iVar17 = -1;
      param_2 = local_458;
    }
    else {
      if (1 < (int)uStack_440) {
        dVar1 = *local_450;
        dVar2 = local_450[1];
        dVar3 = local_450[2];
        memset(local_3e8,0,0x2f0);
        local_3f8 = lVar12;
        local_3f0 = uVar23 * 0x78 + lVar12 + -0x78;
        fVar34 = logf((float)iVar17);
        local_3e8[0] = (int)(longlong)(fVar34 + fVar34);
        plVar30 = &local_3f8;
        do {
          puVar14 = (undefined8 *)*plVar30;
          puVar16 = (undefined8 *)plVar30[1];
          iVar17 = (int)plVar30[2];
          iVar11 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar14) >> 3) * -0x11111111;
          uVar10 = iVar11 + 1;
          puVar26 = puVar16;
          puVar22 = puVar14;
          if (iVar17 != 0) {
LAB_1488dade6:
            if (8 < (int)uVar10) {
              puVar18 = puVar14 + (ulonglong)(uVar10 >> 1) * 0xf;
              puVar13 = local_f8;
              for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
                *puVar13 = *puVar18;
                puVar18 = puVar18 + 1;
                puVar13 = puVar13 + 1;
              }
              puVar18 = puVar14;
              puVar13 = puVar14 + (ulonglong)(uVar10 >> 1) * 0xf;
              for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
                *puVar13 = *puVar18;
                puVar18 = puVar18 + 1;
                puVar13 = puVar13 + 1;
              }
              puVar18 = local_f8;
              puVar13 = puVar14;
              for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
                *puVar13 = *puVar18;
                puVar18 = puVar18 + 1;
                puVar13 = puVar13 + 1;
              }
              puVar18 = puVar26 + 0xf;
              puVar13 = puVar14;
              do {
                puVar21 = puVar13 + 0xf;
                puVar24 = puVar13 + 0xf;
                do {
                  puVar13 = puVar24;
                  puVar32 = puVar21;
                  if (puVar26 < puVar13) break;
                  pdVar4 = (double *)puVar14[9];
                  pdVar5 = (double *)puVar13[9];
                  puVar21 = puVar32 + 0xf;
                  puVar24 = puVar13 + 0xf;
                } while ((float)((pdVar5[2] - dVar3) * (pdVar5[2] - dVar3) +
                                (*pdVar5 - dVar1) * (*pdVar5 - dVar1) +
                                (pdVar5[1] - dVar2) * (pdVar5[1] - dVar2)) <=
                         (float)((pdVar4[2] - dVar3) * (pdVar4[2] - dVar3) +
                                (*pdVar4 - dVar1) * (*pdVar4 - dVar1) +
                                (pdVar4[1] - dVar2) * (pdVar4[1] - dVar2)));
                puVar21 = puVar18 + -0x1e;
                do {
                  puVar24 = puVar18;
                  puVar19 = puVar21;
                  puVar18 = puVar24 + -0xf;
                  if (puVar18 <= puVar14) break;
                  pdVar4 = (double *)puVar24[-6];
                  pdVar5 = (double *)puVar14[9];
                  puVar21 = puVar19 + -0xf;
                } while ((float)((pdVar5[2] - dVar3) * (pdVar5[2] - dVar3) +
                                (*pdVar5 - dVar1) * (*pdVar5 - dVar1) +
                                (pdVar5[1] - dVar2) * (pdVar5[1] - dVar2)) <=
                         (float)((pdVar4[2] - dVar3) * (pdVar4[2] - dVar3) +
                                (*pdVar4 - dVar1) * (*pdVar4 - dVar1) +
                                (pdVar4[1] - dVar2) * (pdVar4[1] - dVar2)));
                lVar12 = 0xf;
                puVar21 = puVar14;
                puVar20 = puVar13;
                puVar25 = local_f8;
                if (puVar18 < puVar13) goto code_r0x0001488daf8e;
                for (; lVar12 != 0; lVar12 = lVar12 + -1) {
                  *puVar25 = *puVar20;
                  puVar20 = puVar20 + 1;
                  puVar25 = puVar25 + 1;
                }
                puVar21 = puVar18;
                puVar24 = puVar13;
                for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
                  *puVar24 = *puVar21;
                  puVar21 = puVar21 + 1;
                  puVar24 = puVar24 + 1;
                }
                puVar21 = local_f8;
                puVar24 = puVar18;
                for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
                  *puVar24 = *puVar21;
                  puVar21 = puVar21 + 1;
                  puVar24 = puVar24 + 1;
                }
              } while( true );
            }
            while (puVar22 = puVar14, puVar16 = puVar14, puVar14 < puVar26) {
              while (puVar18 = puVar22, puVar16 = puVar16 + 0xf, puVar16 <= puVar26) {
                pdVar4 = (double *)puVar18[9];
                pdVar5 = (double *)puVar16[9];
                puVar22 = puVar16;
                if ((float)((pdVar5[2] - dVar3) * (pdVar5[2] - dVar3) +
                           (*pdVar5 - dVar1) * (*pdVar5 - dVar1) +
                           (pdVar5[1] - dVar2) * (pdVar5[1] - dVar2)) <=
                    (float)((pdVar4[2] - dVar3) * (pdVar4[2] - dVar3) +
                           (*pdVar4 - dVar1) * (*pdVar4 - dVar1) +
                           (pdVar4[1] - dVar2) * (pdVar4[1] - dVar2))) {
                  puVar22 = puVar18;
                }
              }
              puVar16 = puVar26 + -0xf;
              puVar22 = puVar18;
              puVar13 = local_f8;
              for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
                *puVar13 = *puVar22;
                puVar22 = puVar22 + 1;
                puVar13 = puVar13 + 1;
              }
              puVar22 = puVar26;
              for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
                *puVar18 = *puVar22;
                puVar22 = puVar22 + 1;
                puVar18 = puVar18 + 1;
              }
              puVar22 = local_f8;
              puVar18 = puVar26;
              for (lVar12 = 0xf; puVar26 = puVar16, lVar12 != 0; lVar12 = lVar12 + -1) {
                *puVar18 = *puVar22;
                puVar22 = puVar22 + 1;
                puVar18 = puVar18 + 1;
              }
            }
            goto LAB_1488db4c7;
          }
LAB_1488db041:
          if (uVar10 != 0) {
            iVar11 = (iVar11 - (iVar11 + -1 >> 0x1f)) + -1 >> 1;
            iVar17 = iVar11;
joined_r0x0001488db069:
            do {
              iVar28 = iVar17 * 2 + 1;
              if (iVar28 < (int)uVar10) {
                iVar27 = iVar17 * 2 + 2;
                if (iVar27 < (int)uVar10) {
                  pdVar4 = (double *)puVar14[(longlong)iVar27 * 0xf + 9];
                  pdVar5 = (double *)puVar14[(longlong)iVar28 * 0xf + 9];
                  if ((float)((pdVar5[2] - dVar3) * (pdVar5[2] - dVar3) +
                             (*pdVar5 - dVar1) * (*pdVar5 - dVar1) +
                             (pdVar5[1] - dVar2) * (pdVar5[1] - dVar2)) <=
                      (float)((pdVar4[2] - dVar3) * (pdVar4[2] - dVar3) +
                             (*pdVar4 - dVar1) * (*pdVar4 - dVar1) +
                             (pdVar4[1] - dVar2) * (pdVar4[1] - dVar2))) {
                    iVar28 = iVar27;
                  }
                }
                pdVar4 = (double *)puVar14[(longlong)iVar17 * 0xf + 9];
                pdVar5 = (double *)puVar14[(longlong)iVar28 * 0xf + 9];
                if ((float)((pdVar4[2] - dVar3) * (pdVar4[2] - dVar3) +
                           (*pdVar4 - dVar1) * (*pdVar4 - dVar1) +
                           (pdVar4[1] - dVar2) * (pdVar4[1] - dVar2)) <
                    (float)((pdVar5[2] - dVar3) * (pdVar5[2] - dVar3) +
                           (*pdVar5 - dVar1) * (*pdVar5 - dVar1) +
                           (pdVar5[1] - dVar2) * (pdVar5[1] - dVar2))) {
                  puVar16 = puVar14 + (longlong)iVar17 * 0xf;
                  puVar26 = local_f8;
                  for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
                    *puVar26 = *puVar16;
                    puVar16 = puVar16 + 1;
                    puVar26 = puVar26 + 1;
                  }
                  puVar16 = puVar14 + (longlong)iVar28 * 0xf;
                  puVar26 = puVar14 + (longlong)iVar17 * 0xf;
                  for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
                    *puVar26 = *puVar16;
                    puVar16 = puVar16 + 1;
                    puVar26 = puVar26 + 1;
                  }
                  puVar16 = local_f8;
                  puVar26 = puVar14 + (longlong)iVar28 * 0xf;
                  for (lVar12 = 0xf; iVar17 = iVar28, lVar12 != 0; lVar12 = lVar12 + -1) {
                    *puVar26 = *puVar16;
                    puVar16 = puVar16 + 1;
                    puVar26 = puVar26 + 1;
                  }
                  goto joined_r0x0001488db069;
                }
              }
              bVar33 = iVar11 != 0;
              iVar11 = iVar11 + -1;
              iVar17 = iVar11;
            } while (bVar33);
            if (1 < (int)uVar10) {
              puVar16 = puVar14;
              puVar26 = local_f8;
              for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
                *puVar26 = *puVar16;
                puVar16 = puVar16 + 1;
                puVar26 = puVar26 + 1;
              }
              puVar16 = puVar14 + ((ulonglong)uVar10 - 1) * 0xf;
              puVar26 = puVar14;
              for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
                *puVar26 = *puVar16;
                puVar16 = puVar16 + 1;
                puVar26 = puVar26 + 1;
              }
              puVar16 = local_f8;
              puVar26 = puVar14 + ((ulonglong)uVar10 - 1) * 0xf;
              for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
                *puVar26 = *puVar16;
                puVar16 = puVar16 + 1;
                puVar26 = puVar26 + 1;
              }
              uVar23 = (ulonglong)uVar10 - 1;
              if (uVar10 != 2) {
                do {
                  iVar17 = 0;
                  iVar28 = 1;
                  iVar11 = 0;
                  do {
                    iVar17 = iVar17 + 2;
                    iVar27 = iVar28;
                    if ((longlong)iVar17 < (longlong)uVar23) {
                      pdVar4 = (double *)puVar14[(longlong)iVar17 * 0xf + 9];
                      pdVar5 = (double *)puVar14[(longlong)iVar28 * 0xf + 9];
                      if ((float)((pdVar5[2] - dVar3) * (pdVar5[2] - dVar3) +
                                 (*pdVar5 - dVar1) * (*pdVar5 - dVar1) +
                                 (pdVar5[1] - dVar2) * (pdVar5[1] - dVar2)) <=
                          (float)((pdVar4[2] - dVar3) * (pdVar4[2] - dVar3) +
                                 (*pdVar4 - dVar1) * (*pdVar4 - dVar1) +
                                 (pdVar4[1] - dVar2) * (pdVar4[1] - dVar2))) {
                        iVar27 = iVar17;
                      }
                    }
                    pdVar4 = (double *)puVar14[(longlong)iVar11 * 0xf + 9];
                    pdVar5 = (double *)puVar14[(longlong)iVar27 * 0xf + 9];
                    if ((float)((pdVar5[2] - dVar3) * (pdVar5[2] - dVar3) +
                               (*pdVar5 - dVar1) * (*pdVar5 - dVar1) +
                               (pdVar5[1] - dVar2) * (pdVar5[1] - dVar2)) <=
                        (float)((pdVar4[2] - dVar3) * (pdVar4[2] - dVar3) +
                               (*pdVar4 - dVar1) * (*pdVar4 - dVar1) +
                               (pdVar4[1] - dVar2) * (pdVar4[1] - dVar2))) break;
                    puVar16 = puVar14 + (longlong)iVar11 * 0xf;
                    puVar26 = local_f8;
                    for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
                      *puVar26 = *puVar16;
                      puVar16 = puVar16 + 1;
                      puVar26 = puVar26 + 1;
                    }
                    puVar16 = puVar14 + (longlong)iVar27 * 0xf;
                    puVar26 = puVar14 + (longlong)iVar11 * 0xf;
                    for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
                      *puVar26 = *puVar16;
                      puVar16 = puVar16 + 1;
                      puVar26 = puVar26 + 1;
                    }
                    puVar16 = local_f8;
                    puVar26 = puVar14 + (longlong)iVar27 * 0xf;
                    for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
                      *puVar26 = *puVar16;
                      puVar16 = puVar16 + 1;
                      puVar26 = puVar26 + 1;
                    }
                    iVar17 = iVar27 * 2;
                    iVar28 = iVar27 * 2 + 1;
                    iVar11 = iVar27;
                  } while ((longlong)iVar28 < (longlong)uVar23);
                  puVar16 = puVar14;
                  puVar26 = local_f8;
                  for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
                    *puVar26 = *puVar16;
                    puVar16 = puVar16 + 1;
                    puVar26 = puVar26 + 1;
                  }
                  puVar16 = puVar14 + (uVar23 - 1) * 0xf;
                  puVar26 = puVar14;
                  for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
                    *puVar26 = *puVar16;
                    puVar16 = puVar16 + 1;
                    puVar26 = puVar26 + 1;
                  }
                  puVar16 = local_f8;
                  puVar26 = puVar14 + (uVar23 - 1) * 0xf;
                  for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
                    *puVar26 = *puVar16;
                    puVar16 = puVar16 + 1;
                    puVar26 = puVar26 + 1;
                  }
                  bVar33 = 2 < uVar23;
                  uVar23 = uVar23 - 1;
                } while (bVar33);
              }
            }
          }
LAB_1488db4c7:
          plVar30 = plVar30 + -3;
        } while (&local_3f8 <= plVar30);
      }
      param_2 = local_458;
      lVar12 = *(longlong *)(*(longlong *)(local_448 + 0x48) + 0x78);
      lVar15 = *(longlong *)(local_448 + 0x48) + 0x38;
      if (lVar12 != 0) {
        lVar15 = lVar12;
      }
      iVar17 = *(int *)(lVar15 + 8 + (longlong)*(int *)(local_448 + 0x54) * 0x10);
      if (((longlong)iVar17 < 0) || (*(int *)(param_1 + 0xb0) <= iVar17)) goto LAB_1488dac90;
      local_f8[0]._0_4_ = 0x7f7fffff;
      lVar12 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar17 * 0x78;
      lVar15 = lVar12 + 0x30;
      uVar6 = FUN_14040e062(lVar15,local_450,local_f8,&local_3f8);
      FUN_140703ce0(lVar15,param_2,uVar6,*(undefined8 *)(lVar12 + 0x58));
    }
    param_2[6] = iVar17;
    FUN_1488dd170(local_448,uStack_440 & 0xffffffff);
    if (local_448 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_438 != 0) {
    FUN_1400020a8();
  }
LAB_1488dabe3:
  if ((local_80 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
code_r0x0001488daf8e:
  for (; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar25 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar25 = puVar25 + 1;
  }
  puVar21 = puVar18;
  puVar20 = puVar14;
  for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar20 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar20 = puVar20 + 1;
  }
  puVar21 = local_f8;
  puVar20 = puVar18;
  for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar20 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar20 = puVar20 + 1;
  }
  iVar17 = iVar17 + -1;
  puVar24 = puVar24 + -0x1e;
  if ((longlong)puVar19 - (longlong)puVar22 < (longlong)puVar16 - (longlong)puVar32) {
    if (puVar13 < puVar26) {
      *plVar30 = (longlong)puVar13;
      plVar30[1] = (longlong)puVar26;
      *(int *)(plVar30 + 2) = iVar17;
      plVar30 = plVar30 + 3;
    }
    puVar16 = puVar19;
    puVar32 = puVar14;
    if (puVar18 <= puVar14 + 0xf) goto LAB_1488db4c7;
  }
  else {
    if (puVar14 + 0xf < puVar18) {
      *plVar30 = (longlong)puVar14;
      plVar30[1] = (longlong)puVar24;
      *(int *)(plVar30 + 2) = iVar17;
      plVar30 = plVar30 + 3;
    }
    puVar14 = puVar13;
    puVar24 = puVar26;
    puVar16 = puVar26;
    if (puVar26 <= puVar13) goto LAB_1488db4c7;
  }
  iVar11 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar32) >> 3) * -0x11111111;
  uVar10 = iVar11 + 1;
  puVar26 = puVar24;
  puVar22 = puVar32;
  if (iVar17 == 0) goto LAB_1488db041;
  goto LAB_1488dade6;
}



// FUNCTION 1488db57c FUN_1488db57c body=52 status=ok
// SIG undefined FUN_1488db57c(void)

undefined8 * FUN_1488db57c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488db5b6 FUN_1488db5b6 body=119 status=ok
// SIG undefined FUN_1488db5b6(void)

void FUN_1488db5b6(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_1488db62e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488db62e FUN_1488db62e body=141 status=ok
// SIG undefined FUN_1488db62e(void)

void FUN_1488db62e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x10);
  return;
}



// FUNCTION 1488db6bc FUN_1488db6bc body=135 status=ok
// SIG undefined FUN_1488db6bc(void)

void FUN_1488db6bc(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x828);
  if (param_2 <= (int)uVar1) {
    iVar5 = 10;
    if (10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (10 < *(uint *)(param_1 + 0x82c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xd0,0);
      iVar4 = (int)(uVar3 / 0xd0);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x82c) = iVar5;
    FUN_1488db744(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488db744 FUN_1488db744 body=147 status=ok
// SIG undefined FUN_1488db744(void)

void FUN_1488db744(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x820);
  if ((uint)param_3 < 0xb) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xd0);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x820,0,param_3,0xd0);
    memmove(*(void **)((longlong)param_1 + 0x820),param_1,(longlong)param_2 * 0xd0);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x820,param_2,param_3,0xd0);
  return;
}



// FUNCTION 1488db7d7 FUN_1488db7d7 body=102 status=ok
// SIG undefined FUN_1488db7d7(void)

void FUN_1488db7d7(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    FUN_140265f12();
    *(undefined **)(param_1 + 0x10) = &DAT_14cb83310;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined ***)(param_1 + 0xe) = &PTR_FUN_14b1828b0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    param_1 = param_1 + 0x1a;
  }
  return;
}



// FUNCTION 1488db83e FUN_1488db83e body=360 status=ok
// SIG undefined FUN_1488db83e(void)

void FUN_1488db83e(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
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
  lVar5 = param_1 + 0xf0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x100);
  }
  iVar6 = *(int *)(param_1 + 0x108);
  iVar3 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  if (*(int *)(param_1 + 200) - *(int *)(param_1 + 0xec) < iVar3 >> 2) {
    lVar2 = param_1 + 0xd0;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar2;
    if (*(int *)(param_1 + 0xe0) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_144a81a4c(&local_50);
      iVar6 = *(int *)(param_1 + 0xe0);
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar3 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar1, uStack_48 != lVar2)) {
      do {
        local_60 = uVar1;
        lVar4 = *(longlong *)(local_78 + 0xc0);
        if (*(longlong *)(local_78 + 0xc0) == 0) {
          lVar4 = local_78;
        }
        *(undefined4 *)(lVar5 + (longlong)*(int *)(lVar4 + 0x14 + (longlong)iVar3 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_144a81a4c(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != param_1 ||
               (CONCAT44(uStack_64,uStack_68) != lVar2 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar2 = 0;
    do {
      *(undefined4 *)(lVar5 + lVar2 * 4) = 0xffffffff;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x108));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488db9a8 FUN_1488db9a8 body=148 status=ok
// SIG undefined FUN_1488db9a8(void)

void FUN_1488db9a8(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar5 = param_1;
  }
  if (*(int *)(param_1 + 0xec) != 0) {
    *(int *)(lVar5 + (longlong)*(int *)(param_1 + 0xe8) * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0xec) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0xe8);
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 0xe8) = param_2;
  *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
  lVar5 = param_1 + 0xd0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xd8);
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1488dba3c FUN_1488dba3c body=110 status=ok
// SIG undefined FUN_1488dba3c(void)

void FUN_1488dba3c(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_1487758f2(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1488dbbee(param_1);
    return;
  }
  FUN_1488dbaaa(param_1);
  FUN_1487758f2(param_1,param_2);
  return;
}



// FUNCTION 1488dbaaa FUN_1488dbaaa body=322 status=ok
// SIG undefined FUN_1488dbaaa(void)

void FUN_1488dbaaa(longlong *param_1)

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



// FUNCTION 1488dbbee FUN_1488dbbee body=473 status=ok
// SIG undefined FUN_1488dbbee(void)

void FUN_1488dbbee(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 1488dbdc8 FUN_1488dbdc8 body=335 status=ok
// SIG undefined FUN_1488dbdc8(void)

undefined4 * FUN_1488dbdc8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1488dbf18(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_1488dbffe(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_1488dbbee(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488dbf18 FUN_1488dbf18 body=230 status=ok
// SIG undefined FUN_1488dbf18(void)

int * FUN_1488dbf18(longlong *param_1,int *param_2)

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



// FUNCTION 1488dbffe FUN_1488dbffe body=128 status=ok
// SIG undefined FUN_1488dbffe(void)

undefined8 FUN_1488dbffe(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1488dc07e((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1488dc07e FUN_1488dc07e body=114 status=ok
// SIG undefined FUN_1488dc07e(void)

void FUN_1488dc07e(longlong *param_1,int param_2)

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



// FUNCTION 1488dc0f0 FUN_1488dc0f0 body=114 status=ok
// SIG undefined FUN_1488dc0f0(void)

void FUN_1488dc0f0(longlong *param_1,int param_2)

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



// FUNCTION 1488dc162 FUN_1488dc162 body=48 status=ok
// SIG undefined FUN_1488dc162(void)

void FUN_1488dc162(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1488dc192 FUN_1488dc192 body=48 status=ok
// SIG undefined FUN_1488dc192(void)

void FUN_1488dc192(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1488dc1c2 FUN_1488dc1c2 body=122 status=ok
// SIG undefined FUN_1488dc1c2(void)

void FUN_1488dc1c2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 1488dc23c FUN_1488dc23c body=322 status=ok
// SIG undefined FUN_1488dc23c(void)

void FUN_1488dc23c(longlong *param_1)

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



// FUNCTION 1488dc380 FUN_1488dc380 body=114 status=ok
// SIG undefined FUN_1488dc380(void)

void FUN_1488dc380(longlong *param_1,int param_2)

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



// FUNCTION 1488dc3f2 FUN_1488dc3f2 body=93 status=ok
// SIG undefined FUN_1488dc3f2(void)

ulonglong FUN_1488dc3f2(uint param_1,uint param_2)

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



// FUNCTION 1488dc450 FUN_1488dc450 body=62 status=ok
// SIG undefined FUN_1488dc450(void)

void FUN_1488dc450(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488dc48e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1488dc48e FUN_1488dc48e body=93 status=ok
// SIG undefined FUN_1488dc48e(void)

ulonglong FUN_1488dc48e(uint param_1,uint param_2)

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



// FUNCTION 1488dc4ec FUN_1488dc4ec body=48 status=ok
// SIG undefined FUN_1488dc4ec(void)

void FUN_1488dc4ec(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1488dc51c FUN_1488dc51c body=141 status=ok
// SIG undefined FUN_1488dc51c(void)

void FUN_1488dc51c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,8);
  return;
}



// FUNCTION 1488dc5aa FUN_1488dc5aa body=119 status=ok
// SIG undefined FUN_1488dc5aa(void)

void FUN_1488dc5aa(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x40;
    if (0x40 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_1488dc51c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488dc622 FUN_1488dc622 body=115 status=ok
// SIG undefined FUN_1488dc622(void)

void FUN_1488dc622(char *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*param_1 == '\x03') {
    plVar2 = *(longlong **)(param_1 + 0x10);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  else if (*param_1 == '\x01') {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  *param_1 = '\x01';
  uVar3 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined8 *)(param_1 + 8) = uVar3;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,*(int *)(param_1 + 0x28) + -1,1);
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
  }
  return;
}



// FUNCTION 1488dc695 FUN_1488dc695 body=5 status=ok
// SIG undefined FUN_1488dc695(void)

void FUN_1488dc695(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x1030;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0xf00000d0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = 0x1010;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0x1010;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}



// FUNCTION 1488dc69a FUN_1488dc69a body=146 status=ok
// SIG undefined FUN_1488dc69a(void)

void FUN_1488dc69a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xf0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf0)) {
      uVar5 = uVar4 / 0xf0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488dc72e FUN_1488dc72e body=132 status=ok
// SIG undefined FUN_1488dc72e(void)

void FUN_1488dc72e(longlong param_1,int param_2)

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



// FUNCTION 1488dc7b4 FUN_1488dc7b4 body=89 status=ok
// SIG undefined FUN_1488dc7b4(void)

void FUN_1488dc7b4(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_1488dc84c(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1488dc80e FUN_1488dc80e body=62 status=ok
// SIG undefined FUN_1488dc80e(void)

void FUN_1488dc80e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488dc87a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1488dc84c FUN_1488dc84c body=45 status=ok
// SIG undefined FUN_1488dc84c(void)

void FUN_1488dc84c(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1488dc87a FUN_1488dc87a body=93 status=ok
// SIG undefined FUN_1488dc87a(void)

ulonglong FUN_1488dc87a(uint param_1,uint param_2)

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



// FUNCTION 1488dc8d8 FUN_1488dc8d8 body=124 status=ok
// SIG undefined FUN_1488dc8d8(void)

longlong FUN_1488dc8d8(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_50 = *param_1;
    FUN_1446dcdd4(local_48);
    lVar1 = thunk_FUN_140cde312(local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488dc956 FUN_1488dc956 body=124 status=ok
// SIG undefined FUN_1488dc956(void)

longlong FUN_1488dc956(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_50 = *param_1;
    FUN_1446dcdd4(local_48);
    lVar1 = thunk_FUN_14005f05e(local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488dc9d4 FUN_1488dc9d4 body=170 status=ok
// SIG undefined FUN_1488dc9d4(void)

void FUN_1488dc9d4(char *param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  cVar2 = *param_1;
  if (param_2 == (longlong *)0x0) {
    if (cVar2 != '\0') {
      if (cVar2 == '\x03') {
        plVar3 = *(longlong **)(param_1 + 0x10);
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
      else if (cVar2 == '\x01') {
        param_1[8] = '\0';
        param_1[9] = '\0';
        param_1[10] = '\0';
        param_1[0xb] = '\0';
        param_1[0xc] = '\0';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
      }
      *param_1 = '\0';
    }
  }
  else {
    if (cVar2 == '\x03') {
      plVar3 = *(longlong **)(param_1 + 0x10);
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
    else if (cVar2 == '\x01') {
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
    }
    *param_1 = '\x01';
    uVar4 = (**(code **)(*param_2 + 8))(param_2);
    *(undefined8 *)(param_1 + 8) = uVar4;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,*(int *)(param_1 + 0x28) + -1,1);
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
  }
  return;
}



// FUNCTION 1488dca7e FUN_1488dca7e body=147 status=ok
// SIG undefined FUN_1488dca7e(void)

void FUN_1488dca7e(longlong param_1,int param_2)

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



// FUNCTION 1488dcb12 FUN_1488dcb12 body=48 status=ok
// SIG undefined FUN_1488dcb12(void)

void FUN_1488dcb12(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1488dcb42 FUN_1488dcb42 body=664 status=ok
// SIG undefined FUN_1488dcb42(void)

void FUN_1488dcb42(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
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
  cVar4 = (**(code **)(*param_1 + 0x300))();
  if (cVar4 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar2 = param_1 + 0x51;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = plVar2;
    if ((int)param_1[0x54] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[0x54];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    iStack_6c = iStack_4c;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_88 = plVar1;
    if ((iStack_4c != iVar7) || (uStack_58 != plVar2)) {
      do {
        lVar5 = *local_88;
        lVar8 = (longlong)iStack_6c;
        lVar6 = *(longlong *)(lVar5 + 0x10 + lVar8 * 0x20);
        if ((lVar6 != 0) &&
           ((cVar4 = FUN_140dddae6(lVar6 + 0x48), cVar4 != '\0' &&
            (plVar3 = *(longlong **)(*(longlong *)(lVar5 + lVar8 * 0x20 + 0x10) + 0x30),
            plVar3 != (longlong *)0x0)))) {
          lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar6 = FUN_14010363a();
          if ((lVar6 != 0) &&
             ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
               lVar6 + 0x30)))) {
            (*(code *)*param_2)(param_2[1],plVar3);
          }
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
      } while (local_88 != plVar1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar2 || iStack_6c != iVar7));
    }
  }
  else {
    plVar1 = param_1 + 0x39;
    plVar2 = param_1 + 0x3b;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = plVar2;
    if ((int)param_1[0x3e] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[0x3e];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    iStack_6c = iStack_4c;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_88 = plVar1;
    if ((iStack_4c != iVar7) || (uStack_58 != plVar2)) {
      do {
        plVar3 = *(longlong **)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20);
        if (plVar3 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar6 = FUN_14010363a();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            (*(code *)*param_2)(param_2[1],plVar3);
          }
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
      } while (local_88 != plVar1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar2 || iStack_6c != iVar7));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488dcddc FUN_1488dcddc body=67 status=ok
// SIG undefined FUN_1488dcddc(void)

void FUN_1488dcddc(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488dce20 FUN_1488dce20 body=132 status=ok
// SIG undefined FUN_1488dce20(void)

void FUN_1488dce20(longlong param_1,int param_2)

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



// FUNCTION 1488dcea6 FUN_1488dcea6 body=48 status=ok
// SIG undefined FUN_1488dcea6(void)

void FUN_1488dcea6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1488dced6 FUN_1488dced6 body=113 status=ok
// SIG undefined FUN_1488dced6(void)

void FUN_1488dced6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 1488dcf48 FUN_1488dcf48 body=48 status=ok
// SIG undefined FUN_1488dcf48(void)

void FUN_1488dcf48(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1488dcf78 FUN_1488dcf78 body=48 status=ok
// SIG undefined FUN_1488dcf78(void)

void FUN_1488dcf78(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x90,8);
  }
  return;
}



// FUNCTION 1488dcfa8 FUN_1488dcfa8 body=48 status=ok
// SIG undefined FUN_1488dcfa8(void)

void FUN_1488dcfa8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1488dcfd8 FUN_1488dcfd8 body=114 status=ok
// SIG undefined FUN_1488dcfd8(void)

void FUN_1488dcfd8(longlong *param_1,int param_2)

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



// FUNCTION 1488dd04a FUN_1488dd04a body=143 status=ok
// SIG undefined FUN_1488dd04a(void)

void FUN_1488dd04a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488dd0da FUN_1488dd0da body=150 status=ok
// SIG undefined FUN_1488dd0da(void)

void FUN_1488dd0da(longlong param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar4 = param_1;
  }
  if (*(int *)(param_1 + 0x22c) != 0) {
    *(int *)(lVar4 + (longlong)*(int *)(param_1 + 0x228) * 0x10) = param_2;
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)(param_1 + 0x22c) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x228);
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x10 + 4) = uVar5;
  *(int *)(param_1 + 0x228) = param_2;
  *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
  lVar4 = param_1 + 0x210;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x218);
  }
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  bVar2 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 1488dd170 FUN_1488dd170 body=61 status=ok
// SIG undefined FUN_1488dd170(void)

void FUN_1488dd170(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x68);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-7] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1488dd1ae FUN_1488dd1ae body=99 status=ok
// SIG undefined FUN_1488dd1ae(void)

undefined8 FUN_1488dd1ae(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x78,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x8888888888888889),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x78)) {
    uVar4 = uVar2 / 0x78 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x78,8);
  }
  return uVar3;
}



// FUNCTION 1488dd212 FUN_1488dd212 body=143 status=ok
// SIG undefined FUN_1488dd212(void)

void FUN_1488dd212(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488dd2a2 FUN_1488dd2a2 body=62 status=ok
// SIG undefined FUN_1488dd2a2(void)

void FUN_1488dd2a2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488dd2e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 1488dd2e0 FUN_1488dd2e0 body=112 status=ok
// SIG undefined FUN_1488dd2e0(void)

ulonglong FUN_1488dd2e0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1488dd31a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      param_2 = param_2 / 0xc;
    }
  }
LAB_1488dd31a:
  return param_2 & 0xffffffff;
}



// FUNCTION 1488dd350 FUN_1488dd350 body=42 status=ok
// SIG undefined FUN_1488dd350(void)

undefined8 FUN_1488dd350(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      uVar2 = FUN_1488dd37a(lVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1488dd37a FUN_1488dd37a body=103 status=ok
// SIG undefined FUN_1488dd37a(void)

void FUN_1488dd37a(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145a313d8();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1488e2b5c(param_1 + 0x870,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488dd3ec FUN_1488dd3ec body=163 status=ok
// SIG undefined FUN_1488dd3ec(void)

undefined8 * FUN_1488dd3ec(longlong param_1,undefined8 *param_2,double *param_3,float param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
  }
  local_38 = (double)param_4;
  local_20 = param_3[1] + local_38;
  local_28 = *param_3 + local_38;
  local_30 = param_3[1] - local_38;
  local_38 = *param_3 - local_38;
  local_18 = 1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140b33cce(lVar1,&local_38,param_2);
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488dd490 FUN_1488dd490 body=167 status=ok
// SIG undefined FUN_1488dd490(void)

void FUN_1488dd490(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x68) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  *(undefined8 *)(param_1 + 0x78) = DAT_14c8464f0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1488dd538(*(longlong *)(param_1 + 0x1b0),param_1);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
  (**(code **)(*(longlong *)(param_1 + 0x110) + 0x20))
            (param_1 + 0x110,*(undefined8 *)(param_1 + 0x118));
                    /* WARNING: Could not recover jumptable at 0x0001488dd51f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x148) + 0x20))
            (param_1 + 0x148,*(undefined8 *)(param_1 + 0x150));
  return;
}



// FUNCTION 1488dd538 FUN_1488dd538 body=117 status=ok
// SIG undefined FUN_1488dd538(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488dd538(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    puVar2 = (undefined8 *)(param_2 + 0x1b8);
    FUN_1488dd8fc(param_1 + 0x88,puVar2);
    FUN_1488dd9bc(param_1 + 0x98,puVar2);
    plVar1 = (longlong *)*puVar2;
    if (plVar1 != (longlong *)0x0) {
      FUN_1488dd82c(plVar1);
      _DAT_14cb84dcc = _DAT_14cb84dcc + -1;
      *plVar1 = (longlong)DAT_14cb84dc0;
      DAT_14cb84dc0 = plVar1;
    }
    *puVar2 = 0;
  }
  return;
}



// FUNCTION 1488dd5ae FUN_1488dd5ae body=109 status=ok
// SIG undefined FUN_1488dd5ae(void)

undefined8 FUN_1488dd5ae(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcdd4(local_40,param_1);
  lVar1 = FUN_14050af02(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x1b8);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488dd61c FUN_1488dd61c body=8 status=ok
// SIG undefined FUN_1488dd61c(void)

undefined8 FUN_1488dd61c(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x1b8);
}



// FUNCTION 1488dd624 FUN_1488dd624 body=286 status=ok
// SIG undefined FUN_1488dd624(void)

void FUN_1488dd624(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [24];
  longlong local_48;
  ulonglong local_38;
  
  uVar2 = DAT_14cb84f20;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_2;
  FUN_1446dcdd4(local_60,&local_68);
  lVar4 = FUN_140dd1368(uVar2,local_60,0);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (lVar4 != 0) {
    FUN_1407c8f4a(lVar4,param_3);
    plVar1 = (longlong *)*param_3;
    plVar5 = plVar1;
    if ((longlong)(int)param_3[1] != 0) {
      plVar5 = plVar1 + (int)param_3[1];
      plVar7 = plVar1;
      do {
        while (cVar3 = FUN_144a8028a(*plVar7 + 0x148,param_1), plVar6 = plVar5, cVar3 == '\0') {
          while( true ) {
            plVar6 = plVar6 + -1;
            cVar3 = FUN_144a8028a(*plVar6 + 0x148,param_1);
            if (cVar3 != '\0') break;
            plVar5 = plVar7;
            if (plVar6 == plVar7) goto LAB_1488dd6c3;
          }
          *plVar7 = *plVar6;
          plVar7 = plVar7 + 1;
          plVar5 = plVar6;
          if (plVar6 == plVar7) goto LAB_1488dd6c3;
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar5);
    }
LAB_1488dd6c3:
    FUN_1488e2704(param_3,(ulonglong)((longlong)plVar5 - (longlong)plVar1) >> 3 & 0xffffffff);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488dd744 FUN_1488dd744 body=190 status=ok
// SIG undefined FUN_1488dd744(void)

void FUN_1488dd744(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_1407c937c(param_2,0);
  }
  iVar1 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_58,iVar1,*param_1,1);
  uVar2 = DAT_14cb84f20;
  FUN_1446dcdd4(local_50,local_58);
  lVar3 = FUN_140dd1368(uVar2,local_50,0);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (lVar3 != 0) {
    FUN_1407c8f4a(lVar3,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488dd82c FUN_1488dd82c body=207 status=ok
// SIG undefined FUN_1488dd82c(void)

void FUN_1488dd82c(longlong param_1)

{
  *(undefined2 **)(param_1 + 0xd8) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    FUN_140115c12(param_1 + 0xe8,0);
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  *(undefined2 **)(param_1 + 0x60) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_140115c12(param_1 + 0x70,0);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1488dd8fc FUN_1488dd8fc body=192 status=ok
// SIG undefined FUN_1488dd8fc(void)

void FUN_1488dd8fc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < 1) {
    return;
  }
  lVar7 = 0;
  bVar4 = false;
  do {
    uVar5 = (uint)lVar7;
    lVar7 = (longlong)(int)uVar5;
    lVar1 = *param_1 + lVar7 * 8;
    lVar9 = 0;
    while (*(longlong *)(lVar1 + lVar9 * 8) != *param_2) {
      lVar2 = lVar7 + lVar9;
      lVar9 = lVar9 + 1;
      if ((longlong)iVar3 <= lVar2 + 1) {
        if (!bVar4) {
          return;
        }
        goto LAB_1488dd9a8;
      }
    }
    iVar8 = (int)lVar9;
    if (~uVar5 + iVar3 != iVar8) {
      iVar6 = (~uVar5 + iVar3) - iVar8;
      if (0 < iVar6) {
        iVar6 = 1;
      }
      memmove((void *)(lVar1 + lVar9 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar6) * 8),
              (longlong)iVar6 << 3);
      iVar3 = (int)param_1[1];
    }
    lVar7 = lVar7 + lVar9;
    iVar3 = iVar3 + -1;
    *(int *)(param_1 + 1) = iVar3;
    bVar4 = true;
  } while ((int)(uVar5 + iVar8) < iVar3);
LAB_1488dd9a8:
  FUN_1488e3560(param_1);
  return;
}



// FUNCTION 1488dd9bc FUN_1488dd9bc body=192 status=ok
// SIG undefined FUN_1488dd9bc(void)

void FUN_1488dd9bc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < 1) {
    return;
  }
  lVar7 = 0;
  bVar4 = false;
  do {
    uVar5 = (uint)lVar7;
    lVar7 = (longlong)(int)uVar5;
    lVar1 = *param_1 + lVar7 * 8;
    lVar9 = 0;
    while (*(longlong *)(lVar1 + lVar9 * 8) != *param_2) {
      lVar2 = lVar7 + lVar9;
      lVar9 = lVar9 + 1;
      if ((longlong)iVar3 <= lVar2 + 1) {
        if (!bVar4) {
          return;
        }
        goto LAB_1488dda68;
      }
    }
    iVar8 = (int)lVar9;
    if (~uVar5 + iVar3 != iVar8) {
      iVar6 = (~uVar5 + iVar3) - iVar8;
      if (0 < iVar6) {
        iVar6 = 1;
      }
      memmove((void *)(lVar1 + lVar9 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar6) * 8),
              (longlong)iVar6 << 3);
      iVar3 = (int)param_1[1];
    }
    lVar7 = lVar7 + lVar9;
    iVar3 = iVar3 + -1;
    *(int *)(param_1 + 1) = iVar3;
    bVar4 = true;
  } while ((int)(uVar5 + iVar8) < iVar3);
LAB_1488dda68:
  FUN_1488e35fc(param_1);
  return;
}



// FUNCTION 1488dda7c FUN_1488dda7c body=18 status=ok
// SIG undefined FUN_1488dda7c(void)

void FUN_1488dda7c(undefined8 param_1)

{
  FUN_140dd1368(DAT_14cb84f20,param_1,0);
  return;
}



// FUNCTION 1488dda8e FUN_1488dda8e body=2269 status=ok
// SIG undefined FUN_1488dda8e(void)

ulonglong FUN_1488dda8e(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  double *pdVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  size_t sVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  char cVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  size_t _Size;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  bool bVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined1 auStack_1a8 [36];
  int local_184;
  ulonglong local_180;
  longlong *local_178;
  longlong local_170;
  longlong **local_168;
  longlong local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  uint uStack_138;
  int iStack_134;
  undefined1 local_129;
  longlong *local_128;
  int *local_120;
  undefined4 local_114;
  undefined1 *local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  int local_c4;
  longlong local_b8;
  int local_b0;
  longlong *local_a8;
  int *local_a0;
  undefined8 uStack_98;
  longlong *local_90;
  longlong **local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar11 = 0;
  if (param_2 != 0 && param_1 != 0) {
    local_110 = &local_129;
    local_d8 = 0;
    local_d0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_cc = 0xffffffff00000080;
    local_c4 = 0;
    local_b8 = 0;
    local_b0 = 0;
    FUN_143dc9c04(&local_108);
    if (((uint)((int)uStack_f0 - local_c4) < 0x10) && (FUN_1488e3698(&local_f8), local_b0 < 0x10)) {
      local_b0 = 0x10;
      FUN_1488e381e(&local_f8);
    }
    local_88 = &local_a8;
    local_a0 = (int *)0x0;
    uStack_98 = 0;
    local_a8 = &local_108;
    local_90 = &local_108;
    FUN_147f0b62e(&local_a0,0x40);
    if ((int)uStack_100._4_4_ < 0x40) {
      FUN_143dc9c04(&local_108);
    }
    uStack_158 = 0;
    local_150 = 0x7fefffffffffffff;
    uStack_148 = 0x7fefffffffffffff;
    local_140 = 0xffffffffffffffff;
    uStack_138 = uStack_138 & 0xfffffffc;
    uVar11 = 1;
    local_160 = param_1;
    if (param_1 != param_2) {
      uVar8 = uStack_100._4_4_;
      uStack_100 = (ulonglong)uStack_100._4_4_ << 0x20;
      if ((int)uVar8 < 0x40) {
        FUN_143dc9c04(&local_108);
      }
      local_178 = param_3;
      FUN_1488e3a2e(&local_f8);
      bVar25 = (longlong)uStack_98 < 0;
      uStack_98 = uStack_98 & 0xffffffff00000000;
      if (bVar25) {
        FUN_147f0b62e(&local_a0,0);
      }
      uVar11 = uStack_100;
      lVar24 = (longlong)(int)uStack_100;
      uVar8 = (int)uStack_100 + 1;
      uStack_100 = CONCAT44(uStack_100._4_4_,uVar8);
      if (uStack_100._4_4_ < uVar8) {
        FUN_143dc9d44(&local_108,uVar11 & 0xffffffff);
      }
      lVar1 = local_108 + lVar24 * 0x30;
      local_128 = &local_160;
      piVar10 = (int *)(local_108 + 0x20 + lVar24 * 0x30);
      *piVar10 = (int)local_140;
      piVar10[1] = local_140._4_4_;
      piVar10[2] = uStack_138;
      piVar10[3] = iStack_134;
      *(undefined8 *)(piVar10 + -4) = local_150;
      *(undefined8 *)(piVar10 + -2) = uStack_148;
      *(longlong *)(piVar10 + -8) = local_160;
      *(undefined8 *)(piVar10 + -6) = uStack_158;
      *piVar10 = (int)((ulonglong)(lVar1 - local_108) >> 4) * -0x55555555;
      local_120 = piVar10;
      FUN_1488e3bd2(&local_f8,&local_114);
      piVar10[-4] = 0;
      piVar10[-3] = 0;
      piVar10[-2] = 0;
      piVar10[-1] = 0x3ff00000;
      FUN_143dc9ca6(&local_a0,lVar1);
      local_180 = (ulonglong)*piVar10;
      uVar28 = (undefined4)*(undefined8 *)(piVar10 + -2);
      uVar8 = (uint)((ulonglong)*(undefined8 *)(piVar10 + -2) >> 0x20);
      lVar24 = *(longlong *)(local_108 + local_180 * 0x30);
      if (0 < (int)(uint)uStack_98) {
        do {
          iVar12 = *local_a0;
          if ((uint)uStack_98 == 1) {
            uStack_98 = (ulonglong)uStack_98._4_4_ << 0x20;
          }
          else {
            *local_a0 = local_a0[(ulonglong)(uint)uStack_98 - 1];
            iVar19 = (uint)uStack_98;
            iVar5 = (uint)uStack_98 + -1;
            uStack_98 = CONCAT44(uStack_98._4_4_,iVar5);
            if (2 < iVar19) {
              iVar19 = 0;
              iVar21 = 1;
              iVar23 = 0;
              do {
                iVar19 = iVar19 + 2;
                lVar1 = **local_88;
                iVar20 = iVar21;
                if ((iVar19 < iVar5) &&
                   (dVar26 = *(double *)(lVar1 + 0x18 + (longlong)local_a0[iVar19] * 0x30),
                   pdVar3 = (double *)(lVar1 + 0x18 + (longlong)local_a0[iVar21] * 0x30),
                   dVar26 < *pdVar3 || dVar26 == *pdVar3)) {
                  iVar20 = iVar19;
                }
                iVar19 = local_a0[iVar23];
                dVar26 = *(double *)(lVar1 + 0x18 + (longlong)iVar19 * 0x30);
                pdVar3 = (double *)(lVar1 + 0x18 + (longlong)local_a0[iVar20] * 0x30);
                if (dVar26 < *pdVar3 || dVar26 == *pdVar3) break;
                local_a0[iVar23] = local_a0[iVar20];
                local_a0[iVar20] = iVar19;
                iVar19 = iVar20 * 2;
                iVar21 = iVar20 * 2 + 1;
                iVar23 = iVar20;
              } while (iVar21 < iVar5);
            }
          }
          lVar1 = (longlong)iVar12 * 0x30;
          pbVar2 = (byte *)(*local_90 + 0x28 + lVar1);
          *pbVar2 = *pbVar2 & 0xfe;
          pbVar2 = (byte *)(local_108 + 0x28 + lVar1);
          *pbVar2 = *pbVar2 | 2;
          if (*(longlong *)(local_108 + lVar1) == param_2) {
            uVar11 = (ulonglong)*(uint *)(local_108 + lVar1 + 0x20);
            goto LAB_1488de1e8;
          }
          iVar5 = *(int *)(*(longlong *)(local_108 + lVar1) + 0xa0);
          if (0 < (longlong)iVar5) {
            lVar16 = (longlong)iVar12 * 0x30;
            lVar17 = 0;
LAB_1488ddde3:
            plVar14 = *(longlong **)(local_108 + lVar16);
            lVar18 = *(longlong *)(plVar14[0x13] + lVar17 * 8);
            if ((lVar18 != 0) && (plVar6 = *(longlong **)(lVar18 + 0x58), plVar6 != (longlong *)0x0)
               ) {
              if ((plVar6 != plVar14) &&
                 ((plVar6 != *(longlong **)(local_108 + lVar16 + 8) &&
                  ((longlong)(int)plVar14[0x14] != 0)))) {
                lVar18 = 0;
                do {
                  if (*(longlong **)(*(longlong *)(plVar14[0x13] + lVar18) + 0x58) == plVar6) {
                    local_114 = 0xffffffff;
                    uVar9 = ((uint)((ulonglong)plVar6 >> 0x14) & 0xffff ^
                            (uint)((ulonglong)plVar6 >> 4)) * -0x7a143595;
                    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
                    local_128 = plVar6;
                    piVar10 = (int *)FUN_1488e3ef0(&local_f8,uVar9 >> 0x10 ^ uVar9,&local_128,
                                                   &local_114);
                    uVar11 = uStack_100;
                    if ((longlong)*piVar10 == -1) {
                      lVar18 = (longlong)(int)uStack_100;
                      uVar9 = (int)uStack_100 + 1;
                      uStack_100 = CONCAT44(uStack_100._4_4_,uVar9);
                      if (uStack_100._4_4_ < uVar9) {
                        FUN_143dc9d44(&local_108,uVar11 & 0xffffffff);
                      }
                      lVar18 = lVar18 * 0x30;
                      plVar14 = (longlong *)(local_108 + lVar18);
                      *(longlong **)(local_108 + lVar18) = local_128;
                      *(undefined8 *)(local_108 + 8 + lVar18) = 0;
                      *(undefined8 *)(local_108 + 0x10 + lVar18) = 0x7fefffffffffffff;
                      *(undefined8 *)(local_108 + 0x18 + lVar18) = 0x7fefffffffffffff;
                      *(undefined8 *)(local_108 + 0x20 + lVar18) = 0xffffffffffffffff;
                      pbVar2 = (byte *)(local_108 + 0x28 + lVar18);
                      *pbVar2 = *pbVar2 & 0xfc;
                      iVar12 = (int)((ulonglong)((longlong)plVar14 - local_108) >> 4) * -0x55555555;
                      *(int *)(local_108 + 0x20 + lVar18) = iVar12;
                      *piVar10 = iVar12;
                    }
                    else {
                      plVar14 = (longlong *)((longlong)*piVar10 * 0x30 + local_108);
                    }
                    dVar26 = *(double *)(local_108 + 0x10 + lVar16) + 1.0;
                    uVar9 = 0;
                    if (*plVar14 != param_2) {
                      uVar9 = 0x3ff00000;
                    }
                    dVar27 = dVar26 + (double)((ulonglong)uVar9 << 0x20);
                    if (dVar27 < (double)plVar14[3]) {
                      plVar14[2] = (longlong)dVar26;
                      plVar14[3] = (longlong)dVar27;
                      plVar14[1] = *(longlong *)(local_108 + lVar1);
                      *(undefined4 *)((longlong)plVar14 + 0x24) =
                           *(undefined4 *)(local_108 + 0x20 + lVar1);
                      bVar4 = *(byte *)(plVar14 + 5);
                      *(byte *)(plVar14 + 5) = bVar4 & 0xfd;
                      if ((bVar4 & 1) == 0) {
                        FUN_143dc9ca6(&local_a0,plVar14);
                        goto LAB_1488de048;
                      }
                      if ((longlong)(int)(uint)uStack_98 == 0) goto LAB_1488de048;
                      lVar18 = (longlong)(int)(uint)uStack_98 << 2;
                      uVar11 = 0;
                      goto LAB_1488dde55;
                    }
                    break;
                  }
                  lVar18 = lVar18 + 8;
                } while ((longlong)(int)plVar14[0x14] * 8 != lVar18);
              }
              goto LAB_1488dde4b;
            }
            if (iVar5 == 0x7fffffff) goto LAB_1488dde6d;
            goto LAB_1488dde4b;
          }
LAB_1488dde6d:
        } while (0 < (int)(uint)uStack_98);
      }
      cVar15 = '\x02';
      uVar11 = local_180;
      if (((double)CONCAT44(uVar8,uVar28) == 0.0) && (!NAN((double)CONCAT44(uVar8,uVar28)))) {
LAB_1488de1e8:
        plVar14 = local_178;
        uVar13 = uVar11 & 0xffffffff;
        lVar1 = 1;
        sVar7 = 8;
        do {
          _Size = sVar7;
          lVar16 = lVar1;
          iVar12 = *(int *)(local_108 + 0x24 + (longlong)(int)uVar13 * 0x30);
          uVar13 = (ulonglong)iVar12;
          iVar5 = (int)lVar16;
          if ((((longlong)uVar13 < 0) || ((int)uStack_100 <= iVar12)) ||
             (*(longlong *)(local_108 + uVar13 * 0x30) == lVar24)) break;
          lVar1 = lVar16 + 1;
          sVar7 = _Size + 8;
        } while (iVar5 - 1U < 9999);
        FUN_1488e3a04(local_178);
        iVar12 = (int)plVar14[1];
        *(int *)(plVar14 + 1) = iVar12 + iVar5;
        if ((uint)(*(int *)((longlong)plVar14 + 0xc) - iVar12) <= iVar5 - 1U) {
          FUN_1488e40c4(plVar14);
        }
        cVar15 = (0x270e < iVar5 - 1U) * '\x02' + '\x01';
        memset((void *)((longlong)iVar12 * 8 + *plVar14),0,_Size);
        lVar24 = (longlong)(int)uVar11;
        *(undefined8 *)(*plVar14 + -8 + lVar16 * 8) = *(undefined8 *)(local_108 + lVar24 * 0x30);
        if (iVar5 != 1) {
          do {
            lVar24 = (longlong)*(int *)(local_108 + 0x24 + lVar24 * 0x30);
            *(undefined8 *)(*plVar14 + -0x10 + lVar16 * 8) =
                 *(undefined8 *)(local_108 + lVar24 * 0x30);
            lVar16 = lVar16 + -1;
          } while (1 < lVar16);
        }
      }
      uVar11 = CONCAT71((int7)(uVar11 >> 8),cVar15 == '\x01');
    }
    if (local_a0 != (int *)0x0) {
      FUN_1400020a8();
    }
    local_b0 = 0;
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_1488e2ace(&local_f8);
    if (local_108 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
  while( true ) {
    uVar11 = uVar11 + 1;
    lVar18 = lVar18 + -4;
    if (lVar18 == 0) break;
LAB_1488dde55:
    if (local_a0[uVar11] == (int)plVar14[4]) {
      if (0 < (int)(uint)uVar11) {
        local_168 = local_88;
        local_184 = local_a0[(uint)uVar11 & 0x7fffffff];
        local_170 = (longlong)local_184;
        goto LAB_1488de164;
      }
      break;
    }
  }
  goto LAB_1488de048;
  while( true ) {
    local_a0[uVar11 & 0xffffffff] = local_a0[uVar13];
    local_a0[uVar13] = local_184;
    uVar11 = uVar13;
    if (uVar22 < 2) break;
LAB_1488de164:
    uVar22 = (int)uVar11 - 1;
    uVar13 = (ulonglong)(uVar22 >> 1);
    dVar26 = *(double *)(**local_88 + 0x18 + (longlong)local_a0[uVar13] * 0x30);
    pdVar3 = (double *)(**local_88 + 0x18 + local_170 * 0x30);
    if (dVar26 < *pdVar3 || dVar26 == *pdVar3) break;
  }
LAB_1488de048:
  if ((double)((ulonglong)uVar9 << 0x20) <= (double)CONCAT44(uVar8,uVar28) &&
      (double)CONCAT44(uVar8,uVar28) != (double)((ulonglong)uVar9 << 0x20)) {
    local_180 = (ulonglong)*(uint *)(plVar14 + 4);
    uVar28 = 0;
    uVar8 = uVar9;
  }
LAB_1488dde4b:
  lVar17 = lVar17 + 1;
  if (lVar17 == iVar5) goto LAB_1488dde6d;
  goto LAB_1488ddde3;
}



// FUNCTION 1488de36c FUN_1488de36c body=344 status=ok
// SIG undefined FUN_1488de36c(void)

undefined4 FUN_1488de36c(longlong param_1,longlong *param_2,longlong *param_3)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    iVar2 = FUN_14490d72a();
    uVar3 = 0;
    if ((iVar2 == 3) || (*param_2 == 0)) goto LAB_1488de3bc;
    lVar4 = FUN_14090279a(DAT_14cb84f20,param_2);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 0x80);
      if (*(longlong *)(lVar4 + 0x80) == 0) {
        lVar5 = lVar4;
      }
      FUN_14623d36e(lVar5,&local_40);
      local_50 = (void *)0x0;
      local_48 = (int)param_3[1];
      lVar4 = (longlong)local_48;
      pvVar1 = (void *)*param_3;
      if (lVar4 == 0) {
        local_44 = 0;
      }
      else {
        FUN_1446dd670(&local_50,local_48,0);
        memcpy(local_50,pvVar1,lVar4 * 2);
      }
      pvVar1 = local_40;
      local_60 = (void *)0x0;
      local_58 = local_38;
      if ((longlong)local_38 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_38,0);
        memcpy(local_60,pvVar1,(longlong)local_38 * 2);
      }
      uVar3 = FUN_1416848a2(param_1,&local_60,&local_50);
      if (local_40 != (void *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1488de3bc;
    }
  }
  uVar3 = 0;
LAB_1488de3bc:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488de4c5 FUN_1488de4c5 body=160 status=ok
// SIG undefined FUN_1488de4c5(void)

void FUN_1488de4c5(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    iVar1 = FUN_14490d72a();
    if (iVar1 != 1) {
      iVar1 = FUN_14490d72a(param_1);
      if (iVar1 != 2) goto LAB_1488de503;
    }
    if (*param_2 != 0) {
      FUN_1446dcdd4(&local_48,param_2);
      uVar2 = FUN_14050af02(&local_48);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      local_48 = 0;
      uStack_40 = 0;
      FUN_14623d188(param_1,uVar2);
    }
  }
LAB_1488de503:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488de566 FUN_1488de566 body=135 status=ok
// SIG undefined FUN_1488de566(void)

void FUN_1488de566(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != 0) {
    iVar1 = *(int *)((undefined8 *)*param_1 + 1);
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    FUN_1446f82e2(&local_20,iVar2,*(undefined8 *)*param_1,1);
    local_28 = local_20;
    if (local_20 != 0) {
      local_38 = 0;
      uStack_30 = 0;
      FUN_1488de36c(param_2,&local_28);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488de5ee FUN_1488de5ee body=123 status=ok
// SIG undefined FUN_1488de5ee(void)

void FUN_1488de5ee(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != 0) {
    iVar1 = *(int *)((undefined8 *)*param_1 + 1);
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    FUN_1446f82e2(&local_20,iVar2,*(undefined8 *)*param_1,1);
    local_28 = local_20;
    if (local_20 != 0) {
      FUN_1488de4c5(param_2,&local_28);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488de66a FUN_1488de66a body=93 status=ok
// SIG undefined FUN_1488de66a(void)

void FUN_1488de66a(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar1 = DAT_14cb84f20;
  uVar3 = (**(code **)(*param_2 + 8))(param_2);
  uVar2 = FUN_14162bdf0(uVar1,uVar3);
  plVar4 = (longlong *)FUN_140595908(uVar1,uVar2);
  if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488de6bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x2e0))(plVar4,param_1,param_2,*(code **)(*plVar4 + 0x2e0));
    return;
  }
  return;
}



// FUNCTION 1488de6c8 FUN_1488de6c8 body=120 status=ok
// SIG undefined FUN_1488de6c8(void)

void FUN_1488de6c8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_1401144ce(param_2);
  if (cVar1 != '\0') {
    local_20 = *(undefined4 *)(param_1 + 0x68);
    local_28 = *(undefined8 *)(param_1 + 0x60);
    FUN_1418813fc(param_2);
    local_30 = *(undefined4 *)(param_1 + 0x74);
    local_38 = *(undefined8 *)(param_1 + 0x6c);
    FUN_14013eb2c(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488de742 FUN_1488de742 body=1750 status=ok
// SIG undefined FUN_1488de742(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488de742(double *param_1,double *param_2)

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
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  double dVar22;
  undefined1 auVar21 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_288 [32];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  auVar34 = _DAT_149934d80;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  auVar25 = *(undefined1 (*) [16])(param_1 + 8);
  dVar5 = auVar25._0_8_;
  dVar9 = auVar25._8_8_;
  auVar3 = *(undefined1 (*) [16])(param_1 + 10);
  dVar6 = auVar3._0_8_;
  auVar26 = *(undefined1 (*) [16])(param_2 + 8);
  dVar7 = auVar26._0_8_;
  dVar10 = auVar26._8_8_;
  auVar4 = *(undefined1 (*) [16])(param_2 + 10);
  dVar8 = auVar4._0_8_;
  auVar25 = minpd(auVar26,auVar25);
  auVar29 = minpd(auVar4,auVar3);
  auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
  auVar26._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
  iVar17 = movmskpd((int)local_c0,auVar26);
  auVar25._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
  auVar25._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
  uVar18 = movmskpd((int)param_2,auVar25);
  if ((uVar18 & 0x3fffffff) == 0 && iVar17 == 0) {
    dVar27 = *param_2;
    dVar31 = param_2[1];
    dVar32 = param_2[2];
    dVar33 = param_2[3];
    dVar13 = *param_1;
    dVar14 = param_1[1];
    dVar15 = param_1[2];
    dVar16 = param_1[3];
    dVar23 = param_1[3];
    dVar22 = param_1[3];
    dVar12 = param_1[1];
    dVar1 = param_1[1];
    dVar2 = param_1[2];
    dVar30 = param_1[2];
    dVar24 = dVar31 * dVar2 * -1.0 + dVar32 * dVar12 + dVar33 * *param_1 * 1.0 + dVar27 * dVar23;
    dVar28 = dVar27 * dVar30 * 1.0 + dVar33 * dVar1 + dVar32 * *param_1 * -1.0 + dVar31 * dVar22;
    auVar34._0_8_ =
         dVar33 * dVar2 * 1.0 + ((*param_1 * dVar31 * 1.0 + dVar32 * dVar23) - dVar27 * dVar12);
    auVar34._8_8_ =
         dVar32 * dVar30 * -1.0 + ((*param_1 * dVar27 * -1.0 + dVar33 * dVar22) - dVar31 * dVar1);
    dVar30 = param_2[4] * dVar5;
    dVar27 = param_2[5] * dVar9;
    dVar31 = param_2[6] * dVar6;
    dVar32 = param_2[7] * auVar3._8_8_;
    dVar12 = dVar27 * dVar13 - dVar14 * dVar30;
    dVar1 = dVar31 * dVar14 - dVar15 * dVar27;
    dVar2 = dVar30 * dVar15 - dVar13 * dVar31;
    dVar33 = dVar32 * dVar16 - dVar16 * dVar32;
    dVar1 = dVar1 + dVar1;
    dVar2 = dVar2 + dVar2;
    dVar12 = dVar12 + dVar12;
    dVar33 = dVar33 + dVar33;
    local_e8 = (dVar12 * dVar14 - dVar15 * dVar2) + dVar23 * dVar1 + dVar30 + param_1[4];
    dStack_e0 = (dVar1 * dVar15 - dVar12 * dVar13) + dVar22 * dVar2 + dVar27 + param_1[5];
    local_d8 = (dVar2 * dVar13 - dVar14 * dVar1) + dVar23 * dVar12 + dVar31 + param_1[6];
    dVar23 = (dVar33 * dVar16 - dVar33 * dVar16) + dVar22 * dVar33 + dVar32 + param_1[7];
  }
  else {
    dVar1 = *param_1;
    dVar2 = param_1[1];
    dVar30 = param_1[2];
    dVar27 = dVar2 + dVar2;
    dVar31 = dVar30 + dVar30;
    dVar22 = dVar1 * (dVar1 + dVar1);
    local_178 = (1.0 - (dVar22 + dVar2 * dVar27)) * dVar6;
    dVar23 = param_1[3];
    dVar32 = dVar31 * dVar23;
    dVar33 = (dVar1 + dVar1) * param_1[3];
    dVar23 = dVar27 * dVar23;
    local_188 = (dVar23 + *param_1 * dVar31) * dVar6;
    dVar22 = (DAT_149934d80._8_8_ - (dVar30 * dVar31 + dVar22)) * dVar9;
    dVar12 = (dVar27 * dVar1 + dVar32) * dVar5;
    local_198 = (dVar31 * dVar2 + dVar33) * dVar9;
    dStack_180 = (dVar31 * dVar2 - dVar33) * dVar6;
    local_1b8 = (*param_1 * dVar31 - dVar23) * dVar5;
    local_1c8._8_4_ = SUB84(dVar12,0);
    local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar30 * dVar31 + dVar2 * dVar27)) * dVar5;
    local_1c8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar22,0);
    local_1a8._0_8_ = (dVar27 * dVar1 - dVar32) * dVar9;
    local_1a8._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = param_1[4];
    dStack_160 = param_1[5];
    local_158 = param_1[6];
    uStack_150 = 0x3ff0000000000000;
    dVar12 = *param_2;
    dVar1 = param_2[1];
    dVar2 = param_2[2];
    dVar30 = dVar1 + dVar1;
    dVar27 = dVar2 + dVar2;
    dVar22 = dVar12 * (dVar12 + dVar12);
    local_1f8 = (1.0 - (dVar22 + dVar1 * dVar30)) * dVar8;
    dVar23 = param_2[3];
    dVar31 = dVar27 * dVar23;
    dVar32 = (dVar12 + dVar12) * param_2[3];
    dVar23 = dVar30 * dVar23;
    local_208 = (dVar23 + *param_2 * dVar27) * dVar8;
    dStack_200 = (dVar27 * dVar1 - dVar32) * dVar8;
    local_248 = ((double)DAT_149934d80 - (dVar2 * dVar27 + dVar1 * dVar30)) * dVar7;
    dVar22 = (DAT_149934d80._8_8_ - (dVar2 * dVar27 + dVar22)) * dVar10;
    dStack_240 = (dVar30 * dVar12 + dVar31) * dVar7;
    local_218 = (dVar27 * dVar1 + dVar32) * dVar10;
    local_238 = (*param_2 * dVar27 - dVar23) * dVar7;
    uStack_230 = 0;
    local_228._8_4_ = SUB84(dVar22,0);
    local_228._0_8_ = (dVar30 * dVar12 - dVar31) * dVar10;
    local_228._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = param_2[4];
    dStack_1e0 = param_2[5];
    local_1d8 = param_2[6];
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar29._8_8_ = -(ulonglong)(0.0 <= dVar9 * dVar10);
    auVar29._0_8_ = -(ulonglong)(0.0 <= dVar5 * dVar7);
    auVar25 = blendvpd(_DAT_149936790,auVar34,auVar29);
    uVar19 = -(ulonglong)(0.0 <= dVar6 * dVar8);
    dVar23 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
    dVar22 = auVar25._0_8_;
    local_138 = local_138 * dVar22;
    local_140 = local_140 * dVar22;
    local_148 = local_148 * dVar22;
    dVar22 = auVar25._8_8_;
    local_118 = local_118 * dVar22;
    local_120 = local_120 * dVar22;
    local_128 = dVar22 * local_128;
    local_f8 = local_f8 * dVar23;
    local_100 = local_100 * dVar23;
    local_108 = dVar23 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar23 = local_258 * local_258 + local_268 * local_268;
    dVar22 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar21._0_8_ = dVar23 + dVar22;
    auVar21._8_8_ = dVar23 + dVar22;
    auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
    auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
    auVar25 = sqrtpd(auVar21,auVar21);
    auVar25 = divpd(auVar34,auVar25);
    auVar35._0_8_ = auVar25._0_8_ * local_258;
    auVar35._8_8_ = auVar25._8_8_ * dStack_250;
    dVar24 = (double)((ulonglong)(local_268 * auVar25._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_));
    dVar28 = (double)((ulonglong)(dStack_260 * auVar25._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_));
    auVar34 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar35,auVar20);
    dVar23 = 0.0;
  }
  dVar22 = auVar3._8_8_ * auVar4._8_8_;
  *param_2 = dVar24;
  param_2[1] = dVar28;
  *(undefined1 (*) [16])(param_2 + 2) = auVar34;
  auVar4._8_4_ = SUB84(dStack_e0,0);
  auVar4._0_8_ = local_e8;
  auVar4._12_4_ = (int)((ulonglong)dStack_e0 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 4) = auVar4;
  param_2[6] = local_d8;
  param_2[7] = dVar23;
  auVar11._8_4_ = SUB84(dVar9 * dVar10,0);
  auVar11._0_8_ = dVar5 * dVar7;
  auVar11._12_4_ = (int)((ulonglong)(dVar9 * dVar10) >> 0x20);
  *(undefined1 (*) [16])(param_2 + 8) = auVar11;
  auVar3._8_4_ = SUB84(dVar22,0);
  auVar3._0_8_ = dVar6 * dVar8;
  auVar3._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 10) = auVar3;
  if ((local_c0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488dee1a FUN_1488dee1a body=266 status=ok
// SIG undefined FUN_1488dee1a(void)

void FUN_1488dee1a(double *param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  undefined1 auVar2 [16];
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
  
  dVar8 = *(double *)*param_2 * param_1[8];
  dVar9 = *(double *)(*param_2 + 8) * param_1[9];
  dVar7 = *(double *)param_2[1] * param_1[10];
  dVar4 = *param_1;
  dVar5 = param_1[1];
  dVar6 = param_1[2];
  dVar1 = param_1[3];
  dVar10 = dVar9 * dVar4 - dVar8 * dVar5;
  dVar11 = dVar7 * dVar5 - dVar9 * dVar6;
  dVar12 = dVar8 * dVar6 - dVar4 * dVar7;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  dVar3 = (dVar6 * dVar11 - dVar4 * dVar10) + param_1[3] * dVar12 + dVar9 + param_1[5];
  dVar9 = param_1[6];
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (dVar10 * dVar5 - dVar12 * dVar6) + dVar1 * dVar11 + dVar8 + param_1[4];
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *param_2 = auVar2;
  *(double *)param_2[1] = dVar10 * dVar1 + dVar7 + (dVar12 * dVar4 - dVar11 * dVar5) + dVar9;
  return;
}



// FUNCTION 1488def24 FUN_1488def24 body=592 status=ok
// SIG undefined FUN_1488def24(void)

longlong * FUN_1488def24(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  int local_50;
  int local_48;
  int local_44;
  ulonglong local_40 [2];
  ulonglong *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = (**(code **)(*param_1 + 0x300))();
  if (cVar1 == '\0') {
    FUN_1446dcdd4(&local_48,param_2);
    FUN_144a62e5c(&local_58,&local_48,(int)param_1[0x67],*(undefined4 *)((longlong)param_1 + 0x33c))
    ;
    if (local_50 != 0) {
      FUN_144a78877(local_58 & 0xffffffff,local_50);
    }
    iVar3 = FUN_1447fa34e(param_1 + 0x5d);
    if (iVar3 == -1) goto LAB_1488df0ff;
    lVar4 = (longlong)iVar3 * 0x20 + param_1[0x5d];
    if (local_30 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    if ((lVar4 != 0) &&
       (plVar5 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + 0x30), plVar5 != (longlong *)0x0)) {
      lVar4 = (**(code **)(*plVar5 + 8))(plVar5);
      lVar6 = FUN_140902b36();
      if ((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar4 + 0x38))) {
        plVar9 = (longlong *)0x0;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30) {
          plVar9 = plVar5;
        }
        goto LAB_1488df10b;
      }
    }
  }
  else {
    FUN_1446dcdd4(&local_48,param_2);
    if ((((local_48 == 0) || (local_44 == 0)) || (local_48 == DAT_14c948000)) || (local_44 < 1)) {
      local_50 = DAT_14c948620;
      local_58 = DAT_14c948618;
    }
    else {
      puVar7 = local_40;
      if (0 < local_24) {
        puVar7 = local_30;
      }
      if (local_44 != 1) {
        puVar7 = local_30;
      }
      local_58 = *puVar7;
      local_50 = (int)puVar7[1];
    }
    uVar8 = local_58 & 0xffffffff;
    if (local_50 != 0) {
      uVar2 = FUN_144a78877(uVar8,local_50);
      uVar8 = (ulonglong)uVar2;
    }
    iVar3 = FUN_1448467de(param_1 + 0x3f,uVar8,&local_58);
    if ((iVar3 != -1) &&
       (lVar4 = (longlong)iVar3 * 0x70 + param_1[0x3f], plVar5 = (longlong *)(lVar4 + 0x10),
       plVar5 != (longlong *)0x0 && lVar4 != 0)) {
      plVar5 = (longlong *)*plVar5;
      if (plVar5 == (longlong *)0x0) {
LAB_1488df02c:
        plVar9 = (longlong *)0x0;
      }
      else {
        lVar4 = (**(code **)(*plVar5 + 8))(plVar5);
        lVar6 = FUN_140902b36();
        if ((lVar6 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_1488df02c;
        plVar9 = (longlong *)0x0;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30) {
          plVar9 = plVar5;
        }
      }
      if (local_30 != (ulonglong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1488df10b;
    }
LAB_1488df0ff:
    if (local_30 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar9 = (longlong *)0x0;
LAB_1488df10b:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488df21c FUN_1488df21c body=24 status=ok
// SIG undefined FUN_1488df21c(void)

void FUN_1488df21c(undefined8 param_1,undefined8 param_2)

{
  FUN_1488dd490(param_2);
  DAT_14cb84db8 = 1;
  return;
}



// FUNCTION 1488df25c FUN_1488df25c body=292 status=ok
// SIG undefined FUN_1488df25c(void)

void FUN_1488df25c(undefined8 param_1,double *param_2,longlong param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
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
  
  FUN_1488de6c8(param_2,param_3 + 0x20);
  dVar8 = *(double *)(param_3 + 0x60) * param_2[8];
  dVar9 = *(double *)(param_3 + 0x68) * param_2[9];
  dVar7 = *(double *)(param_3 + 0x70) * param_2[10];
  dVar4 = *param_2;
  dVar5 = param_2[1];
  dVar6 = param_2[2];
  dVar1 = param_2[3];
  dVar10 = dVar9 * dVar4 - dVar8 * dVar5;
  dVar11 = dVar7 * dVar5 - dVar9 * dVar6;
  dVar12 = dVar8 * dVar6 - dVar4 * dVar7;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  dVar3 = (dVar6 * dVar11 - dVar4 * dVar10) + param_2[3] * dVar12 + dVar9 + param_2[5];
  dVar9 = param_2[6];
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (dVar10 * dVar5 - dVar12 * dVar6) + dVar1 * dVar11 + dVar8 + param_2[4];
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(param_3 + 0x60) = auVar2;
  *(double *)(param_3 + 0x70) = dVar10 * dVar1 + dVar7 + (dVar12 * dVar4 - dVar11 * dVar5) + dVar9;
  return;
}



// FUNCTION 1488df3aa FUN_1488df3aa body=29 status=ok
// SIG undefined FUN_1488df3aa(void)

undefined8 FUN_1488df3aa(longlong param_1,char param_2)

{
  if ((byte)(param_2 - 1U) < 4) {
    return *(undefined8 *)
            (param_1 + *(longlong *)(&DAT_14b4152b0 + (ulonglong)(byte)(param_2 - 1U) * 8));
  }
  return 0;
}



// FUNCTION 1488df3c8 FUN_1488df3c8 body=194 status=ok
// SIG undefined FUN_1488df3c8(void)

void FUN_1488df3c8(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0xe8,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0xf0,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x210,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x20,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x28,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x80,0,0);
                    /* WARNING: Could not recover jumptable at 0x0001488df487. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x88,0,0);
  return;
}



// FUNCTION 1488df4f6 FUN_1488df4f6 body=55 status=ok
// SIG undefined FUN_1488df4f6(void)

undefined8 FUN_1488df4f6(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1412af7d2(param_1 + 8);
  if ((lVar1 == 0) ||
     ((lVar1 = *(longlong *)(param_1 + 0x210), lVar1 != 0 && (*(char *)(lVar1 + 0xa8) == '\0')))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}



// FUNCTION 1488df52e FUN_1488df52e body=115 status=ok
// SIG undefined FUN_1488df52e(void)

undefined8
FUN_1488df52e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((((*(uint *)(param_1 + 8) & 0x10) == 0) && (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)
      ) && (plVar2 = (longlong *)FUN_1405f1c0c(lVar1), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x328))(plVar2,lVar1,param_2,param_3,param_4,param_5,param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 1488df5a2 FUN_1488df5a2 body=201 status=ok
// SIG undefined FUN_1488df5a2(void)

void FUN_1488df5a2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x80);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x9f8))(plVar2,param_2,param_3);
  }
  plVar2 = *(longlong **)(param_1 + 0x88);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x9f8))(plVar2,param_2,param_3);
  }
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar3 = 0;
  }
  if (*(char *)(lVar3 + 0x178) == '\x03') {
    FUN_1487694ee(param_1,param_2,param_3);
    return;
  }
  if (*(char *)(param_1 + 0xa8) == '\0') {
    iVar1 = *(int *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
      FUN_1488e425e((longlong *)(param_1 + 0x38),iVar1);
    }
    lVar3 = *(longlong *)(param_1 + 0x38);
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar4) = param_2;
    *(char *)(lVar3 + 8 + lVar4) = (char)param_3;
    *(undefined1 *)(lVar3 + 0xc + lVar4) = 0;
  }
  return;
}



// FUNCTION 1488df66c FUN_1488df66c body=201 status=ok
// SIG undefined FUN_1488df66c(void)

void FUN_1488df66c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x80);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0xa00))(plVar2,param_2,param_3);
  }
  plVar2 = *(longlong **)(param_1 + 0x88);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0xa00))(plVar2,param_2,param_3);
  }
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar3 = 0;
  }
  if (*(char *)(lVar3 + 0x178) == '\x03') {
    FUN_1487697a2(param_1,param_2,param_3);
    return;
  }
  if (*(char *)(param_1 + 0xa8) == '\0') {
    iVar1 = *(int *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
      FUN_1488e425e((longlong *)(param_1 + 0x38),iVar1);
    }
    lVar3 = *(longlong *)(param_1 + 0x38);
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar4) = param_2;
    *(undefined4 *)(lVar3 + 8 + lVar4) = param_3;
    *(undefined1 *)(lVar3 + 0xc + lVar4) = 2;
  }
  return;
}



// FUNCTION 1488df736 FUN_1488df736 body=208 status=ok
// SIG undefined FUN_1488df736(void)

void FUN_1488df736(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x80);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0xa08))(plVar2,param_2,param_3);
  }
  plVar2 = *(longlong **)(param_1 + 0x88);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0xa08))(plVar2,param_2,param_3);
  }
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar3 = 0;
  }
  if (*(char *)(lVar3 + 0x178) == '\x03') {
    FUN_14876964c(param_1,param_2,param_3);
    return;
  }
  if (*(char *)(param_1 + 0xa8) == '\0') {
    iVar1 = *(int *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
      FUN_1488e425e((longlong *)(param_1 + 0x38),iVar1);
    }
    lVar3 = *(longlong *)(param_1 + 0x38);
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar4) = param_2;
    *(undefined4 *)(lVar3 + 8 + lVar4) = param_3;
    *(undefined1 *)(lVar3 + 0xc + lVar4) = 1;
  }
  return;
}



// FUNCTION 1488df860 FUN_1488df860 body=26 status=ok
// SIG undefined FUN_1488df860(void)

float FUN_1488df860(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  return (float)*(double *)(lVar1 + 0x6d0);
}



// FUNCTION 1488df87a FUN_1488df87a body=88 status=ok
// SIG undefined FUN_1488df87a(void)

void FUN_1488df87a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *(byte *)(param_1 + 0x2ea) = *(byte *)(param_1 + 0x2ea) | 2;
  if ((*(ushort *)(param_1 + 0x19c) & 2) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      lVar2 = *(longlong *)(param_1 + 0x20);
    }
    else {
      lVar2 = 0;
    }
    if (*(char *)(lVar2 + 0x178) == '\x03') {
      *(ushort *)(param_1 + 0x19c) = *(ushort *)(param_1 + 0x19c) | 2;
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x20);
      }
      else {
        plVar1 = (longlong *)0x0;
      }
      *(int *)((longlong)plVar1 + 0x3fc) = *(int *)((longlong)plVar1 + 0x3fc) + 1;
                    /* WARNING: Could not recover jumptable at 0x0001488df8cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x578))();
      return;
    }
  }
  return;
}



// FUNCTION 1488df90e FUN_1488df90e body=58 status=ok
// SIG undefined FUN_1488df90e(void)

void FUN_1488df90e(longlong param_1,float param_2)

{
  longlong *plVar1;
  
  if ((*(float *)(param_1 + 0x1b8) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x1b8)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x1b8) = param_2;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    plVar1 = *(longlong **)(param_1 + 0x20);
  }
  else {
    plVar1 = (longlong *)0x0;
  }
  *(int *)((longlong)plVar1 + 0x3fc) = *(int *)((longlong)plVar1 + 0x3fc) + 1;
                    /* WARNING: Could not recover jumptable at 0x0001488df941. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x578))();
  return;
}



// FUNCTION 1488df948 FUN_1488df948 body=31 status=ok
// SIG undefined FUN_1488df948(void)

void FUN_1488df948(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x1c8);
  param_2[2] = 0;
  return;
}



// FUNCTION 1488df968 FUN_1488df968 body=58 status=ok
// SIG undefined FUN_1488df968(void)

void FUN_1488df968(longlong param_1,float param_2)

{
  longlong *plVar1;
  
  if ((*(float *)(param_1 + 0x90) == param_2) && (!NAN(*(float *)(param_1 + 0x90)) && !NAN(param_2))
     ) {
    return;
  }
  *(float *)(param_1 + 0x90) = param_2;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    plVar1 = *(longlong **)(param_1 + 0x20);
  }
  else {
    plVar1 = (longlong *)0x0;
  }
  *(int *)((longlong)plVar1 + 0x3fc) = *(int *)((longlong)plVar1 + 0x3fc) + 1;
                    /* WARNING: Could not recover jumptable at 0x0001488df99b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x578))();
  return;
}



// FUNCTION 1488df9a2 FUN_1488df9a2 body=75 status=ok
// SIG undefined FUN_1488df9a2(void)

void FUN_1488df9a2(longlong param_1,float param_2)

{
  longlong *plVar1;
  
  if (ABS(*(float *)(param_1 + 0x248) - param_2) <= 1e-08) {
    return;
  }
  *(float *)(param_1 + 0x248) = param_2;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    plVar1 = *(longlong **)(param_1 + 0x20);
  }
  else {
    plVar1 = (longlong *)0x0;
  }
  *(int *)((longlong)plVar1 + 0x3fc) = *(int *)((longlong)plVar1 + 0x3fc) + 1;
                    /* WARNING: Could not recover jumptable at 0x0001488df9e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x578))();
  return;
}



// FUNCTION 1488df9ee FUN_1488df9ee body=20 status=ok
// SIG undefined FUN_1488df9ee(void)

void FUN_1488df9ee(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x311) = *(byte *)(param_1 + 0x311) & 0xdf | param_2 << 5;
  return;
}



// FUNCTION 1488dfa02 FUN_1488dfa02 body=17 status=ok
// SIG undefined FUN_1488dfa02(void)

undefined2 FUN_1488dfa02(longlong param_1,byte param_2)

{
  return CONCAT11((char)(*(ushort *)(param_1 + 0x968) >> 8),
                  (*(ushort *)(param_1 + 0x968) >> (param_2 & 0x1f) & 1) != 0);
}



// FUNCTION 1488dfa14 FUN_1488dfa14 body=178 status=ok
// SIG undefined FUN_1488dfa14(void)

void FUN_1488dfa14(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  if (*(int *)(param_1 + 0x220) != (int)param_2[1] || *(longlong *)(param_1 + 0x218) != lVar1) {
    if (*(longlong *)(param_1 + 0x218) != lVar1 || *(int *)(param_1 + 0x220) != (int)param_2[1]) {
      *(longlong *)(param_1 + 0x218) = lVar1;
      *(int *)(param_1 + 0x220) = (int)param_2[1];
      *(undefined8 *)(param_1 + 0x228) = 0;
      lVar1 = *param_2;
    }
    if ((*(longlong *)(param_1 + 0x2f8) != lVar1) || (*(int *)(param_1 + 0x300) != (int)param_2[1]))
    {
      *(longlong *)(param_1 + 0x2f8) = lVar1;
      *(int *)(param_1 + 0x300) = (int)param_2[1];
      *(undefined8 *)(param_1 + 0x308) = 0;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      plVar2 = *(longlong **)(param_1 + 0x20);
    }
    else {
      plVar2 = (longlong *)0x0;
    }
    *(int *)((longlong)plVar2 + 0x3fc) = *(int *)((longlong)plVar2 + 0x3fc) + 1;
                    /* WARNING: Could not recover jumptable at 0x0001488dfabf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x578))();
    return;
  }
  return;
}



// FUNCTION 1488dfac6 FUN_1488dfac6 body=51 status=ok
// SIG undefined FUN_1488dfac6(void)

void FUN_1488dfac6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x138) == param_2) {
    return;
  }
  *(longlong *)(param_1 + 0x138) = param_2;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    plVar1 = *(longlong **)(param_1 + 0x20);
  }
  else {
    plVar1 = (longlong *)0x0;
  }
  *(int *)((longlong)plVar1 + 0x3fc) = *(int *)((longlong)plVar1 + 0x3fc) + 1;
                    /* WARNING: Could not recover jumptable at 0x0001488dfaf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x578))();
  return;
}



// FUNCTION 1488dfafa FUN_1488dfafa body=168 status=ok
// SIG undefined FUN_1488dfafa(void)

void FUN_1488dfafa(longlong param_1,double *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  if (((ABS((*(double *)(param_1 + 0x140) - *param_2) - DAT_14c8464e0) <= 9.999999747378752e-05) &&
      (ABS((*(double *)(param_1 + 0x148) - param_2[1]) - DAT_14c8464e8) <= 9.999999747378752e-05))
     && (ABS((*(double *)(param_1 + 0x150) - param_2[2]) - DAT_14c8464f0) <= 9.999999747378752e-05))
  {
    return;
  }
  uVar1 = *(undefined4 *)param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(double *)(param_1 + 0x150) = param_2[2];
  *(undefined4 *)(param_1 + 0x140) = uVar1;
  *(undefined4 *)(param_1 + 0x144) = uVar2;
  *(undefined4 *)(param_1 + 0x148) = uVar3;
  *(undefined4 *)(param_1 + 0x14c) = uVar4;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  else {
    plVar5 = (longlong *)0x0;
  }
  *(int *)((longlong)plVar5 + 0x3fc) = *(int *)((longlong)plVar5 + 0x3fc) + 1;
                    /* WARNING: Could not recover jumptable at 0x0001488dfb9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x578))();
  return;
}



// FUNCTION 1488dfba2 FUN_1488dfba2 body=78 status=ok
// SIG undefined FUN_1488dfba2(void)

undefined8 * FUN_1488dfba2(longlong *param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x220,0x10);
  FUN_140f5e2a8(uVar1);
  *param_2 = uVar1;
  if (param_3 != '\0') {
    (**(code **)(*param_1 + 0x2c8))(param_1,uVar1);
  }
  return param_2;
}



// FUNCTION 1488dfbf0 FUN_1488dfbf0 body=737 status=ok
// SIG undefined FUN_1488dfbf0(void)

void FUN_1488dfbf0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  int local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong *)(param_2 + 8) != *(longlong *)(param_1 + 0xb0)) ||
     (*(int *)(param_2 + 0x10) != *(int *)(param_1 + 0xb8))) {
    *(longlong *)(param_2 + 8) = *(longlong *)(param_1 + 0xb0);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  lVar10 = *(longlong *)(param_1 + 0x188);
  if (lVar10 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar10);
  }
  bVar8 = DAT_14c950c29;
  *(longlong *)(param_2 + 0xe8) = lVar10;
  lVar10 = *(longlong *)(param_1 + 400);
  if (lVar10 != 0 && (~bVar8 & 1) == 0) {
    FUN_1456cec3c(lVar10);
    bVar8 = DAT_14c950c29;
  }
  *(longlong *)(param_2 + 0xf0) = lVar10;
  *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(param_2 + 0xfc) = *(undefined4 *)(param_1 + 0x90);
  lVar10 = *(longlong *)(param_1 + 0x238);
  if ((bVar8 & 1) != 0) {
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar10 = *(longlong *)(param_1 + 0x238);
    }
  }
  *(longlong *)(param_2 + 0x158) = lVar10;
  *(undefined4 *)(param_2 + 0x160) = *(undefined4 *)(param_1 + 0x240);
  if ((*(longlong *)(param_2 + 0x100) != *(longlong *)(param_1 + 0x1c0)) ||
     (*(int *)(param_2 + 0x108) != *(int *)(param_1 + 0x1c8))) {
    *(longlong *)(param_2 + 0x100) = *(longlong *)(param_1 + 0x1c0);
    *(undefined4 *)(param_2 + 0x108) = *(undefined4 *)(param_1 + 0x1c8);
    *(undefined8 *)(param_2 + 0x110) = 0;
  }
  FUN_14118c70e(param_2 + 0x118,param_1 + 0x1d8);
  *(undefined4 *)(param_2 + 0x164) = *(undefined4 *)(param_1 + 0x230);
  FUN_143e03dd4(&local_80,*(undefined4 *)(param_1 + 0x244));
  *(undefined4 *)(param_2 + 0x170) = local_78;
  *(undefined8 *)(param_2 + 0x168) = local_80;
  if ((*(longlong *)(param_2 + 0x178) != local_70) || (*(int *)(param_2 + 0x180) != local_68)) {
    *(longlong *)(param_2 + 0x178) = local_70;
    *(int *)(param_2 + 0x180) = local_68;
    *(undefined8 *)(param_2 + 0x188) = 0;
  }
  *(undefined4 *)(param_2 + 0x1a0) = local_48;
  *(undefined4 *)(param_2 + 0x1a4) = uStack_44;
  *(undefined4 *)(param_2 + 0x1a8) = uStack_40;
  *(undefined4 *)(param_2 + 0x1ac) = uStack_3c;
  *(undefined4 *)(param_2 + 400) = local_58;
  *(undefined4 *)(param_2 + 0x194) = uStack_54;
  *(undefined4 *)(param_2 + 0x198) = uStack_50;
  *(undefined4 *)(param_2 + 0x19c) = uStack_4c;
  (**(code **)(*(longlong *)(param_2 + 0x1d8) + 0x20))(param_2 + 0x1d8,0);
  *(undefined8 *)(param_2 + 0x1e0) = *(undefined8 *)(param_1 + 0x2d0);
  FUN_1406022fe(param_2 + 0x1e8,param_1 + 0x2d8);
  *(undefined2 *)(param_2 + 0x208) = *(undefined2 *)(param_1 + 0x19e);
  iVar2 = *(int *)(param_1 + 0x960);
  if ((longlong)iVar2 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x958);
    lVar12 = 0;
    do {
      if (*(char *)(*(longlong *)(lVar10 + lVar12) + 0x222) == '\x01') {
        iVar3 = *(int *)(param_2 + 0x200);
        *(uint *)(param_2 + 0x200) = iVar3 + 1U;
        if (*(uint *)(param_2 + 0x204) < iVar3 + 1U) {
          FUN_1408da40e((longlong *)(param_2 + 0x1f8),iVar3);
        }
        lVar9 = *(longlong *)(param_2 + 0x1f8);
        lVar11 = (longlong)iVar3 * 0x20;
        *(undefined8 *)(lVar9 + lVar11) = *(undefined8 *)(lVar10 + lVar12);
        lVar4 = *(longlong *)(lVar10 + 8 + lVar12);
        *(longlong *)(lVar9 + 8 + lVar11) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        lVar9 = lVar9 + lVar11;
        puVar1 = (undefined4 *)(lVar10 + 0x10 + lVar12);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        *(undefined4 *)(lVar9 + 0x10) = *puVar1;
        *(undefined4 *)(lVar9 + 0x14) = uVar5;
        *(undefined4 *)(lVar9 + 0x18) = uVar6;
        *(undefined4 *)(lVar9 + 0x1c) = uVar7;
      }
      lVar12 = lVar12 + 0x20;
    } while ((longlong)iVar2 * 0x20 != lVar12);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488dfed2 FUN_1488dfed2 body=314 status=ok
// SIG undefined FUN_1488dfed2(void)

void FUN_1488dfed2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x6b8) = param_2;
  if ((param_2 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(param_2);
    param_2 = *(longlong *)(param_1 + 0x6b8);
  }
  *(longlong *)(param_1 + 0x6c0) = param_2;
  if (param_2 != 0) {
    local_28 = param_1;
    if ((param_1 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(param_1);
    }
    FUN_141446f44(param_2 + 0x6c8,&local_28);
    lVar4 = *(longlong *)(param_1 + 0x6c0);
    iVar3 = 1;
    lVar1 = *(longlong *)(lVar4 + 0x6b8);
    bVar2 = DAT_14c950c29;
    if (*(longlong *)(lVar4 + 0x6b8) == 0) {
      if (lVar4 == 0) goto LAB_1488dffba;
    }
    else {
      do {
        lVar4 = lVar1;
        if ((bVar2 & 1) != 0) {
          FUN_1456cec3c(lVar4);
          bVar2 = DAT_14c950c29;
        }
        *(longlong *)(param_1 + 0x6c0) = lVar4;
        iVar3 = iVar3 + 1;
        lVar1 = *(longlong *)(lVar4 + 0x6b8);
      } while (*(longlong *)(lVar4 + 0x6b8) != 0);
    }
    if (*(int *)(*(longlong *)(lVar4 + 0x78) + 0x204) <= iVar3) {
      *(byte *)(param_1 + 0x2ea) = *(byte *)(param_1 + 0x2ea) | 8;
    }
  }
LAB_1488dffba:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488e0010 FUN_1488e0010 body=358 status=ok
// SIG undefined FUN_1488e0010(void)

void FUN_1488e0010(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < (longlong)*(int *)(param_1 + 0x710)) {
    lVar4 = *(longlong *)(param_1 + 0x708);
    iVar6 = 1;
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(lVar4 + 8 + lVar5);
      lVar8 = param_2;
      if ((lVar1 == param_2) || (lVar8 = lVar1, *(longlong *)(lVar4 + 0x10 + lVar5) == param_2)) {
        if (lVar8 != 0) {
          local_40 = 0;
          FUN_14485c47a(&local_40,param_1);
          local_38 = DAT_14cb850a0;
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 8 + lVar5);
          (**(code **)(*plVar2 + 0xa88))(plVar2,&local_40);
          lVar4 = *(longlong *)(param_1 + 0x708);
        }
        if (*(longlong *)(lVar4 + 0x10 + lVar5) != 0) {
          local_40 = 0;
          FUN_14485c47a(&local_40,param_1);
          local_38 = DAT_14cb850a0;
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x10 + lVar5);
          (**(code **)(*plVar2 + 0xa88))(plVar2,&local_40);
        }
        iVar3 = *(int *)(param_1 + 0x710);
        iVar6 = iVar3 - iVar6;
        if (iVar6 != 0) {
          iVar7 = 1;
          if (iVar6 < 1) {
            iVar7 = iVar6;
          }
          memmove((void *)(lVar5 + *(longlong *)(param_1 + 0x708)),
                  (void *)(*(longlong *)(param_1 + 0x708) + (longlong)(iVar3 - iVar7) * 0x18),
                  (longlong)iVar7 * 0x18);
          iVar3 = *(int *)(param_1 + 0x710);
        }
        *(int *)(param_1 + 0x710) = iVar3 + -1;
        FUN_1488e42e4((longlong *)(param_1 + 0x708));
        break;
      }
      lVar5 = lVar5 + 0x18;
      iVar6 = iVar6 + 1;
    } while ((longlong)*(int *)(param_1 + 0x710) * 0x18 != lVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488e0178 FUN_1488e0178 body=193 status=ok
// SIG undefined FUN_1488e0178(void)

void FUN_1488e0178(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  if (0 < (longlong)*(int *)(param_1 + 0x700)) {
    lVar1 = *(longlong *)(param_1 + 0x6f8);
    iVar4 = 1;
    lVar3 = 0;
    do {
      if (*(longlong **)(lVar1 + lVar3) == param_2) {
        (**(code **)(*param_2 + 0xa88))(param_2,lVar1 + lVar3 + 0x14);
        iVar2 = *(int *)(param_1 + 0x700);
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar3 + *(longlong *)(param_1 + 0x6f8)),
                  (void *)(*(longlong *)(param_1 + 0x6f8) + (longlong)(iVar2 - iVar5) * 0x28),
                  (longlong)iVar5 * 0x28);
          iVar2 = *(int *)(param_1 + 0x700);
        }
        *(int *)(param_1 + 0x700) = iVar2 + -1;
        FUN_1488e461c((longlong *)(param_1 + 0x6f8));
        return;
      }
      lVar3 = lVar3 + 0x28;
      iVar4 = iVar4 + 1;
    } while ((longlong)*(int *)(param_1 + 0x700) * 0x28 != lVar3);
  }
  return;
}



// FUNCTION 1488e023a FUN_1488e023a body=518 status=ok
// SIG undefined FUN_1488e023a(void)

void FUN_1488e023a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (0 < (longlong)*(int *)(param_1 + 0x700)) {
    uVar9 = (longlong)*(int *)(param_1 + 0x700);
    do {
      uVar10 = uVar9 - 1;
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x6f8) + uVar10 * 0x28);
      uVar5 = *(uint *)(param_2 + 1);
      if ((int)plVar1[2] == 0) {
        if ((int)uVar5 < 1) goto LAB_1488e0371;
        lVar11 = *param_2 + (ulonglong)uVar5 * 0x100 + -0x100;
LAB_1488e0307:
        if (((lVar11 == 0) ||
            ((lVar7 = FUN_14485cccc(lVar11 + 0xb8), lVar7 == 0 &&
             (lVar7 = FUN_14479d2ce(lVar11 + 0xd8), lVar7 == 0)))) ||
           ((plVar1[1] != 0 && (lVar11 = FUN_14479d2ce(lVar11 + 0xb0), plVar1[1] != lVar11))))
        goto LAB_1488e0371;
      }
      else {
        if (1 < (int)uVar5) {
          lVar11 = 0;
          lVar7 = 0;
          do {
            lVar2 = *param_2;
            if (((*(byte *)(lVar2 + 0xad + lVar11) & 1) != 0) &&
               (((lVar6 = FUN_14485cccc(lVar2 + lVar11 + 0xb8), lVar6 != 0 ||
                 (lVar6 = FUN_14479d2ce(lVar2 + lVar11 + 0xd8), lVar6 != 0)) &&
                (*(int *)(lVar6 + 0xc) == (int)plVar1[2])))) {
              lVar11 = lVar11 + *param_2;
              goto LAB_1488e0307;
            }
            lVar7 = lVar7 + 1;
            lVar11 = lVar11 + 0x100;
          } while (lVar7 < (longlong)(int)param_2[1] + -1);
        }
LAB_1488e0371:
        if (*plVar1 != 0) {
          lVar11 = FUN_140288b94();
          plVar3 = (longlong *)*plVar1;
          if (((plVar3 != (longlong *)0x0) && (lVar11 != 0)) &&
             ((lVar7 = plVar3[2], lVar7 != 0 &&
              ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar7 + 0x38) &&
               (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
                == lVar11 + 0x30)))))) {
            (**(code **)(*plVar3 + 0xa88))(plVar3,(longlong)plVar1 + 0x14);
            (**(code **)(*plVar3 + 0xa68))(plVar3);
          }
        }
        uVar5 = *(uint *)(param_1 + 0x700);
        if (uVar9 != uVar5) {
          iVar8 = uVar5 - (int)uVar9;
          if (0 < iVar8) {
            iVar8 = 1;
          }
          memmove((void *)(*(longlong *)(param_1 + 0x6f8) + uVar10 * 0x28),
                  (void *)(*(longlong *)(param_1 + 0x6f8) + (longlong)(int)(uVar5 - iVar8) * 0x28),
                  (longlong)iVar8 * 0x28);
          uVar5 = *(uint *)(param_1 + 0x700);
        }
        *(uint *)(param_1 + 0x700) = uVar5 - 1;
        FUN_1488e461c((longlong *)(param_1 + 0x6f8));
      }
      bVar4 = 1 < (longlong)uVar9;
      uVar9 = uVar10;
    } while (bVar4);
  }
  return;
}



// FUNCTION 1488e0440 FUN_1488e0440 body=351 status=ok
// SIG undefined FUN_1488e0440(void)

void FUN_1488e0440(longlong param_1,longlong *param_2,void *param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0x720) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x718) + 0xe8;
    lVar6 = (longlong)*(int *)(param_1 + 0x720) * 0x120;
    do {
      if (*(longlong *)(lVar7 + -0xe8) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(lVar7 + -0xe0);
      }
      if (plVar5 == param_2) {
        lVar3 = FUN_14479d2ce(lVar7);
        lVar4 = FUN_14479d2ce((longlong)param_3 + 0xd8);
        if (lVar3 == lVar4) {
          cVar1 = *(char *)(lVar7 + 0x30);
          memcpy((void *)(lVar7 + -0xd8),param_3,0x100);
          *(longlong *)(lVar7 + 0x28) = DAT_14c872be0;
          if (cVar1 != '\x02') {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0001488e0518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_2 + 0x20))(param_2,param_1,param_3);
          return;
        }
      }
      lVar7 = lVar7 + 0x120;
      lVar6 = lVar6 + -0x120;
    } while (lVar6 != 0);
  }
  plVar5 = (longlong *)FUN_1488e0f20(param_1 + 0x718);
  lVar6 = (**(code **)(*param_2 + 8))(param_2);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar6);
  }
  *plVar5 = lVar6;
  plVar5[1] = (longlong)param_2;
  memcpy(plVar5 + 2,param_3,0x100);
  plVar5[0x22] = DAT_14c872be0;
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_1,param_3);
  *(undefined1 *)(plVar5 + 0x23) = uVar2;
  return;
}



// FUNCTION 1488e05a4 FUN_1488e05a4 body=550 status=ok
// SIG undefined FUN_1488e05a4(void)

void FUN_1488e05a4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  if (*param_2 != 0) {
    FUN_1488df87a();
    *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x31c);
    lVar1 = param_1 + 0x128;
    *(undefined8 *)(param_1 + 0x174) = 0;
    FUN_1412bdb18(lVar1,param_2);
    FUN_143dbfcf8(lVar1);
    FUN_1404d6550(lVar1,&local_38);
    *(undefined8 *)(param_1 + 0x4d0) = local_38;
    FUN_1404d669e(lVar1,&local_38);
    *(undefined8 *)(param_1 + 0x4b0) = local_28;
    *(undefined8 *)(param_1 + 0x4a0) = local_38;
    *(ulonglong *)(param_1 + 0x4a8) = CONCAT44(uStack_2c,uStack_30);
    *(undefined4 *)(param_1 + 0x488) = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x48c) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x490) = uStack_30;
    *(undefined4 *)(param_1 + 0x494) = uStack_2c;
    *(undefined8 *)(param_1 + 0x498) = local_28;
    if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x1db) & 2) == 0) {
      dVar2 = *(double *)(param_1 + 0x498) - *(double *)(param_1 + 0x3c8);
      dVar7 = *(double *)(param_1 + 0x490) - *(double *)(param_1 + 0x3c0);
      dVar5 = *(double *)(param_1 + 0x488) - *(double *)(param_1 + 0x3b8);
      dVar9 = dVar2 * dVar2 + dVar5 * dVar5 + dVar7 * dVar7;
      if (((dVar9 != 1.0) || (dVar6 = dVar5, dVar8 = dVar7, dVar3 = dVar2, NAN(dVar9))) &&
         (dVar6 = DAT_14c8464e0, dVar8 = DAT_14c8464e8, dVar3 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar9)) {
        dVar9 = 1.0 / SQRT(dVar9);
        dVar6 = dVar5 * dVar9;
        dVar8 = dVar7 * dVar9;
        dVar3 = dVar2 * dVar9;
      }
      *(double *)(param_1 + 0x4b8) = dVar6;
      *(double *)(param_1 + 0x4c0) = dVar8;
      *(double *)(param_1 + 0x4c8) = dVar3;
    }
    else {
      FUN_1404d6d22(lVar1,&local_38);
      local_38 = 0;
      FUN_144a76660(&local_38,&local_50);
      *(ulonglong *)(param_1 + 0x4b8) = local_50 ^ 0x8000000000000000;
      *(ulonglong *)(param_1 + 0x4c0) = uStack_48 ^ 0x8000000000000000;
      *(ulonglong *)(param_1 + 0x4c8) = local_40 ^ 0x8000000000000000;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      plVar4 = *(longlong **)(param_1 + 0x20);
    }
    else {
      plVar4 = (longlong *)0x0;
    }
    *(int *)((longlong)plVar4 + 0x3fc) = *(int *)((longlong)plVar4 + 0x3fc) + 1;
    (**(code **)(*plVar4 + 0x578))();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488e07cc FUN_1488e07cc body=9 status=ok
// SIG undefined FUN_1488e07cc(void)

undefined4 FUN_1488e07cc(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x198);
}



// FUNCTION 1488e07d6 FUN_1488e07d6 body=127 status=ok
// SIG undefined FUN_1488e07d6(void)

undefined8 FUN_1488e07d6(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((((param_2 != 0) && (*(char *)(param_1[0xf] + 0x1da) != '\0')) &&
      (lVar3 = FUN_14069ce20(param_2), lVar3 != 0)) &&
     (cVar1 = FUN_147f5dd16(lVar3,param_1[0x31]), cVar1 != '\0')) {
    if ((*(byte *)(param_1[0xf] + 0x1db) & 4) == 0) {
      uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
      iVar2 = FUN_1412d1158(param_1 + 0x69,param_2,uVar4);
      if (iVar2 == 0) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1488e0856 FUN_1488e0856 body=184 status=ok
// SIG undefined FUN_1488e0856(void)

ulonglong FUN_1488e0856(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  longlong lVar7;
  
  if (*(char *)(param_1 + 0x690) == '\0') {
    *(undefined1 *)(param_1 + 0x690) = 1;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (*(longlong *)(param_1 + 0x128) != param_2) {
      iVar1 = *(int *)(param_1 + 0x6d0);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x6c8);
        lVar7 = 0;
        bVar4 = DAT_14c950c29;
        do {
          lVar3 = *(longlong *)(lVar2 + lVar7);
          if ((lVar3 != 0 & bVar4) == 1) {
            FUN_1456cec3c(lVar3);
LAB_1488e08db:
            cVar5 = FUN_1488e0856(lVar3,param_2);
            bVar4 = DAT_14c950c29;
            if (cVar5 != '\0') goto LAB_1488e08f4;
          }
          else if (lVar3 != 0) goto LAB_1488e08db;
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar1 * 8 != lVar7);
      }
      uVar6 = 0;
    }
LAB_1488e08f4:
    *(undefined1 *)(param_1 + 0x690) = 0;
  }
  else {
    uVar6 = 0;
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1488e090e FUN_1488e090e body=62 status=ok
// SIG undefined FUN_1488e090e(void)

undefined8 * FUN_1488e090e(undefined8 *param_1)

{
  undefined1 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 4) = 8;
  FUN_14485c47a(param_1 + 1);
  *(undefined1 *)(param_1 + 5) = 7;
  uVar1 = 7;
  if ((DAT_14c9a8cf4 & 0x20) != 0) {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar1;
  return param_1;
}



// FUNCTION 1488e094c FUN_1488e094c body=254 status=ok
// SIG undefined FUN_1488e094c(void)

undefined8
FUN_1488e094c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14ac8b4c0;
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
  *local_48 = &PTR_FUN_14b414b80;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140e0aeb0(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e0a4c FUN_1488e0a4c body=1198 status=ok
// SIG undefined FUN_1488e0a4c(void)

void FUN_1488e0a4c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_2a8 [32];
  longlong local_288;
  undefined **local_280;
  longlong local_278;
  int local_270;
  undefined8 local_268;
  longlong lStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218;
  undefined8 local_214;
  undefined8 uStack_20c;
  longlong local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined8 uStack_1bf;
  undefined8 local_1b4;
  undefined8 uStack_1ac;
  uint local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined **local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  longlong *local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (param_1[0xdb] == *param_2) {
    uVar7 = (**(code **)(*param_1 + 0x180))();
    lVar8 = FUN_1412af310(uVar7);
    if (lVar8 != 0) {
      if (((char)param_1[0x15] == '\0') || ((*(byte *)(param_1 + 0x62) & 0x20) != 0)) {
        param_1[0xdb] = 0;
        puVar4 = (undefined8 *)param_1[0xdc];
        if (puVar4 != (undefined8 *)0x0) {
          param_1[0xdc] = 0;
          LOCK();
          piVar2 = (int *)(puVar4 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar4)(puVar4);
            LOCK();
            piVar2 = (int *)((longlong)puVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_2a8);
            }
          }
        }
      }
      else {
        lVar9 = FUN_1412e3d68(*param_2);
        lVar12 = *(longlong *)(lVar9 + 0x380);
        if (*(longlong *)(lVar9 + 0x380) == 0) {
          lVar12 = lVar9;
        }
        if ((longlong)*(int *)(lVar9 + 0x388) != 0) {
          lVar9 = (longlong)*(int *)(lVar9 + 0x388) * 0x38;
          do {
            if ((*(byte *)(lVar12 + 0x34) & 1) == 0) {
              cVar6 = FUN_144a7b75a(*(undefined1 *)(lVar12 + 0x20),7);
              if ((cVar6 != '\0') && (lVar10 = FUN_14030a32e(lVar12), lVar10 != 0)) {
                if (param_1[0xd8] == 0) {
LAB_1488e0b70:
                  cVar6 = FUN_1488e0856(param_1,lVar10);
                  if (cVar6 == '\0') {
LAB_1488e0b7f:
                    local_280 = &PTR_FUN_14b322ee0;
                    local_278 = 0;
                    local_270 = 0x34002;
                    local_1a0 = 0;
                    local_268 = 0;
                    lStack_260 = 0;
                    local_258 = 0;
                    uStack_250 = 0;
                    local_248 = 0;
                    uStack_240 = 0;
                    local_238 = 0;
                    uStack_230 = 0;
                    local_228 = 0;
                    uStack_220 = 0;
                    local_218 = 0;
                    local_214 = 0;
                    uStack_20c = 0;
                    local_200 = 0;
                    uStack_1f8 = 0;
                    local_1f0 = 0;
                    uStack_1e8 = 0;
                    local_1e0 = 0;
                    uStack_1d8 = 0;
                    local_1d0 = 0;
                    uStack_1c8 = 0;
                    uStack_1c7 = 0;
                    uStack_1c0 = 0;
                    uStack_1bf = 0;
                    local_1b4 = 0;
                    uStack_1ac = 0;
                    local_198 = 0;
                    uStack_190 = 0;
                    local_188 = 0;
                    uStack_180 = 0;
                    local_178 = 0x3002;
                    local_170 = 0;
                    local_138 = 0;
                    local_130 = 0x200000000;
                    local_128 = 0;
                    local_120 = 0x3f800000;
                    local_118 = 0;
                    local_114 = 0;
                    local_108 = 0;
                    local_100 = 0xf00000d0;
                    local_f8 = 0;
                    local_f0 = 0;
                    local_ec = 0;
                    local_c0 = 0;
                    uStack_b8 = 0;
                    local_b0 = 0;
                    local_e8 = 0;
                    uStack_e0 = 0;
                    local_d8 = 0;
                    uStack_d0 = 0;
                    local_c8 = 0;
                    local_ac = 0xbf800000;
                    FUN_1405c5fa2();
                    local_a0 = &DAT_14cb769e8;
                    local_98 = 0;
                    uStack_90 = 0;
                    local_a8 = &PTR_FUN_14b0394b0;
                    local_70 = (longlong *)0x0;
                    local_88 = 0;
                    uStack_80 = 0;
                    local_78 = 0;
                    (**(code **)(*param_1 + 0x2c8))(param_1,&local_280);
                    lVar11 = *(longlong *)(param_1[0xf] + 0x208);
                    if (((lVar11 != 0) &&
                        (iVar3 = *(int *)(param_1[0xf] + 0x210), iVar3 - 1U < 0xfffffffe)) &&
                       ((local_278 != lVar11 || (local_270 != iVar3)))) {
                      local_268 = 0;
                      local_278 = lVar11;
                      local_270 = iVar3;
                    }
                    lVar11 = param_1[0x25];
                    if (DAT_14c950c29 == 1) {
                      if (lVar11 == 0) {
                        lVar11 = 0;
                      }
                      else {
                        FUN_1456cec3c();
                        lVar11 = param_1[0x25];
                      }
                    }
                    lStack_260 = lVar11;
                    if ((DAT_14c950c29 & 1) != 0) {
                      FUN_1456cec3c(lVar10);
                    }
                    local_1a0 = local_1a0 | 2;
                    local_200 = lVar10;
                    if ((param_1 != (longlong *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
                      FUN_1456cec3c(param_1);
                    }
                    local_70 = param_1;
                    FUN_1412af85e(lVar8,&local_288,&local_280);
                    lVar10 = FUN_14479d2ce(&local_288);
                    if ((lVar10 == 0) || (*(int *)(param_1[0xf] + 0x200) <= (int)param_1[0xda])) {
                      FUN_140df0e32(&local_280);
                      break;
                    }
                    FUN_140df0e32(&local_280);
                  }
                }
                else {
                  cVar6 = FUN_1488e0856(param_1[0xd8],lVar10);
                  if (cVar6 == '\0') {
                    if (param_1[0xd8] == 0) goto LAB_1488e0b70;
                    goto LAB_1488e0b7f;
                  }
                }
              }
            }
            lVar12 = lVar12 + 0x38;
            lVar9 = lVar9 + -0x38;
          } while (lVar9 != 0);
        }
        param_1[0xdb] = 0;
        plVar5 = (longlong *)param_1[0xdc];
        if (plVar5 != (longlong *)0x0) {
          param_1[0xdc] = 0;
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
    }
  }
  if ((local_60 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488e0f20 FUN_1488e0f20 body=63 status=ok
// SIG undefined FUN_1488e0f20(void)

longlong FUN_1488e0f20(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1488e4c1e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x120 + *param_1;
  FUN_1488e4bd9(lVar2);
  return lVar2;
}



// FUNCTION 1488e0f7a FUN_1488e0f7a body=45 status=ok
// SIG undefined FUN_1488e0f7a(void)

bool FUN_1488e0f7a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    bVar3 = false;
  }
  else {
    uVar1 = FUN_144a7b040();
    lVar2 = FUN_144718840(param_2,uVar1);
    bVar3 = lVar2 != 0;
  }
  return bVar3;
}



// FUNCTION 1488e0fa8 FUN_1488e0fa8 body=69 status=ok
// SIG undefined FUN_1488e0fa8(void)

bool FUN_1488e0fa8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar1 = *(longlong *)(param_3 + 0x120);
    if (lVar1 == 0) {
      return true;
    }
    lVar2 = FUN_1400b5618();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      return *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
             lVar2 + 0x30;
    }
  }
  return false;
}



// FUNCTION 1488e0fee FUN_1488e0fee body=1 status=ok
// SIG undefined FUN_1488e0fee(void)

void FUN_1488e0fee(void)

{
  return;
}



// FUNCTION 1488e0ff0 FUN_1488e0ff0 body=32 status=ok
// SIG undefined FUN_1488e0ff0(void)

undefined8 FUN_1488e0ff0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FPostLightBeamTickFunction");
  return param_2;
}



// FUNCTION 1488e1010 FUN_1488e1010 body=32 status=ok
// SIG undefined FUN_1488e1010(void)

undefined8 FUN_1488e1010(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FLightBeamBatchTickFunction");
  return param_2;
}



// FUNCTION 1488e1030 FUN_1488e1030 body=196 status=ok
// SIG undefined FUN_1488e1030(void)

void FUN_1488e1030(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,(int)param_1[1]);
    if (cVar2 != '\0') {
      if (param_3 == '\0') {
        lVar3 = FUN_1447210f0(param_2);
        if (*(double *)(lVar3 + 0x6d0) <= (double)*(float *)((longlong)param_1 + 0xc) &&
            (double)*(float *)((longlong)param_1 + 0xc) != *(double *)(lVar3 + 0x6d0)) {
          *(undefined4 *)(param_1 + 2) = 0;
          goto LAB_1488e108f;
        }
      }
      FUN_1412af85e(param_2,&local_28,*param_1);
      if (*(longlong *)(*param_1 + 0x218) != 0) {
        lVar3 = FUN_14479d2ce(&local_28);
        if (lVar3 != 0) {
          **(undefined8 **)(*param_1 + 0x218) = local_28;
        }
      }
      *(undefined4 *)(param_1 + 2) = 1;
      goto LAB_1488e108f;
    }
  }
  *(undefined4 *)(param_1 + 2) = 2;
LAB_1488e108f:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e10fa FUN_1488e10fa body=399 status=ok
// SIG undefined FUN_1488e10fa(void)

void FUN_1488e10fa(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(undefined4 *)(param_1 + 0x398) = 0;
  if (*(int *)(param_1 + 0x39c) != 0) {
    FUN_145f26788(param_1 + 0x390);
  }
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  if (*(int *)(param_1 + 0x3c4) != 0) {
    FUN_145f26788(param_1 + 0x3b8);
  }
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  if (*(int *)(param_1 + 0x3d4) != 0) {
    FUN_145f26788(param_1 + 0x3c8);
  }
  if (0 < *(int *)(param_1 + 0x478)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x470);
      iVar1 = *(int *)(param_1 + 0x498);
      *(uint *)(param_1 + 0x498) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x49c) < iVar1 + 1U) {
        FUN_1488e4d76(param_1 + 0x490,iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x490) + (longlong)iVar1 * 8) =
           *(undefined8 *)(lVar2 + lVar3);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (lVar4 < *(int *)(param_1 + 0x478));
  }
  if (0 < *(int *)(param_1 + 0x488)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x480);
      iVar1 = *(int *)(param_1 + 0x498);
      *(uint *)(param_1 + 0x498) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x49c) < iVar1 + 1U) {
        FUN_1488e4d76(param_1 + 0x490,iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x490) + (longlong)iVar1 * 8) =
           *(undefined8 *)(lVar2 + lVar3);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (lVar4 < *(int *)(param_1 + 0x488));
  }
  *(undefined4 *)(param_1 + 0x478) = 0;
  if (*(int *)(param_1 + 0x47c) != 0) {
    FUN_1488e4dfc(param_1 + 0x470);
    return;
  }
  return;
}



// FUNCTION 1488e128a FUN_1488e128a body=150 status=ok
// SIG undefined FUN_1488e128a(void)

void FUN_1488e128a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140cf4cae();
  if (param_2 != 0) {
    lVar1 = FUN_140fb6d42();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_28 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      local_20 = &local_28;
      FUN_1488e4e2c(param_1 + 0x3c8);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e1322 FUN_1488e1322 body=117 status=ok
// SIG undefined FUN_1488e1322(void)

void FUN_1488e1322(longlong *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x88);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1488e4d76(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 0x80);
    if (*(void **)((longlong)param_2 + 0x80) == (void *)0x0) {
      _Src = param_2;
    }
    memcpy((void *)((longlong)iVar2 * 8 + *param_1),_Src,(longlong)(int)uVar1 << 3);
    return;
  }
  return;
}



// FUNCTION 1488e1398 FUN_1488e1398 body=230 status=ok
// SIG undefined FUN_1488e1398(void)

void FUN_1488e1398(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0x34002;
  local_50 = 0;
  local_70 = 3;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x398);
  local_78 = param_2;
  local_48 = param_3;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x390);
    lVar5 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar5);
      cVar4 = FUN_1412c0eda(&local_78,uVar3);
      if (cVar4 != '\0') {
        FUN_1488df5a2(uVar3,param_4,CONCAT71((int7)((ulonglong)param_3 >> 8),param_5) & 0xffffffff);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488e1480 FUN_1488e1480 body=238 status=ok
// SIG undefined FUN_1488e1480(void)

void FUN_1488e1480(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0x34002;
  local_60 = 0;
  local_80 = 3;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x398);
  local_88 = param_2;
  local_58 = param_3;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x390);
    lVar5 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar5);
      cVar4 = FUN_1412c0eda(&local_88,uVar3);
      if (cVar4 != '\0') {
        FUN_1488df736(uVar3,param_4,param_5);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488e1570 FUN_1488e1570 body=181 status=ok
// SIG undefined FUN_1488e1570(void)

undefined8 FUN_1488e1570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [56];
  undefined1 *local_68 [2];
  undefined8 *local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1488e1626(local_a0,param_3);
  local_68[0] = (undefined1 *)0x0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,8);
  *puVar1 = &PTR_FUN_14b414cd0;
  local_58 = puVar1;
  FUN_1488e1626(puVar1 + 1,local_a0);
  if (puVar1 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_68[0] = &LAB_143dcca82;
  }
  FUN_1458e8594(param_1,param_2,local_68);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e1626 FUN_1488e1626 body=124 status=ok
// SIG undefined FUN_1488e1626(void)

longlong * FUN_1488e1626(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  *(char *)(param_1 + 1) = (char)param_2[1];
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  param_1[3] = param_2[3];
  *(int *)(param_1 + 4) = (int)param_2[4];
  param_1[5] = 0;
  param_1[6] = param_2[6];
  return param_1;
}



// FUNCTION 1488e16ae FUN_1488e16ae body=102 status=ok
// SIG undefined FUN_1488e16ae(void)

void FUN_1488e16ae(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      iVar1 = FUN_14490d72a(lVar2);
      if (iVar1 != 3) {
        lVar2 = FUN_1412af310(lVar2);
        if (lVar2 != 0) {
          FUN_1488e1398(lVar2,param_1,param_2,param_3,param_4);
        }
      }
    }
  }
  return;
}



// FUNCTION 1488e1714 FUN_1488e1714 body=110 status=ok
// SIG undefined FUN_1488e1714(void)

void FUN_1488e1714(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      iVar1 = FUN_14490d72a(lVar2);
      if (iVar1 != 3) {
        lVar2 = FUN_1412af310(lVar2);
        if (lVar2 != 0) {
          FUN_1488e1480(lVar2,param_1,param_2,param_3,param_4);
        }
      }
    }
  }
  return;
}



// FUNCTION 1488e1782 FUN_1488e1782 body=255 status=ok
// SIG undefined FUN_1488e1782(void)

ulonglong FUN_1488e1782(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  int local_78;
  undefined1 local_68 [16];
  longlong local_58;
  longlong *local_48;
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*param_1 != 0) {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      iVar1 = FUN_14490d72a(lVar2);
      if (iVar1 != 3) {
        lVar2 = FUN_1412af310(lVar2);
        if (lVar2 != 0) {
          FUN_1488e1570(lVar2,local_68,param_1);
          FUN_1458e842a(local_68,local_c8);
          if (local_78 < 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = CONCAT71((int7)((ulonglong)local_c8 >> 8),
                             local_78 < *(int *)(local_c8[0] + 0x398));
          }
          if (local_b8 != 0) {
            if (local_a8 == (longlong *)0x0) {
              local_a8 = local_98;
            }
            (**(code **)(*local_a8 + 0x10))();
          }
          if (local_58 != 0) {
            if (local_48 == (longlong *)0x0) {
              local_48 = local_38;
            }
            (**(code **)(*local_48 + 0x10))();
          }
          goto LAB_1488e17d1;
        }
      }
    }
  }
  uVar3 = 0;
LAB_1488e17d1:
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e1882 FUN_1488e1882 body=458 status=ok
// SIG undefined FUN_1488e1882(void)

void FUN_1488e1882(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_158 [32];
  longlong local_138 [2];
  longlong local_128;
  longlong *local_118;
  longlong local_108 [4];
  int local_e8;
  longlong local_d8 [2];
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  int local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  longlong local_68;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((((*param_1 != 0) && (lVar4 = FUN_1447210f0(), lVar4 != 0)) &&
      (iVar3 = FUN_14490d72a(lVar4), iVar3 != 3)) && (lVar4 = FUN_1412af310(lVar4), lVar4 != 0)) {
    FUN_1488e1570(lVar4,local_78,param_1);
    FUN_1458e842a(local_78,local_d8);
    FUN_1458e84aa(local_78,local_138);
    if (local_88 != local_e8) {
      do {
        uVar1 = local_80;
        if (local_88 < 0) {
          if ((local_e8 < 0) || (*(int *)(local_138[0] + 0x398) <= local_e8)) break;
        }
        else if (local_e8 < 0) {
          if (*(int *)(local_d8[0] + 0x398) <= local_88) break;
        }
        else if (local_e8 < *(int *)(local_138[0] + 0x398) ==
                 local_88 < *(int *)(local_d8[0] + 0x398)) break;
        cVar2 = FUN_14113f0c0(param_2);
        if (cVar2 != '\0') {
          FUN_14876c1ab(param_2,uVar1);
        }
        local_88 = local_88 + 1;
        FUN_14131935c(local_d8);
      } while (local_88 != local_e8);
    }
    if (local_128 != 0) {
      if (local_118 == (longlong *)0x0) {
        local_118 = local_108;
      }
      (**(code **)(*local_118 + 0x10))();
    }
    if (local_c8 != 0) {
      if (local_b8 == (longlong *)0x0) {
        local_b8 = local_a8;
      }
      (**(code **)(*local_b8 + 0x10))();
    }
    if (local_68 != 0) {
      if (local_58 == (longlong *)0x0) {
        local_58 = local_48;
      }
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488e1a76 FUN_1488e1a76 body=29 status=ok
// SIG undefined FUN_1488e1a76(void)

undefined8 FUN_1488e1a76(longlong param_1,char param_2)

{
  if ((byte)(param_2 - 1U) < 5) {
    return *(undefined8 *)
            (param_1 + *(longlong *)(&DAT_14b4152d0 + (ulonglong)(byte)(param_2 - 1U) * 8));
  }
  return 0;
}



// FUNCTION 1488e1a94 FUN_1488e1a94 body=95 status=ok
// SIG undefined FUN_1488e1a94(void)

void FUN_1488e1a94(longlong param_1,ushort param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ushort uVar3;
  
  *(ushort *)(param_1 + 0x104) = *(ushort *)(param_1 + 0x104) & ~param_2;
  uVar3 = (ushort)*(undefined4 *)(param_1 + 0x1dc);
  if ((uVar3 & param_2) != 0) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      lVar2 = *(longlong *)(param_1 + 0x20);
    }
    else {
      lVar2 = 0;
    }
    if (*(char *)(lVar2 + 0x178) == '\x03') {
      *(ushort *)(param_1 + 0x1dc) = uVar3 & ~param_2;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x20);
      }
      else {
        plVar1 = (longlong *)0x0;
      }
      *(int *)(plVar1 + 0x92) = (int)plVar1[0x92] + 1;
                    /* WARNING: Could not recover jumptable at 0x0001488e1ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x578))();
      return;
    }
  }
  return;
}



// FUNCTION 1488e1af4 FUN_1488e1af4 body=9 status=ok
// SIG undefined FUN_1488e1af4(void)

void FUN_1488e1af4(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 800) = param_2;
  return;
}



// FUNCTION 1488e1afe FUN_1488e1afe body=43 status=ok
// SIG undefined FUN_1488e1afe(void)

undefined4 FUN_1488e1afe(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  puVar2 = (undefined4 *)(lVar1 + 0x360);
  if (0.0 < *(float *)(lVar1 + 0x374)) {
    puVar2 = (undefined4 *)(lVar1 + 0x374);
  }
  return *puVar2;
}



// FUNCTION 1488e1b2a FUN_1488e1b2a body=12 status=ok
// SIG undefined FUN_1488e1b2a(void)

void FUN_1488e1b2a(longlong param_1)

{
  FUN_14479d2ce(param_1 + 0x360);
  return;
}



// FUNCTION 1488e1b36 FUN_1488e1b36 body=7 status=ok
// SIG undefined FUN_1488e1b36(void)

undefined1 FUN_1488e1b36(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x274);
}



// FUNCTION 1488e1b3e FUN_1488e1b3e body=9 status=ok
// SIG undefined FUN_1488e1b3e(void)

undefined4 FUN_1488e1b3e(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x340);
}



// FUNCTION 1488e1b48 FUN_1488e1b48 body=38 status=ok
// SIG undefined FUN_1488e1b48(void)

bool FUN_1488e1b48(longlong param_1,float param_2)

{
  if (*(float *)(param_1 + 0x340) < 0.0) {
    return false;
  }
  return *(float *)(param_1 + 0x324) - *(float *)(param_1 + 0x340) <= param_2;
}



// FUNCTION 1488e1b90 FUN_1488e1b90 body=20 status=ok
// SIG undefined FUN_1488e1b90(void)

void FUN_1488e1b90(longlong param_1,undefined8 *param_2)

{
  *param_2 = DAT_14cb85270;
  *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488e1bac FUN_1488e1bac body=403 status=ok
// SIG undefined FUN_1488e1bac(void)

void FUN_1488e1bac(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  
  cVar4 = FUN_144a61b4f();
  if (cVar4 == '\0') {
    *(undefined1 *)(param_1 + 0x561) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x561) = 0;
    lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0x48);
    if (lVar5 != 0) {
      lVar5 = lVar5 * 0x28;
      plVar8 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x40) + 8);
      do {
        plVar1 = plVar8 + -1;
        plVar6 = (longlong *)FUN_14479d2ce(plVar1);
        if (plVar6 == (longlong *)0x0) {
          if (*plVar8 != 0) {
            plVar6 = (longlong *)FUN_140007850();
            cVar4 = (*(code *)PTR_FUN_14c758760)();
            if ((plVar6 == (longlong *)0x0) || (cVar4 == '\0')) {
              FUN_14485c47a(plVar1,plVar6);
              if (plVar6 == (longlong *)0x0) goto LAB_1488e1c2b;
            }
            else {
              uVar2 = *(uint *)((longlong)plVar6 + 0xc);
              if ((int)uVar2 < DAT_14c9647dc) {
                lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
              }
              else {
                lVar7 = 0;
              }
              if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
                FUN_14485c47a(plVar1,plVar6);
              }
            }
            if ((*(uint *)(plVar6 + 1) >> 0x1e & 1) == 0) goto LAB_1488e1c07;
          }
        }
        else {
LAB_1488e1c07:
          lVar7 = FUN_144a797b2();
          if ((((*(int *)(lVar7 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)) && (lVar7 = FUN_145a557f0(), lVar7 != 0)) &&
             ((*(int *)(lVar7 + 0x38) <= (int)plVar6[7] &&
              (*(longlong *)(plVar6[6] + (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)))) {
            lVar7 = plVar6[0x22];
            if (lVar7 == 0) {
              (**(code **)(*plVar6 + 1000))(plVar6);
              lVar7 = plVar6[0x22];
              if (lVar7 == 0) goto LAB_1488e1c2b;
            }
            uVar3 = *(undefined8 *)(lVar7 + 0x28);
            *(longlong *)(lVar7 + 0x28) = param_1 + -0x30;
            FUN_14876f9ca(lVar7,param_1 + -0x30);
            *(undefined8 *)(lVar7 + 0x28) = uVar3;
          }
        }
LAB_1488e1c2b:
        plVar8 = plVar8 + 5;
        lVar5 = lVar5 + -0x28;
      } while (lVar5 != 0);
    }
  }
  return;
}



// FUNCTION 1488e1d40 FUN_1488e1d40 body=59 status=ok
// SIG undefined FUN_1488e1d40(void)

void FUN_1488e1d40(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_1488e1a94(param_1 + -0x30,0x400);
  }
  else {
    FUN_143dc126e(param_1 + -0x30,10);
  }
  if (*(char *)(param_1 + 0x580) != '\0') {
    *(char *)(param_1 + 0x581) = param_2;
  }
  return;
}



// FUNCTION 1488e1db4 FUN_1488e1db4 body=228 status=ok
// SIG undefined FUN_1488e1db4(void)

undefined8 FUN_1488e1db4(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0xb4) == '\x01') {
    local_28 = *(longlong *)(param_1 + 0x50);
    local_20 = 0xffffffff;
    local_1c = 0x101;
    local_1a = 0;
    local_30 = param_1;
    FUN_144a2daf0(&local_30);
    if (local_28 != 0) {
      do {
        lVar3 = local_28;
        lVar1 = FUN_144a810c6();
        lVar3 = *(longlong *)(lVar3 + 8);
        if (*(ulonglong *)(lVar1 + 8) == 0) {
          bVar4 = lVar3 != 0;
          if (lVar3 != lVar1 && bVar4) {
            do {
              lVar3 = *(longlong *)(lVar3 + 0x30);
              bVar4 = lVar3 != 0;
              if (lVar3 == lVar1) break;
            } while (lVar3 != 0);
          }
          if (bVar4) goto LAB_1488e1e75;
        }
        else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_1488e1e75:
          uVar2 = 1;
          goto LAB_1488e1e7b;
        }
        local_28 = *(longlong *)(local_28 + 0x18);
        FUN_144a2daf0(&local_30);
      } while (local_28 != 0);
    }
  }
  uVar2 = 0;
LAB_1488e1e7b:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1488e1e9a FUN_1488e1e9a body=221 status=ok
// SIG undefined FUN_1488e1e9a(void)

void FUN_1488e1e9a(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_14082b622(param_1 + 0xa3);
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  lVar3 = param_1[0xca];
  lVar1 = param_1[0xcb];
  if ((longlong)(int)lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = 0;
    do {
      (**(code **)(**(longlong **)(lVar3 + lVar4) + 0x10))();
      lVar4 = lVar4 + 0x18;
    } while ((longlong)(int)lVar1 * 0x18 != lVar4);
    uVar2 = (undefined4)param_1[0xcb];
    lVar3 = param_1[0xca];
  }
  FUN_14068a6c6(lVar3,uVar2);
  *(undefined4 *)(param_1 + 0xcb) = 0;
  if (*(int *)((longlong)param_1 + 0x65c) != 0) {
    FUN_1488e537c(param_1 + 0xca,0);
  }
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    (**(code **)(*param_1 + 0x3c8))(param_1);
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfe;
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    FUN_1407d9874(param_1 + 0xe,0);
    return;
  }
  return;
}



// FUNCTION 1488e1f78 FUN_1488e1f78 body=58 status=ok
// SIG undefined FUN_1488e1f78(void)

void FUN_1488e1f78(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x698) != 0) {
    FUN_14028d356();
    (**(code **)(**(longlong **)(param_1 + 0x698) + 0x2b0))();
    *(undefined8 *)(param_1 + 0x698) = 0;
  }
  return;
}



// FUNCTION 1488e1fb2 FUN_1488e1fb2 body=411 status=ok
// SIG undefined FUN_1488e1fb2(void)

undefined1 (*) [16] FUN_1488e1fb2(longlong param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_e8 [32];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined8 *)*param_2 = 0;
  *(undefined8 *)(*param_2 + 8) = 0;
  *(undefined8 *)param_2[1] = 0x3ff0000000000000;
  if ((*(byte *)(param_1 + 0x100) & 0x10) != 0) {
    FUN_14028e00e(param_1 + 0x278,&local_c8);
    local_88 = *(double *)(param_1 + 0x2c0) * local_88;
    dStack_80 = *(double *)(param_1 + 0x2c8) * dStack_80;
    local_78 = *(double *)(param_1 + 0x2d0) * local_78;
    dVar3 = dStack_80 * local_c8 - local_88 * dStack_c0;
    dVar4 = local_78 * dStack_c0 - dStack_80 * local_b8;
    dVar5 = local_88 * local_b8 - local_c8 * local_78;
    dVar4 = dVar4 + dVar4;
    dVar5 = dVar5 + dVar5;
    dVar3 = dVar3 + dVar3;
    dVar2 = (local_b8 * dVar4 - local_c8 * dVar3) + dStack_b0 * dVar5 + dStack_80;
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = (dVar3 * dStack_c0 - dVar5 * local_b8) + dStack_b0 * dVar4 + local_88;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *param_2 = auVar1;
    *(double *)param_2[1] = dVar3 * dStack_b0 + local_78 + (dVar5 * local_c8 - dVar4 * dStack_c0);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e214e FUN_1488e214e body=54 status=ok
// SIG undefined FUN_1488e214e(void)

void FUN_1488e214e(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x100) & 1) != 0) {
    iVar1 = (**(code **)(*param_2 + 0x570))(param_2);
    if (iVar1 == 0) {
      FUN_1414beecc(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 1488e2184 FUN_1488e2184 body=7 status=ok
// SIG undefined FUN_1488e2184(void)

void FUN_1488e2184(undefined8 param_1)

{
  FUN_1414beecc(param_1,0);
  return;
}



// FUNCTION 1488e218c FUN_1488e218c body=7 status=ok
// SIG undefined FUN_1488e218c(void)

void FUN_1488e218c(undefined8 param_1)

{
  FUN_1414beecc(param_1,0);
  return;
}



// FUNCTION 1488e2194 FUN_1488e2194 body=12 status=ok
// SIG undefined FUN_1488e2194(void)

void FUN_1488e2194(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_1414beecc(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1488e21a0 FUN_1488e21a0 body=201 status=ok
// SIG undefined FUN_1488e21a0(void)

undefined8 * FUN_1488e21a0(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  wchar_t local_58 [36];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb852a8) {
    FUN_144b3d300(&DAT_14cb852a8);
    if (DAT_14cb852a8 == -1) {
      builtin_wcsncpy(local_58 + 0x18,L"actured",8);
      builtin_wcsncpy(local_58 + 0x10,L"ctibleFr",8);
      builtin_wcsncpy(local_58 + 8,L"edDestru",8);
      builtin_wcsncpy(local_58,L"OnAttach",8);
      FUN_1446f470e(&DAT_14cb852a0,local_58,1);
      _Init_thread_footer(&DAT_14cb852a8);
    }
  }
  *param_1 = DAT_14cb852a0;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e226a FUN_1488e226a body=125 status=ok
// SIG undefined FUN_1488e226a(void)

void FUN_1488e226a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  uStack_30 = (undefined4)uStack_40;
  uStack_2c = uStack_40._4_4_;
  FUN_1403350f6(param_1);
  FUN_144a7b126(param_1,&local_21,1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e22e8 FUN_1488e22e8 body=274 status=ok
// SIG undefined FUN_1488e22e8(void)

undefined8 FUN_1488e22e8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_14485cccc(param_2 + 0xb8);
  if (lVar1 != 0) {
    uVar2 = FUN_144a7b040();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
        if ((*(byte *)(lVar1 + 0x7c) & 4) == 0) {
          lVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
          if (lVar1 != 0) {
            lVar1 = FUN_14485cccc(param_2 + 0xb8);
            if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x62) & 4) != 0)) {
              lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
              lVar6 = lVar4 + 0x270;
              if (lVar4 == 0) {
                lVar6 = 0;
              }
              uVar2 = *(undefined8 *)(param_2 + 0xf0);
              uVar5 = FUN_14479d2ce(param_2 + 0xd8);
              FUN_1407176ee(lVar6,local_48,uVar5,uVar2);
              plVar3 = (longlong *)FUN_1402179b4(local_48);
              if (plVar3 != (longlong *)0x0) {
                uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,lVar1,0);
                goto LAB_1488e2375;
              }
            }
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_1488e2375:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e23fc FUN_1488e23fc body=58 status=ok
// SIG undefined FUN_1488e23fc(void)

longlong FUN_1488e23fc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1405c60c4(*(undefined8 *)(param_1 + 0x90));
  FUN_1447325ac(uVar1,param_2,1);
  *(undefined4 *)(param_2 + 8) = 0x3002;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return param_2;
}



// FUNCTION 1488e2436 FUN_1488e2436 body=37 status=ok
// SIG undefined FUN_1488e2436(void)

void FUN_1488e2436(longlong *param_1)

{
  (**(code **)(*param_1 + 0x3e0))();
  return;
}



// FUNCTION 1488e245c FUN_1488e245c body=50 status=ok
// SIG undefined FUN_1488e245c(void)

void FUN_1488e245c(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar1 = 0;
  }
  FUN_1488e5a0c(uVar1,param_1);
  FUN_14163f334(param_1,0,1);
  return;
}



// FUNCTION 1488e248e FUN_1488e248e body=388 status=ok
// SIG undefined FUN_1488e248e(void)

void FUN_1488e248e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x48);
  if (lVar5 != 0) {
    lVar5 = lVar5 * 0x28;
    plVar8 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x40) + 8);
    do {
      plVar1 = plVar8 + -1;
      plVar6 = (longlong *)FUN_14479d2ce(plVar1);
      if (plVar6 == (longlong *)0x0) {
        if (*plVar8 != 0) {
          plVar6 = (longlong *)FUN_140007850();
          cVar4 = (*(code *)PTR_FUN_14c758760)();
          if ((plVar6 == (longlong *)0x0) || (cVar4 == '\0')) {
            FUN_14485c47a(plVar1,plVar6);
            if (plVar6 == (longlong *)0x0) goto LAB_1488e24fd;
          }
          else {
            uVar2 = *(uint *)((longlong)plVar6 + 0xc);
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(plVar1,plVar6);
            }
          }
          if ((*(uint *)(plVar6 + 1) >> 0x1e & 1) == 0) goto LAB_1488e24d9;
        }
      }
      else {
LAB_1488e24d9:
        lVar7 = FUN_144a797b2();
        if ((((*(int *)(lVar7 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
              == lVar7 + 0x30)) && (lVar7 = FUN_145a557f0(), lVar7 != 0)) &&
           ((*(int *)(lVar7 + 0x38) <= (int)plVar6[7] &&
            (*(longlong *)(plVar6[6] + (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)))) {
          lVar7 = plVar6[0x22];
          if (lVar7 == 0) {
            (**(code **)(*plVar6 + 1000))(plVar6);
            lVar7 = plVar6[0x22];
            if (lVar7 == 0) goto LAB_1488e24fd;
          }
          uVar3 = *(undefined8 *)(lVar7 + 0x28);
          *(longlong *)(lVar7 + 0x28) = param_1;
          FUN_14876f94c(lVar7,param_1,param_2);
          *(undefined8 *)(lVar7 + 0x28) = uVar3;
        }
      }
LAB_1488e24fd:
      plVar8 = plVar8 + 5;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 1488e2612 FUN_1488e2612 body=140 status=ok
// SIG undefined FUN_1488e2612(void)

int FUN_1488e2612(longlong *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  iVar2 = 1;
  if (((param_1[0x30] != 0) && (param_1[8] != 0)) && (((short)param_1[9] < 0 || (param_1[10] != 0)))
     ) {
    uVar3 = (**(code **)(*param_1 + 0x180))();
    iVar2 = FUN_1412d1158(param_1 + 8,param_2,uVar3);
    if ((iVar2 == 2) && (iVar2 = 2, param_2 != 0)) {
      uVar3 = FUN_144a7b040();
      plVar4 = (longlong *)FUN_144718840(param_2,uVar3);
      if (plVar4 != (longlong *)0x0) {
        bVar1 = (**(code **)(*plVar4 + 0x40))(plVar4);
        iVar2 = 2 - (uint)bVar1;
      }
    }
  }
  return iVar2;
}



// FUNCTION 1488e26a8 FUN_1488e26a8 body=91 status=ok
// SIG undefined FUN_1488e26a8(void)

undefined8 * FUN_1488e26a8(undefined8 *param_1,int param_2)

{
  *param_1 = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_140115c12(param_1 + 2,0);
  }
  param_1[1] = 0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488e2704 FUN_1488e2704 body=116 status=ok
// SIG undefined FUN_1488e2704(void)

void FUN_1488e2704(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1407c8de8(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1488e277a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1488e277a FUN_1488e277a body=62 status=ok
// SIG undefined FUN_1488e277a(void)

void FUN_1488e277a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488e27b8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1488e27b8 FUN_1488e27b8 body=93 status=ok
// SIG undefined FUN_1488e27b8(void)

ulonglong FUN_1488e27b8(uint param_1,uint param_2)

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



// FUNCTION 1488e2815 FUN_1488e2815 body=41 status=ok
// SIG undefined FUN_1488e2815(void)

void FUN_1488e2815(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1488e283e(param_1);
    param_1 = param_1 + 0x200;
  }
  return;
}



// FUNCTION 1488e283e FUN_1488e283e body=229 status=ok
// SIG undefined FUN_1488e283e(void)

void FUN_1488e283e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1400020a8();
  }
  FUN_1488e2924(param_1 + 0x188);
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1400020a8();
  }
  FUN_1488e29b2(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  FUN_1488e2a40(param_1 + 0xe8);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  FUN_1488e2a40(param_1 + 0x98);
  FUN_1449db362(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1488e2924 FUN_1488e2924 body=52 status=ok
// SIG undefined FUN_1488e2924(void)

void FUN_1488e2924(longlong *param_1)

{
  FUN_1488e2958();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1488e2958 FUN_1488e2958 body=89 status=ok
// SIG undefined FUN_1488e2958(void)

void FUN_1488e2958(longlong param_1)

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



// FUNCTION 1488e29b2 FUN_1488e29b2 body=52 status=ok
// SIG undefined FUN_1488e29b2(void)

void FUN_1488e29b2(longlong *param_1)

{
  FUN_1488e29e6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1488e29e6 FUN_1488e29e6 body=89 status=ok
// SIG undefined FUN_1488e29e6(void)

void FUN_1488e29e6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 1488e2a40 FUN_1488e2a40 body=52 status=ok
// SIG undefined FUN_1488e2a40(void)

void FUN_1488e2a40(longlong *param_1)

{
  FUN_1488e2a74();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1488e2a74 FUN_1488e2a74 body=89 status=ok
// SIG undefined FUN_1488e2a74(void)

void FUN_1488e2a74(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 1488e2ace FUN_1488e2ace body=52 status=ok
// SIG undefined FUN_1488e2ace(void)

void FUN_1488e2ace(longlong *param_1)

{
  FUN_1488e2b02();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1488e2b02 FUN_1488e2b02 body=90 status=ok
// SIG undefined FUN_1488e2b02(void)

void FUN_1488e2b02(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14880c1c4(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_147f0950a(param_1 + 0x10,0);
  return;
}



// FUNCTION 1488e2b5c FUN_1488e2b5c body=76 status=ok
// SIG undefined FUN_1488e2b5c(void)

void FUN_1488e2b5c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145a313d8();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1488e2b99;
    }
  }
  lVar2 = 0;
LAB_1488e2b99:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1488e2ba8 FUN_1488e2ba8 body=31 status=ok
// SIG undefined FUN_1488e2ba8(void)

undefined8 FUN_1488e2ba8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488e2be2 FUN_1488e2be2 body=93 status=ok
// SIG undefined FUN_1488e2be2(void)

void FUN_1488e2be2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aba0a20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b414a90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488e2c40 FUN_1488e2c40 body=93 status=ok
// SIG undefined FUN_1488e2c40(void)

void FUN_1488e2c40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aba0a20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b414a90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488e2c9e FUN_1488e2c9e body=126 status=ok
// SIG undefined FUN_1488e2c9e(void)

void FUN_1488e2c9e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aba0a20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b414a90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488e2d0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488e2d1c FUN_1488e2d1c body=40 status=ok
// SIG undefined FUN_1488e2d1c(void)

void FUN_1488e2d1c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488e2d41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1488e2d44 FUN_1488e2d44 body=132 status=ok
// SIG undefined FUN_1488e2d44(void)

void FUN_1488e2d44(longlong param_1,int param_2)

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



// FUNCTION 1488e2dca FUN_1488e2dca body=103 status=ok
// SIG undefined FUN_1488e2dca(void)

void FUN_1488e2dca(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x20;
    if (0x20 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x20c)) {
    *(int *)(param_1 + 0x20c) = iVar3;
    FUN_1488e2e32(param_1,*(undefined4 *)(param_1 + 0x208));
    return;
  }
  return;
}



// FUNCTION 1488e2e32 FUN_1488e2e32 body=141 status=ok
// SIG undefined FUN_1488e2e32(void)

void FUN_1488e2e32(void *param_1,int param_2,undefined8 param_3)

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
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,0x10);
  return;
}



// FUNCTION 1488e2ec0 FUN_1488e2ec0 body=119 status=ok
// SIG undefined FUN_1488e2ec0(void)

void FUN_1488e2ec0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_1488e2e32(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488e2f38 FUN_1488e2f38 body=1068 status=ok
// SIG undefined FUN_1488e2f38(void)

void FUN_1488e2f38(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  int iVar18;
  uint uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auStack_148 [32];
  double local_128;
  double local_120;
  longlong local_118;
  undefined8 uStack_110;
  longlong *local_108 [5];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  dVar3 = (double)param_1[9];
  dVar4 = (double)param_1[6];
  dVar5 = (double)param_1[7];
  dVar6 = (double)param_1[8];
  local_120 = (dVar3 - dVar5) * 0.5;
  dVar10 = (dVar6 - dVar4) * 0.5;
  dVar7 = (double)param_1[0xb];
  dVar8 = (double)param_1[0xc];
  dVar11 = local_120 + dVar8;
  dVar12 = dVar7 - dVar10;
  dVar10 = dVar10 + dVar7;
  puVar20 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar2 = *(undefined4 *)(param_1 + 0xd);
  local_128 = dVar8 + 0.0;
  *puVar20 = 0;
  puVar20[1] = 0;
  puVar20[6] = dVar12;
  puVar20[7] = dVar8;
  puVar20[8] = dVar7 + 0.0;
  puVar20[9] = dVar11;
  *(undefined1 *)(puVar20 + 10) = 1;
  puVar20[0xb] = (dVar7 + 0.0 + dVar12) * 0.5;
  puVar20[0xc] = (dVar11 + dVar8) * 0.5;
  *(undefined4 *)(puVar20 + 0xd) = uVar2;
  *(undefined1 *)((longlong)puVar20 + 0x6c) = 0;
  puVar20[4] = 0;
  puVar20[5] = 0;
  puVar20[2] = 0;
  puVar20[3] = 0;
  param_1[2] = puVar20;
  puVar20 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar20 = 0;
  puVar20[1] = 0;
  puVar20[6] = dVar7;
  puVar20[7] = dVar8;
  puVar20[8] = dVar6;
  puVar20[9] = dVar3;
  *(undefined1 *)(puVar20 + 10) = 1;
  puVar20[0xb] = (dVar6 + dVar7) * 0.5;
  puVar20[0xc] = (dVar3 + dVar8) * 0.5;
  *(undefined4 *)(puVar20 + 0xd) = uVar2;
  *(undefined1 *)((longlong)puVar20 + 0x6c) = 0;
  puVar20[2] = 0;
  puVar20[3] = 0;
  puVar20[4] = 0;
  puVar20[5] = 0;
  param_1[3] = puVar20;
  puVar20 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar20 = 0;
  puVar20[1] = 0;
  puVar20[6] = dVar4;
  puVar20[7] = dVar5;
  puVar20[8] = dVar7;
  puVar20[9] = dVar8;
  *(undefined1 *)(puVar20 + 10) = 1;
  puVar20[0xb] = (dVar4 + dVar7) * 0.5;
  puVar20[0xc] = (dVar5 + dVar8) * 0.5;
  *(undefined4 *)(puVar20 + 0xd) = uVar2;
  *(undefined1 *)((longlong)puVar20 + 0x6c) = 0;
  puVar20[2] = 0;
  puVar20[3] = 0;
  puVar20[4] = 0;
  puVar20[5] = 0;
  param_1[4] = puVar20;
  puVar20 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar20 = 0;
  puVar20[1] = 0;
  puVar20[6] = dVar7;
  puVar20[7] = dVar8 - local_120;
  puVar20[8] = dVar10;
  puVar20[9] = local_128;
  *(undefined1 *)(puVar20 + 10) = 1;
  puVar20[0xb] = (dVar10 + dVar7) * 0.5;
  puVar20[0xc] = ((dVar8 - local_120) + local_128) * 0.5;
  *(undefined4 *)(puVar20 + 0xd) = uVar2;
  *(undefined1 *)((longlong)puVar20 + 0x6c) = 0;
  puVar20[2] = 0;
  puVar20[3] = 0;
  puVar20[4] = 0;
  puVar20[5] = 0;
  param_1[5] = puVar20;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
  local_118 = 0;
  uStack_110 = 0;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar20 = (undefined8 *)*param_1;
    lVar23 = (longlong)*(int *)(param_1 + 1) * 0x38;
    do {
      iVar18 = FUN_140b33e0a(param_1,puVar20,local_108);
      plVar17 = local_108[0];
      uVar16 = uStack_110;
      if (iVar18 == 1) {
        iVar18 = (int)local_108[0][1];
        *(uint *)(local_108[0] + 1) = iVar18 + 1U;
        if (*(uint *)((longlong)local_108[0] + 0xc) < iVar18 + 1U) {
          FUN_146555a86(local_108[0],iVar18);
        }
        lVar21 = *plVar17;
      }
      else {
        iVar18 = (int)uStack_110;
        uVar19 = (int)uStack_110 + 1;
        uStack_110 = CONCAT44(uStack_110._4_4_,uVar19);
        lVar21 = local_118;
        if (uStack_110._4_4_ < uVar19) {
          FUN_146555a86(&local_118,uVar16 & 0xffffffff);
          lVar21 = local_118;
        }
      }
      lVar22 = (longlong)iVar18 * 0x38;
      *(undefined8 *)(lVar21 + 0x20 + lVar22) = puVar20[4];
      uVar13 = *puVar20;
      uVar14 = puVar20[1];
      uVar15 = puVar20[3];
      puVar1 = (undefined8 *)(lVar21 + 0x10 + lVar22);
      *puVar1 = puVar20[2];
      puVar1[1] = uVar15;
      *(undefined8 *)(lVar21 + lVar22) = uVar13;
      ((undefined8 *)(lVar21 + lVar22))[1] = uVar14;
      *(undefined8 *)(lVar21 + 0x28 + lVar22) = puVar20[5];
      lVar9 = puVar20[6];
      *(longlong *)(lVar21 + 0x30 + lVar22) = lVar9;
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 0xc) = *(int *)(lVar9 + 0xc) + 1;
        UNLOCK();
      }
      puVar20 = puVar20 + 7;
      lVar23 = lVar23 + -0x38;
    } while (lVar23 != 0);
  }
  FUN_1488e3366(param_1,&local_118);
  FUN_140f46efe(local_118,uStack_110 & 0xffffffff);
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488e3366 FUN_1488e3366 body=93 status=ok
// SIG undefined FUN_1488e3366(void)

undefined8 * FUN_1488e3366(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140f46efe(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1488e33c4(param_1,iVar1);
      FUN_1488e3433(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1488e33c4 FUN_1488e33c4 body=111 status=ok
// SIG undefined FUN_1488e33c4(void)

void FUN_1488e33c4(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1488e3433 FUN_1488e3433 body=75 status=ok
// SIG undefined FUN_1488e3433(void)

void FUN_1488e3433(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = 0;
    do {
      *(undefined8 *)(param_1 + 0x20 + lVar7) = *(undefined8 *)(param_2 + 0x20 + lVar7);
      uVar4 = *(undefined8 *)(param_2 + lVar7);
      uVar5 = ((undefined8 *)(param_2 + lVar7))[1];
      puVar1 = (undefined8 *)(param_2 + 0x10 + lVar7);
      uVar6 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x10 + lVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      *(undefined8 *)(param_1 + lVar7) = uVar4;
      ((undefined8 *)(param_1 + lVar7))[1] = uVar5;
      *(undefined8 *)(param_1 + 0x28 + lVar7) = *(undefined8 *)(param_2 + 0x28 + lVar7);
      lVar3 = *(longlong *)(param_2 + 0x30 + lVar7);
      *(longlong *)(param_1 + 0x30 + lVar7) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
        UNLOCK();
      }
      lVar7 = lVar7 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1488e347e FUN_1488e347e body=132 status=ok
// SIG undefined FUN_1488e347e(void)

void FUN_1488e347e(longlong param_1,int param_2)

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



// FUNCTION 1488e3504 FUN_1488e3504 body=91 status=ok
// SIG undefined FUN_1488e3504(void)

undefined8 * FUN_1488e3504(undefined8 *param_1,int param_2)

{
  *param_1 = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_140115c12(param_1 + 2,0);
  }
  param_1[1] = 0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488e3560 FUN_1488e3560 body=62 status=ok
// SIG undefined FUN_1488e3560(void)

void FUN_1488e3560(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488e359e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1488e359e FUN_1488e359e body=93 status=ok
// SIG undefined FUN_1488e359e(void)

ulonglong FUN_1488e359e(uint param_1,uint param_2)

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



// FUNCTION 1488e35fc FUN_1488e35fc body=62 status=ok
// SIG undefined FUN_1488e35fc(void)

void FUN_1488e35fc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488e363a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1488e363a FUN_1488e363a body=93 status=ok
// SIG undefined FUN_1488e363a(void)

ulonglong FUN_1488e363a(uint param_1,uint param_2)

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



// FUNCTION 1488e3698 FUN_1488e3698 body=390 status=ok
// SIG undefined FUN_1488e3698(void)

void FUN_1488e3698(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  byte bVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < 0x10) {
    uVar8 = 0x10 - iVar1;
    iVar11 = *(int *)((longlong)param_1 + 0xc);
    iVar7 = iVar1;
    if (iVar11 < 0x10) {
      FUN_14880c1c4(param_1,0x10);
      iVar7 = (int)param_1[1];
      iVar11 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar7 + uVar8;
    if ((uint)(iVar11 - iVar7) < uVar8) {
      FUN_14880cfd8(param_1,iVar7);
    }
    if (iVar7 < 0x10) {
      lVar2 = *param_1;
      iVar11 = *(int *)((longlong)param_1 + 0x34);
      puVar6 = (undefined4 *)(lVar2 + 0x16c);
      lVar10 = 0x10;
      do {
        iVar9 = (int)lVar10;
        if (iVar11 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar9 + -1;
        }
        puVar6[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        lVar10 = lVar10 + -1;
        *puVar6 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar11 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar11;
        puVar6 = puVar6 + -6;
      } while (iVar7 < lVar10);
    }
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 5) = 0x10;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0x20) {
        if (param_1[4] != 0) {
          FUN_1446efa72(param_1 + 4,0,0,4);
        }
        *(undefined4 *)((longlong)param_1 + 0x2c) = 0x20;
      }
      plVar4 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar4 = param_1 + 2;
      }
      *(undefined4 *)plVar4 = 0;
      iVar1 = (int)param_1[5];
      iVar11 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar11 = iVar1;
      }
      if (iVar1 % 0x20 != 0) {
        plVar4 = param_1 + 2;
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar4 = (longlong *)param_1[4];
        }
        bVar5 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar4 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar4 + (longlong)(iVar11 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_147f0b2e6(param_1 + 2,uVar8);
      FUN_147f0b382(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1488e381e FUN_1488e381e body=484 status=ok
// SIG undefined FUN_1488e381e(void)

void FUN_1488e381e(longlong *param_1)

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
    FUN_147f0b4fc(plVar1,0,uVar8,4);
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
      FUN_147f0b582(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_50 = local_30;
    local_4c = local_2c;
    local_58 = local_38;
    uVar3 = local_58;
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
        FUN_147f0b582(&local_68);
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



// FUNCTION 1488e3a04 FUN_1488e3a04 body=41 status=ok
// SIG undefined FUN_1488e3a04(void)

void FUN_1488e3a04(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_1488e4196();
  return;
}



// FUNCTION 1488e3a2e FUN_1488e3a2e body=70 status=ok
// SIG undefined FUN_1488e3a2e(void)

void FUN_1488e3a2e(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1488e3a74();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14880c1c4(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1488e3a74 FUN_1488e3a74 body=349 status=ok
// SIG undefined FUN_1488e3a74(void)

void FUN_1488e3a74(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
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
    local_38 = 0;
    iVar6 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_147f0b582(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar2 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, local_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_147f0b582(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 || (local_68 != plVar1 || local_60._4_4_ != iVar6));
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



// FUNCTION 1488e3bd2 FUN_1488e3bd2 body=324 status=ok
// SIG undefined FUN_1488e3bd2(void)

undefined4 * FUN_1488e3bd2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
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
  FUN_1488e3d18(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1488e3dfe(param_1,uVar4,local_40,&local_4c);
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
      FUN_1488e381e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e3d18 FUN_1488e3d18 body=230 status=ok
// SIG undefined FUN_1488e3d18(void)

int * FUN_1488e3d18(longlong *param_1,int *param_2)

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
      FUN_14880cfd8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_147f0b2e6(param_1 + 2,1);
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



// FUNCTION 1488e3dfe FUN_1488e3dfe body=128 status=ok
// SIG undefined FUN_1488e3dfe(void)

undefined8 FUN_1488e3dfe(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1488e3e7e((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1488e3e7e FUN_1488e3e7e body=114 status=ok
// SIG undefined FUN_1488e3e7e(void)

void FUN_1488e3e7e(longlong *param_1,int param_2)

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



// FUNCTION 1488e3ef0 FUN_1488e3ef0 body=187 status=ok
// SIG undefined FUN_1488e3ef0(void)

longlong * FUN_1488e3ef0(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_1488e3f8e;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_1488e3fac(param_1,&local_1c,param_2,&local_30);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_1488e3f8e:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 1488e3fac FUN_1488e3fac body=279 status=ok
// SIG undefined FUN_1488e3fac(void)

undefined4 * FUN_1488e3fac(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1488e3d18(param_1,local_48);
  puVar1 = (undefined4 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar2 = FUN_1488e3dfe(param_1,param_3,local_40,local_48);
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
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1488e381e(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e40c4 FUN_1488e40c4 body=132 status=ok
// SIG undefined FUN_1488e40c4(void)

void FUN_1488e40c4(longlong param_1,int param_2)

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



// FUNCTION 1488e414a FUN_1488e414a body=76 status=ok
// SIG undefined FUN_1488e414a(void)

void FUN_1488e414a(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar3 = 1;
  }
  else {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_140906920(param_1);
  return;
}



// FUNCTION 1488e4196 FUN_1488e4196 body=86 status=ok
// SIG undefined FUN_1488e4196(void)

void FUN_1488e4196(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1488e41ec FUN_1488e41ec body=114 status=ok
// SIG undefined FUN_1488e41ec(void)

void FUN_1488e41ec(longlong *param_1,int param_2)

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



// FUNCTION 1488e425e FUN_1488e425e body=132 status=ok
// SIG undefined FUN_1488e425e(void)

void FUN_1488e425e(longlong param_1,int param_2)

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



// FUNCTION 1488e42e4 FUN_1488e42e4 body=62 status=ok
// SIG undefined FUN_1488e42e4(void)

void FUN_1488e42e4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488e4322(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1488e4322 FUN_1488e4322 body=112 status=ok
// SIG undefined FUN_1488e4322(void)

ulonglong FUN_1488e4322(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1488e435c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_1488e435c:
  return param_2 & 0xffffffff;
}



// FUNCTION 1488e4392 FUN_1488e4392 body=77 status=ok
// SIG undefined FUN_1488e4392(void)

undefined1 *
FUN_1488e4392(undefined1 *param_1,undefined1 param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 8) = param_3;
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_3);
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x10) = param_4;
  if ((param_4 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_4);
  }
  return param_1;
}



// FUNCTION 1488e43e0 FUN_1488e43e0 body=147 status=ok
// SIG undefined FUN_1488e43e0(void)

void FUN_1488e43e0(longlong param_1,int param_2)

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



// FUNCTION 1488e4474 FUN_1488e4474 body=90 status=ok
// SIG undefined FUN_1488e4474(void)

void FUN_1488e4474(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x10c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
    if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x100),
              (longlong)*(int *)((longlong)param_1 + 0x108) << 3);
      FUN_1446efa72((longlong)param_1 + 0x100,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 1488e44ce FUN_1488e44ce body=141 status=ok
// SIG undefined FUN_1488e44ce(void)

void FUN_1488e44ce(void *param_1,int param_2,undefined8 param_3)

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
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 1488e455c FUN_1488e455c body=48 status=ok
// SIG undefined FUN_1488e455c(void)

void FUN_1488e455c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 1488e458c FUN_1488e458c body=48 status=ok
// SIG undefined FUN_1488e458c(void)

void FUN_1488e458c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,4);
  }
  return;
}



// FUNCTION 1488e45bc FUN_1488e45bc body=48 status=ok
// SIG undefined FUN_1488e45bc(void)

void FUN_1488e45bc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1488e45ec FUN_1488e45ec body=48 status=ok
// SIG undefined FUN_1488e45ec(void)

void FUN_1488e45ec(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1488e461c FUN_1488e461c body=62 status=ok
// SIG undefined FUN_1488e461c(void)

void FUN_1488e461c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488e465a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 1488e465a FUN_1488e465a body=112 status=ok
// SIG undefined FUN_1488e465a(void)

ulonglong FUN_1488e465a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1488e4694;
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
LAB_1488e4694:
  return param_2 & 0xffffffff;
}



// FUNCTION 1488e46ca FUN_1488e46ca body=119 status=ok
// SIG undefined FUN_1488e46ca(void)

void FUN_1488e46ca(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_1488e44ce(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488e4742 FUN_1488e4742 body=196 status=ok
// SIG undefined FUN_1488e4742(void)

longlong * FUN_1488e4742(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x48);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_1488e47e9;
          break;
        }
        iVar1 = (int)plVar2[8];
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_4;
  FUN_1488e4808(param_1,&local_1c,param_2,&local_30);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x48);
LAB_1488e47e9:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 1488e4808 FUN_1488e4808 body=300 status=ok
// SIG undefined FUN_1488e4808(void)

undefined4 *
FUN_1488e4808(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140ffab16(param_1,local_58);
  uVar1 = param_4[1];
  *local_50 = *(undefined8 *)*param_4;
  FUN_140382e86(local_50 + 1,uVar1);
  *(undefined4 *)(local_50 + 8) = 0xffffffff;
  local_68 = param_5;
  cVar2 = FUN_140ffa974(param_1,param_3,local_50,local_58);
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
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_50 + 0x44) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 8) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140ffaf02(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e4936 FUN_1488e4936 body=29 status=ok
// SIG undefined FUN_1488e4936(void)

undefined8 FUN_1488e4936(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488e496e FUN_1488e496e body=29 status=ok
// SIG undefined FUN_1488e496e(void)

bool FUN_1488e496e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488e498c FUN_1488e498c body=26 status=ok
// SIG undefined FUN_1488e498c(void)

bool FUN_1488e498c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488e49a6 FUN_1488e49a6 body=24 status=ok
// SIG undefined FUN_1488e49a6(void)

bool FUN_1488e49a6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1488e49be FUN_1488e49be body=101 status=ok
// SIG undefined FUN_1488e49be(void)

void FUN_1488e49be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b414b80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488e4a24 FUN_1488e4a24 body=101 status=ok
// SIG undefined FUN_1488e4a24(void)

void FUN_1488e4a24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b414b80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488e4a8a FUN_1488e4a8a body=134 status=ok
// SIG undefined FUN_1488e4a8a(void)

void FUN_1488e4a8a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8b4c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b414b80;
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
                    /* WARNING: Could not recover jumptable at 0x0001488e4b01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488e4b10 FUN_1488e4b10 body=44 status=ok
// SIG undefined FUN_1488e4b10(void)

void FUN_1488e4b10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488e4b39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1488e4b3c FUN_1488e4b3c body=156 status=ok
// SIG undefined FUN_1488e4b3c(void)

bool FUN_1488e4b3c(longlong param_1,undefined8 param_2)

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


