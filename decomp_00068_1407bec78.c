// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1407bec78 FUN_1407bec78 body=228 status=ok
// SIG undefined FUN_1407bec78(void)

longlong FUN_1407bec78(void)

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
  if (DAT_14cb5eea0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14033a510;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a7497c;
    local_38 = &LAB_1486b0f19;
    local_40 = &LAB_1464e4447;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x850;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameSpawnPoint",&DAT_14cb5eea0,FUN_1464e4420);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5eea0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407bed5e FUN_1407bed5e body=719 status=ok
// SIG undefined FUN_1407bed5e(void)

void FUN_1407bed5e(undefined8 param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
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
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_1407beee7:
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
    }
LAB_1407bedc9:
    lVar1 = *param_2;
    if (lVar2 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        local_48 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_147e2b3ae(param_1,&local_48,param_4);
      }
      else {
        local_40 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_147e2b146(param_1,&local_40,param_4);
      }
      goto LAB_1407bee07;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_1407beee7;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
        DAT_14cad00c8 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1407bedc9;
    }
    lVar1 = *param_2;
  }
  if (param_3 == '\0') {
    local_58 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1407bf02e(param_1,&local_58,param_4);
  }
  else {
    local_50 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_147e2b4e4(param_1,&local_50,param_4);
  }
LAB_1407bee07:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407bf02e FUN_1407bf02e body=948 status=ok
// SIG undefined FUN_1407bf02e(void)

void FUN_1407bf02e(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  uint *local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar10 = (uint *)(param_1 + 0x250);
  uVar2 = *(uint *)(param_1 + 0x268);
  if (uVar2 == 0) {
    uVar8 = 1;
    uVar12 = 0;
    uVar3 = 0;
    iVar7 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar4 = puVar10;
    }
    uVar3 = *puVar4;
    if (uVar3 == 0) {
      iVar7 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar7 = uVar2 - 1;
      }
      uVar12 = 0;
      uVar8 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar8 = uVar12;
      }
      iVar7 = 0;
      do {
        if (uVar8 == uVar12) goto LAB_1407bf283;
        iVar7 = iVar7 + 0x20;
        uVar3 = puVar4[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar12 = 0;
      iVar7 = 0;
    }
    uVar8 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar8 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar3 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if ((int)uVar2 <= (int)uVar3) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 != uVar2) {
    uVar14 = 0xffffffff;
    local_70 = puVar10;
    local_60 = (ulonglong)uVar2;
    local_58 = param_1;
    do {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)(int)uVar3 * 0x10);
      if (lVar9 != 0) {
        lVar13 = *param_2;
        if ((lVar13 != 0 & DAT_14c950c29) == 1) {
          local_68 = param_3;
          FUN_1456cec3c(lVar13);
          puVar10 = local_70;
          param_3 = local_68;
LAB_1407bf135:
          if (DAT_14cad00c8 == 0) {
            local_90 = &local_50;
            local_50 = FUN_144a7958c;
            local_80 = FUN_14081d0ea;
            local_88 = FUN_14081d0ea;
            local_98 = &LAB_1479b7a0c;
            local_a0 = &LAB_1463b464e;
            local_a8 = L"Engine";
            local_b0 = 0;
            local_b8 = 0x10000005;
            local_c0 = 8;
            local_c8 = 0x110;
            local_68 = param_3;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar10 = local_70;
            param_3 = local_68;
            if (DAT_14cad00c8 == 0) goto LAB_1407bf36e;
          }
          if (*(int *)(lVar13 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_1407bf36e;
          if (*(longlong *)
               (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar13 = 0;
          }
        }
        else {
          if (lVar13 != 0) goto LAB_1407bf135;
LAB_1407bf36e:
          lVar13 = 0;
        }
        if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) {
          iVar11 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar11 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar11 + 1U) {
            FUN_1407bea76(param_3,iVar11);
            param_1 = local_58;
            puVar10 = local_70;
          }
          *(longlong *)(*param_3 + (longlong)iVar11 * 8) = lVar9;
        }
      }
      uVar14 = uVar14 & ~(uint)uVar8;
      puVar4 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar4 = puVar10;
      }
      uVar2 = *(uint *)(param_1 + 0x268);
      iVar11 = (int)uVar12;
      lVar9 = (longlong)iVar11;
      uVar3 = puVar4[lVar9] & uVar14;
      if (uVar3 == 0) {
        iVar5 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar5 = uVar2 - 1;
        }
        iVar5 = iVar5 >> 5;
        iVar7 = iVar7 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar11) {
          iVar6 = iVar11;
        }
        puVar10 = local_70;
        if (iVar11 < iVar5) {
          lVar13 = 0;
          do {
            uVar3 = puVar4[lVar9 + lVar13 + 1];
            if (uVar3 != 0) {
              uVar12 = (ulonglong)(iVar11 + (int)lVar13 + 1);
              uVar14 = 0xffffffff;
              goto LAB_1407bf20a;
            }
            iVar7 = iVar7 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar6 - lVar9 != lVar13);
          uVar14 = 0xffffffff;
          iVar11 = iVar6;
        }
        uVar12 = (ulonglong)(iVar11 + 1);
        param_1 = local_58;
        uVar3 = uVar2;
      }
      else {
LAB_1407bf20a:
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar8 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar3 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar3) {
          uVar3 = uVar2;
        }
      }
    } while (uVar3 != (uint)local_60);
  }
LAB_1407bf283:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407bf3e3 FUN_1407bf3e3 body=945 status=ok
// SIG undefined FUN_1407bf3e3(void)

void FUN_1407bf3e3(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  uchar auVar2 [8];
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  size_t sVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined *puVar16;
  undefined1 auStack_468 [40];
  undefined8 local_440;
  GUID *local_438;
  int local_430;
  undefined1 local_42c;
  GUID local_428;
  undefined8 local_418;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_468;
  if ((param_1 != (longlong *)0x0) && ((*(byte *)(param_1 + 0xc) & 2) != 0)) {
    uVar5 = FUN_140427846();
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar5);
    if (plVar6 != (longlong *)0x0) {
      uVar5 = FUN_140427846();
      plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
      if ((plVar6 != plVar7) && (plVar7 != (longlong *)0x0)) {
        uVar3 = (**(code **)(*plVar7 + 0x18))(plVar7);
        if (uVar3 != 0xffffffff) goto LAB_1407bf4a5;
      }
    }
  }
  lVar9 = param_1[0x39];
  if (lVar9 == 0) {
    local_418 = DAT_14c8464f0;
    local_428.Data2 = DAT_14c8464e0._4_2_;
    local_428.Data3 = DAT_14c8464e0._6_2_;
    local_428.Data1 = (undefined4)DAT_14c8464e0;
    local_428.Data4[4] = DAT_14c8464e8._4_1_;
    local_428.Data4[5] = DAT_14c8464e8._5_1_;
    local_428.Data4[6] = DAT_14c8464e8._6_1_;
    local_428.Data4[7] = DAT_14c8464e8._7_1_;
    local_428.Data4[0] = (undefined1)DAT_14c8464e8;
    local_428.Data4[1] = DAT_14c8464e8._1_1_;
    local_428.Data4[2] = DAT_14c8464e8._2_1_;
    local_428.Data4[3] = DAT_14c8464e8._3_1_;
  }
  else {
    if (*(char *)(lVar9 + 0x1fb) == '\x02') {
      if (param_1 != (longlong *)0x0) {
        uVar5 = FUN_1401b0f18();
        plVar6 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar5);
        if (plVar6 != (longlong *)0x0) {
          uVar5 = FUN_1401b0f18();
          plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
          if ((plVar6 != plVar7) && (plVar7 != (longlong *)0x0)) {
            lVar9 = (**(code **)(*plVar7 + 0x28))(plVar7);
            if ((*(longlong *)(lVar9 + 0xb8) != 0) &&
               ((*(longlong *)(lVar9 + 0xc0) != 0 && (-1 < *(int *)(lVar9 + 200))))) {
              lVar11 = FUN_1409b5a12(lVar9);
              if (lVar11 == 0) {
                local_428.Data1 = 0;
                local_428.Data2 = 0;
                local_428.Data3 = 0;
                local_428.Data4[0] = '\0';
                local_428.Data4[1] = '\0';
                local_428.Data4[2] = '\0';
                local_428.Data4[3] = '\0';
                local_428.Data4[4] = '\0';
                local_428.Data4[5] = '\0';
                local_428.Data4[6] = '\0';
                local_428.Data4[7] = '\0';
LAB_1407bf786:
                uVar3 = FUN_140b95084(lVar9 + 0xb8);
              }
              else {
                FUN_1448c1924(lVar11,&local_428);
                if (local_428._0_8_ == 0) goto LAB_1407bf786;
                uVar13 = *(uint *)(local_428._0_8_ + 0x148);
                uVar3 = FUN_140b95084(lVar9 + 0xb8);
                if (0 < (int)uVar13) {
                  uVar3 = uVar13 >> 0xd ^ uVar3 - uVar13;
                  uVar12 = uVar3 << 8 ^ (-0x61c88647 - uVar13) - uVar3;
                  uVar13 = uVar12 >> 0xd ^ (uVar13 - uVar3) - uVar12;
                  uVar14 = uVar13 >> 0xc ^ (uVar3 - uVar12) - uVar13;
                  uVar3 = uVar14 << 0x10 ^ (uVar12 - uVar13) - uVar14;
                  uVar13 = uVar3 >> 5 ^ (uVar13 - uVar14) - uVar3;
                  uVar12 = uVar13 >> 3 ^ (uVar14 - uVar3) - uVar13;
                  uVar3 = uVar12 << 10 ^ (uVar3 - uVar13) - uVar12;
                  uVar3 = uVar3 >> 0xf ^ uVar13 - (uVar12 + uVar3);
                }
              }
              auVar2 = local_428.Data4;
              if (local_428.Data4 != (uchar  [8])0x0) {
                LOCK();
                plVar6 = (longlong *)((longlong)local_428.Data4 + 8);
                *(int *)plVar6 = *(int *)plVar6 + -1;
                UNLOCK();
                if (*(int *)plVar6 == 0) {
                  (*(code *)**(undefined8 **)local_428.Data4)(local_428.Data4);
                  LOCK();
                  piVar1 = (int *)((longlong)auVar2 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*(longlong *)auVar2 + 0x10))(auVar2);
                  }
                }
              }
              goto LAB_1407bf4a5;
            }
          }
        }
      }
      local_428.Data1 = 0;
      local_428.Data2 = 0;
      local_428.Data3 = 0;
      local_428.Data4[0] = '\0';
      local_428.Data4[1] = '\0';
      local_428.Data4[2] = '\0';
      local_428.Data4[3] = '\0';
      local_428.Data4[4] = '\0';
      local_428.Data4[5] = '\0';
      local_428.Data4[6] = '\0';
      local_428.Data4[7] = '\0';
      CoCreateGuid(&local_428);
      uVar15 = ((local_428._0_8_ + 0x9ae16a3b2f90404f << 0x27 |
                local_428._0_8_ + 0x9ae16a3b2f90404f >> 0x19) + (longlong)local_428.Data4) *
               -0x651e95c4d06fbf91;
      uVar10 = (local_428._0_8_ +
                ((longlong)local_428.Data4 << 0x1b | (ulonglong)local_428.Data4 >> 0x25) *
                -0x651e95c4d06fbf91 + 0x9ae16a3b2f90404f ^ uVar15) * -0x651e95c4d06fbf91;
      lVar9 = (uVar10 >> 0x2f ^ uVar15 ^ uVar10) * -0x651e95c4d06fbf91;
      uVar3 = ((uint)((ulonglong)lVar9 >> 0x2f) ^ (uint)lVar9) * 0x2f90406f;
      goto LAB_1407bf4a5;
    }
    local_428._0_8_ = *(ulonglong *)(lVar9 + 0x260);
    local_428.Data4 = *(uchar (*) [8])(lVar9 + 0x268);
    local_418 = *(undefined8 *)(lVar9 + 0x270);
  }
  uVar3 = FUN_1448eb174(&local_428,0x18,0);
LAB_1407bf4a5:
  local_428._0_8_ = local_428._0_8_ & 0xffffffffffffff00;
  local_438 = *(GUID **)(param_1[2] + 0x18);
  FUN_140024b62(&local_438,&local_428);
  sVar8 = strlen((char *)&local_428);
  puVar16 = &DAT_14b3fdf44;
  if ((*(byte *)(param_1 + 0xc) & 2) == 0) {
    puVar16 = &DAT_14b3fc7a0;
  }
  FUN_1407bf796(local_428.Data4 + (longlong)(int)sVar8 + -8,0x400 - (int)sVar8,&DAT_14b3fc7a4,
                puVar16);
  sVar8 = strlen((char *)&local_428);
  if ((int)sVar8 == 0) {
    local_440 = 0;
  }
  else {
    local_42c = 0;
    local_438 = &local_428;
    local_430 = (int)sVar8;
    uVar4 = FUN_14001a6c0(&local_438,1);
    local_440 = CONCAT44((uVar3 & 0x7fffffff) + 1,uVar4);
  }
  FUN_1401533ba(&local_438,&local_440,1);
  *(int *)(param_2 + 1) = local_430;
  *param_2 = local_438;
  if ((local_28 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407bf796 FUN_1407bf796 body=142 status=ok
// SIG undefined FUN_1407bf796(void)

int FUN_1407bf796(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res20;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_res20 = param_4;
  local_30 = &local_res20;
  puVar2 = (ulonglong *)FUN_144737586();
  local_48 = 0;
  local_40 = &local_res20;
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,param_1,(longlong)param_2,param_3);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (param_2 <= iVar1) {
    iVar1 = -1;
  }
  if (param_2 <= iVar1) {
    iVar1 = -1;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407bf826 FUN_1407bf826 body=4656 status=ok
// SIG undefined FUN_1407bf826(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407bf826(double param_1)

{
  double dVar1;
  char cVar2;
  char extraout_AL;
  byte bVar3;
  int iVar4;
  undefined7 extraout_var;
  longlong lVar5;
  double *pdVar6;
  undefined8 uVar7;
  undefined7 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar18;
  undefined1 auVar17 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
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
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar36;
  undefined1 auVar35 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
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
  undefined1 auStack_438 [32];
  ulonglong local_418;
  double *local_410;
  undefined1 *local_408;
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  double local_3d0;
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  double local_3a8;
  double dStack_3a0;
  undefined1 local_398 [16];
  undefined1 local_380 [16];
  double local_370;
  double local_368;
  double dStack_360;
  double local_358;
  double local_348;
  double dStack_340;
  double local_338;
  double local_328;
  double dStack_320;
  double local_318;
  longlong local_308;
  byte local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  undefined8 local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_278;
  double dStack_270;
  ulonglong local_268;
  undefined4 local_234;
  byte local_22b;
  undefined4 local_208;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_438;
  lVar5 = *(longlong *)((longlong)param_1 + 0xb0);
  if (((lVar5 == 0) && (lVar5 = FUN_1448abda6(param_1), lVar5 == 0)) ||
     ((*(byte *)(lVar5 + 0x155) & 0x20) != 0)) goto LAB_1407bf909;
  uVar46 = SUB84(&local_308,0);
  local_2d8 = param_1;
  FUN_1407c0a58();
  if ((local_300 == 0) && (*(int *)((longlong)param_1 + 0x700) == 2)) {
    if (*(char *)((longlong)param_1 + 0x70d) == '\x01') {
      dVar26 = param_1;
      dVar13 = (double)FUN_14133901a();
      uVar46 = SUB84(dVar26,0);
    }
    else {
      local_318 = DAT_14c8462d0;
      local_328 = DAT_14c8462c0;
      dStack_320 = DAT_14c8462c8;
      dVar13 = DAT_14c8462d0;
    }
    auVar35 = *(undefined1 (*) [16])((longlong)param_1 + 0x260);
    dVar26 = auVar35._0_8_;
    uVar49 = auVar35._0_4_;
    uVar50 = auVar35._4_4_;
    dVar28 = auVar35._8_8_;
    auVar21 = *(undefined1 (*) [16])((longlong)param_1 + 0x270);
    dVar22 = auVar21._0_8_;
    auVar14 = *(undefined1 (*) [16])((longlong)param_1 + 0x280);
    dVar16 = auVar14._0_8_;
    dVar18 = auVar14._8_8_;
    auVar12 = *(undefined1 (*) [16])((longlong)param_1 + 0x290);
    dVar33 = auVar12._0_8_;
    auVar15 = *(undefined1 (*) [16])((longlong)param_1 + 0x750);
    dVar30 = auVar15._0_8_;
    dVar38 = auVar15._8_8_;
    auVar14 = minpd(auVar15,auVar14);
    dVar24 = SUB168(*(undefined1 (*) [16])((longlong)param_1 + 0x760),0);
    auVar20 = minpd(*(undefined1 (*) [16])((longlong)param_1 + 0x760),auVar12);
    auVar15._8_8_ = -(ulonglong)(auVar14._8_8_ < 0.0);
    auVar15._0_8_ = -(ulonglong)(auVar14._0_8_ < 0.0);
    iVar4 = movmskpd(SUB84(dVar13,0),auVar15);
    auVar14._8_8_ = -(ulonglong)(auVar20._8_8_ < 0.0);
    auVar14._0_8_ = -(ulonglong)(auVar20._0_8_ < 0.0);
    uVar9 = movmskpd(uVar46,auVar14);
    if ((uVar9 & 0x3fffffff) == 0 && iVar4 == 0) {
      dVar13 = *(double *)((longlong)param_1 + 0x240);
      dVar30 = *(double *)((longlong)param_1 + 0x248);
      auVar14 = *(undefined1 (*) [16])((longlong)param_1 + 0x250);
      dVar39 = auVar14._0_8_;
      uVar46 = auVar14._0_4_;
      uVar47 = auVar14._4_4_;
      dVar1 = auVar14._8_8_;
      uVar48 = auVar14._8_4_;
      uVar42 = auVar14._12_4_;
      dVar38 = *(double *)((longlong)param_1 + 600);
      dVar24 = *(double *)((longlong)param_1 + 600);
      dVar16 = dVar16 * *(double *)((longlong)param_1 + 0x730);
      dVar18 = dVar18 * *(double *)((longlong)param_1 + 0x738);
      dVar33 = dVar33 * *(double *)((longlong)param_1 + 0x740);
      dVar36 = auVar12._8_8_ * *(double *)((longlong)param_1 + 0x748);
      dVar31 = dVar18 * dVar13 - dVar30 * dVar16;
      dVar32 = dVar33 * dVar30 - dVar39 * dVar18;
      dVar25 = dVar16 * dVar39 - dVar13 * dVar33;
      dVar29 = dVar36 * dVar1 - dVar1 * dVar36;
      dVar32 = dVar32 + dVar32;
      dVar25 = dVar25 + dVar25;
      dVar31 = dVar31 + dVar31;
      dVar29 = dVar29 + dVar29;
      local_3c8._0_8_ = (dVar25 * dVar13 - dVar30 * dVar32) + dVar38 * dVar31 + dVar33 + dVar22;
      local_3c8._8_8_ = (dVar29 * dVar1 - dVar29 * dVar1) + dVar24 * dVar29 + dVar36 + auVar21._8_8_
      ;
      dVar16 = (dVar31 * dVar30 - dVar39 * dVar25) + dVar38 * dVar32 + dVar16 + dVar26;
      dVar33 = (dVar32 * dVar39 - dVar31 * dVar13) + dVar24 * dVar25 + dVar18 + dVar28;
      local_3f8 = auVar35;
      local_3e8 = auVar21;
    }
    else {
      dVar39 = *(double *)((longlong)param_1 + 0x240);
      dVar1 = *(double *)((longlong)param_1 + 0x248);
      dVar25 = *(double *)((longlong)param_1 + 0x250);
      dVar29 = dVar1 + dVar1;
      dVar31 = dVar25 + dVar25;
      dVar13 = dVar39 * (dVar39 + dVar39);
      local_158 = (1.0 - (dVar25 * dVar31 + dVar1 * dVar29)) * dVar16;
      dStack_130 = (1.0 - (dVar25 * dVar31 + dVar13)) * dVar18;
      local_108 = (1.0 - (dVar13 + dVar1 * dVar29)) * dVar33;
      dVar36 = *(double *)((longlong)param_1 + 0x240) * dVar31;
      dVar13 = *(double *)((longlong)param_1 + 600);
      dVar25 = dVar31 * dVar13;
      dVar32 = (dVar39 + dVar39) * *(double *)((longlong)param_1 + 600);
      dVar13 = dVar29 * dVar13;
      local_138 = (dVar29 * dVar39 - dVar25) * dVar18;
      dStack_110 = (dVar31 * dVar1 - dVar32) * dVar33;
      dStack_150 = (dVar29 * dVar39 + dVar25) * dVar16;
      local_128 = (dVar31 * dVar1 + dVar32) * dVar18;
      local_118 = (dVar13 + dVar36) * dVar33;
      local_148 = (dVar36 - dVar13) * dVar16;
      uStack_140 = 0;
      uStack_120 = 0;
      uStack_100 = 0;
      uStack_e0 = 0x3ff0000000000000;
      dVar1 = *(double *)((longlong)param_1 + 0x710);
      dVar25 = *(double *)((longlong)param_1 + 0x718);
      dVar29 = *(double *)((longlong)param_1 + 0x720);
      dVar31 = dVar25 + dVar25;
      dVar32 = dVar29 + dVar29;
      dVar39 = dVar1 * (dVar1 + dVar1);
      dVar23 = *(double *)((longlong)param_1 + 0x710) * dVar32;
      dVar13 = *(double *)((longlong)param_1 + 0x728);
      dVar36 = dVar32 * dVar13;
      dVar19 = (dVar1 + dVar1) * *(double *)((longlong)param_1 + 0x728);
      dVar13 = dVar31 * dVar13;
      local_1b8 = (dVar31 * dVar1 - dVar36) * dVar38;
      dStack_190 = (dVar32 * dVar25 - dVar19) * dVar24;
      local_1d8 = (1.0 - (dVar29 * dVar32 + dVar25 * dVar31)) * dVar30;
      dStack_1b0 = (1.0 - (dVar29 * dVar32 + dVar39)) * dVar38;
      dStack_1d0 = (dVar31 * dVar1 + dVar36) * dVar30;
      local_1a8 = (dVar32 * dVar25 + dVar19) * dVar38;
      local_198 = (dVar13 + dVar23) * dVar24;
      local_1c8 = (dVar23 - dVar13) * dVar30;
      dStack_1c0 = 0.0;
      uStack_1a0 = 0;
      local_188 = (1.0 - (dVar39 + dVar25 * dVar31)) * dVar24;
      uStack_180 = 0;
      local_178 = *(undefined8 *)((longlong)param_1 + 0x730);
      uStack_170 = *(undefined8 *)((longlong)param_1 + 0x738);
      local_168 = *(undefined8 *)((longlong)param_1 + 0x740);
      uStack_160 = 0x3ff0000000000000;
      local_f8 = auVar35;
      local_e8 = dVar22;
      FUN_1447fea8d(&local_2d8);
      FUN_144a1c686(&local_2d8,0x3e45798ee0000000);
      auVar12._8_8_ = -(ulonglong)(0.0 <= dVar18 * dVar38);
      auVar12._0_8_ = -(ulonglong)(0.0 <= dVar16 * dVar30);
      auVar14 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar12);
      uVar11 = -(ulonglong)(0.0 <= dVar33 * dVar24);
      dVar13 = (double)(~uVar11 & 0xbff0000000000000 |
                       (ulonglong)((uint)(uVar11 >> 0x20) & 0x3ff00000) << 0x20);
      dVar16 = auVar14._0_8_;
      local_2c8 = local_2c8 * dVar16;
      local_2d0 = local_2d0 * dVar16;
      local_2d8 = local_2d8 * dVar16;
      dVar16 = auVar14._8_8_;
      uStack_2a8 = uStack_2a8 * dVar16;
      local_2b0 = local_2b0 * dVar16;
      local_2b8 = dVar16 * local_2b8;
      local_288 = local_288 * dVar13;
      local_290 = local_290 * dVar13;
      local_298 = dVar13 * local_298;
      FUN_14481fd10(&local_2f8);
      local_3c8._8_8_ = 0.0;
      local_3c8._0_8_ = local_268;
      dVar13 = *(double *)((longlong)param_1 + 0x240);
      dVar30 = *(double *)((longlong)param_1 + 0x248);
      uVar46 = *(undefined4 *)((longlong)param_1 + 0x250);
      uVar47 = *(undefined4 *)((longlong)param_1 + 0x254);
      uVar48 = *(undefined4 *)((longlong)param_1 + 600);
      uVar42 = *(undefined4 *)((longlong)param_1 + 0x25c);
      local_3f8 = *(undefined1 (*) [16])((longlong)param_1 + 0x260);
      local_3e8 = *(undefined1 (*) [16])((longlong)param_1 + 0x270);
      dVar16 = local_278;
      dVar33 = dStack_270;
    }
    dVar24 = local_3c8._0_8_;
    if (*(char *)((longlong)param_1 + 0x70c) == '\0') {
      uVar51 = SUB84(dVar33,0);
      uVar52 = (undefined4)((ulonglong)dVar33 >> 0x20);
      uVar41 = local_3c8._0_4_;
      uVar43 = local_3c8._4_4_;
      uVar44 = local_3c8._8_4_;
      uVar45 = local_3c8._12_4_;
      dVar18 = dVar28;
      dVar24 = dVar22;
      dVar26 = dVar16;
      dStack_3a0 = dVar33;
    }
    else {
      uVar51 = auVar35._8_4_;
      uVar52 = auVar35._12_4_;
      uVar41 = auVar21._0_4_;
      uVar43 = auVar21._4_4_;
      uVar44 = auVar21._8_4_;
      uVar45 = auVar21._12_4_;
      uVar49 = SUB84(dVar16,0);
      uVar50 = (undefined4)((ulonglong)dVar16 >> 0x20);
      dVar18 = dVar33;
      dStack_3a0 = dVar28;
    }
    dVar22 = (double)(float)(((double)CONCAT44(uVar43,uVar41) - dVar24) * local_318 +
                            (dVar26 - (double)CONCAT44(uVar50,uVar49)) * local_328 +
                            ((double)CONCAT44(uVar52,uVar51) - dVar18) * dStack_320);
    local_358 = (double)CONCAT44(uVar43,uVar41) - local_318 * dVar22;
    dStack_360 = (double)CONCAT44(uVar52,uVar51) - dStack_320 * dVar22;
    local_3a8 = dVar26 - dVar22 * local_328;
    local_3d0 = (double)(*(float *)((longlong)param_1 + 0x704) -
                        *(float *)((longlong)param_1 + 0x708));
    local_338 = local_358 - local_318 * local_3d0;
    dStack_340 = dStack_360 - dStack_320 * local_3d0;
    local_348 = local_3a8 - local_328 * local_3d0;
    dVar26 = (double)(*(float *)((longlong)param_1 + 0x704) + *(float *)((longlong)param_1 + 0x708))
    ;
    local_398._8_4_ = uVar44;
    local_398._0_8_ = local_358;
    local_398._12_4_ = uVar45;
    local_358 = local_358 - local_318 * dVar26;
    local_3b8._8_4_ = uVar51;
    local_3b8._0_8_ = dStack_360;
    local_3b8._12_4_ = uVar52;
    dStack_360 = dStack_360 - dStack_320 * dVar26;
    local_368 = local_3a8 - local_328 * dVar26;
    dVar36 = local_368 - (double)local_3f8._0_8_;
    dVar22 = dStack_360 - (double)local_3f8._8_8_;
    dVar26 = local_358 - (double)local_3e8._0_8_;
    dVar27 = -dVar13;
    dVar30 = -dVar30;
    dVar24 = (double)CONCAT44(uVar47,uVar46) * -1.0;
    dVar28 = (double)CONCAT44(uVar42,uVar48) * 1.0;
    dVar18 = dVar22 * dVar27 - dVar30 * dVar36;
    dVar38 = dVar26 * dVar30 - dVar24 * dVar22;
    dVar25 = dVar36 * dVar24 - dVar26 * dVar27;
    dVar38 = dVar38 + dVar38;
    dVar25 = dVar25 + dVar25;
    dVar18 = dVar18 + dVar18;
    auVar35 = *(undefined1 (*) [16])((longlong)param_1 + 0x280);
    auVar21 = divpd(_DAT_149934d80,auVar35);
    dVar31 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar35._0_8_)) & auVar21._0_8_);
    dVar32 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar35._8_8_)) & auVar21._8_8_);
    auVar35 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])((longlong)param_1 + 0x290));
    dVar19 = (double)(-(ulonglong)
                       (9.99999993922529e-09 <
                       ABS(SUB168(*(undefined1 (*) [16])((longlong)param_1 + 0x290),0))) &
                     auVar35._0_8_);
    dVar34 = local_348 - (double)local_3f8._0_8_;
    dVar37 = dStack_340 - (double)local_3f8._8_8_;
    dVar23 = local_338 - (double)local_3e8._0_8_;
    dVar39 = dVar37 * dVar27 - dVar30 * dVar34;
    dVar1 = dVar23 * dVar30 - dVar24 * dVar37;
    dVar29 = dVar34 * dVar24 - dVar23 * dVar27;
    dVar1 = dVar1 + dVar1;
    dVar29 = dVar29 + dVar29;
    dVar39 = dVar39 + dVar39;
    dVar22 = (dVar13 * dVar18 + dVar24 * dVar38 + dVar28 * dVar25 + dVar22) * dVar32;
    *(double *)((longlong)param_1 + 0x770) =
         ((dVar39 * dVar30 - dVar29 * dVar24) + dVar28 * dVar1 + dVar34) * dVar31;
    *(double *)((longlong)param_1 + 0x778) =
         (dVar13 * dVar39 + dVar24 * dVar1 + dVar28 * dVar29 + dVar37) * dVar32;
    *(double *)((longlong)param_1 + 0x780) =
         (dVar39 * dVar28 + dVar23 + (dVar29 * dVar27 - dVar1 * dVar30)) * dVar19;
    auVar35._8_4_ = SUB84(dVar22,0);
    auVar35._0_8_ = ((dVar18 * dVar30 - dVar25 * dVar24) + dVar28 * dVar38 + dVar36) * dVar31;
    auVar35._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    *(undefined1 (*) [16])((longlong)param_1 + 0x788) = auVar35;
    *(double *)((longlong)param_1 + 0x798) =
         (dVar18 * dVar28 + dVar26 + (dVar25 * dVar27 - dVar38 * dVar30)) * dVar19;
    *(undefined1 *)((longlong)param_1 + 0x7a0) = 1;
    *(undefined1 *)((longlong)param_1 + 0x7a8) = 1;
    cVar2 = FUN_1407c0ae2();
    dVar13 = local_3a8;
    if (cVar2 == '\0') {
      local_138._1_7_ = (uint7)((ulonglong)local_138 >> 8) & 0xffffff;
      dStack_130 = (double)CONCAT62(dStack_130._2_6_,0x101);
      local_108 = 0.0;
      uStack_100 = 0x800000000;
      local_e8 = 0.0;
      uStack_e0 = 0x400000000;
      uVar11 = (ulonglong)uStack_140 >> 8;
      local_158 = 0.0;
      dStack_150 = 0.0;
      local_138 = (double)((ulonglong)local_138._1_7_ << 8);
      local_148 = 7.291122019556812e-304;
      uStack_140 = CONCAT71((uint7)uVar11 & 0xffffff,1);
      if (*(longlong *)((longlong)param_1 + 0xa8) != 0) {
        uStack_e0 = 0x400000001;
        local_f8._0_4_ = *(undefined4 *)(*(longlong *)((longlong)param_1 + 0xa8) + 0xc);
      }
      uVar46 = SUB84(local_3a8,0);
      uVar49 = (undefined4)((ulonglong)local_3a8 >> 0x20);
      dVar26 = local_3b8._0_8_;
      uVar50 = local_3b8._0_4_;
      uVar47 = local_3b8._4_4_;
      uStack_140 = CONCAT44(1,(undefined4)uStack_140);
      memset(&local_2d8,0,0x100);
      local_208 = 0xffffffff;
      local_2d8 = (double)CONCAT44(0x3f800000,(undefined4)local_2d8);
      local_234 = 0xffffffff;
      local_408 = &DAT_14cad0f10;
      local_418 = local_418 & 0xffffffff00000000;
      lVar10 = lVar5;
      local_410 = &local_158;
      FUN_1400b50cc(lVar5,&local_2d8,&local_348,&local_368);
      uVar48 = (undefined4)lVar10;
      uVar42 = local_398._0_4_;
      uVar41 = local_398._4_4_;
      uVar8 = extraout_var;
      if (extraout_AL != '\0') {
        if ((local_22b & 2) != 0) {
          local_1c8 = local_398._0_8_ - DAT_14c8462d0 * local_3d0;
          dStack_1d0 = dVar26 - DAT_14c8462c8 * local_3d0;
          local_1d8 = dVar13 - local_3d0 * DAT_14c8462c0;
          local_408 = &DAT_14cad0f10;
          local_418 = local_418 & 0xffffffff00000000;
          local_410 = &local_158;
          uVar7 = FUN_1400b50cc(lVar5,&local_2d8,&local_1d8,&local_368);
          uVar48 = (undefined4)lVar5;
          uVar8 = (undefined7)((ulonglong)uVar7 >> 8);
        }
        if ((local_22b & 3) == 1) {
          uVar42 = (undefined4)local_2a0;
          uVar41 = (undefined4)((ulonglong)local_2a0 >> 0x20);
          uVar46 = (undefined4)local_2b0;
          uVar49 = local_2b0._4_4_;
          uVar50 = (undefined4)uStack_2a8;
          uVar47 = uStack_2a8._4_4_;
        }
      }
      if (*(char *)((longlong)param_1 + 0x70c) == '\x01') {
        dVar13 = (double)(CONCAT71(uVar8,local_22b) & 0xffffffffffffff03);
        if (SUB81(dVar13,0) == '\x01') {
          local_370 = (double)CONCAT44(uVar41,uVar42) - *(double *)((longlong)param_1 + 0x270);
          dVar26 = (double)CONCAT44(uVar49,uVar46) - *(double *)((longlong)param_1 + 0x260);
          dVar22 = (double)CONCAT44(uVar47,uVar50) - *(double *)((longlong)param_1 + 0x268);
          local_380._8_4_ = SUB84(dVar22,0);
          local_380._0_8_ = dVar26;
          local_380._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
          if (((1.0 < ABS(dVar26)) || (1.0 < ABS(dVar22))) || (1.0 < ABS(local_370))) {
            dVar26 = *(double *)((longlong)param_1 + 0x240);
            dVar22 = *(double *)((longlong)param_1 + 0x248);
            dVar30 = *(double *)((longlong)param_1 + 0x250);
            dVar24 = *(double *)((longlong)param_1 + 600);
            pdVar6 = *(double **)((longlong)param_1 + 0x228);
            local_1d8 = dVar26;
            dStack_1d0 = dVar22;
            local_1c8 = dVar30;
            dStack_1c0 = dVar24;
            if (pdVar6 == (double *)0x0) {
              uVar48 = 0x40;
              pdVar6 = (double *)FUN_14001cc68(0x40,0x10);
              dVar13 = DAT_14c8463d8;
              *pdVar6 = DAT_14c8463d0;
              pdVar6[1] = dVar13;
              dVar13 = DAT_14c8463e8;
              pdVar6[2] = DAT_14c8463e0;
              pdVar6[3] = dVar13;
              dVar13 = DAT_14c846500;
              pdVar6[4] = DAT_14c8464f8;
              pdVar6[5] = dVar13;
              dVar13 = DAT_14c846508;
              pdVar6[6] = DAT_14c846508;
              *(double **)((longlong)param_1 + 0x228) = pdVar6;
            }
            auVar20._8_8_ = -(ulonglong)(dVar22 != pdVar6[1]);
            auVar20._0_8_ = -(ulonglong)(dVar26 != *pdVar6);
            auVar40._8_8_ = -(ulonglong)(dVar24 != pdVar6[3]);
            auVar40._0_8_ = -(ulonglong)(dVar30 != pdVar6[2]);
            iVar4 = movmskpd(SUB84(dVar13,0),auVar20);
            uVar9 = movmskpd(uVar48,auVar40);
            if ((uVar9 & 0x3fffffff) != 0 || iVar4 != 0) {
              pdVar6[2] = local_1c8;
              pdVar6[3] = dStack_1c0;
              *pdVar6 = local_1d8;
              pdVar6[1] = dStack_1d0;
              FUN_1448052ee(&local_1d8,&local_2f8);
              pdVar6[6] = local_2e8;
              pdVar6[4] = local_2f8;
              pdVar6[5] = dStack_2f0;
            }
            local_2e8 = pdVar6[6];
            local_2f8 = pdVar6[4];
            dStack_2f0 = pdVar6[5];
            local_408 = (undefined1 *)((ulonglong)local_408 & 0xffffffffffffff00);
            local_410 = (double *)((ulonglong)local_410 & 0xffffffff00000000);
            local_418 = 0;
            FUN_1407fd932(param_1,local_380,&local_2f8,0);
            dVar16 = dVar16 - *(double *)((longlong)param_1 + 0x260);
            dVar33 = dVar33 - *(double *)((longlong)param_1 + 0x268);
            dVar13 = (double)local_3c8._0_8_ - *(double *)((longlong)param_1 + 0x270);
            dVar28 = -*(double *)((longlong)param_1 + 0x240);
            dVar18 = -*(double *)((longlong)param_1 + 0x248);
            dVar30 = *(double *)((longlong)param_1 + 0x250) * -1.0;
            dVar24 = *(double *)((longlong)param_1 + 600) * 1.0;
            dVar22 = dVar16 * dVar30 - dVar28 * dVar13;
            dVar26 = dVar33 * dVar28 - dVar16 * dVar18;
            dVar38 = dVar13 * dVar18 - dVar33 * dVar30;
            dVar38 = dVar38 + dVar38;
            dVar22 = dVar22 + dVar22;
            dVar26 = dVar26 + dVar26;
            auVar35 = *(undefined1 (*) [16])((longlong)param_1 + 0x280);
            auVar17._8_8_ = 0x3ff0000000000000;
            auVar17._0_8_ = *(double *)((longlong)param_1 + 0x290);
            auVar21 = divpd(_DAT_149934d80,auVar35);
            auVar14 = divpd(ZEXT816(0x3ff0000000000000),auVar17);
            *(double *)((longlong)param_1 + 0x730) =
                 (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar35._0_8_)) & auVar21._0_8_) *
                 ((dVar26 * dVar18 - dVar22 * dVar30) + dVar24 * dVar38 + dVar16);
            *(double *)((longlong)param_1 + 0x738) =
                 (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar35._8_8_)) & auVar21._8_8_) *
                 (dVar26 * *(double *)((longlong)param_1 + 0x240) + dVar30 * dVar38 +
                 dVar24 * dVar22 + dVar33);
            *(double *)((longlong)param_1 + 0x740) =
                 (dVar24 * dVar26 + dVar13 + (dVar22 * dVar28 - dVar38 * dVar18)) *
                 (double)(-(ulonglong)
                           (9.99999993922529e-09 < ABS(*(double *)((longlong)param_1 + 0x290))) &
                         auVar14._0_8_);
            *(undefined8 *)((longlong)param_1 + 0x748) = 0;
            goto LAB_1407c0362;
          }
        }
      }
      else {
        dVar26 = (double)CONCAT44(uVar49,uVar46) - *(double *)((longlong)param_1 + 0x260);
        dVar22 = (double)CONCAT44(uVar47,uVar50) - *(double *)((longlong)param_1 + 0x268);
        dVar13 = (double)CONCAT44(uVar41,uVar42) - *(double *)((longlong)param_1 + 0x270);
        auVar35 = *(undefined1 (*) [16])((longlong)param_1 + 0x280);
        dVar28 = -*(double *)((longlong)param_1 + 0x240);
        dVar18 = -*(double *)((longlong)param_1 + 0x248);
        dVar33 = *(double *)((longlong)param_1 + 0x250) * -1.0;
        dVar30 = *(double *)((longlong)param_1 + 600) * 1.0;
        dVar24 = dVar26 * dVar33 - dVar28 * dVar13;
        dVar16 = dVar22 * dVar28 - dVar26 * dVar18;
        dVar38 = dVar13 * dVar18 - dVar22 * dVar33;
        dVar38 = dVar38 + dVar38;
        dVar24 = dVar24 + dVar24;
        dVar16 = dVar16 + dVar16;
        auVar21._8_8_ = 0x3ff0000000000000;
        auVar21._0_8_ = *(double *)((longlong)param_1 + 0x290);
        auVar14 = divpd(_DAT_149934d80,auVar35);
        auVar21 = divpd(ZEXT816(0x3ff0000000000000),auVar21);
        dVar26 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar35._0_8_)) & auVar14._0_8_) *
                 ((dVar16 * dVar18 - dVar24 * dVar33) + dVar30 * dVar38 + dVar26);
        dVar22 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar35._8_8_)) & auVar14._8_8_) *
                 (dVar16 * *(double *)((longlong)param_1 + 0x240) + dVar33 * dVar38 +
                 dVar30 * dVar24 + dVar22);
        dVar13 = (dVar30 * dVar16 + dVar13 + (dVar24 * dVar28 - dVar38 * dVar18)) *
                 (double)(-(ulonglong)
                           (9.99999993922529e-09 < ABS(*(double *)((longlong)param_1 + 0x290))) &
                         auVar21._0_8_);
        if (((1.0 < ABS(dVar26 - *(double *)((longlong)param_1 + 0x730))) ||
            (1.0 < ABS(dVar22 - *(double *)((longlong)param_1 + 0x738)))) ||
           (1.0 < ABS(dVar13 - *(double *)((longlong)param_1 + 0x740)))) {
          *(double *)((longlong)param_1 + 0x730) = dVar26;
          *(double *)((longlong)param_1 + 0x738) = dVar22;
          *(double *)((longlong)param_1 + 0x740) = dVar13;
          *(undefined8 *)((longlong)param_1 + 0x748) = 0;
LAB_1407c0362:
          if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
            bVar3 = *(byte *)((longlong)param_1 + 0x9d);
            if ((bVar3 & 1) != 0) {
              if ((*(longlong *)((longlong)param_1 + 0xb0) != 0) ||
                 (lVar5 = FUN_1448abda6(param_1), lVar5 != 0)) goto LAB_1407c007f;
              bVar3 = *(byte *)((longlong)param_1 + 0x9d);
            }
            *(byte *)((longlong)param_1 + 0x9d) = bVar3 | 1;
            FUN_1401057d4(param_1);
            FUN_14010586c(&DAT_14cad0140,param_1);
          }
        }
      }
LAB_1407c007f:
      if (local_e8 != 0.0) {
        FUN_1400020a8();
      }
      if (local_108 != 0.0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_300 & 1) == 0) {
    *(int *)(local_308 + 0x28) = *(int *)(local_308 + 0x28) + -1;
  }
LAB_1407bf909:
  if ((local_d0 ^ (ulonglong)auStack_438) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407c0a58 FUN_1407c0a58 body=138 status=ok
// SIG undefined FUN_1407c0a58(void)

longlong * FUN_1407c0a58(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  lVar4 = (longlong)iVar1;
  if (0 < lVar4) {
    lVar2 = *(longlong *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar2 = param_2;
    }
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) == *param_3) {
        *(undefined1 *)(param_1 + 1) = 1;
        return param_1;
      }
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 - lVar3 != 0);
  }
  *(uint *)(param_2 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x2c) < iVar1 + 1U) {
    FUN_147e2b834(param_2,iVar1);
  }
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    lVar2 = param_2;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_3;
  return param_1;
}



// FUNCTION 1407c0ae2 FUN_1407c0ae2 body=82 status=ok
// SIG undefined FUN_1407c0ae2(void)

undefined8 FUN_1407c0ae2(void)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar2 = FUN_140ad26c0();
      DVar3 = GetCurrentThreadId();
      if (DVar2 == DVar3) {
        return 0;
      }
    }
    (*(code *)PTR_FUN_14c758760)();
  }
  return 0;
}



// FUNCTION 1407c0b34 FUN_1407c0b34 body=8076 status=ok
// SIG undefined FUN_1407c0b34(void)

void FUN_1407c0b34(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  int *piVar15;
  longlong lVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong lVar26;
  bool bVar27;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  undefined4 local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  wchar_t *local_288;
  code *local_280;
  undefined1 *local_278;
  uint *local_270;
  code *local_268;
  code *local_260;
  longlong *local_250;
  longlong *local_248;
  longlong *local_240;
  int local_234;
  undefined4 local_230;
  int local_22c;
  undefined4 local_228;
  int local_224;
  longlong local_220;
  longlong local_218;
  int local_210;
  longlong local_208;
  int local_200;
  undefined8 *local_1f8;
  int local_1f0;
  undefined8 *local_1e8;
  int local_1e0;
  longlong *local_1d8;
  undefined8 uStack_1d0;
  int *local_1c8;
  ulonglong uStack_1c0;
  longlong local_1b0;
  int local_1a8;
  longlong local_1a0;
  int local_198;
  longlong local_190;
  undefined8 local_188;
  int iStack_180;
  int iStack_17c;
  longlong local_178;
  ulonglong uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  longlong local_150;
  undefined8 uStack_148;
  uint local_140;
  undefined8 uStack_13c;
  int iStack_134;
  uint local_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  undefined1 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 *local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong **local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  int local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a0;
  undefined2 local_9f;
  undefined1 local_9d;
  undefined4 local_9c;
  longlong local_98;
  undefined4 local_90;
  undefined1 local_88 [24];
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if ((*(char *)((longlong)param_1 + 0x14) != '\0') || (*(char *)((longlong)param_1 + 0xd) != '\0'))
  goto LAB_1407c0b70;
  if (param_2 != 0) {
    FUN_1402d797c(&local_130);
    *(uint *)(param_1 + 0xf) = local_130;
    *(int *)((longlong)param_1 + 0x7c) = iStack_12c;
    *(int *)(param_1 + 0x10) = iStack_128;
    *(int *)((longlong)param_1 + 0x84) = iStack_124;
  }
  if ((param_3 != 0) && ((int)*param_1 == 0)) {
    if (DAT_14cae8b20 == 0) {
      local_270 = &local_130;
      local_130 = 0x4355090c;
      iStack_12c = 1;
      local_260 = FUN_14081d0ea;
      local_268 = FUN_14081d0ea;
      local_278 = &LAB_147b8e16d;
      local_280 = (code *)&LAB_140810a38;
      local_288 = L"Engine";
      local_290 = 0x800000000;
      local_298 = 0x10000000;
      local_2a0 = 8;
      local_2a8 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar10 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_270 = &local_130;
      local_130 = 0x449e2820;
      iStack_12c = 1;
      local_260 = FUN_14081d0ea;
      local_268 = FUN_14081d0ea;
      local_278 = &LAB_1468c5283;
      local_280 = FUN_142809da0;
      local_288 = L"Engine";
      local_290 = 0x400000000;
      local_298 = 0x10000000;
      local_2a0 = 8;
      local_2a8 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar25 = *(longlong *)(param_3 + 0x20);
    if (lVar25 == 0) {
      lVar26 = 0;
    }
    else {
      iVar7 = *(int *)(lVar10 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar25 + 0x10) + 0x38) < iVar7) ||
           (lVar26 = lVar25,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x30) + (longlong)iVar7 * 8)
           != lVar10 + 0x30)) {
          lVar26 = 0;
        }
      } while ((lVar26 == 0) && (lVar25 = *(longlong *)(lVar25 + 0x20), lVar25 != 0));
    }
    lVar10 = FUN_1447210f0(param_3);
    if ((lVar10 != 0) &&
       (((lVar10 = FUN_14019257c(lVar10), lVar10 != 0 &&
         (plVar11 = (longlong *)FUN_14477ba68(lVar10,lVar26), plVar11 != (longlong *)0x0)) &&
        (lVar10 = (**(code **)(*plVar11 + 8))(plVar11), lVar10 != 0)))) {
      lVar25 = FUN_1413255c0();
      if ((*(int *)(lVar25 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar25 + 0x38) * 8) == lVar25 + 0x30)) {
        if (DAT_14cae8b20 == 0) {
          local_270 = &local_130;
          local_130 = 0x4355090c;
          iStack_12c = 1;
          local_260 = FUN_14081d0ea;
          local_268 = FUN_14081d0ea;
          local_278 = &LAB_147b8e16d;
          local_280 = (code *)&LAB_140810a38;
          local_288 = L"Engine";
          local_290 = 0x800000000;
          local_298 = 0x10000000;
          local_2a0 = 8;
          local_2a8 = 0x3f0;
          FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
        }
        lVar25 = DAT_14cae8b20;
        if (DAT_14c951858 == 0) {
          local_270 = &local_130;
          local_130 = 0x449e2820;
          iStack_12c = 1;
          local_260 = FUN_14081d0ea;
          local_268 = FUN_14081d0ea;
          local_278 = &LAB_1468c5283;
          local_280 = FUN_142809da0;
          local_288 = L"Engine";
          local_290 = 0x400000000;
          local_298 = 0x10000000;
          local_2a0 = 8;
          local_2a8 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar10 = *(longlong *)(lVar10 + 0x20);
        if (lVar10 == 0) {
          lVar26 = 0;
        }
        else {
          iVar7 = *(int *)(lVar25 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < iVar7) ||
               (lVar26 = lVar10,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
               lVar25 + 0x30)) {
              lVar26 = 0;
            }
          } while ((lVar26 == 0) && (lVar10 = *(longlong *)(lVar10 + 0x20), lVar10 != 0));
        }
        lVar10 = FUN_1405d1c86(lVar26);
        if (lVar10 != 0) {
          if (DAT_14cae8e78 == 0) {
            local_270 = &local_130;
            local_130 = 0x449e2820;
            iStack_12c = 1;
            local_260 = (code *)&LAB_1457dfdaa;
            local_268 = (code *)&LAB_14637debc;
            local_278 = &LAB_147b97a51;
            local_280 = FUN_1417ddfba;
            local_288 = L"Engine";
            local_290 = 0;
            local_298 = 0x10000008;
            local_2a0 = 0x10;
            local_2a8 = 0x1f0;
            FUN_14081cfa3(L"/Script/Engine",L"LevelStreamingLevelInstance",&DAT_14cae8e78,
                          &DAT_147b97a50);
          }
          if ((*(int *)(DAT_14cae8e78 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cae8e78 + 0x38) * 8) == DAT_14cae8e78 + 0x30)) {
            cVar4 = (**(code **)(*plVar11 + 0x18))(plVar11);
            if (cVar4 != '\0') {
              puVar18 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11);
              FUN_140002266(&local_130,L"%016llx",*puVar18);
              FUN_1405f0cf6(&local_178,&local_130,0,1);
              *(int *)(param_1 + 1) = (int)uStack_170;
              *param_1 = local_178;
              if (CONCAT44(iStack_12c,local_130) != 0) {
                FUN_1400020a8();
              }
            }
            goto LAB_1407c0c5e;
          }
        }
        (**(code **)(*plVar11 + 0x90))(plVar11,&local_98);
        local_178 = local_98;
        FUN_1401533ba(&local_130,&local_178,1);
        *(int *)(param_1 + 1) = iStack_128;
        *param_1 = CONCAT44(iStack_12c,local_130);
      }
    }
  }
LAB_1407c0c5e:
  local_198 = (int)param_1[1];
  local_1a0 = *param_1;
  local_1a8 = (int)param_1[4];
  local_1b0 = param_1[3];
  iVar7 = *(int *)((longlong)param_1 + 0x24);
  if (((((iVar7 == 0) || (plVar11 = (longlong *)param_1[0x10], plVar11 == (longlong *)0x0)) ||
       (*(int *)((longlong)param_1 + 0x7c) == 0)) ||
      ((uVar8 = *(uint *)(param_1 + 0xf), (int)uVar8 < 0 || (DAT_14c9647dc <= (int)uVar8)))) ||
     ((lVar10 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8), lVar10 == 0 ||
      ((*(int *)(lVar10 + 0x10) != *(int *)((longlong)param_1 + 0x7c) ||
       (lVar25 = param_1[5], (*(uint *)(lVar10 + 8) & 0x10200000) != 0)))))) goto LAB_1407c0b70;
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(int *)(param_1 + 2) = 2;
  }
  (**(code **)(*plVar11 + 0x58))(plVar11);
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  plVar24 = (longlong *)param_1[0x10];
  if (plVar24 == (longlong *)0x0) {
    plVar24 = (longlong *)0x0;
  }
  else if ((((*(int *)((longlong)param_1 + 0x7c) != 0) &&
            (uVar8 = *(uint *)(param_1 + 0xf), -1 < (int)uVar8)) && ((int)uVar8 < DAT_14c9647dc)) &&
          (((lVar10 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8), lVar10 != 0 &&
            (*(int *)(lVar10 + 0x10) == *(int *)((longlong)param_1 + 0x7c))) &&
           ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)))) {
    lVar10 = (**(code **)(*plVar24 + 0x98))();
    plVar24 = (longlong *)param_1[0x10];
    if (lVar10 != 0) {
      local_248 = plVar11;
      lVar12 = (**(code **)(*plVar24 + 8))();
      local_130 = 0;
      iStack_12c = 0;
      iStack_128 = 0;
      FUN_1446efa72(&local_130,0,3,0x10);
      iStack_128 = 3;
      puVar18 = (undefined8 *)CONCAT44(iStack_12c,local_130);
      *puVar18 = &PTR_LAB_14a1c7440;
      LOCK();
      UNLOCK();
      lVar16 = DAT_14c758608 + 1;
      lVar26 = DAT_14c758608 + 1;
      if (lVar16 == 0) {
        LOCK();
        UNLOCK();
        lVar16 = DAT_14c758608 + 2;
        lVar26 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar26;
      puVar18[2] = lVar16;
      *puVar18 = &PTR_FUN_14b3fd0a0;
      puVar18[3] = 0;
      iVar20 = 0;
      if (lVar12 != 0) {
        uVar8 = *(uint *)(lVar12 + 0xc);
        *(uint *)(puVar18 + 3) = uVar8;
        if ((int)uVar8 < DAT_14c9647dc) {
          lVar26 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        }
        else {
          lVar26 = 0;
        }
        iVar20 = *(int *)(lVar26 + 0x10);
        if (*(int *)(lVar26 + 0x10) == 0) {
          LOCK();
          iVar20 = DAT_14c964868 + 1;
          UNLOCK();
          iVar6 = DAT_14c964868 + 1;
          bVar27 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar20;
          if (bVar27) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar6);
          }
          LOCK();
          iVar20 = *(int *)(lVar26 + 0x10);
          bVar27 = iVar20 == 0;
          if (bVar27) {
            *(int *)(lVar26 + 0x10) = iVar6;
            iVar20 = 0;
          }
          UNLOCK();
          if (bVar27) {
            iVar20 = iVar6;
          }
        }
      }
      *(int *)((longlong)puVar18 + 0x1c) = iVar20;
      puVar18[4] = param_1;
      plVar11 = (longlong *)CONCAT44(iStack_12c,local_130);
      if ((iStack_128 == 0) || (plVar11 == (longlong *)0x0)) {
LAB_1407c28b9:
        if (iStack_128 == 0) {
          lVar26 = 0;
          goto LAB_1407c10fe;
        }
        if (plVar11 != (longlong *)0x0) {
          lVar26 = 0;
          (**(code **)*plVar11)(plVar11,0);
          FUN_1446efa72(&local_130,0,0,0x10);
          goto LAB_1407c10eb;
        }
        lVar26 = 0;
      }
      else {
        cVar4 = (**(code **)(*plVar11 + 0x30))();
        if (cVar4 == '\0') {
          plVar11 = (longlong *)CONCAT44(iStack_12c,local_130);
          goto LAB_1407c28b9;
        }
        plVar11 = (longlong *)(lVar10 + 0x2d0);
        if (*(int *)(lVar10 + 0x2e4) < 1) {
          iVar20 = *(int *)(lVar10 + 0x2d8);
          iVar6 = *(int *)(lVar10 + 0x2e0) + -1;
          *(int *)(lVar10 + 0x2e0) = iVar6;
          if (iVar6 <= iVar20) {
            iVar6 = iVar20;
            if (0 < iVar20) {
              iVar21 = 0;
              do {
                if (((*(int *)(*plVar11 + 8 + (longlong)iVar21 * 0x10) == 0) ||
                    (plVar24 = *(longlong **)(*plVar11 + (longlong)iVar21 * 0x10),
                    plVar24 == (longlong *)0x0)) ||
                   (cVar4 = (**(code **)(*plVar24 + 0x28))(), cVar4 != '\0')) {
                  FUN_14005b288(plVar11,iVar21);
                  FUN_14005b248(plVar11);
                }
                else {
                  iVar21 = iVar21 + 1;
                }
                iVar6 = *(int *)(lVar10 + 0x2d8);
              } while (iVar21 < iVar6);
            }
            iVar21 = 2;
            if (2 < iVar6 * 2) {
              iVar21 = iVar6 * 2;
            }
            *(int *)(lVar10 + 0x2e0) = iVar21;
            if ((iVar21 < iVar20) && (*(int *)(lVar10 + 0x2dc) != iVar6)) {
              FUN_14045812c();
            }
          }
        }
        lVar26 = 0;
        if ((iStack_128 != 0) &&
           (plVar24 = (longlong *)CONCAT44(iStack_12c,local_130), plVar24 != (longlong *)0x0)) {
          (**(code **)(*plVar24 + 0x38))(plVar24,&local_178);
          lVar26 = local_178;
        }
        iVar20 = *(int *)(lVar10 + 0x2d8);
        *(uint *)(lVar10 + 0x2d8) = iVar20 + 1U;
        if (*(uint *)(lVar10 + 0x2dc) < iVar20 + 1U) {
          FUN_1447a71f6(plVar11,iVar20);
        }
        lVar12 = *plVar11;
        lVar16 = (longlong)iVar20 * 0x10;
        *(undefined8 *)(lVar12 + lVar16) = 0;
        *(undefined4 *)(lVar12 + 8 + lVar16) = 0;
        *(ulonglong *)(lVar12 + lVar16) = CONCAT44(iStack_12c,local_130);
        local_130 = 0;
        iStack_12c = 0;
        *(int *)(lVar12 + 8 + lVar16) = iStack_128;
LAB_1407c10eb:
        iStack_128 = 0;
        plVar11 = (longlong *)CONCAT44(iStack_12c,local_130);
LAB_1407c10fe:
        if (plVar11 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      param_1[0x15] = lVar26;
      lVar12 = (**(code **)(*(longlong *)param_1[0x10] + 8))();
      local_130 = 0;
      iStack_12c = 0;
      iStack_128 = 0;
      FUN_1446efa72(&local_130,0,3,0x10);
      iStack_128 = 3;
      puVar18 = (undefined8 *)CONCAT44(iStack_12c,local_130);
      *puVar18 = &PTR_LAB_14a3a3510;
      LOCK();
      UNLOCK();
      lVar16 = DAT_14c758608 + 1;
      lVar26 = DAT_14c758608 + 1;
      if (lVar16 == 0) {
        LOCK();
        UNLOCK();
        lVar16 = DAT_14c758608 + 2;
        lVar26 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar26;
      puVar18[2] = lVar16;
      *puVar18 = &PTR_FUN_14b3fd110;
      puVar18[3] = 0;
      iVar20 = 0;
      if (lVar12 != 0) {
        uVar8 = *(uint *)(lVar12 + 0xc);
        *(uint *)(puVar18 + 3) = uVar8;
        if ((int)uVar8 < DAT_14c9647dc) {
          lVar26 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        }
        else {
          lVar26 = 0;
        }
        iVar20 = *(int *)(lVar26 + 0x10);
        if (*(int *)(lVar26 + 0x10) == 0) {
          LOCK();
          iVar20 = DAT_14c964868 + 1;
          UNLOCK();
          iVar6 = DAT_14c964868 + 1;
          bVar27 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar20;
          if (bVar27) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar6);
          }
          LOCK();
          iVar20 = *(int *)(lVar26 + 0x10);
          bVar27 = iVar20 == 0;
          if (bVar27) {
            *(int *)(lVar26 + 0x10) = iVar6;
            iVar20 = 0;
          }
          UNLOCK();
          if (bVar27) {
            iVar20 = iVar6;
          }
        }
      }
      plVar11 = local_248;
      *(int *)((longlong)puVar18 + 0x1c) = iVar20;
      puVar18[4] = param_1;
      plVar24 = (longlong *)CONCAT44(iStack_12c,local_130);
      if ((iStack_128 == 0) || (plVar24 == (longlong *)0x0)) {
LAB_1407c291d:
        plVar11 = local_248;
        if (iStack_128 == 0) {
          lVar26 = 0;
          goto LAB_1407c1344;
        }
        if (plVar24 != (longlong *)0x0) {
          lVar26 = 0;
          (**(code **)*plVar24)(plVar24,0);
          FUN_1446efa72(&local_130,0,0,0x10);
          plVar11 = local_248;
          goto LAB_1407c1331;
        }
        lVar26 = 0;
      }
      else {
        cVar4 = (**(code **)(*plVar24 + 0x30))();
        if (cVar4 == '\0') {
          plVar24 = (longlong *)CONCAT44(iStack_12c,local_130);
          goto LAB_1407c291d;
        }
        plVar24 = (longlong *)(lVar10 + 0x2b8);
        if (*(int *)(lVar10 + 0x2cc) < 1) {
          iVar20 = *(int *)(lVar10 + 0x2c0);
          iVar6 = *(int *)(lVar10 + 0x2c8) + -1;
          *(int *)(lVar10 + 0x2c8) = iVar6;
          if (iVar6 <= iVar20) {
            iVar6 = iVar20;
            if (0 < iVar20) {
              iVar21 = 0;
              do {
                if (((*(int *)(*plVar24 + 8 + (longlong)iVar21 * 0x10) == 0) ||
                    (plVar11 = *(longlong **)(*plVar24 + (longlong)iVar21 * 0x10),
                    plVar11 == (longlong *)0x0)) ||
                   (cVar4 = (**(code **)(*plVar11 + 0x28))(), cVar4 != '\0')) {
                  FUN_14005b288(plVar24,iVar21);
                  FUN_14005b248(plVar24);
                }
                else {
                  iVar21 = iVar21 + 1;
                }
                iVar6 = *(int *)(lVar10 + 0x2c0);
              } while (iVar21 < iVar6);
            }
            plVar11 = local_248;
            iVar21 = 2;
            if (2 < iVar6 * 2) {
              iVar21 = iVar6 * 2;
            }
            *(int *)(lVar10 + 0x2c8) = iVar21;
            if ((iVar21 < iVar20) && (*(int *)(lVar10 + 0x2c4) != iVar6)) {
              FUN_14045812c();
            }
          }
        }
        lVar26 = 0;
        if ((iStack_128 != 0) &&
           (plVar3 = (longlong *)CONCAT44(iStack_12c,local_130), plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x38))(plVar3,&local_178);
          lVar26 = local_178;
        }
        iVar20 = *(int *)(lVar10 + 0x2c0);
        *(uint *)(lVar10 + 0x2c0) = iVar20 + 1U;
        if (*(uint *)(lVar10 + 0x2c4) < iVar20 + 1U) {
          FUN_1447a71f6(plVar24,iVar20);
        }
        lVar10 = *plVar24;
        lVar12 = (longlong)iVar20 * 0x10;
        *(undefined8 *)(lVar10 + lVar12) = 0;
        *(undefined4 *)(lVar10 + 8 + lVar12) = 0;
        *(ulonglong *)(lVar10 + lVar12) = CONCAT44(iStack_12c,local_130);
        local_130 = 0;
        iStack_12c = 0;
        *(int *)(lVar10 + 8 + lVar12) = iStack_128;
LAB_1407c1331:
        iStack_128 = 0;
        plVar24 = (longlong *)CONCAT44(iStack_12c,local_130);
LAB_1407c1344:
        if (plVar24 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      param_1[0x16] = lVar26;
      plVar24 = (longlong *)param_1[0x10];
    }
  }
  lVar26 = (**(code **)(*plVar24 + 8))();
  local_130 = 0;
  iStack_12c = 0;
  iStack_128 = 0;
  FUN_1446efa72(&local_130,0,3,0x10);
  iStack_128 = 3;
  puVar18 = (undefined8 *)CONCAT44(iStack_12c,local_130);
  *puVar18 = &PTR_LAB_14a90a240;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  puVar18[2] = lVar12;
  *puVar18 = &PTR_FUN_14b3fd180;
  puVar18[3] = 0;
  iVar20 = 0;
  if (lVar26 != 0) {
    uVar8 = *(uint *)(lVar26 + 0xc);
    *(uint *)(puVar18 + 3) = uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar20 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar20 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar27 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar20;
      if (bVar27) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar20 = *(int *)(lVar10 + 0x10);
      bVar27 = iVar20 == 0;
      if (bVar27) {
        *(int *)(lVar10 + 0x10) = iVar6;
        iVar20 = 0;
      }
      UNLOCK();
      if (bVar27) {
        iVar20 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar18 + 0x1c) = iVar20;
  puVar18[4] = param_1;
  plVar24 = (longlong *)CONCAT44(iStack_12c,local_130);
  if ((iStack_128 == 0) || (plVar24 == (longlong *)0x0)) {
LAB_1407c2783:
    if (iStack_128 == 0) {
      lVar10 = 0;
      goto LAB_1407c157c;
    }
    if (plVar24 != (longlong *)0x0) {
      lVar10 = 0;
      (**(code **)*plVar24)(plVar24,0);
      FUN_1446efa72(&local_130,0,0,0x10);
      goto LAB_1407c1569;
    }
    lVar10 = 0;
  }
  else {
    cVar4 = (**(code **)(*plVar24 + 0x30))();
    uVar8 = DAT_14cb103e8;
    if (cVar4 == '\0') {
      plVar24 = (longlong *)CONCAT44(iStack_12c,local_130);
      goto LAB_1407c2783;
    }
    if ((DAT_14cb103f4 < 1) &&
       (DAT_14cb103f0 = DAT_14cb103f0 + -1, DAT_14cb103f0 <= (int)DAT_14cb103e8)) {
      if (0 < (int)DAT_14cb103e8) {
        iVar20 = 0;
        do {
          if (((*(int *)(DAT_14cb103e0 + 8 + (longlong)iVar20 * 0x10) == 0) ||
              (plVar24 = *(longlong **)(DAT_14cb103e0 + (longlong)iVar20 * 0x10),
              plVar24 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar24 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(&DAT_14cb103e0,iVar20);
            FUN_14005b248(&DAT_14cb103e0);
          }
          else {
            iVar20 = iVar20 + 1;
          }
        } while (iVar20 < (int)DAT_14cb103e8);
      }
      DAT_14cb103f0 = 2;
      if (2 < (int)(DAT_14cb103e8 * 2)) {
        DAT_14cb103f0 = DAT_14cb103e8 * 2;
      }
      if ((DAT_14cb103f0 < (int)uVar8) && (DAT_14cb103ec != DAT_14cb103e8)) {
        FUN_14045812c();
      }
    }
    lVar10 = 0;
    if ((iStack_128 != 0) &&
       (plVar24 = (longlong *)CONCAT44(iStack_12c,local_130), plVar24 != (longlong *)0x0)) {
      (**(code **)(*plVar24 + 0x38))(plVar24,&local_178);
      lVar10 = local_178;
    }
    uVar8 = DAT_14cb103e8;
    lVar26 = (longlong)(int)DAT_14cb103e8;
    DAT_14cb103e8 = DAT_14cb103e8 + 1;
    if (DAT_14cb103ec < DAT_14cb103e8) {
      FUN_1447a71f6(&DAT_14cb103e0,uVar8);
    }
    lVar12 = DAT_14cb103e0;
    lVar26 = lVar26 * 0x10;
    *(undefined8 *)(DAT_14cb103e0 + lVar26) = 0;
    *(undefined4 *)(lVar12 + 8 + lVar26) = 0;
    *(ulonglong *)(lVar12 + lVar26) = CONCAT44(iStack_12c,local_130);
    local_130 = 0;
    iStack_12c = 0;
    *(int *)(lVar12 + 8 + lVar26) = iStack_128;
LAB_1407c1569:
    iStack_128 = 0;
    plVar24 = (longlong *)CONCAT44(iStack_12c,local_130);
LAB_1407c157c:
    if (plVar24 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  param_1[0x1a] = lVar10;
  if (*(int *)((longlong)param_1 + 0x7c) == 0) {
LAB_1407c15e3:
    uVar13 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0xf);
    uVar13 = 0;
    if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
      plVar24 = (longlong *)
                ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
      if ((plVar24 == (longlong *)0x0) ||
         ((((int)plVar24[2] != *(int *)((longlong)param_1 + 0x7c) ||
           ((*(uint *)(plVar24 + 1) & 0x10200000) != 0)) ||
          ((longlong *)*plVar24 == (longlong *)0x0)))) goto LAB_1407c15e3;
      uVar13 = (**(code **)(*(longlong *)*plVar24 + 0x180))();
    }
  }
  local_240 = (longlong *)FUN_140502abf(uVar13);
  if (local_240 != (longlong *)0x0) {
    local_1c8 = (int *)0x0;
    uStack_1c0 = 0;
    local_1d8 = (longlong *)0x0;
    uStack_1d0 = 0;
    (**(code **)(*(longlong *)param_1[0x10] + 0x60))();
    iVar20 = *(int *)((longlong)param_1 + 0x5c);
    *(int *)((longlong)param_1 + 0x5c) = iVar20 + 1;
    uVar14 = (ulonglong)(int)param_1[10];
    local_248 = plVar11;
    if ((longlong)uVar14 < 1) {
      *(int *)((longlong)param_1 + 0x5c) = iVar20;
    }
    else {
      local_250 = param_1 + 9;
      bVar27 = false;
      do {
        lVar10 = uVar14 * 0x10 + -8;
        uVar22 = uVar14;
        while (((*(int *)(*local_250 + lVar10) != 0 &&
                (plVar11 = *(longlong **)(*local_250 + -8 + lVar10), plVar11 != (longlong *)0x0)) &&
               (cVar4 = (**(code **)(*plVar11 + 0x60))(plVar11,param_1,&local_1c8), cVar4 != '\0')))
        {
          lVar10 = lVar10 + -0x10;
          bVar2 = uVar22 < 2;
          uVar22 = uVar22 - 1;
          if (bVar2) {
            iVar20 = *(int *)((longlong)param_1 + 0x5c) + -1;
            *(int *)((longlong)param_1 + 0x5c) = iVar20;
            if (!bVar27) goto LAB_1407c163f;
            goto LAB_1407c1fb3;
          }
        }
        uVar14 = uVar22 - 1;
        bVar27 = true;
      } while (1 < uVar22);
      iVar20 = *(int *)((longlong)param_1 + 0x5c) + -1;
      *(int *)((longlong)param_1 + 0x5c) = iVar20;
LAB_1407c1fb3:
      plVar11 = local_250;
      if (iVar20 < 1) {
        iVar20 = (int)param_1[10];
        iVar6 = iVar20;
        if (0 < iVar20) {
          iVar21 = 0;
          do {
            if (((*(int *)(*local_250 + 8 + (longlong)iVar21 * 0x10) == 0) ||
                (plVar24 = *(longlong **)(*local_250 + (longlong)iVar21 * 0x10),
                plVar24 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar24 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar11,iVar21);
              FUN_14005b248(plVar11);
            }
            else {
              iVar21 = iVar21 + 1;
            }
            iVar6 = (int)param_1[10];
          } while (iVar21 < iVar6);
        }
        iVar21 = 2;
        if (2 < iVar6 * 2) {
          iVar21 = iVar6 * 2;
        }
        *(int *)(param_1 + 0xb) = iVar21;
        if ((iVar21 < iVar20) && (*(int *)((longlong)param_1 + 0x54) != iVar6)) {
          FUN_14045812c(local_250);
        }
      }
    }
LAB_1407c163f:
    uVar14 = uStack_1c0;
    iVar20 = (int)uStack_1c0;
    if ((int)uStack_1c0 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_1c0 & 0xffffffff);
    }
    iVar6 = uStack_1d0._4_4_;
    FUN_1405dc41e(local_1d8,uStack_1d0 & 0xffffffff);
    uVar22 = uStack_1d0 >> 0x20;
    uStack_1d0 = uStack_1d0 & 0xffffffff00000000;
    if ((iVar6 < iVar20) && ((int)uVar22 != iVar20)) {
      FUN_141882e20(&local_1d8,uVar14 & 0xffffffff);
    }
    if (*(int *)((longlong)param_1 + 0x7c) == 0) {
LAB_1407c1e75:
      plVar11 = (longlong *)0x0;
    }
    else {
      uVar8 = *(uint *)(param_1 + 0xf);
      plVar11 = (longlong *)0x0;
      if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
        puVar18 = (undefined8 *)
                  ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
        if ((puVar18 == (undefined8 *)0x0) ||
           ((*(int *)(puVar18 + 2) != *(int *)((longlong)param_1 + 0x7c) ||
            ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)))) goto LAB_1407c1e75;
        plVar11 = (longlong *)*puVar18;
      }
    }
    local_1e8 = (undefined8 *)0x0;
    local_1e0 = 0;
    FUN_1446efa72(&local_1e8,0,3,0x10);
    puVar18 = local_1e8;
    local_1e0 = 3;
    *local_1e8 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar26 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar26 == 0) {
      LOCK();
      UNLOCK();
      lVar26 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_1e8[2] = lVar26;
    *local_1e8 = &PTR_FUN_14b3fd1f0;
    local_1e8[3] = 0;
    iVar20 = 0;
    local_250 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      uVar8 = *(uint *)((longlong)plVar11 + 0xc);
      *(uint *)(local_1e8 + 3) = uVar8;
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar20 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar20 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar27 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar20;
        if (bVar27) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar20 = *(int *)(lVar10 + 0x10);
        bVar27 = iVar20 == 0;
        if (bVar27) {
          *(int *)(lVar10 + 0x10) = iVar6;
          iVar20 = 0;
        }
        UNLOCK();
        if (bVar27) {
          iVar20 = iVar6;
        }
      }
    }
    plVar11 = local_250;
    *(int *)((longlong)puVar18 + 0x1c) = iVar20;
    puVar18[4] = param_1;
    local_1f8 = (undefined8 *)0x0;
    local_1f0 = 0;
    FUN_1446efa72(&local_1f8,0,3,0x10);
    puVar18 = local_1f8;
    local_1f0 = 3;
    *local_1f8 = &PTR_LAB_14b3fd2d0;
    LOCK();
    UNLOCK();
    lVar26 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar26 == 0) {
      LOCK();
      UNLOCK();
      lVar26 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_1f8[2] = lVar26;
    *local_1f8 = &PTR_FUN_14b3fd260;
    local_1f8[3] = 0;
    iVar20 = 0;
    if (plVar11 != (longlong *)0x0) {
      uVar8 = *(uint *)((longlong)plVar11 + 0xc);
      *(uint *)(local_1f8 + 3) = uVar8;
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar20 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar20 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar27 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar20;
        if (bVar27) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar20 = *(int *)(lVar10 + 0x10);
        bVar27 = iVar20 == 0;
        if (bVar27) {
          *(int *)(lVar10 + 0x10) = iVar6;
          iVar20 = 0;
        }
        UNLOCK();
        if (bVar27) {
          iVar20 = iVar6;
        }
      }
    }
    *(int *)((longlong)puVar18 + 0x1c) = iVar20;
    puVar18[4] = param_1;
    FUN_144928b90(&local_98,1);
    iStack_128 = DAT_14cb7bba0;
    iStack_12c = DAT_14cb7bb98._4_4_;
    local_130 = (uint)DAT_14cb7bb98;
    FUN_144928d62(local_88,1,&local_130);
    local_208 = local_1a0;
    local_200 = local_198;
    FUN_14013eb2c(&local_98);
    local_210 = local_1a8;
    local_218 = local_1b0;
    FUN_14013eb54(&local_98);
    local_224 = iVar7;
    local_220 = lVar25;
    FUN_144928d62(local_88,4);
    if (0 < (int)uStack_1c0) {
      lVar25 = 0;
      lVar10 = 0;
      iVar7 = (int)uStack_1c0;
      do {
        if (*(int *)((longlong)local_1c8 + lVar25) != 0) {
          FUN_140114132(&local_130,&local_98,(longlong)local_1c8 + lVar25);
          uVar14 = uStack_1d0;
          lVar26 = (longlong)(int)uStack_1d0;
          uVar8 = (int)uStack_1d0 + 1;
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar8);
          if (uStack_1d0._4_4_ < uVar8) {
            FUN_141882f02(&local_1d8,uVar14 & 0xffffffff);
          }
          plVar11 = local_1d8;
          FUN_14014e938(local_1d8 + lVar26 * 0xc,&local_130);
          plVar11[lVar26 * 0xc + 7] = (longlong)local_f8;
          (plVar11 + lVar26 * 0xc + 7)[1] = lStack_f0;
          plVar11[lVar26 * 0xc + 0xb] = (longlong)local_d8;
          plVar11 = plVar11 + lVar26 * 0xc + 9;
          *(int *)plVar11 = (int)local_e8;
          *(int *)((longlong)plVar11 + 4) = local_e8._4_4_;
          *(int *)(plVar11 + 1) = (int)uStack_e0;
          *(int *)((longlong)plVar11 + 0xc) = uStack_e0._4_4_;
          if (CONCAT44(uStack_104,local_108) != 0) {
            FUN_1400020a8();
          }
          iVar7 = (int)uStack_1c0;
        }
        lVar10 = lVar10 + 1;
        lVar25 = lVar25 + 0x20;
      } while (lVar10 < iVar7);
    }
    local_130 = local_130 & 0xffffff00;
    iStack_12c = 0;
    iStack_128 = 0;
    iStack_124 = 0;
    local_120 = 0;
    local_11c = 0;
    uStack_114 = 0;
    uStack_10c = 0;
    local_108 = 0;
    local_100 = 0xc69c4000;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    uStack_e0 = 0;
    local_f8 = (undefined4 *)0x0;
    lStack_f0 = 0;
    local_d8 = (longlong **)0x0;
    uStack_d0 = 0;
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    local_b8 = 0;
    local_9f = 1;
    local_9d = 0;
    local_9c = 0;
    local_e8 = local_250;
    FUN_1401aa3da((longlong)&uStack_114 + 4,&local_1e8);
    FUN_140295bfa(&plStack_c0,&local_1f8);
    plVar11 = local_240;
    local_d8 = &local_1d8;
    local_9f = CONCAT11((int)param_1[2] == 2,(undefined1)local_9f);
    local_9d = 1;
    local_f8 = &local_228;
    local_228 = 0xc66a6000;
    (**(code **)(*local_240 + 0x38))(local_240,&local_178,&local_98,&local_130);
    param_1[0x12] = local_178;
    uVar5 = (**(code **)(*plVar11 + 0xd8))(plVar11,&local_1a0);
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar5;
    lVar10 = 0;
    if (plStack_c0 != (longlong *)0x0 && local_b8 != 0) {
      (**(code **)(*plStack_c0 + 0x38))(plStack_c0,&local_178);
      lVar10 = local_178;
    }
    param_1[0x13] = lVar10;
    if ((longlong)(int)uStack_1d0 == 0) {
      if (*(char *)((longlong)param_1 + 0xd) == '\x01') goto LAB_1407c1d32;
    }
    else {
      local_250 = local_1d8 + (longlong)(int)uStack_1d0 * 0xc;
      plVar11 = local_1d8;
      do {
        local_188 = (undefined8 *)plVar11[7];
        iStack_180 = (int)plVar11[8];
        iStack_17c = *(int *)((longlong)plVar11 + 0x44);
        piVar15 = (int *)&DAT_14c948618;
        puVar17 = (undefined4 *)((longlong)&DAT_14c948618 + 4);
        piVar19 = &DAT_14c948620;
        if ((int)plVar11[2] != 0) {
          piVar15 = (int *)&DAT_14c948618;
          puVar17 = (undefined4 *)((longlong)&DAT_14c948618 + 4);
          piVar19 = &DAT_14c948620;
          if (*(int *)((longlong)plVar11 + 0x14) != 0) {
            piVar15 = (int *)&DAT_14c948618;
            puVar17 = (undefined4 *)((longlong)&DAT_14c948618 + 4);
            piVar19 = &DAT_14c948620;
            if ((int)plVar11[2] != DAT_14c948000) {
              piVar15 = (int *)&DAT_14c948618;
              puVar17 = (undefined4 *)((longlong)&DAT_14c948618 + 4);
              piVar19 = &DAT_14c948620;
              if (5 < *(int *)((longlong)plVar11 + 0x14)) {
                lVar10 = plVar11[5];
                piVar15 = (int *)(lVar10 + 0x3c);
                puVar17 = (undefined4 *)(lVar10 + 0x40);
                piVar19 = (int *)(lVar10 + 0x44);
              }
            }
          }
        }
        iVar7 = *piVar19;
        uVar1 = *puVar17;
        iVar20 = *piVar15;
        if ((longlong)(int)uStack_1c0 != 0) {
          lVar10 = (longlong)(int)uStack_1c0 << 5;
          piVar15 = local_1c8;
          do {
            if ((*piVar15 == iVar20) && (piVar15[2] == iVar7)) {
              if ((piVar15 != (int *)0x0) &&
                 (cVar4 = FUN_1403218c0(piVar15 + 3,&local_188), cVar4 != '\0')) goto LAB_1407c1d0e;
              break;
            }
            piVar15 = piVar15 + 8;
            lVar10 = lVar10 + -0x20;
          } while (lVar10 != 0);
        }
        local_158 = 0;
        local_168 = 0;
        uStack_160 = 0;
        uStack_13c = 0;
        iStack_134 = 0;
        local_150 = 0;
        uStack_148 = 0;
        local_140 = local_140 & 0xffffff00;
        uStack_170 = CONCAT44(uStack_170._4_4_,local_90);
        local_178 = local_98;
        FUN_1447715ec(&local_168,local_88);
        local_234 = iVar20;
        local_230 = uVar1;
        local_22c = iVar7;
        FUN_144928d62(&local_168,5,&local_234);
        local_140 = (uint)local_188;
        uStack_13c = CONCAT44(iStack_180,local_188._4_4_);
        iStack_134 = iStack_17c;
        FUN_1405024be(param_1,&local_178,plVar11 + 9,(int)plVar11[0xb]);
        if (local_150 != 0) {
          FUN_1400020a8();
        }
LAB_1407c1d0e:
        if (*(char *)((longlong)param_1 + 0xd) != '\x01') goto LAB_1407c1d60;
        plVar11 = plVar11 + 0xc;
      } while (plVar11 != local_250);
LAB_1407c1d32:
      FUN_1411c1bfc(param_1,&uStack_d0);
      (**(code **)(*local_248 + 0x70))();
      if ((((((*(char *)((longlong)param_1 + 0xd) == '\x01') && ((int)param_1[7] != 0)) &&
            ((longlong *)param_1[0x10] != (longlong *)0x0)) &&
           ((*(int *)((longlong)param_1 + 0x7c) != 0 &&
            (uVar8 = *(uint *)(param_1 + 0xf), -1 < (int)uVar8)))) && ((int)uVar8 < DAT_14c9647dc))
         && (((lVar10 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8), lVar10 != 0
              && (*(int *)(lVar10 + 0x10) == *(int *)((longlong)param_1 + 0x7c))) &&
             (((*(uint *)(lVar10 + 8) & 0x10200000) == 0 &&
              ((lVar10 = (**(code **)(*(longlong *)param_1[0x10] + 0x98))(), lVar10 != 0 &&
               (*(char *)(lVar10 + 0x178) == '\x03')))))))) {
        local_178 = 0;
        uStack_170 = 0;
        if ((longlong)(int)param_1[7] != 0) {
          plVar11 = (longlong *)(param_1[6] + 0x10);
          lVar10 = (longlong)(int)param_1[7] * 0xa8;
          do {
            if (((char)plVar11[-2] == '\0') && (*plVar11 != 0)) {
              FUN_144a6c37a(&local_178,plVar11);
            }
            plVar11 = plVar11 + 0x15;
            lVar10 = lVar10 + -0xa8;
          } while (lVar10 != 0);
        }
        uVar8 = 0;
        if ((((*(int *)((longlong)param_1 + 0x7c) == 0) ||
             (uVar23 = *(uint *)(param_1 + 0xf), (int)uVar23 < 0)) || (DAT_14c9647dc <= (int)uVar23)
            ) || (((plVar11 = (longlong *)
                              ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
                   plVar11 == (longlong *)0x0 ||
                   ((int)plVar11[2] != *(int *)((longlong)param_1 + 0x7c))) ||
                  ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) {
          uVar14 = 0;
        }
        else {
          uVar14 = 0;
          uVar8 = 0;
          if (*plVar11 != 0) {
            uVar8 = *(uint *)(*plVar11 + 0xc);
            if ((int)uVar8 < DAT_14c9647dc) {
              lVar10 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
            }
            else {
              lVar10 = 0;
            }
            uVar14 = (ulonglong)*(uint *)(lVar10 + 0x10);
            if (*(uint *)(lVar10 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              uVar23 = DAT_14c964868 + 1;
              bVar27 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar27) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar23);
              }
              LOCK();
              uVar9 = *(uint *)(lVar10 + 0x10);
              bVar27 = uVar9 == 0;
              if (bVar27) {
                *(uint *)(lVar10 + 0x10) = uVar23;
                uVar9 = 0;
              }
              UNLOCK();
              if (bVar27) {
                uVar9 = uVar23;
              }
              uVar14 = (ulonglong)uVar9;
            }
          }
        }
        if (0 < (int)uStack_170) {
          local_188 = (undefined8 *)0x0;
          iStack_180 = 0;
          FUN_1446efa72(&local_188,0,3,0x10);
          iStack_180 = 3;
          *local_188 = &PTR_LAB_14b3fd3b0;
          LOCK();
          UNLOCK();
          lVar25 = DAT_14c758608 + 1;
          lVar10 = DAT_14c758608 + 1;
          if (lVar25 == 0) {
            LOCK();
            UNLOCK();
            lVar25 = DAT_14c758608 + 2;
            lVar10 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar10;
          local_188[2] = lVar25;
          *local_188 = &PTR_FUN_14b3fd340;
          local_188[3] = param_1;
          local_188[4] = (ulonglong)uVar8 | uVar14 << 0x20;
          (**(code **)(*local_240 + 0x80))(local_240,&local_190,&local_178,&local_188);
          param_1[0x14] = local_190;
          if (iStack_180 != 0) {
            if (local_188 == (undefined8 *)0x0) goto LAB_1407c2221;
            if (*(code **)*local_188 == FUN_145715146) {
              *local_188 = &PTR_FUN_14b478da0;
              plVar11 = (longlong *)local_188[4];
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                piVar15 = (int *)((longlong)plVar11 + 0xc);
                *piVar15 = *piVar15 + -1;
                UNLOCK();
                if (*piVar15 == 0) {
                  (**(code **)(*plVar11 + 0x10))();
                }
              }
            }
            else {
              (**(code **)*local_188)(local_188,0);
            }
            FUN_1446efa72(&local_188,0,0,0x10);
            iStack_180 = 0;
          }
          if (local_188 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
LAB_1407c2221:
        FUN_1405a453e(param_1);
        FUN_140861e20(local_178,uStack_170 & 0xffffffff);
        if (local_178 != 0) {
          FUN_1400020a8();
        }
      }
    }
LAB_1407c1d60:
    FUN_1409838b8(&local_130);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_1f0 == 0) {
LAB_1407c1dbe:
      if (local_1f8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_1f8 != (undefined8 *)0x0) {
      (**(code **)*local_1f8)(local_1f8,0);
      FUN_1446efa72(&local_1f8,0,0,0x10);
      local_1f0 = 0;
      goto LAB_1407c1dbe;
    }
    if (local_1e0 == 0) {
LAB_1407c1e0f:
      if (local_1e8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_1e8 != (undefined8 *)0x0) {
      (**(code **)*local_1e8)(local_1e8,0);
      FUN_1446efa72(&local_1e8,0,0,0x10);
      local_1e0 = 0;
      goto LAB_1407c1e0f;
    }
    FUN_1405dc41e(local_1d8,uStack_1d0 & 0xffffffff);
    if (local_1d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_1c8 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)((longlong)param_1 + 0xd) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xd) = 2;
  }
LAB_1407c0b70:
  if ((local_60 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407c2aca FUN_1407c2aca body=343 status=ok
// SIG undefined FUN_1407c2aca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1407c2aca(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  HANDLE hProcess;
  undefined1 auStackY_98 [32];
  _FILETIME local_68;
  _FILETIME local_60;
  _FILETIME local_58;
  _FILETIME local_50;
  _FILETIME local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStackY_98;
  local_48.dwLowDateTime = 0;
  local_48.dwHighDateTime = 0;
  local_50.dwLowDateTime = 0;
  local_50.dwHighDateTime = 0;
  local_58.dwLowDateTime = 0;
  local_58.dwHighDateTime = 0;
  local_60.dwLowDateTime = 0;
  local_60.dwHighDateTime = 0;
  local_68.dwLowDateTime = 0;
  local_68.dwHighDateTime = 0;
  hProcess = GetCurrentProcess();
  GetProcessTimes(hProcess,&local_48,&local_50,&local_58,&local_60);
  GetSystemTimeAsFileTime(&local_68);
  dVar1 = (((double)CONCAT44(0x43300000,local_60.dwLowDateTime) - 4503599627370496.0) +
          ((double)CONCAT44(0x45300000,local_60.dwHighDateTime) - 1.9342813113834067e+25)) /
          10000000.0 +
          (((double)CONCAT44(0x43300000,local_58.dwLowDateTime) - 4503599627370496.0) +
          ((double)CONCAT44(0x45300000,local_58.dwHighDateTime) - 1.9342813113834067e+25)) /
          10000000.0;
  dVar2 = dVar1 - _DAT_14c8c4558;
  if (0.0 < dVar2) {
    dVar3 = (((double)CONCAT44(0x43300000,local_68.dwLowDateTime) - 4503599627370496.0) +
            ((double)CONCAT44(0x45300000,local_68.dwHighDateTime) - 1.9342813113834067e+25)) /
            10000000.0 -
            (((double)CONCAT44(0x43300000,local_48.dwLowDateTime) - 4503599627370496.0) +
            ((double)CONCAT44(0x45300000,local_48.dwHighDateTime) - 1.9342813113834067e+25)) /
            10000000.0;
    DAT_14c8c454c = (float)((dVar2 / (dVar3 - _DAT_14c8c4550)) * 100.0);
    _DAT_14c8c4550 = dVar3;
    _DAT_14c8c4558 = dVar1;
  }
  if ((local_40 ^ (ulonglong)auStackY_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407c2c22 FUN_1407c2c22 body=117 status=ok
// SIG undefined FUN_1407c2c22(void)

void FUN_1407c2c22(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1407c2c98(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1407c2c98 FUN_1407c2c98 body=317 status=ok
// SIG undefined FUN_1407c2c98(void)

void FUN_1407c2c98(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407c2d06;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
      }
    }
LAB_1407c2d06:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1407c2dd6 FUN_1407c2dd6 body=174 status=ok
// SIG undefined FUN_1407c2dd6(void)

void FUN_1407c2dd6(longlong param_1)

{
  FUN_1407c2e84();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cace978) {
    FUN_144b3d300(&DAT_14cace978);
    if (DAT_14cace978 == -1) {
      DAT_14cace974 = '\0';
      FUN_14052bb08(DAT_14c872ce0,L"Kismet",L"bPersistentUberGraphFrame",&DAT_14cace974,
                    &DAT_14c872ce8);
      _Init_thread_footer(&DAT_14cace978);
    }
  }
  if ((DAT_14cace974 == '\x01') && (*(longlong *)(param_1 + 0x2d0) != 0)) {
    *(code **)(param_1 + 0xc0) = FUN_14056ae7e;
  }
  return;
}



// FUNCTION 1407c2e84 FUN_1407c2e84 body=467 status=ok
// SIG undefined FUN_1407c2e84(void)

void FUN_1407c2e84(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x19 & 1) != 0) {
      local_28 = (undefined2 *)0x0;
      uStack_20 = 0;
      FUN_1401031ac(param_1,0,&local_28);
      puVar4 = local_28;
      if ((int)uStack_20 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/Class.cpp",0x1396,
                    L"Can\'t bind to native class %s",puVar4);
      if (local_28 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar2 = *(longlong *)(param_1 + 0xb0);
      goto LAB_1407c2ea8;
    }
    plVar3 = *(longlong **)(param_1 + 0x40);
    if (plVar3 != (longlong *)0x0) goto LAB_1407c2f29;
  }
  else {
LAB_1407c2ea8:
    plVar3 = *(longlong **)(param_1 + 0x40);
    if (plVar3 != (longlong *)0x0) {
      if (((lVar2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) &&
         (*(longlong *)(param_1 + 0xb8) != 0)) goto LAB_1407c2ece;
LAB_1407c2f29:
      (**(code **)(*plVar3 + 0x2a8))(plVar3);
      lVar2 = *(longlong *)(param_1 + 0xb0);
      if (lVar2 == 0) {
        lVar2 = plVar3[0x16];
        *(longlong *)(param_1 + 0xb0) = lVar2;
      }
      if (*(longlong *)(param_1 + 0xb8) == 0) {
        *(longlong *)(param_1 + 0xb8) = plVar3[0x17];
      }
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        *(longlong *)(param_1 + 0xc0) = plVar3[0x18];
      }
      *(ulonglong *)(param_1 + 0xd8) = *(ulonglong *)(param_1 + 0xd8) | plVar3[0x1b];
    }
    if (lVar2 != 0) goto LAB_1407c2ece;
  }
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  FUN_1401031ac(param_1,0,&local_28);
  puVar4 = local_28;
  if ((int)uStack_20 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/Class.cpp",0x13b6,
                L"Can\'t find ClassConstructor for class %s",puVar4);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1407c2ece:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407c3058 FUN_1407c3058 body=379 status=ok
// SIG undefined FUN_1407c3058(void)

void FUN_1407c3058(longlong param_1,__uint64 *param_2,__uint64 param_3,undefined8 *param_4)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  __uint64 _Var4;
  AKRESULT AVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != (__uint64 *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x40);
    local_60 = (void *)0x0;
    local_58 = *(int *)(param_4 + 1);
    lVar6 = (longlong)local_58;
    pvVar3 = (void *)*param_4;
    if (lVar6 == 0) {
      local_54 = 0;
    }
    else {
      FUN_1446dd670(&local_60,local_58,0);
      memcpy(local_60,pvVar3,lVar6 * 2);
    }
    pvVar3 = local_60;
    if (*param_2 == 0xffffffffffffffff) {
      local_50 = (void *)0x0;
      lVar6 = (longlong)local_58;
      local_48 = local_58;
      if (lVar6 == 0) {
        local_44 = 0;
      }
      else {
        FUN_1446dd670(&local_50,local_58,0);
        memcpy(local_50,pvVar3,lVar6 * 2);
      }
      _Var4 = DAT_14c7626a8;
      DAT_14c7626a8 = DAT_14c7626a8 + 1;
      AVar5 = AK::SoundEngine::RegisterGameObj(_Var4);
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((_Var4 != 0xffffffffffffffff) && (AVar5 == 1)) {
        *param_2 = _Var4;
        param_2[1] = param_3;
        iVar1 = (int)plVar2[1];
        *(uint *)(plVar2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
          FUN_1407c33ba(plVar2,iVar1);
        }
        *(__uint64 **)(*plVar2 + (longlong)iVar1 * 8) = param_2;
        FUN_1407c31d4(plVar2,param_2);
      }
    }
    if (local_60 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407c31d4 FUN_1407c31d4 body=480 status=ok
// SIG undefined FUN_1407c31d4(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1407c31d4(longlong param_1,__uint64 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  __uint64 *p_Var4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  __uint64 *p_Var8;
  longlong lVar9;
  longlong *plVar10;
  __uint64 *p_Var11;
  longlong *plVar12;
  __uint64 _Var13;
  uint uVar14;
  undefined8 auStack_90 [4];
  undefined8 uStack_70;
  __uint64 a_Stack_68 [2];
  __uint64 *local_58;
  __uint64 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  _Var13 = 1;
  if (*(char *)((longlong)param_2 + 0x114) != '\x01') {
    _Var13 = param_2[1];
  }
  local_58 = param_2 + 0x14;
  iVar3 = *(int *)((longlong)param_2 + 0xac);
  auStack_90[0] = 0x1407c3237;
  FUN_14008920e(param_2[0x14],(int)param_2[0x15]);
  *(undefined4 *)(param_2 + 0x15) = 0;
  if ((iVar3 < 0) && (*(int *)((longlong)param_2 + 0xac) != 0)) {
    auStack_90[0] = 0x1407c33b0;
    FUN_147f80b46(local_58);
  }
  p_Var11 = a_Stack_68;
  lVar9 = (longlong)*(int *)(param_1 + 0x18);
  if (0 < lVar9) {
    uStack_70 = 0x1407c3274;
    lVar7 = -(lVar9 * 8 + 0x1eU & 0xfffffffffffffff0);
    local_50 = (__uint64 *)((longlong)a_Stack_68 + lVar7);
    p_Var11 = (__uint64 *)((longlong)a_Stack_68 + lVar7);
    plVar12 = *(longlong **)(param_1 + 0x10);
    plVar10 = plVar12 + lVar9 * 2;
    uVar14 = 0;
    a_Stack_68[1] = _Var13;
    do {
      p_Var8 = local_58;
      p_Var4 = (__uint64 *)*plVar12;
      plVar5 = (longlong *)plVar12[1];
      if (plVar5 == (longlong *)0x0) {
        if (p_Var4[1] == _Var13) {
          local_50[(int)uVar14] = *p_Var4;
          goto LAB_1407c32d3;
        }
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        if (p_Var4[1] == _Var13) {
          local_50[(int)uVar14] = *p_Var4;
          LOCK();
          *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
          UNLOCK();
LAB_1407c32d3:
          iVar3 = (int)param_2[0x15];
          *(uint *)(param_2 + 0x15) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xac) < iVar3 + 1U) {
            *(undefined8 *)((longlong)auStack_90 + lVar7) = 0x1407c32fd;
            FUN_14181a2de(p_Var8,iVar3);
          }
          uVar14 = uVar14 + 1;
          _Var13 = *local_58;
          *(__uint64 **)(_Var13 + (longlong)iVar3 * 0x10) = p_Var4;
          *(longlong **)(_Var13 + 8 + (longlong)iVar3 * 0x10) = plVar5;
          _Var13 = a_Stack_68[1];
          if (plVar5 == (longlong *)0x0) goto LAB_1407c3350;
        }
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          pcVar6 = *(code **)*plVar5;
          *(undefined8 *)((longlong)auStack_90 + lVar7) = 0x1407c3334;
          (*pcVar6)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            pcVar6 = *(code **)(*plVar5 + 0x10);
            *(undefined8 *)((longlong)auStack_90 + lVar7) = 0x1407c334c;
            (*pcVar6)(plVar5);
          }
        }
      }
LAB_1407c3350:
      p_Var4 = local_50;
      plVar12 = plVar12 + 2;
    } while (plVar12 != plVar10);
    _Var13 = *param_2;
    *(undefined8 *)((longlong)auStack_90 + lVar7) = 0x1407c3370;
    AK::SoundEngine::SetListeners(_Var13,p_Var4,uVar14);
  }
  if ((local_48 ^ (ulonglong)&local_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)p_Var11 + -0x28) = &UNK_1407c339e;
  FUN_144d8e3a0();
}



// FUNCTION 1407c33ba FUN_1407c33ba body=353 status=ok
// SIG undefined FUN_1407c33ba(void)

void FUN_1407c33ba(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407c3441;
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
LAB_1407c3441:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1407c351c FUN_1407c351c body=1773 status=ok
// SIG undefined FUN_1407c351c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407c351c(longlong *param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  float *pfVar1;
  longlong lVar2;
  void *_Src;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  void **ppvVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  bool bVar19;
  float fVar20;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  void *local_f0;
  int local_e8;
  void **local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_f0 = (void *)CONCAT44(local_f0._4_4_,param_2);
    uVar8 = FUN_14477b072(param_1,DAT_14cac9bd0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar8,&local_f0);
    lVar6 = FUN_1447210f0(param_1);
    if (lVar6 != 0) {
      if (*(longlong *)(lVar6 + 0x1f0) == 0) {
        lVar12 = lVar6 + 0x460;
      }
      else {
        lVar12 = *(longlong *)(*(longlong *)(lVar6 + 0x1f0) + 0xf8);
      }
      FUN_140e65914(lVar12,param_1,*(undefined4 *)(lVar6 + 0x6f4));
    }
  }
  lVar6 = FUN_1447210f0(param_1);
  if (lVar6 != 0) {
    fVar20 = (float)*(double *)(lVar6 + 0x6d0);
    if (_DAT_14c7639b0 < fVar20 - *(float *)(param_1 + 0x7f)) {
      *(float *)(param_1 + 0x7f) = fVar20;
      uVar5 = *(uint *)(param_1 + 0x7e);
      uVar15 = (ulonglong)(int)uVar5;
      if (0 < (longlong)uVar15) {
        fVar20 = fVar20 - _DAT_14c7639ac;
        iVar16 = -uVar5;
        lVar6 = uVar15 << 4;
        do {
          pfVar1 = (float *)(param_1[0x7d] + -8 + lVar6);
          if (*pfVar1 <= fVar20 && fVar20 != *pfVar1) {
            plVar3 = *(longlong **)(param_1[0x7d] + -0x10 + lVar6);
            if ((plVar3 != (longlong *)0x0) && ((*(uint *)(plVar3 + 1) >> 0x1e & 1) == 0)) {
              (**(code **)(*plVar3 + 0x420))();
              uVar5 = *(uint *)(param_1 + 0x7e);
            }
            if (uVar15 != uVar5) {
              iVar18 = uVar5 + iVar16;
              if (0 < iVar18) {
                iVar18 = 1;
              }
              memmove((void *)(param_1[0x7d] + lVar6 + -0x10),
                      (void *)((longlong)(int)(uVar5 - iVar18) * 0x10 + param_1[0x7d]),
                      (longlong)iVar18 << 4);
              uVar5 = *(uint *)(param_1 + 0x7e);
            }
            uVar5 = uVar5 - 1;
            *(uint *)(param_1 + 0x7e) = uVar5;
          }
          iVar16 = iVar16 + 1;
          lVar6 = lVar6 + -0x10;
          bVar19 = 1 < uVar15;
          uVar15 = uVar15 - 1;
        } while (bVar19);
      }
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x89);
    EnterCriticalSection(lpCriticalSection);
    plVar3 = param_1 + 0x8e;
    uVar5 = *(uint *)(param_1 + 0x91);
    if ((longlong)(int)uVar5 != 0) {
      iVar16 = (int)param_1[0x8f];
      *(uint *)(param_1 + 0x8f) = iVar16 + uVar5;
      if ((uint)(*(int *)((longlong)param_1 + 0x47c) - iVar16) < uVar5) {
        FUN_145890ff6(plVar3,iVar16);
      }
      memcpy((void *)((longlong)iVar16 * 0x18 + *plVar3),(void *)param_1[0x90],
             (longlong)(int)uVar5 * 0x18);
    }
    *(undefined4 *)(param_1 + 0x91) = 0;
    if (*(int *)((longlong)param_1 + 0x48c) < 0) {
      FUN_1488e4dfc(param_1 + 0x90);
    }
    LeaveCriticalSection(lpCriticalSection);
    fVar20 = (float)FUN_1407c3c0a(param_1);
    uVar5 = *(uint *)(param_1 + 0x8f);
    if (0 < (int)uVar5) {
      lVar6 = 0;
      do {
        FUN_1488e1030(param_1[0x8e] + lVar6,param_1,
                      *(float *)(param_1 + 0x88) <= fVar20 && fVar20 != *(float *)(param_1 + 0x88));
        lVar6 = lVar6 + 0x18;
      } while ((ulonglong)uVar5 * 0x18 != lVar6);
      uVar15 = (ulonglong)(int)param_1[0x8f];
      local_70 = (void **)0x0;
      local_68 = 0x1000000000;
      if (0 < (longlong)uVar15) {
        iVar16 = -(int)param_1[0x8f];
        lVar6 = uVar15 * 0x18;
        do {
          lVar12 = *plVar3;
          if (*(int *)(lVar12 + -8 + lVar6) != 0) {
            lVar17 = (longlong)(int)local_68;
            uVar5 = (int)local_68 + 1;
            local_68 = CONCAT44(local_68._4_4_,uVar5);
            if (local_68._4_4_ < uVar5) {
              FUN_1488e4f60(&local_f0);
            }
            ppvVar9 = local_70;
            if (local_70 == (void **)0x0) {
              ppvVar9 = &local_f0;
            }
            ppvVar9[lVar17] = *(void **)(lVar12 + -0x18 + lVar6);
            uVar5 = *(uint *)(param_1 + 0x8f);
            if (uVar15 != uVar5) {
              memmove((void *)(param_1[0x8e] + lVar6 + -0x18),(void *)(param_1[0x8e] + lVar6),
                      (longlong)(int)(uVar5 + iVar16) * 0x18);
              uVar5 = *(uint *)(param_1 + 0x8f);
            }
            *(uint *)(param_1 + 0x8f) = uVar5 - 1;
          }
          iVar16 = iVar16 + 1;
          lVar6 = lVar6 + -0x18;
          bVar19 = 1 < uVar15;
          uVar15 = uVar15 - 1;
        } while (bVar19);
        if (0 < (int)local_68) {
          EnterCriticalSection(lpCriticalSection);
          FUN_1488e1322(param_1 + 0x92);
          bVar19 = (longlong)local_68 < 0;
          local_68 = local_68 & 0xffffffff00000000;
          if (bVar19) {
            FUN_1488e5066(&local_f0);
          }
          LeaveCriticalSection(lpCriticalSection);
        }
      }
      if (local_70 != (void **)0x0) {
        FUN_1400020a8();
      }
    }
  }
  iVar16 = DAT_14c7639a4;
  if (0 < (int)param_1[0x76]) {
    iVar18 = (int)param_1[0x76] + -1;
    lVar6 = 0;
    do {
      lVar12 = *(longlong *)(param_1[0x75] + lVar6 * 8);
      if (*(char *)(lVar12 + 8) == '\x01') {
        *(undefined1 *)(lVar12 + 8) = 0;
        iVar4 = *(int *)(lVar12 + 0x18);
        if (0 < iVar4) {
          lVar17 = 0;
          iVar11 = 0;
          do {
            lVar2 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + lVar17 * 8);
            if (lVar2 == 0) {
              iVar11 = iVar11 + -1;
            }
            else if (iVar11 < 0) {
              *(longlong *)(*(longlong *)(lVar12 + 0x10) + (longlong)((int)lVar17 + iVar11) * 8) =
                   lVar2;
              iVar4 = *(int *)(lVar12 + 0x18);
            }
            lVar17 = lVar17 + 1;
          } while (lVar17 < iVar4);
          if (iVar11 < 0) {
            iVar4 = iVar11 + iVar4;
            if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar4);
            }
            *(int *)(lVar12 + 0x18) = iVar4;
          }
        }
        if (iVar4 == 0) {
          *(undefined4 *)(lVar12 + 4) = 0;
          pbVar7 = *(byte **)(lVar12 + 0x50);
          if ((pbVar7 == (byte *)0x0) || ((*pbVar7 & 1) == 0)) {
            *(undefined1 *)(lVar12 + 0x3b) = 0;
          }
          else {
            if (*(char *)(lVar12 + 0x3b) != '\0') {
              uVar8 = *(undefined8 *)(pbVar7 + 0x28);
              FUN_1402eb48e(uVar8,lVar12 + 0x30);
              *(undefined1 *)(lVar12 + 0x3b) = 0;
              FUN_1402eb97e(uVar8);
              if (*(char *)(lVar12 + 0x3b) != '\0') goto LAB_1407c362e;
              pbVar7 = *(byte **)(lVar12 + 0x50);
            }
            pbVar7[0x24] = 0;
            pbVar7[0x25] = 0;
            pbVar7[0x26] = 0x80;
            pbVar7[0x27] = 0xbf;
          }
        }
      }
LAB_1407c362e:
      iVar4 = *(int *)(lVar12 + 0x18);
      if (((0 < iVar4) && (iVar11 = iVar16 - iVar4, iVar11 != 0 && iVar4 <= iVar16)) &&
         (lVar17 = (longlong)iVar18, lVar6 < lVar17)) {
        do {
          lVar2 = *(longlong *)(param_1[0x75] + lVar17 * 8);
          iVar18 = *(int *)(lVar2 + 0x18);
          if (iVar18 < iVar16) {
            if (0 < iVar18) {
LAB_1407c38a4:
              lVar10 = 0;
              do {
                lVar13 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar10 * 8);
                if (lVar13 != 0) {
                  *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + lVar10 * 8) = 0;
                  *(undefined1 *)(lVar2 + 8) = 1;
                  *(int *)(lVar13 + 0x68) = (int)lVar6;
                  iVar18 = *(int *)(lVar12 + 0x18);
                  *(uint *)(lVar12 + 0x18) = iVar18 + 1U;
                  lVar14 = (longlong)iVar18;
                  local_f8 = lVar10;
                  if (*(uint *)(lVar12 + 0x1c) < iVar18 + 1U) {
                    local_108 = (longlong)iVar18;
                    local_100 = lVar13;
                    FUN_1457457e2(lVar12 + 0x10,iVar18);
                    lVar13 = local_100;
                    lVar14 = local_108;
                  }
                  *(longlong *)(*(longlong *)(lVar12 + 0x10) + lVar14 * 8) = lVar13;
                  FUN_1407c404e(lVar13);
                  iVar11 = iVar11 + -1;
                  if (iVar11 == 0) goto LAB_1407c36c6;
                  iVar18 = *(int *)(lVar2 + 0x18);
                  lVar10 = local_f8;
                }
                lVar10 = lVar10 + 1;
              } while (lVar10 < iVar18);
            }
          }
          else if ((0 < iVar18) && (*(char *)(lVar2 + 8) != '\0')) goto LAB_1407c38a4;
          lVar17 = lVar17 + -1;
        } while (lVar6 < lVar17);
LAB_1407c36c6:
        iVar18 = (int)lVar17;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[0x76]);
  }
  iVar16 = (int)param_1[0x78];
  if (0 < (longlong)iVar16) {
    local_f0 = (void *)0x0;
    _Src = (void *)param_1[0x77];
    local_e8 = iVar16;
    FUN_1407c3c52(&local_f0,iVar16);
    memcpy(local_f0,_Src,(longlong)iVar16 << 3);
    lVar6 = (longlong)local_e8;
    if (0 < lVar6) {
      lVar12 = 0;
      do {
        FUN_1407c3d8a(param_1,*(undefined8 *)((longlong)local_f0 + lVar12 * 8),1);
        lVar12 = lVar12 + 1;
      } while (lVar6 != lVar12);
    }
    if (local_f0 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407c3c0a FUN_1407c3c0a body=72 status=ok
// SIG undefined FUN_1407c3c0a(void)

float FUN_1407c3c0a(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = FUN_1447210f0();
  fVar3 = 1.0;
  if ((*(longlong *)(lVar2 + 0x30) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b0), lVar2 != 0)) {
    fVar1 = *(float *)(lVar2 + 0x4c8);
    fVar3 = 1.0;
    if (1.0 <= fVar1) {
      fVar3 = fVar1;
    }
  }
  return fVar3 * *(float *)(param_1 + 0x43c);
}



// FUNCTION 1407c3c52 FUN_1407c3c52 body=311 status=ok
// SIG undefined FUN_1407c3c52(void)

void FUN_1407c3c52(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  
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
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1407c3cb3;
            lVar1 = uVar5 + 1 + uVar7;
            uVar7 = uVar7 - 1;
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
LAB_1407c3cb3:
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 >> 3)) {
    uVar4 = uVar3 >> 3 & 0xffffffff;
  }
  iVar6 = (int)uVar4;
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar4,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar6;
  return;
}



// FUNCTION 1407c3d8a FUN_1407c3d8a body=661 status=ok
// SIG undefined FUN_1407c3d8a(void)

void FUN_1407c3d8a(longlong param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_1447210f0();
  if ((*(byte *)(param_2 + 0x2ea) & 0x80) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x6b8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
LAB_1407c3ff7:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
    if (lVar1 != 0) goto LAB_1407c3ff7;
  }
  if ((4 < *(byte *)(lVar5 + 0x151) & (param_3 ^ 1)) == 0) {
    if (0 < (int)*(uint *)(param_1 + 0x3b0)) {
      uVar6 = 0;
      do {
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x3a8) + uVar6 * 8) + 0x18) <
            DAT_14c7639a4) goto LAB_1407c3e12;
        uVar6 = uVar6 + 1;
      } while (*(uint *)(param_1 + 0x3b0) != uVar6);
    }
    if (0 < DAT_14c7639a4) {
      uVar6 = FUN_145745866(param_1);
LAB_1407c3e12:
      iVar4 = (int)uVar6;
      if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x3b0))) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3a8) + (uVar6 & 0xffffffff) * 8);
        *(int *)(param_2 + 0x68) = iVar4;
        lVar5 = lVar1 + 0x30;
        pbVar2 = *(byte **)(lVar1 + 0x50);
        if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 1) == 0)) {
          *(undefined1 *)(lVar1 + 0x3b) = 1;
        }
        else if (*(char *)(lVar1 + 0x3b) == '\0') {
          uVar3 = *(undefined8 *)(pbVar2 + 0x28);
          FUN_1402eb48e(uVar3,lVar5);
          *(undefined1 *)(lVar1 + 0x3b) = 1;
          FUN_1402eb97e(uVar3,lVar5);
          if (*(char *)(lVar1 + 0x3b) == '\0') {
            *(undefined4 *)(*(longlong *)(lVar1 + 0x50) + 0x24) = 0xbf800000;
          }
        }
        iVar4 = *(int *)(lVar1 + 0x18);
        *(uint *)(lVar1 + 0x18) = iVar4 + 1U;
        if (*(uint *)(lVar1 + 0x1c) < iVar4 + 1U) {
          FUN_1457457e2((longlong *)(lVar1 + 0x10),iVar4);
        }
        *(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar4 * 8) = param_2;
        FUN_1407c404e(param_2,lVar5);
        local_40 = param_2;
        if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(param_2);
        }
        FUN_1407c4170(param_1 + 0x3b8,&local_40,1);
        goto LAB_1407c3ead;
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x3c0);
  if ((longlong)iVar4 != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x3b8) + lVar5) == param_2) goto LAB_1407c3ead;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar4 * 8 - lVar5 != 0);
  }
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
    iVar4 = *(int *)(param_1 + 0x3c0);
  }
  *(uint *)(param_1 + 0x3c0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x3c4) < iVar4 + 1U) {
    FUN_1407c430e((longlong *)(param_1 + 0x3b8),iVar4);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x3b8) + (longlong)iVar4 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
LAB_1407c3ead:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407c404e FUN_1407c404e body=289 status=ok
// SIG undefined FUN_1407c404e(void)

void FUN_1407c404e(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x970) != param_2) {
    if ((*(longlong *)(param_1 + 0x970) != 0) && (*(longlong *)(param_1 + 0x80) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      FUN_1401c4d5c(*(longlong *)(param_1 + 0x80) + 0x40,uVar2);
      if (*(longlong *)(param_1 + 0x88) != 0) {
        FUN_1401c4d5c(*(longlong *)(param_1 + 0x88) + 0x40,uVar2,*(undefined8 *)(param_1 + 0x970));
      }
    }
    *(longlong *)(param_1 + 0x970) = param_2;
    if ((param_2 != 0) && (*(longlong *)(param_1 + 0x80) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      FUN_14082bc44(*(longlong *)(param_1 + 0x80) + 0x40,uVar2,param_2);
      if (*(longlong *)(param_1 + 0x88) != 0) {
        FUN_14082bc44(*(longlong *)(param_1 + 0x88) + 0x40,uVar2,*(undefined8 *)(param_1 + 0x970));
      }
    }
    iVar1 = *(int *)(param_1 + 0x6d0);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x6c8);
      lVar5 = 0;
      do {
        lVar4 = *(longlong *)(lVar3 + lVar5);
        if ((lVar4 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar4);
LAB_1407c412a:
          if ((*(byte *)(lVar4 + 0x2ea) & 0x80) != 0) {
            FUN_1407c404e(lVar4,param_2);
          }
        }
        else if (lVar4 != 0) goto LAB_1407c412a;
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  return;
}



// FUNCTION 1407c4170 FUN_1407c4170 body=272 status=ok
// SIG undefined FUN_1407c4170(void)

void FUN_1407c4170(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    iVar6 = 1;
    lVar7 = 0;
    lVar9 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar1 + lVar7) == lVar2) {
        if (iVar6 == 0) {
          return;
        }
        iVar5 = (int)param_1[1];
        iVar6 = iVar5 - iVar6;
        if (iVar6 != 0) {
          iVar8 = 1;
          if (iVar6 < 1) {
            iVar8 = iVar6;
          }
          memmove((void *)(*param_1 + (lVar9 >> 0x20) * 8),
                  (void *)(*param_1 + (longlong)(iVar5 - iVar8) * 8),(longlong)iVar8 << 3);
          iVar5 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar5 + -1;
        if (param_3 != '\x01') {
          return;
        }
        FUN_1407c4280(param_1);
        return;
      }
      lVar9 = lVar9 + 0x100000000;
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar7);
  }
  return;
}



// FUNCTION 1407c4280 FUN_1407c4280 body=142 status=ok
// SIG undefined FUN_1407c4280(void)

void FUN_1407c4280(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 1407c430e FUN_1407c430e body=353 status=ok
// SIG undefined FUN_1407c430e(void)

void FUN_1407c430e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407c4393;
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
LAB_1407c4393:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1407c4470 FUN_1407c4470 body=978 status=ok
// SIG undefined FUN_1407c4470(void)

void FUN_1407c4470(float *param_1,float param_2,ulonglong *param_3)

{
  float *pfVar1;
  ulonglong uVar2;
  byte bVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  uint uVar12;
  float *pfVar13;
  longlong lVar14;
  float fVar15;
  
  if ((1e-08 < param_2) || (*(char *)(param_1 + 1) == '\x01')) {
    pfVar7 = param_1 + 2;
    fVar9 = param_1[0x184];
    fVar11 = param_1[0x18d];
    if (fVar9 != fVar11) {
      uVar2 = *param_3;
      uVar8 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      pfVar6 = param_1 + 0x18e;
      if (*(float **)(param_1 + 0x1ae) != (float *)0x0) {
        pfVar6 = *(float **)(param_1 + 0x1ae);
      }
      fVar15 = pfVar6[(int)param_1[0x1b0] - 1U & (uVar8 >> 0x10 ^ uVar8)];
      if (fVar15 != -NAN) {
        pfVar6 = *(float **)(param_1 + 0x182);
        if (*(float **)(param_1 + 0x182) == (float *)0x0) {
          pfVar6 = pfVar7;
        }
        do {
          pfVar13 = pfVar6 + (longlong)(int)fVar15 * 6;
          if (*(ulonglong *)pfVar13 == uVar2) {
            if (pfVar13 + 2 != (float *)0x0 && pfVar13 != (float *)0x0) {
              fVar15 = *param_1 - pfVar13[2];
              goto LAB_1407c4516;
            }
            break;
          }
          fVar15 = pfVar13[4];
        } while (fVar15 != -NAN);
      }
    }
    fVar15 = *param_1;
LAB_1407c4516:
    *param_1 = fVar15 + param_2;
    if (fVar11 == 0.0) {
      param_1[0x184] = (float)((int)fVar9 + 1);
      if (param_1[0x185] == fVar9) {
        FUN_1488d112c(pfVar7,fVar9);
      }
      lVar14 = (longlong)(int)fVar9;
      iVar5 = FUN_1407c4842(param_1 + 0x186,1);
      pfVar6 = *(float **)(param_1 + 0x188);
      if (*(float **)(param_1 + 0x188) == (float *)0x0) {
        pfVar6 = param_1 + 0x186;
      }
      iVar10 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar10 = iVar5;
      }
      bVar3 = (byte)iVar5 & 0x1f;
      pfVar6[iVar10 >> 5] =
           (float)((uint)pfVar6[iVar10 >> 5] & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3));
    }
    else {
      pfVar6 = *(float **)(param_1 + 0x182);
      if (*(float **)(param_1 + 0x182) == (float *)0x0) {
        pfVar6 = pfVar7;
      }
      fVar9 = param_1[0x18c];
      lVar14 = (longlong)(int)fVar9;
      fVar15 = pfVar6[lVar14 * 6 + 1];
      param_1[0x18c] = fVar15;
      param_1[0x18d] = (float)((int)fVar11 + -1);
      if ((float)((int)fVar11 + -1) != 0.0) {
        pfVar6[(longlong)(int)fVar15 * 6] = -NAN;
      }
    }
    pfVar6 = param_1 + 0x186;
    if (*(float **)(param_1 + 0x188) != (float *)0x0) {
      pfVar6 = *(float **)(param_1 + 0x188);
    }
    fVar11 = (float)((int)fVar9 + 0x1f);
    if (-1 < (int)fVar9) {
      fVar11 = fVar9;
    }
    pfVar6[(int)fVar11 >> 5] =
         (float)((uint)pfVar6[(int)fVar11 >> 5] | 1 << (SUB41(fVar9,0) & 0x1f));
    pfVar6 = *(float **)(param_1 + 0x182);
    if (*(float **)(param_1 + 0x182) == (float *)0x0) {
      pfVar6 = pfVar7;
    }
    pfVar6 = pfVar6 + lVar14 * 6;
    uVar2 = *param_3;
    *(ulonglong *)pfVar6 = uVar2;
    pfVar6[2] = param_2;
    pfVar6[4] = -NAN;
    uVar8 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    uVar8 = uVar8 >> 0x10 ^ uVar8;
    uVar12 = (int)param_1[0x184] - (int)param_1[0x18d];
    if (uVar12 < 2) {
      fVar11 = param_1[0x1b0];
    }
    else {
      pfVar13 = param_1 + 0x18e;
      if (*(float **)(param_1 + 0x1ae) != (float *)0x0) {
        pfVar13 = *(float **)(param_1 + 0x1ae);
      }
      fVar11 = param_1[0x1b0];
      fVar15 = pfVar13[(int)fVar11 - 1U & uVar8];
      if (fVar15 != -NAN) {
        pfVar13 = *(float **)(param_1 + 0x182);
        if (*(float **)(param_1 + 0x182) == (float *)0x0) {
          pfVar13 = pfVar7;
        }
        do {
          pfVar1 = pfVar13 + (longlong)(int)fVar15 * 6;
          if (*(ulonglong *)pfVar1 == uVar2) {
            fVar11 = pfVar6[1];
            fVar15 = pfVar6[2];
            fVar4 = pfVar6[3];
            *pfVar1 = *pfVar6;
            pfVar1[1] = fVar11;
            pfVar1[2] = fVar15;
            pfVar1[3] = fVar4;
            FUN_1488d1a44(pfVar7,fVar9);
            return;
          }
          fVar15 = pfVar1[4];
        } while (fVar15 != -NAN);
      }
    }
    uVar2 = (ulonglong)(((uVar12 >> 1) - 1) + (uint)(uVar12 >> 1 == 0)) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    fVar15 = (float)(1 << ((byte)lVar14 & 0x1f));
    if ((uint)lVar14 < 5) {
      fVar15 = 4.48416e-44;
    }
    if (uVar12 < 4) {
      fVar15 = 4.48416e-44;
    }
    if ((0 < (int)uVar12) && ((int)fVar11 < (int)fVar15)) {
      param_1[0x1b0] = fVar15;
      FUN_140996be0(pfVar7);
      return;
    }
    fVar11 = (float)((int)fVar11 - 1U & uVar8);
    pfVar6[5] = fVar11;
    pfVar7 = *(float **)(param_1 + 0x1ae);
    if (*(float **)(param_1 + 0x1ae) == (float *)0x0) {
      pfVar7 = param_1 + 0x18e;
    }
    pfVar6[4] = pfVar7[(longlong)(int)param_1[0x1b0] - 1U & (longlong)(int)fVar11];
    pfVar7 = *(float **)(param_1 + 0x1ae);
    if (*(float **)(param_1 + 0x1ae) == (float *)0x0) {
      pfVar7 = param_1 + 0x18e;
    }
    pfVar7[(longlong)(int)param_1[0x1b0] - 1U & (longlong)(int)fVar11] = fVar9;
  }
  return;
}



// FUNCTION 1407c4842 FUN_1407c4842 body=154 status=ok
// SIG undefined FUN_1407c4842(void)

int FUN_1407c4842(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (0 < param_2) {
    iVar3 = -1;
    if (iVar1 != 0) {
      iVar3 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar3 = iVar1 + -1;
      }
      iVar3 = iVar3 >> 5;
    }
    iVar5 = iVar1 + param_2 + -1;
    iVar8 = iVar1 + param_2 + 0x1e;
    if (-1 < iVar5) {
      iVar8 = iVar5;
    }
    if (iVar8 >> 5 == iVar3) {
      *(int *)(param_1 + 0x10) = iVar1 + param_2;
    }
    else {
      FUN_1407c48dc(param_1);
      uVar6 = *(int *)(param_1 + 0x10) + param_2;
      uVar2 = *(int *)(param_1 + 0x10) + param_2 + 0x1f;
      if (-1 < (int)uVar6) {
        uVar2 = uVar6;
      }
      *(uint *)(param_1 + 0x10) = uVar6;
      iVar3 = uVar6 - (uVar2 & 0xffffffe0);
      if (iVar3 != 0) {
        lVar7 = *(longlong *)(param_1 + 8);
        if (*(longlong *)(param_1 + 8) == 0) {
          lVar7 = param_1;
        }
        bVar4 = -(char)iVar3;
        *(uint *)(lVar7 + (longlong)((int)uVar2 >> 5) * 4) =
             (uint)(*(int *)(lVar7 + (longlong)((int)uVar2 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
  }
  return iVar1;
}



// FUNCTION 1407c48dc FUN_1407c48dc body=128 status=ok
// SIG undefined FUN_1407c48dc(void)

void FUN_1407c48dc(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 <= *(int *)(param_1 + 0x14)) {
    return;
  }
  if (param_2 + 0x1fU < 0x60) {
    iVar2 = 0x40;
  }
  else {
    uVar5 = param_2 + 0x1fU >> 5;
    if (*(int *)(param_1 + 0x14) + 0x1fU < 0x60) {
      uVar4 = 4;
      if (4 < uVar5) {
        uVar4 = uVar5;
      }
    }
    else {
      uVar4 = (uVar5 * 3 >> 3) + uVar5 + 0x10;
    }
    uVar3 = FUN_144a3809e(uVar4 << 2,0);
    iVar1 = (int)(uVar3 >> 2);
    iVar2 = -0x20;
    if ((int)uVar5 <= iVar1) {
      iVar2 = iVar1 << 5;
    }
  }
  *(int *)(param_1 + 0x14) = iVar2;
  FUN_1401cad60(param_1,*(undefined4 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1407c496a FUN_1407c496a body=40 status=ok
// SIG undefined FUN_1407c496a(void)

undefined8 FUN_1407c496a(undefined8 param_1,int param_2)

{
  FUN_140938480();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1407c49a0 FUN_1407c49a0 body=40 status=ok
// SIG undefined FUN_1407c49a0(void)

undefined8 FUN_1407c49a0(undefined8 param_1,int param_2)

{
  FUN_1407c49c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1407c49c8 FUN_1407c49c8 body=237 status=ok
// SIG undefined FUN_1407c49c8(void)

void FUN_1407c49c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7bd7a0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1407c4add(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1407c4ab5(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1407c4ab5(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1407c4b0e(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1407c4ab5 FUN_1407c4ab5 body=40 status=ok
// SIG undefined FUN_1407c4ab5(void)

void FUN_1407c4ab5(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 1407c4add FUN_1407c4add body=49 status=ok
// SIG undefined FUN_1407c4add(void)

void FUN_1407c4add(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1407c4b0e FUN_1407c4b0e body=112 status=ok
// SIG undefined FUN_1407c4b0e(void)

void FUN_1407c4b0e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x78);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      FUN_1448d844e(plVar1[-4],(int)plVar1[-3]);
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-6] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0xd] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x19;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1407c4b7e FUN_1407c4b7e body=339 status=ok
// SIG undefined FUN_1407c4b7e(void)

void FUN_1407c4b7e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 *puVar6;
  undefined1 auStack_1a8 [40];
  undefined8 local_180;
  longlong local_178;
  undefined1 local_170 [8];
  undefined1 local_168 [288];
  undefined1 *local_48;
  ulonglong local_40;
  undefined1 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  longlong local_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
  uVar3 = DAT_14c98e618;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    local_170[0] = DAT_14c96b238;
    local_48 = (undefined1 *)0x0;
    local_40 = 0x400000000;
    local_38 = 0;
    local_30 = 0;
    plStack_28 = (longlong *)0x0;
    local_20 = 0;
    uStack_18 = 0;
    local_180 = *param_2;
    local_178 = param_2[1];
    if (local_178 != 0) {
      LOCK();
      *(int *)(local_178 + 8) = *(int *)(local_178 + 8) + 1;
      UNLOCK();
    }
    cVar5 = FUN_1407c4cd2(uVar3,&local_180,local_170);
    if (cVar5 != '\0') {
      FUN_1407c57ac(param_1,local_170);
    }
    FUN_1447fa2ac(local_20,uStack_18 & 0xffffffff);
    if (local_20 != 0) {
      FUN_1400020a8();
    }
    plVar4 = plStack_28;
    if (plStack_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_28)(plStack_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    puVar6 = local_48;
    if (local_48 == (undefined1 *)0x0) {
      puVar6 = local_168;
    }
    FUN_1447157bd(puVar6,local_40 & 0xffffffff);
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407c4cd2 FUN_1407c4cd2 body=224 status=ok
// SIG undefined FUN_1407c4cd2(void)

ulonglong FUN_1407c4cd2(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *param_2;
  local_38 = param_2[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_1407c4db4(param_1 + 0x1b0,&local_40,param_3,param_4);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (cVar4 == '\0') {
    local_50 = *param_2;
    local_48 = param_2[1];
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    uVar5 = FUN_1407c4db4(param_1 + 0x1c0,&local_50,param_3,param_4);
    uVar6 = (ulonglong)uVar5;
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407c4db4 FUN_1407c4db4 body=2551 status=ok
// SIG undefined FUN_1407c4db4(void)

uint FUN_1407c4db4(longlong *param_1,longlong *param_2,byte *param_3,byte param_4)

{
  int *piVar1;
  byte *pbVar2;
  longlong *plVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  byte *pbVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  longlong lVar22;
  byte *pbVar23;
  longlong *plVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong *plVar28;
  undefined1 auStack_3a8 [32];
  uint local_388;
  byte local_37e;
  char local_37d;
  uint local_37c;
  ulonglong local_378;
  longlong *local_370;
  byte *local_368;
  longlong *local_360;
  byte *local_358;
  longlong *local_350;
  longlong local_348;
  longlong local_340;
  longlong local_338;
  longlong *local_330;
  undefined8 local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  longlong local_2f0;
  longlong *local_2e8;
  undefined4 *local_200;
  undefined4 local_1f8;
  byte local_1f0;
  undefined8 local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  undefined4 *local_60;
  ulonglong local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  uVar12 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  local_37e = param_4;
  local_370 = param_2;
  local_48 = uVar12;
  if (DAT_14c979c68 == '\0') {
    local_358 = param_3 + 8;
    local_368 = param_3 + 0x150;
    local_360 = &local_1d8;
    lVar22 = 8;
    lVar26 = -1;
    local_378 = 0;
    local_350 = param_1;
    do {
      iVar6 = (int)local_350[1];
      lVar26 = lVar26 + 1;
      local_37c = (uint)CONCAT71((int7)(int3)((uint)iVar6 >> 8),lVar26 < iVar6);
      if (iVar6 <= lVar26) break;
      lVar15 = *(longlong *)(*local_350 + -8 + lVar22);
      plVar28 = *(longlong **)(*local_350 + lVar22);
      if (plVar28 == (longlong *)0x0) {
        local_188 = CONCAT31(local_188._1_3_,local_37e);
        local_60 = (undefined4 *)0x0;
        local_58 = 0x400000000;
        local_50 = 0;
        FUN_1401271b4(lVar15,&local_1c0);
        local_2f8 = local_190;
        local_308 = local_1a0;
        uStack_304 = uStack_19c;
        uStack_300 = uStack_198;
        uStack_2fc = uStack_194;
        local_318 = local_1b0;
        uStack_314 = uStack_1ac;
        uStack_310 = uStack_1a8;
        uStack_30c = uStack_1a4;
        local_328._0_4_ = (undefined4)local_1c0;
        local_328._4_4_ = local_1c0._4_4_;
        uStack_320 = (undefined4)uStack_1b8;
        uStack_31c = uStack_1b8._4_4_;
        local_2e8 = (longlong *)0x0;
        local_2f0 = lVar15;
        FUN_1402018be(&local_188,&local_328);
        local_330 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
        UNLOCK();
        local_188 = CONCAT31(local_188._1_3_,local_37e);
        local_60 = (undefined4 *)0x0;
        local_58 = 0x400000000;
        local_50 = 0;
        FUN_1401271b4(lVar15,&local_1c0);
        LOCK();
        *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
        UNLOCK();
        local_2f8 = local_190;
        local_308 = local_1a0;
        uStack_304 = uStack_19c;
        uStack_300 = uStack_198;
        uStack_2fc = uStack_194;
        local_318 = local_1b0;
        uStack_314 = uStack_1ac;
        uStack_310 = uStack_1a8;
        uStack_30c = uStack_1a4;
        local_328._0_4_ = (undefined4)local_1c0;
        local_328._4_4_ = local_1c0._4_4_;
        uStack_320 = (undefined4)uStack_1b8;
        uStack_31c = uStack_1b8._4_4_;
        LOCK();
        *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
        UNLOCK();
        LOCK();
        plVar21 = plVar28 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        local_2f0 = lVar15;
        local_2e8 = plVar28;
        if ((int)*plVar21 == 0) {
          (**(code **)*plVar28)(plVar28);
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
          }
        }
        plVar21 = local_2e8;
        FUN_1402018be(&local_188,&local_328);
        if (plVar21 != (longlong *)0x0) {
          LOCK();
          plVar24 = plVar21 + 1;
          *(int *)plVar24 = (int)*plVar24 + -1;
          UNLOCK();
          if ((int)*plVar24 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
        LOCK();
        *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
        UNLOCK();
        local_330 = plVar28;
      }
      local_338 = lVar15;
      FUN_140d95de0(&local_328,&local_338,&local_188);
      lVar7 = *local_370;
      if (lVar15 == lVar7) {
LAB_1407c545a:
        *param_3 = (byte)local_328;
        FUN_1401bb734(local_358,&uStack_320);
        param_3[0x138] = local_1f0;
        if (local_1e0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1e0 + 1) = (int)local_1e0[1] + 1;
          UNLOCK();
        }
        plVar21 = *(longlong **)(param_3 + 0x148);
        *(undefined8 *)(param_3 + 0x140) = local_1e8;
        *(longlong **)(param_3 + 0x148) = local_1e0;
        if (plVar21 != (longlong *)0x0) {
          LOCK();
          plVar24 = plVar21 + 1;
          *(int *)plVar24 = (int)*plVar24 + -1;
          UNLOCK();
          if ((int)*plVar24 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
        uVar14 = FUN_1401bb840(local_368,local_360);
        local_378 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
      }
      else {
        plVar21 = (longlong *)local_370[1];
        local_1c0 = lVar7;
        if (plVar21 == (longlong *)0x0) {
          uStack_1b8 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
          UNLOCK();
          LOCK();
          plVar24 = plVar21 + 1;
          *(int *)plVar24 = (int)*plVar24 + -1;
          UNLOCK();
          uStack_1b8 = plVar21;
          if ((int)*plVar24 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
        cVar10 = FUN_14692fc6e(&local_328,&local_1c0,local_37e);
        plVar21 = uStack_1b8;
        if (uStack_1b8 != (longlong *)0x0) {
          LOCK();
          plVar24 = uStack_1b8 + 1;
          *(int *)plVar24 = (int)*plVar24 + -1;
          UNLOCK();
          if ((int)*plVar24 == 0) {
            local_37d = cVar10;
            (**(code **)*uStack_1b8)(uStack_1b8);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            cVar10 = local_37d;
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
              cVar10 = local_37d;
            }
          }
        }
        if (cVar10 != '\0') goto LAB_1407c545a;
        if ((local_378 & 1) == 0) {
          local_348 = *local_370;
          local_340 = local_370[1];
          if (local_340 != 0) {
            LOCK();
            *(int *)(local_340 + 8) = *(int *)(local_340 + 8) + 1;
            UNLOCK();
          }
          local_378 = FUN_1407c4db4(lVar15 + 0x600,&local_348,param_3,local_37e);
        }
      }
      FUN_1447fa2ac(local_1d8,local_1d0);
      if (local_1d8 != 0) {
        FUN_1400020a8();
      }
      plVar21 = local_1e0;
      if (local_1e0 != (longlong *)0x0) {
        LOCK();
        plVar24 = local_1e0 + 1;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)*plVar24 == 0) {
          (**(code **)*local_1e0)(local_1e0);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
      puVar16 = local_200;
      if (local_200 == (undefined4 *)0x0) {
        puVar16 = &uStack_320;
      }
      FUN_1447157bd(puVar16,local_1f8);
      if (local_200 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      puVar16 = local_60;
      if (local_60 == (undefined4 *)0x0) {
        puVar16 = &uStack_180;
      }
      FUN_1447157bd(puVar16,local_58 & 0xffffffff);
      if (local_60 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      if (plVar28 != (longlong *)0x0) {
        LOCK();
        plVar21 = plVar28 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plVar28)(plVar28);
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
          }
        }
      }
      lVar22 = lVar22 + 0x10;
    } while ((local_378 & 1) == 0);
  }
  else {
    plVar28 = (longlong *)*param_2;
    plVar21 = (longlong *)param_2[1];
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      UNLOCK();
      LOCK();
      plVar24 = plVar21 + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)*plVar24 == 0) {
        uVar12 = (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          uVar12 = (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
    *param_3 = local_37e;
    pbVar2 = param_3 + 8;
    local_37c = (uint)CONCAT71((int7)(uVar12 >> 8),local_37e);
    do {
      if ((((*(byte *)((longlong)plVar28 + 0x31) & 1) != 0) &&
          (lVar22 = *(longlong *)plVar28[0x36], lVar22 != 0)) && (*(byte *)(lVar22 + 0x99) != 0)) {
        local_388 = (uint)*(byte *)(lVar22 + 0x99);
        FUN_1401630a0(lVar22,plVar28,2,0);
      }
      bVar5 = *(byte *)((longlong)plVar28 + 0x39);
      plVar24 = plVar21;
      if ((*param_3 & bVar5) == 0) {
        local_37c = 0;
        FUN_146279048(pbVar2,0);
        break;
      }
      pbVar13 = (byte *)(plVar28 + 0x1a);
      if (plVar21 == (longlong *)0x0) {
        local_158 = plVar28[0x20];
        local_188 = *(undefined4 *)pbVar13;
        uStack_184 = *(undefined4 *)((longlong)plVar28 + 0xd4);
        uStack_180 = (undefined4)plVar28[0x1b];
        uStack_17c = *(undefined4 *)((longlong)plVar28 + 0xdc);
        local_178 = plVar28[0x1c];
        lStack_170 = plVar28[0x1d];
        local_168 = plVar28[0x1e];
        lStack_160 = plVar28[0x1f];
      }
      else {
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
        local_158 = plVar28[0x20];
        local_188 = *(undefined4 *)pbVar13;
        uStack_184 = *(undefined4 *)((longlong)plVar28 + 0xd4);
        uStack_180 = (undefined4)plVar28[0x1b];
        uStack_17c = *(undefined4 *)((longlong)plVar28 + 0xdc);
        local_178 = plVar28[0x1c];
        lStack_170 = plVar28[0x1d];
        local_168 = plVar28[0x1e];
        lStack_160 = plVar28[0x1f];
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
        LOCK();
        plVar17 = plVar21 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          pbVar13 = (byte *)(**(code **)*plVar21)(plVar21);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            pbVar13 = (byte *)(**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
      if ((*param_3 & bVar5) != 0) {
        iVar6 = *(int *)(param_3 + 0x130);
        lVar22 = (longlong)iVar6;
        *(uint *)(param_3 + 0x130) = iVar6 + 1U;
        if (*(uint *)(param_3 + 0x134) < iVar6 + 1U) {
          FUN_14022ed06(pbVar2,iVar6);
        }
        pbVar13 = *(byte **)(param_3 + 0x128);
        if (*(byte **)(param_3 + 0x128) == (byte *)0x0) {
          pbVar13 = pbVar2;
        }
        *(longlong *)(pbVar13 + lVar22 * 0x48 + 0x30) = local_158;
        *(longlong *)(pbVar13 + lVar22 * 0x48 + 0x20) = local_168;
        *(longlong *)(pbVar13 + lVar22 * 0x48 + 0x20 + 8) = lStack_160;
        *(longlong *)(pbVar13 + lVar22 * 0x48 + 0x10) = local_178;
        *(longlong *)(pbVar13 + lVar22 * 0x48 + 0x10 + 8) = lStack_170;
        pbVar19 = pbVar13 + lVar22 * 0x48;
        *(undefined4 *)pbVar19 = local_188;
        *(undefined4 *)(pbVar19 + 4) = uStack_184;
        *(undefined4 *)(pbVar19 + 8) = uStack_180;
        *(undefined4 *)(pbVar19 + 0xc) = uStack_17c;
        *(longlong **)(pbVar13 + lVar22 * 0x48 + 0x38) = plVar28;
        *(longlong **)(pbVar13 + lVar22 * 0x48 + 0x40) = plVar21;
        if (plVar21 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
          UNLOCK();
        }
      }
      plVar17 = (longlong *)plVar28[0x39];
      if (plVar17 == (longlong *)0x0) {
LAB_1407c4fe1:
        local_378._0_4_ = (undefined4)CONCAT71((int7)((ulonglong)pbVar13 >> 8),1);
        plVar17 = (longlong *)0x0;
LAB_1407c4fe9:
        cVar10 = (**(code **)(*plVar28 + 0x200))(plVar28);
        if (cVar10 == '\0') {
          local_37c = 0;
          FUN_146279048(pbVar2,0);
        }
        else {
          if (plVar21 == (longlong *)0x0) {
            *(longlong **)(param_3 + 0x140) = plVar28;
            plVar18 = *(longlong **)(param_3 + 0x148);
            if (plVar18 != (longlong *)0x0) {
              param_3[0x148] = 0;
              param_3[0x149] = 0;
              param_3[0x14a] = 0;
              param_3[0x14b] = 0;
              param_3[0x14c] = 0;
              param_3[0x14d] = 0;
              param_3[0x14e] = 0;
              param_3[0x14f] = 0;
LAB_1407c5046:
              LOCK();
              plVar3 = plVar18 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plVar18)(plVar18);
                LOCK();
                piVar1 = (int *)((longlong)plVar18 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar6 = *piVar1;
                UNLOCK();
joined_r0x0001407c5072:
                if (iVar6 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                }
              }
            }
          }
          else {
            LOCK();
            *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
            UNLOCK();
            *(longlong **)(param_3 + 0x140) = plVar28;
            plVar18 = *(longlong **)(param_3 + 0x148);
            if (plVar21 == plVar18) {
              LOCK();
              plVar18 = plVar21 + 1;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)*plVar18 == 0) {
                (**(code **)*plVar21)(plVar21);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar6 = *piVar1;
                UNLOCK();
                plVar18 = plVar21;
                goto joined_r0x0001407c5072;
              }
            }
            else {
              *(longlong **)(param_3 + 0x148) = plVar21;
              if (plVar18 != (longlong *)0x0) goto LAB_1407c5046;
            }
          }
          uVar12 = (ulonglong)*(int *)(param_3 + 0x130);
          if (1 < (longlong)uVar12) {
            lVar22 = uVar12 * 0x48;
            lVar26 = 0;
            uVar27 = 0;
            uVar25 = uVar12;
            do {
              lVar22 = lVar22 + -0x48;
              uVar25 = uVar25 - 1;
              if (uVar27 != (uVar25 & 0xffffffff)) {
                pbVar13 = *(byte **)(param_3 + 0x128);
                if (*(byte **)(param_3 + 0x128) == (byte *)0x0) {
                  pbVar13 = pbVar2;
                }
                pbVar19 = pbVar13 + lVar26;
                puVar20 = &local_328;
                for (lVar15 = 9; lVar15 != 0; lVar15 = lVar15 + -1) {
                  *puVar20 = *(undefined8 *)pbVar19;
                  pbVar19 = pbVar19 + 8;
                  puVar20 = puVar20 + 1;
                }
                pbVar19 = pbVar13 + lVar22;
                pbVar23 = pbVar13 + lVar26;
                for (lVar15 = 9; lVar15 != 0; lVar15 = lVar15 + -1) {
                  *(undefined8 *)pbVar23 = *(undefined8 *)pbVar19;
                  pbVar19 = pbVar19 + 8;
                  pbVar23 = pbVar23 + 8;
                }
                puVar20 = &local_328;
                pbVar13 = pbVar13 + lVar22;
                for (lVar15 = 9; lVar15 != 0; lVar15 = lVar15 + -1) {
                  *(undefined8 *)pbVar13 = *puVar20;
                  puVar20 = puVar20 + 1;
                  pbVar13 = pbVar13 + 8;
                }
                uVar12 = (ulonglong)*(uint *)(param_3 + 0x130);
              }
              uVar27 = uVar27 + 1;
              lVar26 = lVar26 + 0x48;
            } while ((longlong)uVar27 <
                     (longlong)((int)(((uint)(uVar12 >> 0x1f) & 1) + (int)uVar12) >> 1));
          }
          local_37c = (uint)CONCAT71((int7)(uVar12 >> 8),1);
        }
        bVar8 = true;
        plVar18 = plVar28;
        bVar9 = true;
        if ((char)local_378 == '\0') goto LAB_1407c5130;
      }
      else {
        pbVar13 = (byte *)(ulonglong)*(uint *)(plVar17 + 1);
        do {
          uVar11 = (uint)pbVar13;
          if (uVar11 == 0) goto LAB_1407c4fe1;
          LOCK();
          uVar4 = *(uint *)(plVar17 + 1);
          if (uVar11 == uVar4) {
            *(uint *)(plVar17 + 1) = uVar11 + 1;
          }
          else {
            pbVar13 = (byte *)(ulonglong)uVar4;
          }
          UNLOCK();
        } while (uVar11 != uVar4);
        plVar18 = (longlong *)plVar28[0x38];
        if (plVar18 == (longlong *)0x0) {
          local_378._0_4_ = 0;
          goto LAB_1407c4fe9;
        }
        cVar10 = (**(code **)(*plVar18 + 0x158))(plVar18);
        if (cVar10 == '\0') {
          local_37c = 0;
          FUN_146279048(pbVar2,0);
          plVar18 = plVar28;
          bVar9 = true;
        }
        else {
          LOCK();
          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
          UNLOCK();
          bVar9 = false;
          plVar24 = plVar17;
          if (plVar21 != (longlong *)0x0) {
            LOCK();
            plVar28 = plVar21 + 1;
            *(int *)plVar28 = (int)*plVar28 + -1;
            UNLOCK();
            if ((int)*plVar28 == 0) {
              (**(code **)*plVar21)(plVar21);
              LOCK();
              piVar1 = (int *)((longlong)plVar21 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
              }
            }
          }
        }
LAB_1407c5130:
        bVar8 = bVar9;
        LOCK();
        plVar3 = plVar17 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        plVar28 = plVar18;
        if ((int)*plVar3 == 0) {
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
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        plVar17 = plVar21 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
      plVar21 = plVar24;
    } while (!bVar8);
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      plVar28 = plVar24 + 1;
      *(int *)plVar28 = (int)*plVar28 + -1;
      UNLOCK();
      if ((int)*plVar28 == 0) {
        (**(code **)*plVar24)(plVar24);
        LOCK();
        piVar1 = (int *)((longlong)plVar24 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
    }
  }
  plVar28 = (longlong *)local_370[1];
  if (plVar28 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar28 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar28)(plVar28);
      LOCK();
      piVar1 = (int *)((longlong)plVar28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return local_37c & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407c57ac FUN_1407c57ac body=1157 status=ok
// SIG undefined FUN_1407c57ac(void)

void FUN_1407c57ac(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_158 [32];
  int local_138;
  int iStack_134;
  undefined8 local_130;
  ulonglong uStack_128;
  longlong *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar9 = *(longlong *)(param_2 + 0x128);
  if (*(longlong *)(param_2 + 0x128) == 0) {
    lVar9 = param_2 + 8;
  }
  lVar7 = *(longlong *)(lVar9 + 0x38);
  plVar2 = *(longlong **)(lVar9 + 0x40);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(lVar7 + 0x510);
  plVar4 = *(longlong **)(lVar7 + 0x518);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar8 = (int *)((longlong)plVar4 + 0xc);
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar8 = (int *)((longlong)plVar2 + 0xc);
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    cVar5 = (**(code **)(*plVar3 + 200))(plVar3);
    if (cVar5 != '\0') {
      lVar9 = param_2 + 8;
      if (*(longlong *)(param_2 + 0x128) != 0) {
        lVar9 = *(longlong *)(param_2 + 0x128);
      }
      lVar7 = (longlong)(*(int *)(param_2 + 0x130) + -1);
      fVar10 = *(float *)(lVar9 + 8 + lVar7 * 0x48);
      fVar12 = *(float *)(lVar9 + 4 + lVar7 * 0x48) * fVar10;
      fVar11 = fVar10 * 0.0;
      fVar16 = *(float *)(lVar9 + 0x10 + lVar7 * 0x48) + fVar11;
      fVar18 = *(float *)(lVar9 + 0xc + lVar7 * 0x48) + fVar11;
      fVar13 = fVar11 + fVar16;
      fVar10 = fVar10 * *(float *)(lVar9 + lVar7 * 0x48) + fVar18;
      fVar14 = fVar12 + fVar16;
      fVar15 = fVar11 + fVar18;
      fVar12 = fVar12 + fVar13;
      fVar11 = fVar11 + fVar10;
      fVar20 = fVar13;
      if (fVar13 <= fVar14) {
        fVar20 = fVar14;
      }
      if (fVar20 <= fVar12) {
        fVar20 = fVar12;
      }
      fVar17 = fVar16;
      if (fVar16 <= fVar20) {
        fVar17 = fVar20;
      }
      fVar20 = fVar10;
      if (fVar10 <= fVar15) {
        fVar20 = fVar15;
      }
      if (fVar20 <= fVar11) {
        fVar20 = fVar11;
      }
      fVar19 = fVar18;
      if (fVar18 <= fVar20) {
        fVar19 = fVar20;
      }
      if (fVar14 <= fVar13) {
        fVar13 = fVar14;
      }
      if (fVar12 <= fVar13) {
        fVar13 = fVar12;
      }
      if (fVar13 <= fVar16) {
        fVar16 = fVar13;
      }
      if (fVar15 <= fVar10) {
        fVar10 = fVar15;
      }
      if (fVar11 <= fVar10) {
        fVar10 = fVar11;
      }
      if (fVar10 <= fVar18) {
        fVar18 = fVar10;
      }
      *(float *)(param_1 + 0x278) = fVar18;
      *(float *)(param_1 + 0x27c) = fVar16;
      *(float *)(param_1 + 0x280) = fVar19;
      *(float *)(param_1 + 0x284) = fVar17;
      FUN_1403d040a(&local_138,param_2);
      FUN_1400e7f6e((int *)(param_1 + 600),&local_138);
      if ((int *)(param_1 + 600) != &local_138) {
        *(ulonglong *)(param_1 + 0x268) = uStack_128;
        uStack_128 = 0;
        plVar2 = *(longlong **)(param_1 + 0x270);
        *(longlong **)(param_1 + 0x270) = local_120;
        local_120 = (longlong *)0x0;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar8 = (int *)((longlong)plVar2 + 0xc);
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (*piVar8 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
      }
      if (local_120 != (longlong *)0x0) {
        LOCK();
        piVar8 = (int *)((longlong)local_120 + 0xc);
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (*piVar8 == 0) {
          (**(code **)(*local_120 + 0x10))();
        }
      }
      FUN_1447de57f(CONCAT44(iStack_134,local_138),local_130 & 0xffffffff);
      if (CONCAT44(iStack_134,local_138) != 0) {
        FUN_1400020a8();
      }
      cVar5 = (**(code **)(*plVar3 + 0xe8))(plVar3);
      fVar10 = 1.0;
      if (cVar5 != '\0') {
        piVar8 = (int *)(**(code **)(*plVar3 + 0xe0))(plVar3);
        if (*piVar8 == 5) {
          lVar9 = (**(code **)(*plVar3 + 0xe0))(plVar3);
          fVar10 = (float)(int)*(char *)(lVar9 + 0x18);
        }
      }
      if (DAT_14c75ef44 == '\x01') {
        iVar6 = (**(code **)(*plVar3 + 0x68))(plVar3);
        if (iVar6 == 0) {
          local_110 = 0;
          uStack_108 = 0;
          local_120 = (longlong *)0x0;
          uStack_118 = 0;
          local_130 = 0;
          uStack_128 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          FUN_146118180(DAT_14c98e618,&local_138);
          fVar13 = (fVar17 - fVar16) / (float)iStack_134;
          fVar20 = (fVar19 - fVar18) / (float)local_138;
          FUN_140ecb711(local_130,uStack_128 & 0xffffffff);
          if (local_130 != 0) {
            FUN_1400020a8();
          }
          fVar18 = fVar18 / fVar20;
          fVar16 = fVar16 / fVar13;
          fVar19 = fVar19 / fVar20;
          fVar17 = fVar17 / fVar13;
        }
      }
      local_138 = (int)ROUND(fVar18 + fVar10 + fVar18 + fVar10 + 0.5) >> 1;
      iStack_134 = (int)ROUND(fVar16 + fVar10 + fVar16 + fVar10 + 0.5) >> 1;
      local_130 = CONCAT44((int)(fVar17 - fVar10),(int)(fVar19 - fVar10));
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))();
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar8 = (int *)((longlong)plVar4 + 0xc);
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407c5c32 FUN_1407c5c32 body=885 status=ok
// SIG undefined FUN_1407c5c32(void)

void FUN_1407c5c32(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined4 local_78;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar12 = (longlong *)*param_2;
  *(undefined1 *)((longlong)plVar12 + 0x75) = 1;
  local_90 = *param_2;
  (**(code **)(*param_1 + 0x1b8))();
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  iVar10 = (int)plVar12[1] - *(int *)((longlong)plVar12 + 0x34);
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  if (iVar10 != 0) {
    FUN_140958f00(&local_88);
  }
  plVar7 = plVar12 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_98 = param_3;
  local_60 = plVar7;
  if ((int)plVar12[5] == 0) {
    uVar17 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar10 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar17 = local_68 >> 0x20;
    iVar10 = (int)plVar12[5];
  }
  plVar1 = local_60;
  iVar9 = (int)local_68;
  uVar13 = (uint)local_58;
  iVar8 = local_58._4_4_;
  iVar16 = local_50;
  if (local_58._4_4_ != iVar10 || local_60 != plVar7) {
    do {
      lVar14 = *plVar12;
      lVar6 = (longlong)iVar8 * 0x30;
      if ((*(longlong *)(lVar14 + 8 + lVar6) != 0) && (1 < *(int *)(lVar14 + lVar6 + 0x18))) {
        FUN_140af67e0(&local_88,lVar14 + lVar6 + 8,lVar14 + lVar6 + 0x10);
      }
      uVar13 = uVar13 & ~(uint)uVar17;
      plVar15 = (longlong *)plVar1[2];
      if ((longlong *)plVar1[2] == (longlong *)0x0) {
        plVar15 = plVar1;
      }
      iVar4 = (int)plVar1[3];
      lVar14 = (longlong)iVar9;
      uVar11 = *(uint *)((longlong)plVar15 + lVar14 * 4) & uVar13;
      if (uVar11 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar5 = iVar8;
        if (iVar8 < iVar9) {
          iVar5 = iVar9;
        }
        if (iVar9 < iVar8) {
          lVar6 = 0;
          do {
            uVar11 = *(uint *)((longlong)plVar15 + lVar6 * 4 + lVar14 * 4 + 4);
            if (uVar11 != 0) {
              iVar9 = iVar9 + (int)lVar6 + 1;
              uVar13 = 0xffffffff;
              goto LAB_1407c5da9;
            }
            iVar16 = iVar16 + 0x20;
            lVar6 = lVar6 + 1;
          } while (iVar5 - lVar14 != lVar6);
          uVar13 = 0xffffffff;
          iVar9 = iVar5;
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar4;
      }
      else {
LAB_1407c5da9:
        uVar17 = (ulonglong)(-uVar11 & uVar11);
        uVar3 = uVar17 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar8 = (iVar16 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar8) {
          iVar8 = iVar4;
        }
      }
    } while (iVar8 != iVar10 || plVar1 != plVar7);
  }
  FUN_1407c5fa8(&local_68,&local_88);
  FUN_140958ed1(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  lVar6 = local_98;
  FUN_14020871a(local_98 + 0x40,&local_68);
  FUN_1400b4210(&local_68);
  lVar14 = plVar12[0xc];
  if (lVar14 == 0) {
    plVar7 = (longlong *)0x0;
    plVar12 = (longlong *)0x0;
  }
  else if (*(int *)(lVar14 + 8) == 0) {
    plVar7 = (longlong *)0x0;
    plVar12 = (longlong *)0x0;
    lVar6 = local_98;
  }
  else {
    plVar7 = (longlong *)FUN_14001cc68(0x20,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_149e8ed60;
    plVar12 = plVar7 + 2;
    FUN_1401b2fd2(plVar12,lVar14);
    lVar6 = local_98;
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
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
        lVar6 = local_98;
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          lVar6 = local_98;
        }
      }
    }
  }
  *(longlong **)(lVar6 + 0x48) = plVar12;
  plVar12 = *(longlong **)(lVar6 + 0x50);
  if (plVar7 == plVar12) {
    if (plVar7 == (longlong *)0x0) goto LAB_1407c5e55;
    LOCK();
    plVar12 = plVar7 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 != 0) goto LAB_1407c5e55;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar10 = *piVar2;
    UNLOCK();
  }
  else {
    *(longlong **)(lVar6 + 0x50) = plVar7;
    if (plVar12 == (longlong *)0x0) goto LAB_1407c5e55;
    LOCK();
    plVar7 = plVar12 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_1407c5e55;
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar2 = (int *)((longlong)plVar12 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar10 = *piVar2;
    UNLOCK();
    plVar7 = plVar12;
  }
  if (iVar10 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
LAB_1407c5e55:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407c5fa8 FUN_1407c5fa8 body=95 status=ok
// SIG undefined FUN_1407c5fa8(void)

undefined8 * FUN_1407c5fa8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar2 = *param_2;
    *param_2 = 0;
    *(int *)(puVar2 + 1) = iVar1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    *param_1 = puVar2;
    LOCK();
    *(undefined4 *)(puVar2 + 2) = 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1407c6008 caseD_3d body=1991 status=ok
// SIG undefined caseD_3d(void)

void switchD_143c3d4dc::caseD_3d(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong unaff_R12;
  undefined8 *puVar11;
  longlong lVar12;
  undefined *puVar13;
  longlong *unaff_R15;
  bool bVar14;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  code *local_100;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_ac [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  int local_98;
  uint local_94;
  undefined8 local_90;
  undefined8 *local_88;
  ulonglong auStack_80 [2];
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar12 = *(longlong *)(lVar7 + 0xd38);
  if (*(longlong *)(lVar7 + 0xd38) == 0) {
    lVar12 = lVar7 + 0xd28;
  }
  iVar8 = *(int *)(lVar7 + 0xd40);
  if ((longlong)iVar8 != 0) {
    lVar7 = 0;
    do {
      if (*(longlong **)(lVar12 + lVar7) == param_1) goto LAB_1407c61ed;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar8 * 8 - lVar7 != 0);
  }
  local_68 = 0;
  cVar2 = *(char *)(*param_2 + 0x75);
  if (cVar2 == '\x01') {
    unaff_R15 = (longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xd48);
    unaff_R12 = *unaff_R15;
    *unaff_R15 = (longlong)&local_68;
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
    iVar8 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xd40);
  }
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(uint *)(lVar7 + 0xd40) = iVar8 + 1U;
  if (*(uint *)(lVar7 + 0xd44) < iVar8 + 1U) {
    FUN_1468c2caa(iVar8);
  }
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar12 = *(longlong *)(lVar7 + 0xd38);
  if (lVar12 == 0) {
    lVar12 = lVar7 + 0xd28;
  }
  *(longlong **)(lVar12 + (longlong)iVar8 * 8) = param_1;
  local_88 = (undefined8 *)0x0;
  auStack_80[0] = 0;
  (**(code **)(*param_1 + 0x1b0))(param_1,&local_88);
  uVar6 = 0;
  if ((longlong)(int)auStack_80[0] != 0) {
    puVar11 = local_88 + (longlong)(int)auStack_80[0] * 4;
    puVar9 = local_88;
    do {
      local_a8 = (longlong *)*puVar9;
      uStack_a0 = puVar9[1];
      puVar9[1] = 0;
      local_98 = *(int *)(puVar9 + 2);
      local_94 = *(undefined4 *)((longlong)puVar9 + 0x14);
      puVar9[2] = 0;
      local_90 = puVar9[3];
      FUN_1407c67d8(param_2,&local_a8);
      puVar9 = puVar9 + 4;
    } while (puVar9 != puVar11);
    uVar6 = auStack_80[0] & 0xffffffff;
  }
  FUN_145745968(local_88,uVar6);
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xd40);
  *piVar1 = *piVar1 + -1;
  if ((local_68 != 0 & *(byte *)(*param_2 + 0x75)) == 1) {
    *(longlong *)(*param_2 + 0x60) = local_68;
  }
  if (cVar2 != '\0') {
    *unaff_R15 = unaff_R12;
  }
LAB_1407c61ed:
  FUN_1457459de(local_ac,0xffffffff);
  (**(code **)(*param_1 + 0x1c8))(param_1,&local_88);
  if ((local_88 != (undefined8 *)0x0) && (auStack_80[0] != 0)) {
    FUN_1400021e4(&local_88,&local_a8);
    local_d0 = DAT_14c951750;
    local_c8 = (undefined4)local_a8;
    uStack_c4 = local_a8._4_4_;
    uStack_c0 = (undefined4)uStack_a0;
    uStack_bc = uStack_a0._4_4_;
    local_a8 = (longlong *)0x0;
    uStack_a0 = 0;
    local_b8 = 1;
    FUN_1407c67d8(param_2);
    if (local_a8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(auStack_80,&local_a8);
    local_f0 = DAT_14c951758;
    local_e8 = (undefined4)local_a8;
    uStack_e4 = local_a8._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    local_a8 = (longlong *)0x0;
    uStack_a0 = 0;
    local_d8 = 1;
    FUN_1407c67d8(param_2);
    if (local_a8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar7 = *param_2;
  local_a8 = (longlong *)param_1[2];
  if (local_a8 == (longlong *)0x0) {
    uStack_a0 = 0;
  }
  else {
    uStack_a0 = local_a8[10];
  }
  local_98 = -1;
  local_94 = CONCAT13(local_94._3_1_,0x101);
  FUN_144a2daf0(&local_a8);
  if (uStack_a0 != 0) {
    do {
      lVar12 = uStack_a0;
      puVar13 = *(undefined **)(uStack_a0 + 8);
      local_68 = lVar7;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_108 = FUN_140342cba();
        local_100 = FUN_1468c7f1e;
        local_110 = 0;
        local_118 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      if (DAT_14c951a40 == 0) {
        bVar14 = puVar13 != (undefined *)0x0;
        if (puVar13 != &DAT_14c951a38 && bVar14) {
          do {
            puVar13 = *(undefined **)(puVar13 + 0x30);
            bVar14 = puVar13 != (undefined *)0x0;
            if (puVar13 == &DAT_14c951a38) break;
          } while (puVar13 != (undefined *)0x0);
        }
      }
      else {
        bVar14 = (*(ulonglong *)(puVar13 + 0x18) & DAT_14c951a40) != 0;
      }
      if (!bVar14) {
        lVar12 = 0;
      }
      FUN_1407c6a14(param_1,lVar12,&local_68);
      lVar12 = *(longlong *)(uStack_a0 + 0x18);
      plVar3 = local_a8;
      uStack_a0 = lVar12;
      if (local_a8 != (longlong *)0x0) {
        do {
          lVar10 = (longlong)local_98;
          while( true ) {
            for (; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x18)) {
              if (((~*(uint *)(*(longlong *)(lVar12 + 8) + 0x18) & 0x8001) == 0) &&
                 (((local_94 & 0x100) != 0 || ((*(byte *)(lVar12 + 0x3b) & 0x20) == 0))))
              goto LAB_1407c63f9;
            }
            if ((local_94 & 0x10000) == 0) break;
            lVar10 = lVar10 + 1;
            local_98 = (int)lVar10;
            if ((int)plVar3[0x3c] <= lVar10) break;
            lVar5 = *(longlong *)(plVar3[0x3b] + lVar10 * 0x10);
            lVar12 = 0;
            if (lVar5 != 0) {
              lVar12 = *(longlong *)(lVar5 + 0x50);
            }
          }
          if ((char)local_94 != '\x01') goto LAB_1407c64da;
          if (*(code **)(*plVar3 + 0x2b0) == (code *)&LAB_1446e8c94) {
            plVar3 = (longlong *)plVar3[8];
          }
          else {
            plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2b0))(plVar3);
          }
          if (plVar3 == (longlong *)0x0) goto LAB_1407c64da;
          lVar12 = plVar3[10];
          local_98 = -1;
        } while( true );
      }
      plVar3 = (longlong *)0x0;
LAB_1407c63f9:
      local_a8 = plVar3;
      uStack_a0 = lVar12;
    } while (lVar12 != 0);
    uStack_a0 = 0;
  }
LAB_1407c64da:
  plVar3 = (longlong *)FUN_1407c67d0(param_1[2]);
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_140005490(param_1[2],1);
    uStack_a0 = plVar3[10];
    local_98 = -1;
    local_94 = CONCAT13(local_94._3_1_,0x101);
    local_a8 = plVar3;
    FUN_144a2daf0(&local_a8);
    if (uStack_a0 != 0) {
      do {
        lVar10 = uStack_a0;
        lVar12 = *(longlong *)(uStack_a0 + 8);
        local_70 = lVar7;
        lVar5 = FUN_1446ddbd2();
        if (*(ulonglong *)(lVar5 + 8) == 0) {
          bVar14 = lVar12 != 0;
          if (lVar12 != lVar5 && bVar14) {
            do {
              lVar12 = *(longlong *)(lVar12 + 0x30);
              bVar14 = lVar12 != 0;
              if (lVar12 == lVar5) break;
            } while (lVar12 != 0);
          }
        }
        else {
          bVar14 = (*(ulonglong *)(lVar12 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0;
        }
        if (!bVar14) {
          lVar10 = 0;
        }
        FUN_1407c6a14(uVar4,lVar10,&local_70);
        uStack_a0 = *(longlong *)(uStack_a0 + 0x18);
        FUN_144a2daf0(&local_a8);
      } while (uStack_a0 != 0);
    }
  }
  FUN_14574599a(local_ac);
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407c67d0 FUN_1407c67d0 body=8 status=ok
// SIG undefined FUN_1407c67d0(void)

undefined8 FUN_1407c67d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



// FUNCTION 1407c67d8 FUN_1407c67d8 body=90 status=ok
// SIG undefined FUN_1407c67d8(void)

void FUN_1407c67d8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1407c6844();
  if (*(longlong *)(param_2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407c6844 FUN_1407c6844 body=234 status=ok
// SIG undefined FUN_1407c6844(void)

void FUN_1407c6844(undefined8 *param_1,longlong *param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1407c6930(local_38,&local_28,*param_2);
  if (local_28 != 0) {
    uVar1 = (uint)((ulonglong)local_28 >> 0x10);
    uVar3 = (uint)local_28 & 0xffff;
    plVar2 = (longlong *)
             FUN_1407c7c90(*param_1,((uint)local_28 << 0x10 | uVar3) +
                                    (int)((ulonglong)local_28 >> 0x20) +
                                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4),&local_28);
    *plVar2 = *param_2;
    if (plVar2 != param_2) {
      if (plVar2[1] != 0) {
        FUN_1400020a8();
      }
      plVar2[1] = param_2[1];
      param_2[1] = 0;
      *(int *)(plVar2 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)plVar2 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
      param_2[2] = 0;
    }
    plVar2[3] = param_2[3];
    *plVar2 = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407c6930 FUN_1407c6930 body=227 status=ok
// SIG undefined FUN_1407c6930(void)

undefined8 *
FUN_1407c6930(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  ulonglong *local_b0;
  char local_a8;
  undefined1 local_a0 [128];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d0 = param_3;
  cVar1 = FUN_1407c7b76(param_1,param_3);
  if (cVar1 == '\0') {
    param_3 = 0;
  }
  else if (*(int *)(param_4 + 1) != 0) {
    local_c0 = local_a0;
    local_a8 = '\0';
    local_b0 = &local_20;
    local_b8 = local_c0;
    uVar2 = FUN_1449668a2(&local_c0,*param_4);
    FUN_14005eb5c(&local_d0,uVar2);
    FUN_1446f82e2(&local_c8,(ulonglong)((longlong)local_b8 - (longlong)local_c0) >> 1,local_c0,1);
    param_3 = local_c8;
    if (local_a8 == '\x01') {
      FUN_1400020a8(local_c0);
    }
  }
  *param_2 = param_3;
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407c6a14 FUN_1407c6a14 body=4449 status=ok
// SIG undefined FUN_1407c6a14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407c6a14(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  code *local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == (longlong *)0x0) {
LAB_1407c6af1:
    if ((*(byte *)((longlong)param_2 + 0x3d) & 1) == 0) goto LAB_1407c710f;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952210) && (FUN_144b3d300(&DAT_14c952210), DAT_14c952210 == -1)) {
      FUN_14475b26a();
      local_a0 = FUN_1405ebbb2;
      local_a8 = &DAT_14c9520b8;
      local_b0 = 0;
      local_b8 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
    puVar5 = (undefined8 *)param_2[1];
    if (DAT_14c9521c8 == 0) {
      bVar6 = puVar5 != (undefined8 *)0x0;
      puVar1 = puVar5;
      if (puVar5 != &DAT_14c9521c0 && bVar6) {
        do {
          puVar1 = (undefined8 *)puVar1[6];
          bVar6 = puVar1 != (undefined8 *)0x0;
          if (puVar1 == &DAT_14c9521c0) break;
        } while (puVar1 != (undefined8 *)0x0);
      }
      iVar3 = 2;
      if (!bVar6) goto LAB_1407c6b81;
    }
    else {
      iVar3 = 2;
      if ((puVar5[3] & DAT_14c9521c8) == 0) {
LAB_1407c6b81:
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9523c8) &&
           (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
          FUN_14475b26a();
          local_a0 = FUN_1408a629c;
          local_a8 = &DAT_14c9520b8;
          local_b0 = 0;
          local_b8 = 0x1008101;
          FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
          atexit(FUN_14281708e);
          _Init_thread_footer(&DAT_14c9523c8);
        }
        puVar5 = (undefined8 *)param_2[1];
        if (DAT_14c952380 == 0) {
          bVar6 = puVar5 != (undefined8 *)0x0;
          puVar1 = puVar5;
          if (puVar5 != &DAT_14c952378 && bVar6) {
            do {
              puVar1 = (undefined8 *)puVar1[6];
              bVar6 = puVar1 != (undefined8 *)0x0;
              if (puVar1 == &DAT_14c952378) break;
            } while (puVar1 != (undefined8 *)0x0);
          }
          iVar3 = 2;
          if (!bVar6) goto LAB_1407c6c07;
        }
        else {
          iVar3 = 2;
          if ((puVar5[3] & DAT_14c952380) == 0) {
LAB_1407c6c07:
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1))
            {
              FUN_14475b26a();
              local_a0 = FUN_14079c5e4;
              local_a8 = &DAT_14c9520b8;
              local_b8 = 0x101008001;
              local_b0 = 0;
              FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
              atexit(FUN_1428170bb);
              _Init_thread_footer(&DAT_14c952420);
            }
            puVar5 = (undefined8 *)param_2[1];
            if (DAT_14c9523d8 == 0) {
              bVar6 = puVar5 != (undefined8 *)0x0;
              puVar1 = puVar5;
              if (puVar5 != (undefined8 *)&DAT_14c9523d0 && bVar6) {
                do {
                  puVar1 = (undefined8 *)puVar1[6];
                  bVar6 = puVar1 != (undefined8 *)0x0;
                  if (puVar1 == (undefined8 *)&DAT_14c9523d0) break;
                } while (puVar1 != (undefined8 *)0x0);
              }
              iVar3 = 2;
              if (!bVar6) goto LAB_1407c6d04;
            }
            else {
              iVar3 = 2;
              if ((puVar5[3] & DAT_14c9523d8) == 0) {
LAB_1407c6d04:
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c951d78) &&
                   (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
                  FUN_14475b26a();
                  local_a0 = FUN_1409f1a5c;
                  local_a8 = &DAT_14c9520b8;
                  local_b0 = 0;
                  local_b8 = 0x1008041;
                  FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
                  atexit(FUN_14281201f);
                  _Init_thread_footer(&DAT_14c951d78);
                }
                puVar5 = (undefined8 *)param_2[1];
                if (DAT_14c951d30 == 0) {
                  bVar6 = puVar5 != (undefined8 *)0x0;
                  puVar1 = puVar5;
                  if (puVar5 != (undefined8 *)&DAT_14c951d28 && bVar6) {
                    do {
                      puVar1 = (undefined8 *)puVar1[6];
                      bVar6 = puVar1 != (undefined8 *)0x0;
                      if (puVar1 == (undefined8 *)&DAT_14c951d28) break;
                    } while (puVar1 != (undefined8 *)0x0);
                  }
                  if (!bVar6) goto LAB_1407c6d85;
                }
                else if ((puVar5[3] & DAT_14c951d30) == 0) {
LAB_1407c6d85:
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c9496d8) &&
                     (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
                    if ((*(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x110) < DAT_14c951a88) &&
                       (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                      local_a8 = (undefined *)FUN_140342cba();
                      local_a0 = FUN_1468c7f1e;
                      local_b0 = 0;
                      local_b8 = 0x8001;
                      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                      atexit(FUN_14280c819);
                      _Init_thread_footer(&DAT_14c951a88);
                    }
                    local_a0 = FUN_140a4831c;
                    local_a8 = &DAT_14c951a38;
                    local_b8 = 0x1000000008001;
                    local_b0 = 0;
                    FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
                    atexit(FUN_1427e14fe);
                    _Init_thread_footer(&DAT_14c9496d8);
                  }
                  puVar5 = (undefined8 *)param_2[1];
                  if (DAT_14c949690 == 0) {
                    bVar6 = puVar5 != (undefined8 *)0x0;
                    puVar1 = puVar5;
                    if (puVar5 != (undefined8 *)&DAT_14c949688 && bVar6) {
                      do {
                        puVar1 = (undefined8 *)puVar1[6];
                        bVar6 = puVar1 != (undefined8 *)0x0;
                        if (puVar1 == (undefined8 *)&DAT_14c949688) break;
                      } while (puVar1 != (undefined8 *)0x0);
                    }
                    iVar3 = 1;
                    if (!bVar6) goto LAB_1407c6e0b;
                  }
                  else {
                    iVar3 = 1;
                    if ((puVar5[3] & DAT_14c949690) == 0) {
LAB_1407c6e0b:
                      if ((*(int *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 0x110) < DAT_14c951ae0) &&
                         (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
                        if ((*(int *)(*(longlong *)
                                       ((longlong)ThreadLocalStoragePointer +
                                       (ulonglong)_tls_index * 8) + 0x110) < DAT_14c951a88) &&
                           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                          local_a8 = (undefined *)FUN_140342cba();
                          local_a0 = FUN_1468c7f1e;
                          local_b0 = 0;
                          local_b8 = 0x8001;
                          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                          atexit(FUN_14280c819);
                          _Init_thread_footer(&DAT_14c951a88);
                        }
                        local_a0 = FUN_140b31576;
                        local_a8 = &DAT_14c951a38;
                        local_b0 = 0;
                        local_b8 = 0x208001;
                        FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
                        atexit(FUN_14280cbf7);
                        _Init_thread_footer(&DAT_14c951ae0);
                      }
                      puVar5 = (undefined8 *)param_2[1];
                      if (DAT_14c951a98 == 0) {
                        bVar6 = puVar5 != (undefined8 *)0x0;
                        puVar1 = puVar5;
                        if (puVar5 != (undefined8 *)&DAT_14c951a90 && bVar6) {
                          do {
                            puVar1 = (undefined8 *)puVar1[6];
                            bVar6 = puVar1 != (undefined8 *)0x0;
                            if (puVar1 == (undefined8 *)&DAT_14c951a90) break;
                          } while (puVar1 != (undefined8 *)0x0);
                        }
                        if (!bVar6) goto LAB_1407c6e87;
                      }
                      else if ((puVar5[3] & DAT_14c951a98) == 0) {
LAB_1407c6e87:
                        if ((*(int *)(*(longlong *)
                                       ((longlong)ThreadLocalStoragePointer +
                                       (ulonglong)_tls_index * 8) + 0x110) < DAT_14c951f40) &&
                           (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1)) {
                          if ((*(int *)(*(longlong *)
                                         ((longlong)ThreadLocalStoragePointer +
                                         (ulonglong)_tls_index * 8) + 0x110) < DAT_14c951a88) &&
                             (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                            local_a8 = (undefined *)FUN_140342cba();
                            local_a0 = FUN_1468c7f1e;
                            local_b0 = 0;
                            local_b8 = 0x8001;
                            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                            atexit(FUN_14280c819);
                            _Init_thread_footer(&DAT_14c951a88);
                          }
                          local_a0 = FUN_140eb3340;
                          local_a8 = &DAT_14c951a38;
                          local_b8 = 0x400000008001;
                          local_b0 = 0;
                          FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
                          atexit(FUN_142815b60);
                          _Init_thread_footer(&DAT_14c951f40);
                        }
                        puVar5 = (undefined8 *)param_2[1];
                        if (DAT_14c951ef8 == 0) {
                          bVar6 = puVar5 != (undefined8 *)0x0;
                          puVar1 = puVar5;
                          if (puVar5 != (undefined8 *)&DAT_14c951ef0 && bVar6) {
                            do {
                              puVar1 = (undefined8 *)puVar1[6];
                              bVar6 = puVar1 != (undefined8 *)0x0;
                              if (puVar1 == (undefined8 *)&DAT_14c951ef0) break;
                            } while (puVar1 != (undefined8 *)0x0);
                          }
                          if (!bVar6) goto LAB_1407c6f03;
                        }
                        else if ((puVar5[3] & DAT_14c951ef8) == 0) {
LAB_1407c6f03:
                          if ((*(int *)(*(longlong *)
                                         ((longlong)ThreadLocalStoragePointer +
                                         (ulonglong)_tls_index * 8) + 0x110) < DAT_14c952900) &&
                             (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1)) {
                            if ((*(int *)(*(longlong *)
                                           ((longlong)ThreadLocalStoragePointer +
                                           (ulonglong)_tls_index * 8) + 0x110) < DAT_14c951a88) &&
                               (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                              local_a8 = (undefined *)FUN_140342cba();
                              local_a0 = FUN_1468c7f1e;
                              local_b0 = 0;
                              local_b8 = 0x8001;
                              FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                              atexit(FUN_14280c819);
                              _Init_thread_footer(&DAT_14c951a88);
                            }
                            local_a0 = FUN_1468e4cee;
                            local_a8 = &DAT_14c951a38;
                            local_b8 = 0x800000008001;
                            local_b0 = 0;
                            FUN_14000176a(&DAT_14c9528b0,L"FSetProperty",0x800000000000,0);
                            atexit(FUN_142817fb7);
                            _Init_thread_footer(&DAT_14c952900);
                          }
                          puVar5 = (undefined8 *)param_2[1];
                          if (DAT_14c9528b8 == 0) {
                            bVar6 = puVar5 != (undefined8 *)0x0;
                            puVar1 = puVar5;
                            if (puVar5 != (undefined8 *)&DAT_14c9528b0 && bVar6) {
                              do {
                                puVar1 = (undefined8 *)puVar1[6];
                                bVar6 = puVar1 != (undefined8 *)0x0;
                                if (puVar1 == (undefined8 *)&DAT_14c9528b0) break;
                              } while (puVar1 != (undefined8 *)0x0);
                            }
                            if (!bVar6) goto LAB_1407c6f7b;
                          }
                          else if ((puVar5[3] & DAT_14c9528b8) == 0) {
LAB_1407c6f7b:
                            if ((*(int *)(*(longlong *)
                                           ((longlong)ThreadLocalStoragePointer +
                                           (ulonglong)_tls_index * 8) + 0x110) < DAT_14c952a58) &&
                               (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
                              if ((*(int *)(*(longlong *)
                                             ((longlong)ThreadLocalStoragePointer +
                                             (ulonglong)_tls_index * 8) + 0x110) < DAT_14c951a88) &&
                                 (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                                local_a8 = (undefined *)FUN_140342cba();
                                local_a0 = FUN_1468c7f1e;
                                local_b0 = 0;
                                local_b8 = 0x8001;
                                FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                                atexit(FUN_14280c819);
                                _Init_thread_footer(&DAT_14c951a88);
                              }
                              local_a0 = FUN_1403a682c;
                              local_a8 = &DAT_14c951a38;
                              local_b0 = 0;
                              local_b8 = 0x108001;
                              FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
                              atexit(FUN_142818c9e);
                              _Init_thread_footer(&DAT_14c952a58);
                            }
                            puVar5 = (undefined8 *)param_2[1];
                            if (DAT_14c952a10 == 0) {
                              bVar6 = puVar5 != (undefined8 *)0x0;
                              puVar1 = puVar5;
                              if (puVar5 != (undefined8 *)&DAT_14c952a08 && bVar6) {
                                do {
                                  puVar1 = (undefined8 *)puVar1[6];
                                  bVar6 = puVar1 != (undefined8 *)0x0;
                                  if (puVar1 == (undefined8 *)&DAT_14c952a08) break;
                                } while (puVar1 != (undefined8 *)0x0);
                              }
                              iVar3 = 1;
                              if (bVar6) goto LAB_1407c6ff9;
                            }
                            else {
                              if ((puVar5[3] & DAT_14c952a10) != 0) goto LAB_1407c6ff9;
                              iVar3 = 1;
                            }
                            goto LAB_1407c6ffb;
                          }
                        }
                      }
LAB_1407c6ff9:
                      iVar3 = 0;
                    }
                  }
                  goto LAB_1407c6ffb;
                }
                iVar3 = (param_2[0xe] == 0) + 1;
              }
            }
          }
        }
      }
    }
LAB_1407c6ffb:
    local_58 = 0;
    uStack_50 = 0;
    if (param_2 == (longlong *)0x0) {
      local_b8 = param_1 + _DAT_00000044;
      lVar2 = 0;
      local_a0 = (code *)0x0;
      local_b0 = 0;
      local_a8 = (undefined *)((ulonglong)local_a8 & 0xffffffff00000000);
      (**(code **)(_DAT_00000000 + 0xf0))(0,&local_58,local_b8,0);
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c963ee0) && (FUN_144b3d300(), DAT_14c963ee0 == -1)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_a8 = (undefined *)FUN_140342cba();
          local_a0 = FUN_1468c7f1e;
          local_b0 = 0;
          local_b8 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        local_a0 = FUN_140fb5c52;
        local_a8 = &DAT_14c951a38;
        local_b0 = 0;
        local_b8 = 0x40008001;
        FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0);
        atexit(FUN_14282980e);
        _Init_thread_footer();
      }
      if (DAT_14c963e98 == 0) {
        bVar6 = puVar5 != (undefined8 *)0x0;
        if (puVar5 != (undefined8 *)&DAT_14c963e90 && bVar6) {
          do {
            puVar5 = (undefined8 *)puVar5[6];
            bVar6 = puVar5 != (undefined8 *)0x0;
            if (puVar5 == (undefined8 *)&DAT_14c963e90) break;
          } while (puVar5 != (undefined8 *)0x0);
        }
        if (!bVar6) goto LAB_1407c704a;
LAB_1407c7177:
        FUN_1467d1a5a(&local_58,param_1 + *(int *)((longlong)param_2 + 0x44),0,1);
      }
      else {
        if ((puVar5[3] & DAT_14c963e98) != 0) goto LAB_1407c7177;
LAB_1407c704a:
        local_b8 = param_1 + *(int *)((longlong)param_2 + 0x44);
        local_a0 = (code *)0x0;
        local_b0 = 0;
        local_a8 = (undefined *)((ulonglong)local_a8 & 0xffffffff00000000);
        (**(code **)(*param_2 + 0xf0))(param_2,&local_58,local_b8,0);
      }
      lVar2 = param_2[4];
    }
    local_90 = local_58;
    uStack_88 = uStack_50;
    local_58 = 0;
    uStack_50 = 0;
    local_7c = 0;
    local_98 = lVar2;
    local_80 = iVar3;
    FUN_1407c67d8(param_3);
  }
  else {
    puVar4 = (undefined *)param_2[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952a58) && (FUN_144b3d300(), DAT_14c952a58 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_a8 = (undefined *)FUN_140342cba();
        local_a0 = FUN_1468c7f1e;
        local_b0 = 0;
        local_b8 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_a0 = FUN_1403a682c;
      local_a8 = &DAT_14c951a38;
      local_b0 = 0;
      local_b8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer();
    }
    if (DAT_14c952a10 == 0) {
      bVar6 = puVar4 != (undefined *)0x0;
      if (puVar4 != &DAT_14c952a08 && bVar6) {
        do {
          puVar4 = *(undefined **)(puVar4 + 0x30);
          bVar6 = puVar4 != (undefined *)0x0;
          if (puVar4 == &DAT_14c952a08) break;
        } while (puVar4 != (undefined *)0x0);
      }
      if (bVar6) goto LAB_1407c6abe;
      goto LAB_1407c6af1;
    }
    if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c952a10) == 0) goto LAB_1407c6af1;
LAB_1407c6abe:
    if ((param_2[0xe] == 0) || (*(longlong *)(param_2[0xe] + 0x18) != DAT_14c947cd0))
    goto LAB_1407c6af1;
    param_1 = param_1 + *(int *)((longlong)param_2 + 0x44);
    if (*(char *)(*param_3 + 0x75) == '\x01') {
      *(longlong *)(*param_3 + 0x60) = param_1;
      goto LAB_1407c710f;
    }
    local_58 = 0;
    uStack_50 = 0;
    local_a0 = (code *)0x0;
    local_b0 = 0;
    local_a8 = (undefined *)((ulonglong)local_a8 & 0xffffffff00000000);
    local_b8 = param_1;
    (**(code **)(*param_2 + 0xf0))(param_2,&local_58,param_1,0);
    local_78 = DAT_14c947cd0;
    local_70 = (undefined4)local_58;
    uStack_6c = local_58._4_4_;
    uStack_68 = (undefined4)uStack_50;
    uStack_64 = uStack_50._4_4_;
    local_58 = 0;
    uStack_50 = 0;
    local_60 = 1;
    FUN_1407c67d8(param_3);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_1407c710f:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407c7b76 FUN_1407c7b76 body=281 status=ok
// SIG undefined FUN_1407c7b76(void)

ulonglong FUN_1407c7b76(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  ulonglong *local_a0;
  char local_98;
  undefined1 local_90 [128];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = param_2;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    local_b0 = local_90;
    local_98 = '\0';
    local_a0 = &local_10;
    local_a8 = local_b0;
    FUN_14005eb5c(&local_b8);
    if ((int)((ulonglong)((longlong)local_a8 - (longlong)local_b0) >> 1) < 5) {
      uVar5 = CONCAT71((int7)((ulonglong)&local_b0 >> 8),1);
    }
    else {
      lVar3 = 5;
      lVar4 = 0;
LAB_1407c7bf8:
      uVar1 = *(ushort *)((longlong)&DAT_149e6e300 + lVar4);
      uVar2 = *(ushort *)(local_b0 + lVar4);
      if (uVar1 == uVar2) {
        iVar6 = 0;
        if ((uVar1 == 0) || (lVar3 == 1)) goto LAB_1407c7c40;
LAB_1407c7c14:
        lVar3 = lVar3 + -1;
        lVar4 = lVar4 + 2;
        goto LAB_1407c7bf8;
      }
      if ((uVar2 | uVar1) < 0x80) {
        if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
          iVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
          goto LAB_1407c7c40;
        }
        if (lVar3 == 1) {
          iVar6 = 0;
          goto LAB_1407c7c40;
        }
        goto LAB_1407c7c14;
      }
      iVar6 = (uint)uVar1 - (uint)uVar2;
LAB_1407c7c40:
      uVar5 = (ulonglong)CONCAT11((char)(uVar2 >> 8),iVar6 != 0);
    }
    if (local_98 == '\x01') {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407c7c90 FUN_1407c7c90 body=394 status=ok
// SIG undefined FUN_1407c7c90(void)

longlong FUN_1407c7c90(longlong *param_1,uint param_2,longlong *param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_48 [2];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        lVar4 = *param_1 + (longlong)iVar6 * 0x30;
        if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x30) == *param_3) {
          if (lVar4 != 0) goto LAB_1407c7dd4;
          break;
        }
        iVar6 = *(int *)(lVar4 + 0x28);
      } while (iVar6 != -1);
    }
  }
  FUN_1407c7eea(param_1,local_48);
  *local_40 = *param_3;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 1;
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_58 = 0;
  cVar1 = FUN_1407c7e1c(param_1,param_2,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar2) {
      uVar5 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar6 <= (int)param_1[9])) {
      param_2 = (int)param_1[9] - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x2c) = param_2;
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 9) = iVar6;
      FUN_145745a66(param_1);
    }
  }
  lVar4 = *param_1 + (longlong)local_48[0] * 0x30;
LAB_1407c7dd4:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 8;
}



// FUNCTION 1407c7e1c FUN_1407c7e1c body=206 status=ok
// SIG undefined FUN_1407c7e1c(void)

void FUN_1407c7e1c(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 uVar10;
  longlong *plVar11;
  int iVar12;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar12 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar12 * 0x30) == *param_3) {
          if (*(longlong *)(puVar1 + 4) != 0) {
            FUN_1400020a8();
          }
          lVar6 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar8 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar9 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(longlong *)(puVar1 + 8) = param_3[4];
          puVar1[4] = (int)lVar8;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar9;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar6;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar3;
          FUN_146897dee(param_1,*param_4,1);
          *param_4 = iVar12;
          uVar10 = 1;
          break;
        }
        iVar12 = puVar1[10];
        uVar10 = 0;
      } while (iVar12 != -1);
      goto LAB_1407c7e97;
    }
  }
  uVar10 = 0;
LAB_1407c7e97:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar10;
  }
  return;
}



// FUNCTION 1407c7eea FUN_1407c7eea body=484 status=ok
// SIG undefined FUN_1407c7eea(void)

int * FUN_1407c7eea(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x30);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 1407c8126 FUN_1407c8126 body=713 status=ok
// SIG undefined FUN_1407c8126(void)

bool FUN_1407c8126(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  int iVar18;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar5 = (*(code *)PTR_FUN_14c758760)();
  if (cVar5 != '\0') goto LAB_1407c8202;
  local_58 = (undefined8 *)0x0;
  iVar9 = *(int *)(param_1 + 0x5e0);
  uVar2 = *(undefined8 *)(param_1 + 0x5d8);
  local_50 = iVar9;
  if (iVar9 == 0) {
    local_4c = 0;
LAB_1407c83c2:
    iVar9 = 0;
  }
  else {
    FUN_1407c8540(&local_58,iVar9);
    FUN_1407c843d(local_58,uVar2,iVar9);
    if ((longlong)local_50 == 0) goto LAB_1407c83c2;
    puVar11 = local_58 + (longlong)local_50 * 2;
    puVar12 = local_58;
    do {
      local_68 = *puVar12;
      local_60 = puVar12[1];
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      FUN_1407c8466(param_1,&local_68);
      puVar12 = puVar12 + 2;
      iVar9 = local_50;
    } while (puVar12 != puVar11);
  }
  FUN_1407c83f0(local_58,iVar9);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1407c8202:
  plVar13 = *(longlong **)(param_1 + 0x5e8);
  if ((longlong)*(int *)(param_1 + 0x5f0) == 0) {
    uVar6 = 0;
  }
  else {
    local_88 = plVar13 + (longlong)*(int *)(param_1 + 0x5f0) * 2;
    iVar9 = *(int *)(param_1 + 0x5e0);
    local_78 = param_1;
    do {
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        local_80 = *(longlong **)(param_1 + 0x5d8);
        local_70 = local_80 + 2;
        iVar18 = 0;
        bVar17 = *local_80 == *plVar13;
        iVar7 = 0;
        do {
          lVar15 = (longlong)iVar7;
          iVar10 = iVar7 + 1;
          if (iVar7 + 1 < iVar9) {
            iVar10 = iVar9;
          }
          plVar14 = local_70 + lVar15 * 2;
          lVar16 = lVar15;
          iVar8 = iVar7;
          do {
            lVar16 = lVar16 + 1;
            iVar4 = iVar10;
            if (iVar9 <= lVar16) break;
            lVar3 = *plVar14;
            iVar8 = iVar8 + 1;
            plVar14 = plVar14 + 2;
            iVar4 = iVar8;
          } while (bVar17 == (lVar3 == *plVar13));
          iVar10 = iVar4 - iVar7;
          if (bVar17 == false) {
            if (iVar18 != iVar7) {
              memmove(local_80 + (longlong)iVar18 * 2,local_80 + lVar15 * 2,(longlong)iVar10 << 4);
            }
            iVar18 = iVar18 + iVar10;
          }
          else {
            FUN_1407c83f0(local_80 + lVar15 * 2,iVar10);
          }
          bVar17 = (bool)(bVar17 ^ 1);
          iVar7 = iVar4;
        } while (lVar16 < iVar9);
        *(int *)(local_78 + 0x5e0) = iVar18;
        param_1 = local_78;
        iVar9 = iVar18;
      }
      plVar13 = plVar13 + 2;
    } while (plVar13 != local_88);
    uVar6 = *(undefined4 *)(param_1 + 0x5f0);
    plVar13 = *(longlong **)(param_1 + 0x5e8);
  }
  iVar9 = *(int *)(param_1 + 0x5f4);
  FUN_1407c83f0(plVar13,uVar6);
  *(undefined4 *)(param_1 + 0x5f0) = 0;
  if ((iVar9 < 0) && (*(int *)(param_1 + 0x5f4) != 0)) {
    FUN_1470e9830(param_1 + 0x5e8,0);
  }
  iVar9 = *(int *)(param_1 + 0x5e0);
  if (iVar9 < 1) {
    plVar13 = *(longlong **)(param_1 + 0x600);
    *(undefined8 *)(param_1 + 0x5f8) = 0;
    *(undefined8 *)(param_1 + 0x600) = 0;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0 < iVar9;
}



// FUNCTION 1407c83f0 FUN_1407c83f0 body=77 status=ok
// SIG undefined FUN_1407c83f0(void)

void FUN_1407c83f0(longlong param_1,int param_2)

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



// FUNCTION 1407c843d FUN_1407c843d body=40 status=ok
// SIG undefined FUN_1407c843d(void)

void FUN_1407c843d(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1407c8466 FUN_1407c8466 body=218 status=ok
// SIG undefined FUN_1407c8466(void)

void FUN_1407c8466(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*param_2 != 0) {
    FUN_1407d097e();
    lVar4 = *param_2;
    if ((*(char *)(lVar4 + 0x30) == '\0') && (*(char *)(lVar4 + 0x31) != '\x01')) {
      *(undefined4 *)(lVar4 + 0x170) = 0;
      iVar3 = (int)param_1[0xbe];
      *(uint *)(param_1 + 0xbe) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x5f4) < iVar3 + 1U) {
        FUN_14088d55a(param_1 + 0xbd,iVar3);
      }
      lVar4 = param_1[0xbd];
      *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = *param_2;
      lVar5 = param_2[1];
      *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
    }
    else if (*(int *)(lVar4 + 0x170) < 1) {
      (**(code **)(*param_1 + 0x578))(param_1,param_2,1);
    }
  }
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001407c8531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1407c8540 FUN_1407c8540 body=213 status=ok
// SIG undefined FUN_1407c8540(void)

void FUN_1407c8540(longlong param_1,int param_2)

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



// FUNCTION 1407c8624 FUN_1407c8624 body=116 status=ok
// SIG undefined FUN_1407c8624(void)

undefined8 FUN_1407c8624(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_1407c869a(param_3,local_38,0);
  (**(code **)(*param_1 + 0x88))(param_1,param_2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407c869a FUN_1407c869a body=1001 status=ok
// SIG undefined FUN_1407c869a(void)

void FUN_1407c869a(uint *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  uint local_d8;
  uint local_d0;
  uint local_c8;
  uint local_c0;
  uint local_b8;
  uint local_b0;
  uint local_a8;
  uint local_a0;
  uint local_98;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  switch(param_3) {
  case 1:
    local_d0 = param_1[3];
    local_d8 = param_1[2];
    uVar7 = *param_1;
    uVar11 = param_1[1];
    pwVar5 = L"%08x%08x%08x%08x";
    break;
  case 2:
    local_c0 = param_1[3];
    local_c8 = param_1[2] & 0xffff;
    local_d0 = param_1[2] >> 0x10;
    uVar7 = *param_1;
    local_d8 = param_1[1] & 0xffff;
    uVar11 = param_1[1] >> 0x10;
    pwVar5 = L"%08X-%04X-%04X-%04X-%04X%08X";
    break;
  case 3:
    local_c0 = param_1[3];
    local_c8 = param_1[2] & 0xffff;
    local_d0 = param_1[2] >> 0x10;
    uVar7 = *param_1;
    local_d8 = param_1[1] & 0xffff;
    uVar11 = param_1[1] >> 0x10;
    pwVar5 = L"%08x-%04x-%04x-%04x-%04x%08x";
    break;
  case 4:
    local_c0 = param_1[3];
    local_c8 = param_1[2] & 0xffff;
    local_d0 = param_1[2] >> 0x10;
    uVar7 = *param_1;
    local_d8 = param_1[1] & 0xffff;
    uVar11 = param_1[1] >> 0x10;
    pwVar5 = L"{%08X-%04X-%04X-%04X-%04X%08X}";
    break;
  case 5:
    local_c0 = param_1[3];
    local_c8 = param_1[2] & 0xffff;
    local_d0 = param_1[2] >> 0x10;
    uVar7 = *param_1;
    local_d8 = param_1[1] & 0xffff;
    uVar11 = param_1[1] >> 0x10;
    pwVar5 = L"(%08X-%04X-%04X-%04X-%04X%08X)";
    break;
  case 6:
    local_b0 = param_1[3];
    local_98 = local_b0 & 0xff;
    local_a0 = local_b0 >> 8 & 0xff;
    local_a8 = local_b0 >> 0x10 & 0xff;
    local_b0 = local_b0 >> 0x18;
    local_d0 = param_1[2];
    local_b8 = local_d0 & 0xff;
    local_c0 = local_d0 >> 8 & 0xff;
    local_c8 = local_d0 >> 0x10 & 0xff;
    local_d0 = local_d0 >> 0x18;
    uVar7 = *param_1;
    local_d8 = param_1[1] & 0xffff;
    uVar11 = param_1[1] >> 0x10;
    pwVar5 = L"{0x%08X,0x%04X,0x%04X,{0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X}}";
    break;
  case 7:
    local_d0 = param_1[3];
    local_d8 = param_1[2];
    uVar7 = *param_1;
    uVar11 = param_1[1];
    pwVar5 = L"%08X-%08X-%08X-%08X";
    break;
  case 8:
    uVar7 = *param_1;
    local_48 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = param_1[1];
    local_44 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = param_1[2];
    local_40 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = param_1[3];
    local_3c = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    iVar4 = FUN_14155584c(&local_48,0x10,&local_88,0);
    if (iVar4 != 0) {
      lVar12 = 0;
      do {
        if (*(short *)((longlong)&local_88 + lVar12) == 0x2b) {
          *(undefined2 *)((longlong)&local_88 + lVar12) = 0x2d;
        }
        lVar12 = lVar12 + 2;
      } while ((longlong)iVar4 * 2 != lVar12);
      lVar12 = 0;
      do {
        if (*(short *)((longlong)&local_88 + lVar12) == 0x2f) {
          *(undefined2 *)((longlong)&local_88 + lVar12) = 0x5f;
        }
        lVar12 = lVar12 + 2;
      } while ((longlong)iVar4 * 2 != lVar12);
    }
    iVar8 = 2;
    if (2 < iVar4) {
      iVar8 = iVar4;
    }
    iVar8 = iVar8 + -2;
    goto LAB_1407c8a7c;
  case 9:
    uVar9 = CONCAT44(*param_1,param_1[1]);
    uVar13 = CONCAT44(param_1[2],param_1[3]);
    lVar12 = 0x18;
    do {
      uVar6 = uVar9 / 0x2400000000;
      uVar10 = uVar9 - ((uVar6 << 0x22) + (uVar6 << 0x25));
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar10;
      uVar9 = (uVar6 << 0x20) + SUB168(auVar1 * ZEXT816(0x71c71c71c71c71d),8);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulonglong)
                     (uint)((int)uVar10 + SUB164(auVar1 * ZEXT816(0x71c71c71c71c71d),8) * -0x24) <<
                     0x20 | uVar13 >> 0x20;
      uVar6 = uVar13 & 0xffffffff |
              (ulonglong)
              (uint)((int)(uVar13 >> 0x20) + SUB164(auVar2 * ZEXT816(0x71c71c71c71c71d),8) * -0x24)
              << 0x20;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar6;
      uVar13 = (ulonglong)SUB164(auVar3 * ZEXT816(0x71c71c71c71c71d),8) |
               SUB168(auVar2 * ZEXT816(0x71c71c71c71c71d),8) << 0x20;
      *(ushort *)((longlong)&local_88 + lVar12 * 2) =
           (ushort)(byte)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ%08x%08x%08x%08x"
                         [uVar6 + SUB168(auVar3 * ZEXT816(0x71c71c71c71c71d),8) * -0x24];
      bVar14 = lVar12 != 0;
      lVar12 = lVar12 + -1;
    } while (bVar14);
    iVar8 = 0x19;
LAB_1407c8a7c:
    FUN_1400020e8(param_2,&local_88,iVar8);
LAB_1407c86fa:
    if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  default:
    uVar7 = *param_1;
    local_88 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = param_1[1];
    local_84 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = param_1[2];
    local_80 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = param_1[3];
    local_7c = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    FUN_1407c8a86(&local_88,0x10,param_2);
    goto LAB_1407c86fa;
  }
  FUN_1407c8b48(param_2,pwVar5,uVar7,uVar11);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_f8);
}



// FUNCTION 1407c8a86 FUN_1407c8a86 body=194 status=ok
// SIG undefined FUN_1407c8a86(void)

void FUN_1407c8a86(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  
  if (param_2 != 0) {
    iVar1 = (int)param_3[1];
    uVar8 = (uint)(iVar1 == 0) + param_2 * 2;
    iVar3 = uVar8 + iVar1;
    *(int *)(param_3 + 1) = iVar3;
    if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar1) < uVar8) {
      FUN_144a2dbb8(param_3);
      iVar3 = (int)param_3[1];
    }
    lVar4 = (longlong)(~(param_2 * 2) + iVar3) * 2 + *param_3;
    lVar5 = 0;
    do {
      bVar2 = *(byte *)(param_1 + lVar5) >> 4;
      sVar6 = bVar2 + 0x37;
      if (*(byte *)(param_1 + lVar5) < 0xa0) {
        sVar6 = bVar2 + 0x30;
      }
      *(short *)(lVar4 + lVar5 * 4) = sVar6;
      uVar7 = *(byte *)(param_1 + lVar5) & 0xf;
      sVar6 = 0x37;
      if ((byte)uVar7 < 10) {
        sVar6 = 0x30;
      }
      *(ushort *)(lVar4 + 2 + lVar5 * 4) = uVar7 + sVar6;
      lVar5 = lVar5 + 1;
    } while (param_2 != lVar5);
    *(undefined2 *)(*param_3 + (longlong)((int)param_3[1] + -1) * 2) = 0;
  }
  return;
}



// FUNCTION 1407c8b48 FUN_1407c8b48 body=322 status=ok
// SIG undefined FUN_1407c8b48(void)

void FUN_1407c8b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  size_t sVar4;
  wchar_t *_Str;
  int iVar5;
  bool bVar6;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_488 [32];
  undefined8 local_468;
  undefined8 *local_460;
  undefined8 *local_450;
  wchar_t local_448 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_488;
  local_res18 = param_3;
  local_res20 = param_4;
  local_450 = &local_res18;
  puVar3 = (undefined8 *)FUN_144737586();
  local_468 = 0;
  _Str = local_448;
  local_460 = &local_res18;
  uVar1 = __stdio_common_vswprintf(*puVar3,_Str,0x200,param_2);
  uVar2 = uVar1;
  if (0x1ff < uVar1) {
    iVar5 = 0x200;
    _Str = (wchar_t *)0x0;
    do {
      iVar5 = iVar5 * 2;
      _Str = (wchar_t *)FUN_14001fdce(_Str,(longlong)iVar5 * 2,0);
      local_450 = &local_res18;
      puVar3 = (undefined8 *)FUN_144737586();
      local_468 = 0;
      local_460 = &local_res18;
      uVar2 = __stdio_common_vswprintf(*puVar3,_Str,(longlong)iVar5,param_2);
      bVar6 = (int)uVar2 < 0;
      if (bVar6) {
        uVar2 = 0xffffffff;
      }
    } while (iVar5 <= (int)uVar2 || bVar6);
  }
  _Str[(int)uVar2] = L'\0';
  sVar4 = wcslen(_Str);
  FUN_1400020e8(param_1,_Str,sVar4 & 0xffffffff);
  if (0x1ff < uVar1) {
    FUN_1400020a8(_Str);
  }
  if ((local_48 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407c8c8c FUN_1407c8c8c body=211 status=ok
// SIG undefined FUN_1407c8c8c(void)

void FUN_1407c8c8c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_1407c8f4a(0,&local_58);
    lVar3 = local_58;
    lVar5 = (longlong)(int)uStack_50;
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        lVar2 = *(longlong *)(lVar3 + lVar6);
        if ((lVar2 != 0) && (lVar4 = FUN_1407c8d60(lVar2), lVar4 == param_2)) {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_1407c8de8(param_3,iVar1);
          }
          *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar2;
        }
        lVar6 = lVar6 + 8;
      } while (lVar5 * 8 != lVar6);
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



// FUNCTION 1407c8d60 FUN_1407c8d60 body=136 status=ok
// SIG undefined FUN_1407c8d60(void)

void FUN_1407c8d60(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) {
    uVar4 = FUN_1457bc4fa();
    lVar3 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x20) = lVar3;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    plVar1 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar4 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x18));
    }
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    return;
  }
  return;
}



// FUNCTION 1407c8de8 FUN_1407c8de8 body=353 status=ok
// SIG undefined FUN_1407c8de8(void)

void FUN_1407c8de8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407c8e6d;
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
LAB_1407c8e6d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1407c8f4a FUN_1407c8f4a body=1073 status=ok
// SIG undefined FUN_1407c8f4a(void)

void FUN_1407c8f4a(longlong param_1,undefined1 **param_2)

{
  ulonglong uVar1;
  code **ppcVar2;
  uint uVar3;
  int *piVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  int local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  int local_c0;
  code *local_b8;
  longlong **local_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  uint local_6c;
  undefined4 uStack_68;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  lVar11 = DAT_14cb84f20;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (DAT_14cb84f20 == 0) goto LAB_1407c92b1;
  local_d0 = &local_98;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  piVar4 = &DAT_14c9485f0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    piVar4 = *(int **)(param_1 + 8);
  }
  if (((*piVar4 == 0) || (iVar9 = piVar4[1], iVar9 == 0)) || (*piVar4 == DAT_14c948000)) {
LAB_1407c92f2:
    local_d8 = DAT_14c948620;
    local_e0 = DAT_14c948618;
  }
  else {
    if ((iVar9 < 2) && (piVar4[9] < 1)) {
      piVar4 = piVar4 + 2;
    }
    else {
      piVar4 = *(int **)(piVar4 + 6);
    }
    if (iVar9 < 1) goto LAB_1407c92f2;
    local_d8 = piVar4[2];
    local_e0 = *(undefined8 *)piVar4;
  }
  uStack_a0 = &local_b8;
  local_b8 = FUN_143dc955a;
  local_b0 = &local_d0;
  local_a8 = &LAB_143dc9516;
  uVar5 = FUN_14050b070();
  local_c8 = local_e0;
  local_c0 = local_d8;
  FUN_140e9367e(lVar11,&local_c8,uVar5,&local_a8);
  iVar9 = (int)uStack_90 - local_64;
  if (iVar9 != 0) {
    local_a8 = (undefined1 *)0x0;
    uStack_a0 = (code **)0x0;
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    FUN_1407c937c();
    if (local_70 == 0) {
      uVar14 = 1;
      uVar16 = 0;
      iVar9 = 0;
      iVar12 = 0;
    }
    else {
      puVar8 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar8 = local_88;
      }
      uVar15 = *puVar8;
      if (uVar15 == 0) {
        iVar9 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar9 = local_70 + -1;
        }
        uVar16 = 0;
        uVar14 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar14 = uVar16;
        }
        iVar12 = 0;
        do {
          if (uVar14 == uVar16) goto LAB_1407c91e6;
          iVar12 = iVar12 + 0x20;
          uVar15 = puVar8[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar16 = 0;
        iVar12 = 0;
      }
      uVar14 = (ulonglong)(-uVar15 & uVar15);
      uVar1 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if (local_70 <= iVar9) {
        iVar9 = local_70;
      }
    }
    if (iVar9 < local_70) {
      uVar15 = 0xffffffff;
      do {
        ppcVar2 = uStack_a0;
        puVar13 = (undefined8 *)((longlong)iVar9 * 0x10 + local_98);
        lVar11 = (longlong)(int)uStack_a0;
        uVar3 = (int)uStack_a0 + 1;
        uStack_a0 = (code **)CONCAT44(uStack_a0._4_4_,uVar3);
        if (uStack_a0._4_4_ < uVar3) {
          FUN_1407c8de8(&local_a8,(ulonglong)ppcVar2 & 0xffffffff);
        }
        *(undefined8 *)(local_a8 + lVar11 * 8) = *puVar13;
        uVar15 = uVar15 & ~(uint)uVar14;
        puVar8 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar8 = local_88;
        }
        iVar9 = (int)uVar16;
        lVar11 = (longlong)iVar9;
        uVar3 = puVar8[lVar11] & uVar15;
        if (uVar3 == 0) {
          iVar6 = local_70 + 0x1e;
          if (-1 < local_70 + -1) {
            iVar6 = local_70 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar9) {
            iVar7 = iVar9;
          }
          if (iVar6 <= iVar9) break;
          lVar10 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar3 = puVar8[lVar11 + lVar10 + 1];
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar11 == lVar10) goto LAB_1407c91e6;
          }
          uVar16 = (ulonglong)(iVar9 + (int)lVar10 + 1);
          uVar15 = 0xffffffff;
        }
        uVar14 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar14 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar9 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar9 < local_70);
    }
LAB_1407c91e6:
    if (&local_a8 == param_2) {
      if (local_a8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      *param_2 = local_a8;
      local_a8 = (undefined1 *)0x0;
      *(int *)(param_2 + 1) = (int)uStack_a0;
      *(uint *)((longlong)param_2 + 0xc) = uStack_a0._4_4_;
    }
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar14 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar14 != 0) {
    FUN_14474875a(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
LAB_1407c92b1:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407c937c FUN_1407c937c body=315 status=ok
// SIG undefined FUN_1407c937c(void)

void FUN_1407c937c(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1407c93e6;
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
LAB_1407c93e6:
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



// FUNCTION 1407c94b8 FUN_1407c94b8 body=67 status=ok
// SIG undefined FUN_1407c94b8(void)

undefined4 FUN_1407c94b8(longlong *param_1)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2d0))(param_1,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_1c[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407c950e FUN_1407c950e body=30 status=ok
// SIG undefined FUN_1407c950e(void)

undefined8 FUN_1407c950e(undefined8 param_1,undefined8 param_2)

{
  FUN_1407c952c();
  return param_2;
}



// FUNCTION 1407c952c FUN_1407c952c body=1244 status=ok
// SIG undefined FUN_1407c952c(void)

char * FUN_1407c952c(longlong *param_1,char *param_2,longlong param_3,longlong param_4,int param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong *plVar8;
  ulonglong uVar9;
  char cVar10;
  int iVar11;
  undefined1 uVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  ulonglong local_1b8;
  longlong *plStack_1b0;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined4 local_184;
  undefined4 uStack_180;
  int iStack_17c;
  int iStack_178;
  longlong local_174;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  char local_158 [8];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  plVar8 = *(longlong **)(param_1[0x47] + 8);
  if ((plVar8 == (longlong *)0x0) || (*(char *)((longlong)param_1 + 0x26c) != '\x01')) {
    *param_2 = '\0';
  }
  else {
    if ((((param_5 != 0) || (*(float *)(param_4 + 0x30) != 0.0)) ||
        (NAN(*(float *)(param_4 + 0x30)))) ||
       ((*(float *)(param_4 + 0x34) != 0.0 || (NAN(*(float *)(param_4 + 0x34)))))) {
      fVar16 = *(float *)((longlong)param_1 + 0x2c4) * *(float *)((longlong)param_1 + 0x264);
      fVar4 = *(float *)(param_4 + 0x20);
      fVar5 = *(float *)(param_4 + 0x24);
      fVar20 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                     *(float *)(param_3 + 0x24) * *(float *)(param_3 + 0x20));
      fVar18 = *(float *)(param_3 + 0x1c) * fVar20;
      fVar17 = -*(float *)(param_3 + 0x24) * fVar20;
      fVar19 = -*(float *)(param_3 + 0x20) * fVar20;
      fVar20 = fVar20 * *(float *)(param_3 + 0x28);
      fVar6 = *(float *)(param_3 + 0x30);
      fVar7 = *(float *)(param_3 + 0x2c);
      FUN_1407c9ae3(&local_184,param_4,param_5);
      iStack_17c = (int)((fVar20 * fVar4 + fVar17 * fVar5 + (-fVar7 * fVar20 - fVar6 * fVar17)) *
                        fVar16);
      iStack_178 = (int)((fVar19 * fVar4 + fVar18 * fVar5 + (-fVar7 * fVar19 - fVar18 * fVar6)) *
                        fVar16);
      if (param_5 == 2) {
        uVar12 = 0;
LAB_1407c9999:
        *(undefined1 *)((longlong)param_1 + 0x2b4) = uVar12;
      }
      else if (param_5 == 1) {
        *(ulonglong *)((longlong)param_1 + 0x28c) = CONCAT44(uStack_164,uStack_168);
        *(undefined8 *)((longlong)param_1 + 0x294) = uStack_160;
        param_1[0x50] = local_174;
        param_1[0x51] = CONCAT44(uStack_168,uStack_16c);
        *(undefined4 *)(param_1 + 0x4e) = local_184;
        *(undefined4 *)((longlong)param_1 + 0x274) = uStack_180;
        *(int *)(param_1 + 0x4f) = iStack_17c;
        *(int *)((longlong)param_1 + 0x27c) = iStack_178;
        uVar12 = 1;
        goto LAB_1407c9999;
      }
      (**(code **)(*param_1 + 0x248))(param_1,param_1,plVar8,&local_184);
      local_1b8 = local_1b8 & 0xffffffffffffff00;
      local_1c8 = 0;
      (**(code **)(*plVar8 + 0xe8))(plVar8,&local_184,0,&local_1b8);
      cVar10 = (char)local_1b8;
      local_158[0] = (char)local_1b8;
      local_138 = 0;
      local_150 = 0;
      uStack_148 = 0;
      memset(&local_130,0,0x88);
      local_a8 = 0x20702;
      if (cVar10 == '\x01') {
        local_1a0 = *(undefined8 *)(param_4 + 0x40);
        local_198 = *(undefined8 *)(param_4 + 0x48);
        local_190 = *(longlong *)(param_4 + 0x50);
        if (local_190 != 0) {
          LOCK();
          *(int *)(local_190 + 8) = *(int *)(local_190 + 8) + 1;
          UNLOCK();
        }
        plVar8 = (longlong *)param_1[2];
        if (plVar8 == (longlong *)0x0) {
LAB_1407c99ae:
          local_1b8 = 0;
          plStack_1b0 = (longlong *)0x0;
          bVar15 = true;
        }
        else {
          iVar13 = (int)plVar8[1];
          do {
            if (iVar13 == 0) goto LAB_1407c99ae;
            LOCK();
            iVar11 = (int)plVar8[1];
            bVar15 = iVar13 == iVar11;
            if (bVar15) {
              *(int *)(plVar8 + 1) = iVar13 + 1;
              iVar11 = iVar13;
            }
            iVar13 = iVar11;
            UNLOCK();
          } while (!bVar15);
          uVar9 = param_1[1];
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          bVar15 = false;
          local_1b8 = uVar9;
          plStack_1b0 = plVar8;
        }
        plVar8 = plStack_1b0;
        lVar14 = FUN_1407c9a0c(local_158,&local_1b8,&local_1a0);
        *(byte *)(lVar14 + 0xb4) = *(byte *)(lVar14 + 0xb4) | 0x40;
        FUN_1403d4c6e(param_2,lVar14);
        plVar1 = plStack_1b0;
        if (plStack_1b0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_1b0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_1b0)(plStack_1b0);
            LOCK();
            piVar3 = (int *)((longlong)plVar1 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (!bVar15) {
          LOCK();
          plVar1 = plVar8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
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
      else {
        *param_2 = cVar10;
        param_2[8] = '\0';
        param_2[9] = '\0';
        param_2[10] = '\0';
        param_2[0xb] = '\0';
        param_2[0xc] = '\0';
        param_2[0xd] = '\0';
        param_2[0xe] = '\0';
        param_2[0xf] = '\0';
        param_2[0x10] = '\0';
        param_2[0x11] = '\0';
        param_2[0x12] = '\0';
        param_2[0x13] = '\0';
        param_2[0x14] = '\0';
        param_2[0x15] = '\0';
        param_2[0x16] = '\0';
        param_2[0x17] = '\0';
        local_150 = 0;
        uStack_148 = 0;
        param_2[0x20] = '\0';
        param_2[0x28] = '\0';
        param_2[0x29] = '\0';
        param_2[0x2a] = '\0';
        param_2[0x2b] = '\0';
        param_2[0x2c] = '\0';
        param_2[0x2d] = '\0';
        param_2[0x2e] = '\0';
        param_2[0x2f] = '\0';
        param_2[0x30] = '\0';
        param_2[0x31] = '\0';
        param_2[0x32] = '\0';
        param_2[0x33] = '\0';
        param_2[0x34] = '\0';
        param_2[0x35] = '\0';
        param_2[0x36] = '\0';
        param_2[0x37] = '\0';
        local_130 = 0;
        uStack_128 = 0;
        param_2[0x38] = '\0';
        param_2[0x39] = '\0';
        param_2[0x3a] = '\0';
        param_2[0x3b] = '\0';
        param_2[0x3c] = '\0';
        param_2[0x3d] = '\0';
        param_2[0x3e] = '\0';
        param_2[0x3f] = '\0';
        param_2[0x40] = '\0';
        param_2[0x41] = '\0';
        param_2[0x42] = '\0';
        param_2[0x43] = '\0';
        param_2[0x44] = '\0';
        param_2[0x45] = '\0';
        param_2[0x46] = '\0';
        param_2[0x47] = '\0';
        local_120 = 0;
        uStack_118 = 0;
        param_2[0x48] = '\0';
        param_2[0x49] = '\0';
        param_2[0x4a] = '\0';
        param_2[0x4b] = '\0';
        param_2[0x4c] = '\0';
        param_2[0x4d] = '\0';
        param_2[0x4e] = '\0';
        param_2[0x4f] = '\0';
        param_2[0x50] = '\0';
        param_2[0x51] = '\0';
        param_2[0x52] = '\0';
        param_2[0x53] = '\0';
        param_2[0x54] = '\0';
        param_2[0x55] = '\0';
        param_2[0x56] = '\0';
        param_2[0x57] = '\0';
        local_110 = 0;
        uStack_108 = 0;
        param_2[0x58] = '\0';
        param_2[0x59] = '\0';
        param_2[0x5a] = '\0';
        param_2[0x5b] = '\0';
        param_2[0x5c] = '\0';
        param_2[0x5d] = '\0';
        param_2[0x5e] = '\0';
        param_2[0x5f] = '\0';
        param_2[0x60] = '\0';
        param_2[0x61] = '\0';
        param_2[0x62] = '\0';
        param_2[99] = '\0';
        param_2[100] = '\0';
        param_2[0x65] = '\0';
        param_2[0x66] = '\0';
        param_2[0x67] = '\0';
        local_100 = 0;
        uStack_f8 = 0;
        param_2[0x68] = '\0';
        param_2[0x69] = '\0';
        param_2[0x6a] = '\0';
        param_2[0x6b] = '\0';
        param_2[0x6c] = '\0';
        param_2[0x6d] = '\0';
        param_2[0x6e] = '\0';
        param_2[0x6f] = '\0';
        param_2[0x70] = '\0';
        param_2[0x71] = '\0';
        param_2[0x72] = '\0';
        param_2[0x73] = '\0';
        param_2[0x74] = '\0';
        param_2[0x75] = '\0';
        param_2[0x76] = '\0';
        param_2[0x77] = '\0';
        local_f0 = 0;
        uStack_e8 = 0;
        param_2[0x78] = '\0';
        param_2[0x79] = '\0';
        param_2[0x7a] = '\0';
        param_2[0x7b] = '\0';
        param_2[0x7c] = '\0';
        param_2[0x7d] = '\0';
        param_2[0x7e] = '\0';
        param_2[0x7f] = '\0';
        param_2[0x80] = '\0';
        param_2[0x81] = '\0';
        param_2[0x82] = '\0';
        param_2[0x83] = '\0';
        param_2[0x84] = '\0';
        param_2[0x85] = '\0';
        param_2[0x86] = '\0';
        param_2[0x87] = '\0';
        local_e0 = 0;
        uStack_d8 = 0;
        param_2[0x88] = '\0';
        param_2[0x89] = '\0';
        param_2[0x8a] = '\0';
        param_2[0x8b] = '\0';
        param_2[0x8c] = '\0';
        param_2[0x8d] = '\0';
        param_2[0x8e] = '\0';
        param_2[0x8f] = '\0';
        param_2[0x90] = '\0';
        param_2[0x91] = '\0';
        param_2[0x92] = '\0';
        param_2[0x93] = '\0';
        param_2[0x94] = '\0';
        param_2[0x95] = '\0';
        param_2[0x96] = '\0';
        param_2[0x97] = '\0';
        param_2[0x98] = '\0';
        param_2[0x99] = '\0';
        param_2[0x9a] = '\0';
        param_2[0x9b] = '\0';
        param_2[0x9c] = '\0';
        param_2[0x9d] = '\0';
        param_2[0x9e] = '\0';
        param_2[0x9f] = '\0';
        local_c8 = 0;
        uStack_c0 = 0;
        param_2[0xa0] = '\0';
        param_2[0xa1] = '\0';
        param_2[0xa2] = '\0';
        param_2[0xa3] = '\0';
        param_2[0xa4] = '\0';
        param_2[0xa5] = '\0';
        param_2[0xa6] = '\0';
        param_2[0xa7] = '\0';
        param_2[0xa8] = '\0';
        param_2[0xa9] = '\0';
        param_2[0xaa] = '\0';
        param_2[0xab] = '\0';
        param_2[0xac] = '\0';
        param_2[0xad] = '\0';
        param_2[0xae] = '\0';
        param_2[0xaf] = '\0';
        local_b8 = 0;
        uStack_b0 = 0;
        param_2[0xb4] = '\0';
        param_2[0xb0] = '\x02';
        param_2[0xb1] = '\a';
        param_2[0xb2] = '\x02';
        param_2[0xb3] = '\0';
      }
      FUN_14493db24(local_158);
      goto LAB_1407c9612;
    }
    *param_2 = '\x01';
  }
  param_2[0x20] = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  memset(param_2 + 0x28,0,0x88);
  param_2[0xb0] = '\x02';
  param_2[0xb1] = '\a';
  param_2[0xb2] = '\x02';
  param_2[0xb3] = '\0';
  param_2[0xb4] = '\0';
LAB_1407c9612:
  if ((local_a0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1407c9a0c FUN_1407c9a0c body=215 status=ok
// SIG undefined FUN_1407c9a0c(void)

longlong FUN_1407c9a0c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined8 *)(param_1 + 0x68) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar5 = *(longlong **)(param_1 + 0x70);
  if (plVar5 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(param_1 + 0x70);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x70) = plVar2;
  }
  *(undefined8 *)(param_1 + 0x88) = *param_3;
  uVar3 = param_3[1];
  lVar4 = param_3[2];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar2 = *(longlong **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(longlong *)(param_1 + 0x98) = lVar4;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar2 = (longlong *)param_3[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  return param_1;
}



// FUNCTION 1407c9ae3 FUN_1407c9ae3 body=776 status=ok
// SIG undefined FUN_1407c9ae3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1407c9ae3(int *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = param_3;
  uVar3 = *(ushort *)(param_2 + 8);
  *(bool *)(param_1 + 8) = (uVar3 & 3) != 0;
  *(bool *)((longlong)param_1 + 0x22) = (uVar3 & 0x30) != 0;
  *(bool *)((longlong)param_1 + 0x21) = (uVar3 & 0xc) != 0;
  *(bool *)(param_1 + 9) = (uVar3 & 0xc0) != 0;
  local_38 = (undefined4)DAT_14c966e98;
  uStack_34 = DAT_14c966e98._4_4_;
  uStack_30 = (undefined4)DAT_14c966ea0;
  uStack_2c = DAT_14c966ea0._4_4_;
  local_28 = DAT_14c966ea8;
  if (DAT_14c966ea8 != 0) {
    LOCK();
    *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_1407c9dec(param_2,&local_38);
  if (cVar4 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x27) = 1;
  }
  local_50 = (undefined4)DAT_14c966fb8;
  uStack_4c = DAT_14c966fb8._4_4_;
  uStack_48 = (undefined4)DAT_14c966fc0;
  uStack_44 = DAT_14c966fc0._4_4_;
  local_40 = DAT_14c966fc8;
  if (DAT_14c966fc8 != 0) {
    LOCK();
    *(int *)(DAT_14c966fc8 + 8) = *(int *)(DAT_14c966fc8 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_1407c9dec(param_2,&local_50);
  if (cVar4 != '\0') {
    *(undefined1 *)(param_1 + 10) = 1;
  }
  local_68 = (undefined4)DAT_14c966fa0;
  uStack_64 = DAT_14c966fa0._4_4_;
  uStack_60 = (undefined4)DAT_14c966fa8;
  uStack_5c = DAT_14c966fa8._4_4_;
  local_58 = DAT_14c966fb0;
  if (DAT_14c966fb0 != 0) {
    LOCK();
    *(int *)(DAT_14c966fb0 + 8) = *(int *)(DAT_14c966fb0 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_1407c9dec(param_2,&local_68);
  if (cVar4 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  }
  local_80 = (undefined4)DAT_14c964d40;
  uStack_7c = DAT_14c964d40._4_4_;
  uStack_78 = _DAT_14c964d48;
  uStack_74 = uRam000000014c964d4c;
  local_70 = DAT_14c964d50;
  if (DAT_14c964d50 != 0) {
    LOCK();
    *(int *)(DAT_14c964d50 + 8) = *(int *)(DAT_14c964d50 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_1407c9dec(param_2,&local_80);
  if (cVar4 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  }
  local_98 = (undefined4)DAT_14c964d58;
  uStack_94 = DAT_14c964d58._4_4_;
  uStack_90 = _DAT_14c964d60;
  uStack_8c = uRam000000014c964d64;
  local_88 = DAT_14c964d68;
  if (DAT_14c964d68 != 0) {
    LOCK();
    *(int *)(DAT_14c964d68 + 8) = *(int *)(DAT_14c964d68 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_1407c9dec(param_2,&local_98);
  if (cVar4 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x2b) = 1;
  }
  if (param_3 == 3) {
    plVar5 = (longlong *)FUN_144a7d136();
    lVar6 = plVar5[0x22];
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 1000))(plVar5);
      lVar6 = plVar5[0x22];
    }
    fVar8 = (float)(int)(-*(float *)(param_2 + 0x6c) * *(float *)(lVar6 + 0x6c));
    if ((*(byte *)(param_2 + 8) & 3) == 0) {
      param_1[5] = (int)fVar8;
    }
    else {
      param_1[4] = (int)fVar8;
    }
  }
  else if (param_3 - 1U < 2) {
    lVar6 = *(longlong *)(param_2 + 0x40);
    plVar5 = *(longlong **)(param_2 + 0x50);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    iVar7 = 0;
    if ((((lVar6 == CONCAT44(DAT_14c966e98._4_4_,(undefined4)DAT_14c966e98)) ||
         (iVar7 = 2, lVar6 == CONCAT44(DAT_14c966fa0._4_4_,(undefined4)DAT_14c966fa0))) ||
        (iVar7 = 1, lVar6 == CONCAT44(DAT_14c966fb8._4_4_,(undefined4)DAT_14c966fb8))) ||
       ((iVar7 = 3, lVar6 == CONCAT44(DAT_14c964d40._4_4_,(undefined4)DAT_14c964d40) ||
        (iVar7 = 4, lVar6 == CONCAT44(DAT_14c964d58._4_4_,(undefined4)DAT_14c964d58))))) {
      param_1[1] = iVar7;
    }
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
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1407c9dec FUN_1407c9dec body=216 status=ok
// SIG undefined FUN_1407c9dec(void)

ulonglong FUN_1407c9dec(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong unaff_RSI;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    lVar3 = *param_2;
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    plVar6 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar2[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)plVar2[9] - 1U &
                    (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                    (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        bVar8 = *(longlong *)(*plVar2 + (longlong)iVar5 * 0x20) == lVar3;
        unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),bVar8);
        if (bVar8) break;
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + *plVar2 + 0x18);
      } while (iVar5 != -1);
      goto LAB_1407c9e00;
    }
  }
  unaff_RSI = 0;
LAB_1407c9e00:
  plVar2 = (longlong *)param_2[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  return unaff_RSI & 0xffffffff;
}



// FUNCTION 1407c9ec4 FUN_1407c9ec4 body=122 status=ok
// SIG undefined FUN_1407c9ec4(void)

undefined8 * FUN_1407c9ec4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a484340;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_140096ee6(param_1 + 8);
  FUN_1407c9f3e(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1407c9f3e FUN_1407c9f3e body=47 status=ok
// SIG undefined FUN_1407c9f3e(void)

void FUN_1407c9f3e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1407c9f6e FUN_1407c9f6e body=295 status=ok
// SIG undefined FUN_1407c9f6e(void)

void FUN_1407c9f6e(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  undefined7 uVar6;
  longlong lVar5;
  longlong *plVar7;
  
  bVar2 = (byte)param_2;
  bVar4 = *(byte *)(param_1 + 0x58) & 0xfe;
  uVar6 = (undefined7)(param_2 >> 8);
  if ((bVar2 & 0xfe) == 2 && bVar4 != 2) {
    FUN_14574617e(param_1);
  }
  else if (bVar4 == 2 && (bVar2 & 0xfe) != 2) {
    FUN_1457462e0(param_1);
  }
  FUN_1407ca096(param_1,CONCAT71(uVar6,*(undefined1 *)(param_1 + 0x58)),param_2 & 0xffffffff);
  *(byte *)(param_1 + 0x58) = bVar2;
  FUN_1407ca1ae(param_1);
  iVar3 = DAT_14c9647dc;
  lVar5 = DAT_14c9647c8;
  if (((*(int *)(param_1 + 0x3c) != 0) && (uVar1 = *(uint *)(param_1 + 0x38), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar7 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == *(int *)(param_1 + 0x3c))) &&
       (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
        ((*plVar7 != 0 && (*(char *)(*plVar7 + 0x178) == '\x03')))))) {
      *(byte *)(param_1 + 100) = bVar2;
      if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
        if (((*(int *)(param_1 + 0x4c) != 0) && (uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1)
            ) && ((int)uVar1 < iVar3)) {
          lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(lVar5 + (ulonglong)(uVar1 >> 0x10) * 8);
          if (((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x4c))) &&
             ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001407ca077. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))();
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1407ca096 FUN_1407ca096 body=280 status=ok
// SIG undefined FUN_1407ca096(void)

void FUN_1407ca096(longlong param_1,byte param_2,byte param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((((param_2 != param_3) && (*(int *)(param_1 + 0x3c) != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0x38), -1 < (int)uVar1)) &&
      ((((int)uVar1 < DAT_14c9647dc &&
        (lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 != 0)) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x3c) &&
        (((*(uint *)(lVar5 + 8) & 0x10200000) == 0 && (*(longlong *)(param_1 + 0x50) != 0)))))))) &&
     ((*(int *)(param_1 + 0x4c) != 0 &&
      (((((uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 != 0)) &&
        ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x4c) &&
         ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) &&
       (lVar5 = *(longlong *)(param_1 + 0x40), lVar5 != 0)))))) {
    if (param_3 < 2) {
      if (param_2 != 2) {
        return;
      }
      lVar3 = 0x110;
      lVar4 = 0x168;
    }
    else if (param_3 == 3) {
      lVar3 = 0xc0;
      lVar4 = 0x138;
    }
    else {
      if (param_3 != 2) {
        return;
      }
      lVar3 = 0xe8;
      lVar4 = 0x150;
    }
    uVar2 = FUN_140963a30(lVar3 + lVar5);
    FUN_1407ca620(param_1,uVar2,lVar4 + lVar5);
    return;
  }
  return;
}



// FUNCTION 1407ca1ae FUN_1407ca1ae body=831 status=ok
// SIG undefined FUN_1407ca1ae(void)

void FUN_1407ca1ae(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(int *)(param_1 + 0x3c) == 0) || (uVar1 = *(uint *)(param_1 + 0x38), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) goto LAB_1407ca3f8;
  plVar7 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != *(int *)(param_1 + 0x3c))) ||
     (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar3 = *plVar7, lVar3 == 0))))
  goto LAB_1407ca3f8;
  lVar4 = FUN_140e7a652();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    FUN_1409e8532(lVar3,&DAT_14cbc3090,*(char *)(param_1 + 0x58) == '\x02');
  }
  uVar1 = *(uint *)(param_1 + 0x3c);
  uVar9 = (ulonglong)uVar1;
  if (uVar1 == 0) {
LAB_1407ca454:
    uVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x38);
    uVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar6 + 2) != uVar1 ||
          (uVar9 = (ulonglong)*(uint *)(puVar6 + 1), (*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
      goto LAB_1407ca454;
      uVar5 = *puVar6;
    }
  }
  uVar8 = 0;
  FUN_1407ca566(uVar5,DAT_14cbc3090,CONCAT71((int7)(uVar9 >> 8),*(char *)(param_1 + 0x58) == '\x02')
                ,0);
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x38);
    uVar8 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x3c) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) {
        uVar8 = 0;
      }
      else {
        uVar8 = *puVar6;
      }
    }
  }
  FUN_1407ca500(uVar8,DAT_14cbc3090,*(char *)(param_1 + 0x58) == '\x02');
  if (((*(int *)(param_1 + 0x60) != 0) && (uVar1 = *(uint *)(param_1 + 0x5c), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar7 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == *(int *)(param_1 + 0x60))) &&
       (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar4 = *plVar7, lVar4 != 0)))) {
      if (*(char *)(param_1 + 0x58) == '\x02') {
        FUN_140257a06(lVar4,&DAT_14cbc3090,0);
      }
      else {
        FUN_1409df526(lVar4,&DAT_14cbc3090);
      }
    }
  }
  if (DAT_14cba8288 == 0) {
    local_40 = &local_28;
    local_28 = FUN_141864c34;
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
  }
  if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
    if ((*(byte *)(param_1 + 0x58) & 0xfe) == 2) {
      FUN_1400bc96c(lVar3 + 0x7c78,&DAT_14cbc3090);
    }
    else {
      FUN_1400bc8c2();
    }
    if (*(char *)(param_1 + 0x58) == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
LAB_1407ca3f8:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ca500 FUN_1407ca500 body=101 status=ok
// SIG undefined FUN_1407ca500(void)

void FUN_1407ca500(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  if (param_1 != 0) {
    lVar1 = FUN_140a40fb0();
    if (lVar1 != 0) {
      if (param_3 == '\0') {
        FUN_1400bc8c2();
      }
      else {
        FUN_1400bc96c(lVar1 + 0x11f0,&local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ca566 FUN_1407ca566 body=185 status=ok
// SIG undefined FUN_1407ca566(void)

void FUN_1407ca566(longlong *param_1,longlong param_2,char param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  if (param_1 != (longlong *)0x0 && param_2 != 0) {
    uVar1 = FUN_140b040c0();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140b040c0();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
        if (lVar4 != 0) {
          if (param_3 == '\0') {
            FUN_140ba2af2(lVar4,&local_28);
          }
          else {
            FUN_140ba2cd0(lVar4,&local_28,param_4);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ca620 FUN_1407ca620 body=514 status=ok
// SIG undefined FUN_1407ca620(void)

void FUN_1407ca620(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_88 [4];
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0) {
    uVar3 = FUN_14479d2ce(param_1 + 0x38);
    lVar4 = FUN_1407ca824(uVar3);
    if (lVar4 != 0) {
      local_68 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      local_88[2] = 0;
      local_88[3] = 0;
      lStack_60 = 0x8000000000;
      local_58 = 0xffffffff;
      FUN_14096df60(lVar4,param_2,1,local_88);
      uStack_40 = uStack_40 & 0xffffffff00000000;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(local_88);
    }
  }
  lVar4 = param_3[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140067708();
    lVar4 = FUN_14477b664(uVar3);
    param_3[1] = lVar4;
  }
  lVar5 = *param_3;
  if (param_3[2] == 0) {
    if ((lVar5 == 0) || (lVar4 == 0)) goto LAB_1407ca6e0;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,param_3);
        param_3[2] = lVar4;
        if (lVar4 == 0) goto LAB_1407ca6e0;
        lVar5 = *param_3;
        lVar4 = param_3[1];
        goto LAB_1407ca773;
      }
    }
    param_3[2] = 0;
  }
  else {
LAB_1407ca773:
    uVar3 = FUN_14477b664(lVar4);
    uVar3 = FUN_14477b664(uVar3);
    lVar4 = param_3[2];
    local_88[0] = local_88[0] & 0xffffff00;
    local_88[1] = 0;
    local_88[2] = 0;
    local_78 = lVar5;
    uVar3 = FUN_14477b664(uVar3);
    uStack_70 = FUN_14477b664(uVar3);
    lStack_60 = 0;
    local_68 = lVar4;
    uVar3 = FUN_14479d2ce(param_1 + 0x38);
    local_a8 = 0;
    FUN_140b32deb(&local_a0,uVar3,local_88,0);
    local_a0 = 0;
    local_98 = 0xffffffffffffffff;
    if ((lStack_60 != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(lStack_60 + 0x50));
    }
  }
LAB_1407ca6e0:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ca824 FUN_1407ca824 body=91 status=ok
// SIG undefined FUN_1407ca824(void)

undefined8 FUN_1407ca824(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1407ca880();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1407ca880();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001407ca873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x50))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 1407ca880 FUN_1407ca880 body=228 status=ok
// SIG undefined FUN_1407ca880(void)

longlong FUN_1407ca880(void)

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
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb67e50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464c78de;
    local_38 = &LAB_14873fc08;
    local_40 = FUN_145adac85;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxTrickInterface",&DAT_14cb67e50,FUN_1465195fa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb67e50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ca966 FUN_1407ca966 body=839 status=ok
// SIG undefined FUN_1407ca966(void)

void FUN_1407ca966(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_b8 [40];
  char local_90 [16];
  longlong *local_80;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar4 = FUN_14087e0a8(*param_2,&DAT_14cbe7630,0x1000);
  uVar13 = FUN_1407caec0(*param_2,&DAT_14cbe7638,0x3f000000);
  local_90[0] = '\0';
  local_68 = 0;
  FUN_140b359ca(local_90,param_2);
  lVar2 = *param_2;
  uVar10 = iVar4 * 0xbb38435 + 0x3619636b;
  uVar14 = FUN_1407caf5e(param_1 + 0x30,(float)(uVar10 >> 9 | 0x3f800000) + -1.0,uVar13,local_90);
  uVar5 = FUN_1407cacae();
  lVar11 = *(longlong *)(lVar2 + 0x200);
  if (lVar11 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar11,uVar5,0);
  }
  uVar6 = 0;
  FUN_1407cace8(lVar2,uVar5,uVar14,0);
  lVar2 = *param_2;
  uVar10 = uVar10 * 0xbb38435 + 0x3619636b;
  uVar14 = FUN_1407caf5e(param_1 + 0xd0,(float)(uVar10 >> 9 | 0x3f800000) + -1.0,uVar13,local_90);
  uVar5 = FUN_1407cacae();
  lVar11 = *(longlong *)(lVar2 + 0x200);
  if (lVar11 != 0) {
    uVar6 = FUN_1403f69f4(lVar11,uVar5,1);
  }
  uVar7 = 0;
  FUN_1407cace8(lVar2,uVar6,uVar14,0);
  lVar2 = *param_2;
  uVar10 = uVar10 * 0xbb38435 + 0x3619636b;
  uVar14 = FUN_1407caf5e(param_1 + 0x170,(float)(uVar10 >> 9 | 0x3f800000) + -1.0,uVar13,local_90);
  uVar5 = FUN_1407cacae();
  lVar11 = *(longlong *)(lVar2 + 0x200);
  if (lVar11 != 0) {
    uVar7 = FUN_1403f69f4(lVar11,uVar5,2);
  }
  uVar6 = 0;
  FUN_1407cace8(lVar2,uVar7,uVar14,0);
  lVar2 = *param_2;
  uVar13 = FUN_1407caf5e(param_1 + 0x210,
                         (float)(uVar10 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) + -1.0,uVar13,
                         local_90);
  uVar5 = FUN_1407cacae();
  lVar11 = *(longlong *)(lVar2 + 0x200);
  if (lVar11 != 0) {
    uVar6 = FUN_1403f69f4(lVar11,uVar5,3);
  }
  FUN_1407cace8(lVar2,uVar6,uVar13,0);
  lVar2 = DAT_14c9a3da0;
  if ((longlong)local_68 != 0) {
    lVar11 = (longlong)local_68 + -1;
    lVar12 = lVar11 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar2 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar2 = DAT_14c9a3da0;
    iVar4 = (int)lVar11;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar4;
    }
    *(undefined4 *)(lVar2 + lVar12) = 0xffffffff;
    iVar8 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar8 = DAT_14c9a3dd0;
    }
    *(int *)(lVar2 + 4 + lVar12) = iVar8;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar9 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar9 = DAT_14c9a3dc0;
    }
    iVar8 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar8 = iVar4;
    }
    bVar3 = (byte)lVar11 & 0x1f;
    DAT_14c9a3dd0 = iVar4;
    *(uint *)(puVar9 + (longlong)(iVar8 >> 5) * 4) =
         *(uint *)(puVar9 + (longlong)(iVar8 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_68 = 0;
  }
  if ((local_90[0] == '\x03') && (local_80 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_80 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407cacae FUN_1407cacae body=57 status=ok
// SIG undefined FUN_1407cacae(void)

void FUN_1407cacae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc13e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc13e0 = FUN_14171c317(FUN_14661b7d8,uVar1,L"EAtt_WeaponWear");
  }
  return;
}



// FUNCTION 1407cace8 FUN_1407cace8 body=82 status=ok
// SIG undefined FUN_1407cace8(void)

void FUN_1407cace8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1407cad3a(param_1,param_1 + 0x108,param_2);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = param_3;
    FUN_14020a6cc(lVar1 + 8,1);
    if (*(char *)(lVar1 + 0x15) != '\x03') {
      *(undefined1 *)(lVar1 + 0x15) = param_4;
    }
  }
  return;
}



// FUNCTION 1407cad3a FUN_1407cad3a body=331 status=ok
// SIG undefined FUN_1407cad3a(void)

longlong * FUN_1407cad3a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar6 = (longlong *)*param_2;
  iVar3 = *(int *)(param_2 + 1);
  lVar10 = (longlong)iVar3;
  if (lVar10 != 0) {
    lVar8 = lVar10 * 0x18;
    plVar9 = plVar6;
    do {
      if (*plVar9 == param_3) {
        if (plVar9 != (longlong *)0x0) goto LAB_1407cae1c;
        break;
      }
      plVar9 = plVar9 + 3;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_1407cb23e(param_2,iVar3);
    plVar6 = (longlong *)*param_2;
  }
  plVar9 = plVar6 + lVar10 * 3;
  *plVar9 = param_3;
  *(undefined4 *)(plVar9 + 1) = 0;
  *(undefined8 *)((longlong)plVar9 + 0xc) = 0;
  *(undefined1 *)((longlong)plVar9 + 0x15) = 1;
  if (param_3 == 0) {
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    FUN_140187aa4(param_3 + 0x30,&local_48);
    lVar10 = local_48;
    if (local_48 != 0) {
      uVar7 = FUN_1407cae86();
      cVar4 = FUN_1448093f4(lVar10,uVar7);
      if (cVar4 != '\0') {
        *(undefined1 *)((longlong)plVar9 + 0x15) = 3;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x200) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_144a3ced2(*(longlong *)(param_1 + 0x200),param_3);
  }
  plVar6 = plStack_40;
  *(undefined1 *)((longlong)plVar9 + 0x14) = uVar5;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_1407cae1c:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar9;
}



// FUNCTION 1407cae86 FUN_1407cae86 body=57 status=ok
// SIG undefined FUN_1407cae86(void)

void FUN_1407cae86(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a5f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a5f0 = FUN_140002ddd(FUN_1465268bc,uVar1,L"InventoryStatsContainerValueResolver");
  }
  return;
}



// FUNCTION 1407caec0 FUN_1407caec0 body=157 status=ok
// SIG undefined FUN_1407caec0(void)

undefined4 FUN_1407caec0(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar4 * 0x14);
        if (*plVar1 == lVar2) {
          if (plVar1 == (longlong *)0x0) {
            return param_3;
          }
          if (plVar1 + 1 == (longlong *)0x0) {
            return param_3;
          }
          return (int)plVar1[1];
        }
        iVar4 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar4 != -1);
    }
  }
  return param_3;
}



// FUNCTION 1407caf5e FUN_1407caf5e body=735 status=ok
// SIG undefined FUN_1407caf5e(void)

undefined8 FUN_1407caf5e(longlong param_1,undefined8 param_2,float param_3,undefined8 param_4)

{
  code *pcVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_d8 [40];
  float local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  float local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  uVar6 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar5 = (float)param_2;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 < 0.5) {
    fVar7 = fVar5 * param_3 + fVar5 * param_3;
    fVar5 = 0.0;
    if (0.0 <= fVar7) {
      fVar5 = fVar7;
    }
  }
  else {
    if (param_3 <= 0.5) goto LAB_1407cafb9;
    fVar7 = (1.0 - fVar5) * (param_3 + -0.5 + param_3 + -0.5) + fVar5;
    fVar5 = 1.0;
    if (fVar7 <= 1.0) {
      fVar5 = fVar7;
    }
  }
  uVar6 = 0;
LAB_1407cafb9:
  pfVar3 = &local_b0;
  FUN_1448729ea(param_1,pfVar3,param_4);
  if (local_90 == 3) {
    uVar2 = 3;
    fVar7 = local_b0;
  }
  else {
    pfVar4 = &local_88;
    FUN_1400b56fe(pfVar4,&local_b0,3);
    fVar7 = 0.0;
    if (local_68 != 0) {
      fVar7 = local_88;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_70) {
        pfVar4 = (float *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar1)(pfVar4);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
    uVar2 = (uint)local_90;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_98) {
      pfVar3 = (float *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar1)(pfVar3);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  pfVar3 = &local_b0;
  FUN_1448729ea(param_1 + 0x50,pfVar3,param_4);
  if (local_90 == 3) {
    uVar2 = 3;
    fVar8 = local_b0;
  }
  else {
    pfVar4 = &local_88;
    FUN_1400b56fe(pfVar4,&local_b0,3);
    fVar8 = local_88;
    if (local_68 == 0) {
      fVar8 = 1.0;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_70) {
        pfVar4 = (float *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar1)(pfVar4);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
    uVar2 = (uint)local_90;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_98) {
      pfVar3 = (float *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar1)(pfVar3);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar6,fVar5 * (fVar8 - fVar7) + fVar7);
}



// FUNCTION 1407cb23e FUN_1407cb23e body=370 status=ok
// SIG undefined FUN_1407cb23e(void)

void FUN_1407cb23e(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407cb2c9;
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
LAB_1407cb2c9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1407cb3b0 FUN_1407cb3b0 body=38 status=ok
// SIG undefined FUN_1407cb3b0(void)

undefined8 FUN_1407cb3b0(undefined8 param_1,int param_2)

{
  FUN_1407cb3d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1407cb3d6 FUN_1407cb3d6 body=89 status=ok
// SIG undefined FUN_1407cb3d6(void)

void FUN_1407cb3d6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f55fb0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1407cb430(param_1 + 0x10);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1400baf28(param_1);
  return;
}



// FUNCTION 1407cb430 FUN_1407cb430 body=55 status=ok
// SIG undefined FUN_1407cb430(void)

void FUN_1407cb430(longlong *param_1)

{
  FUN_1407cb468(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1407cb468 FUN_1407cb468 body=121 status=ok
// SIG undefined FUN_1407cb468(void)

void FUN_1407cb468(longlong param_1,int param_2)

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



// FUNCTION 1407cb4e2 FUN_1407cb4e2 body=115 status=ok
// SIG undefined FUN_1407cb4e2(void)

undefined8 FUN_1407cb4e2(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_1407cb556(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1407cb556 FUN_1407cb556 body=95 status=ok
// SIG undefined FUN_1407cb556(void)

void FUN_1407cb556(longlong *param_1,int param_2)

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
  FUN_1407cb5b6(param_1,param_2,1);
  return;
}



// FUNCTION 1407cb5b6 FUN_1407cb5b6 body=119 status=ok
// SIG undefined FUN_1407cb5b6(void)

void FUN_1407cb5b6(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (longlong *)((longlong)param_2 * 0x20 + *param_1 + 0x10);
    iVar4 = param_3;
    do {
      plVar3 = (longlong *)*plVar5;
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
      plVar5 = plVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_1407cb62e(param_1,param_2,param_3);
  return;
}



// FUNCTION 1407cb62e FUN_1407cb62e body=136 status=ok
// SIG undefined FUN_1407cb62e(void)

void FUN_1407cb62e(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1407cb6b6 FUN_1407cb6b6 body=1076 status=ok
// SIG undefined FUN_1407cb6b6(void)

void FUN_1407cb6b6(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  char *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  char *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1457464fc();
  *(byte *)(param_1 + 0x298) = *(byte *)(param_1 + 0x298) & 0xfe;
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar4 = &DAT_14c9a1308;
  }
  else {
    plVar4 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdfea8);
  }
  if (*plVar4 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_14000584e(*plVar4,1);
  }
  *(undefined1 *)(param_1 + 0x329) = uVar2;
  lVar12 = *(longlong *)(param_1 + 0x288);
  if (lVar12 != 0) {
    plVar4 = (longlong *)(param_1 + 0x160);
    FUN_1400b22c2(&local_90,"sub_menu_container_ident");
    if ((undefined4 *)(lVar12 + 0x1b8) == &local_90) {
      if (CONCAT44(uStack_8c,local_90) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar12 + 0x1b8) != 0) {
        FUN_1400020a8();
      }
      *(ulonglong *)(lVar12 + 0x1b8) = CONCAT44(uStack_8c,local_90);
      local_90 = 0;
      uStack_8c = 0;
      *(undefined4 *)(lVar12 + 0x1c0) = local_88;
      *(undefined4 *)(lVar12 + 0x1c4) = local_84;
    }
    uVar5 = FUN_1457464c2();
    FUN_144a2e342(lVar12,plVar4,uVar5);
    if (*plVar4 == 0) {
      puVar6 = &DAT_14c9a1308;
    }
    else {
      puVar6 = (undefined8 *)FUN_1446e60f4(*plVar4,&DAT_14cbdfea0);
    }
    uVar13 = FUN_140b963dc(puVar6,0x3dcccccd);
    *(undefined4 *)(param_1 + 0x318) = uVar13;
    uVar3 = FUN_1412e481c();
    uVar13 = 0;
    if ((-1 < (int)uVar3) && (uVar13 = 0, (int)uVar3 < *(int *)(param_1 + 0x2b8))) {
      uVar13 = *(undefined4 *)(*(longlong *)(param_1 + 0x2b0) + 0x18 + (ulonglong)uVar3 * 0x30);
    }
    *(undefined4 *)(param_1 + 0x300) = uVar13;
    lVar11 = lVar12 + 0x218;
    local_c8 = plVar4;
    FUN_1447a1747(*(undefined8 *)(lVar12 + 0x218),*(undefined4 *)(lVar12 + 0x220));
    *(undefined4 *)(lVar12 + 0x220) = 0;
    if (*(int *)(lVar12 + 0x224) != 0) {
      FUN_1408be2c4(lVar11,0);
    }
    lVar1 = lVar12 + 0x1c8;
    local_c0 = lVar1;
    local_b8 = lVar11;
    local_b0 = lVar12;
    if (0 < (longlong)*(int *)(param_1 + 0x2b8)) {
      lVar12 = *(longlong *)(param_1 + 0x2b0);
      lVar11 = (longlong)*(int *)(param_1 + 0x2b8) * 0x30 + lVar12;
      do {
        if ((longlong)*(int *)(lVar12 + 0x18) != 0) {
          lVar9 = *(longlong *)(lVar12 + 0x10);
          lVar8 = (longlong)*(int *)(lVar12 + 0x18) * 0xb0;
          do {
            uStack_8c = 0;
            local_88 = 0;
            FUN_14052b5e0(&local_90,"sub_entries",0);
            local_80 = "sub_entries";
            FUN_1407cbb06(lVar1,lVar9);
            lVar9 = lVar9 + 0xb0;
            lVar8 = lVar8 + -0xb0;
          } while (lVar8 != 0);
        }
        lVar12 = lVar12 + 0x30;
      } while (lVar12 != lVar11);
    }
    if (*local_c8 == 0) {
      puVar6 = &DAT_14c9a1308;
    }
    else {
      puVar6 = (undefined8 *)FUN_1446e60f4(*local_c8,&DAT_14cbdd960);
    }
    plVar4 = (longlong *)FUN_1407cbaec(puVar6);
    lVar12 = local_b0;
    if ((int)plVar4[2] != 0) {
      FUN_1447a1747(*(undefined8 *)(local_b0 + 0x218),*(undefined4 *)(local_b0 + 0x220));
      *(undefined4 *)(lVar12 + 0x220) = 0;
      if (*(int *)(lVar12 + 0x224) != 0) {
        FUN_1408be2c4(local_b8,0);
      }
      local_c8 = (longlong *)(ulonglong)*(uint *)(plVar4 + 2);
      if (local_c8 != (longlong *)0x0) {
        plVar10 = (longlong *)0x0;
        do {
          local_90 = 0xffffffff;
          uStack_8c = 0;
          local_88 = 0;
          local_70 = 0;
          uStack_68 = 0;
          local_80 = (char *)0x0;
          uStack_78 = 0;
          uVar5 = FUN_140625082(*plVar4 + (longlong)plVar10 * 0x10,&DAT_14c9a12e0);
          FUN_1447325ac(uVar5,&local_a8,1);
          uStack_8c = local_a8;
          local_88 = uStack_a4;
          local_90 = SUB84(plVar10,0);
          lVar12 = *(longlong *)(*plVar4 + (longlong)plVar10 * 0x10);
          puVar6 = &DAT_14c9a1308;
          if (lVar12 != 0) {
            puVar6 = (undefined8 *)FUN_1446e60f4(lVar12,&DAT_14cbdd968);
          }
          plVar7 = (longlong *)FUN_1407cbaec(puVar6);
          uVar3 = *(uint *)(plVar7 + 2);
          if ((ulonglong)uVar3 != 0) {
            lVar12 = 0;
            do {
              uStack_a4 = 0;
              uStack_a0 = 0;
              FUN_14052b5e0(&local_a8,"sub_entries",0);
              local_98 = "sub_entries";
              FUN_148eb0516(local_c0,*plVar7 + lVar12,*(undefined4 *)(param_1 + 0x208),&local_a8);
              lVar12 = lVar12 + 0x10;
            } while ((ulonglong)uVar3 << 4 != lVar12);
          }
          FUN_1407ccd86(&local_90);
          plVar10 = (longlong *)((longlong)plVar10 + 1);
        } while (plVar10 != local_c8);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407cbaec FUN_1407cbaec body=25 status=ok
// SIG undefined FUN_1407cbaec(void)

undefined8 * FUN_1407cbaec(undefined8 *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  
  pbVar1 = (byte *)*param_1;
  puVar2 = &DAT_14c9a1270;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
    puVar2 = *(undefined8 **)(pbVar1 + 8);
  }
  return puVar2;
}



// FUNCTION 1407cbb06 FUN_1407cbb06 body=171 status=ok
// SIG undefined FUN_1407cbb06(void)

void FUN_1407cbb06(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_2 + 0xa8) != 0) {
    lVar2 = *(longlong *)(param_2 + 0xa0);
    lVar1 = (longlong)*(int *)(param_2 + 0xa8) * 0x28;
    do {
      FUN_1446dcdd4(local_60,param_2);
      FUN_1407cbbb2(param_1,local_60,lVar2);
      FUN_140714dae(param_1,local_60,param_3);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 0x28;
      lVar1 = lVar1 + -0x28;
    } while (lVar1 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407cbbb2 FUN_1407cbbb2 body=162 status=ok
// SIG undefined FUN_1407cbbb2(void)

void FUN_1407cbbb2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[2] = 0;
  local_68[3] = 0;
  FUN_1400b2348(param_3,local_68 + 2,1);
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_1400b2348(param_2,local_68,1);
  FUN_140d07d58(param_1,local_68,local_68 + 2);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407cbc56 FUN_1407cbc56 body=474 status=ok
// SIG undefined FUN_1407cbc56(void)

void FUN_1407cbc56(longlong param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  longlong *plVar4;
  ushort uVar5;
  
  FUN_1407cbe30();
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar4 = &DAT_14c9a1308;
  }
  else {
    plVar4 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cb929f0);
  }
  if (*plVar4 == 0) {
    uVar3 = 1;
  }
  else {
    bVar1 = FUN_14000584e(*plVar4,1);
    uVar3 = (ushort)bVar1;
  }
  *(ushort *)(param_1 + 0x298) = uVar3 | (ushort)*(undefined4 *)(param_1 + 0x298) & 0xfffe;
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar4 = &DAT_14c9a1308;
  }
  else {
    plVar4 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cb929f8);
  }
  if (*plVar4 == 0) {
    uVar3 = 0;
  }
  else {
    bVar1 = FUN_14000584e(*plVar4,0);
    uVar3 = (ushort)bVar1 << 2;
  }
  *(ushort *)(param_1 + 0x298) = uVar3 | (ushort)*(undefined4 *)(param_1 + 0x298) & 0xfffb;
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar4 = &DAT_14c9a1308;
  }
  else {
    plVar4 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cb92a00);
  }
  if (*plVar4 == 0) {
    uVar3 = *(ushort *)(param_1 + 0x298);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    cVar2 = FUN_14000584e(*plVar4,0);
    uVar3 = *(ushort *)(param_1 + 0x298);
    if (cVar2 != '\0') {
      uVar5 = 8;
    }
  }
  *(ushort *)(param_1 + 0x298) = uVar5 | uVar3 & 0xfff7;
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar4 = &DAT_14c9a1308;
  }
  else {
    plVar4 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cb92a08);
  }
  if (*plVar4 == 0) {
    uVar3 = *(ushort *)(param_1 + 0x298);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    cVar2 = FUN_14000584e(*plVar4,0);
    uVar3 = *(ushort *)(param_1 + 0x298);
    if (cVar2 != '\0') {
      uVar5 = 0x10;
    }
  }
  *(ushort *)(param_1 + 0x298) = uVar5 | uVar3 & 0xffef;
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar4 = &DAT_14c9a1308;
  }
  else {
    plVar4 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cb92a10);
  }
  if (*plVar4 == 0) {
    uVar3 = 0;
  }
  else {
    bVar1 = FUN_14000584e(*plVar4,0);
    uVar3 = (ushort)bVar1 << 5;
  }
  *(ushort *)(param_1 + 0x298) = uVar3 | (ushort)*(undefined4 *)(param_1 + 0x298) & 0xffdf;
  return;
}



// FUNCTION 1407cbe30 FUN_1407cbe30 body=245 status=ok
// SIG undefined FUN_1407cbe30(void)

void FUN_1407cbe30(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 unaff_RBX;
  undefined7 uVar6;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x8c);
  *(uint *)(param_1 + 0x8c) = uVar1 & 0xffffffbf;
  *(uint *)(param_1 + 0x8c) =
       uVar1 & 0xffffffaf | (uint)*(byte *)(*(longlong *)(param_1 + 0x1a8) + 0xe8) << 4;
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(*(longlong *)(param_1 + 0x1a8) + 0xec);
  bVar4 = FUN_1410c6532();
  lVar3 = DAT_14c951640;
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (bVar4 == 4 && DAT_14c951640 != 0) {
    uVar5 = CONCAT71(uVar6,1);
  }
  else if (bVar4 < 7) {
    uVar5 = CONCAT71(uVar6,0x6c >> (bVar4 & 0x1f));
  }
  else {
    uVar5 = 0;
  }
  iVar2 = *(int *)(param_1 + 0x134);
  FUN_1407cbf25(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
  *(undefined4 *)(param_1 + 0x130) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x134) != 0)) {
    FUN_148a069ee(param_1 + 0x128,0);
  }
  if (*(int *)(param_1 + 0xd4) < 0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    FUN_148a06a4e(param_1 + 200,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  FUN_1407cbf68(param_1,uVar5 & 0xffffff01,lVar3);
  return;
}



// FUNCTION 1407cbf25 FUN_1407cbf25 body=66 status=ok
// SIG undefined FUN_1407cbf25(void)

void FUN_1407cbf25(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        if (DAT_14c872a72 == '\0') {
          FUN_140113f48();
        }
        *(undefined8 *)(param_1 + lVar1 * 8) = 0;
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 1407cbf68 FUN_1407cbf68 body=1081 status=ok
// SIG undefined FUN_1407cbf68(void)

void FUN_1407cbf68(longlong param_1,char param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined2 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  int local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1a8) + 0xf8);
  local_50 = param_1;
  if (lVar9 != 0) {
    puVar13 = *(undefined8 **)(*(longlong *)(param_1 + 0x1a8) + 0xf0);
    puVar1 = puVar13 + lVar9 * 5;
    do {
      local_78 = *puVar13;
      local_70 = *(undefined4 *)(puVar13 + 1);
      uStack_6c = *(undefined4 *)((longlong)puVar13 + 0xc);
      uStack_68 = *(undefined4 *)(puVar13 + 2);
      uStack_64 = *(undefined4 *)((longlong)puVar13 + 0x14);
      local_60 = (void *)0x0;
      local_58 = *(int *)(puVar13 + 4);
      lVar9 = (longlong)local_58;
      _Src = (void *)puVar13[3];
      if (lVar9 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,_Src,lVar9 * 2);
      }
      lVar9 = FUN_1409f0d56(&local_78);
      if (lVar9 == 0) {
        FUN_1409f0d56(&local_78);
      }
      else if (param_3 == 0 || param_2 != '\x01') {
        lVar9 = FUN_1409f0d56(&local_78);
        if (lVar9 != 0) {
          lVar9 = FUN_1409f0d56(&local_78);
          local_a8 = param_3;
          if (lVar9 == 0) {
            uVar15 = 0;
            uVar14 = 0;
          }
          else {
            uVar15 = *(uint *)(lVar9 + 0xc);
            if ((int)uVar15 < DAT_14c9647dc) {
              lVar9 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
            }
            else {
              lVar9 = 0;
            }
            uVar14 = (ulonglong)*(uint *)(lVar9 + 0x10);
            if (*(uint *)(lVar9 + 0x10) == 0) {
              LOCK();
              iVar2 = DAT_14c964868 + 1;
              UNLOCK();
              uVar12 = DAT_14c964868 + 1;
              bVar16 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar2;
              if (bVar16) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d);
              }
              LOCK();
              uVar5 = *(uint *)(lVar9 + 0x10);
              bVar16 = uVar5 == 0;
              if (bVar16) {
                *(uint *)(lVar9 + 0x10) = uVar12;
                uVar5 = 0;
              }
              UNLOCK();
              if (bVar16) {
                uVar5 = uVar12;
              }
              uVar14 = (ulonglong)uVar5;
            }
          }
          iVar2 = *(int *)(param_1 + 0xd0);
          *(uint *)(param_1 + 0xd0) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0xd4) < iVar2 + 1U) {
            FUN_1407cc47e((longlong *)(param_1 + 200),iVar2);
          }
          *(ulonglong *)(*(longlong *)(param_1 + 200) + (longlong)iVar2 * 8) =
               (ulonglong)uVar15 | uVar14 << 0x20;
          param_3 = local_a8;
        }
      }
      else {
        local_88 = *(undefined2 **)(lVar9 + 0x18);
        FUN_1400021e4(&local_88);
        iVar2 = (int)local_90;
        iVar4 = ((int)local_90 == 0) + 10;
        local_88 = local_98;
        local_98 = (undefined2 *)0x0;
        local_80 = (int)local_90;
        iVar3 = local_90._4_4_;
        local_7c = local_90._4_4_;
        local_90 = 0;
        iVar10 = iVar4 + iVar2;
        if (iVar10 < iVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar4);
        }
        if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar10);
        }
        if (iVar3 < iVar10) {
          FUN_1446f8c06(&local_88);
        }
        FUN_1400020e8(&local_88,L"_Localized",10);
        if (local_98 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        puVar11 = &DAT_149dfb77a;
        if (local_80 != 0) {
          puVar11 = local_88;
        }
        FUN_1446f470e(&local_a0,puVar11,1);
        uVar6 = FUN_1409f0ed2();
        local_b0 = 0;
        local_b8 = 0;
        plVar7 = (longlong *)FUN_1407cc3a2(uVar6,param_3,local_a0,0);
        if (plVar7 == (longlong *)0x0) {
LAB_1407cc281:
          uVar6 = FUN_1409f0ed2();
          plVar7 = (longlong *)FUN_14092e757(uVar6,lVar9,param_3);
          puVar11 = &DAT_149dfb77a;
          if (local_80 != 0) {
            puVar11 = local_88;
          }
          (**(code **)(*plVar7 + 0x170))(plVar7,puVar11);
          if (plVar7 != (longlong *)0x0) goto LAB_1407cc1e8;
          FUN_143eb4fba(&local_50,&local_78);
        }
        else {
          lVar8 = FUN_1409f0ed2();
          if ((*(int *)(plVar7[2] + 0x38) < *(int *)(lVar8 + 0x38)) ||
             (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
              != lVar8 + 0x30)) goto LAB_1407cc281;
LAB_1407cc1e8:
          local_98 = (undefined2 *)0x0;
          local_b8 = local_b8 & 0xffffff00;
          FUN_1407cc5e0(param_1,plVar7);
        }
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar13 = puVar13 + 5;
    } while (puVar13 != puVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407cc3a2 FUN_1407cc3a2 body=219 status=ok
// SIG undefined FUN_1407cc3a2(void)

undefined8
FUN_1407cc3a2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined4 param_5,uint param_6)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((DAT_14c949800 & 1) == 0) {
    uVar1 = FUN_14482ca40();
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c964670) {
      FUN_144b3d300(&DAT_14c964670);
      if (DAT_14c964670 == -1) {
        FUN_145794a58(&DAT_14c964408);
        atexit((_func_5014 *)&LAB_142840318);
        _Init_thread_footer(&DAT_14c964670);
      }
    }
    uVar2 = FUN_140163a0e(&DAT_14c964408,param_1,param_2,param_3,param_4,0,param_5,uVar1 | param_6);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1407cc47e FUN_1407cc47e body=353 status=ok
// SIG undefined FUN_1407cc47e(void)

void FUN_1407cc47e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407cc503;
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
LAB_1407cc503:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1407cc5e0 FUN_1407cc5e0 body=593 status=ok
// SIG undefined FUN_1407cc5e0(void)

void FUN_1407cc5e0(longlong param_1,longlong param_2,char param_3,undefined8 param_4,char param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_3 != '\0') && (0 < *(int *)(param_2 + 0x38))) {
    lVar5 = 0x28;
    lVar6 = 0;
    do {
      FUN_1410c5fde(*(longlong *)(param_2 + 0x30) + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x50;
    } while (lVar6 < *(int *)(param_2 + 0x38));
  }
  if (param_5 == '\0') {
    if (param_2 == 0) {
      local_58._0_4_ = 0;
      iVar3 = 0;
      uVar1 = (uint)local_58;
    }
    else {
      uVar1 = *(uint *)(param_2 + 0xc);
      local_58 = (ulonglong)uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar3 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar3 = *(int *)(lVar5 + 0x10);
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(lVar5 + 0x10) = iVar4;
          iVar3 = 0;
        }
        UNLOCK();
        uVar1 = (uint)local_58;
        if (bVar8) {
          iVar3 = iVar4;
        }
      }
    }
    local_58._0_4_ = uVar1;
    local_58 = CONCAT44(iVar3,(uint)local_58);
    iVar3 = *(int *)(param_1 + 0xd0);
    if ((longlong)iVar3 != 0) {
      lVar5 = *(longlong *)(param_1 + 200);
      uVar7 = 0;
      do {
        cVar2 = FUN_1457466fc(lVar5 + uVar7,&local_58);
        if (cVar2 != '\0') {
          if ((int)(~uVar7 >> 3) != 0) goto LAB_1407cc6d9;
          break;
        }
        uVar7 = uVar7 + 8;
      } while ((longlong)iVar3 * 8 != uVar7);
    }
    iVar3 = *(int *)(param_1 + 0xd0);
    *(uint *)(param_1 + 0xd0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0xd4) < iVar3 + 1U) {
      FUN_1407cc47e((longlong *)(param_1 + 200),iVar3);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 200) + (longlong)iVar3 * 8) = local_58;
LAB_1407cc6d9:
    FUN_1401924dc(param_2);
    iVar3 = *(int *)(param_1 + 0x130);
    *(uint *)(param_1 + 0x130) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x134) < iVar3 + 1U) {
      FUN_145746734((longlong *)(param_1 + 0x128),iVar3);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar3 * 8) = param_2;
  }
  else {
    FUN_1401924dc(param_2);
    local_50 = &local_60;
    local_60 = param_2;
    local_58 = param_4;
    FUN_1407cd566(param_1 + 0xd8,local_44);
    if ((local_60 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407cc832 FUN_1407cc832 body=1362 status=ok
// SIG undefined FUN_1407cc832(void)

void FUN_1407cc832(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined1 auStack_188 [32];
  longlong *local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  ulonglong local_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined4 local_134;
  longlong *local_130;
  undefined4 local_128;
  longlong *local_120;
  undefined4 local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8 [3];
  undefined4 local_90;
  undefined8 local_8c;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar8 = *(longlong *)(param_1 + 0x1a8);
  if (((lVar8 != 0) && (*(char *)(lVar8 + 0x40) == '\x01')) &&
     (local_160 = DAT_14c9a1ab0, DAT_14c9a1ab0 != 0)) {
    uVar10 = (ulonglong)*(uint *)(lVar8 + 0x270);
    local_168 = (longlong *)(param_1 + 0x2b0);
    FUN_14574688c(local_168,uVar10);
    local_148 = uVar10;
    if (uVar10 != 0) {
      uVar10 = 0;
      local_158 = lVar8;
      local_150 = param_1;
      do {
        puVar1 = (undefined8 *)(*(longlong *)(local_158 + 0x268) + uVar10 * 0x28);
        local_70 = 0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_8c = *puVar1;
        uVar9 = (undefined4)uVar10;
        uVar2 = *(uint *)(puVar1 + 2);
        local_90 = uVar9;
        if ((ulonglong)uVar2 != 0) {
          lVar8 = 0;
          do {
            local_138 = 0;
            local_140 = 0;
            local_134 = 0xffffffff;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
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
            local_130 = DAT_14c844840;
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
            local_128 = 0;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
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
            local_120 = DAT_14c844840;
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
            local_118 = 0;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
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
            local_110 = DAT_14c844840;
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
            local_108 = 0;
            FUN_140056680(local_100,&DAT_149dfb77a);
            uVar11 = FUN_140056680(local_f0,&DAT_149dfb77a);
            local_e0 = 0;
            uStack_d8 = 0;
            local_d0 = 0;
            uStack_c8 = 0;
            local_c0 = 0;
            local_b8 = 0;
            uStack_b0 = 0;
            local_a8[0] = 0;
            local_a8[1] = 0;
            local_a8[2] = 0;
            local_134 = uVar9;
            FUN_1407ccf14(uVar11,puVar1[1] + lVar8,&local_140,0);
            if ((local_a8[0] == 0) || (cVar5 = FUN_145cc8dbe(local_160,local_a8), cVar5 != '\0')) {
              uVar4 = uStack_78;
              lVar7 = (longlong)(int)uStack_78;
              uVar6 = (int)uStack_78 + 1;
              uStack_78 = CONCAT44(uStack_78._4_4_,uVar6);
              if (uStack_78._4_4_ < uVar6) {
                FUN_1407cce00(&local_80,uVar4 & 0xffffffff);
              }
              FUN_140716340(lVar7 * 0xb0 + local_80,&local_140);
            }
            FUN_140716244(&local_140);
            lVar8 = lVar8 + 0xa0;
          } while ((ulonglong)uVar2 * 0xa0 != lVar8);
        }
        FUN_1407cd3e2(puVar1 + 3,&local_70);
        iVar3 = *(int *)(local_150 + 0x2b8);
        *(uint *)(local_150 + 0x2b8) = iVar3 + 1U;
        if (*(uint *)(local_150 + 700) < iVar3 + 1U) {
          FUN_148a071a6(local_168,iVar3);
        }
        FUN_145746904((longlong)iVar3 * 0x30 + *local_168,&local_90);
        FUN_1407ccd86(&local_90);
        uVar10 = uVar10 + 1;
      } while (uVar10 != local_148);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407ccd86 FUN_1407ccd86 body=74 status=ok
// SIG undefined FUN_1407ccd86(void)

void FUN_1407ccd86(longlong param_1)

{
  FUN_1407ccdd0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_14071621b(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1407ccdd0 FUN_1407ccdd0 body=47 status=ok
// SIG undefined FUN_1407ccdd0(void)

void FUN_1407ccdd0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1407cce00 FUN_1407cce00 body=274 status=ok
// SIG undefined FUN_1407cce00(void)

void FUN_1407cce00(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xb0;
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
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1407ccf14 FUN_1407ccf14 body=1228 status=ok
// SIG undefined FUN_1407ccf14(void)

void FUN_1407ccf14(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_f8 [32];
  longlong *local_d8 [2];
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8 [2];
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  longlong local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong *plStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_3 = *param_2;
  if (param_4 == '\0') {
    FUN_1418b7e24(param_2,local_b8);
  }
  else {
    FUN_1418b7e24(param_2,local_d8);
    FUN_14023409e(&local_c8,local_d8,1);
    local_98 = &local_78;
    local_78 = (longlong *)((ulonglong)local_78._4_4_ << 0x20);
    local_70 = 0;
    plStack_68 = (longlong *)0x0;
    local_60 = 0;
    local_90 = local_58;
    FUN_14010d304(&local_88);
    local_a8 = local_c8;
    local_a0 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_b8,&local_a8,&local_88);
    FUN_14007f2db(local_88,local_80);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (plStack_68 != (longlong *)0x0) {
      (**(code **)(*plStack_68 + 0x10))();
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_c0 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_c0 + 0x10))(local_c0);
        }
      }
    }
  }
  FUN_140008f88(param_3 + 2,local_b8);
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  if ((param_4 != '\0') && (local_d8[0] != (longlong *)0x0)) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  lVar8 = param_2[5];
  if (lVar8 == 0) {
    uVar7 = FUN_14036a63e();
    lVar8 = FUN_14477b664(uVar7);
    param_2[5] = lVar8;
  }
  lVar13 = param_2[6];
  if (lVar13 == 0) {
    if ((param_2[4] != 0) && (lVar8 != 0)) {
      plVar5 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar5 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar6 == '\0')) {
        param_2[6] = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar13 = FUN_144aff482(uVar7,param_2 + 4);
        param_2[6] = lVar13;
        if (lVar13 != 0) goto LAB_1407cd3b4;
      }
    }
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
    local_78 = DAT_14c844840;
    puVar11 = &DAT_14c844848;
    if (DAT_14c844840 != (longlong *)0x0) {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  else {
LAB_1407cd3b4:
    local_78 = *(longlong **)(lVar13 + 0x18);
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 8))();
    }
    puVar11 = (undefined4 *)(lVar13 + 0x20);
  }
  local_70 = CONCAT44(local_70._4_4_,*puVar11);
  FUN_140008f88(param_3 + 6,&local_78);
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  puVar2 = param_3 + 8;
  if (puVar2 != param_2 + 9) {
    iVar3 = *(int *)(param_2 + 10);
    pvVar4 = (void *)param_2[9];
    *(int *)(param_3 + 9) = iVar3;
    if (iVar3 == 0 && *(int *)((longlong)param_3 + 0x4c) == 0) {
      *(undefined4 *)((longlong)param_3 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(puVar2,iVar3);
      if (iVar3 != 0) {
        memcpy((void *)*puVar2,pvVar4,(longlong)iVar3 * 2);
      }
    }
  }
  param_3[0x13] = param_2[0xb];
  if (param_3 != param_2) {
    iVar3 = *(int *)(param_2 + 0xd);
    pvVar4 = (void *)param_2[0xc];
    *(int *)(param_3 + 0xd) = iVar3;
    if (iVar3 == 0 && *(int *)((longlong)param_3 + 0x6c) == 0) {
      *(undefined4 *)((longlong)param_3 + 0x6c) = 0;
    }
    else {
      FUN_1446dd670(param_3 + 0xc,iVar3);
      if (iVar3 != 0) {
        memcpy((void *)param_3[0xc],pvVar4,(longlong)iVar3 * 2);
      }
    }
  }
  if ((longlong)*(int *)(param_2 + 0xf) != 0) {
    lVar8 = param_2[0xe];
    lVar13 = (longlong)*(int *)(param_2 + 0xf) * 0x10 + lVar8;
    do {
      FUN_14000bbd8(&local_78,lVar8,0);
      lVar9 = param_3[0x14];
      iVar3 = *(int *)(param_3 + 0x15);
      lVar12 = (longlong)iVar3;
      if (lVar12 != 0) {
        uVar10 = 0;
        do {
          if (*(int *)(lVar9 + uVar10) == (int)local_78) {
            if ((int)(uVar10 >> 3) * -0x33333333 != -1) goto LAB_1407cd267;
            break;
          }
          uVar10 = uVar10 + 0x28;
        } while (lVar12 * 0x28 != uVar10);
      }
      *(uint *)(param_3 + 0x15) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xac) < iVar3 + 1U) {
        FUN_14014a81a(param_3 + 0x14,iVar3);
        lVar9 = param_3[0x14];
      }
      puVar2 = (undefined8 *)(lVar9 + lVar12 * 0x28);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      FUN_1404e49fa(puVar2,&local_78);
LAB_1407cd267:
      if (CONCAT44(uStack_5c,local_60) != 0) {
        FUN_1400020a8();
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != lVar13);
  }
  FUN_1407cd3e2(param_2 + 0x10,param_3 + 0x11);
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407cd3e2 FUN_1407cd3e2 body=387 status=ok
// SIG undefined FUN_1407cd3e2(void)

void FUN_1407cd3e2(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  void *pvStack_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < (int)param_1[1]) {
    lVar7 = 8;
    lVar5 = 0;
    do {
      pvStack_70 = (void *)0x0;
      local_68 = 0;
      lVar8 = *param_1;
      local_78 = *(longlong *)(lVar8 + -8 + lVar7);
      if (local_78 != 0) {
        if ((void **)(lVar8 + lVar7) != &pvStack_70) {
          uVar1 = *(uint *)(lVar8 + 8 + lVar7);
          pvVar3 = *(void **)(lVar8 + lVar7);
          local_68 = (ulonglong)uVar1;
          if ((longlong)(int)uVar1 == 0) {
            local_68 = (ulonglong)uVar1;
          }
          else {
            FUN_1446dd670(&pvStack_70,uVar1,0);
            memcpy(pvStack_70,pvVar3,(longlong)(int)uVar1 * 2);
          }
        }
        iVar2 = (int)param_2[1];
        lVar8 = (longlong)iVar2;
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_140ea5e86(param_2,iVar2);
        }
        pvVar3 = pvStack_70;
        lVar4 = *param_2;
        *(longlong *)(lVar4 + lVar8 * 0x18) = local_78;
        *(undefined8 *)(lVar4 + 8 + lVar8 * 0x18) = 0;
        lVar9 = (longlong)(int)local_68;
        *(int *)(lVar4 + 0x10 + lVar8 * 0x18) = (int)local_68;
        if (lVar9 == 0) {
          *(undefined4 *)(lVar4 + lVar8 * 0x18 + 0x14) = 0;
        }
        else {
          puVar6 = (undefined8 *)(lVar4 + lVar8 * 0x18 + 8);
          FUN_1446dd670(puVar6,local_68 & 0xffffffff,0);
          memcpy((void *)*puVar6,pvVar3,lVar9 * 2);
        }
      }
      if (pvStack_70 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + 0x20;
    } while (lVar5 < (int)param_1[1]);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407cd566 FUN_1407cd566 body=1599 status=ok
// SIG undefined FUN_1407cd566(void)

int * FUN_1407cd566(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar21 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar21 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar21) {
      FUN_14482b872(param_1,iVar21);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar5 = iVar20 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar16 = param_1 + 2;
    iVar10 = iVar20 + 1;
    iVar14 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar14 = iVar20;
    }
    if (iVar14 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        if (iVar20 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar5 = iVar20;
        }
        else {
          uVar13 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar13) {
              uVar6 = uVar13;
            }
          }
          else {
            uVar6 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar8 = FUN_144a3809e(uVar6 << 2,0);
          iVar5 = (int)(uVar8 >> 2);
          iVar10 = -0x20;
          if ((int)uVar13 <= iVar5) {
            iVar10 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar16,iVar5);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar5 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar5 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar17 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar17 = plVar16;
        }
        bVar9 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar17 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar5 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar21;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar20 & 0x1f;
    puVar1 = (uint *)((longlong)plVar16 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar21 = (int)param_1[6];
    lVar7 = (longlong)iVar21;
    iVar20 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar20;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 0x18) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar11 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar11 = puVar1;
  }
  iVar20 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar20 = iVar21;
  }
  puVar11[iVar20 >> 5] = puVar11[iVar20 >> 5] | 1 << ((byte)iVar21 & 0x1f);
  uVar13 = 1;
  plVar16 = (longlong *)(*param_1 + lVar7 * 0x18);
  plVar17 = (longlong *)param_3[1];
  *plVar16 = *(longlong *)*param_3;
  plVar16[1] = *plVar17;
  *plVar17 = 0;
  *(undefined4 *)(plVar16 + 2) = 0xffffffff;
  lVar7 = *plVar16;
  uVar6 = (uint)((ulonglong)lVar7 >> 0x10);
  uVar12 = (uint)lVar7 & 0xffff;
  uVar6 = ((uint)lVar7 << 0x10 | uVar12) + (int)((ulonglong)lVar7 >> 0x20) +
          (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar12 >> 4);
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar12) {
    plVar17 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar17 = (longlong *)param_1[8];
    }
    iVar20 = *(int *)((longlong)plVar17 + (ulonglong)((int)param_1[9] - 1U & uVar6) * 4);
    if (iVar20 != -1) {
      do {
        plVar17 = (longlong *)(*param_1 + (longlong)iVar20 * 0x18);
        if (*plVar17 == lVar7) {
          if (plVar17[1] != 0) {
            if (DAT_14c872a72 == '\0') {
              FUN_140113f48();
            }
            plVar17[1] = 0;
          }
          uVar3 = *(undefined4 *)((longlong)plVar16 + 4);
          lVar7 = plVar16[1];
          uVar4 = *(undefined4 *)((longlong)plVar16 + 0xc);
          *(int *)plVar17 = (int)*plVar16;
          *(undefined4 *)((longlong)plVar17 + 4) = uVar3;
          *(int *)(plVar17 + 1) = (int)lVar7;
          *(undefined4 *)((longlong)plVar17 + 0xc) = uVar4;
          FUN_148a06aae(param_1,iVar21);
          iVar21 = iVar20;
          goto LAB_1407cd9cc;
        }
        iVar20 = (int)plVar17[2];
      } while (iVar20 != -1);
    }
  }
  if (3 < uVar12) {
    uVar8 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
    lVar7 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar7 & 0x1f);
  }
  if (((int)uVar12 < 1) || ((int)uVar13 <= (int)param_1[9])) {
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)plVar16 + 0x14) = uVar6;
    plVar17 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar17 = param_1 + 7;
    }
    *(undefined4 *)(plVar16 + 2) =
         *(undefined4 *)
          ((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         iVar21;
    goto LAB_1407cd9cc;
  }
  *(uint *)(param_1 + 9) = uVar13;
  plVar16 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar16,0,0,4);
    uVar13 = *(uint *)(param_1 + 9);
  }
  plVar17 = param_1 + 7;
  if (uVar13 == 1) {
    if (*plVar16 != 0) {
      FUN_1446efa72(plVar16,0,0,4);
    }
LAB_1407cd6f5:
    uVar6 = 0;
    do {
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar17;
      }
      *(undefined4 *)((longlong)plVar16 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar6) * 4) =
           0xffffffff;
      uVar6 = uVar6 + 1;
    } while (uVar13 != uVar6);
  }
  else {
    if (uVar13 == 0) goto LAB_1407cd9cc;
    FUN_1446efa72(plVar16,0,uVar13,4);
    if (0 < (int)uVar13) goto LAB_1407cd6f5;
  }
  iVar20 = (int)param_1[5];
  if (iVar20 == 0) {
    uVar8 = 0;
    uVar18 = 1;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar13 = *puVar11;
    if (uVar13 == 0) {
      iVar5 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar5 = iVar20 + -1;
      }
      uVar8 = 0;
      uVar18 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar18 = uVar8;
      }
      iVar10 = 0;
      do {
        if (uVar18 == uVar8) goto LAB_1407cd9cc;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar11[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar8 = 0;
      iVar10 = 0;
    }
    uVar18 = (ulonglong)(-uVar13 & uVar13);
    uVar22 = uVar18 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar20 <= iVar5) {
      iVar5 = iVar20;
    }
  }
  if (iVar5 < iVar20) {
    uVar13 = 0xffffffff;
    do {
      lVar7 = *param_1;
      lVar19 = (longlong)iVar5;
      uVar2 = *(undefined8 *)(lVar7 + lVar19 * 0x18);
      uVar6 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar12 = (uint)uVar2 & 0xffff;
      uVar22 = (longlong)
               (int)(((uint)uVar2 << 0x10 | uVar12) + (int)((ulonglong)uVar2 >> 0x20) +
                     (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar12 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar20 = (int)uVar22;
      *(int *)(lVar7 + 0x14 + lVar19 * 0x18) = iVar20;
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar17;
      }
      *(undefined4 *)(lVar7 + 0x10 + lVar19 * 0x18) =
           *(undefined4 *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & uVar22) * 4);
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar17;
      }
      *(int *)((longlong)plVar16 + ((longlong)iVar20 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar13 = ~(uint)uVar18 & uVar13;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      iVar20 = (int)param_1[5];
      iVar5 = (int)uVar8;
      lVar7 = (longlong)iVar5;
      uVar6 = puVar11[lVar7] & uVar13;
      if (uVar6 == 0) {
        iVar14 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar14 = iVar20 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar15 = iVar14;
        if (iVar14 < iVar5) {
          iVar15 = iVar5;
        }
        if (iVar14 <= iVar5) break;
        lVar19 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = puVar11[lVar7 + lVar19 + 1];
          if (uVar6 != 0) break;
          lVar19 = lVar19 + 1;
          if (iVar15 - lVar7 == lVar19) goto LAB_1407cd9cc;
        }
        uVar8 = (ulonglong)(iVar5 + (int)lVar19 + 1);
        uVar13 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar6 & uVar6);
      uVar22 = uVar18 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar20);
  }
LAB_1407cd9cc:
  *param_2 = iVar21;
  return param_2;
}



// FUNCTION 1407cdba6 FUN_1407cdba6 body=31 status=ok
// SIG undefined FUN_1407cdba6(void)

void FUN_1407cdba6(void)

{
  FUN_1407cdbc6();
  return;
}



// FUNCTION 1407cdbc6 FUN_1407cdbc6 body=871 status=ok
// SIG undefined FUN_1407cdbc6(void)

bool FUN_1407cdbc6(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
    iVar1 = *(int *)(param_2 + 1) + -1;
  }
  local_58 = param_6;
  local_50 = 0xffffffff;
  iVar1 = FUN_1447ee042(param_1,puVar5,iVar1,param_5);
  if (iVar1 < 0) goto LAB_1407cdd23;
  if (param_3 == (longlong *)0x0) {
    if (param_4 == (longlong *)0x0) goto LAB_1407cdd23;
    uVar7 = 0;
    uVar2 = *(int *)(param_2 + 1) - 1;
    if (*(int *)(param_2 + 1) == 0) {
      uVar2 = uVar7;
    }
    if ((int)param_1[1] == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_1;
      uVar7 = (int)param_1[1] - 1;
    }
    uVar3 = uVar2 + iVar1;
    if ((int)uVar7 <= (int)(uVar2 + iVar1)) {
      uVar3 = uVar7;
    }
    uVar4 = (ulonglong)uVar3;
    if ((int)uVar3 < 1) {
      uVar4 = 0;
    }
    FUN_14006620a(&local_48,puVar5 + uVar4,uVar7 - (int)uVar4);
joined_r0x0001407cde9a:
    if (&local_48 != param_4) {
      if (*param_4 != 0) {
        FUN_1400020a8();
      }
      *param_4 = local_48;
      *(undefined4 *)(param_4 + 1) = local_40;
      *(undefined4 *)((longlong)param_4 + 0xc) = local_3c;
      goto LAB_1407cdd23;
    }
  }
  else {
    if (param_3 != param_1) {
      iVar6 = (int)param_1[1] + -1;
      if ((int)param_1[1] == 0) {
        puVar5 = &DAT_149dfb77a;
        iVar6 = 0;
      }
      else {
        puVar5 = (undefined2 *)*param_1;
      }
      if (iVar1 < iVar6) {
        iVar6 = iVar1;
      }
      if (iVar6 < 1) {
        iVar6 = 0;
      }
      FUN_14006620a(&local_48,puVar5,iVar6);
      if (&local_48 == param_3) {
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_3 != 0) {
          FUN_1400020a8();
        }
        *param_3 = local_48;
        local_48 = 0;
        *(undefined4 *)(param_3 + 1) = local_40;
        *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
      }
      if (param_4 == (longlong *)0x0) goto LAB_1407cdd23;
      uVar7 = 0;
      uVar2 = *(int *)(param_2 + 1) - 1;
      if (*(int *)(param_2 + 1) == 0) {
        uVar2 = uVar7;
      }
      if ((int)param_1[1] == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = (undefined2 *)*param_1;
        uVar7 = (int)param_1[1] - 1;
      }
      uVar3 = uVar2 + iVar1;
      if ((int)uVar7 <= (int)(uVar2 + iVar1)) {
        uVar3 = uVar7;
      }
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 1) {
        uVar4 = 0;
      }
      FUN_14006620a(&local_48,puVar5 + uVar4,uVar7 - (int)uVar4);
      goto joined_r0x0001407cde9a;
    }
    if (param_4 != (longlong *)0x0) {
      uVar7 = 0;
      uVar2 = *(int *)(param_2 + 1) - 1;
      if (*(int *)(param_2 + 1) == 0) {
        uVar2 = uVar7;
      }
      if ((int)param_1[1] == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = (undefined2 *)*param_1;
        uVar7 = (int)param_1[1] - 1;
      }
      uVar3 = uVar2 + iVar1;
      if ((int)uVar7 <= (int)(uVar2 + iVar1)) {
        uVar3 = uVar7;
      }
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 1) {
        uVar4 = 0;
      }
      FUN_14006620a(&local_48,puVar5 + uVar4,uVar7 - (int)uVar4);
      if (&local_48 == param_4) {
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = local_48;
        local_48 = 0;
        *(undefined4 *)(param_4 + 1) = local_40;
        *(undefined4 *)((longlong)param_4 + 0xc) = local_3c;
      }
    }
    iVar6 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      puVar5 = &DAT_149dfb77a;
      iVar6 = 0;
    }
    else {
      puVar5 = (undefined2 *)*param_1;
    }
    if (iVar1 < iVar6) {
      iVar6 = iVar1;
    }
    if (iVar6 < 1) {
      iVar6 = 0;
    }
    FUN_14006620a(&local_48,puVar5,iVar6);
    if (&local_48 != param_3) {
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      *param_3 = local_48;
      *(undefined4 *)(param_3 + 1) = local_40;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
      goto LAB_1407cdd23;
    }
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_1407cdd23:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return -1 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407cdf2e thunk_FUN_1407cdf34 body=5 status=ok
// SIG undefined thunk_FUN_1407cdf34(void)

void thunk_FUN_1407cdf34(longlong *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 auStack_98 [40];
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  byte bStack_60;
  byte bStack_5f;
  ushort uStack_5e;
  char cStack_58;
  uint uStack_50;
  uint uStack_4c;
  int iStack_48;
  ulonglong uStack_40;
  
  uStack_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 != 0xffffffff && param_2 != -1) {
    lVar5 = *param_1;
    lVar7 = (longlong)param_2 * 0x78;
    puVar9 = *(undefined8 **)(lVar5 + 0x10 + lVar7);
    uVar8 = *(uint *)(lVar5 + 0x18 + lVar7);
    if (0 < (int)uVar8) {
      lVar6 = 0;
      while (uVar2 = *(uint *)((longlong)puVar9 + lVar6 + 0x18), uVar2 != param_3 >> 9) {
        if ((param_3 >> 9 < uVar2) ||
           (bVar10 = (ulonglong)uVar8 * 0x20 + -0x20 == lVar6, lVar6 = lVar6 + 0x20, bVar10))
        goto LAB_1407cdfed;
      }
      cVar4 = FUN_1406add7a();
      if (cVar4 != '\0') goto LAB_1407cdf69;
      lVar5 = *param_1;
      puVar9 = *(undefined8 **)(lVar5 + 0x10 + lVar7);
      uVar8 = *(uint *)(lVar5 + 0x18 + lVar7);
    }
LAB_1407cdfed:
    uStack_4c = 0;
    puStack_70 = puVar9;
    uStack_50 = uVar8;
    if (uVar8 != 0) {
      iStack_48 = *(int *)(puVar9 + 3) << 9;
      uVar2 = *(uint *)(puVar9 + 2);
      if (uVar2 == 0) {
        bStack_60 = 0x20;
        bStack_5f = 0;
        uStack_5e = 0;
      }
      else {
        iVar3 = 0;
        if (uVar2 != 0) {
          for (; (uVar2 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
          }
        }
        bStack_60 = (byte)iVar3;
        uStack_5e = *(ushort *)*puVar9;
        iVar3 = 0;
        if ((uStack_5e | 0xffff0000) != 0) {
          for (; ((uStack_5e | 0xffff0000) >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
          }
        }
        bStack_5f = (byte)iVar3;
      }
      cStack_58 = '\x01';
      puStack_68 = puVar9;
      do {
        do {
          FUN_1406adae8(param_1,(uint)bStack_5f + iStack_48 + (uint)bStack_60 * 0x10,param_3);
          FUN_144a145de(&puStack_70);
        } while (puStack_70 != puVar9);
      } while ((uStack_4c != uVar8) || (cStack_58 != '\0'));
      lVar5 = *param_1;
    }
    FUN_1406adb7c(lVar5 + lVar7 + 0x10,param_3);
    piVar1 = (int *)(*param_1 + 0x60 + (longlong)(int)param_3 * 0x78);
    *piVar1 = *piVar1 + 1;
    *(int *)(*param_1 + 0x6c + (longlong)(int)param_3 * 0x78) = param_2;
  }
LAB_1407cdf69:
  if ((uStack_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407cdf34 FUN_1407cdf34 body=422 status=ok
// SIG undefined FUN_1407cdf34(void)

void FUN_1407cdf34(longlong *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined8 *local_68;
  byte local_60;
  byte local_5f;
  ushort local_5e;
  char local_58;
  uint local_50;
  uint local_4c;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 != 0xffffffff && param_2 != -1) {
    lVar5 = *param_1;
    lVar7 = (longlong)param_2 * 0x78;
    puVar9 = *(undefined8 **)(lVar5 + 0x10 + lVar7);
    uVar8 = *(uint *)(lVar5 + 0x18 + lVar7);
    if (0 < (int)uVar8) {
      lVar6 = 0;
      while (uVar2 = *(uint *)((longlong)puVar9 + lVar6 + 0x18), uVar2 != param_3 >> 9) {
        if ((param_3 >> 9 < uVar2) ||
           (bVar10 = (ulonglong)uVar8 * 0x20 + -0x20 == lVar6, lVar6 = lVar6 + 0x20, bVar10))
        goto LAB_1407cdfed;
      }
      cVar4 = FUN_1406add7a();
      if (cVar4 != '\0') goto LAB_1407cdf69;
      lVar5 = *param_1;
      puVar9 = *(undefined8 **)(lVar5 + 0x10 + lVar7);
      uVar8 = *(uint *)(lVar5 + 0x18 + lVar7);
    }
LAB_1407cdfed:
    local_4c = 0;
    local_70 = puVar9;
    local_50 = uVar8;
    if (uVar8 != 0) {
      local_48 = *(int *)(puVar9 + 3) << 9;
      uVar2 = *(uint *)(puVar9 + 2);
      if (uVar2 == 0) {
        local_60 = 0x20;
        local_5f = 0;
        local_5e = 0;
      }
      else {
        iVar3 = 0;
        if (uVar2 != 0) {
          for (; (uVar2 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
          }
        }
        local_60 = (byte)iVar3;
        local_5e = *(ushort *)*puVar9;
        iVar3 = 0;
        if ((local_5e | 0xffff0000) != 0) {
          for (; ((local_5e | 0xffff0000) >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
          }
        }
        local_5f = (byte)iVar3;
      }
      local_58 = '\x01';
      local_68 = puVar9;
      do {
        do {
          FUN_1406adae8(param_1,(uint)local_5f + local_48 + (uint)local_60 * 0x10,param_3);
          FUN_144a145de(&local_70);
        } while (local_70 != puVar9);
      } while ((local_4c != uVar8) || (local_58 != '\0'));
      lVar5 = *param_1;
    }
    FUN_1406adb7c(lVar5 + lVar7 + 0x10,param_3);
    piVar1 = (int *)(*param_1 + 0x60 + (longlong)(int)param_3 * 0x78);
    *piVar1 = *piVar1 + 1;
    *(int *)(*param_1 + 0x6c + (longlong)(int)param_3 * 0x78) = param_2;
  }
LAB_1407cdf69:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407ce0dc thunk_FUN_1407ce0e2 body=5 status=ok
// SIG undefined thunk_FUN_1407ce0e2(void)

void thunk_FUN_1407ce0e2(longlong *param_1,int param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  longlong *plStack_50;
  
  if (param_3 != 0xffffffff && param_2 != -1) {
    lVar4 = *param_1;
    lVar14 = (longlong)param_2 * 0x78;
    plVar13 = *(longlong **)(lVar4 + 0x10 + lVar14);
    uVar11 = *(uint *)(lVar4 + 0x18 + lVar14);
    if (0 < (int)uVar11) {
      lVar7 = 0;
      while (uVar5 = *(uint *)((longlong)plVar13 + lVar7 + 0x18), uVar5 != param_3 >> 9) {
        if ((param_3 >> 9 < uVar5) ||
           (bVar15 = (ulonglong)uVar11 * 0x20 + -0x20 == lVar7, lVar7 = lVar7 + 0x20, bVar15))
        goto LAB_1407ce177;
      }
      cVar2 = FUN_1406add7a((longlong)plVar13 + lVar7,param_3);
      if (cVar2 != '\0') {
        return;
      }
      lVar4 = *param_1;
      plVar13 = *(longlong **)(lVar4 + 0x10 + lVar14);
      uVar11 = *(uint *)(lVar4 + 0x18 + lVar14);
    }
LAB_1407ce177:
    if (uVar11 != 0) {
      uVar5 = *(uint *)(plVar13 + 2);
      uVar6 = 0;
      if (uVar5 == 0) {
        uVar10 = 0x20;
        uVar5 = 0;
        uVar12 = 0;
      }
      else {
        uVar10 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
          }
        }
        uVar12 = (uint)*(ushort *)*plVar13;
        uVar5 = 0;
        if ((uVar12 | 0xffff0000) != 0) {
          for (; ((uVar12 | 0xffff0000) >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
      }
      iVar8 = (int)plVar13[3] << 9;
      iVar9 = 1;
      plStack_50 = plVar13;
      do {
        FUN_1406adae8(param_1,param_3,(uVar10 & 0xff) * 0x10 + iVar8 + (uVar5 & 0xff));
        uVar12 = uVar12 & ~(1 << (uVar5 & 0x1f));
        uVar5 = 0;
        if ((uVar12 | 0xffff0000) != 0) {
          for (; ((uVar12 | 0xffff0000) >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        if ((short)uVar12 == 0 || uVar5 == 0x10) {
          if ((byte)uVar10 != 0x1f) {
            uVar5 = -2 << ((byte)uVar10 & 0x1f) & *(uint *)(plStack_50 + 2);
            if (uVar5 == 0) {
              uVar10 = 0x20;
            }
            else {
              uVar10 = 0;
              if (uVar5 != 0) {
                for (; (uVar5 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                }
              }
            }
            if (uVar5 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(uint *)(plStack_50 + 2) & ~(-1 << ((byte)uVar10 & 0x1f));
              uVar3 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x15555555);
              uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
              uVar12 = (uint)*(ushort *)
                              (*plStack_50 +
                              (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38) * 2);
              uVar5 = 0;
              if ((uVar12 | 0xffff0000) != 0) {
                for (; ((uVar12 | 0xffff0000) >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
                }
              }
            }
            goto LAB_1407ce24a;
          }
          uVar5 = 0;
LAB_1407ce250:
          uVar6 = uVar6 + 1;
          if ((int)uVar6 < (int)uVar11) {
            lVar4 = (longlong)(int)uVar6;
            plStack_50 = plVar13 + lVar4 * 4;
            uVar5 = *(uint *)(plVar13 + lVar4 * 4 + 2);
            iVar8 = (int)plVar13[lVar4 * 4 + 3] << 9;
            if (uVar5 == 0) {
              uVar10 = 0x20;
              uVar12 = 0;
              uVar5 = 0;
            }
            else {
              uVar10 = 0;
              if (uVar5 != 0) {
                for (; (uVar5 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                }
              }
              uVar12 = (uint)*(ushort *)*plStack_50;
              uVar5 = 0;
              if ((uVar12 | 0xffff0000) != 0) {
                for (; ((uVar12 | 0xffff0000) >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
                }
              }
            }
            iVar9 = 1;
          }
          else {
            iVar8 = 0;
            if (iVar9 != 0) {
              iVar9 = iVar8;
            }
            uVar10 = 0x20;
          }
        }
        else {
LAB_1407ce24a:
          if (0x1f < (byte)uVar10) goto LAB_1407ce250;
        }
      } while ((uVar6 != uVar11) || ((char)iVar9 != '\0'));
      lVar4 = *param_1;
    }
    FUN_1406adb7c(lVar4 + lVar14 + 0x10,param_3);
    piVar1 = (int *)(*param_1 + 0x60 + (longlong)(int)param_3 * 0x78);
    *piVar1 = *piVar1 + 1;
    *(int *)(*param_1 + 0x6c + (longlong)(int)param_3 * 0x78) = param_2;
  }
  return;
}



// FUNCTION 1407ce0e2 FUN_1407ce0e2 body=770 status=ok
// SIG undefined FUN_1407ce0e2(void)

void FUN_1407ce0e2(longlong *param_1,int param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  longlong *local_50;
  
  if (param_3 != 0xffffffff && param_2 != -1) {
    lVar4 = *param_1;
    lVar14 = (longlong)param_2 * 0x78;
    plVar13 = *(longlong **)(lVar4 + 0x10 + lVar14);
    uVar11 = *(uint *)(lVar4 + 0x18 + lVar14);
    if (0 < (int)uVar11) {
      lVar7 = 0;
      while (uVar5 = *(uint *)((longlong)plVar13 + lVar7 + 0x18), uVar5 != param_3 >> 9) {
        if ((param_3 >> 9 < uVar5) ||
           (bVar15 = (ulonglong)uVar11 * 0x20 + -0x20 == lVar7, lVar7 = lVar7 + 0x20, bVar15))
        goto LAB_1407ce177;
      }
      cVar2 = FUN_1406add7a((longlong)plVar13 + lVar7,param_3);
      if (cVar2 != '\0') {
        return;
      }
      lVar4 = *param_1;
      plVar13 = *(longlong **)(lVar4 + 0x10 + lVar14);
      uVar11 = *(uint *)(lVar4 + 0x18 + lVar14);
    }
LAB_1407ce177:
    if (uVar11 != 0) {
      uVar5 = *(uint *)(plVar13 + 2);
      uVar6 = 0;
      if (uVar5 == 0) {
        uVar10 = 0x20;
        uVar5 = 0;
        uVar12 = 0;
      }
      else {
        uVar10 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
          }
        }
        uVar12 = (uint)*(ushort *)*plVar13;
        uVar5 = 0;
        if ((uVar12 | 0xffff0000) != 0) {
          for (; ((uVar12 | 0xffff0000) >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
      }
      iVar8 = (int)plVar13[3] << 9;
      iVar9 = 1;
      local_50 = plVar13;
      do {
        FUN_1406adae8(param_1,param_3,(uVar10 & 0xff) * 0x10 + iVar8 + (uVar5 & 0xff));
        uVar12 = uVar12 & ~(1 << (uVar5 & 0x1f));
        uVar5 = 0;
        if ((uVar12 | 0xffff0000) != 0) {
          for (; ((uVar12 | 0xffff0000) >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        if ((short)uVar12 == 0 || uVar5 == 0x10) {
          if ((byte)uVar10 != 0x1f) {
            uVar5 = -2 << ((byte)uVar10 & 0x1f) & *(uint *)(local_50 + 2);
            if (uVar5 == 0) {
              uVar10 = 0x20;
            }
            else {
              uVar10 = 0;
              if (uVar5 != 0) {
                for (; (uVar5 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                }
              }
            }
            if (uVar5 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(uint *)(local_50 + 2) & ~(-1 << ((byte)uVar10 & 0x1f));
              uVar3 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x15555555);
              uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
              uVar12 = (uint)*(ushort *)
                              (*local_50 +
                              (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38) * 2);
              uVar5 = 0;
              if ((uVar12 | 0xffff0000) != 0) {
                for (; ((uVar12 | 0xffff0000) >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
                }
              }
            }
            goto LAB_1407ce24a;
          }
          uVar5 = 0;
LAB_1407ce250:
          uVar6 = uVar6 + 1;
          if ((int)uVar6 < (int)uVar11) {
            lVar4 = (longlong)(int)uVar6;
            local_50 = plVar13 + lVar4 * 4;
            uVar5 = *(uint *)(plVar13 + lVar4 * 4 + 2);
            iVar8 = (int)plVar13[lVar4 * 4 + 3] << 9;
            if (uVar5 == 0) {
              uVar10 = 0x20;
              uVar12 = 0;
              uVar5 = 0;
            }
            else {
              uVar10 = 0;
              if (uVar5 != 0) {
                for (; (uVar5 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                }
              }
              uVar12 = (uint)*(ushort *)*local_50;
              uVar5 = 0;
              if ((uVar12 | 0xffff0000) != 0) {
                for (; ((uVar12 | 0xffff0000) >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
                }
              }
            }
            iVar9 = 1;
          }
          else {
            iVar8 = 0;
            if (iVar9 != 0) {
              iVar9 = iVar8;
            }
            uVar10 = 0x20;
          }
        }
        else {
LAB_1407ce24a:
          if (0x1f < (byte)uVar10) goto LAB_1407ce250;
        }
      } while ((uVar6 != uVar11) || ((char)iVar9 != '\0'));
      lVar4 = *param_1;
    }
    FUN_1406adb7c(lVar4 + lVar14 + 0x10,param_3);
    piVar1 = (int *)(*param_1 + 0x60 + (longlong)(int)param_3 * 0x78);
    *piVar1 = *piVar1 + 1;
    *(int *)(*param_1 + 0x6c + (longlong)(int)param_3 * 0x78) = param_2;
  }
  return;
}



// FUNCTION 1407ce3e4 FUN_1407ce3e4 body=128 status=ok
// SIG undefined FUN_1407ce3e4(void)

undefined8 FUN_1407ce3e4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x298));
  uVar1 = FUN_145747346(param_1);
  local_40 = param_2;
  local_38 = param_3;
  FUN_1402ceb44(uVar1,local_2c,&local_40,0);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x298));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ce466 FUN_1407ce466 body=602 status=ok
// SIG undefined FUN_1407ce466(void)

bool FUN_1407ce466(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 **local_50;
  undefined1 *local_48;
  code *local_40;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x14) != 0) {
    plVar1 = (longlong *)(param_1 + -0x30);
    lVar4 = FUN_1407ce6c2(plVar1);
    if (lVar4 != 0) {
      uVar5 = FUN_140495e96(param_1);
      lVar4 = FUN_1404960a8(uVar5);
      if ((lVar4 != 0) && (lVar4 = (**(code **)(*plVar1 + 0x180))(plVar1), lVar4 != 0)) {
        plVar7 = *(longlong **)(lVar4 + 0x1f0);
        if (plVar7 != (longlong *)0x0) {
          if (DAT_14cb5e538 == 0) {
            local_50 = &local_30;
            local_30 = &LAB_1417c5d06;
            local_40 = FUN_14081d0ea;
            local_48 = &LAB_1417ad04a;
            local_58 = &LAB_1486a7af7;
            local_60 = &LAB_1464e1631;
            local_68 = &DAT_149e063b2;
            local_70 = 0;
            local_78 = 0x1000000c;
            local_80 = 8;
            local_88 = 0x420;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
            plVar7 = *(longlong **)(lVar4 + 0x1f0);
            if (plVar7 == (longlong *)0x0) goto LAB_1407ce628;
          }
          if ((((DAT_14cb5e538 != 0) && (lVar6 = plVar7[2], lVar6 != 0)) &&
              (*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
             (*(longlong *)
               (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) ==
              DAT_14cb5e538 + 0x30)) {
            if (*(code **)(*plVar7 + 0x498) == (code *)&LAB_14015c36e) {
              cVar2 = (char)plVar7[0x42];
            }
            else {
              cVar2 = (**(code **)(*plVar7 + 0x498))();
            }
            if (cVar2 != '\b') goto LAB_1407ce554;
          }
        }
LAB_1407ce628:
        bVar8 = false;
        lVar4 = FUN_140149a73(lVar4,0);
        if (lVar4 == 0) goto LAB_1407ce556;
        iVar3 = FUN_14574753c(lVar4);
        local_30 = (undefined1 *)CONCAT44(local_30._4_4_,iVar3);
        if (((-1 < iVar3) && (lVar4 = FUN_140d17acc(lVar4,&local_30), lVar4 != 0)) &&
           (lVar4 = FUN_14026506e(param_1), lVar4 != 0)) {
          lVar6 = FUN_144a2f878();
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            lVar4 = FUN_1407ce818(plVar1);
            bVar8 = lVar4 != 0;
            goto LAB_1407ce556;
          }
        }
      }
    }
  }
LAB_1407ce554:
  bVar8 = false;
LAB_1407ce556:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar8;
}



// FUNCTION 1407ce6c2 FUN_1407ce6c2 body=340 status=ok
// SIG undefined FUN_1407ce6c2(void)

code * FUN_1407ce6c2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
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
  code *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_1400d7050(param_1 + 0x30);
  if (lVar3 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      FUN_1407934de(&local_28,lVar3);
      pcVar4 = local_28;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)local_20 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_20 + 0x10))(local_20);
          }
        }
      }
      goto LAB_1407ce717;
    }
  }
  pcVar4 = (code *)0x0;
LAB_1407ce717:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return pcVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ce818 FUN_1407ce818 body=323 status=ok
// SIG undefined FUN_1407ce818(void)

undefined8 FUN_1407ce818(longlong param_1)

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
  lVar1 = FUN_1400d7050(param_1 + 0x30);
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ce970 FUN_1407ce970 body=96 status=ok
// SIG undefined FUN_1407ce970(void)

undefined1 FUN_1407ce970(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1407ce9d0(param_2,param_3);
    FUN_14043ea4a(param_2 + 0x10,param_3 + 0x10);
    FUN_14043ea4a(param_2 + 0x20,param_3 + 0x20);
    *(byte *)(param_2 + 0x58) = *(byte *)(param_2 + 0x58) & 0xfe | *(byte *)(param_3 + 0x58) & 1;
    param_2 = param_2 + 0x60;
    param_3 = param_3 + 0x60;
  }
  return 1;
}



// FUNCTION 1407ce9d0 FUN_1407ce9d0 body=89 status=ok
// SIG undefined FUN_1407ce9d0(void)

undefined8 * FUN_1407ce9d0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1407cea2a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x28);
      }
    }
  }
  return param_1;
}



// FUNCTION 1407cea2a FUN_1407cea2a body=334 status=ok
// SIG undefined FUN_1407cea2a(void)

void FUN_1407cea2a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x28;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407cea9c;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_1407cea9c:
    iVar5 = (int)(uVar4 / 0x28);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x28,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1407ceb78 FUN_1407ceb78 body=21 status=ok
// SIG undefined FUN_1407ceb78(void)

undefined8 FUN_1407ceb78(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1407ceb8e FUN_1407ceb8e body=4305 status=ok
// SIG undefined FUN_1407ceb8e(void)

void FUN_1407ceb8e(undefined **param_1,longlong param_2,longlong *param_3)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  longlong lVar9;
  undefined *puVar10;
  longlong lVar11;
  undefined ***pppuVar12;
  ulonglong uVar13;
  char cVar14;
  int iVar15;
  DWORD DVar16;
  DWORD DVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  undefined4 *puVar21;
  undefined8 uVar22;
  longlong *plVar23;
  uint *puVar24;
  longlong *plVar25;
  longlong *plVar26;
  uint uVar27;
  undefined8 *puVar28;
  undefined ***pppuVar29;
  undefined ***pppuVar30;
  uint *puVar31;
  undefined ***pppuVar32;
  code *pcVar33;
  undefined **ppuVar34;
  code *pcVar35;
  ulonglong uVar36;
  bool bVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auStack_118 [32];
  code **local_f8;
  undefined ***local_e8;
  longlong *local_e0;
  code *local_d8;
  longlong local_d0;
  undefined **local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined1 local_ac [4];
  code *local_a8;
  undefined ***local_a0;
  undefined ***local_98;
  undefined **local_88;
  undefined **local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  ppuVar34 = (undefined **)*param_3;
  if (ppuVar34 != (undefined **)0x0) {
    LOCK();
    *(int *)(ppuVar34 + 1) = *(int *)(ppuVar34 + 1) + 1;
    UNLOCK();
  }
  lVar18 = (**(code **)(*ppuVar34 + 0x30))(ppuVar34);
  bVar37 = true;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar15 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar15 != 2)) {
    if (iVar15 == 1) {
      DVar16 = FUN_140ad26c0();
      DVar17 = GetCurrentThreadId();
      bVar37 = DVar16 == DVar17;
      goto LAB_1407cf219;
    }
LAB_1407cec13:
    if (ppuVar34 != (undefined **)0x0) {
      LOCK();
      *(int *)(ppuVar34 + 1) = *(int *)(ppuVar34 + 1) + 1;
      UNLOCK();
    }
    lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar15 = *(int *)(lVar18 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar15 != 2) {
        if (iVar15 != 1) goto LAB_1407cec42;
        DVar16 = FUN_140ad26c0();
        DVar17 = GetCurrentThreadId();
        if (DVar16 == DVar17) goto LAB_1407cec4b;
        goto LAB_1407ced8c;
      }
    }
    else {
LAB_1407cec42:
      if (iVar15 != 0x10) {
LAB_1407ced8c:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar15 = *(int *)(lVar18 + 0xc60), iVar15 == 2))
          goto LAB_1407cec4b;
          if (iVar15 == 1) {
            DVar16 = FUN_140ad26c0();
            DVar17 = GetCurrentThreadId();
            if (DVar16 == DVar17) goto LAB_1407cec4b;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar28 = (undefined8 *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x308);
          puVar24 = (uint *)*puVar28;
          if (puVar24 != (uint *)0x0) goto LAB_1407cef5f;
          while( true ) {
            uVar27 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar27 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar27 | 1;
              __tlregdtor(&LAB_14465e119);
            }
            lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar21 = *(undefined4 **)(lVar18 + 0x310);
            *(undefined8 *)(lVar18 + 0x310) = 0;
            if (puVar21 == (undefined4 *)0x0) {
              puVar21 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar21 = 0xffffffff;
            *(undefined4 **)(puVar21 + 0x10) = puVar21 + 0x16;
            puVar21[0x12] = 0;
            *puVar28 = puVar21;
            FUN_140217a48(puVar28);
            puVar24 = (uint *)*puVar28;
LAB_1407cef5f:
            puVar19 = (undefined8 *)(*(longlong *)(puVar24 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar31 = (uint *)(puVar19 + 0x16);
            uVar27 = puVar24[0x12];
            if (puVar31 <= puVar24 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar24 + 0x10) = puVar24 + 0x4000;
              LOCK();
              uVar6 = *puVar24;
              *puVar24 = *puVar24 + uVar27 + 1;
              UNLOCK();
              if ((uVar6 ^ uVar27) != 0xffffffff) break;
              puVar24 = (uint *)*puVar28;
              *puVar24 = 0xffffffff;
              *(uint **)(puVar24 + 0x10) = puVar24 + 0x16;
              puVar24[0x12] = 0;
              *puVar28 = puVar24;
              puVar19 = (undefined8 *)((longlong)puVar24 + 0x5fU & 0xfffffffffffffff8);
              puVar31 = (uint *)(puVar19 + 0x16);
              uVar27 = 0;
              if (puVar31 <= puVar24 + 0x4000) {
                uVar27 = 1;
                goto LAB_1407cefdf;
              }
            }
          }
          uVar27 = uVar27 + 1;
LAB_1407cefdf:
          *(uint **)(puVar24 + 0x10) = puVar31;
          puVar24[0x12] = uVar27;
          iVar15 = 0;
          FUN_1447247dc(puVar19,0);
          *puVar19 = &PTR_FUN_14beac7f0;
          puVar19[0x15] = ppuVar34;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar27 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar27 < 2) {
              uVar36 = (ulonglong)(byte)(&DAT_149e38edc)[uVar27];
              iVar15 = 0;
            }
            else {
              uVar36 = 2;
            }
          }
          else {
            iVar15 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar36 = 5;
          }
          if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
          }
          puVar19[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar19[9] = puVar19;
          puVar19[10] = puVar19;
          lVar18 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar18 == 0) {
            uVar13 = 1;
            if ((char)uVar36 != '\x06') {
              uVar13 = uVar36;
            }
            uVar36 = uVar13;
            uVar22 = 0;
          }
          else {
            if ((char)uVar36 == '\x06') {
              uVar36 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
            }
            uVar22 = *(undefined8 *)(lVar18 + 0x30);
          }
          puVar19[0xf] = uVar22;
          puVar19[0x10] = uVar36 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar19 + 0x1c) = iVar15;
          if (puVar19 == (undefined8 *)0x0) {
            local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
            UNLOCK();
            local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
            FUN_1447439e4(puVar19);
            LOCK();
            piVar4 = (int *)(puVar19 + 1);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)*puVar19)(puVar19,1);
            }
          }
        }
        else {
          local_f8 = &local_a8;
          local_98 = (undefined ***)0x0;
          local_88 = &PTR_LAB_14beac7d0;
          local_a8 = FUN_144660ae8;
          local_80 = ppuVar34;
          FUN_14005a792(&DAT_14ca9a440,L"UpdateWindowBackBufferCommand",&DAT_14cc2cb5c);
          if (local_a8 != (code *)0x0) {
            pppuVar29 = local_98;
            if (local_98 == (undefined ***)0x0) {
              pppuVar29 = &local_88;
            }
            goto LAB_1407cee28;
          }
        }
        goto LAB_1407cee2e;
      }
    }
LAB_1407cec4b:
    lVar18 = (**(code **)(*ppuVar34 + 0x30))(ppuVar34);
    if (lVar18 != 0) {
      *(undefined1 *)(lVar18 + 0xa0) = 2;
      *(undefined1 *)(lVar18 + 0xa9) = 1;
      if (DAT_14ca85164 == '\x01') {
        *(undefined1 *)(lVar18 + 0xaa) = 1;
      }
      else {
        puVar19 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar28 = puVar19 + 3;
        if (DAT_14ca85108 < puVar28) {
          FUN_140023dd8(&DAT_14ca85100,0x20);
          puVar19 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          puVar28 = puVar19 + 3;
        }
        DAT_14ca85160 = DAT_14ca85160 + 1;
        DAT_14ca85100 = puVar28;
        *DAT_14ca85130 = puVar19;
        DAT_14ca85130 = puVar19 + 1;
        puVar19[1] = 0;
        *puVar19 = &PTR_LAB_14beac7c0;
        puVar19[2] = lVar18;
      }
    }
    if (ppuVar34 == (undefined **)0x0) goto LAB_1407cee89;
    LOCK();
    ppuVar1 = ppuVar34 + 1;
    puVar10 = *ppuVar1;
    *(uint *)ppuVar1 = *(uint *)ppuVar1 - 1;
    UNLOCK();
    if (((ulonglong)puVar10 & 0x3fffffff) == 1) {
      ppuVar1 = ppuVar34 + 1;
      LOCK();
      uVar27 = *(uint *)ppuVar1;
      *(uint *)ppuVar1 = *(uint *)ppuVar1 | 0x40000000;
      UNLOCK();
      if ((uVar27 >> 0x1e & 1) == 0) {
        bVar8 = *(byte *)((longlong)ppuVar34 + 0xd);
        plVar20 = (longlong *)FUN_14001cc68(0x10,8);
        plVar20[1] = (longlong)ppuVar34;
        plVar25 = DAT_14ca843c0;
        plVar26 = DAT_14ca843c8;
        if ((bVar8 & 2) == 0) {
          do {
            *plVar20 = (longlong)plVar25;
            LOCK();
            bVar37 = plVar25 != DAT_14ca843c0;
            plVar26 = plVar20;
            if (bVar37) {
              plVar25 = DAT_14ca843c0;
              plVar26 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar26;
            UNLOCK();
          } while (bVar37);
        }
        else {
          do {
            *plVar20 = (longlong)plVar26;
            LOCK();
            bVar37 = plVar26 != DAT_14ca843c8;
            plVar25 = plVar20;
            if (bVar37) {
              plVar26 = DAT_14ca843c8;
              plVar25 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar25;
            UNLOCK();
          } while (bVar37);
        }
      }
    }
  }
  else {
LAB_1407cf219:
    lVar11 = DAT_14cc28e58;
    if (((lVar18 == 0) || (!bVar37)) || (*(char *)(lVar18 + 0xac) != '\x01')) goto LAB_1407cec13;
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar15 = *(int *)(lVar9 + 0xc60);
    if (iVar15 == 0x40000002) {
      uVar36 = 0;
    }
    else {
      bVar37 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar15 != 2)) {
        if (iVar15 == 1) {
          DVar16 = FUN_140ad26c0();
          DVar17 = GetCurrentThreadId();
          bVar37 = DVar16 == DVar17;
        }
        else {
          bVar37 = false;
        }
      }
      uVar36 = (ulonglong)(bVar37 ^ 1);
    }
    if (*(int *)(lVar11 + uVar36 * 4) == 0) goto LAB_1407cec13;
    if (DAT_14cc2ae74 == '\0') {
      DAT_14cc2ae74 = 1;
      pppuVar29 = *(undefined ****)(param_2 + 0x10);
      local_e0 = DAT_14c98e618;
      local_d0 = lVar9;
      if (pppuVar29 == (undefined ***)0x0) {
LAB_1407cf2c1:
        pppuVar29 = (undefined ***)0x0;
LAB_1407cf2c3:
        pcVar35 = (code *)0x0;
        pppuVar32 = (undefined ***)0x0;
      }
      else {
        iVar15 = *(int *)(pppuVar29 + 1);
        do {
          if (iVar15 == 0) goto LAB_1407cf2c1;
          LOCK();
          iVar7 = *(int *)(pppuVar29 + 1);
          bVar37 = iVar15 == iVar7;
          if (bVar37) {
            *(int *)(pppuVar29 + 1) = iVar15 + 1;
            iVar7 = iVar15;
          }
          iVar15 = iVar7;
          UNLOCK();
        } while (!bVar37);
        pcVar33 = *(code **)(param_2 + 8);
        LOCK();
        *(int *)(pppuVar29 + 1) = *(int *)(pppuVar29 + 1) + 1;
        UNLOCK();
        LOCK();
        pppuVar30 = pppuVar29 + 1;
        *(int *)pppuVar30 = *(int *)pppuVar30 + -1;
        UNLOCK();
        if (*(int *)pppuVar30 == 0) {
          (*(code *)**pppuVar29)(pppuVar29);
          LOCK();
          piVar4 = (int *)((longlong)pppuVar29 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (*(code *)(*pppuVar29)[2])(pppuVar29);
          }
        }
        if (pcVar33 == (code *)0x0) goto LAB_1407cf2c3;
        pppuVar30 = (undefined ***)0x0;
        do {
          cVar14 = (**(code **)(*(longlong *)pcVar33 + 0x200))(pcVar33);
          pppuVar32 = pppuVar30;
          if (cVar14 == '\0') {
            pcVar35 = (code *)0x0;
          }
          else {
            if (pppuVar29 != (undefined ***)0x0) {
              LOCK();
              *(int *)(pppuVar29 + 1) = *(int *)(pppuVar29 + 1) + 1;
              UNLOCK();
            }
            pcVar35 = pcVar33;
            if (pppuVar29 == pppuVar30) {
              if (pppuVar30 == (undefined ***)0x0) {
                pppuVar32 = (undefined ***)0x0;
              }
              else {
                LOCK();
                pppuVar12 = pppuVar29 + 1;
                *(int *)pppuVar12 = *(int *)pppuVar12 + -1;
                UNLOCK();
                if (*(int *)pppuVar12 == 0) {
                  (*(code *)**pppuVar29)(pppuVar29);
                  LOCK();
                  piVar4 = (int *)((longlong)pppuVar29 + 0xc);
                  *piVar4 = *piVar4 + -1;
                  iVar15 = *piVar4;
                  UNLOCK();
                  pppuVar12 = pppuVar29;
                  goto joined_r0x0001407cf42b;
                }
              }
            }
            else {
              pppuVar32 = pppuVar29;
              if (pppuVar30 != (undefined ***)0x0) {
                LOCK();
                pppuVar12 = pppuVar30 + 1;
                *(int *)pppuVar12 = *(int *)pppuVar12 + -1;
                UNLOCK();
                if (*(int *)pppuVar12 == 0) {
                  (*(code *)**pppuVar30)(pppuVar30);
                  LOCK();
                  piVar4 = (int *)((longlong)pppuVar30 + 0xc);
                  *piVar4 = *piVar4 + -1;
                  iVar15 = *piVar4;
                  UNLOCK();
                  pppuVar12 = pppuVar30;
                  pppuVar30 = pppuVar29;
joined_r0x0001407cf42b:
                  pppuVar32 = pppuVar30;
                  if (iVar15 == 0) {
                    (*(code *)(*pppuVar12)[2])();
                  }
                }
              }
            }
          }
          pppuVar30 = *(undefined ****)(pcVar33 + 0x1c8);
          if (pppuVar30 == (undefined ***)0x0) {
LAB_1407cf45f:
            pppuVar30 = (undefined ***)0x0;
            pcVar33 = (code *)0x0;
          }
          else {
            iVar15 = *(int *)(pppuVar30 + 1);
            do {
              if (iVar15 == 0) goto LAB_1407cf45f;
              LOCK();
              iVar7 = *(int *)(pppuVar30 + 1);
              bVar37 = iVar15 == iVar7;
              if (bVar37) {
                *(int *)(pppuVar30 + 1) = iVar15 + 1;
                iVar7 = iVar15;
              }
              iVar15 = iVar7;
              UNLOCK();
            } while (!bVar37);
            pcVar33 = *(code **)(pcVar33 + 0x1c0);
          }
          if (pppuVar30 == pppuVar29) {
            if (pppuVar29 == (undefined ***)0x0) {
              pppuVar12 = (undefined ***)0x0;
            }
            else {
              LOCK();
              pppuVar2 = pppuVar30 + 1;
              *(int *)pppuVar2 = *(int *)pppuVar2 + -1;
              UNLOCK();
              pppuVar12 = pppuVar29;
              if (*(int *)pppuVar2 == 0) {
                local_e8 = pppuVar32;
                (*(code *)**pppuVar30)(pppuVar30);
                LOCK();
                piVar4 = (int *)((longlong)pppuVar30 + 0xc);
                *piVar4 = *piVar4 + -1;
                iVar15 = *piVar4;
                UNLOCK();
                pppuVar29 = pppuVar30;
                pppuVar32 = local_e8;
                goto joined_r0x0001407cf4c3;
              }
            }
          }
          else {
            pppuVar12 = pppuVar30;
            if (pppuVar29 != (undefined ***)0x0) {
              LOCK();
              pppuVar30 = pppuVar29 + 1;
              *(int *)pppuVar30 = *(int *)pppuVar30 + -1;
              UNLOCK();
              if (*(int *)pppuVar30 == 0) {
                local_e8 = pppuVar32;
                (*(code *)**pppuVar29)(pppuVar29);
                LOCK();
                piVar4 = (int *)((longlong)pppuVar29 + 0xc);
                *piVar4 = *piVar4 + -1;
                iVar15 = *piVar4;
                UNLOCK();
                pppuVar32 = local_e8;
joined_r0x0001407cf4c3:
                local_e8 = pppuVar32;
                if (iVar15 == 0) {
                  (*(code *)(*pppuVar29)[2])();
                }
              }
            }
          }
          pppuVar29 = pppuVar12;
        } while ((pcVar35 == (code *)0x0) && (pppuVar30 = pppuVar32, pcVar33 != (code *)0x0));
      }
      local_a0 = &local_c8;
      local_a8 = (code *)&local_b8;
      local_e8 = pppuVar32;
      local_d8 = pcVar35;
      local_c8 = ppuVar34;
      local_b8 = param_2;
      FUN_1498300ac(param_1 + 0x1b,local_ac,&local_a8);
      if (*(int *)(lVar18 + 0xa4) == 0) {
        piVar4 = (int *)(local_d0 + 0xc60);
        if (ppuVar34 != (undefined **)0x0) {
          LOCK();
          *(int *)(ppuVar34 + 1) = *(int *)(ppuVar34 + 1) + 1;
          UNLOCK();
        }
        iVar15 = *piVar4;
        local_c8 = param_1;
        uStack_c0 = ppuVar34;
        if (DAT_14c86a9fc == 0) {
          if (iVar15 != 2) {
            if (iVar15 != 1) goto LAB_1407cf389;
            DVar16 = FUN_140ad26c0();
            DVar17 = GetCurrentThreadId();
            if (DVar16 == DVar17) goto LAB_1407cf392;
            goto LAB_1407cf52e;
          }
LAB_1407cf392:
          FUN_1446605c6(&local_c8,&DAT_14ca85100);
        }
        else {
LAB_1407cf389:
          if (iVar15 == 0x10) goto LAB_1407cf392;
LAB_1407cf52e:
          if (DAT_14ca9a438 == '\0') {
            if ((DAT_14c86a9f8 != '\x01') || (*piVar4 == 2)) goto LAB_1407cf392;
            if (*piVar4 == 1) {
              DVar16 = FUN_140ad26c0();
              DVar17 = GetCurrentThreadId();
              if (DVar16 == DVar17) goto LAB_1407cf392;
            }
          }
          if (DAT_14ca9a43c == 0) {
            puVar28 = (undefined8 *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
            puVar24 = (uint *)*puVar28;
            if (puVar24 != (uint *)0x0) goto LAB_1407cf895;
            do {
              uVar27 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar27 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar27 | 1;
                __tlregdtor(&LAB_14465e119);
              }
              lVar18 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              puVar21 = *(undefined4 **)(lVar18 + 0x310);
              *(undefined8 *)(lVar18 + 0x310) = 0;
              if (puVar21 == (undefined4 *)0x0) {
                puVar21 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar21 = 0xffffffff;
              *(undefined4 **)(puVar21 + 0x10) = puVar21 + 0x16;
              puVar21[0x12] = 0;
              *puVar28 = puVar21;
              FUN_140217a48(puVar28);
              puVar24 = (uint *)*puVar28;
LAB_1407cf895:
              uVar36 = *(longlong *)(puVar24 + 0x10) + 7;
              uVar27 = puVar24[0x12];
              while( true ) {
                puVar19 = (undefined8 *)(uVar36 & 0xfffffffffffffff8);
                if (puVar19 + 0x17 <= puVar24 + 0x4000) {
                  *(undefined8 **)(puVar24 + 0x10) = puVar19 + 0x17;
                  puVar24[0x12] = uVar27 + 1;
                  iVar15 = 0;
                  FUN_1447247dc(puVar19,0);
                  *puVar19 = &PTR_FUN_14beac7b0;
                  puVar19[0x15] = local_c8;
                  puVar19[0x16] = uStack_c0;
                  uStack_c0 = (undefined **)0x0;
                  if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                    uVar27 = DAT_14c7585c8 >> 10 & 3;
                    if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar27 < 2) {
                      uVar36 = (ulonglong)(byte)(&DAT_149e38edc)[uVar27];
                      iVar15 = 0;
                    }
                    else {
                      uVar36 = 2;
                    }
                  }
                  else {
                    iVar15 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                             *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                    uVar36 = 5;
                  }
                  if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
                  }
                  puVar19[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar19[9] = puVar19;
                  puVar19[10] = puVar19;
                  lVar18 = *(longlong *)
                            (*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x2b8);
                  if (lVar18 == 0) {
                    uVar13 = 1;
                    if ((char)uVar36 != '\x06') {
                      uVar13 = uVar36;
                    }
                    uVar36 = uVar13;
                    uVar22 = 0;
                  }
                  else {
                    if ((char)uVar36 == '\x06') {
                      uVar36 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
                    }
                    uVar22 = *(undefined8 *)(lVar18 + 0x30);
                  }
                  puVar19[0xf] = uVar22;
                  puVar19[0x10] = uVar36 << 0x3b | 0xc00000527800b400;
                  *(int *)((longlong)puVar19 + 0x1c) = iVar15;
                  if (puVar19 == (undefined8 *)0x0) {
                    local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
                    FUN_1447439e4(0);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                    UNLOCK();
                    local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
                    FUN_1447439e4(puVar19);
                    LOCK();
                    piVar5 = (int *)(puVar19 + 1);
                    *piVar5 = *piVar5 + -1;
                    UNLOCK();
                    if (*piVar5 == 0) {
                      (**(code **)*puVar19)(puVar19,1);
                    }
                  }
                  goto LAB_1407cf5dd;
                }
                *(uint **)(puVar24 + 0x10) = puVar24 + 0x4000;
                LOCK();
                uVar6 = *puVar24;
                *puVar24 = *puVar24 + uVar27 + 1;
                UNLOCK();
                if ((uVar6 ^ uVar27) != 0xffffffff) break;
                puVar24 = (uint *)*puVar28;
                *puVar24 = 0xffffffff;
                *(uint **)(puVar24 + 0x10) = puVar24 + 0x16;
                puVar24[0x12] = 0;
                *puVar28 = puVar24;
                uVar36 = (longlong)puVar24 + 0x5f;
                uVar27 = 0;
              }
            } while( true );
          }
          local_98 = (undefined ***)0x0;
          local_88 = &PTR_LAB_14beac750;
          local_80 = local_c8;
          uStack_78 = (undefined4)uStack_c0;
          uStack_74 = uStack_c0._4_4_;
          uStack_c0 = (undefined **)0x0;
          local_a8 = (code *)&LAB_144660834;
          local_f8 = &local_a8;
          FUN_14005a792(&DAT_14ca9a440,L"UpdateWindowBackBufferCommand",&DAT_14cc2cb58);
          if (local_a8 != (code *)0x0) {
            pppuVar30 = local_98;
            if (local_98 == (undefined ***)0x0) {
              pppuVar30 = &local_88;
            }
            (*(code *)(*pppuVar30)[2])();
          }
        }
LAB_1407cf5dd:
        ppuVar1 = uStack_c0;
        if (uStack_c0 != (undefined **)0x0) {
          LOCK();
          ppuVar3 = uStack_c0 + 1;
          puVar10 = *ppuVar3;
          *(uint *)ppuVar3 = *(uint *)ppuVar3 - 1;
          UNLOCK();
          if (((ulonglong)puVar10 & 0x3fffffff) == 1) {
            ppuVar3 = uStack_c0 + 1;
            LOCK();
            uVar27 = *(uint *)ppuVar3;
            *(uint *)ppuVar3 = *(uint *)ppuVar3 | 0x40000000;
            UNLOCK();
            if ((uVar27 >> 0x1e & 1) == 0) {
              bVar8 = *(byte *)((longlong)uStack_c0 + 0xd);
              plVar20 = (longlong *)FUN_14001cc68(0x10,8);
              plVar20[1] = (longlong)ppuVar1;
              plVar25 = DAT_14ca843c0;
              plVar26 = DAT_14ca843c8;
              if ((bVar8 & 2) == 0) {
                do {
                  *plVar20 = (longlong)plVar25;
                  LOCK();
                  bVar37 = plVar25 != DAT_14ca843c0;
                  plVar26 = plVar20;
                  if (bVar37) {
                    plVar25 = DAT_14ca843c0;
                    plVar26 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar26;
                  UNLOCK();
                } while (bVar37);
              }
              else {
                do {
                  *plVar20 = (longlong)plVar26;
                  LOCK();
                  bVar37 = plVar26 != DAT_14ca843c8;
                  plVar25 = plVar20;
                  if (bVar37) {
                    plVar26 = DAT_14ca843c8;
                    plVar25 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar25;
                  UNLOCK();
                } while (bVar37);
              }
            }
          }
        }
        plVar25 = local_e0;
        lVar18 = DAT_14cc28ea0;
        iVar15 = *piVar4;
        if (iVar15 == 0x40000002) {
          uVar36 = 0;
        }
        else {
          bVar37 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar15 != 2)) {
            if (iVar15 == 1) {
              DVar16 = FUN_140ad26c0();
              DVar17 = GetCurrentThreadId();
              bVar37 = DVar16 == DVar17;
            }
            else {
              bVar37 = false;
            }
          }
          uVar36 = (ulonglong)(bVar37 ^ 1);
        }
        iVar15 = *(int *)(lVar18 + uVar36 * 4);
        if (iVar15 == 0) {
          uVar38 = 0;
          uVar39 = 0;
        }
        else {
          uVar38 = (undefined4)plVar25[0x7d];
          uVar39 = (undefined4)((ulonglong)plVar25[0x7d] >> 0x20);
          lVar18 = (**(code **)(*plVar25 + 0x60))(plVar25);
          plVar25[0x7d] = lVar18;
        }
        if (ppuVar34 != (undefined **)0x0) {
          LOCK();
          ppuVar1 = ppuVar34 + 1;
          puVar10 = *ppuVar1;
          *(uint *)ppuVar1 = *(uint *)ppuVar1 - 1;
          UNLOCK();
          if (((ulonglong)puVar10 & 0x3fffffff) == 1) {
            ppuVar1 = ppuVar34 + 1;
            LOCK();
            uVar27 = *(uint *)ppuVar1;
            *(uint *)ppuVar1 = *(uint *)ppuVar1 | 0x40000000;
            UNLOCK();
            if ((uVar27 >> 0x1e & 1) == 0) {
              bVar8 = *(byte *)((longlong)ppuVar34 + 0xd);
              plVar23 = (longlong *)FUN_14001cc68(0x10,8);
              plVar23[1] = (longlong)ppuVar34;
              plVar26 = DAT_14ca843c0;
              plVar20 = DAT_14ca843c8;
              if ((bVar8 & 2) == 0) {
                do {
                  *plVar23 = (longlong)plVar26;
                  LOCK();
                  bVar37 = plVar26 != DAT_14ca843c0;
                  plVar20 = plVar23;
                  if (bVar37) {
                    plVar26 = DAT_14ca843c0;
                    plVar20 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar20;
                  UNLOCK();
                } while (bVar37);
              }
              else {
                do {
                  *plVar23 = (longlong)plVar20;
                  LOCK();
                  bVar37 = plVar20 != DAT_14ca843c8;
                  plVar26 = plVar23;
                  if (bVar37) {
                    plVar20 = DAT_14ca843c8;
                    plVar26 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar26;
                  UNLOCK();
                } while (bVar37);
              }
            }
          }
        }
        local_a8 = local_d8;
        if (local_e8 == (undefined ***)0x0) {
          local_a0 = (undefined ***)0x0;
          FUN_1428f2718(plVar25);
        }
        else {
          LOCK();
          *(int *)(local_e8 + 1) = *(int *)(local_e8 + 1) + 1;
          UNLOCK();
          local_a0 = local_e8;
          LOCK();
          *(int *)(local_e8 + 1) = *(int *)(local_e8 + 1) + 1;
          UNLOCK();
          FUN_1428f2718(plVar25);
          LOCK();
          pppuVar30 = local_e8 + 1;
          *(int *)pppuVar30 = *(int *)pppuVar30 + -1;
          UNLOCK();
          if (*(int *)pppuVar30 == 0) {
            (*(code *)**local_e8)();
            LOCK();
            piVar4 = (int *)((longlong)local_e8 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (*(code *)(*local_e8)[2])();
            }
          }
        }
        if (iVar15 != 0) {
          plVar25[0x7d] = CONCAT44(uVar39,uVar38);
        }
        ppuVar34 = (undefined **)0x0;
      }
      DAT_14cc2ae74 = '\0';
      if (pppuVar29 != (undefined ***)0x0) {
        LOCK();
        pppuVar30 = pppuVar29 + 1;
        *(int *)pppuVar30 = *(int *)pppuVar30 + -1;
        UNLOCK();
        if (*(int *)pppuVar30 == 0) {
          (*(code *)**pppuVar29)(pppuVar29);
          LOCK();
          piVar4 = (int *)((longlong)pppuVar29 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (*(code *)(*pppuVar29)[2])(pppuVar29);
          }
        }
      }
      if (local_e8 == (undefined ***)0x0) goto LAB_1407cee2e;
      LOCK();
      pppuVar29 = local_e8 + 1;
      *(int *)pppuVar29 = *(int *)pppuVar29 + -1;
      UNLOCK();
      if (*(int *)pppuVar29 != 0) goto LAB_1407cee2e;
      (*(code *)**local_e8)();
      LOCK();
      piVar4 = (int *)((longlong)local_e8 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      pppuVar29 = local_e8;
      if (*piVar4 != 0) goto LAB_1407cee2e;
LAB_1407cee28:
      (*(code *)(*pppuVar29)[2])();
    }
LAB_1407cee2e:
    if (ppuVar34 == (undefined **)0x0) goto LAB_1407cee89;
  }
  LOCK();
  ppuVar1 = ppuVar34 + 1;
  puVar10 = *ppuVar1;
  *(uint *)ppuVar1 = *(uint *)ppuVar1 - 1;
  UNLOCK();
  if (((ulonglong)puVar10 & 0x3fffffff) == 1) {
    ppuVar1 = ppuVar34 + 1;
    LOCK();
    uVar27 = *(uint *)ppuVar1;
    *(uint *)ppuVar1 = *(uint *)ppuVar1 | 0x40000000;
    UNLOCK();
    if ((uVar27 >> 0x1e & 1) == 0) {
      bVar8 = *(byte *)((longlong)ppuVar34 + 0xd);
      plVar20 = (longlong *)FUN_14001cc68(0x10,8);
      plVar20[1] = (longlong)ppuVar34;
      plVar25 = DAT_14ca843c0;
      plVar26 = DAT_14ca843c8;
      if ((bVar8 & 2) == 0) {
        do {
          *plVar20 = (longlong)plVar25;
          LOCK();
          bVar37 = plVar25 != DAT_14ca843c0;
          plVar26 = plVar20;
          if (bVar37) {
            plVar25 = DAT_14ca843c0;
            plVar26 = DAT_14ca843c0;
          }
          DAT_14ca843c0 = plVar26;
          UNLOCK();
        } while (bVar37);
      }
      else {
        do {
          *plVar20 = (longlong)plVar26;
          LOCK();
          bVar37 = plVar26 != DAT_14ca843c8;
          plVar25 = plVar20;
          if (bVar37) {
            plVar26 = DAT_14ca843c8;
            plVar25 = DAT_14ca843c8;
          }
          DAT_14ca843c8 = plVar25;
          UNLOCK();
        } while (bVar37);
      }
    }
  }
LAB_1407cee89:
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407cfc60 FUN_1407cfc60 body=275 status=ok
// SIG undefined FUN_1407cfc60(void)

void FUN_1407cfc60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 local_8c [4];
  undefined1 local_88 [64];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x800000000;
  if ((*(byte *)(param_2 + 0x28) & 4) == 0) {
    FUN_1407cff3a(param_2,local_88);
    FUN_1407cfd74(param_1 + 0x60,local_40 & 0xffffffff);
    if (0 < (int)local_40) {
      lVar2 = 0;
      lVar1 = 0;
      do {
        local_98 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          local_98 = local_88;
        }
        local_98 = local_98 + lVar2;
        FUN_14794df66(param_1 + 0x60,local_8c,&local_98,0);
        lVar1 = lVar1 + 1;
        lVar2 = lVar2 + 8;
      } while (lVar1 < (int)local_40);
    }
  }
  else {
    FUN_14793dc6e(param_1 + 0x60,local_88);
    FUN_1407cff3a(param_2,local_88);
  }
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407cfd74 FUN_1407cfd74 body=107 status=ok
// SIG undefined FUN_1407cfd74(void)

void FUN_1407cfd74(longlong param_1,uint param_2)

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
LAB_1407cfdc3:
      FUN_14056443c(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_14794d34a(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_1407cfdc3;
  FUN_1407cfde0(param_1);
  FUN_14056443c(param_1,param_2);
  return;
}



// FUNCTION 1407cfde0 FUN_1407cfde0 body=345 status=ok
// SIG undefined FUN_1407cfde0(void)

void FUN_1407cfde0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x84 + (longlong)iVar4 * 0x88) * 4) =
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



// FUNCTION 1407cff3a FUN_1407cff3a body=436 status=ok
// SIG undefined FUN_1407cff3a(void)

longlong * FUN_1407cff3a(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x48) << 3,(longlong)*(int *)(param_2 + 0x4c) << 3
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 0x48);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 0x48) = 0, *(int *)(param_2 + 0x4c) != 0)) {
      FUN_1407d00f0(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0x48) = local_34;
    lVar5 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x40) == 0) {
        lVar4 = param_2;
      }
      (**(code **)(*param_1 + 0x160))(param_1,lVar4 + lVar5);
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 8;
    } while (lVar7 < *(int *)(param_2 + 0x48));
  }
  else {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if ((*(uint *)(param_2 + 0x4c) == local_34) || (FUN_1407d00f0(param_2), 0 < (int)local_34)) {
      iVar6 = 0;
      do {
        iVar2 = *(int *)(param_2 + 0x48);
        *(uint *)(param_2 + 0x48) = iVar2 + 1U;
        if (*(uint *)(param_2 + 0x4c) < iVar2 + 1U) {
          FUN_146276acc(param_2,iVar2);
        }
        lVar5 = *(longlong *)(param_2 + 0x40);
        if (*(longlong *)(param_2 + 0x40) == 0) {
          lVar5 = param_2;
        }
        *(undefined8 *)(lVar5 + (longlong)iVar2 * 8) = 0;
        (**(code **)(*param_1 + 0x160))(param_1);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1407d00f0 FUN_1407d00f0 body=101 status=ok
// SIG undefined FUN_1407d00f0(void)

void FUN_1407d00f0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (uVar2 = 8, 8 < param_2)) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = (int)uVar2;
  FUN_1407d0156(param_1,*(undefined4 *)(param_1 + 0x48),uVar2,8);
  return;
}



// FUNCTION 1407d0156 FUN_1407d0156 body=132 status=ok
// SIG undefined FUN_1407d0156(void)

void FUN_1407d0156(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 1407d01da FUN_1407d01da body=342 status=ok
// SIG undefined FUN_1407d01da(void)

undefined8 FUN_1407d01da(undefined8 *param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949538) {
    FUN_144b3d300(&DAT_14c949538);
    if (DAT_14c949538 == -1) {
      FUN_140056680(&DAT_14c949528,L"\"\',|&!~\n\r\t@#(){}[]=;^%$`");
      atexit((_func_5014 *)&LAB_1427dfc47);
      _Init_thread_footer(&DAT_14c949538);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949550) {
    FUN_144b3d300(&DAT_14c949550);
    if (DAT_14c949550 == -1) {
      FUN_140056680(&DAT_14c949540,L".\n\r\t");
      atexit((_func_5014 *)&LAB_1427dfc58);
      _Init_thread_footer(&DAT_14c949550);
    }
  }
  puVar3 = &DAT_14c949540;
  if ((param_2 & 0x31) == 0) {
    puVar3 = &DAT_14c949528;
  }
  cVar1 = FUN_1407d0330(*param_1,puVar3,0,0);
  if (cVar1 != '\0') {
    cVar1 = FUN_1407d0330(param_1[1],&DAT_14c949528,0,0);
    if (cVar1 != '\0') {
      uVar2 = FUN_1407d0330(param_1[2],&DAT_14c949528,0,0);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1407d0330 FUN_1407d0330 body=196 status=ok
// SIG undefined FUN_1407d0330(void)

undefined4
FUN_1407d0330(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_898 [32];
  undefined1 *local_878;
  undefined4 local_870;
  undefined1 *local_868;
  undefined1 *local_860;
  undefined1 *local_858;
  char local_850;
  undefined1 local_848 [2070];
  undefined1 local_32 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_898;
  local_868 = local_848;
  local_850 = '\0';
  local_858 = local_32;
  local_878 = param_1;
  local_860 = local_868;
  FUN_14005eb5c(&local_878,&local_868);
  local_878 = local_868;
  local_870 = (undefined4)((ulonglong)((longlong)local_860 - (longlong)local_868) >> 1);
  uVar1 = FUN_144a2f95e(&local_878,param_2,param_3,param_4);
  if (local_850 == '\x01') {
    FUN_1400020a8(local_868);
  }
  if ((local_30 ^ (ulonglong)auStack_898) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407d03f6 FUN_1407d03f6 body=55 status=ok
// SIG undefined FUN_1407d03f6(void)

void FUN_1407d03f6(longlong *param_1)

{
  FUN_1407d042e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1407d042e FUN_1407d042e body=123 status=ok
// SIG undefined FUN_1407d042e(void)

void FUN_1407d042e(longlong param_1,int param_2)

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



// FUNCTION 1407d0508 FUN_1407d0508 body=13 status=ok
// SIG undefined FUN_1407d0508(void)

void FUN_1407d0508(undefined8 param_1,undefined4 param_2)

{
  FUN_1407d0516(param_1,4,param_2);
  return;
}



// FUNCTION 1407d0516 FUN_1407d0516 body=169 status=ok
// SIG undefined FUN_1407d0516(void)

void FUN_1407d0516(longlong param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_1 + 0x168) < param_2) {
    plVar2 = (longlong *)FUN_1407d0668();
    uVar1 = 0;
    if (0 < (int)*(uint *)(param_1 + 0x168)) {
      uVar1 = *(uint *)(param_1 + 0x168);
    }
    if ((int)uVar1 <= param_2) {
      uVar4 = (ulonglong)uVar1;
      uVar3 = uVar4 << 4 | 8;
      do {
        if ((longlong)uVar4 < (longlong)(int)plVar2[1]) {
          FUN_1407d05c0(param_1,*plVar2 + uVar3);
        }
        uVar4 = uVar4 + 1;
        uVar3 = uVar3 + 0x10;
      } while (param_2 + 1 != uVar4);
    }
    *(int *)(param_1 + 0x168) = param_2;
  }
  *(undefined4 *)(param_1 + 0x16c) = param_3;
  if (0 < *(int *)(param_1 + 0x170)) {
    return;
  }
  FUN_1407d097e(param_1);
  return;
}



// FUNCTION 1407d05c0 FUN_1407d05c0 body=168 status=ok
// SIG undefined FUN_1407d05c0(void)

void FUN_1407d05c0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x40);
  lVar3 = (longlong)iVar1;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar4) == *param_2) {
        return;
      }
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 - lVar4 != 0);
  }
  *(uint *)(param_1 + 0x40) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
    FUN_1446f84a2((longlong *)(param_1 + 0x38),iVar1);
    lVar2 = *(longlong *)(param_1 + 0x38);
  }
  *(longlong *)(lVar2 + lVar3 * 8) = *param_2;
  if ((longlong)*(int *)(param_1 + 0x60) == 0) {
    bVar5 = false;
  }
  else {
    lVar2 = 0;
    bVar5 = false;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x58) + lVar2) == *param_2) {
        bVar5 = 0 < *(int *)(*(longlong *)(param_1 + 0x58) + 0x10 + lVar2);
        break;
      }
      lVar2 = lVar2 + 0x18;
    } while ((longlong)*(int *)(param_1 + 0x60) * 0x18 != lVar2);
  }
  *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) | bVar5;
  return;
}



// FUNCTION 1407d0668 FUN_1407d0668 body=789 status=ok
// SIG undefined FUN_1407d0668(void)

longlong * FUN_1407d0668(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c9a1b00 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_14001cc68(0x10,0x10);
    *plVar2 = 0;
    plVar2[1] = 0;
    DAT_14c9a1b00 = plVar2;
    FUN_1446ddc76(&local_40,&DAT_14a1795a8,1);
    FUN_1457475bc(&local_34,local_40,0);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_145747620(plVar2,iVar1);
    }
    lVar3 = *plVar2;
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined4 *)(lVar3 + lVar4) = 0;
    *(undefined4 *)(lVar3 + 0xc + lVar4) = local_2c;
    *(undefined8 *)(lVar3 + 4 + lVar4) = local_34;
    plVar2 = DAT_14c9a1b00;
    FUN_1446ddc76(&local_48,"WarmUp",1);
    FUN_1457475bc(&local_34,local_48,0);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_145747620(plVar2,iVar1);
    }
    lVar3 = *plVar2;
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined4 *)(lVar3 + lVar4) = 1;
    *(undefined4 *)(lVar3 + 0xc + lVar4) = local_2c;
    *(undefined8 *)(lVar3 + 4 + lVar4) = local_34;
    plVar2 = DAT_14c9a1b00;
    FUN_1446ddc76(&local_50,"PreSpawn",1);
    FUN_1457475bc(&local_34,local_50,0);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_145747620(plVar2,iVar1);
    }
    lVar3 = *plVar2;
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined4 *)(lVar3 + lVar4) = 2;
    *(undefined4 *)(lVar3 + 0xc + lVar4) = local_2c;
    *(undefined8 *)(lVar3 + 4 + lVar4) = local_34;
    plVar2 = DAT_14c9a1b00;
    FUN_1446ddc76(&local_58,"PostSpawn",1);
    FUN_1457475bc(&local_34,local_58,0);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_145747620(plVar2,iVar1);
    }
    lVar3 = *plVar2;
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined4 *)(lVar3 + lVar4) = 3;
    *(undefined4 *)(lVar3 + 0xc + lVar4) = local_2c;
    *(undefined8 *)(lVar3 + 4 + lVar4) = local_34;
    plVar2 = DAT_14c9a1b00;
    FUN_1446ddc76(&local_60,"Active",1);
    FUN_1457475bc(&local_34,local_60,0);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_145747620(plVar2,iVar1);
    }
    lVar3 = *plVar2;
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined4 *)(lVar3 + lVar4) = 4;
    *(undefined8 *)(lVar3 + 4 + lVar4) = local_34;
    *(undefined4 *)(lVar3 + 0xc + lVar4) = local_2c;
    FUN_1446f470e(&local_68,L"NexusBundle",1);
    FUN_1457475bc(&local_34,local_68,2);
    if ((longlong)(int)DAT_14c9a1b00[1] != 0) {
      lVar4 = (longlong)(int)DAT_14c9a1b00[1] << 4;
      lVar3 = *DAT_14c9a1b00 + 8;
      do {
        local_70 = 0;
        FUN_145747562(lVar3 + -4,&local_70);
        FUN_145747562(&local_34,lVar3);
        lVar3 = lVar3 + 0x10;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14c9a1b00;
}



// FUNCTION 1407d097e FUN_1407d097e body=1249 status=ok
// SIG undefined FUN_1407d097e(void)

void FUN_1407d097e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_d8 [32];
  undefined8 **local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined1 local_88 [8];
  longlong *local_80;
  longlong local_78 [3];
  longlong *plStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar8 = *(int *)(param_1 + 0x74);
  if (((iVar8 == 0) || (uVar3 = *(uint *)(param_1 + 0x70), (int)uVar3 < 0)) ||
     (DAT_14c9647dc <= (int)uVar3)) goto LAB_1407d09f2;
  lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  if (((lVar12 == 0) || (*(int *)(lVar12 + 0x10) != iVar8)) ||
     ((*(uint *)(lVar12 + 8) & 0x10200000) != 0)) goto LAB_1407d09f2;
  if (*(char *)(param_1 + 0x30) == '\0') {
    if (*(char *)(param_1 + 0x31) != '\x01') {
      if ((*(longlong *)(param_1 + 0x78) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x78) + 0x10) == '\x01')) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
      }
      goto LAB_1407d09f2;
    }
    *(undefined2 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 1;
LAB_1407d0b7d:
    uVar3 = *(uint *)(param_1 + 0x70);
    plVar10 = (longlong *)0x0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar9 = (undefined8 *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar9 == (undefined8 *)0x0) ||
         ((*(int *)(puVar9 + 2) != iVar8 || ((*(uint *)(puVar9 + 1) & 0x10200000) != 0))))
      goto LAB_1407d0b62;
      plVar10 = (longlong *)*puVar9;
    }
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    local_78[2] = 0;
    plStack_60 = (longlong *)0x0;
    puVar9 = (undefined8 *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (((puVar9 == (undefined8 *)0x0) || (*(int *)(puVar9 + 2) != iVar8)) ||
       ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)*puVar9;
    }
    (**(code **)(*plVar10 + 0x2d0))(plVar10,param_1 + 0x48,local_78 + 2,param_1 + 0x58);
    local_78[0] = 0;
    local_78[1] = 0;
    if (*(int *)(param_1 + 0x74) == 0) {
LAB_1407d0d92:
      plVar10 = (longlong *)0x0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x70);
      plVar10 = (longlong *)0x0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        puVar9 = (undefined8 *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((puVar9 == (undefined8 *)0x0) ||
           ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x74) ||
            ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_1407d0d92;
        plVar10 = (longlong *)*puVar9;
      }
    }
    local_b8 = &local_98;
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    local_b0 = 0;
    (**(code **)(*plVar10 + 0x370))(0,local_88,param_1 + 0x48,local_78);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_80 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    iVar8 = *(int *)(param_1 + 0x74);
    *(undefined2 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 1;
    if (iVar8 != 0) goto LAB_1407d0b7d;
LAB_1407d0b62:
    plVar10 = (longlong *)0x0;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x68);
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,4,0x10);
  local_a0 = 4;
  plVar5 = *(longlong **)(param_1 + 0x10);
  if (plVar5 == (longlong *)0x0) {
LAB_1407d0da0:
    *local_a8 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    local_a8[2] = lVar11;
    *local_a8 = &PTR_FUN_14a914c20;
    local_a8[3] = 0;
    local_a8[4] = 0;
    local_a8[5] = &LAB_140918f3c;
    *(undefined4 *)(local_a8 + 6) = 0;
  }
  else {
    iVar8 = (int)plVar5[1];
    do {
      if (iVar8 == 0) goto LAB_1407d0da0;
      LOCK();
      iVar7 = (int)plVar5[1];
      bVar13 = iVar8 == iVar7;
      if (bVar13) {
        *(int *)(plVar5 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar13);
    uVar6 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *local_a8 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    local_a8[2] = lVar11;
    *local_a8 = &PTR_FUN_14a914c20;
    local_a8[3] = uVar6;
    local_a8[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    local_a8[5] = &LAB_140918f3c;
    *(undefined4 *)(local_a8 + 6) = 0;
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  local_b8 = &local_a8;
  local_b0 = uVar4;
  (**(code **)(*plVar10 + 0x370))(plVar10,local_78 + 2,param_1 + 0x48,param_1 + 0x38);
  plVar10 = plStack_60;
  if ((longlong *)(param_1 + 0x78) != local_78 + 2) {
    *(longlong *)(param_1 + 0x78) = local_78[2];
    local_78[2] = 0;
    plVar5 = *(longlong **)(param_1 + 0x80);
    if (plStack_60 != plVar5) {
      plStack_60 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x80) = plVar10;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar5 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
    }
  }
  plVar10 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
LAB_1407d09f2:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407d0e7d FUN_1407d0e7d body=152 status=ok
// SIG undefined FUN_1407d0e7d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407d0e7d(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a1260) {
    FUN_144b3d300(&DAT_14c9a1260);
    if (DAT_14c9a1260 == -1) {
      DAT_14c9a1230 = 0;
      _DAT_14c9a1238 = 0;
      DAT_14c9a1210 = 0;
      _DAT_14c9a1218 = 0;
      _DAT_14c9a123c = 0xffffffff00000080;
      _DAT_14c9a1244 = 0;
      DAT_14c9a1250 = 0;
      _DAT_14c9a1258 = 0;
      atexit(FUN_142b1bd8f);
      _Init_thread_footer(&DAT_14c9a1260);
      return;
    }
  }
  return;
}



// FUNCTION 1407d0f16 FUN_1407d0f16 body=351 status=ok
// SIG undefined FUN_1407d0f16(void)

void FUN_1407d0f16(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  uVar2 = DAT_14c9a1698;
  puVar6 = DAT_14c9a1690;
  if (0 < (int)param_1[1]) {
    lVar7 = (longlong)(int)DAT_14c9a1698;
    if (lVar7 != 0) {
      lVar5 = lVar7 * 0x18;
      puVar8 = DAT_14c9a1690;
      do {
        if (*(longlong *)((int *)*puVar8 + 1) == *(longlong *)(param_2 + 1)) {
          if (puVar8 != (undefined8 *)0x0) {
            iVar3 = *param_2;
            if (iVar3 != *(int *)*puVar8) {
              return;
            }
            goto LAB_1407d0fc4;
          }
          break;
        }
        puVar8 = puVar8 + 3;
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_14001cc68(0xc,0x10);
    *(int *)(puVar4 + 1) = param_2[2];
    *puVar4 = *(undefined8 *)param_2;
    DAT_14c9a1698 = uVar2 + 1;
    if (DAT_14c9a169c < DAT_14c9a1698) {
      FUN_1457476a6(uVar2);
      puVar6 = DAT_14c9a1690;
    }
    puVar8 = puVar6 + lVar7 * 3;
    *puVar8 = puVar4;
    puVar8[1] = 0;
    puVar8[2] = 0;
    iVar3 = *param_2;
LAB_1407d0fc4:
    if (iVar3 == 2) {
      if ((longlong)(int)param_1[1] != 0) {
        lVar7 = *param_1;
        lVar5 = (longlong)(int)param_1[1] << 3;
        do {
          FUN_140721fbe(puVar8 + 1,lVar7);
          lVar7 = lVar7 + 8;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      plVar1 = puVar8 + 1;
      iVar3 = *(int *)(puVar8 + 2);
      if ((int)param_1[1] + iVar3 == 1) {
        puVar6 = (undefined8 *)*param_1;
        *(uint *)(puVar8 + 2) = iVar3 + 1U;
        if (*(uint *)((longlong)puVar8 + 0x14) < iVar3 + 1U) {
          FUN_1446f84a2(plVar1,iVar3);
        }
        puVar8 = (undefined8 *)((longlong)iVar3 * 8 + *plVar1);
      }
      else {
        if (iVar3 != 0) {
          return;
        }
        puVar6 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar8 + 2) = 1;
        if (*(int *)((longlong)puVar8 + 0x14) == 0) {
          FUN_1446f84a2(plVar1,0);
        }
        puVar8 = (undefined8 *)*plVar1;
      }
      *puVar8 = *puVar6;
    }
  }
  return;
}



// FUNCTION 1407d1076 FUN_1407d1076 body=10001 status=ok
// SIG undefined FUN_1407d1076(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1407d1076(longlong *param_1,longlong param_2,double *param_3,undefined1 param_4,
                      longlong *param_5,int param_6)

{
  int *piVar1;
  longlong *plVar2;
  float *pfVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  undefined1 (*pauVar22) [16];
  LPVOID pvVar23;
  longlong lVar24;
  longlong lVar25;
  double *pdVar26;
  double *pdVar27;
  uint uVar28;
  uint uVar29;
  longlong *plVar30;
  uint uVar31;
  int iVar32;
  longlong *plVar33;
  longlong lVar34;
  ulonglong uVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar46;
  undefined1 auVar45 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar53;
  double dVar54;
  undefined1 auVar52 [16];
  undefined4 uVar56;
  undefined1 auVar55 [16];
  undefined4 uVar58;
  double dVar57;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  undefined1 auStack_b48 [32];
  float *local_b28;
  double *local_b20;
  undefined8 local_b18;
  undefined1 local_b09;
  undefined1 local_b08 [24];
  double local_af0;
  undefined1 local_ae8 [16];
  longlong *local_ad8;
  longlong *local_ad0;
  double local_ac8;
  longlong local_ac0;
  undefined1 local_ab8 [24];
  longlong local_aa0;
  double local_a98;
  double dStack_a90;
  undefined1 local_a88 [24];
  longlong local_a70;
  double local_a68;
  double dStack_a60;
  double local_a58;
  double dStack_a50;
  double local_a48;
  double dStack_a40;
  double local_a38;
  double dStack_a30;
  double local_a28;
  double dStack_a20;
  double local_a18;
  double dStack_a10;
  double local_a08;
  double local_9f8;
  double dStack_9f0;
  double local_9e8;
  undefined8 local_9d8;
  double dStack_9d0;
  undefined1 local_9c8 [16];
  undefined1 local_9b8 [16];
  double local_9a8;
  longlong *local_9a0;
  undefined4 local_998;
  undefined8 local_990;
  undefined1 local_934 [12];
  double local_928;
  double dStack_920;
  double local_918;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  longlong local_8a0;
  double local_898;
  double dStack_890;
  double local_888;
  double dStack_880;
  double local_878;
  double dStack_870;
  double local_868;
  double dStack_860;
  undefined1 local_858 [16];
  undefined1 local_848 [16];
  undefined1 local_838 [16];
  float local_828;
  float fStack_824;
  undefined8 uStack_820;
  float local_818;
  float fStack_814;
  undefined8 uStack_810;
  float local_808;
  float fStack_804;
  float fStack_800;
  float fStack_7fc;
  float local_7f8;
  float fStack_7f4;
  float fStack_7f0;
  float fStack_7ec;
  float local_7e8;
  float fStack_7e4;
  float fStack_7e0;
  float fStack_7dc;
  float local_7d8;
  float fStack_7d4;
  float fStack_7d0;
  float fStack_7cc;
  float local_7c8;
  float fStack_7c4;
  float fStack_7c0;
  float fStack_7bc;
  double local_7b8;
  double dStack_7b0;
  undefined1 local_7a8 [16];
  undefined3 uStack_78e;
  undefined5 local_78b;
  undefined3 uStack_786;
  undefined5 uStack_783;
  undefined3 uStack_77e;
  double local_77b;
  undefined3 uStack_773;
  undefined5 local_770;
  undefined3 uStack_76b;
  undefined5 uStack_768;
  undefined3 uStack_763;
  double local_760;
  undefined1 local_758 [32];
  float local_738;
  float fStack_734;
  float fStack_730;
  undefined8 local_728;
  float fStack_720;
  float local_718;
  longlong local_710;
  ulonglong local_708;
  longlong local_700;
  undefined8 local_6f8;
  undefined1 local_6e8 [272];
  undefined8 local_5d8;
  float fStack_5d0;
  float fStack_5cc;
  double *local_3f8;
  undefined8 local_3f0;
  longlong local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  longlong *local_3b0;
  undefined4 local_3a8;
  undefined8 local_3a0;
  char local_398;
  longlong local_390;
  undefined4 local_388;
  char local_380;
  longlong local_378;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  undefined4 local_358;
  double local_350;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_338;
  float fStack_334;
  float fStack_330;
  undefined4 uStack_32c;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  longlong local_318;
  undefined4 local_308;
  undefined2 local_304;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
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
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  undefined3 local_1f8;
  undefined5 uStack_1f5;
  undefined3 uStack_1f0;
  undefined5 uStack_1ed;
  undefined3 uStack_1e8;
  undefined5 uStack_1e5;
  undefined3 uStack_1e0;
  undefined5 uStack_1dd;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_b48;
  iVar19 = 100;
  if (param_6 < 100) {
    iVar19 = param_6;
  }
  local_af0 = (double)CONCAT44(local_af0._4_4_,iVar19);
  cVar15 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar15 != '\0') {
    *(undefined1 *)(param_2 + 0x328) = 0xff;
    *(undefined1 *)(param_2 + 0x330) = 1;
    goto LAB_1407d1a72;
  }
  if ((char)param_1[0x5c] == '\x01') {
    *(undefined1 *)(param_2 + 0x328) = 0xff;
    FUN_1402fa56e(param_2,param_1 + 0x38);
    *(undefined1 *)(param_2 + 0x330) = 0;
    goto LAB_1407d1a72;
  }
  FUN_1402f9d0a(&local_8a0,param_1[2]);
  if ((*(longlong *)(local_8a0 + 0x78) == 0) ||
     (dVar54 = *(double *)(*(longlong *)(local_8a0 + 0x78) + 0x140), dVar54 == 0.0)) {
    *(undefined1 *)(param_2 + 0x328) = 0xff;
    *(undefined1 *)(param_2 + 0x330) = 1;
  }
  else {
    uVar18 = 0xffffffff;
    iVar19 = -1;
    if ((int)param_1[0x2e] == 1) {
      iVar19 = (int)param_1[0x2d];
    }
    lVar21 = *(longlong *)(*(longlong *)((longlong)dVar54 + 0x38) + (longlong)iVar19 * 0x120);
    local_908 = *(undefined8 *)(lVar21 + 0x60);
    uStack_900 = *(undefined8 *)(lVar21 + 0x68);
    local_8f8 = *(undefined8 *)(lVar21 + 0x70);
    uStack_8f0 = *(undefined8 *)(lVar21 + 0x78);
    local_8e8 = *(undefined8 *)(lVar21 + 0x80);
    uStack_8e0 = *(undefined8 *)(lVar21 + 0x88);
    local_8d8 = *(undefined8 *)(lVar21 + 0x90);
    uStack_8d0 = *(undefined8 *)(lVar21 + 0x98);
    local_8c8 = *(undefined8 *)(lVar21 + 0xa0);
    uStack_8c0 = *(undefined8 *)(lVar21 + 0xa8);
    local_8b8 = *(undefined8 *)(lVar21 + 0xb0);
    uStack_8b0 = *(undefined8 *)(lVar21 + 0xb8);
    FUN_144b43240(&local_5d8,&local_908);
    dVar48 = (double)fStack_5d0;
    local_378 = param_1[0x6c];
    if ((int)param_1[0x2e] == 1) {
      uVar18 = (undefined4)param_1[0x2d];
    }
    fStack_31c = DAT_149e1ef30._12_4_;
    local_328 = (float)DAT_149e1ef30;
    fStack_324 = DAT_149e1ef30._4_4_;
    fStack_320 = DAT_149e1ef30._8_4_;
    fVar61 = (float)(double)param_1[0x2f] * local_328 - (float)local_8d8;
    fVar62 = (float)(double)param_1[0x30] * fStack_324 - local_8d8._4_4_;
    fVar64 = (float)(double)param_1[0x31] * fStack_320 - (float)uStack_8d0;
    fVar65 = (float)(double)param_1[0x31] * fStack_31c - uStack_8d0._4_4_;
    fVar63 = fVar62 * local_8e8._4_4_;
    auVar45._4_4_ = (float)uStack_8f0 * fVar64;
    auVar45._0_4_ = (float)uStack_900 * fVar64;
    auVar45._8_4_ = uStack_900._4_4_ * fVar65;
    auVar45._12_4_ = uStack_8f0._4_4_ * fVar65;
    auVar59._4_4_ = fVar63;
    auVar59._0_4_ = fVar61 * (float)local_8e8;
    auVar59._8_4_ = fVar64 * (float)uStack_8e0;
    auVar59._12_4_ = fVar65 * uStack_8e0._4_4_;
    auVar59 = blendps(auVar45,auVar59,0xc);
    local_368 = local_908._4_4_ * fVar62 + (float)local_908 * fVar61 + auVar59._0_4_;
    fStack_364 = local_8f8._4_4_ * fVar62 + (float)local_8f8 * fVar61 + auVar59._4_4_;
    fStack_360 = fVar63 + fVar61 * (float)local_8e8 + auVar59._8_4_;
    fStack_35c = fVar65 * uStack_8e0._4_4_ + fVar63 + auVar59._12_4_;
    fStack_330 = (float)(double)param_1[100];
    fStack_334 = (float)(double)param_1[99];
    local_338 = (float)(double)param_1[0x62];
    dVar66 = (double)fStack_5cc;
    dVar69 = (double)local_5d8._4_4_;
    dVar36 = (double)(float)local_5d8;
    dVar44 = (double)(float)local_8d8 * 100.0;
    dVar49 = (double)local_8d8._4_4_ * 100.0;
    dVar68 = (double)(float)uStack_8d0 * 100.0;
    local_348 = (float)(double)param_1[0x5e] * local_328;
    fStack_344 = (float)(double)param_1[0x5f] * fStack_324;
    fStack_340 = (float)(double)param_1[0x60] * fStack_320;
    fStack_33c = (float)(double)param_1[0x60] * fStack_31c;
    local_328 = (float)(double)param_1[0x66] * local_328;
    fStack_324 = (float)(double)param_1[0x67] * fStack_324;
    fStack_320 = (float)(double)param_1[0x68] * fStack_320;
    fStack_31c = (float)(double)param_1[0x68] * fStack_31c;
    local_318 = param_1[0x6a];
    uStack_32c = 0;
    local_308 = (undefined4)param_1[0x5d];
    local_304 = 0;
    local_3f8 = (double *)0x0;
    local_3f0 = 0x400000000;
    local_398 = '\0';
    local_380 = '\0';
    local_ac8 = dVar54;
    local_5d8._0_4_ = local_338;
    local_5d8._4_4_ = fStack_334;
    local_358 = uVar18;
    local_350 = dVar54;
    FUN_144b433d0(local_6e8);
    if ((char)param_1[0x83] == '\x01') {
      *(undefined1 *)(param_1 + 0x83) = 0;
    }
    local_ad0 = param_1 + 2;
    local_b08._8_4_ = SUB84(dVar69,0);
    local_b08._0_8_ = dVar36;
    local_b08._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
    dVar57 = 0.0;
    local_928 = *param_3;
    dStack_920 = param_3[1];
    local_ad8 = param_1 + 0x6f;
    local_918 = param_3[2] - (double)*(float *)((longlong)param_3 + 0x4c);
    dVar69 = 1.0;
    dVar53 = 0.0;
    dVar54 = 1.0;
    dVar36 = 1.0;
    uVar17 = 0x7fffffff;
    uVar56 = 0;
    uVar18 = 0x7fffffff;
    uVar58 = 0x7fffffff;
    uVar16 = 0;
    while (uVar16 == 0) {
      if (local_af0._0_4_ <= (int)(uint)local_3f0) goto LAB_1407d2dc9;
      local_710 = 0;
      local_708 = 0x8000000000000000;
      local_700 = 0;
      local_6f8 = 0x8000000000000000;
      uVar16 = FUN_144b43850(local_6e8,local_758);
      if (uVar16 < 2) {
        if ((longlong)(int)local_708 != 0) {
          local_aa0 = local_710;
          local_a70 = (longlong)(int)local_708 * 0x30;
          lVar21 = 0;
          local_b09 = param_4;
          do {
            lVar24 = local_aa0;
            dVar43 = local_ac8;
            local_a98 = dVar69;
            dStack_a90 = dVar53;
            FUN_144b44130(local_934,local_ac8,*(undefined4 *)(local_aa0 + 0x10 + lVar21),
                          *(undefined4 *)(local_aa0 + 0x14 + lVar21));
            local_b28 = (float *)CONCAT44(local_b28._4_4_,**(undefined4 **)(lVar24 + 0x18 + lVar21))
            ;
            local_ac0 = lVar21;
            FUN_1407d3844(&local_9d8,local_ad0,dVar43,local_934);
            iVar19 = (int)local_9d8;
            if ((((int)local_9d8 == -1) || (local_9c8._0_8_ == 0)) || (local_9c8._8_8_ == 0)) {
              FUN_1402fd888(param_1);
              *(undefined1 *)(param_2 + 0x328) = 0xff;
              *(undefined1 *)(param_2 + 0x330) = 1;
              FUN_147e6a6c8(local_758);
              goto LAB_1407d19f3;
            }
            iVar20 = (uint)local_3f0;
            uVar35 = local_3f0 & 0xffffffff;
            local_a88._8_4_ = SUB84(dVar36,0);
            local_a88._0_8_ = dVar54;
            local_a88._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
            local_a68 = dVar68;
            dStack_a60 = dVar57;
            if (uVar35 == 0) {
              memcpy(local_ad8,&local_9d8,0xa0);
              *(undefined1 *)(param_1 + 0x83) = 1;
              pdVar27 = &local_928;
            }
            else {
              pdVar27 = &local_928;
              if (0 < (int)(uint)local_3f0) {
                pdVar27 = local_3f8;
                if (local_3f8 == (double *)0x0) {
                  pdVar27 = (double *)&local_5d8;
                }
                pdVar27 = pdVar27 + uVar35 * 0xf + -0xf;
              }
            }
            local_9e8 = pdVar27[2];
            local_9f8 = *pdVar27;
            dStack_9f0 = pdVar27[1];
            local_760 = DAT_14c8464f0;
            local_770 = SUB85(DAT_14c8464e0,0);
            uStack_76b = (undefined3)((ulonglong)DAT_14c8464e0 >> 0x28);
            uStack_768 = SUB85(DAT_14c8464e8,0);
            uStack_763 = (undefined3)((ulonglong)DAT_14c8464e8 >> 0x28);
            local_77b = DAT_14c8464f0;
            local_b18 = (undefined1 *)(CONCAT44(local_b18._4_4_,local_9b8._12_4_) ^ 0x80000000);
            local_b20 = &local_278;
            local_b28 = (float *)&local_178;
            local_78b = local_770;
            uStack_786 = uStack_76b;
            uStack_783 = uStack_768;
            uStack_77e = uStack_763;
            FUN_1407d44e4(&local_9d8,&local_9f8,&local_1f8);
            dVar68 = local_9e8;
            dVar54 = (double)CONCAT53(uStack_1f5,local_1f8);
            dVar36 = (double)CONCAT53(uStack_1ed,uStack_1f0);
            local_a18 = DAT_14cb1c860;
            dStack_a10 = DAT_14cb1c868;
            local_a08 = DAT_14cb1c870;
            uVar18 = local_9d8._4_4_;
            uStack_160 = SUB84(DAT_14cb1c860,0);
            uStack_15c = (undefined4)((ulonglong)DAT_14cb1c860 >> 0x20);
            uStack_158._0_4_ = SUB84(DAT_14cb1c868,0);
            uStack_158._4_4_ = (undefined4)((ulonglong)DAT_14cb1c868 >> 0x20);
            uStack_150._0_4_ = SUB84(DAT_14cb1c870,0);
            uStack_150._4_4_ = (undefined4)((ulonglong)DAT_14cb1c870 >> 0x20);
            local_a48 = local_178;
            dStack_a40 = uStack_170;
            local_a38 = uStack_168;
            dStack_a30 = DAT_14cb1c860;
            local_a28 = DAT_14cb1c868;
            dStack_a20 = DAT_14cb1c870;
            uVar17 = iVar20 + 1;
            local_3f0._0_4_ = uVar17;
            uVar58 = dStack_9d0._0_4_;
            if (local_3f0._4_4_ < uVar17) {
              local_ae8._0_4_ = dStack_9d0._0_4_;
              FUN_1407d4a32(&local_5d8,uVar35);
              uVar58 = local_ae8._0_4_;
            }
            lVar21 = (longlong)iVar20;
            pdVar27 = local_3f8;
            if (local_3f8 == (double *)0x0) {
              pdVar27 = (double *)&local_5d8;
            }
            lVar24 = lVar21 * 0x78;
            pdVar27[lVar21 * 0xf] = dVar54;
            pdVar27[lVar21 * 0xf + 1] = dVar36;
            pdVar27[lVar21 * 0xf + 2] = dVar68;
            pdVar27[lVar21 * 0xf + 3] = local_a18;
            (pdVar27 + lVar21 * 0xf + 3)[1] = dStack_a10;
            pdVar27[lVar21 * 0xf + 5] = local_a08;
            pdVar27[lVar21 * 0xf + 6] = 0.0;
            (pdVar27 + lVar21 * 0xf + 6)[1] = 0.0;
            *(undefined4 *)(pdVar27 + lVar21 * 0xf + 8) = 0xffffffff;
            *(int *)(pdVar27 + lVar21 * 0xf + 9) = iVar19;
            *(undefined4 *)((longlong)pdVar27 + lVar24 + 0x4c) = uVar18;
            *(undefined4 *)(pdVar27 + lVar21 * 0xf + 10) = uVar58;
            *(undefined8 *)((longlong)pdVar27 + lVar24 + 0x54) = 0x100000000;
            *(undefined1 *)((longlong)pdVar27 + lVar24 + 0x5c) = 0;
            puVar4 = (undefined8 *)((longlong)pdVar27 + lVar24 + 0x5d);
            *puVar4 = CONCAT53(local_770,uStack_773);
            puVar4[1] = CONCAT53(uStack_768,uStack_76b);
            pdVar27[lVar21 * 0xf + 0xd] = (double)CONCAT35(uStack_763,uStack_768);
            (pdVar27 + lVar21 * 0xf + 0xd)[1] = local_760;
            uVar17 = (uint)local_3f0;
            lVar21 = (longlong)(int)(uint)local_3f0;
            local_3f0._0_4_ = (uint)local_3f0 + 1;
            if (local_3f0._4_4_ < (uint)local_3f0) {
              local_ae8._0_4_ = uVar58;
              FUN_1407d4a32(&local_5d8,uVar17);
              uVar58 = local_ae8._0_4_;
            }
            param_4 = local_b09;
            pdVar27 = local_3f8;
            if (local_3f8 == (double *)0x0) {
              pdVar27 = (double *)&local_5d8;
            }
            lVar24 = lVar21 * 0x78;
            pdVar27[lVar21 * 0xf + 4] = local_a28;
            (pdVar27 + lVar21 * 0xf + 4)[1] = dStack_a20;
            pdVar27[lVar21 * 0xf + 2] = local_a38;
            (pdVar27 + lVar21 * 0xf + 2)[1] = dStack_a30;
            pdVar27[lVar21 * 0xf] = local_a48;
            (pdVar27 + lVar21 * 0xf)[1] = dStack_a40;
            pdVar27[lVar21 * 0xf + 6] = 0.0;
            (pdVar27 + lVar21 * 0xf + 6)[1] = 0.0;
            *(undefined4 *)(pdVar27 + lVar21 * 0xf + 8) = 0xffffffff;
            *(int *)(pdVar27 + lVar21 * 0xf + 9) = iVar19;
            *(undefined4 *)((longlong)pdVar27 + lVar24 + 0x4c) = uVar18;
            *(undefined4 *)(pdVar27 + lVar21 * 0xf + 10) = uVar58;
            *(undefined8 *)((longlong)pdVar27 + lVar24 + 0x54) = 0x200000000;
            *(undefined1 *)((longlong)pdVar27 + lVar24 + 0x5c) = 0;
            pdVar27[lVar21 * 0xf + 0xd] = (double)CONCAT35(uStack_77e,uStack_783);
            (pdVar27 + lVar21 * 0xf + 0xd)[1] = local_77b;
            puVar4 = (undefined8 *)((longlong)pdVar27 + lVar24 + 0x5d);
            *puVar4 = CONCAT53(local_78b,uStack_78e);
            puVar4[1] = CONCAT53(uStack_783,uStack_786);
            uVar17 = *(uint *)(local_aa0 + 0x10 + local_ac0);
            lVar21 = *(longlong *)((longlong)local_ac8 + 0x38);
            local_ab8._0_8_ = lVar21;
            lVar24 = *(longlong *)(lVar21 + (ulonglong)((uVar17 >> 0x16) * 0x120));
            uVar17 = uVar17 & 0x3fffff;
            local_ae8._0_8_ = lVar24;
            lVar6 = *(longlong *)(lVar24 + 0x20);
            plVar30 = (longlong *)(lVar6 + 0xc0);
            iVar19 = *(int *)(lVar6 + 0x30);
            lVar25 = *(longlong *)(lVar6 + 0x28);
            uVar28 = uVar17 - iVar19;
            if ((int)uVar17 < iVar19) {
              plVar33 = plVar30;
              uVar28 = uVar17;
              if ((*(int *)(lVar6 + 0x78) == 0) ||
                 (uVar28 = *(uint *)(*(longlong *)(lVar6 + 0x70) + (ulonglong)uVar17 * 4),
                 lVar34 = lVar25, uVar31 = uVar17, uVar28 != 0xffffffff)) goto LAB_1407d251f;
            }
            else {
              plVar33 = (longlong *)(lVar6 + 0xe0);
LAB_1407d251f:
              lVar34 = *plVar33;
              uVar31 = uVar28;
            }
            uVar28 = *(uint *)(lVar34 + 8 + (longlong)(int)uVar31 * 0x14);
            uVar29 = *(int *)(lVar6 + 0x17c) << 0x16 | uVar28 & 0x3fffff;
            if ((*(byte *)(lVar34 + 0x10 + (longlong)(int)uVar31 * 0x14) & 0x40) != 0) {
              uVar29 = uVar28;
            }
            if (uVar28 == 0xffffffff) {
              uVar29 = uVar28;
            }
            lVar21 = *(longlong *)(lVar21 + (ulonglong)((uVar29 >> 0x16) * 0x120));
            if ((int)uVar17 < iVar19) {
              uVar28 = uVar17;
              if ((*(int *)(lVar6 + 0x78) == 0) ||
                 (uVar28 = *(uint *)(*(longlong *)(lVar6 + 0x70) + (ulonglong)uVar17 * 4),
                 uVar28 != 0xffffffff)) goto LAB_1407d1f97;
            }
            else {
              plVar30 = (longlong *)(lVar6 + 0xe0);
              uVar28 = uVar17 - iVar19;
LAB_1407d1f97:
              lVar25 = *plVar30;
              uVar17 = uVar28;
            }
            iVar19 = *(int *)(lVar6 + 0x40);
            iVar20 = *(int *)(lVar25 + (longlong)(int)uVar17 * 0x14);
            plVar30 = (longlong *)(lVar6 + 0xf0);
            plVar33 = plVar30;
            if (iVar20 < iVar19) {
              plVar33 = (longlong *)(lVar6 + 0x38);
            }
            iVar5 = *(int *)(lVar25 + 4 + (longlong)(int)uVar17 * 0x14);
            iVar32 = iVar19;
            if (iVar20 < iVar19) {
              iVar32 = 0;
            }
            pfVar3 = (float *)(*plVar33 + (longlong)(iVar20 - iVar32) * 0x10);
            fVar61 = *pfVar3;
            fVar62 = pfVar3[1];
            fVar63 = pfVar3[2];
            if (iVar5 < iVar19) {
              iVar19 = 0;
              plVar30 = (longlong *)(lVar6 + 0x38);
            }
            pfVar3 = (float *)(*plVar30 + (longlong)(iVar5 - iVar19) * 0x10);
            fVar64 = *pfVar3;
            fVar65 = pfVar3[1];
            fVar9 = pfVar3[2];
            local_7d8 = fVar63 * *(float *)(lVar24 + 0x80) +
                        fVar62 * *(float *)(lVar24 + 0x70) + fVar61 * *(float *)(lVar24 + 0x60) +
                        *(float *)(lVar24 + 0x90);
            fStack_7d4 = fVar63 * *(float *)(lVar24 + 0x84) +
                         fVar62 * *(float *)(lVar24 + 0x74) + fVar61 * *(float *)(lVar24 + 100) +
                         *(float *)(lVar24 + 0x94);
            fStack_7d0 = fVar63 * *(float *)(lVar24 + 0x88) +
                         fVar62 * *(float *)(lVar24 + 0x78) + fVar61 * *(float *)(lVar24 + 0x68) +
                         *(float *)(lVar24 + 0x98);
            fStack_7cc = fVar63 * *(float *)(lVar24 + 0x8c) +
                         fVar62 * *(float *)(lVar24 + 0x7c) + fVar61 * *(float *)(lVar24 + 0x6c) +
                         *(float *)(lVar24 + 0x9c);
            local_7c8 = fVar9 * *(float *)(lVar24 + 0x80) +
                        fVar65 * *(float *)(lVar24 + 0x70) + fVar64 * *(float *)(lVar24 + 0x60) +
                        *(float *)(lVar24 + 0x90);
            fStack_7c4 = fVar9 * *(float *)(lVar24 + 0x84) +
                         fVar65 * *(float *)(lVar24 + 0x74) + fVar64 * *(float *)(lVar24 + 100) +
                         *(float *)(lVar24 + 0x94);
            fStack_7c0 = fVar9 * *(float *)(lVar24 + 0x88) +
                         fVar65 * *(float *)(lVar24 + 0x78) + fVar64 * *(float *)(lVar24 + 0x68) +
                         *(float *)(lVar24 + 0x98);
            fStack_7bc = fVar9 * *(float *)(lVar24 + 0x8c) +
                         fVar65 * *(float *)(lVar24 + 0x7c) + fVar64 * *(float *)(lVar24 + 0x6c) +
                         *(float *)(lVar24 + 0x9c);
            uVar29 = uVar29 & 0x3fffff;
            lVar6 = *(longlong *)(lVar21 + 0x20);
            if ((int)uVar29 < *(int *)(lVar6 + 0x30)) {
              plVar30 = (longlong *)(lVar6 + 0xc0);
              uVar17 = uVar29;
              if ((*(int *)(lVar6 + 0x78) == 0) ||
                 (uVar17 = *(uint *)(*(longlong *)(lVar6 + 0x70) + (ulonglong)uVar29 * 4),
                 uVar17 != 0xffffffff)) goto LAB_1407d20b0;
              lVar25 = *(longlong *)(lVar6 + 0x28);
            }
            else {
              plVar30 = (longlong *)(lVar6 + 0xe0);
              uVar17 = uVar29 - *(int *)(lVar6 + 0x30);
LAB_1407d20b0:
              uVar29 = uVar17;
              lVar25 = *plVar30;
            }
            iVar19 = *(int *)(lVar6 + 0x40);
            iVar20 = *(int *)(lVar25 + (longlong)(int)uVar29 * 0x14);
            iVar5 = *(int *)(lVar25 + 4 + (longlong)(int)uVar29 * 0x14);
            plVar30 = (longlong *)(lVar6 + 0xf0);
            iVar32 = iVar19;
            plVar33 = plVar30;
            if (iVar20 < iVar19) {
              iVar32 = 0;
              plVar33 = (longlong *)(lVar6 + 0x38);
            }
            if (iVar5 < iVar19) {
              iVar19 = 0;
              plVar30 = (longlong *)(lVar6 + 0x38);
            }
            pfVar3 = (float *)(*plVar33 + (longlong)(iVar20 - iVar32) * 0x10);
            fVar61 = *pfVar3;
            fVar62 = pfVar3[1];
            fVar63 = pfVar3[2];
            pfVar3 = (float *)(*plVar30 + (longlong)(iVar5 - iVar19) * 0x10);
            fVar64 = *pfVar3;
            fVar65 = pfVar3[1];
            fVar9 = pfVar3[2];
            local_7e8 = fVar63 * *(float *)(lVar21 + 0x80) +
                        fVar62 * *(float *)(lVar21 + 0x70) + fVar61 * *(float *)(lVar21 + 0x60) +
                        *(float *)(lVar21 + 0x90);
            fStack_7e4 = fVar63 * *(float *)(lVar21 + 0x84) +
                         fVar62 * *(float *)(lVar21 + 0x74) + fVar61 * *(float *)(lVar21 + 100) +
                         *(float *)(lVar21 + 0x94);
            fStack_7e0 = fVar63 * *(float *)(lVar21 + 0x88) +
                         fVar62 * *(float *)(lVar21 + 0x78) + fVar61 * *(float *)(lVar21 + 0x68) +
                         *(float *)(lVar21 + 0x98);
            fStack_7dc = fVar63 * *(float *)(lVar21 + 0x8c) +
                         fVar62 * *(float *)(lVar21 + 0x7c) + fVar61 * *(float *)(lVar21 + 0x6c) +
                         *(float *)(lVar21 + 0x9c);
            local_7f8 = fVar9 * *(float *)(lVar21 + 0x80) +
                        fVar65 * *(float *)(lVar21 + 0x70) + fVar64 * *(float *)(lVar21 + 0x60) +
                        *(float *)(lVar21 + 0x90);
            fStack_7f4 = fVar9 * *(float *)(lVar21 + 0x84) +
                         fVar65 * *(float *)(lVar21 + 0x74) + fVar64 * *(float *)(lVar21 + 100) +
                         *(float *)(lVar21 + 0x94);
            fStack_7f0 = fVar9 * *(float *)(lVar21 + 0x88) +
                         fVar65 * *(float *)(lVar21 + 0x78) + fVar64 * *(float *)(lVar21 + 0x68) +
                         *(float *)(lVar21 + 0x98);
            fStack_7ec = fVar9 * *(float *)(lVar21 + 0x8c) +
                         fVar65 * *(float *)(lVar21 + 0x7c) + fVar64 * *(float *)(lVar21 + 0x6c) +
                         *(float *)(lVar21 + 0x9c);
            local_b20 = (double *)(lVar24 + 0xc0);
            local_b18 = local_838;
            local_b28 = &local_7d8;
            FUN_144b442e0(&local_7e8,&local_7f8,lVar21 + 0xc0);
            local_2f8 = (double)(float)local_838._0_8_;
            dStack_2f0 = (double)SUB84(local_838._0_8_,4);
            local_2e8 = (double)(float)local_838._8_8_;
            dStack_2e0 = (double)SUB84(local_838._8_8_,4);
            local_2d8 = (double)local_828;
            dStack_2d0 = (double)fStack_824;
            local_2c8 = (double)(float)uStack_820;
            dStack_2c0 = (double)(float)((ulonglong)uStack_820 >> 0x20);
            local_2b8 = (double)local_818;
            dStack_2b0 = (double)fStack_814;
            local_2a8 = (double)(float)uStack_810;
            dStack_2a0 = (double)(float)((ulonglong)uStack_810 >> 0x20);
            auVar37._0_4_ = local_808 * 100.0;
            auVar37._4_4_ = fStack_804 * 100.0;
            auVar37._8_4_ = fStack_800 * 100.0;
            auVar37._12_4_ = fStack_7fc * 100.0;
            local_298 = (double)auVar37._0_4_;
            dStack_290 = (double)auVar37._4_4_;
            auVar59 = blendps(auVar37,_DAT_14c6daca0,8);
            local_288 = (double)auVar59._8_4_;
            dStack_280 = (double)auVar59._12_4_;
            pdVar27 = &local_898;
            uVar18 = FUN_1448ac920(pdVar27,&local_2f8);
            local_ae8 = local_858;
            auVar59 = local_ae8;
            auVar37 = minpd(local_a88._0_16_,local_858);
            auVar50._8_8_ = dStack_a90;
            auVar50._0_8_ = local_a98;
            local_ab8._0_16_ = local_848;
            auVar45 = local_ab8._0_16_;
            auVar50 = minpd(auVar50,local_848);
            auVar38._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
            auVar38._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
            iVar19 = movmskpd(uVar18,auVar38);
            auVar51._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
            auVar51._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
            uVar17 = movmskpd((int)pdVar27,auVar51);
            local_ae8._0_8_ = local_858._0_8_;
            local_ae8._8_8_ = local_858._8_8_;
            local_ab8._0_8_ = local_848._0_8_;
            local_ab8._8_8_ = local_848._8_8_;
            local_ae8 = auVar59;
            if ((uVar17 & 0x3fffffff) == 0 && iVar19 == 0) {
              dVar54 = local_898 * (double)local_b08._8_8_;
              dVar36 = local_898 * (double)local_b08._0_8_;
              dVar68 = (double)local_b08._0_8_ * dStack_890;
              dVar69 = (double)local_b08._8_8_ * dStack_890;
              dVar57 = (double)local_b08._0_8_ * local_888;
              dVar53 = dVar48 * local_888;
              local_b08._0_8_ =
                   (double)local_b08._8_8_ * local_888 * -1.0 +
                   dVar48 * dStack_890 +
                   dVar66 * local_898 * 1.0 + (double)local_b08._0_8_ * dStack_880;
              local_b08._8_8_ =
                   dVar57 * 1.0 +
                   dVar66 * dStack_890 +
                   dVar48 * local_898 * -1.0 + (double)local_b08._8_8_ * dStack_880;
              dVar48 = dVar66 * local_888 * 1.0 + ((dVar54 * 1.0 + dVar48 * dStack_880) - dVar68);
              dVar66 = dVar53 * -1.0 + ((dVar36 * -1.0 + dVar66 * dStack_880) - dVar69);
              dVar44 = dVar44 * (double)local_ae8._0_8_;
              dVar49 = dVar49 * (double)local_ae8._8_8_;
              dVar67 = local_a68 * (double)local_ab8._0_8_;
              dVar69 = dStack_a60 * (double)local_ab8._8_8_;
              dVar68 = dVar49 * local_898 - dVar44 * dStack_890;
              dVar43 = dVar67 * dStack_890 - dVar49 * local_888;
              dVar41 = dVar44 * local_888 - dVar67 * local_898;
              dVar53 = dVar69 * dStack_880 - dVar69 * dStack_880;
              dVar43 = dVar43 + dVar43;
              dVar41 = dVar41 + dVar41;
              dVar68 = dVar68 + dVar68;
              dVar53 = dVar53 + dVar53;
              dVar54 = (double)local_a88._0_8_ * (double)local_ae8._0_8_;
              dVar36 = (double)local_a88._8_8_ * (double)local_ae8._8_8_;
              dVar57 = (dVar53 * dStack_880 - dVar53 * dStack_880) + dStack_880 * dVar53 + dVar69 +
                       dStack_860;
              dVar69 = local_a98 * (double)local_ab8._0_8_;
              dVar53 = dStack_a90 * (double)local_ab8._8_8_;
              dVar44 = (dVar68 * dStack_890 - local_888 * dVar41) + dStack_880 * dVar43 + dVar44 +
                       local_878;
              dVar49 = (dVar43 * local_888 - dVar68 * local_898) + dStack_880 * dVar41 + dVar49 +
                       dStack_870;
              dVar68 = (dVar41 * local_898 - dStack_890 * dVar43) + dStack_880 * dVar68 + dVar67 +
                       local_868;
              local_ab8._0_16_ = auVar45;
            }
            else {
              dVar69 = dStack_890 + dStack_890;
              dVar53 = local_888 + local_888;
              dVar36 = local_898 * (local_898 + local_898);
              dVar57 = (local_898 + local_898) * dStack_880;
              local_a58 = local_a98 * (double)local_ab8._0_8_;
              dStack_a50 = dStack_a90 * (double)local_ab8._8_8_;
              local_1a8 = (1.0 - (dVar36 + dStack_890 * dVar69)) * (double)local_ab8._0_8_;
              local_1b8 = (dVar69 * dStack_880 + local_898 * dVar53) * (double)local_ab8._0_8_;
              dStack_1b0 = (dVar53 * dStack_890 - dVar57) * (double)local_ab8._0_8_;
              local_ab8._8_8_ = (double)local_a88._8_8_ * (double)local_ae8._8_8_;
              local_ab8._0_8_ = (double)local_a88._0_8_ * (double)local_ae8._0_8_;
              dVar54 = (1.0 - (local_888 * dVar53 + dStack_890 * dVar69)) * (double)local_ae8._0_8_;
              dVar36 = (1.0 - (local_888 * dVar53 + dVar36)) * (double)local_ae8._8_8_;
              dVar68 = (dVar69 * local_898 + dVar53 * dStack_880) * (double)local_ae8._0_8_;
              local_1c8 = (dVar53 * dStack_890 + dVar57) * (double)local_ae8._8_8_;
              dVar57 = (local_898 * dVar53 - dVar69 * dStack_880) * (double)local_ae8._0_8_;
              local_1f8 = SUB83(dVar54,0);
              uStack_1f5 = (undefined5)((ulonglong)dVar54 >> 0x18);
              uStack_1f0 = SUB83(dVar68,0);
              uStack_1ed = (undefined5)((ulonglong)dVar68 >> 0x18);
              uStack_1e8 = SUB83(dVar57,0);
              uStack_1e5 = (undefined5)((ulonglong)dVar57 >> 0x18);
              uStack_1e0 = 0;
              uStack_1dd = 0;
              local_1d8._8_4_ = SUB84(dVar36,0);
              local_1d8._0_8_ = (dVar69 * local_898 - dVar53 * dStack_880) * (double)local_ae8._8_8_
              ;
              local_1d8._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = local_878;
              dStack_190 = dStack_870;
              local_188 = local_868;
              uStack_180 = 0x3ff0000000000000;
              dVar54 = (double)local_b08._8_8_ + (double)local_b08._8_8_;
              dVar68 = dVar48 + dVar48;
              dVar36 = (double)local_b08._0_8_ * ((double)local_b08._0_8_ + (double)local_b08._0_8_)
              ;
              local_228 = (1.0 - (dVar36 + (double)local_b08._8_8_ * dVar54)) * local_a98;
              dVar69 = ((double)local_b08._0_8_ + (double)local_b08._0_8_) * dVar66;
              local_238 = (dVar54 * dVar66 + (double)local_b08._0_8_ * dVar68) * local_a98;
              local_258 = (dVar54 * (double)local_b08._0_8_ - dVar68 * dVar66) *
                          (double)local_a88._8_8_;
              dStack_230 = (dVar68 * (double)local_b08._8_8_ - dVar69) * local_a98;
              local_278 = (1.0 - (dVar48 * dVar68 + (double)local_b08._8_8_ * dVar54)) *
                          (double)local_a88._0_8_;
              dStack_250 = (1.0 - (dVar48 * dVar68 + dVar36)) * (double)local_a88._8_8_;
              dStack_270 = (dVar54 * (double)local_b08._0_8_ + dVar68 * dVar66) *
                           (double)local_a88._0_8_;
              local_248 = (dVar68 * (double)local_b08._8_8_ + dVar69) * (double)local_a88._8_8_;
              local_268 = ((double)local_b08._0_8_ * dVar68 - dVar54 * dVar66) *
                          (double)local_a88._0_8_;
              uStack_260 = 0;
              uStack_240 = 0;
              uStack_220 = 0;
              local_218._8_4_ = SUB84(dVar49,0);
              local_218._0_8_ = dVar44;
              local_218._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
              local_208 = local_a68;
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_178);
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              dVar53 = dStack_a50;
              dVar69 = local_a58;
              auVar59 = _DAT_149934d80;
              dVar54 = (double)local_ab8._0_8_;
              dVar36 = (double)local_ab8._8_8_;
              auVar39._8_8_ = -(ulonglong)(0.0 <= (double)local_ab8._8_8_);
              auVar39._0_8_ = -(ulonglong)(0.0 <= (double)local_ab8._0_8_);
              auVar45 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar39);
              dVar48 = (double)(~-(ulonglong)(0.0 <= local_a58) & 0xbff0000000000000 |
                               -(ulonglong)(0.0 <= local_a58) & 0x3ff0000000000000);
              dVar44 = auVar45._0_8_;
              uStack_168 = uStack_168 * dVar44;
              uStack_170 = uStack_170 * dVar44;
              local_178 = local_178 * dVar44;
              dVar44 = auVar45._8_8_;
              uStack_148 = uStack_148 * dVar44;
              uStack_150 = (double)CONCAT44(uStack_150._4_4_,(undefined4)uStack_150) * dVar44;
              uStack_158 = dVar44 * (double)CONCAT44(uStack_158._4_4_,(undefined4)uStack_158);
              local_128 = local_128 * dVar48;
              local_130 = local_130 * dVar48;
              local_138 = dVar48 * local_138;
              FUN_14481fd10(&local_7b8,&local_178);
              dVar48 = local_7a8._0_8_;
              dVar44 = local_7a8._8_8_;
              dVar49 = dVar48 * dVar48 + local_7b8 * local_7b8;
              dVar68 = dVar44 * dVar44 + dStack_7b0 * dStack_7b0;
              auVar52._0_8_ = dVar49 + dVar68;
              auVar52._8_8_ = dVar49 + dVar68;
              auVar40._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_);
              auVar40._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_);
              auVar45 = sqrtpd(auVar52,auVar52);
              auVar59 = divpd(auVar59,auVar45);
              auVar60._0_8_ = auVar59._0_8_ * dVar48;
              auVar60._8_8_ = auVar59._8_8_ * dVar44;
              auVar45 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar60,auVar40);
              local_b08._0_8_ =
                   (ulonglong)(local_7b8 * auVar59._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_);
              local_b08._8_8_ =
                   (ulonglong)(dStack_7b0 * auVar59._8_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_);
              dVar57 = 0.0;
              dVar48 = auVar45._0_8_;
              dVar66 = auVar45._8_8_;
              dVar44 = local_118;
              dVar49 = dStack_110;
              dVar68 = local_108;
            }
            lVar21 = local_ac0 + 0x30;
            uVar17 = 0x7fffffff;
            uVar56 = 0;
            uVar18 = 0x7fffffff;
            uVar58 = 0x7fffffff;
          } while (local_a70 != lVar21);
        }
        if (uVar16 == 0) {
          auVar55._4_4_ = uVar56;
          auVar55._0_4_ = uVar17;
          fVar61 = local_718 * 57.295776;
          auVar55._8_4_ = uVar18;
          auVar55._12_4_ = uVar58;
          if (0.01 < (float)((uint)fVar61 & uVar17)) {
            dVar67 = (double)fStack_730;
            dVar41 = (double)fStack_734;
            dVar43 = (double)local_738;
            pauVar22 = (undefined1 (*) [16])FUN_1407d3788(&local_5d8);
            dVar43 = dVar43 * 100.0 * dVar54;
            dVar41 = dVar41 * 100.0 * dVar36;
            dVar67 = dVar67 * 100.0 * dVar69;
            dVar42 = dVar41 * (double)local_b08._0_8_ - (double)local_b08._8_8_ * dVar43;
            dVar46 = dVar67 * (double)local_b08._8_8_ - dVar48 * dVar41;
            dVar47 = dVar43 * dVar48 - (double)local_b08._0_8_ * dVar67;
            dVar46 = dVar46 + dVar46;
            dVar47 = dVar47 + dVar47;
            dVar42 = dVar42 + dVar42;
            dVar41 = (dVar48 * dVar46 - (double)local_b08._0_8_ * dVar42) + dVar66 * dVar47 + dVar41
                     + dVar49;
            auVar8._8_4_ = SUB84(dVar41,0);
            auVar8._0_8_ = (dVar42 * (double)local_b08._8_8_ - dVar47 * dVar48) +
                           dVar66 * dVar46 + dVar43 + dVar44;
            auVar8._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
            *pauVar22 = auVar8;
            *(double *)pauVar22[1] =
                 dVar66 * dVar42 + dVar67 +
                 (dVar47 * (double)local_b08._0_8_ - dVar46 * (double)local_b08._8_8_) + dVar68;
            dVar43 = DAT_14cb1c868;
            *(double *)(pauVar22[1] + 8) = DAT_14cb1c860;
            *(double *)pauVar22[2] = dVar43;
            *(double *)(pauVar22[2] + 8) = DAT_14cb1c870;
            *(undefined8 *)pauVar22[3] = 0;
            plVar30 = *(longlong **)(pauVar22[3] + 8);
            if (plVar30 != (longlong *)0x0) {
              *(undefined8 *)(pauVar22[3] + 8) = 0;
              LOCK();
              plVar33 = plVar30 + 1;
              *(int *)plVar33 = (int)*plVar33 + -1;
              UNLOCK();
              if ((int)*plVar33 == 0) {
                (**(code **)*plVar30)(plVar30);
                LOCK();
                piVar1 = (int *)((longlong)plVar30 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar30 + 0x10))(plVar30);
                }
              }
            }
            *(undefined4 *)pauVar22[4] = 0xffffffff;
            *(undefined4 *)(pauVar22[5] + 4) = *(undefined4 *)(param_3 + 9);
            pauVar22[5][0xc] = 0.0 < fVar61;
            auVar55 = _DAT_1499319a0;
          }
          local_928 = (double)(float)local_728 * 100.0;
          dStack_920 = (double)(float)((ulonglong)local_728 >> 0x20) * 100.0;
          local_918 = (double)fStack_720 * 100.0;
          uVar17 = auVar55._0_4_;
          uVar56 = auVar55._4_4_;
          uVar18 = auVar55._8_4_;
          uVar58 = auVar55._12_4_;
        }
      }
      uVar35 = local_6f8 >> 0x20;
      local_6f8 = local_6f8 & 0xffffffff00000000;
      lVar21 = (longlong)(int)uVar35;
      if (local_700 != 0 && -1 < lVar21) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,local_700,lVar21 * 0x30);
      }
      local_700 = 0;
      local_6f8 = CONCAT44(0x80000000,(undefined4)local_6f8);
      uVar35 = local_708 >> 0x20;
      local_708 = local_708 & 0xffffffff00000000;
      lVar21 = (longlong)(int)uVar35;
      if (local_710 != 0 && -1 < lVar21) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,local_710,lVar21 * 0x30);
      }
    }
    if (uVar16 == 1) {
      if (param_1 + 0x19 != &local_3e8) {
        FUN_1402faf4a();
      }
      uVar35 = local_3f0;
      lVar21 = (longlong)(int)(uint)local_3f0;
      uVar17 = (uint)local_3f0 + 1;
      local_3f0 = CONCAT44(local_3f0._4_4_,uVar17);
      if (local_3f0._4_4_ < uVar17) {
        FUN_1407d4a32(&local_5d8,uVar35 & 0xffffffff);
      }
      pdVar27 = local_3f8;
      if (local_3f8 == (double *)0x0) {
        pdVar27 = (double *)&local_5d8;
      }
      pdVar27[lVar21 * 0xf + 2] = (double)param_1[0x12];
      dVar54 = (double)param_1[0x11];
      pdVar27[lVar21 * 0xf] = (double)param_1[0x10];
      (pdVar27 + lVar21 * 0xf)[1] = dVar54;
      pdVar27[lVar21 * 0xf + 5] = DAT_14cb1c870;
      pdVar27[lVar21 * 0xf + 3] = DAT_14cb1c860;
      (pdVar27 + lVar21 * 0xf + 3)[1] = DAT_14cb1c868;
      pdVar27[lVar21 * 0xf + 6] = 0.0;
      (pdVar27 + lVar21 * 0xf + 6)[1] = 0.0;
      *(undefined4 *)(pdVar27 + lVar21 * 0xf + 8) = 0xffffffff;
      pdVar27[lVar21 * 0xf + 9] = -NAN;
      *(undefined4 *)(pdVar27 + lVar21 * 0xf + 10) = 0xffffffff;
      *(undefined1 *)((longlong)pdVar27 + lVar21 * 0x78 + 0x5c) = 0;
      *(undefined8 *)((longlong)pdVar27 + lVar21 * 0x78 + 0x54) = 0;
      pdVar27[lVar21 * 0xf + 0xc] = DAT_14c8464e0;
      (pdVar27 + lVar21 * 0xf + 0xc)[1] = DAT_14c8464e8;
      pdVar27[lVar21 * 0xf + 0xe] = DAT_14c8464f0;
      pdVar27 = local_3f8;
      if (local_3f8 == (double *)0x0) {
        pdVar27 = (double *)&local_5d8;
      }
      *(undefined4 *)(pdVar27 + (longlong)(int)((uint)local_3f0 + -1) * 0xf + 0xb) = 3;
      if (*(char *)((longlong)param_1 + 0x14c) == '\x01') {
        fVar61 = *(float *)(param_1 + 0x29);
        local_9d8 = *param_3;
        dStack_9d0 = param_3[1];
        local_9c8 = *(undefined1 (*) [16])(param_3 + 2);
        local_9b8 = *(undefined1 (*) [16])(param_3 + 4);
        local_9a8 = param_3[6];
        local_9a0 = (longlong *)param_3[7];
        if (local_9a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_9a0 + 1) = (int)local_9a0[1] + 1;
          UNLOCK();
        }
        local_998 = *(undefined4 *)(param_3 + 8);
        local_990 = param_3[9];
        lVar21 = (longlong)(int)(uint)local_3f0;
        if (lVar21 != 0) {
          pdVar27 = local_3f8;
          if (local_3f8 == (double *)0x0) {
            pdVar27 = (double *)&local_5d8;
          }
          local_b08._0_8_ = pdVar27[lVar21 * 0xf + -0xf];
          dVar54 = pdVar27[lVar21 * 0xf + -0xe];
          local_af0 = pdVar27[lVar21 * 0xf + -0xd];
          local_278 = pdVar27[lVar21 * 0xf + -0xc];
          dStack_270 = (pdVar27 + lVar21 * 0xf + -0xc)[1];
          local_268 = pdVar27[lVar21 * 0xf + -10];
          local_ac8 = pdVar27[lVar21 * 0xf + -9];
          plVar30 = (longlong *)pdVar27[lVar21 * 0xf + -8];
          pdVar27[lVar21 * 0xf + -9] = 0.0;
          (pdVar27 + lVar21 * 0xf + -9)[1] = 0.0;
          uVar18 = *(undefined4 *)(pdVar27 + lVar21 * 0xf + -7);
          dVar48 = pdVar27[lVar21 * 0xf + -2];
          dVar44 = (pdVar27 + lVar21 * 0xf + -2)[1];
          uStack_158._4_4_ = SUB84(dVar48,0);
          uStack_150._0_4_ = (undefined4)((ulonglong)dVar48 >> 0x20);
          uStack_150._4_4_ = SUB84(dVar44,0);
          uStack_148._0_4_ = (undefined4)((ulonglong)dVar44 >> 0x20);
          dVar48 = pdVar27[lVar21 * 0xf + -4];
          dVar44 = (pdVar27 + lVar21 * 0xf + -4)[1];
          uStack_168._4_4_ = SUB84(dVar48,0);
          uStack_160 = (undefined4)((ulonglong)dVar48 >> 0x20);
          uStack_15c = SUB84(dVar44,0);
          uStack_158._0_4_ = (undefined4)((ulonglong)dVar44 >> 0x20);
          dVar48 = pdVar27[lVar21 * 0xf + -6];
          dVar44 = (pdVar27 + lVar21 * 0xf + -6)[1];
          local_178._4_4_ = SUB84(dVar48,0);
          uStack_170._0_4_ = (undefined4)((ulonglong)dVar48 >> 0x20);
          uStack_170._4_4_ = SUB84(dVar44,0);
          uStack_168._0_4_ = (undefined4)((ulonglong)dVar44 >> 0x20);
          pdVar27 = local_3f8;
          if (local_3f8 == (double *)0x0) {
            pdVar27 = (double *)&local_5d8;
          }
          iVar19 = (uint)local_3f0;
          lVar21 = (longlong)(int)(uint)local_3f0;
          plVar33 = (longlong *)pdVar27[lVar21 * 0xf + -8];
          local_b09 = param_4;
          if (plVar33 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar33 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              local_ad8 = (longlong *)CONCAT44(local_ad8._4_4_,uVar18);
              local_ad0 = plVar30;
              (**(code **)*plVar33)(plVar33);
              LOCK();
              piVar1 = (int *)((longlong)plVar33 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar30 = local_ad0;
              uVar18 = local_ad8._0_4_;
              if (*piVar1 == 0) {
                (**(code **)(*plVar33 + 0x10))(plVar33);
                plVar30 = local_ad0;
                uVar18 = local_ad8._0_4_;
              }
            }
          }
          iVar20 = (uint)local_3f0 - iVar19;
          if (iVar20 != 0) {
            memmove(pdVar27 + lVar21 * 0xf + -0xf,pdVar27 + lVar21 * 0xf,(longlong)iVar20 * 0x78);
            iVar19 = (uint)local_3f0;
          }
          param_4 = local_b09;
          local_3f0._0_4_ = iVar19 - 1U;
          if (iVar19 - 1U == 0) {
            dVar48 = (double)local_9c8._0_8_ - (double)local_990._4_4_;
            pdVar27 = (double *)&local_9d8;
          }
          else {
            pdVar26 = local_3f8;
            if (local_3f8 == (double *)0x0) {
              pdVar26 = (double *)&local_5d8;
            }
            pdVar27 = pdVar26 + (longlong)(iVar19 + -2) * 0xf;
            dVar48 = pdVar26[(longlong)(iVar19 + -2) * 0xf + 2];
          }
          fVar61 = fVar61 * 0.017453292;
          dVar44 = *pdVar27;
          dVar49 = pdVar27[1];
          fVar61 = (float)(longlong)
                          (fVar61 * 0.15915494 +
                          *(float *)(&DAT_14a184448 + (ulonglong)(fVar61 < 0.0) * 4)) * -6.2831855 +
                   fVar61;
          if (1.5707964 < fVar61) {
            fVar62 = 3.1415927;
LAB_1407d2f8f:
            fVar61 = fVar62 - fVar61;
            fVar62 = -1.0;
          }
          else {
            if (fVar61 < -1.5707964) {
              fVar62 = -3.1415927;
              goto LAB_1407d2f8f;
            }
            fVar62 = 1.0;
          }
          fVar63 = fVar61 * fVar61;
          dVar69 = (double)((((((fVar63 * -2.3889859e-08 + 2.7525562e-06) * fVar63 + -0.00019840874)
                               * fVar63 + 0.008333331) * fVar63 + -0.16666667) * fVar63 + 1.0) *
                           fVar61);
          dVar66 = (double)((((((fVar63 * -2.6051615e-07 + 2.4760495e-05) * fVar63 + -0.0013888378)
                               * fVar63 + 0.041666638) * fVar63 + -0.5) * fVar63 + 1.0) * fVar62);
          dVar57 = dVar54 - dVar49;
          dVar43 = (double)local_b08._0_8_ - dVar44;
          dVar68 = 1.0 / SQRT(dVar43 * dVar43 + dVar57 * dVar57);
          dVar36 = (double)param_1[0x19];
          dVar53 = (double)local_b08._0_8_;
          bVar7 = false;
          if ((-DAT_14cb1d020 < dVar36) && (bVar7 = false, dVar36 < DAT_14cb1d020)) {
            dVar41 = (double)param_1[0x1a];
            bVar7 = false;
            if ((-DAT_14cb1d028 < dVar41) && (dVar41 < DAT_14cb1d028)) {
              dVar67 = (double)param_1[0x1b];
              bVar7 = false;
              if ((-DAT_14cb1d030 < dVar67) && (dVar67 < DAT_14cb1d030)) {
                iVar19 = _finite(dVar36);
                if ((iVar19 == 0) ||
                   ((iVar19 = _finite(dVar41), iVar19 == 0 ||
                    (iVar19 = _finite(dVar67), iVar19 == 0)))) {
                  bVar7 = false;
                  dVar53 = (double)local_b08._0_8_;
                }
                else {
                  dVar53 = (double)local_b08._0_8_;
                  if (*(float *)(param_1 + 0x22) * *(float *)(param_1 + 0x22) + 0.01 <
                      (float)((dVar44 - (double)param_1[0x19]) * (dVar44 - (double)param_1[0x19]) +
                             (dVar49 - (double)param_1[0x1a]) * (dVar49 - (double)param_1[0x1a]))) {
                    bVar7 = false;
                  }
                  else {
                    bVar7 = ABS((float)((double)(float)dVar48 - (double)param_1[0x1b])) <=
                            *(float *)((longlong)param_1 + 0x114) + 0.01;
                  }
                }
              }
            }
          }
          uVar17 = (uint)local_3f0;
          if ((dVar68 * dVar43 * dVar66 + dVar57 * dVar68 * dVar69 < 0.9599999785423279) && (!bVar7)
             ) {
            dVar48 = dVar48 - local_af0;
            dVar68 = dVar49 - dVar54;
            dVar36 = dVar44 - dVar53;
            dVar57 = dVar48 * dVar48 + dVar36 * dVar36 + dVar68 * dVar68;
            if (((dVar57 != 1.0) || (dVar41 = dVar68, dVar67 = dVar36, dVar43 = dVar48, NAN(dVar57))
                ) && (dVar41 = DAT_14c8464e8, dVar67 = DAT_14c8464e0, dVar43 = DAT_14c8464f0,
                     9.99999993922529e-09 <= dVar57)) {
              dVar57 = 1.0 / SQRT(dVar57);
              dVar41 = dVar68 * dVar57;
              dVar67 = dVar36 * dVar57;
              dVar43 = dVar48 * dVar57;
            }
            dVar48 = 0.0;
            dVar36 = dVar43 * 0.0 + dVar67 * -dVar69 + dVar41 * dVar66;
            fVar61 = *(float *)(param_1 + 0x22);
            if (15.0 <= fVar61) {
              fVar61 = 15.0;
            }
            fVar62 = (float)local_990;
            dVar43 = (double)(fVar61 + (float)local_990);
            dVar57 = -dVar69;
            dVar68 = dVar66;
            if (dVar36 <= 0.0) {
              dVar68 = -dVar66;
              dVar48 = -0.0;
              dVar57 = dVar69;
            }
            dVar67 = (double)(float)local_990;
            uStack_1e5 = SUB85(DAT_14c8464f0,0);
            uStack_1e0 = (undefined3)((ulonglong)DAT_14c8464f0 >> 0x28);
            uStack_1f5 = SUB85(DAT_14c8464e0,0);
            uStack_1f0 = (undefined3)((ulonglong)DAT_14c8464e0 >> 0x28);
            uStack_1ed = SUB85(DAT_14c8464e8,0);
            uStack_1e8 = (undefined3)((ulonglong)DAT_14c8464e8 >> 0x28);
            dVar41 = dVar43 * -0.0 + dVar48 * dVar67 + local_af0;
            dVar68 = (dVar68 * dVar67 - dVar69 * dVar43) + dVar54;
            dVar48 = (dVar57 * dVar67 - dVar66 * dVar43) + dVar53;
            local_2f8 = DAT_14cb1c860;
            dStack_2f0 = DAT_14cb1c868;
            local_2e8 = DAT_14cb1c870;
            lVar21 = (longlong)(int)(uint)local_3f0;
            if (lVar21 == 0) {
              dVar44 = (dVar49 - dVar68) * (dVar49 - dVar68) + (dVar44 - dVar48) * (dVar44 - dVar48)
              ;
              fVar61 = (float)local_990 * (float)local_990;
            }
            else {
              pdVar27 = local_3f8;
              if (local_3f8 == (double *)0x0) {
                pdVar27 = (double *)&local_5d8;
              }
              lVar24 = (longlong)(int)((uint)local_3f0 - 1);
              dVar44 = dVar41 - pdVar27[lVar24 * 0xf + 2];
              dVar44 = dVar44 * dVar44 +
                       (dVar68 - pdVar27[lVar24 * 0xf + 1]) * (dVar68 - pdVar27[lVar24 * 0xf + 1]) +
                       (dVar48 - pdVar27[lVar24 * 0xf]) * (dVar48 - pdVar27[lVar24 * 0xf]);
              fVar61 = *(float *)((longlong)pdVar27 + lVar24 * 0x78 + 0x54) + (float)local_990;
              fVar61 = fVar61 * fVar61;
            }
            param_4 = local_b09;
            if (fVar61 < (float)dVar44) {
              local_3f0._0_4_ = (uint)local_3f0 + 1;
              if (local_3f0._4_4_ < (uint)local_3f0) {
                FUN_1407d4a32(&local_5d8,uVar17);
                dVar53 = (double)local_b08._0_8_;
              }
              pdVar27 = local_3f8;
              if (local_3f8 == (double *)0x0) {
                pdVar27 = (double *)&local_5d8;
              }
              lVar24 = lVar21 * 0x78;
              pdVar27[lVar21 * 0xf] = dVar48;
              pdVar27[lVar21 * 0xf + 1] = dVar68;
              pdVar27[lVar21 * 0xf + 2] = dVar41;
              dVar48 = dStack_2f0;
              pdVar27[lVar21 * 0xf + 3] = local_2f8;
              (pdVar27 + lVar21 * 0xf + 3)[1] = dVar48;
              pdVar27[lVar21 * 0xf + 5] = local_2e8;
              pdVar27[lVar21 * 0xf + 6] = 0.0;
              (pdVar27 + lVar21 * 0xf + 6)[1] = 0.0;
              *(undefined4 *)(pdVar27 + lVar21 * 0xf + 8) = 0xffffffff;
              pdVar27[lVar21 * 0xf + 9] = -NAN;
              *(undefined4 *)(pdVar27 + lVar21 * 0xf + 10) = 0xffffffff;
              *(float *)((longlong)pdVar27 + lVar24 + 0x54) = fVar62;
              *(undefined4 *)(pdVar27 + lVar21 * 0xf + 0xb) = 4;
              *(bool *)((longlong)pdVar27 + lVar24 + 0x5c) = 0.0 < dVar36;
              uVar10 = CONCAT53(uStack_1ed,uStack_1f0);
              dVar48 = (double)CONCAT35(uStack_1e8,uStack_1ed);
              dVar44 = (double)CONCAT35(uStack_1e0,uStack_1e5);
              puVar4 = (undefined8 *)((longlong)pdVar27 + lVar24 + 0x5d);
              *puVar4 = CONCAT53(uStack_1f5,local_1f8);
              puVar4[1] = uVar10;
              pdVar27[lVar21 * 0xf + 0xd] = dVar48;
              (pdVar27 + lVar21 * 0xf + 0xd)[1] = dVar44;
              param_4 = local_b09;
            }
          }
          uVar17 = (uint)local_3f0;
          lVar21 = (longlong)(int)(uint)local_3f0;
          local_3f0._0_4_ = (uint)local_3f0 + 1;
          if (local_3f0._4_4_ < (uint)local_3f0) {
            FUN_1407d4a32(&local_5d8,uVar17);
            dVar53 = (double)local_b08._0_8_;
          }
          pdVar27 = local_3f8;
          if (local_3f8 == (double *)0x0) {
            pdVar27 = (double *)&local_5d8;
          }
          pdVar27[lVar21 * 0xf] = dVar53;
          pdVar27[lVar21 * 0xf + 1] = dVar54;
          pdVar27[lVar21 * 0xf + 2] = local_af0;
          dVar54 = dStack_270;
          pdVar27[lVar21 * 0xf + 3] = local_278;
          (pdVar27 + lVar21 * 0xf + 3)[1] = dVar54;
          pdVar27[lVar21 * 0xf + 5] = local_268;
          pdVar27[lVar21 * 0xf + 6] = local_ac8;
          pdVar27[lVar21 * 0xf + 7] = (double)plVar30;
          if (plVar30 == (longlong *)0x0) {
            *(undefined4 *)(pdVar27 + lVar21 * 0xf + 8) = uVar18;
            dVar54 = (double)CONCAT44((undefined4)uStack_168,uStack_170._4_4_);
            auVar11._4_4_ = uStack_160;
            auVar11._0_4_ = uStack_168._4_4_;
            auVar11._8_4_ = uStack_15c;
            auVar11._12_4_ = (undefined4)uStack_158;
            auVar13._4_4_ = (undefined4)uStack_150;
            auVar13._0_4_ = uStack_158._4_4_;
            auVar13._8_4_ = uStack_150._4_4_;
            auVar13._12_4_ = (undefined4)uStack_148;
            pdVar27[lVar21 * 0xf + 9] = (double)CONCAT44((undefined4)uStack_170,local_178._4_4_);
            pdVar27[lVar21 * 0xf + 10] = dVar54;
            *(undefined1 (*) [16])(pdVar27 + lVar21 * 0xf + 0xb) = auVar11;
            *(undefined1 (*) [16])(pdVar27 + lVar21 * 0xf + 0xd) = auVar13;
          }
          else {
            LOCK();
            *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
            UNLOCK();
            *(undefined4 *)(pdVar27 + lVar21 * 0xf + 8) = uVar18;
            dVar54 = (double)CONCAT44((undefined4)uStack_168,uStack_170._4_4_);
            auVar12._4_4_ = uStack_160;
            auVar12._0_4_ = uStack_168._4_4_;
            auVar12._8_4_ = uStack_15c;
            auVar12._12_4_ = (undefined4)uStack_158;
            auVar14._4_4_ = (undefined4)uStack_150;
            auVar14._0_4_ = uStack_158._4_4_;
            auVar14._8_4_ = uStack_150._4_4_;
            auVar14._12_4_ = (undefined4)uStack_148;
            pdVar27[lVar21 * 0xf + 9] = (double)CONCAT44((undefined4)uStack_170,local_178._4_4_);
            pdVar27[lVar21 * 0xf + 10] = dVar54;
            *(undefined1 (*) [16])(pdVar27 + lVar21 * 0xf + 0xb) = auVar12;
            *(undefined1 (*) [16])(pdVar27 + lVar21 * 0xf + 0xd) = auVar14;
            LOCK();
            plVar33 = plVar30 + 1;
            *(int *)plVar33 = (int)*plVar33 + -1;
            UNLOCK();
            if ((int)*plVar33 == 0) {
              (**(code **)*plVar30)(plVar30);
              LOCK();
              piVar1 = (int *)((longlong)plVar30 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar30 + 0x10))(plVar30);
              }
            }
          }
        }
        plVar30 = local_9a0;
        if (local_9a0 != (longlong *)0x0) {
          LOCK();
          plVar33 = local_9a0 + 1;
          *(int *)plVar33 = (int)*plVar33 + -1;
          UNLOCK();
          if ((int)*plVar33 == 0) {
            (**(code **)*local_9a0)(local_9a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar30 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar30 + 0x10))(plVar30);
            }
          }
        }
      }
    }
    else {
LAB_1407d2dc9:
      if ((uint)local_3f0 == 0) {
        fVar61 = fStack_330 * (float)uStack_8e0 +
                 fStack_334 * (float)uStack_8f0 + local_338 * (float)uStack_900;
        dVar54 = (double)(fStack_330 * local_8e8._4_4_ +
                         fStack_334 * local_8f8._4_4_ + local_338 * local_908._4_4_);
        dVar48 = (double)(fStack_330 * (float)local_8e8 +
                         fStack_334 * (float)local_8f8 + local_338 * (float)local_908);
        dVar44 = dVar48 * dVar48 + dVar54 * dVar54;
        if ((dVar44 != 1.0) || (NAN(dVar44))) {
          dVar49 = DAT_14c8464e8;
          dVar36 = DAT_14c8464e0;
          dVar68 = DAT_14c8464f0;
          if (9.99999993922529e-09 <= dVar44) {
            dVar49 = dVar54 * (1.0 / SQRT(dVar44));
            dVar36 = dVar48 * (1.0 / SQRT(dVar44));
            dVar68 = 0.0;
          }
        }
        else {
          dVar49 = dVar54;
          dVar36 = dVar48;
          dVar68 = 0.0;
          if ((fVar61 == 0.0) && (dVar68 = 0.0, !NAN(fVar61))) {
            dVar68 = (double)fVar61;
          }
        }
        dVar54 = (double)param_1[0x31];
        dVar48 = (double)param_1[0x30];
        dVar44 = (double)param_1[0x2f];
        local_3f0 = CONCAT44(local_3f0._4_4_,1);
        if (local_3f0._4_4_ == 0) {
          FUN_1407d4a32(&local_5d8,0);
        }
        pdVar27 = local_3f8;
        if (local_3f8 == (double *)0x0) {
          pdVar27 = (double *)&local_5d8;
        }
        *pdVar27 = dVar36 * 100.0 + dVar44;
        pdVar27[1] = dVar49 * 100.0 + dVar48;
        pdVar27[2] = dVar68 * 100.0 + dVar54;
        pdVar27[3] = DAT_14cb1c860;
        pdVar27[4] = DAT_14cb1c868;
        pdVar27[5] = DAT_14cb1c870;
        pdVar27[6] = 0.0;
        pdVar27[7] = 0.0;
        *(undefined4 *)(pdVar27 + 8) = 0xffffffff;
        pdVar27[9] = -NAN;
        *(undefined4 *)(pdVar27 + 10) = 0xffffffff;
        *(undefined8 *)((longlong)pdVar27 + 0x54) = 0;
        *(undefined1 *)((longlong)pdVar27 + 0x5c) = 0;
        pdVar27[0xc] = DAT_14c8464e0;
        pdVar27[0xd] = DAT_14c8464e8;
        pdVar27[0xe] = DAT_14c8464f0;
      }
    }
    if (*param_5 != 0) {
      pdVar27 = local_3f8;
      if (local_3f8 == (double *)0x0) {
        pdVar27 = (double *)&local_5d8;
      }
      if ((longlong)(int)(uint)local_3f0 != 0) {
        lVar21 = (longlong)(int)(uint)local_3f0 * 0x78;
        do {
          FUN_1402eff60(pdVar27,param_5);
          pdVar27 = pdVar27 + 0xf;
          lVar21 = lVar21 + -0x78;
        } while (lVar21 != 0);
      }
    }
    *(undefined1 *)(param_2 + 0x328) = 0xff;
    FUN_1449493b2(param_2);
    *(undefined8 *)(param_2 + 0x1e0) = 0;
    pdVar27 = (double *)&local_5d8;
    if (local_3f8 != (double *)0x0) {
      pdVar27 = local_3f8;
    }
    FUN_140105d28(param_2,pdVar27,local_3f0 & 0xffffffff,0);
    *(char *)(param_2 + 0x240) = local_398;
    if (local_398 == '\x01') {
      *(undefined8 *)(param_2 + 0x210) = local_3c8;
      *(undefined8 *)(param_2 + 0x218) = uStack_3c0;
      *(undefined8 *)(param_2 + 0x200) = local_3d8;
      *(undefined8 *)(param_2 + 0x208) = uStack_3d0;
      *(longlong *)(param_2 + 0x1f0) = local_3e8;
      *(undefined8 *)(param_2 + 0x1f8) = uStack_3e0;
      *(undefined8 *)(param_2 + 0x220) = local_3b8;
      *(longlong **)(param_2 + 0x228) = local_3b0;
      if (local_3b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_3b0 + 1) = (int)local_3b0[1] + 1;
        UNLOCK();
      }
      *(undefined4 *)(param_2 + 0x230) = local_3a8;
      *(undefined8 *)(param_2 + 0x238) = local_3a0;
    }
    *(char *)(param_2 + 600) = local_380;
    if (local_380 == '\x01') {
      *(longlong *)(param_2 + 0x248) = local_390;
      if ((local_390 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      *(undefined4 *)(param_2 + 0x250) = local_388;
    }
    *(undefined1 *)(param_2 + 0x328) = 1;
    *(undefined1 *)(param_2 + 0x330) = param_4;
LAB_1407d19f3:
    FUN_144b431b0(local_6e8);
    if (local_380 == '\x01') {
      local_380 = '\0';
    }
    if (local_398 == '\x01') {
      if (local_3b0 != (longlong *)0x0) {
        LOCK();
        plVar30 = local_3b0 + 1;
        *(int *)plVar30 = (int)*plVar30 + -1;
        UNLOCK();
        if ((int)*plVar30 == 0) {
          (**(code **)*local_3b0)(local_3b0);
          LOCK();
          piVar1 = (int *)((longlong)local_3b0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_3b0 + 0x10))(local_3b0);
          }
        }
      }
      local_398 = '\0';
    }
    FUN_1402f4baa(&local_5d8);
  }
  if (DAT_14cb1d000 != 0) {
    pvVar23 = TlsGetValue(DAT_14cb1d000);
    TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar23 + -1));
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(local_8a0 + 0x250));
LAB_1407d1a72:
  if ((local_f0 ^ (ulonglong)auStack_b48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407d3788 FUN_1407d3788 body=84 status=ok
// SIG undefined FUN_1407d3788(void)

longlong FUN_1407d3788(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x1e8);
  *(uint *)(param_1 + 0x1e8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1ec) < iVar1 + 1U) {
    FUN_1407d4a32(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x1e0);
  if (*(longlong *)(param_1 + 0x1e0) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x78 + lVar2;
  FUN_1407d37dc(lVar2);
  return lVar2;
}



// FUNCTION 1407d37dc FUN_1407d37dc body=104 status=ok
// SIG undefined FUN_1407d37dc(void)

void FUN_1407d37dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[2] = DAT_14cb1d030;
  uVar1 = DAT_14cb1d028;
  *param_1 = DAT_14cb1d020;
  param_1[1] = uVar1;
  uVar1 = DAT_14cb1d028;
  param_1[3] = DAT_14cb1d020;
  param_1[4] = uVar1;
  param_1[5] = DAT_14cb1d030;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  param_1[9] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xc] = DAT_14c8464e0;
  param_1[0xd] = uVar1;
  param_1[0xe] = DAT_14c8464f0;
  return;
}



// FUNCTION 1407d3844 FUN_1407d3844 body=2017 status=ok
// SIG undefined FUN_1407d3844(void)

int * FUN_1407d3844(int *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                   undefined4 param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  longlong *plVar38;
  char cVar39;
  undefined8 uVar40;
  longlong lVar41;
  longlong *plVar42;
  uint uVar43;
  int iVar44;
  longlong lVar45;
  uint uVar46;
  int iVar47;
  int iVar48;
  longlong lVar49;
  longlong *plVar50;
  int iVar51;
  uint uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  float fVar59;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong *local_140;
  int local_134;
  int local_130;
  int local_12c;
  longlong local_128;
  longlong local_120;
  ulonglong local_118;
  longlong local_110;
  int local_104;
  int local_100;
  int local_fc;
  uint local_f8;
  uint local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_2[0x25] == 0) {
    memset(param_1 + 2,0,0x88);
    param_1[0] = -1;
    param_1[1] = -1;
    param_1[2] = -1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = -0x40800000;
    param_1[9] = -0x40800000;
    param_1[10] = -0x40800000;
    param_1[0xb] = -0x40800000;
    param_1[0x24] = -1;
    param_1[0x25] = -1;
    param_1[0x26] = -1;
    param_1[0x27] = -1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_168);
  }
  FUN_144b3f870(param_4,&local_f8,param_3,&local_f4);
  if ((((local_f8 != 0xffffffff) && (local_f4 != 0xffffffff)) &&
      (local_148 = FUN_14488aa2b((int)param_2[0x22]), local_148 != 0)) &&
     (FUN_14026576e(*param_2 + 0x200,&local_104,local_f4 >> 0x16,param_5), local_104 != -1)) {
    uVar40 = FUN_140181538(*param_2);
    lVar41 = FUN_1402ef754(uVar40);
    if (lVar41 != 0) {
      uVar40 = FUN_1407d402c(param_2[0x25] + 0x68);
      plVar42 = (longlong *)FUN_1407d421a(uVar40);
      if ((plVar42 != (longlong *)0x0) &&
         (cVar39 = (**(code **)(*plVar42 + 0x18))(plVar42), cVar39 != '\0')) {
        fVar53 = (float)(**(code **)(*plVar42 + 0x48))(plVar42,param_2 + 0x26);
        fVar54 = (float)(**(code **)(*plVar42 + 0x50))(plVar42,param_2 + 0x26);
        local_12c = local_104;
        local_134 = local_fc;
        if (*(char *)(local_148 + 0x44) == '\0') {
          local_128 = (ulonglong)*(byte *)(local_148 + 0x3c) * 4 + 0x30;
        }
        else {
          local_128 = 0x40;
        }
        uVar43 = local_f8 >> 0x16;
        local_118 = (ulonglong)uVar43;
        local_f8 = local_f8 & 0x3fffff;
        local_120 = *(longlong *)(param_3 + 0x38);
        lVar4 = *(longlong *)(local_120 + (ulonglong)(uVar43 * 0x120));
        lVar5 = *(longlong *)(lVar4 + 0x20);
        local_140 = (longlong *)(lVar5 + 0xc0);
        iVar47 = *(int *)(lVar5 + 0x30);
        lVar45 = *(longlong *)(lVar5 + 0x28);
        uVar52 = local_f8 - iVar47;
        local_130 = local_100;
        if ((int)local_f8 < iVar47) {
          plVar50 = local_140;
          uVar52 = local_f8;
          if ((*(int *)(lVar5 + 0x78) == 0) ||
             (uVar52 = *(uint *)(*(longlong *)(lVar5 + 0x70) + (ulonglong)local_f8 * 4),
             lVar49 = lVar45, uVar46 = local_f8, uVar52 != 0xffffffff)) goto LAB_1407d3a63;
        }
        else {
          plVar50 = (longlong *)(lVar5 + 0xe0);
LAB_1407d3a63:
          lVar49 = *plVar50;
          uVar46 = uVar52;
        }
        iVar51 = *(int *)(lVar5 + 0x40);
        iVar44 = *(int *)(lVar49 + (longlong)(int)uVar46 * 0x14);
        plVar50 = (longlong *)(lVar5 + 0xf0);
        if (iVar44 < iVar51) {
          plVar50 = (longlong *)(lVar5 + 0x38);
        }
        iVar3 = *(int *)(lVar49 + 4 + (longlong)(int)uVar46 * 0x14);
        iVar48 = iVar51;
        if (iVar44 < iVar51) {
          iVar48 = 0;
        }
        plVar38 = (longlong *)(lVar5 + 0xf0);
        if (iVar3 < iVar51) {
          iVar51 = 0;
          plVar38 = (longlong *)(lVar5 + 0x38);
        }
        pfVar1 = (float *)(*plVar50 + (longlong)(iVar44 - iVar48) * 0x10);
        fVar10 = *pfVar1;
        fVar11 = pfVar1[1];
        fVar12 = pfVar1[2];
        pfVar1 = (float *)(*plVar38 + (longlong)(iVar3 - iVar51) * 0x10);
        fVar13 = *pfVar1;
        fVar14 = pfVar1[1];
        fVar15 = pfVar1[2];
        fVar16 = *(float *)(lVar4 + 0x68);
        fVar17 = *(float *)(lVar4 + 0x78);
        fVar18 = *(float *)(lVar4 + 0x88);
        fVar19 = *(float *)(lVar4 + 0x98);
        if ((int)local_f8 < iVar47) {
          uVar52 = local_f8;
          if ((*(int *)(lVar5 + 0x78) == 0) ||
             (uVar52 = *(uint *)(*(longlong *)(lVar5 + 0x70) + (ulonglong)local_f8 * 4),
             uVar46 = local_f8, uVar52 != 0xffffffff)) goto LAB_1407d3f5b;
        }
        else {
          local_140 = (longlong *)(lVar5 + 0xe0);
          uVar52 = local_f8 - iVar47;
LAB_1407d3f5b:
          lVar45 = *local_140;
          uVar46 = uVar52;
        }
        fVar2 = *(float *)(local_148 + local_128);
        if (fVar53 <= 5.0) {
          fVar53 = 5.0;
        }
        if (fVar54 <= 5.0) {
          fVar54 = 5.0;
        }
        dVar6 = (double)(fVar12 * *(float *)(lVar4 + 0x80) +
                         fVar11 * *(float *)(lVar4 + 0x70) + fVar10 * *(float *)(lVar4 + 0x60) +
                        *(float *)(lVar4 + 0x90)) * 100.0;
        dVar57 = (double)(fVar12 * *(float *)(lVar4 + 0x84) +
                          fVar11 * *(float *)(lVar4 + 0x74) + fVar10 * *(float *)(lVar4 + 100) +
                         *(float *)(lVar4 + 0x94)) * 100.0;
        dVar58 = (double)(fVar15 * *(float *)(lVar4 + 0x80) +
                          fVar14 * *(float *)(lVar4 + 0x70) + fVar13 * *(float *)(lVar4 + 0x60) +
                         *(float *)(lVar4 + 0x90)) * 100.0;
        dVar7 = (double)(fVar15 * *(float *)(lVar4 + 0x84) +
                         fVar14 * *(float *)(lVar4 + 0x74) + fVar13 * *(float *)(lVar4 + 100) +
                        *(float *)(lVar4 + 0x94)) * 100.0;
        uVar52 = *(uint *)(lVar45 + 8 + (longlong)(int)uVar46 * 0x14);
        uVar9 = *(int *)(lVar5 + 0x17c) << 0x16 | uVar52 & 0x3fffff;
        if ((*(byte *)(lVar45 + 0x10 + (longlong)(int)uVar46 * 0x14) & 0x40) != 0) {
          uVar9 = uVar52;
        }
        if (uVar52 == 0xffffffff) {
          uVar9 = uVar52;
        }
        uVar52 = uVar9 & 0x3fffff;
        lVar4 = *(longlong *)(local_120 + (ulonglong)((uVar9 >> 0x16) * 0x120));
        lVar5 = *(longlong *)(lVar4 + 0x20);
        local_148 = CONCAT44(local_148._4_4_,fVar54);
        if ((int)uVar52 < *(int *)(lVar5 + 0x30)) {
          plVar50 = (longlong *)(lVar5 + 0xc0);
          uVar46 = uVar52;
          if ((*(int *)(lVar5 + 0x78) == 0) ||
             (uVar46 = *(uint *)(*(longlong *)(lVar5 + 0x70) + (ulonglong)uVar52 * 4),
             uVar46 != 0xffffffff)) goto LAB_1407d3c47;
          lVar45 = *(longlong *)(lVar5 + 0x28);
        }
        else {
          plVar50 = (longlong *)(lVar5 + 0xe0);
          uVar46 = uVar52 - *(int *)(lVar5 + 0x30);
LAB_1407d3c47:
          uVar52 = uVar46;
          lVar45 = *plVar50;
        }
        iVar47 = *(int *)(lVar5 + 0x40);
        iVar51 = *(int *)(lVar45 + (longlong)(int)uVar52 * 0x14);
        plVar50 = (longlong *)(lVar5 + 0xf0);
        iVar44 = iVar47;
        plVar38 = plVar50;
        if (iVar51 < iVar47) {
          iVar44 = 0;
          plVar38 = (longlong *)(lVar5 + 0x38);
        }
        pfVar1 = (float *)(*plVar38 + (longlong)(iVar51 - iVar44) * 0x10);
        fVar20 = *pfVar1;
        fVar21 = pfVar1[1];
        fVar22 = pfVar1[2];
        iVar51 = *(int *)(lVar45 + 4 + (longlong)(int)uVar52 * 0x14);
        if (iVar51 < iVar47) {
          iVar47 = 0;
          plVar50 = (longlong *)(lVar5 + 0x38);
        }
        pfVar1 = (float *)(*plVar50 + (longlong)(iVar51 - iVar47) * 0x10);
        fVar23 = *pfVar1;
        fVar24 = pfVar1[1];
        fVar25 = pfVar1[2];
        fVar26 = *(float *)(lVar4 + 0x60);
        fVar27 = *(float *)(lVar4 + 100);
        fVar28 = *(float *)(lVar4 + 0x68);
        fVar29 = *(float *)(lVar4 + 0x70);
        fVar30 = *(float *)(lVar4 + 0x74);
        fVar31 = *(float *)(lVar4 + 0x78);
        fVar32 = *(float *)(lVar4 + 0x80);
        fVar33 = *(float *)(lVar4 + 0x84);
        fVar34 = *(float *)(lVar4 + 0x88);
        fVar35 = *(float *)(lVar4 + 0x90);
        fVar36 = *(float *)(lVar4 + 0x94);
        fVar37 = *(float *)(lVar4 + 0x98);
        dVar8 = dVar57 - dVar7;
        dVar56 = dVar6 - dVar58;
        fVar55 = (float)SQRT(dVar56 * dVar56 + dVar8 * dVar8);
        if (fVar2 <= fVar55) {
          fVar55 = fVar2;
        }
        if (5.0 <= fVar55) {
          fVar55 = 5.0;
        }
        fVar59 = fVar2 + fVar55 + 1.0;
        if (fVar53 <= fVar59) {
          fVar53 = fVar59;
        }
        *param_1 = local_104;
        param_1[1] = local_100;
        param_1[2] = local_fc;
        *(longlong *)(param_1 + 4) = lVar41;
        *(longlong **)(param_1 + 6) = plVar42;
        param_1[8] = (int)fVar53;
        param_1[9] = (int)fVar54;
        param_1[10] = (int)fVar2;
        param_1[0xb] = (int)fVar55;
        *(double *)(param_1 + 0xc) = dVar6;
        *(double *)(param_1 + 0xe) = dVar57;
        *(double *)(param_1 + 0x10) =
             (double)(fVar12 * fVar18 + fVar11 * fVar17 + fVar10 * fVar16 + fVar19) * 100.0;
        *(double *)(param_1 + 0x12) = dVar58;
        *(double *)(param_1 + 0x14) = dVar7;
        *(double *)(param_1 + 0x16) =
             (double)(fVar15 * fVar18 + fVar14 * fVar17 + fVar13 * fVar16 + fVar19) * 100.0;
        *(double *)(param_1 + 0x18) =
             (double)(fVar22 * fVar32 + fVar21 * fVar29 + fVar20 * fVar26 + fVar35) * 100.0;
        *(double *)(param_1 + 0x1a) =
             (double)(fVar22 * fVar33 + fVar21 * fVar30 + fVar20 * fVar27 + fVar36) * 100.0;
        *(double *)(param_1 + 0x1c) =
             (double)(fVar22 * fVar34 + fVar21 * fVar31 + fVar20 * fVar28 + fVar37) * 100.0;
        *(double *)(param_1 + 0x1e) =
             (double)(fVar25 * fVar32 + fVar24 * fVar29 + fVar23 * fVar26 + fVar35) * 100.0;
        *(double *)(param_1 + 0x20) =
             (double)(fVar25 * fVar33 + fVar24 * fVar30 + fVar23 * fVar27 + fVar36) * 100.0;
        *(double *)(param_1 + 0x22) =
             (double)(fVar25 * fVar34 + fVar24 * fVar31 + fVar23 * fVar28 + fVar37) * 100.0;
        param_1[0x24] = uVar43;
        param_1[0x25] = local_f8;
        param_1[0x26] = local_f4 >> 0x16;
        param_1[0x27] = local_f4 & 0x3fffff;
        local_110 = lVar41;
        goto LAB_1407d3e7b;
      }
    }
  }
  memset(param_1 + 2,0,0x88);
  param_1[0] = -1;
  param_1[1] = -1;
  param_1[2] = -1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = -0x40800000;
  param_1[9] = -0x40800000;
  param_1[10] = -0x40800000;
  param_1[0xb] = -0x40800000;
  param_1[0x24] = -1;
  param_1[0x25] = -1;
  param_1[0x26] = -1;
  param_1[0x27] = -1;
LAB_1407d3e7b:
  if ((local_f0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407d402c FUN_1407d402c body=493 status=ok
// SIG undefined FUN_1407d402c(void)

longlong FUN_1407d402c(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar3 = *plVar5, lVar3 == 0)))) {
    if (*(longlong *)(param_1 + 2) != 0) {
      lVar3 = FUN_140007850();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar3 == 0) || (cVar2 == '\0')) {
        FUN_14485c47a(param_1,lVar3);
        if (lVar3 == 0) goto LAB_1407d40f5;
      }
      else {
        uVar1 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(param_1,lVar3);
        }
      }
      if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) goto LAB_1407d409c;
    }
  }
  else {
LAB_1407d409c:
    if (DAT_14cb1b878 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_140e9e4fe;
      local_48 = &LAB_147e2d7c3;
      local_50 = FUN_140f80add;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x438;
      FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavAnimData",&DAT_14cb1b878,FUN_14641c7a8);
    }
    if ((*(int *)(DAT_14cb1b878 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb1b878 + 0x38) * 8) == DAT_14cb1b878 + 0x30)) goto LAB_1407d40c7;
  }
LAB_1407d40f5:
  lVar3 = 0;
LAB_1407d40c7:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1407d421a FUN_1407d421a body=714 status=ok
// SIG undefined FUN_1407d421a(void)

void FUN_1407d421a(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
      uVar7 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      lVar10 = param_1 + 0xd0;
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        lVar10 = *(longlong *)(param_1 + 0xd8);
      }
      iVar2 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0xe0) - 1U & (uVar7 >> 0x10 ^ uVar7))
                                * 4);
      bVar5 = DAT_14c950c29;
      while (iVar2 != -1) {
        if ((bVar5 & 1) != 0) {
          FUN_1456cec3c(param_2);
          bVar5 = DAT_14c950c29;
        }
        lVar10 = (longlong)iVar2;
        uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x98) + lVar10 * 0x28);
        if (((bVar5 & 1) != 0) && (uVar3 != 0)) {
          FUN_1456cec3c(uVar3);
          bVar5 = DAT_14c950c29;
        }
        if ((bVar5 & 1) != 0) {
          FUN_1456cec3c(param_2);
          bVar5 = DAT_14c950c29;
        }
        lVar9 = *(longlong *)(param_1 + 0x98);
        if (uVar3 == param_2) {
          lVar1 = lVar9 + lVar10 * 0x28;
          if ((lVar1 != 0) &&
             (plVar11 = (longlong *)(lVar9 + lVar10 * 0x28 + 8), plVar11 != (longlong *)0x0)) {
            lVar10 = *(longlong *)(lVar1 + 0x10);
            if (lVar10 == 0) {
              uVar8 = FUN_145cd6c5a();
              lVar10 = FUN_14477b664(uVar8);
              *(longlong *)(lVar1 + 0x10) = lVar10;
            }
            if (*(longlong *)(lVar1 + 0x18) != 0) {
              return;
            }
            if ((lVar10 != 0) && (*plVar11 != 0)) {
              plVar4 = *(longlong **)(lVar10 + 0xb8);
              if ((plVar4 == (longlong *)0x0) ||
                 (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
                *(undefined8 *)(lVar1 + 0x18) = 0;
              }
              else {
                uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
                lVar10 = FUN_144aff482(uVar8,plVar11);
                *(longlong *)(lVar1 + 0x18) = lVar10;
                if (lVar10 != 0) {
                  return;
                }
              }
            }
          }
          break;
        }
        iVar2 = *(int *)(lVar9 + 0x20 + lVar10 * 0x28);
      }
    }
  }
  lVar9 = FUN_14477bcf0();
  lVar10 = *(longlong *)(lVar9 + 0x88);
  if (lVar10 == 0) {
    uVar8 = FUN_145cd6c5a();
    lVar10 = FUN_14477b664(uVar8);
    *(longlong *)(lVar9 + 0x88) = lVar10;
  }
  if (((*(longlong *)(lVar9 + 0x90) == 0) && (lVar10 != 0)) && (*(longlong *)(lVar9 + 0x80) != 0)) {
    plVar11 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar11 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar6 == '\0')) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
      uVar8 = FUN_144aff482(uVar8,(longlong *)(lVar9 + 0x80));
    }
    *(undefined8 *)(lVar9 + 0x90) = uVar8;
  }
  return;
}



// FUNCTION 1407d44e4 FUN_1407d44e4 body=1358 status=ok
// SIG undefined FUN_1407d44e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407d44e4(longlong param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  double *param_6,float param_7)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
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
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  uint uVar26;
  
  dVar3 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x50);
  dVar10 = *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x48);
  dVar18 = dVar10 * dVar10 + dVar3 * dVar3;
  if ((dVar18 != 1.0) || (NAN(dVar18))) {
    dVar15 = DAT_14c8464f0;
    dVar2 = DAT_14c8464e8;
    dVar12 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar18) {
      dVar15 = 0.0;
      dVar2 = dVar3 * (1.0 / SQRT(dVar18));
      dVar12 = dVar10 * (1.0 / SQRT(dVar18));
    }
  }
  else {
    dVar18 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x58);
    dVar15 = (double)(-(ulonglong)(dVar18 == 0.0) & (ulonglong)dVar18);
    dVar2 = dVar3;
    dVar12 = dVar10;
  }
  dVar3 = (double)(DAT_149931e80 ^ (ulonglong)dVar2);
  dVar18 = (double)((*(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x28)) + param_7);
  dVar19 = dVar18 * dVar3;
  dVar10 = (double)param_7;
  dVar9 = (*(double *)(param_1 + 0x58) - dVar15 * dVar18) - dVar15 * dVar10;
  dVar22 = (*(double *)(param_1 + 0x50) - dVar12 * dVar18) - dVar2 * dVar10;
  dVar17 = (*(double *)(param_1 + 0x48) - dVar19) - dVar10 * dVar12;
  dVar5 = (*(double *)(param_1 + 0x40) - dVar15 * dVar18) + dVar15 * dVar10;
  dVar18 = (*(double *)(param_1 + 0x38) - dVar12 * dVar18) + dVar2 * dVar10;
  dVar2 = (*(double *)(param_1 + 0x30) - dVar19) + dVar10 * dVar12;
  dVar20 = dVar9 - dVar5;
  dVar23 = dVar22 - dVar18;
  dVar4 = dVar17 - dVar2;
  dVar7 = (param_2[2] - dVar5) * dVar20 +
          (*param_2 - dVar2) * dVar4 + (param_2[1] - dVar18) * dVar23;
  dVar19 = dVar2;
  dVar6 = dVar5;
  dVar10 = dVar18;
  if ((0.0 < dVar7) &&
     (dVar14 = dVar20 * dVar20 + dVar4 * dVar4 + dVar23 * dVar23, dVar19 = dVar17, dVar6 = dVar9,
     dVar10 = dVar22, dVar7 < dVar14)) {
    dVar7 = dVar7 / dVar14;
    dVar6 = dVar5 + dVar20 * dVar7;
    dVar10 = dVar18 + dVar23 * dVar7;
    dVar19 = dVar2 + dVar4 * dVar7;
  }
  dVar4 = *(double *)(param_1 + 0x68) - *(double *)(param_1 + 0x80);
  dVar2 = *(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x78);
  dVar18 = dVar2 * dVar2 + dVar4 * dVar4;
  if ((dVar18 != 1.0) || (NAN(dVar18))) {
    if (dVar18 < 9.99999993922529e-09) {
      uVar25 = SUB84(DAT_14c8464f0,0);
      uVar26 = (uint)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar4 = DAT_14c8464e8;
      dVar2 = DAT_14c8464e0;
    }
    else {
      uVar25 = 0;
      uVar26 = 0;
      dVar4 = dVar4 * (1.0 / SQRT(dVar18));
      dVar2 = dVar2 * (1.0 / SQRT(dVar18));
    }
  }
  else {
    dVar18 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x88);
    uVar8 = -(ulonglong)(dVar18 == 0.0) & (ulonglong)dVar18;
    uVar25 = (undefined4)uVar8;
    uVar26 = (uint)(uVar8 >> 0x20);
  }
  dVar18 = (double)(*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x28));
  dVar5 = (double)CONCAT44(uVar26,uVar25) * dVar18;
  dVar13 = *(double *)(param_1 + 0x88) - dVar5;
  dVar21 = *(double *)(param_1 + 0x80) - dVar2 * dVar18;
  dVar16 = *(double *)(param_1 + 0x78) - -dVar4 * dVar18;
  dVar5 = *(double *)(param_1 + 0x70) - dVar5;
  dVar9 = *(double *)(param_1 + 0x68) - dVar2 * dVar18;
  dVar17 = *(double *)(param_1 + 0x60) - -dVar4 * dVar18;
  dVar7 = dVar13 - dVar5;
  dVar23 = dVar21 - dVar9;
  dVar24 = dVar16 - dVar17;
  dVar18 = (dVar6 - dVar5) * dVar7 + (dVar19 - dVar17) * dVar24 + (dVar10 - dVar9) * dVar23;
  dVar14 = dVar5;
  dVar20 = dVar17;
  dVar22 = dVar9;
  if ((0.0 < dVar18) &&
     (dVar11 = dVar7 * dVar7 + dVar24 * dVar24 + dVar23 * dVar23, dVar14 = dVar13, dVar20 = dVar16,
     dVar22 = dVar21, dVar18 < dVar11)) {
    dVar18 = dVar18 / dVar11;
    dVar14 = dVar5 + dVar7 * dVar18;
    dVar22 = dVar9 + dVar23 * dVar18;
    dVar20 = dVar17 + dVar24 * dVar18;
  }
  *param_3 = dVar19;
  param_3[1] = dVar10;
  param_3[2] = dVar6;
  *param_4 = dVar3;
  param_4[1] = dVar12;
  param_4[2] = dVar15;
  *param_5 = dVar20;
  param_5[1] = dVar22;
  param_5[2] = dVar14;
  *param_6 = dVar4;
  auVar1._8_4_ = uVar25;
  auVar1._0_8_ = -dVar2;
  auVar1._12_4_ = uVar26 ^ 0x80000000;
  *(undefined1 (*) [16])(param_6 + 1) = auVar1;
  return;
}



// FUNCTION 1407d4a32 FUN_1407d4a32 body=363 status=ok
// SIG undefined FUN_1407d4a32(void)

void FUN_1407d4a32(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x1e8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 5) {
    uVar6 = 4;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (4 < *(uint *)(param_1 + 0x1ec)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 0x78;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1407d4ac4;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_1407d4ac4:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 / 0x78)) {
      uVar6 = uVar4 / 0x78 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x1ec) = (int)uVar6;
  FUN_140105f56(param_1,param_2,uVar6,0x78);
  return;
}



// FUNCTION 1407d4b9e FUN_1407d4b9e body=70 status=ok
// SIG undefined FUN_1407d4b9e(void)

void FUN_1407d4b9e(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_4 - param_3 != 0 && param_3 <= param_4) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    lVar3 = 0;
    do {
      FUN_1407d4be4(uVar2,*(undefined4 *)((longlong)param_3 * 4 + lVar1 + lVar3));
      lVar3 = lVar3 + 4;
    } while ((ulonglong)(uint)(param_4 - param_3) << 2 != lVar3);
  }
  return;
}



// FUNCTION 1407d4be4 FUN_1407d4be4 body=247 status=ok
// SIG undefined FUN_1407d4be4(void)

void FUN_1407d4be4(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar7 = (longlong)param_2 * 0x60;
    if (0 < *(int *)(*(longlong *)(param_1 + 0xa0) + 0x58 + lVar7)) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar7 + 0x50);
      fVar2 = *(float *)(lVar7 + 0xe8);
      fVar3 = *(float *)(lVar7 + 0x1c);
      fVar4 = *(float *)(lVar7 + 0x20);
      lVar6 = *(longlong *)(param_1 + 0x58);
      lVar5 = (longlong)param_2 * 0x50;
      *(double *)(lVar6 + 0x18 + lVar5) = (double)(*(float *)(lVar7 + 0x18) * fVar2);
      *(double *)(lVar6 + 0x20 + lVar5) = (double)(fVar3 * fVar2);
      *(double *)(lVar6 + 0x28 + lVar5) = (double)(fVar2 * fVar4);
      fVar2 = *(float *)(lVar7 + 0xf4);
      fVar3 = *(float *)(lVar7 + 0x1c);
      fVar4 = *(float *)(lVar7 + 0x20);
      lVar6 = *(longlong *)(param_1 + 0x58);
      *(double *)(lVar6 + 0x30 + lVar5) = (double)(*(float *)(lVar7 + 0x18) * fVar2);
      *(double *)(lVar6 + 0x38 + lVar5) = (double)(fVar3 * fVar2);
      *(double *)(lVar6 + 0x40 + lVar5) = (double)(fVar2 * fVar4);
    }
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x78) + (longlong)param_2 * 8) = 0;
  lVar7 = *(longlong *)(param_1 + 0xa0);
  lVar6 = (longlong)param_2 * 0x60;
  *(undefined8 *)(lVar7 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar7 + 0x30 + lVar6) = 0;
  puVar1 = (undefined8 *)(lVar7 + 0x50 + lVar6);
  *puVar1 = 0;
  puVar1[1] = 0;
  return;
}



// FUNCTION 1407d4ce2 FUN_1407d4ce2 body=57 status=ok
// SIG undefined FUN_1407d4ce2(void)

void FUN_1407d4ce2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22810 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22810 = FUN_140002ddd(FUN_146439952,uVar1,L"GpsFlow_Priority");
  }
  return;
}



// FUNCTION 1407d4d1c FUN_1407d4d1c body=29 status=ok
// SIG undefined FUN_1407d4d1c(void)

void FUN_1407d4d1c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1407d4d3a FUN_1407d4d3a body=31 status=ok
// SIG undefined FUN_1407d4d3a(void)

undefined8 FUN_1407d4d3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1407d4d5a FUN_1407d4d5a body=1573 status=ok
// SIG undefined FUN_1407d4d5a(void)

void FUN_1407d4d5a(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1407d5380();
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) goto LAB_1407d5050;
  if ((((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar9 != 0 &&
       (*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x1c))) &&
      (((*(uint *)(lVar9 + 8) & 0x10200000) == 0 &&
       (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(), lVar9 != 0)))))) {
    if (DAT_14caf64b8 == 0) {
      local_70 = &local_58;
      local_58 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_142b4754c;
      local_78 = &LAB_147c45ce0;
      local_80 = &LAB_1463f1ff4;
      local_88 = &DAT_149e063b2;
      local_90 = 0x4000000000;
      local_98 = 0x10000004;
      local_a0 = 8;
      local_a8 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) == DAT_14caf64b8 + 0x30)) {
      if (DAT_14cb253f8 == 0) {
        local_70 = &local_58;
        local_58 = FUN_1449e2820;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_14081d0ea;
        local_78 = &LAB_147f6f09d;
        local_80 = &LAB_146201c25;
        local_88 = &DAT_149e063b2;
        local_90 = 0;
        local_98 = 0x10000006;
        local_a0 = 8;
        local_a8 = 0x480;
        FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
      }
      lVar6 = DAT_14cb253f8;
      if (((*(longlong *)(DAT_14cb253f8 + 0x110) != 0) ||
          (FUN_140aa6c08(DAT_14cb253f8), *(longlong *)(lVar6 + 0x110) != 0)) &&
         (plVar3 = DAT_14cb25be0, DAT_14cb25be0 != (longlong *)0x0)) {
        if (*(int *)(param_1 + 0x34) == 0) {
LAB_1407d50cd:
          uVar4 = 0;
        }
        else {
          uVar1 = *(uint *)(param_1 + 0x30);
          uVar4 = 0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
            puVar7 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((puVar7 == (undefined8 *)0x0) ||
               ((*(int *)(puVar7 + 2) != *(int *)(param_1 + 0x34) ||
                ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_1407d50cd;
            uVar4 = *puVar7;
          }
        }
        uVar10 = (**(code **)(*DAT_14cb25be0 + 0x2b0))(DAT_14cb25be0,lVar9,uVar4);
        lVar9 = *param_2;
        lVar6 = plVar3[0x19];
        if (lVar6 == 0) {
          uVar4 = FUN_1407f787c();
          lVar6 = FUN_14477b664(uVar4);
          plVar3[0x19] = lVar6;
        }
        lVar5 = plVar3[0x1a];
        if (((lVar5 == 0) && (lVar5 = 0, lVar6 != 0)) && (plVar3[0x18] != 0)) {
          plVar8 = *(longlong **)(lVar6 + 0xb8);
          if ((plVar8 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar2 == '\0')) {
            lVar5 = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar8 + 0x110))(plVar8);
            lVar5 = FUN_144aff482(uVar4,plVar3 + 0x18);
          }
          plVar3[0x1a] = lVar5;
        }
        local_a8 = local_a8 & 0xffffff00;
        FUN_1447997cc(lVar9,lVar5,uVar10,0);
      }
    }
  }
  if (((*(longlong **)(param_1 + 0x20) == (longlong *)0x0) || (*(int *)(param_1 + 0x1c) == 0)) ||
     ((uVar1 = *(uint *)(param_1 + 0x18), (int)uVar1 < 0 ||
      ((((DAT_14c9647dc <= (int)uVar1 ||
         (lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar9 == 0)) ||
        (*(int *)(lVar9 + 0x10) != *(int *)(param_1 + 0x1c))) ||
       (((*(uint *)(lVar9 + 8) & 0x10200000) != 0 ||
        (plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(),
        plVar3 == (longlong *)0x0)))))))) goto LAB_1407d5050;
  if (DAT_14caf64b8 == 0) {
    local_70 = &local_58;
    local_58 = FUN_141030f22;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_142b4754c;
    local_78 = &LAB_147c45ce0;
    local_80 = &LAB_1463f1ff4;
    local_88 = &DAT_149e063b2;
    local_90 = 0x4000000000;
    local_98 = 0x10000004;
    local_a0 = 8;
    local_a8 = 0x428;
    FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
  }
  if ((*(int *)(plVar3[2] + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8)
      != DAT_14caf64b8 + 0x30)) goto LAB_1407d5050;
  lVar9 = *plVar3;
  if (*(code **)(lVar9 + 0x5e8) == FUN_140972dde) {
    if (plVar3[0x76] == 0) {
      if (*(code **)(lVar9 + 0x5f8) == FUN_144784df4) {
        if (*(code **)(plVar3[0x784] + 0x18) == (code *)&LAB_144904684) {
          if ((((*(int *)((longlong)plVar3 + 0x75b4) == 0) ||
               (uVar1 = *(uint *)(plVar3 + 0xeb6), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)
              ) || (((plVar8 = (longlong *)
                               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                     plVar8 == (longlong *)0x0 ||
                     ((int)plVar8[2] != *(int *)((longlong)plVar3 + 0x75b4))) ||
                    ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) goto LAB_1407d5050;
          if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
            lVar9 = *plVar8;
          }
          else {
            lVar9 = 0;
          }
          lVar9 = lVar9 + 0x110;
        }
        else {
          lVar9 = (**(code **)(plVar3[0x784] + 0x18))(plVar3 + 0x784);
        }
        if (lVar9 == 0) goto LAB_1407d5050;
        lVar9 = *(longlong *)(lVar9 + 0x20);
      }
      else {
        lVar9 = (**(code **)(lVar9 + 0x5f8))(plVar3);
      }
      if (lVar9 == 0) goto LAB_1407d5050;
      lVar9 = *(longlong *)(lVar9 + 0x3b0);
      goto LAB_1407d50ac;
    }
  }
  else {
    lVar9 = (**(code **)(lVar9 + 0x5e8))(plVar3);
LAB_1407d50ac:
    if (lVar9 == 0) goto LAB_1407d5050;
    lVar9 = *plVar3;
  }
  cVar2 = (**(code **)(lVar9 + 0x700))(plVar3);
  if (cVar2 != '\0') {
    *(undefined1 *)(*param_2 + 0xb0) = 7;
  }
LAB_1407d5050:
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407d5380 FUN_1407d5380 body=220 status=ok
// SIG undefined FUN_1407d5380(void)

void FUN_1407d5380(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  
  FUN_1407d545c();
  uVar2 = *param_2;
  cVar1 = *(char *)(param_1 + 0x300);
  lVar7 = *(longlong *)(param_1 + 0x470);
  if (lVar7 == 0) {
    uVar5 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x470) = lVar7;
  }
  lVar6 = *(longlong *)(param_1 + 0x478);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(param_1 + 0x468) == 0))
  goto LAB_1407d53bb;
  plVar3 = *(longlong **)(lVar7 + 0xb8);
  if (plVar3 == (longlong *)0x0) {
LAB_1407d5458:
    lVar6 = 0;
  }
  else {
    cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
    if (cVar4 == '\0') goto LAB_1407d5458;
    uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x468));
  }
  *(longlong *)(param_1 + 0x478) = lVar6;
LAB_1407d53bb:
  if (cVar1 == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x3f800000;
  }
  FUN_1447997cc(uVar2,lVar6,uVar8,0,0);
  return;
}



// FUNCTION 1407d545c FUN_1407d545c body=662 status=ok
// SIG undefined FUN_1407d545c(void)

void FUN_1407d545c(longlong param_1,longlong *param_2)

{
  __uint64 *p_Var1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((longlong *)*param_2 != (longlong *)0x0) && (*(longlong *)*param_2 != -1)) {
    if ((longlong)*(int *)(param_1 + 0x208) != 0) {
      plVar9 = *(longlong **)(param_1 + 0x200);
      lVar10 = (longlong)*(int *)(param_1 + 0x208) << 5;
      do {
        lVar7 = *param_2;
        lVar3 = plVar9[3];
        lVar6 = plVar9[1];
        if (lVar6 == 0) {
          if (DAT_14cb256c8 == 0) {
            uVar5 = FUN_140cd185c();
            DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar5,L"WwiseGameParameterDef");
          }
          lVar6 = FUN_14477b664(DAT_14cb256c8);
          plVar9[1] = lVar6;
        }
        lVar8 = plVar9[2];
        if (lVar8 == 0) {
          if (lVar6 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = 0;
            if (*plVar9 != 0) {
              plVar2 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
                lVar8 = 0;
              }
              else {
                uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar8 = FUN_144aff482(uVar5,plVar9);
              }
              plVar9[2] = lVar8;
            }
          }
        }
        local_68 = 0;
        FUN_1447997cc(lVar7,lVar8,(int)lVar3,0);
        plVar9 = plVar9 + 4;
        lVar10 = lVar10 + -0x20;
      } while (lVar10 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x218) != 0) {
      plVar9 = *(longlong **)(param_1 + 0x210);
      lVar10 = (longlong)*(int *)(param_1 + 0x218) * 0x18;
      do {
        p_Var1 = (__uint64 *)*param_2;
        lVar7 = plVar9[1];
        if (lVar7 == 0) {
          if (DAT_14cb25788 == 0) {
            uVar5 = FUN_140cd185c();
            DAT_14cb25788 = FUN_140002ddd(FUN_141819041,uVar5,L"WwiseSwitchDef");
          }
          lVar7 = FUN_14477b664(DAT_14cb25788);
          plVar9[1] = lVar7;
        }
        lVar6 = plVar9[2];
        if (lVar6 == 0) {
          if ((lVar7 != 0) && (*plVar9 != 0)) {
            plVar2 = *(longlong **)(lVar7 + 0xb8);
            if ((plVar2 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
              lVar6 = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar6 = FUN_144aff482(uVar5,plVar9);
            }
            plVar9[2] = lVar6;
            goto LAB_1407d557c;
          }
        }
        else {
LAB_1407d557c:
          if (((lVar6 != 0) && (*p_Var1 != 0xffffffffffffffff)) && (DAT_14cb25ab0 == '\x01')) {
            AK::SoundEngine::SetSwitch(*(uint *)(lVar6 + 0x48),*(uint *)(lVar6 + 0x38),*p_Var1);
          }
        }
        plVar9 = plVar9 + 3;
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != 0);
    }
    local_58 = *param_2;
    if (local_58 != 0) {
      *(int *)(local_58 + 0x108) = *(int *)(local_58 + 0x108) + 1;
    }
    FUN_1407d5998(param_1,&local_58);
  }
  FUN_1407d56f4(param_1,param_2);
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407d56f4 FUN_1407d56f4 body=669 status=ok
// SIG undefined FUN_1407d56f4(void)

void FUN_1407d56f4(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)param_1[4];
  if ((((((plVar2 != (longlong *)0x0) && (*(int *)((longlong)param_1 + 0x1c) != 0)) &&
        (uVar1 = *(uint *)(param_1 + 3), -1 < (int)uVar1)) &&
       (((int)uVar1 < DAT_14c9647dc &&
        (lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar8 != 0)))) &&
      ((*(int *)(lVar8 + 0x10) == *(int *)((longlong)param_1 + 0x1c) &&
       (((*(uint *)(lVar8 + 8) & 0x10200000) == 0 && ((longlong *)*param_2 != (longlong *)0x0))))))
     && (*(longlong *)*param_2 != -1)) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
  }
  (**(code **)(*param_1 + 0x30))(param_1,param_2);
  param_2 = (longlong *)*param_2;
  if ((*param_2 != -1) && (*(char *)((longlong)param_2 + 0x26c) == '\x01')) {
    if (DAT_14cb253f8 == (longlong *)0x0) {
      local_60 = &local_48;
      local_48 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_147f6f09d;
      local_70 = &LAB_146201c25;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000006;
      local_90 = 8;
      local_98 = 0x480;
      FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
    }
    plVar2 = DAT_14cb253f8;
    if (((DAT_14cb253f8[0x22] != 0) ||
        ((**(code **)(*DAT_14cb253f8 + 1000))(DAT_14cb253f8), plVar2[0x22] != 0)) &&
       (lVar8 = DAT_14cb25be0, DAT_14cb25be0 != 0)) {
      lVar3 = param_2[0x4d];
      lVar7 = *(longlong *)(DAT_14cb25be0 + 0xb0);
      if (lVar7 == 0) {
        if (DAT_14cb256c8 == 0) {
          uVar5 = FUN_140cd185c();
          DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar5,L"WwiseGameParameterDef");
        }
        lVar7 = FUN_14477b664(DAT_14cb256c8);
        *(longlong *)(lVar8 + 0xb0) = lVar7;
      }
      lVar6 = *(longlong *)(lVar8 + 0xb8);
      if (((lVar6 == 0) && (lVar6 = 0, lVar7 != 0)) && (*(longlong *)(lVar8 + 0xa8) != 0)) {
        plVar2 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
          lVar6 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar8 + 0xa8));
        }
        *(longlong *)(lVar8 + 0xb8) = lVar6;
      }
      local_98 = local_98 & 0xffffff00;
      FUN_1447997cc(param_2,lVar6,(int)lVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407d5998 FUN_1407d5998 body=2796 status=ok
// SIG undefined FUN_1407d5998(void)

void FUN_1407d5998(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  __uint64 _Var8;
  AkAuxSendValue *pAVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  __uint64 *p_Var16;
  __uint64 *p_Var17;
  AkObstructionOcclusionValues *pAVar18;
  uint uVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  longlong lVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_1d8 [32];
  float *local_1b8;
  longlong *local_1b0;
  __uint64 *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  __uint64 *local_180;
  __uint64 *local_178;
  longlong *local_170;
  __uint64 *local_168;
  longlong *local_160;
  AkObstructionOcclusionValues *local_158;
  undefined8 uStack_150;
  __uint64 local_140;
  float local_134;
  AkAuxSendValue local_130 [128];
  AkAuxSendValue *local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  lVar23 = DAT_14cb259f8;
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  p_Var17 = (__uint64 *)*param_2;
  if (p_Var17 == (__uint64 *)0x0) goto LAB_1407d5fd7;
  _Var8 = *p_Var17;
  if ((_Var8 != 0xffffffffffffffff) && (DAT_14cb259f8 != 0)) {
    if ((*(int *)(param_1 + 0x34) != 0) &&
       ((((uVar19 = *(uint *)(param_1 + 0x30), -1 < (int)uVar19 && ((int)uVar19 < DAT_14c9647dc)) &&
         (lVar20 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8), lVar20 != 0)) &&
        ((*(int *)(lVar20 + 0x10) == *(int *)(param_1 + 0x34) &&
         ((*(uint *)(lVar20 + 8) & 0x10200000) == 0)))))) {
      *(int *)(p_Var17 + 0x21) = (int)p_Var17[0x21] + 1;
      plVar11 = *(longlong **)(*(longlong *)(lVar23 + 0x70) + 0x20);
      plVar14 = *(longlong **)(*(longlong *)(lVar23 + 0x70) + 0x28);
      local_180 = p_Var17;
      if (plVar14 == (longlong *)0x0) {
LAB_1407d5ab0:
        if (((_Var8 != 0xffffffffffffffff) && (plVar11 != (longlong *)0x0)) &&
           (*(longlong *)(lVar23 + 0xa8) != 0)) {
          (**(code **)(*plVar11 + 0x30))();
        }
        if (plVar14 != (longlong *)0x0) goto LAB_1407d5ad5;
      }
      else {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        if (p_Var17 != (__uint64 *)0x0) {
          _Var8 = *p_Var17;
          goto LAB_1407d5ab0;
        }
LAB_1407d5ad5:
        LOCK();
        plVar11 = plVar14 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      p_Var17 = local_180;
      if (local_180 != (__uint64 *)0x0) {
        *(int *)(local_180 + 0x21) = (int)local_180[0x21] + -1;
        if (((int)local_180[0x26] < 1) && (FUN_1400847bc(local_180 + 0x17), (int)p_Var17[0x21] == 0)
           ) {
          FUN_140087e46(p_Var17);
          if (*p_Var17 != 0xffffffffffffffff) {
            if (DAT_14cb259f8 == 0) goto LAB_1407d5b13;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40));
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30));
          }
        }
LAB_1407d5b13:
        local_180 = (__uint64 *)0x0;
      }
    }
    p_Var17 = (__uint64 *)*param_2;
    if (p_Var17 == (__uint64 *)0x0) goto LAB_1407d5fd7;
    _Var8 = *p_Var17;
    if (_Var8 != 0xffffffffffffffff) {
      plVar11 = *(longlong **)(lVar23 + 0x70);
      local_b0 = (AkAuxSendValue *)0x0;
      local_a8 = 0x800000000;
      if ((longlong)(int)p_Var17[0x15] == 0) {
        local_a8._0_4_ = 0;
      }
      else {
        plVar14 = (longlong *)p_Var17[0x14];
        plVar21 = plVar14 + (longlong)(int)p_Var17[0x15] * 2;
        do {
          plVar13 = (longlong *)plVar14[1];
          if (plVar13 != (longlong *)0x0) {
            p_Var17 = (__uint64 *)*plVar14;
            LOCK();
            *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
            UNLOCK();
            iVar7 = (int)plVar13[1];
            do {
              if (iVar7 == 0) goto LAB_1407d5f51;
              LOCK();
              iVar4 = (int)plVar13[1];
              bVar24 = iVar7 == iVar4;
              if (bVar24) {
                *(int *)(plVar13 + 1) = iVar7 + 1;
                iVar4 = iVar7;
              }
              iVar7 = iVar4;
              UNLOCK();
            } while (!bVar24);
            if ((p_Var17 != (__uint64 *)0x0) && (_Var8 = *p_Var17, _Var8 != 0xffffffffffffffff)) {
              fVar27 = 1.0;
              local_1b0 = plVar13;
              local_1a8 = p_Var17;
              local_1a0 = plVar14;
              local_198 = plVar11;
              if (plVar11[4] != 0) {
                lVar23 = *param_2;
                plVar14 = (longlong *)(lVar23 + 0xb8);
                uVar19 = (int)(_Var8 >> 0x20) * 0x17 + (int)_Var8;
                local_140 = _Var8;
                if (*(int *)(lVar23 + 0xc0) != *(int *)(lVar23 + 0xec)) {
                  lVar20 = lVar23 + 0xf0;
                  if (*(longlong *)(lVar23 + 0xf8) != 0) {
                    lVar20 = *(longlong *)(lVar23 + 0xf8);
                  }
                  iVar7 = *(int *)(lVar20 + (ulonglong)(*(int *)(lVar23 + 0x100) - 1U & uVar19) * 4)
                  ;
                  if (iVar7 != -1) {
                    do {
                      lVar23 = *plVar14 + (longlong)iVar7 * 0x20;
                      if (*(__uint64 *)(*plVar14 + (longlong)iVar7 * 0x20) == _Var8) {
                        if (lVar23 != 0) goto LAB_1407d5c79;
                        break;
                      }
                      iVar7 = *(int *)(lVar23 + 0x18);
                    } while (iVar7 != -1);
                  }
                }
                local_158 = (AkObstructionOcclusionValues *)&local_140;
                local_1b8 = (float *)0x0;
                FUN_14008727e(plVar14,&local_134,uVar19,&local_158);
                lVar23 = *plVar14 + (longlong)(int)local_134 * 0x20;
LAB_1407d5c79:
                p_Var17 = local_1a8;
                plVar14 = (longlong *)(lVar23 + 8);
                if (*(int *)(lVar23 + 0x10) == 0) {
                  FUN_140086920(plVar14);
                }
                plVar13 = local_198;
                pfVar3 = (float *)*plVar14;
                _Var8 = *p_Var17;
                if ((longlong)(int)plVar11[3] != 0) {
                  p_Var17 = (__uint64 *)plVar11[2];
                  lVar20 = (longlong)(int)plVar11[3] * 0x18;
                  do {
                    if (*p_Var17 == _Var8) {
                      if (p_Var17 != (__uint64 *)0x0) {
                        _Var8 = p_Var17[1];
                        local_190 = param_2;
                        local_188 = plVar21;
                        uVar6 = (**(code **)(*(longlong *)local_198[4] + 0x18))();
                        fVar27 = pfVar3[1];
                        lVar20 = (longlong)(int)(uint)local_a8;
                        uVar19 = (uint)local_a8 + 1;
                        if (local_a8._4_4_ < uVar19) {
                          uVar10 = local_a8 & 0xffffffff;
                          local_a8._0_4_ = uVar19;
                          FUN_147f7fd78(local_130,uVar10);
                          uVar19 = (uint)local_a8;
                        }
                        local_a8._0_4_ = uVar19;
                        pAVar9 = local_b0;
                        if (local_b0 == (AkAuxSendValue *)0x0) {
                          pAVar9 = local_130;
                        }
                        lVar20 = lVar20 * 0x10;
                        *(__uint64 *)(pAVar9 + lVar20) = _Var8;
                        *(undefined4 *)(pAVar9 + lVar20 + 8) = uVar6;
                        *(float *)(pAVar9 + lVar20 + 0xc) = fVar27;
                        _Var8 = p_Var17[2];
                        uVar6 = (**(code **)(*(longlong *)plVar13[4] + 0x18))();
                        uVar19 = (uint)local_a8;
                        fVar27 = pfVar3[2];
                        lVar20 = (longlong)(int)(uint)local_a8;
                        local_a8._0_4_ = (uint)local_a8 + 1;
                        if (local_a8._4_4_ < (uint)local_a8) {
                          FUN_147f7fd78(local_130,uVar19);
                        }
                        param_2 = local_190;
                        pAVar9 = local_b0;
                        if (local_b0 == (AkAuxSendValue *)0x0) {
                          pAVar9 = local_130;
                        }
                        lVar20 = lVar20 * 0x10;
                        *(__uint64 *)(pAVar9 + lVar20) = _Var8;
                        *(undefined4 *)(pAVar9 + lVar20 + 8) = uVar6;
                        *(float *)(pAVar9 + lVar20 + 0xc) = fVar27;
                        AK::SoundEngine::SetObjectObstructionAndOcclusion
                                  (*(__uint64 *)*local_190,p_Var17[1],pfVar3[3],pfVar3[4]);
                        AK::SoundEngine::SetObjectObstructionAndOcclusion
                                  (*(__uint64 *)*param_2,p_Var17[2],pfVar3[3],pfVar3[4]);
                        _Var8 = *local_1a8;
                        plVar21 = local_188;
                      }
                      break;
                    }
                    p_Var17 = p_Var17 + 3;
                    lVar20 = lVar20 + -0x18;
                  } while (lVar20 != 0);
                }
                fVar27 = *pfVar3;
                AK::SoundEngine::SetObjectObstructionAndOcclusion
                          (*(__uint64 *)*param_2,_Var8,pfVar3[3],pfVar3[4]);
                plVar13 = local_1b0;
                local_158 = (AkObstructionOcclusionValues *)0x0;
                uStack_150 = 0;
                iVar7 = *(int *)(lVar23 + 0x10);
                if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(iVar7);
                }
                if (iVar7 != 0) {
                  FUN_1447903a8(&local_158);
                  iVar7 = *(int *)(lVar23 + 0x10);
                  if ((longlong)iVar7 != 0) {
                    lVar23 = *plVar14;
                    lVar20 = 0;
                    do {
                      uVar10 = uStack_150;
                      lVar15 = (longlong)(int)(uint)uStack_150;
                      uVar19 = (uint)uStack_150 + 1;
                      uStack_150 = CONCAT44(uStack_150._4_4_,uVar19);
                      if (uStack_150._4_4_ < uVar19) {
                        FUN_147f7fe7e(&local_158,uVar10 & 0xffffffff);
                      }
                      *(undefined4 *)(local_158 + lVar15 * 8 + 4) =
                           *(undefined4 *)(lVar23 + 0xc + lVar20);
                      *(undefined4 *)(local_158 + lVar15 * 8) =
                           *(undefined4 *)(lVar23 + 0x10 + lVar20);
                      lVar20 = lVar20 + 0x18;
                    } while ((longlong)iVar7 * 0x18 != lVar20);
                  }
                }
                plVar11 = local_198;
                plVar14 = local_1a0;
                p_Var17 = local_1a8;
                _Var8 = *local_1a8;
                if ((longlong)(int)local_198[3] != 0) {
                  p_Var16 = (__uint64 *)local_198[2];
                  lVar23 = (longlong)(int)local_198[3] * 0x18;
                  do {
                    if (*p_Var16 == _Var8) {
                      if (p_Var16 != (__uint64 *)0x0) {
                        AK::SoundEngine::SetMultipleObstructionAndOcclusion
                                  (*(__uint64 *)*param_2,p_Var16[1],local_158,(uint)uStack_150);
                        AK::SoundEngine::SetMultipleObstructionAndOcclusion
                                  (*(__uint64 *)*param_2,p_Var16[2],local_158,(uint)uStack_150);
                        _Var8 = *p_Var17;
                      }
                      break;
                    }
                    p_Var16 = p_Var16 + 3;
                    lVar23 = lVar23 + -0x18;
                  } while (lVar23 != 0);
                }
                AK::SoundEngine::SetMultipleObstructionAndOcclusion
                          (*(__uint64 *)*param_2,_Var8,local_158,(uint)uStack_150);
                if (local_158 != (AkObstructionOcclusionValues *)0x0) {
                  FUN_1400020a8();
                }
              }
              local_158 = (AkObstructionOcclusionValues *)0x0;
              uStack_150 = 0;
              if ((longlong)(int)plVar11[1] != 0) {
                puVar12 = (undefined8 *)*plVar11;
                puVar22 = puVar12 + (longlong)(int)plVar11[1] * 2;
                fVar26 = fVar27;
                do {
                  plVar11 = local_1b0;
                  plVar14 = (longlong *)*puVar12;
                  LOCK();
                  *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
                  UNLOCK();
                  local_168 = local_1a8;
                  local_160 = local_1b0;
                  LOCK();
                  *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
                  UNLOCK();
                  cVar5 = (**(code **)(*plVar14 + 0x18))(plVar14,&local_168);
                  plVar14 = local_1b0;
                  LOCK();
                  plVar11 = plVar11 + 1;
                  *(int *)plVar11 = (int)*plVar11 + -1;
                  UNLOCK();
                  if ((int)*plVar11 == 0) {
                    (**(code **)*local_1b0)(local_1b0);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar14 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*local_1b0 + 0x10))();
                    }
                  }
                  plVar11 = local_1b0;
                  if (cVar5 != '\0') {
                    plVar14 = (longlong *)*puVar12;
                    LOCK();
                    *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
                    UNLOCK();
                    local_178 = local_1a8;
                    local_170 = local_1b0;
                    LOCK();
                    *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
                    UNLOCK();
                    local_1b8 = &local_134;
                    (**(code **)(*plVar14 + 0x20))(plVar14,param_2,&local_178,&local_140);
                    plVar14 = local_1b0;
                    LOCK();
                    plVar11 = plVar11 + 1;
                    *(int *)plVar11 = (int)*plVar11 + -1;
                    UNLOCK();
                    if ((int)*plVar11 == 0) {
                      (**(code **)*local_1b0)(local_1b0);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar14 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*local_1b0 + 0x10))();
                      }
                    }
                    local_140 = CONCAT44(local_140._4_4_,(float)local_140 * fVar27);
                    if ((longlong)(int)(uint)uStack_150 != 0) {
                      lVar23 = (longlong)(int)(uint)uStack_150 << 3;
                      pAVar18 = local_158;
                      do {
                        iVar7 = (**(code **)(*(longlong *)*puVar12 + 0x10))();
                        if (iVar7 == *(int *)pAVar18) {
                          if (pAVar18 != (AkObstructionOcclusionValues *)0x0) goto LAB_1407d62aa;
                          break;
                        }
                        pAVar18 = pAVar18 + 8;
                        lVar23 = lVar23 + -8;
                      } while (lVar23 != 0);
                    }
                    uVar10 = uStack_150;
                    lVar23 = (longlong)(int)(uint)uStack_150;
                    uVar19 = (uint)uStack_150 + 1;
                    uStack_150 = CONCAT44(uStack_150._4_4_,uVar19);
                    if (uStack_150._4_4_ < uVar19) {
                      FUN_140134eb8(&local_158,uVar10 & 0xffffffff);
                    }
                    pAVar18 = local_158;
                    *(undefined8 *)(local_158 + lVar23 * 8) = 0;
                    iVar7 = (**(code **)(*(longlong *)*puVar12 + 0x10))();
                    pAVar18 = pAVar18 + lVar23 * 8;
                    *(int *)pAVar18 = iVar7;
                    if (pAVar18 != (AkObstructionOcclusionValues *)0x0) {
LAB_1407d62aa:
                      fVar25 = (float)local_140;
                      if ((float)local_140 <= *(float *)(pAVar18 + 4)) {
                        fVar25 = *(float *)(pAVar18 + 4);
                      }
                      *(float *)(pAVar18 + 4) = fVar25;
                    }
                    if (local_134 <= fVar26) {
                      fVar26 = local_134;
                    }
                  }
                  pAVar18 = local_158;
                  puVar12 = puVar12 + 2;
                } while (puVar12 != puVar22);
                lVar23 = (longlong)(int)(uint)uStack_150;
                if (lVar23 != 0) {
                  lVar20 = 0;
                  do {
                    uVar10 = local_a8;
                    fVar27 = *(float *)(pAVar18 + lVar20 + 4);
                    if (0.0 < fVar27) {
                      _Var8 = *local_1a8;
                      uVar6 = *(undefined4 *)(pAVar18 + lVar20);
                      lVar15 = (longlong)(int)(uint)local_a8;
                      uVar19 = (uint)local_a8 + 1;
                      local_a8 = CONCAT44(local_a8._4_4_,uVar19);
                      if (local_a8._4_4_ < uVar19) {
                        FUN_147f7fd78(local_130,uVar10 & 0xffffffff);
                      }
                      pAVar9 = local_b0;
                      if (local_b0 == (AkAuxSendValue *)0x0) {
                        pAVar9 = local_130;
                      }
                      lVar15 = lVar15 * 0x10;
                      *(__uint64 *)(pAVar9 + lVar15) = _Var8;
                      *(undefined4 *)(pAVar9 + lVar15 + 8) = uVar6;
                      *(float *)(pAVar9 + lVar15 + 0xc) = fVar27;
                    }
                    lVar20 = lVar20 + 8;
                  } while (lVar23 * 8 != lVar20);
                }
                plVar11 = local_198;
                plVar13 = local_1b0;
                plVar14 = local_1a0;
                fVar27 = fVar26;
                if (local_158 != (AkObstructionOcclusionValues *)0x0) {
                  FUN_1400020a8(local_158);
                  plVar11 = local_198;
                  plVar13 = local_1b0;
                  plVar14 = local_1a0;
                }
              }
              AK::SoundEngine::SetGameObjectOutputBusVolume(*(__uint64 *)*param_2,*local_1a8,fVar27)
              ;
            }
            LOCK();
            plVar1 = plVar13 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
LAB_1407d5f51:
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
          plVar14 = plVar14 + 2;
        } while (plVar14 != plVar21);
        _Var8 = *(__uint64 *)*param_2;
      }
      pAVar9 = local_b0;
      if (local_b0 == (AkAuxSendValue *)0x0) {
        pAVar9 = local_130;
      }
      AK::SoundEngine::SetGameObjectAuxSendValues(_Var8,pAVar9,(uint)local_a8);
      if (local_b0 != (AkAuxSendValue *)0x0) {
        FUN_1400020a8();
      }
      p_Var17 = (__uint64 *)*param_2;
      if (p_Var17 == (__uint64 *)0x0) goto LAB_1407d5fd7;
    }
  }
  *(int *)(p_Var17 + 0x21) = (int)p_Var17[0x21] + -1;
  if (((int)p_Var17[0x26] < 1) && (FUN_1400847bc(p_Var17 + 0x17,0), (int)p_Var17[0x21] == 0)) {
    FUN_140087e46(p_Var17);
    if (*p_Var17 != 0xffffffffffffffff) {
      if (DAT_14cb259f8 == 0) goto LAB_1407d5fd0;
      FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),p_Var17);
    }
    if (DAT_14cb259f8 != 0) {
      FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),p_Var17);
    }
  }
LAB_1407d5fd0:
  *param_2 = 0;
LAB_1407d5fd7:
  if ((local_a0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407d6486 FUN_1407d6486 body=388 status=ok
// SIG undefined FUN_1407d6486(void)

undefined4
FUN_1407d6486(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((int)param_4[1] == 0) || ((longlong *)*param_4 == (longlong *)0x0)) {
LAB_1407d65d0:
    local_50 = (longlong *)0x0;
  }
  else {
    cVar4 = (**(code **)(*(longlong *)*param_4 + 0x30))();
    if (cVar4 == '\0') goto LAB_1407d65d0;
    local_50 = (longlong *)FUN_14001cc68(0x10,0x10);
    *local_50 = *param_4;
    *param_4 = 0;
    *(int *)(local_50 + 1) = (int)param_4[1];
    *(undefined4 *)(param_4 + 1) = 0;
  }
  local_78 = &local_58;
  local_58 = 0;
  local_60 = param_8;
  local_68 = param_7;
  local_70 = param_5;
  uVar5 = FUN_1407d660c(param_1 + -8,param_2,param_3);
  lVar2 = local_58;
  if (local_58 != 0) {
    FUN_1401cb1ee(local_58);
    FUN_1400020a8(lVar2);
  }
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    FUN_1449db362(local_50);
    FUN_1400020a8(plVar3);
  }
  if ((int)param_4[1] != 0) {
    puVar1 = (undefined8 *)*param_4;
    if (puVar1 == (undefined8 *)0x0) goto LAB_1407d657b;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
LAB_1407d657b:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407d660c FUN_1407d660c body=926 status=ok
// SIG undefined FUN_1407d660c(void)

/* WARNING: Removing unreachable block (ram,0x0001407d68b1) */
/* WARNING: Removing unreachable block (ram,0x0001407d68c6) */
/* WARNING: Removing unreachable block (ram,0x0001407d68cc) */
/* WARNING: Removing unreachable block (ram,0x0001407d68d4) */
/* WARNING: Removing unreachable block (ram,0x0001407d68f5) */
/* WARNING: Removing unreachable block (ram,0x0001407d69a1) */
/* WARNING: Removing unreachable block (ram,0x0001407d6901) */
/* WARNING: Removing unreachable block (ram,0x0001407d690e) */
/* WARNING: Removing unreachable block (ram,0x0001407d6918) */
/* WARNING: Removing unreachable block (ram,0x0001407d692a) */

int FUN_1407d660c(longlong param_1,longlong *param_2,longlong param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  longlong lVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  int local_b0;
  longlong local_a8;
  undefined8 local_a0;
  int local_98;
  undefined8 local_90;
  longlong lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *param_2;
  lVar7 = 0;
  if (lVar2 != param_3) {
    lVar7 = param_3;
  }
  if ((longlong)DAT_14c868778 != 0) {
    lVar5 = 0;
    do {
      if ((*(int *)(DAT_14c868770 + 8 + lVar5) != 0) && (*(longlong *)(DAT_14c868770 + lVar5) != 0))
      {
        local_b8 = lVar7;
        if (lVar7 == 0) {
          local_b8 = lVar2;
        }
        FUN_1400021e4(&local_b8,&local_a0);
        FUN_1411f311e(&DAT_14c868770);
        if (local_a0 != 0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)DAT_14c868778 * 0x10 != lVar5);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_14170a73a();
  EnterCriticalSection(lpCriticalSection);
  if ((longlong)lpCriticalSection[1].LockCount != 0) {
    lVar5 = 0;
    do {
      if ((*(int *)((longlong)&(lpCriticalSection[1].DebugInfo)->CriticalSection + lVar5) != 0) &&
         (*(longlong *)((longlong)&(lpCriticalSection[1].DebugInfo)->Type + lVar5) != 0)) {
        LeaveCriticalSection(lpCriticalSection);
        local_a8 = lVar2;
        if (lVar7 != 0) {
          local_a8 = lVar7;
        }
        uVar4 = FUN_14170a73a();
        FUN_1400021e4(&local_a8,&local_b8);
        local_98 = local_b0 + -1;
        if (local_b0 == 0) {
          local_98 = 0;
        }
        local_a0 = local_b8;
        FUN_146885d24(uVar4);
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1407d66ea;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)lpCriticalSection[1].LockCount * 0x10 != lVar5);
  }
  LeaveCriticalSection(lpCriticalSection);
LAB_1407d66ea:
  LOCK();
  UNLOCK();
  iVar6 = DAT_14c948aac + 1;
  DAT_14c948aac = DAT_14c948aac + 1;
  FUN_1403e6010(param_1,iVar6);
  local_60 = *param_5;
  *param_5 = 0;
  local_68 = *param_4;
  *param_4 = 0;
  local_a0 = CONCAT44(param_7,iVar6);
  local_98 = param_6;
  if (param_8 == (undefined8 *)0x0) {
    FUN_1401cb262(&local_90);
  }
  else {
    local_90 = *param_8;
    lStack_88 = param_8[1];
    if (lStack_88 != 0) {
      LOCK();
      *(int *)(lStack_88 + 8) = *(int *)(lStack_88 + 8) + 1;
      UNLOCK();
    }
  }
  uStack_78 = *param_2;
  local_70 = CONCAT31(local_70._1_3_,(char)param_2[1]);
  local_58 = 0;
  local_80 = lVar7;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,8);
  *puVar3 = 0;
  puVar3[1] = local_a0;
  *(int *)(puVar3 + 2) = local_98;
  puVar3[3] = local_90;
  puVar3[4] = lStack_88;
  *(undefined4 *)(puVar3 + 7) = local_70;
  *(undefined4 *)(puVar3 + 5) = (undefined4)local_80;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = local_80._4_4_;
  *(undefined4 *)(puVar3 + 6) = (undefined4)uStack_78;
  *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_78._4_4_;
  puVar3[8] = local_68;
  puVar3[9] = local_60;
  puVar3[10] = local_58;
  LOCK();
  puVar1 = *(undefined8 **)(param_1 + 0x3a0);
  *(undefined8 **)(param_1 + 0x3a0) = puVar3;
  UNLOCK();
  *puVar1 = puVar3;
  local_60 = 0;
  local_68 = 0;
  lStack_88 = 0;
  local_90 = 0;
  LOCK();
  *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + 1;
  UNLOCK();
  LOCK();
  *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
  UNLOCK();
  FUN_1400ee9e6(param_1 + 0x478);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407d69ac FUN_1407d69ac body=109 status=ok
// SIG undefined FUN_1407d69ac(void)

void FUN_1407d69ac(longlong *param_1,char param_2)

{
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    FUN_1407d6a5a(param_1 + 7,0);
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_1407d6a19(param_1[0xc],(int)param_1[0xd]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    FUN_1407d6aba(param_1 + 0xc,0);
  }
  if (param_2 == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001407d6a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



// FUNCTION 1407d6a19 FUN_1407d6a19 body=65 status=ok
// SIG undefined FUN_1407d6a19(void)

void FUN_1407d6a19(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1407d6a5a FUN_1407d6a5a body=96 status=ok
// SIG undefined FUN_1407d6a5a(void)

void FUN_1407d6a5a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1407d6aba FUN_1407d6aba body=113 status=ok
// SIG undefined FUN_1407d6aba(void)

void FUN_1407d6aba(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 1407d6b2c FUN_1407d6b2c body=343 status=ok
// SIG undefined FUN_1407d6b2c(void)

void FUN_1407d6b2c(longlong param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((param_4 != '\0') && (*(char *)(param_1 + 0x330) == '\0')) || (*param_3 == 0)) ||
     ((DAT_14cb26569 & 1) == 0)) goto LAB_1407d6c37;
  fVar5 = (float)FUN_1407d6d14(param_1,param_2);
  if ((fVar5 <= 0.0) || (fVar5 <= *(float *)(param_1 + 0x32c) + *(float *)(param_1 + 800)))
  goto LAB_1407d6c37;
  iVar1 = *(int *)(param_1 + 0x318);
  *(uint *)(param_1 + 0x318) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x31c) < iVar1 + 1U) {
    FUN_1407d71c2((longlong *)(param_1 + 0x310),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x310);
  local_48 = *param_3;
  if ((local_48 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    piVar3 = *(int **)(local_48 + 0x50);
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    if (DAT_14cb259f8 == 0) {
      iVar4 = 5;
    }
    else {
      if ((char)piVar3[1] != '\x01') {
        FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
        goto LAB_1407d6c1f;
      }
      iVar4 = 2;
    }
    LOCK();
    piVar3[2] = iVar4;
    UNLOCK();
  }
LAB_1407d6c1f:
  FUN_1407d6c84(lVar2 + (longlong)iVar1 * 0x18,param_2,&local_48,fVar5);
LAB_1407d6c37:
  if ((*param_3 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*param_3 + 0x50));
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407d6c84 FUN_1407d6c84 body=143 status=ok
// SIG undefined FUN_1407d6c84(void)

undefined8 *
FUN_1407d6c84(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  
  *param_1 = param_2;
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if ((lVar1 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    piVar2 = *(int **)(lVar1 + 0x50);
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    if (DAT_14cb259f8 == 0) {
      iVar4 = 5;
    }
    else {
      if ((char)piVar2[1] != '\x01') {
        FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
        goto LAB_1407d6cdf;
      }
      iVar4 = 2;
    }
    LOCK();
    piVar2[2] = iVar4;
    UNLOCK();
  }
LAB_1407d6cdf:
  bVar3 = DAT_14cb26569;
  *(undefined4 *)(param_1 + 2) = param_4;
  if ((*param_3 != 0) && ((bVar3 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*param_3 + 0x50));
  }
  return param_1;
}



// FUNCTION 1407d6d14 FUN_1407d6d14 body=446 status=ok
// SIG undefined FUN_1407d6d14(void)

float FUN_1407d6d14(undefined8 param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  fVar8 = -1.0;
  if (param_2 != (longlong *)0x0) {
    lVar5 = (**(code **)(*param_2 + 0x180))(param_2);
    if (lVar5 != 0) {
      fVar9 = (float)SQRT((double)param_2[0xcf] * (double)param_2[0xcf] +
                          (double)param_2[0xcd] * (double)param_2[0xcd] +
                          (double)param_2[0xce] * (double)param_2[0xce]);
      if (0.0001 < fVar9) {
        uVar6 = (**(code **)(*param_2 + 0x180))(param_2);
        cVar4 = FUN_1407d6ed4(param_1,uVar6,param_2 + 0x7c,&local_58);
        if (cVar4 != '\0') {
          dVar1 = (double)param_2[0xcd];
          dVar2 = (double)param_2[0xce];
          dVar3 = (double)param_2[0xcf];
          dVar7 = ((local_48 - (double)param_2[0x97]) * dVar3 +
                  (local_58 - (double)param_2[0x95]) * dVar1 +
                  (local_50 - (double)param_2[0x96]) * dVar2) /
                  (dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
          lVar5 = (**(code **)(*param_2 + 0x180))(param_2);
          fVar8 = (float)((double)(float)(SQRT(dVar3 * dVar7 * dVar3 * dVar7 +
                                               dVar7 * dVar1 * dVar7 * dVar1 +
                                               dVar2 * dVar7 * dVar2 * dVar7) / (double)fVar9) +
                         *(double *)(lVar5 + 0x6d0));
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return fVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407d6ed4 FUN_1407d6ed4 body=749 status=ok
// SIG undefined FUN_1407d6ed4(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1407d6ed4(longlong param_1,longlong param_2,double *param_3,undefined4 *param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined1 auStack_f8 [32];
  double *local_d8;
  float *local_d0;
  longlong *local_c8;
  undefined8 *local_c0;
  longlong *local_b8;
  longlong local_b0 [5];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x331) == '\0') {
    lVar12 = *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(param_4 + 4) = DAT_14c8464f0;
    uVar19 = DAT_14c8464e8._4_4_;
    uVar24 = (undefined4)DAT_14c8464e8;
    uVar23 = DAT_14c8464e0._4_4_;
    *param_4 = (undefined4)DAT_14c8464e0;
    param_4[1] = uVar23;
    param_4[2] = uVar24;
    param_4[3] = uVar19;
    uVar6 = 0;
    if ((lVar12 == 0) || (DAT_14cb259f8 == 0)) goto LAB_1407d7043;
    local_d0 = &local_64;
    local_64 = 3.4e+38;
    local_c0 = &local_88;
    local_78 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_b8 = local_b0 + 1;
    local_b0[3] = 0;
    local_b0[1] = 0;
    local_b0[2] = 0;
    local_c8 = local_b0;
    local_b0[0] = 0;
    local_d8 = param_3;
    if (DAT_14cb25ab0 == '\x01') {
      lVar10 = (longlong)*(int *)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x18);
      if (lVar10 != 0) {
        plVar8 = *(longlong **)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x10);
        plVar11 = plVar8 + lVar10 * 2;
        do {
          while ((*plVar8 != 0 && (*(longlong *)(*plVar8 + 8) == lVar12))) {
            bVar4 = FUN_140072078(&local_d8);
            plVar8 = plVar8 + 2;
            if ((bVar4 & plVar8 != plVar11) == 0) goto LAB_1407d7008;
          }
          plVar8 = plVar8 + 2;
        } while (plVar8 != plVar11);
LAB_1407d7008:
        if (local_b0[0] != 0) {
          if (local_64 < 0.0) {
            sqrtf(local_64);
          }
          *(undefined8 *)(param_4 + 4) = local_78;
          *param_4 = (undefined4)local_88;
          param_4[1] = local_88._4_4_;
          param_4[2] = (undefined4)uStack_80;
          param_4[3] = uStack_80._4_4_;
          goto LAB_1407d7041;
        }
      }
    }
  }
  else if ((*(char *)(param_1 + 0x331) == '\x01') && (param_2 != 0)) {
    FUN_144a7d35a(param_2,&local_d8);
    uVar7 = (ulonglong)local_d0 & 0xffffffff;
    if (-1 < (int)local_d0) {
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
      fVar25 = 3.4e+38;
      lVar12 = 0;
      do {
        if (*(int *)(local_d8 + 1) <= (int)uVar7) break;
        plVar8 = (longlong *)FUN_14479d2ce(uVar7 * 8 + (longlong)*local_d8);
        if ((((plVar8 != (longlong *)0x0) && ((*(byte *)(plVar8 + 0x84) & 2) != 0)) &&
            (cVar5 = (**(code **)(*plVar8 + 0x6c8))(plVar8), cVar5 != '\0')) &&
           (lVar10 = plVar8[0x7c], lVar10 != 0)) {
          lVar2 = *(longlong *)(lVar10 + 0x1c8);
          if (lVar2 == 0) {
            uVar13 = (undefined4)DAT_14c8464f0;
            uVar14 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            pauVar9 = (undefined1 (*) [16])&DAT_14c8464e0;
          }
          else {
            uVar13 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
            uVar14 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
            pauVar9 = (undefined1 (*) [16])(lVar2 + 0x260);
          }
          auVar1 = *pauVar9;
          dVar16 = param_3[2] - (double)CONCAT44(uVar14,uVar13);
          dVar18 = param_3[1] - *(double *)((longlong)*pauVar9 + 8);
          dVar17 = *param_3 - auVar1._0_8_;
          fVar15 = (float)(dVar16 * dVar16 + dVar17 * dVar17 + dVar18 * dVar18);
          if (fVar15 < fVar25) {
            uVar19 = auVar1._0_4_;
            uVar20 = auVar1._4_4_;
            uVar21 = auVar1._8_4_;
            uVar22 = auVar1._12_4_;
            lVar12 = lVar10;
            uVar23 = uVar13;
            uVar24 = uVar14;
            fVar25 = fVar15;
          }
        }
        iVar3 = (int)local_d0;
        uVar7 = (ulonglong)((int)local_d0 + 1U);
        local_d0 = (float *)CONCAT44(local_d0._4_4_,(int)local_d0 + 1U);
      } while (-2 < iVar3);
      if (lVar12 != 0) {
        *param_4 = uVar19;
        param_4[1] = uVar20;
        param_4[2] = uVar21;
        param_4[3] = uVar22;
        *(ulonglong *)(param_4 + 4) = CONCAT44(uVar24,uVar23);
LAB_1407d7041:
        uVar6 = 1;
        goto LAB_1407d7043;
      }
    }
  }
  uVar6 = 0;
LAB_1407d7043:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1407d71c2 FUN_1407d71c2 body=373 status=ok
// SIG undefined FUN_1407d71c2(void)

void FUN_1407d71c2(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407d724b;
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
LAB_1407d724b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1407d7338 FUN_1407d7338 body=214 status=ok
// SIG undefined FUN_1407d7338(void)

void FUN_1407d7338(longlong *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return;
  }
  if ((int)param_1[3] == 1) {
    if (param_3 == '\0') {
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      lVar1 = param_1[1];
      while (lVar1 != 0) {
        lVar1 = *(longlong *)(lVar1 + 8);
        FUN_1400020a8();
        param_1[1] = lVar1;
      }
      param_1[1] = 0;
      param_1[2] = 0;
    }
    iVar2 = 0;
  }
  else {
    if (param_1[1] == param_2) {
      lVar1 = *(longlong *)(param_1[1] + 8);
      param_1[1] = lVar1;
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    else if (param_1[2] == param_2) {
      lVar1 = *(longlong *)(param_1[2] + 0x10);
      param_1[2] = lVar1;
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    else {
      lVar1 = *(longlong *)(param_2 + 0x10);
      *(longlong *)(*(longlong *)(param_2 + 8) + 0x10) = lVar1;
      *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 8);
    }
    if (param_3 == '\0') {
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
    }
    else {
      FUN_1400020a8(param_2);
    }
    iVar2 = (int)param_1[3] + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001407d7389. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,iVar2);
  return;
}



// FUNCTION 1407d740e FUN_1407d740e body=284 status=ok
// SIG undefined FUN_1407d740e(void)

void FUN_1407d740e(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_4c;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  puVar6 = (undefined8 *)
           FUN_1407d752c(*param_1 + 0x658,L"FD3D12OfflineDescriptorManager",(char)param_1[7],
                         *(undefined4 *)((longlong)param_1 + 0x3c));
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
  }
  lVar4 = puVar6[4];
  local_4c = (int)param_1[2];
  lVar7 = (longlong)local_4c;
  lVar5 = param_1[8];
  iVar3 = *(int *)((longlong)param_1 + 0x3c);
  *(uint *)(param_1 + 2) = local_4c + 1U;
  if (*(uint *)((longlong)param_1 + 0x14) < local_4c + 1U) {
    FUN_14574781c(param_1 + 1,local_4c);
  }
  puVar2 = (undefined8 *)(param_1[1] + lVar7 * 0x28);
  *puVar2 = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
  }
  puVar2[1] = &PTR_FUN_14a34c3c8;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  local_40 = (ulonglong)(uint)((int)lVar5 * iVar3) + lVar4;
  local_48 = lVar4;
  FUN_1457477b0(puVar2 + 1);
  FUN_145747746(param_1 + 3,&local_4c);
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407d752c FUN_1407d752c body=325 status=ok
// SIG undefined FUN_1407d752c(void)

void FUN_1407d752c(longlong param_1,undefined8 param_2,char param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  char local_78;
  char local_6a;
  char local_69;
  longlong local_68;
  longlong local_60;
  LPCRITICAL_SECTION local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      if ((*(char *)(lVar2 + 0x48 + lVar4) == param_3) &&
         (*(char *)(*(longlong *)(lVar2 + 0x50 + lVar4) + 0x3d) == param_5)) {
        local_4c = 0;
        local_68 = lVar2 + 8 + lVar4;
        local_58 = (LPCRITICAL_SECTION)(lVar2 + 0x20 + lVar4);
        local_6a = param_3;
        local_60 = param_1;
        EnterCriticalSection(local_58);
        lVar3 = local_68;
        local_68 = CONCAT44(local_68._4_4_,param_4);
        local_69 = FUN_1407d7696(lVar3,param_4,&local_4c);
        LeaveCriticalSection(local_58);
        if (local_69 != '\0') {
          FUN_14001cc68(0x40,0x10);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
        }
        param_1 = local_60;
        param_3 = local_6a;
        param_4 = (undefined4)local_68;
      }
      lVar4 = lVar4 + 0x58;
    } while ((longlong)iVar1 * 0x58 - lVar4 != 0);
  }
  local_78 = param_5;
  FUN_1407d772e();
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407d7696 FUN_1407d7696 body=152 status=ok
// SIG undefined FUN_1407d7696(void)

undefined8 FUN_1407d7696(longlong *param_1,uint param_2,int *param_3)

{
  int *_Dst;
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar6 = *(uint *)(param_1 + 1);
  uVar7 = 0;
  if (uVar6 == 0) {
    iVar5 = -1;
    uVar4 = 0;
  }
  else {
    lVar1 = *param_1;
    do {
      lVar8 = (longlong)(int)uVar7;
      iVar5 = *(int *)(lVar1 + lVar8 * 8);
      uVar2 = (*(int *)(lVar1 + 4 + lVar8 * 8) - iVar5) + 1;
      if (param_2 <= uVar2) {
        _Dst = (int *)(lVar1 + lVar8 * 8);
        if ((uVar7 + 1 < uVar6) && (uVar2 == param_2)) {
          iVar3 = (uVar6 - 1) - uVar7;
          if (iVar3 != 0) {
            memmove(_Dst,_Dst + 2,(longlong)iVar3 << 3);
            uVar6 = *(uint *)(param_1 + 1);
          }
          *(uint *)(param_1 + 1) = uVar6 - 1;
          FUN_147127824(param_1);
        }
        else {
          *_Dst = param_2 + iVar5;
        }
        uVar4 = 1;
        goto LAB_1407d76d5;
      }
      uVar7 = uVar7 + 1;
      uVar4 = 0;
    } while (uVar6 != uVar7);
    iVar5 = -1;
  }
LAB_1407d76d5:
  *param_3 = iVar5;
  return uVar4;
}



// FUNCTION 1407d772e FUN_1407d772e body=219 status=ok
// SIG undefined FUN_1407d772e(void)

void FUN_1407d772e(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  byte param_5)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  byte local_58;
  byte local_50;
  undefined1 local_48;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_5 & 2) != 0) {
    local_58 = param_5;
    FUN_147370a98(param_1,&local_38,param_3,param_4);
    if (local_38 != (longlong *)0x0) {
      uVar1 = FUN_14001cc68(0x40,0x10);
      local_50 = param_5;
      local_58 = (byte)param_3;
      local_48 = 0;
      FUN_14315f270(uVar1,*param_1,&local_38,param_4);
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x10))();
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
  }
  local_58 = param_5;
  local_50 = 0;
  FUN_1407d7812(*param_1);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407d7812 FUN_1407d7812 body=310 status=ok
// SIG undefined FUN_1407d7812(void)

undefined8
FUN_1407d7812(undefined4 *param_1,undefined8 param_2,char param_3,undefined4 param_4,byte param_5,
             undefined1 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 *local_80;
  undefined1 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_50;
  int local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  if ((byte)(param_3 - 1U) < 3) {
    local_48 = (byte)(param_3 - 1U) + 1;
  }
  local_40 = param_5 & 1;
  local_3c = 1;
  if (DAT_14ca81480 == 0) {
    local_3c = *param_1;
  }
  local_50 = (longlong *)0x0;
  local_44 = param_4;
  iVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 4) + 8) + 0x70))
                    (*(longlong **)(*(longlong *)(param_1 + 4) + 8),&local_48,&DAT_14a34a3c0);
  if (iVar1 < 0) {
    local_80 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    local_88 = 0;
    FUN_145763094(iVar1,
                  "Device->GetDevice()->CreateDescriptorHeap(&Desc, IID_PPV_ARGS(Heap.GetInitReference()))"
                  ,".\\Runtime/D3D12RHI/Private/D3D12Descriptors.cpp",0x1e5);
  }
  uVar2 = FUN_14001cc68(0x40,0x10);
  local_78 = param_6;
  local_80 = (undefined8 *)CONCAT71(local_80._1_7_,param_5);
  local_88 = CONCAT71(local_88._1_7_,param_3);
  FUN_14315f270(uVar2,param_1,&local_50,param_4);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407d794a FUN_1407d794a body=489 status=ok
// SIG undefined FUN_1407d794a(void)

void FUN_1407d794a(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  longlong *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar5 = (undefined8 *)FUN_1407d7b34(param_3,*(undefined1 *)(param_2 + 0x3c));
  if (puVar5 != (undefined8 *)0x0) {
    if (*(char *)(param_2 + 0x3c) == '\0') {
      iVar2 = *(int *)(puVar5 + 7);
      if ((longlong)iVar2 != 0) {
        lVar3 = puVar5[6];
        lVar10 = 0;
        do {
          plVar9 = *(longlong **)(lVar3 + lVar10);
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x400))(plVar9,param_1,param_4);
          }
          lVar10 = lVar10 + 8;
        } while ((longlong)iVar2 * 8 != lVar10);
      }
    }
    else if (0 < *(int *)(puVar5 + 7)) {
      (**(code **)*puVar5)(puVar5,&local_48);
      if ((longlong)local_40 != 0) {
        plVar9 = local_48;
        do {
          plVar1 = plVar9 + 1;
          uVar6 = FUN_144741050(plVar1);
          cVar4 = FUN_14487ac36(uVar6);
          if (cVar4 != '\0') {
            lVar3 = *(longlong *)(param_1 + 0xd8);
            if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x390) != 0)) {
              lVar10 = *(longlong *)(lVar3 + 0x388);
              lVar8 = 0;
              do {
                if ((*(longlong *)(lVar10 + 0x2c + lVar8) == *plVar9) &&
                   (*(int *)(lVar10 + 0x34 + lVar8) == (int)*plVar1)) {
                  plVar7 = *(longlong **)(lVar10 + 0x40 + lVar8);
                  if (plVar7 != (longlong *)0x0) goto LAB_1407d7a55;
                  break;
                }
                lVar8 = lVar8 + 0x50;
              } while ((longlong)*(int *)(lVar3 + 0x390) * 0x50 != lVar8);
            }
            lVar3 = *(longlong *)(param_1 + 0xe0);
            if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x390) != 0)) {
              lVar10 = *(longlong *)(lVar3 + 0x388);
              lVar8 = 0;
              do {
                if ((*(longlong *)(lVar10 + 0x2c + lVar8) == *plVar9) &&
                   (*(int *)(lVar10 + 0x34 + lVar8) == (int)*plVar1)) {
                  plVar7 = *(longlong **)(lVar10 + 0x40 + lVar8);
                  if (plVar7 != (longlong *)0x0) goto LAB_1407d7a55;
                  break;
                }
                lVar8 = lVar8 + 0x50;
              } while ((longlong)*(int *)(lVar3 + 0x390) * 0x50 != lVar8);
            }
            plVar7 = *(longlong **)(puVar5[6] + (longlong)*(int *)((longlong)plVar9 + 0xc) * 8);
            if (plVar7 != (longlong *)0x0) {
LAB_1407d7a55:
              (**(code **)(*plVar7 + 0x400))(plVar7,param_1);
            }
          }
          plVar9 = plVar9 + 5;
        } while (plVar9 != local_48 + (longlong)local_40 * 5);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407d7b34 FUN_1407d7b34 body=336 status=ok
// SIG undefined FUN_1407d7b34(void)

longlong FUN_1407d7b34(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(byte *)(param_1 + 0x30) - 3 < 6) {
    FUN_144842084(param_1,&local_38);
    if ((local_38 != 0) && (lVar3 = (longlong)*(int *)(local_38 + 0x50), lVar3 != 0)) {
      if (*(char *)(local_38 + 0x40) == '\0') {
        lVar1 = *(longlong *)(local_38 + 0x48);
LAB_1407d7b8f:
        if (lVar1 != 0) {
          cVar2 = *(char *)(lVar1 + 0x3c);
          if (cVar2 == '\0') goto LAB_1407d7bad;
          goto LAB_1407d7bbc;
        }
      }
      else {
        lVar1 = *(longlong *)(local_38 + 0x48);
        if (((local_2c == 0 && local_30 == 0) && local_28 == 0) && local_24 == 0) {
          lVar3 = lVar3 * 0x368;
          do {
            if ((((*(int *)(lVar1 + 8) == *(int *)(local_38 + 0x30)) &&
                 (*(int *)(lVar1 + 0xc) == *(int *)(local_38 + 0x34))) &&
                (*(int *)(lVar1 + 0x10) == *(int *)(local_38 + 0x38))) &&
               (*(int *)(lVar1 + 0x14) == *(int *)(local_38 + 0x3c))) goto LAB_1407d7b8f;
            lVar1 = lVar1 + 0x368;
            lVar3 = lVar3 + -0x368;
          } while (lVar3 != 0);
        }
        else {
          lVar3 = lVar3 * 0x368;
          do {
            if (((*(int *)(lVar1 + 8) == local_30) && (*(int *)(lVar1 + 0xc) == local_2c)) &&
               ((*(int *)(lVar1 + 0x10) == local_28 && (*(int *)(lVar1 + 0x14) == local_24))))
            goto LAB_1407d7b8f;
            lVar1 = lVar1 + 0x368;
            lVar3 = lVar3 + -0x368;
          } while (lVar3 != 0);
        }
      }
    }
  }
  else if (*(byte *)(param_1 + 0x30) - 9 < 4) {
LAB_1407d7bad:
    cVar2 = '\0';
    if (*(char *)(param_1 + 0x348) != '\0') {
LAB_1407d7bbc:
      lVar3 = 0;
      if (cVar2 == param_2) {
        lVar3 = param_1 + 0xd0;
      }
      goto LAB_1407d7bcb;
    }
  }
  lVar3 = 0;
LAB_1407d7bcb:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1407d7c86 FUN_1407d7c86 body=22 status=ok
// SIG undefined FUN_1407d7c86(void)

undefined8 FUN_1407d7c86(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 auStack_50 [24];
  longlong lStack_38;
  ulonglong uStack_28;
  
  lVar1 = DAT_14cb8d3c0;
  if (DAT_14cb8d3c0 == 0) {
    return 0;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0;
  if ((1 < *(int *)(param_1 + 4) || 0 < *(int *)(param_1 + 0x24)) && (*(int *)(param_1 + 4) == 2)) {
    uStack_58 = *(undefined4 *)(*(undefined8 **)(param_1 + 0x18) + 1);
    uStack_60 = **(undefined8 **)(param_1 + 0x18);
    FUN_1448075d0(auStack_50);
    uVar2 = FUN_1407d7d9c(lVar1,auStack_50);
    if (lStack_38 != 0) {
      FUN_1400020a8();
    }
    lVar3 = param_1 + 8;
    if (1 < *(int *)(param_1 + 4)) {
      lVar3 = *(longlong *)(param_1 + 0x18);
    }
    if (0 < *(int *)(param_1 + 0x24)) {
      lVar3 = *(longlong *)(param_1 + 0x18);
    }
    uStack_68 = *(undefined4 *)(lVar3 + 0x14);
    uStack_70 = *(undefined8 *)(lVar3 + 0xc);
    FUN_1448075d0(auStack_50);
    uVar2 = FUN_1407d7f24(lVar1,uVar2,auStack_50);
    if (lStack_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407d7c9c FUN_1407d7c9c body=255 status=ok
// SIG undefined FUN_1407d7c9c(void)

undefined8 FUN_1407d7c9c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = 0;
  if ((1 < *(int *)(param_2 + 4) || 0 < *(int *)(param_2 + 0x24)) && (*(int *)(param_2 + 4) == 2)) {
    local_58 = *(undefined4 *)(*(undefined8 **)(param_2 + 0x18) + 1);
    local_60 = **(undefined8 **)(param_2 + 0x18);
    FUN_1448075d0(local_50);
    uVar1 = FUN_1407d7d9c(param_1,local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    lVar2 = param_2 + 8;
    if (1 < *(int *)(param_2 + 4)) {
      lVar2 = *(longlong *)(param_2 + 0x18);
    }
    if (0 < *(int *)(param_2 + 0x24)) {
      lVar2 = *(longlong *)(param_2 + 0x18);
    }
    local_68 = *(undefined4 *)(lVar2 + 0x14);
    local_70 = *(undefined8 *)(lVar2 + 0xc);
    FUN_1448075d0(local_50);
    uVar1 = FUN_1407d7f24(param_1,uVar1,local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407d7d9c FUN_1407d7d9c body=391 status=ok
// SIG undefined FUN_1407d7d9c(void)

longlong FUN_1407d7d9c(longlong param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_48 [32];
  int local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar3 = *(int *)(param_1 + 0x338);
  local_28 = *param_2;
  if ((longlong)iVar3 == -1) {
    if (((local_28 != 0) && (param_2[1] != 0)) && (local_28 != DAT_14c948000)) {
      puVar4 = &DAT_14c948028;
      goto LAB_1407d7def;
    }
  }
  else if (local_28 != 0) {
    iVar1 = param_2[1];
    if ((iVar1 != 0) && (local_28 != DAT_14c948000)) {
      piVar7 = param_2 + 2;
      if (0 < param_2[9]) {
        piVar7 = *(int **)(param_2 + 6);
      }
      if (1 < iVar1) {
        piVar7 = *(int **)(param_2 + 6);
      }
      if (iVar1 == 1 && 0 < iVar3) {
        piVar6 = (int *)&DAT_14c948618;
        if (*(int *)(param_1 + 0x33c) == 1) {
          piVar6 = piVar7;
        }
        local_28 = *piVar6;
        puVar4 = (ulonglong *)(piVar6 + 1);
        goto LAB_1407d7def;
      }
      if (iVar3 < iVar1) {
        puVar4 = (ulonglong *)(piVar7 + (longlong)iVar3 * 3 + 1);
        local_28 = piVar7[(longlong)iVar3 * 3];
        goto LAB_1407d7def;
      }
    }
  }
  puVar4 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
  local_28 = (int)DAT_14c948618;
LAB_1407d7def:
  uVar2 = *puVar4;
  uStack_24 = (undefined4)uVar2;
  uStack_20 = (undefined4)(uVar2 >> 0x20);
  iVar3 = local_28;
  if (uVar2 >> 0x20 != 0) {
    iVar3 = FUN_144a78877(local_28,uVar2 >> 0x20);
  }
  iVar3 = FUN_1447fa34e((longlong *)(param_1 + 0x2e8),iVar3,&local_28);
  if (((iVar3 == -1) ||
      (lVar5 = (longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x2e8), lVar5 == 0)) ||
     (lVar5 = *(longlong *)(lVar5 + 0x10), lVar5 == 0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
    local_28 = (int)lVar5;
    uStack_24 = (undefined4)((ulonglong)lVar5 >> 0x20);
    if (lVar5 == 0) {
      FUN_145747a3a(param_1,&local_28);
      lVar5 = CONCAT44(uStack_24,local_28);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407d7f24 FUN_1407d7f24 body=513 status=ok
// SIG undefined FUN_1407d7f24(void)

longlong FUN_1407d7f24(undefined8 param_1,longlong param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong *puVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) goto LAB_1407d80f5;
  plVar9 = (longlong *)(param_2 + 8);
  if (*(char *)(param_2 + 0x10) != '\0') {
    if (*(char *)(param_2 + 0x10) != '\x02') goto LAB_1407d80f5;
    plVar9 = (longlong *)(*plVar9 + 0x30);
  }
  if ((*plVar9 == 0) || (lVar6 = *(longlong *)(*plVar9 + 0x68), lVar6 == 0)) goto LAB_1407d80f5;
  iVar7 = *(int *)(lVar6 + 0xc0);
  uVar12 = *param_3;
  if ((longlong)iVar7 == -1) {
    if (((uVar12 != 0) && (param_3[1] != 0)) && (uVar12 != DAT_14c948000)) {
      puVar4 = &DAT_14c948028;
      goto LAB_1407d7fab;
    }
LAB_1407d80b4:
    puVar4 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
    uVar12 = (uint)DAT_14c948618;
  }
  else {
    if (((uVar12 == 0) || (uVar3 = param_3[1], uVar3 == 0)) || (uVar12 == DAT_14c948000))
    goto LAB_1407d80b4;
    puVar10 = param_3 + 2;
    if (0 < (int)param_3[9]) {
      puVar10 = *(uint **)(param_3 + 6);
    }
    if (1 < (int)uVar3) {
      puVar10 = *(uint **)(param_3 + 6);
    }
    if (uVar3 == 1 && 0 < iVar7) {
      puVar5 = (uint *)&DAT_14c948618;
      if (*(int *)(lVar6 + 0xc4) == 1) {
        puVar5 = puVar10;
      }
      uVar12 = *puVar5;
      puVar4 = (ulonglong *)(puVar5 + 1);
    }
    else {
      if ((int)uVar3 <= iVar7) goto LAB_1407d80b4;
      puVar4 = (ulonglong *)(puVar10 + (longlong)iVar7 * 3 + 1);
      uVar12 = puVar10[(longlong)iVar7 * 3];
    }
  }
LAB_1407d7fab:
  uVar2 = *puVar4;
  uVar11 = uVar2 >> 0x20;
  uVar3 = uVar12;
  if (uVar11 != 0) {
    uVar3 = FUN_144a78877(uVar12,uVar11);
  }
  if (*(int *)(lVar6 + 0x78) != *(int *)(lVar6 + 0xa4)) {
    lVar8 = lVar6 + 0xa8;
    if (*(longlong *)(lVar6 + 0xb0) != 0) {
      lVar8 = *(longlong *)(lVar6 + 0xb0);
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar6 + 0xb8) - 1U & uVar3) * 4);
    if (iVar7 != -1) {
      lVar6 = *(longlong *)(lVar6 + 0x70);
      do {
        lVar8 = (longlong)iVar7 * 0x20;
        if ((*(uint *)(lVar6 + lVar8) == uVar12) &&
           (lVar1 = lVar6 + lVar8, *(int *)(lVar1 + 8) == (int)(uVar2 >> 0x20))) {
          if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) != 0)) {
            local_30 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30);
            lVar6 = local_30;
            if (local_30 == 0) {
              FUN_1407d8126(param_1,&local_30);
              lVar6 = local_30;
            }
            goto LAB_1407d80f7;
          }
          break;
        }
        iVar7 = *(int *)(lVar6 + 0x18 + lVar8);
      } while (iVar7 != -1);
    }
  }
LAB_1407d80f5:
  lVar6 = 0;
LAB_1407d80f7:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 1407d8126 FUN_1407d8126 body=160 status=ok
// SIG undefined FUN_1407d8126(void)

void FUN_1407d8126(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    FUN_144837e54(param_3,0);
    if ((*(byte **)(param_3 + 0x48) != (byte *)0x0) && ((**(byte **)(param_3 + 0x48) & 0x6b) == 3))
    {
      if (*param_2 == 0) {
        lVar2 = FUN_140d0dbe8();
        *param_2 = lVar2;
        *(longlong *)(param_3 + 0x30) = lVar2;
        FUN_1400f0d6e(param_1,param_3,1);
      }
      if (*(int *)(param_3 + 0x44) == *(int *)(param_3 + 0x40)) {
        return;
      }
      plVar1 = (longlong *)*param_2;
      uVar3 = (**(code **)(*plVar1 + 8))(plVar1);
      FUN_1446e7478(param_3 + 0x48,plVar1,uVar3,1);
      *(undefined1 *)(*param_2 + 0x18) = 1;
      *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_3 + 0x44);
      return;
    }
  }
  if (*param_2 != 0) {
    *(undefined1 *)(*param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1407d81c6 FUN_1407d81c6 body=24 status=ok
// SIG undefined FUN_1407d81c6(void)

void FUN_1407d81c6(undefined8 param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
    FUN_1407d81de(*(longlong *)(param_2 + 0x30) + 8);
    return;
  }
  return;
}



// FUNCTION 1407d81de FUN_1407d81de body=112 status=ok
// SIG undefined FUN_1407d81de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407d81de(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if ((*(char *)(param_1 + 1) != '\0') && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)
     ) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1407d824e FUN_1407d824e body=22 status=ok
// SIG undefined FUN_1407d824e(void)

longlong FUN_1407d824e(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_38 [32];
  longlong lStack_18;
  ulonglong uStack_10;
  
  if (DAT_14cb8d3c0 == 0) {
    return 0;
  }
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1 != 0) {
    plVar2 = (longlong *)(param_1 + 8);
    if (*(char *)(param_1 + 0x10) != '\0') {
      if (*(char *)(param_1 + 0x10) != '\x02') goto LAB_140950455;
      plVar2 = (longlong *)(*plVar2 + 0x30);
    }
    if ((*plVar2 != 0) && (lVar1 = *(longlong *)(*plVar2 + 0x68), lVar1 != 0)) {
      lStack_18 = *(longlong *)(lVar1 + 0x30);
      lVar1 = lStack_18;
      if (lStack_18 == 0) {
        FUN_145747a3a(DAT_14cb8d3c0,&lStack_18);
        lVar1 = lStack_18;
      }
      goto LAB_14095042a;
    }
  }
LAB_140950455:
  lVar1 = 0;
LAB_14095042a:
  if ((uStack_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407d8264 FUN_1407d8264 body=727 status=ok
// SIG undefined FUN_1407d8264(void)

void FUN_1407d8264(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  
  uVar5 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar5,1);
  lVar3 = DAT_14cb8d3c0;
  iVar13 = 0;
  if (((DAT_14cb8d3c0 != 0) && (iVar13 = 0, *(char *)((longlong)param_1 + 0x24) != '\0')) &&
     (iVar13 = *(int *)(param_3 + 0x78) - *(int *)(param_3 + 0xa4), iVar13 < 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar13);
  }
  plVar1 = param_1 + 0xc;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (*(int *)((longlong)param_1 + 0x6c) != iVar13) {
    FUN_14583f7d4(plVar1,iVar13);
  }
  if (iVar13 != 0) {
    if (*(int *)((longlong)param_1 + 0x6c) < iVar13) {
      FUN_14583f7d4(plVar1,iVar13);
    }
    iVar13 = *(int *)(param_3 + 0x98);
    if (iVar13 == 0) {
      uVar12 = 1;
      uVar16 = 0;
      iVar17 = 0;
      iVar4 = 0;
    }
    else {
      puVar6 = *(uint **)(param_3 + 0x90);
      if (*(uint **)(param_3 + 0x90) == (uint *)0x0) {
        puVar6 = (uint *)(param_3 + 0x80);
      }
      uVar14 = *puVar6;
      if (uVar14 == 0) {
        iVar4 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar4 = iVar13 + -1;
        }
        uVar16 = 0;
        uVar12 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar12 = uVar16;
        }
        iVar17 = 0;
        do {
          if (uVar12 == uVar16) {
            return;
          }
          iVar17 = iVar17 + 0x20;
          uVar14 = puVar6[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar16 = 0;
        iVar17 = 0;
      }
      uVar12 = (ulonglong)(-uVar14 & uVar14);
      uVar2 = uVar12 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar4 = (iVar17 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
      if (iVar13 <= iVar4) {
        iVar4 = iVar13;
      }
    }
    if (iVar4 != iVar13) {
      uVar14 = 0xffffffff;
      do {
        lVar7 = FUN_1489a9e64(lVar3);
        if (((lVar7 != 0) && (*(char *)(lVar7 + 0x18) == '\x01')) &&
           (iVar4 = *(int *)(lVar7 + 0x1c), -1 < iVar4)) {
          iVar11 = (int)param_1[0xd];
          if (iVar11 <= iVar4) {
            uVar10 = (iVar4 - iVar11) + 1;
            *(int *)(param_1 + 0xd) = iVar4 + 1;
            if ((uint)(*(int *)((longlong)param_1 + 0x6c) - iVar11) < uVar10) {
              FUN_1415027c0(plVar1);
            }
            memset((void *)((longlong)iVar11 * 8 + *plVar1),0,(longlong)(int)uVar10 << 3);
            iVar4 = *(int *)(lVar7 + 0x1c);
          }
          *(longlong *)(*plVar1 + (longlong)iVar4 * 8) = lVar7;
        }
        uVar14 = uVar14 & ~(uint)uVar12;
        puVar6 = *(uint **)(param_3 + 0x90);
        if (*(uint **)(param_3 + 0x90) == (uint *)0x0) {
          puVar6 = (uint *)(param_3 + 0x80);
        }
        iVar4 = *(int *)(param_3 + 0x98);
        iVar11 = (int)uVar16;
        lVar7 = (longlong)iVar11;
        uVar10 = puVar6[lVar7] & uVar14;
        if (uVar10 == 0) {
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar17 = iVar17 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar11) {
            iVar9 = iVar11;
          }
          if (iVar11 < iVar8) {
            lVar15 = 0;
            do {
              uVar10 = puVar6[lVar7 + lVar15 + 1];
              if (uVar10 != 0) {
                uVar16 = (ulonglong)(iVar11 + (int)lVar15 + 1);
                uVar14 = 0xffffffff;
                goto LAB_1407d84c0;
              }
              iVar17 = iVar17 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar9 - lVar7 != lVar15);
            uVar14 = 0xffffffff;
            iVar11 = iVar9;
          }
          uVar16 = (ulonglong)(iVar11 + 1);
          iVar11 = iVar4;
        }
        else {
LAB_1407d84c0:
          uVar12 = (ulonglong)(-uVar10 & uVar10);
          uVar2 = uVar12 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar11 = (iVar17 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar11) {
            iVar11 = iVar4;
          }
        }
      } while (iVar11 != iVar13);
    }
  }
  return;
}



// FUNCTION 1407d853c FUN_1407d853c body=3112 status=ok
// SIG undefined FUN_1407d853c(void)

/* WARNING: Removing unreachable block (ram,0x0001407d8fa4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffec8 : 0x0001407d866a */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_1407d853c(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  void **ppvVar13;
  void *pvVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  undefined4 *puVar22;
  longlong *plVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong uVar26;
  void **ppvVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined8 ****ppppuVar30;
  longlong lVar31;
  bool bVar32;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  void *local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  undefined1 local_120;
  int local_118;
  uint local_110 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong local_f8;
  undefined1 local_f0;
  int local_e8 [2];
  char local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  int local_b8;
  undefined8 ***local_b0 [3];
  ushort local_98;
  byte local_90;
  void *local_88;
  void **local_80;
  void **local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_148 = param_2;
  if ((((param_2 != 0) && (DAT_14cb8d3c0 != 0)) && (lVar10 = FUN_1409503e6(), lVar10 != 0)) &&
     (*(char *)(lVar10 + 0x18) == '\x01')) {
    if (*(int *)(param_1 + 0x8c) == 0) {
LAB_1407d8ca5:
      uVar11 = 0;
    }
    else {
      uVar8 = *(uint *)(param_1 + 0x88);
      uVar11 = 0;
      if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
        puVar20 = (undefined8 *)
                  ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
        if ((puVar20 == (undefined8 *)0x0) ||
           ((*(int *)(puVar20 + 2) != *(int *)(param_1 + 0x8c) ||
            ((*(uint *)(puVar20 + 1) & 0x10200000) != 0)))) goto LAB_1407d8ca5;
        uVar11 = *puVar20;
      }
    }
    local_140 = (void *)((ulonglong)local_140 & 0xffffffffffffff00);
    local_118 = 0;
    FUN_1456bb102(&local_140,uVar11);
    lVar12 = *(longlong *)(lVar10 + 0x48);
    if (lVar12 == 0) {
      uVar11 = FUN_14016979c();
      lVar12 = FUN_14477b664(uVar11);
      *(longlong *)(lVar10 + 0x48) = lVar12;
    }
    lVar15 = *(longlong *)(lVar10 + 0x50);
    if (lVar15 == 0) {
      bVar5 = 1;
      if ((lVar12 != 0) && (*(longlong *)(lVar10 + 0x40) != 0)) {
        plVar23 = *(longlong **)(lVar12 + 0xb8);
        if ((plVar23 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar23 + 0x108))(plVar23), cVar6 == '\0')) {
          *(undefined8 *)(lVar10 + 0x50) = 0;
        }
        else {
          uVar11 = (**(code **)(*plVar23 + 0x110))(plVar23);
          lVar15 = FUN_144aff482(uVar11,(longlong *)(lVar10 + 0x40));
          *(longlong *)(lVar10 + 0x50) = lVar15;
          if (lVar15 != 0) goto LAB_1407d8653;
        }
      }
    }
    else {
LAB_1407d8653:
      local_110[0] = CONCAT31(local_110[0]._1_3_,(char)local_140);
      if ((char)local_140 == '\x01') {
        local_110[0] = CONCAT31(local_110[0]._1_3_,2);
        if (local_138 == 0) {
          local_108._0_4_ = 0;
          iVar7 = 0;
          uVar8 = (uint)local_108;
        }
        else {
          uVar8 = *(uint *)(local_138 + 0xc);
          local_108 = (ulonglong)uVar8;
          if ((int)uVar8 < DAT_14c9647dc) {
            lVar12 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
          }
          else {
            lVar12 = 0;
          }
          iVar7 = *(int *)(lVar12 + 0x10);
          if (*(int *)(lVar12 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar17 = DAT_14c964868 + 1;
            bVar32 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar32) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar17);
            }
            LOCK();
            iVar7 = *(int *)(lVar12 + 0x10);
            bVar32 = iVar7 == 0;
            if (bVar32) {
              *(int *)(lVar12 + 0x10) = iVar17;
              iVar7 = 0;
            }
            UNLOCK();
            uVar8 = (uint)local_108;
            if (bVar32) {
              iVar7 = iVar17;
            }
          }
        }
        local_108._0_4_ = uVar8;
        local_108 = CONCAT44(iVar7,(uint)local_108);
      }
      else if ((char)local_140 == '\x02') {
        local_108 = local_138;
      }
      else if ((char)local_140 == '\x03') {
        local_108 = local_138;
        local_100 = local_130;
        if (local_130 == (longlong *)0x0) {
          local_f8 = local_128;
          local_f0 = local_120;
        }
        else {
          LOCK();
          *(int *)((longlong)local_130 + 0xc) = *(int *)((longlong)local_130 + 0xc) + 1;
          UNLOCK();
          local_f8 = local_128;
          local_f0 = local_120;
        }
      }
      local_e8[0] = 0;
      if (local_118 != 0) {
        uVar11 = FUN_1448174c4(local_e8);
        FUN_1400e08b0(uVar11,DAT_14c9a3da0 + (longlong)local_118 * 0x10 + -0x10);
      }
      local_e0 = '\0';
      local_b8 = 0;
      FUN_1400606f6(&local_88,lVar15);
      ppvVar13 = local_58;
      if (local_58 == (void **)0x0) {
        ppvVar13 = &local_88;
      }
      ppvVar27 = (void **)&DAT_14c9a40e0;
      if (0 < (int)local_50) {
        ppvVar27 = ppvVar13;
      }
      FUN_1400603ec(local_b0,lVar15,ppvVar27);
      puVar21 = (undefined *)(ulonglong)local_50;
      ppvVar13 = local_58;
      if (local_58 == (void **)0x0) {
        ppvVar13 = &local_88;
      }
      FUN_1446fdf58(ppvVar13,puVar21);
      if (local_58 != (void **)0x0) {
        FUN_1400020a8();
      }
      lVar12 = DAT_14c9a3da0;
      if ((longlong)local_b8 != 0) {
        lVar15 = (longlong)local_b8 + -1;
        lVar31 = lVar15 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar31),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar31));
        if (*(longlong *)(lVar12 + lVar31) != 0) {
          FUN_1400020a8();
        }
        lVar12 = DAT_14c9a3da0;
        iVar7 = (int)lVar15;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
        }
        *(undefined4 *)(lVar12 + lVar31) = 0xffffffff;
        iVar17 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar17 = DAT_14c9a3dd0;
        }
        *(int *)(lVar12 + 4 + lVar31) = iVar17;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar21 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar21 = DAT_14c9a3dc0;
        }
        iVar17 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar17 = iVar7;
        }
        bVar5 = (byte)lVar15 & 0x1f;
        DAT_14c9a3dd0 = iVar7;
        *(uint *)(puVar21 + (longlong)(iVar17 >> 5) * 4) =
             *(uint *)(puVar21 + (longlong)(iVar17 >> 5) * 4) &
             (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
        local_b8 = 0;
      }
      if (local_e0 != '\0') {
        if (local_e0 == '\x01') {
          local_d8 = 0;
        }
        else if ((local_e0 == '\x03') && (local_d0 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_d0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_d0 + 0x10))();
          }
        }
        local_e0 = '\0';
      }
      lVar12 = DAT_14c9a3da0;
      if ((longlong)local_e8[0] != 0) {
        lVar15 = (longlong)local_e8[0] + -1;
        lVar31 = lVar15 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar31),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar31));
        if (*(longlong *)(lVar12 + lVar31) != 0) {
          FUN_1400020a8();
        }
        lVar12 = DAT_14c9a3da0;
        iVar7 = (int)lVar15;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
        }
        *(undefined4 *)(lVar12 + lVar31) = 0xffffffff;
        iVar17 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar17 = DAT_14c9a3dd0;
        }
        *(int *)(lVar12 + 4 + lVar31) = iVar17;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar21 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar21 = DAT_14c9a3dc0;
        }
        iVar17 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar17 = iVar7;
        }
        bVar5 = (byte)lVar15 & 0x1f;
        DAT_14c9a3dd0 = iVar7;
        *(uint *)(puVar21 + (longlong)(iVar17 >> 5) * 4) =
             *(uint *)(puVar21 + (longlong)(iVar17 >> 5) * 4) &
             (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
        local_e8[0] = 0;
      }
      if (((char)local_110[0] == '\x03') && (local_100 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))();
        }
      }
      bVar5 = FUN_140168b7a(local_b0,CONCAT71((int7)((ulonglong)puVar21 >> 8),
                                              *(undefined1 *)(lVar10 + 0x58)) ^ 1);
      bVar5 = bVar5 ^ *(byte *)(lVar10 + 0x58);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
      if (pcVar3 != (code *)0x0) {
        ppppuVar30 = local_b0;
        if (0x18 < local_98) {
          ppppuVar30 = (undefined8 ****)local_b0[0];
        }
        (*pcVar3)(ppppuVar30);
      }
      if (0x18 < local_98) {
        FUN_1400020a8(local_b0[0]);
      }
    }
    lVar12 = DAT_14c9a3da0;
    if ((longlong)local_118 != 0) {
      lVar15 = (longlong)local_118 + -1;
      lVar31 = lVar15 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar31),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar31));
      if (*(longlong *)(lVar12 + lVar31) != 0) {
        FUN_1400020a8();
      }
      lVar12 = DAT_14c9a3da0;
      iVar7 = (int)lVar15;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
      }
      *(undefined4 *)(lVar12 + lVar31) = 0xffffffff;
      iVar17 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar17 = DAT_14c9a3dd0;
      }
      *(int *)(lVar12 + 4 + lVar31) = iVar17;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar21 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar21 = DAT_14c9a3dc0;
      }
      iVar17 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar17 = iVar7;
      }
      bVar4 = (byte)lVar15 & 0x1f;
      DAT_14c9a3dd0 = iVar7;
      *(uint *)(puVar21 + (longlong)(iVar17 >> 5) * 4) =
           *(uint *)(puVar21 + (longlong)(iVar17 >> 5) * 4) &
           (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      local_118 = 0;
    }
    if (((char)local_140 == '\x03') && (local_130 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_130 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_130 + 0x10))();
      }
    }
    if (bVar5 != 0) {
      puVar22 = *(undefined4 **)(lVar10 + 8);
      if (puVar22 == (undefined4 *)0x0) {
        puVar22 = &DAT_14c9485f0;
      }
      FUN_1447a97f4(local_110,puVar22);
      if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
        lVar12 = param_1 + 0x70;
        if (*(longlong *)(param_1 + 0x78) != 0) {
          lVar12 = *(longlong *)(param_1 + 0x78);
        }
        iVar7 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & local_110[0]) * 4);
        if (iVar7 != -1) {
          lVar12 = *(longlong *)(param_1 + 0x38);
          do {
            lVar15 = lVar12 + (longlong)iVar7 * 0x38;
            if (*(uint *)(lVar12 + (longlong)iVar7 * 0x38) == local_110[0]) {
              if (((lVar15 != 0) && ((longlong *)(lVar15 + 0x28) != (longlong *)0x0)) &&
                 (local_140 = *(void **)(lVar15 + 0x28), local_140 != (void *)0x0))
              goto LAB_1407d8a00;
              break;
            }
            iVar7 = *(int *)(lVar15 + 0x30);
          } while (iVar7 != -1);
        }
      }
      local_140 = (void *)0x0;
      pvVar14 = (void *)FUN_14001cc68(0x148);
      memset(pvVar14,0,0x148);
      FUN_14583f71c(pvVar14);
      *(longlong *)((longlong)pvVar14 + 0x28) = lVar10;
      local_140 = pvVar14;
      FUN_1447715ec(pvVar14,local_110);
      local_88 = local_140;
      local_80 = &local_140;
      FUN_14583f834((longlong *)(param_1 + 0x38),local_b0);
LAB_1407d8a00:
      pvVar14 = local_140;
      uVar26 = local_148;
      if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1407d8ac4:
        if (*(int *)((longlong)local_140 + 0x58) != *(int *)((longlong)local_140 + 0x84)) {
          uVar8 = ((uint)(local_148 >> 0x14) & 0xffff ^ (uint)(local_148 >> 4)) * -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          lVar10 = (longlong)local_140 + 0x88;
          if (*(longlong *)((longlong)local_140 + 0x90) != 0) {
            lVar10 = *(longlong *)((longlong)local_140 + 0x90);
          }
          iVar7 = *(int *)(lVar10 + (ulonglong)
                                    (*(int *)((longlong)local_140 + 0x98) - 1U &
                                    (uVar8 >> 0x10 ^ uVar8)) * 4);
          if (iVar7 != -1) {
            lVar10 = *(longlong *)((longlong)local_140 + 0x50);
            do {
              if (*(ulonglong *)(lVar10 + (longlong)iVar7 * 0x10) == local_148) goto LAB_1407d8ab3;
              iVar7 = *(int *)((longlong)iVar7 * 0x10 + lVar10 + 8);
            } while (iVar7 != -1);
          }
        }
        FUN_14120d766((longlong *)((longlong)local_140 + 0x50),&local_88,&local_148,0);
LAB_1407d8b5a:
        if ((((*(int *)(param_1 + 0x8c) != 0) &&
             (uVar8 = *(uint *)(param_1 + 0x88), -1 < (int)uVar8)) &&
            (((int)uVar8 < DAT_14c9647dc &&
             ((plVar23 = (longlong *)
                         ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
              plVar23 != (longlong *)0x0 && ((int)plVar23[2] == *(int *)(param_1 + 0x8c))))))) &&
           (((*(uint *)(plVar23 + 1) & 0x10200000) == 0 &&
            (((lVar10 = *plVar23, lVar10 != 0 && (lVar12 = FUN_1447210f0(lVar10), lVar12 != 0)) &&
             (*(longlong *)(lVar12 + 0x170) != 0)))))) {
          lVar15 = FUN_1411531be();
          plVar23 = *(longlong **)(lVar12 + 0x170);
          if (((plVar23 != (longlong *)0x0) && (lVar15 != 0)) &&
             (((lVar12 = plVar23[2], lVar12 != 0 &&
               ((*(int *)(lVar15 + 0x38) <= *(int *)(lVar12 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8)
                 == lVar15 + 0x30)))) &&
              (cVar6 = (**(code **)(*plVar23 + 0x980))(plVar23,lVar10), cVar6 != '\0')))) {
            puVar22 = &DAT_14c9485f0;
            if (*(undefined4 **)(local_148 + 8) != (undefined4 *)0x0) {
              puVar22 = *(undefined4 **)(local_148 + 8);
            }
            FUN_1486e0084(lVar10,local_110,puVar22);
          }
        }
        FUN_14120d62e(param_1,local_140,local_148);
        uVar26 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      }
      else {
        uVar8 = *(uint *)(local_148 + 0x1c);
        if ((int)uVar8 < 0) goto LAB_1407d8ac4;
        iVar7 = *(int *)((longlong)local_140 + 0x48);
        if (iVar7 <= (int)uVar8) {
          iVar17 = uVar8 + 1;
          iVar25 = iVar17 - iVar7;
          if (0 < iVar25) {
            lVar10 = (longlong)local_140 + 0x30;
            if (iVar7 == 0) {
LAB_1407d8f0b:
              if (*(int *)((longlong)local_140 + 0x4c) <= (int)uVar8) {
                iVar17 = iVar7;
                if (uVar8 < 0x80) {
                  iVar19 = 0x80;
                }
                else {
                  uVar29 = (ulonglong)uVar8 + 0x20 >> 5;
                  uVar8 = (uint)uVar29;
                  if (*(int *)((longlong)local_140 + 0x4c) + 0x1fU < 0xa0) {
                    uVar24 = 4;
                    if (4 < uVar8) {
                      uVar24 = uVar29;
                    }
                  }
                  else {
                    uVar24 = uVar29 + (uVar8 * 3 >> 3) + 0x10;
                  }
                  uVar29 = uVar24 * 4;
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar16 = uVar29 + 0xf;
                      if ((uint)uVar24 < 0x1ffd) {
                        uVar29 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar16 >> 4]];
                      }
                      else {
                        if ((uVar16 & 0xfffffffffffffff0) < 0x7ff1) {
                          bVar5 = (&DAT_14c841e00)[uVar16 >> 4];
                          uVar24 = 0x32;
                          if (0x32 < bVar5) {
                            uVar24 = (ulonglong)bVar5;
                          }
                          uVar28 = 0x32 - (ulonglong)bVar5;
                          do {
                            uVar29 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar28 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar28 & 0xffffffff] & 0xf) == 0)
                            goto LAB_1407d9038;
                            lVar12 = uVar24 + 1 + uVar28;
                            uVar28 = uVar28 - 1;
                          } while (lVar12 != 0x33);
                        }
                        uVar29 = 0x10;
                        if (0x10 < DAT_14c841df8) {
                          uVar29 = (ulonglong)DAT_14c841df8;
                        }
                        uVar29 = -uVar29 & ((uVar16 & 0xfffffffffffffff0) + uVar29) - 1;
                      }
                    }
                    else {
                      uVar29 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar29,0);
                      iVar17 = *(int *)((longlong)pvVar14 + 0x48);
                    }
                  }
LAB_1407d9038:
                  iVar9 = (int)(uVar29 >> 2);
                  iVar19 = -0x20;
                  if ((int)uVar8 <= iVar9) {
                    iVar19 = iVar9 << 5;
                  }
                }
                *(int *)((longlong)pvVar14 + 0x4c) = iVar19;
                FUN_1446efbd8(lVar10,iVar17);
                iVar17 = *(int *)((longlong)pvVar14 + 0x48) + iVar25;
              }
              iVar19 = iVar17 + 0x1f;
              if (-1 < iVar17) {
                iVar19 = iVar17;
              }
              *(int *)((longlong)pvVar14 + 0x48) = iVar17;
              if (iVar17 % 0x20 != 0) {
                lVar12 = *(longlong *)((longlong)pvVar14 + 0x40);
                if (*(longlong *)((longlong)pvVar14 + 0x40) == 0) {
                  lVar12 = lVar10;
                }
                bVar5 = -(char)(iVar17 % 0x20);
                *(uint *)(lVar12 + (longlong)(iVar19 >> 5) * 4) =
                     (uint)(*(int *)(lVar12 + (longlong)(iVar19 >> 5) * 4) << (bVar5 & 0x1f)) >>
                     (bVar5 & 0x1f);
              }
            }
            else {
              iVar19 = iVar7 + 0x1e;
              if (-1 < iVar7 + -1) {
                iVar19 = iVar7 + -1;
              }
              if (uVar8 >> 5 != iVar19 >> 5) goto LAB_1407d8f0b;
              *(int *)((longlong)local_140 + 0x48) = iVar17;
            }
            FUN_1447c6044(lVar10,iVar7,iVar25,0);
            uVar8 = *(uint *)(uVar26 + 0x1c);
          }
        }
        lVar10 = (longlong)local_140 + 0x30;
        if (*(longlong *)((longlong)local_140 + 0x40) != 0) {
          lVar10 = *(longlong *)((longlong)local_140 + 0x40);
        }
        uVar18 = uVar8 + 0x1f;
        if (-1 < (int)uVar8) {
          uVar18 = uVar8;
        }
        uVar2 = *(uint *)(lVar10 + (longlong)((int)uVar18 >> 5) * 4);
        if ((uVar2 >> (uVar8 & 0x1f) & 1) == 0) {
          *(uint *)(lVar10 + (longlong)((int)uVar18 >> 5) * 4) = uVar2 | 1 << ((byte)uVar8 & 0x1f);
          goto LAB_1407d8b5a;
        }
LAB_1407d8ab3:
        uVar26 = 0;
      }
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1407d858f;
    }
  }
  uVar26 = 0;
LAB_1407d858f:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar26 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407d9166 FUN_1407d9166 body=230 status=ok
// SIG undefined FUN_1407d9166(void)

void FUN_1407d9166(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)(param_1 + 0x16e0) + 0x18))(param_1 + 0x16e0,local_48);
  if (CONCAT44(uStack_3c,local_40) != 0) {
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
      FUN_1406f071e(param_2,iVar2);
    }
    _Src = local_30;
    lVar3 = *param_2;
    lVar4 = (longlong)iVar2 * 0x20;
    puVar1 = (undefined4 *)(lVar3 + lVar4);
    *puVar1 = local_40;
    puVar1[1] = uStack_3c;
    puVar1[2] = uStack_38;
    puVar1[3] = uStack_34;
    *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
    *(int *)(lVar3 + 0x18 + lVar4) = local_28;
    if ((longlong)local_28 == 0) {
      *(undefined4 *)(lVar3 + lVar4 + 0x1c) = 0;
    }
    else {
      puVar5 = (undefined8 *)(lVar4 + lVar3 + 0x10);
      FUN_1446dd670(puVar5,local_28,0);
      memcpy((void *)*puVar5,_Src,(longlong)local_28 * 2);
    }
  }
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407d9273 FUN_1407d9273 body=1535 status=ok
// SIG undefined FUN_1407d9273(void)

longlong * FUN_1407d9273(longlong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_d8 [36];
  uint local_b4;
  uint local_b0 [16];
  uint *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    (**(code **)(*param_1 + 0x10))(param_1,(longlong)(int)param_2[1] << 4);
    local_b0[0] = 0;
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      local_b0[0] = *(uint *)(param_2 + 1);
    }
    puVar1 = (ulonglong *)param_1[1];
    puVar5 = (uint *)*puVar1 + 1;
    if ((uint *)puVar1[1] < puVar5) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,local_b0);
      }
      else {
        FUN_14572512c(param_1,local_b0);
      }
    }
    else {
      local_b0[0] = *(uint *)*puVar1;
      *puVar1 = (ulonglong)puVar5;
    }
    if (local_b0[0] == 0) {
      if (((*(byte *)(param_1 + 5) & 1) != 0) &&
         (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
        FUN_1407d9874(param_2,0);
      }
    }
    else if ((((int)local_b0[0] < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
            ((0x100000 < local_b0[0] && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
      FUN_14572541c(param_1);
    }
    else if ((*(byte *)(param_1 + 5) & 1) == 0) {
      *(uint *)(param_2 + 1) = local_b0[0];
      lVar7 = 8;
      lVar14 = 0;
      do {
        lVar13 = *param_2;
        plVar12 = (longlong *)(**(code **)(*param_1 + 0x120))(param_1,lVar13 + lVar7 + -8);
        (**(code **)(*plVar12 + 0x160))(plVar12,lVar13 + lVar7);
        lVar14 = lVar14 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar14 < (int)param_2[1]);
    }
    else {
      *(undefined4 *)(param_2 + 1) = 0;
      if ((*(uint *)((longlong)param_2 + 0xc) == local_b0[0]) ||
         (FUN_1407d9874(param_2), 0 < (int)local_b0[0])) {
        iVar3 = 0;
        do {
          iVar11 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar11 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar11 + 1U) {
            FUN_140335274(param_2,iVar11);
          }
          lVar7 = *param_2;
          puVar6 = (undefined8 *)((longlong)iVar11 * 0x10 + lVar7);
          *puVar6 = 0;
          puVar6[1] = 0;
          plVar12 = (longlong *)
                    (**(code **)(*param_1 + 0x120))(param_1,lVar7 + (longlong)iVar11 * 0x10);
          (**(code **)(*plVar12 + 0x160))(plVar12,puVar6 + 1);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)local_b0[0]);
      }
    }
    iVar3 = (int)param_2[1];
    if ((0 < iVar3 & *(byte *)(param_1 + 5)) == 1) {
      lVar7 = 0;
      bVar10 = false;
      do {
        while( true ) {
          lVar14 = *param_2;
          puVar5 = (uint *)(lVar14 + lVar7 * 0x10);
          if ((((*(longlong *)(lVar14 + 8 + lVar7 * 0x10) != 0) && (puVar5[1] != 0)) &&
              (uVar4 = *puVar5, -1 < (int)uVar4)) &&
             ((((int)uVar4 < DAT_14c9647dc &&
               (plVar12 = (longlong *)
                          ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
               plVar12 != (longlong *)0x0)) &&
              ((*(uint *)(plVar12 + 2) == puVar5[1] &&
               (((*(uint *)(plVar12 + 1) >> 0x1c & 1) == 0 && (*plVar12 != 0)))))))) break;
          iVar11 = ~(uint)lVar7 + iVar3;
          if (iVar11 != 0) {
            if (0 < iVar11) {
              iVar11 = 1;
            }
            memmove(puVar5,(void *)(lVar14 + (longlong)(iVar3 - iVar11) * 0x10),
                    (longlong)iVar11 << 4);
            iVar3 = (int)param_2[1];
          }
          iVar3 = iVar3 + -1;
          *(int *)(param_2 + 1) = iVar3;
          bVar10 = true;
          if (iVar3 <= lVar7) goto LAB_1407d9550;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar3);
      if (bVar10) {
LAB_1407d9550:
        FUN_1400bbcfc(param_2);
      }
    }
  }
  else {
    local_70 = (uint *)0x0;
    local_68 = 0x400000000;
    lVar7 = param_2[1];
    if ((longlong)(int)lVar7 == 0) {
      lVar14 = 0x40;
      lVar7 = 0;
    }
    else {
      lVar14 = *param_2;
      lVar13 = 0;
      do {
        uVar2 = local_68;
        if (((((*(longlong *)(lVar14 + 8 + lVar13) != 0) &&
              (iVar3 = *(int *)(lVar14 + 4 + lVar13), iVar3 != 0)) &&
             (uVar4 = *(uint *)(lVar14 + lVar13), -1 < (int)uVar4)) &&
            (((int)uVar4 < DAT_14c9647dc &&
             (plVar12 = (longlong *)
                        ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
             plVar12 != (longlong *)0x0)))) &&
           (((int)plVar12[2] == iVar3 &&
            (((*(uint *)(plVar12 + 1) >> 0x1c & 1) == 0 && (*plVar12 != 0)))))) {
          lVar9 = (longlong)(int)(uint)local_68;
          uVar4 = (uint)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,uVar4);
          if (local_68._4_4_ < uVar4) {
            FUN_1468eb166(local_b0,uVar2 & 0xffffffff);
          }
          puVar5 = local_70;
          if (local_70 == (uint *)0x0) {
            puVar5 = local_b0;
          }
          puVar8 = puVar5 + lVar9 * 4;
          puVar8[0] = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          *(undefined8 *)(puVar5 + lVar9 * 4) = *(undefined8 *)(lVar14 + lVar13);
          *(undefined8 *)(puVar5 + lVar9 * 4 + 2) = *(undefined8 *)(lVar14 + 8 + lVar13);
        }
        lVar13 = lVar13 + 0x10;
      } while ((longlong)(int)lVar7 * 0x10 != lVar13);
      lVar14 = (longlong)(int)local_68._4_4_ << 4;
      lVar7 = (longlong)(int)(uint)local_68 << 4;
    }
    (**(code **)(*param_1 + 0x10))(param_1,lVar7,lVar14);
    local_b4 = 0;
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      local_b4 = (uint)local_68;
    }
    puVar1 = (ulonglong *)param_1[1];
    puVar5 = (uint *)*puVar1 + 1;
    if ((uint *)puVar1[1] < puVar5) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_b4,4);
      }
      else {
        FUN_14572512c(param_1,&local_b4);
      }
    }
    else {
      local_b4 = *(uint *)*puVar1;
      *puVar1 = (ulonglong)puVar5;
    }
    uVar4 = local_68._4_4_;
    if (local_b4 == 0) {
      if (((*(byte *)(param_1 + 5) & 1) != 0) &&
         (local_68 = (ulonglong)local_68._4_4_ << 0x20, uVar4 != 0)) {
        FUN_1468eb1dc(local_b0,0);
      }
    }
    else if ((((int)local_b4 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
            ((0x100000 < local_b4 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
      FUN_14572541c(param_1);
    }
    else if ((*(byte *)(param_1 + 5) & 1) == 0) {
      local_68 = CONCAT44(local_68._4_4_,local_b4);
      lVar7 = 8;
      lVar14 = 0;
      do {
        puVar5 = local_70;
        if (local_70 == (uint *)0x0) {
          puVar5 = local_b0;
        }
        plVar12 = (longlong *)(**(code **)(*param_1 + 0x120))(param_1,(longlong)puVar5 + lVar7 + -8)
        ;
        (**(code **)(*plVar12 + 0x160))(plVar12,(longlong)puVar5 + lVar7);
        lVar14 = lVar14 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar14 < (int)(uint)local_68);
    }
    else {
      local_68 = (ulonglong)local_68._4_4_ << 0x20;
      if ((uVar4 == local_b4) || (FUN_1468eb1dc(local_b0), 0 < (int)local_b4)) {
        iVar3 = 0;
        do {
          uVar2 = local_68;
          lVar7 = (longlong)(int)(uint)local_68;
          uVar4 = (uint)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,uVar4);
          if (local_68._4_4_ < uVar4) {
            FUN_1468eb166(local_b0,uVar2 & 0xffffffff);
          }
          puVar5 = local_70;
          if (local_70 == (uint *)0x0) {
            puVar5 = local_b0;
          }
          puVar8 = puVar5 + lVar7 * 4;
          puVar8[0] = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          plVar12 = (longlong *)(**(code **)(*param_1 + 0x120))(param_1,puVar5 + lVar7 * 4);
          (**(code **)(*plVar12 + 0x160))(plVar12,puVar8 + 2);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)local_b4);
      }
    }
    if (local_70 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1407d9874 FUN_1407d9874 body=226 status=ok
// SIG undefined FUN_1407d9874(void)

void FUN_1407d9874(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 1407d99b2 FUN_1407d99b2 body=2207 status=ok
// SIG undefined FUN_1407d99b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407d99b2(longlong param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  bool bVar20;
  undefined1 auStack_d8 [44];
  uint local_ac;
  ulonglong local_a8;
  undefined8 *local_a0;
  undefined1 local_91;
  longlong local_90 [4];
  longlong *local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((int)param_3 < 0) || (*(int *)(param_1 + 0x3c8) <= (int)param_3)) goto LAB_1407d9a71;
  uVar2 = *(undefined4 *)(param_1 + 0x3b8);
  *(uint *)(param_1 + 0x3b8) = param_3;
  puVar4 = *(undefined4 **)(*(longlong *)(param_1 + 0x3c0) + (ulonglong)param_3 * 8);
  *puVar4 = (undefined4)DAT_14c872be0;
  iVar3 = puVar4[6];
  if ((longlong)iVar3 != 0) {
    lVar15 = *(longlong *)(puVar4 + 4);
    lVar14 = 0;
    do {
      plVar13 = *(longlong **)(lVar15 + lVar14);
      if ((plVar13 != (longlong *)0x0) && (*(uint *)(plVar13 + 0xc) == param_3)) {
        (**(code **)(*plVar13 + 0x2f0))(plVar13,param_2,puVar4 + 0xc);
      }
      lVar14 = lVar14 + 8;
    } while ((longlong)iVar3 * 8 != lVar14);
  }
  puVar4[1] = puVar4[10];
  if (0 < (int)puVar4[10]) {
    puVar16 = (undefined8 *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x308);
    puVar9 = (uint *)*puVar16;
    if (puVar9 != (uint *)0x0) goto LAB_1407d9b44;
    do {
      uVar11 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar11 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar11 | 1;
        __tlregdtor(&LAB_143ddd528);
      }
      lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar7 = *(undefined4 **)(lVar15 + 0x310);
      *(undefined8 *)(lVar15 + 0x310) = 0;
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar7 = 0xffffffff;
      *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
      puVar7[0x12] = 0;
      *puVar16 = puVar7;
      FUN_140217a48(puVar16);
      puVar9 = (uint *)*puVar16;
LAB_1407d9b44:
      uVar18 = *(longlong *)(puVar9 + 0x10) + 7;
      uVar11 = puVar9[0x12];
      while( true ) {
        puVar19 = (undefined8 *)(uVar18 & 0xfffffffffffffff8);
        if (puVar19 + 0x17 <= puVar9 + 0x4000) {
          *(undefined8 **)(puVar9 + 0x10) = puVar19 + 0x17;
          puVar9[0x12] = uVar11 + 1;
          uVar11 = 0;
          FUN_1447247dc(puVar19,0);
          *puVar19 = &PTR_FUN_14b4165c8;
          uVar18 = 0;
          if (param_1 != 0) {
            uVar11 = *(uint *)(param_1 + 0xc);
            if ((int)uVar11 < DAT_14c9647dc) {
              lVar15 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
            }
            else {
              lVar15 = 0;
            }
            uVar18 = (ulonglong)*(uint *)(lVar15 + 0x10);
            if (*(uint *)(lVar15 + 0x10) == 0) {
              LOCK();
              iVar3 = DAT_14c964868 + 1;
              UNLOCK();
              uVar10 = DAT_14c964868 + 1;
              bVar20 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar3;
              if (bVar20) {
                local_a8 = CONCAT44(local_a8._4_4_,uVar10);
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar10);
                uVar10 = (uint)local_a8;
              }
              LOCK();
              uVar17 = *(uint *)(lVar15 + 0x10);
              bVar20 = uVar17 == 0;
              if (bVar20) {
                *(uint *)(lVar15 + 0x10) = uVar10;
                uVar17 = 0;
              }
              UNLOCK();
              if (bVar20) {
                uVar17 = uVar10;
              }
              uVar18 = (ulonglong)uVar17;
            }
          }
          puVar19[0x15] = (ulonglong)uVar11 | uVar18 << 0x20;
          *(uint *)(puVar19 + 0x16) = param_3;
          uVar11 = DAT_14cb853b0;
          if (((DAT_14cb853a8 != 0x400) || (DAT_14c7585d8 != 0)) &&
             ((DAT_14cb853a8 != 0x800 || (DAT_14c7585dc != 0)))) {
            uVar11 = DAT_14cb853a8 | _DAT_14cb853ac;
          }
          uVar10 = uVar11 >> 10 & 3;
          if ((uVar11 >> 9 & 1) == 0 || uVar10 < 2) {
            uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar10];
          }
          else {
            uVar18 = 2;
          }
          if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
          }
          puVar19[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar19[9] = puVar19;
          puVar19[10] = puVar19;
          lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          lVar14 = *(longlong *)(lVar15 + 0x2b8);
          if (lVar14 == 0) {
            uVar6 = 1;
            if ((char)uVar18 != '\x06') {
              uVar6 = uVar18;
            }
            uVar18 = uVar6;
            uVar8 = 0;
          }
          else {
            if ((char)uVar18 == '\x06') {
              uVar18 = *(ulonglong *)(lVar14 + 0x38) >> 0x3b;
            }
            uVar8 = *(undefined8 *)(lVar14 + 0x30);
          }
          puVar19[0xf] = uVar8;
          local_a8 = 0x527800b400;
          puVar19[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
          *(undefined4 *)((longlong)puVar19 + 0x1c) = 0;
          if (puVar19 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
            UNLOCK();
          }
          local_90[0] = CONCAT71(local_90[0]._1_7_,1);
          FUN_1447439e4(puVar19);
          puVar5 = *(undefined8 **)(puVar4 + 0x1a);
          *(undefined8 **)(puVar4 + 0x1a) = puVar19;
          if (puVar5 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar5 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar5)(puVar5,1);
            }
          }
          local_70 = (longlong *)0x0;
          local_68 = 0x400000001;
          local_90[0] = *(longlong *)(puVar4 + 0x1a);
          if (local_90[0] != 0) {
            LOCK();
            *(int *)(local_90[0] + 8) = *(int *)(local_90[0] + 8) + 1;
            UNLOCK();
          }
          puVar9 = (uint *)*puVar16;
          if (puVar9 != (uint *)0x0) goto LAB_1407d9e78;
          goto LAB_1407d9dfa;
        }
        *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
        LOCK();
        uVar10 = *puVar9;
        *puVar9 = *puVar9 + uVar11 + 1;
        UNLOCK();
        if ((uVar10 ^ uVar11) != 0xffffffff) break;
        puVar9 = (uint *)*puVar16;
        *puVar9 = 0xffffffff;
        *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar16 = puVar9;
        uVar18 = (longlong)puVar9 + 0x5f;
        uVar11 = 0;
      }
    } while( true );
  }
  goto LAB_1407d9a6a;
LAB_1407d9dfa:
  uVar11 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x318);
  if ((uVar11 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
             ) = uVar11 | 1;
    __tlregdtor(&LAB_143ddd528);
  }
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar7 = *(undefined4 **)(lVar14 + 0x310);
  *(undefined8 *)(lVar14 + 0x310) = 0;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = _aligned_malloc(0x10000,0x10000);
  }
  *puVar7 = 0xffffffff;
  *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
  puVar7[0x12] = 0;
  *puVar16 = puVar7;
  FUN_140217a48(puVar16);
  puVar9 = (uint *)*puVar16;
LAB_1407d9e78:
  puVar19 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar12 = (uint *)(puVar19 + 0x17);
  uVar11 = puVar9[0x12];
  if (puVar12 <= puVar9 + 0x4000) goto LAB_1407da144;
  while( true ) {
    *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
    LOCK();
    uVar10 = *puVar9;
    *puVar9 = *puVar9 + uVar11 + 1;
    UNLOCK();
    if ((uVar10 ^ uVar11) != 0xffffffff) break;
    puVar9 = (uint *)*puVar16;
    *puVar9 = 0xffffffff;
    *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
    puVar9[0x12] = 0;
    *puVar16 = puVar9;
    puVar19 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
    puVar12 = (uint *)(puVar19 + 0x17);
    uVar11 = 0;
    if (puVar12 <= puVar9 + 0x4000) {
      uVar11 = 1;
      goto LAB_1407d9ef8;
    }
  }
  goto LAB_1407d9dfa;
LAB_1407da144:
  uVar11 = uVar11 + 1;
LAB_1407d9ef8:
  *(uint **)(puVar9 + 0x10) = puVar12;
  puVar9[0x12] = uVar11;
  FUN_1447247dc(puVar19,local_90);
  *puVar19 = &PTR_FUN_14b4165d8;
  if (param_1 == 0) {
    uVar11 = 0;
    uVar18 = 0;
  }
  else {
    uVar11 = *(uint *)(param_1 + 0xc);
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    uVar10 = *(uint *)(lVar14 + 0x10);
    if (*(uint *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar17 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar20) {
        local_ac = uVar17;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar17);
        uVar17 = local_ac;
      }
      LOCK();
      uVar10 = *(uint *)(lVar14 + 0x10);
      bVar20 = uVar10 == 0;
      if (bVar20) {
        *(uint *)(lVar14 + 0x10) = uVar17;
        uVar10 = 0;
      }
      UNLOCK();
      if (bVar20) {
        uVar10 = uVar17;
      }
    }
    uVar18 = (ulonglong)uVar10;
  }
  puVar19[0x15] = (ulonglong)uVar11 | uVar18 << 0x20;
  *(uint *)(puVar19 + 0x16) = param_3;
  if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
  }
  puVar19[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar19[9] = puVar19;
  puVar19[10] = puVar19;
  lVar15 = *(longlong *)(lVar15 + 0x2b8);
  if (lVar15 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar15 + 0x30);
  }
  puVar19[0xf] = uVar8;
  puVar19[0x10] = local_a8 | 0xe800000000000000;
  *(undefined4 *)((longlong)puVar19 + 0x1c) = 3;
  if (puVar19 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
    UNLOCK();
  }
  local_91 = 1;
  FUN_1447439e4(puVar19);
  lVar15 = *(longlong *)(puVar4 + 0x14);
  if (*(char *)(lVar15 + 1) == '\x03') {
    puVar16 = (undefined8 *)**(undefined8 **)(lVar15 + 0x10);
LAB_1407da057:
    if (puVar16 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)0x0;
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
    }
  }
  else {
    puVar16 = (undefined8 *)0x0;
    if ((lVar15 != 0) && (*(char *)(lVar15 + 1) == '\x02')) {
      puVar16 = *(undefined8 **)(lVar15 + 0x10);
      goto LAB_1407da057;
    }
  }
  if (puVar19 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
    UNLOCK();
  }
  local_a0 = puVar19;
  FUN_14002c244(puVar16,&local_a0);
  if (puVar16 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar16 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar16)(puVar16,1);
    }
  }
  if (puVar19 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar19 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar19)(puVar19,1);
    }
  }
  plVar13 = local_90;
  if (local_70 != (longlong *)0x0) {
    plVar13 = local_70;
  }
  FUN_144717c65(plVar13,local_68 & 0xffffffff);
  if (local_70 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1407d9a6a:
  *(undefined4 *)(param_1 + 0x3b8) = uVar2;
LAB_1407d9a71:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407da252 FUN_1407da252 body=146 status=ok
// SIG undefined FUN_1407da252(void)

bool FUN_1407da252(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_38);
  FUN_1446f470e(&local_40,param_2,1);
  lVar1 = FUN_1407dac1e(param_1,local_40,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (lVar1 != 0) {
    FUN_1407da2e6(lVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407da2e6 FUN_1407da2e6 body=180 status=ok
// SIG undefined FUN_1407da2e6(void)

void FUN_1407da2e6(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 0x40) = 1;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  FUN_1407da39a(param_1 + 0x450,0);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  FUN_1407da39a(param_1 + 0x1d8,0);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  FUN_1407da39a(param_1 + 0x2b0,0);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  FUN_1407da8c4(param_1 + 0xa0,0);
  for (puVar1 = *(undefined8 **)(param_1 + 0xf8); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[1]) {
    FUN_140d9a670(*puVar1,0);
  }
  return;
}



// FUNCTION 1407da39a FUN_1407da39a body=107 status=ok
// SIG undefined FUN_1407da39a(void)

void FUN_1407da39a(longlong param_1,uint param_2)

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
LAB_1407da3e9:
      FUN_1407da406(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140d69a94(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_1407da3e9;
  FUN_1407da692(param_1);
  FUN_1407da406(param_1,param_2);
  return;
}



// FUNCTION 1407da406 FUN_1407da406 body=651 status=ok
// SIG undefined FUN_1407da406(void)

void FUN_1407da406(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar14 = 0;
    uVar15 = 1;
    iVar10 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar11 = *puVar8;
    if (uVar11 == 0) {
      iVar10 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar10 = iVar3 + -1;
      }
      uVar14 = 0;
      uVar9 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar9 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar9 == uVar14) goto LAB_1407da43b;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar8[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar11 & uVar11);
    uVar9 = uVar15 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar7 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
  }
  if (iVar7 < iVar3) {
    uVar11 = 0xffffffff;
    do {
      lVar13 = *param_1;
      lVar12 = (longlong)iVar7 * 0xc0;
      *(undefined4 *)(lVar13 + 0xa8 + lVar12) = 0;
      if (*(longlong *)(lVar13 + 0xa0 + lVar12) != 0) {
        FUN_1400020a8();
      }
      plVar2 = (longlong *)(lVar12 + lVar13);
      FUN_140bb2a1a(lVar12 + lVar13 + 0x60);
      *(undefined4 *)(plVar2 + 0xb) = 0;
      if (plVar2[10] != 0) {
        FUN_1400020a8();
      }
      FUN_140b7cbe4(lVar12 + lVar13 + 0x10);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      uVar11 = uVar11 & ~(uint)uVar15;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = (int)param_1[5];
      iVar7 = (int)uVar14;
      lVar13 = (longlong)iVar7;
      uVar4 = puVar8[lVar13] & uVar11;
      if (uVar4 == 0) {
        iVar5 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar5 = iVar3 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar7) {
          iVar6 = iVar7;
        }
        if (iVar5 <= iVar7) break;
        lVar12 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar4 = puVar8[lVar13 + lVar12 + 1];
          if (uVar4 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar6 - lVar13 == lVar12) goto LAB_1407da43b;
        }
        uVar14 = (ulonglong)(iVar7 + (int)lVar12 + 1);
        uVar11 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar4 & uVar4);
      uVar9 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar3);
  }
LAB_1407da43b:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1407da7e2(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar11 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar4 = 0x80;
  if (0x80 < (int)uVar11) {
    uVar4 = uVar11;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar4;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1407da692 FUN_1407da692 body=334 status=ok
// SIG undefined FUN_1407da692(void)

void FUN_1407da692(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xbc + (longlong)iVar4 * 0xc0) * 4) =
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



// FUNCTION 1407da7e2 FUN_1407da7e2 body=225 status=ok
// SIG undefined FUN_1407da7e2(void)

void FUN_1407da7e2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = (longlong)param_2 * 0xc0;
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
    if (param_2 <= (int)(uVar1 / 0xc0)) {
      uVar2 = uVar1 / 0xc0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc0,8);
  }
  return;
}



// FUNCTION 1407da8c4 FUN_1407da8c4 body=107 status=ok
// SIG undefined FUN_1407da8c4(void)

void FUN_1407da8c4(longlong param_1,uint param_2)

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
LAB_1407da913:
      FUN_1407da930(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_14680b8e6(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_1407da913;
  FUN_1407daac8(param_1);
  FUN_1407da930(param_1,param_2);
  return;
}



// FUNCTION 1407da930 FUN_1407da930 body=406 status=ok
// SIG undefined FUN_1407da930(void)

void FUN_1407da930(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
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
      plVar2 = (longlong *)(*local_78 + (longlong)iStack_5c * 0xe0);
      FUN_14626ac20(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140442250(param_1,param_2);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407daac8 FUN_1407daac8 body=341 status=ok
// SIG undefined FUN_1407daac8(void)

void FUN_1407daac8(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xdc + (longlong)iVar4 * 0xe0) * 4) =
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



// FUNCTION 1407dac1e FUN_1407dac1e body=1075 status=ok
// SIG undefined FUN_1407dac1e(void)

longlong * FUN_1407dac1e(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = 0x18;
  do {
    if (*(longlong *)(param_1 + lVar5) == param_2) goto LAB_1407db00d;
    lVar5 = lVar5 + 0x5f8;
  } while (lVar5 != 0x3bc8);
  FUN_1446f470e(&local_50);
  lVar5 = 0x18;
  do {
    if (*(longlong *)(param_1 + lVar5) == local_50) goto LAB_1407db00d;
    lVar5 = lVar5 + 0x5f8;
  } while (lVar5 != 0x3bc8);
  iVar6 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar6 = 0;
  }
  if (0 < iVar6) {
    iVar15 = 0;
    do {
      iVar15 = iVar15 + 1;
    } while (iVar6 != iVar15);
  }
  iVar6 = FUN_1407db052((longlong *)(param_1 + 0x3bc8));
  if (((iVar6 == -1) ||
      (lVar5 = (longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x3bc8), lVar5 == 0)) ||
     (plVar18 = *(longlong **)(lVar5 + 0x10), plVar18 == (longlong *)0x0)) {
    iVar6 = *(int *)(param_1 + 0x3bf0);
    local_68 = param_3;
    if (iVar6 == 0) {
      uVar19 = 1;
      plVar7 = (longlong *)0x0;
      iVar15 = 0;
      iVar11 = 0;
    }
    else {
      puVar12 = *(uint **)(param_1 + 0x3be8);
      if (*(uint **)(param_1 + 0x3be8) == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 0x3bd8);
      }
      uVar9 = *puVar12;
      if (uVar9 == 0) {
        iVar15 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar15 = iVar6 + -1;
        }
        plVar18 = (longlong *)0x0;
        plVar14 = (longlong *)(ulonglong)(uint)(iVar15 >> 5);
        if (iVar15 >> 5 < 1) {
          plVar14 = plVar18;
        }
        plVar7 = (longlong *)0x0;
        iVar11 = 0;
        do {
          if (plVar14 == plVar7) goto LAB_1407dafd8;
          iVar11 = iVar11 + 0x20;
          uVar9 = puVar12[(longlong)plVar7 + 1];
          plVar7 = (longlong *)((longlong)plVar7 + 1);
        } while (uVar9 == 0);
      }
      else {
        plVar7 = (longlong *)0x0;
        iVar11 = 0;
      }
      uVar19 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar19 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar15 = (iVar11 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
      if (iVar6 <= iVar15) {
        iVar15 = iVar6;
      }
    }
    if (iVar15 != iVar6) {
      iVar13 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar13 = iVar6 + -1;
      }
      iVar13 = iVar13 >> 5;
      uVar9 = 0xffffffff;
      plVar14 = (longlong *)0x0;
      do {
        plVar18 = *(longlong **)(*(longlong *)(param_1 + 0x3bc8) + 0x10 + (longlong)iVar15 * 0x20);
        if (*plVar18 == param_2) break;
        uVar9 = uVar9 & ~(uint)uVar19;
        puVar12 = *(uint **)(param_1 + 0x3be8);
        if (*(uint **)(param_1 + 0x3be8) == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 0x3bd8);
        }
        iVar15 = (int)plVar7;
        lVar5 = (longlong)iVar15;
        uVar17 = puVar12[lVar5] & uVar9;
        plVar18 = plVar14;
        if (uVar17 == 0) {
          iVar10 = iVar13;
          if (iVar13 < iVar15) {
            iVar10 = iVar15;
          }
          if (iVar13 <= iVar15) break;
          lVar16 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar17 = puVar12[lVar5 + lVar16 + 1];
            if (uVar17 != 0) break;
            lVar16 = lVar16 + 1;
            if (iVar10 - lVar5 == lVar16) goto LAB_1407daeb0;
          }
          plVar7 = (longlong *)(ulonglong)(iVar15 + (int)lVar16 + 1);
          uVar9 = 0xffffffff;
        }
        uVar19 = (ulonglong)(-uVar17 & uVar17);
        uVar1 = uVar19 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar15 = (iVar11 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
      } while (iVar15 < iVar6);
LAB_1407daeb0:
      if (plVar18 != (longlong *)0x0) goto LAB_1407daede;
    }
    plVar18 = (longlong *)0x0;
    goto LAB_1407dafd8;
  }
LAB_1407daede:
  if ((0x7ffffffe < (int)plVar18[2] - 2U) || (0x7ffffffe < (int)param_3[1] - 2U))
  goto LAB_1407dafd8;
  FUN_1400b22c2(&local_60,&DAT_149e27980);
  uVar17 = 0;
  uVar9 = local_58 - 1;
  puVar8 = local_60;
  if (local_58 == 0) {
    puVar8 = &DAT_149dfb77a;
    uVar9 = uVar17;
  }
  cVar4 = FUN_144a38768(param_3,puVar8,uVar9,1);
  if (cVar4 != '\0') {
    iVar6 = (int)plVar18[2];
    if (iVar6 == (int)param_3[1]) {
      if (1 < iVar6) {
        lVar5 = 0;
        while( true ) {
          uVar2 = *(ushort *)(plVar18[1] + lVar5);
          uVar9 = (uint)uVar2;
          uVar3 = *(ushort *)(*param_3 + lVar5);
          uVar17 = (uint)uVar3;
          if (uVar2 != uVar3) {
            if ((uVar3 | uVar2) < 0x80) {
              uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_1407daf8b;
            }
            iVar6 = uVar9 - uVar17;
            goto LAB_1407dafb8;
          }
          if (uVar2 == 0) break;
LAB_1407daf8b:
          lVar5 = lVar5 + 2;
        }
        iVar6 = 0;
        goto LAB_1407dafb8;
      }
      bVar20 = true;
    }
    else {
      iVar6 = (int)param_3[1] + iVar6 + -1;
LAB_1407dafb8:
      bVar20 = iVar6 == 0;
    }
    uVar17 = (uint)(bVar20 ^ 1);
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((char)uVar17 != '\0') {
    plVar18 = (longlong *)0x0;
  }
LAB_1407dafd8:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return plVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1407db00d:
  plVar18 = (longlong *)(param_1 + lVar5);
  goto LAB_1407daede;
}



// FUNCTION 1407db052 FUN_1407db052 body=195 status=ok
// SIG undefined FUN_1407db052(void)

int FUN_1407db052(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1407db094:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1407db10d;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1407db10d;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1407db0f7;
    }
  }
  return -1;
LAB_1407db10d:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1407db0f7:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1407db094;
}



// FUNCTION 1407db124 FUN_1407db124 body=40 status=ok
// SIG undefined FUN_1407db124(void)

undefined8 FUN_1407db124(undefined8 param_1,int param_2)

{
  FUN_1407db14c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1407db14c FUN_1407db14c body=135 status=ok
// SIG undefined FUN_1407db14c(void)

void FUN_1407db14c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3d6940;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1407db1d4(param_1 + 0xb,0);
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1407db1d4 FUN_1407db1d4 body=600 status=ok
// SIG undefined FUN_1407db1d4(void)

void FUN_1407db1d4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar17 = 0;
    uVar16 = 1;
    iVar15 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar13 = *puVar10;
    if (uVar13 == 0) {
      iVar15 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar15 = iVar4 + -1;
      }
      uVar17 = 0;
      uVar11 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar11 = uVar17;
      }
      iVar15 = 0;
      do {
        if (uVar11 == uVar17) goto LAB_1407db20a;
        iVar15 = iVar15 + 0x20;
        uVar13 = puVar10[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar17 = 0;
      iVar15 = 0;
    }
    uVar16 = (ulonglong)(-uVar13 & uVar13);
    uVar11 = uVar16 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar9 = (iVar15 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar9) {
      iVar9 = iVar4;
    }
  }
  if (iVar9 < iVar4) {
    uVar13 = 0xffffffff;
    do {
      lVar14 = *param_1;
      plVar5 = *(longlong **)(lVar14 + 0x18 + (longlong)iVar9 * 0x30);
      if (plVar5 != (longlong *)0x0) {
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
      if (*(longlong *)(lVar14 + (longlong)iVar9 * 0x30) != 0) {
        FUN_1400020a8();
      }
      uVar13 = uVar13 & ~(uint)uVar16;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar4 = (int)param_1[5];
      iVar9 = (int)uVar17;
      lVar14 = (longlong)iVar9;
      uVar6 = puVar10[lVar14] & uVar13;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar9) {
          iVar8 = iVar9;
        }
        if (iVar7 <= iVar9) break;
        lVar12 = 0;
        while( true ) {
          iVar15 = iVar15 + 0x20;
          uVar6 = puVar10[lVar14 + lVar12 + 1];
          if (uVar6 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar8 - lVar14 == lVar12) goto LAB_1407db20a;
        }
        uVar17 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar13 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar6 & uVar6);
      uVar11 = uVar16 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar9 = (iVar15 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_1407db20a:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar6 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar6 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar6;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1407db42c FUN_1407db42c body=557 status=ok
// SIG undefined FUN_1407db42c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1407db42c(ushort *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca56e58) && (FUN_144b3d300(&DAT_14ca56e58), DAT_14ca56e58 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
    if (plVar4 == (longlong *)0x0) {
      DAT_14ca56e50 = 0;
    }
    else {
      DAT_14ca56e50 = (**(code **)(*plVar4 + 0x68))(plVar4);
    }
    _Init_thread_footer(&DAT_14ca56e58);
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = *(int *)(lVar1 + 0xc60);
  if (DAT_14ca56e50 == 0) {
LAB_1407db631:
    if (iVar3 == 0x40000002) goto LAB_1407db492;
  }
  else {
    if (iVar3 == 0x40000002) goto LAB_1407db492;
    if ((iVar3 == 1) && (DAT_14c86a9f8 != '\0')) {
      FUN_140ad26c0();
      GetCurrentThreadId();
      iVar3 = *(int *)(lVar1 + 0xc60);
      goto LAB_1407db631;
    }
  }
  if ((iVar3 == 1) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
LAB_1407db492:
  if (2 < (int)(&DAT_14ca814b8)[uVar5 * 0xf]) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca56e78) && (FUN_144b3d300(&DAT_14ca56e78), DAT_14ca56e78 == -1)) {
      FUN_140056680(&DAT_14ca56e60,L"r.Shadow.DetectVertexShaderLayerAtRuntime");
      _DAT_14ca56e70 = 0;
      atexit((_func_5014 *)&LAB_1430660a0);
      _Init_thread_footer(&DAT_14ca56e78);
    }
    if ((*(byte *)((longlong)&DAT_14ca814d0 + uVar5 * 0x3c + 7) & 4) == 0) {
      FUN_144a847a6(&DAT_14ca56e60,uVar5);
    }
    cVar2 = FUN_1407db659(uVar5);
    if ((cVar2 != '\0') &&
       ((char)*(undefined8 *)(param_1 + 0x1c) < '\0' &&
        ((uint)*(undefined8 *)(param_1 + 0x1c) & 0x2000202) != 0x200)) {
      return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x24) >> 8),
                      (*(byte *)(*(longlong *)(param_1 + 0x24) + 0x29) & 1) == 0);
    }
  }
  return 0;
}



// FUNCTION 1407db659 FUN_1407db659 body=205 status=ok
// SIG undefined FUN_1407db659(void)

byte FUN_1407db659(uint param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca96fa0) {
    FUN_144b3d300(&DAT_14ca96fa0);
    if (DAT_14ca96fa0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca96f98 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.Virtual.NonNaniteVSM",1);
      _Init_thread_footer(&DAT_14ca96fa0);
    }
  }
  iVar2 = (**(code **)(*DAT_14ca96f98 + 0xb0))();
  if (iVar2 == 0) {
    bVar1 = 0;
  }
  else {
    lVar3 = ((ulonglong)param_1 & 0xffff) * 0x3c;
    bVar1 = (byte)((uint)(&DAT_14ca814c8)[((ulonglong)param_1 & 0xffff) * 0xf] >> 0x1d) &
            *(byte *)((longlong)&DAT_14ca814d8 + lVar3 + 3) >> 4 &
            (byte)((*(uint *)(&DAT_14ca814cc + lVar3) & 8) >> 3);
  }
  return bVar1;
}



// FUNCTION 1407db726 FUN_1407db726 body=104 status=ok
// SIG undefined FUN_1407db726(void)

void FUN_1407db726(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_1407db7c8();
  lVar2 = *param_2;
  uVar1 = *(undefined4 *)(param_1 + 0xd8);
  uVar4 = FUN_1407db78e();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar3,uVar4,0);
  }
  FUN_14083c276(lVar2,uVar4,uVar1,param_3,0);
  return;
}



// FUNCTION 1407db78e FUN_1407db78e body=57 status=ok
// SIG undefined FUN_1407db78e(void)

void FUN_1407db78e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0d50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0d50 = FUN_14171c317(FUN_14661928c,uVar1,L"EAtt_WeaponBehaviorOakZoom");
  }
  return;
}



// FUNCTION 1407db7c8 FUN_1407db7c8 body=237 status=ok
// SIG undefined FUN_1407db7c8(void)

void FUN_1407db7c8(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = *param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar4 = FUN_1407db8b5();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar3,uVar4,0);
  }
  FUN_14083c276(lVar2,uVar4,uVar1,param_3,0);
  lVar2 = *param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uVar4 = FUN_1407db8b5();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar3,uVar4,1);
  }
  FUN_14083c276(lVar2,uVar4,uVar1,param_3,0);
  lVar2 = *param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  uVar4 = FUN_1407db8b5();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar3,uVar4,2);
  }
  FUN_14083c276(lVar2,uVar4,uVar1,param_3,0);
  return;
}



// FUNCTION 1407db8b5 FUN_1407db8b5 body=57 status=ok
// SIG undefined FUN_1407db8b5(void)

void FUN_1407db8b5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93e28 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93e28 = FUN_14171c317(FUN_146574622,uVar1,L"EAtt_WeaponBehaviorZoom");
  }
  return;
}



// FUNCTION 1407db8f6 FUN_1407db8f6 body=54 status=ok
// SIG undefined FUN_1407db8f6(void)

undefined1 FUN_1407db8f6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407db92c();
  FUN_1402057ac(param_2,param_1,uVar1,0);
  FUN_140fd61a4(param_1,param_2);
  return 1;
}



// FUNCTION 1407db92c FUN_1407db92c body=57 status=ok
// SIG undefined FUN_1407db92c(void)

void FUN_1407db92c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c110 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c110 = FUN_140002ddd(FUN_146530334,uVar1,L"MissionEntryPoint");
  }
  return;
}



// FUNCTION 1407db974 FUN_1407db974 body=31 status=ok
// SIG undefined FUN_1407db974(void)

undefined8 FUN_1407db974(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1407db994 FUN_1407db994 body=42 status=ok
// SIG undefined FUN_1407db994(void)

void FUN_1407db994(longlong param_1)

{
  FUN_1407db9be();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    *(code **)(param_1 + 0xc0) = FUN_140631fbe;
  }
  return;
}



// FUNCTION 1407db9be FUN_1407db9be body=187 status=ok
// SIG undefined FUN_1407db9be(void)

void FUN_1407db9be(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if (((*(uint *)(param_1 + 8) & 0x10) != 0) && (*(longlong *)(param_1 + 0xc0) == 0)) {
    *(code **)(param_1 + 0xc0) = FUN_140631fbe;
  }
  return;
}



// FUNCTION 1407dba7a FUN_1407dba7a body=509 status=ok
// SIG undefined FUN_1407dba7a(void)

void FUN_1407dba7a(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  
  lVar13 = *(longlong *)(*param_1 + 0x600);
  if (lVar13 == 0) {
    lVar13 = *param_1;
  }
  lVar8 = (longlong)*param_2 * 0x30;
  iVar7 = *(int *)(lVar13 + 4 + lVar8);
  iVar11 = 0;
  if (iVar7 <= *(int *)(lVar13 + 0xc + lVar8)) {
    lVar13 = lVar13 + lVar8;
    plVar1 = (longlong *)(lVar13 + 0x10);
    iVar11 = 0;
    do {
      *(int *)(lVar13 + 4) = iVar7 + 1;
      uVar3 = *(uint *)(*(longlong *)param_1[1] + (longlong)iVar7 * 0x50);
      if (-1 < (int)uVar3) {
        lVar10 = *(longlong *)param_1[1] + (longlong)iVar7 * 0x50;
        iVar7 = *(int *)(lVar10 + 0x10);
        iVar11 = iVar11 + iVar7;
        lVar8 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8) +
                (ulonglong)(uVar3 & 0xffff) * 0x18;
        if ((*(uint *)(lVar8 + 8) >> 0x15 & 1) == 0) {
          bVar14 = (*(uint *)(lVar8 + 8) & 0x6e500000) != 0;
          if (bVar14) {
            LOCK();
            *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) & ~DAT_14c75ec9c;
            UNLOCK();
            LOCK();
            *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | DAT_14c75ec98;
            UNLOCK();
            iVar7 = *(int *)(lVar13 + 0x18);
            *(uint *)(lVar13 + 0x18) = iVar7 + 1U;
            if (*(uint *)(lVar13 + 0x1c) < iVar7 + 1U) {
              FUN_1407dbc78(plVar1,iVar7);
            }
            *(longlong *)(*plVar1 + (longlong)iVar7 * 8) = lVar8;
            iVar7 = *(int *)(lVar10 + 0x10);
          }
          if (iVar7 != 0) {
            lVar10 = *(longlong *)(lVar10 + 8);
            lVar12 = 0;
            do {
              uVar3 = *(uint *)(lVar10 + lVar12);
              uVar9 = (ulonglong)(uVar3 & 0xffff);
              lVar5 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              LOCK();
              puVar2 = (uint *)(lVar5 + 8 + uVar9 * 0x18);
              *puVar2 = *puVar2 & ~DAT_14c75ec9c & 0xff7fffff;
              UNLOCK();
              LOCK();
              puVar2 = (uint *)(lVar5 + 8 + uVar9 * 0x18);
              *puVar2 = *puVar2 | DAT_14c75ec98;
              UNLOCK();
              bVar6 = !bVar14;
              bVar14 = true;
              if (bVar6) {
                if ((*(uint *)(lVar5 + uVar9 * 0x18 + 8) & 0x6e500000) == 0) {
                  bVar14 = false;
                }
                else {
                  iVar4 = *(int *)(lVar13 + 0x18);
                  *(uint *)(lVar13 + 0x18) = iVar4 + 1U;
                  if (*(uint *)(lVar13 + 0x1c) < iVar4 + 1U) {
                    FUN_1407dbc78(plVar1,iVar4);
                  }
                  *(longlong *)(*plVar1 + (longlong)iVar4 * 8) = lVar8;
                }
              }
              lVar12 = lVar12 + 4;
            } while ((longlong)iVar7 * 4 != lVar12);
          }
        }
        else {
          iVar7 = *(int *)(lVar13 + 0x28);
          *(uint *)(lVar13 + 0x28) = iVar7 + 1U;
          if (*(uint *)(lVar13 + 0x2c) < iVar7 + 1U) {
            FUN_1407dbc78((longlong *)(lVar13 + 0x20),iVar7);
          }
          *(longlong *)(*(longlong *)(lVar13 + 0x20) + (longlong)iVar7 * 8) = lVar8;
        }
      }
      iVar7 = *(int *)(lVar13 + 4);
    } while (iVar7 <= *(int *)(lVar13 + 0xc));
  }
  LOCK();
  *(int *)param_1[2] = *(int *)param_1[2] + iVar11;
  UNLOCK();
  return;
}



// FUNCTION 1407dbc78 FUN_1407dbc78 body=353 status=ok
// SIG undefined FUN_1407dbc78(void)

void FUN_1407dbc78(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407dbcfd;
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
LAB_1407dbcfd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1407dbdda FUN_1407dbdda body=4761 status=ok
// SIG undefined FUN_1407dbdda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1407dbdda(longlong *param_1,int *param_2,longlong param_3,double *param_4,float param_5,
                   float param_6,double *param_7,double *param_8)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auVar3 [16];
  double dVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  double *pdVar10;
  double *pdVar11;
  longlong lVar12;
  ulonglong uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar33;
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  double dVar45;
  double dVar46;
  double dVar48;
  undefined1 auVar47 [16];
  double dVar49;
  double dVar50;
  double dVar52;
  undefined1 auVar51 [16];
  double dVar53;
  double dVar54;
  undefined1 auStack_388 [32];
  float local_368;
  undefined1 *local_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  double local_2f8 [4];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
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
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (*param_1 != 0) {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    lVar12 = (longlong)iVar2;
    if (lVar12 != -1) {
      plVar1 = (longlong *)(param_3 + 0x20);
      lVar7 = *(longlong *)(param_3 + 0x38);
      if (*(char *)(lVar7 + lVar12) == '\0') {
LAB_1407dbe9a:
        pdVar10 = (double *)(lVar12 * 0x60 + *plVar1);
        pdVar11 = local_2f8;
        for (lVar9 = 0xc; uVar41 = 0, lVar9 != 0; lVar9 = lVar9 + -1) {
          *pdVar11 = *pdVar10;
          pdVar10 = pdVar10 + 1;
          pdVar11 = pdVar11 + 1;
        }
      }
      else {
        iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0x30) + 0x90) + lVar12 * 4);
        lVar9 = (longlong)iVar6;
        if (lVar9 == -1) goto LAB_1407dbe9a;
        if (*(char *)(lVar7 + lVar9) == '\0') {
          FUN_1447d5d8e(plVar1,iVar6);
        }
        lVar12 = lVar12 * 0x60 + *plVar1;
        lVar7 = FUN_1449437a2(lVar12,local_2f8,lVar9 * 0x60 + *plVar1);
        uVar41 = (undefined4)lVar12;
      }
      auVar40 = _DAT_149934d80;
      auVar34 = *(undefined1 (*) [16])(param_8 + 8);
      dVar17 = auVar34._0_8_;
      dVar27 = auVar34._8_8_;
      auVar20 = *(undefined1 (*) [16])(param_8 + 10);
      dVar15 = auVar20._0_8_;
      dVar16 = local_2b8._0_8_;
      dVar31 = local_2b8._8_8_;
      dVar19 = local_2a8._0_8_;
      auVar34 = minpd(local_2b8,auVar34);
      auVar38 = minpd(local_2a8,auVar20);
      auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
      auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
      iVar6 = movmskpd((int)lVar7,auVar35);
      auVar34._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
      auVar34._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
      uVar8 = movmskpd(uVar41,auVar34);
      if ((uVar8 & 0x3fffffff) == 0 && iVar6 == 0) {
        dVar46 = *param_8;
        dVar37 = param_8[1];
        dVar50 = param_8[2];
        dVar4 = param_8[3];
        dVar33 = param_8[3];
        dVar39 = param_8[3];
        dVar18 = param_8[1];
        dVar24 = param_8[1];
        dVar53 = param_8[2];
        dVar52 = param_8[2];
        local_358 = local_2f8[1] * dVar53 * -1.0 +
                    local_2f8[2] * dVar18 + local_2f8[3] * *param_8 * 1.0 + local_2f8[0] * dVar33;
        dStack_350 = local_2f8[0] * dVar52 * 1.0 +
                     local_2f8[3] * dVar24 + local_2f8[2] * *param_8 * -1.0 + local_2f8[1] * dVar39;
        local_348._8_8_ =
             local_2f8[2] * dVar52 * -1.0 +
             ((*param_8 * local_2f8[0] * -1.0 + local_2f8[3] * dVar39) - local_2f8[1] * dVar24);
        local_348._0_8_ =
             local_2f8[3] * dVar53 * 1.0 +
             ((*param_8 * local_2f8[1] * 1.0 + local_2f8[2] * dVar33) - local_2f8[0] * dVar18);
        dVar45 = local_2d8 * dVar17;
        dVar48 = dStack_2d0 * dVar27;
        dVar18 = local_2c8 * dVar15;
        dVar24 = dStack_2c0 * auVar20._8_8_;
        dVar53 = dVar48 * dVar46 - dVar37 * dVar45;
        dVar54 = dVar18 * dVar37 - dVar50 * dVar48;
        dVar49 = dVar45 * dVar50 - dVar46 * dVar18;
        dVar52 = dVar24 * dVar4 - dVar4 * dVar24;
        dVar54 = dVar54 + dVar54;
        dVar49 = dVar49 + dVar49;
        dVar53 = dVar53 + dVar53;
        dVar52 = dVar52 + dVar52;
        local_118 = (dVar53 * dVar37 - dVar50 * dVar49) + dVar33 * dVar54 + dVar45 + param_8[4];
        dStack_110 = (dVar54 * dVar50 - dVar53 * dVar46) + dVar39 * dVar49 + dVar48 + param_8[5];
        local_328 = (dVar49 * dVar46 - dVar37 * dVar54) + dVar33 * dVar53 + dVar18 + param_8[6];
        dStack_320 = (dVar52 * dVar4 - dVar52 * dVar4) + dVar39 * dVar52 + dVar24 + param_8[7];
      }
      else {
        dVar53 = *param_8;
        dVar52 = param_8[1];
        dVar46 = param_8[2];
        dVar37 = dVar52 + dVar52;
        dVar33 = dVar46 + dVar46;
        dVar50 = dVar53 * (dVar53 + dVar53);
        local_1a8 = (1.0 - (dVar50 + dVar52 * dVar37)) * dVar15;
        dVar39 = param_8[3];
        dVar18 = dVar33 * dVar39;
        dVar24 = (dVar53 + dVar53) * param_8[3];
        dVar39 = dVar37 * dVar39;
        local_1b8 = (dVar39 + *param_8 * dVar33) * dVar15;
        dStack_1d0 = (DAT_149934d80._8_8_ - (dVar46 * dVar33 + dVar50)) * dVar27;
        dVar50 = (dVar37 * dVar53 + dVar18) * dVar17;
        local_1c8 = (dVar33 * dVar52 + dVar24) * dVar27;
        local_1d8 = (dVar37 * dVar53 - dVar18) * dVar27;
        dStack_1b0 = (dVar33 * dVar52 - dVar24) * dVar15;
        local_1e8 = (*param_8 * dVar33 - dVar39) * dVar17;
        local_1f8._8_4_ = SUB84(dVar50,0);
        local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar46 * dVar33 + dVar52 * dVar37)) * dVar17;
        local_1f8._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = param_8[4];
        dStack_190 = param_8[5];
        local_188 = param_8[6];
        uStack_180 = 0x3ff0000000000000;
        dVar33 = local_2f8[1] + local_2f8[1];
        dVar18 = local_2f8[2] + local_2f8[2];
        dVar39 = local_2f8[0] * (local_2f8[0] + local_2f8[0]);
        local_228 = (1.0 - (dVar39 + local_2f8[1] * dVar33)) * dVar19;
        dVar24 = (local_2f8[0] + local_2f8[0]) * local_2f8[3];
        local_238 = (dVar33 * local_2f8[3] + local_2f8[0] * dVar18) * dVar19;
        local_258 = (dVar33 * local_2f8[0] - dVar18 * local_2f8[3]) * dVar31;
        dStack_230 = (dVar18 * local_2f8[1] - dVar24) * dVar19;
        local_278 = ((double)DAT_149934d80 - (local_2f8[2] * dVar18 + local_2f8[1] * dVar33)) *
                    dVar16;
        dStack_250 = (DAT_149934d80._8_8_ - (local_2f8[2] * dVar18 + dVar39)) * dVar31;
        dStack_270 = (dVar33 * local_2f8[0] + dVar18 * local_2f8[3]) * dVar16;
        local_248 = (dVar18 * local_2f8[1] + dVar24) * dVar31;
        local_268 = (local_2f8[0] * dVar18 - dVar33 * local_2f8[3]) * dVar16;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = local_2d8;
        dStack_210 = dStack_2d0;
        local_208 = local_2c8;
        uStack_200 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_178);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar38._8_8_ = -(ulonglong)(0.0 <= dVar27 * dVar31);
        auVar38._0_8_ = -(ulonglong)(0.0 <= dVar17 * dVar16);
        auVar34 = blendvpd(_DAT_149936790,auVar40,auVar38);
        uVar13 = -(ulonglong)(0.0 <= dVar15 * dVar19);
        dVar39 = (double)(~uVar13 & 0xbff0000000000000 | uVar13 & 0x3ff0000000000000);
        dVar33 = auVar34._0_8_;
        local_168 = local_168 * dVar33;
        local_170 = local_170 * dVar33;
        local_178 = local_178 * dVar33;
        dVar33 = auVar34._8_8_;
        local_148 = local_148 * dVar33;
        local_150 = local_150 * dVar33;
        local_158 = dVar33 * local_158;
        local_128 = local_128 * dVar39;
        local_130 = local_130 * dVar39;
        local_138 = dVar39 * local_138;
        FUN_14481fd10(&local_298,&local_178);
        dVar39 = local_288 * local_288 + local_298 * local_298;
        dVar33 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar30._0_8_ = dVar39 + dVar33;
        auVar30._8_8_ = dVar39 + dVar33;
        auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
        auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
        auVar34 = sqrtpd(auVar30,auVar30);
        auVar34 = divpd(auVar40,auVar34);
        auVar40._0_8_ = auVar34._0_8_ * local_288;
        auVar40._8_8_ = auVar34._8_8_ * dStack_280;
        local_358 = (double)((ulonglong)(local_298 * auVar34._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_));
        dStack_350 = (double)((ulonglong)(dStack_290 * auVar34._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_));
        local_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar23);
        local_328 = local_108;
        dStack_320 = 0.0;
      }
      dVar39 = local_2a8._8_8_ * auVar20._8_8_;
      dVar19 = dVar19 * dVar15;
      local_308._8_4_ = SUB84(dVar31 * dVar27,0);
      local_308._0_8_ = dVar16 * dVar17;
      local_308._12_4_ = (int)((ulonglong)(dVar31 * dVar27) >> 0x20);
      local_318 = local_118;
      dStack_310 = dStack_110;
      if (param_5 < 1e-08) {
        dVar17 = *param_7;
        dVar15 = param_7[1];
        auVar34 = *(undefined1 (*) [16])(param_7 + 2);
      }
      else if (1.0 < param_5) {
        dVar17 = *param_4;
        dVar15 = param_4[1];
        auVar34 = *(undefined1 (*) [16])(param_4 + 2);
      }
      else {
        dVar18 = *param_7;
        dVar33 = param_7[1];
        dVar17 = *param_4;
        dVar24 = param_4[1];
        dVar27 = param_7[2];
        dVar15 = param_4[2];
        uVar41 = SUB84(dVar15,0);
        uVar42 = (undefined4)((ulonglong)dVar15 >> 0x20);
        dVar16 = param_7[3];
        uVar43 = SUB84(dVar16,0);
        uVar44 = (undefined4)((ulonglong)dVar16 >> 0x20);
        dVar31 = param_4[3];
        dVar15 = dVar16 * dVar31 + dVar27 * dVar15 + dVar18 * dVar17 + dVar33 * dVar24;
        dVar16 = dVar15 * (double)(&DAT_149931160)[0.0 <= dVar15];
        dVar53 = 1.0 - (double)param_5;
        dVar15 = (double)(&DAT_149931160)[0.0 <= dVar15] * (double)param_5;
        if (dVar16 < 0.9999) {
          dVar17 = dVar16;
          if (1.0 <= dVar16) {
            dVar17 = 1.0;
          }
          dVar17 = acos((double)(-(ulonglong)(dVar16 < -1.0) & 0xbff0000000000000 |
                                ~-(ulonglong)(dVar16 < -1.0) & (ulonglong)dVar17));
          dVar16 = sin(dVar17);
          dVar53 = sin(dVar53 * dVar17);
          dVar53 = dVar53 * (1.0 / dVar16);
          dVar15 = sin(dVar15 * dVar17);
          dVar15 = dVar15 * (1.0 / dVar16);
          uVar43 = SUB84(param_7[3],0);
          uVar44 = (undefined4)((ulonglong)param_7[3] >> 0x20);
          dVar31 = param_4[3];
          dVar27 = param_7[2];
          uVar41 = SUB84(param_4[2],0);
          uVar42 = (undefined4)((ulonglong)param_4[2] >> 0x20);
          dVar18 = *param_7;
          dVar33 = param_7[1];
          dVar17 = *param_4;
          dVar24 = param_4[1];
        }
        dVar16 = (double)CONCAT44(uVar44,uVar43) * dVar53 + dVar31 * dVar15;
        dVar27 = dVar27 * dVar53 + (double)CONCAT44(uVar42,uVar41) * dVar15;
        dVar31 = dVar33 * dVar53 + dVar24 * dVar15;
        dVar17 = dVar18 * dVar53 + dVar17 * dVar15;
        dVar15 = dVar27 * dVar27 + dVar17 * dVar17;
        dVar33 = dVar16 * dVar16 + dVar31 * dVar31;
        auVar32._0_8_ = dVar15 + dVar33;
        auVar32._8_8_ = dVar15 + dVar33;
        auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
        auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
        auVar34 = sqrtpd(auVar32,auVar32);
        auVar34 = divpd(_DAT_149934d80,auVar34);
        auVar36._0_8_ = auVar34._0_8_ * dVar27;
        auVar36._8_8_ = auVar34._8_8_ * dVar16;
        dVar17 = (double)((ulonglong)(dVar17 * auVar34._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_));
        dVar15 = (double)((ulonglong)(dVar31 * auVar34._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_));
        auVar34 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar36,auVar20);
      }
      dVar18 = param_7[2] * -1.0;
      dVar24 = param_7[3] * 1.0;
      dVar53 = auVar34._0_8_;
      dVar52 = auVar34._8_8_;
      dVar27 = param_7[1];
      dVar16 = param_7[1];
      dVar31 = dVar15 * dVar18 * -1.0 +
               ((dVar17 * dVar24 - dVar52 * *param_7 * 1.0) - dVar53 * dVar27);
      dVar33 = dVar17 * dVar18 * 1.0 +
               ((dVar15 * dVar24 - dVar53 * *param_7 * -1.0) - dVar52 * dVar16);
      auVar47._0_8_ =
           dVar52 * dVar18 * 1.0 + dVar17 * dVar27 + (dVar24 * dVar53 - *param_7 * dVar15 * 1.0);
      auVar47._8_8_ =
           dVar53 * dVar18 * -1.0 + dVar15 * dVar16 + (dVar24 * dVar52 - *param_7 * dVar17 * -1.0);
      dVar17 = auVar47._0_8_ - dVar31 * 0.0;
      dVar15 = dVar31 * 0.0 - dVar33;
      dVar16 = dVar33 * 0.0 + auVar47._0_8_ * -0.0;
      dVar15 = dVar15 + dVar15;
      dVar17 = dVar17 + dVar17;
      dVar16 = dVar16 + dVar16;
      local_168 = (dVar31 * dVar17 - dVar16 * dVar33) + auVar47._8_8_ * dVar15 + 0.0;
      local_170 = (auVar47._0_8_ * dVar16 - dVar15 * dVar31) + auVar47._8_8_ * dVar17 + 0.0;
      local_178 = (dVar33 * dVar15 - dVar17 * auVar47._0_8_) + auVar47._8_8_ * dVar16 + 1.0;
      local_368 = (*(float *)((longlong)param_1 + 0x1c) + *(float *)(param_1 + 4)) * 0.017453292;
      local_360 = local_1f8;
      cVar5 = FUN_1407dd074(&local_178,
                            (*(float *)((longlong)param_1 + 0x14) - *(float *)(param_1 + 3)) *
                            0.017453292,
                            (*(float *)((longlong)param_1 + 0x14) + *(float *)(param_1 + 3)) *
                            0.017453292,
                            (*(float *)((longlong)param_1 + 0x1c) - *(float *)(param_1 + 4)) *
                            0.017453292);
      if (cVar5 != '\0') {
        fVar14 = (float)FUN_1407dd5b0(&local_178,local_1f8);
        dVar17 = DAT_14c8463e8 * auVar47._8_8_ +
                 DAT_14c8463e0 * auVar47._0_8_ + DAT_14c8463d0 * dVar31 + DAT_14c8463d8 * dVar33;
        dVar15 = (dVar17 + dVar17) * dVar17 + -1.0;
        dVar17 = dVar15;
        if (1.0 <= dVar15) {
          dVar17 = 1.0;
        }
        dVar17 = acos((double)(-(ulonglong)(dVar15 < -1.0) & 0xbff0000000000000 |
                              ~-(ulonglong)(dVar15 < -1.0) & (ulonglong)dVar17));
        if ((1e-08 < (float)dVar17) && (fVar14 = fVar14 / (float)dVar17, 1e-08 <= fVar14)) {
          if (1.0 < fVar14) {
            auVar47._8_8_ = DAT_14c8463e8;
            auVar47._0_8_ = DAT_14c8463e0;
            dVar31 = DAT_14c8463d0;
            dVar33 = DAT_14c8463d8;
          }
          else {
            dVar17 = auVar47._8_8_ * DAT_14c8463e8 +
                     auVar47._0_8_ * DAT_14c8463e0 + dVar31 * DAT_14c8463d0 + dVar33 * DAT_14c8463d8
            ;
            dVar15 = dVar17 * (double)(&DAT_149931160)[0.0 <= dVar17];
            dVar16 = 1.0 - (double)fVar14;
            dVar17 = (double)(&DAT_149931160)[0.0 <= dVar17] * (double)fVar14;
            if (dVar15 < 0.9999) {
              dVar27 = dVar15;
              if (1.0 <= dVar15) {
                dVar27 = 1.0;
              }
              dVar15 = acos((double)(-(ulonglong)(dVar15 < -1.0) & 0xbff0000000000000 |
                                    ~-(ulonglong)(dVar15 < -1.0) & (ulonglong)dVar27));
              dVar27 = sin(dVar15);
              dVar16 = sin(dVar16 * dVar15);
              dVar16 = dVar16 * (1.0 / dVar27);
              dVar17 = sin(dVar17 * dVar15);
              dVar17 = dVar17 * (1.0 / dVar27);
            }
            dVar15 = auVar47._8_8_ * dVar16 + DAT_14c8463e8 * dVar17;
            dVar27 = auVar47._0_8_ * dVar16 + DAT_14c8463e0 * dVar17;
            dVar33 = dVar33 * dVar16 + DAT_14c8463d8 * dVar17;
            dVar31 = dVar31 * dVar16 + DAT_14c8463d0 * dVar17;
            dVar17 = dVar27 * dVar27 + dVar31 * dVar31;
            dVar16 = dVar15 * dVar15 + dVar33 * dVar33;
            auVar26._0_8_ = dVar17 + dVar16;
            auVar26._8_8_ = dVar17 + dVar16;
            auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
            auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
            auVar34 = sqrtpd(auVar26,auVar26);
            auVar34 = divpd(_DAT_149934d80,auVar34);
            auVar29._0_8_ = auVar34._0_8_ * dVar27;
            auVar29._8_8_ = auVar34._8_8_ * dVar15;
            auVar47 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar29,auVar22);
            dVar31 = (double)((ulonglong)(dVar31 * auVar34._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
            dVar33 = (double)((ulonglong)(dVar33 * auVar34._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_));
          }
        }
      }
      dVar17 = dStack_350;
      auVar51 = local_348;
      dVar15 = local_358;
      dVar16 = dStack_350;
      if (1e-08 <= param_6) {
        local_338._8_4_ = SUB84(dVar39,0);
        local_338._0_8_ = dVar19;
        local_338._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
        dVar15 = param_7[3];
        dVar16 = param_7[3];
        dVar46 = auVar47._0_8_;
        dVar37 = auVar47._8_8_;
        dVar27 = param_7[1];
        dVar39 = param_7[1];
        dVar24 = param_7[2];
        dVar18 = param_7[2];
        dVar53 = dVar33 * dVar24 * -1.0 +
                 dVar46 * dVar27 + dVar37 * *param_7 * 1.0 + dVar31 * dVar15;
        dVar52 = dVar31 * dVar18 * 1.0 +
                 dVar37 * dVar39 + dVar46 * *param_7 * -1.0 + dVar33 * dVar16;
        dVar24 = dVar37 * dVar24 * 1.0 +
                 ((*param_7 * dVar33 * 1.0 + dVar15 * dVar46) - dVar31 * dVar27);
        dVar18 = dVar46 * dVar18 * -1.0 +
                 ((*param_7 * dVar31 * -1.0 + dVar16 * dVar37) - dVar33 * dVar39);
        lVar12 = (longlong)*(char *)((longlong)param_1 + 0x11) * 0xc0;
        pdVar10 = (double *)(&DAT_14cadc270 + lVar12 + 0x60 + (longlong)(char)param_1[2] * 0x480);
        dVar27 = *pdVar10;
        dVar31 = pdVar10[1];
        pdVar10 = (double *)(&DAT_14cadc270 + lVar12 + 0x70 + (longlong)(char)param_1[2] * 0x480);
        dVar39 = *pdVar10;
        dVar33 = pdVar10[1];
        dVar15 = dVar31 * dVar24 * -1.0 + dVar39 * dVar52 + dVar33 * dVar53 * 1.0 + dVar27 * dVar18;
        dVar16 = dVar27 * dVar24 * 1.0 + dVar33 * dVar52 + dVar39 * dVar53 * -1.0 + dVar31 * dVar18;
        auVar51._0_8_ =
             dVar33 * dVar24 * 1.0 + ((dVar53 * dVar31 * 1.0 + dVar18 * dVar39) - dVar52 * dVar27);
        auVar51._8_8_ =
             dVar39 * dVar24 * -1.0 + ((dVar53 * dVar27 * -1.0 + dVar18 * dVar33) - dVar52 * dVar31)
        ;
        uVar41 = local_348._0_4_;
        uVar42 = local_348._4_4_;
        dVar27 = local_348._8_8_;
        if (1.0 < param_6) {
          dVar39 = (double)local_338._8_8_;
        }
        else {
          dVar19 = auVar51._8_8_ * dVar27 +
                   local_348._0_8_ * auVar51._0_8_ + dVar16 * dStack_350 + local_358 * dVar15;
          dVar31 = dVar19 * (double)(&DAT_149931160)[0.0 <= dVar19];
          dVar39 = 1.0 - (double)param_6;
          dVar19 = (double)(&DAT_149931160)[0.0 <= dVar19] * (double)param_6;
          if (dVar31 < 0.9999) {
            dVar33 = dVar31;
            if (1.0 <= dVar31) {
              dVar33 = 1.0;
            }
            dVar31 = acos((double)(-(ulonglong)(dVar31 < -1.0) & 0xbff0000000000000 |
                                  ~-(ulonglong)(dVar31 < -1.0) & (ulonglong)dVar33));
            dVar33 = sin(dVar31);
            dVar39 = sin(dVar39 * dVar31);
            dVar39 = dVar39 * (1.0 / dVar33);
            uVar41 = local_348._0_4_;
            uVar42 = local_348._4_4_;
            dVar19 = sin(dVar19 * dVar31);
            dVar19 = dVar19 * (1.0 / dVar33);
          }
          dVar31 = dVar39 * dVar27 + auVar51._8_8_ * dVar19;
          dVar27 = (double)CONCAT44(uVar42,uVar41) * dVar39 + auVar51._0_8_ * dVar19;
          dVar17 = dVar17 * dVar39 + dVar16 * dVar19;
          dVar33 = local_358 * dVar39 + dVar19 * dVar15;
          dVar15 = dVar27 * dVar27 + dVar33 * dVar33;
          dVar16 = dVar31 * dVar31 + dVar17 * dVar17;
          auVar25._0_8_ = dVar15 + dVar16;
          auVar25._8_8_ = dVar15 + dVar16;
          auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
          auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
          auVar34 = sqrtpd(auVar25,auVar25);
          auVar34 = divpd(_DAT_149934d80,auVar34);
          auVar28._0_8_ = auVar34._0_8_ * dVar27;
          auVar28._8_8_ = auVar34._8_8_ * dVar31;
          auVar51 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar28,auVar21);
          dVar19 = (double)local_338._0_8_;
          dVar39 = (double)local_338._8_8_;
          dVar15 = (double)((ulonglong)(dVar33 * auVar34._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_));
          dVar16 = (double)((ulonglong)(dVar17 * auVar34._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_));
        }
      }
      *param_2 = iVar2;
      *(double *)(param_2 + 4) = dVar15;
      *(double *)(param_2 + 6) = dVar16;
      *(undefined1 (*) [16])(param_2 + 8) = auVar51;
      *(double *)(param_2 + 0xc) = local_318;
      *(double *)(param_2 + 0xe) = dStack_310;
      *(double *)(param_2 + 0x10) = local_328;
      *(double *)(param_2 + 0x12) = dStack_320;
      *(undefined8 *)(param_2 + 0x14) = local_308._0_8_;
      *(undefined8 *)(param_2 + 0x16) = local_308._8_8_;
      auVar3._8_4_ = SUB84(dVar39,0);
      auVar3._0_8_ = dVar19;
      auVar3._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 0x18) = auVar3;
      goto LAB_1407dc846;
    }
  }
  *param_2 = -1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0x3ff00000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0x3ff00000;
  param_2[0x16] = 0;
  param_2[0x17] = 0x3ff00000;
  param_2[0x18] = 0;
  param_2[0x19] = 0x3ff00000;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
LAB_1407dc846:
  if ((local_f0 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1407dd074 FUN_1407dd074 body=552 status=ok
// SIG undefined FUN_1407dd074(void)

void FUN_1407dd074(double *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 *param_6)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  undefined1 auStack_118 [32];
  double *local_f8;
  double local_e8 [3];
  undefined1 local_d0 [24];
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar10 = *param_1;
  dVar1 = param_1[1];
  uVar8 = SUB84(dVar1,0);
  uVar9 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if ((((dVar10 != 0.0) || (NAN(dVar10))) || (dVar1 != 0.0)) || (NAN(dVar1))) {
    dVar1 = atan2(dVar1,dVar10);
    bVar2 = (float)dVar1 < 0.0;
    dVar10 = *param_1;
    uVar8 = SUB84(param_1[1],0);
    uVar9 = (undefined4)((ulonglong)param_1[1] >> 0x20);
  }
  else {
    bVar2 = false;
  }
  dVar10 = SQRT((double)CONCAT44(uVar9,uVar8) * (double)CONCAT44(uVar9,uVar8) + dVar10 * dVar10);
  dVar1 = param_1[2];
  if (((dVar1 != 0.0) || (NAN(dVar1))) || ((dVar10 != 0.0 || (NAN(dVar10))))) {
    dVar1 = atan2(dVar1,dVar10);
    bVar3 = (float)dVar1 < 0.0;
  }
  else {
    bVar3 = false;
  }
  FUN_1407dd29d(local_88,param_2,0);
  FUN_1407dd29d(local_a0,param_3,0);
  FUN_1407dd29d(local_b8,0,param_4);
  FUN_1407dd29d(local_d0,0,param_5);
  local_f8 = local_e8;
  if (bVar2) {
    if (bVar3) {
      puVar6 = local_b8;
      puVar7 = local_88;
    }
    else {
      puVar6 = local_88;
      puVar7 = local_d0;
    }
  }
  else if (bVar3) {
    puVar6 = local_a0;
    puVar7 = local_b8;
  }
  else {
    puVar6 = local_d0;
    puVar7 = local_a0;
  }
  cVar5 = FUN_144a319bd(puVar6,puVar7,param_1,&DAT_14c8462d8);
  if (cVar5 != '\0') {
    param_1 = local_e8;
  }
  *(double *)(param_6 + 4) = param_1[2];
  uVar8 = *(undefined4 *)((longlong)param_1 + 4);
  uVar9 = *(undefined4 *)(param_1 + 1);
  uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
  *param_6 = *(undefined4 *)param_1;
  param_6[1] = uVar8;
  param_6[2] = uVar9;
  param_6[3] = uVar4;
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407dd29d FUN_1407dd29d body=787 status=ok
// SIG undefined FUN_1407dd29d(void)

void FUN_1407dd29d(double *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_ac;
  
  param_2 = (float)(longlong)
                   (param_2 * 0.15915494 +
                   *(float *)(&DAT_14a184448 + (ulonglong)(param_2 < 0.0) * 4)) * -6.2831855 +
            param_2;
  if (1.5707964 < param_2) {
    fVar1 = 3.1415927;
LAB_1407dd57a:
    param_2 = fVar1 - param_2;
    fVar1 = -1.0;
  }
  else {
    if (param_2 < -1.5707964) {
      fVar1 = -3.1415927;
      goto LAB_1407dd57a;
    }
    fVar1 = 1.0;
  }
  param_3 = (float)(longlong)
                   (param_3 * 0.15915494 +
                   *(float *)(&DAT_14a184448 + (ulonglong)(param_3 < 0.0) * 4)) * -6.2831855 +
            param_3;
  if (1.5707964 < param_3) {
    fVar2 = 3.1415927;
  }
  else {
    if (-1.5707964 <= param_3) {
      local_ac = 1.0;
      goto LAB_1407dd3a7;
    }
    fVar2 = -3.1415927;
  }
  param_3 = fVar2 - param_3;
  local_ac = -1.0;
LAB_1407dd3a7:
  fVar3 = param_2 * param_2;
  fVar2 = param_3 * param_3;
  local_ac = (((((fVar2 * -2.6051615e-07 + 2.4760495e-05) * fVar2 + -0.0013888378) * fVar2 +
               0.041666638) * fVar2 + -0.5) * fVar2 + 1.0) * local_ac;
  *param_1 = (double)(local_ac *
                     fVar1 * (((((fVar3 * -2.6051615e-07 + 2.4760495e-05) * fVar3 + -0.0013888378) *
                                fVar3 + 0.041666638) * fVar3 + -0.5) * fVar3 + 1.0));
  param_1[1] = (double)((((((fVar3 * -2.3889859e-08 + 2.7525562e-06) * fVar3 + -0.00019840874) *
                           fVar3 + 0.008333331) * fVar3 + -0.16666667) * fVar3 + 1.0) * param_2 *
                       local_ac);
  param_1[2] = (double)((((((fVar2 * -2.3889859e-08 + 2.7525562e-06) * fVar2 + -0.00019840874) *
                           fVar2 + 0.008333331) * fVar2 + -0.16666667) * fVar2 + 1.0) * param_3);
  return;
}



// FUNCTION 1407dd5b0 FUN_1407dd5b0 body=199 status=ok
// SIG undefined FUN_1407dd5b0(void)

void FUN_1407dd5b0(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = *param_2;
  dVar4 = param_2[1];
  dVar5 = param_1[2];
  dVar6 = param_2[2];
  fVar7 = (float)(dVar5 * dVar6 + dVar1 * dVar3 + dVar2 * dVar4) /
          (float)(SQRT(dVar6 * dVar6 + dVar3 * dVar3 + dVar4 * dVar4) *
                 SQRT(dVar5 * dVar5 + dVar1 * dVar1 + dVar2 * dVar2));
  fVar8 = fVar7;
  if (1.0 <= fVar7) {
    fVar8 = 1.0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001407dd670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  acosf((float)(-(uint)(fVar7 < -1.0) & 0xbf800000 | ~-(uint)(fVar7 < -1.0) & (uint)fVar8));
  return;
}



// FUNCTION 1407dd678 FUN_1407dd678 body=46 status=ok
// SIG undefined FUN_1407dd678(void)

void FUN_1407dd678(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x398) != 0) {
    FUN_1407dd6e4(*(longlong *)(param_1 + 0x398),*(undefined4 *)(param_1 + 0x40c));
  }
  FUN_1407dd6a6(param_1);
  return;
}



// FUNCTION 1407dd6a6 FUN_1407dd6a6 body=62 status=ok
// SIG undefined FUN_1407dd6a6(void)

void FUN_1407dd6a6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
  }
  (**(code **)(**(longlong **)(lVar1 + 0x218) + 0x240))(*(longlong **)(lVar1 + 0x218),param_1);
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xfd;
  return;
}



// FUNCTION 1407dd6e4 FUN_1407dd6e4 body=1247 status=ok
// SIG undefined FUN_1407dd6e4(void)

void FUN_1407dd6e4(longlong param_1,float param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  float local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1407dd72d;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1407dd732;
      goto LAB_1407dd77a;
    }
  }
  else {
LAB_1407dd72d:
    if (iVar6 != 0x10) {
LAB_1407dd77a:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_1407dd732;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1407dd732;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_1407dd8e0;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14348442c);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_1407dd8e0:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x17);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x17);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_1407dd960;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_1407dd960:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a861b90;
        puVar16[0x15] = param_1;
        *(float *)(puVar16 + 0x16) = param_2;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_88 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14a861b50;
        local_78[0] = &LAB_143487e82;
        local_50 = param_1;
        local_48 = param_2;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateRadius",&DAT_14cad1e54);
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar13 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar13 = &local_58;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_1407dd816;
    }
  }
LAB_1407dd732:
  *(float *)(param_1 + 0x298) = param_2;
  fVar17 = 1e-05;
  if (1e-05 <= param_2) {
    fVar17 = param_2;
  }
  *(float *)(param_1 + 0x29c) = 1.0 / fVar17;
LAB_1407dd816:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ddbc4 FUN_1407ddbc4 body=268 status=ok
// SIG undefined FUN_1407ddbc4(void)

void FUN_1407ddbc4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != (longlong *)0x0) {
    puVar6 = (undefined8 *)FUN_1407ddcd2(param_1 + 0x348);
    puVar6[4] = *(undefined8 *)(*(longlong *)(*param_2 + 200) + (longlong)(int)param_2[1] * 8);
    lVar5 = param_2[1];
    lVar3 = *(longlong *)(*param_2 + 0x28);
    puVar6[2] = *(undefined8 *)(lVar3 + 0x10 + (longlong)(int)lVar5 * 0x18);
    puVar1 = (undefined8 *)(lVar3 + (longlong)(int)lVar5 * 0x18);
    uVar2 = puVar1[1];
    *puVar6 = *puVar1;
    puVar6[1] = uVar2;
    if (*(byte *)((longlong)param_2 + 0xc) < 2) {
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(*param_2 + 0x3b0) + (longlong)(int)param_2[1] * 8);
      uVar7 = (undefined4)uVar2;
      uVar8 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    puVar6[3] = CONCAT44(uVar8,uVar7);
    plVar4 = *(longlong **)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
    if ((plVar4 != (longlong *)0x0) && (*(char *)((longlong)plVar4 + 0x1a) == '\x01')) {
      (**(code **)(*plVar4 + 0x80))(plVar4,&local_58);
      puVar6[7] = local_48;
      puVar6[5] = local_58;
      puVar6[6] = uStack_50;
      *(undefined4 *)(puVar6 + 8) = local_40;
      *(undefined4 *)((longlong)puVar6 + 0x44) = uStack_3c;
      *(undefined4 *)(puVar6 + 9) = uStack_38;
      *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_34;
      puVar6[10] = local_30;
    }
    FUN_14016e00e(param_1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ddcd2 FUN_1407ddcd2 body=66 status=ok
// SIG undefined FUN_1407ddcd2(void)

longlong FUN_1407ddcd2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145747b24(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x58 + *param_1;
  FUN_1407ddd14(lVar2,1);
  return lVar2;
}



// FUNCTION 1407ddd14 FUN_1407ddd14 body=18 status=ok
// SIG undefined FUN_1407ddd14(void)

void FUN_1407ddd14(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x58);
    return;
  }
  return;
}



// FUNCTION 1407ddd26 FUN_1407ddd26 body=104 status=ok
// SIG undefined FUN_1407ddd26(void)

void FUN_1407ddd26(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x58);
    do {
      FUN_1407ddd8e(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong **)(puVar1 + -0xc) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(puVar1 + -0xc) + 0x10))();
      }
      if (*(longlong **)(puVar1 + -0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(puVar1 + -0x10) + 0x10))();
      }
      if (*(longlong **)(puVar1 + -0x14) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(puVar1 + -0x14) + 0x10))();
      }
      puVar1 = puVar1 + 0x1c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1407ddd8e FUN_1407ddd8e body=156 status=ok
// SIG undefined FUN_1407ddd8e(void)

void FUN_1407ddd8e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x68);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      FUN_1407dde2a(plVar1[-4],(int)plVar1[-3]);
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      FUN_1407dde2a(plVar1[-6],(int)plVar1[-5]);
      if (plVar1[-6] != 0) {
        FUN_1400020a8();
      }
      if ((longlong *)plVar1[-9] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-9] + 0x10))();
      }
      if (plVar1[-0xb] != 0) {
        FUN_1400020a8();
      }
      if ((longlong *)plVar1[-0xd] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-0xd] + 0x10))();
      }
      plVar1 = plVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1407dde2a FUN_1407dde2a body=41 status=ok
// SIG undefined FUN_1407dde2a(void)

void FUN_1407dde2a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1407dde54(param_1);
    param_1 = param_1 + 0xd8;
  }
  return;
}



// FUNCTION 1407dde54 FUN_1407dde54 body=197 status=ok
// SIG undefined FUN_1407dde54(void)

void FUN_1407dde54(longlong *param_1)

{
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x14] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x14] + 0x10))();
  }
  if ((longlong *)param_1[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x10))();
  }
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x10))();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x10))();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
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



// FUNCTION 1407ddf1a FUN_1407ddf1a body=1397 status=ok
// SIG undefined FUN_1407ddf1a(void)

void FUN_1407ddf1a(longlong param_1,longlong *param_2,int *param_3,byte *param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_188 [36];
  int local_164;
  ulonglong *local_160;
  undefined8 local_154;
  uint local_14c;
  ulonglong *local_148;
  int local_140;
  int local_134;
  undefined8 *local_130;
  ulonglong **local_128;
  undefined1 local_11c [4];
  ulonglong local_118 [2];
  undefined1 local_108;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_164 = *param_3;
  local_134 = 0;
  puVar9 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar9 + 1;
  if ((int *)puVar9[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_134,4);
    }
    else {
      FUN_14572512c(param_2,&local_134);
    }
  }
  else {
    local_134 = *(int *)*puVar9;
    *puVar9 = (ulonglong)piVar1;
  }
  iVar7 = local_134;
  uVar13 = (ulonglong)local_134;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar13;
  uVar8 = SUB168(auVar5 * ZEXT816(0x70),0);
  uVar12 = 0xffffffffffffffff;
  if (SUB168(auVar5 * ZEXT816(0x70),8) == 0) {
    uVar12 = uVar8 | 8;
  }
  puVar9 = (ulonglong *)FUN_144a7d36f(uVar12);
  *puVar9 = uVar13;
  puVar9 = puVar9 + 1;
  if (iVar7 != 0) {
    puVar11 = puVar9;
    do {
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[2] = 0;
      puVar11[3] = 0;
      *puVar11 = 0;
      puVar11[1] = 0;
      *(undefined4 *)(puVar11 + 6) = 0xffffffff;
      puVar11[0xc] = 0;
      puVar11[0xd] = 0x200000000;
      *(undefined8 *)((longlong)puVar11 + 0x34) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x3c) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x44) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x4c) = 0;
      *(undefined4 *)((longlong)puVar11 + 0x54) = 0;
      puVar11 = puVar11 + 0xe;
    } while (puVar11 != puVar9 + uVar13 * 0xe);
  }
  iVar4 = *(int *)(param_1 + 0x238);
  *(uint *)(param_1 + 0x238) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x23c) < iVar4 + 1U) {
    FUN_1407de694((longlong *)(param_1 + 0x230),iVar4);
  }
  *(ulonglong **)(*(longlong *)(param_1 + 0x230) + (longlong)iVar4 * 8) = puVar9;
  if (local_164 == 0x13) {
    puVar11 = puVar9;
    if (iVar7 != 0) {
      do {
        FUN_1407de492(puVar11,param_2,&LAB_140208388);
        uVar8 = uVar8 - 0x70;
        puVar11 = puVar11 + 0xe;
      } while (uVar8 != 0);
    }
  }
  else {
    puVar11 = puVar9;
    if (iVar7 != 0) {
      do {
        FUN_1407de7f6(puVar11,param_2,local_164,&LAB_14621885e);
        uVar8 = uVar8 - 0x70;
        puVar11 = puVar11 + 0xe;
      } while (uVar8 != 0);
    }
  }
  local_148 = puVar9;
  local_140 = iVar7;
  FUN_1407dea4a(param_1,&local_148,param_4);
  if (local_164 < 7) {
    FUN_14701236e(param_1,param_2,*param_4,local_164);
  }
  else {
    FUN_1408383eb(param_2,local_118);
    lVar10 = (**(code **)(*param_2 + 0x28))(param_2);
    lVar10 = lVar10 + local_118[0];
    bVar6 = *param_4;
    if (bVar6 == 1) {
      FUN_145747c0e(param_1,param_2);
      bVar6 = *param_4;
    }
    if (((bVar6 & 1) == 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) {
      (**(code **)(*param_2 + 0x1a0))(param_2,lVar10);
    }
  }
  local_14c = 0;
  puVar9 = (ulonglong *)param_2[1];
  puVar2 = (uint *)*puVar9 + 1;
  if ((uint *)puVar9[1] < puVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_14c,4);
    }
    else {
      FUN_14572512c(param_2,&local_14c);
    }
  }
  else {
    local_14c = *(uint *)*puVar9;
    *puVar9 = (ulonglong)puVar2;
  }
  uVar14 = local_14c;
  if (0 < (int)local_14c) {
    local_d0 = 0;
    local_c8 = 0;
    local_118[0] = 0;
    local_118[1] = 0;
    local_108 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_c4 = 0xffffffff00000080;
    local_bc = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0xffffffff;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_64 = 0;
    puVar9 = (ulonglong *)0x0;
    if (param_4[1] == 1) {
      uVar12 = (ulonglong)local_14c;
      puVar11 = (ulonglong *)FUN_144a7d36f();
      *puVar11 = uVar12;
      puVar9 = puVar11 + 1;
      lVar10 = 0;
      do {
        *(undefined8 *)((longlong)puVar11 + lVar10 + 0x50) = 0;
        *(undefined4 *)((longlong)puVar11 + lVar10 + 0x58) = 0;
        puVar3 = (undefined8 *)((longlong)puVar11 + lVar10 + 8);
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined1 *)((longlong)puVar11 + lVar10 + 0x18) = 0;
        puVar3 = (undefined8 *)((longlong)puVar11 + lVar10 + 0x30);
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined8 *)((longlong)puVar11 + lVar10 + 0x5c) = 0xffffffff00000080;
        *(undefined4 *)((longlong)puVar11 + lVar10 + 100) = 0;
        *(undefined8 *)((longlong)puVar11 + lVar10 + 0x70) = 0;
        *(undefined4 *)((longlong)puVar11 + lVar10 + 0x78) = 0;
        puVar3 = (undefined8 *)((longlong)puVar11 + lVar10 + 0x80);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = (undefined8 *)((longlong)puVar11 + lVar10 + 0x90);
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined4 *)((longlong)puVar11 + lVar10 + 0xa0) = 0xffffffff;
        *(undefined8 *)((longlong)puVar11 + lVar10 + 0xa8) = 0;
        *(undefined4 *)((longlong)puVar11 + lVar10 + 0xb0) = 0;
        *(undefined4 *)((longlong)puVar11 + lVar10 + 0xb8) = 0;
        *(undefined1 *)((longlong)puVar11 + lVar10 + 0xbc) = 0;
        lVar10 = lVar10 + 0xb8;
      } while (uVar12 * 0xb8 - lVar10 != 0);
      iVar7 = *(int *)(param_1 + 600);
      *(uint *)(param_1 + 600) = iVar7 + 1U;
      if (*(uint *)(param_1 + 0x25c) < iVar7 + 1U) {
        FUN_14701e46c(param_1 + 0x250,iVar7);
        uVar14 = local_14c;
      }
      *(ulonglong **)(*(longlong *)(param_1 + 0x250) + (longlong)iVar7 * 8) = puVar9;
      if ((uint)(*(int *)(param_1 + 0x1e8) - *(int *)(param_1 + 0x214)) < uVar14) {
        if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b((longlong)(int)uVar14);
        }
        FUN_14701e4f2(param_1 + 0x1e0,uVar14);
        iVar7 = 1;
        if (3 < uVar14) {
          uVar14 = (uVar14 | 1) + 0xe;
          iVar7 = 0x1f;
          if (uVar14 != 0) {
            for (; uVar14 >> iVar7 == 0; iVar7 = iVar7 + -1) {
            }
          }
          iVar7 = 1 << ((byte)iVar7 & 0x1f);
        }
        if ((*(int *)(param_1 + 0x228) == 0) || (*(int *)(param_1 + 0x228) < iVar7)) {
          *(int *)(param_1 + 0x228) = iVar7;
          FUN_14701b4b2(param_1 + 0x1e0);
        }
      }
    }
    if (0 < (int)local_14c) {
      lVar10 = 0;
      do {
        local_154 = 0;
        (**(code **)(*param_2 + 0x160))(param_2,&local_154);
        local_160 = local_118;
        if (param_4[1] == 1) {
          local_128 = &local_160;
          local_160 = puVar9;
          local_130 = &local_154;
          FUN_14701e68e(param_1 + 0x1e0,local_11c,&local_130);
        }
        if (local_164 < 0x13) {
          FUN_1468585a8(local_160,param_2,local_164);
        }
        else {
          FUN_1468583ba(local_160,param_2);
        }
        lVar10 = lVar10 + 1;
        puVar9 = puVar9 + 0x17;
      } while (lVar10 < (int)local_14c);
    }
    FUN_146ffe382(local_118);
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407de492 FUN_1407de492 body=513 status=ok
// SIG undefined FUN_1407de492(void)

void FUN_1407de492(longlong param_1,longlong *param_2,code *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  void *_Src;
  undefined4 *puVar6;
  longlong lVar7;
  undefined1 *_Dst;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined1 local_58 [8];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 8);
  plVar5 = (longlong *)(**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x20);
  (**(code **)(*plVar5 + 0x160))(plVar5,param_1 + 0x28);
  (**(code **)(*param_2 + 0x160))(param_2,param_1);
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x10);
  (*param_3)(param_2,param_1,0x13);
  FUN_142791dd5(param_2,param_1 + 0x34);
  local_50 = (undefined1 *)0x0;
  local_48 = 0x200000000;
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    FUN_140204d2c(param_2,local_58);
    FUN_1406ddf8c(&DAT_14c927a10,&local_5c,local_58);
    *(undefined4 *)(param_1 + 0x30) = local_5c;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar1 == -1) {
      FUN_140204e64(local_58,0,2);
    }
    else {
      AcquireSRWLockShared((PSRWLOCK)&DAT_14c927a60);
      lVar4 = DAT_14c927a10;
      lVar7 = (longlong)iVar1 * 0x20;
      pvVar2 = *(void **)(DAT_14c927a10 + 8 + lVar7);
      iVar1 = *(int *)(DAT_14c927a10 + 0x10 + lVar7);
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c927a60);
      local_48 = CONCAT44(local_48._4_4_,iVar1);
      FUN_140204e64(local_58,iVar1,2);
      if ((longlong)iVar1 != 0) {
        _Src = (void *)(lVar4 + lVar7);
        if (pvVar2 != (void *)0x0) {
          _Src = pvVar2;
        }
        _Dst = local_58;
        if (local_50 != (undefined1 *)0x0) {
          _Dst = local_50;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 2);
      }
    }
    FUN_140204d2c(param_2,local_58);
  }
  puVar6 = (undefined4 *)(param_1 + 0x3c);
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,puVar6,4);
    }
    else {
      FUN_14572512c(param_2,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407de694 FUN_1407de694 body=353 status=ok
// SIG undefined FUN_1407de694(void)

void FUN_1407de694(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407de719;
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
LAB_1407de719:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1407de7f6 FUN_1407de7f6 body=595 status=ok
// SIG undefined FUN_1407de7f6(void)

void FUN_1407de7f6(longlong param_1,longlong *param_2,int param_3,code *param_4)

{
  void *pvVar1;
  longlong *plVar2;
  void *_Src;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  if (param_3 < 0x10) {
    (**(code **)(*param_2 + 0x160))(param_2,&local_58);
  }
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 8);
  if (param_3 < 0xf) {
    (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x18);
    FUN_1427b15c2(&local_50,*(undefined8 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x20) = local_50;
    *(undefined4 *)(param_1 + 0x24) = uStack_4c;
    *(undefined4 *)(param_1 + 0x28) = (undefined4)uStack_48;
    *(undefined4 *)(param_1 + 0x2c) = uStack_48._4_4_;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x20);
    (**(code **)(*plVar2 + 0x160))(plVar2,param_1 + 0x28);
  }
  (**(code **)(*param_2 + 0x160))(param_2,param_1);
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x10);
  (*param_4)(param_2,param_1,param_3);
  FUN_142791dd5(param_2,param_1 + 0x34);
  uStack_48 = (undefined4 *)0x0;
  local_40 = 0x200000000;
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    FUN_140204d2c(param_2,&local_50);
    FUN_1406ddf8c(&DAT_14c927a10,&local_5c,&local_50);
    *(undefined4 *)(param_1 + 0x30) = local_5c;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar5 == -1) {
      iVar5 = 0;
      iVar4 = 2;
      _Src = (void *)0x0;
    }
    else {
      AcquireSRWLockShared((PSRWLOCK)&DAT_14c927a60);
      lVar6 = (longlong)iVar5 * 0x20;
      pvVar1 = *(void **)(DAT_14c927a10 + 8 + lVar6);
      _Src = (void *)(DAT_14c927a10 + lVar6);
      if (pvVar1 != (void *)0x0) {
        _Src = pvVar1;
      }
      iVar5 = *(int *)(DAT_14c927a10 + 0x10 + lVar6);
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c927a60);
      iVar4 = local_40._4_4_;
    }
    local_40 = CONCAT44(local_40._4_4_,iVar5);
    if (iVar5 == 0 && iVar4 == 0) {
      local_40 = CONCAT44(2,iVar5);
    }
    else {
      FUN_140204e64(&local_50,iVar5);
      if (iVar5 != 0) {
        puVar7 = &local_50;
        if (uStack_48 != (undefined4 *)0x0) {
          puVar7 = uStack_48;
        }
        memcpy(puVar7,_Src,(longlong)iVar5 << 2);
      }
    }
    FUN_140204d2c(param_2,&local_50);
  }
  puVar3 = (undefined4 *)(param_1 + 0x3c);
  puVar7 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,puVar3,4);
    }
    else {
      FUN_14572512c(param_2,puVar3);
    }
  }
  else {
    *puVar3 = *puVar7;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if (uStack_48 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407dea4a FUN_1407dea4a body=2827 status=ok
// SIG undefined FUN_1407dea4a(void)

void FUN_1407dea4a(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  longlong *plVar10;
  uint uVar11;
  undefined ***pppuVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  code *pcVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined1 auStack_188 [32];
  longlong *local_168;
  longlong *local_160;
  longlong local_158;
  longlong *local_150;
  longlong local_148;
  longlong *local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  longlong *plStack_120;
  undefined1 local_118;
  undefined1 local_109;
  longlong local_108;
  longlong *local_f8;
  longlong local_e8 [4];
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong *plStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(int *)(param_1 + 0x260) != 0) {
    FUN_140033559(".\\Runtime/AssetRegistry/Private/AssetRegistryState.cpp",0x969,
                  L"Can only load into empty asset registry states. Load into temporary and append using InitializeFromExisting() instead."
                 );
  }
  *(int *)(param_1 + 0x260) = (int)param_2[1];
  local_158 = param_1;
  local_150 = param_2;
  local_148 = param_1;
  local_140 = param_2;
  local_138 = param_1;
  local_130 = param_2;
  if (1 < *(int *)(param_3 + 4)) {
    local_c8 = 0;
    local_b8 = (longlong *)0x0;
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_149fcb9b0;
    plStack_60 = &local_138;
    local_88[0] = FUN_142aeaa48;
    FUN_14170b918(&local_128);
    plVar6 = plStack_120;
    lVar16 = local_128;
    local_118 = 1;
    if (plStack_120 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
      UNLOCK();
    }
    puVar14 = (undefined8 *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x308);
    puVar9 = (uint *)*puVar14;
    if (puVar9 != (uint *)0x0) goto LAB_1407ded68;
    do {
      uVar11 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar11 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar11 | 1;
        __tlregdtor(&LAB_142aeab07);
      }
      lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar7 = *(undefined4 **)(lVar17 + 0x310);
      *(undefined8 *)(lVar17 + 0x310) = 0;
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar7 = 0xffffffff;
      *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
      puVar7[0x12] = 0;
      *puVar14 = puVar7;
      FUN_140217a48(puVar14);
      puVar9 = (uint *)*puVar14;
LAB_1407ded68:
      uVar19 = *(longlong *)(puVar9 + 0x10) + 0xf;
      uVar11 = puVar9[0x12];
      while( true ) {
        puVar20 = (undefined8 *)(uVar19 & 0xfffffffffffffff0);
        if (puVar20 + 0x22 <= puVar9 + 0x4000) {
          *(undefined8 **)(puVar9 + 0x10) = puVar20 + 0x22;
          puVar9[0x12] = uVar11 + 1;
          FUN_1447247dc(puVar20,0);
          *puVar20 = TGraphTask<TAsyncGraphTask<void>_>::vftable;
          puVar20[0x16] = local_88[0];
          puVar20[0x18] = local_78;
          local_78 = (undefined ***)0x0;
          *(undefined4 *)(puVar20 + 0x1c) = local_58;
          *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_54;
          *(undefined4 *)(puVar20 + 0x1d) = uStack_50;
          *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_4c;
          puVar20[0x1a] = local_68;
          puVar20[0x1b] = plStack_60;
          if (local_88[0] != (code *)0x0) {
            local_88[0] = (code *)0x0;
          }
          puVar20[0x1e] = local_128;
          puVar20[0x1f] = plStack_120;
          local_128 = 0;
          plStack_120 = (longlong *)0x0;
          *(undefined1 *)(puVar20 + 0x20) = 0;
          *(undefined4 *)(puVar20 + 0x21) = 0xff;
          if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
          }
          puVar20[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar20[9] = puVar20;
          puVar20[10] = puVar20;
          lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          lVar5 = *(longlong *)(lVar17 + 0x2b8);
          local_160 = plVar6;
          if (lVar5 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined8 *)(lVar5 + 0x30);
          }
          puVar20[0xf] = uVar8;
          puVar20[0x10] = 0xc80000527800b400;
          *(undefined4 *)((longlong)puVar20 + 0x1c) = 0;
          if (puVar20 == (undefined8 *)0x0) {
            local_109 = 1;
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
            UNLOCK();
            local_109 = 1;
            FUN_1447439e4(puVar20);
            LOCK();
            piVar1 = (int *)(puVar20 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar20)(puVar20,1);
            }
          }
          plVar6 = plStack_120;
          if (plStack_120 != (longlong *)0x0) {
            LOCK();
            plVar10 = plStack_120 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*plStack_120)(plStack_120);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          if (local_88[0] != (code *)0x0) {
            pppuVar12 = local_78;
            if (local_78 == (undefined ***)0x0) {
              pppuVar12 = &local_68;
            }
            (*(code *)(*pppuVar12)[2])();
          }
          if (local_c8 != 0) {
            plVar6 = local_b8;
            if (local_b8 == (longlong *)0x0) {
              plVar6 = local_a8;
            }
            (**(code **)(*plVar6 + 0x10))();
          }
          local_108 = 0;
          local_f8 = (longlong *)0x0;
          local_78 = (undefined ***)0x0;
          local_68 = &PTR_LAB_149fcb9d0;
          plStack_60 = &local_148;
          local_88[0] = FUN_142aeab2e;
          FUN_14170b918(&local_128);
          plVar6 = plStack_120;
          lVar5 = local_128;
          local_118 = 1;
          if (plStack_120 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
            UNLOCK();
          }
          local_168 = (longlong *)(lVar17 + 0x2b8);
          puVar9 = (uint *)*puVar14;
          if (puVar9 != (uint *)0x0) goto LAB_1407df114;
          goto LAB_1407df094;
        }
        *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
        LOCK();
        uVar15 = *puVar9;
        *puVar9 = *puVar9 + uVar11 + 1;
        UNLOCK();
        if ((uVar15 ^ uVar11) != 0xffffffff) break;
        puVar9 = (uint *)*puVar14;
        *puVar9 = 0xffffffff;
        *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar14 = puVar9;
        uVar19 = (longlong)puVar9 + 0x67;
        uVar11 = 0;
      }
    } while( true );
  }
  FUN_145b089da(param_1);
  uVar13 = 0;
  lVar16 = param_1;
  plVar6 = param_2;
  if ((longlong)(int)param_2[1] != 0) {
    pcVar18 = (code *)*param_2;
    lVar16 = (longlong)(int)param_2[1] * 0x70;
    do {
      local_88[0] = pcVar18;
      FUN_1402ba776(param_1,&local_128,local_88);
      pcVar18 = pcVar18 + 0x70;
      lVar16 = lVar16 + -0x70;
    } while (lVar16 != 0);
    uVar13 = (undefined4)local_140[1];
    lVar16 = local_148;
    plVar6 = local_140;
  }
  FUN_1459b85fe(lVar16 + 0x50,uVar13);
  if ((longlong)(int)plVar6[1] != 0) {
    puVar14 = (undefined8 *)*plVar6;
    lVar17 = (longlong)(int)plVar6[1] * 0x70;
    do {
      uVar8 = *puVar14;
      uVar11 = (uint)((ulonglong)uVar8 >> 0x10);
      uVar15 = (uint)uVar8 & 0xffff;
      lVar5 = FUN_141734d66(lVar16 + 0x50,
                            ((uint)uVar8 << 0x10 | uVar15) + (int)((ulonglong)uVar8 >> 0x20) +
                            (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar15 >> 4),puVar14);
      iVar2 = *(int *)(lVar5 + 0x10);
      *(uint *)(lVar5 + 0x10) = iVar2 + 1U;
      if (*(uint *)(lVar5 + 0x14) < iVar2 + 1U) {
        FUN_140899908(lVar5,iVar2);
      }
      if (*(longlong *)(lVar5 + 8) != 0) {
        lVar5 = *(longlong *)(lVar5 + 8);
      }
      *(undefined8 **)(lVar5 + (longlong)iVar2 * 8) = puVar14;
      puVar14 = puVar14 + 0xe;
      lVar17 = lVar17 + -0x70;
    } while (lVar17 != 0);
  }
  param_1 = param_1 + 0xa0;
  FUN_145acf632(param_1);
  if ((longlong)(int)param_2[1] != 0) {
    lVar16 = (longlong)(int)param_2[1] * 0x70;
    puVar14 = (undefined8 *)(*param_2 + 8);
    do {
      uVar8 = *puVar14;
      uVar11 = (uint)((ulonglong)uVar8 >> 0x10);
      uVar15 = (uint)uVar8 & 0xffff;
      plVar6 = (longlong *)
               FUN_1417351be(param_1,((uint)uVar8 << 0x10 | uVar15) +
                                     (int)((ulonglong)uVar8 >> 0x20) +
                                     (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar15 >> 4),puVar14);
      iVar2 = (int)plVar6[1];
      *(uint *)(plVar6 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar6 + 0xc) < iVar2 + 1U) {
        FUN_1407de694(plVar6,iVar2);
      }
      *(undefined8 **)(*plVar6 + (longlong)iVar2 * 8) = puVar14 + -1;
      puVar14 = puVar14 + 0xe;
      lVar16 = lVar16 + -0x70;
    } while (lVar16 != 0);
  }
  FUN_140944aed(param_1);
  FUN_142ae3d1a(&local_158);
LAB_1407df4b0:
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1407df094:
  uVar11 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x318);
  if ((uVar11 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
             ) = uVar11 | 1;
    __tlregdtor(&LAB_142aeab07);
  }
  lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar7 = *(undefined4 **)(lVar17 + 0x310);
  *(undefined8 *)(lVar17 + 0x310) = 0;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = _aligned_malloc(0x10000,0x10000);
  }
  *puVar7 = 0xffffffff;
  *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
  puVar7[0x12] = 0;
  *puVar14 = puVar7;
  FUN_140217a48(puVar14);
  puVar9 = (uint *)*puVar14;
LAB_1407df114:
  uVar19 = *(longlong *)(puVar9 + 0x10) + 0xf;
  uVar11 = puVar9[0x12];
  while( true ) {
    puVar20 = (undefined8 *)(uVar19 & 0xfffffffffffffff0);
    if (puVar20 + 0x22 <= puVar9 + 0x4000) {
      *(undefined8 **)(puVar9 + 0x10) = puVar20 + 0x22;
      puVar9[0x12] = uVar11 + 1;
      FUN_1447247dc(puVar20,0);
      *puVar20 = TGraphTask<TAsyncGraphTask<void>_>::vftable;
      puVar20[0x16] = local_88[0];
      puVar20[0x18] = local_78;
      local_78 = (undefined ***)0x0;
      *(undefined4 *)(puVar20 + 0x1c) = local_58;
      *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_54;
      *(undefined4 *)(puVar20 + 0x1d) = uStack_50;
      *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_4c;
      puVar20[0x1a] = local_68;
      puVar20[0x1b] = plStack_60;
      if (local_88[0] != (code *)0x0) {
        local_88[0] = (code *)0x0;
      }
      puVar20[0x1e] = local_128;
      puVar20[0x1f] = plStack_120;
      local_128 = 0;
      plStack_120 = (longlong *)0x0;
      *(undefined1 *)(puVar20 + 0x20) = 0;
      *(undefined4 *)(puVar20 + 0x21) = 0xff;
      if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
      }
      puVar20[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar20[9] = puVar20;
      puVar20[10] = puVar20;
      if (*local_168 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(*local_168 + 0x30);
      }
      puVar20[0xf] = uVar8;
      puVar20[0x10] = 0xc80000527800b400;
      *(undefined4 *)((longlong)puVar20 + 0x1c) = 0;
      if (puVar20 == (undefined8 *)0x0) {
        local_109 = 1;
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
        UNLOCK();
        local_109 = 1;
        FUN_1447439e4(puVar20);
        LOCK();
        piVar1 = (int *)(puVar20 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar20)(puVar20,1);
        }
      }
      plVar10 = plStack_120;
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_120 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_120)(plStack_120);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      if (local_88[0] != (code *)0x0) {
        pppuVar12 = &local_68;
        if (local_78 != (undefined ***)0x0) {
          pppuVar12 = local_78;
        }
        (*(code *)(*pppuVar12)[2])();
      }
      if (local_108 != 0) {
        plVar10 = local_f8;
        if (local_f8 == (longlong *)0x0) {
          plVar10 = local_e8;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      param_1 = param_1 + 0xa0;
      FUN_145acf632(param_1);
      if ((longlong)(int)param_2[1] != 0) {
        lVar17 = (longlong)(int)param_2[1] * 0x70;
        puVar14 = (undefined8 *)(*param_2 + 8);
        do {
          uVar8 = *puVar14;
          uVar11 = (uint)((ulonglong)uVar8 >> 0x10);
          uVar15 = (uint)uVar8 & 0xffff;
          plVar10 = (longlong *)
                    FUN_1417351be(param_1,((uint)uVar8 << 0x10 | uVar15) +
                                          (int)((ulonglong)uVar8 >> 0x20) +
                                          (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar15 >> 4),puVar14
                                 );
          iVar2 = (int)plVar10[1];
          *(uint *)(plVar10 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)plVar10 + 0xc) < iVar2 + 1U) {
            FUN_1407de694(plVar10,iVar2);
          }
          *(undefined8 **)(*plVar10 + (longlong)iVar2 * 8) = puVar14 + -1;
          puVar14 = puVar14 + 0xe;
          lVar17 = lVar17 + -0x70;
        } while (lVar17 != 0);
      }
      FUN_140944aed(param_1);
      FUN_142ae3d1a(&local_158);
      if (lVar16 != 0) {
        do {
          plVar10 = *(longlong **)(lVar16 + 0x70);
          cVar4 = (**(code **)(*plVar10 + 0x20))(plVar10,0xffffffff,0);
        } while (cVar4 == '\0');
      }
      plVar10 = local_160;
      if (lVar5 != 0) {
        do {
          plVar3 = *(longlong **)(lVar5 + 0x70);
          cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
        } while (cVar4 == '\0');
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar6 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar10 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      goto LAB_1407df4b0;
    }
    *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
    LOCK();
    uVar15 = *puVar9;
    *puVar9 = *puVar9 + uVar11 + 1;
    UNLOCK();
    if ((uVar15 ^ uVar11) != 0xffffffff) break;
    puVar9 = (uint *)*puVar14;
    *puVar9 = 0xffffffff;
    *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
    puVar9[0x12] = 0;
    *puVar14 = puVar9;
    uVar19 = (longlong)puVar9 + 0x67;
    uVar11 = 0;
  }
  goto LAB_1407df094;
}



// FUNCTION 1407df556 FUN_1407df556 body=539 status=ok
// SIG undefined FUN_1407df556(void)

float FUN_1407df556(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  
  iVar2 = *(int *)(param_1 + 0x48);
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar15 = 0;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x30);
    }
    uVar14 = *puVar6;
    if (uVar14 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar13 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar13 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar13 == uVar15) {
          return 1.0;
        }
        iVar10 = iVar10 + 0x20;
        uVar14 = puVar6[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 == iVar2) {
    fVar17 = 1.0;
  }
  else {
    uVar14 = 0xffffffff;
    fVar17 = 1.0;
    do {
      lVar11 = *(longlong *)(param_1 + 0x20);
      cVar4 = FUN_1407df772(param_2,lVar11 + (longlong)iVar5 * 0x14);
      if (cVar4 == '\0') {
        fVar16 = 1.0;
      }
      else {
        fVar16 = *(float *)(lVar11 + 8 + (longlong)iVar5 * 0x14);
      }
      fVar17 = fVar17 * fVar16;
      if ((fVar17 == 0.0) && (!NAN(fVar17))) {
        return fVar17;
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar6 = *(uint **)(param_1 + 0x40);
      if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x30);
      }
      iVar3 = *(int *)(param_1 + 0x48);
      iVar5 = (int)uVar15;
      lVar11 = (longlong)iVar5;
      uVar9 = puVar6[lVar11] & uVar14;
      if (uVar9 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar12 = 0;
          do {
            uVar9 = puVar6[lVar11 + lVar12 + 1];
            if (uVar9 != 0) {
              uVar15 = (ulonglong)(iVar5 + (int)lVar12 + 1);
              uVar14 = 0xffffffff;
              goto LAB_1407df6ce;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar14 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar15 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_1407df6ce:
        uVar13 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
  return fVar17;
}



// FUNCTION 1407df772 FUN_1407df772 body=144 status=ok
// SIG undefined FUN_1407df772(void)

undefined2 FUN_1407df772(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    cVar2 = FUN_1407a7474(*(longlong *)(param_1 + 8),&local_18,param_2);
    if ((((cVar2 != '\0') && (*(longlong *)(param_1 + 8) != 0)) && (local_18 != 0)) &&
       (*(longlong *)(param_1 + 8) == *(longlong *)(local_18 + 0x10))) {
      uVar1 = *(ushort *)(local_18 + 8);
      if ((int)(uint)(uVar1 >> 6) < *(int *)(param_1 + 0x18)) {
        uVar3 = CONCAT11((char)(uVar1 >> 8),
                         (*(ulonglong *)
                           (*(longlong *)(param_1 + 0x10) + (ulonglong)(uint)(uVar1 >> 6) * 8) >>
                          ((ulonglong)uVar1 & 0x3f) & 1) != 0);
        goto LAB_1407df7e2;
      }
    }
  }
  uVar3 = 0;
LAB_1407df7e2:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407df804 FUN_1407df804 body=79 status=ok
// SIG undefined FUN_1407df804(void)

void FUN_1407df804(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (-1 < (longlong)param_2) {
    uVar1 = (uint)(param_2 >> 0x20);
    if ((int)uVar1 < *(int *)(param_1 + 0x80)) {
      lVar2 = param_1 + 0x68;
      if (*(longlong *)(param_1 + 0x78) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x78);
      }
      if ((*(uint *)(lVar2 + (param_2 >> 0x25) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
        FUN_1407df854(*(longlong *)(param_1 + 0x58) + (param_2 >> 0x20) * 0x68 + 0x28,param_2,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1407df854 FUN_1407df854 body=89 status=ok
// SIG undefined FUN_1407df854(void)

void FUN_1407df854(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + (longlong)param_2 * 0x28 + 0x10);
    iVar1 = param_3;
    do {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 5;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_1407df8ae(param_1,param_2,param_3);
  return;
}



// FUNCTION 1407df8ae FUN_1407df8ae body=138 status=ok
// SIG undefined FUN_1407df8ae(void)

void FUN_1407df8ae(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1407df938 FUN_1407df938 body=457 status=ok
// SIG undefined FUN_1407df938(void)

void FUN_1407df938(longlong *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,0xffffffff,0);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f280) && (FUN_144b3d300(&DAT_14c83f280), DAT_14c83f280 == -1)) {
      DAT_14c83f200 = 0;
      DAT_14c83f240 = &DAT_14c83f200;
      atexit(FUN_14275e407);
      _Init_thread_footer(&DAT_14c83f280);
    }
    puVar4 = DAT_14c83f240;
    param_1 = (longlong *)*param_1;
    (**(code **)(*param_1 + 0x18))();
    uVar5 = FUN_14493c560();
    if (uVar5 == 0) {
      uVar6 = 0;
      uVar9 = 0;
      lVar8 = 0;
    }
    else {
      uVar9 = (ulonglong)(uVar5 >> 0xe);
      uVar6 = uVar5 & 0x3fff;
      lVar8 = (ulonglong)(uVar6 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar9 * 8);
    }
    *(longlong **)(lVar8 + 8) = param_1;
    do {
      uVar3 = *puVar4;
      uVar7 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
      if (uVar7 >> 0x1a < uVar3 >> 0x1a) {
        FUN_14000f986(0x3a83126f);
      }
      if (uVar5 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(longlong *)(&DAT_14c833b00 + uVar9 * 8) + (ulonglong)(uVar6 * 0x18);
      }
      *(uint *)(lVar8 + 0x10) = (uint)uVar3 & 0x3ffffff;
      LOCK();
      uVar1 = *puVar4;
      if (uVar3 == uVar1) {
        *puVar4 = uVar7 | uVar5;
      }
      UNLOCK();
    } while (uVar3 != uVar1);
  }
  return;
}



// FUNCTION 1407dfb30 FUN_1407dfb30 body=115 status=ok
// SIG undefined FUN_1407dfb30(void)

undefined8 * FUN_1407dfb30(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a7b8e20;
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1407dfb58;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1407dfb58:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


