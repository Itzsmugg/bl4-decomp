// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1460d5046 FUN_1460d5046 body=532 status=ok
// SIG undefined FUN_1460d5046(void)

void FUN_1460d5046(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined1 *local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(param_1 + -0x30);
  lVar4 = FUN_1400d7050();
  if (lVar4 != 0) {
    lVar5 = FUN_144a5dd5e();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      local_98 = &LAB_145f9b3ce;
      local_90 = 0;
      FUN_1460d525c(lVar4 + 0x24d0,&local_b0,plVar1);
      *(undefined8 **)(param_1 + 0x18) = local_b0;
    }
  }
  lVar4 = (**(code **)(*plVar1 + 0x180))(plVar1);
  if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x30) == 0)) {
    if (*(longlong *)(lVar4 + 0x1f0) == 0) {
      puVar6 = (undefined8 *)(lVar4 + 0x458);
    }
    else {
      puVar6 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
    }
    uVar3 = *puVar6;
    uVar2 = *(undefined4 *)(param_1 + 0x2c);
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar6 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
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
    local_b0[2] = lVar5;
    *local_b0 = &PTR_FUN_14b9b76a0;
    local_b0[3] = 0;
    FUN_14485c47a(local_b0 + 3,plVar1);
    *(undefined4 *)(puVar6 + 5) = 0;
    puVar6[4] = FUN_140a99b24;
    local_98 = (undefined1 *)0x0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_b0);
    local_58 = 1;
    local_b8 = local_a0;
    local_a0[0] = 1;
    local_9c = 0xbf800000;
    FUN_1406f4044(uVar3,param_1 + 0x30,&local_98,uVar2);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    FUN_1449db362(&local_b0);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d525c FUN_1460d525c body=254 status=ok
// SIG undefined FUN_1460d525c(void)

