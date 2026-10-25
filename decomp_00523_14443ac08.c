// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14443ac08 FUN_14443ac08 body=69 status=ok
// SIG undefined FUN_14443ac08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14443ac08(void)

{
  _DAT_14cbfa748 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014443ac4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbfa750,1);
  return;
}



// FUNCTION 14443ac59 FUN_14443ac59 body=290 status=ok
// SIG undefined FUN_14443ac59(void)

void FUN_14443ac59(longlong *param_1,longlong *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  param_4[1] = param_3;
  uVar1 = *(uint *)(param_1 + 1);
  param_4[2] = uVar1;
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      lVar2 = (longlong)(int)uVar3;
      if (*(longlong *)(*param_1 + lVar2 * 8) != 0) {
        *param_4 = *param_4 | 2 << ((byte)uVar3 & 0x1f);
        puVar4 = param_4 + 0x12;
        puVar5 = param_4 + 0x14;
        switch(uVar3) {
        case 0:
          break;
        case 1:
          puVar4 = param_4 + 0x16;
          puVar5 = param_4 + 0x18;
          break;
        case 2:
          puVar4 = param_4 + 0x1a;
          puVar5 = param_4 + 0x1c;
          break;
        case 3:
          puVar4 = param_4 + 0x1e;
          puVar5 = param_4 + 0x20;
          break;
        case 4:
          puVar4 = param_4 + 0x22;
          puVar5 = param_4 + 0x24;
          break;
        case 5:
          puVar4 = param_4 + 0x26;
          puVar5 = param_4 + 0x28;
          break;
        default:
          goto switchD_14443ad19_default;
        }
        *(undefined8 *)puVar4 = *(undefined8 *)(*param_1 + lVar2 * 8);
        *(undefined8 *)puVar5 = *(undefined8 *)(*param_2 + lVar2 * 8);
      }
switchD_14443ad19_default:
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return;
}



// FUNCTION 14443ad7c FUN_14443ad7c body=246 status=ok
// SIG undefined FUN_14443ad7c(void)

longlong * FUN_14443ad7c(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145fce05c();
  local_30 = 1;
  local_38 = 2;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14cbfa7a8);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14443ae74 FUN_14443ae74 body=518 status=ok
// SIG undefined FUN_14443ae74(void)

void FUN_14443ae74(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)DAT_14ca85550;
  if (((&DAT_14ca814b8)[uVar3 * 0xf] != 1) ||
     ((*(byte *)((longlong)&DAT_14ca814d8 + uVar3 * 0x3c + 1) & 0x10) == 0)) {
    iVar1 = *(int *)(param_2 + 0x88);
    *(uint *)(param_2 + 0x88) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
      FUN_14738ac8a(param_2,iVar1);
      uVar3 = (ulonglong)DAT_14ca85550;
    }
    *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x100000d140000;
  }
  if ((*(byte *)((longlong)&DAT_14ca814d0 + uVar3 * 0x3c + 6) & 0x10) == 0) {
    iVar1 = *(int *)(param_2 + 0x88);
    *(uint *)(param_2 + 0x88) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
      FUN_14738ac8a(param_2,iVar1);
    }
    *(ulonglong *)(param_2 + (longlong)iVar1 * 8) = (ulonglong)(byte)iVar1 + 0x1000040000;
    iVar2 = *(int *)(param_2 + 0x88);
    *(uint *)(param_2 + 0x88) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x8c) < iVar2 + 1U) {
      FUN_14738ac8a(param_2,iVar2);
    }
    *(ulonglong *)(param_2 + (longlong)iVar2 * 8) = (ulonglong)(byte)iVar1 + 0x1005040000;
    iVar2 = *(int *)(param_2 + 0x88);
    *(uint *)(param_2 + 0x88) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x8c) < iVar2 + 1U) {
      FUN_14738ac8a(param_2,iVar2);
    }
    uVar3 = (ulonglong)(iVar1 + 1U & 0xff);
    *(ulonglong *)(param_2 + (longlong)iVar2 * 8) = uVar3 + 0x801050000;
    iVar2 = *(int *)(param_2 + 0x88);
    *(uint *)(param_2 + 0x88) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x8c) < iVar2 + 1U) {
      FUN_14738ac8a(param_2,iVar2);
    }
    *(ulonglong *)(param_2 + (longlong)iVar2 * 8) = uVar3 + 0x802050400;
    iVar2 = *(int *)(param_2 + 0x88);
    *(uint *)(param_2 + 0x88) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x8c) < iVar2 + 1U) {
      FUN_14738ac8a(param_2,iVar2);
    }
    *(ulonglong *)(param_2 + (longlong)iVar2 * 8) = (ulonglong)(iVar1 + 2U & 0xff) + 0x1003040000;
    iVar2 = *(int *)(param_2 + 0x88);
    *(uint *)(param_2 + 0x88) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x8c) < iVar2 + 1U) {
      FUN_14738ac8a(param_2,iVar2);
    }
    *(ulonglong *)(param_2 + (longlong)iVar2 * 8) = (ulonglong)(iVar1 + 3U & 0xff) | 0x404070000;
  }
  return;
}



// FUNCTION 14443b07a FUN_14443b07a body=11205 status=ok
// SIG undefined FUN_14443b07a(void)

/* WARNING: Removing unreachable block (ram,0x00014443d89b) */
/* WARNING: Removing unreachable block (ram,0x00014443d66c) */
/* WARNING: Removing unreachable block (ram,0x00014443d55c) */
/* WARNING: Removing unreachable block (ram,0x00014443d782) */
/* WARNING: Removing unreachable block (ram,0x00014443d9b0) */

void FUN_14443b07a(longlong *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  undefined **ppuVar14;
  longlong *plVar15;
  uint *puVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  undefined1 uVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  undefined *puVar29;
  longlong lVar30;
  bool bVar31;
  undefined1 auStack_158 [32];
  undefined ***local_138;
  byte local_129;
  undefined ***local_128;
  undefined4 local_120;
  ulonglong local_118 [17];
  undefined8 local_90;
  undefined **local_88;
  int local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((char)param_1[0x28] != '\0') goto LAB_14443cf29;
  FUN_14006bf18();
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined1 *)((longlong)param_1 + 299) = 1;
  uVar8 = DAT_14c760db4;
  bVar5 = *(byte *)((longlong)param_1 + 0xc);
  local_90 = 0x1100000000;
  *(undefined1 *)(param_1 + 0x25) = 0xff;
  local_138 = (undefined ***)CONCAT71(local_138._1_7_,0xd);
  FUN_1447f936a(param_1);
  lVar11 = (**(code **)(*param_1 + 0x30))(param_1);
  if ((*(byte *)(lVar11 + 0x29) & 0x40) == 0) {
LAB_14443b141:
    if (*(int *)((longlong)param_1 + 0x13c) == 2) {
      lVar11 = (longlong)(int)param_1[0x27] * 0x30;
      plVar21 = (longlong *)(*(longlong *)(param_1[0x26] + 0x120) + lVar11);
      lVar11 = *(longlong *)(*(longlong *)(param_1[0x26] + 0x120) + 8 + lVar11);
      if (lVar11 == 0) {
        lVar11 = *plVar21;
        plVar12 = param_1 + 2;
        plVar15 = (longlong *)param_1[0x12];
        plVar18 = plVar15;
        if (plVar15 == (longlong *)0x0) {
          plVar18 = plVar12;
        }
        iVar25 = (int)param_1[0x13];
        uVar27 = (ulonglong)iVar25;
        if (uVar27 != 0) {
          lVar30 = 0;
          iVar24 = 0;
          do {
            if (((*(longlong *)((longlong)plVar18 + lVar30) == lVar11 + 0x50) &&
                (*(short *)((longlong)plVar18 + lVar30 + 0xc) == 0x10)) &&
               ((*(int *)((longlong)plVar18 + lVar30 + 8) == 0 &&
                (*(char *)((longlong)plVar18 + lVar30 + 0xe) == '\0')))) {
              if (iVar24 != 1) {
                uVar27 = (ulonglong)(uint)-iVar24;
                goto LAB_14443b905;
              }
              break;
            }
            iVar24 = iVar24 + -1;
            lVar30 = lVar30 + 0x10;
          } while (uVar27 << 4 != lVar30);
        }
        *(uint *)(param_1 + 0x13) = iVar25 + 1U;
        if (*(uint *)((longlong)param_1 + 0x9c) < iVar25 + 1U) {
          FUN_14472e0ae(plVar12,iVar25);
          plVar15 = (longlong *)param_1[0x12];
        }
        if (plVar15 == (longlong *)0x0) {
          plVar15 = plVar12;
        }
        plVar15[uVar27 * 2] = lVar11 + 0x50;
        plVar15[uVar27 * 2 + 1] = 0x1000000000;
LAB_14443b905:
        lVar11 = (longlong)(int)local_90;
        uVar8 = (int)local_90 + 1;
        local_90 = CONCAT44(local_90._4_4_,uVar8);
        if (local_90._4_4_ < uVar8) {
          FUN_14738ac8a(local_118);
        }
        local_118[lVar11] = uVar27 & 0xff | 0x1000040000;
        lVar11 = *plVar21;
        plVar15 = (longlong *)param_1[0x12];
        plVar18 = plVar15;
        if (plVar15 == (longlong *)0x0) {
          plVar18 = plVar12;
        }
        uVar27 = (ulonglong)(int)param_1[0x13];
        if (uVar27 != 0) {
          lVar30 = 0;
          iVar25 = 0;
          do {
            if ((((*(longlong *)((longlong)plVar18 + lVar30) == lVar11 + 0x50) &&
                 (*(short *)((longlong)plVar18 + lVar30 + 0xc) == 0x10)) &&
                (*(int *)((longlong)plVar18 + lVar30 + 8) == 0)) &&
               (*(char *)((longlong)plVar18 + lVar30 + 0xe) == '\0')) {
              if (iVar25 != 1) goto LAB_14443b993;
              break;
            }
            iVar25 = iVar25 + -1;
            lVar30 = lVar30 + 0x10;
          } while (uVar27 << 4 != lVar30);
        }
        uVar8 = (int)param_1[0x13] + 1;
        *(uint *)(param_1 + 0x13) = uVar8;
        if (*(uint *)((longlong)param_1 + 0x9c) < uVar8) {
          FUN_14472e0ae(plVar12);
          plVar15 = (longlong *)param_1[0x12];
        }
        if (plVar15 != (longlong *)0x0) {
          plVar12 = plVar15;
        }
        plVar12[uVar27 * 2] = lVar11 + 0x50;
        plVar12[uVar27 * 2 + 1] = 0x1000000000;
      }
      else {
        lVar11 = lVar11 + (ulonglong)*(uint *)(lVar11 + 0x9c) * 0x20;
        local_80 = -1;
        local_7c = 0x105;
        local_7a = 0;
        local_78 = (longlong *)0x0;
        local_88 = &PTR_FUN_14baae340;
        lVar30 = *(longlong *)(lVar11 + 0x50);
        local_70 = (undefined4)lVar30;
        uStack_6c = (undefined4)((ulonglong)lVar30 >> 0x20);
        if (lVar30 != 0) {
          LOCK();
          *(int *)(lVar30 + 8) = *(int *)(lVar30 + 8) + 1;
          UNLOCK();
        }
        lVar30 = *(longlong *)(lVar11 + 0x58);
        uStack_68 = (undefined4)lVar30;
        uStack_64 = (undefined4)((ulonglong)lVar30 >> 0x20);
        if (lVar30 != 0) {
          LOCK();
          *(int *)(lVar30 + 8) = *(int *)(lVar30 + 8) + 1;
          UNLOCK();
        }
        local_60 = *(longlong *)(lVar11 + 0x60);
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
          UNLOCK();
        }
        local_58 = *(undefined1 *)(lVar11 + 0x68);
        *(undefined4 *)((longlong)param_1 + 0x153) = 0x105ff;
        *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
        lVar11 = param_1[0x2b];
        if ((lVar11 != 0) && (param_1[0x2b] = 0, lVar11 != 0)) {
          LOCK();
          puVar16 = (uint *)(lVar11 + 8);
          uVar8 = *puVar16;
          *puVar16 = *puVar16 - 1;
          UNLOCK();
          if ((uVar8 & 0x3fffffff) == 1) {
            puVar16 = (uint *)(lVar11 + 8);
            LOCK();
            uVar8 = *puVar16;
            *puVar16 = *puVar16 | 0x40000000;
            UNLOCK();
            if ((uVar8 >> 0x1e & 1) == 0) {
              local_129 = *(byte *)(lVar11 + 0xd);
              plVar18 = (longlong *)FUN_14001cc68(0x10,8);
              plVar18[1] = lVar11;
              plVar12 = DAT_14ca843c0;
              plVar15 = DAT_14ca843c8;
              if ((local_129 & 2) == 0) {
                do {
                  *plVar18 = (longlong)plVar12;
                  LOCK();
                  bVar31 = plVar12 != DAT_14ca843c0;
                  plVar15 = plVar18;
                  if (bVar31) {
                    plVar12 = DAT_14ca843c0;
                    plVar15 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar15;
                  UNLOCK();
                } while (bVar31);
              }
              else {
                do {
                  *plVar18 = (longlong)plVar15;
                  LOCK();
                  bVar31 = plVar15 != DAT_14ca843c8;
                  plVar12 = plVar18;
                  if (bVar31) {
                    plVar15 = DAT_14ca843c8;
                    plVar12 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar12;
                  UNLOCK();
                } while (bVar31);
              }
            }
          }
        }
        FUN_149094b06(param_1 + 0x2c,&local_70);
        local_88 = &PTR_FUN_14baae340;
        FUN_14908489c(&local_70);
        plVar12 = local_78;
        local_88 = &PTR_FUN_14a38cff0;
        if (local_78 != (longlong *)0x0) {
          LOCK();
          puVar16 = (uint *)((longlong)local_78 + 8);
          uVar8 = *puVar16;
          *puVar16 = *puVar16 - 1;
          UNLOCK();
          if ((uVar8 & 0x3fffffff) == 1) {
            puVar16 = (uint *)((longlong)local_78 + 8);
            LOCK();
            uVar8 = *puVar16;
            *puVar16 = *puVar16 | 0x40000000;
            UNLOCK();
            if ((uVar8 >> 0x1e & 1) == 0) {
              bVar5 = *(byte *)((longlong)local_78 + 0xd);
              plVar18 = (longlong *)FUN_14001cc68(0x10,8);
              plVar18[1] = (longlong)plVar12;
              plVar12 = DAT_14ca843c0;
              plVar15 = DAT_14ca843c8;
              if ((bVar5 & 2) == 0) {
                do {
                  *plVar18 = (longlong)plVar12;
                  LOCK();
                  bVar31 = plVar12 != DAT_14ca843c0;
                  plVar15 = plVar18;
                  if (bVar31) {
                    plVar12 = DAT_14ca843c0;
                    plVar15 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar15;
                  UNLOCK();
                } while (bVar31);
              }
              else {
                do {
                  *plVar18 = (longlong)plVar15;
                  LOCK();
                  bVar31 = plVar15 != DAT_14ca843c8;
                  plVar12 = plVar18;
                  if (bVar31) {
                    plVar15 = DAT_14ca843c8;
                    plVar12 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar12;
                  UNLOCK();
                } while (bVar31);
              }
            }
          }
        }
        plVar12 = param_1 + 0x29;
        local_88 = &PTR_FUN_14a38cd70;
        local_7a = 2;
        if ((local_80 != -1) && (DAT_14c868880 == '\0')) {
          FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                        L"A FRenderResource was deleted without being released first!");
        }
        (**(code **)(*plVar12 + 0x18))(plVar12,param_2);
        lVar30 = plVar21[1] + (ulonglong)(1 - *(int *)(plVar21[1] + 0x9c)) * 0x20;
        local_80 = -1;
        local_7c = 0x105;
        local_7a = 0;
        local_78 = (longlong *)0x0;
        local_88 = &PTR_FUN_14baae340;
        lVar11 = *(longlong *)(lVar30 + 0x50);
        local_70 = (undefined4)lVar11;
        uStack_6c = (undefined4)((ulonglong)lVar11 >> 0x20);
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          UNLOCK();
        }
        lVar11 = *(longlong *)(lVar30 + 0x58);
        uStack_68 = (undefined4)lVar11;
        uStack_64 = (undefined4)((ulonglong)lVar11 >> 0x20);
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          UNLOCK();
        }
        local_60 = *(longlong *)(lVar30 + 0x60);
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
          UNLOCK();
        }
        local_58 = *(undefined1 *)(lVar30 + 0x68);
        *(undefined4 *)((longlong)param_1 + 0x18b) = 0x105ff;
        *(undefined4 *)(param_1 + 0x31) = 0xffffffff;
        lVar11 = param_1[0x32];
        if ((lVar11 != 0) && (param_1[0x32] = 0, lVar11 != 0)) {
          LOCK();
          puVar16 = (uint *)(lVar11 + 8);
          uVar8 = *puVar16;
          *puVar16 = *puVar16 - 1;
          UNLOCK();
          if ((uVar8 & 0x3fffffff) == 1) {
            puVar16 = (uint *)(lVar11 + 8);
            LOCK();
            uVar8 = *puVar16;
            *puVar16 = *puVar16 | 0x40000000;
            UNLOCK();
            if ((uVar8 >> 0x1e & 1) == 0) {
              local_129 = *(byte *)(lVar11 + 0xd);
              plVar19 = (longlong *)FUN_14001cc68(0x10,8);
              plVar19[1] = lVar11;
              plVar15 = DAT_14ca843c0;
              plVar18 = DAT_14ca843c8;
              if ((local_129 & 2) == 0) {
                do {
                  *plVar19 = (longlong)plVar15;
                  LOCK();
                  bVar31 = plVar15 != DAT_14ca843c0;
                  plVar18 = plVar19;
                  if (bVar31) {
                    plVar15 = DAT_14ca843c0;
                    plVar18 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar18;
                  UNLOCK();
                } while (bVar31);
              }
              else {
                do {
                  *plVar19 = (longlong)plVar18;
                  LOCK();
                  bVar31 = plVar18 != DAT_14ca843c8;
                  plVar15 = plVar19;
                  if (bVar31) {
                    plVar18 = DAT_14ca843c8;
                    plVar15 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar15;
                  UNLOCK();
                } while (bVar31);
              }
            }
          }
        }
        FUN_149094b06(param_1 + 0x33,&local_70);
        local_88 = &PTR_FUN_14baae340;
        FUN_14908489c(&local_70);
        plVar15 = local_78;
        local_88 = &PTR_FUN_14a38cff0;
        if (local_78 != (longlong *)0x0) {
          LOCK();
          puVar16 = (uint *)(local_78 + 1);
          uVar8 = *puVar16;
          *puVar16 = *puVar16 - 1;
          UNLOCK();
          if ((uVar8 & 0x3fffffff) == 1) {
            puVar16 = (uint *)(local_78 + 1);
            LOCK();
            uVar8 = *puVar16;
            *puVar16 = *puVar16 | 0x40000000;
            UNLOCK();
            if ((uVar8 >> 0x1e & 1) == 0) {
              bVar5 = *(byte *)((longlong)local_78 + 0xd);
              plVar19 = (longlong *)FUN_14001cc68(0x10,8);
              plVar19[1] = (longlong)plVar15;
              plVar15 = DAT_14ca843c0;
              plVar18 = DAT_14ca843c8;
              if ((bVar5 & 2) == 0) {
                do {
                  *plVar19 = (longlong)plVar15;
                  LOCK();
                  bVar31 = plVar15 != DAT_14ca843c0;
                  plVar18 = plVar19;
                  if (bVar31) {
                    plVar15 = DAT_14ca843c0;
                    plVar18 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar18;
                  UNLOCK();
                } while (bVar31);
              }
              else {
                do {
                  *plVar19 = (longlong)plVar18;
                  LOCK();
                  bVar31 = plVar18 != DAT_14ca843c8;
                  plVar15 = plVar19;
                  if (bVar31) {
                    plVar18 = DAT_14ca843c8;
                    plVar15 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar15;
                  UNLOCK();
                } while (bVar31);
              }
            }
          }
        }
        plVar15 = param_1 + 0x30;
        local_88 = &PTR_FUN_14a38cd70;
        local_7a = 2;
        if ((local_80 != -1) && (DAT_14c868880 == '\0')) {
          FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                        L"A FRenderResource was deleted without being released first!");
        }
        (**(code **)(param_1[0x30] + 0x18))(plVar15);
        plVar18 = param_1 + 2;
        plVar19 = (longlong *)param_1[0x12];
        plVar20 = plVar19;
        if (plVar19 == (longlong *)0x0) {
          plVar20 = plVar18;
        }
        iVar25 = (int)param_1[0x13];
        uVar27 = (ulonglong)iVar25;
        if (uVar27 != 0) {
          lVar11 = 0;
          iVar24 = 0;
          do {
            if ((((*(longlong **)((longlong)plVar20 + lVar11) == plVar12) &&
                 (*(short *)((longlong)plVar20 + lVar11 + 0xc) == 0x10)) &&
                (*(int *)((longlong)plVar20 + lVar11 + 8) == 0)) &&
               (*(char *)((longlong)plVar20 + lVar11 + 0xe) == '\0')) {
              if (iVar24 != 1) {
                uVar27 = (ulonglong)(uint)-iVar24;
                goto LAB_14443c9b5;
              }
              break;
            }
            iVar24 = iVar24 + -1;
            lVar11 = lVar11 + 0x10;
          } while (uVar27 << 4 != lVar11);
        }
        *(uint *)(param_1 + 0x13) = iVar25 + 1U;
        if (*(uint *)((longlong)param_1 + 0x9c) < iVar25 + 1U) {
          FUN_14472e0ae(plVar18,iVar25);
          plVar19 = (longlong *)param_1[0x12];
        }
        if (plVar19 == (longlong *)0x0) {
          plVar19 = plVar18;
        }
        plVar19[uVar27 * 2] = (longlong)plVar12;
        plVar19[uVar27 * 2 + 1] = 0x1000000000;
LAB_14443c9b5:
        lVar11 = (longlong)(int)local_90;
        uVar8 = (int)local_90 + 1;
        local_90 = CONCAT44(local_90._4_4_,uVar8);
        if (local_90._4_4_ < uVar8) {
          FUN_14738ac8a(local_118);
        }
        local_118[lVar11] = uVar27 & 0xff | 0x1000040000;
        plVar12 = (longlong *)param_1[0x12];
        plVar19 = plVar12;
        if (plVar12 == (longlong *)0x0) {
          plVar19 = plVar18;
        }
        uVar27 = (ulonglong)(int)param_1[0x13];
        if (uVar27 != 0) {
          lVar11 = 0;
          iVar25 = 0;
          do {
            if (((*(longlong **)((longlong)plVar19 + lVar11) == plVar15) &&
                (*(short *)((longlong)plVar19 + lVar11 + 0xc) == 0x10)) &&
               ((*(int *)((longlong)plVar19 + lVar11 + 8) == 0 &&
                (*(char *)((longlong)plVar19 + lVar11 + 0xe) == '\0')))) {
              if (iVar25 != 1) goto LAB_14443b993;
              break;
            }
            iVar25 = iVar25 + -1;
            lVar11 = lVar11 + 0x10;
          } while (uVar27 << 4 != lVar11);
        }
        uVar8 = (int)param_1[0x13] + 1;
        *(uint *)(param_1 + 0x13) = uVar8;
        if (*(uint *)((longlong)param_1 + 0x9c) < uVar8) {
          FUN_14472e0ae(plVar18);
          plVar12 = (longlong *)param_1[0x12];
        }
        if (plVar12 != (longlong *)0x0) {
          plVar18 = plVar12;
        }
        plVar18[uVar27 * 2] = (longlong)plVar15;
        plVar18[uVar27 * 2 + 1] = 0x1000000000;
      }
      goto LAB_14443b9dc;
    }
    if (*(int *)((longlong)param_1 + 0x13c) != 1) goto LAB_14443cd80;
    lVar11 = (longlong)(int)param_1[0x27] * 0x68;
    plVar21 = (longlong *)(*(longlong *)(param_1[0x26] + 0x110) + lVar11);
    lVar11 = *(longlong *)(*(longlong *)(param_1[0x26] + 0x110) + 8 + lVar11);
    if (lVar11 == 0) {
      lVar11 = *plVar21;
      plVar12 = param_1 + 2;
      plVar15 = (longlong *)param_1[0x12];
      plVar18 = plVar15;
      if (plVar15 == (longlong *)0x0) {
        plVar18 = plVar12;
      }
      iVar25 = (int)param_1[0x13];
      uVar27 = (ulonglong)iVar25;
      if (uVar27 != 0) {
        lVar30 = 0;
        iVar24 = 0;
        do {
          if (((*(longlong *)((longlong)plVar18 + lVar30) == lVar11 + 0x50) &&
              (*(short *)((longlong)plVar18 + lVar30 + 0xc) == 0x10)) &&
             ((*(int *)((longlong)plVar18 + lVar30 + 8) == 0 &&
              (*(char *)((longlong)plVar18 + lVar30 + 0xe) == '\0')))) {
            if (iVar24 != 1) {
              uVar27 = (ulonglong)(uint)-iVar24;
              goto LAB_14443b308;
            }
            break;
          }
          iVar24 = iVar24 + -1;
          lVar30 = lVar30 + 0x10;
        } while (uVar27 << 4 != lVar30);
      }
      *(uint *)(param_1 + 0x13) = iVar25 + 1U;
      if (*(uint *)((longlong)param_1 + 0x9c) < iVar25 + 1U) {
        FUN_14472e0ae(plVar12,iVar25);
        plVar15 = (longlong *)param_1[0x12];
      }
      if (plVar15 == (longlong *)0x0) {
        plVar15 = plVar12;
      }
      plVar15[uVar27 * 2] = lVar11 + 0x50;
      plVar15[uVar27 * 2 + 1] = 0x1000000000;
LAB_14443b308:
      lVar11 = (longlong)(int)local_90;
      uVar8 = (int)local_90 + 1;
      local_90 = CONCAT44(local_90._4_4_,uVar8);
      if (local_90._4_4_ < uVar8) {
        FUN_14738ac8a(local_118);
      }
      local_118[lVar11] = uVar27 & 0xff | 0x1000040000;
      lVar11 = *plVar21;
      plVar15 = (longlong *)param_1[0x12];
      plVar18 = plVar15;
      if (plVar15 == (longlong *)0x0) {
        plVar18 = plVar12;
      }
      iVar25 = (int)param_1[0x13];
      uVar27 = (ulonglong)iVar25;
      if (uVar27 != 0) {
        lVar30 = 0;
        iVar24 = 0;
        do {
          if (((*(longlong *)((longlong)plVar18 + lVar30) == lVar11 + 0x50) &&
              (*(short *)((longlong)plVar18 + lVar30 + 0xc) == 0x10)) &&
             ((*(int *)((longlong)plVar18 + lVar30 + 8) == 0 &&
              (*(char *)((longlong)plVar18 + lVar30 + 0xe) == '\0')))) {
            if (iVar24 != 1) {
              uVar27 = (ulonglong)(uint)-iVar24;
              goto LAB_14443b3de;
            }
            break;
          }
          iVar24 = iVar24 + -1;
          lVar30 = lVar30 + 0x10;
        } while (uVar27 << 4 != lVar30);
      }
      *(uint *)(param_1 + 0x13) = iVar25 + 1U;
      if (*(uint *)((longlong)param_1 + 0x9c) < iVar25 + 1U) {
        FUN_14472e0ae(plVar12,iVar25);
        plVar15 = (longlong *)param_1[0x12];
      }
      if (plVar15 == (longlong *)0x0) {
        plVar15 = plVar12;
      }
      plVar15[uVar27 * 2] = lVar11 + 0x50;
      plVar15[uVar27 * 2 + 1] = 0x1000000000;
LAB_14443b3de:
      lVar11 = (longlong)(int)local_90;
      uVar8 = (int)local_90 + 1;
      local_90 = CONCAT44(local_90._4_4_,uVar8);
      if (local_90._4_4_ < uVar8) {
        FUN_14738ac8a(local_118);
      }
      local_118[lVar11] = (uVar27 & 0xff) + 0x1005040000;
      lVar11 = *plVar21;
      plVar15 = (longlong *)param_1[0x12];
      plVar18 = plVar15;
      if (plVar15 == (longlong *)0x0) {
        plVar18 = plVar12;
      }
      iVar25 = (int)param_1[0x13];
      uVar27 = (ulonglong)iVar25;
      if (uVar27 != 0) {
        lVar30 = 0;
        iVar24 = 0;
        do {
          if ((((*(longlong *)((longlong)plVar18 + lVar30) == lVar11 + 0xa0) &&
               (*(short *)((longlong)plVar18 + lVar30 + 0xc) == 8)) &&
              (*(int *)((longlong)plVar18 + lVar30 + 8) == 0)) &&
             (*(char *)((longlong)plVar18 + lVar30 + 0xe) == '\0')) {
            if (iVar24 != 1) {
              uVar27 = (ulonglong)(uint)-iVar24;
              goto LAB_14443b4bc;
            }
            break;
          }
          iVar24 = iVar24 + -1;
          lVar30 = lVar30 + 0x10;
        } while (uVar27 << 4 != lVar30);
      }
      *(uint *)(param_1 + 0x13) = iVar25 + 1U;
      if (*(uint *)((longlong)param_1 + 0x9c) < iVar25 + 1U) {
        FUN_14472e0ae(plVar12,iVar25);
        plVar15 = (longlong *)param_1[0x12];
      }
      if (plVar15 == (longlong *)0x0) {
        plVar15 = plVar12;
      }
      plVar15[uVar27 * 2] = lVar11 + 0xa0;
      plVar15[uVar27 * 2 + 1] = 0x800000000;
LAB_14443b4bc:
      lVar11 = (longlong)(int)local_90;
      uVar8 = (int)local_90 + 1;
      local_90 = CONCAT44(local_90._4_4_,uVar8);
      if (local_90._4_4_ < uVar8) {
        FUN_14738ac8a(local_118);
      }
      local_118[lVar11] = uVar27 & 0xff | 0x801050000;
      lVar11 = *plVar21;
      plVar15 = (longlong *)param_1[0x12];
      plVar18 = plVar15;
      if (plVar15 == (longlong *)0x0) {
        plVar18 = plVar12;
      }
      uVar27 = (ulonglong)(int)param_1[0x13];
      if (uVar27 != 0) {
        lVar30 = 0;
        iVar25 = 0;
        do {
          if (((*(longlong *)((longlong)plVar18 + lVar30) == lVar11 + 0xa0) &&
              (*(short *)((longlong)plVar18 + lVar30 + 0xc) == 8)) &&
             ((*(int *)((longlong)plVar18 + lVar30 + 8) == 0 &&
              (*(char *)((longlong)plVar18 + lVar30 + 0xe) == '\0')))) {
            if (iVar25 != 1) {
              uVar27 = (ulonglong)(uint)-iVar25;
              goto LAB_14443b594;
            }
            break;
          }
          iVar25 = iVar25 + -1;
          lVar30 = lVar30 + 0x10;
        } while (uVar27 << 4 != lVar30);
      }
      uVar8 = (int)param_1[0x13] + 1;
      *(uint *)(param_1 + 0x13) = uVar8;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar8) {
        FUN_14472e0ae(plVar12);
        plVar15 = (longlong *)param_1[0x12];
      }
      if (plVar15 != (longlong *)0x0) {
        plVar12 = plVar15;
      }
      plVar12[uVar27 * 2] = lVar11 + 0xa0;
      plVar12[uVar27 * 2 + 1] = 0x800000000;
LAB_14443b594:
      iVar25 = (int)local_90;
      uVar8 = (int)local_90 + 1;
      local_90 = CONCAT44(local_90._4_4_,uVar8);
      if (local_90._4_4_ < uVar8) {
LAB_14443c961:
        FUN_14738ac8a(local_118);
      }
    }
    else {
      local_80 = -1;
      local_7c = 0x105;
      local_7a = 0;
      local_78 = (longlong *)0x0;
      local_88 = &PTR_FUN_14baae340;
      lVar30 = *(longlong *)(lVar11 + 0x50);
      local_70 = (undefined4)lVar30;
      uStack_6c = (undefined4)((ulonglong)lVar30 >> 0x20);
      if (lVar30 != 0) {
        LOCK();
        *(int *)(lVar30 + 8) = *(int *)(lVar30 + 8) + 1;
        UNLOCK();
      }
      lVar30 = *(longlong *)(lVar11 + 0x58);
      uStack_68 = (undefined4)lVar30;
      uStack_64 = (undefined4)((ulonglong)lVar30 >> 0x20);
      if (lVar30 != 0) {
        LOCK();
        *(int *)(lVar30 + 8) = *(int *)(lVar30 + 8) + 1;
        UNLOCK();
      }
      local_60 = *(longlong *)(lVar11 + 0x60);
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      local_58 = *(undefined1 *)(lVar11 + 0x68);
      *(undefined4 *)((longlong)param_1 + 0x153) = 0x105ff;
      *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
      lVar11 = param_1[0x2b];
      if ((lVar11 != 0) && (param_1[0x2b] = 0, lVar11 != 0)) {
        LOCK();
        puVar16 = (uint *)(lVar11 + 8);
        uVar8 = *puVar16;
        *puVar16 = *puVar16 - 1;
        UNLOCK();
        if ((uVar8 & 0x3fffffff) == 1) {
          puVar16 = (uint *)(lVar11 + 8);
          LOCK();
          uVar8 = *puVar16;
          *puVar16 = *puVar16 | 0x40000000;
          UNLOCK();
          if ((uVar8 >> 0x1e & 1) == 0) {
            bVar5 = *(byte *)(lVar11 + 0xd);
            plVar18 = (longlong *)FUN_14001cc68(0x10,8);
            plVar18[1] = lVar11;
            plVar12 = DAT_14ca843c0;
            plVar15 = DAT_14ca843c8;
            if ((bVar5 & 2) == 0) {
              do {
                *plVar18 = (longlong)plVar12;
                LOCK();
                bVar31 = plVar12 != DAT_14ca843c0;
                plVar15 = plVar18;
                if (bVar31) {
                  plVar12 = DAT_14ca843c0;
                  plVar15 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar15;
                UNLOCK();
              } while (bVar31);
            }
            else {
              do {
                *plVar18 = (longlong)plVar15;
                LOCK();
                bVar31 = plVar15 != DAT_14ca843c8;
                plVar12 = plVar18;
                if (bVar31) {
                  plVar15 = DAT_14ca843c8;
                  plVar12 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar12;
                UNLOCK();
              } while (bVar31);
            }
          }
        }
      }
      FUN_149094b06(param_1 + 0x2c,&local_70);
      local_88 = &PTR_FUN_14baae340;
      FUN_14908489c(&local_70);
      plVar12 = local_78;
      local_88 = &PTR_FUN_14a38cff0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        puVar16 = (uint *)((longlong)local_78 + 8);
        uVar8 = *puVar16;
        *puVar16 = *puVar16 - 1;
        UNLOCK();
        if ((uVar8 & 0x3fffffff) == 1) {
          puVar16 = (uint *)((longlong)local_78 + 8);
          LOCK();
          uVar8 = *puVar16;
          *puVar16 = *puVar16 | 0x40000000;
          UNLOCK();
          if ((uVar8 >> 0x1e & 1) == 0) {
            bVar5 = *(byte *)((longlong)local_78 + 0xd);
            plVar18 = (longlong *)FUN_14001cc68(0x10,8);
            plVar18[1] = (longlong)plVar12;
            plVar12 = DAT_14ca843c0;
            plVar15 = DAT_14ca843c8;
            if ((bVar5 & 2) == 0) {
              do {
                *plVar18 = (longlong)plVar12;
                LOCK();
                bVar31 = plVar12 != DAT_14ca843c0;
                plVar15 = plVar18;
                if (bVar31) {
                  plVar12 = DAT_14ca843c0;
                  plVar15 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar15;
                UNLOCK();
              } while (bVar31);
            }
            else {
              do {
                *plVar18 = (longlong)plVar15;
                LOCK();
                bVar31 = plVar15 != DAT_14ca843c8;
                plVar12 = plVar18;
                if (bVar31) {
                  plVar15 = DAT_14ca843c8;
                  plVar12 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar12;
                UNLOCK();
              } while (bVar31);
            }
          }
        }
      }
      plVar12 = param_1 + 0x29;
      local_88 = &PTR_FUN_14a38cd70;
      local_7a = 2;
      if ((local_80 != -1) && (DAT_14c868880 == '\0')) {
        FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                      L"A FRenderResource was deleted without being released first!");
      }
      (**(code **)(*plVar12 + 0x18))(plVar12,param_2);
      lVar11 = plVar21[1];
      local_80 = -1;
      local_7c = 0x105;
      local_7a = 0;
      local_78 = (longlong *)0x0;
      local_88 = &PTR_FUN_14baae340;
      lVar30 = *(longlong *)(lVar11 + 0x70);
      local_70 = (undefined4)lVar30;
      uStack_6c = (undefined4)((ulonglong)lVar30 >> 0x20);
      if (lVar30 != 0) {
        LOCK();
        *(int *)(lVar30 + 8) = *(int *)(lVar30 + 8) + 1;
        UNLOCK();
      }
      lVar30 = *(longlong *)(lVar11 + 0x78);
      uStack_68 = (undefined4)lVar30;
      uStack_64 = (undefined4)((ulonglong)lVar30 >> 0x20);
      if (lVar30 != 0) {
        LOCK();
        *(int *)(lVar30 + 8) = *(int *)(lVar30 + 8) + 1;
        UNLOCK();
      }
      local_60 = *(longlong *)(lVar11 + 0x80);
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      local_58 = *(undefined1 *)(lVar11 + 0x88);
      *(undefined4 *)((longlong)param_1 + 0x18b) = 0x105ff;
      *(undefined4 *)(param_1 + 0x31) = 0xffffffff;
      lVar11 = param_1[0x32];
      if ((lVar11 != 0) && (param_1[0x32] = 0, lVar11 != 0)) {
        LOCK();
        puVar16 = (uint *)(lVar11 + 8);
        uVar8 = *puVar16;
        *puVar16 = *puVar16 - 1;
        UNLOCK();
        if ((uVar8 & 0x3fffffff) == 1) {
          puVar16 = (uint *)(lVar11 + 8);
          LOCK();
          uVar8 = *puVar16;
          *puVar16 = *puVar16 | 0x40000000;
          UNLOCK();
          if ((uVar8 >> 0x1e & 1) == 0) {
            local_129 = *(byte *)(lVar11 + 0xd);
            plVar19 = (longlong *)FUN_14001cc68(0x10,8);
            plVar19[1] = lVar11;
            plVar15 = DAT_14ca843c0;
            plVar18 = DAT_14ca843c8;
            if ((local_129 & 2) == 0) {
              do {
                *plVar19 = (longlong)plVar15;
                LOCK();
                bVar31 = plVar15 != DAT_14ca843c0;
                plVar18 = plVar19;
                if (bVar31) {
                  plVar15 = DAT_14ca843c0;
                  plVar18 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar18;
                UNLOCK();
              } while (bVar31);
            }
            else {
              do {
                *plVar19 = (longlong)plVar18;
                LOCK();
                bVar31 = plVar18 != DAT_14ca843c8;
                plVar15 = plVar19;
                if (bVar31) {
                  plVar18 = DAT_14ca843c8;
                  plVar15 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar15;
                UNLOCK();
              } while (bVar31);
            }
          }
        }
      }
      FUN_149094b06(param_1 + 0x33,&local_70);
      local_88 = &PTR_FUN_14baae340;
      FUN_14908489c(&local_70);
      plVar15 = local_78;
      local_88 = &PTR_FUN_14a38cff0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        puVar16 = (uint *)((longlong)local_78 + 8);
        uVar8 = *puVar16;
        *puVar16 = *puVar16 - 1;
        UNLOCK();
        if ((uVar8 & 0x3fffffff) == 1) {
          puVar16 = (uint *)((longlong)local_78 + 8);
          LOCK();
          uVar8 = *puVar16;
          *puVar16 = *puVar16 | 0x40000000;
          UNLOCK();
          if ((uVar8 >> 0x1e & 1) == 0) {
            bVar5 = *(byte *)((longlong)local_78 + 0xd);
            plVar19 = (longlong *)FUN_14001cc68(0x10,8);
            plVar19[1] = (longlong)plVar15;
            plVar15 = DAT_14ca843c0;
            plVar18 = DAT_14ca843c8;
            if ((bVar5 & 2) == 0) {
              do {
                *plVar19 = (longlong)plVar15;
                LOCK();
                bVar31 = plVar15 != DAT_14ca843c0;
                plVar18 = plVar19;
                if (bVar31) {
                  plVar15 = DAT_14ca843c0;
                  plVar18 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar18;
                UNLOCK();
              } while (bVar31);
            }
            else {
              do {
                *plVar19 = (longlong)plVar18;
                LOCK();
                bVar31 = plVar18 != DAT_14ca843c8;
                plVar15 = plVar19;
                if (bVar31) {
                  plVar18 = DAT_14ca843c8;
                  plVar15 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar15;
                UNLOCK();
              } while (bVar31);
            }
          }
        }
      }
      plVar15 = param_1 + 0x30;
      local_88 = &PTR_FUN_14a38cd70;
      local_7a = 2;
      if ((local_80 != -1) && (DAT_14c868880 == '\0')) {
        FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                      L"A FRenderResource was deleted without being released first!");
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,param_2);
      lVar11 = plVar21[1];
      local_80 = -1;
      local_7c = 0x105;
      local_7a = 0;
      local_78 = (longlong *)0x0;
      local_88 = &PTR_FUN_14baae340;
      lVar30 = *(longlong *)(lVar11 + 0x90);
      local_70 = (undefined4)lVar30;
      uStack_6c = (undefined4)((ulonglong)lVar30 >> 0x20);
      if (lVar30 != 0) {
        LOCK();
        *(int *)(lVar30 + 8) = *(int *)(lVar30 + 8) + 1;
        UNLOCK();
      }
      lVar30 = *(longlong *)(lVar11 + 0x98);
      uStack_68 = (undefined4)lVar30;
      uStack_64 = (undefined4)((ulonglong)lVar30 >> 0x20);
      if (lVar30 != 0) {
        LOCK();
        *(int *)(lVar30 + 8) = *(int *)(lVar30 + 8) + 1;
        UNLOCK();
      }
      local_60 = *(longlong *)(lVar11 + 0xa0);
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      local_58 = *(undefined1 *)(lVar11 + 0xa8);
      *(undefined4 *)((longlong)param_1 + 0x1c3) = 0x105ff;
      *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
      lVar11 = param_1[0x39];
      if ((lVar11 != 0) && (param_1[0x39] = 0, lVar11 != 0)) {
        LOCK();
        puVar16 = (uint *)(lVar11 + 8);
        uVar8 = *puVar16;
        *puVar16 = *puVar16 - 1;
        UNLOCK();
        if ((uVar8 & 0x3fffffff) == 1) {
          puVar16 = (uint *)(lVar11 + 8);
          LOCK();
          uVar8 = *puVar16;
          *puVar16 = *puVar16 | 0x40000000;
          UNLOCK();
          if ((uVar8 >> 0x1e & 1) == 0) {
            local_129 = *(byte *)(lVar11 + 0xd);
            plVar20 = (longlong *)FUN_14001cc68(0x10,8);
            plVar20[1] = lVar11;
            plVar18 = DAT_14ca843c0;
            plVar19 = DAT_14ca843c8;
            if ((local_129 & 2) == 0) {
              do {
                *plVar20 = (longlong)plVar18;
                LOCK();
                bVar31 = plVar18 != DAT_14ca843c0;
                plVar19 = plVar20;
                if (bVar31) {
                  plVar18 = DAT_14ca843c0;
                  plVar19 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar19;
                UNLOCK();
              } while (bVar31);
            }
            else {
              do {
                *plVar20 = (longlong)plVar19;
                LOCK();
                bVar31 = plVar19 != DAT_14ca843c8;
                plVar18 = plVar20;
                if (bVar31) {
                  plVar19 = DAT_14ca843c8;
                  plVar18 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar18;
                UNLOCK();
              } while (bVar31);
            }
          }
        }
      }
      FUN_149094b06(param_1 + 0x3a,&local_70);
      local_88 = &PTR_FUN_14baae340;
      FUN_14908489c(&local_70);
      plVar18 = local_78;
      local_88 = &PTR_FUN_14a38cff0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        puVar16 = (uint *)(local_78 + 1);
        uVar8 = *puVar16;
        *puVar16 = *puVar16 - 1;
        UNLOCK();
        if ((uVar8 & 0x3fffffff) == 1) {
          puVar16 = (uint *)(local_78 + 1);
          LOCK();
          uVar8 = *puVar16;
          *puVar16 = *puVar16 | 0x40000000;
          UNLOCK();
          if ((uVar8 >> 0x1e & 1) == 0) {
            bVar5 = *(byte *)((longlong)local_78 + 0xd);
            plVar20 = (longlong *)FUN_14001cc68(0x10,8);
            plVar20[1] = (longlong)plVar18;
            plVar18 = DAT_14ca843c0;
            plVar19 = DAT_14ca843c8;
            if ((bVar5 & 2) == 0) {
              do {
                *plVar20 = (longlong)plVar18;
                LOCK();
                bVar31 = plVar18 != DAT_14ca843c0;
                plVar19 = plVar20;
                if (bVar31) {
                  plVar18 = DAT_14ca843c0;
                  plVar19 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar19;
                UNLOCK();
              } while (bVar31);
            }
            else {
              do {
                *plVar20 = (longlong)plVar19;
                LOCK();
                bVar31 = plVar19 != DAT_14ca843c8;
                plVar18 = plVar20;
                if (bVar31) {
                  plVar19 = DAT_14ca843c8;
                  plVar18 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar18;
                UNLOCK();
              } while (bVar31);
            }
          }
        }
      }
      plVar18 = param_1 + 0x37;
      local_88 = &PTR_FUN_14a38cd70;
      local_7a = 2;
      if ((local_80 != -1) && (DAT_14c868880 == '\0')) {
        FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                      L"A FRenderResource was deleted without being released first!");
      }
      FUN_14006bf18(plVar18);
      plVar19 = param_1 + 2;
      plVar20 = (longlong *)param_1[0x12];
      plVar22 = plVar20;
      if (plVar20 == (longlong *)0x0) {
        plVar22 = plVar19;
      }
      uVar27 = (ulonglong)(int)param_1[0x13];
      if (uVar27 != 0) {
        lVar11 = 0;
        iVar25 = 0;
        do {
          if ((((*(longlong **)((longlong)plVar22 + lVar11) == plVar12) &&
               (*(short *)((longlong)plVar22 + lVar11 + 0xc) == 0x10)) &&
              (*(int *)((longlong)plVar22 + lVar11 + 8) == 0)) &&
             (*(char *)((longlong)plVar22 + lVar11 + 0xe) == '\0')) {
            if (iVar25 != 1) {
              uVar27 = (ulonglong)(uint)-iVar25;
              goto LAB_14443c6cd;
            }
            break;
          }
          iVar25 = iVar25 + -1;
          lVar11 = lVar11 + 0x10;
        } while (uVar27 << 4 != lVar11);
      }
      uVar8 = (int)param_1[0x13] + 1;
      *(uint *)(param_1 + 0x13) = uVar8;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar8) {
        FUN_14472e0ae(plVar19);
        plVar20 = (longlong *)param_1[0x12];
      }
      if (plVar20 == (longlong *)0x0) {
        plVar20 = plVar19;
      }
      plVar20[uVar27 * 2] = (longlong)plVar12;
      plVar20[uVar27 * 2 + 1] = 0x1000000000;
LAB_14443c6cd:
      lVar11 = (longlong)(int)local_90;
      uVar8 = (int)local_90 + 1;
      local_90 = CONCAT44(local_90._4_4_,uVar8);
      if (local_90._4_4_ < uVar8) {
        FUN_14738ac8a(local_118);
      }
      local_118[lVar11] = uVar27 & 0xff | 0x1000040000;
      plVar12 = (longlong *)param_1[0x12];
      plVar20 = plVar12;
      if (plVar12 == (longlong *)0x0) {
        plVar20 = plVar19;
      }
      uVar27 = (ulonglong)(int)param_1[0x13];
      if (uVar27 != 0) {
        lVar11 = 0;
        iVar25 = 0;
        do {
          if (((*(longlong **)((longlong)plVar20 + lVar11) == plVar15) &&
              (*(short *)((longlong)plVar20 + lVar11 + 0xc) == 0x10)) &&
             ((*(int *)((longlong)plVar20 + lVar11 + 8) == 0 &&
              (*(char *)((longlong)plVar20 + lVar11 + 0xe) == '\0')))) {
            if (iVar25 != 1) {
              uVar27 = (ulonglong)(uint)-iVar25;
              goto LAB_14443c797;
            }
            break;
          }
          iVar25 = iVar25 + -1;
          lVar11 = lVar11 + 0x10;
        } while (uVar27 << 4 != lVar11);
      }
      uVar8 = (int)param_1[0x13] + 1;
      *(uint *)(param_1 + 0x13) = uVar8;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar8) {
        FUN_14472e0ae(plVar19);
        plVar12 = (longlong *)param_1[0x12];
      }
      if (plVar12 == (longlong *)0x0) {
        plVar12 = plVar19;
      }
      plVar12[uVar27 * 2] = (longlong)plVar15;
      plVar12[uVar27 * 2 + 1] = 0x1000000000;
LAB_14443c797:
      lVar11 = (longlong)(int)local_90;
      uVar8 = (int)local_90 + 1;
      local_90 = CONCAT44(local_90._4_4_,uVar8);
      if (local_90._4_4_ < uVar8) {
        FUN_14738ac8a(local_118);
      }
      local_118[lVar11] = (uVar27 & 0xff) + 0x1005040000;
      plVar12 = (longlong *)param_1[0x12];
      plVar15 = plVar12;
      if (plVar12 == (longlong *)0x0) {
        plVar15 = plVar19;
      }
      uVar27 = (ulonglong)(int)param_1[0x13];
      if (uVar27 != 0) {
        lVar11 = 0;
        iVar25 = 0;
        do {
          if (((*(longlong **)((longlong)plVar15 + lVar11) == plVar18) &&
              (*(short *)((longlong)plVar15 + lVar11 + 0xc) == 8)) &&
             ((*(int *)((longlong)plVar15 + lVar11 + 8) == 0 &&
              (*(char *)((longlong)plVar15 + lVar11 + 0xe) == '\0')))) {
            if (iVar25 != 1) {
              uVar27 = (ulonglong)(uint)-iVar25;
              goto LAB_14443c86b;
            }
            break;
          }
          iVar25 = iVar25 + -1;
          lVar11 = lVar11 + 0x10;
        } while (uVar27 << 4 != lVar11);
      }
      uVar8 = (int)param_1[0x13] + 1;
      *(uint *)(param_1 + 0x13) = uVar8;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar8) {
        FUN_14472e0ae(plVar19);
        plVar12 = (longlong *)param_1[0x12];
      }
      if (plVar12 == (longlong *)0x0) {
        plVar12 = plVar19;
      }
      plVar12[uVar27 * 2] = (longlong)plVar18;
      plVar12[uVar27 * 2 + 1] = 0x800000000;
LAB_14443c86b:
      lVar11 = (longlong)(int)local_90;
      uVar8 = (int)local_90 + 1;
      local_90 = CONCAT44(local_90._4_4_,uVar8);
      if (local_90._4_4_ < uVar8) {
        FUN_14738ac8a(local_118);
      }
      local_118[lVar11] = uVar27 & 0xff | 0x801050000;
      plVar12 = (longlong *)param_1[0x12];
      plVar15 = plVar12;
      if (plVar12 == (longlong *)0x0) {
        plVar15 = plVar19;
      }
      uVar27 = (ulonglong)(int)param_1[0x13];
      if (uVar27 != 0) {
        lVar11 = 0;
        iVar25 = 0;
        do {
          if ((((*(longlong **)((longlong)plVar15 + lVar11) == plVar18) &&
               (*(short *)((longlong)plVar15 + lVar11 + 0xc) == 8)) &&
              (*(int *)((longlong)plVar15 + lVar11 + 8) == 0)) &&
             (*(char *)((longlong)plVar15 + lVar11 + 0xe) == '\0')) {
            if (iVar25 != 1) {
              uVar27 = (ulonglong)(uint)-iVar25;
              goto LAB_14443c939;
            }
            break;
          }
          iVar25 = iVar25 + -1;
          lVar11 = lVar11 + 0x10;
        } while (uVar27 << 4 != lVar11);
      }
      uVar8 = (int)param_1[0x13] + 1;
      *(uint *)(param_1 + 0x13) = uVar8;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar8) {
        FUN_14472e0ae(plVar19);
        plVar12 = (longlong *)param_1[0x12];
      }
      if (plVar12 != (longlong *)0x0) {
        plVar19 = plVar12;
      }
      plVar19[uVar27 * 2] = (longlong)plVar18;
      plVar19[uVar27 * 2 + 1] = 0x800000000;
LAB_14443c939:
      iVar25 = (int)local_90;
      uVar8 = (int)local_90 + 1;
      local_90 = CONCAT44(local_90._4_4_,uVar8);
      if (local_90._4_4_ < uVar8) goto LAB_14443c961;
    }
    local_118[iVar25] = (uVar27 & 0xff) + 0x802050400;
    lVar11 = *plVar21;
    plVar12 = param_1 + 2;
    plVar15 = (longlong *)param_1[0x12];
    plVar18 = plVar15;
    if (plVar15 == (longlong *)0x0) {
      plVar18 = plVar12;
    }
    iVar25 = (int)param_1[0x13];
    uVar27 = (ulonglong)iVar25;
    if (uVar27 != 0) {
      lVar30 = 0;
      iVar24 = 0;
      do {
        if (((*(longlong *)((longlong)plVar18 + lVar30) == lVar11 + 200) &&
            (*(short *)((longlong)plVar18 + lVar30 + 0xc) == 0x10)) &&
           ((*(int *)((longlong)plVar18 + lVar30 + 8) == 0 &&
            (*(char *)((longlong)plVar18 + lVar30 + 0xe) == '\0')))) {
          if (iVar24 != 1) {
            uVar27 = (ulonglong)(uint)-iVar24;
            goto LAB_14443b678;
          }
          break;
        }
        iVar24 = iVar24 + -1;
        lVar30 = lVar30 + 0x10;
      } while (uVar27 << 4 != lVar30);
    }
    *(uint *)(param_1 + 0x13) = iVar25 + 1U;
    if (*(uint *)((longlong)param_1 + 0x9c) < iVar25 + 1U) {
      FUN_14472e0ae(plVar12,iVar25);
      plVar15 = (longlong *)param_1[0x12];
    }
    if (plVar15 == (longlong *)0x0) {
      plVar15 = plVar12;
    }
    plVar15[uVar27 * 2] = lVar11 + 200;
    plVar15[uVar27 * 2 + 1] = 0x1000000000;
LAB_14443b678:
    lVar11 = (longlong)(int)local_90;
    uVar8 = (int)local_90 + 1;
    local_90 = CONCAT44(local_90._4_4_,uVar8);
    if (local_90._4_4_ < uVar8) {
      FUN_14738ac8a(local_118);
    }
    local_118[lVar11] = (uVar27 & 0xff) + 0x1003040000;
    lVar11 = *plVar21;
    plVar15 = (longlong *)param_1[0x12];
    plVar18 = plVar15;
    if (plVar15 == (longlong *)0x0) {
      plVar18 = plVar12;
    }
    iVar25 = (int)param_1[0x13];
    uVar27 = (ulonglong)iVar25;
    if (uVar27 != 0) {
      lVar30 = 0;
      iVar24 = 0;
      do {
        if ((((*(longlong *)((longlong)plVar18 + lVar30) == lVar11 + 0xf0) &&
             (*(short *)((longlong)plVar18 + lVar30 + 0xc) == 4)) &&
            (*(int *)((longlong)plVar18 + lVar30 + 8) == 0)) &&
           (*(char *)((longlong)plVar18 + lVar30 + 0xe) == '\0')) {
          if (iVar24 != 1) {
            uVar27 = (ulonglong)(uint)-iVar24;
            goto LAB_14443b756;
          }
          break;
        }
        iVar24 = iVar24 + -1;
        lVar30 = lVar30 + 0x10;
      } while (uVar27 << 4 != lVar30);
    }
    *(uint *)(param_1 + 0x13) = iVar25 + 1U;
    if (*(uint *)((longlong)param_1 + 0x9c) < iVar25 + 1U) {
      FUN_14472e0ae(plVar12,iVar25);
      plVar15 = (longlong *)param_1[0x12];
    }
    if (plVar15 != (longlong *)0x0) {
      plVar12 = plVar15;
    }
    plVar12[uVar27 * 2] = lVar11 + 0xf0;
    plVar12[uVar27 * 2 + 1] = 0x400000000;
LAB_14443b756:
    uVar6 = local_90;
    lVar11 = (longlong)(int)local_90;
    uVar8 = (int)local_90 + 1;
    local_90 = CONCAT44(local_90._4_4_,uVar8);
    if (local_90._4_4_ < uVar8) {
      FUN_14738ac8a(local_118,uVar6 & 0xffffffff);
    }
    local_118[lVar11] = uVar27 & 0xff | 0x404070000;
    lVar11 = *plVar21;
    lVar30 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar25 = *(int *)(lVar30 + 0xc60);
    if (DAT_14c86a9fc != 0) {
LAB_14443b7b4:
      if (iVar25 != 0x10) goto LAB_14443cafd;
LAB_14443b7bd:
      local_78 = *(longlong **)(lVar11 + 0x60);
      local_88 = (undefined **)0xffffffffffffffff;
      local_80 = 0xffffffff;
      local_70._0_1_ = 2;
      uStack_6c = 0;
      uStack_68 = 8;
      uStack_64 = 0;
      local_58 = 0;
      local_120 = 1;
      local_128 = &local_88;
      FUN_144760590(&DAT_14ca85100,&local_128,0);
      local_78 = *(longlong **)(lVar11 + 0xb0);
      local_88 = (undefined **)0xffffffffffffffff;
      local_80 = 0xffffffff;
      local_70._0_1_ = 2;
      uStack_6c = 0;
      uStack_68 = 8;
      uStack_64 = 0;
      local_58 = 0;
      local_120 = 1;
      local_128 = &local_88;
      FUN_144760590(&DAT_14ca85100,&local_128,0);
      local_78 = *(longlong **)(lVar11 + 0xd8);
      local_88 = (undefined **)0xffffffffffffffff;
      local_80 = 0xffffffff;
      local_70 = CONCAT31(local_70._1_3_,2);
      uStack_6c = 0;
      uStack_68 = 8;
      uStack_64 = 0;
      local_58 = 0;
      local_120 = 1;
      local_128 = &local_88;
      FUN_144760590(&DAT_14ca85100,&local_128,0);
      local_78 = *(longlong **)(lVar11 + 0x100);
      goto LAB_14443be7d;
    }
    if (iVar25 == 2) goto LAB_14443b7bd;
    if (iVar25 != 1) goto LAB_14443b7b4;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 == DVar10) goto LAB_14443b7bd;
LAB_14443cafd:
    if (DAT_14ca9a438 != '\0') {
LAB_14443cb2e:
      if (DAT_14ca9a43c == 0) {
        puVar3 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar16 = (uint *)*puVar3;
        if (puVar16 != (uint *)0x0) goto LAB_14443cc1f;
LAB_14443cba1:
        uVar8 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar8 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar8 | 1;
          __tlregdtor(&LAB_14444a20d);
        }
        lVar30 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar13 = *(undefined4 **)(lVar30 + 0x310);
        *(undefined8 *)(lVar30 + 0x310) = 0;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar13 = 0xffffffff;
        *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar3 = puVar13;
        FUN_140217a48(puVar3);
        puVar16 = (uint *)*puVar3;
LAB_14443cc1f:
        uVar27 = *(longlong *)(puVar16 + 0x10) + 7;
        uVar8 = puVar16[0x12];
LAB_14443cc3c:
        puVar28 = (undefined8 *)(uVar27 & 0xfffffffffffffff8);
        if (puVar28 + 0x16 <= puVar16 + 0x4000) {
          *(undefined8 **)(puVar16 + 0x10) = puVar28 + 0x16;
          puVar16[0x12] = uVar8 + 1;
          FUN_1447247dc(puVar28,0);
          ppuVar14 = &PTR_FUN_14bab2aa8;
LAB_14443d087:
          iVar25 = 0;
          *puVar28 = ppuVar14;
          puVar28[0x15] = lVar11;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar8 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
              uVar27 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
            }
            else {
              uVar27 = 2;
            }
          }
          else {
            iVar25 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar27 = 5;
          }
          if (*(code **)(puVar28[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar28[0xe] + 0x18))(puVar28 + 0xe,puVar28 + 9);
          }
          puVar28[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar28[9] = puVar28;
          puVar28[10] = puVar28;
          lVar11 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar11 == 0) {
            uVar6 = 1;
            if ((char)uVar27 != '\x06') {
              uVar6 = uVar27;
            }
            uVar27 = uVar6;
            uVar17 = 0;
          }
          else {
            if ((char)uVar27 == '\x06') {
              uVar27 = *(ulonglong *)(lVar11 + 0x38) >> 0x3b;
            }
            uVar17 = *(undefined8 *)(lVar11 + 0x30);
          }
          puVar28[0xf] = uVar17;
          puVar28[0x10] = uVar27 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar28 + 0x1c) = iVar25;
          if (puVar28 == (undefined8 *)0x0) {
            local_88 = (undefined **)CONCAT71(local_88._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar28 + 1) = *(int *)(puVar28 + 1) + 1;
            UNLOCK();
            local_88 = (undefined **)CONCAT71(local_88._1_7_,1);
            FUN_1447439e4(puVar28);
            LOCK();
            piVar2 = (int *)(puVar28 + 1);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)*puVar28)(puVar28,1);
            }
          }
          goto LAB_14443cd80;
        }
        *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
        LOCK();
        uVar4 = *puVar16;
        *puVar16 = *puVar16 + uVar8 + 1;
        UNLOCK();
        if ((uVar4 ^ uVar8) == 0xffffffff) goto code_r0x00014443cc5e;
        goto LAB_14443cba1;
      }
      uStack_68 = 0x4bab2a40;
      local_88 = (undefined **)FUN_14444a234;
      puVar29 = &DAT_14cbfd550;
      local_60 = lVar11;
      goto LAB_14443cd5c;
    }
    if ((DAT_14c86a9f8 == '\x01') && (iVar25 = *(int *)(lVar30 + 0xc60), iVar25 != 2)) {
      if (iVar25 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) goto LAB_14443d3f8;
      }
      goto LAB_14443cb2e;
    }
LAB_14443d3f8:
    local_78 = *(longlong **)(lVar11 + 0x60);
    local_88 = (undefined **)0xffffffffffffffff;
    local_80 = 0xffffffff;
    local_70._0_1_ = 2;
    uStack_6c = 0;
    uStack_68 = 8;
    uStack_64 = 0;
    local_58 = 0;
    local_120 = 1;
    local_128 = &local_88;
    FUN_144760590(&DAT_14ca85100,&local_128,0);
    local_78 = *(longlong **)(lVar11 + 0xb0);
    local_88 = (undefined **)0xffffffffffffffff;
    local_80 = 0xffffffff;
    local_70._0_1_ = 2;
    uStack_6c = 0;
    uStack_68 = 8;
    uStack_64 = 0;
    local_58 = 0;
    local_120 = 1;
    local_128 = &local_88;
    FUN_144760590(&DAT_14ca85100,&local_128,0);
    local_78 = *(longlong **)(lVar11 + 0xd8);
    local_88 = (undefined **)0xffffffffffffffff;
    local_80 = 0xffffffff;
    local_70._0_1_ = 2;
    uStack_6c = 0;
    uStack_68 = 8;
    uStack_64 = 0;
    local_58 = 0;
    local_120 = 1;
    local_128 = &local_88;
    FUN_144760590(&DAT_14ca85100,&local_128,0);
    local_78 = *(longlong **)(lVar11 + 0x100);
    goto LAB_14443beac;
  }
  if (bVar5 != 5) {
    uVar8 = (uint)bVar5;
  }
  if (((int)uVar8 < 2) ||
     (uVar26 = 1,
     (*(byte *)((longlong)&DAT_14ca814d0 +
               (ulonglong)*(ushort *)(&DAT_14ca85070 + (ulonglong)uVar8 * 2) * 0x3c + 6) & 0x10) ==
     0)) goto LAB_14443b141;
  goto LAB_14443cd89;
code_r0x00014443cc5e:
  puVar16 = (uint *)*puVar3;
  *puVar16 = 0xffffffff;
  *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
  puVar16[0x12] = 0;
  *puVar3 = puVar16;
  uVar27 = (longlong)puVar16 + 0x5f;
  uVar8 = 0;
  goto LAB_14443cc3c;
LAB_14443b993:
  uVar27 = (ulonglong)(uint)-iVar25;
LAB_14443b9dc:
  iVar25 = (int)local_90;
  uVar8 = (int)local_90 + 1;
  local_90 = CONCAT44(local_90._4_4_,uVar8);
  if (local_90._4_4_ < uVar8) {
    FUN_14738ac8a(local_118);
  }
  local_118[iVar25] = (uVar27 & 0xff) + 0x1005040000;
  lVar11 = *plVar21;
  plVar12 = param_1 + 2;
  plVar15 = (longlong *)param_1[0x12];
  plVar18 = plVar15;
  if (plVar15 == (longlong *)0x0) {
    plVar18 = plVar12;
  }
  iVar25 = (int)param_1[0x13];
  uVar27 = (ulonglong)iVar25;
  if (uVar27 != 0) {
    lVar30 = 0;
    iVar24 = 0;
    do {
      if (((*(longlong *)((longlong)plVar18 + lVar30) == lVar11 + 0xa0) &&
          (*(short *)((longlong)plVar18 + lVar30 + 0xc) == 8)) &&
         ((*(int *)((longlong)plVar18 + lVar30 + 8) == 0 &&
          (*(char *)((longlong)plVar18 + lVar30 + 0xe) == '\0')))) {
        if (iVar24 != 1) {
          uVar27 = (ulonglong)(uint)-iVar24;
          goto LAB_14443bac1;
        }
        break;
      }
      iVar24 = iVar24 + -1;
      lVar30 = lVar30 + 0x10;
    } while (uVar27 << 4 != lVar30);
  }
  *(uint *)(param_1 + 0x13) = iVar25 + 1U;
  if (*(uint *)((longlong)param_1 + 0x9c) < iVar25 + 1U) {
    FUN_14472e0ae(plVar12,iVar25);
    plVar15 = (longlong *)param_1[0x12];
  }
  if (plVar15 == (longlong *)0x0) {
    plVar15 = plVar12;
  }
  plVar15[uVar27 * 2] = lVar11 + 0xa0;
  plVar15[uVar27 * 2 + 1] = 0x800000000;
LAB_14443bac1:
  lVar11 = (longlong)(int)local_90;
  uVar8 = (int)local_90 + 1;
  local_90 = CONCAT44(local_90._4_4_,uVar8);
  if (local_90._4_4_ < uVar8) {
    FUN_14738ac8a(local_118);
  }
  local_118[lVar11] = uVar27 & 0xff | 0x801050000;
  lVar11 = *plVar21;
  plVar15 = (longlong *)param_1[0x12];
  plVar18 = plVar15;
  if (plVar15 == (longlong *)0x0) {
    plVar18 = plVar12;
  }
  iVar25 = (int)param_1[0x13];
  uVar27 = (ulonglong)iVar25;
  if (uVar27 != 0) {
    lVar30 = 0;
    iVar24 = 0;
    do {
      if (((*(longlong *)((longlong)plVar18 + lVar30) == lVar11 + 0xa0) &&
          (*(short *)((longlong)plVar18 + lVar30 + 0xc) == 8)) &&
         ((*(int *)((longlong)plVar18 + lVar30 + 8) == 0 &&
          (*(char *)((longlong)plVar18 + lVar30 + 0xe) == '\0')))) {
        if (iVar24 != 1) {
          uVar27 = (ulonglong)(uint)-iVar24;
          goto LAB_14443bba3;
        }
        break;
      }
      iVar24 = iVar24 + -1;
      lVar30 = lVar30 + 0x10;
    } while (uVar27 << 4 != lVar30);
  }
  *(uint *)(param_1 + 0x13) = iVar25 + 1U;
  if (*(uint *)((longlong)param_1 + 0x9c) < iVar25 + 1U) {
    FUN_14472e0ae(plVar12,iVar25);
    plVar15 = (longlong *)param_1[0x12];
  }
  if (plVar15 == (longlong *)0x0) {
    plVar15 = plVar12;
  }
  plVar15[uVar27 * 2] = lVar11 + 0xa0;
  plVar15[uVar27 * 2 + 1] = 0x800000000;
LAB_14443bba3:
  lVar11 = (longlong)(int)local_90;
  uVar8 = (int)local_90 + 1;
  local_90 = CONCAT44(local_90._4_4_,uVar8);
  if (local_90._4_4_ < uVar8) {
    FUN_14738ac8a(local_118);
  }
  local_118[lVar11] = (uVar27 & 0xff) + 0x802050400;
  lVar11 = *plVar21;
  plVar15 = (longlong *)param_1[0x12];
  plVar18 = plVar15;
  if (plVar15 == (longlong *)0x0) {
    plVar18 = plVar12;
  }
  iVar25 = (int)param_1[0x13];
  uVar27 = (ulonglong)iVar25;
  if (uVar27 != 0) {
    lVar30 = 0;
    iVar24 = 0;
    do {
      if ((((*(longlong *)((longlong)plVar18 + lVar30) == lVar11 + 200) &&
           (*(short *)((longlong)plVar18 + lVar30 + 0xc) == 0x10)) &&
          (*(int *)((longlong)plVar18 + lVar30 + 8) == 0)) &&
         (*(char *)((longlong)plVar18 + lVar30 + 0xe) == '\0')) {
        if (iVar24 != 1) {
          uVar27 = (ulonglong)(uint)-iVar24;
          goto LAB_14443bc81;
        }
        break;
      }
      iVar24 = iVar24 + -1;
      lVar30 = lVar30 + 0x10;
    } while (uVar27 << 4 != lVar30);
  }
  *(uint *)(param_1 + 0x13) = iVar25 + 1U;
  if (*(uint *)((longlong)param_1 + 0x9c) < iVar25 + 1U) {
    FUN_14472e0ae(plVar12,iVar25);
    plVar15 = (longlong *)param_1[0x12];
  }
  if (plVar15 == (longlong *)0x0) {
    plVar15 = plVar12;
  }
  plVar15[uVar27 * 2] = lVar11 + 200;
  plVar15[uVar27 * 2 + 1] = 0x1000000000;
LAB_14443bc81:
  lVar11 = (longlong)(int)local_90;
  uVar8 = (int)local_90 + 1;
  local_90 = CONCAT44(local_90._4_4_,uVar8);
  if (local_90._4_4_ < uVar8) {
    FUN_14738ac8a(local_118);
  }
  local_118[lVar11] = (uVar27 & 0xff) + 0x1003040000;
  lVar11 = *plVar21;
  plVar15 = (longlong *)param_1[0x12];
  plVar18 = plVar15;
  if (plVar15 == (longlong *)0x0) {
    plVar18 = plVar12;
  }
  iVar25 = (int)param_1[0x13];
  uVar27 = (ulonglong)iVar25;
  if (uVar27 != 0) {
    lVar30 = 0;
    iVar24 = 0;
    do {
      if (((*(longlong *)((longlong)plVar18 + lVar30) == lVar11 + 0xa0) &&
          (*(short *)((longlong)plVar18 + lVar30 + 0xc) == 4)) &&
         ((*(int *)((longlong)plVar18 + lVar30 + 8) == 0 &&
          (*(char *)((longlong)plVar18 + lVar30 + 0xe) == '\0')))) {
        if (iVar24 != 1) {
          uVar27 = (ulonglong)(uint)-iVar24;
          goto LAB_14443bd5f;
        }
        break;
      }
      iVar24 = iVar24 + -1;
      lVar30 = lVar30 + 0x10;
    } while (uVar27 << 4 != lVar30);
  }
  *(uint *)(param_1 + 0x13) = iVar25 + 1U;
  if (*(uint *)((longlong)param_1 + 0x9c) < iVar25 + 1U) {
    FUN_14472e0ae(plVar12,iVar25);
    plVar15 = (longlong *)param_1[0x12];
  }
  if (plVar15 != (longlong *)0x0) {
    plVar12 = plVar15;
  }
  plVar12[uVar27 * 2] = lVar11 + 0xa0;
  plVar12[uVar27 * 2 + 1] = 0x400000000;
LAB_14443bd5f:
  uVar6 = local_90;
  lVar11 = (longlong)(int)local_90;
  uVar8 = (int)local_90 + 1;
  local_90 = CONCAT44(local_90._4_4_,uVar8);
  if (local_90._4_4_ < uVar8) {
    FUN_14738ac8a(local_118,uVar6 & 0xffffffff);
  }
  local_118[lVar11] = uVar27 & 0xff | 0x404070000;
  lVar11 = *plVar21;
  lVar30 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar25 = *(int *)(lVar30 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar25 != 2) {
      if (iVar25 != 1) goto LAB_14443bdbd;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_14443bdc6;
      goto LAB_14443ccdb;
    }
LAB_14443bdc6:
    local_78 = *(longlong **)(lVar11 + 0x60);
    local_88 = (undefined **)0xffffffffffffffff;
    local_80 = 0xffffffff;
    local_70._0_1_ = 2;
    uStack_6c = 0;
    uStack_68 = 8;
    uStack_64 = 0;
    local_58 = 0;
    local_120 = 1;
    local_128 = &local_88;
    FUN_144760590(&DAT_14ca85100,&local_128,0);
    local_78 = *(longlong **)(lVar11 + 0xb0);
    local_88 = (undefined **)0xffffffffffffffff;
    local_80 = 0xffffffff;
    local_70 = CONCAT31(local_70._1_3_,2);
    uStack_6c = 0;
    uStack_68 = 8;
    uStack_64 = 0;
    local_58 = 0;
    local_120 = 1;
    local_128 = &local_88;
    FUN_144760590(&DAT_14ca85100,&local_128,0);
    local_78 = *(longlong **)(lVar11 + 0xd8);
LAB_14443be7d:
LAB_14443beac:
    uStack_68 = 8;
    uStack_6c = 0;
    local_70 = CONCAT31(local_70._1_3_,2);
    local_128 = &local_88;
    local_58 = 0;
    uStack_64 = 0;
    local_80 = -1;
    local_88 = (undefined **)0xffffffffffffffff;
    local_120 = 1;
    FUN_144760590(&DAT_14ca85100,&local_128,0);
  }
  else {
LAB_14443bdbd:
    if (iVar25 == 0x10) goto LAB_14443bdc6;
LAB_14443ccdb:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar25 = *(int *)(lVar30 + 0xc60), iVar25 == 2))
      goto LAB_14443bdc6;
      if (iVar25 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) goto LAB_14443bdc6;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar3 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar16 = (uint *)*puVar3;
      if (puVar16 != (uint *)0x0) goto LAB_14443cff7;
      do {
        uVar8 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar8 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar8 | 1;
          __tlregdtor(&LAB_14444a20d);
        }
        lVar30 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar13 = *(undefined4 **)(lVar30 + 0x310);
        *(undefined8 *)(lVar30 + 0x310) = 0;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar13 = 0xffffffff;
        *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar3 = puVar13;
        FUN_140217a48(puVar3);
        puVar16 = (uint *)*puVar3;
LAB_14443cff7:
        uVar27 = *(longlong *)(puVar16 + 0x10) + 7;
        uVar8 = puVar16[0x12];
        while( true ) {
          puVar28 = (undefined8 *)(uVar27 & 0xfffffffffffffff8);
          if (puVar28 + 0x16 <= puVar16 + 0x4000) {
            *(undefined8 **)(puVar16 + 0x10) = puVar28 + 0x16;
            puVar16[0x12] = uVar8 + 1;
            FUN_1447247dc(puVar28,0);
            ppuVar14 = &PTR_FUN_14bab2ae0;
            goto LAB_14443d087;
          }
          *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
          LOCK();
          uVar4 = *puVar16;
          *puVar16 = *puVar16 + uVar8 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar8) != 0xffffffff) break;
          puVar16 = (uint *)*puVar3;
          *puVar16 = 0xffffffff;
          *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *puVar3 = puVar16;
          uVar27 = (longlong)puVar16 + 0x5f;
          uVar8 = 0;
        }
      } while( true );
    }
    uStack_68 = 0x4bab2ac0;
    local_88 = (undefined **)FUN_14444a6d0;
    puVar29 = &DAT_14cbfd554;
    local_60 = lVar11;
LAB_14443cd5c:
    local_138 = &local_88;
    uStack_64 = 1;
    local_78 = (longlong *)0x0;
    FUN_14005a792(&DAT_14ca9a440,L"FHairCardsVertexFactoryTransition",puVar29);
    if (local_88 != (undefined **)0x0) {
      plVar21 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar21 = (longlong *)&uStack_68;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
  }
LAB_14443cd80:
  *(undefined1 *)((longlong)param_1 + 299) = 1;
  uVar26 = 0;
LAB_14443cd89:
  FUN_1447f9616(param_1,local_118,0);
  lVar11 = param_1[0x26];
  iVar25 = *(int *)((longlong)param_1 + 0x13c);
  if (iVar25 == 1) {
    cVar7 = FUN_144b0f89b(1,DAT_14ca85550);
    if (cVar7 != '\0') {
      iVar25 = (int)param_1[0x27];
      if ((-1 < iVar25) && (iVar25 < *(int *)(lVar11 + 0x118))) {
        local_138 = (undefined ***)CONCAT71(local_138._1_7_,uVar26);
        FUN_149097442(&local_88,lVar11,iVar25,1);
        lVar23 = (longlong)(int)param_1[0x27] * 0x68;
        lVar30 = *(longlong *)(*(longlong *)(lVar11 + 0x110) + 0x58 + lVar23);
        *(undefined ***)(*(longlong *)(lVar11 + 0x110) + 0x58 + lVar23) = local_88;
        local_88 = (undefined **)0x0;
        if (lVar30 != 0) {
          LOCK();
          puVar16 = (uint *)(lVar30 + 8);
          uVar8 = *puVar16;
          *puVar16 = *puVar16 - 1;
          UNLOCK();
          if ((uVar8 & 0x3fffffff) == 1) {
            puVar16 = (uint *)(lVar30 + 8);
            LOCK();
            uVar8 = *puVar16;
            *puVar16 = *puVar16 | 0x40000000;
            UNLOCK();
            if ((uVar8 >> 0x1e & 1) == 0) {
              bVar5 = *(byte *)(lVar30 + 0xd);
              plVar15 = (longlong *)FUN_14001cc68(0x10,8);
              plVar15[1] = lVar30;
              plVar21 = DAT_14ca843c0;
              plVar12 = DAT_14ca843c8;
              if ((bVar5 & 2) == 0) {
                do {
                  *plVar15 = (longlong)plVar21;
                  LOCK();
                  bVar31 = plVar21 != DAT_14ca843c0;
                  plVar12 = plVar15;
                  if (bVar31) {
                    plVar21 = DAT_14ca843c0;
                    plVar12 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar12;
                  UNLOCK();
                } while (bVar31);
              }
              else {
                do {
                  *plVar15 = (longlong)plVar12;
                  LOCK();
                  bVar31 = plVar12 != DAT_14ca843c8;
                  plVar21 = plVar15;
                  if (bVar31) {
                    plVar12 = DAT_14ca843c8;
                    plVar21 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar21;
                  UNLOCK();
                } while (bVar31);
              }
            }
          }
          ppuVar14 = local_88;
          if (local_88 != (undefined **)0x0) {
            LOCK();
            ppuVar1 = local_88 + 1;
            puVar29 = *ppuVar1;
            *(uint *)ppuVar1 = *(uint *)ppuVar1 - 1;
            UNLOCK();
            if (((ulonglong)puVar29 & 0x3fffffff) == 1) {
              ppuVar1 = local_88 + 1;
              LOCK();
              uVar8 = *(uint *)ppuVar1;
              *(uint *)ppuVar1 = *(uint *)ppuVar1 | 0x40000000;
              UNLOCK();
              if ((uVar8 >> 0x1e & 1) == 0) {
                bVar5 = *(byte *)((longlong)local_88 + 0xd);
                plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                plVar15[1] = (longlong)ppuVar14;
                plVar21 = DAT_14ca843c0;
                plVar12 = DAT_14ca843c8;
                if ((bVar5 & 2) == 0) {
                  do {
                    *plVar15 = (longlong)plVar21;
                    LOCK();
                    bVar31 = plVar21 != DAT_14ca843c0;
                    plVar12 = plVar15;
                    if (bVar31) {
                      plVar21 = DAT_14ca843c0;
                      plVar12 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar12;
                    UNLOCK();
                  } while (bVar31);
                }
                else {
                  do {
                    *plVar15 = (longlong)plVar12;
                    LOCK();
                    bVar31 = plVar12 != DAT_14ca843c8;
                    plVar21 = plVar15;
                    if (bVar31) {
                      plVar12 = DAT_14ca843c8;
                      plVar21 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar21;
                    UNLOCK();
                  } while (bVar31);
                }
              }
            }
          }
        }
      }
      goto LAB_14443cf29;
    }
    iVar25 = *(int *)((longlong)param_1 + 0x13c);
  }
  if ((((iVar25 == 2) && (cVar7 = FUN_144b0f89b(2,DAT_14ca85550), cVar7 != '\0')) &&
      (iVar25 = (int)param_1[0x27], -1 < iVar25)) && (iVar25 < *(int *)(lVar11 + 0x128))) {
    local_138 = (undefined ***)CONCAT71(local_138._1_7_,uVar26);
    FUN_149097442(&local_88,lVar11,iVar25,2);
    lVar23 = (longlong)(int)param_1[0x27] * 0x30;
    lVar30 = *(longlong *)(*(longlong *)(lVar11 + 0x120) + 0x20 + lVar23);
    *(undefined ***)(*(longlong *)(lVar11 + 0x120) + 0x20 + lVar23) = local_88;
    local_88 = (undefined **)0x0;
    if (lVar30 != 0) {
      LOCK();
      puVar16 = (uint *)(lVar30 + 8);
      uVar8 = *puVar16;
      *puVar16 = *puVar16 - 1;
      UNLOCK();
      if ((uVar8 & 0x3fffffff) == 1) {
        puVar16 = (uint *)(lVar30 + 8);
        LOCK();
        uVar8 = *puVar16;
        *puVar16 = *puVar16 | 0x40000000;
        UNLOCK();
        if ((uVar8 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)(lVar30 + 0xd);
          plVar15 = (longlong *)FUN_14001cc68(0x10,8);
          plVar15[1] = lVar30;
          plVar21 = DAT_14ca843c0;
          plVar12 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar15 = (longlong)plVar21;
              LOCK();
              bVar31 = plVar21 != DAT_14ca843c0;
              plVar12 = plVar15;
              if (bVar31) {
                plVar21 = DAT_14ca843c0;
                plVar12 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar12;
              UNLOCK();
            } while (bVar31);
          }
          else {
            do {
              *plVar15 = (longlong)plVar12;
              LOCK();
              bVar31 = plVar12 != DAT_14ca843c8;
              plVar21 = plVar15;
              if (bVar31) {
                plVar12 = DAT_14ca843c8;
                plVar21 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar21;
              UNLOCK();
            } while (bVar31);
          }
        }
      }
      ppuVar14 = local_88;
      if (local_88 != (undefined **)0x0) {
        LOCK();
        ppuVar1 = local_88 + 1;
        puVar29 = *ppuVar1;
        *(uint *)ppuVar1 = *(uint *)ppuVar1 - 1;
        UNLOCK();
        if (((ulonglong)puVar29 & 0x3fffffff) == 1) {
          ppuVar1 = local_88 + 1;
          LOCK();
          uVar8 = *(uint *)ppuVar1;
          *(uint *)ppuVar1 = *(uint *)ppuVar1 | 0x40000000;
          UNLOCK();
          if ((uVar8 >> 0x1e & 1) == 0) {
            bVar5 = *(byte *)((longlong)local_88 + 0xd);
            plVar15 = (longlong *)FUN_14001cc68(0x10,8);
            plVar15[1] = (longlong)ppuVar14;
            plVar21 = DAT_14ca843c0;
            plVar12 = DAT_14ca843c8;
            if ((bVar5 & 2) == 0) {
              do {
                *plVar15 = (longlong)plVar21;
                LOCK();
                bVar31 = plVar21 != DAT_14ca843c0;
                plVar12 = plVar15;
                if (bVar31) {
                  plVar21 = DAT_14ca843c0;
                  plVar12 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar12;
                UNLOCK();
              } while (bVar31);
            }
            else {
              do {
                *plVar15 = (longlong)plVar12;
                LOCK();
                bVar31 = plVar12 != DAT_14ca843c8;
                plVar21 = plVar15;
                if (bVar31) {
                  plVar12 = DAT_14ca843c8;
                  plVar21 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar21;
                UNLOCK();
              } while (bVar31);
            }
          }
        }
      }
    }
  }
LAB_14443cf29:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14443dc67 FUN_14443dc67 body=41 status=ok
// SIG undefined FUN_14443dc67(void)

undefined * FUN_14443dc67(byte param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if ((param_1 < 9) && ((0x129U >> (param_1 & 0x1f) & 1) != 0)) {
    FUN_14610d5c4();
    puVar1 = &DAT_14cbfa7f8;
  }
  return puVar1;
}



// FUNCTION 14443dc90 FUN_14443dc90 body=50 status=ok
// SIG undefined FUN_14443dc90(void)

undefined4 * FUN_14443dc90(byte param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if ((param_1 < 9) && ((0x129U >> (param_1 & 0x1f) & 1) != 0)) {
    puVar1 = (undefined4 *)FUN_14001cc68(4,0x10);
    *puVar1 = 0;
  }
  return puVar1;
}



// FUNCTION 14443dce6 FUN_14443dce6 body=2192 status=ok
// SIG undefined FUN_14443dce6(void)

void FUN_14443dce6(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong *param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  undefined1 auStack_148 [32];
  undefined1 **local_128;
  longlong *local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  undefined1 *local_dc;
  undefined4 local_d4;
  longlong local_d0 [2];
  undefined8 local_c0;
  undefined1 local_b1;
  undefined1 *local_b0;
  undefined4 local_a8;
  int local_a0;
  int iStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 local_80 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  DAT_14ca4d32c = DAT_14ca4d32c + 0x800;
  DAT_14ca4d330 = DAT_14ca4d330 + 0x800;
  DAT_14ca4d100 = 1;
  uVar14 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar14 = DAT_14ca84e48;
  }
  local_98 = 0x10109;
  local_a0 = uVar14 + (uVar14 == 0);
  local_90 = 0;
  uStack_8c = 0;
  uVar14 = DAT_14ca84e48;
  if (*(uint *)(param_5 + 1) < DAT_14ca84e48) {
    uVar14 = *(uint *)(param_5 + 1);
  }
  iStack_9c = uVar14 + (uVar14 == 0);
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar17 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar10 = uVar17 + 0x150;
  local_120 = plVar1;
  local_110 = param_3;
  local_100 = param_2;
  if (*(ulonglong *)(param_1 + 0x78) < uVar10) {
    FUN_140023dd8(plVar1,0x160);
    uVar17 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar10 = uVar17 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar10;
  FUN_1456bd266(uVar17,L"Hair.ClusterPointCounter",&local_a0,0);
  iVar19 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar19 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar19 + 1U) {
    FUN_144737178(param_1 + 0x188,iVar19);
  }
  plVar1 = local_120;
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar19 * 8) = uVar17;
  *(int *)(uVar17 + 0x7c) = *(int *)(param_1 + 400) + -1;
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(local_120,0x48);
    puVar16 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar16 + 8;
  }
  local_118 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar13;
  puVar16[1] = *(undefined8 *)(uVar17 + 8);
  puVar16[2] = 0;
  *(undefined1 *)(puVar16 + 3) = 2;
  *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar16 + 5) = 0;
  *puVar16 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar16 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar16 + 0x32) = 0;
  puVar16[7] = uVar17;
  iVar19 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar19 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar19 + 1U) {
    FUN_1447568fc(local_118,iVar19);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar19 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  FUN_1405bfba3(param_1,puVar16,0,2);
  plVar1 = local_120;
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(local_120,0x48);
    puVar16 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar16 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar13;
  puVar16[1] = *(undefined8 *)(uVar17 + 8);
  puVar16[2] = 0;
  *(undefined1 *)(puVar16 + 3) = 2;
  *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar16 + 5) = 1;
  *puVar16 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar16 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar16 + 0x32) = 0;
  puVar16[7] = uVar17;
  iVar19 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar19 + 1U;
  local_f0 = uVar17;
  if (*(uint *)(param_1 + 0x1a4) < iVar19 + 1U) {
    FUN_1447568fc(local_118,iVar19);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar19 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  if ((longlong)(int)param_5[1] != 0) {
    lVar4 = *param_5;
    local_f8 = param_1 + 0x98;
    local_e8 = (longlong)(int)param_5[1] * 0x70;
    lVar20 = lVar4 + 0x68;
    lVar18 = 0;
    iVar19 = 0;
    local_108 = param_4;
    do {
      plVar1 = local_120;
      puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar13 = puVar15 + 0x16;
      if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
        FUN_140023dd8(local_120,0xc0);
        puVar15 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
        puVar13 = puVar15 + 0x16;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar13;
      *puVar15 = &PTR_FUN_14bab2af0;
      puVar15[6] = 0;
      puVar15[7] = 0x3f80000000000000;
      puVar15[0x10] = 0;
      puVar15[8] = 0;
      puVar15[9] = 0;
      puVar15[10] = 0;
      puVar15[0xb] = 0;
      puVar15[0xc] = 0;
      puVar15[0xd] = 0;
      puVar15[0xe] = 0;
      *(undefined1 *)(puVar15 + 0x11) = 1;
      puVar15[0x12] = 0;
      *(undefined1 *)(puVar15 + 0x13) = 1;
      puVar15[0x14] = 0;
      puVar15[0x15] = 0;
      iVar3 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
        FUN_1448cfae8(local_f8,iVar3);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar15;
      *(int *)(puVar15 + 2) = iVar19;
      *(undefined4 *)((longlong)puVar15 + 0x14) = *(undefined4 *)(lVar4 + 0x20 + lVar18);
      *(undefined4 *)(puVar15 + 3) = *(undefined4 *)(lVar4 + 0x24 + lVar18);
      *(undefined4 *)((longlong)puVar15 + 0x1c) =
           *(undefined4 *)(*(longlong *)(lVar20 + lVar18) + 0x490);
      uVar11 = FUN_14716d181(param_1,*(undefined8 *)(lVar4 + 0x30 + lVar18));
      puVar15[8] = uVar11;
      uVar11 = FUN_14716d181(param_1,*(undefined8 *)(lVar4 + 0x48 + lVar18));
      puVar15[9] = uVar11;
      uVar11 = FUN_14716d181(param_1,*(undefined8 *)(lVar4 + 0x38 + lVar18));
      puVar15[10] = uVar11;
      uVar11 = FUN_14716d181(param_1,*(undefined8 *)(lVar4 + 0x40 + lVar18));
      puVar15[0xb] = uVar11;
      puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar18);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      *(undefined4 *)(puVar15 + 6) = *puVar2;
      *(undefined4 *)((longlong)puVar15 + 0x34) = uVar6;
      *(undefined4 *)(puVar15 + 7) = uVar7;
      *(undefined4 *)((longlong)puVar15 + 0x3c) = uVar8;
      lVar12 = FUN_1447e4f80();
      lVar5 = local_108;
      cVar9 = *(char *)(lVar12 + 0x41);
      if (*(char *)(lVar12 + 0x41) == '\x03') {
        cVar9 = '\x02';
      }
      puVar15[0x10] = *(undefined8 *)(local_110 + 0x18);
      *(char *)(puVar15 + 0x11) = cVar9;
      puVar15[0xc] = puVar16;
      if (*(longlong *)(lVar20 + lVar18) == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = *(longlong *)(*(longlong *)(lVar20 + lVar18) + 8) + 0x60;
      }
      uVar11 = FUN_14716d252(param_1,lVar12,0);
      puVar15[0xd] = uVar11;
      if (*(longlong *)(lVar20 + lVar18) == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = *(longlong *)(*(longlong *)(lVar20 + lVar18) + 8) + 0x40;
      }
      uVar11 = FUN_14716d252(param_1,lVar12,0);
      puVar15[0xe] = uVar11;
      if (lVar5 != 0) {
        FUN_1472ea582(param_1,lVar5,puVar15 + 0x12);
      }
      FUN_147180bfd(&local_a0,*(undefined4 *)(lVar4 + 8 + lVar18),
                    *(undefined4 *)((longlong)puVar15 + 0x1c),0x40);
      *(undefined4 *)(puVar15 + 4) = uStack_8c;
      local_80[0] = local_94;
      FUN_149097a3a(local_d0,local_100,local_80);
      local_b0 = (undefined1 *)CONCAT44(uStack_88,uStack_8c);
      local_a8 = local_84;
      local_128 = &local_b0;
      FUN_149097ad2(param_1,&local_b1,local_d0,puVar15 + 2);
      lVar18 = lVar18 + 0x70;
      iVar19 = iVar19 + 1;
    } while (local_e8 != lVar18);
  }
  plVar1 = local_120;
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(local_120,0x50);
    puVar16 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar16 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar13;
  puVar16[1] = *(undefined8 *)(local_f0 + 8);
  puVar16[2] = 0;
  *(undefined1 *)(puVar16 + 3) = 3;
  *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
  *puVar16 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar16 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar16 + 0x2c) = 0xffffffff00000000;
  puVar16[7] = 0;
  puVar16[8] = local_f0;
  iVar19 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar19 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar19 + 1U) {
    FUN_1447568fc(local_118,iVar19);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar19 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  lVar4 = param_5[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar18 = *param_5;
    local_110 = param_1 + 0x98;
    lVar20 = 0;
    iVar19 = 0;
    do {
      local_128 = (undefined1 **)((ulonglong)local_128 & 0xffffffffffffff00);
      FUN_14716cfd3(&local_a0,param_1,*(undefined8 *)(*(longlong *)(lVar18 + 0x68 + lVar20) + 8),3);
      local_128 = (undefined1 **)((ulonglong)local_128 & 0xffffffffffffff00);
      FUN_14716cfd3(local_d0,param_1,*(longlong *)(*(longlong *)(lVar18 + 0x68 + lVar20) + 8) + 0x20
                    ,3);
      plVar1 = local_120;
      puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar13 = puVar15 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
        FUN_140023dd8(local_120,0x50);
        puVar15 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
        puVar13 = puVar15 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar13;
      *puVar15 = &PTR_FUN_14bab2b18;
      puVar15[3] = 0;
      puVar15[4] = 0;
      puVar15[5] = 0;
      puVar15[6] = 0;
      iVar3 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
        FUN_1448cfae8(local_110,iVar3);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar15;
      *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(lVar18 + lVar20);
      *(int *)((longlong)puVar15 + 0x14) = iVar19;
      puVar15[3] = puVar16;
      puVar15[4] = CONCAT44(uStack_8c,local_90);
      puVar15[5] = local_c0;
      puVar15[6] = param_6;
      FUN_145f3b3fa();
      FUN_1448e935e(local_100,local_80,&DAT_14cbfaa70,0);
      FUN_145f3b3fa();
      local_dc = &DAT_100000001;
      local_d4 = 1;
      local_128 = &local_dc;
      FUN_149097b84(param_1,&local_b1,local_80,puVar15 + 2);
      *(undefined4 *)(CONCAT44(iStack_9c,local_a0) + 0x58) = 0x74;
      *(undefined4 *)(local_d0[0] + 0x58) = 0x74;
      lVar5 = *(longlong *)(lVar18 + 0x68 + lVar20);
      if (lVar5 != 0) {
        *(undefined1 *)(*(longlong *)(lVar5 + 8) + 0x80) = 1;
      }
      lVar20 = lVar20 + 0x70;
      iVar19 = iVar19 + 1;
    } while ((longlong)(int)lVar4 * 0x70 - lVar20 != 0);
  }
  if ((local_70 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14443e577 FUN_14443e577 body=69 status=ok
// SIG undefined FUN_14443e577(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14443e577(void)

{
  _DAT_14cbfab38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014443e5b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbfab40,1);
  return;
}



// FUNCTION 14443e5bc FUN_14443e5bc body=69 status=ok
// SIG undefined FUN_14443e5bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14443e5bc(void)

{
  _DAT_14cbfab50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014443e5fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbfab58,1);
  return;
}



// FUNCTION 14443e601 FUN_14443e601 body=69 status=ok
// SIG undefined FUN_14443e601(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14443e601(void)

{
  _DAT_14cbfab60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014443e643. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbfab68,1);
  return;
}



// FUNCTION 14443e646 FUN_14443e646 body=69 status=ok
// SIG undefined FUN_14443e646(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14443e646(void)

{
  _DAT_14cbfab78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014443e688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbfab80,1);
  return;
}



// FUNCTION 14443e68b FUN_14443e68b body=69 status=ok
// SIG undefined FUN_14443e68b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14443e68b(void)

{
  _DAT_14cbfab90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014443e6cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbfab98,1);
  return;
}



// FUNCTION 14443e6d0 FUN_14443e6d0 body=69 status=ok
// SIG undefined FUN_14443e6d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14443e6d0(void)

{
  _DAT_14cbfaba0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014443e712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbfaba8,1);
  return;
}



// FUNCTION 14443e715 FUN_14443e715 body=69 status=ok
// SIG undefined FUN_14443e715(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14443e715(void)

{
  _DAT_14cbfabb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014443e757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbfabc0,1);
  return;
}



// FUNCTION 14443e75a FUN_14443e75a body=69 status=ok
// SIG undefined FUN_14443e75a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14443e75a(void)

{
  _DAT_14cbfabc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014443e79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbfabd0,1);
  return;
}



// FUNCTION 14443e79f FUN_14443e79f body=69 status=ok
// SIG undefined FUN_14443e79f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14443e79f(void)

{
  _DAT_14cbfabd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014443e7e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbfabe0,1);
  return;
}



// FUNCTION 14443e7f0 FUN_14443e7f0 body=396 status=ok
// SIG undefined FUN_14443e7f0(void)

void FUN_14443e7f0(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4,int param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  uint *local_78;
  undefined1 local_65;
  uint local_64;
  undefined1 *local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_5 != 0 && param_4 != 0) {
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar2 = puVar3 + 6;
    if (*(undefined8 **)(param_1 + 0x78) < puVar2) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x40);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar2 = puVar3 + 6;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar2;
    *puVar3 = &PTR_FUN_14bab2bf0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    iVar1 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar1);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8) = puVar3;
    *(int *)(puVar3 + 2) = param_4;
    *(undefined4 *)((longlong)puVar3 + 0x14) = param_3;
    *(int *)(puVar3 + 3) = param_5;
    puVar3[4] = param_6;
    puVar3[5] = param_7;
    FUN_145f782a0();
    FUN_1448e935e(param_2,local_58,&DAT_14cbfac50,0);
    FUN_145f782a0();
    local_78 = &local_64;
    local_60 = &DAT_100000001;
    local_64 = param_4 + 0x3ffU >> 10;
    FUN_149099de6(param_1,&local_65,local_58,puVar3 + 2);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14443e989 FUN_14443e989 body=782 status=ok
// SIG undefined FUN_14443e989(void)

void FUN_14443e989(longlong param_1,undefined8 param_2,undefined4 param_3,uint param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,longlong *param_8,
                  longlong *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  uint *local_a8;
  longlong *local_a0;
  ulonglong local_98;
  undefined1 local_8d;
  uint local_8c;
  undefined1 *local_88;
  undefined1 local_80 [16];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_4 != 0) {
    if ((*param_8 != 0) && (*param_9 != 0)) {
      lVar2 = *(longlong *)(*param_8 + 0x40);
      uVar7 = (ulonglong)param_4;
      if (lVar2 != 0) {
        uVar7 = (ulonglong)*(uint *)(lVar2 + 100) / 3;
      }
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar5 = puVar8 + 0x10;
      if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
        FUN_140023dd8((longlong *)(param_1 + 0x70),0x90);
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar5 = puVar8 + 0x10;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar5;
      *puVar8 = &PTR_FUN_14bab2c38;
      plVar6 = (longlong *)(param_1 + 0x98);
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      iVar1 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
        local_a0 = plVar6;
        local_98 = uVar7;
        FUN_1448cfae8(plVar6,iVar1);
        plVar6 = local_a0;
        uVar7 = local_98;
      }
      *(undefined8 **)(*plVar6 + (longlong)iVar1 * 8) = puVar8;
      *(undefined4 *)(puVar8 + 2) = param_3;
      *(uint *)((longlong)puVar8 + 0x14) = param_4;
      *(undefined4 *)(puVar8 + 3) = param_5;
      *(int *)((longlong)puVar8 + 0x1c) = (int)uVar7;
      puVar8[6] = *param_8;
      puVar8[7] = *param_9;
      puVar8[8] = param_8[1];
      puVar8[9] = param_9[1];
      puVar8[10] = param_10;
      puVar8[0xb] = param_11;
      puVar8[0xc] = param_12;
      puVar8[0xd] = param_13;
      puVar8[0xe] = param_14;
      *(undefined4 *)(puVar8 + 5) = param_6;
      *(undefined4 *)((longlong)puVar8 + 0x2c) = param_7;
      *(uint *)(puVar8 + 4) = (uint)*(byte *)(param_8 + 2);
      lVar2 = DAT_14ca97140;
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
        uVar7 = 0;
      }
      else if (iVar1 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        uVar7 = (ulonglong)(DVar3 != DVar4);
      }
      else {
        uVar7 = 1;
      }
      *(uint *)((longlong)puVar8 + 0x24) = (uint)(0 < *(int *)(lVar2 + uVar7 * 4));
      FUN_145e9dcdc();
      FUN_1448e935e(param_2,local_80,&DAT_14cbfad78,0);
      FUN_145e9dcdc();
      local_a8 = &local_8c;
      local_88 = &DAT_100000001;
      local_8c = param_4 + 0x3ff >> 10;
      FUN_149099f7c(param_1,&local_8d,local_80,puVar8 + 2);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14443eca4 FUN_14443eca4 body=1142 status=ok
// SIG undefined FUN_14443eca4(void)

void FUN_14443eca4(longlong param_1,undefined8 param_2,undefined4 param_3,uint param_4,int param_5,
                  longlong *param_6,longlong *param_7,undefined8 param_8,longlong param_9,
                  longlong *param_10,double *param_11,undefined8 param_12,char param_13,
                  longlong param_14)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 auStack_98 [32];
  uint *local_78;
  undefined8 local_70;
  undefined1 local_65;
  uint local_64;
  undefined1 *local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar12 + 0x12;
  local_70 = param_2;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0xa0);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar12 + 0x12;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar9;
  *puVar12 = &PTR_FUN_14bab2c58;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[8] = 0;
  puVar12[9] = 0;
  puVar12[10] = 0;
  puVar12[0xb] = 0;
  puVar12[0xc] = 0;
  puVar12[0xd] = 0;
  puVar12[0xf] = 0;
  puVar12[0x10] = 0;
  puVar12[0x11] = 0;
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar12;
  *(undefined4 *)(puVar12 + 2) = param_3;
  puVar12[0xc] = param_8;
  puVar12[0xd] = param_10[2];
  *(int *)((longlong)puVar12 + 0x14) = param_5;
  puVar12[0xb] = param_12;
  dVar1 = param_11[2];
  dVar2 = param_11[1];
  *(float *)(puVar12 + 4) = (float)*param_11;
  *(float *)((longlong)puVar12 + 0x24) = (float)dVar2;
  *(float *)(puVar12 + 5) = (float)dVar1;
  if (param_9 != 0) {
    puVar12[9] = param_9;
  }
  lVar6 = DAT_14c9d2450;
  if (((param_6 == (longlong *)0x0) || ((int)param_6[1] < 1)) || (*(longlong *)*param_6 == 0)) {
    bVar14 = false;
  }
  else {
    bVar14 = *(int *)(*(longlong *)(*(longlong *)*param_6 + 0x140) + 0xc) != 0;
  }
  if (param_14 == 0) {
    uVar13 = 1;
    if ((!(bool)(bVar14 ^ 1) && -1 < (int)param_4) && ((int)param_4 < (int)param_6[1])) {
      lVar4 = *(longlong *)(*param_6 + (ulonglong)param_4 * 8);
      if (((*(int *)(lVar4 + 0x50) == 2) && (((int)param_4 < (int)param_7[1] && (param_9 != 0)))) &&
         (lVar5 = *(longlong *)(*param_7 + (ulonglong)param_4 * 8), *(int *)(lVar5 + 0x50) - 1U < 2)
         ) {
        if ((param_13 == '\0') || (*(int *)(lVar4 + 0xd8) == 0)) {
          uVar13 = FUN_14716d181(param_1,lVar4 + 0x78);
          puVar12[10] = uVar13;
          uVar13 = FUN_14716d181(param_1,lVar4 + 0xb8);
          puVar12[6] = uVar13;
          lVar6 = DAT_14c9d2450;
          iVar3 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60);
          if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
            uVar10 = 0;
          }
          else if (iVar3 == 1) {
            DVar7 = FUN_140ad26c0();
            DVar8 = GetCurrentThreadId();
            uVar10 = (ulonglong)(DVar7 != DVar8);
          }
          else {
            uVar10 = 1;
          }
          lVar11 = lVar5 + 0x58;
          if (0 < *(int *)(lVar6 + uVar10 * 4)) {
            lVar11 = lVar11 + (ulonglong)*(uint *)(lVar5 + 0x120) * 0x20;
          }
          uVar13 = FUN_14716d181(param_1,lVar11);
          puVar12[7] = uVar13;
          uVar13 = FUN_14716d181(param_1,lVar4 + 0x98);
          puVar12[8] = uVar13;
          uVar13 = 2;
        }
        else {
          iVar3 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60);
          if ((iVar3 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar3 == 2)))) {
            uVar10 = 0;
          }
          else if (iVar3 == 1) {
            DVar7 = FUN_140ad26c0();
            DVar8 = GetCurrentThreadId();
            uVar10 = (ulonglong)(DVar7 != DVar8);
          }
          else {
            uVar10 = 1;
          }
          lVar11 = lVar5 + 0xe0;
          if (0 < *(int *)(lVar6 + uVar10 * 4)) {
            lVar11 = lVar11 + (ulonglong)*(uint *)(lVar5 + 0x120) * 0x20;
          }
          uVar13 = FUN_14716d181(param_1,lVar11);
          puVar12[0x10] = uVar13;
          uVar13 = FUN_14716d181(param_1,lVar4 + 0x120);
          puVar12[0xf] = uVar13;
          *(undefined4 *)(puVar12 + 0xe) = *(undefined4 *)(lVar4 + 0xd8);
          uVar13 = 3;
        }
      }
    }
  }
  else {
    puVar12[0x11] = param_14;
    uVar13 = 4;
  }
  FUN_145f27114();
  FUN_1448e935e(local_70,local_58,&DAT_14cbfaea0,uVar13);
  FUN_145f27114();
  local_78 = &local_64;
  local_60 = &DAT_100000001;
  local_64 = param_5 + 0x3ffU >> 10;
  FUN_14909a0f4(param_1,&local_65,local_58,puVar12 + 2);
  *(undefined4 *)(*param_10 + 0x58) = 0x70;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14443f12b FUN_14443f12b body=2405 status=ok
// SIG undefined FUN_14443f12b(void)

void FUN_14443f12b(longlong param_1,undefined8 param_2,ushort param_3,longlong param_4,
                  longlong param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  uint param_9,undefined4 param_10,int param_11,undefined8 param_12,
                  undefined8 param_13,double *param_14,double *param_15,undefined8 *param_16,
                  undefined8 *param_17,longlong *param_18,longlong *param_19,longlong *param_20,
                  longlong *param_21,undefined8 *param_22,undefined8 *param_23,byte param_24,
                  undefined8 *param_25,undefined8 *param_26,undefined8 *param_27,
                  undefined8 *param_28,longlong *param_29,undefined8 *param_30,int param_31)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  DWORD DVar16;
  DWORD DVar17;
  undefined4 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  char cVar27;
  undefined8 *puVar28;
  longlong lVar29;
  bool bVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  ushort local_142;
  longlong local_140;
  longlong local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined1 local_119;
  undefined1 local_118 [8];
  undefined4 local_110;
  undefined1 local_108 [16];
  int local_f8;
  char local_f4;
  byte local_f0;
  undefined1 local_ec;
  int local_e8;
  undefined1 local_e4;
  undefined1 local_e0 [12];
  int local_d4;
  undefined4 local_cc;
  undefined4 local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  puVar28 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar19 = puVar28 + 0x2e;
  local_142 = param_3;
  local_140 = param_4;
  local_128 = param_2;
  if (*(undefined8 **)(param_1 + 0x78) < puVar19) {
    FUN_140023dd8((longlong *)(param_1 + 0x70));
    puVar28 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar19 = puVar28 + 0x2e;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar19;
  *puVar28 = &PTR_FUN_14bab2c78;
  puVar28[2] = 0;
  *(undefined1 *)(puVar28 + 3) = 1;
  puVar28[4] = 0;
  puVar28[5] = 0;
  memset(puVar28 + 0x17,0,0xa8);
  *(undefined4 *)(puVar28 + 0x2c) = 4;
  iVar4 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
  local_138 = param_1;
  if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar4);
  }
  lVar25 = local_138;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar28;
  puVar28[0x18] = *param_22;
  puVar28[0x1b] = *param_27;
  puVar28[0x1c] = *param_28;
  puVar28[0x1d] = *param_25;
  puVar28[0x1e] = *param_26;
  puVar28[0x1a] = *param_30;
  *(undefined4 *)(puVar28 + 6) = param_6;
  *(undefined4 *)((longlong)puVar28 + 0x34) = param_7;
  dVar31 = param_14[2];
  dVar1 = param_14[1];
  *(float *)(puVar28 + 10) = (float)*param_14;
  *(float *)((longlong)puVar28 + 0x54) = (float)dVar1;
  *(float *)(puVar28 + 0xb) = (float)dVar31;
  dVar31 = param_15[2];
  dVar1 = param_15[1];
  *(float *)(puVar28 + 0xc) = (float)*param_15;
  *(float *)((longlong)puVar28 + 100) = (float)dVar1;
  *(float *)(puVar28 + 0xd) = (float)dVar31;
  puVar28[0x27] = *param_17;
  puVar28[0x28] = *param_16;
  dVar9 = *(double *)(param_5 + 0x340);
  dVar10 = *(double *)(param_5 + 0x348);
  dVar11 = *(double *)(param_5 + 0x350);
  dVar12 = *(double *)(param_5 + 0x380);
  dVar13 = *(double *)(param_5 + 0x388);
  dVar14 = *(double *)(param_5 + 0x390);
  dVar32 = dVar10 + dVar10;
  dVar33 = dVar11 + dVar11;
  dVar5 = dVar9 * (dVar9 + dVar9);
  dVar31 = *(double *)(param_5 + 0x358);
  dVar6 = dVar33 * dVar31;
  dVar7 = (dVar9 + dVar9) * *(double *)(param_5 + 0x358);
  dVar31 = dVar32 * dVar31;
  dVar1 = *(double *)(param_5 + 0x360);
  dVar2 = *(double *)(param_5 + 0x368);
  dVar3 = *(double *)(param_5 + 0x370);
  *(float *)(puVar28 + 0xe) = (float)((1.0 - (dVar11 * dVar33 + dVar10 * dVar32)) * dVar12);
  *(float *)((longlong)puVar28 + 0x74) = (float)((dVar32 * dVar9 + dVar6) * dVar12);
  *(float *)(puVar28 + 0xf) = (float)((dVar33 * dVar9 - dVar31) * dVar12);
  *(undefined4 *)((longlong)puVar28 + 0x7c) = 0;
  *(float *)(puVar28 + 0x10) = (float)((dVar32 * dVar9 - dVar6) * dVar13);
  *(float *)((longlong)puVar28 + 0x84) = (float)((1.0 - (dVar11 * dVar33 + dVar5)) * dVar13);
  *(float *)(puVar28 + 0x11) = (float)((dVar33 * dVar10 + dVar7) * dVar13);
  *(undefined4 *)((longlong)puVar28 + 0x8c) = 0;
  *(float *)(puVar28 + 0x12) = (float)((dVar31 + dVar33 * dVar9) * dVar14);
  *(float *)((longlong)puVar28 + 0x94) = (float)((dVar33 * dVar10 - dVar7) * dVar14);
  *(float *)(puVar28 + 0x13) = (float)((1.0 - (dVar5 + dVar10 * dVar32)) * dVar14);
  *(undefined4 *)((longlong)puVar28 + 0x9c) = 0;
  *(float *)(puVar28 + 0x14) = (float)dVar1;
  *(float *)((longlong)puVar28 + 0xa4) = (float)dVar2;
  *(float *)(puVar28 + 0x15) = (float)dVar3;
  *(undefined4 *)((longlong)puVar28 + 0xac) = 0x3f800000;
  *(undefined4 *)(puVar28 + 8) = param_10;
  puVar28[7] = 0;
  if (*(longlong *)(param_5 + 0x18) != 0) {
    *(undefined4 *)(puVar28 + 7) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(param_5 + 0x18) + 0x130) + 0xc);
    *(undefined4 *)((longlong)puVar28 + 0x3c) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(param_5 + 0x18) + 0x130) + 8);
  }
  puVar19 = puVar28 + 2;
  puVar28[0x17] = *param_23;
  *(uint *)((longlong)puVar28 + 0xb4) = (uint)param_24;
  if (local_140 != 0) {
    FUN_1472ea582(local_138,local_140,puVar19);
  }
  local_130 = puVar19;
  if ((param_18 == (longlong *)0x0) || ((int)*(uint *)(param_18 + 1) < 1)) {
LAB_14443f5dd:
    bVar30 = false;
    bVar15 = false;
  }
  else {
    lVar26 = *(longlong *)*param_18;
    if ((lVar26 == 0) ||
       ((bVar30 = false, *(uint *)(param_18 + 1) <= param_9 || ((int)param_9 < 0))))
    goto LAB_14443f5dd;
    bVar15 = false;
    if (*(int *)(*(longlong *)(lVar26 + 0x140) + 0xc) != 0) {
      uVar22 = (ulonglong)param_9;
      lVar26 = ((longlong *)*param_18)[uVar22];
      if (((*(int *)(lVar26 + 0x50) != 2) || ((int)param_20[1] <= (int)param_9)) ||
         (lVar29 = *(longlong *)(*param_20 + uVar22 * 8), 1 < *(int *)(lVar29 + 0x50) - 1U))
      goto LAB_14443f5dd;
      if (*(char *)(param_5 + 0x38) == '\0') {
        if ((*(byte *)(param_5 + 0x3a) & 1) != 0) {
          lVar26 = *(longlong *)(*param_19 + uVar22 * 8);
          lVar29 = *(longlong *)(*param_21 + uVar22 * 8);
          goto LAB_14443f861;
        }
        if (*(char *)(param_5 + 0x39) == '\x01') {
          lVar26 = *(longlong *)(*param_19 + uVar22 * 8);
          lVar29 = *(longlong *)(*param_21 + uVar22 * 8);
          goto LAB_14443f88b;
        }
        lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        bVar30 = false;
      }
      else {
        lVar26 = *(longlong *)(*param_19 + uVar22 * 8);
        lVar29 = *(longlong *)(*param_21 + uVar22 * 8);
        if ((*(byte *)(param_5 + 0x3a) & 1) == 0) {
LAB_14443f88b:
          bVar30 = false;
        }
        else {
LAB_14443f861:
          bVar30 = *(int *)(lVar26 + 0xd8) != 0;
        }
        uVar20 = FUN_14716d181(lVar25,lVar26 + 0xb8);
        puVar28[0x23] = uVar20;
        uVar20 = FUN_14716d181(lVar25,lVar26 + 0x98);
        puVar28[0x25] = uVar20;
        uVar20 = FUN_14716d181(lVar25,lVar26 + 0x78);
        puVar28[0x26] = uVar20;
        lVar26 = DAT_14c9d2450;
        lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar4 = *(int *)(lVar24 + 0xc60);
        if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
          uVar21 = 0;
        }
        else if (iVar4 == 1) {
          uVar18 = FUN_140ad26c0();
          local_140 = CONCAT44(local_140._4_4_,uVar18);
          DVar16 = GetCurrentThreadId();
          uVar21 = (ulonglong)((DWORD)local_140 != DVar16);
        }
        else {
          uVar21 = 1;
        }
        lVar25 = local_138;
        lVar23 = lVar29 + 0x58;
        if (0 < *(int *)(lVar26 + uVar21 * 4)) {
          uVar8 = 1 - *(uint *)(lVar29 + 0x120);
          if (param_31 == 1) {
            uVar8 = *(uint *)(lVar29 + 0x120);
          }
          lVar23 = lVar23 + (ulonglong)uVar8 * 0x20;
        }
        uVar20 = FUN_14716d181(local_138,lVar23);
        puVar28[0x24] = uVar20;
        lVar26 = *(longlong *)(*param_18 + uVar22 * 8);
        lVar29 = *(longlong *)(*param_20 + uVar22 * 8);
      }
      uVar20 = FUN_14716d181(lVar25,lVar26 + 0xb8);
      puVar28[0x1f] = uVar20;
      uVar20 = FUN_14716d181(lVar25,lVar26 + 0x98);
      puVar28[0x21] = uVar20;
      uVar20 = FUN_14716d181(lVar25,lVar26 + 0x78);
      puVar28[0x22] = uVar20;
      lVar26 = DAT_14c9d2450;
      iVar4 = *(int *)(lVar24 + 0xc60);
      if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
        uVar22 = 0;
      }
      else if (iVar4 == 1) {
        DVar16 = FUN_140ad26c0();
        DVar17 = GetCurrentThreadId();
        uVar22 = (ulonglong)(DVar16 != DVar17);
      }
      else {
        uVar22 = 1;
      }
      lVar24 = lVar29 + 0x58;
      if (0 < *(int *)(lVar26 + uVar22 * 4)) {
        uVar8 = 1 - *(uint *)(lVar29 + 0x120);
        if (param_31 == 1) {
          uVar8 = *(uint *)(lVar29 + 0x120);
        }
        lVar24 = lVar24 + (ulonglong)uVar8 * 0x20;
      }
      uVar20 = FUN_14716d181(lVar25,lVar24);
      puVar28[0x20] = uVar20;
      bVar15 = true;
    }
  }
  lVar26 = *param_29;
  if (lVar26 != 0) {
    puVar28[0x19] = lVar26;
  }
  cVar27 = '\x01';
  if ((!bVar30 && (*(byte *)(param_5 + 0x38) & 1) == 0) && (*(char *)(param_5 + 0x39) == '\0')) {
    cVar27 = *(char *)(param_5 + 0x3b);
  }
  FUN_147180bfd(local_e0,param_8,param_7);
  *(undefined4 *)(puVar28 + 0x16) = local_cc;
  if ((((DAT_14ca84f10 == '\x01') && (DAT_14ca84f14 < 0x21)) && (0x1f < DAT_14ca84f18)) &&
     (local_142 != 0 && local_d4 == 0x20)) {
    local_d4 = 0x20;
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)local_142 * 0xf) & 0x80) == 0) {
      local_e4 = ((&DAT_14ca814cd)[(ulonglong)local_142 * 0x3c] & 3) != 0;
      goto LAB_14443f6a4;
    }
  }
  local_e4 = false;
LAB_14443f6a4:
  if (2 < param_11 - 1U) {
    param_11 = 0;
  }
  iVar4 = param_11;
  if (cVar27 == '\0') {
    param_11 = 0;
    iVar4 = 1;
  }
  if (bVar15) {
    param_11 = iVar4;
  }
  if (cVar27 != '\0') {
    param_11 = 0;
  }
  local_f8 = param_11;
  if (bVar15) {
    local_f8 = iVar4;
  }
  local_f0 = param_24 | 0 < DAT_14c764a24;
  local_ec = lVar26 != 0;
  local_f4 = cVar27;
  local_e8 = local_d4;
  FUN_14909a318(local_108,local_128);
  local_158 = local_118;
  local_110 = local_c4;
  FUN_14909a3db(lVar25,&local_119,local_108,local_130);
  if ((local_c0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14443fa9d FUN_14443fa9d body=632 status=ok
// SIG undefined FUN_14443fa9d(void)

void FUN_14443fa9d(longlong param_1,undefined8 param_2,int param_3,char param_4,char param_5,
                  byte param_6,undefined8 param_7,longlong *param_8,undefined8 *param_9,
                  undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,longlong *param_13)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [32];
  uint *local_88;
  ulonglong local_80;
  uint local_6c;
  undefined1 local_65;
  uint local_64;
  undefined1 *local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_4 != '\x01') || (param_5 != '\0')) {
    local_80 = (ulonglong)(uint)(*(int *)(*param_8 + 0x60) * *(int *)(*param_8 + 100));
    local_88 = (uint *)0x0;
    FUN_143211d72(param_1,*param_13,0);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar1 = puVar3 + 0x14;
    if (*(undefined8 **)(param_1 + 0x78) < puVar1) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0xb0);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar1 = puVar3 + 0x14;
    }
    local_6c = param_3 + 0x3ff;
    *(undefined8 **)(param_1 + 0x70) = puVar1;
    *puVar3 = &PTR_FUN_14bab2c98;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    iVar2 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
      FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar2);
    }
    local_6c = local_6c >> 10;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar3;
    *(uint *)((longlong)puVar3 + 0x14) = (uint)param_6;
    *(int *)(puVar3 + 2) = param_3;
    puVar3[0xe] = *param_9;
    puVar3[0x11] = *param_10;
    FUN_149099a4e(param_7,puVar3 + 4);
    if (param_5 != '\0') {
      puVar3[0xf] = *param_11;
      puVar3[0x10] = *param_12;
    }
    puVar3[0x12] = param_13[2];
    iVar2 = 0;
    if (param_4 != '\x02') {
      iVar2 = 2 - (uint)param_6;
    }
    FUN_145f0f22e();
    FUN_1448e935e(param_2,local_58,&DAT_14cbfb0f0,iVar2);
    FUN_145f0f22e();
    local_88 = &local_64;
    local_64 = local_6c;
    local_60 = &DAT_100000001;
    FUN_14909a554(param_1,&local_65,local_58,puVar3 + 2);
    *(undefined4 *)(*param_13 + 0x58) = 0x70;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14443fd22 FUN_14443fd22 body=2144 status=ok
// SIG undefined FUN_14443fd22(void)

void FUN_14443fd22(longlong param_1,undefined8 param_2,undefined4 param_3,double *param_4,
                  longlong param_5,int param_6,longlong param_7,undefined8 param_8,longlong param_9,
                  undefined4 param_10,undefined4 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_218 [32];
  undefined1 **local_1f8;
  double local_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [28];
  undefined1 *local_11c;
  undefined4 local_114;
  undefined1 local_10d;
  undefined4 local_10c;
  undefined1 *local_108;
  undefined1 local_100 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar2 = *(longlong *)(*(longlong *)(param_7 + 0x40) + 0x130);
  dVar5 = (*(double *)(lVar2 + 0x50) - *(double *)(lVar2 + 0x38)) * 0.5;
  uStack_1b0 = 0;
  dVar10 = (*(double *)(lVar2 + 0x48) - *(double *)(lVar2 + 0x30)) * 0.5;
  dVar17 = (*(double *)(lVar2 + 0x40) - *(double *)(lVar2 + 0x28)) * 0.5;
  local_1a8 = *(double *)(lVar2 + 0x30) + dVar10;
  uStack_1a0 = 0;
  dVar16 = *(double *)(lVar2 + 0x28) + dVar17;
  dVar8 = *(double *)(param_7 + 0x340);
  dVar18 = *(double *)(param_7 + 0x348);
  dVar30 = *(double *)(param_7 + 0x350);
  dVar12 = *(double *)(param_7 + 0x380);
  dVar15 = *(double *)(param_7 + 0x388);
  local_1f0 = *(double *)(param_7 + 0x390);
  dVar27 = dVar8 + dVar8;
  dVar29 = dVar18 + dVar18;
  dVar24 = dVar30 + dVar30;
  dVar6 = (1.0 - (dVar30 * dVar24 + dVar18 * dVar29)) * dVar12;
  dVar7 = (1.0 - (dVar30 * dVar24 + dVar8 * dVar27)) * dVar15;
  dVar11 = *(double *)(param_7 + 0x340) * dVar24;
  dVar13 = *(double *)(param_7 + 0x340) * dVar27;
  dVar28 = *(double *)(param_7 + 0x358);
  dVar30 = *(double *)(param_7 + 0x358);
  dVar25 = dVar24 * dVar28;
  dVar26 = dVar27 * dVar30;
  dVar28 = dVar29 * dVar28;
  dVar30 = dVar27 * dVar30;
  dVar9 = (dVar29 * dVar8 + dVar25) * dVar12;
  local_178 = (dVar24 * dVar18 + dVar26) * dVar15;
  dVar31 = (dVar28 + dVar11) * local_1f0;
  dStack_150 = (dVar30 + dVar13) * *(double *)(param_7 + 0x398);
  dVar12 = (dVar11 - dVar28) * dVar12;
  dVar14 = (dVar13 - dVar30) * dVar15;
  dVar15 = (dVar29 * dVar8 - dVar25) * dVar15;
  dVar24 = (dVar24 * dVar18 - dVar26) * local_1f0;
  local_138._8_4_ = SUB84(dVar7,0);
  local_138._0_8_ = dVar6;
  local_138._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_198._8_4_ = SUB84(dVar16 * dVar9,0);
  local_198._0_8_ = dVar16 * dVar6;
  local_198._12_4_ = (int)((ulonglong)(dVar16 * dVar9) >> 0x20);
  local_1f0 = (1.0 - (dVar8 * dVar27 + dVar18 * dVar29)) * local_1f0;
  dVar13 = local_1a8 * dVar15;
  dVar8 = local_1a8 * dVar7;
  dVar30 = dVar31 * dVar31 + dVar15 * dVar15 + dVar6 * dVar6;
  dVar28 = dVar24 * dVar24 + dVar7 * dVar7 + dVar9 * dVar9;
  local_168._8_4_ = SUB84(local_178,0);
  local_168._0_8_ = dVar9;
  local_168._12_4_ = (int)((ulonglong)local_178 >> 0x20);
  dVar11 = local_1f0 * local_1f0 + local_178 * local_178 + dVar12 * dVar12;
  if (dVar30 <= dVar28) {
    dVar30 = dVar28;
  }
  if (dVar30 <= dVar11) {
    dVar30 = dVar11;
  }
  dVar11 = *(double *)(lVar2 + 0x38) + dVar5;
  dVar28 = param_4[1] + *(double *)(param_7 + 0x368);
  local_188._8_4_ = SUB84(dVar28,0);
  local_188._0_8_ = *param_4 + *(double *)(param_7 + 0x360);
  local_188._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  local_1e8._8_8_ = 0;
  local_1e8._0_8_ = dVar10 * local_178;
  local_148._8_4_ = SUB84(dVar14,0);
  local_148._0_8_ = dVar12;
  local_148._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  local_1c8 = *(double *)(param_7 + 0x370) + param_4[2];
  dVar28 = local_1a8 * local_178;
  local_1d8._8_8_ = 0;
  local_1d8._0_8_ = dVar11;
  local_1c0 = param_2;
  local_1b8 = dVar5;
  dStack_170 = local_178;
  local_158 = dVar31;
  if (dVar30 < 0.0) {
    sqrt(dVar30);
  }
  dVar13 = (double)local_198._0_8_ + dVar13;
  dVar8 = (double)local_198._8_8_ + dVar8;
  uVar3 = local_1e8._0_8_ & 0x7fffffffffffffff;
  uVar4 = local_1e8._8_8_ & 0x7fffffffffffffff;
  dVar14 = local_1b8 * local_1f0;
  dVar30 = (double)local_1d8._0_8_ * local_1f0;
  puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar19 = puVar21 + 0x1c;
  uVar22 = (int)uVar3;
  uVar23 = (int)(uVar3 >> 0x20);
  if (*(undefined8 **)(param_1 + 0x78) < puVar19) {
    local_1e8._8_4_ = (int)uVar4;
    local_1e8._0_8_ = uVar3;
    local_1e8._12_4_ = (int)(uVar4 >> 0x20);
    FUN_140023dd8((longlong *)(param_1 + 0x70),0xf0);
    puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar19 = puVar21 + 0x1c;
    uVar22 = local_1e8._0_4_;
    uVar23 = local_1e8._4_4_;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar19;
  *puVar21 = &PTR_FUN_14bab2cb8;
  puVar21[2] = 0;
  *(undefined1 *)(puVar21 + 3) = 1;
  puVar21[4] = 0;
  puVar21[5] = 0;
  puVar21[0x16] = 0;
  puVar21[0x17] = 0;
  puVar21[0x18] = 0;
  puVar21[0x19] = 0;
  puVar21[0x1a] = 0;
  puVar21[0x1b] = 0;
  iVar1 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar1);
  }
  dVar13 = dVar11 * dVar31 + dVar13 + (double)local_188._0_8_;
  dVar11 = dVar11 * dVar24 + dVar8 + (double)local_188._8_8_;
  dVar8 = ABS(dVar5 * dVar31) + ABS(dVar17 * dVar6) + ABS(dVar10 * dVar15);
  dVar6 = ABS(dVar5 * dVar24) + ABS(dVar17 * dVar9) + ABS(dVar10 * dVar7);
  dVar5 = ABS(dVar14) + ABS(dVar17 * dVar12) + (double)CONCAT44(uVar23,uVar22);
  dVar30 = dVar30 + dVar16 * dVar12 + dVar28 + local_1c8;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8) = puVar21;
  *(undefined4 *)(puVar21 + 6) = *(undefined4 *)(param_7 + 0x10);
  if (param_9 == 0) {
    uVar22 = 0x3f800000;
    param_11 = 1;
    param_10 = 0;
  }
  else {
    uVar22 = *(undefined4 *)(param_9 + 0x20);
  }
  *(undefined4 *)((longlong)puVar21 + 0x34) = uVar22;
  *(float *)(puVar21 + 10) = (float)(dVar13 - dVar8);
  *(float *)((longlong)puVar21 + 0x54) = (float)(dVar11 - dVar6);
  *(float *)(puVar21 + 0xb) = (float)(dVar30 - dVar5);
  *(float *)(puVar21 + 0xc) = (float)(dVar13 + dVar8);
  *(float *)((longlong)puVar21 + 100) = (float)(dVar6 + dVar11);
  *(float *)(puVar21 + 0xd) = (float)(dVar30 + dVar5);
  *(float *)(puVar21 + 0xe) = (float)(double)local_138._0_8_;
  *(float *)((longlong)puVar21 + 0x74) = (float)(double)local_168._0_8_;
  *(float *)(puVar21 + 0xf) = (float)(double)local_148._0_8_;
  *(undefined4 *)((longlong)puVar21 + 0x7c) = 0;
  *(float *)(puVar21 + 0x10) = (float)dVar15;
  *(float *)((longlong)puVar21 + 0x84) = (float)(double)local_138._8_8_;
  *(float *)(puVar21 + 0x11) = (float)local_178;
  *(undefined4 *)((longlong)puVar21 + 0x8c) = 0;
  *(float *)(puVar21 + 0x12) = (float)local_158;
  *(float *)((longlong)puVar21 + 0x94) = (float)dVar24;
  *(float *)(puVar21 + 0x13) = (float)local_1f0;
  *(undefined4 *)((longlong)puVar21 + 0x9c) = 0;
  *(float *)(puVar21 + 0x14) = (float)(double)local_188._0_8_;
  *(float *)((longlong)puVar21 + 0xa4) = (float)(double)local_188._8_8_;
  *(float *)(puVar21 + 0x15) = (float)local_1c8;
  *(undefined4 *)((longlong)puVar21 + 0xac) = 0x3f800000;
  puVar21[0x18] = param_12;
  puVar21[0x19] = param_8;
  *(undefined4 *)((longlong)puVar21 + 0x44) = param_3;
  *(undefined4 *)((longlong)puVar21 + 0x3c) = param_10;
  *(undefined4 *)(puVar21 + 8) = param_11;
  if (param_9 == 0) {
    *(undefined4 *)(puVar21 + 7) = 0x3f800000;
    uVar20 = FUN_14716d181(param_1,*(longlong *)(param_7 + 0x40) + 0x110);
    puVar21[0x16] = uVar20;
    uVar20 = 0;
  }
  else {
    *(undefined4 *)(puVar21 + 7) = *(undefined4 *)(param_9 + 4);
    uVar20 = FUN_14716d181(param_1,*(longlong *)(param_7 + 0x40) + 0x110);
    puVar21[0x16] = uVar20;
    uVar20 = FUN_14716d181(param_1,*(undefined8 *)(param_9 + 0x38));
  }
  puVar21[0x17] = uVar20;
  puVar21[0x1a] = param_14;
  puVar21[0x1b] = param_15;
  if (param_5 != 0) {
    FUN_1472ea582(param_1,param_5,puVar21 + 2);
  }
  FUN_145f5f692();
  FUN_1448e935e(local_1c0,local_100,&DAT_14cbfb218,param_6 != 0);
  FUN_145f5f692();
  if (param_6 == 0) {
    local_10c = *(undefined4 *)(puVar21 + 8);
    local_1f8 = (undefined1 **)&local_10c;
    local_108 = &DAT_100000001;
  }
  else {
    local_1f8 = &local_11c;
    local_11c = &DAT_100000001;
    local_114 = 1;
  }
  FUN_14909a6cc(param_1,&local_10d,local_100,puVar21 + 2);
  if ((local_f0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444058f FUN_14444058f body=2895 status=ok
// SIG undefined FUN_14444058f(void)

void FUN_14444058f(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5,uint param_6,uint param_7)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
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
  undefined4 uVar19;
  DWORD DVar20;
  double *pdVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  longlong *plVar25;
  ulonglong uVar26;
  byte bVar27;
  longlong lVar28;
  undefined8 *puVar29;
  longlong *plVar30;
  undefined6 uVar31;
  undefined8 uVar32;
  undefined8 *puVar33;
  longlong lVar34;
  bool bVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  ulonglong local_140;
  char local_131;
  longlong *local_130;
  ulonglong *local_128;
  undefined8 local_120;
  undefined1 local_111;
  undefined8 local_110 [2];
  undefined8 local_100;
  undefined8 local_f8 [3];
  longlong *local_e0 [2];
  undefined8 local_d0;
  longlong *local_c8;
  longlong local_c0;
  undefined *local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((-1 < (int)param_6) && ((int)param_6 < *(int *)(param_5 + 0x118))) {
    if (*(longlong *)(*(longlong *)(param_5 + 0x110) + (ulonglong)param_6 * 0x68) != 0) {
      plVar30 = (longlong *)(*(longlong *)(param_5 + 0x110) + (ulonglong)param_6 * 0x68);
      lVar28 = 0;
      local_148 = local_148 & 0xffffffffffffff00;
      FUN_14716cfd3(local_e0,param_1,plVar30[1] + 0x50,3);
      local_148 = local_148 & 0xffffffffffffff00;
      FUN_14716cfd3(local_f8,param_1,plVar30[1] + 0x70,3);
      local_148 = local_148 & 0xffffffffffffff00;
      FUN_14716cfd3(local_110,param_1,plVar30[1] + 0x90,3);
      local_c8 = local_e0[0];
      local_c0 = local_f8[0];
      local_b8 = (undefined *)local_110[0];
      do {
        FUN_14022b18a(param_1,*(undefined8 *)((longlong)&local_c8 + lVar28));
        lVar28 = lVar28 + 8;
      } while (lVar28 != 0x18);
      local_131 = *(char *)(*(longlong *)(param_5 + 0x3a0) + 0x382);
      if (local_131 == '\0') {
        local_140 = (ulonglong)(uint)((int)local_e0[0][0xc] * *(int *)((longlong)local_e0[0] + 100))
        ;
        local_148 = 0;
        FUN_143211d72(param_1,local_f8[0],0);
      }
      puVar1 = (ulonglong *)(param_1 + 0x70);
      puVar29 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar23 = puVar29 + 0x22;
      local_128 = puVar1;
      if (*(undefined8 **)(param_1 + 0x78) < puVar23) {
        FUN_140023dd8(puVar1,0x120);
        puVar29 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar23 = puVar29 + 0x22;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar23;
      *puVar29 = &PTR_FUN_14bab2cd8;
      puVar29[0x1e] = 0;
      puVar29[0x10] = 0;
      puVar29[0x11] = 0;
      puVar29[0x12] = 0;
      puVar29[0x13] = 0;
      puVar29[0x14] = 0;
      puVar29[0x15] = 0;
      puVar29[0x16] = 0;
      puVar29[0x17] = 0;
      puVar29[0x18] = 0;
      puVar29[0x19] = 0;
      puVar29[0x1a] = 0;
      puVar29[0x1b] = 0;
      puVar29[0x1c] = 0;
      *(undefined1 *)(puVar29 + 0x1f) = 1;
      puVar29[0x20] = 0;
      puVar29[0x21] = 0;
      iVar7 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar7 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar7 + 1U) {
        FUN_1448cfae8(param_1 + 0x98,iVar7);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar7 * 8) = puVar29;
      *(undefined4 *)(puVar29 + 2) = *(undefined4 *)(param_5 + 0x10);
      pdVar21 = (double *)(param_5 + 0x1a0);
      if (*(int *)(param_5 + 0x3ac) == 2) {
        pdVar21 = (double *)(param_5 + 0x200);
      }
      dVar13 = *pdVar21;
      dVar14 = pdVar21[1];
      dVar15 = pdVar21[2];
      dVar16 = pdVar21[8];
      dVar17 = pdVar21[9];
      dVar18 = pdVar21[10];
      dVar37 = dVar14 + dVar14;
      dVar38 = dVar15 + dVar15;
      dVar10 = dVar13 * (dVar13 + dVar13);
      dVar36 = pdVar21[3];
      dVar11 = dVar38 * dVar36;
      dVar12 = (dVar13 + dVar13) * pdVar21[3];
      dVar36 = dVar37 * dVar36;
      dVar4 = pdVar21[4];
      dVar5 = pdVar21[5];
      dVar6 = pdVar21[6];
      *(float *)(puVar29 + 4) = (float)((1.0 - (dVar15 * dVar38 + dVar14 * dVar37)) * dVar16);
      *(float *)((longlong)puVar29 + 0x24) = (float)((dVar37 * dVar13 + dVar11) * dVar16);
      *(float *)(puVar29 + 5) = (float)((dVar38 * dVar13 - dVar36) * dVar16);
      *(undefined4 *)((longlong)puVar29 + 0x2c) = 0;
      *(float *)(puVar29 + 6) = (float)((dVar37 * dVar13 - dVar11) * dVar17);
      *(float *)((longlong)puVar29 + 0x34) = (float)((1.0 - (dVar15 * dVar38 + dVar10)) * dVar17);
      *(float *)(puVar29 + 7) = (float)((dVar38 * dVar14 + dVar12) * dVar17);
      *(undefined4 *)((longlong)puVar29 + 0x3c) = 0;
      *(float *)(puVar29 + 8) = (float)((dVar36 + dVar38 * dVar13) * dVar18);
      *(float *)((longlong)puVar29 + 0x44) = (float)((dVar38 * dVar14 - dVar12) * dVar18);
      *(float *)(puVar29 + 9) = (float)((1.0 - (dVar10 + dVar14 * dVar37)) * dVar18);
      uVar32 = 0;
      *(undefined4 *)((longlong)puVar29 + 0x4c) = 0;
      *(float *)(puVar29 + 10) = (float)dVar4;
      *(float *)((longlong)puVar29 + 0x54) = (float)dVar5;
      *(float *)(puVar29 + 0xb) = (float)dVar6;
      *(undefined4 *)((longlong)puVar29 + 0x5c) = 0x3f800000;
      *(undefined4 *)((longlong)puVar29 + 100) =
           *(undefined4 *)(*(longlong *)(plVar30[5] + 0x130) + 0xc);
      lVar28 = *(longlong *)(plVar30[5] + 0x130);
      dVar36 = *(double *)(lVar28 + 0x38);
      dVar4 = *(double *)(lVar28 + 0x50);
      dVar5 = *(double *)(lVar28 + 0x30);
      dVar6 = *(double *)(lVar28 + 0x48);
      *(float *)(puVar29 + 0xe) =
           (float)((*(double *)(lVar28 + 0x28) + *(double *)(lVar28 + 0x40)) * 0.5);
      *(float *)((longlong)puVar29 + 0x74) = (float)((dVar5 + dVar6) * 0.5);
      *(float *)(puVar29 + 0xf) = (float)((dVar36 + dVar4) * 0.5);
      uVar22 = FUN_14716d181(param_1,plVar30[5] + 0x50);
      puVar29[0x10] = uVar22;
      uVar22 = FUN_14716d181(param_1,plVar30[6] + (ulonglong)*(uint *)(plVar30[6] + 0x188) * 0x20 +
                                     0x50);
      puVar29[0x11] = uVar22;
      uVar22 = FUN_14716d181(param_1,plVar30[6] + (ulonglong)*(uint *)(plVar30[6] + 0x188) * 0x20 +
                                     0x90);
      puVar29[0x12] = uVar22;
      *(undefined4 *)(puVar29 + 0xc) = *(undefined4 *)(*(longlong *)(*plVar30 + 0x140) + 0x28);
      puVar29[0x13] = *(undefined8 *)(*plVar30 + 0x68);
      puVar29[0x14] = *(undefined8 *)(*plVar30 + 0xb8);
      puVar29[0x1b] = local_d0;
      puVar29[0x1c] = local_100;
      uVar22 = FUN_14716d181(param_1,plVar30[2] + 0x50);
      puVar29[0x15] = uVar22;
      if (((*(int *)(param_5 + 0x3ac) == 2) &&
          (plVar25 = (longlong *)plVar30[7], plVar25 != (longlong *)0x0)) &&
         (0 < (int)*(uint *)(plVar25 + 1))) {
        lVar28 = *(longlong *)*plVar25;
        if (((((lVar28 != 0) && (param_7 < *(uint *)(plVar25 + 1))) &&
             ((-1 < (int)param_7 &&
              ((*(int *)(*(longlong *)(lVar28 + 0x140) + 0xc) != 0 &&
               (uVar26 = (ulonglong)param_7, *(int *)(((longlong *)*plVar25)[uVar26] + 0x50) == 2)))
              ))) && (plVar24 = (longlong *)plVar30[8], (int)param_7 < (int)plVar24[1])) &&
           (*(int *)(*(longlong *)(*plVar24 + uVar26 * 8) + 0x50) - 1U < 2)) {
          local_130 = plVar24;
          uVar22 = FUN_14716d181(param_1,plVar30[5] + 0xf0);
          puVar29[0x1a] = uVar22;
          lVar28 = *(longlong *)(*plVar25 + uVar26 * 8);
          lVar8 = *(longlong *)(*local_130 + uVar26 * 8);
          uVar22 = FUN_14716d181(param_1,lVar28 + 0x98);
          puVar29[0x19] = uVar22;
          uVar22 = FUN_14716d181(param_1,lVar28 + 0x78);
          puVar29[0x18] = uVar22;
          uVar22 = FUN_14716d181(param_1,lVar28 + 0xb8);
          puVar29[0x16] = uVar22;
          lVar28 = DAT_14c9d2450;
          iVar7 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60);
          if (iVar7 == 0x40000002) {
            uVar26 = 0;
          }
          else {
            bVar35 = true;
            if ((DAT_14c86a9f8 == '\x01') && (iVar7 != 2)) {
              if (iVar7 == 1) {
                uVar19 = FUN_140ad26c0();
                local_130 = (longlong *)CONCAT44(local_130._4_4_,uVar19);
                DVar20 = GetCurrentThreadId();
                bVar35 = (DWORD)local_130 == DVar20;
              }
              else {
                bVar35 = false;
              }
            }
            uVar26 = (ulonglong)(bVar35 ^ 1);
          }
          lVar34 = lVar8 + 0x58;
          if (0 < *(int *)(lVar28 + uVar26 * 4)) {
            lVar34 = lVar34 + (ulonglong)*(uint *)(lVar8 + 0x120) * 0x20;
          }
          uVar22 = FUN_14716d181(param_1,lVar34);
          puVar29[0x17] = uVar22;
          uVar32 = 1;
        }
      }
      if (param_4 != 0) {
        FUN_1472ea582(param_1,param_4,puVar29 + 0x1e);
      }
      FUN_145f5fba4();
      FUN_1448e935e(param_2,&local_c8,&DAT_14cbfb340,uVar32);
      FUN_145f5fba4();
      local_120 = local_c0;
      if ((int)param_3 < 2) {
        bVar27 = 0;
      }
      else {
        bVar27 = (*(byte *)((longlong)&DAT_14ca814d0 +
                           (ulonglong)*(ushort *)(&DAT_14ca85070 + (ulonglong)param_3 * 2) * 0x3c +
                           6) & 0x10) >> 4;
      }
      iVar7 = *(int *)(puVar29 + 0xc);
      local_130 = local_c8;
      lVar28 = *plVar30;
      lVar8 = *(longlong *)(lVar28 + 0x60);
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
        lVar28 = *plVar30;
      }
      lVar28 = *(longlong *)(lVar28 + 0xb0);
      if (lVar28 != 0) {
        LOCK();
        *(int *)(lVar28 + 8) = *(int *)(lVar28 + 8) + 1;
        UNLOCK();
      }
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      if (lVar28 != 0) {
        LOCK();
        *(int *)(lVar28 + 8) = *(int *)(lVar28 + 8) + 1;
        UNLOCK();
      }
      FUN_145f5fe12();
      FUN_140069376(param_1);
      puVar1 = local_128;
      uVar31 = (undefined6)((ulonglong)plVar30 >> 0x10);
      uVar19 = (undefined4)CONCAT62(uVar31,2);
      if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
         ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
        uVar19 = (undefined4)CONCAT62(uVar31,4);
      }
      puVar33 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar23 = puVar33 + 0x3f;
      if (*(undefined8 **)(param_1 + 0x78) < puVar23) {
        FUN_140023dd8(local_128,0x200);
        puVar33 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar23 = puVar33 + 0x3f;
      }
      *local_128 = (ulonglong)puVar23;
      local_c0 = DAT_14cbfcce0;
      if (DAT_14cbfcce0 != 0) {
        LOCK();
        *(int *)(DAT_14cbfcce0 + 8) = *(int *)(DAT_14cbfcce0 + 8) + 1;
        UNLOCK();
      }
      local_b8 = &DAT_14cbfcc98;
      local_148 = CONCAT71(local_148._1_7_,2);
      local_c8 = puVar29 + 2;
      FUN_140068f1a(puVar33,&local_111,&local_c8,uVar19);
      *puVar33 = &PTR_FUN_14bab2ce0;
      puVar33[0x37] = puVar29 + 2;
      puVar33[0x38] = local_130;
      puVar33[0x39] = local_120;
      *(uint *)(puVar33 + 0x3a) = iVar7 + 0xffU >> 8;
      *(undefined1 **)((longlong)puVar33 + 0x1d4) = &DAT_100000001;
      puVar33[0x3c] = lVar8;
      puVar33[0x3d] = lVar28;
      *(byte *)(puVar33 + 0x3e) = bVar27;
      iVar7 = *(int *)(param_1 + 0x170);
      *(uint *)(param_1 + 0x170) = iVar7 + 1U;
      if (*(uint *)(param_1 + 0x174) < iVar7 + 1U) {
        FUN_14470e57a(param_1 + 0x168,iVar7);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar7 * 8) = puVar33;
      *(int *)((longlong)puVar33 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
      FUN_140069100(param_1,puVar33);
      if (local_131 != '\0') {
        local_140 = (ulonglong)(uint)((int)local_e0[0][0xc] * *(int *)((longlong)local_e0[0] + 100))
        ;
        local_148 = 0;
        FUN_143211d72(param_1,local_f8[0],0);
      }
      local_c8 = local_e0[0];
      local_c0 = local_f8[0];
      local_b8 = (undefined *)local_110[0];
      lVar34 = 0;
      do {
        lVar9 = *(longlong *)((longlong)&local_c8 + lVar34);
        if ((*(byte *)(lVar9 + 0x20) & 0xc) == 0) {
          if ((*(byte *)(lVar9 + 0x20) & 0x10) != 0) {
            FUN_140069376(param_1);
          }
          iVar7 = *(int *)(param_1 + 0x5a0);
          *(uint *)(param_1 + 0x5a0) = iVar7 + 1U;
          if (*(uint *)(param_1 + 0x5a4) < iVar7 + 1U) {
            FUN_1400f155a((longlong *)(param_1 + 0x598),iVar7);
          }
          *(longlong *)(*(longlong *)(param_1 + 0x598) + (longlong)iVar7 * 8) = lVar9;
          *(undefined4 *)(lVar9 + 0x1c) = 0x70;
          *(byte *)(lVar9 + 0x20) = *(byte *)(lVar9 + 0x20) & 0xe8 | 0x15;
          *(undefined4 *)(lVar9 + 0x58) = 0x70;
        }
        lVar34 = lVar34 + 8;
      } while (lVar34 != 0x18);
      if (lVar28 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar28 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          puVar2 = (uint *)(lVar28 + 8);
          LOCK();
          uVar3 = *puVar2;
          *puVar2 = *puVar2 | 0x40000000;
          UNLOCK();
          if ((uVar3 >> 0x1e & 1) == 0) {
            bVar27 = *(byte *)(lVar28 + 0xd);
            plVar24 = (longlong *)FUN_14001cc68(0x10,8);
            plVar24[1] = lVar28;
            plVar30 = DAT_14ca843c0;
            plVar25 = DAT_14ca843c8;
            if ((bVar27 & 2) == 0) {
              do {
                *plVar24 = (longlong)plVar30;
                LOCK();
                bVar35 = plVar30 != DAT_14ca843c0;
                plVar25 = plVar24;
                if (bVar35) {
                  plVar30 = DAT_14ca843c0;
                  plVar25 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar25;
                UNLOCK();
              } while (bVar35);
            }
            else {
              do {
                *plVar24 = (longlong)plVar25;
                LOCK();
                bVar35 = plVar25 != DAT_14ca843c8;
                plVar30 = plVar24;
                if (bVar35) {
                  plVar25 = DAT_14ca843c8;
                  plVar30 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar30;
                UNLOCK();
              } while (bVar35);
            }
          }
        }
      }
      if (lVar8 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar8 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          puVar2 = (uint *)(lVar8 + 8);
          LOCK();
          uVar3 = *puVar2;
          *puVar2 = *puVar2 | 0x40000000;
          UNLOCK();
          if ((uVar3 >> 0x1e & 1) == 0) {
            bVar27 = *(byte *)(lVar8 + 0xd);
            plVar24 = (longlong *)FUN_14001cc68(0x10,8);
            plVar24[1] = lVar8;
            plVar30 = DAT_14ca843c0;
            plVar25 = DAT_14ca843c8;
            if ((bVar27 & 2) == 0) {
              do {
                *plVar24 = (longlong)plVar30;
                LOCK();
                bVar35 = plVar30 != DAT_14ca843c0;
                plVar25 = plVar24;
                if (bVar35) {
                  plVar30 = DAT_14ca843c0;
                  plVar25 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar25;
                UNLOCK();
              } while (bVar35);
            }
            else {
              do {
                *plVar24 = (longlong)plVar25;
                LOCK();
                bVar35 = plVar25 != DAT_14ca843c8;
                plVar30 = plVar24;
                if (bVar35) {
                  plVar25 = DAT_14ca843c8;
                  plVar30 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar30;
                UNLOCK();
              } while (bVar35);
            }
          }
        }
      }
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444410eb FUN_1444410eb body=699 status=ok
// SIG undefined FUN_1444410eb(void)

void FUN_1444410eb(longlong param_1,undefined8 param_2,int param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  byte bVar9;
  undefined8 *puVar10;
  undefined1 auStack_108 [32];
  uint *local_e8;
  undefined8 *local_e0;
  longlong local_d0;
  undefined8 local_c8;
  uint local_c0;
  undefined1 *local_bc;
  undefined1 local_b1;
  uint *local_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  lVar2 = DAT_14c9d2450;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_c8 = param_2;
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar7 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar7 = 1;
  }
  bVar9 = 0;
  if ((param_4 != 0) && (bVar9 = 0, *(int *)(lVar2 + uVar7 * 4) < 1)) {
    bVar9 = *(byte *)(*(longlong *)(param_4 + 8) + 0x80);
  }
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar5 = puVar10 + 10;
  local_d0 = param_4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x60);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar5 = puVar10 + 10;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  *puVar10 = &PTR_FUN_14bab2cf8;
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  *(undefined4 *)(puVar10 + 8) = 4;
  iVar1 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8) = puVar10;
  puVar10[3] = param_5;
  puVar10[6] = param_6;
  *(int *)(puVar10 + 2) = param_3;
  *(uint *)((longlong)puVar10 + 0x14) = (uint)bVar9;
  FUN_145e7a5b0();
  FUN_1448e935e(local_c8,&local_88,&DAT_14cbfb468,(uint)bVar9);
  FUN_145e7a5b0();
  lVar2 = local_d0;
  local_98 = (undefined4)local_88;
  uStack_94 = local_88._4_4_;
  uStack_90 = uStack_80;
  uStack_8c = uStack_7c;
  if (bVar9 == 0) {
    local_c0 = param_3 + 0x3ffU >> 10;
    local_e8 = &local_c0;
    local_bc = &DAT_100000001;
    FUN_14909a90a(param_1,&local_88,&local_98,puVar10 + 2);
  }
  else {
    local_e8 = (uint *)((ulonglong)local_e8 & 0xffffffffffffff00);
    FUN_14716cfd3(&local_b0,param_1,*(longlong *)(local_d0 + 8) + 0x20,1);
    puVar10[4] = local_a8;
    uVar6 = FUN_14716d181(param_1,*(longlong *)(lVar2 + 8) + 0x60);
    puVar10[5] = uVar6;
    puVar10[7] = local_b0;
    *(undefined4 *)(puVar10 + 8) = 4;
    local_88 = 0;
    local_78 = (longlong *)0x0;
    local_e8 = local_b0;
    local_e0 = &local_88;
    FUN_1490b78a9(param_1,&local_b1,&local_98,puVar10 + 2);
    if (local_88 != 0) {
      plVar8 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar8 = local_68;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444413b3 FUN_1444413b3 body=733 status=ok
// SIG undefined FUN_1444413b3(void)

void FUN_1444413b3(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  int param_5,char param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                  undefined4 param_10,undefined8 *param_11,byte *param_12,undefined8 *param_13,
                  undefined8 *param_14,undefined8 *param_15,undefined8 *param_16)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [32];
  uint *local_b8;
  undefined8 local_a8;
  undefined1 local_9d;
  uint local_9c;
  undefined1 *local_98;
  undefined1 local_90 [16];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar5 + 0x14;
  local_a8 = param_2;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0xb0);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar5 + 0x14;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar3;
  *puVar5 = &PTR_FUN_14bab2d38;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  *(undefined4 *)(puVar5 + 8) = 4;
  puVar5[0x10] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  *(undefined1 *)(puVar5 + 0x11) = 1;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  iVar4 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar5;
  *(int *)(puVar5 + 2) = param_5;
  puVar5[9] = *param_11;
  *(undefined4 *)((longlong)puVar5 + 0x14) = param_4;
  *(undefined4 *)(puVar5 + 3) = param_8;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = param_9;
  *(undefined4 *)(puVar5 + 4) = param_10;
  puVar5[10] = *param_13;
  puVar5[0xb] = *param_14;
  puVar5[0xc] = *param_15;
  iVar4 = 4;
  if (DAT_14c764a14 < 4) {
    iVar4 = DAT_14c764a14;
  }
  iVar2 = 1;
  if (1 < iVar4) {
    iVar2 = iVar4;
  }
  *(int *)(puVar5 + 0xe) = iVar2;
  if (param_3 != 0) {
    FUN_1472ea582(param_1,param_3,puVar5 + 0x10);
  }
  puVar5[0xd] = *param_16;
  *(undefined4 *)(puVar5 + 0xe) = param_7;
  bVar1 = *param_12;
  *(uint *)((longlong)puVar5 + 0x24) = (uint)bVar1;
  if (bVar1 == 1) {
    puVar5[5] = *(undefined8 *)(param_12 + 0x10);
    puVar5[6] = *(undefined8 *)(param_12 + 0x28);
    puVar5[7] = *(undefined8 *)(param_12 + 8);
    *(undefined4 *)(puVar5 + 8) = 4;
  }
  FUN_145e9e168();
  FUN_1448e935e(local_a8,local_90,&DAT_14cbfb590,param_6 * '\x02' | bVar1);
  FUN_145e9e168();
  local_9c = param_5 + 0x3ffU >> 10;
  local_b8 = &local_9c;
  local_98 = &DAT_100000001;
  FUN_14909aa82(param_1,&local_9d,local_90,puVar5 + 2);
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444169d FUN_14444169d body=328 status=ok
// SIG undefined FUN_14444169d(void)

void FUN_14444169d(longlong param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  uint *local_68;
  undefined1 local_5d;
  uint local_5c;
  undefined1 *local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3 + 4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x30);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar2 = puVar3 + 4;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar2;
  *puVar3 = &PTR_FUN_14bab2d58;
  puVar3[2] = 0;
  iVar1 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8) = puVar3;
  *(int *)(puVar3 + 3) = param_3;
  puVar3[2] = *param_4;
  FUN_145ee06b2();
  FUN_1448e935e(param_2,local_50,&DAT_14cbfb6b8,0);
  FUN_145ee06b2();
  local_5c = param_3 * 6 + 0x3fU >> 6;
  local_68 = &local_5c;
  local_58 = &DAT_100000001;
  FUN_14909abf4(param_1,&local_5d,local_50,puVar3 + 2);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444417e6 FUN_1444417e6 body=658 status=ok
// SIG undefined FUN_1444417e6(void)

void FUN_1444417e6(longlong param_1,longlong param_2,undefined4 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  float fVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_61;
  undefined8 *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_70 = param_6;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  fVar2 = *(float *)(*(longlong *)(param_2 + 0x3a0) + 0x47c);
  iVar3 = (int)ROUND(fVar2 + fVar2 + -0.5) >> 1;
  iVar8 = 0;
  if (0 < iVar3) {
    iVar8 = iVar3;
  }
  local_76 = *(undefined1 *)(*(longlong *)(param_2 + 0x78) + 0x14a);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 6;
  local_75 = param_4;
  local_74 = param_3;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(puVar1,0x40);
    puVar5 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar4 = puVar5 + 6;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14bab2d98;
  puVar5[2] = 0;
  *(undefined4 *)(puVar5 + 3) = 0x10;
  puVar5[4] = 0;
  *(undefined4 *)(puVar5 + 5) = 0x10;
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  puVar5[2] = param_5;
  *(undefined4 *)(puVar5 + 3) = 0x10;
  puVar5[4] = local_70;
  *(undefined4 *)(puVar5 + 5) = 0x10;
  FUN_1490b8a72();
  FUN_140069376(param_1);
  uVar6 = 0x12;
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar6 = 0x14;
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar7 + 0x3a;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(puVar1,0x1d8);
    puVar7 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar7 + 0x3a;
  }
  *puVar1 = (ulonglong)puVar4;
  local_58 = DAT_14cbfd7f0;
  if (DAT_14cbfd7f0 != 0) {
    LOCK();
    *(int *)(DAT_14cbfd7f0 + 8) = *(int *)(DAT_14cbfd7f0 + 8) + 1;
    UNLOCK();
  }
  local_50 = &DAT_14cbfd7a8;
  local_88 = 0;
  local_60 = puVar5 + 2;
  FUN_140068f1a(puVar7,&local_61,&local_60,uVar6);
  *puVar7 = &PTR_FUN_14bab2da0;
  puVar7[0x37] = param_2;
  *(int *)(puVar7 + 0x38) = iVar8;
  *(undefined1 *)((longlong)puVar7 + 0x1c4) = local_75;
  *(undefined1 *)((longlong)puVar7 + 0x1c5) = local_76;
  *(undefined4 *)(puVar7 + 0x39) = local_74;
  iVar8 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar8 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar8 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar8);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar8 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    FUN_140069100(param_1,puVar7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144441a79 FUN_144441a79 body=665 status=ok
// SIG undefined FUN_144441a79(void)

void FUN_144441a79(longlong param_1,longlong param_2,int param_3,char param_4)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  int local_70;
  undefined1 local_69;
  undefined8 *local_68;
  longlong local_60;
  undefined *local_58;
  undefined2 local_4b;
  undefined1 local_49;
  ulonglong local_48;
  int6 iVar10;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = (longlong)param_3 * 0x68 + *(longlong *)(param_2 + 0x110);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar5 = puVar7 + 4;
  local_70 = param_3;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(puVar1,0x30);
    puVar7 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar5 = puVar7 + 4;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  *puVar7 = &PTR_FUN_14bab2e08;
  puVar7[2] = 0;
  *(undefined4 *)(puVar7 + 3) = 0x10;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar7;
  lVar3 = *(longlong *)(lVar6 + 8);
  if (lVar3 == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    local_78 = 0;
    FUN_14716cfd3(&local_68,param_1,lVar3 + 0x50,0);
    puVar5 = local_68;
  }
  puVar7[2] = puVar5;
  *(undefined4 *)(puVar7 + 3) = 0x10;
  if ((*(char *)(*(longlong *)(lVar6 + 0x18) + 0x149) != '\x01') || (param_4 != '\0')) {
    FUN_1490b8d86();
    FUN_140069376(param_1);
    iVar4 = local_70;
    iVar10 = (int6)(short)((uint)iVar2 >> 0x10);
    uVar9 = CONCAT62(iVar10,0x12);
    if (((0 < DAT_14c760ddc) &&
        (((DAT_14ca84e23 == '\x01' && (DAT_14c760ddc == 2)) && (DAT_14ca84e6a != '\0')))) &&
       ((DAT_14ca84e99 & 1) == 0)) {
      uVar9 = CONCAT62(iVar10,0x14);
    }
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 0x39;
    if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
      FUN_140023dd8(puVar1,0x1d0);
      puVar8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar8 + 0x39;
    }
    *puVar1 = (ulonglong)puVar5;
    local_60 = DAT_14cbfd888;
    if (DAT_14cbfd888 != 0) {
      LOCK();
      *(int *)(DAT_14cbfd888 + 8) = *(int *)(DAT_14cbfd888 + 8) + 1;
      UNLOCK();
    }
    local_58 = &DAT_14cbfd840;
    local_78 = 0;
    local_68 = puVar7 + 2;
    FUN_140068f1a(puVar8,&local_69,&local_68,uVar9 & 0xffffffff);
    *puVar8 = &PTR_FUN_14bab2e10;
    puVar8[0x37] = param_2;
    *(int *)(puVar8 + 0x38) = iVar4;
    *(char *)((longlong)puVar8 + 0x1c4) = param_4;
    *(undefined2 *)((longlong)puVar8 + 0x1c5) = local_4b;
    *(undefined1 *)((longlong)puVar8 + 0x1c7) = local_49;
    iVar2 = *(int *)(param_1 + 0x170);
    *(uint *)(param_1 + 0x170) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
      FUN_14470e57a(param_1 + 0x168,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar8;
    *(int *)((longlong)puVar8 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
    FUN_140069100(param_1,puVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144441d13 FUN_144441d13 body=683 status=ok
// SIG undefined FUN_144441d13(void)

void FUN_144441d13(longlong param_1,longlong param_2,int param_3,char param_4)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  int local_70;
  undefined1 local_69;
  undefined8 *local_68;
  longlong local_60;
  undefined *local_58;
  undefined2 local_4b;
  undefined1 local_49;
  ulonglong local_48;
  int6 iVar10;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = (longlong)param_3 * 0x30 + *(longlong *)(param_2 + 0x120);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar5 = puVar7 + 4;
  local_70 = param_3;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(puVar1,0x30);
    puVar7 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar5 = puVar7 + 4;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  *puVar7 = &PTR_FUN_14bab2e08;
  puVar7[2] = 0;
  *(undefined4 *)(puVar7 + 3) = 0x10;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar7;
  lVar3 = *(longlong *)(lVar6 + 8);
  if (lVar3 == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    local_78 = 0;
    FUN_14716cfd3(&local_68,param_1,lVar3 + (ulonglong)*(uint *)(lVar3 + 0x9c) * 0x20 + 0x50,0);
    puVar5 = local_68;
  }
  puVar7[2] = puVar5;
  *(undefined4 *)(puVar7 + 3) = 0x10;
  if ((*(char *)(*(longlong *)(lVar6 + 0x10) + 0x149) != '\x01') || (param_4 != '\0')) {
    FUN_1490b8d86();
    FUN_140069376(param_1);
    iVar4 = local_70;
    iVar10 = (int6)(short)((uint)iVar2 >> 0x10);
    uVar9 = CONCAT62(iVar10,0x12);
    if (((0 < DAT_14c760ddc) &&
        (((DAT_14ca84e23 == '\x01' && (DAT_14c760ddc == 2)) && (DAT_14ca84e6a != '\0')))) &&
       ((DAT_14ca84e99 & 1) == 0)) {
      uVar9 = CONCAT62(iVar10,0x14);
    }
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 0x39;
    if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
      FUN_140023dd8(puVar1,0x1d0);
      puVar8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar8 + 0x39;
    }
    *puVar1 = (ulonglong)puVar5;
    local_60 = DAT_14cbfd888;
    if (DAT_14cbfd888 != 0) {
      LOCK();
      *(int *)(DAT_14cbfd888 + 8) = *(int *)(DAT_14cbfd888 + 8) + 1;
      UNLOCK();
    }
    local_58 = &DAT_14cbfd840;
    local_78 = 0;
    local_68 = puVar7 + 2;
    FUN_140068f1a(puVar8,&local_69,&local_68,uVar9 & 0xffffffff);
    *puVar8 = &PTR_FUN_14bab2e80;
    puVar8[0x37] = param_2;
    *(int *)(puVar8 + 0x38) = iVar4;
    *(char *)((longlong)puVar8 + 0x1c4) = param_4;
    *(undefined2 *)((longlong)puVar8 + 0x1c5) = local_4b;
    *(undefined1 *)((longlong)puVar8 + 0x1c7) = local_49;
    iVar2 = *(int *)(param_1 + 0x170);
    *(uint *)(param_1 + 0x170) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
      FUN_14470e57a(param_1 + 0x168,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar8;
    *(int *)((longlong)puVar8 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
    FUN_140069100(param_1,puVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144441fbf FUN_144441fbf body=275 status=ok
// SIG undefined FUN_144441fbf(void)

void FUN_144441fbf(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4,
                  longlong param_5)

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
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    local_58 = 0;
    FUN_14716cfd3(&local_48,param_1,param_5,1);
    *(undefined8 *)(param_2 + 4) = local_38;
    *param_2 = local_48;
    param_2[1] = uStack_44;
    param_2[2] = uStack_40;
    param_2[3] = uStack_3c;
  }
  lVar4 = *(longlong *)(param_5 + 8);
  lVar5 = *param_4;
  if (lVar5 != lVar4) {
    *param_4 = lVar4;
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
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
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
      }
    }
  }
  FUN_1490aabaa(param_3,param_5);
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444420d3 FUN_1444420d3 body=69 status=ok
// SIG undefined FUN_1444420d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444420d3(void)

{
  _DAT_14cbfb778 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144442115. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbfb780,1);
  return;
}



// FUNCTION 144442118 FUN_144442118 body=69 status=ok
// SIG undefined FUN_144442118(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144442118(void)

{
  _DAT_14cbfb788 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014444215a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbfb790,1);
  return;
}



// FUNCTION 14444216d FUN_14444216d body=2138 status=ok
// SIG undefined FUN_14444216d(void)

void FUN_14444216d(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  longlong param_5,longlong param_6,longlong param_7)

{
  longlong *plVar1;
  ulonglong *puVar2;
  void *pvVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined8 unaff_RBP;
  uint6 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_dc;
  ulonglong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined1 local_b9;
  int local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined8 *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_6 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (undefined4)
            CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*(longlong *)(*param_4 + 0x18) != 0);
  }
  local_d0 = param_2;
  if (param_7 == 0) {
    local_a8 = 0;
    uVar6 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar6 = DAT_14ca84e48;
    }
    local_b8 = uVar6 + (uVar6 == 0);
    uStack_b4 = 1;
    uStack_b0._0_4_ = 0x4109;
    plVar1 = (longlong *)(param_1 + 0x70);
    uVar15 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar4 = uVar15 + 0x150;
    if (*(ulonglong *)(param_1 + 0x78) < uVar4) {
      FUN_140023dd8(plVar1,0x160);
      uVar15 = *plVar1 + 0xfU & 0xfffffffffffffff0;
      uVar4 = uVar15 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar4;
    FUN_1456bd266(uVar15,L"DummyUAV",&local_b8,0);
    iVar14 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar14 + 1U) {
      FUN_144737178(param_1 + 0x188,iVar14);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar14 * 8) = uVar15;
    *(int *)(uVar15 + 0x7c) = *(int *)(param_1 + 400) + -1;
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
      FUN_140023dd8(plVar1,0x48);
      puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar5;
    puVar7[1] = *(undefined8 *)(uVar15 + 8);
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 2;
    *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar7 + 5) = 1;
    *puVar7 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar7 + 6) = 0x3d;
    *(undefined1 *)((longlong)puVar7 + 0x32) = 0;
    puVar7[7] = uVar15;
    iVar14 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar14);
    }
  }
  else {
    uVar8 = *(undefined1 *)(*(longlong *)(param_3 + 0x78) + 0x19);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x48);
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar5;
    puVar7[1] = *(undefined8 *)(param_7 + 8);
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 2;
    *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar7 + 5) = 1;
    *puVar7 = &PTR_FUN_14a1fb3e8;
    *(undefined1 *)(puVar7 + 6) = uVar8;
    *(undefined2 *)((longlong)puVar7 + 0x31) = 0;
    puVar7[7] = param_7;
    iVar14 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar14);
    }
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar2 = (ulonglong *)(param_1 + 0x70);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar5 = puVar12 + 0xe;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(puVar2,0x80);
    puVar12 = (undefined8 *)(*puVar2 + 0xf & 0xfffffffffffffff0);
    puVar5 = puVar12 + 0xe;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  *puVar12 = &PTR_FUN_14bab2ea8;
  puVar12[5] = 0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[8] = 0;
  puVar12[9] = 0;
  puVar12[10] = 0;
  puVar12[0xb] = 0;
  puVar12[0xc] = 0;
  puVar12[0xd] = 0;
  iVar14 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar14 + 1U;
  local_dc = uVar9;
  if (*(uint *)(param_1 + 0xa4) < iVar14 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar14);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar14 * 8) = puVar12;
  *(uint *)(puVar12 + 2) = (uint)(param_7 != 0);
  *(uint *)(puVar12 + 4) = *(ushort *)(param_3 + 0x160) + 0x101;
  *(undefined4 *)((longlong)puVar12 + 0x14) = 0;
  *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(param_3 + 0xec);
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
  *(uint *)((longlong)puVar12 + 0x24) =
       ((uint)*(byte *)(param_3 + 0x160) + (uint)*(byte *)(param_3 + 0x161) + 2) *
       *(int *)(param_3 + 0x15c);
  puVar12[5] = *(undefined8 *)(param_3 + 0x198);
  puVar12[6] = *(undefined8 *)(*param_4 + 0x10);
  puVar12[7] = *(undefined8 *)(*param_4 + 0x18);
  puVar12[8] = *(undefined8 *)(param_3 + 0x150);
  puVar12[9] = *(undefined8 *)(param_3 + 0xd0);
  puVar12[10] = *(undefined8 *)(param_3 + 0x78);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar11 + 8;
  local_c8 = param_4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(puVar2,0x48);
    puVar11 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  puVar11[1] = *(undefined8 *)(param_5 + 8);
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 2;
  *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar11 + 5) = 1;
  *puVar11 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar11 + 6) = 0xd;
  *(undefined1 *)((longlong)puVar11 + 0x32) = 0;
  puVar11[7] = param_5;
  iVar14 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
  local_d8 = puVar2;
  if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar14);
  }
  puVar2 = local_d8;
  puVar5 = puVar12 + 2;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar12[0xb] = puVar11;
  puVar12[0xd] = puVar7;
  if ((char)local_dc != '\0') {
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar11 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
      FUN_140023dd8(local_d8,0x48);
      puVar11 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar11 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    puVar11[1] = *(undefined8 *)(param_6 + 8);
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 2;
    *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar11 + 5) = 1;
    *puVar11 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar11 + 6) = 0xd;
    *(undefined1 *)((longlong)puVar11 + 0x32) = 0;
    puVar11[7] = param_6;
    iVar14 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar14);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar11;
    *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar12[0xc] = puVar11;
  }
  uVar9 = local_dc;
  local_66 = *(undefined1 *)(param_3 + 0x159);
  local_65 = 4 < *(uint *)(param_3 + 0x15c);
  local_64 = *(undefined1 *)(param_3 + 0x160);
  local_63 = *(undefined1 *)(param_3 + 0x161);
  uVar8 = (undefined1)local_dc;
  local_62 = uVar8;
  FUN_14909ba54(&local_78,local_d0);
  FUN_145f0fa8a();
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b0._0_4_ = 0;
  uStack_b0._4_4_ = 0;
  FUN_1448f70da(CONCAT44(uStack_74,local_78),&DAT_14cbfceb8,puVar5,&local_b8);
  local_b8 = 0x4cbfceb8;
  uStack_b4 = 1;
  local_a8 = CONCAT44(uStack_74,local_78);
  uStack_a0 = uStack_70;
  uStack_9c = uStack_6c;
  local_98 = (void *)0x0;
  local_90 = (int)local_c8[1];
  lVar13 = (longlong)local_90;
  pvVar3 = (void *)*local_c8;
  uStack_b0 = puVar5;
  if (lVar13 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1490b9012(&local_98,local_90);
    memcpy(local_98,pvVar3,lVar13 << 5);
  }
  puVar2 = local_d8;
  local_88 = uVar8;
  FUN_140069376(param_1);
  uVar10 = (uint6)(ushort)((uint)uVar9 >> 0x10);
  uVar9 = (undefined4)CONCAT62(uVar10,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar9 = (undefined4)CONCAT62(uVar10,4);
  }
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar12 + 0x3e;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(puVar2,0x1f8);
    puVar12 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 0x3e;
  }
  *puVar2 = (ulonglong)puVar7;
  local_58 = DAT_14cbfcf00;
  if (DAT_14cbfcf00 != 0) {
    LOCK();
    *(int *)(DAT_14cbfcf00 + 8) = *(int *)(DAT_14cbfcf00 + 8) + 1;
    UNLOCK();
  }
  local_50 = &DAT_14cbfceb8;
  local_e8 = 2;
  local_60 = puVar5;
  FUN_140068f1a(puVar12,&local_b9,&local_60,uVar9);
  pvVar3 = local_98;
  *puVar12 = &PTR_FUN_14bab2eb0;
  *(int *)(puVar12 + 0x37) = local_b8;
  *(undefined4 *)((longlong)puVar12 + 0x1bc) = uStack_b4;
  puVar12[0x38] = uStack_b0;
  *(undefined4 *)(puVar12 + 0x39) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar12 + 0x1cc) = local_a8._4_4_;
  *(undefined4 *)(puVar12 + 0x3a) = uStack_a0;
  *(undefined4 *)((longlong)puVar12 + 0x1d4) = uStack_9c;
  puVar12[0x3b] = 0;
  lVar13 = (longlong)local_90;
  *(int *)(puVar12 + 0x3c) = local_90;
  if (lVar13 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x1e4) = 0;
  }
  else {
    FUN_1490b9012(puVar12 + 0x3b,local_90);
    memcpy((void *)puVar12[0x3b],pvVar3,lVar13 << 5);
  }
  *(undefined1 *)(puVar12 + 0x3d) = local_88;
  iVar14 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar14 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar14 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar14);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar14 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar12);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444429d4 FUN_1444429d4 body=2087 status=ok
// SIG undefined FUN_1444429d4(void)

void FUN_1444429d4(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong *param_5,longlong *param_6)

{
  longlong *plVar1;
  uint *puVar2;
  byte *pbVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  DWORD DVar9;
  undefined4 uVar10;
  DWORD DVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  int *piVar16;
  int *piVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  uint uVar23;
  bool bVar24;
  undefined1 auStack_148 [32];
  int *local_128;
  longlong local_120;
  undefined1 local_118;
  int *local_110;
  int *local_108;
  longlong local_100;
  uint local_f4;
  longlong local_f0;
  int *local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  int *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [24];
  longlong local_a0 [2];
  undefined8 local_90;
  undefined1 local_85;
  int local_84;
  undefined1 *local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((int)*(uint *)(param_5 + 1) < 1) goto LAB_144442a54;
  lVar14 = *(longlong *)*param_5;
  if ((((lVar14 == 0) || (*(uint *)(param_5 + 1) <= param_3)) || ((int)param_3 < 0)) ||
     (*(int *)(*(longlong *)(lVar14 + 0x140) + 0xc) == 0)) goto LAB_144442a54;
  uVar18 = (ulonglong)param_3;
  lVar14 = ((longlong *)*param_5)[uVar18];
  if (*(int *)(lVar14 + 0x50) != 2) goto LAB_144442a54;
  iVar5 = *(int *)(*(longlong *)(lVar14 + 0x140) + 0x1c);
  if (iVar5 == 0) goto LAB_144442a54;
  local_f4 = *(uint *)(*(longlong *)(lVar14 + 0x140) + 0x18);
  lVar20 = *(longlong *)(*param_6 + uVar18 * 8);
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar19 + 0xc60);
  piVar16 = DAT_14c9d2450;
  if (iVar6 == 0x40000002) {
    uVar12 = 0;
  }
  else {
    bVar24 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar6 != 2)) {
      if (iVar6 == 1) {
        local_110 = DAT_14c9d2450;
        uVar10 = FUN_140ad26c0();
        local_108 = (int *)CONCAT44(local_108._4_4_,uVar10);
        DVar11 = GetCurrentThreadId();
        bVar24 = (DWORD)local_108 == DVar11;
        piVar16 = local_110;
      }
      else {
        bVar24 = false;
      }
    }
    uVar12 = (ulonglong)(bVar24 ^ 1);
  }
  piVar17 = (int *)(lVar19 + 0xc60);
  lVar19 = lVar20 + 0x58;
  if (0 < piVar16[uVar12]) {
    lVar19 = lVar19 + (ulonglong)*(uint *)(lVar20 + 0x120) * 0x20;
  }
  local_128 = (int *)CONCAT71(local_128._1_7_,1);
  FUN_14716cfd3(local_a0,param_1,lVar19,2);
  piVar16 = DAT_14c9d2450;
  iVar6 = *piVar17;
  if (iVar6 == 0x40000002) {
    uVar12 = 0;
  }
  else {
    bVar24 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar6 != 2)) {
      if (iVar6 == 1) {
        local_110 = piVar17;
        DVar11 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        bVar24 = DVar11 == DVar9;
        piVar17 = local_110;
      }
      else {
        bVar24 = false;
      }
    }
    uVar12 = (ulonglong)(bVar24 ^ 1);
  }
  piVar7 = DAT_14c9d2450;
  if (0 < piVar16[uVar12]) {
    lVar20 = *(longlong *)(*param_6 + uVar18 * 8);
    iVar6 = *piVar17;
    if (iVar6 == 0x40000002) {
      uVar12 = 0;
    }
    else {
      bVar24 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar6 != 2)) {
        if (iVar6 == 1) {
          uVar10 = FUN_140ad26c0();
          local_110 = (int *)CONCAT44(local_110._4_4_,uVar10);
          DVar11 = GetCurrentThreadId();
          bVar24 = (DWORD)local_110 == DVar11;
        }
        else {
          bVar24 = false;
        }
      }
      uVar12 = (ulonglong)(bVar24 ^ 1);
    }
    lVar19 = lVar20 + 0x58;
    if (0 < piVar7[uVar12]) {
      lVar19 = lVar19 + (ulonglong)(1 - *(int *)(lVar20 + 0x120)) * 0x20;
    }
    local_128 = (int *)CONCAT71(local_128._1_7_,1);
    FUN_14716cfd3(local_b8,param_1,lVar19,2);
  }
  uVar13 = FUN_14716d181(param_1,lVar14 + 0x58);
  uVar23 = local_f4;
  puVar15 = *(undefined8 **)(param_4 + 8);
  lVar14 = puVar15[7];
  if (lVar14 == 0) goto LAB_144442a54;
  bVar24 = 0xfe < local_f4 || (longlong)*(int *)(param_4 + 0x10) == 0;
  piVar16 = (int *)*puVar15;
  if (piVar16 == (int *)0x0) {
    piVar17 = (int *)puVar15[3];
    if (bVar24 || piVar17 == (int *)0x0) goto LAB_144442a54;
  }
  else {
    if (bVar24) goto LAB_144442a54;
    piVar17 = (int *)puVar15[3];
  }
  local_c0 = local_90;
  local_dc = *(undefined4 *)(puVar15 + 0xd);
  local_e8 = (int *)puVar15[1];
  local_d8 = puVar15[2];
  local_d0 = (int *)puVar15[4];
  local_f0 = puVar15[5];
  local_78 = 0;
  uStack_70 = 0;
  local_110 = piVar16;
  local_108 = piVar17;
  local_100 = lVar14;
  local_c8 = uVar13;
  if (local_f4 == 0) {
    puVar22 = puVar15 + (longlong)*(int *)(param_4 + 0x10) * 0xe;
LAB_144442d3c:
    lVar14 = 0x18;
    piVar16 = local_108;
    if (local_110 != (int *)0x0) {
      lVar14 = 0;
      piVar16 = local_110;
    }
    do {
      lVar20 = (longlong)*(int *)(puVar15 + 0xc) * 0x10;
      *(undefined4 *)(local_78 + lVar20) = *(undefined4 *)((longlong)puVar15 + 0x5c);
      *(undefined4 *)(local_78 + 4 + lVar20) = *(undefined4 *)(puVar15 + 0xb);
      *(undefined4 *)(local_78 + 8 + lVar20) = *(undefined4 *)((longlong)puVar15 + 0x54);
      *(undefined1 *)(local_78 + 0xc + lVar20) = *(undefined1 *)(puVar15 + 8);
      *(undefined1 *)(local_78 + 0xd + lVar20) = *(undefined1 *)((longlong)puVar15 + 0x44);
      puVar2 = (uint *)(local_78 + 0xc + lVar20);
      *puVar2 = *puVar2 & 0x3ffff;
      *(uint *)(local_78 + 0xc + lVar20) =
           *(uint *)(local_78 + 0xc + lVar20) & 0xfffeffff |
           (uint)(*(int **)((longlong)puVar15 + lVar14) != piVar16) << 0x10;
      puVar2 = (uint *)(local_78 + 0xc + lVar20);
      *puVar2 = *puVar2 & 0xfffdffff;
      puVar15 = puVar15 + 0xe;
    } while (puVar15 != puVar22);
  }
  else {
    FUN_1444494ae(&local_78);
    do {
      lVar14 = (longlong)(int)uStack_70;
      uVar8 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
      if (uStack_70._4_4_ < uVar8) {
        FUN_144449584(&local_78);
      }
      puVar15 = (undefined8 *)(local_78 + lVar14 * 0x10);
      *puVar15 = 0;
      puVar15[1] = 0;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
    if ((longlong)*(int *)(param_4 + 0x10) != 0) {
      puVar15 = *(undefined8 **)(param_4 + 8);
      puVar22 = puVar15 + (longlong)*(int *)(param_4 + 0x10) * 0xe;
      goto LAB_144442d3c;
    }
  }
  piVar16 = local_d0;
  if (local_d0 == (int *)0x0) {
    piVar16 = local_108;
  }
  if (local_e8 == (int *)0x0) {
    local_e8 = local_110;
  }
  local_120 = (longlong)(int)uStack_70;
  if (local_f0 == 0) {
    if ((int)uStack_70 == 0) {
      local_120 = 0;
    }
    else {
      lVar14 = 0;
      do {
        pbVar3 = (byte *)(local_78 + 0xe + lVar14);
        *pbVar3 = *pbVar3 | 2;
        lVar14 = lVar14 + 0x10;
      } while (local_120 << 4 != lVar14);
    }
    local_f0 = local_100;
  }
  local_120 = local_120 << 4;
  local_128 = (int *)local_78;
  local_118 = 0;
  lVar14 = FUN_144942e63(param_1,L"Hair.SkelMeshSectionBuffer",0x10);
  cVar4 = *(char *)(lVar14 + 0x68);
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar22 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
    FUN_140023dd8(plVar1,0x50);
    puVar22 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar15 = puVar22 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar15;
  puVar22[1] = *(undefined8 *)(lVar14 + 8);
  puVar22[2] = 0;
  *(undefined1 *)(puVar22 + 3) = 3;
  *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
  *puVar22 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar22 + 5) = cVar4 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
  puVar22[7] = 0;
  puVar22[8] = lVar14;
  iVar6 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar6 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar6);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar6 * 8) = puVar22;
  *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar15 = puVar21 + 0x10;
  if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
    FUN_140023dd8(plVar1,0x90);
    puVar21 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar15 = puVar21 + 0x10;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar15;
  *puVar21 = &PTR_FUN_14baaf9c0;
  puVar21[4] = 0;
  puVar21[5] = 0;
  puVar21[6] = 0;
  puVar21[7] = 0;
  puVar21[8] = 0;
  puVar21[9] = 0;
  puVar21[10] = 0;
  puVar21[0xb] = 0;
  puVar21[0xc] = 0;
  puVar21[0xd] = 0;
  puVar21[0xe] = 0;
  iVar6 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar6 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar6);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar6 * 8) = puVar21;
  *(undefined4 *)(puVar21 + 2) = local_dc;
  *(uint *)((longlong)puVar21 + 0x14) = local_f4;
  *(int *)(puVar21 + 3) = iVar5;
  puVar21[4] = puVar22;
  bVar24 = local_110 != (int *)0x0;
  puVar21[5] = local_110;
  puVar21[6] = local_e8;
  puVar21[7] = local_d8;
  puVar21[8] = local_108;
  puVar21[9] = piVar16;
  puVar21[10] = local_100;
  puVar21[0xb] = local_f0;
  puVar21[0xc] = local_c8;
  puVar21[0xd] = 0;
  puVar21[0xe] = local_c0;
  iVar6 = iVar5 + 0xfe;
  if (-1 < iVar5 + 0x7f) {
    iVar6 = iVar5 + 0x7f;
  }
  FUN_145f600b6();
  FUN_1448e935e(param_2,local_b8,&DAT_14cbfb928,bVar24);
  FUN_145f600b6();
  local_128 = &local_84;
  local_80 = &DAT_100000001;
  local_84 = iVar6 >> 7;
  FUN_1490ab72b(param_1,&local_85,local_b8,puVar21 + 2);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(local_a0[0] + 0x58) = 0x70;
  *(undefined4 *)(*(longlong *)(*param_6 + uVar18 * 8) + 0x50) = 2;
LAB_144442a54:
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144443208 FUN_144443208 body=800 status=ok
// SIG undefined FUN_144443208(void)

void FUN_144443208(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  longlong param_5,longlong param_6,longlong *param_7,longlong *param_8)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined1 auStack_c8 [32];
  int *local_a8;
  ulonglong local_a0;
  undefined1 local_95;
  int local_94;
  undefined1 *local_90;
  longlong local_88 [3];
  longlong local_70 [2];
  undefined8 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((((param_5 != 0) && (iVar1 = *(int *)(*(longlong *)(param_5 + 0x118) + 8), param_6 != 0)) &&
       (param_7 != (longlong *)0x0)) && ((param_8 != (longlong *)0x0 && (iVar1 != 0)))) &&
     ((-1 < (int)param_4 && ((int)param_4 < (int)param_7[1])))) {
    local_a8 = (int *)((ulonglong)local_a8 & 0xffffffffffffff00);
    FUN_14716cfd3(local_70,param_1,param_6 + (ulonglong)*(uint *)(param_6 + 0x9c) * 0x20 + 0x50,2);
    local_a8 = (int *)((ulonglong)local_a8 & 0xffffffffffffff00);
    FUN_14716cfd3(local_88,param_1,param_6 + (ulonglong)(1 - *(int *)(param_6 + 0x9c)) * 0x20 + 0x50
                  ,2);
    local_a0 = (ulonglong)(uint)(*(int *)(local_70[0] + 0x60) * *(int *)(local_70[0] + 100));
    local_a8 = (int *)0x0;
    FUN_143211d72(param_1,local_88[0],0);
    lVar2 = *(longlong *)(*param_7 + (ulonglong)param_4 * 8);
    lVar3 = *(longlong *)(*param_8 + (ulonglong)param_4 * 8);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar6 = puVar11 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x50);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar6 = puVar11 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar6;
    *puVar11 = &PTR_FUN_14bab2ec8;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    iVar10 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar10 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar10 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar10);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar10 * 8) = puVar11;
    *(int *)(puVar11 + 2) = iVar1;
    *(undefined4 *)((longlong)puVar11 + 0x14) = *(undefined4 *)(lVar2 + 0xd8);
    puVar11[5] = *(undefined8 *)(param_5 + 0x68);
    puVar11[6] = local_60;
    uVar7 = FUN_14716d181(param_1,lVar2 + 0x120);
    puVar11[3] = uVar7;
    lVar2 = DAT_14c9d2450;
    iVar10 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (((iVar10 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar10 == 2)) {
      uVar8 = 0;
    }
    else if (iVar10 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar8 = 1;
    }
    lVar9 = lVar3 + 0xe0;
    if (0 < *(int *)(lVar2 + uVar8 * 4)) {
      lVar9 = lVar9 + (ulonglong)*(uint *)(lVar3 + 0x120) * 0x20;
    }
    uVar7 = FUN_14716d181(param_1,lVar9);
    puVar11[4] = uVar7;
    iVar10 = iVar1 + 0xfe;
    if (-1 < iVar1 + 0x7f) {
      iVar10 = iVar1 + 0x7f;
    }
    FUN_145f0fe0a();
    FUN_1448e935e(param_2,local_58,&DAT_14cbfba50,0);
    FUN_145f0fe0a();
    local_a8 = &local_94;
    local_90 = &DAT_100000001;
    local_94 = iVar10 >> 7;
    FUN_1490b9283(param_1,&local_95,local_58,puVar11 + 2);
    *(undefined4 *)(local_70[0] + 0x58) = 0x70;
    *(undefined4 *)(local_88[0] + 0x58) = 0x70;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144443529 FUN_144443529 body=773 status=ok
// SIG undefined FUN_144443529(void)

void FUN_144443529(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  longlong param_5,longlong param_6,longlong *param_7,longlong *param_8)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined1 auStack_c8 [32];
  int *local_a8;
  ulonglong local_a0;
  undefined1 local_95;
  int local_94;
  undefined1 *local_90;
  longlong local_88 [3];
  longlong local_70 [2];
  undefined8 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((((param_5 != 0) && (iVar1 = *(int *)(*(longlong *)(param_5 + 0x140) + 0x28), param_6 != 0))
       && (param_7 != (longlong *)0x0)) && ((param_8 != (longlong *)0x0 && (iVar1 != 0)))) &&
     ((-1 < (int)param_4 && ((int)param_4 < (int)param_7[1])))) {
    local_a8 = (int *)((ulonglong)local_a8 & 0xffffffffffffff00);
    FUN_14716cfd3(local_70,param_1,param_6 + 0x50,2);
    local_a8 = (int *)((ulonglong)local_a8 & 0xffffffffffffff00);
    FUN_14716cfd3(local_88,param_1,param_6 + 0x70,2);
    local_a0 = (ulonglong)(uint)(*(int *)(local_70[0] + 0x60) * *(int *)(local_70[0] + 100));
    local_a8 = (int *)0x0;
    FUN_143211d72(param_1,local_88[0],0);
    lVar2 = *(longlong *)(*param_7 + (ulonglong)param_4 * 8);
    lVar3 = *(longlong *)(*param_8 + (ulonglong)param_4 * 8);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar6 = puVar11 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x50);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar6 = puVar11 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar6;
    *puVar11 = &PTR_FUN_14bab2ec8;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    iVar10 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar10 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar10 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar10);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar10 * 8) = puVar11;
    *(int *)(puVar11 + 2) = iVar1;
    *(undefined4 *)((longlong)puVar11 + 0x14) = *(undefined4 *)(lVar2 + 0xd8);
    puVar11[5] = *(undefined8 *)(param_5 + 0x68);
    puVar11[6] = local_60;
    uVar7 = FUN_14716d181(param_1,lVar2 + 0x120);
    puVar11[3] = uVar7;
    lVar2 = DAT_14c9d2450;
    iVar10 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (((iVar10 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar10 == 2)) {
      uVar8 = 0;
    }
    else if (iVar10 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar8 = 1;
    }
    lVar9 = lVar3 + 0xe0;
    if (0 < *(int *)(lVar2 + uVar8 * 4)) {
      lVar9 = lVar9 + (ulonglong)*(uint *)(lVar3 + 0x120) * 0x20;
    }
    uVar7 = FUN_14716d181(param_1,lVar9);
    puVar11[4] = uVar7;
    iVar10 = iVar1 + 0xfe;
    if (-1 < iVar1 + 0x7f) {
      iVar10 = iVar1 + 0x7f;
    }
    FUN_145f0fe0a();
    FUN_1448e935e(param_2,local_58,&DAT_14cbfba50,0);
    FUN_145f0fe0a();
    local_a8 = &local_94;
    local_90 = &DAT_100000001;
    local_94 = iVar10 >> 7;
    FUN_1490b9283(param_1,&local_95,local_58,puVar11 + 2);
    *(undefined4 *)(local_70[0] + 0x58) = 0x70;
    *(undefined4 *)(local_88[0] + 0x58) = 0x70;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444383b FUN_14444383b body=1321 status=ok
// SIG undefined FUN_14444383b(void)

void FUN_14444383b(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong *param_5,longlong *param_6)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_118 [32];
  int *local_f8;
  longlong local_f0;
  undefined1 local_e8;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined1 local_95;
  int local_94;
  undefined1 *local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  lVar9 = DAT_14c9d2450;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((-1 < (int)param_3) && ((int)param_3 < (int)param_5[1])) {
    lVar14 = *(longlong *)(*param_5 + (ulonglong)param_3 * 8);
    if ((*(int *)(lVar14 + 0x50) == 2) &&
       ((*(int *)(param_4 + 0x10) != 0 && (*(int *)(lVar14 + 0xd8) != 0)))) {
      iVar16 = *(int *)(*(longlong *)(lVar14 + 0x140) + 0x18);
      lVar2 = *(longlong *)(*param_6 + (ulonglong)param_3 * 8);
      iVar10 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if ((iVar10 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar10 == 2)))) {
        uVar8 = 0;
      }
      else if (iVar10 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        uVar8 = (ulonglong)(DVar5 != DVar6);
      }
      else {
        uVar8 = 1;
      }
      lVar11 = lVar2 + 0xa0;
      if (0 < *(int *)(lVar9 + uVar8 * 4)) {
        lVar11 = lVar11 + (ulonglong)*(uint *)(lVar2 + 0x120) * 0x20;
      }
      local_f8 = (int *)((ulonglong)local_f8 & 0xffffffffffffff00);
      FUN_14716cfd3(local_70,param_1,lVar11);
      local_a0 = (ulonglong)*(uint *)(lVar14 + 0xd8);
      plVar3 = *(longlong **)(param_4 + 8);
      lVar9 = plVar3[0xb];
      local_d0 = *plVar3;
      local_a8 = plVar3[1];
      local_d8 = plVar3[3];
      local_c8 = plVar3[4];
      local_b8 = FUN_14716d181(param_1,lVar14 + 0x100);
      local_b0 = local_60;
      local_88 = 0;
      uStack_80 = 0;
      if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar16);
      }
      if (iVar16 != 0) {
        FUN_14444face(&local_88,iVar16);
        iVar10 = iVar16;
        do {
          uVar8 = uStack_80;
          lVar14 = (longlong)(int)uStack_80;
          uVar4 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar4);
          if (uStack_80._4_4_ < uVar4) {
            FUN_14444fbfe(&local_88,uVar8 & 0xffffffff);
          }
          *(undefined4 *)(local_88 + lVar14 * 4) = 0;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      iVar10 = *(int *)(param_4 + 0x10);
      if ((longlong)iVar10 != 0) {
        lVar14 = *(longlong *)(param_4 + 8);
        lVar11 = lVar14 + 0x18;
        lVar2 = local_d8;
        if (local_d0 != 0) {
          lVar11 = lVar14;
          lVar2 = local_d0;
        }
        lVar12 = 0;
        do {
          *(uint *)(local_88 + (longlong)*(int *)(lVar14 + 0x60 + lVar12) * 4) =
               (uint)(*(longlong *)(lVar11 + lVar12) != lVar2);
          lVar12 = lVar12 + 0x70;
        } while ((longlong)iVar10 * 0x70 - lVar12 != 0);
      }
      local_f0 = (longlong)(int)uStack_80 << 2;
      local_f8 = (int *)local_88;
      local_e8 = 0;
      lVar14 = FUN_144942e63(param_1,L"Hair.SkelMeshSectionBuffer",4);
      cVar1 = *(char *)(lVar14 + 0x68);
      plVar3 = (longlong *)(param_1 + 0x70);
      puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar15 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
        FUN_140023dd8(plVar3,0x50);
        puVar15 = (undefined8 *)(*plVar3 + 7U & 0xfffffffffffffff8);
        puVar7 = puVar15 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar7;
      puVar15[1] = *(undefined8 *)(lVar14 + 8);
      puVar15[2] = 0;
      *(undefined1 *)(puVar15 + 3) = 3;
      *(undefined8 *)((longlong)puVar15 + 0x1c) = 0xffffffffffffffff;
      *puVar15 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar15 + 5) = cVar1 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar15 + 0x2c) = 0xffffffff00000000;
      puVar15[7] = 0;
      puVar15[8] = lVar14;
      iVar10 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar10 + 1U;
      local_bc = (int)lVar9;
      if (*(uint *)(param_1 + 0x1a4) < iVar10 + 1U) {
        FUN_1447568fc(param_1 + 0x198,iVar10);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar10 * 8) = puVar15;
      *(int *)((longlong)puVar15 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      if (local_c8 == 0) {
        local_c8 = local_d8;
      }
      lVar9 = local_a8;
      if (local_a8 == 0) {
        lVar9 = local_d0;
      }
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar7 = puVar13 + 0xc;
      if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
        FUN_140023dd8(plVar3,0x70);
        puVar13 = (undefined8 *)(*plVar3 + 0xfU & 0xfffffffffffffff0);
        puVar7 = puVar13 + 0xc;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar7;
      *puVar13 = &PTR_FUN_14bab2ee8;
      puVar13[4] = 0;
      puVar13[5] = 0;
      puVar13[6] = 0;
      puVar13[7] = 0;
      puVar13[8] = 0;
      puVar13[9] = 0;
      puVar13[10] = 0;
      iVar10 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar10 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar10 + 1U) {
        FUN_1448cfae8(param_1 + 0x98,iVar10);
      }
      bVar17 = local_d0 != 0;
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar10 * 8) = puVar13;
      *(int *)(puVar13 + 2) = iVar16;
      iVar10 = (int)local_a0;
      *(int *)((longlong)puVar13 + 0x14) = iVar10;
      *(undefined4 *)(puVar13 + 3) = local_bc;
      puVar13[4] = local_d8;
      puVar13[5] = local_c8;
      puVar13[6] = local_d0;
      puVar13[7] = lVar9;
      puVar13[8] = local_b8;
      puVar13[9] = puVar15;
      puVar13[10] = local_b0;
      iVar16 = iVar10 + 0xfe;
      if (-1 < iVar10 + 0x7f) {
        iVar16 = iVar10 + 0x7f;
      }
      FUN_145f606ac();
      FUN_1448e935e(param_2,local_58,&DAT_14cbfbb78,bVar17);
      FUN_145f606ac();
      local_f8 = &local_94;
      local_90 = &DAT_100000001;
      local_94 = iVar16 >> 7;
      FUN_14909bd3c(param_1,&local_95,local_58,puVar13 + 2);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144443d71 FUN_144443d71 body=769 status=ok
// SIG undefined FUN_144443d71(void)

void FUN_144443d71(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong *param_5,longlong *param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined1 auStack_a8 [32];
  int *local_88;
  undefined1 local_7d;
  int local_7c;
  undefined1 *local_78;
  longlong local_70 [2];
  undefined8 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((-1 < (int)param_3) && ((int)param_3 < (int)param_5[1])) {
    lVar2 = *(longlong *)(*param_5 + (ulonglong)param_3 * 8);
    if ((*(int *)(lVar2 + 0x50) == 2) &&
       (((((int)param_3 < (int)param_6[1] &&
          (lVar3 = *(longlong *)(*param_6 + (ulonglong)param_3 * 8),
          0xfffffffd < *(int *)(lVar3 + 0x50) - 3U)) && (*(int *)(param_4 + 0x10) != 0)) &&
        (*(int *)(lVar2 + 0xd8) != 0)))) {
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar7 = puVar12 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
        FUN_140023dd8((longlong *)(param_1 + 0x70),0x50);
        puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar7 = puVar12 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar7;
      *puVar12 = &PTR_FUN_14bab2f08;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[6] = 0;
      iVar1 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
        FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar1);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8) = puVar12;
      lVar4 = DAT_14c9d2450;
      lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar1 = *(int *)(lVar10 + 0xc60);
      if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
        uVar9 = 0;
      }
      else if (iVar1 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        uVar9 = (ulonglong)(DVar5 != DVar6);
      }
      else {
        uVar9 = 1;
      }
      lVar11 = lVar3 + 0xe0;
      if (0 < *(int *)(lVar4 + uVar9 * 4)) {
        lVar11 = lVar11 + (ulonglong)*(uint *)(lVar3 + 0x120) * 0x20;
      }
      local_88 = (int *)((ulonglong)local_88 & 0xffffffffffffff00);
      FUN_14716cfd3(local_70,param_1,lVar11,2);
      *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(lVar2 + 0xd8);
      uVar8 = FUN_14716d181(param_1,lVar2 + 0xe0);
      puVar12[3] = uVar8;
      uVar8 = FUN_14716d181(param_1,lVar2 + 0x120);
      puVar12[4] = uVar8;
      lVar4 = DAT_14c9d2450;
      iVar1 = *(int *)(lVar10 + 0xc60);
      if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
        uVar9 = 0;
      }
      else if (iVar1 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        uVar9 = (ulonglong)(DVar5 != DVar6);
      }
      else {
        uVar9 = 1;
      }
      lVar10 = lVar3 + 0xa0;
      if (0 < *(int *)(lVar4 + uVar9 * 4)) {
        lVar10 = lVar10 + (ulonglong)*(uint *)(lVar3 + 0x120) * 0x20;
      }
      uVar8 = FUN_14716d181(param_1,lVar10);
      puVar12[5] = uVar8;
      puVar12[6] = local_60;
      iVar1 = *(int *)(lVar2 + 0xd8) + 0x83;
      iVar13 = *(int *)(lVar2 + 0xd8) + 0x102;
      if (-1 < iVar1) {
        iVar13 = iVar1;
      }
      FUN_145f60ca2();
      FUN_1448e935e(param_2,local_58,&DAT_14cbfbca0,0);
      FUN_145f60ca2();
      local_88 = &local_7c;
      local_78 = &DAT_100000001;
      local_7c = iVar13 >> 7;
      FUN_14909beb4(param_1,&local_7d,local_58,puVar12 + 2);
      *(undefined4 *)(local_70[0] + 0x58) = 0x70;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444408b FUN_14444408b body=1735 status=ok
// SIG undefined FUN_14444408b(void)

void FUN_14444408b(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5,uint param_6,uint param_7,longlong *param_8,ulonglong *param_9)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong *plVar15;
  undefined1 uVar16;
  undefined1 auStack_3a8 [32];
  undefined1 local_388;
  ulonglong *local_380;
  uint local_374;
  uint local_370;
  undefined4 local_36c;
  undefined8 local_368;
  longlong local_360;
  longlong local_358;
  longlong local_350;
  longlong *local_348;
  undefined8 local_340;
  undefined1 local_331;
  undefined8 *local_330;
  longlong local_328;
  undefined *local_320;
  undefined1 local_318 [336];
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined8 uStack_1b4;
  uint local_1ac;
  undefined4 local_1a8;
  int local_1a4;
  int local_1a0;
  undefined4 local_19c;
  undefined1 local_198;
  undefined2 local_197;
  undefined1 local_195;
  undefined2 local_194;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  uVar16 = 1;
  local_340 = param_2;
  if (*param_9 == 0) {
    local_1c8 = 0x20009;
    local_194 = 0xff00;
    local_19c = 0x10001;
    local_198 = param_5;
    local_1a4 = DAT_14ca84e40;
    if ((int)param_4 < DAT_14ca84e40) {
      local_1a4 = (int)param_4;
    }
    if (local_1a4 < 2) {
      local_1a4 = 1;
    }
    iVar14 = (int)((ulonglong)param_4 >> 0x20);
    local_1a0 = DAT_14ca84e40;
    if (iVar14 < DAT_14ca84e40) {
      local_1a0 = iVar14;
    }
    local_1ac = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_197 = 1;
    local_1c0 = 1;
    local_1a8 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    if (local_1a0 < 2) {
      local_1a0 = 1;
    }
    uVar11 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar8 = uVar11 + 0x120;
    local_195 = param_3;
    if (*(ulonglong *)(param_1 + 0x78) < uVar8) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x128);
      uVar11 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar8 = uVar11 + 0x120;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar8;
    FUN_1456bbb8c(uVar11,L"Hair.FollicleMask",&local_1c8,0);
    iVar14 = *(int *)(param_1 + 0x180);
    *(uint *)(param_1 + 0x180) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0x184) < iVar14 + 1U) {
      FUN_14472c0f6(param_1 + 0x178,iVar14);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar14 * 8) = uVar11;
    *(int *)(uVar11 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
    *param_9 = uVar11;
    uVar16 = 2;
  }
  if ((longlong)(int)param_8[1] != 0) {
    plVar15 = (longlong *)*param_8;
    local_348 = plVar15 + (int)param_8[1];
    local_380 = (ulonglong *)(param_1 + 0x70);
    local_350 = param_1 + 0x98;
    local_360 = param_1 + 0x198;
    local_370 = 3;
    if (param_7 < 3) {
      local_370 = param_7;
    }
    uVar7 = 200;
    if (param_6 < 200) {
      uVar7 = param_6;
    }
    local_374 = 2;
    if (2 < uVar7) {
      local_374 = uVar7;
    }
    local_358 = param_1 + 0x168;
    do {
      puVar4 = local_380;
      lVar1 = *plVar15;
      local_36c = *(undefined4 *)(lVar1 + 100);
      uVar8 = *param_9;
      local_368 = *(undefined8 *)(uVar8 + 0x84);
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar10 = puVar13 + 0x2c;
      if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
        FUN_140023dd8(local_380,0x170);
        puVar13 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
        puVar10 = puVar13 + 0x2c;
      }
      *local_380 = (ulonglong)puVar10;
      *puVar13 = &PTR_FUN_14baafcf8;
      puVar13[10] = 0;
      puVar13[5] = 0;
      puVar13[6] = 0;
      puVar13[7] = 0;
      puVar13[8] = 0;
      *(undefined1 *)(puVar13 + 0xb) = 1;
      lVar9 = 0x72;
      do {
        puVar10 = (undefined8 *)((longlong)puVar13 + lVar9 + -0x12);
        *puVar10 = 0;
        puVar10[1] = 0;
        *(undefined4 *)((longlong)puVar13 + lVar9 + -2) = 0xffff0000;
        lVar9 = lVar9 + 0x18;
      } while (lVar9 != 0x132);
      *(undefined4 *)((longlong)puVar13 + 0x134) = 0;
      puVar13[0x24] = 0;
      puVar13[0x25] = 0;
      *(undefined2 *)(puVar13 + 0x26) = 0;
      *(undefined4 *)(puVar13 + 0x27) = 0xffffffff;
      *(undefined4 *)((longlong)puVar13 + 0x13c) = 0xffffffff;
      *(undefined4 *)(puVar13 + 0x28) = 0xffffffff;
      *(undefined4 *)((longlong)puVar13 + 0x144) = 0xffffffff;
      *(undefined4 *)(puVar13 + 0x29) = 0;
      *(undefined2 *)((longlong)puVar13 + 0x14c) = 0;
      puVar13[0x2a] = 0;
      iVar14 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar14 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar14 + 1U) {
        FUN_1448cfae8(local_350,iVar14);
      }
      puVar4 = local_380;
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar14 * 8) = puVar13;
      puVar13[5] = 0;
      puVar13[7] = 0;
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar12 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
        FUN_140023dd8(local_380,0x50);
        puVar12 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar12 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar10;
      puVar12[1] = *(undefined8 *)(lVar1 + 8);
      puVar12[2] = 0;
      *(undefined1 *)(puVar12 + 3) = 3;
      *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
      *puVar12 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar12 + 5) = 0x11;
      *(undefined8 *)((longlong)puVar12 + 0x2c) = 0xffffffff00000000;
      puVar12[7] = 0;
      puVar12[8] = lVar1;
      iVar14 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
        FUN_1447568fc(local_360,iVar14);
      }
      puVar10 = puVar13 + 2;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar12;
      *(int *)((longlong)puVar12 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar13[8] = puVar12;
      *(float *)(puVar13 + 2) = (float)(int)local_368;
      *(float *)((longlong)puVar13 + 0x14) = (float)(int)((ulonglong)local_368 >> 0x20);
      *(undefined4 *)(puVar13 + 3) = local_36c;
      *(undefined4 *)((longlong)puVar13 + 0x1c) = 0;
      *(uint *)(puVar13 + 4) = local_370;
      *(uint *)((longlong)puVar13 + 0x24) = local_374;
      puVar13[0xc] = uVar8;
      puVar13[0xd] = 0;
      *(undefined1 *)(puVar13 + 0xe) = uVar16;
      *(undefined1 *)((longlong)puVar13 + 0x71) = 0;
      *(undefined2 *)((longlong)puVar13 + 0x72) = 0xffff;
      FUN_145f94e28();
      uVar3 = local_340;
      FUN_1448e935e(local_340,&local_1c8,&DAT_14cbfbef0,1);
      FUN_145f94e28();
      uVar5 = local_1c8;
      uVar2 = CONCAT44(uStack_1bc,local_1c0);
      FUN_145f949c6();
      FUN_1448e935e(uVar3,&local_1c8,&DAT_14cbfbdc8,0);
      FUN_145f949c6();
      uVar6 = local_1c8;
      uVar3 = CONCAT44(uStack_1bc,local_1c0);
      memcpy(&local_1c0,puVar10,0x150);
      memcpy(local_318,puVar10,0x150);
      FUN_145d3da12();
      FUN_140069376(param_1);
      puVar4 = local_380;
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar13 = puVar12 + 0x94;
      if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
        FUN_140023dd8(local_380,0x4b0);
        puVar12 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
        puVar13 = puVar12 + 0x94;
      }
      *local_380 = (ulonglong)puVar13;
      local_328 = DAT_14cbfd230;
      if (DAT_14cbfd230 != 0) {
        LOCK();
        *(int *)(DAT_14cbfd230 + 8) = *(int *)(DAT_14cbfd230 + 8) + 1;
        UNLOCK();
      }
      local_320 = &DAT_14cbfd1e8;
      local_388 = 2;
      local_330 = puVar10;
      FUN_140068f1a(puVar12,&local_331,&local_330,1);
      *puVar12 = &PTR_FUN_14baafd00;
      puVar12[0x38] = puVar10;
      memcpy(puVar12 + 0x39,&local_1c8,0x158);
      memcpy(puVar12 + 100,local_318,0x150);
      puVar12[0x8e] = uVar5;
      puVar12[0x8f] = uVar2;
      puVar12[0x90] = uVar6;
      puVar12[0x91] = uVar3;
      puVar12[0x92] = local_368;
      iVar14 = *(int *)(param_1 + 0x170);
      *(uint *)(param_1 + 0x170) = iVar14 + 1U;
      if (*(uint *)(param_1 + 0x174) < iVar14 + 1U) {
        FUN_14470e57a(local_358,iVar14);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar14 * 8) = puVar12;
      *(int *)((longlong)puVar12 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
      FUN_140069100(param_1,puVar12);
      plVar15 = plVar15 + 1;
      uVar16 = 1;
    } while (plVar15 != local_348);
  }
  if ((local_70 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14444475f FUN_14444475f body=1259 status=ok
// SIG undefined FUN_14444475f(void)

void FUN_14444475f(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  ulonglong *local_b8;
  int local_b0;
  uint local_ac;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_79;
  undefined8 *local_78;
  longlong lStack_70;
  undefined *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_ac = (uint)*(byte *)(*param_3 + 0x90);
  local_98 = param_3;
  local_88 = param_2;
  if (local_ac != 1) {
    local_b0 = *(int *)(*param_3 + 0x84);
    local_b8 = (ulonglong *)(param_1 + 0x70);
    local_a0 = (longlong *)(param_1 + 0x98);
    local_a8 = param_1 + 0x198;
    local_90 = param_1 + 0x168;
    uVar6 = 1;
    do {
      puVar4 = local_b8;
      iVar9 = local_b0 << ((byte)uVar6 & 0x1f);
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar5 = puVar10 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
        FUN_140023dd8(local_b8,0x50);
        puVar10 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
        puVar5 = puVar10 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar5;
      *puVar10 = &PTR_FUN_14bab2f28;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      iVar2 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
        FUN_1448cfae8(local_a0,iVar2);
      }
      puVar4 = local_b8;
      *(undefined8 **)(*local_a0 + (longlong)iVar2 * 8) = puVar10;
      lVar3 = *local_98;
      if ((*(char *)(lVar3 + 0x92) == '\x04') || (*(char *)(lVar3 + 0x92) == '\x01')) {
        uVar7 = *(undefined2 *)(lVar3 + 0x8e);
      }
      else {
        uVar7 = 0;
      }
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
        FUN_140023dd8(local_b8,0x48);
        puVar8 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
        puVar5 = puVar8 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar5;
      puVar8[1] = *(undefined8 *)(lVar3 + 8);
      puVar8[2] = 0;
      *(undefined1 *)(puVar8 + 3) = 1;
      *(undefined8 *)((longlong)puVar8 + 0x1c) = 0xffffffffffffffff;
      *puVar8 = &PTR_FUN_14a203858;
      *(undefined1 *)(puVar8 + 5) = 0;
      *(char *)((longlong)puVar8 + 0x29) = (char)(uVar6 - 1);
      *(undefined4 *)((longlong)puVar8 + 0x2a) = 1;
      *(undefined2 *)((longlong)puVar8 + 0x2e) = uVar7;
      *(undefined1 *)(puVar8 + 6) = 0;
      *(undefined1 *)((longlong)puVar8 + 0x32) = 0;
      puVar8[7] = lVar3;
      iVar2 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
        FUN_1447568fc(local_a8,iVar2);
      }
      puVar4 = local_b8;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar8;
      *(int *)((longlong)puVar8 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar10[4] = puVar8;
      lVar3 = *local_98;
      uVar1 = *(undefined1 *)(lVar3 + 0x94);
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
        FUN_140023dd8(local_b8,0x50);
        puVar8 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
        puVar5 = puVar8 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar5;
      puVar8[1] = *(undefined8 *)(lVar3 + 8);
      puVar8[2] = 0;
      *(undefined1 *)(puVar8 + 3) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar8 + 5) = 0;
      *puVar8 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar8 + 6) = uVar1;
      *(byte *)((longlong)puVar8 + 0x31) = (byte)uVar6;
      *(undefined4 *)((longlong)puVar8 + 0x32) = 0;
      *(undefined1 *)((longlong)puVar8 + 0x36) = 0;
      *(undefined1 *)(puVar8 + 7) = 0;
      puVar8[8] = lVar3;
      iVar2 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
        FUN_1447568fc(local_a8,iVar2);
      }
      puVar5 = puVar10 + 2;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar8;
      *(int *)((longlong)puVar8 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar10[5] = puVar8;
      *(int *)(puVar10 + 2) = local_b0;
      *(uint *)((longlong)puVar10 + 0x14) = uVar6 - 1;
      *(uint *)(puVar10 + 3) = uVar6;
      puVar10[6] = DAT_14c9c0de0;
      FUN_145f3b9ee();
      FUN_1448e935e(local_88,&local_78,&DAT_14cbfc018,0);
      FUN_145f3b9ee();
      lVar3 = lStack_70;
      puVar8 = local_78;
      FUN_145f3bc5c();
      local_78 = (undefined8 *)0x0;
      lStack_70 = 0;
      FUN_1448f70da(puVar8,&DAT_14cbfd2f8,puVar5,&local_78);
      FUN_145f3bc5c();
      FUN_140069376(param_1);
      puVar4 = local_b8;
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar11 + 0x3b;
      if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
        FUN_140023dd8(local_b8,0x1e0);
        puVar11 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar11 + 0x3b;
      }
      *local_b8 = (ulonglong)puVar10;
      lStack_70 = DAT_14cbfd340;
      if (DAT_14cbfd340 != 0) {
        LOCK();
        *(int *)(DAT_14cbfd340 + 8) = *(int *)(DAT_14cbfd340 + 8) + 1;
        UNLOCK();
      }
      local_68 = &DAT_14cbfd2f8;
      local_c8 = 2;
      local_78 = puVar5;
      FUN_140068f1a(puVar11,&local_79,&local_78);
      *puVar11 = &PTR_FUN_14bab2f30;
      puVar11[0x37] = puVar5;
      puVar11[0x38] = puVar8;
      puVar11[0x39] = lVar3;
      *(int *)(puVar11 + 0x3a) = iVar9;
      iVar9 = *(int *)(param_1 + 0x170);
      *(uint *)(param_1 + 0x170) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x174) < iVar9 + 1U) {
        FUN_14470e57a(local_90,iVar9);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar9 * 8) = puVar11;
      *(int *)((longlong)puVar11 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
      FUN_140069100(param_1,puVar11);
      uVar6 = uVar6 + 1;
    } while (local_ac != uVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144444c57 FUN_144444c57 body=1326 status=ok
// SIG undefined FUN_144444c57(void)

void FUN_144444c57(longlong param_1,undefined8 param_2,uint param_3,undefined4 param_4,
                  undefined4 param_5,uint param_6,longlong *param_7,longlong param_8)

{
  double dVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 uVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  uint local_c4;
  int *local_c0;
  longlong local_b8;
  int *local_b0;
  DWORD local_a8;
  int local_a4;
  undefined1 local_9d;
  undefined1 *local_9c;
  undefined4 local_94;
  undefined1 local_90 [8];
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_78 [2];
  undefined8 local_68;
  longlong local_60 [2];
  undefined8 local_50;
  ulonglong local_48;
  
  piVar11 = DAT_14c9d2450;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_8 != 0 && (-1 < (int)param_6 || param_7 == (longlong *)0x0)) {
    local_b0 = *(int **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar3 = local_b0[0x318];
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar10 = 0;
    }
    else if (iVar3 == 1) {
      local_c4 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      uVar10 = (ulonglong)(local_c4 != DVar8);
    }
    else {
      uVar10 = 1;
    }
    local_a4 = piVar11[uVar10];
    local_d8 = (undefined1 **)((ulonglong)local_d8 & 0xffffffffffffff00);
    FUN_14716cfd3(local_60,param_1,param_8 + (ulonglong)*(uint *)(param_8 + 0x188) * 0x20 + 0x90,2);
    local_c4 = 1;
    local_c0 = (int *)0x0;
    local_d8 = (undefined1 **)((ulonglong)local_d8 & 0xffffffffffffff00);
    FUN_14716cfd3(local_78,param_1,
                  param_8 + (ulonglong)(1 - *(int *)(param_8 + 0x188)) * 0x20 + 0x90,2);
    if (param_7 == (longlong *)0x0) {
      local_b8 = 0;
      local_b0 = (int *)0x0;
    }
    else {
      local_c0 = local_b0 + 0x318;
      local_b8 = (longlong)(int)param_6;
      lVar5 = *(longlong *)(*param_7 + local_b8 * 8);
      iVar3 = *local_c0;
      piVar11 = DAT_14c9d2450;
      if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
        uVar10 = 0;
      }
      else if (iVar3 == 1) {
        local_b0 = DAT_14c9d2450;
        local_a8 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        uVar10 = (ulonglong)(local_a8 != DVar8);
        piVar11 = local_b0;
      }
      else {
        uVar10 = 1;
      }
      lVar12 = lVar5 + 0x58;
      if (0 < piVar11[uVar10]) {
        lVar12 = lVar12 + (ulonglong)*(uint *)(lVar5 + 0x120) * 0x20;
      }
      local_d8 = (undefined1 **)((ulonglong)local_d8 & 0xffffffffffffff00);
      FUN_14716cfd3(local_90,param_1,lVar12,1);
      local_b0 = (int *)CONCAT44(uStack_84,uStack_88);
      lVar5 = *(longlong *)(*param_7 + local_b8 * 8);
      iVar3 = *local_c0;
      piVar11 = DAT_14c9d2450;
      if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
        uVar10 = 0;
      }
      else if (iVar3 == 1) {
        local_c0 = DAT_14c9d2450;
        uVar7 = FUN_140ad26c0();
        local_b8 = CONCAT44(local_b8._4_4_,uVar7);
        DVar8 = GetCurrentThreadId();
        uVar10 = (ulonglong)((DWORD)local_b8 != DVar8);
        piVar11 = local_c0;
      }
      else {
        uVar10 = 1;
      }
      lVar12 = lVar5 + 0x58;
      if (0 < piVar11[uVar10]) {
        lVar12 = lVar12 + (ulonglong)(1 - *(int *)(lVar5 + 0x120)) * 0x20;
      }
      local_d8 = (undefined1 **)((ulonglong)local_d8 & 0xffffffffffffff00);
      FUN_14716cfd3(local_90,param_1,lVar12,1);
      local_b8 = CONCAT44(uStack_84,uStack_88);
      local_c0 = (int *)0x0;
      if ((((-1 < (int)param_6) && ((int)param_6 < (int)param_7[1])) &&
          (lVar5 = *(longlong *)(*param_7 + (ulonglong)param_6 * 8), *(int *)(lVar5 + 0x50) - 1U < 2
          )) && (*(int *)(lVar5 + 8) != -1)) {
        local_c0 = (int *)(ulonglong)(0 < DAT_14c764a2c);
      }
    }
    uVar4 = *(uint *)(param_8 + 0x188);
    uVar10 = (ulonglong)uVar4;
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar13 + 0xc;
    if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x70);
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar9 = puVar13 + 0xc;
    }
    local_c4 = local_c4 - uVar4;
    *(undefined8 **)(param_1 + 0x70) = puVar9;
    *puVar13 = &PTR_FUN_14bab2f48;
    puVar13[8] = 0;
    puVar13[9] = 0;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    iVar3 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar13;
    *(uint *)(puVar13 + 2) = param_3 & 0xff;
    *(undefined4 *)((longlong)puVar13 + 0x14) = param_5;
    *(undefined4 *)(puVar13 + 3) = param_4;
    dVar1 = *(double *)(param_8 + 0x160 + uVar10 * 0x18);
    dVar2 = *(double *)(param_8 + 0x158 + uVar10 * 0x18);
    *(float *)(puVar13 + 4) = (float)*(double *)(param_8 + 0x150 + uVar10 * 0x18);
    *(float *)((longlong)puVar13 + 0x24) = (float)dVar2;
    *(float *)(puVar13 + 5) = (float)dVar1;
    uVar10 = (ulonglong)local_c4;
    dVar1 = *(double *)(param_8 + 0x160 + uVar10 * 0x18);
    dVar2 = *(double *)(param_8 + 0x158 + uVar10 * 0x18);
    bVar6 = 0 < local_a4;
    *(float *)(puVar13 + 6) = (float)*(double *)(param_8 + 0x150 + uVar10 * 0x18);
    *(float *)((longlong)puVar13 + 0x34) = (float)dVar2;
    *(float *)(puVar13 + 7) = (float)dVar1;
    puVar13[8] = local_b0;
    puVar13[9] = local_b8;
    puVar13[10] = local_50;
    puVar13[0xb] = local_68;
    iVar3 = (int)local_c0;
    FUN_145e69800();
    FUN_1448e935e(param_2,local_90,&DAT_14cbfc140,iVar3 + (uint)bVar6 * 2);
    FUN_145e69800();
    local_d8 = &local_9c;
    local_9c = &DAT_100000001;
    local_94 = 1;
    FUN_14909c27e(param_1,&local_9d,local_90,puVar13 + 2);
    *(undefined4 *)(local_60[0] + 0x58) = 0x70;
    *(undefined4 *)(local_78[0] + 0x58) = 0x70;
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144445186 FUN_144445186 body=47 status=ok
// SIG undefined FUN_144445186(void)

void FUN_144445186(void)

{
  DAT_14cbfc200 = &PTR_FUN_14bab2f70;
  FUN_144725486(&DAT_14cbfc200);
  FUN_14667e7f2(&DAT_14cbfc200);
  return;
}



// FUNCTION 1444451c2 FUN_1444451c2 body=248 status=ok
// SIG undefined FUN_1444451c2(void)

longlong * FUN_1444451c2(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145e07818();
  local_48 = param_3;
  local_40 = param_4;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_30,param_2,DAT_14cbfc290);
  *param_1 = local_30;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
    if (local_30 != 0) {
      LOCK();
      puVar1 = (uint *)(local_30 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_30 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_30 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_30;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444452bc FUN_1444452bc body=66 status=ok
// SIG undefined FUN_1444452bc(void)

void FUN_1444452bc(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
    FUN_14738ac8a(param_2,iVar1);
  }
  *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x100040d140000;
  return;
}



// FUNCTION 144445325 FUN_144445325 body=41 status=ok
// SIG undefined FUN_144445325(void)

undefined * FUN_144445325(byte param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if ((param_1 < 9) && ((0x129U >> (param_1 & 0x1f) & 1) != 0)) {
    FUN_14610d70e();
    puVar1 = &DAT_14cbfc2e0;
  }
  return puVar1;
}



// FUNCTION 14444534e FUN_14444534e body=50 status=ok
// SIG undefined FUN_14444534e(void)

undefined4 * FUN_14444534e(byte param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if ((param_1 < 9) && ((0x129U >> (param_1 & 0x1f) & 1) != 0)) {
    puVar1 = (undefined4 *)FUN_14001cc68(4,0x10);
    *puVar1 = 0;
  }
  return puVar1;
}



// FUNCTION 14444538c FUN_14444538c body=1270 status=ok
// SIG undefined FUN_14444538c(void)

void FUN_14444538c(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  void *pvVar7;
  longlong lVar8;
  undefined **ppuVar9;
  longlong lVar10;
  longlong *in_stack_00000028;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_138;
  longlong local_128;
  longlong lStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 local_8b;
  undefined5 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar8 = *(longlong *)(param_1 + 0x20);
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
  }
  local_138 = *(undefined1 *)(param_1 + 0x38);
  local_148 = *(undefined4 *)(param_1 + 0x28);
  uStack_144 = *(undefined4 *)(param_1 + 0x2c);
  uStack_140 = *(undefined4 *)(param_1 + 0x30);
  uStack_13c = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
  }
  local_118 = (undefined4)in_stack_00000028[0x24];
  local_128 = in_stack_00000028[0x22];
  lStack_120 = in_stack_00000028[0x23];
  uStack_114 = (undefined4)*(undefined8 *)((longlong)in_stack_00000028 + 0x124);
  uStack_110 = (undefined4)((ulonglong)*(undefined8 *)((longlong)in_stack_00000028 + 0x124) >> 0x20)
  ;
  uStack_10c = (undefined4)*(undefined8 *)((longlong)in_stack_00000028 + 300);
  uStack_108 = (undefined4)((ulonglong)*(undefined8 *)((longlong)in_stack_00000028 + 300) >> 0x20);
  local_100 = (undefined4)in_stack_00000028[0x27];
  uStack_fc = *(undefined4 *)((longlong)in_stack_00000028 + 0x13c);
  uStack_f8 = (undefined4)in_stack_00000028[0x28];
  uStack_f4 = *(undefined4 *)((longlong)in_stack_00000028 + 0x144);
  local_f0 = (undefined4)in_stack_00000028[0x29];
  uStack_ec = *(undefined4 *)((longlong)in_stack_00000028 + 0x14c);
  uStack_e8 = (undefined4)in_stack_00000028[0x2a];
  uStack_e4 = *(undefined4 *)((longlong)in_stack_00000028 + 0x154);
  local_e0 = in_stack_00000028[0x2b];
  local_d0 = (undefined4)in_stack_00000028[0x2d];
  local_d8 = in_stack_00000028[0x2c];
  local_c8 = 0;
  iVar4 = (int)in_stack_00000028[0x2f];
  lVar10 = in_stack_00000028[0x2e];
  local_c0 = CONCAT44(local_c0._4_4_,iVar4);
  if (iVar4 == 0) {
    local_c0 = 0;
  }
  else {
    FUN_14753cf4a(&local_c8,iVar4,0);
    FUN_14753cfbd(local_c8,lVar10,iVar4);
  }
  local_b8 = (void *)0x0;
  uVar5 = *(uint *)(in_stack_00000028 + 0x31);
  pvVar7 = (void *)in_stack_00000028[0x30];
  local_b0 = CONCAT44(local_b0._4_4_,uVar5);
  if ((longlong)(int)uVar5 == 0) {
    local_b0 = (ulonglong)uVar5;
  }
  else {
    FUN_1456c5740(&local_b8,uVar5,0);
    memcpy(local_b8,pvVar7,(longlong)(int)uVar5 << 3);
  }
  local_a8 = (undefined1)in_stack_00000028[0x32];
  local_a0 = (void *)0x0;
  uVar5 = *(uint *)(in_stack_00000028 + 0x34);
  pvVar7 = (void *)in_stack_00000028[0x33];
  local_98 = CONCAT44(local_98._4_4_,uVar5);
  if ((longlong)(int)uVar5 == 0) {
    local_98 = (ulonglong)uVar5;
  }
  else {
    FUN_1447bda9e(&local_a0,uVar5,0);
    memcpy(local_a0,pvVar7,(longlong)(int)uVar5 << 2);
  }
  uStack_88 = (undefined5)((ulonglong)*(undefined8 *)((longlong)in_stack_00000028 + 0x1ad) >> 0x18);
  uStack_90 = (undefined5)in_stack_00000028[0x35];
  local_8b = (undefined3)((ulonglong)in_stack_00000028[0x35] >> 0x28);
  local_40 = local_40 | 3;
  local_80 = &PTR_FUN_14bab0350;
  uStack_78 = lVar8;
  local_70 = local_148;
  uStack_6c = uStack_144;
  uStack_68 = uStack_140;
  uStack_64 = uStack_13c;
  local_60 = local_138;
  uStack_58 = uVar6;
  iVar4 = (int)in_stack_00000028[1];
  *(uint *)(in_stack_00000028 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)in_stack_00000028 + 0xc) < iVar4 + 1U) {
    FUN_140ac5684(in_stack_00000028,iVar4);
  }
  lVar8 = *in_stack_00000028;
  lVar10 = (longlong)iVar4 * 0xf0;
  *(undefined4 *)(lVar8 + 0x20 + lVar10) = uStack_108;
  puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar10);
  *puVar1 = CONCAT44(uStack_114,local_118);
  puVar1[1] = CONCAT44(uStack_10c,uStack_110);
  *(longlong *)(lVar8 + lVar10) = local_128;
  ((longlong *)(lVar8 + lVar10))[1] = lStack_120;
  *(longlong *)(lVar8 + 0x48 + lVar10) = local_e0;
  puVar2 = (undefined4 *)(lVar8 + 0x38 + lVar10);
  *puVar2 = local_f0;
  puVar2[1] = uStack_ec;
  puVar2[2] = uStack_e8;
  puVar2[3] = uStack_e4;
  puVar2 = (undefined4 *)(lVar8 + 0x28 + lVar10);
  *puVar2 = local_100;
  puVar2[1] = uStack_fc;
  puVar2[2] = uStack_f8;
  puVar2[3] = uStack_f4;
  *(longlong *)(lVar8 + 0x50 + lVar10) = local_d8;
  *(undefined4 *)(lVar8 + 0x58 + lVar10) = local_d0;
  *(undefined8 *)(lVar8 + 0x60 + lVar10) = 0;
  *(longlong *)(lVar8 + 0x60 + lVar10) = local_c8;
  local_c8 = 0;
  *(undefined4 *)(lVar8 + 0x68 + lVar10) = (undefined4)local_c0;
  *(undefined4 *)(lVar8 + 0x6c + lVar10) = local_c0._4_4_;
  local_c0 = 0;
  *(undefined8 *)(lVar8 + 0x70 + lVar10) = 0;
  *(void **)(lVar8 + 0x70 + lVar10) = local_b8;
  local_b8 = (void *)0x0;
  *(undefined4 *)(lVar8 + 0x78 + lVar10) = (undefined4)local_b0;
  *(undefined4 *)(lVar8 + 0x7c + lVar10) = local_b0._4_4_;
  local_b0 = 0;
  *(undefined1 *)(lVar8 + 0x80 + lVar10) = local_a8;
  *(undefined8 *)(lVar8 + 0x88 + lVar10) = 0;
  *(void **)(lVar8 + 0x88 + lVar10) = local_a0;
  local_a0 = (void *)0x0;
  *(undefined4 *)(lVar8 + 0x90 + lVar10) = (undefined4)local_98;
  *(undefined4 *)(lVar8 + 0x94 + lVar10) = local_98._4_4_;
  local_98 = 0;
  *(ulonglong *)(lVar8 + 0x9d + lVar10) = CONCAT53(uStack_88,local_8b);
  *(ulonglong *)(lVar8 + 0x98 + lVar10) = CONCAT35(local_8b,uStack_90);
  bVar3 = *(byte *)(lVar8 + 0xe8 + lVar10);
  *(byte *)(lVar8 + 0xe8 + lVar10) = bVar3 & 0xfc | 2;
  if ((local_40 & 1) != 0) {
    lVar8 = lVar8 + lVar10;
    *(byte *)(lVar8 + 0xe8) = bVar3 | 3;
    *(byte *)(lVar8 + 0xe8) = *(byte *)(lVar8 + 0xe8) & 0xfd | local_40 & 2;
    *(undefined8 *)(lVar8 + 0xd8) = local_50;
    *(undefined8 *)(lVar8 + 0xe0) = uStack_48;
    *(ulonglong *)(lVar8 + 200) = CONCAT71(uStack_5f,local_60);
    *(undefined8 *)(lVar8 + 0xd0) = uStack_58;
    *(undefined4 *)(lVar8 + 0xb8) = local_70;
    *(undefined4 *)(lVar8 + 0xbc) = uStack_6c;
    *(undefined4 *)(lVar8 + 0xc0) = uStack_68;
    *(undefined4 *)(lVar8 + 0xc4) = uStack_64;
    *(undefined4 *)(lVar8 + 0xa8) = (undefined4)local_80;
    *(undefined4 *)(lVar8 + 0xac) = local_80._4_4_;
    *(undefined4 *)(lVar8 + 0xb0) = (undefined4)uStack_78;
    *(undefined4 *)(lVar8 + 0xb4) = uStack_78._4_4_;
    local_40 = local_40 & 0xfe;
  }
  if ((local_40 & 1) != 0) {
    ppuVar9 = (undefined **)&local_80;
    if ((local_40 & 2) == 0) {
      ppuVar9 = local_80;
    }
    local_40 = local_40 & 0xfe;
    (**(code **)*ppuVar9)(ppuVar9,0);
    if ((local_40 & 2) == 0) {
      FUN_1400020a8(local_80);
    }
  }
  if (local_a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447bda9c(local_c8,local_c0 & 0xffffffff);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144445883 FUN_144445883 body=69 status=ok
// SIG undefined FUN_144445883(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144445883(void)

{
  _DAT_14cbfc6f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444458c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbfc6f8,1);
  return;
}



// FUNCTION 1444458c8 FUN_1444458c8 body=69 status=ok
// SIG undefined FUN_1444458c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444458c8(void)

{
  _DAT_14cbfc700 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014444590a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbfc708,1);
  return;
}



// FUNCTION 14444590d FUN_14444590d body=69 status=ok
// SIG undefined FUN_14444590d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14444590d(void)

{
  _DAT_14cbfc718 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014444594f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbfc720,1);
  return;
}



// FUNCTION 144445952 FUN_144445952 body=66 status=ok
// SIG undefined FUN_144445952(void)

void FUN_144445952(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1490ba63e(param_1 + 0x10,(int)((ulonglong)*param_3 >> 0x20) * 0x17 + (int)*param_3);
  if (lVar1 == 0) {
    return;
  }
  FUN_14909f2a2(lVar1,param_2);
  return;
}



// FUNCTION 144445994 FUN_144445994 body=2441 status=ok
// SIG undefined FUN_144445994(void)

void FUN_144445994(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  int *piVar17;
  longlong *plVar18;
  undefined1 auStack_b8 [32];
  code **local_98;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = *(longlong **)(param_2 + 0x178);
  if (plVar2 == (longlong *)0x0) {
    piVar17 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
  }
  else {
    piVar17 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    iVar4 = *piVar17;
    if (DAT_14c86a9fc == 0) {
      if (iVar4 != 2) {
        if (iVar4 != 1) goto LAB_1444459ef;
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        if (DVar5 == DVar6) goto LAB_1444459f4;
        goto LAB_144445a49;
      }
LAB_1444459f4:
      (**(code **)(*plVar2 + 0x20))(plVar2);
      puVar7 = (undefined8 *)*plVar2;
      plVar18 = plVar2;
LAB_144445a03:
      (*(code *)*puVar7)(plVar18,1);
    }
    else {
LAB_1444459ef:
      if (iVar4 == 0x10) goto LAB_1444459f4;
LAB_144445a49:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (*piVar17 == 2)) goto LAB_1444459f4;
        if (*piVar17 == 1) {
          DVar5 = FUN_140ad26c0();
          DVar6 = GetCurrentThreadId();
          if (DVar5 == DVar6) goto LAB_1444459f4;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar7 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar7;
        if (puVar10 != (uint *)0x0) goto LAB_144445f8e;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14444a20d);
          }
          lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar8 = *(undefined4 **)(lVar11 + 0x310);
          *(undefined8 *)(lVar11 + 0x310) = 0;
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar8 = 0xffffffff;
          *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
          puVar8[0x12] = 0;
          *puVar7 = puVar8;
          FUN_140217a48(puVar7);
          puVar10 = (uint *)*puVar7;
LAB_144445f8e:
          plVar18 = (longlong *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(plVar18 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar1 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar1 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar7;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar7 = puVar10;
            plVar18 = (longlong *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(plVar18 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_144446010;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_144446010:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar4 = 0;
        FUN_1447247dc(plVar18,0);
        *plVar18 = (longlong)&PTR_FUN_14bab3070;
        plVar18[0x15] = (longlong)plVar2;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar4 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar4 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(plVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(plVar18[0xe] + 0x18))(plVar18 + 0xe,plVar18 + 9);
        }
        plVar18[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        plVar18[9] = (longlong)plVar18;
        plVar18[10] = (longlong)plVar18;
        lVar11 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar11 == 0) {
          uVar3 = 1;
          if ((char)uVar15 != '\x06') {
            uVar3 = uVar15;
          }
          uVar15 = uVar3;
          lVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar11 + 0x38) >> 0x3b;
          }
          lVar11 = *(longlong *)(lVar11 + 0x30);
        }
        plVar18[0xf] = lVar11;
        plVar18[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)plVar18 + 0x1c) = iVar4;
        if (plVar18 == (longlong *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
          goto LAB_144445adb;
        }
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(plVar18);
        LOCK();
        plVar2 = plVar18 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 != 0) goto LAB_144445adb;
        puVar7 = (undefined8 *)*plVar18;
        goto LAB_144445a03;
      }
      local_98 = local_88;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14bab3050;
      local_88[0] = FUN_1444518e2;
      local_60 = plVar2;
      FUN_14005a792(&DAT_14ca9a440,L"DeleteResource",&DAT_14cbfdad0);
      if (local_88[0] != (code *)0x0) {
        pppuVar13 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar13 = &local_68;
        }
        (*(code *)(*pppuVar13)[2])();
      }
    }
LAB_144445adb:
    *(undefined8 *)(param_2 + 0x178) = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(param_3 + 0x100);
  iVar4 = *piVar17;
  if (DAT_14c86a9fc == 0) {
    if (iVar4 == 2) goto LAB_144446206;
    if (iVar4 != 1) goto LAB_144445b02;
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    if (DVar5 == DVar6) goto LAB_144446206;
  }
  else {
LAB_144445b02:
    if (iVar4 == 0x10) goto LAB_144446206;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (*piVar17 == 2)) {
LAB_144446206:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
    if (*piVar17 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_144446206;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar7 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar7;
    if (puVar10 != (uint *)0x0) goto LAB_144445c71;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_14444a20d);
      }
      lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar8 = *(undefined4 **)(lVar11 + 0x310);
      *(undefined8 *)(lVar11 + 0x310) = 0;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar8 = 0xffffffff;
      *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
      puVar8[0x12] = 0;
      *puVar7 = puVar8;
      FUN_140217a48(puVar7);
      puVar10 = (uint *)*puVar7;
LAB_144445c71:
      puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar16 + 0x17);
      uVar12 = puVar10[0x12];
      if (puVar14 <= puVar10 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar1 = *puVar10;
        *puVar10 = *puVar10 + uVar12 + 1;
        UNLOCK();
        if ((uVar1 ^ uVar12) != 0xffffffff) break;
        puVar10 = (uint *)*puVar7;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar7 = puVar10;
        puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar16 + 0x17);
        uVar12 = 0;
        if (puVar14 <= puVar10 + 0x4000) {
          uVar12 = 1;
          goto LAB_144445cf1;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_144445cf1:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    iVar4 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14bab30a0;
    puVar16[0x15] = plVar2;
    puVar16[0x16] = uVar9;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar12 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
        uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
        iVar4 = 0;
      }
      else {
        uVar15 = 2;
      }
    }
    else {
      iVar4 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar15 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar11 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar11 == 0) {
      uVar3 = 1;
      if ((char)uVar15 != '\x06') {
        uVar3 = uVar15;
      }
      uVar15 = uVar3;
      uVar9 = 0;
    }
    else {
      if ((char)uVar15 == '\x06') {
        uVar15 = *(ulonglong *)(lVar11 + 0x38) >> 0x3b;
      }
      uVar9 = *(undefined8 *)(lVar11 + 0x30);
    }
    puVar16[0xf] = uVar9;
    puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar4;
    if (puVar16 == (undefined8 *)0x0) {
      local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar17 = (int *)(puVar16 + 1);
      *piVar17 = *piVar17 + -1;
      UNLOCK();
      if (*piVar17 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_98 = local_88;
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14bab3080;
    local_88[0] = (code *)&LAB_144451ac6;
    local_60 = plVar2;
    local_58 = uVar9;
    FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIDestroyInstanceData",&DAT_14cbfdad4);
    if (local_88[0] != (code *)0x0) {
      pppuVar13 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar13 = &local_68;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444633a FUN_14444633a body=3219 status=ok
// SIG undefined FUN_14444633a(void)

undefined8 FUN_14444633a(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  uint *puVar8;
  code *pcVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined ***pppuVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  ulonglong uVar28;
  bool bVar29;
  undefined1 auStack_1d8 [32];
  code **local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  wchar_t *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  code **local_180;
  undefined1 *local_178;
  code *local_170;
  ulonglong local_160;
  uint *local_158;
  int local_14c;
  longlong local_148;
  longlong local_140;
  ulonglong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118 [12];
  undefined1 local_b8;
  code *local_a8;
  int local_a0;
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_128 = 0;
  uStack_120 = 0;
  puVar21 = &DAT_14c846480;
  puVar23 = local_118;
  for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar23 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar23 = puVar23 + 1;
  }
  local_b8 = 0;
  FUN_14909f046(param_1,param_3,&local_128);
  cVar3 = FUN_14909f61c();
  if (cVar3 != '\0') goto LAB_1444463bb;
  if (*(int *)(param_1 + 0x54) == 0) {
LAB_144446b4c:
    lVar16 = 0;
  }
  else {
    uVar15 = *(uint *)(param_1 + 0x50);
    lVar16 = 0;
    if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
      plVar17 = (longlong *)
                ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
      if ((plVar17 == (longlong *)0x0) ||
         (((int)plVar17[2] != *(int *)(param_1 + 0x54) ||
          ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)))) goto LAB_144446b4c;
      lVar16 = *plVar17;
    }
  }
  if (*(char *)(lVar16 + 0x790) == '\0') {
    uVar20 = 0;
    uVar19 = 0;
    local_148 = param_2;
    local_140 = param_1;
    if (((((*(int *)(param_3 + 0x4c) != 0) && (uVar15 = *(uint *)(param_3 + 0x48), -1 < (int)uVar15)
          ) && ((int)uVar15 < DAT_14c9647dc)) &&
        ((plVar17 = (longlong *)
                    ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)), uVar20 = uVar19
         , plVar17 != (longlong *)0x0 && ((int)plVar17[2] == *(int *)(param_3 + 0x4c))))) &&
       (((*(uint *)(plVar17 + 1) & 0x10200000) == 0 && (lVar16 = *plVar17, *plVar17 != 0)))) {
      do {
        lVar24 = lVar16;
        lVar16 = *(longlong *)(lVar24 + 0x120);
      } while (lVar16 != 0);
      lVar16 = *(longlong *)(lVar24 + 0xa8);
      if (lVar16 != 0) {
        uVar15 = *(uint *)(lVar16 + 0x268);
        uVar19 = (ulonglong)uVar15;
        puVar11 = (uint *)(lVar16 + 0x250);
        uVar20 = 0;
        if (uVar15 == 0) {
          uVar22 = 1;
          uVar28 = 0;
          uVar4 = 0;
          iVar5 = 0;
        }
        else {
          puVar8 = *(uint **)(lVar16 + 0x260);
          if (*(uint **)(lVar16 + 0x260) == (uint *)0x0) {
            puVar8 = puVar11;
          }
          uVar4 = *puVar8;
          if (uVar4 == 0) {
            iVar5 = uVar15 + 0x1e;
            if (-1 < (int)(uVar15 - 1)) {
              iVar5 = uVar15 - 1;
            }
            uVar28 = 0;
            uVar22 = (ulonglong)(uint)(iVar5 >> 5);
            if (iVar5 >> 5 < 1) {
              uVar22 = uVar28;
            }
            iVar5 = 0;
            do {
              if (uVar22 == uVar28) {
                uVar20 = 0;
                goto LAB_14444659d;
              }
              iVar5 = iVar5 + 0x20;
              uVar4 = puVar8[uVar28 + 1];
              uVar28 = uVar28 + 1;
            } while (uVar4 == 0);
          }
          else {
            uVar28 = 0;
            iVar5 = 0;
          }
          uVar22 = (ulonglong)(-uVar4 & uVar4);
          uVar2 = uVar22 * 2 + 1;
          lVar24 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          uVar4 = (iVar5 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
          if ((int)uVar15 <= (int)uVar4) {
            uVar4 = uVar15;
          }
        }
        if (uVar4 != uVar15) {
          uVar15 = 0xffffffff;
          uVar20 = 0;
          local_160 = uVar19;
          local_158 = puVar11;
          do {
            lVar24 = *(longlong *)(*(longlong *)(lVar16 + 0x240) + (longlong)(int)uVar4 * 0x10);
            if (lVar24 != 0) {
              if (DAT_14cad2858 == 0) {
                local_a8 = FUN_144a7958c;
                local_170 = FUN_14081d0ea;
                local_178 = &LAB_146395584;
                local_180 = &local_a8;
                local_188 = &LAB_147a0ba80;
                local_190 = &LAB_14575ccce;
                local_198 = L"Engine";
                local_1a0 = 0x40000000000;
                local_1a8 = 0x10000004;
                local_1b0 = 0x10;
                local_1b8 = (code **)CONCAT44(local_1b8._4_4_,0x1180);
                FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,
                              FUN_1463bcebe);
                uVar19 = local_160;
              }
              if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar24 + 0x10) + 0x38))
                 && (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar24 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
                lVar25 = *(longlong *)(lVar24 + 0x658);
                if (lVar25 == 0) {
                  lVar25 = *(longlong *)(lVar24 + 0x660);
                  if ((DAT_14c950c29 == '\x01') && (lVar25 != 0)) goto LAB_144446a7c;
                  puVar11 = local_158;
                  if (lVar25 != 0) goto LAB_144446697;
                }
                else {
                  if (DAT_14c950c29 == '\x01') {
LAB_144446a7c:
                    FUN_1456cec3c(lVar25);
                    uVar19 = local_160;
                  }
LAB_144446697:
                  if (DAT_14cb06da8 == 0) {
                    local_a8 = FUN_1449e2820;
                    local_170 = FUN_14081d0ea;
                    local_178 = &LAB_1464003b0;
                    local_180 = &local_a8;
                    local_188 = &LAB_147d17bdf;
                    local_190 = &LAB_1417edf22;
                    local_198 = L"Engine";
                    local_1a0 = 0;
                    local_1a8 = 0x10000000;
                    local_1b0 = 8;
                    local_1b8 = (code **)CONCAT44(local_1b8._4_4_,0x588);
                    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
                    uVar19 = local_160;
                  }
                  puVar11 = local_158;
                  if ((*(int *)(DAT_14cb06da8 + 0x38) <=
                       *(int *)(*(longlong *)(lVar25 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
                    lVar25 = *(longlong *)(lVar24 + 0x658);
                    local_14c = iVar5;
                    local_138 = uVar20;
                    if (lVar25 == 0) {
                      lVar25 = *(longlong *)(lVar24 + 0x660);
                      if ((DAT_14c950c29 == '\x01') && (lVar25 != 0)) goto LAB_144446a8e;
                      if (lVar25 != 0) goto LAB_1444466f7;
LAB_1444468fd:
                      lVar25 = 0;
                    }
                    else {
                      if (DAT_14c950c29 != '\0') {
LAB_144446a8e:
                        FUN_1456cec3c(lVar25);
                        if (DAT_14cb06da8 == 0) {
                          local_a8 = FUN_1449e2820;
                          local_170 = FUN_14081d0ea;
                          local_178 = &LAB_1464003b0;
                          local_180 = &local_a8;
                          local_188 = &LAB_147d17bdf;
                          local_190 = &LAB_1417edf22;
                          local_198 = L"Engine";
                          local_1a0 = 0;
                          local_1a8 = 0x10000000;
                          local_1b0 = 8;
                          local_1b8 = (code **)CONCAT44(local_1b8._4_4_,0x588);
                          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,
                                        FUN_14640038e);
                        }
                      }
LAB_1444466f7:
                      if ((*(int *)(*(longlong *)(lVar25 + 0x10) + 0x38) <
                           *(int *)(DAT_14cb06da8 + 0x38)) ||
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x30) +
                           (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
                      goto LAB_1444468fd;
                    }
                    local_130 = *(undefined8 *)(lVar25 + 0x18);
                    FUN_1400021e4(&local_130,&local_a8);
                    uVar4 = 0;
                    iVar5 = local_a0 + -1;
                    if (local_a0 == 0) {
                      iVar5 = 0;
                    }
                    if (0 < iVar5) {
                      pcVar9 = local_a8;
                      if (local_a0 == 0) {
                        pcVar9 = (code *)&DAT_149dfb77a;
                      }
                      lVar24 = 0;
                      uVar20 = 0;
                      do {
                        uVar4 = ((uint)(0x19 < *(ushort *)(pcVar9 + lVar24 * 2) - 0x61) * 0x20 +
                                (uint)*(ushort *)(pcVar9 + lVar24 * 2)) - 0x20;
                        uVar26 = (uint)(uVar20 >> 8) ^
                                 *(uint *)(&DAT_14c75d150 +
                                          (ulonglong)(((uint)uVar20 ^ uVar4) & 0xff) * 4);
                        uVar4 = uVar26 >> 8 ^
                                *(uint *)(&DAT_14c75d150 +
                                         (ulonglong)(uVar26 & 0xff ^ uVar4 >> 8 & 0xff) * 4);
                        uVar20 = (ulonglong)uVar4;
                        lVar24 = lVar24 + 1;
                      } while (iVar5 != (int)lVar24);
                    }
                    if (local_a8 != (code *)0x0) {
                      FUN_1400020a8();
                    }
                    uVar20 = (ulonglong)(uVar4 + (int)local_138);
                    uVar19 = local_160;
                    puVar11 = local_158;
                    iVar5 = local_14c;
                  }
                }
              }
            }
            uVar15 = uVar15 & ~(uint)uVar22;
            puVar8 = *(uint **)(lVar16 + 0x260);
            if (*(uint **)(lVar16 + 0x260) == (uint *)0x0) {
              puVar8 = puVar11;
            }
            uVar26 = *(uint *)(lVar16 + 0x268);
            iVar27 = (int)uVar28;
            lVar24 = (longlong)iVar27;
            uVar4 = puVar8[lVar24] & uVar15;
            if (uVar4 == 0) {
              iVar13 = uVar26 + 0x1e;
              if (-1 < (int)(uVar26 - 1)) {
                iVar13 = uVar26 - 1;
              }
              iVar13 = iVar13 >> 5;
              iVar5 = iVar5 + 0x20;
              iVar14 = iVar13;
              if (iVar13 < iVar27) {
                iVar14 = iVar27;
              }
              if (iVar27 < iVar13) {
                lVar25 = 0;
                do {
                  uVar4 = puVar8[lVar24 + lVar25 + 1];
                  if (uVar4 != 0) {
                    uVar28 = (ulonglong)(iVar27 + (int)lVar25 + 1);
                    uVar15 = 0xffffffff;
                    goto LAB_14444687a;
                  }
                  iVar5 = iVar5 + 0x20;
                  lVar25 = lVar25 + 1;
                } while (iVar14 - lVar24 != lVar25);
                uVar15 = 0xffffffff;
                iVar27 = iVar14;
              }
              uVar28 = (ulonglong)(iVar27 + 1);
              uVar19 = local_160;
              puVar11 = local_158;
              uVar4 = uVar26;
            }
            else {
LAB_14444687a:
              uVar22 = (ulonglong)(-uVar4 & uVar4);
              uVar2 = uVar22 * 2 + 1;
              lVar24 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              uVar4 = (iVar5 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
              if ((int)uVar26 <= (int)uVar4) {
                uVar4 = uVar26;
              }
            }
          } while (uVar4 != (uint)uVar19);
        }
      }
    }
LAB_14444659d:
    iVar5 = (int)uVar20;
    bVar29 = iVar5 == *(int *)(local_148 + 0x424);
    *(int *)(local_148 + 0x424) = iVar5;
    *(bool *)(local_148 + 0x174) = !bVar29;
    param_2 = local_148;
    param_1 = local_140;
    if (bVar29) goto LAB_1444463bb;
  }
  else {
    *(undefined1 *)(param_2 + 0x174) = 1;
  }
  lVar16 = *(longlong *)(param_2 + 0x178);
  lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar24 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_1444465fa;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_144446603;
      goto LAB_144446b9e;
    }
  }
  else {
LAB_1444465fa:
    if (iVar5 != 0x10) {
LAB_144446b9e:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar24 + 0xc60), iVar5 == 2))
        goto LAB_144446603;
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_144446603;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar21 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar11 = (uint *)*puVar21;
        if (puVar11 != (uint *)0x0) goto LAB_144446c7c;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_14444a20d);
          }
          lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar24 + 0x310);
          *(undefined8 *)(lVar24 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar21 = puVar10;
          FUN_140217a48(puVar21);
          puVar11 = (uint *)*puVar21;
LAB_144446c7c:
          puVar23 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar8 = (uint *)(puVar23 + 0x16);
          uVar15 = puVar11[0x12];
          if (puVar8 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar4 = *puVar11;
            *puVar11 = *puVar11 + uVar15 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar15) != 0xffffffff) break;
            puVar11 = (uint *)*puVar21;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar21 = puVar11;
            puVar23 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar8 = (uint *)(puVar23 + 0x16);
            uVar15 = 0;
            if (puVar8 <= puVar11 + 0x4000) {
              uVar15 = 1;
              goto LAB_144446cfc;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_144446cfc:
        *(uint **)(puVar11 + 0x10) = puVar8;
        puVar11[0x12] = uVar15;
        iVar5 = 0;
        FUN_1447247dc(puVar23,0);
        *puVar23 = &PTR_FUN_14bab30d0;
        puVar23[0x15] = lVar16;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar5 = 0;
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar20 = 5;
        }
        if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
        }
        puVar23[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar23[9] = puVar23;
        puVar23[10] = puVar23;
        lVar16 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar16 == 0) {
          uVar19 = 1;
          if ((char)uVar20 != '\x06') {
            uVar19 = uVar20;
          }
          uVar20 = uVar19;
          uVar12 = 0;
        }
        else {
          if ((char)uVar20 == '\x06') {
            uVar20 = *(ulonglong *)(lVar16 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar16 + 0x30);
        }
        puVar23[0xf] = uVar12;
        puVar23[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar23 + 0x1c) = iVar5;
        if (puVar23 == (undefined8 *)0x0) {
          local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
          UNLOCK();
          local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
          FUN_1447439e4(puVar23);
          LOCK();
          piVar1 = (int *)(puVar23 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar23)(puVar23,1);
          }
        }
      }
      else {
        local_1b8 = &local_a8;
        local_98 = (undefined ***)0x0;
        local_88 = &PTR_LAB_14bab30b0;
        local_a8 = (code *)&LAB_144451c9e;
        local_80 = lVar16;
        FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIDestroyInstanceData",&DAT_14cbfdad8);
        if (local_a8 != (code *)0x0) {
          pppuVar18 = local_98;
          if (local_98 == (undefined ***)0x0) {
            pppuVar18 = &local_88;
          }
          (*(code *)(*pppuVar18)[2])();
        }
      }
      goto LAB_1444463bb;
    }
  }
LAB_144446603:
  if (lVar16 != 0) {
    *(undefined1 *)(lVar16 + 0x279) = 1;
  }
LAB_1444463bb:
  FUN_14909db88(param_2,param_1,&local_128,param_4);
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144446fda FUN_144446fda body=1995 status=ok
// SIG undefined FUN_144446fda(void)

void FUN_144446fda(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  undefined1 auStack_9c8 [32];
  undefined1 **local_9a8;
  undefined8 *local_998;
  ulonglong local_990;
  uint local_984;
  undefined8 *local_980;
  int *local_978;
  longlong *local_970;
  longlong local_968;
  undefined8 local_960;
  ulonglong local_958;
  int local_950 [2];
  longlong local_948;
  undefined8 uStack_940;
  ulonglong local_938;
  int local_930 [2];
  longlong local_928;
  undefined8 uStack_920;
  char *local_918;
  undefined4 local_910;
  undefined1 local_90c;
  undefined8 local_4e8;
  undefined4 local_4e0;
  uint local_4dc;
  undefined1 local_4d8 [1072];
  undefined1 *local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_9c8;
  local_960 = param_2;
  if ((longlong)*(int *)(param_3 + 0x110) != 0) {
    plVar19 = *(longlong **)(param_3 + 0x108);
    plVar14 = plVar19 + (longlong)*(int *)(param_3 + 0x110) * 2;
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_998 = (undefined8 *)(lVar3 + 0x308);
    local_980 = (undefined8 *)(lVar3 + 0x310);
    local_968 = 0x527800b400;
    local_978 = (int *)(lVar3 + 0xc60);
    local_970 = (longlong *)(lVar3 + 0x2b8);
    do {
      lVar3 = *plVar19;
      plVar4 = (longlong *)plVar19[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      lVar3 = *(longlong *)(lVar3 + 0x10);
      local_918 = "NodePosition";
      local_910 = 0xc;
      local_90c = 0;
      uVar6 = FUN_14001a6c0(&local_918,1);
      local_938 = (ulonglong)uVar6;
      local_930[0] = FUN_144830b78(local_930,&DAT_14cb42140);
      local_928 = 0;
      uStack_920 = 0;
      lVar16 = (longlong)(int)(*(longlong **)(lVar3 + 8))[1];
      uVar6 = 0xffffffff;
      if (lVar16 != 0) {
        lVar5 = **(longlong **)(lVar3 + 8);
        uVar17 = 0;
        do {
          if ((*(ulonglong *)(lVar5 + uVar17) == local_938) &&
             (*(int *)(lVar5 + 8 + uVar17) == local_930[0])) {
            uVar6 = (int)(uVar17 >> 2) * -0x55555555;
            break;
          }
          uVar17 = uVar17 + 0xc;
        } while (lVar16 * 0xc != uVar17);
      }
      local_918 = "RestPosition";
      local_910 = 0xc;
      local_90c = 0;
      uVar7 = FUN_14001a6c0(&local_918,1);
      local_958 = (ulonglong)uVar7;
      local_950[0] = FUN_144830b78(local_950,&DAT_14cb42140);
      local_948 = 0;
      uStack_940 = 0;
      plVar10 = *(longlong **)(lVar3 + 8);
      if ((longlong)(int)plVar10[1] != 0) {
        lVar16 = 0;
        while ((*(ulonglong *)(*plVar10 + lVar16) != local_958 ||
               (*(int *)(*plVar10 + 8 + lVar16) != local_950[0]))) {
          lVar16 = lVar16 + 0xc;
          if ((longlong)(int)plVar10[1] * 0xc == lVar16) goto LAB_144447209;
        }
        uVar7 = (int)(lVar16 >> 2) * -0x55555555;
        if (((((int)uVar6 < 0 || uVar7 == 0xffffffff) || (*(uint *)(plVar10 + 3) <= uVar7)) ||
            ((int)uVar7 < 0)) || ((int)*(uint *)(plVar10 + 3) <= (int)uVar6)) goto LAB_144447209;
        local_990 = CONCAT44(local_990._4_4_,(uint)*(ushort *)(plVar10[2] + (ulonglong)uVar6 * 0x20)
                            );
        local_984 = (uint)*(ushort *)(plVar10[2] + (ulonglong)(uVar7 & 0x7fffffff) * 0x20);
        uVar13 = *(undefined8 *)(lVar3 + 0x78);
        FUN_14909f966(local_4d8);
        FUN_14909f2a2(local_4d8,local_960);
        memcpy(&local_918,local_4d8,0x430);
        local_4e0 = (undefined4)local_990;
        local_4dc = local_984;
        iVar2 = *local_978;
        local_4e8 = uVar13;
        if (DAT_14c86a9fc == 0) {
          if (iVar2 != 2) {
            if (iVar2 != 1) goto LAB_1444472d5;
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            if (DVar8 == DVar9) goto LAB_1444472da;
            goto LAB_14444730b;
          }
LAB_1444472da:
          FUN_144451e38(&local_918,&DAT_14ca85100);
          goto LAB_1444473f1;
        }
LAB_1444472d5:
        if (iVar2 == 0x10) goto LAB_1444472da;
LAB_14444730b:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (*local_978 == 2)) goto LAB_1444472da;
          if (*local_978 == 1) {
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            if (DVar8 == DVar9) goto LAB_1444472da;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar12 = (uint *)*local_998;
          if (puVar12 != (uint *)0x0) goto LAB_144447483;
          do {
            uVar6 = *(uint *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x318);
            if ((uVar6 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar6 | 1;
              __tlregdtor(&LAB_14444a20d);
            }
            puVar11 = (undefined4 *)*local_980;
            *local_980 = 0;
            if (puVar11 == (undefined4 *)0x0) {
              puVar11 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar11 = 0xffffffff;
            *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *local_998 = puVar11;
            FUN_140217a48();
            puVar12 = (uint *)*local_998;
LAB_144447483:
            uVar17 = *(longlong *)(puVar12 + 0x10) + 0xf;
            uVar6 = puVar12[0x12];
            while( true ) {
              puVar18 = (undefined8 *)(uVar17 & 0xfffffffffffffff0);
              if (puVar18 + 0x9e <= puVar12 + 0x4000) {
                *(undefined8 **)(puVar12 + 0x10) = puVar18 + 0x9e;
                puVar12[0x12] = uVar6 + 1;
                FUN_1447247dc(puVar18,0);
                *puVar18 = &PTR_FUN_14bab3170;
                memcpy(puVar18 + 0x16,&local_918,0x440);
                if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                  uVar6 = DAT_14c7585c8 >> 10 & 3;
                  uVar17 = 0;
                  if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar6 < 2) {
                    uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar6];
                  }
                  else {
                    uVar15 = 2;
                  }
                }
                else {
                  uVar17 = (ulonglong)
                           ((DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                           *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4));
                  uVar15 = 5;
                }
                if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
                  local_990 = uVar17;
                  (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
                  uVar17 = local_990;
                }
                puVar18[0xe] = LowLevelTasks::
                               TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                               ::vftable;
                puVar18[9] = puVar18;
                puVar18[10] = puVar18;
                lVar3 = *local_970;
                if (lVar3 == 0) {
                  if ((char)uVar15 == '\x06') {
                    uVar15 = 1;
                  }
                  uVar13 = 0;
                }
                else {
                  if ((char)uVar15 == '\x06') {
                    uVar15 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
                  }
                  uVar13 = *(undefined8 *)(lVar3 + 0x30);
                }
                puVar18[0xf] = uVar13;
                puVar18[0x10] = (uVar15 << 0x3b) + local_968 | 0xc000000000000000;
                *(int *)((longlong)puVar18 + 0x1c) = (int)uVar17;
                if (puVar18 == (undefined8 *)0x0) {
                  local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
                  FUN_1447439e4(0,local_a8);
                }
                else {
                  LOCK();
                  *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                  UNLOCK();
                  local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
                  FUN_1447439e4(puVar18,local_a8);
                  LOCK();
                  piVar1 = (int *)(puVar18 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)*puVar18)(puVar18,1);
                  }
                }
                goto LAB_1444473f1;
              }
              *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
              LOCK();
              uVar7 = *puVar12;
              *puVar12 = *puVar12 + uVar6 + 1;
              UNLOCK();
              if ((uVar7 ^ uVar6) != 0xffffffff) break;
              puVar12 = (uint *)*local_998;
              *puVar12 = 0xffffffff;
              *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
              puVar12[0x12] = 0;
              *local_998 = puVar12;
              uVar17 = (longlong)puVar12 + 0x67;
              uVar6 = 0;
            }
          } while( true );
        }
        local_a8[0] = (undefined1 *)0x0;
        local_98 = (longlong *)0x0;
        plVar10 = (longlong *)FUN_14001cc68(0x450,0x10);
        *plVar10 = (longlong)&PTR_LAB_14bab3110;
        local_98 = plVar10;
        memcpy(plVar10 + 2,&local_918,0x440);
        if (plVar10 != (longlong *)&DAT_fffffffffffffff0) {
          local_a8[0] = &LAB_1444529b4;
        }
        local_9a8 = local_a8;
        FUN_14005a792(&DAT_14ca9a440,L"NiagaraInterpolateGroomSimCache",&DAT_14cbfdb10);
        if (local_a8[0] != (undefined1 *)0x0) {
          plVar10 = local_98;
          if (local_98 == (longlong *)0x0) {
            plVar10 = local_88;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
LAB_1444473f1:
        if (local_948 != 0) {
          FUN_1400020a8();
        }
      }
LAB_144447209:
      if (local_928 != 0) {
        FUN_1400020a8();
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar4 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      plVar19 = plVar19 + 2;
    } while (plVar19 != plVar14);
  }
  if ((local_60 ^ (ulonglong)auStack_9c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444477a6 FUN_1444477a6 body=4595 status=ok
// SIG undefined FUN_1444477a6(void)

void FUN_1444477a6(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  undefined8 *puVar17;
  bool bVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_288 [36];
  float local_264;
  uint local_260;
  int local_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  char local_240;
  char local_23f;
  int local_23c;
  int local_238;
  undefined4 local_228;
  undefined8 local_224;
  undefined4 local_21c;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  lVar15 = param_2[9];
  if (*(int *)(lVar15 + 0x18) != *(int *)(lVar15 + 0x44)) {
    lVar3 = *(longlong *)(param_2[2] + 0x10);
    lVar13 = lVar15 + 0x48;
    if (*(longlong *)(lVar15 + 0x50) != 0) {
      lVar13 = *(longlong *)(lVar15 + 0x50);
    }
    iVar9 = *(int *)(lVar13 + (ulonglong)
                              (*(int *)(lVar15 + 0x58) - 1U &
                              (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar13 = *(longlong *)(lVar15 + 0x10) + (longlong)iVar9 * 0x450;
        if (*(longlong *)(*(longlong *)(lVar15 + 0x10) + (longlong)iVar9 * 0x450) == lVar3)
        goto LAB_14444789a;
        iVar9 = *(int *)(lVar13 + 0x440);
      } while (iVar9 != -1);
    }
  }
  lVar13 = 0;
LAB_14444789a:
  uVar11 = *param_2;
  lVar15 = lVar13 + 0x10;
  if (lVar13 == 0) {
    lVar15 = 0;
  }
  if (lVar15 == 0) {
    local_1c0 = (undefined8 *)0x0;
    FUN_14444899a(&local_240,uVar11);
    bVar4 = false;
  }
  else {
    if ((((*(int *)(lVar15 + 0x194) == 0) || (uVar16 = *(uint *)(lVar15 + 400), (int)uVar16 < 0)) ||
        (DAT_14c9647dc <= (int)uVar16)) ||
       ((plVar14 = (longlong *)
                   ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
        plVar14 == (longlong *)0x0 || ((int)plVar14[2] != *(int *)(lVar15 + 0x194))))) {
LAB_144447965:
      local_1c0 = (undefined8 *)0x0;
    }
    else {
      uVar16 = *(uint *)(lVar15 + 0x180);
      if ((((*(uint *)(plVar14 + 1) & 0x10200000) != 0) ||
          ((*plVar14 == 0 || (lVar3 = *(longlong *)(*plVar14 + 0x3b8), lVar3 == 0)))) ||
         (((int)uVar16 < 0 || (*(int *)(lVar3 + 0x2a0) <= (int)uVar16)))) goto LAB_144447965;
      local_1c0 = *(undefined8 **)(*(longlong *)(lVar3 + 0x298) + (ulonglong)uVar16 * 8);
      if (local_1c0 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_1c0 + 1) = *(int *)(local_1c0 + 1) + 1;
        UNLOCK();
      }
    }
    FUN_14444899a(&local_240,uVar11,&local_1c0);
    lVar3 = *(longlong *)(lVar15 + 0x178);
    if ((lVar3 == 0) || (*(int *)(lVar3 + 8) == -1)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
      bVar18 = false;
      iVar9 = local_23c;
      if ((local_240 != '\x01') || (local_238 == 3)) goto LAB_1444479a8;
      if (*(longlong *)(lVar3 + 0x38) != 0) {
        bVar18 = *(longlong *)(lVar3 + 0x10) != 0;
        goto LAB_1444479a8;
      }
    }
  }
  bVar18 = false;
  iVar9 = local_23c;
LAB_1444479a8:
  uVar16 = *(int *)(param_2 + 10) + 0xfU & 0xfffffff0;
  FUN_1490bb2a2();
  *(uint *)(param_2 + 10) = DAT_14cbfdb54 + uVar16;
  puVar17 = (undefined8 *)((ulonglong)uVar16 + param_2[7]);
  if ((bVar4) && (bVar18)) {
    lVar3 = *(longlong *)(lVar15 + 0x178);
    iVar8 = 0;
    local_25c = 0;
    if (((local_23f == '\x01') && (local_240 == '\x01')) && (local_238 != 3)) {
      local_25c = *(byte *)(lVar15 + 0x168) + 1;
    }
    if (((*(char *)(lVar3 + 0x279) == '\0') && (*(char *)(lVar3 + 0x270) == '\x01')) &&
       (*(int *)(lVar3 + 0x274) == iVar9)) {
      iVar12 = *(int *)(lVar3 + 0x27c) + 1;
      iVar8 = DAT_14c764a30 + 1;
      if (iVar12 <= DAT_14c764a30 + 1) {
        iVar8 = iVar12;
      }
    }
    *(int *)(lVar3 + 0x27c) = iVar8;
    bVar4 = iVar8 <= DAT_14c764a30;
    uVar16 = (uint)(DAT_14cbfc710 != 0);
    if ((DAT_14cbfc710 == 0) && (iVar8 <= DAT_14c764a30)) {
      uVar16 = (uint)*(byte *)(lVar15 + 0x169);
    }
    bVar2 = *(byte *)(lVar15 + 0x42c);
    *(undefined1 *)(lVar3 + 0x279) = 0;
    *(undefined1 *)(lVar3 + 0x270) = 1;
    *(int *)(lVar3 + 0x274) = iVar9;
    local_108 = DAT_14c846280;
    uStack_104 = DAT_14c846284;
    uStack_100 = DAT_14c846288;
    uStack_fc = DAT_14c84628c;
    local_118 = DAT_14c846270;
    fStack_114 = DAT_14c846274;
    fStack_110 = DAT_14c846278;
    uStack_10c = DAT_14c84627c;
    local_128 = DAT_14c846260;
    fStack_124 = DAT_14c846264;
    fStack_120 = DAT_14c846268;
    uStack_11c = DAT_14c84626c;
    local_138 = DAT_14c846250;
    fStack_134 = DAT_14c846254;
    fStack_130 = (float)DAT_14c846258;
    uStack_12c = DAT_14c846258._4_4_;
    local_148 = DAT_14c846280;
    uStack_144 = DAT_14c846284;
    uStack_140 = DAT_14c846288;
    uStack_13c = DAT_14c84628c;
    local_158 = DAT_14c846270;
    fStack_154 = DAT_14c846274;
    fStack_150 = DAT_14c846278;
    uStack_14c = DAT_14c84627c;
    local_168 = DAT_14c846260;
    fStack_164 = DAT_14c846264;
    fStack_160 = DAT_14c846268;
    uStack_15c = DAT_14c84626c;
    local_178 = DAT_14c846250;
    fStack_174 = DAT_14c846254;
    fStack_170 = (float)DAT_14c846258;
    uStack_16c = DAT_14c846258._4_4_;
    local_260 = (uint)bVar2;
    if (DAT_14cbfc728 == '\0') {
      FUN_1490a0492(&local_138,lVar15,&local_1c0);
      FUN_14909fae0(&local_178,lVar15,&local_1c0);
    }
    else {
      local_258 = *(undefined8 **)(lVar15 + 0x188);
      if (local_258 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_258 + 1) = *(int *)(local_258 + 1) + 1;
        UNLOCK();
      }
      FUN_1490a0492(&local_1b8,lVar15,&local_258);
      local_108 = (undefined4)local_188;
      uStack_104 = local_188._4_4_;
      uStack_100 = (undefined4)uStack_180;
      uStack_fc = uStack_180._4_4_;
      local_118 = (float)local_198;
      fStack_114 = local_198._4_4_;
      fStack_110 = (float)uStack_190;
      uStack_10c = uStack_190._4_4_;
      local_128 = (float)local_1a8;
      fStack_124 = local_1a8._4_4_;
      fStack_120 = (float)uStack_1a0;
      uStack_11c = uStack_1a0._4_4_;
      local_138 = (float)local_1b8;
      fStack_134 = local_1b8._4_4_;
      fStack_130 = (float)uStack_1b0;
      uStack_12c = uStack_1b0._4_4_;
      if (local_258 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_258 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_258)(local_258,1);
        }
      }
      local_258 = *(undefined8 **)(lVar15 + 0x188);
      if (local_258 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_258 + 1) = *(int *)(local_258 + 1) + 1;
        UNLOCK();
      }
      FUN_14909fae0(&local_1b8,lVar15,&local_258);
      local_148 = (undefined4)local_188;
      uStack_144 = local_188._4_4_;
      uStack_140 = (undefined4)uStack_180;
      uStack_13c = uStack_180._4_4_;
      local_158 = (float)local_198;
      fStack_154 = local_198._4_4_;
      fStack_150 = (float)uStack_190;
      uStack_14c = uStack_190._4_4_;
      local_168 = (float)local_1a8;
      fStack_164 = local_1a8._4_4_;
      fStack_160 = (float)uStack_1a0;
      uStack_15c = uStack_1a0._4_4_;
      local_178 = (float)local_1b8;
      fStack_174 = local_1b8._4_4_;
      fStack_170 = (float)uStack_1b0;
      uStack_16c = uStack_1b0._4_4_;
      if (local_258 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_258 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_258)(local_258,1);
        }
      }
    }
    iVar9 = _finite((double)*(float *)(lVar15 + 0x120));
    if ((((((iVar9 != 0) && (iVar9 = _finite((double)*(float *)(lVar15 + 0x124)), iVar9 != 0)) &&
          (iVar9 = _finite((double)*(float *)(lVar15 + 0x128)), iVar9 != 0)) &&
         ((iVar9 = _finite((double)*(float *)(lVar15 + 0x138)), iVar9 != 0 &&
          (iVar9 = _finite((double)*(float *)(lVar15 + 0x13c)), iVar9 != 0)))) &&
        (((iVar9 = _finite((double)*(float *)(lVar15 + 0x140)), iVar9 != 0 &&
          ((iVar9 = _finite((double)*(float *)(lVar15 + 0x150)), iVar9 != 0 &&
           (iVar9 = _finite((double)*(float *)(lVar15 + 0x154)), iVar9 != 0)))) &&
         (iVar9 = _finite((double)*(float *)(lVar15 + 0x158)), iVar9 != 0)))) &&
       ((iVar9 = _finite((double)*(float *)(lVar15 + 0x15c)), iVar9 != 0 &&
        (iVar9 = _finite((double)*(float *)(lVar15 + 0x160)), iVar9 != 0)))) {
      _finite((double)*(float *)(lVar15 + 0x164));
    }
    uVar10 = *(undefined8 *)(lVar3 + 0x268);
    puVar17[0x38] = *(undefined8 *)(lVar3 + 0x260);
    puVar17[0x39] = uVar10;
    *(undefined4 *)(puVar17 + 0xe) = local_108;
    *(undefined4 *)((longlong)puVar17 + 0x74) = uStack_104;
    *(undefined4 *)(puVar17 + 0xf) = uStack_100;
    *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_fc;
    puVar17[0xc] = CONCAT44(fStack_114,local_118);
    puVar17[0xd] = CONCAT44(uStack_10c,fStack_110);
    puVar17[10] = CONCAT44(fStack_124,local_128);
    puVar17[0xb] = CONCAT44(uStack_11c,fStack_120);
    puVar17[8] = CONCAT44(fStack_134,local_138);
    puVar17[9] = CONCAT44(uStack_12c,fStack_130);
    if ((((((1e-08 < ABS(local_138)) || (1e-08 < ABS(fStack_134))) || (1e-08 < ABS(fStack_130))) ||
         ((1e-08 < ABS(local_128) || (1e-08 < ABS(fStack_124))))) || (1e-08 < ABS(fStack_120))) ||
       (((1e-08 < ABS(local_118) || (1e-08 < ABS(fStack_114))) || (1e-08 < ABS(fStack_110))))) {
      FUN_144906c86(&local_1b8,&local_138);
    }
    else {
      local_188 = CONCAT44(DAT_14c846284,DAT_14c846280);
      uStack_180 = CONCAT44(DAT_14c84628c,DAT_14c846288);
      local_198 = CONCAT44(DAT_14c846274,DAT_14c846270);
      uStack_190 = CONCAT44(DAT_14c84627c,DAT_14c846278);
      local_1a8 = CONCAT44(DAT_14c846264,DAT_14c846260);
      uStack_1a0 = CONCAT44(DAT_14c84626c,DAT_14c846268);
      local_1b8 = CONCAT44(DAT_14c846254,DAT_14c846250);
      uStack_1b0 = CONCAT44(DAT_14c846258._4_4_,(float)DAT_14c846258);
    }
    puVar17[0x16] = local_188;
    puVar17[0x17] = uStack_180;
    puVar17[0x14] = local_198;
    puVar17[0x15] = uStack_190;
    puVar17[0x12] = local_1a8;
    puVar17[0x13] = uStack_1a0;
    puVar17[0x10] = local_1b8;
    puVar17[0x11] = uStack_1b0;
    local_188 = CONCAT44(uStack_104,local_108);
    uStack_180 = CONCAT44(uStack_fc,uStack_100);
    local_264 = fStack_130;
    fVar23 = fStack_130 * fStack_130 + local_138 * local_138 + fStack_134 * fStack_134;
    fVar20 = fStack_120 * fStack_120 + local_128 * local_128 + fStack_124 * fStack_124;
    fVar22 = fStack_110 * fStack_110 + local_118 * local_118 + fStack_114 * fStack_114;
    uVar19 = -(uint)(0.0 <= fVar23 + -1e-08);
    fVar23 = (float)(~uVar19 & 0x3f800000 | (uint)(1.0 / SQRT(fVar23)) & uVar19);
    uVar19 = -(uint)(0.0 <= fVar20 + -1e-08);
    fVar20 = (float)(~uVar19 & 0x3f800000 | (uint)(1.0 / SQRT(fVar20)) & uVar19);
    uVar19 = -(uint)(0.0 <= fVar22 + -1e-08);
    fVar22 = (float)(~uVar19 & 0x3f800000 | (uint)(1.0 / SQRT(fVar22)) & uVar19);
    local_1b8 = CONCAT44(fStack_134 * fVar23,local_138 * fVar23);
    uStack_1b0 = CONCAT44(uStack_12c,fVar23 * fStack_130);
    local_1a8 = CONCAT44(fStack_124 * fVar20,local_128 * fVar20);
    uStack_1a0 = CONCAT44(uStack_11c,fVar20 * fStack_120);
    local_198 = CONCAT44(fStack_114 * fVar22,local_118 * fVar22);
    uStack_190 = CONCAT44(uStack_10c,fVar22 * fStack_110);
    FUN_144afdc36(&local_1b8,&local_258);
    puVar17[0x18] = local_258;
    puVar17[0x19] = CONCAT44(uStack_24c,uStack_250);
    *(undefined4 *)(puVar17 + 0x2c) = *(undefined4 *)(lVar15 + 0x16c);
    *(undefined4 *)((longlong)puVar17 + 0x164) = *(undefined4 *)(lVar15 + 0x170);
    *(undefined4 *)(puVar17 + 0x20) = local_148;
    *(undefined4 *)((longlong)puVar17 + 0x104) = uStack_144;
    *(undefined4 *)(puVar17 + 0x21) = uStack_140;
    *(undefined4 *)((longlong)puVar17 + 0x10c) = uStack_13c;
    puVar17[0x1e] = CONCAT44(fStack_154,local_158);
    puVar17[0x1f] = CONCAT44(uStack_14c,fStack_150);
    puVar17[0x1c] = CONCAT44(fStack_164,local_168);
    puVar17[0x1d] = CONCAT44(uStack_15c,fStack_160);
    puVar17[0x1a] = CONCAT44(fStack_174,local_178);
    puVar17[0x1b] = CONCAT44(uStack_16c,fStack_170);
    if (((((1e-08 < ABS(local_178)) || (1e-08 < ABS(fStack_174))) || (1e-08 < ABS(fStack_170))) ||
        (((1e-08 < ABS(local_168) || (1e-08 < ABS(fStack_164))) ||
         ((1e-08 < ABS(fStack_160) || ((1e-08 < ABS(local_158) || (1e-08 < ABS(fStack_154)))))))))
       || (1e-08 < ABS(fStack_150))) {
      FUN_144906c86(&local_1b8,&local_178);
    }
    else {
      local_188 = CONCAT44(DAT_14c846284,DAT_14c846280);
      uStack_180 = CONCAT44(DAT_14c84628c,DAT_14c846288);
      local_198 = CONCAT44(DAT_14c846274,DAT_14c846270);
      uStack_190 = CONCAT44(DAT_14c84627c,DAT_14c846278);
      local_1a8 = CONCAT44(DAT_14c846264,DAT_14c846260);
      uStack_1a0 = CONCAT44(DAT_14c84626c,DAT_14c846268);
      local_1b8 = CONCAT44(DAT_14c846254,DAT_14c846250);
      uStack_1b0 = CONCAT44(DAT_14c846258._4_4_,(float)DAT_14c846258);
    }
    puVar17[0x28] = local_188;
    puVar17[0x29] = uStack_180;
    puVar17[0x26] = local_198;
    puVar17[0x27] = uStack_190;
    puVar17[0x24] = local_1a8;
    puVar17[0x25] = uStack_1a0;
    puVar17[0x22] = local_1b8;
    puVar17[0x23] = uStack_1b0;
    local_188 = CONCAT44(uStack_144,local_148);
    uStack_180 = CONCAT44(uStack_13c,uStack_140);
    local_264 = fStack_170;
    fVar20 = fStack_170 * fStack_170 + local_178 * local_178 + fStack_174 * fStack_174;
    fVar23 = fStack_160 * fStack_160 + local_168 * local_168 + fStack_164 * fStack_164;
    fVar21 = fStack_150 * fStack_150 + local_158 * local_158 + fStack_154 * fStack_154;
    uVar19 = -(uint)(0.0 <= fVar20 + -1e-08);
    fVar22 = (float)(~uVar19 & 0x3f800000 | (uint)(1.0 / SQRT(fVar20)) & uVar19);
    uVar19 = -(uint)(0.0 <= fVar23 + -1e-08);
    fVar23 = (float)(~uVar19 & 0x3f800000 | (uint)(1.0 / SQRT(fVar23)) & uVar19);
    uVar19 = -(uint)(0.0 <= fVar21 + -1e-08);
    fVar20 = (float)(~uVar19 & 0x3f800000 | (uint)(1.0 / SQRT(fVar21)) & uVar19);
    local_1b8 = CONCAT44(fStack_174 * fVar22,local_178 * fVar22);
    uStack_1b0 = CONCAT44(uStack_16c,fVar22 * fStack_170);
    local_1a8 = CONCAT44(fStack_164 * fVar23,local_168 * fVar23);
    uStack_1a0 = CONCAT44(uStack_15c,fVar23 * fStack_160);
    local_198 = CONCAT44(fStack_154 * fVar20,local_158 * fVar20);
    uStack_190 = CONCAT44(uStack_14c,fVar20 * fStack_150);
    FUN_144afdc36(&local_1b8,&local_258);
    *(undefined4 *)(puVar17 + 0x2a) = (undefined4)local_258;
    *(undefined4 *)((longlong)puVar17 + 0x154) = local_258._4_4_;
    *(undefined4 *)(puVar17 + 0x2b) = uStack_250;
    *(undefined4 *)((longlong)puVar17 + 0x15c) = uStack_24c;
    *(undefined4 *)(puVar17 + 0x3f) = *(undefined4 *)(lVar15 + 0x128);
    puVar17[0x3e] = *(undefined8 *)(lVar15 + 0x120);
    *(undefined4 *)(puVar17 + 0x41) = *(undefined4 *)(lVar15 + 0x140);
    puVar17[0x40] = *(undefined8 *)(lVar15 + 0x138);
    *(undefined4 *)(puVar17 + 0x43) = *(undefined4 *)(lVar15 + 0x158);
    puVar17[0x42] = *(undefined8 *)(lVar15 + 0x150);
    puVar17[0x44] = *(undefined8 *)(lVar15 + 0x15c);
    *(undefined4 *)(puVar17 + 0x45) = *(undefined4 *)(lVar15 + 0x164);
    *(uint *)(puVar17 + 0x36) = (uint)bVar4;
    *(int *)(puVar17 + 0x2d) = local_25c;
    *(uint *)((longlong)puVar17 + 0x1b4) = uVar16;
    *(uint *)(puVar17 + 0x37) = local_260;
    *(undefined4 *)(puVar17 + 0x2f) = DAT_14c846338;
    puVar17[0x2e] = DAT_14c846330;
    *(undefined4 *)(puVar17 + 0x31) = DAT_14c846338;
    puVar17[0x30] = DAT_14c846330;
    puVar17[0x32] = local_224;
    *(undefined4 *)(puVar17 + 0x33) = local_21c;
    *(undefined4 *)((longlong)puVar17 + 0x1bc) = local_228;
    *puVar17 = local_210;
    puVar17[2] = local_200;
    puVar17[1] = local_218;
    puVar17[0x34] = local_208;
    puVar17[3] = local_1f0;
    puVar17[4] = local_1e8;
    puVar17[0x3a] = local_1d0;
    puVar17[0x3b] = local_1c8;
    puVar17[5] = local_1e0;
    puVar17[6] = local_1d8;
    uVar10 = FUN_1481de36c(lVar3 + 0x10,uVar11);
    puVar17[0x35] = uVar10;
    uVar11 = FUN_1481de2c4(lVar3 + 0x38,uVar11);
  }
  else {
    if (bVar4) {
      *(undefined1 *)(*(longlong *)(lVar15 + 0x178) + 0x270) = 0;
    }
    puVar17[0x38] = 0x100000000;
    puVar17[0x39] = 0x300000002;
    uVar10 = CONCAT44(DAT_14c84628c,DAT_14c846288);
    puVar17[0xe] = CONCAT44(DAT_14c846284,DAT_14c846280);
    puVar17[0xf] = uVar10;
    uVar10 = CONCAT44(DAT_14c84627c,DAT_14c846278);
    puVar17[0xc] = CONCAT44(DAT_14c846274,DAT_14c846270);
    puVar17[0xd] = uVar10;
    uVar10 = CONCAT44(DAT_14c84626c,DAT_14c846268);
    puVar17[10] = CONCAT44(DAT_14c846264,DAT_14c846260);
    puVar17[0xb] = uVar10;
    uVar10 = CONCAT44(DAT_14c846258._4_4_,(float)DAT_14c846258);
    puVar17[8] = CONCAT44(DAT_14c846254,DAT_14c846250);
    puVar17[9] = uVar10;
    uVar10 = CONCAT44(DAT_14c846258._4_4_,(float)DAT_14c846258);
    puVar17[0x10] = CONCAT44(DAT_14c846254,DAT_14c846250);
    puVar17[0x11] = uVar10;
    uVar10 = CONCAT44(DAT_14c84626c,DAT_14c846268);
    puVar17[0x12] = CONCAT44(DAT_14c846264,DAT_14c846260);
    puVar17[0x13] = uVar10;
    uVar10 = CONCAT44(DAT_14c84627c,DAT_14c846278);
    puVar17[0x14] = CONCAT44(DAT_14c846274,DAT_14c846270);
    puVar17[0x15] = uVar10;
    uVar10 = CONCAT44(DAT_14c84628c,DAT_14c846288);
    puVar17[0x16] = CONCAT44(DAT_14c846284,DAT_14c846280);
    puVar17[0x17] = uVar10;
    uVar10 = CONCAT44(DAT_14c84634c,DAT_14c846348);
    puVar17[0x18] = CONCAT44(DAT_14c846344,DAT_14c84633c._4_4_);
    puVar17[0x19] = uVar10;
    puVar17[0x2c] = &DAT_100000001;
    uVar10 = CONCAT44(DAT_14c84628c,DAT_14c846288);
    puVar17[0x20] = CONCAT44(DAT_14c846284,DAT_14c846280);
    puVar17[0x21] = uVar10;
    uVar10 = CONCAT44(DAT_14c84627c,DAT_14c846278);
    puVar17[0x1e] = CONCAT44(DAT_14c846274,DAT_14c846270);
    puVar17[0x1f] = uVar10;
    uVar10 = CONCAT44(DAT_14c84626c,DAT_14c846268);
    puVar17[0x1c] = CONCAT44(DAT_14c846264,DAT_14c846260);
    puVar17[0x1d] = uVar10;
    uVar10 = CONCAT44(DAT_14c846258._4_4_,(float)DAT_14c846258);
    puVar17[0x1a] = CONCAT44(DAT_14c846254,DAT_14c846250);
    puVar17[0x1b] = uVar10;
    uVar10 = CONCAT44(DAT_14c84628c,DAT_14c846288);
    puVar17[0x28] = CONCAT44(DAT_14c846284,DAT_14c846280);
    puVar17[0x29] = uVar10;
    uVar10 = CONCAT44(DAT_14c84627c,DAT_14c846278);
    puVar17[0x26] = CONCAT44(DAT_14c846274,DAT_14c846270);
    puVar17[0x27] = uVar10;
    uVar10 = CONCAT44(DAT_14c84626c,DAT_14c846268);
    puVar17[0x24] = CONCAT44(DAT_14c846264,DAT_14c846260);
    puVar17[0x25] = uVar10;
    uVar10 = CONCAT44(DAT_14c846258._4_4_,(float)DAT_14c846258);
    puVar17[0x22] = CONCAT44(DAT_14c846254,DAT_14c846250);
    puVar17[0x23] = uVar10;
    uVar7 = DAT_14c84634c;
    uVar6 = DAT_14c846348;
    uVar5 = DAT_14c846344;
    *(undefined4 *)(puVar17 + 0x2a) = DAT_14c84633c._4_4_;
    *(undefined4 *)((longlong)puVar17 + 0x154) = uVar5;
    *(undefined4 *)(puVar17 + 0x2b) = uVar6;
    *(undefined4 *)((longlong)puVar17 + 0x15c) = uVar7;
    *(undefined4 *)(puVar17 + 0x3f) = DAT_14c846338;
    puVar17[0x3e] = DAT_14c846330;
    *(undefined4 *)(puVar17 + 0x41) = DAT_14c846338;
    puVar17[0x40] = DAT_14c846330;
    *(undefined4 *)(puVar17 + 0x43) = DAT_14c846338;
    puVar17[0x42] = DAT_14c846330;
    *(undefined4 *)(puVar17 + 0x45) = DAT_14c846338;
    puVar17[0x44] = DAT_14c846330;
    *(undefined4 *)(puVar17 + 0x36) = 0;
    *(undefined4 *)(puVar17 + 0x2d) = 0;
    *(undefined8 *)((longlong)puVar17 + 0x1b4) = 0;
    *(undefined4 *)(puVar17 + 0x2f) = DAT_14c846338;
    puVar17[0x2e] = DAT_14c846330;
    *(undefined4 *)(puVar17 + 0x31) = DAT_14c846338;
    puVar17[0x30] = DAT_14c846330;
    *(undefined4 *)(puVar17 + 0x33) = DAT_14c846338;
    puVar17[0x32] = DAT_14c846330;
    *(undefined4 *)((longlong)puVar17 + 0x1bc) = 0;
    *puVar17 = local_210;
    puVar17[2] = local_200;
    puVar17[1] = local_218;
    puVar17[0x34] = local_208;
    puVar17[3] = local_1f0;
    puVar17[4] = local_1e8;
    puVar17[0x3a] = local_1d0;
    puVar17[0x3b] = local_1c8;
    puVar17[5] = local_1e0;
    puVar17[6] = local_1d8;
    uVar10 = FUN_1481c5f5a(*(undefined8 *)(param_2[1] + 0x30),uVar11,0x1c);
    puVar17[0x35] = uVar10;
    uVar11 = FUN_1481c8850(param_2[1],uVar11,0xd);
  }
  puVar17[0x3c] = uVar11;
  if (local_1c0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_1c0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_1c0)(local_1c0,1);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14444899a FUN_14444899a body=2667 status=ok
// SIG undefined FUN_14444899a(void)

longlong * FUN_14444899a(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0x3ffffffff;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = DAT_14c846330;
  *(undefined4 *)((longlong)param_1 + 0x24) = DAT_14c846338;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  lVar11 = *param_3;
  local_98 = param_3;
  if ((lVar11 != 0) && (lVar13 = *(longlong *)(lVar11 + 0x18), lVar13 != 0)) {
    if (*(longlong *)(lVar11 + 0x3a0) == 0) {
      fVar25 = -1.0;
    }
    else {
      fVar25 = *(float *)(*(longlong *)(lVar11 + 0x3a0) + 0x478);
    }
    uVar8 = (uint)fVar25;
    *(uint *)((longlong)param_1 + 4) = uVar8;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar11 + 0x3a8);
    iVar15 = *(int *)(lVar11 + 0x3ac);
    *(int *)((longlong)param_1 + 0xc) = iVar15;
    lVar11 = *(longlong *)(lVar13 + 0x130);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar11 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(lVar11 + 8);
    dVar2 = *(double *)(lVar11 + 0x38);
    dVar3 = *(double *)(lVar11 + 0x50);
    dVar4 = *(double *)(lVar11 + 0x30);
    dVar5 = *(double *)(lVar11 + 0x48);
    *(float *)((longlong)param_1 + 0x1c) =
         (float)((*(double *)(lVar11 + 0x28) + *(double *)(lVar11 + 0x40)) * 0.5);
    *(float *)(param_1 + 4) = (float)((dVar4 + dVar5) * 0.5);
    *(float *)((longlong)param_1 + 0x24) = (float)((dVar2 + dVar3) * 0.5);
    lVar11 = FUN_14716d181(param_2,lVar13 + 0x50);
    param_1[5] = lVar11;
    lVar11 = FUN_14716d181(param_2,lVar13 + 0x110);
    param_1[8] = lVar11;
    lVar11 = FUN_14716d181(param_2,lVar13 + 0xf0);
    param_1[9] = lVar11;
    lVar11 = *local_98;
    lVar13 = *(longlong *)(lVar11 + 0x20);
    if (lVar13 != 0) {
      lVar11 = FUN_14716d252(param_2,lVar13 + (ulonglong)*(uint *)(lVar13 + 0x188) * 0x20 + 0x50,0);
      param_1[6] = lVar11;
      lVar11 = FUN_14716d181(param_2,lVar13 + (ulonglong)*(uint *)(lVar13 + 0x188) * 0x20 + 0x90);
      param_1[7] = lVar11;
      lVar11 = *local_98;
    }
    plVar1 = *(longlong **)(lVar11 + 0x30);
    lVar13 = 0;
    if (plVar1 == (longlong *)0x0) {
LAB_144449182:
      lVar13 = 0;
      goto LAB_144448a32;
    }
    if ((int)uVar8 < 0) goto LAB_144448a32;
    if ((int)uVar8 < (int)plVar1[1]) {
      uVar14 = (ulonglong)uVar8;
      lVar13 = *(longlong *)(*plVar1 + uVar14 * 8);
      if (*(int *)(lVar13 + 0x50) - 1U < 2) {
        lVar11 = *(longlong *)(**(longlong **)(lVar11 + 0x28) + uVar14 * 8);
        if (lVar11 != 0) {
          lVar13 = FUN_14716d181(param_2,lVar11 + 0xb8);
          param_1[10] = lVar13;
          lVar13 = FUN_14716d181(param_2,lVar11 + 0x98);
          param_1[0xc] = lVar13;
          lVar13 = FUN_14716d181(param_2,lVar11 + 0x78);
          param_1[0xd] = lVar13;
          lVar13 = FUN_14716d181(param_2,lVar11 + 0x120);
          param_1[0xe] = lVar13;
          *(undefined4 *)(param_1 + 3) = *(undefined4 *)(lVar11 + 0xd8);
          lVar13 = *(longlong *)(**(longlong **)(*local_98 + 0x30) + uVar14 * 8);
        }
        lVar11 = DAT_14c9d2450;
        if (lVar13 != 0) {
          lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          iVar7 = *(int *)(lVar17 + 0xc60);
          if (iVar7 == 0x40000002) {
            uVar14 = 0;
          }
          else {
            bVar24 = true;
            if ((DAT_14c86a9f8 == '\x01') && (iVar7 != 2)) {
              if (iVar7 == 1) {
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                bVar24 = DVar9 == DVar10;
              }
              else {
                bVar24 = false;
              }
            }
            uVar14 = (ulonglong)(bVar24 ^ 1);
          }
          lVar16 = lVar13 + 0x58;
          if (0 < *(int *)(lVar11 + uVar14 * 4)) {
            lVar16 = lVar16 + (ulonglong)*(uint *)(lVar13 + 0x120) * 0x20;
          }
          lVar11 = FUN_14716d181(param_2,lVar16);
          param_1[0xb] = lVar11;
          lVar11 = DAT_14c9d2450;
          iVar7 = *(int *)(lVar17 + 0xc60);
          if (iVar7 == 0x40000002) {
            uVar14 = 0;
          }
          else {
            bVar24 = true;
            if ((DAT_14c86a9f8 == '\x01') && (iVar7 != 2)) {
              if (iVar7 == 1) {
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                bVar24 = DVar9 == DVar10;
              }
              else {
                bVar24 = false;
              }
            }
            uVar14 = (ulonglong)(bVar24 ^ 1);
          }
          lVar17 = lVar13 + 0xe0;
          if (0 < *(int *)(lVar11 + uVar14 * 4)) {
            lVar17 = lVar17 + (ulonglong)*(uint *)(lVar13 + 0x120) * 0x20;
          }
          lVar13 = FUN_14716d181(param_2,lVar17);
          param_1[0xf] = lVar13;
          *(bool *)((longlong)param_1 + 1) = iVar15 == 2;
          goto LAB_144448a32;
        }
        goto LAB_144449182;
      }
    }
  }
  lVar13 = 0;
LAB_144448a32:
  local_a0 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  local_a8 = 1;
  lVar11 = FUN_147321632(param_2,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
  cVar6 = *(char *)(lVar11 + 0x68);
  plVar1 = (longlong *)(param_2 + 0x70);
  puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar19 + 9;
  local_90 = plVar1;
  if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
    FUN_140023dd8(plVar1,0x50);
    puVar19 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar12 = puVar19 + 9;
  }
  local_88 = param_2 + 0x198;
  *(undefined8 **)(param_2 + 0x70) = puVar12;
  puVar19[1] = *(undefined8 *)(lVar11 + 8);
  puVar19[2] = 0;
  *(undefined1 *)(puVar19 + 3) = 3;
  *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
  *puVar19 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar19 + 5) = cVar6 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar19 + 0x2c) = 0xffffffff00000000;
  puVar19[7] = 0;
  puVar19[8] = lVar11;
  iVar15 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar15 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar15 + 1U) {
    FUN_1447568fc(local_88,iVar15);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar15 * 8) = puVar19;
  *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  local_a0 = (undefined8 *)0x0;
  local_a8 = 2;
  lVar11 = FUN_14489a2c5(param_2,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
  plVar1 = local_90;
  cVar6 = *(char *)(lVar11 + 0x68);
  puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar20 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
    FUN_140023dd8(local_90,0x50);
    puVar20 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar12 = puVar20 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar12;
  puVar20[1] = *(undefined8 *)(lVar11 + 8);
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 3;
  *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
  *puVar20 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar20 + 5) = cVar6 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar20 + 0x2c) = 0xffffffff00000000;
  puVar20[7] = 0;
  puVar20[8] = lVar11;
  iVar15 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar15 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar15 + 1U) {
    FUN_1447568fc(local_88,iVar15);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar15 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  local_a0 = (undefined8 *)0x0;
  local_a8 = 0;
  lVar11 = FUN_14489a2c5(param_2,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
  plVar1 = local_90;
  puVar23 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar23 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
    FUN_140023dd8(local_90,0x50);
    puVar23 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar12 = puVar23 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar12;
  puVar23[1] = *(undefined8 *)(lVar11 + 8);
  puVar23[2] = 0;
  *(undefined1 *)(puVar23 + 3) = 3;
  *(undefined8 *)((longlong)puVar23 + 0x1c) = 0xffffffffffffffff;
  *puVar23 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar23 + 5) = 1;
  *(undefined8 *)((longlong)puVar23 + 0x2c) = 0xffffffff00000000;
  puVar23[7] = 0;
  puVar23[8] = lVar11;
  iVar15 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar15 + 1U;
  local_80 = lVar13;
  if (*(uint *)(param_2 + 0x1a4) < iVar15 + 1U) {
    FUN_1447568fc(local_88,iVar15);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar15 * 8) = puVar23;
  *(int *)((longlong)puVar23 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  local_a0 = (undefined8 *)0x0;
  local_a8 = 0;
  lVar11 = FUN_14489a2c5(param_2,&DAT_14ca63c48,&DAT_14ca63c78,4);
  plVar1 = local_90;
  puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar22 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
    FUN_140023dd8(local_90);
    puVar22 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar12 = puVar22 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar12;
  puVar22[1] = *(undefined8 *)(lVar11 + 8);
  puVar22[2] = 0;
  *(undefined1 *)(puVar22 + 3) = 3;
  *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
  *puVar22 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar22 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
  puVar22[7] = 0;
  puVar22[8] = lVar11;
  iVar15 = *(int *)(param_2 + 0x1a0);
  uVar8 = iVar15 + 1;
  *(uint *)(param_2 + 0x1a0) = uVar8;
  if (*(uint *)(param_2 + 0x1a4) < uVar8) {
    FUN_1447568fc();
  }
  plVar1 = local_90;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar15 * 8) = puVar22;
  *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  lVar11 = param_1[5];
  if (lVar11 == 0) {
    bVar24 = false;
  }
  else {
    bVar24 = *(int *)(*(longlong *)(*local_98 + 0x18) + 8) != -1;
  }
  *(bool *)param_1 = bVar24;
  if (param_1[6] == 0) {
    bVar24 = false;
  }
  else {
    bVar24 = *(int *)(*(longlong *)(*local_98 + 0x20) + 8) != -1;
  }
  *(bool *)((longlong)param_1 + 2) = bVar24;
  if (lVar11 == 0) {
    param_1[5] = (longlong)puVar20;
  }
  if (param_1[6] == 0) {
    uStack_70 = CONCAT44(uStack_70._4_4_,0x10119);
    uVar8 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar8 = DAT_14ca84e48;
    }
    local_68 = 0;
    iVar15 = uVar8 + (uVar8 == 0);
    local_78 = CONCAT44(iVar15,iVar15);
    uVar18 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar14 = uVar18 + 0x150;
    if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
      FUN_140023dd8(local_90,0x160);
      uVar18 = *plVar1 + 0xfU & 0xfffffffffffffff0;
      uVar14 = uVar18 + 0x150;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar14;
    local_98 = param_1;
    FUN_1456bd266(uVar18,L"Niagara.Hair.DummyUAV",&local_78,0);
    iVar15 = *(int *)(param_2 + 400);
    *(uint *)(param_2 + 400) = iVar15 + 1U;
    if (*(uint *)(param_2 + 0x194) < iVar15 + 1U) {
      FUN_144737178(param_2 + 0x188,iVar15);
    }
    plVar1 = local_90;
    *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar15 * 8) = uVar18;
    *(int *)(uVar18 + 0x7c) = *(int *)(param_2 + 400) + -1;
    cVar6 = *(char *)(uVar18 + 0x68);
    puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar21 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
      FUN_140023dd8(local_90,0x48);
      puVar21 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar12 = puVar21 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar12;
    puVar21[1] = *(undefined8 *)(uVar18 + 8);
    puVar21[2] = 0;
    *(undefined1 *)(puVar21 + 3) = 2;
    *(undefined8 *)((longlong)puVar21 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar21 + 5) = 1;
    *puVar21 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar21 + 6) = cVar6 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar21 + 0x31) = 0;
    puVar21[7] = uVar18;
    iVar15 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar15 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar15 + 1U) {
      FUN_1447568fc(local_88,iVar15);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar15 * 8) = puVar21;
    *(int *)((longlong)puVar21 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    local_98[6] = (longlong)puVar21;
    param_1 = local_98;
  }
  if (param_1[7] == 0) {
    param_1[7] = (longlong)puVar19;
  }
  if (param_1[8] == 0) {
    param_1[8] = (longlong)puVar20;
  }
  if (param_1[10] == 0) {
    param_1[10] = (longlong)puVar23;
  }
  if (param_1[0xb] == 0) {
    param_1[0xb] = (longlong)puVar23;
  }
  if (param_1[0xc] == 0) {
    param_1[0xc] = (longlong)puVar22;
  }
  if (param_1[0xd] == 0) {
    param_1[0xd] = (longlong)puVar22;
  }
  if (param_1[0xe] == 0) {
    param_1[0xe] = (longlong)puVar19;
  }
  if (local_80 == 0) {
    param_1[0xf] = (longlong)puVar19;
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444494ae FUN_1444494ae body=213 status=ok
// SIG undefined FUN_1444494ae(void)

void FUN_1444494ae(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (longlong)param_2 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar1 < 0x7ff1) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)
                        [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,4);
    }
  }
  uVar2 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 144449584 FUN_144449584 body=262 status=ok
// SIG undefined FUN_144449584(void)

void FUN_144449584(longlong param_1,int param_2)

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



// FUNCTION 14444968a FUN_14444968a body=481 status=ok
// SIG undefined FUN_14444968a(void)

void FUN_14444968a(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1490ab9a4(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444986c FUN_14444986c body=232 status=ok
// SIG undefined FUN_14444986c(void)

void FUN_14444986c(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 144449954 FUN_144449954 body=81 status=ok
// SIG undefined FUN_144449954(void)

void FUN_144449954(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490aba47(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1444499ee FUN_1444499ee body=38 status=ok
// SIG undefined FUN_1444499ee(void)

undefined8 FUN_1444499ee(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144449a14 FUN_144449a14 body=1370 status=ok
// SIG undefined FUN_144449a14(void)

void FUN_144449a14(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined5 uStack_a4;
  undefined3 uStack_9f;
  undefined5 uStack_9c;
  undefined8 uStack_97;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_144b1c6fa(param_1 + 0x10,&local_138);
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar9 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar9 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a1fb978;
  puVar9[3] = 0;
  *(int *)(puVar9 + 4) = (int)local_128;
  if ((longlong)(int)local_128 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x24) = 8;
  }
  else {
    puVar4 = &local_138;
    if (uStack_130 != (undefined8 *)0x0) {
      puVar4 = uStack_130;
    }
    FUN_1446fe144(puVar9 + 2,(int)local_128,0);
    puVar7 = (undefined8 *)puVar9[3];
    if ((undefined8 *)puVar9[3] == (undefined8 *)0x0) {
      puVar7 = puVar9 + 2;
    }
    memcpy(puVar7,puVar4,(longlong)(int)local_128);
  }
  puVar9[0xd] = 0;
  puVar4 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
  *(int *)(puVar9 + 0xe) = iStack_d8;
  if ((longlong)iStack_d8 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x74) = 8;
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = &uStack_120;
    }
    FUN_1446fe1b8(puVar9 + 5,iStack_d8,0);
    puVar7 = (undefined8 *)puVar9[0xd];
    if ((undefined8 *)puVar9[0xd] == (undefined8 *)0x0) {
      puVar7 = puVar9 + 5;
    }
    memcpy(puVar7,puVar4,(longlong)iStack_d8 << 3);
    puVar4 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
  }
  *(undefined4 *)(puVar9 + 0xf) = uStack_d4._4_4_;
  *(undefined4 *)((longlong)puVar9 + 0x7c) = (undefined4)uStack_cc;
  *(undefined4 *)(puVar9 + 0x10) = uStack_cc._4_4_;
  *(undefined4 *)((longlong)puVar9 + 0x84) = (undefined4)uStack_c4;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar4);
  }
  if (uStack_130 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x494);
  iVar2 = *(int *)(param_1 + 0x490);
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar9 + 5;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x30);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar9 + 5;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar9 + 3) = 0;
  *(float *)((longlong)puVar9 + 0x1c) = (float)iVar2;
  *(float *)(puVar9 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar9 + 0x24) = 0x3f800000;
  lVar5 = 0;
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = (undefined8 *)0x0;
  uStack_dc = 0;
  iStack_d8 = 0;
  uStack_d4 = 0;
  uStack_cc = 0;
  uStack_c4 = 0;
  local_bc = 0;
  uStack_b4 = 0;
  local_ac = 0;
  uStack_a4 = 0;
  uStack_9f = 0;
  uStack_9c = 0;
  uStack_97 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 1;
  local_68 = 0;
  FUN_144b0e33a(param_2,&local_138);
  local_108 = DAT_14c9d27c8;
  uStack_100 = DAT_14c9c0db0;
  local_f8 = DAT_14c9c0d98;
  local_138 = DAT_14ca94de0;
  if (*(longlong *)(param_1 + 0x470) != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x478) + 8);
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x470) + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar8 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar6,lVar8,1);
    }
  }
  uStack_130 = (undefined8 *)lVar5;
  if (*(longlong *)(param_1 + 0x480) == 0) {
    lVar6 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x488) + 8);
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x480) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar8 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar5,lVar8,1);
    }
  }
  local_e0 = 0;
  local_128 = lVar6;
  lVar5 = FUN_140028f18(param_2);
  if ((lVar5 != 0) && ((local_70 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_118;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_118._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_110;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_110._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_128;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_128._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_120;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_120._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_130._4_4_;
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar9 + 4;
    if ((undefined8 *)param_2[1] < puVar4) {
      FUN_140023dd8(param_2,0x28);
      puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar9 + 4;
    }
    *param_2 = (ulonglong)puVar4;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar9;
    param_2[6] = (ulonglong)(puVar9 + 1);
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_14a37d348;
    puVar9[2] = lVar5;
    *(undefined4 *)(puVar9 + 3) = 0;
    *(undefined1 *)((longlong)puVar9 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x470) == 0) {
    lVar6 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x478) + 8);
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x470) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar8 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar5,lVar8,1);
    }
  }
  FUN_145f95096();
  local_148 = param_1 + 0x1d0;
  FUN_1449cc26b(param_2,lVar6,*(undefined8 *)(param_1 + 0x470),&DAT_14cbfd270);
  if (*(longlong *)(param_1 + 0x480) == 0) {
    lVar6 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x488) + 8);
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x480) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar8 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar5,lVar8,1);
    }
  }
  FUN_145f94c34();
  local_148 = param_1 + 800;
  FUN_1449cc26b(param_2,lVar6,*(undefined8 *)(param_1 + 0x480),&DAT_14cbfd160);
  uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 8);
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar9 + 4;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x28);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar9 + 4;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_14a1fc200;
  *(undefined4 *)(puVar9 + 2) = 0;
  *(undefined4 *)((longlong)puVar9 + 0x14) = uVar3;
  *(undefined4 *)(puVar9 + 3) = 1;
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144449fbe FUN_144449fbe body=552 status=ok
// SIG undefined FUN_144449fbe(void)

void FUN_144449fbe(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  longlong *local_78;
  uint *local_70;
  uint *local_68;
  undefined **local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((param_3[1] != 0 || *param_3 != 0) || param_3[2] != 0) || param_3[3] != 0) {
    FUN_1401abe9c(param_5,&local_58,param_3,param_3 + 4);
    if ((longlong)local_50 != 0) {
      plVar8 = (longlong *)(param_1 + 8);
      lVar10 = 0;
      local_68 = (uint *)(param_2 + 4);
      local_70 = (uint *)(param_2 + 0x10);
      do {
        uVar4 = *(ulonglong *)(local_58 + lVar10);
        if ((((((uVar4 >> 0x20 != 0) && (uVar6 = (uint)uVar4, -1 < (int)uVar6)) &&
              ((int)uVar6 < DAT_14c9647dc)) &&
             ((plVar7 = (longlong *)
                        ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0xd & 0x3fff8))),
              plVar7 != (longlong *)0x0 && ((int)plVar7[2] == (int)(uVar4 >> 0x20))))) &&
            (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
             ((*plVar7 != 0 && (lVar1 = FUN_1490acc68(), lVar1 != 0)))))) &&
           ((*(byte *)(lVar1 + 0x9c) & 1) != 0)) {
          lVar2 = *(longlong *)(lVar1 + 0x668);
          local_78 = plVar8;
          if ((*plVar8 == 0) || (*plVar8 == lVar2)) {
            if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar2);
            }
            *local_78 = lVar2;
          }
          else {
            FUN_14907e5de(lVar1);
          }
          local_60 = &PTR_FUN_14bab0360;
          lVar2 = DAT_14cbfd490;
          if (DAT_14cbfd490 == 0) {
            lVar2 = FUN_14570767c(&DAT_14cbfd490,0);
          }
          lVar3 = FUN_14027385c(param_5 + 0x110);
          if (lVar3 != 0) {
            FUN_14027378e(lVar3,lVar1,lVar2,&local_60);
          }
          plVar8 = local_78;
          *(undefined1 *)(lVar1 + 0x833) = 1;
          uVar9 = *(undefined8 *)(param_2 + 0x18);
          uVar6 = *(uint *)(param_2 + 0x24);
          uVar4 = 0;
          if (SBORROW4(0,uVar6)) {
            puVar5 = local_68;
            if (*(int *)(param_2 + 0x20) == 0) {
              puVar5 = local_70;
            }
            uVar6 = *puVar5;
            uVar4 = (ulonglong)puVar5[1];
          }
          uVar11 = 0;
          if (*(longlong *)(lVar1 + 0x668) != 0) {
            uVar11 = *(undefined4 *)(*(longlong *)(lVar1 + 0x668) + 0x60);
          }
          uVar11 = FUN_14909d01c(local_78,uVar11,(ulonglong)uVar6 | uVar4 << 0x20,uVar9);
          local_88 = 1;
          FUN_14441e628(lVar1,uVar11,1,
                        CONCAT71((int7)((ulonglong)uVar9 >> 8),*(undefined1 *)(param_1 + 0x20)) &
                        0xffffffffffffff01);
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)local_50 * 8 != lVar10);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14444a1f4 FUN_14444a1f4 body=25 status=ok
// SIG undefined FUN_14444a1f4(void)

void FUN_14444a1f4(void)

{
  FUN_14610d5c4();
  FUN_14170c56a(&DAT_14cbfa7f8);
  return;
}



// FUNCTION 14444a234 FUN_14444a234 body=392 status=ok
// SIG undefined FUN_14444a234(void)

void FUN_14444a234(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = *(undefined8 *)(*param_1 + 0x60);
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 2;
  local_64 = 0x800000000;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_90 = &local_80;
  FUN_144760590(param_2,&local_90,0);
  local_70 = *(undefined8 *)(*param_1 + 0xb0);
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 2;
  local_64 = 0x800000000;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_90 = &local_80;
  FUN_144760590(param_2,&local_90,0);
  local_70 = *(undefined8 *)(*param_1 + 0xd8);
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 2;
  local_64 = 0x800000000;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_90 = &local_80;
  FUN_144760590(param_2,&local_90,0);
  local_70 = *(undefined8 *)(*param_1 + 0x100);
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 2;
  local_64 = 0x800000000;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_90 = &local_80;
  FUN_144760590(param_2,&local_90,0);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444a3c8 FUN_14444a3c8 body=12 status=ok
// SIG undefined FUN_14444a3c8(void)

void FUN_14444a3c8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014444a3d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14444a3d4 FUN_14444a3d4 body=29 status=ok
// SIG undefined FUN_14444a3d4(void)

undefined8 FUN_14444a3d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14444a3f2 FUN_14444a3f2 body=282 status=ok
// SIG undefined FUN_14444a3f2(void)

undefined8 * FUN_14444a3f2(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14444a20d);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14444a50c FUN_14444a50c body=451 status=ok
// SIG undefined FUN_14444a50c(void)

void FUN_14444a50c(undefined8 *param_1)

{
  int *piVar1;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  local_70 = *(undefined8 *)(param_1[0x15] + 0x60);
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 2;
  local_64 = 0x800000000;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_90 = &local_80;
  FUN_144760590(&DAT_14ca85100,&local_90,0);
  local_70 = *(undefined8 *)(param_1[0x15] + 0xb0);
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 2;
  local_64 = 0x800000000;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_90 = &local_80;
  FUN_144760590(&DAT_14ca85100,&local_90,0);
  local_70 = *(undefined8 *)(param_1[0x15] + 0xd8);
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 2;
  local_64 = 0x800000000;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_90 = &local_80;
  FUN_144760590(&DAT_14ca85100,&local_90,0);
  local_70 = *(undefined8 *)(param_1[0x15] + 0x100);
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 2;
  local_64 = 0x800000000;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_90 = &local_80;
  FUN_144760590(&DAT_14ca85100,&local_90,0);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444a6d0 FUN_14444a6d0 body=318 status=ok
// SIG undefined FUN_14444a6d0(void)

void FUN_14444a6d0(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = *(undefined8 *)(*param_1 + 0x60);
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 2;
  local_64 = 0x800000000;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_90 = &local_80;
  FUN_144760590(param_2,&local_90,0);
  local_70 = *(undefined8 *)(*param_1 + 0xb0);
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 2;
  local_64 = 0x800000000;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_90 = &local_80;
  FUN_144760590(param_2,&local_90,0);
  local_70 = *(undefined8 *)(*param_1 + 0xd8);
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 2;
  local_64 = 0x800000000;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_90 = &local_80;
  FUN_144760590(param_2,&local_90,0);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444a826 FUN_14444a826 body=29 status=ok
// SIG undefined FUN_14444a826(void)

undefined8 FUN_14444a826(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14444a844 FUN_14444a844 body=282 status=ok
// SIG undefined FUN_14444a844(void)

undefined8 * FUN_14444a844(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14444a20d);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14444a95e FUN_14444a95e body=373 status=ok
// SIG undefined FUN_14444a95e(void)

void FUN_14444a95e(undefined8 *param_1)

{
  int *piVar1;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  local_70 = *(undefined8 *)(param_1[0x15] + 0x60);
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 2;
  local_64 = 0x800000000;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_90 = &local_80;
  FUN_144760590(&DAT_14ca85100,&local_90,0);
  local_70 = *(undefined8 *)(param_1[0x15] + 0xb0);
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 2;
  local_64 = 0x800000000;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_90 = &local_80;
  FUN_144760590(&DAT_14ca85100,&local_90,0);
  local_70 = *(undefined8 *)(param_1[0x15] + 0xd8);
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 2;
  local_64 = 0x800000000;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_90 = &local_80;
  FUN_144760590(&DAT_14ca85100,&local_90,0);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444aad4 FUN_14444aad4 body=481 status=ok
// SIG undefined FUN_14444aad4(void)

void FUN_14444aad4(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1490b5486(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444acb6 FUN_14444acb6 body=232 status=ok
// SIG undefined FUN_14444acb6(void)

void FUN_14444acb6(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14444ad9e FUN_14444ad9e body=81 status=ok
// SIG undefined FUN_14444ad9e(void)

void FUN_14444ad9e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490b5529(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14444adf0 FUN_14444adf0 body=481 status=ok
// SIG undefined FUN_14444adf0(void)

void FUN_14444adf0(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1490b5866(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444afd2 FUN_14444afd2 body=232 status=ok
// SIG undefined FUN_14444afd2(void)

void FUN_14444afd2(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14444b0ba FUN_14444b0ba body=81 status=ok
// SIG undefined FUN_14444b0ba(void)

void FUN_14444b0ba(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490b5909(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14444b10c FUN_14444b10c body=481 status=ok
// SIG undefined FUN_14444b10c(void)

void FUN_14444b10c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1490b60e6(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444b2ee FUN_14444b2ee body=232 status=ok
// SIG undefined FUN_14444b2ee(void)

void FUN_14444b2ee(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14444b3d6 FUN_14444b3d6 body=81 status=ok
// SIG undefined FUN_14444b3d6(void)

void FUN_14444b3d6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490b6189(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14444b428 FUN_14444b428 body=481 status=ok
// SIG undefined FUN_14444b428(void)

void FUN_14444b428(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1490b64c6(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444b60a FUN_14444b60a body=232 status=ok
// SIG undefined FUN_14444b60a(void)

void FUN_14444b60a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14444b6f2 FUN_14444b6f2 body=81 status=ok
// SIG undefined FUN_14444b6f2(void)

void FUN_14444b6f2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490b6569(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14444b744 FUN_14444b744 body=481 status=ok
// SIG undefined FUN_14444b744(void)

void FUN_14444b744(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1490b68a6(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444b926 FUN_14444b926 body=232 status=ok
// SIG undefined FUN_14444b926(void)

void FUN_14444b926(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14444ba0e FUN_14444ba0e body=81 status=ok
// SIG undefined FUN_14444ba0e(void)

void FUN_14444ba0e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490b6949(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14444ba60 FUN_14444ba60 body=481 status=ok
// SIG undefined FUN_14444ba60(void)

void FUN_14444ba60(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1490b6c86(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444bc42 FUN_14444bc42 body=232 status=ok
// SIG undefined FUN_14444bc42(void)

void FUN_14444bc42(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14444bd2a FUN_14444bd2a body=81 status=ok
// SIG undefined FUN_14444bd2a(void)

void FUN_14444bd2a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490b6d29(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14444bd7c FUN_14444bd7c body=481 status=ok
// SIG undefined FUN_14444bd7c(void)

void FUN_14444bd7c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1490b7066(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444bf5e FUN_14444bf5e body=232 status=ok
// SIG undefined FUN_14444bf5e(void)

void FUN_14444bf5e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14444c046 FUN_14444c046 body=81 status=ok
// SIG undefined FUN_14444c046(void)

void FUN_14444c046(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490b7109(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14444c098 FUN_14444c098 body=481 status=ok
// SIG undefined FUN_14444c098(void)

void FUN_14444c098(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1490b7446(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444c27a FUN_14444c27a body=232 status=ok
// SIG undefined FUN_14444c27a(void)

void FUN_14444c27a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14444c362 FUN_14444c362 body=81 status=ok
// SIG undefined FUN_14444c362(void)

void FUN_14444c362(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490b74e9(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14444c3b4 FUN_14444c3b4 body=300 status=ok
// SIG undefined FUN_14444c3b4(void)

undefined8 * FUN_14444c3b4(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14bab2ce0;
  lVar4 = param_1[0x3d];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = param_1[0x3c];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14444c4e0 FUN_14444c4e0 body=859 status=ok
// SIG undefined FUN_14444c4e0(void)

void FUN_14444c4e0(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined8 *puVar3;
  size_t _Size;
  undefined1 *_Src;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  ulonglong local_b0;
  undefined1 local_a8 [4];
  undefined8 local_a4;
  undefined4 local_9c;
  undefined1 local_90;
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  _Size = (size_t)(int)local_b0;
  *(int *)(puVar3 + 4) = (int)local_b0;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar2 = &local_c0;
    }
    FUN_1446fe144(puVar3 + 2,local_b0 & 0xffffffff,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,_Size);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar3 + 5,local_60,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar3 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    local_b0 = *(undefined8 *)(param_1 + 0x1e0);
    local_c0 = 0xffffffffffffffff;
    local_b8 = 0xffffffff;
    local_a8[0] = 2;
    local_a4 = 0x7000000000;
    local_9c = 0;
    local_90 = 0;
    local_c8 = 1;
    local_d0 = &local_c0;
    FUN_144760590(param_2,&local_d0,0);
    local_b0 = *(ulonglong *)(param_1 + 0x1e8);
    local_c0 = 0xffffffffffffffff;
    local_b8 = 0xffffffff;
    local_a8[0] = 2;
    local_a4 = 0x7000000000;
    local_9c = 0;
    local_90 = 0;
    local_c8 = 1;
    local_d0 = &local_c0;
    FUN_144760590(param_2,&local_d0,0);
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1d8);
  local_c0 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145f5fe12();
  FUN_1490b767d(param_2,param_1 + 0x1c0,uVar1,&local_c0);
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    local_b0 = *(undefined8 *)(param_1 + 0x1e0);
    local_c0 = 0xffffffffffffffff;
    local_b8 = 0xffffffff;
    local_a8[0] = 2;
    local_a4 = 0x800000070;
    local_9c = 0;
    local_90 = 0;
    local_c8 = 1;
    local_d0 = &local_c0;
    FUN_144760590(param_2,&local_d0,0);
    local_b0 = *(ulonglong *)(param_1 + 0x1e8);
    local_c0 = 0xffffffffffffffff;
    local_b8 = 0xffffffff;
    local_a8[0] = 2;
    local_a4 = 0x800000070;
    local_9c = 0;
    local_90 = 0;
    local_c8 = 1;
    local_d0 = &local_c0;
    FUN_144760590(param_2,&local_d0,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444c83c FUN_14444c83c body=229 status=ok
// SIG undefined FUN_14444c83c(void)

void FUN_14444c83c(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cbfcc98,param_3);
  return;
}



// FUNCTION 14444c921 FUN_14444c921 body=81 status=ok
// SIG undefined FUN_14444c921(void)

void FUN_14444c921(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490b7715(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14444c972 FUN_14444c972 body=450 status=ok
// SIG undefined FUN_14444c972(void)

void FUN_14444c972(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1490b7c20(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444cb35 FUN_14444cb35 body=81 status=ok
// SIG undefined FUN_14444cb35(void)

void FUN_14444cb35(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490b7d22(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14444cb86 FUN_14444cb86 body=232 status=ok
// SIG undefined FUN_14444cb86(void)

void FUN_14444cb86(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14444cc6e FUN_14444cc6e body=481 status=ok
// SIG undefined FUN_14444cc6e(void)

void FUN_14444cc6e(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1490b8040(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444ce50 FUN_14444ce50 body=481 status=ok
// SIG undefined FUN_14444ce50(void)

void FUN_14444ce50(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1490b82aa(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444d032 FUN_14444d032 body=232 status=ok
// SIG undefined FUN_14444d032(void)

void FUN_14444d032(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14444d11a FUN_14444d11a body=81 status=ok
// SIG undefined FUN_14444d11a(void)

void FUN_14444d11a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490b834d(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14444d16c FUN_14444d16c body=481 status=ok
// SIG undefined FUN_14444d16c(void)

void FUN_14444d16c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1490b883a(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444d34e FUN_14444d34e body=232 status=ok
// SIG undefined FUN_14444d34e(void)

void FUN_14444d34e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14444d436 FUN_14444d436 body=81 status=ok
// SIG undefined FUN_14444d436(void)

void FUN_14444d436(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490b88dd(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14444d488 FUN_14444d488 body=38 status=ok
// SIG undefined FUN_14444d488(void)

undefined8 FUN_14444d488(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14444d4ae FUN_14444d4ae body=2657 status=ok
// SIG undefined FUN_14444d4ae(void)

void FUN_14444d4ae(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint *puVar2;
  char **ppcVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  char cVar18;
  undefined7 *_Src;
  ulonglong uVar19;
  undefined4 uVar20;
  undefined8 *puVar21;
  size_t _Size;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_158 [43];
  byte local_12d;
  uint local_12c;
  longlong local_128;
  longlong local_120;
  char *local_118;
  undefined4 local_110;
  uint uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  uint uStack_b8;
  undefined2 uStack_b4;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  uint uStack_a8;
  uint uStack_a4;
  undefined7 uStack_a0;
  undefined8 uStack_99;
  undefined1 local_91;
  undefined7 uStack_90;
  undefined1 uStack_89;
  int iStack_88;
  undefined3 uStack_84;
  undefined5 uStack_81;
  undefined7 *local_70;
  int local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_144b1c6fa(param_1 + 0x10,&local_c8);
  puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar21 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar21 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar21;
  param_2[6] = (ulonglong)(puVar21 + 1);
  puVar21[1] = 0;
  *puVar21 = &PTR_FUN_14a1fb978;
  puVar21[3] = 0;
  _Size = (size_t)(int)uStack_b8;
  plVar17 = (longlong *)CONCAT26(uStack_ba,CONCAT24(uStack_bc,uStack_c0));
  *(uint *)(puVar21 + 4) = uStack_b8;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar21 + 0x24) = 8;
  }
  else {
    plVar16 = &local_c8;
    if (plVar17 != (longlong *)0x0) {
      plVar16 = plVar17;
    }
    FUN_1446fe144(puVar21 + 2,uStack_b8,0);
    puVar13 = (undefined8 *)puVar21[3];
    if ((undefined8 *)puVar21[3] == (undefined8 *)0x0) {
      puVar13 = puVar21 + 2;
    }
    memcpy(puVar13,plVar16,_Size);
  }
  puVar21[0xd] = 0;
  *(int *)(puVar21 + 0xe) = local_68;
  if ((longlong)local_68 == 0) {
    *(undefined4 *)((longlong)puVar21 + 0x74) = 8;
  }
  else {
    _Src = local_70;
    if (local_70 == (undefined7 *)0x0) {
      _Src = &uStack_b0;
    }
    FUN_1446fe1b8(puVar21 + 5,local_68,0);
    puVar13 = (undefined8 *)puVar21[0xd];
    if ((undefined8 *)puVar21[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar21 + 5;
    }
    memcpy(puVar13,_Src,(longlong)local_68 << 3);
  }
  *(undefined4 *)(puVar21 + 0xf) = local_60;
  *(undefined4 *)((longlong)puVar21 + 0x7c) = uStack_5c;
  *(undefined4 *)(puVar21 + 0x10) = uStack_58;
  *(undefined4 *)((longlong)puVar21 + 0x84) = uStack_54;
  if (local_70 != (undefined7 *)0x0) {
    FUN_1400020a8(local_70);
  }
  if (CONCAT26(uStack_ba,CONCAT24(uStack_bc,uStack_c0)) != 0) {
    FUN_1400020a8();
  }
  uVar11 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  uVar6 = *(uint *)((longlong)param_2 + 0x17c);
  if (uVar6 != uVar11) {
    *(uint *)((longlong)param_2 + 0x17c) = uVar11;
    puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar21 + 3;
    if ((undefined8 *)param_2[1] < puVar13) {
      FUN_140023dd8(param_2,0x20);
      puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar21 + 3;
    }
    *param_2 = (ulonglong)puVar13;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar21;
    param_2[6] = (ulonglong)(puVar21 + 1);
    uVar20 = *(undefined4 *)((longlong)param_2 + 0x17c);
    puVar21[1] = 0;
    *puVar21 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar21 + 2) = uVar20;
  }
  lVar14 = *(longlong *)(param_1 + 0x1b8);
  lVar8 = *(longlong *)(lVar14 + 0x78);
  if ((*(char *)(lVar8 + 0x149) == '\x01') && (*(int *)(lVar14 + 0x94) == *(int *)(param_1 + 0x1c8))
     ) {
    if (*(char *)(param_1 + 0x1c4) == '\x01') {
      FUN_14444df10(param_2,lVar8 + 0x90,DAT_14c764a1c < 1);
    }
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + 0x28);
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
      lVar14 = *(longlong *)(param_1 + 0x1b8);
    }
    uVar19 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
    if ((*(char *)(param_1 + 0x1c5) == '\0') &&
       (local_120 = *(longlong *)(*(longlong *)(*(longlong *)(lVar14 + 0x78) + 0x70) + 0x28),
       local_120 != 0)) {
      LOCK();
      *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
      UNLOCK();
      lVar14 = *(longlong *)(param_1 + 0x1b8);
      uVar19 = 0;
    }
    else {
      local_120 = 0;
    }
    iVar7 = *(int *)(param_1 + 0x1c8);
    *(int *)(lVar14 + 0x94) = iVar7;
    cVar18 = *(char *)(param_1 + 0x1c5);
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x78);
    uVar11 = *(uint *)(lVar14 + 0x144);
    uStack_b8 = 0;
    uStack_b4 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_ba = 0;
    local_b2 = 1;
    local_b1 = 0;
    uStack_b0 = 0;
    uStack_a9 = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_99 = 0;
    local_91 = 0;
    uStack_90 = 0;
    uStack_89 = 0;
    iStack_88 = 0;
    uStack_84 = 0;
    uStack_81 = 0;
    local_12c = (uint)uVar19;
    uVar12 = *(uint *)(lVar14 + 0x140);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cbfd7a0) {
      local_128 = CONCAT44(local_128._4_4_,*(uint *)(lVar14 + 0x140));
      FUN_144b3d300(&DAT_14cbfd7a0);
      uVar19 = (ulonglong)local_12c;
      uVar12 = (uint)local_128;
      if (DAT_14cbfd7a0 == -1) {
        local_118 = "AS_HairStrands";
        local_110 = 0xe;
        uStack_10c = uStack_10c & 0xffffff00;
        uVar12 = FUN_14001a6c0(&local_118,1);
        DAT_14cbfd798 = (ulonglong)uVar12;
        _Init_thread_footer(&DAT_14cbfd7a0);
        uVar19 = (ulonglong)local_12c;
        uVar12 = (uint)local_128;
      }
    }
    lVar22 = local_c8;
    iVar1 = DAT_14cbfd7a4 + 1;
    uStack_90 = (undefined7)DAT_14cbfd798;
    uStack_89 = (undefined1)(DAT_14cbfd798 >> 0x38);
    iStack_88 = DAT_14cbfd7a4;
    DAT_14cbfd7a4 = iVar1;
    if (cVar18 == '\0') {
      lVar10 = local_c8;
      if (local_c8 != local_120) {
        if ((char)uVar19 == '\0') {
          LOCK();
          *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
          UNLOCK();
        }
        lVar10 = local_120;
        if (local_c8 != 0) {
          LOCK();
          puVar2 = (uint *)(local_c8 + 8);
          uVar4 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          lVar10 = local_120;
          if ((uVar4 & 0x3fffffff) == 1) {
            puVar2 = (uint *)(local_c8 + 8);
            LOCK();
            uVar4 = *puVar2;
            *puVar2 = *puVar2 | 0x40000000;
            UNLOCK();
            lVar10 = local_120;
            if ((uVar4 >> 0x1e & 1) == 0) {
              local_128 = CONCAT44(local_128._4_4_,uVar12);
              local_12d = *(byte *)(local_c8 + 0xd);
              local_c8 = local_120;
              plVar15 = (longlong *)FUN_14001cc68(0x10,8);
              plVar15[1] = lVar22;
              plVar17 = DAT_14ca843c0;
              plVar16 = DAT_14ca843c8;
              uVar12 = (uint)local_128;
              lVar10 = local_c8;
              if ((local_12d & 2) == 0) {
                do {
                  *plVar15 = (longlong)plVar17;
                  LOCK();
                  bVar23 = plVar17 != DAT_14ca843c0;
                  plVar16 = plVar15;
                  if (bVar23) {
                    plVar17 = DAT_14ca843c0;
                    plVar16 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar16;
                  UNLOCK();
                } while (bVar23);
              }
              else {
                do {
                  *plVar15 = (longlong)plVar16;
                  LOCK();
                  bVar23 = plVar16 != DAT_14ca843c8;
                  plVar17 = plVar15;
                  if (bVar23) {
                    plVar16 = DAT_14ca843c8;
                    plVar17 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar17;
                  UNLOCK();
                } while (bVar23);
              }
            }
          }
        }
      }
      local_c8 = lVar10;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_b8 = uVar11 / 3;
    }
    else {
      uStack_bc = 1;
      uStack_b8 = (uVar12 >> 3) * iVar7;
    }
    uVar4 = uStack_a8;
    uStack_ba = 0;
    uStack_b4 = 1;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    if (cVar18 == '\0') {
      uVar11 = uVar11 / 3;
      uVar20 = 0x10;
    }
    else {
      uVar20 = 0x20;
      uVar11 = uStack_b8;
    }
    lVar22 = (longlong)(int)uStack_a8;
    uStack_a8 = uStack_a8 + 1;
    if (uStack_a4 < uStack_a8) {
      local_128 = lVar14;
      FUN_1471b2628(&uStack_b0,uVar4);
      lVar14 = local_128;
    }
    plVar17 = (longlong *)(CONCAT17(uStack_a9,uStack_b0) + lVar22 * 0x28);
    *plVar17 = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    plVar17[1] = 4;
    *(undefined4 *)(plVar17 + 2) = uVar20;
    *(uint *)((longlong)plVar17 + 0x14) = uVar12;
    *(undefined4 *)(plVar17 + 3) = 0;
    *(uint *)((longlong)plVar17 + 0x1c) = uVar11;
    *(undefined2 *)(plVar17 + 4) = 0x100;
    *(undefined1 *)((longlong)plVar17 + 0x22) = 1;
    FUN_147377468(&local_118,&local_c8);
    ppcVar3 = (char **)(lVar14 + 0xd0);
    if (ppcVar3 != &local_118) {
      pcVar9 = *ppcVar3;
      *ppcVar3 = local_118;
      local_118 = (char *)0x0;
      if (pcVar9 != (char *)0x0) {
        LOCK();
        puVar2 = (uint *)(pcVar9 + 8);
        uVar11 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar11 & 0x3fffffff) == 1) {
          puVar2 = (uint *)(pcVar9 + 8);
          LOCK();
          uVar11 = *puVar2;
          *puVar2 = *puVar2 | 0x40000000;
          UNLOCK();
          if ((uVar11 >> 0x1e & 1) == 0) {
            bVar5 = pcVar9[0xd];
            plVar15 = (longlong *)FUN_14001cc68(0x10,8);
            plVar15[1] = (longlong)pcVar9;
            plVar17 = DAT_14ca843c0;
            plVar16 = DAT_14ca843c8;
            if ((bVar5 & 2) == 0) {
              do {
                *plVar15 = (longlong)plVar17;
                LOCK();
                bVar23 = plVar17 != DAT_14ca843c0;
                plVar16 = plVar15;
                if (bVar23) {
                  plVar17 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar16;
                UNLOCK();
              } while (bVar23);
            }
            else {
              do {
                *plVar15 = (longlong)plVar16;
                LOCK();
                bVar23 = plVar16 != DAT_14ca843c8;
                plVar17 = plVar15;
                if (bVar23) {
                  plVar16 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar23);
            }
          }
        }
      }
    }
    *(undefined4 *)(lVar14 + 0xd8) = local_110;
    *(uint *)(lVar14 + 0xdc) = uStack_10c;
    *(undefined4 *)(lVar14 + 0xe0) = uStack_108;
    *(undefined4 *)(lVar14 + 0xe4) = uStack_104;
    FUN_140520998(lVar14 + 0xe8,&local_100);
    *(undefined4 *)(lVar14 + 0xf8) = local_f0;
    *(undefined4 *)(lVar14 + 0xfc) = uStack_ec;
    *(undefined4 *)(lVar14 + 0x100) = uStack_e8;
    *(undefined4 *)(lVar14 + 0x104) = uStack_e4;
    *(undefined4 *)(lVar14 + 0x108) = local_e0;
    *(undefined4 *)(lVar14 + 0x10c) = uStack_dc;
    *(undefined4 *)(lVar14 + 0x110) = uStack_d8;
    *(undefined4 *)(lVar14 + 0x114) = uStack_d4;
    *(undefined4 *)(lVar14 + 0x118) = local_d0;
    FUN_14005bcf4(local_100,local_f8);
    if (local_100 != 0) {
      FUN_1400020a8();
    }
    pcVar9 = local_118;
    if (local_118 != (char *)0x0) {
      LOCK();
      puVar2 = (uint *)(local_118 + 8);
      uVar11 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar11 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_118 + 8);
        LOCK();
        uVar11 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar11 >> 0x1e & 1) == 0) {
          bVar5 = local_118[0xd];
          plVar15 = (longlong *)FUN_14001cc68(0x10,8);
          plVar15[1] = (longlong)pcVar9;
          plVar17 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar15 = (longlong)plVar17;
              LOCK();
              bVar23 = plVar17 != DAT_14ca843c0;
              plVar16 = plVar15;
              if (bVar23) {
                plVar17 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar23);
          }
          else {
            do {
              *plVar15 = (longlong)plVar16;
              LOCK();
              bVar23 = plVar16 != DAT_14ca843c8;
              plVar17 = plVar15;
              if (bVar23) {
                plVar16 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar23);
          }
        }
      }
    }
    FUN_147428186(lVar14 + 0x90,param_2,0);
    if (lVar8 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar8 + 8);
      uVar11 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar11 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar8 + 8);
        LOCK();
        uVar11 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar11 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)(lVar8 + 0xd);
          plVar15 = (longlong *)FUN_14001cc68(0x10,8);
          plVar15[1] = lVar8;
          plVar17 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar15 = (longlong)plVar17;
              LOCK();
              bVar23 = plVar17 != DAT_14ca843c0;
              plVar16 = plVar15;
              if (bVar23) {
                plVar17 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar23);
          }
          else {
            do {
              *plVar15 = (longlong)plVar16;
              LOCK();
              bVar23 = plVar16 != DAT_14ca843c8;
              plVar17 = plVar15;
              if (bVar23) {
                plVar16 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar23);
          }
        }
      }
    }
    FUN_14005bcf4(CONCAT17(uStack_a9,uStack_b0),uStack_a8);
    if (CONCAT17(uStack_a9,uStack_b0) != 0) {
      FUN_1400020a8();
    }
    lVar14 = local_c8;
    cVar18 = (char)local_12c;
    if (local_c8 != 0) {
      LOCK();
      puVar2 = (uint *)(local_c8 + 8);
      uVar11 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar11 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_c8 + 8);
        LOCK();
        uVar11 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar11 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)(local_c8 + 0xd);
          plVar15 = (longlong *)FUN_14001cc68(0x10,8);
          plVar15[1] = lVar14;
          cVar18 = (char)local_12c;
          plVar17 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar15 = (longlong)plVar17;
              LOCK();
              bVar23 = plVar17 != DAT_14ca843c0;
              plVar16 = plVar15;
              if (bVar23) {
                plVar17 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar23);
          }
          else {
            do {
              *plVar15 = (longlong)plVar16;
              LOCK();
              bVar23 = plVar16 != DAT_14ca843c8;
              plVar17 = plVar15;
              if (bVar23) {
                plVar16 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar23);
          }
        }
      }
    }
    lVar14 = local_120;
    if (cVar18 == '\0') {
      LOCK();
      puVar2 = (uint *)(local_120 + 8);
      uVar11 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar11 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_120 + 8);
        LOCK();
        uVar11 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar11 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)(local_120 + 0xd);
          plVar15 = (longlong *)FUN_14001cc68(0x10,8);
          plVar15[1] = lVar14;
          plVar17 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar15 = (longlong)plVar17;
              LOCK();
              bVar23 = plVar17 != DAT_14ca843c0;
              plVar16 = plVar15;
              if (bVar23) {
                plVar17 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar23);
          }
          else {
            do {
              *plVar15 = (longlong)plVar16;
              LOCK();
              bVar23 = plVar16 != DAT_14ca843c8;
              plVar17 = plVar15;
              if (bVar23) {
                plVar16 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar23);
          }
        }
      }
    }
    if (lVar8 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar8 + 8);
      uVar11 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar11 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar8 + 8);
        LOCK();
        uVar11 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar11 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)(lVar8 + 0xd);
          plVar15 = (longlong *)FUN_14001cc68(0x10,8);
          plVar15[1] = lVar8;
          plVar17 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar15 = (longlong)plVar17;
              LOCK();
              bVar23 = plVar17 != DAT_14ca843c0;
              plVar16 = plVar15;
              if (bVar23) {
                plVar17 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar23);
          }
          else {
            do {
              *plVar15 = (longlong)plVar16;
              LOCK();
              bVar23 = plVar16 != DAT_14ca843c8;
              plVar17 = plVar15;
              if (bVar23) {
                plVar16 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar23);
          }
        }
      }
    }
  }
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x78) + 0x149) = 1;
  if (*(uint *)((longlong)param_2 + 0x17c) != uVar6) {
    *(uint *)((longlong)param_2 + 0x17c) = uVar6;
    puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar21 + 3;
    if ((undefined8 *)param_2[1] < puVar13) {
      FUN_140023dd8(param_2,0x20);
      puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar21 + 3;
    }
    *param_2 = (ulonglong)puVar13;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar21;
    param_2[6] = (ulonglong)(puVar21 + 1);
    uVar20 = *(undefined4 *)((longlong)param_2 + 0x17c);
    puVar21[1] = 0;
    *puVar21 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar21 + 2) = uVar20;
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14444df10 FUN_14444df10 body=248 status=ok
// SIG undefined FUN_14444df10(void)

void FUN_14444df10(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined4 local_40;
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  lVar4 = *(longlong *)(param_2 + 0x90);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    local_38 = lVar4;
  }
  local_28 = *(undefined8 *)(param_2 + 0x58);
  local_20 = *(undefined4 *)(param_2 + 0x60);
  local_48 = &local_38;
  local_40 = 1;
  local_30 = param_3;
  FUN_147412722();
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14444e016 FUN_14444e016 body=38 status=ok
// SIG undefined FUN_14444e016(void)

undefined8 FUN_14444e016(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14444e03c FUN_14444e03c body=2470 status=ok
// SIG undefined FUN_14444e03c(void)

void FUN_14444e03c(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  char **ppcVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined7 *_Src;
  undefined8 *puVar19;
  size_t _Size;
  longlong *plVar20;
  bool bVar21;
  undefined1 auStack_148 [40];
  longlong local_120;
  char *local_118;
  undefined4 local_110;
  uint uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  longlong local_c8;
  undefined6 uStack_c0;
  undefined2 uStack_ba;
  int local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  uint uStack_a8;
  uint uStack_a4;
  undefined7 uStack_a0;
  undefined8 uStack_99;
  undefined1 local_91;
  undefined7 uStack_90;
  undefined1 uStack_89;
  int iStack_88;
  undefined3 uStack_84;
  undefined5 uStack_81;
  undefined7 *local_70;
  int local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_144b1c6fa(param_1 + 0x10,&local_c8);
  puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar19 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar19 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar19;
  param_2[6] = (ulonglong)(puVar19 + 1);
  puVar19[1] = 0;
  *puVar19 = &PTR_FUN_14a1fb978;
  puVar19[3] = 0;
  _Size = (size_t)local_b8;
  *(int *)(puVar19 + 4) = local_b8;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar19 + 0x24) = 8;
  }
  else {
    plVar20 = &local_c8;
    if ((longlong *)CONCAT26(uStack_ba,uStack_c0) != (longlong *)0x0) {
      plVar20 = (longlong *)CONCAT26(uStack_ba,uStack_c0);
    }
    FUN_1446fe144(puVar19 + 2,local_b8,0);
    puVar13 = (undefined8 *)puVar19[3];
    if ((undefined8 *)puVar19[3] == (undefined8 *)0x0) {
      puVar13 = puVar19 + 2;
    }
    memcpy(puVar13,plVar20,_Size);
  }
  puVar19[0xd] = 0;
  *(int *)(puVar19 + 0xe) = local_68;
  if ((longlong)local_68 == 0) {
    *(undefined4 *)((longlong)puVar19 + 0x74) = 8;
  }
  else {
    _Src = local_70;
    if (local_70 == (undefined7 *)0x0) {
      _Src = &uStack_b0;
    }
    FUN_1446fe1b8(puVar19 + 5,local_68,0);
    puVar13 = (undefined8 *)puVar19[0xd];
    if ((undefined8 *)puVar19[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar19 + 5;
    }
    memcpy(puVar13,_Src,(longlong)local_68 << 3);
  }
  *(undefined4 *)(puVar19 + 0xf) = local_60;
  *(undefined4 *)((longlong)puVar19 + 0x7c) = uStack_5c;
  *(undefined4 *)(puVar19 + 0x10) = uStack_58;
  *(undefined4 *)((longlong)puVar19 + 0x84) = uStack_54;
  if (local_70 != (undefined7 *)0x0) {
    FUN_1400020a8(local_70);
  }
  if (CONCAT26(uStack_ba,uStack_c0) != 0) {
    FUN_1400020a8();
  }
  uVar12 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  uVar4 = *(uint *)((longlong)param_2 + 0x17c);
  if (uVar4 != uVar12) {
    *(uint *)((longlong)param_2 + 0x17c) = uVar12;
    puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar19 + 3;
    if ((undefined8 *)param_2[1] < puVar13) {
      FUN_140023dd8(param_2,0x20);
      puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar19 + 3;
    }
    *param_2 = (ulonglong)puVar13;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar19;
    param_2[6] = (ulonglong)(puVar19 + 1);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x17c);
    puVar19[1] = 0;
    *puVar19 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar19 + 2) = uVar5;
  }
  lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x110);
  lVar14 = (longlong)*(int *)(param_1 + 0x1c0) * 0x68;
  lVar7 = *(longlong *)(lVar18 + 0x18 + lVar14);
  if (*(char *)(lVar7 + 0x149) == '\0') {
    plVar20 = (longlong *)(lVar18 + lVar14);
    lVar18 = *plVar20;
    lVar14 = plVar20[1];
    local_b8 = 0;
    local_b4 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    uStack_ba = 0;
    local_b2 = 1;
    local_b1 = 0;
    uStack_b0 = 0;
    uStack_a9 = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_99 = 0;
    local_91 = 0;
    uStack_90 = 0;
    uStack_89 = 0;
    iStack_88 = 0;
    uStack_84 = 0;
    uStack_81 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbfd838) && (FUN_144b3d300(&DAT_14cbfd838), DAT_14cbfd838 == -1)) {
      local_118 = "AS_HairCards";
      local_110 = 0xc;
      uStack_10c = uStack_10c & 0xffffff00;
      uVar12 = FUN_14001a6c0(&local_118,1);
      DAT_14cbfd830 = (ulonglong)uVar12;
      _Init_thread_footer(&DAT_14cbfd838);
    }
    lVar10 = local_c8;
    iVar6 = DAT_14cbfd83c + 1;
    uStack_90 = (undefined7)DAT_14cbfd830;
    uStack_89 = (undefined1)(DAT_14cbfd830 >> 0x38);
    iStack_88 = DAT_14cbfd83c;
    lVar8 = *(longlong *)(lVar18 + 0x88);
    DAT_14cbfd83c = iVar6;
    lVar11 = local_c8;
    if (local_c8 != lVar8) {
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      lVar11 = lVar8;
      if (local_c8 != 0) {
        LOCK();
        puVar1 = (uint *)(local_c8 + 8);
        uVar12 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar12 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_c8 + 8);
          LOCK();
          uVar12 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar12 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_c8 + 0xd);
            local_c8 = lVar8;
            plVar15 = (longlong *)FUN_14001cc68(0x10,8);
            plVar15[1] = lVar10;
            plVar17 = DAT_14ca843c0;
            plVar16 = DAT_14ca843c8;
            lVar11 = local_c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar15 = (longlong)plVar17;
                LOCK();
                bVar21 = plVar17 != DAT_14ca843c0;
                plVar16 = plVar15;
                if (bVar21) {
                  plVar17 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar16;
                UNLOCK();
              } while (bVar21);
            }
            else {
              do {
                *plVar15 = (longlong)plVar16;
                LOCK();
                bVar21 = plVar16 != DAT_14ca843c8;
                plVar17 = plVar15;
                if (bVar21) {
                  plVar16 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar21);
            }
          }
        }
      }
    }
    local_c8 = lVar11;
    uStack_c0 = 0;
    uStack_ba = 0;
    local_b8 = *(int *)(*(longlong *)(lVar18 + 0x140) + 0x68) / 3;
    local_b4 = 0x101;
    lVar8 = *(longlong *)(lVar18 + 0x60);
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    local_120 = lVar8;
    if ((lVar14 != 0) &&
       (lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x50) + 0x28), lVar8 != lVar14)) {
      if (lVar14 != 0) {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
      }
      local_120 = lVar14;
      if (lVar8 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar8 + 8);
        uVar12 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar12 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar8 + 8);
          LOCK();
          uVar12 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar12 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar8 + 0xd);
            plVar15 = (longlong *)FUN_14001cc68(0x10,8);
            plVar15[1] = lVar8;
            plVar17 = DAT_14ca843c0;
            plVar16 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar15 = (longlong)plVar17;
                LOCK();
                bVar21 = plVar17 != DAT_14ca843c0;
                plVar16 = plVar15;
                if (bVar21) {
                  plVar17 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar16;
                UNLOCK();
              } while (bVar21);
            }
            else {
              do {
                *plVar15 = (longlong)plVar16;
                LOCK();
                bVar21 = plVar16 != DAT_14ca843c8;
                plVar17 = plVar15;
                if (bVar21) {
                  plVar16 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar21);
            }
          }
        }
      }
    }
    uVar12 = uStack_a8;
    if (local_120 != 0) {
      LOCK();
      *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
      UNLOCK();
    }
    iVar6 = *(int *)(*(longlong *)(lVar18 + 0x140) + 0x68);
    uVar5 = *(undefined4 *)(*(longlong *)(lVar18 + 0x140) + 0x28);
    lVar18 = (longlong)(int)uStack_a8;
    uStack_a8 = uStack_a8 + 1;
    if (uStack_a4 < uStack_a8) {
      FUN_1471b2628(&uStack_b0,uVar12);
    }
    lVar14 = local_120;
    plVar17 = (longlong *)(CONCAT17(uStack_a9,uStack_b0) + lVar18 * 0x28);
    *plVar17 = local_120;
    if (local_120 != 0) {
      LOCK();
      *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
      UNLOCK();
    }
    plVar17[1] = 4;
    *(undefined4 *)(plVar17 + 2) = 0x10;
    *(undefined4 *)((longlong)plVar17 + 0x14) = uVar5;
    *(undefined4 *)(plVar17 + 3) = 0;
    *(int *)((longlong)plVar17 + 0x1c) = iVar6 / 3;
    *(undefined2 *)(plVar17 + 4) = 0x100;
    *(undefined1 *)((longlong)plVar17 + 0x22) = 1;
    FUN_147377468(&local_118,&local_c8);
    ppcVar2 = (char **)(lVar7 + 0xd0);
    if (ppcVar2 != &local_118) {
      pcVar9 = *ppcVar2;
      *ppcVar2 = local_118;
      local_118 = (char *)0x0;
      if (pcVar9 != (char *)0x0) {
        LOCK();
        puVar1 = (uint *)(pcVar9 + 8);
        uVar12 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar12 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(pcVar9 + 8);
          LOCK();
          uVar12 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar12 >> 0x1e & 1) == 0) {
            bVar3 = pcVar9[0xd];
            plVar15 = (longlong *)FUN_14001cc68(0x10,8);
            plVar15[1] = (longlong)pcVar9;
            plVar17 = DAT_14ca843c0;
            plVar16 = DAT_14ca843c8;
            lVar14 = local_120;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar15 = (longlong)plVar17;
                LOCK();
                bVar21 = plVar17 != DAT_14ca843c0;
                plVar16 = plVar15;
                if (bVar21) {
                  plVar17 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar16;
                UNLOCK();
              } while (bVar21);
            }
            else {
              do {
                *plVar15 = (longlong)plVar16;
                LOCK();
                bVar21 = plVar16 != DAT_14ca843c8;
                plVar17 = plVar15;
                if (bVar21) {
                  plVar16 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar21);
            }
          }
        }
      }
    }
    *(undefined4 *)(lVar7 + 0xd8) = local_110;
    *(uint *)(lVar7 + 0xdc) = uStack_10c;
    *(undefined4 *)(lVar7 + 0xe0) = uStack_108;
    *(undefined4 *)(lVar7 + 0xe4) = uStack_104;
    FUN_140520998(lVar7 + 0xe8,&local_100);
    *(undefined4 *)(lVar7 + 0xf8) = local_f0;
    *(undefined4 *)(lVar7 + 0xfc) = uStack_ec;
    *(undefined4 *)(lVar7 + 0x100) = uStack_e8;
    *(undefined4 *)(lVar7 + 0x104) = uStack_e4;
    *(undefined4 *)(lVar7 + 0x108) = local_e0;
    *(undefined4 *)(lVar7 + 0x10c) = uStack_dc;
    *(undefined4 *)(lVar7 + 0x110) = uStack_d8;
    *(undefined4 *)(lVar7 + 0x114) = uStack_d4;
    *(undefined4 *)(lVar7 + 0x118) = local_d0;
    FUN_14005bcf4(local_100,local_f8);
    if (local_100 != 0) {
      FUN_1400020a8();
    }
    pcVar9 = local_118;
    if (local_118 != (char *)0x0) {
      LOCK();
      puVar1 = (uint *)(local_118 + 8);
      uVar12 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar12 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_118 + 8);
        LOCK();
        uVar12 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar12 >> 0x1e & 1) == 0) {
          bVar3 = local_118[0xd];
          plVar15 = (longlong *)FUN_14001cc68(0x10,8);
          plVar15[1] = (longlong)pcVar9;
          plVar17 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          lVar14 = local_120;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar15 = (longlong)plVar17;
              LOCK();
              bVar21 = plVar17 != DAT_14ca843c0;
              plVar16 = plVar15;
              if (bVar21) {
                plVar17 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar21);
          }
          else {
            do {
              *plVar15 = (longlong)plVar16;
              LOCK();
              bVar21 = plVar16 != DAT_14ca843c8;
              plVar17 = plVar15;
              if (bVar21) {
                plVar16 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar21);
          }
        }
      }
    }
    FUN_147428186(lVar7 + 0x90,param_2,0);
    if (lVar14 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar12 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      puVar1 = (uint *)(lVar14 + 8);
      if ((uVar12 & 0x3fffffff) == 1) {
        LOCK();
        uVar12 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar12 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar14 + 0xd);
          plVar15 = (longlong *)FUN_14001cc68(0x10,8);
          plVar15[1] = lVar14;
          plVar17 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          lVar14 = local_120;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar15 = (longlong)plVar17;
              LOCK();
              bVar21 = plVar17 != DAT_14ca843c0;
              plVar16 = plVar15;
              if (bVar21) {
                plVar17 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar21);
          }
          else {
            do {
              *plVar15 = (longlong)plVar16;
              LOCK();
              bVar21 = plVar16 != DAT_14ca843c8;
              plVar17 = plVar15;
              if (bVar21) {
                plVar16 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar21);
          }
        }
      }
      LOCK();
      uVar12 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar12 & 0x3fffffff) == 1) {
        LOCK();
        uVar12 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar12 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar14 + 0xd);
          plVar15 = (longlong *)FUN_14001cc68(0x10,8);
          plVar15[1] = lVar14;
          plVar17 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar15 = (longlong)plVar17;
              LOCK();
              bVar21 = plVar17 != DAT_14ca843c0;
              plVar16 = plVar15;
              if (bVar21) {
                plVar17 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar21);
          }
          else {
            do {
              *plVar15 = (longlong)plVar16;
              LOCK();
              bVar21 = plVar16 != DAT_14ca843c8;
              plVar17 = plVar15;
              if (bVar21) {
                plVar16 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar21);
          }
        }
      }
    }
    FUN_14005bcf4(CONCAT17(uStack_a9,uStack_b0),uStack_a8);
    if (CONCAT17(uStack_a9,uStack_b0) != 0) {
      FUN_1400020a8();
    }
    lVar18 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      puVar1 = (uint *)(local_c8 + 8);
      uVar12 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar12 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_c8 + 8);
        LOCK();
        uVar12 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar12 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_c8 + 0xd);
          plVar15 = (longlong *)FUN_14001cc68(0x10,8);
          plVar15[1] = lVar18;
          plVar17 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar15 = (longlong)plVar17;
              LOCK();
              bVar21 = plVar17 != DAT_14ca843c0;
              plVar16 = plVar15;
              if (bVar21) {
                plVar17 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar21);
          }
          else {
            do {
              *plVar15 = (longlong)plVar16;
              LOCK();
              bVar21 = plVar16 != DAT_14ca843c8;
              plVar17 = plVar15;
              if (bVar21) {
                plVar16 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar21);
          }
        }
      }
    }
    *(undefined1 *)(plVar20[3] + 0x149) = 1;
  }
  else if (*(char *)(param_1 + 0x1c4) == '\x01') {
    FUN_14444df10(param_2,lVar7 + 0x90,1);
  }
  if (*(uint *)((longlong)param_2 + 0x17c) != uVar4) {
    *(uint *)((longlong)param_2 + 0x17c) = uVar4;
    puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar19 + 3;
    if ((undefined8 *)param_2[1] < puVar13) {
      FUN_140023dd8(param_2,0x20);
      puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar19 + 3;
    }
    *param_2 = (ulonglong)puVar13;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar19;
    param_2[6] = (ulonglong)(puVar19 + 1);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x17c);
    puVar19[1] = 0;
    *puVar19 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar19 + 2) = uVar5;
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14444e9f0 FUN_14444e9f0 body=38 status=ok
// SIG undefined FUN_14444e9f0(void)

undefined8 FUN_14444e9f0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14444ea16 FUN_14444ea16 body=2490 status=ok
// SIG undefined FUN_14444ea16(void)

void FUN_14444ea16(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  char **ppcVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined7 *_Src;
  undefined8 *puVar19;
  size_t _Size;
  longlong *plVar20;
  bool bVar21;
  undefined1 auStack_148 [40];
  longlong local_120;
  char *local_118;
  undefined4 local_110;
  uint uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  longlong local_c8;
  undefined6 uStack_c0;
  undefined2 uStack_ba;
  int local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  uint uStack_a8;
  uint uStack_a4;
  undefined7 uStack_a0;
  undefined8 uStack_99;
  undefined1 local_91;
  undefined7 uStack_90;
  undefined1 uStack_89;
  int iStack_88;
  undefined3 uStack_84;
  undefined5 uStack_81;
  undefined7 *local_70;
  int local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_144b1c6fa(param_1 + 0x10,&local_c8);
  puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar19 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar19 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar19;
  param_2[6] = (ulonglong)(puVar19 + 1);
  puVar19[1] = 0;
  *puVar19 = &PTR_FUN_14a1fb978;
  puVar19[3] = 0;
  _Size = (size_t)local_b8;
  *(int *)(puVar19 + 4) = local_b8;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar19 + 0x24) = 8;
  }
  else {
    plVar20 = &local_c8;
    if ((longlong *)CONCAT26(uStack_ba,uStack_c0) != (longlong *)0x0) {
      plVar20 = (longlong *)CONCAT26(uStack_ba,uStack_c0);
    }
    FUN_1446fe144(puVar19 + 2,local_b8,0);
    puVar13 = (undefined8 *)puVar19[3];
    if ((undefined8 *)puVar19[3] == (undefined8 *)0x0) {
      puVar13 = puVar19 + 2;
    }
    memcpy(puVar13,plVar20,_Size);
  }
  puVar19[0xd] = 0;
  *(int *)(puVar19 + 0xe) = local_68;
  if ((longlong)local_68 == 0) {
    *(undefined4 *)((longlong)puVar19 + 0x74) = 8;
  }
  else {
    _Src = local_70;
    if (local_70 == (undefined7 *)0x0) {
      _Src = &uStack_b0;
    }
    FUN_1446fe1b8(puVar19 + 5,local_68,0);
    puVar13 = (undefined8 *)puVar19[0xd];
    if ((undefined8 *)puVar19[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar19 + 5;
    }
    memcpy(puVar13,_Src,(longlong)local_68 << 3);
  }
  *(undefined4 *)(puVar19 + 0xf) = local_60;
  *(undefined4 *)((longlong)puVar19 + 0x7c) = uStack_5c;
  *(undefined4 *)(puVar19 + 0x10) = uStack_58;
  *(undefined4 *)((longlong)puVar19 + 0x84) = uStack_54;
  if (local_70 != (undefined7 *)0x0) {
    FUN_1400020a8(local_70);
  }
  if (CONCAT26(uStack_ba,uStack_c0) != 0) {
    FUN_1400020a8();
  }
  uVar12 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  uVar4 = *(uint *)((longlong)param_2 + 0x17c);
  if (uVar4 != uVar12) {
    *(uint *)((longlong)param_2 + 0x17c) = uVar12;
    puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar19 + 3;
    if ((undefined8 *)param_2[1] < puVar13) {
      FUN_140023dd8(param_2,0x20);
      puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar19 + 3;
    }
    *param_2 = (ulonglong)puVar13;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar19;
    param_2[6] = (ulonglong)(puVar19 + 1);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x17c);
    puVar19[1] = 0;
    *puVar19 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar19 + 2) = uVar5;
  }
  lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x120);
  lVar14 = (longlong)*(int *)(param_1 + 0x1c0) * 0x30;
  lVar7 = *(longlong *)(lVar18 + 0x10 + lVar14);
  if (*(char *)(lVar7 + 0x149) == '\0') {
    plVar20 = (longlong *)(lVar18 + lVar14);
    lVar18 = *plVar20;
    lVar14 = plVar20[1];
    local_b8 = 0;
    local_b4 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    uStack_ba = 0;
    local_b2 = 1;
    local_b1 = 0;
    uStack_b0 = 0;
    uStack_a9 = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_99 = 0;
    local_91 = 0;
    uStack_90 = 0;
    uStack_89 = 0;
    iStack_88 = 0;
    uStack_84 = 0;
    uStack_81 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbfd8d0) && (FUN_144b3d300(&DAT_14cbfd8d0), DAT_14cbfd8d0 == -1)) {
      local_118 = "AS_HairMeshes";
      local_110 = 0xd;
      uStack_10c = uStack_10c & 0xffffff00;
      uVar12 = FUN_14001a6c0(&local_118,1);
      DAT_14cbfd8c8 = (ulonglong)uVar12;
      _Init_thread_footer(&DAT_14cbfd8d0);
    }
    lVar10 = local_c8;
    iVar6 = DAT_14cbfd8d4 + 1;
    uStack_90 = (undefined7)DAT_14cbfd8c8;
    uStack_89 = (undefined1)(DAT_14cbfd8c8 >> 0x38);
    iStack_88 = DAT_14cbfd8d4;
    lVar8 = *(longlong *)(lVar18 + 0x88);
    DAT_14cbfd8d4 = iVar6;
    lVar11 = local_c8;
    if (local_c8 != lVar8) {
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      lVar11 = lVar8;
      if (local_c8 != 0) {
        LOCK();
        puVar1 = (uint *)(local_c8 + 8);
        uVar12 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar12 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_c8 + 8);
          LOCK();
          uVar12 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar12 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_c8 + 0xd);
            local_c8 = lVar8;
            plVar15 = (longlong *)FUN_14001cc68(0x10,8);
            plVar15[1] = lVar10;
            plVar17 = DAT_14ca843c0;
            plVar16 = DAT_14ca843c8;
            lVar11 = local_c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar15 = (longlong)plVar17;
                LOCK();
                bVar21 = plVar17 != DAT_14ca843c0;
                plVar16 = plVar15;
                if (bVar21) {
                  plVar17 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar16;
                UNLOCK();
              } while (bVar21);
            }
            else {
              do {
                *plVar15 = (longlong)plVar16;
                LOCK();
                bVar21 = plVar16 != DAT_14ca843c8;
                plVar17 = plVar15;
                if (bVar21) {
                  plVar16 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar21);
            }
          }
        }
      }
    }
    local_c8 = lVar11;
    uStack_c0 = 0;
    uStack_ba = 0;
    local_b8 = *(int *)(*(longlong *)(lVar18 + 0x118) + 0x38) / 3;
    local_b4 = 0x101;
    lVar8 = *(longlong *)(lVar18 + 0x60);
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    local_120 = lVar8;
    if ((lVar14 != 0) &&
       (lVar14 = *(longlong *)
                  (*(longlong *)(lVar14 + 0x50 + (ulonglong)*(uint *)(lVar14 + 0x9c) * 0x20) + 0x28)
       , lVar8 != lVar14)) {
      if (lVar14 != 0) {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
      }
      local_120 = lVar14;
      if (lVar8 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar8 + 8);
        uVar12 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar12 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar8 + 8);
          LOCK();
          uVar12 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar12 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar8 + 0xd);
            plVar15 = (longlong *)FUN_14001cc68(0x10,8);
            plVar15[1] = lVar8;
            plVar17 = DAT_14ca843c0;
            plVar16 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar15 = (longlong)plVar17;
                LOCK();
                bVar21 = plVar17 != DAT_14ca843c0;
                plVar16 = plVar15;
                if (bVar21) {
                  plVar17 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar16;
                UNLOCK();
              } while (bVar21);
            }
            else {
              do {
                *plVar15 = (longlong)plVar16;
                LOCK();
                bVar21 = plVar16 != DAT_14ca843c8;
                plVar17 = plVar15;
                if (bVar21) {
                  plVar16 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar21);
            }
          }
        }
      }
    }
    uVar12 = uStack_a8;
    if (local_120 != 0) {
      LOCK();
      *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
      UNLOCK();
    }
    iVar6 = *(int *)(*(longlong *)(lVar18 + 0x118) + 0x38);
    uVar5 = *(undefined4 *)(*(longlong *)(lVar18 + 0x118) + 8);
    lVar18 = (longlong)(int)uStack_a8;
    uStack_a8 = uStack_a8 + 1;
    if (uStack_a4 < uStack_a8) {
      FUN_1471b2628(&uStack_b0,uVar12);
    }
    lVar14 = local_120;
    plVar17 = (longlong *)(CONCAT17(uStack_a9,uStack_b0) + lVar18 * 0x28);
    *plVar17 = local_120;
    if (local_120 != 0) {
      LOCK();
      *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
      UNLOCK();
    }
    plVar17[1] = 4;
    *(undefined4 *)(plVar17 + 2) = 0x10;
    *(undefined4 *)((longlong)plVar17 + 0x14) = uVar5;
    *(undefined4 *)(plVar17 + 3) = 0;
    *(int *)((longlong)plVar17 + 0x1c) = iVar6 / 3;
    *(undefined2 *)(plVar17 + 4) = 0x100;
    *(undefined1 *)((longlong)plVar17 + 0x22) = 1;
    FUN_147377468(&local_118,&local_c8);
    ppcVar2 = (char **)(lVar7 + 0xd0);
    if (ppcVar2 != &local_118) {
      pcVar9 = *ppcVar2;
      *ppcVar2 = local_118;
      local_118 = (char *)0x0;
      if (pcVar9 != (char *)0x0) {
        LOCK();
        puVar1 = (uint *)(pcVar9 + 8);
        uVar12 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar12 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(pcVar9 + 8);
          LOCK();
          uVar12 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar12 >> 0x1e & 1) == 0) {
            bVar3 = pcVar9[0xd];
            plVar15 = (longlong *)FUN_14001cc68(0x10,8);
            plVar15[1] = (longlong)pcVar9;
            plVar17 = DAT_14ca843c0;
            plVar16 = DAT_14ca843c8;
            lVar14 = local_120;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar15 = (longlong)plVar17;
                LOCK();
                bVar21 = plVar17 != DAT_14ca843c0;
                plVar16 = plVar15;
                if (bVar21) {
                  plVar17 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar16;
                UNLOCK();
              } while (bVar21);
            }
            else {
              do {
                *plVar15 = (longlong)plVar16;
                LOCK();
                bVar21 = plVar16 != DAT_14ca843c8;
                plVar17 = plVar15;
                if (bVar21) {
                  plVar16 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar21);
            }
          }
        }
      }
    }
    *(undefined4 *)(lVar7 + 0xd8) = local_110;
    *(uint *)(lVar7 + 0xdc) = uStack_10c;
    *(undefined4 *)(lVar7 + 0xe0) = uStack_108;
    *(undefined4 *)(lVar7 + 0xe4) = uStack_104;
    FUN_140520998(lVar7 + 0xe8,&local_100);
    *(undefined4 *)(lVar7 + 0xf8) = local_f0;
    *(undefined4 *)(lVar7 + 0xfc) = uStack_ec;
    *(undefined4 *)(lVar7 + 0x100) = uStack_e8;
    *(undefined4 *)(lVar7 + 0x104) = uStack_e4;
    *(undefined4 *)(lVar7 + 0x108) = local_e0;
    *(undefined4 *)(lVar7 + 0x10c) = uStack_dc;
    *(undefined4 *)(lVar7 + 0x110) = uStack_d8;
    *(undefined4 *)(lVar7 + 0x114) = uStack_d4;
    *(undefined4 *)(lVar7 + 0x118) = local_d0;
    FUN_14005bcf4(local_100,local_f8);
    if (local_100 != 0) {
      FUN_1400020a8();
    }
    pcVar9 = local_118;
    if (local_118 != (char *)0x0) {
      LOCK();
      puVar1 = (uint *)(local_118 + 8);
      uVar12 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar12 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_118 + 8);
        LOCK();
        uVar12 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar12 >> 0x1e & 1) == 0) {
          bVar3 = local_118[0xd];
          plVar15 = (longlong *)FUN_14001cc68(0x10,8);
          plVar15[1] = (longlong)pcVar9;
          plVar17 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          lVar14 = local_120;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar15 = (longlong)plVar17;
              LOCK();
              bVar21 = plVar17 != DAT_14ca843c0;
              plVar16 = plVar15;
              if (bVar21) {
                plVar17 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar21);
          }
          else {
            do {
              *plVar15 = (longlong)plVar16;
              LOCK();
              bVar21 = plVar16 != DAT_14ca843c8;
              plVar17 = plVar15;
              if (bVar21) {
                plVar16 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar21);
          }
        }
      }
    }
    FUN_147428186(lVar7 + 0x90,param_2,0);
    if (lVar14 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar12 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      puVar1 = (uint *)(lVar14 + 8);
      if ((uVar12 & 0x3fffffff) == 1) {
        LOCK();
        uVar12 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar12 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar14 + 0xd);
          plVar15 = (longlong *)FUN_14001cc68(0x10,8);
          plVar15[1] = lVar14;
          plVar17 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          lVar14 = local_120;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar15 = (longlong)plVar17;
              LOCK();
              bVar21 = plVar17 != DAT_14ca843c0;
              plVar16 = plVar15;
              if (bVar21) {
                plVar17 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar21);
          }
          else {
            do {
              *plVar15 = (longlong)plVar16;
              LOCK();
              bVar21 = plVar16 != DAT_14ca843c8;
              plVar17 = plVar15;
              if (bVar21) {
                plVar16 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar21);
          }
        }
      }
      LOCK();
      uVar12 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar12 & 0x3fffffff) == 1) {
        LOCK();
        uVar12 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar12 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar14 + 0xd);
          plVar15 = (longlong *)FUN_14001cc68(0x10,8);
          plVar15[1] = lVar14;
          plVar17 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar15 = (longlong)plVar17;
              LOCK();
              bVar21 = plVar17 != DAT_14ca843c0;
              plVar16 = plVar15;
              if (bVar21) {
                plVar17 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar21);
          }
          else {
            do {
              *plVar15 = (longlong)plVar16;
              LOCK();
              bVar21 = plVar16 != DAT_14ca843c8;
              plVar17 = plVar15;
              if (bVar21) {
                plVar16 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar21);
          }
        }
      }
    }
    FUN_14005bcf4(CONCAT17(uStack_a9,uStack_b0),uStack_a8);
    if (CONCAT17(uStack_a9,uStack_b0) != 0) {
      FUN_1400020a8();
    }
    lVar18 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      puVar1 = (uint *)(local_c8 + 8);
      uVar12 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar12 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_c8 + 8);
        LOCK();
        uVar12 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar12 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_c8 + 0xd);
          plVar15 = (longlong *)FUN_14001cc68(0x10,8);
          plVar15[1] = lVar18;
          plVar17 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar15 = (longlong)plVar17;
              LOCK();
              bVar21 = plVar17 != DAT_14ca843c0;
              plVar16 = plVar15;
              if (bVar21) {
                plVar17 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar21);
          }
          else {
            do {
              *plVar15 = (longlong)plVar16;
              LOCK();
              bVar21 = plVar16 != DAT_14ca843c8;
              plVar17 = plVar15;
              if (bVar21) {
                plVar16 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar21);
          }
        }
      }
    }
    *(undefined1 *)(plVar20[2] + 0x149) = 1;
  }
  else if (*(char *)(param_1 + 0x1c4) == '\x01') {
    FUN_14444df10(param_2,lVar7 + 0x90,1);
  }
  if (*(uint *)((longlong)param_2 + 0x17c) != uVar4) {
    *(uint *)((longlong)param_2 + 0x17c) = uVar4;
    puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar19 + 3;
    if ((undefined8 *)param_2[1] < puVar13) {
      FUN_140023dd8(param_2,0x20);
      puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar19 + 3;
    }
    *param_2 = (ulonglong)puVar13;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar19;
    param_2[6] = (ulonglong)(puVar19 + 1);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x17c);
    puVar19[1] = 0;
    *puVar19 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar19 + 2) = uVar5;
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14444f3d2 FUN_14444f3d2 body=68 status=ok
// SIG undefined FUN_14444f3d2(void)

undefined8 * FUN_14444f3d2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bab2eb0;
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14444f416 FUN_14444f416 body=610 status=ok
// SIG undefined FUN_14444f416(void)

void FUN_14444f416(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 *_Src;
  int *_Src_00;
  undefined1 auStack_e8 [32];
  int *local_c8;
  int local_c0 [4];
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar6 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar6;
  param_2[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a1fb978;
  puVar6[3] = 0;
  *(int *)(puVar6 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x24) = 8;
  }
  else {
    _Src_00 = (int *)CONCAT44(local_c0[3],local_c0[2]);
    if ((int *)CONCAT44(local_c0[3],local_c0[2]) == (int *)0x0) {
      _Src_00 = local_c0;
    }
    FUN_1446fe144(puVar6 + 2,local_b0,0);
    puVar5 = (undefined8 *)puVar6[3];
    if ((undefined8 *)puVar6[3] == (undefined8 *)0x0) {
      puVar5 = puVar6 + 2;
    }
    memcpy(puVar5,_Src_00,(longlong)local_b0);
  }
  puVar6[0xd] = 0;
  *(int *)(puVar6 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar6 + 5,local_60,0);
    puVar5 = (undefined8 *)puVar6[0xd];
    if ((undefined8 *)puVar6[0xd] == (undefined8 *)0x0) {
      puVar5 = puVar6 + 5;
    }
    memcpy(puVar5,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar6 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar6 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar6 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar6 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(local_c0[3],local_c0[2]) != 0) {
    FUN_1400020a8();
  }
  iVar2 = *(int *)(param_1 + 0x1e0);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1d8);
    lVar7 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 4) = *(undefined4 *)(lVar4 + 4 + lVar7);
      *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0xc) = *(undefined4 *)(lVar4 + 8 + lVar7);
      *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x20) = *(undefined8 *)(lVar4 + 0x10 + lVar7)
      ;
      if (*(char *)(param_1 + 0x1e8) == '\x01') {
        *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x28) =
             *(undefined8 *)(lVar4 + 0x18 + lVar7);
      }
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x1c0) + 4);
      iVar1 = iVar3 + 0x3f;
      local_c0[0] = iVar3 + 0x7e;
      if (-1 < iVar1) {
        local_c0[0] = iVar1;
      }
      local_c0[0] = local_c0[0] >> 6;
      local_c0[1] = 1;
      local_c0[2] = 1;
      local_c8 = local_c0;
      FUN_1490b906a(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8));
      lVar7 = lVar7 + 0x20;
    } while ((longlong)iVar2 * 0x20 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444f679 FUN_14444f679 body=232 status=ok
// SIG undefined FUN_14444f679(void)

void FUN_14444f679(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14444f761 FUN_14444f761 body=81 status=ok
// SIG undefined FUN_14444f761(void)

void FUN_14444f761(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490b910d(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14444f7b2 FUN_14444f7b2 body=481 status=ok
// SIG undefined FUN_14444f7b2(void)

void FUN_14444f7b2(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1490b94fc(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444f994 FUN_14444f994 body=232 status=ok
// SIG undefined FUN_14444f994(void)

void FUN_14444f994(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14444fa7c FUN_14444fa7c body=81 status=ok
// SIG undefined FUN_14444fa7c(void)

void FUN_14444fa7c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490b959f(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14444face FUN_14444face body=304 status=ok
// SIG undefined FUN_14444face(void)

void FUN_14444face(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_2 * 4;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar3 + 0xf;
      if (param_2 < 0x1ffd) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x3fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar2) {
            uVar5 = (ulonglong)bVar2;
          }
          uVar6 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14444fb2f;
            lVar1 = uVar5 + 1 + uVar6;
            uVar6 = uVar6 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar4 & 0x3fffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
    }
  }
LAB_14444fb2f:
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 >> 2)) {
    uVar4 = uVar3 >> 2 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,4,4);
  }
  return;
}



// FUNCTION 14444fbfe FUN_14444fbfe body=346 status=ok
// SIG undefined FUN_14444fbfe(void)

void FUN_14444fbfe(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
  uVar5 = lVar4 * 4;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14444fc90;
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
LAB_14444fc90:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 14444fd58 FUN_14444fd58 body=481 status=ok
// SIG undefined FUN_14444fd58(void)

void FUN_14444fd58(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1490b98dc(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14444ff3a FUN_14444ff3a body=232 status=ok
// SIG undefined FUN_14444ff3a(void)

void FUN_14444ff3a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 144450022 FUN_144450022 body=81 status=ok
// SIG undefined FUN_144450022(void)

void FUN_144450022(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490b997f(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144450074 FUN_144450074 body=481 status=ok
// SIG undefined FUN_144450074(void)

void FUN_144450074(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1490b9cbc(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144450256 FUN_144450256 body=232 status=ok
// SIG undefined FUN_144450256(void)

void FUN_144450256(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14445033e FUN_14445033e body=81 status=ok
// SIG undefined FUN_14445033e(void)

void FUN_14445033e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490b9d5f(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144450390 FUN_144450390 body=38 status=ok
// SIG undefined FUN_144450390(void)

undefined8 FUN_144450390(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444503b6 FUN_1444503b6 body=510 status=ok
// SIG undefined FUN_1444503b6(void)

void FUN_1444503b6(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int *_Src;
  undefined1 *_Src_00;
  undefined8 *puVar4;
  int iVar5;
  undefined1 auStack_d8 [32];
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar4 + 0x11;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x90);
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar4 + 0x11;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar4;
  param_2[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_14a1fb978;
  puVar4[3] = 0;
  *(int *)(puVar4 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x24) = 8;
  }
  else {
    _Src = &local_b8;
    if ((int *)CONCAT44(uStack_ac,local_b0) != (int *)0x0) {
      _Src = (int *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar4 + 2,local_a8,0);
    puVar3 = (undefined8 *)puVar4[3];
    if ((undefined8 *)puVar4[3] == (undefined8 *)0x0) {
      puVar3 = puVar4 + 2;
    }
    memcpy(puVar3,_Src,(longlong)local_a8);
  }
  puVar4[0xd] = 0;
  *(int *)(puVar4 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x74) = 8;
  }
  else {
    _Src_00 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src_00 = local_a0;
    }
    FUN_1446fe1b8(puVar4 + 5,local_58,0);
    puVar3 = (undefined8 *)puVar4[0xd];
    if ((undefined8 *)puVar4[0xd] == (undefined8 *)0x0) {
      puVar3 = puVar4 + 5;
    }
    memcpy(puVar3,_Src_00,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar4 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar4 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar4 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar4 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1d0) + 7;
  iVar5 = *(int *)(param_1 + 0x1d0) + 0xe;
  if (-1 < iVar1) {
    iVar5 = iVar1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145f3bc5c();
  local_b0 = 1;
  local_b8 = iVar5 >> 3;
  local_b4 = iVar5 >> 3;
  FUN_1490b9ef3(param_2,param_1 + 0x1c0,uVar2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444505b5 FUN_1444505b5 body=229 status=ok
// SIG undefined FUN_1444505b5(void)

void FUN_1444505b5(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cbfd2f8,param_3);
  return;
}



// FUNCTION 14445069a FUN_14445069a body=81 status=ok
// SIG undefined FUN_14445069a(void)

void FUN_14445069a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490b9f8b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1444506ec FUN_1444506ec body=481 status=ok
// SIG undefined FUN_1444506ec(void)

void FUN_1444506ec(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1490ba2c8(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444508ce FUN_1444508ce body=232 status=ok
// SIG undefined FUN_1444508ce(void)

void FUN_1444508ce(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 1444509b6 FUN_1444509b6 body=81 status=ok
// SIG undefined FUN_1444509b6(void)

void FUN_1444509b6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490ba36b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144450a08 FUN_144450a08 body=3775 status=ok
// SIG undefined FUN_144450a08(void)

void FUN_144450a08(longlong param_1,longlong param_2)

{
  uint *puVar1;
  char **ppcVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  size_t sVar9;
  longlong *plVar10;
  undefined8 uVar11;
  char *pcVar12;
  char **ppcVar13;
  char **ppcVar14;
  bool bVar15;
  undefined1 auStack_d8 [32];
  ulonglong *local_b8;
  ulonglong *local_b0;
  char *local_a0;
  undefined4 local_98;
  char *local_90;
  ulonglong local_88 [2];
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  byte local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  ulonglong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbfda98) && (FUN_144b3d300(&DAT_14cbfda98), DAT_14cbfda98 == -1)) {
    DAT_14cbfda88 = 0x800000014bab2fd0;
    local_88[0] = CONCAT44(local_88[0]._4_4_,0x23);
    DAT_14cbfda90 = FUN_14577453c();
    DAT_14cbfda94 = '\x01';
    _Init_thread_footer(&DAT_14cbfda98);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FDummyCulledDispatchVertexIdsBuffer";
  local_50 = 0;
  uStack_48 = 0;
  if ((longlong)DAT_14cbfda88 < 0) {
    local_a0 = (char *)(DAT_14cbfda88 & 0x7fffffffffffffff);
    if (DAT_14cbfda94 == '\x01') {
      ppcVar14 = &local_a0;
      FUN_1446f470e(ppcVar14,local_a0,1);
    }
    else {
      if (local_a0 == (char *)0x0) {
        local_98 = 0;
      }
      else {
        sVar9 = strlen(local_a0);
        local_98 = (undefined4)sVar9;
      }
      ppcVar14 = &local_90;
      FUN_14001c09c(ppcVar14,&local_a0,1);
    }
    DAT_14cbfda88 = (ulonglong)*(uint *)ppcVar14;
    local_50 = CONCAT44(DAT_14cbfda90,*(uint *)ppcVar14);
  }
  else {
    local_50 = DAT_14cbfda88 & 0xffffffff | (ulonglong)DAT_14cbfda90 << 0x20;
  }
  uVar11 = 0x4101;
  if ((local_60 & 1) != 0) {
    uVar11 = 0x100000;
  }
  local_a0 = (char *)(ulonglong)(((byte)~local_60 & 1) << 4);
  local_98 = (undefined4)uVar11;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,CONCAT71((int7)((ulonglong)uVar11 >> 8),1));
    local_b0 = local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_a0);
    local_90[0x18] = 'x';
    local_90[0x19] = '\0';
    local_90[0x1a] = '\0';
    local_90[0x1b] = '\0';
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_a0);
    local_90[0x18] = 'x';
    local_90[0x19] = '\0';
    local_90[0x1a] = '\0';
    local_90[0x1b] = '\0';
  }
  ppcVar14 = (char **)(param_1 + 0x10);
  if (ppcVar14 == &local_90) {
LAB_144450c09:
    pcVar12 = local_90;
    if (local_90 != (char *)0x0) {
      LOCK();
      puVar1 = (uint *)(local_90 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_90 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = local_90[0xd];
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = (longlong)pcVar12;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar10;
              LOCK();
              bVar15 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar15) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar15 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar6;
              if (bVar15) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
    }
  }
  else {
    pcVar12 = *ppcVar14;
    *ppcVar14 = local_90;
    local_90 = (char *)0x0;
    if (pcVar12 != (char *)0x0) {
      LOCK();
      puVar1 = (uint *)(pcVar12 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(pcVar12 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = pcVar12[0xd];
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = (longlong)pcVar12;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar10;
              LOCK();
              bVar15 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar15) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar15 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar6;
              if (bVar15) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
      goto LAB_144450c09;
    }
  }
  pcVar12 = *ppcVar14;
  cVar5 = *(char *)(param_2 + 0x69);
  if (cVar5 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_b0 = (ulonglong *)CONCAT44(local_b0._4_4_,1);
  local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x10);
  puVar7 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,pcVar12,0);
  if (cVar5 == '\0') {
    FUN_14002049c(param_2,0);
  }
  *puVar7 = 0;
  puVar7[1] = 0;
  pcVar12 = *ppcVar14;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,pcVar12);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,pcVar12);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FDummyByteAddressBuffer";
  local_50 = 0;
  uStack_48 = 0;
  if ((longlong)DAT_14cbfda88 < 0) {
    pcVar12 = (char *)(DAT_14cbfda88 & 0x7fffffffffffffff);
    if (DAT_14cbfda94 == '\x01') {
      ppcVar13 = &local_a0;
      FUN_1446f470e(ppcVar13,pcVar12,1);
    }
    else {
      local_a0 = pcVar12;
      if (pcVar12 == (char *)0x0) {
        local_98 = 0;
      }
      else {
        sVar9 = strlen(pcVar12);
        local_98 = (undefined4)sVar9;
      }
      ppcVar13 = &local_90;
      FUN_14001c09c(ppcVar13,&local_a0,1);
    }
    DAT_14cbfda88 = (ulonglong)*(uint *)ppcVar13;
    local_50 = CONCAT44(DAT_14cbfda90,*(uint *)ppcVar13);
  }
  else {
    local_50 = DAT_14cbfda88 & 0xffffffff | (ulonglong)DAT_14cbfda90 << 0x20;
  }
  uVar11 = 0x111;
  if ((local_60 & 1) != 0) {
    uVar11 = 0x100000;
  }
  local_a0 = (char *)(ulonglong)(((byte)~local_60 & 1) << 4);
  local_98 = (undefined4)uVar11;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,CONCAT71((int7)((ulonglong)uVar11 >> 8),1));
    local_b0 = local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_a0);
    local_90[0x18] = 'p';
    local_90[0x19] = '\0';
    local_90[0x1a] = '\0';
    local_90[0x1b] = '\0';
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_a0);
    local_90[0x18] = 'p';
    local_90[0x19] = '\0';
    local_90[0x1a] = '\0';
    local_90[0x1b] = '\0';
  }
  ppcVar13 = (char **)(param_1 + 0x40);
  if (ppcVar13 == &local_90) {
LAB_144450ebb:
    pcVar12 = local_90;
    if (local_90 != (char *)0x0) {
      LOCK();
      puVar1 = (uint *)(local_90 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_90 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = local_90[0xd];
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = (longlong)pcVar12;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar10;
              LOCK();
              bVar15 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar15) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar15 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar6;
              if (bVar15) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
    }
  }
  else {
    pcVar12 = *ppcVar13;
    *ppcVar13 = local_90;
    local_90 = (char *)0x0;
    if (pcVar12 != (char *)0x0) {
      LOCK();
      puVar1 = (uint *)(pcVar12 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(pcVar12 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = pcVar12[0xd];
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = (longlong)pcVar12;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar10;
              LOCK();
              bVar15 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar15) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar15 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar6;
              if (bVar15) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
      goto LAB_144450ebb;
    }
  }
  pcVar12 = *ppcVar13;
  cVar5 = *(char *)(param_2 + 0x69);
  if (cVar5 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_b0 = (ulonglong *)CONCAT44(local_b0._4_4_,1);
  local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x10);
  puVar7 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,pcVar12,0);
  if (cVar5 == '\0') {
    FUN_14002049c(param_2,0);
  }
  *puVar7 = 0;
  puVar7[1] = 0;
  pcVar12 = *ppcVar13;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,pcVar12);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,pcVar12);
  }
  if ((*ppcVar14 == (char *)0x0) || (((*ppcVar14)[0x28] & 0x10U) == 0)) {
    local_88[0]._0_3_ = 0x11c00;
  }
  else {
    local_88[0]._0_3_ = 0x40000;
  }
  local_88[0] = (ulonglong)(uint3)local_88[0];
  local_88[1] = 0;
  local_b8 = local_88;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  ppcVar2 = (char **)(param_1 + 0x18);
  if (ppcVar2 == &local_a0) {
LAB_144451095:
    pcVar12 = local_a0;
    if (local_a0 != (char *)0x0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = local_a0[0xd];
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = (longlong)pcVar12;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar10;
              LOCK();
              bVar15 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar15) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar15 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar6;
              if (bVar15) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
    }
  }
  else {
    pcVar12 = *ppcVar2;
    *ppcVar2 = local_a0;
    local_a0 = (char *)0x0;
    if (pcVar12 != (char *)0x0) {
      LOCK();
      puVar1 = (uint *)(pcVar12 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(pcVar12 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = pcVar12[0xd];
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = (longlong)pcVar12;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar10;
              LOCK();
              bVar15 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar15) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar15 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar6;
              if (bVar15) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
      goto LAB_144451095;
    }
  }
  if ((*ppcVar14 == (char *)0x0) || (((*ppcVar14)[0x28] & 0x10U) == 0)) {
    local_88[0]._0_3_ = 0x10d00;
  }
  else {
    local_88[0]._0_3_ = 0x40000;
  }
  local_88[0] = (ulonglong)(uint3)local_88[0];
  local_88[1] = 0;
  local_b8 = local_88;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  ppcVar2 = (char **)(param_1 + 0x20);
  if (ppcVar2 == &local_a0) {
LAB_1444511cc:
    pcVar12 = local_a0;
    if (local_a0 != (char *)0x0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = local_a0[0xd];
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = (longlong)pcVar12;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar10;
              LOCK();
              bVar15 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar15) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar15 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar6;
              if (bVar15) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
    }
  }
  else {
    pcVar12 = *ppcVar2;
    *ppcVar2 = local_a0;
    local_a0 = (char *)0x0;
    if (pcVar12 != (char *)0x0) {
      LOCK();
      puVar1 = (uint *)(pcVar12 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(pcVar12 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = pcVar12[0xd];
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = (longlong)pcVar12;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar10;
              LOCK();
              bVar15 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar15) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar15 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar6;
              if (bVar15) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
      goto LAB_1444511cc;
    }
  }
  if ((*ppcVar14 == (char *)0x0) || (((*ppcVar14)[0x28] & 0x10U) == 0)) {
    local_88[0]._0_3_ = 0x12500;
  }
  else {
    local_88[0]._0_3_ = 0x40000;
  }
  local_88[0] = (ulonglong)(uint3)local_88[0];
  local_88[1] = 0;
  local_b8 = local_88;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  ppcVar2 = (char **)(param_1 + 0x28);
  if (ppcVar2 == &local_a0) {
LAB_144451303:
    pcVar12 = local_a0;
    if (local_a0 != (char *)0x0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = local_a0[0xd];
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = (longlong)pcVar12;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar10;
              LOCK();
              bVar15 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar15) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar15 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar6;
              if (bVar15) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
    }
  }
  else {
    pcVar12 = *ppcVar2;
    *ppcVar2 = local_a0;
    local_a0 = (char *)0x0;
    if (pcVar12 != (char *)0x0) {
      LOCK();
      puVar1 = (uint *)(pcVar12 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(pcVar12 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = pcVar12[0xd];
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = (longlong)pcVar12;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar10;
              LOCK();
              bVar15 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar15) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar15 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar6;
              if (bVar15) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
      goto LAB_144451303;
    }
  }
  if ((*ppcVar14 == (char *)0x0) || (((*ppcVar14)[0x28] & 0x10U) == 0)) {
    local_88[0]._0_3_ = 0x13c00;
  }
  else {
    local_88[0]._0_3_ = 0x40000;
  }
  local_88[0] = (ulonglong)(uint3)local_88[0];
  local_88[1] = 0;
  local_b8 = local_88;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  ppcVar14 = (char **)(param_1 + 0x30);
  if (ppcVar14 == &local_a0) {
LAB_144451437:
    pcVar12 = local_a0;
    if (local_a0 != (char *)0x0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = local_a0[0xd];
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = (longlong)pcVar12;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar10;
              LOCK();
              bVar15 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar15) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar15 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar6;
              if (bVar15) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
    }
  }
  else {
    pcVar12 = *ppcVar14;
    *ppcVar14 = local_a0;
    local_a0 = (char *)0x0;
    if (pcVar12 != (char *)0x0) {
      LOCK();
      puVar1 = (uint *)(pcVar12 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(pcVar12 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = pcVar12[0xd];
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = (longlong)pcVar12;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar10;
              LOCK();
              bVar15 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar15) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar15 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar6;
              if (bVar15) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
      goto LAB_144451437;
    }
  }
  if ((*ppcVar13 == (char *)0x0) || (((*ppcVar13)[0x28] & 0x10U) == 0)) {
    local_88[0]._0_3_ = 0x11c00;
  }
  else {
    local_88[0]._0_3_ = 0x40000;
  }
  local_88[0] = (ulonglong)(uint3)local_88[0];
  local_88[1] = 0;
  local_b8 = local_88;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  ppcVar14 = (char **)(param_1 + 0x38);
  if (ppcVar14 != &local_a0) {
    pcVar12 = *ppcVar14;
    *ppcVar14 = local_a0;
    local_a0 = (char *)0x0;
    if (pcVar12 == (char *)0x0) goto LAB_1444515c5;
    LOCK();
    puVar1 = (uint *)(pcVar12 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(pcVar12 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = pcVar12[0xd];
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = (longlong)pcVar12;
        plVar10 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar10;
            LOCK();
            bVar15 = plVar10 != DAT_14ca843c0;
            plVar8 = plVar6;
            if (bVar15) {
              plVar10 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar15);
        }
        else {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar15 = plVar8 != DAT_14ca843c8;
            plVar10 = plVar6;
            if (bVar15) {
              plVar8 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar15);
        }
      }
    }
  }
  pcVar12 = local_a0;
  if (local_a0 != (char *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = local_a0[0xd];
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = (longlong)pcVar12;
        plVar10 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar10;
            LOCK();
            bVar15 = plVar10 != DAT_14ca843c0;
            plVar8 = plVar6;
            if (bVar15) {
              plVar10 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar15);
        }
        else {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar15 = plVar8 != DAT_14ca843c8;
            plVar10 = plVar6;
            if (bVar15) {
              plVar8 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar15);
        }
      }
    }
  }
LAB_1444515c5:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444518c8 FUN_1444518c8 body=25 status=ok
// SIG undefined FUN_1444518c8(void)

void FUN_1444518c8(void)

{
  FUN_14610d70e();
  FUN_14170c56a(&DAT_14cbfc2e0);
  return;
}



// FUNCTION 1444518e2 FUN_1444518e2 body=51 status=ok
// SIG undefined FUN_1444518e2(void)

void FUN_1444518e2(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014445190b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 144451920 FUN_144451920 body=12 status=ok
// SIG undefined FUN_144451920(void)

void FUN_144451920(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144451929. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14445192c FUN_14445192c body=29 status=ok
// SIG undefined FUN_14445192c(void)

undefined8 FUN_14445192c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14445194a FUN_14445194a body=282 status=ok
// SIG undefined FUN_14445194a(void)

undefined8 * FUN_14445194a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14444a20d);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 144451a64 FUN_144451a64 body=98 status=ok
// SIG undefined FUN_144451a64(void)

void FUN_144451a64(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144451abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 144451ae4 FUN_144451ae4 body=12 status=ok
// SIG undefined FUN_144451ae4(void)

void FUN_144451ae4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144451aed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144451af0 FUN_144451af0 body=29 status=ok
// SIG undefined FUN_144451af0(void)

undefined8 FUN_144451af0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144451b0e FUN_144451b0e body=282 status=ok
// SIG undefined FUN_144451b0e(void)

undefined8 * FUN_144451b0e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14444a20d);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 144451c28 FUN_144451c28 body=117 status=ok
// SIG undefined FUN_144451c28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144451c28(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1490baca2(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1490baca2(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144451c93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 144451cb8 FUN_144451cb8 body=12 status=ok
// SIG undefined FUN_144451cb8(void)

void FUN_144451cb8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144451cc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144451cc4 FUN_144451cc4 body=29 status=ok
// SIG undefined FUN_144451cc4(void)

undefined8 FUN_144451cc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144451ce2 FUN_144451ce2 body=282 status=ok
// SIG undefined FUN_144451ce2(void)

undefined8 * FUN_144451ce2(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14444a20d);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 144451e38 FUN_144451e38 body=1402 status=ok
// SIG undefined FUN_144451e38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144451e38(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  longlong *plVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 auStack_7a8 [32];
  undefined8 local_788;
  undefined8 **local_780;
  undefined4 local_778;
  undefined4 *local_770;
  undefined8 *local_760;
  undefined8 *local_758;
  undefined8 *local_750;
  undefined8 local_748;
  longlong local_740;
  char local_738;
  undefined8 local_730;
  undefined8 local_728;
  float local_720;
  float local_718;
  float local_714;
  float local_710;
  float local_708;
  float local_704;
  float local_700;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined1 local_6a8 [1656];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_7a8;
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar5 = 0xffffffff;
    LOCK();
    bVar8 = DAT_14c7585d0 != 0xffffffff;
    DVar4 = dwTlsIndex;
    if (bVar8) {
      DVar5 = DAT_14c7585d0;
      DVar4 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar4;
    UNLOCK();
    if (bVar8) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar5;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(local_6a8);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_750 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_748 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_740 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_738 = '\0';
  local_730 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_750;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  FUN_1407779ba(local_6a8,param_2);
  if ((((*(int *)(param_1 + 0x194) != 0) && (uVar2 = *(uint *)(param_1 + 400), -1 < (int)uVar2)) &&
      ((int)uVar2 < DAT_14c9647dc)) &&
     ((plVar6 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
      plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_1 + 0x194))))) {
    uVar2 = *(uint *)(param_1 + 0x180);
    if (((((*(uint *)(plVar6 + 1) & 0x10200000) == 0) &&
         ((*plVar6 != 0 && (lVar3 = *(longlong *)(*plVar6 + 0x3b8), lVar3 != 0)))) &&
        (-1 < (int)uVar2)) && ((int)uVar2 < *(int *)(lVar3 + 0x2a0))) {
      local_758 = *(undefined8 **)(*(longlong *)(lVar3 + 0x298) + (ulonglong)uVar2 * 8);
      if (local_758 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_758 + 1) = *(int *)(local_758 + 1) + 1;
        UNLOCK();
      }
      goto LAB_144451f53;
    }
  }
  local_758 = (undefined8 *)0x0;
LAB_144451f53:
  if (DAT_14cbfc728 == '\0') {
    FUN_1490a0492(&local_728,param_1,&local_758);
    if (((((1e-08 < ABS((float)local_728)) || (1e-08 < ABS(local_728._4_4_))) ||
         (1e-08 < ABS(local_720))) ||
        (((1e-08 < ABS(local_718) || (1e-08 < ABS(local_714))) ||
         ((1e-08 < ABS(local_710) || ((1e-08 < ABS(local_708) || (1e-08 < ABS(local_704))))))))) ||
       (1e-08 < ABS(local_700))) {
      FUN_144906c86(&local_6e8,&local_728);
    }
    else {
      local_6b8 = _DAT_14c846280;
      uStack_6b0 = _DAT_14c846288;
      local_6c8 = _DAT_14c846270;
      uStack_6c0 = _DAT_14c846278;
      local_6d8 = _DAT_14c846260;
      uStack_6d0 = _DAT_14c846268;
      local_6e8 = DAT_14c846250;
      uStack_6e4 = DAT_14c846254;
      uStack_6e0 = (undefined4)DAT_14c846258;
      uStack_6dc = DAT_14c846258._4_4_;
    }
    local_778 = *(undefined4 *)(param_1 + 0x170);
    local_788 = *(undefined8 *)(param_1 + 0x178);
    local_770 = &local_6e8;
    local_780 = &local_758;
    FUN_1444523b3(local_6a8,*(undefined8 *)(param_1 + 0x430),*(undefined4 *)(param_1 + 0x438),
                  *(undefined4 *)(param_1 + 0x43c));
  }
  else {
    local_760 = *(undefined8 **)(param_1 + 0x188);
    if (local_760 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_760 + 1) = *(int *)(local_760 + 1) + 1;
      UNLOCK();
    }
    FUN_1490a0492(&local_728,param_1,&local_760);
    if (((((1e-08 < ABS((float)local_728)) || (1e-08 < ABS(local_728._4_4_))) ||
         (1e-08 < ABS(local_720))) ||
        (((1e-08 < ABS(local_718) || (1e-08 < ABS(local_714))) ||
         ((1e-08 < ABS(local_710) || ((1e-08 < ABS(local_708) || (1e-08 < ABS(local_704))))))))) ||
       (1e-08 < ABS(local_700))) {
      FUN_144906c86(&local_6e8,&local_728);
    }
    else {
      local_6b8 = _DAT_14c846280;
      uStack_6b0 = _DAT_14c846288;
      local_6c8 = _DAT_14c846270;
      uStack_6c0 = _DAT_14c846278;
      local_6d8 = _DAT_14c846260;
      uStack_6d0 = _DAT_14c846268;
      local_6e8 = DAT_14c846250;
      uStack_6e4 = DAT_14c846254;
      uStack_6e0 = (undefined4)DAT_14c846258;
      uStack_6dc = DAT_14c846258._4_4_;
    }
    if (local_760 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_760 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_760)(local_760,1);
      }
    }
    local_778 = *(undefined4 *)(param_1 + 0x170);
    local_728 = *(undefined8 **)(param_1 + 0x188);
    if (local_728 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_728 + 1) = *(int *)(local_728 + 1) + 1;
      UNLOCK();
      puVar7 = local_728;
    }
    local_788 = *(undefined8 *)(param_1 + 0x178);
    local_770 = &local_6e8;
    local_780 = (undefined8 **)&local_728;
    FUN_1444523b3(local_6a8,*(undefined8 *)(param_1 + 0x430),*(undefined4 *)(param_1 + 0x438),
                  *(undefined4 *)(param_1 + 0x43c));
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar7 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  }
  FUN_140779360(local_6a8);
  if (local_758 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_758 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_758)(local_758,1);
    }
  }
  FUN_140778010(local_6a8);
  if (local_738 == '\0') {
    local_738 = '\x01';
    *(int *)(local_750 + 4) = *(int *)(local_750 + 4) + -1;
    if (local_740 != local_750[2]) {
      FUN_14004673c();
    }
    *local_750 = local_748;
    local_750[3] = local_730;
  }
  if ((local_30 ^ (ulonglong)auStack_7a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444523b3 FUN_1444523b3 body=739 status=ok
// SIG undefined FUN_1444523b3(void)

void FUN_1444523b3(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  longlong param_5,undefined8 param_6,undefined4 param_7,undefined4 *param_8)

{
  int iVar1;
  undefined8 uVar2;
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
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  bool bVar20;
  undefined1 auStack_118 [32];
  uint *local_f8;
  undefined1 local_e5;
  uint local_e4;
  undefined1 *local_e0;
  byte local_d8;
  char local_d7;
  byte local_d6;
  int local_d0;
  int local_c8;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14444899a(&local_d8,param_1,param_6);
  if ((param_5 != 0) && (*(int *)(param_5 + 8) != -1)) {
    bVar20 = true;
    if (local_d7 == '\x01') {
      if (local_d8 == 0) goto LAB_144452440;
      bVar20 = local_d0 == 3;
    }
    if ((local_d8 & local_d6) == 1 && local_d0 != 3) {
      uVar2 = *(undefined8 *)
               (&DAT_14ca8c1f0 +
               (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
      FUN_145f61298();
      FUN_1448e935e(uVar2,local_58,&DAT_14cbfc798,bVar20);
      FUN_145f61298();
      puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar18 = puVar19 + 0x1a;
      if (*(undefined8 **)(param_1 + 0x78) < puVar18) {
        FUN_140023dd8((longlong *)(param_1 + 0x70),0xe0);
        puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar18 = puVar19 + 0x1a;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar18;
      *puVar19 = &PTR_FUN_14bab30e0;
      puVar19[0x17] = 0;
      puVar19[2] = 0;
      puVar19[3] = 0;
      puVar19[4] = 0;
      puVar19[5] = 0;
      puVar19[6] = 0;
      puVar19[7] = 0;
      puVar19[8] = 0;
      puVar19[9] = 0;
      puVar19[10] = 0;
      iVar1 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
        FUN_1448cfae8(param_1 + 0x98,iVar1);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8) = puVar19;
      *(undefined4 *)(puVar19 + 0x16) = param_7;
      *(int *)((longlong)puVar19 + 0xb4) = local_c8;
      puVar19[0x17] = *(undefined8 *)(param_2 + 0x70);
      *(uint *)(puVar19 + 0x18) = *(uint *)(param_2 + 0x128) >> 2;
      *(undefined4 *)((longlong)puVar19 + 0xc4) = param_3;
      *(undefined4 *)(puVar19 + 0x19) = param_4;
      uVar3 = param_8[1];
      uVar4 = param_8[2];
      uVar5 = param_8[3];
      uVar6 = param_8[4];
      uVar7 = param_8[5];
      uVar8 = param_8[6];
      uVar9 = param_8[7];
      uVar10 = param_8[8];
      uVar11 = param_8[9];
      uVar12 = param_8[10];
      uVar13 = param_8[0xb];
      uVar14 = param_8[0xc];
      uVar15 = param_8[0xd];
      uVar16 = param_8[0xe];
      uVar17 = param_8[0xf];
      *(undefined4 *)(puVar19 + 0xe) = *param_8;
      *(undefined4 *)((longlong)puVar19 + 0x74) = uVar3;
      *(undefined4 *)(puVar19 + 0xf) = uVar4;
      *(undefined4 *)((longlong)puVar19 + 0x7c) = uVar5;
      *(undefined4 *)(puVar19 + 0x10) = uVar6;
      *(undefined4 *)((longlong)puVar19 + 0x84) = uVar7;
      *(undefined4 *)(puVar19 + 0x11) = uVar8;
      *(undefined4 *)((longlong)puVar19 + 0x8c) = uVar9;
      *(undefined4 *)(puVar19 + 0x12) = uVar10;
      *(undefined4 *)((longlong)puVar19 + 0x94) = uVar11;
      *(undefined4 *)(puVar19 + 0x13) = uVar12;
      *(undefined4 *)((longlong)puVar19 + 0x9c) = uVar13;
      *(undefined4 *)(puVar19 + 0x14) = uVar14;
      *(undefined4 *)((longlong)puVar19 + 0xa4) = uVar15;
      *(undefined4 *)(puVar19 + 0x15) = uVar16;
      *(undefined4 *)((longlong)puVar19 + 0xac) = uVar17;
      puVar19[10] = local_a0;
      puVar19[0xc] = local_bc;
      *(undefined4 *)(puVar19 + 0xd) = local_b4;
      puVar19[7] = local_a8;
      puVar19[8] = local_b0;
      puVar19[6] = local_90;
      puVar19[9] = local_98;
      puVar19[2] = local_88;
      puVar19[3] = local_80;
      puVar19[4] = local_78;
      puVar19[5] = local_70;
      local_e4 = local_c8 + 0x1fU >> 5;
      local_f8 = &local_e4;
      local_e0 = &DAT_100000001;
      FUN_1490bad76(param_1,&local_e5,local_58,puVar19 + 2);
    }
  }
LAB_144452440:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144452698 FUN_144452698 body=481 status=ok
// SIG undefined FUN_144452698(void)

void FUN_144452698(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1490bafee(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14445287a FUN_14445287a body=232 status=ok
// SIG undefined FUN_14445287a(void)

void FUN_14445287a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 144452962 FUN_144452962 body=81 status=ok
// SIG undefined FUN_144452962(void)

void FUN_144452962(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490bb091(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1444529c4 FUN_1444529c4 body=29 status=ok
// SIG undefined FUN_1444529c4(void)

void FUN_1444529c4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1444529e2 FUN_1444529e2 body=29 status=ok
// SIG undefined FUN_1444529e2(void)

undefined8 FUN_1444529e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144452a00 FUN_144452a00 body=282 status=ok
// SIG undefined FUN_144452a00(void)

undefined8 * FUN_144452a00(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14444a20d);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 144452b1a FUN_144452b1a body=105 status=ok
// SIG undefined FUN_144452b1a(void)

void FUN_144452b1a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_144451e38(0xb0,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_144451e38(param_1 + 0x16,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144452b5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 144452b8f FUN_144452b8f body=5036 status=ok
// SIG undefined FUN_144452b8f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144452b8f(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  code *pcStack_d0;
  undefined1 *puStack_c8;
  code *local_c0;
  code *local_b8;
  undefined4 local_ac;
  code *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined **local_88;
  code *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14cbfa734);
  if (cVar1 == '\0') {
    _DAT_14cbfa734 = 0;
    uRam000000014cbfa73c = 0;
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_d8 = (code *)((ulonglong)local_d8._4_4_ << 0x20);
  FUN_141471170(&DAT_14cbfa748,L"r.HairStrands.Cards.CoverageBias",&DAT_14cbfa758,
                L"Apply a texture LOD bias to coverage texture");
  atexit(FUN_14443ac08);
  local_a0 = FUN_145fce05c;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14cbfa7e8,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_14444a1f4;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cbfa860,6,&local_a8);
  local_b8 = FUN_141905d24;
  local_c0 = FUN_14443ae74;
  puStack_c8 = &LAB_14443dc40;
  pcStack_d0 = FUN_14443dc67;
  local_d8 = FUN_14443dc90;
  FUN_141585c60(&DAT_14cbfa868,L"FHairCardsVertexFactory",
                L"/Engine/Private/HairStrands/HairCardsVertexFactory.ush",0x62da);
  atexit((_func_5014 *)&LAB_14443dcc2);
  _DAT_14cbfa8d8 = 0xffffffff;
  _DAT_14cbfa8dc = 0xffffffff;
  local_a0 = FUN_145f26b20;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfa9f8,&local_a8);
  local_a0 = FUN_145f3b3fa;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfab20,&local_a8);
  local_a8 = (code *)0x800000014baaa9b0;
  local_ac = 0xf;
  uVar2 = FUN_14577453c();
  local_a0._0_5_ = CONCAT14(1,uVar2);
  FUN_14667c7b8(&local_a8);
  local_a8 = (code *)&DAT_14a19662d;
  local_a0 = (code *)CONCAT35(local_a0._5_3_,4);
  FUN_14001a6c0(&local_a8,1);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cbfab38,L"r.HairStrands.RaytracingRadiusScale",&DAT_14cbfab48,
                L"Override the per instance scale factor for raytracing hair strands geometry (0: disabled, >0:enabled)"
               );
  atexit(FUN_14443e577);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbfab50,L"r.HairStrands.RaytracingProceduralSplits",&DAT_14c764a14,
                L"Change how many AABBs are used per hair segment to balance between BVH build cost and ray tracing performance. (default: 4)"
               );
  atexit(FUN_14443e5bc);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cbfab60,L"r.HairStrands.StrandWidth",&DAT_14cbfab70,L"Width of hair strand");
  atexit(FUN_14443e601);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbfab78,L"r.HairStrands.Interpolation.Debug",&DAT_14cbfab88,
                L"Enable debug rendering for hair interpolation");
  atexit(FUN_14443e646);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbfab90,L"r.HairStrands.Cards.InterpolationType",&DAT_14c764a18,
                L"Hair cards interpolation type: 0: None, 1:physics simulation, 2: RBF deformation")
  ;
  atexit(FUN_14443e68b);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbfaba0,L"r.HairStrands.Strands.TransferPrevPos",&DAT_14cbfabb0,
                L"Transfer strands prev. position to current position on LOD switching to avoid large discrepancy causing large motion vector"
               );
  atexit(FUN_14443e6d0);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbfabb8,L"r.HairStrands.Strands.Raytracing.ForceRebuildBVH",&DAT_14c764a1c,
                L"Force BVH rebuild instead of doing a BVH refit when hair positions changed");
  atexit(FUN_14443e715);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbfabc8,L"r.HairStrands.Strands.MotionVectorCheckViewID",&DAT_14c764a20,
                L"Issue motion vector on hair strands only if updates happens on the same view");
  atexit(FUN_14443e75a);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbfabd8,L"r.HairStrands.Strands.Interpolation.ForceSingleGuide",
                &DAT_14c764a24,
                L"Force to use a single guide during the interpolation. This allows to reduce the cost of interpolation, but can create clumpy looks."
               );
  atexit(FUN_14443e79f);
  local_a0 = FUN_145f782a0;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfad00,&local_a8);
  local_a0 = FUN_145e9dcdc;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfae28,&local_a8);
  local_a0 = FUN_145f27114;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfaf50,&local_a8);
  local_a0 = FUN_145f5f180;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfb078,&local_a8);
  local_a0 = FUN_145f0f22e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfb1a0,&local_a8);
  local_a0 = FUN_145f5f692;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfb2c8,&local_a8);
  local_a0 = FUN_145f5fba4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfb3f0,&local_a8);
  local_a0 = FUN_145e7a5b0;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfb518,&local_a8);
  local_a0 = FUN_145e9e168;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfb640,&local_a8);
  local_a0 = FUN_145ee06b2;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfb768,&local_a8);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbfb778,L"r.HairStrands.Projection.MaxTrianglePerIteration",&DAT_14c764a28,
                L"Change the number of triangles which are iterated over during one projection iteration step. In kilo triangle (e.g., 8 == 8000 triangles). Default is 8."
               );
  atexit(FUN_1444420d3);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbfb788,L"r.HairStrands.UseGPUPositionOffset",&DAT_14c764a2c,
                L"Use GPU position offset to improve hair strands position precision.");
  atexit(FUN_144442118);
  local_a0 = FUN_145f0f81c;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfb8b0,&local_a8);
  local_a0 = FUN_145f600b6;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfb9d8,&local_a8);
  local_a0 = FUN_145f0fe0a;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfbb00,&local_a8);
  local_a0 = FUN_145f606ac;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfbc28,&local_a8);
  local_a0 = FUN_145f60ca2;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfbd50,&local_a8);
  local_a0 = FUN_145f949c6;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfbe78,&local_a8);
  local_a0 = FUN_145f94e28;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfbfa0,&local_a8);
  local_a0 = FUN_145f3b9ee;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfc0c8,&local_a8);
  local_a0 = FUN_145e69800;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfc1f0,&local_a8);
  _DAT_14cbfc208 = 0xffffffff;
  _DAT_14cbfc20c = 0x105;
  DAT_14cbfc20e = 0;
  _DAT_14cbfc210 = 0;
  DAT_14cbfc218 = 0;
  DAT_14cbfc220 = 0;
  uRam000000014cbfc228 = 0;
  _DAT_14cbfc230 = 0;
  DAT_14cbfc238 = 0;
  _DAT_14cbfc240 = 0;
  DAT_14cbfc200 = &PTR_FUN_14bab2f70;
  FUN_14667e65e();
  atexit(FUN_144445186);
  local_a0 = FUN_145e07818;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14cbfc2d0,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_1444518c8;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cbfc348,6,&local_a8);
  local_b8 = FUN_141905dc8;
  local_c0 = FUN_1444452bc;
  puStack_c8 = &LAB_1444452fe;
  pcStack_d0 = FUN_144445325;
  local_d8 = FUN_14444534e;
  FUN_141585c60(&DAT_14cbfc350,L"FHairStrandsVertexFactory",
                L"/Engine/Private/HairStrands/HairStrandsVertexFactory.ush",0x6ada);
  atexit((_func_5014 *)&LAB_144445380);
  _DAT_14cbfc3c0 = 0xffffffff;
  _DAT_14cbfc3c4 = 0;
  pcStack_d0 = (code *)0x0;
  puStack_c8 = (undefined1 *)0x0;
  local_d8 = (code *)0x1;
  FUN_14282b410(L"/Script/HairStrandsCore",&PTR_FUN_14baac400,1,&PTR_FUN_14baac3d0);
  pcStack_d0 = (code *)0x0;
  puStack_c8 = (undefined1 *)0x0;
  local_d8 = (code *)0x2;
  FUN_14282b410(L"/Script/HairStrandsCore",0,0,&PTR_FUN_14baac680);
  puStack_c8 = (undefined1 *)0x0;
  local_d8 = (code *)0x0;
  pcStack_d0 = (code *)0x0;
  FUN_14282b410(L"/Script/HairStrandsCore",&PTR_FUN_14baacbd0,1,0);
  puStack_c8 = (undefined1 *)0x0;
  local_d8 = (code *)0x0;
  pcStack_d0 = (code *)0x0;
  FUN_14282b410(L"/Script/HairStrandsCore",&PTR_FUN_14baad1d0,1,0);
  FUN_1446f470e(&DAT_14cbfc458,L"GetPointPosition",1);
  FUN_1446f470e(&DAT_14cbfc460,L"GetStrandSize",1);
  FUN_1446f470e(&DAT_14cbfc468,L"GetNumStrands",1);
  FUN_1446f470e(&DAT_14cbfc470,L"GetWorldTransform",1);
  FUN_1446f470e(&DAT_14cbfc478,L"GetWorldInverse",1);
  local_a8 = (code *)0x14baad296;
  local_a0._0_5_ = 0xb;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc480 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad2a2;
  local_a0._0_5_ = 0x11;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc488 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad2b4;
  local_a0._0_5_ = 0x10;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc490 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad2c5;
  local_a0._0_5_ = 0x14;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc498 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad2da;
  local_a0._0_5_ = 10;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc4a0 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad2e5;
  local_a0._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc4a8 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad2f4;
  local_a0._0_5_ = 0xc;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc4b0 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad301;
  local_a0._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc4b8 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad310;
  local_a0._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc4c0 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad31f;
  local_a0._0_5_ = 0x10;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc4c8 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad330;
  local_a0._0_5_ = 0xc;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc4d0 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad33d;
  local_a0._0_5_ = 0xf;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc4d8 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad34d;
  local_a0._0_5_ = 0x11;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc4e0 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad35f;
  local_a0._0_5_ = 0x11;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc4e8 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad371;
  local_a0._0_5_ = 0x13;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc4f0 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad385;
  local_a0._0_5_ = 0xf;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc4f8 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad395;
  local_a0._0_5_ = 0x11;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc500 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad3a7;
  local_a0._0_5_ = 0x13;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc508 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad3bb;
  local_a0._0_5_ = 0x11;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc510 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad3cd;
  local_a0._0_5_ = 0x12;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc518 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad3e0;
  local_a0._0_5_ = 0x13;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc520 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad3f4;
  local_a0._0_5_ = 0x10;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc528 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad405;
  local_a0._0_5_ = 0x12;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc530 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad418;
  local_a0._0_5_ = 0xe;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc538 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad427;
  local_a0._0_5_ = 0x11;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc540 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad439;
  local_a0._0_5_ = 0x13;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc548 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad44d;
  local_a0._0_5_ = 0x13;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc550 = (ulonglong)uVar3;
  local_a8 = (code *)0x14baad461;
  local_a0 = (code *)CONCAT35(local_a0._5_3_,0x11);
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbfc558 = (ulonglong)uVar3;
  FUN_1446f470e(&DAT_14cbfc560,L"ComputeNodePosition",1);
  FUN_1446f470e(&DAT_14cbfc568,L"ComputeNodeOrientation",1);
  FUN_1446f470e(&DAT_14cbfc570,L"ComputeNodeMass",1);
  FUN_1446f470e(&DAT_14cbfc578,L"ComputeNodeInertia",1);
  FUN_1446f470e(&DAT_14cbfc580,L"ComputeEdgeLength",1);
  FUN_1446f470e(&DAT_14cbfc588,L"ComputeEdgeRotation",1);
  FUN_1446f470e(&DAT_14cbfc590,L"ComputeEdgeDirection",1);
  FUN_1446f470e(&DAT_14cbfc598,L"ComputeRestPosition",1);
  FUN_1446f470e(&DAT_14cbfc5a0,L"ComputeRestOrientation",1);
  FUN_1446f470e(&DAT_14cbfc5a8,L"ComputeLocalState",1);
  FUN_1446f470e(&DAT_14cbfc5b0,L"AdvectNodePosition",1);
  FUN_1446f470e(&DAT_14cbfc5b8,L"AdvectNodeOrientation",1);
  FUN_1446f470e(&DAT_14cbfc5c0,L"UpdateLinearVelocity",1);
  FUN_1446f470e(&DAT_14cbfc5c8,L"UpdateAngularVelocity",1);
  FUN_1446f470e(&DAT_14cbfc5d0,L"GetLocalVector",1);
  FUN_1446f470e(&DAT_14cbfc5d8,L"GetWorldVector",1);
  FUN_1446f470e(&DAT_14cbfc5e0,L"AttachNodePosition",1);
  FUN_1446f470e(&DAT_14cbfc5e8,L"AttachNodeOrientation",1);
  FUN_1446f470e(&DAT_14cbfc5f0,L"AttachNodeState",1);
  FUN_1446f470e(&DAT_14cbfc5f8,L"UpdateNodeState",1);
  FUN_1446f470e(&DAT_14cbfc600,L"UpdatePointPosition",1);
  FUN_1446f470e(&DAT_14cbfc608,L"ResetPointPosition",1);
  FUN_1446f470e(&DAT_14cbfc610,L"GetBoundingBox",1);
  FUN_1446f470e(&DAT_14cbfc618,L"ResetBoundingBox",1);
  FUN_1446f470e(&DAT_14cbfc620,L"BuildBoundingBox",1);
  FUN_1446f470e(&DAT_14cbfc628,L"SetupDistanceSpringMaterial",1);
  FUN_1446f470e(&DAT_14cbfc630,L"SolveDistanceSpringMaterial",1);
  FUN_1446f470e(&DAT_14cbfc638,L"ProjectDistanceSpringMaterial",1);
  FUN_1446f470e(&DAT_14cbfc640,L"SetupAngularSpringMaterial",1);
  FUN_1446f470e(&DAT_14cbfc648,L"SolveAngularSpringMaterial",1);
  FUN_1446f470e(&DAT_14cbfc650,L"ProjectAngularSpringMaterial",1);
  FUN_1446f470e(&DAT_14cbfc658,L"SetupStretchRodMaterial",1);
  FUN_1446f470e(&DAT_14cbfc660,L"SolveStretchRodMaterial",1);
  FUN_1446f470e(&DAT_14cbfc668,L"ProjectStretchRodMaterial",1);
  FUN_1446f470e(&DAT_14cbfc670,L"SetupBendRodMaterial",1);
  FUN_1446f470e(&DAT_14cbfc678,L"SolveBendRodMaterial",1);
  FUN_1446f470e(&DAT_14cbfc680,L"ProjectBendRodMaterial",1);
  FUN_1446f470e(&DAT_14cbfc688,L"SolveHardCollisionConstraint",1);
  FUN_1446f470e(&DAT_14cbfc690,L"ProjectHardCollisionConstraint",1);
  FUN_1446f470e(&DAT_14cbfc698,L"SetupSoftCollisionConstraint",1);
  FUN_1446f470e(&DAT_14cbfc6a0,L"SolveSoftCollisionConstraint",1);
  FUN_1446f470e(&DAT_14cbfc6a8,L"ProjectSoftCollisionConstraint",1);
  FUN_1446f470e(&DAT_14cbfc6b0,L"UpdateMaterialFrame",1);
  FUN_1446f470e(&DAT_14cbfc6b8,L"ComputeMaterialFrame",1);
  FUN_1446f470e(&DAT_14cbfc6c0,L"ComputeAirDragForce",1);
  FUN_1446f470e(&DAT_14cbfc6c8,L"NeedSimulationReset",1);
  FUN_1446f470e(&DAT_14cbfc6d0,L"HasGlobalInterpolation",1);
  FUN_1446f470e(&DAT_14cbfc6d8,L"NeedRestUpdate",1);
  FUN_1446f470e(&DAT_14cbfc6e0,L"InitGridSamples",1);
  FUN_1446f470e(&DAT_14cbfc6e8,L"GetSampleState",1);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbfc6f0,L"r.HairStrands.SimulationMaxDelay",&DAT_14c764a30,
                L"Maximum tick Delay before starting the simulation");
  atexit(FUN_144445883);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbfc700,L"r.HairStrands.SimulationRestUpdate",&DAT_14cbfc710,
                L"Update the simulation rest pose");
  atexit(FUN_1444458c8);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cbfc718,L"r.HairStrands.Debug.EnableProxyInstanceTransform",&DAT_14cbfc728,
                L"Enable the use of the niagara proxy instance to compute the bone/world transform. For debug only"
               );
  atexit(FUN_14444590d);
  local_a0 = FUN_145f61298;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfc848,&local_a8);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144453f48 FUN_144453f48 body=473 status=ok
// SIG undefined FUN_144453f48(void)

void FUN_144453f48(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [32];
  uint *local_88;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined1 local_65;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_3 + 0x10) != 0)) {
    iVar1 = *param_4;
    iVar2 = param_4[1];
    iVar3 = param_4[2];
    local_6c = iVar3 + 4;
    local_70 = iVar2 + 4;
    local_74 = iVar1 + 4;
    uVar6 = *(undefined8 *)
             (&DAT_14ca8c1f0 +
             (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
    FUN_145e69d6a();
    FUN_1448e935e(uVar6,local_58,&DAT_14cbfdc78,0);
    FUN_145e69d6a();
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar5 = puVar7 + 6;
    if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x40);
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar5 = puVar7 + 6;
    }
    local_6c = local_6c >> 2;
    local_70 = local_70 >> 2;
    local_74 = local_74 >> 2;
    *(undefined8 **)(param_1 + 0x70) = puVar5;
    *puVar7 = &PTR_FUN_14bab4838;
    puVar7[4] = 0;
    puVar7[5] = 0;
    iVar4 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar4);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar7;
    *(int *)(puVar7 + 2) = iVar1 + 1;
    *(int *)((longlong)puVar7 + 0x14) = iVar2 + 1;
    *(int *)(puVar7 + 3) = iVar3 + 1;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = 1;
    uVar6 = FUN_1481de2c4(param_2 + 0x10,param_1);
    puVar7[4] = uVar6;
    uVar6 = FUN_1481de36c(param_3 + 0x10,param_1);
    puVar7[5] = uVar6;
    local_88 = &local_64;
    local_64 = local_74;
    local_60 = local_70;
    local_5c = local_6c;
    FUN_1490bf1a6(param_1,&local_65,local_58,puVar7 + 2);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144454122 FUN_144454122 body=125 status=ok
// SIG undefined FUN_144454122(void)

undefined8 FUN_144454122(longlong param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (0x31 < iVar1) {
    iVar1 = 0x32;
  }
  iVar3 = 0;
  if (iVar1 < 1) {
    iVar1 = iVar3;
  }
  iVar4 = *(int *)(param_1 + 0x38);
  if (0x31 < iVar4) {
    iVar4 = 0x32;
  }
  if (iVar4 < 1) {
    iVar4 = iVar3;
  }
  iVar2 = 0x32;
  if (*(int *)(param_1 + 0x40) < 0x32) {
    iVar2 = *(int *)(param_1 + 0x40);
  }
  if (iVar2 < 1) {
    iVar2 = iVar3;
  }
  *(int *)(param_1 + 0x38) = iVar4;
  *(int *)(param_1 + 0x3c) = iVar1;
  *(int *)(param_1 + 0x40) = iVar2;
  memset(param_2,0,0x130);
  FUN_1490bd104(param_2,param_1 + 0x38,*(undefined4 *)(param_1 + 0x44));
  return 1;
}



// FUNCTION 1444541a0 FUN_1444541a0 body=3628 status=ok
// SIG undefined FUN_1444541a0(void)

void FUN_1444541a0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  int *piVar17;
  longlong *plVar18;
  undefined1 auStack_b8 [32];
  code **local_98;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = *(longlong **)(param_2 + 0x120);
  if (plVar2 != (longlong *)0x0) {
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar4 = *(int *)(lVar8 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar4 != 2) {
        if (iVar4 != 1) goto LAB_1444541fb;
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        if (DVar5 == DVar6) goto LAB_144454200;
        goto LAB_144454236;
      }
LAB_144454200:
      (**(code **)(*plVar2 + 0x20))(plVar2);
      puVar7 = (undefined8 *)*plVar2;
      plVar18 = plVar2;
LAB_14445420f:
      (*(code *)*puVar7)(plVar18,1);
    }
    else {
LAB_1444541fb:
      if (iVar4 == 0x10) goto LAB_144454200;
LAB_144454236:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar4 = *(int *)(lVar8 + 0xc60), iVar4 == 2))
        goto LAB_144454200;
        if (iVar4 == 1) {
          DVar5 = FUN_140ad26c0();
          DVar6 = GetCurrentThreadId();
          if (DVar5 == DVar6) goto LAB_144454200;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar7 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar7;
        if (puVar11 != (uint *)0x0) goto LAB_1444543f9;
        do {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_144455e0b);
          }
          lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar8 + 0x310);
          *(undefined8 *)(lVar8 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar7 = puVar9;
          FUN_140217a48(puVar7);
          puVar11 = (uint *)*puVar7;
LAB_1444543f9:
          uVar15 = *(longlong *)(puVar11 + 0x10) + 7;
          uVar12 = puVar11[0x12];
          while( true ) {
            plVar18 = (longlong *)(uVar15 & 0xfffffffffffffff8);
            if (plVar18 + 0x16 <= puVar11 + 0x4000) {
              *(longlong **)(puVar11 + 0x10) = plVar18 + 0x16;
              puVar11[0x12] = uVar12 + 1;
              iVar4 = 0;
              FUN_1447247dc(plVar18,0);
              *plVar18 = (longlong)&PTR_FUN_14bab4b40;
              plVar18[0x15] = (longlong)plVar2;
              if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                uVar12 = DAT_14c7585c8 >> 10 & 3;
                if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
                  uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
                  iVar4 = 0;
                }
                else {
                  uVar15 = 2;
                }
              }
              else {
                iVar4 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                        *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                uVar15 = 5;
              }
              if (*(code **)(plVar18[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(plVar18[0xe] + 0x18))(plVar18 + 0xe,plVar18 + 9);
              }
              plVar18[0xe] = (longlong)
                             LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              plVar18[9] = (longlong)plVar18;
              plVar18[10] = (longlong)plVar18;
              lVar8 = *(longlong *)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
              if (lVar8 == 0) {
                uVar3 = 1;
                if ((char)uVar15 != '\x06') {
                  uVar3 = uVar15;
                }
                uVar15 = uVar3;
                lVar8 = 0;
              }
              else {
                if ((char)uVar15 == '\x06') {
                  uVar15 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
                }
                lVar8 = *(longlong *)(lVar8 + 0x30);
              }
              plVar18[0xf] = lVar8;
              plVar18[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
              *(int *)((longlong)plVar18 + 0x1c) = iVar4;
              if (plVar18 == (longlong *)0x0) {
                local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
                FUN_1447439e4(0);
                goto LAB_1444542cd;
              }
              LOCK();
              *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
              UNLOCK();
              local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
              FUN_1447439e4(plVar18);
              LOCK();
              plVar2 = plVar18 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 != 0) goto LAB_1444542cd;
              puVar7 = (undefined8 *)*plVar18;
              goto LAB_14445420f;
            }
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar1 = *puVar11;
            *puVar11 = *puVar11 + uVar12 + 1;
            UNLOCK();
            if ((uVar1 ^ uVar12) != 0xffffffff) break;
            puVar11 = (uint *)*puVar7;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar7 = puVar11;
            uVar15 = (longlong)puVar11 + 0x5f;
            uVar12 = 0;
          }
        } while( true );
      }
      local_98 = local_88;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14bab4b00;
      local_88[0] = FUN_144455da4;
      local_60 = plVar2;
      FUN_14005a792(&DAT_14ca9a440,L"DeleteResourceA",&DAT_14cbfe198);
      if (local_88[0] != (code *)0x0) {
        pppuVar13 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar13 = &local_68;
        }
        (*(code *)(*pppuVar13)[2])();
      }
    }
LAB_1444542cd:
    *(undefined8 *)(param_2 + 0x120) = 0;
  }
  plVar2 = *(longlong **)(param_2 + 0x128);
  if (plVar2 == (longlong *)0x0) {
    piVar17 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
  }
  else {
    piVar17 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    iVar4 = *piVar17;
    if (DAT_14c86a9fc == 0) {
      if (iVar4 != 2) {
        if (iVar4 != 1) goto LAB_14445430f;
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        if (DVar5 == DVar6) goto LAB_144454318;
        goto LAB_144454685;
      }
LAB_144454318:
      (**(code **)(*plVar2 + 0x20))(plVar2);
      puVar7 = (undefined8 *)*plVar2;
      plVar18 = plVar2;
LAB_144454327:
      (*(code *)*puVar7)(plVar18,1);
    }
    else {
LAB_14445430f:
      if (iVar4 == 0x10) goto LAB_144454318;
LAB_144454685:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (*piVar17 == 2)) goto LAB_144454318;
        if (*piVar17 == 1) {
          DVar5 = FUN_140ad26c0();
          DVar6 = GetCurrentThreadId();
          if (DVar5 == DVar6) goto LAB_144454318;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar7 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar7;
        if (puVar11 != (uint *)0x0) goto LAB_144454bd2;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_144455e0b);
          }
          lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar8 + 0x310);
          *(undefined8 *)(lVar8 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar7 = puVar9;
          FUN_140217a48(puVar7);
          puVar11 = (uint *)*puVar7;
LAB_144454bd2:
          plVar18 = (longlong *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(plVar18 + 0x16);
          uVar12 = puVar11[0x12];
          if (puVar14 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar1 = *puVar11;
            *puVar11 = *puVar11 + uVar12 + 1;
            UNLOCK();
            if ((uVar1 ^ uVar12) != 0xffffffff) break;
            puVar11 = (uint *)*puVar7;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar7 = puVar11;
            plVar18 = (longlong *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(plVar18 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar11 + 0x4000) {
              uVar12 = 1;
              goto LAB_144454c54;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_144454c54:
        *(uint **)(puVar11 + 0x10) = puVar14;
        puVar11[0x12] = uVar12;
        iVar4 = 0;
        FUN_1447247dc(plVar18,0);
        *plVar18 = (longlong)&PTR_FUN_14bab4b90;
        plVar18[0x15] = (longlong)plVar2;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar4 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar4 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(plVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(plVar18[0xe] + 0x18))(plVar18 + 0xe,plVar18 + 9);
        }
        plVar18[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        plVar18[9] = (longlong)plVar18;
        plVar18[10] = (longlong)plVar18;
        lVar8 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar8 == 0) {
          uVar3 = 1;
          if ((char)uVar15 != '\x06') {
            uVar3 = uVar15;
          }
          uVar15 = uVar3;
          lVar8 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
          }
          lVar8 = *(longlong *)(lVar8 + 0x30);
        }
        plVar18[0xf] = lVar8;
        plVar18[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)plVar18 + 0x1c) = iVar4;
        if (plVar18 == (longlong *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
          goto LAB_14445471f;
        }
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(plVar18);
        LOCK();
        plVar2 = plVar18 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 != 0) goto LAB_14445471f;
        puVar7 = (undefined8 *)*plVar18;
        goto LAB_144454327;
      }
      local_98 = local_88;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14bab4b50;
      local_88[0] = FUN_144455fae;
      local_60 = plVar2;
      FUN_14005a792(&DAT_14ca9a440,L"DeleteResourceB",&DAT_14cbfe19c);
      if (local_88[0] != (code *)0x0) {
        pppuVar13 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar13 = &local_68;
        }
        (*(code *)(*pppuVar13)[2])();
      }
    }
LAB_14445471f:
    *(undefined8 *)(param_2 + 0x128) = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  uVar10 = *(undefined8 *)(param_3 + 0x100);
  iVar4 = *piVar17;
  if (DAT_14c86a9fc == 0) {
    if (iVar4 == 2) goto LAB_144454e4a;
    if (iVar4 != 1) goto LAB_144454746;
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    if (DVar5 == DVar6) goto LAB_144454e4a;
  }
  else {
LAB_144454746:
    if (iVar4 == 0x10) goto LAB_144454e4a;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (*piVar17 == 2)) {
LAB_144454e4a:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
    if (*piVar17 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_144454e4a;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar7 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar7;
    if (puVar11 != (uint *)0x0) goto LAB_1444548b5;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_144455e0b);
      }
      lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar9 = *(undefined4 **)(lVar8 + 0x310);
      *(undefined8 *)(lVar8 + 0x310) = 0;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar9 = 0xffffffff;
      *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
      puVar9[0x12] = 0;
      *puVar7 = puVar9;
      FUN_140217a48(puVar7);
      puVar11 = (uint *)*puVar7;
LAB_1444548b5:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar16 + 0x17);
      uVar12 = puVar11[0x12];
      if (puVar14 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar1 = *puVar11;
        *puVar11 = *puVar11 + uVar12 + 1;
        UNLOCK();
        if ((uVar1 ^ uVar12) != 0xffffffff) break;
        puVar11 = (uint *)*puVar7;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar7 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar16 + 0x17);
        uVar12 = 0;
        if (puVar14 <= puVar11 + 0x4000) {
          uVar12 = 1;
          goto LAB_144454935;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_144454935:
    *(uint **)(puVar11 + 0x10) = puVar14;
    puVar11[0x12] = uVar12;
    iVar4 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14bab4bc0;
    puVar16[0x15] = plVar2;
    puVar16[0x16] = uVar10;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar12 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
        uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
        iVar4 = 0;
      }
      else {
        uVar15 = 2;
      }
    }
    else {
      iVar4 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar15 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar8 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar8 == 0) {
      uVar3 = 1;
      if ((char)uVar15 != '\x06') {
        uVar3 = uVar15;
      }
      uVar15 = uVar3;
      uVar10 = 0;
    }
    else {
      if ((char)uVar15 == '\x06') {
        uVar15 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
      }
      uVar10 = *(undefined8 *)(lVar8 + 0x30);
    }
    puVar16[0xf] = uVar10;
    puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar4;
    if (puVar16 == (undefined8 *)0x0) {
      local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar17 = (int *)(puVar16 + 1);
      *piVar17 = *piVar17 + -1;
      UNLOCK();
      if (*piVar17 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_98 = local_88;
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14bab4ba0;
    local_88[0] = (code *)&LAB_144456192;
    local_60 = plVar2;
    local_58 = uVar10;
    FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIDestroyInstanceData",&DAT_14cbfe1a0);
    if (local_88[0] != (code *)0x0) {
      pppuVar13 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar13 = &local_68;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144454fe8 FUN_144454fe8 body=130 status=ok
// SIG undefined FUN_144454fe8(void)

void FUN_144454fe8(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)
           FUN_1490c0b72(param_1 + 0x10,(int)((ulonglong)*param_3 >> 0x20) * 0x17 + (int)*param_3);
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = param_2 + 4;
    puVar4 = puVar1 + 4;
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = param_2 + 0x14;
    puVar4 = puVar1 + 0x14;
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar1 = *param_2;
    puVar1[0x25] = param_2[0x25];
    puVar1[0x24] = param_2[0x24];
  }
  return;
}



// FUNCTION 144455082 FUN_144455082 body=431 status=ok
// SIG undefined FUN_144455082(void)

void FUN_144455082(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  uint *local_78;
  uint local_70;
  uint local_6c;
  undefined1 local_65;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    iVar1 = param_3[2];
    iVar2 = param_3[1];
    iVar7 = (*param_3 + 1) * *(int *)(param_2 + 0x44);
    local_6c = iVar1 + 4;
    local_70 = iVar2 + 4;
    uVar5 = *(undefined8 *)
             (&DAT_14ca8c1f0 +
             (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
    FUN_145ed64c2();
    FUN_1448e935e(uVar5,local_58,&DAT_14cbfdde8,0);
    FUN_145ed64c2();
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar6 + 6;
    if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x40);
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar4 = puVar6 + 6;
    }
    local_6c = local_6c >> 2;
    local_70 = local_70 >> 2;
    *(undefined8 **)(param_1 + 0x70) = puVar4;
    *puVar6 = &PTR_FUN_14bab4ab8;
    puVar6[4] = 0;
    iVar3 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar6;
    *(int *)(puVar6 + 2) = iVar7;
    *(int *)((longlong)puVar6 + 0x14) = iVar2 + 1;
    *(int *)(puVar6 + 3) = iVar1 + 1;
    uVar5 = FUN_1481de36c(param_2 + 0x10,param_1);
    puVar6[4] = uVar5;
    local_78 = &local_64;
    local_60 = local_70;
    local_5c = local_6c;
    local_64 = iVar7 + 3U >> 2;
    FUN_1490bfc27(param_1,&local_65,local_58,puVar6 + 2);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144455232 FUN_144455232 body=504 status=ok
// SIG undefined FUN_144455232(void)

void FUN_144455232(longlong param_1,int param_2,longlong param_3,longlong param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  uint *local_88;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined1 local_65;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong *)(param_4 + 0x10) != 0) && (*(longlong *)(param_3 + 0x10) != 0)) {
    uVar5 = *(undefined8 *)
             (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)param_2 * 2) * 8);
    FUN_145e6a2d4();
    FUN_1448e935e(uVar5,local_58,&DAT_14cbfdf10,0);
    FUN_145e6a2d4();
    iVar1 = param_5[2];
    iVar2 = param_5[1];
    iVar7 = (*param_5 + 1) * *(int *)(param_4 + 0x44);
    local_70 = iVar1 + 4;
    local_74 = iVar2 + 4;
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar6 + 6;
    if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x40);
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar4 = puVar6 + 6;
    }
    local_70 = local_70 >> 2;
    local_74 = local_74 >> 2;
    local_6c = iVar7 + 3U >> 2;
    *(undefined8 **)(param_1 + 0x70) = puVar4;
    *puVar6 = &PTR_FUN_14bab4ad8;
    puVar6[4] = 0;
    puVar6[5] = 0;
    iVar3 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar6;
    *(int *)(puVar6 + 2) = iVar7;
    *(int *)((longlong)puVar6 + 0x14) = iVar2 + 1;
    *(int *)(puVar6 + 3) = iVar1 + 1;
    uVar5 = FUN_1481de2c4(param_3 + 0x10,param_1);
    puVar6[4] = uVar5;
    uVar5 = FUN_1481de36c(param_4 + 0x10,param_1);
    puVar6[5] = uVar5;
    local_88 = &local_64;
    local_64 = local_6c;
    local_60 = local_74;
    local_5c = local_70;
    FUN_1490c0091(param_1,&local_65,local_58,puVar6 + 2);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144455438 FUN_144455438 body=481 status=ok
// SIG undefined FUN_144455438(void)

void FUN_144455438(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1490bf3f6(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14445561a FUN_14445561a body=232 status=ok
// SIG undefined FUN_14445561a(void)

void FUN_14445561a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 144455702 FUN_144455702 body=81 status=ok
// SIG undefined FUN_144455702(void)

void FUN_144455702(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490bf499(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14445576c FUN_14445576c body=481 status=ok
// SIG undefined FUN_14445576c(void)

void FUN_14445576c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1490bfe78(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14445594e FUN_14445594e body=232 status=ok
// SIG undefined FUN_14445594e(void)

void FUN_14445594e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 144455a36 FUN_144455a36 body=81 status=ok
// SIG undefined FUN_144455a36(void)

void FUN_144455a36(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490bff1b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144455a88 FUN_144455a88 body=481 status=ok
// SIG undefined FUN_144455a88(void)

void FUN_144455a88(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1490c02e2(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144455c6a FUN_144455c6a body=232 status=ok
// SIG undefined FUN_144455c6a(void)

void FUN_144455c6a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 144455d52 FUN_144455d52 body=81 status=ok
// SIG undefined FUN_144455d52(void)

void FUN_144455d52(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1490c0385(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144455da4 FUN_144455da4 body=51 status=ok
// SIG undefined FUN_144455da4(void)

void FUN_144455da4(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144455dcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 144455de2 FUN_144455de2 body=12 status=ok
// SIG undefined FUN_144455de2(void)

void FUN_144455de2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144455deb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144455dee FUN_144455dee body=29 status=ok
// SIG undefined FUN_144455dee(void)

undefined8 FUN_144455dee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144455e32 FUN_144455e32 body=282 status=ok
// SIG undefined FUN_144455e32(void)

undefined8 * FUN_144455e32(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_144455e0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 144455f4c FUN_144455f4c body=98 status=ok
// SIG undefined FUN_144455f4c(void)

void FUN_144455f4c(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144455fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 144455fae FUN_144455fae body=51 status=ok
// SIG undefined FUN_144455fae(void)

void FUN_144455fae(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144455fd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 144455fec FUN_144455fec body=12 status=ok
// SIG undefined FUN_144455fec(void)

void FUN_144455fec(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144455ff5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144455ff8 FUN_144455ff8 body=29 status=ok
// SIG undefined FUN_144455ff8(void)

undefined8 FUN_144455ff8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144456016 FUN_144456016 body=282 status=ok
// SIG undefined FUN_144456016(void)

undefined8 * FUN_144456016(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_144455e0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 144456130 FUN_144456130 body=98 status=ok
// SIG undefined FUN_144456130(void)

void FUN_144456130(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144456188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1444561b0 FUN_1444561b0 body=12 status=ok
// SIG undefined FUN_1444561b0(void)

void FUN_1444561b0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001444561b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1444561bc FUN_1444561bc body=29 status=ok
// SIG undefined FUN_1444561bc(void)

undefined8 FUN_1444561bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444561da FUN_1444561da body=282 status=ok
// SIG undefined FUN_1444561da(void)

undefined8 * FUN_1444561da(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_144455e0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1444562f4 FUN_1444562f4 body=117 status=ok
// SIG undefined FUN_1444562f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444562f4(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1490c04fc(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1490c04fc(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014445635f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 144456375 FUN_144456375 body=666 status=ok
// SIG undefined FUN_144456375(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144456375(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cbfdb9c);
  if (cVar1 == '\0') {
    _DAT_14cbfdb9c = 0;
    uRam000000014cbfdba4 = 0;
  }
  if (local_50 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/HairStrandsCore",&PTR_FUN_14bab38e0,1,0);
  FUN_1446f470e(&DAT_14cbfdbc8,L"BuildDistanceField",1);
  FUN_1446f470e(&DAT_14cbfdbd0,L"BuildDensityField",1);
  FUN_1446f470e(&DAT_14cbfdbd8,L"SolveGridPressure",1);
  FUN_1446f470e(&DAT_14cbfdbe0,L"ScaleCellFields",1);
  FUN_1446f470e(&DAT_14cbfdbe8,L"SetSolidBoundary",1);
  FUN_1446f470e(&DAT_14cbfdbf0,L"ComputeBoundaryWeights",1);
  FUN_1446f470e(&DAT_14cbfdbf8,L"GetNodePosition",1);
  FUN_1446f470e(&DAT_14cbfdc00,L"GetDensityField",1);
  FUN_1446f470e(&DAT_14cbfdc08,L"UpdateDeformationGradient",1);
  local_48 = FUN_145e69d6a;
  local_50 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfdd28,&local_50);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/HairStrandsCore",&PTR_FUN_14bab4040,1,0);
  FUN_1446f470e(&DAT_14cbfdd50,L"BuildVelocityField",1);
  FUN_1446f470e(&DAT_14cbfdd58,L"SampleVelocityField",1);
  FUN_1446f470e(&DAT_14cbfdd60,L"ComputeGridSize",1);
  FUN_1446f470e(&DAT_14cbfdd68,L"UpdateGridTransform",1);
  FUN_1446f470e(&DAT_14cbfdd70,L"SetGridDimension",1);
  local_48 = FUN_145ed64c2;
  local_50 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfde98,&local_50);
  local_48 = FUN_145e6a2d4;
  local_50 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbfdfc0,&local_50);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144456610 FUN_144456610 body=55 status=ok
// SIG undefined FUN_144456610(void)

void FUN_144456610(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe520 == 0) {
    uVar1 = FUN_14125ebe1();
    DAT_14cbfe520 = FUN_14171c317(FUN_14667f7a2,uVar1,L"EUsdDrawMode");
  }
  return;
}



// FUNCTION 144456647 FUN_144456647 body=55 status=ok
// SIG undefined FUN_144456647(void)

void FUN_144456647(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe538 == 0) {
    uVar1 = FUN_14125ebe1();
    DAT_14cbfe538 = FUN_14171c317(FUN_14667f7d1,uVar1,L"EUsdModelCardGeometry");
  }
  return;
}



// FUNCTION 14445667e FUN_14445667e body=55 status=ok
// SIG undefined FUN_14445667e(void)

void FUN_14445667e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe550 == 0) {
    uVar1 = FUN_14125ebe1();
    DAT_14cbfe550 = FUN_14171c317(FUN_14667f800,uVar1,L"EUsdModelCardFace");
  }
  return;
}



// FUNCTION 1444566b5 FUN_1444566b5 body=55 status=ok
// SIG undefined FUN_1444566b5(void)

void FUN_1444566b5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe5e8 == 0) {
    uVar1 = FUN_14125ebe1();
    DAT_14cbfe5e8 = FUN_14171c317(FUN_14667fae6,uVar1,L"EUsdDuplicateType");
  }
  return;
}



// FUNCTION 144456724 FUN_144456724 body=325 status=ok
// SIG undefined FUN_144456724(void)

void FUN_144456724(void)

{
  FUN_14282b410(L"/Script/USDClasses",&PTR_FUN_14bab52b0,1,0,0,0,0);
  FUN_14282b410(L"/Script/USDClasses",&PTR_FUN_14bab67a0,1,0,0,0,0);
  FUN_14282b410(L"/Script/USDClasses",&PTR_FUN_14bab84b0,1,0,0,0,0);
  FUN_14282b410(L"/Script/USDClasses",&PTR_FUN_14bab9080,3,0,0,0,0);
  FUN_14282b410(L"/Script/USDClasses",&PTR_FUN_14babb2a0,7,&PTR_FUN_14babb270,1,0,0);
  FUN_14282b410(L"/Script/USDClasses",&PTR_FUN_14babd290,1,0,0,&PTR_FUN_14babd230,3);
  FUN_14098d3d2(FUN_1444566b5,L"/Script/USDClasses",L"EUsdDuplicateType",&DAT_14cbfe5e0);
  FUN_14282b410(L"/Script/USDClasses",0,0,&PTR_FUN_14babd700,3,0,0);
  return;
}



// FUNCTION 14445686c FUN_14445686c body=55 status=ok
// SIG undefined FUN_14445686c(void)

void FUN_14445686c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe660 == 0) {
    uVar1 = FUN_14125ebe1();
    DAT_14cbfe660 = FUN_14171c317(FUN_14667fecc,uVar1,L"EUsdSaveDialogBehavior");
  }
  return;
}



// FUNCTION 1444568a3 FUN_1444568a3 body=55 status=ok
// SIG undefined FUN_1444568a3(void)

void FUN_1444568a3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe678 == 0) {
    uVar1 = FUN_14125ebe1();
    DAT_14cbfe678 = FUN_14171c317(FUN_14667fefb,uVar1,L"EUsdEditInInstanceBehavior");
  }
  return;
}



// FUNCTION 1444568da FUN_1444568da body=55 status=ok
// SIG undefined FUN_1444568da(void)

void FUN_1444568da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe6c0 == 0) {
    uVar1 = FUN_14125ebe1();
    DAT_14cbfe6c0 = FUN_14171c317(FUN_14667ffcc,uVar1,L"EUsdUpAxis");
  }
  return;
}



// FUNCTION 144456911 FUN_144456911 body=69 status=ok
// SIG undefined FUN_144456911(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144456911(void)

{
  _DAT_14cbfe710 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144456953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbfe718,1);
  return;
}



// FUNCTION 144456968 FUN_144456968 body=146 status=ok
// SIG undefined FUN_144456968(void)

void FUN_144456968(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14bac1c00;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(param_1 + 0x14);
  *param_1 = &PTR__purecall_149e35f70;
  plVar1 = (longlong *)param_1[0xb];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  lVar2 = param_1[0xf];
  if (lVar2 == 0) {
    return;
  }
  if (*(longlong *)(lVar2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(lVar2);
  return;
}



// FUNCTION 1444569fa FUN_1444569fa body=256 status=ok
// SIG undefined FUN_1444569fa(void)

ulonglong FUN_1444569fa(void)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (longlong *)0x0;
  uStack_30 = 0;
  local_48 = 0;
  FUN_14086ecde(0,&local_38,1,0);
  uVar5 = 0;
  if ((longlong)(int)uStack_30 != 0) {
    plVar1 = local_38 + (int)uStack_30;
    plVar7 = local_38;
    do {
      plVar4 = (longlong *)*plVar7;
      uVar5 = (ulonglong)*(uint *)(plVar4 + 1);
      if ((*(uint *)(plVar4 + 1) >> 0x12 & 1) == 0) {
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x170))(plVar4,0,DAT_14c951640,0x30);
        }
        FUN_144757f48();
        uVar3 = *(uint *)((longlong)plVar4 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        do {
          uVar3 = *(uint *)(lVar6 + 8);
          uVar5 = (ulonglong)uVar3;
          if ((uVar3 >> 0x15 & 1) != 0) break;
          LOCK();
          uVar2 = *(uint *)(lVar6 + 8);
          if (uVar3 == uVar2) {
            *(uint *)(lVar6 + 8) = uVar3 | 0x200000;
          }
          else {
            uVar5 = (ulonglong)uVar2;
          }
          UNLOCK();
        } while (uVar3 != uVar2);
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
  if (local_38 != (longlong *)0x0) {
    uVar5 = FUN_1400020a8(local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 144456afc FUN_144456afc body=639 status=ok
// SIG undefined FUN_144456afc(void)

void FUN_144456afc(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = -1;
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      puVar2 = (ulonglong *)param_2[1];
      piVar1 = (int *)*puVar2 + 1;
      if ((int *)puVar2[1] < piVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
        }
        else {
          FUN_14572512c(param_2,&local_24);
        }
      }
      else {
        local_24 = *(int *)*puVar2;
        *puVar2 = (ulonglong)piVar1;
      }
    }
  }
  else {
    puVar2 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&DAT_14c764a38,4);
      }
      else {
        FUN_14572512c(param_2,&DAT_14c764a38);
      }
    }
    else {
      DAT_14c764a38 = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar1;
    }
    local_24 = DAT_14c764a38;
  }
  FUN_14021219d(param_2,param_1);
  (**(code **)(*param_2 + 0x128))(param_2,param_1 + 0x38);
  FUN_14021219d(param_2,param_1 + 0x58);
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x68),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar4 = *(undefined8 **)param_2[1];
  if ((undefined8 *)((longlong *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined8 *)(param_1 + 0x70),8);
    }
    else {
      FUN_146821949(param_2);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x70) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
  }
  puVar4 = *(undefined8 **)param_2[1];
  if ((undefined8 *)((longlong *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined8 *)(param_1 + 0x78),8);
    }
    else {
      FUN_146821949(param_2);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x78) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
  }
  FUN_1490cff4a(param_2,param_1 + 0x80);
  FUN_1490cff4a(param_2,param_1 + 0xd0);
  if (1 < local_24) {
    puVar5 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x120),1);
    }
    else {
      *(undefined1 *)(param_1 + 0x120) = *puVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
  }
  if ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0) {
    *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) | 4;
    local_30 = 0;
    local_38 = 1;
    FUN_140430222(param_1 + 0x10,param_2,param_3,0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144456d7c FUN_144456d7c body=2491 status=ok
// SIG undefined FUN_144456d7c(void)

void FUN_144456d7c(longlong *****param_1,longlong ******param_2,longlong ******param_3,
                  longlong ****param_4)

{
  longlong *****ppppplVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  longlong *****ppppplVar5;
  longlong ******pppppplVar6;
  int iVar7;
  longlong ******pppppplVar8;
  PSRWLOCK SRWLock;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong ***ppplVar12;
  longlong *****ppppplVar13;
  ushort uVar14;
  ushort uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong ****pppplVar18;
  bool bVar19;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  PSRWLOCK local_258;
  longlong ***local_250;
  longlong ****local_248;
  longlong ****local_240;
  longlong *****local_238;
  longlong *****ppppplStack_230;
  void *local_228;
  int local_220;
  longlong *****local_210;
  undefined8 local_208;
  longlong *****ppppplStack_200;
  void *local_1f8;
  int local_1f0;
  undefined4 local_1ec;
  undefined1 local_1dc [4];
  longlong *****local_1d8;
  longlong *****ppppplStack_1d0;
  void *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  undefined1 uStack_1b8;
  undefined1 uStack_1b7;
  undefined6 uStack_1b6;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  longlong ****local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_210 = (longlong *****)param_3;
  if (param_3 == (longlong ******)0x0) goto LAB_144456db3;
  local_258 = (PSRWLOCK)(param_1 + 0x32);
  local_250 = (longlong ***)param_4;
  AcquireSRWLockShared(local_258);
  FUN_1400bbfc4(&local_238,param_3);
  pvVar2 = local_228;
  local_208 = (longlong ******)local_238;
  ppppplStack_200 = ppppplStack_230;
  local_1f8 = (void *)0x0;
  local_1f0 = local_220;
  if ((longlong)local_220 == 0) {
    local_1ec = 0;
    local_1d8 = local_238;
    ppppplStack_1d0 = ppppplStack_230;
    iStack_1c0 = 0;
LAB_144456ec7:
    local_1c8 = (void *)0x0;
    uStack_1bc = 0;
    iVar4 = 0;
    local_208 = (longlong ******)local_1d8;
    ppppplStack_200 = ppppplStack_1d0;
  }
  else {
    FUN_1446dd670(&local_1f8,local_220,0);
    memcpy(local_1f8,pvVar2,(longlong)local_220 * 2);
    pvVar2 = local_1f8;
    lVar9 = (longlong)local_1f0;
    local_1d8 = (longlong *****)local_208;
    ppppplStack_1d0 = ppppplStack_200;
    local_1c8 = (void *)0x0;
    iStack_1c0 = local_1f0;
    if (lVar9 == 0) goto LAB_144456ec7;
    FUN_1446dd670(&local_1c8,local_1f0,0);
    memcpy(local_1c8,pvVar2,lVar9 * 2);
    iVar4 = iStack_1c0;
  }
  iVar7 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar7 = 0;
  }
  if (0 < iVar7) {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
    } while (iVar7 != iVar4);
  }
  if (local_1c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  pppplVar18 = (longlong ****)local_250;
  ppppplVar13 = param_1 + 0x1b;
  if (local_1f8 != (void *)0x0) {
    FUN_1400020a8();
  }
  iVar4 = FUN_1490d0238(ppppplVar13);
  if ((iVar4 == -1) || (*ppppplVar13 + (longlong)iVar4 * 2 == (longlong ****)0x0)) {
    ppplVar12 = (longlong ***)0x0;
  }
  else {
    ppplVar12 = (*ppppplVar13)[(longlong)iVar4 * 2] + 6;
  }
  if (local_228 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (ppplVar12 != (longlong ***)0x0) {
    iVar4 = *(int *)(ppplVar12 + 1);
    if (iVar4 == *(int *)(param_2 + 1)) {
      if (1 < iVar4) {
        lVar9 = 0;
        while( true ) {
          uVar14 = *(ushort *)((longlong)*ppplVar12 + lVar9);
          uVar10 = (ulonglong)uVar14;
          uVar15 = *(ushort *)((longlong)*param_2 + lVar9);
          if (uVar14 != uVar15) break;
          if (uVar14 == 0) goto LAB_1444571f2;
LAB_1444571c6:
          lVar9 = lVar9 + 2;
        }
        if ((uVar15 | uVar14) < 0x80) {
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar16 = (ulonglong)uVar15;
          uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar16]) goto LAB_1444571c6;
        }
        if (uVar14 != uVar15) goto LAB_144457233;
      }
    }
    else if (*(int *)(param_2 + 1) + iVar4 != 1) {
LAB_144457233:
      ReleaseSRWLockShared(local_258);
      goto LAB_144456db3;
    }
  }
LAB_1444571f2:
  ReleaseSRWLockShared(local_258);
  if (pppplVar18 == (longlong ****)0x0) {
    pppplVar18 = param_1[0x33];
  }
  ppppplVar1 = param_1 + 7;
  iVar4 = *(int *)(param_2 + 1);
  uVar10 = 0;
  iVar7 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar7 = 0;
  }
  if (0 < iVar7) {
    if (iVar4 == 0) {
      ppppplVar5 = (longlong *****)&DAT_149dfb77a;
    }
    else {
      ppppplVar5 = *param_2;
    }
    lVar9 = 0;
    uVar10 = 0;
    do {
      uVar14 = *(ushort *)((longlong)ppppplVar5 + lVar9 * 2);
      uVar11 = ((uint)(0x19 < uVar14 - 0x61) * 0x20 + (uint)uVar14) - 0x20;
      uVar17 = (uint)(uVar10 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar10 ^ uVar11) & 0xff) * 4);
      uVar10 = (ulonglong)
               (uVar17 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar17 & 0xff ^ uVar11 >> 8 & 0xff) * 4));
      lVar9 = lVar9 + 1;
    } while (iVar7 != (int)lVar9);
  }
  iVar4 = FUN_1490cdef6(ppppplVar1,uVar10,param_2);
  if ((iVar4 == -1) || (*ppppplVar1 + (longlong)iVar4 * 4 == (longlong ****)0x0)) {
LAB_1444572c3:
    local_240 = (longlong ****)ppppplVar13;
    AcquireSRWLockExclusive(local_258);
    pppppplVar6 = param_3;
LAB_1444572e1:
    pppppplVar8 = pppppplVar6;
    pppppplVar6 = pppppplVar8;
    if ((longlong ******)pppppplVar8[4] != (longlong ******)0x0) goto code_r0x0001444572f0;
    goto LAB_144457301;
  }
  pppppplVar6 = (longlong ******)(*ppppplVar1 + (longlong)iVar4 * 4)[2];
  if ((DAT_14c950c29 == '\x01') && (pppppplVar6 != (longlong ******)0x0)) {
    FUN_1456cec3c(pppppplVar6);
  }
  else if (pppppplVar6 == (longlong ******)0x0) goto LAB_1444572c3;
  SRWLock = local_258;
  if (pppppplVar6 != param_3) {
    cVar3 = FUN_1490c62c8(param_1,param_2);
    if ((cVar3 != '\0') && (lVar9 = FUN_1490c680c(param_1,param_2), lVar9 != 0)) goto LAB_1444572c3;
    goto LAB_144456db3;
  }
  AcquireSRWLockExclusive(local_258);
  FUN_1490c6218(param_1,param_3,pppplVar18);
  goto LAB_14445766a;
code_r0x0001444572f0:
  pppppplVar6 = (longlong ******)pppppplVar8[4];
  if ((*(uint *)(pppppplVar8 + 1) >> 0x1c & 1) == 0) goto LAB_1444572e1;
  pppppplVar6 = (longlong ******)FUN_142840154(pppppplVar8);
LAB_144457301:
  if (pppppplVar6 == (longlong ******)0x0) {
    pppppplVar6 = (longlong ******)pppppplVar8[4];
    goto LAB_1444572e1;
  }
  local_248 = (longlong ****)ppppplVar1;
  if (param_3[4] != param_1) {
    local_268 = 0;
    FUN_140af9fb2(&local_208,param_1,param_3[2],param_3[3]);
    FUN_1400021e4(&local_208,&local_1d8);
    pppppplVar6 = (longlong ******)&DAT_149dfb77a;
    if ((int)ppppplStack_1d0 != 0) {
      pppppplVar6 = (longlong ******)local_1d8;
    }
    (*(code *)(*param_3)[0x2e])(param_3,pppppplVar6,param_1,0x30);
    if ((longlong ******)local_1d8 != (longlong ******)0x0) {
      FUN_1400020a8();
    }
  }
  local_1c8 = (void *)0x0;
  iStack_1c0 = 0;
  uStack_1b6 = 0;
  local_1d8 = (longlong *****)0x0;
  ppppplStack_1d0 = (longlong *****)0x0;
  uStack_1bc = 0xffffff00;
  uStack_1b8 = 0xff;
  uStack_1b7 = 0xff;
  local_1b0 = DAT_14c845dbc;
  local_1a8 = DAT_14c845dc4;
  local_138 = 0;
  local_130 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = (longlong ****)0x0;
  uStack_178 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_12c = 0xffffffff00000080;
  local_124 = 0;
  local_118 = 0;
  local_110 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_250 = (longlong ***)pppplVar18;
  if (&local_1d8 != param_2) {
    uVar11 = *(uint *)(param_2 + 1);
    ppppplVar13 = *param_2;
    ppppplStack_1d0 = (longlong *****)(ulonglong)uVar11;
    if ((longlong)(int)uVar11 == 0) {
      ppppplStack_1d0 = (longlong *****)(ulonglong)uVar11;
    }
    else {
      FUN_1446dd670(&local_1d8,uVar11,0);
      memcpy(local_1d8,ppppplVar13,(longlong)(int)uVar11 * 2);
    }
  }
  local_238 = (longlong *****)0x0;
  ppppplStack_230 = (longlong *****)0x0;
  FUN_1401031ac(param_3[2],0,&local_238);
  local_208 = (longlong ******)local_238;
  iVar4 = (int)ppppplStack_230 + -1;
  if ((int)ppppplStack_230 == 0) {
    iVar4 = 0;
  }
  ppppplStack_200 = (longlong *****)CONCAT44(ppppplStack_200._4_4_,iVar4);
  FUN_14475bf92(&local_1a0);
  ppppplVar13 = (longlong *****)local_248;
  if (local_238 != (longlong *****)0x0) {
    FUN_1400020a8();
  }
  pppppplVar6 = (longlong ******)local_210;
  local_238 = (longlong *****)local_210[3];
  FUN_1400021e4(&local_238,&local_208);
  ppplVar12 = local_250;
  if (local_180 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
  local_180 = (longlong ****)local_208;
  uStack_178 = ppppplStack_200;
  local_170 = *(undefined4 *)(pppppplVar6 + 1);
  if ((longlong ****)ppplVar12 != (longlong ****)0x0) {
    uVar11 = *(uint *)((longlong)ppplVar12 + 0xc);
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar4 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar4 = *(int *)(lVar9 + 0x10);
      bVar19 = iVar4 == 0;
      if (bVar19) {
        *(int *)(lVar9 + 0x10) = iVar7;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar4 = iVar7;
      }
    }
    local_208 = (longlong ******)CONCAT44(iVar4,uVar11);
    FUN_146149022(&local_b0,&local_238,&local_208,0);
    pppppplVar6 = (longlong ******)local_210;
    ppppplVar13 = (longlong *****)local_248;
  }
  local_238 = (longlong *****)pppppplVar6;
  if ((pppppplVar6 != (longlong ******)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(pppppplVar6);
  }
  local_208 = param_2;
  ppppplStack_200 = (longlong *****)&local_238;
  FUN_1490cdfc2(ppppplVar13,local_1dc);
  FUN_1400bbfc4(&local_208,pppppplVar6);
  FUN_1490c70a0(local_240,&local_208,&local_1d8);
  if (local_1f8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1457b12ce(param_1 + 0x28,&local_208,&local_210,0);
  FUN_1490c45c6(&local_1d8);
  SRWLock = local_258;
LAB_14445766a:
  ReleaseSRWLockExclusive(SRWLock);
LAB_144456db3:
  if ((local_60 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144457738 FUN_144457738 body=2034 status=ok
// SIG undefined FUN_144457738(void)

/* WARNING: Removing unreachable block (ram,0x0001444579e8) */
/* WARNING: Removing unreachable block (ram,0x0001444579f4) */
/* WARNING: Removing unreachable block (ram,0x0001444579f8) */

longlong FUN_144457738(longlong param_1,undefined8 *param_2)

{
  PSRWLOCK SRWLock;
  void *pvVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  undefined ***pppuVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_198 [40];
  longlong local_170;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  ulonglong uStack_150;
  longlong local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  void *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  code *local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  undefined ***local_b8;
  undefined **local_a8;
  longlong local_a0;
  longlong local_88;
  undefined8 uStack_80;
  undefined2 *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  SRWLock = (PSRWLOCK)(param_1 + 400);
  AcquireSRWLockShared(SRWLock);
  iVar5 = *(int *)(param_2 + 1);
  uVar14 = 0;
  iVar9 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar9 = 0;
  }
  if (0 < iVar9) {
    if (iVar5 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    lVar16 = 0;
    uVar14 = 0;
    do {
      uVar15 = ((uint)(0x19 < (ushort)puVar6[lVar16] - 0x61) * 0x20 + (uint)(ushort)puVar6[lVar16])
               - 0x20;
      uVar19 = (uint)(uVar14 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar14 ^ uVar15) & 0xff) * 4);
      uVar14 = (ulonglong)
               (uVar19 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar19 & 0xff ^ uVar15 >> 8 & 0xff) * 4));
      lVar16 = lVar16 + 1;
    } while (iVar9 != (int)lVar16);
  }
  iVar5 = FUN_1490cdef6((longlong *)(param_1 + 0x38),uVar14,param_2);
  if ((iVar5 == -1) ||
     (lVar16 = (longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 0x38), lVar16 == 0)) {
    ReleaseSRWLockShared(SRWLock);
LAB_14445781e:
    AcquireSRWLockShared(SRWLock);
    iVar5 = *(int *)(param_2 + 1);
    uVar14 = 0;
    iVar9 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar9 = 0;
    }
    if (0 < iVar9) {
      puVar6 = &DAT_149dfb77a;
      if (iVar5 != 0) {
        puVar6 = (undefined2 *)*param_2;
      }
      lVar16 = 0;
      uVar14 = 0;
      do {
        uVar15 = ((uint)(0x19 < (ushort)puVar6[lVar16] - 0x61) * 0x20 + (uint)(ushort)puVar6[lVar16]
                 ) - 0x20;
        uVar19 = (uint)(uVar14 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar14 ^ uVar15) & 0xff) * 4);
        uVar14 = (ulonglong)
                 (uVar19 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar19 & 0xff ^ uVar15 >> 8 & 0xff) * 4));
        lVar16 = lVar16 + 1;
      } while (iVar9 != (int)lVar16);
    }
    iVar5 = FUN_1490d10fe((longlong *)(param_1 + 0x88),uVar14,param_2);
    if (iVar5 == -1) {
      ReleaseSRWLockShared(SRWLock);
    }
    else {
      lVar16 = *(longlong *)(param_1 + 0x88);
      ReleaseSRWLockShared(SRWLock);
      if (lVar16 + (longlong)iVar5 * 0x38 != 0) {
        local_b8 = (undefined ***)0x0;
        local_a8 = &PTR_LAB_14bac2ab0;
        local_a0 = param_1;
        local_c8 = FUN_144462cc0;
        local_68 = (undefined4)local_e8;
        uStack_64 = local_e8._4_4_;
        uStack_60 = (undefined4)uStack_e0;
        uStack_5c = uStack_e0._4_4_;
        local_58 = (undefined4)local_d8;
        uStack_54 = local_d8._4_4_;
        uStack_50 = (undefined4)uStack_d0;
        uStack_4c = uStack_d0._4_4_;
        local_78 = (undefined2 *)0x0;
        iStack_70 = iStack_f0;
        uStack_6c = uStack_ec;
        local_88 = 0;
        local_f8 = (longlong *)0x0;
        local_108 = FUN_144462ec8;
        local_e8 = &PTR_LAB_14bac2ad0;
        uStack_e0 = param_1;
        local_d8 = &local_108;
        uStack_d0 = &local_158;
        local_78 = (undefined2 *)0x0;
        uStack_80 = uStack_100;
        local_88 = 0;
        local_a8 = &PTR_LAB_14bac2ab0;
        local_b8 = (undefined ***)0x0;
        local_c8 = FUN_144462cc0;
        local_e8 = &PTR_LAB_14bac2ad0;
        local_f8 = (longlong *)0x0;
        local_108 = FUN_144462ec8;
        uStack_12c = uStack_ec;
        iStack_130 = iStack_f0;
        local_138 = (void *)0x0;
        uStack_13c = uStack_100._4_4_;
        uStack_140 = (undefined4)uStack_100;
        local_148 = 0;
        uStack_150 = 0;
        local_158 = (longlong *)0x0;
        AcquireSRWLockShared(SRWLock);
        pcVar3 = local_108;
        plVar12 = local_f8;
        if (local_f8 == (longlong *)0x0) {
          plVar12 = &local_e8;
        }
        uVar7 = (**(code **)(*plVar12 + 8))();
        (*pcVar3)(uVar7,(longlong)iVar5 * 0x38 + lVar16 + 0x10);
        ReleaseSRWLockShared(SRWLock);
        AcquireSRWLockExclusive(SRWLock);
        if ((longlong)(int)uStack_150 == 0) {
          local_170 = 0;
        }
        else {
          local_168 = local_158 + (longlong)(int)uStack_150 * 4;
          local_160 = (longlong *)(param_1 + 0xd8);
          local_170 = 0;
          plVar12 = local_158;
          do {
            local_148 = *plVar12;
            uStack_140 = (undefined4)plVar12[1];
            uStack_13c = *(undefined4 *)((longlong)plVar12 + 0xc);
            local_138 = (void *)0x0;
            iStack_130 = (int)plVar12[3];
            lVar16 = (longlong)iStack_130;
            pvVar1 = (void *)plVar12[2];
            if (lVar16 == 0) {
              uStack_12c = 0;
              iStack_70 = 0;
              local_88 = local_148;
              uStack_80 = plVar12[1];
LAB_144457b1e:
              local_78 = (undefined2 *)0x0;
              uStack_6c = 0;
              iVar5 = 0;
              local_148 = local_88;
            }
            else {
              FUN_1446dd670(&local_138,iStack_130,0);
              memcpy(local_138,pvVar1,lVar16 * 2);
              pvVar1 = local_138;
              lVar16 = (longlong)iStack_130;
              local_88 = local_148;
              uStack_80 = CONCAT44(uStack_13c,uStack_140);
              local_78 = (undefined2 *)0x0;
              iStack_70 = iStack_130;
              if (lVar16 == 0) goto LAB_144457b1e;
              FUN_1446dd670(&local_78,iStack_130,0);
              memcpy(local_78,pvVar1,lVar16 * 2);
              iVar5 = iStack_70;
            }
            lVar4 = uStack_80;
            lVar16 = local_88;
            uVar15 = 0;
            iVar9 = iVar5 + -1;
            if (iVar5 == 0) {
              iVar9 = 0;
            }
            if (0 < iVar9) {
              puVar6 = local_78;
              if (iVar5 == 0) {
                puVar6 = &DAT_149dfb77a;
              }
              lVar17 = 0;
              uVar14 = 0;
              do {
                uVar15 = ((uint)(ushort)puVar6[lVar17] +
                         (uint)(0x19 < (ushort)puVar6[lVar17] - 0x61) * 0x20) - 0x20;
                uVar19 = (uint)(uVar14 >> 8) ^
                         *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar14 ^ uVar15) & 0xff) * 4)
                ;
                uVar15 = uVar19 >> 8 ^
                         *(uint *)(&DAT_14c75d150 +
                                  (ulonglong)(uVar19 & 0xff ^ uVar15 >> 8 & 0xff) * 4);
                uVar14 = (ulonglong)uVar15;
                lVar17 = lVar17 + 1;
              } while (iVar9 != (int)lVar17);
            }
            if (local_78 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_138 != (void *)0x0) {
              FUN_1400020a8();
            }
            plVar8 = local_160;
            uVar19 = (uint)((ulonglong)lVar4 >> 0x10);
            uVar13 = (uint)lVar4 & 0xffff;
            uVar10 = (uint)((ulonglong)lVar16 >> 0x10);
            uVar18 = (uint)lVar16 & 0xffff;
            uVar18 = ((uint)lVar16 << 0x10 | uVar18) + (int)((ulonglong)lVar16 >> 0x20) +
                     (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar18 >> 4);
            uVar18 = (uVar18 >> 2) + 0x9e3779b9 +
                     ((uint)lVar4 << 0x10 | uVar13) + (int)((ulonglong)lVar4 >> 0x20) +
                     (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar13 >> 4) + uVar18 * 0x40 ^ uVar18;
            uVar10 = uVar18 >> 0xd ^ -uVar18;
            uVar19 = uVar10 << 8 ^ (-0x61c88647 - uVar18) - uVar10;
            uVar18 = uVar19 >> 0xd ^ (uVar18 - uVar10) - uVar19;
            uVar13 = uVar18 >> 0xc ^ (uVar10 - uVar19) - uVar18;
            uVar10 = uVar13 << 0x10 ^ (uVar19 - uVar18) - uVar13;
            uVar19 = uVar10 >> 5 ^ (uVar18 - uVar13) - uVar10;
            uVar13 = uVar19 >> 3 ^ (uVar13 - uVar10) - uVar19;
            uVar10 = uVar13 << 10 ^ (uVar10 - uVar19) - uVar13;
            uVar19 = uVar15 >> 0xd ^ (uVar10 >> 0xf ^ uVar19 - (uVar13 + uVar10)) - uVar15;
            uVar10 = uVar19 << 8 ^ (-0x61c88647 - uVar15) - uVar19;
            uVar13 = uVar10 >> 0xd ^ (uVar15 - uVar19) - uVar10;
            uVar18 = uVar13 >> 0xc ^ (uVar19 - uVar10) - uVar13;
            uVar15 = uVar18 << 0x10 ^ (uVar10 - uVar13) - uVar18;
            uVar19 = uVar15 >> 5 ^ (uVar13 - uVar18) - uVar15;
            uVar10 = uVar19 >> 3 ^ (uVar18 - uVar15) - uVar19;
            uVar15 = uVar10 << 10 ^ (uVar15 - uVar19) - uVar10;
            iVar5 = FUN_1490d0238(local_160,uVar15 >> 0xf ^ uVar19 - (uVar10 + uVar15));
            pcVar3 = local_c8;
            plVar2 = local_168;
            if (((iVar5 != -1) &&
                (plVar8 = (longlong *)((longlong)iVar5 * 0x10 + *plVar8), plVar8 != (longlong *)0x0)
                ) && (lVar16 = *plVar8 + 0x30, lVar16 != 0)) {
              local_88 = lVar16;
              pppuVar11 = local_b8;
              if (local_b8 == (undefined ***)0x0) {
                pppuVar11 = &local_a8;
              }
              uVar7 = (*(code *)(*pppuVar11)[1])();
              local_170 = (*pcVar3)(uVar7,&local_88);
              FUN_1490c6218(param_1,local_170);
            }
            plVar12 = plVar12 + 4;
          } while (plVar12 != plVar2);
        }
        ReleaseSRWLockExclusive(SRWLock);
        if (local_108 != (code *)0x0) {
          plVar12 = &local_e8;
          if (local_f8 != (longlong *)0x0) {
            plVar12 = local_f8;
          }
          (**(code **)(*plVar12 + 0x10))();
        }
        FUN_140861e20(local_158,uStack_150 & 0xffffffff);
        lVar16 = local_170;
        if (local_158 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_c8 != (code *)0x0) {
          pppuVar11 = &local_a8;
          if (local_b8 != (undefined ***)0x0) {
            pppuVar11 = local_b8;
          }
          (*(code *)(*pppuVar11)[2])();
        }
        goto LAB_144457efa;
      }
    }
    lVar16 = 0;
  }
  else {
    lVar16 = *(longlong *)(lVar16 + 0x10);
    if ((DAT_14c950c29 == '\x01') && (lVar16 != 0)) {
      FUN_1456cec3c(lVar16);
      ReleaseSRWLockShared(SRWLock);
    }
    else {
      ReleaseSRWLockShared(SRWLock);
      if (lVar16 == 0) goto LAB_14445781e;
    }
    AcquireSRWLockExclusive(SRWLock);
    FUN_1490c6218(param_1,lVar16,*(undefined8 *)(param_1 + 0x198));
    ReleaseSRWLockExclusive(SRWLock);
  }
LAB_144457efa:
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return lVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144457f2c FUN_144457f2c body=1092 status=ok
// SIG undefined FUN_144457f2c(void)

undefined8 FUN_144457f2c(longlong param_1,longlong param_2,longlong param_3)

{
  void *pvVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  int local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 != 0 && param_2 != 0) {
    FUN_1400bbfc4();
    pvVar1 = local_98;
    local_88 = local_a8;
    uStack_84 = uStack_a4;
    uStack_80 = uStack_a0;
    uStack_7c = uStack_9c;
    local_78 = (void *)0x0;
    local_70 = local_90;
    if ((longlong)local_90 == 0) {
      local_6c = 0;
      local_68 = CONCAT44(uStack_a4,local_a8);
      uStack_60 = CONCAT44(uStack_9c,uStack_a0);
      local_50 = 0;
LAB_144458028:
      local_58 = (undefined2 *)0x0;
      local_4c = 0;
      iVar2 = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_90,0);
      memcpy(local_78,pvVar1,(longlong)local_90 * 2);
      pvVar1 = local_78;
      lVar13 = (longlong)local_70;
      local_68 = CONCAT44(uStack_84,local_88);
      uStack_60 = CONCAT44(uStack_7c,uStack_80);
      local_58 = (undefined2 *)0x0;
      local_50 = local_70;
      if (lVar13 == 0) goto LAB_144458028;
      FUN_1446dd670(&local_58,local_70,0);
      memcpy(local_58,pvVar1,lVar13 * 2);
      iVar2 = local_50;
    }
    uVar6 = (uint)((ulonglong)uStack_60 >> 0x10);
    uVar8 = (uint)uStack_60 & 0xffff;
    uVar10 = (uint)((ulonglong)local_68 >> 0x10);
    uVar12 = (uint)local_68 & 0xffff;
    uVar10 = ((uint)local_68 << 0x10 | uVar12) + (int)((ulonglong)local_68 >> 0x20) +
             (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar12 >> 4);
    uVar10 = (uVar10 >> 2) + 0x9e3779b9 +
             ((uint)uStack_60 << 0x10 | uVar8) + (int)((ulonglong)uStack_60 >> 0x20) +
             (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar8 >> 4) + uVar10 * 0x40 ^ uVar10;
    uVar8 = uVar10 >> 0xd ^ -uVar10;
    uVar6 = uVar8 << 8 ^ (-0x61c88647 - uVar10) - uVar8;
    uVar10 = uVar6 >> 0xd ^ (uVar10 - uVar8) - uVar6;
    uVar8 = uVar10 >> 0xc ^ (uVar8 - uVar6) - uVar10;
    uVar6 = uVar8 << 0x10 ^ (uVar6 - uVar10) - uVar8;
    uVar10 = uVar6 >> 5 ^ (uVar10 - uVar8) - uVar6;
    uVar12 = uVar10 >> 3 ^ (uVar8 - uVar6) - uVar10;
    uVar8 = uVar12 << 10 ^ (uVar6 - uVar10) - uVar12;
    uVar11 = 0;
    uVar6 = iVar2 - 1;
    if (iVar2 == 0) {
      uVar6 = uVar11;
    }
    if (0 < (int)uVar6) {
      puVar3 = &DAT_149dfb77a;
      if (iVar2 != 0) {
        puVar3 = local_58;
      }
      lVar13 = 0;
      uVar11 = 0;
      do {
        uVar7 = ((uint)(ushort)puVar3[lVar13] + (uint)(0x19 < (ushort)puVar3[lVar13] - 0x61) * 0x20)
                - 0x20;
        uVar11 = uVar11 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar11 ^ uVar7) & 0xff) * 4);
        uVar11 = uVar11 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar11 & 0xff ^ uVar7 >> 8 & 0xff) * 4);
        lVar13 = lVar13 + 1;
      } while (uVar6 != (uint)lVar13);
    }
    uVar6 = uVar11 >> 0xd ^ (uVar8 >> 0xf ^ uVar10 - (uVar12 + uVar8)) - uVar11;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar11) - uVar6;
    uVar8 = uVar10 >> 0xd ^ (uVar11 - uVar6) - uVar10;
    uVar12 = uVar8 >> 0xc ^ (uVar6 - uVar10) - uVar8;
    uVar6 = uVar12 << 0x10 ^ (uVar10 - uVar8) - uVar12;
    uVar8 = uVar6 >> 5 ^ (uVar8 - uVar12) - uVar6;
    uVar10 = uVar8 >> 3 ^ (uVar12 - uVar6) - uVar8;
    uVar6 = uVar10 << 10 ^ (uVar6 - uVar8) - uVar10;
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    iVar2 = FUN_1490d0238((longlong *)(param_1 + 0xd8),uVar8 - (uVar10 + uVar6) ^ uVar6 >> 0xf,
                          &local_a8);
    if ((iVar2 == -1) ||
       (plVar4 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xd8)),
       plVar4 == (longlong *)0x0)) {
      lVar13 = 0;
    }
    else {
      lVar13 = *plVar4 + 0x30;
    }
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (lVar13 != 0) {
      uVar6 = *(uint *)(param_3 + 0xc);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar2 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar2 = *(int *)(lVar14 + 0x10);
        bVar15 = iVar2 == 0;
        if (bVar15) {
          *(int *)(lVar14 + 0x10) = iVar9;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar15) {
          iVar2 = iVar9;
        }
      }
      local_68 = CONCAT44(iVar2,uVar6);
      FUN_146149022(lVar13 + 0x128,&local_88,&local_68,0);
      uVar5 = 1;
      goto LAB_144457f64;
    }
  }
  uVar5 = 0;
LAB_144457f64:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 144458372 FUN_144458372 body=1178 status=ok
// SIG undefined FUN_144458372(void)

ulonglong FUN_144458372(longlong param_1,longlong param_2,ulonglong param_3)

{
  void *pvVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  int local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) {
    uVar8 = 0;
    goto LAB_14445839e;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 400));
  FUN_1400bbfc4(&local_a8,param_2);
  pvVar1 = local_98;
  local_88 = local_a8;
  uStack_84 = uStack_a4;
  uStack_80 = uStack_a0;
  uStack_7c = uStack_9c;
  local_78 = (void *)0x0;
  local_70 = local_90;
  if ((longlong)local_90 == 0) {
    local_6c = 0;
    local_68 = CONCAT44(uStack_a4,local_a8);
    uStack_60 = CONCAT44(uStack_9c,uStack_a0);
    local_50 = 0;
LAB_144458486:
    local_58 = (undefined2 *)0x0;
    local_4c = 0;
    iVar2 = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_90,0);
    memcpy(local_78,pvVar1,(longlong)local_90 * 2);
    pvVar1 = local_78;
    lVar12 = (longlong)local_70;
    local_68 = CONCAT44(uStack_84,local_88);
    uStack_60 = CONCAT44(uStack_7c,uStack_80);
    local_58 = (undefined2 *)0x0;
    local_50 = local_70;
    if (lVar12 == 0) goto LAB_144458486;
    FUN_1446dd670(&local_58,local_70,0);
    memcpy(local_58,pvVar1,lVar12 * 2);
    iVar2 = local_50;
  }
  uVar5 = (uint)((ulonglong)uStack_60 >> 0x10);
  uVar7 = (uint)uStack_60 & 0xffff;
  uVar9 = (uint)((ulonglong)local_68 >> 0x10);
  uVar11 = (uint)local_68 & 0xffff;
  uVar9 = ((uint)local_68 << 0x10 | uVar11) + (int)((ulonglong)local_68 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar11 >> 4);
  uVar9 = (uVar9 >> 2) + 0x9e3779b9 +
          ((uint)uStack_60 << 0x10 | uVar7) + (int)((ulonglong)uStack_60 >> 0x20) +
          (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4) + uVar9 * 0x40 ^ uVar9;
  uVar7 = uVar9 >> 0xd ^ -uVar9;
  uVar5 = uVar7 << 8 ^ (-0x61c88647 - uVar9) - uVar7;
  uVar9 = uVar5 >> 0xd ^ (uVar9 - uVar7) - uVar5;
  uVar7 = uVar9 >> 0xc ^ (uVar7 - uVar5) - uVar9;
  uVar5 = uVar7 << 0x10 ^ (uVar5 - uVar9) - uVar7;
  uVar9 = uVar5 >> 5 ^ (uVar9 - uVar7) - uVar5;
  uVar11 = uVar9 >> 3 ^ (uVar7 - uVar5) - uVar9;
  uVar7 = uVar11 << 10 ^ (uVar5 - uVar9) - uVar11;
  uVar10 = 0;
  uVar5 = iVar2 - 1;
  if (iVar2 == 0) {
    uVar5 = uVar10;
  }
  if (0 < (int)uVar5) {
    puVar3 = &DAT_149dfb77a;
    if (iVar2 != 0) {
      puVar3 = local_58;
    }
    lVar12 = 0;
    uVar10 = 0;
    do {
      uVar6 = ((uint)(ushort)puVar3[lVar12] + (uint)(0x19 < (ushort)puVar3[lVar12] - 0x61) * 0x20) -
              0x20;
      uVar10 = uVar10 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar10 ^ uVar6) & 0xff) * 4);
      uVar10 = uVar10 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
      lVar12 = lVar12 + 1;
    } while (uVar5 != (uint)lVar12);
  }
  uVar5 = uVar10 >> 0xd ^ (uVar7 >> 0xf ^ uVar9 - (uVar11 + uVar7)) - uVar10;
  uVar9 = uVar5 << 8 ^ (-0x61c88647 - uVar10) - uVar5;
  uVar7 = uVar9 >> 0xd ^ (uVar10 - uVar5) - uVar9;
  uVar11 = uVar7 >> 0xc ^ (uVar5 - uVar9) - uVar7;
  uVar5 = uVar11 << 0x10 ^ (uVar9 - uVar7) - uVar11;
  uVar7 = uVar5 >> 5 ^ (uVar7 - uVar11) - uVar5;
  uVar9 = uVar7 >> 3 ^ (uVar11 - uVar5) - uVar7;
  uVar5 = uVar9 << 10 ^ (uVar5 - uVar7) - uVar9;
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  iVar2 = FUN_1490d0238((longlong *)(param_1 + 0xd8),uVar7 - (uVar9 + uVar5) ^ uVar5 >> 0xf,
                        &local_a8);
  if ((iVar2 == -1) ||
     (plVar4 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xd8)),
     plVar4 == (longlong *)0x0)) {
    lVar12 = 0;
  }
  else {
    lVar12 = *plVar4 + 0x30;
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (lVar12 == 0) {
    uVar8 = 0;
  }
  else if (param_3 == 0) {
    uVar8 = (ulonglong)(*(int *)(lVar12 + 0x15c) < *(int *)(lVar12 + 0x130));
    FUN_147d81cb2(lVar12 + 0x128);
  }
  else {
    uVar5 = *(uint *)(param_3 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    uVar9 = *(uint *)(lVar13 + 0x10);
    if (*(uint *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      param_3 = (ulonglong)uVar7;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      param_3);
      }
      LOCK();
      uVar9 = *(uint *)(lVar13 + 0x10);
      bVar14 = uVar9 == 0;
      if (bVar14) {
        *(uint *)(lVar13 + 0x10) = uVar7;
        uVar9 = 0;
      }
      UNLOCK();
      if (bVar14) {
        uVar9 = uVar7;
      }
    }
    local_68 = CONCAT44(uVar9,uVar5);
    iVar2 = FUN_147db66f0(lVar12 + 0x128);
    uVar8 = CONCAT71((int7)(param_3 >> 8),0 < iVar2);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 400));
LAB_14445839e:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14445880e FUN_14445880e body=7796 status=ok
// SIG undefined FUN_14445880e(void)

/* WARNING: Removing unreachable block (ram,0x000144458bc5) */
/* WARNING: Removing unreachable block (ram,0x000144458bd0) */
/* WARNING: Removing unreachable block (ram,0x000144458bd4) */

void FUN_14445880e(longlong param_1)

{
  _struct_19 *p_Var1;
  double dVar2;
  ushort uVar3;
  void *pvVar4;
  LARGE_INTEGER LVar5;
  DWORD DVar6;
  LONG LVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  _struct_19 _Var14;
  char cVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined8 uVar21;
  longlong **pplVar22;
  uint *puVar23;
  longlong *plVar24;
  int iVar25;
  int iVar26;
  longlong *plVar27;
  LARGE_INTEGER *pLVar28;
  uint uVar29;
  ulonglong uVar30;
  longlong lVar31;
  uint uVar32;
  longlong lVar33;
  LARGE_INTEGER *pLVar34;
  LARGE_INTEGER *pLVar35;
  uint uVar36;
  uint *puVar37;
  uint uVar38;
  uint uVar39;
  ulonglong uVar40;
  uint uVar41;
  longlong lVar42;
  bool bVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 auStack_368 [32];
  undefined4 local_348;
  undefined4 local_340;
  undefined4 local_338;
  undefined8 local_330;
  wchar_t *local_328;
  undefined1 *local_320;
  undefined1 *local_318;
  LARGE_INTEGER *local_310;
  undefined1 *local_308;
  code *local_300;
  longlong local_2f0;
  ulonglong local_2e8;
  LARGE_INTEGER *local_2e0;
  ulonglong local_2d8;
  uint *local_2d0;
  ulonglong local_2c8;
  longlong *local_2c0;
  longlong local_2b8;
  LARGE_INTEGER local_2b0;
  longlong local_2a8;
  PSRWLOCK local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  DWORD local_288;
  LONG LStack_284;
  DWORD DStack_280;
  LONG LStack_27c;
  void *local_278;
  uint local_270;
  undefined4 local_26c;
  LARGE_INTEGER local_268;
  undefined8 uStack_260;
  longlong *local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  LARGE_INTEGER local_228;
  undefined8 uStack_220;
  longlong *local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  longlong local_1a8;
  undefined4 local_1a0;
  LARGE_INTEGER local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  int local_164;
  longlong local_158;
  int local_150;
  LARGE_INTEGER local_148 [4];
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  longlong local_108;
  int local_100;
  LARGE_INTEGER local_b8;
  _struct_19 _Stack_b0;
  longlong *local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_368;
  local_2f0 = param_1;
LAB_144458840:
  lVar42 = param_1;
  lVar18 = lVar42;
  if (*(longlong *)(lVar42 + 0x20) != 0) goto code_r0x00014445884f;
  goto LAB_144458860;
code_r0x00014445884f:
  param_1 = *(longlong *)(lVar42 + 0x20);
  if ((*(uint *)(lVar42 + 8) >> 0x1c & 1) == 0) goto LAB_144458840;
  lVar18 = FUN_142840154(lVar42);
LAB_144458860:
  if (lVar18 == 0) {
    param_1 = *(longlong *)(lVar42 + 0x20);
    goto LAB_144458840;
  }
  bVar43 = lVar18 == DAT_14c951640;
  dVar2 = *(double *)(local_2f0 + 0x28);
  lVar18 = -1;
  lVar42 = -1;
  if (0.0 <= dVar2) {
    uVar44 = SUB84(dVar2,0);
    uVar45 = (int)((ulonglong)dVar2 >> 0x20);
    if (dVar2 <= 0.0) {
      uVar44 = 0;
      uVar45 = 0;
    }
    dVar2 = (double)CONCAT44(uVar45,uVar44) + 0.5;
    uVar19 = (ulonglong)dVar2;
    lVar42 = ((longlong)(dVar2 - 9.223372036854776e+18) & (longlong)uVar19 >> 0x3f | uVar19) *
             1000000;
  }
  dVar2 = *(double *)(local_2f0 + 0x30);
  if (0.0 <= dVar2) {
    uVar44 = SUB84(dVar2,0);
    uVar45 = (int)((ulonglong)dVar2 >> 0x20);
    if (dVar2 <= 0.0) {
      uVar44 = 0;
      uVar45 = 0;
    }
    dVar2 = (double)CONCAT44(uVar45,uVar44) + 0.5;
    uVar19 = (ulonglong)dVar2;
    lVar18 = ((longlong)(dVar2 - 9.223372036854776e+18) & (longlong)uVar19 >> 0x3f | uVar19) *
             1000000;
  }
  local_290 = 0;
  local_298 = 0;
  local_128 = 0;
  local_120 = 0;
  local_148[0].QuadPart = 0;
  local_148[1] = (LARGE_INTEGER)0x0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  local_178 = 0;
  local_170 = 0;
  local_198.QuadPart = 0;
  uStack_190 = 0;
  local_16c = 0xffffffff00000080;
  local_164 = 0;
  local_158 = 0;
  local_150 = 0;
  uVar32 = *(int *)(local_2f0 + 0x40) - *(int *)(local_2f0 + 0x6c);
  if (uVar32 != 0) {
    if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar32);
    }
    FUN_1490d1670(local_148);
    iVar16 = 1;
    if (3 < uVar32) {
      uVar32 = (uVar32 | 1) + 0xe;
      iVar16 = 0x1f;
      if (uVar32 != 0) {
        for (; uVar32 >> iVar16 == 0; iVar16 = iVar16 + -1) {
        }
      }
      iVar16 = 1 << ((byte)iVar16 & 0x1f);
    }
    if ((local_100 == 0) || (local_100 < iVar16)) {
      local_100 = iVar16;
      FUN_1490ce344();
    }
  }
  lVar33 = (longlong)*(int *)(local_2f0 + 0x90) - (longlong)*(int *)(local_2f0 + 0xbc);
  uVar32 = (uint)lVar33;
  if ((uint)((int)uStack_190 - local_164) < uVar32) {
    if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(lVar33);
    }
    FUN_1490d180e(&local_198);
    iVar16 = 1;
    if (3 < uVar32) {
      uVar32 = (uVar32 | 1) + 0xe;
      iVar16 = 0x1f;
      if (uVar32 != 0) {
        for (; uVar32 >> iVar16 == 0; iVar16 = iVar16 + -1) {
        }
      }
      iVar16 = 1 << ((byte)iVar16 & 0x1f);
    }
    if ((local_150 == 0) || (local_150 < iVar16)) {
      local_150 = iVar16;
      FUN_1490d19a8();
    }
  }
  lVar33 = local_2f0;
  local_2d0 = (uint *)CONCAT71(local_2d0._1_7_,bVar43);
  pLVar34 = (LARGE_INTEGER *)(local_2f0 + 0x38);
  local_1c8 = 0;
  local_1c0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1bc = 0xffffffff00000080;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_2a0 = (PSRWLOCK)(local_2f0 + 400);
  local_2b8 = lVar18;
  local_2a8 = lVar42;
  AcquireSRWLockExclusive(local_2a0);
  QueryPerformanceCounter(&local_b8);
  plVar24 = (longlong *)(lVar33 + 0xd8);
  lVar18 = *(longlong *)(lVar33 + 0x130);
  local_2e0 = pLVar34;
  local_2c0 = plVar24;
  uVar19 = uStack_250;
  uVar40 = uStack_220;
  lVar42 = (longlong)local_208;
  do {
    if (lVar18 == 0) {
      local_208._4_4_ = (undefined4)((ulonglong)lVar42 >> 0x20);
      local_248._4_4_ = local_208._4_4_;
      uStack_240._0_4_ = (undefined4)uStack_200;
      uStack_200._4_4_ = (undefined4)((ulonglong)uStack_200 >> 0x20);
      uStack_240._4_4_ = uStack_200._4_4_;
      local_238._0_4_ = (undefined4)local_1f8;
      local_1f8._4_4_ = (undefined4)((ulonglong)local_1f8 >> 0x20);
      local_238._4_4_ = local_1f8._4_4_;
      uStack_80 = (undefined4)uStack_1f0;
      uStack_1f0._4_4_ = (undefined4)((ulonglong)uStack_1f0 >> 0x20);
      uStack_7c = uStack_1f0._4_4_;
      uStack_88 = (undefined4)local_1f8;
      iStack_84 = local_1f8._4_4_;
      uStack_90 = (undefined4)uStack_200;
      uStack_8c = uStack_200._4_4_;
      uStack_250._0_4_ = (uint)uStack_210;
      uStack_210._4_4_ = (undefined4)(uStack_210 >> 0x20);
      uStack_250._4_4_ = uStack_210._4_4_;
      local_a8 = (longlong *)0x0;
      uStack_a0 = (uint)uStack_210;
      uStack_9c = uStack_210._4_4_;
      uStack_220._4_4_ = (LONG)(uVar40 >> 0x20);
      LVar7 = uStack_220._4_4_;
      local_b8.QuadPart = 0;
      _Stack_b0.LowPart = (int)uVar40;
      _Stack_b0.HighPart = (int)(uVar40 >> 0x20);
      local_218 = (longlong *)0x0;
      uStack_210 = uVar19;
      local_228.QuadPart = (LONGLONG)FUN_14446357e;
      uStack_220 = uStack_260;
      local_208 = &PTR_LAB_14bac2af0;
      uStack_200 = local_2f0;
      local_1f8 = &local_228;
      uStack_1f0 = uStack_230;
      uStack_260._0_4_ = (DWORD)uVar40;
      uStack_230._0_4_ = uStack_80;
      uStack_230._4_4_ = uStack_7c;
      local_248._0_4_ = (undefined4)lVar42;
      uStack_260._4_4_ = LVar7;
      iStack_84 = local_238._4_4_;
      uStack_88 = (undefined4)local_238;
      uStack_8c = uStack_240._4_4_;
      uStack_90 = (undefined4)uStack_240;
      uStack_9c = uStack_250._4_4_;
      uStack_a0 = (uint)uStack_250;
      local_a8 = (longlong *)0x0;
      local_208 = &PTR_LAB_14bac2af0;
      local_218 = (longlong *)0x0;
      local_228.QuadPart = (LONGLONG)FUN_14446357e;
      local_268.QuadPart = 0;
      local_258 = (longlong *)0x0;
      local_b8.QuadPart = 0;
      _Stack_b0 = (_struct_19)uVar40;
      local_98 = (longlong **)lVar42;
      plVar20 = (longlong *)FUN_14001cc68(0x60,8);
      uVar13 = uStack_230._4_4_;
      uVar12 = (undefined4)uStack_230;
      uVar11 = local_238._4_4_;
      uVar10 = (undefined4)local_238;
      uVar9 = uStack_240._4_4_;
      uVar8 = (undefined4)uStack_240;
      uVar45 = local_248._4_4_;
      uVar44 = (undefined4)local_248;
      LVar7 = uStack_260._4_4_;
      DVar6 = (DWORD)uStack_260;
      LVar5 = local_268;
      *plVar20 = (longlong)&PTR_FUN_14bac2b10;
      plVar20[1] = local_2f0;
      plVar20[2] = (longlong)&local_228;
      plVar20[3] = (longlong)&local_268;
      plVar20[4] = (longlong)&local_1e8;
      *(undefined1 *)(plVar20 + 5) = local_2d0._0_1_;
      plVar20[6] = local_2a8;
      plVar20[7] = local_2b8;
      plVar20[8] = (longlong)&local_290;
      plVar20[9] = (longlong)&local_298;
      plVar20[10] = (longlong)local_148;
      plVar20[0xb] = (longlong)&local_198;
      if (plVar20 + 1 != (longlong *)0x0) {
        local_b8.QuadPart = (LONGLONG)FUN_144463bc6;
      }
      uVar21 = CONCAT44(uStack_9c,uStack_a0);
      local_268.s = local_b8.s;
      uStack_260._0_4_ = _Stack_b0.LowPart;
      uStack_260._4_4_ = _Stack_b0.HighPart;
      local_248 = (longlong)local_98;
      uStack_240 = CONCAT44(uStack_8c,uStack_90);
      local_238 = CONCAT44(iStack_84,uStack_88);
      uStack_230 = CONCAT44(uStack_7c,uStack_80);
      local_b8.s = LVar5.s;
      _Stack_b0.HighPart = LVar7;
      _Stack_b0.LowPart = DVar6;
      local_a8 = local_258;
      uStack_a0 = (uint)uStack_250;
      uStack_9c = uStack_250._4_4_;
      local_98 = (longlong **)CONCAT44(uVar45,uVar44);
      uStack_90 = uVar8;
      uStack_8c = uVar9;
      uStack_88 = uVar10;
      iStack_84 = uVar11;
      uStack_80 = uVar12;
      uStack_7c = uVar13;
      uStack_250 = uVar21;
      if (LVar5.QuadPart != 0) {
        plVar27 = local_a8;
        if (local_258 == (longlong *)0x0) {
          plVar27 = &local_98;
        }
        local_258 = plVar20;
        (**(code **)(*plVar27 + 0x10))();
        plVar20 = local_258;
      }
      local_258 = plVar20;
      pLVar34 = (LARGE_INTEGER *)(local_2f0 + 0x88);
      lVar18 = *(longlong *)(local_2f0 + 0x130);
      if (lVar18 == 0) {
        lVar18 = 0;
      }
      else {
        do {
          LVar5 = local_268;
          plVar20 = local_258;
          if (local_258 == (longlong *)0x0) {
            plVar20 = &local_248;
          }
          uVar21 = (**(code **)(*plVar20 + 8))();
          (*(code *)LVar5)(uVar21,lVar18 + 0x30,lVar18);
          lVar18 = *(longlong *)(lVar18 + 0x20);
        } while (lVar18 != 0);
        lVar18 = *(longlong *)(local_2f0 + 0x130);
      }
      pLVar28 = local_2e0;
      pLVar35 = &local_b8;
      for (lVar42 = 10; lVar42 != 0; lVar42 = lVar42 + -1) {
        *pLVar35 = *pLVar28;
        pLVar28 = pLVar28 + 1;
        pLVar35 = pLVar35 + 1;
      }
      pLVar28 = local_148;
      pLVar35 = local_2e0;
      for (lVar42 = 10; lVar42 != 0; lVar42 = lVar42 + -1) {
        *pLVar35 = *pLVar28;
        pLVar28 = pLVar28 + 1;
        pLVar35 = pLVar35 + 1;
      }
      pLVar28 = &local_b8;
      pLVar35 = local_148;
      for (lVar42 = 10; lVar42 != 0; lVar42 = lVar42 + -1) {
        *pLVar35 = *pLVar28;
        pLVar28 = pLVar28 + 1;
        pLVar35 = pLVar35 + 1;
      }
      pLVar28 = pLVar34;
      pLVar35 = &local_b8;
      for (lVar42 = 10; lVar42 != 0; lVar42 = lVar42 + -1) {
        *pLVar35 = *pLVar28;
        pLVar28 = pLVar28 + 1;
        pLVar35 = pLVar35 + 1;
      }
      pLVar28 = &local_198;
      for (lVar42 = 10; lVar42 != 0; lVar42 = lVar42 + -1) {
        *pLVar34 = *pLVar28;
        pLVar28 = pLVar28 + 1;
        pLVar34 = pLVar34 + 1;
      }
      pLVar34 = &local_b8;
      pLVar28 = &local_198;
      for (lVar42 = 10; lVar33 = local_2f0, lVar42 != 0; lVar42 = lVar42 + -1) {
        *pLVar28 = *pLVar34;
        pLVar34 = pLVar34 + 1;
        pLVar28 = pLVar28 + 1;
      }
      do {
        while( true ) {
          if (lVar18 == 0) {
            if (DAT_14c764a34 == '\x01') {
              for (lVar18 = *(longlong *)(lVar33 + 0x130); lVar18 != 0;
                  lVar18 = *(longlong *)(lVar18 + 0x20)) {
                FUN_1490c73fa(local_2f0,lVar18 + 0x30);
              }
            }
            QueryPerformanceCounter(&local_b8);
            if ((code *)local_268.QuadPart != (code *)0x0) {
              plVar24 = &local_248;
              if (local_258 != (longlong *)0x0) {
                plVar24 = local_258;
              }
              (**(code **)(*plVar24 + 0x10))();
            }
            if ((code *)local_228.QuadPart != (code *)0x0) {
              plVar24 = local_218;
              if (local_218 == (longlong *)0x0) {
                plVar24 = &local_208;
              }
              (**(code **)(*plVar24 + 0x10))();
            }
            ReleaseSRWLockExclusive(local_2a0);
            local_1a0 = 0;
            if (local_1a8 != 0) {
              FUN_1400020a8();
            }
            FUN_144a1c8ac(&local_1e8);
            local_150 = 0;
            if (local_158 != 0) {
              FUN_1400020a8();
            }
            FUN_140ba05b6(&local_198);
            local_100 = 0;
            if (local_108 != 0) {
              FUN_1400020a8();
            }
            FUN_145c6bddc(local_148);
            if ((local_60 ^ (ulonglong)auStack_368) == DAT_14c707940) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          if (*(char *)(lVar18 + 0x150) == '\0') break;
          lVar18 = *(longlong *)(lVar18 + 0x20);
        }
        local_2b8 = lVar18 + 0x30;
        FUN_1490c73fa();
        *(undefined4 *)(lVar18 + 0x48) = 0;
        *(undefined1 *)(lVar18 + 0x4c) = 0;
        FUN_1400ea36e(lVar18 + 0x40,lVar18 + 0x40);
        *(byte *)(lVar18 + 0x56) = *(byte *)(lVar18 + 0x56) & 0xfb;
        uVar32 = *(uint *)(lVar18 + 0xd8);
        if (uVar32 == 0) {
          uVar40 = 1;
          pLVar34 = (LARGE_INTEGER *)0x0;
          iVar16 = 0;
          uVar39 = 0;
        }
        else {
          puVar23 = *(uint **)(lVar18 + 0xd0);
          if (*(uint **)(lVar18 + 0xd0) == (uint *)0x0) {
            puVar23 = (uint *)(lVar18 + 0xc0);
          }
          uVar39 = *puVar23;
          if (uVar39 == 0) {
            iVar16 = uVar32 + 0x1e;
            if (-1 < (int)(uVar32 - 1)) {
              iVar16 = uVar32 - 1;
            }
            pLVar34 = (LARGE_INTEGER *)0x0;
            pLVar28 = (LARGE_INTEGER *)(ulonglong)(uint)(iVar16 >> 5);
            if (iVar16 >> 5 < 1) {
              pLVar28 = pLVar34;
            }
            iVar16 = 0;
            do {
              if (pLVar28 == pLVar34) goto LAB_14445a104;
              iVar16 = iVar16 + 0x20;
              uVar39 = puVar23[(longlong)pLVar34 + 1];
              pLVar34 = (LARGE_INTEGER *)((longlong)&(pLVar34->s).LowPart + 1);
            } while (uVar39 == 0);
          }
          else {
            pLVar34 = (LARGE_INTEGER *)0x0;
            iVar16 = 0;
          }
          uVar40 = (ulonglong)(-uVar39 & uVar39);
          uVar19 = uVar40 * 2 + 1;
          lVar42 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar42 == 0; lVar42 = lVar42 + -1) {
            }
          }
          uVar39 = (iVar16 - ((uint)lVar42 ^ 0x3f)) + 0x3e;
          if ((int)uVar32 <= (int)uVar39) {
            uVar39 = uVar32;
          }
        }
        if (uVar39 != uVar32) {
          uVar29 = 0xffffffff;
          local_2d0 = (uint *)(lVar18 + 0xc0);
          local_2c8 = (ulonglong)uVar32;
          do {
            local_2b0.s.LowPart = uVar29;
            lVar42 = *(longlong *)(lVar18 + 0xb0);
            lVar33 = (longlong)(int)uVar39;
            p_Var1 = (_struct_19 *)(lVar42 + lVar33 * 0x28);
            local_288 = p_Var1->LowPart;
            LStack_284 = p_Var1->HighPart;
            DStack_280 = p_Var1[1].LowPart;
            LStack_27c = p_Var1[1].HighPart;
            local_278 = (void *)0x0;
            local_270 = *(uint *)(lVar42 + 0x18 + lVar33 * 0x28);
            lVar31 = (longlong)(int)local_270;
            pvVar4 = *(void **)(lVar42 + 0x10 + lVar33 * 0x28);
            local_2d8 = CONCAT44(local_2d8._4_4_,iVar16);
            local_2e8 = uVar40;
            local_2e0 = pLVar34;
            if (lVar31 == 0) {
              local_26c = 0;
              uStack_a0 = 0;
              local_b8.s = *p_Var1;
              _Stack_b0 = p_Var1[1];
LAB_14445a291:
              local_a8 = (longlong *)0x0;
              uStack_9c = 0;
              uVar32 = 0;
            }
            else {
              FUN_1446dd670(&local_278,local_270,0);
              memcpy(local_278,pvVar4,lVar31 * 2);
              pvVar4 = local_278;
              lVar31 = (longlong)(int)local_270;
              local_b8.s.HighPart = LStack_284;
              local_b8.s.LowPart = local_288;
              _Stack_b0.HighPart = LStack_27c;
              _Stack_b0.LowPart = DStack_280;
              local_a8 = (longlong *)0x0;
              uStack_a0 = local_270;
              if (lVar31 == 0) goto LAB_14445a291;
              FUN_1446dd670(&local_a8,local_270,0);
              memcpy(local_a8,pvVar4,lVar31 * 2);
              uVar32 = uStack_a0;
            }
            _Var14 = _Stack_b0;
            LVar5 = local_b8;
            uVar39 = 0;
            iVar16 = uVar32 - 1;
            if (uVar32 == 0) {
              iVar16 = 0;
            }
            if (0 < iVar16) {
              plVar24 = local_a8;
              if (uVar32 == 0) {
                plVar24 = (longlong *)&DAT_149dfb77a;
              }
              lVar31 = 0;
              uVar19 = 0;
              do {
                uVar3 = *(ushort *)((longlong)plVar24 + lVar31 * 2);
                uVar32 = ((uint)uVar3 + (uint)(0x19 < uVar3 - 0x61) * 0x20) - 0x20;
                uVar39 = (uint)(uVar19 >> 8) ^
                         *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar19 ^ uVar32) & 0xff) * 4)
                ;
                uVar39 = uVar39 >> 8 ^
                         *(uint *)(&DAT_14c75d150 +
                                  (ulonglong)(uVar39 & 0xff ^ uVar32 >> 8 & 0xff) * 4);
                uVar19 = (ulonglong)uVar39;
                lVar31 = lVar31 + 1;
              } while (iVar16 != (int)lVar31);
            }
            if (local_a8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_278 != (void *)0x0) {
              FUN_1400020a8();
            }
            plVar24 = local_2c0;
            uVar29 = _Var14.LowPart & 0xffff;
            uVar32 = (uint)((ulonglong)LVar5 >> 0x10);
            uVar41 = LVar5.s.LowPart & 0xffff;
            uVar41 = (LVar5.s.LowPart << 0x10 | uVar41) + LVar5.s.HighPart +
                     (uVar32 << 0x13 | uVar32 & 0xffff) + (uVar41 >> 4);
            uVar41 = (uVar41 >> 2) + 0x9e3779b9 +
                     (_Var14.LowPart << 0x10 | uVar29) + _Var14.HighPart +
                     (_Var14._2_4_ << 0x13 | _Var14._2_4_ & 0xffff) + (uVar29 >> 4) + uVar41 * 0x40
                     ^ uVar41;
            uVar29 = uVar41 >> 0xd ^ -uVar41;
            uVar32 = uVar29 << 8 ^ (-0x61c88647 - uVar41) - uVar29;
            uVar36 = uVar32 >> 0xd ^ (uVar41 - uVar29) - uVar32;
            uVar41 = uVar36 >> 0xc ^ (uVar29 - uVar32) - uVar36;
            uVar29 = uVar41 << 0x10 ^ (uVar32 - uVar36) - uVar41;
            uVar32 = uVar29 >> 5 ^ (uVar36 - uVar41) - uVar29;
            uVar41 = uVar32 >> 3 ^ (uVar41 - uVar29) - uVar32;
            uVar29 = uVar41 << 10 ^ (uVar29 - uVar32) - uVar41;
            uVar32 = uVar39 >> 0xd ^ (uVar29 >> 0xf ^ uVar32 - (uVar41 + uVar29)) - uVar39;
            uVar29 = uVar32 << 8 ^ (-0x61c88647 - uVar39) - uVar32;
            uVar39 = uVar29 >> 0xd ^ (uVar39 - uVar32) - uVar29;
            uVar41 = uVar39 >> 0xc ^ (uVar32 - uVar29) - uVar39;
            uVar32 = uVar41 << 0x10 ^ (uVar29 - uVar39) - uVar41;
            uVar39 = uVar32 >> 5 ^ (uVar39 - uVar41) - uVar32;
            uVar29 = uVar39 >> 3 ^ (uVar41 - uVar32) - uVar39;
            uVar32 = uVar29 << 10 ^ (uVar32 - uVar39) - uVar29;
            iVar17 = FUN_1490d0238(local_2c0,uVar32 >> 0xf ^ uVar39 - (uVar29 + uVar32),
                                   lVar42 + lVar33 * 0x28);
            puVar23 = local_2d0;
            pLVar34 = local_2e0;
            uVar19 = local_2e8;
            iVar16 = (int)local_2d8;
            if (((iVar17 != -1) &&
                (plVar20 = (longlong *)((longlong)iVar17 * 0x10 + *plVar24),
                plVar20 != (longlong *)0x0)) && (lVar42 = *plVar20, lVar42 != -0x30)) {
              FUN_147008394(lVar42 + 0x100,lVar18);
            }
            uVar29 = local_2b0._0_4_ & ~(uint)uVar19;
            puVar37 = *(uint **)(lVar18 + 0xd0);
            if (*(uint **)(lVar18 + 0xd0) == (uint *)0x0) {
              puVar37 = puVar23;
            }
            uVar32 = *(uint *)(lVar18 + 0xd8);
            iVar17 = (int)pLVar34;
            lVar42 = (longlong)iVar17;
            uVar39 = puVar37[lVar42] & uVar29;
            if (uVar39 == 0) {
              iVar26 = uVar32 + 0x1e;
              if (-1 < (int)(uVar32 - 1)) {
                iVar26 = uVar32 - 1;
              }
              iVar26 = iVar26 >> 5;
              iVar16 = iVar16 + 0x20;
              iVar25 = iVar26;
              if (iVar26 < iVar17) {
                iVar25 = iVar17;
              }
              if (iVar17 < iVar26) {
                lVar33 = 0;
                do {
                  uVar39 = puVar37[lVar42 + lVar33 + 1];
                  if (uVar39 != 0) {
                    pLVar34 = (LARGE_INTEGER *)(ulonglong)(iVar17 + (int)lVar33 + 1);
                    uVar29 = 0xffffffff;
                    goto LAB_14445a5eb;
                  }
                  iVar16 = iVar16 + 0x20;
                  lVar33 = lVar33 + 1;
                } while (iVar25 - lVar42 != lVar33);
                uVar29 = 0xffffffff;
                iVar17 = iVar25;
              }
              pLVar34 = (LARGE_INTEGER *)(ulonglong)(iVar17 + 1);
              uVar40 = local_2e8;
              plVar24 = local_2c0;
              uVar39 = uVar32;
            }
            else {
LAB_14445a5eb:
              uVar40 = (ulonglong)(-uVar39 & uVar39);
              uVar19 = uVar40 * 2 + 1;
              lVar42 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar42 == 0; lVar42 = lVar42 + -1) {
                }
              }
              uVar39 = (iVar16 - ((uint)lVar42 ^ 0x3f)) + 0x3e;
              if ((int)uVar32 <= (int)uVar39) {
                uVar39 = uVar32;
              }
            }
          } while (uVar39 != (uint)local_2c8);
        }
LAB_14445a104:
        lVar42 = *(longlong *)(lVar18 + 0x20);
        FUN_1490d05d8(plVar24,lVar18);
        if (*(longlong *)(local_2f0 + 0x128) == lVar18) {
          *(undefined8 *)(local_2f0 + 0x128) = *(undefined8 *)(lVar18 + 0x28);
        }
        lVar33 = *(longlong *)(lVar18 + 0x20);
        if (*(longlong *)(local_2f0 + 0x130) == lVar18) {
          *(longlong *)(local_2f0 + 0x130) = lVar33;
        }
        lVar31 = *(longlong *)(lVar18 + 0x28);
        if (lVar33 != 0) {
          *(longlong *)(lVar33 + 0x28) = lVar31;
        }
        if (lVar31 != 0) {
          *(undefined8 *)(lVar31 + 0x20) = *(undefined8 *)(lVar18 + 0x20);
        }
        *(undefined8 *)(lVar18 + 0x20) = 0;
        *(undefined8 *)(lVar18 + 0x28) = 0;
        FUN_1490c45c6(local_2b8);
        if (*(longlong *)(lVar18 + 0x10) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar18);
        lVar18 = lVar42;
        lVar33 = local_2f0;
      } while( true );
    }
    *(undefined1 *)(lVar18 + 0x150) = 0;
    uStack_250 = uVar19;
    uStack_220 = uVar40;
    local_208 = (undefined **)lVar42;
    if (*(longlong *)(lVar18 + 0xa0) == 0) {
      iVar16 = *(int *)(lVar18 + 0x38) + -1;
      if (*(int *)(lVar18 + 0x38) == 0) {
        iVar16 = 0;
      }
      if (0 < iVar16) {
        iVar17 = 0;
        do {
          iVar17 = iVar17 + 1;
        } while (iVar16 != iVar17);
      }
      iVar16 = FUN_1490cdef6(pLVar34);
      if (iVar16 == -1) {
        plVar24 = (longlong *)0x0;
      }
      else {
        lVar42 = (longlong)iVar16 * 0x20 + pLVar34->QuadPart;
        if (lVar42 == 0) {
          plVar24 = (longlong *)0x0;
        }
        else {
          plVar24 = *(longlong **)(lVar42 + 0x10);
          if ((DAT_14c950c29 == '\x01') && (plVar24 != (longlong *)0x0)) {
            FUN_1456cec3c(plVar24);
          }
        }
      }
      uVar21 = FUN_1490c4ce5(plVar24);
      *(undefined8 *)(lVar18 + 0xa0) = uVar21;
      uVar21 = FUN_1490c4ce5();
      *(undefined8 *)(lVar18 + 0xa8) = uVar21;
      local_98 = (longlong **)0x0;
      uStack_90 = 0;
      local_b8.QuadPart = 0;
      _Stack_b0.LowPart = 0;
      _Stack_b0.HighPart = 0;
      uStack_8c = 0x80;
      uStack_88 = 0xffffffff;
      iStack_84 = 0;
      local_78 = 0;
      local_70 = 0;
      if (plVar24 != (longlong *)0x0) {
        lVar33 = FUN_140a1dfd8();
        lVar42 = plVar24[2];
        iVar16 = *(int *)(lVar33 + 0x38);
        iVar17 = *(int *)(lVar42 + 0x38);
        if ((iVar17 < iVar16) ||
           (*(longlong *)(*(longlong *)(lVar42 + 0x30) + (longlong)iVar16 * 8) != lVar33 + 0x30)) {
          if (DAT_14caec308 == 0) {
            local_228.QuadPart = (LONGLONG)FUN_1417df956;
            local_300 = FUN_14081d0ea;
            local_308 = &LAB_146386466;
            local_318 = &LAB_147bb408b;
            local_320 = &LAB_1463eaa15;
            local_328 = L"Engine";
            local_330 = 0;
            local_338 = 0x10000001;
            local_340 = 8;
            local_348 = 0x2e0;
            local_310 = &local_228;
            FUN_14081cfa3(L"/Script/Engine",L"MaterialInstance",&DAT_14caec308,&DAT_147bb408a);
            lVar42 = plVar24[2];
            iVar17 = *(int *)(lVar42 + 0x38);
          }
          if ((iVar17 < *(int *)(DAT_14caec308 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(lVar42 + 0x30) + (longlong)*(int *)(DAT_14caec308 + 0x38) * 8) !=
              DAT_14caec308 + 0x30)) {
            if (DAT_14cb06da8 == 0) {
              local_228.QuadPart = (LONGLONG)FUN_1449e2820;
              local_300 = FUN_14081d0ea;
              local_308 = &LAB_1464003b0;
              local_318 = &LAB_147d17bdf;
              local_320 = &LAB_1417edf22;
              local_328 = L"Engine";
              local_330 = 0;
              local_338 = 0x10000000;
              local_340 = 8;
              local_348 = 0x588;
              local_310 = &local_228;
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
              lVar42 = plVar24[2];
              iVar17 = *(int *)(lVar42 + 0x38);
            }
            if ((iVar17 < *(int *)(DAT_14cb06da8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(lVar42 + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
                DAT_14cb06da8 + 0x30)) {
              lVar42 = FUN_1406d0862();
              if ((*(int *)(plVar24[2] + 0x38) < *(int *)(lVar42 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar24[2] + 0x30) + (longlong)*(int *)(lVar42 + 0x38) * 8) !=
                  lVar42 + 0x30)) {
                lVar42 = FUN_14110cae2();
                if ((*(int *)(plVar24[2] + 0x38) < *(int *)(lVar42 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar24[2] + 0x30) + (longlong)*(int *)(lVar42 + 0x38) * 8) !=
                    lVar42 + 0x30)) {
                  lVar42 = FUN_1402576f0();
                  if ((*(int *)(plVar24[2] + 0x38) < *(int *)(lVar42 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(plVar24[2] + 0x30) + (longlong)*(int *)(lVar42 + 0x38) * 8) !=
                      lVar42 + 0x30)) {
                    lVar42 = FUN_141225dee();
                    if ((*(int *)(plVar24[2] + 0x38) < *(int *)(lVar42 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(plVar24[2] + 0x30) + (longlong)*(int *)(lVar42 + 0x38) * 8)
                        != lVar42 + 0x30)) {
                      lVar42 = FUN_141167aa0();
                      if ((*(int *)(plVar24[2] + 0x38) < *(int *)(lVar42 + 0x38)) ||
                         (*(longlong *)
                           (*(longlong *)(plVar24[2] + 0x30) + (longlong)*(int *)(lVar42 + 0x38) * 8
                           ) != lVar42 + 0x30)) {
                        lVar33 = FUN_1458e7584();
                        lVar42 = plVar24[2];
                        iVar16 = *(int *)(lVar42 + 0x38);
                        if ((iVar16 < *(int *)(lVar33 + 0x38)) ||
                           (*(longlong *)
                             (*(longlong *)(lVar42 + 0x30) + (longlong)*(int *)(lVar33 + 0x38) * 8)
                            != lVar33 + 0x30)) {
                          if (DAT_14cb0b430 == 0) {
                            local_228.QuadPart = (LONGLONG)FUN_1449e2820;
                            local_300 = FUN_14081d0ea;
                            local_308 = &LAB_145892f94;
                            local_318 = &LAB_147d6dbf3;
                            local_320 = &LAB_1464081e0;
                            local_328 = L"Engine";
                            local_330 = 0;
                            local_338 = 0x10000001;
                            local_340 = 8;
                            local_348 = 0x138;
                            local_310 = &local_228;
                            FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be)
                            ;
                            lVar42 = plVar24[2];
                            iVar16 = *(int *)(lVar42 + 0x38);
                          }
                          if ((iVar16 < *(int *)(DAT_14cb0b430 + 0x38)) ||
                             (*(longlong *)
                               (*(longlong *)(lVar42 + 0x30) +
                               (longlong)*(int *)(DAT_14cb0b430 + 0x38) * 8) != DAT_14cb0b430 + 0x30
                             )) {
                            lVar42 = FUN_140f5e1c2();
                            if ((*(int *)(plVar24[2] + 0x38) < *(int *)(lVar42 + 0x38)) ||
                               (*(longlong *)
                                 (*(longlong *)(plVar24[2] + 0x30) +
                                 (longlong)*(int *)(lVar42 + 0x38) * 8) != lVar42 + 0x30)) {
                              lVar42 = FUN_140654dc2();
                              if ((*(int *)(plVar24[2] + 0x38) < *(int *)(lVar42 + 0x38)) ||
                                 (*(longlong *)
                                   (*(longlong *)(plVar24[2] + 0x30) +
                                   (longlong)*(int *)(lVar42 + 0x38) * 8) != lVar42 + 0x30)) {
                                lVar42 = FUN_1459e950e();
                                if ((*(int *)(plVar24[2] + 0x38) < *(int *)(lVar42 + 0x38)) ||
                                   (*(longlong *)
                                     (*(longlong *)(plVar24[2] + 0x30) +
                                     (longlong)*(int *)(lVar42 + 0x38) * 8) != lVar42 + 0x30)) {
                                  lVar42 = FUN_1411c531a();
                                  if ((*(int *)(plVar24[2] + 0x38) < *(int *)(lVar42 + 0x38)) ||
                                     (*(longlong *)
                                       (*(longlong *)(plVar24[2] + 0x30) +
                                       (longlong)*(int *)(lVar42 + 0x38) * 8) != lVar42 + 0x30)) {
                                    FUN_14101bb0e();
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      goto LAB_1444590e8;
                    }
                    local_228 = *(LARGE_INTEGER *)(plVar24 + 7);
                    FUN_146862646(&local_b8,&local_268,&local_228,0);
                    local_228 = *(LARGE_INTEGER *)(plVar24 + 9);
                    FUN_146862646(&local_b8,&local_268,&local_228,0);
                    local_228 = *(LARGE_INTEGER *)(plVar24 + 8);
                    FUN_146862646(&local_b8,&local_268,&local_228,0);
                    local_228 = *(LARGE_INTEGER *)(plVar24 + 10);
                    FUN_146862646(&local_b8,&local_268,&local_228,0);
                    local_228 = *(LARGE_INTEGER *)(plVar24 + 0xb);
                  }
                  else {
                    local_228.QuadPart = (**(code **)(plVar24[6] + 0x18))(plVar24 + 6,0);
                    FUN_146862646(&local_b8,&local_268,&local_228,0);
                    local_228 = *(LARGE_INTEGER *)(plVar24 + 8);
                  }
                  FUN_146862646(&local_b8,&local_268,&local_228,0);
                }
                else {
                  lVar42 = plVar24[7];
                  if ((longlong)(int)lVar42 != 0) {
                    lVar33 = plVar24[6];
                    lVar31 = 0;
                    do {
                      local_228 = *(LARGE_INTEGER *)(lVar33 + lVar31);
                      FUN_146862646(&local_b8,&local_268,&local_228,0);
                      lVar31 = lVar31 + 8;
                    } while ((longlong)(int)lVar42 * 8 != lVar31);
                  }
                }
              }
              else {
                uVar32 = *(uint *)(plVar24 + 0x2c);
                uVar19 = (ulonglong)(int)uVar32;
                if (uVar19 != 0) {
                  if ((int)uVar32 < 0) goto LAB_14445a663;
                  FUN_146880458(&local_b8,uVar32);
                  iVar16 = 1;
                  if (3 < uVar32) {
                    uVar32 = (uVar32 | 1) + 0xe;
                    iVar16 = 0x1f;
                    if (uVar32 != 0) {
                      for (; uVar32 >> iVar16 == 0; iVar16 = iVar16 + -1) {
                      }
                    }
                    iVar16 = 1 << ((byte)iVar16 & 0x1f);
                  }
                  if ((local_70 == 0) || (local_70 < iVar16)) {
                    local_70 = iVar16;
                    FUN_1457b1594(&local_b8);
                  }
                  lVar42 = plVar24[0x2c];
                  if ((longlong)(int)lVar42 != 0) {
                    lVar33 = plVar24[0x2b];
                    lVar31 = 0;
                    do {
                      local_228 = *(LARGE_INTEGER *)(lVar33 + lVar31);
                      FUN_146862646(&local_b8,&local_268,&local_228,0);
                      lVar31 = lVar31 + 0x30;
                    } while ((longlong)(int)lVar42 * 0x30 != lVar31);
                  }
                }
              }
            }
            else {
              local_228.QuadPart = (**(code **)(*plVar24 + 0x3f8))(plVar24);
              FUN_146862646(&local_b8,&local_268,&local_228,0);
              local_228.QuadPart = (**(code **)(*plVar24 + 0x3a8))(plVar24);
              FUN_146862646(&local_b8,&local_268,&local_228,0);
              lVar31 = (longlong)(int)_Stack_b0.LowPart;
              lVar42 = (longlong)iStack_84;
              lVar33 = (**(code **)(*plVar24 + 0x3b8))(plVar24);
              uVar19 = (longlong)*(int *)(lVar33 + 8) + (lVar31 - lVar42);
              uVar32 = (uint)uVar19;
              if (_Stack_b0.LowPart - iStack_84 < uVar32) {
                if ((int)uVar32 < 0) {
LAB_14445a663:
                    /* WARNING: Subroutine does not return */
                  FUN_1456acd4b(uVar19);
                }
                FUN_146880458(&local_b8,uVar19 & 0xffffffff);
                iVar16 = 1;
                if (3 < uVar32) {
                  uVar32 = (uVar32 | 1) + 0xe;
                  iVar16 = 0x1f;
                  if (uVar32 != 0) {
                    for (; uVar32 >> iVar16 == 0; iVar16 = iVar16 + -1) {
                    }
                  }
                  iVar16 = 1 << ((byte)iVar16 & 0x1f);
                }
                if ((local_70 == 0) || (local_70 < iVar16)) {
                  local_70 = iVar16;
                  FUN_1457b1594(&local_b8);
                }
              }
              plVar24 = (longlong *)(**(code **)(*plVar24 + 0x3b8))(plVar24);
              lVar42 = plVar24[1];
              if ((longlong)(int)lVar42 != 0) {
                lVar33 = *plVar24;
                lVar31 = 0;
                do {
                  local_228 = *(LARGE_INTEGER *)(lVar33 + lVar31);
                  FUN_146862646(&local_b8,&local_268,&local_228,0);
                  lVar31 = lVar31 + 0x28;
                } while ((longlong)(int)lVar42 * 0x28 != lVar31);
              }
            }
          }
          else {
            uVar32 = *(uint *)(plVar24 + 0x37);
            if ((longlong)(int)uVar32 != 0) {
              if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456acd4b((longlong)(int)uVar32);
              }
              FUN_146880458(&local_b8,uVar32);
              iVar16 = 1;
              if (3 < uVar32) {
                uVar32 = (uVar32 | 1) + 0xe;
                iVar16 = 0x1f;
                if (uVar32 != 0) {
                  for (; uVar32 >> iVar16 == 0; iVar16 = iVar16 + -1) {
                  }
                }
                iVar16 = 1 << ((byte)iVar16 & 0x1f);
              }
              if ((local_70 == 0) || (local_70 < iVar16)) {
                local_70 = iVar16;
                FUN_1457b1594(&local_b8);
              }
              lVar42 = plVar24[0x37];
              if ((longlong)(int)lVar42 != 0) {
                lVar33 = plVar24[0x36];
                lVar31 = 0;
                do {
                  local_228 = *(LARGE_INTEGER *)(lVar33 + 0x10 + lVar31);
                  FUN_146862646(&local_b8,&local_268,&local_228,0);
                  lVar31 = lVar31 + 0x28;
                } while ((longlong)(int)lVar42 * 0x28 != lVar31);
              }
            }
            local_228 = *(LARGE_INTEGER *)(plVar24 + 0x22);
            FUN_146862646(&local_b8,&local_268,&local_228,0);
          }
        }
        else {
          local_228.QuadPart = 0;
          uStack_220 = 0;
          local_340 = CONCAT31(local_340._1_3_,1);
          local_348 = 3;
          (**(code **)(*plVar24 + 0x310))
                    (plVar24,&local_228,CONCAT71((int7)(int3)((uint)iVar16 >> 8),1),
                     CONCAT71((int7)((ulonglong)*(longlong *)(lVar42 + 0x30) >> 8),1));
          uVar32 = (uint)uStack_220;
          if ((longlong)(int)(uint)uStack_220 != 0) {
            if ((int)(uint)uStack_220 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456acd4b((longlong)(int)(uint)uStack_220);
            }
            FUN_146880458(&local_b8,uStack_220 & 0xffffffff);
            iVar16 = 1;
            if (3 < uVar32) {
              uVar32 = (uVar32 | 1) + 0xe;
              iVar16 = 0x1f;
              if (uVar32 != 0) {
                for (; uVar32 >> iVar16 == 0; iVar16 = iVar16 + -1) {
                }
              }
              iVar16 = 1 << ((byte)iVar16 & 0x1f);
            }
            if ((local_70 == 0) || (local_70 < iVar16)) {
              local_70 = iVar16;
              FUN_1457b1594(&local_b8);
            }
            LVar5 = local_228;
            lVar42 = (longlong)(int)(uint)uStack_220;
            if (lVar42 != 0) {
              lVar33 = 0;
              do {
                local_268 = *(LARGE_INTEGER *)(LVar5.QuadPart + lVar33);
                FUN_146862646(&local_b8,&local_288,&local_268,0);
                lVar33 = lVar33 + 8;
              } while (lVar42 * 8 != lVar33);
            }
          }
          if ((code *)local_228.QuadPart != (code *)0x0) {
            FUN_1400020a8(local_228.QuadPart);
          }
        }
      }
LAB_1444590e8:
      iVar16 = 0;
      FUN_14686281e(&local_b8,0);
      local_2e8 = lVar18 + 0xb0;
      FUN_14124560e();
      if (uStack_90 == 0) {
        uVar40 = 1;
        uVar19 = 0;
        uVar32 = 0;
      }
      else {
        pplVar22 = local_98;
        if (local_98 == (longlong **)0x0) {
          pplVar22 = &local_a8;
        }
        uVar32 = *(uint *)pplVar22;
        if (uVar32 == 0) {
          iVar16 = uStack_90 + 0x1e;
          if (-1 < (int)(uStack_90 - 1)) {
            iVar16 = uStack_90 - 1;
          }
          uVar19 = 0;
          uVar40 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar40 = uVar19;
          }
          iVar16 = 0;
          do {
            if (uVar40 == uVar19) goto LAB_1444593db;
            iVar16 = iVar16 + 0x20;
            uVar32 = *(uint *)((longlong)pplVar22 + (uVar19 + 1) * 4);
            uVar19 = uVar19 + 1;
          } while (uVar32 == 0);
        }
        else {
          iVar16 = 0;
          uVar19 = 0;
        }
        uVar40 = (ulonglong)(-uVar32 & uVar32);
        uVar30 = uVar40 * 2 + 1;
        lVar42 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar42 == 0; lVar42 = lVar42 + -1) {
          }
        }
        uVar32 = (iVar16 - ((uint)lVar42 ^ 0x3f)) + 0x3e;
        if ((int)uStack_90 <= (int)uVar32) {
          uVar32 = uStack_90;
        }
      }
      if (uVar32 != uStack_90) {
        uVar39 = 0xffffffff;
        local_2d8 = (ulonglong)uStack_90;
        do {
          uVar21 = *(undefined8 *)(local_b8.QuadPart + (longlong)(int)uVar32 * 0x10);
          local_228.QuadPart = 0;
          uStack_220 = 0;
          FUN_1401031ac(uVar21,0,&local_228);
          cVar15 = FUN_1490c80e0(local_2f0,&local_228);
          if ((code *)local_228.QuadPart != (code *)0x0) {
            FUN_1400020a8();
          }
          if (cVar15 != '\0') {
            FUN_1400bbfc4(&local_228,uVar21);
            FUN_14700811a(local_2e8,&local_268,&local_228,0);
            if (local_218 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            FUN_1400bbfc4(&local_288,uVar21);
            pvVar4 = local_278;
            local_268.s.HighPart = LStack_284;
            local_268.s.LowPart = local_288;
            uStack_260 = CONCAT44(LStack_27c,DStack_280);
            local_258 = (longlong *)0x0;
            lVar42 = (longlong)(int)local_270;
            uStack_250 = CONCAT44(uStack_250._4_4_,local_270);
            if (lVar42 == 0) {
              uStack_250 = (ulonglong)local_270;
              local_228.s.HighPart = LStack_284;
              local_228.s.LowPart = local_288;
              uStack_220 = CONCAT44(LStack_27c,DStack_280);
              uStack_210 = 0;
LAB_144459662:
              local_218 = (longlong *)0x0;
              uStack_210 = uStack_210 & 0xffffffff;
              iVar17 = 0;
              local_268 = local_228;
              uStack_260 = uStack_220;
            }
            else {
              FUN_1446dd670(&local_258,local_270,0);
              memcpy(local_258,pvVar4,lVar42 * 2);
              plVar24 = local_258;
              lVar42 = (longlong)(int)(uint)uStack_250;
              local_228 = local_268;
              uStack_220 = uStack_260;
              local_218 = (longlong *)0x0;
              uStack_210 = CONCAT44(uStack_210._4_4_,(uint)uStack_250);
              if (lVar42 == 0) goto LAB_144459662;
              FUN_1446dd670(&local_218,uStack_250 & 0xffffffff,0);
              memcpy(local_218,plVar24,lVar42 * 2);
              iVar17 = (uint)uStack_210;
            }
            local_2b0 = local_228;
            local_2c8 = uStack_220;
            uVar32 = 0;
            iVar26 = iVar17 + -1;
            if (iVar17 == 0) {
              iVar26 = 0;
            }
            if (0 < iVar26) {
              plVar24 = local_218;
              if (iVar17 == 0) {
                plVar24 = (longlong *)&DAT_149dfb77a;
              }
              lVar42 = 0;
              uVar30 = 0;
              do {
                uVar3 = *(ushort *)((longlong)plVar24 + lVar42 * 2);
                uVar32 = ((uint)uVar3 + (uint)(0x19 < uVar3 - 0x61) * 0x20) - 0x20;
                uVar29 = (uint)(uVar30 >> 8) ^
                         *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar30 ^ uVar32) & 0xff) * 4)
                ;
                uVar32 = uVar29 >> 8 ^
                         *(uint *)(&DAT_14c75d150 +
                                  (ulonglong)(uVar29 & 0xff ^ uVar32 >> 8 & 0xff) * 4);
                uVar30 = (ulonglong)uVar32;
                lVar42 = lVar42 + 1;
              } while (iVar26 != (int)lVar42);
            }
            if (local_218 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_258 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            plVar24 = local_2c0;
            uVar29 = (uint)(local_2c8 >> 0x10);
            uVar36 = (uint)local_2c8 & 0xffff;
            uVar41 = (uint)((ulonglong)local_2b0 >> 0x10);
            uVar38 = local_2b0.s.LowPart & 0xffff;
            uVar38 = (local_2b0.s.LowPart << 0x10 | uVar38) + local_2b0.s.HighPart +
                     (uVar41 << 0x13 | uVar41 & 0xffff) + (uVar38 >> 4);
            uVar38 = (uVar38 >> 2) + 0x9e3779b9 +
                     ((uint)local_2c8 << 0x10 | uVar36) + (int)(local_2c8 >> 0x20) +
                     (uVar29 << 0x13 | uVar29 & 0xffff) + (uVar36 >> 4) + uVar38 * 0x40 ^ uVar38;
            uVar41 = uVar38 >> 0xd ^ -uVar38;
            uVar29 = uVar41 << 8 ^ (-0x61c88647 - uVar38) - uVar41;
            uVar38 = uVar29 >> 0xd ^ (uVar38 - uVar41) - uVar29;
            uVar36 = uVar38 >> 0xc ^ (uVar41 - uVar29) - uVar38;
            uVar41 = uVar36 << 0x10 ^ (uVar29 - uVar38) - uVar36;
            uVar29 = uVar41 >> 5 ^ (uVar38 - uVar36) - uVar41;
            uVar36 = uVar29 >> 3 ^ (uVar36 - uVar41) - uVar29;
            uVar41 = uVar36 << 10 ^ (uVar41 - uVar29) - uVar36;
            uVar29 = uVar32 >> 0xd ^ (uVar41 >> 0xf ^ uVar29 - (uVar36 + uVar41)) - uVar32;
            uVar41 = uVar29 << 8 ^ (-0x61c88647 - uVar32) - uVar29;
            uVar36 = uVar41 >> 0xd ^ (uVar32 - uVar29) - uVar41;
            uVar38 = uVar36 >> 0xc ^ (uVar29 - uVar41) - uVar36;
            uVar32 = uVar38 << 0x10 ^ (uVar41 - uVar36) - uVar38;
            uVar29 = uVar32 >> 5 ^ (uVar36 - uVar38) - uVar32;
            uVar41 = uVar29 >> 3 ^ (uVar38 - uVar32) - uVar29;
            uVar32 = uVar41 << 10 ^ (uVar32 - uVar29) - uVar41;
            iVar17 = FUN_1490d0238(local_2c0,uVar32 >> 0xf ^ uVar29 - (uVar41 + uVar32),&local_288);
            if ((iVar17 == -1) ||
               (plVar24 = (longlong *)((longlong)iVar17 * 0x10 + *plVar24),
               plVar24 == (longlong *)0x0)) {
              lVar42 = 0;
            }
            else {
              lVar42 = *plVar24 + 0x30;
            }
            if (local_278 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (lVar42 != 0) {
              FUN_1449774fc(lVar42 + 0xd0,&local_228,lVar18,0);
            }
          }
          uVar39 = uVar39 & ~(uint)uVar40;
          pplVar22 = local_98;
          if (local_98 == (longlong **)0x0) {
            pplVar22 = &local_a8;
          }
          iVar17 = (int)uVar19;
          lVar42 = (longlong)iVar17;
          uVar32 = *(uint *)((longlong)pplVar22 + lVar42 * 4) & uVar39;
          if (uVar32 == 0) {
            iVar26 = uStack_90 + 0x1e;
            if (-1 < (int)(uStack_90 - 1)) {
              iVar26 = uStack_90 - 1;
            }
            iVar26 = iVar26 >> 5;
            iVar16 = iVar16 + 0x20;
            iVar25 = iVar26;
            if (iVar26 < iVar17) {
              iVar25 = iVar17;
            }
            if (iVar17 < iVar26) {
              lVar33 = 0;
              do {
                uVar32 = *(uint *)((longlong)pplVar22 + (lVar42 + lVar33 + 1) * 4);
                if (uVar32 != 0) {
                  uVar19 = (ulonglong)(iVar17 + (int)lVar33 + 1);
                  uVar39 = 0xffffffff;
                  goto LAB_144459510;
                }
                iVar16 = iVar16 + 0x20;
                lVar33 = lVar33 + 1;
              } while (iVar25 - lVar42 != lVar33);
              uVar39 = 0xffffffff;
              iVar17 = iVar25;
            }
            uVar19 = (ulonglong)(iVar17 + 1);
            uVar32 = uStack_90;
          }
          else {
LAB_144459510:
            uVar40 = (ulonglong)(-uVar32 & uVar32);
            uVar30 = uVar40 * 2 + 1;
            lVar42 = 0x3f;
            if (uVar30 != 0) {
              for (; uVar30 >> lVar42 == 0; lVar42 = lVar42 + -1) {
              }
            }
            uVar32 = (iVar16 - ((uint)lVar42 ^ 0x3f)) + 0x3e;
            if ((int)uStack_90 <= (int)uVar32) {
              uVar32 = uStack_90;
            }
          }
        } while (uVar32 != (uint)local_2d8);
      }
LAB_1444593db:
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_140603fbe(&local_b8);
      plVar24 = local_2c0;
      pLVar34 = local_2e0;
    }
    lVar18 = *(longlong *)(lVar18 + 0x20);
    uVar19 = uStack_250;
    uVar40 = uStack_220;
    lVar42 = (longlong)local_208;
  } while( true );
}



// FUNCTION 14445a684 FUN_14445a684 body=3225 status=ok
// SIG undefined FUN_14445a684(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14445a684(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulonglong *puVar5;
  undefined2 *puVar6;
  void *_Dst;
  undefined ****ppppuVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined ***pppuVar12;
  int iVar13;
  longlong lVar14;
  undefined **_Dst_00;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  PSRWLOCK pRVar18;
  longlong lVar19;
  int iVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined1 auStack_338 [32];
  longlong *local_318;
  longlong local_310;
  PSRWLOCK local_308;
  longlong *local_300;
  longlong local_2f8;
  int local_2ec;
  undefined8 local_2e8 [4];
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2bc;
  undefined4 local_2b4;
  longlong local_2a8;
  undefined4 local_2a0;
  longlong local_298;
  undefined8 uStack_290;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_26c;
  undefined4 local_264;
  longlong local_258;
  undefined4 local_250;
  longlong local_248;
  undefined8 uStack_240;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_21c;
  int local_214 [3];
  longlong local_208;
  undefined4 local_200;
  undefined **local_1f8;
  longlong *plStack_1f0;
  undefined ***local_1e8;
  undefined ****local_1e0;
  undefined ****local_1d8;
  int local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  longlong local_1b8;
  undefined4 local_1b0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_338;
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      local_1f8 = (undefined **)CONCAT44(local_1f8._4_4_,0xffffffff);
      puVar5 = (ulonglong *)param_2[1];
      puVar8 = (undefined4 *)(*puVar5 + 4);
      if (puVar8 <= (undefined4 *)puVar5[1]) goto LAB_14445a735;
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0) {
        pppuVar12 = &local_1f8;
        goto LAB_14445af92;
      }
      lVar19 = *param_2;
      pppuVar12 = &local_1f8;
LAB_14445a71c:
      (**(code **)(lVar19 + 0x170))(param_2,pppuVar12,4);
    }
  }
  else {
    puVar5 = (ulonglong *)param_2[1];
    puVar8 = (undefined4 *)*puVar5 + 1;
    if ((undefined4 *)puVar5[1] < puVar8) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        lVar19 = *param_2;
        pppuVar12 = (undefined ***)&DAT_14c764a3c;
        goto LAB_14445a71c;
      }
      pppuVar12 = (undefined ***)&DAT_14c764a3c;
LAB_14445af92:
      FUN_14572512c(param_2,pppuVar12);
    }
    else {
      _DAT_14c764a3c = *(undefined4 *)*puVar5;
LAB_14445a735:
      *puVar5 = (ulonglong)puVar8;
    }
  }
  local_1f8 = &PTR_FUN_149e37810;
  local_1e8 = &local_1f8;
  plStack_1f0 = param_2;
  local_1e0 = &local_1e8;
  switchD_143c3d4dc::caseD_20(param_1,&local_1e8);
  if (((*(byte *)((longlong)param_2 + 0x29) & 1) != 0) ||
     ((*(ushort *)((longlong)param_2 + 0x35) & 0x4010) != 0)) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) {
      if ((*(byte *)(param_2 + 5) & 1) == 0) goto LAB_14445ae5f;
      pRVar18 = (PSRWLOCK)(param_1 + 400);
      AcquireSRWLockExclusive(pRVar18);
      local_2ec = -1;
      puVar5 = (ulonglong *)param_2[1];
      piVar9 = (int *)*puVar5 + 1;
      if ((int *)puVar5[1] < piVar9) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_2ec,4);
        }
        else {
          FUN_14572512c(param_2,&local_2ec);
        }
      }
      else {
        local_2ec = *(int *)*puVar5;
        *puVar5 = (ulonglong)piVar9;
      }
      local_248 = 0;
      uStack_240 = 0;
      if (local_2ec < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_2ec);
      }
      local_308 = pRVar18;
      if (local_2ec == 0) {
        local_298 = 0;
        uStack_290 = 0;
      }
      else {
        FUN_1490d2106(&local_248);
        local_298 = 0;
        uStack_290 = 0;
        if (local_2ec < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(local_2ec);
        }
        if ((local_2ec != 0) && (FUN_1403539de(&local_298), 0 < local_2ec)) {
          iVar20 = 0;
          do {
            uVar23 = uStack_290;
            lVar19 = (longlong)(int)uStack_290;
            uVar4 = (int)uStack_290 + 1;
            uStack_290 = CONCAT44(uStack_290._4_4_,uVar4);
            if (uStack_290._4_4_ < uVar4) {
              FUN_1406f071e(&local_298,uVar23 & 0xffffffff);
            }
            lVar19 = lVar19 * 0x20;
            plVar16 = (longlong *)(local_298 + lVar19);
            puVar15 = (undefined8 *)(local_298 + 0x10 + lVar19);
            *puVar15 = 0;
            puVar15[1] = 0;
            *(undefined8 *)(local_298 + lVar19) = 0;
            ((undefined8 *)(local_298 + lVar19))[1] = 0;
            (**(code **)(*param_2 + 0x128))(param_2);
            lVar19 = (longlong)(int)uStack_240;
            uVar4 = (int)uStack_240 + 1;
            uStack_240 = CONCAT44(uStack_240._4_4_,uVar4);
            if (uStack_240._4_4_ < uVar4) {
              FUN_1490d2170(&local_248);
            }
            _Dst_00 = (undefined **)(lVar19 * 0x178 + local_248);
            memset(_Dst_00,0,0x178);
            FUN_1490c6fc2(_Dst_00);
            FUN_144456afc(_Dst_00,param_2,param_1);
            local_1f8 = _Dst_00;
            plStack_1f0 = plVar16;
            FUN_1490d1b86(param_1 + 0x88,local_2e8,&local_1f8);
            iVar20 = iVar20 + 1;
          } while (iVar20 < local_2ec);
        }
      }
      FUN_145c4ceaa(param_1 + 0xd8,0xffffffff);
      lVar19 = (longlong)local_2ec;
      if (0 < lVar19) {
        uVar23 = lVar19 + 1;
        lVar14 = lVar19 * 0x178;
        lVar19 = lVar19 << 5;
        do {
          lVar19 = lVar19 + -0x20;
          lVar14 = lVar14 + -0x178;
          FUN_1490c70a0(param_1 + 0xd8,local_298 + lVar19,local_248 + lVar14);
          uVar23 = uVar23 - 1;
        } while (1 < uVar23);
      }
      FUN_140861e20(local_298,uStack_290 & 0xffffffff);
      pRVar18 = local_308;
      if (local_298 != 0) {
        FUN_1400020a8();
      }
      FUN_1490d20dc(local_248,uStack_240 & 0xffffffff);
      if (local_248 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if ((param_2[0xd] != 0) && (*(longlong *)(param_2[0xd] + 0x10) != 0)) {
        uVar23 = 0;
        local_1d8 = (undefined ****)0x0;
        local_1d0 = 0;
        local_1f8 = (undefined **)0x0;
        plStack_1f0 = (longlong *)0x0;
        local_1cc = 0xffffffff00000080;
        local_1c4 = 0;
        local_1b8 = 0;
        local_1b0 = 0;
        AcquireSRWLockShared((PSRWLOCK)(param_1 + 400));
        FUN_1490cd0b6(&local_1f8,param_1 + 0x88);
        ReleaseSRWLockShared((PSRWLOCK)(param_1 + 400));
        iVar20 = local_1d0;
        if (local_1d0 == 0) {
          uVar25 = 1;
          iVar13 = 0;
          iVar3 = 0;
        }
        else {
          ppppuVar7 = local_1d8;
          if (local_1d8 == (undefined ****)0x0) {
            ppppuVar7 = &local_1e8;
          }
          uVar4 = *(uint *)ppppuVar7;
          if (uVar4 == 0) {
            iVar3 = local_1d0 + 0x1e;
            if (-1 < local_1d0 + -1) {
              iVar3 = local_1d0 + -1;
            }
            uVar23 = 0;
            uVar25 = (ulonglong)(uint)(iVar3 >> 5);
            if (iVar3 >> 5 < 1) {
              uVar25 = uVar23;
            }
            iVar13 = 0;
            do {
              if (uVar25 == uVar23) goto LAB_14445b1e8;
              iVar13 = iVar13 + 0x20;
              uVar4 = *(uint *)((longlong)ppppuVar7 + (uVar23 + 1) * 4);
              uVar23 = uVar23 + 1;
            } while (uVar4 == 0);
          }
          else {
            uVar23 = 0;
            iVar13 = 0;
          }
          uVar25 = (ulonglong)(-uVar4 & uVar4);
          uVar1 = uVar25 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar3 = (iVar13 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if (local_1d0 <= iVar3) {
            iVar3 = local_1d0;
          }
        }
        if (iVar3 != local_1d0) {
          uVar4 = 0xffffffff;
          do {
            FUN_144457738(param_1,local_1f8 + (longlong)iVar3 * 7);
            uVar4 = ~(uint)uVar25 & uVar4;
            ppppuVar7 = local_1d8;
            if (local_1d8 == (undefined ****)0x0) {
              ppppuVar7 = &local_1e8;
            }
            iVar3 = (int)uVar23;
            lVar19 = (longlong)iVar3;
            uVar24 = *(uint *)((longlong)ppppuVar7 + lVar19 * 4) & uVar4;
            if (uVar24 == 0) {
              iVar10 = local_1d0 + 0x1e;
              if (-1 < local_1d0 + -1) {
                iVar10 = local_1d0 + -1;
              }
              iVar10 = iVar10 >> 5;
              iVar13 = iVar13 + 0x20;
              iVar11 = iVar10;
              if (iVar10 < iVar3) {
                iVar11 = iVar3;
              }
              if (iVar3 < iVar10) {
                lVar14 = 0;
                do {
                  uVar24 = *(uint *)((longlong)ppppuVar7 + (lVar19 + lVar14 + 1) * 4);
                  if (uVar24 != 0) {
                    uVar23 = (ulonglong)(iVar3 + (int)lVar14 + 1);
                    uVar4 = 0xffffffff;
                    goto LAB_14445b2bd;
                  }
                  iVar13 = iVar13 + 0x20;
                  lVar14 = lVar14 + 1;
                } while (iVar11 - lVar19 != lVar14);
                uVar4 = 0xffffffff;
                iVar3 = iVar11;
              }
              uVar23 = (ulonglong)(iVar3 + 1);
              iVar3 = local_1d0;
            }
            else {
LAB_14445b2bd:
              uVar25 = (ulonglong)(-uVar24 & uVar24);
              uVar1 = uVar25 * 2 + 1;
              lVar19 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              iVar3 = (iVar13 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
              if (local_1d0 <= iVar3) {
                iVar3 = local_1d0;
              }
            }
          } while (iVar3 != iVar20);
        }
LAB_14445b1e8:
        local_1b0 = 0;
        if (local_1b8 != 0) {
          FUN_1400020a8();
        }
        FUN_140ba05b6(&local_1f8);
      }
      pRVar18 = (PSRWLOCK)(param_1 + 400);
      AcquireSRWLockExclusive(pRVar18);
      local_228 = 0;
      local_220 = 0;
      local_248 = 0;
      uStack_240 = 0;
      local_21c = 0xffffffff00000080;
      local_214[0] = 0;
      local_208 = 0;
      local_200 = 0;
      bVar2 = *(byte *)((longlong)param_2 + 0x29);
      if (((bVar2 & 1) != 0) && (lVar19 = *(longlong *)(param_1 + 0x130), lVar19 != 0)) {
        do {
          if (*(char *)(lVar19 + 0x150) == '\x03') {
            FUN_1449774fc(&local_248,&local_1f8,lVar19,0);
          }
          lVar19 = *(longlong *)(lVar19 + 0x20);
        } while (lVar19 != 0);
        bVar2 = *(byte *)((longlong)param_2 + 0x29);
      }
      if ((bVar2 & 1) == 0) {
        piVar9 = (int *)(param_1 + 0x10c);
        local_2ec = *(int *)(param_1 + 0xe0);
      }
      else {
        piVar9 = local_214;
        local_2ec = (int)uStack_240;
      }
      local_2ec = local_2ec - *piVar9;
      puVar5 = (ulonglong *)param_2[1];
      piVar9 = (int *)*puVar5 + 1;
      local_308 = pRVar18;
      if ((int *)puVar5[1] < piVar9) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_2ec,4);
        }
        else {
          FUN_14572512c();
        }
      }
      else {
        local_2ec = *(int *)*puVar5;
        *puVar5 = (ulonglong)piVar9;
      }
      lVar19 = *(longlong *)(param_1 + 0x130);
      if (lVar19 != 0) {
        local_300 = (longlong *)(param_1 + 0x38);
        local_2f8 = param_1 + 0x88;
        local_310 = param_1;
        do {
          if (((*(byte *)((longlong)param_2 + 0x29) & 1) == 0) ||
             (*(char *)(lVar19 + 0x150) == '\x03')) {
            puVar15 = (undefined8 *)(lVar19 + 0x30);
            if ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0) {
              iVar20 = *(int *)(lVar19 + 0x38);
              uVar23 = 0;
              local_318 = (longlong *)CONCAT44(local_318._4_4_,iVar20);
              iVar3 = iVar20 + -1;
              if (iVar20 == 0) {
                iVar3 = 0;
              }
              if (0 < iVar3) {
                puVar6 = &DAT_149dfb77a;
                if (iVar20 != 0) {
                  puVar6 = (undefined2 *)*puVar15;
                }
                lVar14 = 0;
                uVar23 = 0;
                do {
                  uVar4 = ((uint)(0x19 < (ushort)puVar6[lVar14] - 0x61) * 0x20 +
                          (uint)(ushort)puVar6[lVar14]) - 0x20;
                  uVar24 = (uint)(uVar23 >> 8) ^
                           *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar23 ^ uVar4) & 0xff) * 4
                                    );
                  uVar23 = (ulonglong)
                           (uVar24 >> 8 ^
                           *(uint *)(&DAT_14c75d150 +
                                    (ulonglong)(uVar24 & 0xff ^ uVar4 >> 8 & 0xff) * 4));
                  lVar14 = lVar14 + 1;
                } while (iVar3 != (int)lVar14);
              }
              iVar20 = FUN_1490cdef6(local_300,uVar23,puVar15);
              param_1 = local_310;
              if ((iVar20 == -1) || (lVar14 = (longlong)iVar20 * 0x20 + *local_300, lVar14 == 0)) {
LAB_14445ab74:
                if (iVar3 < 1) {
                  uVar23 = 0;
                }
                else {
                  puVar6 = &DAT_149dfb77a;
                  if ((int)local_318 != 0) {
                    puVar6 = (undefined2 *)*puVar15;
                  }
                  lVar14 = 0;
                  uVar23 = 0;
                  do {
                    uVar4 = ((uint)(0x19 < (ushort)puVar6[lVar14] - 0x61) * 0x20 +
                            (uint)(ushort)puVar6[lVar14]) - 0x20;
                    uVar24 = (uint)(uVar23 >> 8) ^
                             *(uint *)(&DAT_14c75d150 +
                                      (ulonglong)(((uint)uVar23 ^ uVar4) & 0xff) * 4);
                    uVar23 = (ulonglong)
                             (uVar24 >> 8 ^
                             *(uint *)(&DAT_14c75d150 +
                                      (ulonglong)(uVar24 & 0xff ^ uVar4 >> 8 & 0xff) * 4));
                    lVar14 = lVar14 + 1;
                  } while (iVar3 != (int)lVar14);
                }
                FUN_1490d10fe(local_2f8,uVar23,puVar15);
              }
              else {
                lVar14 = *(longlong *)(lVar14 + 0x10);
                if ((DAT_14c950c29 == '\x01') && (lVar14 != 0)) {
                  FUN_1456cec3c(lVar14);
                }
                else if (lVar14 == 0) goto LAB_14445ab74;
                local_1f8 = (undefined **)0x0;
                plStack_1f0 = (longlong *)0x0;
                FUN_1490c4ddd(lVar14,&local_1f8,param_2);
                lVar14 = lVar19 + 0x40;
                FUN_14031515e(lVar14);
                *(undefined1 *)(lVar19 + 0x53) = 2;
                *(byte *)(lVar19 + 0x56) = *(byte *)(lVar19 + 0x56) & 0xfb;
                _Dst = (void *)FUN_1427d8a06(lVar14,(longlong)(int)plStack_1f0,1);
                memcpy(_Dst,local_1f8,(longlong)(int)plStack_1f0);
                *(undefined1 *)(lVar19 + 0x53) = 0;
                if ((*(byte *)(lVar19 + 0x54) & 8) != 0) {
                  FUN_1400ea36e(lVar14,lVar14);
                }
                param_1 = local_310;
                *(longlong *)(lVar19 + 0xa0) = (longlong)(int)plStack_1f0;
                if (local_1f8 != (undefined **)0x0) {
                  FUN_1400020a8();
                }
              }
            }
            (**(code **)(*param_2 + 0x128))(param_2,lVar19);
            local_278 = 0;
            local_270 = 0;
            local_298 = 0;
            uStack_290 = 0;
            local_26c = 0xffffffff00000080;
            local_264 = 0;
            local_258 = 0;
            local_250 = 0;
            local_2c8 = 0;
            local_2c0 = 0;
            local_2e8[0] = 0;
            local_2e8[1] = 0;
            local_2bc = 0xffffffff00000080;
            local_2b4 = 0;
            local_2a8 = 0;
            local_2a0 = 0;
            if ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0) {
              local_318 = (longlong *)(lVar19 + 0xb0);
              FUN_1490c8b4a(local_318,&local_1f8,&local_248);
              FUN_1490c8de6(&local_298,&local_1f8);
              local_1b0 = 0;
              if (local_1b8 != 0) {
                FUN_1400020a8();
              }
              FUN_144a1c8ac(&local_1f8);
              puVar22 = (undefined8 *)(lVar19 + 0x100);
              FUN_1490c8b4a(puVar22,&local_1f8,&local_248);
              FUN_1490c8de6(local_2e8,&local_1f8);
              local_1b0 = 0;
              if (local_1b8 != 0) {
                FUN_1400020a8();
              }
              FUN_144a1c8ac(&local_1f8);
              plVar16 = local_318;
              pppuVar12 = &local_1f8;
              for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
                *pppuVar12 = (undefined **)*plVar16;
                plVar16 = plVar16 + 1;
                pppuVar12 = pppuVar12 + 1;
              }
              plVar16 = &local_298;
              plVar21 = local_318;
              for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
                *plVar21 = *plVar16;
                plVar16 = plVar16 + 1;
                plVar21 = plVar21 + 1;
              }
              pppuVar12 = &local_1f8;
              plVar16 = &local_298;
              for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
                *plVar16 = (longlong)*pppuVar12;
                pppuVar12 = pppuVar12 + 1;
                plVar16 = plVar16 + 1;
              }
              puVar17 = puVar22;
              pppuVar12 = &local_1f8;
              for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
                *pppuVar12 = (undefined **)*puVar17;
                puVar17 = puVar17 + 1;
                pppuVar12 = pppuVar12 + 1;
              }
              puVar17 = local_2e8;
              for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
                *puVar22 = *puVar17;
                puVar17 = puVar17 + 1;
                puVar22 = puVar22 + 1;
              }
              pppuVar12 = &local_1f8;
              puVar22 = local_2e8;
              for (lVar14 = 10; param_1 = local_310, lVar14 != 0; lVar14 = lVar14 + -1) {
                *puVar22 = *pppuVar12;
                pppuVar12 = pppuVar12 + 1;
                puVar22 = puVar22 + 1;
              }
            }
            FUN_144456afc(puVar15,param_2,param_1);
            if ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0) {
              plVar16 = (longlong *)(lVar19 + 0xb0);
              pppuVar12 = &local_1f8;
              for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
                *pppuVar12 = (undefined **)*plVar16;
                plVar16 = plVar16 + 1;
                pppuVar12 = pppuVar12 + 1;
              }
              plVar16 = &local_298;
              plVar21 = (longlong *)(lVar19 + 0xb0);
              for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
                *plVar21 = *plVar16;
                plVar16 = plVar16 + 1;
                plVar21 = plVar21 + 1;
              }
              pppuVar12 = &local_1f8;
              plVar16 = &local_298;
              for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
                *plVar16 = (longlong)*pppuVar12;
                pppuVar12 = pppuVar12 + 1;
                plVar16 = plVar16 + 1;
              }
              puVar15 = (undefined8 *)(lVar19 + 0x100);
              pppuVar12 = &local_1f8;
              for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
                *pppuVar12 = (undefined **)*puVar15;
                puVar15 = puVar15 + 1;
                pppuVar12 = pppuVar12 + 1;
              }
              puVar15 = local_2e8;
              puVar22 = (undefined8 *)(lVar19 + 0x100);
              for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
                *puVar22 = *puVar15;
                puVar15 = puVar15 + 1;
                puVar22 = puVar22 + 1;
              }
              pppuVar12 = &local_1f8;
              puVar15 = local_2e8;
              for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
                *puVar15 = *pppuVar12;
                pppuVar12 = pppuVar12 + 1;
                puVar15 = puVar15 + 1;
              }
            }
            local_2a0 = 0;
            if (local_2a8 != 0) {
              FUN_1400020a8();
            }
            FUN_144a1c8ac(local_2e8);
            local_250 = 0;
            if (local_258 != 0) {
              FUN_1400020a8();
            }
            FUN_144a1c8ac();
          }
          lVar19 = *(longlong *)(lVar19 + 0x20);
        } while (lVar19 != 0);
      }
      local_200 = 0;
      if (local_208 != 0) {
        FUN_1400020a8();
      }
      FUN_144a1c8ac(&local_248);
      pRVar18 = local_308;
    }
    ReleaseSRWLockExclusive(pRVar18);
  }
LAB_14445ae5f:
  if ((local_60 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14445b320 FUN_14445b320 body=3089 status=ok
// SIG undefined FUN_14445b320(void)

longlong *
FUN_14445b320(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,uint param_5,
             undefined8 *param_6,undefined1 *param_7,undefined8 param_8)

{
  void *pvVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  PSRWLOCK SRWLock;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ushort uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  bool bVar23;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  longlong *local_188;
  PSRWLOCK local_180;
  longlong *local_178;
  longlong *local_170;
  undefined1 local_168 [16];
  longlong local_158;
  undefined8 local_148;
  longlong **pplStack_140;
  undefined2 *local_138;
  int local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118 [2];
  undefined1 local_108 [16];
  longlong local_f8;
  undefined1 local_e8 [16];
  longlong local_d8;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined2 *local_b8;
  ulonglong uStack_b0;
  longlong *local_a0;
  longlong *local_98;
  uint local_8c;
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_3 == 0) {
    plVar4 = (longlong *)0x0;
    goto LAB_14445b34d;
  }
  local_180 = (PSRWLOCK)(param_1 + 0x238);
  AcquireSRWLockExclusive(local_180);
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = 0;
  }
  plVar5 = (longlong *)(param_1 + 0x40);
  iVar3 = (int)param_2[1];
  uVar9 = 0;
  iVar6 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar6 = 0;
  }
  if (0 < iVar6) {
    if (iVar3 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    lVar13 = 0;
    uVar9 = 0;
    do {
      uVar10 = ((uint)(0x19 < (ushort)puVar7[lVar13] - 0x61) * 0x20 + (uint)(ushort)puVar7[lVar13])
               - 0x20;
      uVar20 = (uint)(uVar9 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar9 ^ uVar10) & 0xff) * 4);
      uVar9 = (ulonglong)
              (uVar20 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar20 & 0xff ^ uVar10 >> 8 & 0xff) * 4));
      lVar13 = lVar13 + 1;
    } while (iVar6 != (int)lVar13);
  }
  iVar3 = FUN_1490d10fe(plVar5,uVar9,param_2);
  if ((iVar3 == -1) || (lVar13 = (longlong)iVar3 * 0x38 + *plVar5, lVar13 == 0)) {
    local_b8 = (undefined2 *)0x0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(longlong *)(lVar13 + 0x10);
    uStack_c0 = *(undefined8 *)(lVar13 + 0x18);
    local_b8 = (undefined2 *)0x0;
    uVar10 = *(uint *)(lVar13 + 0x28);
    pvVar1 = *(void **)(lVar13 + 0x20);
    uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar10);
    if ((longlong)(int)uVar10 == 0) {
      uStack_b0 = (ulonglong)uVar10;
    }
    else {
      FUN_1446dd670(&local_b8,uVar10,0);
      memcpy(local_b8,pvVar1,(longlong)(int)uVar10 * 2);
    }
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    if (local_c8 == 0) {
      local_148 = (longlong *)0x0;
      pplStack_140 = (longlong **)0x0;
    }
    else {
      FUN_140ba791a(&local_c8,&local_148);
    }
    iVar3 = *(int *)(param_1 + 0x30);
    uVar9 = (ulonglong)(iVar3 - 1);
    if (iVar3 == 0) {
      uVar9 = 0;
    }
    if ((int)uVar9 < 1) {
LAB_14445b57f:
      local_c8 = 0;
      uStack_c0 = 0;
      bVar23 = (longlong)uStack_b0 < 0;
      uStack_b0 = uStack_b0 & 0xffffffff00000000;
      if (bVar23) {
        FUN_1446f8c06(&local_b8,0);
      }
      if (local_b8 != (undefined2 *)0x0) {
        *local_b8 = 0;
      }
      FUN_14445bf32(param_1,local_e8,param_2);
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar7 = &DAT_149dfb77a;
      if (iVar3 != 0) {
        puVar7 = *(undefined2 **)(param_1 + 0x28);
      }
      plVar4 = (longlong *)&DAT_149dfb77a;
      if ((int)pplStack_140 != 0) {
        plVar4 = local_148;
      }
      lVar13 = 0;
      while( true ) {
        uVar15 = *(ushort *)((longlong)plVar4 + lVar13);
        uVar18 = (ulonglong)uVar15;
        uVar19 = *(ushort *)((longlong)puVar7 + lVar13);
        if (uVar15 != uVar19) break;
        if (uVar15 == 0) goto LAB_14445b5e4;
LAB_14445b54b:
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_14445b5e4;
        lVar13 = lVar13 + 2;
      }
      if ((uVar19 | uVar15) < 0x80) {
        uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
        uVar21 = (ulonglong)uVar19;
        uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
        if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[uVar21]) goto LAB_14445b54b;
      }
      if (uVar15 != uVar19) goto LAB_14445b57f;
    }
LAB_14445b5e4:
    if (local_148 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar4 = (longlong *)FUN_1490c8e41(&local_c8);
  if (plVar4 == (longlong *)0x0) {
LAB_14445b664:
    local_188 = plVar5;
    FUN_14445c41a(param_1);
    FUN_1490c934d(local_118,param_4,param_3);
    lVar13 = param_1;
LAB_14445b69e:
    lVar8 = lVar13;
    lVar13 = lVar8;
    if (*(longlong *)(lVar8 + 0x20) != 0) goto code_r0x00014445b6ad;
    goto LAB_14445b6bf;
  }
  if ((*(int *)(plVar4[2] + 0x38) < *(int *)(param_3 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(param_3 + 0x38) * 8) !=
      param_3 + 0x30)) {
    FUN_14445bf32(param_1,local_108,param_2);
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    goto LAB_14445b664;
  }
  FUN_1490c91d6(param_1,&local_c8,0);
  SRWLock = local_180;
  goto LAB_14445b7a9;
code_r0x00014445b6ad:
  lVar13 = *(longlong *)(lVar8 + 0x20);
  if ((*(uint *)(lVar8 + 8) >> 0x1c & 1) == 0) goto LAB_14445b69e;
  lVar13 = FUN_142840154(lVar8);
LAB_14445b6bf:
  uVar2 = DAT_14c868730;
  if (lVar13 == 0) {
    lVar13 = *(longlong *)(lVar8 + 0x20);
    goto LAB_14445b69e;
  }
  DAT_14c868730 = 0;
  FUN_1490c9884(&local_148,local_118);
  plVar4 = (longlong *)&DAT_149dfb77a;
  if ((int)pplStack_140 != 0) {
    plVar4 = local_148;
  }
  FUN_1446f470e(&local_120,plVar4,1);
  local_198 = 0;
  FUN_140af9fb2(&local_a0,DAT_14c951640,param_3,local_120);
  if (local_148 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  plVar4 = DAT_14c951640;
  FUN_1468c51e8(DAT_14c951640);
  local_148 = local_a0;
  local_a0 = plVar4;
  local_8c = param_5 | 0x43;
  plVar4 = (longlong *)(*(code *)*param_6)(param_6[1]);
  plVar5 = plVar4;
  if (plVar4 != (longlong *)0x0) {
LAB_14445b7cf:
    plVar12 = plVar5;
    local_170 = plVar12;
    if ((longlong *)plVar12[4] != (longlong *)0x0) goto code_r0x00014445b7de;
    goto LAB_14445b7f0;
  }
  goto LAB_14445b797;
code_r0x00014445b840:
  plVar5 = (longlong *)plVar12[4];
  if ((*(uint *)(plVar12 + 1) >> 0x1c & 1) == 0) goto LAB_14445b831;
  plVar5 = (longlong *)FUN_142840154(plVar12);
LAB_14445b855:
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)plVar12[4];
    goto LAB_14445b831;
  }
  FUN_140a10636(&local_a0);
  uVar10 = *(uint *)((longlong)plVar4 + 0xc);
  if ((int)uVar10 < DAT_14c9647dc) {
    lVar13 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
  }
  else {
    lVar13 = 0;
  }
  iVar3 = *(int *)(lVar13 + 0x10);
  if (*(int *)(lVar13 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    iVar6 = DAT_14c964868 + 1;
    bVar23 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar23) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar6);
    }
    LOCK();
    iVar3 = *(int *)(lVar13 + 0x10);
    bVar23 = iVar3 == 0;
    if (bVar23) {
      *(int *)(lVar13 + 0x10) = iVar6;
      iVar3 = 0;
    }
    UNLOCK();
    if (bVar23) {
      iVar3 = iVar6;
    }
  }
  local_60 = CONCAT44(iVar3,uVar10);
  local_78 = 0;
  local_68 = &PTR_LAB_14bac2b30;
  local_88 = &LAB_14446486e;
  FUN_1407461b0(1);
  if (local_a0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_148 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_14445b8fd;
code_r0x00014445b7de:
  plVar5 = (longlong *)plVar12[4];
  if ((*(uint *)(plVar12 + 1) >> 0x1c & 1) == 0) goto LAB_14445b7cf;
  local_170 = (longlong *)FUN_142840154(plVar12);
LAB_14445b7f0:
  if (local_170 == (longlong *)0x0) {
    plVar5 = (longlong *)plVar12[4];
    goto LAB_14445b7cf;
  }
  local_178 = DAT_14c951640;
  if (local_170 != DAT_14c951640) {
    local_a0 = (longlong *)plVar4[3];
    FUN_1400021e4(&local_a0,&local_148);
    plVar5 = plVar4;
LAB_14445b831:
    plVar12 = plVar5;
    plVar5 = plVar12;
    if ((longlong *)plVar12[4] != (longlong *)0x0) goto code_r0x00014445b840;
    goto LAB_14445b855;
  }
LAB_14445b8fd:
  (**(code **)(*DAT_14c9485b8 + 0x2d0))(DAT_14c9485b8,plVar4);
  FUN_1490c98fa(&local_148,param_3);
  plVar5 = local_148;
  if ((((local_148 != (longlong *)0x0) && (lVar13 = FUN_14595e57c(), lVar13 != 0)) &&
      (*(int *)(lVar13 + 0x38) <= (int)plVar5[7])) &&
     (*(longlong *)(plVar5[6] + (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) {
    local_128 = plVar5;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(plVar5);
    }
    lVar13 = FUN_14445c8cc(plVar4,&local_128);
    if ((lVar13 != 0) && (plVar5 = (longlong *)(lVar13 + 0x88), plVar5 != param_2)) {
      iVar3 = (int)param_2[1];
      pvVar1 = (void *)*param_2;
      *(int *)(lVar13 + 0x90) = iVar3;
      if (iVar3 == 0 && *(int *)(lVar13 + 0x94) == 0) {
        *(undefined4 *)(lVar13 + 0x94) = 0;
      }
      else {
        FUN_1446dd670(plVar5,iVar3);
        if (iVar3 != 0) {
          memcpy((void *)*plVar5,pvVar1,(longlong)iVar3 * 2);
        }
      }
    }
  }
  plVar5 = (longlong *)(param_1 + 0x98);
  DAT_14c868730 = uVar2;
  FUN_1400bbfc4(&local_148,plVar4);
  uVar10 = (uint)((ulonglong)pplStack_140 >> 0x10);
  uVar16 = (uint)pplStack_140 & 0xffff;
  uVar20 = (uint)((ulonglong)local_148 >> 0x10);
  uVar14 = (uint)local_148 & 0xffff;
  uVar20 = ((uint)local_148 << 0x10 | uVar14) + (int)((ulonglong)local_148 >> 0x20) +
           (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar14 >> 4);
  uVar20 = (uVar20 >> 2) + 0x9e3779b9 +
           ((uint)pplStack_140 << 0x10 | uVar16) + (int)((ulonglong)pplStack_140 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar16 >> 4) + uVar20 * 0x40 ^ uVar20;
  uVar14 = uVar20 >> 0xd ^ -uVar20;
  uVar10 = uVar14 << 8 ^ (-0x61c88647 - uVar20) - uVar14;
  uVar20 = uVar10 >> 0xd ^ (uVar20 - uVar14) - uVar10;
  uVar14 = uVar20 >> 0xc ^ (uVar14 - uVar10) - uVar20;
  uVar10 = uVar14 << 0x10 ^ (uVar10 - uVar20) - uVar14;
  uVar17 = uVar10 >> 5 ^ (uVar20 - uVar14) - uVar10;
  uVar16 = uVar17 >> 3 ^ (uVar14 - uVar10) - uVar17;
  uVar20 = uVar16 << 10 ^ (uVar10 - uVar17) - uVar16;
  uVar14 = 0;
  uVar10 = local_130 - 1;
  if (local_130 == 0) {
    uVar10 = uVar14;
  }
  if (0 < (int)uVar10) {
    puVar7 = local_138;
    if (local_130 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    lVar13 = 0;
    uVar14 = 0;
    do {
      uVar11 = ((uint)(ushort)puVar7[lVar13] + (uint)(0x19 < (ushort)puVar7[lVar13] - 0x61) * 0x20)
               - 0x20;
      uVar14 = uVar14 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar14 ^ uVar11) & 0xff) * 4);
      uVar14 = uVar14 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar14 & 0xff ^ uVar11 >> 8 & 0xff) * 4);
      lVar13 = lVar13 + 1;
    } while (uVar10 != (uint)lVar13);
  }
  uVar16 = uVar14 >> 0xd ^ (uVar20 >> 0xf ^ uVar17 - (uVar16 + uVar20)) - uVar14;
  uVar20 = uVar16 << 8 ^ (-0x61c88647 - uVar14) - uVar16;
  uVar10 = uVar20 >> 0xd ^ (uVar14 - uVar16) - uVar20;
  uVar14 = uVar10 >> 0xc ^ (uVar16 - uVar20) - uVar10;
  uVar16 = uVar14 << 0x10 ^ (uVar20 - uVar10) - uVar14;
  uVar20 = uVar16 >> 5 ^ (uVar10 - uVar14) - uVar16;
  uVar10 = uVar20 >> 3 ^ (uVar14 - uVar16) - uVar20;
  uVar14 = uVar10 << 10 ^ (uVar16 - uVar20) - uVar10;
  iVar3 = FUN_1490d2208(plVar5,uVar14 >> 0xf ^ uVar20 - (uVar10 + uVar14),&local_148);
  plVar12 = local_188;
  if (iVar3 == -1) {
    lVar13 = 0;
  }
  else {
    lVar13 = (longlong)iVar3 * 0x38 + *plVar5;
  }
  plVar22 = (longlong *)(lVar13 + 0x20);
  if (lVar13 == 0) {
    plVar22 = (longlong *)0x0;
  }
  if (local_138 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (plVar22 != (longlong *)0x0) {
    iVar3 = (int)plVar22[1];
    if (iVar3 == (int)param_2[1]) {
      if (1 < iVar3) {
        lVar13 = 0;
        while( true ) {
          uVar15 = *(ushort *)(*plVar22 + lVar13);
          uVar9 = (ulonglong)uVar15;
          uVar19 = *(ushort *)(*param_2 + lVar13);
          if (uVar15 != uVar19) break;
          if (uVar15 == 0) goto LAB_14445bc53;
LAB_14445bda0:
          lVar13 = lVar13 + 2;
        }
        if ((uVar19 | uVar15) < 0x80) {
          uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          uVar18 = (ulonglong)uVar19;
          uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
          if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar18]) goto LAB_14445bda0;
        }
        plVar12 = local_188;
        if (uVar15 != uVar19) goto LAB_14445be67;
      }
    }
    else if ((int)param_2[1] + iVar3 != 1) {
LAB_14445be67:
      FUN_14445bf32(param_1,local_168,plVar22);
      if (local_158 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14445bc53:
  FUN_1490c9a4e(param_1,param_2);
  FUN_1400bbfc4(&local_148,plVar4);
  local_a0 = param_2;
  local_98 = &local_148;
  FUN_1490d1f04(plVar12,&local_8c,&local_a0,0);
  if (local_138 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400bbfc4(&local_148,plVar4);
  local_a0 = &local_148;
  local_98 = param_2;
  FUN_1490d2276(plVar5,&local_8c,&local_a0);
  if (local_138 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400bbfc4(&local_148,plVar4);
  FUN_1490c91d6(param_1,&local_148,param_8);
  if (local_138 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_170 == local_178) {
    local_a0 = plVar4;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(plVar4);
    }
    local_148 = param_2;
    pplStack_140 = &local_a0;
    FUN_1490cdfc2(param_1 + 0xe8,&local_8c);
  }
  else {
    FUN_1490ceb36(param_1 + 0xe8,param_2);
  }
  uVar10 = *(uint *)((longlong)plVar4 + 0xc);
  if ((int)uVar10 < DAT_14c9647dc) {
    lVar13 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
  }
  else {
    lVar13 = 0;
  }
  iVar3 = *(int *)(lVar13 + 0x10);
  if (*(int *)(lVar13 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    iVar6 = DAT_14c964868 + 1;
    bVar23 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar23) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar6);
    }
    LOCK();
    iVar3 = *(int *)(lVar13 + 0x10);
    bVar23 = iVar3 == 0;
    if (bVar23) {
      *(int *)(lVar13 + 0x10) = iVar6;
      iVar3 = 0;
    }
    UNLOCK();
    if (bVar23) {
      iVar3 = iVar6;
    }
  }
  local_148 = (longlong *)CONCAT44(iVar3,uVar10);
  FUN_146149022(param_1 + 0x1d8,&local_a0,&local_148,0);
  uVar2 = DAT_14c868730;
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = 1;
    uVar2 = DAT_14c868730;
  }
LAB_14445b797:
  DAT_14c868730 = uVar2;
  SRWLock = local_180;
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
LAB_14445b7a9:
  if (local_b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive(SRWLock);
LAB_14445b34d:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 14445bf32 FUN_14445bf32 body=1255 status=ok
// SIG undefined FUN_14445bf32(void)

longlong * FUN_14445bf32(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_128 [32];
  longlong *local_108;
  uint local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8 [2];
  undefined2 *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78 [3];
  undefined8 local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar15 = param_3[1];
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((int)lVar15 < 2) goto LAB_14445bf6d;
  lVar13 = 0;
  uVar8 = 0;
  do {
    uVar2 = *(ushort *)(*param_3 + lVar13 * 2);
    uVar11 = ((uint)(0x19 < uVar2 - 0x61) * 0x20 + (uint)uVar2) - 0x20;
    uVar14 = (uint)(uVar8 >> 8) ^
             *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar8 ^ uVar11) & 0xff) * 4);
    uVar8 = (ulonglong)
            (uVar14 >> 8 ^
            *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar14 & 0xff ^ uVar11 >> 8 & 0xff) * 4));
    lVar13 = lVar13 + 1;
  } while ((int)lVar15 + -1 != (int)lVar13);
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar7 = FUN_1490d10fe(plVar1,uVar8,param_3);
  if (iVar7 != -1) {
    lVar13 = *plVar1;
    lVar9 = (longlong)iVar7 * 0x38;
    lVar15 = lVar13 + lVar9;
    uVar3 = *(undefined4 *)(lVar15 + 0x14);
    uVar4 = *(undefined4 *)(lVar15 + 0x18);
    uVar5 = *(undefined4 *)(lVar15 + 0x1c);
    *(undefined4 *)param_2 = *(undefined4 *)(lVar15 + 0x10);
    *(undefined4 *)((longlong)param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 1) = uVar4;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
    if ((longlong *)(lVar15 + 0x10) != param_2) {
      param_2[2] = *(longlong *)(lVar13 + 0x20 + lVar9);
      *(undefined8 *)(lVar13 + 0x20 + lVar9) = 0;
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(lVar13 + 0x28 + lVar9);
      *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(lVar13 + 0x2c + lVar9);
      *(undefined8 *)(lVar13 + 0x28 + lVar9) = 0;
    }
    FUN_1490d11ca(plVar1,iVar7);
  }
  FUN_1490d5ba0(param_1 + 0x98,param_2);
  FUN_1490ceb36(param_1 + 0xe8,param_3);
  if (*param_2 != 0) {
    FUN_140ba791a(param_2,&local_60);
    local_78[0] = 0;
    local_78[1] = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = (undefined2 *)0x0;
    uStack_90 = 0;
    local_108 = local_a8;
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_100 = local_100 & 0xffffff00;
    FUN_1468713d2(&local_60,local_78,&local_88);
    if ((int)uStack_80 < 2) {
LAB_14445c0f0:
      lVar13 = 0;
    }
    else {
      FUN_1446f470e(&local_b0,local_88,1);
      if (DAT_14c951858 == 0) {
        local_d0 = &local_50;
        local_50 = FUN_1449e2820;
        local_c0 = FUN_14081d0ea;
        local_c8 = FUN_14081d0ea;
        local_d8 = &LAB_1468c5283;
        local_e0 = FUN_142809da0;
        local_e8 = L"Engine";
        local_f0 = 0x400000000;
        local_f8 = 0x10000000;
        local_100 = 8;
        local_108 = (longlong *)CONCAT44(local_108._4_4_,0x50);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar13 = 0;
      local_100 = 0;
      local_108 = (longlong *)((ulonglong)local_108 & 0xffffffff00000000);
      lVar15 = FUN_140be85e0(DAT_14c951858,0,local_b0,0);
      if (lVar15 != 0) {
        if (((*(longlong *)(lVar15 + 0x48) != 0) &&
            (*(longlong *)(*(longlong *)(lVar15 + 0x48) + 0x28) != 0)) ||
           (cVar6 = FUN_140ebe022(lVar15), cVar6 == '\0')) goto LAB_14445c0f0;
        puVar10 = local_98;
        if ((int)uStack_90 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        FUN_1446f470e(&local_b8,puVar10,1);
        if (DAT_14c927740 == 0) {
          local_d0 = &local_50;
          local_50 = FUN_1449e2820;
          local_c0 = FUN_14081d0ea;
          local_c8 = FUN_14081d0ea;
          local_d8 = &LAB_146856450;
          local_e0 = FUN_1427b121c;
          local_e8 = L"Engine";
          local_f0 = 0;
          local_f8 = 0x10000021;
          local_100 = 8;
          local_108 = (longlong *)CONCAT44(local_108._4_4_,0x28);
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        local_100 = 0;
        local_108 = (longlong *)((ulonglong)local_108 & 0xffffffff00000000);
        lVar13 = FUN_140be85e0(DAT_14c927740,lVar15,local_b8,0);
      }
    }
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (lVar13 != 0) {
      local_60 = 0;
      uVar11 = *(uint *)(lVar13 + 0xc);
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar15 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar15 = 0;
      }
      iVar7 = *(int *)(lVar15 + 0x10);
      if (*(int *)(lVar15 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar7 = *(int *)(lVar15 + 0x10);
        bVar16 = iVar7 == 0;
        if (bVar16) {
          *(int *)(lVar15 + 0x10) = iVar12;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar7 = iVar12;
        }
      }
      local_60 = CONCAT44(iVar7,uVar11);
      FUN_147db66f0(param_1 + 0x1d8);
    }
  }
  FUN_1490c9a4e(param_1,param_3);
LAB_14445bf6d:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14445c41a FUN_14445c41a body=1201 status=ok
// SIG undefined FUN_14445c41a(void)

void FUN_14445c41a(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  ushort uVar9;
  ulonglong uVar10;
  int iVar11;
  ushort uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined8 uStack_b0;
  wchar_t *local_a8;
  undefined8 uStack_a0;
  wchar_t *local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  int local_80;
  wchar_t *local_78;
  ulonglong uStack_70;
  wchar_t *local_68;
  int local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  for (lVar5 = param_1; lVar1 = param_1, lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x20)) {
    if ((*(uint *)(lVar5 + 8) & 0x30) != 0) goto LAB_14445c84f;
  }
LAB_14445c468:
  lVar15 = lVar1;
  lVar5 = lVar15;
  if (*(longlong *)(lVar15 + 0x20) != 0) goto code_r0x00014445c477;
  goto LAB_14445c48b;
code_r0x00014445c477:
  lVar1 = *(longlong *)(lVar15 + 0x20);
  if ((*(uint *)(lVar15 + 8) >> 0x1c & 1) == 0) goto LAB_14445c468;
  lVar5 = FUN_142840154(lVar15);
LAB_14445c48b:
  lVar1 = DAT_14c951640;
  if (lVar5 == 0) {
    lVar1 = *(longlong *)(lVar15 + 0x20);
    goto LAB_14445c468;
  }
  if (lVar5 == DAT_14c951640) {
    local_78 = (wchar_t *)0x0;
    uStack_70 = 0;
    FUN_1401031ac(DAT_14c951640);
    iVar3 = *(int *)(param_1 + 0x30);
    if (iVar3 == (int)uStack_70) {
      bVar17 = true;
      if (1 < iVar3) {
        lVar15 = 0;
        while( true ) {
          uVar12 = *(ushort *)(*(longlong *)(param_1 + 0x28) + lVar15);
          uVar4 = (uint)uVar12;
          uVar9 = *(ushort *)((longlong)local_78 + lVar15);
          uVar14 = (uint)uVar9;
          if (uVar12 != uVar9) {
            if ((uVar9 | uVar12) < 0x80) {
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar12];
              uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar9]) goto LAB_14445c4f9;
            }
            iVar3 = uVar4 - uVar14;
            goto LAB_14445c534;
          }
          if (uVar12 == 0) break;
LAB_14445c4f9:
          lVar15 = lVar15 + 2;
        }
        iVar3 = 0;
LAB_14445c534:
        bVar17 = iVar3 == 0;
      }
    }
    else {
      bVar17 = (int)uStack_70 + iVar3 == 1;
    }
    if (local_78 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (bVar17) goto LAB_14445c54d;
LAB_14445c618:
    local_78 = (wchar_t *)0x0;
    uStack_70 = 0;
    FUN_1401031ac(DAT_14c951640,0,&local_78);
    pwVar7 = local_78;
    iVar3 = (int)uStack_70;
  }
  else {
LAB_14445c54d:
    local_88 = *(undefined8 *)(param_1 + 0x28);
    local_80 = *(int *)(param_1 + 0x30) + -1;
    if (*(int *)(param_1 + 0x30) == 0) {
      local_80 = 0;
    }
    cVar2 = FUN_14022f3b8(&local_88,0,0);
    if (cVar2 != '\0') goto LAB_14445c660;
    if (lVar5 == lVar1) goto LAB_14445c618;
    local_b8 = (wchar_t *)0x0;
    uStack_b0 = 0;
    FUN_1401031ac(param_1,0,&local_b8);
    FUN_140beea4a(&local_a8,&local_b8);
    local_78 = local_a8;
    iVar3 = (int)uStack_a0 + -1;
    if ((int)uStack_a0 == 0) {
      iVar3 = 0;
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,iVar3);
    local_68 = L"UsdAssets";
    local_60 = 9;
    FUN_140bee87a(&local_98,&local_78,2);
    iVar3 = (int)uStack_90;
    pwVar7 = local_98;
    local_98 = (wchar_t *)0x0;
    uStack_90 = 0;
    if (local_a8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_b8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  iVar11 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar11 = 0;
  }
  FUN_1402980a2(param_1 + 0x28,pwVar7,iVar11);
  if (pwVar7 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar7);
  }
LAB_14445c660:
  if (lVar5 != lVar1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbfe750) && (FUN_144b3d300(&DAT_14cbfe750), DAT_14cbfe750 == -1)) {
      FUN_140056680(&DAT_14cbfe740,L"/Game/");
      atexit((_func_5014 *)&LAB_14445f7c3);
      _Init_thread_footer(&DAT_14cbfe750);
    }
    local_98 = (wchar_t *)0x0;
    uVar4 = *(uint *)(param_1 + 0x30);
    _Src = *(void **)(param_1 + 0x28);
    uStack_90 = CONCAT44(uStack_90._4_4_,uVar4);
    if ((longlong)(int)uVar4 == 0) {
      uStack_90 = (ulonglong)uVar4;
    }
    else {
      FUN_1446dd670(&local_98,uVar4,0);
      memcpy(local_98,_Src,(longlong)(int)uVar4 * 2);
    }
    uVar4 = DAT_14cbfe748 - 1;
    if (DAT_14cbfe748 == 0) {
      uVar4 = 0;
    }
    if (0 < (int)uVar4) {
      puVar8 = &DAT_149dfb77a;
      if (DAT_14cbfe748 != 0) {
        puVar8 = DAT_14cbfe740;
      }
      uVar16 = (ulonglong)uVar4;
      pwVar7 = L"";
      if ((int)uStack_90 != 0) {
        pwVar7 = local_98;
      }
      lVar5 = 0;
      while( true ) {
        uVar12 = *(ushort *)((longlong)pwVar7 + lVar5);
        uVar13 = (ulonglong)uVar12;
        uVar9 = *(ushort *)((longlong)puVar8 + lVar5);
        if (uVar12 != uVar9) break;
        if (uVar12 == 0) goto LAB_14445c75f;
LAB_14445c734:
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_14445c75f;
        lVar5 = lVar5 + 2;
      }
      if ((uVar9 | uVar12) < 0x80) {
        uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
        uVar10 = (ulonglong)uVar9;
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar10]) goto LAB_14445c734;
      }
      if (uVar12 != uVar9) goto LAB_14445c79f;
LAB_14445c75f:
      uVar14 = (int)uStack_90 - 1;
      if ((int)uStack_90 == 0) {
        uVar14 = 0;
      }
      if ((int)uVar14 <= (int)uVar4) {
        uVar4 = uVar14;
      }
      uVar16 = (ulonglong)uVar4;
      if ((int)uVar4 < 1) {
        uVar16 = 0;
      }
      FUN_14006620a(&local_78,pwVar7 + uVar16,uVar14 - (int)uVar16);
      if (local_98 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_98 = local_78;
      uStack_90 = uStack_70;
    }
LAB_14445c79f:
    FUN_1410f2562(&local_b8);
    local_78 = local_b8;
    iVar3 = (int)uStack_b0 + -1;
    if ((int)uStack_b0 == 0) {
      iVar3 = 0;
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,iVar3);
    local_68 = local_98;
    local_60 = (int)uStack_90 + -1;
    if ((int)uStack_90 == 0) {
      local_60 = 0;
    }
    FUN_140bee87a(&local_a8,&local_78,2);
    if (local_98 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_98 = local_a8;
    uStack_90 = uStack_a0;
    local_a8 = (wchar_t *)0x0;
    uStack_a0 = 0;
    if (local_b8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    plVar6 = (longlong *)FUN_14054d1d4();
    pwVar7 = local_98;
    if ((int)uStack_90 == 0) {
      pwVar7 = L"";
    }
    (**(code **)(*plVar6 + 0x58))(plVar6,pwVar7,1);
    if (local_98 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14445c84f:
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14445c8cc FUN_14445c8cc body=459 status=ok
// SIG undefined FUN_14445c8cc(void)

longlong FUN_14445c8cc(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_2;
  if ((((lVar1 == 0) || (lVar4 = FUN_14595e57c(), lVar4 == 0)) ||
      (*(int *)(lVar1 + 0x38) < *(int *)(lVar4 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
       lVar4 + 0x30 || (*param_2 == 0)))) {
    lVar1 = FUN_14595e57c();
    if ((lVar1 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar1);
    }
    *param_2 = lVar1;
  }
  uVar2 = FUN_1411bc9a6();
  plVar3 = (longlong *)FUN_144718840(param_1,uVar2);
  if (plVar3 == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    local_30 = *param_2;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    lVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
    if (lVar1 != 0) {
      lVar4 = FUN_14595e57c();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) goto LAB_14445c950;
    }
    local_38 = FUN_14595e57c();
    if ((local_38 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_38);
    }
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    FUN_1446f470e(&local_40,L"UsdAssetUserData",1);
    lVar1 = *param_2;
    if ((((lVar1 == 0) || (lVar4 = FUN_14595e57c(), lVar4 == 0)) ||
        (*(int *)(lVar1 + 0x38) < *(int *)(lVar4 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)) {
      lVar1 = 0;
    }
    else {
      lVar1 = *param_2;
    }
    local_58 = 0;
    uStack_50 = 0;
    local_60 = 0;
    local_68 = 0;
    lVar1 = FUN_1490cc622(param_1,lVar1,local_40,0);
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar1);
  }
LAB_14445c950:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 14445ca98 FUN_14445ca98 body=10679 status=ok
// SIG undefined FUN_14445ca98(void)

void FUN_14445ca98(wchar_t *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  wchar_t **ppwVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  wchar_t *pwVar8;
  uint *puVar9;
  undefined2 *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  uint *puVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  LARGE_INTEGER LVar28;
  uint uVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  uint uVar33;
  uint uVar34;
  wchar_t **ppwVar35;
  ulonglong uVar36;
  wchar_t *pwVar37;
  bool bVar38;
  undefined1 auStack_538 [32];
  wchar_t **local_518;
  uint local_510;
  undefined4 local_508;
  undefined8 local_500;
  wchar_t *local_4f8;
  code *local_4f0;
  undefined1 *local_4e8;
  LARGE_INTEGER *local_4e0;
  code *local_4d8;
  code *local_4d0;
  uint *local_4c8;
  wchar_t *local_4c0;
  ulonglong local_4b8;
  wchar_t *local_4b0;
  wchar_t *local_4a8;
  uint local_49c;
  wchar_t *local_498;
  PSRWLOCK local_490;
  wchar_t *local_488;
  undefined1 local_480 [16];
  longlong local_470;
  undefined8 local_460;
  undefined8 local_458;
  undefined1 local_450 [4];
  undefined1 local_44c [4];
  longlong *local_448 [2];
  LARGE_INTEGER local_438;
  longlong *local_430;
  longlong local_428 [3];
  longlong *local_410 [2];
  wchar_t *local_400 [2];
  ulonglong local_3f0;
  LARGE_INTEGER local_3e8;
  undefined4 local_3e0;
  LARGE_INTEGER local_3d8;
  longlong *local_3d0;
  wchar_t **local_3c8;
  undefined8 *local_3c0;
  LARGE_INTEGER local_3b8;
  undefined8 uStack_3b0;
  longlong *local_3a8;
  char local_37c;
  LARGE_INTEGER local_358;
  LARGE_INTEGER *local_350;
  longlong *local_348;
  undefined4 local_320;
  char local_31c;
  byte local_308;
  longlong local_2f8;
  undefined8 uStack_2f0;
  uint local_2e8 [4];
  uint *local_2d8;
  int local_2d0;
  undefined8 local_2cc;
  int local_2c4;
  longlong local_2b8;
  undefined4 local_2b0;
  longlong local_2a8 [4];
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined4 local_274;
  longlong local_268;
  undefined4 local_260;
  longlong local_258 [2];
  uint local_248 [4];
  uint *local_238;
  int local_230;
  undefined8 local_22c;
  undefined4 local_224;
  longlong local_218;
  undefined4 local_210;
  LARGE_INTEGER local_208;
  int local_200;
  uint local_1f8 [4];
  uint *local_1e8;
  int local_1e0;
  int local_1d4;
  longlong local_1c8;
  undefined4 local_1c0;
  wchar_t *local_1b8;
  undefined8 uStack_1b0;
  longlong *local_1a8 [2];
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  int local_184;
  undefined1 local_180 [8];
  undefined1 *local_178;
  int local_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  int local_134;
  undefined1 local_130 [8];
  undefined1 *local_128;
  int local_120;
  LARGE_INTEGER local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  uint local_b8 [4];
  uint *local_a8;
  uint local_a0;
  undefined8 local_9c;
  int local_94;
  undefined1 local_90 [8];
  undefined1 *local_88;
  int local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_538;
  uVar24 = 0;
  local_238 = (uint *)0x0;
  local_230 = 0;
  local_258[0] = 0;
  local_258[1] = 0;
  local_22c = 0xffffffff00000080;
  local_224 = 0;
  local_218 = 0;
  local_210 = 0;
  local_288 = 0;
  local_280 = 0;
  local_2a8[0] = 0;
  local_2a8[1] = 0;
  local_27c = 0xffffffff00000080;
  local_274 = 0;
  local_268 = 0;
  local_260 = 0;
  local_2d8 = (uint *)0x0;
  local_2d0 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2cc = 0xffffffff00000080;
  local_2c4 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_490 = (PSRWLOCK)(param_1 + 0x11c);
  AcquireSRWLockExclusive(local_490);
  uVar36 = 1;
  FUN_1446f470e(&local_458,L"AssetRegistry",1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  FUN_1401e3324(&DAT_14c874628,local_458);
  pwVar37 = param_1 + 0x28;
  uVar26 = *(uint *)(param_1 + 0x34);
  iVar25 = 0;
  uVar5 = 0;
  local_4c0 = param_1;
  if (uVar26 != 0) {
    pwVar8 = *(wchar_t **)(param_1 + 0x30);
    if (*(wchar_t **)(param_1 + 0x30) == (wchar_t *)0x0) {
      pwVar8 = pwVar37;
    }
    uVar5 = *(uint *)pwVar8;
    if (uVar5 == 0) {
      iVar25 = uVar26 + 0x1e;
      if (-1 < (int)(uVar26 - 1)) {
        iVar25 = uVar26 - 1;
      }
      uVar24 = 0;
      uVar36 = (ulonglong)(uint)(iVar25 >> 5);
      if (iVar25 >> 5 < 1) {
        uVar36 = uVar24;
      }
      iVar25 = 0;
      do {
        if (uVar36 == uVar24) goto LAB_14445cc79;
        iVar25 = iVar25 + 0x20;
        uVar5 = *(uint *)(pwVar8 + (uVar24 + 1) * 2);
        uVar24 = uVar24 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar24 = 0;
    }
    uVar36 = (ulonglong)(-uVar5 & uVar5);
    uVar27 = uVar36 * 2 + 1;
    lVar31 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    uVar5 = (iVar25 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
    if ((int)uVar26 <= (int)uVar5) {
      uVar5 = uVar26;
    }
  }
  if (uVar5 != uVar26) {
    local_498 = param_1 + 0x108;
    local_488 = param_1 + 0x9c;
    uVar34 = 0xffffffff;
    local_4b0 = (wchar_t *)(ulonglong)uVar26;
    local_4a8 = pwVar37;
    do {
      local_4c8 = (uint *)CONCAT44(local_4c8._4_4_,iVar25);
      lVar31 = *(longlong *)(param_1 + 0x20);
      lVar32 = lVar31 + (longlong)(int)uVar5 * 0x38 + 0x10;
      FUN_14475cc44(lVar32,&local_3b8);
      local_c8 = 0;
      uStack_c0 = 0;
      local_118.QuadPart = 0;
      uStack_110 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_1b8 = (wchar_t *)0x0;
      uStack_1b0 = 0;
      local_518 = &local_1b8;
      local_510 = local_510 & 0xffffff00;
      FUN_1468713d2(&local_3b8,&local_c8,&local_118,&local_168);
      LVar28.QuadPart = (LONGLONG)&DAT_149dfb77a;
      if ((int)uStack_110 != 0) {
        LVar28 = local_118;
      }
      FUN_1446f470e(&local_460,LVar28.QuadPart,1);
      uVar11 = local_460;
      if (DAT_14c951858 == 0) {
        local_358.QuadPart = (LONGLONG)FUN_1449e2820;
        local_4d0 = FUN_14081d0ea;
        local_4d8 = FUN_14081d0ea;
        local_4e0 = &local_358;
        local_4e8 = &LAB_1468c5283;
        local_4f0 = FUN_142809da0;
        local_4f8 = L"Engine";
        local_500 = 0x400000000;
        local_508 = 0x10000000;
        local_510 = 8;
        local_518 = (wchar_t **)CONCAT44(local_518._4_4_,0x50);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      local_510 = 0;
      local_518 = (wchar_t **)((ulonglong)local_518 & 0xffffffff00000000);
      lVar30 = FUN_140be85e0(DAT_14c951858,0,uVar11,0);
      if ((lVar30 != 0) &&
         (((*(longlong *)(lVar30 + 0x48) == 0 ||
           (*(longlong *)(*(longlong *)(lVar30 + 0x48) + 0x28) < 1)) &&
          (uVar27 = FUN_140081d40(lVar32,0), uVar27 != 0)))) {
        uVar26 = *(uint *)(uVar27 + 0xc);
        if ((int)uVar26 < DAT_14c9647dc) {
          lVar30 = (ulonglong)((uVar26 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8);
        }
        else {
          lVar30 = 0;
        }
        uVar6 = *(uint *)(lVar30 + 0x10);
        if (*(uint *)(lVar30 + 0x10) == 0) {
          LOCK();
          iVar25 = DAT_14c964868 + 1;
          UNLOCK();
          uVar14 = DAT_14c964868 + 1;
          bVar38 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar25;
          if (bVar38) {
            local_4b8 = uVar27;
            local_49c = uVar14;
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar14);
            uVar27 = local_4b8;
            uVar14 = local_49c;
          }
          LOCK();
          uVar6 = *(uint *)(lVar30 + 0x10);
          bVar38 = uVar6 == 0;
          if (bVar38) {
            *(uint *)(lVar30 + 0x10) = uVar14;
            uVar6 = 0;
          }
          UNLOCK();
          if (bVar38) {
            uVar6 = uVar14;
          }
        }
        pwVar37 = local_4a8;
        if (*(int *)(local_4c0 + 0xf0) != *(int *)(local_4c0 + 0x106)) {
          uVar19 = uVar6 >> 0xd ^ uVar26 - uVar6;
          uVar14 = uVar19 << 8 ^ (-0x61c88647 - uVar6) - uVar19;
          uVar29 = uVar14 >> 0xd ^ (uVar6 - uVar19) - uVar14;
          uVar33 = uVar29 >> 0xc ^ (uVar19 - uVar14) - uVar29;
          uVar19 = uVar33 << 0x10 ^ (uVar14 - uVar29) - uVar33;
          uVar14 = uVar19 >> 5 ^ (uVar29 - uVar33) - uVar19;
          uVar29 = uVar14 >> 3 ^ (uVar33 - uVar19) - uVar14;
          uVar19 = uVar29 << 10 ^ (uVar19 - uVar14) - uVar29;
          pwVar8 = *(wchar_t **)(local_4c0 + 0x10c);
          if (*(wchar_t **)(local_4c0 + 0x10c) == (wchar_t *)0x0) {
            pwVar8 = local_498;
          }
          iVar25 = *(int *)(pwVar8 + (ulonglong)
                                     (*(int *)(local_4c0 + 0x110) - 1U &
                                     (uVar19 >> 0xf ^ uVar14 - (uVar29 + uVar19))) * 2);
          if (iVar25 != -1) {
            LVar28.QuadPart = lVar31 + (longlong)(int)uVar5 * 0x38;
            lVar31 = *(longlong *)(local_4c0 + 0xec);
LAB_14445d081:
            lVar30 = (longlong)iVar25 * 0x10;
            if ((*(uint *)(lVar31 + lVar30) != uVar26) || (*(uint *)(lVar31 + 4 + lVar30) != uVar6))
            goto LAB_14445d094;
            iVar25 = *(int *)(LVar28.QuadPart + 8);
            uVar20 = 0;
            iVar7 = iVar25 + -1;
            if (iVar25 == 0) {
              iVar7 = 0;
            }
            if (0 < iVar7) {
              puVar10 = &DAT_149dfb77a;
              if (iVar25 != 0) {
                puVar10 = *(undefined2 **)LVar28;
              }
              lVar31 = 0;
              uVar20 = 0;
              do {
                uVar26 = ((uint)(ushort)puVar10[lVar31] +
                         (uint)(0x19 < (ushort)puVar10[lVar31] - 0x61) * 0x20) - 0x20;
                uVar5 = (uint)(uVar20 >> 8) ^
                        *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar20 ^ uVar26) & 0xff) * 4);
                uVar20 = (ulonglong)
                         (uVar5 >> 8 ^
                         *(uint *)(&DAT_14c75d150 +
                                  (ulonglong)(uVar5 & 0xff ^ uVar26 >> 8 & 0xff) * 4));
                lVar31 = lVar31 + 1;
              } while (iVar7 != (int)lVar31);
            }
            local_4b8 = uVar27;
            iVar25 = FUN_1490d2f00(local_488,uVar20,LVar28.QuadPart);
            if (iVar25 == -1) {
LAB_14445d178:
              local_208.s.LowPart = *(uint *)(local_4b8 + 0xc);
              local_208.s.HighPart = 0;
              if ((int)local_208.s.LowPart < DAT_14c9647dc) {
                lVar31 = (ulonglong)((local_208.s.LowPart & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_208.s.LowPart >> 0x10) * 8)
                ;
              }
              else {
                lVar31 = 0;
              }
              iVar25 = *(int *)(lVar31 + 0x10);
              if (*(int *)(lVar31 + 0x10) == 0) {
                LOCK();
                iVar25 = DAT_14c964868 + 1;
                UNLOCK();
                iVar7 = DAT_14c964868 + 1;
                bVar38 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar25;
                if (bVar38) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar7);
                }
                LOCK();
                iVar25 = *(int *)(lVar31 + 0x10);
                bVar38 = iVar25 == 0;
                if (bVar38) {
                  *(int *)(lVar31 + 0x10) = iVar7;
                  iVar25 = 0;
                }
                UNLOCK();
                if (bVar38) {
                  iVar25 = iVar7;
                }
              }
              local_208.s.HighPart = iVar25;
              local_350 = &local_208;
              local_358.QuadPart = LVar28.QuadPart;
              FUN_1490ce522(local_258,&local_3c8,&local_358);
              local_208.QuadPart = 0;
              uVar26 = *(uint *)(local_4b8 + 0xc);
              if ((int)uVar26 < DAT_14c9647dc) {
                lVar31 = (ulonglong)((uVar26 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8);
              }
              else {
                lVar31 = 0;
              }
              iVar25 = *(int *)(lVar31 + 0x10);
              if (*(int *)(lVar31 + 0x10) == 0) {
                LOCK();
                iVar25 = DAT_14c964868 + 1;
                UNLOCK();
                iVar7 = DAT_14c964868 + 1;
                bVar38 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar25;
                if (bVar38) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar7);
                }
                LOCK();
                iVar25 = *(int *)(lVar31 + 0x10);
                bVar38 = iVar25 == 0;
                if (bVar38) {
                  *(int *)(lVar31 + 0x10) = iVar7;
                  iVar25 = 0;
                }
                UNLOCK();
                if (bVar38) {
                  iVar25 = iVar7;
                }
              }
              local_208.s.HighPart = iVar25;
              local_208.s.LowPart = uVar26;
              local_358.QuadPart = LVar28.QuadPart;
              local_350 = &local_208;
              FUN_1490d38e4(local_2a8,&local_3c8,&local_358);
              local_358.QuadPart = FUN_140081d40(lVar32,0);
              FUN_146862646(&local_2f8,&local_208,&local_358,0);
              pwVar37 = local_4a8;
            }
            else if (((*(longlong *)local_488 + (longlong)iVar25 * 0x28 + 0x10U & 0xffffffffffffffef
                      ) == 0) ||
                    (*(int *)(*(longlong *)local_488 + (longlong)iVar25 * 0x28 + 0x18) < 1))
            goto LAB_14445d178;
          }
        }
      }
LAB_14445d2c0:
      if (local_1b8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      param_1 = local_4c0;
      iVar25 = (int)local_4c8;
      if (local_168 != 0) {
        FUN_1400020a8();
      }
      if ((code *)local_118.QuadPart != (code *)0x0) {
        FUN_1400020a8();
      }
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if ((wchar_t *)local_3b8.QuadPart != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      uVar34 = uVar34 & ~(uint)uVar36;
      pwVar8 = *(wchar_t **)(param_1 + 0x30);
      if (*(wchar_t **)(param_1 + 0x30) == (wchar_t *)0x0) {
        pwVar8 = pwVar37;
      }
      uVar26 = *(uint *)(param_1 + 0x34);
      iVar7 = (int)uVar24;
      lVar31 = (longlong)iVar7;
      uVar5 = *(uint *)(pwVar8 + lVar31 * 2) & uVar34;
      if (uVar5 == 0) {
        iVar23 = uVar26 + 0x1e;
        if (-1 < (int)(uVar26 - 1)) {
          iVar23 = uVar26 - 1;
        }
        iVar23 = iVar23 >> 5;
        iVar25 = iVar25 + 0x20;
        iVar17 = iVar23;
        if (iVar23 < iVar7) {
          iVar17 = iVar7;
        }
        if (iVar7 < iVar23) {
          lVar32 = 0;
          do {
            uVar5 = *(uint *)(pwVar8 + (lVar31 + lVar32 + 1) * 2);
            if (uVar5 != 0) {
              uVar24 = (ulonglong)(iVar7 + (int)lVar32 + 1);
              uVar34 = 0xffffffff;
              goto LAB_14445d39c;
            }
            iVar25 = iVar25 + 0x20;
            lVar32 = lVar32 + 1;
          } while (iVar17 - lVar31 != lVar32);
          uVar34 = 0xffffffff;
          iVar7 = iVar17;
        }
        uVar24 = (ulonglong)(iVar7 + 1);
        param_1 = local_4c0;
        pwVar37 = local_4a8;
        uVar5 = uVar26;
      }
      else {
LAB_14445d39c:
        uVar36 = (ulonglong)(-uVar5 & uVar5);
        uVar27 = uVar36 * 2 + 1;
        lVar31 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar31 == 0; lVar31 = lVar31 + -1) {
          }
        }
        uVar5 = (iVar25 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
        if ((int)uVar26 <= (int)uVar5) {
          uVar5 = uVar26;
        }
      }
    } while (uVar5 != (uint)local_4b0);
  }
LAB_14445cc79:
  ReleaseSRWLockExclusive(local_490);
  FUN_14686281e(&local_2f8,0);
  uVar24 = DAT_14c872be8;
  if ((int)uStack_2f0 == local_2c4) {
LAB_14445e135:
    puVar22 = (uint *)0x0;
    AcquireSRWLockExclusive(local_490);
    iVar7 = local_230;
    uVar24 = 1;
    iVar23 = 0;
    iVar25 = 0;
    if (local_230 != 0) {
      puVar9 = local_238;
      if (local_238 == (uint *)0x0) {
        puVar9 = local_248;
      }
      uVar26 = *puVar9;
      if (uVar26 == 0) {
        iVar25 = local_230 + 0x1e;
        if (-1 < local_230 + -1) {
          iVar25 = local_230 + -1;
        }
        puVar22 = (uint *)0x0;
        puVar18 = (uint *)(ulonglong)(uint)(iVar25 >> 5);
        if (iVar25 >> 5 < 1) {
          puVar18 = puVar22;
        }
        iVar23 = 0;
        do {
          if (puVar18 == puVar22) goto LAB_14445e1d4;
          iVar23 = iVar23 + 0x20;
          uVar26 = puVar9[(longlong)((longlong)puVar22 + 1)];
          puVar22 = (uint *)((longlong)puVar22 + 1);
        } while (uVar26 == 0);
      }
      else {
        puVar22 = (uint *)0x0;
      }
      uVar24 = (ulonglong)(-uVar26 & uVar26);
      uVar36 = uVar24 * 2 + 1;
      lVar31 = 0x3f;
      if (uVar36 != 0) {
        for (; uVar36 >> lVar31 == 0; lVar31 = lVar31 + -1) {
        }
      }
      iVar25 = (iVar23 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
      if (local_230 <= iVar25) {
        iVar25 = local_230;
      }
    }
    if (iVar25 != local_230) {
      local_4b0 = local_4c0 + 0xec;
      uVar26 = 0xffffffff;
      do {
        puVar3 = (undefined8 *)(local_258[0] + (longlong)iVar25 * 0x20);
        iVar25 = *(int *)(local_258[0] + 0x14 + (longlong)iVar25 * 0x20);
        if (((((iVar25 == 0) || (uVar5 = *(uint *)(puVar3 + 2), (int)uVar5 < 0)) ||
             (DAT_14c9647dc <= (int)uVar5)) ||
            ((plVar21 = (longlong *)
                        ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
             plVar21 == (longlong *)0x0 || ((int)plVar21[2] != iVar25)))) ||
           (((*(uint *)(plVar21 + 1) & 0x10200000) != 0 || (*plVar21 == 0)))) {
          local_4c8 = puVar22;
          FUN_14445bf32(local_4c0,local_480,puVar3);
          if (local_470 != 0) {
            FUN_1400020a8();
          }
          iVar25 = *(int *)(puVar3 + 1);
          uVar36 = 0;
          iVar17 = iVar25 + -1;
          if (iVar25 == 0) {
            iVar17 = 0;
          }
          if (0 < iVar17) {
            puVar10 = &DAT_149dfb77a;
            if (iVar25 != 0) {
              puVar10 = (undefined2 *)*puVar3;
            }
            lVar31 = 0;
            uVar36 = 0;
            do {
              uVar5 = ((uint)(0x19 < (ushort)puVar10[lVar31] - 0x61) * 0x20 +
                      (uint)(ushort)puVar10[lVar31]) - 0x20;
              uVar34 = (uint)(uVar36 >> 8) ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar36 ^ uVar5) & 0xff) * 4);
              uVar36 = (ulonglong)
                       (uVar34 >> 8 ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar34 & 0xff ^ uVar5 >> 8 & 0xff) * 4
                                ));
              lVar31 = lVar31 + 1;
            } while (iVar17 != (int)lVar31);
          }
          iVar25 = FUN_1490d3bdc(local_2a8,uVar36,puVar3);
          puVar22 = local_4c8;
          lVar31 = (longlong)iVar25 * 0x20 + local_2a8[0];
          if (lVar31 != 0 && iVar25 != -1) {
            FUN_147db66f0(local_4b0,lVar31 + 0x10);
          }
        }
        uVar26 = uVar26 & ~(uint)uVar24;
        puVar9 = local_238;
        if (local_238 == (uint *)0x0) {
          puVar9 = local_248;
        }
        iVar25 = (int)puVar22;
        lVar31 = (longlong)iVar25;
        uVar5 = puVar9[lVar31] & uVar26;
        if (uVar5 == 0) {
          iVar17 = local_230 + 0x1e;
          if (-1 < local_230 + -1) {
            iVar17 = local_230 + -1;
          }
          iVar17 = iVar17 >> 5;
          iVar23 = iVar23 + 0x20;
          iVar15 = iVar17;
          if (iVar17 < iVar25) {
            iVar15 = iVar25;
          }
          if (iVar25 < iVar17) {
            lVar32 = 0;
            do {
              uVar5 = puVar9[lVar31 + lVar32 + 1];
              if (uVar5 != 0) {
                puVar22 = (uint *)(ulonglong)(iVar25 + (int)lVar32 + 1);
                uVar26 = 0xffffffff;
                goto LAB_14445e3c1;
              }
              iVar23 = iVar23 + 0x20;
              lVar32 = lVar32 + 1;
            } while (iVar15 - lVar31 != lVar32);
            uVar26 = 0xffffffff;
            iVar25 = iVar15;
          }
          puVar22 = (uint *)(ulonglong)(iVar25 + 1);
          iVar25 = local_230;
        }
        else {
LAB_14445e3c1:
          uVar24 = (ulonglong)(-uVar5 & uVar5);
          uVar36 = uVar24 * 2 + 1;
          lVar31 = 0x3f;
          if (uVar36 != 0) {
            for (; uVar36 >> lVar31 == 0; lVar31 = lVar31 + -1) {
            }
          }
          iVar25 = (iVar23 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
          if (local_230 <= iVar25) {
            iVar25 = local_230;
          }
        }
      } while (iVar25 != iVar7);
    }
LAB_14445e1d4:
    ReleaseSRWLockExclusive(local_490);
    FUN_140195631(0,0);
    local_2b0 = 0;
    if (local_2b8 != 0) {
      FUN_1400020a8();
    }
    FUN_140603fbe(&local_2f8);
    local_260 = 0;
    if (local_268 != 0) {
      FUN_1400020a8();
    }
    FUN_146150e1c(local_2a8);
    local_210 = 0;
    if (local_218 != 0) {
      FUN_1400020a8();
    }
    FUN_145c6be14(local_258);
    if ((local_70 ^ (ulonglong)auStack_538) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_358 = (LARGE_INTEGER)0x14bac0aea;
  local_350._0_4_ = 0x10;
  FUN_1446e940c(&local_c8,&local_358);
  local_358 = (LARGE_INTEGER)0x14bac0b0c;
  local_350._0_4_ = 0xe;
  FUN_1446e940c(&local_118,&local_358);
  local_358 = (LARGE_INTEGER)0x14bac0ac4;
  local_350 = (LARGE_INTEGER *)CONCAT44(local_350._4_4_,0x12);
  FUN_140208c1e(&local_3b8,&local_118,&local_c8,&local_358);
  local_518 = (wchar_t **)uVar24;
  FUN_140997f46(&local_358,0x42c80000,&local_3b8,1);
  FUN_140997a0e(&local_358);
  if ((wchar_t *)local_3b8.QuadPart != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_3b8 + 0x10))();
  }
  local_320 = 0x3f800000;
  local_31c = '\x01';
  local_308 = local_308 & 0xfc;
  QueryPerformanceCounter(&local_3b8);
  local_a8 = (uint *)0x0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = (undefined1 *)0x0;
  local_80 = 0;
  FUN_140604072(&local_c8,&local_2f8);
  local_3b8.QuadPart = 0;
  uStack_3b0 = 0;
  iVar25 = (int)uStack_2f0 - local_2c4;
  if (-1 < iVar25) {
    if (iVar25 != 0) {
      FUN_14079e7a6(&local_3b8);
    }
    iVar25 = local_2d0;
    if (local_2d0 == 0) {
      uVar27 = 1;
      iVar7 = 0;
      uVar24 = 0;
      iVar23 = 0;
    }
    else {
      puVar22 = local_2d8;
      if (local_2d8 == (uint *)0x0) {
        puVar22 = local_2e8;
      }
      uVar26 = *puVar22;
      if (uVar26 == 0) {
        iVar7 = local_2d0 + 0x1e;
        if (-1 < local_2d0 + -1) {
          iVar7 = local_2d0 + -1;
        }
        uVar24 = 0;
        uVar36 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar36 = uVar24;
        }
        iVar7 = 0;
        do {
          if (uVar36 == uVar24) goto LAB_14445d632;
          iVar7 = iVar7 + 0x20;
          uVar26 = puVar22[uVar24 + 1];
          uVar24 = uVar24 + 1;
        } while (uVar26 == 0);
      }
      else {
        iVar7 = 0;
        uVar24 = 0;
      }
      uVar27 = (ulonglong)(-uVar26 & uVar26);
      uVar36 = uVar27 * 2 + 1;
      lVar31 = 0x3f;
      if (uVar36 != 0) {
        for (; uVar36 >> lVar31 == 0; lVar31 = lVar31 + -1) {
        }
      }
      iVar23 = (iVar7 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
      if (local_2d0 <= iVar23) {
        iVar23 = local_2d0;
      }
    }
    if (iVar23 != local_2d0) {
      uVar26 = 0xffffffff;
      do {
        lVar31 = *(longlong *)(local_2f8 + (longlong)iVar23 * 0x10);
        local_518 = (wchar_t **)((ulonglong)local_518 & 0xffffffff00000000);
        FUN_14086ecde(lVar31,&local_3b8,1,0);
        if (lVar31 != 0) {
          lVar32 = FUN_141225fe0();
          if (((*(int *)(lVar32 + 0x38) <= *(int *)(*(longlong *)(lVar31 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar31 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar32 + 0x38) * 8) == lVar32 + 0x30)) &&
             (lVar32 = *(longlong *)(lVar31 + 0x30), lVar32 != 0)) {
            if (DAT_14c927740 == 0) {
              local_118.QuadPart = (LONGLONG)FUN_1449e2820;
              local_4d0 = FUN_14081d0ea;
              local_4d8 = FUN_14081d0ea;
              local_4e0 = &local_118;
              local_4e8 = &LAB_146856450;
              local_4f0 = FUN_1427b121c;
              local_4f8 = L"Engine";
              local_500 = 0;
              local_508 = 0x10000021;
              local_510 = 8;
              local_518 = (wchar_t **)CONCAT44(local_518._4_4_,0x28);
              FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
              if (DAT_14c927740 == 0) goto LAB_14445e562;
            }
            uVar36 = uStack_3b0;
            iVar23 = *(int *)(DAT_14c927740 + 0x38);
            if (((iVar23 <= *(int *)(lVar32 + 0x38)) &&
                (*(longlong *)(*(longlong *)(lVar32 + 0x30) + (longlong)iVar23 * 8) ==
                 DAT_14c927740 + 0x30)) && (lVar31 = *(longlong *)(lVar31 + 0x30), lVar31 != 0)) {
              if (*(int *)(lVar31 + 0x38) < iVar23) {
                lVar31 = 0;
              }
              else if (*(longlong *)(*(longlong *)(lVar31 + 0x30) + (longlong)iVar23 * 8) !=
                       DAT_14c927740 + 0x30) {
                lVar31 = 0;
              }
              lVar32 = (longlong)(int)(uint)uStack_3b0;
              uVar5 = (uint)uStack_3b0 + 1;
              uStack_3b0 = CONCAT44(uStack_3b0._4_4_,uVar5);
              if (uStack_3b0._4_4_ < uVar5) {
                FUN_1447f76d2(&local_3b8,uVar36 & 0xffffffff);
              }
              *(longlong *)(local_3b8.QuadPart + lVar32 * 8) = lVar31;
            }
          }
        }
LAB_14445e562:
        uVar26 = uVar26 & ~(uint)uVar27;
        puVar22 = local_2d8;
        if (local_2d8 == (uint *)0x0) {
          puVar22 = local_2e8;
        }
        iVar23 = (int)uVar24;
        lVar31 = (longlong)iVar23;
        uVar5 = puVar22[lVar31] & uVar26;
        if (uVar5 == 0) {
          iVar17 = local_2d0 + 0x1e;
          if (-1 < local_2d0 + -1) {
            iVar17 = local_2d0 + -1;
          }
          iVar17 = iVar17 >> 5;
          iVar7 = iVar7 + 0x20;
          iVar15 = iVar17;
          if (iVar17 < iVar23) {
            iVar15 = iVar23;
          }
          if (iVar23 < iVar17) {
            lVar32 = 0;
            do {
              uVar5 = puVar22[lVar32 + lVar31 + 1];
              if (uVar5 != 0) {
                uVar24 = (ulonglong)(iVar23 + (int)lVar32 + 1);
                uVar26 = 0xffffffff;
                goto LAB_14445e5ee;
              }
              iVar7 = iVar7 + 0x20;
              lVar32 = lVar32 + 1;
            } while (iVar15 - lVar31 != lVar32);
            uVar26 = 0xffffffff;
            iVar23 = iVar15;
          }
          uVar24 = (ulonglong)(iVar23 + 1);
          iVar23 = local_2d0;
        }
        else {
LAB_14445e5ee:
          uVar27 = (ulonglong)(-uVar5 & uVar5);
          uVar36 = uVar27 * 2 + 1;
          lVar31 = 0x3f;
          if (uVar36 != 0) {
            for (; uVar36 >> lVar31 == 0; lVar31 = lVar31 + -1) {
            }
          }
          iVar23 = (iVar7 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
          if (local_2d0 <= iVar23) {
            iVar23 = local_2d0;
          }
        }
      } while (iVar23 != iVar25);
    }
LAB_14445d632:
    local_3e8.s = local_3b8.s;
    local_3e0 = (uint)uStack_3b0;
    FUN_14688038e(&local_c8);
    if ((wchar_t *)local_3b8.QuadPart != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_f8 = 0;
    local_f0 = 0;
    local_118.QuadPart = 0;
    uStack_110 = 0;
    local_ec = 0xffffffff00000080;
    local_e4 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_148 = 0;
    local_140 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_13c = 0xffffffff00000080;
    local_134 = 0;
    local_128 = (undefined1 *)0x0;
    local_120 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
    local_3b8.QuadPart = (LONGLONG)DAT_14c844840;
    if (DAT_14c844840 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*DAT_14c844840 + 8))();
      }
    }
    uStack_3b0 = uStack_3b0 & 0xffffffff00000000;
    FUN_140997b30(&local_358,0x42be0000,&local_3b8);
    if ((longlong *)local_3b8.QuadPart != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_3b8 + 0x10))();
    }
    uVar24 = DAT_14c872be8;
    local_3b8.QuadPart = 0x14bac0b50;
    uStack_3b0._0_4_ = 0x16;
    FUN_1446e940c(&local_208,&local_3b8);
    local_3b8.QuadPart = 0x14bac0b0c;
    uStack_3b0._0_4_ = 0xe;
    FUN_1446e940c(&local_3c8,&local_3b8);
    local_3b8.QuadPart = 0x14bac0b2a;
    uStack_3b0 = CONCAT44(uStack_3b0._4_4_,0x12);
    FUN_140208c1e(&local_1b8,&local_3c8,&local_208,&local_3b8);
    local_518 = (wchar_t **)uVar24;
    FUN_140997f46(&local_3b8,(float)((int)uStack_c0 - local_94),&local_1b8,1);
    FUN_140997a0e(&local_3b8);
    if (local_1b8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_1b8 + 0x10))();
    }
    if (local_a0 == 0) {
      local_4c8 = (uint *)&DAT_00000001;
      pwVar37 = (wchar_t *)0x0;
      iVar25 = 0;
      uVar26 = 0;
    }
    else {
      puVar22 = local_a8;
      if (local_a8 == (uint *)0x0) {
        puVar22 = local_b8;
      }
      uVar26 = *puVar22;
      if (uVar26 == 0) {
        iVar25 = local_a0 + 0x1e;
        if (-1 < (int)(local_a0 - 1)) {
          iVar25 = local_a0 - 1;
        }
        pwVar37 = (wchar_t *)0x0;
        pwVar8 = (wchar_t *)(ulonglong)(uint)(iVar25 >> 5);
        if (iVar25 >> 5 < 1) {
          pwVar8 = pwVar37;
        }
        iVar25 = 0;
        do {
          if (pwVar8 == pwVar37) goto LAB_14445d8e2;
          iVar25 = iVar25 + 0x20;
          uVar26 = puVar22[(longlong)pwVar37 + 1];
          pwVar37 = (wchar_t *)((longlong)pwVar37 + 1);
        } while (uVar26 == 0);
      }
      else {
        pwVar37 = (wchar_t *)0x0;
        iVar25 = 0;
      }
      local_4c8 = (uint *)(ulonglong)(-uVar26 & uVar26);
      uVar24 = (longlong)local_4c8 * 2 + 1;
      lVar31 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar31 == 0; lVar31 = lVar31 + -1) {
        }
      }
      uVar26 = (iVar25 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
      if ((int)local_a0 <= (int)uVar26) {
        uVar26 = local_a0;
      }
    }
    if (uVar26 != local_a0) {
      uVar5 = 0xffffffff;
      local_4b8 = (ulonglong)local_a0;
      do {
        local_4a8 = (wchar_t *)CONCAT44(local_4a8._4_4_,uVar5);
        local_498 = (wchar_t *)CONCAT44(local_498._4_4_,iVar25);
        local_3f0 = *(ulonglong *)(local_c8 + (longlong)(int)uVar26 * 0x10);
        local_428[0] = 0;
        local_428[1] = 0;
        FUN_1401031ac(local_3f0,0,local_428);
        FUN_140233b1a(local_410,local_428);
        local_1b8 = u_FindingReferences_14bac0bb2;
        uStack_1b0._0_4_ = 0x11;
        FUN_1446e940c(local_44c,&local_1b8);
        local_1b8 = L"USDAssetCache3";
        uStack_1b0._0_4_ = 0xe;
        FUN_1446e940c(local_450,&local_1b8);
        local_1b8 = L"Finding references to {0}";
        uStack_1b0 = CONCAT44(uStack_1b0._4_4_,0x19);
        FUN_140208c1e(local_448,local_450,local_44c,&local_1b8);
        FUN_14023409e(&local_438,local_448,1);
        local_1b8 = (wchar_t *)CONCAT44(local_1b8._4_4_,4);
        FUN_14023423e(local_1a8,local_410);
        local_3c0 = &local_198;
        local_3c8 = &local_1b8;
        FUN_14010d304(&local_208,&local_3c8);
        local_3d8 = local_438;
        local_3d0 = local_430;
        if (local_430 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_430 + 1) = (int)local_430[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_400,&local_3d8,&local_208);
        FUN_14007f2db(local_208.QuadPart,local_200);
        if ((code *)local_208.QuadPart != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_1a8[0] != (longlong *)0x0) {
          (**(code **)(*local_1a8[0] + 0x10))();
        }
        plVar21 = local_430;
        if (local_430 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_430 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_430)(local_430);
            LOCK();
            piVar2 = (int *)((longlong)plVar21 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
        if (local_410[0] != (longlong *)0x0) {
          (**(code **)(*local_410[0] + 0x10))();
        }
        FUN_140997b30(&local_3b8,0x3f800000,local_400);
        if (local_400[0] != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_400[0] + 0x10))();
        }
        if (local_448[0] != (longlong *)0x0) {
          (**(code **)(*local_448[0] + 0x10))();
        }
        if (local_428[0] != 0) {
          FUN_1400020a8();
        }
        local_198 = 0;
        local_190 = 0;
        local_1b8 = (wchar_t *)0x0;
        uStack_1b0 = 0;
        local_18c = 0xffffffff00000080;
        local_184 = 0;
        local_178 = (undefined1 *)0x0;
        local_170 = 0;
        local_3c8 = *(wchar_t ***)(local_3f0 + 0x20);
        local_4b0 = pwVar37;
        if (local_3c8 != (wchar_t **)0x0) {
          uVar26 = ((uint)(local_3f0 >> 0x14) & 0xffff ^ (uint)(local_3f0 >> 4)) * -0x7a143595;
          uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
          uVar11 = FUN_1490cf874(&local_168,uVar26 >> 0x10 ^ uVar26,&local_3f0);
          FUN_1457b12ce(uVar11,&local_208,&local_3c8,0);
          for (; ppwVar4 = local_3c8, local_3c8 != (wchar_t **)0x0;
              local_3c8 = (wchar_t **)local_3c8[4]) {
            if (DAT_14c951858 == 0) {
              local_208.QuadPart = (LONGLONG)FUN_1449e2820;
              local_4d0 = FUN_14081d0ea;
              local_4d8 = FUN_14081d0ea;
              local_4e8 = &LAB_1468c5283;
              local_4f0 = FUN_142809da0;
              local_4f8 = L"Engine";
              local_500 = 0x400000000;
              local_508 = 0x10000000;
              local_510 = 8;
              local_518 = (wchar_t **)CONCAT44(local_518._4_4_,0x50);
              local_4e0 = &local_208;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            }
            if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(ppwVar4[2] + 0x1c)) &&
               (*(longlong *)
                 (*(longlong *)(ppwVar4[2] + 0x18) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8)
                == DAT_14c951858 + 0x30)) break;
            FUN_1457b12ce(&local_1b8,&local_208,&local_3c8,0);
          }
        }
        uVar24 = local_3f0;
        local_208.QuadPart = 0;
        local_200 = 1;
        FUN_14010590e(&local_208,1,0);
        *(ulonglong *)local_208 = uVar24;
        FUN_1468efa88(&local_3c8,&local_208,0,3);
        if ((longlong)(int)local_3c0 != 0) {
          ppwVar4 = local_3c8 + (int)local_3c0;
          ppwVar35 = local_3c8;
LAB_14445eaaa:
          pwVar37 = *ppwVar35;
          local_400[0] = pwVar37;
          if ((int)uStack_1b0 != local_184) {
            uVar26 = ((uint)((ulonglong)pwVar37 >> 0x14) & 0xffff ^ (uint)((ulonglong)pwVar37 >> 4))
                     * -0x7a143595;
            uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
            puVar12 = local_178;
            if (local_178 == (undefined1 *)0x0) {
              puVar12 = local_180;
            }
            for (iVar25 = *(int *)(puVar12 +
                                  (ulonglong)(local_170 - 1U & (uVar26 >> 0x10 ^ uVar26)) * 4);
                iVar25 != -1; iVar25 = *(int *)(local_1b8 + ((longlong)iVar25 * 2 + 1) * 4)) {
              if (*(wchar_t **)(local_1b8 + (longlong)iVar25 * 8) == pwVar37) goto LAB_14445ec2d;
            }
          }
          if (pwVar37 == (wchar_t *)0x0) {
            pwVar37 = (wchar_t *)0x0;
LAB_14445ec4b:
            uVar26 = ((uint)((ulonglong)pwVar37 >> 0x14) & 0xffff ^ (uint)((ulonglong)pwVar37 >> 4))
                     * -0x7a143595;
            uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
            uVar11 = FUN_1490cf874(&local_168,uVar26 >> 0x10 ^ uVar26,local_400);
            FUN_1457b12ce(uVar11,&local_3d8,&local_3f0,0);
            if ((int)uStack_c0 != local_94) {
              uVar26 = ((uint)((ulonglong)local_400[0] >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_400[0] >> 4)) * -0x7a143595;
              uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
              puVar12 = local_88;
              if (local_88 == (undefined1 *)0x0) {
                puVar12 = local_90;
              }
              for (iVar25 = *(int *)(puVar12 +
                                    (ulonglong)(local_80 - 1U & (uVar26 >> 0x10 ^ uVar26)) * 4);
                  iVar25 != -1; iVar25 = *(int *)((longlong)iVar25 * 0x10 + local_c8 + 8)) {
                if (*(wchar_t **)(local_c8 + (longlong)iVar25 * 0x10) == local_400[0]) {
                  uVar26 = *(uint *)(local_400[0] + 6);
                  if ((int)uVar26 < DAT_14c9647dc) {
                    lVar31 = (ulonglong)((uVar26 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8);
                  }
                  else {
                    lVar31 = 0;
                  }
                  if ((*(uint *)(lVar31 + 8) >> 0x1e & 1) == 0) {
                    pwVar37 = local_400[0];
                    if (local_400[0] != (wchar_t *)0x0) goto LAB_14445ed62;
                    goto LAB_14445ec2d;
                  }
                  break;
                }
              }
            }
            goto LAB_14445eda5;
          }
          bVar13 = 0;
          lVar31 = DAT_14c951858;
          do {
            if (lVar31 == 0) {
              local_3d8.QuadPart = (LONGLONG)FUN_1449e2820;
              local_4d0 = FUN_14081d0ea;
              local_4d8 = FUN_14081d0ea;
              local_4e8 = &LAB_1468c5283;
              local_4f0 = FUN_142809da0;
              local_4f8 = L"Engine";
              local_500 = 0x400000000;
              local_508 = 0x10000000;
              local_510 = 8;
              local_518 = (wchar_t **)CONCAT44(local_518._4_4_,0x50);
              local_4e0 = &local_3d8;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              lVar31 = DAT_14c951858;
            }
            if ((*(int *)(lVar31 + 0x38) <= *(int *)(*(longlong *)(pwVar37 + 8) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(pwVar37 + 8) + 0x30) +
                 (longlong)*(int *)(lVar31 + 0x38) * 8) == lVar31 + 0x30)) break;
            bVar13 = (byte)((uint)*(undefined4 *)(pwVar37 + 4) >> 0x1e) & 1 | bVar13;
            pwVar37 = *(wchar_t **)(pwVar37 + 0x10);
          } while (pwVar37 != (wchar_t *)0x0);
          pwVar37 = local_400[0];
          if (bVar13 == 0) goto LAB_14445ec4b;
          goto LAB_14445ec2d;
        }
LAB_14445effb:
        pwVar37 = local_4b0;
        if (local_3c8 != (wchar_t **)0x0) {
          FUN_1400020a8(local_3c8);
        }
        if ((code *)local_208.QuadPart != (code *)0x0) {
          FUN_1400020a8();
        }
        local_170 = 0;
        if (local_178 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_140603fbe(&local_1b8);
        uVar5 = (uint)local_4a8 & ~(uint)local_4c8;
        puVar22 = local_a8;
        if (local_a8 == (uint *)0x0) {
          puVar22 = local_b8;
        }
        iVar7 = (int)pwVar37;
        lVar31 = (longlong)iVar7;
        uVar26 = puVar22[lVar31] & uVar5;
        iVar25 = (int)local_498;
        if (uVar26 == 0) {
          iVar23 = local_a0 + 0x1e;
          if (-1 < (int)(local_a0 - 1)) {
            iVar23 = local_a0 - 1;
          }
          iVar23 = iVar23 >> 5;
          iVar25 = (int)local_498 + 0x20;
          iVar17 = iVar23;
          if (iVar23 < iVar7) {
            iVar17 = iVar7;
          }
          if (iVar7 < iVar23) {
            lVar32 = 0;
            do {
              uVar26 = puVar22[lVar31 + lVar32 + 1];
              if (uVar26 != 0) {
                pwVar37 = (wchar_t *)(ulonglong)(iVar7 + (int)lVar32 + 1);
                uVar5 = 0xffffffff;
                goto LAB_14445f100;
              }
              iVar25 = iVar25 + 0x20;
              lVar32 = lVar32 + 1;
            } while (iVar17 - lVar31 != lVar32);
            uVar5 = 0xffffffff;
            iVar7 = iVar17;
          }
          pwVar37 = (wchar_t *)(ulonglong)(iVar7 + 1);
          uVar26 = local_a0;
        }
        else {
LAB_14445f100:
          local_4c8 = (uint *)(ulonglong)(-uVar26 & uVar26);
          uVar24 = (longlong)local_4c8 * 2 + 1;
          lVar31 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar31 == 0; lVar31 = lVar31 + -1) {
            }
          }
          uVar26 = (iVar25 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
          if ((int)local_a0 <= (int)uVar26) {
            uVar26 = local_a0;
          }
        }
      } while (uVar26 != (uint)local_4b8);
    }
LAB_14445d8e2:
    FUN_140997a5c(&local_3b8);
    if (local_37c == '\x01') {
      local_37c = '\0';
    }
    if (local_3a8 != (longlong *)0x0) {
      (**(code **)(*local_3a8 + 0x10))();
    }
    if ((wchar_t *)local_3b8.QuadPart != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_3b8 + 0x10))();
    }
    local_198 = 0;
    local_190 = 0;
    local_1b8 = (wchar_t *)0x0;
    uStack_1b0 = 0;
    local_18c = 0xffffffff00000080;
    local_184 = 0;
    local_178 = (undefined1 *)0x0;
    local_170 = 0;
    uVar26 = (int)uStack_c0 - local_94;
    if (uVar26 != 0) {
      if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar26);
      }
      FUN_146880458(&local_1b8,uVar26);
      iVar25 = 1;
      if (3 < uVar26) {
        uVar26 = (uVar26 | 1) + 0xe;
        iVar25 = 0x1f;
        if (uVar26 != 0) {
          for (; uVar26 >> iVar25 == 0; iVar25 = iVar25 + -1) {
          }
        }
        iVar25 = 1 << ((byte)iVar25 & 0x1f);
      }
      if ((local_170 == 0) || (local_170 < iVar25)) {
        local_170 = iVar25;
        FUN_1457b1594();
      }
    }
    FUN_1468f14e6(&local_118,&local_3b8);
    iVar25 = (int)uStack_c0 - local_94;
    if (-1 < iVar25) {
      if ((int)uStack_3b0._4_4_ < iVar25) {
        FUN_14079e7a6(&local_3b8);
      }
      if (0 < (int)(uint)uStack_3b0) {
LAB_14445da19:
        uVar24 = *(ulonglong *)
                  ((wchar_t *)(local_3b8.QuadPart + -8) + (ulonglong)(uint)uStack_3b0 * 4);
        uStack_3b0 = CONCAT44(uStack_3b0._4_4_,(uint)uStack_3b0 - 1);
        FUN_1404559b4(&local_3b8);
        if ((int)uStack_160 != local_134) {
          uVar26 = ((uint)(uVar24 >> 0x14) & 0xffff ^ (uint)(uVar24 >> 4)) * -0x7a143595;
          uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
          puVar12 = local_128;
          if (local_128 == (undefined1 *)0x0) {
            puVar12 = local_130;
          }
          iVar25 = *(int *)(puVar12 + (ulonglong)(local_120 - 1U & (uVar26 >> 0x10 ^ uVar26)) * 4);
          while (iVar25 != -1) {
            lVar31 = local_168 + (longlong)iVar25 * 0x60;
            if (*(ulonglong *)(local_168 + (longlong)iVar25 * 0x60) == uVar24) {
              pwVar37 = (wchar_t *)(lVar31 + 8);
              if (pwVar37 != (wchar_t *)0x0 && lVar31 != 0) {
                puVar22 = (uint *)(lVar31 + 0x18);
                iVar25 = *(int *)(lVar31 + 0x30);
                if (iVar25 == 0) {
                  uVar36 = 1;
                  uVar24 = 0;
                  iVar23 = 0;
                  iVar7 = 0;
                  goto LAB_14445db5e;
                }
                puVar9 = *(uint **)(lVar31 + 0x28);
                if (*(uint **)(lVar31 + 0x28) == (uint *)0x0) {
                  puVar9 = puVar22;
                }
                uVar26 = *puVar9;
                if (uVar26 != 0) {
                  uVar24 = 0;
                  iVar23 = 0;
                  goto LAB_14445db2c;
                }
                iVar7 = iVar25 + 0x1e;
                if (-1 < iVar25 + -1) {
                  iVar7 = iVar25 + -1;
                }
                uVar24 = 0;
                uVar36 = (ulonglong)(uint)(iVar7 >> 5);
                if (iVar7 >> 5 < 1) {
                  uVar36 = uVar24;
                }
                iVar23 = 0;
                goto LAB_14445db19;
              }
              break;
            }
            iVar25 = *(int *)(lVar31 + 0x58);
          }
        }
        goto LAB_14445db62;
      }
LAB_14445dd63:
      if ((wchar_t *)local_3b8.QuadPart != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      FUN_1490c8f58(&local_2f8,&local_208,&local_1b8);
      uVar36 = 0;
      FUN_14686281e(&local_208,0);
      FUN_1468f14e6(&local_208,&local_3c8);
      iVar7 = local_1e0;
      uVar24 = 1;
      iVar23 = 0;
      iVar25 = 0;
      if (local_1e0 != 0) {
        puVar22 = local_1e8;
        if (local_1e8 == (uint *)0x0) {
          puVar22 = local_1f8;
        }
        uVar26 = *puVar22;
        if (uVar26 == 0) {
          iVar25 = local_1e0 + 0x1e;
          if (-1 < local_1e0 + -1) {
            iVar25 = local_1e0 + -1;
          }
          uVar36 = 0;
          uVar24 = (ulonglong)(uint)(iVar25 >> 5);
          if (iVar25 >> 5 < 1) {
            uVar24 = uVar36;
          }
          iVar23 = 0;
          do {
            if (uVar24 == uVar36) goto LAB_14445de43;
            iVar23 = iVar23 + 0x20;
            uVar26 = puVar22[uVar36 + 1];
            uVar36 = uVar36 + 1;
          } while (uVar26 == 0);
        }
        else {
          uVar36 = 0;
        }
        uVar24 = (ulonglong)(-uVar26 & uVar26);
        uVar27 = uVar24 * 2 + 1;
        lVar31 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar31 == 0; lVar31 = lVar31 + -1) {
          }
        }
        iVar25 = (iVar23 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
        if (local_1e0 <= iVar25) {
          iVar25 = local_1e0;
        }
      }
      if (iVar25 != local_1e0) {
        uVar26 = 0xffffffff;
        do {
          uVar27 = *(ulonglong *)(local_208.QuadPart + (longlong)iVar25 * 0x10);
          FUN_14282b7b8(uVar27);
          (**(code **)(*DAT_14c9485b8 + 0x2d8))(DAT_14c9485b8,uVar27);
          FUN_14472eae2(uVar27,3);
          FUN_144757f48(uVar27,0x40000000);
          uVar5 = *(uint *)(uVar27 + 0xc);
          if ((int)uVar5 < DAT_14c9647dc) {
            lVar31 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
          }
          else {
            lVar31 = 0;
          }
          do {
            uVar5 = *(uint *)(lVar31 + 8);
            if ((uVar5 >> 0x15 & 1) != 0) break;
            LOCK();
            bVar38 = uVar5 == *(uint *)(lVar31 + 8);
            if (bVar38) {
              *(uint *)(lVar31 + 8) = uVar5 | 0x200000;
            }
            UNLOCK();
          } while (!bVar38);
          uVar26 = uVar26 & ~(uint)uVar24;
          puVar22 = local_1e8;
          if (local_1e8 == (uint *)0x0) {
            puVar22 = local_1f8;
          }
          iVar25 = (int)uVar36;
          lVar31 = (longlong)iVar25;
          uVar5 = puVar22[lVar31] & uVar26;
          if (uVar5 == 0) {
            iVar17 = local_1e0 + 0x1e;
            if (-1 < local_1e0 + -1) {
              iVar17 = local_1e0 + -1;
            }
            iVar17 = iVar17 >> 5;
            iVar23 = iVar23 + 0x20;
            iVar15 = iVar17;
            if (iVar17 < iVar25) {
              iVar15 = iVar25;
            }
            if (iVar25 < iVar17) {
              lVar32 = 0;
              do {
                uVar5 = puVar22[lVar31 + lVar32 + 1];
                if (uVar5 != 0) {
                  uVar36 = (ulonglong)(iVar25 + (int)lVar32 + 1);
                  uVar26 = 0xffffffff;
                  goto LAB_14445f277;
                }
                iVar23 = iVar23 + 0x20;
                lVar32 = lVar32 + 1;
              } while (iVar15 - lVar31 != lVar32);
              uVar26 = 0xffffffff;
              iVar25 = iVar15;
            }
            uVar36 = (ulonglong)(iVar25 + 1);
            iVar25 = local_1e0;
          }
          else {
LAB_14445f277:
            uVar24 = (ulonglong)(-uVar5 & uVar5);
            uVar27 = uVar24 * 2 + 1;
            lVar31 = 0x3f;
            if (uVar27 != 0) {
              for (; uVar27 >> lVar31 == 0; lVar31 = lVar31 + -1) {
              }
            }
            iVar25 = (iVar23 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
            if (local_1e0 <= iVar25) {
              iVar25 = local_1e0;
            }
          }
        } while (iVar25 != iVar7);
      }
LAB_14445de43:
      if (local_1d4 < local_200) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
        local_3b8.QuadPart = (LONGLONG)DAT_14c844840;
        if (DAT_14c844840 != (longlong *)0x0) {
          if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*DAT_14c844840 + 8))();
          }
        }
        uStack_3b0 = uStack_3b0 & 0xffffffff00000000;
        FUN_140997b30(&local_358,0x40200000,&local_3b8);
        if ((longlong *)local_3b8.QuadPart != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_3b8 + 0x10))();
        }
        uVar24 = DAT_14c872be8;
        local_3b8.QuadPart = (LONGLONG)&DAT_14bac0bfc;
        uStack_3b0._0_4_ = 2;
        FUN_1446e940c(local_400,&local_3b8);
        local_3b8.QuadPart = 0x14bac0b0c;
        uStack_3b0._0_4_ = 0xe;
        FUN_1446e940c(local_428,&local_3b8);
        local_3b8.QuadPart = 0x14bac0bd6;
        uStack_3b0 = CONCAT44(uStack_3b0._4_4_,0x12);
        FUN_140208c1e(&local_3d8,local_428,local_400,&local_3b8);
        local_518 = (wchar_t **)uVar24;
        FUN_140997f46(&local_3b8,0x3f800000,&local_3d8,1);
        FUN_140997a0e(&local_3b8);
        if ((code *)local_3d8.QuadPart != (code *)0x0) {
          (**(code **)(*(longlong *)local_3d8 + 0x10))();
        }
        FUN_1427e390c(0,1);
        QueryPerformanceCounter(&local_3d8);
        FUN_140997a5c(&local_3b8);
        if (local_37c == '\x01') {
          local_37c = '\0';
        }
        if (local_3a8 != (longlong *)0x0) {
          (**(code **)(*local_3a8 + 0x10))();
        }
        if ((wchar_t *)local_3b8.QuadPart != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_3b8 + 0x10))();
        }
      }
      if (local_3c8 != (wchar_t **)0x0) {
        FUN_1400020a8();
      }
      local_1c0 = 0;
      if (local_1c8 != 0) {
        FUN_1400020a8();
      }
      FUN_140603fbe(&local_208);
      local_170 = 0;
      if (local_178 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_140603fbe(&local_1b8);
      local_120 = 0;
      if (local_128 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1490ccefe(&local_168);
      local_d0 = 0;
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      FUN_140603fbe(&local_118);
      local_80 = 0;
      if (local_88 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_140603fbe(&local_c8);
      FUN_140997a5c(&local_358);
      if (local_31c == '\x01') {
        local_31c = '\0';
      }
      if (local_348 != (longlong *)0x0) {
        (**(code **)(*local_348 + 0x10))();
      }
      if ((code *)local_358.QuadPart != (code *)0x0) {
        (**(code **)(*(longlong *)local_358 + 0x10))();
      }
      goto LAB_14445e135;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar25);
LAB_14445d094:
  iVar25 = *(int *)(lVar30 + lVar31 + 8);
  if (iVar25 == -1) goto LAB_14445d2c0;
  goto LAB_14445d081;
LAB_14445ed62:
  pwVar8 = pwVar37;
  pwVar37 = pwVar8;
  if (*(wchar_t **)(pwVar8 + 0x10) != (wchar_t *)0x0) goto code_r0x00014445ed71;
  goto LAB_14445ed82;
code_r0x00014445ed71:
  pwVar37 = *(wchar_t **)(pwVar8 + 0x10);
  if ((*(uint *)(pwVar8 + 4) >> 0x1c & 1) == 0) goto LAB_14445ed62;
  pwVar37 = (wchar_t *)FUN_142840154(pwVar8);
LAB_14445ed82:
  if (pwVar37 == (wchar_t *)0x0) {
    pwVar37 = *(wchar_t **)(pwVar8 + 0x10);
    goto LAB_14445ed62;
  }
  if ((*(longlong *)(pwVar37 + 0x24) == 0) ||
     (*(longlong *)(*(longlong *)(pwVar37 + 0x24) + 0x28) < 1)) goto LAB_14445ec2d;
LAB_14445eda5:
  uVar24 = local_3f0;
  if (local_3f0 == 0) {
LAB_14445edb2:
    if (local_400[0] == local_4c0) goto LAB_14445ec2d;
  }
  else {
    uVar11 = FUN_1459212f6();
    lVar31 = FUN_144718840(uVar24,uVar11);
    pwVar37 = local_400[0];
    if ((lVar31 != 0) && (local_400[0] != (wchar_t *)0x0)) {
      uVar11 = FUN_145a6bce4();
      lVar31 = FUN_144718840(pwVar37,uVar11);
      if (lVar31 != 0) goto LAB_14445ec2d;
    }
    uVar24 = local_3f0;
    if (local_3f0 == 0) goto LAB_14445edb2;
    lVar31 = FUN_14110cae2();
    pwVar37 = local_400[0];
    if ((*(int *)(*(longlong *)(uVar24 + 0x10) + 0x38) < *(int *)(lVar31 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar24 + 0x10) + 0x30) + (longlong)*(int *)(lVar31 + 0x38) * 8
         ) != lVar31 + 0x30)) goto LAB_14445edb2;
    if (local_400[0] == (wchar_t *)0x0) {
      pwVar8 = (wchar_t *)0x0;
LAB_14445ee3e:
      if (pwVar8 == local_4c0) goto LAB_14445ec2d;
    }
    else {
      lVar31 = FUN_1458cc688();
      pwVar8 = local_400[0];
      if (*(int *)(*(longlong *)(pwVar37 + 8) + 0x38) < *(int *)(lVar31 + 0x38)) goto LAB_14445ee3e;
      if (local_400[0] == local_4c0 ||
          *(longlong *)
           (*(longlong *)(*(longlong *)(pwVar37 + 8) + 0x30) + (longlong)*(int *)(lVar31 + 0x38) * 8
           ) == lVar31 + 0x30) goto LAB_14445ec2d;
    }
  }
  FUN_1457b12ce(&local_118,&local_3d8,local_400,0);
LAB_14445ec2d:
  ppwVar35 = ppwVar35 + 1;
  if (ppwVar35 == ppwVar4) goto LAB_14445effb;
  goto LAB_14445eaaa;
  while( true ) {
    iVar23 = iVar23 + 0x20;
    uVar26 = puVar9[uVar24 + 1];
    uVar24 = uVar24 + 1;
    if (uVar26 != 0) break;
LAB_14445db19:
    if (uVar36 == uVar24) goto LAB_14445db62;
  }
LAB_14445db2c:
  uVar36 = (ulonglong)(-uVar26 & uVar26);
  uVar27 = uVar36 * 2 + 1;
  lVar32 = 0x3f;
  if (uVar27 != 0) {
    for (; uVar27 >> lVar32 == 0; lVar32 = lVar32 + -1) {
    }
  }
  iVar7 = (iVar23 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
  if (iVar25 <= iVar7) {
    iVar7 = iVar25;
  }
LAB_14445db5e:
  if (iVar7 != iVar25) {
    uVar26 = 0xffffffff;
    local_4c8 = puVar22;
    local_4b0 = pwVar37;
    do {
      local_208 = *(LARGE_INTEGER *)(*(longlong *)pwVar37 + (longlong)iVar7 * 0x10);
      if ((int)uStack_1b0 != local_184) {
        uVar5 = ((uint)((ulonglong)local_208.QuadPart >> 0x14) & 0xffff ^
                (uint)((ulonglong)local_208.QuadPart >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        puVar12 = local_178;
        if (local_178 == (undefined1 *)0x0) {
          puVar12 = local_180;
        }
        for (iVar7 = *(int *)(puVar12 + (ulonglong)(local_170 - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
            iVar7 != -1; iVar7 = *(int *)(local_1b8 + ((longlong)iVar7 * 2 + 1) * 4)) {
          if ((LARGE_INTEGER)*(code **)(local_1b8 + (longlong)iVar7 * 8) ==
              (LARGE_INTEGER)local_208.QuadPart) goto LAB_14445dca3;
        }
      }
      FUN_1457b12ce(&local_1b8,&local_3c8,&local_208,0);
      uVar27 = uStack_3b0;
      lVar32 = (longlong)(int)(uint)uStack_3b0;
      uVar5 = (uint)uStack_3b0 + 1;
      uStack_3b0 = CONCAT44(uStack_3b0._4_4_,uVar5);
      if (uStack_3b0._4_4_ < uVar5) {
        FUN_1447f76d2(&local_3b8,uVar27 & 0xffffffff);
      }
      ((LARGE_INTEGER *)(local_3b8.QuadPart + lVar32 * 8))->QuadPart = (LONGLONG)local_208;
      puVar22 = local_4c8;
      pwVar37 = local_4b0;
LAB_14445dca3:
      uVar26 = uVar26 & ~(uint)uVar36;
      puVar9 = *(uint **)(lVar31 + 0x28);
      if (*(uint **)(lVar31 + 0x28) == (uint *)0x0) {
        puVar9 = puVar22;
      }
      iVar17 = *(int *)(lVar31 + 0x30);
      iVar7 = (int)uVar24;
      lVar32 = (longlong)iVar7;
      uVar5 = puVar9[lVar32] & uVar26;
      if (uVar5 == 0) {
        iVar15 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar15 = iVar17 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar23 = iVar23 + 0x20;
        iVar16 = iVar15;
        if (iVar15 < iVar7) {
          iVar16 = iVar7;
        }
        if (iVar7 < iVar15) {
          lVar30 = 0;
          do {
            uVar5 = puVar9[lVar32 + lVar30 + 1];
            if (uVar5 != 0) {
              uVar24 = (ulonglong)(iVar7 + (int)lVar30 + 1);
              uVar26 = 0xffffffff;
              goto LAB_14445dd18;
            }
            iVar23 = iVar23 + 0x20;
            lVar30 = lVar30 + 1;
          } while (iVar16 - lVar32 != lVar30);
          uVar26 = 0xffffffff;
          iVar7 = iVar16;
        }
        uVar24 = (ulonglong)(iVar7 + 1);
        puVar22 = local_4c8;
        iVar7 = iVar17;
      }
      else {
LAB_14445dd18:
        uVar36 = (ulonglong)(-uVar5 & uVar5);
        uVar27 = uVar36 * 2 + 1;
        lVar32 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        iVar7 = (iVar23 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
        if (iVar17 <= iVar7) {
          iVar7 = iVar17;
        }
      }
    } while (iVar7 != iVar25);
  }
LAB_14445db62:
  if ((int)(uint)uStack_3b0 < 1) goto LAB_14445dd63;
  goto LAB_14445da19;
}



// FUNCTION 14445f450 FUN_14445f450 body=882 status=ok
// SIG undefined FUN_14445f450(void)

void FUN_14445f450(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  longlong local_b8 [4];
  longlong local_98;
  code *local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1468fc08c(local_b8 + 2,*param_2,param_2[2]);
  if (local_b8[2] == 0) {
    local_b8[0] = 0;
    local_b8[1] = 0;
  }
  else {
    FUN_140ba791a(local_b8 + 2,local_b8);
  }
  local_68 = 0;
  local_60 = 0;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_147019d90(param_2,0);
  lVar4 = FUN_140081d40(local_b8 + 2,0);
  if (lVar4 != 0) {
    lVar9 = *(longlong *)(lVar4 + 0x10);
    lVar5 = FUN_1411bc9a6();
    if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0xd5) & 0x40) != 0)) {
      if (DAT_14c950d78 == 0) {
        local_88 = FUN_1449e2820;
        local_c0 = FUN_14081d0ea;
        local_c8 = FUN_14081d0ea;
        local_d8 = &LAB_1468b50ee;
        local_e0 = FUN_1427f23a3;
        local_e8 = L"Engine";
        local_f0 = 0;
        local_f8 = 0x10004001;
        local_100 = 8;
        local_108 = 0x28;
        local_d0 = &local_88;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
      }
      if ((lVar9 != 0) && (DAT_14c950d78 != lVar5)) {
        do {
          if (0 < (longlong)*(int *)(lVar9 + 0x1e0)) {
            lVar12 = 0;
            do {
              lVar2 = *(longlong *)(*(longlong *)(lVar9 + 0x1d8) + lVar12);
              if (((lVar2 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
                 (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
                  == lVar5 + 0x30)) {
                pcVar6 = (code *)FUN_14595e57c();
                if ((pcVar6 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(pcVar6);
                }
                uVar7 = FUN_1411bc9a6();
                plVar8 = (longlong *)FUN_144718840(lVar4,uVar7);
                if (plVar8 != (longlong *)0x0) {
                  local_88 = pcVar6;
                  if ((pcVar6 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
                    FUN_1456cec3c(pcVar6);
                  }
                  lVar4 = (**(code **)(*plVar8 + 0x18))(plVar8,&local_88);
                  if (lVar4 != 0) {
                    lVar9 = FUN_14595e57c();
                    if (((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                        (*(longlong *)
                          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                          (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) &&
                       (1 < *(int *)(lVar4 + 0x90))) {
                      plVar8 = (longlong *)(lVar4 + 0x88);
                      lVar9 = 0;
                      uVar10 = 0;
                      do {
                        uVar1 = *(ushort *)(*plVar8 + lVar9 * 2);
                        uVar11 = ((uint)(0x19 < uVar1 - 0x61) * 0x20 + (uint)uVar1) - 0x20;
                        uVar13 = (uint)(uVar10 >> 8) ^
                                 *(uint *)(&DAT_14c75d150 +
                                          (ulonglong)(((uint)uVar10 ^ uVar11) & 0xff) * 4);
                        uVar10 = (ulonglong)
                                 (uVar13 >> 8 ^
                                 *(uint *)(&DAT_14c75d150 +
                                          (ulonglong)(uVar13 & 0xff ^ uVar11 >> 8 & 0xff) * 4));
                        lVar9 = lVar9 + 1;
                      } while (*(int *)(lVar4 + 0x90) + -1 != (int)lVar9);
                      iVar3 = FUN_1490d10fe(param_1 + 0x40,uVar10,plVar8);
                      if (iVar3 == -1) {
                        FUN_1490c9bd2(param_1,plVar8,local_b8 + 2,0);
                      }
                    }
                  }
                }
                goto LAB_14445f5fe;
              }
              lVar12 = lVar12 + 0x10;
            } while ((longlong)*(int *)(lVar9 + 0x1e0) * 0x10 != lVar12);
          }
          lVar9 = *(longlong *)(lVar9 + 0x40);
        } while (lVar9 != 0);
      }
    }
  }
LAB_14445f5fe:
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14445f7d4 FUN_14445f7d4 body=47 status=ok
// SIG undefined FUN_14445f7d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14445f7d4(void)

{
  _DAT_14cbfe7a0 = 0;
  if (DAT_14cbfe798 != 0) {
    FUN_1400020a8();
  }
  FUN_14062c7dc(&DAT_14cbfe758);
  return;
}



// FUNCTION 14445f803 FUN_14445f803 body=69 status=ok
// SIG undefined FUN_14445f803(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14445f803(void)

{
  _DAT_14cbfe7b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014445f845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbfe7b8,1);
  return;
}



// FUNCTION 14445f848 FUN_14445f848 body=69 status=ok
// SIG undefined FUN_14445f848(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14445f848(void)

{
  _DAT_14cbfe7c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014445f88a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbfe7c8,1);
  return;
}



// FUNCTION 14445f88e FUN_14445f88e body=5426 status=ok
// SIG undefined FUN_14445f88e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14445f88e(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  DWORD DVar15;
  DWORD DVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  uint *puVar19;
  undefined8 uVar20;
  undefined ***pppuVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  bool bVar29;
  float fVar30;
  float fVar34;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  uint uVar44;
  uint uVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  undefined1 auStack_438 [32];
  undefined4 **local_418;
  int local_404;
  undefined8 *local_400;
  longlong local_3f8;
  int *local_3f0;
  undefined8 *local_3e8;
  undefined8 *local_3e0;
  undefined8 *local_3d8;
  longlong *local_3d0;
  longlong local_3c8;
  longlong *local_3c0;
  undefined4 **local_3b8;
  undefined1 *local_3b0;
  undefined4 **local_3a8;
  undefined ****local_3a0;
  uint *local_398;
  undefined8 local_390;
  undefined4 *local_388;
  undefined8 local_380;
  undefined4 *local_378;
  undefined8 local_370;
  undefined4 *local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined1 local_338 [32];
  undefined4 *local_318;
  undefined8 local_310;
  uint local_308;
  uint uStack_304;
  uint uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 local_2e4;
  undefined4 uStack_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  uint uStack_294;
  uint uStack_290;
  uint uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 local_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 local_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  uint local_220;
  uint uStack_21c;
  uint uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 local_1fc;
  undefined4 uStack_1f8;
  undefined4 local_1f4;
  ulonglong local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 *local_138;
  undefined8 uStack_130;
  undefined ***local_128;
  undefined1 local_120 [8];
  undefined **local_118;
  undefined8 *local_110;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_438;
  lVar26 = 0;
  local_3c0 = param_3;
  FUN_1406ff4f8(param_1,param_2,0);
  *param_1 = &PTR_FUN_14bac2820;
  param_1[0x454] = 0;
  param_1[0x455] = 0x600000000;
  param_1[0x462] = 0;
  param_1[0x463] = 0x600000000;
  *(byte *)((longlong)param_1 + 0x6f) = *(byte *)((longlong)param_1 + 0x6f) | 0x80;
  param_1[2] = 0x3f00000000000000;
  param_1[3] = &DAT_3f8000003f800000;
  auVar31._0_8_ = (*(double *)(param_2 + 0x630) + *(double *)(param_2 + 0x648)) * 0.5;
  auVar31._8_8_ = 0;
  auVar49._0_8_ = (*(double *)(param_2 + 0x620) + *(double *)(param_2 + 0x638)) * 0.5;
  auVar49._8_8_ = (*(double *)(param_2 + 0x628) + *(double *)(param_2 + 0x640)) * 0.5;
  dVar40 = *(double *)(param_2 + 0x648) - *(double *)(param_2 + 0x630);
  dVar39 = *(double *)(param_2 + 0x640) - *(double *)(param_2 + 0x628);
  dVar42 = *(double *)(param_2 + 0x638) - *(double *)(param_2 + 0x620);
  dVar46 = DAT_14c8463d0 + DAT_14c8463d0;
  dVar47 = DAT_14c8463d8 + DAT_14c8463d8;
  dVar43 = DAT_14c8463e0 + DAT_14c8463e0;
  dVar11 = dVar47 * DAT_14c8463d0;
  dVar12 = dVar43 * DAT_14c8463d8;
  dVar50 = DAT_14c8463d0 * dVar46;
  dVar51 = DAT_14c8463d8 * dVar47;
  dVar9 = DAT_14c8463e0 * dVar43;
  dVar48 = DAT_14c8463d0 * dVar43;
  dVar47 = dVar47 * DAT_14c8463e8;
  auVar32._0_8_ = (dVar48 - dVar47) * dVar42;
  auVar32._8_8_ = (DAT_14c8463d0 * dVar46 - dVar46 * DAT_14c8463e8) * 0.0;
  dVar43 = dVar43 * DAT_14c8463e8;
  dVar46 = dVar46 * DAT_14c8463e8;
  dVar13 = (dVar12 - dVar46) * dVar40;
  auVar31 = blendpd(auVar31,_DAT_149935300,2);
  param_1[0x54] = (1.0 - (dVar9 + dVar51)) * dVar42;
  param_1[0x55] = (dVar11 + dVar43) * dVar42;
  param_1[0x56] = auVar32._0_8_;
  param_1[0x57] = 0;
  param_1[0x58] = (dVar11 - dVar43) * dVar39;
  param_1[0x59] = (1.0 - (dVar9 + dVar50)) * dVar39;
  param_1[0x5a] = (dVar12 + dVar46) * dVar39;
  param_1[0x5b] = 0;
  auVar10._8_4_ = SUB84(dVar13,0);
  auVar10._0_8_ = (dVar47 + dVar48) * dVar40;
  auVar10._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x5c) = auVar10;
  param_1[0x5e] = (1.0 - (dVar50 + dVar51)) * dVar40;
  param_1[0x5f] = 0;
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar49;
  *(undefined1 (*) [16])(param_1 + 0x62) = auVar31;
  auVar31 = _DAT_149e1a210;
  auVar10 = _DAT_1499378f0;
  uVar44 = 0;
  if (*(int *)(param_2 + 0x664) != 0) {
    uVar44 = 0x3f000000;
  }
  local_3e0 = param_1 + 100;
  local_3e8 = param_1 + 0x456;
  iVar24 = *(int *)(param_2 + 0x6a8);
  uVar45 = uVar44 | 0x80000000;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar2 = (undefined8 *)(lVar4 + 0x308);
  local_3d8 = (undefined8 *)(lVar4 + 0x310);
  local_3c8 = 0x527800b400;
  local_3f0 = (int *)(lVar4 + 0xc60);
  local_3d0 = (longlong *)(lVar4 + 0x2b8);
  auVar49 = pmovzxbd(auVar32,0xffffffff);
  local_404 = iVar24;
  local_400 = param_1;
  local_3f8 = param_2;
  do {
    uVar25 = 1 << ((byte)lVar26 & 0x1f);
    uVar22 = uVar25 & 0xff;
    switch(uVar22 - 1) {
    case 0:
      uVar14 = 0xfffffff7;
      break;
    case 1:
      uVar14 = 0xffffffef;
      break;
    case 2:
    case 4:
    case 5:
    case 6:
switchD_14445fc3b_caseD_2:
      uVar14 = 0xffffffff;
      break;
    case 3:
      uVar14 = 0xffffffdf;
      break;
    case 7:
      uVar14 = 0xfffffffe;
      break;
    default:
      if (uVar22 == 0x10) {
        uVar14 = 0xfffffffd;
      }
      else {
        if (uVar22 != 0x20) goto switchD_14445fc3b_caseD_2;
        uVar14 = 0xfffffffb;
      }
    }
    uVar3 = *(uint *)(param_2 + 0x6a8);
    if ((((uVar3 & uVar25) == 0) && (iVar24 != 0)) && ((uVar14 | uVar3) != 0xffffffff))
    goto LAB_14445fc8e;
    iVar24 = *(int *)(local_400 + 0x455);
    *(uint *)(local_400 + 0x455) = iVar24 + 1U;
    if (*(uint *)((longlong)local_400 + 0x22ac) < iVar24 + 1U) {
      FUN_1490cdb52(local_3e0,iVar24);
    }
    puVar17 = (undefined8 *)local_400[0x454];
    if ((undefined8 *)local_400[0x454] == (undefined8 *)0x0) {
      puVar17 = local_3e0;
    }
    puVar17 = puVar17 + (longlong)iVar24 * 0xa8;
    FUN_1484afbca(puVar17);
    switch(uVar22 - 1) {
    case 0:
      uStack_304 = 0xbf000000;
      uStack_2f8 = 0x3f800000;
      uStack_2f4 = 0;
      uStack_2ec = 0;
      local_2e4 = 0x3f800000;
      uStack_290 = 0xbf000000;
      uStack_284 = 0x3f800000;
      uStack_280 = 0;
      uStack_278 = 0;
      local_270 = 0x3f800000;
      uStack_21c = 0x3f000000;
      uStack_210 = 0x3f800000;
      uStack_20c = 0;
      uStack_204 = 0;
      local_1fc = 0x3f800000;
      uStack_1a8 = 0x3f000000;
      uStack_19c = 0x3f800000;
      uStack_198 = 0;
      uStack_190 = 0;
      local_188 = 0x3f800000;
      uStack_1ac = uVar44;
      goto LAB_14446014c;
    case 1:
      local_2a8 = 0;
      uStack_2a0 = 0;
      local_2b8 = 0;
      uStack_2b0 = 0;
      local_2c8 = 0;
      uStack_2c0 = 0;
      uStack_2d0 = 0;
      local_308 = 0x3f000000;
      uStack_300 = 0xbf000000;
      uStack_2fc = 0;
      uStack_2f8 = 0;
      uStack_2f4 = 0x3f800000;
      uStack_2f0 = 0x3f800000;
      uStack_2ec = 0;
      uStack_2e8 = 0;
      local_2e4 = 0;
      uStack_2e0 = 0x3f800000;
      local_2dc = 0;
      uStack_294 = 0x3f000000;
      uStack_28c = 0x3f000000;
      uStack_288 = 0;
      uStack_284 = 0;
      uStack_280 = 0x3f800000;
      uStack_27c = 0x3f800000;
      uStack_278 = 0;
      uStack_274 = 0;
      local_270 = 0;
      local_26c = 0x3f800000;
      uStack_228 = 0;
      uStack_238 = 0;
      uStack_234 = 0;
      local_230 = 0;
      uStack_22c = 0;
      uStack_248 = 0;
      uStack_244 = 0;
      uStack_240 = 0;
      uStack_23c = 0;
      uStack_258 = 0;
      uStack_254 = 0;
      uStack_250 = 0;
      local_24c = 0;
      uStack_268 = 0;
      local_25c = 0;
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_1d0 = 0;
      uStack_1c8 = 0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      uStack_1e8 = 0;
      local_220 = 0xbf000000;
      uStack_218 = 0x3f000000;
      uStack_214 = 0;
      uStack_210 = 0;
      uStack_20c = 0x3f800000;
      uStack_208 = 0x3f800000;
      uStack_204 = 0;
      uStack_200 = 0;
      local_1fc = 0;
      uStack_1f8 = 0x3f800000;
      local_1f4 = 0;
      uStack_1ac = 0xbf000000;
      uStack_1a4 = 0xbf000000;
      uStack_1a0 = 0;
      uStack_19c = 0;
      uStack_198 = 0x3f800000;
      uStack_194 = 0x3f800000;
      uStack_190 = 0;
      uStack_18c = 0;
      local_188 = 0;
      local_184 = 0x3f800000;
      uStack_140 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      local_144 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      uStack_158 = 0;
      local_154 = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      uStack_168 = 0;
      local_164 = 0;
      uStack_180 = 0;
      local_174 = 0;
      uStack_304 = uVar44;
      uStack_290 = uVar44;
      uStack_21c = uVar44;
      uStack_1a8 = uVar44;
      break;
    case 2:
    case 4:
    case 5:
    case 6:
      break;
    case 3:
      uStack_304 = 0x3f000000;
      uStack_2fc = 0x3f800000;
      uStack_2f8 = 0;
      uStack_2f4 = 0;
      uStack_2ec = 0x3f800000;
      uStack_2e8 = 0;
      local_2e4 = 0;
      local_2dc = 0x3f800000;
      uStack_294 = 0x3f000000;
      uStack_290 = 0xbf000000;
      uStack_288 = 0x3f800000;
      uStack_284 = 0;
      uStack_280 = 0;
      uStack_278 = 0x3f800000;
      uStack_274 = 0;
      local_270 = 0;
      uStack_268 = 0x3f800000;
      uStack_21c = 0xbf000000;
      uStack_214 = 0x3f800000;
      uStack_210 = 0;
      uStack_20c = 0;
      uStack_204 = 0x3f800000;
      uStack_200 = 0;
      local_1fc = 0;
      local_1f4 = 0x3f800000;
      uStack_1ac = 0xbf000000;
      uStack_1a8 = 0x3f000000;
      uStack_1a0 = 0x3f800000;
      uStack_19c = 0;
      uStack_198 = 0;
      uStack_190 = 0x3f800000;
      uStack_18c = 0;
      local_188 = 0;
      uStack_180 = 0x3f800000;
      uStack_218 = uVar44;
      uStack_1a4 = uVar44;
      goto LAB_144460450;
    case 7:
      uStack_304 = 0x3f000000;
      uStack_2f8 = 0;
      uStack_2f4 = 0x3f800000;
      uStack_2ec = 0x3f800000;
      local_2e4 = 0xbf800000;
      uStack_290 = 0x3f000000;
      uStack_284 = 0;
      uStack_280 = 0x3f800000;
      uStack_278 = 0x3f800000;
      local_270 = 0xbf800000;
      uStack_21c = 0xbf000000;
      uStack_210 = 0;
      uStack_20c = 0x3f800000;
      uStack_204 = 0x3f800000;
      local_1fc = 0xbf800000;
      uStack_1a8 = 0xbf000000;
      uStack_19c = 0;
      uStack_198 = 0x3f800000;
      uStack_190 = 0x3f800000;
      local_188 = 0xbf800000;
      uStack_1ac = uVar45;
LAB_14446014c:
      uStack_18c = 0x3f800000;
      uStack_1a0 = 0;
      uStack_1a4 = 0xbf000000;
      uStack_200 = 0x3f800000;
      uStack_214 = 0;
      uStack_218 = 0x3f000000;
      uStack_274 = 0x3f800000;
      uStack_288 = 0;
      uStack_2e8 = 0x3f800000;
      uStack_2fc = 0;
      local_1f4 = 0;
      uStack_268 = 0;
      local_2dc = 0;
      uStack_180 = 0;
      uStack_294 = uStack_1ac;
LAB_144460450:
      local_184 = 0;
      uStack_194 = 0;
      uStack_1f8 = 0;
      uStack_208 = 0;
      uStack_228 = 0;
      uStack_22c = 0;
      local_230 = 0;
      uStack_234 = 0;
      uStack_238 = 0;
      uStack_23c = 0;
      uStack_240 = 0;
      uStack_244 = 0;
      uStack_248 = 0;
      local_24c = 0;
      uStack_250 = 0;
      uStack_254 = 0;
      uStack_258 = 0;
      local_25c = 0;
      local_26c = 0;
      uStack_27c = 0;
      uStack_2e0 = 0;
      uStack_2f0 = 0;
      uStack_148 = 0;
      uStack_14c = 0;
      uStack_150 = 0;
      local_154 = 0;
      uStack_158 = 0;
      uStack_15c = 0;
      uStack_160 = 0;
      local_164 = 0;
      uStack_168 = 0;
      uStack_16c = 0;
      uStack_170 = 0;
      local_174 = 0;
      uStack_1b8 = 0;
      local_1c0 = 0;
      uStack_1c8 = 0;
      local_1d0 = 0;
      uStack_1d8 = 0;
      local_1e0 = 0;
      uStack_1e8 = 0;
      uStack_2a0 = 0;
      local_2a8 = 0;
      uStack_2b0 = 0;
      local_2b8 = 0;
      uStack_2c0 = 0;
      local_2c8 = 0;
      uStack_2d0 = 0;
      local_144 = 0;
      uStack_140 = 0;
      local_308 = uStack_294;
      uStack_300 = uStack_1a4;
      uStack_28c = uStack_218;
      local_220 = uStack_1ac;
      break;
    default:
      if (uVar22 == 0x10) {
        local_2a8 = 0;
        uStack_2a0 = 0;
        local_2b8 = 0;
        uStack_2b0 = 0;
        local_2c8 = 0;
        uStack_2c0 = 0;
        uStack_2d0 = 0;
        local_308 = 0xbf000000;
        uStack_300 = 0xbf000000;
        uStack_2fc = 0;
        uStack_2f8 = 0;
        uStack_2f4 = 0x3f800000;
        uStack_2f0 = 0xbf800000;
        uStack_2ec = 0;
        uStack_2e8 = 0;
        local_2e4 = 0;
        uStack_2e0 = 0xbf800000;
        local_2dc = 0;
        uStack_294 = 0xbf000000;
        uStack_28c = 0x3f000000;
        uStack_288 = 0;
        uStack_284 = 0;
        uStack_280 = 0x3f800000;
        uStack_274 = 0;
        local_270 = 0;
        local_26c = 0xbf800000;
        uStack_228 = 0;
        uStack_238 = 0;
        uStack_234 = 0;
        local_230 = 0;
        uStack_22c = 0;
        uStack_248 = 0;
        uStack_244 = 0;
        uStack_240 = 0;
        uStack_23c = 0;
        uStack_258 = 0;
        uStack_254 = 0;
        uStack_250 = 0;
        local_24c = 0;
        uStack_268 = 0;
        local_25c = 0;
        local_1c0 = 0;
        uStack_1b8 = 0;
        local_1d0 = 0;
        uStack_1c8 = 0;
        local_1e0 = 0;
        uStack_1d8 = 0;
        uStack_1e8 = 0;
        local_220 = 0x3f000000;
        uStack_218 = 0x3f000000;
        uStack_214 = 0;
        uStack_210 = 0;
        uStack_20c = 0x3f800000;
        uStack_200 = 0;
        local_1fc = 0;
        uStack_1f8 = 0xbf800000;
        local_1f4 = 0;
        uStack_1ac = 0x3f000000;
        uStack_1a4 = 0xbf000000;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_198 = 0x3f800000;
        uStack_18c = 0;
        local_188 = 0;
        local_184 = 0xbf800000;
        uStack_140 = 0;
        uStack_150 = 0;
        uStack_14c = 0;
        uStack_148 = 0;
        local_144 = 0;
        uStack_160 = 0;
        uStack_15c = 0;
        uStack_158 = 0;
        local_154 = 0;
        uStack_170 = 0;
        uStack_16c = 0;
        uStack_168 = 0;
        local_164 = 0;
        uStack_180 = 0;
        local_174 = 0;
        uStack_304 = uVar45;
        uStack_290 = uVar45;
        uStack_27c = uStack_2f0;
        uStack_278 = uStack_2ec;
        uStack_21c = uVar45;
        uStack_208 = uStack_2f0;
        uStack_204 = uStack_2ec;
        uStack_1a8 = uVar45;
        uStack_194 = uStack_2f0;
        uStack_190 = uStack_2ec;
      }
      else if (uVar22 == 0x20) {
        local_2a8 = 0;
        uStack_2a0 = 0;
        local_2b8 = 0;
        uStack_2b0 = 0;
        local_2c8 = 0;
        uStack_2c0 = 0;
        uStack_2d0 = 0;
        local_308 = 0x3f000000;
        uStack_304 = 0xbf000000;
        uStack_2fc = 0x3f800000;
        uStack_2f8 = 0;
        uStack_2f4 = 0;
        uStack_2f0 = 0;
        uStack_2ec = 0xbf800000;
        uStack_2e8 = 0;
        local_2e4 = 0;
        uStack_2e0 = 0;
        local_2dc = 0xbf800000;
        uStack_294 = 0x3f000000;
        uStack_290 = 0x3f000000;
        uStack_288 = 0x3f800000;
        uStack_284 = 0;
        uStack_280 = 0;
        uStack_27c = 0;
        local_270 = 0;
        local_26c = 0;
        uStack_268 = 0xbf800000;
        uStack_234 = 0;
        local_230 = 0;
        uStack_22c = 0;
        uStack_228 = 0;
        uStack_244 = 0;
        uStack_240 = 0;
        uStack_23c = 0;
        uStack_238 = 0;
        uStack_254 = 0;
        uStack_250 = 0;
        local_24c = 0;
        uStack_248 = 0;
        local_25c = 0;
        uStack_258 = 0;
        local_1c0 = 0;
        uStack_1b8 = 0;
        local_1d0 = 0;
        uStack_1c8 = 0;
        local_1e0 = 0;
        uStack_1d8 = 0;
        uStack_1e8 = 0;
        local_220 = 0xbf000000;
        uStack_21c = 0x3f000000;
        uStack_214 = 0x3f800000;
        uStack_210 = 0;
        uStack_20c = 0;
        uStack_208 = 0;
        local_1fc = 0;
        uStack_1f8 = 0;
        local_1f4 = 0xbf800000;
        uStack_1ac = 0xbf000000;
        uStack_1a8 = 0xbf000000;
        uStack_1a0 = 0x3f800000;
        uStack_19c = 0;
        uStack_198 = 0;
        uStack_194 = 0;
        local_188 = 0;
        local_184 = 0;
        uStack_180 = 0xbf800000;
        uStack_14c = 0;
        uStack_148 = 0;
        local_144 = 0;
        uStack_140 = 0;
        uStack_15c = 0;
        uStack_158 = 0;
        local_154 = 0;
        uStack_150 = 0;
        uStack_16c = 0;
        uStack_168 = 0;
        local_164 = 0;
        uStack_160 = 0;
        local_174 = 0;
        uStack_170 = 0;
        uStack_300 = uVar45;
        uStack_28c = uVar45;
        uStack_278 = uStack_2ec;
        uStack_274 = uStack_2e8;
        uStack_218 = uVar45;
        uStack_204 = uStack_2ec;
        uStack_200 = uStack_2e8;
        uStack_1a4 = uVar45;
        uStack_190 = uStack_2ec;
        uStack_18c = uStack_2e8;
      }
    }
    local_138 = &local_2d8;
    bVar29 = (uVar3 & uVar25) != 0;
    uStack_264 = 0;
    if (bVar29) {
      uStack_264 = 0x3f800000;
    }
    _local_2d8 = CONCAT44(0x3f800000,uStack_264);
    uStack_17c = 0x3f800000;
    if (bVar29) {
      uStack_17c = 0;
    }
    uStack_260 = 0;
    local_1f0 = (ulonglong)uStack_17c;
    uStack_178 = 0x3f800000;
    auVar32 = maxps(*(undefined1 (*) [16])(local_3f8 + 0x654),_DAT_149e1a200);
    auVar32 = minps(auVar32,auVar31);
    fVar30 = auVar32._0_4_;
    fVar34 = auVar32._4_4_;
    fVar38 = auVar32._8_4_;
    auVar41._4_4_ =
         *(undefined4 *)
          (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar34 + -0x39000000) >> 0x14) * 4);
    auVar41._0_4_ =
         *(undefined4 *)(&DAT_149e1bee0 + (ulonglong)((int)fVar30 + 0xc7000000U >> 0x14) * 4);
    auVar41._8_4_ =
         *(undefined4 *)
          (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar38 + -0x39000000) >> 0x14) * 4);
    auVar41._12_4_ = 0;
    auVar35._0_4_ = (uint)fVar30 >> 0xc;
    auVar35._4_4_ = (uint)fVar34 >> 0xc;
    auVar35._8_4_ = (uint)fVar38 >> 0xc;
    auVar35._12_4_ = (uint)auVar32._12_4_ >> 0xc;
    auVar36 = pmaddwd(auVar35 & auVar49 | auVar10,auVar41);
    auVar37._0_4_ = auVar36._0_4_ >> 0x10;
    auVar37._4_4_ = auVar36._4_4_ >> 0x10;
    auVar37._8_4_ = auVar36._8_4_ >> 0x10;
    auVar37._12_4_ = auVar36._12_4_ >> 0x10;
    auVar36._0_4_ = (int)(fVar30 * 0.0 + 0.5);
    auVar36._4_4_ = (int)(fVar34 * 0.0 + 0.5);
    auVar36._8_4_ = (int)(fVar38 * 0.0 + 0.5);
    auVar36._12_4_ = (int)(auVar32._12_4_ * 255.0 + 0.5);
    auVar36 = auVar36 | auVar37;
    auVar33._4_4_ = auVar36._4_4_;
    auVar33._12_4_ = auVar36._12_4_;
    auVar33._0_4_ = auVar36._8_4_;
    auVar33._8_4_ = auVar36._0_4_;
    auVar32 = packssdw(auVar33,auVar33);
    sVar5 = auVar32._0_2_;
    sVar6 = auVar32._2_2_;
    sVar7 = auVar32._4_2_;
    sVar8 = auVar32._6_2_;
    local_298 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * auVar32[6] - (0xff < sVar8),
                         CONCAT12((0 < sVar7) * (sVar7 < 0x100) * auVar32[4] - (0xff < sVar7),
                                  CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar32[2] -
                                           (0xff < sVar6),
                                           (0 < sVar5) * (sVar5 < 0x100) * auVar32[0] -
                                           (0xff < sVar5))));
    local_398 = &local_308;
    local_390 = 0x400000074;
    local_388 = &uStack_2fc;
    local_380 = 0x400000074;
    local_378 = &uStack_2f0;
    local_370 = 0x400000074;
    local_368 = &local_2e4;
    local_360 = 0x400000074;
    local_348 = 0;
    uStack_340 = 0;
    local_358 = 0;
    uStack_350 = 0;
    uStack_130 = 0x400000074;
    local_3a0 = &local_128;
    local_3a8 = &local_138;
    uStack_224 = local_298;
    local_1b0 = local_298;
    local_13c = local_298;
    FUN_1490cd932(local_338,&local_3a8);
    local_318 = &local_298;
    local_310 = 0x400000074;
    local_138 = (undefined4 *)CONCAT62(local_138._2_6_,1);
    FUN_147cdba36(puVar17 + 2,&local_398,&local_138);
    FUN_147cab3a8(puVar17 + 0x13,&local_398,1);
    FUN_147cc783a(puVar17 + 0x1b,&local_398,1);
    local_138 = (undefined4 *)0x100000000;
    uStack_130 = 2;
    local_128 = (undefined ***)0x300000002;
    local_3b0 = local_120;
    local_3b8 = &local_138;
    FUN_1490cd99a(puVar17 + 0x26,&local_3b8);
    puVar28 = local_400;
    *(undefined4 *)(puVar17 + 1) = 2;
    lVar4 = *(longlong *)(*local_3c0 + lVar26 * 8);
    puVar17[0x6c] = lVar4;
    if (lVar4 == 0) {
      FUN_147cab400(&local_398);
      break;
    }
    FUN_14470a074(lVar4,&local_138,*(undefined4 *)(local_400[0x42] + 8));
    iVar24 = *(int *)(puVar28 + 0x463);
    *(uint *)(puVar28 + 0x463) = iVar24 + 1U;
    if (*(uint *)((longlong)puVar28 + 0x231c) < iVar24 + 1U) {
      FUN_1490cdcce(local_3e8,iVar24);
    }
    puVar28 = (undefined8 *)local_400[0x462];
    if ((undefined8 *)local_400[0x462] == (undefined8 *)0x0) {
      puVar28 = local_3e8;
    }
    puVar28[(longlong)iVar24 * 2] = local_138;
    (puVar28 + (longlong)iVar24 * 2)[1] = uStack_130;
    iVar24 = *local_3f0;
    if (DAT_14c86a9fc == 0) {
      if (iVar24 != 2) {
        if (iVar24 == 1) {
          DVar15 = FUN_140ad26c0();
          DVar16 = GetCurrentThreadId();
          bVar29 = DVar15 == DVar16;
        }
        else {
          bVar29 = iVar24 == 0x10;
        }
        if (!bVar29) goto LAB_14446093f;
      }
LAB_1444608eb:
      FUN_1484b585e(puVar17);
      iVar24 = local_404;
    }
    else {
      if (iVar24 == 0x10) goto LAB_1444608eb;
LAB_14446093f:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (*local_3f0 == 2)) goto LAB_1444608eb;
        if (*local_3f0 == 1) {
          DVar15 = FUN_140ad26c0();
          DVar16 = GetCurrentThreadId();
          if (DVar15 == DVar16) goto LAB_1444608eb;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar19 = (uint *)*puVar2;
        if (puVar19 != (uint *)0x0) goto LAB_1444609e6;
        do {
          puVar28 = local_3d8;
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&DAT_1444623e5);
          }
          puVar18 = (undefined4 *)*puVar28;
          *puVar28 = 0;
          if (puVar18 == (undefined4 *)0x0) {
            puVar18 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar18 = 0xffffffff;
          *(undefined4 **)(puVar18 + 0x10) = puVar18 + 0x16;
          puVar18[0x12] = 0;
          *puVar2 = puVar18;
          FUN_140217a48(puVar2);
          puVar19 = (uint *)*puVar2;
LAB_1444609e6:
          uVar27 = *(longlong *)(puVar19 + 0x10) + 7;
          uVar22 = puVar19[0x12];
          while( true ) {
            puVar28 = (undefined8 *)(uVar27 & 0xfffffffffffffff8);
            if (puVar28 + 0x16 <= puVar19 + 0x4000) {
              *(undefined8 **)(puVar19 + 0x10) = puVar28 + 0x16;
              puVar19[0x12] = uVar22 + 1;
              FUN_1447247dc(puVar28,0);
              iVar24 = local_404;
              *puVar28 = &PTR_FUN_14bac2aa0;
              puVar28[0x15] = puVar17;
              if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                uVar22 = DAT_14c7585c8 >> 10 & 3;
                iVar23 = 0;
                if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar22 < 2) {
                  uVar27 = (ulonglong)(byte)(&DAT_149e38edc)[uVar22];
                  iVar23 = 0;
                }
                else {
                  uVar27 = 2;
                }
              }
              else {
                iVar23 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                         *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                uVar27 = 5;
              }
              if (*(code **)(puVar28[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar28[0xe] + 0x18))(puVar28 + 0xe,puVar28 + 9);
              }
              puVar28[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar28[9] = puVar28;
              puVar28[10] = puVar28;
              lVar4 = *local_3d0;
              if (lVar4 == 0) {
                if ((char)uVar27 == '\x06') {
                  uVar27 = 1;
                }
                uVar20 = 0;
              }
              else {
                if ((char)uVar27 == '\x06') {
                  uVar27 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
                }
                uVar20 = *(undefined8 *)(lVar4 + 0x30);
              }
              puVar28[0xf] = uVar20;
              puVar28[0x10] = (uVar27 << 0x3b) + local_3c8 | 0xc000000000000000;
              *(int *)((longlong)puVar28 + 0x1c) = iVar23;
              if (puVar28 == (undefined8 *)0x0) {
                local_138 = (undefined4 *)CONCAT71(local_138._1_7_,1);
                FUN_1447439e4(0,&local_138);
              }
              else {
                LOCK();
                *(int *)(puVar28 + 1) = *(int *)(puVar28 + 1) + 1;
                UNLOCK();
                local_138 = (undefined4 *)CONCAT71(local_138._1_7_,1);
                FUN_1447439e4(puVar28,&local_138);
                LOCK();
                piVar1 = (int *)(puVar28 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)*puVar28)(puVar28,1);
                }
              }
              goto LAB_1444608f8;
            }
            *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
            LOCK();
            uVar25 = *puVar19;
            *puVar19 = *puVar19 + uVar22 + 1;
            UNLOCK();
            if ((uVar25 ^ uVar22) != 0xffffffff) break;
            puVar19 = (uint *)*puVar2;
            *puVar19 = 0xffffffff;
            *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
            puVar19[0x12] = 0;
            *puVar2 = puVar19;
            uVar27 = (longlong)puVar19 + 0x5f;
            uVar22 = 0;
          }
        } while( true );
      }
      local_128 = (undefined ***)0x0;
      local_118 = &PTR_LAB_14bac2a80;
      local_138 = (undefined4 *)&LAB_1490cddc2;
      local_418 = &local_138;
      local_110 = puVar17;
      FUN_14005a792(&DAT_14ca9a440,L"FUsdCardsSceneProxyUploadBuffer",&DAT_14cbfe818);
      iVar24 = local_404;
      if (local_138 != (undefined4 *)0x0) {
        pppuVar21 = local_128;
        if (local_128 == (undefined ***)0x0) {
          pppuVar21 = &local_118;
        }
        (*(code *)(*pppuVar21)[2])();
        iVar24 = local_404;
      }
    }
LAB_1444608f8:
    FUN_147cab400(&local_398);
    param_2 = local_3f8;
LAB_14445fc8e:
    lVar26 = lVar26 + 1;
  } while (lVar26 != 6);
  if ((local_f0 ^ (ulonglong)auStack_438) == DAT_14c707940) {
    return local_400;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144460e20 FUN_144460e20 body=161 status=ok
// SIG undefined FUN_144460e20(void)

undefined8 * FUN_144460e20(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14bac1c00;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(param_1 + 0x14);
  *param_1 = &PTR__purecall_149e35f70;
  plVar1 = (longlong *)param_1[0xb];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  lVar2 = param_1[0xf];
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar2);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144460ec2 FUN_144460ec2 body=661 status=ok
// SIG undefined FUN_144460ec2(void)

longlong FUN_144460ec2(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
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
  uVar1 = *param_2;
  if ((uVar1 != 0) && (uVar1 != *(ulonglong *)(*(longlong *)(param_1 + 0x90) + 0x20))) {
    if (DAT_14c951858 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1468c5283;
      local_50 = FUN_142809da0;
      local_58 = L"Engine";
      local_60 = 0x400000000;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    iVar5 = *(int *)(DAT_14c951858 + 0x38);
    if ((((*(int *)(*(longlong *)(uVar1 + 0x10) + 0x38) < iVar5) ||
         (*(longlong *)(*(longlong *)(*(longlong *)(uVar1 + 0x10) + 0x30) + (longlong)iVar5 * 8) !=
          DAT_14c951858 + 0x30)) &&
        ((uVar1 = *param_2, (*(uint *)(uVar1 + 8) & 1) == 0 ||
         ((lVar4 = *(longlong *)(*(longlong *)(uVar1 + 0x20) + 0x10), *(int *)(lVar4 + 0x38) < iVar5
          || (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar5 * 8) !=
              DAT_14c951858 + 0x30)))))) && (uVar1 != *(ulonglong *)(param_1 + 0x90))) {
      if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
        uVar3 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        lVar4 = param_1 + 0xd8;
        if (*(longlong *)(param_1 + 0xe0) != 0) {
          lVar4 = *(longlong *)(param_1 + 0xe0);
        }
        iVar5 = *(int *)(lVar4 + (ulonglong)
                                 (*(int *)(param_1 + 0xe8) - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        if (iVar5 != -1) {
          lVar4 = *(longlong *)(param_1 + 0xa0);
          do {
            if (*(ulonglong *)(lVar4 + (longlong)iVar5 * 0x10) == uVar1) goto LAB_144461084;
            iVar5 = *(int *)((longlong)iVar5 * 0x10 + lVar4 + 8);
          } while (iVar5 != -1);
        }
      }
      plVar2 = *(longlong **)(param_1 + 0x98);
      if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
        uVar3 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        plVar6 = plVar2 + 7;
        if ((longlong *)plVar2[8] != (longlong *)0x0) {
          plVar6 = (longlong *)plVar2[8];
        }
        iVar5 = *(int *)((longlong)plVar6 +
                        (ulonglong)((int)plVar2[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        if (iVar5 != -1) {
          do {
            if (*(ulonglong *)(*plVar2 + (longlong)iVar5 * 0x10) == uVar1) {
              FUN_1457b12ce((longlong *)(param_1 + 0xa0),&local_28,param_2,0);
              break;
            }
            iVar5 = *(int *)((longlong)iVar5 * 0x10 + *plVar2 + 8);
          } while (iVar5 != -1);
        }
      }
    }
  }
LAB_144461084:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144461158 FUN_144461158 body=4343 status=ok
// SIG undefined FUN_144461158(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144461158(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  DWORD DVar22;
  DWORD DVar23;
  undefined4 *puVar24;
  uint *puVar25;
  undefined8 uVar26;
  uint uVar27;
  longlong *plVar28;
  int iVar29;
  uint *puVar30;
  undefined2 uVar31;
  int iVar32;
  longlong lVar33;
  longlong lVar34;
  undefined8 *puVar35;
  int iVar36;
  int iVar37;
  ulonglong uVar38;
  longlong lVar39;
  float *pfVar40;
  undefined1 uVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  longlong lVar45;
  ulonglong uVar46;
  longlong lVar47;
  longlong lVar48;
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  float fVar52;
  float fVar53;
  double dVar54;
  float fVar55;
  float fVar56;
  double dVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 local_288 [32];
  undefined8 *local_268;
  longlong local_260;
  ulonglong local_258;
  longlong local_250;
  undefined8 *local_248;
  longlong local_240;
  undefined1 local_238 [16];
  int local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  int local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  longlong *local_200;
  longlong local_1f8;
  longlong local_1f0;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined8 uStack_1b4;
  undefined8 local_1ac;
  undefined8 uStack_1a4;
  undefined8 local_19c;
  undefined4 local_194;
  uint local_188 [4];
  undefined1 *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  float afStack_160 [10];
  undefined8 local_138;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_288;
  uVar46 = 0;
  FUN_1406ff4f8(param_1,param_2,0);
  *param_1 = &PTR_LAB_14bac2310;
  uVar26 = *(undefined8 *)(param_2 + 0x628);
  param_1[0x53] = *(undefined8 *)(param_2 + 0x620);
  param_1[0x54] = uVar26;
  param_1[0x55] = *(undefined8 *)(param_2 + 0x630);
  uVar26 = *(undefined8 *)(param_2 + 0x640);
  param_1[0x56] = *(undefined8 *)(param_2 + 0x638);
  param_1[0x57] = uVar26;
  param_1[0x58] = *(undefined8 *)(param_2 + 0x648);
  *(undefined1 *)(param_1 + 0x59) = 1;
  uVar26 = *(undefined8 *)(param_2 + 0x65c);
  param_1[0x5a] = *(undefined8 *)(param_2 + 0x654);
  param_1[0x5b] = uVar26;
  local_248 = param_1 + 0x6c;
  FUN_1484afbca(local_248,*(undefined4 *)(param_1[0x42] + 8));
  FUN_14003fbd6();
  FUN_14470a074(DAT_14caea080,param_1 + 0x114,*(undefined4 *)(param_1[0x42] + 8));
  *(byte *)((longlong)param_1 + 0x6f) = *(byte *)((longlong)param_1 + 0x6f) & 0x7f;
  param_1[2] = 0x3f00000000000000;
  param_1[3] = &DAT_3f8000003f800000;
  auVar49._0_8_ = ((double)param_1[0x55] + (double)param_1[0x58]) * 0.5;
  auVar49._8_8_ = 0;
  dVar15 = ((double)param_1[0x54] + (double)param_1[0x57]) * 0.5;
  dVar50 = (double)param_1[0x58] - (double)param_1[0x55];
  dVar51 = (double)param_1[0x57] - (double)param_1[0x54];
  dVar8 = (double)param_1[0x56] - (double)param_1[0x53];
  dVar16 = DAT_14c8463d8 + DAT_14c8463d8;
  dVar9 = DAT_14c8463e0 + DAT_14c8463e0;
  dVar54 = dVar16 * DAT_14c8463d0;
  dVar57 = dVar9 * DAT_14c8463d8;
  dVar19 = DAT_14c8463d0 * (DAT_14c8463d0 + DAT_14c8463d0);
  dVar21 = DAT_14c8463d8 * dVar16;
  dVar18 = DAT_14c8463d0 * dVar9;
  dVar16 = dVar16 * DAT_14c8463e8;
  dVar17 = (1.0 - (DAT_14c8463e0 * dVar9 + dVar19)) * dVar51;
  dVar10 = dVar9 * DAT_14c8463e8;
  dVar11 = (DAT_14c8463d0 + DAT_14c8463d0) * DAT_14c8463e8;
  dVar20 = (dVar54 + dVar10) * dVar8;
  auVar49 = blendpd(auVar49,_DAT_149935300,2);
  auVar7._8_4_ = SUB84(dVar20,0);
  auVar7._0_8_ = (1.0 - (DAT_14c8463e0 * dVar9 + dVar21)) * dVar8;
  auVar7._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x5c) = auVar7;
  param_1[0x5e] = (dVar18 - dVar16) * dVar8;
  param_1[0x5f] = 0;
  auVar12._8_4_ = SUB84(dVar17,0);
  auVar12._0_8_ = (dVar54 - dVar10) * dVar51;
  auVar12._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar12;
  param_1[0x62] = (dVar57 + dVar11) * dVar51;
  param_1[99] = 0;
  param_1[100] = (dVar16 + dVar18) * dVar50;
  param_1[0x65] = (dVar57 - dVar11) * dVar50;
  param_1[0x66] = (1.0 - (dVar19 + dVar21)) * dVar50;
  param_1[0x67] = 0;
  auVar6._8_4_ = SUB84(dVar15,0);
  auVar6._0_8_ = ((double)param_1[0x53] + (double)param_1[0x56]) * 0.5;
  auVar6._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x68) = auVar6;
  *(undefined1 (*) [16])(param_1 + 0x6a) = auVar49;
  local_168 = 0xbf000000bf000000;
  afStack_160[0] = 0.5;
  afStack_160[1] = -0.5;
  afStack_160[2] = 0.5;
  afStack_160[3] = 0.5;
  afStack_160[4] = 0.5;
  afStack_160[5] = 0.5;
  afStack_160[6] = 0.5;
  afStack_160[7] = 0.5;
  afStack_160[8] = -0.5;
  afStack_160[9] = 0.5;
  local_188[0] = 0;
  local_188[1] = 0;
  local_188[2] = 0;
  local_188[3] = 0x3f800000;
  local_178 = &DAT_3f8000003f800000;
  uStack_170 = 0x3f800000;
  local_1d8 = 0;
  uStack_1d0 = 0x42b4000000000000;
  local_1c8 = 0;
  local_1c0 = 0xc2b40000;
  local_1bc = 0;
  uStack_1b4 = 0;
  local_1ac = 0x42b40000;
  uStack_1a4 = 0xc2b4000000000000;
  local_19c = 0x43340000;
  local_194 = 0;
  FUN_1408e3634(param_1 + 0x7f,0x18,1);
  FUN_1408e36f6(param_1 + 0x6e,0x18,1,1);
  FUN_140964b22(param_1 + 0x87,0x18,1);
  *(undefined4 *)(param_1 + 0x6d) = 0xc;
  local_200 = param_1 + 0x92;
  local_240 = 0xe;
  lVar48 = 0;
  local_250 = 0;
  lVar45 = 0;
  do {
    FUN_1413df99e(&local_138,(longlong)&local_1d8 + lVar45 * 0xc);
    plVar28 = local_200;
    local_1e8 = local_108;
    fStack_1e4 = fStack_104;
    fStack_1e0 = fStack_100;
    fStack_1dc = fStack_fc;
    fVar53 = local_108 * 0.0;
    fVar55 = fStack_104 * 0.0;
    fVar56 = fStack_100 * 0.0;
    fVar61 = (float)local_138 * 0.0 + (float)local_128 * 0.0 + (float)local_118 + fVar53;
    fStack_224 = local_138._4_4_ * 0.0 + local_128._4_4_ * 0.0 + local_118._4_4_ + fVar55;
    fStack_210 = fStack_130 * 0.0 + fStack_120 * 0.0 + (float)uStack_110 + fVar56;
    fStack_220 = fStack_12c * 0.0 + fStack_11c * 0.0 + uStack_110._4_4_ + fStack_fc * 0.0;
    fVar62 = local_128._4_4_ + local_138._4_4_ * 0.0 + local_118._4_4_ * 0.0 + fVar55;
    fVar63 = fStack_120 + fStack_130 * 0.0 + (float)uStack_110 * 0.0 + fVar56;
    fVar52 = (float)local_128 * 0.0 + (float)local_138 + (float)local_118 * 0.0 + fVar53;
    fVar55 = local_128._4_4_ * 0.0 + local_138._4_4_ + local_118._4_4_ * 0.0 + fVar55;
    fVar56 = fStack_120 * 0.0 + fStack_130 + (float)uStack_110 * 0.0 + fVar56;
    fVar60 = fVar63 * 0.0 + fStack_210 * -0.0;
    fVar4 = fStack_210 * -0.0 + fVar56 * 0.0;
    fVar3 = fVar63 * -0.0 + fVar56 * 0.0;
    local_1f8 = lVar45 * 4;
    lVar39 = (ulonglong)
             (((fVar60 * fVar55 - fVar4 * fVar62) + fStack_224 * fVar3) * -0.0 +
              (fVar3 * 0.0 + (fVar55 * fVar63 - fVar56 * fVar62)) * fVar61 +
              ((fVar60 * 0.0 + (fVar62 * fStack_210 - fVar63 * fStack_224)) * fVar52 -
              (fVar4 * 0.0 + (fVar55 * fStack_210 - fVar56 * fStack_224)) *
              ((float)local_128 + (float)local_138 * 0.0 + (float)local_118 * 0.0 + fVar53)) < 0.0)
             * 4;
    fVar3 = *(float *)(&DAT_14a329b50 + lVar39);
    local_238 = ZEXT416((uint)fVar3);
    fVar4 = *(float *)(&DAT_14a329b58 + lVar39);
    local_218 = (int)ROUND(fVar52 * 32767.0 + fVar52 * 32767.0 + 0.5) >> 1;
    local_228 = (int)ROUND(fVar55 * 32767.0 + fVar55 * 32767.0 + 0.5) >> 1;
    iVar29 = (int)ROUND(fVar56 * 32767.0 + fVar56 * 32767.0 + 0.5) >> 1;
    iVar36 = (int)ROUND(fVar61 * 32767.0 + fVar61 * 32767.0 + 0.5) >> 1;
    pfVar40 = afStack_160;
    lVar47 = 0;
    uVar38 = uVar46;
    lVar39 = lVar48;
    do {
      fVar60 = pfVar40[-2];
      fVar53 = pfVar40[-1];
      fVar62 = *pfVar40;
      fVar63 = fVar62 * (float)local_118 + fVar53 * (float)local_128 + fVar60 * (float)local_138 +
               local_108;
      fVar58 = fVar62 * local_118._4_4_ + fVar53 * local_128._4_4_ + fVar60 * local_138._4_4_ +
               fStack_104;
      fVar59 = fVar62 * (float)uStack_110 + fVar53 * fStack_120 + fVar60 * fStack_130 + fStack_100;
      fVar60 = fVar62 * uStack_110._4_4_ + fVar53 * fStack_11c + fVar60 * fStack_12c + fStack_fc;
      lVar34 = param_1[0x84];
      iVar37 = (int)uVar38;
      uVar38 = (ulonglong)(uint)(*(int *)(param_1 + 0x85) * iVar37);
      *(float *)(lVar34 + uVar38) = fVar63;
      auVar13._4_4_ = fVar58;
      auVar13._0_4_ = fVar63;
      auVar13._8_4_ = fVar59;
      auVar13._12_4_ = fVar60;
      uVar26 = extractps(auVar13,1);
      *(undefined8 *)(lVar34 + 4 + uVar38) = uVar26;
      auVar14._4_4_ = fVar58;
      auVar14._0_4_ = fVar63;
      auVar14._8_4_ = fVar59;
      auVar14._12_4_ = fVar60;
      uVar26 = extractps(auVar14,2);
      *(undefined8 *)(lVar34 + 8 + uVar38) = uVar26;
      if (*(char *)((longlong)param_1 + 0x3f1) == '\x01') {
        lVar34 = param_1[0x7a] + local_240;
        iVar32 = 0x7fff;
        if (local_218 < 0x7fff) {
          iVar32 = local_218;
        }
        if (iVar32 < -0x7fff) {
          iVar32 = -0x8000;
        }
        iVar42 = 0x7fff;
        if (local_228 < 0x7fff) {
          iVar42 = local_228;
        }
        *(short *)(lVar34 + -0xe + lVar47 * 2) = (short)iVar32;
        if (iVar42 < -0x7fff) {
          iVar42 = -0x8000;
        }
        iVar32 = 0x7fff;
        if (iVar29 < 0x7fff) {
          iVar32 = iVar29;
        }
        *(short *)(lVar34 + -0xc + lVar47 * 2) = (short)iVar42;
        iVar42 = -0x8000;
        if (iVar32 < -0x7fff) {
          iVar32 = iVar42;
        }
        iVar43 = 0x7fff;
        if (iVar36 < 0x7fff) {
          iVar43 = iVar36;
        }
        *(short *)(lVar34 + -10 + lVar47 * 2) = (short)iVar32;
        if (iVar43 < -0x7fff) {
          iVar43 = iVar42;
        }
        *(undefined2 *)(lVar34 + -8 + lVar47 * 2) = 0x7fff;
        iVar32 = (int)ROUND(fStack_224 * 32767.0 + fStack_224 * 32767.0 + 0.5) >> 1;
        if (0x7ffe < iVar32) {
          iVar32 = 0x7fff;
        }
        if (iVar32 < -0x7fff) {
          iVar32 = iVar42;
        }
        iVar44 = (int)ROUND(fStack_210 * 32767.0 + fStack_210 * 32767.0 + 0.5) >> 1;
        if (0x7ffe < iVar44) {
          iVar44 = 0x7fff;
        }
        *(short *)(lVar34 + -6 + lVar47 * 2) = (short)iVar43;
        if (iVar44 < -0x7fff) {
          iVar44 = iVar42;
        }
        *(short *)(lVar34 + -4 + lVar47 * 2) = (short)iVar32;
        *(short *)(lVar34 + -2 + lVar47 * 2) = (short)iVar44;
        iVar32 = (int)ROUND(fVar4) >> 1;
        if (0x7ffe < iVar32) {
          iVar32 = 0x7fff;
        }
        uVar31 = (undefined2)iVar32;
        if (iVar32 < -0x7fff) {
          uVar31 = 0x8000;
        }
        *(undefined2 *)(lVar34 + lVar47 * 2) = uVar31;
      }
      else {
        lVar34 = param_1[0x7a] + local_250;
        iVar32 = (int)ROUND(fVar52 * 127.0 + fVar52 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar32) {
          iVar32 = 0x7f;
        }
        if (iVar32 < -0x7f) {
          iVar32 = -0x80;
        }
        iVar42 = (int)ROUND(fVar55 * 127.0 + fVar55 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar42) {
          iVar42 = 0x7f;
        }
        *(char *)(lVar47 + lVar34) = (char)iVar32;
        uVar41 = (undefined1)iVar42;
        if (iVar42 < -0x7f) {
          uVar41 = 0x80;
        }
        *(undefined1 *)(lVar47 + 1 + lVar34) = uVar41;
        iVar32 = (int)ROUND(fVar56 * 127.0 + fVar56 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar32) {
          iVar32 = 0x7f;
        }
        iVar42 = -0x80;
        if (iVar32 < -0x7f) {
          iVar32 = iVar42;
        }
        iVar43 = (int)ROUND(fVar61 * 127.0 + fVar61 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar43) {
          iVar43 = 0x7f;
        }
        *(char *)(lVar47 + 2 + lVar34) = (char)iVar32;
        if (iVar43 < -0x7f) {
          iVar43 = iVar42;
        }
        *(undefined1 *)(lVar47 + 3 + lVar34) = 0x7f;
        iVar32 = (int)ROUND(fStack_224 * 127.0 + fStack_224 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar32) {
          iVar32 = 0x7f;
        }
        if (iVar32 < -0x7f) {
          iVar32 = iVar42;
        }
        iVar44 = (int)ROUND(fStack_210 * 127.0 + fStack_210 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar44) {
          iVar44 = 0x7f;
        }
        *(char *)(lVar47 + 4 + lVar34) = (char)iVar43;
        if (iVar44 < -0x7f) {
          iVar44 = iVar42;
        }
        *(char *)(lVar47 + 5 + lVar34) = (char)iVar32;
        *(char *)(lVar47 + 6 + lVar34) = (char)iVar44;
        iVar32 = (int)ROUND(fVar3) >> 1;
        if (0x7e < iVar32) {
          iVar32 = 0x7f;
        }
        uVar41 = (undefined1)iVar32;
        if (iVar32 < -0x7f) {
          uVar41 = 0x80;
        }
        *(undefined1 *)(lVar47 + 7 + lVar34) = uVar41;
      }
      lVar34 = param_1[0x7b];
      if (*(char *)(param_1 + 0x7e) == '\x01') {
        *(undefined8 *)(lVar34 + (local_250 + lVar47) * (ulonglong)*(uint *)(param_1 + 0x7d)) =
             *(undefined8 *)((longlong)local_188 + lVar47);
      }
      else {
        fVar60 = (float)(*(uint *)((longlong)local_188 + lVar47) & DAT_1499319a0);
        if ((uint)fVar60 < 0x47800000) {
          if ((uint)fVar60 < 0x38800000) {
            fVar53 = fVar60 + 0.5;
          }
          else {
            fVar60 = (float)((int)fVar60 + 0x8000fff + (uint)(((uint)fVar60 >> 0xd & 1) != 0) >> 0xd
                            );
            fVar53 = fVar60;
          }
        }
        else {
          fVar53 = (float)((0x7f800000 < (uint)fVar60 | 0x3e) << 9);
        }
        lVar33 = (ulonglong)*(uint *)(param_1 + 0x7d) * lVar39;
        iVar32 = movmskps(fVar60,ZEXT416(*(uint *)((longlong)local_188 + lVar47)));
        *(ushort *)(lVar34 + lVar33) = (ushort)(iVar32 << 0xf) | SUB42(fVar53,0);
        uVar27 = *(uint *)((longlong)local_188 + lVar47 + 4);
        fVar60 = (float)(uVar27 & DAT_1499319a0);
        if ((uint)fVar60 < 0x47800000) {
          if ((uint)fVar60 < 0x38800000) {
            fVar53 = fVar60 + 0.5;
          }
          else {
            fVar60 = (float)((int)fVar60 + 0x8000fff + (uint)(((uint)fVar60 >> 0xd & 1) != 0) >> 0xd
                            );
            fVar53 = fVar60;
          }
        }
        else {
          fVar53 = (float)((0x7f800000 < (uint)fVar60 | 0x3e) << 9);
        }
        iVar32 = movmskps(fVar60,ZEXT416(uVar27));
        *(ushort *)(lVar34 + 2 + lVar33) = (ushort)(iVar32 << 0xf) | SUB42(fVar53,0);
      }
      *(undefined4 *)(param_1[0x8c] + (ulonglong)(uint)(*(int *)(param_1 + 0x8d) * iVar37)) =
           0xffffffff;
      lVar47 = lVar47 + 8;
      pfVar40 = pfVar40 + 3;
      lVar39 = lVar39 + 4;
      uVar38 = (ulonglong)(iVar37 + 1);
    } while (lVar47 != 0x20);
    iVar29 = *(int *)(param_1 + 0x93);
    lVar39 = (longlong)iVar29;
    *(int *)(param_1 + 0x93) = iVar29 + 3;
    local_260 = lVar48;
    local_258 = uVar46;
    fStack_21c = fStack_220;
    fStack_214 = fStack_220;
    fStack_20c = fStack_220;
    local_1f0 = lVar45;
    if ((uint)(*(int *)((longlong)param_1 + 0x49c) - iVar29) < 3) {
      FUN_1447808da(local_200,iVar29);
    }
    lVar45 = local_1f0;
    lVar48 = param_1[0x92];
    uVar27 = (uint)local_1f8;
    *(uint *)(lVar48 + lVar39 * 4) = uVar27;
    *(uint *)(lVar48 + 4 + lVar39 * 4) = uVar27 | 1;
    *(uint *)(lVar48 + 8 + lVar39 * 4) = uVar27 | 2;
    iVar29 = *(int *)(param_1 + 0x93);
    lVar48 = (longlong)iVar29;
    *(int *)(param_1 + 0x93) = iVar29 + 3;
    if ((uint)(*(int *)((longlong)param_1 + 0x49c) - iVar29) < 3) {
      FUN_1447808da(plVar28,iVar29);
    }
    lVar39 = *plVar28;
    *(uint *)(lVar39 + lVar48 * 4) = uVar27;
    *(uint *)(lVar39 + 4 + lVar48 * 4) = uVar27 | 2;
    *(uint *)(lVar39 + 8 + lVar48 * 4) = uVar27 | 3;
    lVar45 = lVar45 + 1;
    local_250 = local_250 + 0x20;
    lVar48 = local_260 + 0x10;
    local_240 = local_240 + 0x40;
    uVar46 = (ulonglong)((int)local_258 + 4);
  } while (lVar45 != 6);
  FUN_14003fbd6();
  param_1[0xd8] = DAT_14caea080;
  lVar45 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar29 = *(int *)(lVar45 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar29 != 2) {
      if (iVar29 != 1) goto LAB_144461d61;
      DVar22 = FUN_140ad26c0();
      DVar23 = GetCurrentThreadId();
      if (DVar22 == DVar23) goto LAB_144461d66;
      goto LAB_144461d90;
    }
  }
  else {
LAB_144461d61:
    if (iVar29 != 0x10) {
LAB_144461d90:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar29 = *(int *)(lVar45 + 0xc60), iVar29 == 2))
        goto LAB_144461d66;
        if (iVar29 == 1) {
          DVar22 = FUN_140ad26c0();
          DVar23 = GetCurrentThreadId();
          if (DVar22 == DVar23) goto LAB_144461d66;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar25 = (uint *)*puVar2;
        if (puVar25 != (uint *)0x0) goto LAB_144461f6c;
        while( true ) {
          uVar27 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar27 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar27 | 1;
            __tlregdtor(&DAT_1444623e5);
          }
          lVar45 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar24 = *(undefined4 **)(lVar45 + 0x310);
          *(undefined8 *)(lVar45 + 0x310) = 0;
          if (puVar24 == (undefined4 *)0x0) {
            puVar24 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar24 = 0xffffffff;
          *(undefined4 **)(puVar24 + 0x10) = puVar24 + 0x16;
          puVar24[0x12] = 0;
          *puVar2 = puVar24;
          FUN_140217a48(puVar2);
          puVar25 = (uint *)*puVar2;
LAB_144461f6c:
          puVar35 = (undefined8 *)(*(longlong *)(puVar25 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar30 = (uint *)(puVar35 + 0x16);
          uVar27 = puVar25[0x12];
          if (puVar30 <= puVar25 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar25 + 0x10) = puVar25 + 0x4000;
            LOCK();
            uVar5 = *puVar25;
            *puVar25 = *puVar25 + uVar27 + 1;
            UNLOCK();
            if ((uVar5 ^ uVar27) != 0xffffffff) break;
            puVar25 = (uint *)*puVar2;
            *puVar25 = 0xffffffff;
            *(uint **)(puVar25 + 0x10) = puVar25 + 0x16;
            puVar25[0x12] = 0;
            *puVar2 = puVar25;
            puVar35 = (undefined8 *)((longlong)puVar25 + 0x5fU & 0xfffffffffffffff8);
            puVar30 = (uint *)(puVar35 + 0x16);
            uVar27 = 0;
            if (puVar30 <= puVar25 + 0x4000) {
              uVar27 = 1;
              goto LAB_144461fec;
            }
          }
        }
        uVar27 = uVar27 + 1;
LAB_144461fec:
        *(uint **)(puVar25 + 0x10) = puVar30;
        puVar25[0x12] = uVar27;
        iVar29 = 0;
        FUN_1447247dc(puVar35,0);
        *puVar35 = &PTR_FUN_14bac25c0;
        puVar35[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar27 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar27 < 2) {
            uVar46 = (ulonglong)(byte)(&DAT_149e38edc)[uVar27];
            iVar29 = 0;
          }
          else {
            uVar46 = 2;
          }
        }
        else {
          iVar29 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar46 = 5;
        }
        if (*(code **)(puVar35[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar35[0xe] + 0x18))(puVar35 + 0xe,puVar35 + 9);
        }
        puVar35[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar35[9] = puVar35;
        puVar35[10] = puVar35;
        lVar45 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar45 == 0) {
          uVar38 = 1;
          if ((char)uVar46 != '\x06') {
            uVar38 = uVar46;
          }
          uVar46 = uVar38;
          uVar26 = 0;
        }
        else {
          if ((char)uVar46 == '\x06') {
            uVar46 = *(ulonglong *)(lVar45 + 0x38) >> 0x3b;
          }
          uVar26 = *(undefined8 *)(lVar45 + 0x30);
        }
        puVar35[0xf] = uVar26;
        puVar35[0x10] = uVar46 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar35 + 0x1c) = iVar29;
        if (puVar35 == (undefined8 *)0x0) {
          local_138 = (undefined1 *)CONCAT71(local_138._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar35 + 1) = *(int *)(puVar35 + 1) + 1;
          UNLOCK();
          local_138 = (undefined1 *)CONCAT71(local_138._1_7_,1);
          FUN_1447439e4(puVar35);
          LOCK();
          piVar1 = (int *)(puVar35 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar35)(puVar35,1);
          }
        }
      }
      else {
        local_128 = (longlong *)0x0;
        local_118 = &PTR_LAB_14bac2560;
        local_138 = &LAB_1490cd804;
        local_268 = &local_138;
        uStack_110 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"FUsdCardsSceneProxyUploadBuffer",&DAT_14cbfe80c);
        if (local_138 != (undefined1 *)0x0) {
          plVar28 = local_128;
          if (local_128 == (longlong *)0x0) {
            plVar28 = &local_118;
          }
          (**(code **)(*plVar28 + 0x10))();
        }
      }
      goto LAB_144461e43;
    }
  }
LAB_144461d66:
  FUN_1484b585e(local_248);
LAB_144461e43:
  if ((local_f0 ^ (ulonglong)local_288) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144462250 FUN_144462250 body=404 status=ok
// SIG undefined FUN_144462250(void)

void FUN_144462250(longlong *param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  byte local_78;
  undefined4 local_70;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = (int)param_2[1];
  if (0 < iVar2) {
    local_60 = param_1 + 0x20;
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar5 = 0;
    do {
      if ((param_4 >> ((uint)lVar5 & 0x1f) & 1) != 0) {
        lVar3 = *(longlong *)(param_5 + 0x60);
        if (*(longlong *)(param_5 + 0x60) == 0) {
          lVar3 = param_5 + 0x50;
        }
        lVar3 = *(longlong *)(lVar3 + lVar5 * 8);
        if (lVar3 != 0) {
          iVar2 = *(int *)(lVar1 + 0xc60);
          if (((iVar2 != 0x40000002) && (iVar2 == 1)) && (DAT_14c86a9f8 != '\0')) {
            FUN_140ad26c0();
            GetCurrentThreadId();
          }
          if (((*(byte *)((longlong)param_1 + 0x6c) & 0x20) != 0) &&
             ((longlong)(int)param_1[0x1e] != 0)) {
            uVar4 = 0;
            do {
              if (*(longlong *)(param_1[0x1d] + uVar4) ==
                  *(longlong *)(*(longlong *)(*param_2 + lVar5 * 8) + 0x4c0)) {
                if ((~uVar4 & 0x7fffffff8) != 0) {
                  local_78 = *(byte *)((longlong)param_1 + 0x6d) >> 3;
                  goto LAB_14446235a;
                }
                break;
              }
              uVar4 = uVar4 + 8;
            } while ((longlong)(int)param_1[0x1e] * 8 != uVar4);
          }
          local_78 = *(byte *)((longlong)param_1 + 0x6d);
LAB_14446235a:
          local_78 = local_78 & 7;
          local_58 = (undefined4)param_1[0x5a];
          uStack_54 = *(undefined4 *)((longlong)param_1 + 0x2d4);
          uStack_50 = (undefined4)param_1[0x5b];
          uStack_4c = *(undefined4 *)((longlong)param_1 + 0x2dc);
          local_70 = DAT_14c764a44;
          (**(code **)(*param_1 + 0x240))(param_1,lVar3,local_60,&local_58);
          iVar2 = (int)param_2[1];
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14446240c FUN_14446240c body=282 status=ok
// SIG undefined FUN_14446240c(void)

undefined8 * FUN_14446240c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&DAT_1444623e5);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 144462526 FUN_144462526 body=1663 status=ok
// SIG undefined FUN_144462526(void)

void FUN_144462526(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined1 auStack_228 [32];
  undefined1 *local_208;
  byte *local_200;
  longlong local_1f8;
  longlong local_1f0;
  byte local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8;
  byte local_1d0;
  longlong local_1c8;
  longlong local_1b8;
  undefined8 *local_1b0;
  longlong *local_1a8;
  int local_1a0;
  uint local_19c;
  int *local_198;
  longlong local_190;
  longlong *local_188;
  longlong local_180;
  byte local_171;
  undefined1 local_170 [7];
  undefined1 local_169;
  undefined1 local_168 [128];
  undefined1 local_e8 [136];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_200 = &local_171;
  local_208 = local_170;
  local_1a8 = param_2;
  (**(code **)(**(longlong **)(param_1 + 0x210) + 0x238))
            (*(longlong **)(param_1 + 0x210),*(undefined8 *)(param_1 + 0x218),&local_169,local_e8);
  bVar9 = *(byte *)(param_1 + 0x75);
  bVar4 = 1;
  if (bVar9 < 0x40) {
    if ((bVar9 & 8) == 0) {
      bVar4 = 0;
    }
    else {
      bVar4 = bVar9 >> 2 & 1;
    }
  }
  local_171 = local_171 | bVar4;
  plVar6 = (longlong *)param_5[0x1d];
  puVar18 = (undefined8 *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8)
  ;
  puVar5 = (uint *)*puVar18;
  local_19c = param_4;
  if (puVar5 != (uint *)0x0) goto LAB_144462604;
  while( true ) {
    FUN_14472e504(puVar18);
    puVar5 = (uint *)*puVar18;
LAB_144462604:
    bVar9 = local_171;
    puVar13 = (undefined8 *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar11 = puVar5[0x12];
    if (puVar13 + 8 <= puVar5 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar10 = *puVar5;
      *puVar5 = *puVar5 + uVar11 + 1;
      UNLOCK();
      if ((uVar10 ^ uVar11) != 0xffffffff) break;
      puVar5 = (uint *)*puVar18;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar18 = puVar5;
      puVar13 = (undefined8 *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
      uVar11 = 0;
      if (puVar13 + 8 <= puVar5 + 0x4000) {
        uVar11 = 1;
        goto LAB_14446267a;
      }
    }
  }
  uVar11 = uVar11 + 1;
LAB_14446267a:
  *(undefined8 **)(puVar5 + 0x10) = puVar13 + 9;
  puVar5[0x12] = uVar11;
  *(int *)(puVar13 + -1) = ((int)puVar13 + -8) - (int)puVar5;
  *(undefined4 *)((longlong)puVar13 + -4) = 0x40;
  puVar13[1] = 0;
  *puVar13 = &PTR_FUN_14a5a8d50;
  lVar8 = *plVar6;
  do {
    puVar13[1] = lVar8;
    LOCK();
    lVar17 = *plVar6;
    bVar19 = lVar8 == lVar17;
    if (bVar19) {
      *plVar6 = (longlong)puVar13;
      lVar17 = lVar8;
    }
    UNLOCK();
    lVar8 = lVar17;
  } while (!bVar19);
  local_1b0 = puVar13 + 2;
  puVar13[2] = &PTR_FUN_14aa71480;
  *(undefined4 *)(puVar13 + 4) = 0xffffffff;
  *(undefined2 *)((longlong)puVar13 + 0x24) = 0x105;
  *(undefined1 *)((longlong)puVar13 + 0x26) = 0;
  puVar13[3] = &PTR_FUN_14a1ca300;
  *(undefined4 *)(puVar13 + 5) = 2;
  puVar13[6] = 0;
  puVar13[7] = 0;
  bVar4 = *(byte *)(param_1 + 0x77);
  local_1b8 = param_1;
  FUN_1447fea8d(local_168,param_1 + 0x2a0,param_1 + 0x100);
  lVar8 = local_1b8;
  local_1d0 = bVar9;
  local_1d8 = local_169;
  local_1e0 = 1;
  local_208 = (undefined1 *)(param_1 + 0x180);
  local_200 = (byte *)(param_1 + 0x180);
  local_1f8 = param_1 + 0x1b8;
  local_1f0 = param_1 + 0x1b8;
  local_1e8 = bVar4 >> 6 & 1;
  local_1c8 = param_1 + 0x30;
  FUN_147ceeaf2(local_1b0,param_5[0x22],local_168);
  if (0 < (int)local_1a8[1]) {
    local_188 = param_5 + 10;
    local_190 = lVar8 + 800;
    local_198 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
    puVar18 = (undefined8 *)0x0;
    do {
      if ((local_19c >> ((uint)puVar18 & 0x1f) & 1) != 0) {
        plVar6 = (longlong *)param_5[0xc];
        if ((longlong *)param_5[0xc] == (longlong *)0x0) {
          plVar6 = local_188;
        }
        if (plVar6[(longlong)puVar18] != 0) {
          if (((*local_198 != 0x40000002) && (*local_198 == 1)) && (DAT_14c86a9f8 != '\0')) {
            FUN_140ad26c0();
            GetCurrentThreadId();
          }
          lVar17 = *(longlong *)(lVar8 + 0x22a0);
          if (*(longlong *)(lVar8 + 0x22a0) == 0) {
            lVar17 = local_190;
          }
          if ((longlong)*(int *)(lVar8 + 0x22a8) != 0) {
            local_180 = (longlong)*(int *)(lVar8 + 0x22a8) * 0x540 + lVar17;
            local_1b0 = puVar18;
            do {
              iVar12 = (int)param_5[1];
              iVar2 = (int)param_5[2];
              iVar3 = (iVar2 + 0x44) / 0x44;
              *(int *)(param_5 + 2) = iVar2 + 1;
              if (iVar12 < iVar3) {
                do {
                  local_1a0 = iVar12;
                  lVar8 = FUN_14001cc68(0x3fc0,0x10);
                  lVar16 = 0;
                  do {
                    *(undefined8 *)(lVar8 + 0xa8 + lVar16) = 0;
                    puVar18 = (undefined8 *)(lVar8 + 0xb8 + lVar16);
                    *puVar18 = 0;
                    puVar18[1] = 0;
                    *(undefined8 *)(lVar8 + 200 + lVar16) = 0;
                    *(undefined8 *)(lVar8 + 0xd0 + lVar16) = 0xffffffff;
                    *(undefined8 *)(lVar8 + 0xd8 + lVar16) = 0xff0000ffffffff;
                    *(undefined1 *)(lVar8 + 0xe0 + lVar16) = 0;
                    *(undefined4 *)(lVar8 + 0xe4 + lVar16) = 0x40c00f07;
                    pbVar1 = (byte *)(lVar8 + 0xe8 + lVar16);
                    *pbVar1 = *pbVar1 & 0xfc;
                    *(undefined1 **)(lVar8 + 0xb0 + lVar16) = &DAT_100000001;
                    FUN_14470b9e0(lVar8 + lVar16,1);
                    lVar16 = lVar16 + 0xf0;
                  } while (lVar16 != 0x3fc0);
                  iVar12 = (int)param_5[1];
                  *(uint *)(param_5 + 1) = iVar12 + 1U;
                  if (*(uint *)((longlong)param_5 + 0xc) < iVar12 + 1U) {
                    FUN_14002baf6(param_5,iVar12);
                  }
                  *(longlong *)(*param_5 + (longlong)iVar12 * 8) = lVar8;
                  iVar12 = local_1a0 + 1;
                } while (iVar12 != iVar3);
              }
              lVar16 = *(longlong *)(*param_5 + (longlong)(iVar2 / 0x44) * 8);
              lVar14 = (ulonglong)(uint)(iVar2 % 0x44) * 0xf0;
              *(longlong *)(lVar16 + 0xb8 + lVar14) = lVar17 + 0x140;
              if (*(longlong **)(lVar17 + 0x360) == (longlong *)0x0) {
                uVar7 = 0;
              }
              else {
                uVar7 = (**(code **)(**(longlong **)(lVar17 + 0x360) + 0x2f0))();
              }
              puVar18 = local_1b0;
              lVar8 = local_1b8;
              lVar16 = lVar16 + lVar14;
              *(undefined8 *)(lVar16 + 0xc0) = uVar7;
              uVar10 = (*(byte *)(local_1b8 + 0x6b) & 1) << 6;
              uVar11 = *(uint *)(lVar16 + 0xe4);
              *(uint *)(lVar16 + 0xe4) = uVar11 & 0xfffe3fbf | uVar10;
              if (((*(byte *)(local_1b8 + 0x6c) & 0x20) != 0) &&
                 ((longlong)*(int *)(local_1b8 + 0xf0) != 0)) {
                uVar15 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(local_1b8 + 0xe8) + uVar15) ==
                      *(longlong *)(*(longlong *)(*local_1a8 + (longlong)local_1b0 * 8) + 0x4c0)) {
                    if ((~uVar15 & 0x7fffffff8) != 0) {
                      bVar9 = *(byte *)(local_1b8 + 0x6d) >> 3;
                      goto LAB_1444629c7;
                    }
                    break;
                  }
                  uVar15 = uVar15 + 8;
                } while ((longlong)*(int *)(local_1b8 + 0xf0) * 8 != uVar15);
              }
              bVar9 = *(byte *)(local_1b8 + 0x6d);
LAB_1444629c7:
              *(uint *)(lVar16 + 0xe4) = uVar11 & 0xfff03fbf | uVar10 | (bVar9 & 7) << 0x11;
              lVar14 = *(longlong *)(lVar16 + 0xa8);
              if (*(longlong *)(lVar16 + 0xa8) == 0) {
                lVar14 = lVar16;
              }
              *(longlong *)(lVar14 + 0x18) = lVar17 + 0x118;
              *(undefined8 **)(lVar14 + 8) = puVar13 + 3;
              *(undefined4 *)(lVar14 + 0x58) = 0;
              *(int *)(lVar14 + 0x5c) = *(int *)(lVar17 + 0x138) / 3;
              *(undefined4 *)(lVar14 + 0x68) = 0;
              *(int *)(lVar14 + 0x6c) = *(int *)(lVar17 + 0xcc) + -1;
              FUN_1436a14f8(param_5,(ulonglong)local_1b0 & 0xffffffff,lVar16);
              lVar17 = lVar17 + 0x540;
            } while (lVar17 != local_180);
          }
        }
      }
      puVar18 = (undefined8 *)((longlong)puVar18 + 1);
    } while ((longlong)puVar18 < (longlong)(int)local_1a8[1]);
  }
  if ((local_60 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144462ba6 FUN_144462ba6 body=282 status=ok
// SIG undefined FUN_144462ba6(void)

undefined8 * FUN_144462ba6(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&DAT_1444623e5);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 144462cc0 FUN_144462cc0 body=447 status=ok
// SIG undefined FUN_144462cc0(void)

longlong FUN_144462cc0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  undefined2 *puVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 uStack_70;
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar3 = *param_1;
    FUN_14475cc44(lVar2 + 0x38,&local_60);
    puVar5 = local_60;
    if (local_58 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    lVar4 = FUN_1490c4b2f(puVar5);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar1 = lVar2 + 0x10;
      local_78 = (void *)0x0;
      uStack_70 = 0;
      _Src = (void *)FUN_14031511a(lVar1);
      FUN_140393c76(&local_78,*(undefined4 *)(lVar2 + 0x18),1);
      memcpy(local_78,_Src,(longlong)(int)uStack_70);
      *(undefined1 *)(lVar2 + 0x23) = 0;
      if ((*(byte *)(lVar2 + 0x24) & 8) != 0) {
        FUN_1400ea36e(lVar1,lVar1);
      }
      if (*(int *)(lVar2 + 0x60) < 2) {
        local_80 = 0;
      }
      else {
        FUN_1446f470e(&local_80,*(undefined8 *)(lVar2 + 0x58),1);
      }
      local_98 = 0;
      uStack_90 = 0;
      local_a0 = 0;
      local_a8 = 0;
      lVar4 = FUN_140584627(lVar3,lVar4,local_80,*(uint *)(lVar2 + 0x68) | 0x40);
      FUN_1490c5ae8(lVar4,&local_78);
      local_88 = lVar4;
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar4);
      }
      local_48 = &local_88;
      local_50 = lVar2;
      FUN_1490cdfc2(lVar3 + 0x38,local_3c);
      FUN_1490d12fa(lVar3 + 0x88,lVar2);
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 144462e98 FUN_144462e98 body=5 status=ok
// SIG undefined FUN_144462e98(void)

longlong FUN_144462e98(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144462e9e FUN_144462e9e body=12 status=ok
// SIG undefined FUN_144462e9e(void)

void FUN_144462e9e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144462ea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144462eaa FUN_144462eaa body=29 status=ok
// SIG undefined FUN_144462eaa(void)

undefined8 FUN_144462eaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144462ec8 FUN_144462ec8 body=1637 status=ok
// SIG undefined FUN_144462ec8(void)

void FUN_144462ec8(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  void *pvVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  uint *puVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  ulonglong local_98;
  uint *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar20 = *param_1;
  local_88 = *(undefined4 *)param_2;
  uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_80 = *(undefined4 *)(param_2 + 1);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_2 + 3);
  lVar26 = (longlong)local_70;
  pvVar3 = (void *)param_2[2];
  if (lVar26 == 0) {
    local_6c = 0;
    local_68 = *param_2;
    uStack_60 = param_2[1];
    local_50 = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar3,lVar26 * 2);
    pvVar3 = local_78;
    lVar26 = (longlong)local_70;
    local_68 = CONCAT44(uStack_84,local_88);
    uStack_60 = CONCAT44(uStack_7c,uStack_80);
    local_58 = (undefined2 *)0x0;
    local_50 = local_70;
    if (lVar26 != 0) {
      FUN_1446dd670(&local_58,local_70,0);
      memcpy(local_58,pvVar3,lVar26 * 2);
      iVar8 = local_50;
      goto LAB_144462fbe;
    }
  }
  local_58 = (undefined2 *)0x0;
  local_4c = 0;
  iVar8 = 0;
LAB_144462fbe:
  uVar19 = (uint)((ulonglong)uStack_60 >> 0x10);
  uVar16 = (uint)uStack_60 & 0xffff;
  uVar18 = (uint)((ulonglong)local_68 >> 0x10);
  uVar23 = (uint)local_68 & 0xffff;
  uVar18 = ((uint)local_68 << 0x10 | uVar23) + (int)((ulonglong)local_68 >> 0x20) +
           (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar23 >> 4);
  uVar18 = (uVar18 >> 2) + 0x9e3779b9 +
           ((uint)uStack_60 << 0x10 | uVar16) + (int)((ulonglong)uStack_60 >> 0x20) +
           (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar16 >> 4) + uVar18 * 0x40 ^ uVar18;
  uVar16 = uVar18 >> 0xd ^ -uVar18;
  uVar19 = uVar16 << 8 ^ (-0x61c88647 - uVar18) - uVar16;
  uVar18 = uVar19 >> 0xd ^ (uVar18 - uVar16) - uVar19;
  uVar16 = uVar18 >> 0xc ^ (uVar16 - uVar19) - uVar18;
  uVar19 = uVar16 << 0x10 ^ (uVar19 - uVar18) - uVar16;
  uVar18 = uVar19 >> 5 ^ (uVar18 - uVar16) - uVar19;
  uVar22 = uVar18 >> 3 ^ (uVar16 - uVar19) - uVar18;
  uVar16 = uVar22 << 10 ^ (uVar19 - uVar18) - uVar22;
  uVar23 = 0;
  uVar19 = iVar8 - 1;
  if (iVar8 == 0) {
    uVar19 = uVar23;
  }
  if (0 < (int)uVar19) {
    puVar9 = &DAT_149dfb77a;
    if (iVar8 != 0) {
      puVar9 = local_58;
    }
    lVar26 = 0;
    uVar23 = 0;
    do {
      uVar15 = ((uint)(ushort)puVar9[lVar26] + (uint)(0x19 < (ushort)puVar9[lVar26] - 0x61) * 0x20)
               - 0x20;
      uVar23 = uVar23 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar23 ^ uVar15) & 0xff) * 4);
      uVar23 = uVar23 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar23 & 0xff ^ uVar15 >> 8 & 0xff) * 4);
      lVar26 = lVar26 + 1;
    } while (uVar19 != (uint)lVar26);
  }
  uVar19 = uVar23 >> 0xd ^ (uVar16 >> 0xf ^ uVar18 - (uVar22 + uVar16)) - uVar23;
  uVar16 = uVar19 << 8 ^ (-0x61c88647 - uVar23) - uVar19;
  uVar18 = uVar16 >> 0xd ^ (uVar23 - uVar19) - uVar16;
  uVar23 = uVar18 >> 0xc ^ (uVar19 - uVar16) - uVar18;
  uVar19 = uVar23 << 0x10 ^ (uVar16 - uVar18) - uVar23;
  uVar16 = uVar19 >> 5 ^ (uVar18 - uVar23) - uVar19;
  uVar18 = uVar16 >> 3 ^ (uVar23 - uVar19) - uVar16;
  uVar19 = uVar18 << 10 ^ (uVar19 - uVar16) - uVar18;
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar10 = (longlong *)(lVar20 + 0xd8);
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  iVar8 = FUN_1490d0238(plVar10,uVar16 - (uVar18 + uVar19) ^ uVar19 >> 0xf,param_2);
  if (((iVar8 != -1) &&
      (plVar10 = (longlong *)((longlong)iVar8 * 0x10 + *plVar10), plVar10 != (longlong *)0x0)) &&
     (lVar26 = *plVar10, lVar26 != -0x30)) {
    iVar8 = *(int *)(lVar26 + 0x38) + -1;
    if (*(int *)(lVar26 + 0x38) == 0) {
      iVar8 = 0;
    }
    if (0 < iVar8) {
      iVar24 = 0;
      do {
        iVar24 = iVar24 + 1;
      } while (iVar8 != iVar24);
    }
    iVar8 = FUN_1490d10fe(lVar20 + 0x88);
    if (iVar8 != -1) {
      local_90 = (uint *)(lVar26 + 0xc0);
      uVar19 = *(uint *)(lVar26 + 0xd8);
      local_a0 = param_1;
      if (uVar19 == 0) {
        uVar27 = 1;
        uVar25 = 0;
        iVar8 = 0;
        uVar18 = 0;
      }
      else {
        puVar11 = *(uint **)(lVar26 + 0xd0);
        if (*(uint **)(lVar26 + 0xd0) == (uint *)0x0) {
          puVar11 = local_90;
        }
        uVar18 = *puVar11;
        if (uVar18 == 0) {
          iVar8 = uVar19 + 0x1e;
          if (-1 < (int)(uVar19 - 1)) {
            iVar8 = uVar19 - 1;
          }
          uVar25 = 0;
          uVar27 = (ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            uVar27 = uVar25;
          }
          iVar8 = 0;
          do {
            if (uVar27 == uVar25) goto LAB_144463385;
            iVar8 = iVar8 + 0x20;
            uVar18 = puVar11[uVar25 + 1];
            uVar25 = uVar25 + 1;
          } while (uVar18 == 0);
        }
        else {
          uVar25 = 0;
          iVar8 = 0;
        }
        uVar27 = (ulonglong)(-uVar18 & uVar18);
        uVar2 = uVar27 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar18 = (iVar8 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if ((int)uVar19 <= (int)uVar18) {
          uVar18 = uVar19;
        }
      }
      if (uVar18 != uVar19) {
        uVar16 = 0xffffffff;
        local_98 = (ulonglong)uVar19;
        do {
          lVar20 = *(longlong *)(lVar26 + 0xb0);
          puVar17 = (undefined8 *)local_a0[1];
          pcVar4 = (code *)*puVar17;
          plVar10 = puVar17 + 4;
          if ((longlong *)puVar17[2] != (longlong *)0x0) {
            plVar10 = (longlong *)puVar17[2];
          }
          uVar12 = (**(code **)(*plVar10 + 8))();
          (*pcVar4)(uVar12,(longlong)(int)uVar18 * 0x28 + lVar20);
          uVar16 = ~(uint)uVar27 & uVar16;
          puVar11 = *(uint **)(lVar26 + 0xd0);
          if (*(uint **)(lVar26 + 0xd0) == (uint *)0x0) {
            puVar11 = local_90;
          }
          uVar19 = *(uint *)(lVar26 + 0xd8);
          iVar24 = (int)uVar25;
          lVar20 = (longlong)iVar24;
          uVar18 = puVar11[lVar20] & uVar16;
          if (uVar18 == 0) {
            iVar13 = uVar19 + 0x1e;
            if (-1 < (int)(uVar19 - 1)) {
              iVar13 = uVar19 - 1;
            }
            iVar13 = iVar13 >> 5;
            iVar8 = iVar8 + 0x20;
            iVar14 = iVar13;
            if (iVar13 < iVar24) {
              iVar14 = iVar24;
            }
            if (iVar24 < iVar13) {
              lVar21 = 0;
              do {
                uVar18 = puVar11[lVar20 + lVar21 + 1];
                if (uVar18 != 0) {
                  uVar25 = (ulonglong)(iVar24 + (int)lVar21 + 1);
                  uVar16 = 0xffffffff;
                  goto LAB_1444634c5;
                }
                iVar8 = iVar8 + 0x20;
                lVar21 = lVar21 + 1;
              } while (iVar14 - lVar20 != lVar21);
              uVar16 = 0xffffffff;
              iVar24 = iVar14;
            }
            uVar25 = (ulonglong)(iVar24 + 1);
            uVar18 = uVar19;
          }
          else {
LAB_1444634c5:
            uVar27 = (ulonglong)(-uVar18 & uVar18);
            uVar2 = uVar27 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            uVar18 = (iVar8 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
            if ((int)uVar19 <= (int)uVar18) {
              uVar18 = uVar19;
            }
          }
        } while (uVar18 != (uint)local_98);
      }
LAB_144463385:
      plVar10 = (longlong *)local_a0[2];
      iVar8 = (int)plVar10[1];
      *(uint *)(plVar10 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar10 + 0xc) < iVar8 + 1U) {
        FUN_1406f071e(plVar10,iVar8);
      }
      lVar20 = *plVar10;
      lVar26 = (longlong)iVar8 * 0x20;
      uVar5 = *(undefined4 *)((longlong)param_2 + 4);
      uVar6 = *(undefined4 *)(param_2 + 1);
      uVar7 = *(undefined4 *)((longlong)param_2 + 0xc);
      puVar1 = (undefined4 *)(lVar20 + lVar26);
      *puVar1 = *(undefined4 *)param_2;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      *(undefined8 *)(lVar20 + 0x10 + lVar26) = 0;
      iVar8 = *(int *)(param_2 + 3);
      pvVar3 = (void *)param_2[2];
      *(int *)(lVar20 + 0x18 + lVar26) = iVar8;
      if ((longlong)iVar8 == 0) {
        *(undefined4 *)(lVar20 + lVar26 + 0x1c) = 0;
      }
      else {
        puVar17 = (undefined8 *)(lVar26 + lVar20 + 0x10);
        FUN_1446dd670(puVar17,iVar8,0);
        memcpy((void *)*puVar17,pvVar3,(longlong)iVar8 * 2);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144463560 FUN_144463560 body=29 status=ok
// SIG undefined FUN_144463560(void)

undefined8 FUN_144463560(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14446357e FUN_14446357e body=1534 status=ok
// SIG undefined FUN_14446357e(void)

undefined8 FUN_14446357e(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined8 uVar23;
  longlong lVar24;
  undefined1 auStack_f8 [36];
  int local_d4;
  ulonglong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  uint local_ac;
  uint *local_a8;
  code *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar16 = *(uint *)(param_2 + 0xf8);
  local_98 = param_1;
  if (uVar16 == 0) {
    local_b8 = 1;
    uVar17 = 0;
    iVar20 = 0;
    uVar4 = 0;
  }
  else {
    puVar6 = *(uint **)(param_2 + 0xf0);
    if (*(uint **)(param_2 + 0xf0) == (uint *)0x0) {
      puVar6 = (uint *)(param_2 + 0xe0);
    }
    uVar4 = *puVar6;
    if (uVar4 == 0) {
      iVar20 = uVar16 + 0x1e;
      if (-1 < (int)(uVar16 - 1)) {
        iVar20 = uVar16 - 1;
      }
      uVar17 = 0;
      uVar14 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar14 = uVar17;
      }
      iVar20 = 0;
      do {
        if (uVar14 == uVar17) goto LAB_144463b3f;
        iVar20 = iVar20 + 0x20;
        uVar4 = puVar6[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar17 = 0;
      iVar20 = 0;
    }
    local_b8 = (ulonglong)(-uVar4 & uVar4);
    uVar14 = local_b8 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar4 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if ((int)uVar16 <= (int)uVar4) {
      uVar4 = uVar16;
    }
  }
  uVar23 = 0;
  if (uVar4 != uVar16) {
    local_90 = (longlong *)(*param_1 + 0xd8);
    uVar11 = 0xffffffff;
    local_d0 = (ulonglong)uVar16;
    local_c8 = param_2;
    local_a8 = (uint *)(param_2 + 0xe0);
    do {
      lVar18 = *(longlong *)(param_2 + 0xd0);
      lVar7 = (longlong)(int)uVar4;
      puVar1 = (undefined8 *)(lVar18 + lVar7 * 0x28);
      local_88 = *(undefined4 *)puVar1;
      uStack_84 = *(undefined4 *)((longlong)puVar1 + 4);
      uStack_80 = *(undefined4 *)(puVar1 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar1 + 0xc);
      local_78 = (void *)0x0;
      local_70 = *(int *)(lVar18 + 0x18 + lVar7 * 0x28);
      lVar24 = (longlong)local_70;
      pvVar2 = *(void **)(lVar18 + 0x10 + lVar7 * 0x28);
      local_d4 = iVar20;
      local_c0 = uVar17;
      local_ac = uVar11;
      if (lVar24 == 0) {
        local_6c = 0;
        local_50 = 0;
        local_68 = *puVar1;
        uStack_60 = puVar1[1];
LAB_144463755:
        local_58 = (undefined2 *)0x0;
        local_4c = 0;
        iVar20 = 0;
      }
      else {
        FUN_1446dd670(&local_78,local_70,0);
        memcpy(local_78,pvVar2,lVar24 * 2);
        pvVar2 = local_78;
        lVar24 = (longlong)local_70;
        local_68 = CONCAT44(uStack_84,local_88);
        uStack_60 = CONCAT44(uStack_7c,uStack_80);
        local_58 = (undefined2 *)0x0;
        local_50 = local_70;
        if (lVar24 == 0) goto LAB_144463755;
        FUN_1446dd670(&local_58,local_70,0);
        memcpy(local_58,pvVar2,lVar24 * 2);
        iVar20 = local_50;
      }
      uVar10 = uStack_60;
      uVar23 = local_68;
      uVar16 = 0;
      iVar5 = iVar20 + -1;
      if (iVar20 == 0) {
        iVar5 = 0;
      }
      if (0 < iVar5) {
        puVar8 = local_58;
        if (iVar20 == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        lVar24 = 0;
        uVar17 = 0;
        do {
          uVar16 = ((uint)(0x19 < (ushort)puVar8[lVar24] - 0x61) * 0x20 +
                   (uint)(ushort)puVar8[lVar24]) - 0x20;
          uVar4 = (uint)(uVar17 >> 8) ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar17 ^ uVar16) & 0xff) * 4);
          uVar16 = uVar4 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar4 & 0xff ^ uVar16 >> 8 & 0xff) * 4);
          uVar17 = (ulonglong)uVar16;
          lVar24 = lVar24 + 1;
        } while (iVar5 != (int)lVar24);
      }
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      plVar9 = local_90;
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar4 = (uint)((ulonglong)uVar10 >> 0x10);
      uVar15 = (uint)uVar10 & 0xffff;
      uVar11 = (uint)((ulonglong)uVar23 >> 0x10);
      uVar21 = (uint)uVar23 & 0xffff;
      uVar21 = ((uint)uVar23 << 0x10 | uVar21) + (int)((ulonglong)uVar23 >> 0x20) +
               (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar21 >> 4);
      uVar21 = (uVar21 >> 2) + 0x9e3779b9 +
               ((uint)uVar10 << 0x10 | uVar15) + (int)((ulonglong)uVar10 >> 0x20) +
               (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4) + uVar21 * 0x40 ^ uVar21;
      uVar11 = uVar21 >> 0xd ^ -uVar21;
      uVar4 = uVar11 << 8 ^ (-0x61c88647 - uVar21) - uVar11;
      uVar21 = uVar4 >> 0xd ^ (uVar21 - uVar11) - uVar4;
      uVar15 = uVar21 >> 0xc ^ (uVar11 - uVar4) - uVar21;
      uVar11 = uVar15 << 0x10 ^ (uVar4 - uVar21) - uVar15;
      uVar4 = uVar11 >> 5 ^ (uVar21 - uVar15) - uVar11;
      uVar15 = uVar4 >> 3 ^ (uVar15 - uVar11) - uVar4;
      uVar11 = uVar15 << 10 ^ (uVar11 - uVar4) - uVar15;
      uVar4 = uVar16 >> 0xd ^ (uVar11 >> 0xf ^ uVar4 - (uVar15 + uVar11)) - uVar16;
      uVar11 = uVar4 << 8 ^ (-0x61c88647 - uVar16) - uVar4;
      uVar22 = (uVar16 - uVar4) - uVar11;
      uVar15 = uVar11 >> 0xd ^ uVar22;
      uVar21 = uVar15 >> 0xc ^ (uVar4 - uVar11) - uVar15;
      uVar16 = uVar21 << 0x10 ^ (uVar11 - uVar15) - uVar21;
      uVar4 = uVar16 >> 5 ^ (uVar15 - uVar21) - uVar16;
      uVar11 = uVar4 >> 3 ^ (uVar21 - uVar16) - uVar4;
      uVar16 = uVar11 << 10 ^ (uVar16 - uVar4) - uVar11;
      iVar5 = FUN_1490d0238(plVar9,uVar16 >> 0xf ^ uVar4 - (uVar11 + uVar16),lVar18 + lVar7 * 0x28);
      puVar6 = local_a8;
      param_2 = local_c8;
      uVar17 = local_d0;
      iVar20 = local_d4;
      if ((iVar5 != -1) &&
         (plVar9 = (longlong *)((longlong)iVar5 * 0x10 + *plVar9), plVar9 != (longlong *)0x0)) {
        lVar18 = *plVar9;
        if (lVar18 + 0x30 != 0) {
          uVar23 = CONCAT71((uint7)(uint3)(uVar22 >> 8),1);
          if (*(int *)(lVar18 + 0x18c) < *(int *)(lVar18 + 0x160)) goto LAB_144463b42;
          puVar1 = (undefined8 *)local_98[1];
          local_a0 = (code *)*puVar1;
          plVar9 = puVar1 + 4;
          if ((longlong *)puVar1[2] != (longlong *)0x0) {
            plVar9 = (longlong *)puVar1[2];
          }
          uVar10 = (**(code **)(*plVar9 + 8))();
          cVar3 = (*local_a0)(uVar10,lVar18 + 0x30);
          if (cVar3 != '\0') goto LAB_144463b42;
        }
      }
      uVar16 = (uint)uVar17;
      uVar11 = local_ac & ~(uint)local_b8;
      puVar19 = *(uint **)(param_2 + 0xf0);
      if (*(uint **)(param_2 + 0xf0) == (uint *)0x0) {
        puVar19 = puVar6;
      }
      uVar15 = *(uint *)(param_2 + 0xf8);
      iVar5 = (int)local_c0;
      lVar18 = (longlong)iVar5;
      uVar4 = puVar19[lVar18] & uVar11;
      uVar17 = local_c0;
      if (uVar4 == 0) {
        iVar12 = uVar15 + 0x1e;
        if (-1 < (int)(uVar15 - 1)) {
          iVar12 = uVar15 - 1;
        }
        iVar12 = iVar12 >> 5;
        iVar20 = iVar20 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar5) {
          iVar13 = iVar5;
        }
        if (iVar5 < iVar12) {
          lVar7 = 0;
          do {
            uVar4 = puVar19[lVar18 + lVar7 + 1];
            if (uVar4 != 0) {
              uVar17 = (ulonglong)(iVar5 + (int)lVar7 + 1);
              uVar11 = 0xffffffff;
              goto LAB_144463af7;
            }
            iVar20 = iVar20 + 0x20;
            lVar7 = lVar7 + 1;
          } while (iVar13 - lVar18 != lVar7);
          uVar11 = 0xffffffff;
          lVar18 = (longlong)iVar13;
        }
        uVar17 = lVar18 + 1U & 0xffffffff;
        uVar16 = (uint)local_d0;
        param_2 = local_c8;
        uVar4 = uVar15;
      }
      else {
LAB_144463af7:
        local_b8 = (ulonglong)(-uVar4 & uVar4);
        uVar14 = local_b8 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar4 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar15 <= (int)uVar4) {
          uVar4 = uVar15;
        }
      }
    } while (uVar4 != uVar16);
LAB_144463b3f:
    uVar23 = 0;
  }
LAB_144463b42:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23;
}



// FUNCTION 144463ba8 FUN_144463ba8 body=29 status=ok
// SIG undefined FUN_144463ba8(void)

undefined8 FUN_144463ba8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144463bc6 FUN_144463bc6 body=3048 status=ok
// SIG undefined FUN_144463bc6(void)

ulonglong FUN_144463bc6(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  void *pvVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  ulonglong uVar28;
  char *pcVar29;
  undefined1 auStack_128 [35];
  byte local_105;
  int local_104;
  undefined8 *local_100;
  uint local_f4;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  uint *local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 *local_68;
  int local_60;
  undefined4 local_5c;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar26 = *param_3;
  uVar28 = 0;
  uVar19 = 0;
  if (lVar26 == 0) goto LAB_144463e35;
  lVar13 = param_3[1];
  uVar23 = (uint)((ulonglong)lVar13 >> 0x10);
  uVar27 = (uint)lVar13 & 0xffff;
  uVar22 = (uint)((ulonglong)lVar26 >> 0x10);
  uVar25 = (uint)lVar26 & 0xffff;
  uVar22 = ((uint)lVar26 << 0x10 | uVar25) + (int)((ulonglong)lVar26 >> 0x20) +
           (uVar22 << 0x13 | uVar22 & 0xffff) + (uVar25 >> 4);
  uVar22 = (uint)lVar13 * 0x10000 + uVar27 + (int)((ulonglong)lVar13 >> 0x20) +
           (uVar23 << 0x13 | uVar23 & 0xffff) + (uVar27 >> 4) + -0x61c88647 +
           (uVar22 >> 2) + uVar22 * 0x40 ^ uVar22;
  uVar25 = uVar22 >> 0xd ^ -uVar22;
  uVar23 = uVar25 << 8 ^ (-0x61c88647 - uVar22) - uVar25;
  uVar27 = uVar23 >> 0xd ^ (uVar22 - uVar25) - uVar23;
  uVar22 = uVar27 >> 0xc ^ (uVar25 - uVar23) - uVar27;
  uVar23 = uVar22 << 0x10 ^ (uVar23 - uVar27) - uVar22;
  uVar25 = uVar23 >> 5 ^ (uVar27 - uVar22) - uVar23;
  uVar27 = uVar25 >> 3 ^ (uVar22 - uVar23) - uVar25;
  uVar23 = uVar27 << 10 ^ (uVar23 - uVar25) - uVar27;
  iVar9 = (int)param_3[3];
  uVar22 = iVar9 - 1;
  if (iVar9 == 0) {
    uVar22 = uVar19;
  }
  if (0 < (int)uVar22) {
    if (iVar9 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)param_3[2];
    }
    lVar26 = 0;
    uVar28 = 0;
    do {
      uVar19 = ((uint)(0x19 < (ushort)puVar12[lVar26] - 0x61) * 0x20 + (uint)(ushort)puVar12[lVar26]
               ) - 0x20;
      uVar21 = (uint)(uVar28 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar28 ^ uVar19) & 0xff) * 4);
      uVar19 = uVar21 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar21 & 0xff ^ uVar19 >> 8 & 0xff) * 4);
      uVar28 = (ulonglong)uVar19;
      lVar26 = lVar26 + 1;
    } while (uVar22 != (uint)lVar26);
  }
  lVar26 = *param_1;
  uVar23 = uVar19 >> 0xd ^ (uVar23 >> 0xf ^ uVar25 - (uVar27 + uVar23)) - uVar19;
  uVar22 = uVar23 << 8 ^ (-0x61c88647 - uVar19) - uVar23;
  uVar27 = (uVar19 - uVar23) - uVar22;
  uVar19 = uVar22 >> 0xd ^ uVar27;
  uVar23 = uVar19 >> 0xc ^ (uVar23 - uVar22) - uVar19;
  uVar22 = uVar23 << 0x10 ^ (uVar22 - uVar19) - uVar23;
  uVar25 = uVar22 >> 5 ^ (uVar19 - uVar23) - uVar22;
  uVar19 = uVar25 >> 3 ^ (uVar23 - uVar22) - uVar25;
  uVar22 = uVar19 << 10 ^ (uVar22 - uVar25) - uVar19;
  iVar9 = FUN_1403af82c(param_1[3],uVar22 >> 0xf ^ uVar25 - (uVar19 + uVar22),param_3);
  if (iVar9 != -1) {
    uVar28 = (ulonglong)CONCAT31((int3)(uVar27 >> 8),*(undefined1 *)(param_2 + 0x24));
    goto LAB_144463e35;
  }
  uVar28 = 0;
  FUN_1449774fc(param_1[3],&local_78,param_3,0);
  local_c8 = (uint *)(param_2 + 0x12);
  uVar19 = *(uint *)(param_2 + 0x15);
  local_d8 = 1;
  local_104 = 0;
  uVar22 = 0;
  local_100 = param_2;
  local_f0 = param_1;
  local_e8 = param_3;
  local_e0 = (longlong *)lVar26;
  if (uVar19 != 0) {
    puVar10 = (uint *)param_2[0x14];
    if ((uint *)param_2[0x14] == (uint *)0x0) {
      puVar10 = local_c8;
    }
    uVar22 = *puVar10;
    if (uVar22 == 0) {
      iVar9 = uVar19 + 0x1e;
      if (-1 < (int)(uVar19 - 1)) {
        iVar9 = uVar19 - 1;
      }
      uVar28 = 0;
      uVar17 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar17 = uVar28;
      }
      local_104 = 0;
      do {
        if (uVar17 == uVar28) {
          local_105 = 3;
          goto LAB_144463f50;
        }
        local_104 = local_104 + 0x20;
        uVar22 = puVar10[uVar28 + 1];
        uVar28 = uVar28 + 1;
      } while (uVar22 == 0);
    }
    else {
      uVar28 = 0;
      local_104 = 0;
    }
    local_d8 = (ulonglong)(-uVar22 & uVar22);
    uVar17 = local_d8 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar22 = (local_104 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if ((int)uVar19 <= (int)uVar22) {
      uVar22 = uVar19;
    }
  }
  local_105 = 3;
  if (uVar22 != uVar19) {
    local_b8 = (longlong *)(lVar26 + 0xd8);
    uVar23 = 0xffffffff;
    local_105 = 3;
    local_d0 = (ulonglong)uVar19;
    do {
      lVar26 = local_100[0x10];
      lVar13 = (longlong)(int)uVar22;
      puVar2 = (undefined8 *)(lVar26 + lVar13 * 0x28);
      local_98 = *(undefined4 *)puVar2;
      uStack_94 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_90 = (undefined4)puVar2[1];
      uStack_8c = *(undefined4 *)((longlong)puVar2 + 0xc);
      local_88 = (void *)0x0;
      local_80 = *(int *)(lVar26 + 0x18 + lVar13 * 0x28);
      lVar20 = (longlong)local_80;
      pvVar4 = *(void **)(lVar26 + 0x10 + lVar13 * 0x28);
      local_f4 = uVar23;
      local_c0 = uVar28;
      if (lVar20 == 0) {
        local_7c = 0;
        local_60 = 0;
        local_78 = (undefined8 *)*puVar2;
        uStack_70 = (longlong *)puVar2[1];
LAB_144464232:
        local_68 = (undefined2 *)0x0;
        local_5c = 0;
        iVar9 = 0;
      }
      else {
        FUN_1446dd670(&local_88,local_80,0);
        memcpy(local_88,pvVar4,lVar20 * 2);
        pvVar4 = local_88;
        lVar20 = (longlong)local_80;
        local_78 = (undefined8 *)CONCAT44(uStack_94,local_98);
        uStack_70 = (longlong *)CONCAT44(uStack_8c,uStack_90);
        local_68 = (undefined2 *)0x0;
        local_60 = local_80;
        if (lVar20 == 0) goto LAB_144464232;
        FUN_1446dd670(&local_68,local_80,0);
        memcpy(local_68,pvVar4,lVar20 * 2);
        iVar9 = local_60;
      }
      plVar14 = uStack_70;
      puVar2 = local_78;
      uVar19 = 0;
      iVar15 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar15 = 0;
      }
      if (0 < iVar15) {
        puVar12 = local_68;
        if (iVar9 == 0) {
          puVar12 = &DAT_149dfb77a;
        }
        lVar20 = 0;
        uVar28 = 0;
        do {
          uVar19 = ((uint)(0x19 < (ushort)puVar12[lVar20] - 0x61) * 0x20 +
                   (uint)(ushort)puVar12[lVar20]) - 0x20;
          uVar22 = (uint)(uVar28 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar28 ^ uVar19) & 0xff) * 4);
          uVar19 = uVar22 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar22 & 0xff ^ uVar19 >> 8 & 0xff) * 4);
          uVar28 = (ulonglong)uVar19;
          lVar20 = lVar20 + 1;
        } while (iVar15 != (int)lVar20);
      }
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      plVar6 = local_b8;
      lVar26 = lVar26 + lVar13 * 0x28;
      uVar22 = (uint)((ulonglong)plVar14 >> 0x10);
      uVar25 = (uint)plVar14 & 0xffff;
      uVar23 = (uint)((ulonglong)puVar2 >> 0x10);
      uVar27 = (uint)puVar2 & 0xffff;
      uVar27 = ((uint)puVar2 << 0x10 | uVar27) + (int)((ulonglong)puVar2 >> 0x20) +
               (uVar23 << 0x13 | uVar23 & 0xffff) + (uVar27 >> 4);
      uVar27 = (uVar27 >> 2) + 0x9e3779b9 +
               ((uint)plVar14 << 0x10 | uVar25) + (int)((ulonglong)plVar14 >> 0x20) +
               (uVar22 << 0x13 | uVar22 & 0xffff) + (uVar25 >> 4) + uVar27 * 0x40 ^ uVar27;
      uVar23 = uVar27 >> 0xd ^ -uVar27;
      uVar22 = uVar23 << 8 ^ (-0x61c88647 - uVar27) - uVar23;
      uVar27 = uVar22 >> 0xd ^ (uVar27 - uVar23) - uVar22;
      uVar25 = uVar27 >> 0xc ^ (uVar23 - uVar22) - uVar27;
      uVar23 = uVar25 << 0x10 ^ (uVar22 - uVar27) - uVar25;
      uVar22 = uVar23 >> 5 ^ (uVar27 - uVar25) - uVar23;
      uVar25 = uVar22 >> 3 ^ (uVar25 - uVar23) - uVar22;
      uVar23 = uVar25 << 10 ^ (uVar23 - uVar22) - uVar25;
      uVar22 = uVar19 >> 0xd ^ (uVar23 >> 0xf ^ uVar22 - (uVar25 + uVar23)) - uVar19;
      uVar23 = uVar22 << 8 ^ (-0x61c88647 - uVar19) - uVar22;
      uVar25 = uVar23 >> 0xd ^ (uVar19 - uVar22) - uVar23;
      uVar27 = uVar25 >> 0xc ^ (uVar22 - uVar23) - uVar25;
      uVar19 = uVar27 << 0x10 ^ (uVar23 - uVar25) - uVar27;
      uVar22 = uVar19 >> 5 ^ (uVar25 - uVar27) - uVar19;
      uVar23 = uVar22 >> 3 ^ (uVar27 - uVar19) - uVar22;
      uVar19 = uVar23 << 10 ^ (uVar19 - uVar22) - uVar23;
      iVar9 = FUN_1490d0238(local_b8,uVar19 >> 0xf ^ uVar22 - (uVar23 + uVar19),lVar26);
      uVar28 = local_c0;
      param_1 = local_f0;
      bVar7 = local_105;
      if (((iVar9 != -1) &&
          (plVar14 = (longlong *)((longlong)iVar9 * 0x10 + *plVar6), plVar14 != (longlong *)0x0)) &&
         (lVar13 = *plVar14 + 0x30, lVar13 != 0)) {
        puVar2 = (undefined8 *)local_f0[2];
        pcVar3 = (code *)*puVar2;
        plVar14 = puVar2 + 4;
        if ((longlong *)puVar2[2] != (longlong *)0x0) {
          plVar14 = (longlong *)puVar2[2];
        }
        uVar11 = (**(code **)(*plVar14 + 8))();
        bVar7 = (*pcVar3)(uVar11,lVar13,lVar26);
        if (local_105 < bVar7) {
          bVar7 = local_105;
        }
      }
      local_105 = bVar7;
      uVar23 = local_f4 & ~(uint)local_d8;
      puVar10 = (uint *)local_100[0x14];
      if ((uint *)local_100[0x14] == (uint *)0x0) {
        puVar10 = local_c8;
      }
      uVar19 = *(uint *)(local_100 + 0x15);
      iVar9 = (int)uVar28;
      lVar26 = (longlong)iVar9;
      uVar22 = puVar10[lVar26] & uVar23;
      if (uVar22 == 0) {
        iVar15 = uVar19 + 0x1e;
        if (-1 < (int)(uVar19 - 1)) {
          iVar15 = uVar19 - 1;
        }
        iVar15 = iVar15 >> 5;
        local_104 = local_104 + 0x20;
        iVar16 = iVar15;
        if (iVar15 < iVar9) {
          iVar16 = iVar9;
        }
        if (iVar9 < iVar15) {
          lVar13 = 0;
          do {
            uVar22 = puVar10[lVar26 + lVar13 + 1];
            if (uVar22 != 0) {
              uVar28 = (ulonglong)(iVar9 + (int)lVar13 + 1);
              uVar23 = 0xffffffff;
              goto LAB_1444645aa;
            }
            local_104 = local_104 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar16 - lVar26 != lVar13);
          uVar23 = 0xffffffff;
          iVar9 = iVar16;
        }
        uVar28 = (ulonglong)(iVar9 + 1);
        param_1 = local_f0;
        uVar22 = uVar19;
      }
      else {
LAB_1444645aa:
        local_d8 = (ulonglong)(-uVar22 & uVar22);
        uVar17 = local_d8 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        uVar22 = (local_104 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if ((int)uVar19 <= (int)uVar22) {
          uVar22 = uVar19;
        }
      }
    } while (uVar22 != (uint)local_d0);
  }
LAB_144463f50:
  puVar5 = local_100;
  lVar26 = *(longlong *)param_1[8];
  lVar13 = local_100[0xe];
  lVar20 = local_100[0xf];
  uVar28 = param_1[6];
  lVar1 = *(longlong *)param_1[7];
  puVar2 = (undefined8 *)param_1[1];
  uVar17 = param_1[5];
  pcVar3 = (code *)*puVar2;
  plVar14 = puVar2 + 4;
  if ((longlong *)puVar2[2] != (longlong *)0x0) {
    plVar14 = (longlong *)puVar2[2];
  }
  uVar11 = (**(code **)(*plVar14 + 8))();
  bVar7 = (*pcVar3)(uVar11,puVar5);
  FUN_14475cc44(local_e8,&local_98);
  FUN_14475cc44(puVar5 + 7);
  plVar14 = (longlong *)((longlong)local_e0 + 0x38);
  iVar9 = *(int *)(puVar5 + 1);
  uVar18 = 0;
  iVar15 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar15 = 0;
  }
  if (0 < iVar15) {
    if (iVar9 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)*local_100;
    }
    lVar24 = 0;
    uVar18 = 0;
    do {
      uVar19 = ((uint)(0x19 < (ushort)puVar12[lVar24] - 0x61) * 0x20 + (uint)(ushort)puVar12[lVar24]
               ) - 0x20;
      uVar22 = (uint)(uVar18 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar18 ^ uVar19) & 0xff) * 4);
      uVar18 = (ulonglong)
               (uVar22 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar22 & 0xff ^ uVar19 >> 8 & 0xff) * 4));
      lVar24 = lVar24 + 1;
    } while (iVar15 != (int)lVar24);
  }
  local_e0 = plVar14;
  iVar9 = FUN_1490cdef6(plVar14,uVar18,local_100);
  if ((iVar9 == -1) || (lVar24 = (longlong)iVar9 * 0x20 + *plVar14, lVar24 == 0)) {
    lVar24 = 0;
  }
  else {
    lVar24 = *(longlong *)(lVar24 + 0x10);
    if ((DAT_14c950c29 == '\x01') && (lVar24 != 0)) {
      FUN_1456cec3c(lVar24);
    }
  }
  if ((((char)local_f0[4] == '\0') && ((ulonglong)(lVar13 + lVar26) <= uVar28)) && (local_105 == 3))
  {
    puVar12 = local_a8;
    if (local_a0 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    cVar8 = FUN_1490c4b96(puVar12);
    if (cVar8 == '\0') goto LAB_1444640a3;
    pcVar29 = (char *)(local_100 + 0x24);
    *(undefined1 *)(local_100 + 0x24) = 3;
LAB_144464737:
    plVar14 = local_f0;
    puVar2 = local_100;
    if (lVar24 == 0) {
      local_78 = local_100;
      uStack_70 = local_e8;
      FUN_1490d1b86(local_f0[10],&local_b0);
    }
    else {
      lVar26 = local_f0[9];
      local_b0 = lVar24;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar24);
      }
      local_78 = puVar2;
      uStack_70 = &local_b0;
      FUN_1490cdfc2(lVar26,local_4c);
    }
    lVar26 = puVar2[0xe];
    plVar14 = (longlong *)plVar14[8];
LAB_1444647a7:
    *plVar14 = *plVar14 + lVar26;
  }
  else {
LAB_1444640a3:
    plVar14 = local_f0;
    puVar2 = local_100;
    pcVar29 = (char *)(local_100 + 0x24);
    if ((~bVar7 & *(int *)(local_100 + 0x26) <= *(int *)((longlong)local_100 + 0x15c)) != 0) {
      if ((uVar17 < (ulonglong)(lVar20 + lVar1)) || (local_105 == 0)) {
        cVar8 = *pcVar29;
        if (cVar8 != '\x01') {
          if (cVar8 == '\x03') goto LAB_144464737;
          if (cVar8 == '\x02') goto LAB_144464638;
          goto LAB_144464103;
        }
      }
      else {
        *pcVar29 = '\x01';
      }
      if (lVar24 == 0) {
        local_78 = local_100;
        uStack_70 = local_e8;
        FUN_1490d1b86(local_f0[10],&local_b0);
      }
      else {
        lVar26 = local_f0[9];
        local_b0 = lVar24;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar24);
        }
        local_78 = puVar2;
        uStack_70 = &local_b0;
        FUN_1490cdfc2(lVar26,local_4c);
      }
      lVar26 = puVar2[0xf];
      plVar14 = (longlong *)plVar14[7];
      goto LAB_1444647a7;
    }
    *pcVar29 = '\x02';
LAB_144464638:
    lVar26 = local_f0[9];
    local_b0 = lVar24;
    if ((lVar24 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar24);
    }
    local_78 = puVar2;
    uStack_70 = &local_b0;
    FUN_1490cdfc2(lVar26,local_4c);
  }
LAB_144464103:
  uVar28 = CONCAT71((int7)((ulonglong)pcVar29 >> 8),*pcVar29);
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_94,local_98) != 0) {
    FUN_1400020a8();
  }
LAB_144463e35:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar28 & 0xffffffff;
}



// FUNCTION 1444647b0 FUN_1444647b0 body=71 status=ok
// SIG undefined FUN_1444647b0(void)

void FUN_1444647b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14bac2b10;
  lVar2 = 0xb;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 1444647fe FUN_1444647fe body=29 status=ok
// SIG undefined FUN_1444647fe(void)

void FUN_1444647fe(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14446481c FUN_14446481c body=29 status=ok
// SIG undefined FUN_14446481c(void)

undefined8 FUN_14446481c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14446483a FUN_14446483a body=52 status=ok
// SIG undefined FUN_14446483a(void)

void FUN_14446483a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  FUN_140584627(*param_2,*param_1,*param_3,*param_4,0,0,0,0);
  return;
}



// FUNCTION 1444648d0 FUN_1444648d0 body=29 status=ok
// SIG undefined FUN_1444648d0(void)

undefined8 FUN_1444648d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444648ee FUN_1444648ee body=88 status=ok
// SIG undefined FUN_1444648ee(void)

undefined8 FUN_1444648ee(uint *param_1)

{
  uint uVar1;
  longlong *plVar2;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && (*(uint *)(plVar2 + 2) == param_1[1])) &&
       (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))) {
      FUN_1490cb2b2();
    }
  }
  return 0;
}



// FUNCTION 144464950 FUN_144464950 body=12 status=ok
// SIG undefined FUN_144464950(void)

void FUN_144464950(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144464959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14446495c FUN_14446495c body=29 status=ok
// SIG undefined FUN_14446495c(void)

undefined8 FUN_14446495c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14446497a FUN_14446497a body=29 status=ok
// SIG undefined FUN_14446497a(void)

undefined8 FUN_14446497a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444649ac FUN_1444649ac body=93 status=ok
// SIG undefined FUN_1444649ac(void)

void FUN_1444649ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bac2be0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}


