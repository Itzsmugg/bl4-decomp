// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140d64518 FUN_140d64518 body=318 status=ok
// SIG undefined FUN_140d64518(void)

undefined8 FUN_140d64518(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x28);
      lVar8 = 0;
      do {
        iVar1 = *(int *)(lVar9 + 0xc + lVar8);
        if ((iVar1 == 0) || (uVar2 = *(uint *)(lVar9 + 8 + lVar8), (int)uVar2 < 0)) {
LAB_140d64645:
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            plVar7 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar1)) ||
               ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_140d64645;
            lVar6 = *plVar7;
          }
        }
        if (lVar6 == param_2) {
          return CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
        }
        lVar8 = lVar8 + 0x18;
      } while ((longlong)*(int *)(param_1 + 0x30) * 0x18 != lVar8);
    }
    if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
      lVar9 = 0;
      do {
        uVar2 = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xc + lVar9);
        uVar4 = (ulonglong)uVar2;
        if ((uVar2 == 0) ||
           (uVar3 = *(uint *)(*(longlong *)(param_1 + 0x98) + 8 + lVar9), (int)uVar3 < 0)) {
LAB_140d64641:
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          if ((int)uVar3 < DAT_14c9647dc) {
            plVar7 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if (((plVar7 == (longlong *)0x0) || (*(uint *)(plVar7 + 2) != uVar2)) ||
               (uVar4 = (ulonglong)*(uint *)(plVar7 + 1), (*(uint *)(plVar7 + 1) & 0x10200000) != 0)
               ) goto LAB_140d64641;
            lVar8 = *plVar7;
          }
        }
        uVar5 = CONCAT71((int7)(uVar4 >> 8),lVar8 == param_2);
        if (lVar8 == param_2) {
          return uVar5;
        }
        bVar10 = (longlong)*(int *)(param_1 + 0xa0) * 0x18 + -0x18 == lVar9;
        lVar9 = lVar9 + 0x18;
        if (bVar10) {
          return uVar5;
        }
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 140d6465e FUN_140d6465e body=172 status=ok
// SIG undefined FUN_140d6465e(void)

undefined8 * FUN_140d6465e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1406ed334(param_1,uVar1);
  *param_1 = &PTR_FUN_14b379a20;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x3ff00000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x3ff0000000000000;
  param_1[0x2b] = 0x3ff0000000000000;
  param_1[0x2c] = 0x3ff0000000000000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(byte *)((longlong)param_1 + 0x17a) = *(byte *)((longlong)param_1 + 0x17a) | 2;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x101;
  return param_1;
}



// FUNCTION 140d6470a FUN_140d6470a body=221 status=ok
// SIG undefined FUN_140d6470a(void)

void FUN_140d6470a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if (param_2 == 0) {
    local_28 = 0;
    iVar1 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    iVar1 = *(int *)(lVar2 + 0x10);
    if (*(int *)(lVar2 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar4 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar4) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 0x10);
      bVar4 = iVar1 == 0;
      if (bVar4) {
        *(int *)(lVar2 + 0x10) = iVar3;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar4) {
        iVar1 = iVar3;
      }
    }
  }
  local_24 = iVar1;
  FUN_140d647e8(param_1 + 0x138);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d647e8 FUN_140d647e8 body=125 status=ok
// SIG undefined FUN_140d647e8(void)

int FUN_140d647e8(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar4 = (longlong)(int)param_1[1] << 3;
    iVar2 = 0;
    do {
      cVar1 = FUN_14472d054(lVar3,param_2);
      if (cVar1 != '\0') {
        if (iVar2 != 1) {
          return -iVar2;
        }
        break;
      }
      lVar3 = lVar3 + 8;
      iVar2 = iVar2 + -1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_140d64866(param_1,iVar2);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = *param_2;
  return iVar2;
}



// FUNCTION 140d64866 FUN_140d64866 body=353 status=ok
// SIG undefined FUN_140d64866(void)

void FUN_140d64866(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d648eb;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_140d648eb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 140d649c8 FUN_140d649c8 body=159 status=ok
// SIG undefined FUN_140d649c8(void)

void FUN_140d649c8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a4e0a60;
  plVar3 = *(longlong **)(param_1 + 0xe0);
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
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_140d64a68(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_140cc571e(param_1 + 0x28);
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140d64a63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140d64a68 FUN_140d64a68 body=55 status=ok
// SIG undefined FUN_140d64a68(void)

void FUN_140d64a68(longlong *param_1)

{
  FUN_140d64aa0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d64aa0 FUN_140d64aa0 body=123 status=ok
// SIG undefined FUN_140d64aa0(void)

void FUN_140d64aa0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1447a08a2(param_1,param_2);
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



// FUNCTION 140d64b1c FUN_140d64b1c body=1484 status=ok
// SIG undefined FUN_140d64b1c(void)

undefined8 FUN_140d64b1c(longlong param_1,uint param_2,longlong *param_3,byte param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 auStack_128 [35];
  byte local_105;
  uint local_104;
  longlong *local_100;
  longlong local_f8;
  undefined8 *local_f0;
  ulonglong local_e8;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  uint uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  void *local_98;
  ulonglong uStack_90;
  undefined1 local_88;
  void *local_80;
  ulonglong uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  byte bStack_64;
  uint local_60;
  int iStack_5c;
  uint3 local_54;
  undefined5 uStack_51;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_1 + 0x14) == 0) goto LAB_140d64cec;
  uVar12 = *(uint *)(param_1 + 0x10);
  uVar8 = 0;
  if (((int)uVar12 < 0) || (DAT_14c9647dc <= (int)uVar12)) goto LAB_140d64cee;
  plVar6 = (longlong *)
           ((ulonglong)((uVar12 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
  if ((plVar6 != (longlong *)0x0) &&
     ((((int)plVar6[2] == *(int *)(param_1 + 0x14) && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0))
      && (*plVar6 != 0)))) {
    if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
      lVar15 = *(longlong *)(*plVar6 + 0x548);
    }
    else {
      lVar15 = 0;
    }
    uVar10 = (ulonglong)param_2 & 0xffff;
    if ((int)uVar10 < *(int *)(lVar15 + 0x30)) {
      lVar7 = lVar15 + 0x18;
      uVar12 = 1 << ((byte)param_2 & 0x1f);
      lVar13 = *(longlong *)(lVar15 + 0x28);
      if (*(longlong *)(lVar15 + 0x28) == 0) {
        lVar13 = lVar7;
      }
      if ((*(uint *)(lVar13 + (uVar10 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
        lVar13 = *(longlong *)(lVar15 + 8);
        lVar11 = uVar10 * 0x128;
        if (param_2 >> 0x10 == (uint)*(ushort *)(lVar13 + 0x11c + lVar11)) {
          plVar6 = *(longlong **)(lVar13 + 0xf0 + lVar11);
          lVar13 = lVar13 + lVar11;
          local_105 = param_4;
          local_104 = uVar12;
          local_100 = param_3;
          local_f8 = lVar7;
          if (plVar6 == (longlong *)0x0) {
            cVar5 = '\x01';
          }
          else {
            local_f0 = *(undefined8 **)(lVar13 + 0x100);
            local_e8 = *(ulonglong *)(lVar13 + 0x108);
            if (local_e8 != 0) {
              LOCK();
              *(int *)(local_e8 + 8) = *(int *)(local_e8 + 8) + 1;
              UNLOCK();
            }
            cVar5 = (**(code **)(*plVar6 + 0x28))(plVar6,&local_f0);
          }
          if ((cVar5 == '\0') || ((DAT_14cab2be4 & *(uint *)(param_1 + 0x80) & 0xfffff9ff) != 0)) {
LAB_140d64de1:
            local_f0 = (undefined8 *)0x0;
            local_e8 = local_e8 & 0xffffffff00000000;
            uStack_51 = 0;
            uStack_4c = 0;
            local_e0 = (uint)local_54 << 8;
            iStack_dc = 0;
            iStack_d8 = 0;
            uStack_d4 = uStack_d4 & 0xffffff00;
            local_d0 = 0;
            uStack_c8 = &DAT_10000003c;
            local_c0 = 0x8000000000000000;
            uStack_b8 = 0x3f800000;
            local_b0 = 0;
            local_a8 = 0;
            uStack_a0 = 0;
            local_98 = (void *)0x0;
            uStack_90 = 0;
            local_88 = 0;
            local_80 = (void *)0x0;
            uStack_78 = 0;
            local_70 = 0;
            uStack_6c = 0x80000000;
            uStack_68 = 0;
            bStack_64 = bStack_64 & 0xc0;
            iStack_5c = (uint)local_105 * 4 + 2;
            local_60 = param_2;
            FUN_14009d848(&local_f0,local_100);
            iVar3 = *(int *)(param_1 + 0x20);
            *(uint *)(param_1 + 0x20) = iVar3 + 1U;
            if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
              FUN_140411b96((longlong *)(param_1 + 0x18),iVar3);
            }
            lVar7 = *(longlong *)(param_1 + 0x18);
            lVar11 = (longlong)iVar3 * 0x98;
            lVar15 = lVar7 + lVar11;
            *(undefined8 *)(lVar7 + lVar11) = 0;
            *(undefined4 *)(lVar7 + 8 + lVar11) = 0;
            FUN_14009d848(lVar15,&local_f0);
            uVar10 = uStack_a0;
            lVar13 = local_a8;
            *(undefined8 *)(lVar7 + 0x30 + lVar11) = local_c0;
            puVar1 = (undefined4 *)(lVar7 + 0x20 + lVar11);
            *puVar1 = (undefined4)local_d0;
            puVar1[1] = local_d0._4_4_;
            puVar1[2] = (undefined4)uStack_c8;
            puVar1[3] = uStack_c8._4_4_;
            piVar2 = (int *)(lVar7 + 0x10 + lVar11);
            *piVar2 = local_e0;
            piVar2[1] = iStack_dc;
            piVar2[2] = iStack_d8;
            piVar2[3] = uStack_d4;
            *(undefined8 *)(lVar7 + 0x38 + lVar11) = uStack_b8;
            *(undefined4 *)(lVar7 + 0x40 + lVar11) = local_b0;
            *(undefined8 *)(lVar7 + 0x48 + lVar11) = 0;
            *(int *)(lVar7 + 0x50 + lVar11) = (int)uStack_a0;
            if ((int)uStack_a0 == 0) {
              *(undefined4 *)(lVar15 + 0x54) = 0;
            }
            else {
              puVar14 = (undefined8 *)(lVar7 + lVar11 + 0x48);
              FUN_14753cf4a(puVar14,uStack_a0 & 0xffffffff,0);
              FUN_14753cfbd(*puVar14,lVar13,uVar10 & 0xffffffff);
            }
            pvVar4 = local_98;
            *(undefined8 *)(lVar15 + 0x58) = 0;
            lVar7 = (longlong)(int)uStack_90;
            *(int *)(lVar15 + 0x60) = (int)uStack_90;
            if (lVar7 == 0) {
              *(undefined4 *)(lVar15 + 100) = 0;
            }
            else {
              FUN_1456c5740((undefined8 *)(lVar15 + 0x58),uStack_90 & 0xffffffff,0);
              memcpy(*(void **)(lVar15 + 0x58),pvVar4,lVar7 << 3);
            }
            pvVar4 = local_80;
            *(undefined1 *)(lVar15 + 0x68) = local_88;
            *(undefined8 *)(lVar15 + 0x70) = 0;
            lVar7 = (longlong)(int)uStack_78;
            *(int *)(lVar15 + 0x78) = (int)uStack_78;
            if (lVar7 == 0) {
              *(undefined4 *)(lVar15 + 0x7c) = 0;
            }
            else {
              FUN_1447bda9e((undefined8 *)(lVar15 + 0x70),uStack_78 & 0xffffffff,0);
              memcpy(*(void **)(lVar15 + 0x70),pvVar4,lVar7 << 2);
            }
            *(ulonglong *)(lVar15 + 0x85) = CONCAT17(bStack_64,CONCAT43(uStack_68,uStack_6c._1_3_));
            *(ulonglong *)(lVar15 + 0x80) = CONCAT44(uStack_6c,local_70);
            *(ulonglong *)(lVar15 + 0x90) = CONCAT44(iStack_5c,local_60);
            if (local_80 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (local_98 != (void *)0x0) {
              FUN_1400020a8();
            }
            FUN_1447bda9c(local_a8,uStack_a0 & 0xffffffff);
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
            if ((int)local_e8 == 0) {
LAB_140d65003:
              if (local_f0 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_f0 != (undefined8 *)0x0) {
              (**(code **)*local_f0)(local_f0,0);
              FUN_1446efa72(&local_f0,0,0,0x10);
              local_e8 = local_e8 & 0xffffffff00000000;
              goto LAB_140d65003;
            }
            uVar8 = 1;
            goto LAB_140d64cee;
          }
          if ((longlong)*(int *)(param_1 + 0x20) != 0) {
            lVar7 = *(longlong *)(param_1 + 0x18);
            lVar9 = (longlong)*(int *)(param_1 + 0x20) * 0x98;
            do {
              if (*(uint *)(lVar7 + 0x90) == param_2) {
                if (lVar7 != 0) goto LAB_140d64de1;
                break;
              }
              lVar7 = lVar7 + 0x98;
              lVar9 = lVar9 + -0x98;
            } while (lVar9 != 0);
          }
          if ((longlong)*(int *)(param_1 + 0x40) != 0) {
            lVar7 = *(longlong *)(param_1 + 0x38);
            lVar9 = (longlong)*(int *)(param_1 + 0x40) * 0xa0;
            do {
              if (*(uint *)(lVar7 + 0x90) == param_2) {
                if (lVar7 != 0) goto LAB_140d64de1;
                break;
              }
              lVar7 = lVar7 + 0xa0;
              lVar9 = lVar9 + -0xa0;
            } while (lVar9 != 0);
          }
          FUN_14009ff54(lVar13);
          FUN_14009e586(lVar13);
          if ((longlong *)*local_100 != (longlong *)0x0 && (int)local_100[1] != 0) {
            (**(code **)(*(longlong *)*local_100 + 0x60))();
          }
          if ((local_105 != 0) && ((int)uVar10 < *(int *)(lVar15 + 0x30))) {
            lVar7 = local_f8;
            if (*(longlong *)(lVar15 + 0x28) != 0) {
              lVar7 = *(longlong *)(lVar15 + 0x28);
            }
            if (((*(uint *)(lVar7 + (uVar10 >> 5) * 4) & local_104) != 0) &&
               (param_2 >> 0x10 == (uint)*(ushort *)(*(longlong *)(lVar15 + 8) + 0x11c + lVar11))) {
              FUN_14009d5de(lVar15,param_2);
            }
          }
        }
      }
    }
  }
LAB_140d64cec:
  uVar8 = 0;
LAB_140d64cee:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 140d650ea FUN_140d650ea body=124 status=ok
// SIG undefined FUN_140d650ea(void)

longlong * FUN_140d650ea(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x2a8,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b707c60;
  FUN_140d65166(plVar3 + 2,0);
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



// FUNCTION 140d65166 FUN_140d65166 body=352 status=ok
// SIG undefined FUN_140d65166(void)

undefined8 * FUN_140d65166(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((((param_2 == 0) || (lVar1 = FUN_144a2f878(), lVar1 == 0)) ||
       (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
      (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
       lVar1 + 0x30)) && (param_2 = DAT_14cba8288, DAT_14cba8288 == 0)) {
    local_40 = &local_20;
    local_20 = FUN_141864c34;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_1464cee30;
    local_48 = &LAB_148bfac22;
    local_50 = &LAB_140f21842;
    local_58 = &DAT_149e063b2;
    local_60 = 0;
    local_68 = 0x10000004;
    local_70 = 0x10;
    local_78 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    param_2 = DAT_14cba8288;
  }
  FUN_140d652c8(param_1,param_2);
  *param_1 = &PTR_FUN_14b95b540;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  param_1[0x52] = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28c) = 0;
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140d652c8 FUN_140d652c8 body=401 status=ok
// SIG undefined FUN_140d652c8(void)

undefined8 * FUN_140d652c8(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (DAT_14cb5b388 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146431698;
      local_48 = &LAB_1486775cb;
      local_50 = &LAB_1464cee35;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 0x10;
      local_78 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
      if (DAT_14cb5b388 == 0) goto LAB_140d6544d;
    }
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(param_2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8)
        == DAT_14cb5b388 + 0x30)) goto LAB_140d65321;
  }
LAB_140d6544d:
  param_2 = FUN_144a78b9e();
LAB_140d65321:
  FUN_140aed452(param_1,param_2);
  *param_1 = &PTR_FUN_14b3e7f40;
  *(undefined2 *)(param_1 + 0x45) = 0x100;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0x42200000;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0x41a00000;
  param_1[0x4b] = 0x4248000042c80000;
  *(undefined4 *)(param_1 + 0x4c) = 0x42720000;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d6545a FUN_140d6545a body=519 status=ok
// SIG undefined FUN_140d6545a(void)

void FUN_140d6545a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  local_50 = param_2[1];
  FUN_140d65662();
  iVar1 = *(int *)(param_1 + 0x4c0);
  if (iVar1 == 0) {
    uVar13 = 1;
    uVar15 = 0;
    iVar10 = 0;
    iVar8 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x4b8);
    if (*(uint **)(param_1 + 0x4b8) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x4a8);
    }
    uVar14 = *puVar4;
    if (uVar14 == 0) {
      iVar10 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar10 = iVar1 + -1;
      }
      uVar15 = 0;
      uVar9 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar9 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar9 == uVar15) goto LAB_140d654c0;
        iVar10 = iVar10 + 0x20;
        uVar14 = puVar4[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar9 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar8) {
      iVar8 = iVar1;
    }
  }
  if (iVar8 != iVar1) {
    uVar14 = 0xffffffff;
    iVar3 = iVar1;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x498) + 8 + (longlong)iVar8 * 0x18);
      if ((plVar2 != (longlong *)0x0) && (*plVar2 != -1)) {
        (*(code *)*param_2)(param_2[1],*(longlong *)(param_1 + 0x498) + (longlong)iVar8 * 0x18 + 8);
        iVar3 = *(int *)(param_1 + 0x4c0);
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar4 = *(uint **)(param_1 + 0x4b8);
      if (*(uint **)(param_1 + 0x4b8) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0x4a8);
      }
      iVar8 = (int)uVar15;
      lVar11 = (longlong)iVar8;
      uVar5 = puVar4[lVar11] & uVar14;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar8) {
          iVar7 = iVar8;
        }
        if (iVar8 < iVar6) {
          lVar12 = 0;
          do {
            uVar5 = puVar4[lVar11 + lVar12 + 1];
            if (uVar5 != 0) {
              uVar15 = (ulonglong)(iVar8 + (int)lVar12 + 1);
              uVar14 = 0xffffffff;
              goto LAB_140d65590;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar7 - lVar11 != lVar12);
          uVar14 = 0xffffffff;
          iVar8 = iVar7;
        }
        uVar15 = (ulonglong)(iVar8 + 1);
        iVar8 = iVar3;
      }
      else {
LAB_140d65590:
        uVar13 = (ulonglong)(-uVar5 & uVar5);
        uVar9 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar8 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar8) {
          iVar8 = iVar3;
        }
      }
    } while (iVar8 != iVar1);
  }
LAB_140d654c0:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d65662 FUN_140d65662 body=233 status=ok
// SIG undefined FUN_140d65662(void)

void FUN_140d65662(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  longlong local_48 [4];
  
  local_48[3] = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong **)(param_1 + 0x110) != (longlong *)0x0) &&
     (**(longlong **)(param_1 + 0x110) != -1)) {
    (*(code *)*param_2)(param_2[1],param_1 + 0x110);
  }
  local_48[0] = param_1 + 0x120;
  local_48[1] = param_1 + 400;
  local_48[2] = param_1 + 0x1a0;
  lVar4 = 0;
  do {
    plVar1 = (longlong *)local_48[lVar4];
    lVar5 = (longlong)(int)plVar1[1];
    if (0 < lVar5) {
      uVar6 = lVar5 + 1;
      lVar5 = lVar5 * 0xc0 + -0x10;
      do {
        lVar2 = *plVar1;
        plVar3 = *(longlong **)(lVar2 + lVar5);
        if ((plVar3 != (longlong *)0x0) && (*plVar3 != -1)) {
          (*(code *)*param_2)(param_2[1],lVar2 + lVar5);
        }
        uVar6 = uVar6 - 1;
        lVar5 = lVar5 + -0xc0;
      } while (1 < uVar6);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  if ((local_48[3] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d6574c FUN_140d6574c body=309 status=ok
// SIG undefined FUN_140d6574c(void)

void FUN_140d6574c(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
                  undefined8 param_5,char param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong **)(param_1 + 0x10) == (longlong *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
  }
  FUN_140d65882(param_1,param_2,param_3,uVar1,param_5);
  if (param_6 != '\0') {
    if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong **)(param_1 + 0x10) == (longlong *)0x0)) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    }
    if ((param_4 != (longlong *)0x0) && (plVar2 != param_4)) {
      uVar1 = FUN_140eca14a();
      plVar2 = (longlong *)(**(code **)(*param_4 + 0x288))(param_4,uVar1);
      if (plVar2 != (longlong *)0x0) {
        uVar1 = FUN_140eca14a();
        plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
        if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
          lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
          if ((lVar4 != 0) && (lVar4 != param_1)) {
            if ((*(longlong *)(param_1 + 8) == 0) ||
               (*(longlong **)(param_1 + 0x10) == (longlong *)0x0)) {
              uVar1 = 0;
            }
            else {
              uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
            }
            FUN_140d65882(lVar4,param_2,2,uVar1);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140d65882 FUN_140d65882 body=153 status=ok
// SIG undefined FUN_140d65882(void)

void FUN_140d65882(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar3 = (longlong)*(int *)(param_1 + 0x88) * 0x38;
    do {
      cVar1 = FUN_140d6591c(lVar2,param_2);
      if (cVar1 != '\0') {
        if (lVar2 == 0) {
          return;
        }
        lVar3 = 0x20;
        if (param_3 != '\x02') {
          if (param_3 != '\x01') {
            return;
          }
          lVar3 = 8;
        }
        if (lVar2 + lVar3 == 0) {
          return;
        }
        FUN_140d65a54(lVar2 + lVar3,param_4,param_5);
        return;
      }
      lVar2 = lVar2 + 0x38;
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 140d6591c FUN_140d6591c body=311 status=ok
// SIG undefined FUN_140d6591c(void)

ulonglong FUN_140d6591c(uint *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if (param_2 == 0) {
    local_28 = 0;
    uVar3 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = (ulonglong)*(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar2 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar2 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar2 = uVar5;
      }
      uVar3 = (ulonglong)uVar2;
    }
  }
  local_24 = (uint)uVar3;
  uVar5 = *param_1;
  uVar2 = param_1[1];
  if ((uVar5 == local_28) && (uVar2 == local_24)) {
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  else if (((uVar2 == 0) ||
           ((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
            (lVar4 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar4 == 0))))
          || ((*(uint *)(lVar4 + 0x10) != uVar2 || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))) {
    uVar3 = FUN_144729dda(&local_28);
    uVar3 = uVar3 ^ 1;
  }
  else {
    uVar3 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 140d65a54 FUN_140d65a54 body=173 status=ok
// SIG undefined FUN_140d65a54(void)

void FUN_140d65a54(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140d65aeb;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140d65aeb:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140d65b02 FUN_140d65b02 body=3853 status=ok
// SIG undefined FUN_140d65b02(void)

ulonglong FUN_140d65b02(longlong *param_1,undefined4 param_2,longlong *param_3,uint param_4,
                       undefined4 param_5,char param_6)

{
  int *piVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  void *_Src;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined2 *puVar11;
  byte bVar12;
  int iVar13;
  byte bVar14;
  int iVar15;
  longlong lVar16;
  undefined2 *puVar17;
  longlong lVar18;
  ushort uVar19;
  ulonglong uVar20;
  ushort uVar21;
  ulonglong uVar22;
  uint uVar23;
  bool bVar24;
  bool bVar25;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  char local_100;
  longlong *local_f0;
  uint local_e8;
  undefined4 local_e4;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined2 *local_c0;
  int local_b8;
  undefined2 *local_b0;
  int local_a8;
  void *local_a0;
  uint local_98;
  undefined4 local_94;
  longlong *local_90;
  ushort local_82;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar18 = *param_3;
  lVar4 = param_3[1];
  plVar5 = (longlong *)param_3[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  uVar23 = *(uint *)(param_1 + 0x16);
  if (param_4 == 0) {
    uVar23 = uVar23 & 0xfffffffe;
    *(uint *)(param_1 + 0x16) = uVar23;
  }
  local_f0 = param_1;
  local_e8 = param_4;
  local_e4 = param_2;
  local_e0 = param_3;
  (**(code **)(*DAT_14c968088 + 0x58))();
  bVar24 = (char)local_82 != '\0';
  if (lVar18 == DAT_14c964d70) {
    if (local_f0[0x1b] == DAT_14cb0dd38) {
      bVar25 = true;
    }
    else {
      bVar25 = local_f0[0x1b] == DAT_14cb0dd40;
    }
  }
  else {
    bVar25 = false;
  }
  plVar9 = (longlong *)FUN_140389788();
  lVar10 = plVar9[0x22];
  if (lVar10 == 0) {
    (**(code **)(*plVar9 + 1000))(plVar9);
    lVar10 = plVar9[0x22];
  }
  if ((longlong)*(int *)(lVar10 + 0x138) != 0) {
    lVar16 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar10 + 0x130) + lVar16) == lVar18) {
        if (!(bool)((((uVar23 >> 1 & 1) != 0 || bVar24) || local_e8 != 0) | bVar25))
        goto LAB_140d65ee0;
        break;
      }
      lVar16 = lVar16 + 0x18;
    } while ((longlong)*(int *)(lVar10 + 0x138) * 0x18 != lVar16);
  }
  plVar9 = (longlong *)FUN_140389788();
  lVar10 = plVar9[0x22];
  if (lVar10 == 0) {
    (**(code **)(*plVar9 + 1000))(plVar9);
    lVar10 = plVar9[0x22];
  }
  bVar24 = (local_82 & 0xc) != 0;
  bVar14 = bVar24 + 2;
  if ((local_82 & 0x30) == 0) {
    bVar14 = bVar24;
  }
  bVar12 = bVar14 + 4;
  if ((local_82 & 3) == 0) {
    bVar12 = bVar14;
  }
  bVar14 = bVar12 | 8;
  if ((local_82 & 0xc0) == 0) {
    bVar14 = bVar12;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_80 = lVar18;
  local_78 = lVar4;
  local_70 = plVar5;
  FUN_140d66a10(&local_68,&local_80,bVar14);
  if (((local_e8 != 0) || (DAT_14cb0e234 == 0)) || ((bVar25 && ((char)local_82 == '\0')))) {
LAB_140d65c7c:
    bVar24 = false;
  }
  else {
    iVar15 = FUN_1469ba826(lVar10 + 0x140,&local_68);
    bVar24 = true;
    if (iVar15 != 1) goto LAB_140d65c7c;
  }
  plVar9 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  plVar9 = local_f0;
  if (bVar24) {
LAB_140d65ee0:
    plVar9 = local_f0;
    lVar18 = local_f0[0x1b];
    if (lVar18 == DAT_14cb0dd38) {
      (**(code **)(*local_f0 + 0x3c0))(local_f0,DAT_14cb0dd40);
    }
    else {
      if (lVar18 != DAT_14cb0dd40) {
        cVar6 = '\x01';
        if (lVar18 == 0) {
          (**(code **)(*local_f0 + 0x3c0))(local_f0);
          *(byte *)(plVar9 + 0x16) = *(byte *)(plVar9 + 0x16) | 1;
        }
        goto LAB_140d65cbd;
      }
      (**(code **)(*local_f0 + 0x3c0))(local_f0,0);
    }
    *(byte *)(plVar9 + 0x16) = *(byte *)(plVar9 + 0x16) | 1;
    goto LAB_140d660b0;
  }
  local_90 = local_f0;
  if (local_f0[0x1b] == 0) {
LAB_140d65cbb:
    cVar6 = '\0';
    goto LAB_140d65cbd;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_68 = lVar18;
  local_60 = lVar4;
  local_58 = plVar5;
  cVar6 = (**(code **)(*local_f0 + 0x2d8))(local_f0,&local_68,local_e8);
  if (cVar6 != '\0') goto LAB_140d660b0;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_80 = lVar18;
  local_78 = lVar4;
  local_70 = plVar5;
  cVar6 = (**(code **)(*plVar9 + 0x2e0))(plVar9,&local_80);
  plVar3 = local_f0;
  if ((cVar6 != '\0') || (param_6 != '\0')) goto LAB_140d65cbd;
  if ((local_e8 == 1) && (lVar18 == DAT_14c964dd0)) {
    if ((int)plVar9[0x10] < 2) {
      (**(code **)(*local_f0 + 0x3c0))(local_f0,0);
      plVar9 = plVar3;
    }
    else {
      FUN_1400b22c2(&local_a0,&DAT_149e02088);
      (**(code **)(*local_f0 + 0x2a0))(local_f0,&local_a0);
      if (local_a0 != (void *)0x0) {
        FUN_1400020a8();
      }
      plVar9 = local_f0;
      (**(code **)(*local_f0 + 0x2a8))(local_f0,0);
      *(undefined8 *)((longlong)plVar9 + 0xcc) = 0;
      FUN_140056680(&local_a0,&DAT_149dfb77a);
      if ((void **)(plVar9 + 0x12) == &local_a0) {
        if (local_a0 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (local_f0[0x12] != 0) {
          FUN_1400020a8();
        }
        local_f0[0x12] = (longlong)local_a0;
        local_a0 = (void *)0x0;
        *(uint *)(local_f0 + 0x13) = local_98;
        *(undefined4 *)((longlong)local_f0 + 0x9c) = local_94;
      }
      plVar9 = local_f0;
      FUN_14020fad6(local_f0 + 0x14,0);
      FUN_14148f26f(plVar9[0x21],(int)plVar9[0x22]);
      *(undefined4 *)(plVar9 + 0x22) = 0;
      if (*(int *)((longlong)plVar9 + 0x114) != 0) {
        FUN_140d6767a(local_f0 + 0x21);
      }
      *(byte *)(local_f0 + 0x19) = *(byte *)(local_f0 + 0x19) & 0xfe;
      plVar9 = local_f0;
    }
  }
  else {
    if ((local_e8 != 1) || (lVar18 != DAT_14c964d88)) {
      if ((local_e8 & 0xfffffffd) != 0) {
        cVar6 = '\0';
        if ((lVar18 != DAT_14c966e98) && (cVar6 = '\0', lVar18 != DAT_14c966fb8)) {
          cVar6 = lVar18 != DAT_14c966fa0;
        }
        goto LAB_140d65cbd;
      }
      if (lVar18 == DAT_14c964e78) {
        uVar23 = *(uint *)(plVar9 + 0x16);
LAB_140d660be:
        if ((uVar23 & 2) == 0) {
          iVar15 = (int)plVar9[0x22];
          if (iVar15 == 0) {
            FUN_140d67720(plVar9);
          }
          else {
            if (lVar18 == DAT_14c964d70) {
              *(uint *)(plVar9 + 0x16) = uVar23 | 1;
            }
            if (*(char *)(plVar9[0x2a] + 0x54) == '\x01') {
              FUN_140d676aa(&local_90);
            }
            else {
              iVar8 = (int)plVar9[0x1a] + 1;
              iVar7 = 0x14;
              if (iVar15 < 0x14) {
                iVar7 = iVar15;
              }
              if (iVar8 < iVar7) {
                *(int *)(plVar9 + 0x1a) = iVar8;
              }
              else {
                if (*(int *)((longlong)plVar9 + 0xcc) < iVar15 + -0x14) {
                  iVar15 = *(int *)((longlong)plVar9 + 0xcc) + 1;
                }
                else {
                  *(undefined4 *)(plVar9 + 0x1a) = 0;
                  iVar15 = 0;
                }
                *(int *)((longlong)plVar9 + 0xcc) = iVar15;
              }
            }
          }
          FUN_1457a0aa6(plVar9);
        }
        goto LAB_140d65cbb;
      }
      if (lVar18 == DAT_14c964d70) {
        uVar23 = *(uint *)(plVar9 + 0x16);
        if ((uVar23 & 4) != 0) goto LAB_140d660be;
LAB_140d662f9:
        if ((uVar23 & 2) == 0) {
          iVar15 = (int)local_f0[0x22];
          if (iVar15 == 0) {
            FUN_140d67720(local_f0);
          }
          else if (lVar18 == DAT_14c964d70) {
            *(uint *)(local_f0 + 0x16) = uVar23 | 1;
            if (1 < iVar15) {
              iVar7 = (int)local_f0[0x15];
              if (iVar7 == (int)local_f0[0x10]) {
                if (1 < iVar7) {
                  lVar18 = 0;
                  while( true ) {
                    uVar19 = *(ushort *)(local_f0[0x14] + lVar18);
                    uVar20 = (ulonglong)uVar19;
                    uVar21 = *(ushort *)(local_f0[0xf] + lVar18);
                    if (uVar19 != uVar21) break;
                    if (uVar19 == 0) goto LAB_140d66323;
LAB_140d66944:
                    lVar18 = lVar18 + 2;
                  }
                  if ((uVar21 | uVar19) < 0x80) {
                    uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
                    uVar22 = (ulonglong)uVar21;
                    uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
                    if ((&DAT_149e05da0)[uVar20] == (&DAT_149e05da0)[uVar22]) goto LAB_140d66944;
                  }
                  if (uVar19 != uVar21) goto LAB_140d66346;
                }
              }
              else if ((int)local_f0[0x10] + iVar7 != 1) goto LAB_140d66346;
LAB_140d66323:
              if (*(char *)(local_f0[0x2a] + 0x54) == '\x01') {
                iVar8 = (int)local_f0[0x1a] + 1;
                iVar7 = 0x14;
                if (iVar15 < 0x14) {
                  iVar7 = iVar15;
                }
                if (iVar8 < iVar7) {
                  *(int *)(local_f0 + 0x1a) = iVar8;
                }
                else {
                  if (*(int *)((longlong)local_f0 + 0xcc) < iVar15 + -0x14) {
                    iVar15 = *(int *)((longlong)local_f0 + 0xcc) + 1;
                  }
                  else {
                    *(undefined4 *)(local_f0 + 0x1a) = 0;
                    iVar15 = 0;
                  }
                  *(int *)((longlong)local_f0 + 0xcc) = iVar15;
                }
              }
              else {
                FUN_140d676aa(&local_90);
              }
            }
          }
          else if (1 < iVar15) goto LAB_140d66323;
LAB_140d66346:
          plVar9 = local_f0;
          FUN_1457a0aa6(local_f0);
          goto LAB_140d660b0;
        }
      }
      else {
        if (lVar18 == DAT_14c964ea8) {
          uVar23 = *(uint *)(plVar9 + 0x16);
          goto LAB_140d662f9;
        }
        if (lVar18 == DAT_14c966f40) {
          iVar15 = (int)plVar9[0x11];
          uVar23 = *(uint *)(plVar9 + 0x16);
          if (0 < iVar15) {
            if ((uVar23 & 2) == 0) {
              iVar7 = iVar15 + -1;
            }
            else {
              iVar15 = FUN_1437745b6(local_f0 + 0xf,iVar15,1);
              iVar7 = 0;
              if (0 < iVar15) {
                iVar7 = iVar15;
              }
              iVar15 = (int)plVar3[0x11];
            }
            iVar8 = (int)local_f0[0x10];
            iVar13 = iVar8 + -1;
            if (iVar8 == 0) {
              iVar13 = 0;
            }
            puVar11 = &DAT_149dfb77a;
            if (iVar8 != 0) {
              puVar11 = (undefined2 *)local_f0[0xf];
            }
            iVar8 = iVar13;
            if (iVar13 - iVar15 < iVar13) {
              iVar8 = iVar13 - iVar15;
            }
            iVar15 = 0;
            if (0 < iVar8) {
              iVar15 = iVar8;
            }
            FUN_140056680(&local_b0,
                          (longlong)puVar11 + ((longlong)iVar13 * 2 - (ulonglong)(uint)(iVar15 * 2))
                         );
            puVar11 = &DAT_149dfb77a;
            if (local_a8 != 0) {
              puVar11 = local_b0;
            }
            puVar17 = &DAT_149dfb77a;
            iVar15 = (int)local_f0[0x10] + -1;
            if ((int)local_f0[0x10] == 0) {
              iVar15 = 0;
            }
            else {
              puVar17 = (undefined2 *)local_f0[0xf];
            }
            if (iVar7 < iVar15) {
              iVar15 = iVar7;
            }
            if (iVar15 < 1) {
              iVar15 = 0;
            }
            FUN_14006620a(&local_c0,puVar17,iVar15);
            puVar17 = &DAT_149dfb77a;
            if (local_b8 != 0) {
              puVar17 = local_c0;
            }
            FUN_140002266(&local_a0,L"%s%s",puVar17,puVar11);
            (**(code **)(*local_f0 + 0x2a0))(local_f0,&local_a0);
            if (local_a0 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (local_c0 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_b0 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            plVar9 = local_f0;
            (**(code **)(*local_f0 + 0x2a8))(local_f0,iVar7);
            pbVar2 = (byte *)(plVar9 + 0x19);
            *pbVar2 = *pbVar2 & 0xfe;
            uVar23 = *(uint *)(plVar9 + 0x16);
          }
          *(uint *)(local_f0 + 0x16) = uVar23 | 1;
          plVar9 = local_f0;
          goto LAB_140d660b0;
        }
        if (lVar18 != DAT_14c966f58) {
          if (lVar18 == DAT_14c964e60) {
            if ((*(byte *)(plVar9 + 0x16) & 2) == 0) {
              iVar15 = 1;
              if (1 < (int)local_f0[0x11]) {
                iVar15 = (int)local_f0[0x11];
              }
              plVar9 = local_f0;
              iVar15 = iVar15 + -1;
            }
            else {
              iVar15 = (int)local_f0[0x11];
              iVar7 = (int)local_f0[0x10] + -1;
              if ((int)local_f0[0x10] == 0) {
                iVar7 = 0;
              }
              if (iVar15 < 2) {
                iVar15 = 1;
              }
              iVar8 = FUN_1437745b6(local_f0 + 0xf,iVar15 + -1,1);
              plVar9 = local_f0;
              iVar15 = iVar8 + 1;
              if (iVar7 <= iVar8 + 1) {
                iVar15 = iVar7;
              }
            }
LAB_140d667eb:
            lVar18 = *plVar9;
          }
          else {
            if (lVar18 == DAT_14c964e90) {
              if ((*(byte *)(plVar9 + 0x16) & 2) == 0) {
                iVar7 = (int)local_f0[0x11] + 1;
                iVar15 = (int)local_f0[0x10] + -1;
                if ((int)local_f0[0x10] == 0) {
                  iVar15 = 0;
                }
                plVar9 = local_f0;
                if (iVar7 <= iVar15) {
                  iVar15 = iVar7;
                }
              }
              else {
                iVar15 = (int)local_f0[0x10] + -1;
                if ((int)local_f0[0x10] == 0) {
                  iVar15 = 0;
                }
                iVar7 = (int)local_f0[0x11] + 1;
                if (iVar15 <= iVar7) {
                  iVar7 = iVar15;
                }
                iVar15 = FUN_1437745b6(local_f0 + 0xf,iVar7,0);
                plVar9 = local_f0;
              }
              goto LAB_140d667eb;
            }
            if (lVar18 != DAT_14c964e48) {
              cVar6 = '\0';
              if (lVar18 != DAT_14c964e30) goto LAB_140d65cbd;
              iVar15 = (int)plVar9[0x10] + -1;
              if ((int)plVar9[0x10] == 0) {
                iVar15 = 0;
              }
              goto LAB_140d667eb;
            }
            lVar18 = *plVar9;
            iVar15 = 0;
          }
          (**(code **)(lVar18 + 0x2a8))(plVar9,iVar15);
          goto LAB_140d660b0;
        }
        iVar15 = (int)plVar9[0x10];
        iVar7 = iVar15 + -1;
        if (iVar15 == 0) {
          iVar7 = 0;
        }
        if ((int)plVar9[0x11] < iVar7) {
          plVar3 = local_f0 + 0xf;
          iVar8 = (int)plVar9[0x11] + 1;
          if ((*(byte *)(local_f0 + 0x16) & 2) != 0) {
            iVar8 = FUN_1437745b6(plVar3,iVar8,0);
            iVar15 = (int)local_f0[0x10];
            iVar7 = iVar15 + -1;
            if (iVar15 == 0) {
              iVar7 = 0;
            }
          }
          puVar11 = &DAT_149dfb77a;
          if (iVar15 != 0) {
            puVar11 = (undefined2 *)*plVar3;
          }
          iVar15 = iVar7;
          if (iVar7 - iVar8 < iVar7) {
            iVar15 = iVar7 - iVar8;
          }
          iVar8 = 0;
          if (0 < iVar15) {
            iVar8 = iVar15;
          }
          FUN_140056680(&local_b0,
                        (longlong)puVar11 + ((longlong)iVar7 * 2 - (ulonglong)(uint)(iVar8 * 2)));
          puVar11 = &DAT_149dfb77a;
          if (local_a8 != 0) {
            puVar11 = local_b0;
          }
          puVar17 = &DAT_149dfb77a;
          iVar15 = (int)local_f0[0x10] + -1;
          if ((int)local_f0[0x10] == 0) {
            iVar15 = 0;
          }
          else {
            puVar17 = (undefined2 *)*plVar3;
          }
          if ((int)local_f0[0x11] < iVar15) {
            iVar15 = (int)local_f0[0x11];
          }
          if (iVar15 < 1) {
            iVar15 = 0;
          }
          FUN_14006620a(&local_c0,puVar17,iVar15);
          puVar17 = &DAT_149dfb77a;
          if (local_b8 != 0) {
            puVar17 = local_c0;
          }
          FUN_140002266(&local_a0,L"%s%s",puVar17,puVar11);
          (**(code **)(*local_f0 + 0x2a0))(local_f0,&local_a0);
          if (local_a0 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_c0 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_b0 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      cVar6 = '\x01';
      plVar9 = local_f0;
      goto LAB_140d65cbd;
    }
    uVar23 = *(uint *)(plVar9 + 0x10);
    if ((int)uVar23 < 2) {
      (**(code **)(*plVar9 + 0x3c0))(plVar9,0);
    }
    else {
      local_a0 = (void *)0x0;
      _Src = (void *)plVar9[0xf];
      local_98 = uVar23;
      FUN_1446dd670(&local_a0,(ulonglong)uVar23,0);
      memcpy(local_a0,_Src,(ulonglong)uVar23 * 2);
      FUN_140056680(&local_b0,&DAT_149dfb77a);
      (**(code **)(*plVar9 + 0x2a0))(plVar9,&local_b0);
      if (local_b0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      (**(code **)(*plVar9 + 0x2a8))(plVar9,0);
      (**(code **)(*plVar9 + 0x2b0))(plVar9,&local_a0);
      FUN_140056680(&local_b0,&DAT_149dfb77a);
      (**(code **)(*plVar9 + 0x2c0))(plVar9,&local_b0);
      if (local_b0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (plVar9[0x1b] == DAT_14cb0dd38) {
        (**(code **)(*plVar9 + 0x3c0))(plVar9,0);
      }
      (**(code **)(*plVar9 + 0x300))(plVar9);
      if (local_a0 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_140056680(&local_a0,&DAT_149dfb77a);
    if ((void **)(plVar9 + 0x12) == &local_a0) {
      if (local_a0 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (plVar9[0x12] != 0) {
        FUN_1400020a8();
      }
      plVar9[0x12] = (longlong)local_a0;
      local_a0 = (void *)0x0;
      *(uint *)(plVar9 + 0x13) = local_98;
      *(undefined4 *)((longlong)plVar9 + 0x9c) = local_94;
    }
    FUN_14020fad6(plVar9 + 0x14,0);
  }
LAB_140d660b0:
  cVar6 = '\x01';
LAB_140d65cbd:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  uVar20 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
  if ((cVar6 == '\0') && (plVar9[0x1b] != DAT_14cb0dd38)) {
    if (plVar9[0x1b] == DAT_14cb0dd40) {
      local_d8 = *local_e0;
      local_d0 = local_e0[1];
      local_c8 = local_e0[2];
      if (local_c8 != 0) {
        LOCK();
        *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
        UNLOCK();
      }
      local_100 = param_6;
      local_108 = param_5;
      (**(code **)(*local_f0 + 0x340))(local_f0,local_e4,&local_d8,local_e8);
    }
    else {
      uVar20 = 0;
    }
  }
  plVar5 = (longlong *)local_e0[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar5 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar20 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d66a10 FUN_140d66a10 body=132 status=ok
// SIG undefined FUN_140d66a10(void)

undefined8 * FUN_140d66a10(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar3 = param_2[2];
  param_1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(uint *)(param_1 + 3) =
       (param_3 & 8 | param_3 >> 2 & 1) + (param_3 & 3) * 2 | *(uint *)(param_1 + 3) & 0xfffffff0;
  plVar4 = (longlong *)param_2[2];
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
  return param_1;
}



// FUNCTION 140d66a94 FUN_140d66a94 body=116 status=ok
// SIG undefined FUN_140d66a94(void)

ulonglong FUN_140d66a94(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 unaff_RBX;
  
  bVar4 = *param_2 == DAT_14c965430 || *param_2 == DAT_14c965418;
  if (bVar4) {
    if (param_3 == 0) {
      *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) | 4;
    }
    else if (param_3 == 1) {
      *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) & 0xfb;
    }
  }
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
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar4) & 0xffffffff;
}



// FUNCTION 140d66b08 FUN_140d66b08 body=403 status=ok
// SIG undefined FUN_140d66b08(void)

ulonglong FUN_140d66b08(longlong *param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined8 unaff_RDI;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_2;
  if ((lVar3 == DAT_14c965448) || (lVar3 == DAT_14c965460)) {
    plVar6 = (longlong *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (param_3 == 0) {
      *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) | 2;
    }
    else if (param_3 == 1) {
      *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0xfd;
    }
  }
  else {
    plVar6 = (longlong *)0x0;
    if ((param_3 == 0) && ((*(uint *)(param_1 + 0x16) & 2) != 0)) {
      if (lVar3 == DAT_14c966ee0) {
        plVar6 = local_38;
        local_38[0] = 0;
        local_38[1] = 0;
        FUN_140d67490(plVar6);
        (**(code **)(*param_1 + 0x2e8))(param_1,plVar6);
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (lVar3 != DAT_14c966ec8) {
          if (lVar3 == DAT_14c966eb0) {
            plVar6 = (longlong *)&DAT_00000001;
            if (1 < (int)param_1[0x10]) {
              FUN_142855b70(param_1[0xf]);
              FUN_140056680(local_38,&DAT_149dfb77a);
              (**(code **)(*param_1 + 0x2a0))(param_1,local_38);
              if (local_38[0] != 0) {
                FUN_1400020a8();
              }
              (**(code **)(*param_1 + 0x2a8))(param_1,0);
            }
          }
          else {
            plVar6 = (longlong *)0x0;
          }
          goto LAB_140d66b4d;
        }
        if ((int)param_1[0x10] == 0) {
          puVar5 = &DAT_149dfb77a;
        }
        else {
          puVar5 = (undefined2 *)param_1[0xf];
        }
        FUN_142855b70(puVar5);
      }
      plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
    }
  }
LAB_140d66b4d:
  plVar4 = (longlong *)param_2[2];
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
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (ulonglong)plVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d66c9c FUN_140d66c9c body=8 status=ok
// SIG undefined FUN_140d66c9c(void)

undefined8 FUN_140d66c9c(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// FUNCTION 140d66ca4 FUN_140d66ca4 body=458 status=ok
// SIG undefined FUN_140d66ca4(void)

void FUN_140d66ca4(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined2 *local_68;
  ulonglong local_60;
  undefined2 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (undefined2 *)0x0;
  uVar1 = *(uint *)(param_2 + 1);
  _Src = (void *)*param_2;
  local_50 = CONCAT44(local_50._4_4_,uVar1);
  if ((longlong)(int)uVar1 == 0) {
    local_50 = (ulonglong)uVar1;
    iVar6 = 0;
  }
  else {
    FUN_1446dd670(&local_58,uVar1,0);
    memcpy(local_58,_Src,(longlong)(int)uVar1 * 2);
    iVar6 = *(int *)(param_2 + 1);
  }
  uVar10 = 0;
  uVar4 = (ulonglong)(iVar6 - 1);
  if (iVar6 == 0) {
    uVar4 = uVar10;
  }
  if (0 < (int)uVar4) {
    do {
      local_78 = 0;
      local_70 = 0xffffffff;
      uVar1 = FUN_1447ee042(&local_58,&DAT_149e01f72,1,0);
      uVar7 = (uint)uVar4;
      if (uVar1 == 0xffffffff) {
        uVar1 = uVar7;
      }
      uVar2 = (int)local_50 - 1;
      puVar5 = local_58;
      if ((int)local_50 == 0) {
        uVar2 = 0;
        puVar5 = &DAT_149dfb77a;
      }
      if ((int)uVar1 < (int)uVar2) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)uVar2;
      if ((int)uVar2 < 1) {
        uVar4 = uVar10;
      }
      FUN_14006620a(&local_68,puVar5,uVar4);
      FUN_140d66e70(param_1,&local_68);
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar8 = uVar1 + 1;
      uVar2 = (int)local_50 - 1;
      if ((int)local_50 == 0) {
        uVar2 = 0;
      }
      uVar3 = uVar2;
      if ((int)uVar8 < (int)uVar2) {
        uVar3 = uVar8;
      }
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 1) {
        uVar4 = uVar10;
      }
      uVar9 = (longlong)(int)uVar1 + 0x80000000U;
      if ((longlong)(int)uVar2 <= (longlong)((longlong)(int)uVar1 + 0x80000000U)) {
        uVar9 = (longlong)(int)uVar2;
      }
      if ((longlong)uVar9 < (longlong)uVar4) {
        uVar9 = uVar4;
      }
      puVar5 = &DAT_149dfb77a;
      if ((int)local_50 != 0) {
        puVar5 = local_58;
      }
      FUN_14006620a(&local_68,puVar5 + uVar4,(int)uVar9 - (int)uVar4);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_58 = local_68;
      local_50 = local_60;
      uVar4 = (ulonglong)(uVar7 - uVar8);
    } while (uVar7 - uVar8 != 0 && (int)uVar8 <= (int)uVar7);
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d66e70 FUN_140d66e70 body=278 status=ok
// SIG undefined FUN_140d66e70(void)

void FUN_140d66e70(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *pvVar4;
  int iVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  iVar5 = *(int *)(param_1 + 0x58);
  if (*(int *)(*(longlong *)(param_1 + 0x150) + 0x28) < iVar5) {
    pvVar4 = *(void **)(param_1 + 0x50);
    FUN_1447a1747(pvVar4,1);
    iVar5 = 0;
    if (*(int *)(param_1 + 0x58) != 1) {
      memmove(pvVar4,(void *)((longlong)pvVar4 + 0x10),
              (longlong)(*(int *)(param_1 + 0x58) + -1) << 4);
      iVar5 = *(int *)(param_1 + 0x58) + -1;
    }
    *(int *)(param_1 + 0x58) = iVar5;
    FUN_140b12644(plVar1);
    *(int *)(param_1 + 0x60) = *(int *)(*(longlong *)(param_1 + 0x150) + 0x28) + -1;
    iVar5 = *(int *)(param_1 + 0x58);
  }
  else {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  }
  *(uint *)(param_1 + 0x58) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar5 + 1U) {
    FUN_1447a1bd6(plVar1,iVar5);
  }
  lVar3 = *plVar1;
  lVar6 = (longlong)iVar5 * 0x10;
  puVar2 = (undefined8 *)(lVar3 + lVar6);
  *(undefined8 *)(lVar3 + lVar6) = 0;
  iVar5 = *(int *)(param_2 + 1);
  pvVar4 = (void *)*param_2;
  *(int *)(lVar3 + 8 + lVar6) = iVar5;
  if ((longlong)iVar5 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar2,iVar5,0);
    memcpy((void *)*puVar2,pvVar4,(longlong)iVar5 * 2);
  }
  if (*(char *)(param_1 + 0x130) == '\x01') {
    *(float *)(param_1 + 0x134) = *(float *)(param_1 + 0x13c) + *(float *)(param_1 + 0x134);
  }
  return;
}



// FUNCTION 140d66f86 FUN_140d66f86 body=1063 status=ok
// SIG undefined FUN_140d66f86(void)

/* WARNING: Removing unreachable block (ram,0x000140d6730a) */
/* WARNING: Removing unreachable block (ram,0x000140d67313) */
/* WARNING: Removing unreachable block (ram,0x000140d6731e) */
/* WARNING: Removing unreachable block (ram,0x000140d67331) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d66f86(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[0x1b] == DAT_14cb0dd38) {
    (**(code **)(*param_1 + 0x328))(param_1,param_2);
  }
  else if (param_1[0x1b] == DAT_14cb0dd40) {
    (**(code **)(*param_1 + 0x360))(param_1,param_2);
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar5 = param_1[4];
    }
    else {
      lVar5 = 0;
    }
    FUN_1434f7456(lVar5,1);
  }
  if (DAT_14cb0dd38 == param_2) {
    (**(code **)(*param_1 + 800))(param_1,param_1[0x1b]);
    FUN_140898514(&DAT_14cb0dd60,1);
    (**(code **)(*DAT_14c98e618 + 0x98))(DAT_14c98e618,&local_38);
    plVar6 = plStack_30;
    param_1[0x2b] = local_38;
    plVar4 = (longlong *)param_1[0x2c];
    if (plVar4 != plStack_30) {
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plStack_30 + 0xc) = *(int *)((longlong)plStack_30 + 0xc) + 1;
        UNLOCK();
        plVar4 = (longlong *)param_1[0x2c];
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      param_1[0x2c] = (longlong)plVar6;
      plVar6 = plStack_30;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar6 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    FUN_1413f6830(DAT_14c98e618);
    plVar4 = DAT_14c98e618;
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar5 = param_1[4];
    }
    else {
      lVar5 = 0;
    }
    FUN_140761b7a(lVar5,&local_48);
    local_38 = local_48;
    plStack_30 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    FUN_140d673ae(plVar4,&local_38,2);
    plVar4 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_30 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    if (DAT_14cb0dd40 == param_2) {
      (**(code **)(*param_1 + 0x358))(param_1,param_1[0x1b]);
      FUN_1413f6830(DAT_14c98e618);
      FUN_140898514(&DAT_14cb0dd60,1);
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        lVar5 = param_1[4];
      }
      else {
        lVar5 = 0;
      }
      FUN_1434f7456(lVar5,3);
      *(undefined2 *)(param_1 + 0x26) = 0;
      *(undefined1 *)((longlong)param_1 + 0x132) = 0;
      *(undefined4 *)((longlong)param_1 + 0x134) = 0;
      goto LAB_140d6719f;
    }
    if (param_2 != 0) goto LAB_140d6719f;
    param_1[0x1b] = 0;
    *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0xf9;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    if (((param_1[0x2b] == 0) || (plVar4 = (longlong *)param_1[0x2c], plVar4 == (longlong *)0x0)) ||
       ((int)plVar4[1] < 1)) {
      (**(code **)(*DAT_14c98e618 + 0x98))(DAT_14c98e618,&local_48);
      local_38 = local_48;
      plVar4 = plStack_30;
      if (local_40 != (longlong *)0x0) {
        plStack_30 = local_40;
        plVar4 = plStack_30;
      }
    }
    else {
      iVar3 = (int)plVar4[1];
      do {
        if (iVar3 == 0) {
          local_38 = 0;
          goto LAB_140d6717d;
        }
        LOCK();
        iVar2 = (int)plVar4[1];
        bVar7 = iVar3 == iVar2;
        if (bVar7) {
          *(int *)(plVar4 + 1) = iVar3 + 1;
          iVar2 = iVar3;
        }
        iVar3 = iVar2;
        UNLOCK();
      } while (!bVar7);
      local_38 = param_1[0x2b];
      if (plVar4 == (longlong *)0x0) {
        LOCK();
        _DAT_00000008 = _DAT_00000008 + -1;
        UNLOCK();
        plVar4 = plStack_30;
        if (_DAT_00000008 == 0) {
          (*(code *)*_DAT_00000000)(0);
          LOCK();
          _DAT_0000000c = _DAT_0000000c + -1;
          UNLOCK();
          plVar4 = plStack_30;
          if (_DAT_0000000c == 0) {
            (*(code *)_DAT_00000000[2])(0);
            plVar4 = plStack_30;
          }
        }
      }
    }
    plStack_30 = plVar4;
    if (local_38 != 0) {
      FUN_1457a0e2c(DAT_14c98e618,2);
      FUN_140d673ae(DAT_14c98e618,&local_38,0);
    }
LAB_140d6717d:
    FUN_140898514(&DAT_14cb0dd60,0);
    local_40 = plStack_30;
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
LAB_140d6719f:
  param_1[0x1b] = param_2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d673ae FUN_140d673ae body=52 status=ok
// SIG undefined FUN_140d673ae(void)

void FUN_140d673ae(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 8))();
  FUN_1410a3d58(param_1,uVar1,param_2,param_3);
  return;
}



// FUNCTION 140d673e2 FUN_140d673e2 body=170 status=ok
// SIG undefined FUN_140d673e2(void)

undefined8 FUN_140d673e2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0x1150) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x1148);
    lVar6 = (longlong)*(int *)(param_1 + 0x1150) * 8;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar1 + lVar7);
      if (*(longlong *)(lVar4 + 0x360) == param_2) {
        if (lVar4 != 0) goto LAB_140d6741b;
        break;
      }
      lVar7 = lVar7 + 8;
    } while (lVar6 != lVar7);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar1 + lVar7);
      cVar2 = FUN_147dab532(lVar4 + 8,param_2);
      if (cVar2 != '\0') goto LAB_140d6741b;
      lVar7 = lVar7 + 8;
    } while (lVar6 != lVar7);
  }
  lVar4 = FUN_14572ad1a(DAT_14cb0d2b0,0);
LAB_140d6741b:
  puVar3 = &DAT_14cb0d060;
  if (*(longlong *)(lVar4 + 0x2a8) != 0) {
    puVar3 = (undefined8 *)(*(longlong *)(lVar4 + 0x2a8) + 0x38);
  }
  if (*(int *)(puVar3 + 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)*puVar3;
  }
  return uVar5;
}



// FUNCTION 140d67490 FUN_140d67490 body=488 status=ok
// SIG undefined FUN_140d67490(void)

void FUN_140d67490(undefined8 param_1)

{
  BOOL BVar1;
  HWND hWndNewOwner;
  bool bVar2;
  undefined1 auStack_68 [39];
  bool local_41;
  int local_40;
  char local_3b;
  short local_3a;
  HANDLE local_38;
  undefined8 local_30;
  LPVOID local_28;
  LPVOID local_20;
  longlong local_18;
  int local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_1;
  hWndNewOwner = GetActiveWindow();
  BVar1 = OpenClipboard(hWndNewOwner);
  if (BVar1 == 0) {
    FUN_14020fad6(local_30,&DAT_149dfb77a);
  }
  else {
    local_38 = (HANDLE)0x0;
    local_41 = false;
    local_38 = GetClipboardData(0xd);
    local_41 = true;
    bVar2 = local_38 == (HANDLE)0x0;
    if (bVar2) {
      local_38 = GetClipboardData(1);
    }
    local_41 = !bVar2;
    if (local_38 == (HGLOBAL)0x0) {
      FUN_14020fad6(local_30,&DAT_149dfb77a);
    }
    else {
      local_20 = GlobalLock(local_38);
      if ((local_41 & 1U) == 0) {
        for (local_40 = 0; *(char *)((longlong)local_20 + (longlong)local_40) != '\0';
            local_40 = local_40 + 1) {
        }
        local_18 = 0;
        local_c = 0;
        local_10 = local_40 + 1;
        local_28 = local_20;
        if (local_10 != 0) {
          FUN_144a2dbb8(&local_18);
        }
        for (local_40 = 0; local_40 < local_10; local_40 = local_40 + 1) {
          local_3b = *(char *)((longlong)local_28 + (longlong)local_40);
          bVar2 = true;
          while (bVar2) {
            local_3a = (short)local_3b;
            bVar2 = false;
          }
          *(short *)(local_18 + (longlong)local_40 * 2) = local_3a;
        }
        FUN_14275d91a(local_30,&local_18);
        FUN_14275d8c2(&local_18);
      }
      else {
        FUN_14020fad6(local_30,local_20);
      }
      GlobalUnlock(local_38);
    }
    CloseClipboard();
  }
  if ((local_8 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d6767a FUN_140d6767a body=48 status=ok
// SIG undefined FUN_140d6767a(void)

void FUN_140d6767a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 140d676aa FUN_140d676aa body=117 status=ok
// SIG undefined FUN_140d676aa(void)

void FUN_140d676aa(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = *param_1;
  iVar1 = *(int *)(lVar3 + 0xd0);
  if (0 < iVar1) {
    *(int *)(lVar3 + 0xd0) = iVar1 + -1;
    return;
  }
  if (*(int *)(lVar3 + 0xcc) < 1) {
    uVar2 = *(uint *)(lVar3 + 0x110);
    uVar4 = 0x15;
    if (0x15 < (int)uVar2) {
      uVar4 = uVar2;
    }
    *(uint *)(lVar3 + 0xcc) = uVar4 - 0x15;
    if (uVar2 < 0x15) {
      *(uint *)(lVar3 + 0xd0) = iVar1 + uVar2 + -1;
    }
    else {
      *(uint *)(lVar3 + 0xcc) = uVar4 - 0x14;
      *(int *)(lVar3 + 0xd0) = iVar1 + 0x13;
    }
  }
  else {
    *(int *)(lVar3 + 0xcc) = *(int *)(lVar3 + 0xcc) + -1;
  }
  *(byte *)(lVar3 + 200) = *(byte *)(lVar3 + 200) & 0xfe;
  return;
}



// FUNCTION 140d67720 FUN_140d67720 body=537 status=ok
// SIG undefined FUN_140d67720(void)

void FUN_140d67720(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  void *local_88;
  ulonglong uStack_80;
  void *local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  plVar1 = (longlong *)(param_1 + 0x108);
  FUN_14148f26f(*(undefined8 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x110));
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)(param_1 + 0x114) != 0) {
    FUN_140d6767a(plVar1);
  }
  lVar7 = (longlong)*(int *)(param_1 + 0x70);
  if (0 < lVar7) {
    uVar8 = lVar7 + 1;
    lVar7 = lVar7 * 0x10 + -8;
    do {
      local_78 = (void *)0x0;
      uStack_70 = 0;
      local_88 = (void *)0x0;
      uStack_80 = 0;
      local_68 = 0xffb4b4b4;
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x68) + lVar7);
      iVar4 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      FUN_1402980a2(&local_88,*(undefined8 *)(*(longlong *)(param_1 + 0x68) + -8 + lVar7),iVar4);
      local_68 = *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 0x5c);
      FUN_14020fad6(&local_78,&DAT_149e06342);
      iVar3 = *(int *)(param_1 + 0x110);
      *(uint *)(param_1 + 0x110) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x114) < iVar3 + 1U) {
        FUN_140789234(plVar1,iVar3);
      }
      pvVar5 = local_88;
      puVar2 = (undefined8 *)(*plVar1 + (longlong)iVar3 * 0x28);
      *puVar2 = 0;
      lVar6 = (longlong)(int)uStack_80;
      *(int *)(puVar2 + 1) = (int)uStack_80;
      if (lVar6 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar2,uStack_80 & 0xffffffff,0);
        memcpy((void *)*puVar2,pvVar5,lVar6 * 2);
      }
      pvVar5 = local_78;
      puVar2[2] = 0;
      lVar6 = (longlong)(int)uStack_70;
      *(int *)(puVar2 + 3) = (int)uStack_70;
      if (lVar6 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
      }
      else {
        FUN_1446dd670(puVar2 + 2,uStack_70 & 0xffffffff,0);
        memcpy((void *)puVar2[2],pvVar5,lVar6 * 2);
      }
      *(undefined4 *)(puVar2 + 4) = local_68;
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar8 = uVar8 - 1;
      lVar7 = lVar7 + -0x10;
    } while (1 < uVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d6793a FUN_140d6793a body=4585 status=ok
// SIG undefined FUN_140d6793a(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140d6793a(longlong ******param_1,ulonglong param_2,longlong param_3,longlong param_4,
                  char param_5)

{
  longlong ****pppplVar1;
  undefined8 ******ppppppuVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *****ppppplVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *****ppppplVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 ******ppppppuVar13;
  undefined2 *puVar14;
  longlong *******ppppppplVar15;
  longlong lVar16;
  longlong ***ppplVar17;
  longlong *******ppppppplVar18;
  longlong ***ppplVar19;
  longlong ******pppppplVar20;
  ulonglong *puVar21;
  ushort uVar22;
  ushort uVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong ***ppplVar26;
  undefined8 *****pppppuVar27;
  undefined8 *****pppppuVar28;
  longlong ****pppplVar29;
  bool bVar30;
  bool bVar31;
  undefined1 auStack_9c8 [32];
  undefined8 *****local_9a8;
  longlong ******local_9a0;
  undefined *local_998;
  code *local_990;
  bool local_979;
  longlong ******local_978;
  longlong local_970;
  byte local_961;
  longlong local_960;
  undefined4 local_958;
  undefined4 local_954;
  longlong ******local_950;
  uint local_944;
  longlong ***local_940;
  ulonglong local_938;
  undefined2 *local_930;
  longlong ****local_928;
  longlong ***local_920;
  undefined8 local_918;
  longlong ******local_910;
  longlong local_908 [2];
  undefined2 *local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined8 *******local_8d0;
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined2 *local_8b8;
  undefined8 uStack_8b0;
  longlong *****local_8a8;
  int local_8a0;
  undefined4 local_89c;
  longlong *******local_898;
  longlong *plStack_890;
  longlong *******local_888;
  longlong *plStack_880;
  undefined2 *local_878;
  int local_870;
  longlong *******local_868;
  longlong *plStack_860;
  undefined4 local_858;
  undefined4 uStack_854;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  int local_848;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_9c8;
  local_960 = param_4;
  local_938 = param_2;
  if ((*(byte *)((longlong)param_1[2] + 0xd4) & 4) != 0) {
    if (param_3 == 0) {
      FUN_140d6a474(param_1[2],&local_878);
    }
    else {
      FUN_140056680(&local_878,param_3);
    }
    FUN_1457a1806(param_1);
    local_978 = param_1;
    local_970 = param_3;
    if (local_870 == (int)plStack_860) {
      local_979 = true;
      if (1 < local_870) {
        lVar16 = 0;
        while( true ) {
          uVar22 = *(ushort *)((longlong)local_878 + lVar16);
          uVar9 = (ulonglong)uVar22;
          uVar23 = *(ushort *)((longlong)local_868 + lVar16);
          if (uVar22 != uVar23) break;
          if (uVar22 == 0) goto LAB_140d67a1c;
LAB_140d6889b:
          lVar16 = lVar16 + 2;
        }
        if ((uVar23 | uVar22) < 0x80) {
          uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          uVar25 = (ulonglong)uVar23;
          uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar25];
          if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar25]) goto LAB_140d6889b;
        }
        if (uVar22 != uVar23) goto LAB_140d679db;
      }
    }
    else if ((int)plStack_860 + local_870 == 1) {
      local_979 = true;
    }
    else {
LAB_140d679db:
      FUN_1457a0f7a(param_1,&local_888);
      if (local_870 == (int)plStack_880) {
        local_979 = true;
        param_1 = local_978;
        param_3 = local_970;
        if (1 < local_870) {
          lVar16 = 0;
          while( true ) {
            uVar22 = *(ushort *)((longlong)local_878 + lVar16);
            uVar5 = (uint)uVar22;
            uVar23 = *(ushort *)((longlong)local_888 + lVar16);
            uVar24 = (uint)uVar23;
            if (uVar22 != uVar23) {
              if ((uVar23 | uVar22) < 0x80) {
                uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar22];
                uVar24 = (uint)(byte)(&DAT_149e05da0)[uVar23];
                if ((&DAT_149e05da0)[uVar22] == (&DAT_149e05da0)[uVar23]) goto LAB_140d68924;
              }
              iVar6 = uVar5 - uVar24;
              goto LAB_140d68ac6;
            }
            if (uVar22 == 0) break;
LAB_140d68924:
            lVar16 = lVar16 + 2;
          }
          iVar6 = 0;
LAB_140d68ac6:
          local_979 = iVar6 == 0;
        }
      }
      else {
        local_979 = (int)plStack_880 + local_870 == 1;
      }
      if (local_888 != (longlong *******)0x0) {
        FUN_1400020a8();
      }
    }
LAB_140d67a1c:
    if (local_868 != (longlong *******)0x0) {
      FUN_1400020a8();
    }
    ppppppplVar18 = (longlong *******)param_1[2];
    if ((*(byte *)((longlong)ppppppplVar18 + 0xd5) & 4) == 0) {
      local_888 = (longlong *******)0x0;
      plStack_880 = (longlong *)0x0;
      local_958 = 0;
    }
    else {
      local_888 = (longlong *******)0x0;
      plStack_880 = (longlong *)0x0;
      if (((ulonglong)param_1[1] & 0x10) == 0) {
        local_868 = (longlong *******)0x0;
        plStack_860 = (longlong *)0x0;
        lVar16 = FUN_144a79778(local_978);
        if (lVar16 == DAT_14c951640) {
          local_8a8 = local_978[3];
          FUN_1400021e4(&local_8a8,&local_898);
          if (local_868 != (longlong *******)0x0) {
            FUN_1400020a8();
          }
          local_868 = local_898;
          plStack_860 = plStack_890;
        }
        else {
          FUN_1401031ac(local_978,lVar16,&local_868);
        }
        local_898 = (longlong *******)local_978[2][3];
        FUN_1400021e4(&local_898,&local_8a8);
        FUN_1449b8608(&local_8b8,&local_868,&DAT_149e001d8);
        FUN_1401c7f3e(&local_898,&local_8b8,&local_8a8);
        if (local_888 != (longlong *******)0x0) {
          FUN_1400020a8();
        }
        local_888 = local_898;
        plStack_880 = plStack_890;
        local_898 = (longlong *******)0x0;
        plStack_890 = (longlong *)0x0;
        if (local_8b8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_8a8 != (longlong *****)0x0) {
          FUN_1400020a8();
        }
        uVar12 = (*(code *)(*local_978)[0x48])(local_978,&local_888);
        if (local_868 != (longlong *******)0x0) {
          uVar12 = FUN_1400020a8();
        }
        ppppppplVar18 = (longlong *******)local_978[2];
        local_958 = (undefined4)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
        param_1 = local_978;
        param_3 = local_970;
      }
      else {
        local_958 = 0;
        param_1 = local_978;
        param_3 = local_970;
      }
    }
    pppppplVar20 = ppppppplVar18[0x22];
    if (pppppplVar20 == (longlong ******)0x0) {
      (*(code *)(*ppppppplVar18)[0x7d])(ppppppplVar18);
      pppppplVar20 = ppppppplVar18[0x22];
    }
    local_954 = 0;
    if ((pppppplVar20 != param_1) && (param_5 != '\0')) {
      local_954 = (undefined4)CONCAT71((int7)((ulonglong)local_960 >> 8),DAT_14c872ce0 == local_960)
      ;
    }
    pppplVar29 = param_1[2][0xe];
    if (pppplVar29 != (longlong ****)0x0) {
      local_938 = local_938 | 0x4000;
      local_930 = (undefined2 *)&DAT_149e06124;
      if (local_979 == false) {
        local_930 = &DAT_149dfb77a;
      }
      local_961 = (byte)local_958 ^ 1;
      local_950 = pppppplVar20;
      do {
        if ((local_938 & ~(ulonglong)pppplVar29[7]) == 0) {
          if (((uint)pppplVar29[7] >> 0x12 & 1) == 0) {
            ppppplVar10 = param_1[2];
          }
          else {
            ppppplVar10 = (longlong *****)FUN_14496b3f0(pppplVar29);
          }
          local_928 = pppplVar29 + 4;
          FUN_1400021e4(local_928,&local_898);
          if ((char)local_958 == '\0') {
            local_868 = (longlong *******)0x0;
            plStack_860 = (longlong *)0x0;
            FUN_1401031ac(ppppplVar10,0,&local_868);
            if (local_888 != (longlong *******)0x0) {
              FUN_1400020a8();
            }
            local_888 = local_868;
            plStack_880 = plStack_860;
            (*(code *)(*param_1)[0x47])(param_1,&local_888);
          }
          puVar14 = local_878;
          if ((param_3 == 0) && (((ulonglong)pppplVar29[7] & 0x40000) != 0)) {
            uVar12 = FUN_14496b3f0(pppplVar29);
            FUN_140d6a474(uVar12,&local_8a8);
          }
          else {
            local_8a8 = (longlong *****)0x0;
            lVar16 = (longlong)local_870;
            local_8a0 = local_870;
            if (lVar16 == 0) {
              local_89c = 0;
            }
            else {
              FUN_1446dd670(&local_8a8,local_870,0);
              memcpy(local_8a8,puVar14,lVar16 * 2);
            }
          }
          ppplVar19 = pppplVar29[7];
          ppppplVar7 = (longlong *****)FUN_14496b3f0(pppplVar29);
          ppppplVar10 = param_1[2];
          if ((*(byte *)((longlong)ppppplVar10 + 0xd7) & 0x40) == 0) {
            ppppppplVar18 =
                 (longlong *******)
                 CONCAT71((int7)((ulonglong)ppppppplVar18 >> 8),
                          ppppplVar7 != ppppplVar10 & local_961);
          }
          else {
            ppppppplVar18 = (longlong *******)0x0;
          }
          pppplVar1 = ppppplVar10[8];
          ppplVar26 = pppplVar1[0x22];
          if (ppplVar26 == (longlong ***)0x0) {
            (*(code *)(*pppplVar1)[0x7d])(pppplVar1);
            ppplVar26 = pppplVar1[0x22];
          }
          ppplVar17 = pppplVar29[1];
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
            FUN_1446ddbd2();
            local_990 = FUN_140b31576;
            local_998 = &DAT_14c951a38;
            local_9a0 = (longlong ******)0x0;
            local_9a8 = (undefined8 *****)0x208001;
            FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
            atexit(FUN_14280cbf7);
            _Init_thread_footer(&DAT_14c951ae0);
          }
          if (DAT_14c951a98 == 0) {
            bVar30 = ppplVar17 != (longlong ***)0x0;
            if (ppplVar17 != (longlong ***)&DAT_14c951a90 && bVar30) {
              do {
                ppplVar17 = (longlong ***)ppplVar17[6];
                bVar30 = ppplVar17 != (longlong ***)0x0;
                param_3 = local_970;
                if (ppplVar17 == (longlong ***)&DAT_14c951a90) break;
              } while (ppplVar17 != (longlong ***)0x0);
            }
          }
          else {
            bVar30 = ((ulonglong)ppplVar17[3] & DAT_14c951a98) != 0;
          }
          ppplVar17 = pppplVar29[1];
          local_940 = ppplVar26;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952900) && (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1)) {
            local_998 = (undefined *)FUN_1446ddbd2();
            local_990 = FUN_1468e4cee;
            local_9a8 = (undefined8 *****)0x800000008001;
            local_9a0 = (longlong ******)0x0;
            FUN_14000176a(&DAT_14c9528b0,L"FSetProperty",0x800000000000,0);
            atexit(FUN_142817fb7);
            _Init_thread_footer(&DAT_14c952900);
          }
          if (DAT_14c9528b8 == 0) {
            bVar31 = ppplVar17 != (longlong ***)0x0;
            if (ppplVar17 != (longlong ***)&DAT_14c9528b0 && bVar31) {
              do {
                ppplVar17 = (longlong ***)ppplVar17[6];
                bVar31 = ppplVar17 != (longlong ***)0x0;
                param_3 = local_970;
                if (ppplVar17 == (longlong ***)&DAT_14c9528b0) break;
              } while (ppplVar17 != (longlong ***)0x0);
            }
          }
          else {
            bVar31 = ((ulonglong)ppplVar17[3] & DAT_14c9528b8) != 0;
          }
          if ((bool)(bVar30 | bVar31)) {
            ppppppplVar15 = (longlong *******)&DAT_149dfb77a;
            if ((int)plStack_880 != 0) {
              ppppppplVar15 = local_888;
            }
            lVar16 = FUN_140d6a126(local_960,ppppppplVar15,1,&local_8a8);
            FUN_140002266(&local_8b8);
            if (lVar16 != 0) {
              puVar14 = &DAT_149dfb77a;
              if ((int)uStack_8b0 != 0) {
                puVar14 = local_8b8;
              }
              FUN_1446f470e(&local_8c0,puVar14,1);
              FUN_1457a0ede(local_960);
            }
            if ((((uint)ppplVar19 >> 0x1d & 1) != 0) ||
               (((char)ppppppplVar18 != '\0' &&
                (cVar3 = (*(code *)(*pppplVar29)[0x19])(pppplVar29), cVar3 != '\0')))) {
LAB_140d68765:
              param_3 = local_970;
              if (local_8b8 != (undefined2 *)0x0) {
                FUN_1400020a8();
                param_3 = local_970;
              }
              goto LAB_140d67ca3;
            }
            if (!bVar30) {
              if (bVar31) {
                lVar16 = (longlong)*(int *)((longlong)pppplVar29 + 0x44);
                plStack_860 = (longlong *)((longlong)local_978 + lVar16);
                local_868 = (longlong *******)pppplVar29[0xe];
                local_848 = *(int *)(pppplVar29 + 0x11);
                local_858 = *(undefined4 *)(pppplVar29 + 0xf);
                uStack_854 = *(undefined4 *)((longlong)pppplVar29 + 0x7c);
                uStack_850 = *(undefined4 *)(pppplVar29 + 0x10);
                uStack_84c = *(undefined4 *)((longlong)pppplVar29 + 0x84);
                if (1 < *(int *)((longlong)local_978 + lVar16 + 8) -
                        *(int *)((longlong)local_978 + lVar16 + 0x34)) {
                  ppppppplVar18 = (longlong *******)&local_8d0;
                  local_8d0 = &local_868;
                  local_8c8 = 0xffffffffffffffff;
                  FUN_14000a0a0(ppppppplVar18);
                  if (-1 < (int)(uint)local_8c8) {
                    ppppppplVar18 = &local_910;
                    do {
                      ppppppuVar2 = local_8d0[1];
                      if (*(int *)(ppppppuVar2 + 5) <= (int)(uint)local_8c8) break;
                      ppppppuVar13 = ppppppuVar2 + 2;
                      if ((undefined8 ******)ppppppuVar2[4] != (undefined8 ******)0x0) {
                        ppppppuVar13 = (undefined8 ******)ppppppuVar2[4];
                      }
                      if ((*(uint *)((longlong)ppppppuVar13 + (ulonglong)((uint)local_8c8 >> 5) * 4)
                           >> ((uint)local_8c8 & 0x1f) & 1) == 0) break;
                      local_8f8 = (undefined2 *)0x0;
                      uStack_8f0 = 0;
                      local_9a8 = (undefined8 *****)
                                  ((longlong)(int)(uint)local_8c8 * (longlong)local_848 +
                                  *plStack_860);
                      local_9a0 = local_978;
                      local_990 = (code *)0x0;
                      local_998 = (undefined *)CONCAT44(local_998._4_4_,0x20);
                      (*(code *)(*pppplVar29[0xe])[0x1e])(pppplVar29[0xe],&local_8f8,local_9a8,0);
                      puVar14 = &DAT_149dfb77a;
                      if ((int)uStack_8f0 != 0) {
                        puVar14 = local_8f8;
                      }
                      FUN_140056680(local_908,puVar14);
                      puVar14 = &DAT_149dfb77a;
                      if ((int)uStack_8b0 != 0) {
                        puVar14 = local_8b8;
                      }
                      FUN_1446f470e(ppppppplVar18,puVar14,1);
                      ppppppplVar15 = (longlong *******)&DAT_149dfb77a;
                      if ((int)plStack_880 != 0) {
                        ppppppplVar15 = local_888;
                      }
                      local_9a8 = &local_8a8;
                      FUN_140d68b26(local_960,ppppppplVar15);
                      if (local_908[0] != 0) {
                        FUN_1400020a8();
                      }
                      if (local_8f8 != (undefined2 *)0x0) {
                        FUN_1400020a8();
                      }
                      FUN_14000a0a0(&local_8d0);
                    } while (-1 < (int)(uint)local_8c8);
                  }
                  param_1 = local_978;
                  pppppplVar20 = local_950;
                  param_3 = local_970;
                  if (local_8b8 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                    param_1 = local_978;
                    pppppplVar20 = local_950;
                    param_3 = local_970;
                  }
                  goto LAB_140d67e26;
                }
              }
              goto LAB_140d68765;
            }
            iVar6 = *(int *)((longlong)pppplVar29 + 0x44);
            ppplVar19 = pppplVar29[0xe];
            (*(code *)(*pppplVar29[0xf])[0x2f])();
            iVar4 = *(int *)((longlong)local_978 + (longlong)iVar6 + 8);
            param_1 = local_978;
            if (0 < iVar4) {
              puVar21 = (ulonglong *)((longlong)iVar6 + (longlong)local_978);
              ppppppplVar18 = (longlong *******)(longlong)*(int *)((longlong)pppplVar29[0xf] + 0x34)
              ;
              lVar16 = 0;
              lVar8 = 0;
              do {
                local_868 = (longlong *******)0x0;
                plStack_860 = (longlong *)0x0;
                if (((ulonglong)ppplVar19 & 1) == 0) {
                  uVar9 = *puVar21;
                }
                else {
                  uVar9 = *puVar21;
                  param_1 = local_978;
                  param_3 = local_970;
                  if ((uVar9 & 1) != 0) {
                    uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar21;
                  }
                }
                local_9a8 = (undefined8 *****)(uVar9 + lVar16);
                local_990 = (code *)0x0;
                local_998 = (undefined *)CONCAT44(local_998._4_4_,0x20);
                local_9a0 = param_1;
                (*(code *)(*pppplVar29[0xf])[0x1e])(pppplVar29[0xf],&local_868,local_9a8,0);
                ppppppplVar15 = (longlong *******)&DAT_149dfb77a;
                if ((int)plStack_860 != 0) {
                  ppppppplVar15 = local_868;
                }
                FUN_140056680(&local_8d0,ppppppplVar15);
                puVar14 = &DAT_149dfb77a;
                if ((int)uStack_8b0 != 0) {
                  puVar14 = local_8b8;
                }
                FUN_1446f470e(&local_8d8,puVar14,1);
                ppppppplVar15 = (longlong *******)&DAT_149dfb77a;
                if ((int)plStack_880 != 0) {
                  ppppppplVar15 = local_888;
                }
                local_9a8 = &local_8a8;
                FUN_140d68b26(local_960,ppppppplVar15);
                if (local_8d0 != (undefined8 *******)0x0) {
                  FUN_1400020a8();
                }
                if (local_868 != (longlong *******)0x0) {
                  FUN_1400020a8();
                }
                lVar8 = lVar8 + 1;
                iVar4 = (int)puVar21[1];
                lVar16 = lVar16 + (longlong)ppppppplVar18;
              } while (lVar8 < iVar4);
            }
            if ((local_979 & iVar4 == 0) != 0) {
              ppppppplVar18 = (longlong *******)&DAT_149dfb77a;
              if ((int)plStack_890 != 0) {
                ppppppplVar18 = local_898;
              }
              FUN_140002266(&local_868,&DAT_149e8db90,ppppppplVar18);
              FUN_140056680(&local_8d0,L"__ClearArray__");
              ppppppplVar18 = (longlong *******)&DAT_149dfb77a;
              if ((int)plStack_860 != 0) {
                ppppppplVar18 = local_868;
              }
              FUN_1446f470e(&local_8e0,ppppppplVar18,1);
              ppppppplVar18 = (longlong *******)&DAT_149dfb77a;
              if ((int)plStack_880 != 0) {
                ppppppplVar18 = local_888;
              }
              local_9a8 = &local_8a8;
              FUN_140d68b26(local_960,ppppppplVar18);
              if (local_8d0 != (undefined8 *******)0x0) {
                FUN_1400020a8();
              }
              param_1 = local_978;
              param_3 = local_970;
              if (local_868 != (longlong *******)0x0) {
                FUN_1400020a8();
                param_1 = local_978;
                param_3 = local_970;
              }
            }
            pppppplVar20 = local_950;
            if (local_8b8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
LAB_140d67ca3:
            memset(&local_868,0,0x800);
            uVar9 = (ulonglong)*(uint *)(pppplVar29 + 6);
            param_1 = local_978;
            pppppplVar20 = local_950;
            if (0 < (int)*(uint *)(pppplVar29 + 6)) {
              lVar16 = 0;
              local_944 = (uint)ppppppplVar18;
              local_920 = ppplVar19;
              do {
                if ((int)uVar9 != 1) {
                  FUN_1400021e4(local_928,&local_8b8);
                  puVar14 = local_8b8;
                  if ((int)uStack_8b0 == 0) {
                    puVar14 = &DAT_149dfb77a;
                  }
                  FUN_141301ee6(&local_868,L"%s[%i]",puVar14);
                  if (local_8b8 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  FUN_14020fad6(&local_898,&local_868);
                }
                pppppplVar20 = local_978;
                if (((uint)ppplVar19 >> 0x1d & 1) == 0) {
                  if ((char)ppppppplVar18 != '\0') {
                    lVar11 = *(int *)((longlong)pppplVar29 + 0x34) * lVar16;
                    lVar8 = (longlong)local_940 + lVar11 + *(int *)((longlong)pppplVar29 + 0x44);
                    if (local_940 == (longlong ***)0x0) {
                      lVar8 = 0;
                    }
                    cVar3 = (*(code *)(*pppplVar29)[0x19])
                                      (pppplVar29,
                                       (longlong)local_978 +
                                       lVar11 + *(int *)((longlong)pppplVar29 + 0x44),lVar8);
                    if (cVar3 != '\0') goto LAB_140d68428;
                  }
                  local_8b8 = (undefined2 *)0x0;
                  uStack_8b0 = 0;
                  if (pppppplVar20 == (longlong ******)0x0) {
                    pppppuVar28 = (undefined8 *****)0x0;
                  }
                  else {
                    pppppuVar28 = (undefined8 *****)
                                  ((longlong)pppppplVar20 +
                                  *(int *)((longlong)pppplVar29 + 0x34) * lVar16 +
                                  (longlong)*(int *)((longlong)pppplVar29 + 0x44));
                  }
                  pppppuVar27 = (undefined8 *****)
                                ((longlong)pppppplVar20 +
                                *(int *)((longlong)pppplVar29 + 0x34) * lVar16 +
                                (longlong)*(int *)((longlong)pppplVar29 + 0x44));
                  if ((pppppuVar27 == pppppuVar28) ||
                     (cVar3 = (*(code *)(*pppplVar29)[0x19])(pppplVar29,pppppuVar27), cVar3 == '\0')
                     ) {
                    local_990 = (code *)0x0;
                    local_998 = (undefined *)CONCAT44(local_998._4_4_,0x20);
                    local_9a8 = pppppuVar28;
                    local_9a0 = pppppplVar20;
                    (*(code *)(*pppplVar29)[0x1e])(pppplVar29,&local_8b8);
                  }
                  ppppppplVar18 = local_888;
                  iVar6 = (int)plStack_880;
                  lVar8 = FUN_14052bcbc(local_960,&local_8a8);
                  if (lVar8 != 0) {
                    if (iVar6 == 0) {
                      ppppppplVar18 = (longlong *******)&DAT_149dfb77a;
                    }
                    FUN_1410abc54(lVar8,ppppppplVar18);
                  }
                  ppplVar19 = local_920;
                  if (local_8b8 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  ppppppplVar18 = (longlong *******)(ulonglong)local_944;
                }
                else {
LAB_140d68428:
                  ppppppplVar15 = (longlong *******)&DAT_149dfb77a;
                  if ((int)plStack_890 != 0) {
                    ppppppplVar15 = local_898;
                  }
                  FUN_1446f470e(&local_918,ppppppplVar15,1);
                  ppppppplVar15 = (longlong *******)&DAT_149dfb77a;
                  if ((int)plStack_880 != 0) {
                    ppppppplVar15 = local_888;
                  }
                  FUN_1457a0ede(local_960,ppppppplVar15);
                }
                lVar16 = lVar16 + 1;
                uVar9 = (ulonglong)*(int *)(pppplVar29 + 6);
                param_1 = local_978;
                pppppplVar20 = local_950;
                param_3 = local_970;
              } while (lVar16 < (longlong)uVar9);
            }
          }
LAB_140d67e26:
          if (((char)local_954 != '\0') && (pppppplVar20 != param_1)) {
            if ((*(byte *)((longlong)pppplVar29 + 0x3b) & 0x40) == 0) {
              (*(code *)(*pppplVar29)[0x20])(pppplVar29);
            }
            else {
              memcpy((void *)((longlong)*(int *)((longlong)pppplVar29 + 0x44) +
                             (longlong)pppppplVar20),
                     (void *)((longlong)*(int *)((longlong)pppplVar29 + 0x44) + (longlong)param_1),
                     (longlong)*(int *)(pppplVar29 + 6) *
                     (longlong)*(int *)((longlong)pppplVar29 + 0x34));
            }
          }
          if (local_8a8 != (longlong *****)0x0) {
            FUN_1400020a8();
          }
          if (local_898 != (longlong *******)0x0) {
            FUN_1400020a8();
          }
        }
        pppplVar29 = (longlong ****)pppplVar29[9];
      } while (pppplVar29 != (longlong ****)0x0);
    }
    if (DAT_14c872ce0 == local_960) {
      puVar14 = local_878;
      if (local_870 == 0) {
        puVar14 = &DAT_149dfb77a;
      }
      FUN_140056680(&local_868,puVar14);
      FUN_140d6d8de(local_960,0,&local_868);
      if (local_868 != (longlong *******)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_888 != (longlong *******)0x0) {
      FUN_1400020a8();
    }
    if (local_878 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_9c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d68b26 FUN_140d68b26 body=166 status=ok
// SIG undefined FUN_140d68b26(void)

bool FUN_140d68b26(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_5 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_5;
  }
  FUN_140056680(local_40,puVar2);
  lVar1 = FUN_14052bcbc(param_1,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (lVar1 != 0) {
    FUN_140d68bce(lVar1,param_2,param_3,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d68bce FUN_140d68bce body=510 status=ok
// SIG undefined FUN_140d68bce(void)

undefined8 FUN_140d68bce(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined2 *local_90;
  int local_88;
  undefined4 uStack_84;
  longlong local_78;
  undefined8 local_60;
  undefined8 *local_58;
  undefined2 **local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = param_3;
  FUN_140056680(&local_90);
  uVar2 = FUN_140d68e64(param_1,&local_90);
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_98 = 7;
  FUN_140de70ba(&local_90,uVar2,param_3,param_4);
  local_58 = &local_60;
  local_50 = &local_90;
  FUN_1406e1016(uVar2,local_44);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_84,local_88) != 0) {
    FUN_1400020a8();
  }
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 1;
  lVar1 = *(longlong *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    FUN_140056680(&local_90);
    uVar5 = 0;
    iVar4 = local_88 + -1;
    if (local_88 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      puVar3 = local_90;
      if (local_88 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      lVar7 = 0;
      uVar5 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar7] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar7]) -
                0x20;
        uVar8 = (uint)(uVar5 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar8 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar7 = lVar7 + 1;
      } while (iVar4 != (int)lVar7);
    }
    uVar2 = FUN_140d68dce(lVar1,uVar5,&local_90);
    if (local_90 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_98 = 1;
    FUN_140de70ba(&local_90,0,0,param_4);
    local_58 = &local_60;
    local_50 = &local_90;
    FUN_1406e1016(uVar2,local_44);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_84,local_88) != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140d68dce FUN_140d68dce body=148 status=ok
// SIG undefined FUN_140d68dce(void)

longlong FUN_140d68dce(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_140b7f766();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0xb8;
    if (lVar3 + lVar2 != 0) goto LAB_140d68e0a;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_1457a100a(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0xb8;
LAB_140d68e0a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d68e64 FUN_140d68e64 body=1010 status=ok
// SIG undefined FUN_140d68e64(void)

longlong FUN_140d68e64(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  int local_fc;
  int local_f8 [2];
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  undefined1 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  iVar2 = *(int *)(param_2 + 1);
  uVar4 = 0;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  if (0 < iVar6) {
    if (iVar2 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    lVar8 = 0;
    uVar4 = 0;
    do {
      uVar7 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
              0x20;
      uVar10 = (uint)(uVar4 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar4 ^ uVar7) & 0xff) * 4);
      uVar4 = (ulonglong)
              (uVar10 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar7 >> 8 & 0xff) * 4));
      lVar8 = lVar8 + 1;
    } while (iVar6 != (int)lVar8);
  }
  iVar2 = FUN_14052bbf0(param_1,uVar4,param_2);
  if (iVar2 == -1) {
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  }
  else {
    lVar8 = *param_1;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    if (lVar8 + (longlong)iVar2 * 0xc0 != 0) {
      lVar8 = lVar8 + (longlong)iVar2 * 0xc0;
      goto LAB_140d691ba;
    }
  }
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 1;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  FUN_140d69788(param_1,local_f8);
  *local_f0 = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(local_f0 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)local_f0 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_f0,iVar2,0);
    memcpy((void *)*local_f0,_Src,(longlong)iVar2 * 2);
  }
  FUN_140d692d6(local_f0 + 2,&local_e8);
  FUN_140d69258(local_f0 + 0xc);
  *(undefined1 *)(local_f0 + 0x16) = local_48;
  *(undefined4 *)(local_f0 + 0x17) = 0xffffffff;
  local_fc = local_f8[0];
  iVar2 = *(int *)(local_f0 + 1);
  uVar7 = 0;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  if (0 < iVar6) {
    if (iVar2 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*local_f0;
    }
    lVar8 = 0;
    uVar7 = 0;
    do {
      uVar10 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
               0x20;
      uVar7 = uVar7 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar7 ^ uVar10) & 0xff) * 4);
      uVar7 = uVar7 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar10 >> 8 & 0xff) * 4);
      lVar8 = lVar8 + 1;
    } while (iVar6 != (int)lVar8);
  }
  local_108 = 0;
  cVar1 = FUN_140d69354(param_1,uVar7,local_f0,&local_fc);
  if (cVar1 == '\0') {
    uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar10 < 4) {
      iVar2 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar2 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar2 <= (int)param_1[9])) {
      uVar7 = (int)param_1[9] - 1U & uVar7;
      *(uint *)((longlong)local_f0 + 0xbc) = uVar7;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      *(undefined4 *)(local_f0 + 0x17) =
           *(undefined4 *)
            ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
           local_fc;
    }
    else {
      *(int *)(param_1 + 9) = iVar2;
      FUN_140d69a94(param_1);
    }
  }
  lVar5 = (longlong)local_fc;
  lVar8 = *param_1;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(&local_98);
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  lVar8 = lVar8 + lVar5 * 0xc0;
  FUN_140b7cbe4(&local_e8);
LAB_140d691ba:
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return lVar8 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d69258 FUN_140d69258 body=125 status=ok
// SIG undefined FUN_140d69258(void)

undefined8 * FUN_140d69258(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140d693fe();
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



// FUNCTION 140d692d6 FUN_140d692d6 body=125 status=ok
// SIG undefined FUN_140d692d6(void)

undefined8 * FUN_140d692d6(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140d695b6();
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



// FUNCTION 140d69354 FUN_140d69354 body=169 status=ok
// SIG undefined FUN_140d69354(void)

void FUN_140d69354(longlong *param_1,undefined8 param_2,void *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar4 = FUN_14052bbf0();
    if (iVar4 != -1) {
      lVar2 = *param_1;
      plVar1 = (longlong *)(lVar2 + (longlong)iVar4 * 0xc0);
      FUN_140b7cb8c(plVar1 + 2);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      memmove((void *)(lVar2 + (longlong)iVar4 * 0xc0),param_3,0xb8);
      FUN_140fe6550(param_1,*param_4,1);
      *param_4 = iVar4;
      uVar3 = 1;
      goto LAB_140d6938a;
    }
  }
  uVar3 = 0;
LAB_140d6938a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 140d693fe FUN_140d693fe body=439 status=ok
// SIG undefined FUN_140d693fe(void)

longlong * FUN_140d693fe(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + 8 + (longlong)iVar6 * 0x20) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (((local_60._4_4_ != iVar7) || (local_68 != plVar1)) || (local_78 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140d695b6 FUN_140d695b6 body=465 status=ok
// SIG undefined FUN_140d695b6(void)

longlong * FUN_140d695b6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar7 = 0;
    local_58 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, local_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        if (*(longlong *)(lVar2 + 0x20 + (longlong)iVar6 * 0x40) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar2 + (longlong)iVar6 * 0x40 + 0x10) != 0) {
          FUN_1400020a8();
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (((local_70._4_4_ != iVar7) || (local_78 != plVar1)) || (local_88 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
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
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140d69788 FUN_140d69788 body=504 status=ok
// SIG undefined FUN_140d69788(void)

int * FUN_140d69788(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_140d69980(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0xc0);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0xc0) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0xc0 + *param_1;
  return param_2;
}



// FUNCTION 140d69980 FUN_140d69980 body=275 status=ok
// SIG undefined FUN_140d69980(void)

void FUN_140d69980(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xc0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140d69a94 FUN_140d69a94 body=825 status=ok
// SIG undefined FUN_140d69a94(void)

void FUN_140d69a94(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined2 *puVar17;
  int iVar18;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_140d69afa;
  }
  uVar3 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar9 != uVar3);
LAB_140d69afa:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar6 = 0;
    uVar11 = 1;
    iVar10 = 0;
    iVar18 = 0;
  }
  else {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar14;
    if (uVar9 == 0) {
      iVar18 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar18 = iVar7 + -1;
      }
      uVar6 = 0;
      uVar11 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar11 = uVar6;
      }
      iVar18 = 0;
      do {
        if (uVar11 == uVar6) {
          return;
        }
        iVar18 = iVar18 + 0x20;
        uVar9 = puVar14[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar6 = 0;
      iVar18 = 0;
    }
    uVar11 = (ulonglong)(-uVar9 & uVar9);
    uVar8 = uVar11 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar10 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar10) {
      iVar10 = iVar7;
    }
  }
  if (iVar10 < iVar7) {
    uVar9 = 0xffffffff;
    do {
      puVar2 = (undefined8 *)(*param_1 + (longlong)iVar10 * 0xc0);
      iVar7 = *(int *)(*param_1 + 8 + (longlong)iVar10 * 0xc0);
      iVar12 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar12 = 0;
      }
      uVar3 = 0;
      if (0 < iVar12) {
        puVar17 = &DAT_149dfb77a;
        if (iVar7 != 0) {
          puVar17 = (undefined2 *)*puVar2;
        }
        lVar15 = 0;
        uVar3 = 0;
        do {
          uVar4 = ((uint)(ushort)puVar17[lVar15] +
                  (uint)(0x19 < (ushort)puVar17[lVar15] - 0x61) * 0x20) - 0x20;
          uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar3 ^ uVar4) & 0xff) * 4);
          uVar3 = uVar3 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar3 & 0xff ^ uVar4 >> 8 & 0xff) * 4);
          lVar15 = lVar15 + 1;
        } while (iVar12 != (int)lVar15);
      }
      uVar8 = (longlong)(int)uVar3 & (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)((longlong)puVar2 + 0xbc) = iVar7;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(puVar2 + 0x17) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10;
      uVar9 = uVar9 & ~(uint)uVar11;
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar10 = (int)uVar6;
      lVar15 = (longlong)iVar10;
      uVar3 = puVar14[lVar15] & uVar9;
      if (uVar3 == 0) {
        iVar12 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar12 = iVar7 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar10) {
          iVar13 = iVar10;
        }
        if (iVar12 <= iVar10) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar3 = puVar14[lVar15 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar13 - lVar15 == lVar16) {
            return;
          }
        }
        uVar6 = (ulonglong)(iVar10 + (int)lVar16 + 1);
        uVar9 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar11 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar10 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar7);
  }
  return;
}



// FUNCTION 140d69dce FUN_140d69dce body=87 status=ok
// SIG undefined FUN_140d69dce(void)

void FUN_140d69dce(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140b7cbe4(param_1);
  return;
}



// FUNCTION 140d69e26 FUN_140d69e26 body=375 status=ok
// SIG undefined FUN_140d69e26(void)

void FUN_140d69e26(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0xb8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d69eae;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140d69eae:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xb8)) {
    uVar7 = uVar5 / 0xb8 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xb8,8);
  return;
}



// FUNCTION 140d69f9e FUN_140d69f9e body=390 status=ok
// SIG undefined FUN_140d69f9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_140d69f9e(void)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58 [2];
  longlong local_48 [2];
  undefined2 *local_38;
  undefined8 uStack_30;
  LPVOID local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8c3040) && (FUN_144b3d300(&DAT_14c8c3040), DAT_14c8c3040 == -1)) {
    DAT_14c8c3030 = (undefined2 *)0x0;
    _DAT_14c8c3038 = 0;
    atexit((_func_5014 *)&LAB_14279b972);
    _Init_thread_footer(&DAT_14c8c3040);
  }
  puVar3 = DAT_14c8c3030;
  if (DAT_14c8c3038 < 2) {
    cVar1 = FUN_145c8409a();
    puVar4 = &DAT_1499d7670;
    if (cVar1 != '\0') {
      puVar4 = &DAT_1499d7630;
    }
    iVar2 = SHGetKnownFolderPath(puVar4,0,0,&local_28);
    if (-1 < iVar2) {
      FUN_140056680(local_58,local_28);
      local_68 = 1;
      FUN_1414bc8e4(local_58,local_48,&DAT_149e01f64,&DAT_149e065c6);
      FUN_144a882a8(&local_38,local_48,&DAT_149e065c6);
      if (DAT_14c8c3030 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      DAT_14c8c3030 = local_38;
      _DAT_14c8c3038 = uStack_30;
      local_38 = (undefined2 *)0x0;
      uStack_30 = 0;
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      CoTaskMemFree(local_28);
    }
    puVar3 = DAT_14c8c3030;
    if (DAT_14c8c3038 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 140d6a126 FUN_140d6a126 body=695 status=ok
// SIG undefined FUN_140d6a126(void)

ulonglong FUN_140d6a126(undefined8 param_1,undefined8 param_2,char param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_148 [40];
  longlong local_120 [2];
  longlong *local_110;
  undefined2 **local_108;
  int local_fc;
  undefined2 *local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(int *)(param_4 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_4;
  }
  FUN_14052bdc2(&DAT_14c872ff0,puVar5);
  plVar1 = (longlong *)FUN_14052bcbc(param_1,param_4);
  uVar8 = 0;
  if (plVar1 != (longlong *)0x0) {
    FUN_140056680(&local_f8);
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    iVar3 = (int)uStack_f0 + -1;
    if ((int)uStack_f0 == 0) {
      iVar3 = 0;
    }
    if (0 < iVar3) {
      puVar5 = local_f8;
      if ((int)uStack_f0 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      lVar4 = 0;
      uVar8 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar5[lVar4] - 0x61) * 0x20 + (uint)(ushort)puVar5[lVar4]) -
                0x20;
        uVar7 = (uint)(uVar8 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar8 ^ uVar6) & 0xff) * 4);
        uVar8 = (ulonglong)
                (uVar7 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar4 = lVar4 + 1;
      } while (iVar3 != (int)lVar4);
    }
    iVar3 = FUN_14052bbf0(plVar1,uVar8,&local_f8);
    if (iVar3 == -1) {
      lVar4 = 0;
    }
    else {
      lVar4 = (longlong)iVar3 * 0xc0 + *plVar1;
    }
    uVar8 = lVar4 + 0x10;
    if (lVar4 == 0) {
      uVar8 = 0;
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    if (local_f8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (param_3 == '\x01' && uVar8 == 0) {
      local_d8 = 0;
      local_d0 = 0;
      local_f8 = (undefined2 *)0x0;
      uStack_f0 = 0;
      local_cc = 0xffffffff00000080;
      local_c4 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_88 = 0;
      local_80 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_7c = 0xffffffff00000080;
      local_74 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 1;
      FUN_140056680(local_120,param_2);
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
      local_110 = local_120;
      local_108 = &local_f8;
      FUN_146806aee(plVar1,&local_fc,&local_110,0);
      lVar4 = *plVar1;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
      if (local_120[0] != 0) {
        FUN_1400020a8();
      }
      uVar8 = lVar4 + (longlong)local_fc * 0xc0 + 0x10;
      FUN_140b7cb8c(&local_f8);
      *(byte *)(plVar1 + 10) = *(byte *)(plVar1 + 10) | 1;
    }
    if (uVar8 == 0) {
      uVar8 = 0;
    }
    else {
      uVar2 = FUN_140d6a3de();
      if (*(int *)(param_4 + 1) == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = (undefined2 *)*param_4;
      }
      FUN_1408be1b6(uVar2,puVar5,param_2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 140d6a3de FUN_140d6a3de body=149 status=ok
// SIG undefined FUN_140d6a3de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140d6a3de(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8678b8) {
    FUN_144b3d300(&DAT_14c8678b8);
    if (DAT_14c8678b8 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c867878);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c867878,4000);
      DAT_14c8678a0 = 0;
      _DAT_14c8678a8 = 0;
      _DAT_14c8678b0 = 2;
      atexit(FUN_14277fb24);
      _Init_thread_footer(&DAT_14c8678b8);
    }
  }
  return &DAT_14c867878;
}



// FUNCTION 140d6a474 FUN_140d6a474 body=574 status=ok
// SIG undefined FUN_140d6a474(void)

undefined8 * FUN_140d6a474(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined2 *puVar3;
  void *_Src;
  ulonglong uVar4;
  undefined1 auStack_1f8 [32];
  undefined2 *local_1d8;
  int local_1d0;
  undefined1 local_1c8 [416];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  puVar1 = (ulonglong *)(param_1 + 0xe8);
  uVar4 = *(ulonglong *)(param_1 + 0xe8);
  lVar2 = 0x18;
  do {
    if (*(ulonglong *)(DAT_14c872ce0 + lVar2) == uVar4) {
      if (DAT_14c872ce0 + lVar2 != 0) {
        FUN_1400021e4(puVar1,param_2);
        goto LAB_140d6a4da;
      }
      break;
    }
    lVar2 = lVar2 + 0x5f8;
  } while (lVar2 != 0x3bc8);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar4 == DAT_14c892bc0) {
    *param_2 = 0;
    uVar4 = (ulonglong)DAT_14c872bd0;
    _Src = DAT_14c872bc8;
  }
  else {
    uVar4 = *puVar1;
    if (uVar4 == DAT_14c892f2c) {
      *param_2 = 0;
      uVar4 = (ulonglong)DAT_14c872aa0;
      _Src = DAT_14c872a98;
    }
    else if (uVar4 == DAT_14c8934a0) {
      *param_2 = 0;
      uVar4 = (ulonglong)DAT_14c872a90;
      _Src = DAT_14c872a88;
    }
    else {
      if (uVar4 != DAT_14c8934a4) {
        if (uVar4 == 0) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/Class.cpp",&DAT_00001a76,
                        L"UObject::GetConfigName() called on class with config name \'None\'. Class flags = 0x%08X"
                        ,*(undefined4 *)(param_1 + 0xd4));
          FUN_140056680(param_2,&DAT_149dfb77a);
          goto LAB_140d6a4da;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9490f0);
        *param_2 = 0;
        param_2[1] = 0;
        FUN_140d6a6b4(local_1c8);
        FUN_1400021e4(puVar1,&local_1d8);
        puVar3 = local_1d8;
        if (local_1d0 == 0) {
          puVar3 = &DAT_149dfb77a;
        }
        FUN_140d6b9d6(local_1c8,puVar3,param_2);
        if (local_1d8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_140d6b5be(local_1c8);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9490f0);
        goto LAB_140d6a5d4;
      }
      *param_2 = 0;
      uVar4 = (ulonglong)DAT_14c872a80;
      _Src = DAT_14c872a78;
    }
  }
  *(int *)(param_2 + 1) = (int)uVar4;
  if (uVar4 != 0) {
    FUN_1446dd670(param_2,uVar4 & 0xffffffff,0);
    memcpy((void *)*param_2,_Src,uVar4 * 2);
LAB_140d6a4da:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_1f8);
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
LAB_140d6a5d4:
  if ((local_28 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d6a6b4 FUN_140d6a6b4 body=109 status=ok
// SIG undefined FUN_140d6a6b4(void)

undefined8 FUN_140d6a6b4(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  local_38 = 0;
  FUN_140d6a722(0,DAT_14c872ce0,1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d6a722 FUN_140d6a722 body=942 status=ok
// SIG undefined FUN_140d6a722(void)

longlong *
FUN_140d6a722(longlong *param_1,longlong param_2,undefined1 param_3,undefined8 *param_4,
             longlong param_5)

{
  longlong *plVar1;
  longlong *_Dst;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  void *_Src;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = param_2;
  plVar1 = param_1 + 6;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  iVar4 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 7) = iVar4;
  if ((longlong)iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(plVar1,iVar4,0);
    memcpy((void *)*plVar1,_Src,(longlong)iVar4 * 2);
  }
  _Dst = param_1 + 8;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  memset(_Dst,0,0xf0);
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x184) = param_3;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((longlong)param_1 + 0x185) = 0;
  *(undefined1 *)((longlong)param_1 + 0x189) = 0;
  *(undefined2 *)((longlong)param_1 + 0x199) = 1;
  if (param_5 != 0) {
    param_1[1] = param_5;
    *(undefined1 *)(param_1 + 0x33) = 1;
  }
  iVar4 = (int)param_1[7];
  if (1 < iVar4) {
    lVar5 = 0;
    do {
      uVar3 = *(ushort *)(*plVar1 + lVar5 * 2);
      bVar2 = "Windows"[lVar5];
      iVar6 = (uint)uVar3 - (uint)bVar2;
      if (iVar6 == 0) {
        if (uVar3 == 0) goto LAB_140d6aa14;
      }
      else {
        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_140d6a9f3;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto code_r0x000140d6a9f0;
      }
      lVar5 = lVar5 + 1;
    } while( true );
  }
  FUN_1400b22c2(&local_48,"Windows");
  if (plVar1 == &local_48) {
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
  FUN_1400b22c2(&local_48,"Windows");
joined_r0x000140d6aa2b:
  if (_Dst == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*_Dst != 0) {
      FUN_1400020a8();
    }
    param_1[8] = local_48;
    local_48 = 0;
    *(undefined4 *)(param_1 + 9) = local_40;
    *(undefined4 *)((longlong)param_1 + 0x4c) = local_3c;
  }
LAB_140d6a8af:
  FUN_140d6ab96(&local_48);
  if (param_1 + 0x10 == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x10] != 0) {
      FUN_1400020a8();
    }
    param_1[0x10] = local_48;
    local_48 = 0;
    *(undefined4 *)(param_1 + 0x11) = local_40;
    *(undefined4 *)((longlong)param_1 + 0x8c) = local_3c;
  }
  FUN_140d6aad2(&local_48);
  if (param_1 + 0x14 == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x14] != 0) {
      FUN_1400020a8();
    }
    param_1[0x14] = local_48;
    *(undefined4 *)(param_1 + 0x15) = local_40;
    *(undefined4 *)((longlong)param_1 + 0xac) = local_3c;
  }
  if ((*param_1 != 0) && (*param_1 == DAT_14c872ce0)) {
    *(undefined1 *)((longlong)param_1 + 0x185) = 1;
    *(undefined2 *)(param_1 + 0x30) = 0x101;
    *(undefined1 *)((longlong)param_1 + 0x183) = 1;
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
code_r0x000140d6a9f0:
  iVar6 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_140d6a9f3:
  if (iVar6 != 0) {
    iVar6 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar6 = 0;
    }
    FUN_1402980a2(_Dst,*plVar1,iVar6);
    goto LAB_140d6a8af;
  }
LAB_140d6aa14:
  FUN_1400b22c2(&local_48,"Windows");
  goto joined_r0x000140d6aa2b;
}



// FUNCTION 140d6aad2 FUN_140d6aad2 body=195 status=ok
// SIG undefined FUN_140d6aad2(void)

longlong * FUN_140d6aad2(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140d6afb0();
  FUN_140056680(&local_28);
  iVar1 = (int)local_20;
  iVar3 = ((int)local_20 == 0) + 7;
  *param_1 = local_28;
  local_28 = 0;
  *(int *)(param_1 + 1) = (int)local_20;
  iVar2 = local_20._4_4_;
  *(int *)((longlong)param_1 + 0xc) = local_20._4_4_;
  local_20 = 0;
  iVar4 = iVar3 + iVar1;
  if (iVar4 < iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (-1 < iVar4) {
    if (iVar2 < iVar4) {
      FUN_1446f8c06(param_1);
    }
    FUN_1400020e8(param_1,L"Config/",7);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4);
}



// FUNCTION 140d6ab96 FUN_140d6ab96 body=195 status=ok
// SIG undefined FUN_140d6ab96(void)

longlong * FUN_140d6ab96(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140d6ac5a();
  FUN_140056680(&local_28);
  iVar1 = (int)local_20;
  iVar3 = ((int)local_20 == 0) + 7;
  *param_1 = local_28;
  local_28 = 0;
  *(int *)(param_1 + 1) = (int)local_20;
  iVar2 = local_20._4_4_;
  *(int *)((longlong)param_1 + 0xc) = local_20._4_4_;
  local_20 = 0;
  iVar4 = iVar3 + iVar1;
  if (iVar4 < iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (-1 < iVar4) {
    if (iVar2 < iVar4) {
      FUN_1446f8c06(param_1);
    }
    FUN_1400020e8(param_1,L"Config/",7);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4);
}



// FUNCTION 140d6ac5a FUN_140d6ac5a body=851 status=ok
// SIG undefined FUN_140d6ac5a(void)

undefined2 * FUN_140d6ac5a(void)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_a8 [40];
  undefined2 *local_80;
  undefined8 local_78;
  undefined2 *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined2 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = FUN_1401af92e(FUN_1456d6024);
  lVar5 = *(longlong *)(lVar5 + 0x68);
  plVar1 = (longlong *)(lVar5 + 0x28);
  if (*(uint *)(lVar5 + 0x30) < 2) {
    FUN_140056680(&local_60,L"../../../Engine/");
    FUN_145ae398e();
    plVar6 = (longlong *)FUN_1400dbadc();
    plVar8 = (longlong *)*plVar6;
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)FUN_140e92164();
      *plVar6 = (longlong)plVar8;
    }
    FUN_1401aee94();
    iVar10 = (int)local_58;
    FUN_140056680(&local_50);
    iVar2 = (int)local_48;
    iVar4 = (uint)((int)local_48 == 0) + iVar10 + (uint)(iVar10 == 0);
    local_70 = local_50;
    local_50 = (undefined2 *)0x0;
    iVar10 = local_48._4_4_;
    local_68 = local_48;
    local_48 = 0;
    iVar9 = iVar4 + iVar2;
    if (iVar9 < iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar4);
    }
    if (iVar9 < 0) {
LAB_140d6af98:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if ((iVar10 < iVar9) && (FUN_1446f8c06(&local_70), local_50 != (undefined2 *)0x0)) {
      FUN_1400020a8();
    }
    iVar10 = (int)local_58 + -1;
    if ((int)local_58 == 0) {
      iVar10 = 0;
    }
    FUN_1401aebe8(&local_70,local_60,iVar10);
    iVar10 = (int)local_68;
    iVar4 = ((int)local_68 == 0) + 9;
    local_50 = local_70;
    local_70 = (undefined2 *)0x0;
    iVar2 = local_68._4_4_;
    local_48 = local_68;
    local_68 = 0;
    iVar9 = iVar4 + iVar10;
    if (iVar9 < iVar10) {
LAB_140d6af9f:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    if (iVar9 < 0) goto LAB_140d6af98;
    if (iVar2 < iVar9) {
      FUN_1446f8c06(&local_50);
    }
    FUN_1401aebe8(&local_50,L"Binaries",8);
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar7 = local_50;
    if ((int)local_48 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8,puVar7);
    if (cVar3 == '\0') {
      FUN_140056680(&local_80);
      iVar10 = (int)local_78;
      iVar4 = ((int)local_78 == 0) + 9;
      local_70 = local_80;
      local_80 = (undefined2 *)0x0;
      iVar2 = local_78._4_4_;
      local_68 = local_78;
      local_78 = 0;
      iVar9 = iVar4 + iVar10;
      if (iVar9 < iVar10) goto LAB_140d6af9f;
      if (iVar9 < 0) goto LAB_140d6af98;
      if (iVar2 < iVar9) {
        FUN_1446f8c06(&local_70);
      }
      FUN_1401aebe8(&local_70,L"Binaries",8);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_48._0_4_ = (int)local_68;
      local_50 = local_70;
      local_70 = (undefined2 *)0x0;
      local_68 = 0;
      if (local_80 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      puVar7 = &DAT_149dfb77a;
      if ((int)local_48 != 0) {
        puVar7 = local_50;
      }
      cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8,puVar7);
      if (cVar3 == '\0') goto LAB_140d6af18;
      FUN_14020fad6(plVar1,L"../../../Engine/");
    }
    else {
LAB_140d6af18:
      if (&local_60 != plVar1) {
        if (*(longlong *)(lVar5 + 0x28) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar5 + 0x28) = local_60;
        local_60 = 0;
        *(int *)(lVar5 + 0x30) = (int)local_58;
        *(undefined4 *)(lVar5 + 0x34) = local_58._4_4_;
        local_58 = 0;
      }
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (*(int *)(lVar5 + 0x30) == 0) {
      puVar7 = &DAT_149dfb77a;
      goto LAB_140d6ac95;
    }
  }
  puVar7 = (undefined2 *)*plVar1;
LAB_140d6ac95:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar7;
}



// FUNCTION 140d6afb0 FUN_140d6afb0 body=1495 status=ok
// SIG undefined FUN_140d6afb0(void)

undefined2 * FUN_140d6afb0(void)

{
  undefined2 **ppuVar1;
  void *_Src;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  undefined1 auStack_c8 [32];
  int local_a8;
  longlong local_98;
  int local_90;
  undefined2 *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  undefined2 *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = FUN_1401af92e(FUN_1456d6024);
  if (DAT_14c872f50 == '\0') {
    DAT_14c872f51 = 1;
    DAT_14c872f50 = '\x01';
  }
  lVar4 = *(longlong *)(lVar4 + 0x68);
  if (DAT_14c872ce0 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)(DAT_14c872ce0 + 9);
  }
  ppuVar1 = (undefined2 **)(lVar4 + 0x48);
  if (DAT_14c83e734 != cVar2) {
    FUN_1446f8bcc(ppuVar1,0);
    DAT_14c83e734 = cVar2;
  }
  if ((DAT_14c83e735 == '\0') && (cVar2 = FUN_140d6b588(), cVar2 != '\0')) {
    FUN_1446f8bcc(ppuVar1,0);
    DAT_14c83e735 = '\x01';
  }
  if (*(uint *)(lVar4 + 0x50) < 2) {
    iVar3 = FUN_1457a17a0();
    if ((0 < iVar3) && (*(int *)(lVar4 + 0x54) <= iVar3)) {
      FUN_1446f8c06(ppuVar1,iVar3 + 1);
    }
    iVar3 = DAT_14c83e6c0 + -1;
    if (DAT_14c83e6c0 == 0) {
      iVar3 = 0;
    }
    FUN_1402980a2(ppuVar1,DAT_14c83e6b8,iVar3);
    if (*(uint *)(lVar4 + 0x50) < 2) {
      iVar3 = FUN_1457a17a0();
      if ((0 < iVar3) && (*(int *)(lVar4 + 0x54) <= iVar3)) {
        FUN_1446f8c06(ppuVar1,iVar3 + 1);
      }
      cVar2 = FUN_140d6b588();
      if (cVar2 == '\0') {
        if (DAT_14c764000 != 0) {
          lVar8 = 0;
          uVar9 = DAT_14c764000;
          do {
            uVar7 = (ulonglong)uVar9;
            uVar11 = *(ushort *)((longlong)&DAT_149e01fe8 + lVar8);
            if (uVar9 == uVar11) {
              if (uVar9 == 0) break;
            }
            else {
              if (0x7f < (uVar11 | uVar9)) goto LAB_140d6b197;
              uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
              uVar10 = (ulonglong)uVar11;
              uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
              if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar10]) goto LAB_140d6b197;
            }
            uVar9 = *(ushort *)((longlong)&DAT_14c764002 + lVar8);
            lVar8 = lVar8 + 2;
          } while( true );
        }
        goto LAB_140d6b480;
      }
      FUN_1457a1b61(ppuVar1);
      goto LAB_140d6b0e0;
    }
  }
LAB_140d6b020:
  puVar5 = *ppuVar1;
LAB_140d6b023:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
LAB_140d6b197:
  if (uVar9 == uVar11) {
LAB_140d6b480:
    FUN_145cbe9b2(&local_48);
    if (ppuVar1 == &local_48) {
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar4 + 0x48) != 0) {
        FUN_1400020a8();
      }
      *(undefined2 **)(lVar4 + 0x48) = local_48;
      local_48 = (undefined2 *)0x0;
      *(int *)(lVar4 + 0x50) = local_40;
      *(undefined4 *)(lVar4 + 0x54) = local_3c;
    }
    FUN_140d6dd3e(ppuVar1);
    if (*(int *)(lVar4 + 0x50) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = *ppuVar1;
    }
    FUN_14106fda4(&local_48,puVar5);
    if (ppuVar1 == &local_48) goto LAB_140d6b442;
    if (*(longlong *)(lVar4 + 0x48) != 0) {
      FUN_1400020a8();
    }
    *(undefined2 **)(lVar4 + 0x48) = local_48;
    local_48 = (undefined2 *)0x0;
    *(int *)(lVar4 + 0x50) = local_40;
    *(undefined4 *)(lVar4 + 0x54) = local_3c;
  }
  else {
    FUN_14020fad6(ppuVar1,L"../../");
    uVar6 = FUN_1401aee94();
    FUN_140056680(&local_48,uVar6);
    FUN_140d6b9b4(&local_58);
    _Src = local_58;
    local_68 = (void *)0x0;
    local_60 = local_50;
    if ((longlong)local_50 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_50,0);
      memcpy(local_68,_Src,(longlong)local_50 * 2);
    }
    puVar5 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar5 = local_48;
    }
    FUN_14107002a(&local_68,puVar5);
    local_a8 = (local_40 == 0) + 7;
    local_78 = (undefined2 *)0x0;
    FUN_14125bce8(&local_78,local_48,local_40,0);
    FUN_1401aebe8(&local_78,L"../../",6);
    FUN_1448b5552(&local_78);
    FUN_140d6b9b4(&local_88);
    puVar5 = &DAT_149dfb77a;
    if (iStack_80 != 0) {
      puVar5 = local_88;
    }
    FUN_14107002a(&local_78,puVar5);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    iVar3 = iStack_70 + -1;
    if (iStack_70 == 0) {
      iVar3 = 0;
    }
    local_a8 = iVar3 + 1 + (uint)(local_60 == 0);
    local_88 = (undefined2 *)0x0;
    FUN_14125bce8(&local_88,local_68,local_60,0);
    FUN_1401aebe8(&local_88,local_78,iVar3);
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_78 = local_88;
    iStack_70 = iStack_80;
    uStack_6c = uStack_7c;
    cVar2 = FUN_144a38768(&local_78,&DAT_149e065c6,1,1);
    if (cVar2 == '\0') {
      FUN_1400020e8(&local_78,&DAT_149e065c6,1);
    }
    FUN_1401aea18(&local_88,&local_78);
    FUN_1401aea18(&local_98);
    if (iStack_80 == local_90) {
      if (1 < iStack_80) {
        lVar8 = 0;
        while( true ) {
          uVar9 = *(ushort *)((longlong)local_88 + lVar8);
          uVar7 = (ulonglong)uVar9;
          uVar11 = *(ushort *)(local_98 + lVar8);
          if (uVar9 != uVar11) break;
          if (uVar9 == 0) goto LAB_140d6b3db;
LAB_140d6b3ac:
          lVar8 = lVar8 + 2;
        }
        if ((uVar11 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar10 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar10]) goto LAB_140d6b3ac;
        }
        if (uVar9 != uVar11) goto LAB_140d6b3f7;
      }
LAB_140d6b3db:
      iVar3 = iStack_70 + -1;
      if (iStack_70 == 0) {
        iVar3 = 0;
      }
      FUN_1402980a2(ppuVar1,local_78,iVar3);
    }
    else if (local_90 + iStack_80 == 1) goto LAB_140d6b3db;
LAB_140d6b3f7:
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
LAB_140d6b442:
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140d6b0e0:
  cVar2 = FUN_144a38768(ppuVar1,&DAT_149e065c6,1,1);
  if (cVar2 == '\0') {
    FUN_1400020e8(ppuVar1,&DAT_149e065c6,1);
  }
  if (*(int *)(lVar4 + 0x50) == 0) {
    puVar5 = &DAT_149dfb77a;
    goto LAB_140d6b023;
  }
  goto LAB_140d6b020;
}



// FUNCTION 140d6b588 FUN_140d6b588 body=53 status=ok
// SIG undefined FUN_140d6b588(void)

bool FUN_140d6b588(void)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_1401aee1c();
  EnterCriticalSection(lpCriticalSection);
  iVar1 = lpCriticalSection[1].LockCount;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 1 < iVar1;
}



// FUNCTION 140d6b5be FUN_140d6b5be body=1014 status=ok
// SIG undefined FUN_140d6b5be(void)

void FUN_140d6b5be(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  lVar13 = *(longlong *)(param_1 + 0x18);
  if (lVar13 != 0) {
    FUN_140925f20(lVar13);
    FUN_1400020a8(lVar13);
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0x120);
  puVar2 = (uint *)(param_1 + 0x130);
  iVar4 = *(int *)(param_1 + 0x148);
  if (iVar4 == 0) {
    uVar15 = 0;
    uVar16 = 1;
    iVar12 = 0;
    iVar8 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x140);
    if (*(uint **)(param_1 + 0x140) == (uint *)0x0) {
      puVar9 = puVar2;
    }
    uVar14 = *puVar9;
    if (uVar14 == 0) {
      iVar12 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar12 = iVar4 + -1;
      }
      uVar15 = 0;
      uVar10 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar10 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar10 == uVar15) goto LAB_140d6b639;
        iVar12 = iVar12 + 0x20;
        uVar14 = puVar9[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar10 = uVar16 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar8 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar8) {
      iVar8 = iVar4;
    }
  }
  if (iVar8 < iVar4) {
    uVar14 = 0xffffffff;
    do {
      lVar13 = *plVar1;
      if (*(longlong *)(lVar13 + 0x30 + (longlong)iVar8 * 0x48) != 0) {
        FUN_1400020a8();
      }
      plVar3 = (longlong *)(lVar13 + (longlong)iVar8 * 0x48);
      if (plVar3[4] != 0) {
        FUN_1400020a8();
      }
      if (plVar3[2] != 0) {
        FUN_1400020a8();
      }
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar9 = *(uint **)(param_1 + 0x140);
      if (*(uint **)(param_1 + 0x140) == (uint *)0x0) {
        puVar9 = puVar2;
      }
      iVar4 = *(int *)(param_1 + 0x148);
      iVar8 = (int)uVar15;
      lVar13 = (longlong)iVar8;
      uVar5 = puVar9[lVar13] & uVar14;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar8) {
          iVar7 = iVar8;
        }
        if (iVar6 <= iVar8) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar5 = puVar9[lVar13 + lVar11 + 1];
          if (uVar5 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar7 - lVar13 == lVar11) goto LAB_140d6b639;
        }
        uVar15 = (ulonglong)(iVar8 + (int)lVar11 + 1);
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar5 & uVar5);
      uVar10 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_140d6b639:
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(int *)(param_1 + 300) != 0) {
    FUN_1403af08a(plVar1,0);
  }
  *(undefined8 *)(param_1 + 0x150) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (0x80 < *(uint *)(param_1 + 0x14c)) {
    *(undefined4 *)(param_1 + 0x14c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8));
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140d6b9b4 FUN_140d6b9b4 body=33 status=ok
// SIG undefined FUN_140d6b9b4(void)

undefined8 FUN_140d6b9b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1401af3ae();
  FUN_140056680(param_1,uVar1);
  return param_1;
}



// FUNCTION 140d6b9d6 FUN_140d6b9d6 body=7557 status=ok
// SIG undefined FUN_140d6b9d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140d6b9d6(longlong *param_1,wchar_t *param_2,longlong *param_3)

{
  LARGE_INTEGER *pLVar1;
  undefined8 *puVar2;
  void *_Src;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong lVar11;
  size_t sVar12;
  undefined8 uVar13;
  longlong *plVar14;
  uint *puVar15;
  LARGE_INTEGER LVar16;
  byte bVar17;
  int iVar18;
  undefined2 *puVar19;
  wchar_t *_Str;
  longlong *plVar20;
  int iVar21;
  undefined2 *puVar22;
  uint uVar23;
  ulonglong unaff_RBP;
  ushort uVar24;
  longlong lVar25;
  int iVar26;
  longlong lVar27;
  longlong *plVar28;
  ushort uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  byte bVar32;
  undefined7 uVar34;
  ulonglong uVar33;
  uint uVar35;
  ulonglong uVar36;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined4 local_190;
  int local_184;
  longlong *local_180;
  LARGE_INTEGER *local_178;
  longlong *local_170;
  int local_164;
  longlong local_160;
  undefined8 local_158;
  longlong local_150;
  undefined1 local_148 [8];
  undefined2 *local_140;
  undefined8 local_138;
  LARGE_INTEGER local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined1 local_100 [8];
  longlong *local_f8;
  ulonglong uStack_f0;
  longlong local_e0;
  int local_d4;
  undefined1 *local_d0;
  LARGE_INTEGER *local_c8;
  undefined1 local_bc [4];
  LARGE_INTEGER local_b8;
  undefined8 uStack_b0;
  uint local_a8 [4];
  uint *local_98;
  uint local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (*(char *)((longlong)param_1 + 0x19a) == '\x01') {
    FUN_14047a987(param_1 + 0x10,"Gearbox/",8);
    FUN_14047a987(param_1 + 0x14,"Gearbox/",8);
  }
  lVar11 = param_1[2];
  if ((lVar11 != 0) && (*(char *)(lVar11 + 0x40) == '\x01')) {
    *(undefined1 *)(lVar11 + 0x40) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_1b8);
  }
  if ((param_1[1] != 0) &&
     (lVar11 = *(longlong *)(param_1[1] + 0x78), param_1[2] = lVar11,
     (lVar11 == 0 & *(byte *)((longlong)param_1 + 0x184)) == 1)) {
    lVar11 = FUN_14001cc68(0x5f8,0x10);
    FUN_1408e73e2();
    param_1[3] = lVar11;
    param_1[2] = lVar11;
    *(undefined2 *)(lVar11 + 0x41) = 0x201;
  }
  if (*(char *)((longlong)param_1 + 0x199) == '\0') {
    if ((int)param_1[0xd] == 0) {
      puVar22 = &DAT_149dfb77a;
    }
    else {
      puVar22 = (undefined2 *)param_1[0xc];
    }
    lVar11 = 0;
    while( true ) {
      uVar24 = *(ushort *)((longlong)puVar22 + lVar11);
      uVar36 = (ulonglong)uVar24;
      uVar29 = *(ushort *)((longlong)param_2 + lVar11);
      if (uVar24 != uVar29) break;
      if (uVar24 == 0) goto LAB_140d6bc38;
LAB_140d6be00:
      lVar11 = lVar11 + 2;
    }
    if ((uVar29 | uVar24) < 0x80) {
      uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar36];
      uVar31 = (ulonglong)uVar29;
      uVar29 = (ushort)(byte)(&DAT_149e05da0)[uVar31];
      if ((&DAT_149e05da0)[uVar36] == (&DAT_149e05da0)[uVar31]) goto LAB_140d6be00;
    }
    if (uVar24 != uVar29) goto LAB_140d6bae2;
  }
  else {
LAB_140d6bae2:
    if (*(char *)((longlong)param_1 + 0x189) == '\x01') {
      FUN_1400021e4(param_1 + 0x1d);
      if (param_2 == (wchar_t *)0x0) {
LAB_140d6d5c0:
        local_b8 = local_130;
        local_130.QuadPart = 0;
        iVar26 = (int)local_128;
        uStack_b0 = local_128;
        local_128 = (undefined2 *)0x0;
      }
      else {
        sVar12 = wcslen(param_2);
        if ((int)sVar12 == 0) goto LAB_140d6d5c0;
        iVar26 = (int)local_128;
        iVar7 = (int)sVar12 + (uint)((int)local_128 == 0);
        local_b8.s = local_130.s;
        local_130.QuadPart = 0;
        iVar18 = local_128._4_4_;
        uStack_b0 = local_128;
        local_128 = (undefined2 *)0x0;
        iVar21 = iVar7 + iVar26;
        if (iVar21 < iVar26) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((longlong)iVar7);
        }
        if (iVar21 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar21);
        }
        if (iVar18 < iVar21) {
          FUN_1446f8c06(&local_b8);
        }
        FUN_1400020e8(&local_b8,param_2,sVar12 & 0xffffffff);
        iVar26 = (int)uStack_b0;
      }
      LVar16.QuadPart = (LONGLONG)&DAT_149dfb77a;
      if (iVar26 != 0) {
        LVar16 = local_b8;
      }
      FUN_14020fad6(param_1 + 0xc,LVar16.QuadPart);
      if ((char)param_1[0x33] == '\0') {
        param_1[2] = 0;
      }
      if ((undefined2 *)local_b8.QuadPart != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((undefined2 *)local_130.QuadPart != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_14020fad6(param_1 + 0xc,param_2);
      if ((char)param_1[0x33] == '\0') {
        param_1[2] = 0;
      }
    }
    FUN_140bedfe8(param_1);
    *(undefined1 *)((longlong)param_1 + 0x199) = 0;
  }
LAB_140d6bc38:
  if (*(char *)((longlong)param_1 + 0x184) == '\0') {
    pLVar1 = (LARGE_INTEGER *)(param_1 + 0xc);
    cVar5 = FUN_144a38768(pLVar1,L".ini",4,1);
    if (cVar5 == '\0') {
      puVar19 = &DAT_149dfb77a;
      puVar22 = &DAT_149dfb77a;
      if ((int)param_1[0xd] != 0) {
        puVar22 = (undefined2 *)pLVar1->QuadPart;
      }
      if ((int)param_1[0x15] != 0) {
        puVar19 = (undefined2 *)param_1[0x14];
      }
      FUN_140002266(&local_b8,L"%s/%s.ini",puVar19,puVar22);
      if ((LARGE_INTEGER *)(param_1 + 4) == &local_b8) goto LAB_140d6be35;
      if (param_1[4] != 0) {
        FUN_1400020a8();
      }
      ((LARGE_INTEGER *)(param_1 + 4))->QuadPart = (LONGLONG)local_b8;
      local_b8.QuadPart = 0;
      *(int *)(param_1 + 5) = (int)uStack_b0;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_b0._4_4_;
    }
    else {
      iVar26 = (int)param_1[0xd] + -1;
      if ((int)param_1[0xd] == 0) {
        iVar26 = 0;
      }
      FUN_1402980a2(param_1 + 4,param_1[0xc],iVar26);
      FUN_140c50e9c(&local_b8,pLVar1,1);
      if (pLVar1 == &local_b8) {
LAB_140d6be35:
        if ((undefined2 *)local_b8.QuadPart != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_1[0xc] != 0) {
          FUN_1400020a8();
        }
        ((LARGE_INTEGER *)(param_1 + 0xc))->QuadPart = (LONGLONG)local_b8;
        local_b8.QuadPart = 0;
        *(int *)(param_1 + 0xd) = (int)uStack_b0;
        *(undefined4 *)((longlong)param_1 + 0x6c) = uStack_b0._4_4_;
      }
    }
    lVar11 = *param_1;
    if (lVar11 == 0) {
      lVar11 = param_1[1];
    }
    else {
      if ((int)param_1[0xd] == 0) {
        puVar22 = &DAT_149dfb77a;
      }
      else {
        puVar22 = (undefined2 *)pLVar1->QuadPart;
      }
      FUN_1446f470e(&local_130,puVar22,1);
      lVar11 = FUN_142777728(lVar11,local_130.QuadPart,param_1 + 4);
      param_1[2] = lVar11;
      if (lVar11 == 0) {
        lVar11 = FUN_1408e6d00(*param_1,param_1 + 4);
        param_1[2] = lVar11;
        *(undefined1 *)(lVar11 + 0x41) = 0;
        lVar11 = param_1[2];
      }
      else {
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
        if (*(char *)((longlong)param_1 + 0x182) == '\0') goto LAB_140d6c69b;
      }
      lVar11 = lVar11 + 0x450;
    }
    if ((int)param_1[0xd] == 0) {
      puVar22 = &DAT_149dfb77a;
    }
    else {
      puVar22 = (undefined2 *)pLVar1->QuadPart;
    }
    FUN_1446f470e(&local_b8,puVar22,1);
    ((LARGE_INTEGER *)(lVar11 + 0x54))->QuadPart = (LONGLONG)local_b8;
    *(undefined4 *)(lVar11 + 0x68) = 0;
    if (*(int *)(lVar11 + 0x6c) < 0) {
      FUN_1446f8c06((undefined8 *)(lVar11 + 0x60),0);
    }
    puVar22 = *(undefined2 **)(lVar11 + 0x60);
    if (puVar22 != (undefined2 *)0x0) {
      *puVar22 = 0;
    }
    *(byte *)(lVar11 + 0x50) = *(byte *)(lVar11 + 0x50) & 0xfb;
    puVar22 = &DAT_149dfb77a;
    if ((int)param_1[5] != 0) {
      puVar22 = (undefined2 *)param_1[4];
    }
    FUN_140056680(&local_b8,puVar22);
    LVar16.QuadPart = (LONGLONG)&DAT_149dfb77a;
    if ((int)uStack_b0 != 0) {
      LVar16 = local_b8;
    }
    lVar25 = FUN_1449da4c4(&DAT_14c872ff0,LVar16.QuadPart);
    if ((lVar25 == 0) || (*(char *)(lVar25 + 0x28) == '\x01')) {
      LVar16 = local_b8;
      if ((int)uStack_b0 == 0) {
        LVar16.QuadPart = (LONGLONG)&DAT_149dfb77a;
      }
      cVar5 = FUN_1427735ea(LVar16.QuadPart,0);
      if (cVar5 != '\0') goto LAB_140d6bf96;
    }
    else {
LAB_140d6bf96:
      LVar16 = local_b8;
      if ((int)uStack_b0 == 0) {
        LVar16.QuadPart = (LONGLONG)&DAT_149dfb77a;
      }
      local_198 = local_198 & 0xffffffffffffff00;
      FUN_1427877dd(LVar16.QuadPart,LVar16.QuadPart,lVar11,0);
    }
    if ((undefined2 *)local_b8.QuadPart != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar25 = param_1[0x1c];
    if ((lVar25 != 0) && (*(char *)(lVar25 + 1) == '\x01')) {
      iVar26 = *(int *)(lVar25 + 0x60);
      *(uint *)(lVar25 + 0x60) = iVar26 + 1U;
      if (*(uint *)(lVar25 + 100) < iVar26 + 1U) {
        FUN_1447a1bd6((longlong *)(lVar25 + 0x58),iVar26);
      }
      lVar25 = *(longlong *)(lVar25 + 0x58);
      lVar27 = (longlong)iVar26 * 0x10;
      puVar2 = (undefined8 *)(lVar25 + lVar27);
      *(undefined8 *)(lVar25 + lVar27) = 0;
      iVar26 = (int)param_1[5];
      _Src = (void *)param_1[4];
      *(int *)(lVar25 + 8 + lVar27) = iVar26;
      if ((longlong)iVar26 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar2,iVar26,0);
        memcpy((void *)*puVar2,_Src,(longlong)iVar26 * 2);
      }
    }
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*(int *)(lVar11 + 0x34) < *(int *)(lVar11 + 8));
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    goto LAB_140d6c69b;
  }
  if ((char)param_1[0x31] != '\x01') {
LAB_140d6c08b:
    if ((int)param_1[0xb] < 2) {
      uVar13 = FUN_140b7d41a();
      FUN_140056680(&local_b8,uVar13);
      if ((LARGE_INTEGER *)(param_1 + 10) == &local_b8) {
        if ((undefined2 *)local_b8.QuadPart != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_1[10] != 0) {
          FUN_1400020a8();
        }
        ((LARGE_INTEGER *)(param_1 + 10))->QuadPart = (LONGLONG)local_b8;
        local_b8.QuadPart = 0;
        *(int *)(param_1 + 0xb) = (int)uStack_b0;
        *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_b0._4_4_;
      }
    }
    FUN_140633042(&local_b8);
    if ((LARGE_INTEGER *)(param_1 + 4) == &local_b8) {
      if ((undefined2 *)local_b8.QuadPart != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[4] != 0) {
        FUN_1400020a8();
      }
      ((LARGE_INTEGER *)(param_1 + 4))->QuadPart = (LONGLONG)local_b8;
      local_b8.QuadPart = 0;
      *(int *)(param_1 + 5) = (int)uStack_b0;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_b0._4_4_;
    }
    bVar3 = true;
    if (((param_1[2] == 0) && (*(char *)((longlong)param_1 + 0x182) == '\0')) && (*param_1 != 0)) {
      if ((int)param_1[0xd] == 0) {
        puVar22 = &DAT_149dfb77a;
      }
      else {
        puVar22 = (undefined2 *)param_1[0xc];
      }
      FUN_1446f470e(&local_130,puVar22,1);
      lVar11 = FUN_142777728();
      param_1[2] = lVar11;
      if (lVar11 != 0) {
        AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
        bVar3 = *(int *)(lVar11 + 0x458) <= *(int *)(lVar11 + 0x484);
        ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
      }
    }
    if (*(char *)((longlong)param_1 + 0x182) == '\x01') {
      lVar11 = *param_1;
      if (*param_1 == 0) {
        if ((int)param_1[7] == 0) {
          puVar22 = &DAT_149dfb77a;
        }
        else {
          puVar22 = (undefined2 *)param_1[6];
        }
        lVar11 = 0;
        do {
          uVar24 = puVar22[lVar11];
          bVar32 = "Windows"[lVar11];
          iVar26 = (uint)uVar24 - (uint)bVar32;
          if (iVar26 == 0) {
            iVar26 = 0;
            if (uVar24 == 0) goto LAB_140d6c2b8;
          }
          else {
            if (0x7f < ((uint)bVar32 | (uint)uVar24)) goto LAB_140d6c2b8;
            if ((&DAT_149e05da0)[uVar24] != (&DAT_149e05da0)[bVar32]) goto LAB_140d6c2b5;
          }
          lVar11 = lVar11 + 1;
        } while( true );
      }
      goto LAB_140d6c2d6;
    }
    goto LAB_140d6c47e;
  }
  lVar11 = *param_1;
  FUN_140056680(&local_b8,param_2);
  FUN_1446f470e(&local_158,param_2,1);
  lVar11 = FUN_142777728(lVar11,local_158,&local_b8);
  param_1[2] = lVar11;
  if ((undefined2 *)local_b8.QuadPart != (undefined2 *)0x0) {
    FUN_1400020a8();
    lVar11 = param_1[2];
  }
  if (lVar11 != 0) goto LAB_140d6c08b;
  if (1 < (int)param_1[5]) {
    lVar11 = FUN_1408e6d00(*param_1,param_1 + 4);
    param_1[2] = lVar11;
    goto LAB_140d6c08b;
  }
LAB_140d6bcb1:
  unaff_RBP = 0;
  goto LAB_140d6c69b;
LAB_140d6d57d:
  if (uVar24 == uVar29) goto LAB_140d6d431;
LAB_140d6d510:
  plVar28 = plVar28 + 2;
  if (plVar28 == local_f8 + (longlong)(int)uStack_f0 * 2) goto LAB_140d6d3d1;
  goto LAB_140d6d4fa;
LAB_140d6c2b5:
  iVar26 = (uint)(byte)(&DAT_149e05da0)[uVar24] - (uint)(byte)(&DAT_149e05da0)[bVar32];
LAB_140d6c2b8:
  lVar11 = DAT_14c872ce0;
  if (DAT_14c872ce0 != 0 && iVar26 == 0) {
LAB_140d6c2d6:
    if ((int)param_1[0xd] == 0) {
      puVar22 = &DAT_149dfb77a;
    }
    else {
      puVar22 = (undefined2 *)param_1[0xc];
    }
    FUN_1446f470e(&local_d0,puVar22,1);
    lVar11 = FUN_142777728(lVar11);
    if (lVar11 != 0) {
      iVar26 = *(int *)(lVar11 + 0x28);
      if (iVar26 < 2) {
LAB_140d6c327:
        bVar4 = false;
      }
      else {
        if (iVar26 == (int)param_1[0x11]) {
          lVar25 = *(longlong *)(lVar11 + 0x20);
          lVar27 = 0;
          while( true ) {
            uVar24 = *(ushort *)(lVar25 + lVar27);
            uVar29 = *(ushort *)(param_1[0x10] + lVar27);
            unaff_RBP = (ulonglong)uVar29;
            if (uVar24 != uVar29) break;
            if (uVar24 == 0) goto LAB_140d6c327;
LAB_140d6c386:
            lVar27 = lVar27 + 2;
          }
          if ((uVar29 | uVar24) < 0x80) {
            if ((&DAT_149e05da0)[uVar24] == (&DAT_149e05da0)[(uint)uVar29]) goto LAB_140d6c386;
            iVar18 = (uint)(byte)(&DAT_149e05da0)[uVar24] -
                     (uint)(byte)(&DAT_149e05da0)[(uint)uVar29];
          }
          else {
            iVar18 = (uint)uVar24 - (uint)uVar29;
          }
          if (iVar18 != 0) goto LAB_140d6c43e;
          goto LAB_140d6c327;
        }
        if ((int)param_1[0x11] + iVar26 == 1) goto LAB_140d6c327;
        lVar25 = *(longlong *)(lVar11 + 0x20);
LAB_140d6c43e:
        iVar18 = iVar26 + -1;
        if (iVar26 == 0) {
          iVar18 = 0;
        }
        FUN_1402980a2(param_1 + 0x10,lVar25,iVar18);
        bVar4 = true;
      }
      iVar26 = *(int *)(lVar11 + 0x38);
      if (iVar26 < 2) {
LAB_140d6c337:
        if (!bVar4) goto LAB_140d6c47e;
      }
      else {
        if (iVar26 == (int)param_1[0x15]) {
          lVar25 = 0;
          while( true ) {
            uVar24 = *(ushort *)(*(longlong *)(lVar11 + 0x30) + lVar25);
            uVar29 = *(ushort *)(param_1[0x14] + lVar25);
            unaff_RBP = (ulonglong)uVar29;
            if (uVar24 != uVar29) break;
            if (uVar24 == 0) goto LAB_140d6c337;
LAB_140d6c3fc:
            lVar25 = lVar25 + 2;
          }
          if ((uVar29 | uVar24) < 0x80) {
            if ((&DAT_149e05da0)[uVar24] == (&DAT_149e05da0)[(uint)uVar29]) goto LAB_140d6c3fc;
            iVar26 = (uint)(byte)(&DAT_149e05da0)[uVar24] -
                     (uint)(byte)(&DAT_149e05da0)[(uint)uVar29];
          }
          else {
            iVar26 = (uint)uVar24 - (uint)uVar29;
          }
          if (iVar26 != 0) goto LAB_140d6c464;
          goto LAB_140d6c337;
        }
        if ((int)param_1[0x15] + iVar26 == 1) goto LAB_140d6c337;
LAB_140d6c464:
        FUN_1402980a2();
      }
      FUN_140bedfe8(param_1);
    }
  }
LAB_140d6c47e:
  if (param_1[2] == 0) {
    lVar11 = *param_1;
    if ((int)param_1[0xd] == 0) {
      puVar22 = &DAT_149dfb77a;
    }
    else {
      puVar22 = (undefined2 *)param_1[0xc];
    }
    FUN_1446f470e(&local_f8,puVar22,1);
    lVar11 = FUN_142777728(lVar11);
    param_1[2] = lVar11;
    if (lVar11 == 0) {
      lVar11 = FUN_1408e6d00(*param_1);
      param_1[2] = lVar11;
      *(undefined1 *)(lVar11 + 0x41) = *(undefined1 *)((longlong)param_1 + 0x184);
    }
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar26 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar26 != 2)) {
    if (iVar26 == 1) {
      uVar8 = FUN_140ad26c0();
      unaff_RBP = (ulonglong)uVar8;
      DVar9 = GetCurrentThreadId();
      if (uVar8 == DVar9) goto LAB_140d6d67c;
    }
  }
  else {
LAB_140d6d67c:
    QueryPerformanceCounter(&local_b8);
    _DAT_14c866fd0 = (double)local_b8.QuadPart * DAT_14c83f420 + 16777216.0 + _DAT_14c866fd0;
  }
  iVar26 = (int)param_3[1];
  if (iVar26 - 2U < 0x7fffffff) {
    if (iVar26 == (int)param_1[0xd]) {
      if (1 < iVar26) {
        lVar11 = 0;
        while( true ) {
          uVar24 = *(ushort *)(*param_3 + lVar11);
          uVar36 = (ulonglong)uVar24;
          uVar29 = *(ushort *)(param_1[0xc] + lVar11);
          if (uVar24 != uVar29) break;
          if (uVar24 == 0) goto LAB_140d6c5a8;
LAB_140d6c559:
          lVar11 = lVar11 + 2;
        }
        if ((uVar29 | uVar24) < 0x80) {
          uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar36];
          uVar31 = (ulonglong)uVar29;
          uVar29 = (ushort)(byte)(&DAT_149e05da0)[uVar31];
          if ((&DAT_149e05da0)[uVar36] == (&DAT_149e05da0)[uVar31]) goto LAB_140d6c559;
        }
        if (uVar24 != uVar29) goto code_r0x000140d6c59c;
      }
    }
    else if ((int)param_1[0xd] + iVar26 != 1) goto code_r0x000140d6c59c;
  }
  else {
code_r0x000140d6c59c:
    FUN_1402980a2(param_3);
  }
LAB_140d6c5a8:
  unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
  if (!bVar3) goto LAB_140d6c69b;
  plVar14 = (longlong *)param_1[1];
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)(param_1[2] + 0x450);
  }
  if ((char)param_1[0x31] == '\x01') {
    local_b8.QuadPart = 0;
    uStack_b0 = (undefined2 *)0x0;
    FUN_14277c5f0(param_1,&local_b8);
    local_198 = param_1[0x1c];
    FUN_1427744f2(param_1[2],&local_b8,param_1[0x1d],*(undefined2 *)((longlong)param_1 + 0x18a));
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar26 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         ), iVar26 != 2)) {
      if (iVar26 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) goto LAB_140d6d6ea;
      }
    }
    else {
LAB_140d6d6ea:
      QueryPerformanceCounter(&local_130);
      DAT_14c866fd8 = (double)local_130.QuadPart * DAT_14c83f420 + 16777216.0 + DAT_14c866fd8;
    }
    FUN_1447a1747(local_b8.QuadPart,(ulonglong)uStack_b0 & 0xffffffff);
    if ((undefined2 *)local_b8.QuadPart != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_178 = (LARGE_INTEGER *)(param_1 + 4);
    local_170 = plVar14;
    FUN_14277c5f0(param_1);
    FUN_146802d14(param_1[2] + 0x450);
    FUN_146802d14(param_1[2] + 0x1d8);
    FUN_140d9a670(param_1[2] + 0x110);
    FUN_140d9a670(param_1[2] + 0x388);
    FUN_1407da8c4(param_1[2] + 0xa0);
    lVar11 = param_1[2];
    lVar25 = *(longlong *)(lVar11 + 0xf8);
    while (lVar25 != 0) {
      lVar25 = *(longlong *)(lVar25 + 8);
      FUN_1400020a8();
      *(longlong *)(lVar11 + 0xf8) = lVar25;
    }
    *(longlong *)(lVar11 + 0xf8) = 0;
    *(undefined8 *)(lVar11 + 0x100) = 0;
    puVar22 = (undefined2 *)0x0;
    iVar26 = 0;
    (**(code **)(*(longlong *)(lVar11 + 0xf0) + 8))((longlong *)(lVar11 + 0xf0));
    lVar11 = param_1[2];
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
    FUN_1407da39a(lVar11 + 0x2b0);
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
    cVar5 = FUN_14277c0a6(param_1);
    plVar14 = local_170;
    if (cVar5 != '\0') {
      if ((*(char *)((longlong)param_1 + 0x181) == '\x01') && ((int)param_1[5] - 2U < 0x7fffffff)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c867094) &&
           (FUN_144b3d300(&DAT_14c867094), DAT_14c867094 == -1)) {
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32);
          }
          FUN_14054d46e(&DAT_14c846b20);
          _Init_thread_footer(&DAT_14c867094);
        }
        if ((int)param_1[5] == 0) {
          puVar19 = &DAT_149dfb77a;
        }
        else {
          puVar19 = (undefined2 *)local_178->QuadPart;
        }
        cVar5 = FUN_1427735ea(puVar19);
        if (cVar5 != '\0') {
          lVar11 = param_1[2];
          if ((int)param_1[5] == 0) {
            puVar19 = &DAT_149dfb77a;
          }
          else {
            puVar19 = (undefined2 *)local_178->QuadPart;
          }
          FUN_140056680(&local_b8,puVar19);
          FUN_14618f915(lVar11 + 0x110);
          if ((undefined2 *)local_b8.QuadPart != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          *(undefined1 *)(param_1[2] + 0x1c2) = 1;
        }
      }
      if (param_1[1] == 0) {
        lVar11 = param_1[2];
        AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
        iVar26 = *(int *)(lVar11 + 0x458);
        iVar18 = *(int *)(lVar11 + 0x484);
        ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
        if (iVar18 < iVar26) {
          local_d4 = -1;
          lVar11 = param_1[2];
          if (*(int *)(lVar11 + 0x144) < *(int *)(lVar11 + 0x118)) {
            uVar36 = 0;
            iVar26 = DAT_14c867088 + -1;
            if (DAT_14c867088 == 0) {
              iVar26 = 0;
            }
            if (0 < iVar26) {
              puVar22 = DAT_14c867080;
              if (DAT_14c867088 == 0) {
                puVar22 = &DAT_149dfb77a;
              }
              lVar25 = 0;
              uVar36 = 0;
              do {
                uVar8 = ((uint)(ushort)puVar22[lVar25] +
                        (uint)(0x19 < (ushort)puVar22[lVar25] - 0x61) * 0x20) - 0x20;
                uVar23 = (uint)(uVar36 >> 8) ^
                         *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar36 ^ uVar8) & 0xff) * 4);
                uVar36 = (ulonglong)
                         (uVar23 >> 8 ^
                         *(uint *)(&DAT_14c75d150 +
                                  (ulonglong)(uVar23 & 0xff ^ uVar8 >> 8 & 0xff) * 4));
                lVar25 = lVar25 + 1;
              } while (iVar26 != (int)lVar25);
            }
            iVar26 = FUN_140b7f766((longlong *)(lVar11 + 0x110),uVar36,&DAT_14c867080);
            iVar18 = -1;
            if (iVar26 != -1) {
              lVar11 = (longlong)iVar26 * 0xb8 + *(longlong *)(lVar11 + 0x110);
              if ((longlong *)(lVar11 + 0x10) != (longlong *)0x0 && lVar11 != 0) {
                puVar22 = DAT_14c867040;
                if (DAT_14c867048 == 0) {
                  puVar22 = &DAT_149dfb77a;
                }
                FUN_1446f470e(&local_e0,puVar22,1);
                if (*(int *)(lVar11 + 0x18) != *(int *)(lVar11 + 0x44)) {
                  uVar8 = (uint)((ulonglong)local_e0 >> 0x10);
                  uVar23 = (uint)local_e0 & 0xffff;
                  lVar25 = lVar11 + 0x48;
                  if (*(longlong *)(lVar11 + 0x50) != 0) {
                    lVar25 = *(longlong *)(lVar11 + 0x50);
                  }
                  iVar26 = *(int *)(lVar25 + (ulonglong)
                                             (*(int *)(lVar11 + 0x58) - 1U &
                                             (int)((ulonglong)local_e0 >> 0x20) +
                                             ((uint)local_e0 << 0x10 | uVar23) +
                                             (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar23 >> 4)) * 4);
                  if (iVar26 != -1) {
                    lVar11 = *(longlong *)(lVar11 + 0x10);
                    do {
                      lVar25 = lVar11 + (longlong)iVar26 * 0x40;
                      if (*(longlong *)(lVar11 + (longlong)iVar26 * 0x40) == local_e0) {
                        if (lVar25 + 8 != 0 && lVar25 != 0) {
                          uVar36 = (ulonglong)(*(int *)(lVar25 + 0x28) - 2U < 0x7fffffff) * 0x10;
                          if (*(int *)(lVar25 + 0x18 + uVar36) == 0) {
                            _Str = L"";
                          }
                          else {
                            _Str = *(wchar_t **)(lVar25 + 8 + (uVar36 | 8));
                          }
                          iVar18 = _wtoi(_Str);
                        }
                        break;
                      }
                      iVar26 = *(int *)(lVar25 + 0x38);
                    } while (iVar26 != -1);
                  }
                }
              }
            }
            puVar22 = &DAT_149dfb77a;
            if (DAT_14c867048 != 0) {
              puVar22 = DAT_14c867040;
            }
            puVar19 = &DAT_149dfb77a;
            if (DAT_14c867088 != 0) {
              puVar19 = DAT_14c867080;
            }
            uVar8 = FUN_14626ab1a(param_1[2] + 0x1d8,puVar19,puVar22,&local_d4);
            iVar26 = local_d4;
            puVar22 = (undefined2 *)(ulonglong)uVar8;
            if (DAT_14c846b14 == '\0') {
              FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                            L"Attempting to get the command line but it hasn\'t been initialized yet."
                           );
            }
            cVar5 = FUN_14054d46e(&DAT_14c846b20,L"REGENERATEINIS");
            if (cVar5 == '\0') {
              bVar32 = (byte)uVar8 & iVar18 < iVar26;
              puVar22 = (undefined2 *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),bVar32);
              if (bVar32 == 1) {
                local_f8 = (longlong *)0x0;
                uStack_f0 = 0;
                uVar36 = 0;
                puVar22 = &DAT_149dfb77a;
                if (DAT_14c867058 != 0) {
                  puVar22 = DAT_14c867050;
                }
                puVar19 = &DAT_149dfb77a;
                if (DAT_14c867088 != 0) {
                  puVar19 = DAT_14c867080;
                }
                local_164 = iVar26;
                FUN_14105ab36(param_1[2] + 0x450,puVar19,puVar22);
                local_98 = (uint *)0x0;
                local_90 = 0;
                local_b8.QuadPart = 0;
                uStack_b0 = (undefined2 *)0x0;
                local_8c = 0xffffffff00000080;
                local_84 = 0;
                local_78 = 0;
                local_70 = 0;
                FUN_14680d4ce(param_1[2] + 0x110);
                plVar14 = (longlong *)(ulonglong)local_90;
                uVar31 = 1;
                iVar26 = 0;
                uVar8 = 0;
                if (local_90 != 0) {
                  puVar15 = local_98;
                  if (local_98 == (uint *)0x0) {
                    puVar15 = local_a8;
                  }
                  uVar8 = *puVar15;
                  if (uVar8 == 0) {
                    iVar26 = local_90 + 0x1e;
                    if (-1 < (int)(local_90 - 1)) {
                      iVar26 = local_90 - 1;
                    }
                    uVar36 = 0;
                    uVar31 = (ulonglong)(uint)(iVar26 >> 5);
                    if (iVar26 >> 5 < 1) {
                      uVar31 = uVar36;
                    }
                    iVar26 = 0;
                    do {
                      if (uVar31 == uVar36) goto LAB_140d6cc5d;
                      iVar26 = iVar26 + 0x20;
                      uVar8 = puVar15[uVar36 + 1];
                      uVar36 = uVar36 + 1;
                    } while (uVar8 == 0);
                  }
                  else {
                    uVar36 = 0;
                  }
                  uVar31 = (ulonglong)(-uVar8 & uVar8);
                  uVar33 = uVar31 * 2 + 1;
                  lVar11 = 0x3f;
                  if (uVar33 != 0) {
                    for (; uVar33 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                    }
                  }
                  uVar8 = (iVar26 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
                  if ((int)local_90 <= (int)uVar8) {
                    uVar8 = local_90;
                  }
                }
                if (uVar8 != local_90) {
                  uVar35 = 0xffffffff;
                  uVar23 = local_90;
                  local_180 = plVar14;
                  do {
                    plVar20 = (longlong *)(local_b8.QuadPart + (longlong)(int)uVar8 * 0x18);
                    iVar18 = (int)plVar20[1];
                    if ((longlong)(int)uStack_f0 != 0) {
                      plVar28 = local_f8;
LAB_140d6d4fa:
                      if ((int)plVar28[1] == iVar18) {
                        local_184 = iVar26;
                        if (1 < iVar18) {
                          lVar11 = *plVar28;
                          lVar25 = 0;
                          do {
                            uVar24 = *(ushort *)(lVar11 + lVar25);
                            uVar33 = (ulonglong)uVar24;
                            uVar29 = *(ushort *)(*plVar20 + lVar25);
                            plVar14 = local_180;
                            if (uVar24 == uVar29) {
                              if (uVar24 == 0) break;
                            }
                            else {
                              local_160 = lVar11;
                              if (0x7f < (uVar29 | uVar24)) goto LAB_140d6d57d;
                              uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar33];
                              uVar30 = (ulonglong)uVar29;
                              uVar29 = (ushort)(byte)(&DAT_149e05da0)[uVar30];
                              if ((&DAT_149e05da0)[uVar33] != (&DAT_149e05da0)[uVar30])
                              goto LAB_140d6d57d;
                            }
                            lVar25 = lVar25 + 2;
                          } while( true );
                        }
                      }
                      else if ((int)plVar28[1] + iVar18 != 1) goto LAB_140d6d510;
                      goto LAB_140d6d431;
                    }
LAB_140d6d3d1:
                    puVar22 = &DAT_149dfb77a;
                    if (iVar18 != 0) {
                      puVar22 = (undefined2 *)*plVar20;
                    }
                    lVar11 = param_1[2];
                    FUN_140056680(&local_130,puVar22);
                    FUN_140fe65e6(lVar11 + 0x110,&local_130);
                    plVar14 = local_180;
                    uVar23 = local_90;
                    if ((undefined2 *)local_130.QuadPart != (undefined2 *)0x0) {
                      FUN_1400020a8();
                      plVar14 = local_180;
                      uVar23 = local_90;
                    }
LAB_140d6d431:
                    uVar35 = uVar35 & ~(uint)uVar31;
                    puVar15 = local_98;
                    if (local_98 == (uint *)0x0) {
                      puVar15 = local_a8;
                    }
                    iVar18 = (int)uVar36;
                    lVar11 = (longlong)iVar18;
                    uVar8 = puVar15[lVar11] & uVar35;
                    if (uVar8 == 0) {
                      iVar7 = uVar23 + 0x1e;
                      if (-1 < (int)(uVar23 - 1)) {
                        iVar7 = uVar23 - 1;
                      }
                      iVar7 = iVar7 >> 5;
                      iVar26 = iVar26 + 0x20;
                      iVar21 = iVar7;
                      if (iVar7 < iVar18) {
                        iVar21 = iVar18;
                      }
                      if (iVar18 < iVar7) {
                        lVar25 = 0;
                        do {
                          uVar8 = puVar15[lVar11 + lVar25 + 1];
                          if (uVar8 != 0) {
                            uVar36 = (ulonglong)(iVar18 + (int)lVar25 + 1);
                            uVar35 = 0xffffffff;
                            goto LAB_140d6d4b9;
                          }
                          iVar26 = iVar26 + 0x20;
                          lVar25 = lVar25 + 1;
                        } while (iVar21 - lVar11 != lVar25);
                        uVar35 = 0xffffffff;
                        lVar11 = (longlong)iVar21;
                      }
                      uVar36 = lVar11 + 1U & 0xffffffff;
                      plVar14 = local_180;
                      uVar8 = uVar23;
                    }
                    else {
LAB_140d6d4b9:
                      uVar31 = (ulonglong)(-uVar8 & uVar8);
                      uVar33 = uVar31 * 2 + 1;
                      lVar11 = 0x3f;
                      if (uVar33 != 0) {
                        for (; uVar33 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                        }
                      }
                      uVar8 = (iVar26 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
                      if ((int)uVar23 <= (int)uVar8) {
                        uVar8 = uVar23;
                      }
                    }
                  } while (uVar8 != (uint)plVar14);
                }
LAB_140d6cc5d:
                uVar36 = 0;
                iVar26 = DAT_14c867088 + -1;
                if (DAT_14c867088 == 0) {
                  iVar26 = 0;
                }
                if (0 < iVar26) {
                  puVar22 = DAT_14c867080;
                  if (DAT_14c867088 == 0) {
                    puVar22 = &DAT_149dfb77a;
                  }
                  lVar11 = 0;
                  uVar36 = 0;
                  do {
                    uVar8 = ((uint)(ushort)puVar22[lVar11] +
                            (uint)(0x19 < (ushort)puVar22[lVar11] - 0x61) * 0x20) - 0x20;
                    uVar23 = (uint)(uVar36 >> 8) ^
                             *(uint *)(&DAT_14c75d150 +
                                      (ulonglong)(((uint)uVar36 ^ uVar8) & 0xff) * 4);
                    uVar36 = (ulonglong)
                             (uVar23 >> 8 ^
                             *(uint *)(&DAT_14c75d150 +
                                      (ulonglong)(uVar23 & 0xff ^ uVar8 >> 8 & 0xff) * 4));
                    lVar11 = lVar11 + 1;
                  } while (iVar26 != (int)lVar11);
                }
                uVar13 = FUN_140d68dce(param_1[2] + 0x110,uVar36,&DAT_14c867080);
                puVar22 = DAT_14c867040;
                if (DAT_14c867048 == 0) {
                  puVar22 = &DAT_149dfb77a;
                }
                FUN_1446f470e(local_100,puVar22,1);
                FUN_1406e05e8(uVar13);
                uVar36 = 0;
                iVar26 = DAT_14c867088 + -1;
                if (DAT_14c867088 == 0) {
                  iVar26 = 0;
                }
                if (0 < iVar26) {
                  puVar22 = DAT_14c867080;
                  if (DAT_14c867088 == 0) {
                    puVar22 = &DAT_149dfb77a;
                  }
                  lVar11 = 0;
                  uVar36 = 0;
                  do {
                    uVar8 = ((uint)(ushort)puVar22[lVar11] +
                            (uint)(0x19 < (ushort)puVar22[lVar11] - 0x61) * 0x20) - 0x20;
                    uVar23 = (uint)(uVar36 >> 8) ^
                             *(uint *)(&DAT_14c75d150 +
                                      (ulonglong)(((uint)uVar36 ^ uVar8) & 0xff) * 4);
                    uVar36 = (ulonglong)
                             (uVar23 >> 8 ^
                             *(uint *)(&DAT_14c75d150 +
                                      (ulonglong)(uVar23 & 0xff ^ uVar8 >> 8 & 0xff) * 4));
                    lVar11 = lVar11 + 1;
                  } while (iVar26 != (int)lVar11);
                }
                uVar13 = FUN_140d68dce(param_1[2] + 0x110,uVar36,&DAT_14c867080);
                FUN_140002266(&local_140,&DAT_149e063bc,local_164);
                puVar22 = local_140;
                local_130.QuadPart = local_130.QuadPart & 0xffffffffffffff00;
                local_128 = local_140;
                local_140 = (undefined2 *)0x0;
                iVar26 = (int)local_138;
                local_120 = (int)local_138;
                local_11c = local_138._4_4_;
                local_138 = 0;
                if (iVar26 == 0) {
                  puVar22 = &DAT_149dfb77a;
                }
                local_118 = 0;
                uStack_110 = 0;
                local_108 = FUN_144a1ccda(puVar22,0);
                FUN_1406e0f98(&local_130);
                puVar22 = &DAT_149dfb77a;
                if (DAT_14c867048 != 0) {
                  puVar22 = DAT_14c867040;
                }
                FUN_1446f470e(local_148,puVar22,1);
                local_d0 = local_148;
                local_c8 = &local_130;
                FUN_1457f3958(uVar13,local_bc,&local_d0,0);
                if (local_118 != 0) {
                  FUN_1400020a8();
                }
                if (local_128 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_140 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                local_70 = 0;
                if (local_78 != 0) {
                  FUN_1400020a8();
                }
                FUN_1408910a4(&local_b8);
                FUN_1447a1747(local_f8,uStack_f0 & 0xffffffff);
                if (local_f8 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
            else {
              FUN_140d9a670(param_1[2] + 0x110,0);
            }
          }
          FUN_1406dfe24(param_1[2] + 0x450,param_1[2] + 0x110);
        }
      }
      lVar11 = param_1[2];
      AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
      iVar18 = *(int *)(lVar11 + 0x458);
      iVar7 = *(int *)(lVar11 + 0x484);
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
      plVar14 = local_170;
      uVar34 = (undefined7)((ulonglong)puVar22 >> 8);
      iVar26 = (int)CONCAT71(uVar34,1);
      if (iVar18 <= iVar7) {
        lVar11 = param_1[1];
        if (lVar11 == 0) {
          iVar26 = 0;
        }
        else {
          AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
          iVar26 = (int)CONCAT71(uVar34,*(int *)(lVar11 + 0x34) < *(int *)(lVar11 + 8));
          ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
        }
      }
    }
    local_180 = param_1 + 0xc;
    if ((int)param_1[0xd] == 0) {
      puVar22 = &DAT_149dfb77a;
    }
    else {
      puVar22 = (undefined2 *)*local_180;
    }
    FUN_1446f470e(&local_b8,puVar22,1);
    ((LARGE_INTEGER *)((longlong)plVar14 + 0x54))->QuadPart = (LONGLONG)local_b8;
    uVar31 = 0;
    uVar36 = (ulonglong)((int)param_1[7] - 1);
    if ((int)param_1[7] == 0) {
      uVar36 = uVar31;
    }
    FUN_1402980a2(plVar14 + 0xc,param_1[6],uVar36);
    *(byte *)(plVar14 + 10) = *(byte *)(plVar14 + 10) | 4;
    FUN_140056680(&local_b8);
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    iVar18 = (int)uStack_b0 + -1;
    if ((int)uStack_b0 == 0) {
      iVar18 = 0;
    }
    if (0 < iVar18) {
      LVar16 = local_b8;
      if ((int)uStack_b0 == 0) {
        LVar16.QuadPart = (LONGLONG)&DAT_149dfb77a;
      }
      lVar11 = 0;
      uVar31 = 0;
      do {
        uVar24 = *(ushort *)(LVar16.QuadPart + lVar11 * 2);
        uVar8 = ((uint)(0x19 < uVar24 - 0x61) * 0x20 + (uint)uVar24) - 0x20;
        uVar23 = (uint)(uVar31 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar31 ^ uVar8) & 0xff) * 4);
        uVar31 = (ulonglong)
                 (uVar23 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar23 & 0xff ^ uVar8 >> 8 & 0xff) * 4));
        lVar11 = lVar11 + 1;
      } while (iVar18 != (int)lVar11);
    }
    iVar18 = FUN_14052bbf0(plVar14,uVar31,&local_b8);
    if (iVar18 == -1) {
      lVar11 = 0;
    }
    else {
      lVar11 = (longlong)iVar18 * 0xc0 + *plVar14;
    }
    plVar14 = (longlong *)(lVar11 + 0x10);
    if (lVar11 == 0) {
      plVar14 = (longlong *)0x0;
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    if ((undefined2 *)local_b8.QuadPart != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_184 = iVar26;
    if ((plVar14 != (longlong *)0x0) &&
       (FUN_1446f470e(&local_150,L"bCanSaveAllSections",1),
       (int)plVar14[1] != *(int *)((longlong)plVar14 + 0x34))) {
      uVar8 = (uint)((ulonglong)local_150 >> 0x10);
      uVar23 = (uint)local_150 & 0xffff;
      plVar20 = plVar14 + 7;
      if ((longlong *)plVar14[8] != (longlong *)0x0) {
        plVar20 = (longlong *)plVar14[8];
      }
      iVar26 = *(int *)((longlong)plVar20 +
                       (ulonglong)
                       ((int)plVar14[9] - 1U &
                       (int)((ulonglong)local_150 >> 0x20) + ((uint)local_150 << 0x10 | uVar23) +
                       (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar23 >> 4)) * 4);
      if (iVar26 != -1) {
        do {
          lVar11 = *plVar14 + (longlong)iVar26 * 0x40;
          if (*(longlong *)(*plVar14 + (longlong)iVar26 * 0x40) == local_150) {
            if (lVar11 + 8 != 0 && lVar11 != 0) {
              uVar36 = (ulonglong)(*(int *)(lVar11 + 0x28) - 2U < 0x7fffffff) * 0x10;
              if (*(int *)(lVar11 + 0x18 + uVar36) == 0) {
                puVar22 = &DAT_149dfb77a;
              }
              else {
                puVar22 = *(undefined2 **)(lVar11 + 8 + (uVar36 | 8));
              }
              cVar5 = FUN_14052c20c(puVar22);
              goto LAB_140d6d19d;
            }
            break;
          }
          iVar26 = *(int *)(lVar11 + 0x38);
        } while (iVar26 != -1);
      }
    }
    cVar5 = '\0';
LAB_140d6d19d:
    plVar14 = local_180;
    local_190 = 0xffffffff;
    local_198._0_4_ = 0;
    iVar26 = FUN_1447ee042(local_180,&DAT_149e31290,4,1);
    local_190 = 0xffffffff;
    local_198 = (ulonglong)local_198._4_4_ << 0x20;
    iVar18 = FUN_1447ee042(plVar14,L"Editor",6,1);
    plVar14 = local_170;
    if (iVar18 == -1) {
      bVar32 = 0;
    }
    else {
      if ((int)param_1[0xd] == 0) {
        puVar22 = &DAT_149dfb77a;
      }
      else {
        puVar22 = (undefined2 *)*local_180;
      }
      lVar11 = 0;
      while( true ) {
        uVar24 = *(ushort *)((longlong)puVar22 + lVar11);
        uVar36 = (ulonglong)uVar24;
        uVar29 = *(ushort *)((longlong)L"Editor" + lVar11);
        if (uVar24 != uVar29) break;
        if (uVar24 == 0) goto LAB_140d6d261;
LAB_140d6d234:
        lVar11 = lVar11 + 2;
      }
      if ((uVar29 | uVar24) < 0x80) {
        uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar36];
        uVar31 = (ulonglong)uVar29;
        uVar29 = (ushort)(byte)(&DAT_149e05da0)[uVar31];
        if ((&DAT_149e05da0)[uVar36] == (&DAT_149e05da0)[uVar31]) goto LAB_140d6d234;
      }
      bVar32 = 0x10;
      if (uVar24 != uVar29) goto LAB_140d6d263;
LAB_140d6d261:
      bVar32 = 0;
    }
LAB_140d6d263:
    unaff_RBP = 1;
    if (iVar26 != -1) {
      bVar32 = 0x10;
    }
    if (cVar5 != '\0') {
      bVar32 = 0x10;
    }
    *(byte *)(local_170 + 10) = *(byte *)(local_170 + 10) & 0xef | bVar32;
    bVar32 = (byte)local_184;
    bVar17 = bVar32;
    if (((DAT_14c75b114 == '\0') && (*(char *)((longlong)param_1 + 0x185) == '\x01')) &&
       (*(char *)((longlong)param_1 + 0x181) == '\x01')) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar6 = FUN_14054d46e(&DAT_14c846b20,L"Multiprocess");
      bVar17 = bVar6 & bVar32;
      if ((bVar6 == 0) && (bVar32 == 1)) {
        if (param_1[1] == 0) {
          local_b8.QuadPart = 0;
          uStack_b0 = (undefined2 *)0x0;
          FUN_14577b4ea(plVar14,local_178,1,&local_b8);
          if ((undefined2 *)local_b8.QuadPart != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          unaff_RBP = 1;
        }
        goto LAB_140d6c673;
      }
    }
    if (bVar17 == 0) {
      if (((*param_1 != 0) && (param_1[1] == 0)) && (param_1[3] == 0)) {
        FUN_1407da252(*param_1,param_2);
      }
      goto LAB_140d6bcb1;
    }
  }
LAB_140d6c673:
  if (((param_1[1] != 0) && (param_1[3] != 0)) && (*(char *)(param_1[2] + 0x42) != '\x02')) {
    FUN_140d7b3ae(param_1[1],param_1[3] + 0x450);
  }
LAB_140d6c69b:
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d6d780 FUN_140d6d780 body=72 status=ok
// SIG undefined FUN_140d6d780(void)

void FUN_140d6d780(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  INT_PTR IVar2;
  
  hModule = GetModuleHandleW(L"ntdll.dll");
  if (hModule == (HMODULE)0x0) {
    DAT_14c8c2708 = 0;
  }
  else {
    pFVar1 = GetProcAddress(hModule,"RtlAreLongPathsEnabled");
    if (pFVar1 == (FARPROC)0x0) {
      DAT_14c8c2708 = FUN_14682e40a();
    }
    else {
      IVar2 = (*pFVar1)();
      DAT_14c8c2708 = (char)IVar2 != '\0';
    }
  }
  return;
}



// FUNCTION 140d6d7c8 FUN_140d6d7c8 body=276 status=ok
// SIG undefined FUN_140d6d7c8(void)

undefined1 (*) [16] FUN_140d6d7c8(undefined1 (*param_1) [16],longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auStack_158 [32];
  undefined1 local_138 [16] [16];
  longlong local_38;
  undefined1 (*local_30) [16];
  undefined4 local_28;
  ulonglong local_20;
  undefined1 auVar9 [16];
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_1 = (undefined1  [16])0x0;
  lVar3 = (**(code **)(*param_2 + 0x230))(param_2);
  auVar9._8_8_ = extraout_XMM0_Qb;
  auVar9._0_8_ = extraout_XMM0_Qa;
  if (lVar3 != 0) {
    local_30 = local_138;
    local_38 = 0;
    local_28 = 7;
    local_138[0] = pmovsxbw(auVar9,(char  [8])0x73776f646e6957);
    lVar3 = (**(code **)(*param_2 + 0x230))();
    lVar5 = 0;
    while( true ) {
      uVar1 = *(ushort *)(lVar3 + lVar5);
      uVar6 = (uint)uVar1;
      uVar2 = *(ushort *)(local_138[0] + lVar5);
      uVar8 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_140d6d85e;
        }
        iVar7 = uVar6 - uVar8;
        goto LAB_140d6d888;
      }
      if (uVar1 == 0) break;
LAB_140d6d85e:
      lVar5 = lVar5 + 2;
    }
    iVar7 = 0;
LAB_140d6d888:
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (iVar7 != 0) {
      uVar4 = (**(code **)(*param_2 + 0x230))(param_2);
      FUN_14020fad6(param_1,uVar4);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d6d8de FUN_140d6d8de body=1118 status=ok
// SIG undefined FUN_140d6d8de(void)

void FUN_140d6d8de(longlong param_1,char param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(param_1 + 0xb) != '\x01') && (*(char *)(param_1 + 8) == '\0')) {
    if ((int)param_3[1] - 2U < 0x7fffffff) {
      FUN_1446f470e(&local_50,*param_3,1);
      lVar3 = FUN_142777728(param_1,local_50,param_3);
      if (lVar3 != 0) {
        FUN_142777240();
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x3bf0);
      local_58 = param_3;
      if (iVar1 == 0) {
        uVar12 = 1;
        uVar11 = 0;
        iVar7 = 0;
        iVar9 = 0;
      }
      else {
        puVar4 = *(uint **)(param_1 + 0x3be8);
        if (*(uint **)(param_1 + 0x3be8) == (uint *)0x0) {
          puVar4 = (uint *)(param_1 + 0x3bd8);
        }
        uVar14 = *puVar4;
        if (uVar14 == 0) {
          iVar9 = iVar1 + 0x1e;
          if (-1 < iVar1 + -1) {
            iVar9 = iVar1 + -1;
          }
          uVar11 = 0;
          uVar12 = (ulonglong)(uint)(iVar9 >> 5);
          if (iVar9 >> 5 < 1) {
            uVar12 = uVar11;
          }
          iVar7 = 0;
          do {
            if (uVar12 == uVar11) goto LAB_140d6d9fa;
            iVar7 = iVar7 + 0x20;
            uVar14 = puVar4[uVar11 + 1];
            uVar11 = uVar11 + 1;
          } while (uVar14 == 0);
        }
        else {
          uVar11 = 0;
          iVar7 = 0;
        }
        uVar12 = (ulonglong)(-uVar14 & uVar14);
        uVar13 = uVar12 * 2 + 1;
        lVar3 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar9 = (iVar7 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
        if (iVar1 <= iVar9) {
          iVar9 = iVar1;
        }
      }
      if (iVar9 != iVar1) {
        uVar14 = 0xffffffff;
        do {
          FUN_142777240(*(undefined8 *)
                         (*(longlong *)(param_1 + 0x3bc8) + 0x10 + (longlong)iVar9 * 0x20));
          uVar14 = ~(uint)uVar12 & uVar14;
          puVar4 = *(uint **)(param_1 + 0x3be8);
          if (*(uint **)(param_1 + 0x3be8) == (uint *)0x0) {
            puVar4 = (uint *)(param_1 + 0x3bd8);
          }
          iVar2 = *(int *)(param_1 + 0x3bf0);
          iVar9 = (int)uVar11;
          lVar3 = (longlong)iVar9;
          uVar5 = puVar4[lVar3] & uVar14;
          if (uVar5 == 0) {
            iVar6 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar6 = iVar2 + -1;
            }
            iVar6 = iVar6 >> 5;
            iVar7 = iVar7 + 0x20;
            iVar8 = iVar6;
            if (iVar6 < iVar9) {
              iVar8 = iVar9;
            }
            if (iVar9 < iVar6) {
              lVar10 = 0;
              do {
                uVar5 = puVar4[lVar3 + lVar10 + 1];
                if (uVar5 != 0) {
                  uVar11 = (ulonglong)(iVar9 + (int)lVar10 + 1);
                  uVar14 = 0xffffffff;
                  goto LAB_140d6daee;
                }
                iVar7 = iVar7 + 0x20;
                lVar10 = lVar10 + 1;
              } while (iVar8 - lVar3 != lVar10);
              uVar14 = 0xffffffff;
              lVar3 = (longlong)iVar8;
            }
            uVar11 = lVar3 + 1U & 0xffffffff;
            iVar9 = iVar2;
          }
          else {
LAB_140d6daee:
            uVar12 = (ulonglong)(-uVar5 & uVar5);
            uVar13 = uVar12 * 2 + 1;
            lVar3 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            iVar9 = (iVar7 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
            if (iVar2 <= iVar9) {
              iVar9 = iVar2;
            }
          }
        } while (iVar9 != iVar1);
      }
LAB_140d6d9fa:
      param_3 = local_58;
      lVar3 = 0x18;
      do {
        FUN_142777240();
        lVar3 = lVar3 + 0x5f8;
      } while (lVar3 != 0x3bc8);
    }
  }
  if ((param_2 != '\0') && (*(char *)(param_1 + 8) == '\0')) {
    if (*(uint *)(param_3 + 1) < 2) {
      local_58 = (longlong *)(param_1 + 0x3bc8);
      iVar1 = *(int *)(param_1 + 0x3bf0);
      if (iVar1 == 0) {
        uVar13 = 1;
        uVar11 = 0;
        iVar9 = 0;
        iVar7 = 0;
      }
      else {
        puVar4 = *(uint **)(param_1 + 0x3be8);
        if (*(uint **)(param_1 + 0x3be8) == (uint *)0x0) {
          puVar4 = (uint *)(param_1 + 0x3bd8);
        }
        uVar14 = *puVar4;
        if (uVar14 == 0) {
          iVar9 = iVar1 + 0x1e;
          if (-1 < iVar1 + -1) {
            iVar9 = iVar1 + -1;
          }
          uVar11 = 0;
          uVar12 = (ulonglong)(uint)(iVar9 >> 5);
          if (iVar9 >> 5 < 1) {
            uVar12 = uVar11;
          }
          iVar9 = 0;
          do {
            if (uVar12 == uVar11) goto LAB_140d6dbfb;
            iVar9 = iVar9 + 0x20;
            uVar14 = puVar4[uVar11 + 1];
            uVar11 = uVar11 + 1;
          } while (uVar14 == 0);
        }
        else {
          uVar11 = 0;
          iVar9 = 0;
        }
        uVar13 = (ulonglong)(-uVar14 & uVar14);
        uVar12 = uVar13 * 2 + 1;
        lVar3 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar7 = (iVar9 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
        if (iVar1 <= iVar7) {
          iVar7 = iVar1;
        }
      }
      if (iVar7 != iVar1) {
        uVar14 = 0xffffffff;
        iVar2 = iVar1;
        do {
          lVar3 = *(longlong *)(*local_58 + 0x10 + (longlong)iVar7 * 0x20);
          if (lVar3 != 0) {
            FUN_140925f20(lVar3);
            FUN_1400020a8(lVar3);
            iVar2 = *(int *)(param_1 + 0x3bf0);
          }
          uVar14 = uVar14 & ~(uint)uVar13;
          puVar4 = *(uint **)(param_1 + 0x3be8);
          if (*(uint **)(param_1 + 0x3be8) == (uint *)0x0) {
            puVar4 = (uint *)(param_1 + 0x3bd8);
          }
          iVar7 = (int)uVar11;
          lVar3 = (longlong)iVar7;
          uVar5 = puVar4[lVar3] & uVar14;
          if (uVar5 == 0) {
            iVar6 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar6 = iVar2 + -1;
            }
            iVar6 = iVar6 >> 5;
            iVar9 = iVar9 + 0x20;
            iVar8 = iVar6;
            if (iVar6 < iVar7) {
              iVar8 = iVar7;
            }
            if (iVar7 < iVar6) {
              lVar10 = 0;
              do {
                uVar5 = puVar4[lVar3 + lVar10 + 1];
                if (uVar5 != 0) {
                  uVar11 = (ulonglong)(iVar7 + (int)lVar10 + 1);
                  uVar14 = 0xffffffff;
                  goto LAB_140d6dcf4;
                }
                iVar9 = iVar9 + 0x20;
                lVar10 = lVar10 + 1;
              } while (iVar8 - lVar3 != lVar10);
              uVar14 = 0xffffffff;
              iVar7 = iVar8;
            }
            uVar11 = (ulonglong)(iVar7 + 1);
            iVar7 = iVar2;
          }
          else {
LAB_140d6dcf4:
            uVar13 = (ulonglong)(-uVar5 & uVar5);
            uVar12 = uVar13 * 2 + 1;
            lVar3 = 0x3f;
            if (uVar12 != 0) {
              for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            iVar7 = (iVar9 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
            if (iVar2 <= iVar7) {
              iVar7 = iVar2;
            }
          }
        } while (iVar7 != iVar1);
      }
LAB_140d6dbfb:
      FUN_145eda9d2(local_58);
      FUN_1447a1747(*(undefined8 *)(param_1 + 0x3c18),*(undefined4 *)(param_1 + 0x3c20));
      *(undefined4 *)(param_1 + 0x3c20) = 0;
      if (*(int *)(param_1 + 0x3c24) != 0) {
        FUN_1408be2c4(param_1 + 0x3c18,0);
      }
    }
    else {
      FUN_145709dfc(param_1,param_3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d6dd3e FUN_140d6dd3e body=22 status=ok
// SIG undefined FUN_140d6dd3e(void)

void FUN_140d6dd3e(undefined8 param_1)

{
  FUN_1448097c4(param_1,&DAT_149e01f64,&DAT_149e065c6,0);
  return;
}



// FUNCTION 140d6dd60 FUN_140d6dd60 body=118 status=ok
// SIG undefined FUN_140d6dd60(void)

undefined8 * FUN_140d6dd60(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14b9595f0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0x3860a972;
  param_1[0x7b] = 0;
  (**(code **)(*(longlong *)param_1[0x75] + 0x728))((longlong *)param_1[0x75],DAT_14cbe81d8,1);
  plVar1 = (longlong *)param_1[0x75];
  if ((*(byte *)((longlong)plVar1 + 0x2d3) & 8) != 0) {
    *(byte *)((longlong)plVar1 + 0x2d3) = *(byte *)((longlong)plVar1 + 0x2d3) & 0xf7;
    (**(code **)(*plVar1 + 0x958))();
  }
  return param_1;
}



// FUNCTION 140d6ddde FUN_140d6ddde body=133 status=ok
// SIG undefined FUN_140d6ddde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140d6ddde(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  FUN_1407fec00();
  *param_1 = (longlong)&PTR_FUN_14b970b50;
  FUN_140e96cb2();
  *(undefined4 *)(param_1 + 0xb) = 6;
  FUN_1401b309e(param_1 + 10,6,*(undefined4 *)((longlong)param_1 + 0x5c));
  uVar5 = uRam000000014cbc82c8;
  puVar1 = (undefined4 *)param_1[10];
  *(undefined8 *)(puVar1 + 8) = _DAT_14cbc82c0;
  *(undefined8 *)(puVar1 + 10) = uVar5;
  uVar5 = uRam000000014cbc82b8;
  *(undefined8 *)(puVar1 + 4) = _DAT_14cbc82b0;
  *(undefined8 *)(puVar1 + 6) = uVar5;
  uVar4 = uRam000000014cbc82ac;
  uVar3 = uRam000000014cbc82a8;
  uVar2 = DAT_14cbc82a0._4_4_;
  *puVar1 = (undefined4)DAT_14cbc82a0;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  FUN_1407fecba(param_1 + 0xc,(int)param_1[0xb],1);
  param_1[7] = 0;
  (**(code **)(*param_1 + 0xa8))(param_1);
  return param_1;
}



// FUNCTION 140d6de64 FUN_140d6de64 body=20 status=ok
// SIG undefined FUN_140d6de64(void)

void FUN_140d6de64(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x44) = DAT_14cbc8e58;
  return;
}



// FUNCTION 140d6de7e FUN_140d6de7e body=57 status=ok
// SIG undefined FUN_140d6de7e(void)

void FUN_140d6de7e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5afa8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5afa8 = FUN_140002ddd(FUN_1464cd6d5,uVar1,L"GbxBrainTask_AOEAttack");
  }
  return;
}



// FUNCTION 140d6deb8 FUN_140d6deb8 body=481 status=ok
// SIG undefined FUN_140d6deb8(void)

void FUN_140d6deb8(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar12 = 1;
    local_58._4_4_ = 0;
    uVar11 = 0xffffffff;
    iVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar12 = local_68 >> 0x20;
    uVar11 = (uint)local_58;
    iVar13 = (int)local_68;
  }
  plVar4 = local_60;
  iVar6 = local_58._4_4_;
  iVar8 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar10 = *param_1;
      lVar9 = (longlong)iVar6 * 0x68;
      *(undefined4 *)(lVar10 + 0x58 + lVar9) = 0;
      if (*(longlong *)(lVar10 + 0x50 + lVar9) != 0) {
        FUN_1400020a8();
      }
      FUN_140d6e09a(lVar10 + lVar9 + 0x10);
      uVar11 = uVar11 & ~(uint)uVar12;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar10 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4) & uVar11;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar9 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar9 * 4 + lVar10 * 4 + 4);
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar10 == lVar9) goto LAB_140d6dff0;
        }
        iVar13 = iVar13 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar12 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar6 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140d6dff0:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14059f004(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d6e09a FUN_140d6e09a body=55 status=ok
// SIG undefined FUN_140d6e09a(void)

void FUN_140d6e09a(longlong *param_1)

{
  FUN_140d6e0d2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d6e0d2 FUN_140d6e0d2 body=121 status=ok
// SIG undefined FUN_140d6e0d2(void)

void FUN_140d6e0d2(longlong param_1,int param_2)

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



// FUNCTION 140d6e14c FUN_140d6e14c body=105 status=ok
// SIG undefined FUN_140d6e14c(void)

void FUN_140d6e14c(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140d6e202();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_140d6e1b6(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d6e1b6 FUN_140d6e1b6 body=76 status=ok
// SIG undefined FUN_140d6e1b6(void)

void FUN_140d6e1b6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140d6e202();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140d6e1f3;
    }
  }
  lVar2 = 0;
LAB_140d6e1f3:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140d6e202 FUN_140d6e202 body=228 status=ok
// SIG undefined FUN_140d6e202(void)

longlong FUN_140d6e202(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbaa970 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14657efc2;
    local_38 = &LAB_148c14a53;
    local_40 = FUN_1459759f7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/OakGame",L"OakFriendsSubsystem",&DAT_14cbaa970,&DAT_148c14a52);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaa970;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d6e2e8 FUN_140d6e2e8 body=40 status=ok
// SIG undefined FUN_140d6e2e8(void)

undefined8 FUN_140d6e2e8(undefined8 param_1,int param_2)

{
  FUN_140d6e310();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d6e310 FUN_140d6e310 body=1204 status=ok
// SIG undefined FUN_140d6e310(void)

void FUN_140d6e310(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac47ef0;
  plVar1 = param_1 + 0x61;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x65) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 100)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 100)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x59;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x5d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x5c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x5c)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x51;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x55) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x54)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x54)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x49;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x4d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x4c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x4c)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x41;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x45) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x44)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x44)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x39;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x3d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x3c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x3c)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x31;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x35) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x34)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x34)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x29;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x2d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x2c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x2c)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x21;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x25) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x24)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x24)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x19;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1c)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x11;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x15) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x14)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x14)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 140d6e7c4 FUN_140d6e7c4 body=238 status=ok
// SIG undefined FUN_140d6e7c4(void)

void FUN_140d6e7c4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140d6e9bc();
  uVar1 = DAT_14c9974a8;
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    local_40 = "BoneHierarchy";
    local_38 = 0xd;
    local_34 = 0;
    uVar2 = FUN_14001a6c0(&local_40,1);
    plVar4 = (longlong *)FUN_140d6e8b4(param_1,uVar2,uVar1);
    if ((plVar4 != (longlong *)0x0) && (iVar3 = (**(code **)(*plVar4 + 0x60))(plVar4), 0 < iVar3)) {
      lVar5 = 8;
      lVar6 = 0;
      lVar7 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x120) + lVar7 * 4) =
             *(undefined4 *)(plVar4[2] + -4 + lVar5);
        FUN_145c3f772(*(longlong *)(param_1 + 0x140) + lVar6,plVar4[2] + lVar5);
        lVar7 = lVar7 + 1;
        iVar3 = (**(code **)(*plVar4 + 0x60))(plVar4);
        lVar6 = lVar6 + 0x50;
        lVar5 = lVar5 + 0x60;
      } while (lVar7 < iVar3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d6e8b4 FUN_140d6e8b4 body=264 status=ok
// SIG undefined FUN_140d6e8b4(void)

longlong FUN_140d6e8b4(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (lVar1 != -0x10 && lVar1 != 0) {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 140d6e9bc FUN_140d6e9bc body=3753 status=ok
// SIG undefined FUN_140d6e9bc(void)

void FUN_140d6e9bc(longlong param_1,longlong *param_2)

{
  longlong **pplVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  longlong ***ppplVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  longlong *plVar19;
  undefined8 uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong *plVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined1 auStack_178 [40];
  longlong local_150;
  longlong local_148;
  ulonglong local_140;
  uint *local_138;
  longlong *local_130;
  longlong *local_128;
  undefined8 uStack_120;
  longlong *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 local_ec [4];
  longlong *local_e8;
  undefined8 uStack_e0;
  longlong **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_c0;
  undefined8 local_bc;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  longlong local_98 [2];
  uint local_88 [4];
  uint *local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  puVar5 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xac),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xac) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)((longlong)param_2 + 0x2b) & 8) != 0) {
    FUN_140d6fb44(param_2,param_1 + 0x58);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_178);
  }
  local_150 = param_1;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    FUN_140d6fb44(param_2,param_1 + 0x58);
    local_78 = (uint *)0x0;
    iVar27 = 0;
    local_70 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    plVar19 = (longlong *)(param_1 + 8);
    pplVar1 = (longlong **)(param_1 + 0x18);
    local_118 = (longlong *)0x100000000;
    local_108 = 0xffffffff;
    local_100 = 0;
    uStack_110 = pplVar1;
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_1449c0562(&local_118);
      iVar27 = *(int *)(local_150 + 0x30);
    }
    local_d0 = local_108;
    uVar20 = local_d0;
    local_c8 = (longlong ***)CONCAT44(local_fc,local_100);
    uStack_e0 = local_118;
    local_d8 = uStack_110;
    local_d0._4_4_ = (int)((ulonglong)local_108 >> 0x20);
    iVar10 = local_d0._4_4_;
    local_e8 = plVar19;
    if ((local_d0._4_4_ != iVar27) || (local_d0 = uVar20, uStack_110 != pplVar1)) {
      do {
        local_d0 = uVar20;
        if (*(char *)(*local_e8 + 0x1c + (longlong)iVar10 * 0x40) == '\x01') {
          local_118 = (longlong *)(*local_e8 + (longlong)iVar10 * 0x40);
          local_128 = local_118 + 2;
          uStack_110 = &local_128;
          FUN_146ee3d80(local_98,local_ec);
        }
        local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 & ~uStack_e0._4_4_);
        FUN_1449c0562(&uStack_e0);
        iVar10 = local_d0._4_4_;
        uVar20 = local_d0;
      } while (local_e8 != plVar19 || (local_d8 != pplVar1 || local_d0._4_4_ != iVar27));
    }
    FUN_146ee4356(param_2,local_98);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_146ed44d4(local_98);
  }
  else {
    uVar29 = 0;
    local_78 = (uint *)0x0;
    local_70 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_140d6fb44(param_2);
    iVar27 = local_70;
    if (local_70 == 0) {
      uVar33 = 1;
      iVar10 = 0;
      iVar31 = 0;
    }
    else {
      puVar12 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar12 = local_88;
      }
      uVar16 = *puVar12;
      if (uVar16 == 0) {
        iVar10 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar10 = local_70 + -1;
        }
        uVar29 = 0;
        uVar33 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar33 = uVar29;
        }
        iVar31 = 0;
        do {
          if (uVar33 == uVar29) goto LAB_140d6ec16;
          iVar31 = iVar31 + 0x20;
          uVar16 = puVar12[uVar29 + 1];
          uVar29 = uVar29 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar29 = 0;
        iVar31 = 0;
      }
      uVar33 = (ulonglong)(-uVar16 & uVar16);
      uVar32 = uVar33 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iVar10 = (iVar31 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
      if (local_70 <= iVar10) {
        iVar10 = local_70;
      }
    }
    if (iVar10 != local_70) {
      lVar23 = param_1 + 0x58;
      uVar16 = 0xffffffff;
      do {
        local_e8 = (longlong *)(local_98[0] + (longlong)iVar10 * 0x14);
        uStack_e0 = (longlong *)(local_98[0] + (longlong)iVar10 * 0x14 + 8);
        FUN_140b20442(lVar23,&local_118,&local_e8,0);
        uVar16 = ~(uint)uVar33 & uVar16;
        puVar12 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar12 = local_88;
        }
        iVar10 = (int)uVar29;
        lVar25 = (longlong)iVar10;
        uVar21 = puVar12[lVar25] & uVar16;
        if (uVar21 == 0) {
          iVar17 = local_70 + 0x1e;
          if (-1 < local_70 + -1) {
            iVar17 = local_70 + -1;
          }
          iVar17 = iVar17 >> 5;
          iVar31 = iVar31 + 0x20;
          iVar18 = iVar17;
          if (iVar17 < iVar10) {
            iVar18 = iVar10;
          }
          if (iVar10 < iVar17) {
            lVar26 = 0;
            do {
              uVar21 = puVar12[lVar25 + lVar26 + 1];
              if (uVar21 != 0) {
                uVar29 = (ulonglong)(iVar10 + (int)lVar26 + 1);
                uVar16 = 0xffffffff;
                goto LAB_140d6ebdf;
              }
              iVar31 = iVar31 + 0x20;
              lVar26 = lVar26 + 1;
            } while (iVar18 - lVar25 != lVar26);
            uVar16 = 0xffffffff;
            iVar10 = iVar18;
          }
          uVar29 = (ulonglong)(iVar10 + 1);
          param_1 = local_150;
          iVar10 = local_70;
        }
        else {
LAB_140d6ebdf:
          uVar33 = (ulonglong)(-uVar21 & uVar21);
          uVar32 = uVar33 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar32 != 0) {
            for (; uVar32 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          iVar10 = (iVar31 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
          if (local_70 <= iVar10) {
            iVar10 = local_70;
          }
        }
      } while (iVar10 != iVar27);
    }
LAB_140d6ec16:
    uVar29 = 0;
    local_c8 = (longlong ***)0x0;
    local_c0 = 0;
    local_e8 = (longlong *)0x0;
    uStack_e0 = (longlong *)0x0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = (undefined1 *)0x0;
    local_a0 = 0;
    FUN_140d6ff3a(param_2);
    if (local_c0 == 0) {
      uVar33 = 1;
      uVar16 = 0;
      iVar27 = 0;
    }
    else {
      ppplVar13 = local_c8;
      if (local_c8 == (longlong ***)0x0) {
        ppplVar13 = &local_d8;
      }
      uVar16 = *(uint *)ppplVar13;
      if (uVar16 == 0) {
        iVar27 = local_c0 + 0x1e;
        if (-1 < (int)(local_c0 - 1)) {
          iVar27 = local_c0 - 1;
        }
        uVar29 = 0;
        uVar33 = (ulonglong)(uint)(iVar27 >> 5);
        if (iVar27 >> 5 < 1) {
          uVar33 = uVar29;
        }
        iVar27 = 0;
        do {
          if (uVar33 == uVar29) goto LAB_140d6eefe;
          iVar27 = iVar27 + 0x20;
          uVar16 = *(uint *)((longlong)ppplVar13 + (uVar29 + 1) * 4);
          uVar29 = uVar29 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar29 = 0;
        iVar27 = 0;
      }
      uVar33 = (ulonglong)(-uVar16 & uVar16);
      uVar32 = uVar33 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      uVar16 = (iVar27 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
      if ((int)local_c0 <= (int)uVar16) {
        uVar16 = local_c0;
      }
    }
    if (uVar16 != local_c0) {
      local_138 = (uint *)(param_1 + 8);
      local_130 = (longlong *)(param_1 + 0x40);
      uVar21 = 0xffffffff;
      local_140 = (ulonglong)local_c0;
      do {
        local_148 = CONCAT44(local_148._4_4_,iVar27);
        plVar19 = local_e8 + (longlong)(int)uVar16 * 8;
        if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
          lVar23 = *plVar19;
          lVar25 = plVar19[1];
          uVar16 = (uint)((ulonglong)lVar25 >> 0x10);
          uVar24 = (uint)lVar25 & 0xffff;
          uVar11 = (uint)((ulonglong)lVar23 >> 0x10);
          uVar28 = (uint)lVar23 & 0xffff;
          uVar11 = (int)((ulonglong)lVar23 >> 0x20) + ((uint)lVar23 << 0x10 | uVar28) +
                   (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar28 >> 4);
          plVar30 = *(longlong **)(param_1 + 0x48);
          if (*(longlong **)(param_1 + 0x48) == (longlong *)0x0) {
            plVar30 = local_130;
          }
          iVar27 = *(int *)((longlong)plVar30 +
                           (ulonglong)
                           (*(int *)(param_1 + 0x50) - 1U &
                           ((uVar11 >> 2) +
                            ((uint)lVar25 << 0x10 | uVar24) + (int)((ulonglong)lVar25 >> 0x20) +
                            (uVar16 << 0x13 | uVar16 & 0xffff) + (uVar24 >> 4) + uVar11 * 0x40 +
                            0x9e3779b9 ^ uVar11)) * 4);
          if (iVar27 != -1) {
            lVar26 = *(longlong *)local_138;
            do {
              lVar22 = (longlong)iVar27 * 0x40;
              lVar2 = lVar26 + lVar22;
              if ((*(longlong *)(lVar26 + lVar22) == lVar23) &&
                 (*(longlong *)(lVar26 + 8 + lVar22) == lVar25)) {
                if ((lVar2 != 0) && (lVar2 != -0x10)) {
                  cVar9 = *(char *)(lVar2 + 0x10);
                  lVar25 = plVar19[2];
                  FUN_1448c236a();
                  lVar23 = **(longlong **)(lVar2 + 0x30);
                  if (cVar9 == (char)lVar25) {
                    (**(code **)(lVar23 + 0x50))();
                  }
                  else {
                    (**(code **)(lVar23 + 0x28))(*(longlong **)(lVar2 + 0x30),plVar19[6]);
                  }
                  goto LAB_140d6ee4a;
                }
                break;
              }
              iVar27 = *(int *)(lVar2 + 0x38);
            } while (iVar27 != -1);
          }
        }
        uStack_110 = (longlong **)(plVar19 + 2);
        local_118 = plVar19;
        FUN_140d6f98c(local_138,&local_128,&local_118);
LAB_140d6ee4a:
        uVar21 = uVar21 & ~(uint)uVar33;
        ppplVar13 = local_c8;
        if (local_c8 == (longlong ***)0x0) {
          ppplVar13 = &local_d8;
        }
        iVar10 = (int)uVar29;
        lVar23 = (longlong)iVar10;
        uVar16 = *(uint *)((longlong)ppplVar13 + lVar23 * 4) & uVar21;
        iVar27 = (uint)local_148;
        if (uVar16 == 0) {
          iVar31 = local_c0 + 0x1e;
          if (-1 < (int)(local_c0 - 1)) {
            iVar31 = local_c0 - 1;
          }
          iVar31 = iVar31 >> 5;
          iVar27 = (uint)local_148 + 0x20;
          iVar17 = iVar31;
          if (iVar31 < iVar10) {
            iVar17 = iVar10;
          }
          if (iVar10 < iVar31) {
            lVar25 = 0;
            do {
              uVar16 = *(uint *)((longlong)ppplVar13 + (lVar23 + lVar25 + 1) * 4);
              if (uVar16 != 0) {
                uVar29 = (ulonglong)(iVar10 + (int)lVar25 + 1);
                uVar21 = 0xffffffff;
                goto LAB_140d6eecc;
              }
              iVar27 = iVar27 + 0x20;
              lVar25 = lVar25 + 1;
            } while (iVar17 - lVar23 != lVar25);
            uVar21 = 0xffffffff;
            iVar10 = iVar17;
          }
          uVar29 = (ulonglong)(iVar10 + 1);
          param_1 = local_150;
          uVar16 = local_c0;
        }
        else {
LAB_140d6eecc:
          uVar33 = (ulonglong)(-uVar16 & uVar16);
          uVar32 = uVar33 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar32 != 0) {
            for (; uVar32 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          uVar16 = (iVar27 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
          if ((int)local_c0 <= (int)uVar16) {
            uVar16 = local_c0;
          }
        }
      } while (uVar16 != (uint)local_140);
    }
LAB_140d6eefe:
    puVar12 = (uint *)(param_1 + 0x18);
    local_118 = (longlong *)0x0;
    uStack_110 = (longlong **)0x0;
    uVar16 = *(uint *)(param_1 + 0x30);
    uVar29 = (ulonglong)uVar16;
    local_138 = puVar12;
    if (uVar16 == 0) {
      uVar33 = 1;
      uVar32 = 0;
      uVar21 = 0;
      iVar27 = 0;
    }
    else {
      puVar15 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar15 = puVar12;
      }
      uVar21 = *puVar15;
      if (uVar21 == 0) {
        iVar27 = uVar16 + 0x1e;
        if (-1 < (int)(uVar16 - 1)) {
          iVar27 = uVar16 - 1;
        }
        uVar32 = 0;
        uVar33 = (ulonglong)(uint)(iVar27 >> 5);
        if (iVar27 >> 5 < 1) {
          uVar33 = uVar32;
        }
        iVar27 = 0;
        do {
          if (uVar33 == uVar32) goto LAB_140d6f219;
          iVar27 = iVar27 + 0x20;
          uVar21 = puVar15[uVar32 + 1];
          uVar32 = uVar32 + 1;
        } while (uVar21 == 0);
      }
      else {
        uVar32 = 0;
        iVar27 = 0;
      }
      uVar33 = (ulonglong)(-uVar21 & uVar21);
      uVar4 = uVar33 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      uVar21 = (iVar27 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
      if ((int)uVar16 <= (int)uVar21) {
        uVar21 = uVar16;
      }
    }
    if (uVar21 != uVar16) {
      plVar19 = (longlong *)(param_1 + 8);
      uVar11 = 0xffffffff;
      local_140 = uVar29;
      local_130 = plVar19;
      do {
        pplVar1 = uStack_110;
        local_148 = CONCAT44(local_148._4_4_,uVar11);
        if (*(char *)(*plVar19 + 0x1d + (longlong)(int)uVar21 * 0x40) == '\0') {
          plVar30 = (longlong *)(*plVar19 + (longlong)(int)uVar21 * 0x40);
          if ((int)uStack_e0 != local_b4) {
            lVar23 = *plVar30;
            lVar25 = plVar30[1];
            uVar11 = (uint)((ulonglong)lVar25 >> 0x10);
            uVar24 = (uint)lVar25 & 0xffff;
            uVar21 = (uint)((ulonglong)lVar23 >> 0x10);
            uVar28 = (uint)lVar23 & 0xffff;
            uVar21 = (int)((ulonglong)lVar23 >> 0x20) + ((uint)lVar23 << 0x10 | uVar28) +
                     (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar28 >> 4);
            puVar14 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar14 = local_b0;
            }
            iVar10 = *(int *)(puVar14 +
                             (ulonglong)
                             (local_a0 - 1U &
                             ((uVar21 >> 2) +
                              ((uint)lVar25 << 0x10 | uVar24) + (int)((ulonglong)lVar25 >> 0x20) +
                              (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar24 >> 4) + uVar21 * 0x40 +
                              0x9e3779b9 ^ uVar21)) * 4);
            while (puVar12 = local_138, uVar29 = local_140, plVar19 = local_130, iVar10 != -1) {
              lVar26 = (longlong)iVar10;
              if ((local_e8[lVar26 * 8] == lVar23) && (local_e8[lVar26 * 8 + 1] == lVar25)) {
                if (((ulonglong)(local_e8 + lVar26 * 8 + 2) & 0xffffffffffffffef) != 0)
                goto LAB_140d6efc4;
                break;
              }
              iVar10 = (int)local_e8[lVar26 * 8 + 7];
            }
          }
          lVar23 = (longlong)(int)uStack_110;
          uVar16 = (int)uStack_110 + 1;
          uStack_110 = (longlong **)CONCAT44(uStack_110._4_4_,uVar16);
          if (uStack_110._4_4_ < uVar16) {
            FUN_140d6f884(&local_118,(ulonglong)pplVar1 & 0xffffffff);
            uVar29 = local_140;
          }
          uVar7 = *(undefined4 *)((longlong)plVar30 + 4);
          lVar25 = plVar30[1];
          uVar8 = *(undefined4 *)((longlong)plVar30 + 0xc);
          plVar3 = local_118 + lVar23 * 2;
          *(int *)plVar3 = (int)*plVar30;
          *(undefined4 *)((longlong)plVar3 + 4) = uVar7;
          *(int *)(plVar3 + 1) = (int)lVar25;
          *(undefined4 *)((longlong)plVar3 + 0xc) = uVar8;
          uVar16 = *(uint *)(local_150 + 0x30);
        }
LAB_140d6efc4:
        plVar30 = local_130;
        param_1 = local_150;
        uVar11 = (uint)local_148 & ~(uint)uVar33;
        puVar15 = *(uint **)(local_150 + 0x28);
        if (*(uint **)(local_150 + 0x28) == (uint *)0x0) {
          puVar15 = puVar12;
        }
        iVar10 = (int)uVar32;
        lVar23 = (longlong)iVar10;
        uVar21 = puVar15[lVar23] & uVar11;
        if (uVar21 == 0) {
          iVar31 = uVar16 + 0x1e;
          if (-1 < (int)(uVar16 - 1)) {
            iVar31 = uVar16 - 1;
          }
          iVar31 = iVar31 >> 5;
          iVar27 = iVar27 + 0x20;
          iVar17 = iVar31;
          if (iVar31 < iVar10) {
            iVar17 = iVar10;
          }
          if (iVar10 < iVar31) {
            lVar25 = 0;
            do {
              uVar21 = puVar15[lVar23 + lVar25 + 1];
              if (uVar21 != 0) {
                uVar32 = (ulonglong)(iVar10 + (int)lVar25 + 1);
                uVar11 = 0xffffffff;
                goto LAB_140d6f039;
              }
              iVar27 = iVar27 + 0x20;
              lVar25 = lVar25 + 1;
            } while (iVar17 - lVar23 != lVar25);
            uVar11 = 0xffffffff;
            iVar10 = iVar17;
          }
          uVar32 = (ulonglong)(iVar10 + 1);
          puVar12 = local_138;
          uVar29 = local_140;
          plVar19 = local_130;
          uVar21 = uVar16;
        }
        else {
LAB_140d6f039:
          uVar33 = (ulonglong)(-uVar21 & uVar21);
          uVar4 = uVar33 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          uVar21 = (iVar27 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
          if ((int)uVar16 <= (int)uVar21) {
            uVar21 = uVar16;
          }
        }
      } while (uVar21 != (uint)uVar29);
      if ((longlong)(int)uStack_110 != 0) {
        lVar23 = (longlong)(int)uStack_110 << 4;
        do {
          FUN_140498fec(plVar30);
          lVar23 = lVar23 + -0x10;
        } while (lVar23 != 0);
        uVar16 = *(uint *)(param_1 + 0x30);
      }
    }
LAB_140d6f219:
    if (uVar16 == 0) {
      uVar33 = 1;
      uVar29 = 0;
      uVar21 = 0;
      iVar27 = 0;
    }
    else {
      puVar15 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar15 = puVar12;
      }
      uVar21 = *puVar15;
      if (uVar21 == 0) {
        iVar27 = uVar16 + 0x1e;
        if (-1 < (int)(uVar16 - 1)) {
          iVar27 = uVar16 - 1;
        }
        uVar29 = 0;
        uVar33 = (ulonglong)(uint)(iVar27 >> 5);
        if (iVar27 >> 5 < 1) {
          uVar33 = uVar29;
        }
        iVar27 = 0;
        do {
          if (uVar33 == uVar29) goto LAB_140d6f3f5;
          iVar27 = iVar27 + 0x20;
          uVar21 = puVar15[uVar29 + 1];
          uVar29 = uVar29 + 1;
        } while (uVar21 == 0);
      }
      else {
        uVar29 = 0;
        iVar27 = 0;
      }
      uVar33 = (ulonglong)(-uVar21 & uVar21);
      uVar32 = uVar33 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      uVar21 = (iVar27 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
      if ((int)uVar16 <= (int)uVar21) {
        uVar21 = uVar16;
      }
    }
    if (uVar21 != uVar16) {
      local_148 = param_1 + 0x90;
      uVar11 = 0xffffffff;
      do {
        if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
          lVar23 = *(longlong *)(*(longlong *)(param_1 + 8) + 8 + (longlong)(int)uVar21 * 0x40);
          uVar24 = (uint)((ulonglong)lVar23 >> 0x10);
          uVar28 = (uint)lVar23 & 0xffff;
          lVar25 = *(longlong *)(param_1 + 0x98);
          if (*(longlong *)(param_1 + 0x98) == 0) {
            lVar25 = local_148;
          }
          iVar10 = *(int *)(lVar25 + (ulonglong)
                                     (*(int *)(param_1 + 0xa0) - 1U &
                                     (int)((ulonglong)lVar23 >> 0x20) +
                                     ((uint)lVar23 << 0x10 | uVar28) +
                                     (uVar24 << 0x13 | uVar24 & 0xffff) + (uVar28 >> 4)) * 4);
          if (iVar10 != -1) {
            do {
              plVar19 = (longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar10 * 0x14);
              if (*plVar19 == lVar23) goto LAB_140d6f342;
              iVar10 = *(int *)((longlong)plVar19 + 0xc);
            } while (iVar10 != -1);
          }
        }
        plVar19 = (longlong *)0x0;
LAB_140d6f342:
        lVar23 = *(longlong *)(param_1 + 8) + (longlong)(int)uVar21 * 0x40;
        iVar10 = (int)plVar19[1];
        iVar31 = (**(code **)(**(longlong **)(lVar23 + 0x30) + 0x60))();
        if ((iVar10 != iVar31) &&
           (iVar31 = (**(code **)(**(longlong **)(lVar23 + 0x30) + 0x60))(), iVar31 < iVar10)) {
          FUN_1448c236a(lVar23 + 0x10);
          (**(code **)**(undefined8 **)(lVar23 + 0x30))(*(undefined8 **)(lVar23 + 0x30),iVar10);
        }
        uVar11 = uVar11 & ~(uint)uVar33;
        puVar12 = *(uint **)(param_1 + 0x28);
        if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
          puVar12 = local_138;
        }
        uVar24 = *(uint *)(param_1 + 0x30);
        iVar10 = (int)uVar29;
        lVar23 = (longlong)iVar10;
        uVar21 = puVar12[lVar23] & uVar11;
        if (uVar21 == 0) {
          iVar31 = uVar24 + 0x1e;
          if (-1 < (int)(uVar24 - 1)) {
            iVar31 = uVar24 - 1;
          }
          iVar31 = iVar31 >> 5;
          iVar27 = iVar27 + 0x20;
          iVar17 = iVar31;
          if (iVar31 < iVar10) {
            iVar17 = iVar10;
          }
          if (iVar10 < iVar31) {
            lVar25 = 0;
            do {
              uVar21 = puVar12[lVar23 + lVar25 + 1];
              if (uVar21 != 0) {
                uVar29 = (ulonglong)(iVar10 + (int)lVar25 + 1);
                uVar11 = 0xffffffff;
                goto LAB_140d6f3c6;
              }
              iVar27 = iVar27 + 0x20;
              lVar25 = lVar25 + 1;
            } while (iVar17 - lVar23 != lVar25);
            uVar11 = 0xffffffff;
            iVar10 = iVar17;
          }
          uVar29 = (ulonglong)(iVar10 + 1);
          param_1 = local_150;
          uVar21 = uVar24;
        }
        else {
LAB_140d6f3c6:
          uVar33 = (ulonglong)(-uVar21 & uVar21);
          uVar32 = uVar33 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar32 != 0) {
            for (; uVar32 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          uVar21 = (iVar27 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
          if ((int)uVar24 <= (int)uVar21) {
            uVar21 = uVar24;
          }
        }
      } while (uVar21 != uVar16);
    }
LAB_140d6f3f5:
    local_128 = (longlong *)0x0;
    uStack_120 = 0;
    if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
      FUN_140d70cda(param_1 + 0x58,&local_128);
      plVar19 = local_128;
      lVar23 = (longlong)(int)uStack_120;
      if (lVar23 != 0) {
        lVar25 = 0;
        uVar20 = DAT_14c997030;
        do {
          uVar6 = *(undefined8 *)((longlong)plVar19 + lVar25);
          cVar9 = FUN_140498cd4(param_1,uVar20,uVar6);
          if (cVar9 != '\0') {
            FUN_140498ea8(param_1,uVar20,uVar6);
            uVar20 = DAT_14c997030;
          }
          lVar25 = lVar25 + 8;
        } while (lVar23 * 8 != lVar25);
      }
      if (local_128 != (longlong *)0x0) {
        FUN_1400020a8(local_128);
      }
    }
    if (local_118 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_a0 = 0;
    if (local_a8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14054b3a6(&local_e8);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14054b36e(local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d6f884 FUN_140d6f884 body=262 status=ok
// SIG undefined FUN_140d6f884(void)

void FUN_140d6f884(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140d6f98c FUN_140d6f98c body=439 status=ok
// SIG undefined FUN_140d6f98c(void)

undefined4 * FUN_140d6f98c(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406cd3e0(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  lVar12 = param_3[1];
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *(undefined4 *)local_40 = *puVar1;
  *(undefined4 *)((longlong)local_40 + 4) = uVar4;
  *(undefined4 *)(local_40 + 1) = uVar5;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar6;
  FUN_1406cd26a(local_40 + 2,lVar12);
  *(undefined4 *)(local_40 + 7) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar3 = local_40[1];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar13 = (uint)uVar2 & 0xffff;
  uVar13 = ((uint)uVar2 << 0x10 | uVar13) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar13 >> 4);
  uVar10 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar9 = (uint)uVar3 & 0xffff;
  uVar13 = (uVar13 >> 2) +
           ((uint)uVar3 << 0x10 | uVar9) + (int)((ulonglong)uVar3 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar9 >> 4) + uVar13 * 0x40 + 0x9e3779b9 ^ uVar13;
  local_58 = 0;
  cVar7 = FUN_1406cd30e(param_1,uVar13,local_40);
  if (cVar7 == '\0') {
    uVar10 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar10 < 4) {
      iVar11 = 1;
    }
    else {
      uVar8 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar13 = *(int *)(param_1 + 0x48) - 1U & uVar13;
      *(uint *)((longlong)local_40 + 0x3c) = uVar13;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 7) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar13) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar13) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_1406ce504(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d6fb44 FUN_140d6fb44 body=801 status=ok
// SIG undefined FUN_140d6fb44(void)

longlong * FUN_140d6fb44(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x14,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x14);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar7 = local_70._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_74 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar3 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar3) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_74,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_74);
      }
    }
    else {
      local_74 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar3;
    }
    local_68 = param_2 + 2;
    local_70 = (undefined8 *)&DAT_100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_98 = local_70;
    local_90 = local_68;
    local_80 = local_58;
    local_7c = local_54;
    local_88 = local_60;
    uVar6 = local_88;
    local_88._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_a0 = param_2;
    if (local_88._4_4_ < (int)local_68[3]) {
      iVar9 = local_88._4_4_;
      local_88 = uVar6;
      do {
        lVar5 = *local_a0;
        (**(code **)(*param_1 + 0x160))(param_1,lVar5 + (longlong)iVar9 * 0x14);
        FUN_140d6fe66(param_1,lVar5 + (longlong)iVar9 * 0x14 + 8);
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar9 = local_88._4_4_;
        uVar6 = local_88;
      } while (local_88._4_4_ < (int)local_90[3]);
    }
  }
  else {
    local_70 = (undefined8 *)((ulonglong)local_70._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar1 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_70,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_70);
      }
    }
    else {
      local_70 = (undefined8 *)CONCAT44(uVar7,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar1;
    }
    FUN_14054b3de(param_2,(ulonglong)local_70 & 0xffffffff);
    uVar6 = local_88;
    if (0 < (int)local_70) {
      iVar9 = 0;
      do {
        FUN_140b2061c(param_2,&local_a0);
        *local_98 = 0;
        local_98[1] = 0xffffffff00000000;
        puVar2 = local_98 + 1;
        (**(code **)(*param_1 + 0x160))(param_1);
        FUN_140d6fe66(param_1,puVar2);
        iVar9 = iVar9 + 1;
        uVar6 = local_88;
      } while (iVar9 < (int)local_70);
    }
  }
  local_88 = uVar6;
  if (((*(byte *)(param_1 + 5) & 1) != 0) ||
     (((*(byte *)(param_1 + 5) & 4) == 0 && ((*(byte *)((longlong)param_1 + 0x2b) & 4) != 0)))) {
    if (param_2[8] != 0) {
      FUN_1446efa72(param_2 + 8,0,0,4);
    }
    *(undefined4 *)(param_2 + 9) = 0;
    uVar7 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if (uVar7 < 4) {
      iVar9 = 1;
    }
    else {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar5 & 0x1f);
    }
    if ((0 < (int)uVar7) && (0 < iVar9)) {
      *(int *)(param_2 + 9) = iVar9;
      FUN_140b207f8(param_2);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140d6fe66 FUN_140d6fe66 body=210 status=ok
// SIG undefined FUN_140d6fe66(void)

longlong * FUN_140d6fe66(longlong *param_1,undefined4 *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 4;
  puVar1 = (ulonglong *)param_1[1];
  puVar2 = (undefined4 *)*puVar1 + 1;
  if ((undefined4 *)puVar1[1] < puVar2) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar1;
    *puVar1 = (ulonglong)puVar2;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d6ff3a FUN_140d6ff3a body=865 status=ok
// SIG undefined FUN_140d6ff3a(void)

longlong * FUN_140d6ff3a(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  ulonglong *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar8 = local_70._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_74 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar5 = (ulonglong *)param_1[1];
    piVar4 = (int *)*puVar5 + 1;
    if ((int *)puVar5[1] < piVar4) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_74,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_74);
      }
    }
    else {
      local_74 = *(int *)*puVar5;
      *puVar5 = (ulonglong)piVar4;
    }
    local_68 = param_2 + 2;
    local_70 = (undefined8 *)&DAT_100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_98 = local_70;
    local_90 = local_68;
    local_80 = local_58;
    local_7c = local_54;
    local_88 = local_60;
    uVar7 = local_88;
    local_88._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_a0 = param_2;
    if (local_88._4_4_ < (int)local_68[3]) {
      iVar10 = local_88._4_4_;
      local_88 = uVar7;
      do {
        lVar6 = *local_a0;
        lVar11 = (longlong)iVar10 * 0x40;
        (**(code **)(*param_1 + 0x160))(param_1,lVar6 + lVar11);
        (**(code **)(*param_1 + 0x160))(param_1,lVar6 + lVar11 + 8);
        FUN_140d7029c(lVar6 + lVar11 + 0x10,param_1);
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar10 = local_88._4_4_;
        uVar7 = local_88;
      } while (local_88._4_4_ < (int)local_90[3]);
    }
  }
  else {
    local_70 = (undefined8 *)((ulonglong)local_70._4_4_ << 0x20);
    puVar5 = (ulonglong *)param_1[1];
    puVar1 = (undefined4 *)*puVar5 + 1;
    if ((undefined4 *)puVar5[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_70,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_70);
      }
    }
    else {
      local_70 = (undefined8 *)CONCAT44(uVar8,*(undefined4 *)*puVar5);
      *puVar5 = (ulonglong)puVar1;
    }
    FUN_14054b458(param_2,(ulonglong)local_70 & 0xffffffff);
    uVar7 = local_88;
    if (0 < (int)local_70) {
      iVar10 = 0;
      do {
        FUN_1406cd3e0(param_2,&local_a0);
        puVar2 = local_98 + 1;
        puVar3 = local_98 + 2;
        *(undefined8 *)((longlong)local_98 + 0x14) = 0;
        *local_98 = 0;
        local_98[1] = 0;
        *(undefined1 *)(local_98 + 2) = 0;
        *(undefined2 *)((longlong)local_98 + 0x1c) = 1;
        local_98[4] = 0;
        local_98[5] = 0;
        local_98[6] = 0;
        *(undefined4 *)(local_98 + 7) = 0xffffffff;
        (**(code **)(*param_1 + 0x160))(param_1);
        (**(code **)(*param_1 + 0x160))(param_1,puVar2);
        FUN_140d7029c(puVar3,param_1);
        iVar10 = iVar10 + 1;
        uVar7 = local_88;
      } while (iVar10 < (int)local_70);
    }
  }
  local_88 = uVar7;
  if (((*(byte *)(param_1 + 5) & 1) != 0) ||
     (((*(byte *)(param_1 + 5) & 4) == 0 && ((*(byte *)((longlong)param_1 + 0x2b) & 4) != 0)))) {
    if (param_2[8] != 0) {
      FUN_1446efa72(param_2 + 8,0,0,4);
    }
    *(undefined4 *)(param_2 + 9) = 0;
    uVar8 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if (uVar8 < 4) {
      iVar10 = 1;
    }
    else {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar6 & 0x1f);
    }
    if ((0 < (int)uVar8) && (0 < iVar10)) {
      *(int *)(param_2 + 9) = iVar10;
      FUN_1406ce504(param_2);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140d7029c FUN_140d7029c body=715 status=ok
// SIG undefined FUN_140d7029c(void)

void FUN_140d7029c(byte *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_68 [44];
  uint local_3c;
  int local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 4;
  puVar2 = (ulonglong *)param_2[1];
  piVar3 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar3) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_38,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_38);
    }
  }
  else {
    local_38 = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar3;
  }
  local_3c = (uint)*param_1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_3c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  *param_1 = (byte)local_3c;
  if (local_38 < 4) {
    puVar2 = (ulonglong *)param_2[1];
    if (puVar2[1] < *puVar2 + 4) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_34);
      }
    }
    else {
      *puVar2 = *puVar2 + 4;
    }
    if (1 < local_38) goto LAB_140d70348;
  }
  else {
LAB_140d70348:
    (**(code **)(*param_2 + 0x160))(param_2,param_1 + 4);
    piVar3 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
      local_34 = (uint)param_1[0xc];
      (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      if (1 < local_34) {
        FUN_14572541c(param_2);
      }
      param_1[0xc] = local_34 != 0;
    }
    else {
      param_1[0xc] = *piVar3 != 0;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) goto LAB_140d7041f;
  plVar6 = (longlong *)FUN_140d70568(*param_1);
  *(longlong **)(param_1 + 0x20) = plVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149f6ac80;
  plVar7[2] = (longlong)plVar6;
  *(longlong **)(param_1 + 0x10) = plVar6;
  plVar4 = *(longlong **)(param_1 + 0x18);
  if (plVar7 == plVar4) {
    if (plVar7 == (longlong *)0x0) goto LAB_140d7041f;
    *(undefined4 *)(plVar7 + 1) = 0;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x48))(plVar6,1);
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      iVar5 = *piVar3;
      goto joined_r0x000140d7053f;
    }
    *(undefined4 *)((longlong)plVar7 + 0xc) = 0;
  }
  else {
    *(longlong **)(param_1 + 0x18) = plVar7;
    if (plVar4 == (longlong *)0x0) goto LAB_140d7041f;
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    if ((int)*plVar7 != 0) goto LAB_140d7041f;
    (**(code **)*plVar4)(plVar4);
    piVar3 = (int *)((longlong)plVar4 + 0xc);
    *piVar3 = *piVar3 + -1;
    iVar5 = *piVar3;
    plVar7 = plVar4;
joined_r0x000140d7053f:
    if (iVar5 != 0) goto LAB_140d7041f;
  }
  (**(code **)(*plVar7 + 0x10))(plVar7);
LAB_140d7041f:
  iVar5 = FUN_1448332aa(param_2,&DAT_149e3cc78);
  if ((0x4f < iVar5) || (param_1[0xc] == 1)) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x70))(*(longlong **)(param_1 + 0x20),param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d70568 FUN_140d70568 body=1906 status=ok
// SIG undefined FUN_140d70568(void)

undefined8 * FUN_140d70568(undefined1 param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  
  switch(param_1) {
  case 1:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f45b50;
    break;
  case 2:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f62da0;
    break;
  case 3:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f637e0;
    break;
  case 4:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f45c70;
    break;
  case 5:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_FUN_149f62c60;
    break;
  case 6:
    puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x80;
    ppuVar2 = &PTR_FUN_149f62ee0;
    break;
  case 7:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f6b2c0;
    break;
  case 8:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f4b690;
    break;
  case 9:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_FUN_149f63160;
    break;
  case 10:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f68830;
    break;
  case 0xb:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f68950;
    break;
  case 0xc:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f63900;
    break;
  case 0xd:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f63020;
    break;
  case 0xe:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f63d80;
    break;
  case 0xf:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f68a70;
    break;
  case 0x10:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_FUN_149f4b600;
    break;
  case 0x11:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f68b90;
    break;
  case 0x12:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f68cb0;
    break;
  case 0x13:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f68dd0;
    break;
  case 0x14:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f68ef0;
    break;
  case 0x15:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f69010;
    break;
  case 0x16:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f69130;
    break;
  case 0x17:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f62880;
    break;
  case 0x18:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f69250;
    break;
  case 0x19:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f69370;
    break;
  case 0x1a:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f69490;
    break;
  case 0x1b:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f695b0;
    break;
  case 0x1c:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f69700;
    break;
  case 0x1d:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f69850;
    break;
  case 0x1e:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f69970;
    break;
  case 0x1f:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f63a20;
    break;
  case 0x20:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f69a90;
    break;
  case 0x21:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f63b40;
    break;
  case 0x22:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f69bb0;
    break;
  case 0x23:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f62070;
    break;
  case 0x24:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f69cd0;
    break;
  case 0x25:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f62190;
    break;
  case 0x26:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f622b0;
    break;
  case 0x27:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f63c60;
    break;
  case 0x28:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f69df0;
    break;
  case 0x29:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f69f10;
    break;
  case 0x2a:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f6b1a0;
    break;
  case 0x2b:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f64ab0;
    break;
  case 0x2c:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f62610;
    break;
  case 0x2d:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f6a030;
    break;
  case 0x2e:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f6a150;
    break;
  case 0x2f:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f6a270;
    break;
  case 0x30:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f623d0;
    break;
  case 0x31:
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ppuVar2 = &PTR_LAB_149f624f0;
    break;
  default:
    return (undefined8 *)0x0;
  }
  *puVar1 = ppuVar2;
  return puVar1;
}



// FUNCTION 140d70cda FUN_140d70cda body=1032 status=ok
// SIG undefined FUN_140d70cda(void)

undefined4 FUN_140d70cda(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  uint *local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined4 *)(param_2 + 1) = 0;
  local_b0 = param_2;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1402191ca(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar11 != 0) {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar11);
    }
    FUN_144732142(&local_98,uVar11);
    if (uVar11 < 4) {
      iVar3 = 1;
    }
    else {
      uVar11 = (uVar11 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar3)) {
      local_50 = iVar3;
      FUN_144869b4a();
    }
  }
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (*(int *)((longlong)local_b0 + 0xc) < iVar3) {
    FUN_1402191ca();
  }
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar16 = 1;
    uVar13 = 0;
    iVar4 = 0;
    iVar12 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 2);
    }
    uVar11 = *puVar8;
    if (uVar11 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar13 = 0;
      uVar16 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar16 = uVar13;
      }
      iVar12 = 0;
      do {
        if (uVar16 == uVar13) goto LAB_140d70faa;
        iVar12 = iVar12 + 0x20;
        uVar11 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar16 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar4 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar11 = 0xffffffff;
    local_a8 = (uint *)(param_1 + 2);
    do {
      lVar15 = *param_1;
      lVar9 = (longlong)iVar4;
      if ((int)uStack_90 != local_64) {
        lVar2 = *(longlong *)(lVar15 + lVar9 * 0x14);
        uVar5 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar14 = (uint)lVar2 & 0xffff;
        puVar10 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar10 = local_60;
        }
        for (iVar4 = *(int *)(puVar10 +
                             (ulonglong)
                             (local_50 - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar14) +
                             (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar14 >> 4)) * 4); iVar4 != -1;
            iVar4 = *(int *)((longlong)iVar4 * 0x10 + local_98 + 8)) {
          if (*(longlong *)(local_98 + (longlong)iVar4 * 0x10) == lVar2) goto LAB_140d70f20;
        }
      }
      iVar3 = (int)local_b0[1];
      *(uint *)(local_b0 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)local_b0 + 0xc) < iVar3 + 1U) {
        FUN_1446f84a2(local_b0,iVar3);
      }
      *(undefined8 *)(*local_b0 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar15 + lVar9 * 0x14);
      FUN_144a13f80(&local_98,local_9c,lVar9 * 0x14 + *param_1,0);
      iVar3 = (int)param_1[5];
LAB_140d70f20:
      uVar11 = uVar11 & ~(uint)uVar16;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = local_a8;
      }
      iVar4 = (int)uVar13;
      lVar15 = (longlong)iVar4;
      uVar5 = puVar8[lVar15] & uVar11;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar9 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar5 = puVar8[lVar15 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar15 == lVar9) goto LAB_140d70faa;
        }
        uVar13 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar16 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar4 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_140d70faa:
  lVar15 = local_b0[1];
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar13 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar13 != 0) {
    FUN_14472eb64(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (int)lVar15;
}



// FUNCTION 140d710e4 FUN_140d710e4 body=103 status=ok
// SIG undefined FUN_140d710e4(void)

void FUN_140d710e4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14ac75260;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xb] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xffffffff;
  return;
}



// FUNCTION 140d7114c FUN_140d7114c body=593 status=ok
// SIG undefined FUN_140d7114c(void)

void FUN_140d7114c(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 uVar9;
  int iVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if ((lVar3 != 0) && (lVar3 = FUN_140d7139d(lVar3,param_2), lVar3 != 0)) {
    lVar4 = FUN_144a7b4ca();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (((*(longlong *)
            (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30 &&
          (plVar5 = (longlong *)FUN_1401b2ade(lVar3), plVar5 != (longlong *)0x0)) &&
         (cVar2 = (**(code **)(*plVar5 + 0x6c8))(plVar5), cVar2 != '\0')))) &&
       (((char)plVar5[0x2f] == '\x03' && ((int)param_1[0x7c] != *(int *)((longlong)param_1 + 0x40c))
        ))) {
      plVar5 = param_1 + 0x82;
      if ((longlong *)param_1[0x83] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x83];
      }
      iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[0x84] - 1U & param_2) * 4);
      if (iVar6 != -1) {
        do {
          lVar4 = param_1[0x7b] + (longlong)iVar6 * 0x60;
          if (*(uint *)(param_1[0x7b] + (longlong)iVar6 * 0x60) == param_2) {
            if (lVar4 == 0) {
              return;
            }
            if ((longlong *)(lVar4 + 8) == (longlong *)0x0) {
              return;
            }
            FUN_140d714a4(lVar3 + 0xf90);
            iVar6 = (int)param_1[0x19];
            if (iVar6 < 1) goto LAB_140d71364;
            uVar13 = 0;
            goto LAB_140d7127f;
          }
          iVar6 = *(int *)(lVar4 + 0x58);
        } while (iVar6 != -1);
      }
    }
  }
  return;
LAB_140d7127f:
  if (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 0x3c)) {
    uVar1 = *(ulonglong *)(param_1[0x18] + uVar13 * 8);
    uVar7 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    lVar8 = *(longlong *)(lVar4 + 0x48);
    if (*(longlong *)(lVar4 + 0x48) == 0) {
      lVar8 = lVar4 + 0x40;
    }
    iVar10 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar4 + 0x50) - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4
                     );
    if (iVar10 != -1) {
      lVar8 = *(longlong *)(lVar4 + 8);
      iVar12 = iVar10;
      do {
        if (*(ulonglong *)(lVar8 + (longlong)iVar12 * 0x18) == uVar1) goto LAB_140d7130e;
        iVar12 = *(int *)(lVar8 + (longlong)iVar12 * 0x18 + 0x10);
      } while (iVar12 != -1);
    }
  }
  goto LAB_140d7134e;
  while (iVar10 = (int)puVar11[2], iVar10 != -1) {
LAB_140d7130e:
    puVar11 = (ulonglong *)(lVar8 + (longlong)iVar10 * 0x18);
    if (*puVar11 == uVar1) goto LAB_140d7132a;
  }
  puVar11 = (ulonglong *)0x0;
LAB_140d7132a:
  uVar1 = puVar11[1];
  if (uVar1 != 0) {
    if (*(char *)(uVar1 + 0x11) == '\0') {
      uVar9 = *(undefined1 *)(uVar1 + 0x12);
    }
    else {
      uVar9 = 1;
    }
    FUN_140045b56(lVar3 + 0xf90,uVar13 & 0xffffffff,CONCAT71((int7)((ulonglong)puVar11 >> 8),uVar9))
    ;
    iVar6 = (int)param_1[0x19];
  }
LAB_140d7134e:
  uVar13 = uVar13 + 1;
  if ((longlong)iVar6 <= (longlong)uVar13) {
LAB_140d71364:
    FUN_1457a1eae(lVar3);
    return;
  }
  goto LAB_140d7127f;
}



// FUNCTION 140d7139d FUN_140d7139d body=120 status=ok
// SIG undefined FUN_140d7139d(void)

undefined8 FUN_140d7139d(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [36];
  short local_24 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    lVar1 = FUN_1400f6f32();
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x68), lVar1 != 0)) {
      FUN_140d173bc(lVar1,local_24,param_2);
      if (-1 < local_24[0]) {
        uVar2 = FUN_140d71416(lVar1,local_24);
        goto LAB_140d713f3;
      }
    }
  }
  uVar2 = 0;
LAB_140d713f3:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d71416 FUN_140d71416 body=142 status=ok
// SIG undefined FUN_140d71416(void)

undefined8 FUN_140d71416(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  uVar1 = *param_2;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar5 != 0) && (*(uint *)(lVar5 + 8) == (uint)param_2[1])) {
      if (-1 < *(short *)(lVar5 + 4)) {
        do {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar5 + 2) * 8);
        } while (-1 < *(short *)(lVar5 + 4));
        if (lVar5 == 0) {
          return 0;
        }
      }
      if (*(int *)(lVar5 + 0x1c) != 0) {
        uVar2 = *(uint *)(lVar5 + 0x18);
        uVar3 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar4 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (puVar4 == (undefined8 *)0x0) {
            return 0;
          }
          if (*(int *)(puVar4 + 2) != *(int *)(lVar5 + 0x1c)) {
            return 0;
          }
          if ((*(uint *)(puVar4 + 1) & 0x10200000) != 0) {
            return 0;
          }
          uVar3 = *puVar4;
        }
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 140d714a4 FUN_140d714a4 body=83 status=ok
// SIG undefined FUN_140d714a4(void)

void FUN_140d714a4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x118)) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x110) + 0xc + lVar2) = 0;
      FUN_140705884(param_1,*(longlong *)(param_1 + 0x110) + lVar2);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x14;
    } while (lVar1 < *(int *)(param_1 + 0x118));
  }
  return;
}



// FUNCTION 140d714f8 FUN_140d714f8 body=188 status=ok
// SIG undefined FUN_140d714f8(void)

void FUN_140d714f8(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x118);
  if ((int)*(uint *)(param_1 + 0x118) < (int)*(uint *)(param_2 + 0x118)) {
    uVar1 = *(uint *)(param_2 + 0x118);
  }
  FUN_140045caa((longlong *)(param_3 + 0x110),uVar1,1);
  if (0 < (int)uVar1) {
    lVar2 = 0xc;
    uVar3 = 0;
    do {
      if ((longlong)uVar3 < (longlong)*(int *)(param_2 + 0x118) &&
          (longlong)uVar3 < (longlong)*(int *)(param_1 + 0x118)) {
        uVar4 = *(uint *)(*(longlong *)(param_2 + 0x110) + lVar2) ^
                *(uint *)(*(longlong *)(param_1 + 0x110) + lVar2);
LAB_140d71570:
        *(uint *)(*(longlong *)(param_3 + 0x110) + lVar2) = uVar4;
      }
      else {
        if ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x118)) {
          lVar5 = *(longlong *)(param_1 + 0x110);
LAB_140d7156c:
          uVar4 = *(uint *)(lVar5 + lVar2);
          goto LAB_140d71570;
        }
        if ((longlong)uVar3 < (longlong)*(int *)(param_2 + 0x118)) {
          lVar5 = *(longlong *)(param_2 + 0x110);
          goto LAB_140d7156c;
        }
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x14;
    } while (uVar1 != uVar3);
  }
  return;
}



// FUNCTION 140d715b4 FUN_140d715b4 body=180 status=ok
// SIG undefined FUN_140d715b4(void)

void FUN_140d715b4(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cbd0a90;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar6 = false;
  DAT_14cbd0a9c = DAT_14cbd0a9c + 1;
  do {
    lVar5 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cbd0a88 + lVar5) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cbd0a88 + -8 + lVar5), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1), cVar3 != '\0'))) {
      lVar5 = lVar5 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cbd0a9c = DAT_14cbd0a9c + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140d71651;
      }
    }
    uVar4 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  DAT_14cbd0a9c = DAT_14cbd0a9c + -1;
LAB_140d71651:
  FUN_14474d06a(&DAT_14cbd0a88,0);
  return;
}



// FUNCTION 140d71668 FUN_140d71668 body=243 status=ok
// SIG undefined FUN_140d71668(void)

void FUN_140d71668(longlong param_1,longlong *param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 != 0) {
    iVar3 = *(int *)(param_1 + 0x118);
    if (0 < iVar3) {
      iVar8 = 0;
      lVar6 = 0;
      local_58 = param_1;
      do {
        uVar1 = *(uint *)(*(longlong *)(param_1 + 0x110) + 0xc + lVar6 * 0x14);
        if (uVar1 != 0) {
          uVar7 = 0;
          do {
            if ((uVar1 >> (uVar7 & 0x1f) & 1) != 0) {
              local_4c = iVar8 + uVar7;
              pcVar2 = (code *)*param_2;
              plVar5 = (longlong *)param_2[2];
              if ((longlong *)param_2[2] == (longlong *)0x0) {
                plVar5 = param_2 + 4;
              }
              uVar4 = (**(code **)(*plVar5 + 8))();
              (*pcVar2)(uVar4,&local_4c);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 != 0x20);
          iVar3 = *(int *)(local_58 + 0x118);
          param_1 = local_58;
        }
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 0x20;
      } while (lVar6 < iVar3);
      if (*param_2 == 0) goto LAB_140d71734;
    }
    plVar5 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_140d71734:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d7175c FUN_140d7175c body=941 status=ok
// SIG undefined FUN_140d7175c(void)

void FUN_140d7175c(longlong *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  longlong **local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar11 = *(longlong **)(param_2 + 2);
  if (((((plVar11 == (longlong *)0x0) || (param_2[1] == 0)) || (uVar1 = *param_2, (int)uVar1 < 0))
      || ((DAT_14c9647dc <= (int)uVar1 ||
          (lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar9 == 0)))) ||
     ((*(uint *)(lVar9 + 0x10) != param_2[1] ||
      (((*(uint *)(lVar9 + 8) & 0x10200000) != 0 ||
       (lVar9 = (**(code **)(*plVar11 + 0x10))(plVar11), lVar9 == 0)))))) goto LAB_140d717c2;
  lVar4 = *(longlong *)(lVar9 + 0x148);
  local_60 = lVar4;
  uVar3 = FUN_14477b664(*(undefined8 *)(lVar9 + 0x150));
  local_58 = FUN_14477b664(uVar3);
  lVar6 = *(longlong *)(lVar9 + 0x158);
  local_50 = lVar6;
  if (local_58 == 0) {
    uVar3 = FUN_14043db3a();
    local_58 = FUN_14477b664(uVar3);
  }
  if (lVar6 == 0) {
    local_50 = 0;
    if ((((lVar4 != 0) && (local_58 != 0)) &&
        (plVar5 = *(longlong **)(local_58 + 0xb8), plVar5 != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar2 != '\0')) {
      uVar3 = (**(code **)(*plVar5 + 0x110))(plVar5);
      local_50 = FUN_144aff482(uVar3,&local_60);
      if (local_50 != 0) goto LAB_140d71849;
    }
  }
  else {
LAB_140d71849:
    plVar5 = *(longlong **)(lVar9 + 0x148);
    local_80 = plVar5;
    uVar3 = FUN_14477b664(*(undefined8 *)(lVar9 + 0x150));
    local_78 = FUN_14477b664(uVar3);
    lVar4 = *(longlong *)(lVar9 + 0x158);
    if (local_78 == 0) {
      uVar3 = FUN_14043db3a();
      local_78 = FUN_14477b664(uVar3);
    }
    if (lVar4 == 0) {
      local_70 = 0;
      lVar4 = 0;
      if ((plVar5 != (longlong *)0x0) && (local_78 != 0)) {
        plVar5 = *(longlong **)(local_78 + 0xb8);
        if ((plVar5 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar2 == '\0')) {
          lVar4 = 0;
        }
        else {
          uVar3 = (**(code **)(*plVar5 + 0x110))(plVar5);
          lVar4 = FUN_144aff482(uVar3,&local_80);
        }
      }
    }
    if (*(char *)(lVar4 + 0x19) == '\x01') {
      plVar5 = *(longlong **)(lVar9 + 0x148);
      uVar3 = FUN_14477b664(*(undefined8 *)(lVar9 + 0x150));
      FUN_14477b664(uVar3);
      local_80 = plVar5;
      FUN_1446dcdd4(&local_60,&local_80);
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = param_1 + 7;
        }
        iVar7 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & (uint)local_60) * 4);
        if (iVar7 != -1) {
          do {
            lVar9 = *param_1 + (longlong)iVar7 * 0x50;
            if (*(uint *)(*param_1 + (longlong)iVar7 * 0x50) == (uint)local_60) {
              if ((lVar9 != 0) && (lVar9 != -0x28)) {
                FUN_1407abeca(&local_80,plVar11);
                local_68 = &local_80;
                FUN_143d648c2(lVar9 + 0x38);
                if ((*(int *)(lVar9 + 0x40) == 0) &&
                   ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
                  plVar11 = param_1 + 7;
                  if ((longlong *)param_1[8] != (longlong *)0x0) {
                    plVar11 = (longlong *)param_1[8];
                  }
                  iVar7 = *(int *)((longlong)plVar11 +
                                  ((longlong)(int)param_1[9] - 1U & (longlong)(int)(uint)local_60) *
                                  4);
                  if (iVar7 != -1) {
                    lVar9 = *param_1;
                    goto LAB_140d71a7b;
                  }
                }
              }
              break;
            }
            iVar7 = *(int *)(lVar9 + 0x48);
          } while (iVar7 != -1);
        }
      }
LAB_140d71a35:
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      goto LAB_140d717c2;
    }
  }
  FUN_1407abeca(&local_60,plVar11);
  local_80 = &local_60;
  FUN_143d648c2(param_1 + 0xc);
LAB_140d717c2:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140d71a7b:
  lVar6 = (longlong)iVar7 * 0x50;
  lVar4 = lVar9 + lVar6;
  if (*(int *)(lVar9 + lVar6) != (uint)local_60) goto code_r0x000140d71a8f;
  iVar8 = *(int *)((longlong)plVar11 + (longlong)*(int *)(lVar4 + 0x4c) * 4);
  if (iVar8 == iVar7) {
    piVar10 = (int *)((longlong)plVar11 + (longlong)*(int *)(lVar4 + 0x4c) * 4);
  }
  else {
    do {
      piVar10 = (int *)(lVar9 + (longlong)iVar8 * 0x50 + 0x48);
      iVar8 = *piVar10;
    } while (iVar8 != iVar7);
  }
  *piVar10 = *(int *)(lVar4 + 0x48);
  lVar9 = *param_1;
  if (*(longlong *)(lVar9 + 0x38 + lVar6) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(lVar9 + lVar6 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_143d6484a(param_1,iVar7);
  goto LAB_140d71a35;
code_r0x000140d71a8f:
  iVar7 = *(int *)(lVar4 + 0x48);
  if (iVar7 == -1) goto LAB_140d71a35;
  goto LAB_140d71a7b;
}



// FUNCTION 140d71b12 FUN_140d71b12 body=398 status=ok
// SIG undefined FUN_140d71b12(void)

undefined8 * FUN_140d71b12(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_140d71ca0();
  param_1[0x1b] = 0x3f333333;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0x3ecccccd;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0x3c23d70a40a00000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3d4ccccd;
  *param_1 = &PTR_FUN_14b94e2f0;
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xfe;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2a] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x28] = DAT_14c8464e0;
  param_1[0x29] = uVar1;
  *(undefined4 *)(param_1 + 0x2b) = 0x3f800000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x32] = DAT_14c8464e0;
  param_1[0x33] = uVar1;
  param_1[0x34] = DAT_14c8464f0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  uVar2 = DAT_14cbe76d0;
  uVar1 = DAT_14cbe76c8;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x264) = 0x404;
  param_1[0x3f] = &DAT_14a176f00;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x27] = uVar1;
  param_1[0x3b] = uVar2;
  *(undefined4 *)(param_1 + 0x3d) = 1;
  return param_1;
}



// FUNCTION 140d71ca0 FUN_140d71ca0 body=556 status=ok
// SIG undefined FUN_140d71ca0(void)

undefined8 * FUN_140d71ca0(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b49c260;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 9) = 0x3f333333;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x7012;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  FUN_140d71ece(param_1 + 6,1,1);
  *(byte *)((longlong)param_1 + 100) = *(byte *)((longlong)param_1 + 100) & 0xfe;
  *(byte *)((longlong)param_1 + 0x44) = (*(byte *)((longlong)param_1 + 0x44) & 0xfc) + 1;
  *(byte *)((longlong)param_1 + 0x6c) = *(byte *)((longlong)param_1 + 0x6c) & 0xfe;
  uVar2 = DAT_14cb9488c;
  if ((DAT_14cb9488c == DAT_14c948034) && (uVar2 = DAT_14c948034, DAT_14cb94888 != DAT_14c948030)) {
    FUN_14011791e(&local_28,DAT_14cb94888,DAT_14cb9488c >> 0x20);
    DAT_14cb9488c = local_28;
    uVar2 = local_28;
  }
  uVar1 = DAT_14c948034;
  param_1[0xe] = uVar2;
  uVar2 = DAT_14cb948a4;
  if ((DAT_14cb948a4 == uVar1) && (uVar2 = uVar1, DAT_14cb948a0 != DAT_14c948030)) {
    FUN_14011791e(&local_28,DAT_14cb948a0,DAT_14cb948a4 >> 0x20);
    DAT_14cb948a4 = local_28;
    uVar1 = DAT_14c948034;
    uVar2 = local_28;
  }
  param_1[0xf] = uVar2;
  uVar2 = DAT_14cb948bc;
  if ((DAT_14cb948bc == uVar1) && (uVar2 = uVar1, DAT_14cb948b8 != DAT_14c948030)) {
    FUN_14011791e(&local_28,DAT_14cb948b8,DAT_14cb948bc >> 0x20);
    DAT_14cb948bc = local_28;
    uVar1 = DAT_14c948034;
    uVar2 = local_28;
  }
  param_1[0x10] = uVar2;
  uVar2 = DAT_14cb948d4;
  if ((DAT_14cb948d4 == uVar1) && (uVar2 = uVar1, DAT_14cb948d0 != DAT_14c948030)) {
    FUN_14011791e(&local_28,DAT_14cb948d0,DAT_14cb948d4 >> 0x20);
    DAT_14cb948d4 = local_28;
    uVar2 = local_28;
  }
  param_1[0x11] = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140d71ece FUN_140d71ece body=116 status=ok
// SIG undefined FUN_140d71ece(void)

void FUN_140d71ece(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140d71f62(param_1,iVar1);
    }
    FUN_140d71f43((longlong)iVar1 * 0x14 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_148a1cb18(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140d71f43 FUN_140d71f43 body=30 status=ok
// SIG undefined FUN_140d71f43(void)

void FUN_140d71f43(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &DAT_3f8000003f800000;
    param_1[1] = &DAT_3f8000003f800000;
    *(undefined4 *)(param_1 + 2) = 0x3f800000;
    param_1 = (undefined8 *)((longlong)param_1 + 0x14);
  }
  return;
}



// FUNCTION 140d71f62 FUN_140d71f62 body=370 status=ok
// SIG undefined FUN_140d71f62(void)

void FUN_140d71f62(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x14;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d71feb;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_140d71feb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x14)) {
    uVar7 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x14,4);
  return;
}



// FUNCTION 140d720d4 FUN_140d720d4 body=594 status=ok
// SIG undefined FUN_140d720d4(void)

void FUN_140d720d4(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 != 0) {
    if (DAT_14cb10130 == 0) {
      local_40 = &local_28;
      local_28 = FUN_140754f84;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_147da9a76;
      local_50 = FUN_1409f3105;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) goto LAB_140d72133;
  }
  lVar5 = 0;
LAB_140d72133:
  bVar1 = *(byte *)(lVar5 + 0x152);
  if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
    plVar6 = (longlong *)(param_1 + 0x128);
    iVar3 = FUN_140681374(plVar6,(int)((ulonglong)*param_2 >> 0x20) * 0x17 + (int)*param_2,param_2);
    if (iVar3 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x128);
      lVar4 = (longlong)iVar3 * 0x40;
      lVar7 = param_1 + 0x160;
      if (*(longlong *)(param_1 + 0x168) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x168);
      }
      lVar8 = (longlong)*(int *)(lVar5 + 0x3c + lVar4);
      iVar10 = *(int *)(lVar7 + lVar8 * 4);
      if (iVar10 == iVar3) {
        piVar9 = (int *)(lVar7 + lVar8 * 4);
      }
      else {
        do {
          piVar9 = (int *)((longlong)iVar10 * 0x40 + lVar5 + 0x38);
          iVar10 = *piVar9;
        } while (iVar10 != iVar3);
      }
      plVar2 = *(longlong **)(lVar5 + 0x30 + lVar4);
      *piVar9 = *(int *)(lVar5 + lVar4 + 0x38);
      if (*(longlong *)(*plVar6 + 0x20 + lVar4) != 0) {
        FUN_1400020a8();
      }
      FUN_140d7238c(plVar6,iVar3);
      if (plVar2 != (longlong *)0x0) {
        lVar5 = 0;
        plVar6 = plVar2;
        do {
          if ((*(uint *)(plVar6 + 1) & 0x30) != 0) goto LAB_140d721f6;
          plVar6 = (longlong *)plVar6[4];
        } while (plVar6 != (longlong *)0x0);
      }
      lVar5 = plVar2[4];
LAB_140d721f6:
      bVar1 = *(byte *)(lVar5 + 0x152);
      if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
        (**(code **)(*plVar2 + 0x2c0))(plVar2,0);
        FUN_14039914a(plVar2,0);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d7233c FUN_140d7233c body=79 status=ok
// SIG undefined FUN_140d7233c(void)

void FUN_140d7233c(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if (((*(byte *)(param_1 + 0xe8) & 1) != param_2) &&
     (*(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) & 0xfe | param_2, lVar1 = param_1,
     param_2 != 0)) {
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
      if ((*(uint *)(lVar1 + 8) & 0x30) != 0) {
        return;
      }
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_140399198(*(longlong *)(param_1 + 0x20),param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140d7238c FUN_140d7238c body=114 status=ok
// SIG undefined FUN_140d7238c(void)

void FUN_140d7238c(longlong *param_1,int param_2)

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



// FUNCTION 140d723fe FUN_140d723fe body=481 status=ok
// SIG undefined FUN_140d723fe(void)

int FUN_140d723fe(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined2 *local_88;
  undefined8 uStack_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar4 = *(undefined4 **)(param_2 + 8);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = &DAT_14c9485f0;
  }
  iVar10 = *(int *)(param_1 + 0x6d0);
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  FUN_1400b2348(puVar4,&local_78,1);
  if (0 < *(int *)(param_1 + 0x6d0)) {
    lVar11 = 0;
    local_90 = param_2;
    do {
      local_88 = (undefined2 *)0x0;
      uStack_80 = 0;
      FUN_1400b2348(lVar11 * 0x60 + *(longlong *)(param_1 + 0x6c8) + 0x28,&local_88);
      puVar3 = local_88;
      if ((int)uStack_80 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      puVar5 = &DAT_149dfb77a;
      if ((int)uStack_70 != 0) {
        puVar5 = local_78;
      }
      lVar6 = 0;
      while( true ) {
        uVar1 = *(ushort *)((longlong)puVar5 + lVar6);
        uVar8 = (uint)uVar1;
        uVar2 = *(ushort *)((longlong)puVar3 + lVar6);
        uVar7 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_140d724e2;
          }
          iVar9 = uVar8 - uVar7;
          goto LAB_140d72519;
        }
        if (uVar1 == 0) break;
LAB_140d724e2:
        lVar6 = lVar6 + 2;
      }
      iVar9 = 0;
LAB_140d72519:
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      param_2 = local_90;
      if (iVar9 < 0) {
        iVar10 = (int)lVar11;
        break;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 0x6d0));
  }
  FUN_140d725e0((longlong *)(param_1 + 0x6c8),iVar10);
  FUN_140d725e0(param_1 + 0x6b8,iVar10);
  puVar4 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 8);
  }
  FUN_1447715ec((longlong)iVar10 * 0x60 + *(longlong *)(param_1 + 0x6c8) + 0x28,puVar4);
  FUN_140d72668(param_1,param_2);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar10;
}



// FUNCTION 140d725e0 FUN_140d725e0 body=136 status=ok
// SIG undefined FUN_140d725e0(void)

void FUN_140d725e0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457a1f88(param_1,iVar1);
  }
  lVar2 = (longlong)param_2 * 0x60;
  memmove((void *)(*param_1 + lVar2 + 0x60),(void *)(*param_1 + lVar2),
          (ulonglong)(uint)(iVar1 - param_2) * 0x60);
  puVar3 = (undefined4 *)(lVar2 + *param_1);
  *puVar3 = 1;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x12) = 0;
  *(undefined8 *)(puVar3 + 1) = 0;
  *(undefined8 *)(puVar3 + 3) = 0;
  *(undefined8 *)(puVar3 + 5) = 0;
  *(undefined8 *)(puVar3 + 7) = 0;
  *(undefined8 *)(puVar3 + 9) = 0;
  *(undefined8 *)(puVar3 + 0xb) = 0;
  *(undefined8 *)(puVar3 + 0xd) = 0;
  *(undefined1 *)(puVar3 + 0x14) = 1;
  *(undefined8 *)(puVar3 + 0x16) = 0;
  return;
}



// FUNCTION 140d72668 FUN_140d72668 body=110 status=ok
// SIG undefined FUN_140d72668(void)

void FUN_140d72668(undefined8 param_1,longlong *param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 != (longlong *)0x0) {
    uVar4 = FUN_1401b2ade();
    uVar5 = FUN_1447210f0(param_1);
    uVar1 = FUN_140d726d6(param_2,uVar5,uVar4);
    cVar2 = (**(code **)(*param_2 + 0x38))(param_2);
    uVar3 = 2;
    if (cVar2 != '\0') {
      uVar3 = uVar1;
    }
    FUN_140d72784(param_1,param_2,0,1,uVar3,0);
  }
  return;
}



// FUNCTION 140d726d6 FUN_140d726d6 body=172 status=ok
// SIG undefined FUN_140d726d6(void)

byte FUN_140d726d6(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  char local_38 [4];
  undefined8 local_34;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    cVar1 = FUN_140114204(param_1 + 0x68);
    if (cVar1 != '\0') {
      local_38[0] = '\0';
      local_34 = 0;
      local_2c = 0;
      local_40 = param_3;
      lVar2 = FUN_140149a73(param_2,0);
      if (lVar2 != 0) {
        FUN_14039fc7b(param_1 + 0x68,local_38,lVar2,&local_40);
        if (local_38[0] == '\x01') {
          bVar3 = local_2c != 0;
          goto LAB_140d72711;
        }
      }
    }
  }
  bVar3 = *(byte *)(param_1 + 0x60) ^ 1;
LAB_140d72711:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d72784 FUN_140d72784 body=245 status=ok
// SIG undefined FUN_140d72784(void)

void FUN_140d72784(undefined8 param_1,undefined8 param_2,ulonglong param_3,int param_4,char param_5,
                  undefined1 param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  
  piVar3 = (int *)FUN_1409e484c();
  uVar4 = FUN_140d72879();
  iVar1 = FUN_140b0af60(uVar4,param_2);
  uVar4 = FUN_140d72879();
  iVar2 = FUN_140d72a52(uVar4,param_2,iVar1);
  if ((ulonglong)(longlong)iVar2 < param_3) {
    if (param_3 < *(ulonglong *)(piVar3 + 4)) {
      param_3 = *(ulonglong *)(piVar3 + 4);
    }
    *(ulonglong *)(piVar3 + 4) = param_3;
    param_3 = (longlong)iVar2;
  }
  *(ulonglong *)(piVar3 + 2) = param_3;
  if (iVar1 < param_4) {
    if (param_4 < piVar3[1]) {
      param_4 = piVar3[1];
    }
    piVar3[1] = param_4;
    param_4 = iVar1;
  }
  *piVar3 = param_4;
  uVar4 = FUN_140d72879();
  uVar4 = FUN_140d72a52(uVar4,param_2,*piVar3);
  *(undefined8 *)(piVar3 + 6) = uVar4;
  uVar4 = FUN_140d72879();
  uVar4 = FUN_140d72a52(uVar4,param_2,*piVar3 + 1);
  *(undefined8 *)(piVar3 + 8) = uVar4;
  if (param_5 != '\x02') {
    *(bool *)(piVar3 + 0x14) = param_5 == '\x01';
  }
  FUN_140b1bcc8(param_1,param_2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_6) & 0xffffffff);
  return;
}



// FUNCTION 140d72879 FUN_140d72879 body=471 status=ok
// SIG undefined FUN_140d72879(void)

longlong * FUN_140d72879(void)

{
  ushort uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbc4508 == (longlong *)0x0) {
    memset(&DAT_14cbc4510,0,0x1a0);
    FUN_145d00a68(&DAT_14cbc4510);
    DAT_14cbc4508 = (longlong *)&DAT_14cbc4510;
  }
  plVar3 = DAT_14cbc4508;
  plVar2 = DAT_14cbc4508 + 1;
  cVar4 = (char)DAT_14cbc4508[2];
  plVar6 = plVar2;
  if (cVar4 == '\0') {
LAB_140d728ad:
    if (*plVar6 == 0) goto LAB_140d7298a;
    plVar6 = plVar2;
    if (cVar4 == '\0') {
LAB_140d728be:
      if (*plVar6 == 0) goto LAB_140d72927;
      if ((((int)DAT_14cbc4508[3] == *(int *)(*plVar6 + 0x44)) || (DAT_14c9a1ab0 == 0)) ||
         (*plVar2 == 0)) goto LAB_140d728d2;
      uVar1 = *(ushort *)(*plVar2 + 0x28);
      if ((((short)uVar1 < 0) || (*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1)) ||
         (plVar2 = *(longlong **)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
         plVar2 == (longlong *)0x0)) goto LAB_140d728d2;
      cVar4 = (**(code **)(*plVar2 + 0x2a8))(plVar2,DAT_14cbc4508);
    }
    else {
      if (cVar4 == '\x02') {
        plVar6 = (longlong *)(*plVar2 + 0x30);
        goto LAB_140d728be;
      }
LAB_140d72927:
      if ((DAT_14c9a1ab0 == 0) || (*plVar2 == 0)) goto LAB_140d728d2;
      uVar1 = *(ushort *)(*plVar2 + 0x28);
      if (((short)uVar1 < 0) ||
         ((*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1 ||
          (plVar2 = *(longlong **)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
          plVar2 == (longlong *)0x0)))) goto LAB_140d728d2;
      cVar4 = (**(code **)(*plVar2 + 0x2a0))(plVar2,DAT_14cbc4508);
    }
    if (cVar4 == '\0') goto LAB_140d728d2;
  }
  else {
    if (cVar4 == '\x02') {
      plVar6 = (longlong *)(*plVar2 + 0x30);
      goto LAB_140d728ad;
    }
LAB_140d7298a:
    lVar5 = FUN_140162146();
    if (lVar5 == 0) goto LAB_140d728d2;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_experience",0);
    FUN_140024ada(&local_48,plVar3);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar3 + 0x20))(plVar3);
LAB_140d728d2:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 140d72a52 FUN_140d72a52 body=335 status=ok
// SIG undefined FUN_140d72a52(void)

undefined8 FUN_140d72a52(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(param_2 + 0x50);
  if (lVar5 == 0) {
    uVar4 = FUN_145d10d9a();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_2 + 0x50) = lVar5;
  }
  plVar1 = (longlong *)(param_2 + 0x48);
  lVar6 = *(longlong *)(param_2 + 0x58);
  if (lVar6 == 0) {
    if (lVar5 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_2 + 0x58) = 0;
      return 0;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_2 + 0x58) = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
    lVar5 = *(longlong *)(param_2 + 0x50);
  }
  if (lVar5 == 0) {
    uVar4 = FUN_145d10d9a(lVar6);
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_2 + 0x50) = lVar5;
    lVar6 = *(longlong *)(param_2 + 0x58);
    if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar2 + 0x108))(), cVar3 == '\0'))
      {
        lVar6 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
      }
      *(longlong *)(param_2 + 0x58) = lVar6;
    }
  }
  uVar4 = FUN_140bed6b6(lVar6,param_3);
  return uVar4;
}



// FUNCTION 140d72ba2 FUN_140d72ba2 body=42 status=ok
// SIG undefined FUN_140d72ba2(void)

undefined8 FUN_140d72ba2(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (((byte *)*param_2 == (byte *)0x0) || ((*(byte *)*param_2 & 3) != 1)) {
    uVar1 = 0;
  }
  else {
    FUN_140d72bcc(param_3,param_2,0);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 140d72bcc FUN_140d72bcc body=482 status=ok
// SIG undefined FUN_140d72bcc(void)

void FUN_140d72bcc(undefined4 *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar8 = (undefined4 *)&DAT_14c9a77a0;
  if (param_3 != (undefined4 *)0x0) {
    puVar8 = param_3;
  }
  if ((*(longlong *)(param_1 + 0xc) != *(longlong *)(puVar8 + 0xc)) || (param_1[0xe] != puVar8[0xe])
     ) {
    *(longlong *)(param_1 + 0xc) = *(longlong *)(puVar8 + 0xc);
    param_1[0xe] = puVar8[0xe];
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  lVar1 = *(longlong *)(puVar8 + 2);
  if (*(longlong *)(param_1 + 2) != lVar1) {
    *(undefined8 *)(param_1 + 6) = 0;
  }
  *(longlong *)(param_1 + 2) = lVar1;
  if (*(longlong *)(param_1 + 4) != *(longlong *)(puVar8 + 4)) {
    *(undefined8 *)(param_1 + 6) = 0;
  }
  uVar5 = FUN_14477b664();
  uVar5 = FUN_14477b664(uVar5);
  *(undefined8 *)(param_1 + 4) = uVar5;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(puVar8 + 6);
  uVar9 = puVar8[9];
  uVar3 = puVar8[10];
  uVar4 = puVar8[0xb];
  param_1[8] = puVar8[8];
  param_1[9] = uVar9;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  pbVar2 = (byte *)*param_2;
  if (pbVar2 == (byte *)0x0) {
    uVar9 = *puVar8;
  }
  else {
    if ((*pbVar2 & 3) == 3) {
      uVar5 = FUN_1446e60f4(pbVar2,&DAT_14c9a65a0);
      uVar9 = FUN_140b963dc(uVar5,*puVar8);
      *param_1 = uVar9;
      puVar7 = &DAT_14c9a1308;
      puVar6 = &DAT_14c9a1308;
      if (*param_2 != 0) {
        puVar6 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14c9a65b0);
      }
      uVar9 = FUN_140b963dc(puVar6,puVar8[0x12]);
      param_1[0x12] = uVar9;
      puVar6 = &DAT_14c9a1308;
      if (*param_2 != 0) {
        puVar6 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14c9a65a8);
      }
      FUN_1457a253a(puVar6,param_1 + 0xc);
      uVar5 = FUN_140cdfcd0();
      FUN_1446f470e(local_38,L"DataTableValue",1);
      if (*param_2 != 0) {
        puVar7 = (undefined8 *)FUN_1446e60f4(*param_2,local_38);
      }
      FUN_1446e7478(puVar7,param_1 + 2,uVar5,0);
      goto LAB_140d72c7c;
    }
    uVar9 = *puVar8;
    if ((*pbVar2 & 3) == 1) {
      uVar9 = FUN_140b963dc(param_2);
      *param_1 = uVar9;
      goto LAB_140d72c7c;
    }
  }
  *param_1 = uVar9;
  param_1[0x12] = puVar8[0x12];
LAB_140d72c7c:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d72db8 FUN_140d72db8 body=286 status=ok
// SIG undefined FUN_140d72db8(void)

undefined8 FUN_140d72db8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14a1c8bf8);
  iVar2 = FUN_1448332aa(param_2,&DAT_14a1c8bf8);
  if ((iVar2 < 0) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
    uVar3 = FUN_1462ad622();
    uVar4 = FUN_1462ad622();
    local_38 = 0;
    uStack_30 = 0;
    FUN_14496b17c(uVar3,param_2,param_1,uVar4);
    uVar3 = 1;
  }
  else {
    (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x38);
    if (0 < iVar2) {
      FUN_14021219d(param_2,param_1 + 0x40);
      piVar1 = *(int **)param_2[1];
      if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
        local_24 = (uint)*(byte *)(param_1 + 0x50);
        (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
        if (1 < local_24) {
          FUN_14572541c(param_2);
        }
        *(bool *)(param_1 + 0x50) = local_24 != 0;
      }
      else {
        *(bool *)(param_1 + 0x50) = *piVar1 != 0;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
    }
    uVar3 = FUN_14009d19e(param_1,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d72ee6 FUN_140d72ee6 body=40 status=ok
// SIG undefined FUN_140d72ee6(void)

undefined8 FUN_140d72ee6(undefined8 param_1,int param_2)

{
  FUN_140d72f0e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d72f0e FUN_140d72f0e body=221 status=ok
// SIG undefined FUN_140d72f0e(void)

void FUN_140d72f0e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b94e2c0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_140d7302c(param_1 + 0x32);
  FUN_140d72feb(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_140d72feb(param_1[0x2c],*(undefined4 *)(param_1 + 0x2d));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b49d1f0;
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d72feb FUN_140d72feb body=65 status=ok
// SIG undefined FUN_140d72feb(void)

void FUN_140d72feb(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x48);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-5] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d7302c FUN_140d7302c body=55 status=ok
// SIG undefined FUN_140d7302c(void)

void FUN_140d7302c(longlong *param_1)

{
  FUN_140d73064(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d73064 FUN_140d73064 body=543 status=ok
// SIG undefined FUN_140d73064(void)

void FUN_140d73064(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar14 = 0;
    uVar15 = 1;
    iVar10 = 0;
    iVar8 = 0;
  }
  else {
    puVar4 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar4 = puVar1;
    }
    uVar13 = *puVar4;
    if (uVar13 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar9 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar9 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar9 == uVar14) goto LAB_140d73157;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar4[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar9 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar8 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar8) {
      iVar8 = iVar2;
    }
  }
  if (iVar8 < iVar2) {
    uVar13 = 0xffffffff;
    bVar3 = DAT_14cb26569;
    do {
      lVar12 = *(longlong *)(*param_1 + 0x40 + (longlong)iVar8 * 0x50);
      if ((lVar12 != 0) && ((bVar3 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(lVar12 + 0x50));
        iVar2 = (int)param_1[5];
        bVar3 = DAT_14cb26569;
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar4 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar4 = puVar1;
      }
      iVar8 = (int)uVar14;
      lVar12 = (longlong)iVar8;
      uVar5 = puVar4[lVar12] & uVar13;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar8) {
          iVar7 = iVar8;
        }
        if (iVar6 <= iVar8) break;
        lVar11 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar4[lVar12 + lVar11 + 1];
          if (uVar5 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar7 - lVar12 == lVar11) goto LAB_140d73157;
        }
        uVar14 = (ulonglong)(iVar8 + (int)lVar11 + 1);
        uVar13 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar5 & uVar5);
      uVar9 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar8 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar2);
  }
LAB_140d73157:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140e9549c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar5 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar5 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar5;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140d73284 FUN_140d73284 body=529 status=ok
// SIG undefined FUN_140d73284(void)

void FUN_140d73284(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *(undefined4 *)(param_1 + 0x24);
  uStack_74 = *(undefined4 *)(param_1 + 0x28);
  uStack_70 = *(undefined4 *)(param_1 + 0x2c);
  uStack_6c = *(undefined4 *)(param_1 + 0x30);
  FUN_1407e4e88();
  local_60 = DAT_14cb8a448;
  local_5c = local_78;
  uStack_58 = uStack_74;
  uStack_54 = uStack_70;
  uStack_50 = uStack_6c;
  local_4c = 0;
  lVar4 = FUN_140d73496(param_2);
  if (lVar4 != 0) {
    iVar2 = *(int *)(lVar4 + 0x150);
    lVar13 = (longlong)iVar2;
    if (lVar13 == 0) {
      iVar6 = 0;
    }
    else {
      plVar8 = *(longlong **)(lVar4 + 0x148);
      iVar6 = 0;
      bVar9 = *plVar8 == param_1;
      iVar10 = 0;
      do {
        lVar5 = (longlong)iVar10;
        iVar11 = iVar10;
        lVar7 = lVar5;
        iVar3 = iVar10 + 1;
        if (iVar10 + 1 < iVar2) {
          iVar3 = iVar2;
        }
        do {
          lVar7 = lVar7 + 1;
          iVar12 = iVar3;
          if (lVar13 <= lVar7) break;
          iVar11 = iVar11 + 1;
          iVar12 = iVar11;
          local_88 = param_2;
        } while (bVar9 == (plVar8[lVar7] == param_1));
        if (bVar9 == false) {
          local_88 = param_2;
          if (iVar6 != iVar10) {
            local_80 = plVar8;
            memmove(plVar8 + iVar6,plVar8 + lVar5,(longlong)(iVar12 - iVar10) << 3);
            plVar8 = local_80;
          }
          iVar6 = iVar6 + (iVar12 - iVar10);
          param_2 = local_88;
        }
        bVar9 = (bool)(bVar9 ^ 1);
        iVar10 = iVar12;
      } while (lVar7 < lVar13);
      *(int *)(lVar4 + 0x150) = iVar6;
    }
    if (((*(char *)(param_1 + 0x10) == '\x01') && ((*(byte *)(param_1 + 0x20) & 1) != 0)) &&
       ((longlong)*(int *)(lVar4 + 0x68) != 0)) {
      lVar13 = (longlong)*(int *)(lVar4 + 0x68) * 0x38;
      lVar7 = *(longlong *)(lVar4 + 0x60) + 0xc;
      do {
        lVar5 = FUN_14479d2ce(lVar7);
        if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0xa8) != 0)) &&
           ((*(byte *)(*(longlong *)(lVar5 + 0xa8) + 0x65) & 2) == 0)) {
          FUN_1410f721e(param_1,lVar5);
        }
        lVar7 = lVar7 + 0x38;
        lVar13 = lVar13 + -0x38;
      } while (lVar13 != 0);
      iVar6 = *(int *)(lVar4 + 0x150);
    }
    if (iVar6 == 0) {
      pbVar1 = (byte *)(lVar4 + 9);
      *pbVar1 = *pbVar1 & 0xfd;
      if (*pbVar1 == 0) {
        local_78 = *(undefined4 *)(param_1 + 0x24);
        uStack_74 = *(undefined4 *)(param_1 + 0x28);
        uStack_70 = *(undefined4 *)(param_1 + 0x2c);
        uStack_6c = *(undefined4 *)(param_1 + 0x30);
        FUN_1407e4e88();
        local_60 = DAT_14cb8a448;
        local_5c = local_78;
        uStack_58 = uStack_74;
        uStack_54 = uStack_70;
        uStack_50 = uStack_6c;
        local_4c = 0;
        FUN_140dda022(*(undefined8 *)(param_2 + 0x10));
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d73496 FUN_140d73496 body=341 status=ok
// SIG undefined FUN_140d73496(void)

undefined8 FUN_140d73496(longlong param_1,uint *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  uVar7 = *param_2;
  uVar3 = FUN_1447addd0(param_2 + 1,0x10);
  uVar8 = uVar3 >> 0xd ^ param_2[5] - uVar3;
  uVar9 = uVar8 << 8 ^ (-0x61c88647 - uVar8) - uVar3;
  uVar10 = uVar9 >> 0xd ^ (uVar3 - uVar8) - uVar9;
  uVar3 = uVar10 >> 0xc ^ (uVar8 - uVar9) - uVar10;
  uVar8 = uVar3 << 0x10 ^ (uVar9 - uVar10) - uVar3;
  uVar9 = uVar8 >> 5 ^ (uVar10 - uVar3) - uVar8;
  uVar10 = uVar9 >> 3 ^ (uVar3 - uVar8) - uVar9;
  uVar3 = uVar10 << 10 ^ (uVar8 - uVar9) - uVar10;
  uVar8 = uVar7 >> 0xd ^ (uVar3 >> 0xf ^ uVar9 - (uVar10 + uVar3)) - uVar7;
  uVar3 = uVar8 << 8 ^ (-0x61c88647 - uVar7) - uVar8;
  uVar7 = uVar3 >> 0xd ^ (uVar7 - uVar8) - uVar3;
  uVar8 = uVar7 >> 0xc ^ (uVar8 - uVar3) - uVar7;
  uVar9 = uVar8 << 0x10 ^ (uVar3 - uVar7) - uVar8;
  uVar7 = uVar9 >> 5 ^ (uVar7 - uVar8) - uVar9;
  uVar3 = uVar7 >> 3 ^ (uVar8 - uVar9) - uVar7;
  uVar8 = uVar3 << 10 ^ (uVar9 - uVar7) - uVar3;
  iVar4 = FUN_1407e4ee4(plVar2,uVar8 >> 0xf ^ uVar7 - (uVar3 + uVar8),param_2);
  if ((iVar4 == -1) ||
     (lVar1 = *plVar2 + (longlong)iVar4 * 0x28, puVar5 = (undefined8 *)(lVar1 + 0x18),
     puVar5 == (undefined8 *)0x0 || lVar1 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar5;
  }
  return uVar6;
}



// FUNCTION 140d735ec FUN_140d735ec body=84 status=ok
// SIG undefined FUN_140d735ec(void)

void FUN_140d735ec(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 unaff_RBX;
  
  cVar1 = *(char *)((longlong)param_1 + 0x291);
  if (cVar1 != '\x03') {
    uVar2 = *(undefined1 *)((longlong)param_1 + 0x292);
    *(undefined2 *)((longlong)param_1 + 0x291) = 3;
    cVar3 = (**(code **)(*param_1 + 0x600))();
    if (cVar3 != '\0') {
      (**(code **)(*param_1 + 0x5d8))
                (param_1,cVar1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff);
      *(undefined1 *)(param_1 + 0x44) = 1;
    }
  }
  return;
}



// FUNCTION 140d73640 FUN_140d73640 body=101 status=ok
// SIG undefined FUN_140d73640(void)

void FUN_140d73640(longlong *param_1,ulonglong param_2,char param_3)

{
  param_1[0x21c] = 0;
  param_1[0x21d] = 0;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x21e] = 0;
  FUN_140d736a6();
  *(char *)(param_1 + 0x220) =
       *(char *)((longlong)param_1 + 0x291) + *(char *)((longlong)param_1 + 0x292);
                    /* WARNING: Could not recover jumptable at 0x000140d736a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xbd8))
            (param_1,CONCAT71((int7)((param_2 & 0xffffffff) >> 8),
                              (char)(param_2 & 0xffffffff) + param_3));
  return;
}



// FUNCTION 140d736a6 FUN_140d736a6 body=964 status=ok
// SIG undefined FUN_140d736a6(void)

void FUN_140d736a6(longlong *param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  double dVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = (**(code **)(*param_1 + 0x600))();
  if (cVar2 == '\0') goto LAB_140d737dc;
  cVar2 = *(char *)((longlong)param_1 + 0x291);
  if (cVar2 == '\x02') {
    param_1[0xca] = DAT_14c8464f0;
    lVar1 = DAT_14c8464e8;
    param_1[200] = DAT_14c8464e0;
    param_1[0xc9] = lVar1;
    param_1[0xcb] = 0;
    *(undefined1 *)((longlong)param_1 + 0x5aa) = 2;
    dVar4 = (double)param_1[0x27] * (double)param_1[0x48] +
            (double)param_1[0x25] * (double)param_1[0x46] +
            (double)param_1[0x47] * (double)param_1[0x26];
    param_1[0x25] = (longlong)((double)param_1[0x25] - dVar4 * (double)param_1[0x46]);
    param_1[0x26] = (longlong)((double)param_1[0x26] - (double)param_1[0x47] * dVar4);
    param_1[0x27] = (longlong)((double)param_1[0x27] - (double)param_1[0x48] * dVar4);
LAB_140d739d7:
    (**(code **)(*param_1 + 0x7c0))(param_1);
LAB_140d739ea:
    cVar2 = *(char *)((longlong)param_1 + 0x291);
  }
  else if (param_2 == 2) {
    if ((cVar2 != (char)param_1[0xb5]) &&
       (cVar2 = (**(code **)(param_1[0x2f] + 0xe0))(param_1 + 0x2f), cVar2 == '\0'))
    goto LAB_140d739d7;
    cVar2 = (**(code **)(*param_1 + 0x7c8))(param_1);
    if (cVar2 == '\0') goto LAB_140d737dc;
    goto LAB_140d739ea;
  }
  if (cVar2 == '\x01') {
    dVar4 = (-(double)param_1[0x46] * (double)param_1[0x25] -
            (double)param_1[0x26] * (double)param_1[0x47]) -
            (double)param_1[0x27] * (double)param_1[0x48];
    param_1[0x25] = (longlong)(dVar4 * (double)param_1[0x46] + (double)param_1[0x25]);
    param_1[0x26] = (longlong)((double)param_1[0x47] * dVar4 + (double)param_1[0x26]);
    param_1[0x27] = (longlong)((double)param_1[0x48] * dVar4 + (double)param_1[0x27]);
    *(byte *)((longlong)param_1 + 0x5b5) = *(byte *)((longlong)param_1 + 0x5b5) | 0x40;
    *(undefined1 *)((longlong)param_1 + 0x5aa) = 1;
    lVar1 = param_1[0x22];
    local_68 = *(undefined8 *)(lVar1 + 0x260);
    uStack_60 = *(undefined8 *)(lVar1 + 0x268);
    local_58 = *(undefined8 *)(lVar1 + 0x270);
    local_78 = 0;
    (**(code **)(*param_1 + 0x900))(param_1,&local_68,param_1 + 0x93,0);
    (**(code **)(*param_1 + 0x630))(param_1);
    FUN_140d73a98(param_1,param_1 + 0x93);
  }
  else {
    *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) & 0xf8;
    *(undefined8 *)((longlong)param_1 + 0x49c) = 0;
    memset(param_1 + 0x95,0,0x100);
    *(undefined4 *)(param_1 + 0xaf) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x54c) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x4ac) = 0x3f800000;
    *(byte *)((longlong)param_1 + 0x5b5) = *(byte *)((longlong)param_1 + 0x5b5) & 0xbf;
    if (cVar2 == '\x03') {
      if (*(char *)((longlong)param_1 + 0x7aa) == '\0') {
        (**(code **)(*param_1 + 0x660))(param_1);
      }
      (**(code **)(*(longlong *)param_1[0x3e] + 0x838))();
    }
    cVar2 = (**(code **)(param_1[0x2f] + 0xd8))(param_1 + 0x2f);
    if ((cVar2 == '\0') || (*(char *)((longlong)param_1 + 0x7aa) == '\0')) {
      (**(code **)(*param_1 + 0x730))(param_1,0,0,1);
    }
    if (*(char *)((longlong)param_1 + 0x291) == '\0') {
      (**(code **)(param_1[0x2f] + 0x100))(param_1 + 0x2f);
      (**(code **)(*(longlong *)param_1[0x3e] + 0x808))();
      (**(code **)(*param_1 + 0x750))(param_1);
    }
  }
  if (((param_2 != 3) && (*(char *)((longlong)param_1 + 0x291) == '\x03')) &&
     (plVar3 = (longlong *)(**(code **)(param_1[0x2f] + 0x50))(param_1 + 0x2f),
     plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  (**(code **)(*(longlong *)param_1[0x3e] + 0x888))((longlong *)param_1[0x3e],param_2,param_3);
LAB_140d737dc:
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d73a6c FUN_140d73a6c body=43 status=ok
// SIG undefined FUN_140d73a6c(void)

undefined8 FUN_140d73a6c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_145a6e83e();
  uVar2 = FUN_144718840(lVar1,uVar2);
  return uVar2;
}



// FUNCTION 140d73a98 FUN_140d73a98 body=131 status=ok
// SIG undefined FUN_140d73a98(void)

void FUN_140d73a98(longlong *param_1,uint *param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((~*param_2 & 3) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x730);
    uVar2 = 0;
    uVar4 = 0;
    goto LAB_140d73b00;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  if (param_2[0x3b] == 0) {
LAB_140d73b17:
    uVar2 = 0;
  }
  else {
    uVar1 = param_2[0x3a];
    uVar2 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar3 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar3 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar3 + 2) != param_2[0x3b] || ((*(uint *)(puVar3 + 1) & 0x10200000) != 0))))
      goto LAB_140d73b17;
      uVar2 = *puVar3;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x730);
LAB_140d73b00:
                    /* WARNING: Could not recover jumptable at 0x000140d73b03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,uVar4,1);
  return;
}



// FUNCTION 140d73b1c FUN_140d73b1c body=302 status=ok
// SIG undefined FUN_140d73b1c(void)

void FUN_140d73b1c(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong lStack_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x698))(param_1,&local_30);
  param_1[0xf1] = local_20;
  param_1[0xef] = local_30;
  param_1[0xf0] = lStack_28;
  param_1[0x25] = (longlong)((double)param_1[0x25] + (double)param_1[0xef]);
  param_1[0x26] = (longlong)((double)param_1[0x26] + (double)param_1[0xf0]);
  param_1[0x27] = (longlong)((double)param_1[0x27] + (double)param_1[0xf1]);
  if (((char)param_1[0x69] < '\0') && ((*(byte *)(param_1 + 0x1b6) & 1) != 0)) {
    param_1[0x1b7] = (longlong)((double)param_1[0xef] + (double)param_1[0x1b7]);
    param_1[0x1b8] = (longlong)((double)param_1[0xf0] + (double)param_1[0x1b8]);
    param_1[0x1b9] = (longlong)((double)param_1[0xf1] + (double)param_1[0x1b9]);
  }
  if (DAT_14c7613e8 == '\x01') {
    if ((*(float *)(param_1 + 0xb7) != 0.0) || (NAN(*(float *)(param_1 + 0xb7))))
    goto LAB_140d73bf8;
  }
  param_1[0xf1] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xef) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x77c) = uVar1;
  *(undefined4 *)(param_1 + 0xf0) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x784) = uVar3;
LAB_140d73bf8:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d73c4c FUN_140d73c4c body=42 status=ok
// SIG undefined FUN_140d73c4c(void)

void FUN_140d73c4c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x28))();
  *(undefined1 *)(lVar1 + 7) = 0;
  (**(code **)(*param_1 + 0x68))(param_1);
  *(undefined1 *)(lVar1 + 7) = 1;
  return;
}



// FUNCTION 140d73c76 FUN_140d73c76 body=911 status=ok
// SIG undefined FUN_140d73c76(void)

void FUN_140d73c76(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  char cVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_1e8 [32];
  undefined1 *local_1c8;
  undefined1 local_1c0;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_170 [4];
  undefined4 local_16c;
  double local_160;
  double local_158;
  double local_150;
  undefined4 local_cc;
  byte local_c3;
  undefined4 local_a0;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (((~*(uint *)(param_1 + 0x93) & 3) == 0) &&
     ((((fVar9 = *(float *)((longlong)param_1 + 0x49c), (*(uint *)(param_1 + 0x93) & 4) == 0 ||
        (fVar9 = *(float *)(param_1 + 0x94), 1.9 <= *(float *)((longlong)param_1 + 0x49c))) ||
       (fVar9 < 1.9)) && ((fVar9 < 1.9 || (2.4 < fVar9)))))) {
    memset(local_170,0,0x100);
    local_a0 = 0xffffffff;
    local_cc = 0xffffffff;
    local_16c = 0x3f800000;
    lVar7 = param_1[0x22];
    dVar1 = (double)param_1[0x47];
    dVar2 = (double)param_1[0x48];
    dVar3 = (double)param_1[0x46];
    dVar4 = *(double *)(lVar7 + 0x268);
    dVar5 = *(double *)(lVar7 + 0x260);
    dVar6 = *(double *)(lVar7 + 0x270);
    fVar10 = 2.15 - fVar9;
    local_198 = *(undefined8 *)(lVar7 + 0x240);
    uStack_190 = *(undefined8 *)(lVar7 + 0x248);
    local_188 = *(undefined8 *)(lVar7 + 0x250);
    uStack_180 = *(undefined8 *)(lVar7 + 600);
    local_1b0 = (double)fVar10;
    local_1a0 = -dVar2 * local_1b0;
    local_1a8 = -dVar1 * local_1b0;
    local_1b0 = -dVar3 * local_1b0;
    local_1c0 = 0;
    local_1c8 = local_170;
    FUN_1402eda10(param_1,&local_1b0,&local_198,1);
    if ((local_c3 & 3) == 1) {
      lVar7 = param_1[0x22];
      if (fVar10 <= 0.0) {
        *(float *)((longlong)param_1 + 0x49c) =
             (float)((-(double)param_1[0x46] * (*(double *)(lVar7 + 0x260) - local_160) -
                     (*(double *)(lVar7 + 0x268) - local_158) * (double)param_1[0x47]) -
                    (*(double *)(lVar7 + 0x270) - local_150) * (double)param_1[0x48]);
        cVar8 = (**(code **)(*param_1 + 0x878))(param_1);
        if (cVar8 != '\0') {
          *(uint *)(param_1 + 0x93) =
               (*(uint *)(param_1 + 0x93) & 0xfffffff8) + (uint)((local_c3 & 3) == 1) + 2;
          *(undefined4 *)(param_1 + 0x94) = 0;
          memcpy(param_1 + 0x95,local_170,0x100);
        }
      }
      else {
        *(float *)((longlong)param_1 + 0x49c) =
             (float)((double)*(float *)((longlong)param_1 + 0x49c) +
                    (((-(double)param_1[0x46] * *(double *)(lVar7 + 0x260) -
                      *(double *)(lVar7 + 0x268) * (double)param_1[0x47]) -
                     *(double *)(lVar7 + 0x270) * (double)param_1[0x48]) -
                    ((dVar5 * -dVar3 - dVar1 * dVar4) - dVar2 * dVar6)));
      }
    }
    else {
      *(float *)((longlong)param_1 + 0x49c) = fVar10 + *(float *)((longlong)param_1 + 0x49c);
    }
    *(byte *)((longlong)param_1 + 0x5b4) =
         *(byte *)((longlong)param_1 + 0x5b4) & 0xdf |
         ((*(byte *)((longlong)param_1 + 0x5b4) & 0x21) != 1 || fVar9 < 0.0) << 5;
    if ((param_1[0x3e] != 0) && (*(char *)(param_1[0x3e] + 0x178) != '\x01')) {
      *(byte *)((longlong)param_1 + 0x349) = *(byte *)((longlong)param_1 + 0x349) | 0x10;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d7405c FUN_140d7405c body=1987 status=ok
// SIG undefined FUN_140d7405c(void)

ulonglong FUN_140d7405c(undefined8 param_1,longlong param_2,double *param_3,undefined8 *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  undefined8 unaff_RBP;
  ulonglong uVar9;
  undefined4 *puVar10;
  longlong lVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  undefined1 auStack_358 [32];
  double *local_338;
  undefined4 local_330;
  undefined4 local_328;
  undefined8 local_320;
  wchar_t *local_318;
  undefined1 *local_310;
  undefined1 *local_308;
  code **local_300;
  code *local_2f8;
  code *local_2f0;
  code *local_2e8;
  code *local_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  double local_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  double local_288;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  double local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  double local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  code *local_1b8 [2];
  double local_1a8;
  code *local_1a0;
  code *local_198;
  undefined8 local_190;
  code *local_188;
  code *local_180;
  undefined8 local_178;
  code *local_170;
  code *local_168;
  undefined8 local_160;
  code *local_158;
  code *local_150;
  undefined8 local_148;
  code *local_140;
  code *local_138;
  undefined8 local_130;
  code *local_128;
  code *local_120;
  undefined8 local_118;
  code *local_110;
  code *local_108;
  undefined8 local_100;
  ulonglong local_f0;
  undefined7 uVar11;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  uVar11 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar9 = CONCAT71(uVar11,1);
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x1c8) == 0)) goto LAB_140d746f1;
  local_338 = &local_1d8;
  local_1d8 = 0.0;
  dStack_1d0 = 0.0;
  local_1c8 = 0.0;
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  local_1e8 = param_4[2];
  local_1f8 = *param_4;
  uStack_1f0 = param_4[1];
  local_218 = *(undefined4 *)param_3;
  uStack_214 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_210 = *(undefined4 *)(param_3 + 1);
  uStack_20c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_208 = param_3[2];
  cVar7 = FUN_140c59c06(param_1,param_2);
  uVar9 = CONCAT71(uVar11,1);
  if (cVar7 == '\0') goto LAB_140d746f1;
  dVar5 = ABS(local_1d8);
  if (dVar5 <= 9.999999747378752e-05) {
    dVar6 = ABS(local_1c8);
    if ((9.999999747378752e-05 < ABS(dStack_1d0)) || (9.999999747378752e-05 < dVar6))
    goto LAB_140d741b7;
    lVar12 = FUN_1406c47dc(param_2);
    if ((lVar12 == 0) || (plVar4 = *(longlong **)(lVar12 + 0x118), plVar4 == (longlong *)0x0)) {
      plVar4 = *(longlong **)(param_2 + 0x1c8);
      if (plVar4 != (longlong *)0x0) {
        if (DAT_14cac6e60 == 0) {
          local_300 = local_1b8;
          local_1b8[0] = FUN_144a7958c;
          local_2f0 = FUN_14081d0ea;
          local_2f8 = FUN_142b47bc4;
          local_308 = &LAB_1478989f1;
          local_310 = &LAB_146391124;
          local_318 = L"Engine";
          local_320 = 0x10000000000;
          local_328 = 0x10000005;
          local_330 = 0x10;
          local_338 = (double *)CONCAT44(local_338._4_4_,0x620);
          FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
        }
        if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
            DAT_14cac6e60 + 0x30)) {
          (**(code **)(*plVar4 + 0x820))(plVar4,local_1b8,0);
          goto joined_r0x000140d74430;
        }
      }
    }
    else {
      (**(code **)(*plVar4 + 0x820))(plVar4,local_1b8,0);
joined_r0x000140d74430:
      if ((int)local_1b8[0] == 1) {
        FUN_14088b378();
      }
    }
  }
  else {
    dVar6 = ABS(local_1c8);
LAB_140d741b7:
    if (9.999999747378752e-05 < dVar6) {
      param_3[2] = local_1c8 + param_3[2];
      local_228 = param_4[2];
      local_238 = *param_4;
      uStack_230 = param_4[1];
      local_258 = *(undefined4 *)param_3;
      uStack_254 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_250 = *(undefined4 *)(param_3 + 1);
      uStack_24c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_248 = param_3[2];
      local_338 = (double *)0x0;
      cVar7 = FUN_140c59c06(param_1,param_2);
      if (cVar7 == '\0') goto LAB_140d746f1;
      *param_3 = dVar1;
      param_3[1] = dVar2;
      param_3[2] = dVar3;
      dVar5 = ABS(local_1d8);
    }
    dVar14 = ABS(dStack_1d0);
    if ((9.999999747378752e-05 < dVar5) || (9.999999747378752e-05 < dVar14)) {
      fVar13 = 0.0;
      if (9.999999747378752e-05 < dVar5) {
        fVar13 = (float)local_1d8;
      }
      fVar15 = 0.0;
      if (9.999999747378752e-05 < dVar14) {
        fVar15 = (float)dStack_1d0;
      }
      local_1b8[1] = (code *)(double)fVar15;
      local_1b8[0] = (code *)(double)fVar13;
      local_1a8 = 0.0;
      local_2e8 = (code *)0x1;
      if ((*(byte *)(param_2 + 0x65) & 0x18) != 0x10) {
        if ((dVar5 <= 9.999999747378752e-05) || (dVar14 <= 9.999999747378752e-05)) {
          local_170 = (code *)(double)-fVar15;
          local_168 = (code *)(double)-fVar13;
          local_1a0 = local_168;
          local_198 = local_170;
          if (9.999999747378752e-05 < dVar14) {
            fVar13 = (float)dStack_1d0;
          }
          local_158 = (code *)(double)fVar13;
          local_138 = (code *)(double)-fVar13;
          local_150 = local_158;
          local_140 = local_158;
          local_180 = local_1b8[0];
          local_120 = local_158;
          local_110 = local_138;
          local_108 = local_138;
          local_2e8 = local_1b8[1];
          local_2e0 = local_138;
        }
        else {
          local_170 = (code *)(double)-fVar13;
          local_1a0 = local_170;
          local_198 = local_1b8[1];
          local_168 = (code *)(double)-fVar15;
          local_158 = local_1b8[1];
          local_150 = local_1b8[0];
          local_138 = local_1b8[0];
          local_140 = local_168;
          local_180 = local_168;
          local_120 = local_170;
          local_110 = local_168;
          local_108 = local_170;
          local_2e8 = local_1b8[0];
          local_2e0 = local_1b8[1];
        }
        local_190 = 0;
        local_188 = local_2e8;
        local_178 = 0;
        local_160 = 0;
        local_148 = 0;
        local_130 = 0;
        local_128 = local_2e0;
        local_118 = 0;
        local_100 = 0;
        local_2e8 = (code *)0x8;
      }
      iVar8 = (int)local_2e8;
      puVar10 = (undefined4 *)0x0;
      do {
        dVar5 = *(double *)((longlong)&local_1a8 + (longlong)puVar10);
        dVar14 = *(double *)((longlong)(local_1b8 + 1) + (longlong)puVar10);
        *param_3 = *(double *)((longlong)local_1b8 + (longlong)puVar10) + dVar1;
        param_3[1] = dVar14 + dVar2;
        param_3[2] = dVar5 + dVar3;
        local_268 = param_4[2];
        local_278 = *param_4;
        uStack_270 = param_4[1];
        local_298 = *(undefined4 *)param_3;
        uStack_294 = *(undefined4 *)((longlong)param_3 + 4);
        uStack_290 = *(undefined4 *)(param_3 + 1);
        uStack_28c = *(undefined4 *)((longlong)param_3 + 0xc);
        local_288 = param_3[2];
        local_338 = (double *)0x0;
        cVar7 = FUN_140c59c06(param_1,param_2,&local_298,&local_278);
        if (cVar7 == '\0') goto LAB_140d746ee;
        puVar10 = puVar10 + 6;
      } while ((undefined4 *)((ulonglong)(uint)(iVar8 * 8) * 3) != puVar10);
      if (9.999999747378752e-05 < dVar6) {
        iVar8 = (int)local_2e8;
        lVar12 = 0;
        puVar10 = &local_2d8;
        do {
          dVar5 = *(double *)((longlong)&local_1a8 + lVar12);
          dVar6 = *(double *)((longlong)local_1b8 + lVar12 + 8);
          *param_3 = *(double *)((longlong)local_1b8 + lVar12) + dVar1;
          param_3[1] = dVar6 + dVar2;
          param_3[2] = dVar5 + dVar3 + local_1c8;
          local_2a8 = param_4[2];
          local_2b8 = *param_4;
          uStack_2b0 = param_4[1];
          local_2d8 = *(undefined4 *)param_3;
          uStack_2d4 = *(undefined4 *)((longlong)param_3 + 4);
          uStack_2d0 = *(undefined4 *)(param_3 + 1);
          uStack_2cc = *(undefined4 *)((longlong)param_3 + 0xc);
          local_2c8 = param_3[2];
          local_338 = (double *)0x0;
          cVar7 = FUN_140c59c06(param_1,param_2,puVar10,&local_2b8);
          if (cVar7 == '\0') goto LAB_140d746ee;
          lVar12 = lVar12 + 0x18;
        } while ((ulonglong)(uint)(iVar8 << 3) * 3 != lVar12);
      }
    }
  }
  *param_3 = dVar1;
  param_3[1] = dVar2;
  param_3[2] = dVar3;
  uVar9 = 0;
LAB_140d746f1:
  if ((local_f0 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140d746ee:
  uVar9 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
  goto LAB_140d746f1;
}



// FUNCTION 140d74820 FUN_140d74820 body=76 status=ok
// SIG undefined FUN_140d74820(void)

undefined8 FUN_140d74820(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140d7486c(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000140d74861. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140d7486c FUN_140d7486c body=191 status=ok
// SIG undefined FUN_140d7486c(void)

longlong FUN_140d7486c(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_140d7492c();
  lVar3 = *param_1;
  if (DAT_14cb88ec0 != DAT_14cb88eec) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb88ef0;
    if (DAT_14cb88ef8 != (undefined *)0x0) {
      puVar7 = DAT_14cb88ef8;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb88f00 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb88eb8 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb88eb0;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 140d7492c FUN_140d7492c body=152 status=ok
// SIG undefined FUN_140d7492c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d7492c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb88f08) {
    FUN_144b3d300(&DAT_14cb88f08);
    if (DAT_14cb88f08 == -1) {
      DAT_14cb88ed8 = 0;
      DAT_14cb88ee0 = 0;
      DAT_14cb88eb8 = 0;
      _DAT_14cb88ec0 = 0;
      _DAT_14cb88ee4 = 0xffffffff00000080;
      DAT_14cb88eec = 0;
      DAT_14cb88ef8 = 0;
      DAT_14cb88f00 = 0;
      atexit(FUN_143e0530f);
      _Init_thread_footer(&DAT_14cb88f08);
      return;
    }
  }
  return;
}



// FUNCTION 140d749c4 FUN_140d749c4 body=122 status=ok
// SIG undefined FUN_140d749c4(void)

longlong FUN_140d749c4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*param_1 + 0x2e0))();
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x1b0) == 0)) {
    lVar2 = 0;
  }
  else {
    FUN_140902b70(*(longlong *)(lVar1 + 0x1b0),local_28);
    lVar2 = FUN_14067bc2a(local_28);
    if ((param_2 != (longlong *)0x0) && (lVar2 != 0)) {
      *param_2 = lVar1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d74a40 FUN_140d74a40 body=108 status=ok
// SIG undefined FUN_140d74a40(void)

longlong FUN_140d74a40(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = (**(code **)(*param_1 + 0x2d8))();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0xb8);
    if (lVar2 == 0) {
      local_18 = *(undefined8 *)(lVar1 + 0xa8);
      lVar2 = FUN_14050aea0();
      *(longlong *)(lVar1 + 0xb8) = lVar2;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d74abc FUN_140d74abc body=157 status=ok
// SIG undefined FUN_140d74abc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140d74abc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b4677f0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d74b68 FUN_140d74b68 body=40 status=ok
// SIG undefined FUN_140d74b68(void)

undefined8 FUN_140d74b68(undefined8 param_1,int param_2)

{
  FUN_140d74b90();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d74b90 FUN_140d74b90 body=152 status=ok
// SIG undefined FUN_140d74b90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d74b90(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b2dce70;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140d74c13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140d74c30 FUN_140d74c30 body=552 status=ok
// SIG undefined FUN_140d74c30(void)

undefined8 FUN_140d74c30(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  char *_Str;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  size_t sVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_168 [32];
  undefined1 local_148 [256];
  undefined1 *local_48;
  undefined1 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*param_2 == 0) {
    plVar3 = &DAT_14c9a1308;
  }
  else {
    plVar3 = (longlong *)FUN_1408db3b0();
  }
  if (*plVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14000584e();
  }
  *(undefined1 *)(param_1 + 8) = uVar2;
  if (*param_2 == 0) {
    puVar4 = &DAT_14c9a1308;
  }
  else {
    puVar4 = (undefined8 *)FUN_1408db3b0();
  }
  pbVar1 = (byte *)*puVar4;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(pbVar1 + 8);
  }
  uVar2 = FUN_140d74e5a(uVar6);
  *(undefined1 *)(param_1 + 0x160) = uVar2;
  if (*param_2 == 0) {
    puVar4 = &DAT_14c9a1308;
  }
  else {
    puVar4 = (undefined8 *)FUN_1408db3b0();
  }
  if (((byte *)*puVar4 != (byte *)0x0) && ((~*(byte *)*puVar4 & 3) == 0)) {
    puVar4 = &DAT_14c9a1308;
    plVar3 = &DAT_14c9a1308;
    if (*param_2 != 0) {
      plVar3 = (longlong *)FUN_1408db3b0();
    }
    if (*plVar3 != 0) {
      puVar4 = (undefined8 *)FUN_1408db3b0();
    }
    pbVar1 = (byte *)*puVar4;
    if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) == 1)) &&
       (_Str = *(char **)(pbVar1 + 8), _Str != (char *)0x0)) {
      local_48 = (undefined1 *)0x0;
      sVar5 = strlen(_Str);
      iVar10 = (int)sVar5;
      uVar9 = iVar10 + 1;
      local_38 = iVar10;
      if (uVar9 < 0x81) {
        puVar8 = (undefined1 *)0x0;
      }
      else {
        FUN_1446efa72(&local_48,0,uVar9,2);
        puVar8 = local_48;
      }
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = local_148;
      }
      local_40 = puVar8;
      if (-1 < iVar10) {
        uVar7 = 0;
        do {
          *(short *)(puVar8 + uVar7 * 2) = (short)_Str[uVar7];
          uVar7 = uVar7 + 1;
        } while (uVar9 != uVar7);
      }
      FUN_14020fad6(param_1 + 0x130,local_40);
      FUN_140c42a30(param_1 + 0x10);
      if (local_48 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140d74e5a FUN_140d74e5a body=355 status=ok
// SIG undefined FUN_140d74e5a(void)

ulonglong FUN_140d74e5a(char *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  size_t sVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_58 [32];
  char *local_38;
  int local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  param_2 = param_2 & 0xffffffff;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == (char *)0x0) goto LAB_140d74f2b;
  lVar2 = FUN_140d74fbe();
  sVar3 = strlen(param_1);
  iVar1 = (int)sVar3;
  if (iVar1 == 0) {
LAB_140d74fac:
    uVar4 = 0;
    uVar9 = 0;
  }
  else {
    lVar6 = (longlong)iVar1;
    pcVar7 = param_1 + lVar6 + -1;
    uVar5 = 0;
    if (pcVar7 < param_1) {
      lVar11 = 0;
    }
    else {
      do {
        if (9 < (byte)(*pcVar7 - 0x30U)) break;
        uVar5 = uVar5 + 1;
        pcVar7 = pcVar7 + -1;
      } while (param_1 <= pcVar7);
      if (uVar5 == 0 || iVar1 <= (int)uVar5) {
LAB_140d74ed8:
        lVar11 = 0;
      }
      else {
        lVar11 = 0;
        if ((uVar5 < 0xb) && (lVar8 = -(ulonglong)uVar5, param_1[lVar8 + lVar6 + -1] == '_')) {
          if ((uVar5 == 1) || (param_1[lVar8 + lVar6] != '0')) {
            lVar10 = 0;
            do {
              lVar11 = (longlong)param_1[lVar8 + lVar6] + lVar10 * 10;
              lVar10 = lVar11 + -0x30;
              lVar8 = lVar8 + 1;
            } while (lVar8 != 0);
            if (lVar10 < 0x7fffffff) {
              iVar1 = ~uVar5 + iVar1;
              lVar11 = lVar11 + -0x2f;
              goto LAB_140d74edb;
            }
          }
          goto LAB_140d74ed8;
        }
      }
LAB_140d74edb:
      if (iVar1 == 0) goto LAB_140d74fac;
    }
    local_2c = 0;
    local_38 = param_1;
    local_30 = iVar1;
    uVar5 = FUN_14001a6c0(&local_38,1);
    uVar9 = lVar11 << 0x20;
    uVar4 = (ulonglong)uVar5;
  }
  if ((lVar2 != 0) && (iVar1 = FUN_1448e5bf4(lVar2,uVar9 | uVar4,0), iVar1 != -1)) {
    param_2 = CONCAT71((int7)(param_2 >> 8),
                       *(undefined1 *)(*(longlong *)(lVar2 + 0x40) + 8 + (longlong)iVar1 * 0x10));
  }
LAB_140d74f2b:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140d74fbe FUN_140d74fbe body=57 status=ok
// SIG undefined FUN_140d74fbe(void)

void FUN_140d74fbe(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a59a0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a59a0 = FUN_14171c317(FUN_1462af19d,uVar1,L"EGbxType");
  }
  return;
}



// FUNCTION 140d74ff7 FUN_140d74ff7 body=70 status=ok
// SIG undefined FUN_140d74ff7(void)

void FUN_140d74ff7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d7503e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b6b92f0;
  puVar1[0x72] = &PTR_FUN_14b6b9930;
  puVar1[0x73] = &PTR_FUN_14b6b99d0;
  *(undefined1 *)(puVar1 + 0xac) = 2;
  return;
}



// FUNCTION 140d7503e FUN_140d7503e body=628 status=ok
// SIG undefined FUN_140d7503e(void)

undefined8 * FUN_140d7503e(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140834366();
  *param_1 = &PTR_FUN_14b071540;
  param_1[0x72] = &PTR_FUN_14b071b80;
  param_1[0x73] = &PTR_FUN_14b071c20;
  param_1[0x74] = &DAT_14a171d50;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x82) = 0;
  *(undefined1 *)((longlong)param_1 + 0x414) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(undefined8 *)((longlong)param_1 + 0x431) = 0;
  *(undefined8 *)((longlong)param_1 + 0x439) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ff) = 0;
  *(undefined8 *)((longlong)param_1 + 0x407) = 0;
  *(undefined4 *)(param_1 + 0x8b) = 2;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x8e) = 2;
  *(undefined8 *)((longlong)param_1 + 0x474) = 0;
  *(undefined8 *)((longlong)param_1 + 0x47c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x481) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0x447a0000;
  param_1[0x9c] = &DAT_14a171d50;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  param_1[0xa1] = &DAT_14a171d50;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  *(undefined2 *)(param_1 + 0xa5) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0x75] = &DAT_14cb70058;
  param_1[0x9d] = &DAT_14cb70058;
  param_1[0xa2] = &DAT_14cb70058;
  param_1[0x79] = &DAT_14cb70058;
  for (puVar2 = param_1; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)puVar2[4]) {
    if ((*(uint *)(puVar2 + 1) & 0x30) != 0) goto LAB_140d75209;
  }
  plVar1 = param_1 + 0x7c;
  param_1[0x7f] = &DAT_14cb70168;
  param_1[0x7e] = param_1;
  lVar5 = DAT_14cb70168;
  while( true ) {
    param_1[0x7c] = lVar5;
    LOCK();
    lVar3 = *(longlong *)param_1[0x7f];
    bVar6 = lVar5 == lVar3;
    if (bVar6) {
      *(longlong *)param_1[0x7f] = (longlong)plVar1;
      lVar3 = lVar5;
    }
    UNLOCK();
    if (bVar6) break;
    param_1[0x7c] = lVar3;
    lVar5 = *(longlong *)param_1[0x7f];
  }
  if (*plVar1 != 0) {
    *(longlong **)(*plVar1 + 8) = plVar1;
  }
LAB_140d75209:
  FUN_1446f470e(&local_28,L"DrawComponent",1);
  uVar4 = FUN_140d752b4();
  lVar5 = FUN_1407194ae(param_1,local_28,uVar4,0);
  if ((lVar5 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0xa9] = lVar5;
    if (lVar5 == 0) goto LAB_140d7525c;
  }
  else {
    FUN_1456cec3c(lVar5);
    param_1[0xa9] = lVar5;
  }
  FUN_140486fc4(lVar5,param_1[0x39],0);
LAB_140d7525c:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d752b4 FUN_140d752b4 body=228 status=ok
// SIG undefined FUN_140d752b4(void)

longlong FUN_140d752b4(void)

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
  if (DAT_14cb57f30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_14864bb1f;
    local_40 = &LAB_145d1174a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x650;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxActivityAreaDrawComponent",&DAT_14cb57f30,&DAT_14864bb1e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb57f30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d7539a FUN_140d7539a body=291 status=ok
// SIG undefined FUN_140d7539a(void)

void FUN_140d7539a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140d754d0();
  if (param_2 != 0) {
    if (DAT_14cb46ec8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b4754c;
      local_48 = &LAB_1483e40eb;
      local_50 = &LAB_146486986;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 8;
      local_78 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if ((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d754d0 FUN_140d754d0 body=719 status=ok
// SIG undefined FUN_140d754d0(void)

void FUN_140d754d0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_1e8 [36];
  undefined8 local_1c4;
  short local_1bc;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined2 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_190 [4];
  undefined4 local_18c;
  undefined4 local_ec;
  undefined1 local_d8 [24];
  undefined4 local_c0;
  undefined8 local_90;
  undefined1 local_88 [48];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (((*(longlong *)(param_1 + 0x1568) != 0) && (param_2 != (longlong *)0x0)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x1568) + 0x6f0) & 1) == 0)) {
    uVar4 = FUN_1403a4836();
    plVar5 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar4);
    if (plVar5 != (longlong *)0x0) {
      FUN_1403a4836();
      plVar6 = (longlong *)FUN_144718840(plVar5);
      if ((plVar5 != plVar6) && (plVar6 != (longlong *)0x0)) {
        cVar3 = (**(code **)(*plVar6 + 0x18))(plVar6);
        if (cVar3 != '\0') {
          lVar8 = param_1 + 0x1570;
          lVar7 = *(longlong *)(param_1 + 0x1580);
          if (*(longlong *)(param_1 + 0x1580) == 0) {
            lVar7 = lVar8;
          }
          if ((longlong)*(int *)(param_1 + 0x1588) != 0) {
            lVar9 = 0;
            do {
              if (*(int *)(lVar7 + lVar9) == *(int *)((longlong)param_2 + 0xc)) goto LAB_140d75530;
              lVar9 = lVar9 + 4;
            } while ((longlong)*(int *)(param_1 + 0x1588) * 4 != lVar9);
          }
          local_1b0 = 0;
          local_1a8 = 0xffff;
          local_1a0 = 0;
          memset(local_190,0,0x100);
          local_c0 = 0xffffffff;
          local_18c = 0x3f800000;
          local_ec = 0xffffffff;
          local_90 = 0;
          local_58 = 0;
          local_50 = 0x200000000;
          local_1b8[0] = 1;
          local_198 = *(undefined8 *)(param_1 + 0x1b0);
          thunk_FUN_140871de8(local_d8,param_2);
          FUN_14118c70e(local_88,param_1 + 0xe78);
          local_90 = (**(code **)(*(longlong *)(param_1 + 0x3c8) + 0x18))(param_1 + 0x3c8);
          FUN_140d75dba(&local_1b0,param_1 + 0xbb0);
          local_1c4 = &DAT_3f8000003f800000;
          local_1bc = *(short *)(param_1 + 0xe4c);
          cVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,local_1b8);
          if (cVar3 != '\0') {
            if (1e-08 < ABS((float)local_1c4 + -1.0)) {
              *(float *)(param_1 + 0x1560) = *(float *)(param_1 + 0x1560) * (float)local_1c4;
              *(float *)(param_1 + 0xe40) = (float)local_1c4 * *(float *)(param_1 + 0xe40);
            }
            if (1e-08 < ABS(local_1c4._4_4_ + -1.0)) {
              FUN_1411a6e9c(param_1);
            }
            if (local_1bc != *(short *)(param_1 + 0xe4c)) {
              FUN_143e0e9f8(param_1);
            }
          }
          uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
          iVar2 = *(int *)(param_1 + 0x1588);
          *(uint *)(param_1 + 0x1588) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0x158c) < iVar2 + 1U) {
            FUN_1447de67e(lVar8,iVar2);
          }
          if (*(longlong *)(param_1 + 0x1580) != 0) {
            lVar8 = *(longlong *)(param_1 + 0x1580);
          }
          *(undefined4 *)(lVar8 + (longlong)iVar2 * 4) = uVar1;
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
LAB_140d75530:
  FUN_140d757a0(param_1,param_2);
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d757a0 FUN_140d757a0 body=1555 status=ok
// SIG undefined FUN_140d757a0(void)

void FUN_140d757a0(longlong *param_1,code *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  undefined1 auStack_398 [32];
  undefined4 local_378;
  undefined4 local_370;
  undefined4 local_368;
  undefined8 local_360;
  wchar_t *local_358;
  code *local_350;
  undefined1 *local_348;
  code **local_340;
  code *local_338;
  code *local_330;
  undefined1 local_320 [4];
  undefined4 local_31c;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  ulonglong local_2e0;
  undefined8 uStack_2d8;
  double local_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  undefined4 local_27c;
  undefined4 local_250;
  undefined1 local_230 [16];
  code *local_220;
  double local_218;
  double local_210;
  longlong local_118 [24];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (param_2 != (code *)0x0) {
    local_220 = param_2;
    uVar8 = FUN_14477b072(param_1,DAT_14cac9ac0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar8,&local_220);
    if (((byte)param_2[0x62] & 4) != 0) {
      if (DAT_14cb56270 == 0) {
        local_220 = FUN_1449e2820;
        local_330 = FUN_14081d0ea;
        local_338 = FUN_1427b09ee;
        local_348 = &LAB_148630fef;
        local_350 = FUN_1464b6a91;
        local_358 = L"Engine";
        local_360 = 0;
        local_368 = 0x10004001;
        local_370 = 8;
        local_378 = 0x28;
        local_340 = &local_220;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      lVar9 = FUN_144718840(param_2);
      if ((lVar9 != 0) && ((code *)param_1[0x36] != param_2)) {
        uVar12 = 0xda8;
        if ((param_1[0x176] != 0) && (((short)param_1[0x177] < 0 || (param_1[0x178] != 0)))) {
          uVar7 = FUN_14486116a(param_1 + 0x172);
          if (2 < uVar7) goto LAB_140d75800;
          uVar12 = (ulonglong)(uVar7 * -0x10 + 0xdb8);
        }
        memset(local_320,0,0x100);
        local_250 = 0xffffffff;
        local_31c = 0x3f800000;
        local_27c = 0xffffffff;
        local_58 = (longlong *)0x0;
        local_50 = 0x1800000000;
        FUN_14024dbd6(param_1,local_118,0);
        plVar13 = local_58;
        if (local_58 == (longlong *)0x0) {
          plVar13 = local_118;
        }
        if ((longlong)(int)local_50 != 0) {
          plVar11 = plVar13 + (int)local_50;
          do {
            lVar9 = (longlong)*(int *)(*plVar13 + 0x408);
            if (lVar9 != 0) {
              lVar2 = *(longlong *)(*plVar13 + 0x400);
              lVar15 = 0;
              do {
                iVar1 = *(int *)(lVar2 + 0xe4 + lVar15);
                if (((((iVar1 != 0) && (uVar7 = *(uint *)(lVar2 + 0xe0 + lVar15), -1 < (int)uVar7))
                     && ((int)uVar7 < DAT_14c9647dc)) &&
                    ((plVar14 = (longlong *)
                                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
                     plVar14 != (longlong *)0x0 && ((int)plVar14[2] == iVar1)))) &&
                   (((*(uint *)(plVar14 + 1) & 0x10200000) == 0 &&
                    ((lVar3 = *plVar14, lVar3 != 0 && (*(code **)(lVar3 + 0xa8) == param_2)))))) {
                  memcpy(local_320,(char *)(lVar15 + lVar2) + 8,0x100);
                  if (*(char *)(lVar15 + lVar2) == '\0') {
                    uVar7 = *(uint *)(lVar2 + 0xb0 + lVar15);
                    if (DAT_14cad2858 == 0) {
                      local_220 = FUN_144a7958c;
                      local_330 = FUN_14081d0ea;
                      local_338 = (code *)&LAB_146395584;
                      local_348 = &LAB_147a0ba80;
                      local_350 = (code *)&LAB_14575ccce;
                      local_358 = L"Engine";
                      local_360 = 0x40000000000;
                      local_368 = 0x10000004;
                      local_370 = 0x10;
                      local_378 = 0x1180;
                      local_340 = &local_220;
                      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,
                                    FUN_1463bcebe);
                    }
                    if ((((*(int *)(DAT_14cad2858 + 0x38) <=
                           *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                           (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30))
                        && (-1 < (int)uVar7)) &&
                       (((int)uVar7 < *(int *)(lVar3 + 0xd78) &&
                        (lVar9 = *(longlong *)(*(longlong *)(lVar3 + 0xd70) + (ulonglong)uVar7 * 8),
                        lVar9 != 0)))) {
                      FUN_14041807a(lVar3,local_230,(int)*(short *)(lVar9 + 0x10));
                    }
                    lVar9 = param_1[0x39];
                    if (lVar9 == 0) {
                      puVar10 = &DAT_14c8464e0;
                      uVar16 = SUB84(DAT_14c8464f0,0);
                      uVar17 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                    }
                    else {
                      uVar16 = (undefined4)*(undefined8 *)(lVar9 + 0x270);
                      uVar17 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x270) >> 0x20);
                      puVar10 = (undefined8 *)(lVar9 + 0x260);
                    }
                    local_310 = *(undefined4 *)puVar10;
                    uStack_30c = *(undefined4 *)((longlong)puVar10 + 4);
                    uStack_308 = *(undefined4 *)(puVar10 + 1);
                    uStack_304 = *(undefined4 *)((longlong)puVar10 + 0xc);
                    local_300 = CONCAT44(uVar17,uVar16);
                    local_2f8 = local_310;
                    uStack_2f4 = uStack_30c;
                    uStack_2f0 = uStack_308;
                    uStack_2ec = uStack_304;
                    local_2e8 = local_300;
                    (**(code **)(*param_1 + 0x328))(param_1,&local_220);
                    dVar18 = local_210 * local_210 +
                             (double)local_220 * (double)local_220 + local_218 * local_218;
                    if (((dVar18 != 1.0) ||
                        (local_2d0 = local_210, dVar5 = local_218, pcVar4 = local_220, NAN(dVar18)))
                       && (local_2d0 = DAT_14c8464f0, dVar5 = DAT_14c8464e8, pcVar4 = DAT_14c8464e0,
                          9.99999993922529e-09 <= dVar18)) {
                      dVar18 = 1.0 / SQRT(dVar18);
                      local_2d0 = local_210 * dVar18;
                      dVar5 = local_218 * dVar18;
                      pcVar4 = (code *)((double)local_220 * dVar18);
                    }
                    local_2d0 = -local_2d0;
                    local_2e0 = (ulonglong)pcVar4 ^ 0x8000000000000000;
                    local_2c8._8_4_ = SUB84(dVar5,0);
                    local_2c8._0_8_ = local_2e0;
                    local_2c8._12_4_ = (uint)((ulonglong)dVar5 >> 0x20) ^ 0x80000000;
                    uStack_2d8 = local_2c8._8_8_;
                    local_2b8 = local_2d0;
                  }
                  goto LAB_140d75b2d;
                }
                lVar15 = lVar15 + 0x108;
              } while (lVar9 * 0x108 != lVar15);
            }
            plVar13 = plVar13 + 1;
          } while (plVar13 != plVar11);
        }
LAB_140d75b2d:
        plVar13 = (longlong *)(uVar12 + (longlong)param_1);
        uVar8 = FUN_140bd76f6();
        plVar11 = (longlong *)(**(code **)(*(longlong *)param_2 + 0x288))(param_2,uVar8);
        if (plVar11 != (longlong *)0x0) {
          uVar8 = FUN_140bd76f6();
          plVar14 = (longlong *)FUN_144718840(plVar11,uVar8);
          if ((plVar11 != plVar14) && (plVar14 != (longlong *)0x0)) {
            cVar6 = (**(code **)(*plVar14 + 0x10))(plVar14,param_1 + 0x176,local_320);
            if (cVar6 != '\0') {
              plVar13 = param_1 + 0x1b3;
            }
          }
        }
        local_220 = param_2;
        memcpy(&local_218,local_320,0x100);
        FUN_1447cd2ec(plVar13,&local_220);
        if (local_58 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_140d75800:
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d75db4 thunk_FUN_140871de8 body=5 status=ok
// SIG undefined thunk_FUN_140871de8(void)

uint * thunk_FUN_140871de8(uint *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *param_1 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    uVar2 = *(uint *)(lVar3 + 0x10);
    if (*(uint *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar3 + 0x10);
      bVar5 = uVar2 == 0;
      if (bVar5) {
        *(uint *)(lVar3 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        uVar2 = uVar4;
      }
    }
  }
  param_1[1] = uVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffff;
  *(undefined1 *)(param_1 + 7) = 1;
  if (DAT_14cad83b0 == '\x01') {
    FUN_144a61b4f();
  }
  return param_1;
}



// FUNCTION 140d75dba FUN_140d75dba body=28 status=ok
// SIG undefined FUN_140d75dba(void)

void FUN_140d75dba(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined2 *)(param_2 + 1);
  uVar2 = param_2[2];
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = uVar1;
  param_1[2] = uVar2;
  return;
}



// FUNCTION 140d75dd6 FUN_140d75dd6 body=140 status=ok
// SIG undefined FUN_140d75dd6(void)

undefined8 FUN_140d75dd6(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
    lVar1 = param_1 + 0x208;
    if (*(longlong *)(param_1 + 0x210) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x210);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x218) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x1d0);
      iVar4 = iVar3;
      while (*(uint *)(lVar1 + (longlong)iVar4 * 0x20) != param_2) {
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + lVar1 + 0x18);
        if (iVar4 == -1) {
          return 0;
        }
      }
      do {
        lVar2 = lVar1 + (longlong)iVar3 * 0x20;
        if (*(uint *)(lVar1 + (longlong)iVar3 * 0x20) == param_2) goto LAB_140d75e37;
        iVar3 = *(int *)(lVar2 + 0x18);
      } while (iVar3 != -1);
      lVar2 = 0;
LAB_140d75e37:
      return *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x10);
    }
  }
  return 0;
}



// FUNCTION 140d75e62 FUN_140d75e62 body=316 status=ok
// SIG undefined FUN_140d75e62(void)

void FUN_140d75e62(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  memset(param_2,0,0x3f0);
  FUN_140d75f9e(param_2);
  *(undefined4 *)(param_2 + 0x5b) = 0;
  *(undefined2 *)((longlong)param_2 + 0x2dc) = 1;
  *param_2 = &PTR_FUN_14b9444d0;
  param_2[0x5c] = 0;
  *(undefined4 *)(param_2 + 0x5d) = 0x34001;
  param_2[0x5e] = 0;
  param_2[0x5f] = 0;
  *(undefined4 *)(param_2 + 0x60) = 0x4000;
  param_2[0x61] = 0;
  *(undefined4 *)(param_2 + 0x62) = 0x3f800000;
  param_2[99] = 0;
  param_2[100] = 0;
  param_2[0x65] = 0;
  param_2[0x66] = 0;
  param_2[0x67] = 0;
  param_2[0x68] = 0;
  param_2[0x69] = 0;
  param_2[0x6a] = 0;
  *(undefined1 *)(param_2 + 0x6b) = 0;
  *(undefined2 *)((longlong)param_2 + 0x359) = 1;
  *(undefined2 *)((longlong)param_2 + 0x35c) = 1;
  *(undefined1 *)(param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x364) = 0;
  *(undefined2 *)(param_2 + 0x6e) = 0;
  param_2[0x71] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_2[0x6f] = DAT_14c8464f8;
  param_2[0x70] = uVar1;
  *(undefined4 *)(param_2 + 0x72) = 0;
  *(undefined8 *)((longlong)param_2 + 0x394) = 0;
  *(undefined4 *)(param_2 + 0x74) = 0;
  uVar1 = DAT_14c8464e8;
  param_2[0x75] = DAT_14c8464e0;
  param_2[0x76] = uVar1;
  param_2[0x77] = DAT_14c8464f0;
  *(undefined2 *)(param_2 + 0x78) = 0;
  param_2[0x7b] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_2[0x79] = DAT_14c8464f8;
  param_2[0x7a] = uVar1;
  *(undefined4 *)(param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3e4) = 0;
  return;
}



// FUNCTION 140d75f9e FUN_140d75f9e body=540 status=ok
// SIG undefined FUN_140d75f9e(void)

undefined8 * FUN_140d75f9e(undefined8 *param_1)

{
  undefined2 uVar1;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140d761bc();
  *param_1 = &PTR_FUN_14b49c190;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 1;
  *(undefined1 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3002;
  param_1[0x1f] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0x200000000;
  FUN_1405c5fa2();
  param_1[0x29] = &DAT_14cb769e8;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = &PTR_FUN_14b0394b0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x88205021;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xf00000d0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  memset(param_1 + 0x3a,0,0x88);
  *(undefined4 *)(param_1 + 0x4b) = 0x7012;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0x7012;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined1 *)(param_1 + 0x56) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2b1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined2 *)(param_1 + 0x57) = 1;
  *(undefined4 *)((longlong)param_1 + 700) = 0x10001;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0x1000000010001;
  local_90 = 0x40200000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0xf00000d0;
  local_50 = 0;
  local_48 = 0x3f800000;
  uVar1 = FUN_1449148e0();
  *(undefined2 *)((longlong)param_1 + 0x2ba) = uVar1;
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d761bc FUN_140d761bc body=516 status=ok
// SIG undefined FUN_140d761bc(void)

undefined8 * FUN_140d761bc(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined2 uVar3;
  undefined1 auStack_b8 [40];
  undefined4 local_90 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar2 = DAT_14c844850;
  *param_1 = &PTR_FUN_14b49c1f0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x32) = 0x10001;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 1;
  param_1[8] = 0x100010001;
  *(undefined4 *)(param_1 + 9) = 0x10001;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x5b1ec67d;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x5b1ec67d;
  param_1[0xf] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < iVar2) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x10] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) & 0x80;
  local_90[0] = 0x3f000000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0xf00000d0;
  local_50 = 0;
  local_48 = 0x3f800000;
  uVar3 = FUN_1449148e0(local_90);
  *(undefined2 *)((longlong)param_1 + 0x3e) = uVar3;
  local_90[0] = 0x44fa0000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0xf00000d0;
  local_50 = 0;
  local_48 = 0x3f800000;
  uVar3 = FUN_1449148e0(local_90);
  *(undefined2 *)((longlong)param_1 + 0x3a) = uVar3;
  *(undefined2 *)(param_1 + 7) = uVar3;
  *(undefined2 *)((longlong)param_1 + 0x36) = uVar3;
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d763c2 FUN_140d763c2 body=20 status=ok
// SIG undefined FUN_140d763c2(void)

undefined8 FUN_140d763c2(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 140d763d6 FUN_140d763d6 body=1023 status=ok
// SIG undefined FUN_140d763d6(void)

void FUN_140d763d6(longlong param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined1 auStack_258 [32];
  undefined4 *local_238;
  longlong local_230;
  undefined4 local_228 [8];
  undefined1 local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined1 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1b8;
  undefined4 local_1b0 [8];
  undefined1 auStack_190 [8];
  undefined4 local_188 [10];
  undefined1 local_160 [16];
  longlong local_150;
  undefined1 local_140 [32];
  byte local_120;
  undefined1 local_118 [32];
  undefined1 local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  undefined1 local_d0 [32];
  byte local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined1 local_88 [32];
  byte local_68;
  undefined1 local_60 [32];
  longlong local_40;
  undefined4 local_38;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_230 = param_1;
  cVar1 = FUN_1402ca054(*(undefined8 *)(param_1 + 0x10),L"fps_histogram",0xd);
  if (cVar1 == '\0') {
    cVar1 = FUN_1402ca054(*(undefined8 *)(param_1 + 0x10),L"fps_aggregate",0xd);
    if (cVar1 != '\0') {
      FUN_140056680(&local_a8,&DAT_149dfb77a);
      local_238 = &local_1d8;
      local_1d8 = local_a8;
      uStack_1d4 = uStack_a4;
      uStack_1d0 = uStack_a0;
      uStack_1cc = uStack_9c;
      local_1b8 = 4;
      FUN_140d767d6(&local_f0,&DAT_14cb97c08,3,&DAT_149dfb77a);
      if ((*(longlong *)(local_f0 + 0x3c) == 0) || (*(char *)(local_f0 + 0x38) < local_e8)) {
        local_208 = 0;
        FUN_14101bd16(local_228,&DAT_149dfb77a);
        local_238 = local_228;
        FUN_140d767d6(local_160,&DAT_14cb97c08,3,&DAT_149dfb77a);
      }
      else {
        FUN_140056680(&local_a8,&DAT_149dfb77a);
        local_238 = &local_200;
        local_200 = local_a8;
        uStack_1fc = uStack_a4;
        uStack_1f8 = uStack_a0;
        uStack_1f4 = uStack_9c;
        local_1e0 = 4;
        FUN_140d767d6(local_160,&DAT_14cb97c08,3,&DAT_149dfb77a);
      }
      FUN_140d76846(&local_a8,local_160);
      (*(code *)(&PTR_FUN_14a1842f0)[local_120])(local_140);
      if (local_150 != 0) {
        FUN_1400020a8();
      }
      (*(code *)(&PTR_FUN_14a1842f0)[local_b0])(local_d0);
      if (local_e0 != 0) {
        FUN_1400020a8();
      }
      if ((*(longlong *)(CONCAT44(uStack_a4,local_a8) + 0x3c) != 0) &&
         ((char)uStack_a0 <= *(char *)(CONCAT44(uStack_a4,local_a8) + 0x38))) {
        FUN_140d76afc(&local_230,&local_a8);
      }
      FUN_1404eec70(local_30,local_28);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      FUN_1404eecb3(local_40,local_38);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      FUN_1404eec06(local_60);
      (*(code *)(&PTR_FUN_14a1842f0)[local_68])(local_88);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    local_f8 = 0;
    FUN_14101bd16(local_118,&DAT_149dfb77a);
    local_238 = (undefined4 *)local_118;
    FUN_140d767d6(&local_f0,&DAT_14cb97a50,3,&DAT_149dfb77a);
    if ((*(longlong *)(local_f0 + 0x3c) == 0) || (*(char *)(local_f0 + 0x38) < local_e8)) {
      puVar2 = local_1b0;
    }
    else {
      puVar2 = (undefined4 *)(auStack_190 + 8);
    }
    *(undefined1 *)(puVar2 + 8) = 0;
    FUN_14101bd16(puVar2,&DAT_149dfb77a);
    local_238 = puVar2;
    FUN_140d767d6(local_160,&DAT_14cb97a50,3,&DAT_149dfb77a);
    FUN_140d76846(&local_a8,local_160);
    (*(code *)(&PTR_FUN_14a1842f0)[local_120])(local_140);
    if (local_150 != 0) {
      FUN_1400020a8();
    }
    (*(code *)(&PTR_FUN_14a1842f0)[local_b0])(local_d0);
    if (local_e0 != 0) {
      FUN_1400020a8();
    }
    if ((*(longlong *)(CONCAT44(uStack_a4,local_a8) + 0x3c) != 0) &&
       ((char)uStack_a0 <= *(char *)(CONCAT44(uStack_a4,local_a8) + 0x38))) {
      FUN_140d76afc(&local_230,&local_a8);
    }
    FUN_1404eeb8e(&local_a8);
  }
  if ((local_18 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d767d6 FUN_140d767d6 body=112 status=ok
// SIG undefined FUN_140d767d6(void)

undefined8 *
FUN_140d767d6(undefined8 *param_1,undefined *param_2,char param_3,undefined8 param_4,
             longlong param_5)

{
  byte bVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_14c9a3168;
  if (param_3 <= (char)param_2[0x38]) {
    puVar2 = param_2;
  }
  if (*(longlong *)(param_2 + 0x3c) == 0) {
    puVar2 = &DAT_14c9a3168;
  }
  *param_1 = puVar2;
  *(char *)(param_1 + 1) = param_3;
  FUN_140056680(param_1 + 2,param_4);
  bVar1 = *(byte *)(param_5 + 0x20);
  *(byte *)(param_1 + 8) = bVar1;
  (*(code *)(&PTR_LAB_14a184230)[bVar1])(param_1 + 4,param_5);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_5 + 0x20)])(param_5);
  return param_1;
}



// FUNCTION 140d76846 FUN_140d76846 body=208 status=ok
// SIG undefined FUN_140d76846(void)

longlong * FUN_140d76846(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  void *_Src;
  
  *(char *)(param_1 + 1) = (char)param_2[1];
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar2 = (int)param_2[3];
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar2,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar2 * 2);
  }
  bVar1 = *(byte *)(param_2 + 8);
  *(byte *)(param_1 + 8) = bVar1;
  (*(code *)(&PTR_LAB_14a184290)[bVar1])(param_1 + 4,param_2 + 4);
  param_1[0xb] = 0;
  param_1[0xc] = 0x100000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    FUN_140d76916(param_1,0);
  }
  return param_1;
}



// FUNCTION 140d76916 FUN_140d76916 body=116 status=ok
// SIG undefined FUN_140d76916(void)

void FUN_140d76916(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    iVar1 = (int)param_1[0xc];
    if (iVar1 == 0) {
      FUN_140d76a74(param_1);
      iVar1 = (int)param_1[0xc];
    }
    plVar2 = param_1 + 9;
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0xb];
    }
    param_2 = param_2 + (int)plVar2[(longlong)(iVar1 + -1) * 2 + 1];
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (*(int *)((longlong)(plVar2 + (longlong)(iVar1 + -1) * 2) + 0xc) < param_2) {
      FUN_140d7698c(plVar2 + (longlong)(iVar1 + -1) * 2,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 140d7698c FUN_140d7698c body=231 status=ok
// SIG undefined FUN_140d7698c(void)

void FUN_140d7698c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 140d76a74 FUN_140d76a74 body=135 status=ok
// SIG undefined FUN_140d76a74(void)

longlong FUN_140d76a74(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = param_1 + 0x48;
  iVar2 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x58);
    lVar5 = lVar4;
    if (lVar4 == 0) {
      lVar5 = lVar6;
    }
    lVar3 = (longlong)(iVar2 + -1);
    if (*(int *)(lVar5 + 8 + lVar3 * 0x10) < 1) goto LAB_140d76ad9;
  }
  *(uint *)(param_1 + 0x60) = iVar2 + 1U;
  if (*(uint *)(param_1 + 100) < iVar2 + 1U) {
    FUN_1457a2a96(lVar6,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x58) == 0) {
    lVar4 = lVar6;
  }
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar4 = *(longlong *)(param_1 + 0x58);
  lVar3 = (longlong)(*(int *)(param_1 + 0x60) + -1);
LAB_140d76ad9:
  if (lVar4 != 0) {
    lVar6 = lVar4;
  }
  return lVar3 * 0x10 + lVar6;
}



// FUNCTION 140d76afc FUN_140d76afc body=846 status=ok
// SIG undefined FUN_140d76afc(void)

void FUN_140d76afc(longlong *param_1,longlong *param_2)

{
  void *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140df2970(param_2,*(undefined4 *)(*param_1 + 0x20));
  lVar9 = (longlong)*(int *)(*param_1 + 0x20);
  if (lVar9 != 0) {
    puVar11 = *(undefined8 **)(*param_1 + 0x18);
    local_60 = puVar11 + lVar9 * 2;
    do {
      FUN_140d76a74(param_2);
      FUN_140d76916(param_2,*(undefined4 *)(puVar11 + 1));
      if ((longlong)*(int *)(puVar11 + 1) != 0) {
        puVar10 = (undefined8 *)*puVar11;
        lVar9 = (longlong)*(int *)(puVar11 + 1) * 0x38;
        do {
          if (*(byte *)(puVar10 + 6) < 5) {
            switch(*(byte *)(puVar10 + 6)) {
            case 0:
              FUN_140d76916(param_2,1);
              if ((*(longlong *)(*param_2 + 0x3c) != 0) &&
                 ((char)param_2[1] <= *(char *)(*param_2 + 0x38))) {
                plVar6 = (longlong *)FUN_14027bf48(param_2);
                iVar7 = (int)plVar6[1];
                *(uint *)(plVar6 + 1) = iVar7 + 1U;
                if (*(uint *)((longlong)plVar6 + 0xc) < iVar7 + 1U) {
                  FUN_140eed74c(plVar6,iVar7);
                }
                lVar13 = *plVar6;
                lVar8 = (longlong)iVar7 * 0x30;
                *(longlong *)(lVar13 + lVar8) = (longlong)*(int *)(puVar10 + 2);
                *(undefined1 *)(lVar13 + 0x20 + lVar8) = 2;
LAB_140d76d8c:
                *(undefined8 *)(lVar13 + 0x28 + lVar8) = *puVar10;
              }
              break;
            case 1:
              FUN_140d76916(param_2,1);
              if ((*(longlong *)(*param_2 + 0x3c) != 0) &&
                 ((char)param_2[1] <= *(char *)(*param_2 + 0x38))) {
                plVar6 = (longlong *)FUN_14027bf48(param_2);
                iVar7 = (int)plVar6[1];
                *(uint *)(plVar6 + 1) = iVar7 + 1U;
                if (*(uint *)((longlong)plVar6 + 0xc) < iVar7 + 1U) {
                  FUN_140eed74c(plVar6,iVar7);
                }
                lVar13 = *plVar6;
                lVar8 = (longlong)iVar7 * 0x30;
                *(undefined8 *)(lVar13 + lVar8) = puVar10[2];
                *(undefined1 *)(lVar13 + 0x20 + lVar8) = 3;
                goto LAB_140d76d8c;
              }
              break;
            case 2:
              FUN_140d76916(param_2);
              if ((*(longlong *)(*param_2 + 0x3c) != 0) &&
                 ((char)param_2[1] <= *(char *)(*param_2 + 0x38))) {
                plVar6 = (longlong *)FUN_14027bf48();
                lVar13 = plVar6[1];
                uVar4 = (int)lVar13 + 1;
                *(uint *)(plVar6 + 1) = uVar4;
                if (*(uint *)((longlong)plVar6 + 0xc) < uVar4) {
                  FUN_140eed74c();
                }
                puVar12 = (undefined8 *)((longlong)(int)lVar13 * 0x30 + *plVar6);
                local_58 = (void *)0x0;
                local_50 = *(int *)(puVar10 + 3);
                lVar13 = (longlong)local_50;
                _Src = (void *)puVar10[2];
                if (lVar13 == 0) {
                  uVar5 = 0;
                  iVar7 = 0;
                }
                else {
                  FUN_1446dd670(&local_58,local_50,0);
                  memcpy(local_58,_Src,lVar13 * 2);
                  iVar7 = local_50;
                  uVar5 = local_4c;
                }
                *puVar12 = local_58;
                *(int *)(puVar12 + 1) = iVar7;
                *(undefined4 *)((longlong)puVar12 + 0xc) = uVar5;
                *(undefined1 *)(puVar12 + 4) = 4;
                puVar12[5] = *puVar10;
              }
              break;
            case 3:
              FUN_140d76916(param_2,1);
              FUN_148ab6276(param_2,puVar10,puVar10 + 2);
              break;
            case 4:
              FUN_140d76916(param_2,1);
              if ((*(longlong *)(*param_2 + 0x3c) != 0) &&
                 ((char)param_2[1] <= *(char *)(*param_2 + 0x38))) {
                plVar6 = (longlong *)FUN_14027bf48(param_2);
                iVar7 = (int)plVar6[1];
                *(uint *)(plVar6 + 1) = iVar7 + 1U;
                if (*(uint *)((longlong)plVar6 + 0xc) < iVar7 + 1U) {
                  FUN_140eed74c(plVar6,iVar7);
                }
                lVar13 = *plVar6;
                lVar8 = (longlong)iVar7 * 0x30;
                uVar1 = puVar10[2];
                uVar2 = puVar10[3];
                uVar3 = puVar10[5];
                puVar12 = (undefined8 *)(lVar13 + 0x10 + lVar8);
                *puVar12 = puVar10[4];
                puVar12[1] = uVar3;
                *(undefined8 *)(lVar13 + lVar8) = uVar1;
                ((undefined8 *)(lVar13 + lVar8))[1] = uVar2;
                *(undefined1 *)(lVar13 + 0x20 + lVar8) = 9;
                goto LAB_140d76d8c;
              }
            }
          }
          puVar10 = puVar10 + 7;
          lVar9 = lVar9 + -0x38;
        } while (lVar9 != 0);
      }
      puVar11 = puVar11 + 2;
    } while (puVar11 != local_60);
  }
  FUN_14027c70a(param_2);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d76e54 FUN_140d76e54 body=548 status=ok
// SIG undefined FUN_140d76e54(void)

longlong * FUN_140d76e54(longlong *param_1)

{
  longlong *_Dst;
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  ushort local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = (longlong)&PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *param_1 = (longlong)&PTR_FUN_14ac3cd40;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x15) = 4;
  *(undefined4 *)(param_1 + 0x12) = 2;
  *(undefined1 *)(param_1 + 0x16) = 2;
  *(byte *)(param_1 + 0x17) = (byte)~DAT_14c9a8754 >> 4 & 2;
  FUN_140440628(param_1 + 0x18,&DAT_14cb23cdc,0);
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  local_30 = 4;
  local_48 = 0;
  local_28 = 3;
  _Dst = param_1 + 0x21;
  if (DAT_14c9a85d0 != (code *)0x0) {
    (*DAT_14c9a85d0)(_Dst);
    if (0x18 < *(ushort *)(param_1 + 0x24)) {
      FUN_1400020a8(*_Dst);
    }
  }
  *(undefined2 *)(param_1 + 0x24) = 4;
  pcVar1 = DAT_14c9a8918;
  if ((DAT_14c9a8918 == (code *)0x0) && (pcVar1 = DAT_14c9a8910, DAT_14c9a8910 == (code *)0x0)) {
    memcpy(_Dst,&local_48,(longlong)DAT_14c9a8870);
  }
  else {
    (*pcVar1)(_Dst,&local_48);
  }
  *(undefined1 *)(param_1 + 0x25) = local_28;
  local_28 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    if (local_30 < 0x19) {
      puVar2 = &local_48;
    }
    else {
      puVar2 = (undefined4 *)CONCAT44(uStack_44,local_48);
    }
    (*DAT_14c9a85d0)(puVar2);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(CONCAT44(uStack_44,local_48));
  }
  FUN_140d770ae(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x41) = 0;
  (**(code **)(*param_1 + 0x90))(param_1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d7707a FUN_140d7707a body=52 status=ok
// SIG undefined FUN_140d7707a(void)

void FUN_140d7707a(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar1 = 1;
  uVar2 = 1;
  uVar3 = 1;
  if (*(char *)(param_1 + 0x208) == '\x01') {
    uVar1 = *(undefined1 *)(param_1 + 0x200);
    uVar2 = *(undefined1 *)(param_1 + 0x201);
    uVar3 = *(undefined1 *)(param_1 + 0x202);
  }
  *(undefined1 *)(param_1 + 0x78) = uVar1;
  *(undefined1 *)(param_1 + 0x79) = uVar2;
  *(undefined1 *)(param_1 + 0x7b) = uVar3;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  return;
}



// FUNCTION 140d770ae FUN_140d770ae body=870 status=ok
// SIG undefined FUN_140d770ae(void)

undefined8 * FUN_140d770ae(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  ushort local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  local_28 = 4;
  local_40 = 0x42c80000;
  local_20 = 3;
  puVar1 = param_1 + 1;
  if (DAT_14c9a85d0 != (code *)0x0) {
    (*DAT_14c9a85d0)(puVar1);
    if (0x18 < *(ushort *)(param_1 + 4)) {
      FUN_1400020a8(*puVar1);
    }
  }
  *(undefined2 *)(param_1 + 4) = 4;
  pcVar2 = DAT_14c9a8918;
  if ((DAT_14c9a8918 == (code *)0x0) && (pcVar2 = DAT_14c9a8910, DAT_14c9a8910 == (code *)0x0)) {
    memcpy(puVar1,&local_40,(longlong)DAT_14c9a8870);
  }
  else {
    (*pcVar2)(puVar1,&local_40);
  }
  *(undefined1 *)(param_1 + 5) = local_20;
  local_20 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    if (local_28 < 0x19) {
      puVar3 = &local_40;
    }
    else {
      puVar3 = (undefined4 *)CONCAT44(uStack_3c,local_40);
    }
    (*DAT_14c9a85d0)(puVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(CONCAT44(uStack_3c,local_40));
  }
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  local_28 = 4;
  local_40 = 0;
  local_20 = 3;
  puVar1 = param_1 + 9;
  if (DAT_14c9a85d0 != (code *)0x0) {
    (*DAT_14c9a85d0)(puVar1);
    if (0x18 < *(ushort *)(param_1 + 0xc)) {
      FUN_1400020a8(*puVar1);
    }
  }
  *(undefined2 *)(param_1 + 0xc) = 4;
  pcVar2 = DAT_14c9a8918;
  if ((DAT_14c9a8918 == (code *)0x0) && (pcVar2 = DAT_14c9a8910, DAT_14c9a8910 == (code *)0x0)) {
    memcpy(puVar1,&local_40,(longlong)DAT_14c9a8870);
  }
  else {
    (*pcVar2)(puVar1,&local_40);
  }
  *(undefined1 *)(param_1 + 0xd) = local_20;
  local_20 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    if (local_28 < 0x19) {
      puVar3 = &local_40;
    }
    else {
      puVar3 = (undefined4 *)CONCAT44(uStack_3c,local_40);
    }
    (*DAT_14c9a85d0)(puVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(CONCAT44(uStack_3c,local_40));
  }
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  local_28 = 4;
  local_40 = 0;
  local_20 = 3;
  puVar1 = param_1 + 0x11;
  if (DAT_14c9a85d0 != (code *)0x0) {
    (*DAT_14c9a85d0)(puVar1);
    if (0x18 < *(ushort *)(param_1 + 0x14)) {
      FUN_1400020a8(*puVar1);
    }
  }
  *(undefined2 *)(param_1 + 0x14) = 4;
  pcVar2 = DAT_14c9a8918;
  if ((DAT_14c9a8918 == (code *)0x0) && (pcVar2 = DAT_14c9a8910, DAT_14c9a8910 == (code *)0x0)) {
    memcpy(puVar1,&local_40,(longlong)DAT_14c9a8870);
  }
  else {
    (*pcVar2)(puVar1,&local_40);
  }
  *(undefined1 *)(param_1 + 0x15) = local_20;
  local_20 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    if (local_28 < 0x19) {
      puVar3 = &local_40;
    }
    else {
      puVar3 = (undefined4 *)CONCAT44(uStack_3c,local_40);
    }
    (*DAT_14c9a85d0)(puVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(CONCAT44(uStack_3c,local_40));
  }
  *(undefined2 *)(param_1 + 0x18) = 1;
  *(undefined1 *)((longlong)param_1 + 0xc2) = 0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d77416 FUN_140d77416 body=135 status=ok
// SIG undefined FUN_140d77416(void)

void FUN_140d77416(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140d7749e();
  local_38 = &local_41;
  local_30 = &local_40;
  local_40 = FUN_144170312;
  local_20 = &local_30;
  local_28 = FUN_14417018a;
  uVar1 = FUN_140e0b9fc();
  FUN_140e0b95c(param_1 + 0x2f8,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d7749e FUN_140d7749e body=209 status=ok
// SIG undefined FUN_140d7749e(void)

void FUN_140d7749e(longlong param_1,char param_2)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x2e0) = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      FUN_14053d8da(param_1 + 0x28,1);
    }
    if (*(char *)(*(longlong *)(param_1 + 8) + 0x3da) == '\x03') {
      FUN_1457b3e8a(param_1);
    }
    FUN_140d77570(param_1,param_1 + 0x38);
    if (*(char *)(param_1 + 0x2e1) == '\x01') {
      FUN_140e0c004(param_1,param_1 + 0xc0);
    }
  }
  if (*(longlong *)(param_1 + 0x268) != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x298);
    if (cVar2 != '\0') {
      plVar1 = *(longlong **)(param_1 + 0x268);
      uVar3 = FUN_14479d2ce(param_1 + 0x290);
      uVar4 = FUN_14479d2ce(param_1 + 0x298);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000140d7754f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar1,uVar4,uVar3,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  return;
}



// FUNCTION 140d77570 FUN_140d77570 body=631 status=ok
// SIG undefined FUN_140d77570(void)

void FUN_140d77570(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((((*(int *)(param_1 + 0x294) == 0) || (uVar4 = *(uint *)(param_1 + 0x290), (int)uVar4 < 0))
       || (DAT_14c9647dc <= (int)uVar4)) ||
      ((puVar11 = (undefined8 *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       puVar11 == (undefined8 *)0x0 || (*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x294))))) ||
     (((*(uint *)(puVar11 + 1) & 0x10200000) != 0 || (*(char *)(param_2 + 0x31) != '\x01'))))
  goto LAB_140d776d3;
  if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
    uVar12 = *puVar11;
  }
  else {
    uVar12 = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x68);
  cVar7 = FUN_1404fa388(plVar1);
  if (cVar7 != '\0') {
    lVar10 = *(longlong *)(param_2 + 0x50);
    if (lVar10 == 0) {
      uVar9 = FUN_140067708();
      lVar10 = FUN_14477b664(uVar9);
      *(longlong *)(param_2 + 0x50) = lVar10;
    }
    if (*(longlong *)(param_2 + 0x58) == 0) {
      if ((lVar10 != 0) && (*(longlong *)(param_2 + 0x48) != 0)) {
        plVar5 = *(longlong **)(lVar10 + 0xb8);
        if ((plVar5 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
          *(undefined8 *)(param_2 + 0x58) = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar5 + 0x110))(plVar5);
          lVar10 = FUN_144aff482(uVar9,(longlong *)(param_2 + 0x48));
          *(longlong *)(param_2 + 0x58) = lVar10;
          if (lVar10 != 0) goto LAB_140d7762d;
        }
      }
      uVar9 = 0;
      if ((*(char *)(param_2 + 0x38) == '\x01') && (uVar9 = 0, *(longlong *)(param_2 + 0x3c) != 0))
      goto LAB_140d7762d;
    }
    else {
LAB_140d7762d:
      plVar5 = *(longlong **)(param_2 + 0x70);
      if (plVar5 == (longlong *)0x0) {
        uVar9 = 0;
      }
      else {
        iVar8 = (int)plVar5[1];
        do {
          uVar9 = 0;
          if (iVar8 == 0) goto LAB_140d776bf;
          LOCK();
          iVar6 = (int)plVar5[1];
          bVar13 = iVar8 == iVar6;
          if (bVar13) {
            *(int *)(plVar5 + 1) = iVar8 + 1;
            iVar6 = iVar8;
          }
          iVar8 = iVar6;
          UNLOCK();
        } while (!bVar13);
        lVar10 = *plVar1;
        if (lVar10 == 0) {
          uVar9 = 0;
        }
        else {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          local_48 = lVar10;
          local_40 = plVar5;
          uVar9 = FUN_140206ee8(param_2 + 0x38);
        }
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
LAB_140d776bf:
    FUN_140bd765a(plVar1,uVar9,0);
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    local_68[0] = *(longlong *)(param_2 + 0x10);
    FUN_1400021e4(local_68,local_58);
    local_38 = *(undefined8 *)(param_2 + 0x48);
    FUN_1400021e4(&local_38,local_68);
    cVar7 = *(char *)(param_2 + 0x38);
    uVar9 = *(undefined8 *)(param_2 + 0x3c);
    lVar10 = FUN_1456e2bea(uVar12);
    if (lVar10 != 0) {
      uVar12 = 0;
      if (cVar7 != '\0') {
        uVar12 = uVar9;
      }
      FUN_1456e2c36(lVar10,local_58,local_68,uVar12);
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_140d776d3:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d777e8 FUN_140d777e8 body=703 status=ok
// SIG undefined FUN_140d777e8(void)

void FUN_140d777e8(longlong param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  void *_Src;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  
  FUN_140d77aa8();
  if (*(char *)(param_1 + 0xd3) == '\0') {
    iVar2 = *(int *)(param_1 + 0xe0);
    _Src = *(void **)(param_1 + 0xd8);
    *(int *)(param_1 + 0x100) = iVar2;
    if (iVar2 == 0 && *(int *)(param_1 + 0x104) == 0) {
      *(undefined4 *)(param_1 + 0x104) = 0;
    }
    else {
      FUN_14794afee((undefined8 *)(param_1 + 0xf8),iVar2);
      if (iVar2 != 0) {
        memcpy(*(void **)(param_1 + 0xf8),_Src,(longlong)iVar2 * 0x14);
      }
    }
  }
  else {
    plVar11 = (longlong *)(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x100) = 0;
    if (*(int *)(param_1 + 0x104) != 0) {
      FUN_14794b062(plVar11);
    }
    lVar8 = *(longlong *)(param_1 + 0xe8);
    if ((lVar8 != 0) && (iVar2 = *(int *)(lVar8 + 0x40), 0 < (longlong)iVar2)) {
      lVar12 = 0;
      do {
        lVar10 = *(longlong *)(lVar8 + 0x38);
        uVar6 = *(undefined8 *)(lVar10 + lVar12);
        uVar3 = *(undefined4 *)(lVar10 + 8 + lVar12);
        uVar4 = *(undefined4 *)(lVar10 + 0xc + lVar12);
        fVar13 = *(float *)(param_1 + 0xc4);
        fVar1 = *(float *)(param_1 + 0xf0);
        fVar14 = *(float *)(lVar10 + 0x10 + lVar12);
        iVar5 = *(int *)(param_1 + 0x100);
        lVar10 = (longlong)iVar5;
        *(uint *)(param_1 + 0x100) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x104) < iVar5 + 1U) {
          FUN_14794b092(plVar11,iVar5);
        }
        fVar13 = (float)((uint)(1.0 / (fVar13 * 2.7182817)) & -(uint)(1.1920929e-07 < fVar13));
        if (1.0 <= fVar14) {
          fVar14 = 1.0;
        }
        if (fVar14 <= 0.0) {
          fVar14 = 0.0;
        }
        fVar13 = ((float)((uint)(1.0 / (fVar1 * 2.7182817)) & -(uint)(1.1920929e-07 < fVar1)) -
                 fVar13) * fVar14 + fVar13;
        lVar7 = *plVar11;
        *(undefined8 *)(lVar7 + lVar10 * 0x14) = uVar6;
        *(undefined4 *)(lVar7 + 8 + lVar10 * 0x14) = uVar3;
        *(undefined4 *)(lVar7 + 0xc + lVar10 * 0x14) = uVar4;
        *(uint *)(lVar7 + 0x10 + lVar10 * 0x14) =
             (uint)(1.0 / (fVar13 * 2.7182817)) & -(uint)(1.1920929e-07 < fVar13);
        lVar12 = lVar12 + 0x14;
      } while ((longlong)iVar2 * 0x14 != lVar12);
    }
  }
  if ((longlong)*(int *)(param_1 + 0x100) != 0) {
    plVar11 = *(longlong **)(param_1 + 0xf8);
    lVar8 = *(longlong *)(param_1 + 0x40);
    lVar12 = (longlong)*(int *)(param_1 + 0x100) * 0x14;
    do {
      if ((lVar8 == 0) || (*plVar11 == 0)) {
        *(uint *)(plVar11 + 1) = *(uint *)(plVar11 + 1) | 0x7fffffff;
      }
      else {
        uVar9 = FUN_144a750a0(lVar8 + 0x50,plVar11);
        *(uint *)(plVar11 + 1) = uVar9 | 0x80000000;
      }
      *(undefined4 *)((longlong)plVar11 + 0xc) = 0xffffffff;
      plVar11 = (longlong *)((longlong)plVar11 + 0x14);
      lVar12 = lVar12 + -0x14;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 140d77aa8 FUN_140d77aa8 body=310 status=ok
// SIG undefined FUN_140d77aa8(void)

void FUN_140d77aa8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar3 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  if (param_1[8] != 0) {
    iVar1 = *(int *)(param_1[8] + 0xc);
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
    iVar4 = iVar1 + 0xffff;
    if (-1 < iVar1) {
      iVar4 = iVar1;
    }
    if ((iVar4 >> 0x10 < DAT_14c964390) &&
       (lVar2 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar4 >> 0x10) * 0x10), lVar2 != 0)) {
      lVar2 = *(longlong *)(lVar2 + (longlong)(iVar1 % 0x10000) * 0x10);
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
      if (lVar2 != 0) {
        FUN_1427ff290(lVar2 + 0x240,param_1[8]);
      }
    }
    else {
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d77bee FUN_140d77bee body=40 status=ok
// SIG undefined FUN_140d77bee(void)

undefined8 FUN_140d77bee(undefined8 param_1,int param_2)

{
  FUN_140d77c16();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d77c16 FUN_140d77c16 body=378 status=ok
// SIG undefined FUN_140d77c16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d77c16(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b322f60;
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140d77d90(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140d77d21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140d77d90 FUN_140d77d90 body=51 status=ok
// SIG undefined FUN_140d77d90(void)

void FUN_140d77d90(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d77dda FUN_140d77dda body=634 status=ok
// SIG undefined FUN_140d77dda(void)

void FUN_140d77dda(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  
  plVar5 = (longlong *)FUN_1404d56e0();
  if (plVar5 != (longlong *)0x0) {
    uVar6 = FUN_140d78054();
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar6);
    if (plVar5 != (longlong *)0x0) {
      uVar6 = FUN_140d78054();
      plVar7 = (longlong *)FUN_144718840(plVar5,uVar6);
      if ((plVar5 != plVar7) && (plVar7 != (longlong *)0x0)) {
        iVar2 = *(int *)(param_1 + 0x870);
        if (iVar2 == 0) {
          uVar18 = 1;
          uVar19 = 0;
          iVar14 = 0;
          iVar11 = 0;
        }
        else {
          puVar8 = *(uint **)(param_1 + 0x868);
          if (*(uint **)(param_1 + 0x868) == (uint *)0x0) {
            puVar8 = (uint *)(param_1 + 0x858);
          }
          uVar17 = *puVar8;
          if (uVar17 == 0) {
            iVar14 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar14 = iVar2 + -1;
            }
            uVar19 = 0;
            uVar18 = (ulonglong)(uint)(iVar14 >> 5);
            if (iVar14 >> 5 < 1) {
              uVar18 = uVar19;
            }
            iVar11 = 0;
            do {
              if (uVar18 == uVar19) {
                return;
              }
              iVar11 = iVar11 + 0x20;
              uVar17 = puVar8[uVar19 + 1];
              uVar19 = uVar19 + 1;
            } while (uVar17 == 0);
          }
          else {
            uVar19 = 0;
            iVar11 = 0;
          }
          uVar18 = (ulonglong)(-uVar17 & uVar17);
          uVar1 = uVar18 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar14 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar14) {
            iVar14 = iVar2;
          }
        }
        if (iVar14 != iVar2) {
          uVar17 = 0xffffffff;
          iVar4 = iVar2;
          do {
            lVar16 = *(longlong *)(param_1 + 0x848);
            lVar15 = (longlong)iVar14 * 0x30;
            lVar20 = (longlong)*(int *)(lVar16 + 0x20 + lVar15);
            if (lVar20 != 0) {
              lVar3 = *(longlong *)(lVar16 + 0x18 + lVar15);
              lVar12 = 0;
              do {
                (**(code **)(*plVar7 + 0x10))
                          (plVar7,lVar16 + lVar15,*(undefined8 *)(lVar3 + lVar12));
                lVar12 = lVar12 + 8;
              } while (lVar20 * 8 != lVar12);
              iVar4 = *(int *)(param_1 + 0x870);
            }
            uVar17 = uVar17 & ~(uint)uVar18;
            puVar8 = *(uint **)(param_1 + 0x868);
            if (*(uint **)(param_1 + 0x868) == (uint *)0x0) {
              puVar8 = (uint *)(param_1 + 0x858);
            }
            iVar14 = (int)uVar19;
            lVar16 = (longlong)iVar14;
            uVar13 = puVar8[lVar16] & uVar17;
            if (uVar13 == 0) {
              iVar9 = iVar4 + 0x1e;
              if (-1 < iVar4 + -1) {
                iVar9 = iVar4 + -1;
              }
              iVar9 = iVar9 >> 5;
              iVar11 = iVar11 + 0x20;
              iVar10 = iVar9;
              if (iVar9 < iVar14) {
                iVar10 = iVar14;
              }
              if (iVar14 < iVar9) {
                lVar15 = 0;
                do {
                  uVar13 = puVar8[lVar16 + lVar15 + 1];
                  if (uVar13 != 0) {
                    uVar19 = (ulonglong)(iVar14 + (int)lVar15 + 1);
                    uVar17 = 0xffffffff;
                    goto LAB_140d77fca;
                  }
                  iVar11 = iVar11 + 0x20;
                  lVar15 = lVar15 + 1;
                } while (iVar10 - lVar16 != lVar15);
                uVar17 = 0xffffffff;
                iVar14 = iVar10;
              }
              uVar19 = (ulonglong)(iVar14 + 1);
              iVar14 = iVar4;
            }
            else {
LAB_140d77fca:
              uVar18 = (ulonglong)(-uVar13 & uVar13);
              uVar1 = uVar18 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              iVar14 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
              if (iVar4 <= iVar14) {
                iVar14 = iVar4;
              }
            }
          } while (iVar14 != iVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d78054 FUN_140d78054 body=228 status=ok
// SIG undefined FUN_140d78054(void)

longlong FUN_140d78054(void)

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
  if (DAT_14cb91570 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1489f208f;
    local_40 = FUN_14656958d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEnhancedInput",L"GbxLiveInputModifier",&DAT_14cb91570,&DAT_1489f208e)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb91570;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d78140 FUN_140d78140 body=57 status=ok
// SIG undefined FUN_140d78140(void)

void FUN_140d78140(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aab0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aab0 = FUN_140002ddd(FUN_1464cb948,uVar1,L"GbxBrainAspect_EngagePlayers");
  }
  return;
}



// FUNCTION 140d78188 FUN_140d78188 body=147 status=ok
// SIG undefined FUN_140d78188(void)

undefined8 * FUN_140d78188(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6aa7b0;
  if (param_1[0x8c] != 0) {
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d7821c FUN_140d7821c body=21 status=ok
// SIG undefined FUN_140d7821c(void)

undefined8 FUN_140d7821c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140d78232 FUN_140d78232 body=474 status=ok
// SIG undefined FUN_140d78232(void)

void FUN_140d78232(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  iVar1 = *(int *)(param_1 + 0x178);
  if (iVar1 == 0) {
    uVar14 = 1;
    uVar13 = 0;
    iVar11 = 0;
    iVar9 = 0;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0x170);
    if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
      puVar3 = (uint *)(param_1 + 0x160);
    }
    uVar10 = *puVar3;
    if (uVar10 == 0) {
      iVar11 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar11 = iVar1 + -1;
      }
      uVar13 = 0;
      uVar7 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar7 = uVar13;
      }
      iVar11 = 0;
      do {
        if (uVar7 == uVar13) {
          return;
        }
        iVar11 = iVar11 + 0x20;
        uVar10 = puVar3[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar13 = 0;
      iVar11 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar7 = uVar14 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar9 = (iVar11 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar9) {
      iVar9 = iVar1;
    }
  }
  if (iVar9 != iVar1) {
    uVar10 = 0xffffffff;
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x150) + 8 + (longlong)iVar9 * 0x20);
      if (lVar6 != 0) {
        lVar6 = lVar6 + 0x560;
        if (*param_3 == -1) {
          FUN_1400bc8c2(lVar6,&DAT_14cb94680);
        }
        else {
          FUN_1400bc96c(lVar6,&DAT_14cb94680);
        }
      }
      uVar10 = uVar10 & ~(uint)uVar14;
      puVar3 = *(uint **)(param_1 + 0x170);
      if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
        puVar3 = (uint *)(param_1 + 0x160);
      }
      iVar2 = *(int *)(param_1 + 0x178);
      iVar9 = (int)uVar13;
      lVar6 = (longlong)iVar9;
      uVar8 = puVar3[lVar6] & uVar10;
      if (uVar8 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar5 = iVar4;
        if (iVar4 < iVar9) {
          iVar5 = iVar9;
        }
        if (iVar9 < iVar4) {
          lVar12 = 0;
          do {
            uVar8 = puVar3[lVar6 + lVar12 + 1];
            if (uVar8 != 0) {
              uVar13 = (ulonglong)(iVar9 + (int)lVar12 + 1);
              uVar10 = 0xffffffff;
              goto LAB_140d7831d;
            }
            iVar11 = iVar11 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar5 - lVar6 != lVar12);
          uVar10 = 0xffffffff;
          iVar9 = iVar5;
        }
        uVar13 = (ulonglong)(iVar9 + 1);
        iVar9 = iVar2;
      }
      else {
LAB_140d7831d:
        uVar14 = (ulonglong)(-uVar8 & uVar8);
        uVar7 = uVar14 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar9 = (iVar11 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar9) {
          iVar9 = iVar2;
        }
      }
    } while (iVar9 != iVar1);
  }
  return;
}



// FUNCTION 140d7840c FUN_140d7840c body=40 status=ok
// SIG undefined FUN_140d7840c(void)

undefined8 FUN_140d7840c(undefined8 param_1,int param_2)

{
  FUN_140d78434();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d78434 FUN_140d78434 body=231 status=ok
// SIG undefined FUN_140d78434(void)

void FUN_140d78434(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_14b9508c0;
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0xbc) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0xbc) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  plVar4 = (longlong *)param_1[0x15];
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
  FUN_140d7851c(param_1);
  return;
}



// FUNCTION 140d7851c FUN_140d7851c body=409 status=ok
// SIG undefined FUN_140d7851c(void)

void FUN_140d7851c(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_14b4a6120;
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x94) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x94) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x11) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x11) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x11) = 0;
  }
  FUN_144760e21(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140d786b6 FUN_140d786b6 body=148 status=ok
// SIG undefined FUN_140d786b6(void)

void FUN_140d786b6(longlong param_1)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_1 + 0x2540);
  lVar3 = FUN_140d7874a(puVar1);
  if (lVar3 != 0) {
    uVar4 = FUN_140d7874a(puVar1);
    FUN_140d7892c(uVar4,param_1 + -0x3a30,0,param_1 + 0x2568);
  }
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x2548) = 0;
  *(undefined8 *)(param_1 + 0x2550) = 0;
  *(undefined4 *)(param_1 + 0x2560) = 0;
  if (*(int *)(param_1 + 0x2564) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x2558),0);
  }
  puVar2 = *(undefined2 **)(param_1 + 0x2558);
  if (puVar2 != (undefined2 *)0x0) {
    *puVar2 = 0;
  }
  *(undefined8 *)(param_1 + 0x2568) = 0;
  return;
}



// FUNCTION 140d7874a FUN_140d7874a body=252 status=ok
// SIG undefined FUN_140d7874a(void)

longlong FUN_140d7874a(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar4);
      if (lVar4 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar3 = FUN_140d78846();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 140d78846 FUN_140d78846 body=228 status=ok
// SIG undefined FUN_140d78846(void)

longlong FUN_140d78846(void)

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
  if (DAT_14cbaf968 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14594c146;
    local_38 = &LAB_148c4a633;
    local_40 = &LAB_140907954;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x270;
    FUN_14081cfa3(L"/Script/OakGame",L"OakTrickOptions",&DAT_14cbaf968,&DAT_148c4a632);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaf968;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d7892c FUN_140d7892c body=576 status=ok
// SIG undefined FUN_140d7892c(void)

void FUN_140d7892c(longlong param_1,longlong *param_2,char param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  uint local_88;
  uint local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != (longlong *)0x0) {
    if (DAT_14cb94538 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_148a18249;
      local_60 = FUN_14657713c;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
    }
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14cb94538);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14cb94538 == 0) {
        local_50 = &local_30;
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_1427b09ee;
        local_58 = &LAB_148a18249;
        local_60 = FUN_14657713c;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb94538);
      if ((plVar1 != plVar2) && (plVar2 != (longlong *)0x0)) {
        uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
        if (param_3 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
        }
        local_80 = local_80 & 0xffffff00;
        local_88 = local_88 & 0xffffff00;
        FUN_140d78b8a(uVar3,*param_4,*(undefined4 *)(param_1 + 0x20c),1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d78b8a FUN_140d78b8a body=353 status=ok
// SIG undefined FUN_140d78b8a(void)

void FUN_140d78b8a(longlong param_1,undefined8 param_2,uint param_3,char param_4,undefined1 param_5,
                  char param_6)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 unaff_RBP;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  char local_51;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = param_1 + 0xb0;
  lVar3 = 0;
  local_51 = param_4;
  do {
    if ((param_3 >> ((uint)lVar3 & 0x1f) & 1) != 0) {
      local_50 = param_2;
      FUN_1400bc96c(lVar5,&local_50);
    }
    lVar3 = lVar3 + 1;
    lVar5 = lVar5 + 0x28;
  } while (lVar3 != 4);
  if ((local_51 != '\0') && (0 < *(int *)(param_1 + 0xa8))) {
    iVar4 = 0;
    do {
      local_68 = 0;
      FUN_140d78d10(param_1,iVar4,param_3,
                    CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xa8));
  }
  if ((param_6 != '\0') && (plVar6 = *(longlong **)(param_1 + 0x150), plVar6 != (longlong *)0x0)) {
    if ((char)plVar6[0x2f] == '\x03') {
      if (plVar6[0x78] == 0) goto LAB_140d78c32;
      cVar1 = (**(code **)(*plVar6 + 0x700))(plVar6);
      plVar6 = *(longlong **)(param_1 + 0x150);
      if (cVar1 == '\0') goto LAB_140d78cc5;
      if ((plVar6 == (longlong *)0x0) || ((char)plVar6[0x2f] == '\x03')) goto LAB_140d78c32;
    }
    cVar1 = (**(code **)(*plVar6 + 0x700))(plVar6);
    if (cVar1 != '\0') {
      plVar6 = *(longlong **)(param_1 + 0x150);
LAB_140d78cc5:
      uVar2 = FUN_141262f1a();
      FUN_144718840(plVar6,uVar2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
  }
LAB_140d78c32:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d78d10 FUN_140d78d10 body=1022 status=ok
// SIG undefined FUN_140d78d10(void)

void FUN_140d78d10(longlong param_1,uint param_2,ulonglong param_3,char param_4,char param_5)

{
  undefined8 *puVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  char local_51;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_51 = param_4;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xa8))) {
    lVar9 = (ulonglong)param_2 * 0x170;
    plVar10 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x20 + lVar9);
    if ((plVar10 != (longlong *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(plVar10);
    }
    else if (plVar10 == (longlong *)0x0) goto LAB_140d78e7b;
    if ((((param_3 & 2) != 0) && (*(char *)((longlong)plVar10 + 0xd44) == '\0')) &&
       (plVar5 = *(longlong **)(param_1 + 0x150), plVar5 != (longlong *)0x0)) {
      if (DAT_14cb6fd70 == 0) {
        local_70 = &local_50;
        local_50 = FUN_1449e2820;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_1427b09ee;
        local_78 = &LAB_1487a9cc9;
        local_80 = FUN_1465433f8;
        local_88 = L"Engine";
        local_90 = 0;
        local_98 = 0x10004001;
        local_a0 = 8;
        local_a8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
      }
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,DAT_14cb6fd70);
      if (plVar5 != (longlong *)0x0) {
        if (DAT_14cb6fd70 == 0) {
          local_70 = &local_50;
          local_50 = FUN_1449e2820;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_1427b09ee;
          local_78 = &LAB_1487a9cc9;
          local_80 = FUN_1465433f8;
          local_88 = L"Engine";
          local_90 = 0;
          local_98 = 0x10004001;
          local_a0 = 8;
          local_a8 = 0x28;
          FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
        }
        plVar6 = (longlong *)FUN_144718840(plVar5,DAT_14cb6fd70);
        if ((plVar5 != plVar6) && (plVar6 != (longlong *)0x0)) {
          if (local_51 != '\0') {
            lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6);
            *(undefined1 *)(lVar7 + 3) = 0;
          }
          (**(code **)(*plVar6 + 0x80))(plVar6,0,1);
        }
      }
    }
    if ((param_3 & 1) != 0) {
      if ((int)param_2 < *(int *)(param_1 + 0xa8)) {
        pbVar2 = (byte *)(*(longlong *)(param_1 + 0xa0) + 0x68 + lVar9);
        *pbVar2 = *pbVar2 & 0xfd;
      }
      if ((local_51 != '\0') && ((int)param_2 < *(int *)(param_1 + 0xa8))) {
        puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0xa0) + 0x60 + lVar9);
        *puVar3 = *puVar3 & 0xfffffffffffffffe;
      }
      (**(code **)(*plVar10 + 0x828))(plVar10,0,1);
    }
    if ((param_3 & 4) != 0) {
      FUN_140d79136(plVar10);
      if ((param_2 == 0) && (*(longlong *)(param_1 + 0x160) != 0)) {
        puVar1 = (undefined8 *)(param_1 + 0x160);
        uVar8 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0x150));
        lVar9 = FUN_144a61814(uVar8,puVar1);
        if (lVar9 != 0) {
          FUN_1405a424c(uVar8,*puVar1);
        }
        *puVar1 = 0;
      }
    }
    if ((param_3 & 8) != 0) {
      FUN_140d7917a(plVar10);
    }
  }
LAB_140d78e7b:
  if ((param_5 != '\0') && (plVar10 = *(longlong **)(param_1 + 0x150), plVar10 != (longlong *)0x0))
  {
    if ((char)plVar10[0x2f] == '\x03') {
      if (plVar10[0x78] == 0) goto LAB_140d78e80;
      cVar4 = (**(code **)(*plVar10 + 0x700))(plVar10);
      plVar10 = *(longlong **)(param_1 + 0x150);
      if (cVar4 == '\0') goto LAB_140d78f1d;
      if ((plVar10 == (longlong *)0x0) || ((char)plVar10[0x2f] == '\x03')) goto LAB_140d78e80;
    }
    cVar4 = (**(code **)(*plVar10 + 0x700))(plVar10);
    if (cVar4 != '\0') {
      plVar10 = *(longlong **)(param_1 + 0x150);
LAB_140d78f1d:
      uVar8 = FUN_141262f1a();
      FUN_144718840(plVar10,uVar8);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
    }
  }
LAB_140d78e80:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d79136 FUN_140d79136 body=68 status=ok
// SIG undefined FUN_140d79136(void)

void FUN_140d79136(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0xd60) == DAT_14cb95100) {
    bVar1 = *(byte *)(param_1 + 0xbd8);
    if ((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) {
      plVar2 = *(longlong **)
                (*(longlong *)(param_1 + 0xbe8) + 0x20 +
                (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140d79173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x308))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 140d7917a FUN_140d7917a body=137 status=ok
// SIG undefined FUN_140d7917a(void)

void FUN_140d7917a(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 unaff_RBX;
  
  if (((*(longlong *)(param_1 + 0xd60) == DAT_14cb94e48) &&
      (plVar2 = *(longlong **)(param_1 + 0x1b0), plVar2 != (longlong *)0x0)) &&
     ((cVar3 = (**(code **)(*plVar2 + 0x700))(plVar2), cVar3 != '\0' ||
      ((plVar2[0x78] == 0 && (*(char *)(param_1 + 0x178) == '\x03')))))) {
    uVar1 = *(undefined1 *)(param_1 + 0xba9);
    FUN_1408bd412(param_1,&DAT_14cb95128);
    if (*(char *)(param_1 + 0x178) != '\x03') {
      FUN_148a0d602(param_1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,
                    *(undefined1 *)(param_1 + 0xbd8));
      return;
    }
  }
  return;
}



// FUNCTION 140d79204 FUN_140d79204 body=896 status=ok
// SIG undefined FUN_140d79204(void)

void FUN_140d79204(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48 [6];
  
  local_48[5] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48[4] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1468d96f0;
      local_80 = 0;
      local_88 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 4);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_48 + 4);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_48 + 4);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48[4] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_48 + 4);
    }
  }
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1403a682c;
      local_80 = 0;
      local_88 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_48);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1403de7ba(&local_68,local_48);
  uVar4 = FUN_140d79586(local_48[4],&local_68);
  *param_3 = uVar4;
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[5] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d79586 FUN_140d79586 body=255 status=ok
// SIG undefined FUN_140d79586(void)

ulonglong FUN_140d79586(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1401b0f18();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1401b0f18();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      uVar6 = 0;
      if ((plVar2 == plVar3) || (plVar3 == (longlong *)0x0)) goto LAB_140d795b6;
      lVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
      if ((longlong)(int)param_2[1] != 0) {
        plVar3 = (longlong *)*param_2;
        plVar2 = plVar3 + (int)param_2[1];
        do {
          if (*(int *)(lVar4 + 0x80) != 0) {
            lVar5 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0x78) + lVar5) == *plVar3) goto LAB_140d7967d;
              lVar5 = lVar5 + 8;
            } while ((longlong)*(int *)(lVar4 + 0x80) << 3 != lVar5);
          }
          if ((longlong)*(int *)(lVar4 + 0x90) != 0) {
            lVar5 = *(longlong *)(lVar4 + 0x88);
            lVar7 = 0;
            do {
              if (*(longlong *)(lVar5 + lVar7) == *plVar3) goto LAB_140d7967d;
              lVar7 = lVar7 + 8;
            } while ((longlong)*(int *)(lVar4 + 0x90) * 8 != lVar7);
          }
          plVar3 = plVar3 + 1;
          uVar6 = 0;
        } while (plVar3 != plVar2);
        goto LAB_140d795b6;
      }
    }
  }
  uVar6 = 0;
LAB_140d795b6:
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return uVar6 & 0xffffffff;
LAB_140d7967d:
  uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
  goto LAB_140d795b6;
}



// FUNCTION 140d79686 FUN_140d79686 body=15 status=ok
// SIG undefined FUN_140d79686(void)

undefined8 FUN_140d79686(undefined8 *param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  pbVar1 = (byte *)*param_1;
  if (pbVar1 != (byte *)0x0) {
    if (((*pbVar1 & 0x6b) == 1) &&
       ((((pbVar1 = *(byte **)(pbVar1 + 8), pbVar1 == (byte *)0x0 || ((*pbVar1 | 0x20) != 0x6e)) ||
         ((pbVar1[1] | 0x20) != 0x6f)) ||
        ((((pbVar1[2] | 0x20) != 0x6e || ((pbVar1[3] | 0x20) != 0x65)) || (pbVar1[4] != 0)))))) {
      uVar2 = CONCAT71((int7)((ulonglong)pbVar1 >> 8),1);
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 140d79696 FUN_140d79696 body=79 status=ok
// SIG undefined FUN_140d79696(void)

undefined8 FUN_140d79696(byte *param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  if (((*param_1 & 0x6b) == 1) &&
     ((((pbVar1 = *(byte **)(param_1 + 8), pbVar1 == (byte *)0x0 || ((*pbVar1 | 0x20) != 0x6e)) ||
       ((pbVar1[1] | 0x20) != 0x6f)) ||
      ((((pbVar1[2] | 0x20) != 0x6e || ((pbVar1[3] | 0x20) != 0x65)) || (pbVar1[4] != 0)))))) {
    uVar2 = CONCAT71((int7)((ulonglong)pbVar1 >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 140d796e5 FUN_140d796e5 body=358 status=ok
// SIG undefined FUN_140d796e5(void)

longlong * FUN_140d796e5(longlong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  uint local_48 [6];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = DAT_14cbd04b8;
  local_58 = DAT_14cbd04b0;
  FUN_1448075d0(local_48);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar3 = &DAT_14c9a1288;
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar3[2] != *(int *)((longlong)plVar3 + 0x3c)) {
      plVar5 = plVar3 + 8;
      if ((longlong *)plVar3[9] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar3[9];
      }
      iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar3[10] - 1U & local_48[0]) * 4);
      if (iVar6 != -1) {
        do {
          lVar2 = *plVar3 + (longlong)iVar6 * 0x40;
          if (*(uint *)(*plVar3 + (longlong)iVar6 * 0x40) == local_48[0]) {
            if ((((lVar2 != 0) &&
                 (puVar4 = (undefined8 *)(lVar2 + 0x28), puVar4 != (undefined8 *)0x0)) &&
                ((byte *)*puVar4 != (byte *)0x0)) && ((*(byte *)*puVar4 & 0x40) == 0))
            goto LAB_140d7979a;
            break;
          }
          iVar6 = *(int *)(lVar2 + 0x38);
        } while (iVar6 != -1);
      }
    }
  }
  puVar4 = &DAT_14c9a1308;
LAB_140d7979a:
  lVar2 = FUN_140d7984c(puVar4,0);
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  FUN_14021300e(&local_58,0x7b2,1,1);
  *param_1 = lVar2 * 10000000 + local_58;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140d7984c FUN_140d7984c body=43 status=ok
// SIG undefined FUN_140d7984c(void)

longlong FUN_140d7984c(undefined8 *param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  
  pbVar1 = (byte *)*param_1;
  if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x6b) == 1)) &&
     (*(char **)(pbVar1 + 8) != (char *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140d7986c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = _strtoi64(*(char **)(pbVar1 + 8),(char **)0x0,0);
    return lVar2;
  }
  return param_2;
}



// FUNCTION 140d79878 FUN_140d79878 body=1779 status=ok
// SIG undefined FUN_140d79878(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d79878(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  *param_1 = &PTR_FUN_14b419eb0;
  if (param_1[0xee] != 0) {
    FUN_1400020a8();
  }
  FUN_1409c6338(param_1 + 0xc6);
  FUN_141103083(param_1[0xbe],*(undefined4 *)(param_1 + 0xbf));
  if (param_1[0xbe] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d9938(param_1[0xbc],*(undefined4 *)(param_1 + 0xbd));
  if (param_1[0xbc] != 0) {
    FUN_1400020a8();
  }
  FUN_143df349c(param_1[0xba],*(undefined4 *)(param_1 + 0xbb));
  if (param_1[0xba] != 0) {
    FUN_1400020a8();
  }
  FUN_14189d254(param_1[0xb8],*(undefined4 *)(param_1 + 0xb9));
  if (param_1[0xb8] != 0) {
    FUN_1400020a8();
  }
  param_1[0xb3] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  if (*(int *)((longlong)param_1 + 0x5b4) != 0) {
    FUN_140115c12(param_1 + 0xb5,0);
  }
  param_1[0xb4] = 0;
  if (param_1[0xb5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa8] != 0) {
    FUN_1400020a8();
  }
  param_1[0xa0] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  if (*(int *)((longlong)param_1 + 0x51c) != 0) {
    FUN_140115c12(param_1 + 0xa2,0);
  }
  param_1[0xa1] = 0;
  if (param_1[0xa2] != 0) {
    FUN_1400020a8();
  }
  if ((param_1[0x9e] != 0) && (*(int *)(param_1 + 0x9f) != -1)) {
    *(undefined4 *)(param_1 + 0x9f) = 0xffffffff;
  }
  if (param_1[0x99] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x97] != 0) {
    FUN_1400020a8();
  }
  FUN_14189d227(param_1[0x95],*(undefined4 *)(param_1 + 0x96));
  if (param_1[0x95] != 0) {
    FUN_1400020a8();
  }
  FUN_14189d227(param_1[0x93],*(undefined4 *)(param_1 + 0x94));
  if (param_1[0x93] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x92) = 0;
  if (param_1[0x91] != 0) {
    FUN_1400020a8();
  }
  FUN_140bc0814(param_1 + 0x89);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x7f;
  puVar2 = (uint *)(param_1 + 0x81);
  iVar4 = *(int *)(param_1 + 0x84);
  if (iVar4 == 0) {
    uVar15 = 0;
    uVar16 = 1;
    iVar12 = 0;
    iVar8 = 0;
  }
  else {
    puVar9 = (uint *)param_1[0x83];
    if ((uint *)param_1[0x83] == (uint *)0x0) {
      puVar9 = puVar2;
    }
    uVar14 = *puVar9;
    if (uVar14 == 0) {
      iVar12 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar12 = iVar4 + -1;
      }
      uVar15 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar11 == uVar15) goto LAB_140d79ad1;
        iVar12 = iVar12 + 0x20;
        uVar14 = puVar9[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar11 = uVar16 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar8 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar8) {
      iVar8 = iVar4;
    }
  }
  if (iVar8 < iVar4) {
    uVar14 = 0xffffffff;
    do {
      if (*(longlong *)(*plVar1 + 8 + (longlong)iVar8 * 0x20) != 0) {
        FUN_1400020a8();
        iVar4 = *(int *)(param_1 + 0x84);
      }
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar9 = (uint *)param_1[0x83];
      if ((uint *)param_1[0x83] == (uint *)0x0) {
        puVar9 = puVar2;
      }
      iVar8 = (int)uVar15;
      lVar13 = (longlong)iVar8;
      uVar5 = puVar9[lVar13] & uVar14;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar8) {
          iVar7 = iVar8;
        }
        if (iVar6 <= iVar8) break;
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar5 = puVar9[lVar13 + lVar10 + 1];
          if (uVar5 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar7 - lVar13 == lVar10) goto LAB_140d79ad1;
        }
        uVar15 = (ulonglong)(iVar8 + (int)lVar10 + 1);
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar5 & uVar5);
      uVar11 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_140d79ad1:
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)((longlong)param_1 + 0x404) != 0) {
    FUN_1446f4a44(plVar1,0);
  }
  param_1[0x85] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x424)) {
    *(undefined4 *)((longlong)param_1 + 0x424) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x7e) = 0;
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x76) = 0;
  if (*(int *)((longlong)param_1 + 0x3b4) != 0) {
    FUN_1446f4a44(param_1 + 0x75,0);
  }
  param_1[0x7b] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3d4)) {
    *(undefined4 *)((longlong)param_1 + 0x3d4) = 0x80;
    FUN_1446efbd8(param_1 + 0x77,0);
  }
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  FUN_1406b4478(param_1[0x73],*(undefined4 *)(param_1 + 0x74));
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  FUN_140d32e71(param_1[0x71],*(undefined4 *)(param_1 + 0x72));
  if (param_1[0x71] != 0) {
    FUN_1400020a8();
  }
  FUN_1409c4f32(param_1[0x6f],*(undefined4 *)(param_1 + 0x70));
  if (param_1[0x6f] != 0) {
    FUN_1400020a8();
  }
  FUN_1409c600c(param_1 + 0x3a);
  FUN_1409c6338(param_1 + 0x16);
  FUN_140d3292b(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14029e8dd(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_140d32de3(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_140d32ae8(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_140d32a1c(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b351e60;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1406e9484(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar3 = (undefined8 *)param_1[1], puVar3 != (undefined8 *)0x0)) {
    if (puVar3[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar3 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x000140d79d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140d79f6c FUN_140d79f6c body=974 status=ok
// SIG undefined FUN_140d79f6c(void)

void FUN_140d79f6c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ab7f540;
  param_1[5] = &PTR_FUN_14ab801b0;
  param_1[6] = &PTR_LAB_14ab801f0;
  param_1[0x2f] = &PTR_FUN_14ab80240;
  param_1[0x3c] = &PTR_FUN_14ab80380;
  param_1[0x3d] = &PTR_FUN_14ab80410;
  param_1[0x20b] = &PTR_FUN_14ab80468;
  param_1[0x238] = &PTR_FUN_14ab80480;
  if (*(char *)(param_1 + 0x36d) == '\x01') {
    *(undefined1 *)(param_1 + 0x36d) = 0;
  }
  if (param_1[0x36a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x361] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x357] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x351) == '\x01') {
    *(undefined1 *)(param_1 + 0x351) = 0;
  }
  if (*(char *)(param_1 + 0x34a) == '\x01') {
    *(undefined1 *)(param_1 + 0x34a) = 0;
  }
  if (*(char *)(param_1 + 0x33c) == '\x01') {
    *(undefined1 *)(param_1 + 0x33c) = 0;
  }
  plVar3 = (longlong *)param_1[0x336];
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
  plVar3 = (longlong *)param_1[0x308];
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
  if (*(char *)(param_1 + 0x300) == '\x01') {
    if (param_1[0x2fe] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x300) = 0;
  }
  if (*(char *)(param_1 + 0x2e1) == '\x01') {
    FUN_140302978(param_1 + 0x2bd);
    *(undefined1 *)(param_1 + 0x2e1) = 0;
  }
  if (*(char *)(param_1 + 699) == '\x01') {
    if (*(char *)(param_1 + 0x2ba) == '\x01') {
      if (param_1[0x2b8] != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0x2ba) = 0;
    }
    *(undefined1 *)(param_1 + 699) = 0;
  }
  if (*(char *)(param_1 + 0x2ab) == '\x01') {
    *(undefined1 *)(param_1 + 0x2ab) = 0;
  }
  plVar3 = (longlong *)param_1[0x2a6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x2a4];
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
  FUN_144760e21(param_1[0x29a],*(undefined4 *)(param_1 + 0x29b));
  if (param_1[0x29a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x298] != 0) {
    FUN_1400020a8();
  }
  FUN_140d7a3e0(param_1 + 0x251);
  FUN_144760e21(param_1[0x24e],*(undefined4 *)(param_1 + 0x24f));
  if (param_1[0x24e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x24b],*(undefined4 *)(param_1 + 0x24c));
  if (param_1[0x24b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x248],*(undefined4 *)(param_1 + 0x249));
  if (param_1[0x248] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x246] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x241] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23c] != 0) {
    FUN_1400020a8();
  }
  FUN_140d7a33a(param_1);
  return;
}



// FUNCTION 140d7a33a FUN_140d7a33a body=166 status=ok
// SIG undefined FUN_140d7a33a(void)

void FUN_140d7a33a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1aaff0;
  param_1[5] = &PTR_FUN_14a1abc00;
  param_1[6] = &PTR_LAB_14a1abc40;
  param_1[0x2f] = &PTR_FUN_14a1abc90;
  param_1[0x3c] = &PTR_FUN_14a1abdd0;
  param_1[0x3d] = &PTR_FUN_14a1abe60;
  param_1[0x20b] = &PTR_FUN_14a1abeb8;
  if (param_1[0x236] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x231] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x228] != 0) {
    FUN_1400020a8();
  }
  FUN_140d7a570(param_1);
  return;
}



// FUNCTION 140d7a3e0 FUN_140d7a3e0 body=400 status=ok
// SIG undefined FUN_140d7a3e0(void)

void FUN_140d7a3e0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140b3a2d4(param_1 + 0x35);
  plVar3 = (longlong *)param_1[0x34];
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
  if (*(char *)((longlong)param_1 + 0x174) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x174) = 0;
  }
  if ((char)param_1[0x2c] == '\x01') {
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_14052c7cd(param_1[0x20],(int)param_1[0x21]);
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_14052c796(param_1 + 0x16);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],(int)param_1[10]);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140d7a570 FUN_140d7a570 body=1091 status=ok
// SIG undefined FUN_140d7a570(void)

void FUN_140d7a570(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_14a832f20;
  param_1[5] = &PTR_FUN_14a833af0;
  param_1[6] = &PTR_LAB_14a833b30;
  param_1[0x2f] = &PTR_FUN_14a833b80;
  param_1[0x3c] = &PTR_FUN_14a833cc0;
  param_1[0x3d] = &PTR_FUN_14a833d50;
  FUN_144a6a7e8(param_1[0x209],*(undefined4 *)(param_1 + 0x20a));
  if (param_1[0x209] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6a7e8(param_1[0x206],*(undefined4 *)(param_1 + 0x207));
  if (param_1[0x206] != 0) {
    FUN_1400020a8();
  }
  plVar4 = param_1 + 0x203;
  if (*(int *)(param_1 + 0x204) == 0) {
LAB_140d7a622:
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar5 = (undefined8 *)*plVar4;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,0);
      FUN_1446efa72(plVar4,0,0,0x10);
      *(undefined4 *)(param_1 + 0x204) = 0;
      goto LAB_140d7a622;
    }
  }
  plVar4 = param_1 + 0x201;
  if (*(int *)(param_1 + 0x202) != 0) {
    puVar5 = (undefined8 *)*plVar4;
    if (puVar5 == (undefined8 *)0x0) goto LAB_140d7a64e;
    (**(code **)*puVar5)(puVar5,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 0x202) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_140d7a64e:
  if (param_1[0x1ee] != 0) {
    FUN_1400020a8();
  }
  FUN_140d7a9b4(param_1 + 0x1ba);
  FUN_140d7a9b4(param_1 + 0x1b1);
  param_1[0x199] = &PTR_FUN_149e73df0;
  lVar3 = param_1[0x1b0];
  if (lVar3 != 0) {
    (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
  }
  param_1[0x199] = &PTR_FUN_149e37220;
  if (param_1[0x1ab] != 0) {
    FUN_1400020a8();
  }
  param_1[0x199] = &PTR__purecall_149e35f70;
  plVar4 = (longlong *)param_1[0x1a4];
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar4);
  }
  lVar3 = param_1[0x1a8];
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar3);
  }
  param_1[0x180] = &PTR_FUN_149e37560;
  if (param_1[0x192] != 0) {
    FUN_1400020a8();
  }
  param_1[0x180] = &PTR__purecall_149e35f70;
  plVar4 = (longlong *)param_1[0x18b];
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar4);
  }
  lVar3 = param_1[399];
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar3);
  }
  param_1[0x150] = &PTR_FUN_149e73df0;
  lVar3 = param_1[0x167];
  if (lVar3 != 0) {
    (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
  }
  param_1[0x150] = &PTR_FUN_149e37220;
  if (param_1[0x162] != 0) {
    FUN_1400020a8();
  }
  param_1[0x150] = &PTR__purecall_149e35f70;
  plVar4 = (longlong *)param_1[0x15b];
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar4);
  }
  lVar3 = param_1[0x15f];
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar3);
  }
  param_1[0x137] = &PTR_FUN_149e37560;
  if (param_1[0x149] != 0) {
    FUN_1400020a8();
  }
  param_1[0x137] = &PTR__purecall_149e35f70;
  plVar4 = (longlong *)param_1[0x142];
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar4);
  }
  lVar3 = param_1[0x146];
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar3);
  }
  FUN_144760f98(param_1 + 0xfc);
  FUN_144760f98(param_1 + 0xf6);
  plVar4 = (longlong *)param_1[0x43];
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
  FUN_140d7aa08(param_1);
  return;
}



// FUNCTION 140d7a9b4 FUN_140d7a9b4 body=83 status=ok
// SIG undefined FUN_140d7a9b4(void)

void FUN_140d7a9b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a819a28;
  FUN_140239688(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_140239688(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d7aa08 FUN_140d7aa08 body=86 status=ok
// SIG undefined FUN_140d7aa08(void)

void FUN_140d7aa08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a858000;
  param_1[5] = &PTR_LAB_14a858590;
  param_1[6] = &PTR_LAB_14a8585d0;
  param_1[0x2f] = &PTR_LAB_14a858620;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 140d7aa5e FUN_140d7aa5e body=177 status=ok
// SIG undefined FUN_140d7aa5e(void)

undefined8 * FUN_140d7aa5e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab36580;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140d7ab0f(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_140d7aba0(param_1 + 10);
  FUN_140d7ab70(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d7ab0f FUN_140d7ab0f body=41 status=ok
// SIG undefined FUN_140d7ab0f(void)

void FUN_140d7ab0f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140d7ab38(param_1);
    param_1 = param_1 + 0x158;
  }
  return;
}



// FUNCTION 140d7ab38 FUN_140d7ab38 body=55 status=ok
// SIG undefined FUN_140d7ab38(void)

void FUN_140d7ab38(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  FUN_140d7ac14(param_1);
  return;
}



// FUNCTION 140d7ab70 FUN_140d7ab70 body=47 status=ok
// SIG undefined FUN_140d7ab70(void)

void FUN_140d7ab70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149fbcf90;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140d7aba0 FUN_140d7aba0 body=116 status=ok
// SIG undefined FUN_140d7aba0(void)

void FUN_140d7aba0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d7ac14 FUN_140d7ac14 body=470 status=ok
// SIG undefined FUN_140d7ac14(void)

void FUN_140d7ac14(longlong *param_1)

{
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_140d7adea(param_1[0x20],(int)param_1[0x21]);
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_140d7adea(param_1[0x1e],(int)param_1[0x1f]);
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (*(int *)((longlong)param_1 + 0xac) != 0) {
    FUN_1447a08a2(param_1 + 0x14,0);
  }
  param_1[0x1a] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xcc)) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
    FUN_1446efbd8(param_1 + 0x16,0);
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_140ddf9fa(param_1 + 6,0);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 140d7adea FUN_140d7adea body=45 status=ok
// SIG undefined FUN_140d7adea(void)

void FUN_140d7adea(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140d7ae18 FUN_140d7ae18 body=1430 status=ok
// SIG undefined FUN_140d7ae18(void)

undefined8 * FUN_140d7ae18(longlong param_1,undefined8 *param_2,longlong param_3)

{
  void *pvVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x5f8,0x10);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *(undefined2 *)(puVar3 + 8) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x42) = 2;
  puVar3[0xd] = 0;
  *(undefined4 *)(puVar3 + 0xe) = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = 0;
  puVar3[0x11] = 0;
  *(undefined4 *)(puVar3 + 0x12) = 0;
  *(undefined4 *)(puVar3 + 0x13) = 0x1d843;
  puVar3[0x18] = 0;
  *(undefined4 *)(puVar3 + 0x19) = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  *(undefined8 *)((longlong)puVar3 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0xd4) = 0;
  puVar3[0x1c] = 0;
  *(undefined4 *)(puVar3 + 0x1d) = 0;
  puVar3[0x1e] = &PTR_FUN_149e2b5a8;
  puVar3[0x26] = 0;
  *(undefined4 *)(puVar3 + 0x27) = 0;
  *(undefined4 *)(puVar3 + 0x21) = 0;
  puVar3[0x1f] = 0;
  puVar3[0x20] = 0;
  puVar3[0x22] = 0;
  puVar3[0x23] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x144) = 0;
  puVar3[0x2a] = 0;
  *(undefined4 *)(puVar3 + 0x2b) = 0;
  puVar3[0x30] = 0;
  *(undefined4 *)(puVar3 + 0x31) = 0;
  puVar3[0x2c] = 0;
  puVar3[0x2d] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x18c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x194) = 0;
  puVar3[0x34] = 0;
  *(undefined4 *)(puVar3 + 0x35) = 0;
  *(undefined2 *)((longlong)puVar3 + 0x1c1) = 0;
  puVar3[0x36] = 0;
  puVar3[0x37] = 0;
  puVar3[0x39] = 0;
  puVar3[0x3a] = 0;
  FUN_1408e76da(puVar3 + 0x3b);
  FUN_1408e76da(puVar3 + 0x56);
  puVar3[0x75] = 0;
  *(undefined4 *)(puVar3 + 0x76) = 0;
  puVar3[0x71] = 0;
  puVar3[0x72] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x3b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x3bc) = 0;
  puVar3[0x79] = 0;
  *(undefined4 *)(puVar3 + 0x7a) = 0;
  puVar3[0x7f] = 0;
  *(undefined4 *)(puVar3 + 0x80) = 0;
  puVar3[0x7b] = 0;
  puVar3[0x7c] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x404) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x40c) = 0;
  puVar3[0x83] = 0;
  *(undefined4 *)(puVar3 + 0x84) = 0;
  *(undefined2 *)((longlong)puVar3 + 0x439) = 0;
  puVar3[0x85] = 0;
  puVar3[0x86] = 0;
  puVar3[0x8e] = 0;
  *(undefined4 *)(puVar3 + 0x8f) = 0;
  puVar3[0x8a] = 0;
  puVar3[0x8b] = 0;
  puVar3[0x88] = 0;
  puVar3[0x89] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x47c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x484) = 0;
  puVar3[0x92] = 0;
  *(undefined4 *)(puVar3 + 0x93) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x4a4) = 0;
  puVar3[0x9e] = 0;
  *(undefined4 *)(puVar3 + 0x9f) = 0;
  puVar3[0x96] = 0;
  puVar3[0x97] = 0;
  puVar3[0x98] = 0;
  puVar3[0x99] = 0;
  puVar3[0x9a] = 0;
  puVar3[0x9b] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x4fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x504) = 0;
  puVar3[0xa2] = 0;
  *(undefined4 *)(puVar3 + 0xa3) = 0;
  puVar3[0xa4] = 0;
  FUN_140d7b3ae();
  puVar3[0xa9] = 0;
  *(undefined4 *)(puVar3 + 0xaa) = 0;
  puVar3[0xa5] = 0;
  puVar3[0xa6] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x554) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x55c) = 0;
  puVar3[0xad] = 0;
  *(undefined4 *)(puVar3 + 0xae) = 0;
  puVar3[0xb3] = 0;
  *(undefined4 *)(puVar3 + 0xb4) = 0;
  puVar3[0xaf] = 0;
  puVar3[0xb0] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x5a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x5ac) = 0;
  puVar3[0xb7] = 0;
  *(undefined4 *)(puVar3 + 0xb8) = 0;
  *(undefined2 *)((longlong)puVar3 + 0x5d9) = 0;
  puVar3[0xb9] = 0;
  puVar3[0xba] = 0;
  puVar3[0xbc] = 0;
  puVar3[0xbd] = 0;
  *(undefined1 *)((longlong)puVar3 + 0x42) = 2;
  puVar3[0x36] = puVar3;
  puVar3[0x4a] = puVar3;
  puVar3[0x65] = puVar3;
  puVar3[0x85] = puVar3;
  puVar3[0x99] = puVar3;
  if (DAT_14c866d18 != 0) {
    puVar3[0xa4] = puVar3 + 0x22;
  }
  *puVar3 = *(undefined8 *)(param_3 + 0x54);
  puVar11 = puVar3 + 1;
  if (puVar11 != param_2) {
    iVar6 = *(int *)(param_2 + 1);
    pvVar1 = (void *)*param_2;
    *(int *)(puVar3 + 2) = iVar6;
    if (iVar6 == 0 && *(int *)((longlong)puVar3 + 0x14) == 0) {
      *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(puVar11);
      if (iVar6 != 0) {
        memcpy((void *)*puVar11,pvVar1,(longlong)iVar6 * 2);
      }
    }
  }
  plVar5 = (longlong *)(param_1 + 0x3bc8);
  iVar6 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar6 = 0;
  }
  if (0 < iVar6) {
    iVar7 = 0;
    do {
      iVar7 = iVar7 + 1;
    } while (iVar6 != iVar7);
  }
  iVar6 = FUN_1407db052(plVar5);
  if ((iVar6 == -1) || (((longlong)iVar6 * 0x20 + *plVar5 + 0x10U & 0xffffffffffffffef) == 0)) {
    iVar6 = *(int *)(param_1 + 0x3c20);
    uVar2 = iVar6 + 1;
    *(uint *)(param_1 + 0x3c20) = uVar2;
    if (*(uint *)(param_1 + 0x3c24) < uVar2) {
      FUN_1447a1bd6((longlong *)(param_1 + 0x3c18));
    }
    lVar9 = *(longlong *)(param_1 + 0x3c18);
    lVar12 = (longlong)iVar6 * 0x10;
    puVar11 = (undefined8 *)(lVar9 + lVar12);
    *(undefined8 *)(lVar9 + lVar12) = 0;
    iVar6 = *(int *)(param_2 + 1);
    pvVar1 = (void *)*param_2;
    *(int *)(lVar9 + 8 + lVar12) = iVar6;
    if ((longlong)iVar6 == 0) {
      *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar11,iVar6,0);
      memcpy((void *)*puVar11,pvVar1,(longlong)iVar6 * 2);
    }
  }
  iVar6 = *(int *)(param_2 + 1);
  uVar8 = 0;
  iVar7 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar7 = 0;
  }
  if (0 < iVar7) {
    if (iVar6 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    lVar9 = 0;
    uVar8 = 0;
    do {
      uVar2 = ((uint)(0x19 < (ushort)puVar4[lVar9] - 0x61) * 0x20 + (uint)(ushort)puVar4[lVar9]) -
              0x20;
      uVar10 = (uint)(uVar8 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar8 ^ uVar2) & 0xff) * 4);
      uVar8 = (ulonglong)
              (uVar10 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar2 >> 8 & 0xff) * 4));
      lVar9 = lVar9 + 1;
    } while (iVar7 != (int)lVar9);
  }
  plVar5 = (longlong *)FUN_1408e6ff8(plVar5,uVar8,param_2);
  lVar9 = *plVar5;
  if (lVar9 != 0) {
    FUN_140925f20(lVar9);
    FUN_1400020a8(lVar9);
  }
  *plVar5 = (longlong)puVar3;
  return puVar3 + 0x8a;
}



// FUNCTION 140d7b3ae FUN_140d7b3ae body=251 status=ok
// SIG undefined FUN_140d7b3ae(void)

longlong FUN_140d7b3ae(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  void *_Src;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  FUN_140d7b4aa(param_1,param_2);
  bVar3 = *(byte *)(param_2 + 0x50) & 1;
  bVar1 = *(byte *)(param_1 + 0x50);
  *(byte *)(param_1 + 0x50) = bVar1 & 0xfe | bVar3;
  bVar4 = *(byte *)(param_2 + 0x50) & 2;
  *(byte *)(param_1 + 0x50) = bVar1 & 0xfc | bVar3 | bVar4;
  bVar5 = *(byte *)(param_2 + 0x50) & 4;
  *(byte *)(param_1 + 0x50) = bVar1 & 0xf8 | bVar3 | bVar4 | bVar5;
  bVar6 = *(byte *)(param_2 + 0x50) & 8;
  *(byte *)(param_1 + 0x50) = bVar1 & 0xf0 | bVar3 | bVar4 | bVar5 | bVar6;
  *(byte *)(param_1 + 0x50) =
       bVar1 & 0xe0 | bVar3 | bVar4 | bVar5 | bVar6 | *(byte *)(param_2 + 0x50) & 0x10;
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
  if (param_1 != param_2) {
    iVar2 = *(int *)(param_2 + 0x68);
    _Src = *(void **)(param_2 + 0x60);
    *(int *)(param_1 + 0x68) = iVar2;
    if (iVar2 == 0 && *(int *)(param_1 + 0x6c) == 0) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x60),iVar2);
      if (iVar2 != 0) {
        memcpy(*(void **)(param_1 + 0x60),_Src,(longlong)iVar2 * 2);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  FUN_140d7b544(param_1 + 0x80,param_2 + 0x80);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  return param_1;
}



// FUNCTION 140d7b4aa FUN_140d7b4aa body=154 status=ok
// SIG undefined FUN_140d7b4aa(void)

longlong FUN_140d7b4aa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140d7b4ff;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140d7b4ff:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140d7b724(param_1,param_2);
  return param_1;
}



// FUNCTION 140d7b544 FUN_140d7b544 body=154 status=ok
// SIG undefined FUN_140d7b544(void)

longlong FUN_140d7b544(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140d7b570;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140d7b570:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140d7b5de(param_1,param_2);
  return param_1;
}



// FUNCTION 140d7b5de FUN_140d7b5de body=325 status=ok
// SIG undefined FUN_140d7b5de(void)

undefined8 * FUN_140d7b5de(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *_Dst;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1409261fa(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406a7630(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar5 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      puVar4 = (undefined8 *)param_2[4];
      if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
        puVar4 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,puVar4,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      puVar7 = (undefined4 *)*param_1;
      puVar8 = (undefined4 *)*param_2;
      uVar6 = 0;
      do {
        puVar4 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar4 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *puVar7 = *puVar8;
          puVar7[1] = puVar8[1];
        }
        else {
          FUN_1457a2c34(puVar7,puVar8);
          *(undefined8 *)(puVar7 + 0x18) = *(undefined8 *)(puVar8 + 0x18);
        }
        uVar6 = uVar6 + 1;
        puVar8 = puVar8 + 0x1a;
        puVar7 = puVar7 + 0x1a;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 140d7b724 FUN_140d7b724 body=629 status=ok
// SIG undefined FUN_140d7b724(void)

longlong * FUN_140d7b724(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  void *_Src;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_2 + 1);
    FUN_1407da406(param_1,(ulonglong)uVar3);
    lVar6 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar6 + uVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar6) < uVar3) {
      FUN_140d69980(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar7 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar7) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar9 = 0x80;
      if (0x80 < (int)uVar7) {
        uVar9 = uVar7;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar9;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar4 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar4;
    if (iVar4 != 0) {
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar8,(ulonglong)(iVar4 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar3) {
      lVar6 = *param_1;
      lVar5 = *param_2;
      lVar10 = 0;
      uVar7 = 0;
      do {
        plVar8 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar8 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar8 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) == 0)
        {
          *(undefined4 *)(lVar6 + lVar10) = *(undefined4 *)(lVar5 + lVar10);
          *(undefined4 *)(lVar6 + 4 + lVar10) = *(undefined4 *)(lVar5 + 4 + lVar10);
        }
        else {
          *(undefined8 *)(lVar6 + lVar10) = 0;
          iVar4 = *(int *)(lVar5 + 8 + lVar10);
          _Src = *(void **)(lVar5 + lVar10);
          *(int *)(lVar6 + 8 + lVar10) = iVar4;
          if ((longlong)iVar4 == 0) {
            *(undefined4 *)(lVar6 + 0xc + lVar10) = 0;
          }
          else {
            FUN_1446dd670((undefined8 *)(lVar10 + lVar6),iVar4,0);
            memcpy(*(void **)(lVar10 + lVar6),_Src,(longlong)iVar4 * 2);
          }
          lVar1 = lVar10 + lVar6;
          *(undefined8 *)(lVar1 + 0x30) = 0;
          *(undefined4 *)(lVar1 + 0x38) = 0;
          *(undefined8 *)(lVar1 + 0x10) = 0;
          *(undefined8 *)(lVar1 + 0x18) = 0;
          *(undefined8 *)(lVar1 + 0x3c) = 0xffffffff00000080;
          *(undefined4 *)(lVar1 + 0x44) = 0;
          *(undefined8 *)(lVar1 + 0x50) = 0;
          *(undefined4 *)(lVar1 + 0x58) = 0;
          FUN_140b7c96c((undefined8 *)(lVar1 + 0x10),lVar5 + 0x10 + lVar10);
          lVar1 = lVar10 + lVar6;
          lVar2 = lVar5 + 0x60 + lVar10;
          *(undefined8 *)(lVar1 + 0x80) = 0;
          *(undefined4 *)(lVar1 + 0x88) = 0;
          *(undefined8 *)(lVar1 + 0x60) = 0;
          *(undefined8 *)(lVar1 + 0x68) = 0;
          *(undefined8 *)(lVar1 + 0x8c) = 0xffffffff00000080;
          *(undefined4 *)(lVar1 + 0x94) = 0;
          *(undefined8 *)(lVar1 + 0xa0) = 0;
          *(undefined4 *)(lVar1 + 0xa8) = 0;
          FUN_140bb2e20((undefined8 *)(lVar1 + 0x60),lVar2);
          *(undefined1 *)(lVar1 + 0xb0) = *(undefined1 *)(lVar2 + 0x50);
          *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(lVar2 + 0x58);
        }
        uVar7 = uVar7 + 1;
        lVar10 = lVar10 + 0xc0;
      } while ((ulonglong)uVar3 * 0xc0 != lVar10);
    }
  }
  return param_1;
}



// FUNCTION 140d7b999 FUN_140d7b999 body=272 status=ok
// SIG undefined FUN_140d7b999(void)

undefined8
FUN_140d7b999(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
    return 0;
  }
  if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x38) + 0x1e9) == '\x01') &&
     ((cVar1 = FUN_144a61b4f(), cVar1 != '\0' ||
      (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xc60) == 0x40000002)))) {
    uVar2 = FUN_14344acf4(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          param_10);
    return uVar2;
  }
  uVar2 = FUN_140d7baa9(param_1,param_2,param_3,param_4);
  return uVar2;
}



// FUNCTION 140d7baa9 FUN_140d7baa9 body=1680 status=ok
// SIG undefined FUN_140d7baa9(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_140d7baa9(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,uint param_6,undefined ****param_7,longlong param_8,
                       uint *param_9)

{
  int iVar1;
  int iVar2;
  undefined ****ppppuVar3;
  undefined4 uVar4;
  undefined ****ppppuVar5;
  longlong lVar6;
  uint *puVar7;
  undefined1 uVar8;
  undefined **ppuVar9;
  ulonglong uVar10;
  undefined ****ppppuVar11;
  undefined ****ppppuVar12;
  byte bVar13;
  longlong lVar14;
  undefined ****ppppuVar15;
  byte *_Dst;
  uint uVar16;
  int iVar17;
  longlong *_Dst_00;
  longlong *plVar18;
  undefined1 auStack_1df8 [32];
  longlong local_1dd8;
  undefined8 local_1dd0;
  uint local_1dc8;
  undefined ****local_1dc0;
  longlong local_1db8;
  uint *local_1db0;
  undefined1 local_1da8;
  undefined ****local_1d98;
  undefined8 local_1d90;
  undefined ****local_1d88;
  code *local_1d80;
  undefined ****local_1d78;
  undefined1 local_1d6b;
  ushort local_1d6a;
  undefined **local_1d68;
  undefined1 local_1d60;
  undefined ****local_1d58;
  undefined ****local_1d50;
  undefined2 local_1d48;
  undefined1 local_1d46;
  byte local_1d45;
  undefined2 local_1d44;
  undefined8 local_1d40;
  uint local_1d38;
  uint local_1d34;
  byte local_1d29;
  undefined ***local_1d28;
  undefined ***pppuStack_1d20;
  undefined8 local_1d18;
  undefined1 uStack_1d10;
  undefined1 uStack_1d0f;
  undefined2 uStack_1d0e;
  undefined2 uStack_1d0c;
  undefined2 uStack_1d0a;
  undefined1 uStack_1d08;
  undefined1 uStack_1d07;
  undefined2 uStack_1d06;
  undefined2 uStack_1d04;
  undefined2 uStack_1d02;
  undefined2 uStack_1d00;
  undefined6 uStack_1cfe;
  longlong local_1cf8;
  ushort *local_1cf0;
  undefined8 *local_1ce8;
  undefined1 *local_1ce0;
  byte *local_1cd8;
  undefined8 local_1cd0;
  longlong local_1cc8;
  uint *local_1cc0;
  longlong *local_1cb8;
  undefined8 local_1cb0;
  undefined **local_1ca0 [3];
  undefined4 local_1c88;
  undefined8 local_1c80;
  undefined8 uStack_1c78;
  undefined8 local_1c70;
  undefined4 local_1c68;
  undefined4 local_1c60;
  undefined2 local_1c5c;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  puVar7 = param_9;
  lVar6 = param_8;
  ppppuVar5 = param_7;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1df8;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
    uVar10 = 0;
  }
  else {
    local_1d29 = 0;
    bVar13 = *(byte *)(param_2 + 0x1c) & 0x1f;
    lVar14 = param_2;
    if (bVar13 == 4 && param_2 != 0) {
      do {
        lVar14 = *(longlong *)(lVar14 + 0x20);
        bVar13 = *(byte *)(lVar14 + 0x1c) & 0x1f;
      } while (lVar14 != 0 && bVar13 == 4);
    }
    uVar10 = 0;
    if ((bVar13 < 9) && (uVar16 = 0x10b, (0x10bU >> (uint)bVar13 & 1) != 0)) {
      if (*param_9 == 0) {
        lVar14 = 0;
        local_1d38 = 0;
        uVar16 = 0;
        do {
          if (*(char *)(param_8 + lVar14) == '\x02') {
            uVar16 = uVar16 | 1 << ((uint)lVar14 & 0x1f);
          }
          else if (*(char *)(param_8 + lVar14) == '\x01') {
            local_1d38 = local_1d38 | 1 << ((uint)lVar14 & 0x1f);
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x20);
        local_1d40 = CONCAT44(uVar16,1);
        local_1d34 = (uint)*(byte *)(param_7 + 2) + (param_6 & 0xff) * 0x200000 + 1 |
                     *(int *)(param_7 + 4) << 0x1a;
      }
      else {
        local_1d38 = 0;
        local_1d40 = (ulonglong)*param_9 << 0x20;
        local_1d34 = (uint)*(byte *)(param_7 + 2) + param_9[1] * 0x4000000 + 0x200001;
      }
      local_1d68 = &PTR_FUN_14a83af80;
      if (*(char *)((longlong)param_7 + 0x29) == '\0') {
        *(undefined1 *)((longlong)param_7 + 0x29) = 1;
        if (1 < *(int *)(param_7 + 0xb)) {
          ppppuVar3 = param_7 + 6;
          ppppuVar12 = (undefined ****)param_7[10];
          if ((undefined ****)param_7[10] == (undefined ****)0x0) {
            ppppuVar12 = ppppuVar3;
          }
          FUN_1449e0cb6(ppppuVar12,*(int *)(param_7 + 0xb),uVar16,local_1ca0);
          ppppuVar12 = (undefined ****)ppppuVar5[10];
          ppppuVar11 = ppppuVar12;
          if (ppppuVar12 == (undefined ****)0x0) {
            ppppuVar11 = ppppuVar3;
          }
          iVar1 = *(int *)(ppppuVar5 + 0xb);
          if ((longlong)iVar1 != 1) {
            lVar14 = 4;
            ppppuVar15 = ppppuVar11;
            iVar17 = *(int *)ppppuVar11;
            do {
              iVar2 = *(int *)((longlong)ppppuVar11 + lVar14);
              if (iVar17 != iVar2) {
                *(int *)((longlong)ppppuVar15 + 4) = iVar2;
                ppppuVar15 = (undefined ****)((longlong)ppppuVar15 + 4);
              }
              lVar14 = lVar14 + 4;
              iVar17 = iVar2;
            } while ((longlong)iVar1 * 4 != lVar14);
            ppppuVar12 = (undefined ****)ppppuVar5[10];
            ppppuVar11 = ppppuVar15;
          }
          if (ppppuVar12 == (undefined ****)0x0) {
            ppppuVar12 = ppppuVar3;
          }
          FUN_1479ab1f6(ppppuVar3,
                        (int)((ulonglong)((longlong)ppppuVar11 - (longlong)ppppuVar12) >> 2) + 1,0);
        }
      }
      local_1d88 = ppppuVar5 + 6;
      ppppuVar3 = ppppuVar5 + 0xc;
      plVar18 = (longlong *)0x0;
      local_1d44 = 0;
      local_1d60 = 0;
      local_1d46 = *(undefined1 *)((longlong)ppppuVar5 + 0x14);
      local_1d45 = *(byte *)((longlong)ppppuVar5 + 0x11) ^ 1;
      local_1d48 = 0x101;
      local_1d6a = (ushort)*(byte *)((longlong)ppppuVar5 + 0x16) << 5 | 0x14;
      local_1ca0[0] = &PTR_FUN_149f760b8;
      local_1c88 = 0xffffffff;
      local_1c80 = 0;
      uStack_1c78 = 0;
      local_1c70 = 0;
      local_1c68 = 0xffffffff;
      local_1c60 = 0;
      local_1c5c = 0;
      local_58 = 0;
      local_50 = 0x8000000000;
      local_1d58 = local_1d88;
      local_1d50 = ppppuVar3;
      if (0.0 < *(float *)((longlong)ppppuVar5 + 0x24)) {
        plVar18 = *(longlong **)(param_1 + 0x938);
        if (plVar18 == (longlong *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar18 + 0x28))(plVar18,param_5,1);
        }
        local_1d44 = CONCAT11(uVar8,(undefined1)local_1d44);
      }
      local_1d28 = local_1ca0;
      pppuStack_1d20 = &local_1d68;
      uStack_1d10 = SUB81(&param_6,0);
      uStack_1d0f = (undefined1)((ulonglong)&param_6 >> 8);
      uStack_1d0e = (undefined2)((ulonglong)&param_6 >> 0x10);
      uStack_1d0c = (undefined2)((ulonglong)&param_6 >> 0x20);
      uStack_1d0a = (undefined2)((ulonglong)&param_6 >> 0x30);
      uStack_1d08 = SUB81(ppppuVar5,0);
      uStack_1d07 = (undefined1)((ulonglong)ppppuVar5 >> 8);
      uStack_1d06 = (undefined2)((ulonglong)ppppuVar5 >> 0x10);
      uStack_1d04 = (undefined2)((ulonglong)ppppuVar5 >> 0x20);
      uStack_1d02 = (undefined2)((ulonglong)ppppuVar5 >> 0x30);
      uStack_1d00 = (undefined2)*(undefined8 *)(param_1 + 0x260);
      uStack_1cfe = (undefined6)((ulonglong)*(undefined8 *)(param_1 + 0x260) >> 0x10);
      local_1cf0 = &local_1d6a;
      local_1ce8 = &local_1d40;
      local_1ce0 = &local_1d6b;
      local_1cd8 = &local_1d29;
      local_1cd0 = param_5;
      local_1cc8 = lVar6;
      local_1cc0 = puVar7;
      local_1d80 = FUN_140a0aa1e;
      local_1d78 = &local_1d28;
      local_1d18 = (undefined ***)param_4;
      local_1cf8 = param_2;
      FUN_1400d1732();
      if ((plVar18 != (longlong *)0x0) && (local_1d44._1_1_ != '\0')) {
        uStack_1d04 = 0;
        uStack_1d02 = 0;
        uStack_1d00 = 0x101;
        local_1cd8 = (byte *)0x0;
        local_1cd0 = 0x800000000;
        local_1cb8 = (longlong *)0x0;
        local_1cb0 = 0x400000000;
        uStack_1d0c = 0;
        uStack_1d0a = 0;
        local_1d28 = (undefined ***)0x0;
        pppuStack_1d20 = (undefined ***)0x0;
        uStack_1d08 = 0;
        local_1d18 = (undefined ***)0x100000000000100;
        uStack_1d10 = 1;
        local_1dc0 = ppppuVar5;
        if (*(char *)((longlong)ppppuVar5 + 0x15) == '\0') {
          local_1d28 = *ppppuVar5;
          pppuStack_1d20 = ppppuVar5[1];
          local_1d18 = ppppuVar5[2];
          uVar4 = *(undefined4 *)(ppppuVar5 + 3);
          uStack_1d08 = (undefined1)((uint)*(undefined4 *)((longlong)ppppuVar5 + 0x1e) >> 0x10);
          uStack_1d07 = (undefined1)((uint)*(undefined4 *)((longlong)ppppuVar5 + 0x1e) >> 0x18);
          uStack_1d06 = (undefined2)*(undefined4 *)((longlong)ppppuVar5 + 0x22);
          uStack_1d04 = (undefined2)((uint)*(undefined4 *)((longlong)ppppuVar5 + 0x22) >> 0x10);
          uStack_1d02 = (undefined2)*(undefined4 *)((longlong)ppppuVar5 + 0x26);
          uStack_1d00 = (undefined2)((uint)*(undefined4 *)((longlong)ppppuVar5 + 0x26) >> 0x10);
          uStack_1d10 = (undefined1)uVar4;
          uStack_1d0f = (undefined1)((uint)uVar4 >> 8);
          uStack_1d0e = (undefined2)((uint)uVar4 >> 0x10);
          uStack_1d0c = (undefined2)*(undefined4 *)((longlong)ppppuVar5 + 0x1c);
          uStack_1d0a = (undefined2)((uint)*(undefined4 *)((longlong)ppppuVar5 + 0x1c) >> 0x10);
          local_1d98 = ppppuVar3;
          if (&local_1d28 != ppppuVar5) {
            iVar1 = *(int *)(ppppuVar5 + 0xb);
            ppppuVar3 = (undefined ****)ppppuVar5[10];
            local_1cd0 = CONCAT44(8,iVar1);
            local_1d90 = param_4;
            FUN_14470be6c(&local_1cf8,iVar1,8);
            if ((longlong)iVar1 != 0) {
              ppppuVar12 = local_1d88;
              if (ppppuVar3 != (undefined ****)0x0) {
                ppppuVar12 = ppppuVar3;
              }
              _Dst = (byte *)&local_1cf8;
              if (local_1cd8 != (byte *)0x0) {
                _Dst = local_1cd8;
              }
              memcpy(_Dst,ppppuVar12,(longlong)iVar1 << 2);
            }
            if ((undefined ****)ppppuVar5[0xe] != (undefined ****)0x0) {
              local_1d98 = (undefined ****)ppppuVar5[0xe];
            }
            iVar1 = *(int *)(ppppuVar5 + 0xf);
            local_1cb0 = CONCAT44(local_1cb0._4_4_,iVar1);
            if (iVar1 == 0 && local_1cb0._4_4_ == 0) {
              local_1cb0 = CONCAT44(4,iVar1);
              param_4 = local_1d90;
            }
            else {
              FUN_1447163e6(&local_1cc8,iVar1);
              param_4 = local_1d90;
              if (iVar1 != 0) {
                _Dst_00 = &local_1cc8;
                if (local_1cb8 != (longlong *)0x0) {
                  _Dst_00 = local_1cb8;
                }
                memcpy(_Dst_00,local_1d98,(longlong)iVar1 << 2);
              }
            }
          }
          local_1d18._0_6_ = CONCAT15(1,(undefined5)local_1d18);
          local_1dc0 = &local_1d28;
        }
        local_1db0 = param_9;
        local_1db8 = lVar6;
        local_1dc8 = param_6;
        local_1da8 = 1;
        local_1dd8 = param_2;
        local_1dd0 = param_4;
        bVar13 = (**(code **)(*plVar18 + 0x68))
                           (plVar18,*(undefined4 *)((longlong)ppppuVar5 + 0x24),param_5,0);
        local_1d29 = local_1d29 | bVar13;
        if (local_1cb8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_1cd8 != (byte *)0x0) {
          FUN_1400020a8();
        }
      }
      ppuVar9 = &PTR_FUN_149f760b8;
      local_1ca0[0] = &PTR_FUN_149f760b8;
      if (local_58 != 0) {
        ppuVar9 = (undefined **)FUN_1400020a8();
      }
      uVar10 = CONCAT71((int7)((ulonglong)ppuVar9 >> 8),local_1d29);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1df8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffffffffff01;
}



// FUNCTION 140d7c146 FUN_140d7c146 body=600 status=ok
// SIG undefined FUN_140d7c146(void)

byte FUN_140d7c146(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  undefined8 ****ppppuVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  byte bVar9;
  byte bVar10;
  longlong *plVar11;
  float fVar12;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined8 ***local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((longlong)*(int *)(param_1 + 0x278) == 0) {
    bVar9 = 0;
  }
  else {
    plVar11 = *(longlong **)(param_1 + 0x270);
    lVar8 = (longlong)*(int *)(param_1 + 0x278) * 0x28;
    bVar9 = 0;
    bVar10 = 0;
    do {
      lVar1 = *plVar11;
      if ((*(char *)(lVar1 + 0x148) != '\x01') ||
         (lVar6 = plVar11[4], *(int *)(plVar11 + 4) = (int)lVar6 + -1, (int)lVar6 < 2)) {
        if (*(char *)(lVar1 + 0x1a0) == '\x01') {
          local_c0 = lVar1 + 0x1a8;
          local_b8[0] = 0;
          local_90 = 0;
          FUN_1456bb102(local_b8,param_2);
          FUN_1448729ea(local_c0,local_88,local_b8);
          fVar12 = (float)FUN_144a7b41a(local_88,0);
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
          if (pcVar2 != (code *)0x0) {
            ppppuVar5 = local_88;
            if (0x18 < local_70) {
              ppppuVar5 = (undefined8 ****)local_88[0];
            }
            (*pcVar2)(ppppuVar5);
          }
          if (0x18 < local_70) {
            FUN_1400020a8(local_88[0]);
          }
          FUN_144a5ac3a(local_b8);
          uVar4 = rand();
          if (fVar12 < (float)(uVar4 & 0x7fff) / 32767.0) goto LAB_140d7c27a;
        }
        if ((*(char *)(lVar1 + 0x148) == '\x01') && ((int)plVar11[4] < 1)) {
          FUN_148d097b2(plVar11);
        }
        if ((*(int *)((longlong)plVar11 + 0x1c) == 0) ||
           (uVar4 = *(uint *)(plVar11 + 3), (int)uVar4 < 0)) {
LAB_140d7c2a4:
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          if ((int)uVar4 < DAT_14c9647dc) {
            plVar7 = (longlong *)
                     ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
            if (((plVar7 == (longlong *)0x0) ||
                ((int)plVar7[2] != *(int *)((longlong)plVar11 + 0x1c))) ||
               ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_140d7c2a4;
            lVar6 = *plVar7;
          }
        }
        if (lVar6 == 0) {
          lVar6 = param_2;
        }
        bVar3 = FUN_140d7c3a0(lVar1,lVar6,param_3);
        bVar9 = bVar9 | bVar3;
        bVar10 = bVar10 | *(byte *)(*plVar11 + 0x1f8);
      }
LAB_140d7c27a:
      plVar11 = plVar11 + 5;
      lVar8 = lVar8 + -0x28;
    } while (lVar8 != 0);
    if ((param_2 != 0 & bVar10) != 0) {
      FUN_148a1fc6c(param_2);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar9 & 1;
}



// FUNCTION 140d7c3a0 FUN_140d7c3a0 body=2127 status=ok
// SIG undefined FUN_140d7c3a0(void)

ulonglong FUN_140d7c3a0(longlong param_1,ulonglong param_2,ushort *param_3)

{
  int *piVar1;
  longlong *plVar2;
  ushort *puVar3;
  ushort uVar4;
  code *pcVar5;
  longlong *plVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  undefined *puVar14;
  float *pfVar15;
  undefined8 unaff_RBP;
  ulonglong uVar16;
  longlong lVar18;
  undefined8 ****ppppuVar19;
  longlong lVar20;
  longlong *plVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_108 [40];
  ulonglong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int local_b8;
  float local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  undefined8 ***local_88;
  longlong *local_80;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  undefined7 uVar17;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar4 = *(ushort *)(param_1 + 8);
  uVar17 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar16 = CONCAT71(uVar17,uVar4 != 0);
  if (uVar4 != 0) {
    *param_3 = *param_3 | uVar4;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    local_e0 = local_e0 & 0xffffffffffffff00;
    local_b8 = 0;
    FUN_1456bb102(&local_e0,param_2);
    pfVar15 = &local_b0;
    FUN_1448729ea(param_1 + 0x10,pfVar15);
    if (local_90 == 3) {
      fVar23 = local_b0;
      bVar7 = 3;
    }
    else {
      FUN_1400b56fe(&local_88,&local_b0);
      fVar23 = 0.0;
      if (local_68 != 0) {
        fVar23 = local_88._0_4_;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar5 != (code *)0x0) {
        ppppuVar19 = &local_88;
        if (0x18 < local_70) {
          ppppuVar19 = (undefined8 ****)local_88;
        }
        (*pcVar5)(ppppuVar19);
      }
      bVar7 = local_90;
      if (0x18 < local_70) {
        FUN_1400020a8(local_88);
        bVar7 = local_90;
      }
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_98) {
        pfVar15 = (float *)CONCAT44(uStack_ac,local_b0);
      }
      (*pcVar5)(pfVar15);
    }
    if (0x18 < local_98) {
      FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
    }
    lVar20 = DAT_14c9a3da0;
    if ((longlong)local_b8 != 0) {
      lVar9 = (longlong)local_b8 + -1;
      lVar18 = lVar9 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar18),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar18));
      if (*(longlong *)(lVar20 + lVar18) != 0) {
        FUN_1400020a8();
      }
      lVar20 = DAT_14c9a3da0;
      iVar13 = (int)lVar9;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar13;
      }
      *(undefined4 *)(lVar20 + lVar18) = 0xffffffff;
      iVar12 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar12 = DAT_14c9a3dd0;
      }
      *(int *)(lVar20 + 4 + lVar18) = iVar12;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar14 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar14 = DAT_14c9a3dc0;
      }
      iVar12 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar12 = iVar13;
      }
      bVar7 = (byte)lVar9 & 0x1f;
      DAT_14c9a3dd0 = iVar13;
      *(uint *)(puVar14 + (longlong)(iVar12 >> 5) * 4) =
           *(uint *)(puVar14 + (longlong)(iVar12 >> 5) * 4) &
           (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
      local_b8 = 0;
    }
    if (((char)local_e0 == '\x03') && (local_d0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d0 + 0x10))();
      }
    }
    if (*(int *)(param_1 + 0x60) == 2) {
      fVar22 = *(float *)(param_3 + 0xc);
      fVar23 = fVar23 * fVar22;
LAB_140d7c988:
      fVar23 = fVar23 - fVar22;
    }
    else if (*(int *)(param_1 + 0x60) == 0) {
      fVar22 = *(float *)(param_3 + 0xc);
      if (fVar23 <= 0.0) {
        fVar23 = fVar22 / (1.0 - fVar23);
        goto LAB_140d7c988;
      }
      fVar23 = fVar23 * fVar22;
    }
    if ((*(char *)(param_1 + 100) == '\x01') && (1 < *(int *)(param_3 + 0x1c))) {
      fVar23 = fVar23 / (float)*(int *)(param_3 + 0x1c);
    }
    uVar16 = CONCAT71(uVar17,1);
    if ((fVar23 != 0.0) || (NAN(fVar23))) {
      *(undefined1 *)(param_3 + 0x12) = 1;
      *(float *)(param_3 + 6) = fVar23 + *(float *)(param_3 + 6);
    }
  }
  if ((*(longlong *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x70) - 1U < 0xfffffffe)) {
    lVar20 = *(longlong *)(param_3 + 0x20);
    lVar9 = FUN_1405faa04(param_1 + 0x68);
    if (lVar20 != lVar9) {
      uVar10 = FUN_1405faa04(param_1 + 0x68);
      *(undefined8 *)(param_3 + 0x20) = uVar10;
      uVar16 = CONCAT71((int7)(uVar16 >> 8),1);
    }
  }
  if (0 < *(int *)(param_1 + 0xc0)) {
    plVar11 = *(longlong **)(param_1 + 0xb8);
    if (*(longlong **)(param_1 + 0xb8) == (longlong *)0x0) {
      plVar11 = (longlong *)(param_1 + 0x88);
    }
    if ((*plVar11 != 0) && ((int)plVar11[1] - 1U < 0xfffffffe)) {
      if (*(char *)(param_1 + 0x80) == '\x01') {
        FUN_1405faa8e();
      }
      else {
        FUN_14118c70e(param_3 + 0x24);
      }
    }
  }
  if ((*(longlong *)(param_1 + 0xd0) != 0) && ((longlong)*(int *)(param_1 + 0xe0) != 0)) {
    lVar20 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xd8) + lVar20) != 0) {
        FUN_1405dc634(param_3 + 0x58,param_1 + 200);
        uVar16 = CONCAT71((int7)(uVar16 >> 8),1);
        break;
      }
      lVar20 = lVar20 + 8;
    } while ((longlong)*(int *)(param_1 + 0xe0) * 8 != lVar20);
  }
  if ((*(longlong *)(param_1 + 0x200) != 0) && (*(int *)(param_1 + 0x208) - 1U < 0xfffffffe)) {
    local_d8 = 0;
    local_d0 = *(longlong **)(param_3 + 0x20);
    local_e0 = param_2;
    FUN_141125464(param_1 + 0x200,&local_88);
    if ((*(undefined8 *****)(param_3 + 0x44) != (undefined8 ****)local_88) ||
       (*(int *)(param_3 + 0x48) != (int)local_80)) {
      *(undefined8 ****)(param_3 + 0x44) = local_88;
      *(int *)(param_3 + 0x48) = (int)local_80;
      param_3[0x4c] = 0;
      param_3[0x4d] = 0;
      param_3[0x4e] = 0;
      param_3[0x4f] = 0;
    }
    uVar16 = CONCAT71((int7)(uVar16 >> 8),1);
  }
  lVar20 = (longlong)*(int *)(param_1 + 0xf0);
  if (0 < lVar20) {
    iVar13 = *(int *)(param_3 + 0x54) + *(int *)(param_1 + 0xf0);
    if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar13);
    }
    puVar3 = param_3 + 0x50;
    if (*(int *)(param_3 + 0x56) < iVar13) {
      FUN_1407a322c(puVar3);
      lVar20 = (longlong)*(int *)(param_1 + 0xf0);
      uVar16 = CONCAT71((int7)(uVar16 >> 8),1);
      if (lVar20 == 0) goto LAB_140d7c60d;
    }
    plVar21 = *(longlong **)(param_1 + 0xe8);
    plVar11 = plVar21 + lVar20 * 3;
    do {
      ppppuVar19 = (undefined8 ****)*plVar21;
      if (ppppuVar19 != (undefined8 ****)0x0) {
        plVar6 = (longlong *)plVar21[1];
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
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
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        local_88 = ppppuVar19;
        local_80 = plVar6;
        FUN_14881cc0e(&local_e0,&local_88,param_2,param_2);
        iVar13 = *(int *)(param_3 + 0x54);
        *(uint *)(param_3 + 0x54) = iVar13 + 1U;
        if (*(uint *)(param_3 + 0x56) < iVar13 + 1U) {
          FUN_1408da40e(puVar3,iVar13);
        }
        lVar20 = *(longlong *)puVar3;
        lVar18 = (longlong)iVar13 * 0x20;
        *(ulonglong *)(lVar20 + lVar18) = local_e0;
        lVar9 = CONCAT44(uStack_d4,local_d8);
        *(longlong *)(lVar20 + 8 + lVar18) = lVar9;
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
          UNLOCK();
        }
        lVar20 = lVar20 + lVar18;
        *(undefined4 *)(lVar20 + 0x10) = (undefined4)local_d0;
        *(undefined4 *)(lVar20 + 0x14) = local_d0._4_4_;
        *(undefined4 *)(lVar20 + 0x18) = uStack_c8;
        *(undefined4 *)(lVar20 + 0x1c) = uStack_c4;
        plVar6 = (longlong *)CONCAT44(uStack_d4,local_d8);
        if (plVar6 != (longlong *)0x0) {
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
        plVar6 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_80 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_80)(local_80);
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
      plVar21 = plVar21 + 3;
      uVar16 = CONCAT71((int7)((ulonglong)ppppuVar19 >> 8),1);
    } while (plVar21 != plVar11);
  }
LAB_140d7c60d:
  local_e0 = local_e0 & 0xffffffffffffff00;
  local_b8 = 0;
  FUN_1456bb102(&local_e0,param_2);
  pfVar15 = &local_b0;
  FUN_1448729ea(param_1 + 0xf8,pfVar15,&local_e0);
  if (local_90 == 3) {
    uVar8 = 3;
    fVar23 = local_b0;
  }
  else {
    FUN_1400b56fe(&local_88,&local_b0,3);
    fVar23 = 0.0;
    if (local_68 != 0) {
      fVar23 = local_88._0_4_;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar5 != (code *)0x0) {
      ppppuVar19 = &local_88;
      if (0x18 < local_70) {
        ppppuVar19 = (undefined8 ****)local_88;
      }
      (*pcVar5)(ppppuVar19);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88);
    }
    uVar8 = (uint)local_90;
  }
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar8 * 0x120));
  if (pcVar5 != (code *)0x0) {
    if (0x18 < local_98) {
      pfVar15 = (float *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar5)(pfVar15);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar20 = DAT_14c9a3da0;
  if ((longlong)local_b8 != 0) {
    lVar18 = (longlong)local_b8 + -1;
    lVar9 = lVar18 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar9),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar9))
    ;
    if (*(longlong *)(lVar20 + lVar9) != 0) {
      FUN_1400020a8();
    }
    lVar20 = DAT_14c9a3da0;
    iVar13 = (int)lVar18;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar13;
    }
    *(undefined4 *)(lVar20 + lVar9) = 0xffffffff;
    iVar12 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar12 = DAT_14c9a3dd0;
    }
    *(int *)(lVar20 + 4 + lVar9) = iVar12;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar14 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar14 = DAT_14c9a3dc0;
    }
    iVar12 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar12 = iVar13;
    }
    bVar7 = (byte)lVar18 & 0x1f;
    DAT_14c9a3dd0 = iVar13;
    *(uint *)(puVar14 + (longlong)(iVar12 >> 5) * 4) =
         *(uint *)(puVar14 + (longlong)(iVar12 >> 5) * 4) &
         (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
    local_b8 = 0;
  }
  if (((char)local_e0 == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  if (0.0 < fVar23) {
    *(float *)(param_3 + 0x1e) = fVar23;
    uVar16 = CONCAT71((int7)(uVar16 >> 8),1);
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 140d7cbf2 FUN_140d7cbf2 body=1354 status=ok
// SIG undefined FUN_140d7cbf2(void)

void FUN_140d7cbf2(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint *puVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStack_158 [36];
  int local_134;
  longlong local_130;
  longlong *local_128;
  uint local_11c;
  longlong local_118;
  undefined8 local_110;
  uint *local_108;
  ulonglong local_100;
  ulonglong local_f8;
  uint *local_f0;
  undefined1 *local_e8;
  int local_e0;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar12 = 1;
    uVar16 = 0;
    iVar10 = 0;
    iVar11 = 0;
  }
  else {
    puVar17 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar17 = (uint *)(param_1 + 2);
    }
    uVar18 = *puVar17;
    if (uVar18 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar16 = 0;
      uVar12 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar12 = uVar16;
      }
      iVar11 = 0;
      do {
        if (uVar12 == uVar16) goto LAB_140d7d108;
        iVar11 = iVar11 + 0x20;
        uVar18 = puVar17[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar16 = 0;
      iVar11 = 0;
    }
    uVar12 = (ulonglong)(-uVar18 & uVar18);
    uVar1 = uVar12 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar10 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar10) {
      iVar10 = iVar2;
    }
  }
  if (iVar10 < iVar2) {
    uVar18 = 0xffffffff;
    local_128 = param_1;
    local_110 = param_2;
    local_108 = (uint *)(param_1 + 2);
    do {
      local_130 = (longlong)iVar10 * 0x60;
      lVar15 = *param_1 + local_130;
      lVar14 = *param_1 + local_130;
      puVar17 = (uint *)(lVar14 + 0x18);
      iVar2 = *(int *)(lVar14 + 0x30);
      local_134 = iVar11;
      local_11c = uVar18;
      local_100 = uVar12;
      local_f8 = uVar16;
      if (iVar2 == 0) {
        uVar12 = 1;
        uVar16 = 0;
        iVar11 = 0;
        iVar9 = 0;
      }
      else {
        puVar7 = *(uint **)(lVar15 + 0x28);
        if (*(uint **)(lVar15 + 0x28) == (uint *)0x0) {
          puVar7 = puVar17;
        }
        uVar18 = *puVar7;
        if (uVar18 == 0) {
          iVar11 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar11 = iVar2 + -1;
          }
          uVar16 = 0;
          uVar12 = (ulonglong)(uint)(iVar11 >> 5);
          if (iVar11 >> 5 < 1) {
            uVar12 = uVar16;
          }
          iVar9 = 0;
          do {
            if (uVar12 == uVar16) goto LAB_140d7cf2a;
            iVar9 = iVar9 + 0x20;
            uVar18 = puVar7[uVar16 + 1];
            uVar16 = uVar16 + 1;
          } while (uVar18 == 0);
        }
        else {
          uVar16 = 0;
          iVar9 = 0;
        }
        uVar12 = (ulonglong)(-uVar18 & uVar18);
        uVar1 = uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar11 = (iVar9 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar11) {
          iVar11 = iVar2;
        }
      }
      if (iVar11 < iVar2) {
        uVar18 = 0xffffffff;
        local_f0 = puVar17;
        do {
          lVar14 = *(longlong *)(lVar15 + 8);
          uVar1 = *(ulonglong *)(*(longlong *)(lVar14 + 8 + (longlong)iVar11 * 0x20) + 0xd8);
          if (((((uVar1 >> 0x20 == 0) || (uVar4 = (uint)uVar1, (int)uVar4 < 0)) ||
               (DAT_14c9647dc <= (int)uVar4)) ||
              ((lVar13 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)(uVar1 >> 0xd) & 0x3fff8)),
               lVar13 == 0 || (*(int *)(lVar13 + 0x10) != (int)(uVar1 >> 0x20))))) ||
             ((*(uint *)(lVar13 + 8) & 0x10200000) != 0)) {
            piVar8 = (int *)(lVar14 + (longlong)iVar11 * 0x20);
            if ((*(int *)(*local_128 + local_130) != *piVar8) ||
               (*(int *)(*local_128 + local_130 + 4) != piVar8[1])) {
              lVar14 = (longlong)(int)local_50;
              uVar4 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,uVar4);
              if (local_50._4_4_ < uVar4) {
                local_118 = lVar14;
                FUN_1457a2cc6(local_d8,lVar14);
                lVar14 = local_118;
              }
              puVar3 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar3 = local_d8;
              }
              *(ulonglong *)(puVar3 + lVar14 * 8) = uVar1;
            }
            FUN_140d7d13e((longlong *)(lVar15 + 8),iVar11);
            iVar2 = *(int *)(lVar15 + 0x30);
          }
          uVar18 = uVar18 & ~(uint)uVar12;
          puVar17 = *(uint **)(lVar15 + 0x28);
          if (*(uint **)(lVar15 + 0x28) == (uint *)0x0) {
            puVar17 = local_f0;
          }
          iVar11 = (int)uVar16;
          lVar14 = (longlong)iVar11;
          uVar4 = puVar17[lVar14] & uVar18;
          if (uVar4 == 0) {
            iVar5 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar5 = iVar2 + -1;
            }
            iVar5 = iVar5 >> 5;
            iVar6 = iVar5;
            if (iVar5 < iVar11) {
              iVar6 = iVar11;
            }
            if (iVar5 <= iVar11) break;
            lVar13 = 0;
            while( true ) {
              iVar9 = iVar9 + 0x20;
              uVar4 = puVar17[lVar14 + lVar13 + 1];
              if (uVar4 != 0) break;
              lVar13 = lVar13 + 1;
              if (iVar6 - lVar14 == lVar13) goto LAB_140d7cf2a;
            }
            uVar16 = (ulonglong)(iVar11 + (int)lVar13 + 1);
            uVar18 = 0xffffffff;
          }
          uVar12 = (ulonglong)(-uVar4 & uVar4);
          uVar1 = uVar12 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar11 = (iVar9 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        } while (iVar11 < iVar2);
      }
LAB_140d7cf2a:
      if (0 < (int)local_50) {
        local_e8 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          local_e8 = local_d8;
        }
        local_e0 = (int)local_50;
        FUN_1403cc6be(local_110,*(undefined8 *)(*local_128 + local_130));
        bVar19 = (longlong)local_50 < 0;
        local_50 = local_50 & 0xffffffff00000000;
        if (bVar19) {
          FUN_147a4fa6c(local_d8,0);
        }
      }
      uVar16 = local_100;
      puVar17 = local_108;
      uVar18 = local_11c;
      param_1 = local_128;
      if (*(int *)(*local_128 + 0x10 + local_130) == *(int *)(*local_128 + 0x3c + local_130)) {
        FUN_1403cc47c(local_128,iVar10);
      }
      uVar18 = uVar18 & ~(uint)uVar16;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar17;
      }
      iVar2 = (int)param_1[5];
      iVar10 = (int)local_f8;
      lVar15 = (longlong)iVar10;
      uVar4 = puVar7[lVar15] & uVar18;
      uVar16 = local_f8;
      iVar11 = local_134;
      if (uVar4 == 0) {
        iVar9 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar9 = iVar2 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar5 = iVar9;
        if (iVar9 < iVar10) {
          iVar5 = iVar10;
        }
        if (iVar9 <= iVar10) break;
        lVar14 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar4 = puVar7[lVar15 + lVar14 + 1];
          if (uVar4 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar5 - lVar15 == lVar14) goto LAB_140d7d0fb;
        }
        uVar18 = 0xffffffff;
        uVar16 = (ulonglong)(iVar10 + (int)lVar14 + 1);
      }
      uVar12 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar12 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar10 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar2);
LAB_140d7d0fb:
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140d7d108:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d7d13e FUN_140d7d13e body=154 status=ok
// SIG undefined FUN_140d7d13e(void)

void FUN_140d7d13e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = (longlong)param_2 * 0x20;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar7 = (longlong)*(int *)(lVar2 + 0x1c + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar7 * 4);
  if (iVar4 == param_2) {
    piVar6 = (int *)((longlong)plVar5 + lVar7 * 4);
  }
  else {
    do {
      piVar6 = (int *)(lVar2 + (longlong)iVar4 * 0x20 + 0x18);
      iVar4 = *piVar6;
    } while (iVar4 != param_2);
  }
  *piVar6 = *(int *)(lVar2 + lVar3 + 0x18);
  plVar5 = *(longlong **)(*param_1 + 0x10 + lVar3);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar6 = (int *)((longlong)plVar5 + 0xc);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_140d7d1d8(param_1,param_2);
  return;
}



// FUNCTION 140d7d1d8 FUN_140d7d1d8 body=112 status=ok
// SIG undefined FUN_140d7d1d8(void)

void FUN_140d7d1d8(longlong *param_1,int param_2)

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



// FUNCTION 140d7d248 FUN_140d7d248 body=37 status=ok
// SIG undefined FUN_140d7d248(void)

void FUN_140d7d248(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_140d7d3af();
  if (cVar1 != '\0') {
    FUN_140d7d26d(param_1);
    return;
  }
  return;
}



// FUNCTION 140d7d26d FUN_140d7d26d body=166 status=ok
// SIG undefined FUN_140d7d26d(void)

void FUN_140d7d26d(undefined8 param_1)

{
  int *piVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14069cc7b(&local_28,param_1);
  if (local_28 != 0) {
    uVar3 = FUN_140d7d4de(local_28 + 0x470,local_28 + 0x478,local_28 + 0x4c8,param_1);
    bVar2 = FUN_140d7d324(uVar3);
    *(byte *)(local_28 + 0x500) = *(byte *)(local_28 + 0x500) | bVar2;
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d7d324 FUN_140d7d324 body=139 status=ok
// SIG undefined FUN_140d7d324(void)

undefined8 FUN_140d7d324(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) == 1) {
    iVar3 = *(int *)(param_1 + 0x28);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 8) = 4;
      return 1;
    }
LAB_140d7d365:
    if (*(int *)(*(longlong *)(param_1 + 0x20) + (longlong)(iVar3 + -1) * 4) == 2) {
      uVar2 = 0;
      goto LAB_140d7d3a9;
    }
  }
  else {
    if (*(int *)(param_1 + 8) - 4U < 5) {
      iVar3 = *(int *)(param_1 + 0x28);
      if (iVar3 == 0) {
        return 0;
      }
      goto LAB_140d7d365;
    }
    iVar3 = *(int *)(param_1 + 0x28);
    if (iVar3 != 0) goto LAB_140d7d365;
    iVar3 = 0;
  }
  *(uint *)(param_1 + 0x28) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar3 + 1U) {
    FUN_140b39638((longlong *)(param_1 + 0x20),iVar3);
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  *(undefined4 *)(lVar1 + (longlong)iVar3 * 4) = 2;
  uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
LAB_140d7d3a9:
  *(undefined1 *)(param_1 + 0x49) = 1;
  return uVar2;
}



// FUNCTION 140d7d3af FUN_140d7d3af body=303 status=ok
// SIG undefined FUN_140d7d3af(void)

bool FUN_140d7d3af(longlong param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  
  cVar4 = FUN_140e3b614(param_1 + 0x650);
  if ((cVar4 == '\0') || (lVar6 = FUN_14477bcf0(), *(longlong *)(lVar6 + 0x98) == 0)) {
LAB_140d7d4c0:
    bVar5 = false;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x658);
    if ((longlong)iVar2 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x650);
      lVar8 = 0;
      do {
        lVar3 = *(longlong *)(lVar6 + lVar8);
        if ((((lVar3 != 0) && (*(longlong *)(lVar6 + 0x18 + lVar8) != 0)) &&
            (*(int *)(lVar3 + 0x20) != 0)) &&
           (((cVar4 = FUN_144b3e610(lVar3 + 0x90), cVar4 != '\0' &&
             (lVar3 = *(longlong *)(lVar6 + 0x30 + lVar8), lVar3 != 0)) &&
            (*(char *)(lVar3 + 0x45) == '\x01')))) {
          lVar7 = FUN_14477bcf0();
          if (*(longlong *)(lVar7 + 0x98) == 0) {
            fVar9 = *(float *)(lVar3 + 0x38);
          }
          else {
            fVar1 = *(float *)(*(longlong *)(lVar7 + 0x98) + 0x38);
            fVar9 = *(float *)(lVar3 + 0x38);
            if (*(float *)(lVar3 + 0x38) <= fVar1) {
              fVar9 = fVar1;
            }
          }
          if (0.001 < ABS(*(float *)(*(longlong *)(lVar6 + lVar8) + 0xb0) * 100.0 - fVar9))
          goto LAB_140d7d4c0;
        }
        lVar8 = lVar8 + 0x48;
      } while ((longlong)iVar2 * 0x48 != lVar8);
    }
    bVar5 = 0 < *(int *)(param_1 + 0x680);
  }
  return bVar5;
}



// FUNCTION 140d7d4de FUN_140d7d4de body=1230 status=ok
// SIG undefined FUN_140d7d4de(void)

ulonglong FUN_140d7d4de(undefined8 param_1,longlong *param_2,longlong *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  ulonglong *puVar18;
  longlong lVar19;
  bool bVar20;
  
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar5 = ((uint)(param_4 >> 0x14) & 0xffff ^ (uint)(param_4 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar7 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[8];
    }
    iVar10 = *(int *)((longlong)plVar7 +
                     (ulonglong)((int)param_2[9] - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar10 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_2 + (longlong)iVar10 * 0x18);
        if (*puVar1 == param_4) {
          puVar18 = puVar1 + 1;
          if (puVar18 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) goto LAB_140d7d78f;
          break;
        }
        iVar10 = (int)puVar1[2];
      } while (iVar10 != -1);
    }
  }
  puVar6 = (uint *)FUN_14001cc68(0x70,0x10);
  puVar6[0] = 0;
  puVar6[1] = 0;
  puVar6[2] = 1;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  *(undefined2 *)(puVar6 + 0x12) = 0;
  puVar6[0x1a] = 0xbf800000;
  iVar10 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar10 + 1U) {
    FUN_1457a2dd4(param_3,iVar10);
  }
  puVar18 = (ulonglong *)(*param_3 + (longlong)iVar10 * 8);
  *puVar18 = (ulonglong)puVar6;
  if (param_4 == 0) {
    *puVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(param_4 + 0xc);
    *puVar6 = uVar5;
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar19 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar19 = 0;
    }
    uVar5 = *(uint *)(lVar19 + 0x10);
    if (*(uint *)(lVar19 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      uVar17 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar17);
      }
      LOCK();
      uVar5 = *(uint *)(lVar19 + 0x10);
      bVar20 = uVar5 == 0;
      if (bVar20) {
        *(uint *)(lVar19 + 0x10) = uVar17;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar20) {
        uVar5 = uVar17;
      }
    }
  }
  puVar6[1] = uVar5;
  *(undefined4 *)(*puVar18 + 8) = 1;
  uVar13 = *puVar18;
  if (*(int *)((longlong)param_2 + 0x34) == 0) {
    iVar10 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_2 + 0xc) == iVar10) {
      FUN_14482b872(param_2,iVar10);
    }
    iVar14 = (int)param_2[5];
    if (iVar14 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar11 = iVar14 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar7 = param_2 + 2;
    iVar12 = iVar14 + 1;
    iVar16 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar16 = iVar14;
    }
    if (iVar16 >> 5 == iVar11) {
      *(int *)(param_2 + 5) = iVar12;
    }
    else {
      if (*(int *)((longlong)param_2 + 0x2c) <= iVar14) {
        if (iVar14 + 0x20U < 0xa0) {
          iVar12 = 0x80;
          iVar11 = iVar14;
        }
        else {
          uVar5 = iVar14 + 0x20U >> 5;
          if (*(int *)((longlong)param_2 + 0x2c) + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar5) {
              uVar17 = uVar5;
            }
          }
          else {
            uVar17 = (uVar5 * 3 >> 3) + uVar5 + 0x10;
          }
          uVar8 = FUN_144a3809e(uVar17 << 2,0);
          iVar11 = (int)(uVar8 >> 2);
          iVar12 = -0x20;
          if ((int)uVar5 <= iVar11) {
            iVar12 = iVar11 << 5;
          }
          iVar11 = (int)param_2[5];
        }
        *(int *)((longlong)param_2 + 0x2c) = iVar12;
        FUN_1446efbd8(plVar7,iVar11);
        iVar12 = (int)param_2[5] + 1;
      }
      iVar11 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar11 = iVar12;
      }
      *(int *)(param_2 + 5) = iVar12;
      if (iVar12 % 0x20 != 0) {
        plVar15 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar15 = plVar7;
        }
        bVar9 = -(char)(iVar12 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar11 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar19 = (longlong)iVar10;
    if ((longlong *)param_2[4] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[4];
    }
    bVar9 = (byte)iVar14 & 0x1f;
    puVar6 = (uint *)((longlong)plVar7 + (longlong)(iVar16 >> 5) * 4);
    *puVar6 = *puVar6 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar10 = (int)param_2[6];
    lVar19 = (longlong)iVar10;
    iVar14 = *(int *)(*param_2 + 4 + lVar19 * 0x18);
    *(int *)(param_2 + 6) = iVar14;
    iVar11 = *(int *)((longlong)param_2 + 0x34) + -1;
    *(int *)((longlong)param_2 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*param_2 + (longlong)iVar14 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = param_2 + 2;
  if ((longlong *)param_2[4] != (longlong *)0x0) {
    plVar7 = (longlong *)param_2[4];
  }
  iVar14 = iVar10 + 0x1f;
  if (-1 < iVar10) {
    iVar14 = iVar10;
  }
  puVar6 = (uint *)((longlong)plVar7 + (longlong)(iVar14 >> 5) * 4);
  *puVar6 = *puVar6 | 1 << ((byte)iVar10 & 0x1f);
  iVar14 = 1;
  puVar1 = (ulonglong *)(*param_2 + lVar19 * 0x18);
  *puVar1 = param_4;
  puVar1[1] = uVar13;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  uVar5 = ((uint)(param_4 >> 0x14) & 0xffff ^ (uint)(param_4 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  uVar17 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  if ((uVar17 != 0) && (uVar17 != 1)) {
    plVar7 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[8];
    }
    iVar11 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_2[9] - 1U & uVar5) * 4);
    if (iVar11 != -1) {
      do {
        puVar2 = (ulonglong *)(*param_2 + (longlong)iVar11 * 0x18);
        if (*puVar2 == param_4) {
          uVar3 = *(undefined4 *)((longlong)puVar1 + 4);
          uVar13 = puVar1[1];
          uVar4 = *(undefined4 *)((longlong)puVar1 + 0xc);
          *(int *)puVar2 = (int)*puVar1;
          *(undefined4 *)((longlong)puVar2 + 4) = uVar3;
          *(int *)(puVar2 + 1) = (int)uVar13;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uVar4;
          FUN_140b394fc(param_2,iVar10,1);
          goto LAB_140d7d78f;
        }
        iVar11 = (int)puVar2[2];
      } while (iVar11 != -1);
    }
  }
  if (3 < uVar17) {
    uVar13 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
    lVar19 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar14 = 1 << ((byte)lVar19 & 0x1f);
  }
  if (((int)uVar17 < 1) || (iVar14 <= (int)param_2[9])) {
    uVar5 = (int)param_2[9] - 1U & uVar5;
    *(uint *)((longlong)puVar1 + 0x14) = uVar5;
    plVar7 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar7 = param_2 + 7;
    }
    *(undefined4 *)(puVar1 + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_2[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar7 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar7 = param_2 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_2[9] - 1U & (longlong)(int)uVar5) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_2 + 9) = iVar14;
    FUN_140d7d9ac(param_2);
  }
LAB_140d7d78f:
  return *puVar18;
}



// FUNCTION 140d7d9ac FUN_140d7d9ac body=600 status=ok
// SIG undefined FUN_140d7d9ac(void)

void FUN_140d7d9ac(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6;
        uVar13 = *(ulonglong *)(lVar11 + lVar10 * 0x18);
        uVar3 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x14 + lVar10 * 0x18) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_140d7dba2;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_140d7dba2:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d7dc14 FUN_140d7dc14 body=78 status=ok
// SIG undefined FUN_140d7dc14(void)

undefined8 * FUN_140d7dc14(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3593b0;
  FUN_14029e95e(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140d7dc62 FUN_140d7dc62 body=40 status=ok
// SIG undefined FUN_140d7dc62(void)

undefined8 FUN_140d7dc62(undefined8 param_1,int param_2)

{
  FUN_140d7dc8a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d7dc8a FUN_140d7dc8a body=365 status=ok
// SIG undefined FUN_140d7dc8a(void)

void FUN_140d7dc8a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3c1030;
  param_1[0x72] = &PTR_FUN_14b3c1670;
  param_1[0x73] = &PTR_FUN_14b3c1730;
  FUN_140d7ddf8(param_1 + 0x16d,1);
  plVar3 = (longlong *)param_1[0x16c];
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
  if (param_1[0x15f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15a] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x14e) == '\x01') {
    *(undefined1 *)(param_1 + 0x14e) = 0;
  }
  param_1[0x148] = 0;
  param_1[0x149] = 0xffffffffffffffff;
  plVar3 = (longlong *)param_1[0x147];
  if (plVar3 == (longlong *)0x0) goto LAB_140d7dd60;
  *(int *)(plVar3 + 0x21) = (int)plVar3[0x21] + -1;
  if ((int)plVar3[0x26] < 1) {
    FUN_1400847bc(plVar3 + 0x17,0);
    if ((int)plVar3[0x21] == 0) {
      FUN_140087e46(plVar3);
      if (*plVar3 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_140d7dd55;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar3);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar3);
      }
    }
  }
LAB_140d7dd55:
  param_1[0x147] = 0;
LAB_140d7dd60:
  FUN_140c3b746(param_1 + 0x74);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 140d7ddf8 FUN_140d7ddf8 body=124 status=ok
// SIG undefined FUN_140d7ddf8(void)

void FUN_140d7ddf8(longlong *param_1)

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



// FUNCTION 140d7de82 FUN_140d7de82 body=36 status=ok
// SIG undefined FUN_140d7de82(void)

undefined8 FUN_140d7de82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140d7deae FUN_140d7deae body=185 status=ok
// SIG undefined FUN_140d7deae(void)

undefined8 * FUN_140d7deae(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *param_1 = &PTR_FUN_14ac3c6b0;
  FUN_140440628(param_1 + 0x10,&DAT_14cb23b94,0);
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 4;
  *(undefined4 *)(param_1 + 0x19) = 0x40a00000;
  *(undefined1 *)(param_1 + 0x1d) = 3;
  *(char *)(param_1 + 0x1e) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  return param_1;
}



// FUNCTION 140d7df68 FUN_140d7df68 body=370 status=ok
// SIG undefined FUN_140d7df68(void)

undefined8 * FUN_140d7df68(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140d7e0f6 FUN_140d7e0f6 body=273 status=ok
// SIG undefined FUN_140d7e0f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140d7e0f6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b138220;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d7e208 FUN_140d7e208 body=438 status=ok
// SIG undefined FUN_140d7e208(void)

void FUN_140d7e208(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong local_90;
  int local_84;
  int local_80;
  int local_7c;
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
  local_48 = L"FDynamicBuffer";
  local_40 = 0;
  uStack_38 = 0;
  local_84 = *(int *)(param_1 + 0x20);
  local_80 = *(int *)(param_1 + 0x28);
  local_7c = (uint)(local_80 != 0) * 0x4000 + 0x4000;
  if (local_84 == 0) {
    FUN_14570b4be(param_2,&local_78);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
    FUN_14002049c(param_2,0);
  }
  else {
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
  }
  FUN_140d7e3c0(param_1,&local_90);
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
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d7e3c0 FUN_140d7e3c0 body=58 status=ok
// SIG undefined FUN_140d7e3c0(void)

void FUN_140d7e3c0(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  lVar4 = *param_2;
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 != lVar4) {
    *(longlong *)(param_1 + 0x10) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        LOCK();
        puVar1 = (uint *)(lVar5 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
        return;
      }
    }
  }
  return;
}



// FUNCTION 140d7e3fa FUN_140d7e3fa body=89 status=ok
// SIG undefined FUN_140d7e3fa(void)

undefined8 * FUN_140d7e3fa(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140d7e454();
  if (((lVar1 == 0) || ((int)param_3 < 0)) || (*(int *)(lVar1 + 0x168) <= (int)param_3)) {
    *(undefined4 *)(param_2 + 1) = DAT_14c948620;
    uVar2 = DAT_14c948618;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x160);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 8 + (ulonglong)param_3 * 0xc);
    uVar2 = *(undefined8 *)(lVar1 + (ulonglong)param_3 * 0xc);
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 140d7e454 FUN_140d7e454 body=89 status=ok
// SIG undefined FUN_140d7e454(void)

undefined8 FUN_140d7e454(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 400);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x188);
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
  return uVar6;
}



// FUNCTION 140d7e4ae FUN_140d7e4ae body=280 status=ok
// SIG undefined FUN_140d7e4ae(void)

undefined8 *
FUN_140d7e4ae(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5,longlong *param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  iVar1 = (int)param_5[1];
  pvVar2 = (void *)*param_5;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[5] = 0;
  iVar1 = (int)param_6[1];
  pvVar2 = (void *)*param_6;
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 7) = param_7;
  *(undefined1 *)((longlong)param_1 + 0x39) = param_8;
  *(undefined8 *)((longlong)param_1 + 0x3c) = param_9;
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 140d7e5c6 FUN_140d7e5c6 body=103 status=ok
// SIG undefined FUN_140d7e5c6(void)

ulonglong FUN_140d7e5c6(longlong param_1)

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
LAB_140d7e610:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140d7e610;
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



// FUNCTION 140d7e634 FUN_140d7e634 body=95 status=ok
// SIG undefined FUN_140d7e634(void)

int FUN_140d7e634(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
           (*(int *)(lVar2 + lVar4 * 0x28 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x20 + lVar4 * 0x28);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140d7e6a6 FUN_140d7e6a6 body=89 status=ok
// SIG undefined FUN_140d7e6a6(void)

undefined8 * FUN_140d7e6a6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1446dd7be(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 140d7e700 FUN_140d7e700 body=112 status=ok
// SIG undefined FUN_140d7e700(void)

void FUN_140d7e700(longlong *param_1,int param_2)

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



// FUNCTION 140d7e770 FUN_140d7e770 body=119 status=ok
// SIG undefined FUN_140d7e770(void)

bool FUN_140d7e770(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        plVar4 = (longlong *)*puVar3;
      }
      else {
        plVar4 = (longlong *)0x0;
      }
      cVar2 = (**(code **)(*plVar4 + 0x498))();
      return (byte)(cVar2 - 7U) < 2;
    }
  }
  return false;
}



// FUNCTION 140d7e800 FUN_140d7e800 body=57 status=ok
// SIG undefined FUN_140d7e800(void)

void FUN_140d7e800(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c320 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c320 = FUN_140002ddd(FUN_146530d6d,uVar1,L"MissionGiverType_ActorBase");
  }
  return;
}



// FUNCTION 140d7e83a FUN_140d7e83a body=246 status=ok
// SIG undefined FUN_140d7e83a(void)

undefined8 * FUN_140d7e83a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x70) == 0) && (*(int *)(param_1 + 0x80) == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
LAB_140d7e868:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  plVar4 = (longlong *)FUN_14001cc68(0x1b0);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b41b520;
  plVar1 = plVar4 + 2;
  memset(plVar1,0,0x1a0);
  FUN_1457a2e5e(plVar1);
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1457a2f3c(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = plVar1;
  param_2[1] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          goto LAB_140d7e868;
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140d7e932 FUN_140d7e932 body=109 status=ok
// SIG undefined FUN_140d7e932(void)

undefined8 FUN_140d7e932(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (param_2[2] == 0) {
    uVar3 = *param_2;
  }
  else {
    uVar3 = FUN_144a78877(*param_2,param_2[2]);
  }
  iVar2 = FUN_140bc5272((longlong *)(param_1 + 0x1d0),uVar3,param_2);
  if (iVar2 == -1) {
    uVar4 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x1d0);
    uVar4 = 0;
    if ((lVar1 + (longlong)iVar2 * 0x20 != 0) &&
       (puVar5 = (undefined8 *)(lVar1 + (longlong)iVar2 * 0x20 + 0x10), puVar5 != (undefined8 *)0x0)
       ) {
      uVar4 = *puVar5;
    }
  }
  return uVar4;
}