undefined8
FUN_1460d525c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e01f80;
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
  *local_48 = &PTR_FUN_14b9b7630;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140ca2242(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d535c FUN_1460d535c body=842 status=ok
// SIG undefined FUN_1460d535c(void)

void FUN_1460d535c(longlong param_1,char *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  byte *pbVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  int local_a4;
  longlong local_a0;
  longlong local_98;
  char *local_90;
  undefined1 local_84 [8];
  int local_7c;
  longlong local_78;
  undefined1 local_70 [8];
  ulonglong local_68;
  longlong local_60;
  byte local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar6 = *(longlong *)(*(longlong *)(*param_3 + 0x60) + (longlong)(int)param_3[1] * 8);
  if (*(ushort *)(lVar6 + 0xc) != 0) {
    plVar11 = *(longlong **)(lVar6 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar6 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == **(short **)(param_1 + 8)) goto LAB_1460d53c8;
      plVar11 = plVar11 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_1460d53c8:
  local_a4 = *(int *)(lVar6 + 0x14);
  local_c8 = param_4;
  local_90 = param_2;
  if (local_a4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  local_b0 = (ulonglong)*(ushort *)(lVar6 + 0xe);
  if (local_b0 != 0) {
    lVar5 = param_1 + -0xd8;
    local_98 = *plVar11;
    local_a0 = *param_6;
    lVar3 = param_6[1];
    local_c0 = param_6[2];
    local_b0 = (ulonglong)((uint)*(ushort *)(lVar6 + 0xe) * 2);
    param_5 = param_5 + 8;
    uVar9 = 0;
    local_b8 = param_1;
    do {
      local_78 = *(longlong *)(local_c8 + uVar9 * 4);
      if ((local_78 != 0) && (cVar4 = FUN_1460d5706(lVar5,&local_78,param_5), cVar4 != '\0')) {
        FUN_14602e450(lVar5,local_84,&local_78,param_5);
        piVar7 = *(int **)(param_1 + -0x28);
        if (*piVar7 != 0) {
          FUN_140adeba6(piVar7,local_84);
          piVar7 = *(int **)(param_1 + -0x28);
        }
        lVar6 = FUN_1400e4054(piVar7,local_84);
        if (lVar6 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (undefined4)
                   CONCAT71((int7)((ulonglong)param_1 >> 8),'\x02' - (*(short *)(lVar6 + 0xe) == 0))
          ;
        }
        cVar4 = FUN_1460d5816(lVar5,local_7c,uVar10);
        if (cVar4 == '\0') {
          local_68 = 0;
          local_58 = 0;
          local_50 = *(undefined2 *)(local_98 + uVar9);
          if (lVar3 == 0) {
            if (local_a0 == 0) {
              if (local_c0 != 0) {
                local_68 = *(ulonglong *)(local_c0 + uVar9 * 8);
                local_60 = *(longlong *)(local_c0 + 8 + uVar9 * 8);
                uVar8 = local_68;
                if (local_60 != 0) {
                  LOCK();
                  *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
                  UNLOCK();
                  uVar8 = *(ulonglong *)(local_c0 + uVar9 * 8);
                }
                local_58 = 2;
                local_70[0] = FUN_1457bdbaa(uVar8,*(undefined8 *)(local_c8 + uVar9 * 4));
              }
            }
            else {
              lVar6 = (longlong)*(int *)(local_b8 + 0x24) * (ulonglong)*(ushort *)(local_a0 + uVar9)
              ;
              local_68 = *(longlong *)(local_b8 + 0x18) + lVar6;
              local_70[0] = (**(code **)(*(longlong *)(local_b8 + 0x18) + 0x18 + lVar6))
                                      (*(undefined8 *)(local_c8 + uVar9 * 4));
            }
          }
          else {
            uVar2 = *(ushort *)(lVar3 + uVar9);
            local_68 = (ulonglong)uVar2;
            local_58 = 1;
            FUN_1460d56a8(*(undefined8 *)(local_c8 + uVar9 * 4),local_50,uVar2,local_70);
          }
          FUN_1460d5788(lVar5,local_7c,uVar10,local_70);
          (*(code *)(&PTR_LAB_14a4c7e10)[local_58])(&local_68);
        }
        param_1 = local_b8;
        if (*local_90 == '\x01') {
          pbVar1 = (byte *)(*(longlong *)(local_b8 + -0x70) + 0x38 + (longlong)local_7c * 0x40);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      uVar9 = uVar9 + 2;
      param_5 = param_5 + 0x14;
    } while (local_b0 != uVar9);
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (local_a4 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460d56a8 FUN_1460d56a8 body=93 status=ok
// SIG undefined FUN_1460d56a8(void)

void FUN_1460d56a8(longlong param_1,ushort param_2,ushort param_3,undefined1 *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  
  uVar2 = (ulonglong)param_3;
  if ((char)param_2 == '\x01') {
    uVar1 = (uint)*(byte *)(param_1 + uVar2);
    goto LAB_1460d56c1;
  }
  switch((char)param_2) {
  case '\0':
    uVar3 = *(undefined1 *)(param_1 + uVar2);
    break;
  default:
    goto switchD_1460d56e3_caseD_1;
  case '\x02':
    uVar1 = (uint)*(ushort *)(param_1 + uVar2);
    goto LAB_1460d56c1;
  case '\x04':
    uVar1 = *(uint *)(param_1 + uVar2);
LAB_1460d56c1:
    uVar3 = (uVar1 >> (param_2 >> 8 & 0x1f) & 1) != 0;
    break;
  case '\b':
    uVar3 = (*(ulonglong *)(param_1 + uVar2) >> ((ulonglong)(uint)(param_2 >> 8) & 0x3f) & 1) != 0;
  }
  *param_4 = uVar3;
switchD_1460d56e3_caseD_1:
  return;
}



// FUNCTION 1460d5706 FUN_1460d5706 body=129 status=ok
// SIG undefined FUN_1460d5706(void)

byte FUN_1460d5706(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
    FUN_1460d595e(param_1,local_24,param_2,param_3);
    bVar2 = (byte)lVar1;
    if (local_1c != -1) {
      lVar1 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_24);
      bVar2 = lVar1 != 0;
    }
    bVar2 = local_1c != -1 & bVar2;
  }
  else {
    bVar2 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 1460d5788 FUN_1460d5788 body=140 status=ok
// SIG undefined FUN_1460d5788(void)

void FUN_1460d5788(longlong param_1,int param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = (longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x68);
  local_14 = param_2;
  if (param_3 == '\x02') {
    if ((*(byte *)(lVar1 + 0x38) & 1) == 0) {
      FUN_1460d58b8(lVar1 + 0x10,param_4);
      *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 1;
    }
    else {
      FUN_1475d762e(param_1 + 0xa0,&local_14,param_4);
    }
  }
  else if (param_3 == '\x01') {
    FUN_1460d58b8(lVar1 + 0x10,param_4);
    *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 3;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d5816 FUN_1460d5816 body=162 status=ok
// SIG undefined FUN_1460d5816(void)

ulonglong FUN_1460d5816(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  undefined8 in_RAX;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined7 uVar6;
  
  lVar7 = (longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x68);
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x38);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      if (0 < (int)uVar3) {
        uVar9 = 0;
        uVar8 = uVar3;
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x30) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x30) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x30;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -8);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(uVar6,*(undefined1 *)(lVar7 + 0x38));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 1460d58b8 FUN_1460d58b8 body=165 status=ok
// SIG undefined FUN_1460d58b8(void)

undefined1 * FUN_1460d58b8(undefined1 *param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = *param_2;
  if (param_2 != param_1) {
    local_48 = CONCAT71(local_48._1_7_,param_2[0x18]);
    (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[(byte)param_2[0x18]])
              (&local_58,param_2 + 8);
    local_28 = local_48;
    local_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    uVar1 = *(ulonglong *)(param_1 + 0x18);
    uVar2 = *(undefined4 *)(param_1 + 8);
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 8) = local_58;
    *(undefined4 *)(param_1 + 0xc) = uStack_54;
    *(undefined4 *)(param_1 + 0x10) = uStack_50;
    *(undefined4 *)(param_1 + 0x14) = uStack_4c;
    *(ulonglong *)(param_1 + 0x18) = local_48;
    local_58 = uVar2;
    uStack_54 = uVar3;
    uStack_50 = uVar4;
    uStack_4c = uVar5;
    local_48 = uVar1;
    (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
  }
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_2 + 0x20);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d595e FUN_1460d595e body=193 status=ok
// SIG undefined FUN_1460d595e(void)

longlong FUN_1460d595e(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_1460d5a20(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d5a20 FUN_1460d5a20 body=167 status=ok
// SIG undefined FUN_1460d5a20(void)

undefined4 * FUN_1460d5a20(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  uVar1 = *(undefined8 *)(param_3 + 2);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  iVar4 = FUN_140bf3c50((longlong *)(param_1 + 0x18),
                        (uVar7 >> 4) +
                        (uint)uVar1 * 0x10000 + uVar7 + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar3 >> 2) + uVar3 * 0x40 + (uVar2 << 0x13 | uVar2 & 0xffff) + 0x9e3779b9
                        ^ uVar3,param_3);
  uVar6 = 0xffffffff;
  if ((iVar4 != -1) && (lVar5 = (longlong)iVar4 * 0x1c + *(longlong *)(param_1 + 0x18), lVar5 != 0))
  {
    uVar6 = *(undefined4 *)(lVar5 + 0x10);
  }
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 1460d5ad2 FUN_1460d5ad2 body=384 status=ok
// SIG undefined FUN_1460d5ad2(void)

undefined8 * FUN_1460d5ad2(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14007ca06();
  FUN_140e307ac(param_1,uVar1);
  *param_1 = &PTR_FUN_14b316fc0;
  param_1[0x72] = &PTR_LAB_14b317670;
  param_1[0x73] = &PTR_LAB_14b3176f0;
  param_1[0x74] = &PTR_LAB_14b317760;
  param_1[0x75] = &PTR_LAB_14b317788;
  param_1[0x76] = &PTR_LAB_14b3177a0;
  param_1[0xa4] = &PTR_LAB_14b3177d0;
  param_1[0xa5] = &PTR_LAB_14b3178c0;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x534) = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 2;
  *(undefined8 *)((longlong)param_1 + 0x55c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0;
  *(undefined8 *)((longlong)param_1 + 0x56c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x574) = 0;
  *(undefined8 *)((longlong)param_1 + 0x57c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x584) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x594) = 0;
  *(undefined4 *)(param_1 + 0xb3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x59c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x604) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60c) = 0xffffffff00000000;
  *(undefined1 *)((longlong)param_1 + 0x614) = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  *(undefined4 *)(param_1 + 0xc9) = 1;
  *(undefined2 *)(param_1 + 0xca) = 0;
  *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) | 1;
  for (lVar2 = *param_2; (lVar2 != 0 && ((*(uint *)(lVar2 + 8) & 0x30) == 0));
      lVar2 = *(longlong *)(lVar2 + 0x20)) {
  }
  return param_1;
}



// FUNCTION 1460d5c52 FUN_1460d5c52 body=107 status=ok
// SIG undefined FUN_1460d5c52(void)

ulonglong FUN_1460d5c52(longlong param_1)

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
LAB_1460d5ca0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1460d5ca0;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
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



// FUNCTION 1460d5cbe FUN_1460d5cbe body=129 status=ok
// SIG undefined FUN_1460d5cbe(void)

void FUN_1460d5cbe(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  iVar2 = FUN_1409a82f2((longlong *)(param_1 + 0x58),
                        (uint)param_2 ^ (uint)((ulonglong)param_2 >> 0x20));
  if (iVar2 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x58);
    if ((lVar1 + (longlong)iVar2 * 0x90 != 0) && (lVar1 + (longlong)iVar2 * 0x90 != -8)) {
      FUN_14577174e(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d5d40 FUN_1460d5d40 body=75 status=ok
// SIG undefined FUN_1460d5d40(void)

void FUN_1460d5d40(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_144a81a0a();
    FUN_1460d5d8c(local_18,param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d5d8c FUN_1460d5d8c body=239 status=ok
// SIG undefined FUN_1460d5d8c(void)

undefined8 FUN_1460d5d8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a8ea680;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b410f60;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_14166d67c;
  FUN_145c45bb0(&DAT_14c967070,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d5e7c FUN_1460d5e7c body=77 status=ok
// SIG undefined FUN_1460d5e7c(void)

void FUN_1460d5e7c(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = *param_2;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    FUN_1460d5eca(puVar1 + 2,param_2 + 2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x48;
    return;
  }
  FUN_148adff58(param_1);
  return;
}



// FUNCTION 1460d5eca FUN_1460d5eca body=81 status=ok
// SIG undefined FUN_1460d5eca(void)

void FUN_1460d5eca(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_2) {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
      *(undefined8 *)(param_1 + 0x38) = uVar2;
      plVar1 = (longlong *)param_2[7];
      if (plVar1 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    }
    else {
      *(longlong **)(param_1 + 0x38) = plVar1;
    }
    param_2[7] = 0;
  }
  return;
}



// FUNCTION 1460d5f1c FUN_1460d5f1c body=295 status=ok
// SIG undefined FUN_1460d5f1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460d5f1c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca16290) {
    FUN_144b3d300(&DAT_14ca16290);
    if (DAT_14ca16290 == -1) {
      FUN_145c7735c();
      FUN_1460d6044();
      FUN_140db5666(&DAT_14ca161e8,1,&DAT_14ca16180,L"FMicropolyRasterizeWG",
                    L"/Engine/Private/Nanite/NaniteRasterizer.usf",L"MicropolyRasterize",0xb,0x800,
                    FUN_1472541c0,FUN_147254160,FUN_144ab386a,&LAB_14725415c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf8,&DAT_14ca184e0);
      _DAT_14ca161e8 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142e0a65d);
      _Init_thread_footer(&DAT_14ca16290);
    }
  }
  return &DAT_14ca161e8;
}



// FUNCTION 1460d6044 FUN_1460d6044 body=205 status=ok
// SIG undefined FUN_1460d6044(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460d6044(void)

{
  if ((DAT_14ca161e7 & 2) == 0) {
    DAT_14ca161e7 = DAT_14ca161e7 | 2;
    _DAT_14ca16188 = L"FMicropolyRasterizeWG";
    _DAT_14ca161a0 = FUN_146826540;
    _DAT_14ca161a8 = FUN_146825d77;
    _DAT_14ca161b0 = FUN_146825fd6;
    _DAT_14ca161b8 = FUN_1407e02ea;
    _DAT_14ca161c0 = FUN_146826273;
    _DAT_14ca16198 = FUN_147254120;
    _DAT_14ca161d8 = 0xffffffff000000f8;
    _DAT_14ca161e0 = 8;
    DAT_14ca161e4 = 0;
    _DAT_14ca161c8 = &LAB_147254158;
    FUN_1460d6112();
    FUN_1407e00cc(&DAT_14ca16180);
    return;
  }
  return;
}



// FUNCTION 1460d6112 FUN_1460d6112 body=133 status=ok
// SIG undefined FUN_1460d6112(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460d6112(void)

{
  _DAT_14ca19430 = L"BASE";
  DAT_14ca1945a = 4;
  FUN_145c77460();
  _DAT_14ca19440 = DAT_14ca16190;
  _DAT_14ca19438 = &DAT_14ca16058;
  _DAT_14ca19448 = &LAB_14682652b;
  DAT_14ca16190 = &DAT_14ca19430;
  DAT_14ca161e5 = DAT_14ca161e5 + '\x01';
  _DAT_14ca19450 = 0x100000000;
  if (DAT_14ca160bc != '\0') {
    DAT_14ca161e6 = DAT_14ca161e6 + '\x01';
  }
  return;
}



// FUNCTION 1460d6198 FUN_1460d6198 body=76 status=ok
// SIG undefined FUN_1460d6198(void)

void FUN_1460d6198(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    FUN_1460d61e6(local_18,param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d61e6 FUN_1460d61e6 body=239 status=ok
// SIG undefined FUN_1460d61e6(void)

undefined8 FUN_1460d61e6(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14a179310;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &LAB_145c8ee88;
  FUN_1448b6402(&DAT_14c867390,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d62d6 FUN_1460d62d6 body=398 status=ok
// SIG undefined FUN_1460d62d6(void)

void FUN_1460d62d6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_138;
  undefined4 local_130;
  undefined1 local_128 [16];
  longlong *local_118;
  longlong *plStack_110;
  undefined1 local_100 [216];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_118);
      if (local_118 != (longlong *)0x0) {
        if (*(longlong *)(param_1 + 0x30) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x10);
        }
        lVar6 = (**(code **)(*local_118 + 0x380))(local_118,uVar7);
        if (lVar6 == 0) {
          *(undefined1 *)(param_1 + 0x18) = 1;
        }
        else {
          FUN_1412c5ebc(local_100,lVar6);
          pcVar3 = *(code **)(param_1 + 0x40);
          plVar5 = (longlong *)(param_1 + 0x60);
          if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
            plVar5 = *(longlong **)(param_1 + 0x50);
          }
          uVar7 = (**(code **)(*plVar5 + 8))();
          cVar4 = (*pcVar3)(uVar7,local_100);
          if (cVar4 == '\0') {
            *(undefined1 *)(param_1 + 0x81) = 1;
            *(undefined1 *)(param_1 + 0x18) = 1;
          }
          else {
            local_138 = &LAB_145b274c2;
            local_130 = 0;
            FUN_1460d675e(local_128,param_1,&local_138);
            local_138 = *(undefined1 **)(param_1 + 0x30);
            local_148 = local_128;
            FUN_1460d6466(param_1 + 0x20,&local_138,local_100,param_1 + 0x80);
            FUN_1449db362(local_128);
          }
          FUN_14124f074(local_100);
        }
      }
      goto LAB_1460d63f1;
    }
  }
  local_118 = (longlong *)0x0;
  plStack_110 = (longlong *)0x0;
LAB_1460d63f1:
  plVar5 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d6466 FUN_1460d6466 body=240 status=ok
// SIG undefined FUN_1460d6466(void)

void FUN_1460d6466(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_1460d660a(param_2,param_3,param_4,param_5);
  plVar1 = plVar3 + 2;
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_1460d6568(&local_40,plVar1);
  local_30 = plVar1;
  local_28 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145944280(param_1,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145944280(param_1);
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d6568 FUN_1460d6568 body=162 status=ok
// SIG undefined FUN_1460d6568(void)

void FUN_1460d6568(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1460d65a7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1460d65a7;
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
LAB_1460d65a7:
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
                    /* WARNING: Could not recover jumptable at 0x0001460d6606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1460d660a FUN_1460d660a body=172 status=ok
// SIG undefined FUN_1460d660a(void)

undefined8 *
FUN_1460d660a(undefined8 *param_1,undefined8 param_2,undefined1 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)FUN_14001cc68(0x140,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b4f2e20;
  local_40 = *param_4;
  local_48 = &local_40;
  *param_4 = 0;
  local_38 = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  FUN_1460d66b8(puVar1 + 2,*param_1,param_2,*param_3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d66b8 FUN_1460d66b8 body=166 status=ok
// SIG undefined FUN_1460d66b8(void)

undefined8 *
FUN_1460d66b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[5] = 0;
  param_1[6] = param_2;
  *param_1 = &PTR_FUN_14b4f2e40;
  param_1[4] = &PTR_LAB_14b4f2e68;
  FUN_1412c5ebc(param_1 + 7,param_3);
  *(undefined1 *)(param_1 + 0x22) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x111) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_14114e6dc(param_1 + 0x23,param_5);
  param_1[0x25] = 0;
  FUN_1449db362(param_5);
  return param_1;
}



// FUNCTION 1460d675e FUN_1460d675e body=428 status=ok
// SIG undefined FUN_1460d675e(void)

longlong * FUN_1460d675e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1460d683e:
    *puVar5 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4f2f20;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1460d683e;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4f2f20;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1460d690a FUN_1460d690a body=113 status=ok
// SIG undefined FUN_1460d690a(void)

undefined8 *
FUN_1460d690a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b4f6770;
  uVar1 = *param_2;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1460d697c(param_1 + 6,param_4);
  param_1[8] = uVar1;
  param_1[9] = *param_3;
  lVar2 = param_3[1];
  param_1[10] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  return param_1;
}



// FUNCTION 1460d697c FUN_1460d697c body=124 status=ok
// SIG undefined FUN_1460d697c(void)

void FUN_1460d697c(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d69fa FUN_1460d69fa body=85 status=ok
// SIG undefined FUN_1460d69fa(void)

void FUN_1460d69fa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844200) {
    FUN_144b3d300(&DAT_14c844200);
    if (DAT_14c844200 == -1) {
      FUN_1415d712f();
      _Init_thread_footer(&DAT_14c844200);
      return;
    }
  }
  return;
}



// FUNCTION 1460d6a5a FUN_1460d6a5a body=307 status=ok
// SIG undefined FUN_1460d6a5a(void)

undefined8 * FUN_1460d6a5a(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14a33d0d0;
  param_1[5] = &PTR_FUN_14a33dad0;
  param_1[6] = &PTR_LAB_14a33db10;
  param_1[0x55] = &PTR_FUN_14a33db60;
  param_1[0x56] = &PTR_FUN_14a33dbe0;
  param_1[0x57] = &PTR_FUN_14a33dbf0;
  *(undefined8 *)((longlong)param_1 + 0x624) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xd5),4000);
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6e4) = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6ec) = 0x3ff00000;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0x3ff0000000000000;
  param_1[0xe3] = 0x3ff0000000000000;
  param_1[0xe4] = 0x3ff0000000000000;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0x3ff0000000000000;
  param_1[0xe7] = 0x3ff0000000000000;
  param_1[0xe8] = 0x3ff0000000000000;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 7;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x624) = DAT_14ca75ce0;
  *(byte *)((longlong)param_1 + 0x62c) = *(byte *)((longlong)param_1 + 0x62c) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0x641) = 0;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 1;
  return param_1;
}



// FUNCTION 1460d6b8e FUN_1460d6b8e body=40 status=ok
// SIG undefined FUN_1460d6b8e(void)

undefined8 FUN_1460d6b8e(undefined8 param_1,int param_2)

{
  FUN_1415d7218();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1460d6bc2 FUN_1460d6bc2 body=307 status=ok
// SIG undefined FUN_1460d6bc2(void)

undefined8 * FUN_1460d6bc2(undefined8 *param_1)

{
  FUN_145b27574();
  *param_1 = &PTR_FUN_14bb58330;
  param_1[5] = &PTR_FUN_14bb587b0;
  param_1[0x4f] = &PTR_FUN_14bb587f0;
  param_1[0x50] = &PTR_FUN_14bb58810;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  *(undefined1 *)(param_1 + 0x160) = 1;
  param_1[0x16d] = 0;
  *(undefined4 *)(param_1 + 0x16e) = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb7c) = 0;
  param_1[0x171] = 0;
  *(undefined4 *)(param_1 + 0x172) = 0;
  param_1[0x17e] = 0;
  *(undefined4 *)(param_1 + 0x17f) = 0;
  *(undefined4 *)(param_1 + 0x179) = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc04) = 0;
  param_1[0x182] = 0;
  *(undefined4 *)(param_1 + 0x183) = 0;
  param_1[0x188] = 0;
  *(undefined4 *)(param_1 + 0x189) = 0;
  param_1[0x184] = 0;
  param_1[0x185] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc54) = 0;
  param_1[0x18c] = 0;
  *(undefined4 *)(param_1 + 0x18d) = 0;
  return param_1;
}



// FUNCTION 1460d6cf6 FUN_1460d6cf6 body=96 status=ok
// SIG undefined FUN_1460d6cf6(void)

ulonglong FUN_1460d6cf6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1460d6d39:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1460d6d39;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 1460d6d56 FUN_1460d6d56 body=45 status=ok
// SIG undefined FUN_1460d6d56(void)

undefined8 * FUN_1460d6d56(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x308) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_1460d6d84(*(longlong *)(param_1 + 0x308),param_2);
  }
  return param_2;
}



// FUNCTION 1460d6d84 FUN_1460d6d84 body=194 status=ok
// SIG undefined FUN_1460d6d84(void)

undefined8 * FUN_1460d6d84(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x410) != *(int *)(param_1 + 0x43c)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    lVar3 = param_1 + 0x440;
    if (*(longlong *)(param_1 + 0x448) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x448);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x450) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) +
                             ((int)param_3 << 0x10 | (uint)(ushort)param_3) +
                             (uVar2 << 0x13 | uVar2) + (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x408) + (longlong)iVar4 * 0x28);
        if (*plVar1 == param_3) {
          if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            FUN_148ccf47a(plVar1 + 1,param_2);
            return param_2;
          }
          break;
        }
        iVar4 = (int)plVar1[4];
      } while (iVar4 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1460d6e46 FUN_1460d6e46 body=118 status=ok
// SIG undefined FUN_1460d6e46(void)

void FUN_1460d6e46(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FUN_1403ca102();
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x398) != 0) {
    lVar4 = FUN_144a7b4ca();
    lVar1 = *(longlong *)(param_1 + 0x398);
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1460d6ea3;
      if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar5 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          lVar5 = lVar1;
        }
        goto LAB_1460d6ea3;
      }
    }
  }
  lVar5 = 0;
LAB_1460d6ea3:
  FUN_1460d6ebc(lVar3,lVar5);
  return;
}



// FUNCTION 1460d6ebc FUN_1460d6ebc body=81 status=ok
// SIG undefined FUN_1460d6ebc(void)

void FUN_1460d6ebc(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360) != 0)) {
    iVar1 = FUN_14490d72a();
    if (iVar1 != 3) {
      uVar2 = FUN_140d27a2a(param_1);
      FUN_1415d73be(uVar2,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1460d6f0e FUN_1460d6f0e body=165 status=ok
// SIG undefined FUN_1460d6f0e(void)

bool FUN_1460d6f0e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d6fb4 FUN_1460d6fb4 body=531 status=ok
// SIG undefined FUN_1460d6fb4(void)

void FUN_1460d6fb4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = param_1 + 0x30;
  plVar1 = (longlong *)FUN_1408bb964(param_1);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      FUN_1446ddc76(&local_30,&DAT_14b9da1a3,1);
      if (*param_2 == local_30) {
        (**(code **)(*plVar1 + 0x4e0))(plVar1);
        lVar2 = FUN_1400f3ad8(param_1);
        if (lVar2 != 0) {
          lVar3 = FUN_144a5dd5e();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            FUN_1460d71c8(lVar2);
          }
        }
      }
      else {
        FUN_1446ddc76(&local_38,"QuitToMain",1);
        if (*param_2 == local_38) {
          uVar4 = 0;
        }
        else {
          FUN_1446ddc76(&local_40,"QuitToMainWithParty",1);
          if (*param_2 != local_40) {
            FUN_1446ddc76(&local_48,"QuitToTitle",1);
            if (*param_2 == local_48) {
              FUN_148d3217c(plVar1);
            }
            else {
              FUN_1446ddc76(&local_50,"LeaveParty",1);
              if ((*param_2 == local_50) && (lVar2 = plVar1[9], lVar2 != 0)) {
                lVar3 = FUN_140b6d0be();
                if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
                  FUN_148d9445c(lVar2,0);
                }
              }
            }
            goto LAB_1460d7070;
          }
          lVar2 = FUN_1400f3ad8(param_1);
          if (lVar2 != 0) {
            lVar3 = FUN_144a5dd5e();
            if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
              FUN_1460d71c8(lVar2);
            }
          }
          uVar4 = 1;
        }
        FUN_148d321a0(plVar1,uVar4);
      }
    }
  }
LAB_1460d7070:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d71c8 FUN_1460d71c8 body=19 status=ok
// SIG undefined FUN_1460d71c8(void)

void FUN_1460d71c8(longlong param_1)

{
  FUN_140c125e6(param_1 + 0xd98,&DAT_14cbd9318);
  return;
}



// FUNCTION 1460d71e6 FUN_1460d71e6 body=308 status=ok
// SIG undefined FUN_1460d71e6(void)

undefined8 * FUN_1460d71e6(undefined8 *param_1)

{
  FUN_1458d76ca();
  *param_1 = &PTR_FUN_14a594f60;
  param_1[5] = &PTR_FUN_14a595580;
  param_1[6] = &PTR_LAB_14a5955c0;
  *(undefined4 *)(param_1 + 0x122) = 1;
  *(undefined1 *)((longlong)param_1 + 0x914) = 0;
  *(undefined4 *)(param_1 + 0x123) = 0x322bcc77;
  *(undefined1 *)((longlong)param_1 + 0x91c) = 1;
  *(undefined4 *)(param_1 + 0x124) = 0x3f7eb852;
  *(undefined1 *)((longlong)param_1 + 0x924) = 0;
  *(undefined4 *)(param_1 + 0x125) = 0x3f80a3d7;
  param_1[0x126] = 0;
  *(undefined4 *)(param_1 + 0x127) = 0;
  param_1[0x128] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x129));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x129),4000);
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  *(undefined4 *)(param_1 + 0x131) = 0x3f800000;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0x8000000000000000;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  *(undefined1 *)(param_1 + 0x137) = 2;
  *(undefined2 *)((longlong)param_1 + 0x9ba) = 0x200;
  *(undefined8 *)((longlong)param_1 + 0x9bc) = 0xa00000000;
  *(undefined4 *)((longlong)param_1 + 0x9c4) = 100;
  *(undefined2 *)(param_1 + 0x139) = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  return param_1;
}



// FUNCTION 1460d731a FUN_1460d731a body=117 status=ok
// SIG undefined FUN_1460d731a(void)

longlong * FUN_1460d731a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1460d7390(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1460d7390 FUN_1460d7390 body=201 status=ok
// SIG undefined FUN_1460d7390(void)

void FUN_1460d7390(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8 [424];
  undefined8 local_120;
  undefined8 local_f0;
  longlong *local_e8;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  FUN_140a53a96(local_2c8);
  plVar5 = local_e8;
  local_120 = 0;
  local_f0 = *(undefined8 *)(param_2 + 0x1a8);
  plVar3 = *(longlong **)(param_2 + 0x1b0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_e8;
      local_e8 = plVar3;
      (*(code *)*puVar4)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = local_e8;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = local_e8;
      }
    }
  }
  local_e8 = plVar3;
  FUN_140a58268(param_1,local_2c8);
  FUN_140a5660c(local_2c8);
  if ((local_20 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d7460 FUN_1460d7460 body=63 status=ok
// SIG undefined FUN_1460d7460(void)

void FUN_1460d7460(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1460d74a0(param_1);
    FUN_145a2a65e(param_1);
    return;
  }
  FUN_145a2a65e(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_141464818(param_1);
  return;
}



// FUNCTION 1460d74a0 FUN_1460d74a0 body=335 status=ok
// SIG undefined FUN_1460d74a0(void)

void FUN_1460d74a0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 100 + (longlong)iVar4 * 0x68) * 4) =
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



// FUNCTION 1460d760a FUN_1460d760a body=134 status=ok
// SIG undefined FUN_1460d760a(void)

void FUN_1460d760a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[0x7e];
  if ((lVar1 == DAT_14cadad70) || (param_1[0x7f] == DAT_14cadad68)) {
    (**(code **)(*param_1 + 0x6e0))(param_1);
    lVar1 = param_1[0x7e];
  }
  if (lVar1 == DAT_14cadad78) {
    lVar2 = 0x6e8;
  }
  else if (lVar1 == DAT_14cadad80) {
    lVar2 = 0x6f0;
  }
  else {
    lVar2 = 0x6f8;
    if (lVar1 != DAT_14cadad88) goto LAB_1460d767c;
  }
  (**(code **)(*param_1 + lVar2))(param_1);
  lVar1 = param_1[0x7e];
LAB_1460d767c:
  param_1[0x7f] = lVar1;
  return;
}



// FUNCTION 1460d7690 FUN_1460d7690 body=95 status=ok
// SIG undefined FUN_1460d7690(void)

void FUN_1460d7690(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined8 *)(DAT_14ca8c078 + 0x10);
  uVar2 = *(undefined8 *)(DAT_14ca8c078 + 0x18);
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *(undefined8 **)(param_1 + 0x20) = puVar3;
  }
  *puVar3 = 0x3f800000;
  puVar3[1] = 0;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  puVar3[4] = uVar1;
  puVar3[5] = uVar2;
  FUN_1460d76f0(param_1);
  return;
}



// FUNCTION 1460d76f0 FUN_1460d76f0 body=224 status=ok
// SIG undefined FUN_1460d76f0(void)

void FUN_1460d76f0(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *plVar1 = 0;
    LOCK();
    puVar2 = (uint *)(lVar4 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1411eeb9e(&local_20,*(longlong *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x10),1);
    if (plVar1 != &local_20) {
      lVar4 = *plVar1;
      *plVar1 = local_20;
      local_20 = 0;
      if (lVar4 == 0) goto LAB_1460d7753;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_20 != 0) {
      LOCK();
      puVar2 = (uint *)(local_20 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
LAB_1460d7753:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d77d2 FUN_1460d77d2 body=134 status=ok
// SIG undefined FUN_1460d77d2(void)

void FUN_1460d77d2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1415d7610(local_2c);
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = 0;
    do {
      (**(code **)(lVar2 + lVar3))();
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460d786c FUN_1460d786c body=2332 status=ok
// SIG undefined FUN_1460d786c(void)

void FUN_1460d786c(longlong param_1)

{
  longlong lVar1;
  void *_Src;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  byte bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  char cVar15;
  uint uVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 uVar20;
  undefined ***pppuVar21;
  int iVar22;
  ulonglong uVar23;
  bool bVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  undefined4 uVar31;
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
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8;
  undefined1 local_2b8 [16];
  double local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  undefined8 local_210;
  void *local_208;
  int local_200;
  undefined4 local_1fc;
  code *local_1f8;
  undefined8 uStack_1f0;
  undefined ***local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined **local_1d8;
  longlong lStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined1 local_188;
  byte local_184;
  code *local_178;
  undefined8 uStack_170;
  undefined ***local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined **local_158;
  longlong lStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  iVar22 = *(int *)(param_1 + 0x58);
  uVar23 = (ulonglong)iVar22;
  if (0 < (longlong)uVar23) {
    plVar17 = (longlong *)(param_1 + 0x50);
    bVar24 = false;
    do {
      lVar26 = uVar23 * 8;
      uVar25 = uVar23;
      while( true ) {
        lVar26 = lVar26 + -8;
        cVar15 = FUN_144729dda(*plVar17 + lVar26);
        if (cVar15 == '\0') break;
        bVar2 = uVar25 < 2;
        uVar25 = uVar25 - 1;
        if (bVar2) {
          iVar22 = *(int *)(param_1 + 0x58);
          if (bVar24) goto LAB_1460d7f3f;
          goto LAB_1460d7941;
        }
      }
      uVar16 = *(uint *)(param_1 + 0x58);
      if (uVar16 != uVar25) {
        memmove((void *)(*(longlong *)(param_1 + 0x50) + uVar25 * 8 + -8),
                (void *)(*(longlong *)(param_1 + 0x50) + uVar25 * 8),
                (longlong)(int)(uVar16 - (int)uVar25) << 3);
        uVar16 = *(uint *)(param_1 + 0x58);
      }
      uVar23 = uVar25 - 1;
      *(uint *)(param_1 + 0x58) = uVar16 - 1;
      FUN_14980c348(plVar17);
      bVar24 = true;
    } while (1 < uVar25);
    iVar22 = *(int *)(param_1 + 0x58);
LAB_1460d7f3f:
    local_208 = (void *)0x0;
    _Src = (void *)*plVar17;
    local_200 = iVar22;
    if (iVar22 == 0) {
      local_1fc = 0;
    }
    else {
      FUN_145ef44de(&local_208,iVar22);
      memcpy(local_208,_Src,(longlong)iVar22 << 3);
    }
    FUN_14158b8e5(&local_208);
    iVar22 = *(int *)(param_1 + 0x58);
  }
LAB_1460d7941:
  if (iVar22 == 0) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1412f3774(*(undefined8 *)(param_1 + 0x20),*(longlong *)(param_1 + 0x40),0,1);
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    plVar17 = (longlong *)FUN_1415d76b6();
    lVar26 = plVar17[0x22];
    if (lVar26 == 0) {
      (**(code **)(*plVar17 + 1000))(plVar17);
      lVar26 = plVar17[0x22];
      if (lVar26 == 0) goto LAB_1460d7c2a;
    }
    iVar22 = *(int *)(param_1 + 0x58);
    if ((longlong)iVar22 == 0) {
      uVar35 = 0;
      uVar36 = 0;
      uVar31 = 0;
      uVar32 = 0;
      dVar5 = 0.0;
      dVar7 = 0.0;
      local_2b8 = ZEXT816(0);
      local_2a8 = 0.0;
      uStack_2a0 = 0;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x50);
      bVar11 = 1;
      lVar27 = 0;
      bVar24 = false;
      uVar39 = 0;
      uVar40 = 0;
      uVar41 = 0;
      uVar42 = 0;
      dVar7 = 0.0;
      dVar5 = 0.0;
      uVar31 = 0;
      uVar32 = 0;
      uVar33 = 0;
      uVar34 = 0;
      uVar35 = 0;
      uVar36 = 0;
      uVar37 = 0;
      uVar38 = 0;
      dVar29 = 0.0;
      uVar30 = 0;
      do {
        local_1f8 = *(code **)(lVar1 + lVar27);
        lVar18 = FUN_14479d2ce(&local_1f8);
        lVar19 = *(longlong *)(lVar18 + 0x390);
        if (lVar19 == 0) {
          local_2b8._4_4_ = uVar40;
          local_2b8._0_4_ = uVar39;
          local_2b8._8_4_ = uVar41;
          local_2b8._12_4_ = uVar42;
          local_2a8 = dVar29;
          uStack_2a0 = uVar30;
        }
        else {
          dVar9 = *(double *)(lVar19 + 0x170) + *(double *)(lVar19 + 0x188);
          dVar4 = *(double *)(lVar19 + 0x168) + *(double *)(lVar19 + 0x180);
          dVar6 = *(double *)(lVar19 + 0x160) + *(double *)(lVar19 + 0x178);
          dVar8 = *(double *)(lVar19 + 0x170) - *(double *)(lVar19 + 0x188);
          dVar28 = *(double *)(lVar19 + 0x168) - *(double *)(lVar19 + 0x180);
          dVar3 = *(double *)(lVar19 + 0x160) - *(double *)(lVar19 + 0x178);
          local_288._8_8_ = 0;
          local_288._0_8_ = dVar3;
          local_298._8_8_ = 0;
          local_298._0_8_ = dVar28;
          local_2b8._8_8_ = 0;
          local_2b8._0_8_ = dVar4;
          uStack_2a0 = 0;
          dVar10 = dVar8;
          dVar12 = dVar6;
          local_2a8 = dVar9;
          if (bVar24) {
            dVar13 = (double)CONCAT44(uVar36,uVar35);
            if (dVar3 <= (double)CONCAT44(uVar36,uVar35)) {
              dVar13 = dVar3;
            }
            dVar14 = (double)CONCAT44(uVar32,uVar31);
            if (dVar28 <= (double)CONCAT44(uVar32,uVar31)) {
              dVar14 = dVar28;
            }
            dVar10 = dVar5;
            if (dVar8 <= dVar5) {
              dVar10 = dVar8;
            }
            dVar12 = dVar7;
            if (dVar7 <= dVar6) {
              dVar12 = dVar6;
            }
            dVar5 = (double)CONCAT44(uVar40,uVar39);
            if ((double)CONCAT44(uVar40,uVar39) <= dVar4) {
              dVar5 = dVar4;
            }
            local_2a8 = dVar29;
            if (dVar29 <= dVar9) {
              local_2a8 = dVar9;
            }
            local_288._8_4_ = uVar37;
            local_288._0_8_ = dVar13;
            local_288._12_4_ = uVar38;
            local_298._8_4_ = uVar33;
            local_298._0_8_ = dVar14;
            local_298._12_4_ = uVar34;
            local_2b8._8_4_ = uVar41;
            local_2b8._0_8_ = dVar5;
            local_2b8._12_4_ = uVar42;
            uStack_2a0 = uVar30;
          }
          uVar23 = -(ulonglong)(0.0 < *(double *)(lVar18 + 0x3a0));
          dVar29 = (double)(~uVar23 & 0x3ff0000000000000 |
                           (ulonglong)*(double *)(lVar18 + 0x3a0) & uVar23);
          dVar7 = (dVar6 - dVar3) * 0.5;
          dVar5 = (dVar4 - dVar28) * 0.5;
          local_1b8 = (code *)CONCAT44((float)(dVar5 + dVar5),(float)(dVar7 + dVar7));
          local_278 = CONCAT44((float)dVar28,(float)dVar3);
          if ((bool)(*(longlong *)(param_1 + 0x30) != 0 & bVar11)) {
            lVar19 = FUN_1448e494c(*(undefined8 *)(param_1 + 0x20));
            if (lVar19 != 0) {
              FUN_1446f470e(&local_210,L"OcclusionEnabled",1);
              FUN_14490d20c(lVar19,local_210,0x3f800000);
              FUN_14490d20c(lVar19,*(undefined8 *)(lVar26 + 0x130),(float)dVar29);
              FUN_14490d20c(lVar19,*(undefined8 *)(lVar26 + 0x120),(float)(dVar9 - dVar8));
              FUN_14490d20c(lVar19,*(undefined8 *)(lVar26 + 0x128),
                            (float)(dVar8 - *(double *)(lVar26 + 0x148)));
              FUN_144938f46(lVar19,*(undefined8 *)(lVar26 + 0x138),&local_278);
              FUN_144938f46(lVar19,*(undefined8 *)(lVar26 + 0x140),&local_1b8);
            }
            bVar11 = 0;
          }
          plVar17 = (longlong *)FUN_1415d76b6();
          lVar19 = plVar17[0x22];
          if (lVar19 == 0) {
            (**(code **)(*plVar17 + 1000))(plVar17);
            lVar19 = plVar17[0x22];
            if (lVar19 != 0) goto LAB_1460d7bb5;
          }
          else {
LAB_1460d7bb5:
            if (*(char *)(lVar19 + 0x38) == '\x01') {
              if (*(longlong *)(lVar18 + 0x3a8) != 0) {
                FUN_14472da24(*(longlong *)(lVar18 + 0x3a8),*(undefined8 *)(lVar26 + 0x130),
                              (float)dVar29);
                FUN_14472da24(*(undefined8 *)(lVar18 + 0x3a8),*(undefined8 *)(lVar26 + 0x120),
                              (float)(dVar9 - dVar8));
                FUN_14472da24(*(undefined8 *)(lVar18 + 0x3a8),*(undefined8 *)(lVar26 + 0x128),
                              (float)(dVar8 - *(double *)(lVar26 + 0x148)));
              }
              FUN_1405d0f74(lVar18);
            }
          }
          bVar24 = true;
          uVar31 = local_298._0_4_;
          uVar32 = local_298._4_4_;
          uVar33 = local_298._8_4_;
          uVar34 = local_298._12_4_;
          uVar37 = local_288._8_4_;
          uVar38 = local_288._12_4_;
          uVar35 = local_288._0_4_;
          uVar36 = local_288._4_4_;
          uVar39 = local_2b8._0_4_;
          uVar40 = local_2b8._4_4_;
          uVar41 = local_2b8._8_4_;
          uVar42 = local_2b8._12_4_;
          dVar5 = dVar10;
          dVar7 = dVar12;
        }
        lVar27 = lVar27 + 8;
        dVar29 = local_2a8;
        uVar30 = uStack_2a0;
      } while ((longlong)iVar22 * 8 != lVar27);
    }
    plVar17 = (longlong *)FUN_1415d76b6();
    lVar26 = plVar17[0x22];
    if (lVar26 == 0) {
      (**(code **)(*plVar17 + 1000))(plVar17);
      lVar26 = plVar17[0x22];
      if (lVar26 == 0) goto LAB_1460d7c2a;
    }
    if (*(char *)(lVar26 + 0x38) != '\0') {
      local_228 = (local_2a8 + DAT_14c8463c8) - dVar5;
      dVar29 = ((double)local_2b8._0_8_ + DAT_14c8463c0) - (double)CONCAT44(uVar32,uVar31);
      local_278 = DAT_14c8463d0;
      uStack_270 = DAT_14c8463d8;
      local_268 = (undefined4)DAT_14c8463e0;
      uStack_264 = DAT_14c8463e0._4_4_;
      uStack_260 = (undefined4)DAT_14c8463e8;
      uStack_25c = DAT_14c8463e8._4_4_;
      uStack_240 = 0;
      local_238._8_4_ = SUB84(dVar29,0);
      local_238._0_8_ = (dVar7 + DAT_14c8463b8) - (double)CONCAT44(uVar36,uVar35);
      local_238._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      uStack_220 = 0;
      local_258 = uVar35;
      uStack_254 = uVar36;
      uStack_250 = uVar31;
      uStack_24c = uVar32;
      local_248 = dVar5;
      if (*(longlong *)(param_1 + 0x40) == 0) {
        FUN_1411371f6(&local_1b8);
        FUN_1446ddc76(&local_1f8,"GbxWeatherOcclusionRVT",1);
        local_1b8 = local_1f8;
        local_184 = local_184 | 0x48;
        local_188 = 1;
        lStack_1d0 = *(longlong *)(param_1 + 0x38);
        if ((lStack_1d0 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lStack_1d0);
        }
        local_1e8 = (undefined ***)0x0;
        local_1d8 = &PTR_FUN_14be8f6e0;
        if ((lStack_1d0 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lStack_1d0);
        }
        pppuVar21 = local_168;
        uVar30 = uStack_170;
        local_1f8 = local_178;
        local_168 = local_1e8;
        local_158 = local_1d8;
        lStack_150 = lStack_1d0;
        local_178 = FUN_1446459c4;
        uStack_170 = uStack_1f0;
        local_1c8 = local_148;
        uStack_1c4 = uStack_144;
        uStack_1c0 = uStack_140;
        uStack_1bc = uStack_13c;
        uStack_1e0 = uStack_160;
        uStack_1dc = uStack_15c;
        uStack_1f0 = uVar30;
        if (local_1f8 != (code *)0x0) {
          if (pppuVar21 == (undefined ***)0x0) {
            pppuVar21 = &local_1d8;
          }
          (*(code *)(*pppuVar21)[2])();
        }
        uVar30 = *(undefined8 *)(param_1 + 0x20);
        uVar20 = FUN_1459ea110();
        lVar26 = FUN_141037e38(uVar30,uVar20,&local_278,&local_1b8);
        if ((lVar26 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(lVar26);
        }
        *(longlong *)(param_1 + 0x40) = lVar26;
        if (local_178 != (code *)0x0) {
          pppuVar21 = local_168;
          if (local_168 == (undefined ***)0x0) {
            pppuVar21 = &local_158;
          }
          (*(code *)(*pppuVar21)[2])();
        }
      }
      else {
        local_2c8 = 0;
        FUN_1413d4c10(*(longlong *)(param_1 + 0x40),&local_278,0,0);
      }
    }
  }
LAB_1460d7c2a:
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460d818a FUN_1460d818a body=315 status=ok
// SIG undefined FUN_1460d818a(void)

void FUN_1460d818a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [43];
  undefined1 local_1d;
  undefined4 local_1c;
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
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_1d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1460d82c6(local_18,local_1c,local_1d);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d82c6 FUN_1460d82c6 body=552 status=ok
// SIG undefined FUN_1460d82c6(void)

void FUN_1460d82c6(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_1 == (longlong *)0x0) || (param_2 < 1)) goto LAB_1460d84ac;
  uVar2 = FUN_14018b740();
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar2);
  if (plVar3 == (longlong *)0x0) goto LAB_1460d84ac;
  uVar2 = FUN_14018b740();
  plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
  if ((plVar3 == plVar4) || (plVar4 == (longlong *)0x0)) goto LAB_1460d84ac;
  local_78 = 0;
  uStack_70 = 0;
  if (param_3 == '\0') {
LAB_1460d84da:
    lVar6 = 0;
  }
  else {
    uVar2 = FUN_144a7b040();
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar2);
    if (plVar3 == (longlong *)0x0) goto LAB_1460d84da;
    uVar2 = FUN_144a7b040();
    plVar5 = (longlong *)FUN_144718840(plVar3,uVar2);
    lVar6 = 0;
    if ((plVar3 != plVar5) && (plVar5 != (longlong *)0x0)) {
      lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
      if ((param_3 == '\x02') && (lVar6 != 0)) {
        FUN_144a84024(&local_78,*(undefined4 *)(lVar6 + 0x40),1);
        if (0 < (int)uStack_70) {
          uVar8 = 0;
          do {
            uVar9 = FUN_140d033b6(lVar6,uVar8 & 0xffffffff);
            *(undefined4 *)(local_78 + uVar8 * 4) = uVar9;
            uVar8 = uVar8 + 1;
          } while ((longlong)uVar8 < (longlong)(int)uStack_70);
        }
      }
    }
  }
  iVar1 = (**(code **)(*plVar4 + 0x18))(plVar4);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2 + iVar1);
  uVar9 = (**(code **)(*plVar4 + 0x18))(plVar4);
  (**(code **)(*plVar4 + 0x30))(plVar4,uVar9);
  if ((param_3 != '\0') && (lVar6 != 0)) {
    if (param_3 == '\x01') {
      FUN_14654aa2c(lVar6);
    }
    else if (0 < (int)uStack_70) {
      lVar7 = 0;
      iVar1 = (int)uStack_70;
      do {
        if (0.0 < *(float *)(local_78 + lVar7 * 4)) {
          FUN_140b5543e(lVar6,0x3f800000);
          iVar1 = (int)uStack_70;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar1);
    }
  }
  lVar6 = FUN_144a2f878();
  if ((*(int *)(lVar6 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
      lVar6 + 0x30)) {
    uVar9 = (**(code **)(*plVar4 + 0x18))(plVar4);
    FUN_1460d84f0(param_1,uVar9);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_1460d84ac:
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d84f0 FUN_1460d84f0 body=91 status=ok
// SIG undefined FUN_1460d84f0(void)

void FUN_1460d84f0(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba7bf8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d854c FUN_1460d854c body=228 status=ok
// SIG undefined FUN_1460d854c(void)

void FUN_1460d854c(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  plVar1 = param_1 + 0x52;
  iVar2 = (int)param_1[0x53];
  *(uint *)(param_1 + 0x53) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x29c) < iVar2 + 1U) {
    FUN_1446f84a2(plVar1,iVar2);
  }
  *(undefined8 *)(param_1[0x52] + (longlong)iVar2 * 8) = DAT_14cbe6530;
  iVar2 = (int)param_1[0x53];
  *(uint *)(param_1 + 0x53) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x29c) < iVar2 + 1U) {
    FUN_1446f84a2(plVar1,iVar2);
  }
  *(undefined8 *)(param_1[0x52] + (longlong)iVar2 * 8) = DAT_14cbe6538;
  iVar2 = (int)param_1[0x53];
  *(uint *)(param_1 + 0x53) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x29c) < iVar2 + 1U) {
    FUN_1446f84a2(plVar1,iVar2);
  }
  *(undefined8 *)(param_1[0x52] + (longlong)iVar2 * 8) = DAT_14cbe6540;
  FUN_1460d8630(param_1);
  lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar3 != 0) {
    FUN_140fb8846(param_1,lVar3);
    return;
  }
  return;
}



// FUNCTION 1460d8630 FUN_1460d8630 body=455 status=ok
// SIG undefined FUN_1460d8630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1460d8630(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  code *local_50;
  longlong **local_48;
  code *local_40;
  code **local_38;
  ulonglong local_30;
  
  lVar3 = DAT_14cb84f20;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = param_1;
  if (DAT_14cb84f20 != 0) {
    FUN_1460d87f8(param_1 + 0x14);
    FUN_1408d9e0e(param_1 + 0x35,0);
    lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar4 != 0) {
      lVar5 = FUN_140ec3c65(lVar4);
      if (lVar5 != 0) {
        local_40 = FUN_145a328aa;
        local_38 = (code **)((ulonglong)local_38 & 0xffffffff00000000);
        FUN_1460d883c(&local_50,param_1,&local_40);
        param_1[0x13] = (longlong)local_50;
        local_80 = &local_78;
        local_90 = _DAT_14cb852b8;
        local_88 = DAT_14cb852c0;
        local_48 = &local_80;
        local_50 = FUN_144345856;
        local_40 = (code *)&LAB_144345848;
        local_78 = lVar4;
        local_70 = param_1;
        local_38 = &local_50;
        uVar6 = FUN_1404e6bfe();
        local_60 = local_90;
        local_58 = local_88;
        FUN_140e9367e(lVar3,&local_60,uVar6,&local_40);
        *(undefined1 *)(param_1 + 0x4e) = 1;
        if (((param_1[0x40] != 0) && (param_1[0x41] != 0)) && (0 < *(int *)(param_1[0x41] + 8))) {
          FUN_1401cb356();
          local_40 = (code *)param_1[0x40];
          local_38 = (code **)param_1[0x41];
          if (local_38 != (code **)0x0) {
            LOCK();
            *(int *)((longlong)local_38 + 0xc) = *(int *)((longlong)local_38 + 0xc) + 1;
            UNLOCK();
          }
          FUN_140d61352(&local_40);
          plVar2 = (longlong *)param_1[0x41];
          param_1[0x40] = 0;
          param_1[0x41] = 0;
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
        uVar6 = 0;
        goto LAB_1460d87c7;
      }
    }
  }
  FUN_1415d779c(&local_68);
  uVar6 = 1;
LAB_1460d87c7:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d87f8 FUN_1460d87f8 body=67 status=ok
// SIG undefined FUN_1460d87f8(void)

void FUN_1460d87f8(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1460d8936(param_1);
    FUN_145aa0702(param_1,0);
    return;
  }
  FUN_145aa0702(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1414baa9a(param_1);
  return;
}



// FUNCTION 1460d883c FUN_1460d883c body=248 status=ok
// SIG undefined FUN_1460d883c(void)

undefined8 FUN_1460d883c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1ca5b0;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b9dcd00;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14123f6f0(&DAT_14cb10980,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d8936 FUN_1460d8936 body=339 status=ok
// SIG undefined FUN_1460d8936(void)

void FUN_1460d8936(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 1460d8a96 FUN_1460d8a96 body=471 status=ok
// SIG undefined FUN_1460d8a96(void)

undefined8 * FUN_1460d8a96(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14a4b8b10;
  param_1[0x1f] = &PTR_LAB_14a4b8e80;
  FUN_1415d79e2(param_1 + 0x20);
  local_58 = 0xd2704c107b5ae74c;
  uStack_50 = 0xb212a5aa9585798;
  iVar4 = FUN_1448a256a(param_1);
  if (iVar4 < 4) {
    cVar3 = '\0';
  }
  else {
    local_68 = 0xd2704c107b5ae74c;
    uStack_60 = 0xb212a5aa9585798;
    iVar4 = FUN_1448a256a(param_1);
    cVar3 = '\x02' - (iVar4 < 6);
  }
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(char *)((longlong)param_1 + 0x59) = cVar3;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a492060;
  plVar1 = plVar5 + 2;
  FUN_14127a52a(plVar1,param_1 + 0x20);
  local_78 = plVar1;
  local_70 = plVar5;
  FUN_140aec6f8(&local_78,plVar1);
  plVar1 = local_70;
  if (local_70 == (longlong *)0x0) {
    param_1[0x1c] = local_78;
    plVar5 = (longlong *)param_1[0x1d];
    if (plVar5 == (longlong *)0x0) goto LAB_1460d8bad;
    param_1[0x1d] = 0;
LAB_1460d8c0f:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1460d8bad;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
    param_1[0x1c] = local_78;
    plVar5 = (longlong *)param_1[0x1d];
    if (local_70 != plVar5) {
      param_1[0x1d] = local_70;
      if (plVar5 == (longlong *)0x0) goto LAB_1460d8bad;
      goto LAB_1460d8c0f;
    }
    LOCK();
    plVar5 = local_70 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1460d8bad;
    (**(code **)*local_70)(local_70);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
  }
  if (iVar4 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1460d8bad:
  plVar1 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_70 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d8c6e FUN_1460d8c6e body=272 status=ok
// SIG undefined FUN_1460d8c6e(void)

undefined4
FUN_1460d8c6e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 local_110 [184];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar2 = (longlong *)FUN_14054d1d4();
  uVar1 = 0;
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x18))(plVar2,param_1,0);
  if (plVar2 != (longlong *)0x0) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2);
    FUN_1415d7a80(&local_58,uVar3,1);
    (**(code **)(*plVar2 + 0x170))(plVar2,local_58,uStack_50);
    local_118 = 0;
    FUN_1460d8db6(local_110,local_58,uStack_50,0);
    uVar1 = FUN_1415d7ad8(param_3,local_110,param_2,param_4);
    FUN_1460d8d80(local_110);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    (**(code **)*plVar2)(plVar2,1);
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d8d80 FUN_1460d8d80 body=54 status=ok
// SIG undefined FUN_1460d8d80(void)

void FUN_1460d8d80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e37a60;
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    FUN_1400020a8(param_1[0x14]);
  }
  FUN_144a7fc42(param_1);
  return;
}



// FUNCTION 1460d8db6 FUN_1460d8db6 body=352 status=ok
// SIG undefined FUN_1460d8db6(void)

longlong *
FUN_1460d8db6(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4,longlong param_5
             )

{
  undefined **ppuVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined7 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = (longlong)&PTR__purecall_149e35f70;
  *(undefined2 *)((longlong)param_1 + 0x4e) = 0;
  param_1[0xd] = 0;
  param_1[0x11] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = (longlong)(param_1 + 2);
  lVar2 = param_2;
  FUN_1460d8f18();
  param_1[0x12] = 0;
  ppuVar1 = &PTR_FUN_149e37a60;
  *param_1 = (longlong)&PTR_FUN_149e37a60;
  uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),(char)param_1[0x13]) & 0xfffffffffffffffe;
  uVar4 = (undefined7)(uVar3 >> 8);
  *(byte *)(param_1 + 0x13) = (byte)uVar3 | (byte)param_4 & 1;
  param_1[0x14] = param_2;
  param_1[0x15] = param_3;
  param_1[0x16] = param_5;
  if ((param_2 == 0) || (param_3 < 1)) {
    FUN_1400021e4(param_1 + 0x16,&local_48);
    puVar5 = local_48;
    if (local_40 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    uVar4 = 0;
    FUN_140033559(".\\Runtime/Core/Private/Serialization/LargeMemoryReader.cpp",0x16,
                  L"Tried to initialize an FLargeMemoryReader with a null or empty buffer. Archive name: %s."
                  ,puVar5);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    ppuVar1 = (undefined **)*param_1;
  }
  (*(code *)ppuVar1[0x16])(param_1,CONCAT71(uVar4,1));
  (**(code **)(*param_1 + 0xf0))
            (param_1,CONCAT71((int7)((param_4 & 0xffffff02) >> 8),(byte)(param_4 & 0xffffff02) >> 1)
            );
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1460d8f18 FUN_1460d8f18 body=187 status=ok
// SIG undefined FUN_1460d8f18(void)

void FUN_1460d8f18(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[1];
  puVar2[2] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  param_1[8] = DAT_14c89603c;
  *(undefined4 *)(param_1 + 9) = 1;
  puVar2 = (undefined8 *)FUN_144a8b586();
  *(undefined8 *)((longlong)param_1 + 0x4c) = *puVar2;
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0xc] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(byte *)((longlong)param_1 + 0x2c) = *(byte *)((longlong)param_1 + 0x2c) & 0xfc;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar1 = param_1[0xf];
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar1);
  }
  param_1[0xf] = 0;
  if (*(code **)(*param_1 + 0x68) == FUN_146821802) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001460d8fc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}



// FUNCTION 1460d8fd4 FUN_1460d8fd4 body=63 status=ok
// SIG undefined FUN_1460d8fd4(void)

undefined1 FUN_1460d8fd4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1460d9014(param_2,param_3);
    param_3 = param_3 + 0x220;
    param_2 = param_2 + 0x220;
  }
  return 1;
}



// FUNCTION 1460d9014 FUN_1460d9014 body=504 status=ok
// SIG undefined FUN_1460d9014(void)

longlong FUN_1460d9014(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  byte bVar6;
  longlong lVar7;
  
  FUN_140311eb6();
  if (param_2 != param_1) {
    FUN_1460d9262(param_1 + 0x10,param_2 + 0x10);
    FUN_1460d939e(param_1 + 0x28,param_2 + 0x28);
  }
  FUN_1460d920c(param_1 + 0x40,param_2 + 0x40);
  FUN_14597db2c(param_1 + 0x58,param_2 + 0x58);
  FUN_144a787a6(param_1 + 0x70,param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x83) = *(undefined4 *)(param_2 + 0x83);
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  lVar7 = *(longlong *)(param_2 + 0x88);
  if (DAT_14c950c29 == 1) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar7 = *(longlong *)(param_2 + 0x88);
    }
  }
  bVar6 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x88) = lVar7;
  lVar7 = *(longlong *)(param_2 + 0x90);
  if ((bVar6 & 1) != 0) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar7 = *(longlong *)(param_2 + 0x90);
    }
  }
  *(longlong *)(param_1 + 0x90) = lVar7;
  FUN_140f82514(param_1 + 0x98,param_2 + 0x98);
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0xa8);
  FUN_140b177d4(param_1 + 0xb0,param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  FUN_140d2c7b6(param_1 + 0xd8,param_2 + 0xd8);
  uVar4 = *(undefined8 *)(param_2 + 0x128);
  lVar7 = *(longlong *)(param_2 + 0x130);
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x128) = uVar4;
  *(longlong *)(param_1 + 0x130) = lVar7;
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
  *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  FUN_140d7e6a6(param_1 + 0x148,param_2 + 0x148);
  FUN_1401aa3da(param_1 + 0x158,param_2 + 0x158);
  memcpy((void *)(param_1 + 0x170),(void *)(param_2 + 0x170),0xb0);
  return param_1;
}



// FUNCTION 1460d920c FUN_1460d920c body=86 status=ok
// SIG undefined FUN_1460d920c(void)

longlong * FUN_1460d920c(longlong *param_1,longlong *param_2)

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



// FUNCTION 1460d9262 FUN_1460d9262 body=314 status=ok
// SIG undefined FUN_1460d9262(void)

void FUN_1460d9262(undefined8 param_1,longlong *param_2)

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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460d939e FUN_1460d939e body=314 status=ok
// SIG undefined FUN_1460d939e(void)

void FUN_1460d939e(undefined8 param_1,longlong *param_2)

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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460d94da FUN_1460d94da body=265 status=ok
// SIG undefined FUN_1460d94da(void)

undefined1 * FUN_1460d94da(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_a8 [39];
  undefined1 local_81;
  code *local_80;
  code *local_78;
  undefined1 *local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  longlong *local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  FUN_144a5dc74(local_50);
  local_40 = *(undefined8 *)(param_3 + 0x10);
  local_38 = *(undefined8 *)(param_3 + 0x18);
  local_30 = *(undefined1 *)(param_3 + 0x20);
  lVar1 = FUN_1460d95e4();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  local_60 = FUN_147d769ac;
  local_78 = FUN_140e6e058;
  local_80 = FUN_147d85fa0;
  local_70 = &LAB_147d85fbc;
  local_68 = FUN_147d85fc2;
  local_58 = lVar1;
  (**(code **)(*param_1 + 0x40))(param_1,&local_81,&local_80);
  *param_2 = local_81;
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d95e4 FUN_1460d95e4 body=55 status=ok
// SIG undefined FUN_1460d95e4(void)

void FUN_1460d95e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabe8b0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabe8b0 = FUN_140002ddd(FUN_14636bc68,uVar1,L"ActorLocatorFragment");
  }
  return;
}



// FUNCTION 1460d961c FUN_1460d961c body=265 status=ok
// SIG undefined FUN_1460d961c(void)

undefined1 * FUN_1460d961c(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_a8 [39];
  undefined1 local_81;
  code *local_80;
  code *local_78;
  undefined1 *local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  longlong *local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  FUN_144a5dc74(local_50);
  local_40 = *(undefined8 *)(param_3 + 0x10);
  local_38 = *(undefined8 *)(param_3 + 0x18);
  local_30 = *(undefined1 *)(param_3 + 0x20);
  lVar1 = FUN_1460d9726();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  local_60 = FUN_147d77186;
  local_78 = FUN_147d86012;
  local_80 = FUN_147d8602e;
  local_70 = &LAB_147d8604a;
  local_68 = FUN_147d86050;
  local_58 = lVar1;
  (**(code **)(*param_1 + 0x40))(param_1,&local_81,&local_80);
  *param_2 = local_81;
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d9726 FUN_1460d9726 body=55 status=ok
// SIG undefined FUN_1460d9726(void)

void FUN_1460d9726(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf068 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf068 = FUN_140002ddd(FUN_14636df22,uVar1,L"AssetLocatorFragment");
  }
  return;
}



// FUNCTION 1460d975e FUN_1460d975e body=265 status=ok
// SIG undefined FUN_1460d975e(void)

undefined1 * FUN_1460d975e(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_a8 [39];
  undefined1 local_81;
  code *local_80;
  code *local_78;
  undefined1 *local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  longlong *local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  FUN_144a5dc74(local_50);
  local_40 = *(undefined8 *)(param_3 + 0x10);
  local_38 = *(undefined8 *)(param_3 + 0x18);
  local_30 = *(undefined1 *)(param_3 + 0x20);
  lVar1 = FUN_1460d9868();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  local_60 = FUN_147d769ea;
  local_78 = FUN_147d860a0;
  local_80 = FUN_147d860bc;
  local_70 = &LAB_147d860d8;
  local_68 = FUN_147d860de;
  local_58 = lVar1;
  (**(code **)(*param_1 + 0x40))(param_1,&local_81,&local_80);
  *param_2 = local_81;
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d9868 FUN_1460d9868 body=55 status=ok
// SIG undefined FUN_1460d9868(void)

void FUN_1460d9868(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabed38 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabed38 = FUN_140002ddd(FUN_14636d2e3,uVar1,L"AnimInstanceLocatorFragment");
  }
  return;
}



// FUNCTION 1460d98a0 FUN_1460d98a0 body=101 status=ok
// SIG undefined FUN_1460d98a0(void)

longlong FUN_1460d98a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x210);
  if (lVar1 == 0) {
    lVar1 = FUN_1460d9905(DAT_14c951640,0,0,0,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x210) = lVar1;
  }
  return lVar1;
}



// FUNCTION 1460d9905 FUN_1460d9905 body=219 status=ok
// SIG undefined FUN_1460d9905(void)

undefined8
FUN_1460d9905(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1411b6034();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d99ec FUN_1460d99ec body=309 status=ok
// SIG undefined FUN_1460d99ec(void)

undefined8 * FUN_1460d99ec(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_38,L"RootShakePattern",1);
  uVar1 = FUN_145a782b6();
  FUN_140486538(param_2,local_38);
  FUN_14048646a(param_2 + 0x20,local_38,uVar1,0);
  FUN_1459d1f84(param_1,param_2);
  *param_1 = &PTR_FUN_14ad38580;
  param_1[0x2a] = 0;
  param_1[0x3b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1e] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined2 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x3e4ccccd3dcccccd;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d9b2a FUN_1460d9b2a body=1192 status=ok
// SIG undefined FUN_1460d9b2a(void)

longlong * FUN_1460d9b2a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_318 [32];
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  longlong local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined1 *local_2d8;
  undefined8 local_2c8;
  undefined **local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_298;
  undefined8 local_288;
  undefined **local_278;
  undefined1 *local_270;
  undefined1 *local_258;
  undefined8 local_248;
  undefined **local_238;
  undefined1 *local_230;
  undefined1 *local_218;
  undefined8 local_208;
  undefined **local_1f8;
  code *local_1f0;
  undefined1 *local_1d8;
  undefined8 local_1c8;
  undefined **local_1b8;
  undefined *local_1b0;
  undefined1 *local_198;
  undefined8 local_188;
  undefined **local_178;
  code *local_170;
  undefined1 *local_158;
  undefined8 local_148;
  undefined **local_138;
  undefined1 *local_130;
  code *local_118;
  undefined8 local_108;
  undefined **local_f8;
  longlong *local_f0;
  undefined1 *local_d8;
  undefined8 local_c8;
  undefined **local_b8;
  code *local_b0;
  undefined1 *local_98;
  undefined8 local_88;
  undefined **local_78;
  code *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_318;
  FUN_1400841f8();
  *param_1 = (longlong)&PTR_FUN_14aedcf70;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x200000000;
  param_1[0x12] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  param_1[0x48] = 0;
  param_1[0x4a] = 0;
  param_1[0x50] = 0;
  param_1[0x52] = 0;
  param_1[0x58] = 0;
  param_1[0x5a] = 0;
  plVar1 = param_1 + 99;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  lVar4 = FUN_14594bb10();
  if (lVar4 == 0) {
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    if (*(int *)((longlong)param_1 + 0x324) < 0) {
      FUN_1446f8c06(plVar1,0);
    }
    if ((undefined2 *)*plVar1 != (undefined2 *)0x0) {
      *(undefined2 *)*plVar1 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_2f8,lVar4);
    *(undefined4 *)(param_1 + 0x61) = local_2f8;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_2f4;
    *(undefined4 *)(param_1 + 0x62) = uStack_2f0;
    *(undefined4 *)((longlong)param_1 + 0x314) = uStack_2ec;
    if (param_1 + 0x61 == (longlong *)&local_2f8) {
      if (local_2e8 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      param_1[99] = local_2e8;
      local_2e8 = 0;
      *(undefined4 *)(param_1 + 100) = local_2e0;
      *(undefined4 *)((longlong)param_1 + 0x324) = local_2dc;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar2 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x60] = 0;
        goto LAB_1460d9cd0;
      }
    }
    FUN_14485c47a(param_1 + 0x60,lVar4);
  }
LAB_1460d9cd0:
  local_88 = 0;
  local_78 = &PTR_LAB_14aedfc70;
  local_70 = FUN_143b5536e;
  local_98 = &LAB_1484585a8;
  (**(code **)(*param_1 + 0x2a0))(param_1);
  local_c8 = 0;
  local_b8 = &PTR_LAB_14aedfc90;
  local_b0 = FUN_143b5539c;
  local_d8 = &LAB_1484585bc;
  (**(code **)(*param_1 + 0x2c8))(param_1);
  local_108 = 0;
  local_f8 = &PTR_LAB_14aedfcb0;
  local_118 = FUN_143b553c0;
  local_f0 = param_1;
  (**(code **)(*param_1 + 0x2a8))(param_1);
  local_148 = 0;
  local_138 = &PTR_LAB_14aedfcd0;
  local_130 = &LAB_143b55720;
  local_158 = &LAB_14845868a;
  (**(code **)(*param_1 + 0x2d0))(param_1);
  local_188 = 0;
  local_178 = &PTR_LAB_14aedfcf0;
  local_170 = FUN_143b5572a;
  local_198 = &LAB_14845874e;
  (**(code **)(*param_1 + 0x2b0))(param_1);
  local_1c8 = 0;
  local_1b8 = &PTR_LAB_14aedfd10;
  local_1b0 = &DAT_143b55750;
  local_1d8 = &LAB_148458762;
  (**(code **)(*param_1 + 0x2d8))(param_1);
  local_208 = 0;
  local_1f8 = &PTR_LAB_14aedfd30;
  local_1f0 = FUN_143b55752;
  local_218 = &LAB_148458826;
  (**(code **)(*param_1 + 0x2b8))(param_1);
  local_248 = 0;
  local_238 = &PTR_LAB_14aedfd50;
  local_230 = &LAB_143b55794;
  local_258 = &LAB_14845883a;
  (**(code **)(*param_1 + 0x2e0))(param_1);
  local_288 = 0;
  local_278 = &PTR_LAB_14aedfd70;
  local_270 = &LAB_143b5579e;
  local_298 = &LAB_1484588fe;
  (**(code **)(*param_1 + 0x2c0))(param_1);
  local_2c8 = 0;
  local_2b8 = &PTR_LAB_14aedfd90;
  local_2b0 = &LAB_143b557a6;
  local_2d8 = &LAB_148458912;
  (**(code **)(*param_1 + 0x2e8))(param_1);
  if ((local_50 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d9fd4 FUN_1460d9fd4 body=216 status=ok
// SIG undefined FUN_1460d9fd4(void)

void FUN_1460d9fd4(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  uVar6 = *(undefined8 *)(param_1 + 0xa8);
  uVar7 = *(undefined8 *)(param_1 + 0xb0);
  uVar8 = *(undefined8 *)(param_1 + 0xb8);
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  lVar14 = param_2[5];
  lVar15 = param_2[7];
  *(longlong *)(param_1 + 0xb0) = param_2[6];
  *(longlong *)(param_1 + 0xb8) = lVar15;
  *(longlong *)(param_1 + 0xa0) = lVar13;
  *(longlong *)(param_1 + 0xa8) = lVar14;
  *(longlong *)(param_1 + 0x90) = lVar11;
  *(longlong *)(param_1 + 0x98) = lVar12;
  *(longlong *)(param_1 + 0x80) = lVar9;
  *(longlong *)(param_1 + 0x88) = lVar10;
  local_58._0_4_ = (undefined4)uVar1;
  local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar2;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_48._0_4_ = (undefined4)uVar3;
  local_48._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar4;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_38._0_4_ = (undefined4)uVar5;
  local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar6;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_28._0_4_ = (undefined4)uVar7;
  local_28._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar8;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = uVar3;
  uStack_40 = uVar4;
  local_38 = uVar5;
  uStack_30 = uVar6;
  local_28 = uVar7;
  uStack_20 = uVar8;
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460da0be FUN_1460da0be body=216 status=ok
// SIG undefined FUN_1460da0be(void)

void FUN_1460da0be(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  uVar2 = *(undefined8 *)(param_1 + 0x1c8);
  uVar3 = *(undefined8 *)(param_1 + 0x1d0);
  uVar4 = *(undefined8 *)(param_1 + 0x1d8);
  uVar5 = *(undefined8 *)(param_1 + 0x1e0);
  uVar6 = *(undefined8 *)(param_1 + 0x1e8);
  uVar7 = *(undefined8 *)(param_1 + 0x1f0);
  uVar8 = *(undefined8 *)(param_1 + 0x1f8);
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  lVar14 = param_2[5];
  lVar15 = param_2[7];
  *(longlong *)(param_1 + 0x1f0) = param_2[6];
  *(longlong *)(param_1 + 0x1f8) = lVar15;
  *(longlong *)(param_1 + 0x1e0) = lVar13;
  *(longlong *)(param_1 + 0x1e8) = lVar14;
  *(longlong *)(param_1 + 0x1d0) = lVar11;
  *(longlong *)(param_1 + 0x1d8) = lVar12;
  *(longlong *)(param_1 + 0x1c0) = lVar9;
  *(longlong *)(param_1 + 0x1c8) = lVar10;
  local_58._0_4_ = (undefined4)uVar1;
  local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar2;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_48._0_4_ = (undefined4)uVar3;
  local_48._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar4;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_38._0_4_ = (undefined4)uVar5;
  local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar6;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_28._0_4_ = (undefined4)uVar7;
  local_28._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar8;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = uVar3;
  uStack_40 = uVar4;
  local_38 = uVar5;
  uStack_30 = uVar6;
  local_28 = uVar7;
  uStack_20 = uVar8;
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460da1a8 FUN_1460da1a8 body=216 status=ok
// SIG undefined FUN_1460da1a8(void)

void FUN_1460da1a8(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  uVar2 = *(undefined8 *)(param_1 + 200);
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  uVar4 = *(undefined8 *)(param_1 + 0xd8);
  uVar5 = *(undefined8 *)(param_1 + 0xe0);
  uVar6 = *(undefined8 *)(param_1 + 0xe8);
  uVar7 = *(undefined8 *)(param_1 + 0xf0);
  uVar8 = *(undefined8 *)(param_1 + 0xf8);
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  lVar14 = param_2[5];
  lVar15 = param_2[7];
  *(longlong *)(param_1 + 0xf0) = param_2[6];
  *(longlong *)(param_1 + 0xf8) = lVar15;
  *(longlong *)(param_1 + 0xe0) = lVar13;
  *(longlong *)(param_1 + 0xe8) = lVar14;
  *(longlong *)(param_1 + 0xd0) = lVar11;
  *(longlong *)(param_1 + 0xd8) = lVar12;
  *(longlong *)(param_1 + 0xc0) = lVar9;
  *(longlong *)(param_1 + 200) = lVar10;
  local_58._0_4_ = (undefined4)uVar1;
  local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar2;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_48._0_4_ = (undefined4)uVar3;
  local_48._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar4;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_38._0_4_ = (undefined4)uVar5;
  local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar6;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_28._0_4_ = (undefined4)uVar7;
  local_28._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar8;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = uVar3;
  uStack_40 = uVar4;
  local_38 = uVar5;
  uStack_30 = uVar6;
  local_28 = uVar7;
  uStack_20 = uVar8;
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460da292 FUN_1460da292 body=216 status=ok
// SIG undefined FUN_1460da292(void)

void FUN_1460da292(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x200);
  uVar2 = *(undefined8 *)(param_1 + 0x208);
  uVar3 = *(undefined8 *)(param_1 + 0x210);
  uVar4 = *(undefined8 *)(param_1 + 0x218);
  uVar5 = *(undefined8 *)(param_1 + 0x220);
  uVar6 = *(undefined8 *)(param_1 + 0x228);
  uVar7 = *(undefined8 *)(param_1 + 0x230);
  uVar8 = *(undefined8 *)(param_1 + 0x238);
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  lVar14 = param_2[5];
  lVar15 = param_2[7];
  *(longlong *)(param_1 + 0x230) = param_2[6];
  *(longlong *)(param_1 + 0x238) = lVar15;
  *(longlong *)(param_1 + 0x220) = lVar13;
  *(longlong *)(param_1 + 0x228) = lVar14;
  *(longlong *)(param_1 + 0x210) = lVar11;
  *(longlong *)(param_1 + 0x218) = lVar12;
  *(longlong *)(param_1 + 0x200) = lVar9;
  *(longlong *)(param_1 + 0x208) = lVar10;
  local_58._0_4_ = (undefined4)uVar1;
  local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar2;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_48._0_4_ = (undefined4)uVar3;
  local_48._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar4;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_38._0_4_ = (undefined4)uVar5;
  local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar6;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_28._0_4_ = (undefined4)uVar7;
  local_28._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar8;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = uVar3;
  uStack_40 = uVar4;
  local_38 = uVar5;
  uStack_30 = uVar6;
  local_28 = uVar7;
  uStack_20 = uVar8;
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460da37c FUN_1460da37c body=216 status=ok
// SIG undefined FUN_1460da37c(void)

void FUN_1460da37c(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  uVar3 = *(undefined8 *)(param_1 + 0x110);
  uVar4 = *(undefined8 *)(param_1 + 0x118);
  uVar5 = *(undefined8 *)(param_1 + 0x120);
  uVar6 = *(undefined8 *)(param_1 + 0x128);
  uVar7 = *(undefined8 *)(param_1 + 0x130);
  uVar8 = *(undefined8 *)(param_1 + 0x138);
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  lVar14 = param_2[5];
  lVar15 = param_2[7];
  *(longlong *)(param_1 + 0x130) = param_2[6];
  *(longlong *)(param_1 + 0x138) = lVar15;
  *(longlong *)(param_1 + 0x120) = lVar13;
  *(longlong *)(param_1 + 0x128) = lVar14;
  *(longlong *)(param_1 + 0x110) = lVar11;
  *(longlong *)(param_1 + 0x118) = lVar12;
  *(longlong *)(param_1 + 0x100) = lVar9;
  *(longlong *)(param_1 + 0x108) = lVar10;
  local_58._0_4_ = (undefined4)uVar1;
  local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar2;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_48._0_4_ = (undefined4)uVar3;
  local_48._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar4;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_38._0_4_ = (undefined4)uVar5;
  local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar6;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_28._0_4_ = (undefined4)uVar7;
  local_28._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar8;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = uVar3;
  uStack_40 = uVar4;
  local_38 = uVar5;
  uStack_30 = uVar6;
  local_28 = uVar7;
  uStack_20 = uVar8;
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460da466 FUN_1460da466 body=216 status=ok
// SIG undefined FUN_1460da466(void)

void FUN_1460da466(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x240);
  uVar2 = *(undefined8 *)(param_1 + 0x248);
  uVar3 = *(undefined8 *)(param_1 + 0x250);
  uVar4 = *(undefined8 *)(param_1 + 600);
  uVar5 = *(undefined8 *)(param_1 + 0x260);
  uVar6 = *(undefined8 *)(param_1 + 0x268);
  uVar7 = *(undefined8 *)(param_1 + 0x270);
  uVar8 = *(undefined8 *)(param_1 + 0x278);
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  lVar14 = param_2[5];
  lVar15 = param_2[7];
  *(longlong *)(param_1 + 0x270) = param_2[6];
  *(longlong *)(param_1 + 0x278) = lVar15;
  *(longlong *)(param_1 + 0x260) = lVar13;
  *(longlong *)(param_1 + 0x268) = lVar14;
  *(longlong *)(param_1 + 0x250) = lVar11;
  *(longlong *)(param_1 + 600) = lVar12;
  *(longlong *)(param_1 + 0x240) = lVar9;
  *(longlong *)(param_1 + 0x248) = lVar10;
  local_58._0_4_ = (undefined4)uVar1;
  local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar2;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_48._0_4_ = (undefined4)uVar3;
  local_48._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar4;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_38._0_4_ = (undefined4)uVar5;
  local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar6;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_28._0_4_ = (undefined4)uVar7;
  local_28._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar8;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = uVar3;
  uStack_40 = uVar4;
  local_38 = uVar5;
  uStack_30 = uVar6;
  local_28 = uVar7;
  uStack_20 = uVar8;
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460da550 FUN_1460da550 body=216 status=ok
// SIG undefined FUN_1460da550(void)

void FUN_1460da550(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  uVar2 = *(undefined8 *)(param_1 + 0x148);
  uVar3 = *(undefined8 *)(param_1 + 0x150);
  uVar4 = *(undefined8 *)(param_1 + 0x158);
  uVar5 = *(undefined8 *)(param_1 + 0x160);
  uVar6 = *(undefined8 *)(param_1 + 0x168);
  uVar7 = *(undefined8 *)(param_1 + 0x170);
  uVar8 = *(undefined8 *)(param_1 + 0x178);
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  lVar14 = param_2[5];
  lVar15 = param_2[7];
  *(longlong *)(param_1 + 0x170) = param_2[6];
  *(longlong *)(param_1 + 0x178) = lVar15;
  *(longlong *)(param_1 + 0x160) = lVar13;
  *(longlong *)(param_1 + 0x168) = lVar14;
  *(longlong *)(param_1 + 0x150) = lVar11;
  *(longlong *)(param_1 + 0x158) = lVar12;
  *(longlong *)(param_1 + 0x140) = lVar9;
  *(longlong *)(param_1 + 0x148) = lVar10;
  local_58._0_4_ = (undefined4)uVar1;
  local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar2;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_48._0_4_ = (undefined4)uVar3;
  local_48._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar4;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_38._0_4_ = (undefined4)uVar5;
  local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar6;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_28._0_4_ = (undefined4)uVar7;
  local_28._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar8;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = uVar3;
  uStack_40 = uVar4;
  local_38 = uVar5;
  uStack_30 = uVar6;
  local_28 = uVar7;
  uStack_20 = uVar8;
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460da63a FUN_1460da63a body=216 status=ok
// SIG undefined FUN_1460da63a(void)

void FUN_1460da63a(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x280);
  uVar2 = *(undefined8 *)(param_1 + 0x288);
  uVar3 = *(undefined8 *)(param_1 + 0x290);
  uVar4 = *(undefined8 *)(param_1 + 0x298);
  uVar5 = *(undefined8 *)(param_1 + 0x2a0);
  uVar6 = *(undefined8 *)(param_1 + 0x2a8);
  uVar7 = *(undefined8 *)(param_1 + 0x2b0);
  uVar8 = *(undefined8 *)(param_1 + 0x2b8);
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  lVar14 = param_2[5];
  lVar15 = param_2[7];
  *(longlong *)(param_1 + 0x2b0) = param_2[6];
  *(longlong *)(param_1 + 0x2b8) = lVar15;
  *(longlong *)(param_1 + 0x2a0) = lVar13;
  *(longlong *)(param_1 + 0x2a8) = lVar14;
  *(longlong *)(param_1 + 0x290) = lVar11;
  *(longlong *)(param_1 + 0x298) = lVar12;
  *(longlong *)(param_1 + 0x280) = lVar9;
  *(longlong *)(param_1 + 0x288) = lVar10;
  local_58._0_4_ = (undefined4)uVar1;
  local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar2;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_48._0_4_ = (undefined4)uVar3;
  local_48._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar4;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_38._0_4_ = (undefined4)uVar5;
  local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar6;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_28._0_4_ = (undefined4)uVar7;
  local_28._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar8;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = uVar3;
  uStack_40 = uVar4;
  local_38 = uVar5;
  uStack_30 = uVar6;
  local_28 = uVar7;
  uStack_20 = uVar8;
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460da724 FUN_1460da724 body=216 status=ok
// SIG undefined FUN_1460da724(void)

void FUN_1460da724(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  uVar2 = *(undefined8 *)(param_1 + 0x188);
  uVar3 = *(undefined8 *)(param_1 + 400);
  uVar4 = *(undefined8 *)(param_1 + 0x198);
  uVar5 = *(undefined8 *)(param_1 + 0x1a0);
  uVar6 = *(undefined8 *)(param_1 + 0x1a8);
  uVar7 = *(undefined8 *)(param_1 + 0x1b0);
  uVar8 = *(undefined8 *)(param_1 + 0x1b8);
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  lVar14 = param_2[5];
  lVar15 = param_2[7];
  *(longlong *)(param_1 + 0x1b0) = param_2[6];
  *(longlong *)(param_1 + 0x1b8) = lVar15;
  *(longlong *)(param_1 + 0x1a0) = lVar13;
  *(longlong *)(param_1 + 0x1a8) = lVar14;
  *(longlong *)(param_1 + 400) = lVar11;
  *(longlong *)(param_1 + 0x198) = lVar12;
  *(longlong *)(param_1 + 0x180) = lVar9;
  *(longlong *)(param_1 + 0x188) = lVar10;
  local_58._0_4_ = (undefined4)uVar1;
  local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar2;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_48._0_4_ = (undefined4)uVar3;
  local_48._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar4;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_38._0_4_ = (undefined4)uVar5;
  local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar6;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_28._0_4_ = (undefined4)uVar7;
  local_28._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar8;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = uVar3;
  uStack_40 = uVar4;
  local_38 = uVar5;
  uStack_30 = uVar6;
  local_28 = uVar7;
  uStack_20 = uVar8;
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460da80e FUN_1460da80e body=216 status=ok
// SIG undefined FUN_1460da80e(void)

void FUN_1460da80e(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x2c0);
  uVar2 = *(undefined8 *)(param_1 + 0x2c8);
  uVar3 = *(undefined8 *)(param_1 + 0x2d0);
  uVar4 = *(undefined8 *)(param_1 + 0x2d8);
  uVar5 = *(undefined8 *)(param_1 + 0x2e0);
  uVar6 = *(undefined8 *)(param_1 + 0x2e8);
  uVar7 = *(undefined8 *)(param_1 + 0x2f0);
  uVar8 = *(undefined8 *)(param_1 + 0x2f8);
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  lVar14 = param_2[5];
  lVar15 = param_2[7];
  *(longlong *)(param_1 + 0x2f0) = param_2[6];
  *(longlong *)(param_1 + 0x2f8) = lVar15;
  *(longlong *)(param_1 + 0x2e0) = lVar13;
  *(longlong *)(param_1 + 0x2e8) = lVar14;
  *(longlong *)(param_1 + 0x2d0) = lVar11;
  *(longlong *)(param_1 + 0x2d8) = lVar12;
  *(longlong *)(param_1 + 0x2c0) = lVar9;
  *(longlong *)(param_1 + 0x2c8) = lVar10;
  local_58._0_4_ = (undefined4)uVar1;
  local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar2;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_48._0_4_ = (undefined4)uVar3;
  local_48._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar4;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_38._0_4_ = (undefined4)uVar5;
  local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar6;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_28._0_4_ = (undefined4)uVar7;
  local_28._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar8;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = uVar3;
  uStack_40 = uVar4;
  local_38 = uVar5;
  uStack_30 = uVar6;
  local_28 = uVar7;
  uStack_20 = uVar8;
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460da900 FUN_1460da900 body=312 status=ok
// SIG undefined FUN_1460da900(void)

undefined8 * FUN_1460da900(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14007ca06();
  FUN_14077009c(param_1,uVar1);
  *param_1 = &PTR_FUN_14b7e0ef0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 0xd) = 4;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xe) = 3;
  *(char *)(param_1 + 0xf) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  FUN_1446f470e(&local_30,L"any.combat.puppet",1);
  param_1[0x10] = local_30;
  *(undefined4 *)(param_1 + 0x11) = 0xc;
  param_1[0x12] = 0;
  FUN_1446f470e(&local_38,L"any.combat.puppet.sprint",1);
  param_1[0x13] = local_38;
  *(undefined4 *)(param_1 + 0x14) = 0xc;
  param_1[0x15] = 0;
  param_1[0x16] = 0xc07a400000000000;
  param_1[0x17] = 0x4044000000000000;
  param_1[0x18] = 0x403e000000000000;
  param_1[0x19] = 0x3f3333333e99999a;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460daa44 FUN_1460daa44 body=309 status=ok
// SIG undefined FUN_1460daa44(void)

undefined8 * FUN_1460daa44(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145aa0ce2();
  *param_1 = &PTR_FUN_14ba4dd60;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  lVar1 = FUN_1459f57da();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x74] = lVar1;
    if (lVar1 != 0) goto LAB_1460daaaa;
  }
  else {
    FUN_1456cec3c(lVar1);
    param_1[0x74] = lVar1;
LAB_1460daaaa:
    lVar2 = FUN_1411bcc5e();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar1 = param_1[0x74];
      goto LAB_1460daada;
    }
  }
  lVar1 = 0;
LAB_1460daada:
  local_20 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_20,&local_30);
  if (param_1 + 0x72 == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x72] != 0) {
      FUN_1400020a8();
    }
    param_1[0x72] = local_30;
    *(undefined4 *)(param_1 + 0x73) = local_28;
    *(undefined4 *)((longlong)param_1 + 0x39c) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460dab82 FUN_1460dab82 body=312 status=ok
// SIG undefined FUN_1460dab82(void)

longlong * FUN_1460dab82(longlong *param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14585467a();
  *param_1 = (longlong)&PTR_FUN_14bdd7590;
  param_1[5] = (longlong)&PTR_FUN_14bdd7960;
  param_1[0x13] = (longlong)&PTR_FUN_14bdd7980;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  local_38 = L"WeldMeshEdgesToolName";
  local_30 = 0x15;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"UWeldMeshEdgesTool";
  local_30 = 0x12;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"Weld Edges");
  (**(code **)(*param_1 + 0x370))(param_1,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460dacc6 FUN_1460dacc6 body=310 status=ok
// SIG undefined FUN_1460dacc6(void)

undefined8 * FUN_1460dacc6(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a3ba650;
  param_1[0x72] = 0;
  FUN_1403121a6(param_1,0);
  FUN_1446f470e(&local_20,L"LandscapeMeshProxyComponent0",1);
  uVar1 = FUN_14598eeba();
  local_30 = 0;
  local_38 = 1;
  plVar2 = (longlong *)FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar2);
  }
  param_1[0x72] = plVar2;
  (**(code **)(*plVar2 + 0x728))(plVar2,DAT_14cad0f30,1);
  *(undefined1 *)(param_1[0x72] + 0x1fb) = 0;
  plVar2 = (longlong *)param_1[0x72];
  if ((*(byte *)((longlong)plVar2 + 0x2d3) & 8) != 0) {
    *(byte *)((longlong)plVar2 + 0x2d3) = *(byte *)((longlong)plVar2 + 0x2d3) & 0xf7;
    (**(code **)(*plVar2 + 0x958))();
    plVar2 = (longlong *)param_1[0x72];
  }
  if (DAT_14c950c29 == '\x01') {
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      FUN_1456cec3c();
      plVar2 = (longlong *)param_1[0x72];
    }
  }
  param_1[0x39] = plVar2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460dae08 FUN_1460dae08 body=310 status=ok
// SIG undefined FUN_1460dae08(void)

undefined8 * FUN_1460dae08(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4d3b30;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar2 = FUN_14009d2a0();
  lVar3 = FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar3 + 0xfc);
  *(undefined1 *)((longlong)param_1 + 0x32) = 4;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    uVar1 = *(undefined2 *)(lVar2 + 0x126);
    local_28 = param_1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_28,uVar1);
    uVar1 = *(undefined2 *)(lVar3 + 0xfa);
    local_30 = param_1[2];
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_30,uVar1);
    local_38 = param_1[2];
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_40 = FUN_14090928c();
    if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_40);
    }
    FUN_140909372(&local_40,&local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460daf3f FUN_1460daf3f body=142 status=ok
// SIG undefined FUN_1460daf3f(void)

void FUN_1460daf3f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14099ce38(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a85c9e0;
  puVar1[5] = &PTR_FUN_14a85d620;
  puVar1[6] = &PTR_LAB_14a85d660;
  puVar1[0x55] = &PTR_FUN_14a85d6b0;
  puVar1[0x56] = &PTR_FUN_14a85d730;
  puVar1[0x57] = &PTR_FUN_14a85d740;
  puVar1[0xca] = &PTR_FUN_14a85d770;
  puVar1[0x15a] = 0;
  puVar1[0x15b] = 0;
  FUN_1415d7d62(puVar1 + 0x15c);
  *(undefined1 *)(puVar1 + 0x189) = 0;
  return;
}



// FUNCTION 1460dafce FUN_1460dafce body=24 status=ok
// SIG undefined FUN_1460dafce(void)

void FUN_1460dafce(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001460dafe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1460dafe6 FUN_1460dafe6 body=38 status=ok
// SIG undefined FUN_1460dafe6(void)

undefined8 FUN_1460dafe6(undefined8 param_1,int param_2)

{
  FUN_1460db00c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1460db00c FUN_1460db00c body=234 status=ok
// SIG undefined FUN_1460db00c(void)

void FUN_1460db00c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14ac8be20;
  param_1[4] = &PTR_FUN_14ac8be40;
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != param_1 + 6) {
    do {
      plVar2 = (longlong *)plVar3[1];
      *(longlong **)(*plVar3 + 8) = plVar2;
      *plVar2 = *plVar3;
      local_48 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      *(undefined2 *)(plVar3 + 4) = 0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      *plVar3 = 0;
      plVar3[1] = 0;
      FUN_140356b2c(&local_68);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      plVar3 = (longlong *)param_1[6];
    } while (plVar3 != param_1 + 6);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_14114f6be(param_1 + 4);
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460db110 FUN_1460db110 body=40 status=ok
// SIG undefined FUN_1460db110(void)

undefined8 FUN_1460db110(undefined8 param_1,int param_2)

{
  FUN_1460db138();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1460db138 FUN_1460db138 body=282 status=ok
// SIG undefined FUN_1460db138(void)

void FUN_1460db138(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1dedb0;
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x7f],*(undefined4 *)(param_1 + 0x80));
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x7c],*(undefined4 *)(param_1 + 0x7d));
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x79],*(undefined4 *)(param_1 + 0x7a));
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x76],*(undefined4 *)(param_1 + 0x77));
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x73],*(undefined4 *)(param_1 + 0x74));
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 1460db252 FUN_1460db252 body=103 status=ok
// SIG undefined FUN_1460db252(void)

ulonglong FUN_1460db252(longlong param_1)

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
LAB_1460db29c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1460db29c;
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



// FUNCTION 1460db2ba FUN_1460db2ba body=44 status=ok
// SIG undefined FUN_1460db2ba(void)

void FUN_1460db2ba(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_144a93f68(param_2);
    FUN_1405a798a(param_1,uVar1);
    return;
  }
  return;
}



// FUNCTION 1460db2e6 FUN_1460db2e6 body=40 status=ok
// SIG undefined FUN_1460db2e6(void)

undefined8 FUN_1460db2e6(undefined8 param_1,int param_2)

{
  FUN_1415d7e16();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1460db30e FUN_1460db30e body=369 status=ok
// SIG undefined FUN_1460db30e(void)

void FUN_1460db30e(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_1a = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x7a8))(param_1,local_19,local_1a,local_20);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerSetZoomState_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x7b0))(param_1,local_19,local_1a,local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460db484 FUN_1460db484 body=110 status=ok
// SIG undefined FUN_1460db484(void)

void FUN_1460db484(longlong param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    if (((byte)param_2 & 0xfd) == 1) {
      lVar1 = FUN_1447210f0(param_1);
      *(float *)(param_1 + 0x2564) = (float)((double)param_4 + *(double *)(lVar1 + 0x6d0));
    }
    FUN_14596b788(param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1460db4f2 FUN_1460db4f2 body=832 status=ok
// SIG undefined FUN_1460db4f2(void)

void FUN_1460db4f2(undefined8 param_1,undefined4 param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  bool bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined **local_68;
  longlong *local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_60 = param_3 + 2;
  local_68 = (undefined **)0x100000000;
  local_58 = (longlong *)&DAT_ffffffff;
  local_50 = 0;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_88 = local_58;
  plVar6 = local_88;
  local_80 = local_50;
  local_7c = local_4c;
  local_98 = local_68;
  local_90 = local_60;
  local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  bVar2 = local_88._4_4_ < (int)local_60[3];
  local_a0 = param_3;
  local_88 = plVar6;
  if (bVar2) {
    do {
      FUN_1446f470e(&local_a8,L"SHIFT",1);
      uVar3 = local_a8;
      lVar7 = (longlong)local_88._4_4_;
      lVar9 = *local_a0;
      plVar6 = (longlong *)FUN_140489acc();
      (**(code **)(*plVar6 + 0x2e8))(plVar6,&local_68,lVar7 * 0x28 + lVar9,uVar3);
      if ((&DAT_149fc1b6e)[(byte)local_50] == '\x01') {
        plVar6 = local_60;
        if (local_58 == (longlong *)0x0) goto LAB_1460db745;
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
        plVar8 = local_58;
      }
      else {
        plVar6 = (longlong *)0x0;
LAB_1460db745:
        plVar8 = (longlong *)0x0;
      }
      local_68 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[(byte)local_50])(&local_60);
      uVar4 = uStack_70;
      if (plVar6 == (longlong *)0x0) {
        if (plVar8 != (longlong *)0x0) goto LAB_1460db7be;
      }
      else {
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        lVar9 = (longlong)(int)uStack_70;
        uVar5 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
        if (uStack_70._4_4_ < uVar5) {
          FUN_1413eac7e(&local_78,uVar4 & 0xffffffff);
        }
        *(longlong **)(local_78 + lVar9 * 0x10) = plVar6;
        *(longlong **)(local_78 + 8 + lVar9 * 0x10) = plVar8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          plVar6 = plVar8 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
LAB_1460db7be:
          LOCK();
          plVar6 = plVar8 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
      local_88 = (longlong *)CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
      FUN_1449c0562(&local_98);
    } while (local_88._4_4_ < (int)local_90[3]);
  }
  local_68 = (undefined **)0x0;
  local_60 = (longlong *)((ulonglong)local_60 & 0xffffffff00000000);
  FUN_1460db834(&local_68,param_4);
  local_a0 = (longlong *)0x0;
  local_98 = (undefined **)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_1446efa72(&local_a0,0,3,0x10);
  local_98 = (undefined **)CONCAT44(local_98._4_4_,3);
  *local_a0 = (longlong)&PTR_LAB_14b5072b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_a0[2] = lVar7;
  *local_a0 = (longlong)&PTR_FUN_14b990980;
  local_a0[3] = 0;
  *(undefined4 *)(local_a0 + 4) = 0;
  FUN_1460db834(local_a0 + 3,&local_68);
  FUN_1460db8b2(param_1,param_2,&local_78,&local_a0);
  FUN_1449db362(&local_a0);
  FUN_1449db362(&local_68);
  FUN_14127b1cd(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460db834 FUN_1460db834 body=124 status=ok
// SIG undefined FUN_1460db834(void)

void FUN_1460db834(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460db8b2 FUN_1460db8b2 body=833 status=ok
// SIG undefined FUN_1460db8b2(void)

void FUN_1460db8b2(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  longlong local_a8 [4];
  longlong *local_88;
  longlong *local_80;
  undefined8 *local_78;
  longlong *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = FUN_1460dbbf4();
  if (local_c0 != 0) {
    plVar7 = (longlong *)FUN_14001cc68(0xc0);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14b9909f0;
    plVar4 = plVar7 + 2;
    memset(plVar4,0,0xb0);
    *(undefined8 *)((longlong)plVar7 + 0x3c) = 0xffffffff00000080;
    plVar7[0x10] = 0;
    plVar7[0xc] = 0;
    plVar7[0xd] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x8c) = 0xffffffff00000080;
    plVar7[0x16] = 0;
    FUN_1460dbc54(plVar7 + 0x16,param_4);
    if ((longlong)*(int *)(param_3 + 1) != 0) {
      puVar11 = (undefined8 *)*param_3;
      lVar10 = (longlong)*(int *)(param_3 + 1) << 4;
      do {
        cVar6 = (**(code **)(*(longlong *)*puVar11 + 0x28))();
        if (cVar6 != '\0') {
          uVar8 = FUN_140b6de3c();
          FUN_140b6df48(uVar8,&local_88,local_c0,*puVar11);
          if (local_88 == (longlong *)0x0) {
            FUN_1465803e2(plVar4,&local_78,puVar11,0);
            local_c8 = (longlong *)FUN_140b6de3c();
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
            }
            local_b8 = (undefined8 *)0x0;
            local_b0 = 0;
            FUN_1446efa72(&local_b8,0,3,0x10);
            local_b0 = 3;
            *local_b8 = &PTR_LAB_14b4e4d80;
            LOCK();
            UNLOCK();
            lVar9 = DAT_14c758608 + 1;
            lVar5 = DAT_14c758608 + 1;
            if (lVar9 == 0) {
              LOCK();
              UNLOCK();
              lVar9 = DAT_14c758608 + 2;
              lVar5 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar5;
            local_b8[2] = lVar9;
            *local_b8 = &PTR_FUN_14b990a10;
            local_b8[3] = plVar4;
            local_b8[4] = plVar7;
            if (plVar7 == (longlong *)0x0) {
              *(undefined4 *)(local_b8 + 5) = param_2;
              FUN_141335bfe(local_c8,local_c0,puVar11,&local_b8);
            }
            else {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
              *(undefined4 *)(local_b8 + 5) = param_2;
              FUN_141335bfe(local_c8,local_c0,puVar11,&local_b8);
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
          else {
            local_a8[0] = 0;
            local_a8[1] = 0;
            (**(code **)(*local_88 + 0x18))(local_88,local_a8 + 2,local_a8);
            local_78 = puVar11;
            local_70 = local_a8 + 2;
            FUN_148db27de(plVar7 + 0xc,local_64,&local_78);
            if (local_a8[2] != 0) {
              FUN_1400020a8();
            }
            if (local_a8[0] != 0) {
              FUN_1400020a8();
            }
          }
          plVar2 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_80 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              local_c8 = local_80;
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar1 = (int *)((longlong)local_c8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
        }
        puVar11 = puVar11 + 2;
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != 0);
    }
    if ((((int)plVar7[3] == *(int *)((longlong)plVar7 + 0x44)) && ((int)plVar7[0x17] != 0)) &&
       (plVar4 = (longlong *)plVar7[0x16], plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x60))(plVar4,param_2,plVar7 + 0xc);
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460dbbf4 FUN_1460dbbf4 body=96 status=ok
// SIG undefined FUN_1460dbbf4(void)

longlong FUN_1460dbbf4(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = FUN_144729dda(param_1 + 0x28);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(param_1 + 0x28);
    if ((longlong)*(int *)(lVar3 + 0x40) != 0) {
      lVar4 = 0;
      while ((lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + lVar4), lVar1 == 0 ||
             (*(int *)(lVar1 + 0xe0) != param_2))) {
        lVar4 = lVar4 + 8;
        if ((longlong)*(int *)(lVar3 + 0x40) * 8 == lVar4) {
          return 0;
        }
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1460dbc54 FUN_1460dbc54 body=124 status=ok
// SIG undefined FUN_1460dbc54(void)

void FUN_1460dbc54(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460dbcd2 FUN_1460dbcd2 body=21 status=ok
// SIG undefined FUN_1460dbcd2(void)

undefined8 FUN_1460dbcd2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1460dbce8 FUN_1460dbce8 body=312 status=ok
// SIG undefined FUN_1460dbce8(void)

void FUN_1460dbce8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_145a861f2();
  lVar5 = plVar3[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar5 = plVar3[0x22];
    if (lVar5 == 0) goto LAB_1460dbda0;
  }
  if (0 < *(int *)(lVar5 + 0x40)) {
    FUN_14050fd64();
    lVar4 = FUN_14050fd64();
    local_48 = 0;
    uStack_40 = 0;
    FUN_1460dbe22(lVar4 + 0x1e8,&local_30,lVar5 + 0x38);
    plVar3 = local_28;
    if ((undefined8 *)(param_1 + 8) != &local_30) {
      *(undefined8 *)(param_1 + 8) = local_30;
      local_30 = 0;
      plVar2 = *(longlong **)(param_1 + 0x10);
      if (local_28 != plVar2) {
        local_28 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x10) = plVar3;
        if (plVar2 != (longlong *)0x0) {
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
      }
    }
    plVar3 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_28 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_1449db362(&local_48);
  }
LAB_1460dbda0:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460dbe22 FUN_1460dbe22 body=310 status=ok
// SIG undefined FUN_1460dbe22(void)

undefined8
FUN_1460dbe22(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80;
  undefined1 local_78;
  longlong *local_70;
  longlong local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  local_40 = 0;
  local_58 = *param_4;
  *param_4 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,(int)param_4[1]);
  *(undefined4 *)(param_4 + 1) = 0;
  FUN_144a450dc(&local_48,&local_58);
  FUN_1449db362(&local_58);
  FUN_140d01986();
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  local_60 = iVar1;
  if (iVar1 == 0) {
    local_5c = 0;
  }
  else {
    FUN_140a1e386(&local_68,iVar1,0);
    FUN_140a1e307(local_68,uVar2,iVar1);
  }
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = &local_58;
  FUN_140421d62(param_1,param_2,&local_68,&local_48);
  FUN_140861e20(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460dbf5a FUN_1460dbf5a body=158 status=ok
// SIG undefined FUN_1460dbf5a(void)

longlong * FUN_1460dbf5a(undefined8 param_1,longlong *param_2)

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
  plVar4 = (longlong *)FUN_1460dbffb();
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1460dc09c(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460dbffb FUN_1460dbffb body=161 status=ok
// SIG undefined FUN_1460dbffb(void)

undefined8 * FUN_1460dbffb(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b9a0660;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[2] = &PTR_LAB_14b42ca20;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 2;
  FUN_144a63cba(puVar1 + 8);
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[2] = &PTR_FUN_14b9a0680;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  return puVar1;
}



// FUNCTION 1460dc09c FUN_1460dc09c body=162 status=ok
// SIG undefined FUN_1460dc09c(void)

void FUN_1460dc09c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1460dc0db;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1460dc0db;
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
LAB_1460dc0db:
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
                    /* WARNING: Could not recover jumptable at 0x0001460dc13a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1460dc13e FUN_1460dc13e body=26 status=ok
// SIG undefined FUN_1460dc13e(void)

void FUN_1460dc13e(undefined8 param_1)

{
  FUN_140e0bb56();
  FUN_1460dc158(param_1);
  return;
}



// FUNCTION 1460dc158 FUN_1460dc158 body=516 status=ok
// SIG undefined FUN_1460dc158(void)

void FUN_1460dc158(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)(*(longlong *)(param_1 + 0x2e8) + 0x698) == '\0') {
    if (*(float *)(*(longlong *)(param_1 + 0x2e8) + 0x690) <= 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_e8);
    }
    puVar1 = (undefined8 *)(param_1 + 0x310);
    if (*(longlong *)(param_1 + 0x310) != 0) {
      uVar4 = FUN_14479d2ce(param_1 + 0x288);
      uVar4 = FUN_1401b4c98(uVar4);
      lVar5 = FUN_144a61814(uVar4,puVar1);
      if (lVar5 != 0) {
        FUN_1405a424c(uVar4,*puVar1);
      }
      *puVar1 = 0;
    }
    uVar4 = FUN_14479d2ce(param_1 + 0x288);
    uVar4 = FUN_1401b4c98(uVar4);
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x2e8) + 0x690);
    uVar6 = FUN_14479d2ce(param_1 + 0x288);
    local_c0 = (undefined8 *)0x0;
    local_b8 = 0;
    FUN_1446efa72(&local_c0,0,3,0x10);
    puVar3 = local_c0;
    local_b8 = 3;
    *local_c0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_c0[2] = lVar7;
    *local_c0 = &PTR_FUN_14b976210;
    local_c0[3] = 0;
    FUN_14485c47a(local_c0 + 3,uVar6);
    puVar3[4] = param_1;
    local_a8 = 0;
    local_a0 = 0;
    FUN_14487d8d8(&local_a8,&local_c0);
    local_68 = 1;
    local_c8 = local_b0;
    local_b0[0] = 0;
    local_ac = 0xbf800000;
    FUN_1406f4044(uVar4,puVar1,&local_a8,uVar2);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
    FUN_1449db362(&local_c0);
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460dc37e FUN_1460dc37e body=2902 status=ok
// SIG undefined FUN_1460dc37e(void)

void FUN_1460dc37e(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  double *pdVar14;
  longlong lVar15;
  undefined8 uVar16;
  byte bVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  byte *pbVar20;
  longlong lVar21;
  undefined8 ****ppppuVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined1 local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d0;
  undefined1 local_1c8;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong *local_198;
  double local_190;
  double local_188;
  double local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  ulonglong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  longlong local_100;
  longlong *local_f8;
  undefined8 ***local_f0;
  undefined4 local_e8;
  ushort local_d8;
  byte local_d0;
  ulonglong local_c8;
  ulonglong uStack_c0;
  int local_b8;
  undefined8 local_b0;
  undefined4 local_a0;
  byte local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar15 = param_1 + 0x288;
  cVar4 = FUN_144729dda(lVar15);
  if (cVar4 == '\0') goto LAB_1460dcbfa;
  cVar4 = FUN_144729dda(param_1 + 0x298);
  if (cVar4 == '\0') goto LAB_1460dcbfa;
  local_1b0 = param_1 + 0x290;
  cVar4 = FUN_144729dda();
  if ((((cVar4 == '\0') || (plVar6 = (longlong *)FUN_14479d2ce(lVar15), plVar6 == (longlong *)0x0))
      || (plVar7 = (longlong *)FUN_14479d2ce(param_1 + 0x298), plVar7 == (longlong *)0x0)) ||
     (lVar8 = FUN_14082ce84(*(longlong *)(param_1 + 0x2e8) + 0x4d0), lVar8 == 0))
  goto LAB_1460dcbfa;
  FUN_1405fab15(&local_100);
  *(undefined2 *)(local_100 + 0x279) = 0x100;
  lVar12 = *(longlong *)(param_1 + 0x2e8);
  local_1b8 = lVar15;
  uVar9 = FUN_14479d2ce(lVar15);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_a0 = 0;
  FUN_1456bb102(&local_c8,uVar9);
  FUN_1448729ea(lVar12 + 0x4e8,&local_f0,&local_c8);
  fVar23 = (float)FUN_144a7ecd0(&local_f0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d0 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar22 = &local_f0;
    if (0x18 < local_d8) {
      ppppuVar22 = (undefined8 ****)local_f0;
    }
    (*pcVar2)(ppppuVar22);
  }
  if (0x18 < local_d8) {
    FUN_1400020a8(local_f0);
  }
  FUN_144a5ac3a(&local_c8);
  if (0.0 < fVar23) {
    *(float *)(local_100 + 8) = fVar23;
    *(undefined1 *)(local_100 + 0xc) = 1;
  }
  lVar15 = *(longlong *)(param_1 + 0x2e8);
  uVar9 = FUN_14479d2ce(local_1b8);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_a0 = 0;
  FUN_1456bb102(&local_c8,uVar9);
  FUN_1448729ea(lVar15 + 0x5f0,&local_f0,&local_c8);
  fVar23 = (float)FUN_144a7ecd0(&local_f0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d0 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar22 = &local_f0;
    if (0x18 < local_d8) {
      ppppuVar22 = (undefined8 ****)local_f0;
    }
    (*pcVar2)(ppppuVar22);
  }
  if (0x18 < local_d8) {
    FUN_1400020a8(local_f0);
  }
  FUN_144a5ac3a(&local_c8);
  lVar15 = local_1b8;
  if (0.0 < fVar23) {
    *(float *)(local_100 + 0x78) = fVar23;
    *(undefined1 *)(local_100 + 0x7c) = 1;
  }
  if ((*(longlong *)(param_1 + 0x2f8) == 0) || (0xfffffffd < *(int *)(param_1 + 0x300) - 1U)) {
    if (*(char *)(lVar8 + 0x34) == '\x01') {
      uVar9 = FUN_1403ec9c0();
      plVar10 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar9);
      if (plVar10 != (longlong *)0x0) {
        uVar9 = FUN_1403ec9c0();
        plVar11 = (longlong *)FUN_144718840(plVar10,uVar9);
        if (plVar11 != (longlong *)0x0 && plVar10 != plVar11) {
          uVar9 = (**(code **)(*plVar11 + 0x30))(plVar11);
          goto LAB_1460dc632;
        }
      }
      uVar9 = FUN_1406d192e();
      plVar10 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar9);
      if (plVar10 != (longlong *)0x0) {
        uVar9 = FUN_1406d192e();
        plVar11 = (longlong *)FUN_144718840(plVar10,uVar9);
        if ((plVar10 != plVar11) && (plVar11 != (longlong *)0x0)) {
          uVar9 = (**(code **)(*plVar11 + 0x18))(plVar11);
          goto LAB_1460dc632;
        }
      }
    }
  }
  else {
    uVar9 = FUN_1405faa04(param_1 + 0x2f8);
LAB_1460dc632:
    *(undefined8 *)(local_100 + 0x10) = uVar9;
  }
  lVar12 = *(longlong *)(param_1 + 0x2e8);
  if (0 < *(int *)(lVar12 + 0x588)) {
    plVar10 = *(longlong **)(lVar12 + 0x580);
    if (*(longlong **)(lVar12 + 0x580) == (longlong *)0x0) {
      plVar10 = (longlong *)(lVar12 + 0x550);
    }
    if ((*plVar10 != 0) && ((int)plVar10[1] - 1U < 0xfffffffe)) {
      FUN_14118c70e(local_100 + 0x18);
    }
  }
  lVar12 = FUN_144a7cbb2();
  if ((*(int *)(plVar7[2] + 0x38) < *(int *)(lVar12 + 0x38)) ||
     (plVar10 = plVar7,
     *(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) !=
     lVar12 + 0x30)) {
    plVar10 = (longlong *)0x0;
  }
  lVar12 = *(longlong *)(param_1 + 0x2e8);
  if ((*(longlong *)(local_100 + 0x290) != *(longlong *)(lVar12 + 0x590)) ||
     (*(int *)(local_100 + 0x298) != *(int *)(lVar12 + 0x598))) {
    *(longlong *)(local_100 + 0x290) = *(longlong *)(lVar12 + 0x590);
    *(undefined4 *)(local_100 + 0x298) = *(undefined4 *)(lVar12 + 0x598);
    *(undefined8 *)(local_100 + 0x2a0) = 0;
    lVar12 = *(longlong *)(param_1 + 0x2e8);
  }
  if (((*(longlong *)(lVar12 + 0x6a0) == 0) || (plVar10 == (longlong *)0x0)) ||
     (0xfffffffd < *(int *)(lVar12 + 0x6a8) - 1U)) {
    bVar17 = *(byte *)(local_100 + 0x278);
    pbVar20 = (byte *)(local_100 + 0x278);
LAB_1460dc745:
    bVar5 = 0;
  }
  else {
    cVar4 = (**(code **)(*plVar10 + 0x798))();
    bVar17 = *(byte *)(local_100 + 0x278);
    pbVar20 = (byte *)(local_100 + 0x278);
    if (cVar4 == '\0') goto LAB_1460dc745;
    bVar5 = 0x20;
  }
  *pbVar20 = bVar17 & 0xdf | bVar5;
  lVar12 = *(longlong *)(param_1 + 0x2e8);
  uVar9 = FUN_14479d2ce(lVar15);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_a0 = 0;
  FUN_1456bb102(&local_c8,uVar9);
  fVar24 = (float)FUN_140a8b8c6(lVar12 + 0x5a8,&local_c8);
  FUN_144a5ac3a(&local_c8);
  if (0.0001 < ABS(fVar24)) {
    *(float *)(local_100 + 0x1c0) = fVar24;
    *(undefined1 *)(local_100 + 0x1c4) = 1;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x2e8) + 0x699) == '\x01') {
    *(byte *)(local_100 + 0x278) = *(byte *)(local_100 + 0x278) | 2;
  }
  if (*(longlong *)(local_100 + 0x10) == 0) {
    puVar19 = &DAT_14c9485f0;
  }
  else {
    puVar18 = *(undefined4 **)(*(longlong *)(local_100 + 0x10) + 8);
    puVar19 = &DAT_14c9485f0;
    if (puVar18 != (undefined4 *)0x0) {
      puVar19 = puVar18;
    }
  }
  FUN_1447325ac(puVar19,&local_120,1);
  local_118 = local_120;
  local_110 = 0x3002;
  local_108 = 0;
  FUN_140e0bd1c(param_1);
  if (((*(byte *)(local_100 + 0x278) & 0x20) != 0) &&
     (lVar12 = FUN_140b51ce6(*(longlong *)(param_1 + 0x2e8) + 0x6a0), lVar12 != 0)) {
    local_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    if (*(longlong *)(local_100 + 0x10) != 0) {
      puVar19 = *(undefined4 **)(*(longlong *)(local_100 + 0x10) + 8);
      puVar18 = &DAT_14c9485f0;
      if (puVar19 != (undefined4 *)0x0) {
        puVar18 = puVar19;
      }
      FUN_1447325ac(puVar18,&local_128,1);
      if ((uStack_c0 != local_128) || (local_b8 != 0x3002)) {
        uStack_c0 = local_128;
        local_b8 = 0x3002;
        local_b0 = 0;
      }
    }
    local_f0 = (undefined8 ****)0x0;
    local_e8 = 0;
    lVar12 = FUN_1415d7f30(lVar12,&local_c8,&local_f0,0);
    if (lVar12 != 0) {
      local_138 = 0;
      uStack_130 = 0;
      FUN_140fa06bf(&local_f0);
      if ((0.0 < fVar23) && (*(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x6d0) != 0)) {
        puVar13 = (undefined8 *)FUN_1460dced6(&local_138);
        *(undefined1 *)(puVar13 + 1) = 1;
        *(float *)(puVar13 + 2) = fVar23;
        *puVar13 = *(undefined8 *)(*(longlong *)(param_1 + 0x2e8) + 0x6d0);
      }
      lVar21 = plVar7[0x39];
      if (lVar21 == 0) {
        pdVar14 = (double *)&DAT_14c8464e0;
        uVar25 = (undefined4)DAT_14c8464f0;
        uVar26 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar25 = (undefined4)*(undefined8 *)(lVar21 + 0x270);
        uVar26 = (undefined4)((ulonglong)*(undefined8 *)(lVar21 + 0x270) >> 0x20);
        pdVar14 = (double *)(lVar21 + 0x260);
      }
      lVar21 = *(longlong *)(param_1 + 0x2e8);
      local_180 = (double)CONCAT44(uVar26,uVar25) + *(double *)(lVar21 + 0x6c8);
      local_188 = pdVar14[1] + *(double *)(lVar21 + 0x6c0);
      local_190 = *pdVar14 + *(double *)(lVar21 + 0x6b8);
      local_1f0 = &local_158;
      local_148 = DAT_14c846520;
      local_158 = DAT_14c846510;
      uStack_150 = DAT_14c846518;
      local_1f8 = (undefined8 *)&local_178;
      local_168 = DAT_14c846508;
      local_178 = (undefined4)DAT_14c8464f8;
      uStack_174 = DAT_14c8464f8._4_4_;
      uStack_170 = (undefined4)DAT_14c846500;
      uStack_16c = DAT_14c846500._4_4_;
      local_1c8 = 2;
      local_1d0 = 2;
      local_1d8 = 1;
      local_1e8 = 1;
      local_1e0 = 0;
      FUN_1413d76a4(plVar7,lVar12,&local_138);
      if (local_138 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (*(char *)(*(longlong *)(param_1 + 0x2e8) + 0x698) == '\0') {
    FUN_14485c47a(local_100 + 0x1d8);
  }
  lVar12 = local_100;
  if ((*(longlong *)(lVar8 + 0x90) != 0) && ((longlong)*(int *)(lVar8 + 0xa0) != 0)) {
    lVar21 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar8 + 0x98) + lVar21) != 0) {
        (**(code **)(*(longlong *)(local_100 + 0x58) + 0x20))(local_100 + 0x58,0);
        *(undefined8 *)(lVar12 + 0x60) = *(undefined8 *)(lVar8 + 0x90);
        FUN_1406022fe(lVar12 + 0x68,lVar8 + 0x98);
        break;
      }
      lVar21 = lVar21 + 8;
    } while ((longlong)*(int *)(lVar8 + 0xa0) * 8 != lVar21);
  }
  *(undefined2 *)(local_100 + 0x2cc) = 0x101;
  local_1a0 = local_100;
  local_198 = local_f8;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
    UNLOCK();
  }
  plVar10 = (longlong *)0x0;
  if (*(char *)(*(longlong *)(param_1 + 0x2e8) + 0x699) != '\0') {
    plVar10 = plVar7;
  }
  local_1f8 = (undefined8 *)0x0;
  FUN_1405fd19a(plVar6,lVar8,plVar10,&local_1a0);
  lVar8 = *(longlong *)(param_1 + 0x2e8);
  uVar9 = FUN_14479d2ce(lVar15);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_a0 = 0;
  FUN_1456bb102(&local_c8,uVar9);
  FUN_1448729ea(lVar8 + 0x640,&local_f0,&local_c8);
  fVar23 = (float)FUN_144a7ecd0(&local_f0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d0 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar22 = &local_f0;
    if (0x18 < local_d8) {
      ppppuVar22 = (undefined8 ****)local_f0;
    }
    (*pcVar2)(ppppuVar22);
  }
  if (0x18 < local_d8) {
    FUN_1400020a8(local_f0);
  }
  FUN_144a5ac3a(&local_c8);
  if (1e-08 < fVar23) {
    puVar13 = (undefined8 *)(param_1 + 0x318);
    if (*(longlong *)(param_1 + 0x318) != 0) {
      uVar9 = FUN_14479d2ce(local_1b0);
      uVar9 = FUN_1401b4c98(uVar9);
      lVar15 = FUN_144a61814(uVar9,puVar13);
      if (lVar15 != 0) {
        FUN_1405a424c(uVar9,*puVar13);
      }
      *puVar13 = 0;
    }
    if (fVar23 < *(float *)(param_1 + 800) || fVar23 == *(float *)(param_1 + 800)) {
      *(undefined4 *)(param_1 + 800) = 0;
    }
    else {
      uVar9 = FUN_14479d2ce(local_1b0);
      uVar9 = FUN_1401b4c98(uVar9);
      uVar25 = *(undefined4 *)(*(longlong *)(param_1 + 0x2e8) + 0x694);
      local_1a8 = param_1;
      uVar16 = FUN_14479d2ce(local_1b8);
      FUN_144168b74(&local_f0,uVar16,&local_1a8);
      local_c8 = 0;
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      FUN_14487d8d8(&local_c8,&local_f0);
      local_88 = 1;
      local_1f8 = &local_138;
      uVar3 = (uint)local_138;
      local_138 = CONCAT44(0xbf800000,uVar3 & 0xffff0000);
      FUN_1406f4044(uVar9,puVar13,&local_c8,uVar25);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_88])(&local_c8);
      FUN_1449db362(&local_f0);
    }
  }
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_f8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar1 = (int *)((longlong)local_f8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_f8 + 0x10))(local_f8);
      }
    }
  }
LAB_1460dcbfa:
  if ((local_70 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460dced6 FUN_1460dced6 body=64 status=ok
// SIG undefined FUN_1460dced6(void)

longlong FUN_1460dced6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1405bc420(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x58 + *param_1;
  FUN_145818344(lVar2,1);
  return lVar2;
}



// FUNCTION 1460dcf22 FUN_1460dcf22 body=311 status=ok
// SIG undefined FUN_1460dcf22(void)

undefined8 * FUN_1460dcf22(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a792580;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"AudioComponent0",1);
  uVar2 = FUN_14117d122();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  *(byte *)(lVar3 + 0x9e) = *(byte *)(lVar3 + 0x9e) | 8;
  *(byte *)(param_1[0x72] + 0x490) = *(byte *)(param_1[0x72] + 0x490) | 2;
  *(byte *)(param_1[0x72] + 0x490) = *(byte *)(param_1[0x72] + 0x490) | 4;
  *(undefined1 *)(param_1[0x72] + 0x1fb) = 2;
  lVar3 = param_1[0x72];
  if ((bVar1 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_1[0x72];
    }
  }
  param_1[0x39] = lVar3;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) & 0xf7;
  FUN_1405bab3a(param_1,1);
  FUN_1403121a6(param_1,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460dd05a FUN_1460dd05a body=507 status=ok
// SIG undefined FUN_1460dd05a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460dd05a(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cbc5400 = 0;
  FUN_1446ddc76(&DAT_14cbc5404,"Carry",1);
  _DAT_14cbc5410 = 0;
  _DAT_14cbc5418 = 0;
  _DAT_14cbc5420 = 0;
  DAT_14cbc5428 = (void *)0x0;
  _DAT_14cbc5430 = 0;
  _DAT_14cbc5438 = FUN_145cc3664;
  DAT_14cbc5440 = *param_1;
  DAT_14cbc5450 = param_1[2];
  param_1[2] = 0;
  DAT_14cbc5460._0_4_ = (undefined4)param_1[4];
  DAT_14cbc5460._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbc5468 = (undefined4)param_1[5];
  uRam000000014cbc546c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbc5470 = (undefined4)param_1[6];
  uRam000000014cbc5474 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbc5478 = (undefined4)param_1[7];
  uRam000000014cbc547c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbc5440 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cbc5410 = 0;
  _DAT_14cbc5418 = local_68;
  _DAT_14cbc5420 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbc5430 = CONCAT44(DAT_14cbc5434,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbc5434 == 0) {
    _DAT_14cbc5430 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbc5428,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbc5428,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbc5400) && ((DAT_14cbc5390 == (int *)0x0 || (*DAT_14cbc5390 < DAT_14cbc5400)))) {
    DAT_14cbc5390 = &DAT_14cbc5400;
  }
  FUN_1460dd256();
  local_30 = &local_70;
  local_70 = &DAT_14cbc5400;
  local_38 = &DAT_14cbc5404;
  FUN_1460dd2ee(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460dd256 FUN_1460dd256 body=152 status=ok
// SIG undefined FUN_1460dd256(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460dd256(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc53e8) {
    FUN_144b3d300(&DAT_14cbc53e8);
    if (DAT_14cbc53e8 == -1) {
      DAT_14cbc53b8 = 0;
      DAT_14cbc53c0 = 0;
      DAT_14cbc5398 = 0;
      _DAT_14cbc53a0 = 0;
      _DAT_14cbc53c4 = 0xffffffff00000080;
      DAT_14cbc53cc = 0;
      DAT_14cbc53d8 = 0;
      DAT_14cbc53e0 = 0;
      atexit(FUN_1440d5491);
      _Init_thread_footer(&DAT_14cbc53e8);
      return;
    }
  }
  return;
}



// FUNCTION 1460dd2ee FUN_1460dd2ee body=338 status=ok
// SIG undefined FUN_1460dd2ee(void)

undefined4 * FUN_1460dd2ee(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460dd4d4(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460dd442(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbc53a0 - DAT_14cbc53cc;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbc53e0)) {
      uVar10 = DAT_14cbc53e0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbc53d8;
      if (DAT_14cbc53d8 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc53d0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc53e0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbc53d8;
      if (DAT_14cbc53d8 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc53d0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc53e0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbc53e0 = iVar9;
      FUN_1460dd5e2();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460dd442 FUN_1460dd442 body=145 status=ok
// SIG undefined FUN_1460dd442(void)

undefined8 FUN_1460dd442(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbc53a0 - DAT_14cbc53cc != 1) && (DAT_14cbc53a0 != DAT_14cbc53cc)) {
    puVar6 = &DAT_14cbc53d0;
    if (DAT_14cbc53d8 != (undefined *)0x0) {
      puVar6 = DAT_14cbc53d8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbc53e0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbc5398 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9d3c4(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460dd4d4 FUN_1460dd4d4 body=270 status=ok
// SIG undefined FUN_1460dd4d4(void)

int * FUN_1460dd4d4(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbc53c8;
  iVar3 = DAT_14cbc53a0;
  if (DAT_14cbc53cc == 0) {
    iVar2 = DAT_14cbc53a0 + 1;
    bVar7 = DAT_14cbc53a4 == DAT_14cbc53a0;
    DAT_14cbc53a0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbc5398,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbc53a8,1);
    puVar4 = DAT_14cbc53b8;
    if (DAT_14cbc53b8 == (undefined *)0x0) {
      puVar4 = &DAT_14cbc53a8;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cbc53c8;
    DAT_14cbc53c8 = *(int *)(DAT_14cbc5398 + 4 + lVar6 * 0x18);
    DAT_14cbc53cc = DAT_14cbc53cc + -1;
    if (DAT_14cbc53cc != 0) {
      *(undefined4 *)(DAT_14cbc5398 + (longlong)DAT_14cbc53c8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbc53a8;
  if (DAT_14cbc53b8 != (undefined *)0x0) {
    puVar4 = DAT_14cbc53b8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbc5398;
  return param_1;
}



// FUNCTION 1460dd5e2 FUN_1460dd5e2 body=523 status=ok
// SIG undefined FUN_1460dd5e2(void)

void FUN_1460dd5e2(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbc53d8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbc53d8,0,0,4);
  }
  uVar3 = DAT_14cbc53e0;
  uVar2 = local_50;
  if (DAT_14cbc53e0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbc53d0,0,DAT_14cbc53e0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbc53d8;
        if (DAT_14cbc53d8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc53d0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbc53e0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbc53a8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbc53c0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbc5398;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cbc53e0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbc53d8;
        if (DAT_14cbc53d8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc53d0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbc53e0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbc53d8;
        if (DAT_14cbc53d8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc53d0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbc53e0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460dd7ee FUN_1460dd7ee body=68 status=ok
// SIG undefined FUN_1460dd7ee(void)

void FUN_1460dd7ee(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x1d0);
  memset(_Dst,0,0x1d0);
  FUN_1460dd832(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 1460dd832 FUN_1460dd832 body=255 status=ok
// SIG undefined FUN_1460dd832(void)

undefined8 * FUN_1460dd832(undefined8 *param_1)

{
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8c10a0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x42c8000042c80000;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x42c8000042c80000;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x42c8000042c80000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 299) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined2 *)((longlong)param_1 + 0x159) = 0x101;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x193) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19b) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0x3fe0000000000000;
  param_1[0x38] = 0x3fe0000000000000;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  return param_1;
}



// FUNCTION 1460dd932 FUN_1460dd932 body=186 status=ok
// SIG undefined FUN_1460dd932(void)

undefined8 * FUN_1460dd932(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bc019b0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x41) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x20c) = 2;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 1;
  FUN_1460dd9ec(param_1 + 0x3e);
  puVar1 = (undefined8 *)param_1[0x3e];
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x3ff00000;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0x3ff0000000000000;
  puVar1[0xb] = 0x3ff0000000000000;
  puVar1[0xc] = 0x3ff0000000000000;
  puVar1[0xd] = 0;
  return param_1;
}



// FUNCTION 1460dd9ec FUN_1460dd9ec body=137 status=ok
// SIG undefined FUN_1460dd9ec(void)

void FUN_1460dd9ec(longlong param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = (ulonglong)uVar1;
      }
    }
    else {
      uVar3 = (uVar3 * 3 >> 3) + uVar3 + 0x10;
    }
    uVar3 = FUN_144a3809e(uVar3 * 0x70,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3 >> 4;
    iVar4 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar4) {
      iVar5 = iVar4;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,0,iVar5,0x70,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar3);
}



// FUNCTION 1460dda7e FUN_1460dda7e body=882 status=ok
// SIG undefined FUN_1460dda7e(void)

undefined8 * FUN_1460dda7e(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145bfca82();
  *param_1 = &PTR_FUN_14bc90980;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  FUN_14020fad6(param_1 + 0x5a,L"BuildReversedIndexBuffer");
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  FUN_14020fad6(param_1 + 0x5c,L"GenerateLightmapUVs");
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  FUN_14020fad6(param_1 + 0x5e,L"GenerateDistanceFieldAsIfTwoSided");
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  FUN_14020fad6(param_1 + 0x60,L"SupportFaceRemap");
  param_1[0x62] = 0;
  param_1[99] = 0;
  FUN_14020fad6(param_1 + 0x62,L"MinLightmapResolution");
  param_1[100] = 0;
  param_1[0x65] = 0;
  FUN_14020fad6(param_1 + 100,L"SrcLightmapIndex");
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  FUN_14020fad6(param_1 + 0x66,L"DstLightmapIndex");
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  FUN_14020fad6(param_1 + 0x68,L"BuildScale3D");
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  FUN_14020fad6(param_1 + 0x6a,L"DistanceFieldResolutionScale");
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  FUN_14020fad6(param_1 + 0x6c,L"DistanceFieldReplacementMesh");
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  FUN_14020fad6(param_1 + 0x6e,L"MaxLumenMeshCards");
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  FUN_14020fad6(param_1 + 0x70,L"BuildNanite");
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  FUN_14020fad6(param_1 + 0x72,L"AutoComputeLODScreenSizes");
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  FUN_1460dddf2();
  pvVar5 = DAT_14cc10270;
  local_60 = (void *)0x0;
  lVar6 = (longlong)DAT_14cc10278;
  local_58 = DAT_14cc10278;
  if (lVar6 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,DAT_14cc10278,0);
    memcpy(local_60,pvVar5,lVar6 * 2);
  }
  local_70 = param_1[5];
  plVar4 = (longlong *)param_1[6];
  if (plVar4 == (longlong *)0x0) {
    local_68 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_68 = plVar4;
  }
  FUN_1415d7f3a(param_1 + 0x74,&local_70,&local_60);
  plVar2 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
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
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1460dde6c();
  pvVar5 = DAT_14cc10288;
  local_60 = (void *)0x0;
  lVar6 = (longlong)DAT_14cc10290;
  local_58 = DAT_14cc10290;
  if (lVar6 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,DAT_14cc10290,0);
    memcpy(local_60,pvVar5,lVar6 * 2);
  }
  FUN_1410835a0(param_1 + 0x78,param_1 + 5,&local_60);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460dddf2 FUN_1460dddf2 body=121 status=ok
// SIG undefined FUN_1460dddf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460dddf2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc10280) {
    FUN_144b3d300(&DAT_14cc10280);
    if (DAT_14cc10280 == -1) {
      DAT_14cc10270 = 0;
      _DAT_14cc10278 = 0;
      FUN_14020fad6(&DAT_14cc10270,L"__LODScreenSize__");
      atexit((_func_5014 *)&LAB_1444ddb80);
      _Init_thread_footer(&DAT_14cc10280);
      return;
    }
  }
  return;
}



// FUNCTION 1460dde6c FUN_1460dde6c body=121 status=ok
// SIG undefined FUN_1460dde6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460dde6c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc10298) {
    FUN_144b3d300(&DAT_14cc10298);
    if (DAT_14cc10298 == -1) {
      DAT_14cc10288 = 0;
      _DAT_14cc10290 = 0;
      FUN_14020fad6(&DAT_14cc10288,L"SocketUids");
      atexit((_func_5014 *)&LAB_1444ddb91);
      _Init_thread_footer(&DAT_14cc10298);
      return;
    }
  }
  return;
}



// FUNCTION 1460ddee6 FUN_1460ddee6 body=507 status=ok
// SIG undefined FUN_1460ddee6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ddee6(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14c9a6480 = 0;
  FUN_1446ddc76(&DAT_14c9a6484,"attribute",1);
  _DAT_14c9a6490 = 0;
  _DAT_14c9a6498 = 0;
  _DAT_14c9a64a0 = 0;
  DAT_14c9a64a8 = (void *)0x0;
  _DAT_14c9a64b0 = 0;
  _DAT_14c9a64b8 = FUN_1470dbc6e;
  DAT_14c9a64c0 = *param_1;
  DAT_14c9a64d0 = param_1[2];
  param_1[2] = 0;
  DAT_14c9a64e0._0_4_ = (undefined4)param_1[4];
  DAT_14c9a64e0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014c9a64e8 = (undefined4)param_1[5];
  uRam000000014c9a64ec = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14c9a64f0 = (undefined4)param_1[6];
  uRam000000014c9a64f4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014c9a64f8 = (undefined4)param_1[7];
  uRam000000014c9a64fc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14c9a64c0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14c9a6490 = 0;
  _DAT_14c9a6498 = local_68;
  _DAT_14c9a64a0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14c9a64b0 = CONCAT44(DAT_14c9a64b4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14c9a64b4 == 0) {
    _DAT_14c9a64b0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14c9a64a8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14c9a64a8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14c9a6480) && ((DAT_14c9a6410 == (int *)0x0 || (*DAT_14c9a6410 < DAT_14c9a6480)))) {
    DAT_14c9a6410 = &DAT_14c9a6480;
  }
  FUN_1460de0e2();
  local_30 = &local_70;
  local_70 = &DAT_14c9a6480;
  local_38 = &DAT_14c9a6484;
  FUN_1460de17c(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460de0e2 FUN_1460de0e2 body=153 status=ok
// SIG undefined FUN_1460de0e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460de0e2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a6468) {
    FUN_144b3d300(&DAT_14c9a6468);
    if (DAT_14c9a6468 == -1) {
      DAT_14c9a6438 = 0;
      DAT_14c9a6440 = 0;
      DAT_14c9a6418 = 0;
      _DAT_14c9a6420 = 0;
      _DAT_14c9a6444 = 0xffffffff00000080;
      DAT_14c9a644c = 0;
      DAT_14c9a6458 = 0;
      DAT_14c9a6460 = 0;
      atexit(FUN_142b38a9e);
      _Init_thread_footer(&DAT_14c9a6468);
      return;
    }
  }
  return;
}



// FUNCTION 1460de17c FUN_1460de17c body=338 status=ok
// SIG undefined FUN_1460de17c(void)

undefined4 * FUN_1460de17c(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460de362(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460de2d0(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14c9a6420 - DAT_14c9a644c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14c9a6460)) {
      uVar10 = DAT_14c9a6460 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14c9a6458;
      if (DAT_14c9a6458 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a6450;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a6460 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14c9a6458;
      if (DAT_14c9a6458 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a6450;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a6460 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14c9a6460 = iVar9;
      FUN_1460de470();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460de2d0 FUN_1460de2d0 body=145 status=ok
// SIG undefined FUN_1460de2d0(void)

undefined8 FUN_1460de2d0(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14c9a6420 - DAT_14c9a644c != 1) && (DAT_14c9a6420 != DAT_14c9a644c)) {
    puVar6 = &DAT_14c9a6450;
    if (DAT_14c9a6458 != (undefined *)0x0) {
      puVar6 = DAT_14c9a6458;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c9a6460 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c9a6418 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d8f2e8(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460de362 FUN_1460de362 body=270 status=ok
// SIG undefined FUN_1460de362(void)

int * FUN_1460de362(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c9a6448;
  iVar3 = DAT_14c9a6420;
  if (DAT_14c9a644c == 0) {
    iVar2 = DAT_14c9a6420 + 1;
    bVar7 = DAT_14c9a6424 == DAT_14c9a6420;
    DAT_14c9a6420 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c9a6418,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c9a6428,1);
    puVar4 = DAT_14c9a6438;
    if (DAT_14c9a6438 == (undefined *)0x0) {
      puVar4 = &DAT_14c9a6428;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14c9a6448;
    DAT_14c9a6448 = *(int *)(DAT_14c9a6418 + 4 + lVar6 * 0x18);
    DAT_14c9a644c = DAT_14c9a644c + -1;
    if (DAT_14c9a644c != 0) {
      *(undefined4 *)(DAT_14c9a6418 + (longlong)DAT_14c9a6448 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c9a6428;
  if (DAT_14c9a6438 != (undefined *)0x0) {
    puVar4 = DAT_14c9a6438;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c9a6418;
  return param_1;
}



// FUNCTION 1460de470 FUN_1460de470 body=523 status=ok
// SIG undefined FUN_1460de470(void)

void FUN_1460de470(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a6458 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9a6458,0,0,4);
  }
  uVar3 = DAT_14c9a6460;
  uVar2 = local_50;
  if (DAT_14c9a6460 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c9a6450,0,DAT_14c9a6460,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14c9a6458;
        if (DAT_14c9a6458 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a6450;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14c9a6460 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c9a6428;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c9a6440 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c9a6418;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c9a6460 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14c9a6458;
        if (DAT_14c9a6458 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a6450;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14c9a6460 - 1U & uVar9) * 4);
        puVar6 = DAT_14c9a6458;
        if (DAT_14c9a6458 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a6450;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14c9a6460 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460de67c FUN_1460de67c body=507 status=ok
// SIG undefined FUN_1460de67c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460de67c(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14c9a74d0 = 0;
  FUN_1446ddc76(&DAT_14c9a74d4,"gbx_ue_data_table",1);
  _DAT_14c9a74e0 = 0;
  _DAT_14c9a74e8 = 0;
  _DAT_14c9a74f0 = 0;
  DAT_14c9a74f8 = (void *)0x0;
  _DAT_14c9a7500 = 0;
  _DAT_14c9a7508 = FUN_1470e0c96;
  DAT_14c9a7510 = *param_1;
  DAT_14c9a7520 = param_1[2];
  param_1[2] = 0;
  DAT_14c9a7530._0_4_ = (undefined4)param_1[4];
  DAT_14c9a7530._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014c9a7538 = (undefined4)param_1[5];
  uRam000000014c9a753c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14c9a7540 = (undefined4)param_1[6];
  uRam000000014c9a7544 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014c9a7548 = (undefined4)param_1[7];
  uRam000000014c9a754c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14c9a7510 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14c9a74e0 = 0;
  _DAT_14c9a74e8 = local_68;
  _DAT_14c9a74f0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14c9a7500 = CONCAT44(DAT_14c9a7504,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14c9a7504 == 0) {
    _DAT_14c9a7500 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14c9a74f8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14c9a74f8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14c9a74d0) && ((DAT_14c9a7460 == (int *)0x0 || (*DAT_14c9a7460 < DAT_14c9a74d0)))) {
    DAT_14c9a7460 = &DAT_14c9a74d0;
  }
  FUN_1460de878();
  local_30 = &local_70;
  local_70 = &DAT_14c9a74d0;
  local_38 = &DAT_14c9a74d4;
  FUN_1460de912(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460de878 FUN_1460de878 body=153 status=ok
// SIG undefined FUN_1460de878(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460de878(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a74b8) {
    FUN_144b3d300(&DAT_14c9a74b8);
    if (DAT_14c9a74b8 == -1) {
      DAT_14c9a7488 = 0;
      DAT_14c9a7490 = 0;
      DAT_14c9a7468 = 0;
      _DAT_14c9a7470 = 0;
      _DAT_14c9a7494 = 0xffffffff00000080;
      DAT_14c9a749c = 0;
      DAT_14c9a74a8 = 0;
      DAT_14c9a74b0 = 0;
      atexit(FUN_142b39cb6);
      _Init_thread_footer(&DAT_14c9a74b8);
      return;
    }
  }
  return;
}



// FUNCTION 1460de912 FUN_1460de912 body=338 status=ok
// SIG undefined FUN_1460de912(void)

undefined4 * FUN_1460de912(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460deaf8(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460dea66(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14c9a7470 - DAT_14c9a749c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14c9a74b0)) {
      uVar10 = DAT_14c9a74b0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14c9a74a8;
      if (DAT_14c9a74a8 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a74a0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a74b0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14c9a74a8;
      if (DAT_14c9a74a8 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a74a0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a74b0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14c9a74b0 = iVar9;
      FUN_1460dec06();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460dea66 FUN_1460dea66 body=145 status=ok
// SIG undefined FUN_1460dea66(void)

undefined8 FUN_1460dea66(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14c9a7470 - DAT_14c9a749c != 1) && (DAT_14c9a7470 != DAT_14c9a749c)) {
    puVar6 = &DAT_14c9a74a0;
    if (DAT_14c9a74a8 != (undefined *)0x0) {
      puVar6 = DAT_14c9a74a8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c9a74b0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c9a7468 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d8f4d4(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460deaf8 FUN_1460deaf8 body=270 status=ok
// SIG undefined FUN_1460deaf8(void)

int * FUN_1460deaf8(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c9a7498;
  iVar3 = DAT_14c9a7470;
  if (DAT_14c9a749c == 0) {
    iVar2 = DAT_14c9a7470 + 1;
    bVar7 = DAT_14c9a7474 == DAT_14c9a7470;
    DAT_14c9a7470 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c9a7468,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c9a7478,1);
    puVar4 = DAT_14c9a7488;
    if (DAT_14c9a7488 == (undefined *)0x0) {
      puVar4 = &DAT_14c9a7478;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14c9a7498;
    DAT_14c9a7498 = *(int *)(DAT_14c9a7468 + 4 + lVar6 * 0x18);
    DAT_14c9a749c = DAT_14c9a749c + -1;
    if (DAT_14c9a749c != 0) {
      *(undefined4 *)(DAT_14c9a7468 + (longlong)DAT_14c9a7498 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c9a7478;
  if (DAT_14c9a7488 != (undefined *)0x0) {
    puVar4 = DAT_14c9a7488;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c9a7468;
  return param_1;
}



// FUNCTION 1460dec06 FUN_1460dec06 body=523 status=ok
// SIG undefined FUN_1460dec06(void)

void FUN_1460dec06(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a74a8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9a74a8,0,0,4);
  }
  uVar3 = DAT_14c9a74b0;
  uVar2 = local_50;
  if (DAT_14c9a74b0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c9a74a0,0,DAT_14c9a74b0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14c9a74a8;
        if (DAT_14c9a74a8 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a74a0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14c9a74b0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c9a7478;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c9a7490 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c9a7468;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c9a74b0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14c9a74a8;
        if (DAT_14c9a74a8 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a74a0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14c9a74b0 - 1U & uVar9) * 4);
        puVar6 = DAT_14c9a74a8;
        if (DAT_14c9a74a8 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a74a0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14c9a74b0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460dee12 FUN_1460dee12 body=507 status=ok
// SIG undefined FUN_1460dee12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460dee12(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14c9a76e0 = 0;
  FUN_1446ddc76(&DAT_14c9a76e4,"GbxDef_IntegratedTest_Cook",1);
  _DAT_14c9a76f0 = 0;
  _DAT_14c9a76f8 = 0;
  _DAT_14c9a7700 = 0;
  DAT_14c9a7708 = (void *)0x0;
  _DAT_14c9a7710 = 0;
  _DAT_14c9a7718 = FUN_1470e1436;
  DAT_14c9a7720 = *param_1;
  DAT_14c9a7730 = param_1[2];
  param_1[2] = 0;
  DAT_14c9a7740._0_4_ = (undefined4)param_1[4];
  DAT_14c9a7740._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014c9a7748 = (undefined4)param_1[5];
  uRam000000014c9a774c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14c9a7750 = (undefined4)param_1[6];
  uRam000000014c9a7754 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014c9a7758 = (undefined4)param_1[7];
  uRam000000014c9a775c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14c9a7720 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14c9a76f0 = 0;
  _DAT_14c9a76f8 = local_68;
  _DAT_14c9a7700 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14c9a7710 = CONCAT44(DAT_14c9a7714,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14c9a7714 == 0) {
    _DAT_14c9a7710 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14c9a7708,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14c9a7708,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14c9a76e0) && ((DAT_14c9a7668 == (int *)0x0 || (*DAT_14c9a7668 < DAT_14c9a76e0)))) {
    DAT_14c9a7668 = &DAT_14c9a76e0;
  }
  FUN_1460df00e();
  local_30 = &local_70;
  local_70 = &DAT_14c9a76e0;
  local_38 = &DAT_14c9a76e4;
  FUN_1460df0a8(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460df00e FUN_1460df00e body=153 status=ok
// SIG undefined FUN_1460df00e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460df00e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a76c0) {
    FUN_144b3d300(&DAT_14c9a76c0);
    if (DAT_14c9a76c0 == -1) {
      DAT_14c9a7690 = 0;
      DAT_14c9a7698 = 0;
      DAT_14c9a7670 = 0;
      _DAT_14c9a7678 = 0;
      _DAT_14c9a769c = 0xffffffff00000080;
      DAT_14c9a76a4 = 0;
      DAT_14c9a76b0 = 0;
      DAT_14c9a76b8 = 0;
      atexit(FUN_142b39ee2);
      _Init_thread_footer(&DAT_14c9a76c0);
      return;
    }
  }
  return;
}



// FUNCTION 1460df0a8 FUN_1460df0a8 body=338 status=ok
// SIG undefined FUN_1460df0a8(void)

undefined4 * FUN_1460df0a8(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460df28e(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460df1fc(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14c9a7678 - DAT_14c9a76a4;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14c9a76b8)) {
      uVar10 = DAT_14c9a76b8 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14c9a76b0;
      if (DAT_14c9a76b0 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a76a8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a76b8 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14c9a76b0;
      if (DAT_14c9a76b0 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a76a8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a76b8 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14c9a76b8 = iVar9;
      FUN_1460df39c();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460df1fc FUN_1460df1fc body=145 status=ok
// SIG undefined FUN_1460df1fc(void)

undefined8 FUN_1460df1fc(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14c9a7678 - DAT_14c9a76a4 != 1) && (DAT_14c9a7678 != DAT_14c9a76a4)) {
    puVar6 = &DAT_14c9a76a8;
    if (DAT_14c9a76b0 != (undefined *)0x0) {
      puVar6 = DAT_14c9a76b0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c9a76b8 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c9a7670 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d8f6c0(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460df28e FUN_1460df28e body=270 status=ok
// SIG undefined FUN_1460df28e(void)

int * FUN_1460df28e(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c9a76a0;
  iVar3 = DAT_14c9a7678;
  if (DAT_14c9a76a4 == 0) {
    iVar2 = DAT_14c9a7678 + 1;
    bVar7 = DAT_14c9a767c == DAT_14c9a7678;
    DAT_14c9a7678 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c9a7670,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c9a7680,1);
    puVar4 = DAT_14c9a7690;
    if (DAT_14c9a7690 == (undefined *)0x0) {
      puVar4 = &DAT_14c9a7680;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14c9a76a0;
    DAT_14c9a76a0 = *(int *)(DAT_14c9a7670 + 4 + lVar6 * 0x18);
    DAT_14c9a76a4 = DAT_14c9a76a4 + -1;
    if (DAT_14c9a76a4 != 0) {
      *(undefined4 *)(DAT_14c9a7670 + (longlong)DAT_14c9a76a0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c9a7680;
  if (DAT_14c9a7690 != (undefined *)0x0) {
    puVar4 = DAT_14c9a7690;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c9a7670;
  return param_1;
}



// FUNCTION 1460df39c FUN_1460df39c body=523 status=ok
// SIG undefined FUN_1460df39c(void)

void FUN_1460df39c(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a76b0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9a76b0,0,0,4);
  }
  uVar3 = DAT_14c9a76b8;
  uVar2 = local_50;
  if (DAT_14c9a76b8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c9a76a8,0,DAT_14c9a76b8,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14c9a76b0;
        if (DAT_14c9a76b0 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a76a8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14c9a76b8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c9a7680;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c9a7698 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c9a7670;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c9a76b8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14c9a76b0;
        if (DAT_14c9a76b0 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a76a8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14c9a76b8 - 1U & uVar9) * 4);
        puVar6 = DAT_14c9a76b0;
        if (DAT_14c9a76b0 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a76a8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14c9a76b8 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460df5a8 FUN_1460df5a8 body=507 status=ok
// SIG undefined FUN_1460df5a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460df5a8(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14c9a8270 = 0;
  FUN_1446ddc76(&DAT_14c9a8274,"GbxDefSelectorStateBaseDefs",1);
  _DAT_14c9a8280 = 0;
  _DAT_14c9a8288 = 0;
  _DAT_14c9a8290 = 0;
  DAT_14c9a8298 = (void *)0x0;
  _DAT_14c9a82a0 = 0;
  _DAT_14c9a82a8 = FUN_1470e6f84;
  DAT_14c9a82b0 = *param_1;
  DAT_14c9a82c0 = param_1[2];
  param_1[2] = 0;
  DAT_14c9a82d0._0_4_ = (undefined4)param_1[4];
  DAT_14c9a82d0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014c9a82d8 = (undefined4)param_1[5];
  uRam000000014c9a82dc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14c9a82e0 = (undefined4)param_1[6];
  uRam000000014c9a82e4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014c9a82e8 = (undefined4)param_1[7];
  uRam000000014c9a82ec = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14c9a82b0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14c9a8280 = 0;
  _DAT_14c9a8288 = local_68;
  _DAT_14c9a8290 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14c9a82a0 = CONCAT44(DAT_14c9a82a4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14c9a82a4 == 0) {
    _DAT_14c9a82a0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14c9a8298,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14c9a8298,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14c9a8270) && ((DAT_14c9a81f8 == (int *)0x0 || (*DAT_14c9a81f8 < DAT_14c9a8270)))) {
    DAT_14c9a81f8 = &DAT_14c9a8270;
  }
  FUN_1460df7a4();
  local_30 = &local_70;
  local_70 = &DAT_14c9a8270;
  local_38 = &DAT_14c9a8274;
  FUN_1460df83e(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460df7a4 FUN_1460df7a4 body=153 status=ok
// SIG undefined FUN_1460df7a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460df7a4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a8250) {
    FUN_144b3d300(&DAT_14c9a8250);
    if (DAT_14c9a8250 == -1) {
      DAT_14c9a8220 = 0;
      DAT_14c9a8228 = 0;
      DAT_14c9a8200 = 0;
      _DAT_14c9a8208 = 0;
      _DAT_14c9a822c = 0xffffffff00000080;
      DAT_14c9a8234 = 0;
      DAT_14c9a8240 = 0;
      DAT_14c9a8248 = 0;
      atexit(FUN_142b40d56);
      _Init_thread_footer(&DAT_14c9a8250);
      return;
    }
  }
  return;
}



// FUNCTION 1460df83e FUN_1460df83e body=338 status=ok
// SIG undefined FUN_1460df83e(void)

undefined4 * FUN_1460df83e(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460dfa24(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460df992(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14c9a8208 - DAT_14c9a8234;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14c9a8248)) {
      uVar10 = DAT_14c9a8248 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14c9a8240;
      if (DAT_14c9a8240 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a8238;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a8248 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14c9a8240;
      if (DAT_14c9a8240 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a8238;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a8248 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14c9a8248 = iVar9;
      FUN_1460dfb32();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460df992 FUN_1460df992 body=145 status=ok
// SIG undefined FUN_1460df992(void)

undefined8 FUN_1460df992(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14c9a8208 - DAT_14c9a8234 != 1) && (DAT_14c9a8208 != DAT_14c9a8234)) {
    puVar6 = &DAT_14c9a8238;
    if (DAT_14c9a8240 != (undefined *)0x0) {
      puVar6 = DAT_14c9a8240;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c9a8248 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c9a8200 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d8fa98(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460dfa24 FUN_1460dfa24 body=270 status=ok
// SIG undefined FUN_1460dfa24(void)

int * FUN_1460dfa24(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c9a8230;
  iVar3 = DAT_14c9a8208;
  if (DAT_14c9a8234 == 0) {
    iVar2 = DAT_14c9a8208 + 1;
    bVar7 = DAT_14c9a820c == DAT_14c9a8208;
    DAT_14c9a8208 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c9a8200,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c9a8210,1);
    puVar4 = DAT_14c9a8220;
    if (DAT_14c9a8220 == (undefined *)0x0) {
      puVar4 = &DAT_14c9a8210;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14c9a8230;
    DAT_14c9a8230 = *(int *)(DAT_14c9a8200 + 4 + lVar6 * 0x18);
    DAT_14c9a8234 = DAT_14c9a8234 + -1;
    if (DAT_14c9a8234 != 0) {
      *(undefined4 *)(DAT_14c9a8200 + (longlong)DAT_14c9a8230 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c9a8210;
  if (DAT_14c9a8220 != (undefined *)0x0) {
    puVar4 = DAT_14c9a8220;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c9a8200;
  return param_1;
}



// FUNCTION 1460dfb32 FUN_1460dfb32 body=523 status=ok
// SIG undefined FUN_1460dfb32(void)

void FUN_1460dfb32(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a8240 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9a8240,0,0,4);
  }
  uVar3 = DAT_14c9a8248;
  uVar2 = local_50;
  if (DAT_14c9a8248 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c9a8238,0,DAT_14c9a8248,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14c9a8240;
        if (DAT_14c9a8240 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a8238;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14c9a8248 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c9a8210;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c9a8228 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c9a8200;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c9a8248 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14c9a8240;
        if (DAT_14c9a8240 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a8238;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14c9a8248 - 1U & uVar9) * 4);
        puVar6 = DAT_14c9a8240;
        if (DAT_14c9a8240 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a8238;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14c9a8248 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460dfd3e FUN_1460dfd3e body=507 status=ok
// SIG undefined FUN_1460dfd3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460dfd3e(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14c9a8360 = 0;
  FUN_1446ddc76(&DAT_14c9a8364,"GbxDefSelectorBaseDefs",1);
  _DAT_14c9a8370 = 0;
  _DAT_14c9a8378 = 0;
  _DAT_14c9a8380 = 0;
  DAT_14c9a8388 = (void *)0x0;
  _DAT_14c9a8390 = 0;
  _DAT_14c9a8398 = FUN_1470e706e;
  DAT_14c9a83a0 = *param_1;
  DAT_14c9a83b0 = param_1[2];
  param_1[2] = 0;
  DAT_14c9a83c0._0_4_ = (undefined4)param_1[4];
  DAT_14c9a83c0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014c9a83c8 = (undefined4)param_1[5];
  uRam000000014c9a83cc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14c9a83d0 = (undefined4)param_1[6];
  uRam000000014c9a83d4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014c9a83d8 = (undefined4)param_1[7];
  uRam000000014c9a83dc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14c9a83a0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14c9a8370 = 0;
  _DAT_14c9a8378 = local_68;
  _DAT_14c9a8380 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14c9a8390 = CONCAT44(DAT_14c9a8394,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14c9a8394 == 0) {
    _DAT_14c9a8390 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14c9a8388,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14c9a8388,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14c9a8360) && ((DAT_14c9a82f0 == (int *)0x0 || (*DAT_14c9a82f0 < DAT_14c9a8360)))) {
    DAT_14c9a82f0 = &DAT_14c9a8360;
  }
  FUN_1460dff3a();
  local_30 = &local_70;
  local_70 = &DAT_14c9a8360;
  local_38 = &DAT_14c9a8364;
  FUN_1460dffd4(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460dff3a FUN_1460dff3a body=153 status=ok
// SIG undefined FUN_1460dff3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460dff3a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a8348) {
    FUN_144b3d300(&DAT_14c9a8348);
    if (DAT_14c9a8348 == -1) {
      DAT_14c9a8318 = 0;
      DAT_14c9a8320 = 0;
      DAT_14c9a82f8 = 0;
      _DAT_14c9a8300 = 0;
      _DAT_14c9a8324 = 0xffffffff00000080;
      DAT_14c9a832c = 0;
      DAT_14c9a8338 = 0;
      DAT_14c9a8340 = 0;
      atexit(FUN_142b40d84);
      _Init_thread_footer(&DAT_14c9a8348);
      return;
    }
  }
  return;
}



// FUNCTION 1460dffd4 FUN_1460dffd4 body=338 status=ok
// SIG undefined FUN_1460dffd4(void)

undefined4 * FUN_1460dffd4(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460e01ba(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460e0128(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14c9a8300 - DAT_14c9a832c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14c9a8340)) {
      uVar10 = DAT_14c9a8340 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14c9a8338;
      if (DAT_14c9a8338 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a8330;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a8340 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14c9a8338;
      if (DAT_14c9a8338 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a8330;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a8340 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14c9a8340 = iVar9;
      FUN_1460e02c8();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e0128 FUN_1460e0128 body=145 status=ok
// SIG undefined FUN_1460e0128(void)

undefined8 FUN_1460e0128(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14c9a8300 - DAT_14c9a832c != 1) && (DAT_14c9a8300 != DAT_14c9a832c)) {
    puVar6 = &DAT_14c9a8330;
    if (DAT_14c9a8338 != (undefined *)0x0) {
      puVar6 = DAT_14c9a8338;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c9a8340 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c9a82f8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d8fc84(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e01ba FUN_1460e01ba body=270 status=ok
// SIG undefined FUN_1460e01ba(void)

int * FUN_1460e01ba(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c9a8328;
  iVar3 = DAT_14c9a8300;
  if (DAT_14c9a832c == 0) {
    iVar2 = DAT_14c9a8300 + 1;
    bVar7 = DAT_14c9a8304 == DAT_14c9a8300;
    DAT_14c9a8300 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c9a82f8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c9a8308,1);
    puVar4 = DAT_14c9a8318;
    if (DAT_14c9a8318 == (undefined *)0x0) {
      puVar4 = &DAT_14c9a8308;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14c9a8328;
    DAT_14c9a8328 = *(int *)(DAT_14c9a82f8 + 4 + lVar6 * 0x18);
    DAT_14c9a832c = DAT_14c9a832c + -1;
    if (DAT_14c9a832c != 0) {
      *(undefined4 *)(DAT_14c9a82f8 + (longlong)DAT_14c9a8328 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c9a8308;
  if (DAT_14c9a8318 != (undefined *)0x0) {
    puVar4 = DAT_14c9a8318;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c9a82f8;
  return param_1;
}



// FUNCTION 1460e02c8 FUN_1460e02c8 body=523 status=ok
// SIG undefined FUN_1460e02c8(void)

void FUN_1460e02c8(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a8338 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9a8338,0,0,4);
  }
  uVar3 = DAT_14c9a8340;
  uVar2 = local_50;
  if (DAT_14c9a8340 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c9a8330,0,DAT_14c9a8340,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14c9a8338;
        if (DAT_14c9a8338 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a8330;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14c9a8340 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c9a8308;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c9a8320 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c9a82f8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c9a8340 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14c9a8338;
        if (DAT_14c9a8338 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a8330;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14c9a8340 - 1U & uVar9) * 4);
        puVar6 = DAT_14c9a8338;
        if (DAT_14c9a8338 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a8330;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14c9a8340 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e04d4 FUN_1460e04d4 body=507 status=ok
// SIG undefined FUN_1460e04d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e04d4(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb1b110 = 0;
  FUN_1446ddc76(&DAT_14cb1b114,"spawner_style",1);
  _DAT_14cb1b120 = 0;
  _DAT_14cb1b128 = 0;
  _DAT_14cb1b130 = 0;
  DAT_14cb1b138 = (void *)0x0;
  _DAT_14cb1b140 = 0;
  _DAT_14cb1b148 = FUN_147e24b06;
  DAT_14cb1b150 = *param_1;
  DAT_14cb1b160 = param_1[2];
  param_1[2] = 0;
  DAT_14cb1b170._0_4_ = (undefined4)param_1[4];
  DAT_14cb1b170._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb1b178 = (undefined4)param_1[5];
  uRam000000014cb1b17c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb1b180 = (undefined4)param_1[6];
  uRam000000014cb1b184 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb1b188 = (undefined4)param_1[7];
  uRam000000014cb1b18c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb1b150 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb1b120 = 0;
  _DAT_14cb1b128 = local_68;
  _DAT_14cb1b130 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb1b140 = CONCAT44(DAT_14cb1b144,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb1b144 == 0) {
    _DAT_14cb1b140 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb1b138,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb1b138,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb1b110) && ((DAT_14cb1b0a0 == (int *)0x0 || (*DAT_14cb1b0a0 < DAT_14cb1b110)))) {
    DAT_14cb1b0a0 = &DAT_14cb1b110;
  }
  FUN_1460e06d0();
  local_30 = &local_70;
  local_70 = &DAT_14cb1b110;
  local_38 = &DAT_14cb1b114;
  FUN_1460e076a(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e06d0 FUN_1460e06d0 body=153 status=ok
// SIG undefined FUN_1460e06d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e06d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb1b0f8) {
    FUN_144b3d300(&DAT_14cb1b0f8);
    if (DAT_14cb1b0f8 == -1) {
      DAT_14cb1b0c8 = 0;
      DAT_14cb1b0d0 = 0;
      DAT_14cb1b0a8 = 0;
      _DAT_14cb1b0b0 = 0;
      _DAT_14cb1b0d4 = 0xffffffff00000080;
      DAT_14cb1b0dc = 0;
      DAT_14cb1b0e8 = 0;
      DAT_14cb1b0f0 = 0;
      atexit(FUN_1437eb54c);
      _Init_thread_footer(&DAT_14cb1b0f8);
      return;
    }
  }
  return;
}



// FUNCTION 1460e076a FUN_1460e076a body=338 status=ok
// SIG undefined FUN_1460e076a(void)

undefined4 * FUN_1460e076a(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460e0950(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460e08be(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb1b0b0 - DAT_14cb1b0dc;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb1b0f0)) {
      uVar10 = DAT_14cb1b0f0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb1b0e8;
      if (DAT_14cb1b0e8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb1b0e0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb1b0f0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb1b0e8;
      if (DAT_14cb1b0e8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb1b0e0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb1b0f0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb1b0f0 = iVar9;
      FUN_1460e0a5e();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e08be FUN_1460e08be body=145 status=ok
// SIG undefined FUN_1460e08be(void)

undefined8 FUN_1460e08be(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb1b0b0 - DAT_14cb1b0dc != 1) && (DAT_14cb1b0b0 != DAT_14cb1b0dc)) {
    puVar6 = &DAT_14cb1b0e0;
    if (DAT_14cb1b0e8 != (undefined *)0x0) {
      puVar6 = DAT_14cb1b0e8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb1b0f0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb1b0a8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d90434(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e0950 FUN_1460e0950 body=270 status=ok
// SIG undefined FUN_1460e0950(void)

int * FUN_1460e0950(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb1b0d8;
  iVar3 = DAT_14cb1b0b0;
  if (DAT_14cb1b0dc == 0) {
    iVar2 = DAT_14cb1b0b0 + 1;
    bVar7 = DAT_14cb1b0b4 == DAT_14cb1b0b0;
    DAT_14cb1b0b0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb1b0a8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb1b0b8,1);
    puVar4 = DAT_14cb1b0c8;
    if (DAT_14cb1b0c8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb1b0b8;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb1b0d8;
    DAT_14cb1b0d8 = *(int *)(DAT_14cb1b0a8 + 4 + lVar6 * 0x18);
    DAT_14cb1b0dc = DAT_14cb1b0dc + -1;
    if (DAT_14cb1b0dc != 0) {
      *(undefined4 *)(DAT_14cb1b0a8 + (longlong)DAT_14cb1b0d8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb1b0b8;
  if (DAT_14cb1b0c8 != (undefined *)0x0) {
    puVar4 = DAT_14cb1b0c8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb1b0a8;
  return param_1;
}



// FUNCTION 1460e0a5e FUN_1460e0a5e body=523 status=ok
// SIG undefined FUN_1460e0a5e(void)

void FUN_1460e0a5e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1b0e8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb1b0e8,0,0,4);
  }
  uVar3 = DAT_14cb1b0f0;
  uVar2 = local_50;
  if (DAT_14cb1b0f0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb1b0e0,0,DAT_14cb1b0f0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb1b0e8;
        if (DAT_14cb1b0e8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb1b0e0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb1b0f0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb1b0b8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb1b0d0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb1b0a8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb1b0f0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb1b0e8;
        if (DAT_14cb1b0e8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb1b0e0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb1b0f0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb1b0e8;
        if (DAT_14cb1b0e8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb1b0e0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb1b0f0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e0c6a FUN_1460e0c6a body=507 status=ok
// SIG undefined FUN_1460e0c6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e0c6a(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb244f0 = 0;
  FUN_1446ddc76(&DAT_14cb244f4,"Teams",1);
  _DAT_14cb24500 = 0;
  _DAT_14cb24508 = 0;
  _DAT_14cb24510 = 0;
  DAT_14cb24518 = (void *)0x0;
  _DAT_14cb24520 = 0;
  _DAT_14cb24528 = FUN_147f5e416;
  DAT_14cb24530 = *param_1;
  DAT_14cb24540 = param_1[2];
  param_1[2] = 0;
  DAT_14cb24550._0_4_ = (undefined4)param_1[4];
  DAT_14cb24550._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb24558 = (undefined4)param_1[5];
  uRam000000014cb2455c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb24560 = (undefined4)param_1[6];
  uRam000000014cb24564 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb24568 = (undefined4)param_1[7];
  uRam000000014cb2456c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb24530 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb24500 = 0;
  _DAT_14cb24508 = local_68;
  _DAT_14cb24510 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb24520 = CONCAT44(DAT_14cb24524,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb24524 == 0) {
    _DAT_14cb24520 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb24518,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb24518,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb244f0) && ((DAT_14cb24480 == (int *)0x0 || (*DAT_14cb24480 < DAT_14cb244f0)))) {
    DAT_14cb24480 = &DAT_14cb244f0;
  }
  FUN_1460e0e66();
  local_30 = &local_70;
  local_70 = &DAT_14cb244f0;
  local_38 = &DAT_14cb244f4;
  FUN_1460e0f00(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e0e66 FUN_1460e0e66 body=153 status=ok
// SIG undefined FUN_1460e0e66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e0e66(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb244d8) {
    FUN_144b3d300(&DAT_14cb244d8);
    if (DAT_14cb244d8 == -1) {
      DAT_14cb244a8 = 0;
      DAT_14cb244b0 = 0;
      DAT_14cb24488 = 0;
      _DAT_14cb24490 = 0;
      _DAT_14cb244b4 = 0xffffffff00000080;
      DAT_14cb244bc = 0;
      DAT_14cb244c8 = 0;
      DAT_14cb244d0 = 0;
      atexit(FUN_14389a172);
      _Init_thread_footer(&DAT_14cb244d8);
      return;
    }
  }
  return;
}



// FUNCTION 1460e0f00 FUN_1460e0f00 body=338 status=ok
// SIG undefined FUN_1460e0f00(void)

undefined4 * FUN_1460e0f00(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460e10e6(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460e1054(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb24490 - DAT_14cb244bc;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb244d0)) {
      uVar10 = DAT_14cb244d0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb244c8;
      if (DAT_14cb244c8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb244c0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb244d0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb244c8;
      if (DAT_14cb244c8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb244c0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb244d0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb244d0 = iVar9;
      FUN_1460e11f4();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e1054 FUN_1460e1054 body=145 status=ok
// SIG undefined FUN_1460e1054(void)

undefined8 FUN_1460e1054(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb24490 - DAT_14cb244bc != 1) && (DAT_14cb24490 != DAT_14cb244bc)) {
    puVar6 = &DAT_14cb244c0;
    if (DAT_14cb244c8 != (undefined *)0x0) {
      puVar6 = DAT_14cb244c8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb244d0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb24488 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d90620(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e10e6 FUN_1460e10e6 body=270 status=ok
// SIG undefined FUN_1460e10e6(void)

int * FUN_1460e10e6(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb244b8;
  iVar3 = DAT_14cb24490;
  if (DAT_14cb244bc == 0) {
    iVar2 = DAT_14cb24490 + 1;
    bVar7 = DAT_14cb24494 == DAT_14cb24490;
    DAT_14cb24490 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb24488,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb24498,1);
    puVar4 = DAT_14cb244a8;
    if (DAT_14cb244a8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb24498;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb244b8;
    DAT_14cb244b8 = *(int *)(DAT_14cb24488 + 4 + lVar6 * 0x18);
    DAT_14cb244bc = DAT_14cb244bc + -1;
    if (DAT_14cb244bc != 0) {
      *(undefined4 *)(DAT_14cb24488 + (longlong)DAT_14cb244b8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb24498;
  if (DAT_14cb244a8 != (undefined *)0x0) {
    puVar4 = DAT_14cb244a8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb24488;
  return param_1;
}



// FUNCTION 1460e11f4 FUN_1460e11f4 body=523 status=ok
// SIG undefined FUN_1460e11f4(void)

void FUN_1460e11f4(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb244c8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb244c8,0,0,4);
  }
  uVar3 = DAT_14cb244d0;
  uVar2 = local_50;
  if (DAT_14cb244d0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb244c0,0,DAT_14cb244d0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb244c8;
        if (DAT_14cb244c8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb244c0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb244d0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb24498;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb244b0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb24488;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb244d0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb244c8;
        if (DAT_14cb244c8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb244c0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb244d0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb244c8;
        if (DAT_14cb244c8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb244c0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb244d0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e1400 FUN_1460e1400 body=507 status=ok
// SIG undefined FUN_1460e1400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e1400(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb25b50 = 0;
  FUN_1446ddc76(&DAT_14cb25b54,"audioprovider",1);
  _DAT_14cb25b60 = 0;
  _DAT_14cb25b68 = 0;
  _DAT_14cb25b70 = 0;
  DAT_14cb25b78 = (void *)0x0;
  _DAT_14cb25b80 = 0;
  _DAT_14cb25b88 = FUN_147f81332;
  DAT_14cb25b90 = *param_1;
  DAT_14cb25ba0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb25bb0._0_4_ = (undefined4)param_1[4];
  DAT_14cb25bb0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb25bb8 = (undefined4)param_1[5];
  uRam000000014cb25bbc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb25bc0 = (undefined4)param_1[6];
  uRam000000014cb25bc4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb25bc8 = (undefined4)param_1[7];
  uRam000000014cb25bcc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb25b90 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb25b60 = 0;
  _DAT_14cb25b68 = local_68;
  _DAT_14cb25b70 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb25b80 = CONCAT44(DAT_14cb25b84,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb25b84 == 0) {
    _DAT_14cb25b80 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb25b78,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb25b78,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb25b50) && ((DAT_14cb25ad8 == (int *)0x0 || (*DAT_14cb25ad8 < DAT_14cb25b50)))) {
    DAT_14cb25ad8 = &DAT_14cb25b50;
  }
  FUN_1460e15fc();
  local_30 = &local_70;
  local_70 = &DAT_14cb25b50;
  local_38 = &DAT_14cb25b54;
  FUN_1460e1696(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e15fc FUN_1460e15fc body=153 status=ok
// SIG undefined FUN_1460e15fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e15fc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb25b30) {
    FUN_144b3d300(&DAT_14cb25b30);
    if (DAT_14cb25b30 == -1) {
      DAT_14cb25b00 = 0;
      DAT_14cb25b08 = 0;
      DAT_14cb25ae0 = 0;
      _DAT_14cb25ae8 = 0;
      _DAT_14cb25b0c = 0xffffffff00000080;
      DAT_14cb25b14 = 0;
      DAT_14cb25b20 = 0;
      DAT_14cb25b28 = 0;
      atexit(FUN_1438a9fd0);
      _Init_thread_footer(&DAT_14cb25b30);
      return;
    }
  }
  return;
}



// FUNCTION 1460e1696 FUN_1460e1696 body=338 status=ok
// SIG undefined FUN_1460e1696(void)

undefined4 * FUN_1460e1696(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460e187c(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460e17ea(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb25ae8 - DAT_14cb25b14;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb25b28)) {
      uVar10 = DAT_14cb25b28 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb25b20;
      if (DAT_14cb25b20 == (undefined *)0x0) {
        puVar7 = &DAT_14cb25b18;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb25b28 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb25b20;
      if (DAT_14cb25b20 == (undefined *)0x0) {
        puVar7 = &DAT_14cb25b18;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb25b28 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb25b28 = iVar9;
      FUN_1460e198a();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e17ea FUN_1460e17ea body=145 status=ok
// SIG undefined FUN_1460e17ea(void)

undefined8 FUN_1460e17ea(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb25ae8 - DAT_14cb25b14 != 1) && (DAT_14cb25ae8 != DAT_14cb25b14)) {
    puVar6 = &DAT_14cb25b18;
    if (DAT_14cb25b20 != (undefined *)0x0) {
      puVar6 = DAT_14cb25b20;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb25b28 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb25ae0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9080c(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e187c FUN_1460e187c body=270 status=ok
// SIG undefined FUN_1460e187c(void)

int * FUN_1460e187c(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb25b10;
  iVar3 = DAT_14cb25ae8;
  if (DAT_14cb25b14 == 0) {
    iVar2 = DAT_14cb25ae8 + 1;
    bVar7 = DAT_14cb25aec == DAT_14cb25ae8;
    DAT_14cb25ae8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb25ae0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb25af0,1);
    puVar4 = DAT_14cb25b00;
    if (DAT_14cb25b00 == (undefined *)0x0) {
      puVar4 = &DAT_14cb25af0;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb25b10;
    DAT_14cb25b10 = *(int *)(DAT_14cb25ae0 + 4 + lVar6 * 0x18);
    DAT_14cb25b14 = DAT_14cb25b14 + -1;
    if (DAT_14cb25b14 != 0) {
      *(undefined4 *)(DAT_14cb25ae0 + (longlong)DAT_14cb25b10 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb25af0;
  if (DAT_14cb25b00 != (undefined *)0x0) {
    puVar4 = DAT_14cb25b00;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb25ae0;
  return param_1;
}



// FUNCTION 1460e198a FUN_1460e198a body=523 status=ok
// SIG undefined FUN_1460e198a(void)

void FUN_1460e198a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb25b20 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb25b20,0,0,4);
  }
  uVar3 = DAT_14cb25b28;
  uVar2 = local_50;
  if (DAT_14cb25b28 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb25b18,0,DAT_14cb25b28,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb25b20;
        if (DAT_14cb25b20 == (undefined *)0x0) {
          puVar6 = &DAT_14cb25b18;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb25b28 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb25af0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb25b08 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb25ae0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb25b28 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb25b20;
        if (DAT_14cb25b20 == (undefined *)0x0) {
          puVar6 = &DAT_14cb25b18;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb25b28 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb25b20;
        if (DAT_14cb25b20 == (undefined *)0x0) {
          puVar6 = &DAT_14cb25b18;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb25b28 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e1b96 FUN_1460e1b96 body=507 status=ok
// SIG undefined FUN_1460e1b96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e1b96(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb706d0 = 0;
  FUN_1446ddc76(&DAT_14cb706d4,"Activity",1);
  _DAT_14cb706e0 = 0;
  _DAT_14cb706e8 = 0;
  _DAT_14cb706f0 = 0;
  DAT_14cb706f8 = (void *)0x0;
  _DAT_14cb70700 = 0;
  _DAT_14cb70708 = FUN_1487b2392;
  DAT_14cb70710 = *param_1;
  DAT_14cb70720 = param_1[2];
  param_1[2] = 0;
  DAT_14cb70730._0_4_ = (undefined4)param_1[4];
  DAT_14cb70730._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb70738 = (undefined4)param_1[5];
  uRam000000014cb7073c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb70740 = (undefined4)param_1[6];
  uRam000000014cb70744 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb70748 = (undefined4)param_1[7];
  uRam000000014cb7074c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb70710 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb706e0 = 0;
  _DAT_14cb706e8 = local_68;
  _DAT_14cb706f0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb70700 = CONCAT44(DAT_14cb70704,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb70704 == 0) {
    _DAT_14cb70700 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb706f8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb706f8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb706d0) && ((DAT_14cb70658 == (int *)0x0 || (*DAT_14cb70658 < DAT_14cb706d0)))) {
    DAT_14cb70658 = &DAT_14cb706d0;
  }
  FUN_1460e1d92();
  local_30 = &local_70;
  local_70 = &DAT_14cb706d0;
  local_38 = &DAT_14cb706d4;
  FUN_1460e1e2c(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e1d92 FUN_1460e1d92 body=153 status=ok
// SIG undefined FUN_1460e1d92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e1d92(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb706b0) {
    FUN_144b3d300(&DAT_14cb706b0);
    if (DAT_14cb706b0 == -1) {
      DAT_14cb70680 = 0;
      DAT_14cb70688 = 0;
      DAT_14cb70660 = 0;
      _DAT_14cb70668 = 0;
      _DAT_14cb7068c = 0xffffffff00000080;
      DAT_14cb70694 = 0;
      DAT_14cb706a0 = 0;
      DAT_14cb706a8 = 0;
      atexit(FUN_143c91426);
      _Init_thread_footer(&DAT_14cb706b0);
      return;
    }
  }
  return;
}



// FUNCTION 1460e1e2c FUN_1460e1e2c body=338 status=ok
// SIG undefined FUN_1460e1e2c(void)

undefined4 * FUN_1460e1e2c(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460e2012(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460e1f80(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb70668 - DAT_14cb70694;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb706a8)) {
      uVar10 = DAT_14cb706a8 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb706a0;
      if (DAT_14cb706a0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb70698;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb706a8 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb706a0;
      if (DAT_14cb706a0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb70698;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb706a8 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb706a8 = iVar9;
      FUN_1460e2120();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e1f80 FUN_1460e1f80 body=145 status=ok
// SIG undefined FUN_1460e1f80(void)

undefined8 FUN_1460e1f80(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb70668 - DAT_14cb70694 != 1) && (DAT_14cb70668 != DAT_14cb70694)) {
    puVar6 = &DAT_14cb70698;
    if (DAT_14cb706a0 != (undefined *)0x0) {
      puVar6 = DAT_14cb706a0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb706a8 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb70660 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d91580(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e2012 FUN_1460e2012 body=270 status=ok
// SIG undefined FUN_1460e2012(void)

int * FUN_1460e2012(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb70690;
  iVar3 = DAT_14cb70668;
  if (DAT_14cb70694 == 0) {
    iVar2 = DAT_14cb70668 + 1;
    bVar7 = DAT_14cb7066c == DAT_14cb70668;
    DAT_14cb70668 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb70660,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb70670,1);
    puVar4 = DAT_14cb70680;
    if (DAT_14cb70680 == (undefined *)0x0) {
      puVar4 = &DAT_14cb70670;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb70690;
    DAT_14cb70690 = *(int *)(DAT_14cb70660 + 4 + lVar6 * 0x18);
    DAT_14cb70694 = DAT_14cb70694 + -1;
    if (DAT_14cb70694 != 0) {
      *(undefined4 *)(DAT_14cb70660 + (longlong)DAT_14cb70690 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb70670;
  if (DAT_14cb70680 != (undefined *)0x0) {
    puVar4 = DAT_14cb70680;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb70660;
  return param_1;
}



// FUNCTION 1460e2120 FUN_1460e2120 body=523 status=ok
// SIG undefined FUN_1460e2120(void)

void FUN_1460e2120(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb706a0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb706a0,0,0,4);
  }
  uVar3 = DAT_14cb706a8;
  uVar2 = local_50;
  if (DAT_14cb706a8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb70698,0,DAT_14cb706a8,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb706a0;
        if (DAT_14cb706a0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb70698;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb706a8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb70670;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb70688 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb70660;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb706a8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb706a0;
        if (DAT_14cb706a0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb70698;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb706a8 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb706a0;
        if (DAT_14cb706a0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb70698;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb706a8 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e232c FUN_1460e232c body=507 status=ok
// SIG undefined FUN_1460e232c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e232c(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb72360 = 0;
  FUN_1446ddc76(&DAT_14cb72364,"character_sounds",1);
  _DAT_14cb72370 = 0;
  _DAT_14cb72378 = 0;
  _DAT_14cb72380 = 0;
  DAT_14cb72388 = (void *)0x0;
  _DAT_14cb72390 = 0;
  _DAT_14cb72398 = FUN_1487dc6f8;
  DAT_14cb723a0 = *param_1;
  DAT_14cb723b0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb723c0._0_4_ = (undefined4)param_1[4];
  DAT_14cb723c0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb723c8 = (undefined4)param_1[5];
  uRam000000014cb723cc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb723d0 = (undefined4)param_1[6];
  uRam000000014cb723d4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb723d8 = (undefined4)param_1[7];
  uRam000000014cb723dc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb723a0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb72370 = 0;
  _DAT_14cb72378 = local_68;
  _DAT_14cb72380 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb72390 = CONCAT44(DAT_14cb72394,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb72394 == 0) {
    _DAT_14cb72390 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb72388,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb72388,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb72360) && ((DAT_14cb722e8 == (int *)0x0 || (*DAT_14cb722e8 < DAT_14cb72360)))) {
    DAT_14cb722e8 = &DAT_14cb72360;
  }
  FUN_1460e2528();
  local_30 = &local_70;
  local_70 = &DAT_14cb72360;
  local_38 = &DAT_14cb72364;
  FUN_1460e25c2(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e2528 FUN_1460e2528 body=153 status=ok
// SIG undefined FUN_1460e2528(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e2528(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb72340) {
    FUN_144b3d300(&DAT_14cb72340);
    if (DAT_14cb72340 == -1) {
      DAT_14cb72310 = 0;
      DAT_14cb72318 = 0;
      DAT_14cb722f0 = 0;
      _DAT_14cb722f8 = 0;
      _DAT_14cb7231c = 0xffffffff00000080;
      DAT_14cb72324 = 0;
      DAT_14cb72330 = 0;
      DAT_14cb72338 = 0;
      atexit(FUN_143cbb3e5);
      _Init_thread_footer(&DAT_14cb72340);
      return;
    }
  }
  return;
}



// FUNCTION 1460e25c2 FUN_1460e25c2 body=338 status=ok
// SIG undefined FUN_1460e25c2(void)

undefined4 * FUN_1460e25c2(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460e27a8(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460e2716(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb722f8 - DAT_14cb72324;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb72338)) {
      uVar10 = DAT_14cb72338 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb72330;
      if (DAT_14cb72330 == (undefined *)0x0) {
        puVar7 = &DAT_14cb72328;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb72338 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb72330;
      if (DAT_14cb72330 == (undefined *)0x0) {
        puVar7 = &DAT_14cb72328;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb72338 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb72338 = iVar9;
      FUN_1460e28b6();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e2716 FUN_1460e2716 body=145 status=ok
// SIG undefined FUN_1460e2716(void)

undefined8 FUN_1460e2716(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb722f8 - DAT_14cb72324 != 1) && (DAT_14cb722f8 != DAT_14cb72324)) {
    puVar6 = &DAT_14cb72328;
    if (DAT_14cb72330 != (undefined *)0x0) {
      puVar6 = DAT_14cb72330;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb72338 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb722f0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d91958(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e27a8 FUN_1460e27a8 body=270 status=ok
// SIG undefined FUN_1460e27a8(void)

int * FUN_1460e27a8(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb72320;
  iVar3 = DAT_14cb722f8;
  if (DAT_14cb72324 == 0) {
    iVar2 = DAT_14cb722f8 + 1;
    bVar7 = DAT_14cb722fc == DAT_14cb722f8;
    DAT_14cb722f8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb722f0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb72300,1);
    puVar4 = DAT_14cb72310;
    if (DAT_14cb72310 == (undefined *)0x0) {
      puVar4 = &DAT_14cb72300;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb72320;
    DAT_14cb72320 = *(int *)(DAT_14cb722f0 + 4 + lVar6 * 0x18);
    DAT_14cb72324 = DAT_14cb72324 + -1;
    if (DAT_14cb72324 != 0) {
      *(undefined4 *)(DAT_14cb722f0 + (longlong)DAT_14cb72320 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb72300;
  if (DAT_14cb72310 != (undefined *)0x0) {
    puVar4 = DAT_14cb72310;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb722f0;
  return param_1;
}



// FUNCTION 1460e28b6 FUN_1460e28b6 body=523 status=ok
// SIG undefined FUN_1460e28b6(void)

void FUN_1460e28b6(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb72330 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb72330,0,0,4);
  }
  uVar3 = DAT_14cb72338;
  uVar2 = local_50;
  if (DAT_14cb72338 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb72328,0,DAT_14cb72338,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb72330;
        if (DAT_14cb72330 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72328;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb72338 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb72300;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb72318 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb722f0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb72338 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb72330;
        if (DAT_14cb72330 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72328;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb72338 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb72330;
        if (DAT_14cb72330 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72328;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb72338 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e2ac2 FUN_1460e2ac2 body=507 status=ok
// SIG undefined FUN_1460e2ac2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e2ac2(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb724e0 = 0;
  FUN_1446ddc76(&DAT_14cb724e4,"character_sound_tags",1);
  _DAT_14cb724f0 = 0;
  _DAT_14cb724f8 = 0;
  _DAT_14cb72500 = 0;
  DAT_14cb72508 = (void *)0x0;
  _DAT_14cb72510 = 0;
  _DAT_14cb72518 = FUN_1487dc8c4;
  DAT_14cb72520 = *param_1;
  DAT_14cb72530 = param_1[2];
  param_1[2] = 0;
  DAT_14cb72540._0_4_ = (undefined4)param_1[4];
  DAT_14cb72540._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb72548 = (undefined4)param_1[5];
  uRam000000014cb7254c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb72550 = (undefined4)param_1[6];
  uRam000000014cb72554 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb72558 = (undefined4)param_1[7];
  uRam000000014cb7255c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb72520 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb724f0 = 0;
  _DAT_14cb724f8 = local_68;
  _DAT_14cb72500 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb72510 = CONCAT44(DAT_14cb72514,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb72514 == 0) {
    _DAT_14cb72510 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb72508,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb72508,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb724e0) && ((DAT_14cb72470 == (int *)0x0 || (*DAT_14cb72470 < DAT_14cb724e0)))) {
    DAT_14cb72470 = &DAT_14cb724e0;
  }
  FUN_1460e2cbe();
  local_30 = &local_70;
  local_70 = &DAT_14cb724e0;
  local_38 = &DAT_14cb724e4;
  FUN_1460e2d58(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e2cbe FUN_1460e2cbe body=153 status=ok
// SIG undefined FUN_1460e2cbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e2cbe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb724c8) {
    FUN_144b3d300(&DAT_14cb724c8);
    if (DAT_14cb724c8 == -1) {
      DAT_14cb72498 = 0;
      DAT_14cb724a0 = 0;
      DAT_14cb72478 = 0;
      _DAT_14cb72480 = 0;
      _DAT_14cb724a4 = 0xffffffff00000080;
      DAT_14cb724ac = 0;
      DAT_14cb724b8 = 0;
      DAT_14cb724c0 = 0;
      atexit(FUN_143cbb490);
      _Init_thread_footer(&DAT_14cb724c8);
      return;
    }
  }
  return;
}



// FUNCTION 1460e2d58 FUN_1460e2d58 body=338 status=ok
// SIG undefined FUN_1460e2d58(void)

undefined4 * FUN_1460e2d58(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460e2f3e(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460e2eac(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb72480 - DAT_14cb724ac;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb724c0)) {
      uVar10 = DAT_14cb724c0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb724b8;
      if (DAT_14cb724b8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb724b0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb724c0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb724b8;
      if (DAT_14cb724b8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb724b0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb724c0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb724c0 = iVar9;
      FUN_1460e304c();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e2eac FUN_1460e2eac body=145 status=ok
// SIG undefined FUN_1460e2eac(void)

undefined8 FUN_1460e2eac(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb72480 - DAT_14cb724ac != 1) && (DAT_14cb72480 != DAT_14cb724ac)) {
    puVar6 = &DAT_14cb724b0;
    if (DAT_14cb724b8 != (undefined *)0x0) {
      puVar6 = DAT_14cb724b8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb724c0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb72478 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d91b44(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e2f3e FUN_1460e2f3e body=270 status=ok
// SIG undefined FUN_1460e2f3e(void)

int * FUN_1460e2f3e(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb724a8;
  iVar3 = DAT_14cb72480;
  if (DAT_14cb724ac == 0) {
    iVar2 = DAT_14cb72480 + 1;
    bVar7 = DAT_14cb72484 == DAT_14cb72480;
    DAT_14cb72480 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb72478,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb72488,1);
    puVar4 = DAT_14cb72498;
    if (DAT_14cb72498 == (undefined *)0x0) {
      puVar4 = &DAT_14cb72488;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb724a8;
    DAT_14cb724a8 = *(int *)(DAT_14cb72478 + 4 + lVar6 * 0x18);
    DAT_14cb724ac = DAT_14cb724ac + -1;
    if (DAT_14cb724ac != 0) {
      *(undefined4 *)(DAT_14cb72478 + (longlong)DAT_14cb724a8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb72488;
  if (DAT_14cb72498 != (undefined *)0x0) {
    puVar4 = DAT_14cb72498;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb72478;
  return param_1;
}



// FUNCTION 1460e304c FUN_1460e304c body=523 status=ok
// SIG undefined FUN_1460e304c(void)

void FUN_1460e304c(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb724b8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb724b8,0,0,4);
  }
  uVar3 = DAT_14cb724c0;
  uVar2 = local_50;
  if (DAT_14cb724c0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb724b0,0,DAT_14cb724c0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb724b8;
        if (DAT_14cb724b8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb724b0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb724c0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb72488;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb724a0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb72478;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb724c0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb724b8;
        if (DAT_14cb724b8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb724b0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb724c0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb724b8;
        if (DAT_14cb724b8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb724b0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb724c0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e3258 FUN_1460e3258 body=507 status=ok
// SIG undefined FUN_1460e3258(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e3258(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb726b0 = 0;
  FUN_1446ddc76(&DAT_14cb726b4,"OpportunisticAmbientAudioConfig",1);
  _DAT_14cb726c0 = 0;
  _DAT_14cb726c8 = 0;
  _DAT_14cb726d0 = 0;
  DAT_14cb726d8 = (void *)0x0;
  _DAT_14cb726e0 = 0;
  _DAT_14cb726e8 = FUN_1487e1a32;
  DAT_14cb726f0 = *param_1;
  DAT_14cb72700 = param_1[2];
  param_1[2] = 0;
  DAT_14cb72710._0_4_ = (undefined4)param_1[4];
  DAT_14cb72710._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb72718 = (undefined4)param_1[5];
  uRam000000014cb7271c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb72720 = (undefined4)param_1[6];
  uRam000000014cb72724 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb72728 = (undefined4)param_1[7];
  uRam000000014cb7272c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb726f0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb726c0 = 0;
  _DAT_14cb726c8 = local_68;
  _DAT_14cb726d0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb726e0 = CONCAT44(DAT_14cb726e4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb726e4 == 0) {
    _DAT_14cb726e0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb726d8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb726d8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb726b0) && ((DAT_14cb72638 == (int *)0x0 || (*DAT_14cb72638 < DAT_14cb726b0)))) {
    DAT_14cb72638 = &DAT_14cb726b0;
  }
  FUN_1460e3454();
  local_30 = &local_70;
  local_70 = &DAT_14cb726b0;
  local_38 = &DAT_14cb726b4;
  FUN_1460e34ee(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e3454 FUN_1460e3454 body=153 status=ok
// SIG undefined FUN_1460e3454(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e3454(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb72690) {
    FUN_144b3d300(&DAT_14cb72690);
    if (DAT_14cb72690 == -1) {
      DAT_14cb72660 = 0;
      DAT_14cb72668 = 0;
      DAT_14cb72640 = 0;
      _DAT_14cb72648 = 0;
      _DAT_14cb7266c = 0xffffffff00000080;
      DAT_14cb72674 = 0;
      DAT_14cb72680 = 0;
      DAT_14cb72688 = 0;
      atexit(FUN_143cbeeb8);
      _Init_thread_footer(&DAT_14cb72690);
      return;
    }
  }
  return;
}



// FUNCTION 1460e34ee FUN_1460e34ee body=338 status=ok
// SIG undefined FUN_1460e34ee(void)

undefined4 * FUN_1460e34ee(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460e36d4(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460e3642(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb72648 - DAT_14cb72674;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb72688)) {
      uVar10 = DAT_14cb72688 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb72680;
      if (DAT_14cb72680 == (undefined *)0x0) {
        puVar7 = &DAT_14cb72678;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb72688 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb72680;
      if (DAT_14cb72680 == (undefined *)0x0) {
        puVar7 = &DAT_14cb72678;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb72688 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb72688 = iVar9;
      FUN_1460e37e2();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e3642 FUN_1460e3642 body=145 status=ok
// SIG undefined FUN_1460e3642(void)

undefined8 FUN_1460e3642(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb72648 - DAT_14cb72674 != 1) && (DAT_14cb72648 != DAT_14cb72674)) {
    puVar6 = &DAT_14cb72678;
    if (DAT_14cb72680 != (undefined *)0x0) {
      puVar6 = DAT_14cb72680;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb72688 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb72640 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d91d30(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e36d4 FUN_1460e36d4 body=270 status=ok
// SIG undefined FUN_1460e36d4(void)

int * FUN_1460e36d4(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb72670;
  iVar3 = DAT_14cb72648;
  if (DAT_14cb72674 == 0) {
    iVar2 = DAT_14cb72648 + 1;
    bVar7 = DAT_14cb7264c == DAT_14cb72648;
    DAT_14cb72648 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb72640,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb72650,1);
    puVar4 = DAT_14cb72660;
    if (DAT_14cb72660 == (undefined *)0x0) {
      puVar4 = &DAT_14cb72650;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb72670;
    DAT_14cb72670 = *(int *)(DAT_14cb72640 + 4 + lVar6 * 0x18);
    DAT_14cb72674 = DAT_14cb72674 + -1;
    if (DAT_14cb72674 != 0) {
      *(undefined4 *)(DAT_14cb72640 + (longlong)DAT_14cb72670 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb72650;
  if (DAT_14cb72660 != (undefined *)0x0) {
    puVar4 = DAT_14cb72660;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb72640;
  return param_1;
}



// FUNCTION 1460e37e2 FUN_1460e37e2 body=523 status=ok
// SIG undefined FUN_1460e37e2(void)

void FUN_1460e37e2(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb72680 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb72680,0,0,4);
  }
  uVar3 = DAT_14cb72688;
  uVar2 = local_50;
  if (DAT_14cb72688 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb72678,0,DAT_14cb72688,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb72680;
        if (DAT_14cb72680 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72678;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb72688 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb72650;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb72668 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb72640;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb72688 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb72680;
        if (DAT_14cb72680 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72678;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb72688 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb72680;
        if (DAT_14cb72680 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72678;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb72688 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e39ee FUN_1460e39ee body=507 status=ok
// SIG undefined FUN_1460e39ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e39ee(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb727c0 = 0;
  FUN_1446ddc76(&DAT_14cb727c4,&DAT_14b3ef90c,1);
  _DAT_14cb727d0 = 0;
  _DAT_14cb727d8 = 0;
  _DAT_14cb727e0 = 0;
  DAT_14cb727e8 = (void *)0x0;
  _DAT_14cb727f0 = 0;
  _DAT_14cb727f8 = FUN_1487e1bcc;
  DAT_14cb72800 = *param_1;
  DAT_14cb72810 = param_1[2];
  param_1[2] = 0;
  DAT_14cb72820._0_4_ = (undefined4)param_1[4];
  DAT_14cb72820._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb72828 = (undefined4)param_1[5];
  uRam000000014cb7282c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb72830 = (undefined4)param_1[6];
  uRam000000014cb72834 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb72838 = (undefined4)param_1[7];
  uRam000000014cb7283c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb72800 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb727d0 = 0;
  _DAT_14cb727d8 = local_68;
  _DAT_14cb727e0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb727f0 = CONCAT44(DAT_14cb727f4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb727f4 == 0) {
    _DAT_14cb727f0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb727e8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb727e8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb727c0) && ((DAT_14cb72750 == (int *)0x0 || (*DAT_14cb72750 < DAT_14cb727c0)))) {
    DAT_14cb72750 = &DAT_14cb727c0;
  }
  FUN_1460e3bea();
  local_30 = &local_70;
  local_70 = &DAT_14cb727c0;
  local_38 = &DAT_14cb727c4;
  FUN_1460e3c84(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e3bea FUN_1460e3bea body=153 status=ok
// SIG undefined FUN_1460e3bea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e3bea(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb727a8) {
    FUN_144b3d300(&DAT_14cb727a8);
    if (DAT_14cb727a8 == -1) {
      DAT_14cb72778 = 0;
      DAT_14cb72780 = 0;
      DAT_14cb72758 = 0;
      _DAT_14cb72760 = 0;
      _DAT_14cb72784 = 0xffffffff00000080;
      DAT_14cb7278c = 0;
      DAT_14cb72798 = 0;
      DAT_14cb727a0 = 0;
      atexit(FUN_143cc5289);
      _Init_thread_footer(&DAT_14cb727a8);
      return;
    }
  }
  return;
}



// FUNCTION 1460e3c84 FUN_1460e3c84 body=338 status=ok
// SIG undefined FUN_1460e3c84(void)

undefined4 * FUN_1460e3c84(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460e3e6a(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460e3dd8(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb72760 - DAT_14cb7278c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb727a0)) {
      uVar10 = DAT_14cb727a0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb72798;
      if (DAT_14cb72798 == (undefined *)0x0) {
        puVar7 = &DAT_14cb72790;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb727a0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb72798;
      if (DAT_14cb72798 == (undefined *)0x0) {
        puVar7 = &DAT_14cb72790;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb727a0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb727a0 = iVar9;
      FUN_1460e3f78();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e3dd8 FUN_1460e3dd8 body=145 status=ok
// SIG undefined FUN_1460e3dd8(void)

undefined8 FUN_1460e3dd8(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb72760 - DAT_14cb7278c != 1) && (DAT_14cb72760 != DAT_14cb7278c)) {
    puVar6 = &DAT_14cb72790;
    if (DAT_14cb72798 != (undefined *)0x0) {
      puVar6 = DAT_14cb72798;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb727a0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb72758 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d91f1c(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e3e6a FUN_1460e3e6a body=270 status=ok
// SIG undefined FUN_1460e3e6a(void)

int * FUN_1460e3e6a(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb72788;
  iVar3 = DAT_14cb72760;
  if (DAT_14cb7278c == 0) {
    iVar2 = DAT_14cb72760 + 1;
    bVar7 = DAT_14cb72764 == DAT_14cb72760;
    DAT_14cb72760 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb72758,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb72768,1);
    puVar4 = DAT_14cb72778;
    if (DAT_14cb72778 == (undefined *)0x0) {
      puVar4 = &DAT_14cb72768;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb72788;
    DAT_14cb72788 = *(int *)(DAT_14cb72758 + 4 + lVar6 * 0x18);
    DAT_14cb7278c = DAT_14cb7278c + -1;
    if (DAT_14cb7278c != 0) {
      *(undefined4 *)(DAT_14cb72758 + (longlong)DAT_14cb72788 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb72768;
  if (DAT_14cb72778 != (undefined *)0x0) {
    puVar4 = DAT_14cb72778;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb72758;
  return param_1;
}



// FUNCTION 1460e3f78 FUN_1460e3f78 body=523 status=ok
// SIG undefined FUN_1460e3f78(void)

void FUN_1460e3f78(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb72798 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb72798,0,0,4);
  }
  uVar3 = DAT_14cb727a0;
  uVar2 = local_50;
  if (DAT_14cb727a0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb72790,0,DAT_14cb727a0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb72798;
        if (DAT_14cb72798 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72790;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb727a0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb72768;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb72780 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb72758;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb727a0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb72798;
        if (DAT_14cb72798 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72790;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb727a0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb72798;
        if (DAT_14cb72798 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72790;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb727a0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e4184 FUN_1460e4184 body=507 status=ok
// SIG undefined FUN_1460e4184(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e4184(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb728d0 = 0;
  FUN_1446ddc76(&DAT_14cb728d4,"RadioStation",1);
  _DAT_14cb728e0 = 0;
  _DAT_14cb728e8 = 0;
  _DAT_14cb728f0 = 0;
  DAT_14cb728f8 = (void *)0x0;
  _DAT_14cb72900 = 0;
  _DAT_14cb72908 = FUN_1487e1cc2;
  DAT_14cb72910 = *param_1;
  DAT_14cb72920 = param_1[2];
  param_1[2] = 0;
  DAT_14cb72930._0_4_ = (undefined4)param_1[4];
  DAT_14cb72930._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb72938 = (undefined4)param_1[5];
  uRam000000014cb7293c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb72940 = (undefined4)param_1[6];
  uRam000000014cb72944 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb72948 = (undefined4)param_1[7];
  uRam000000014cb7294c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb72910 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb728e0 = 0;
  _DAT_14cb728e8 = local_68;
  _DAT_14cb728f0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb72900 = CONCAT44(DAT_14cb72904,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb72904 == 0) {
    _DAT_14cb72900 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb728f8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb728f8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb728d0) && ((DAT_14cb72860 == (int *)0x0 || (*DAT_14cb72860 < DAT_14cb728d0)))) {
    DAT_14cb72860 = &DAT_14cb728d0;
  }
  FUN_1460e4380();
  local_30 = &local_70;
  local_70 = &DAT_14cb728d0;
  local_38 = &DAT_14cb728d4;
  FUN_1460e441a(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e4380 FUN_1460e4380 body=153 status=ok
// SIG undefined FUN_1460e4380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e4380(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb728b8) {
    FUN_144b3d300(&DAT_14cb728b8);
    if (DAT_14cb728b8 == -1) {
      DAT_14cb72888 = 0;
      DAT_14cb72890 = 0;
      DAT_14cb72868 = 0;
      _DAT_14cb72870 = 0;
      _DAT_14cb72894 = 0xffffffff00000080;
      DAT_14cb7289c = 0;
      DAT_14cb728a8 = 0;
      DAT_14cb728b0 = 0;
      atexit(FUN_143cc5378);
      _Init_thread_footer(&DAT_14cb728b8);
      return;
    }
  }
  return;
}



// FUNCTION 1460e441a FUN_1460e441a body=338 status=ok
// SIG undefined FUN_1460e441a(void)

undefined4 * FUN_1460e441a(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460e4600(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460e456e(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb72870 - DAT_14cb7289c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb728b0)) {
      uVar10 = DAT_14cb728b0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb728a8;
      if (DAT_14cb728a8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb728a0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb728b0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb728a8;
      if (DAT_14cb728a8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb728a0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb728b0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb728b0 = iVar9;
      FUN_1460e470e();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e456e FUN_1460e456e body=145 status=ok
// SIG undefined FUN_1460e456e(void)

undefined8 FUN_1460e456e(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb72870 - DAT_14cb7289c != 1) && (DAT_14cb72870 != DAT_14cb7289c)) {
    puVar6 = &DAT_14cb728a0;
    if (DAT_14cb728a8 != (undefined *)0x0) {
      puVar6 = DAT_14cb728a8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb728b0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb72868 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d92108(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e4600 FUN_1460e4600 body=270 status=ok
// SIG undefined FUN_1460e4600(void)

int * FUN_1460e4600(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb72898;
  iVar3 = DAT_14cb72870;
  if (DAT_14cb7289c == 0) {
    iVar2 = DAT_14cb72870 + 1;
    bVar7 = DAT_14cb72874 == DAT_14cb72870;
    DAT_14cb72870 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb72868,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb72878,1);
    puVar4 = DAT_14cb72888;
    if (DAT_14cb72888 == (undefined *)0x0) {
      puVar4 = &DAT_14cb72878;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb72898;
    DAT_14cb72898 = *(int *)(DAT_14cb72868 + 4 + lVar6 * 0x18);
    DAT_14cb7289c = DAT_14cb7289c + -1;
    if (DAT_14cb7289c != 0) {
      *(undefined4 *)(DAT_14cb72868 + (longlong)DAT_14cb72898 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb72878;
  if (DAT_14cb72888 != (undefined *)0x0) {
    puVar4 = DAT_14cb72888;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb72868;
  return param_1;
}



// FUNCTION 1460e470e FUN_1460e470e body=523 status=ok
// SIG undefined FUN_1460e470e(void)

void FUN_1460e470e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb728a8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb728a8,0,0,4);
  }
  uVar3 = DAT_14cb728b0;
  uVar2 = local_50;
  if (DAT_14cb728b0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb728a0,0,DAT_14cb728b0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb728a8;
        if (DAT_14cb728a8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb728a0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb728b0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb72878;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb72890 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb72868;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb728b0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb728a8;
        if (DAT_14cb728a8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb728a0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb728b0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb728a8;
        if (DAT_14cb728a8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb728a0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb728b0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e491a FUN_1460e491a body=507 status=ok
// SIG undefined FUN_1460e491a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e491a(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb729f0 = 0;
  FUN_1446ddc76(&DAT_14cb729f4,"gbxsymphonicambientaudio",1);
  _DAT_14cb72a00 = 0;
  _DAT_14cb72a08 = 0;
  _DAT_14cb72a10 = 0;
  DAT_14cb72a18 = (void *)0x0;
  _DAT_14cb72a20 = 0;
  _DAT_14cb72a28 = FUN_1487e268a;
  DAT_14cb72a30 = *param_1;
  DAT_14cb72a40 = param_1[2];
  param_1[2] = 0;
  DAT_14cb72a50._0_4_ = (undefined4)param_1[4];
  DAT_14cb72a50._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb72a58 = (undefined4)param_1[5];
  uRam000000014cb72a5c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb72a60 = (undefined4)param_1[6];
  uRam000000014cb72a64 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb72a68 = (undefined4)param_1[7];
  uRam000000014cb72a6c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb72a30 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb72a00 = 0;
  _DAT_14cb72a08 = local_68;
  _DAT_14cb72a10 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb72a20 = CONCAT44(DAT_14cb72a24,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb72a24 == 0) {
    _DAT_14cb72a20 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb72a18,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb72a18,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb729f0) && ((DAT_14cb72980 == (int *)0x0 || (*DAT_14cb72980 < DAT_14cb729f0)))) {
    DAT_14cb72980 = &DAT_14cb729f0;
  }
  FUN_1460e4b16();
  local_30 = &local_70;
  local_70 = &DAT_14cb729f0;
  local_38 = &DAT_14cb729f4;
  FUN_1460e4bb0(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e4b16 FUN_1460e4b16 body=153 status=ok
// SIG undefined FUN_1460e4b16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e4b16(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb729d8) {
    FUN_144b3d300(&DAT_14cb729d8);
    if (DAT_14cb729d8 == -1) {
      DAT_14cb729a8 = 0;
      DAT_14cb729b0 = 0;
      DAT_14cb72988 = 0;
      _DAT_14cb72990 = 0;
      _DAT_14cb729b4 = 0xffffffff00000080;
      DAT_14cb729bc = 0;
      DAT_14cb729c8 = 0;
      DAT_14cb729d0 = 0;
      atexit(FUN_143cc5da9);
      _Init_thread_footer(&DAT_14cb729d8);
      return;
    }
  }
  return;
}



// FUNCTION 1460e4bb0 FUN_1460e4bb0 body=338 status=ok
// SIG undefined FUN_1460e4bb0(void)

undefined4 * FUN_1460e4bb0(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460e4d96(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460e4d04(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb72990 - DAT_14cb729bc;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb729d0)) {
      uVar10 = DAT_14cb729d0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb729c8;
      if (DAT_14cb729c8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb729c0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb729d0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb729c8;
      if (DAT_14cb729c8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb729c0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb729d0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb729d0 = iVar9;
      FUN_1460e4ea4();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e4d04 FUN_1460e4d04 body=145 status=ok
// SIG undefined FUN_1460e4d04(void)

undefined8 FUN_1460e4d04(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb72990 - DAT_14cb729bc != 1) && (DAT_14cb72990 != DAT_14cb729bc)) {
    puVar6 = &DAT_14cb729c0;
    if (DAT_14cb729c8 != (undefined *)0x0) {
      puVar6 = DAT_14cb729c8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb729d0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb72988 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d922f4(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e4d96 FUN_1460e4d96 body=270 status=ok
// SIG undefined FUN_1460e4d96(void)

int * FUN_1460e4d96(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb729b8;
  iVar3 = DAT_14cb72990;
  if (DAT_14cb729bc == 0) {
    iVar2 = DAT_14cb72990 + 1;
    bVar7 = DAT_14cb72994 == DAT_14cb72990;
    DAT_14cb72990 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb72988,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb72998,1);
    puVar4 = DAT_14cb729a8;
    if (DAT_14cb729a8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb72998;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb729b8;
    DAT_14cb729b8 = *(int *)(DAT_14cb72988 + 4 + lVar6 * 0x18);
    DAT_14cb729bc = DAT_14cb729bc + -1;
    if (DAT_14cb729bc != 0) {
      *(undefined4 *)(DAT_14cb72988 + (longlong)DAT_14cb729b8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb72998;
  if (DAT_14cb729a8 != (undefined *)0x0) {
    puVar4 = DAT_14cb729a8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb72988;
  return param_1;
}



// FUNCTION 1460e4ea4 FUN_1460e4ea4 body=523 status=ok
// SIG undefined FUN_1460e4ea4(void)

void FUN_1460e4ea4(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb729c8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb729c8,0,0,4);
  }
  uVar3 = DAT_14cb729d0;
  uVar2 = local_50;
  if (DAT_14cb729d0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb729c0,0,DAT_14cb729d0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb729c8;
        if (DAT_14cb729c8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb729c0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb729d0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb72998;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb729b0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb72988;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb729d0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb729c8;
        if (DAT_14cb729c8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb729c0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb729d0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb729c8;
        if (DAT_14cb729c8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb729c0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb729d0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e50b0 FUN_1460e50b0 body=507 status=ok
// SIG undefined FUN_1460e50b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e50b0(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb72bb0 = 0;
  FUN_1446ddc76(&DAT_14cb72bb4,"GbxAvatarMaterialDriverDefs",1);
  _DAT_14cb72bc0 = 0;
  _DAT_14cb72bc8 = 0;
  _DAT_14cb72bd0 = 0;
  DAT_14cb72bd8 = (void *)0x0;
  _DAT_14cb72be0 = 0;
  _DAT_14cb72be8 = FUN_1487e2ae6;
  DAT_14cb72bf0 = *param_1;
  DAT_14cb72c00 = param_1[2];
  param_1[2] = 0;
  DAT_14cb72c10._0_4_ = (undefined4)param_1[4];
  DAT_14cb72c10._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb72c18 = (undefined4)param_1[5];
  uRam000000014cb72c1c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb72c20 = (undefined4)param_1[6];
  uRam000000014cb72c24 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb72c28 = (undefined4)param_1[7];
  uRam000000014cb72c2c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb72bf0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb72bc0 = 0;
  _DAT_14cb72bc8 = local_68;
  _DAT_14cb72bd0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb72be0 = CONCAT44(DAT_14cb72be4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb72be4 == 0) {
    _DAT_14cb72be0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb72bd8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb72bd8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb72bb0) && ((DAT_14cb72b38 == (int *)0x0 || (*DAT_14cb72b38 < DAT_14cb72bb0)))) {
    DAT_14cb72b38 = &DAT_14cb72bb0;
  }
  FUN_1460e52ac();
  local_30 = &local_70;
  local_70 = &DAT_14cb72bb0;
  local_38 = &DAT_14cb72bb4;
  FUN_1460e5346(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e52ac FUN_1460e52ac body=153 status=ok
// SIG undefined FUN_1460e52ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e52ac(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb72b90) {
    FUN_144b3d300(&DAT_14cb72b90);
    if (DAT_14cb72b90 == -1) {
      DAT_14cb72b60 = 0;
      DAT_14cb72b68 = 0;
      DAT_14cb72b40 = 0;
      _DAT_14cb72b48 = 0;
      _DAT_14cb72b6c = 0xffffffff00000080;
      DAT_14cb72b74 = 0;
      DAT_14cb72b80 = 0;
      DAT_14cb72b88 = 0;
      atexit(FUN_143cc64a9);
      _Init_thread_footer(&DAT_14cb72b90);
      return;
    }
  }
  return;
}



// FUNCTION 1460e5346 FUN_1460e5346 body=338 status=ok
// SIG undefined FUN_1460e5346(void)

undefined4 * FUN_1460e5346(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460e552c(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460e549a(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb72b48 - DAT_14cb72b74;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb72b88)) {
      uVar10 = DAT_14cb72b88 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb72b80;
      if (DAT_14cb72b80 == (undefined *)0x0) {
        puVar7 = &DAT_14cb72b78;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb72b88 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb72b80;
      if (DAT_14cb72b80 == (undefined *)0x0) {
        puVar7 = &DAT_14cb72b78;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb72b88 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb72b88 = iVar9;
      FUN_1460e563a();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e549a FUN_1460e549a body=145 status=ok
// SIG undefined FUN_1460e549a(void)

undefined8 FUN_1460e549a(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb72b48 - DAT_14cb72b74 != 1) && (DAT_14cb72b48 != DAT_14cb72b74)) {
    puVar6 = &DAT_14cb72b78;
    if (DAT_14cb72b80 != (undefined *)0x0) {
      puVar6 = DAT_14cb72b80;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb72b88 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb72b40 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d924e0(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e552c FUN_1460e552c body=270 status=ok
// SIG undefined FUN_1460e552c(void)

int * FUN_1460e552c(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb72b70;
  iVar3 = DAT_14cb72b48;
  if (DAT_14cb72b74 == 0) {
    iVar2 = DAT_14cb72b48 + 1;
    bVar7 = DAT_14cb72b4c == DAT_14cb72b48;
    DAT_14cb72b48 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb72b40,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb72b50,1);
    puVar4 = DAT_14cb72b60;
    if (DAT_14cb72b60 == (undefined *)0x0) {
      puVar4 = &DAT_14cb72b50;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb72b70;
    DAT_14cb72b70 = *(int *)(DAT_14cb72b40 + 4 + lVar6 * 0x18);
    DAT_14cb72b74 = DAT_14cb72b74 + -1;
    if (DAT_14cb72b74 != 0) {
      *(undefined4 *)(DAT_14cb72b40 + (longlong)DAT_14cb72b70 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb72b50;
  if (DAT_14cb72b60 != (undefined *)0x0) {
    puVar4 = DAT_14cb72b60;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb72b40;
  return param_1;
}



// FUNCTION 1460e563a FUN_1460e563a body=523 status=ok
// SIG undefined FUN_1460e563a(void)

void FUN_1460e563a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb72b80 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb72b80,0,0,4);
  }
  uVar3 = DAT_14cb72b88;
  uVar2 = local_50;
  if (DAT_14cb72b88 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb72b78,0,DAT_14cb72b88,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb72b80;
        if (DAT_14cb72b80 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72b78;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb72b88 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb72b50;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb72b68 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb72b40;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb72b88 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb72b80;
        if (DAT_14cb72b80 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72b78;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb72b88 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb72b80;
        if (DAT_14cb72b80 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72b78;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb72b88 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e5846 FUN_1460e5846 body=507 status=ok
// SIG undefined FUN_1460e5846(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e5846(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb72ca0 = 0;
  FUN_1446ddc76(&DAT_14cb72ca4,"GbxAvatarOptionDefs",1);
  _DAT_14cb72cb0 = 0;
  _DAT_14cb72cb8 = 0;
  _DAT_14cb72cc0 = 0;
  DAT_14cb72cc8 = (void *)0x0;
  _DAT_14cb72cd0 = 0;
  _DAT_14cb72cd8 = FUN_1487e2c22;
  DAT_14cb72ce0 = *param_1;
  DAT_14cb72cf0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb72d00._0_4_ = (undefined4)param_1[4];
  DAT_14cb72d00._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb72d08 = (undefined4)param_1[5];
  uRam000000014cb72d0c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb72d10 = (undefined4)param_1[6];
  uRam000000014cb72d14 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb72d18 = (undefined4)param_1[7];
  uRam000000014cb72d1c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb72ce0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb72cb0 = 0;
  _DAT_14cb72cb8 = local_68;
  _DAT_14cb72cc0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb72cd0 = CONCAT44(DAT_14cb72cd4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb72cd4 == 0) {
    _DAT_14cb72cd0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb72cc8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb72cc8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb72ca0) && ((DAT_14cb72c30 == (int *)0x0 || (*DAT_14cb72c30 < DAT_14cb72ca0)))) {
    DAT_14cb72c30 = &DAT_14cb72ca0;
  }
  FUN_1460e5a42();
  local_30 = &local_70;
  local_70 = &DAT_14cb72ca0;
  local_38 = &DAT_14cb72ca4;
  FUN_1460e5adc(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e5a42 FUN_1460e5a42 body=153 status=ok
// SIG undefined FUN_1460e5a42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e5a42(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb72c88) {
    FUN_144b3d300(&DAT_14cb72c88);
    if (DAT_14cb72c88 == -1) {
      DAT_14cb72c58 = 0;
      DAT_14cb72c60 = 0;
      DAT_14cb72c38 = 0;
      _DAT_14cb72c40 = 0;
      _DAT_14cb72c64 = 0xffffffff00000080;
      DAT_14cb72c6c = 0;
      DAT_14cb72c78 = 0;
      DAT_14cb72c80 = 0;
      atexit(FUN_143cc64d7);
      _Init_thread_footer(&DAT_14cb72c88);
      return;
    }
  }
  return;
}



// FUNCTION 1460e5adc FUN_1460e5adc body=338 status=ok
// SIG undefined FUN_1460e5adc(void)

undefined4 * FUN_1460e5adc(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460e5cc2(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460e5c30(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb72c40 - DAT_14cb72c6c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb72c80)) {
      uVar10 = DAT_14cb72c80 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb72c78;
      if (DAT_14cb72c78 == (undefined *)0x0) {
        puVar7 = &DAT_14cb72c70;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb72c80 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb72c78;
      if (DAT_14cb72c78 == (undefined *)0x0) {
        puVar7 = &DAT_14cb72c70;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb72c80 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb72c80 = iVar9;
      FUN_1460e5dd0();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e5c30 FUN_1460e5c30 body=145 status=ok
// SIG undefined FUN_1460e5c30(void)

undefined8 FUN_1460e5c30(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb72c40 - DAT_14cb72c6c != 1) && (DAT_14cb72c40 != DAT_14cb72c6c)) {
    puVar6 = &DAT_14cb72c70;
    if (DAT_14cb72c78 != (undefined *)0x0) {
      puVar6 = DAT_14cb72c78;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb72c80 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb72c38 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d926cc(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e5cc2 FUN_1460e5cc2 body=270 status=ok
// SIG undefined FUN_1460e5cc2(void)

int * FUN_1460e5cc2(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb72c68;
  iVar3 = DAT_14cb72c40;
  if (DAT_14cb72c6c == 0) {
    iVar2 = DAT_14cb72c40 + 1;
    bVar7 = DAT_14cb72c44 == DAT_14cb72c40;
    DAT_14cb72c40 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb72c38,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb72c48,1);
    puVar4 = DAT_14cb72c58;
    if (DAT_14cb72c58 == (undefined *)0x0) {
      puVar4 = &DAT_14cb72c48;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb72c68;
    DAT_14cb72c68 = *(int *)(DAT_14cb72c38 + 4 + lVar6 * 0x18);
    DAT_14cb72c6c = DAT_14cb72c6c + -1;
    if (DAT_14cb72c6c != 0) {
      *(undefined4 *)(DAT_14cb72c38 + (longlong)DAT_14cb72c68 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb72c48;
  if (DAT_14cb72c58 != (undefined *)0x0) {
    puVar4 = DAT_14cb72c58;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb72c38;
  return param_1;
}



// FUNCTION 1460e5dd0 FUN_1460e5dd0 body=523 status=ok
// SIG undefined FUN_1460e5dd0(void)

void FUN_1460e5dd0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb72c78 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb72c78,0,0,4);
  }
  uVar3 = DAT_14cb72c80;
  uVar2 = local_50;
  if (DAT_14cb72c80 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb72c70,0,DAT_14cb72c80,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb72c78;
        if (DAT_14cb72c78 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72c70;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb72c80 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb72c48;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb72c60 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb72c38;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb72c80 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb72c78;
        if (DAT_14cb72c78 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72c70;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb72c80 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb72c78;
        if (DAT_14cb72c78 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72c70;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb72c80 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e5fdc FUN_1460e5fdc body=507 status=ok
// SIG undefined FUN_1460e5fdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e5fdc(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb72d90 = 0;
  FUN_1446ddc76(&DAT_14cb72d94,"GbxAvatarPartDefs",1);
  _DAT_14cb72da0 = 0;
  _DAT_14cb72da8 = 0;
  _DAT_14cb72db0 = 0;
  DAT_14cb72db8 = (void *)0x0;
  _DAT_14cb72dc0 = 0;
  _DAT_14cb72dc8 = FUN_1487e2cf8;
  DAT_14cb72dd0 = *param_1;
  DAT_14cb72de0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb72df0._0_4_ = (undefined4)param_1[4];
  DAT_14cb72df0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb72df8 = (undefined4)param_1[5];
  uRam000000014cb72dfc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb72e00 = (undefined4)param_1[6];
  uRam000000014cb72e04 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb72e08 = (undefined4)param_1[7];
  uRam000000014cb72e0c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb72dd0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb72da0 = 0;
  _DAT_14cb72da8 = local_68;
  _DAT_14cb72db0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb72dc0 = CONCAT44(DAT_14cb72dc4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb72dc4 == 0) {
    _DAT_14cb72dc0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb72db8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb72db8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb72d90) && ((DAT_14cb72d20 == (int *)0x0 || (*DAT_14cb72d20 < DAT_14cb72d90)))) {
    DAT_14cb72d20 = &DAT_14cb72d90;
  }
  FUN_1460e61d8();
  local_30 = &local_70;
  local_70 = &DAT_14cb72d90;
  local_38 = &DAT_14cb72d94;
  FUN_1460e6272(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e61d8 FUN_1460e61d8 body=153 status=ok
// SIG undefined FUN_1460e61d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e61d8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb72d78) {
    FUN_144b3d300(&DAT_14cb72d78);
    if (DAT_14cb72d78 == -1) {
      DAT_14cb72d48 = 0;
      DAT_14cb72d50 = 0;
      DAT_14cb72d28 = 0;
      _DAT_14cb72d30 = 0;
      _DAT_14cb72d54 = 0xffffffff00000080;
      DAT_14cb72d5c = 0;
      DAT_14cb72d68 = 0;
      DAT_14cb72d70 = 0;
      atexit(FUN_143cc6505);
      _Init_thread_footer(&DAT_14cb72d78);
      return;
    }
  }
  return;
}



// FUNCTION 1460e6272 FUN_1460e6272 body=338 status=ok
// SIG undefined FUN_1460e6272(void)

undefined4 * FUN_1460e6272(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460e6458(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460e63c6(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb72d30 - DAT_14cb72d5c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb72d70)) {
      uVar10 = DAT_14cb72d70 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb72d68;
      if (DAT_14cb72d68 == (undefined *)0x0) {
        puVar7 = &DAT_14cb72d60;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb72d70 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb72d68;
      if (DAT_14cb72d68 == (undefined *)0x0) {
        puVar7 = &DAT_14cb72d60;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb72d70 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb72d70 = iVar9;
      FUN_1460e6566();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e63c6 FUN_1460e63c6 body=145 status=ok
// SIG undefined FUN_1460e63c6(void)

undefined8 FUN_1460e63c6(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb72d30 - DAT_14cb72d5c != 1) && (DAT_14cb72d30 != DAT_14cb72d5c)) {
    puVar6 = &DAT_14cb72d60;
    if (DAT_14cb72d68 != (undefined *)0x0) {
      puVar6 = DAT_14cb72d68;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb72d70 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb72d28 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d928b8(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e6458 FUN_1460e6458 body=270 status=ok
// SIG undefined FUN_1460e6458(void)

int * FUN_1460e6458(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb72d58;
  iVar3 = DAT_14cb72d30;
  if (DAT_14cb72d5c == 0) {
    iVar2 = DAT_14cb72d30 + 1;
    bVar7 = DAT_14cb72d34 == DAT_14cb72d30;
    DAT_14cb72d30 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb72d28,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb72d38,1);
    puVar4 = DAT_14cb72d48;
    if (DAT_14cb72d48 == (undefined *)0x0) {
      puVar4 = &DAT_14cb72d38;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb72d58;
    DAT_14cb72d58 = *(int *)(DAT_14cb72d28 + 4 + lVar6 * 0x18);
    DAT_14cb72d5c = DAT_14cb72d5c + -1;
    if (DAT_14cb72d5c != 0) {
      *(undefined4 *)(DAT_14cb72d28 + (longlong)DAT_14cb72d58 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb72d38;
  if (DAT_14cb72d48 != (undefined *)0x0) {
    puVar4 = DAT_14cb72d48;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb72d28;
  return param_1;
}



// FUNCTION 1460e6566 FUN_1460e6566 body=523 status=ok
// SIG undefined FUN_1460e6566(void)

void FUN_1460e6566(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb72d68 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb72d68,0,0,4);
  }
  uVar3 = DAT_14cb72d70;
  uVar2 = local_50;
  if (DAT_14cb72d70 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb72d60,0,DAT_14cb72d70,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb72d68;
        if (DAT_14cb72d68 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72d60;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb72d70 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb72d38;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb72d50 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb72d28;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb72d70 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb72d68;
        if (DAT_14cb72d68 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72d60;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb72d70 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb72d68;
        if (DAT_14cb72d68 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72d60;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb72d70 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e6772 FUN_1460e6772 body=507 status=ok
// SIG undefined FUN_1460e6772(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e6772(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb72e80 = 0;
  FUN_1446ddc76(&DAT_14cb72e84,"GbxAvatarAspectDefs",1);
  _DAT_14cb72e90 = 0;
  _DAT_14cb72e98 = 0;
  _DAT_14cb72ea0 = 0;
  DAT_14cb72ea8 = (void *)0x0;
  _DAT_14cb72eb0 = 0;
  _DAT_14cb72eb8 = FUN_1487e2dce;
  DAT_14cb72ec0 = *param_1;
  DAT_14cb72ed0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb72ee0._0_4_ = (undefined4)param_1[4];
  DAT_14cb72ee0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb72ee8 = (undefined4)param_1[5];
  uRam000000014cb72eec = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb72ef0 = (undefined4)param_1[6];
  uRam000000014cb72ef4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb72ef8 = (undefined4)param_1[7];
  uRam000000014cb72efc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb72ec0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb72e90 = 0;
  _DAT_14cb72e98 = local_68;
  _DAT_14cb72ea0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb72eb0 = CONCAT44(DAT_14cb72eb4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb72eb4 == 0) {
    _DAT_14cb72eb0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb72ea8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb72ea8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb72e80) && ((DAT_14cb72e10 == (int *)0x0 || (*DAT_14cb72e10 < DAT_14cb72e80)))) {
    DAT_14cb72e10 = &DAT_14cb72e80;
  }
  FUN_1460e696e();
  local_30 = &local_70;
  local_70 = &DAT_14cb72e80;
  local_38 = &DAT_14cb72e84;
  FUN_1460e6a08(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e696e FUN_1460e696e body=153 status=ok
// SIG undefined FUN_1460e696e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e696e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb72e68) {
    FUN_144b3d300(&DAT_14cb72e68);
    if (DAT_14cb72e68 == -1) {
      DAT_14cb72e38 = 0;
      DAT_14cb72e40 = 0;
      DAT_14cb72e18 = 0;
      _DAT_14cb72e20 = 0;
      _DAT_14cb72e44 = 0xffffffff00000080;
      DAT_14cb72e4c = 0;
      DAT_14cb72e58 = 0;
      DAT_14cb72e60 = 0;
      atexit(FUN_143cc6533);
      _Init_thread_footer(&DAT_14cb72e68);
      return;
    }
  }
  return;
}



// FUNCTION 1460e6a08 FUN_1460e6a08 body=338 status=ok
// SIG undefined FUN_1460e6a08(void)

undefined4 * FUN_1460e6a08(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460e6bee(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460e6b5c(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb72e20 - DAT_14cb72e4c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb72e60)) {
      uVar10 = DAT_14cb72e60 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb72e58;
      if (DAT_14cb72e58 == (undefined *)0x0) {
        puVar7 = &DAT_14cb72e50;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb72e60 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb72e58;
      if (DAT_14cb72e58 == (undefined *)0x0) {
        puVar7 = &DAT_14cb72e50;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb72e60 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb72e60 = iVar9;
      FUN_1460e6cfc();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460e6b5c FUN_1460e6b5c body=145 status=ok
// SIG undefined FUN_1460e6b5c(void)

undefined8 FUN_1460e6b5c(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb72e20 - DAT_14cb72e4c != 1) && (DAT_14cb72e20 != DAT_14cb72e4c)) {
    puVar6 = &DAT_14cb72e50;
    if (DAT_14cb72e58 != (undefined *)0x0) {
      puVar6 = DAT_14cb72e58;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb72e60 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb72e18 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d92aa4(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1460e6bee FUN_1460e6bee body=270 status=ok
// SIG undefined FUN_1460e6bee(void)

int * FUN_1460e6bee(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb72e48;
  iVar3 = DAT_14cb72e20;
  if (DAT_14cb72e4c == 0) {
    iVar2 = DAT_14cb72e20 + 1;
    bVar7 = DAT_14cb72e24 == DAT_14cb72e20;
    DAT_14cb72e20 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb72e18,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb72e28,1);
    puVar4 = DAT_14cb72e38;
    if (DAT_14cb72e38 == (undefined *)0x0) {
      puVar4 = &DAT_14cb72e28;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb72e48;
    DAT_14cb72e48 = *(int *)(DAT_14cb72e18 + 4 + lVar6 * 0x18);
    DAT_14cb72e4c = DAT_14cb72e4c + -1;
    if (DAT_14cb72e4c != 0) {
      *(undefined4 *)(DAT_14cb72e18 + (longlong)DAT_14cb72e48 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb72e28;
  if (DAT_14cb72e38 != (undefined *)0x0) {
    puVar4 = DAT_14cb72e38;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb72e18;
  return param_1;
}



// FUNCTION 1460e6cfc FUN_1460e6cfc body=523 status=ok
// SIG undefined FUN_1460e6cfc(void)

void FUN_1460e6cfc(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb72e58 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb72e58,0,0,4);
  }
  uVar3 = DAT_14cb72e60;
  uVar2 = local_50;
  if (DAT_14cb72e60 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb72e50,0,DAT_14cb72e60,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb72e58;
        if (DAT_14cb72e58 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72e50;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb72e60 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb72e28;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb72e40 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb72e18;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb72e60 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb72e58;
        if (DAT_14cb72e58 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72e50;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb72e60 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb72e58;
        if (DAT_14cb72e58 == (undefined *)0x0) {
          puVar6 = &DAT_14cb72e50;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb72e60 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460e6f08 FUN_1460e6f08 body=507 status=ok
// SIG undefined FUN_1460e6f08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460e6f08(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb72f70 = 0;
  FUN_1446ddc76(&DAT_14cb72f74,"GbxAvatarFormDefs",1);
  _DAT_14cb72f80 = 0;
  _DAT_14cb72f88 = 0;
  _DAT_14cb72f90 = 0;
  DAT_14cb72f98 = (void *)0x0;
  _DAT_14cb72fa0 = 0;
  _DAT_14cb72fa8 = FUN_1487e2e8c;
  DAT_14cb72fb0 = *param_1;
  DAT_14cb72fc0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb72fd0._0_4_ = (undefined4)param_1[4];
  DAT_14cb72fd0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb72fd8 = (undefined4)param_1[5];
  uRam000000014cb72fdc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb72fe0 = (undefined4)param_1[6];
  uRam000000014cb72fe4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb72fe8 = (undefined4)param_1[7];
  uRam000000014cb72fec = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb72fb0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb72f80 = 0;
  _DAT_14cb72f88 = local_68;
  _DAT_14cb72f90 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb72fa0 = CONCAT44(DAT_14cb72fa4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb72fa4 == 0) {
    _DAT_14cb72fa0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb72f98,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb72f98,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb72f70) && ((DAT_14cb72f00 == (int *)0x0 || (*DAT_14cb72f00 < DAT_14cb72f70)))) {
    DAT_14cb72f00 = &DAT_14cb72f70;
  }
  FUN_1460e7104();
  local_30 = &local_70;
  local_70 = &DAT_14cb72f70;
  local_38 = &DAT_14cb72f74;
  FUN_1460e719e(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


