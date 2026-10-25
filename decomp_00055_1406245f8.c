// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1406245f8 FUN_1406245f8 body=381 status=ok
// SIG undefined FUN_1406245f8(void)

void FUN_1406245f8(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
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
    lVar5 = (longlong)(int)uVar3;
  }
  else {
    lVar5 = (longlong)(int)uVar2 + ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10;
  }
  uVar4 = lVar5 * 0x1c;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar4 + 0xf;
      if (uVar4 < 0x7ff1) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
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
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140624685;
            lVar5 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar5 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((uVar7 & 0xfffffffffffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
    }
  }
LAB_140624685:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar4 / 0x1c)) {
    uVar7 = uVar4 / 0x1c & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x1c,4);
  return;
}



// FUNCTION 140624776 FUN_140624776 body=117 status=ok
// SIG undefined FUN_140624776(void)

int FUN_140624776(longlong *param_1,uint param_2,undefined1 (*param_3) [16])

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar3 = (longlong)iVar1 * 0x1c;
        if (*(int *)(lVar2 + 0x10 + lVar3) == *(int *)param_3[1] &&
            *(undefined1 (*) [16])(lVar2 + lVar3) == *param_3) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar3 + lVar2 + 0x14);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1406247ec FUN_1406247ec body=369 status=ok
// SIG undefined FUN_1406247ec(void)

void FUN_1406247ec(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 + -0x438 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + -0x418);
    if (lVar2 != 0) {
      if (DAT_14cad2858 == 0) {
        local_40 = &local_28;
        local_28 = FUN_144a7958c;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_146395584;
        local_48 = &LAB_147a0ba80;
        local_50 = &LAB_14575ccce;
        local_58 = L"Engine";
        local_60 = 0x40000000000;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(*(undefined8 *)(param_1 + -0x418),CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1
                     );
      }
    }
    plVar3 = *(longlong **)(param_1 + -0x58);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*(longlong *)(param_1 + -0x438) + 0x350))(param_1 + -0x438);
      *(longlong **)(param_1 + -0x58) = plVar3;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000140624887. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0xd8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 140624988 FUN_140624988 body=102 status=ok
// SIG undefined FUN_140624988(void)

undefined8 FUN_140624988(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    if (cVar1 == '\0') {
      return 0;
    }
    (**(code **)(*param_2 + 0x20))(param_2);
    uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    FUN_1488ff468(param_1,param_2,uVar2);
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x28))();
    FUN_1406249ee(param_1,param_2,uVar2);
  }
  return 1;
}



// FUNCTION 1406249ee FUN_1406249ee body=1682 status=ok
// SIG undefined FUN_1406249ee(void)

undefined8 FUN_1406249ee(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_128 [40];
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_ec;
  undefined4 local_e4;
  longlong local_e0;
  undefined1 local_d8 [4];
  undefined1 local_d4;
  longlong local_d0;
  undefined4 local_c8;
  undefined8 local_c0 [3];
  longlong local_a8;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar12 = *(int *)((longlong)param_1 + 0xc);
  local_f8 = param_2;
  FUN_14029e8dd(*param_1,(int)param_1[1]);
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar12 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_1409c5ac0(param_1,0);
  }
  pbVar2 = (byte *)*param_3;
  puVar5 = &DAT_14c9a1270;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
    puVar5 = *(undefined8 **)(pbVar2 + 8);
  }
  if ((longlong)*(int *)(puVar5 + 2) != 0) {
    puVar11 = (undefined8 *)*puVar5;
    puVar5 = puVar11 + (longlong)*(int *)(puVar5 + 2) * 2;
    do {
      local_c8 = DAT_14cb85ed8;
      local_d0 = DAT_14cb85ed0;
      FUN_1448075d0(&local_98,&local_d0);
      pbVar2 = (byte *)*puVar11;
      puVar6 = &DAT_14c9a1308;
      if (pbVar2 != (byte *)0x0) {
        plVar10 = &DAT_14c9a1288;
        if ((*pbVar2 & 2) != 0) {
          plVar10 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
        }
        puVar6 = &DAT_14c9a1308;
        if ((int)plVar10[2] != *(int *)((longlong)plVar10 + 0x3c)) {
          plVar9 = plVar10 + 8;
          if ((longlong *)plVar10[9] != (longlong *)0x0) {
            plVar9 = (longlong *)plVar10[9];
          }
          iVar12 = *(int *)((longlong)plVar9 +
                           (ulonglong)((int)plVar10[10] - 1U & (uint)local_98) * 4);
          puVar6 = &DAT_14c9a1308;
          if (iVar12 != -1) {
            do {
              lVar13 = *plVar10 + (longlong)iVar12 * 0x40;
              if (*(uint *)(*plVar10 + (longlong)iVar12 * 0x40) == (uint)local_98) {
                puVar6 = &DAT_14c9a1308;
                if (lVar13 == 0) goto LAB_140624b46;
                puVar8 = (undefined8 *)(lVar13 + 0x28);
                puVar6 = &DAT_14c9a1308;
                if ((puVar8 == (undefined8 *)0x0) ||
                   (((byte *)*puVar8 != (byte *)0x0 &&
                    (puVar6 = puVar8, (*(byte *)*puVar8 & 0x40) == 0)))) goto LAB_140624b46;
                break;
              }
              iVar12 = *(int *)(lVar13 + 0x38);
            } while (iVar12 != -1);
            puVar6 = &DAT_14c9a1308;
          }
        }
      }
LAB_140624b46:
      FUN_14068d188(puVar6,&local_ec,0);
      if (lStack_80 != 0) {
        FUN_1400020a8();
      }
      iVar12 = (int)param_1[1];
      lVar13 = (longlong)iVar12;
      *(uint *)(param_1 + 1) = iVar12 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar12 + 1U) {
        FUN_1406251ee(param_1,iVar12);
      }
      lVar3 = *param_1;
      puVar6 = (undefined8 *)(lVar3 + 0x38 + lVar13 * 0x48);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6 = (undefined8 *)(lVar3 + 0x2c + lVar13 * 0x48);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6 = (undefined8 *)(lVar3 + 0x1c + lVar13 * 0x48);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6 = (undefined8 *)(lVar3 + 0xc + lVar13 * 0x48);
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined4 *)(lVar3 + 8 + lVar13 * 0x48) = local_e4;
      *(undefined8 *)(lVar3 + lVar13 * 0x48) = local_ec;
      local_c8 = DAT_14cb85ef0;
      local_d0 = DAT_14cb85ee8;
      FUN_1448075d0(&local_98,&local_d0);
      pbVar2 = (byte *)*puVar11;
      puVar6 = &DAT_14c9a1308;
      if (pbVar2 != (byte *)0x0) {
        plVar10 = &DAT_14c9a1288;
        if ((*pbVar2 & 2) != 0) {
          plVar10 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
        }
        puVar6 = &DAT_14c9a1308;
        if ((int)plVar10[2] != *(int *)((longlong)plVar10 + 0x3c)) {
          plVar9 = plVar10 + 8;
          if ((longlong *)plVar10[9] != (longlong *)0x0) {
            plVar9 = (longlong *)plVar10[9];
          }
          iVar12 = *(int *)((longlong)plVar9 +
                           (ulonglong)((int)plVar10[10] - 1U & (uint)local_98) * 4);
          puVar6 = &DAT_14c9a1308;
          if (iVar12 != -1) {
            do {
              lVar1 = *plVar10 + (longlong)iVar12 * 0x40;
              if (*(uint *)(*plVar10 + (longlong)iVar12 * 0x40) == (uint)local_98) {
                puVar6 = &DAT_14c9a1308;
                if (lVar1 == 0) goto LAB_140624c7a;
                puVar8 = (undefined8 *)(lVar1 + 0x28);
                puVar6 = &DAT_14c9a1308;
                if ((puVar8 == (undefined8 *)0x0) ||
                   (((byte *)*puVar8 != (byte *)0x0 &&
                    (puVar6 = puVar8, (*(byte *)*puVar8 & 0x40) == 0)))) goto LAB_140624c7a;
                break;
              }
              iVar12 = *(int *)(lVar1 + 0x38);
            } while (iVar12 != -1);
            puVar6 = &DAT_14c9a1308;
          }
        }
      }
LAB_140624c7a:
      if (lStack_80 != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + lVar13 * 0x48;
      if (((byte *)*puVar6 == (byte *)0x0) || ((*(byte *)*puVar6 & 3) == 0)) {
        local_c8 = DAT_14cb85f20;
        local_d0 = DAT_14cb85f18;
        FUN_1448075d0(&local_98,&local_d0);
        puVar6 = (undefined8 *)FUN_144a06846(puVar11,&local_98);
        if (lStack_80 != 0) {
          FUN_1400020a8();
        }
        if (((byte *)*puVar6 == (byte *)0x0) || ((*(byte *)*puVar6 & 3) == 0)) {
          local_c8 = DAT_14cb85f08;
          local_d0 = DAT_14cb85f00;
          FUN_1448075d0(&local_98,&local_d0);
          puVar6 = (undefined8 *)FUN_144a06846(puVar11,&local_98);
          if (lStack_80 != 0) {
            FUN_1400020a8();
          }
          if (((byte *)*puVar6 != (byte *)0x0) && ((*(byte *)*puVar6 & 3) != 0)) {
            local_d0 = 0;
            local_c8 = 0;
            local_c0[0] = 0;
            local_d4 = 0;
            FUN_140008118(&local_98,puVar6,local_d8,&local_d0);
            lVar13 = local_98;
            local_e0 = 0;
            FUN_140076e46(local_90,local_98);
            local_100 = local_e0;
            plVar10 = (longlong *)(lVar3 + 0x10);
            if (*(byte *)(lVar3 + 0x30) == 0x1d) {
              if (*plVar10 != lVar13) {
                *(undefined8 *)(lVar3 + 0x20) = 0;
              }
              *(longlong *)(lVar3 + 0x10) = lVar13;
              if (*(longlong *)(lVar3 + 0x18) != local_e0) {
                *(undefined8 *)(lVar3 + 0x20) = 0;
              }
              uVar7 = FUN_14477b664(local_e0);
              uVar7 = FUN_14477b664(uVar7);
              *(undefined8 *)(lVar3 + 0x18) = uVar7;
              *(undefined8 *)(lVar3 + 0x20) = 0;
            }
            else {
              pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                                 (ulonglong)((uint)*(byte *)(lVar3 + 0x30) * 0x120));
              if (pcVar4 != (code *)0x0) {
                plVar9 = plVar10;
                if (0x18 < *(ushort *)(lVar3 + 0x28)) {
                  plVar9 = (longlong *)*plVar10;
                }
                (*pcVar4)(plVar9);
              }
              if (0x18 < *(ushort *)(lVar3 + 0x28)) {
                FUN_1400020a8(*plVar10);
              }
              uVar7 = FUN_14477b664(local_100);
              uVar7 = FUN_14477b664(uVar7);
              *(undefined2 *)(lVar3 + 0x28) = 0x18;
              *(undefined8 *)(lVar3 + 0x18) = 0;
              *(undefined8 *)(lVar3 + 0x20) = 0;
              *(longlong *)(lVar3 + 0x10) = lVar13;
              uVar7 = FUN_14477b664(uVar7);
              uVar7 = FUN_14477b664(uVar7);
              *(undefined8 *)(lVar3 + 0x18) = uVar7;
              *(undefined8 *)(lVar3 + 0x20) = 0;
              *(undefined1 *)(lVar3 + 0x30) = 0x1d;
            }
          }
        }
        else {
          uVar7 = FUN_140625082(puVar6,&DAT_14c9a12e0);
          FUN_1409c5062(&local_d0,uVar7);
          plVar10 = (longlong *)(lVar3 + 0x10);
          if (*(byte *)(lVar3 + 0x30) == 0x1f) {
            plVar10 = (longlong *)*plVar10;
            *(undefined4 *)(plVar10 + 1) = local_c8;
            *plVar10 = local_d0;
            FUN_1447715ec(plVar10 + 2,local_c0);
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                               (ulonglong)((uint)*(byte *)(lVar3 + 0x30) * 0x120));
            if (pcVar4 != (code *)0x0) {
              plVar9 = plVar10;
              if (0x18 < *(ushort *)(lVar3 + 0x28)) {
                plVar9 = (longlong *)*plVar10;
              }
              (*pcVar4)(plVar9);
            }
            if (0x18 < *(ushort *)(lVar3 + 0x28)) {
              FUN_1400020a8(*plVar10);
            }
            local_78 = 0;
            local_88 = 0;
            lStack_80 = 0;
            local_70 = 0;
            uStack_68 = 0;
            local_98 = local_d0;
            local_90 = local_c8;
            FUN_1447715ec(&local_88,local_c0);
            *(undefined2 *)(lVar3 + 0x28) = 0x38;
            plVar10 = (longlong *)FUN_14001cc68(0x38,0);
            *(longlong **)(lVar3 + 0x10) = plVar10;
            plVar10[2] = 0;
            plVar10[3] = 0;
            *(undefined4 *)(plVar10 + 4) = 0;
            plVar10[5] = 0;
            plVar10[6] = 0;
            *(undefined4 *)(plVar10 + 1) = local_90;
            *plVar10 = local_98;
            FUN_1447715ec(plVar10 + 2,&local_88);
            *(undefined1 *)(lVar3 + 0x30) = 0x1f;
            if (local_70 != 0) {
              FUN_1400020a8();
            }
          }
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
        }
      }
      else {
        FUN_140785e92(lVar3 + 0x10,local_f8);
      }
      puVar11 = puVar11 + 2;
    } while (puVar11 != puVar5);
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140625082 FUN_140625082 body=16 status=ok
// SIG undefined FUN_140625082(void)

longlong FUN_140625082(undefined8 *param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  longlong lStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  
  pbVar1 = (byte *)*param_1;
  if (pbVar1 == (byte *)0x0) {
    return param_2;
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((char)*pbVar1 < '\0') || (-1 < *(short *)(pbVar1 + 0x20))) {
    iVar2 = *(int *)(pbVar1 + 0x24);
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
    param_2 = (ulonglong)(uint)(iVar2 % 0x199) * 0x28 +
              *(longlong *)(DAT_14c9a1378 + (longlong)(iVar2 / 0x199) * 8);
  }
  else {
    if (((*pbVar1 & 0x6b) != 1) || (*(longlong *)(pbVar1 + 8) == 0)) goto LAB_140625174;
    iVar2 = *(int *)(pbVar1 + 4);
    if (iVar2 == 0) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      lStack_30 = 0;
      uStack_28 = 0;
      FUN_1446ddda2(&uStack_48,*(longlong *)(pbVar1 + 8),0);
      iVar2 = FUN_14009aea0(&DAT_14c9a1320,&uStack_48);
      *(int *)(pbVar1 + 4) = iVar2;
      if (lStack_30 != 0) {
        FUN_1400020a8();
        iVar2 = *(int *)(pbVar1 + 4);
      }
    }
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
    param_2 = (ulonglong)(uint)(iVar2 % 0x199) * 0x28 +
              *(longlong *)(DAT_14c9a1378 + (longlong)(iVar2 / 0x199) * 8);
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
LAB_140625174:
  if ((uStack_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140625092 FUN_140625092 body=346 status=ok
// SIG undefined FUN_140625092(void)

longlong FUN_140625092(byte *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((char)*param_1 < '\0') || (-1 < *(short *)(param_1 + 0x20))) {
    iVar1 = *(int *)(param_1 + 0x24);
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
    param_2 = (ulonglong)(uint)(iVar1 % 0x199) * 0x28 +
              *(longlong *)(DAT_14c9a1378 + (longlong)(iVar1 / 0x199) * 8);
  }
  else {
    if (((*param_1 & 0x6b) != 1) || (*(longlong *)(param_1 + 8) == 0)) goto LAB_140625174;
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == 0) {
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      local_30 = 0;
      uStack_28 = 0;
      FUN_1446ddda2(&local_48,*(longlong *)(param_1 + 8),0);
      iVar1 = FUN_14009aea0(&DAT_14c9a1320,&local_48);
      *(int *)(param_1 + 4) = iVar1;
      if (local_30 != 0) {
        FUN_1400020a8();
        iVar1 = *(int *)(param_1 + 4);
      }
    }
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
    param_2 = (ulonglong)(uint)(iVar1 % 0x199) * 0x28 +
              *(longlong *)(DAT_14c9a1378 + (longlong)(iVar1 / 0x199) * 8);
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
LAB_140625174:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406251ee FUN_1406251ee body=373 status=ok
// SIG undefined FUN_1406251ee(void)

void FUN_1406251ee(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x48;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140625277;
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
LAB_140625277:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 140625364 FUN_140625364 body=80 status=ok
// SIG undefined FUN_140625364(void)

bool FUN_140625364(longlong *param_1,undefined1 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  
  *param_2 = 0;
  bVar2 = false;
  cVar1 = (**(code **)(*param_1 + 0x130))(param_1,2,0);
  if (cVar1 == '\x01') {
    cVar1 = (**(code **)(*param_1 + 0x130))(param_1,0,*param_3);
    bVar2 = cVar1 != '\x02';
    *param_2 = cVar1 == '\0';
  }
  return bVar2;
}



// FUNCTION 1406253b4 FUN_1406253b4 body=286 status=ok
// SIG undefined FUN_1406253b4(void)

ulonglong FUN_1406253b4(longlong param_1,byte param_2,longlong param_3)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_248 [32];
  int *local_228;
  int local_218;
  int local_214;
  undefined4 local_210 [2];
  undefined8 local_208;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_218 = (int)((double)param_3 / 10000000.0);
  local_214 = ((int)param_3 +
              ((int)(SUB168(SEXT816(param_3) * ZEXT816(0xd6bf94d5e57a42bd),8) >> 0x17) -
              ((int)(param_3 / -0x6769800000000000) + (int)(param_3 >> 0x3f))) * -10000000) / 10;
  local_208 = *(undefined8 *)(param_1 + 0x28);
  local_210[0] = 1;
  piVar2 = (int *)0x0;
  if (-1 < param_3) {
    piVar2 = &local_218;
  }
  if (param_2 == 0) {
    puVar4 = local_210;
    puVar5 = (undefined4 *)0x0;
LAB_14062547c:
    puVar6 = (undefined4 *)0x0;
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 1) {
        uVar3 = CONCAT71((int7)((ulonglong)piVar2 >> 8),1);
        goto LAB_140625498;
      }
      puVar5 = local_210;
      puVar4 = (undefined4 *)0x0;
      goto LAB_14062547c;
    }
    puVar6 = local_210;
    puVar4 = (undefined4 *)0x0;
    puVar5 = (undefined4 *)0x0;
  }
  local_228 = piVar2;
  iVar1 = Ordinal_18((int)local_208 + 1,puVar4,puVar5,puVar6);
  param_2 = 2 - (iVar1 == 0);
  uVar3 = (ulonglong)param_2;
  if (0 < iVar1) {
    uVar3 = 0;
  }
LAB_140625498:
  if ((local_8 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_248,param_2);
}



// FUNCTION 1406254e2 FUN_1406254e2 body=610 status=ok
// SIG undefined FUN_1406254e2(void)

undefined8 FUN_1406254e2(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  uint local_50 [6];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = (**(code **)(*param_1 + 8))();
  FUN_1402057ac(param_2,param_1,uVar4,0);
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  if (param_1[0x22] == 0) {
    local_58 = DAT_14cbcdb18;
    local_60 = DAT_14cbcdb10;
    FUN_1448075d0(local_50);
    pbVar3 = (byte *)*param_2;
    if (pbVar3 != (byte *)0x0) {
      if ((*pbVar3 & 2) == 0) {
        plVar6 = &DAT_14c9a1288;
      }
      else {
        plVar6 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
      }
      if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
        plVar9 = plVar6 + 8;
        if ((longlong *)plVar6[9] != (longlong *)0x0) {
          plVar9 = (longlong *)plVar6[9];
        }
        iVar8 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar6[10] - 1U & local_50[0]) * 4);
        if (iVar8 != -1) {
          do {
            lVar2 = *plVar6 + (longlong)iVar8 * 0x40;
            if (*(uint *)(*plVar6 + (longlong)iVar8 * 0x40) == local_50[0]) {
              if ((((lVar2 != 0) &&
                   (puVar7 = (undefined8 *)(lVar2 + 0x28), puVar7 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar7 != (byte *)0x0)) && ((*(byte *)*puVar7 & 0x40) == 0))
              goto LAB_1406255c3;
              break;
            }
            iVar8 = *(int *)(lVar2 + 0x38);
          } while (iVar8 != -1);
        }
      }
    }
    puVar7 = &DAT_14c9a1308;
LAB_1406255c3:
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (((byte *)*puVar7 != (byte *)0x0) && ((~*(byte *)*puVar7 & 3) == 0)) {
      puVar5 = (undefined8 *)FUN_144b082d2();
      local_58 = *(undefined4 *)(puVar5 + 1);
      local_60 = *puVar5;
      FUN_1448075d0(local_50);
      puVar5 = (undefined8 *)FUN_144a06846(puVar7,local_50);
      if ((byte *)*puVar5 == (byte *)0x0) {
        bVar10 = false;
      }
      else {
        bVar10 = (*(byte *)*puVar5 & 3) != 0;
      }
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if (!bVar10) {
        uVar4 = FUN_1465d3f18();
        FUN_140005f6c(param_1 + 0x22,uVar4,0,0);
        uVar4 = FUN_1400014c6(param_1 + 0x22);
        lVar2 = param_1[0x22];
        plVar6 = (longlong *)param_1[0x23];
        if (plVar6 == (longlong *)0x0) {
          FUN_1402057ac(puVar7,lVar2,uVar4,0);
        }
        else {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          LOCK();
          plVar9 = plVar6 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
          FUN_1402057ac(puVar7,lVar2,uVar4,0);
          LOCK();
          plVar9 = plVar6 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14062574c FUN_14062574c body=57 status=ok
// SIG undefined FUN_14062574c(void)

void FUN_14062574c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf5b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf5b8 = FUN_140002ddd(FUN_146612552,uVar1,L"ObjectiveTypeSettings_OakInteract");
  }
  return;
}



// FUNCTION 140625786 FUN_140625786 body=877 status=ok
// SIG undefined FUN_140625786(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140625786(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_238 [44];
  undefined4 local_20c;
  longlong local_208;
  longlong local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c8 [2];
  undefined1 local_1b8 [136];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1f8 = param_2;
  local_1f0 = param_3;
  local_200 = (**(code **)(*param_1 + 0x2b8))();
  if (((*(byte *)(local_200 + 0x29) & 0x40) == 0) || ((longlong)DAT_14c760db4 < 2)) {
    local_20c = 0;
  }
  else {
    uVar6 = CONCAT71((int7)((ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) *
                            0x3c >> 8),
                     *(undefined1 *)
                      ((longlong)&DAT_14ca814d0 +
                      (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 0x3c +
                      6)) & 0xffffffffffffff10;
    local_20c = (undefined4)CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 4);
  }
  if (0 < (int)param_1[0x18]) {
    lVar10 = 0;
    do {
      local_1c8[1] = 0;
      local_1c8[0] = 0;
      FUN_14017a903(lVar10 * 0x80 + param_1[0x17],local_1f8,local_1c8 + 1,local_1c8);
      if (local_1c8[0] != 0) {
        local_1d8 = 0;
        uStack_1d0 = 0;
        FUN_14017ac5a(&local_128);
        FUN_14017aacc(&local_128,&local_1d8);
        if (local_118 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_118 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_118 + 0x10))();
          }
        }
        if ((int)uStack_1d0 != 0) {
          FUN_14017a7ae(param_1,0,&local_1d8);
          lVar4 = local_1d8;
          lVar11 = (longlong)(int)uStack_1d0;
          if (lVar11 != 0) {
            local_208 = local_1c8[0];
            lVar9 = 0;
            do {
              lVar3 = *(longlong *)(lVar4 + lVar9);
              if (lVar3 != 0) {
                plVar7 = (longlong *)FUN_14015bd0c(local_1f0);
                *plVar7 = lVar3;
                if ((char)local_20c == '\0') {
                  uVar5 = FUN_144b2ac06(local_208,0);
                  if ((-1 < (int)uVar5) && ((int)uVar5 < (int)(*(longlong **)(local_208 + 0xe0))[1])
                     ) {
                    local_b8 = 0x400000000;
                    local_128 = 0;
                    uStack_120 = 0;
                    local_118 = (longlong *)0x0;
                    uStack_110 = 0;
                    local_108 = 0;
                    uStack_100 = 0;
                    local_b0 = 0;
                    uStack_a8 = 0;
                    local_a0 = 0;
                    uStack_98 = 0;
                    local_90 = 0;
                    uStack_88 = 0;
                    local_80 = 0;
                    uStack_78 = 0;
                    local_70 = 0xffffffff;
                    local_6c = 0xff;
                    local_6a = 0;
                    local_130 = 0x1100000000;
                    FUN_1481c958a(*(longlong *)
                                   (**(longlong **)(local_208 + 0xe0) + (ulonglong)uVar5 * 8) + 0x90
                                  ,&local_128);
                    FUN_148043460(DAT_14c760db4,0,&local_128,local_1b8);
                    FUN_14016134a(&local_1e8,local_200,local_1b8);
                    lVar3 = plVar7[6];
                    uVar5 = (int)lVar3 + 1;
                    *(uint *)(plVar7 + 6) = uVar5;
                    if (*(uint *)((longlong)plVar7 + 0x34) < uVar5) {
                      FUN_140df0cf8(plVar7 + 1);
                    }
                    plVar8 = plVar7 + 1;
                    if ((longlong *)plVar7[5] != (longlong *)0x0) {
                      plVar8 = (longlong *)plVar7[5];
                    }
                    plVar8 = plVar8 + (longlong)(int)lVar3 * 2;
                    *(undefined4 *)plVar8 = local_1e8;
                    *(undefined4 *)((longlong)plVar8 + 4) = uStack_1e4;
                    *(undefined4 *)(plVar8 + 1) = uStack_1e0;
                    *(undefined4 *)((longlong)plVar8 + 0xc) = uStack_1dc;
                  }
                }
                else {
                  iVar2 = (int)plVar7[6];
                  *(uint *)(plVar7 + 6) = iVar2 + 1U;
                  if (*(uint *)((longlong)plVar7 + 0x34) < iVar2 + 1U) {
                    FUN_140df0cf8(plVar7 + 1);
                  }
                  plVar8 = plVar7 + 1;
                  if ((longlong *)plVar7[5] != (longlong *)0x0) {
                    plVar8 = (longlong *)plVar7[5];
                  }
                  plVar8[(longlong)iVar2 * 2] = local_200;
                  plVar8[(longlong)iVar2 * 2 + 1] = 0;
                }
              }
              lVar9 = lVar9 + 8;
            } while (lVar11 * 8 != lVar9);
          }
        }
        if (local_1d8 != 0) {
          FUN_1400020a8(local_1d8);
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)param_1[0x18]);
  }
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140625afc FUN_140625afc body=169 status=ok
// SIG undefined FUN_140625afc(void)

void FUN_140625afc(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  FUN_1405f1eac();
  lVar1 = FUN_1447210f0(param_1);
  lVar2 = FUN_1456d188e();
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar2 != 0) goto LAB_140625b38;
  }
  else {
    FUN_1456cec3c(lVar2);
LAB_140625b38:
    lVar3 = FUN_1456d188e();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      lVar5 = 0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        lVar5 = lVar2;
      }
      goto LAB_140625b5d;
    }
  }
  lVar5 = 0;
LAB_140625b5d:
  uVar4 = FUN_1448a6f9c(lVar1 + 0x870,lVar5);
  FUN_140625ba6(uVar4,param_1);
  if (DAT_14cb11348 != '\x01') {
    return;
  }
  FUN_147a3cccc(param_1);
  return;
}



// FUNCTION 140625ba6 FUN_140625ba6 body=328 status=ok
// SIG undefined FUN_140625ba6(void)

void FUN_140625ba6(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = param_2;
  puVar3 = (undefined1 *)FUN_1405d16ba();
  if (puVar3 != (undefined1 *)0x0) {
    uVar1 = *(uint *)(puVar3 + 0x10);
    *(uint *)(puVar3 + 0x10) = uVar1 + 1;
    if (*(uint *)(puVar3 + 0x14) < uVar1 + 1) {
      uVar4 = (ulonglong)uVar1;
      FUN_1417fb9d8(puVar3 + 8,uVar4);
    }
    *(ulonglong *)(*(longlong *)(puVar3 + 8) + (longlong)(int)uVar1 * 8) = param_2;
    if (DAT_14c761ed0 == '\x01') {
      uVar4 = CONCAT71((int7)(uVar4 >> 8),*puVar3) ^ 1;
      goto LAB_140625c0e;
    }
  }
  uVar4 = 0;
LAB_140625c0e:
  FUN_140455b10(param_2,uVar4);
  local_38 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar2 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar2 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar2 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar2 = iVar5;
      }
    }
    local_38 = CONCAT44(iVar2,uVar1);
  }
  FUN_1406ba75e(param_1 + 0x80,&local_38);
  FUN_1437abba0(param_1 + 0xe8,param_2);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140625cef FUN_140625cef body=245 status=ok
// SIG undefined FUN_140625cef(void)

longlong * FUN_140625cef(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_140626096(param_2);
    }
    FUN_140625de6(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_140625eca(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 8;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 140625de6 FUN_140625de6 body=227 status=ok
// SIG undefined FUN_140625de6(void)

void FUN_140625de6(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    param_2 = param_2 - iVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < param_2) {
      FUN_140bc4538(param_1,iVar2);
    }
    if (param_2 != 0) {
      memset((void *)((longlong)iVar2 * 8 + *param_1),0,(ulonglong)param_2 << 3);
      return;
    }
    return;
  }
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  iVar3 = iVar2 - param_2;
  if (iVar3 != 0 && (int)param_2 <= iVar2) {
    _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
    FUN_14018429c(_Dst,iVar3);
    iVar1 = (int)param_1[1] - iVar2;
    if (iVar1 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 8),(longlong)iVar1 << 3);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - iVar3;
    if (param_3 == '\x01') {
      FUN_147c80654(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140625eca FUN_140625eca body=147 status=ok
// SIG undefined FUN_140625eca(void)

void FUN_140625eca(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  FUN_1406261d2();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    plVar4 = (longlong *)FUN_140625f5e(*(undefined8 *)(param_1 + 0x98),&local_20);
    puVar2 = (undefined8 *)*plVar4;
    puVar3 = (undefined8 *)*param_2;
    if (puVar3 != puVar2) {
      *param_2 = (longlong)puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
        UNLOCK();
      }
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
          (**(code **)*puVar3)(puVar3,1);
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



// FUNCTION 140625f5e FUN_140625f5e body=310 status=ok
// SIG undefined FUN_140625f5e(void)

undefined8 * FUN_140625f5e(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 *local_40;
  ulonglong *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_2;
  if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar5 = param_1 + 0x140;
    if (*(longlong *)(param_1 + 0x148) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x148);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x150) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar6 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar6 * 0x18);
        if (*puVar1 == uVar2) {
          if ((puVar1 != (ulonglong *)0x0) &&
             (puVar4 = (undefined8 *)puVar1[1], puVar4 != (undefined8 *)0x0)) goto LAB_140625fe1;
          break;
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
    }
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = &PTR_FUN_149f55a98;
  puVar4[1] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
  }
  local_30 = &local_40;
  local_38 = &local_48;
  local_48 = uVar2;
  local_40 = puVar4;
  FUN_1400496ee((longlong *)(param_1 + 0x108),local_24,&local_38,0);
LAB_140625fe1:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar4 + 1;
}



// FUNCTION 140626096 FUN_140626096 body=315 status=ok
// SIG undefined FUN_140626096(void)

void FUN_140626096(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140626100;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140626100:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 1406261d2 FUN_1406261d2 body=1054 status=ok
// SIG undefined FUN_1406261d2(void)

void FUN_1406261d2(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  uint local_4c;
  ulonglong *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar8 = *(longlong **)(param_1 + 0x90);
  puVar7 = (ulonglong *)plVar8[1];
  puVar1 = (uint *)*puVar7 + 1;
  if ((uint *)puVar7[1] < puVar1) {
    local_48 = (ulonglong *)CONCAT44(local_48._4_4_,(uint)(*param_2 != 0));
    (**(code **)(*plVar8 + 0x170))(plVar8,&local_48,4);
    uVar10 = (uint)local_48;
    if (1 < (uint)local_48) {
      FUN_14572541c(plVar8);
      uVar10 = (uint)local_48;
    }
  }
  else {
    uVar10 = *(uint *)*puVar7;
    *puVar7 = (ulonglong)puVar1;
  }
  if (uVar10 == 0) {
    *param_2 = 0;
    goto LAB_140626383;
  }
  plVar8 = *(longlong **)(param_1 + 0x90);
  if ((*(byte *)(plVar8 + 5) & 1) == 0) {
    if (((*(byte *)(plVar8 + 5) & 4) != 0) || ((*(byte *)((longlong)plVar8 + 0x2b) & 8) != 0)) {
      local_58 = *param_2;
      lVar2 = *(longlong *)(param_1 + 0x98);
      if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
        uVar10 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
        uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
        lVar6 = lVar2 + 0x48;
        if (*(longlong *)(lVar2 + 0x50) != 0) {
          lVar6 = *(longlong *)(lVar2 + 0x50);
        }
        iVar5 = *(int *)(lVar6 + (ulonglong)
                                 (*(int *)(lVar2 + 0x58) - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
        if (iVar5 != -1) {
          lVar6 = *(longlong *)(lVar2 + 0x10);
          iVar11 = iVar5;
          do {
            if (*(ulonglong *)(lVar6 + (longlong)iVar11 * 0x18) == local_58) goto LAB_14062651a;
            iVar11 = *(int *)(lVar6 + (longlong)iVar11 * 0x18 + 0x10);
          } while (iVar11 != -1);
        }
      }
      FUN_14042e8e0(lVar2 + 0x60,&local_48,&local_58,0);
      local_4c = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0);
      *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0) = local_4c + 1;
      local_40 = &local_4c;
      local_48 = &local_58;
      FUN_1467c4600(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      plVar8 = *(longlong **)(param_1 + 0x90);
      puVar7 = (ulonglong *)plVar8[1];
      puVar1 = (uint *)*puVar7 + 1;
      if ((uint *)puVar7[1] < puVar1) {
        if ((*(byte *)((longlong)plVar8 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar8 + 0x170))(plVar8,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(plVar8,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar7;
        *puVar7 = (ulonglong)puVar1;
      }
      uVar9 = *param_2;
      uVar4 = FUN_14004c990(param_1,uVar9);
      if (uVar4 != 0) {
        *param_2 = uVar4;
        uVar9 = uVar4;
      }
      FUN_14172c4ee(uVar9,param_1);
      FUN_146ca4900(*(longlong *)(param_1 + 0x98) + 0x60,local_58);
    }
    goto LAB_140626383;
  }
  puVar7 = (ulonglong *)plVar8[1];
  puVar1 = (uint *)*puVar7 + 1;
  if ((uint *)puVar7[1] < puVar1) {
    if ((*(byte *)((longlong)plVar8 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar8 + 0x170))(plVar8,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(plVar8,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar7;
    *puVar7 = (ulonglong)puVar1;
  }
  if (-1 < (int)local_4c) {
    iVar5 = local_4c + 1;
    plVar8 = *(longlong **)(param_1 + 0x98);
    iVar11 = (int)plVar8[1];
    uVar10 = iVar5 - iVar11;
    if (uVar10 != 0 && iVar11 <= iVar5) {
      *(int *)(plVar8 + 1) = iVar5;
      if ((uint)(*(int *)((longlong)plVar8 + 0xc) - iVar11) < uVar10) {
        FUN_1456bd870(plVar8);
      }
      memset((void *)((longlong)iVar11 * 8 + *plVar8),0,(ulonglong)uVar10 << 3);
      if ((int)local_4c < 0) goto LAB_1406263a5;
      plVar8 = *(longlong **)(param_1 + 0x98);
      iVar11 = (int)plVar8[1];
    }
    if ((int)local_4c < iVar11) {
      uVar9 = *(ulonglong *)(*plVar8 + (ulonglong)local_4c * 8);
      if (uVar9 == 0) {
        uVar9 = *param_2;
        uVar4 = FUN_14004c990(param_1,uVar9);
        if (uVar4 != 0) {
          *param_2 = uVar4;
          uVar9 = uVar4;
        }
        FUN_14004c296(&local_48,*(undefined1 *)(uVar9 + 0x1c));
        FUN_1406265f2(uVar9,param_1);
        local_58 = *param_2;
        local_40 = &local_4c;
        *(ulonglong *)(**(longlong **)(param_1 + 0x98) + (longlong)(int)local_4c * 8) = local_58;
        local_48 = &local_58;
        FUN_14004a1c4(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      }
      else {
        *param_2 = uVar9;
      }
      goto LAB_140626383;
    }
  }
LAB_1406263a5:
  FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
LAB_140626383:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar5 = (int)puVar7[2], iVar5 != -1) {
LAB_14062651a:
    puVar7 = (ulonglong *)(lVar6 + (longlong)iVar5 * 0x18);
    if (*puVar7 == local_58) goto LAB_140626553;
  }
  puVar7 = (ulonglong *)0x0;
LAB_140626553:
  puVar3 = *(undefined4 **)plVar8[1];
  if ((undefined4 *)((undefined8 *)plVar8[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar8 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar8 + 0x170))(plVar8,puVar7 + 1,4);
    }
    else {
      thunk_FUN_14572512c();
    }
  }
  else {
    *(undefined4 *)(puVar7 + 1) = *puVar3;
    *(longlong *)plVar8[1] = *(longlong *)plVar8[1] + 4;
  }
  goto LAB_140626383;
}



// FUNCTION 1406265f2 FUN_1406265f2 body=3562 status=ok
// SIG undefined FUN_1406265f2(void)

void FUN_1406265f2(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int *piVar6;
  ulonglong *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_248 [44];
  int local_21c;
  uint local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined2 uStack_20c;
  undefined2 uStack_20a;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined8 uStack_188;
  ulonglong local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  float local_150;
  float local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined2 local_9f;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  FUN_14004b8ea(param_1,param_2);
  FUN_1406274a0(param_1 + 0x20,param_2);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar13 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar13 < 0x1c) {
    FUN_146e4ddbe(param_2,param_1 + 0x60);
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  else {
    piVar6 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar6 + 1) {
      local_218 = (uint)*(byte *)(param_1 + 0x80);
      (**(code **)(*param_2 + 0x170))(param_2,&local_218,4);
      if (1 < local_218) {
        FUN_14572541c(param_2);
      }
      *(bool *)(param_1 + 0x80) = local_218 != 0;
      if (local_218 != 0) {
LAB_140626f0e:
        FUN_146e4ddbe(param_2,param_1 + 0x60);
        goto LAB_1406267c4;
      }
    }
    else {
      *(bool *)(param_1 + 0x80) = *piVar6 != 0;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      if ((*(byte *)(param_1 + 0x80) & 1) != 0) goto LAB_140626f0e;
    }
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x78) * 6,(longlong)*(int *)(param_1 + 0x7c) * 6
              );
    local_218 = 0;
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      local_218 = *(uint *)(param_1 + 0x78);
    }
    puVar7 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar7 + 1;
    if ((uint *)puVar7[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_218,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_218);
      }
    }
    else {
      local_218 = *(uint *)*puVar7;
      *puVar7 = (ulonglong)puVar1;
    }
    plVar16 = (longlong *)(param_1 + 0x70);
    if (local_218 == 0) {
      if (((*(byte *)(param_2 + 5) & 1) != 0) &&
         (*(undefined4 *)(param_1 + 0x78) = 0, *(int *)(param_1 + 0x7c) != 0)) {
        FUN_140c0fda2(plVar16,0);
      }
    }
    else if ((((int)local_218 < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
            ((0x2aaaaa < local_218 && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
      FUN_14572541c(param_2);
    }
    else if ((*(byte *)(param_2 + 5) & 1) == 0) {
      *(uint *)(param_1 + 0x78) = local_218;
      lVar19 = 0;
      lVar20 = 0;
      do {
        FUN_1406273dd(param_2,*(longlong *)(param_1 + 0x70) + lVar19);
        lVar20 = lVar20 + 1;
        lVar19 = lVar19 + 6;
      } while (lVar20 < *(int *)(param_1 + 0x78));
    }
    else {
      *(undefined4 *)(param_1 + 0x78) = 0;
      if ((*(uint *)(param_1 + 0x7c) == local_218) || (FUN_140c0fda2(plVar16), 0 < (int)local_218))
      {
        iVar13 = 0;
        do {
          iVar5 = *(int *)(param_1 + 0x78);
          *(uint *)(param_1 + 0x78) = iVar5 + 1U;
          if (*(uint *)(param_1 + 0x7c) < iVar5 + 1U) {
            FUN_14172d3d6(plVar16,iVar5);
          }
          FUN_1406273dd(param_2,(longlong)iVar5 * 6 + *plVar16);
          iVar13 = iVar13 + 1;
        } while (iVar13 < (int)local_218);
      }
    }
  }
LAB_1406267c4:
  FUN_140d03e72(param_2,param_1 + 0x88);
  iVar13 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar13 < 1) {
    local_218 = 0;
    uStack_214 = 0;
    FUN_146e0ebe6(param_2,&local_218);
    puVar15 = (undefined8 *)CONCAT44(uStack_214,local_218);
    if (puVar15 != (undefined8 *)0x0) {
      (**(code **)*puVar15)(puVar15,1);
    }
  }
  iVar13 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar13 < 10) {
    FUN_140c0c1f8(param_1);
  }
  else {
    iVar13 = FUN_1448332aa(param_2,&DAT_149e3cba8);
    if (iVar13 < 0xd) {
      uStack_210 = 0;
      uStack_20c = 1;
      local_218 = 0x49f483b0;
      uStack_214 = 1;
      local_1a0 = 0;
      uStack_19c = 0;
      uStack_198 = 0;
      local_208 = 0;
      uStack_204 = 0;
      iStack_200 = 0;
      uStack_1fc = 0;
      local_190 = 0;
      uStack_188 = 0;
      local_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_160 = 0x40f86a0000000000;
      FUN_146c9bf60(&local_218,param_2);
      FUN_140c0c1f8(param_1);
      FUN_146ca5886(&local_218);
    }
    else {
      iVar13 = FUN_1448332aa(param_2,&DAT_149e3cc78);
      if (iVar13 < 0x3d) {
        uStack_210 = 0;
        uStack_20c = 0x401;
        local_218 = 0x49f5f4b0;
        uStack_214 = 1;
        local_208 = 0;
        uStack_204 = 0;
        iStack_200 = 0;
        uStack_1fc = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_1d8 = 0;
        local_1d4 = 0xffffffffffffffff;
        local_1cc = 0xffffffff;
        local_1a8 = 0;
        local_1a0 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        uStack_19c = 0x80;
        uStack_198 = 0xffffffff;
        local_194 = 0;
        uStack_188 = 0;
        local_180 = local_180 & 0xffffffff00000000;
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_168 = 0;
        uStack_160 = 0;
        local_158 = 0;
        local_fc = 0;
        local_10c = 0;
        uStack_104 = 0;
        local_11c = 0;
        uStack_114 = 0;
        local_12c = 0;
        uStack_124 = 0;
        local_13c = 0;
        uStack_134 = 0;
        local_f8 = 0x100000000c;
        uStack_f0 = 0x47c35000;
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = 0;
        local_9f = 0x101;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_150 = (float)DAT_14c75efb8;
        local_58 = 0;
        uStack_50 = 0;
        local_14c = 1.0;
        if (0 < DAT_14c75efb8) {
          local_14c = 1.0 / local_150;
        }
        local_148 = DAT_14c75efbc;
        local_144 = DAT_14c75efc0;
        local_140 = DAT_14c75efc4;
        FUN_146e4df74(&local_218,param_2);
        if (iStack_200 == 0) {
          FUN_140c0c1f8(param_1);
        }
        else {
          FUN_140c0eace(param_1,&local_218);
        }
        FUN_140c0c5dc(&local_218);
      }
      else {
        (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
        (**(code **)(*param_2 + 0x10))
                  (param_2,(longlong)*(int *)(param_1 + 0xe8) * 0x50,
                   (longlong)*(int *)(param_1 + 0xec) * 0x50);
        local_21c = *(int *)(param_1 + 0xe8);
        puVar7 = (ulonglong *)param_2[1];
        piVar6 = (int *)*puVar7 + 1;
        if ((int *)puVar7[1] < piVar6) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_21c,4);
          }
          else {
            thunk_FUN_14572512c(param_2,&local_21c);
          }
        }
        else {
          local_21c = *(int *)*puVar7;
          *puVar7 = (ulonglong)piVar6;
        }
        if (local_21c < 0) {
LAB_1406272a4:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(local_21c);
        }
        plVar16 = (longlong *)(param_1 + 0xe0);
        if (*(int *)(param_1 + 0xec) < local_21c) {
          FUN_14062787a(plVar16,local_21c);
        }
        iVar13 = *(int *)(param_1 + 0xe8);
        if (iVar13 < local_21c) {
          *(int *)(param_1 + 0xe8) = local_21c;
          uVar18 = local_21c - iVar13;
          if ((uint)(*(int *)(param_1 + 0xec) - iVar13) < uVar18) {
            FUN_140c0fee4(plVar16,iVar13);
          }
          FUN_14062746a((longlong)iVar13 * 0x50 + *plVar16,uVar18);
        }
        else {
          if (local_21c < 0) goto LAB_1406272a4;
          if (local_21c < iVar13) {
            *(int *)(param_1 + 0xe8) = local_21c;
            FUN_146e4e208(plVar16);
          }
        }
        if (0 < local_21c) {
          lVar19 = 0x40;
          lVar20 = 0;
          do {
            lVar8 = *plVar16;
            auVar4 = *(undefined1 (*) [16])(lVar8 + -0x30 + lVar19);
            auVar21 = insertps(*(undefined1 (*) [16])(lVar8 + -0x40 + lVar19),auVar4,0x30);
            local_218 = auVar21._0_4_;
            uStack_214 = auVar21._4_4_;
            uStack_210 = auVar21._8_4_;
            uStack_20c = auVar21._12_2_;
            uStack_20a = auVar21._14_2_;
            uVar9 = extractps(auVar4,1);
            local_208 = (undefined4)uVar9;
            puVar3 = (undefined4 *)(lVar8 + lVar19);
            uVar9 = extractps(auVar4,2);
            uStack_204 = (undefined4)uVar9;
            iStack_200 = (int)((ulonglong)uVar9 >> 0x20);
            FUN_14004b71e(param_2,&local_218);
            auVar4._4_4_ = uStack_214;
            auVar4._0_4_ = local_218;
            auVar4._8_4_ = uStack_210;
            auVar21._2_2_ = uStack_20a;
            auVar21._0_2_ = uStack_20c;
            auVar21._4_4_ = local_208;
            auVar21._8_4_ = uStack_204;
            auVar21._12_4_ = 0;
            auVar4._12_4_ = 0;
            *(undefined1 (*) [16])(lVar8 + -0x40 + lVar19) = auVar4;
            *(undefined1 (*) [16])(lVar8 + -0x30 + lVar19) = auVar21;
            puVar17 = *(undefined4 **)param_2[1];
            if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar17 + 1) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,puVar3,4);
              }
              else {
                thunk_FUN_14572512c(param_2,puVar3);
              }
            }
            else {
              *puVar3 = *puVar17;
              *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
            }
            puVar17 = (undefined4 *)(lVar19 + lVar8 + 8);
            puVar3 = *(undefined4 **)param_2[1];
            if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,puVar17,4);
              }
              else {
                thunk_FUN_14572512c(param_2);
              }
            }
            else {
              *puVar17 = *puVar3;
              *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
            }
            lVar2 = lVar19 + lVar8;
            puVar17 = (undefined4 *)(lVar2 + 4);
            auVar4 = *(undefined1 (*) [16])(lVar2 + -0x10);
            auVar21 = insertps(*(undefined1 (*) [16])(lVar2 + -0x20),auVar4,0x30);
            local_218 = auVar21._0_4_;
            uStack_214 = auVar21._4_4_;
            uStack_210 = auVar21._8_4_;
            uStack_20c = auVar21._12_2_;
            uStack_20a = auVar21._14_2_;
            uVar9 = extractps(auVar4,1);
            local_208 = (undefined4)uVar9;
            uVar9 = extractps(auVar4,2);
            uStack_204 = (undefined4)uVar9;
            iStack_200 = (int)((ulonglong)uVar9 >> 0x20);
            FUN_14004b71e(param_2,&local_218);
            auVar10._4_4_ = uStack_214;
            auVar10._0_4_ = local_218;
            auVar10._8_4_ = uStack_210;
            auVar22._2_2_ = uStack_20a;
            auVar22._0_2_ = uStack_20c;
            auVar22._4_4_ = local_208;
            auVar22._8_4_ = uStack_204;
            auVar22._12_4_ = 0;
            auVar10._12_4_ = 0;
            *(undefined1 (*) [16])(lVar2 + -0x20) = auVar10;
            *(undefined1 (*) [16])(lVar2 + -0x10) = auVar22;
            puVar3 = *(undefined4 **)param_2[1];
            if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,puVar17,4);
              }
              else {
                thunk_FUN_14572512c(param_2,puVar17);
              }
            }
            else {
              *puVar17 = *puVar3;
              *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
            }
            puVar17 = (undefined4 *)(lVar19 + lVar8 + 0xc);
            puVar3 = *(undefined4 **)param_2[1];
            if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,puVar17,4);
              }
              else {
                thunk_FUN_14572512c(param_2);
              }
            }
            else {
              *puVar17 = *puVar3;
              *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
            }
            lVar20 = lVar20 + 1;
            lVar19 = lVar19 + 0x50;
          } while (lVar20 < local_21c);
        }
        (**(code **)(*param_2 + 0x10))
                  (param_2,(longlong)*(int *)(param_1 + 0xf8) << 5,
                   (longlong)*(int *)(param_1 + 0xfc) << 5);
        local_21c = *(int *)(param_1 + 0xf8);
        puVar7 = (ulonglong *)param_2[1];
        piVar6 = (int *)*puVar7 + 1;
        if ((int *)puVar7[1] < piVar6) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_21c,4);
          }
          else {
            thunk_FUN_14572512c(param_2,&local_21c);
          }
        }
        else {
          local_21c = *(int *)*puVar7;
          *puVar7 = (ulonglong)piVar6;
        }
        if (local_21c < 0) goto LAB_1406272a4;
        plVar16 = (longlong *)(param_1 + 0xf0);
        if (*(int *)(param_1 + 0xfc) < local_21c) {
          FUN_1406275f6(plVar16,local_21c);
        }
        iVar13 = *(int *)(param_1 + 0xf8);
        if (iVar13 < local_21c) {
          *(int *)(param_1 + 0xf8) = local_21c;
          uVar18 = local_21c - iVar13;
          if ((uint)(*(int *)(param_1 + 0xfc) - iVar13) < uVar18) {
            FUN_140c0faee(plVar16,iVar13);
          }
          FUN_140627448((longlong)iVar13 * 0x20 + *plVar16,uVar18);
        }
        else {
          if (local_21c < 0) goto LAB_1406272a4;
          if (local_21c < iVar13) {
            *(int *)(param_1 + 0xf8) = local_21c;
            FUN_146e4e2b6(plVar16);
          }
        }
        if (0 < local_21c) {
          lVar20 = 0x10;
          lVar19 = 0;
          do {
            lVar8 = *plVar16;
            auVar4 = *(undefined1 (*) [16])(lVar8 + lVar20);
            auVar21 = insertps(*(undefined1 (*) [16])(lVar8 + -0x10 + lVar20),auVar4,0x30);
            local_218 = auVar21._0_4_;
            uStack_214 = auVar21._4_4_;
            uStack_210 = auVar21._8_4_;
            uStack_20c = auVar21._12_2_;
            uStack_20a = auVar21._14_2_;
            uVar9 = extractps(auVar4,1);
            local_208 = (undefined4)uVar9;
            uVar9 = extractps(auVar4,2);
            uStack_204 = (undefined4)uVar9;
            iStack_200 = (int)((ulonglong)uVar9 >> 0x20);
            FUN_14004b71e(param_2,&local_218);
            auVar11._4_4_ = uStack_214;
            auVar11._0_4_ = local_218;
            auVar11._8_4_ = uStack_210;
            auVar12._2_2_ = uStack_20a;
            auVar12._0_2_ = uStack_20c;
            auVar12._4_4_ = local_208;
            auVar12._8_4_ = uStack_204;
            auVar11._12_4_ = 0;
            *(undefined1 (*) [16])(lVar8 + -0x10 + lVar20) = auVar11;
            auVar12._12_4_ = 0;
            *(undefined1 (*) [16])(lVar8 + lVar20) = auVar12;
            lVar19 = lVar19 + 1;
            lVar20 = lVar20 + 0x20;
          } while (lVar19 < local_21c);
        }
        iVar13 = FUN_1448332aa(param_2,&DAT_149e3cc78);
        if (iVar13 < 0x47) {
          local_218 = 0;
          uStack_214 = 0;
          uStack_210 = 0;
          uStack_20c = 0;
          uStack_20a = 0;
          FUN_1406276ca(param_2,&local_218);
          if (CONCAT44(uStack_214,local_218) != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  iVar13 = FUN_1448332aa(param_2,&DAT_149e3cc78);
  if (iVar13 < 0x47) {
    FUN_140c0c1f8(param_1);
  }
  iVar13 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (0x12 < iVar13) {
    FUN_144a67fb4(param_2,param_1 + 0xb8);
  }
  iVar13 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (0x20 < iVar13) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (*(longlong *)(param_1 + 200) == 0) {
        local_218 = 0;
        uStack_214 = 0;
        uStack_210 = 0;
        uStack_20c = 0;
        uStack_20a = 0;
        FUN_1406276ca(param_2,&local_218);
        plVar16 = (longlong *)CONCAT44(uStack_214,local_218);
        if ((longlong *)CONCAT44(uStack_214,local_218) != (longlong *)0x0) goto LAB_14062733e;
      }
      else {
        FUN_1406276ca(param_2);
      }
    }
    else {
      plVar14 = (longlong *)FUN_14001cc68(0x10,0x10);
      *plVar14 = 0;
      plVar14[1] = 0;
      FUN_1406276ca(param_2,plVar14);
      if ((int)plVar14[1] == 0) {
        if (plVar14 != (longlong *)0x0) {
          plVar16 = plVar14;
          if (*plVar14 != 0) {
            FUN_1400020a8();
          }
          goto LAB_14062733e;
        }
      }
      else {
        plVar16 = *(longlong **)(param_1 + 200);
        *(longlong **)(param_1 + 200) = plVar14;
        if (plVar16 != (longlong *)0x0) {
          if (*plVar16 != 0) {
            FUN_1400020a8();
          }
LAB_14062733e:
          FUN_1400020a8(plVar16);
        }
      }
    }
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbf8);
  iVar13 = FUN_1448332aa(param_2,&DAT_149e3cbf8);
  if (4 < iVar13) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      puVar15 = *(undefined8 **)(param_1 + 0xd0);
      if (puVar15 == (undefined8 *)0x0) {
        local_218 = 0;
        uStack_214 = 0;
        uStack_210 = 0;
        uStack_20c = 0;
        uStack_20a = 0;
        FUN_1406276ca(param_2,&local_218);
        if (CONCAT44(uStack_214,local_218) != 0) {
          FUN_1400020a8();
        }
        goto LAB_140626e0d;
      }
    }
    else {
      puVar15 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar15 = 0;
      puVar15[1] = 0;
      plVar16 = *(longlong **)(param_1 + 0xd0);
      *(undefined8 **)(param_1 + 0xd0) = puVar15;
      if (plVar16 != (longlong *)0x0) {
        if (*plVar16 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar16);
        puVar15 = *(undefined8 **)(param_1 + 0xd0);
      }
    }
    FUN_1406276ca(param_2,puVar15);
  }
LAB_140626e0d:
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406273dd FUN_1406273dd body=107 status=ok
// SIG undefined FUN_1406273dd(void)

longlong * FUN_1406273dd(longlong *param_1,longlong param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = *(undefined2 **)param_1[1];
    if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined2 *)(param_2 + lVar2),2);
      }
      else {
        thunk_FUN_1457251a8(param_1);
      }
    }
    else {
      *(undefined2 *)(param_2 + lVar2) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
    }
    lVar2 = lVar2 + 2;
  } while (lVar2 != 6);
  return param_1;
}



// FUNCTION 140627448 FUN_140627448 body=34 status=ok
// SIG undefined FUN_140627448(void)

void FUN_140627448(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0x7f7fc99e7f7fc99e;
    param_1[1] = 0x7f7fc99e7f7fc99e;
    param_1[2] = 0xff7fc99eff7fc99e;
    param_1[3] = 0xff7fc99eff7fc99e;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 14062746a FUN_14062746a body=54 status=ok
// SIG undefined FUN_14062746a(void)

void FUN_14062746a(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0x7f7fc99e7f7fc99e;
    param_1[1] = 0x7f7fc99e7f7fc99e;
    param_1[2] = 0xff7fc99eff7fc99e;
    param_1[3] = 0xff7fc99eff7fc99e;
    param_1[4] = 0x7f7fc99e7f7fc99e;
    param_1[5] = 0x7f7fc99e7f7fc99e;
    param_1[6] = 0xff7fc99eff7fc99e;
    param_1[7] = 0xff7fc99eff7fc99e;
    param_1[8] = 0xffffffffffffffff;
    param_1[9] = 0;
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 1406274a0 FUN_1406274a0 body=211 status=ok
// SIG undefined FUN_1406274a0(void)

void FUN_1406274a0(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_2c = 1;
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    uVar7 = local_2c;
    if (1 < local_2c) {
      FUN_14572541c(param_2);
      uVar7 = local_2c;
    }
  }
  else {
    uVar7 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if (uVar7 != 0) {
    FUN_1447396de(param_2,param_1 + 0x28);
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    iVar3 = *(int *)(param_1 + 0x10);
    if ((longlong)iVar3 != 0) {
      lVar5 = *(longlong *)(param_1 + 8);
      lVar8 = 0;
      do {
        plVar6 = *(longlong **)(lVar5 + lVar8);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 8))(plVar6,uVar2);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar3 * 8 != lVar8);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140627580 FUN_140627580 body=118 status=ok
// SIG undefined FUN_140627580(void)

void FUN_140627580(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140aacb36(param_1,iVar1);
    }
    FUN_1447399d0((longlong)iVar1 * 0xc + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_140aacd98(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1406275f6 FUN_1406275f6 body=212 status=ok
// SIG undefined FUN_1406275f6(void)

void FUN_1406275f6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x400) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,0x10);
  }
  return;
}



// FUNCTION 1406276ca FUN_1406276ca body=430 status=ok
// SIG undefined FUN_1406276ca(void)

longlong * FUN_1406276ca(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  local_2c = (int)param_2[1];
  puVar3 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    local_2c = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if (local_2c < 0) {
LAB_140627852:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_2c);
  }
  if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
    FUN_14481578e(param_2);
  }
  iVar2 = (int)param_2[1];
  if (iVar2 < local_2c) {
    *(int *)(param_2 + 1) = local_2c;
    uVar5 = local_2c - iVar2;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar5) {
      FUN_1446f48e2(param_2);
    }
    memset((void *)((longlong)iVar2 * 4 + *param_2),0,(longlong)(int)uVar5 << 2);
  }
  else {
    if (local_2c < 0) goto LAB_140627852;
    if (local_2c < iVar2) {
      *(int *)(param_2 + 1) = local_2c;
      FUN_14479f406(param_2);
    }
  }
  if (0 < local_2c) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      puVar4 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(*param_2 + lVar6),4);
        }
        else {
          thunk_FUN_14572512c(param_1);
        }
      }
      else {
        *(undefined4 *)(*param_2 + lVar6) = *puVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 4;
    } while (lVar7 < local_2c);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14062787a FUN_14062787a body=230 status=ok
// SIG undefined FUN_14062787a(void)

void FUN_14062787a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x19a) {
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,0x10);
  }
  return;
}



// FUNCTION 140627960 FUN_140627960 body=947 status=ok
// SIG undefined FUN_140627960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140627960(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  bool bVar9;
  uint uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  *(undefined1 *)(*(longlong *)(param_1 + 0x9c8) + 0xd08) = DAT_14c75f32d;
  uVar5 = DAT_14c75f3b1;
  uVar8 = DAT_14c75f390;
  iVar3 = DAT_14c75f38c;
  iVar2 = DAT_14c75f388;
  lVar1 = *(longlong *)(param_1 + 0x9c8);
  *(bool *)(lVar1 + 0xd81) = DAT_14c9972b8 != 0;
  *(bool *)(lVar1 + 0xd82) = iVar2 != 0;
  *(bool *)(lVar1 + 0xd83) = iVar3 != 0;
  *(undefined1 *)(lVar1 + 0xd84) = uVar8;
  *(undefined1 *)(lVar1 + 0xd85) = uVar5;
  uVar7 = DAT_14c997320;
  uVar6 = DAT_14c75f3a1;
  uVar5 = DAT_14c75f3a0;
  uVar4 = DAT_14c75f39c;
  uVar8 = DAT_14c75f32c;
  lVar1 = *(longlong *)(param_1 + 0x9c8);
  dVar12 = (double)_DAT_14c75f394;
  dVar13 = (double)_DAT_14c75f398;
  dVar15 = (double)_DAT_14c75f35c;
  dVar16 = (double)_DAT_14c75f360;
  dVar17 = (double)_DAT_14c75f364;
  dVar14 = (double)_DAT_14c75f3a4;
  *(double *)(lVar1 + 0x918) = (double)_DAT_14c75f358;
  *(double *)(lVar1 + 0x920) = dVar15;
  *(double *)(lVar1 + 0x928) = dVar16;
  *(double *)(lVar1 + 0x930) = dVar17;
  *(double *)(lVar1 + 0x938) = dVar12;
  *(double *)(lVar1 + 0x940) = dVar13;
  *(undefined4 *)(lVar1 + 0x948) = uVar4;
  *(undefined4 *)(lVar1 + 0x94c) = uVar7;
  *(undefined1 *)(lVar1 + 0x950) = uVar8;
  *(undefined1 *)(lVar1 + 0x952) = 0;
  *(undefined1 *)(lVar1 + 0x953) = uVar5;
  *(undefined1 *)(lVar1 + 0x954) = uVar6;
  *(double *)(lVar1 + 0x980) = dVar14;
  if (DAT_14c997220 == '\x01') {
    FUN_146e11b58(*(undefined8 *)(param_1 + 0x9c8));
    DAT_14c997220 = '\0';
  }
  if (-1 < DAT_14c75f338) {
    *(int *)(*(longlong *)(param_1 + 0x9c8) + 0xd44) = DAT_14c75f338;
  }
  if (-1 < DAT_14c75f33c) {
    *(int *)(*(longlong *)(param_1 + 0x9c8) + 0xd48) = DAT_14c75f33c;
  }
  iVar2 = DAT_14c75f344;
  lVar1 = *(longlong *)(param_1 + 0x9c8);
  if (-1 < DAT_14c75f340) {
    *(int *)(lVar1 + 0xd4c) = DAT_14c75f340;
  }
  if (-1 < iVar2) {
    *(int *)(lVar1 + 0xd50) = iVar2;
  }
  bVar9 = true;
  if (*(int *)(lVar1 + 0xd4c) < 1) {
    bVar9 = 0 < *(int *)(lVar1 + 0xd50);
  }
  *(bool *)(lVar1 + 0x249) = bVar9;
  if (-1 < (int)DAT_14c75f348) {
    uVar10 = 0x7f;
    if (DAT_14c75f348 < 0x7f) {
      uVar10 = DAT_14c75f348;
    }
    *(char *)(*(longlong *)(param_1 + 0x9c8) + 0x278) = (char)uVar10;
  }
  if (-1 < (int)DAT_14c75f34c) {
    uVar10 = 0x7f;
    if (DAT_14c75f34c < 0x7f) {
      uVar10 = DAT_14c75f34c;
    }
    *(char *)(*(longlong *)(param_1 + 0x9c8) + 0x279) = (char)uVar10;
  }
  if (-1 < (int)DAT_14c75f350) {
    uVar10 = 0x7f;
    if (DAT_14c75f350 < 0x7f) {
      uVar10 = DAT_14c75f350;
    }
    *(char *)(*(longlong *)(param_1 + 0x9c8) + 0x27a) = (char)uVar10;
  }
  if (0.0 <= DAT_14c75f368) {
    *(double *)(*(longlong *)(param_1 + 0x9c8) + 0xd58) = (double)DAT_14c75f368;
  }
  if ((0.0 <= DAT_14c75f36c) && (0.0 <= DAT_14c75f370)) {
    dVar14 = (double)DAT_14c75f370;
    lVar1 = *(longlong *)(param_1 + 0x9c8);
    *(double *)(lVar1 + 0xd60) = (double)DAT_14c75f36c;
    *(double *)(lVar1 + 0xd68) = dVar14;
  }
  if ((0.0 <= DAT_14c75f374) && (0.0 <= DAT_14c75f378)) {
    dVar14 = (double)DAT_14c75f378;
    lVar1 = *(longlong *)(param_1 + 0x9c8);
    *(double *)(lVar1 + 0xd70) = (double)DAT_14c75f374;
    *(double *)(lVar1 + 0xd78) = dVar14;
  }
  if (0.0 <= DAT_14c75f37c) {
    dVar14 = (double)DAT_14c75f37c;
    if ((double)DAT_14c75f37c <= 0.0) {
      dVar14 = 0.0;
    }
    *(double *)(*(longlong *)(param_1 + 0x9c8) + 0xd38) = dVar14;
  }
  if (0.0 <= DAT_14c75f380) {
    fVar11 = DAT_14c75f380;
    if (1e+10 <= DAT_14c75f380) {
      fVar11 = 1e+10;
    }
    *(float *)(*(longlong *)(param_1 + 0x9c8) + 0xd40) = fVar11;
  }
  if (-1 < DAT_14c75f354) {
    lVar1 = *(longlong *)(param_1 + 0x9c8);
    uVar8 = FUN_140627d14(param_1);
    *(undefined1 *)(lVar1 + 0xd0c) = uVar8;
    *(undefined1 *)(lVar1 + 0xcc4) = uVar8;
    *(undefined1 *)(lVar1 + 0x248) = uVar8;
  }
  return;
}



// FUNCTION 140627d14 FUN_140627d14 body=73 status=ok
// SIG undefined FUN_140627d14(void)

undefined8 FUN_140627d14(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  if (((*(char *)(param_1 + 0x278) == '\0') && (*(longlong *)(param_1 + 0x1c0) == 0)) &&
     (DAT_14c75f354 < 1)) {
    lVar1 = FUN_14091baa4();
    ppuVar3 = &PTR_PTR_14c75ef90;
    if (*(undefined ***)(lVar1 + 8) != (undefined **)0x0) {
      ppuVar3 = *(undefined ***)(lVar1 + 8);
    }
    uVar2 = (**(code **)(*ppuVar3 + 0x10))();
    return uVar2;
  }
  return 1;
}



// FUNCTION 140627d5e FUN_140627d5e body=172 status=ok
// SIG undefined FUN_140627d5e(void)

void FUN_140627d5e(longlong *param_1)

{
  FUN_140627e0a(param_1 + 0xf);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7bbd(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_14018429c(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_144756766(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140627e0a FUN_140627e0a body=162 status=ok
// SIG undefined FUN_140627e0a(void)

void FUN_140627e0a(longlong *param_1)

{
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_140627eac(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140627eac(param_1[10],(int)param_1[0xb]);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7bbd(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140627eac FUN_140627eac body=45 status=ok
// SIG undefined FUN_140627eac(void)

void FUN_140627eac(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140627eda FUN_140627eda body=282 status=ok
// SIG undefined FUN_140627eda(void)

undefined8 FUN_140627eda(char *param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 8) != 0) && (cVar1 = *param_2, param_1[0x11] != cVar1)) {
    if (*param_1 != '\x01') {
      param_1[0x11] = cVar1;
      FUN_1408d9e0e(param_1 + 0x18,0);
      param_1[0xa0] = '\0';
      param_1[0xa1] = '\0';
      param_1[0xa2] = '\0';
      param_1[0xa3] = '\0';
      if (*(int *)(param_1 + 0xa4) != 0) {
        FUN_140115c12(param_1 + 0x98,0);
      }
      param_1[0x90] = '\0';
      param_1[0x91] = '\0';
      param_1[0x92] = '\0';
      param_1[0x93] = '\0';
      param_1[0x94] = '\0';
      param_1[0x95] = '\0';
      param_1[0x96] = '\0';
      param_1[0x97] = '\0';
      local_68[2] = 0;
      local_68[3] = 0;
      FUN_1414243c2(param_1[0x10]);
      local_68[0] = 0;
      local_68[1] = 0;
      FUN_1414243c2(param_1[0x11],local_68);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x510))
                (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x11);
      FUN_141886540(param_1 + 0xc0,*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x11);
      FUN_14130e120(param_1);
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      if (local_68[2] != 0) {
        FUN_1400020a8();
      }
      uVar2 = 1;
      goto LAB_140627f12;
    }
    param_1[1] = cVar1;
  }
  uVar2 = 0;
LAB_140627f12:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140627ff6 FUN_140627ff6 body=160 status=ok
// SIG undefined FUN_140627ff6(void)

void FUN_140627ff6(longlong *param_1,undefined4 param_2)

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
        goto LAB_140628081;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140628081:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140628096 FUN_140628096 body=164 status=ok
// SIG undefined FUN_140628096(void)

int FUN_140628096(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_1456ffb1c(param_1,param_2,1);
  if (lVar2 == 0) {
    iVar1 = -1;
  }
  else {
    local_30 = 0;
    FUN_1405593a8(param_1 + 0x620,&local_30,param_3);
    FUN_140559328(lVar2 + 0x70,&local_30);
    *(undefined1 *)(lVar2 + 0x92) = 1;
    iVar1 = (uint)*(byte *)(lVar2 + 0x90) + *(int *)(lVar2 + 0x94) + (uint)*(byte *)(lVar2 + 0x91) +
            1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14062813c FUN_14062813c body=164 status=ok
// SIG undefined FUN_14062813c(void)

int FUN_14062813c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_1456ffb1c(param_1,param_2,0);
  iVar1 = -1;
  if (lVar2 != 0) {
    local_30 = 0;
    FUN_1405593a8(param_1 + 0x620,&local_30,param_3);
    FUN_147091256(lVar2 + 0x70,&local_30);
    *(undefined1 *)(lVar2 + 0x92) = 1;
    iVar1 = (uint)*(byte *)(lVar2 + 0x90) + *(int *)(lVar2 + 0x94) + (uint)*(byte *)(lVar2 + 0x91) +
            1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406281e2 FUN_1406281e2 body=186 status=ok
// SIG undefined FUN_1406281e2(void)

ulonglong FUN_1406281e2(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*param_2 != param_1[0x6b]) {
    cVar1 = (**(code **)(*param_1 + 0x558))();
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      local_38 = param_1[0x6b];
      param_1[0x6b] = *param_2;
      FUN_14886533e(param_1 + 0x65,param_1,&local_38,param_1 + 0x6b);
      FUN_14886533e(param_1 + 0x68,param_1,&local_38,param_1 + 0x6b);
      (**(code **)(*param_1 + 0x560))(param_1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14062829e FUN_14062829e body=396 status=ok
// SIG undefined FUN_14062829e(void)

void FUN_14062829e(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  
  (**(code **)(*param_1 + 0x348))();
  bVar1 = *(byte *)(param_1 + 0xe);
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar5 = param_1[4];
  }
  else {
    lVar5 = 0;
  }
  plVar2 = (longlong *)FUN_14062842a(lVar5,param_1);
  if (0 < (int)plVar2[1]) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      if ((*(uint *)(param_1 + 0xc) == (uint)bVar1 ||
           (int)*(uint *)(param_1 + 0xc) < (int)(uint)bVar1) ||
         (*(int *)(param_1[0xb] + 8 + (ulonglong)bVar1 * 0x10) <= lVar5)) {
LAB_1406283f2:
        *(undefined8 *)(*(longlong *)(*plVar2 + lVar6) + 0x90) = 0;
        *(undefined8 *)(*(longlong *)(*plVar2 + lVar6) + 0x98) = 0;
        *(undefined8 *)(*(longlong *)(*plVar2 + lVar6) + 0x80) = 0;
        dVar7 = 0.0;
      }
      else {
        lVar4 = *(longlong *)(*plVar2 + lVar6);
        if (lVar4 != 0) {
          lVar3 = FUN_140628492();
          if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
             (*(char *)(lVar4 + 0x2b0) != '\0')) goto LAB_1406283f2;
        }
        lVar4 = (ulonglong)bVar1 * 0x10;
        *(double *)(*(longlong *)(*plVar2 + lVar6) + 0x90) =
             (double)*(float *)(*(longlong *)(param_1[0xb] + lVar4) + lVar6 * 2);
        *(double *)(*(longlong *)(*plVar2 + lVar6) + 0x98) =
             (double)*(float *)(*(longlong *)(param_1[0xb] + lVar4) + 4 + lVar6 * 2);
        *(double *)(*(longlong *)(*plVar2 + lVar6) + 0x80) =
             (double)*(float *)(*(longlong *)(param_1[0xb] + lVar4) + 8 + lVar6 * 2);
        dVar7 = (double)*(float *)(*(longlong *)(param_1[0xb] + lVar4) + 0xc + lVar6 * 2);
      }
      *(double *)(*(longlong *)(*plVar2 + lVar6) + 0x88) = dVar7;
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (lVar5 < (int)plVar2[1]);
  }
  return;
}



// FUNCTION 14062842a FUN_14062842a body=103 status=ok
// SIG undefined FUN_14062842a(void)

undefined8 * FUN_14062842a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x1150) != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar3);
      if (*(longlong *)(lVar2 + 0x2a0) == param_2) {
        if (lVar2 != 0) goto LAB_14062845a;
        break;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 0x1150) * 8 != lVar3);
  }
  lVar2 = FUN_14572ad1a(DAT_14cb0d2b0,0);
LAB_14062845a:
  puVar1 = &DAT_14cb0d060;
  if (*(longlong *)(lVar2 + 0x2a8) != 0) {
    puVar1 = (undefined8 *)(*(longlong *)(lVar2 + 0x2a8) + 0x38);
  }
  return puVar1;
}



// FUNCTION 140628492 FUN_140628492 body=228 status=ok
// SIG undefined FUN_140628492(void)

longlong FUN_140628492(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb604c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1417de738;
    local_20 = &LAB_145893408;
    local_28 = FUN_143564180;
    local_38 = &LAB_1486c5305;
    local_40 = FUN_1464ec659;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x2e0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxLocalPlayer",&DAT_14cb604c0,FUN_1464ec632);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb604c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140628578 FUN_140628578 body=414 status=ok
// SIG undefined FUN_140628578(void)

void FUN_140628578(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  lVar3 = FUN_140628716();
  lVar8 = *(longlong *)(lVar3 + 0x110);
  if (lVar8 == 0) {
    FUN_140aa6c08(lVar3);
    lVar8 = *(longlong *)(lVar3 + 0x110);
    uVar9 = 0;
    if (lVar8 == 0) goto LAB_14062863e;
  }
  uVar9 = 0;
  if (((*(char *)(lVar8 + 0x58) == '\x01') && (uVar9 = 0, *(char *)(param_1 + 0x3c8) == '\0')) &&
     (uVar9 = 0, *(int *)(param_1 + 0x428) == -1)) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar6 = 0;
    }
    plVar4 = (longlong *)FUN_14062842a(uVar6,param_1);
    lVar3 = plVar4[1];
    uVar9 = 0;
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = *plVar4;
      lVar10 = 0;
      uVar7 = 0;
      do {
        lVar2 = *(longlong *)(lVar1 + lVar10);
        uVar9 = 1;
        if (lVar2 != 0) {
          lVar5 = FUN_140628492();
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
            uVar9 = *(byte *)(lVar2 + 0x2b0) ^ 1;
          }
        }
        uVar7 = uVar7 + uVar9;
        lVar10 = lVar10 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar10);
      uVar9 = 0;
      if (1 < uVar7) {
        if (uVar7 == 3) {
          if (*(byte *)(lVar8 + 0x5a) < 4) {
            uVar9 = *(byte *)(lVar8 + 0x5a) + 3;
          }
        }
        else if (uVar7 == 2) {
          uVar9 = 1;
          if (*(char *)(lVar8 + 0x59) != '\0') {
            uVar9 = (uint)(*(char *)(lVar8 + 0x59) == '\x01') * 2;
          }
        }
        else if (*(byte *)(lVar8 + 0x5b) < 3) {
          uVar9 = *(byte *)(lVar8 + 0x5b) + 7;
        }
      }
    }
  }
LAB_14062863e:
  if ((uVar9 != *(byte *)(param_1 + 0x70)) && ((longlong)*(int *)(param_1 + 0x418) != 0)) {
    lVar8 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x410) + 8 + lVar8) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x410) + lVar8) != 0)) {
        FUN_140627ff6(param_1 + 0x410,uVar9);
        break;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x418) * 0x10 != lVar8);
  }
  *(char *)(param_1 + 0x70) = (char)uVar9;
  return;
}



// FUNCTION 140628716 FUN_140628716 body=221 status=ok
// SIG undefined FUN_140628716(void)

longlong FUN_140628716(void)

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
  if (DAT_14c990a70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146b166e8;
    local_40 = FUN_146283197;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x120;
    FUN_14081cfa3(L"/Script/EngineSettings",L"GameMapsSettings",&DAT_14c990a70,FUN_146283170);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c990a70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406287f4 FUN_1406287f4 body=44 status=ok
// SIG undefined FUN_1406287f4(void)

void FUN_1406287f4(int *param_1)

{
  longlong lVar1;
  
  if ((*param_1 != 0) && (*(longlong *)(param_1 + 2) != 0)) {
    lVar1 = FUN_144a8c772();
    if (lVar1 != 0) {
      FUN_143eb1c12(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140628820 thunk_FUN_1402735c8 body=5 status=ok
// SIG undefined thunk_FUN_1402735c8(void)

longlong * thunk_FUN_1402735c8(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  longlong *plStack_40;
  longlong *plStack_38;
  longlong lStack_28;
  ulonglong uStack_18;
  
  plVar6 = DAT_14cb91a78;
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb91a78 == (longlong *)0x0) {
    (*(code *)PTR_FUN_14c763a90)(&plStack_40);
    plVar1 = plStack_38;
    plVar6 = DAT_14cb91a80;
    DAT_14cb91a78 = plStack_40;
    if (plStack_38 == (longlong *)0x0) {
      if (DAT_14cb91a80 != (longlong *)0x0) {
        DAT_14cb91a80 = (longlong *)0x0;
LAB_1402736e7:
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
joined_r0x00014027371e:
          if (iVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plStack_38 + 1) = (int)plStack_38[1] + 1;
      plVar6 = DAT_14cb91a80;
      UNLOCK();
      if (plStack_38 == DAT_14cb91a80) {
        LOCK();
        plVar6 = plStack_38 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plStack_38)(plStack_38);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
          plVar6 = plVar1;
          goto joined_r0x00014027371e;
        }
      }
      else {
        DAT_14cb91a80 = plStack_38;
        if (plVar6 != (longlong *)0x0) goto LAB_1402736e7;
      }
    }
    if (plStack_38 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_38 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plStack_38)(plStack_38);
        LOCK();
        piVar2 = (int *)((longlong)plStack_38 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
        }
      }
    }
    plVar6 = DAT_14cb91a78;
    lVar5 = FUN_140162146();
    if (lVar5 == 0) goto LAB_1402735f9;
    FUN_1446dcdd4(&plStack_40,&DAT_14cb91a88);
    FUN_140024ada(&plStack_40,plVar6);
    if (lStack_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    cVar4 = FUN_1449e3c20(DAT_14cb91a78);
    if (cVar4 == '\0') goto LAB_1402735f9;
  }
  (**(code **)(*plVar6 + 0x28))(plVar6);
LAB_1402735f9:
  if ((uStack_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140628825 FUN_140628825 body=662 status=ok
// SIG undefined FUN_140628825(void)

void FUN_140628825(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  _RTL_CRITICAL_SECTION local_68;
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c872bf2 == '\0') {
    lVar4 = FUN_14050fd64();
    iVar1 = *(int *)(lVar4 + 0x638);
    if (-1 < iVar1) {
      iVar9 = 0;
      do {
        cVar2 = FUN_14163428b(iVar9);
        if (cVar2 == '\0') {
          local_6c = 0;
          puVar5 = &DAT_14cb7c580;
          bVar12 = false;
          goto LAB_1406288a0;
        }
        iVar9 = iVar9 + 1;
      } while (iVar1 + 1 != iVar9);
    }
  }
  local_6c = 1;
  puVar5 = &DAT_14cb7c588;
  bVar12 = true;
LAB_1406288a0:
  local_78 = CONCAT31(local_78._1_3_,1);
  uStack_74 = (undefined4)*puVar5;
  uStack_70 = (undefined4)((ulonglong)*puVar5 >> 0x20);
  FUN_146626474(&local_68);
  lVar4 = FUN_14040226a(param_1,0);
  if (lVar4 != 0) {
    FUN_140bc53f1(&local_68,&local_78,lVar4,0);
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (bVar12) {
    FUN_148d325ee(param_1);
  }
  else if (DAT_14cbca568 == 0) {
    uVar6 = FUN_1411d204e();
    if (param_1 == 0) {
      uVar11 = 0;
      uVar10 = 0;
    }
    else {
      uVar11 = *(uint *)(param_1 + 0xc);
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar10 = (ulonglong)*(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar8 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar8);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar12 = uVar3 == 0;
        if (bVar12) {
          *(uint *)(lVar4 + 0x10) = uVar8;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar12) {
          uVar3 = uVar8;
        }
        uVar10 = (ulonglong)uVar3;
      }
    }
    InitializeCriticalSection(&local_68);
    SetCriticalSectionSpinCount(&local_68,4000);
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    EnterCriticalSection(&local_68);
    if (local_38 != 2) {
      FUN_1446efa72(&local_40,0,2,0x10);
      local_38 = 2;
    }
    *local_40 = &PTR_LAB_149e1c150;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_40[2] = lVar7;
    *local_40 = &PTR_FUN_14b972440;
    local_40[3] = (ulonglong)uVar11 | uVar10 << 0x20;
    LeaveCriticalSection(&local_68);
    FUN_145c15ada(uVar6,&local_78,&local_68);
    FUN_1401cb1ee(&local_68);
    DAT_14cbca568 = CONCAT44(uStack_74,local_78);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140628abc FUN_140628abc body=1540 status=ok
// SIG undefined FUN_140628abc(void)

void FUN_140628abc(longlong param_1,char param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  longlong local_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0xb0) == '\0') {
    if (param_2 != '\x02') {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      FUN_1459ff6d2(param_1 + 200);
      *(undefined2 *)(param_1 + 0xc0) = 0;
    }
    goto LAB_140628b00;
  }
  FUN_1441aa338(param_1,0,0);
  if (((*(longlong *)(param_1 + 0x98) != 0) && (*(longlong *)(param_1 + 0xa0) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0xa0) + 8))) {
    FUN_1401cb356();
    local_78 = *(undefined8 *)(param_1 + 0x98);
    local_70 = *(longlong *)(param_1 + 0xa0);
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 0xc) = *(int *)(local_70 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_78);
    plVar12 = *(longlong **)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
    }
  }
  FUN_14662da60(param_1);
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(int *)(param_1 + 0x154) != 0) {
    FUN_148d8b34e(param_1 + 0x148,0);
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (*(int *)(param_1 + 0x164) != 0) {
    FUN_148d8b34e(param_1 + 0x158,0);
  }
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(int *)(param_1 + 0x174) != 0) {
    FUN_148d8b34e(param_1 + 0x168,0);
  }
  *(undefined1 *)(param_1 + 0x140) = 0;
  if ((((*(int *)(param_1 + 0x68) != 0) && (uVar2 = *(uint *)(param_1 + 100), -1 < (int)uVar2)) &&
      (((int)uVar2 < DAT_14c9647dc &&
       ((lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar11 != 0 &&
        (*(int *)(lVar11 + 0x10) == *(int *)(param_1 + 0x68))))))) &&
     ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)) {
    lVar11 = FUN_14021f720();
    if (lVar11 != 0) {
      FUN_140457ffc(lVar11 + 0x58,param_1);
    }
    if (*(int *)(param_1 + 0x68) == 0) {
LAB_14062906e:
      lVar11 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 100);
      lVar11 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar12 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar12 == (longlong *)0x0) ||
           (((int)plVar12[2] != *(int *)(param_1 + 0x68) ||
            ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_14062906e;
        lVar11 = *plVar12;
      }
    }
    if (*(longlong *)(lVar11 + 0x30) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(*(longlong *)(lVar11 + 0x30) + 0x360);
    }
    lVar11 = FUN_1406f625c(uVar9);
    if (lVar11 != 0) {
      lVar15 = *(longlong *)(lVar11 + 0x158);
      plVar12 = *(longlong **)(lVar11 + 0x160);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      if (lVar15 != 0) {
        FUN_140457ffc(lVar15 + 0x10,param_1);
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar12 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
  }
  if (param_2 == '\x02') {
    FUN_140898514(param_1,0);
    FUN_1448a8284(param_1);
    FUN_140898514(param_1 + 0x18,0);
    FUN_1448a8284(param_1 + 0x18);
    if (((((*(int *)(param_1 + 0x68) != 0) && (uVar2 = *(uint *)(param_1 + 100), -1 < (int)uVar2))
         && ((int)uVar2 < DAT_14c9647dc)) &&
        ((plVar12 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar12 != (longlong *)0x0 && ((int)plVar12[2] == *(int *)(param_1 + 0x68))))) &&
       ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar12 + 1) & 0x10200000) == 0) {
        lVar11 = *plVar12;
      }
      else {
        lVar11 = 0;
      }
      iVar6 = *(int *)(lVar11 + 0x40);
      if ((longlong)iVar6 != 0) {
        lVar11 = *(longlong *)(lVar11 + 0x38);
        lVar15 = 0;
        do {
          FUN_141237a6a(local_88,*(undefined8 *)(lVar11 + lVar15),0);
          lVar8 = FUN_1400f3ad8(local_88);
          if (lVar8 != 0) {
            if (DAT_14cbadd90 == 0) {
              local_68 = FUN_141030f22;
              local_90 = FUN_14081d0ea;
              local_98 = &LAB_1459f2e4c;
              local_a0 = &local_68;
              local_a8 = &LAB_148c39de3;
              local_b0 = &LAB_1457a9eb2;
              local_b8 = &DAT_149e063b2;
              local_c0 = 0;
              local_c8 = 0x10000004;
              local_d0 = 0x10;
              local_d8 = 0x3de0;
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
            }
            if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
              FUN_14624fc66(lVar8,0xbf800000);
            }
          }
          lVar15 = lVar15 + 8;
        } while ((longlong)iVar6 * 8 != lVar15);
      }
    }
  }
  else {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    FUN_1459ff6d2(param_1 + 200);
    *(undefined2 *)(param_1 + 0xc0) = 0;
    if (param_2 == '\x01') goto LAB_140628b00;
  }
  iVar6 = *(int *)(param_1 + 0x44);
  *(int *)(param_1 + 0x44) = iVar6 + 1;
  uVar7 = (ulonglong)*(int *)(param_1 + 0x38);
  if ((longlong)uVar7 < 1) {
    *(int *)(param_1 + 0x44) = iVar6;
  }
  else {
    plVar12 = (longlong *)(param_1 + 0x30);
    bVar13 = false;
    do {
      lVar11 = uVar7 * 0x10 + -8;
      uVar16 = uVar7;
      while (((*(int *)(*plVar12 + lVar11) != 0 &&
              (plVar3 = *(longlong **)(*plVar12 + -8 + lVar11), plVar3 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar3 + 0x60))(), cVar5 != '\0'))) {
        lVar11 = lVar11 + -0x10;
        bVar4 = uVar16 < 2;
        uVar16 = uVar16 - 1;
        if (bVar4) {
          iVar6 = *(int *)(param_1 + 0x44) + -1;
          *(int *)(param_1 + 0x44) = iVar6;
          if (!bVar13) goto LAB_140628b00;
          goto LAB_140628d34;
        }
      }
      uVar7 = uVar16 - 1;
      bVar13 = true;
    } while (1 < uVar16);
    iVar6 = *(int *)(param_1 + 0x44) + -1;
    *(int *)(param_1 + 0x44) = iVar6;
LAB_140628d34:
    if (iVar6 < 1) {
      iVar6 = *(int *)(param_1 + 0x38);
      iVar10 = iVar6;
      if (0 < iVar6) {
        iVar14 = 0;
        do {
          if (((*(int *)(*plVar12 + 8 + (longlong)iVar14 * 0x10) == 0) ||
              (plVar3 = *(longlong **)(*plVar12 + (longlong)iVar14 * 0x10),
              plVar3 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar3 + 0x28))(), cVar5 != '\0')) {
            FUN_14005b288(plVar12,iVar14);
            FUN_14005b248(plVar12);
          }
          else {
            iVar14 = iVar14 + 1;
          }
          iVar10 = *(int *)(param_1 + 0x38);
        } while (iVar14 < iVar10);
      }
      iVar14 = 2;
      if (2 < iVar10 * 2) {
        iVar14 = iVar10 * 2;
      }
      *(int *)(param_1 + 0x40) = iVar14;
      if ((iVar14 < iVar6) && (*(int *)(param_1 + 0x3c) != iVar10)) {
        FUN_14045812c(plVar12);
      }
    }
  }
LAB_140628b00:
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406290c2 FUN_1406290c2 body=3617 status=ok
// SIG undefined FUN_1406290c2(void)

int FUN_1406290c2(longlong param_1,undefined8 param_2,byte param_3)

{
  ulonglong **ppuVar1;
  ulonglong uVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong *puVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint *puVar27;
  bool bVar28;
  undefined1 auStack_168 [47];
  byte local_139;
  int local_138;
  int local_134;
  ulonglong local_130;
  uint *local_128;
  longlong *local_120;
  uint local_114;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  ulonglong local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  int local_e0 [2];
  undefined2 *local_d8;
  longlong *plStack_d0;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  ulonglong *local_a0;
  int local_98;
  undefined4 local_94;
  ulonglong *local_90;
  longlong local_88;
  ulonglong uStack_80;
  ulonglong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar13 = FUN_1456ffb1c(param_1,param_2,0);
  iVar21 = -1;
  if (lVar13 != 0) {
    if (*(char *)(lVar13 + 0x90) == '\x01') {
      if (*(char *)(lVar13 + 0x92) == '\0') {
        uVar24 = (uint)*(byte *)(lVar13 + 0x91);
        bVar10 = 1;
      }
      else {
        (**(code **)(*(longlong *)(lVar13 + 0x50) + 0x20))(lVar13 + 0x50,0);
        *(undefined8 *)(lVar13 + 0x58) = *(undefined8 *)(lVar13 + 0x78);
        FUN_1406022fe(lVar13 + 0x60,lVar13 + 0x80);
        *(undefined2 *)(lVar13 + 0x91) = 1;
        bVar10 = *(byte *)(lVar13 + 0x90);
        uVar24 = 1;
      }
      iVar21 = bVar10 + uVar24 + *(int *)(lVar13 + 0x94);
    }
    else {
      if (*(char *)(lVar13 + 0x91) == '\x01') {
        *(undefined1 *)(lVar13 + 0x91) = 0;
        lVar18 = lVar13 + 0x50;
      }
      else {
        if (*(char *)(lVar13 + 0x92) != '\x01') goto LAB_14062919f;
        *(undefined1 *)(lVar13 + 0x92) = 0;
        lVar18 = lVar13 + 0x70;
      }
      local_139 = param_3;
      cVar11 = FUN_147091310(lVar13 + 0x10,lVar18);
      if ((cVar11 != '\0') && (lVar18 != 0)) {
        local_110 = lVar13 + 0x30;
        (**(code **)(*(longlong *)(lVar13 + 0x30) + 0x20))(local_110,0);
        *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(lVar18 + 8);
        local_108 = lVar13 + 0x40;
        FUN_1406022fe(local_108,lVar18 + 0x10);
        local_88 = 0;
        uStack_80 = 0;
        FUN_1403539de(&local_88,0x100);
        FUN_140002266(&local_d8,L"NexusRequiredAssetLoading_%d",DAT_14c9a1be0);
        iVar21 = (int)plStack_d0 + -1;
        if ((int)plStack_d0 == 0) {
          iVar21 = 0;
        }
        FUN_1446f82e2(&local_78,iVar21,local_d8,1);
        local_90 = local_78;
        if (local_d8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_145c1f84a(lVar13);
        *(undefined8 *)(lVar13 + 0xa8) = 0;
        plVar7 = *(longlong **)(lVar13 + 0xb0);
        if (plVar7 != (longlong *)0x0) {
          *(undefined8 *)(lVar13 + 0xb0) = 0;
          LOCK();
          plVar8 = plVar7 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar3 = (int *)((longlong)plVar7 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        DAT_14c9a1be0 = DAT_14c9a1be0 + 1;
        FUN_140002266(&local_a0);
        if (0 < (int)uStack_80) {
          puVar19 = (ulonglong *)&DAT_149dfb77a;
          if (local_98 != 0) {
            puVar19 = local_a0;
          }
          FUN_1446f470e(&local_78,puVar19,1);
          if (DAT_14c9a1b08 == (undefined8 *)0x0) {
            local_d8 = (undefined2 *)0x0;
            plStack_d0 = (longlong *)0x0;
          }
          else {
            (**(code **)*DAT_14c9a1b08)(DAT_14c9a1b08,&local_d8,&local_90,&local_78);
          }
          plVar7 = plStack_d0;
          if ((undefined2 **)(lVar13 + 0xa8) != &local_d8) {
            *(undefined2 **)(lVar13 + 0xa8) = local_d8;
            local_d8 = (undefined2 *)0x0;
            plVar8 = *(longlong **)(lVar13 + 0xb0);
            if (plStack_d0 != plVar8) {
              plStack_d0 = (longlong *)0x0;
              *(longlong **)(lVar13 + 0xb0) = plVar7;
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                plVar7 = plVar8 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)*plVar8)(plVar8);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar8 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
              }
            }
          }
          plVar7 = plStack_d0;
          if (plStack_d0 != (longlong *)0x0) {
            LOCK();
            plVar8 = plStack_d0 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*plStack_d0)(plStack_d0);
              LOCK();
              piVar3 = (int *)((longlong)plVar7 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
          plVar7 = *(longlong **)(lVar13 + 0xa8);
          if (plVar7 == (longlong *)0x0) {
            FUN_140861e20(local_88);
            uVar25 = uStack_80 >> 0x20;
            uStack_80 = uStack_80 & 0xffffffff00000000;
            if ((int)uVar25 != 0) {
              FUN_1403539de(&local_88);
            }
          }
          else {
            *(int *)(lVar13 + 0x98) = *(int *)(lVar13 + 0x98) + 1;
            (**(code **)(*plVar7 + 0x10))(plVar7,&local_88,0,0);
            uVar9 = *(undefined8 *)(lVar13 + 0xa8);
            local_b0 = (undefined8 *)0x0;
            local_a8 = 0;
            FUN_1446efa72(&local_b0,0,2,0x10);
            local_a8 = 2;
            *local_b0 = &PTR_LAB_149e020b0;
            LOCK();
            UNLOCK();
            lVar17 = DAT_14c758608 + 1;
            lVar18 = DAT_14c758608 + 1;
            if (lVar17 == 0) {
              LOCK();
              UNLOCK();
              lVar17 = DAT_14c758608 + 2;
              lVar18 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar18;
            local_b0[2] = lVar17;
            *local_b0 = &PTR_FUN_14a179230;
            local_b0[3] = param_2;
            FUN_140844560(uVar9,&local_d8,&local_b0);
            *(undefined2 **)(lVar13 + 0xa0) = local_d8;
            *(undefined1 *)(lVar13 + 0x90) = 1;
            lVar18 = *(longlong *)(lVar13 + 0xa8);
            *(undefined4 *)(lVar18 + 0x170) = 0xffffffff;
            FUN_1407d0516(lVar18,4,0x32);
            if ((*(longlong *)(lVar13 + 0xa8) != 0 & local_139) == 1) {
              lVar18 = *(longlong *)(*(longlong *)(lVar13 + 0xa8) + 0x78);
              local_d8 = (undefined2 *)0x0;
              plStack_d0 = (longlong *)0x0;
              if (lVar18 != 0) {
                FUN_147d5d93e(lVar18,&local_d8,1);
              }
              FUN_140861e20(local_d8);
              if (local_d8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
          }
        }
        puVar27 = (uint *)(param_1 + 0x80);
        uVar24 = *(uint *)(param_1 + 0x98);
        uVar25 = (ulonglong)uVar24;
        if (uVar24 == 0) {
          uVar20 = 1;
          uVar26 = 0;
          iVar21 = 0;
          uVar12 = 0;
        }
        else {
          puVar14 = *(uint **)(param_1 + 0x90);
          if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
            puVar14 = puVar27;
          }
          uVar12 = *puVar14;
          if (uVar12 == 0) {
            iVar21 = uVar24 + 0x1e;
            if (-1 < (int)(uVar24 - 1)) {
              iVar21 = uVar24 - 1;
            }
            uVar26 = 0;
            uVar20 = (ulonglong)(uint)(iVar21 >> 5);
            if (iVar21 >> 5 < 1) {
              uVar20 = uVar26;
            }
            iVar21 = 0;
            do {
              if (uVar20 == uVar26) goto LAB_14062963d;
              iVar21 = iVar21 + 0x20;
              uVar12 = puVar14[uVar26 + 1];
              uVar26 = uVar26 + 1;
            } while (uVar12 == 0);
          }
          else {
            uVar26 = 0;
            iVar21 = 0;
          }
          uVar20 = (ulonglong)(-uVar12 & uVar12);
          uVar2 = uVar20 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar12 = (iVar21 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if ((int)uVar24 <= (int)uVar12) {
            uVar12 = uVar24;
          }
        }
        if (uVar12 != uVar24) {
          local_120 = (longlong *)(lVar13 + 0xb8);
          local_100 = lVar13 + 0xf0;
          uVar24 = 0xffffffff;
          local_130 = uVar25;
          local_128 = puVar27;
LAB_14062970b:
          uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x70) + 8 + (longlong)(int)uVar12 * 0x18);
          local_134 = iVar21;
          local_114 = uVar24;
          local_f8 = uVar26;
          local_b8 = uVar2;
          if ((*(longlong *)(uVar2 + 0x130) != 0) && ((longlong)*(int *)(uVar2 + 0x140) != 0)) {
            lVar18 = 0;
            do {
              if (*(longlong *)(*(longlong *)(uVar2 + 0x138) + lVar18) != 0) {
                if (*(int *)(uVar2 + 0x180) != 0) {
                  cVar11 = FUN_1405d595e(uVar2 + 0x128,local_110);
                  puVar27 = local_128;
                  uVar25 = local_130;
                  if (*(int *)(lVar13 + 0xc0) == *(int *)(lVar13 + 0xec)) goto LAB_140629810;
                  uVar24 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
                  uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
                  lVar18 = *(longlong *)(lVar13 + 0xf8);
                  if (*(longlong *)(lVar13 + 0xf8) == 0) {
                    lVar18 = local_100;
                  }
                  iVar21 = *(int *)(lVar18 + (ulonglong)
                                             (*(int *)(lVar13 + 0x100) - 1U &
                                             (uVar24 >> 0x10 ^ uVar24)) * 4);
                  if (iVar21 == -1) goto LAB_140629810;
                  goto LAB_1406297f7;
                }
                break;
              }
              lVar18 = lVar18 + 8;
            } while ((longlong)*(int *)(uVar2 + 0x140) * 8 != lVar18);
          }
          goto LAB_140629d3e;
        }
LAB_14062963d:
        if (*(int *)(lVar13 + 0x98) == 0) {
          *(int *)(lVar13 + 0x94) = *(int *)(lVar13 + 0x94) + 1;
          (**(code **)(*(longlong *)(lVar13 + 0x10) + 0x20))(lVar13 + 0x10,0);
          *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)(lVar13 + 0x38);
          FUN_1406022fe(lVar13 + 0x20,local_108);
          FUN_1401861f4(lVar13 + 0x108,*(undefined4 *)(lVar13 + 0x94));
        }
        bVar10 = *(byte *)(lVar13 + 0x90);
        iVar21 = *(int *)(lVar13 + 0x94);
        bVar4 = *(byte *)(lVar13 + 0x91);
        bVar5 = *(byte *)(lVar13 + 0x92);
        if (local_a0 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        FUN_140861e20(local_88,uStack_80 & 0xffffffff);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        iVar21 = (uint)bVar10 + iVar21 + (uint)bVar4 + (uint)bVar5;
      }
    }
  }
LAB_14062919f:
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar21;
  while (iVar21 = (int)puVar19[8], iVar21 != -1) {
LAB_1406297f7:
    puVar19 = (ulonglong *)(*local_120 + (longlong)iVar21 * 0x48);
    if (*puVar19 == uVar2) goto LAB_140629813;
  }
LAB_140629810:
  puVar19 = (ulonglong *)0x0;
LAB_140629813:
  puVar22 = puVar19 + 1;
  if (puVar19 != (ulonglong *)0x0) {
    puVar19 = puVar22;
  }
  if (cVar11 == '\0') {
    if (puVar19 != (ulonglong *)0x0) {
      FUN_1470a4456(local_120,uVar2);
    }
    goto LAB_140629d3e;
  }
  local_d8 = &DAT_14a171d50;
  plStack_d0 = (longlong *)0x0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_140a9622e(&local_d8,uVar2 + 0x128,local_110);
  plVar7 = local_120;
  if (puVar19 == (ulonglong *)0x0) {
    local_78 = &local_b8;
    FUN_145cf71be(local_120,local_e0,&local_78);
    puVar22 = (ulonglong *)(*plVar7 + (longlong)local_e0[0] * 0x48 + 8);
  }
  else if ((longlong *)puVar19[1] == plStack_d0) {
    uVar24 = (uint)puVar19[3];
    uVar12 = (uint)local_c0;
    if ((int)uVar24 < (int)(uint)local_c0) {
      uVar12 = uVar24;
    }
    if (0 < (int)uVar12) {
      uVar25 = 0;
      do {
        if (*(longlong *)(puVar19[2] + uVar25 * 8) != *(longlong *)(local_c8 + uVar25 * 8))
        goto LAB_1406299bc;
        uVar25 = uVar25 + 1;
      } while (uVar12 != uVar25);
    }
    if ((int)(uint)local_c0 < (int)uVar24) {
      lVar18 = 0;
      do {
        if (*(longlong *)((longlong)(int)(uint)local_c0 * 8 + puVar19[2] + lVar18 * 8) != 0)
        goto LAB_1406299bc;
        lVar18 = lVar18 + 1;
      } while (uVar24 - (uint)local_c0 != (int)lVar18);
    }
    else if ((int)uVar24 < (int)(uint)local_c0) {
      lVar18 = 0;
      do {
        if (*(longlong *)((longlong)(int)uVar24 * 8 + local_c8 + lVar18 * 8) != 0)
        goto LAB_1406299bc;
        lVar18 = lVar18 + 1;
      } while ((uint)local_c0 - uVar24 != (int)lVar18);
    }
    local_d8 = &DAT_14a171d50;
    uVar25 = local_c0 >> 0x20;
    local_c0 = local_c0 & 0xffffffff00000000;
    if ((int)uVar25 != 0) {
      FUN_140115c12(&local_c8,0);
    }
    plStack_d0 = (longlong *)0x0;
    uVar25 = local_130;
    puVar27 = local_128;
    if (local_c8 != 0) {
      FUN_1400020a8();
      uVar25 = local_130;
      puVar27 = local_128;
    }
    goto LAB_140629d3e;
  }
LAB_1406299bc:
  (**(code **)(*puVar22 + 0x20))(puVar22,0);
  puVar22[1] = (ulonglong)plStack_d0;
  FUN_1406022fe(puVar22 + 2,&local_c8);
  DAT_14c9a1be0 = DAT_14c9a1be0 + 1;
  FUN_140002266(&local_78,L"SourceRequest[%d]");
  if (local_a0 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  local_a0 = local_78;
  local_98 = (int)uStack_70;
  local_94 = uStack_70._4_4_;
  puVar19 = local_78;
  if ((int)uStack_70 == 0) {
    puVar19 = (ulonglong *)&DAT_149dfb77a;
  }
  FUN_1446f470e(local_e0,puVar19,1);
  if (DAT_14c9a1b08 == (undefined8 *)0x0) {
    local_78 = (ulonglong *)0x0;
    uStack_70 = (longlong *)0x0;
  }
  else {
    (**(code **)*DAT_14c9a1b08)(DAT_14c9a1b08,&local_78,&local_90,local_e0);
  }
  plVar7 = uStack_70;
  ppuVar1 = (ulonglong **)(puVar22 + 5);
  if (ppuVar1 == &local_78) {
LAB_140629aff:
    plVar7 = uStack_70;
    if (uStack_70 != (longlong *)0x0) {
      LOCK();
      plVar8 = uStack_70 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*uStack_70)(uStack_70);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    puVar22[5] = (ulonglong)local_78;
    local_78 = (ulonglong *)0x0;
    plVar8 = (longlong *)puVar22[6];
    if (uStack_70 == plVar8) goto LAB_140629aff;
    uStack_70 = (longlong *)0x0;
    puVar22[6] = (ulonglong)plVar7;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar3 = (int *)((longlong)plVar8 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto LAB_140629aff;
    }
  }
  puVar19 = *ppuVar1;
  if (puVar19 != (ulonglong *)0x0) {
    if (param_1 != 0) {
      uVar24 = *(uint *)(param_1 + 0xc);
      *(uint *)(puVar19 + 0x17) = uVar24;
      if ((int)uVar24 < DAT_14c9647dc) {
        lVar18 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
      }
      else {
        lVar18 = 0;
      }
      iVar21 = *(int *)(lVar18 + 0x10);
      if (*(int *)(lVar18 + 0x10) == 0) {
        LOCK();
        iVar21 = DAT_14c964868 + 1;
        UNLOCK();
        iVar23 = DAT_14c964868 + 1;
        bVar28 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar21;
        if (bVar28) {
          local_138 = iVar23;
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar23);
          iVar23 = local_138;
        }
        LOCK();
        iVar21 = *(int *)(lVar18 + 0x10);
        bVar28 = iVar21 == 0;
        if (bVar28) {
          *(int *)(lVar18 + 0x10) = iVar23;
          iVar21 = 0;
        }
        UNLOCK();
        if (bVar28) {
          iVar21 = iVar23;
        }
      }
      *(int *)((longlong)puVar19 + 0xbc) = iVar21;
    }
    iVar21 = *(int *)(param_1 + 0xd0);
    if (0 < (longlong)iVar21) {
      lVar18 = 0;
      do {
        if ((*(int *)(*(longlong *)(local_b8 + 0x188) + lVar18 * 4) != 0) &&
           (lVar17 = *(longlong *)(*(longlong *)(param_1 + 200) + lVar18 * 8), lVar17 != 0)) {
          FUN_142b20cf8(lVar17,*ppuVar1,local_b8,&local_d8);
        }
        lVar18 = lVar18 + 1;
      } while (iVar21 != lVar18);
    }
    *(undefined1 *)(lVar13 + 0x90) = 1;
    *(int *)(lVar13 + 0x98) = *(int *)(lVar13 + 0x98) + 1;
    puVar19 = *ppuVar1;
    local_f0 = (undefined8 *)0x0;
    local_e8 = 0;
    FUN_1446efa72(&local_f0,0,2,0x10);
    local_e8 = 2;
    *local_f0 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 1;
    lVar18 = DAT_14c758608 + 1;
    if (lVar17 == 0) {
      LOCK();
      UNLOCK();
      lVar17 = DAT_14c758608 + 2;
      lVar18 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar18;
    local_f0[2] = lVar17;
    *local_f0 = &PTR_FUN_14a1792a0;
    local_f0[3] = param_2;
    FUN_140844560(puVar19,&local_78,&local_f0);
    puVar22[4] = (ulonglong)local_78;
    uVar25 = puVar22[5];
    *(undefined4 *)(uVar25 + 0x170) = 0xffffffff;
    FUN_1407d0516(uVar25,4,0x32);
    if ((local_139 != 0) && (puVar22[5] != 0)) {
      lVar18 = *(longlong *)(puVar22[5] + 0x78);
      local_78 = (ulonglong *)0x0;
      uStack_70 = (longlong *)0x0;
      if (lVar18 == 0) {
        uVar25 = 0;
      }
      else {
        FUN_147d5d93e(lVar18,&local_78,1);
        uVar25 = (ulonglong)uStack_70 & 0xffffffff;
      }
      FUN_140861e20(local_78,uVar25);
      if (local_78 != (ulonglong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  local_d8 = &DAT_14a171d50;
  uVar25 = local_c0 >> 0x20;
  local_c0 = local_c0 & 0xffffffff00000000;
  if ((int)uVar25 != 0) {
    FUN_140115c12(&local_c8,0);
  }
  puVar27 = local_128;
  uVar25 = local_130;
  plStack_d0 = (longlong *)0x0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
LAB_140629d3e:
  uVar24 = local_114 & ~(uint)uVar20;
  puVar14 = *(uint **)(param_1 + 0x90);
  if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
    puVar14 = puVar27;
  }
  uVar6 = *(uint *)(param_1 + 0x98);
  iVar23 = (int)local_f8;
  lVar18 = (longlong)iVar23;
  uVar12 = puVar14[lVar18] & uVar24;
  uVar26 = local_f8;
  iVar21 = local_134;
  if (uVar12 == 0) {
    iVar15 = uVar6 + 0x1e;
    if (-1 < (int)(uVar6 - 1)) {
      iVar15 = uVar6 - 1;
    }
    iVar15 = iVar15 >> 5;
    iVar21 = local_134 + 0x20;
    iVar16 = iVar15;
    if (iVar15 < iVar23) {
      iVar16 = iVar23;
    }
    if (iVar23 < iVar15) {
      lVar17 = 0;
      do {
        uVar12 = puVar14[lVar18 + lVar17 + 1];
        if (uVar12 != 0) {
          uVar24 = 0xffffffff;
          uVar26 = (ulonglong)(iVar23 + (int)lVar17 + 1);
          goto LAB_140629dd8;
        }
        iVar21 = iVar21 + 0x20;
        lVar17 = lVar17 + 1;
      } while (iVar16 - lVar18 != lVar17);
      uVar24 = 0xffffffff;
      iVar23 = iVar16;
    }
    uVar26 = (ulonglong)(iVar23 + 1);
    uVar25 = local_130;
    puVar27 = local_128;
    uVar12 = uVar6;
  }
  else {
LAB_140629dd8:
    uVar20 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar20 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar12 = (iVar21 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if ((int)uVar6 <= (int)uVar12) {
      uVar12 = uVar6;
    }
  }
  if (uVar12 == (uint)uVar25) goto LAB_14062963d;
  goto LAB_14062970b;
}



// FUNCTION 140629ee4 FUN_140629ee4 body=1653 status=ok
// SIG undefined FUN_140629ee4(void)

void FUN_140629ee4(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *****ppppplVar4;
  longlong ****pppplVar5;
  longlong ***ppplVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  code *local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong ****local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  longlong ****local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((((((*(int *)(param_1 + -0x14) != 0) && (uVar8 = *(uint *)(param_1 + -0x18), -1 < (int)uVar8))
        && ((int)uVar8 < DAT_14c9647dc)) &&
       ((plVar11 = (longlong *)
                   ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
        plVar11 != (longlong *)0x0 && ((int)plVar11[2] == *(int *)(param_1 + -0x14))))) &&
      ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)) &&
     ((*plVar11 != 0 && (plVar11 = *(longlong **)(*plVar11 + 0x1f0), plVar11 != (longlong *)0x0))))
  {
    if (DAT_14cb5e538 == 0) {
      local_a0 = &local_68;
      local_68 = (code *)&LAB_1417c5d06;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_1417ad04a;
      local_a8 = &LAB_1486a7af7;
      local_b0 = &LAB_1464e1631;
      local_b8 = &DAT_149e063b2;
      local_c0 = 0;
      local_c8 = 0x1000000c;
      local_d0 = 8;
      local_d8 = 0x420;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
    }
    if ((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(plVar11[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) ==
        DAT_14cb5e538 + 0x30)) {
      if (*(code **)(*plVar11 + 0x498) == (code *)&LAB_14015c36e) {
        cVar7 = (char)plVar11[0x42];
      }
      else {
        cVar7 = (**(code **)(*plVar11 + 0x498))(plVar11);
      }
      if (cVar7 == '\b') {
        uVar8 = *(uint *)(param_1 + 0x18);
        if (0 < (int)uVar8) {
          uVar10 = *(uint *)(param_1 + 0xc);
          if (((int)uVar10 < 0) || (uVar8 <= uVar10)) {
            *(undefined4 *)(param_1 + 0xc) = 0;
            uVar10 = 0;
          }
          lVar9 = *(longlong *)(param_1 + 0x10);
          uVar13 = (ulonglong)uVar10;
          iVar1 = *(int *)(lVar9 + 4 + uVar13 * 8);
          if ((((iVar1 == 0) || (uVar2 = *(uint *)(lVar9 + uVar13 * 8), (int)uVar2 < 0)) ||
              (DAT_14c9647dc <= (int)uVar2)) ||
             (((plVar11 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar11 == (longlong *)0x0 || ((int)plVar11[2] != iVar1)) ||
              (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 || (lVar3 = *plVar11, lVar3 == 0)))))) {
            if (~uVar10 + uVar8 != 0) {
              memmove((void *)(lVar9 + uVar13 * 8),(void *)(lVar9 + uVar13 * 8 + 8),
                      (longlong)(int)(~uVar10 + uVar8) << 3);
              uVar8 = *(uint *)(param_1 + 0x18);
            }
            *(uint *)(param_1 + 0x18) = uVar8 - 1;
            FUN_14572fcae((longlong *)(param_1 + 0x10));
          }
          else {
            lVar9 = *(longlong *)(lVar3 + 0xb0);
            if (((lVar9 != 0) || (lVar9 = FUN_1448abda6(lVar3), lVar9 != 0)) &&
               (0 < *(int *)(lVar9 + 0x238))) {
              local_88 = lVar3 + 0x678;
              local_78 = lVar3 + 0x638;
              local_80 = lVar3 + 0x620;
              lVar14 = 0;
              do {
                iVar1 = *(int *)(*(longlong *)(lVar9 + 0x230) + 4 + lVar14 * 8);
                if ((((iVar1 != 0) &&
                     (uVar8 = *(uint *)(*(longlong *)(lVar9 + 0x230) + lVar14 * 8), -1 < (int)uVar8)
                     ) && ((int)uVar8 < DAT_14c9647dc)) &&
                   (((plVar11 = (longlong *)
                                ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                     plVar11 != (longlong *)0x0 && ((int)plVar11[2] == iVar1)) &&
                    (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 &&
                     (ppppplVar4 = (longlong *****)*plVar11, ppppplVar4 != (longlong *****)0x0))))))
                {
                  if (DAT_14cb61cd0 == 0) {
                    local_68 = FUN_141030f22;
                    local_90 = FUN_14081d0ea;
                    local_98 = &LAB_1463b31ae;
                    local_a8 = &LAB_1486dca4f;
                    local_b0 = &LAB_1464f50a6;
                    local_b8 = &DAT_149e063b2;
                    local_c0 = 0;
                    local_c8 = 0x10000004;
                    local_d0 = 8;
                    local_d8 = 0xd70;
                    local_a0 = &local_68;
                    FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,
                                  FUN_1464f5084);
                  }
                  if (((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(ppppplVar4[2] + 7)) &&
                      (ppppplVar4[2][6][*(int *)(DAT_14cb61cd0 + 0x38)] ==
                       (longlong **)(DAT_14cb61cd0 + 0x30))) &&
                     (pppplVar5 = ppppplVar4[0x7a], pppplVar5 != (longlong ****)0x0)) {
                    if ((longlong)*(int *)(lVar3 + 0x680) != 0) {
                      lVar12 = 0;
                      do {
                        if (*(longlong ******)(*(longlong *)(lVar3 + 0x678) + lVar12) == ppppplVar4)
                        {
                          ppplVar6 = pppplVar5[0x39];
                          if (ppplVar6 == (longlong ***)0x0) {
                            local_58 = (longlong *)DAT_14c8464f0;
                            local_68 = (code *)CONCAT44(DAT_14c8464e0._4_4_,
                                                        (undefined4)DAT_14c8464e0);
                            uStack_60 = (longlong **)
                                        CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                          }
                          else {
                            local_68 = (code *)ppplVar6[0x4c];
                            uStack_60 = ppplVar6[0x4d];
                            local_58 = (longlong *)ppplVar6[0x4e];
                          }
                          (*(code *)(*pppplVar5)[0xa5])(pppplVar5,&local_50,&local_70);
                          cVar7 = FUN_14062a5a2(lVar3,&local_68,local_50._0_4_);
                          if (cVar7 != '\0') goto LAB_14062a1fe;
                          local_70 = (longlong ****)ppppplVar4;
                          if (DAT_14c950c29 == '\x01') {
                            FUN_1456cec3c(ppppplVar4);
                          }
                          local_50 = (longlong ****)&local_70;
                          FUN_14062a896(local_88);
                          lVar12 = local_78;
                          goto LAB_14062a33d;
                        }
                        lVar12 = lVar12 + 8;
                      } while ((longlong)*(int *)(lVar3 + 0x680) * 8 != lVar12);
                    }
                    cVar7 = (*(code *)(*ppppplVar4)[0x1fd])(ppppplVar4);
                    if (cVar7 != '\0') {
                      ppplVar6 = pppplVar5[0x39];
                      if (ppplVar6 == (longlong ***)0x0) {
                        local_58 = (longlong *)DAT_14c8464f0;
                        local_68 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                        uStack_60 = (longlong **)
                                    CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                      }
                      else {
                        local_68 = (code *)ppplVar6[0x4c];
                        uStack_60 = ppplVar6[0x4d];
                        local_58 = (longlong *)ppplVar6[0x4e];
                      }
                      (*(code *)(*pppplVar5)[0xa5])(pppplVar5,&local_50,&local_70);
                      cVar7 = FUN_14062a5a2(lVar3,&local_68,local_50._0_4_);
                      if (cVar7 != '\0') {
                        local_50 = (longlong ****)ppppplVar4;
                        if (DAT_14c950c29 == '\x01') {
                          FUN_1456cec3c(ppppplVar4);
                        }
                        FUN_14062a7e2(local_88,&local_50);
                        lVar12 = local_80;
LAB_14062a33d:
                        FUN_14062a740(lVar12,ppppplVar4);
                      }
                    }
                  }
                }
LAB_14062a1fe:
                lVar14 = lVar14 + 1;
              } while ((int)lVar14 < *(int *)(lVar9 + 0x238));
            }
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14062a576 FUN_14062a576 body=44 status=ok
// SIG undefined FUN_14062a576(void)

void FUN_14062a576(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (0 < *(int *)(param_1 + 0x38)) {
      *(undefined1 *)(param_1 + 0x28) = 1;
      FUN_144958d50(param_1 + 0x20);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined1 *)(param_1 + 0x28) = 0;
    FUN_1449db8d8(param_1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 14062a5a2 FUN_14062a5a2 body=412 status=ok
// SIG undefined FUN_14062a5a2(void)

undefined8 FUN_14062a5a2(longlong param_1,double *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  float local_7c;
  undefined1 local_78 [24];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x668) == '\x01') {
    dVar1 = *(double *)(param_1 + 0x270);
    dVar2 = param_2[2];
    dVar11 = param_2[1] - *(double *)(param_1 + 0x268);
    dVar10 = *param_2 - *(double *)(param_1 + 0x260);
    if ((((float)((dVar2 - dVar1) * (dVar2 - dVar1) + dVar10 * dVar10 + dVar11 * dVar11) <=
          *(float *)(param_1 + 0x66c) * *(float *)(param_1 + 0x66c)) &&
        ((double)(float)(dVar1 - (double)*(float *)(param_1 + 0x670)) <= dVar2)) &&
       (uVar8 = 1, dVar2 <= (double)(float)(dVar1 + (double)*(float *)(param_1 + 0x670))))
    goto LAB_14062a63e;
  }
  if ((*(char *)(param_1 + 0x650) == '\x01') &&
     (iVar3 = *(int *)(param_1 + 0x660), (longlong)iVar3 != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x658);
    lVar9 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar9);
      if (lVar5 != 0) {
        local_88 = param_2[2];
        local_98 = *(undefined4 *)param_2;
        uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_90 = *(undefined4 *)(param_2 + 1);
        uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
        plVar6 = *(longlong **)(lVar5 + 0x3a8);
        if (((plVar6 != (longlong *)0x0) &&
            (cVar7 = (**(code **)(*plVar6 + 0x7c0))(plVar6,&local_98,&local_7c,local_78),
            cVar7 != '\0')) && ((0.0 <= local_7c && (local_7c <= param_3 * param_3)))) {
          uVar8 = 1;
          break;
        }
      }
      lVar9 = lVar9 + 8;
      uVar8 = 0;
    } while ((longlong)iVar3 * 8 != lVar9);
  }
  else {
    uVar8 = 0;
  }
LAB_14062a63e:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14062a740 FUN_14062a740 body=162 status=ok
// SIG undefined FUN_14062a740(void)

void FUN_14062a740(longlong *param_1,undefined8 param_2)

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
        goto LAB_14062a7cd;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14062a7cd:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14062a7e2 FUN_14062a7e2 body=180 status=ok
// SIG undefined FUN_14062a7e2(void)

ulonglong FUN_14062a7e2(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = *param_1;
    lVar6 = (longlong)(int)param_1[1] << 3;
    uVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar5 * 8) == lVar3) {
        if ((int)uVar5 != -1) goto LAB_14062a834;
        break;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  uVar1 = *(uint *)(param_1 + 1);
  uVar5 = (ulonglong)uVar1;
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_14572fcec(param_1,uVar1);
  }
  lVar2 = *param_2;
  *(longlong *)(*param_1 + (longlong)(int)uVar1 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
LAB_14062a834:
  return uVar5 & 0xffffffff;
}



// FUNCTION 14062a896 FUN_14062a896 body=386 status=ok
// SIG undefined FUN_14062a896(void)

int FUN_14062a896(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar6 = (int)param_1[1];
  lVar7 = (longlong)iVar6;
  if (lVar7 == 0) {
    iVar6 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    lVar4 = *(longlong *)*param_2;
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar4);
    }
    iVar9 = 0;
    bVar5 = *plVar1 == lVar4;
    iVar10 = 0;
    do {
      lVar8 = (longlong)iVar10;
      iVar11 = iVar10;
      lVar4 = lVar8;
      iVar3 = iVar10 + 1;
      if (iVar10 + 1 < iVar6) {
        iVar3 = iVar6;
      }
      do {
        lVar4 = lVar4 + 1;
        iVar12 = iVar3;
        if (lVar7 <= lVar4) break;
        lVar2 = *(longlong *)*param_2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
        }
        iVar11 = iVar11 + 1;
        iVar12 = iVar11;
      } while (bVar5 == (plVar1[lVar4] == lVar2));
      if (bVar5 == false) {
        if (iVar9 != iVar10) {
          memmove(plVar1 + iVar9,plVar1 + lVar8,(longlong)(iVar12 - iVar10) << 3);
        }
        iVar9 = iVar9 + (iVar12 - iVar10);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar10 = iVar12;
    } while (lVar4 < lVar7);
    *(int *)(param_1 + 1) = iVar9;
    iVar6 = iVar6 - iVar9;
  }
  return iVar6;
}



// FUNCTION 14062aa18 FUN_14062aa18 body=288 status=ok
// SIG undefined FUN_14062aa18(void)

void FUN_14062aa18(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  
  *(undefined8 *)(param_1 + 0xa0) = 0;
  plVar7 = *(longlong **)(param_1 + 0xa8);
  if (plVar7 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
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
  FUN_14062ab38(param_1,param_2);
  if (*(int *)(param_1 + 0xb4) == 0) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0xb0);
  if ((int)uVar3 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar3) {
    return;
  }
  plVar7 = (longlong *)
           ((ulonglong)((uVar3 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  if ((int)plVar7[2] != *(int *)(param_1 + 0xb4)) {
    return;
  }
  if ((*(uint *)(plVar7 + 1) & 0x10200000) != 0) {
    return;
  }
  lVar4 = *plVar7;
  if (lVar4 == 0) {
    return;
  }
  if ((~*(byte *)(lVar4 + 0x9c) & 3) == 0) {
    bVar5 = *(byte *)(lVar4 + 0x9d);
    if ((bVar5 & 1) != 0) {
      if ((*(longlong *)(lVar4 + 0xb0) != 0) || (lVar6 = FUN_1448abda6(lVar4), lVar6 != 0))
      goto LAB_14062aaf4;
      bVar5 = *(byte *)(lVar4 + 0x9d);
    }
    *(byte *)(lVar4 + 0x9d) = bVar5 | 1;
    FUN_1401057d4(lVar4);
    FUN_14010586c(&DAT_14cad0140,lVar4);
  }
LAB_14062aaf4:
  *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) | 0x20;
  return;
}



// FUNCTION 14062ab38 FUN_14062ab38 body=273 status=ok
// SIG undefined FUN_14062ab38(void)

void FUN_14062ab38(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x9d) != '\x02') {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_14179763c(param_1,0);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_14481578e(param_1 + 0x10,0);
    }
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0x90) = 0;
    if (0x80 < *(uint *)(param_1 + 0x94)) {
      *(undefined4 *)(param_1 + 0x94) = 0x80;
      FUN_1446efbd8(param_1 + 0x78,0);
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (*(char *)(param_1 + 0x9d) != '\x02') {
      *(undefined1 *)(param_1 + 0x9d) = 0;
      lVar1 = *(longlong *)(param_1 + 0xb8);
      if (lVar1 != 0) {
        *(undefined8 *)(param_1 + 0xb8) = 0;
        (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      if (*(int *)(param_1 + 0x34) < 0) {
        FUN_14480809c(param_1 + 0x28,0);
      }
      *(undefined8 *)(param_1 + 0x58) = 0x7fffffff00000000;
      *(undefined8 *)(param_1 + 0x60) = 0x7fffffff;
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) & 0xf0;
    }
  }
  return;
}



// FUNCTION 14062ac50 FUN_14062ac50 body=184 status=ok
// SIG undefined FUN_14062ac50(void)

void FUN_14062ac50(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x7b0))();
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x610))(param_1,iVar1);
      if (lVar3 != 0) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_144769b64(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar3;
      }
      iVar1 = iVar1 + 1;
      iVar2 = (**(code **)(*param_1 + 0x7b0))(param_1);
    } while (iVar1 < iVar2);
  }
  lVar3 = param_1[0xc6];
  if ((lVar3 != 0) || (lVar3 = (**(code **)(*param_1 + 0xa68))(param_1), lVar3 != 0)) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_144769b64(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
  }
  return;
}



// FUNCTION 14062ad08 FUN_14062ad08 body=130 status=ok
// SIG undefined FUN_14062ad08(void)

longlong * FUN_14062ad08(longlong *param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((((int)param_2 < 0) || ((int)param_1[0xc5] <= (int)param_2)) ||
     (plVar3 = *(longlong **)(param_1[0xc4] + (ulonglong)param_2 * 8), plVar3 == (longlong *)0x0)) {
    plVar3 = (longlong *)0x0;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0xa00))();
    if (cVar1 != '\0') {
      local_28 = 0;
      uStack_20 = 0;
      plVar2 = (longlong *)(**(code **)(*plVar3 + 0x360))(plVar3);
      if (plVar2 != (longlong *)0x0) {
        plVar3 = plVar2;
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 14062ad90 FUN_14062ad90 body=1262 status=ok
// SIG undefined FUN_14062ad90(void)

void FUN_14062ad90(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  undefined4 uVar6;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_40 = -3.4028234663852886e+38;
  local_38 = -3.4028234663852886e+38;
  local_30 = -3.4028234663852886e+38;
  local_58 = 3.4028234663852886e+38;
  local_50 = 3.4028234663852886e+38;
  local_48 = 3.4028234663852886e+38;
  local_70 = -3.4028234663852886e+38;
  local_68 = -3.4028234663852886e+38;
  local_60 = -3.4028234663852886e+38;
  local_88 = 3.4028234663852886e+38;
  local_80 = 3.4028234663852886e+38;
  local_78 = 3.4028234663852886e+38;
  local_a0 = -3.4028234663852886e+38;
  local_98 = -3.4028234663852886e+38;
  local_90 = -3.4028234663852886e+38;
  local_b8 = 3.4028234663852886e+38;
  local_b0 = 3.4028234663852886e+38;
  local_a8 = 3.4028234663852886e+38;
  local_c8 = DAT_14c8464f0;
  local_d8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  dStack_d0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_e8 = DAT_14c8464f0;
  local_f8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  dStack_f0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_108 = DAT_14c8464f0;
  local_118 = (undefined4)DAT_14c8464e0;
  uStack_114 = DAT_14c8464e0._4_4_;
  uStack_110 = (undefined4)DAT_14c8464e8;
  uStack_10c = DAT_14c8464e8._4_4_;
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,&local_a0,&local_b8,&local_118);
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,&local_40,&local_58,&local_d8);
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,&local_70,&local_88,&local_f8);
  }
  dVar12 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  dVar11 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_4[2] = DAT_14c8464f0;
  *param_4 = dVar12;
  param_4[1] = dVar11;
  if ((local_d8 != (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)) ||
     (NAN(local_d8) || NAN((double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)))) {
LAB_14062b17b:
    *param_4 = local_d8 + *param_4;
    param_4[1] = dStack_d0 + param_4[1];
    param_4[2] = local_c8 + param_4[2];
    dVar12 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    iVar2 = 1;
  }
  else {
    dVar12 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    if ((dStack_d0 != dVar12) || (NAN(dStack_d0) || NAN(dVar12))) goto LAB_14062b17b;
    iVar2 = 0;
    if ((local_c8 != DAT_14c8464f0) || (NAN(local_c8) || NAN(DAT_14c8464f0))) goto LAB_14062b17b;
  }
  if ((((local_f8 != (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)) ||
       (NAN(local_f8) || NAN((double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)))) ||
      (dStack_f0 != dVar12)) ||
     (((NAN(dStack_f0) || NAN(dVar12) || (local_e8 != DAT_14c8464f0)) ||
      (NAN(local_e8) || NAN(DAT_14c8464f0))))) {
    *param_4 = local_f8 + *param_4;
    param_4[1] = dStack_f0 + param_4[1];
    param_4[2] = local_e8 + param_4[2];
    iVar2 = iVar2 + 1;
    dVar12 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  dVar11 = (double)CONCAT44(uStack_114,local_118);
  dVar10 = (double)CONCAT44(uStack_10c,uStack_110);
  dVar9 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  if (((dVar11 != (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)) ||
      (NAN(dVar11) || NAN(dVar9))) ||
     ((dVar10 != dVar12 ||
      (((NAN(dVar10) || NAN(dVar12) || (local_108 != DAT_14c8464f0)) ||
       (NAN(local_108) || NAN(DAT_14c8464f0))))))) {
    dVar11 = dVar11 + *param_4;
    dVar12 = dVar10 + param_4[1];
    dVar10 = local_108 + param_4[2];
    iVar2 = iVar2 + 1;
LAB_14062affc:
    dVar9 = 1.0 / (double)iVar2;
    dVar10 = dVar10 * dVar9;
    dVar12 = dVar12 * dVar9;
    dVar9 = dVar9 * dVar11;
  }
  else {
    dVar10 = DAT_14c8464f0;
    if (iVar2 != 0) {
      dVar10 = param_4[2];
      dVar11 = *param_4;
      dVar12 = param_4[1];
      goto LAB_14062affc;
    }
  }
  *param_4 = dVar9;
  param_4[1] = dVar12;
  param_4[2] = dVar10;
  uVar8 = (undefined4)((ulonglong)local_30 >> 0x20);
  uVar5 = (undefined4)((ulonglong)local_60 >> 0x20);
  uVar7 = (undefined4)((ulonglong)local_48 >> 0x20);
  uVar6 = (undefined4)((ulonglong)local_78 >> 0x20);
  uVar3 = SUB84(local_48,0);
  dVar12 = local_58;
  dVar11 = local_50;
  if (*(uint *)(param_1 + 0x30) < 2) {
    uVar4 = SUB84(local_30,0);
    if (local_30 <= local_60) {
      uVar4 = SUB84(local_60,0);
      uVar8 = uVar5;
    }
    dVar9 = local_38;
    if (local_38 <= local_68) {
      dVar9 = local_68;
    }
    dVar10 = local_40;
    if (local_40 <= local_70) {
      dVar10 = local_70;
    }
    *param_2 = dVar10;
    param_2[1] = dVar9;
    param_2[2] = (double)CONCAT44(uVar8,uVar4);
    if (local_78 <= local_48) {
      uVar3 = SUB84(local_78,0);
      uVar7 = uVar6;
    }
    if (local_80 <= local_50) {
      dVar11 = local_80;
    }
    if (local_88 <= local_58) {
      dVar12 = local_88;
    }
  }
  else {
    if (1 < *(uint *)(param_1 + 0x30) - 2) goto LAB_14062b0c6;
    uVar4 = SUB84(local_30,0);
    if (local_60 <= local_30) {
      uVar4 = SUB84(local_60,0);
      uVar8 = uVar5;
    }
    dVar9 = local_38;
    if (local_68 <= local_38) {
      dVar9 = local_68;
    }
    dVar10 = local_40;
    if (local_70 <= local_40) {
      dVar10 = local_70;
    }
    *param_2 = dVar10;
    param_2[1] = dVar9;
    param_2[2] = (double)CONCAT44(uVar8,uVar4);
    if (local_48 <= local_78) {
      uVar3 = SUB84(local_78,0);
      uVar7 = uVar6;
    }
    if (local_50 <= local_80) {
      dVar11 = local_80;
    }
    if (local_58 <= local_88) {
      dVar12 = local_88;
    }
  }
  *param_3 = dVar12;
  param_3[1] = dVar11;
  param_3[2] = (double)CONCAT44(uVar7,uVar3);
LAB_14062b0c6:
  dVar12 = param_2[2];
  uVar3 = SUB84(dVar12,0);
  uVar7 = (undefined4)((ulonglong)dVar12 >> 0x20);
  if (dVar12 <= local_90) {
    uVar3 = SUB84(local_90,0);
    uVar7 = (undefined4)((ulonglong)local_90 >> 0x20);
  }
  dVar12 = param_2[1];
  if (param_2[1] <= local_98) {
    dVar12 = local_98;
  }
  dVar11 = *param_2;
  if (*param_2 <= local_a0) {
    dVar11 = local_a0;
  }
  *param_2 = dVar11;
  param_2[1] = dVar12;
  param_2[2] = (double)CONCAT44(uVar7,uVar3);
  dVar12 = param_3[2];
  uVar3 = SUB84(dVar12,0);
  uVar7 = (undefined4)((ulonglong)dVar12 >> 0x20);
  if (local_a8 <= dVar12) {
    uVar3 = SUB84(local_a8,0);
    uVar7 = (undefined4)((ulonglong)local_a8 >> 0x20);
  }
  dVar12 = param_3[1];
  if (local_b0 <= param_3[1]) {
    dVar12 = local_b0;
  }
  dVar11 = *param_3;
  if (local_b8 <= *param_3) {
    dVar11 = local_b8;
  }
  *param_3 = dVar11;
  param_3[1] = dVar12;
  param_3[2] = (double)CONCAT44(uVar7,uVar3);
  if ((local_28 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14062b3ac FUN_14062b3ac body=29 status=ok
// SIG undefined FUN_14062b3ac(void)

void FUN_14062b3ac(longlong *param_1)

{
  (**(code **)(*param_1 + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x00014062b3c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}



// FUNCTION 14062b3ca FUN_14062b3ca body=155 status=ok
// SIG undefined FUN_14062b3ca(void)

undefined4 FUN_14062b3ca(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_14001cc68(0x490,0x10);
  FUN_14062d170(uVar4,0,1);
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  if (lVar1 != 0) {
    FUN_14062c13a(lVar1);
    FUN_1400020a8(lVar1);
  }
  LOCK();
  *(undefined4 *)(param_1 + 0xa8) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0xac) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0xb0) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0xbc) = 0;
  UNLOCK();
  uVar2 = FUN_14062b466(*(undefined8 *)(param_1 + 0x18));
  LOCK();
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  UNLOCK();
  uVar3 = FUN_14062b514(*(undefined8 *)(param_1 + 0x18));
  LOCK();
  uVar2 = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  UNLOCK();
  *(undefined1 *)(param_1 + 0xe8) = 0;
  return uVar2;
}



// FUNCTION 14062b466 FUN_14062b466 body=173 status=ok
// SIG undefined FUN_14062b466(void)

int FUN_14062b466(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(char **)(param_1 + 0x90);
  if (pcVar1 == (char *)0x0) {
    iVar5 = 1;
  }
  else {
    if (*pcVar1 == '\x01') {
      plVar4 = *(longlong **)(pcVar1 + 0x18);
    }
    else {
      plVar4 = (longlong *)((longlong)*(int *)(param_1 + 0x88) * 8 + *(longlong *)(pcVar1 + 0x18));
    }
    lVar2 = *plVar4;
    FUN_140056680(local_28,L"NumSubsteps");
    iVar3 = FUN_144a41c6c(lVar2,local_28);
    iVar5 = 1;
    if (iVar3 != -1) {
      iVar5 = (int)*(float *)(*(longlong *)(lVar2 + 0x18) + (longlong)iVar3 * 0xc);
    }
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14062b514 FUN_14062b514 body=173 status=ok
// SIG undefined FUN_14062b514(void)

int FUN_14062b514(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(char **)(param_1 + 0x90);
  if (pcVar1 == (char *)0x0) {
    iVar5 = 1;
  }
  else {
    if (*pcVar1 == '\x01') {
      plVar4 = *(longlong **)(pcVar1 + 0x18);
    }
    else {
      plVar4 = (longlong *)((longlong)*(int *)(param_1 + 0x88) * 8 + *(longlong *)(pcVar1 + 0x18));
    }
    lVar2 = *plVar4;
    FUN_140056680(local_28,L"NumIterations");
    iVar3 = FUN_144a41c6c(lVar2,local_28);
    iVar5 = 1;
    if (iVar3 != -1) {
      iVar5 = (int)*(float *)(*(longlong *)(lVar2 + 0x18) + (longlong)iVar3 * 0xc);
    }
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14062b5c2 FUN_14062b5c2 body=240 status=ok
// SIG undefined FUN_14062b5c2(void)

void FUN_14062b5c2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_14062c13a(lVar2);
    FUN_1400020a8(lVar2);
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  FUN_14062b6b2(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    FUN_149801104(param_1 + 0x20,0);
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  FUN_14062b72a(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x3c) != 0)) {
    FUN_149801164(param_1 + 0x30,0);
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  FUN_14062b789(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    FUN_1498011c4(param_1 + 0x40,0);
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  FUN_14062b6e8(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    FUN_149801224(param_1 + 0x50,0);
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}



// FUNCTION 14062b6b2 FUN_14062b6b2 body=54 status=ok
// SIG undefined FUN_14062b6b2(void)

void FUN_14062b6b2(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14062b6e8 FUN_14062b6e8 body=66 status=ok
// SIG undefined FUN_14062b6e8(void)

void FUN_14062b6e8(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_14062c694(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14062b72a FUN_14062b72a body=66 status=ok
// SIG undefined FUN_14062b72a(void)

void FUN_14062b72a(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_14062b91a(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14062b76c FUN_14062b76c body=29 status=ok
// SIG undefined FUN_14062b76c(void)

undefined8 FUN_14062b76c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14062b789 FUN_14062b789 body=116 status=ok
// SIG undefined FUN_14062b789(void)

void FUN_14062b789(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x78) = 0;
        if (*(longlong *)(lVar1 + 0x70) != 0) {
          FUN_1400020a8();
        }
        FUN_14062b8a6(lVar1 + 0x30);
        FUN_14062b7fd(*(undefined8 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x28));
        if (*(longlong *)(lVar1 + 0x20) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14062b7fd FUN_14062b7fd body=169 status=ok
// SIG undefined FUN_14062b7fd(void)

void FUN_14062b7fd(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        *(undefined4 *)(plVar1 + 0x12) = 0;
        if (plVar1[0x11] != 0) {
          FUN_1400020a8();
        }
        FUN_14062b8a6(plVar1 + 9);
        if (plVar1[6] != 0) {
          FUN_1400020a8();
        }
        FUN_1400bc89a(plVar1[4],(int)plVar1[5]);
        if (plVar1[4] != 0) {
          FUN_1400020a8();
        }
        if (plVar1[2] != 0) {
          FUN_1400020a8();
        }
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14062b8a6 FUN_14062b8a6 body=116 status=ok
// SIG undefined FUN_14062b8a6(void)

void FUN_14062b8a6(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 14062b91a FUN_14062b91a body=354 status=ok
// SIG undefined FUN_14062b91a(void)

void FUN_14062b91a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (lVar4 = *(longlong *)(param_1 + 8), lVar4 != 0)) {
    FUN_14062c694(lVar4);
    FUN_1400020a8(lVar4);
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xfc) != 0) {
    FUN_144727cd0((longlong *)(param_1 + 0xf0),0);
  }
  *(undefined8 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (0x80 < *(uint *)(param_1 + 0x11c)) {
    *(undefined4 *)(param_1 + 0x11c) = 0x80;
    FUN_1446efbd8(param_1 + 0x100,0);
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  FUN_14062ba7c(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe8));
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14062ba7c FUN_14062ba7c body=879 status=ok
// SIG undefined FUN_14062ba7c(void)

void FUN_14062ba7c(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  do {
    if (param_2 == 0) {
      return;
    }
    lVar4 = *param_1;
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x460) = 0;
      if (*(longlong *)(lVar4 + 0x458) != 0) {
        FUN_1400020a8();
      }
      puVar1 = (uint *)(lVar4 + 0x428);
      iVar3 = *(int *)(lVar4 + 0x440);
      if (iVar3 == 0) {
        uVar15 = 0;
        uVar14 = 1;
        iVar5 = 0;
        iVar11 = 0;
      }
      else {
        puVar9 = *(uint **)(lVar4 + 0x438);
        if (*(uint **)(lVar4 + 0x438) == (uint *)0x0) {
          puVar9 = puVar1;
        }
        uVar13 = *puVar9;
        if (uVar13 == 0) {
          iVar5 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar5 = iVar3 + -1;
          }
          uVar15 = 0;
          uVar14 = (ulonglong)(uint)(iVar5 >> 5);
          if (iVar5 >> 5 < 1) {
            uVar14 = uVar15;
          }
          iVar11 = 0;
          do {
            if (uVar14 == uVar15) goto LAB_14062bc0a;
            iVar11 = iVar11 + 0x20;
            uVar13 = puVar9[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar13 == 0);
        }
        else {
          uVar15 = 0;
          iVar11 = 0;
        }
        uVar14 = (ulonglong)(-uVar13 & uVar13);
        uVar2 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
      if (iVar5 < iVar3) {
        uVar13 = 0xffffffff;
        do {
          FUN_14062bdec((longlong)iVar5 * 0x168 + *(longlong *)(lVar4 + 0x418) + 0x10);
          uVar13 = ~(uint)uVar14 & uVar13;
          puVar9 = *(uint **)(lVar4 + 0x438);
          if (*(uint **)(lVar4 + 0x438) == (uint *)0x0) {
            puVar9 = puVar1;
          }
          iVar3 = *(int *)(lVar4 + 0x440);
          iVar5 = (int)uVar15;
          lVar12 = (longlong)iVar5;
          uVar6 = puVar9[lVar12] & uVar13;
          if (uVar6 == 0) {
            iVar7 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar7 = iVar3 + -1;
            }
            iVar7 = iVar7 >> 5;
            iVar8 = iVar7;
            if (iVar7 < iVar5) {
              iVar8 = iVar5;
            }
            if (iVar7 <= iVar5) break;
            lVar10 = 0;
            while( true ) {
              iVar11 = iVar11 + 0x20;
              uVar6 = puVar9[lVar12 + lVar10 + 1];
              if (uVar6 != 0) break;
              lVar10 = lVar10 + 1;
              if (iVar8 - lVar12 == lVar10) goto LAB_14062bc0a;
            }
            uVar15 = (ulonglong)(iVar5 + (int)lVar10 + 1);
            uVar13 = 0xffffffff;
          }
          uVar14 = (ulonglong)(-uVar6 & uVar6);
          uVar2 = uVar14 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        } while (iVar5 < iVar3);
      }
LAB_14062bc0a:
      *(undefined4 *)(lVar4 + 0x420) = 0;
      if (*(int *)(lVar4 + 0x424) != 0) {
        FUN_14062c0ca((longlong *)(lVar4 + 0x418),0);
      }
      *(undefined8 *)(lVar4 + 0x448) = 0xffffffff;
      *(undefined4 *)(lVar4 + 0x440) = 0;
      if (0x80 < *(uint *)(lVar4 + 0x444)) {
        *(undefined4 *)(lVar4 + 0x444) = 0x80;
        FUN_1446efbd8(puVar1);
      }
      if (*(longlong *)(lVar4 + 0x438) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar4 + 0x418) != 0) {
        FUN_1400020a8();
      }
      FUN_14062bdec(lVar4 + 0x2d0);
      if (*(longlong *)(lVar4 + 0x2c0) != 0) {
        FUN_1400020a8();
      }
      FUN_14062bdec(lVar4 + 0x158);
      if (*(longlong *)(lVar4 + 0x148) != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(lVar4 + 0x140) = 0;
      if (*(longlong *)(lVar4 + 0x138) != 0) {
        FUN_1400020a8();
      }
      FUN_140dc25bc(lVar4 + 0xf8);
      *(undefined4 *)(lVar4 + 0xf0) = 0;
      if (*(longlong *)(lVar4 + 0xe8) != 0) {
        FUN_1400020a8();
      }
      FUN_140dc236c(lVar4 + 0xa8);
      *(undefined4 *)(lVar4 + 0xa0) = 0;
      if (*(longlong *)(lVar4 + 0x98) != 0) {
        FUN_1400020a8();
      }
      FUN_140dc236c(lVar4 + 0x58);
      *(undefined4 *)(lVar4 + 0x50) = 0;
      if (*(longlong *)(lVar4 + 0x48) != 0) {
        FUN_1400020a8();
      }
      FUN_140dc29c8(lVar4 + 8);
      FUN_1400020a8(lVar4);
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while( true );
}



// FUNCTION 14062bdec FUN_14062bdec body=143 status=ok
// SIG undefined FUN_14062bdec(void)

void FUN_14062bdec(longlong *param_1)

{
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_14062be7c(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_14062beec(param_1 + 4);
  FUN_144716727(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14062be7c FUN_14062be7c body=111 status=ok
// SIG undefined FUN_14062be7c(void)

void FUN_14062be7c(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14062beec(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14083ed90(param_1 + 2);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14062beec FUN_14062beec body=55 status=ok
// SIG undefined FUN_14062beec(void)

void FUN_14062beec(longlong *param_1)

{
  FUN_14062bf24(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14062bf24 FUN_14062bf24 body=420 status=ok
// SIG undefined FUN_14062bf24(void)

void FUN_14062bf24(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(lVar2 + lVar5 + 8);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14062c0ca FUN_14062c0ca body=112 status=ok
// SIG undefined FUN_14062c0ca(void)

void FUN_14062c0ca(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x168,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x168)) {
      uVar2 = uVar1 / 0x168 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x168,8);
  }
  return;
}



// FUNCTION 14062c13a FUN_14062c13a body=1369 status=ok
// SIG undefined FUN_14062c13a(void)

void FUN_14062c13a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  
  if ((*(longlong *)(param_1 + 0x98) != 0) && (lVar15 = *(longlong *)(param_1 + 0x90), lVar15 != 0))
  {
    FUN_14062c694(lVar15);
    FUN_1400020a8(lVar15);
  }
  FUN_1408bc7be(*(undefined8 *)(param_1 + 0x470),*(undefined4 *)(param_1 + 0x478));
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FUN_1400020a8();
  }
  FUN_1408bc7be(*(undefined8 *)(param_1 + 0x460),*(undefined4 *)(param_1 + 0x468));
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FUN_1400020a8();
  }
  FUN_1408bc892(param_1 + 0x360);
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x288) = 0;
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)(param_1 + 0x240);
  puVar4 = (uint *)(param_1 + 0x250);
  iVar6 = *(int *)(param_1 + 0x268);
  if (iVar6 == 0) {
    uVar18 = 0;
    uVar16 = 1;
    iVar14 = 0;
    iVar10 = 0;
  }
  else {
    puVar11 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar11 = puVar4;
    }
    uVar17 = *puVar11;
    if (uVar17 == 0) {
      iVar14 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar14 = iVar6 + -1;
      }
      uVar18 = 0;
      uVar12 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar12 = uVar18;
      }
      iVar14 = 0;
      do {
        if (uVar12 == uVar18) goto LAB_14062c300;
        iVar14 = iVar14 + 0x20;
        uVar17 = puVar11[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar18 = 0;
      iVar14 = 0;
    }
    uVar16 = (ulonglong)(-uVar17 & uVar17);
    uVar12 = uVar16 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar10 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar10) {
      iVar10 = iVar6;
    }
  }
  if (iVar10 < iVar6) {
    uVar17 = 0xffffffff;
    do {
      lVar15 = *(longlong *)(*plVar3 + 8 + (longlong)iVar10 * 0x18);
      if (lVar15 != 0) {
        FUN_14062c8d2(lVar15);
        FUN_1400020a8(lVar15);
        iVar6 = *(int *)(param_1 + 0x268);
      }
      uVar17 = uVar17 & ~(uint)uVar16;
      puVar11 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar11 = puVar4;
      }
      iVar10 = (int)uVar18;
      lVar15 = (longlong)iVar10;
      uVar7 = puVar11[lVar15] & uVar17;
      if (uVar7 == 0) {
        iVar8 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar8 = iVar6 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar10) {
          iVar9 = iVar10;
        }
        if (iVar8 <= iVar10) break;
        lVar13 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar7 = puVar11[lVar15 + lVar13 + 1];
          if (uVar7 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar15 == lVar13) goto LAB_14062c300;
        }
        uVar18 = (ulonglong)(iVar10 + (int)lVar13 + 1);
        uVar17 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar7 & uVar7);
      uVar12 = uVar16 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar10 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar6);
  }
LAB_14062c300:
  *(undefined4 *)(param_1 + 0x248) = 0;
  if (*(int *)(param_1 + 0x24c) != 0) {
    FUN_144727cd0(plVar3,0);
  }
  *(undefined8 *)(param_1 + 0x270) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x268) = 0;
  if (0x80 < *(uint *)(param_1 + 0x26c)) {
    *(undefined4 *)(param_1 + 0x26c) = 0x80;
    FUN_1446efbd8(puVar4,0);
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FUN_1400020a8();
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0xa0);
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
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  puVar5 = *(undefined8 **)(param_1 + 0x70);
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  lVar15 = *(longlong *)(param_1 + 0x68);
  if (lVar15 != 0) {
    FUN_149802e02(lVar15);
    FUN_1400020a8(lVar15);
  }
  FUN_14062c814(param_1);
  return;
}



// FUNCTION 14062c694 FUN_14062c694 body=72 status=ok
// SIG undefined FUN_14062c694(void)

void FUN_14062c694(longlong param_1)

{
  FUN_14062c6dc(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_14062c71c(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14062c6dc FUN_14062c6dc body=64 status=ok
// SIG undefined FUN_14062c6dc(void)

void FUN_14062c6dc(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_14062c770(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14062c71c FUN_14062c71c body=73 status=ok
// SIG undefined FUN_14062c71c(void)

void FUN_14062c71c(longlong param_1,int param_2)

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



// FUNCTION 14062c766 FUN_14062c766 body=9 status=ok
// SIG undefined FUN_14062c766(void)

void FUN_14062c766(longlong param_1)

{
  FUN_14054b30a(param_1 + 0x10);
  return;
}



// FUNCTION 14062c770 FUN_14062c770 body=107 status=ok
// SIG undefined FUN_14062c770(void)

void FUN_14062c770(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f4b5f0;
  plVar3 = (longlong *)param_1[0x16];
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
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_14062c7dc(param_1 + 0xb);
  return;
}



// FUNCTION 14062c7dc FUN_14062c7dc body=55 status=ok
// SIG undefined FUN_14062c7dc(void)

void FUN_14062c7dc(longlong *param_1)

{
  FUN_14062ea76(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14062c814 FUN_14062c814 body=189 status=ok
// SIG undefined FUN_14062c814(void)

void FUN_14062c814(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f51bc8;
  FUN_1447f69b6(param_1 + 10);
  FUN_1448a8284(param_1 + 1);
  FUN_1448a8284(param_1 + 4);
  FUN_1448a8284(param_1 + 7);
  FUN_1448a8284(param_1 + 10);
  FUN_144760e21(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14062c8d2 FUN_14062c8d2 body=1366 status=ok
// SIG undefined FUN_14062c8d2(void)

void FUN_14062c8d2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1a8);
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
  plVar3 = *(longlong **)(param_1 + 0x198);
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
  plVar3 = *(longlong **)(param_1 + 0x188);
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
  plVar3 = *(longlong **)(param_1 + 0x168);
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
  plVar3 = *(longlong **)(param_1 + 0x158);
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
  plVar3 = *(longlong **)(param_1 + 0x148);
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
  plVar3 = *(longlong **)(param_1 + 0x138);
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
  plVar3 = *(longlong **)(param_1 + 0x128);
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
  plVar3 = *(longlong **)(param_1 + 0x118);
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
  plVar3 = *(longlong **)(param_1 + 0x108);
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
  plVar3 = *(longlong **)(param_1 + 0xf8);
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
  plVar3 = *(longlong **)(param_1 + 0xe8);
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
  plVar3 = *(longlong **)(param_1 + 0xd8);
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
  plVar3 = *(longlong **)(param_1 + 200);
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
  plVar3 = *(longlong **)(param_1 + 0xb8);
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
  plVar3 = *(longlong **)(param_1 + 0xa8);
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
  plVar3 = *(longlong **)(param_1 + 0x98);
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
  plVar3 = *(longlong **)(param_1 + 0x88);
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
  plVar3 = *(longlong **)(param_1 + 0x78);
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
  plVar3 = *(longlong **)(param_1 + 0x68);
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
  plVar3 = *(longlong **)(param_1 + 0x58);
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
  plVar3 = *(longlong **)(param_1 + 0x48);
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
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  plVar3 = *(longlong **)(param_1 + 0x28);
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
                    /* WARNING: Could not recover jumptable at 0x00014062ce24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14062ce28 FUN_14062ce28 body=1 status=ok
// SIG undefined FUN_14062ce28(void)

void FUN_14062ce28(void)

{
  return;
}



// FUNCTION 14062ce2a FUN_14062ce2a body=1 status=ok
// SIG undefined FUN_14062ce2a(void)

void FUN_14062ce2a(void)

{
  return;
}



// FUNCTION 14062ce2c FUN_14062ce2c body=9 status=ok
// SIG undefined FUN_14062ce2c(void)

void FUN_14062ce2c(longlong param_1)

{
  FUN_14062cf90(param_1 + 0x10);
  return;
}



// FUNCTION 14062ce36 FUN_14062ce36 body=50 status=ok
// SIG undefined FUN_14062ce36(void)

void FUN_14062ce36(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14be85c90;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_14062cff8(param_1 + 0x10);
  return;
}



// FUNCTION 14062ce68 FUN_14062ce68 body=50 status=ok
// SIG undefined FUN_14062ce68(void)

void FUN_14062ce68(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14be85b70;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_14062ce9a(param_1 + 0x10);
  return;
}



// FUNCTION 14062ce9a FUN_14062ce9a body=97 status=ok
// SIG undefined FUN_14062ce9a(void)

void FUN_14062ce9a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f5fc08;
  param_1[6] = &PTR_FUN_149f57480;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14062cefc FUN_14062cefc body=50 status=ok
// SIG undefined FUN_14062cefc(void)

void FUN_14062cefc(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14be85b70;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_14062ce9a(param_1 + 0x10);
  return;
}



// FUNCTION 14062cf2e FUN_14062cf2e body=97 status=ok
// SIG undefined FUN_14062cf2e(void)

void FUN_14062cf2e(longlong param_1)

{
  *(undefined ***)(param_1 + 0x70) = &PTR_FUN_149f57480;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_149f57480;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14062cf90 FUN_14062cf90 body=104 status=ok
// SIG undefined FUN_14062cf90(void)

void FUN_14062cf90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f58610;
  param_1[0xc] = &PTR_FUN_149f57480;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  param_1[3] = &PTR_FUN_149f57480;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14062cff8 FUN_14062cff8 body=111 status=ok
// SIG undefined FUN_14062cff8(void)

void FUN_14062cff8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f5fc00;
  param_1[8] = &PTR_FUN_149f57480;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14062d068 FUN_14062d068 body=50 status=ok
// SIG undefined FUN_14062d068(void)

void FUN_14062d068(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14be85bf8;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_14062d09a(param_1 + 0x10);
  return;
}



// FUNCTION 14062d09a FUN_14062d09a body=213 status=ok
// SIG undefined FUN_14062d09a(void)

void FUN_14062d09a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f5f4a8;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x16] = &PTR_FUN_149f57480;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  param_1[0xf] = &PTR_FUN_149f57480;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  param_1[6] = &PTR_FUN_149f57480;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14062d170 FUN_14062d170 body=2715 status=ok
// SIG undefined FUN_14062d170(void)

undefined8 * FUN_14062d170(undefined8 *param_1,undefined8 param_2,char param_3)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined ***pppuVar11;
  longlong lVar12;
  undefined1 auStack_3c8 [32];
  undefined4 local_3a8;
  undefined4 local_3a0;
  undefined4 local_398;
  undefined4 local_390;
  undefined4 local_388;
  undefined4 local_380;
  undefined1 local_378;
  undefined1 local_370;
  undefined8 *local_368;
  undefined8 *local_360;
  undefined8 *local_358;
  undefined8 *local_350;
  undefined8 *local_348;
  undefined8 *local_340;
  undefined8 *local_338;
  undefined8 *local_330;
  undefined8 *local_328;
  undefined8 *local_320;
  undefined8 *local_318;
  undefined8 *local_310;
  undefined8 *local_308;
  undefined1 local_300 [160];
  undefined **local_260 [9];
  longlong local_218;
  longlong local_200;
  longlong local_1e8;
  longlong local_1d0;
  undefined **local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined1 *local_1a8 [2];
  undefined ***local_198;
  undefined **local_188;
  undefined8 *local_180;
  code *local_168 [2];
  undefined ***local_158;
  undefined **local_148;
  undefined8 *local_140;
  undefined1 *local_128 [2];
  undefined ***local_118;
  undefined **local_108;
  undefined8 *local_100;
  longlong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 2;
  *param_1 = &PTR_FUN_14be854c0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x15] = &PTR_LAB_149f57380;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = &PTR_LAB_149f4c0e0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = &PTR_LAB_149f4c0e0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = &PTR_LAB_149f4c0e0;
  local_368 = param_1 + 0x21;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x21] = &PTR_LAB_149f4c0e0;
  local_360 = param_1 + 0x24;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x24] = &PTR_LAB_149f4c0e0;
  local_350 = param_1 + 0x27;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x27] = &PTR_LAB_149f4c0e0;
  local_340 = param_1 + 0x2a;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = &PTR_LAB_149f4c0e0;
  local_330 = param_1 + 0x2d;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2d] = &PTR_LAB_149f4c0e0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x30] = &PTR_LAB_149f4c0e0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x33] = &PTR_LAB_149f4c0e0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x36] = &PTR_LAB_149f537b0;
  local_328 = param_1 + 0x30;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x39] = &PTR_LAB_149f57380;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3c] = &PTR_LAB_149f57380;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3f] = &PTR_LAB_149f57380;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x42] = &PTR_LAB_149f57380;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x45] = &PTR_LAB_149f51ec0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0x80;
  *(undefined4 *)(param_1 + 0x4e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0x3ff0000000000000;
  param_1[0x53] = 0x3ff0000000000000;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  uVar3 = DAT_14c8463e8;
  param_1[0x5c] = DAT_14c8463e0;
  param_1[0x5d] = uVar3;
  uVar3 = DAT_14c8463d8;
  param_1[0x5a] = DAT_14c8463d0;
  param_1[0x5b] = uVar3;
  param_1[0x5e] = 0x3ff0000000000000;
  param_1[0x5f] = 0x3d08888900000000;
  param_1[0x67] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 0x69) = DAT_14cc2733c;
  param_1[0x68] = DAT_14cc27334;
  *(undefined4 *)((longlong)param_1 + 0x354) = DAT_14cc27348;
  *(undefined8 *)((longlong)param_1 + 0x34c) = DAT_14cc27340;
  local_358 = param_1 + 0x33;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  local_348 = param_1 + 0x36;
  *(undefined1 *)((longlong)param_1 + 0x35c) = 0;
  local_338 = param_1 + 0x39;
  local_320 = param_1 + 0x3c;
  local_318 = param_1 + 0x3f;
  local_308 = param_1 + 0x42;
  local_310 = param_1 + 0x45;
  memset(param_1 + 0x6c,0,0x120);
  *(undefined1 *)(param_1 + 0x90) = 1;
  FUN_14062e0f2(param_1,param_2);
  if (param_3 == '\0') {
    plVar10 = param_1 + 0xd;
    lVar8 = FUN_14001cc68(0x5a0,0x10);
    pcVar1 = (char *)param_1[0x12];
    if (*pcVar1 == '\x01') {
      puVar9 = *(undefined8 **)(pcVar1 + 0x18);
    }
    else {
      puVar9 = (undefined8 *)((longlong)*(int *)(param_1 + 0x11) * 8 + *(longlong *)(pcVar1 + 0x18))
      ;
    }
    FUN_146e22748(lVar8,*puVar9);
    lVar2 = *plVar10;
    lVar12 = lVar2;
    if ((lVar2 != lVar8) && (*plVar10 = lVar8, lVar12 = lVar8, lVar2 != 0)) {
      FUN_149802e02(lVar2);
      FUN_1400020a8(lVar2);
      lVar12 = *plVar10;
    }
    FUN_14062dc0c(lVar12 + 0x460,param_1 + 0x15);
    FUN_14062dc0c(param_1[0xd] + 0x460,param_1 + 0x18);
    FUN_14062dc0c(param_1[0xd] + 0x460,param_1 + 0x1b);
    FUN_14062dc0c(param_1[0xd] + 0x30,param_1 + 0x1e);
    FUN_14062dc0c(param_1[0xd] + 0x30,local_368);
    FUN_14062dc0c(param_1[0xd] + 0x30,local_360);
    FUN_14062dc0c(param_1[0xd] + 0x30,local_350);
    FUN_14062dc0c(param_1[0xd] + 0x30,local_340);
    FUN_14062dc0c(param_1[0xd] + 0x30,local_330);
    FUN_14062dc0c(param_1[0xd] + 0x30,local_328);
    FUN_14062dc0c(param_1[0xd] + 0x30,local_358);
    FUN_14062dc0c(param_1[0xd] + 0x100,local_348);
    FUN_14062dc0c(param_1[0xd] + 0x100,local_338);
    FUN_14062dc0c(param_1[0xd] + 0x100,local_320);
    FUN_14062dc0c(param_1[0xd] + 0x100,local_318);
    FUN_14062dc0c(param_1[0xd] + 0x100,local_310);
    FUN_14062dc0c(param_1[0xd] + 0x100,local_308);
    local_118 = (undefined ***)0x0;
    local_108 = &PTR_LAB_14be87530;
    local_128[0] = &LAB_144637dba;
    local_100 = param_1;
    FUN_1497f3ff2(param_1[0xd] + 0x520,local_128);
    if (local_128[0] != (undefined1 *)0x0) {
      pppuVar11 = local_118;
      if (local_118 == (undefined ***)0x0) {
        pppuVar11 = &local_108;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    local_158 = (undefined ***)0x0;
    local_148 = &PTR_LAB_14be87550;
    local_168[0] = FUN_144637e66;
    local_140 = param_1;
    FUN_1497f4116(param_1[0xd] + 0x560,local_168);
    if (local_168[0] != (code *)0x0) {
      pppuVar11 = local_158;
      if (local_158 == (undefined ***)0x0) {
        pppuVar11 = &local_148;
      }
      (*(code *)(*pppuVar11)[2])();
    }
  }
  else {
    FUN_14062df02(local_260);
    local_260[0] = &PTR_FUN_149f51a28;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1c0 = &PTR_LAB_149f51a40;
    FUN_14062dc0c(local_260);
    FUN_14062de0e(local_300);
    puVar7 = (undefined8 *)FUN_14001cc68(0x470,0x10);
    local_a8 = 0;
    uStack_a0 = 0;
    local_370 = 0;
    local_378 = 0;
    local_380 = 0;
    local_388 = 0x3c23d70a;
    local_390 = 0x3e4ccccd;
    local_398 = 0x40000000;
    local_3a0 = 0x3f99999a;
    local_3a8 = 1;
    FUN_140630098(puVar7,local_260,local_300);
    puVar9 = (undefined8 *)param_1[0xe];
    if ((puVar9 != puVar7) && (param_1[0xe] = puVar7, puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)(puVar9,1);
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_14062dc0c(param_1[0xe],param_1 + 0x15);
    FUN_14062dc0c(param_1[0xe],param_1 + 0x18);
    FUN_14062dc0c(param_1[0xe],param_1 + 0x1b);
    FUN_14062dc0c(param_1[0xe] + 0x20,param_1 + 0x1e);
    FUN_14062dc0c(param_1[0xe] + 0x20,local_368);
    FUN_14062dc0c(param_1[0xe] + 0x20,local_360);
    FUN_14062dc0c(param_1[0xe] + 0x20,local_350);
    FUN_14062dc0c(param_1[0xe] + 0x20,local_340);
    FUN_14062dc0c(param_1[0xe] + 0x20,local_330);
    FUN_14062dc0c(param_1[0xe] + 0x20,local_328);
    FUN_14062dc0c(param_1[0xe] + 0x20,local_358);
    FUN_14062dc0c(param_1[0xe] + 0xf0,local_348);
    FUN_14062dc0c(param_1[0xe] + 0xf0,local_338);
    FUN_14062dc0c(param_1[0xe] + 0xf0,local_320);
    FUN_14062dc0c(param_1[0xe] + 0xf0,local_318);
    FUN_14062dc0c(param_1[0xe] + 0xf0,local_310);
    FUN_14062dc0c(param_1[0xe] + 0xf0,local_308);
    local_198 = (undefined ***)0x0;
    local_188 = &PTR_LAB_14be87570;
    local_1a8[0] = &LAB_1446386ee;
    local_180 = param_1;
    FUN_14062dfcc(param_1[0xe] + 0x3c0,local_1a8);
    if (local_1a8[0] != (undefined1 *)0x0) {
      pppuVar11 = local_198;
      if (local_198 == (undefined ***)0x0) {
        pppuVar11 = &local_188;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    lVar8 = param_1[0xe];
    local_a8 = *(longlong *)(lVar8 + 0x400);
    uStack_a0 = *(undefined8 *)(lVar8 + 0x408);
    local_98 = *(longlong **)(lVar8 + 0x410);
    uStack_90 = *(undefined8 *)(lVar8 + 0x418);
    local_88 = *(longlong *)(lVar8 + 0x420);
    uStack_80 = *(undefined8 *)(lVar8 + 0x428);
    local_78 = *(undefined8 *)(lVar8 + 0x430);
    uStack_70 = *(undefined8 *)(lVar8 + 0x438);
    uVar5 = local_78;
    uVar6 = uStack_70;
    uVar4 = uStack_90;
    uVar3 = uStack_a0;
    *(ulonglong *)(lVar8 + 0x430) = CONCAT44(uStack_b4,local_b8);
    *(ulonglong *)(lVar8 + 0x438) = CONCAT44(uStack_ac,uStack_b0);
    *(undefined ***)(lVar8 + 0x420) = &PTR_LAB_14be87590;
    *(undefined8 **)(lVar8 + 0x428) = param_1;
    *(undefined8 *)(lVar8 + 0x410) = 0;
    *(ulonglong *)(lVar8 + 0x418) = CONCAT44(uStack_cc,uStack_d0);
    *(code **)(lVar8 + 0x400) = FUN_14463876a;
    *(ulonglong *)(lVar8 + 0x408) = CONCAT44(uStack_dc,uStack_e0);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_c8 = local_88;
    uStack_c0 = uStack_80;
    local_d8 = local_98;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    local_e8 = local_a8;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    uStack_a0 = uVar3;
    uStack_90 = uVar4;
    local_78 = uVar5;
    uStack_70 = uVar6;
    if (local_a8 != 0) {
      plVar10 = local_d8;
      if (local_98 == (longlong *)0x0) {
        plVar10 = &local_c8;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    FUN_140b4d3d6(local_300);
    local_260[0] = &PTR_FUN_149f51a28;
    if (local_1b8 != 0) {
      FUN_1400020a8();
    }
    local_260[0] = &PTR_FUN_149f51a30;
    if (local_1d0 != 0) {
      FUN_1400020a8();
    }
    if (local_1e8 != 0) {
      FUN_1400020a8();
    }
    if (local_200 != 0) {
      FUN_1400020a8();
    }
    if (local_218 != 0) {
      FUN_1400020a8();
    }
    FUN_1407fbce0(local_260);
  }
  if ((local_60 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14062dc0c FUN_14062dc0c body=159 status=ok
// SIG undefined FUN_14062dc0c(void)

ulonglong FUN_14062dc0c(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar3 = *(longlong *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar7 = (longlong)(int)uVar1;
  if (lVar7 != 0) {
    lVar6 = lVar7 * 8;
    uVar8 = 0;
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar8 * 8) == 0) {
        if ((int)uVar8 != -1) {
          lVar7 = lVar5 >> 0x20;
          puVar4 = (undefined8 *)(lVar3 + lVar7 * 8);
          goto LAB_14062dc64;
        }
        break;
      }
      lVar5 = lVar5 + 0x100000000;
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  *(uint *)(param_1 + 0x10) = uVar1 + 1;
  if (*(uint *)(param_1 + 0x14) < uVar1 + 1) {
    FUN_14062dcac((longlong *)(param_1 + 8),uVar1);
    lVar3 = *(longlong *)(param_1 + 8);
  }
  puVar4 = (undefined8 *)(lVar3 + lVar7 * 8);
  uVar8 = (ulonglong)uVar1;
LAB_14062dc64:
  *puVar4 = param_2;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + lVar7 * 8);
  (**(code **)(*plVar2 + 8))(plVar2,*(undefined4 *)(param_1 + 0x18));
  return uVar8 & 0xffffffff;
}



// FUNCTION 14062dcac FUN_14062dcac body=353 status=ok
// SIG undefined FUN_14062dcac(void)

void FUN_14062dcac(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14062dd31;
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
LAB_14062dd31:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14062de0e FUN_14062de0e body=96 status=ok
// SIG undefined FUN_14062de0e(void)

undefined8 * FUN_14062de0e(undefined8 *param_1)

{
  FUN_14062de6e();
  *param_1 = &PTR_FUN_149f51a80;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = &PTR_LAB_149f4c0e0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = &PTR_LAB_149f4c0e0;
  FUN_14062dc0c(param_1,param_1 + 0xe);
  FUN_14062dc0c(param_1,param_1 + 0x11);
  return param_1;
}



// FUNCTION 14062de6e FUN_14062de6e body=148 status=ok
// SIG undefined FUN_14062de6e(void)

undefined8 * FUN_14062de6e(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_149f4c0d8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = &PTR_LAB_149f4c0e0;
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_14062dc0c(param_1,param_1 + 4);
  *param_1 = &PTR_FUN_149f51c10;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = &PTR_LAB_149f51d80;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = &PTR_LAB_149f51dc0;
  FUN_14062dc0c(param_1,param_1 + 8);
  FUN_14062dc0c(param_1,param_1 + 0xb);
  return param_1;
}



// FUNCTION 14062df02 FUN_14062df02 body=202 status=ok
// SIG undefined FUN_14062df02(void)

undefined8 * FUN_14062df02(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_149f4c0d8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = &PTR_LAB_149f4c0e0;
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_14062dc0c(param_1,param_1 + 4);
  *param_1 = &PTR_FUN_149f51a30;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = &PTR_LAB_149f4c0e0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = &PTR_LAB_149f4c0e0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = &PTR_LAB_149f51bd0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = &PTR_LAB_149f51bd0;
  FUN_14062dc0c(param_1,param_1 + 8);
  FUN_14062dc0c(param_1,param_1 + 0xb);
  FUN_14062dc0c(param_1,param_1 + 0xe);
  FUN_14062dc0c(param_1,param_1 + 0x11);
  return param_1;
}



// FUNCTION 14062dfcc FUN_14062dfcc body=292 status=ok
// SIG undefined FUN_14062dfcc(void)

longlong * FUN_14062dfcc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
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
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14062e0f2 FUN_14062e0f2 body=758 status=ok
// SIG undefined FUN_14062e0f2(void)

void FUN_14062e0f2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  ulonglong *local_48;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x90);
    if (lVar3 != 0) {
      FUN_14062c694(lVar3);
      FUN_1400020a8(lVar3);
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    plVar4 = *(longlong **)(param_1 + 0xa0);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xa0) = 0;
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  }
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x90) = param_2;
    goto LAB_14062e29b;
  }
  plVar4 = (longlong *)FUN_14001cc68(0xc0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14be867f0;
  plVar4[2] = (longlong)&PTR_FUN_149f64e30;
  plVar4[7] = 0;
  *(undefined4 *)(plVar4 + 8) = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  *(undefined8 *)((longlong)plVar4 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar4 + 0x4c) = 0;
  plVar4[0xb] = 0;
  *(undefined4 *)(plVar4 + 0xc) = 0;
  plVar4[0x11] = 0;
  *(undefined4 *)(plVar4 + 0x12) = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  *(undefined8 *)((longlong)plVar4 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar4 + 0x9c) = 0;
  plVar4[0x15] = 0;
  *(undefined4 *)(plVar4 + 0x16) = 0;
  *(undefined4 *)((longlong)plVar4 + 0xbc) = 9;
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x98) = 0x10;
    plVar6 = *(longlong **)(param_1 + 0xa0);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xa0) = 0;
LAB_14062e354:
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      if (plVar4 != (longlong *)0x0) goto LAB_14062e1ef;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x98) = plVar4 + 2;
    plVar6 = *(longlong **)(param_1 + 0xa0);
    if (plVar4 == plVar6) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      *(longlong **)(param_1 + 0xa0) = plVar4;
      if (plVar6 != (longlong *)0x0) goto LAB_14062e354;
    }
LAB_14062e1ef:
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  puVar5 = (undefined1 *)FUN_14001cc68(0x28,0x10);
  local_30 = *(undefined8 *)(param_1 + 0x98);
  local_28 = *(longlong **)(param_1 + 0xa0);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_50 = &local_30;
  local_48 = &local_20;
  FUN_14062e434(&local_40);
  *puVar5 = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined8 *)(puVar5 + 0x20) = 0;
  FUN_14062e584(puVar5,&local_40);
  *(undefined1 **)(param_1 + 0x90) = puVar5;
  FUN_14062e3e9(local_40,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_28 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_14062e29b:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14062e3e9 FUN_14062e3e9 body=75 status=ok
// SIG undefined FUN_14062e3e9(void)

void FUN_14062e3e9(longlong param_1,int param_2)

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



// FUNCTION 14062e434 FUN_14062e434 body=82 status=ok
// SIG undefined FUN_14062e434(void)

undefined8 * FUN_14062e434(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  uVar2 = (ulonglong)(param_2[1] - lVar1) >> 4;
  *(int *)(param_1 + 1) = (int)uVar2;
  if ((int)uVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14062e4ae(param_1,uVar2 & 0xffffffff);
    FUN_14062e486(*param_1,lVar1,uVar2 & 0xffffffff);
  }
  return param_1;
}



// FUNCTION 14062e486 FUN_14062e486 body=40 status=ok
// SIG undefined FUN_14062e486(void)

void FUN_14062e486(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14062e4ae FUN_14062e4ae body=213 status=ok
// SIG undefined FUN_14062e4ae(void)

void FUN_14062e4ae(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = (longlong)param_2 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar1 < 0x7ff1) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)
                        [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
      }
      else {
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
      }
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
    }
  }
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14062e584 FUN_14062e584 body=605 status=ok
// SIG undefined FUN_14062e584(void)

void FUN_14062e584(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar6 = (int)param_2[1];
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  plVar1 = (longlong *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0x14);
  FUN_14062c71c(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((iVar5 < iVar6) && (*(int *)(param_1 + 0x14) != iVar6)) {
    FUN_14062eda2(plVar1,iVar6);
  }
  iVar6 = (int)param_2[1];
  if (-1 < iVar6) {
    plVar2 = (longlong *)(param_1 + 0x18);
    iVar5 = *(int *)(param_1 + 0x24);
    FUN_14062c6dc(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    if ((iVar5 < iVar6) && (*(int *)(param_1 + 0x24) != iVar6)) {
      FUN_14062ee76(plVar2,iVar6);
    }
    lVar9 = param_2[1];
    if ((longlong)(int)lVar9 != 0) {
      lVar7 = *param_2;
      lVar12 = 0;
      do {
        plVar10 = (longlong *)FUN_14001cc68(0xc0,0x10);
        plVar10[1] = (longlong)&DAT_100000001;
        *plVar10 = (longlong)&PTR_FUN_14be867f0;
        plVar10[2] = (longlong)&PTR_FUN_149f64e30;
        plVar10[7] = 0;
        *(undefined4 *)(plVar10 + 8) = 0;
        plVar10[3] = 0;
        plVar10[4] = 0;
        *(undefined8 *)((longlong)plVar10 + 0x44) = 0xffffffff00000080;
        *(undefined4 *)((longlong)plVar10 + 0x4c) = 0;
        plVar10[0xb] = 0;
        *(undefined4 *)(plVar10 + 0xc) = 0;
        plVar10[0x11] = 0;
        *(undefined4 *)(plVar10 + 0x12) = 0;
        plVar10[0xd] = 0;
        plVar10[0xe] = 0;
        *(undefined8 *)((longlong)plVar10 + 0x94) = 0xffffffff00000080;
        *(undefined4 *)((longlong)plVar10 + 0x9c) = 0;
        plVar10[0x15] = 0;
        *(undefined4 *)(plVar10 + 0x16) = 0;
        *(undefined4 *)((longlong)plVar10 + 0xbc) = 9;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        iVar6 = *(int *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x10) = iVar6 + 1U;
        if (*(uint *)(param_1 + 0x14) < iVar6 + 1U) {
          FUN_14980230e(plVar1,iVar6);
        }
        lVar8 = *plVar1;
        lVar13 = (longlong)iVar6 * 0x10;
        *(longlong **)(lVar8 + lVar13) = plVar10 + 2;
        *(longlong **)(lVar8 + 8 + lVar13) = plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar10 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar4 = (int *)((longlong)plVar10 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        uVar11 = FUN_14001cc68(0xb8,0x10);
        FUN_14062e7e2(uVar11,lVar8 + lVar13);
        iVar6 = *(int *)(param_1 + 0x20);
        *(uint *)(param_1 + 0x20) = iVar6 + 1U;
        if (*(uint *)(param_1 + 0x24) < iVar6 + 1U) {
          FUN_149802394(plVar2,iVar6);
        }
        *(undefined8 *)(*plVar2 + (longlong)iVar6 * 8) = uVar11;
        FUN_14062efb6(uVar11,*(undefined8 *)(lVar7 + lVar12));
        lVar12 = lVar12 + 0x10;
      } while ((longlong)(int)lVar9 * 0x10 != lVar12);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar6);
}



// FUNCTION 14062e7e2 FUN_14062e7e2 body=48 status=ok
// SIG undefined FUN_14062e7e2(void)

undefined8 * FUN_14062e7e2(undefined8 *param_1)

{
  FUN_14062ec7a();
  *param_1 = &PTR_FUN_149f49c00;
  FUN_1409bc17a(param_1);
  FUN_14062e812(param_1);
  return param_1;
}



// FUNCTION 14062e812 FUN_14062e812 body=166 status=ok
// SIG undefined FUN_14062e812(void)

void FUN_14062e812(longlong param_1)

{
  int iVar1;
  undefined1 auStack_78 [36];
  int local_54;
  longlong local_50;
  int *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x10);
  FUN_14062e8ba(param_1 + 0x58,iVar1);
  local_54 = 0;
  if (0 < iVar1) {
    do {
      local_50 = (longlong)local_54 * 0x10 + *(longlong *)(param_1 + 8);
      local_48 = &local_54;
      FUN_146cebab2(param_1 + 0x58,local_3c,&local_50,0);
      local_54 = local_54 + 1;
    } while (local_54 < iVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14062e8ba FUN_14062e8ba body=107 status=ok
// SIG undefined FUN_14062e8ba(void)

void FUN_14062e8ba(longlong param_1,uint param_2)

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
LAB_14062e909:
      FUN_14062ea76(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1409bd292(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_14062e909;
  FUN_14062e926(param_1);
  FUN_14062ea76(param_1,param_2);
  return;
}



// FUNCTION 14062e926 FUN_14062e926 body=335 status=ok
// SIG undefined FUN_14062e926(void)

void FUN_14062e926(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 14062ea76 FUN_14062ea76 body=514 status=ok
// SIG undefined FUN_14062ea76(void)

void FUN_14062ea76(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_14062eb5a;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_14062eb5a;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_14062eb5a:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14062ec7a FUN_14062ec7a body=160 status=ok
// SIG undefined FUN_14062ec7a(void)

undefined8 * FUN_14062ec7a(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_20 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_14062ed1c(param_1,&local_28);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_14062ed1c(param_1);
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
  }
  *param_1 = &PTR_FUN_149f49bf8;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14062ed1c FUN_14062ed1c body=134 status=ok
// SIG undefined FUN_14062ed1c(void)

void FUN_14062ed1c(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f4b5f0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
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
  param_1[0x15] = *param_2;
  lVar1 = param_2[1];
  param_1[0x16] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14062eda2 FUN_14062eda2 body=212 status=ok
// SIG undefined FUN_14062eda2(void)

void FUN_14062eda2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
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
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14062ee76 FUN_14062ee76 body=320 status=ok
// SIG undefined FUN_14062ee76(void)

void FUN_14062ee76(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14062eedf;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14062eedf:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 14062efb6 FUN_14062efb6 body=365 status=ok
// SIG undefined FUN_14062efb6(void)

void FUN_14062efb6(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = *(longlong **)(param_1 + 0xa8);
  plVar3 = *(longlong **)(param_1 + 0xb0);
  if (plVar3 == (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    (**(code **)(*plVar2 + 0x18))();
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
  FUN_14062f1de(param_1);
  local_48[0] = 0;
  local_48[1] = 0;
  if (*(int *)(param_2 + 0x60) != *(int *)(param_2 + 0x8c)) {
    FUN_140d70cda(param_2 + 0x58,local_48);
  }
  FUN_14062f124(local_48,&DAT_14c992b70,1);
  local_58 = 0;
  uStack_50 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  plVar2 = *(longlong **)(param_1 + 0xb0);
  if (plVar2 == (longlong *)0x0) {
    FUN_14062fde4(param_2,uVar4,local_48,&local_58);
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    FUN_14062fde4(param_2,uVar4,local_48,&local_58);
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_1409bc17a(param_1);
  FUN_14062e812(param_1);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14062f124 FUN_14062f124 body=185 status=ok
// SIG undefined FUN_14062f124(void)

undefined8 FUN_14062f124(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if ((longlong)iVar2 != 0) {
    lVar1 = *param_1;
    iVar4 = 1;
    lVar6 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        if (param_3 != '\x01') {
          return 1;
        }
        FUN_1406ce816(param_1);
        return 1;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return 0;
}



// FUNCTION 14062f1de FUN_14062f1de body=819 status=ok
// SIG undefined FUN_14062f1de(void)

void FUN_14062f1de(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_38;
  undefined2 local_30;
  undefined8 local_28;
  undefined2 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  plVar4 = *(longlong **)(param_1 + 0xb0);
  if (plVar4 == (longlong *)0x0) {
    local_28 = 0;
    local_20 = 1;
    FUN_14062f512(uVar3,DAT_14c992b78,DAT_14c992b70);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_28 = 0;
    local_20 = 1;
    FUN_14062f512(uVar3,DAT_14c992b78,DAT_14c992b70);
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
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  plVar4 = *(longlong **)(param_1 + 0xb0);
  if (plVar4 == (longlong *)0x0) {
    local_38 = 0;
    local_30 = 1;
    FUN_140676448(uVar3,DAT_14c992b80,DAT_14c992b70);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_38 = 0;
    local_30 = 1;
    FUN_140676448(uVar3,DAT_14c992b80,DAT_14c992b70);
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
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  plVar4 = *(longlong **)(param_1 + 0xb0);
  if (plVar4 == (longlong *)0x0) {
    local_48 = 0;
    local_40 = 1;
    FUN_140676448(uVar3,DAT_14c992b88,DAT_14c992b70);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_48 = 0;
    local_40 = 1;
    FUN_140676448(uVar3,DAT_14c992b88,DAT_14c992b70);
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
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  plVar4 = *(longlong **)(param_1 + 0xb0);
  if (plVar4 == (longlong *)0x0) {
    local_58 = 0;
    local_50 = 1;
    FUN_14062f512(uVar3,DAT_14c992b90,DAT_14c992b70);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_58 = 0;
    local_50 = 1;
    FUN_14062f512(uVar3,DAT_14c992b90,DAT_14c992b70);
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
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  plVar4 = *(longlong **)(param_1 + 0xb0);
  if (plVar4 == (longlong *)0x0) {
    local_68 = 0;
    local_60 = 1;
    FUN_14062f558(uVar3,DAT_14c992b98,DAT_14c992b70);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_68 = 0;
    local_60 = 1;
    FUN_14062f558(uVar3,DAT_14c992b98,DAT_14c992b70);
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
  FUN_1409bc17a(param_1);
  FUN_14062e812(param_1);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14062f512 FUN_14062f512 body=70 status=ok
// SIG undefined FUN_14062f512(void)

void FUN_14062f512(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_14062f78e(param_1,param_2,param_3,param_4);
  }
  FUN_14062f59e(param_1,param_2,param_3);
  return;
}



// FUNCTION 14062f558 FUN_14062f558 body=70 status=ok
// SIG undefined FUN_14062f558(void)

void FUN_14062f558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_14062fb18(param_1,param_2,param_3,param_4);
  }
  FUN_14062f696(param_1,param_2,param_3);
  return;
}



// FUNCTION 14062f59e FUN_14062f59e body=248 status=ok
// SIG undefined FUN_14062f59e(void)

void FUN_14062f59e(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) break;
        iVar5 = *(int *)(lVar2 + 0x38);
        lVar2 = 0;
      } while (iVar5 != -1);
      goto LAB_14062f66c;
    }
  }
  lVar2 = 0;
LAB_14062f66c:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 14062f696 FUN_14062f696 body=248 status=ok
// SIG undefined FUN_14062f696(void)

void FUN_14062f696(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) break;
        iVar5 = *(int *)(lVar2 + 0x38);
        lVar2 = 0;
      } while (iVar5 != -1);
      goto LAB_14062f764;
    }
  }
  lVar2 = 0;
LAB_14062f764:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 14062f78e FUN_14062f78e body=573 status=ok
// SIG undefined FUN_14062f78e(void)

void FUN_14062f78e(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 **local_88;
  longlong **local_80;
  longlong *local_60;
  undefined8 *local_58;
  undefined8 ***local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar7 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar8 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar7) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x58);
      do {
        if (*(undefined8 **)(lVar5 + (longlong)iVar8 * 0x14) == param_3) goto LAB_14062f866;
        iVar8 = *(int *)(lVar5 + (longlong)iVar8 * 0x14 + 0xc);
      } while (iVar8 != -1);
    }
  }
  local_88 = &local_58;
  local_80 = &local_60;
  local_60 = (longlong *)((ulonglong)local_60 & 0xffffffff00000000);
  local_58 = param_3;
  FUN_140b20442((longlong *)(param_1 + 0x58),&local_98,&local_88,0);
LAB_14062f866:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c992eb8) && (FUN_144b3d300(&DAT_14c992eb8), DAT_14c992eb8 == -1)) {
    DAT_14c992eb0 = 0;
    _Init_thread_footer(&DAT_14c992eb8);
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar6 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar6 = &DAT_14c992eb0;
    if (cVar3 == '\0') {
      puVar6 = param_4;
    }
  }
  uVar1 = *puVar6;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_LAB_149f4b690;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_14062f9cc(&local_88,&local_60,uVar4,uVar1);
  local_58 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_50 = &local_88;
  FUN_1406cd0ac(param_1 + 8,local_44,&local_58,0);
  FUN_1406cd076(&local_88);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x48))(local_60,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14062f9cc FUN_14062f9cc body=138 status=ok
// SIG undefined FUN_14062f9cc(void)

undefined1 *
FUN_14062f9cc(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 8;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f4b7d0;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 14062fa62 FUN_14062fa62 body=143 status=ok
// SIG undefined FUN_14062fa62(void)

void FUN_14062fa62(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1447a1bd6(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_1468548c8(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_140b12644(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14062faf2 FUN_14062faf2 body=38 status=ok
// SIG undefined FUN_14062faf2(void)

void FUN_14062faf2(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_1408be2c4(param_1 + 0x10);
  return;
}



// FUNCTION 14062fb18 FUN_14062fb18 body=536 status=ok
// SIG undefined FUN_14062fb18(void)

void FUN_14062fb18(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) == param_3)
        goto LAB_14062fbc0;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_14062fbc0:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c992eac) {
    FUN_144b3d300(&DAT_14c992eac);
    if (DAT_14c992eac == -1) {
      DAT_14c992ea4 = 0;
      _Init_thread_footer(&DAT_14c992eac);
    }
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14c992ea4;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_FUN_149f4b600;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_14062fd32(local_88,&local_60,uVar4,uVar1);
  local_58 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_50 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_44,&local_58,0);
  FUN_1406cd076(local_88);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x48))(local_60,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14062fd32 FUN_14062fd32 body=138 status=ok
// SIG undefined FUN_14062fd32(void)

undefined1 *
FUN_14062fd32(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0x10;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f4b7b0;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 14062fdbc FUN_14062fdbc body=39 status=ok
// SIG undefined FUN_14062fdbc(void)

void FUN_14062fdbc(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0x1c) < param_2) {
    FUN_144893a1c(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 14062fde4 FUN_14062fde4 body=690 status=ok
// SIG undefined FUN_14062fde4(void)

void FUN_14062fde4(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = local_78;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    local_a8 = (longlong *)(param_1 + 8);
    local_a0 = param_1 + 0x18;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = local_a0;
    if (*(int *)(param_1 + 0x30) == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar12 = *(int *)(param_1 + 0x30);
    }
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar3 = local_78;
    local_90 = local_a8;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    if ((local_78._4_4_ != iVar12) || (uStack_60 != local_a0)) {
      local_98 = param_2 + 0x90;
      iVar4 = local_78._4_4_;
      local_78 = uVar3;
      do {
        plVar1 = (longlong *)(*local_90 + (longlong)iVar4 * 0x40);
        lVar9 = *(longlong *)(*local_90 + 8 + (longlong)iVar4 * 0x40);
        if (0 < (longlong)(int)param_4[1]) {
          plVar10 = (longlong *)*param_4;
          plVar7 = plVar10 + (longlong)(int)param_4[1] * 2;
          do {
            if ((*plVar10 == *plVar1) && (plVar10[1] == lVar9)) goto LAB_14062ffc2;
            plVar10 = plVar10 + 2;
          } while (plVar10 != plVar7);
        }
        if ((longlong)(int)param_3[1] != 0) {
          lVar11 = 0;
          do {
            if (*(longlong *)(*param_3 + lVar11) == lVar9) goto LAB_14062ffc2;
            lVar11 = lVar11 + 8;
          } while ((longlong)(int)param_3[1] * 8 != lVar11);
        }
        if (*(int *)(param_2 + 0x60) != *(int *)(param_2 + 0x8c)) {
          uVar2 = (uint)((ulonglong)lVar9 >> 0x10);
          uVar8 = (uint)lVar9 & 0xffff;
          lVar11 = *(longlong *)(param_2 + 0x98);
          if (*(longlong *)(param_2 + 0x98) == 0) {
            lVar11 = local_98;
          }
          iVar4 = *(int *)(lVar11 + (ulonglong)
                                    (*(int *)(param_2 + 0xa0) - 1U &
                                    (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar8)
                                    + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(longlong *)(*(longlong *)(param_2 + 0x58) + (longlong)iVar4 * 0x14) == lVar9)
              goto LAB_14062ff6e;
              iVar4 = *(int *)(*(longlong *)(param_2 + 0x58) + (longlong)iVar4 * 0x14 + 0xc);
            } while (iVar4 != -1);
          }
        }
        FUN_140b203e2(param_2);
        lVar9 = plVar1[1];
LAB_14062ff6e:
        iVar4 = FUN_1401f66f6(param_1,lVar9);
        iVar5 = FUN_1401f66f6(param_2,plVar1[1]);
        if (iVar4 != iVar5) {
          FUN_1401f66f6(param_2,plVar1[1]);
          lVar9 = plVar1[1];
          uVar6 = FUN_1401f66f6(param_1,lVar9);
          FUN_1409bcbd8(param_2,uVar6,lVar9);
        }
        FUN_1408a6bb2(param_2,param_1,*plVar1,plVar1[1]);
LAB_14062ffc2:
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar4 = local_78._4_4_;
        uVar3 = local_78;
      } while (local_90 != local_a8 ||
               (CONCAT44(uStack_7c,uStack_80) != local_a0 || local_78._4_4_ != iVar12));
    }
  }
  local_78 = uVar3;
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140630098 FUN_140630098 body=1170 status=ok
// SIG undefined FUN_140630098(void)

undefined8 *
FUN_140630098(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined1 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149f58340;
  puVar1 = param_1 + 4;
  FUN_140630872(puVar1);
  param_1[4] = &PTR_FUN_149f51a28;
  param_1[0x18] = &PTR__purecall_149f48510;
  param_1[0x19] = 0;
  param_1[0x19] = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined8 *)(param_2 + 0xb0) = 0;
  param_1[0x18] = &PTR_LAB_149f51a40;
  FUN_14062dc0c(puVar1,param_1 + 0x18);
  param_1[0x1b] = puVar1;
  puVar2 = param_1 + 0x1e;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_14063052a(puVar2,param_3);
  param_1[0x32] = puVar2;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x37] = &PTR_LAB_149f57380;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3a] = &PTR_LAB_149f51ec0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3d] = &PTR_LAB_149f57440;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x40] = &PTR_LAB_149f57440;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x49] = &PTR_LAB_149f4c0e0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4c] = &PTR_LAB_149f573c0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x4f] = &PTR_LAB_149f57400;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x52] = &PTR_LAB_149f51bd0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x55] = &PTR_LAB_149f51bd0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x58] = &PTR_LAB_149f51bd0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5b] = &PTR_LAB_149f51bd0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x5e] = &PTR_LAB_149f51ec0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x61] = &PTR_LAB_149f51bd0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = param_1 + 100;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x6b] = param_1 + 0x69;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x70] = param_1 + 0x6e;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x75] = param_1 + 0x73;
  param_1[0x7a] = 0;
  param_1[0x80] = 0;
  param_1[0x82] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x88) = param_5;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0xc4752a8f;
  *(undefined4 *)(param_1 + 0x8a) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x454) = param_8;
  *(undefined4 *)(param_1 + 0x8b) = param_9;
  *(undefined4 *)((longlong)param_1 + 0x45c) = param_10;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x464) = param_11;
  *(undefined1 *)((longlong)param_1 + 0x465) = param_12;
  FUN_14062dc0c(param_1,param_1 + 0x49);
  FUN_14062dc0c(param_1,param_1 + 0x4c);
  FUN_14062dc0c(param_1,param_1 + 0x4f);
  FUN_14062dc0c(param_1,param_1 + 0x52);
  FUN_14062dc0c(param_1,param_1 + 0x55);
  FUN_14062dc0c(param_1,param_1 + 0x58);
  FUN_14062dc0c(param_1,param_1 + 0x5b);
  FUN_14062dc0c(param_1,param_1 + 0x5e);
  FUN_140630782(param_1,1);
  FUN_14062dc0c(puVar1,param_1 + 0x40);
  if (*(char *)((longlong)param_1 + 0x465) == '\x01') {
    FUN_14062dc0c(puVar1,param_1 + 0x61);
  }
  FUN_14062dc0c(puVar2,param_1 + 0x37);
  FUN_14062dc0c(puVar2,param_1 + 0x3a);
  FUN_14062dc0c(puVar2,param_1 + 0x3d);
  return param_1;
}



// FUNCTION 14063052a FUN_14063052a body=217 status=ok
// SIG undefined FUN_14063052a(void)

undefined8 * FUN_14063052a(undefined8 *param_1,longlong param_2)

{
  FUN_140630604();
  *param_1 = &PTR_FUN_149f51a80;
  param_1[0xe] = &PTR__purecall_149f48510;
  param_1[0xf] = 0;
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined8 *)(param_2 + 0x80) = 0;
  param_1[0xe] = &PTR_LAB_149f4c0e0;
  param_1[0x11] = &PTR__purecall_149f48510;
  param_1[0x12] = 0;
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined8 *)(param_2 + 0x98) = 0;
  param_1[0x11] = &PTR_LAB_149f4c0e0;
  FUN_14062dc0c(param_1,param_1 + 0xe);
  FUN_14062dc0c(param_1,param_1 + 0x11);
  return param_1;
}



// FUNCTION 140630604 FUN_140630604 body=173 status=ok
// SIG undefined FUN_140630604(void)

undefined8 * FUN_140630604(undefined8 *param_1,longlong param_2)

{
  FUN_1406306b2();
  *param_1 = &PTR_FUN_149f51c10;
  param_1[8] = &PTR__purecall_149f48510;
  param_1[9] = 0;
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined8 *)(param_2 + 0x50) = 0;
  param_1[8] = &PTR_LAB_149f51d80;
  param_1[0xb] = &PTR__purecall_149f48510;
  param_1[0xc] = 0;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined8 *)(param_2 + 0x68) = 0;
  param_1[0xb] = &PTR_LAB_149f51dc0;
  FUN_14062dc0c(param_1,param_1 + 8);
  FUN_14062dc0c(param_1,param_1 + 0xb);
  return param_1;
}



// FUNCTION 1406306b2 FUN_1406306b2 body=207 status=ok
// SIG undefined FUN_1406306b2(void)

undefined8 * FUN_1406306b2(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_149f4c0d8;
  param_1[4] = &PTR__purecall_149f48510;
  param_1[5] = 0;
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(param_2 + 0x30) = 0;
  param_1[4] = &PTR_LAB_149f4c0e0;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 0x38);
  if (*(int *)(param_2 + 0x18) != 0) {
    iVar4 = *(int *)(param_2 + 0x18) + *(int *)(param_1 + 3);
    *(int *)(param_1 + 3) = iVar4;
    iVar1 = *(int *)(param_1 + 2);
    if ((longlong)iVar1 != 0) {
      lVar2 = param_1[1];
      lVar5 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar5);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 8))(plVar3,iVar4);
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  FUN_14062dc0c(param_1,param_1 + 4);
  *(undefined4 *)(param_2 + 0x18) = 0;
  return param_1;
}



// FUNCTION 140630782 FUN_140630782 body=240 status=ok
// SIG undefined FUN_140630782(void)

void FUN_140630782(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    uVar4 = *(uint *)(param_1 + 0x18);
    uVar5 = param_2 + uVar4;
    *(uint *)(param_1 + 0x18) = uVar5;
    iVar1 = *(int *)(param_1 + 0x10);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 8);
      lVar6 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar6);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 8))(plVar3,uVar5);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
      uVar5 = *(uint *)(param_1 + 0x18);
    }
    if (uVar4 < uVar5) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x250);
        lVar6 = (longlong)(int)uVar4;
        *(undefined4 *)(lVar2 + 8 + lVar6 * 0xc) = *(undefined4 *)(param_1 + 0x44c);
        *(undefined8 *)(lVar2 + lVar6 * 0xc) = *(undefined8 *)(param_1 + 0x444);
        *(undefined4 *)(*(longlong *)(param_1 + 0x298) + lVar6 * 4) =
             *(undefined4 *)(param_1 + 0x450);
        *(undefined4 *)(*(longlong *)(param_1 + 0x2b0) + lVar6 * 4) =
             *(undefined4 *)(param_1 + 0x454);
        *(undefined4 *)(*(longlong *)(param_1 + 0x2c8) + lVar6 * 4) =
             *(undefined4 *)(param_1 + 0x458);
        *(undefined4 *)(*(longlong *)(param_1 + 0x2e0) + lVar6 * 4) =
             *(undefined4 *)(param_1 + 0x45c);
        *(undefined1 *)(*(longlong *)(param_1 + 0x2f8) + lVar6) = 0;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0x18));
    }
  }
  return;
}



// FUNCTION 140630872 FUN_140630872 body=350 status=ok
// SIG undefined FUN_140630872(void)

undefined8 * FUN_140630872(undefined8 *param_1,longlong param_2)

{
  FUN_1406306b2();
  *param_1 = &PTR_FUN_149f51a30;
  param_1[8] = &PTR__purecall_149f48510;
  param_1[9] = 0;
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined8 *)(param_2 + 0x50) = 0;
  param_1[8] = &PTR_LAB_149f4c0e0;
  param_1[0xb] = &PTR__purecall_149f48510;
  param_1[0xc] = 0;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined8 *)(param_2 + 0x68) = 0;
  param_1[0xb] = &PTR_LAB_149f4c0e0;
  param_1[0xe] = &PTR__purecall_149f48510;
  param_1[0xf] = 0;
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined8 *)(param_2 + 0x80) = 0;
  param_1[0xe] = &PTR_LAB_149f51bd0;
  param_1[0x11] = &PTR__purecall_149f48510;
  param_1[0x12] = 0;
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined8 *)(param_2 + 0x98) = 0;
  param_1[0x11] = &PTR_LAB_149f51bd0;
  FUN_14062dc0c(param_1,param_1 + 8);
  FUN_14062dc0c(param_1,param_1 + 0xb);
  FUN_14062dc0c(param_1,param_1 + 0xe);
  FUN_14062dc0c(param_1,param_1 + 0x11);
  return param_1;
}



// FUNCTION 1406309d4 FUN_1406309d4 body=18 status=ok
// SIG undefined FUN_1406309d4(void)

undefined8 FUN_1406309d4(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14477bcf0();
  return *(undefined8 *)(lVar1 + 0x58);
}



// FUNCTION 1406309e6 FUN_1406309e6 body=353 status=ok
// SIG undefined FUN_1406309e6(void)

void FUN_1406309e6(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140630a6b;
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
LAB_140630a6b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 140630b48 FUN_140630b48 body=229 status=ok
// SIG undefined FUN_140630b48(void)

void FUN_140630b48(undefined8 param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 in_stack_00000030;
  longlong in_stack_00000038;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  iVar1 = *(int *)(param_2 + 0xa8);
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    lVar4 = 0;
    lVar3 = 0;
    do {
      if (*(char *)(*(longlong *)(param_2 + 0xa0) + 8 + lVar4) == '\x01') {
        local_58 = param_2;
        FUN_140630c2e(param_1,*(longlong *)(param_2 + 0xa0) + lVar4,&local_48,in_stack_00000030);
        iVar1 = *(int *)(param_2 + 0xa8);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x130;
    } while (lVar3 < iVar1);
    uVar2 = uStack_40 & 0xffffffff;
  }
  FUN_1405d7ab2(local_48,uVar2);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(in_stack_00000038 + 4) == '\x01') {
    *(undefined1 *)(in_stack_00000038 + 4) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140630c2e FUN_140630c2e body=516 status=ok
// SIG undefined FUN_140630c2e(void)

void FUN_140630c2e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
                  longlong param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  ulonglong uStack_70;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140630e34(&local_68,param_1);
  if (local_60 != (longlong *)0x0) {
    iVar5 = (int)local_60[1];
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_60[1];
      bVar9 = iVar5 == iVar3;
      if (bVar9) {
        *(int *)(local_60 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
      plVar7 = local_60;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_68 != 0) {
        puVar8 = &DAT_14c9485f0;
        if (*(undefined4 **)(param_5 + 8) != (undefined4 *)0x0) {
          puVar8 = *(undefined4 **)(param_5 + 8);
        }
        local_80 = param_3;
        if (DAT_14c947fe0 == 0) {
          lVar6 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar6);
          DAT_14c947fe0 = lVar6;
        }
        FUN_140045924(DAT_14c947fe0,&local_68,puVar8,1);
        local_60 = (longlong *)*param_2;
        (**(code **)(*param_4 + 0x60))(param_4,&local_78);
        iVar5 = (int)uStack_70 + -1;
        if ((int)uStack_70 == 0) {
          iVar5 = 0;
        }
        FUN_1446f82e2(&local_50,iVar5,local_78,1);
        local_58 = local_50;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        cVar4 = FUN_140631038(local_68,&local_68);
        if (cVar4 == '\0') {
          local_78 = 0;
          uStack_70 = 0;
          local_88 = &local_78;
          FUN_1406318e5(param_1,param_2,local_80,param_4);
          FUN_1406312aa(local_68,&local_68,&local_78);
          FUN_1409c185c(local_78,uStack_70 & 0xffffffff);
          if (local_78 != 0) {
            FUN_1400020a8();
          }
        }
      }
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140630e34 FUN_140630e34 body=104 status=ok
// SIG undefined FUN_140630e34(void)

undefined8 * FUN_140630e34(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x180))(param_2);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
      lVar1 = FUN_140630e9c();
      if (lVar1 != 0) {
        *param_1 = *(undefined8 *)(lVar1 + 0x40);
        lVar1 = *(longlong *)(lVar1 + 0x48);
        goto LAB_140630e73;
      }
    }
  }
  *param_1 = DAT_14cb70600;
  lVar1 = DAT_14cb70608;
LAB_140630e73:
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 140630e9c FUN_140630e9c body=105 status=ok
// SIG undefined FUN_140630e9c(void)

void FUN_140630e9c(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140630f52();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_140630f06(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140630f06 FUN_140630f06 body=76 status=ok
// SIG undefined FUN_140630f06(void)

void FUN_140630f06(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140630f52();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140630f43;
    }
  }
  lVar2 = 0;
LAB_140630f43:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140630f52 FUN_140630f52 body=228 status=ok
// SIG undefined FUN_140630f52(void)

longlong FUN_140630f52(void)

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
  if (DAT_14cb580d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14107a1fc;
    local_38 = &LAB_14864bd1f;
    local_40 = FUN_1464c02ac;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxActivityAreaTable_GameInstanceSubSystem",&DAT_14cb580d0,
                  &DAT_14864bd1e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb580d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140631038 FUN_140631038 body=80 status=ok
// SIG undefined FUN_140631038(void)

ulonglong FUN_140631038(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x58));
  uVar1 = FUN_1406310f5(param_2);
  iVar2 = FUN_140631088(param_1 + 0x288,uVar1,param_2);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x58));
  return CONCAT71((int7)((ulonglong)param_2 >> 8),iVar2 != -1) & 0xffffffff;
}



// FUNCTION 140631088 FUN_140631088 body=109 status=ok
// SIG undefined FUN_140631088(void)

int FUN_140631088(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar4 = (longlong)iVar1 * 0x30;
        if (((*(longlong *)(lVar2 + lVar4) == *param_3) &&
            (*(longlong *)(lVar2 + lVar4 + 8) == param_3[1])) &&
           (*(longlong *)(lVar2 + lVar4 + 0x10) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x28 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1406310f5 FUN_1406310f5 body=163 status=ok
// SIG undefined FUN_1406310f5(void)

uint FUN_1406310f5(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar8 = (uint)uVar1 & 0xffff;
  uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar9 = (uint)uVar2 & 0xffff;
  uVar3 = param_1[2];
  uVar6 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar7 = (uint)uVar3 & 0xffff;
  return ((uint)uVar3 << 0x10 | uVar7) + (int)((ulonglong)uVar3 >> 0x20) +
         (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar7 >> 4) ^
         ((uint)uVar2 << 0x10 | uVar9) + (int)((ulonglong)uVar2 >> 0x20) +
         (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4) ^
         ((uint)uVar1 << 0x10 | uVar8) + (int)((ulonglong)uVar1 >> 0x20) +
         (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4);
}



// FUNCTION 140631198 FUN_140631198 body=273 status=ok
// SIG undefined FUN_140631198(void)

undefined8 * FUN_140631198(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = *(int *)(param_1 + 0x18);
  if (0 < iVar2) {
    lVar4 = 0;
    uVar3 = 0;
    do {
      uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + lVar4 * 8);
      if (uVar5 != 0) {
        lVar6 = uVar3 << 3;
        do {
          if ((uVar5 & 1) != 0) {
            if (1 < *(int *)(param_2 + 1)) {
              FUN_1400020e8(param_2,&DAT_149e19f34,2);
            }
            FUN_1400021e4(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x50) + lVar6),
                          &local_58);
            iVar2 = local_50 + -1;
            if (local_50 == 0) {
              iVar2 = 0;
            }
            FUN_1400020e8(param_2,local_58,iVar2);
            if (local_58 != 0) {
              FUN_1400020a8();
            }
          }
          lVar6 = lVar6 + 8;
          bVar1 = 1 < uVar5;
          uVar5 = uVar5 >> 1;
        } while (bVar1);
        iVar2 = *(int *)(param_1 + 0x18);
      }
      lVar4 = lVar4 + 1;
      uVar3 = (ulonglong)((int)uVar3 + 0x40);
    } while (lVar4 < iVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406312aa FUN_1406312aa body=122 status=ok
// SIG undefined FUN_1406312aa(void)

void FUN_1406312aa(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x58));
  local_40 = param_2;
  local_38 = param_3;
  FUN_140631326(param_1 + 0x288,local_2c,&local_40,0);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x58));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140631326 FUN_140631326 body=952 status=ok
// SIG undefined FUN_140631326(void)

int * FUN_140631326(longlong *param_1,int *param_2,longlong *param_3,char *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  byte bVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  longlong *plVar24;
  longlong *plVar25;
  int iVar26;
  undefined8 *puVar27;
  longlong lVar28;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar23 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar23 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar23) {
      FUN_140044672(param_1,iVar23);
    }
    iVar17 = (int)param_1[5];
    if (iVar17 == 0) {
      iVar15 = -1;
    }
    else {
      iVar15 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar15 = iVar17 + -1;
      }
      iVar15 = iVar15 >> 5;
    }
    plVar24 = param_1 + 2;
    iVar21 = iVar17 + 1;
    iVar26 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar26 = iVar17;
    }
    if (iVar26 >> 5 == iVar15) {
      *(int *)(param_1 + 5) = iVar21;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar17) {
        if (iVar17 + 0x20U < 0xa0) {
          iVar21 = 0x80;
          iVar15 = iVar17;
        }
        else {
          uVar16 = iVar17 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar18 = 4;
            if (4 < uVar16) {
              uVar18 = uVar16;
            }
          }
          else {
            uVar18 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
          }
          uVar22 = FUN_144a3809e(uVar18 << 2,0);
          iVar15 = (int)(uVar22 >> 2);
          iVar21 = -0x20;
          if ((int)uVar16 <= iVar15) {
            iVar21 = iVar15 << 5;
          }
          iVar15 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar21;
        FUN_1446efbd8(plVar24,iVar15);
        iVar21 = (int)param_1[5] + 1;
      }
      iVar15 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar15 = iVar21;
      }
      *(int *)(param_1 + 5) = iVar21;
      if (iVar21 % 0x20 != 0) {
        plVar25 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar25 = plVar24;
        }
        bVar20 = -(char)(iVar21 % 0x20);
        *(uint *)((longlong)plVar25 + (longlong)(iVar15 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar25 + (longlong)(iVar15 >> 5) * 4) << (bVar20 & 0x1f)) >>
             (bVar20 & 0x1f);
      }
    }
    lVar19 = (longlong)iVar23;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar24 = (longlong *)param_1[4];
    }
    bVar20 = (byte)iVar17 & 0x1f;
    puVar3 = (uint *)((longlong)plVar24 + (longlong)(iVar26 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar20 | 0xfffffffeU >> 0x20 - bVar20);
  }
  else {
    iVar23 = (int)param_1[6];
    lVar19 = (longlong)iVar23;
    iVar17 = *(int *)(*param_1 + 4 + lVar19 * 0x30);
    *(int *)(param_1 + 6) = iVar17;
    iVar15 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar15;
    if (iVar15 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar17 * 0x30) = 0xffffffff;
    }
  }
  plVar24 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar24 = (longlong *)param_1[4];
  }
  iVar17 = iVar23 + 0x1f;
  if (-1 < iVar23) {
    iVar17 = iVar23;
  }
  puVar3 = (uint *)((longlong)plVar24 + (longlong)(iVar17 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar23 & 0x1f);
  lVar28 = *param_1;
  lVar19 = lVar19 * 0x30;
  puVar1 = (undefined4 *)(lVar28 + lVar19);
  puVar4 = (undefined4 *)*param_3;
  puVar27 = (undefined8 *)param_3[1];
  *(undefined8 *)(lVar28 + 0x10 + lVar19) = *(undefined8 *)(puVar4 + 4);
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  puVar2 = (undefined4 *)(lVar28 + lVar19);
  *puVar2 = *puVar4;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  *(undefined8 *)(lVar28 + 0x18 + lVar19) = 0;
  iVar17 = *(int *)(puVar27 + 1);
  uVar5 = *puVar27;
  *(int *)(lVar28 + 0x20 + lVar19) = iVar17;
  if (iVar17 == 0) {
    puVar1[9] = 0;
  }
  else {
    puVar27 = (undefined8 *)(lVar28 + lVar19 + 0x18);
    FUN_1406316de(puVar27,iVar17,0);
    FUN_1406317c7(*puVar27,uVar5,iVar17);
  }
  puVar1[10] = 0xffffffff;
  uVar16 = FUN_1406310f5(puVar1);
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar17 = FUN_140631088(param_1,uVar16,puVar1);
    if (iVar17 != -1) {
      lVar19 = *param_1;
      lVar28 = (longlong)iVar17 * 0x30;
      puVar2 = (undefined4 *)(lVar19 + lVar28);
      FUN_1409c185c(*(undefined8 *)(lVar19 + 0x18 + lVar28),*(undefined4 *)(lVar19 + 0x20 + lVar28))
      ;
      if (*(longlong *)(lVar19 + 0x18 + lVar28) != 0) {
        FUN_1400020a8();
      }
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      uVar10 = puVar1[4];
      uVar11 = puVar1[5];
      uVar12 = puVar1[6];
      uVar13 = puVar1[7];
      *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(puVar1 + 8);
      puVar2[4] = uVar10;
      puVar2[5] = uVar11;
      puVar2[6] = uVar12;
      puVar2[7] = uVar13;
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      FUN_1487b5e9a(param_1,iVar23);
      cVar14 = '\x01';
      goto LAB_14063148b;
    }
  }
  cVar14 = '\0';
  iVar17 = iVar23;
LAB_14063148b:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar14;
  }
  if (cVar14 == '\0') {
    uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar18 < 4) {
      iVar23 = 1;
    }
    else {
      uVar22 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
      lVar19 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar23 = 1 << ((byte)lVar19 & 0x1f);
    }
    if (((int)uVar18 < 1) || (iVar23 <= (int)param_1[9])) {
      uVar16 = (int)param_1[9] - 1U & uVar16;
      puVar1[0xb] = uVar16;
      plVar24 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar24 = param_1 + 7;
      }
      puVar1[10] = *(undefined4 *)
                    ((longlong)plVar24 +
                    ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
      plVar24 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar24 = param_1 + 7;
      }
      *(int *)((longlong)plVar24 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
           iVar17;
    }
    else {
      *(int *)(param_1 + 9) = iVar23;
      FUN_140631d80(param_1);
    }
  }
  *param_2 = iVar17;
  return param_2;
}



// FUNCTION 1406316de FUN_1406316de body=233 status=ok
// SIG undefined FUN_1406316de(void)

void FUN_1406316de(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0xa0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0xa0);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xa0,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1406317c7 FUN_1406317c7 body=286 status=ok
// SIG undefined FUN_1406317c7(void)

void FUN_1406317c7(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  
  if (param_3 != 0) {
    puVar9 = (undefined8 *)(param_1 + 0x90);
    do {
      *(undefined2 *)(puVar9 + -0x12) = 0;
      *(undefined8 *)((longlong)puVar9 + -0x8c) = 0;
      puVar9[-0x10] = 0;
      puVar9[-0xf] = 0;
      *(undefined4 *)(puVar9 + -0xe) = 0;
      puVar9[-0xd] = 0;
      puVar9[-0xc] = 0;
      *(undefined4 *)(puVar9 + -0x11) = *(undefined4 *)(param_2 + 1);
      puVar9[-0x12] = *param_2;
      FUN_1447715ec(puVar9 + -0x10,param_2 + 2);
      *(undefined2 *)(puVar9 + -0xb) = 0;
      *(undefined8 *)((longlong)puVar9 + -0x54) = 0;
      puVar9[-9] = 0;
      puVar9[-8] = 0;
      *(undefined4 *)(puVar9 + -7) = 0;
      puVar9[-6] = 0;
      puVar9[-5] = 0;
      puVar9[-0xb] = param_2[7];
      *(undefined4 *)(puVar9 + -10) = *(undefined4 *)(param_2 + 8);
      FUN_1447715ec(puVar9 + -9,param_2 + 9);
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x74);
      uVar3 = *(undefined4 *)(param_2 + 0xf);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x7c);
      uVar5 = *(undefined4 *)(param_2 + 0x10);
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x84);
      uVar7 = *(undefined4 *)(param_2 + 0x11);
      uVar8 = *(undefined4 *)((longlong)param_2 + 0x8c);
      *(undefined4 *)(puVar9 + -4) = *(undefined4 *)(param_2 + 0xe);
      *(undefined4 *)((longlong)puVar9 + -0x1c) = uVar2;
      *(undefined4 *)(puVar9 + -3) = uVar3;
      *(undefined4 *)((longlong)puVar9 + -0x14) = uVar4;
      *(undefined4 *)(puVar9 + -2) = uVar5;
      *(undefined4 *)((longlong)puVar9 + -0xc) = uVar6;
      *(undefined4 *)(puVar9 + -1) = uVar7;
      *(undefined4 *)((longlong)puVar9 + -4) = uVar8;
      *puVar9 = 0;
      iVar1 = *(int *)(param_2 + 0x13);
      _Src = (void *)param_2[0x12];
      *(int *)(puVar9 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      }
      else {
        FUN_144a06ca8(puVar9,iVar1,0);
        memcpy((void *)*puVar9,_Src,(longlong)iVar1 << 2);
      }
      puVar9 = puVar9 + 0x14;
      param_2 = param_2 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1406318e5 FUN_1406318e5 body=1177 status=ok
// SIG undefined FUN_1406318e5(void)

void FUN_1406318e5(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined8 local_e0;
  longlong lStack_d8;
  ulonglong local_d0;
  undefined2 *local_c8;
  undefined8 local_c0;
  longlong lStack_b8;
  ulonglong local_b0;
  longlong lStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined5 local_70;
  undefined3 uStack_6b;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = &DAT_14a171d50;
  local_e0 = 0;
  lStack_d8 = 0;
  local_d0 = 0;
  local_c8 = &DAT_14a171d50;
  local_60 = 0;
  local_c0 = 0;
  lStack_b8 = 0;
  local_b0 = 0;
  lStack_a8 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  local_90 = 0;
  uStack_88._0_4_ = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_70 = 0;
  uStack_6b = 0;
  local_68 = 0;
  local_64 = 0;
  iVar5 = 0;
  uVar3 = (uint)uStack_88;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    uStack_88 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar5 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar10 + 0x10);
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(lVar10 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      uVar3 = (uint)uStack_88;
      if (bVar12) {
        iVar5 = iVar9;
      }
    }
  }
  uStack_88._0_4_ = uVar3;
  uStack_88 = CONCAT44(iVar5,(uint)uStack_88);
  (**(code **)(local_c8 + 0x10))(&local_c8,0);
  local_c0 = param_2[10];
  FUN_1406022fe(&lStack_b8,param_2 + 0xb);
  (**(code **)(local_e8 + 0x10))(&local_e8,0);
  local_e0 = param_2[6];
  FUN_1406022fe(&lStack_d8,param_2 + 7);
  local_f0 = param_2[0x23];
  FUN_1401533ba(&local_58,&local_f0,1);
  local_70 = (undefined5)local_58;
  uStack_6b = (undefined3)((ulonglong)local_58 >> 0x28);
  local_68 = local_50;
  local_64 = *(int *)(param_2 + 0x24) - 1U < 0xfffffffe && param_2[0x23] != 0;
  FUN_1405dc634(&local_e8,param_4);
  iVar5 = *(int *)(param_2 + 4);
  if (iVar5 < 0) {
LAB_140631cff:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (local_a0._4_4_ < iVar5) {
    FUN_1407ed6d4(&lStack_a8);
    iVar5 = *(int *)(param_2 + 4);
    if (iVar5 < 0) goto LAB_140631cff;
  }
  if (local_90._4_4_ < iVar5) {
    FUN_1407ed6d4(&lStack_98);
  }
  FUN_1410d4484(&local_80,param_3);
  local_60 = *param_2;
  if ((longlong)*(int *)(param_2 + 4) != 0) {
    lVar11 = (longlong)*(int *)(param_2 + 4) * 0x98;
    lVar10 = param_2[3] + 0x48;
    do {
      uVar6 = FUN_1406e3802(&lStack_a8);
      FUN_1405dc634(uVar6,lVar10 + -0x20);
      uVar6 = FUN_1406e3802(&lStack_98);
      FUN_1405dc634(uVar6,lVar10);
      lVar10 = lVar10 + 0x98;
      lVar11 = lVar11 + -0x98;
    } while (lVar11 != 0);
  }
  if (uStack_88._4_4_ != 0) {
    uVar6 = 0;
    if (((int)(uint)uStack_88 < 0) || (DAT_14c9647dc <= (int)(uint)uStack_88)) goto LAB_140631b59;
    puVar7 = (undefined8 *)
             ((ulonglong)(((uint)uStack_88 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)uStack_88 >> 0x10) * 8));
    if ((puVar7 != (undefined8 *)0x0) &&
       ((*(int *)(puVar7 + 2) == uStack_88._4_4_ && ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))) {
      uVar6 = *puVar7;
      goto LAB_140631b59;
    }
  }
  uVar6 = 0;
LAB_140631b59:
  FUN_140630e34(&local_58,uVar6);
  plVar8 = (longlong *)CONCAT44(uStack_4c,local_50);
  if (plVar8 != (longlong *)0x0) {
    iVar5 = (int)plVar8[1];
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar9 = (int)plVar8[1];
      bVar12 = iVar5 == iVar9;
      if (bVar12) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar9 = iVar5;
      }
      iVar5 = iVar9;
      UNLOCK();
    } while (!bVar12);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_4c,local_50) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_4c,local_50) + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      if (local_58 != 0) {
        FUN_143c8ea46(local_58,&local_e8,param_5);
      }
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  FUN_1405d7ab2(local_80,uStack_78);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  FUN_140ad223a(lStack_98,local_90 & 0xffffffff);
  if (lStack_98 != 0) {
    FUN_1400020a8();
  }
  FUN_140ad223a(lStack_a8,local_a0 & 0xffffffff);
  if (lStack_a8 != 0) {
    FUN_1400020a8();
  }
  local_c8 = &DAT_14a171d50;
  uVar4 = local_b0 >> 0x20;
  local_b0 = local_b0 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    FUN_140115c12(&lStack_b8,0);
  }
  local_c0 = 0;
  if (lStack_b8 != 0) {
    FUN_1400020a8();
  }
  local_e8 = &DAT_14a171d50;
  uVar4 = local_d0 >> 0x20;
  local_d0 = local_d0 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    FUN_140115c12(&lStack_d8,0);
  }
  local_e0 = 0;
  if (lStack_d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140631d80 FUN_140631d80 body=573 status=ok
// SIG undefined FUN_140631d80(void)

void FUN_140631d80(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar11 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar11,4);
    if (0 < (int)uVar11) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar11 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_70 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar12 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar12 = local_68 >> 0x20;
    }
    plVar1 = local_60;
    iVar13 = (int)local_68;
    uVar11 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar5 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar10 = *param_1;
        lVar9 = (longlong)iVar7 * 0x30;
        local_74 = iVar5;
        iVar5 = FUN_1406310f5(lVar9 + lVar10);
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar10 + 0x2c + lVar9) = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(undefined4 *)(lVar10 + 0x28 + lVar9) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
        uVar11 = ~(uint)uVar12 & uVar11;
        plVar8 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        iVar2 = (int)plVar1[3];
        lVar10 = (longlong)iVar13;
        uVar4 = *(uint *)((longlong)plVar8 + lVar10 * 4) & uVar11;
        iVar5 = local_74;
        if (uVar4 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar13) {
            iVar3 = iVar13;
          }
          if (iVar7 <= iVar13) break;
          lVar9 = 0;
          while( true ) {
            iVar5 = iVar5 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar10 * 4 + 4);
            if (uVar4 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar3 - lVar10 == lVar9) goto LAB_140631f80;
          }
          iVar13 = iVar13 + (int)lVar9 + 1;
          uVar11 = 0xffffffff;
        }
        uVar12 = (ulonglong)(-uVar4 & uVar4);
        uVar6 = uVar12 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar7 = (iVar5 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar2);
    }
  }
LAB_140631f80:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140631fbe FUN_140631fbe body=1296 status=ok
// SIG undefined FUN_140631fbe(void)

void FUN_140631fbe(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  uint *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  if ((longlong)*(int *)(param_1 + 0x1e0) != 0) {
    plVar12 = *(longlong **)(param_1 + 0x1d8);
    lVar15 = (longlong)*(int *)(param_1 + 0x1e0) << 4;
    do {
      if (*(code **)(*param_2 + 0x10) == (code *)&LAB_1448810c0) {
        if ((char)param_2[2] == '\0') {
          lVar16 = *plVar12;
          uVar13 = *(uint *)(param_2 + 0x9b0);
          iVar9 = uVar13 + 1;
          *(int *)(param_2 + 0x9b0) = iVar9;
          param_2[(ulonglong)uVar13 + 0x9b1] = lVar16;
          if (iVar9 == 0x20) {
            FUN_1447111de(param_2 + 0x938);
          }
        }
        else {
          uVar13 = *(uint *)(param_2 + 0x88);
          iVar9 = uVar13 + 1;
          *(int *)(param_2 + 0x88) = iVar9;
          param_2[(ulonglong)uVar13 + 0x89] = (longlong)plVar12;
          if (iVar9 == 0x20) {
            FUN_144710aee(param_2 + 0x10);
          }
        }
      }
      else {
        (**(code **)(*param_2 + 0x10))(param_2,plVar12);
      }
      plVar12 = plVar12 + 2;
      lVar15 = lVar15 + -0x10;
    } while (lVar15 != 0);
  }
  iVar9 = *(int *)(param_1 + 0x150);
  if (iVar9 == 0) {
    uVar18 = 1;
    uVar17 = 0;
    iVar14 = 0;
    iVar6 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x148);
    if (*(uint **)(param_1 + 0x148) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x138);
    }
    uVar13 = *puVar4;
    if (uVar13 == 0) {
      iVar14 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar14 = iVar9 + -1;
      }
      uVar17 = 0;
      uVar10 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar10 = uVar17;
      }
      iVar14 = 0;
      do {
        if (uVar10 == uVar17) goto LAB_14063219a;
        iVar14 = iVar14 + 0x20;
        uVar13 = puVar4[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar17 = 0;
      iVar14 = 0;
    }
    uVar18 = (ulonglong)(-uVar13 & uVar13);
    uVar10 = uVar18 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar6 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar9 <= iVar6) {
      iVar6 = iVar9;
    }
  }
  if (iVar6 != iVar9) {
    uVar13 = 0xffffffff;
    do {
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar6 * 0x18 + 8);
      if (*(code **)(*param_2 + 0x10) == (code *)&LAB_1448810c0) {
        if ((char)param_2[2] == '\0') {
          lVar15 = *plVar12;
          uVar11 = *(uint *)(param_2 + 0x9b0);
          iVar6 = uVar11 + 1;
          *(int *)(param_2 + 0x9b0) = iVar6;
          param_2[(ulonglong)uVar11 + 0x9b1] = lVar15;
          if (iVar6 == 0x20) {
            FUN_1447111de(param_2 + 0x938);
          }
        }
        else {
          uVar11 = *(uint *)(param_2 + 0x88);
          iVar6 = uVar11 + 1;
          *(int *)(param_2 + 0x88) = iVar6;
          param_2[(ulonglong)uVar11 + 0x89] = (longlong)plVar12;
          if (iVar6 == 0x20) {
            FUN_144710aee(param_2 + 0x10);
          }
        }
      }
      else {
        (**(code **)(*param_2 + 0x10))(param_2);
      }
      uVar13 = uVar13 & ~(uint)uVar18;
      puVar4 = *(uint **)(param_1 + 0x148);
      if (*(uint **)(param_1 + 0x148) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0x138);
      }
      iVar1 = *(int *)(param_1 + 0x150);
      iVar6 = (int)uVar17;
      lVar15 = (longlong)iVar6;
      uVar11 = puVar4[lVar15] & uVar13;
      if (uVar11 == 0) {
        iVar7 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar7 = iVar1 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar6) {
          iVar8 = iVar6;
        }
        if (iVar6 < iVar7) {
          lVar16 = 0;
          do {
            uVar11 = puVar4[lVar15 + lVar16 + 1];
            if (uVar11 != 0) {
              uVar17 = (ulonglong)(iVar6 + (int)lVar16 + 1);
              uVar13 = 0xffffffff;
              goto LAB_1406320eb;
            }
            iVar14 = iVar14 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar8 - lVar15 != lVar16);
          uVar13 = 0xffffffff;
          iVar6 = iVar8;
        }
        uVar17 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar1;
      }
      else {
LAB_1406320eb:
        uVar18 = (ulonglong)(-uVar11 & uVar11);
        uVar10 = uVar18 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar6 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar1 <= iVar6) {
          iVar6 = iVar1;
        }
      }
    } while (iVar6 != iVar9);
  }
LAB_14063219a:
  if (*(code **)(*param_2 + 0x10) == (code *)&LAB_1448810c0) {
    if ((char)param_2[2] == '\0') {
      lVar15 = *(longlong *)(param_1 + 0xe0);
      uVar13 = *(uint *)(param_2 + 0x9b0);
      iVar9 = uVar13 + 1;
      *(int *)(param_2 + 0x9b0) = iVar9;
      param_2[(ulonglong)uVar13 + 0x9b1] = lVar15;
      if (iVar9 == 0x20) {
        FUN_1447111de(param_2 + 0x938);
      }
    }
    else {
      uVar13 = *(uint *)(param_2 + 0x88);
      iVar9 = uVar13 + 1;
      *(int *)(param_2 + 0x88) = iVar9;
      param_2[(ulonglong)uVar13 + 0x89] = param_1 + 0xe0;
      if (iVar9 == 0x20) {
        FUN_144710aee(param_2 + 0x10);
      }
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  cVar2 = (**(code **)(*param_2 + 0x40))(param_2);
  if (cVar2 == '\0') {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  else if (*(longlong *)(param_1 + 0x110) != 0) {
    (**(code **)(param_1 + 0xc0))(*(longlong *)(param_1 + 0x110),param_2);
  }
  plVar12 = (longlong *)(param_1 + 0x120);
  if (*(code **)(*param_2 + 0x10) == (code *)&LAB_1448810c0) {
    if ((char)param_2[2] == '\0') {
      lVar15 = *plVar12;
      uVar13 = *(uint *)(param_2 + 0x9b0);
      iVar9 = uVar13 + 1;
      *(int *)(param_2 + 0x9b0) = iVar9;
      param_2[(ulonglong)uVar13 + 0x9b1] = lVar15;
      if (iVar9 == 0x20) {
        FUN_1447111de(param_2 + 0x938);
      }
    }
    else {
      uVar13 = *(uint *)(param_2 + 0x88);
      iVar9 = uVar13 + 1;
      *(int *)(param_2 + 0x88) = iVar9;
      param_2[(ulonglong)uVar13 + 0x89] = (longlong)plVar12;
      if (iVar9 == 0x20) {
        FUN_144710aee(param_2 + 0x10);
      }
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2,plVar12);
  }
  lVar15 = *plVar12;
  if ((lVar15 != 0) && (lVar16 = *(longlong *)(param_1 + 0x118), lVar16 != 0)) {
    lVar5 = *param_2;
    if (*(code **)(lVar5 + 0x38) == (code *)&LAB_144809cfe) {
      uVar13 = 0;
    }
    else {
      bVar3 = (**(code **)(lVar5 + 0x38))(param_2);
      uVar13 = (uint)bVar3 * 2;
      lVar5 = *param_2;
    }
    if (*(code **)(lVar5 + 0x48) == (code *)&LAB_144809d02) {
      uVar11 = 0;
    }
    else {
      bVar3 = (**(code **)(lVar5 + 0x48))(param_2);
      uVar11 = (uint)bVar3;
    }
    (*(code *)(&PTR_FUN_149eb1110)[uVar11 | uVar13])(param_2,lVar15,lVar16,param_1);
    return;
  }
  return;
}



// FUNCTION 1406324ce FUN_1406324ce body=367 status=ok
// SIG undefined FUN_1406324ce(void)

void FUN_1406324ce(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14caf84d0 == (longlong *)0x0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_145a62952;
    local_48 = &LAB_147c8cd45;
    local_50 = &LAB_1461468ae;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000006;
    local_70 = 8;
    local_78 = 0x218;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  plVar4 = DAT_14caf84d0;
  lVar5 = DAT_14caf84d0[0x22];
  if (lVar5 == 0) {
    (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
    lVar5 = plVar4[0x22];
  }
  if (*(char *)(lVar5 + 0xf0) == '\x01') {
    FUN_14063263e(param_1,param_2);
  }
  if ((char)param_1[0x2f] == '\x01') {
    lVar5 = (**(code **)(*param_1 + 0x638))(param_1);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x138) = *(undefined8 *)(param_2 + 4);
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *(undefined4 *)(lVar5 + 0x128) = *param_2;
      *(undefined4 *)(lVar5 + 300) = uVar1;
      *(undefined4 *)(lVar5 + 0x130) = uVar2;
      *(undefined4 *)(lVar5 + 0x134) = uVar3;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14063263e FUN_14063263e body=703 status=ok
// SIG undefined FUN_14063263e(void)

void FUN_14063263e(longlong *param_1,double *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  double local_58;
  double dStack_50;
  double local_48;
  code *local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14caf84d0 == (longlong *)0x0) {
    local_70 = &local_38;
    local_38 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = (code *)&LAB_145a62952;
    local_78 = &LAB_147c8cd45;
    local_80 = &LAB_1461468ae;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10000006;
    local_a0 = 8;
    local_a8 = 0x218;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  plVar2 = DAT_14caf84d0;
  lVar1 = DAT_14caf84d0[0x22];
  if (lVar1 == 0) {
    (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
    lVar1 = plVar2[0x22];
  }
  if (((*(char *)(lVar1 + 0xf0) == '\x01') && (param_1[0x39] != 0)) &&
     ((*(byte *)(param_1[0x39] + 0x9c) & 1) != 0)) {
    (**(code **)(*param_1 + 0x328))(param_1,&local_38);
    if ((*param_2 == (double)local_38) && (!NAN(*param_2) && !NAN((double)local_38))) {
      if ((param_2[1] == local_30) && (!NAN(param_2[1]) && !NAN(local_30))) {
        if ((param_2[2] == local_28) && (!NAN(param_2[2]) && !NAN(local_28))) goto LAB_140632737;
      }
    }
    plVar2 = (longlong *)param_1[0x39];
    if (plVar2 != (longlong *)0x0) {
      if (DAT_14cac6e60 == 0) {
        local_38 = FUN_144a7958c;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_142b47bc4;
        local_78 = &LAB_1478989f1;
        local_80 = &LAB_146391124;
        local_88 = L"Engine";
        local_90 = 0x10000000000;
        local_98 = 0x10000005;
        local_a0 = 0x10;
        local_a8 = 0x620;
        local_70 = &local_38;
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
        plVar2 = (longlong *)param_1[0x39];
        if (plVar2 == (longlong *)0x0) goto LAB_140632737;
      }
      if ((((DAT_14cac6e60 != 0) && (lVar1 = plVar2[2], lVar1 != 0)) &&
          (*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8)
          == DAT_14cac6e60 + 0x30)) {
        local_48 = param_2[2];
        local_58 = *param_2;
        dStack_50 = param_2[1];
        (**(code **)(*plVar2 + 0x6f8))(local_58,&local_58,0,0);
      }
    }
  }
LAB_140632737:
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406328fe FUN_1406328fe body=269 status=ok
// SIG undefined FUN_1406328fe(void)

longlong * FUN_1406328fe(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x518) != *(int *)(param_1 + 0x544)) {
    uVar3 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    lVar4 = param_1 + 0x548;
    if (*(longlong *)(param_1 + 0x550) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x550);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x558) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) +
                             ((int)param_3 << 0x10 | (uint)(ushort)param_3) +
                             (uVar3 << 0x13 | uVar3) + (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x510) + (longlong)iVar5 * 0x18);
        if (*plVar1 == param_3) {
          if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
            lVar4 = plVar1[1];
            *param_2 = lVar4;
            if (lVar4 == 0) {
              return param_2;
            }
            if ((DAT_14cb26569 & 1) != 0) {
              piVar2 = *(int **)(lVar4 + 0x50);
              LOCK();
              *piVar2 = *piVar2 + 1;
              UNLOCK();
              if (DAT_14cb259f8 == 0) {
                iVar5 = 5;
              }
              else {
                if ((char)piVar2[1] != '\x01') {
                  FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
                  return param_2;
                }
                iVar5 = 2;
              }
              LOCK();
              piVar2[2] = iVar5;
              UNLOCK();
              return param_2;
            }
            return param_2;
          }
          break;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  FUN_140632a0c(param_1,param_2);
  return param_2;
}



// FUNCTION 140632a0c FUN_140632a0c body=240 status=ok
// SIG undefined FUN_140632a0c(void)

longlong * FUN_140632a0c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x1b8) != *(int *)(param_1 + 0x1e4)) {
    uVar3 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    lVar4 = param_1 + 0x1e8;
    if (*(longlong *)(param_1 + 0x1f0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1f0);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x1f8) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) +
                             ((int)param_3 << 0x10 | (uint)(ushort)param_3) +
                             (uVar3 << 0x13 | uVar3) + (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar5 * 0x18);
        if (*plVar1 == param_3) {
          if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
            lVar4 = plVar1[1];
            *param_2 = lVar4;
            if (lVar4 == 0) {
              return param_2;
            }
            if ((DAT_14cb26569 & 1) != 0) {
              piVar2 = *(int **)(lVar4 + 0x50);
              LOCK();
              *piVar2 = *piVar2 + 1;
              UNLOCK();
              if (DAT_14cb259f8 == 0) {
                iVar5 = 5;
              }
              else {
                if ((char)piVar2[1] != '\x01') {
                  FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
                  return param_2;
                }
                iVar5 = 2;
              }
              LOCK();
              piVar2[2] = iVar5;
              UNLOCK();
              return param_2;
            }
            return param_2;
          }
          break;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 140632afc FUN_140632afc body=38 status=ok
// SIG undefined FUN_140632afc(void)

undefined8 FUN_140632afc(undefined8 param_1,int param_2)

{
  FUN_140632b22();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140632b22 FUN_140632b22 body=166 status=ok
// SIG undefined FUN_140632b22(void)

void FUN_140632b22(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aac3578;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_140632bc8(param_1 + 0x31);
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_140402654(param_1);
  return;
}



// FUNCTION 140632bc8 FUN_140632bc8 body=55 status=ok
// SIG undefined FUN_140632bc8(void)

void FUN_140632bc8(longlong *param_1)

{
  FUN_140632c00(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140632c00 FUN_140632c00 body=121 status=ok
// SIG undefined FUN_140632c00(void)

void FUN_140632c00(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 140632c7a FUN_140632c7a body=228 status=ok
// SIG undefined FUN_140632c7a(void)

void FUN_140632c7a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_140632d98();
  plVar4 = (longlong *)*param_2;
  if ((plVar4 != (longlong *)0x0) && ((char)plVar4[6] == '\0')) {
    lVar5 = (**(code **)(*plVar4 + 8))();
    lVar6 = FUN_140632d5e();
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
         lVar6 + 0x30)))) {
      lVar5 = *param_2;
      plVar4 = (longlong *)param_2[1];
      if (plVar4 == (longlong *)0x0) {
        if (*(int *)(lVar5 + 200) < 1) {
          return;
        }
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        if (*(int *)(lVar5 + 200) < 1) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) {
            return;
          }
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 != 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000140632d4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
      iVar3 = *(int *)(param_1 + 0x2a8);
      *(uint *)(param_1 + 0x2a8) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x2ac) < iVar3 + 1U) {
        FUN_140632f34((longlong *)(param_1 + 0x2a0),iVar3);
      }
      lVar6 = *(longlong *)(param_1 + 0x2a0);
      *(longlong *)(lVar6 + (longlong)iVar3 * 0x10) = lVar5;
      *(longlong **)(lVar6 + 8 + (longlong)iVar3 * 0x10) = plVar4;
    }
  }
  return;
}



// FUNCTION 140632d5e FUN_140632d5e body=57 status=ok
// SIG undefined FUN_140632d5e(void)

void FUN_140632d5e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93ab0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93ab0 = FUN_140002ddd(FUN_14657321e,uVar1,L"WeaponAttributeEffectAspect");
  }
  return;
}



// FUNCTION 140632d98 FUN_140632d98 body=141 status=ok
// SIG undefined FUN_140632d98(void)

void FUN_140632d98(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    return;
  }
  if (*(int *)(lVar1 + 0xb8) < 1) {
    return;
  }
  if (*(char *)(lVar1 + 0x30) == '\x01') {
    if (*(char *)(lVar1 + 0x31) != '\0') {
      return;
    }
    plVar4 = (longlong *)(param_1 + 0x118);
    uVar5 = (ulonglong)*(int *)(param_1 + 0x120);
    uVar3 = *(int *)(param_1 + 0x120) + 1;
    *(uint *)(param_1 + 0x120) = uVar3;
    if (uVar3 <= *(uint *)(param_1 + 0x124)) goto LAB_140632dcc;
  }
  else {
    plVar4 = (longlong *)(param_1 + 0x28);
    uVar5 = (ulonglong)*(int *)(param_1 + 0x30);
    uVar3 = *(int *)(param_1 + 0x30) + 1;
    *(uint *)(param_1 + 0x30) = uVar3;
    if (uVar3 <= *(uint *)(param_1 + 0x34)) goto LAB_140632dcc;
  }
  FUN_140632e26(plVar4,uVar5 & 0xffffffff);
LAB_140632dcc:
  lVar1 = *plVar4;
  *(longlong *)(lVar1 + uVar5 * 0x10) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(lVar1 + 8 + uVar5 * 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140632e26 FUN_140632e26 body=269 status=ok
// SIG undefined FUN_140632e26(void)

void FUN_140632e26(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140632f34 FUN_140632f34 body=269 status=ok
// SIG undefined FUN_140632f34(void)

void FUN_140632f34(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140633042 FUN_140633042 body=825 status=ok
// SIG undefined FUN_140633042(void)

undefined2 **
FUN_140633042(undefined2 **param_1,undefined8 param_2,longlong param_3,wchar_t *param_4)

{
  char cVar1;
  size_t sVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  longlong local_1a0 [2];
  undefined2 *local_190;
  int local_188;
  undefined2 *local_180;
  int local_178;
  undefined2 *local_170;
  int local_168;
  undefined2 *local_160;
  int local_158;
  undefined4 local_154;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_140002266(&local_170,L"%sINI=",param_2);
  *param_1 = (undefined2 *)0x0;
  param_1[1] = (undefined2 *)0x0;
  puVar4 = local_170;
  if (local_168 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_1a8 = 0;
  cVar1 = FUN_14063337c(&DAT_14c846b20,puVar4,param_1,1);
  if (cVar1 != '\0') goto LAB_1406332a6;
  if (param_3 == 0) {
    FUN_144a81018(&local_160,"Windows");
    FUN_140056680(&local_180,local_58);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_140056680(&local_180,param_3);
  }
  FUN_140056680(&local_160);
  if (param_4 == (wchar_t *)0x0) {
LAB_140633179:
    bVar13 = false;
  }
  else {
    sVar2 = wcslen(param_4);
    if ((int)(uint)sVar2 < 1) goto LAB_140633179;
    uVar3 = (ulonglong)((uint)sVar2 & 0x7fffffff);
    puVar4 = local_160;
    if (local_158 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    lVar7 = 0;
    while( true ) {
      uVar8 = *(ushort *)((longlong)puVar4 + lVar7);
      uVar9 = (ulonglong)uVar8;
      uVar10 = *(ushort *)((longlong)param_4 + lVar7);
      if (uVar8 != uVar10) break;
      if (uVar8 == 0) goto LAB_140633180;
LAB_140633148:
      uVar3 = uVar3 - 1;
      if (uVar3 == 0) goto LAB_140633180;
      lVar7 = lVar7 + 2;
    }
    if ((uVar10 | uVar8) < 0x80) {
      uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
      uVar12 = (ulonglong)uVar10;
      uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
      if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_140633148;
    }
    if (uVar8 != uVar10) goto LAB_140633179;
LAB_140633180:
    FUN_140056680(local_1a0,param_2);
    lVar7 = 0;
    FUN_144a06df0(&local_190,local_1a0,0);
    puVar4 = &DAT_149dfb77a;
    if (local_188 != 0) {
      puVar4 = local_190;
    }
    while( true ) {
      uVar8 = *(ushort *)((longlong)puVar4 + lVar7);
      uVar5 = (uint)uVar8;
      uVar10 = *(ushort *)((longlong)&DAT_149e27a0c + lVar7);
      uVar11 = (uint)uVar10;
      if (uVar8 != uVar10) {
        if ((uVar10 | uVar8) < 0x80) {
          uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar8];
          uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar10];
          if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar10]) goto LAB_1406331d5;
        }
        iVar6 = uVar5 - uVar11;
        goto LAB_140633200;
      }
      if (uVar8 == 0) break;
LAB_1406331d5:
      lVar7 = lVar7 + 2;
    }
    iVar6 = 0;
LAB_140633200:
    bVar13 = iVar6 == 0;
    if (local_190 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_1a0[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_160 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (bVar13) {
    FUN_14020fad6(param_1,param_2);
  }
  else {
    puVar4 = local_180;
    if (local_178 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    local_1a8 = param_2;
    FUN_140002266(&local_160,L"%s%s/%s.ini",param_4,puVar4);
    if (&local_160 == param_1) {
      if (local_160 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_160;
      local_160 = (undefined2 *)0x0;
      *(int *)(param_1 + 1) = local_158;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_154;
    }
  }
  if (local_180 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1406332a6:
  FUN_1401ae5e4(param_1);
  if (local_170 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14063337c FUN_14063337c body=414 status=ok
// SIG undefined FUN_14063337c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14063337c(wchar_t *param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
             undefined8 param_5)

{
  char cVar1;
  uint extraout_EAX;
  undefined2 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_2088 [32];
  undefined1 local_2068;
  undefined8 local_2060;
  longlong local_2058;
  undefined4 local_2050;
  undefined4 local_204c;
  undefined2 local_2048 [4096];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  size_t sVar2;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2088;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    extraout_EAX = (uint)sVar2;
    if (0 < (int)extraout_EAX) {
      local_48 = (undefined2 *)0x0;
      local_3c = 0x1000;
      local_40 = extraout_EAX + 1;
      if (0xfff < extraout_EAX) {
        FUN_142788712(local_2048,0);
      }
      puVar3 = local_48;
      if (local_48 == (undefined2 *)0x0) {
        puVar3 = local_2048;
      }
      *puVar3 = 0;
      puVar3 = local_48;
      if (local_48 == (undefined2 *)0x0) {
        puVar3 = local_2048;
      }
      local_2060 = param_5;
      local_2068 = param_4;
      cVar1 = FUN_140751ea8(param_1,param_2,puVar3,local_40);
      if (cVar1 != '\0') {
        puVar3 = local_2048;
        if (local_48 != (undefined2 *)0x0) {
          puVar3 = local_48;
        }
        FUN_140056680(&local_2058,puVar3);
        if (&local_2058 == param_3) {
          if (local_2058 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_3 != 0) {
            FUN_1400020a8();
          }
          *param_3 = local_2058;
          local_2058 = 0;
          *(undefined4 *)(param_3 + 1) = local_2050;
          *(undefined4 *)((longlong)param_3 + 0xc) = local_204c;
        }
        if (local_48 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar4 = 1;
        goto LAB_1406334ac;
      }
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  uVar4 = 0;
LAB_1406334ac:
  if ((local_38 ^ (ulonglong)auStack_2088) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14063351c FUN_14063351c body=102 status=ok
// SIG undefined FUN_14063351c(void)

void FUN_14063351c(longlong param_1,int param_2)

{
  longlong lVar1;
  
  FUN_1406335ea(param_1 + 0x740);
  FUN_140633582(param_1);
  lVar1 = FUN_1447210f0(param_1);
  if (((param_2 != 3) || (lVar1 == 0)) || ((*(byte *)(lVar1 + 0x155) & 0x20) != 0)) {
    FUN_14078a7c0(param_1 + 0x7c0);
    FUN_140633cb6(param_1 + 0x408,1);
  }
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 140633582 FUN_140633582 body=103 status=ok
// SIG undefined FUN_140633582(void)

void FUN_140633582(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x838) != 0) {
    FUN_140521208();
    *(undefined8 *)(param_1 + 0x838) = 0;
    plVar3 = *(longlong **)(param_1 + 0x840);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x840) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001406335e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1406335ea FUN_1406335ea body=366 status=ok
// SIG undefined FUN_1406335ea(void)

void FUN_1406335ea(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  FUN_140633758();
  plVar3 = *(longlong **)(param_1 + 0x50);
  if ((plVar3 == (longlong *)0x0) || ((*(uint *)(plVar3 + 1) >> 0x1e & 1) != 0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*plVar3 + 0x180))();
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(lVar4 + lVar7);
      if ((plVar3 != (longlong *)0x0) &&
         ((**(code **)(*plVar3 + 0x2e0))(plVar3,param_2), lVar6 != 0)) {
        lVar10 = lVar6 + 0x460;
        if (*(longlong *)(lVar6 + 0x1f0) != 0) {
          lVar10 = *(longlong *)(*(longlong *)(lVar6 + 0x1f0) + 0xf8);
        }
        uVar2 = *(uint *)((longlong)plVar3 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar5 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar5 = *(int *)(lVar9 + 0x10);
          bVar11 = iVar5 == 0;
          if (bVar11) {
            *(int *)(lVar9 + 0x10) = iVar8;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar5 = iVar8;
          }
        }
        FUN_1406338de(lVar10,CONCAT44(iVar5,uVar2));
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  *(undefined1 *)(param_1 + 0x6a) = 0;
  return;
}



// FUNCTION 140633758 FUN_140633758 body=137 status=ok
// SIG undefined FUN_140633758(void)

void FUN_140633758(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (((*(longlong *)(param_1 + 0x18) != 0) &&
      (plVar1 = *(longlong **)(param_1 + 0x50), plVar1 != (longlong *)0x0)) &&
     ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) {
    lVar3 = (**(code **)(*plVar1 + 0x180))();
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) {
      puVar5 = (undefined8 *)(param_1 + 0x18);
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        puVar4 = (undefined8 *)(lVar3 + 0x458);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar4;
      lVar3 = FUN_144a61814(uVar2,puVar5);
      if (lVar3 != 0) {
        FUN_1405a424c(uVar2,*puVar5);
      }
      *puVar5 = 0;
    }
  }
  return;
}



// FUNCTION 1406337e2 FUN_1406337e2 body=105 status=ok
// SIG undefined FUN_1406337e2(void)

void FUN_1406337e2(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb58b00);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  FUN_14063384c(param_1);
  *(undefined2 *)((longlong)param_1 + 0x69) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14063384c FUN_14063384c body=145 status=ok
// SIG undefined FUN_14063384c(void)

void FUN_14063384c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    lVar3 = (longlong)*(int *)(param_1 + 0x98) << 3;
    do {
      plVar1 = (longlong *)FUN_14479d2ce(lVar2);
      if (plVar1 != (longlong *)0x0) {
        *(byte *)((longlong)plVar1 + 0x9e) = *(byte *)((longlong)plVar1 + 0x9e) & 0xf7;
        (**(code **)(*plVar1 + 0x2b0))(plVar1);
        FUN_14572fd70(plVar1);
      }
      lVar2 = lVar2 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x9c) < 0) {
    FUN_1487c0488(param_1 + 0x90,0);
    return;
  }
  return;
}



// FUNCTION 1406338de FUN_1406338de body=873 status=ok
// SIG undefined FUN_1406338de(void)

void FUN_1406338de(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_2;
  plVar8 = (longlong *)FUN_140633c48(param_1,&local_50);
  uVar6 = local_50;
  if (plVar8 != (longlong *)0x0) {
    uVar22 = (ulonglong)*(int *)(param_1 + 0x58);
    local_60 = plVar8;
    if (uVar22 != 0) {
      piVar11 = *(int **)(param_1 + 0x50);
      lVar21 = uVar22 * 0x18;
      do {
        if ((*piVar11 == (int)local_50) && (piVar11[1] == (int)((ulonglong)local_50 >> 0x20))) {
          if (piVar11 != (int *)0x0) {
            plVar9 = *(longlong **)(piVar11 + 2);
            plVar10 = *(longlong **)(piVar11 + 4);
            if (plVar10 == (longlong *)0x0) {
              plVar10 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
            }
            goto LAB_1406339de;
          }
          break;
        }
        piVar11 = piVar11 + 6;
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != 0);
    }
    plVar9 = (longlong *)FUN_14001cc68(0x10,0x10);
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_14a9b2000;
    plVar10[2] = (longlong)plVar9;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      uVar22 = (ulonglong)*(uint *)(param_1 + 0x58);
    }
    uVar7 = (int)uVar22 + 1;
    *(uint *)(param_1 + 0x58) = uVar7;
    if (*(uint *)(param_1 + 0x5c) < uVar7) {
      FUN_14572ffc6((longlong *)(param_1 + 0x50),uVar22 & 0xffffffff);
    }
    lVar21 = *(longlong *)(param_1 + 0x50);
    lVar16 = (longlong)(int)uVar22;
    *(undefined8 *)(lVar21 + lVar16 * 0x18) = uVar6;
    *(longlong **)(lVar21 + 8 + lVar16 * 0x18) = plVar9;
    *(longlong **)(lVar21 + 0x10 + lVar16 * 0x18) = plVar10;
LAB_1406339de:
    iVar18 = ((int)local_60[1] - *(int *)((longlong)local_60 + 0x34)) + (int)plVar9[1];
    if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar18);
    }
    if (*(int *)((longlong)plVar9 + 0xc) < iVar18) {
      FUN_140633e10();
    }
    iVar18 = (int)local_60[5];
    local_58 = plVar10;
    if (iVar18 == 0) {
      uVar22 = 1;
      uVar23 = 0;
      iVar12 = 0;
      iVar19 = 0;
    }
    else {
      puVar17 = (uint *)local_60[4];
      if ((uint *)local_60[4] == (uint *)0x0) {
        puVar17 = (uint *)(plVar8 + 2);
      }
      uVar7 = *puVar17;
      if (uVar7 == 0) {
        iVar12 = iVar18 + 0x1e;
        if (-1 < iVar18 + -1) {
          iVar12 = iVar18 + -1;
        }
        uVar23 = 0;
        uVar22 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar22 = uVar23;
        }
        iVar19 = 0;
        do {
          if (uVar22 == uVar23) goto LAB_140633b55;
          iVar19 = iVar19 + 0x20;
          uVar7 = puVar17[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar7 == 0);
      }
      else {
        uVar23 = 0;
        iVar19 = 0;
      }
      uVar22 = (ulonglong)(-uVar7 & uVar7);
      uVar2 = uVar22 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar12 = (iVar19 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      if (iVar18 <= iVar12) {
        iVar12 = iVar18;
      }
    }
    if (iVar12 < iVar18) {
      uVar7 = 0xffffffff;
      plVar10 = local_60;
      do {
        puVar20 = (undefined4 *)((longlong)iVar12 * 0x18 + *plVar10);
        iVar18 = (int)plVar9[1];
        *(uint *)(plVar9 + 1) = iVar18 + 1U;
        if (*(uint *)((longlong)plVar9 + 0xc) < iVar18 + 1U) {
          FUN_1408c8e9a(plVar9,iVar18);
          plVar10 = local_60;
        }
        uVar3 = puVar20[1];
        uVar4 = puVar20[2];
        uVar5 = puVar20[3];
        puVar1 = (undefined4 *)(*plVar9 + (longlong)iVar18 * 0x10);
        *puVar1 = *puVar20;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        uVar7 = uVar7 & ~(uint)uVar22;
        puVar17 = (uint *)plVar10[4];
        if ((uint *)plVar10[4] == (uint *)0x0) {
          puVar17 = (uint *)(plVar8 + 2);
        }
        iVar18 = (int)plVar10[5];
        iVar12 = (int)uVar23;
        lVar21 = (longlong)iVar12;
        uVar13 = puVar17[lVar21] & uVar7;
        if (uVar13 == 0) {
          iVar14 = iVar18 + 0x1e;
          if (-1 < iVar18 + -1) {
            iVar14 = iVar18 + -1;
          }
          iVar14 = iVar14 >> 5;
          iVar15 = iVar14;
          if (iVar14 < iVar12) {
            iVar15 = iVar12;
          }
          if (iVar14 <= iVar12) break;
          lVar16 = 0;
          while( true ) {
            iVar19 = iVar19 + 0x20;
            uVar13 = puVar17[lVar21 + lVar16 + 1];
            if (uVar13 != 0) break;
            lVar16 = lVar16 + 1;
            if (iVar15 - lVar21 == lVar16) goto LAB_140633b55;
          }
          uVar23 = (ulonglong)(iVar12 + (int)lVar16 + 1);
          uVar7 = 0xffffffff;
        }
        uVar22 = (ulonglong)(-uVar13 & uVar13);
        uVar2 = uVar22 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar12 = (iVar19 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar18);
    }
LAB_140633b55:
    plVar8 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_58 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar11 = (int *)((longlong)plVar8 + 0xc);
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140633c48 FUN_140633c48 body=109 status=ok
// SIG undefined FUN_140633c48(void)

undefined8 FUN_140633c48(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U & ((uint)((ulonglong)lVar2 >> 0x20) ^ (uint)lVar2)) * 4);
    if (iVar3 != -1) {
      while (lVar1 = *param_1 + (longlong)iVar3 * 0x20,
            *(longlong *)(*param_1 + (longlong)iVar3 * 0x20) != lVar2) {
        iVar3 = *(int *)(lVar1 + 0x18);
        if (iVar3 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      if ((undefined8 *)(lVar1 + 8) == (undefined8 *)0x0) {
        return 0;
      }
      return *(undefined8 *)(lVar1 + 8);
    }
  }
  return 0;
}



// FUNCTION 140633cb6 FUN_140633cb6 body=344 status=ok
// SIG undefined FUN_140633cb6(void)

void FUN_140633cb6(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == '\0') {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    plVar6 = *(longlong **)(param_1 + 0xe8);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xe8) = 0;
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    *(undefined8 *)(param_1 + 0xf0) = 0;
    plVar6 = *(longlong **)(param_1 + 0xf8);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    uVar3 = *(uint *)(param_1 + 0x70);
    uVar5 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_140633db6;
    plVar6 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (((plVar6 != (longlong *)0x0) &&
        ((((int)plVar6[2] == *(int *)(param_1 + 0x74) && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)
          ) && (lVar4 = *plVar6, lVar4 != 0)))) &&
       ((((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0 && (-1 < (short)*(undefined4 *)(lVar4 + 8))) &&
        (DAT_14c872bd8 == '\0')))) {
      uVar7 = FUN_1401b0f18();
      plVar6 = (longlong *)FUN_144718840(lVar4,uVar7);
      local_20 = 0;
      (**(code **)(*plVar6 + 0x48))(plVar6);
      uVar5 = 1;
      goto LAB_140633db6;
    }
  }
  uVar5 = 0;
LAB_140633db6:
  *(undefined1 *)(param_1 + 0x101) = uVar5;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140633e10 FUN_140633e10 body=212 status=ok
// SIG undefined FUN_140633e10(void)

void FUN_140633e10(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
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
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 140633ee4 FUN_140633ee4 body=83 status=ok
// SIG undefined FUN_140633ee4(void)

void FUN_140633ee4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x10;
  do {
    lVar1 = *(longlong *)((longlong)param_1 + lVar2);
    if (lVar1 != 0) {
      FUN_140633ee4(lVar1);
      FUN_1400020a8(lVar1);
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x30);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140633f37 FUN_140633f37 body=103 status=ok
// SIG undefined FUN_140633f37(void)

void FUN_140633f37(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1 != 0) {
    for (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70); lVar1 != 0;
        lVar1 = *(longlong *)(lVar1 + 0x48)) {
      if (*(longlong *)(lVar1 + 0x20) == param_3) {
        local_c = 0;
        FUN_140753fde(0);
        break;
      }
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140633fa0 FUN_140633fa0 body=1642 status=ok
// SIG undefined FUN_140633fa0(void)

void FUN_140633fa0(longlong *param_1,longlong *param_2)

{
  float *pfVar1;
  longlong lVar2;
  bool bVar3;
  void *pvVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  void *_Src;
  longlong lVar11;
  void *pvVar12;
  longlong *plVar13;
  void *pvVar14;
  void *pvVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong uVar19;
  void *pvVar20;
  void *pvVar21;
  void *_Src_00;
  float fVar22;
  undefined1 auStack_418 [32];
  void *local_3f8;
  void *local_3f0;
  void *local_3e8;
  longlong *local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  undefined4 local_3c8 [190];
  undefined1 local_d0 [136];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_418;
  iVar17 = (int)param_1[1];
  if (1 < (longlong)iVar17) {
    lVar7 = *param_1;
    local_3e0 = param_2;
    memset(local_3c8,0,0x2f0);
    local_3d0 = (longlong)iVar17 * 0x88 + lVar7 + -0x88;
    local_3d8 = lVar7;
    fVar22 = logf((float)iVar17);
    local_3c8[0] = (int)(longlong)(fVar22 + fVar22);
    plVar13 = &local_3d8;
    do {
      pvVar12 = (void *)*plVar13;
      pvVar20 = (void *)plVar13[1];
      iVar17 = (int)plVar13[2];
      iVar16 = (int)((ulonglong)((longlong)pvVar20 - (longlong)pvVar12) >> 3);
      pvVar21 = pvVar12;
      _Src_00 = pvVar20;
      if (iVar17 != 0) {
LAB_1406341ef:
        uVar6 = iVar16 * -0xf0f0f0f + 1;
        if (8 < (int)uVar6) {
          pvVar14 = (void *)((ulonglong)(uVar6 >> 1) * 0x88 + (longlong)pvVar21);
          memcpy(local_d0,pvVar14,0x88);
          memcpy(pvVar14,pvVar21,0x88);
          memcpy(pvVar21,local_d0,0x88);
          local_3f0 = (void *)((longlong)_Src_00 + 0x88);
          local_3f8 = pvVar21;
          do {
            pvVar14 = (void *)((longlong)local_3f8 + 0x88);
            pvVar4 = (void *)((longlong)local_3f8 + 0x88);
            do {
              _Src = pvVar4;
              local_3e8 = pvVar14;
              if (_Src_00 < _Src) break;
              pvVar14 = (void *)((longlong)local_3e8 + 0x88);
              pvVar4 = (void *)((longlong)_Src + 0x88);
            } while (*(float *)((longlong)pvVar21 + 0x74) < *(float *)((longlong)_Src + 0x74) ||
                     *(float *)((longlong)pvVar21 + 0x74) == *(float *)((longlong)_Src + 0x74));
            pvVar4 = (void *)((longlong)local_3f0 - 0x110);
            pvVar14 = local_3f0;
            do {
              pvVar15 = pvVar4;
              local_3f0 = (void *)((longlong)pvVar14 - 0x88);
              if (local_3f0 <= pvVar21) break;
              pfVar1 = (float *)((longlong)pvVar14 - 0x14);
              pvVar4 = (void *)((longlong)pvVar15 + -0x88);
              pvVar14 = local_3f0;
            } while (*pfVar1 < *(float *)((longlong)pvVar21 + 0x74) ||
                     *pfVar1 == *(float *)((longlong)pvVar21 + 0x74));
            local_3f8 = _Src;
            if (local_3f0 < _Src) goto LAB_1406344cc;
            memcpy(local_d0,_Src,0x88);
            pvVar14 = local_3f0;
            memcpy(_Src,local_3f0,0x88);
            memcpy(pvVar14,local_d0,0x88);
          } while( true );
        }
        for (; pvVar12 = pvVar21, pvVar20 = pvVar21, pvVar21 < _Src_00;
            _Src_00 = (void *)((longlong)_Src_00 + -0x88)) {
          while (pvVar14 = pvVar12, pvVar12 = (void *)((longlong)pvVar20 + 0x88), pvVar12 <= _Src_00
                ) {
            pfVar1 = (float *)((longlong)pvVar20 + 0xfc);
            pvVar20 = pvVar12;
            if (*(float *)((longlong)pvVar14 + 0x74) < *pfVar1 ||
                *(float *)((longlong)pvVar14 + 0x74) == *pfVar1) {
              pvVar12 = pvVar14;
            }
          }
          memcpy(local_d0,pvVar14,0x88);
          memcpy(pvVar14,_Src_00,0x88);
          memcpy(_Src_00,local_d0,0x88);
        }
        goto LAB_14063427b;
      }
LAB_140634389:
      local_3f8 = pvVar21;
      FUN_1478dda02(local_3f8);
LAB_14063427b:
      plVar13 = plVar13 + -3;
      param_2 = local_3e0;
    } while (&local_3d8 <= plVar13);
  }
  lVar7 = (**(code **)(**(longlong **)*param_1 + 0x2b8))();
  if ((lVar7 != 0) && (*(int *)(lVar7 + 8) != 0)) {
    plVar13 = param_1 + 3;
    FUN_1406fa324(plVar13,lVar7);
    *(undefined1 *)(*param_1 + 0x70) = 1;
    *(undefined1 *)(param_1 + 5) = 1;
    if (0 < (int)param_1[1]) {
      lVar7 = 0;
      do {
        plVar18 = (longlong *)(lVar7 * 0x88 + *param_1);
        if (param_2 != (longlong *)0x0) {
          puVar8 = (undefined4 *)plVar18[0xd];
          if ((longlong)(int)param_2[1] != 0) {
            lVar10 = *param_2;
            lVar11 = 0;
            do {
              if (*(undefined4 **)(lVar10 + 0x68 + lVar11) == puVar8) {
                lVar2 = *plVar18;
                if ((lVar2 != 0 & DAT_14c950c29) == 1) {
                  FUN_1456cec3c(lVar2);
                }
                if (*(longlong *)(lVar10 + lVar11) == lVar2) goto LAB_140634107;
                puVar8 = (undefined4 *)plVar18[0xd];
                break;
              }
              lVar11 = lVar11 + 0x88;
            } while ((longlong)(int)param_2[1] * 0x88 != lVar11);
          }
          *puVar8 = 0xfffffffe;
          puVar8[2] = 0xfffffffe;
        }
LAB_140634107:
        if ((((lVar7 != 0) && (0 < (int)param_1[4])) &&
            (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar18 + 0x2b8))(),
            plVar9 != (longlong *)0x0)) && ((int)plVar9[1] != 0)) {
          *(undefined1 *)(plVar18 + 0xe) = 1;
          uVar6 = *(uint *)(param_1 + 4);
          uVar19 = (ulonglong)(int)uVar6;
          if (0 < (longlong)uVar19) {
            do {
              plVar18 = (longlong *)(*plVar13 + uVar19 * 8 + -8);
              if ((longlong)(int)plVar9[1] != 0) {
                lVar10 = 0;
                do {
                  if (*(longlong *)(*plVar9 + lVar10) == *plVar18) goto LAB_14063415e;
                  lVar10 = lVar10 + 8;
                } while ((longlong)(int)plVar9[1] * 8 != lVar10);
              }
              if (uVar19 != uVar6) {
                iVar16 = uVar6 - (int)uVar19;
                iVar17 = 1;
                if (iVar16 < 1) {
                  iVar17 = iVar16;
                }
                memmove(plVar18,(void *)(*plVar13 + (longlong)(int)(uVar6 - iVar17) * 8),
                        (longlong)iVar17 << 3);
                uVar6 = *(uint *)(param_1 + 4);
              }
              uVar6 = uVar6 - 1;
              *(uint *)(param_1 + 4) = uVar6;
LAB_14063415e:
              bVar3 = 1 < (longlong)uVar19;
              uVar19 = uVar19 - 1;
            } while (bVar3);
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < (int)param_1[1]);
    }
    *(bool *)(param_1 + 5) = 0 < (int)param_1[4];
    FUN_14063460b();
    if ((((param_2 == (longlong *)0x0) || ((int)param_1[4] != (int)param_2[4])) ||
        (cVar5 = FUN_14000b9e1(*plVar13,param_2[3]), cVar5 == '\0')) && (0 < (int)param_1[1])) {
      lVar7 = 0x68;
      lVar10 = 0;
      do {
        puVar8 = *(undefined4 **)(*param_1 + lVar7);
        *puVar8 = 0xfffffffe;
        puVar8[2] = 0xfffffffe;
        lVar10 = lVar10 + 1;
        lVar7 = lVar7 + 0x88;
      } while (lVar10 < (int)param_1[1]);
    }
    if ((char)param_1[5] != '\0') goto LAB_14063403e;
  }
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x24) < 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    FUN_1402191ca(param_1 + 3,0);
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  lVar7 = param_1[1];
  if ((longlong)(int)lVar7 != 0) {
    lVar10 = *param_1;
    lVar11 = 0;
    do {
      puVar8 = *(undefined4 **)(lVar10 + 0x68 + lVar11);
      *puVar8 = 0xfffffffe;
      puVar8[2] = 0xfffffffe;
      *(undefined1 *)(lVar10 + 0x70 + lVar11) = 0;
      lVar11 = lVar11 + 0x88;
    } while ((longlong)(int)lVar7 * 0x88 != lVar11);
  }
LAB_14063403e:
  if ((local_48 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1406344cc:
  memcpy(local_d0,pvVar21,0x88);
  memcpy(pvVar21,local_3f0,0x88);
  memcpy(local_3f0,local_d0,0x88);
  iVar17 = iVar17 + -1;
  pvVar14 = (void *)((longlong)local_3f0 + -0x88);
  if ((longlong)pvVar15 - (longlong)pvVar12 < (longlong)pvVar20 - (longlong)local_3e8) {
    if (local_3f8 < _Src_00) {
      *plVar13 = (longlong)local_3f8;
      plVar13[1] = (longlong)_Src_00;
      *(int *)(plVar13 + 2) = iVar17;
      plVar13 = plVar13 + 3;
    }
    pvVar12 = pvVar21;
    if (local_3f0 <= (void *)((longlong)pvVar21 + 0x88U)) goto LAB_14063427b;
  }
  else {
    if ((void *)((longlong)pvVar21 + 0x88U) < local_3f0) {
      *plVar13 = (longlong)pvVar21;
      plVar13[1] = (longlong)pvVar14;
      *(int *)(plVar13 + 2) = iVar17;
      plVar13 = plVar13 + 3;
    }
    pvVar15 = _Src_00;
    pvVar14 = _Src_00;
    pvVar21 = local_3f8;
    pvVar12 = local_3e8;
    if (_Src_00 <= local_3f8) goto LAB_14063427b;
  }
  local_3e8 = pvVar12;
  local_3f8 = pvVar21;
  iVar16 = (int)((ulonglong)((longlong)pvVar15 - (longlong)local_3e8) >> 3);
  pvVar12 = local_3e8;
  pvVar20 = pvVar15;
  pvVar21 = local_3f8;
  _Src_00 = pvVar14;
  if (iVar17 == 0) goto LAB_140634389;
  goto LAB_1406341ef;
}



// FUNCTION 14063460b FUN_14063460b body=763 status=ok
// SIG undefined FUN_14063460b(void)

void FUN_14063460b(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  longlong *plVar10;
  int *piVar11;
  float fVar12;
  undefined1 auStack_388 [32];
  int *local_368;
  int *local_360;
  int *local_358;
  int *local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar12 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar12 + fVar12);
    plVar10 = &local_348;
    do {
      piVar7 = (int *)*plVar10;
      piVar8 = (int *)plVar10[1];
      iVar2 = (int)plVar10[2];
      iVar3 = (int)((ulonglong)((longlong)piVar8 - (longlong)piVar7) >> 3);
      piVar9 = piVar8;
      piVar11 = piVar7;
      if (iVar2 != 0) {
LAB_1406346d5:
        if (8 < (int)(iVar3 + 1U)) {
          uVar5 = (ulonglong)(iVar3 + 1U >> 1);
          uVar1 = *(undefined8 *)(piVar11 + uVar5 * 2);
          *(undefined8 *)(piVar11 + uVar5 * 2) = *(undefined8 *)piVar11;
          *(undefined8 *)piVar11 = uVar1;
          local_360 = piVar8 + 2;
          local_368 = piVar11;
          do {
            piVar4 = local_368 + 2;
            piVar6 = piVar4;
            do {
              local_368 = piVar6;
              local_350 = piVar4;
              if (piVar8 < piVar6) break;
              if (*piVar11 == *piVar6) {
                iVar3 = piVar11[1] - piVar6[1];
              }
              else {
                iVar3 = FUN_14002c2bd();
              }
              piVar6 = local_368 + 2;
              piVar4 = local_350 + 2;
            } while (-1 < iVar3);
            piVar6 = local_360 + -4;
            do {
              piVar4 = local_360 + -2;
              local_358 = piVar6;
              if (piVar4 <= piVar11) break;
              if (*piVar4 == *piVar11) {
                iVar3 = local_360[-1] - piVar11[1];
                local_360 = piVar4;
              }
              else {
                local_360 = piVar4;
                iVar3 = FUN_14002c2bd();
              }
              piVar6 = local_358 + -2;
              piVar4 = local_360;
            } while (-1 < iVar3);
            local_360 = piVar4;
            if (local_360 < local_368) goto LAB_140634856;
            uVar1 = *(undefined8 *)local_368;
            *(undefined8 *)local_368 = *(undefined8 *)local_360;
            *(undefined8 *)local_360 = uVar1;
          } while( true );
        }
        for (; piVar9 = piVar11, piVar7 = piVar11, piVar11 < piVar8; piVar8 = piVar8 + -2) {
          while (piVar6 = piVar9, piVar7 = piVar7 + 2, piVar7 <= piVar8) {
            if (*piVar6 == *piVar7) {
              iVar2 = piVar6[1] - piVar7[1];
            }
            else {
              iVar2 = FUN_14002c2bd();
            }
            piVar9 = piVar7;
            if (-1 < iVar2) {
              piVar9 = piVar6;
            }
          }
          uVar1 = *(undefined8 *)piVar6;
          *(undefined8 *)piVar6 = *(undefined8 *)piVar8;
          *(undefined8 *)piVar8 = uVar1;
        }
        goto LAB_140634741;
      }
LAB_140634758:
      local_368 = piVar11;
      FUN_14680bcd2(local_368);
LAB_140634741:
      plVar10 = plVar10 + -3;
    } while (&local_348 <= plVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140634856:
  uVar1 = *(undefined8 *)piVar11;
  *(undefined8 *)piVar11 = *(undefined8 *)local_360;
  *(undefined8 *)local_360 = uVar1;
  iVar2 = iVar2 + -1;
  piVar6 = local_360 + -2;
  if ((longlong)local_358 - (longlong)piVar7 < (longlong)piVar9 - (longlong)local_350) {
    if (local_368 < piVar8) {
      *plVar10 = (longlong)local_368;
      plVar10[1] = (longlong)piVar8;
      *(int *)(plVar10 + 2) = iVar2;
      plVar10 = plVar10 + 3;
    }
    piVar8 = local_358;
    piVar7 = piVar11;
    if (local_360 <= piVar11 + 2) goto LAB_140634741;
  }
  else {
    if (piVar11 + 2 < local_360) {
      *plVar10 = (longlong)piVar11;
      plVar10[1] = (longlong)piVar6;
      *(int *)(plVar10 + 2) = iVar2;
      plVar10 = plVar10 + 3;
    }
    piVar6 = piVar8;
    piVar11 = local_368;
    piVar7 = local_350;
    if (piVar8 <= local_368) goto LAB_140634741;
  }
  local_350 = piVar7;
  local_358 = piVar8;
  local_368 = piVar11;
  iVar3 = (int)((ulonglong)((longlong)local_358 - (longlong)local_350) >> 3);
  piVar7 = local_350;
  piVar8 = piVar6;
  piVar9 = local_358;
  piVar11 = local_368;
  if (iVar2 == 0) goto LAB_140634758;
  goto LAB_1406346d5;
}



// FUNCTION 140634914 FUN_140634914 body=3546 status=ok
// SIG undefined FUN_140634914(void)

longlong FUN_140634914(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  code *pcVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  longlong *plVar20;
  bool bVar21;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  ulonglong uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  longlong *local_90;
  code *local_88;
  undefined8 uStack_80;
  code *local_70;
  int local_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar11 = *param_2;
  if ((1 < uVar11) && ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    uVar14 = (int)param_1[9] - 1;
    iVar19 = *(int *)((longlong)plVar13 +
                     (ulonglong)((int)uVar11 + (int)(uVar11 >> 0x20) * 0x17 & uVar14) * 4);
    if (iVar19 != -1) {
      lVar12 = *param_1;
      lVar9 = 0;
      do {
        lVar1 = lVar12 + (longlong)iVar19 * 0x40;
        if (*(ulonglong *)(lVar12 + (longlong)iVar19 * 0x40) == uVar11) {
          puVar18 = (uint *)(lVar1 + 8);
          if (puVar18 == (uint *)0x0 || lVar1 == 0) goto LAB_1406349c5;
          if ((((*(int *)(lVar1 + 0xc) == 0) || (uVar17 = *puVar18, (int)uVar17 < 0)) ||
              (DAT_14c9647dc <= (int)uVar17)) ||
             (((plVar20 = (longlong *)
                          ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
               plVar20 == (longlong *)0x0 || ((int)plVar20[2] != *(int *)(lVar1 + 0xc))) ||
              (((*(uint *)(plVar20 + 1) & 0x10200000) != 0 || (lVar9 = *plVar20, lVar9 == 0)))))) {
            if (((*(byte *)(lVar1 + 0x30) & 0xc) != 0) || (*(longlong *)(lVar1 + 0x18) == 0))
            goto LAB_1406349c5;
            plVar20 = (longlong *)(lVar1 + 0x10);
            uVar11 = *(ulonglong *)(lVar1 + 0x10);
            if (uVar11 == 0) {
              lVar10 = 0;
              goto LAB_140634abb;
            }
            iVar19 = *(int *)((longlong)plVar13 +
                             (ulonglong)((int)uVar11 + (int)(uVar11 >> 0x20) * 0x17 & uVar14) * 4);
            goto LAB_140634a99;
          }
          break;
        }
        iVar19 = *(int *)(lVar1 + 0x38);
      } while (iVar19 != -1);
      goto LAB_1406349c7;
    }
  }
  goto LAB_1406349c5;
LAB_140634a99:
  if (iVar19 == -1) goto LAB_140634b2d;
  lVar9 = lVar12 + (longlong)iVar19 * 0x40;
  if (*(ulonglong *)(lVar12 + (longlong)iVar19 * 0x40) == uVar11) {
    if ((lVar9 + 8U & 0xfffffffffffffff7) != 0) {
      if ((*(byte *)(lVar9 + 0x30) & 8) != 0) goto LAB_140634b37;
      lVar10 = FUN_140634914(param_1,plVar20);
      lVar12 = lVar10;
      if (lVar10 != 0) goto LAB_140635626;
      FUN_140ebde88(param_1,plVar20);
      goto LAB_1406349c5;
    }
    goto LAB_140634b2d;
  }
  iVar19 = *(int *)(lVar9 + 0x38);
  goto LAB_140634a99;
LAB_140635626:
  lVar9 = lVar12;
  lVar12 = lVar9;
  if (*(longlong *)(lVar9 + 0x20) != 0) goto code_r0x000140635635;
  goto LAB_140635649;
code_r0x000140635635:
  lVar12 = *(longlong *)(lVar9 + 0x20);
  if ((*(uint *)(lVar9 + 8) >> 0x1c & 1) == 0) goto LAB_140635626;
  lVar12 = FUN_142840154(lVar9);
LAB_140635649:
  if (lVar12 == 0) {
    lVar12 = *(longlong *)(lVar9 + 0x20);
    goto LAB_140635626;
  }
  cVar5 = FUN_140ebe022();
  lVar12 = lVar10;
  if (cVar5 == '\0') {
LAB_140635664:
    lVar9 = lVar12;
    lVar12 = lVar9;
    if (*(longlong *)(lVar9 + 0x20) != 0) goto code_r0x000140635673;
    goto LAB_140635684;
  }
LAB_140634abb:
  local_90 = (longlong *)(lVar1 + 0x18);
  lVar12 = *local_90;
  if (DAT_14c927740 == 0) {
    local_b0 = &local_70;
    local_70 = FUN_1449e2820;
    local_a0 = FUN_14081d0ea;
    local_a8 = FUN_14081d0ea;
    local_b8 = &LAB_146856450;
    local_c0 = FUN_1427b121c;
    local_c8 = L"Engine";
    local_d0 = 0;
    local_d8 = 0x10000021;
    uStack_e0 = CONCAT44(uStack_e0._4_4_,8);
    local_e8 = CONCAT44(local_e8._4_4_,0x28);
    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
  }
  bVar21 = false;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  local_e8 = local_e8 & 0xffffffff00000000;
  lVar9 = FUN_140be85e0(DAT_14c927740,lVar10,lVar12,0);
  if ((*param_2 & 1) != 0) {
    bVar21 = *plVar20 == 0;
  }
  if ((longlong *)param_1[0x29] == (longlong *)0x0) {
    bVar3 = 1;
  }
  else {
    bVar3 = (**(code **)(*(longlong *)param_1[0x29] + 0x3c0))();
  }
  if (lVar9 != 0) {
LAB_140634b4c:
    if (bVar21) {
      if (DAT_14c951858 == 0) {
        local_b0 = &local_70;
        local_70 = FUN_1449e2820;
        local_a0 = FUN_14081d0ea;
        local_a8 = FUN_14081d0ea;
        local_b8 = &LAB_1468c5283;
        local_c0 = FUN_142809da0;
        local_c8 = L"Engine";
        local_d0 = 0x400000000;
        local_d8 = 0x10000000;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,8);
        local_e8 = CONCAT44(local_e8._4_4_,0x50);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30)) {
        *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) | 8;
        goto LAB_1406349c5;
      }
      cVar5 = FUN_140ebe022(lVar9);
      if ((cVar5 == '\0') && ((*(uint *)(lVar9 + 0x2c) & 0x100010) == 0)) {
        cVar5 = FUN_140574998();
        if (cVar5 != '\0') {
          uVar14 = *(uint *)(lVar9 + 0xc);
          if ((int)uVar14 < DAT_14c9647dc) {
            lVar12 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
          }
          else {
            lVar12 = 0;
          }
          if ((*(uint *)(lVar12 + 8) & 0x8400000) != 0) goto LAB_140634c49;
        }
        if ((DAT_14c76164b == '\x01') && ((*(byte *)(lVar1 + 0x30) & 1) != 0)) goto LAB_1406349c5;
        FUN_1400021e4(local_90,&local_70);
        pcVar16 = local_70;
        if (local_68 == 0) {
          pcVar16 = (code *)&DAT_149dfb77a;
        }
        local_e8 = 0;
        lVar9 = FUN_1402791b4(0,pcVar16,0,0);
        if (local_70 != (code *)0x0) {
          FUN_1400020a8();
        }
        FUN_140b3b4b4(param_1 + 0x56,param_2);
      }
    }
    lVar12 = DAT_14caf2b88;
    if (*(int *)(lVar1 + 0x20) != 0) {
      iVar19 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar19 == 0x40000002) {
        uVar11 = 0;
      }
      else {
        bVar21 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar19 != 2)) {
          if (iVar19 == 1) {
            DVar7 = FUN_140ad26c0();
            DVar8 = GetCurrentThreadId();
            bVar21 = DVar7 == DVar8;
          }
          else {
            bVar21 = false;
          }
        }
        uVar11 = (ulonglong)(bVar21 ^ 1);
      }
      if (*(int *)(lVar12 + uVar11 * 4) == 0) {
        iVar6 = FUN_140574c42(param_1,lVar9);
        iVar19 = *(int *)(lVar1 + 0x20);
        if ((iVar19 != iVar6) && ((char)param_1[0x2a] == '\x01')) {
          local_88 = (code *)0x0;
          uStack_80 = 0;
          FUN_1435b2c3e(param_1,param_2,&local_88);
          pcVar16 = local_88;
          if ((int)uStack_80 == 0) {
            pcVar16 = (code *)&DAT_149dfb77a;
          }
          local_e8 = CONCAT44(local_e8._4_4_,iVar6);
          FUN_140002266(&local_70,
                        L"GetObjectFromNetGUID: Network checksum mismatch. FullNetGUIDPath: %s, %u, %u"
                        ,pcVar16,iVar19);
          if (local_88 != (code *)0x0) {
            FUN_1400020a8();
          }
          *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) | 8;
          FUN_147be749e(param_1[0x29],10,&local_70);
          if (local_70 != (code *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_1406349c5;
        }
      }
    }
    if (lVar9 == 0) {
      *puVar18 = 0;
      iVar19 = 0;
    }
    else {
      cVar5 = FUN_1435b1704(lVar9,param_1[0x29]);
      if (cVar5 == '\0') goto LAB_1406349c5;
      uVar14 = *(uint *)(lVar9 + 0xc);
      *puVar18 = uVar14;
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar19 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar19 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar19;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar19 = *(int *)(lVar12 + 0x10);
        bVar21 = iVar19 == 0;
        if (bVar21) {
          *(int *)(lVar12 + 0x10) = iVar6;
          iVar19 = 0;
        }
        UNLOCK();
        if (bVar21) {
          iVar19 = iVar6;
        }
      }
    }
    *(int *)(lVar1 + 0xc) = iVar19;
    bVar3 = (bVar3 ^ 1) & DAT_14caf2c28;
    if (((*(double *)(lVar1 + 0x28) != 0.0) || (NAN(*(double *)(lVar1 + 0x28)))) && (bVar3 == 0)) {
      if (lVar9 == 0) {
        uVar11 = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint *)(lVar9 + 0xc);
        uVar11 = (ulonglong)uVar14;
        if ((int)uVar14 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        uVar14 = *(uint *)(lVar12 + 0x10);
        if (*(uint *)(lVar12 + 0x10) == 0) {
          LOCK();
          iVar19 = DAT_14c964868 + 1;
          UNLOCK();
          uVar17 = DAT_14c964868 + 1;
          bVar21 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar19;
          if (bVar21) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar17);
          }
          LOCK();
          uVar14 = *(uint *)(lVar12 + 0x10);
          bVar21 = uVar14 == 0;
          if (bVar21) {
            *(uint *)(lVar12 + 0x10) = uVar17;
            uVar14 = 0;
          }
          UNLOCK();
          if (bVar21) {
            uVar14 = uVar17;
          }
        }
      }
      if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
        plVar13 = param_1 + 0x11;
        if ((longlong *)param_1[0x12] != (longlong *)0x0) {
          plVar13 = (longlong *)param_1[0x12];
        }
        iVar19 = *(int *)((longlong)plVar13 +
                         (ulonglong)((int)param_1[0x13] - 1U & (uVar14 ^ (uint)uVar11)) * 4);
        if (iVar19 != -1) {
          lVar12 = param_1[10];
          local_90 = (longlong *)((ulonglong)local_90 & 0xffffffffffffff00);
          do {
            local_70 = *(code **)(lVar12 + (longlong)iVar19 * 0x18);
            local_88 = (code *)(uVar11 | (ulonglong)uVar14 << 0x20);
            cVar5 = FUN_14472ecf8(&local_70,&local_88);
            if (cVar5 != '\0') goto LAB_1406351ea;
            lVar12 = param_1[10];
            iVar19 = *(int *)(lVar12 + 0x10 + (longlong)iVar19 * 0x18);
            bVar3 = (byte)local_90;
          } while (iVar19 != -1);
        }
      }
    }
    if ((0.0 < *(double *)(lVar1 + 0x28) & bVar3) == 1) {
      *(undefined8 *)(lVar1 + 0x28) = 0;
    }
    plVar13 = param_1 + 10;
    if (lVar9 == 0) {
      uVar17 = 0;
      uVar14 = 0;
    }
    else {
      uVar17 = *(uint *)(lVar9 + 0xc);
      if ((int)uVar17 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      uVar14 = *(uint *)(lVar12 + 0x10);
      if (*(uint *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar19 = DAT_14c964868 + 1;
        UNLOCK();
        uVar15 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar19;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar15);
        }
        LOCK();
        uVar14 = *(uint *)(lVar12 + 0x10);
        bVar21 = uVar14 == 0;
        if (bVar21) {
          *(uint *)(lVar12 + 0x10) = uVar15;
          uVar14 = 0;
        }
        UNLOCK();
        if (bVar21) {
          uVar14 = uVar15;
        }
      }
    }
    FUN_140926ec6(plVar13,&local_70);
    puVar2 = (undefined8 *)CONCAT44(uStack_64,local_68);
    *puVar2 = CONCAT44(uVar14,uVar17);
    puVar2[1] = *param_2;
    *(undefined4 *)(puVar2 + 2) = 0xffffffff;
    local_88 = (code *)CONCAT44(local_88._4_4_,local_70._0_4_);
    local_e8 = 0;
    cVar5 = FUN_140926d2c(plVar13,uVar14 ^ uVar17,puVar2);
    if (cVar5 == '\0') {
      uVar15 = (int)param_1[0xb] - *(int *)((longlong)param_1 + 0x84);
      if (uVar15 < 4) {
        iVar19 = 1;
      }
      else {
        uVar11 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
        lVar12 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar19 = 1 << ((byte)lVar12 & 0x1f);
      }
      if (((int)uVar15 < 1) || (iVar19 <= (int)param_1[0x13])) {
        uVar14 = (int)param_1[0x13] - 1U & (uVar14 ^ uVar17);
        *(uint *)((longlong)puVar2 + 0x14) = uVar14;
        plVar13 = (longlong *)param_1[0x12];
        if ((longlong *)param_1[0x12] == (longlong *)0x0) {
          plVar13 = param_1 + 0x11;
        }
        *(undefined4 *)(puVar2 + 2) =
             *(undefined4 *)
              ((longlong)plVar13 + ((longlong)(int)param_1[0x13] - 1U & (longlong)(int)uVar14) * 4);
        plVar13 = (longlong *)param_1[0x12];
        if ((longlong *)param_1[0x12] == (longlong *)0x0) {
          plVar13 = param_1 + 0x11;
        }
        *(undefined4 *)
         ((longlong)plVar13 + ((longlong)(int)param_1[0x13] - 1U & (longlong)(int)uVar14) * 4) =
             local_88._0_4_;
      }
      else {
        *(int *)(param_1 + 0x13) = iVar19;
        FUN_1409270b0(plVar13);
      }
    }
LAB_1406351ea:
    FUN_1435b2b2c(param_1,*param_2,lVar9);
    goto LAB_1406349c7;
  }
  bVar4 = *(byte *)(lVar1 + 0x30);
  if ((bVar4 & 1) == 0) {
    if (bVar21) {
      cVar5 = FUN_140574998(param_1);
      if (cVar5 == '\0') {
        DAT_14c947e18 = DAT_14c947e18 + 1;
        FUN_14598bb38(&local_70,*local_90);
        local_e8 = 0;
        uStack_e0 = 0;
        lVar9 = FUN_14283dc80(0,&local_70,0,0);
        FUN_140b3b4b4(param_1 + 0x56,param_2);
        DAT_14c947e18 = DAT_14c947e18 + -1;
        goto LAB_140634d5b;
      }
      if ((int)param_1[0x59] != *(int *)((longlong)param_1 + 0x2f4)) {
        lVar12 = *local_90;
        uVar14 = (uint)((ulonglong)lVar12 >> 0x10);
        uVar17 = (uint)lVar12 & 0xffff;
        plVar13 = param_1 + 0x5f;
        if ((longlong *)param_1[0x60] != (longlong *)0x0) {
          plVar13 = (longlong *)param_1[0x60];
        }
        iVar19 = *(int *)((longlong)plVar13 +
                         (ulonglong)
                         ((int)param_1[0x61] - 1U &
                         (int)((ulonglong)lVar12 >> 0x20) + ((uint)lVar12 << 0x10 | uVar17) +
                         (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar17 >> 4)) * 4);
        if (iVar19 != -1) {
          lVar9 = param_1[0x58];
          iVar6 = iVar19;
          do {
            if (*(longlong *)(lVar9 + (longlong)iVar6 * 0x38) == lVar12) {
              pcVar16 = (code *)*param_2;
              goto LAB_14063524c;
            }
            iVar6 = *(int *)((longlong)iVar6 * 0x38 + lVar9 + 0x30);
          } while (iVar6 != -1);
        }
      }
LAB_140634c49:
      FUN_1435b24de(param_1,puVar18,*param_2);
      goto LAB_1406349c5;
    }
    FUN_1400021e4(local_90,&local_70);
    pcVar16 = local_70;
    if (local_68 == 0) {
      pcVar16 = (code *)&DAT_149dfb77a;
    }
    if (DAT_14c927740 == 0) {
      local_b0 = &local_88;
      local_88 = FUN_1449e2820;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b8 = &LAB_146856450;
      local_c0 = FUN_1427b121c;
      local_c8 = L"Engine";
      local_d0 = 0;
      local_d8 = 0x10000021;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,8);
      local_e8 = CONCAT44(local_e8._4_4_,0x28);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    local_d0 = 0;
    uStack_e0 = 0;
    local_d8 = CONCAT31(local_d8._1_3_,1);
    local_e8 = CONCAT44(local_e8._4_4_,2);
    lVar9 = FUN_1412ecd05(DAT_14c927740,lVar10,pcVar16,0);
    if (local_70 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_140574998(param_1);
LAB_140634d5b:
    if (lVar9 != 0) goto LAB_140634b4c;
    bVar4 = *(byte *)(lVar1 + 0x30);
  }
  if ((bVar4 & 2) == 0) {
    *(byte *)(lVar1 + 0x30) = bVar4 | 8;
  }
  goto LAB_1406349c5;
code_r0x000140635673:
  lVar12 = *(longlong *)(lVar9 + 0x20);
  if ((*(uint *)(lVar9 + 8) >> 0x1c & 1) != 0) {
    lVar12 = FUN_142840154(lVar9);
LAB_140635684:
    if (lVar12 == 0) {
      lVar12 = *(longlong *)(lVar9 + 0x20);
      goto LAB_140635664;
    }
    goto LAB_140634abb;
  }
  goto LAB_140635664;
LAB_140634b2d:
  if ((uVar11 & 1) != 0) {
LAB_140634b37:
    *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) | 8;
  }
  goto LAB_1406349c5;
  while (iVar19 = *(int *)(lVar10 + 0x30), iVar19 != -1) {
LAB_14063524c:
    lVar10 = lVar9 + (longlong)iVar19 * 0x38;
    if (*(longlong *)(lVar9 + (longlong)iVar19 * 0x38) == lVar12) goto LAB_140635269;
  }
  lVar10 = 0;
LAB_140635269:
  local_70 = pcVar16;
  FUN_147bee214(lVar10 + 8);
  *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) | 4;
  lVar12 = *(longlong *)(lVar10 + 0x18);
  if (*(longlong *)(lVar10 + 0x18) == 0) {
    lVar12 = lVar10 + 8;
  }
  if (*(code **)(lVar12 + (longlong)(*(int *)(lVar10 + 0x20) + -1) * 8) != pcVar16) {
    if ((int)param_1[0x2e] != *(int *)((longlong)param_1 + 0x19c)) {
      lVar12 = *local_90;
      uVar14 = (uint)((ulonglong)lVar12 >> 0x10);
      uVar17 = (uint)lVar12 & 0xffff;
      plVar13 = param_1 + 0x34;
      if ((longlong *)param_1[0x35] != (longlong *)0x0) {
        plVar13 = (longlong *)param_1[0x35];
      }
      iVar19 = *(int *)((longlong)plVar13 +
                       (ulonglong)
                       ((int)param_1[0x36] - 1U &
                       (int)((ulonglong)lVar12 >> 0x20) + ((uint)lVar12 << 0x10 | uVar17) +
                       (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar17 >> 4)) * 4);
      if (iVar19 != -1) {
        do {
          plVar13 = (longlong *)(param_1[0x2d] + (longlong)iVar19 * 0x18);
          if (*plVar13 == lVar12) goto LAB_14063532d;
          iVar19 = (int)plVar13[2];
        } while (iVar19 != -1);
      }
    }
    plVar13 = (longlong *)0x0;
LAB_14063532d:
    plVar13[1] = (longlong)pcVar16;
  }
LAB_1406349c5:
  lVar9 = 0;
LAB_1406349c7:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9;
}



// FUNCTION 140635702 FUN_140635702 body=889 status=ok
// SIG undefined FUN_140635702(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140635702(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  float fVar7;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  longlong *local_b8 [2];
  longlong *local_a8 [2];
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar3 = FUN_140635a7c();
  if (iVar3 == 0 || param_2 != '\0') {
    FUN_140635c46(0);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c844850) {
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
    plVar6 = DAT_14cadc188;
    if (DAT_14cadc188 != DAT_14c844840) {
      DAT_14cadc188 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        (**(code **)(*DAT_14c844840 + 8))();
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    _DAT_14cadc190 = DAT_14c844848;
  }
  else {
    FUN_140635c46(2);
    iVar4 = FUN_1410e2a25();
    iVar3 = *(int *)(param_1 + 0x5c);
    iVar5 = FUN_140635a7c();
    fVar7 = (float)iVar5 / (float)((iVar4 - iVar3) + iVar5);
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    plVar6 = (longlong *)FUN_140e82300();
    local_98 = (longlong *)*plVar6;
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 8))();
    }
    local_90 = (undefined4)plVar6[1];
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    FUN_1446ddda2(&local_58,"TitleActivateCompilingShadersText",0);
    FUN_140ac6c96(&local_58,&local_98);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    FUN_1413a454c(local_b8,(int)((1.0 - fVar7) * 100.0),0);
    FUN_14023409e(&local_d8,&local_98,1);
    local_58 = CONCAT44(local_58._4_4_,4);
    FUN_14023423e(&local_48,local_b8);
    local_70 = &uStack_38;
    local_78 = &local_58;
    FUN_14010d304(&local_68);
    local_88 = local_d8;
    local_80 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_a8,&local_88,&local_68);
    FUN_14007f2db(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if ((longlong *)CONCAT44(uStack_44,local_48) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_44,local_48) + 0x10))();
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_d0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
        }
      }
    }
    if (local_b8[0] != (longlong *)0x0) {
      (**(code **)(*local_b8[0] + 0x10))();
    }
    FUN_140008f88(&DAT_14cadc188,local_a8);
    if (local_a8[0] != (longlong *)0x0) {
      (**(code **)(*local_a8[0] + 0x10))();
    }
    plVar6 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_c0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140635a7c FUN_140635a7c body=353 status=ok
// SIG undefined FUN_140635a7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140635a7c(void)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  lVar8 = DAT_14ca9f190;
  uVar11 = 0;
  iVar10 = 0;
  if (DAT_14ca9f278 != 0) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar10 = *(int *)(lVar1 + 0xc60);
    if (((iVar10 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar10 == 2)) {
      uVar9 = 0;
    }
    else if (iVar10 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    fVar13 = DAT_14ca9f238;
    lVar3 = DAT_14ca9f190;
    if (0 < _DAT_14ca9f240 && 0.0 < *(float *)(lVar8 + uVar9 * 4)) {
      if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
        uVar9 = 0;
      }
      else {
        bVar4 = FUN_144a61b4f();
        uVar9 = (ulonglong)(bVar4 ^ 1);
      }
      fVar12 = 1.0 - fVar13 / *(float *)(lVar3 + uVar9 * 4);
      fVar13 = 0.0;
      if (0.0 <= fVar12) {
        fVar13 = fVar12;
      }
      iVar10 = (int)(longlong)((float)_DAT_14ca9f240 * fVar13);
    }
    else {
      iVar10 = 0;
      lVar8 = DAT_14ca9f248;
      if (DAT_14ca9f248 < 1) {
        lVar8 = 0;
      }
      if (0 < DAT_14ca9f250) {
        iVar10 = (int)DAT_14ca9f250;
      }
      iVar10 = iVar10 + (int)lVar8;
    }
  }
  iVar5 = FUN_140635bdd();
  if (DAT_14ca9f278 != 0) {
    uVar11 = *(byte *)(DAT_14ca9f278 + 0x140) & 1;
  }
  uVar2 = iVar5 + iVar10;
  if ((uint)(iVar5 + iVar10) <= uVar11) {
    uVar2 = uVar11;
  }
  return uVar2;
}



// FUNCTION 140635bdd FUN_140635bdd body=105 status=ok
// SIG undefined FUN_140635bdd(void)

int FUN_140635bdd(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if ((DAT_14c760d84 != 0) && ((DAT_14ca84f5a & 1) != 0)) {
    if (DAT_14ca807d0 == 1) {
      iVar2 = *(int *)(DAT_14ca811c8 + 0x78) + *(int *)(DAT_14ca811c8 + 0x74);
    }
    else if (DAT_14ca807d0 == 2) {
      iVar2 = *(int *)(DAT_14ca811c8 + 0x78);
    }
    else {
      iVar2 = *(int *)(DAT_14ca811c8 + 0x70);
    }
    if (DAT_14ca807d0 == 1) {
      iVar1 = *(int *)(DAT_14ca811d0 + 0x78) + *(int *)(DAT_14ca811d0 + 0x74);
    }
    else if (DAT_14ca807d0 == 2) {
      iVar1 = *(int *)(DAT_14ca811d0 + 0x78);
    }
    else {
      iVar1 = *(int *)(DAT_14ca811d0 + 0x70);
    }
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}



// FUNCTION 140635c46 FUN_140635c46 body=625 status=ok
// SIG undefined FUN_140635c46(void)

void FUN_140635c46(int param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  
  if (param_1 < 3) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cadc230) {
      FUN_144b3d300(&DAT_14cadc230);
      if (DAT_14cadc230 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cadc228 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.ShaderPipelineCache.PrecompileBatchTime",1);
        _Init_thread_footer(&DAT_14cadc230);
      }
    }
    lVar3 = (longlong)param_1;
    if (DAT_14cadc228 != (longlong *)0x0) {
      fVar4 = (float)(**(code **)(*DAT_14cadc228 + 0xb8))();
      fVar1 = *(float *)(&DAT_14a90e7c4 + lVar3 * 4);
      if ((fVar4 != fVar1) || (NAN(fVar4) || NAN(fVar1))) {
        FUN_140635f48(DAT_14cadc228,fVar1,0x8000000,0);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cadc240) {
      FUN_144b3d300(&DAT_14cadc240);
      if (DAT_14cadc240 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cadc238 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.pso.PrecompileThreadPoolPercentOfHardwareThreads",1);
        _Init_thread_footer(&DAT_14cadc240);
      }
    }
    if (DAT_14cadc238 != (longlong *)0x0) {
      iVar2 = (**(code **)(*DAT_14cadc238 + 0xb0))();
      if (iVar2 != *(int *)(&DAT_14a90e7d0 + lVar3 * 4)) {
        FUN_140635eb8(DAT_14cadc228,*(int *)(&DAT_14a90e7d0 + lVar3 * 4),0x8000000,0);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cadc250) {
      FUN_144b3d300(&DAT_14cadc250);
      if (DAT_14cadc250 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cadc248 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"fx.Niagara.Emitter.ComputePSOPrecacheMode",1);
        _Init_thread_footer(&DAT_14cadc250);
      }
    }
    if (DAT_14cadc248 != (longlong *)0x0) {
      iVar2 = (**(code **)(*DAT_14cadc248 + 0xb0))();
      if (iVar2 != *(int *)(&DAT_14a90e830 + lVar3 * 4)) {
        FUN_140635eb8(DAT_14cadc248,*(int *)(&DAT_14a90e830 + lVar3 * 4),0x8000000,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140635eb8 FUN_140635eb8 body=142 status=ok
// SIG undefined FUN_140635eb8(void)

void FUN_140635eb8(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(&local_38,&DAT_149e063bc,param_2);
  puVar1 = local_38;
  if (local_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  (**(code **)(*param_1 + 0x98))(param_1,puVar1,param_3,param_4);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140635f48 FUN_140635f48 body=148 status=ok
// SIG undefined FUN_140635f48(void)

void FUN_140635f48(longlong *param_1,float param_2,undefined4 param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(&local_38,&DAT_149e14292,(double)param_2);
  puVar1 = local_38;
  if (local_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  (**(code **)(*param_1 + 0x98))(param_1,puVar1,param_3,param_4);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140635fde FUN_140635fde body=48 status=ok
// SIG undefined FUN_140635fde(void)

undefined1 FUN_140635fde(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_14063600e(param_1,1);
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = FUN_14063600e(param_1,2);
  return uVar2;
}



// FUNCTION 14063600e FUN_14063600e body=134 status=ok
// SIG undefined FUN_14063600e(void)

undefined8 FUN_14063600e(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar4 = (longlong)*(int *)(param_1 + 0x118);
  if (lVar4 == 0) {
LAB_140636090:
    uVar6 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x110);
    lVar5 = lVar4 * 8;
    lVar7 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar7);
      if (plVar2 == (longlong *)0x0) {
        if (*(int *)(param_1 + 0x118) < 2) goto LAB_140636090;
      }
      else {
        if (param_2 != 0) {
          cVar3 = (**(code **)(*plVar2 + 0x2c0))(plVar2);
          if (cVar3 == '\0') goto LAB_140636090;
        }
        lVar5 = 0;
        if (*(byte *)(plVar2 + 0x2a) != param_2) goto LAB_140636090;
      }
      lVar7 = lVar7 + 0x28;
    } while (lVar4 * 0x28 != lVar7);
    uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),0 < *(int *)(param_1 + 0x118));
  }
  return uVar6;
}



// FUNCTION 140636094 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

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



// FUNCTION 1406360a8 FUN_1406360a8 body=3612 status=ok
// SIG undefined FUN_1406360a8(void)

void FUN_1406360a8(longlong *param_1,undefined4 param_2,ulonglong *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined1 uVar17;
  int iVar18;
  longlong lVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  byte bVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  ulonglong *puVar26;
  longlong lVar27;
  int iVar28;
  uint uVar29;
  longlong lVar30;
  longlong *plVar31;
  longlong *plVar32;
  ulonglong *puVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong *plVar37;
  int iVar38;
  bool bVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  uint uVar46;
  float fVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  undefined1 auStack_1f8 [32];
  undefined4 *local_1d8;
  float local_1d0;
  int local_1c8;
  ulonglong local_1c0;
  wchar_t *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  code **local_1a0;
  undefined1 *local_198;
  code *local_190;
  undefined4 local_17c;
  longlong *local_178;
  ulonglong local_170;
  ulonglong *local_168;
  longlong *local_160;
  undefined8 local_158;
  longlong local_150;
  int local_144;
  longlong *local_140;
  longlong local_138;
  code *local_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (DAT_14caf7f28 != 0) goto LAB_14063645a;
  if (DAT_14caf84d0 == (longlong *)0x0) {
    local_1a0 = (code **)&local_128;
    local_128._0_4_ = 0x449e2820;
    local_128._4_4_ = 1;
    local_190 = FUN_14081d0ea;
    local_198 = &LAB_145a62952;
    local_1a8 = &LAB_147c8cd45;
    local_1b0 = &LAB_1461468ae;
    local_1b8 = L"Engine";
    local_1c0 = 0;
    local_1c8 = 0x10000006;
    local_1d0 = 1.12104e-44;
    local_1d8 = (undefined4 *)CONCAT44(local_1d8._4_4_,0x218);
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  plVar37 = DAT_14caf84d0;
  lVar19 = DAT_14caf84d0[0x22];
  if (lVar19 == 0) {
    (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
    lVar19 = plVar37[0x22];
  }
  if (((*(char *)(lVar19 + 0xf0) == '\x01') && (param_1[0xd] != 0)) &&
     (lVar19 = FUN_140636f1e(), lVar19 != 0)) {
    iVar18 = FUN_14490d72a(lVar19);
    iVar38 = 0;
    local_17c = 0;
    if (iVar18 == 3) {
      lVar30 = FUN_140636ec6(lVar19);
      if (lVar30 == 0) goto LAB_140636cd7;
      local_17c = (undefined4)
                  CONCAT71((int7)((ulonglong)lVar19 >> 8),*(undefined1 *)(lVar30 + 0x934));
      iVar38 = *(int *)(lVar30 + 0x930);
    }
  }
  else {
LAB_140636cd7:
    iVar38 = 0;
    local_17c = 0;
  }
  if (DAT_14caf84d0 == (longlong *)0x0) {
    local_1a0 = (code **)&local_128;
    local_128._0_4_ = 0x449e2820;
    local_128._4_4_ = 1;
    local_190 = FUN_14081d0ea;
    local_198 = &LAB_145a62952;
    local_1a8 = &LAB_147c8cd45;
    local_1b0 = &LAB_1461468ae;
    local_1b8 = L"Engine";
    local_1c0 = 0;
    local_1c8 = 0x10000006;
    local_1d0 = 1.12104e-44;
    local_1d8 = (undefined4 *)CONCAT44(local_1d8._4_4_,0x218);
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  plVar31 = DAT_14caf84d0;
  plVar37 = (longlong *)DAT_14caf84d0[0x22];
  if (plVar37 == (longlong *)0x0) {
    (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
    plVar37 = (longlong *)plVar31[0x22];
  }
  if (param_1[0xf] != 0) {
    bVar39 = DAT_14c761850 < 0.0;
    uVar29 = *(uint *)(plVar37 + 0x26);
    uVar23 = *(uint *)((longlong)plVar37 + 0x134);
    uVar1 = *(uint *)(plVar37 + 0x27);
    uVar2 = *(uint *)((longlong)plVar37 + 0x13c);
    uVar48 = ~-(uint)bVar39 & (uint)DAT_14c761850;
    bVar14 = DAT_14c761854 < 0.0;
    uVar49 = ~-(uint)bVar14 & (uint)DAT_14c761854;
    bVar15 = DAT_14c761858 < 0.0;
    uVar50 = ~-(uint)bVar15 & (uint)DAT_14c761858;
    bVar16 = DAT_14c76185c < 0.0;
    uVar46 = ~-(uint)bVar16 & (uint)DAT_14c76185c;
    lVar19 = FUN_14496b220();
    param_1[0x10] = lVar19;
    *(uint *)(lVar19 + 0x18) = uVar48 | uVar29 & -(uint)bVar39;
    *(uint *)(param_1[0x10] + 0x1c) = uVar50 | uVar23 & -(uint)bVar15;
    *(uint *)(param_1[0x10] + 0x10) = uVar49 | uVar1 & -(uint)bVar14;
    *(uint *)(param_1[0x10] + 0x14) = uVar46 | uVar2 & -(uint)bVar16;
  }
  fVar47 = 0.0;
  if (((param_1[0xd] != 0) && (lVar19 = FUN_140636f1e(), lVar19 != 0)) &&
     ((lVar19 = FUN_140636ec6(lVar19), lVar19 != 0 && (*(longlong *)(lVar19 + 0x398) != 0)))) {
    fVar47 = *(float *)(*(longlong *)(lVar19 + 0x398) + 0x3d8);
  }
  puVar33 = param_3 + 2;
  iVar18 = (int)param_3[5];
  local_160 = param_1;
  local_144 = iVar38;
  local_140 = plVar37;
  if (iVar18 == 0) {
    uVar35 = 1;
    uVar36 = 0;
    iVar38 = 0;
    iVar28 = 0;
  }
  else {
    puVar26 = (ulonglong *)param_3[4];
    if ((ulonglong *)param_3[4] == (ulonglong *)0x0) {
      puVar26 = puVar33;
    }
    uVar29 = (uint)*puVar26;
    if (uVar29 == 0) {
      iVar38 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar38 = iVar18 + -1;
      }
      uVar36 = 0;
      uVar34 = (ulonglong)(uint)(iVar38 >> 5);
      if (iVar38 >> 5 < 1) {
        uVar34 = uVar36;
      }
      iVar38 = 0;
      do {
        if (uVar34 == uVar36) goto LAB_140636429;
        iVar38 = iVar38 + 0x20;
        uVar29 = *(uint *)((longlong)puVar26 + uVar36 * 4 + 4);
        uVar36 = uVar36 + 1;
      } while (uVar29 == 0);
    }
    else {
      uVar36 = 0;
      iVar38 = 0;
    }
    uVar35 = (ulonglong)(-uVar29 & uVar29);
    uVar34 = uVar35 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar28 = (iVar38 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if (iVar18 <= iVar28) {
      iVar28 = iVar18;
    }
  }
  if (iVar28 < iVar18) {
    local_140 = plVar37 + 0x23;
    uVar29 = 0xffffffff;
    do {
      uVar34 = *param_3;
      lVar19 = (longlong)iVar28;
      lVar30 = lVar19 * 0x100;
      iVar18 = *(int *)(uVar34 + 4 + lVar30);
      if ((((iVar18 != 0) && (uVar23 = *(uint *)(uVar34 + lVar30), -1 < (int)uVar23)) &&
          (((int)uVar23 < DAT_14c9647dc &&
           ((((plVar31 = (longlong *)
                         ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
              plVar31 != (longlong *)0x0 && ((int)plVar31[2] == iVar18)) &&
             ((*(uint *)(plVar31 + 1) & 0x10200000) == 0)) &&
            ((plVar37 = (longlong *)*plVar31, plVar37 != (longlong *)0x0 && (plVar37[0x24] == 0)))))
           ))) && ((local_168 = puVar33,
                   local_150 = (**(code **)(*plVar37 + 0x7b8))
                                         (plVar37,*(undefined8 *)(uVar34 + 0x90 + lVar30),
                                          CONCAT71((int7)((ulonglong)plVar31 >> 8),1),0xffffffff),
                   puVar33 = local_168, local_150 != 0 &&
                   ((longlong *)plVar37[0x15] != (longlong *)0x0)))) {
        local_170 = *param_3;
        local_178 = (longlong *)plVar37[0x15];
        lVar27 = FUN_140637064();
        if (lVar27 == 0) {
          *(undefined4 *)(local_160 + 0xe) = 0;
          iVar18 = 0;
        }
        else {
          uVar23 = *(uint *)(lVar27 + 0xc);
          *(uint *)(local_160 + 0xe) = uVar23;
          if ((int)uVar23 < DAT_14c9647dc) {
            lVar27 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
          }
          else {
            lVar27 = 0;
          }
          iVar18 = *(int *)(lVar27 + 0x10);
          if (*(int *)(lVar27 + 0x10) == 0) {
            LOCK();
            iVar18 = DAT_14c964868 + 1;
            UNLOCK();
            iVar24 = DAT_14c964868 + 1;
            bVar39 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar18;
            if (bVar39) {
              local_158 = CONCAT44(local_158._4_4_,iVar24);
              local_138 = lVar27;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar24);
              lVar27 = local_138;
              iVar24 = (int)local_158;
            }
            LOCK();
            iVar18 = *(int *)(lVar27 + 0x10);
            bVar39 = iVar18 == 0;
            if (bVar39) {
              *(int *)(lVar27 + 0x10) = iVar24;
              iVar18 = 0;
            }
            UNLOCK();
            if (bVar39) {
              iVar18 = iVar24;
            }
          }
        }
        *(int *)((longlong)local_160 + 0x74) = iVar18;
        if ((char)local_178[0x2f] == '\x02') {
          bVar22 = *(byte *)((longlong)plVar37 + 0x2de) & 1;
        }
        else {
          bVar22 = 0;
        }
        puVar33 = local_168;
        if ((((char)local_178[0x2f] == '\x01') || (bVar22 != 0)) &&
           ((*(byte *)(local_170 + 0x80 + lVar30) & 2) != 0)) {
          local_158 = CONCAT44(local_158._4_4_,*(undefined4 *)(local_170 + 0xd0 + lVar30));
          uVar20 = FUN_140637104();
          plVar31 = (longlong *)(**(code **)(*local_178 + 0x288))(local_178,uVar20);
          if (plVar31 == (longlong *)0x0) {
LAB_1406368a9:
            local_f8 = (undefined4)local_140[6];
            local_128._0_4_ = (undefined4)*local_140;
            local_128._4_4_ = *(undefined4 *)((longlong)local_140 + 4);
            uStack_120 = (undefined4)local_140[1];
            uStack_11c = *(undefined4 *)((longlong)local_140 + 0xc);
            local_118 = local_140[2];
            lStack_110 = local_140[3];
            local_108 = local_140[4];
            lStack_100 = local_140[5];
          }
          else {
            local_178 = plVar31;
            uVar20 = FUN_140637104();
            plVar31 = (longlong *)FUN_144718840(local_178,uVar20);
            if (plVar31 == (longlong *)0x0 || local_178 == plVar31) goto LAB_1406368a9;
            (**(code **)(*plVar31 + 0x10))(plVar31,&local_128);
          }
          local_1c8 = (int)local_158 - local_144;
          local_1d8 = (undefined4 *)&local_128;
          local_1c0 = local_1c0 & 0xffffffff00000000;
          local_1d0 = (fVar47 + 0.0) * 0.5 * 0.001;
          uVar17 = (**(code **)(*local_160 + 0x48))
                             (local_160,param_2,local_150,local_170 + lVar30 + 0x10);
          local_170 = CONCAT71(local_170._1_7_,uVar17);
          if (DAT_14c761864 == 0) {
LAB_140636970:
            FUN_1401c9320(plVar37);
          }
          else {
            if (DAT_14cad2858 == 0) {
              local_1a0 = &local_130;
              local_130 = FUN_144a7958c;
              local_190 = FUN_14081d0ea;
              local_198 = &LAB_146395584;
              local_1a8 = &LAB_147a0ba80;
              local_1b0 = &LAB_14575ccce;
              local_1b8 = L"Engine";
              local_1c0 = 0x40000000000;
              local_1c8 = 0x10000004;
              local_1d0 = 2.24208e-44;
              local_1d8 = (undefined4 *)CONCAT44(local_1d8._4_4_,0x1180);
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe)
              ;
            }
            if ((*(int *)(plVar37[2] + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(plVar37[2] + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8)
                != DAT_14cad2858 + 0x30)) goto LAB_140636970;
          }
          puVar33 = local_168;
          if ((char)local_170 != '\0') {
            plVar31 = (longlong *)*param_3;
            iVar18 = *(int *)((longlong)plVar31 + lVar30 + 4);
            uVar34 = 0;
            if (((((iVar18 == 0) || (uVar23 = *(uint *)(plVar31 + lVar19 * 0x20), (int)uVar23 < 0))
                 || (DAT_14c9647dc <= (int)uVar23)) ||
                ((plVar32 = (longlong *)
                            ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
                 plVar32 == (longlong *)0x0 || ((int)plVar32[2] != iVar18)))) ||
               ((*(uint *)(plVar32 + 1) & 0x10200000) != 0)) {
              uVar21 = 0;
            }
            else {
              uVar21 = 0;
              uVar34 = 0;
              if (*plVar32 != 0) {
                uVar23 = *(uint *)(*plVar32 + 0xc);
                uVar34 = (ulonglong)uVar23;
                if ((int)uVar23 < DAT_14c9647dc) {
                  plVar37 = (longlong *)
                            ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8));
                }
                else {
                  plVar37 = (longlong *)0x0;
                }
                uVar21 = (ulonglong)*(uint *)(plVar37 + 2);
                if (*(uint *)(plVar37 + 2) == 0) {
                  LOCK();
                  iVar18 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar24 = DAT_14c964868 + 1;
                  local_150 = CONCAT44(local_150._4_4_,iVar24);
                  bVar39 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar18;
                  local_178 = plVar31;
                  local_170 = uVar34;
                  if (bVar39) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar24);
                  }
                  LOCK();
                  uVar23 = *(uint *)(plVar37 + 2);
                  bVar39 = uVar23 == 0;
                  if (bVar39) {
                    *(uint *)(plVar37 + 2) = (uint)local_150;
                    uVar23 = 0;
                  }
                  UNLOCK();
                  if (bVar39) {
                    uVar23 = (uint)local_150;
                  }
                  uVar21 = (ulonglong)uVar23;
                  uVar34 = local_170;
                  plVar31 = local_178;
                }
              }
            }
            (**(code **)(*local_160 + 0x30))
                      (local_160,uVar34 & 0xffffffff | uVar21 << 0x20,plVar31 + lVar19 * 0x20 + 2);
            FUN_1406371ea(param_3,iVar28);
            puVar33 = local_168;
          }
        }
      }
      uVar29 = uVar29 & ~(uint)uVar35;
      puVar26 = (ulonglong *)param_3[4];
      if ((ulonglong *)param_3[4] == (ulonglong *)0x0) {
        puVar26 = puVar33;
      }
      iVar18 = (int)param_3[5];
      iVar28 = (int)uVar36;
      lVar19 = (longlong)iVar28;
      uVar23 = *(uint *)((longlong)puVar26 + lVar19 * 4) & uVar29;
      if (uVar23 == 0) {
        iVar24 = iVar18 + 0x1e;
        if (-1 < iVar18 + -1) {
          iVar24 = iVar18 + -1;
        }
        iVar24 = iVar24 >> 5;
        iVar25 = iVar24;
        if (iVar24 < iVar28) {
          iVar25 = iVar28;
        }
        if (iVar24 <= iVar28) break;
        lVar30 = 0;
        while( true ) {
          iVar38 = iVar38 + 0x20;
          uVar23 = *(uint *)((longlong)puVar26 + lVar30 * 4 + lVar19 * 4 + 4);
          if (uVar23 != 0) break;
          lVar30 = lVar30 + 1;
          if (iVar25 - lVar19 == lVar30) goto LAB_140636429;
        }
        uVar36 = (ulonglong)(iVar28 + (int)lVar30 + 1);
        uVar29 = 0xffffffff;
      }
      uVar35 = (ulonglong)(-uVar23 & uVar23);
      uVar34 = uVar35 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar34 != 0) {
        for (; uVar34 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar28 = (iVar38 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    } while (iVar28 < iVar18);
  }
LAB_140636429:
  if ((longlong)(int)local_160[0xc] != 0) {
    lVar19 = local_160[0xb];
    puVar33 = (ulonglong *)((longlong)(int)local_160[0xc] * 0xe0);
    puVar26 = (ulonglong *)0x0;
    local_140 = (longlong *)CONCAT44(local_140._4_4_,fVar47 * 0.5 * 0.001);
    do {
      uVar36 = *(ulonglong *)(lVar19 + 200 + (longlong)puVar26);
      uVar20 = *(undefined8 *)(lVar19 + (longlong)puVar26);
      uVar3 = *(undefined8 *)(lVar19 + 8 + (longlong)puVar26);
      uVar4 = *(undefined8 *)(lVar19 + 0x10 + (longlong)puVar26);
      uVar13 = *(undefined8 *)(lVar19 + 0x18 + (longlong)puVar26);
      uVar5 = *(undefined8 *)(lVar19 + 0x20 + (longlong)puVar26);
      uVar6 = *(undefined8 *)(lVar19 + 0x28 + (longlong)puVar26);
      uVar7 = *(undefined8 *)(lVar19 + 0x30 + (longlong)puVar26);
      uVar8 = *(undefined8 *)(lVar19 + 0x38 + (longlong)puVar26);
      uVar9 = *(undefined8 *)(lVar19 + 0x40 + (longlong)puVar26);
      uVar10 = *(undefined8 *)(lVar19 + 0x48 + (longlong)puVar26);
      uVar11 = *(undefined8 *)(lVar19 + 0x50 + (longlong)puVar26);
      plVar31 = *(longlong **)(lVar19 + 0x58 + (longlong)puVar26);
      uVar40 = SUB84(plVar31,0);
      uVar41 = (undefined4)((ulonglong)plVar31 >> 0x20);
      lVar30 = *(longlong *)(lVar19 + 0x60 + (longlong)puVar26);
      uVar42 = (undefined4)lVar30;
      uVar43 = (undefined4)((ulonglong)lVar30 >> 0x20);
      uVar12 = *(undefined8 *)(lVar19 + 0x68 + (longlong)puVar26);
      uVar44 = (undefined4)uVar12;
      uVar45 = (undefined4)((ulonglong)uVar12 >> 0x20);
      uVar17 = *(undefined1 *)(lVar19 + 0x70 + (longlong)puVar26);
      local_128._4_3_ = (undefined3)((uint)*(undefined4 *)(lVar19 + 0x74 + (longlong)puVar26) >> 8);
      local_128._0_4_ = *(undefined4 *)(lVar19 + 0x71 + (longlong)puVar26);
      bVar22 = *(byte *)(lVar19 + 0xd0 + (longlong)puVar26);
      uVar29 = *(uint *)(lVar19 + 0xc0 + (longlong)puVar26);
      lVar27 = local_160[0x10];
      iVar38 = *(int *)(lVar27 + 0x28);
      *(uint *)(lVar27 + 0x28) = iVar38 + 1U;
      if (*(uint *)(lVar27 + 0x2c) < iVar38 + 1U) {
        local_138 = CONCAT71(local_138._1_7_,uVar17);
        local_178 = plVar31;
        local_170 = uVar36;
        local_168 = puVar33;
        local_158 = uVar12;
        local_150 = lVar30;
        FUN_1406372c0((longlong *)(lVar27 + 0x20),iVar38);
        uVar44 = (undefined4)local_158;
        uVar45 = (undefined4)((ulonglong)local_158 >> 0x20);
        uVar42 = (undefined4)local_150;
        uVar43 = (undefined4)((ulonglong)local_150 >> 0x20);
        uVar40 = SUB84(local_178,0);
        uVar41 = (undefined4)((ulonglong)local_178 >> 0x20);
        puVar33 = local_168;
        uVar36 = local_170;
        uVar17 = (undefined1)local_138;
      }
      plVar37 = (longlong *)
                ((ulonglong)uVar29 << 0x20 |
                (ulonglong)bVar22 | (ulonglong)((uint)plVar37 & 0xffffff00));
      lVar30 = *(longlong *)(lVar27 + 0x20);
      lVar27 = (longlong)iVar38 * 0xc0;
      *(undefined8 *)(lVar30 + lVar27) = uVar20;
      *(undefined8 *)(lVar30 + 8 + lVar27) = uVar3;
      *(undefined8 *)(lVar30 + 0x10 + lVar27) = uVar4;
      *(undefined8 *)(lVar30 + 0x18 + lVar27) = uVar13;
      *(undefined8 *)(lVar30 + 0x20 + lVar27) = uVar5;
      *(undefined8 *)(lVar30 + 0x28 + lVar27) = uVar6;
      *(undefined8 *)(lVar30 + 0x30 + lVar27) = uVar7;
      *(undefined8 *)(lVar30 + 0x38 + lVar27) = uVar8;
      *(undefined8 *)(lVar30 + 0x40 + lVar27) = uVar9;
      *(undefined8 *)(lVar30 + 0x48 + lVar27) = uVar10;
      *(undefined8 *)(lVar30 + 0x50 + lVar27) = uVar11;
      *(ulonglong *)(lVar30 + 0x58 + lVar27) = CONCAT44(uVar41,uVar40);
      *(ulonglong *)(lVar30 + 0x60 + lVar27) = CONCAT44(uVar43,uVar42);
      *(ulonglong *)(lVar30 + 0x68 + lVar27) = CONCAT44(uVar45,uVar44);
      *(undefined1 *)(lVar30 + 0x70 + lVar27) = uVar17;
      *(ulonglong *)(lVar30 + 0x71 + lVar27) = CONCAT44(local_128._4_4_,(undefined4)local_128);
      *(ulonglong *)(lVar30 + 0x78 + lVar27) =
           CONCAT35((undefined3)uStack_11c,CONCAT41(uStack_120,local_128._7_1_));
      *(undefined8 *)(lVar30 + 0x80 + lVar27) = 0;
      *(ulonglong *)(lVar30 + 0x88 + lVar27) = uVar36;
      *(undefined1 *)(lVar30 + 0xa0 + lVar27) = 0;
      *(longlong **)(lVar30 + 0xa4 + lVar27) = plVar37;
      *(char *)(lVar30 + 0xb0 + lVar27) = (char)local_17c;
      if ((char)local_17c != '\0') {
        *(int *)(lVar30 + lVar27 + 0xac) = local_144;
      }
      *(undefined4 *)(lVar30 + lVar27 + 0xb4) = local_140._0_4_;
      puVar26 = puVar26 + 0x1c;
    } while (puVar33 != puVar26);
  }
  plVar37 = local_160;
  *(undefined4 *)(local_160 + 0xc) = 0;
  if (*(int *)((longlong)local_160 + 100) < 0) {
    FUN_147ca4ba8(local_160 + 0xb);
  }
  plVar37[0x10] = 0;
LAB_14063645a:
  if ((local_f0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140636ec6 FUN_140636ec6 body=88 status=ok
// SIG undefined FUN_140636ec6(void)

undefined8 FUN_140636ec6(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (0 < *(int *)(param_1 + 0x238)) {
    uVar1 = (*(uint **)(param_1 + 0x230))[1];
    if (uVar1 != 0) {
      uVar2 = **(uint **)(param_1 + 0x230);
      uVar3 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar4 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if (puVar4 == (undefined8 *)0x0) {
          return 0;
        }
        if (*(uint *)(puVar4 + 2) != uVar1) {
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
  return 0;
}



// FUNCTION 140636f1e FUN_140636f1e body=275 status=ok
// SIG undefined FUN_140636f1e(void)

longlong FUN_140636f1e(longlong param_1)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    if (DAT_14cb10130 == 0) {
      local_30 = &local_18;
      local_18 = FUN_140754f84;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_147da9a76;
      local_40 = FUN_1409f3105;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000000;
      local_60 = 8;
      local_68 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) goto LAB_140636f71;
  }
  lVar1 = 0;
LAB_140636f71:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140637034 FUN_140637034 body=47 status=ok
// SIG undefined FUN_140637034(void)

void FUN_140637034(longlong *param_1)

{
  (**(code **)(*param_1 + 0x40))();
  return;
}



// FUNCTION 140637064 FUN_140637064 body=160 status=ok
// SIG undefined FUN_140637064(void)

ulonglong FUN_140637064(ulonglong param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (DAT_14caf7940 != DAT_14caf796c) {
    uVar2 = ((uint)(uint7)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar4 = &DAT_14caf7970;
    if (DAT_14caf7978 != (undefined *)0x0) {
      puVar4 = DAT_14caf7978;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)(DAT_14caf7980 - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (ulonglong *)(DAT_14caf7938 + (longlong)iVar3 * 0x18);
        if (*puVar1 == param_1) {
          if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
            return 0;
          }
          return puVar1[1];
        }
        iVar3 = (int)puVar1[2];
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 140637104 FUN_140637104 body=228 status=ok
// SIG undefined FUN_140637104(void)

longlong FUN_140637104(void)

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
  if (DAT_14cac7048 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14789924d;
    local_40 = FUN_146391833;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"RigidBodyErrorCorrectionProviderInterface",&DAT_14cac7048,
                  &DAT_14789924c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac7048;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406371ea FUN_1406371ea body=98 status=ok
// SIG undefined FUN_1406371ea(void)

void FUN_1406371ea(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xf4 + (longlong)param_2 * 0x100);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x100 + 0xf0);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x100 + 0xf0);
  FUN_14063724c();
  return;
}



// FUNCTION 14063724c FUN_14063724c body=116 status=ok
// SIG undefined FUN_14063724c(void)

void FUN_14063724c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x100) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x100) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x100 + 4) = uVar4;
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



// FUNCTION 1406372c0 FUN_1406372c0 body=275 status=ok
// SIG undefined FUN_1406372c0(void)

void FUN_1406372c0(longlong param_1,int param_2)

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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1406373d4 FUN_1406373d4 body=5549 status=ok
// SIG undefined FUN_1406373d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1406373d4(longlong param_1,float param_2,uint *param_3,double *param_4,uint *param_5,
                       float param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  char cVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined1 *puVar21;
  longlong lVar22;
  longlong lVar23;
  code *pcVar24;
  longlong *plVar25;
  char *pcVar26;
  ulonglong uVar27;
  double ***pppdVar28;
  double *pdVar29;
  double **ppdVar30;
  double *pdVar31;
  undefined8 *puVar32;
  float fVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined4 uVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  double dVar43;
  uint uVar44;
  float fVar45;
  double dVar46;
  double **ppdVar47;
  uint uVar48;
  uint uVar49;
  double dVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  undefined1 auStack_598 [32];
  double *local_578;
  float *local_570;
  double *local_568;
  float *local_560;
  float *local_558;
  undefined1 local_544;
  undefined1 local_543;
  char local_542;
  byte local_541;
  double local_540;
  double local_538;
  double local_530;
  undefined1 local_528 [16];
  float local_510;
  float local_50c;
  undefined1 local_508 [16];
  double local_4f8;
  double dStack_4f0;
  double local_4e0;
  double local_4d8;
  double local_4d0;
  double local_4c8;
  undefined8 uStack_4c0;
  double local_4b8;
  undefined8 uStack_4b0;
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  double *local_3d8;
  code ***local_3d0;
  double local_3c8;
  double **local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  undefined1 local_358 [16];
  double local_348;
  undefined8 uStack_340;
  undefined1 local_338 [16];
  undefined8 local_328;
  undefined8 uStack_320;
  float local_318;
  float local_314;
  double local_310;
  double local_308;
  double local_300;
  float local_2f4;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double **local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  double **local_290;
  undefined1 **local_288;
  undefined1 local_279;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  undefined8 local_228;
  undefined8 uStack_220;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double *local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188;
  double local_178 [4];
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  byte local_108;
  undefined4 local_107;
  undefined1 uStack_104;
  undefined3 uStack_103;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_598;
  if (((param_3[2] & 1) == 0) || (param_3[1] == 0)) goto LAB_140637461;
  uVar52 = *param_3;
  uVar27 = 0;
  if (((int)uVar52 < 0) || (DAT_14c9647dc <= (int)uVar52)) goto LAB_140637463;
  plVar25 = (longlong *)
            ((ulonglong)((uVar52 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar52 >> 0x10) * 8));
  if (((plVar25 != (longlong *)0x0) && (*(uint *)(plVar25 + 2) == param_3[1])) &&
     ((*(uint *)(plVar25 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar25 + 1) & 0x10200000) == 0) {
      lVar20 = *plVar25;
    }
    else {
      lVar20 = 0;
    }
    lVar22 = DAT_14c997cc0;
    if (DAT_14c997cc0 == 0) {
      plVar25 = (longlong *)FUN_145a62958();
      lVar22 = plVar25[0x22];
      if (lVar22 == 0) {
        (**(code **)(*plVar25 + 1000))(plVar25);
        lVar22 = plVar25[0x22];
      }
    }
    cVar17 = *(char *)(lVar22 + 0x75);
    if (*(char *)(lVar20 + 0x31) != '\0') {
      cVar17 = *(char *)(lVar20 + 0x31);
    }
    if ((cVar17 != '\x03') && (*(longlong *)(param_3 + 0x4e) != 0)) {
      pdVar29 = param_4;
      pdVar31 = local_178;
      for (lVar20 = 0x10; dVar43 = dStack_140, dVar41 = local_148, dVar38 = dStack_150,
          dVar12 = local_158, lVar20 != 0; lVar20 = lVar20 + -1) {
        *pdVar31 = *pdVar29;
        pdVar29 = pdVar29 + 1;
        pdVar31 = pdVar31 + 1;
      }
      uVar27 = CONCAT71((int7)((ulonglong)pdVar29 >> 8),1);
      if ((((param_3[2] & 1) == 0) || (param_3[1] == 0)) ||
         ((uVar52 = *param_3, (int)uVar52 < 0 ||
          ((((DAT_14c9647dc <= (int)uVar52 ||
             (plVar25 = (longlong *)
                        ((ulonglong)((uVar52 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar52 >> 0x10) * 8)),
             plVar25 == (longlong *)0x0)) || (*(uint *)(plVar25 + 2) != param_3[1])) ||
           ((*(uint *)(plVar25 + 1) & 0x10200000) != 0)))))) goto LAB_140637463;
      if ((*(uint *)(plVar25 + 1) & 0x10200000) == 0) {
        lVar20 = *plVar25;
      }
      else {
        lVar20 = 0;
      }
      lVar22 = DAT_14c997cc0;
      if (DAT_14c997cc0 == 0) {
        plVar25 = (longlong *)FUN_145a62958();
        lVar22 = plVar25[0x22];
        if (lVar22 == 0) {
          (**(code **)(*plVar25 + 1000))(plVar25);
          lVar22 = plVar25[0x22];
        }
      }
      cVar17 = *(char *)(lVar22 + 0x75);
      if (*(char *)(lVar20 + 0x31) != '\0') {
        cVar17 = *(char *)(lVar20 + 0x31);
      }
      if (((cVar17 == '\x03') ||
          (fVar33 = (float)(dVar43 * dVar43 + dVar41 * dVar41 + dVar12 * dVar12 + dVar38 * dVar38),
          fVar33 < 0.0001)) ||
         ((puVar1 = param_3 + 0x4e, *(longlong *)puVar1 == 0 || (0.0001 < ABS(fVar33 + -1.0)))))
      goto LAB_140637463;
      bVar7 = DAT_14c76182c < 0.0;
      uVar52 = *param_5;
      uVar53 = param_5[2];
      uVar2 = param_5[3];
      uVar44 = ~-(uint)bVar7 & (uint)DAT_14c76182c;
      fVar33 = (float)(~-(uint)(0.0 < DAT_14c761830) & param_5[1] |
                      (uint)DAT_14c761830 & -(uint)(0.0 < DAT_14c761830));
      bVar8 = DAT_14c761834 < 0.0;
      uVar48 = ~-(uint)bVar8 & (uint)DAT_14c761834;
      bVar9 = DAT_14c761838 < 0.0;
      uVar51 = ~-(uint)bVar9 & (uint)DAT_14c761838;
      bVar10 = DAT_14c76184c < 0.0;
      uVar3 = param_5[4];
      uVar49 = ~-(uint)bVar10 & (uint)DAT_14c76184c;
      local_3f8 = ZEXT416(DAT_14c76183c);
      local_3e8 = ZEXT416(param_5[10]);
      local_508 = ZEXT416(DAT_14c761840);
      local_528 = ZEXT416(param_5[0xb]);
      local_418 = ZEXT416(DAT_14c761844);
      local_408 = ZEXT416(param_5[0xc]);
      local_468 = ZEXT416(DAT_14c761850);
      local_4a8 = ZEXT416(~-(uint)(DAT_14c761848 < 0.0) & (uint)DAT_14c761848 |
                          param_5[5] & -(uint)(DAT_14c761848 < 0.0));
      local_478 = ZEXT416(param_5[6]);
      local_542 = DAT_14cafa558;
      local_543 = DAT_14cafa559;
      local_544 = DAT_14c76190c;
      local_498 = ZEXT416(DAT_14c761854);
      local_488 = ZEXT416(param_5[8]);
      local_458 = ZEXT416(DAT_14c761858);
      local_448 = ZEXT416(param_5[7]);
      local_438 = ZEXT416(DAT_14c76185c);
      local_428 = ZEXT416(param_5[9]);
      if ((((*(int *)(param_1 + 0x74) != 0) && (uVar4 = *(uint *)(param_1 + 0x70), -1 < (int)uVar4))
          && ((int)uVar4 < DAT_14c9647dc)) &&
         ((((plVar25 = (longlong *)
                       ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
            plVar25 != (longlong *)0x0 && ((int)plVar25[2] == *(int *)(param_1 + 0x74))) &&
           ((*(uint *)(plVar25 + 1) & 0x10200000) == 0)) && (lVar20 = *plVar25, lVar20 != 0)))) {
        lVar22 = 0;
        if ((*(uint *)(plVar25 + 1) & 0x10200000) == 0) {
          lVar22 = lVar20;
        }
        if ((*(byte *)(lVar22 + 0x118) & 1) != 0) {
          local_4a8 = ZEXT416(*(uint *)(lVar22 + 0x11c));
        }
        lVar22 = 0;
        if ((*(uint *)(plVar25 + 1) & 0x10200000) == 0) {
          lVar22 = lVar20;
        }
        pcVar26 = &DAT_14cafa558;
        if ((*(byte *)(lVar22 + 0x120) & 1) != 0) {
          pcVar26 = (char *)(lVar22 + 0x124);
        }
        local_542 = *pcVar26;
        lVar22 = 0;
        if ((*(uint *)(plVar25 + 1) & 0x10200000) == 0) {
          lVar22 = lVar20;
        }
        puVar21 = &DAT_14cafa559;
        if ((*(byte *)(lVar22 + 0x128) & 1) != 0) {
          puVar21 = (undefined1 *)(lVar22 + 300);
        }
        local_543 = *puVar21;
        lVar22 = 0;
        if ((*(uint *)(plVar25 + 1) & 0x10200000) == 0) {
          lVar22 = lVar20;
        }
        puVar21 = &DAT_14c76190c;
        if ((*(byte *)(lVar22 + 0x130) & 1) != 0) {
          puVar21 = (undefined1 *)(lVar22 + 0x134);
        }
        local_544 = *puVar21;
      }
      ppdVar30 = &local_1d8;
      local_1f8 = 0.0;
      dStack_1f0 = 0.0;
      local_1e8 = 0.0;
      local_1d8 = (double *)0x0;
      dStack_1d0 = 0.0;
      local_1c8 = 0.0;
      local_1c0 = 1.0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
      FUN_140202650(param_3,&local_1f8);
      if (fVar33 <= param_6) {
        param_6 = fVar33;
      }
      local_510 = param_6;
      if (param_6 <= 0.0) {
        local_510 = 0.0;
      }
      fVar45 = (float)(uVar44 | uVar52 & -(uint)bVar7) * local_510;
      dVar12 = (double)fVar45;
      local_4d0 = local_128;
      local_4d8 = local_130;
      local_4e0 = local_138;
      local_4c8 = local_128 * dVar12 + local_178[2];
      local_4b8 = local_130 * dVar12 + local_178[1];
      dVar38 = dVar12 * local_138 + local_178[0];
      uStack_4b0 = 0;
      local_530 = local_118;
      local_538 = local_120;
      local_540 = local_110;
      fVar33 = (float)SQRT(local_110 * local_110 + local_120 * local_120 + local_118 * local_118);
      uStack_4c0 = 0;
      dVar43 = DAT_14c8464f0;
      dVar41 = DAT_14c8464e8;
      dVar12 = DAT_14c8464e0;
      if (1e-08 < fVar33) {
        dVar12 = (double)(1.0 / fVar33);
        dVar43 = local_110 * dVar12;
        dVar41 = local_118 * dVar12;
        dVar12 = dVar12 * local_120;
      }
      dVar46 = (double)(fVar45 * fVar33 * 0.017453292) * 0.5;
      local_2b8 = dVar38;
      dStack_2b0 = local_4b8;
      local_2a8 = local_4c8;
      dVar34 = sin(dVar46);
      dVar46 = cos(dVar46);
      dVar12 = dVar12 * dVar34;
      dVar41 = dVar41 * dVar34;
      dVar43 = dVar43 * dVar34;
      ppdVar47 = (double **)
                 (dStack_150 * dVar43 * -1.0 +
                 local_148 * dVar41 + dVar12 * dStack_140 * 1.0 + dVar46 * local_158);
      dVar34 = local_158 * dVar43 * 1.0 +
               dStack_140 * dVar41 + dVar12 * local_148 * -1.0 + dVar46 * dStack_150;
      local_4f8 = dStack_140 * dVar43 * 1.0 +
                  ((dVar12 * dStack_150 * 1.0 + dVar46 * local_148) - dVar41 * local_158);
      dStack_4f0 = local_148 * dVar43 * -1.0 +
                   ((dVar12 * local_158 * -1.0 + dVar46 * dStack_140) - dVar41 * dStack_150);
      local_558 = &local_318;
      local_560 = &local_314;
      local_568 = &local_310;
      local_570 = &local_2f4;
      local_578 = &local_2f0;
      local_2d8 = ppdVar47;
      dStack_2d0 = dVar34;
      local_2c8 = local_4f8;
      dStack_2c0 = dStack_4f0;
      FUN_14091cfc4(&local_1f8,ppdVar30);
      local_541 = local_108;
      local_378 = &local_3d8;
      local_3d8 = (double *)((ulonglong)local_3d8 & 0xffffffffffffff00);
      local_278._8_8_ = &local_378;
      local_278._0_8_ = &LAB_143622136;
      FUN_1448e6002(puVar1);
      auVar35 = local_278;
      dVar12 = dStack_4f0;
      local_50c = local_2f4;
      if ((float)(uVar49 | uVar3 & -(uint)bVar10) <=
          (float)(uVar48 | uVar53 & -(uint)bVar8) * local_2f4 +
          (float)(uVar51 | uVar2 & -(uint)bVar9) * local_318) {
        uVar53 = local_528._0_4_ & -(uint)((float)local_508._0_4_ < 0.0);
        uVar52 = ~-(uint)((float)local_508._0_4_ < 0.0) & local_508._0_4_;
        dVar41 = param_4[0x14] - param_4[0x17];
        dVar46 = param_4[0x13] - param_4[0x16];
        dVar43 = param_4[0x12] - param_4[0x15];
        dVar50 = dVar41 * dVar41 + dVar43 * dVar43 + dVar46 * dVar46;
        if (((dVar50 != 1.0) || (dVar13 = dVar41, dVar14 = dVar46, dVar15 = dVar43, NAN(dVar50))) &&
           (dVar13 = DAT_14c8464f0, dVar14 = DAT_14c8464e8, dVar15 = DAT_14c8464e0,
           9.99999993922529e-09 <= dVar50)) {
          dVar50 = 1.0 / SQRT(dVar50);
          dVar13 = dVar41 * dVar50;
          dVar14 = dVar46 * dVar50;
          dVar15 = dVar50 * dVar43;
        }
        local_528._8_8_ = 0;
        local_528._0_8_ = local_1e8;
        local_508._8_8_ = 0;
        local_508._0_8_ = dStack_1f0;
        if ((float)(uVar52 | uVar53) <=
            (float)((local_1f8 - param_4[0x15]) * dVar15 + (dStack_1f0 - param_4[0x16]) * dVar14 +
                   (local_1e8 - param_4[0x17]) * dVar13)) {
LAB_140637f20:
          fVar33 = *(float *)((longlong)param_4 + 0x8c) - param_2;
          if (fVar33 <= 0.0) {
            fVar33 = 0.0;
          }
        }
        else {
          if ((float)(dVar41 * (local_4c8 - local_1e8) +
                     dVar43 * (dVar38 - local_1f8) + dVar46 * (local_4b8 - dStack_1f0)) <=
              (float)(~-(uint)((float)local_418._0_4_ < 0.0) & local_418._0_4_ |
                     local_408._0_4_ & -(uint)((float)local_418._0_4_ < 0.0))) goto LAB_140637f20;
          fVar33 = *(float *)((longlong)param_4 + 0x8c) + param_2;
        }
        *(float *)((longlong)param_4 + 0x8c) = fVar33;
        auVar11 = _DAT_149934d80;
        uVar36 = SUB84(local_4b8,0);
        uVar37 = (undefined4)((ulonglong)local_4b8 >> 0x20);
        if ((float)local_4a8._0_4_ < local_2f4) {
LAB_140638166:
          local_378 = ppdVar47;
          dStack_370 = dVar34;
          local_368 = local_4f8;
          dStack_360 = dStack_4f0;
          local_358._8_4_ = uVar36;
          local_358._0_8_ = dVar38;
          local_358._12_4_ = uVar37;
          local_348 = local_4c8;
          uStack_340 = 0;
          local_338._8_8_ = 0x3ff0000000000000;
          local_338._0_8_ = 0x3ff0000000000000;
          local_328 = 0x3ff0000000000000;
          uStack_320 = 0;
LAB_1406381c4:
          uStack_320 = 0;
          local_328 = 0x3ff0000000000000;
          uStack_340 = 0;
          local_348 = local_4c8;
          dStack_360 = dStack_4f0;
          local_368 = local_4f8;
          *(undefined4 *)((longlong)param_4 + 0x8c) = 0;
          local_378 = ppdVar47;
          dStack_370 = dVar34;
          if (((*(longlong *)(param_1 + 0x78) == 0) || (local_542 == '\0')) ||
             ((lVar20 = *(longlong *)puVar1, lVar20 == 0 ||
              (lVar22 = *(longlong *)(lVar20 + 8), lVar22 == 0)))) {
            FUN_140043566(param_3,&local_378,2,0);
            local_290 = (double **)((ulonglong)local_290 & 0xffffffffffffff00);
            ppdVar30 = &local_3d8;
            local_278._8_8_ = &local_3d8;
            local_278._0_8_ = FUN_14362224a;
            local_3d8 = &local_138;
            local_3d0 = (code ***)&local_290;
            FUN_144966906(puVar1,local_278);
            local_278._8_8_ = local_118 * 0.01745329238474369;
            local_278._0_8_ = local_120 * 0.01745329238474369;
            local_268._0_8_ = local_110 * 0.01745329238474369;
            local_288 = &local_2a0;
            local_2a0 = (undefined1 *)((ulonglong)local_2a0 & 0xffffffffffffff00);
            local_3d8 = (double *)FUN_143622336;
            local_3d0 = (code ***)&local_290;
            local_290 = (double **)local_278;
            FUN_144966906(puVar1,ppdVar30);
          }
          else {
            pppdVar28 = &local_378;
            ppdVar30 = &local_3d8;
            for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
              *ppdVar30 = (double *)*pppdVar28;
              pppdVar28 = pppdVar28 + 1;
              ppdVar30 = ppdVar30 + 1;
            }
            pdVar29 = local_178;
            pdVar31 = (double *)local_278;
            for (lVar23 = 0xf; lVar23 != 0; lVar23 = lVar23 + -1) {
              *pdVar31 = *pdVar29;
              pdVar29 = pdVar29 + 1;
              pdVar31 = pdVar31 + 1;
            }
            puVar18 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
            puVar19 = (undefined8 *)FUN_14001cc68(0x110,0x10);
            *puVar19 = &PTR_LAB_14aa4cec0;
            puVar19[2] = lVar22;
            puVar19[3] = lVar20;
            ppdVar30 = &local_3d8;
            puVar32 = puVar19 + 4;
            for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
              *puVar32 = *ppdVar30;
              ppdVar30 = ppdVar30 + 1;
              puVar32 = puVar32 + 1;
            }
            ppdVar30 = (double **)local_278;
            puVar32 = puVar19 + 0x10;
            for (lVar20 = 0xf; lVar20 != 0; lVar20 = lVar20 + -1) {
              *puVar32 = *ppdVar30;
              ppdVar30 = ppdVar30 + 1;
              puVar32 = puVar32 + 1;
            }
            *(undefined1 *)(puVar19 + 0x20) = local_543;
            *(undefined1 *)((longlong)puVar19 + 0x101) = local_544;
            pcVar24 = FUN_143651ef8;
            if (puVar19 + 2 == (longlong *)0x0) {
              pcVar24 = (code *)0x0;
            }
            *(undefined2 *)(puVar18 + 1) = 0;
            puVar18[2] = 0;
            puVar18[3] = 0;
            puVar18[4] = 0;
            puVar18[5] = 0;
            *(undefined2 *)(puVar18 + 8) = 1;
            *puVar18 = &PTR_FUN_149f45dc0;
            puVar18[10] = pcVar24;
            puVar18[0xc] = puVar19;
            puVar18[0x12] = 0;
            puVar18[0x14] = 0;
            *(undefined1 *)(puVar18 + 0x1a) = 0;
            FUN_1406e6496(lVar22 + 0x70,puVar18);
          }
          goto LAB_1406383db;
        }
        if ((float)(~-(uint)((float)local_3f8._0_4_ < 0.0) & local_3f8._0_4_ |
                   local_3e8._0_4_ & -(uint)((float)local_3f8._0_4_ < 0.0)) < fVar33)
        goto LAB_140638166;
        local_378 = ppdVar47;
        dStack_370 = dVar34;
        local_368 = local_4f8;
        dStack_360 = dStack_4f0;
        local_358._8_4_ = uVar36;
        local_358._0_8_ = dVar38;
        local_358._12_4_ = uVar37;
        local_348 = local_4c8;
        uStack_340 = 0;
        local_338 = _DAT_149934d80;
        local_328 = 0x3ff0000000000000;
        uStack_320 = 0;
        if (DAT_14caf8010 != 0) goto LAB_1406381c4;
        if (*(longlong *)(param_1 + 0x78) == 0) {
          dVar41 = (double)(float)(~-(uint)((float)local_498._0_4_ < 0.0) & local_498._0_4_ |
                                  local_488._0_4_ & -(uint)((float)local_498._0_4_ < 0.0));
          dVar43 = (double)param_2;
          local_3c8 = local_4d0 + local_2e0 * dVar41 * dVar43;
          local_3d0 = (code ***)(local_4d8 + local_2e8 * dVar41 * dVar43);
          local_3d8 = (double *)(local_4e0 + dVar41 * local_2f0 * dVar43);
          dVar41 = (double)local_314;
          dVar46 = (double)(float)(~-(uint)((float)local_438._0_4_ < 0.0) & local_438._0_4_ |
                                  local_428._0_4_ & -(uint)((float)local_438._0_4_ < 0.0));
          local_540 = local_540 + local_300 * dVar41 * dVar46 * dVar43;
          local_530 = local_530 + local_308 * dVar41 * dVar46 * dVar43;
          local_538 = local_538 + dVar41 * local_310 * dVar46 * dVar43;
          dVar41 = (double)(float)(~-(uint)((float)local_468._0_4_ < 0.0) & local_468._0_4_ |
                                  local_478._0_4_ & -(uint)((float)local_468._0_4_ < 0.0));
          local_528._8_8_ = 0;
          local_528._0_8_ = local_1e8 + (local_4c8 - local_1e8) * dVar41;
          local_508._8_8_ = 0;
          local_508._0_8_ = dStack_1f0 + (local_4b8 - dStack_1f0) * dVar41;
          dVar43 = local_1f8 + (dVar38 - local_1f8) * dVar41;
          uVar36 = SUB84(local_1d8,0);
          uVar37 = (undefined4)((ulonglong)local_1d8 >> 0x20);
          dVar46 = local_1c0 * dStack_4f0 +
                   local_1c8 * local_4f8 +
                   (double)local_1d8 * (double)ppdVar47 + dStack_1d0 * dVar34;
          dVar38 = (double)(float)(~-(uint)((float)local_458._0_4_ < 0.0) & local_458._0_4_ |
                                  local_448._0_4_ & -(uint)((float)local_458._0_4_ < 0.0));
          dVar50 = dVar46 * (double)(&DAT_149931160)[0.0 <= dVar46];
          dVar41 = 1.0 - dVar38;
          dVar38 = (double)(&DAT_149931160)[0.0 <= dVar46] * dVar38;
          if (dVar50 < 0.9999) {
            dVar46 = dVar50;
            if (1.0 <= dVar50) {
              dVar46 = 1.0;
            }
            dVar46 = acos((double)(-(ulonglong)(dVar50 < -1.0) & 0xbff0000000000000 |
                                  ~-(ulonglong)(dVar50 < -1.0) & (ulonglong)dVar46));
            dVar50 = sin(dVar46);
            dVar41 = sin(dVar41 * dVar46);
            dVar41 = dVar41 * (1.0 / dVar50);
            dVar38 = sin(dVar38 * dVar46);
            dVar38 = dVar38 * (1.0 / dVar50);
            uVar36 = SUB84(local_1d8,0);
            uVar37 = (undefined4)((ulonglong)local_1d8 >> 0x20);
          }
          dVar50 = local_1c0 * dVar41 + dVar12 * dVar38;
          dVar46 = local_1c8 * dVar41 + local_4f8 * dVar38;
          dVar34 = dStack_1d0 * dVar41 + dVar34 * dVar38;
          dVar12 = (double)CONCAT44(uVar37,uVar36) * dVar41 + (double)ppdVar47 * dVar38;
          dVar38 = dVar46 * dVar46 + dVar12 * dVar12;
          dVar41 = dVar50 * dVar50 + dVar34 * dVar34;
          auVar39._0_8_ = dVar38 + dVar41;
          auVar39._8_8_ = dVar38 + dVar41;
          auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
          auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
          auVar40 = sqrtpd(auVar39,auVar39);
          auVar40 = divpd(auVar11,auVar40);
          auVar42._0_8_ = auVar40._0_8_ * dVar46;
          auVar42._8_8_ = auVar40._8_8_ * dVar50;
          uVar27 = (ulonglong)(dVar34 * auVar40._8_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
          local_268 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar42,auVar35);
          local_278._8_4_ = (int)uVar27;
          local_278._0_8_ =
               (ulonglong)(dVar12 * auVar40._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
          local_278._12_4_ = (int)(uVar27 >> 0x20);
          local_258._8_4_ = local_508._0_4_;
          local_258._0_8_ = dVar43;
          local_258._12_4_ = local_508._4_4_;
          local_248 = local_528._0_8_;
          uStack_240 = 0;
          local_238 = auVar11;
          local_228 = 0x3ff0000000000000;
          uStack_220 = 0;
          FUN_140043566(param_3,local_278,2,1);
          uVar27 = 0;
          local_2a0 = (undefined1 *)((ulonglong)local_2a0 & 0xffffffffffffff00);
          local_278._8_8_ = &local_290;
          local_290 = &local_3d8;
          local_278._0_8_ = FUN_14362224a;
          local_288 = &local_2a0;
          FUN_144966906(puVar1,local_278);
          local_278._8_8_ = local_530 * 0.01745329238474369;
          local_278._0_8_ = local_538 * 0.01745329238474369;
          local_268._0_8_ = local_540 * 0.01745329238474369;
          local_298 = &local_279;
          local_279 = 0;
          local_290 = (double **)FUN_143622336;
          local_2a0 = local_278;
          local_288 = &local_2a0;
          FUN_144966906(puVar1,&local_290);
        }
        else {
          local_278._4_3_ = uStack_103;
          local_278[3] = uStack_104;
          local_278._7_9_ = auVar35._7_9_;
          local_278._0_3_ = (undefined3)local_107;
          uVar6 = *(undefined8 *)puVar1;
          uVar52 = param_5[8];
          uVar53 = param_5[9];
          uVar2 = param_5[6];
          uVar3 = param_5[7];
          lVar20 = *(longlong *)(param_1 + 0x80);
          iVar5 = *(int *)(lVar20 + 0x28);
          *(uint *)(lVar20 + 0x28) = iVar5 + 1U;
          if (*(uint *)(lVar20 + 0x2c) < iVar5 + 1U) {
            FUN_1406372c0((longlong *)(lVar20 + 0x20),iVar5);
          }
          lVar20 = *(longlong *)(lVar20 + 0x20);
          lVar22 = (longlong)iVar5 * 0xc0;
          auVar11._8_4_ = uVar36;
          auVar11._0_8_ = dVar38;
          auVar11._12_4_ = uVar37;
          *(undefined1 (*) [16])(lVar20 + lVar22) = auVar11;
          *(double *)(lVar20 + 0x10 + lVar22) = local_4c8;
          *(double *)(lVar20 + 0x18 + lVar22) = local_178[3];
          puVar32 = (undefined8 *)(lVar20 + 0x20 + lVar22);
          *puVar32 = ppdVar47;
          puVar32[1] = dVar34;
          pdVar29 = (double *)(lVar20 + 0x30 + lVar22);
          *pdVar29 = local_4f8;
          pdVar29[1] = dStack_4f0;
          *(double *)(lVar20 + 0x40 + lVar22) = local_4e0;
          *(double *)(lVar20 + 0x48 + lVar22) = local_4d8;
          *(double *)(lVar20 + 0x50 + lVar22) = local_4d0;
          *(double *)(lVar20 + 0x58 + lVar22) = local_538;
          *(double *)(lVar20 + 0x60 + lVar22) = local_530;
          *(double *)(lVar20 + 0x68 + lVar22) = local_540;
          *(byte *)(lVar20 + 0x70 + lVar22) = local_541;
          uVar16 = local_278._0_8_;
          *(undefined8 *)(lVar20 + 0x71 + lVar22) = uVar16;
          *(undefined8 *)(lVar20 + 0x78 + lVar22) = local_278._7_8_;
          *(undefined8 *)(lVar20 + 0x80 + lVar22) = uVar6;
          uVar27 = 0;
          *(undefined8 *)(lVar20 + 0x88 + lVar22) = 0;
          *(undefined1 *)(lVar20 + 0xa0 + lVar22) = 1;
          *(uint *)(lVar20 + 0x90 + lVar22) = uVar52;
          *(uint *)(lVar20 + 0x94 + lVar22) = uVar53;
          *(uint *)(lVar20 + 0x98 + lVar22) = uVar2;
          *(uint *)(lVar20 + 0x9c + lVar22) = uVar3;
          *(undefined8 *)(lVar20 + 0xa4 + lVar22) = 0;
          *(undefined1 *)(lVar20 + 0xb0 + lVar22) = 0;
          *(float *)(lVar20 + 0xb4 + lVar22) = local_510;
        }
      }
      else {
        *(undefined4 *)((longlong)param_4 + 0x8c) = 0;
LAB_1406383db:
        uVar27 = CONCAT71((int7)((ulonglong)ppdVar30 >> 8),1);
      }
      if (((local_541 & 1) != 0) && (*(longlong *)(param_1 + 0x78) == 0)) {
        local_278._8_8_ = &local_378;
        local_278._0_8_ = &LAB_1436221ea;
        FUN_144966906(puVar1);
      }
      param_4[0x14] = local_2a8;
      param_4[0x12] = local_2b8;
      param_4[0x13] = dStack_2b0;
      param_4[0x15] = local_1f8;
      param_4[0x16] = dStack_1f0;
      param_4[0x17] = local_1e8;
      goto LAB_140637463;
    }
  }
LAB_140637461:
  uVar27 = 0;
LAB_140637463:
  if ((local_f0 ^ (ulonglong)auStack_598) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar27 & 0xffffffff;
}



// FUNCTION 140638988 FUN_140638988 body=57 status=ok
// SIG undefined FUN_140638988(void)

void FUN_140638988(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5488 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5488 = FUN_140002ddd(FUN_1465c2aa8,uVar1,L"LootableObjectBodySettings");
  }
  return;
}



// FUNCTION 1406389c2 FUN_1406389c2 body=93 status=ok
// SIG undefined FUN_1406389c2(void)

void FUN_1406389c2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_140638a20();
  return;
}



// FUNCTION 140638a20 FUN_140638a20 body=469 status=ok
// SIG undefined FUN_140638a20(void)

void FUN_140638a20(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_140638b50:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_140638b8d:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_140638a8a;
LAB_140638a7f:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_140638a8a:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x000140638ab7;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140638b0d:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_140638b8d;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_140638b50;
code_r0x000140638ab7:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_140638b0d;
    }
  }
  goto LAB_140638a7f;
}



// FUNCTION 140638bf6 FUN_140638bf6 body=206 status=ok
// SIG undefined FUN_140638bf6(void)

void FUN_140638bf6(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_140638cf4();
  lVar3 = param_1[0x1b];
  if ((longlong)(int)param_1[0x1c] == 0) {
    uVar1 = 0;
  }
  else {
    lVar4 = (longlong)(int)param_1[0x1c] * 0x50 + lVar3;
    do {
      if ((longlong)*(int *)(lVar3 + 0x28) != 0) {
        lVar2 = *(longlong *)(lVar3 + 0x20) + 0xc;
        lVar5 = (longlong)*(int *)(lVar3 + 0x28) * 0x18;
        do {
          if (*(char *)(lVar2 + 8) == '\x01') {
            *(undefined1 *)(lVar2 + 8) = 2;
            (**(code **)(*param_1 + 0x78))(param_1,lVar2,3);
          }
          lVar2 = lVar2 + 0x18;
          lVar5 = lVar5 + -0x18;
        } while (lVar5 != 0);
      }
      lVar3 = lVar3 + 0x50;
    } while (lVar3 != lVar4);
    uVar1 = (undefined4)param_1[0x1c];
    lVar3 = param_1[0x1b];
  }
  FUN_140333e55(lVar3,uVar1);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)((longlong)param_1 + 0xe4) == 0) {
    return;
  }
  FUN_140638cc4(param_1 + 0x1b);
  return;
}



// FUNCTION 140638cc4 FUN_140638cc4 body=48 status=ok
// SIG undefined FUN_140638cc4(void)

void FUN_140638cc4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x50,8);
  }
  return;
}



// FUNCTION 140638cf4 FUN_140638cf4 body=186 status=ok
// SIG undefined FUN_140638cf4(void)

void FUN_140638cf4(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0xa0) = 2;
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    local_28 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = FUN_14477b072(plVar1,DAT_14cb68108);
    (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_28);
    local_28 = *(undefined8 *)(param_1 + 0x38);
    plVar1 = *(longlong **)(param_1 + 0xa8);
    uVar2 = FUN_14477b072(plVar1,DAT_14cb68118);
    (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_28);
    *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 0x28) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140638db0 FUN_140638db0 body=158 status=ok
// SIG undefined FUN_140638db0(void)

undefined8 FUN_140638db0(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_140638e4e(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140638e4e FUN_140638e4e body=95 status=ok
// SIG undefined FUN_140638e4e(void)

void FUN_140638e4e(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_140638eae(param_1,param_2,1);
  return;
}



// FUNCTION 140638eae FUN_140638eae body=136 status=ok
// SIG undefined FUN_140638eae(void)

void FUN_140638eae(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 140638f36 FUN_140638f36 body=359 status=ok
// SIG undefined FUN_140638f36(void)

undefined4 *
FUN_140638f36(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = FUN_14063909e(param_4);
  if (lVar1 == 0) {
    lVar1 = FUN_1447262c2(param_4);
    uVar2 = 0x3f800000;
    if (lVar1 == 0) goto LAB_140638fac;
    if (DAT_14cb939a8 == 0) {
      local_50 = &local_38;
      local_38 = FUN_140940982;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_146522c26;
      local_58 = &LAB_148a0db91;
      local_60 = &LAB_146572ba7;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0xdd8;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
    }
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14cb939a8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) != DAT_14cb939a8 + 0x30)) goto LAB_140638fac;
    lVar1 = FUN_1406390dc(lVar1);
    if (lVar1 == 0) goto LAB_140638fac;
  }
  uVar2 = FUN_140086a76(lVar1);
LAB_140638fac:
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = uVar2;
  *(undefined1 *)(param_2 + 8) = 3;
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14063909e FUN_14063909e body=61 status=ok
// SIG undefined FUN_14063909e(void)

longlong FUN_14063909e(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    lVar2 = FUN_140086990();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1406390dc FUN_1406390dc body=109 status=ok
// SIG undefined FUN_1406390dc(void)

void FUN_1406390dc(longlong param_1)

{
  undefined1 uVar1;
  undefined8 unaff_RBX;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(undefined1 *)(param_1 + 0xbd8);
  local_20 = FUN_140086990();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_1448a09a2(param_1,&local_20,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14063914a FUN_14063914a body=40 status=ok
// SIG undefined FUN_14063914a(void)

undefined8 FUN_14063914a(undefined8 param_1,int param_2)

{
  FUN_140639172();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140639172 FUN_140639172 body=1847 status=ok
// SIG undefined FUN_140639172(void)

void FUN_140639172(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14b95d190;
  param_1[0x72] = &PTR_FUN_14b95d800;
  param_1[0x73] = &PTR_FUN_14b95d820;
  param_1[0x74] = &PTR_FUN_14b95d850;
  param_1[0x75] = &PTR_FUN_14b95d860;
  param_1[0x76] = &PTR_FUN_14b95d8d0;
  param_1[0x77] = &PTR_FUN_14b95d900;
  param_1[0x78] = &PTR_FUN_14b95d930;
  param_1[0x7f] = &PTR_FUN_14b95d9e0;
  param_1[0x80] = &PTR_FUN_14b95da50;
  param_1[0x81] = &PTR_FUN_14b95dac0;
  param_1[0x82] = &PTR_FUN_14b95daf0;
  param_1[0x83] = &PTR_FUN_14b95db30;
  param_1[0x84] = &PTR_FUN_14b95dbd0;
  param_1[0x85] = &PTR_FUN_14b95dbf0;
  param_1[0x89] = &PTR_FUN_14b95dc10;
  param_1[0x8a] = &PTR_FUN_14b95dcd0;
  param_1[0x8b] = &PTR_FUN_14b95dd50;
  param_1[0x8c] = &PTR_FUN_14b95dda0;
  param_1[0x8d] = &PTR_FUN_14b95dde0;
  param_1[0x8e] = &PTR_FUN_14b95de00;
  param_1[0x8f] = &PTR_FUN_14b95de20;
  param_1[0x90] = &PTR_FUN_14b95de40;
  param_1[0x91] = &PTR_FUN_14b95de60;
  param_1[0x92] = &PTR_FUN_14b95de80;
  param_1[0x93] = &PTR_FUN_14b95dea0;
  param_1[0x94] = &PTR_FUN_14b95dec0;
  param_1[0x95] = &PTR_FUN_14b95dee0;
  param_1[0x96] = &PTR_FUN_14b95df00;
  param_1[0x34b] = &PTR_FUN_14b95df20;
  param_1[0x352] = &PTR_FUN_14b95df30;
  param_1[0x353] = &PTR_FUN_14b95df70;
  param_1[0x354] = &PTR_FUN_14b95dfb0;
  param_1[0x355] = &PTR_FUN_14b95e000;
  param_1[0x356] = &PTR_FUN_14b95e030;
  param_1[0x359] = &PTR_FUN_14b95e070;
  param_1[0x35a] = &PTR_FUN_14b95e080;
  param_1[0x35b] = &PTR_FUN_14b95e0b0;
  param_1[0x35c] = &PTR_FUN_14b95e150;
  if (param_1[0x4bd] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4bc) = 0;
  if (param_1[0x4bb] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4b4) = 0;
  if (*(int *)((longlong)param_1 + 0x25a4) != 0) {
    FUN_144727cd0(param_1 + 0x4b3,0);
  }
  param_1[0x4b9] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x25c4)) {
    *(undefined4 *)((longlong)param_1 + 0x25c4) = 0x80;
    FUN_1446efbd8(param_1 + 0x4b5,0);
  }
  if (param_1[0x4b7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b3] != 0) {
    FUN_1400020a8();
  }
  FUN_140283eaa(param_1 + 0x4ad,1);
  *(undefined4 *)(param_1 + 0x4ac) = 0;
  if (param_1[0x4ab] != 0) {
    FUN_1400020a8();
  }
  FUN_1405308b6(param_1 + 0x4a3);
  FUN_144760e21(param_1[0x49b],*(undefined4 *)(param_1 + 0x49c));
  if (param_1[0x49b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x498],*(undefined4 *)(param_1 + 0x499));
  if (param_1[0x498] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x495],*(undefined4 *)(param_1 + 0x496));
  if (param_1[0x495] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x493] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x491] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48f] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x48d];
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
  lVar5 = param_1[0x48b];
  if (lVar5 != 0) {
    FUN_14129d1b2(lVar5);
    FUN_1400020a8(lVar5);
  }
  param_1[0x477] = &DAT_14a176f00;
  if (param_1[0x485] != 0) {
    FUN_1400020a8();
  }
  param_1[0x477] = &PTR_FUN_14a177080;
  if (param_1[0x482] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x481) = 0;
  if (param_1[0x480] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x479) = 0;
  if (*(int *)((longlong)param_1 + 0x23cc) != 0) {
    FUN_14472eb64(param_1 + 0x478,0);
  }
  param_1[0x47e] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x47d) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x23ec)) {
    *(undefined4 *)((longlong)param_1 + 0x23ec) = 0x80;
    FUN_1446efbd8(param_1 + 0x47a,0);
  }
  if (param_1[0x47c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x478] != 0) {
    FUN_1400020a8();
  }
  FUN_1407778c7(param_1[0x471],*(undefined4 *)(param_1 + 0x472));
  if (param_1[0x471] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46f] != 0) {
    FUN_1400020a8();
  }
  puVar4 = (undefined8 *)param_1[0x46e];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  param_1[0x3de] = &PTR_FUN_14b739090;
  if (param_1[0x46b] != 0) {
    FUN_1400020a8();
  }
  param_1[0x3de] = &PTR_FUN_14b127600;
  lVar5 = 0x2158;
  do {
    FUN_14494dff0((longlong)param_1 + lVar5);
    lVar5 = lVar5 + -0x120;
  } while (lVar5 != 0x1df8);
  FUN_1406398aa(param_1 + 0x3da,1);
  FUN_1406399d0(param_1 + 0x3b8);
  plVar3 = (longlong *)param_1[0x3b6];
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
  if (*(char *)(param_1 + 0x3b2) == '\x01') {
    *(undefined1 *)(param_1 + 0x3b2) = 0;
  }
  FUN_144760e21(param_1[0x3aa],*(undefined4 *)(param_1 + 0x3ab));
  if (param_1[0x3aa] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a8] != 0) {
    FUN_1400020a8();
  }
  FUN_140639928(param_1 + 0x362);
  param_1[0x35c] = &PTR_LAB_14b95e870;
  if (param_1[0x35f] != 0) {
    FUN_1400020a8();
  }
  FUN_14063997c(param_1 + 0x34b);
  FUN_140639d0a(param_1);
  return;
}



// FUNCTION 1406398aa FUN_1406398aa body=126 status=ok
// SIG undefined FUN_1406398aa(void)

void FUN_1406398aa(longlong *param_1)

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



// FUNCTION 140639928 FUN_140639928 body=83 status=ok
// SIG undefined FUN_140639928(void)

void FUN_140639928(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5d0e90;
  if (param_1[8] == 0) {
    *param_1 = &PTR_FUN_14b0236e0;
  }
  else {
    FUN_140872868(param_1);
    *param_1 = &PTR_FUN_14b0236e0;
    if (param_1[8] != 0) {
      FUN_140872868(param_1);
    }
  }
  FUN_1403d7c6c(param_1);
  return;
}



// FUNCTION 14063997c FUN_14063997c body=83 status=ok
// SIG undefined FUN_14063997c(void)

void FUN_14063997c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2fa070;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1406399d0 FUN_1406399d0 body=474 status=ok
// SIG undefined FUN_1406399d0(void)

void FUN_1406399d0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_14b3f6e00;
  lVar3 = param_1[0xc];
  while (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x88);
    if (*(longlong *)(lVar3 + 0x70) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(lVar3 + 0x60) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar3);
    lVar3 = lVar1;
  }
  param_1[0xc] = 0;
  FUN_144760e21(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 9) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 9) + -1;
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
    *(undefined4 *)(param_1 + 9) = 0;
  }
  FUN_140639baa(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140639baa FUN_140639baa body=351 status=ok
// SIG undefined FUN_140639baa(void)

void FUN_140639baa(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    piVar4 = (int *)(param_1 + 0x70);
    do {
      lVar2 = DAT_14c9a3d60;
      if (*piVar4 != 0) {
        if (DAT_14c9a3d68 != DAT_14c9a3d94) {
          iVar3 = *piVar4 + -1;
          lVar1 = (longlong)iVar3 * 0x88;
          FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar1),
                        *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar1));
          if (*(longlong *)(lVar2 + 0x70 + lVar1) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar2 + lVar1 + 0x60) != 0) {
            FUN_1400020a8();
          }
          FUN_14059507c(&DAT_14c9a3d60,iVar3,1);
        }
        *piVar4 = 0;
      }
      FUN_1408bd9f2(*(undefined8 *)(piVar4 + -4),piVar4[-2]);
      if (*(longlong *)(piVar4 + -4) != 0) {
        FUN_1400020a8();
      }
      lVar2 = DAT_14c9a3d60;
      if (piVar4[-8] != 0) {
        if (DAT_14c9a3d68 != DAT_14c9a3d94) {
          iVar3 = piVar4[-8] + -1;
          lVar1 = (longlong)iVar3 * 0x88;
          FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar1),
                        *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar1));
          if (*(longlong *)(lVar2 + 0x70 + lVar1) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar2 + lVar1 + 0x60) != 0) {
            FUN_1400020a8();
          }
          FUN_14059507c(&DAT_14c9a3d60,iVar3,1);
        }
        piVar4[-8] = 0;
      }
      piVar4 = piVar4 + 0x22;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140639d0a FUN_140639d0a body=1443 status=ok
// SIG undefined FUN_140639d0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140639d0a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2f92c0;
  param_1[0x72] = &PTR_FUN_14b2f9910;
  param_1[0x73] = &PTR_FUN_14b2f9930;
  param_1[0x74] = &PTR_FUN_14b2f9960;
  param_1[0x75] = &PTR_FUN_14b2f9970;
  param_1[0x76] = &PTR_FUN_14b2f99e0;
  param_1[0x77] = &PTR_FUN_14b2f9a10;
  param_1[0x78] = &PTR_FUN_14b2f9a40;
  param_1[0x7f] = &PTR_FUN_14b2f9af0;
  param_1[0x80] = &PTR_FUN_14b2f9b60;
  param_1[0x81] = &PTR_FUN_14b2f9bd0;
  param_1[0x82] = &PTR_FUN_14b2f9c00;
  param_1[0x83] = &PTR_FUN_14b2f9c40;
  param_1[0x84] = &PTR_FUN_14b2f9ce0;
  param_1[0x85] = &PTR_FUN_14b2f9d00;
  param_1[0x89] = &PTR_FUN_14b2f9d20;
  param_1[0x8a] = &PTR_FUN_14b2f9de0;
  param_1[0x8b] = &PTR_FUN_14b2f9e60;
  param_1[0x8c] = &PTR_FUN_14b2f9eb0;
  param_1[0x8d] = &PTR_FUN_14b2f9ef0;
  param_1[0x8e] = &PTR_FUN_14b2f9f10;
  param_1[0x8f] = &PTR_FUN_14b2f9f30;
  param_1[0x90] = &PTR_FUN_14b2f9f50;
  param_1[0x91] = &PTR_FUN_14b2f9f70;
  param_1[0x92] = &PTR_FUN_14b2f9f90;
  param_1[0x93] = &PTR_FUN_14b2f9fb0;
  param_1[0x94] = &PTR_FUN_14b2f9fd0;
  param_1[0x95] = &PTR_FUN_14b2f9ff0;
  param_1[0x96] = &PTR_FUN_14b2fa010;
  if (param_1[0x349] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a71e(param_1 + 0x342,1);
  if (param_1[0x33f] != 0) {
    FUN_1400020a8();
  }
  FUN_14063adfa(param_1 + 0x324);
  FUN_14063a842(param_1 + 0x2ea);
  FUN_144760e21(param_1[0x2dc],*(undefined4 *)(param_1 + 0x2dd));
  if (param_1[0x2dc] != 0) {
    FUN_1400020a8();
  }
  FUN_140754d76(param_1[0x2da],*(undefined4 *)(param_1 + 0x2db));
  if (param_1[0x2da] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2d7],*(undefined4 *)(param_1 + 0x2d8));
  if (param_1[0x2d7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d5] != 0) {
    FUN_1400020a8();
  }
  FUN_140754d9e(param_1 + 0x1b2);
  FUN_140358fe5(param_1[0x1ad],*(undefined4 *)(param_1 + 0x1ae));
  if (param_1[0x1ad] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  if (param_1[0x1ab] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  if (*(int *)((longlong)param_1 + 0xd24) != 0) {
    FUN_1405357e8(param_1 + 0x1a3,0);
  }
  param_1[0x1a9] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xd44)) {
    *(undefined4 *)((longlong)param_1 + 0xd44) = 0x80;
    FUN_1446efbd8(param_1 + 0x1a5,0);
  }
  if (param_1[0x1a7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a3] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x1a1];
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
  FUN_14028f4a8(param_1 + 0x184);
  FUN_14063a79a(param_1 + 0x153);
  FUN_1403d7d90(param_1 + 0x131);
  FUN_14063ab46(param_1 + 0x113);
  FUN_14063ace6(param_1 + 0xf8);
  param_1[0xf3] = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 0xf5) != '\0') &&
     (plVar3 = (longlong *)param_1[0xf4], plVar3 != (longlong *)0x0)) {
    if (plVar3[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar3 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar3;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  FUN_14063a91c(param_1 + 0xdb);
  FUN_1403d7bbc(param_1 + 199);
  FUN_14063a2ad(param_1[0xc5],*(undefined4 *)(param_1 + 0xc6));
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a2e0(param_1 + 0xb5);
  FUN_1404d595a(param_1 + 0xb0,1);
  param_1[0xaa] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xad) = 0;
  if (*(int *)((longlong)param_1 + 0x56c) != 0) {
    FUN_140115c12(param_1 + 0xac,0);
  }
  param_1[0xab] = 0;
  if (param_1[0xac] != 0) {
    FUN_1400020a8();
  }
  param_1[0xa9] = 0;
  FUN_1403d7b38(param_1 + 0x9b);
  FUN_14063a62a(param_1 + 0x97,1);
  param_1[0x85] = &PTR_FUN_14b2c6a40;
  plVar3 = (longlong *)param_1[0x87];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_14063a6a6(param_1 + 0x78);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 14063a2ad FUN_14063a2ad body=51 status=ok
// SIG undefined FUN_14063a2ad(void)

void FUN_14063a2ad(longlong param_1,int param_2)

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



// FUNCTION 14063a2e0 FUN_14063a2e0 body=65 status=ok
// SIG undefined FUN_14063a2e0(void)

void FUN_14063a2e0(longlong param_1)

{
  FUN_14063a35a();
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_1);
  return;
}



// FUNCTION 14063a322 FUN_14063a322 body=55 status=ok
// SIG undefined FUN_14063a322(void)

void FUN_14063a322(longlong *param_1)

{
  FUN_14063a3c4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14063a35a FUN_14063a35a body=105 status=ok
// SIG undefined FUN_14063a35a(void)

void FUN_14063a35a(longlong param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14063b348(param_1);
    FUN_14063b48e(param_1);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x68),0);
  }
  puVar1 = *(undefined2 **)(param_1 + 0x68);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 14063a3c4 FUN_14063a3c4 body=612 status=ok
// SIG undefined FUN_14063a3c4(void)

void FUN_14063a3c4(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  uint *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar16 = 0;
    uVar14 = 1;
    iVar12 = 0;
    iVar7 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar15 = *puVar9;
    if (uVar15 == 0) {
      iVar12 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar12 = iVar2 + -1;
      }
      uVar16 = 0;
      uVar10 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar10 = uVar16;
      }
      iVar12 = 0;
      do {
        if (uVar10 == uVar16) goto LAB_14063a5a1;
        iVar12 = iVar12 + 0x20;
        uVar15 = puVar9[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar16 = 0;
      iVar12 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar10 = uVar14 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar7 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 < iVar2) {
    uVar15 = 0xffffffff;
    do {
      lVar13 = *param_1 + (longlong)iVar7 * 0x48;
      lVar11 = *param_1 + (longlong)iVar7 * 0x48;
      puVar17 = (undefined8 *)(lVar11 + 0x10);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar11 + 0x30) * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar8 = puVar17;
        if (0x18 < *(ushort *)(lVar13 + 0x28)) {
          puVar8 = (undefined8 *)*puVar17;
        }
        (*pcVar3)(puVar8);
      }
      if (0x18 < *(ushort *)(lVar13 + 0x28)) {
        FUN_1400020a8(*puVar17);
      }
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar7 = (int)uVar16;
      lVar13 = (longlong)iVar7;
      uVar4 = puVar9[lVar13] & uVar15;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar7) {
          iVar6 = iVar7;
        }
        if (iVar5 <= iVar7) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar4 = puVar9[lVar13 + lVar11 + 1];
          if (uVar4 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar13 == lVar11) goto LAB_14063a5a1;
        }
        uVar16 = (ulonglong)(iVar7 + (int)lVar11 + 1);
        uVar15 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar4 & uVar4);
      uVar10 = uVar14 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar7 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar2);
  }
LAB_14063a5a1:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1403af08a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar15 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar15 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar4 = 0x80;
  if (0x80 < (int)uVar15) {
    uVar4 = uVar15;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar4;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14063a62a FUN_14063a62a body=124 status=ok
// SIG undefined FUN_14063a62a(void)

void FUN_14063a62a(longlong *param_1)

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



// FUNCTION 14063a6a6 FUN_14063a6a6 body=79 status=ok
// SIG undefined FUN_14063a6a6(void)

void FUN_14063a6a6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b178720;
  FUN_14063a6f5(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014063a6f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14063a6f5 FUN_14063a6f5 body=40 status=ok
// SIG undefined FUN_14063a6f5(void)

void FUN_14063a6f5(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1407e878c(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 14063a71e FUN_14063a71e body=124 status=ok
// SIG undefined FUN_14063a71e(void)

void FUN_14063a71e(longlong *param_1)

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



// FUNCTION 14063a79a FUN_14063a79a body=122 status=ok
// SIG undefined FUN_14063a79a(void)

void FUN_14063a79a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0db3b0;
  if (param_1[8] != 0) {
    FUN_140e39776(param_1);
  }
  FUN_14063a814(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d7f26(param_1);
  return;
}



// FUNCTION 14063a814 FUN_14063a814 body=45 status=ok
// SIG undefined FUN_14063a814(void)

void FUN_14063a814(longlong param_1,int param_2)

{
  longlong lVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar1 = 0x1b8;
    do {
      if (*(byte *)(param_1 + lVar1) < 6) {
        *(undefined1 *)(param_1 + lVar1) = 0xff;
      }
      lVar1 = lVar1 + -0x48;
    } while (lVar1 != 8);
    param_1 = param_1 + 0x1c0;
  }
  return;
}



// FUNCTION 14063a842 FUN_14063a842 body=217 status=ok
// SIG undefined FUN_14063a842(void)

void FUN_14063a842(longlong param_1)

{
  FUN_140521550(param_1 + 0x1a8,1);
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1400020a8();
  }
  FUN_1405214e6(*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120));
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  FUN_1405214e6(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14063a91c FUN_14063a91c body=511 status=ok
// SIG undefined FUN_14063a91c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14063a91c(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b023840;
  param_1[0xe] = &PTR_FUN_14b023870;
  FUN_14063ab1b(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14063ab1b(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  param_1[0xe] = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 0x10) != '\0') &&
     (plVar1 = (longlong *)param_1[0xf], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  param_1[4] = &PTR_FUN_14b023870;
  FUN_14063ab1b(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14063ab1b(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  param_1[4] = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 6) != '\0') &&
     (plVar1 = (longlong *)param_1[5], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
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
                    /* WARNING: Could not recover jumptable at 0x00014063aad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 14063ab1b FUN_14063ab1b body=43 status=ok
// SIG undefined FUN_14063ab1b(void)

void FUN_14063ab1b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14063b166(param_1);
    param_1 = param_1 + 0x2e8;
  }
  return;
}



// FUNCTION 14063ab46 FUN_14063ab46 body=291 status=ok
// SIG undefined FUN_14063ab46(void)

void FUN_14063ab46(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0));
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_14063ac6a(param_1 + 0x70,1);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_144a07593(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_144a07593(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14063ac6a FUN_14063ac6a body=124 status=ok
// SIG undefined FUN_14063ac6a(void)

void FUN_14063ac6a(longlong *param_1)

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



// FUNCTION 14063ace6 FUN_14063ace6 body=275 status=ok
// SIG undefined FUN_14063ace6(void)

void FUN_14063ace6(longlong *param_1)

{
  FUN_1404967ae(param_1[0x18],(int)param_1[0x19]);
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1404967ae(param_1[0x16],(int)param_1[0x17]);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_1404967ae(param_1[0x14],(int)param_1[0x15]);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],(int)param_1[10]);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14063adfa FUN_14063adfa body=273 status=ok
// SIG undefined FUN_14063adfa(void)

void FUN_14063adfa(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14028f404(param_1[0x18],(int)param_1[0x19]);
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x17];
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
  FUN_14028f404(param_1[0x14],(int)param_1[0x15]);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_14063af0c(param_1 + 10);
  plVar3 = (longlong *)param_1[9];
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
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}


