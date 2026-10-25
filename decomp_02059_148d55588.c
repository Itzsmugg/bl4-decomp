// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148d55588 FUN_148d55588 body=29 status=ok
// SIG undefined FUN_148d55588(void)

undefined8 FUN_148d55588(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d555a6 FUN_148d555a6 body=156 status=ok
// SIG undefined FUN_148d555a6(void)

undefined8 * FUN_148d555a6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14b976920;
  FUN_1412d0edc(param_1 + 2);
  param_1[2] = &PTR_FUN_14b976940;
  FUN_148d5568e(param_1 + 0x6b,param_3);
  iVar1 = *(int *)(param_1 + 0x62);
  uVar2 = rand();
  *(float *)(param_1 + 0x8e) = ((float)(uVar2 & 0x7fff) / 32767.0) * (360.0 / (float)iVar1) + 0.0;
  return param_1;
}



// FUNCTION 148d55642 FUN_148d55642 body=45 status=ok
// SIG undefined FUN_148d55642(void)

void FUN_148d55642(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b976940;
  FUN_148d52eb2(param_1 + 0x358);
  FUN_1488e5482(param_1 + 0x10);
  return;
}



// FUNCTION 148d55670 FUN_148d55670 body=29 status=ok
// SIG undefined FUN_148d55670(void)

undefined8 FUN_148d55670(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d5568e FUN_148d5568e body=148 status=ok
// SIG undefined FUN_148d5568e(void)

undefined8 * FUN_148d5568e(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar2 = param_2[2];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  FUN_1418a644c(param_1 + 6,param_2 + 6);
  cVar1 = *(char *)((longlong)param_2 + 0x104);
  *(char *)((longlong)param_1 + 0x104) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  }
  uVar3 = param_2[0x21];
  *(undefined8 *)((longlong)param_1 + 0x10d) = *(undefined8 *)((longlong)param_2 + 0x10d);
  param_1[0x21] = uVar3;
  return param_1;
}



// FUNCTION 148d55722 FUN_148d55722 body=63 status=ok
// SIG undefined FUN_148d55722(void)

undefined8 * FUN_148d55722(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b976940;
  FUN_148d52eb2(param_1 + 0x69);
  FUN_1488e5482(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d55762 FUN_148d55762 body=83 status=ok
// SIG undefined FUN_148d55762(void)

longlong * FUN_148d55762(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_146574052();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148d557e2 FUN_148d557e2 body=338 status=ok
// SIG undefined FUN_148d557e2(void)

void FUN_148d557e2(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x30);
    if (plVar5 == (longlong *)0x0) goto LAB_148d5587c;
    *(undefined8 *)(param_1 + 0x30) = 0;
LAB_148d55839:
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
    if (plVar4 == (longlong *)0x0) goto LAB_148d5587c;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x30);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
      *(longlong **)(param_1 + 0x30) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_148d55839;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_148d5587c:
  local_40 = *param_3;
  local_38 = param_3[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_1411eee24(param_1,param_2,&local_40);
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d55936 FUN_148d55936 body=609 status=ok
// SIG undefined FUN_148d55936(void)

void FUN_148d55936(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  undefined4 uVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = FUN_14479d2ce(param_1 + 0x18);
  if (*(char *)(lVar6 + 0x178) == '\x03') {
    (**(code **)(*(longlong *)(lVar6 + 0x1878) + 0x20))(lVar6 + 0x1878,&local_68);
    lVar5 = local_68;
    if (local_68 != 0) {
      uVar7 = FUN_146228eb6();
      lVar3 = *(longlong *)(lVar5 + 0x200);
      if (lVar3 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_1403f69f4(lVar3,uVar7,0);
      }
      FUN_140d4c8ba(lVar5,local_58,uVar7);
      uVar9 = FUN_144a7b41a(local_58,0);
      *(undefined4 *)(param_1 + 0x40) = uVar9;
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar4 != (code *)0x0) {
        ppppuVar8 = local_58;
        if (0x18 < local_40) {
          ppppuVar8 = (undefined8 ****)local_58[0];
        }
        (*pcVar4)(ppppuVar8);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(local_58[0]);
      }
      lVar3 = local_68;
      uVar7 = FUN_146228eb6();
      lVar5 = *(longlong *)(lVar3 + 0x200);
      if (lVar5 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_1403f69f4(lVar5,uVar7,1);
      }
      FUN_140d4c8ba(lVar3,local_58,uVar7);
      uVar9 = FUN_144a7b41a(local_58,0);
      *(undefined4 *)(param_1 + 0x44) = uVar9;
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar4 != (code *)0x0) {
        ppppuVar8 = local_58;
        if (0x18 < local_40) {
          ppppuVar8 = (undefined8 ****)local_58[0];
        }
        (*pcVar4)(ppppuVar8);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(local_58[0]);
      }
      uVar7 = FUN_146228eb6();
      if (*(longlong *)(local_68 + 0x200) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_1403f69f4(*(longlong *)(local_68 + 0x200),uVar7,2);
      }
      FUN_140d4c8ba(local_68,local_58,uVar7);
      uVar9 = FUN_144a7b41a(local_58,0);
      *(undefined4 *)(param_1 + 0x48) = uVar9;
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar4 != (code *)0x0) {
        ppppuVar8 = local_58;
        if (0x18 < local_40) {
          ppppuVar8 = (undefined8 ****)local_58[0];
        }
        (*pcVar4)(ppppuVar8);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(local_58[0]);
      }
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
    FUN_148d55b98(lVar6,1,*(undefined1 *)(param_1 + 0x20));
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d55b98 FUN_148d55b98 body=441 status=ok
// SIG undefined FUN_148d55b98(void)

void FUN_148d55b98(longlong param_1,char param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(uint *)(param_1 + 0x1ce0) >> (param_2 * '\x02' & 0x1fU) & 3) != 0)
  goto switchD_148d55c22_default;
  switch(param_2) {
  case '\0':
    lVar2 = param_1 + 0xd68;
    puVar3 = &local_58;
    FUN_148d58252(puVar3);
    break;
  case '\x01':
    lVar2 = param_1 + 0xd78;
    puVar3 = &local_60;
    FUN_148d58364(puVar3);
    break;
  case '\x02':
    FUN_148d5846c(&local_68);
    local_50 = 0;
    FUN_14485c47a(&local_50,param_1);
    local_48 = local_68;
    FUN_14113f0c0(&local_50);
    FUN_14053c012(param_1 + 0xd28,&local_50);
    lVar2 = param_1 + 0xd18;
    FUN_148d5846c(&local_70);
    uVar1 = local_70;
    goto LAB_148d55d04;
  case '\x03':
    lVar2 = *(longlong *)(param_1 + 0xe38);
    if (lVar2 != 0) {
      if (*(char *)(lVar2 + 0x4d4) == '\x01') {
        lVar2 = lVar2 + 0x2e0;
        puVar3 = &local_78;
      }
      else {
        lVar2 = lVar2 + 0x1c0;
        puVar3 = &local_80;
      }
      FUN_148d585e2(puVar3);
      FUN_148d5857c(lVar2,param_1,*puVar3);
    }
    goto switchD_148d55c22_default;
  case '\x04':
    lVar2 = param_1 + 0xd88;
    puVar3 = &local_88;
    FUN_148d586fc(puVar3);
    break;
  default:
    goto switchD_148d55c22_default;
  }
  uVar1 = *puVar3;
LAB_148d55d04:
  local_50 = 0;
  FUN_14485c47a(&local_50,param_1);
  local_48 = uVar1;
  FUN_14113f0c0(&local_50);
  FUN_14053c012(lVar2,&local_50);
switchD_148d55c22_default:
  *(uint *)(param_1 + 0x1ce0) =
       *(uint *)(param_1 + 0x1ce0) | 1 << (param_2 * '\x02' + param_3 & 0x1fU);
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d55d52 FUN_148d55d52 body=116 status=ok
// SIG undefined FUN_148d55d52(void)

void FUN_148d55d52(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x50);
    lVar3 = FUN_1447210f0(uVar2);
    if (lVar3 != 0) {
      uVar4 = FUN_1401b4c98(uVar2);
      lVar3 = FUN_144a61814(uVar4,puVar1);
      if (lVar3 != 0) {
        FUN_1405a424c(uVar4,*puVar1);
      }
    }
    *puVar1 = 0;
  }
  FUN_148d55dc6(uVar2,1,*(undefined1 *)(param_1 + 0x20));
  return;
}



// FUNCTION 148d55dc6 FUN_148d55dc6 body=380 status=ok
// SIG undefined FUN_148d55dc6(void)

void FUN_148d55dc6(longlong param_1,byte param_2,byte param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *(uint *)(param_1 + 0x1ce0) & ~(1 << ((uint)param_3 + (uint)param_2 * 2 & 0x1f));
  *(uint *)(param_1 + 0x1ce0) = uVar3;
  if ((uVar3 >> (param_2 * '\x02' & 0x1f) & 3) == 0) {
    switch(param_2) {
    case 0:
      lVar2 = param_1 + 0xd68;
      puVar1 = &local_30;
      FUN_148d58252(puVar1);
      break;
    case 1:
      lVar2 = param_1 + 0xd78;
      puVar1 = &local_38;
      FUN_148d58364(puVar1);
      break;
    case 2:
      FUN_148d5846c(&local_40);
      FUN_1409ca370(param_1 + 0xd28,param_1,local_40);
      FUN_144a7b126(param_1 + 0xd28,&local_21,1);
      lVar2 = param_1 + 0xd18;
      puVar1 = &local_48;
      FUN_148d5846c(puVar1);
      break;
    case 3:
      if (*(longlong *)(param_1 + 0xe38) == 0) goto switchD_148d55e3a_default;
      lVar2 = *(longlong *)(param_1 + 0xe38) + 0x2e0;
      FUN_148d585e2(&local_50);
      FUN_1409ca370(lVar2,param_1,local_50);
      FUN_144a7b126(lVar2,&local_21,1);
      lVar2 = *(longlong *)(param_1 + 0xe38) + 0x1c0;
      puVar1 = &local_58;
      FUN_148d585e2(puVar1);
      break;
    case 4:
      lVar2 = param_1 + 0xd88;
      puVar1 = &local_60;
      FUN_148d586fc(puVar1);
      break;
    default:
      goto switchD_148d55e3a_default;
    }
    FUN_1409ca370(lVar2,param_1,*puVar1);
    FUN_144a7b126(lVar2,&local_21,1);
  }
switchD_148d55e3a_default:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d55f44 FUN_148d55f44 body=123 status=ok
// SIG undefined FUN_148d55f44(void)

void FUN_148d55f44(longlong param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  longlong *plVar4;
  
  *(undefined8 *)(param_1 + 0x58) = 0;
  plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x18);
  if (((plVar4 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
     ((char)plVar4[0x2f] == '\x03')) {
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x28) + 0x1c0);
    (**(code **)(*plVar4 + 0x578))(plVar4);
    bVar2 = (*(byte *)(plVar4 + 0x369) & 0xf) + 1;
    bVar3 = bVar2 | 0x10;
    if (cVar1 == '\0') {
      bVar3 = bVar2;
    }
    *(byte *)(plVar4 + 0x369) = bVar3;
    FUN_148d5881a(plVar4);
    return;
  }
  return;
}



// FUNCTION 148d55fc0 FUN_148d55fc0 body=79 status=ok
// SIG undefined FUN_148d55fc0(void)

void FUN_148d55fc0(longlong *param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  
  if ((char)param_1[0x2f] != '\x03') {
    return;
  }
  (**(code **)(*param_1 + 0x578))();
  bVar1 = (*(byte *)(param_1 + 0x369) & 0xf) + 1;
  bVar2 = bVar1 | 0x10;
  if (param_2 == '\0') {
    bVar2 = bVar1;
  }
  *(byte *)(param_1 + 0x369) = bVar2;
  FUN_148d5881a(param_1);
  return;
}



// FUNCTION 148d56017 FUN_148d56017 body=66 status=ok
// SIG undefined FUN_148d56017(void)

undefined8 FUN_148d56017(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_14492b4b4();
  if (lVar2 != 0) {
    iVar1 = FUN_1418c5c2a(lVar2,param_2);
    if (iVar1 == 0) {
      if (param_3[1] != '\x01') {
        return 0;
      }
    }
    else if ((iVar1 == 2) && (*param_3 == '\0')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 148d56059 FUN_148d56059 body=164 status=ok
// SIG undefined FUN_148d56059(void)

undefined1 FUN_148d56059(longlong param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    if (param_2 != param_1) {
      uVar3 = FUN_144a7b040();
      plVar4 = (longlong *)FUN_144718840(param_2,uVar3);
      lVar5 = FUN_144a7cacc();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) {
        if (plVar4 == (longlong *)0x0) goto LAB_148d560ca;
        if ((param_3[1] == '\x01') &&
           ((param_3[4] != '\0' || (cVar1 = (**(code **)(*plVar4 + 0x40))(plVar4), cVar1 == '\0'))))
        {
          param_3 = param_3 + 2;
          goto LAB_148d560e6;
        }
      }
      else if (param_3[5] == '\x01') {
        param_3 = param_3 + 6;
LAB_148d560e6:
        uVar2 = FUN_148d56017(param_1,param_2,param_3);
        return uVar2;
      }
    }
    return 0;
  }
LAB_148d560ca:
  return *param_3;
}



// FUNCTION 148d560fe FUN_148d560fe body=338 status=ok
// SIG undefined FUN_148d560fe(void)

void FUN_148d560fe(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x30);
    if (plVar5 == (longlong *)0x0) goto LAB_148d56198;
    *(undefined8 *)(param_1 + 0x30) = 0;
LAB_148d56155:
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
    if (plVar4 == (longlong *)0x0) goto LAB_148d56198;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x30);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
      *(longlong **)(param_1 + 0x30) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_148d56155;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_148d56198:
  local_40 = *param_3;
  local_38 = param_3[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_1411eee24(param_1,param_2,&local_40);
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d56252 FUN_148d56252 body=107 status=ok
// SIG undefined FUN_148d56252(void)

void FUN_148d56252(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfe;
  if (*(char *)(lVar2 + 0x178) == '\x03') {
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x28) + 0x78);
    if ((bVar1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x39) = 1;
      FUN_148d55b98(lVar2,2,*(undefined1 *)(param_1 + 0x20));
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x28) + 0x78);
    }
    if ((bVar1 & 2) != 0) {
      *(undefined1 *)(param_1 + 0x39) = 1;
      FUN_148d55b98(lVar2,3,*(undefined1 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}



// FUNCTION 148d562be FUN_148d562be body=96 status=ok
// SIG undefined FUN_148d562be(void)

void FUN_148d562be(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (*(char *)(param_1 + 0x39) == '\x01') {
    *(undefined1 *)(param_1 + 0x39) = 0;
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x28) + 0x78);
    if ((bVar1 & 1) != 0) {
      FUN_148d55dc6(uVar2,2,*(undefined1 *)(param_1 + 0x20));
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x28) + 0x78);
    }
    if ((bVar1 & 2) != 0) {
      FUN_148d55dc6(uVar2,3,*(undefined1 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}



// FUNCTION 148d56330 FUN_148d56330 body=338 status=ok
// SIG undefined FUN_148d56330(void)

void FUN_148d56330(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x30);
    if (plVar5 == (longlong *)0x0) goto LAB_148d563ca;
    *(undefined8 *)(param_1 + 0x30) = 0;
LAB_148d56387:
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
    if (plVar4 == (longlong *)0x0) goto LAB_148d563ca;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x30);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
      *(longlong **)(param_1 + 0x30) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_148d56387;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_148d563ca:
  local_40 = *param_3;
  local_38 = param_3[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_1411eee24(param_1,param_2,&local_40);
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d56484 FUN_148d56484 body=1519 status=ok
// SIG undefined FUN_148d56484(void)

void FUN_148d56484(undefined8 ****param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 ****ppppuVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 ****ppppuVar12;
  undefined8 *****pppppuVar13;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  undefined8 ****local_60;
  undefined4 local_58;
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar10 = FUN_14479d2ce(param_1 + 3);
  (**(code **)(*(longlong *)(lVar10 + 0x1878) + 0x20))(lVar10 + 0x1878,&local_70);
  lVar5 = local_70;
  if (local_70 != 0) {
    uVar11 = FUN_14147eb70();
    lVar3 = *(longlong *)(lVar5 + 0x200);
    if (lVar3 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_1403f69f4(lVar3,uVar11,0);
    }
    FUN_140d4c8ba(lVar5,&local_60,uVar11);
    uVar8 = FUN_1405d5f74(&local_60);
    *(undefined4 *)(param_1 + 7) = uVar8;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppppuVar13 = &local_60;
      if (0x18 < local_48) {
        pppppuVar13 = (undefined8 *****)local_60;
      }
      (*pcVar4)(pppppuVar13);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60);
    }
    lVar3 = local_70;
    uVar11 = FUN_14147eb70();
    lVar5 = *(longlong *)(lVar3 + 0x200);
    if (lVar5 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_1403f69f4(lVar5,uVar11,1);
    }
    FUN_140d4c8ba(lVar3,&local_60,uVar11);
    uVar8 = FUN_144a7ecd0(&local_60);
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar8;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppppuVar13 = &local_60;
      if (0x18 < local_48) {
        pppppuVar13 = (undefined8 *****)local_60;
      }
      (*pcVar4)(pppppuVar13);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60);
    }
    lVar3 = local_70;
    uVar11 = FUN_14147eb70();
    lVar5 = *(longlong *)(lVar3 + 0x200);
    if (lVar5 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_1403f69f4(lVar5,uVar11,2);
    }
    FUN_140d4c8ba(lVar3,&local_60,uVar11);
    uVar8 = FUN_144a7ecd0(&local_60);
    *(undefined4 *)(param_1 + 8) = uVar8;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppppuVar13 = &local_60;
      if (0x18 < local_48) {
        pppppuVar13 = (undefined8 *****)local_60;
      }
      (*pcVar4)(pppppuVar13);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60);
    }
    lVar3 = local_70;
    uVar11 = FUN_14147eb70();
    lVar5 = *(longlong *)(lVar3 + 0x200);
    if (lVar5 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_1403f69f4(lVar5,uVar11,3);
    }
    FUN_140d4c8ba(lVar3,&local_60,uVar11);
    iVar9 = FUN_1405d5f74(&local_60);
    *(bool *)((longlong)param_1 + 0x55) = 0 < iVar9;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppppuVar13 = &local_60;
      if (0x18 < local_48) {
        pppppuVar13 = (undefined8 *****)local_60;
      }
      (*pcVar4)(pppppuVar13);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60);
    }
    lVar3 = local_70;
    uVar11 = FUN_14147eb70();
    lVar5 = *(longlong *)(lVar3 + 0x200);
    if (lVar5 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_1403f69f4(lVar5,uVar11,4);
    }
    FUN_140d4c8ba(lVar3,&local_60,uVar11);
    uVar8 = FUN_144a7ecd0(&local_60);
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar8;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppppuVar13 = &local_60;
      if (0x18 < local_48) {
        pppppuVar13 = (undefined8 *****)local_60;
      }
      (*pcVar4)(pppppuVar13);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60);
    }
    uVar11 = FUN_14147eb70();
    if (*(longlong *)(local_70 + 0x200) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_1403f69f4(*(longlong *)(local_70 + 0x200),uVar11,5);
    }
    FUN_140d4c8ba(local_70,&local_60,uVar11);
    uVar8 = FUN_144a7ecd0(&local_60);
    *(undefined4 *)(param_1 + 9) = uVar8;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppppuVar13 = &local_60;
      if (0x18 < local_48) {
        pppppuVar13 = (undefined8 *****)local_60;
      }
      (*pcVar4)(pppppuVar13);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60);
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if (*(char *)(lVar10 + 0x178) == '\x03') {
    bVar7 = *(byte *)(param_1[5] + 0x16);
    if ((bVar7 & 1) != 0) {
      *(undefined1 *)((longlong)param_1 + 0x54) = 1;
      FUN_148d55b98(lVar10,0,*(undefined1 *)(param_1 + 4));
      bVar7 = *(byte *)(param_1[5] + 0x16);
    }
    if ((bVar7 & 2) != 0) {
      *(undefined1 *)((longlong)param_1 + 0x54) = 1;
      FUN_148d55b98(lVar10,2,*(undefined1 *)(param_1 + 4));
      bVar7 = *(byte *)(param_1[5] + 0x16);
    }
    if ((bVar7 & 4) != 0) {
      *(undefined1 *)((longlong)param_1 + 0x54) = 1;
      FUN_148d55b98(lVar10,3,*(undefined1 *)(param_1 + 4));
    }
  }
  lVar5 = *(longlong *)(lVar10 + 0xe38);
  if (lVar5 != 0) {
    local_60 = (undefined8 *****)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    ppppuVar6 = local_60;
    local_58 = 3;
    *local_60 = (undefined8 ***)&PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    ppppuVar12 = (undefined8 ****)(DAT_14c758608 + 1);
    lVar3 = DAT_14c758608 + 1;
    if (ppppuVar12 == (undefined8 ****)0x0) {
      LOCK();
      UNLOCK();
      ppppuVar12 = (undefined8 ****)(DAT_14c758608 + 2);
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_60[2] = ppppuVar12;
    *local_60 = (undefined8 ***)&PTR_FUN_14b977990;
    local_60[3] = (undefined8 ****)0x0;
    FUN_14485c47a(local_60 + 3,lVar10);
    ppppuVar6[4] = param_1;
    FUN_1448b6402(lVar5 + 800,&local_70,&local_60);
    FUN_1449db362(&local_60);
    FUN_14893d108(lVar5,*(undefined4 *)(param_1 + 7));
    if (*(char *)((longlong)param_1 + 0x55) == '\x01') {
      local_60 = (undefined8 *****)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      ppppuVar6 = local_60;
      local_58 = 3;
      *local_60 = (undefined8 ***)&PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      ppppuVar12 = (undefined8 ****)(DAT_14c758608 + 1);
      lVar3 = DAT_14c758608 + 1;
      if (ppppuVar12 == (undefined8 ****)0x0) {
        LOCK();
        UNLOCK();
        ppppuVar12 = (undefined8 ****)(DAT_14c758608 + 2);
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_60[2] = ppppuVar12;
      *local_60 = (undefined8 ***)&PTR_FUN_14b977a00;
      local_60[3] = (undefined8 ****)0x0;
      FUN_14485c47a(local_60 + 3,lVar10);
      ppppuVar6[4] = param_1;
      FUN_1448b6402(lVar5 + 0x338,&local_70,&local_60);
      FUN_1449db362(&local_60);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d56a74 FUN_148d56a74 body=179 status=ok
// SIG undefined FUN_148d56a74(void)

void FUN_148d56a74(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (*(char *)(param_1 + 0x56) == '\x01') {
    fVar1 = *(float *)(param_1 + 0x44);
    if ((fVar1 != 0.0) || (NAN(fVar1))) {
      *(float *)(lVar2 + 0xe40) = *(float *)(lVar2 + 0xe40) - fVar1 * *(float *)(param_1 + 0x4c);
    }
    fVar1 = *(float *)(param_1 + 0x48);
    if ((fVar1 != 0.0) || (NAN(fVar1))) {
      *(float *)(lVar2 + 0xe44) = *(float *)(lVar2 + 0xe44) - fVar1 * *(float *)(param_1 + 0x50);
    }
    *(undefined1 *)(param_1 + 0x56) = 0;
  }
  fVar1 = *(float *)(param_1 + 0x3c);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    *(float *)(lVar2 + 0xe40) = fVar1 * *(float *)(param_1 + 0x4c) + *(float *)(lVar2 + 0xe40);
  }
  fVar1 = *(float *)(param_1 + 0x40);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    *(float *)(lVar2 + 0xe44) = fVar1 * *(float *)(param_1 + 0x50) + *(float *)(lVar2 + 0xe44);
  }
  return;
}



// FUNCTION 148d56b28 FUN_148d56b28 body=65 status=ok
// SIG undefined FUN_148d56b28(void)

void FUN_148d56b28(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x54) != '\x01') {
    return;
  }
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x54) = 0;
  FUN_148d55dc6(lVar1,(*(int *)(lVar1 + 0x1b38) != 0) * '\x03',*(undefined1 *)(param_1 + 0x20));
  return;
}



// FUNCTION 148d56b6a FUN_148d56b6a body=96 status=ok
// SIG undefined FUN_148d56b6a(void)

void FUN_148d56b6a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(lVar1 + 0xe40);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar1 + 0xe44);
  if (((*(char *)(param_1 + 0x55) == '\x01') && (*(longlong *)(lVar1 + 0xe38) != 0)) &&
     (0.0 < *(double *)(*(longlong *)(lVar1 + 0xe38) + 0x138))) {
    FUN_14893d100();
    return;
  }
  return;
}



// FUNCTION 148d56bca FUN_148d56bca body=93 status=ok
// SIG undefined FUN_148d56bca(void)

void FUN_148d56bca(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if ((lVar2 != 0) && (lVar1 = *(longlong *)(lVar2 + 0xe38), lVar1 != 0)) {
    FUN_140457ffc(lVar1 + 800,lVar2);
    if (*(char *)(param_1 + 0x55) == '\x01') {
      FUN_140457ffc(lVar1 + 0x338,lVar2);
    }
  }
  FUN_148d56b28(param_1);
  return;
}



// FUNCTION 148d56c3a FUN_148d56c3a body=338 status=ok
// SIG undefined FUN_148d56c3a(void)

void FUN_148d56c3a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x30);
    if (plVar5 == (longlong *)0x0) goto LAB_148d56cd4;
    *(undefined8 *)(param_1 + 0x30) = 0;
LAB_148d56c91:
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
    if (plVar4 == (longlong *)0x0) goto LAB_148d56cd4;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x30);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
      *(longlong **)(param_1 + 0x30) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_148d56c91;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_148d56cd4:
  local_40 = *param_3;
  local_38 = param_3[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_1411eee24(param_1,param_2,&local_40);
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d56d8e FUN_148d56d8e body=873 status=ok
// SIG undefined FUN_148d56d8e(void)

void FUN_148d56d8e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 ****ppppuVar9;
  undefined4 uVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = FUN_14479d2ce(param_1 + 0x18);
  *(byte *)(lVar7 + 0x60) = *(byte *)(lVar7 + 0x60) & 0xfe;
  (**(code **)(*(longlong *)(lVar7 + 0x1878) + 0x20))(lVar7 + 0x1878,&local_68);
  lVar4 = local_68;
  if (local_68 != 0) {
    uVar8 = FUN_1412708cf();
    lVar5 = *(longlong *)(lVar4 + 0x200);
    if (lVar5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_1403f69f4(lVar5,uVar8,0);
    }
    FUN_140d4c8ba(lVar4,local_58,uVar8);
    uVar10 = FUN_144a7b41a(local_58,0x3f800000);
    *(undefined4 *)(param_1 + 0x38) = uVar10;
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar6 != (code *)0x0) {
      ppppuVar9 = local_58;
      if (0x18 < local_40) {
        ppppuVar9 = (undefined8 ****)local_58[0];
      }
      (*pcVar6)(ppppuVar9);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    lVar5 = local_68;
    uVar8 = FUN_1412708cf();
    lVar4 = *(longlong *)(lVar5 + 0x200);
    if (lVar4 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_1403f69f4(lVar4,uVar8,1);
    }
    FUN_140d4c8ba(lVar5,local_58,uVar8);
    uVar10 = FUN_144a7b41a(local_58,0x3f800000);
    *(undefined4 *)(param_1 + 0x3c) = uVar10;
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar6 != (code *)0x0) {
      ppppuVar9 = local_58;
      if (0x18 < local_40) {
        ppppuVar9 = (undefined8 ****)local_58[0];
      }
      (*pcVar6)(ppppuVar9);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    lVar5 = local_68;
    uVar8 = FUN_1412708cf();
    lVar4 = *(longlong *)(lVar5 + 0x200);
    if (lVar4 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_1403f69f4(lVar4,uVar8,2);
    }
    FUN_140d4c8ba(lVar5,local_58,uVar8);
    uVar10 = FUN_144a7b41a(local_58,0x3f800000);
    *(undefined4 *)(param_1 + 0x40) = uVar10;
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar6 != (code *)0x0) {
      ppppuVar9 = local_58;
      if (0x18 < local_40) {
        ppppuVar9 = (undefined8 ****)local_58[0];
      }
      (*pcVar6)(ppppuVar9);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    uVar8 = FUN_1412708cf();
    if (*(longlong *)(local_68 + 0x200) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_1403f69f4(*(longlong *)(local_68 + 0x200),uVar8,3);
    }
    FUN_140d4c8ba(local_68,local_58,uVar8);
    uVar10 = FUN_144a7b41a(local_58,0x3f800000);
    *(undefined4 *)(param_1 + 0x44) = uVar10;
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar6 != (code *)0x0) {
      ppppuVar9 = local_58;
      if (0x18 < local_40) {
        ppppuVar9 = (undefined8 ****)local_58[0];
      }
      (*pcVar6)(ppppuVar9);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  FUN_148d55b98(lVar7,0,*(undefined1 *)(param_1 + 0x20));
  if (*(char *)(lVar7 + 0x178) == '\x03') {
    FUN_148d55b98(lVar7,4,*(undefined1 *)(param_1 + 0x20));
  }
  lVar4 = *(longlong *)(lVar7 + 0xe38);
  if (lVar4 != 0) {
    if ((*(float *)(param_1 + 0x40) != 1.0) || (NAN(*(float *)(param_1 + 0x40)))) {
      FUN_1411a6fd2(lVar4);
    }
    fVar3 = *(float *)(param_1 + 0x44);
    if ((fVar3 != 1.0) || (NAN(fVar3))) {
      *(float *)(lVar4 + 0x1a8) = fVar3 * *(float *)(lVar4 + 0x1a8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d570f8 FUN_148d570f8 body=424 status=ok
// SIG undefined FUN_148d570f8(void)

void FUN_148d570f8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (0.0 < *(float *)(*(longlong *)(param_1 + 0x28) + 0x1a0)) {
    uVar5 = FUN_1401b4c98(uVar4);
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x1a0);
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar2 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_b0[2] = lVar6;
    *local_b0 = &PTR_FUN_14b977a70;
    local_b0[3] = 0;
    FUN_14485c47a(local_b0 + 3,uVar4);
    puVar2[4] = param_1;
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_b0);
    local_58 = 1;
    local_b8 = local_a0;
    local_a0[0] = 0;
    local_9c = 0xbf800000;
    FUN_1406f4044(uVar5,param_1 + 0x48,&local_98,uVar1);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    FUN_1449db362(&local_b0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    FUN_148d572b8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d572b8 FUN_148d572b8 body=752 status=ok
// SIG undefined FUN_148d572b8(void)

void FUN_148d572b8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong *local_78;
  undefined1 local_70 [8];
  longlong local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  FUN_1403121a6(lVar4,1);
  lVar7 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(lVar7 + 0x1a4) != 0) {
    local_60 = (longlong *)CONCAT44(local_60._4_4_,0xffffffff);
    local_68 = *(longlong *)(lVar7 + 0x1a4);
    FUN_14128618c(lVar4,&local_68,1);
    lVar7 = *(longlong *)(param_1 + 0x28);
  }
  lVar6 = *(longlong *)(lVar7 + 0x1b8);
  if (lVar6 == 0) {
    uVar5 = FUN_140067708();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar7 + 0x1b8) = lVar6;
  }
  if (*(longlong *)(lVar7 + 0x1c0) == 0) {
    if ((lVar6 == 0) || (*(longlong *)(lVar7 + 0x1b0) == 0)) goto LAB_148d5735a;
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(lVar7 + 0x1c0) = 0;
      goto LAB_148d5735a;
    }
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar7 + 0x1b0));
    *(longlong *)(lVar7 + 0x1c0) = lVar6;
    if (lVar6 == 0) goto LAB_148d5735a;
  }
  cVar3 = FUN_1404fa388((longlong *)(param_1 + 0x58));
  if (cVar3 == '\0') {
    (**(code **)(*(longlong *)(lVar4 + 0x3d8) + 0x10))(lVar4 + 0x3d8,&local_40);
    if (local_40 != 0) {
      FUN_1403c747e(local_40,&local_48,0);
      if (local_48 != 0) {
        lVar7 = *(longlong *)(param_1 + 0x28);
        lVar4 = *(longlong *)(lVar7 + 0x1b8);
        if (lVar4 == 0) {
          uVar5 = FUN_140067708();
          lVar4 = FUN_14477b664(uVar5);
          *(longlong *)(lVar7 + 0x1b8) = lVar4;
        }
        lVar6 = *(longlong *)(lVar7 + 0x1c0);
        if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*(longlong *)(lVar7 + 0x1b0) != 0)) {
          plVar2 = *(longlong **)(lVar4 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
            lVar6 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar7 + 0x1b0));
          }
          *(longlong *)(lVar7 + 0x1c0) = lVar6;
        }
        FUN_141505908(local_70,&local_48);
        local_80 = local_40;
        local_78 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        FUN_140c72376(&local_68,&local_80,local_70,lVar6);
        if ((longlong *)(param_1 + 0x58) != &local_68) {
          *(longlong *)(param_1 + 0x58) = local_68;
          local_68 = 0;
          plVar2 = *(longlong **)(param_1 + 0x60);
          *(longlong **)(param_1 + 0x60) = local_60;
          local_60 = (longlong *)0x0;
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
        *(undefined4 *)(param_1 + 0x68) = local_58;
        *(undefined4 *)(param_1 + 0x6c) = uStack_54;
        *(undefined4 *)(param_1 + 0x70) = uStack_50;
        *(undefined4 *)(param_1 + 0x74) = uStack_4c;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_60 + 0x10))();
          }
        }
      }
      FUN_144a61ac8(&local_48);
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
  }
LAB_148d5735a:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d575b0 FUN_148d575b0 body=156 status=ok
// SIG undefined FUN_148d575b0(void)

void FUN_148d575b0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x48);
    uVar2 = FUN_14479d2ce(param_1 + 0x18);
    lVar3 = FUN_1447210f0(uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_1401b4c98(uVar2);
      lVar3 = FUN_144a61814(uVar2,puVar1);
      if (lVar3 != 0) {
        FUN_1405a424c(uVar2,*puVar1);
      }
    }
    *puVar1 = 0;
  }
  if (*(char *)(param_1 + 0x50) != '\x01') {
    return;
  }
  uVar2 = FUN_14479d2ce(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x50) = 0;
  FUN_148d55dc6(uVar2,0,*(undefined1 *)(param_1 + 0x20));
  FUN_148d55dc6(uVar2,4,*(undefined1 *)(param_1 + 0x20));
  return;
}



// FUNCTION 148d5764c FUN_148d5764c body=108 status=ok
// SIG undefined FUN_148d5764c(void)

void FUN_148d5764c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  if ((((*(byte *)(lVar1 + 0xed8) & 2) == 0) && (*(char *)(lVar1 + 0x178) != '\x03')) &&
     (*(char *)(lVar1 + 0x1152) == '\b')) {
    *(float *)(lVar1 + 0xe40) = *(float *)(lVar1 + 0xe40) * *(float *)(param_1 + 0x38);
    *(float *)(lVar1 + 0xe44) = *(float *)(lVar1 + 0xe44) * *(float *)(param_1 + 0x3c);
  }
  FUN_140bd765a(param_1 + 0x58,0,0);
  return;
}



// FUNCTION 148d576b8 FUN_148d576b8 body=136 status=ok
// SIG undefined FUN_148d576b8(void)

void FUN_148d576b8(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x18);
  if ((*(byte *)(plVar1 + 0x1db) & 2) == 0) {
    *(float *)(plVar1 + 0x1c8) = *(float *)(plVar1 + 0x1c8) * *(float *)(param_1 + 0x38);
    *(float *)((longlong)plVar1 + 0xe44) =
         *(float *)((longlong)plVar1 + 0xe44) * *(float *)(param_1 + 0x3c);
    FUN_1403121a6(plVar1,0);
    if ((((char)plVar1[0x2f] == '\x03') || ((*(byte *)(plVar1 + 0xc) & 1) != 0)) ||
       ((*(byte *)((longlong)plVar1 + 0x61) & 1) != 0)) {
      *(undefined1 *)((longlong)plVar1 + 0x1152) = 8;
                    /* WARNING: Could not recover jumptable at 0x000148d57739. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x6c0))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148d5775a FUN_148d5775a body=79 status=ok
// SIG undefined FUN_148d5775a(void)

void FUN_148d5775a(longlong param_1,int param_2)

{
  if ((param_2 == 0 && *(int *)(param_1 + 0xb78) != -1) && (*(longlong *)(param_1 + 0xb70) != 0)) {
    (**(code **)(*(longlong *)(param_1 + 0x8c0) + 0x18))(param_1 + 0x8c0);
  }
  FUN_140f0695c(param_1,param_2);
  return;
}



// FUNCTION 148d577aa FUN_148d577aa body=201 status=ok
// SIG undefined FUN_148d577aa(void)

void FUN_148d577aa(longlong param_1)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1414015fe();
  local_30 = (void *)0x0;
  local_28 = *(int *)(param_1 + 0xcd8);
  lVar2 = (longlong)local_28;
  _Src = *(void **)(param_1 + 0xcd0);
  if (lVar2 == 0) {
    local_24 = 0;
  }
  else {
    FUN_148d6722c(&local_30,local_28);
    memcpy(local_30,_Src,lVar2 << 3);
    if (0 < local_28) {
      lVar2 = 0;
      lVar3 = 0;
      do {
        uVar1 = FUN_14479d2ce((longlong)local_30 + lVar2);
        FUN_14662b04c(uVar1);
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 8;
      } while (lVar3 < local_28);
    }
  }
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d57890 FUN_148d57890 body=126 status=ok
// SIG undefined FUN_148d57890(void)

void FUN_148d57890(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  *(undefined8 *)(param_1 + 0xc68) = 0;
  *(undefined1 *)(param_1 + 0xc88) = 0;
  if (((*(int *)(param_1 + 0xb3c) < 2) || ((*(byte *)(param_1 + 0xc61) & 2) != 0)) ||
     (0 < *(int *)(param_1 + 0xb44))) {
    *(undefined1 *)(param_1 + 0xa36) = 1;
    uVar1 = FUN_1410c9d9c(param_1,DAT_14cbcb940,param_3,param_4,
                          (*(byte *)(param_1 + 0xc61) & 2) >> 1);
    *(undefined1 *)(param_1 + 0xc60) = uVar1;
  }
  if (*(char *)(param_1 + 0xce0) == '\0') {
    FUN_1410c98c6(param_1,*(undefined1 *)(param_1 + 0xc60));
    return;
  }
  return;
}



// FUNCTION 148d5792a FUN_148d5792a body=206 status=ok
// SIG undefined FUN_148d5792a(void)

void FUN_148d5792a(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    *(undefined1 *)(param_1 + 0xc88) = 1;
    if (0.0 < *(float *)(param_1 + 0xc70)) {
      *(undefined8 *)(param_1 + 0xc70) = 0xbf800000;
    }
    if (*(longlong *)(param_1 + 0xc78) != 0) {
      uVar1 = FUN_1401b4c98(param_1);
      lVar2 = FUN_144a61814(uVar1,(undefined8 *)(param_1 + 0xc78));
      if (lVar2 != 0) {
        FUN_1405a424c(uVar1,*(undefined8 *)(param_1 + 0xc78));
      }
      *(undefined8 *)(param_1 + 0xc78) = 0;
      FUN_140f83a9a(param_1);
    }
    if ((*(byte *)(param_1 + 0x9a0) & 2) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x8c8) + 0x80))(param_1 + 0x8c8);
    }
                    /* WARNING: Could not recover jumptable at 0x000148d579ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x8c8) + 0x18))(param_1 + 0x8c8,1,1);
    return;
  }
  return;
}



// FUNCTION 148d57a0e FUN_148d57a0e body=110 status=ok
// SIG undefined FUN_148d57a0e(void)

void FUN_148d57a0e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  if ((*(byte *)(param_1 + 0xc61) & 1) != 0) {
    *(byte *)(param_1 + 0xc61) = *(byte *)(param_1 + 0xc61) & 0xfe;
    *(undefined1 *)(param_1 + 0xa36) = 2;
    FUN_1414015fe();
    if ((*(char *)(param_1 + 0x178) == '\x03') && (*(int *)(param_1 + 0xcd8) != 0)) {
      uVar1 = FUN_1410c9d9c(param_1,DAT_14cbcb950,param_3,param_4,0);
      *(undefined1 *)(param_1 + 0xc60) = uVar1;
    }
    if (*(char *)(param_1 + 0xc60) == '\0') {
      FUN_148d577aa(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148d57a7c FUN_148d57a7c body=89 status=ok
// SIG undefined FUN_148d57a7c(void)

void FUN_148d57a7c(longlong param_1)

{
  if (((*(byte *)(param_1 + 0xa34) & 1) != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    *(byte *)(param_1 + 0xa34) = *(byte *)(param_1 + 0xa34) & 0xfe;
    *(undefined4 *)(param_1 + 0xc74) = *(undefined4 *)(param_1 + 0xc44);
    *(undefined8 *)(param_1 + 0xc78) = 0;
    FUN_1410c98c6(param_1,*(undefined1 *)(param_1 + 0xc60));
  }
  FUN_140f83a9a(param_1);
  return;
}



// FUNCTION 148d57ad6 FUN_148d57ad6 body=117 status=ok
// SIG undefined FUN_148d57ad6(void)

undefined8 FUN_148d57ad6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar3 = (**(code **)(*param_1 + 0x38))();
  if (((cVar3 != '\0') && (lVar2 = param_1[0x73], (char)lVar2 != '\0')) &&
     (lVar4 = param_1[0x55], lVar4 != 0)) {
    lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x10e0) + 0x50))(lVar4 + 0x10e0);
    if ((longlong)*(int *)(lVar4 + 0x48) != 0) {
      lVar5 = 0;
      while ((lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x40) + lVar5), lVar1 == 0 ||
             (*(char *)(lVar1 + 0x40) != (char)lVar2))) {
        lVar5 = lVar5 + 0x10;
        if ((longlong)*(int *)(lVar4 + 0x48) * 0x10 == lVar5) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 148d57b5e FUN_148d57b5e body=242 status=ok
// SIG undefined FUN_148d57b5e(void)

void FUN_148d57b5e(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    if ((*(byte *)(param_1 + 0xc61) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
    }
    FUN_1418e9472(&local_50);
    local_48 = 0;
    FUN_14485c47a(&local_48,param_1);
    local_40 = local_50;
    FUN_14113f0c0(&local_48);
    FUN_14053c012(param_2 + 0xd78,&local_48);
    local_48 = 0;
    FUN_14485c47a(&local_48,param_2);
    iVar1 = *(int *)(param_1 + 0xcd8);
    *(uint *)(param_1 + 0xcd8) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xcdc) < iVar1 + 1U) {
      FUN_1418ea52a((longlong *)(param_1 + 0xcd0),iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0xcd0) + (longlong)iVar1 * 8) = local_48;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d57c7e FUN_148d57c7e body=33 status=ok
// SIG undefined FUN_148d57c7e(void)

void FUN_148d57c7e(longlong param_1)

{
  FUN_1488c6e08();
  FUN_148d57ca0(param_1 + 0x8d8);
  return;
}



// FUNCTION 148d57ca0 FUN_148d57ca0 body=127 status=ok
// SIG undefined FUN_148d57ca0(void)

void FUN_148d57ca0(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x10))();
  if ((int)plVar3[1] == 0) {
    return;
  }
  lVar4 = (**(code **)(*param_1 + 0x18))(param_1);
  if (lVar4 != 0) {
    lVar5 = FUN_144a2f878();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) goto LAB_148d57cea;
  }
  lVar4 = FUN_148d491fc(lVar4);
LAB_148d57cea:
  bVar2 = (char)plVar3[1] - 1;
  if (-1 < (char)bVar2) {
    uVar6 = (ulonglong)bVar2;
    do {
      plVar1 = *(longlong **)(*plVar3 + uVar6 * 8);
      (**(code **)(*plVar1 + 0x28))(plVar1,lVar4);
      bVar7 = uVar6 != 0;
      uVar6 = uVar6 - 1;
    } while (bVar7);
  }
  return;
}



// FUNCTION 148d57d20 FUN_148d57d20 body=60 status=ok
// SIG undefined FUN_148d57d20(void)

void FUN_148d57d20(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  FUN_1488c7e38(param_1 + 0x58);
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000148d57d51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 148d57dfc FUN_148d57dfc body=98 status=ok
// SIG undefined FUN_148d57dfc(void)

uint FUN_148d57dfc(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  
  cVar1 = FUN_14486ea84(param_1 + 0xb50);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_140280ec4(param_1 + 0xb50);
    uVar2 = -(uint)(*(float *)(lVar3 + 0x30) <= *(float *)(lVar3 + 200) ||
                   0.0001 <= ABS(*(float *)(lVar3 + 200) - *(float *)(lVar3 + 0x24)));
  }
  return uVar2 & 0xffffff01;
}



// FUNCTION 148d57e88 FUN_148d57e88 body=427 status=ok
// SIG undefined FUN_148d57e88(void)

void FUN_148d57e88(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0xa38) != 0) {
    FUN_140aeefbc(*(longlong *)(param_1 + 0xa38),0,1);
    *(undefined8 *)(param_1 + 0xa38) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x1b0);
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar6 = FUN_1458b6df2();
    lVar4 = FUN_14477b664(uVar6);
    param_2[1] = lVar4;
  }
  bVar7 = true;
  if (param_2[2] == 0) {
    if ((lVar4 == 0) || (*param_2 == 0)) goto LAB_148d57f8c;
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_148d58030:
      lVar4 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 == '\0') goto LAB_148d58030;
      uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar4 = FUN_144aff482(uVar6,param_2);
    }
    param_2[2] = lVar4;
    bVar7 = lVar4 != 0;
  }
  if ((plVar1 == (longlong *)0x0) || (!bVar7)) goto LAB_148d57f8c;
  cVar3 = (**(code **)(*plVar1 + 0x700))(plVar1);
  if (cVar3 == '\0') goto LAB_148d57f8c;
  local_a0 = *param_2;
  FUN_1411374ca(local_98,plVar1,&local_a0,&DAT_14c846480);
  FUN_140faf1c8(local_98,plVar1);
  FUN_140faf27a(local_98,plVar1);
  lVar4 = FUN_14127ef9a(local_98);
  FUN_14119d0c2(local_98);
  if (lVar4 == 0) {
LAB_148d57f83:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_1411e624c();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_148d57f83;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar4);
    }
  }
  *(longlong *)(param_1 + 0xa38) = lVar4;
LAB_148d57f8c:
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d58034 FUN_148d58034 body=291 status=ok
// SIG undefined FUN_148d58034(void)

void FUN_148d58034(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *(undefined1 *)(param_1 + 0x164);
  uVar3 = *(undefined1 *)(param_1 + 0x165);
  uVar1 = *(undefined4 *)(param_1 + 0x168);
  uVar5 = FUN_14479d2ce(param_1 + 0x48);
  uVar6 = FUN_14479d2ce(param_1 + 0x40);
  uVar7 = FUN_14479d2ce(param_1 + 0x38);
  uVar8 = FUN_14479d2ce(param_1 + 0x30);
  cVar4 = FUN_14417d743(param_2,param_1 + 0x18,*(undefined8 *)(param_1 + 8),uVar8,uVar7,uVar6,uVar5,
                        param_1 + 0x50,param_1 + 0x68,param_1 + 0x88,param_1 + 0x158,uVar2,uVar1,
                        uVar3);
  if (cVar4 != '\0') {
    FUN_143e0f348(param_1);
    return;
  }
  return;
}



// FUNCTION 148d58164 FUN_148d58164 body=52 status=ok
// SIG undefined FUN_148d58164(void)

void FUN_148d58164(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_1407b25f0(param_1 + 0x1bd0,uVar1);
    return;
  }
  return;
}



// FUNCTION 148d58198 FUN_148d58198 body=86 status=ok
// SIG undefined FUN_148d58198(void)

void FUN_148d58198(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1b38);
  FUN_1407b25f0(param_2 + 2,param_1 + 0x1bd0);
  FUN_1418cffa4(param_2 + 0x38,param_1 + 0x1830);
  FUN_14187c1e4(param_2 + 0x48,param_1 + 0x1b50);
  return;
}



// FUNCTION 148d581ee FUN_148d581ee body=99 status=ok
// SIG undefined FUN_148d581ee(void)

undefined8 *
FUN_148d581ee(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)FUN_14416b806(param_2,param_3,param_4);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))();
    lVar3 = FUN_1465bdb72();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
      goto LAB_148d5822f;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_148d5822f:
  *param_1 = plVar4;
  return param_1;
}



// FUNCTION 148d58252 FUN_148d58252 body=204 status=ok
// SIG undefined FUN_148d58252(void)

undefined8 * FUN_148d58252(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbcca98) {
    FUN_144b3d300(&DAT_14cbcca98);
    if (DAT_14cbcca98 == -1) {
      builtin_wcsncpy(local_48,L"PayloadBeginExplodeCallback",0x1c);
      FUN_1446f470e(&DAT_14cbcca90,local_48,1);
      _Init_thread_footer(&DAT_14cbcca98);
    }
  }
  *param_1 = DAT_14cbcca90;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d58320 FUN_148d58320 body=67 status=ok
// SIG undefined FUN_148d58320(void)

void FUN_148d58320(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = 0;
  bVar2 = true;
  do {
    bVar4 = bVar2;
    plVar1 = *(longlong **)(param_1 + 0x1cd0 + lVar3 * 8);
    if ((plVar1 != (longlong *)0x0) && ((*(uint *)(param_1 + 0x1ce0) >> (int)lVar3 & 1) != 0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    lVar3 = 1;
    bVar2 = false;
  } while (bVar4);
  return;
}



// FUNCTION 148d58364 FUN_148d58364 body=190 status=ok
// SIG undefined FUN_148d58364(void)

undefined8 * FUN_148d58364(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbccaa8) {
    FUN_144b3d300(&DAT_14cbccaa8);
    if (DAT_14cbccaa8 == -1) {
      builtin_wcsncpy(local_48 + 8,L"xplodeCallback",0xf);
      builtin_wcsncpy(local_48,L"PayloadE",8);
      FUN_1446f470e(&DAT_14cbccaa0,local_48,1);
      _Init_thread_footer(&DAT_14cbccaa8);
    }
  }
  *param_1 = DAT_14cbccaa0;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d58424 FUN_148d58424 body=72 status=ok
// SIG undefined FUN_148d58424(void)

void FUN_148d58424(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = 0;
  bVar2 = true;
  do {
    bVar4 = bVar2;
    plVar1 = *(longlong **)(param_1 + 0x1cd0 + lVar3 * 8);
    if ((plVar1 != (longlong *)0x0) && ((*(uint *)(param_1 + 0x1ce0) >> (sbyte)lVar3 & 4) != 0)) {
      (**(code **)(*plVar1 + 0x30))(plVar1);
    }
    lVar3 = 1;
    bVar2 = false;
  } while (bVar4);
  return;
}



// FUNCTION 148d5846c FUN_148d5846c body=190 status=ok
// SIG undefined FUN_148d5846c(void)

undefined8 * FUN_148d5846c(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbccab8) {
    FUN_144b3d300(&DAT_14cbccab8);
    if (DAT_14cbccab8 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"lback",6);
      builtin_wcsncpy(local_48 + 8,L"mpactCal",8);
      builtin_wcsncpy(local_48,L"PayloadI",8);
      FUN_1446f470e(&DAT_14cbccab0,local_48,1);
      _Init_thread_footer(&DAT_14cbccab8);
    }
  }
  *param_1 = DAT_14cbccab0;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5852c FUN_148d5852c body=79 status=ok
// SIG undefined FUN_148d5852c(void)

void FUN_148d5852c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = 0;
  bVar2 = true;
  do {
    bVar4 = bVar2;
    plVar1 = *(longlong **)(param_1 + 0x1cd0 + lVar3 * 8);
    if ((plVar1 != (longlong *)0x0) && ((*(uint *)(param_1 + 0x1ce0) >> (sbyte)lVar3 & 0x10) != 0))
    {
      (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
    }
    lVar3 = 1;
    bVar2 = false;
  } while (bVar4);
  return;
}



// FUNCTION 148d5857c FUN_148d5857c body=101 status=ok
// SIG undefined FUN_148d5857c(void)

void FUN_148d5857c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30);
  local_28 = param_3;
  FUN_14113f0c0(&local_30);
  FUN_14053c012(param_1,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d585e2 FUN_148d585e2 body=190 status=ok
// SIG undefined FUN_148d585e2(void)

undefined8 * FUN_148d585e2(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbccac8) {
    FUN_144b3d300(&DAT_14cbccac8);
    if (DAT_14cbccac8 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"lback",6);
      builtin_wcsncpy(local_48 + 8,L"ounceCal",8);
      builtin_wcsncpy(local_48,L"PayloadB",8);
      FUN_1446f470e(&DAT_14cbccac0,local_48,1);
      _Init_thread_footer(&DAT_14cbccac8);
    }
  }
  *param_1 = DAT_14cbccac0;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d586a2 FUN_148d586a2 body=89 status=ok
// SIG undefined FUN_148d586a2(void)

void FUN_148d586a2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = 0;
  bVar2 = true;
  do {
    bVar4 = bVar2;
    plVar1 = *(longlong **)(param_1 + 0x1cd0 + lVar3 * 8);
    if ((plVar1 != (longlong *)0x0) && ((*(uint *)(param_1 + 0x1ce0) >> (sbyte)lVar3 & 0x40) != 0))
    {
      (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
    }
    lVar3 = 1;
    bVar2 = false;
  } while (bVar4);
  return;
}



// FUNCTION 148d586fc FUN_148d586fc body=204 status=ok
// SIG undefined FUN_148d586fc(void)

undefined8 * FUN_148d586fc(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbccad8) {
    FUN_144b3d300(&DAT_14cbccad8);
    if (DAT_14cbccad8 == -1) {
      builtin_wcsncpy(local_48,L"PayloadTakingDamageCallback",0x1c);
      FUN_1446f470e(&DAT_14cbccad0,local_48,1);
      _Init_thread_footer(&DAT_14cbccad8);
    }
  }
  *param_1 = DAT_14cbccad0;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d587ca FUN_148d587ca body=80 status=ok
// SIG undefined FUN_148d587ca(void)

void FUN_148d587ca(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = 0;
  bVar2 = true;
  do {
    bVar4 = bVar2;
    plVar1 = *(longlong **)(param_1 + 0x1cd0 + lVar3 * 8);
    if ((plVar1 != (longlong *)0x0) &&
       (((*(uint *)(param_1 + 0x1ce0) >> (sbyte)lVar3) >> 8 & 1) != 0)) {
      (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
    }
    lVar3 = 1;
    bVar2 = false;
  } while (bVar4);
  return;
}



// FUNCTION 148d5881a FUN_148d5881a body=136 status=ok
// SIG undefined FUN_148d5881a(void)

void FUN_148d5881a(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x1151) & 1) == 0) {
    FUN_1446f470e(local_20,L"OnRep_PayloadPostExploded",1);
    FUN_1459050a6(param_1,local_20);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((*(byte *)(param_1 + 0x1b48) & 0x10) != 0) {
    FUN_140d5ea1a(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_140d5ea54(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d588ac FUN_148d588ac body=1796 status=ok
// SIG undefined FUN_148d588ac(void)

void FUN_148d588ac(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,float param_7,float param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  undefined **ppuVar12;
  bool bVar13;
  undefined1 auStack_328 [32];
  undefined8 *local_308;
  undefined8 *local_300;
  undefined8 *local_2f8;
  undefined8 *local_2f0;
  undefined4 *local_2e8;
  undefined4 *local_2e0;
  undefined8 *local_2d8;
  float *local_2d0;
  undefined1 *local_2c8;
  undefined1 *local_2c0;
  longlong local_2b8;
  longlong local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined1 local_289;
  longlong *local_288;
  longlong *local_280;
  longlong local_278;
  float local_26c;
  undefined8 local_268;
  longlong *local_260;
  undefined4 local_258 [2];
  longlong local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined1 local_1f0;
  undefined8 local_1ec;
  undefined1 local_1e4 [4];
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined **local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_178;
  undefined1 local_170;
  undefined8 local_16c;
  longlong local_160;
  int local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined1 local_110 [72];
  longlong local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [24];
  ulonglong local_90;
  
  uVar4 = param_10;
  uVar3 = param_9;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar7 = FUN_1447210f0();
  if (lVar7 != 0) {
    local_26c = -1.0;
    if (0.0 < param_7) {
      local_26c = (float)((double)param_7 + *(double *)(lVar7 + 0x6d0));
    }
    if (*(int *)(param_1 + 0x1cf0) == 0x34001) {
      FUN_140e35e6c(local_258);
      lVar7 = *(longlong *)(&DAT_00001ce8 + param_1);
      if (local_250 != lVar7) {
        local_240 = 0;
      }
      local_228 = param_2[2];
      local_238 = *param_2;
      uStack_230 = param_2[1];
      local_220 = *param_3;
      uStack_21c = param_3[1];
      uStack_218 = param_3[2];
      uStack_214 = param_3[3];
      local_210 = *(undefined8 *)(param_3 + 4);
      local_250 = lVar7;
      FUN_14485c47a(&local_1ec,*(undefined8 *)(param_1 + 0x1b0));
      local_1d8 = local_1ec;
      FUN_14485c47a(local_1e4,uVar3);
      local_1e0 = CONCAT44(param_4,(undefined4)local_1e0);
      FUN_14485c47a(local_110,uVar4);
      plVar9 = (longlong *)(param_1 + 0x3c8);
      lVar7 = (**(code **)(*(longlong *)(param_1 + 0x3c8) + 0x18))(plVar9);
      if (lVar7 != 0) {
        lVar7 = (**(code **)(*plVar9 + 0x18))(plVar9);
        puVar10 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
          puVar10 = *(undefined4 **)(lVar7 + 8);
        }
        FUN_1447325ac(puVar10,&local_2a8,1);
        if (local_1d0 != local_2a8) {
          local_1c0 = 0;
          uStack_1bc = 0;
        }
        local_1d0 = local_2a8;
      }
      local_178 = param_5;
      local_170 = 0;
      local_16c = 0;
      if ((local_160 != 0) || (local_158 != -0xfffff30)) {
        local_160 = 0;
        local_158 = -0xfffff30;
        local_150 = 0;
      }
      local_148 = param_6;
      local_144 = 0;
      local_140 = param_6;
      local_13c = 0;
      local_134 = param_6;
      local_130 = 0;
      (**(code **)(local_c8 + 0x20))(&local_c8,0);
      local_c0 = *(undefined8 *)(param_1 + 0xec0);
      FUN_1406022fe(local_b8,param_1 + 0xec8);
      FUN_140a0a642(param_1 + 0x1b50,local_a8);
      FUN_14130e0a2(local_258);
      FUN_140bba396(local_258);
    }
    else if (*(int *)(param_1 + 0x1cf0) == 0x4000) {
      local_250 = 0;
      local_248 = 0x3002;
      local_240 = 0;
      local_208 = 0;
      local_200 = 0x200000000;
      local_1e0 = 0;
      local_1d8 = CONCAT44(local_1d8._4_4_,0xf00000d0);
      local_1d0 = 0;
      FUN_1405c5fa2();
      local_1a0 = &DAT_14cb769e8;
      local_198 = 0;
      uStack_190 = 0;
      local_1a8 = &PTR_FUN_14b0394b0;
      local_1f8 = param_5;
      local_1f0 = 0;
      local_1ec = 0;
      local_1c8 = param_6;
      local_1c4 = 0;
      local_1c0 = param_6;
      uStack_1bc = 0;
      uStack_1b8 = 0;
      local_1b4 = param_6;
      local_1b0 = 0;
      plVar9 = (longlong *)(param_1 + 0x3c8);
      local_258[0] = param_4;
      lVar8 = (**(code **)(*(longlong *)(param_1 + 0x3c8) + 0x18))(plVar9);
      ppuVar12 = &PTR_FUN_14b0394b0;
      if (lVar8 != 0) {
        lVar8 = (**(code **)(*plVar9 + 0x18))(plVar9);
        puVar10 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar8 + 8) != (undefined4 *)0x0) {
          puVar10 = *(undefined4 **)(lVar8 + 8);
        }
        FUN_1447325ac(puVar10,&local_278,1);
        if (local_250 != local_278) {
          local_240 = 0;
        }
        local_250 = local_278;
        ppuVar12 = local_1a8;
      }
      (*(code *)ppuVar12[4])(&local_1a8,0);
      local_1a0 = *(undefined **)(param_1 + 0xec0);
      FUN_1406022fe(&local_198,param_1 + 0xec8);
      plVar9 = (longlong *)FUN_148d554d4();
      local_288 = plVar9 + 2;
      *(undefined4 *)(plVar9 + 2) = *(undefined4 *)(param_1 + 0x1b38);
      local_280 = plVar9;
      FUN_1407b25f0(plVar9 + 3,param_1 + 0x1bd0);
      FUN_1418cffa4(plVar9 + 0x1e,param_1 + 0x1830);
      FUN_14187c1e4(plVar9 + 0x26,param_1 + 0x1b50);
      *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
      local_2b8 = param_1 + 0x1d00;
      local_289 = 0;
      if (0.0 <= param_8) {
        local_268 = (longlong *)CONCAT44(local_268._4_4_,param_8);
      }
      local_268._0_5_ = CONCAT14(0.0 <= param_8,(undefined4)local_268);
      local_298 = *(undefined8 *)(param_1 + 0x1b0);
      local_2a0 = *(undefined8 *)(param_1 + 0x168);
      plVar9 = (longlong *)FUN_14001cc68(0x180,0x10);
      local_2c0 = &stack0x00000058;
      local_2c8 = &local_289;
      local_2d0 = &local_26c;
      local_2e0 = local_258;
      local_2f8 = &param_10;
      local_300 = &param_9;
      local_308 = &local_298;
      local_2f0 = param_2;
      local_2e8 = param_3;
      local_2d8 = &local_268;
      FUN_148d6760c(plVar9,&local_288,&DAT_00001ce8 + param_1,&local_2a0);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar11 = plVar9 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      FUN_140e67fb0(&local_268,lVar7);
      if (local_260 != (longlong *)0x0) {
        iVar6 = (int)local_260[1];
        do {
          if (iVar6 == 0) {
            plVar11 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar5 = (int)local_260[1];
          bVar13 = iVar6 == iVar5;
          if (bVar13) {
            *(int *)(local_260 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
          plVar11 = local_260;
        } while (!bVar13);
        LOCK();
        piVar1 = (int *)((longlong)local_260 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_260 + 0x10))();
        }
        plVar2 = local_268;
        if (plVar11 != (longlong *)0x0) {
          if (local_268 != (longlong *)0x0) {
            local_268 = plVar9 + 2;
            local_260 = plVar9;
            if (plVar9 == (longlong *)0x0) {
              FUN_140e67c44(plVar2,&local_268);
            }
            else {
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
              FUN_140e67c44();
              if (plVar9 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar9 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plVar9)(plVar9);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar9 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar9 + 0x10))(plVar9);
                  }
                }
              }
            }
          }
          LOCK();
          plVar2 = plVar11 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar9 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      plVar9 = local_280;
      if (local_280 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_280 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_280)(local_280);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      FUN_1414dc478(local_258);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d58fb2 FUN_148d58fb2 body=1655 status=ok
// SIG undefined FUN_148d58fb2(void)

void FUN_148d58fb2(longlong param_1,double *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  bool bVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  longlong local_200;
  undefined8 local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined4 *local_1e0;
  float *local_1d8;
  undefined4 local_1d0;
  undefined1 local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  longlong *local_170;
  longlong *local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  float local_138;
  undefined1 local_134;
  undefined4 local_130 [2];
  longlong local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined8 local_c4;
  longlong local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined **local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (((*(longlong *)(param_1 + 0xe10) == 0) || (*(char *)(param_1 + 0x178) != '\x03')) ||
     (lVar8 = FUN_1447210f0(param_1), lVar8 == 0)) goto LAB_148d59005;
  puVar11 = *(undefined4 **)(*(longlong *)(param_1 + 0xe10) + 8);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = &DAT_14c9485f0;
  }
  FUN_1447325ac(puVar11,&local_158,1);
  local_150 = local_158;
  local_148 = 0x4000;
  local_140 = 0;
  local_130[0] = 0;
  local_128 = 0;
  local_120 = 0x3002;
  local_118 = 0;
  local_e0 = 0;
  local_d8 = 0x200000000;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = -0xfffff30;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  local_88 = 0;
  FUN_1405c5fa2();
  local_78 = &DAT_14cb769e8;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = &PTR_FUN_14b0394b0;
  local_130[0] = *(undefined4 *)(param_1 + 0xe40);
  local_d0 = *(undefined4 *)(param_1 + 0xe44);
  local_a0 = *(undefined4 *)(param_1 + 0xe48);
  local_c8 = 0;
  local_c4 = 0;
  if ((local_b8 != 0) || (local_b0 != -0xfffff30)) {
    local_b8 = 0;
    local_b0 = -0xfffff30;
    local_a8 = 0;
  }
  local_9c = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  local_88 = 0;
  plVar10 = (longlong *)(param_1 + 0x3c8);
  local_98 = local_a0;
  uStack_8c = local_a0;
  lVar9 = (**(code **)(*(longlong *)(param_1 + 0x3c8) + 0x18))(plVar10);
  if (lVar9 != 0) {
    lVar9 = (**(code **)(*plVar10 + 0x18))(plVar10);
    puVar11 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar9 + 8) != (undefined4 *)0x0) {
      puVar11 = *(undefined4 **)(lVar9 + 8);
    }
    FUN_1447325ac(puVar11,&local_160,1);
    if (local_128 != local_160) {
      local_118 = 0;
    }
    local_128 = local_160;
  }
  (*(code *)local_80[4])(&local_80,0);
  local_78 = *(undefined **)(param_1 + 0xec0);
  FUN_1406022fe(&local_70,param_1 + 0xec8);
  plVar10 = (longlong *)FUN_148d554d4();
  local_170 = plVar10 + 2;
  *(undefined4 *)(plVar10 + 2) = *(undefined4 *)(param_1 + 0x1b38);
  local_168 = plVar10;
  FUN_1407b25f0(plVar10 + 3,param_1 + 0x1bd0);
  FUN_1418cffa4(plVar10 + 0x1e,param_1 + 0x1830);
  FUN_14187c1e4(plVar10 + 0x26,param_1 + 0x1b50);
  fVar14 = (float)FUN_140b536be(*(undefined8 *)(param_1 + 0xe10));
  local_188 = *param_2;
  uStack_180 = param_2[1];
  local_178 = param_2[2];
  dVar19 = local_178 * local_178 + local_188 * local_188 + uStack_180 * uStack_180;
  if ((dVar19 != 1.0) || (NAN(dVar19))) {
    if (dVar19 < 9.99999993922529e-09) {
      local_178 = DAT_14c8464f0;
      uVar15 = (undefined4)DAT_14c8464e0;
      uVar16 = DAT_14c8464e0._4_4_;
      uVar17 = (undefined4)DAT_14c8464e8;
      uVar18 = DAT_14c8464e8._4_4_;
      goto LAB_148d59334;
    }
    dVar19 = 1.0 / SQRT(dVar19);
    local_178 = local_178 * dVar19;
    uStack_180 = uStack_180 * dVar19;
    local_188 = local_188 * dVar19;
  }
  else {
    local_178 = param_2[2];
    uVar15 = *(undefined4 *)param_2;
    uVar16 = *(undefined4 *)((longlong)param_2 + 4);
    uVar17 = *(undefined4 *)(param_2 + 1);
    uVar18 = *(undefined4 *)((longlong)param_2 + 0xc);
LAB_148d59334:
    local_188 = (double)CONCAT44(uVar16,uVar15);
    uStack_180 = (double)CONCAT44(uVar18,uVar17);
  }
  lVar9 = *(longlong *)(param_1 + 0x1c8);
  if (lVar9 == 0) {
    local_198 = DAT_14c8464f0;
    local_1a8 = (longlong *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_1a0 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    local_1a8 = *(longlong **)(lVar9 + 0x260);
    uStack_1a0 = *(longlong **)(lVar9 + 0x268);
    local_198 = *(double *)(lVar9 + 0x270);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x168);
  uVar4 = *(undefined8 *)(param_1 + 0x1b0);
  plVar10 = (longlong *)FUN_14001cc68(0x180,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14b977ec0;
  local_1b8 = *(undefined1 *)(param_1 + 0x1b4a);
  if (0.0 < fVar14) {
    local_138 = fVar14;
  }
  plVar1 = plVar10 + 2;
  local_1c0 = 0;
  local_1d0 = 0;
  local_1d8 = &local_138;
  local_1e0 = local_130;
  local_1e8 = &local_188;
  local_1f0 = &local_1a8;
  local_1c8 = 1;
  local_1f8 = 0;
  local_208 = uVar4;
  local_200 = param_1;
  local_134 = 0.0 < fVar14;
  FUN_148d67772(plVar1,&local_170,&local_150,uVar3);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar12 = plVar10 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  FUN_140e67fb0(&local_1a8,lVar8);
  if (uStack_1a0 != (longlong *)0x0) {
    iVar7 = (int)uStack_1a0[1];
    do {
      if (iVar7 == 0) {
        plVar12 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar6 = (int)uStack_1a0[1];
      bVar13 = iVar7 == iVar6;
      if (bVar13) {
        *(int *)(uStack_1a0 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
      plVar12 = uStack_1a0;
    } while (!bVar13);
    LOCK();
    piVar2 = (int *)((longlong)uStack_1a0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*uStack_1a0 + 0x10))();
    }
    plVar5 = local_1a8;
    if (plVar12 != (longlong *)0x0) {
      if (local_1a8 != (longlong *)0x0) {
        local_1a8 = plVar1;
        uStack_1a0 = plVar10;
        if (plVar10 == (longlong *)0x0) {
          FUN_140e67c44(plVar5,&local_1a8);
        }
        else {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          FUN_140e67c44();
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar10 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
        }
      }
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
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  plVar10 = local_168;
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_168 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  FUN_1414dc478(local_130);
LAB_148d59005:
  if ((local_60 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d5962a FUN_148d5962a body=1715 status=ok
// SIG undefined FUN_148d5962a(void)

void FUN_148d5962a(longlong param_1,void **param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  double *pdVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  void **ppvVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  void *pvVar14;
  undefined8 ****ppppuVar15;
  void *_Src;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_238 [32];
  undefined8 *local_218;
  undefined4 local_210;
  undefined4 *local_208;
  undefined *local_200;
  undefined1 *local_1f8;
  undefined8 local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  float local_1c4;
  float local_1c0;
  void *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 *local_198;
  undefined4 local_190;
  undefined4 local_170;
  undefined1 local_e0 [32];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 ***local_98;
  double local_90;
  double local_88;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_140f05dd8();
  if ((*(longlong *)(param_1 + 0x2c50) != 0) &&
     (FUN_148d59cde(param_1), *(char *)(param_1 + 0x178) == '\x03')) {
    if (*(longlong *)(param_1 + 0x2c58) != 0) {
      FUN_14045627c(*(longlong *)(param_1 + 0x2c58),1,1);
      FUN_1449e3cec(*(undefined8 *)(param_1 + 0x2c58),0,1);
      lVar4 = *(longlong *)(param_1 + 0x2c58);
      FUN_148d59f34(&local_1a0);
      FUN_148d59eaa(lVar4 + 0x599,param_1,local_1a0);
      lVar4 = *(longlong *)(param_1 + 0x2c58);
      FUN_148d5a0da(&local_1a8);
      FUN_148d5a050(lVar4 + 0x59a,param_1,local_1a8);
      FUN_140b506a4(*(undefined8 *)(param_1 + 0x2c58));
      local_1b8 = (void *)0x0;
      uStack_1b0 = 0;
      local_1c8 = 0;
      lVar4 = *(longlong *)(param_1 + 0x2c50);
      local_198 = (undefined8 *)((ulonglong)local_198 & 0xffffffffffffff00);
      local_170 = 0;
      FUN_1456bb102(&local_198,param_1);
      FUN_1448729ea(lVar4 + 0x478,&local_98,&local_198);
      fVar17 = (float)FUN_144a7ecd0(&local_98);
      fVar17 = fVar17 + *(float *)(param_1 + 0x2c70);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
      if (pcVar2 != (code *)0x0) {
        ppppuVar15 = &local_98;
        if (0x18 < local_80) {
          ppppuVar15 = (undefined8 ****)local_98;
        }
        (*pcVar2)(ppppuVar15);
      }
      if (0x18 < local_80) {
        FUN_1400020a8(local_98);
      }
      FUN_144a5ac3a(&local_198);
      lVar4 = *(longlong *)(param_1 + 0x2c50);
      local_198 = (undefined8 *)((ulonglong)local_198 & 0xffffffffffffff00);
      local_170 = 0;
      FUN_1456bb102(&local_198,param_1);
      FUN_1448729ea(lVar4 + 0x4c8,&local_98,&local_198);
      fVar18 = (float)FUN_144a7ecd0(&local_98);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
      if (pcVar2 != (code *)0x0) {
        ppppuVar15 = &local_98;
        if (0x18 < local_80) {
          ppppuVar15 = (undefined8 ****)local_98;
        }
        (*pcVar2)(ppppuVar15);
      }
      if (0x18 < local_80) {
        FUN_1400020a8(local_98);
      }
      FUN_144a5ac3a(&local_198);
      local_1c8 = 3;
      lVar4 = *(longlong *)(param_1 + 0x1c8);
      if (lVar4 == 0) {
        pdVar6 = (double *)&DAT_14c8464e0;
        uVar19 = (undefined4)DAT_14c8464f0;
        uVar20 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar19 = (undefined4)*(undefined8 *)(lVar4 + 0x270);
        uVar20 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x270) >> 0x20);
        pdVar6 = (double *)(lVar4 + 0x260);
      }
      local_88 = (double)CONCAT44(uVar20,uVar19) - (double)(fVar18 * 0.5 - fVar17);
      local_90 = pdVar6[1] + 0.0;
      local_98 = (undefined8 ***)(*pdVar6 + 0.0);
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c4 = fVar17;
      local_1c0 = fVar18 * 0.5;
      uVar7 = FUN_1447210f0(param_1);
      local_1f8 = &DAT_14cad0f10;
      local_200 = &DAT_14cad0f68;
      local_208 = &local_1c8;
      local_218 = &DAT_14c8463d0;
      local_210 = 1;
      param_2 = &local_1b8;
      cVar3 = FUN_14038e76e(uVar7,param_2,&local_98,&local_98);
      if (cVar3 != '\0') {
        if ((longlong)(int)uStack_1b0 != 0) {
          pvVar14 = (void *)((longlong)(int)uStack_1b0 * 0x100 + (longlong)local_1b8);
          _Src = local_1b8;
          do {
            memcpy(&local_198,_Src,0xb8);
            param_2 = (void **)((longlong)_Src + 0xb8);
            FUN_144b23946(local_e0);
            local_c0 = *(undefined4 *)((longlong)_Src + 0xd8);
            uStack_bc = *(undefined4 *)((longlong)_Src + 0xdc);
            uStack_b8 = *(undefined4 *)((longlong)_Src + 0xe0);
            uStack_b4 = *(undefined4 *)((longlong)_Src + 0xe4);
            local_b0 = *(undefined8 *)((longlong)_Src + 0xe8);
            uStack_a8 = *(undefined8 *)((longlong)_Src + 0xf0);
            local_a0 = *(undefined8 *)((longlong)_Src + 0xf8);
            lVar4 = FUN_14485cccc(local_e0);
            uVar12 = uStack_1d0;
            lVar5 = (longlong)(int)uStack_1d0;
            if (lVar5 != 0) {
              param_2 = (void **)0x0;
              do {
                if (*(longlong *)(local_1d8 + (longlong)param_2) == lVar4) goto LAB_148d59b4a;
                param_2 = param_2 + 1;
              } while (lVar5 * 8 - (longlong)param_2 != 0);
            }
            uVar9 = (int)uStack_1d0 + 1;
            uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar9);
            if (uStack_1d0._4_4_ < uVar9) {
              param_2 = (void **)(uVar12 & 0xffffffff);
              FUN_1447d05f2(&local_1d8,param_2);
            }
            *(longlong *)(local_1d8 + lVar5 * 8) = lVar4;
LAB_148d59b4a:
            _Src = (void *)((longlong)_Src + 0x100);
          } while (_Src != pvVar14);
        }
      }
      lVar4 = local_1d8;
      lVar5 = (longlong)(int)uStack_1d0;
      if (lVar5 != 0) {
        lVar10 = 0;
        do {
          ppvVar11 = *(void ***)(lVar4 + lVar10);
          if (ppvVar11 != (void **)0x0) {
            lVar8 = FUN_144a2f878();
            param_2 = (void **)(longlong)*(int *)(lVar8 + 0x38);
            if ((*(int *)(lVar8 + 0x38) <= *(int *)((longlong)ppvVar11[2] + 0x38)) &&
               (*(longlong *)(*(longlong *)((longlong)ppvVar11[2] + 0x30) + (longlong)param_2 * 8)
                == lVar8 + 0x30)) {
              FUN_148d5a1f6(param_1,ppvVar11);
              param_2 = ppvVar11;
            }
          }
          lVar10 = lVar10 + 8;
        } while (lVar5 * 8 != lVar10);
      }
      if (local_1d8 != 0) {
        FUN_1400020a8(local_1d8);
      }
      if (local_1b8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (((*(longlong *)(param_1 + 0x2c28) != 0) && (*(longlong *)(param_1 + 0x2c60) != 0)) &&
       (*(longlong *)(param_1 + 0x2c68) != 0)) {
      uVar12 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(undefined1 *)(param_1 + 0x2c95)) ^ 1;
      FUN_14045627c(*(longlong *)(param_1 + 0x2c60),uVar12,1);
      uVar7 = CONCAT71((int7)(uVar12 >> 8),*(undefined1 *)(param_1 + 0x2c95));
      FUN_1449e3cec(*(undefined8 *)(param_1 + 0x2c60),uVar7,1);
      uVar12 = CONCAT71((int7)((ulonglong)uVar7 >> 8),*(undefined1 *)(param_1 + 0x2c95)) ^ 1;
      FUN_14127091c(*(undefined8 *)(param_1 + 0x2c60),uVar12);
      uVar7 = CONCAT71((int7)(uVar12 >> 8),*(undefined1 *)(param_1 + 0x2c95));
      FUN_14045627c(*(undefined8 *)(param_1 + 0x2c68),uVar7,1);
      FUN_1449e3cec(*(undefined8 *)(param_1 + 0x2c68),
                    CONCAT71((int7)((ulonglong)uVar7 >> 8),*(undefined1 *)(param_1 + 0x2c95)) ^ 1,1)
      ;
      FUN_14127091c(*(undefined8 *)(param_1 + 0x2c68),*(undefined1 *)(param_1 + 0x2c95));
      if (*(char *)(param_1 + 0x2c95) == '\x01') {
        puVar16 = (undefined8 *)(param_1 + 0x2c68);
        lVar4 = *(longlong *)(param_1 + 0x2c68);
        puVar13 = &local_1e0;
      }
      else {
        puVar16 = (undefined8 *)(param_1 + 0x2c60);
        lVar4 = *(longlong *)(param_1 + 0x2c60);
        puVar13 = &local_1e8;
      }
      FUN_148d5a730(puVar13);
      FUN_148d59eaa(lVar4 + 0x599,param_1,*puVar13);
      FUN_140b506a4(*puVar16);
    }
    plVar1 = (longlong *)(param_1 + 0x448);
    lVar4 = (**(code **)(*(longlong *)(param_1 + 0x448) + 0x20))(plVar1);
    if (lVar4 != 0) {
      lVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
      local_198 = (undefined8 *)0x0;
      local_190 = 0;
      FUN_1446efa72(&local_198,0,3,0x10);
      puVar16 = local_198;
      local_190 = 3;
      *local_198 = &PTR_LAB_14b3e9ef0;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_198[2] = lVar10;
      *local_198 = &PTR_FUN_14b977f90;
      local_198[3] = 0;
      FUN_14485c47a(local_198 + 3,param_1);
      puVar16[4] = param_1;
      FUN_1403524de(lVar5 + 0xf8,&local_98,&local_198);
      FUN_1449db362(&local_198);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d59cde FUN_148d59cde body=459 status=ok
// SIG undefined FUN_148d59cde(void)

void FUN_148d59cde(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  ulonglong uStack_70;
  undefined1 *local_68;
  undefined8 uStack_60;
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(char *)(param_1 + 0x2c96) == '\0') && (*(longlong *)(&DAT_00002a60 + param_1) != 0)) {
    if ((longlong)*(int *)(&DAT_00002a78 + param_1) != 0) {
      lVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x2a70) + lVar5) == 0) goto LAB_148d59e85;
        lVar5 = lVar5 + 8;
      } while ((longlong)*(int *)(&DAT_00002a78 + param_1) * 8 != lVar5);
    }
    *(undefined1 *)(param_1 + 0x2c96) = 1;
    lVar5 = FUN_14045d028(param_1);
    if (lVar5 != 0) {
      local_68 = (undefined1 *)0x0;
      uStack_60 = 0;
      FUN_140d0ec1d(&DAT_00002a60 + param_1,&local_68);
      if (0 < (int)uStack_60) {
        FUN_140d0e9ce(lVar5,&local_68);
      }
      if (local_68 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14b978230;
    local_68 = &LAB_144188982;
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    local_40 = param_1;
    FUN_140255853(&DAT_00002a60 + param_1,1,&local_68,&local_78);
    if ((longlong)(int)uStack_70 == 0) {
      uVar6 = 0;
    }
    else {
      puVar8 = local_78 + (longlong)(int)uStack_70 * 2;
      puVar7 = local_78;
      do {
        plVar2 = (longlong *)*puVar7;
        plVar3 = (longlong *)puVar7[1];
        if (plVar3 == (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x30))(plVar2,param_1,3);
        }
        else {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          (**(code **)(*plVar2 + 0x30))(plVar2,param_1,3);
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
        puVar7 = puVar7 + 2;
      } while (puVar7 != puVar8);
      uVar6 = uStack_70 & 0xffffffff;
    }
    FUN_140255aed(local_78,uVar6);
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined1 *)0x0) {
      pppuVar4 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar4 = &local_48;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
LAB_148d59e85:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d59eaa FUN_148d59eaa body=137 status=ok
// SIG undefined FUN_148d59eaa(void)

void FUN_148d59eaa(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_30 = (undefined4)local_48;
  uStack_2c = local_48._4_4_;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  FUN_140838726(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x599,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d59f34 FUN_148d59f34 body=190 status=ok
// SIG undefined FUN_148d59f34(void)

undefined8 * FUN_148d59f34(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbccae8) {
    FUN_144b3d300(&DAT_14cbccae8);
    if (DAT_14cbccae8 == -1) {
      builtin_wcsncpy(local_48 + 8,L"ngTerminalZone",0xf);
      builtin_wcsncpy(local_48,L"OnEnteri",8);
      FUN_1446f470e(&DAT_14cbccae0,local_48,1);
      _Init_thread_footer(&DAT_14cbccae8);
    }
  }
  *param_1 = DAT_14cbccae0;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d59ff4 FUN_148d59ff4 body=92 status=ok
// SIG undefined FUN_148d59ff4(void)

void FUN_148d59ff4(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  if (((*(char *)(param_1 + 0x178) == '\x03') && (param_3 != 0)) &&
     (*(longlong *)(param_1 + 0x2c50) != 0)) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_148d5a1f6(param_1,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 148d5a050 FUN_148d5a050 body=137 status=ok
// SIG undefined FUN_148d5a050(void)

void FUN_148d5a050(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_30 = (undefined4)local_48;
  uStack_2c = local_48._4_4_;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  FUN_140852908(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x59a,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5a0da FUN_148d5a0da body=190 status=ok
// SIG undefined FUN_148d5a0da(void)

undefined8 * FUN_148d5a0da(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbccaf8) {
    FUN_144b3d300(&DAT_14cbccaf8);
    if (DAT_14cbccaf8 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"lZone",6);
      builtin_wcsncpy(local_48 + 8,L"gTermina",8);
      builtin_wcsncpy(local_48,L"OnExitin",8);
      FUN_1446f470e(&DAT_14cbccaf0,local_48,1);
      _Init_thread_footer(&DAT_14cbccaf8);
    }
  }
  *param_1 = DAT_14cbccaf0;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5a19a FUN_148d5a19a body=92 status=ok
// SIG undefined FUN_148d5a19a(void)

void FUN_148d5a19a(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  if (((*(char *)(param_1 + 0x178) == '\x03') && (param_3 != 0)) &&
     (*(longlong *)(param_1 + 0x2c50) != 0)) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_148d5e81e(param_1,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 148d5a1f6 FUN_148d5a1f6 body=1336 status=ok
// SIG undefined FUN_148d5a1f6(void)

void FUN_148d5a1f6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_70 = param_2;
  if ((*(char *)(param_1 + 0x178) != '\x03') || (*(longlong *)(param_1 + 0x2c50) == 0))
  goto LAB_148d5a236;
  uVar6 = FUN_1447210f0(param_1);
  local_68 = *(undefined8 **)(param_1 + 0x2c10);
  local_60 = *(undefined2 *)(param_1 + 0x2c18);
  local_58 = *(undefined8 *)(param_1 + 0x2c20);
  iVar5 = FUN_148d682b0(&local_68,param_2,uVar6);
  lVar10 = 0x5698;
  if (iVar5 == 0) {
    if (*(int *)(param_1 + 0x2858) != 0) {
      plVar1 = (longlong *)(param_1 + 0x2960);
      local_78 = (undefined8 *)0x0;
      FUN_14485c47a(&local_78,local_70);
      local_68 = local_78;
      iVar5 = FUN_148d683da(plVar1);
      if (iVar5 == -1) {
        local_68 = &local_70;
        FUN_148d68494(plVar1,local_4c,&local_68);
        uVar6 = local_70;
        local_80 = (undefined8 *)0x0;
        FUN_14485c47a(&local_80,local_70);
        local_68 = local_80;
        iVar5 = FUN_148d683da(plVar1,(uint)((ulonglong)local_80 >> 0x20) ^ (uint)local_80,&local_68)
        ;
        if (iVar5 == -1) {
          lVar9 = 0;
        }
        else {
          lVar9 = (longlong)iVar5 * 0x20 + *plVar1;
        }
        FUN_148d5cb12(param_1,param_1 + 0x2850,lVar9 + 8,uVar6);
      }
    }
    if ((*(byte *)(param_1 + 0x2c94) & 1) == 0) {
LAB_148d5a30c:
      bVar3 = false;
    }
    else {
      if ((longlong)*(int *)(param_1 + 0x2a08) != 0) {
        lVar9 = 0;
        do {
          if (*(char *)(*(longlong *)(param_1 + 0x2a00) + lVar9) == '\0') goto LAB_148d5a30c;
          lVar9 = lVar9 + 1;
        } while (*(int *)(param_1 + 0x2a08) != lVar9);
      }
      local_98 = (undefined8 *)0x0;
      FUN_14485c47a(&local_98,local_70);
      local_68 = local_98;
      iVar5 = FUN_148d689a2(param_1 + 0x2870);
      if (iVar5 != -1) goto LAB_148d5a30c;
      FUN_148d5e592(param_1,local_70,param_1 + 0x2870,0);
      bVar3 = true;
    }
    if ((*(byte *)(param_1 + 0x2c94) & 2) == 0) {
LAB_148d5a31b:
      if (!bVar3) goto LAB_148d5a2b4;
    }
    else {
      if ((longlong)*(int *)(param_1 + 0x2a08) != 0) {
        lVar9 = 0;
        do {
          if (*(char *)(*(longlong *)(param_1 + 0x2a00) + lVar9) == '\x01') goto LAB_148d5a31b;
          lVar9 = lVar9 + 1;
        } while (*(int *)(param_1 + 0x2a08) != lVar9);
      }
      local_a0 = (undefined8 *)0x0;
      FUN_14485c47a(&local_a0,local_70);
      local_68 = local_a0;
      iVar5 = FUN_148d689a2(param_1 + 0x2910,(uint)((ulonglong)local_a0 >> 0x20) ^ (uint)local_a0);
      if (iVar5 != -1) goto LAB_148d5a31b;
      FUN_148d5e592(param_1,local_70,param_1 + 0x2910,1);
    }
    FUN_148d5e6ea(local_70,*(longlong *)(param_1 + 0x2c50) + 0x658);
  }
  else if (iVar5 == 2) {
    if (*(int *)(param_1 + 0x2868) != 0) {
      plVar1 = (longlong *)(param_1 + 0x29b0);
      local_88 = (undefined8 *)0x0;
      FUN_14485c47a(&local_88,local_70);
      local_68 = local_88;
      iVar5 = FUN_148d683da(plVar1,(uint)((ulonglong)local_88 >> 0x20) ^ (uint)local_88);
      if (iVar5 == -1) {
        local_68 = &local_70;
        FUN_148d68494(plVar1,local_4c,&local_68);
        uVar6 = local_70;
        local_90 = (undefined8 *)0x0;
        FUN_14485c47a(&local_90,local_70);
        local_68 = local_90;
        iVar5 = FUN_148d683da(plVar1,(uint)((ulonglong)local_90 >> 0x20) ^ (uint)local_90,&local_68)
        ;
        if (iVar5 == -1) {
          lVar10 = 0;
        }
        else {
          lVar10 = (longlong)iVar5 * 0x20 + *plVar1;
        }
        FUN_148d5cb12(param_1,param_1 + 0x2860,lVar10 + 8,uVar6);
      }
    }
    local_a8 = (undefined8 *)0x0;
    FUN_14485c47a(&local_a8,local_70);
    local_68 = local_a8;
    iVar5 = FUN_148d689a2(param_1 + 0x28c0);
    lVar10 = 0x56b8;
    if ((iVar5 == -1) && ((*(byte *)(param_1 + 0x2c94) & 4) != 0)) {
      if ((longlong)*(int *)(param_1 + 0x2a08) != 0) {
        lVar9 = 0;
        do {
          if (*(char *)(*(longlong *)(param_1 + 0x2a00) + lVar9) == '\x02') goto LAB_148d5a2b4;
          lVar9 = lVar9 + 1;
        } while (*(int *)(param_1 + 0x2a08) != lVar9);
      }
      FUN_148d5e592(param_1,local_70,param_1 + 0x28c0,2);
      FUN_148be0594(param_1,*(longlong *)(param_1 + 0x2c50) + 0x688);
    }
  }
LAB_148d5a2b4:
  if ((longlong)*(int *)(param_1 + 0x2a18) == 0) {
    iVar5 = 0;
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x2a10);
    lVar8 = (longlong)*(int *)(param_1 + 0x2a18) << 3;
    do {
      cVar4 = FUN_140e8a950(lVar9,local_70);
      if (cVar4 != '\0') goto LAB_148d5a236;
      lVar9 = lVar9 + 8;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
    iVar5 = *(int *)(param_1 + 0x2a18);
  }
  *(uint *)(param_1 + 0x2a18) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x2a1c) < iVar5 + 1U) {
    FUN_145cb4378(param_1 + 0x2a10,iVar5);
  }
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x2a10) + (longlong)iVar5 * 8);
  *puVar2 = 0;
  FUN_14485c47a(puVar2,local_70);
  if ((longlong)*(int *)(param_1 + 0x2a18) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x2a10);
    lVar8 = (longlong)*(int *)(param_1 + 0x2a18) << 3;
    do {
      cVar4 = FUN_144729dda(lVar9);
      if (cVar4 != '\0') {
        lVar7 = FUN_14479d2ce(lVar9);
        FUN_1447f69b6(lVar7 + lVar10);
      }
      lVar9 = lVar9 + 8;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
LAB_148d5a236:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d5a730 FUN_148d5a730 body=183 status=ok
// SIG undefined FUN_148d5a730(void)

undefined8 * FUN_148d5a730(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbccb08) {
    FUN_144b3d300(&DAT_14cbccb08);
    if (DAT_14cbccb08 == -1) {
      builtin_wcsncpy(local_38,L"OnEnteringBarrier",0x12);
      FUN_1446f470e(&DAT_14cbccb00,local_38,1);
      _Init_thread_footer(&DAT_14cbccb08);
    }
  }
  *param_1 = DAT_14cbccb00;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5a7e8 FUN_148d5a7e8 body=126 status=ok
// SIG undefined FUN_148d5a7e8(void)

void FUN_148d5a7e8(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((((*(char *)(param_1 + 0x178) == '\x03') && (*(longlong *)(param_1 + 0x2c50) != 0)) &&
      (param_3 != 0)) && (*(longlong *)(param_1 + 0x2c28) != 0)) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_148be0594(param_1,*(longlong *)(param_1 + 0x2c28) + 0x108);
      FUN_1447f69b6(param_3 + 0x5718);
      return;
    }
  }
  return;
}



// FUNCTION 148d5a866 FUN_148d5a866 body=120 status=ok
// SIG undefined FUN_148d5a866(void)

void FUN_148d5a866(longlong param_1)

{
  FUN_140d6119a();
  FUN_14072d42a(param_1 + 0x2bd0,0);
  FUN_14072d42a(param_1 + 0x2be8,0);
  FUN_140c2d000(param_1 + 0x2a20);
  FUN_140ef6a7a(*(undefined8 *)(param_1 + 0x2840),*(undefined4 *)(param_1 + 0x2848));
  *(undefined4 *)(param_1 + 0x2848) = 0;
  if (*(int *)(param_1 + 0x284c) == 0) {
    return;
  }
  FUN_1460651de(param_1 + 0x2840,0);
  return;
}



// FUNCTION 148d5a8f0 FUN_148d5a8f0 body=233 status=ok
// SIG undefined FUN_148d5a8f0(void)

void FUN_148d5a8f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c2c4ea();
  local_38 = 0;
  uStack_40 = uStack_40 & 0xffffffffffffff00;
  local_48 = 1;
  FUN_1446f470e(&local_50,L"InventoryIdentity",1);
  uVar1 = FUN_1458bd4bc();
  FUN_1458bd4bc();
  uVar1 = FUN_140f1fabf(uVar1,local_50);
  FUN_140f1fa23(uVar1,param_2,&local_48);
  FUN_1446f470e(&local_48,L"ResourcePoolManager",1);
  uVar1 = FUN_1458bd4bc();
  FUN_1458bd4bc();
  uVar1 = FUN_140f1fabf(uVar1,local_48);
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5a9da FUN_148d5a9da body=136 status=ok
// SIG undefined FUN_148d5a9da(void)

undefined8 FUN_148d5a9da(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (((*(longlong *)(param_1 + 0x27d8) == 0) || (*(longlong *)(param_1 + 0x27b0) == 0)) ||
     (cVar2 = FUN_14570329c(param_2,param_1 + 0x2798), cVar2 != '\0')) {
LAB_148d5aa10:
    uVar4 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x281d);
    if (bVar1 == 0) {
      lVar3 = FUN_14479d2ce(param_3 + 0xd8);
      if (*(longlong *)(param_1 + 0x27e8) != lVar3) {
        bVar1 = *(byte *)(param_1 + 0x281d);
        goto LAB_148d5aa23;
      }
    }
    else {
LAB_148d5aa23:
      if (((bVar1 & 1) == 0) ||
         (lVar3 = FUN_14479d2ce(param_3 + 0xd8), *(longlong *)(param_1 + 0x27f0) != lVar3))
      goto LAB_148d5aa10;
    }
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 148d5aa62 FUN_148d5aa62 body=1388 status=ok
// SIG undefined FUN_148d5aa62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148d5aa62(longlong param_1,float param_2,undefined8 param_3,float param_4,float param_5,
                  char param_6,char param_7)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 in_RDX;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  auVar12._4_12_ = in_XMM2._4_12_;
  auVar12._0_4_ = in_XMM2._0_4_ * 0.5;
  if (*(longlong *)(param_1 + 0x2c58) != 0) {
    FUN_140d491fc(*(longlong *)(param_1 + 0x2c58),in_RDX,auVar12._0_8_,1);
    FUN_140d491fc();
    FUN_14127091c(*(undefined8 *)(param_1 + 0x2c58),1);
    lVar1 = *(longlong *)(param_1 + 0x2c58);
    auVar9 = *(undefined1 (*) [16])(lVar1 + 0x1b0);
    dVar5 = auVar9._0_8_;
    dVar6 = auVar9._8_8_;
    dVar19 = *(double *)(lVar1 + 0x1c0);
    puVar8 = *(undefined8 **)(lVar1 + 0x230);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar7 = DAT_14c8463d8;
      *puVar8 = DAT_14c8463d0;
      puVar8[1] = uVar7;
      uVar7 = DAT_14c8463e8;
      puVar8[2] = DAT_14c8463e0;
      puVar8[3] = uVar7;
      uVar7 = DAT_14c846500;
      puVar8[4] = DAT_14c8464f8;
      puVar8[5] = uVar7;
      puVar8[6] = DAT_14c846508;
      *(undefined8 **)(lVar1 + 0x230) = puVar8;
    }
    if (((((double)puVar8[4] != dVar5) || (NAN((double)puVar8[4]) || NAN(dVar5))) ||
        ((double)puVar8[5] != dVar6)) || (NAN((double)puVar8[5]) || NAN(dVar6))) {
LAB_148d5ab8c:
      auVar24._8_8_ = 0;
      auVar24._0_8_ = dVar19;
      dVar2 = (double)DAT_1499387d0;
      dVar3 = DAT_1499387d0._8_8_;
      auVar9 = divpd(auVar9,_DAT_1499387d0);
      auVar16 = divpd(auVar24,_DAT_1499387d0);
      auVar9 = roundpd(auVar9,auVar9,3);
      auVar16 = roundpd(auVar16,auVar16,3);
      dVar5 = dVar5 - auVar9._0_8_ * dVar2;
      dVar6 = dVar6 - auVar9._8_8_ * dVar3;
      auVar25._0_8_ = dVar19 - auVar16._0_8_ * dVar2;
      auVar25._8_8_ = 0.0 - auVar16._8_8_ * dVar3;
      auVar22._0_8_ = dVar5 + dVar2;
      auVar22._8_8_ = dVar6 + dVar3;
      auVar20._0_8_ = dVar2 + auVar25._0_8_;
      auVar20._8_8_ = dVar3 + auVar25._8_8_;
      auVar16._8_8_ = -(ulonglong)(0.0 <= dVar6);
      auVar16._0_8_ = -(ulonglong)(0.0 <= dVar5);
      auVar9._8_4_ = SUB84(dVar6,0);
      auVar9._0_8_ = dVar5;
      auVar9._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar16 = blendvpd(auVar22,auVar9,auVar16);
      auVar10._8_8_ = -(ulonglong)(0.0 <= auVar25._8_8_);
      auVar10._0_8_ = -(ulonglong)(0.0 <= auVar25._0_8_);
      auVar9 = blendvpd(auVar20,auVar25,auVar10);
      auVar17._0_8_ = auVar16._0_8_ + -360.0;
      auVar17._8_8_ = auVar16._8_8_ + -360.0;
      auVar11._8_8_ = -(ulonglong)(180.0 < auVar16._8_8_);
      auVar11._0_8_ = -(ulonglong)(180.0 < auVar16._0_8_);
      auVar16 = blendvpd(auVar16,auVar17,auVar11);
      dVar19 = auVar9._0_8_;
      *(undefined1 (*) [16])(puVar8 + 4) = auVar16;
      puVar8[6] = ~-(ulonglong)(180.0 < dVar19) & (ulonglong)dVar19 |
                  (ulonglong)(dVar19 + -360.0) & -(ulonglong)(180.0 < dVar19);
      FUN_144a7484c(puVar8 + 4,&local_c8);
      puVar8[2] = local_b8;
      puVar8[3] = uStack_b0;
      *puVar8 = local_c8;
      puVar8[1] = uStack_c0;
    }
    else if (((double)puVar8[6] != dVar19) || (NAN((double)puVar8[6]) || NAN(dVar19)))
    goto LAB_148d5ab8c;
    local_c8 = *puVar8;
    uStack_c0 = puVar8[1];
    local_b8 = puVar8[2];
    uStack_b0 = puVar8[3];
    local_e8 = 0;
    uStack_e0 = 0;
    local_120 = 0;
    local_128 = 0;
    local_d8 = (double)(auVar12._0_4_ - param_2);
    FUN_144927ad4(lVar1,&local_e8,&local_c8,0);
  }
  if ((param_6 == '\0') || (*(longlong *)(param_1 + 0x2c60) == 0)) goto LAB_148d5aeb5;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0x3ff0000000000000;
  local_f0 = 0x3ff0000000000000;
  FUN_140c9cc04(*(longlong *)(param_1 + 0x2c60),&local_100,1);
  local_110 = (double)param_4;
  local_118 = 0x4034000000000000;
  local_108 = (double)param_5;
  (**(code **)(**(longlong **)(param_1 + 0x2c60) + 0x478))();
  lVar1 = *(longlong *)(param_1 + 0x2c60);
  auVar12 = *(undefined1 (*) [16])(lVar1 + 0x1b0);
  dVar5 = auVar12._0_8_;
  dVar6 = auVar12._8_8_;
  dVar19 = *(double *)(lVar1 + 0x1c0);
  puVar8 = *(undefined8 **)(lVar1 + 0x230);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar7 = DAT_14c8463d8;
    *puVar8 = DAT_14c8463d0;
    puVar8[1] = uVar7;
    uVar7 = DAT_14c8463e8;
    puVar8[2] = DAT_14c8463e0;
    puVar8[3] = uVar7;
    uVar7 = DAT_14c846500;
    puVar8[4] = DAT_14c8464f8;
    puVar8[5] = uVar7;
    puVar8[6] = DAT_14c846508;
    *(undefined8 **)(lVar1 + 0x230) = puVar8;
  }
  if (((((double)puVar8[4] != dVar5) || (NAN((double)puVar8[4]) || NAN(dVar5))) ||
      ((double)puVar8[5] != dVar6)) || (NAN((double)puVar8[5]) || NAN(dVar6))) {
LAB_148d5ad94:
    auVar26._8_8_ = 0;
    auVar26._0_8_ = dVar19;
    dVar2 = (double)DAT_1499387d0;
    dVar3 = DAT_1499387d0._8_8_;
    auVar12 = divpd(auVar12,_DAT_1499387d0);
    auVar9 = divpd(auVar26,_DAT_1499387d0);
    auVar12 = roundpd(auVar12,auVar12,3);
    auVar9 = roundpd(auVar9,auVar9,3);
    dVar5 = dVar5 - auVar12._0_8_ * dVar2;
    dVar6 = dVar6 - auVar12._8_8_ * dVar3;
    auVar27._0_8_ = dVar19 - auVar9._0_8_ * dVar2;
    auVar27._8_8_ = 0.0 - auVar9._8_8_ * dVar3;
    auVar23._0_8_ = dVar5 + dVar2;
    auVar23._8_8_ = dVar6 + dVar3;
    auVar21._0_8_ = dVar2 + auVar27._0_8_;
    auVar21._8_8_ = dVar3 + auVar27._8_8_;
    auVar13._8_8_ = -(ulonglong)(0.0 <= dVar6);
    auVar13._0_8_ = -(ulonglong)(0.0 <= dVar5);
    auVar4._8_4_ = SUB84(dVar6,0);
    auVar4._0_8_ = dVar5;
    auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar9 = blendvpd(auVar23,auVar4,auVar13);
    auVar14._8_8_ = -(ulonglong)(0.0 <= auVar27._8_8_);
    auVar14._0_8_ = -(ulonglong)(0.0 <= auVar27._0_8_);
    auVar12 = blendvpd(auVar21,auVar27,auVar14);
    auVar18._0_8_ = auVar9._0_8_ + -360.0;
    auVar18._8_8_ = auVar9._8_8_ + -360.0;
    auVar15._8_8_ = -(ulonglong)(180.0 < auVar9._8_8_);
    auVar15._0_8_ = -(ulonglong)(180.0 < auVar9._0_8_);
    auVar9 = blendvpd(auVar9,auVar18,auVar15);
    dVar19 = auVar12._0_8_;
    *(undefined1 (*) [16])(puVar8 + 4) = auVar9;
    puVar8[6] = ~-(ulonglong)(180.0 < dVar19) & (ulonglong)dVar19 |
                (ulonglong)(dVar19 + -360.0) & -(ulonglong)(180.0 < dVar19);
    FUN_144a7484c(puVar8 + 4,&local_c8);
    puVar8[2] = local_b8;
    puVar8[3] = uStack_b0;
    *puVar8 = local_c8;
    puVar8[1] = uStack_c0;
  }
  else if (((double)puVar8[6] != dVar19) || (NAN((double)puVar8[6]) || NAN(dVar19)))
  goto LAB_148d5ad94;
  local_c8 = *puVar8;
  uStack_c0 = puVar8[1];
  local_b8 = puVar8[2];
  uStack_b0 = puVar8[3];
  local_e8 = 0;
  uStack_e0 = 0;
  local_120 = 0;
  local_128 = 0;
  local_d8 = (double)param_5;
  FUN_144927ad4(lVar1,&local_e8,&local_c8,0);
LAB_148d5aeb5:
  if ((param_7 != '\0') && (*(longlong *)(param_1 + 0x2c68) != 0)) {
    FUN_140e259ca();
  }
  FUN_148d5afd0(param_1);
  if ((local_a0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5afd0 FUN_148d5afd0 body=1055 status=ok
// SIG undefined FUN_148d5afd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148d5afd0(longlong param_1,float param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_158 [32];
  undefined2 *local_138;
  undefined1 local_130;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  undefined2 local_f0;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
  double local_e8;
  double local_e0;
  undefined8 *local_d8;
  ulonglong uStack_d0;
  double local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar6 = (longlong *)FUN_146208468();
  if (plVar6 == (longlong *)0x0) {
    fVar10 = *(float *)(param_1 + 0x2c74) + 0.2;
    *(float *)(param_1 + 0x2c74) = fVar10;
    if (fVar10 <= 1.0) {
      local_108 = 0.0;
      local_d8 = (undefined8 *)0x0;
      uStack_d0 = uStack_d0 & 0xffffffff00000000;
      FUN_1446efa72(&local_d8,0,3,0x10);
      puVar8 = local_d8;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,3);
      *local_d8 = &PTR_LAB_14b978070;
      *(float *)(local_d8 + 1) = param_2;
      *(float *)((longlong)local_d8 + 0xc) = param_3;
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
      local_d8[2] = lVar9;
      *local_d8 = &PTR_FUN_14b978000;
      local_d8[3] = 0;
      FUN_14485c47a(local_d8 + 3,param_1);
      *(undefined4 *)(puVar8 + 5) = 0;
      puVar8[4] = FUN_148d5afd0;
      uVar7 = FUN_1401b4c98(param_1);
      local_b8 = 0;
      uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
      FUN_14487d8d8(&local_b8,&local_d8);
      local_78 = 1;
      local_138 = &local_f0;
      local_f0 = 0;
      uStack_ec = 0xbf800000;
      FUN_1406f4044(uVar7,&local_108,&local_b8);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
      FUN_1449db362(&local_d8);
      goto LAB_148d5b21f;
    }
  }
  else {
    FUN_14118b376(plVar6,&local_f0,&local_108);
    local_110 = 60.0 / (local_f8 - local_e0);
    local_118 = (double)(param_2 + param_2) / (local_100 - local_e8);
    local_120 = (double)(param_2 + param_2) /
                (local_108 - (double)CONCAT44(uStack_ec,CONCAT22(uStack_ee,local_f0)));
    (**(code **)(*plVar6 + 0x478))(plVar6);
    auVar11 = *(undefined1 (*) [16])(plVar6 + 0x36);
    dVar3 = auVar11._0_8_;
    dVar4 = auVar11._8_8_;
    dVar16 = (double)plVar6[0x38];
    puVar8 = (undefined8 *)plVar6[0x46];
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar7 = DAT_14c8463d8;
      *puVar8 = DAT_14c8463d0;
      puVar8[1] = uVar7;
      uVar7 = DAT_14c8463e8;
      puVar8[2] = DAT_14c8463e0;
      puVar8[3] = uVar7;
      uVar7 = DAT_14c846500;
      puVar8[4] = DAT_14c8464f8;
      puVar8[5] = uVar7;
      puVar8[6] = DAT_14c846508;
      plVar6[0x46] = (longlong)puVar8;
    }
    if (((((double)puVar8[4] != dVar3) || (NAN((double)puVar8[4]) || NAN(dVar3))) ||
        ((double)puVar8[5] != dVar4)) || (NAN((double)puVar8[5]) || NAN(dVar4))) {
LAB_148d5b0f7:
      auVar19._8_8_ = 0;
      auVar19._0_8_ = dVar16;
      dVar1 = (double)DAT_1499387d0;
      dVar2 = DAT_1499387d0._8_8_;
      auVar11 = divpd(auVar11,_DAT_1499387d0);
      auVar14 = divpd(auVar19,_DAT_1499387d0);
      auVar11 = roundpd(auVar11,auVar11,3);
      auVar14 = roundpd(auVar14,auVar14,3);
      dVar3 = dVar3 - auVar11._0_8_ * dVar1;
      dVar4 = dVar4 - auVar11._8_8_ * dVar2;
      auVar20._0_8_ = dVar16 - auVar14._0_8_ * dVar1;
      auVar20._8_8_ = 0.0 - auVar14._8_8_ * dVar2;
      auVar18._0_8_ = dVar3 + dVar1;
      auVar18._8_8_ = dVar4 + dVar2;
      auVar17._0_8_ = dVar1 + auVar20._0_8_;
      auVar17._8_8_ = dVar2 + auVar20._8_8_;
      auVar14._8_8_ = -(ulonglong)(0.0 <= dVar4);
      auVar14._0_8_ = -(ulonglong)(0.0 <= dVar3);
      auVar11._8_4_ = SUB84(dVar4,0);
      auVar11._0_8_ = dVar3;
      auVar11._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      auVar14 = blendvpd(auVar18,auVar11,auVar14);
      auVar12._8_8_ = -(ulonglong)(0.0 <= auVar20._8_8_);
      auVar12._0_8_ = -(ulonglong)(0.0 <= auVar20._0_8_);
      auVar11 = blendvpd(auVar17,auVar20,auVar12);
      auVar15._0_8_ = auVar14._0_8_ + -360.0;
      auVar15._8_8_ = auVar14._8_8_ + -360.0;
      auVar13._8_8_ = -(ulonglong)(180.0 < auVar14._8_8_);
      auVar13._0_8_ = -(ulonglong)(180.0 < auVar14._0_8_);
      auVar14 = blendvpd(auVar14,auVar15,auVar13);
      dVar16 = auVar11._0_8_;
      *(undefined1 (*) [16])(puVar8 + 4) = auVar14;
      puVar8[6] = ~-(ulonglong)(180.0 < dVar16) & (ulonglong)dVar16 |
                  (ulonglong)(dVar16 + -360.0) & -(ulonglong)(180.0 < dVar16);
      FUN_144a7484c(puVar8 + 4,&local_b8);
      puVar8[2] = local_a8;
      puVar8[3] = uStack_a0;
      *puVar8 = local_b8;
      puVar8[1] = uStack_b0;
    }
    else if (((double)puVar8[6] != dVar16) || (NAN((double)puVar8[6]) || NAN(dVar16)))
    goto LAB_148d5b0f7;
    local_b8 = *puVar8;
    uStack_b0 = puVar8[1];
    local_a8 = puVar8[2];
    uStack_a0 = puVar8[3];
    local_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    local_130 = 0;
    local_138 = (undefined2 *)0x0;
    local_c8 = (double)-param_3;
    FUN_144927ad4(plVar6,&local_d8,&local_b8,0);
  }
  *(undefined4 *)(param_1 + 0x2c74) = 0;
LAB_148d5b21f:
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5b3f6 FUN_148d5b3f6 body=1381 status=ok
// SIG undefined FUN_148d5b3f6(void)

void FUN_148d5b3f6(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  ulonglong uVar7;
  uint uVar8;
  uint7 uVar12;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined ***pppuVar13;
  bool bVar14;
  undefined8 *****pppppuVar15;
  ulonglong uVar16;
  bool bVar17;
  longlong *plVar18;
  undefined4 uVar19;
  float fVar20;
  undefined1 auStack_148 [40];
  ulonglong local_120;
  longlong *local_118;
  ulonglong uStack_110;
  undefined1 local_100 [40];
  undefined4 local_d8;
  undefined8 ****local_d0 [3];
  ushort local_b8;
  byte local_b0;
  code *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14b978270;
  local_a8[0] = FUN_144188a5e;
  local_118 = (longlong *)0x0;
  uStack_110 = 0;
  local_80 = param_1;
  FUN_140255853(&DAT_00002a60 + param_1,1,local_a8,&local_118);
  if ((char)uStack_110 == '\0') goto LAB_148d5b492;
  uVar8 = (uint)uStack_110 & 0xff;
  if (uVar8 != 1) {
    if ((uStack_110 & 0xff) != 0) {
      uVar16 = 0;
      bVar17 = false;
      local_120 = 0;
      do {
        plVar3 = *(longlong **)((longlong)local_118 + uVar16);
        if (plVar3 != (longlong *)0x0) {
          lVar10 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar11 = FUN_146616750();
          if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
              lVar11 + 0x30)) {
            uVar12 = (uint7)((ulonglong)(lVar11 + 0x30) >> 8);
            if ((*(char *)((longlong)plVar3 + 0x4c) == '\0') &&
               (*(char *)((longlong)plVar3 + 0x4d) == '\0')) {
              fVar20 = *(float *)(plVar3 + 9);
              uVar9 = (ulonglong)uVar12 << 8;
              if (0.0001 < fVar20 && (local_120 & 1) == 0) {
LAB_148d5b76c:
                *(float *)(param_1 + 0x2c84) = fVar20;
                *(undefined1 *)(param_1 + 0x2c8f) = *(undefined1 *)((longlong)plVar3 + 0x4d);
                *(undefined1 *)(param_1 + 0x2c8e) = *(undefined1 *)((longlong)plVar3 + 0x4c);
                local_120 = CONCAT71((int7)(uVar9 >> 8),1);
              }
            }
            else {
              uVar7 = local_120 & 1;
              uVar9 = CONCAT71(uVar12,1);
              local_120 = uVar9;
              if (uVar7 == 0) {
                fVar20 = *(float *)(plVar3 + 9);
                goto LAB_148d5b76c;
              }
            }
            lVar10 = plVar3[6];
            plVar3 = (longlong *)plVar3[7];
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
              LOCK();
              plVar5 = plVar3 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
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
            if (lVar10 != 0) {
              bVar14 = true;
              bVar6 = !bVar17;
              bVar17 = bVar14;
              if (bVar6) {
                lVar11 = FUN_1403d77ae(lVar10 + 0x138);
                if (lVar11 == 0) {
                  bVar17 = false;
                }
                else {
                  if (plVar3 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                    UNLOCK();
                  }
                  plVar5 = *(longlong **)(param_1 + 0x2c30);
                  *(longlong *)(param_1 + 0x2c28) = lVar10;
                  *(longlong **)(param_1 + 0x2c30) = plVar3;
                  if (plVar5 != (longlong *)0x0) {
                    LOCK();
                    plVar18 = plVar5 + 1;
                    *(int *)plVar18 = (int)*plVar18 + -1;
                    UNLOCK();
                    if ((int)*plVar18 == 0) {
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
              if (*(char *)(lVar10 + 0x250) == '\x01') {
                *(undefined1 *)(param_1 + 0x2c95) = 1;
              }
              if (((ulonglong)(uVar8 - 1) << 4 == uVar16) && (*(longlong *)(param_1 + 0x2c28) == 0))
              {
                if (plVar3 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                  UNLOCK();
                }
                plVar5 = *(longlong **)(param_1 + 0x2c30);
                *(longlong *)(param_1 + 0x2c28) = lVar10;
                *(longlong **)(param_1 + 0x2c30) = plVar3;
                if (plVar5 != (longlong *)0x0) {
                  LOCK();
                  plVar18 = plVar5 + 1;
                  *(int *)plVar18 = (int)*plVar18 + -1;
                  UNLOCK();
                  if ((int)*plVar18 == 0) {
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
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar5 = plVar3 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
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
          }
        }
        uVar16 = uVar16 + 0x10;
      } while (uVar8 << 4 != uVar16);
    }
    goto LAB_148d5b492;
  }
  plVar3 = (longlong *)*local_118;
  if (plVar3 == (longlong *)0x0) goto LAB_148d5b492;
  lVar10 = (**(code **)(*plVar3 + 8))(plVar3);
  lVar11 = FUN_146616750();
  if (((lVar11 == 0) || (*(int *)(lVar10 + 0x38) < *(int *)(lVar11 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
      lVar11 + 0x30)) goto LAB_148d5b492;
  lVar10 = plVar3[6];
  plVar5 = (longlong *)plVar3[7];
  if (plVar5 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x2c28) = lVar10;
    plVar18 = *(longlong **)(param_1 + 0x2c30);
    if (plVar18 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x2c30) = 0;
LAB_148d5b8dc:
      LOCK();
      plVar5 = plVar18 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000148d5b909:
        if (iVar2 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar18 = plVar5 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    *(longlong *)(param_1 + 0x2c28) = lVar10;
    plVar18 = *(longlong **)(param_1 + 0x2c30);
    if (plVar5 == plVar18) {
      LOCK();
      plVar18 = plVar5 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar18 = plVar5;
        goto joined_r0x000148d5b909;
      }
    }
    else {
      *(longlong **)(param_1 + 0x2c30) = plVar5;
      if (plVar18 != (longlong *)0x0) goto LAB_148d5b8dc;
    }
  }
  *(int *)(param_1 + 0x2c84) = (int)plVar3[9];
  *(undefined1 *)(param_1 + 0x2c8f) = *(undefined1 *)((longlong)plVar3 + 0x4d);
  *(undefined1 *)(param_1 + 0x2c8e) = *(undefined1 *)((longlong)plVar3 + 0x4c);
  if ((*(longlong *)(param_1 + 0x2c28) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x2c28) + 0x250) == '\x01')) {
    *(undefined1 *)(param_1 + 0x2c95) = 1;
  }
LAB_148d5b492:
  lVar10 = *(longlong *)(param_1 + 0x2c28);
  if (lVar10 != 0) {
    local_100[0] = 0;
    local_d8 = 0;
    FUN_1456bb102(local_100,param_1);
    FUN_1448729ea(lVar10 + 0x200,local_d0,local_100);
    uVar19 = FUN_144a7b41a(local_d0,0);
    *(undefined4 *)(param_1 + 0x2c90) = uVar19;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppppuVar15 = local_d0;
      if (0x18 < local_b8) {
        pppppuVar15 = (undefined8 *****)local_d0[0];
      }
      (*pcVar4)(pppppuVar15);
    }
    if (0x18 < local_b8) {
      FUN_1400020a8(local_d0[0]);
    }
    FUN_144a5ac3a(local_100);
  }
  FUN_140255aed(local_118,uStack_110 & 0xffffffff);
  if (local_118 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != (code *)0x0) {
    pppuVar13 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar13 = &local_88;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5b95c FUN_148d5b95c body=2980 status=ok
// SIG undefined FUN_148d5b95c(void)

void FUN_148d5b95c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  longlong *plVar3;
  code *pcVar4;
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
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong lVar21;
  longlong lVar22;
  undefined8 uVar23;
  longlong *plVar24;
  longlong lVar25;
  double *pdVar26;
  longlong lVar27;
  uint uVar28;
  undefined8 *puVar29;
  undefined1 *puVar30;
  undefined8 ****ppppuVar31;
  undefined8 *puVar32;
  uint uVar33;
  undefined8 unaff_R13;
  float fVar34;
  undefined4 uVar35;
  undefined8 uVar36;
  undefined4 uVar37;
  undefined1 auStack_248 [32];
  undefined2 *local_228;
  undefined8 local_220;
  char local_218;
  uint local_210;
  uint local_20c;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 *local_1d8;
  undefined4 local_1d0;
  undefined2 local_1c8 [2];
  undefined4 local_1c4;
  undefined1 local_1bc;
  undefined1 local_1b8;
  undefined7 uStack_1b7;
  double local_1b0;
  double local_1a8;
  ushort local_1a0;
  undefined6 uStack_19e;
  byte local_198;
  undefined7 uStack_197;
  undefined4 local_190;
  undefined4 uStack_18c;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined1 local_158 [4];
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined2 local_f0;
  undefined8 local_ec;
  undefined8 ***local_d8 [3];
  ushort local_c0;
  byte local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  plVar3 = (longlong *)*param_2;
  if (plVar3 == (longlong *)0x0) {
LAB_148d5b9ea:
    plVar24 = (longlong *)0x0;
  }
  else {
    lVar21 = (**(code **)(*plVar3 + 8))();
    lVar22 = FUN_1465c564e();
    if ((lVar22 == 0) || (*(int *)(lVar21 + 0x38) < *(int *)(lVar22 + 0x38))) goto LAB_148d5b9ea;
    plVar24 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar21 + 0x30) + (longlong)*(int *)(lVar22 + 0x38) * 8) ==
        lVar22 + 0x30) {
      plVar24 = plVar3;
    }
  }
  *(longlong **)(param_1 + 0x2850) = plVar24;
  FUN_140655f5e(param_1,param_2);
  if (*(longlong *)(param_1 + 0x2850) != 0) {
    lVar21 = *(longlong *)(param_1 + -0x298);
    if (lVar21 != 0) {
      lVar22 = FUN_144a2f878();
      if ((*(int *)(lVar22 + 0x38) <= *(int *)(*(longlong *)(lVar21 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar22 + 0x38) * 8) == lVar22 + 0x30)) {
        lVar22 = param_1 + -0x400;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar21);
        }
        *(longlong *)(param_1 + 0x2738) = lVar21;
        lVar21 = FUN_1447210f0(lVar22);
        if ((lVar21 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar21);
        }
        *(longlong *)(param_1 + 0x2740) = lVar21;
        if (*(char *)(param_1 + -0x288) == '\x03') {
          FUN_148d59cde(lVar22);
          FUN_148d5c502(lVar22);
          FUN_1459a0a08(param_1 + 0x2450,*(longlong *)(param_1 + 0x2850) + 0x458);
          FUN_1459a0a08(param_1 + 0x2460,*(longlong *)(param_1 + 0x2850) + 0x468);
          lVar21 = *(longlong *)(param_1 + 0x2740);
        }
        puVar29 = (undefined8 *)(*(longlong *)(param_1 + -0x238) + 0x240);
        if (*(longlong *)(param_1 + -0x238) == 0) {
          puVar29 = &DAT_14c846480;
        }
        puVar1 = (undefined8 *)(param_1 + 0x2750);
        puVar32 = puVar1;
        for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
          *puVar32 = *puVar29;
          puVar29 = puVar29 + 1;
          puVar32 = puVar32 + 1;
        }
        local_228 = *(undefined2 **)(param_1 + 0x2738);
        local_220 = 0;
        FUN_140cb5d65(&local_1f0,lVar21,*(longlong *)(param_1 + 0x2850) + 0x568,puVar1);
        local_1f0 = 0;
        local_1e8 = 0xffffffffffffffff;
        local_228 = *(undefined2 **)(param_1 + 0x2738);
        local_220 = 0;
        FUN_140cb5d65(&local_208,*(undefined8 *)(param_1 + 0x2740),
                      *(longlong *)(param_1 + 0x2850) + 0x5f8,puVar1);
        local_208 = 0;
        local_200 = 0xffffffffffffffff;
        if (*(char *)(param_1 + -0x288) == '\x03') {
          FUN_148d5b3f6(lVar22);
          if (((0.0001 < *(float *)(param_1 + 0x2884)) || (*(char *)(param_1 + 0x288f) != '\0')) ||
             (*(char *)(param_1 + 0x288e) == '\x01')) {
            (&DAT_00002894)[param_1] = (&DAT_00002894)[param_1] | 8;
          }
          if (*(longlong *)(param_1 + 0x2828) == 0) {
            uVar28 = 0;
            uVar33 = 0;
          }
          else {
            uVar33 = (uint)CONCAT71((int7)((ulonglong)unaff_R13 >> 8),
                                    *(undefined1 *)(param_1 + 0x2895));
            uVar28 = uVar33 ^ 1;
          }
          lVar21 = *(longlong *)(param_1 + 0x2850);
          auVar17[0xf] = 0;
          auVar17._0_15_ = stack0xfffffffffffffea9;
          _local_158 = auVar17 << 8;
          local_138._8_4_ = 0;
          FUN_1456bb102(local_158,lVar22);
          puVar30 = &local_1b8;
          FUN_1448729ea(lVar21 + 0x478,puVar30,local_158);
          fVar34 = (float)FUN_144a7ecd0(puVar30);
          fVar2 = *(float *)(param_1 + 0x2870);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_198 * 0x120));
          if (pcVar4 != (code *)0x0) {
            if (0x18 < local_1a0) {
              puVar30 = (undefined1 *)CONCAT71(uStack_1b7,local_1b8);
            }
            (*pcVar4)(puVar30);
          }
          if (0x18 < local_1a0) {
            FUN_1400020a8(CONCAT71(uStack_1b7,local_1b8));
          }
          FUN_144a5ac3a(local_158);
          lVar21 = *(longlong *)(param_1 + 0x2850);
          auVar18[0xf] = 0;
          auVar18._0_15_ = stack0xfffffffffffffea9;
          _local_158 = auVar18 << 8;
          local_138._8_4_ = 0;
          FUN_1456bb102(local_158,lVar22);
          puVar30 = &local_1b8;
          FUN_1448729ea(lVar21 + 0x4c8,puVar30,local_158);
          uVar35 = FUN_144a7ecd0(puVar30);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_198 * 0x120));
          if (pcVar4 != (code *)0x0) {
            if (0x18 < local_1a0) {
              puVar30 = (undefined1 *)CONCAT71(uStack_1b7,local_1b8);
            }
            (*pcVar4)(puVar30);
          }
          if (0x18 < local_1a0) {
            FUN_1400020a8(CONCAT71(uStack_1b7,local_1b8));
          }
          FUN_144a5ac3a(local_158);
          uVar37 = 0;
          uVar36 = 0;
          if ((char)uVar28 != '\0') {
            lVar21 = *(longlong *)(param_1 + 0x2828);
            auVar19[0xf] = 0;
            auVar19._0_15_ = stack0xfffffffffffffea9;
            _local_158 = auVar19 << 8;
            local_138._8_4_ = 0;
            FUN_1456bb102(local_158,lVar22);
            puVar30 = &local_1b8;
            FUN_1448729ea(lVar21 + 8,puVar30,local_158);
            uVar36 = FUN_144a7ecd0(puVar30);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_198 * 0x120));
            if (pcVar4 != (code *)0x0) {
              if (0x18 < local_1a0) {
                puVar30 = (undefined1 *)CONCAT71(uStack_1b7,local_1b8);
              }
              (*pcVar4)(puVar30);
            }
            if (0x18 < local_1a0) {
              FUN_1400020a8(CONCAT71(uStack_1b7,local_1b8));
            }
            FUN_144a5ac3a(local_158);
            lVar21 = *(longlong *)(param_1 + 0x2828);
            auVar20[0xf] = 0;
            auVar20._0_15_ = stack0xfffffffffffffea9;
            _local_158 = auVar20 << 8;
            local_138._8_4_ = 0;
            FUN_1456bb102(local_158,lVar22);
            puVar30 = &local_1b8;
            FUN_1448729ea(lVar21 + 0x58,puVar30,local_158);
            uVar37 = FUN_144a7ecd0(puVar30);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_198 * 0x120));
            if (pcVar4 != (code *)0x0) {
              if (0x18 < local_1a0) {
                puVar30 = (undefined1 *)CONCAT71(uStack_1b7,local_1b8);
              }
              (*pcVar4)(puVar30);
            }
            if (0x18 < local_1a0) {
              FUN_1400020a8(CONCAT71(uStack_1b7,local_1b8));
            }
            FUN_144a5ac3a(local_158);
          }
          if ((char)uVar33 != '\0') {
            uVar23 = (**(code **)(*(longlong *)(param_1 + -0x68) + 0x18))(param_1 + -0x68);
            local_1bc = 0;
            FUN_141094e00(uVar23,&DAT_14cbcbc70,1);
          }
          local_220 = CONCAT71(local_220._1_7_,(char)uVar28);
          local_228 = (undefined2 *)CONCAT44(local_228._4_4_,uVar37);
          local_218 = (char)uVar33;
          FUN_148be09f8(lVar22,fVar34 + fVar2,uVar35,uVar36);
          FUN_140154c96(local_158,*(undefined8 *)(param_1 + -0x298));
          *(undefined8 *)(param_1 + 0x2820) = local_148._0_8_;
          *(undefined1 (*) [4])(param_1 + 0x2810) = local_158;
          *(undefined4 *)(param_1 + 0x2814) = uStack_154;
          *(undefined4 *)(param_1 + 0x2818) = (undefined4)uStack_150;
          *(undefined4 *)(param_1 + 0x281c) = uStack_150._4_4_;
          lVar21 = FUN_1447210f0(lVar22);
          if (*(longlong *)(lVar21 + 0x1f0) == 0) {
            puVar29 = (undefined8 *)(lVar21 + 0x458);
          }
          else {
            puVar29 = (undefined8 *)(*(longlong *)(lVar21 + 0x1f0) + 0xf0);
          }
          uVar36 = *puVar29;
          lVar21 = *(longlong *)(param_1 + 0x2850);
          local_1b8 = 0;
          local_190 = 0;
          local_210 = uVar33;
          local_20c = uVar28;
          FUN_1456bb102(&local_1b8,lVar22);
          FUN_1448729ea(lVar21 + 0x518,local_d8,&local_1b8);
          uVar23 = FUN_144a7ecd0(local_d8);
          local_1d8 = (undefined8 *)0x0;
          local_1d0 = 0;
          FUN_1446efa72(&local_1d8,0,3,0x10);
          puVar29 = local_1d8;
          local_1d0 = 3;
          *local_1d8 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar25 = DAT_14c758608 + 1;
          lVar21 = DAT_14c758608 + 1;
          if (lVar25 == 0) {
            LOCK();
            UNLOCK();
            lVar25 = DAT_14c758608 + 2;
            lVar21 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar21;
          local_1d8[2] = lVar25;
          *local_1d8 = &PTR_FUN_14b9780e0;
          local_1d8[3] = 0;
          FUN_14485c47a(local_1d8 + 3,lVar22);
          *(undefined4 *)(puVar29 + 5) = 0;
          puVar29[4] = FUN_148d5c686;
          _local_158 = ZEXT812(0);
          FUN_14487d8d8(local_158,&local_1d8);
          local_118[0] = 1;
          local_228 = local_1c8;
          local_1c8[0] = 0;
          local_1c4 = 0xbf800000;
          FUN_1406f4044(uVar36,param_1 + 0x2838,local_158,uVar23);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_118[0]])(local_158);
          FUN_1449db362(&local_1d8);
          uVar28 = local_20c;
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b8 * 0x120));
          if (pcVar4 != (code *)0x0) {
            ppppuVar31 = local_d8;
            if (0x18 < local_c0) {
              ppppuVar31 = (undefined8 ****)local_d8[0];
            }
            (*pcVar4)(ppppuVar31);
          }
          if (0x18 < local_c0) {
            FUN_1400020a8(local_d8[0]);
          }
          FUN_144a5ac3a(&local_1b8);
          if ((((char)uVar28 == '\0') || (*(longlong *)(param_1 + 0x2860) == 0)) &&
             (((char)local_210 == '\0' || (*(longlong *)(param_1 + 0x2868) == 0)))) {
            local_228 = *(undefined2 **)(param_1 + 0x2738);
            local_220 = 0;
            FUN_140cb5d65(local_158,*(undefined8 *)(param_1 + 0x2740),
                          *(longlong *)(param_1 + 0x2850) + 0x6b8,puVar1);
            *(undefined8 **)(param_1 + 0x27d0) = _local_158;
            *(undefined8 *)(param_1 + 0x27d8) = uStack_150;
            *(undefined8 *)(param_1 + 0x27e0) = local_148._0_8_;
            local_228 = *(undefined2 **)(param_1 + 0x2738);
            local_220 = 0;
            FUN_140cb5d65(local_158,*(undefined8 *)(param_1 + 0x2740),
                          *(longlong *)(param_1 + 0x2850) + 0x6e8,puVar1);
            *(undefined8 **)(param_1 + 0x27e8) = _local_158;
            *(undefined8 *)(param_1 + 0x27f0) = uStack_150;
            local_1a8 = (double)local_148._0_8_;
          }
          else {
            lVar21 = (**(code **)(*(longlong *)(param_1 + 0x48) + 0x20))(param_1 + 0x48);
            if (lVar21 != 0) {
              _local_158 = ZEXT812(0x148d5c7ba);
              FUN_148d5c6ba(lVar21 + 0x158,&local_1b8,lVar22,local_158);
              _local_158 = ZEXT812(0);
              FUN_1446efa72(local_158,0,3,0x10);
              puVar29 = _local_158;
              uStack_150._0_4_ = 3;
              *_local_158 = &PTR_LAB_14b3e9ef0;
              LOCK();
              UNLOCK();
              lVar27 = DAT_14c758608 + 1;
              lVar25 = DAT_14c758608 + 1;
              if (lVar27 == 0) {
                LOCK();
                UNLOCK();
                lVar27 = DAT_14c758608 + 2;
                lVar25 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar25;
              _local_158[2] = lVar27;
              *_local_158 = &PTR_FUN_14b9781c0;
              _local_158[3] = 0;
              FUN_14485c47a(_local_158 + 3,lVar22);
              puVar29[4] = lVar22;
              FUN_1403524de(lVar21 + 0xf8,&local_1b8,local_158);
              FUN_1449db362(local_158);
            }
            pdVar26 = (double *)(*(longlong *)(param_1 + -0x238) + 0x240);
            if (*(longlong *)(param_1 + -0x238) == 0) {
              pdVar26 = (double *)&DAT_14c846480;
            }
            dVar15 = *pdVar26;
            dVar16 = pdVar26[1];
            dVar13 = pdVar26[2];
            dVar14 = pdVar26[3];
            dVar11 = pdVar26[4];
            dVar12 = pdVar26[5];
            dVar9 = pdVar26[6];
            dVar10 = pdVar26[7];
            dVar7 = pdVar26[8];
            dVar8 = pdVar26[9];
            dVar5 = pdVar26[10];
            dVar6 = pdVar26[0xb];
            if (((char)uVar28 != '\0') && (*(longlong *)(param_1 + 0x2860) != 0)) {
              FUN_14480333a(*(longlong *)(param_1 + 0x2860),&local_1b8);
              dVar7 = dVar7 + local_178;
              dVar8 = dVar8 + dStack_170;
              dVar5 = dVar5 + local_168;
              dVar6 = dVar6 + dStack_160;
              dVar11 = dVar11 + (double)CONCAT71(uStack_197,local_198);
              dVar12 = dVar12 + (double)CONCAT44(uStack_18c,local_190);
              dVar9 = dVar9 + local_188;
              dVar10 = dVar10 + dStack_180;
              dVar15 = dVar15 + (double)CONCAT71(uStack_1b7,local_1b8);
              dVar16 = dVar16 + local_1b0;
              dVar13 = dVar13 + local_1a8;
              dVar14 = dVar14 + (double)CONCAT62(uStack_19e,local_1a0);
            }
            uStack_150._0_4_ = SUB84(dVar16,0);
            _local_158 = (undefined8 *)dVar15;
            uStack_150._4_4_ = (int)((ulonglong)dVar16 >> 0x20);
            local_148._8_4_ = SUB84(dVar14,0);
            local_148._0_8_ = dVar13;
            local_148._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
            local_138._8_4_ = SUB84(dVar12,0);
            local_138._0_8_ = dVar11;
            local_138._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
            local_128._8_4_ = SUB84(dVar10,0);
            local_128._0_8_ = dVar9;
            local_128._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
            local_118._8_4_ = SUB84(dVar8,0);
            local_118._0_8_ = dVar7;
            local_118._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            local_108._8_4_ = SUB84(dVar6,0);
            local_108._0_8_ = dVar5;
            local_108._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
            local_f8 = 0x3f800000;
            local_f0 = 0;
            local_ec = 0;
            local_228 = *(undefined2 **)(param_1 + 0x2738);
            local_220 = 0;
            FUN_140cb5d65(&local_1b8,*(undefined8 *)(param_1 + 0x2740),
                          *(longlong *)(param_1 + 0x2850) + 0x6b8,local_158);
            *(ulonglong *)(param_1 + 0x27d0) = CONCAT71(uStack_1b7,local_1b8);
            *(double *)(param_1 + 0x27d8) = local_1b0;
            *(double *)(param_1 + 0x27e0) = local_1a8;
            local_228 = *(undefined2 **)(param_1 + 0x2738);
            local_220 = 0;
            FUN_140cb5d65(&local_1b8,*(undefined8 *)(param_1 + 0x2740),
                          *(longlong *)(param_1 + 0x2850) + 0x6e8,local_158);
            *(ulonglong *)(param_1 + 0x27e8) = CONCAT71(uStack_1b7,local_1b8);
            *(double *)(param_1 + 0x27f0) = local_1b0;
          }
          *(double *)(param_1 + 0x27f8) = local_1a8;
        }
        goto LAB_148d5ba43;
      }
    }
    *(undefined8 *)(param_1 + 0x2738) = 0;
  }
LAB_148d5ba43:
  if ((local_b0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d5c502 FUN_148d5c502 body=386 status=ok
// SIG undefined FUN_148d5c502(void)

void FUN_148d5c502(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined ***pppuVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong uStack_80;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(char *)(param_1 + 0x178) == '\x03') && (*(longlong *)(&DAT_00002a60 + param_1) != 0)) {
    if ((longlong)*(int *)(&DAT_00002a78 + param_1) != 0) {
      lVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x2a70) + lVar5) == 0) goto LAB_148d5c65c;
        lVar5 = lVar5 + 8;
      } while ((longlong)*(int *)(&DAT_00002a78 + param_1) * 8 != lVar5);
    }
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14b978250;
    local_78[0] = FUN_1441889d4;
    local_88 = 0;
    uStack_80 = 0;
    local_50 = param_1;
    FUN_140255853(&DAT_00002a60 + param_1,1,local_78,&local_88);
    lVar5 = local_88;
    lVar8 = (longlong)(int)uStack_80;
    if (lVar8 == 0) {
      uVar6 = 0;
    }
    else {
      lVar7 = 0;
      do {
        plVar1 = *(longlong **)(lVar5 + lVar7);
        if (plVar1 != (longlong *)0x0) {
          lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
          lVar3 = FUN_1466168dc();
          if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
              (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
               lVar3 + 0x30)) && (*(byte *)(plVar1 + 6) < 4)) {
            FUN_148d5cbd2(param_1,plVar1);
          }
        }
        lVar7 = lVar7 + 0x10;
      } while (lVar8 * 0x10 != lVar7);
      uVar6 = uStack_80 & 0xffffffff;
    }
    FUN_140255aed(local_88,uVar6);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78[0] != (code *)0x0) {
      pppuVar4 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar4 = &local_58;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
LAB_148d5c65c:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5c686 FUN_148d5c686 body=51 status=ok
// SIG undefined FUN_148d5c686(void)

void FUN_148d5c686(longlong *param_1)

{
  if ((char)param_1[0x2f] != '\x03') {
    return;
  }
  FUN_148d5d0ac();
                    /* WARNING: Could not recover jumptable at 0x000148d5c6b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5c8))(param_1,1);
  return;
}



// FUNCTION 148d5c6ba FUN_148d5c6ba body=254 status=ok
// SIG undefined FUN_148d5c6ba(void)

undefined8
FUN_148d5c6ba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3e9ef0;
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
  *local_48 = &PTR_FUN_14b978150;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1403524de(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5c7ba FUN_148d5c7ba body=222 status=ok
// SIG undefined FUN_148d5c7ba(void)

void FUN_148d5c7ba(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_38 [36];
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x398) + 0x18))(param_1 + 0x398);
    local_14 = 0;
    FUN_141094e00(uVar1,&DAT_14cbcbc7c,0);
    lVar2 = *(longlong *)(param_1 + 0x2c60);
    if ((lVar2 == 0) || (*(char *)(param_1 + 0x2c95) == '\x01')) {
      lVar2 = *(longlong *)(param_1 + 0x2c68);
      if ((lVar2 == 0) || (*(char *)(param_1 + 0x2c95) != '\x01')) goto LAB_148d5c87c;
      puVar3 = (undefined8 *)(param_1 + 0x2c68);
    }
    else {
      puVar3 = (undefined8 *)(param_1 + 0x2c60);
    }
    FUN_14045627c(lVar2,0,1);
    FUN_1449e3cec(*puVar3,1,1);
    FUN_14127091c(*puVar3,0);
    FUN_1401bf202(*puVar3);
    (**(code **)(*(longlong *)*puVar3 + 0x420))((longlong *)*puVar3,0);
  }
LAB_148d5c87c:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5c89a FUN_148d5c89a body=457 status=ok
// SIG undefined FUN_148d5c89a(void)

void FUN_148d5c89a(longlong param_1,undefined4 *param_2,float *param_3,undefined4 *param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 ****ppppuVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [40];
  undefined4 local_68;
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x2c50) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 == 0) {
      puVar5 = &DAT_14c8464e0;
      uVar9 = DAT_14c8464f0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar1 + 0x270);
      puVar5 = (undefined8 *)(lVar1 + 0x260);
    }
    uVar8 = *(undefined4 *)((longlong)puVar5 + 4);
    uVar3 = *(undefined4 *)(puVar5 + 1);
    uVar4 = *(undefined4 *)((longlong)puVar5 + 0xc);
    *param_2 = *(undefined4 *)puVar5;
    param_2[1] = uVar8;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    *(undefined8 *)(param_2 + 4) = uVar9;
    lVar1 = *(longlong *)(param_1 + 0x2c50);
    local_90[0] = 0;
    local_68 = 0;
    FUN_1456bb102(local_90,param_1);
    FUN_1448729ea(lVar1 + 0x478,local_60,local_90);
    fVar7 = (float)FUN_144a7ecd0(local_60);
    *param_3 = fVar7 + *(float *)(param_1 + 0x2c70);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar6 = local_60;
      if (0x18 < local_48) {
        ppppuVar6 = (undefined8 ****)local_60[0];
      }
      (*pcVar2)(ppppuVar6);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60[0]);
    }
    FUN_144a5ac3a(local_90);
    lVar1 = *(longlong *)(param_1 + 0x2c50);
    local_90[0] = 0;
    local_68 = 0;
    FUN_1456bb102(local_90,param_1);
    FUN_1448729ea(lVar1 + 0x4c8,local_60,local_90);
    uVar8 = FUN_144a7ecd0(local_60);
    *param_4 = uVar8;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar6 = local_60;
      if (0x18 < local_48) {
        ppppuVar6 = (undefined8 ****)local_60[0];
      }
      (*pcVar2)(ppppuVar6);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60[0]);
    }
    FUN_144a5ac3a(local_90);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5ca64 FUN_148d5ca64 body=145 status=ok
// SIG undefined FUN_148d5ca64(void)

bool FUN_148d5ca64(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined2 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_1447210f0(param_1 + -0x2610);
  local_38 = *(undefined8 *)(param_1 + 0x600);
  local_30 = *(undefined2 *)(param_1 + 0x608);
  local_28 = *(undefined8 *)(param_1 + 0x610);
  iVar1 = FUN_1412d1158(&local_38,*(undefined8 *)(param_2 + 0x20),uVar2);
  if (iVar1 == 0) {
    *param_3 = *(undefined4 *)(param_1 + 0x680);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5cb12 FUN_148d5cb12 body=191 status=ok
// SIG undefined FUN_148d5cb12(void)

void FUN_148d5cb12(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 *local_b0;
  undefined1 local_99;
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined1 local_68 [40];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((0 < *(int *)(param_2 + 8)) && (param_4 != 0)) && (*(int *)(param_3 + 8) == 0)) {
    local_98[0] = 0;
    local_70 = 0;
    FUN_1456bb102(local_98,param_4);
    local_68[0] = 0;
    local_40 = 0;
    local_b0 = &local_99;
    local_b8 = 1;
    FUN_140c3fc86(param_2,param_3,param_1,local_98);
    FUN_144a5ac3a(local_68);
    FUN_144a5ac3a(local_98);
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5cbd2 FUN_148d5cbd2 body=1240 status=ok
// SIG undefined FUN_148d5cbd2(void)

void FUN_148d5cbd2(longlong param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  float fVar4;
  int iVar5;
  code *pcVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 ****ppppuVar9;
  uint uVar10;
  ulonglong unaff_RBP;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  float local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  ulonglong local_d8;
  longlong *plStack_d0;
  ulonglong local_c8;
  longlong *plStack_c0;
  undefined4 local_a0;
  undefined8 ***local_98 [3];
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    fVar13 = 1.0;
    if (*(char *)(param_2 + 0x78) == '\x01') {
      uVar10 = (uint)(float)(*(int *)(param_2 + 0x7c) + -1);
      unaff_RBP = (ulonglong)uVar10;
      if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(param_2 + 0x70))) {
        FUN_140c65c56(&DAT_00002a60 + param_1,&local_c8);
        fVar11 = (float)FUN_1407caec0(local_c8,&DAT_14cbcbc88,0x3f000000);
        plVar8 = plStack_c0;
        fVar13 = *(float *)(*(longlong *)(param_2 + 0x68) + (ulonglong)uVar10 * 8);
        fVar4 = *(float *)(*(longlong *)(param_2 + 0x68) + 4 + (ulonglong)uVar10 * 8);
        if (plStack_c0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_c0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_c0)(plStack_c0);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        fVar13 = (fVar4 - fVar13) * fVar11 + fVar13;
      }
    }
    iVar5 = *(int *)(param_2 + 0x34);
    local_98[0] = DAT_14cbcbc38;
    ppppuVar9 = DAT_14cbcbc50;
    if (((param_3 == 3) || (ppppuVar9 = DAT_14cbcbc48, param_3 == 2)) ||
       (ppppuVar9 = DAT_14cbcbc40, param_3 == 1)) {
      local_98[0] = ppppuVar9;
    }
    FUN_140db960a(param_2 + 0x38,&local_c8);
    local_d8 = local_c8;
    plStack_d0 = plStack_c0;
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    local_f0 = 0;
    local_f8 = 0;
    local_108 = 0;
    local_e8 = 0;
    local_100 = fVar13;
    FUN_141348940(param_1 + 0x2608,&local_d8,local_98,
                  CONCAT71((int7)(unaff_RBP >> 8),iVar5 == 0) & 0xffffffff);
    plVar8 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x2a08);
      *(uint *)(param_1 + 0x2a08) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x2a0c) < iVar5 + 1U) {
        FUN_148d681de((longlong *)(param_1 + 0x2a00),iVar5);
      }
      *(byte *)(*(longlong *)(param_1 + 0x2a00) + (longlong)iVar5) = param_3;
    }
    *(byte *)(param_1 + 0x2c94) = *(byte *)(param_1 + 0x2c94) | (byte)(1 << (param_3 & 0x1f));
  }
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_148d6825c(param_2 + 0x50,&local_c8);
    plVar8 = plStack_c0;
    uVar7 = local_c8;
    lVar3 = local_c8 + 8;
    local_c8 = local_c8 & 0xffffffffffffff00;
    local_a0 = 0;
    FUN_1456bb102(&local_c8,param_1);
    FUN_1448729ea(lVar3,local_98,&local_c8);
    fVar13 = (float)FUN_144a7b41a(local_98,0);
    *(float *)(param_1 + 0x2c70) = fVar13 + *(float *)(param_1 + 0x2c70);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar6 != (code *)0x0) {
      ppppuVar9 = local_98;
      if (0x18 < local_80) {
        ppppuVar9 = (undefined8 ****)local_98[0];
      }
      (*pcVar6)(ppppuVar9);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(local_98[0]);
    }
    FUN_144a5ac3a(&local_c8);
    *(undefined1 *)(param_1 + 0x2c8d) = *(undefined1 *)(uVar7 + 0x58);
    local_c8 = local_c8 & 0xffffffffffffff00;
    local_a0 = 0;
    FUN_1456bb102(&local_c8,param_1);
    FUN_1448729ea(uVar7 + 0x60,local_98,&local_c8);
    uVar12 = FUN_144a7b41a(local_98,0);
    *(undefined4 *)(param_1 + 0x2c78) = uVar12;
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar6 != (code *)0x0) {
      ppppuVar9 = local_98;
      if (0x18 < local_80) {
        ppppuVar9 = (undefined8 ****)local_98[0];
      }
      (*pcVar6)(ppppuVar9);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(local_98[0]);
    }
    FUN_144a5ac3a(&local_c8);
    local_c8 = local_c8 & 0xffffffffffffff00;
    local_a0 = 0;
    FUN_1456bb102(&local_c8,param_1);
    FUN_1448729ea(uVar7 + 0xb0,local_98,&local_c8);
    uVar12 = FUN_144a7b41a(local_98,0);
    *(undefined4 *)(param_1 + 0x2c7c) = uVar12;
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar6 != (code *)0x0) {
      ppppuVar9 = local_98;
      if (0x18 < local_80) {
        ppppuVar9 = (undefined8 ****)local_98[0];
      }
      (*pcVar6)(ppppuVar9);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(local_98[0]);
    }
    FUN_144a5ac3a(&local_c8);
    if (*(char *)(param_1 + 0x2c8d) == '\0') {
      if ((0.0001 < *(float *)(param_1 + 0x2c78)) && (0.0001 < *(float *)(param_1 + 0x2c7c))) {
        *(byte *)(param_1 + 0x2c94) = *(byte *)(param_1 + 0x2c94) | 8;
      }
    }
    else {
      *(byte *)(param_1 + 0x2c94) = *(byte *)(param_1 + 0x2c94) | 8;
      (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x588))(*(longlong **)(param_1 + 0x1c8),2);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d5d0ac FUN_148d5d0ac body=1714 status=ok
// SIG undefined FUN_148d5d0ac(void)

void FUN_148d5d0ac(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  double *pdVar12;
  longlong lVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 ****ppppuVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_2e8 [40];
  undefined1 local_2c0 [8];
  longlong local_2b8;
  int local_2b0;
  undefined8 local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  undefined1 local_254 [8];
  undefined1 local_24c [8];
  float local_244;
  undefined8 ***local_f8 [3];
  ushort local_e0;
  byte local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (*(int *)(param_1 + 0x2c08) != 0) {
    plVar1 = (longlong *)(param_1 + 0x2c00);
    if (((((longlong *)*plVar1 != (longlong *)0x0) &&
         (cVar8 = (**(code **)(*(longlong *)*plVar1 + 0x30))(), cVar8 != '\0')) &&
        (*(int *)(param_1 + 0x2c08) != 0)) &&
       (puVar16 = (undefined8 *)*plVar1, puVar16 != (undefined8 *)0x0)) {
      (**(code **)*puVar16)(puVar16,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x2c08) = 0;
    }
  }
  if (*(longlong *)(param_1 + 0x2c48) != 0) {
    puVar16 = (undefined8 *)(param_1 + 0x2c48);
    lVar10 = FUN_1447210f0(param_1);
    if (*(longlong *)(lVar10 + 0x1f0) == 0) {
      puVar15 = (undefined8 *)(lVar10 + 0x458);
    }
    else {
      puVar15 = (undefined8 *)(*(longlong *)(lVar10 + 0x1f0) + 0xf0);
    }
    uVar11 = *puVar15;
    lVar10 = FUN_144a61814(uVar11,puVar16);
    if (lVar10 != 0) {
      FUN_1405a424c(uVar11,*puVar16);
    }
    *(undefined8 *)(param_1 + 0x2c48) = 0;
    lVar10 = (**(code **)(*(longlong *)(param_1 + 0x448) + 0x20))(param_1 + 0x448);
    if (lVar10 != 0) {
      FUN_1400bc8c2(lVar10 + 0x90,&DAT_14cbcbc58);
    }
    *puVar16 = 0;
  }
  if (*(longlong *)(param_1 + 0x2c40) != 0) {
    lVar10 = FUN_1447210f0(param_1);
    if (*(longlong *)(lVar10 + 0x1f0) == 0) {
      puVar16 = (undefined8 *)(lVar10 + 0x458);
    }
    else {
      puVar16 = (undefined8 *)(*(longlong *)(lVar10 + 0x1f0) + 0xf0);
    }
    uVar11 = *puVar16;
    lVar10 = FUN_144a61814(uVar11,(undefined8 *)(param_1 + 0x2c40));
    if (lVar10 != 0) {
      FUN_1405a424c(uVar11,*(undefined8 *)(param_1 + 0x2c40));
    }
    *(undefined8 *)(param_1 + 0x2c40) = 0;
    FUN_148d5d7a4(param_1);
  }
  lVar10 = *(longlong *)(param_1 + 0x2c28);
  if (lVar10 == 0) goto LAB_148d5d27f;
  local_2c0[0] = 0;
  local_298 = (double)((ulonglong)local_298 & 0xffffffff00000000);
  FUN_1456bb102(local_2c0,param_1);
  FUN_1448729ea(lVar10 + 0x150,local_f8,local_2c0);
  iVar9 = FUN_14005fbd2(local_f8,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d8 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar17 = local_f8;
    if (0x18 < local_e0) {
      ppppuVar17 = (undefined8 ****)local_f8[0];
    }
    (*pcVar2)(ppppuVar17);
  }
  if (0x18 < local_e0) {
    FUN_1400020a8(local_f8[0]);
  }
  FUN_144a5ac3a(local_2c0);
  lVar10 = *(longlong *)(param_1 + 0x2c28);
  local_2c0[0] = 0;
  local_298 = (double)((ulonglong)local_298 & 0xffffffff00000000);
  FUN_1456bb102(local_2c0,param_1);
  FUN_1448729ea(lVar10 + 0x1a8,local_f8,local_2c0);
  fVar18 = (float)FUN_144a7b41a(local_f8,0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d8 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar17 = local_f8;
    if (0x18 < local_e0) {
      ppppuVar17 = (undefined8 ****)local_f8[0];
    }
    (*pcVar2)(ppppuVar17);
  }
  if (0x18 < local_e0) {
    FUN_1400020a8(local_f8[0]);
  }
  FUN_144a5ac3a(local_2c0);
  if (((fVar18 <= 0.0001) ||
      (lVar10 = FUN_1403d77ae(*(longlong *)(param_1 + 0x2c28) + 0x138), iVar9 < 1)) || (lVar10 == 0)
     ) goto LAB_148d5d27f;
  uVar11 = FUN_1447210f0(param_1);
  lVar10 = thunk_FUN_140877338(uVar11);
  if (lVar10 == 0) goto LAB_148d5d27f;
  fVar22 = *(float *)(*(longlong *)(param_1 + 0x2c28) + 0x1a0);
  FUN_140e35e6c(local_2c0);
  lVar13 = *(longlong *)(param_1 + 0x2c28);
  if (local_2b8 == *(longlong *)(lVar13 + 0x138)) {
    iVar14 = *(int *)(lVar13 + 0x140);
    if (local_2b0 != iVar14) goto LAB_148d5d546;
  }
  else {
    iVar14 = *(int *)(lVar13 + 0x140);
LAB_148d5d546:
    local_2a8 = 0;
    local_2b8 = *(longlong *)(lVar13 + 0x138);
    local_2b0 = iVar14;
  }
  lVar13 = *(longlong *)(param_1 + 0x1c8);
  if (lVar13 == 0) {
    pdVar12 = (double *)&DAT_14c8464e0;
    uVar23 = (undefined4)DAT_14c8464f0;
    uVar24 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar23 = (undefined4)*(undefined8 *)(lVar13 + 0x270);
    uVar24 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x270) >> 0x20);
    pdVar12 = (double *)(lVar13 + 0x260);
  }
  fVar22 = fVar22 * 0.017453292;
  dVar6 = *pdVar12;
  dVar7 = pdVar12[1];
  FUN_14485c47a(local_254,*(undefined8 *)(param_1 + 0x168));
  FUN_14485c47a(local_24c,param_1);
  local_244 = fVar18;
  lVar13 = (**(code **)(*(longlong *)(param_1 + 0x448) + 0x10))(param_1 + 0x448);
  if (lVar13 != 0) {
    fVar18 = (float)FUN_140d033b6(lVar13,0);
    local_244 = fVar18 * local_244;
  }
  fVar18 = sinf(fVar22);
  fVar19 = cosf(fVar22);
  dVar4 = 0.0;
  dVar3 = (double)fVar18 * 0.0 + (double)fVar19;
  fVar18 = cosf(fVar22);
  fVar22 = sinf(fVar22);
  fVar19 = 360.0 / (float)iVar9;
  dVar5 = (double)fVar18 * 0.0 - (double)fVar22;
  do {
    dVar21 = (double)*(float *)(*(longlong *)(param_1 + 0x2c28) + 0x1f8);
    local_290 = dVar3 * dVar21 + (double)CONCAT44(uVar24,uVar23);
    local_298 = dVar5 * dVar21 + dVar7;
    local_2a0 = dVar21 * dVar4 + dVar6;
    local_288 = dVar4;
    local_280 = dVar5;
    local_278 = dVar3;
    FUN_1414621da(lVar10,local_2c0,0);
    fVar18 = sinf(fVar19);
    fVar22 = cosf(fVar19);
    dVar21 = (double)fVar18 * dVar4;
    fVar18 = cosf(fVar19);
    fVar20 = sinf(fVar19);
    dVar4 = (double)fVar18 * dVar4 - (double)fVar20 * dVar5;
    iVar9 = iVar9 + -1;
    dVar5 = dVar21 + (double)fVar22 * dVar5;
  } while (iVar9 != 0);
  FUN_140bba396(local_2c0);
LAB_148d5d27f:
  if (*(longlong *)(param_1 + 0x2c50) != 0) {
    FUN_148be0594(param_1,*(longlong *)(param_1 + 0x2c50) + 0x598);
    FUN_148be0594(param_1,*(longlong *)(param_1 + 0x2c50) + 0x628);
  }
  lVar10 = (**(code **)(*(longlong *)(param_1 + 0x448) + 0x20))(param_1 + 0x448);
  if (lVar10 != 0) {
    FUN_140457ffc(lVar10 + 0x158,param_1);
    FUN_140457ffc(lVar10 + 0xf8,param_1);
  }
  FUN_148d5ddd2(param_1);
  FUN_148d5e4b2(param_1);
  if ((local_d0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d5d760 FUN_148d5d760 body=68 status=ok
// SIG undefined FUN_148d5d760(void)

void FUN_148d5d760(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x448) + 0x20))(param_1 + 0x448);
  if (lVar1 != 0) {
    FUN_1400bc8c2(lVar1 + 0x90,&DAT_14cbcbc58);
  }
  *(undefined8 *)(param_1 + 0x2c48) = 0;
  return;
}



// FUNCTION 148d5d7a4 FUN_148d5d7a4 body=1581 status=ok
// SIG undefined FUN_148d5d7a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148d5d7a4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auVar11 [16];
  longlong lVar13;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  longlong lStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  longlong lVar10;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((0.0001 < *(float *)(param_1 + 0x2c78)) && (0.0001 < *(float *)(param_1 + 0x2c7c))) {
    plVar1 = (longlong *)(param_1 + 0x2960);
    lVar2 = param_1 + 0x2970;
    local_80 = 0x100000000;
    local_70 = 0xffffffff;
    uStack_68 = 0;
    lStack_78 = lVar2;
    if (*(int *)(param_1 + 0x2988) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_80);
      iVar9 = *(int *)(param_1 + 0x2988);
    }
    auVar14._8_4_ = uStack_68;
    auVar14._0_8_ = local_70;
    auVar14._12_4_ = uStack_64;
    local_a0 = local_80;
    lStack_98 = lStack_78;
    local_90._4_4_ = (undefined4)((ulonglong)local_70 >> 0x20);
    iVar4 = local_90._4_4_;
    local_a8 = plVar1;
    auVar15 = auVar14;
    if ((local_90._4_4_ != iVar9) || (local_90 = auVar14, lStack_78 != lVar2)) {
      do {
        local_90 = auVar15;
        if (0 < *(int *)(*local_a8 + 0x10 + (longlong)iVar4 * 0x20)) {
          FUN_14053d8da(*local_a8 + (longlong)iVar4 * 0x20 + 8,1);
        }
        local_90._0_4_ = local_90._0_4_ & ~local_a0._4_4_;
        FUN_1449c0562(&local_a0);
        iVar4 = local_90._4_4_;
        auVar15 = local_90;
      } while (local_a8 != plVar1 || (lStack_98 != lVar2 || local_90._4_4_ != iVar9));
    }
    auVar15 = _DAT_149931e80;
    if ((longlong)*(int *)(param_1 + 0x2858) != 0) {
      uVar5 = (longlong)*(int *)(param_1 + 0x2858) * 0x70 - 0x70U >> 4;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar5;
      auVar11._8_4_ = SUB164(auVar17 * ZEXT816(0x2492492492492493),8);
      auVar11._0_8_ = uVar5 / 7;
      auVar11._12_4_ = (int)(uVar5 / 0x700000000);
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x2850) + 0x1b8);
      uVar8 = 0;
      auVar14 = pmovsxbq(auVar14,0x302);
      in_XMM2 = pmovsxbq(in_XMM2,0x100);
      auVar11 = auVar11 | _DAT_149931e80;
      lVar10 = auVar11._0_8_;
      do {
        lVar13 = auVar11._8_8_;
        if ((bool)(~(lVar10 < (longlong)(uVar8 ^ auVar15._0_8_)) & 1)) {
          puVar7[-0x54] = 0x3f800000;
        }
        auVar16._8_4_ = (int)uVar8;
        auVar16._0_8_ = uVar8;
        auVar16._12_4_ = (int)(uVar8 >> 0x20);
        if ((longlong)((auVar16._8_8_ | in_XMM2._8_8_) ^ auVar15._8_8_) <= lVar13) {
          puVar7[-0x38] = 0x3f800000;
        }
        auVar17 = (auVar16 | auVar14) ^ auVar15;
        if (auVar17._0_8_ <= lVar10) {
          puVar7[-0x1c] = 0x3f800000;
        }
        if (auVar17._8_8_ <= lVar13) {
          *puVar7 = 0x3f800000;
        }
        uVar8 = uVar8 + 4;
        puVar7 = puVar7 + 0x70;
      } while ((uVar5 / 7 + 4 & 0x7fffffffffffffc) != uVar8);
    }
    local_80 = 0x100000000;
    local_70 = 0xffffffff;
    uStack_68 = 0;
    if (*(int *)(param_1 + 0x2988) == 0) {
      iVar9 = 0;
      lStack_78 = lVar2;
    }
    else {
      lStack_78 = lVar2;
      FUN_1449c0562(&local_80);
      iVar9 = *(int *)(param_1 + 0x2988);
    }
    local_90._12_4_ = uStack_64;
    local_90._8_4_ = uStack_68;
    local_90._0_8_ = local_70;
    auVar14 = local_90;
    local_a0 = local_80;
    lStack_98 = lStack_78;
    local_90._4_4_ = (undefined4)((ulonglong)local_70 >> 0x20);
    iVar4 = local_90._4_4_;
    local_a8 = plVar1;
    if ((local_90._4_4_ != iVar9) || (local_90 = auVar14, lStack_78 != lVar2)) {
      do {
        local_90 = auVar14;
        lVar10 = *local_a8;
        uVar6 = FUN_14479d2ce(lVar10 + (longlong)iVar4 * 0x20);
        FUN_148d5cb12(param_1,param_1 + 0x2850,lVar10 + (longlong)iVar4 * 0x20 + 8,uVar6);
        local_90._0_4_ = local_90._0_4_ & ~local_a0._4_4_;
        FUN_1449c0562(&local_a0);
        iVar4 = local_90._4_4_;
        auVar14 = local_90;
      } while (local_a8 != plVar1 || (lStack_98 != lVar2 || local_90._4_4_ != iVar9));
    }
    plVar1 = (longlong *)(param_1 + 0x29b0);
    lVar2 = param_1 + 0x29c0;
    local_80 = 0x100000000;
    local_70 = 0xffffffff;
    uStack_68 = 0;
    lStack_78 = lVar2;
    if (*(int *)(param_1 + 0x29d8) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_80);
      iVar9 = *(int *)(param_1 + 0x29d8);
    }
    auVar15._8_4_ = uStack_68;
    auVar15._0_8_ = local_70;
    auVar15._12_4_ = uStack_64;
    local_a0 = local_80;
    lStack_98 = lStack_78;
    local_90._4_4_ = (undefined4)((ulonglong)local_70 >> 0x20);
    iVar4 = local_90._4_4_;
    local_a8 = plVar1;
    auVar14 = auVar15;
    if ((local_90._4_4_ != iVar9) || (local_90 = auVar15, lStack_78 != lVar2)) {
      do {
        local_90 = auVar14;
        if (0 < *(int *)(*local_a8 + 0x10 + (longlong)iVar4 * 0x20)) {
          FUN_14053d8da(*local_a8 + (longlong)iVar4 * 0x20 + 8,1);
        }
        local_90._0_4_ = local_90._0_4_ & ~local_a0._4_4_;
        FUN_1449c0562(&local_a0);
        iVar4 = local_90._4_4_;
        auVar14 = local_90;
      } while (local_a8 != plVar1 || (lStack_98 != lVar2 || local_90._4_4_ != iVar9));
    }
    auVar14 = _DAT_149931e80;
    if ((longlong)*(int *)(param_1 + 0x2868) != 0) {
      uVar5 = (longlong)*(int *)(param_1 + 0x2868) * 0x70 - 0x70U >> 4;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar5;
      auVar12._8_4_ = SUB164(auVar3 * ZEXT816(0x2492492492492493),8);
      auVar12._0_8_ = uVar5 / 7;
      auVar12._12_4_ = (int)(uVar5 / 0x700000000);
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x2860) + 0x1b8);
      uVar8 = 0;
      auVar15 = pmovsxbq(auVar15,0x302);
      auVar17 = pmovsxbq(in_XMM2,0x100);
      auVar12 = auVar12 | _DAT_149931e80;
      lVar10 = auVar12._0_8_;
      do {
        lVar13 = auVar12._8_8_;
        if ((bool)(~(lVar10 < (longlong)(uVar8 ^ auVar14._0_8_)) & 1)) {
          puVar7[-0x54] = 0x3f800000;
        }
        auVar18._8_4_ = (int)uVar8;
        auVar18._0_8_ = uVar8;
        auVar18._12_4_ = (int)(uVar8 >> 0x20);
        if ((longlong)((auVar18._8_8_ | auVar17._8_8_) ^ auVar14._8_8_) <= lVar13) {
          puVar7[-0x38] = 0x3f800000;
        }
        auVar11 = (auVar18 | auVar15) ^ auVar14;
        if (auVar11._0_8_ <= lVar10) {
          puVar7[-0x1c] = 0x3f800000;
        }
        if (auVar11._8_8_ <= lVar13) {
          *puVar7 = 0x3f800000;
        }
        uVar8 = uVar8 + 4;
        puVar7 = puVar7 + 0x70;
      } while ((uVar5 / 7 + 4 & 0x7fffffffffffffc) != uVar8);
    }
    local_80 = 0x100000000;
    local_70 = 0xffffffff;
    uStack_68 = 0;
    if (*(int *)(param_1 + 0x29d8) == 0) {
      iVar9 = 0;
      lStack_78 = lVar2;
    }
    else {
      lStack_78 = lVar2;
      FUN_1449c0562(&local_80);
      iVar9 = *(int *)(param_1 + 0x29d8);
    }
    local_90._12_4_ = uStack_64;
    local_90._8_4_ = uStack_68;
    local_90._0_8_ = local_70;
    auVar14 = local_90;
    local_a0 = local_80;
    lStack_98 = lStack_78;
    local_90._4_4_ = (undefined4)((ulonglong)local_70 >> 0x20);
    iVar4 = local_90._4_4_;
    local_a8 = plVar1;
    if ((local_90._4_4_ != iVar9) || (local_90 = auVar14, lStack_78 != lVar2)) {
      do {
        local_90 = auVar14;
        lVar10 = *local_a8;
        uVar6 = FUN_14479d2ce(lVar10 + (longlong)iVar4 * 0x20);
        FUN_148d5cb12(param_1,param_1 + 0x2860,lVar10 + (longlong)iVar4 * 0x20 + 8,uVar6);
        local_90._0_4_ = local_90._0_4_ & ~local_a0._4_4_;
        FUN_1449c0562(&local_a0);
        iVar4 = local_90._4_4_;
        auVar14 = local_90;
      } while (local_a8 != plVar1 || (lStack_98 != lVar2 || local_90._4_4_ != iVar9));
    }
  }
  *(undefined8 *)(param_1 + 0x2c40) = 0;
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5ddd2 FUN_148d5ddd2 body=1759 status=ok
// SIG undefined FUN_148d5ddd2(void)

void FUN_148d5ddd2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  bool bVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  uint local_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x2870);
  local_78 = 0;
  uStack_70 = 0;
  lVar2 = param_1 + 0x2880;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar8 = 0;
  local_60 = lVar2;
  if (*(int *)(param_1 + 0x2898) != 0) {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x2898);
  }
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_80 = local_50;
  local_7c = local_4c;
  local_98 = local_68;
  local_90 = local_60;
  local_a0 = plVar1;
  if ((iStack_54 != iVar8) || (local_60 != lVar2)) {
    do {
      lVar9 = (longlong)iStack_84 * 0x38 + *local_a0;
      cVar3 = FUN_144729dda(lVar9);
      if (cVar3 != '\0') {
        uVar5 = FUN_14479d2ce(lVar9);
        uVar7 = uStack_70;
        lVar9 = (longlong)(int)uStack_70;
        uVar4 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
        if (uStack_70._4_4_ < uVar4) {
          FUN_148ccb356(&local_78,uVar7 & 0xffffffff);
        }
        *(undefined8 *)(local_78 + lVar9 * 8) = uVar5;
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (local_a0 != plVar1 || (local_90 != lVar2 || iStack_84 != iVar8));
  }
  lVar2 = local_78;
  lVar9 = (longlong)(int)uStack_70;
  if (lVar9 != 0) {
    lVar10 = 0;
    do {
      FUN_148d5e81e(param_1,*(undefined8 *)(lVar2 + lVar10));
      lVar10 = lVar10 + 8;
    } while (lVar9 * 8 != lVar10);
  }
  FUN_148d68c08(plVar1);
  uVar7 = uStack_70 >> 0x20;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if ((int)uVar7 != 0) {
    FUN_148d2ee82(&local_78,0);
  }
  plVar1 = (longlong *)(param_1 + 0x28c0);
  lVar2 = param_1 + 0x28d0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar8 = 0;
  local_60 = lVar2;
  if (*(int *)(param_1 + 0x28e8) != 0) {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x28e8);
  }
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_80 = local_50;
  local_7c = local_4c;
  local_98 = local_68;
  local_90 = local_60;
  local_a0 = plVar1;
  if ((iStack_54 != iVar8) || (local_60 != lVar2)) {
    do {
      lVar9 = (longlong)iStack_84 * 0x38 + *local_a0;
      cVar3 = FUN_144729dda(lVar9);
      if (cVar3 != '\0') {
        uVar5 = FUN_14479d2ce(lVar9);
        uVar7 = uStack_70;
        lVar9 = (longlong)(int)uStack_70;
        uVar4 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
        if (uStack_70._4_4_ < uVar4) {
          FUN_148ccb356(&local_78,uVar7 & 0xffffffff);
        }
        *(undefined8 *)(local_78 + lVar9 * 8) = uVar5;
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (local_a0 != plVar1 || (local_90 != lVar2 || iStack_84 != iVar8));
  }
  lVar2 = local_78;
  lVar9 = (longlong)(int)uStack_70;
  if (lVar9 != 0) {
    lVar10 = 0;
    do {
      FUN_148d5e81e(param_1,*(undefined8 *)(lVar2 + lVar10));
      lVar10 = lVar10 + 8;
    } while (lVar9 * 8 != lVar10);
  }
  FUN_148d68c08(plVar1);
  uVar7 = uStack_70 >> 0x20;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if ((int)uVar7 != 0) {
    FUN_148d2ee82(&local_78,0);
  }
  plVar1 = (longlong *)(param_1 + 0x2910);
  lVar2 = param_1 + 0x2920;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar8 = 0;
  local_60 = lVar2;
  if (*(int *)(param_1 + 0x2938) != 0) {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x2938);
  }
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_80 = local_50;
  local_7c = local_4c;
  local_98 = local_68;
  local_90 = local_60;
  local_a0 = plVar1;
  if ((iStack_54 != iVar8) || (local_60 != lVar2)) {
    do {
      lVar9 = (longlong)iStack_84 * 0x38 + *local_a0;
      cVar3 = FUN_144729dda(lVar9);
      if (cVar3 != '\0') {
        uVar5 = FUN_14479d2ce(lVar9);
        uVar7 = uStack_70;
        lVar9 = (longlong)(int)uStack_70;
        uVar4 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
        if (uStack_70._4_4_ < uVar4) {
          FUN_148ccb356(&local_78,uVar7 & 0xffffffff);
        }
        *(undefined8 *)(local_78 + lVar9 * 8) = uVar5;
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (local_a0 != plVar1 || (local_90 != lVar2 || iStack_84 != iVar8));
  }
  lVar2 = local_78;
  lVar9 = (longlong)(int)uStack_70;
  if (lVar9 != 0) {
    lVar10 = 0;
    do {
      FUN_148d5e81e(param_1,*(undefined8 *)(lVar2 + lVar10));
      lVar10 = lVar10 + 8;
    } while (lVar9 * 8 != lVar10);
  }
  FUN_148d68c08(plVar1);
  uVar7 = uStack_70 >> 0x20;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if ((int)uVar7 != 0) {
    FUN_148d2ee82(&local_78,0);
  }
  if (((*(byte *)(param_1 + 0x2c94) & 8) != 0) && (*(char *)(param_1 + 0x2c8c) == '\x01')) {
    iVar8 = *(int *)(param_1 + 0x2848);
    if ((longlong)iVar8 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x2840);
      lVar10 = 0;
      lVar9 = DAT_14cbcbc50;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar10);
        if (plVar1[0x59] == lVar9) {
          (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined8 *)(param_1 + 0x2b38));
          lVar9 = DAT_14cbcbc50;
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar8 * 8 != lVar10);
    }
    *(undefined1 *)(param_1 + 0x2c8c) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x2960);
  lVar2 = param_1 + 0x2970;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar8 = 0;
  local_60 = lVar2;
  if (*(int *)(param_1 + 0x2988) != 0) {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x2988);
  }
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_80 = local_50;
  uVar7 = (ulonglong)local_4c;
  local_7c = local_4c;
  local_98 = local_68;
  local_90 = local_60;
  local_a0 = plVar1;
  if ((iStack_54 != iVar8) || (local_60 != lVar2)) {
    do {
      if (0 < *(int *)(*local_a0 + 0x10 + (longlong)iStack_84 * 0x20)) {
        uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
        FUN_14053d8da(*local_a0 + (longlong)iStack_84 * 0x20 + 8,uVar7);
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
      bVar6 = local_a0 != plVar1 || (local_90 != lVar2 || iStack_84 != iVar8);
      uVar7 = CONCAT71((int7)(uVar7 >> 8),bVar6);
    } while (bVar6);
  }
  FUN_148d68f46(plVar1);
  plVar1 = (longlong *)(param_1 + 0x29b0);
  lVar2 = param_1 + 0x29c0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar8 = 0;
  local_60 = lVar2;
  if (*(int *)(param_1 + 0x29d8) != 0) {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x29d8);
  }
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_80 = local_50;
  uVar7 = (ulonglong)local_4c;
  local_7c = local_4c;
  local_98 = local_68;
  local_90 = local_60;
  local_a0 = plVar1;
  if ((iStack_54 != iVar8) || (local_60 != lVar2)) {
    do {
      if (0 < *(int *)(*local_a0 + 0x10 + (longlong)iStack_84 * 0x20)) {
        uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
        FUN_14053d8da(*local_a0 + (longlong)iStack_84 * 0x20 + 8,uVar7);
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
      bVar6 = local_a0 != plVar1 || (local_90 != lVar2 || iStack_84 != iVar8);
      uVar7 = CONCAT71((int7)(uVar7 >> 8),bVar6);
    } while (bVar6);
  }
  FUN_148d68f46(plVar1);
  *(undefined4 *)(param_1 + 0x2a18) = 0;
  if (*(int *)(param_1 + 0x2a1c) != 0) {
    FUN_148ccb3dc(param_1 + 0x2a10,0);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d5e4b2 FUN_148d5e4b2 body=223 status=ok
// SIG undefined FUN_148d5e4b2(void)

void FUN_148d5e4b2(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong lVar8;
  
  if ((longlong)*(int *)(param_1 + 0x2a08) != 0) {
    pcVar7 = *(char **)(param_1 + 0x2a00);
    pcVar1 = pcVar7 + *(int *)(param_1 + 0x2a08);
    do {
      iVar3 = *(int *)(param_1 + 0x2848);
      if ((longlong)iVar3 != 0) {
        cVar2 = *pcVar7;
        lVar4 = *(longlong *)(param_1 + 0x2840);
        lVar8 = 0;
        do {
          plVar6 = &DAT_14cbcbc38;
          if ((byte)(cVar2 - 1U) < 3) {
            plVar6 = (longlong *)(&PTR_DAT_14b978ec8)[(byte)(cVar2 - 1U)];
          }
          plVar5 = *(longlong **)(lVar4 + lVar8);
          if (plVar5[0x59] == *plVar6) {
            (**(code **)(*plVar5 + 0x20))(plVar5,*(undefined8 *)(param_1 + 0x2b38));
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar3 * 8 != lVar8);
      }
      pcVar7 = pcVar7 + 1;
    } while (pcVar7 != pcVar1);
  }
  *(undefined4 *)(param_1 + 0x2a08) = 0;
  if (*(int *)(param_1 + 0x2a0c) == 0) {
    return;
  }
  FUN_148d690ce(param_1 + 0x2a00);
  return;
}



// FUNCTION 148d5e592 FUN_148d5e592 body=342 status=ok
// SIG undefined FUN_148d5e592(void)

void FUN_148d5e592(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  undefined8 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = param_2;
  if ((param_2 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    local_68 = 0;
    FUN_14485c47a(&local_68);
    local_98 = local_68;
    iVar3 = FUN_148d689a2(param_3,(uint)((ulonglong)local_68 >> 0x20) ^ (uint)local_68,&local_98);
    if (iVar3 == -1) {
      iVar3 = *(int *)(param_1 + 0x2848);
      if ((longlong)iVar3 != 0) {
        lVar1 = *(longlong *)(param_1 + 0x2840);
        lVar8 = 0;
        lVar4 = DAT_14cbcbc40;
        lVar5 = DAT_14cbcbc48;
        lVar6 = DAT_14cbcbc38;
        do {
          lVar7 = lVar6;
          if (param_4 == '\x02') {
            lVar7 = lVar5;
          }
          plVar2 = *(longlong **)(lVar1 + lVar8);
          if (param_4 == '\x01') {
            lVar7 = lVar4;
          }
          if (plVar2[0x59] == lVar7) {
            (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
            lVar4 = DAT_14cbcbc40;
            lVar5 = DAT_14cbcbc48;
            lVar6 = DAT_14cbcbc38;
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar3 * 8 != lVar8);
      }
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_78 = 0;
      local_58 = &local_60;
      local_50 = &local_98;
      FUN_148d690fe(param_3,local_44);
      FUN_148be5e2c(&local_98);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5e6ea FUN_148d5e6ea body=306 status=ok
// SIG undefined FUN_148d5e6ea(void)

void FUN_148d5e6ea(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50 [2];
  undefined8 local_40;
  undefined1 local_38 [24];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    lVar2 = FUN_144a7cbb2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      cVar1 = FUN_1449ce97a(param_1);
      if (cVar1 != '\0') {
        lVar2 = FUN_144a2f878();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          cVar1 = FUN_140226bbe(param_1);
          if (cVar1 == '\0') {
            cVar1 = FUN_1456e2be6(param_2);
            if (cVar1 == '\0') {
              local_40 = 0;
            }
            else {
              FUN_1438a4f78(param_2,&local_40);
            }
            local_20 = *(undefined8 *)(param_2 + 0x10);
            FUN_1400021e4(&local_20,local_50);
            lVar2 = FUN_1456e2bea(param_1);
            if (lVar2 != 0) {
              local_58 = 0;
              FUN_145aa6c7a(lVar2,local_50,local_40,0);
            }
            if (local_50[0] != 0) {
              FUN_1400020a8();
            }
          }
          else {
            local_58 = 0;
            FUN_140b32deb(local_38,param_1,param_2,0);
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5e81e FUN_148d5e81e body=1177 status=ok
// SIG undefined FUN_148d5e81e(void)

void FUN_148d5e81e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined2 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(char *)(param_1 + 0x178) != '\x03') || (*(longlong *)(param_1 + 0x2c50) == 0))
  goto LAB_148d5e858;
  if (*(int *)(param_1 + 0x2858) != 0) {
    plVar1 = (longlong *)(param_1 + 0x2960);
    local_60 = (undefined8 *)0x0;
    FUN_14485c47a(&local_60,param_2);
    local_58 = local_60;
    iVar3 = FUN_148d683da(plVar1,(uint)((ulonglong)local_60 >> 0x20) ^ (uint)local_60);
    if (iVar3 != -1) {
      local_68 = (undefined8 *)0x0;
      FUN_14485c47a(&local_68,param_2);
      local_58 = local_68;
      iVar3 = FUN_148d683da(plVar1,(uint)((ulonglong)local_68 >> 0x20) ^ (uint)local_68);
      if (iVar3 == -1) {
        lVar7 = 0;
      }
      else {
        lVar7 = (longlong)iVar3 * 0x20 + *plVar1;
      }
      if (0 < *(int *)(lVar7 + 0x10)) {
        FUN_14053d8da(lVar7 + 8,1);
      }
      local_70 = 0;
      FUN_14485c47a(&local_70,param_2);
      FUN_148d68a5c(plVar1,local_70);
    }
  }
  if (*(int *)(param_1 + 0x2868) != 0) {
    plVar1 = (longlong *)(param_1 + 0x29b0);
    local_78 = (undefined8 *)0x0;
    FUN_14485c47a(&local_78,param_2);
    local_58 = local_78;
    iVar3 = FUN_148d683da(plVar1,(uint)((ulonglong)local_78 >> 0x20) ^ (uint)local_78);
    if (iVar3 != -1) {
      local_80 = (undefined8 *)0x0;
      FUN_14485c47a(&local_80,param_2);
      local_58 = local_80;
      iVar3 = FUN_148d683da(plVar1,(uint)((ulonglong)local_80 >> 0x20) ^ (uint)local_80);
      if (iVar3 == -1) {
        lVar7 = 0;
      }
      else {
        lVar7 = (longlong)iVar3 * 0x20 + *plVar1;
      }
      if (0 < *(int *)(lVar7 + 0x10)) {
        FUN_14053d8da(lVar7 + 8,1);
      }
      local_88 = 0;
      FUN_14485c47a(&local_88,param_2);
      FUN_148d68a5c(plVar1,local_88);
    }
  }
  uVar4 = FUN_1447210f0(param_1);
  local_58 = *(undefined8 **)(param_1 + 0x2c10);
  local_50 = *(undefined2 *)(param_1 + 0x2c18);
  local_48 = *(undefined8 *)(param_1 + 0x2c20);
  iVar3 = FUN_148d682b0(&local_58,param_2,uVar4);
  if ((longlong)*(int *)(param_1 + 0x2a18) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x2a10);
    lVar6 = (longlong)*(int *)(param_1 + 0x2a18) << 3;
LAB_148d5ea70:
    cVar2 = FUN_140e8a950(lVar7);
    if (cVar2 == '\0') goto code_r0x000148d5ea7f;
    if ((longlong)*(int *)(param_1 + 0x2a18) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x2a10);
      lVar6 = (longlong)*(int *)(param_1 + 0x2a18) << 3;
      do {
        cVar2 = FUN_144729dda(lVar7);
        if (cVar2 != '\0') {
          lVar5 = FUN_14479d2ce(lVar7);
          FUN_1447f69b6(lVar5 + ((ulonglong)(iVar3 == 2) << 5 | 0x56d8));
        }
        lVar7 = lVar7 + 8;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
    local_90 = 0;
    FUN_14485c47a(&local_90,param_2);
    local_58 = &local_90;
    FUN_14141ae68(param_1 + 0x2a10);
  }
LAB_148d5eb05:
  if (iVar3 == 0) {
    if ((*(byte *)(param_1 + 0x2c94) & 1) != 0) {
      if ((longlong)*(int *)(param_1 + 0x2a08) != 0) {
        lVar7 = 0;
        do {
          if (*(char *)(*(longlong *)(param_1 + 0x2a00) + lVar7) == '\0') goto LAB_148d5ebab;
          lVar7 = lVar7 + 1;
        } while (*(int *)(param_1 + 0x2a08) != lVar7);
      }
      local_98 = (undefined8 *)0x0;
      FUN_14485c47a(&local_98,param_2);
      local_58 = local_98;
      iVar3 = FUN_148d689a2(param_1 + 0x2870);
      if (iVar3 != -1) {
        FUN_148d5ecb8(param_1,param_2,param_1 + 0x2870,0);
      }
    }
LAB_148d5ebab:
    if ((*(byte *)(param_1 + 0x2c94) & 2) == 0) goto LAB_148d5e858;
    if ((longlong)*(int *)(param_1 + 0x2a08) != 0) {
      lVar7 = 0;
      do {
        if (*(char *)(*(longlong *)(param_1 + 0x2a00) + lVar7) == '\x01') goto LAB_148d5e858;
        lVar7 = lVar7 + 1;
      } while (*(int *)(param_1 + 0x2a08) != lVar7);
    }
    lVar7 = param_1 + 0x2910;
    local_a0 = (undefined8 *)0x0;
    FUN_14485c47a(&local_a0,param_2);
    local_58 = local_a0;
    iVar3 = FUN_148d689a2(lVar7,(uint)((ulonglong)local_a0 >> 0x20) ^ (uint)local_a0);
    if (iVar3 == -1) goto LAB_148d5e858;
    uVar4 = 1;
  }
  else {
    if (iVar3 != 2) goto LAB_148d5e858;
    lVar7 = param_1 + 0x28c0;
    local_a8 = (undefined8 *)0x0;
    FUN_14485c47a(&local_a8,param_2);
    local_58 = local_a8;
    iVar3 = FUN_148d689a2(lVar7);
    if ((iVar3 == -1) || ((*(byte *)(param_1 + 0x2c94) & 4) == 0)) goto LAB_148d5e858;
    if ((longlong)*(int *)(param_1 + 0x2a08) != 0) {
      lVar6 = 0;
      do {
        if (*(char *)(*(longlong *)(param_1 + 0x2a00) + lVar6) == '\x02') goto LAB_148d5e858;
        lVar6 = lVar6 + 1;
      } while (*(int *)(param_1 + 0x2a08) != lVar6);
    }
    uVar4 = 2;
  }
  FUN_148d5ecb8(param_1,param_2,lVar7,uVar4);
LAB_148d5e858:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000148d5ea7f:
  lVar7 = lVar7 + 8;
  lVar6 = lVar6 + -8;
  if (lVar6 == 0) goto LAB_148d5eb05;
  goto LAB_148d5ea70;
}



// FUNCTION 148d5ecb8 FUN_148d5ecb8 body=298 status=ok
// SIG undefined FUN_148d5ecb8(void)

void FUN_148d5ecb8(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    local_48 = 0;
    FUN_14485c47a(&local_48);
    local_40 = local_48;
    iVar3 = FUN_148d689a2(param_3,(uint)((ulonglong)local_48 >> 0x20) ^ (uint)local_48);
    if (iVar3 != -1) {
      iVar3 = *(int *)(param_1 + 0x2848);
      if ((longlong)iVar3 != 0) {
        lVar1 = *(longlong *)(param_1 + 0x2840);
        lVar8 = 0;
        lVar4 = DAT_14cbcbc40;
        lVar5 = DAT_14cbcbc48;
        lVar6 = DAT_14cbcbc38;
        do {
          lVar7 = lVar6;
          if (param_4 == '\x02') {
            lVar7 = lVar5;
          }
          plVar2 = *(longlong **)(lVar1 + lVar8);
          if (param_4 == '\x01') {
            lVar7 = lVar4;
          }
          if (plVar2[0x59] == lVar7) {
            (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
            lVar4 = DAT_14cbcbc40;
            lVar5 = DAT_14cbcbc48;
            lVar6 = DAT_14cbcbc38;
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar3 * 8 != lVar8);
      }
      local_50 = 0;
      FUN_14485c47a(&local_50,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5edfc FUN_148d5edfc body=94 status=ok
// SIG undefined FUN_148d5edfc(void)

void FUN_148d5edfc(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined8 *)(param_1 + 0x2b38);
  local_30 = 0;
  FUN_140cb5d65(local_20,*(undefined8 *)(param_1 + 0x2b40),param_2,param_1 + 0x2b50);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5ee5c FUN_148d5ee5c body=90 status=ok
// SIG undefined FUN_148d5ee5c(void)

void FUN_148d5ee5c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined8 *)(param_1 + 0x2b38);
  local_30 = 0;
  FUN_140cb5d65(local_20,*(undefined8 *)(param_1 + 0x2b40),param_2,param_3);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5eec0 FUN_148d5eec0 body=461 status=ok
// SIG undefined FUN_148d5eec0(void)

void FUN_148d5eec0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_198 [40];
  undefined4 local_170;
  undefined1 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined **local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((((param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)(param_1 + 0x2b38), lVar1 != 0)) &&
      (0.0 < *(float *)((longlong)param_2 + 0x564))) && ((longlong)*(int *)(lVar1 + 0x5290) != 0)) {
    lVar2 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar1 + 0x5288) + 8 + lVar2) != 0) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x5288) + lVar2) != 0)) {
        local_170 = 0;
        local_16c = 0;
        local_168 = 0;
        local_160 = 0x3002;
        local_158 = 0;
        local_120 = 0;
        local_118 = 0x200000000;
        local_110 = 0;
        uStack_108 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        local_f0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_e8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_e0 = DAT_14c8464f0;
        local_c8 = DAT_14c8464f0;
        local_b0 = DAT_14c8464f0;
        local_a8 = 0;
        local_a0 = 0x3006;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_68 = DAT_14c8464f0;
        local_78 = (undefined4)DAT_14c8464e0;
        uStack_74 = DAT_14c8464e0._4_4_;
        uStack_70 = (undefined4)DAT_14c8464e8;
        uStack_6c = DAT_14c8464e8._4_4_;
        local_60 = 0;
        local_5c = 0;
        local_d8 = local_f0;
        uStack_d0 = uStack_e8;
        local_c0 = local_f0;
        uStack_b8 = uStack_e8;
        FUN_1405c5fa2();
        local_50 = &DAT_14cb769e8;
        local_48 = 0;
        uStack_40 = 0;
        local_58 = &PTR_FUN_14b0394b0;
        local_38 = 0x3f800000;
        uVar3 = (**(code **)(*param_2 + 0x140))(param_2,0);
        FUN_14095f42a(&local_170,uVar3,param_2);
        FUN_1440b5102(*(longlong *)(param_1 + 0x2b38) + 0x5288,&local_170);
        FUN_141846ab8(&local_170);
        break;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)*(int *)(lVar1 + 0x5290) * 0x10 != lVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5f08e FUN_148d5f08e body=145 status=ok
// SIG undefined FUN_148d5f08e(void)

void FUN_148d5f08e(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x6680);
  iVar1 = *(int *)(param_1 + 0x6688);
  if ((longlong)iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = 0;
    do {
      (**(code **)(**(longlong **)(lVar3 + lVar4) + 0x20))(*(longlong **)(lVar3 + lVar4),param_1);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    uVar2 = *(undefined4 *)(param_1 + 0x6688);
    lVar3 = *(longlong *)(param_1 + 0x6680);
  }
  FUN_140ef6a7a(lVar3,uVar2);
  *(undefined4 *)(param_1 + 0x6688) = 0;
  if (*(int *)(param_1 + 0x668c) != 0) {
    FUN_1460651de(param_1 + 0x6680,0);
  }
  FUN_140cf7934(param_1,param_2);
  return;
}



// FUNCTION 148d5f120 FUN_148d5f120 body=152 status=ok
// SIG undefined FUN_148d5f120(void)

void FUN_148d5f120(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14587136a();
  local_30 = 0;
  local_38 = 0;
  local_40 = 1;
  FUN_1446f470e(&local_48,L"InventoryIdentity",1);
  uVar1 = FUN_145b8c670();
  FUN_145b8c670();
  uVar1 = FUN_140f1fabf(uVar1,local_48);
  FUN_140f1fa23(uVar1,param_2,&local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5f1ba FUN_148d5f1ba body=26 status=ok
// SIG undefined FUN_148d5f1ba(void)

void FUN_148d5f1ba(undefined8 param_1)

{
  FUN_14661ccb6();
  FUN_148d5f1d4(param_1);
  return;
}



// FUNCTION 148d5f1d4 FUN_148d5f1d4 body=114 status=ok
// SIG undefined FUN_148d5f1d4(void)

void FUN_148d5f1d4(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined2 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14492b4b4(*(undefined8 *)(param_1 + 0x1b0));
  if (lVar1 != 0) {
    local_28 = *(undefined8 *)(lVar1 + 0x20);
    local_20 = *(undefined2 *)(lVar1 + 0x28);
    local_18 = *(undefined8 *)(lVar1 + 0x30);
    FUN_140365ba6(param_1 + 0x898,&local_28,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5f248 FUN_148d5f248 body=104 status=ok
// SIG undefined FUN_148d5f248(void)

void FUN_148d5f248(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))();
    lVar3 = FUN_1465c5718();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
      goto LAB_148d5f281;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_148d5f281:
  *(longlong **)(param_1 + 0x8c28) = plVar4;
  FUN_14034db2c(param_1,param_2);
  return;
}



// FUNCTION 148d5f2b0 FUN_148d5f2b0 body=59 status=ok
// SIG undefined FUN_148d5f2b0(void)

void FUN_148d5f2b0(longlong param_1)

{
  FUN_1449670da();
  FUN_148d5f1d4(param_1);
  if (((*(byte *)(param_1 + 0x65) & 0x18) == 0x10) && (*(longlong *)(param_1 + 0x9ce0) != 0)) {
    FUN_148d5f2ec(param_1);
    return;
  }
  return;
}



// FUNCTION 148d5f2ec FUN_148d5f2ec body=1217 status=ok
// SIG undefined FUN_148d5f2ec(void)

void FUN_148d5f2ec(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_198 [32];
  uint local_178;
  float local_170;
  undefined4 local_168;
  undefined4 local_160;
  undefined1 local_158;
  longlong local_148;
  longlong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_f0;
  undefined1 local_e8 [40];
  undefined4 local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (((((*(byte *)(param_1 + 0x9dc8) & 1) != 0) || (*(longlong *)(param_1 + 0x9ce0) == 0)) ||
      (*(longlong *)(param_1 + 0x9cd8) == 0)) ||
     (*(char *)(*(longlong *)(param_1 + 0x9cd8) + 0x10c8) != '\x01')) goto LAB_148d5f69f;
  lVar9 = param_1 + 0x9ce0;
  *(byte *)(param_1 + 0x9dc8) = *(byte *)(param_1 + 0x9dc8) | 1;
  lVar8 = FUN_14045d028(param_1);
  if (lVar8 != 0) {
    local_118 = 0;
    uStack_110 = (longlong *)0x0;
    FUN_140d0ec1d(lVar9,&local_118);
    if (0 < (int)uStack_110) {
      FUN_140d0e9ce(lVar8,&local_118);
    }
    if (local_118 != 0) {
      FUN_1400020a8();
    }
  }
  local_148 = lVar9;
  FUN_140255853(lVar9,0,0,param_1 + 0x9db8);
  local_128 = 0;
  uStack_120 = 0;
  if ((longlong)*(int *)(param_1 + 0x9dc0) != 0) {
    plVar12 = *(longlong **)(param_1 + 0x9db8);
    plVar11 = plVar12 + (longlong)*(int *)(param_1 + 0x9dc0) * 2;
    local_140 = param_1 + 0x3ad8;
    do {
      plVar6 = (longlong *)*plVar12;
      plVar7 = (longlong *)plVar12[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar9 = FUN_14011c349();
      if (plVar6 == (longlong *)0x0) {
LAB_148d5f4c4:
        (**(code **)(*plVar6 + 0x30))(plVar6,param_1,3);
      }
      else {
        lVar8 = (**(code **)(*plVar6 + 8))(plVar6);
        lVar10 = FUN_140c3fbf2();
        if (((lVar10 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar10 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
            lVar10 + 0x30)) {
          lVar8 = (**(code **)(*plVar6 + 8))(plVar6);
          lVar10 = FUN_14661720a();
          if (((lVar10 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar10 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
              lVar10 + 0x30)) goto LAB_148d5f4c4;
          fVar15 = 1.0;
          if ((char)plVar6[0xb] == '\x01') {
            uVar13 = (uint)(float)(*(int *)((longlong)plVar6 + 0x5c) + -1);
            fVar15 = 1.0;
            if ((-1 < (int)uVar13) && (fVar15 = 1.0, (int)uVar13 < (int)plVar6[10])) {
              FUN_140c65c56(local_148,&local_118);
              fVar14 = (float)FUN_1407caec0(local_118,&DAT_14cbcbc90,0x3f000000);
              plVar2 = uStack_110;
              fVar15 = *(float *)(plVar6[9] + (ulonglong)uVar13 * 8);
              fVar4 = *(float *)(plVar6[9] + 4 + (ulonglong)uVar13 * 8);
              if (uStack_110 != (longlong *)0x0) {
                LOCK();
                plVar3 = uStack_110 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*uStack_110)(uStack_110);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar2 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar2 + 0x10))(plVar2);
                  }
                }
              }
              fVar15 = fVar14 * (fVar4 - fVar15) + fVar15;
            }
          }
          FUN_140db960a(plVar6 + 6,&local_118);
          local_138 = (undefined4)local_118;
          uStack_134 = local_118._4_4_;
          uStack_130 = (int)uStack_110;
          uStack_12c = uStack_110._4_4_;
          local_118 = 0;
          uStack_110 = (longlong *)0x0;
          local_160 = 0;
          local_168 = 0;
          local_178 = 0;
          local_158 = 0;
          local_170 = fVar15;
          FUN_141348940(local_140,&local_138,lVar9 + 0xe0,1);
          plVar6 = uStack_110;
          if (uStack_110 != (longlong *)0x0) {
            LOCK();
            plVar2 = uStack_110 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*uStack_110)(uStack_110);
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
        else {
          if ((char)plVar6[6] != '\x01') goto LAB_148d5f4c4;
          cVar5 = *(char *)(param_1 + 0x178);
          local_118 = local_118 & 0xffffffffffffff00;
          local_f0 = 0;
          FUN_1456bb102(&local_118,param_1);
          local_e8[0] = 0;
          local_c0 = 0;
          local_170 = (float)CONCAT31(local_170._1_3_,cVar5 == '\x03');
          local_178 = local_178 & 0xffffff00;
          (**(code **)(*plVar6 + 0x50))(plVar6,&local_128,param_1,&local_118);
          FUN_144a5ac3a(local_e8);
          FUN_144a5ac3a(&local_118);
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      plVar12 = plVar12 + 2;
    } while (plVar12 != plVar11);
  }
  if (0 < *(int *)(param_1 + 0x6190)) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x6188) + 0x20);
    if ((lVar9 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    else if (lVar9 == 0) goto LAB_148d5f682;
    FUN_148d5f7e6(param_1);
  }
LAB_148d5f682:
  FUN_140368c45(local_128,uStack_120 & 0xffffffff);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
LAB_148d5f69f:
  if ((local_b0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d5f7ae FUN_148d5f7ae body=55 status=ok
// SIG undefined FUN_148d5f7ae(void)

void FUN_148d5f7ae(longlong param_1)

{
  FUN_1407b25f0(param_1 + 0x10);
  if ((*(byte *)(param_1 + -0x9c6b) & 0x18) != 0x10) {
    return;
  }
  FUN_148d5f2ec(param_1 + -0x9cd0);
  return;
}



// FUNCTION 148d5f7e6 FUN_148d5f7e6 body=152 status=ok
// SIG undefined FUN_148d5f7e6(void)

void FUN_148d5f7e6(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x9dc8) & 2) == 0) {
    *(byte *)(param_1 + 0x9dc8) = *(byte *)(param_1 + 0x9dc8) | 2;
    if ((longlong)*(int *)(param_1 + 0x9dc0) != 0) {
      puVar5 = *(undefined8 **)(param_1 + 0x9db8);
      puVar4 = puVar5 + (longlong)*(int *)(param_1 + 0x9dc0) * 2;
      do {
        plVar2 = (longlong *)*puVar5;
        plVar3 = (longlong *)puVar5[1];
        if (plVar3 == (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x30))(plVar2,param_1,0x10000);
        }
        else {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          (**(code **)(*plVar2 + 0x30))(plVar2,param_1,0x10000);
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
        puVar5 = puVar5 + 2;
      } while (puVar5 != puVar4);
    }
  }
  return;
}



// FUNCTION 148d5f87e FUN_148d5f87e body=110 status=ok
// SIG undefined FUN_148d5f87e(void)

void FUN_148d5f87e(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  local_28 = (undefined4)DAT_14c8464e0;
  uStack_24 = DAT_14c8464e0._4_4_;
  uStack_20 = (undefined4)DAT_14c8464e8;
  uStack_1c = DAT_14c8464e8._4_4_;
  local_18 = DAT_14c8464f0;
  local_10 = 0;
  local_38 = 0;
  local_48 = 0;
  FUN_140ecfed2(param_1 + 0x7c78,CONCAT71((int7)((ulonglong)DAT_14c8464f0 >> 8),1));
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5f8ee FUN_148d5f8ee body=62 status=ok
// SIG undefined FUN_148d5f8ee(void)

void FUN_148d5f8ee(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_140ee863e();
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x6398) & 3) == 1)) {
    FUN_148d5f7e6(param_1 + -0x3a30);
    return;
  }
  return;
}



// FUNCTION 148d5f932 FUN_148d5f932 body=100 status=ok
// SIG undefined FUN_148d5f932(void)

void FUN_148d5f932(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1d38);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*(longlong *)(param_1 + 0x1d08) + 0xa0))(param_1 + 0x1d08,0);
    FUN_140cf6364(lVar1,uVar2,0,0x3f800000);
  }
  if (*(longlong **)(param_1 + 0x1d40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1d40) + 0xa0))();
  }
  FUN_140c7c538(param_1);
  return;
}



// FUNCTION 148d5f996 FUN_148d5f996 body=125 status=ok
// SIG undefined FUN_148d5f996(void)

void FUN_148d5f996(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong **)(param_1 + 0x1d40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1d40) + 0xa8))();
    FUN_140521208(*(undefined8 *)(param_1 + 0x1d40));
    *(undefined8 *)(param_1 + 0x1d40) = 0;
    plVar3 = *(longlong **)(param_1 + 0x1d48);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1d48) = 0;
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
  FUN_140c2cad6(param_1,param_2);
  return;
}



// FUNCTION 148d5fa14 FUN_148d5fa14 body=321 status=ok
// SIG undefined FUN_148d5fa14(void)

void FUN_148d5fa14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457c7dba();
  local_40 = 0;
  local_48 = 0;
  local_50 = 1;
  FUN_1446f470e(&local_58,L"FireRate",1);
  uVar1 = FUN_145b98922();
  FUN_145b98922();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  FUN_140f1fa23(uVar1,param_2,&local_50);
  local_40 = 0;
  local_48 = 0;
  local_50 = 1;
  FUN_1446f470e(&local_58,L"MaxLoadedAmmo",1);
  uVar1 = FUN_145b98922();
  FUN_145b98922();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  FUN_140f1fa23(uVar1,param_2,&local_50);
  local_40 = 0;
  local_48 = 0;
  local_50 = 1;
  FUN_1446f470e(&local_58,L"ShotCost",1);
  uVar1 = FUN_145b98922();
  FUN_145b98922();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  FUN_140f1fa23(uVar1,param_2,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5fb56 FUN_148d5fb56 body=647 status=ok
// SIG undefined FUN_148d5fb56(void)

void FUN_148d5fb56(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140b539d6();
  iVar2 = *(int *)(param_1 + 0x1cc0);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1cb8);
    lVar9 = 0;
    do {
      lVar5 = (**(code **)(**(longlong **)(lVar3 + lVar9) + 8))();
      lVar6 = FUN_146576ee4();
      if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        uVar7 = *(undefined8 *)(lVar3 + lVar9);
        plVar4 = *(longlong **)(lVar3 + 8 + lVar9);
        if (plVar4 == (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x1d28) = uVar7;
          plVar8 = *(longlong **)(param_1 + 0x1d30);
          if (plVar8 == (longlong *)0x0) break;
          *(undefined8 *)(param_1 + 0x1d30) = 0;
LAB_148d5fd93:
          LOCK();
          plVar4 = plVar8 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 != 0) break;
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar4 = plVar8;
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          *(undefined8 *)(param_1 + 0x1d28) = uVar7;
          plVar8 = *(longlong **)(param_1 + 0x1d30);
          if (plVar4 != plVar8) {
            *(longlong **)(param_1 + 0x1d30) = plVar4;
            if (plVar8 != (longlong *)0x0) goto LAB_148d5fd93;
            break;
          }
          LOCK();
          plVar8 = plVar4 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 != 0) break;
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
        }
        if (iVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
        break;
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar9);
  }
  if (*(longlong *)(param_1 + 0x1bd0) != 0) {
    uVar7 = FUN_140231a4a();
    FUN_1402315da(uVar7,&local_40);
    if (((local_40 != 0) && (*(longlong *)(local_40 + 0x110) != 0)) &&
       (*(int *)(local_40 + 0x118) - 1U < 0xfffffffe)) {
      uVar7 = FUN_1447210f0(param_1);
      local_68 = *(undefined8 *)(local_40 + 0x110);
      local_60 = *(undefined4 *)(local_40 + 0x118);
      local_58 = 0;
      local_78 = 1;
      FUN_14103ce14(&local_50,&local_68,param_1 + 0x3d8,uVar7);
      plVar4 = local_48;
      if ((undefined8 *)(param_1 + 0x1d40) != &local_50) {
        *(undefined8 *)(param_1 + 0x1d40) = local_50;
        local_50 = 0;
        plVar8 = *(longlong **)(param_1 + 0x1d48);
        if (local_48 != plVar8) {
          local_48 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x1d48) = plVar4;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar8 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
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
      }
      plVar4 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_48 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_48)(local_48);
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
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_38 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d5fdde FUN_148d5fdde body=143 status=ok
// SIG undefined FUN_148d5fdde(void)

bool FUN_148d5fdde(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  cVar2 = FUN_140932be6();
  bVar5 = true;
  if (cVar2 == '\0') {
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar1 + 8))(plVar1);
      lVar4 = FUN_146576ee4();
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        return (bool)(*(byte *)(plVar1 + 6) & 1);
      }
    }
    lVar3 = (**(code **)(*(longlong *)*param_2 + 8))();
    lVar4 = FUN_1465733c6();
    if ((lVar4 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) {
      bVar5 = false;
    }
    else {
      bVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30;
    }
  }
  return bVar5;
}



// FUNCTION 148d5fe6e FUN_148d5fe6e body=73 status=ok
// SIG undefined FUN_148d5fe6e(void)

void FUN_148d5fe6e(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x1d38) == 0) {
    uVar1 = FUN_14001cc68(0x180,0x10);
    FUN_140d50c94(uVar1,param_1 + 0x1d08);
    *(undefined8 *)(param_1 + 0x1d38) = uVar1;
  }
  FUN_14417e98c(param_1);
  return;
}



// FUNCTION 148d5feb8 FUN_148d5feb8 body=8 status=ok
// SIG undefined FUN_148d5feb8(void)

longlong FUN_148d5feb8(longlong param_1)

{
  return param_1 + 0x1d28;
}



// FUNCTION 148d5fef8 FUN_148d5fef8 body=68 status=ok
// SIG undefined FUN_148d5fef8(void)

void FUN_148d5fef8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1448b5cf4(*(longlong *)(param_1 + 0x30),param_3);
  }
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000148d5ff31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 148d5ff7e FUN_148d5ff7e body=74 status=ok
// SIG undefined FUN_148d5ff7e(void)

void FUN_148d5ff7e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    iVar1 = *(int *)(param_2 + 0x28);
    *(uint *)(param_2 + 0x28) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x2c) < iVar1 + 1U) {
      FUN_1488ca64c(param_2,iVar1);
    }
    lVar2 = *(longlong *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar2 = param_2;
    }
    *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = *(undefined8 *)(param_1 + 0x30);
  }
  return;
}



// FUNCTION 148d6002e FUN_148d6002e body=74 status=ok
// SIG undefined FUN_148d6002e(void)

undefined8 FUN_148d6002e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + -0x3c0);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6007a FUN_148d6007a body=60 status=ok
// SIG undefined FUN_148d6007a(void)

longlong FUN_148d6007a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x1b60);
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148d600b6 FUN_148d600b6 body=204 status=ok
// SIG undefined FUN_148d600b6(void)

undefined4 FUN_148d600b6(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = FUN_1447210f0();
  FUN_148a19d84(&local_30,uVar6);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_28;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_30 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_148a24726(local_30,*(undefined8 *)(param_1 + 0x1b0),
                              *(undefined1 *)(param_1 + 0x1d9d),param_2);
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
      goto LAB_148d6015e;
    }
  }
  uVar5 = 0;
LAB_148d6015e:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 148d60184 FUN_148d60184 body=112 status=ok
// SIG undefined FUN_148d60184(void)

void FUN_148d60184(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0x55];
  if (lVar1 != 0) {
    if ((*(byte *)(param_1 + 0x1b) & 2) != 0) {
      if ((char)param_1[-0xea] == '\x03') {
        FUN_14417fe0a(param_1 + -0x119);
      }
      (**(code **)(*param_1 + 0x80))(param_1);
      lVar1 = param_1[0x55];
    }
    FUN_1447cd2ec(lVar1 + 0x6028,0);
    FUN_1447f69b6(param_1[0x55] + 0x6048);
    return;
  }
  return;
}



// FUNCTION 148d601f4 FUN_148d601f4 body=17 status=ok
// SIG undefined FUN_148d601f4(void)

void FUN_148d601f4(longlong param_1,undefined4 *param_2,float *param_3,undefined4 *param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 ****ppppuVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [40];
  undefined4 uStack_68;
  undefined8 ***apppuStack_60 [3];
  ushort uStack_48;
  byte bStack_40;
  ulonglong uStack_38;
  
  lVar3 = *(longlong *)(param_1 + 0xbe0);
  if (lVar3 == 0) {
    return;
  }
  uStack_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(lVar3 + 0x2c50) != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x1c8);
    if (lVar1 == 0) {
      puVar6 = &DAT_14c8464e0;
      uVar10 = DAT_14c8464f0;
    }
    else {
      uVar10 = *(undefined8 *)(lVar1 + 0x270);
      puVar6 = (undefined8 *)(lVar1 + 0x260);
    }
    uVar9 = *(undefined4 *)((longlong)puVar6 + 4);
    uVar4 = *(undefined4 *)(puVar6 + 1);
    uVar5 = *(undefined4 *)((longlong)puVar6 + 0xc);
    *param_2 = *(undefined4 *)puVar6;
    param_2[1] = uVar9;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    *(undefined8 *)(param_2 + 4) = uVar10;
    lVar1 = *(longlong *)(lVar3 + 0x2c50);
    auStack_90[0] = 0;
    uStack_68 = 0;
    FUN_1456bb102(auStack_90,lVar3);
    FUN_1448729ea(lVar1 + 0x478,apppuStack_60,auStack_90);
    fVar8 = (float)FUN_144a7ecd0(apppuStack_60);
    *param_3 = fVar8 + *(float *)(lVar3 + 0x2c70);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bStack_40 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar7 = apppuStack_60;
      if (0x18 < uStack_48) {
        ppppuVar7 = (undefined8 ****)apppuStack_60[0];
      }
      (*pcVar2)(ppppuVar7);
    }
    if (0x18 < uStack_48) {
      FUN_1400020a8(apppuStack_60[0]);
    }
    FUN_144a5ac3a(auStack_90);
    lVar1 = *(longlong *)(lVar3 + 0x2c50);
    auStack_90[0] = 0;
    uStack_68 = 0;
    FUN_1456bb102(auStack_90,lVar3);
    FUN_1448729ea(lVar1 + 0x4c8,apppuStack_60,auStack_90);
    uVar9 = FUN_144a7ecd0(apppuStack_60);
    *param_4 = uVar9;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bStack_40 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar7 = apppuStack_60;
      if (0x18 < uStack_48) {
        ppppuVar7 = (undefined8 ****)apppuStack_60[0];
      }
      (*pcVar2)(ppppuVar7);
    }
    if (0x18 < uStack_48) {
      FUN_1400020a8(apppuStack_60[0]);
    }
    FUN_144a5ac3a(auStack_90);
  }
  if ((uStack_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d60206 FUN_148d60206 body=8 status=ok
// SIG undefined FUN_148d60206(void)

void FUN_148d60206(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xbe8) = param_2;
  return;
}



// FUNCTION 148d6020e FUN_148d6020e body=101 status=ok
// SIG undefined FUN_148d6020e(void)

void FUN_148d6020e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30);
  local_28 = param_3;
  FUN_14113f0c0(&local_30);
  FUN_14053c012(param_1,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d60274 FUN_148d60274 body=182 status=ok
// SIG undefined FUN_148d60274(void)

undefined8 * FUN_148d60274(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbccb18) {
    FUN_144b3d300(&DAT_14cbccb18);
    if (DAT_14cbccb18 == -1) {
      builtin_wcsncpy(local_38 + 8,L"Terminal",9);
      builtin_wcsncpy(local_38,L"Register",8);
      FUN_1446f470e(&DAT_14cbccb10,local_38,1);
      _Init_thread_footer(&DAT_14cbccb18);
    }
  }
  *param_1 = DAT_14cbccb10;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6032c FUN_148d6032c body=124 status=ok
// SIG undefined FUN_148d6032c(void)

void FUN_148d6032c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1458bd4bc();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      *(longlong *)(param_1 + 0xbe0) = param_2;
    }
  }
  if ((*(longlong *)(param_1 + 0xb70) != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    FUN_1447f69b6(*(longlong *)(param_1 + 0xb70) + 0x5758);
    return;
  }
  return;
}



// FUNCTION 148d603b0 FUN_148d603b0 body=140 status=ok
// SIG undefined FUN_148d603b0(void)

void FUN_148d603b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1458ee714();
  FUN_1446f470e(&local_38,L"NumActiveTurrets",1);
  uVar1 = FUN_145a8ecc8();
  FUN_145a8ecc8();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d60444 FUN_148d60444 body=251 status=ok
// SIG undefined FUN_148d60444(void)

void FUN_148d60444(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  
  lVar5 = *param_2;
  uVar8 = FUN_1465ab92a();
  cVar7 = FUN_1448093f4(lVar5,uVar8);
  if (cVar7 != '\0') {
    lVar5 = *param_2;
    plVar6 = (longlong *)param_2[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    iVar4 = *(int *)(param_1 + 0xbfc);
    uVar8 = FUN_148cba243();
    if (*(longlong *)(lVar5 + 0x200) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_1403f69f4(*(longlong *)(lVar5 + 0x200),uVar8,1);
    }
    FUN_1407cace8(lVar5,uVar8,(float)iVar4,1);
    uVar3 = *(undefined4 *)(param_1 + 0xc00);
    uVar8 = FUN_148cba243();
    if (*(longlong *)(lVar5 + 0x200) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_1403f69f4(*(longlong *)(lVar5 + 0x200),uVar8,2);
    }
    FUN_1407cace8(lVar5,uVar8,uVar3,1);
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
                    /* WARNING: Could not recover jumptable at 0x000148d60523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x10))(plVar6);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148d60540 FUN_148d60540 body=215 status=ok
// SIG undefined FUN_148d60540(void)

void FUN_148d60540(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0xbe8) != 0) {
    uVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xb70) + 0x868) + 0x30))
                      (*(longlong *)(param_1 + 0xb70) + 0x868);
    lVar4 = FUN_1408a1fe2(uVar3);
    if (lVar4 != 0) {
      lVar5 = FUN_14492b4b4(*(undefined8 *)(param_1 + 0xb70));
      if ((lVar5 != 0) && (iVar2 = FUN_14486116a(lVar5,lVar4), iVar2 == 0)) {
        return;
      }
      iVar2 = *(int *)(param_1 + 0xbe8);
      if ((longlong)iVar2 != 0) {
        lVar5 = *(longlong *)(param_1 + 0xbe0);
        lVar7 = 0;
        do {
          lVar1 = *(longlong *)(lVar5 + lVar7);
          if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x65) & 2) == 0)) &&
             ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
            uVar3 = FUN_144a78ab8();
            plVar6 = (longlong *)FUN_144718840(lVar1,uVar3);
            if (plVar6 != (longlong *)0x0) {
              uVar3 = (**(code **)(*plVar6 + 0x30))(plVar6);
              FUN_1458c07ba(uVar3,lVar4);
            }
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar2 * 8 != lVar7);
      }
    }
  }
  return;
}



// FUNCTION 148d60618 FUN_148d60618 body=217 status=ok
// SIG undefined FUN_148d60618(void)

void FUN_148d60618(longlong param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    local_30 = (void *)0x0;
    local_28 = *(int *)(param_1 + 0xbe8);
    lVar4 = (longlong)local_28;
    pvVar1 = *(void **)(param_1 + 0xbe0);
    if (lVar4 != 0) {
      FUN_1457242e8(&local_30,local_28,0);
      memcpy(local_30,pvVar1,lVar4 << 3);
      pvVar1 = local_30;
      lVar4 = (longlong)local_28;
      if (lVar4 != 0) {
        lVar3 = 0;
        do {
          lVar2 = *(longlong *)((longlong)pvVar1 + lVar3);
          if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0x65) & 2) == 0)) &&
             ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
            FUN_140aeefbc(lVar2,0,1);
          }
          lVar3 = lVar3 + 8;
        } while (lVar4 * 8 != lVar3);
      }
      if (local_30 != (void *)0x0) {
        FUN_1400020a8(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d606f2 FUN_148d606f2 body=121 status=ok
// SIG undefined FUN_148d606f2(void)

void FUN_148d606f2(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0x55];
  if (lVar1 != 0) {
    if ((*(byte *)(param_1 + 0x1b) & 2) != 0) {
      if ((char)param_1[-0xea] == '\x03') {
        FUN_148d6076c(param_1 + -0x119);
      }
      (**(code **)(*param_1 + 0x80))(param_1);
      *(undefined1 *)(param_1 + 0x69) = 0;
      lVar1 = param_1[0x55];
    }
    FUN_1447cd2ec(lVar1 + 0x6028,0);
    FUN_1447f69b6(param_1[0x55] + 0x6048);
    return;
  }
  return;
}



// FUNCTION 148d6076c FUN_148d6076c body=2644 status=ok
// SIG undefined FUN_148d6076c(void)

void FUN_148d6076c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined4 *puVar17;
  longlong lVar18;
  char cVar19;
  undefined8 *puVar20;
  undefined8 **ppuVar21;
  double dVar22;
  undefined4 unaff_XMM6_Da;
  undefined4 uVar23;
  undefined1 auStack_348 [32];
  undefined4 local_328;
  double *local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_300;
  longlong *local_2f8;
  double local_2f0;
  longlong *plStack_2e8;
  double local_2e0;
  undefined4 local_2d8;
  undefined8 *local_2d0;
  float local_2c8;
  double local_288;
  double dStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 local_268 [16];
  double local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  longlong local_228;
  undefined8 uStack_220;
  code *local_218;
  undefined8 local_208;
  undefined **local_1f8;
  double local_1f0;
  code *local_1d8 [2];
  undefined8 *local_1c8;
  double local_198;
  longlong *plStack_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  longlong *plStack_140;
  double local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  ulonglong local_118;
  longlong *plStack_110;
  undefined8 uStack_108;
  ulonglong uStack_100;
  undefined1 uStack_f8;
  undefined2 uStack_f7;
  undefined1 uStack_f5;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong *plStack_d8;
  undefined8 local_d0;
  longlong local_c8 [5];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  if ((((*(longlong *)(param_1 + 0xb70) == 0) || (lVar12 = FUN_1447210f0(), lVar12 == 0)) ||
      (lVar12 = *(longlong *)(param_1 + 0xc08), lVar12 == 0)) ||
     ((*(longlong *)(lVar12 + 0x38) == 0 || (0xfffffffd < *(int *)(lVar12 + 0x40) - 1U))))
  goto LAB_148d607fd;
  local_228 = 0;
  uStack_220 = 0;
  local_288 = 0.0;
  dStack_280 = 0.0;
  local_278 = 0;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_26c = 0x3ff00000;
  local_268 = ZEXT816(0);
  local_258 = 0.0;
  uStack_250 = 0;
  local_248 = 0x3ff0000000000000;
  uStack_240 = 0x3ff0000000000000;
  local_238 = 0x3ff0000000000000;
  uStack_230 = 0;
  local_128 = CONCAT31(local_128._1_3_,1);
  uStack_124 = (undefined4)*(undefined8 *)(param_1 + 0x928);
  uStack_120 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x928) >> 0x20);
  local_118 = local_118 & 0xffffffffffff0000;
  plStack_110 = (longlong *)DAT_14c8464f8;
  uStack_108 = DAT_14c846500;
  uStack_100 = DAT_14c846508;
  uStack_f8 = 0;
  uStack_f7 = 0;
  uStack_f5 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  local_e8 = local_e8 & 0xffffffff00000000;
  local_e0 = DAT_14c8464e0;
  plStack_d8 = DAT_14c8464e8;
  local_d0 = DAT_14c8464f0;
  local_320 = &local_198;
  local_328 = 0xf;
  FUN_14894017a(&local_288,*(undefined8 *)(param_1 + 0xb70));
  lVar12 = *(longlong *)(param_1 + 0xc08);
  dVar3 = *(double *)(lVar12 + 0x50);
  dVar22 = *(double *)(lVar12 + 0x58);
  dVar4 = *(double *)(lVar12 + 0x60);
  if ((((dVar3 != 0.0) || ((NAN(dVar3) || (dVar22 != 0.0)))) || (NAN(dVar22))) ||
     ((dVar4 != 0.0 || (NAN(dVar4))))) {
    dVar9 = (double)CONCAT44(uStack_274,local_278);
    dVar6 = local_288 * dVar22 - dVar3 * dStack_280;
    dVar7 = dVar9 * dVar3 - dVar4 * local_288;
    dVar8 = dStack_280 * dVar4 - dVar22 * dVar9;
    dVar6 = dVar6 + dVar6;
    dVar7 = dVar7 + dVar7;
    dVar8 = dVar8 + dVar8;
    dVar10 = (double)CONCAT44(uStack_26c,uStack_270);
    unaff_XMM6_Da = SUB84(dVar6 * local_288,0);
    local_258 = (local_288 * dVar7 - dVar8 * dStack_280) + dVar10 * dVar6 + dVar4 + local_258;
    dVar22 = (dVar9 * dVar8 - dVar6 * local_288) + dVar10 * dVar7 + dVar22 + (double)local_268._8_8_
    ;
    local_268._8_4_ = SUB84(dVar22,0);
    local_268._0_8_ =
         (dStack_280 * dVar6 - dVar7 * dVar9) + dVar10 * dVar8 + dVar3 + (double)local_268._0_8_;
    local_268._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    uStack_250 = 0;
  }
  uVar13 = FUN_1447210f0(param_1);
  local_198 = *(double *)(*(longlong *)(param_1 + 0xc08) + 0x38);
  FUN_1446dcdd4(&local_128);
  lVar12 = FUN_140a4bd48(&local_128);
  if (plStack_110 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (lVar12 == 0) {
    local_2f0 = 0.0;
    FUN_14485c47a(&local_2f0,param_1);
    local_148 = *(double *)(*(longlong *)(param_1 + 0xc08) + 0x38);
    FUN_1411374ca(&local_128,*(undefined8 *)(param_1 + 0xb70),&local_148,&local_288);
    FUN_140faf1c8(&local_128,*(undefined8 *)(param_1 + 0xb70));
    FUN_140faf27a(&local_128,*(undefined8 *)(param_1 + 0xb70));
    local_208 = 0;
    local_1f8 = &PTR_LAB_14b9783c0;
    local_1f0 = local_2f0;
    local_218 = FUN_144189038;
    FUN_140faf186(&local_128);
    local_2d0 = (undefined8 *)0x0;
    local_2c8 = 0.0;
    FUN_1446efa72(&local_2d0,0,3,0x10);
    puVar20 = local_2d0;
    local_2c8 = 4.2039e-45;
    *local_2d0 = &PTR_LAB_14a3a3510;
    LOCK();
    UNLOCK();
    lVar16 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar16 == 0) {
      LOCK();
      UNLOCK();
      lVar16 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    local_2d0[2] = lVar16;
    *local_2d0 = &PTR_FUN_14b9783e0;
    local_2d0[3] = 0;
    FUN_14485c47a(local_2d0 + 3,param_1);
    puVar20[4] = param_1;
    FUN_140244c74(CONCAT44(uStack_11c,uStack_120) + 0x120,&local_2d0);
    FUN_140faf12e(&local_128,&local_198);
    FUN_1449db362(&local_2d0);
    FUN_14119d0c2(&local_128);
    plVar15 = plStack_190;
    if (plStack_190 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_190 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_190)(plStack_190);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) goto LAB_148d61130;
        lVar12 = *plVar15;
        goto LAB_148d6112d;
      }
    }
  }
  else {
    uStack_108 = 0;
    uStack_100 = 0;
    local_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_f8 = 0;
    uStack_f7 = 0x601;
    uStack_f5 = 0;
    uStack_f4 = 8;
    local_e8 = 0;
    plStack_d8 = (longlong *)0x0;
    local_118 = *(ulonglong *)(param_1 + 0xb70);
    puVar17 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar12 + 8) != (undefined4 *)0x0) {
      puVar17 = *(undefined4 **)(lVar12 + 8);
    }
    plStack_110 = (longlong *)local_118;
    FUN_1447325ac(puVar17,&local_128,1);
    uStack_f5 = 3;
    uStack_f8 = 1;
    if (((((*(longlong *)(param_1 + 0xa40) != 0) || (*(double *)(param_1 + 0xa50) != 0.0)) ||
         (NAN(*(double *)(param_1 + 0xa50)))) ||
        ((*(double *)(param_1 + 0xa58) != 0.0 || (NAN(*(double *)(param_1 + 0xa58)))))) ||
       ((*(double *)(param_1 + 0xa60) != 0.0 || (NAN(*(double *)(param_1 + 0xa60)))))) {
      puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0xc08) + 0x68);
      ppuVar21 = &local_2d0;
      for (lVar16 = 9; lVar16 != 0; lVar16 = lVar16 + -1) {
        *ppuVar21 = (undefined8 *)*puVar20;
        puVar20 = puVar20 + 1;
        ppuVar21 = ppuVar21 + 1;
      }
      unaff_XMM6_Da = 0;
      if (local_2c8 <= 0.0) {
        local_2c8 = (float)FUN_140b536be(lVar12);
      }
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      uStack_160 = 0;
      if (0.0 < *(float *)(lVar12 + 0xe0)) {
        unaff_XMM6_Da = FUN_144a7c670(uVar13);
      }
      uStack_150 = CONCAT44(uStack_150._4_4_,unaff_XMM6_Da);
      local_198 = (double)local_268._0_8_;
      plStack_190 = (longlong *)local_268._8_8_;
      local_188 = local_258;
      local_180 = *(double *)(param_1 + 0xa50);
      local_178 = *(double *)(param_1 + 0xa58);
      local_170 = *(double *)(param_1 + 0xa60);
      lVar16 = *(longlong *)(param_1 + 0xa48);
      if (lVar16 != 0) {
        local_180 = local_180 + *(double *)(lVar16 + 0x260);
        local_178 = local_178 + *(double *)(lVar16 + 0x268);
        local_170 = local_170 + *(double *)(lVar16 + 0x270);
      }
      FUN_14125d694(&local_2d0,&local_2f0);
      if (((ABS(local_2f0) <= 9.999999747378752e-05) &&
          (ABS((double)plStack_2e8) <= 9.999999747378752e-05)) &&
         (ABS(local_2e0) <= 9.999999747378752e-05)) goto LAB_148d60e50;
      local_138 = local_2e0;
      local_148 = local_2f0;
      plStack_140 = plStack_2e8;
      cVar19 = '\x01';
      unaff_XMM6_Da = local_2d8;
    }
    else {
LAB_148d60e50:
      cVar19 = '\0';
    }
    uVar23 = *(undefined4 *)(param_1 + 0xc00);
    lVar16 = lVar12 + 0x90;
    lVar14 = FUN_14479d2ce(lVar16);
    if (lVar14 == 0) {
      if (*(longlong *)(lVar12 + 0x98) != 0) {
        lVar14 = FUN_140007850();
        cVar11 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar14 == 0) || (cVar11 == '\0')) {
          FUN_14485c47a(lVar16,lVar14);
          if (lVar14 == 0) goto LAB_148d60f3c;
        }
        else {
          uVar5 = *(uint *)(lVar14 + 0xc);
          if ((int)uVar5 < DAT_14c9647dc) {
            lVar18 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
          }
          else {
            lVar18 = 0;
          }
          if ((*(uint *)(lVar18 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(lVar16,lVar14);
          }
        }
        if ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0) goto LAB_148d60f05;
      }
LAB_148d60f3c:
      lVar18 = 0;
    }
    else {
LAB_148d60f05:
      lVar16 = FUN_144a797b2();
      if ((((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(lVar16 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar16 + 0x38) * 8) != lVar16 + 0x30)) ||
          (lVar16 = FUN_140d12354(), lVar16 == 0)) ||
         (*(int *)(lVar14 + 0x38) < *(int *)(lVar16 + 0x38))) goto LAB_148d60f3c;
      lVar18 = 0;
      if (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) ==
          lVar16 + 0x30) {
        lVar18 = lVar14;
      }
    }
    plVar15 = (longlong *)FUN_141037e38(uVar13,lVar18,&local_288,&local_128);
    if (plVar15 != (longlong *)0x0) {
      lVar16 = FUN_140f1f93e();
      if ((*(int *)(plVar15[2] + 0x38) < *(int *)(lVar16 + 0x38)) ||
         (*(longlong *)(*(longlong *)(plVar15[2] + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) !=
          lVar16 + 0x30)) {
        cVar11 = '\0';
        uVar23 = 0;
      }
      else {
        *(int *)(param_1 + 0xc18) = *(int *)(param_1 + 0xc18) + 1;
        FUN_148d611ca(&local_2f8);
        local_198 = 0.0;
        FUN_14485c47a(&local_198,param_1);
        plStack_190 = local_2f8;
        FUN_14113f0c0(&local_198);
        FUN_14053c012(plVar15 + 0x365,&local_198);
        (**(code **)(*plVar15 + 0x6e8))(plVar15,param_1 + 0x3b0);
        cVar11 = cVar19;
      }
      FUN_148d6146a(&local_300);
      FUN_148d613e0((longlong)plVar15 + 0x20e,param_1,local_300);
      local_2d0 = (undefined8 *)0x0;
      FUN_14485c47a(&local_2d0,param_1);
      puVar20 = local_2d0;
      local_318 = 0;
      uStack_310 = 0;
      if (cVar19 != '\0') {
        local_188 = local_138;
        local_198 = local_148;
        plStack_190 = plStack_140;
      }
      local_1d8[0] = (code *)0x0;
      local_1c8 = (undefined8 *)FUN_14001cc68(0x50,8);
      *local_1c8 = &PTR_FUN_14b9783a0;
      local_1c8[1] = param_1;
      local_1c8[2] = puVar20;
      local_1c8[3] = plVar15;
      *(char *)(local_1c8 + 7) = cVar19;
      if (cVar19 != '\0') {
        local_1c8[6] = local_188;
        local_1c8[4] = local_198;
        local_1c8[5] = plStack_190;
      }
      *(char *)((longlong)local_1c8 + 0x44) = cVar11;
      if (cVar11 != '\0') {
        *(undefined4 *)(local_1c8 + 8) = unaff_XMM6_Da;
      }
      *(undefined4 *)(local_1c8 + 9) = uVar23;
      if (local_1c8 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_1d8[0] = FUN_144188e3a;
      }
      FUN_1410672ce(plVar15,lVar12,local_1d8,&local_318);
    }
    if (local_e8 != 0) {
      plVar15 = plStack_d8;
      if (plStack_d8 == (longlong *)0x0) {
        plVar15 = local_c8;
      }
      lVar12 = *plVar15;
LAB_148d6112d:
      (**(code **)(lVar12 + 0x10))(plVar15);
    }
  }
LAB_148d61130:
  local_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  local_118 = DAT_14c8464e0;
  plStack_110 = DAT_14c8464e8;
  uStack_108 = DAT_14c8464f0;
  uStack_100 = DAT_14c8464f8;
  uStack_f8 = (undefined1)DAT_14c846500;
  uStack_f7 = (undefined2)((ulonglong)DAT_14c846500 >> 8);
  uStack_f5 = (undefined1)((ulonglong)DAT_14c846500 >> 0x18);
  uStack_f4 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
  uStack_f0 = (undefined4)DAT_14c846508;
  uStack_ec = (undefined4)((ulonglong)DAT_14c846508 >> 0x20);
  FUN_148bab1be(param_1 + 0xa40);
  if (local_228 != 0) {
    FUN_1400020a8();
  }
LAB_148d607fd:
  if ((local_a0 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d611c2 FUN_148d611c2 body=8 status=ok
// SIG undefined FUN_148d611c2(void)

void FUN_148d611c2(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xc08) = param_2;
  return;
}



// FUNCTION 148d611ca FUN_148d611ca body=176 status=ok
// SIG undefined FUN_148d611ca(void)

undefined8 * FUN_148d611ca(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbccb28) {
    FUN_144b3d300(&DAT_14cbccb28);
    if (DAT_14cbccb28 == -1) {
      builtin_wcsncpy(local_38,L"RegisterTurret",0xf);
      FUN_1446f470e(&DAT_14cbccb20,local_38,1);
      _Init_thread_footer(&DAT_14cbccb28);
    }
  }
  *param_1 = DAT_14cbccb20;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6127c FUN_148d6127c body=355 status=ok
// SIG undefined FUN_148d6127c(void)

void FUN_148d6127c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    if ((*(longlong *)(param_1 + 0xb70) != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
      FUN_1447f69b6(*(longlong *)(param_1 + 0xb70) + 0x5778);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = *(int *)(param_1 + 0xbe8);
    *(uint *)(param_1 + 0xbe8) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xbec) < iVar1 + 1U) {
      FUN_140b51998((longlong *)(param_1 + 0xbe0),iVar1);
    }
    *(longlong **)(*(longlong *)(param_1 + 0xbe0) + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(undefined4 *)(param_1 + 0xc14) = *(undefined4 *)(param_1 + 0xbe8);
    (**(code **)(*param_2 + 0x388))(param_2,*(undefined4 *)(param_1 + 0xbf4));
    uVar2 = FUN_144a7b040();
    plVar3 = (longlong *)FUN_144718840(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
      if (lVar4 != 0) {
        local_40 = FUN_148d6152c;
        local_38 = 0;
        FUN_148d61634(lVar4 + 400,local_30,param_1);
      }
    }
    FUN_148d61734(&local_48);
    FUN_148d613e0((longlong)param_2 + 0x20e,param_1,local_48);
    (**(code **)(*(longlong *)(param_1 + 0x8c8) + 0x70))(param_1 + 0x8c8);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d613e0 FUN_148d613e0 body=137 status=ok
// SIG undefined FUN_148d613e0(void)

void FUN_148d613e0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_30 = (undefined4)local_48;
  uStack_2c = local_48._4_4_;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  FUN_14111abfe(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x20e,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6146a FUN_148d6146a body=193 status=ok
// SIG undefined FUN_148d6146a(void)

undefined8 * FUN_148d6146a(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbccb38) {
    FUN_144b3d300(&DAT_14cbccb38);
    if (DAT_14cbccb38 == -1) {
      builtin_wcsncpy(local_38,L"ProjectileDestroyed",0x14);
      FUN_1446f470e(&DAT_14cbccb30,local_38,1);
      _Init_thread_footer(&DAT_14cbccb38);
    }
  }
  *param_1 = DAT_14cbccb30;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6152c FUN_148d6152c body=47 status=ok
// SIG undefined FUN_148d6152c(void)

void FUN_148d6152c(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
  FUN_148d6155c(param_1,uVar1);
  return;
}



// FUNCTION 148d6155c FUN_148d6155c body=214 status=ok
// SIG undefined FUN_148d6155c(void)

void FUN_148d6155c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (((*(byte *)(param_2 + 0x65) & 2) == 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
      uVar1 = FUN_144a7b040();
      plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
        if (lVar3 != 0) {
          FUN_140457ffc(lVar3 + 400,param_1);
        }
      }
      FUN_147b9e310(param_2 + 0x20e,param_1);
    }
    local_30 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    local_28 = &local_30;
    FUN_14111a8f2(param_1 + 0xbe0);
    *(undefined4 *)(param_1 + 0xc14) = *(undefined4 *)(param_1 + 0xbe8);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d61634 FUN_148d61634 body=254 status=ok
// SIG undefined FUN_148d61634(void)

undefined8
FUN_148d61634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3e9ef0;
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
  *local_48 = &PTR_FUN_14b978450;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1403524de(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d61734 FUN_148d61734 body=182 status=ok
// SIG undefined FUN_148d61734(void)

undefined8 * FUN_148d61734(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbccb48) {
    FUN_144b3d300(&DAT_14cbccb48);
    if (DAT_14cbccb48 == -1) {
      builtin_wcsncpy(local_38 + 8,L"erTurret",9);
      builtin_wcsncpy(local_38,L"Unregist",8);
      FUN_1446f470e(&DAT_14cbccb40,local_38,1);
      _Init_thread_footer(&DAT_14cbccb48);
    }
  }
  *param_1 = DAT_14cbccb40;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6183c FUN_148d6183c body=707 status=ok
// SIG undefined FUN_148d6183c(void)

longlong ** FUN_148d6183c(longlong **param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined1 local_170;
  undefined1 local_168;
  undefined4 local_160;
  longlong local_158;
  ulonglong uStack_150;
  longlong *local_148;
  int local_140;
  undefined4 local_13c;
  ulonglong local_68;
  longlong *plStack_60;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_1400b22c2(param_1,&DAT_149e02088);
  cVar5 = FUN_1488cef92((ulonglong *)(param_2 + 8));
  if (cVar5 != '\0') {
    local_68 = *(ulonglong *)(param_2 + 8);
    FUN_1400021e4(&local_68,&local_148);
    if (&local_148 == param_1) {
      if (local_148 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_148;
      local_148 = (longlong *)0x0;
      *(int *)(param_1 + 1) = local_140;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_13c;
    }
  }
  uVar6 = *(ulonglong *)(param_2 + 0x40);
  if (*(int *)(param_2 + 0x60) == 0) {
    if ((uVar6 == 0) || (0xfffffffd < *(int *)(param_2 + 0x48) - 1U)) goto LAB_148d618e9;
    bVar8 = true;
  }
  else {
    bVar8 = *(int *)(param_2 + 0x48) - 1U < 0xfffffffe;
  }
  if ((uVar6 != 0) && (bVar8)) {
    if (1 < *(int *)(param_1 + 1)) {
      thunk_FUN_14047a987(param_1,&DAT_14a35162c,3);
      uVar6 = *(ulonglong *)(param_2 + 0x40);
    }
    local_68 = uVar6;
    FUN_1400021e4(&local_68,&local_148);
    iVar3 = local_140 + -1;
    if (local_140 == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(param_1,local_148,iVar3);
    if (local_148 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  local_158 = 0;
  uStack_150 = 0;
  uVar6 = 0;
  local_68 = local_68 & 0xffffffffffffff00;
  local_40 = 0;
  FUN_14575a19a(&local_68,0);
  FUN_140e45f8a(&local_148,(ulonglong *)(param_2 + 0x40));
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_160 = 2;
  local_168 = 1;
  FUN_14036c2de(&local_158,&local_148,1,&local_68);
  FUN_140060ea8(&local_148);
  FUN_144a5ac3a(&local_68);
  if ((int)uStack_150 != 0) {
    if (1 < *(int *)(param_1 + 1)) {
      thunk_FUN_14047a987(param_1,&DAT_14a35162c,3);
    }
    thunk_FUN_14047a987(param_1,"Available Items: ",0x11);
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    FUN_1413a4536(&local_148,uStack_150 & 0xffffffff,0);
    puVar7 = (undefined8 *)FUN_1447a1f4a(&local_148);
    iVar3 = *(int *)(puVar7 + 1) + -1;
    if (*(int *)(puVar7 + 1) == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(param_1,*puVar7,iVar3);
    if (local_148 != (longlong *)0x0) {
      (**(code **)(*local_148 + 0x10))();
    }
    plVar4 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    uVar6 = uStack_150 & 0xffffffff;
  }
  FUN_14036924e(local_158,uVar6);
  if (local_158 != 0) {
    FUN_1400020a8();
  }
LAB_148d618e9:
  if ((local_38 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d61b00 FUN_148d61b00 body=24 status=ok
// SIG undefined FUN_148d61b00(void)

undefined8 FUN_148d61b00(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x8d8) == 0) {
    return 0;
  }
  uVar1 = FUN_148d61b18(*(longlong *)(param_1 + 0x8d8) + 0x30);
  return uVar1;
}



// FUNCTION 148d61b18 FUN_148d61b18 body=124 status=ok
// SIG undefined FUN_148d61b18(void)

longlong FUN_148d61b18(undefined8 *param_1)

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
    lVar1 = FUN_145ac705c(local_48);
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



// FUNCTION 148d61b96 FUN_148d61b96 body=80 status=ok
// SIG undefined FUN_148d61b96(void)

void FUN_148d61b96(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  FUN_140eeb8c0(param_1 + -0x8c0);
  FUN_14485c47a(param_1 + 8,param_2);
  uVar1 = FUN_14479d2ce(param_1 + 8);
  FUN_14615c82e(param_1,uVar1,param_3);
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



// FUNCTION 148d61be6 FUN_148d61be6 body=116 status=ok
// SIG undefined FUN_148d61be6(void)

void FUN_148d61be6(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((int)param_1[2] == param_3) {
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    plVar1 = param_1 + 1;
    cVar2 = FUN_144729dda(plVar1);
    if (cVar2 != '\0') {
      lVar3 = FUN_14479d2ce(plVar1);
      plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1);
      (**(code **)(*plVar4 + 0x6a0))(plVar4,lVar3);
      if (lVar3 != 0) {
        FUN_140f065f6(lVar3,param_1,param_3);
      }
      *plVar1 = 0;
    }
  }
  return;
}



// FUNCTION 148d61c5e FUN_148d61c5e body=75 status=ok
// SIG undefined FUN_148d61c5e(void)

void FUN_148d61c5e(undefined8 param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  
  if (param_2 != 0 && (param_3 & 1) != 0) {
    lVar1 = FUN_145b8f424();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      *(undefined8 *)(param_2 + 0x8d8) = param_1;
    }
  }
  return;
}



// FUNCTION 148d61caa FUN_148d61caa body=37 status=ok
// SIG undefined FUN_148d61caa(void)

void FUN_148d61caa(longlong param_1)

{
  FUN_14119f284(param_1 + 0x34);
  FUN_1401861f4(param_1 + 0x18,*(undefined4 *)(param_1 + 0x38));
  return;
}



// FUNCTION 148d61cd4 FUN_148d61cd4 body=281 status=ok
// SIG undefined FUN_148d61cd4(void)

undefined8 FUN_148d61cd4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar1 = FUN_144a815a6(param_3);
  if (lVar1 != 0) goto LAB_148d61cf6;
  lVar1 = FUN_140cd1640(param_3);
  if ((lVar1 == 0) || (lVar1 = FUN_14494e0ba(lVar1), lVar1 == 0)) {
LAB_148d61d75:
    lVar1 = 0;
  }
  else {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_148d61d75;
  }
  lVar2 = FUN_140cd1532(param_3);
  if (lVar2 == 0) {
    if (lVar1 == 0) {
      return 0;
    }
  }
  else {
    lVar1 = FUN_1401b2ade(lVar2);
    if (lVar1 == 0) {
      return 0;
    }
    lVar2 = FUN_144a5dd5e();
    if (*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) {
      return 0;
    }
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30) {
      return 0;
    }
  }
LAB_148d61cf6:
  if (*(char *)(lVar1 + 0x178) != '\x03') {
    return 0;
  }
  if (*(char *)(param_1 + 9) == '\x01') {
    fVar3 = (float)FUN_144a7b41a(param_4,0);
    FUN_148dba460(lVar1,*(undefined1 *)(param_1 + 8),(int)fVar3);
  }
  else {
    if (*(char *)(param_1 + 9) != '\0') {
      return 0;
    }
    fVar3 = (float)FUN_144a7b41a(param_4,0);
    FUN_148dba3a4(lVar1,*(undefined1 *)(param_1 + 8),(int)fVar3);
  }
  return 1;
}



// FUNCTION 148d61df2 FUN_148d61df2 body=390 status=ok
// SIG undefined FUN_148d61df2(void)

undefined8 *
FUN_148d61df2(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = FUN_1412cbf0e(param_5);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3,param_4,param_6,param_7,param_8);
    return param_2;
  }
  cVar1 = FUN_142b2fcbc(param_5);
  if ((cVar1 == '\0') || (cVar1 = (**(code **)(*param_1 + 0x28))(param_1), cVar1 == '\0')) {
    *param_2 = *param_5;
    return param_2;
  }
  lVar2 = FUN_144a815a6(param_4);
  if (lVar2 == 0) {
    lVar2 = FUN_140cd1640(param_4);
    if ((lVar2 == 0) || (lVar2 = FUN_14494e0ba(lVar2), lVar2 == 0)) {
LAB_148d61f1b:
      lVar2 = 0;
    }
    else {
      lVar3 = FUN_144a5dd5e();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) != lVar3 + 0x30)) goto LAB_148d61f1b;
    }
    lVar3 = FUN_140cd1532(param_4);
    if (lVar3 == 0) {
      if (lVar2 == 0) goto LAB_148d61f69;
    }
    else {
      lVar2 = FUN_1401b2ade(lVar3);
      if (lVar2 == 0) goto LAB_148d61f69;
      lVar3 = FUN_144a5dd5e();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) != lVar3 + 0x30)) goto LAB_148d61f69;
    }
  }
  if (*(char *)(lVar2 + 0x178) == '\x03') {
    FUN_148dba4b6(lVar2,param_2,(char)param_1[1],param_5,param_6,param_7,param_8);
    return param_2;
  }
LAB_148d61f69:
  *(undefined1 *)param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 4) = 0xffffffff;
  return param_2;
}



// FUNCTION 148d61f7a FUN_148d61f7a body=133 status=ok
// SIG undefined FUN_148d61f7a(void)

undefined8 FUN_148d61f7a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d632de(param_1,local_30);
  FUN_140056680(local_40,L"InventoryChannel: ");
  FUN_1401c7f3e(param_2,local_40,local_30);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d62000 FUN_148d62000 body=313 status=ok
// SIG undefined FUN_148d62000(void)

void FUN_148d62000(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      local_70 = param_2;
      FUN_1446dcdd4(&local_68);
      if (DAT_14cb7d760 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = FUN_144837462(DAT_14cb7d760,&local_68);
      }
      if (CONCAT44(uStack_4c,local_50) != 0) {
        FUN_1400020a8();
      }
      if (lVar2 != 0) {
        uVar3 = (**(code **)(*(longlong *)(param_1 + 0x3a20) + 0x10))(param_1 + 0x3a20);
        local_68 = 0;
        uStack_60 = 0;
        uStack_4c = CONCAT31(uStack_4c._1_3_,0xff);
        local_50 = 0;
        local_58 = 0;
        FUN_14493679e(uVar3,&local_68,lVar2,0);
        cVar1 = FUN_14486ea84(&local_68);
        if (cVar1 != '\0') {
          uVar3 = FUN_14008e0ae(&local_68);
          FUN_14654e92a(uVar3,param_3,param_4);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6213a FUN_148d6213a body=488 status=ok
// SIG undefined FUN_148d6213a(void)

void FUN_148d6213a(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  float fVar5;
  undefined1 auStack_418 [32];
  undefined8 *local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8 [2];
  undefined8 local_3d8;
  undefined1 local_3a8 [40];
  undefined4 local_380;
  undefined1 local_378 [16];
  undefined8 local_368;
  undefined1 local_360 [16];
  undefined4 local_350;
  undefined1 local_90 [24];
  longlong local_78;
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_418;
  local_3f0 = param_2;
  if (param_1 != 0) {
    lVar2 = FUN_144a6c4d8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      local_3a8[0] = 0;
      local_380 = 0;
      FUN_1456bb102(local_3a8,param_1);
      local_378[0] = 0;
      local_350 = 0;
      FUN_1446dcdd4(local_90,&local_3f0);
      uVar3 = FUN_1448fdc6e(local_90);
      FUN_144750e81(local_68,uVar3,local_3a8);
      fVar5 = (float)FUN_144a7b41a(local_68,0);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
      if (pcVar1 != (code *)0x0) {
        ppppuVar4 = local_68;
        if (0x18 < local_50) {
          ppppuVar4 = (undefined8 ****)local_68[0];
        }
        (*pcVar1)(ppppuVar4);
      }
      if (0x18 < local_50) {
        FUN_1400020a8(local_68[0]);
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_144a5ac3a(local_378);
      FUN_144a5ac3a(local_3a8);
      if (0.0 < fVar5) {
        lVar2 = FUN_14011c349();
        FUN_14082cf0e(local_3a8,param_1,param_1,0);
        local_368 = FUN_1405faa04(lVar2 + 0x1e8);
        FUN_140a6f4d0(local_360,lVar2 + 0x200);
        local_3f8 = local_3e8;
        local_3e8[0] = 0;
        local_3d8 = 0;
        FUN_14082d216(local_3a8,fVar5,0,1);
        FUN_1403dfdc4(local_3a8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d62324 FUN_148d62324 body=259 status=ok
// SIG undefined FUN_148d62324(void)

void FUN_148d62324(longlong param_1,undefined4 param_2,undefined4 param_3,float param_4,char param_5
                  )

{
  float fVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (param_1 != 0) {
    lVar4 = FUN_144a6c4d8();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) goto LAB_148d62375;
  }
  param_1 = 0;
LAB_148d62375:
  lVar4 = FUN_14018fe9e(param_1);
  if (lVar4 != 0) {
    fVar1 = *(float *)(lVar4 + 0xab4);
    lVar5 = FUN_1447210f0(lVar4);
    dVar2 = *(double *)(lVar5 + 0x6d0);
    if (((param_4 <= 0.0) || (fVar1 <= 0.0)) || (param_4 < (float)dVar2 - fVar1)) {
      cVar3 = FUN_14486ea84(lVar4 + 0x9a8);
      if (cVar3 != '\0') {
        uVar6 = FUN_14008e0ae(lVar4 + 0x9a8);
        FUN_1488563f2(uVar6,param_2,param_3,1);
        if (param_5 == '\0') {
          *(float *)(lVar4 + 0xab4) = (float)dVar2;
        }
      }
    }
  }
  return;
}



// FUNCTION 148d62428 FUN_148d62428 body=420 status=ok
// SIG undefined FUN_148d62428(void)

void FUN_148d62428(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  undefined1 unaff_XMM7 [16];
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined1 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined1 local_4c;
  ulonglong local_40;
  undefined1 auVar5 [16];
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      uStack_58 = 0;
      uStack_54 = 0;
      local_68 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      local_4c = 0xff;
      FUN_148cccbca(param_1,&local_68);
      cVar1 = FUN_14486ea84(&local_68);
      if (cVar1 != '\0') {
        lVar2 = FUN_14008e0ae(&local_68);
        fVar6 = *(float *)(lVar2 + 200);
        lVar2 = FUN_14008e0ae(&local_68);
        if ((*(longlong *)(lVar2 + 0x18) == 0) ||
           (*(char *)(*(longlong *)(lVar2 + 0x18) + 0x18) != '\x01')) {
          fVar7 = *(float *)(lVar2 + 0x30);
        }
        else {
          auVar5 = roundps(unaff_XMM7,ZEXT416(*(uint *)(lVar2 + 0x30)),3);
          fVar7 = auVar5._0_4_;
        }
        uStack_78 = 0;
        uStack_74 = 0;
        local_88 = 0;
        uStack_80 = 0;
        uStack_7c = 0;
        local_6c = 0xff;
        FUN_143d09494(param_1 + 0x4780,&local_88);
        cVar1 = FUN_14486ea84(&local_88);
        if (cVar1 != '\0') {
          fVar6 = fVar6 / fVar7;
          lVar2 = FUN_14008e0ae(&local_88);
          fVar7 = *(float *)(lVar2 + 200);
          lVar2 = FUN_14008e0ae(&local_88);
          if ((*(longlong *)(lVar2 + 0x18) == 0) ||
             (*(char *)(*(longlong *)(lVar2 + 0x18) + 0x18) != '\x01')) {
            fVar4 = *(float *)(lVar2 + 0x30);
          }
          else {
            auVar5 = roundps(ZEXT416(*(uint *)(lVar2 + 0x30)),ZEXT416(*(uint *)(lVar2 + 0x30)),3);
            fVar4 = auVar5._0_4_;
          }
          if (fVar6 <= fVar7 / fVar4) {
            if (param_2 != '\0') {
              FUN_148d625ce(param_1,fVar6 * 100.0);
            }
          }
          else {
            uVar3 = FUN_14008e0ae(&local_88);
            FUN_14008e202(uVar3,fVar6);
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d625ce FUN_148d625ce body=85 status=ok
// SIG undefined FUN_148d625ce(void)

void FUN_148d625ce(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_1461bfc26(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148d62624 FUN_148d62624 body=135 status=ok
// SIG undefined FUN_148d62624(void)

void FUN_148d62624(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined8 *)0x0;
  uStack_40 = 1;
  FUN_1446f84a2(&local_48,0);
  *local_48 = param_2;
  local_58 = 0;
  uStack_50 = 0;
  FUN_148d626ac(param_1,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d626ac FUN_148d626ac body=438 status=ok
// SIG undefined FUN_148d626ac(void)

void FUN_148d626ac(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  local_a0 = param_3;
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    plVar9 = (longlong *)(param_1 + 0xe18);
    if (param_1 == 0) {
      plVar9 = (longlong *)0x0;
    }
    lVar8 = 0;
    do {
      local_60 = *(undefined8 *)(lVar2 + lVar8);
      local_68 = 0;
      local_70 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        uVar6 = (**(code **)(*plVar9 + 0x28))(plVar9);
        FUN_14485c47a(&local_68,uVar6);
        if (((local_70 != (longlong *)0x0) && (lVar7 = FUN_14479d2ce(&local_68), lVar7 != 0)) &&
           (lVar7 = (**(code **)(*local_70 + 0x20))(local_70,&local_60), lVar7 != 0)) {
          local_78 = *(undefined8 *)(lVar2 + lVar8);
          uStack_80 = 0;
          local_88 = plVar9;
          uVar6 = (**(code **)(*plVar9 + 0x28))(plVar9);
          FUN_14485c47a(&uStack_80,uVar6);
          uVar4 = uStack_50;
          lVar7 = (longlong)(int)uStack_50;
          uVar5 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
          if (uStack_50._4_4_ < uVar5) {
            FUN_148d69940(&local_58,uVar4 & 0xffffffff);
          }
          *(undefined8 *)(local_58 + 0x10 + lVar7 * 0x18) = local_78;
          puVar1 = (undefined4 *)(local_58 + lVar7 * 0x18);
          *puVar1 = (undefined4)local_88;
          puVar1[1] = local_88._4_4_;
          puVar1[2] = (undefined4)uStack_80;
          puVar1[3] = uStack_80._4_4_;
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar8);
  }
  uVar6 = local_a0;
  local_98 = 0;
  local_90 = 0;
  FUN_148d698bc(&local_98,local_a0);
  FUN_1449db362(&local_98);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(uVar6);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d62864 FUN_148d62864 body=298 status=ok
// SIG undefined FUN_148d62864(void)

void FUN_148d62864(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 *local_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((param_1 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) &&
     (lVar1 = FUN_1447210f0(param_1), lVar1 != 0)) {
    local_70 = FUN_14001cc68(0x38,0x10);
    local_68 = *param_7;
    uStack_64 = param_7[1];
    uStack_60 = param_7[2];
    uStack_5c = param_7[3];
    local_58 = *(longlong *)(param_7 + 4);
    if ((local_58 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_80 = &local_68;
    local_88 = param_6;
    local_90 = param_5;
    local_98 = param_4;
    FUN_148d629b0(local_70,param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d629b0 FUN_148d629b0 body=672 status=ok
// SIG undefined FUN_148d629b0(void)

undefined8 *
FUN_148d629b0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = &PTR_FUN_14b977740;
  param_1[1] = param_7;
  uVar1 = param_8[1];
  uVar2 = param_8[2];
  uVar3 = param_8[3];
  *(undefined4 *)(param_1 + 2) = *param_8;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  lVar10 = *(longlong *)(param_8 + 4);
  param_1[4] = lVar10;
  local_58 = param_4;
  local_50 = param_3;
  if ((lVar10 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)((longlong)param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  FUN_14485c47a((longlong)param_1 + 0x2c,param_2);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  puVar5 = local_68;
  local_60 = 3;
  *local_68 = &PTR_LAB_14b9777d0;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_68[2] = lVar9;
  *local_68 = &PTR_FUN_14b977760;
  local_68[3] = 0;
  FUN_14485c47a(local_68 + 3,param_2);
  puVar5[4] = param_1;
  if ((*(byte *)(param_2 + 0x84) & 2) != 0) {
    cVar6 = (**(code **)(*param_2 + 0x6c8))(param_2);
    if (cVar6 != '\0') {
      local_78 = (undefined8 *)0x0;
      uStack_70 = 1;
      uStack_6c = 0;
      FUN_1446f84a2(&local_78,0);
      uVar4 = uStack_70;
      *local_78 = param_3;
      lVar10 = (longlong)(int)uStack_70;
      uStack_70 = uStack_70 + 1;
      if (uStack_6c < uStack_70) {
        FUN_1446f84a2(&local_78,uVar4);
      }
      local_78[lVar10] = param_4;
      local_88 = 0;
      local_80 = 0;
      FUN_148d698bc(&local_88,&local_68);
      FUN_148d626ac(param_2,&local_78,&local_88);
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_148d62c02;
    }
  }
  uVar7 = FUN_140254f32(param_2,&local_50);
  uVar8 = FUN_140254f32(param_2,&local_58);
  local_98 = 0;
  local_90 = 0;
  FUN_148d698bc(&local_98,&local_68);
  local_b0 = param_6;
  local_b8 = param_5;
  local_a8 = &local_98;
  FUN_148d63dba(param_2 + 0x4a8,uVar7,uVar8,param_2 + 0x1c3);
LAB_148d62c02:
  FUN_1449db362(&local_68);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d62c52 FUN_148d62c52 body=185 status=ok
// SIG undefined FUN_148d62c52(void)

void FUN_148d62c52(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 1;
  uStack_4c = 0;
  FUN_1446f84a2(&local_58,0);
  uVar1 = uStack_50;
  *local_58 = param_2;
  lVar2 = (longlong)(int)uStack_50;
  uStack_50 = uStack_50 + 1;
  if (uStack_4c < uStack_50) {
    FUN_1446f84a2(&local_58,uVar1);
  }
  local_58[lVar2] = param_3;
  local_68 = 0;
  uStack_60 = 0;
  FUN_148d626ac(param_1,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d62d0c FUN_148d62d0c body=733 status=ok
// SIG undefined FUN_148d62d0c(void)

void FUN_148d62d0c(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  longlong *local_160;
  undefined4 local_158;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  undefined8 uStack_110;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  code *local_a8 [2];
  undefined8 *local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_b0 = param_2;
  local_b8 = FUN_140350bfe(param_4);
  if (local_b8 != 0 && (param_3 != 0 && param_1 != 0)) {
    lVar1 = *(longlong *)(param_1 + 0xf40);
    lVar2 = FUN_140254f32(param_1,&local_b0);
    local_140 = param_1 + 0xe18;
    lVar3 = FUN_148db9f70();
    uVar4 = FUN_1447210f0(param_1);
    local_c0 = FUN_14007a5e6(uVar4);
    local_148 = lVar3;
    if ((local_c0 != 0 && (lVar3 != 0 && lVar2 != 0)) && lVar1 != 0) {
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_3);
      }
      lVar3 = *(longlong *)(param_3 + 0x1c8);
      if (lVar3 == 0) {
        puVar5 = &DAT_14c8464e0;
        uVar6 = (undefined4)DAT_14c8464f0;
        uVar7 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar6 = (undefined4)*(undefined8 *)(lVar3 + 0x270);
        uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x270) >> 0x20);
        puVar5 = (undefined8 *)(lVar3 + 0x260);
      }
      local_f0 = *(undefined4 *)puVar5;
      uStack_ec = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_e8 = *(undefined4 *)(puVar5 + 1);
      uStack_e4 = *(undefined4 *)((longlong)puVar5 + 0xc);
      local_e0 = CONCAT44(uVar7,uVar6);
      local_f8 = param_5;
      local_118 = 0;
      uStack_110 = 0;
      local_a8[0] = (code *)0x0;
      local_100 = param_3;
      local_98 = (undefined8 *)FUN_14001cc68(0x28,8);
      *local_98 = &PTR_FUN_14b978500;
      local_98[1] = &local_b8;
      local_98[2] = &local_100;
      local_98[3] = &local_c0;
      local_98[4] = &local_118;
      if (local_98 + 1 != (longlong *)0x0) {
        local_a8[0] = FUN_144189604;
      }
      FUN_14100973a(lVar2,local_a8);
      if ((longlong)(int)uStack_110 != 0) {
        lVar3 = (longlong)(int)uStack_110 << 3;
        lVar2 = local_118;
        do {
          uVar6 = *(undefined4 *)(lVar2 + 4);
          local_128 = 0;
          lStack_120 = 0;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar1);
          }
          local_138 = 0;
          lStack_130 = 0;
          local_128 = lVar1;
          lStack_120 = lVar1 + 0x3be8;
          if ((DAT_14c950c29 & 1) != 0) {
            FUN_1456cec3c(param_1);
          }
          lStack_130 = local_140;
          local_160 = &local_128;
          local_168 = 0;
          local_158 = uVar6;
          local_138 = param_1;
          FUN_1416a1924(local_148,lVar2,&local_b0,&local_138);
          lVar2 = lVar2 + 8;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
      if (local_118 != 0) {
        FUN_1400020a8(local_118);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d62fea FUN_148d62fea body=191 status=ok
// SIG undefined FUN_148d62fea(void)

undefined4 FUN_148d62fea(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  if (param_2 == 0) {
    lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,0);
    uVar1 = 0;
    if ((lVar2 == 0) || (param_2 = FUN_147d80080(DAT_14cb0d2b0,lVar2), param_2 == 0))
    goto LAB_148d63031;
    lVar2 = FUN_144a5dd5e();
    uVar1 = 0;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) != lVar2 + 0x30)) goto LAB_148d63031;
  }
  lVar2 = FUN_140254f32(param_2,&local_20);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_141007d7a(lVar2,1,1);
  }
LAB_148d63031:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 148d630aa FUN_148d630aa body=135 status=ok
// SIG undefined FUN_148d630aa(void)

longlong FUN_148d630aa(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [44];
  int local_5c;
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  int *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    local_5c = 0;
    lVar1 = FUN_148db98da();
    if (lVar1 != 0) {
      local_48 = 0;
      local_38 = &PTR_LAB_14b978520;
      local_30 = &local_5c;
      local_58 = FUN_144189a12;
      FUN_14100973a(lVar1);
      lVar1 = (longlong)local_5c;
      goto LAB_148d63112;
    }
  }
  lVar1 = 0;
LAB_148d63112:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d63132 FUN_148d63132 body=466 status=ok
// SIG undefined FUN_148d63132(void)

void FUN_148d63132(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_1 == 0) || (*(char *)(param_1 + 0x178) != '\x03')) goto LAB_148d632c4;
  lVar4 = FUN_148db98da();
  if (lVar4 == 0) goto LAB_148d632c4;
  if (*(longlong *)(lVar4 + 0xa8) == 0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = *(longlong **)(lVar4 + 0xb0);
  }
  lVar5 = (**(code **)(*plVar10 + 0x10))();
  if (lVar5 == 0) goto LAB_148d632c4;
  lVar6 = FUN_14011c349();
  if (param_2[1] == 0) {
    uVar7 = FUN_145d85ea2();
    uVar7 = FUN_14477b664(uVar7);
    param_2[1] = uVar7;
  }
  lVar8 = *(longlong *)(lVar6 + 0x50);
  if (lVar8 == 0) {
    lVar8 = FUN_145d85ea2();
  }
  uVar7 = *(undefined8 *)(lVar6 + 0x48);
  uVar9 = FUN_14477b664(lVar8);
  local_50 = uVar7;
  uVar2 = FUN_144a7891a(uVar9);
  local_58 = *param_2;
  uVar7 = param_2[1];
  uVar3 = FUN_144a7891a(uVar7);
  local_88 = uVar9;
  local_80 = &local_50;
  cVar1 = FUN_144a789b8(uVar3,uVar7,&local_58,uVar2);
  if (cVar1 == '\0') {
    local_68 = 0;
LAB_148d63271:
    lStack_60 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0xf48);
    local_68 = 0;
    lStack_60 = 0;
    if ((lVar6 == 0) || (DAT_14c950c29 == 0)) {
      local_68 = lVar6;
      if (lVar6 == 0) goto LAB_148d63271;
    }
    else {
      FUN_1456cec3c(lVar6);
    }
    lStack_60 = lVar6 + 0x3be8;
    local_68 = lVar6;
  }
  local_78 = *(longlong *)(lVar4 + 0xa8);
  if ((local_78 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_70 = *(undefined8 *)(lVar4 + 0xb0);
  FUN_1416a327c(lVar5,lVar4 + 0xb8,&local_78,&local_68);
LAB_148d632c4:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d63306 FUN_148d63306 body=85 status=ok
// SIG undefined FUN_148d63306(void)

void FUN_148d63306(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_148ccdcda(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148d6335c FUN_148d6335c body=10 status=ok
// SIG undefined FUN_148d6335c(void)

void FUN_148d6335c(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_148d0f11e(param_1 + 0x4978);
    return;
  }
  return;
}



// FUNCTION 148d63366 FUN_148d63366 body=64 status=ok
// SIG undefined FUN_148d63366(void)

void FUN_148d63366(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_148ccdcf0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148d633a6 FUN_148d633a6 body=10 status=ok
// SIG undefined FUN_148d633a6(void)

void FUN_148d633a6(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_1461c006a(param_1 + 0x4978);
    return;
  }
  return;
}



// FUNCTION 148d633b0 FUN_148d633b0 body=173 status=ok
// SIG undefined FUN_148d633b0(void)

void FUN_148d633b0(longlong param_1,float param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_54 [11];
  undefined1 local_49;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined1 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    uStack_38 = 0;
    uStack_34 = 0;
    local_48 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    local_2c = 0xff;
    FUN_140f8606e(param_1 + 0x4780,&local_48);
    cVar1 = FUN_14486ea84(&local_48);
    if (cVar1 != '\0') {
      if (1.0 <= param_2) {
        param_2 = 1.0;
      }
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      lVar2 = FUN_14008e0ae(&local_48);
      local_68 = &local_49;
      FUN_1402a444c(local_54,lVar2 + 0x38,2,param_2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6345e FUN_148d6345e body=118 status=ok
// SIG undefined FUN_148d6345e(void)

void FUN_148d6345e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined1 local_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    uStack_28 = 0;
    uStack_24 = 0;
    local_38 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    local_1c = 0xff;
    FUN_140f8606e(param_1 + 0x4780,&local_38);
    cVar1 = FUN_14486ea84(&local_38);
    if (cVar1 != '\0') {
      lVar2 = FUN_14008e0ae(&local_38);
      thunk_FUN_140217bc2(lVar2 + 0x38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d634d6 FUN_148d634d6 body=162 status=ok
// SIG undefined FUN_148d634d6(void)

longlong FUN_148d634d6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar2 = FUN_144a2f878();
    if (((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         (uVar1 = FUN_140232fad(), -1 < (int)uVar1)) &&
        (((int)uVar1 < *(int *)(param_1 + 0x78f0) &&
         (lVar2 = (ulonglong)uVar1 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar2 != 0)))) &&
       ((*(longlong **)(lVar2 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar2 + 0x20) != 0 &&
        (lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 8))(), lVar2 != 0)))) {
      lVar3 = FUN_140232dfe();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 148d63578 FUN_148d63578 body=1697 status=ok
// SIG undefined FUN_148d63578(void)

undefined8 *
FUN_148d63578(undefined8 *param_1,longlong param_2,longlong *param_3,longlong param_4,uint param_5,
             longlong *param_6)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_258 [32];
  longlong local_238;
  undefined1 local_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined1 local_218;
  undefined4 local_210;
  ulonglong *local_208;
  longlong local_200;
  ulonglong local_1f8;
  undefined4 local_1f0;
  longlong local_1e8;
  ulonglong uStack_1e0;
  undefined **local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined2 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  longlong lStack_190;
  int local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined **local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined2 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  longlong lStack_128;
  int local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong local_90;
  undefined4 local_88;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  param_1[0xc] = 0;
  param_1[0xd] = 0x8000000000;
  param_1[0xe] = 0xffffffff;
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
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0xf;
  *(undefined2 *)(param_1 + 0x18) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  if (param_2 == 0) goto LAB_148d6368b;
  uVar4 = FUN_14018b740();
  plVar5 = (longlong *)FUN_144718840(param_2,uVar4);
  if (plVar5 == (longlong *)0x0) {
    iVar3 = 1;
  }
  else {
    iVar3 = (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if ((param_4 != 0) && ((param_5 & 1) != 0)) {
    FUN_1407b25f0(param_1,param_4 + 0x3f0);
    FUN_1409e3208(param_1,&DAT_14cb843e8,(longlong)iVar3);
    goto LAB_148d6368b;
  }
  local_1d0 = &PTR_FUN_14b023b08;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  lStack_190 = 0;
  local_188 = 0x3b9cbb9e;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  if (*param_3 != 0 || (int)param_3[1] != 0x3b9cbb9e) {
    lStack_190 = *param_3;
    local_188 = (int)param_3[1];
  }
  FUN_140e8ab18(&uStack_178,param_3 + 3);
  if (param_4 != 0) {
    lVar6 = *(longlong *)(param_4 + 0x3f0);
    if ((param_5 & 2) == 0) {
      if ((((lVar6 != 0) && (lVar6 = FUN_1488cb5e8(lVar6), lVar6 != 0)) &&
          (*(longlong *)(lVar6 + 0x270) != 0)) &&
         (lVar7 = FUN_1488ccf1a(&lStack_190,&DAT_14cb82348,1), lVar7 != 0)) {
        (**(code **)(*(longlong *)(lVar7 + 0x20) + 8))(lVar7 + 0x20,lVar6 + 0x270);
      }
    }
    else {
      while (lVar6 != 0) {
        if (*(longlong *)(lVar6 + 0x270) != 0) {
          cVar2 = FUN_140baf132(lVar6);
          puVar8 = &DAT_14cb82348;
          if (cVar2 == '\0') {
            puVar8 = (undefined8 *)FUN_1488cb0c8(lVar6,&DAT_14cb82348);
          }
          lVar7 = FUN_1488ccf1a(&lStack_190,puVar8,1);
          if (lVar7 != 0) {
            (**(code **)(*(longlong *)(lVar7 + 0x20) + 8))(lVar7 + 0x20,lVar6 + 0x270);
          }
        }
        lVar6 = FUN_14001d26e(lVar6);
      }
    }
    if (((param_5 & 4) != 0) && (lVar6 = FUN_1418947d6(param_4 + 0x3f0), lVar6 != 0)) {
      local_200 = lVar6;
      uVar4 = FUN_1410b58d2();
      lVar6 = FUN_1488ccf1a(&lStack_190,uVar4,1);
      if (lVar6 != 0) {
        (**(code **)(*(longlong *)(lVar6 + 0x20) + 8))(lVar6 + 0x20,local_200 + 0xf0);
      }
    }
    if ((((param_5 & 8) != 0) && (lVar6 = FUN_14087dee0(param_4 + 0x3f0), lVar6 != 0)) &&
       (lVar7 = FUN_1488ccf1a(&lStack_190,&DAT_14cb82358,1), lVar7 != 0)) {
      (*(code *)**(undefined8 **)(lVar7 + 0x20))(lVar7 + 0x20,lVar6 + 0x1c);
    }
    if ((param_5 & 0x10) != 0) {
      uVar4 = FUN_1406d192e();
      plVar5 = (longlong *)FUN_144718840(param_4,uVar4);
      if ((plVar5 != (longlong *)0x0) &&
         (plVar5 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5), plVar5 != (longlong *)0x0)) {
        lVar6 = (**(code **)(*plVar5 + 8))(plVar5);
        lVar7 = FUN_14018fb44();
        if ((lVar7 != 0) &&
           (((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30)) && (lVar6 = FUN_1488ccf1a(&lStack_190,&DAT_14cbcc618,1), lVar6 != 0))))
        {
          bVar1 = *(byte *)((longlong)plVar5 + 0x121);
          if ((ulonglong)bVar1 == 0) {
            *(undefined1 *)(lVar6 + 0xe0) = 1;
          }
          else {
            FUN_140e96cb2();
            local_168 = (undefined **)(&DAT_14cbc82a0)[bVar1];
            (*(code *)**(undefined8 **)(lVar6 + 0x20))(lVar6 + 0x20);
          }
        }
      }
    }
  }
  lVar6 = FUN_140cbc0ba(param_2);
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_168 = (undefined **)((ulonglong)local_168 & 0xffffffffffffff00);
  local_140 = (ulonglong)local_140._4_4_ << 0x20;
  FUN_1456bb102(&local_168,param_2);
  local_208 = &local_90;
  local_218 = 0;
  local_220 = 0;
  local_228 = 0;
  local_210 = 1;
  local_230 = 1;
  local_238 = lVar6;
  local_200 = lVar6;
  FUN_1403695ab(&local_1e8,&local_1d0,iVar3,&local_168);
  FUN_144a5ac3a(&local_168);
  if ((int)uStack_1e0 == 0) {
    local_168 = &PTR_FUN_14b023b08;
    uVar9 = 0;
    local_160 = 0;
    local_158 = 0;
    local_150 = 0;
    local_148 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    lStack_128 = 0;
    local_120 = 0x3b9cbb9e;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    if (*param_6 != 0 || (int)param_6[1] != 0x3b9cbb9e) {
      lStack_128 = *param_6;
      local_120 = (int)param_6[1];
    }
    FUN_140e8ab18(&uStack_110,param_6 + 3);
    local_1f8 = 0;
    local_1f0 = 0;
    local_90 = local_90 & 0xffffffffffffff00;
    local_68 = 0;
    FUN_1456bb102(&local_90,param_2);
    local_218 = 0;
    local_220 = 0;
    local_228 = 0;
    local_238 = local_200;
    local_210 = 1;
    local_230 = 1;
    local_208 = &local_1f8;
    FUN_1403695ab(&local_1e8,&local_168,iVar3,&local_90);
    FUN_144a5ac3a(&local_90);
    FUN_140485912(&local_168);
    if ((int)uStack_1e0 != 0) goto LAB_148d63929;
  }
  else {
LAB_148d63929:
    lVar6 = local_1e8;
    local_90 = local_90 & 0xffffffffffffff00;
    local_68 = 0;
    FUN_1456bb102(&local_90,param_2);
    FUN_140368c94(lVar6,&local_168,&local_90,1);
    FUN_140a6a9d4(param_1,&local_168);
    FUN_140368b56(&local_168);
    FUN_144a5ac3a(&local_90);
    uVar9 = uStack_1e0 & 0xffffffff;
  }
  FUN_14036924e(local_1e8,uVar9);
  if (local_1e8 != 0) {
    FUN_1400020a8();
  }
  FUN_140485912(&local_1d0);
LAB_148d6368b:
  FUN_140485972(param_3[3],(int)param_3[4]);
  if (param_3[3] != 0) {
    FUN_1400020a8();
  }
  FUN_140485972(param_6[3],(int)param_6[4]);
  if (param_6[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148d63c1e FUN_148d63c1e body=410 status=ok
// SIG undefined FUN_148d63c1e(void)

uint * FUN_148d63c1e(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_a8 [44];
  int local_7c;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  int *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar7 = (longlong *)FUN_140fecfdc(param_4);
  if (plVar7 != (longlong *)0x0) {
    lVar8 = (**(code **)(*plVar7 + 0x5d8))(plVar7);
    if (lVar8 != 0) {
      lVar9 = FUN_144a5dd5e();
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
           ) == lVar9 + 0x30)) {
        lVar9 = FUN_1414213c4(lVar8);
        lVar8 = FUN_140254ee4(lVar8);
        if (lVar9 != 0 && lVar8 != 0) {
          cVar1 = *(char *)(param_1 + 8);
          if (cVar1 == '\x02') {
            iVar3 = *(int *)(lVar9 + 0x94);
            iVar6 = FUN_141007d7a(lVar9,1,1);
            local_50 = &local_7c;
            local_7c = 0;
            local_68 = 0;
            local_58 = &PTR_LAB_14b978540;
            local_78 = &LAB_144189a76;
            FUN_1410097ce(lVar8);
            bVar10 = local_7c <= iVar3 - iVar6;
          }
          else {
            if (cVar1 == '\x01') {
              iVar3 = *(int *)(lVar9 + 0x94);
              iVar5 = FUN_141007d7a(lVar9,1,1);
              bVar11 = SBORROW4(iVar3,iVar5);
              iVar6 = iVar3 - iVar5;
              bVar10 = iVar3 == iVar5;
            }
            else {
              if (cVar1 != '\0') {
                bVar10 = false;
                goto LAB_148d63d4c;
              }
              local_50 = &local_7c;
              local_7c = 0;
              local_68 = 0;
              local_58 = &PTR_LAB_14b978540;
              local_78 = &LAB_144189a76;
              FUN_1410097ce(lVar8);
              bVar11 = false;
              bVar10 = local_7c == 0;
              iVar6 = local_7c;
            }
            bVar10 = !bVar10 && bVar11 == iVar6 < 0;
          }
LAB_148d63d4c:
          bVar2 = *(byte *)(param_1 + 9);
          *(undefined2 *)(param_2 + 6) = 4;
          uVar4 = (uint)(bVar10 ^ bVar2);
          goto LAB_148d63c89;
        }
      }
    }
  }
  *(undefined2 *)(param_2 + 6) = 4;
  uVar4 = 0;
LAB_148d63c89:
  *param_2 = uVar4;
  *(undefined1 *)(param_2 + 8) = 1;
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d63dba FUN_148d63dba body=228 status=ok
// SIG undefined FUN_148d63dba(void)

void FUN_148d63dba(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,
                  undefined1 param_5,undefined8 param_6,longlong *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*param_1 != 0) && (param_4 != (longlong *)0x0 && (param_3 != 0 && param_2 != 0))) {
    uVar1 = *(undefined8 *)(param_2 + 0xb8);
    lVar4 = (**(code **)(*param_4 + 0x28))(param_4);
    if (lVar4 != 0) {
      lVar5 = FUN_144a6c4d8();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        uVar2 = *(undefined8 *)(param_3 + 0xb8);
        FUN_148d698bc(param_1 + 1,param_7);
        if (((int)param_7[1] == 0) || ((longlong *)*param_7 == (longlong *)0x0)) {
          uVar3 = 0;
        }
        else {
          uVar3 = (**(code **)(*(longlong *)*param_7 + 0x30))();
        }
        FUN_148c36606(*param_1,uVar1,uVar2,lVar4,param_5,param_6,uVar3);
      }
    }
  }
  FUN_1449db362(param_7);
  return;
}



// FUNCTION 148d63e9e FUN_148d63e9e body=588 status=ok
// SIG undefined FUN_148d63e9e(void)

void FUN_148d63e9e(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_1 != 0) {
    local_48 = (undefined4 *)0x0;
    uStack_40 = 0;
    if (param_4 != 0) {
      uVar6 = FUN_14119f41e();
      plVar7 = (longlong *)FUN_144718840(param_4,uVar6);
      if (plVar7 != (longlong *)0x0) {
        local_60 = (longlong *)(*param_1 + 0xe18);
        if (*param_1 == 0) {
          local_60 = (longlong *)0x0;
        }
        uStack_58 = 0;
        local_50 = param_2;
        if (local_60 != (longlong *)0x0) {
          uVar6 = (**(code **)(*local_60 + 0x28))();
          FUN_14485c47a(&uStack_58,uVar6);
        }
        uStack_40._0_4_ = 1;
        FUN_148d69940(&local_48,0);
        *(undefined8 *)(local_48 + 4) = local_50;
        *local_48 = (undefined4)local_60;
        local_48[1] = local_60._4_4_;
        local_48[2] = (undefined4)uStack_58;
        local_48[3] = uStack_58._4_4_;
        uStack_58 = 0;
        local_60 = plVar7;
        local_50 = param_3;
        uVar6 = (**(code **)(*plVar7 + 0x28))(plVar7);
        FUN_14485c47a(&uStack_58,uVar6);
        iVar3 = (int)uStack_40;
        lVar9 = (longlong)(int)uStack_40;
        uVar5 = (int)uStack_40 + 1;
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar5);
        if (uStack_40._4_4_ < uVar5) {
          FUN_148d69940(&local_48,iVar3);
        }
        *(undefined8 *)(local_48 + lVar9 * 6 + 4) = local_50;
        puVar1 = local_48 + lVar9 * 6;
        *puVar1 = (undefined4)local_60;
        puVar1[1] = local_60._4_4_;
        puVar1[2] = (undefined4)uStack_58;
        puVar1[3] = uStack_58._4_4_;
        plVar7 = param_1 + 1;
        if (param_7 == '\0') {
          if (((int)param_1[2] != 0) &&
             (puVar2 = (undefined8 *)*plVar7, puVar2 != (undefined8 *)0x0)) {
            (**(code **)*puVar2)(puVar2,0);
            FUN_1446efa72(plVar7,0,0,0x10);
            *(undefined4 *)(param_1 + 2) = 0;
          }
        }
        else {
          lVar9 = *param_1;
          if ((int)param_1[2] != 3) {
            FUN_1446efa72(plVar7,0,3,0x10);
            *(undefined4 *)(param_1 + 2) = 3;
          }
          puVar2 = (undefined8 *)*plVar7;
          *puVar2 = &PTR_LAB_14b9777d0;
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 1;
          lVar4 = DAT_14c758608 + 1;
          if (lVar8 == 0) {
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 2;
            lVar4 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar4;
          puVar2[2] = lVar8;
          *puVar2 = &PTR_FUN_14b978560;
          puVar2[3] = 0;
          FUN_14485c47a(puVar2 + 3,lVar9);
          puVar2[4] = param_1;
        }
        local_70 = 0;
        local_68 = 0;
        FUN_148d698bc(&local_70,plVar7);
        FUN_1449db362(&local_70);
        if (local_48 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d640ec FUN_148d640ec body=28 status=ok
// SIG undefined FUN_148d640ec(void)

void FUN_148d640ec(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_140c125e6(*param_1 + 0xd98,&DAT_14cbd9328);
    return;
  }
  return;
}



// FUNCTION 148d64108 FUN_148d64108 body=80 status=ok
// SIG undefined FUN_148d64108(void)

void FUN_148d64108(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    FUN_148c3888c();
    if ((int)param_1[2] != 0) {
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72(param_1 + 1,0,0,0x10);
        *(undefined4 *)(param_1 + 2) = 0;
      }
    }
  }
  return;
}



// FUNCTION 148d64158 FUN_148d64158 body=87 status=ok
// SIG undefined FUN_148d64158(void)

void FUN_148d64158(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x60))();
      if ((*(int *)(param_1 + 0x10) != 0) &&
         (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0)) {
        (**(code **)*puVar2)(puVar2,0);
        FUN_1446efa72(plVar1,0,0,0x10);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
  }
  return;
}



// FUNCTION 148d641b0 FUN_148d641b0 body=143 status=ok
// SIG undefined FUN_148d641b0(void)

void FUN_148d641b0(undefined1 *param_1,undefined1 *param_2)

{
  if (((byte)param_1[0x78] < (byte)param_2[0x78]) || (param_1[0x79] == '\0')) {
    *param_1 = *param_2;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    FUN_144a7bb84(param_1 + 0x28,param_2 + 0x28);
    FUN_144a82394(param_1 + 0x40,param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    FUN_144a7bb84(param_1 + 0x58,param_2 + 0x58);
    FUN_144a82394(param_1 + 0x70,param_2 + 0x70);
    param_1[0x78] = param_2[0x78];
    param_1[0x79] = 1;
  }
  return;
}



// FUNCTION 148d64240 FUN_148d64240 body=33 status=ok
// SIG undefined FUN_148d64240(void)

void FUN_148d64240(longlong param_1)

{
  FUN_1488c6e08();
  FUN_148d57ca0(param_1 + 0x8d0);
  return;
}



// FUNCTION 148d6426e FUN_148d6426e body=63 status=ok
// SIG undefined FUN_148d6426e(void)

void FUN_148d6426e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  FUN_1488c7e38(param_1 + 0xe8);
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000148d642a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 148d642ea FUN_148d642ea body=24 status=ok
// SIG undefined FUN_148d642ea(void)

void FUN_148d642ea(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  if ((param_1[0x164] != 0) && ((char)param_1[0x2f] == '\x03')) {
    uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
    uStack_28 = param_2;
    uStack_20 = param_3;
    uVar1 = FUN_14477b072(param_1,DAT_14cbbfd30);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&uStack_28);
    if ((uStack_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d64322 FUN_148d64322 body=85 status=ok
// SIG undefined FUN_148d64322(void)

void FUN_148d64322(undefined8 param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  
  if (param_2 != 0 && (param_3 & 1) != 0) {
    lVar1 = FUN_1401900c0();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_148d64378(param_2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148d64378 FUN_148d64378 body=184 status=ok
// SIG undefined FUN_148d64378(void)

void FUN_148d64378(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_2 != 0) {
    puVar5 = (undefined8 *)FUN_14001cc68(0x90,0x10);
    *puVar5 = &PTR_FUN_14b2fa080;
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    uVar3 = *(undefined4 *)(param_2 + 0x10);
    uVar4 = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)puVar5 + 0xc) = uVar2;
    *(undefined4 *)(puVar5 + 2) = uVar3;
    *(undefined4 *)((longlong)puVar5 + 0x14) = uVar4;
    FUN_145951594(puVar5 + 3,param_2 + 0x18);
    *puVar5 = &PTR_FUN_14b92d990;
    puVar5[6] = *(undefined8 *)(param_2 + 0x30);
    *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(param_2 + 0x38);
    puVar5[8] = 0;
    FUN_1412bd664(puVar5 + 9,param_2 + 0x48);
    uVar2 = *(undefined4 *)(param_2 + 0x7c);
    uVar3 = *(undefined4 *)(param_2 + 0x80);
    uVar4 = *(undefined4 *)(param_2 + 0x84);
    *(undefined4 *)(puVar5 + 0xf) = *(undefined4 *)(param_2 + 0x78);
    *(undefined4 *)((longlong)puVar5 + 0x7c) = uVar2;
    *(undefined4 *)(puVar5 + 0x10) = uVar3;
    *(undefined4 *)((longlong)puVar5 + 0x84) = uVar4;
    *(undefined4 *)(puVar5 + 0x11) = *(undefined4 *)(param_2 + 0x88);
    puVar1 = *(undefined8 **)(param_1 + 0xa90);
    *(undefined8 **)(param_1 + 0xa90) = puVar5;
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d6442d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 148d64438 FUN_148d64438 body=281 status=ok
// SIG undefined FUN_148d64438(void)

uint FUN_148d64438(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  float fVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined1 local_3c;
  ulonglong local_30;
  undefined1 auVar9 [16];
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = FUN_1400e8a68(param_3);
  if (lVar5 != 0) {
    lVar6 = FUN_14018ffce(lVar5);
    if (lVar6 != 0) {
      uStack_48 = 0;
      uStack_44 = 0;
      local_58 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      local_3c = 0xff;
      cVar3 = FUN_143d09494(lVar5 + 0x4780);
      if (cVar3 != '\0') {
        cVar3 = FUN_1403ae288(&local_58);
        if (cVar3 != '\0') {
          lVar5 = FUN_14008e0ae(&local_58);
          fVar1 = *(float *)(lVar5 + 200);
          lVar5 = FUN_14008e0ae(&local_58);
          if ((*(longlong *)(lVar5 + 0x18) == 0) ||
             (*(char *)(*(longlong *)(lVar5 + 0x18) + 0x18) != '\x01')) {
            fVar8 = *(float *)(lVar5 + 0x30);
          }
          else {
            auVar9 = roundps(ZEXT416(*(uint *)(lVar5 + 0x30)),ZEXT416(*(uint *)(lVar5 + 0x30)),3);
            fVar8 = auVar9._0_4_;
          }
          iVar2 = *(int *)(param_1 + 0x10);
          if (iVar2 == 2) {
            bVar7 = fVar1 < fVar8 * *(float *)(param_1 + 0x14);
          }
          else {
            if (iVar2 == 1) {
              uVar4 = (uint)(fVar1 - fVar8 * *(float *)(param_1 + 0x14) < 0.0001);
              goto LAB_148d644fc;
            }
            if (iVar2 != 0) goto LAB_148d644fa;
            bVar7 = fVar8 * *(float *)(param_1 + 0x14) < fVar1;
          }
          uVar4 = CONCAT31((int3)((uint)iVar2 >> 8),!bVar7);
          goto LAB_148d644fc;
        }
      }
    }
  }
LAB_148d644fa:
  uVar4 = 0;
LAB_148d644fc:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d64552 FUN_148d64552 body=33 status=ok
// SIG undefined FUN_148d64552(void)

void FUN_148d64552(longlong param_1)

{
  FUN_1488c6e08();
  FUN_148d57ca0(param_1 + 0x8d0);
  return;
}



// FUNCTION 148d64574 FUN_148d64574 body=86 status=ok
// SIG undefined FUN_148d64574(void)

void FUN_148d64574(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1403ae288(param_1 + 0x9a8);
  if (cVar1 != '\0') {
    lVar2 = FUN_140280ec4(param_1 + 0x9a8);
    if ((*(longlong *)(lVar2 + 0x18) != 0) &&
       (*(char *)(*(longlong *)(lVar2 + 0x18) + 0x18) == '\x01')) {
      roundps(ZEXT416(*(uint *)(lVar2 + 0x30)),ZEXT416(*(uint *)(lVar2 + 0x30)),3);
    }
  }
  return;
}



// FUNCTION 148d645ca FUN_148d645ca body=64 status=ok
// SIG undefined FUN_148d645ca(void)

undefined4 FUN_148d645ca(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1403ae288(param_1 + 0x9a8);
  if (cVar1 == '\0') {
    param_1 = param_1 + 0xa34;
  }
  else {
    param_1 = FUN_140280ec4(param_1 + 0x9a8);
    param_1 = param_1 + 0x68;
  }
  return *(undefined4 *)(param_1 + 4);
}



// FUNCTION 148d6460a FUN_148d6460a body=64 status=ok
// SIG undefined FUN_148d6460a(void)

undefined4 FUN_148d6460a(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1403ae288(param_1 + 0x9a8);
  if (cVar1 == '\0') {
    param_1 = param_1 + 0xa40;
  }
  else {
    param_1 = FUN_140280ec4(param_1 + 0x9a8);
    param_1 = param_1 + 0x74;
  }
  return *(undefined4 *)(param_1 + 4);
}



// FUNCTION 148d6464a FUN_148d6464a body=370 status=ok
// SIG undefined FUN_148d6464a(void)

void FUN_148d6464a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((*(char *)(param_1 + 0xac1) == '\x01') && (0 < *(int *)(param_1 + 0xa50))) &&
      (0.0 < *(float *)(param_1 + 0xa80))) && (*(longlong *)(param_1 + 0xac8) != 0)) {
    lVar1 = FUN_14011c349();
    uVar2 = FUN_14011c2be(lVar1 + 0x238);
    if (*(char *)(param_1 + 0x178) == '\x03') {
      uVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xac8) + 0x3a20) + 0x10))
                        (*(longlong *)(param_1 + 0xac8) + 0x3a20);
      FUN_14036c7e6(uVar3,&local_48,uVar2,1);
    }
    else {
      uVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xac8) + 0x3a20) + 0x10))
                        (*(longlong *)(param_1 + 0xac8) + 0x3a20);
      local_48 = (code *)0x0;
      uStack_40 = 0;
      uStack_2c = CONCAT31(uStack_2c._1_3_,0xff);
      uStack_30 = 0;
      local_38 = 0;
      FUN_14493679e(uVar3,&local_48,uVar2,1);
    }
    *(undefined4 *)(param_1 + 0xa18) = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0xa1c) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0xa20) = uStack_30;
    *(undefined4 *)(param_1 + 0xa24) = uStack_2c;
    *(undefined4 *)(param_1 + 0xa08) = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0xa0c) = local_48._4_4_;
    *(undefined4 *)(param_1 + 0xa10) = (undefined4)uStack_40;
    *(undefined4 *)(param_1 + 0xa14) = uStack_40._4_4_;
    if (*(longlong *)(param_1 + 0xb50) == 0) {
      local_48 = FUN_148d64fd6;
      uStack_40 = uStack_40 & 0xffffffff00000000;
      FUN_14662b980(*(longlong *)(param_1 + 0xac8) + 0x4ad8,&local_50,param_1);
      *(undefined8 *)(param_1 + 0xb50) = local_50;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d647be FUN_148d647be body=535 status=ok
// SIG undefined FUN_148d647be(void)

void FUN_148d647be(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((*(char *)(param_1 + 0xac1) == '\x03') && (0.0 < *(float *)(param_1 + 0xa68))) &&
      (*(longlong *)(param_1 + 0xa90) != 0)) && (*(longlong *)(param_1 + 0xac8) != 0)) {
    local_60 = *(undefined8 *)(*(longlong *)(param_1 + 0xa90) + 0x30);
    FUN_1446dcdd4(&local_58);
    if (DAT_14cb7d760 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_144837462(DAT_14cb7d760,&local_58);
    }
    if (CONCAT44(uStack_3c,uStack_40) != 0) {
      FUN_1400020a8();
    }
    if (param_2 == '\0') {
      uVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xac8) + 0x3a20) + 0x10))
                        (*(longlong *)(param_1 + 0xac8) + 0x3a20);
      local_58 = (code *)0x0;
      uStack_50 = 0;
      uStack_3c = CONCAT31(uStack_3c._1_3_,0xff);
      uStack_40 = 0;
      local_48 = 0;
      FUN_14493679e(uVar3,&local_58,uVar2,1);
    }
    else {
      uVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xac8) + 0x3a20) + 0x10))
                        (*(longlong *)(param_1 + 0xac8) + 0x3a20);
      FUN_14036c7e6(uVar3,&local_58,uVar2,1);
    }
    *(undefined4 *)(param_1 + 0x9d8) = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0x9dc) = local_48._4_4_;
    *(undefined4 *)(param_1 + 0x9e0) = uStack_40;
    *(undefined4 *)(param_1 + 0x9e4) = uStack_3c;
    *(undefined4 *)(param_1 + 0x9c8) = (undefined4)local_58;
    *(undefined4 *)(param_1 + 0x9cc) = local_58._4_4_;
    *(undefined4 *)(param_1 + 0x9d0) = (undefined4)uStack_50;
    *(undefined4 *)(param_1 + 0x9d4) = uStack_50._4_4_;
    if (*(longlong *)(param_1 + 0xb40) == 0) {
      cVar1 = *(char *)(*(longlong *)(param_1 + 0xa90) + 0x78);
      if (cVar1 == '\0') {
        lVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xac8) + 0x10a0) + 0x20))
                          (*(longlong *)(param_1 + 0xac8) + 0x10a0);
        if (lVar4 == 0) goto LAB_148d648fe;
        lVar4 = lVar4 + 0xf8;
      }
      else {
        if (cVar1 == '\x01') {
          lVar4 = 0x4ad8;
        }
        else {
          if (cVar1 != '\x02') goto LAB_148d648fe;
          lVar4 = 0x4af0;
        }
        lVar4 = lVar4 + *(longlong *)(param_1 + 0xac8);
      }
      uStack_50 = uStack_50 & 0xffffffff00000000;
      local_58 = FUN_148d64bd4;
      FUN_14662b980(lVar4,&local_60,param_1);
      *(undefined8 *)(param_1 + 0xb40) = local_60;
    }
  }
LAB_148d648fe:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d649d6 FUN_148d649d6 body=227 status=ok
// SIG undefined FUN_148d649d6(void)

void FUN_148d649d6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if ((((*(char *)(param_1 + 0xab0) == '\x01') && (*(char *)(param_1 + 0xac1) == '\x03')) &&
      (0.0 < *(float *)(param_1 + 0xa68))) &&
     ((*(longlong *)(param_1 + 0xa90) != 0 && (*(longlong *)(param_1 + 0xac8) != 0)))) {
    cVar4 = FUN_14486ea84(param_1 + 0x9c8);
    if (cVar4 != '\0') {
      uVar5 = FUN_14008e0ae(param_1 + 0x9c8);
      FUN_1409d461e(uVar5,0,1);
    }
    iVar1 = *(int *)(param_1 + 0x970);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x968);
      lVar6 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar6);
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x2c8) == DAT_14cbcc6d8)) {
          FUN_148d49086(lVar3,0);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
    *(undefined8 *)(param_1 + 0xaa8) = 0;
    *(undefined1 *)(param_1 + 0xab0) = 0;
  }
  return;
}



// FUNCTION 148d64aba FUN_148d64aba body=176 status=ok
// SIG undefined FUN_148d64aba(void)

void FUN_148d64aba(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0xac1) != '\x03') {
    return;
  }
  if (*(float *)(param_1 + 0xa68) <= 0.0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xa90) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xb40) == 0) {
    return;
  }
  cVar1 = *(char *)(*(longlong *)(param_1 + 0xa90) + 0x78);
  if (cVar1 == '\x02') {
    lVar2 = 0x4af0;
LAB_148d64b4d:
    lVar2 = lVar2 + *(longlong *)(param_1 + 0xac8);
  }
  else {
    if (cVar1 == '\x01') {
      lVar2 = 0x4ad8;
      goto LAB_148d64b4d;
    }
    if (((cVar1 != '\0') ||
        (lVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xac8) + 0x10a0) + 0x20))
                           (*(longlong *)(param_1 + 0xac8) + 0x10a0), lVar2 == 0)) ||
       (*(longlong *)(param_1 + 0xb40) == 0)) goto LAB_148d64b59;
    lVar2 = lVar2 + 0xf8;
  }
  FUN_14480f766(lVar2);
LAB_148d64b59:
  *(undefined8 *)(param_1 + 0xb40) = 0;
  return;
}



// FUNCTION 148d64b6a FUN_148d64b6a body=98 status=ok
// SIG undefined FUN_148d64b6a(void)

void FUN_148d64b6a(longlong param_1)

{
  if ((((*(char *)(param_1 + 0xac1) == '\x01') && (0 < *(int *)(param_1 + 0xa50))) &&
      (0.0 < *(float *)(param_1 + 0xa80))) &&
     ((*(longlong *)(param_1 + 0xac8) != 0 && (*(longlong *)(param_1 + 0xb50) != 0)))) {
    FUN_14480f766(*(longlong *)(param_1 + 0xac8) + 0x4ad8);
  }
  FUN_140609c6a(param_1 + 0xa08);
  return;
}



// FUNCTION 148d64bcc FUN_148d64bcc body=7 status=ok
// SIG undefined FUN_148d64bcc(void)

undefined1 FUN_148d64bcc(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xac1);
}



// FUNCTION 148d64bd4 FUN_148d64bd4 body=1025 status=ok
// SIG undefined FUN_148d64bd4(void)

void FUN_148d64bd4(longlong param_1,longlong *param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar8 = param_1 + 0x9c8;
  cVar5 = FUN_14486ea84(lVar8);
  if (((((cVar5 != '\0') && (*(char *)(param_1 + 0xac1) == '\x03')) &&
       (0.0 < *(float *)(param_1 + 0xa68))) &&
      ((*(longlong *)(param_1 + 0xa90) != 0 && (*(char *)(param_1 + 0xab0) == '\0')))) &&
     (*(longlong *)(param_1 + 0xac8) != 0)) {
    lVar6 = FUN_14008e0ae(lVar8);
    fVar12 = *(float *)(lVar6 + 200);
    cVar5 = *(char *)(*(longlong *)(param_1 + 0xa90) + 0x78);
    if (cVar5 == '\x02') {
      fVar13 = *(float *)(*(longlong *)(param_1 + 0xa90) + 0x84) + 0.0;
    }
    else if (cVar5 == '\x01') {
      lVar6 = (**(code **)(*param_2 + 8))(param_2);
      if ((longlong)*(int *)(lVar6 + 0xe8) == 0) {
        fVar13 = 0.0;
      }
      else {
        fVar13 = 0.0;
        lVar9 = 0;
        do {
          fVar1 = *(float *)(*(longlong *)(lVar6 + 0xe0) + 0x18 + lVar9);
          uVar11 = -(uint)(0.0001 < fVar1);
          fVar13 = (float)(~uVar11 & (uint)fVar13 | (uint)(fVar13 + fVar1) & uVar11);
          lVar9 = lVar9 + 0x20;
        } while ((longlong)*(int *)(lVar6 + 0xe8) * 0x20 != lVar9);
      }
      fVar13 = fVar13 * *(float *)(*(longlong *)(param_1 + 0xa90) + 0x7c);
    }
    else {
      fVar13 = 0.0;
      if (cVar5 == '\0') {
        lVar6 = (**(code **)(*param_2 + 8))(param_2);
        if ((longlong)*(int *)(lVar6 + 0xe8) == 0) {
          fVar13 = 0.0;
        }
        else {
          fVar13 = 0.0;
          lVar9 = 0;
          do {
            fVar1 = *(float *)(*(longlong *)(lVar6 + 0xe0) + 0x18 + lVar9);
            uVar11 = -(uint)(0.0001 < fVar1);
            fVar13 = (float)(~uVar11 & (uint)fVar13 | (uint)(fVar13 + fVar1) & uVar11);
            lVar9 = lVar9 + 0x20;
          } while ((longlong)*(int *)(lVar6 + 0xe8) * 0x20 != lVar9);
        }
        fVar13 = fVar13 * *(float *)(*(longlong *)(param_1 + 0xa90) + 0x80);
      }
    }
    uVar7 = FUN_14008e0ae(lVar8);
    FUN_1409d461e(uVar7,fVar12 + fVar13,1);
    lVar8 = FUN_14008e0ae(lVar8);
    fVar12 = *(float *)(lVar8 + 0x30) - *(float *)(lVar8 + 0x24);
    fVar12 = (float)(-(uint)(fVar12 != 0.0) &
                    (uint)((*(float *)(lVar8 + 200) - *(float *)(lVar8 + 0x24)) / fVar12));
    iVar3 = *(int *)(param_1 + 0x970);
    if ((longlong)iVar3 == 0) {
      bVar10 = false;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x968);
      lVar6 = 0;
      bVar10 = false;
      do {
        lVar9 = *(longlong *)(lVar8 + lVar6);
        if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x2c8) == DAT_14cbcc6d8)) {
          FUN_148d49086(lVar9,fVar12);
          bVar10 = true;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar3 * 8 != lVar6);
    }
    if (1.0 <= fVar12) {
      *(undefined1 *)(param_1 + 0xab0) = 1;
      FUN_1447f69b6(&DAT_00005108 + *(longlong *)(param_1 + 0xac8));
      if (bVar10) {
        cVar5 = FUN_140226bbe(*(undefined8 *)(param_1 + 0xac8));
        if (cVar5 == '\0') {
          FUN_1413347e6(*(undefined8 *)(param_1 + 0xac8),1);
        }
        else {
          local_d8 = (undefined2 *)0x0;
          FUN_140b32deb(&local_c8,*(undefined8 *)(param_1 + 0xac8),
                        *(longlong *)(param_1 + 0xa90) + 0x48,0);
          local_c8 = 0;
          local_c0 = 0xffffffffffffffff;
        }
      }
      uVar7 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0xac8));
      uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0xa90) + 0x88);
      local_b0 = (undefined8 *)0x0;
      local_a8 = 0;
      FUN_1446efa72(&local_b0,0,3,0x10);
      puVar4 = local_b0;
      local_a8 = 3;
      *local_b0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      local_b0[2] = lVar6;
      *local_b0 = &PTR_FUN_14b9789c0;
      local_b0[3] = 0;
      FUN_14485c47a(local_b0 + 3,param_1);
      *(undefined4 *)(puVar4 + 5) = 0;
      puVar4[4] = FUN_148d649d6;
      local_98 = 0;
      local_90 = 0;
      FUN_14487d8d8(&local_98,&local_b0);
      local_58 = 1;
      local_d8 = local_a0;
      local_a0[0] = 0;
      local_9c = 0xbf800000;
      FUN_1406f4044(uVar7,param_1 + 0xaa8,&local_98,uVar2);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
      FUN_1449db362(&local_b0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d64fd6 FUN_148d64fd6 body=423 status=ok
// SIG undefined FUN_148d64fd6(void)

void FUN_148d64fd6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  
  cVar4 = FUN_14486ea84(param_1 + 0x9a8);
  if (cVar4 != '\0') {
    lVar1 = param_1 + 0xa08;
    cVar4 = FUN_14486ea84(lVar1);
    if ((cVar4 != '\0') && (*(longlong *)(param_1 + 0xac8) != 0)) {
      lVar5 = (**(code **)(*param_2 + 8))(param_2);
      fVar9 = 0.0;
      if ((longlong)*(int *)(lVar5 + 0xe8) != 0) {
        fVar9 = 0.0;
        lVar7 = 0;
        do {
          fVar2 = *(float *)(*(longlong *)(lVar5 + 0xe0) + 0x18 + lVar7);
          uVar8 = -(uint)(0.0001 < fVar2);
          fVar9 = (float)(~uVar8 & (uint)fVar9 | (uint)(fVar9 + fVar2) & uVar8);
          lVar7 = lVar7 + 0x20;
        } while ((longlong)*(int *)(lVar5 + 0xe8) * 0x20 != lVar7);
      }
      fVar2 = *(float *)(param_1 + 0xa80);
      lVar5 = FUN_14008e0ae(lVar1);
      fVar3 = *(float *)(lVar5 + 200);
      uVar6 = FUN_14008e0ae(lVar1);
      FUN_1409d461e(uVar6,fVar9 * fVar2 + fVar3,1);
      lVar5 = FUN_14008e0ae(lVar1);
      fVar9 = *(float *)(lVar5 + 0x30) - *(float *)(lVar5 + 0x24);
      if (((fVar9 != 0.0) || (NAN(fVar9))) &&
         (1.0 <= (*(float *)(lVar5 + 200) - *(float *)(lVar5 + 0x24)) / fVar9)) {
        uVar6 = FUN_14008e0ae(param_1 + 0x9a8);
        FUN_1414f49d2(uVar6,0x3f800000,0,1);
        uVar6 = FUN_14008e0ae(lVar1);
        FUN_1409d461e(uVar6,0,1);
        if (*(char *)(param_1 + 0x178) == '\x03') {
          if (*(longlong *)(param_1 + 0xac8) != 0) {
            FUN_1447f69b6(*(longlong *)(param_1 + 0xac8) + 0x5068);
          }
          FUN_1447cd2ec(param_1 + 0x940,0);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148d65186 FUN_148d65186 body=47 status=ok
// SIG undefined FUN_148d65186(void)

longlong FUN_148d65186(longlong param_1,longlong param_2)

{
  FUN_144a79b68(param_2,*(undefined8 *)(param_1 + 0xa88));
  *(undefined4 *)(param_2 + 8) = 0x3002;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return param_2;
}



// FUNCTION 148d651b6 FUN_148d651b6 body=139 status=ok
// SIG undefined FUN_148d651b6(void)

longlong * FUN_148d651b6(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  
  if ((*param_1 == '\x03') && (plVar3 = *(longlong **)(param_1 + 0x10), plVar3 != (longlong *)0x0))
  {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_148d6522f;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 8);
    bVar9 = true;
    if (lVar4 != 0) {
      uVar8 = FUN_145db02e4();
      cVar6 = FUN_1448093f4(lVar4,uVar8);
      if (cVar6 != '\0') {
        *param_2 = lVar4;
        param_2[1] = (longlong)plVar3;
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        bVar9 = false;
      }
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
    if (!bVar9) {
      return param_2;
    }
  }
LAB_148d6522f:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148d6525a FUN_148d6525a body=318 status=ok
// SIG undefined FUN_148d6525a(void)

void FUN_148d6525a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < *(int *)(param_1 + 0x218)) {
    lVar5 = FUN_140db9ae4();
    if ((longlong)*(int *)(param_1 + 0x218) != 0) {
      plVar9 = *(longlong **)(param_1 + 0x210);
      plVar1 = plVar9 + *(int *)(param_1 + 0x218);
      do {
        local_40 = *(longlong *)(lVar5 + 0x20);
        if (*(int *)(lVar5 + 0x30) != *(int *)(lVar5 + 0x5c)) {
          lVar3 = *plVar9;
          uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
          uVar8 = (uint)lVar3 & 0xffff;
          lVar7 = *(longlong *)(lVar5 + 0x68);
          if (*(longlong *)(lVar5 + 0x68) == 0) {
            lVar7 = lVar5 + 0x60;
          }
          iVar6 = *(int *)(lVar7 + (ulonglong)
                                   (*(int *)(lVar5 + 0x70) - 1U &
                                   (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar8) +
                                   (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) * 4);
          if (iVar6 != -1) {
            do {
              plVar2 = (longlong *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar6 * 0x18);
              if (*plVar2 == lVar3) {
                if (plVar2 + 1 != (longlong *)0x0 && plVar2 != (longlong *)0x0) {
                  local_40 = plVar2[1];
                }
                break;
              }
              iVar6 = (int)plVar2[2];
            } while (iVar6 != -1);
          }
        }
        if (local_40 != 0) {
          FUN_140721fbe(param_2,&local_40);
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d6539a FUN_148d6539a body=193 status=ok
// SIG undefined FUN_148d6539a(void)

float FUN_148d6539a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = (float)FUN_1488e07cc();
  if (((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x1db) & 0x40) != 0) &&
     (lVar1 = *(longlong *)(param_1 + 0x188), lVar1 != 0)) {
    uVar3 = FUN_141262f1a();
    plVar4 = (longlong *)FUN_144718840(lVar1,uVar3);
    if ((plVar4 != (longlong *)0x0) && (*(longlong *)(param_1 + 200) != 0)) {
      lVar5 = FUN_144a7d050();
      lVar1 = *(longlong *)(param_1 + 200);
      if ((((lVar1 != 0) && (lVar5 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
         ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30)))) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4);
        fVar7 = (float)(**(code **)(*plVar4 + 8))(plVar4,*(undefined1 *)(lVar1 + 0xd44));
        fVar6 = fVar6 + fVar7 * 0.5;
      }
    }
  }
  return fVar6;
}



// FUNCTION 148d6545c FUN_148d6545c body=26 status=ok
// SIG undefined FUN_148d6545c(void)

void FUN_148d6545c(undefined8 param_1,longlong param_2)

{
  FUN_1488dfbf0();
  *(byte *)(param_2 + 0xe1) = *(byte *)(param_2 + 0xe1) & 0xe7;
  return;
}



// FUNCTION 148d65476 FUN_148d65476 body=374 status=ok
// SIG undefined FUN_148d65476(void)

void FUN_148d65476(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  code *UNRECOVERED_JUMPTABLE;
  float fVar6;
  float fVar7;
  float fVar8;
  
  FUN_1488e0fee();
  if ((*(ushort *)(param_1 + 0x2ea) >> 0xc & 1) != 0) {
    FUN_148d655ec(param_1,param_2,0);
    return;
  }
  if ((*(ushort *)(param_1 + 0x2ea) >> 0xb & 1) != 0) {
    fVar6 = (float)FUN_1488df860(param_1);
    lVar5 = *(longlong *)(param_1 + 200);
    if (lVar5 != 0) {
      uVar3 = FUN_1409d6582();
      plVar4 = (longlong *)FUN_144718840(lVar5,uVar3);
      if (plVar4 != (longlong *)0x0) {
        cVar1 = FUN_1488dfa02(param_1,1);
        if (cVar1 == '\0') {
          fVar7 = (float)(**(code **)(*plVar4 + 0x40))(plVar4);
          fVar8 = (float)(**(code **)(*plVar4 + 0x38))(plVar4);
          if (fVar6 < fVar8 + fVar7) {
            return;
          }
        }
        iVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
        if (iVar2 == 2) {
          if ((cVar1 == '\0') &&
             (lVar5 = (**(code **)(*param_3 + 8))(param_3), (*(byte *)(lVar5 + 0x7c) & 1) == 0)) {
            return;
          }
          (**(code **)(*plVar4 + 0x68))(plVar4,param_2);
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x60);
          uVar3 = 2;
        }
        else {
          if (iVar2 != 1) {
            return;
          }
          if ((cVar1 == '\0') &&
             (lVar5 = (**(code **)(*param_3 + 8))(param_3), (*(byte *)(lVar5 + 0x7c) & 1) == 0)) {
            return;
          }
          fVar6 = (float)(**(code **)(*plVar4 + 0x30))(plVar4);
          FUN_148d655ec(param_1,param_2,0.0001 < fVar6);
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x60);
          uVar3 = 1;
        }
                    /* WARNING: Could not recover jumptable at 0x000148d655e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar4,uVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d655ec FUN_148d655ec body=2582 status=ok
// SIG undefined FUN_148d655ec(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148d655ec(longlong *param_1,longlong param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *******ppppppplVar3;
  int iVar4;
  byte bVar5;
  longlong ******pppppplVar6;
  longlong ******pppppplVar7;
  longlong *******ppppppplVar8;
  undefined8 *******pppppppuVar9;
  undefined1 uVar10;
  int iVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *****ppppplVar17;
  longlong *******ppppppplVar18;
  longlong *plVar19;
  longlong *******ppppppplVar20;
  bool bVar21;
  float fVar22;
  undefined1 auStack_718 [32];
  undefined8 *local_6f8;
  longlong *local_6f0;
  undefined4 local_6e8;
  undefined8 local_6e0;
  undefined4 *local_6d8;
  int local_6d0;
  undefined4 local_6c8;
  undefined1 local_6c0;
  undefined4 local_6b8;
  longlong local_6b0;
  undefined4 local_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  longlong ******local_678;
  longlong *******local_670;
  longlong *******local_668;
  undefined1 local_65c [4];
  undefined8 *******local_658;
  longlong *plStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 local_608;
  undefined8 local_5f8;
  undefined8 local_5c8;
  undefined8 local_5b8;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined4 local_558;
  undefined4 local_554;
  undefined4 local_550;
  longlong local_348;
  undefined4 local_340;
  undefined2 local_328;
  undefined1 local_320;
  char local_318;
  longlong local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined2 local_2f0;
  undefined1 local_2e8;
  byte local_2e0;
  longlong local_2d8 [5];
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a4;
  undefined4 local_29c;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_254;
  undefined4 local_24c;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined4 local_1ec;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d0;
  undefined4 local_1a8;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_718;
  if (((char)param_1[0x130] == '\0') && (lVar15 = param_1[0x19], lVar15 != 0)) {
    uVar12 = FUN_1409d6582();
    plVar13 = (longlong *)FUN_144718840(lVar15,uVar12);
    if ((plVar13 != (longlong *)0x0) &&
       (plVar14 = (longlong *)(**(code **)(*plVar13 + 0x18))(plVar13), plVar14 != (longlong *)0x0))
    {
      lVar15 = (**(code **)(*plVar14 + 8))(plVar14);
      lVar16 = FUN_140ff140e();
      if (((lVar16 != 0) && (*(int *)(lVar16 + 0x38) <= *(int *)(lVar15 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) ==
          lVar16 + 0x30)) {
        if ((plVar14[4] != 0) && ((int)plVar14[5] - 1U < 0xfffffffe)) {
          uVar12 = (**(code **)(*param_1 + 0x180))(param_1);
          FUN_1407f7f84(&local_658,uVar12);
          if (plStack_650 != (longlong *)0x0) {
            iVar11 = (int)plStack_650[1];
            do {
              if (iVar11 == 0) {
                plVar19 = (longlong *)0x0;
                break;
              }
              LOCK();
              iVar4 = (int)plStack_650[1];
              bVar21 = iVar11 == iVar4;
              if (bVar21) {
                *(int *)(plStack_650 + 1) = iVar11 + 1;
                iVar4 = iVar11;
              }
              iVar11 = iVar4;
              UNLOCK();
              plVar19 = plStack_650;
            } while (!bVar21);
            LOCK();
            piVar1 = (int *)((longlong)plStack_650 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plStack_650 + 0x10))();
            }
            pppppppuVar9 = local_658;
            if (plVar19 != (longlong *)0x0) {
              if (local_658 != (undefined8 *******)0x0) {
                local_628 = 0;
                uStack_620 = 0;
                local_638 = 0;
                uStack_630 = 0;
                local_648 = 0;
                uStack_640 = 0;
                local_658 = (undefined8 *******)0x0;
                plStack_650 = (longlong *)0x0;
                local_618 = CONCAT44(local_618._4_4_,0xc0);
                local_608 = 0;
                local_5f8 = 0;
                local_5c8 = 0;
                local_5b8 = 0;
                local_588 = 0;
                uStack_580 = 0;
                local_578 = 0;
                local_570 = 0x3ff0000000000000;
                local_568 = 0x3ff0000000000000;
                local_560 = 0x3ff0000000000000;
                local_558 = 0;
                local_550 = 0;
                local_554 = (undefined4)param_1[0x49];
                lVar15 = param_1[0x31];
                local_310 = plVar14[4];
                FUN_1446dcdd4(local_2d8);
                if (((DAT_14cb78ff0 != 0) &&
                    (lVar16 = FUN_144837462(DAT_14cb78ff0,local_2d8), lVar15 != 0)) && (lVar16 != 0)
                   ) {
                  local_6f0 = &DAT_14cb7bc40;
                  local_6e8 = 0;
                  local_6f8 = (undefined8 *)CONCAT71(local_6f8._1_7_,1);
                  FUN_1408f2522(pppppppuVar9,lVar16,lVar15,param_2);
                }
                if (local_2d8[3] != 0) {
                  FUN_1400020a8();
                }
                FUN_141466e9a(&local_658);
              }
              LOCK();
              plVar2 = plVar19 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar19)(plVar19);
                LOCK();
                piVar1 = (int *)((longlong)plVar19 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar19 + 0x10))(plVar19);
                }
              }
            }
          }
        }
        lVar15 = FUN_1407a0dc0(plVar14 + 9);
        if (lVar15 != 0) {
          local_2b0 = 0;
          local_2a8 = 0;
          local_2d8[0] = 0;
          local_2d8[1] = 0;
          local_2d8[2] = 0;
          local_2a4 = 0xffffffff00000080;
          local_29c = 0;
          local_290 = 0;
          local_288 = 0;
          local_260 = 0;
          local_258 = 0;
          local_280 = 0;
          uStack_278 = 0;
          local_254 = 0xffffffff00000080;
          local_24c = 0;
          local_240 = 0;
          local_238 = 0;
          local_230 = 0;
          local_228 = 0xffffffff00000000;
          local_200 = 0;
          local_1f8 = 0;
          local_220 = 0;
          uStack_218 = 0;
          local_1f4 = 0xffffffff00000080;
          local_1ec = 0;
          local_1e0 = 0;
          local_1d8 = 0;
          local_1d0 = 0;
          local_1a8 = 0;
          local_180 = 0;
          local_178 = 0x200000000;
          local_168 = 0;
          local_160 = 0;
          uStack_15c = 0x20;
          uStack_158 = 0xffffffff;
          uStack_154 = 0;
          local_148 = 0;
          local_140 = 0;
          local_118 = 0;
          local_110 = 0x200000000;
          local_100 = 0;
          local_f8 = 0;
          uStack_f4 = 0x20;
          uStack_f0 = 0xffffffff;
          uStack_ec = 0;
          local_e0 = 0;
          local_d8 = 0;
          local_b0 = 0;
          local_a8 = 0x200000000;
          local_98 = 0;
          local_90 = 0;
          uStack_8c = 0x20;
          uStack_88 = 0xffffffff;
          uStack_84 = 0;
          local_78 = 0;
          local_70 = 0;
          local_68 = 0;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar15);
          }
          local_2f8 = *(undefined8 *)(param_2 + 0x38);
          plStack_650 = &local_310;
          local_308 = *(undefined8 *)(param_2 + 0x28);
          uStack_300 = *(undefined8 *)(param_2 + 0x30);
          local_310 = 0;
          local_2f0 = 0x18;
          local_2e8 = 4;
          local_2e0 = (byte)~DAT_14c9a8994 >> 3 & 4;
          local_340 = (undefined4)plVar14[0xe];
          local_348 = 0;
          local_328 = 4;
          local_320 = 3;
          local_318 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
          local_658 = &local_670;
          local_670 = (longlong *******)DAT_14cb89e10;
          local_2d8[0] = lVar15;
          FUN_140ffad64(local_2d8 + 1,&local_678,&local_658,0);
          local_658 = &local_670;
          local_670 = (longlong *******)DAT_14cb89e18;
          plStack_650 = &local_348;
          FUN_140ffad64(local_2d8 + 1,&local_678,&local_658,0);
          local_6b0 = param_2 + 0xb8;
          uVar12 = FUN_14485cccc();
          local_658 = (undefined8 *******)0x0;
          plStack_650 = (longlong *)0x0;
          local_638 = CONCAT62(local_638._2_6_,8);
          FUN_14485c47a(&plStack_650,uVar12);
          uStack_630 = CONCAT71(uStack_630._1_7_,7);
          uVar10 = 7;
          if ((DAT_14c9a8cf4 & 0x20) != 0) {
            uVar10 = 0;
          }
          local_628 = CONCAT71(local_628._1_7_,uVar10);
          local_670 = &local_678;
          local_678 = DAT_14cb89e20;
          local_668 = (longlong *******)&local_658;
          FUN_140ff1448(local_2d8 + 1,local_65c,&local_670,0);
          FUN_144a2da94(&local_658);
          FUN_140ff15b2(local_2d8);
          (**(code **)(*param_1 + 0x2c0))(param_1,&local_678,1);
          if ((local_678[1] != (longlong *****)param_1[0x16]) ||
             (*(int *)(local_678 + 2) != (int)param_1[0x17])) {
            local_678[1] = (longlong *****)param_1[0x16];
            *(int *)(local_678 + 2) = (int)param_1[0x17];
            local_678[3] = (longlong *****)0x0;
          }
          ppppplVar17 = (longlong *****)FUN_14485cccc(local_6b0);
          pppppplVar6 = local_678;
          if (ppppplVar17 != (longlong *****)0x0 && DAT_14c950c29 == 1) {
            FUN_1456cec3c(ppppplVar17);
          }
          pppppplVar7 = local_678;
          bVar5 = DAT_14c950c29;
          pppppplVar6[4] = ppppplVar17;
          local_678[6] = *(longlong ******)(param_2 + 0xf0);
          ppppplVar17 = (longlong *****)param_1[0x31];
          if ((ppppplVar17 != (longlong *****)0x0) && ((bVar5 & 1) != 0)) {
            FUN_1456cec3c(ppppplVar17);
          }
          pppppplVar7[0x1d] = ppppplVar17;
          fVar22 = (float)(**(code **)(*plVar13 + 0x28))(plVar13);
          *(float *)(local_678 + 0x1f) = fVar22 * *(float *)(local_678 + 0x1f);
          FUN_1405dc634(local_678 + 0x3b,plVar14 + 0x19);
          fVar22 = *(float *)((longlong)plVar14 + 0xc4);
          *(float *)((longlong)local_678 + 0x1d4) = fVar22;
          if ((fVar22 < 0.0001) && (lVar15 = FUN_1412af7d2(local_678 + 1), lVar15 != 0)) {
            fVar22 = *(float *)(lVar15 + 0x50);
            if (*(float *)(lVar15 + 0x50) <= *(float *)(param_1 + 0x12)) {
              fVar22 = *(float *)(param_1 + 0x12);
            }
            *(float *)((longlong)local_678 + 0x1d4) = fVar22;
          }
          pppppplVar6 = local_678;
          if (param_3 != '\0') {
            *(uint *)(local_678 + 0x1c) = *(uint *)(local_678 + 0x1c) | 0x1000;
            ppppplVar17 = (longlong *****)param_1[0x19];
            if ((ppppplVar17 != (longlong *****)0x0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(ppppplVar17);
            }
            pppppplVar6[4] = ppppplVar17;
          }
          if ((*(byte *)((longlong)param_1 + 0x2ea) & 2) != 0) {
            *(uint *)(local_678 + 0x1c) = *(uint *)(local_678 + 0x1c) | 2;
          }
          fVar22 = (float)(**(code **)(*plVar13 + 0x20))(plVar13);
          local_6a8 = (undefined4)plVar14[0xf];
          uStack_6a4 = *(undefined4 *)((longlong)plVar14 + 0x7c);
          uStack_6a0 = (undefined4)plVar14[0x10];
          uStack_69c = *(undefined4 *)((longlong)plVar14 + 0x84);
          local_698 = (undefined4)plVar14[0x11];
          uStack_694 = *(undefined4 *)((longlong)plVar14 + 0x8c);
          uStack_690 = (undefined4)plVar14[0x12];
          uStack_68c = *(undefined4 *)((longlong)plVar14 + 0x94);
          local_688 = (undefined4)plVar14[0x13];
          uStack_684 = *(undefined4 *)((longlong)plVar14 + 0x9c);
          uStack_680 = (undefined4)plVar14[0x14];
          uStack_67c = *(undefined4 *)((longlong)plVar14 + 0xa4);
          uVar12 = FUN_14485cccc();
          local_6b8 = 0;
          local_6c8 = 0;
          local_6f0 = local_2d8;
          local_6f8 = &DAT_14c8464f8;
          local_6c0 = 0;
          local_6e0 = 0;
          local_6e8 = CONCAT31(local_6e8._1_3_,2);
          local_6d8 = &local_6a8;
          local_6d0 = (int)ROUND(fVar22 + fVar22 + -0.5) >> 1;
          FUN_140ff1788(&local_658,param_1[0x31],param_2 + 0x28,uVar12);
          ppppppplVar18 = (longlong *******)FUN_14001cc68(0x368,0x10);
          ppppppplVar18[1] = (longlong ******)&DAT_100000001;
          *ppppppplVar18 = (longlong ******)&PTR_FUN_14b978a50;
          ppppppplVar3 = ppppppplVar18 + 2;
          FUN_1489379fe(ppppppplVar3,&local_658,&local_678);
          if (ppppppplVar18 != (longlong *******)0x0) {
            LOCK();
            *(int *)(ppppppplVar18 + 1) = *(int *)(ppppppplVar18 + 1) + 1;
            UNLOCK();
            LOCK();
            ppppppplVar20 = ppppppplVar18 + 1;
            *(int *)ppppppplVar20 = *(int *)ppppppplVar20 + -1;
            UNLOCK();
            if (*(int *)ppppppplVar20 == 0) {
              (*(code *)**ppppppplVar18)(ppppppplVar18);
              LOCK();
              piVar1 = (int *)((longlong)ppppppplVar18 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*ppppppplVar18)[2])(ppppppplVar18);
              }
            }
          }
          uVar12 = (**(code **)(*param_1 + 0x180))(param_1);
          FUN_140e67fb0(&local_670,uVar12);
          if (local_668 != (longlong *******)0x0) {
            iVar11 = *(int *)(local_668 + 1);
            do {
              if (iVar11 == 0) {
                ppppppplVar20 = (longlong *******)0x0;
                break;
              }
              LOCK();
              iVar4 = *(int *)(local_668 + 1);
              bVar21 = iVar11 == iVar4;
              if (bVar21) {
                *(int *)(local_668 + 1) = iVar11 + 1;
                iVar4 = iVar11;
              }
              iVar11 = iVar4;
              UNLOCK();
              ppppppplVar20 = local_668;
            } while (!bVar21);
            LOCK();
            piVar1 = (int *)((longlong)local_668 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*local_668)[2])();
            }
            ppppppplVar8 = local_670;
            if (ppppppplVar20 != (longlong *******)0x0) {
              if (local_670 != (longlong *******)0x0) {
                local_670 = ppppppplVar3;
                local_668 = ppppppplVar18;
                if (ppppppplVar18 == (longlong *******)0x0) {
                  FUN_140e67c44(ppppppplVar8,&local_670);
                }
                else {
                  LOCK();
                  *(int *)(ppppppplVar18 + 1) = *(int *)(ppppppplVar18 + 1) + 1;
                  UNLOCK();
                  FUN_140e67c44();
                  if (ppppppplVar18 != (longlong *******)0x0) {
                    LOCK();
                    ppppppplVar3 = ppppppplVar18 + 1;
                    *(int *)ppppppplVar3 = *(int *)ppppppplVar3 + -1;
                    UNLOCK();
                    if (*(int *)ppppppplVar3 == 0) {
                      (*(code *)**ppppppplVar18)(ppppppplVar18);
                      LOCK();
                      piVar1 = (int *)((longlong)ppppppplVar18 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (*(code *)(*ppppppplVar18)[2])(ppppppplVar18);
                      }
                    }
                  }
                }
              }
              LOCK();
              ppppppplVar3 = ppppppplVar20 + 1;
              *(int *)ppppppplVar3 = *(int *)ppppppplVar3 + -1;
              UNLOCK();
              if (*(int *)ppppppplVar3 == 0) {
                (*(code *)**ppppppplVar20)(ppppppplVar20);
                LOCK();
                piVar1 = (int *)((longlong)ppppppplVar20 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (*(code *)(*ppppppplVar20)[2])(ppppppplVar20);
                }
              }
            }
          }
          if (ppppppplVar18 != (longlong *******)0x0) {
            LOCK();
            ppppppplVar3 = ppppppplVar18 + 1;
            *(int *)ppppppplVar3 = *(int *)ppppppplVar3 + -1;
            UNLOCK();
            if (*(int *)ppppppplVar3 == 0) {
              (*(code *)**ppppppplVar18)(ppppppplVar18);
              LOCK();
              piVar1 = (int *)((longlong)ppppppplVar18 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*ppppppplVar18)[2])(ppppppplVar18);
              }
            }
          }
          local_618 = 0;
          FUN_14076ba36();
          if (local_678 != (longlong ******)0x0) {
            (*(code *)**local_678)(local_678,1);
          }
          FUN_144a2da94(&local_348);
          FUN_144a2da94(&local_310);
          local_2d8[0] = 0;
          FUN_14076ba36(local_2d8 + 1);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_718) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d6600a FUN_148d6600a body=1119 status=ok
// SIG undefined FUN_148d6600a(void)

void FUN_148d6600a(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_238 [32];
  undefined4 **local_218;
  undefined4 *local_210;
  undefined1 local_208 [8];
  longlong *local_200;
  longlong local_1f0;
  longlong *local_1e8;
  undefined4 local_1dc;
  undefined1 local_1d8;
  undefined1 uStack_1d7;
  undefined6 uStack_1d6;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_144a787a6(param_1 + 0x17);
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
  UNLOCK();
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (param_1[0x22] == 0) {
    lVar5 = FUN_1400b465c(param_1);
    if (lVar5 == 0) {
LAB_148d66089:
      local_1dc = 0;
    }
    else {
      lVar6 = FUN_1403ca142();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (local_1dc = 4,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
         != lVar6 + 0x30)) goto LAB_148d66089;
    }
    thunk_FUN_140a5071c(&local_1d8);
    local_210 = &local_1dc;
    FUN_1461a0246(local_208,0x173);
    FUN_145ff6f4a(local_208,&local_1f0,&local_1d8);
    plVar3 = local_1e8;
    if (local_1e8 == (longlong *)0x0) {
      param_1[0x22] = local_1f0;
      plVar9 = (longlong *)param_1[0x23];
      if (plVar9 != (longlong *)0x0) {
        param_1[0x23] = 0;
LAB_148d663e7:
        LOCK();
        plVar3 = plVar9 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x000148d66398:
          if (iVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_1e8 + 1) = (int)local_1e8[1] + 1;
      UNLOCK();
      param_1[0x22] = local_1f0;
      plVar9 = (longlong *)param_1[0x23];
      if (local_1e8 == plVar9) {
        LOCK();
        plVar9 = local_1e8 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_1e8)(local_1e8);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar9 = plVar3;
          goto joined_r0x000148d66398;
        }
      }
      else {
        param_1[0x23] = (longlong)local_1e8;
        if (plVar9 != (longlong *)0x0) goto LAB_148d663e7;
      }
    }
    plVar3 = local_1e8;
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_1e8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = local_200;
    if (local_200 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_200 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_200)(local_200);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_140a4ff8c(&local_1d8);
  }
  FUN_144a7e010(param_1 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0xa7) = 0;
  lVar5 = param_1[0x24];
  if (lVar5 != 0) goto LAB_148d6627e;
  FUN_148d2f1b2(&local_1d8);
  uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
  uVar8 = FUN_145866520(uVar7);
  uVar4 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  local_30 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  local_30 = local_30 >> 0x10 ^ local_30;
  local_218 = &local_210;
  FUN_148d352ca(local_208,"SOakCutsceneWidget",
                ".\\../../OakGame/Source/OakGame/LoadingScreen/OakLoadingScreenSubsystem.cpp",0x17b)
  ;
  FUN_148d2f1d2(local_208,&local_1f0,&local_1d8);
  plVar3 = local_1e8;
  if (local_1e8 == (longlong *)0x0) {
    param_1[0x24] = local_1f0;
    plVar9 = (longlong *)param_1[0x25];
    if (plVar9 != (longlong *)0x0) {
      param_1[0x25] = 0;
LAB_148d6641c:
      LOCK();
      plVar3 = plVar9 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000148d663d4:
        if (iVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_1e8 + 1) = (int)local_1e8[1] + 1;
    UNLOCK();
    param_1[0x24] = local_1f0;
    plVar9 = (longlong *)param_1[0x25];
    if (local_1e8 == plVar9) {
      LOCK();
      plVar9 = local_1e8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar9 = plVar3;
        goto joined_r0x000148d663d4;
      }
    }
    else {
      param_1[0x25] = (longlong)local_1e8;
      if (plVar9 != (longlong *)0x0) goto LAB_148d6641c;
    }
  }
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1e8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1e8)(local_1e8);
      LOCK();
      piVar1 = (int *)((longlong)local_1e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1e8 + 0x10))(local_1e8);
      }
    }
  }
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_200 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar1 = (int *)((longlong)local_200 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_200 + 0x10))(local_200);
      }
    }
  }
  FUN_140a4ff8c(&local_1d8);
  lVar5 = param_1[0x24];
LAB_148d6627e:
  if (*(longlong **)(lVar5 + 0x288) != (longlong *)0x0) {
    local_1d8 = DAT_14c96b238;
    uStack_1d7 = 1;
    local_1d0 = 0;
    uStack_1c8 = 0;
    (**(code **)(**(longlong **)(lVar5 + 0x288) + 0x1c0))();
    lVar5 = param_1[0x24];
  }
  FUN_144a5dc74(&local_1d8);
  FUN_140ac6c96(&DAT_14cbcc9d0,&local_1d8);
  FUN_148e810e8(lVar5);
  plVar3 = (longlong *)CONCAT62(uStack_1d6,CONCAT11(uStack_1d7,local_1d8));
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  memset(&local_1d8,0,0x118);
  lVar5 = FUN_1402735c8();
  FUN_148c212b2(&local_1d8,lVar5 + 0x200);
  FUN_148e8115c(param_1[0x24],&local_1d8);
  (**(code **)(*param_1 + 0x3b8))(param_1,0);
  FUN_145bd36b0(param_1);
  FUN_145ab9500(&local_1d8);
  if ((local_28 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6646e FUN_148d6646e body=97 status=ok
// SIG undefined FUN_148d6646e(void)

undefined8 * FUN_148d6646e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x110);
  plVar4 = *(longlong **)(param_1 + 0x118);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
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
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  return param_2;
}



// FUNCTION 148d664d0 FUN_148d664d0 body=95 status=ok
// SIG undefined FUN_148d664d0(void)

undefined8 * FUN_148d664d0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x120);
  plVar4 = *(longlong **)(param_1 + 0x128);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
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
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  return param_2;
}



// FUNCTION 148d66530 FUN_148d66530 body=95 status=ok
// SIG undefined FUN_148d66530(void)

undefined8 * FUN_148d66530(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x130);
  plVar4 = *(longlong **)(param_1 + 0x138);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
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
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  return param_2;
}



// FUNCTION 148d665c6 FUN_148d665c6 body=231 status=ok
// SIG undefined FUN_148d665c6(void)

void FUN_148d665c6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  FUN_148aef93e();
  lVar6 = FUN_1400b465c(param_1);
  if (lVar6 != 0) {
    lVar4 = *(longlong *)(param_2 + 0x20);
    plVar7 = *(longlong **)(param_2 + 0x30);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    if ((longlong)*(int *)(param_1 + 0x148) == 0) {
      bVar5 = true;
    }
    else {
      lVar8 = 0;
      do {
        bVar9 = *(longlong *)(*(longlong *)(param_1 + 0x140) + lVar8) == lVar4;
        bVar5 = !bVar9;
        if (bVar9) break;
        bVar9 = (longlong)*(int *)(param_1 + 0x148) * 0x18 + -0x18 != lVar8;
        lVar8 = lVar8 + 0x18;
      } while (bVar9);
    }
    if (plVar7 != (longlong *)0x0) {
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
    if ((!bVar5) && (plVar7 = (longlong *)FUN_140fe13cc(lVar6,0), plVar7 != (longlong *)0x0)) {
      lVar6 = FUN_144a5dd5e();
      iVar3 = *(int *)(lVar6 + 0x38);
      if ((iVar3 <= *(int *)(plVar7[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)iVar3 * 8) == lVar6 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000148d666aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0xc00))(plVar7,CONCAT71((int7)(int3)((uint)iVar3 >> 8),1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d666ae FUN_148d666ae body=231 status=ok
// SIG undefined FUN_148d666ae(void)

void FUN_148d666ae(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  FUN_148aefae4();
  lVar5 = FUN_1400b465c(param_1);
  if (lVar5 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x20);
    plVar6 = *(longlong **)(param_2 + 0x30);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    if ((longlong)*(int *)(param_1 + 0x148) == 0) {
      bVar4 = true;
    }
    else {
      lVar7 = 0;
      do {
        bVar8 = *(longlong *)(*(longlong *)(param_1 + 0x140) + lVar7) == lVar3;
        bVar4 = !bVar8;
        if (bVar8) break;
        bVar8 = (longlong)*(int *)(param_1 + 0x148) * 0x18 + -0x18 != lVar7;
        lVar7 = lVar7 + 0x18;
      } while (bVar8);
    }
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
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if ((!bVar4) && (plVar6 = (longlong *)FUN_140fe13cc(lVar5,0), plVar6 != (longlong *)0x0)) {
      lVar5 = FUN_144a5dd5e();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000148d66792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0xc00))(plVar6,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d66796 FUN_148d66796 body=26 status=ok
// SIG undefined FUN_148d66796(void)

void FUN_148d66796(undefined8 param_1)

{
  FUN_141212332();
  FUN_148d667b0(param_1);
  return;
}



// FUNCTION 148d667b0 FUN_148d667b0 body=90 status=ok
// SIG undefined FUN_148d667b0(void)

void FUN_148d667b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = *(longlong **)(param_1 + 0xe10);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))();
    lVar3 = FUN_1465e2a08();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
      goto LAB_148d667e7;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_148d667e7:
  *(longlong **)(param_1 + 0x2f30) = plVar4;
  return;
}



// FUNCTION 148d6680a FUN_148d6680a body=362 status=ok
// SIG undefined FUN_148d6680a(void)

void FUN_148d6680a(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141311fa8();
  lVar2 = *(longlong *)(param_1 + 0x1c8);
  if (lVar2 == 0) {
    puVar6 = &DAT_14c8464e0;
    uVar9 = (undefined4)DAT_14c8464f0;
    uVar10 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar9 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
    uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
    puVar6 = (undefined8 *)(lVar2 + 0x260);
  }
  uVar3 = *(undefined4 *)((longlong)puVar6 + 4);
  uVar4 = *(undefined4 *)(puVar6 + 1);
  uVar5 = *(undefined4 *)((longlong)puVar6 + 0xc);
  *(undefined4 *)(param_1 + 0x2f38) = *(undefined4 *)puVar6;
  *(undefined4 *)(param_1 + 0x2f3c) = uVar3;
  *(undefined4 *)(param_1 + 0x2f40) = uVar4;
  *(undefined4 *)(param_1 + 0x2f44) = uVar5;
  *(ulonglong *)(param_1 + 0x2f48) = CONCAT44(uVar10,uVar9);
  lVar2 = *(longlong *)(param_1 + 0x2f30);
  if (*(char *)(lVar2 + 0xd50) == '\0') {
    *(undefined1 *)(param_1 + 0x2f54) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
  }
  if (0 < *(int *)(lVar2 + 0xd60)) {
    lVar7 = (longlong)*(int *)(param_1 + 0x2f50);
    lVar2 = *(longlong *)(lVar2 + 0xd58);
    local_50 = *(undefined8 *)(lVar2 + lVar7 * 0x28);
    puVar1 = (undefined4 *)(lVar2 + 8 + lVar7 * 0x28);
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    local_38 = (void *)0x0;
    local_30 = *(int *)(lVar2 + 0x20 + lVar7 * 0x28);
    lVar8 = (longlong)local_30;
    _Src = *(void **)(lVar2 + 0x18 + lVar7 * 0x28);
    if (lVar8 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,local_30,0);
      memcpy(local_38,_Src,lVar8 * 2);
    }
    FUN_1487c242a(param_1,&local_50,1,2);
    *(int *)(param_1 + 0x2f50) = *(int *)(param_1 + 0x2f50) + 1;
  }
  local_68 = FUN_148d66a8a;
  local_60 = 0;
  FUN_148d6698a(param_1 + 0x1600,local_58,param_1);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6698a FUN_148d6698a body=254 status=ok
// SIG undefined FUN_148d6698a(void)

undefined8
FUN_148d6698a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14a3a3510;
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
  *local_48 = &PTR_FUN_14b978db0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14490d954(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d66a8a FUN_148d66a8a body=289 status=ok
// SIG undefined FUN_148d66a8a(void)

void FUN_148d66a8a(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x2f54) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  iVar3 = *(int *)(param_1 + 0x2f50);
  lVar2 = *(longlong *)(param_1 + 0x2f30);
  iVar5 = *(int *)(lVar2 + 0xd60);
  if (iVar5 <= iVar3) {
    *(undefined4 *)(param_1 + 0x2f50) = 0;
    iVar5 = *(int *)(lVar2 + 0xd60);
    iVar3 = 0;
  }
  if (0 < iVar5) {
    lVar2 = *(longlong *)(lVar2 + 0xd58);
    lVar4 = (longlong)iVar3;
    local_50 = *(undefined8 *)(lVar2 + lVar4 * 0x28);
    puVar1 = (undefined4 *)(lVar2 + 8 + lVar4 * 0x28);
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    local_38 = (void *)0x0;
    local_30 = *(int *)(lVar2 + 0x20 + lVar4 * 0x28);
    lVar6 = (longlong)local_30;
    _Src = *(void **)(lVar2 + 0x18 + lVar4 * 0x28);
    if (lVar6 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,local_30,0);
      memcpy(local_38,_Src,lVar6 * 2);
    }
    FUN_1487c242a(param_1,&local_50,1,2);
    iVar3 = *(int *)(param_1 + 0x2f50);
  }
  *(int *)(param_1 + 0x2f50) = iVar3 + 1;
  *(undefined1 *)(param_1 + 0x1730) = 0;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d66bc0 FUN_148d66bc0 body=14 status=ok
// SIG undefined FUN_148d66bc0(void)

void FUN_148d66bc0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2f54) = param_2;
  *(undefined1 *)(param_1 + 0x1730) = 0;
  return;
}



// FUNCTION 148d66bce FUN_148d66bce body=148 status=ok
// SIG undefined FUN_148d66bce(void)

void FUN_148d66bce(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  code *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined2 *)((longlong)param_1 + 0x2f54) = 0x100;
  *(undefined1 *)(param_1 + 0x2e6) = 0;
  (**(code **)(*param_1 + 0x6e0))(param_1,3);
  local_38 = 1;
  FUN_14140fb6c(param_1,param_2,1,1);
  local_30 = FUN_148d66c64;
  local_28 = 0;
  FUN_148d6698a(param_1 + 0x2c0,local_20,param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d66c64 FUN_148d66c64 body=12 status=ok
// SIG undefined FUN_148d66c64(void)

void FUN_148d66c64(longlong param_1)

{
  FUN_148c2e4df(param_1 + 0x2f20);
  return;
}



// FUNCTION 148d66c70 FUN_148d66c70 body=38 status=ok
// SIG undefined FUN_148d66c70(void)

undefined8 FUN_148d66c70(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d66c96 FUN_148d66c96 body=38 status=ok
// SIG undefined FUN_148d66c96(void)

undefined8 FUN_148d66c96(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d66cc2 FUN_148d66cc2 body=49 status=ok
// SIG undefined FUN_148d66cc2(void)

undefined8 * FUN_148d66cc2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b977740;
  if (*(char *)((longlong)param_1 + 0x29) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x29) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d66cf4 FUN_148d66cf4 body=179 status=ok
// SIG undefined FUN_148d66cf4(void)

void FUN_148d66cf4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar5 = *(char *)(param_1 + 0x29);
  if (cVar5 == '\x01') {
    **(undefined1 **)(param_1 + 8) = *(undefined1 *)(param_1 + 0x28);
    local_40 = 0;
    FUN_14485c47a(&local_40,*(undefined8 *)(param_1 + 0x20));
    uVar4 = local_40;
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    iVar2 = *(int *)(param_2 + 0x58);
    lVar7 = (longlong)iVar2;
    *(uint *)(param_2 + 0x58) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
      FUN_14579eadc(param_2,iVar2);
    }
    lVar6 = *(longlong *)(param_2 + 0x50);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      lVar6 = param_2;
    }
    *(undefined8 *)(lVar6 + lVar7 * 0x14) = uVar3;
    *(undefined4 *)(lVar6 + 8 + lVar7 * 0x14) = uVar1;
    *(undefined8 *)(lVar6 + 0xc + lVar7 * 0x14) = uVar4;
    cVar5 = *(char *)(param_1 + 0x29);
  }
  *(char *)(param_2 + 0x60) = cVar5;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d66da8 FUN_148d66da8 body=103 status=ok
// SIG undefined FUN_148d66da8(void)

void FUN_148d66da8(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x2c);
  if (plVar2 != (longlong *)0x0) {
    if ((*(byte *)(plVar2 + 0x84) & 2) != 0) {
      cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
      if (cVar1 != '\0') {
        FUN_140c125e6(plVar2 + 0x1b3,&DAT_14cbd9328);
        return;
      }
    }
    if (plVar2[0x4a8] != 0) {
      FUN_148c36412();
      return;
    }
  }
  return;
}



// FUNCTION 148d66e10 FUN_148d66e10 body=29 status=ok
// SIG undefined FUN_148d66e10(void)

undefined8 FUN_148d66e10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d66e46 FUN_148d66e46 body=29 status=ok
// SIG undefined FUN_148d66e46(void)

bool FUN_148d66e46(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d66e64 FUN_148d66e64 body=26 status=ok
// SIG undefined FUN_148d66e64(void)

bool FUN_148d66e64(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d66e94 FUN_148d66e94 body=93 status=ok
// SIG undefined FUN_148d66e94(void)

void FUN_148d66e94(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9777d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b977760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d66ef2 FUN_148d66ef2 body=93 status=ok
// SIG undefined FUN_148d66ef2(void)

void FUN_148d66ef2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9777d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b977760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d66f50 FUN_148d66f50 body=126 status=ok
// SIG undefined FUN_148d66f50(void)

void FUN_148d66f50(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9777d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b977760;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d66fbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d66fda FUN_148d66fda body=145 status=ok
// SIG undefined FUN_148d66fda(void)

undefined4 FUN_148d66fda(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
    local_30 = 0;
  }
  uVar3 = FUN_144729dda(param_1 + 0x18);
  if ((char)uVar3 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x20);
    *(undefined1 *)(lVar1 + 0x28) = param_2;
    *(undefined1 *)(lVar1 + 0x29) = 1;
  }
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d67074 FUN_148d67074 body=29 status=ok
// SIG undefined FUN_148d67074(void)

bool FUN_148d67074(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d67092 FUN_148d67092 body=26 status=ok
// SIG undefined FUN_148d67092(void)

bool FUN_148d67092(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d670ac FUN_148d670ac body=101 status=ok
// SIG undefined FUN_148d670ac(void)

void FUN_148d670ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b977b00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d67112 FUN_148d67112 body=134 status=ok
// SIG undefined FUN_148d67112(void)

void FUN_148d67112(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b977b00;
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
                    /* WARNING: Could not recover jumptable at 0x000148d67189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d67198 FUN_148d67198 body=146 status=ok
// SIG undefined FUN_148d67198(void)

bool FUN_148d67198(longlong param_1)

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
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d6722c FUN_148d6722c body=89 status=ok
// SIG undefined FUN_148d6722c(void)

void FUN_148d6722c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 148d67286 FUN_148d67286 body=31 status=ok
// SIG undefined FUN_148d67286(void)

undefined8 FUN_148d67286(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d672c0 FUN_148d672c0 body=101 status=ok
// SIG undefined FUN_148d672c0(void)

void FUN_148d672c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b977bb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d67326 FUN_148d67326 body=101 status=ok
// SIG undefined FUN_148d67326(void)

void FUN_148d67326(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b977bb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d6738c FUN_148d6738c body=134 status=ok
// SIG undefined FUN_148d6738c(void)

void FUN_148d6738c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b977bb0;
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
                    /* WARNING: Could not recover jumptable at 0x000148d67403. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d67412 FUN_148d67412 body=44 status=ok
// SIG undefined FUN_148d67412(void)

void FUN_148d67412(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d6743b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148d67458 FUN_148d67458 body=29 status=ok
// SIG undefined FUN_148d67458(void)

bool FUN_148d67458(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d67476 FUN_148d67476 body=26 status=ok
// SIG undefined FUN_148d67476(void)

bool FUN_148d67476(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d67490 FUN_148d67490 body=101 status=ok
// SIG undefined FUN_148d67490(void)

void FUN_148d67490(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b977c90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d674f6 FUN_148d674f6 body=101 status=ok
// SIG undefined FUN_148d674f6(void)

void FUN_148d674f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b977c90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}


