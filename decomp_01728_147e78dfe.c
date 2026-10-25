// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147e78dfe FUN_147e78dfe body=166 status=ok
// SIG undefined FUN_147e78dfe(void)

void FUN_147e78dfe(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = param_1[0x9f];
  if ((lVar3 != 0) && (iVar2 = *(int *)(lVar3 + 0x118), (longlong)iVar2 != 0)) {
    lVar3 = *(longlong *)(lVar3 + 0x110);
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(lVar3 + lVar6);
      local_48 = *puVar1;
      uStack_44 = puVar1[1];
      uStack_40 = (undefined4)*(longlong *)(puVar1 + 2);
      uStack_3c = puVar1[3];
      lVar4 = *(longlong *)(puVar1 + 2);
      if (lVar4 != 0) {
        cVar5 = FUN_144729dda(&local_48);
        if (cVar5 != '\0') {
          (**(code **)(*param_1 + 0x3f8))(param_1,lVar4);
        }
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e78ea6 FUN_147e78ea6 body=128 status=ok
// SIG undefined FUN_147e78ea6(void)

undefined4 * FUN_147e78ea6(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *param_1 = 5;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_20 = param_2;
  FUN_140244552(param_1 + 2,&local_20,&local_28);
  FUN_147e78f28(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e78f28 FUN_147e78f28 body=440 status=ok
// SIG undefined FUN_147e78f28(void)

void FUN_147e78f28(uint *param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  
  lVar13 = (longlong)(int)param_1[6];
  if ((int)(param_1[8] + 1) < (int)(param_1[0x10] + param_1[6])) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar12 = (longlong)(int)param_1[8] + 1;
    do {
      lVar9 = lVar13;
      puVar4 = param_1 + 0xe;
      if (lVar12 < lVar13) {
        lVar9 = 0;
        puVar4 = param_1 + 4;
      }
      lVar9 = *(longlong *)(*(longlong *)puVar4 + lVar9 * -8 + lVar12 * 8);
      param_1[10] = param_1[10] + 1;
      if (((lVar9 != 0) && (lVar7 = FUN_144a79cc8(lVar9), lVar7 != 0)) &&
         ((uVar6 = *param_1, (uVar6 & 1) == 0 || ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0)))) {
        if ((uVar6 & 2) != 0) {
          cVar5 = FUN_144affb44(lVar9);
          if (cVar5 == '\0') goto LAB_147e78fcc;
          uVar6 = *param_1;
        }
        if ((uVar6 & 4) == 0) {
          lVar10 = *(longlong *)(lVar7 + 0xc0);
        }
        else {
          if (((*(byte *)(lVar7 + 0x240) & 0x20) == 0) ||
             (bVar8 = 1, (*(byte *)(lVar7 + 0x242) & 8) != 0)) {
            bVar8 = 1;
            if ((*(byte *)(lVar7 + 0x241) & 0x20) == 0) {
              bVar8 = (*(byte *)(lVar7 + 0x241) & 0x40) >> 6;
            }
          }
          lVar10 = *(longlong *)(lVar7 + 0xc0);
          if (lVar10 == 0) {
LAB_147e790af:
            pcVar11 = (char *)0x0;
          }
          else {
            iVar1 = *(int *)(lVar10 + 0x1b0);
            if (((longlong)iVar1 < 0) || (*(int *)(lVar10 + 0x1a8) <= iVar1)) goto LAB_147e790af;
            pcVar11 = (char *)((longlong)iVar1 * 0x78 + *(longlong *)(lVar10 + 0x1a0));
          }
          pcVar3 = *(char **)(lVar7 + 0x2e8);
          if (pcVar3 == (char *)0x0) {
            bVar14 = true;
          }
          else {
            bVar14 = *pcVar3 == '\x02';
          }
          if ((bVar8 & ((pcVar11 == (char *)0x0 || pcVar3 == pcVar11) | bVar14)) != 1)
          goto LAB_147e78fcc;
        }
        if (lVar10 == lVar2) {
          if (*(longlong *)(lVar2 + 0x30) == lVar7) {
LAB_147e790d6:
            *(longlong *)(param_1 + 0xc) = lVar9;
            param_1[8] = (uint)lVar12;
            return;
          }
          lVar7 = FUN_14059e8cc();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_147e790d6;
        }
      }
LAB_147e78fcc:
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_1[0x10] + lVar13);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 147e790e0 FUN_147e790e0 body=243 status=ok
// SIG undefined FUN_147e790e0(void)

void FUN_147e790e0(longlong *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [28];
  char local_5c;
  longlong local_50;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = (**(code **)(*param_1 + 0x180))();
  local_88 = FUN_14110d034();
  if ((local_88 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_88);
  }
  FUN_147e78ea6(local_80,uVar1,&local_88);
  if (local_5c == '\0') {
    bVar2 = false;
    do {
      if (((local_50 != 0) && ((*(uint *)(local_50 + 8) >> 0x1e & 1) == 0)) &&
         ((*(byte *)(local_50 + 0x5a8) & 1) == 0)) {
        (**(code **)(*param_1 + 0x3b0))(param_1);
        bVar2 = true;
      }
      FUN_147e78f28(local_80);
    } while (local_5c == '\0');
  }
  else {
    bVar2 = false;
  }
  if (local_28 == '\x01') {
    FUN_14024445c(local_78);
  }
  if (bVar2) {
    (**(code **)(*param_1 + 0x3c8))(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e791d4 FUN_147e791d4 body=177 status=ok
// SIG undefined FUN_147e791d4(void)

longlong FUN_147e791d4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[5];
  if ((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) {
    param_1[5] = 0;
    if ((longlong)(int)param_1[0x1d] < 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(param_1[0x1c] + lVar3 * 8);
        if ((((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
            ((*(byte *)(lVar1 + 0x428) & 8) != 0)) &&
           ((param_1[7] == 0 || (*(longlong *)(lVar1 + 0x3d8) == param_1[7])))) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar1);
          }
          param_1[5] = lVar1;
          (**(code **)(*param_1 + 0x460))(param_1,lVar1);
          return param_1[5];
        }
        lVar3 = lVar3 + 1;
      } while ((int)param_1[0x1d] != lVar3);
    }
  }
  return lVar2;
}



// FUNCTION 147e79286 FUN_147e79286 body=181 status=ok
// SIG undefined FUN_147e79286(void)

ulonglong FUN_147e79286(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  byte bVar5;
  uint uVar6;
  undefined7 uVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if (lVar2 != 0) {
    bVar5 = *(byte *)(lVar2 + 0x152);
    uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
    uVar3 = CONCAT71(uVar4,1);
    if ((bVar5 != 1) && ((6 < bVar5 || ((0x68U >> (bVar5 & 0x1f) & 1) == 0)))) goto LAB_147e79310;
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    bVar5 = *(byte *)(lVar2 + 0x152);
    if ((bVar5 != 1) && ((6 < bVar5 || ((0x68U >> (bVar5 & 0x1f) & 1) == 0)))) goto LAB_147e79310;
    if ((longlong)(int)param_1[0x1d] != 0) {
      lVar2 = 0;
      uVar6 = 0;
      do {
        if (*(longlong *)(param_1[0x1c] + lVar2) != 0) {
          uVar1 = *(uint *)(*(longlong *)(param_1[0x1c] + lVar2) + 0x42c);
          bVar5 = (byte)uVar6;
          uVar6 = uVar6 & 0xff;
          if (bVar5 < (byte)uVar1) {
            uVar6 = uVar1;
          }
        }
        lVar2 = lVar2 + 8;
      } while ((longlong)(int)param_1[0x1d] * 8 != lVar2);
      uVar3 = CONCAT71(uVar4,(char)uVar6 == '\x02');
      goto LAB_147e79310;
    }
  }
  uVar3 = 0;
LAB_147e79310:
  return uVar3 & 0xffffffff;
}



// FUNCTION 147e7933c FUN_147e7933c body=278 status=ok
// SIG undefined FUN_147e7933c(void)

void FUN_147e7933c(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar4 = param_1 + 0x40;
  lVar3 = FUN_14479d2ce(lVar4);
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 0x48) == 0) {
      return;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(lVar4,lVar3);
      if (lVar3 == 0) {
        return;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(lVar4,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return;
    }
  }
  lVar4 = FUN_144a797b2();
  if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) && (lVar4 = FUN_1459d60a8(), lVar4 != 0)) &&
     ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
       lVar4 + 0x30)))) {
    uVar5 = FUN_147e79452(param_1,lVar3);
    FUN_146424116(param_1,uVar5);
    return;
  }
  return;
}



// FUNCTION 147e79452 FUN_147e79452 body=175 status=ok
// SIG undefined FUN_147e79452(void)

undefined8 FUN_147e79452(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e79502 FUN_147e79502 body=407 status=ok
// SIG undefined FUN_147e79502(void)

void FUN_147e79502(longlong param_1,longlong *param_2,longlong *param_3,undefined1 *param_4,
                  longlong param_5)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  int local_6c;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_143835568(param_5,*(undefined4 *)(param_1 + 0xe8),1);
  FUN_1403ed7b2(param_3,*(undefined4 *)(param_1 + 0xe8),1);
  *param_4 = 0;
  local_78 = param_2;
  FUN_147e7779c(param_2,*(undefined4 *)(param_1 + 0xe8));
  iVar4 = *(int *)(param_1 + 0xe8);
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + lVar6 * 8);
      if ((lVar5 != 0) && (plVar2 = *(longlong **)(lVar5 + 0x468), plVar2 != (longlong *)0x0)) {
        local_68 = 0.0;
        local_6c = 0;
        cVar3 = (**(code **)(*plVar2 + 0x40))(plVar2,&local_6c,&local_68);
        if (cVar3 == '\0') {
          *param_4 = 1;
        }
        else {
          *(undefined1 *)(*param_3 + lVar6) = 1;
          lVar5 = *(longlong *)(param_5 + 0x20);
          if (*(longlong *)(param_5 + 0x20) == 0) {
            lVar5 = param_5;
          }
          piVar1 = (int *)(lVar5 + lVar6 * 4);
          *piVar1 = *piVar1 + local_6c;
          if (0.0 < local_68) {
            iVar4 = (int)local_78[1];
            *(uint *)(local_78 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)local_78 + 0xc) < iVar4 + 1U) {
              FUN_144941252(local_78,iVar4);
            }
            *(double *)(*local_78 + (longlong)iVar4 * 8) = local_68;
          }
        }
        iVar4 = *(int *)(param_1 + 0xe8);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7969a FUN_147e7969a body=107 status=ok
// SIG undefined FUN_147e7969a(void)

undefined8 * FUN_147e7969a(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
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
    }
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 147e79706 FUN_147e79706 body=76 status=ok
// SIG undefined FUN_147e79706(void)

void FUN_147e79706(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0xd0);
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
  FUN_1449db362(param_1 + 0xb0);
  FUN_147e70c18(param_1);
  return;
}



// FUNCTION 147e79752 FUN_147e79752 body=182 status=ok
// SIG undefined FUN_147e79752(void)

longlong * FUN_147e79752(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14abb5b10;
  FUN_147e86e3e(puVar1 + 1,param_3);
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
  puVar1[3] = lVar3;
  *puVar1 = &PTR_FUN_14abb5aa0;
  puVar1[4] = 0;
  FUN_14485c47a(puVar1 + 4,param_2);
  puVar1[5] = FUN_1438369c6;
  return param_1;
}



// FUNCTION 147e79808 FUN_147e79808 body=76 status=ok
// SIG undefined FUN_147e79808(void)

ulonglong FUN_147e79808(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x248);
  if ((uVar2 != 0) && ((*(byte *)(uVar2 + 0xa0) & 1) == 0)) {
    LOCK();
    *(undefined1 *)(param_1 + 0x250) = 1;
    UNLOCK();
    FUN_14009fd82(DAT_14c82b500,param_1 + 0x248,1);
    LOCK();
    bVar1 = *(byte *)(param_1 + 0x250);
    *(byte *)(param_1 + 0x250) = 0;
    uVar2 = (ulonglong)bVar1;
    UNLOCK();
  }
  return uVar2;
}



// FUNCTION 147e79854 FUN_147e79854 body=134 status=ok
// SIG undefined FUN_147e79854(void)

void FUN_147e79854(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_20 = *param_4;
    local_18 = param_4[1];
    *param_4 = 0;
    param_4[1] = 0;
    (**(code **)(*param_1 + 0x60))();
  }
  plVar3 = (longlong *)param_4[1];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e798dc FUN_147e798dc body=81 status=ok
// SIG undefined FUN_147e798dc(void)

void FUN_147e798dc(longlong *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_3) {
    FUN_147e86a90(param_1,iVar1);
  }
  FUN_147e86eed((longlong)iVar1 * 0xe0 + *param_1,param_2,param_3);
  return;
}



// FUNCTION 147e7992d FUN_147e7992d body=148 status=ok
// SIG undefined FUN_147e7992d(void)

undefined8 FUN_147e7992d(undefined8 param_1)

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
  uVar1 = FUN_145893418();
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



// FUNCTION 147e799c2 FUN_147e799c2 body=513 status=ok
// SIG undefined FUN_147e799c2(void)

ulonglong FUN_147e799c2(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4,
                       longlong *param_5,longlong param_6)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 unaff_RBP;
  ulonglong uVar11;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  }
  if (param_6 != 0 && lVar8 == 0) {
    lVar8 = FUN_1402ad3be(DAT_14cb0d2b0,param_6,1);
  }
  *(undefined8 *)(param_4 + 4) = *(undefined8 *)(param_2 + 4);
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *param_4 = *param_2;
  param_4[1] = uVar4;
  param_4[2] = uVar5;
  param_4[3] = uVar6;
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if ((lVar8 == 0) || (plVar2 = *(longlong **)(lVar8 + 0x168), plVar2 == (longlong *)0x0))
  goto LAB_147e79a76;
  lVar8 = FUN_1409035a4();
  if ((*(int *)(plVar2[2] + 0x38) < *(int *)(lVar8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
      lVar8 + 0x30)) goto LAB_147e79a76;
  if (param_6 == 0) {
LAB_147e79aae:
    lVar8 = plVar2[5];
    if (lVar8 == 0) goto LAB_147e79a76;
  }
  else {
    uVar9 = FUN_145958f2a();
    plVar10 = (longlong *)FUN_144718840(param_6,uVar9);
    if (plVar10 == (longlong *)0x0) goto LAB_147e79aae;
    uVar9 = (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar8 = (**(code **)(*plVar2 + 0x340))(plVar2,uVar9,param_2,&DAT_14c8464e0);
    if (lVar8 == 0) goto LAB_147e79aae;
  }
  local_68 = *param_5;
  if ((local_68 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147e6f964(&local_60,lVar8,param_6,&local_68);
  pcVar3 = *(code **)(lVar8 + 0x460);
  local_50 = local_60;
  local_48 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  local_78 = 0;
  local_80 = &local_50;
  local_88 = 0;
  uVar7 = (*pcVar3)(lVar8,param_2,param_3,param_4);
  uVar11 = (ulonglong)uVar7;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
LAB_147e79a76:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 147e79be0 FUN_147e79be0 body=300 status=ok
// SIG undefined FUN_147e79be0(void)

void FUN_147e79be0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
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
  FUN_147e87030(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar3 = (longlong)iStack_54;
      lVar2 = *local_70;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_147e8717c(param_2,iVar1);
      }
      FUN_1478cd7e2((longlong)iVar1 * 0x38 + *param_2,lVar3 * 0x48 + lVar2);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e79d52 FUN_147e79d52 body=22 status=ok
// SIG undefined FUN_147e79d52(void)

undefined8 FUN_147e79d52(undefined8 param_1,undefined8 param_2)

{
  FUN_147e79d68();
  return param_2;
}



// FUNCTION 147e79d68 FUN_147e79d68 body=952 status=ok
// SIG undefined FUN_147e79d68(void)

undefined4 * FUN_147e79d68(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  char cVar13;
  int iVar14;
  longlong lVar15;
  undefined8 uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  double dStack_b0;
  char local_a8;
  undefined7 uStack_a7;
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_70;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = param_1 + 0xa6;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  lVar15 = (**(code **)(*param_1 + 0x180))();
  if (lVar15 != 0) {
    if ((*(byte *)(param_1 + 0xd) & 0x80) == 0) {
      plVar2 = param_1 + 0x2b;
      plVar3 = param_1 + 0x2d;
      local_d8 = 2.12199579096527e-314;
      local_c8 = 2.12199579047121e-314;
      uStack_c0 = 0;
      uStack_d0 = plVar3;
      if ((int)param_1[0x30] == 0) {
        iVar17 = 0;
      }
      else {
        FUN_1449c0562(&local_d8);
        iVar17 = (int)param_1[0x30];
      }
      uStack_80 = CONCAT44(uStack_bc,uStack_c0);
      local_88 = local_c8;
      dVar4 = local_88;
      local_98 = (undefined4)local_d8;
      uStack_94 = local_d8._4_4_;
      uStack_90 = (undefined4)uStack_d0;
      uStack_8c = uStack_d0._4_4_;
      local_88._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
      iVar14 = local_88._4_4_;
      local_a0 = plVar2;
      if ((local_88._4_4_ != iVar17) || (local_88 = dVar4, uStack_d0 != plVar3)) {
        do {
          local_88 = dVar4;
          lVar15 = (longlong)iVar14 * 0x58 + *local_a0;
          if (((char)param_1[0xac] == '\0') || (*(char *)(lVar15 + 0x38) == '\0')) {
            if (*(char *)(lVar15 + 0x38) != '\0') {
              param_1[0xac] = *(longlong *)(lVar15 + 0x38);
              uVar18 = *(undefined4 *)(lVar15 + 8);
              uVar19 = *(undefined4 *)(lVar15 + 0xc);
              uVar20 = *(undefined4 *)(lVar15 + 0x10);
              uVar21 = *(undefined4 *)(lVar15 + 0x14);
              lVar9 = *(longlong *)(lVar15 + 0x18);
              lVar10 = *(longlong *)(lVar15 + 0x20);
              lVar11 = *(longlong *)(lVar15 + 0x30);
              param_1[0xaa] = *(longlong *)(lVar15 + 0x28);
              param_1[0xab] = lVar11;
              param_1[0xa8] = lVar9;
              param_1[0xa9] = lVar10;
              *(undefined4 *)plVar1 = uVar18;
              *(undefined4 *)((longlong)param_1 + 0x534) = uVar19;
              *(undefined4 *)(param_1 + 0xa7) = uVar20;
              *(undefined4 *)((longlong)param_1 + 0x53c) = uVar21;
            }
          }
          else {
            dVar4 = (double)param_1[0xa6];
            uVar18 = SUB84(dVar4,0);
            uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
            dVar5 = (double)param_1[0xa7];
            uVar20 = SUB84(dVar5,0);
            uVar21 = (undefined4)((ulonglong)dVar5 >> 0x20);
            dVar6 = *(double *)(lVar15 + 8);
            if (dVar6 <= dVar4) {
              uVar18 = SUB84(dVar6,0);
              uVar19 = (undefined4)((ulonglong)dVar6 >> 0x20);
            }
            param_1[0xa6] = CONCAT44(uVar19,uVar18);
            dVar4 = *(double *)(lVar15 + 0x10);
            if (dVar4 <= dVar5) {
              uVar20 = SUB84(dVar4,0);
              uVar21 = (undefined4)((ulonglong)dVar4 >> 0x20);
            }
            param_1[0xa7] = CONCAT44(uVar21,uVar20);
            dVar4 = (double)param_1[0xa8];
            uVar18 = SUB84(dVar4,0);
            uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
            dVar5 = *(double *)(lVar15 + 0x18);
            if (dVar5 <= dVar4) {
              uVar18 = SUB84(dVar5,0);
              uVar19 = (undefined4)((ulonglong)dVar5 >> 0x20);
            }
            param_1[0xa8] = CONCAT44(uVar19,uVar18);
            dVar4 = (double)param_1[0xa9];
            uVar18 = SUB84(dVar4,0);
            uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
            dVar5 = *(double *)(lVar15 + 0x20);
            if (dVar4 <= dVar5) {
              uVar18 = SUB84(dVar5,0);
              uVar19 = (undefined4)((ulonglong)dVar5 >> 0x20);
            }
            param_1[0xa9] = CONCAT44(uVar19,uVar18);
            dVar4 = (double)param_1[0xaa];
            uVar18 = SUB84(dVar4,0);
            uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
            dVar5 = *(double *)(lVar15 + 0x28);
            if (dVar4 <= dVar5) {
              uVar18 = SUB84(dVar5,0);
              uVar19 = (undefined4)((ulonglong)dVar5 >> 0x20);
            }
            param_1[0xaa] = CONCAT44(uVar19,uVar18);
            dVar4 = (double)param_1[0xab];
            uVar18 = SUB84(dVar4,0);
            uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
            dVar5 = *(double *)(lVar15 + 0x30);
            if (dVar4 <= dVar5) {
              uVar18 = SUB84(dVar5,0);
              uVar19 = (undefined4)((ulonglong)dVar5 >> 0x20);
            }
            param_1[0xab] = CONCAT44(uVar19,uVar18);
          }
          local_88 = (double)CONCAT44(local_88._4_4_,(uint)local_88 & ~uStack_94);
          FUN_1449c0562(&local_98);
          iVar14 = local_88._4_4_;
          dVar4 = local_88;
        } while (local_a0 != plVar2 ||
                 ((longlong *)CONCAT44(uStack_8c,uStack_90) != plVar3 || local_88._4_4_ != iVar17));
      }
    }
    else {
      uVar16 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_1405f0e9c(&local_a0,uVar16,5);
      if (uStack_80._4_1_ == '\0') {
        do {
          cVar13 = FUN_147e7a7b8(local_70);
          if (cVar13 != '\0') {
            (**(code **)(*local_70 + 0x520))(local_70,&local_d8,0,0);
            if (local_a8 == '\0' || (char)param_1[0xac] == '\0') {
              if (local_a8 != '\0') {
                param_1[0xac] = CONCAT71(uStack_a7,local_a8);
                param_1[0xaa] = (longlong)local_b8;
                param_1[0xab] = (longlong)dStack_b0;
                param_1[0xa8] = (longlong)local_c8;
                param_1[0xa9] = CONCAT44(uStack_bc,uStack_c0);
                *(undefined4 *)plVar1 = (undefined4)local_d8;
                *(uint *)((longlong)param_1 + 0x534) = local_d8._4_4_;
                *(undefined4 *)(param_1 + 0xa7) = (undefined4)uStack_d0;
                *(undefined4 *)((longlong)param_1 + 0x53c) = uStack_d0._4_4_;
              }
            }
            else {
              dVar4 = (double)param_1[0xa6];
              dVar5 = (double)param_1[0xa7];
              uVar18 = SUB84(dVar4,0);
              uVar19 = (int)((ulonglong)dVar4 >> 0x20);
              if (local_d8 <= dVar4) {
                uVar18 = (undefined4)local_d8;
                uVar19 = local_d8._4_4_;
              }
              param_1[0xa6] = CONCAT44(uVar19,uVar18);
              uVar18 = SUB84(dVar5,0);
              uVar19 = (int)((ulonglong)dVar5 >> 0x20);
              if ((double)uStack_d0 <= dVar5) {
                uVar18 = (undefined4)uStack_d0;
                uVar19 = uStack_d0._4_4_;
              }
              param_1[0xa7] = CONCAT44(uVar19,uVar18);
              dVar4 = (double)param_1[0xa8];
              uVar18 = SUB84(dVar4,0);
              uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
              if (local_c8 <= dVar4) {
                uVar18 = SUB84(local_c8,0);
                uVar19 = (undefined4)((ulonglong)local_c8 >> 0x20);
              }
              param_1[0xa8] = CONCAT44(uVar19,uVar18);
              dVar4 = (double)param_1[0xa9];
              uVar18 = SUB84(dVar4,0);
              uVar19 = (int)((ulonglong)dVar4 >> 0x20);
              if (dVar4 <= (double)CONCAT44(uStack_bc,uStack_c0)) {
                uVar18 = uStack_c0;
                uVar19 = uStack_bc;
              }
              param_1[0xa9] = CONCAT44(uVar19,uVar18);
              dVar4 = (double)param_1[0xaa];
              uVar18 = SUB84(dVar4,0);
              uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
              if (dVar4 <= local_b8) {
                uVar18 = SUB84(local_b8,0);
                uVar19 = (undefined4)((ulonglong)local_b8 >> 0x20);
              }
              param_1[0xaa] = CONCAT44(uVar19,uVar18);
              dVar4 = (double)param_1[0xab];
              uVar18 = SUB84(dVar4,0);
              uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
              if (dVar4 <= dStack_b0) {
                uVar18 = SUB84(dStack_b0,0);
                uVar19 = (undefined4)((ulonglong)dStack_b0 >> 0x20);
              }
              param_1[0xab] = CONCAT44(uVar19,uVar18);
            }
          }
          FUN_14059e512(&local_a0);
        } while (uStack_80._4_1_ == '\0');
      }
      if (local_48 == '\x01') {
        FUN_14024445c(&local_98);
      }
    }
  }
  *(longlong *)(param_2 + 0xc) = param_1[0xac];
  lVar15 = *plVar1;
  uVar18 = *(undefined4 *)((longlong)param_1 + 0x534);
  lVar9 = param_1[0xa7];
  uVar19 = *(undefined4 *)((longlong)param_1 + 0x53c);
  lVar10 = param_1[0xa8];
  uVar20 = *(undefined4 *)((longlong)param_1 + 0x544);
  lVar11 = param_1[0xa9];
  uVar21 = *(undefined4 *)((longlong)param_1 + 0x54c);
  uVar7 = *(undefined4 *)((longlong)param_1 + 0x554);
  lVar12 = param_1[0xab];
  uVar8 = *(undefined4 *)((longlong)param_1 + 0x55c);
  param_2[8] = (int)param_1[0xaa];
  param_2[9] = uVar7;
  param_2[10] = (int)lVar12;
  param_2[0xb] = uVar8;
  param_2[4] = (int)lVar10;
  param_2[5] = uVar20;
  param_2[6] = (int)lVar11;
  param_2[7] = uVar21;
  *param_2 = (int)lVar15;
  param_2[1] = uVar18;
  param_2[2] = (int)lVar9;
  param_2[3] = uVar19;
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147e7a14e FUN_147e7a14e body=211 status=ok
// SIG undefined FUN_147e7a14e(void)

undefined8 FUN_147e7a14e(longlong param_1,double *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_1 + 0xe8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x710))(plVar3,&local_68);
        if ((((*param_2 <= local_50) && (local_68 < param_2[3] || local_68 == param_2[3])) &&
            (param_2[1] <= local_48)) &&
           (((local_60 < param_2[4] || local_60 == param_2[4] && (param_2[2] <= local_40)) &&
            (local_58 < param_2[5] || local_58 == param_2[5])))) {
          uVar4 = 1;
          goto LAB_147e7a1fb;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  uVar4 = 0;
LAB_147e7a1fb:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7a222 FUN_147e7a222 body=78 status=ok
// SIG undefined FUN_147e7a222(void)

void FUN_147e7a222(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x678))(plVar3,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 147e7a270 FUN_147e7a270 body=78 status=ok
// SIG undefined FUN_147e7a270(void)

void FUN_147e7a270(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x680))(plVar3,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 147e7a2be FUN_147e7a2be body=98 status=ok
// SIG undefined FUN_147e7a2be(void)

void FUN_147e7a2be(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x670))(plVar3,param_2,param_3,param_4);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 147e7a320 FUN_147e7a320 body=159 status=ok
// SIG undefined FUN_147e7a320(void)

ulonglong FUN_147e7a320(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((((param_2 != 0) && (cVar2 = FUN_147dd261c(param_2), cVar2 != '\0')) &&
      (cVar2 = (**(code **)(*param_1 + 0x368))(param_1), cVar2 != '\0')) && (0 < (int)param_1[0x1d])
     ) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1[0x1c] + lVar5 * 8);
      if (((lVar1 != 0) && (lVar3 = FUN_14093f908(lVar1), lVar3 == param_2)) &&
         ((*(char *)(lVar1 + 0x42c) != '\0' &&
          ((*(longlong **)(lVar1 + 0x468) == (longlong *)0x0 ||
           (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x468) + 0x38))(), cVar2 != '\0')))))) {
        uVar4 = 0;
        break;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[0x1d]);
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 147e7a3c0 FUN_147e7a3c0 body=445 status=ok
// SIG undefined FUN_147e7a3c0(void)

ulonglong FUN_147e7a3c0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(byte *)(param_1 + 0xd) & 0x80) == 0) {
    plVar1 = param_1 + 0x2b;
    plVar2 = param_1 + 0x2d;
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    uStack_a0 = 0;
    uStack_b0 = plVar2;
    if ((int)param_1[0x30] == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_b8);
      iVar5 = (int)param_1[0x30];
    }
    uStack_78 = CONCAT44(uStack_9c,uStack_a0);
    local_80 = local_a8;
    uVar4 = local_80;
    local_90 = (undefined4)local_b8;
    uStack_8c = local_b8._4_4_;
    uStack_88 = (undefined4)uStack_b0;
    uStack_84 = uStack_b0._4_4_;
    local_80._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    local_98 = plVar1;
    if ((local_80._4_4_ != iVar5) || (uStack_b0 != plVar2)) {
      iVar3 = local_80._4_4_;
      local_80 = uVar4;
      do {
        if (*(char *)(*local_98 + 0x38 + (longlong)iVar3 * 0x58) != '\0') goto LAB_147e7a51a;
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
        FUN_1449c0562(&local_90);
        iVar3 = local_80._4_4_;
        uVar4 = local_80;
      } while (((longlong *)CONCAT44(uStack_84,uStack_88) != plVar2 || local_80._4_4_ != iVar5) ||
               local_98 != plVar1);
    }
    local_80 = uVar4;
    local_c0 = FUN_1459eadfe();
    if ((local_c0 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_c0);
    }
    uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    FUN_147e7a57e(&local_98,uVar4,&local_c0);
    if (uStack_78._4_1_ == '\0') {
      do {
        if ((local_68 != 0) && ((*(uint *)(local_68 + 8) >> 0x1e & 1) == 0)) {
          uVar6 = CONCAT71((int7)((ulonglong)&local_98 >> 8),1);
          goto LAB_147e7a506;
        }
        FUN_147e7a600(&local_98);
      } while (uStack_78._4_1_ != '\x01');
    }
    uVar6 = 0;
LAB_147e7a506:
    if (local_40 == '\x01') {
      FUN_14024445c(&local_90);
    }
  }
LAB_147e7a51a:
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 147e7a57e FUN_147e7a57e body=128 status=ok
// SIG undefined FUN_147e7a57e(void)

undefined4 * FUN_147e7a57e(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *param_1 = 5;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_20 = param_2;
  FUN_140244552(param_1 + 2,&local_20,&local_28);
  FUN_147e7a600(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7a600 FUN_147e7a600 body=440 status=ok
// SIG undefined FUN_147e7a600(void)

void FUN_147e7a600(uint *param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  
  lVar13 = (longlong)(int)param_1[6];
  if ((int)(param_1[8] + 1) < (int)(param_1[0x10] + param_1[6])) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar12 = (longlong)(int)param_1[8] + 1;
    do {
      lVar9 = lVar13;
      puVar4 = param_1 + 0xe;
      if (lVar12 < lVar13) {
        lVar9 = 0;
        puVar4 = param_1 + 4;
      }
      lVar9 = *(longlong *)(*(longlong *)puVar4 + lVar9 * -8 + lVar12 * 8);
      param_1[10] = param_1[10] + 1;
      if (((lVar9 != 0) && (lVar7 = FUN_144a79cc8(lVar9), lVar7 != 0)) &&
         ((uVar6 = *param_1, (uVar6 & 1) == 0 || ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0)))) {
        if ((uVar6 & 2) != 0) {
          cVar5 = FUN_144affb44(lVar9);
          if (cVar5 == '\0') goto LAB_147e7a6a4;
          uVar6 = *param_1;
        }
        if ((uVar6 & 4) == 0) {
          lVar10 = *(longlong *)(lVar7 + 0xc0);
        }
        else {
          if (((*(byte *)(lVar7 + 0x240) & 0x20) == 0) ||
             (bVar8 = 1, (*(byte *)(lVar7 + 0x242) & 8) != 0)) {
            bVar8 = 1;
            if ((*(byte *)(lVar7 + 0x241) & 0x20) == 0) {
              bVar8 = (*(byte *)(lVar7 + 0x241) & 0x40) >> 6;
            }
          }
          lVar10 = *(longlong *)(lVar7 + 0xc0);
          if (lVar10 == 0) {
LAB_147e7a787:
            pcVar11 = (char *)0x0;
          }
          else {
            iVar1 = *(int *)(lVar10 + 0x1b0);
            if (((longlong)iVar1 < 0) || (*(int *)(lVar10 + 0x1a8) <= iVar1)) goto LAB_147e7a787;
            pcVar11 = (char *)((longlong)iVar1 * 0x78 + *(longlong *)(lVar10 + 0x1a0));
          }
          pcVar3 = *(char **)(lVar7 + 0x2e8);
          if (pcVar3 == (char *)0x0) {
            bVar14 = true;
          }
          else {
            bVar14 = *pcVar3 == '\x02';
          }
          if ((bVar8 & ((pcVar11 == (char *)0x0 || pcVar3 == pcVar11) | bVar14)) != 1)
          goto LAB_147e7a6a4;
        }
        if (lVar10 == lVar2) {
          if (*(longlong *)(lVar2 + 0x30) == lVar7) {
LAB_147e7a7ae:
            *(longlong *)(param_1 + 0xc) = lVar9;
            param_1[8] = (uint)lVar12;
            return;
          }
          lVar7 = FUN_14059e8cc();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_147e7a7ae;
        }
      }
LAB_147e7a6a4:
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_1[0x10] + lVar13);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 147e7a7b8 FUN_147e7a7b8 body=59 status=ok
// SIG undefined FUN_147e7a7b8(void)

undefined8 FUN_147e7a7b8(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (param_1 != 0) {
    uVar2 = FUN_144a81dfc();
    plVar3 = (longlong *)FUN_144718840(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x70))(plVar3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 147e7a7f4 FUN_147e7a7f4 body=637 status=ok
// SIG undefined FUN_147e7a7f4(void)

void FUN_147e7a7f4(longlong *param_1,double *param_2,undefined4 param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *plStack_78;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  longlong *plStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar7 = param_1 + 0x2b;
  plVar1 = param_1 + 0x2d;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  plStack_58 = plVar1;
  if ((int)param_1[0x30] == 0) {
    iVar12 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar12 = (int)param_1[0x30];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = local_60;
  plStack_78 = plStack_58;
  local_88 = plVar7;
  if ((iStack_4c != iVar12) || (plStack_58 != plVar1)) {
    do {
      lVar9 = *local_88;
      lVar8 = (longlong)iStack_6c * 0x58;
      dVar2 = param_2[2];
      dVar3 = *param_2;
      dVar4 = param_2[1];
      *(double *)(lVar9 + 8 + lVar8) = dVar3 + *(double *)(lVar9 + 8 + lVar8);
      *(double *)(lVar9 + 0x10 + lVar8) = dVar4 + *(double *)(lVar9 + 0x10 + lVar8);
      *(double *)(lVar9 + 0x18 + lVar8) = dVar2 + *(double *)(lVar9 + 0x18 + lVar8);
      *(double *)(lVar9 + 0x20 + lVar8) = *(double *)(lVar9 + 0x20 + lVar8) + dVar3;
      *(double *)(lVar9 + 0x28 + lVar8) = *(double *)(lVar9 + 0x28 + lVar8) + dVar4;
      *(double *)(lVar9 + 0x30 + lVar8) = *(double *)(lVar9 + 0x30 + lVar8) + dVar2;
      *(undefined1 *)(lVar9 + 0x38 + lVar8) = 1;
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar7 || (plStack_78 != plVar1 || iStack_6c != iVar12));
  }
  lVar9 = (**(code **)(*param_1 + 0x180))();
  bVar10 = *(byte *)(lVar9 + 0x152);
  if ((bVar10 == 1) || ((bVar10 < 7 && ((0x68U >> (bVar10 & 0x1f) & 1) != 0)))) {
    if ((longlong)(int)param_1[0x1d] == 0) goto LAB_147e7aa30;
    lVar9 = param_1[0x1c];
    lVar13 = (longlong)(int)param_1[0x1d] * 8;
    lVar8 = 0;
    uVar11 = 0;
    do {
      lVar6 = *(longlong *)(lVar9 + lVar8);
      if (lVar6 != 0) {
        uVar5 = *(uint *)(lVar6 + 0x42c);
        bVar10 = (byte)uVar11;
        uVar11 = uVar11 & 0xff;
        if (bVar10 < (byte)uVar5) {
          uVar11 = uVar5;
        }
      }
      lVar8 = lVar8 + 8;
    } while (lVar13 != lVar8);
    if ((char)uVar11 != '\x02') {
      lVar8 = 0;
      do {
        plVar7 = *(longlong **)(lVar9 + lVar8);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x3b0))(plVar7,param_2,param_3);
        }
        lVar8 = lVar8 + 8;
      } while (lVar13 != lVar8);
      goto LAB_147e7aa30;
    }
  }
  (**(code **)(*param_1 + 0x408))(param_1);
  (**(code **)(*param_1 + 0x3b8))(param_1);
  (**(code **)(*param_1 + 0x400))(param_1);
  lVar9 = param_1[0x1d];
  if ((longlong)(int)lVar9 != 0) {
    lVar8 = param_1[0x1c];
    lVar13 = 0;
    do {
      if (*(longlong **)(lVar8 + lVar13) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar8 + lVar13) + 0x6b8))();
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)(int)lVar9 * 8 != lVar13);
  }
LAB_147e7aa30:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e7aa72 FUN_147e7aa72 body=372 status=ok
// SIG undefined FUN_147e7aa72(void)

void FUN_147e7aa72(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  iVar2 = (int)param_1[0x1f];
  if (0 < (longlong)iVar2) {
    iVar7 = -iVar2;
    iVar8 = 0;
    uVar9 = (longlong)iVar2;
    do {
      lVar6 = *(longlong *)(param_1[0x1e] + -8 + uVar9 * 8);
      if (lVar6 != 0) {
        lVar5 = FUN_144a79cc8(lVar6);
        if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x240) & 0x20) != 0)) {
          uVar4 = (**(code **)(*param_1 + 0x460))(param_1,lVar6);
          if ((uVar4 & 0xfffffffb) != 1) {
            FUN_140aeefbc(lVar6,0,1);
            if (param_1[5] == lVar6) {
              param_1[5] = 0;
            }
          }
          uVar4 = *(uint *)(param_1 + 0x1f);
          if (uVar9 != uVar4) {
            iVar2 = iVar7 + uVar4;
            if (0 < (int)(iVar7 + uVar4)) {
              iVar2 = 1;
            }
            memmove((void *)(param_1[0x1e] + uVar9 * 8 + -8),
                    (void *)(param_1[0x1e] + (longlong)(int)(uVar4 - iVar2) * 8),
                    (longlong)iVar2 << 3);
            uVar4 = *(uint *)(param_1 + 0x1f);
          }
          iVar8 = iVar8 + 1;
          *(uint *)(param_1 + 0x1f) = uVar4 - 1;
          FUN_147e87350(param_1 + 0x1e);
        }
      }
      iVar7 = iVar7 + 1;
      bVar1 = 1 < uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar1);
    if (iVar8 != 0) {
      lVar6 = FUN_147e791d4(param_1);
      if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar6);
      }
      param_1[5] = lVar6;
      if (param_1[0x6e] == 0) {
        cVar3 = FUN_147e78d0c(param_1);
        if (cVar3 != '\0') {
          (**(code **)(*param_1 + 0x3b8))(param_1);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147e7ab94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  return;
}



// FUNCTION 147e7abe6 FUN_147e7abe6 body=210 status=ok
// SIG undefined FUN_147e7abe6(void)

longlong FUN_147e7abe6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_98 [40];
  longlong local_70;
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
  lVar1 = param_1 + 0x10;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar1;
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar2 = *(int *)(param_1 + 0x28);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = param_1;
  if ((iStack_34 != iVar2) || (uStack_40 != lVar1)) {
    do {
      do {
        local_58 = local_58 & ~uStack_64;
        FUN_1449c0562(&local_68);
      } while (iStack_54 != iVar2);
    } while ((CONCAT44(uStack_5c,uStack_60) != lVar1) || (local_70 != param_1));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7acba FUN_147e7acba body=16 status=ok
// SIG undefined FUN_147e7acba(void)

byte FUN_147e7acba(void)

{
  byte bVar1;
  
  bVar1 = FUN_144729dda();
  return bVar1 ^ 1;
}



// FUNCTION 147e7acca FUN_147e7acca body=198 status=ok
// SIG undefined FUN_147e7acca(void)

void FUN_147e7acca(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    iVar5 = 1;
    lVar6 = 0;
    lVar7 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar1 + lVar6) == lVar2) {
        if (iVar5 == 0) {
          return;
        }
        memmove((void *)(*param_1 + (lVar7 >> 0x20) * 8),
                (void *)(*param_1 + (lVar7 >> 0x20) * 8 + 8),
                (longlong)((int)param_1[1] - iVar5) << 3);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return;
      }
      lVar7 = lVar7 + 0x100000000;
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  return;
}



// FUNCTION 147e7ad90 FUN_147e7ad90 body=1060 status=ok
// SIG undefined FUN_147e7ad90(void)

double * FUN_147e7ad90(double *param_1,longlong *param_2)

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
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  longlong lVar16;
  double *pdVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_138 [32];
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined4 local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar15 = (**(code **)(*param_2 + 0x50))(param_2);
  if (lVar15 == 0) {
LAB_147e7ae6a:
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    *param_1 = 0.0;
    param_1[1] = 0.0;
    *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_138);
  }
  lVar16 = FUN_144a78d6a();
  if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(lVar16 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8)
      != lVar16 + 0x30)) {
    lVar16 = FUN_144a6c4d8();
    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(lVar16 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8
         ) != lVar16 + 0x30)) goto LAB_147e7ae6a;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    *param_1 = 0.0;
    param_1[1] = 0.0;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else {
    lVar15 = *(longlong *)(lVar15 + 0xa8);
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    *param_1 = 0.0;
    param_1[1] = 0.0;
    *(undefined1 *)(param_1 + 6) = 0;
    if (lVar15 == 0) goto LAB_147e7b19a;
  }
  local_d4 = 0;
  (**(code **)(*param_2 + 0x10))(param_2,&local_f8,&local_118);
  pdVar17 = (double *)&DAT_14c846480;
  if (*(longlong *)(lVar15 + 0x1c8) != 0) {
    pdVar17 = (double *)(*(longlong *)(lVar15 + 0x1c8) + 0x240);
  }
  dVar12 = *pdVar17;
  dVar13 = pdVar17[1];
  dVar14 = pdVar17[2];
  local_f8 = local_f8 * pdVar17[8];
  dStack_f0 = dStack_f0 * pdVar17[9];
  local_e8 = local_e8 * pdVar17[10];
  dVar1 = pdVar17[3];
  dVar19 = pdVar17[3];
  dVar18 = dStack_f0 * dVar12 - dVar13 * local_f8;
  dVar3 = local_e8 * dVar13 - dVar14 * dStack_f0;
  dVar6 = local_f8 * dVar14 - dVar12 * local_e8;
  dVar3 = dVar3 + dVar3;
  dVar6 = dVar6 + dVar6;
  dVar18 = dVar18 + dVar18;
  local_118 = pdVar17[8] * local_118;
  dStack_110 = pdVar17[9] * dStack_110;
  local_108 = local_108 * pdVar17[10];
  dVar8 = dStack_110 * dVar12 - dVar13 * local_118;
  dVar10 = local_108 * dVar13 - dVar14 * dStack_110;
  dVar4 = local_118 * dVar14 - dVar12 * local_108;
  dVar10 = dVar10 + dVar10;
  dVar4 = dVar4 + dVar4;
  dVar8 = dVar8 + dVar8;
  dVar9 = pdVar17[4];
  dVar11 = pdVar17[5];
  dVar20 = (dVar18 * dVar13 - dVar6 * dVar14) + dVar1 * dVar3 + local_f8 + dVar9;
  dVar7 = (dVar14 * dVar3 - dVar12 * dVar18) + dVar19 * dVar6 + dStack_f0 + dVar11;
  dVar2 = pdVar17[6];
  dVar18 = dVar18 * dVar1 + local_e8 + (dVar6 * dVar12 - dVar3 * dVar13) + dVar2;
  auVar5._8_4_ = SUB84(dVar7,0);
  auVar5._0_8_ = dVar20;
  auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 3) = auVar5;
  param_1[5] = dVar18;
  *param_1 = param_1[3];
  param_1[1] = param_1[4];
  param_1[2] = param_1[5];
  *(undefined1 *)(param_1 + 6) = 1;
  dVar9 = (dVar8 * dVar13 - dVar14 * dVar4) + dVar1 * dVar10 + local_118 + dVar9;
  dVar11 = (dVar10 * dVar14 - dVar12 * dVar8) + dVar19 * dVar4 + dStack_110 + dVar11;
  dVar2 = dVar8 * dVar1 + local_108 + (dVar4 * dVar12 - dVar13 * dVar10) + dVar2;
  dVar19 = *param_1;
  if (dVar9 <= *param_1) {
    dVar19 = dVar9;
  }
  *param_1 = dVar19;
  if (dVar20 <= dVar9) {
    dVar20 = dVar9;
  }
  dVar19 = param_1[1];
  if (dVar11 <= param_1[1]) {
    dVar19 = dVar11;
  }
  param_1[1] = dVar19;
  dVar19 = param_1[2];
  if (dVar2 <= param_1[2]) {
    dVar19 = dVar2;
  }
  param_1[2] = dVar19;
  param_1[3] = dVar20;
  if (dVar7 <= dVar11) {
    dVar7 = dVar11;
  }
  param_1[4] = dVar7;
  if (dVar18 <= dVar2) {
    dVar18 = dVar2;
  }
  param_1[5] = dVar18;
LAB_147e7b19a:
  if ((local_d0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7b1b6 FUN_147e7b1b6 body=179 status=ok
// SIG undefined FUN_147e7b1b6(void)

void FUN_147e7b1b6(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 *local_a8;
  undefined4 local_a0;
  longlong local_98 [2];
  longlong *local_88;
  longlong local_78 [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98[0] = 0;
  local_88 = (longlong *)0x0;
  local_28 = *(undefined8 *)(param_2 + 0xc);
  local_a8 = &local_58;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = param_2[4];
  uStack_44 = param_2[5];
  uStack_40 = param_2[6];
  uStack_3c = param_2[7];
  local_38 = param_2[8];
  uStack_34 = param_2[9];
  uStack_30 = param_2[10];
  uStack_2c = param_2[0xb];
  local_a0 = 1;
  local_b8 = 0;
  FUN_143833572(param_1 + 0x4c8,&local_a8,local_38,local_98);
  if (local_98[0] != 0) {
    plVar1 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar1 = local_78;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7b26a FUN_147e7b26a body=177 status=ok
// SIG undefined FUN_147e7b26a(void)

undefined8 FUN_147e7b26a(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x480) != *(int *)(param_1 + 0x4ac)) {
    lVar3 = param_1 + 0x4b0;
    if (*(longlong *)(param_1 + 0x4b8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x4b8);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x4c0) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      while (lVar3 = *(longlong *)(param_1 + 0x478) + (longlong)iVar2 * 0x20,
            *(longlong *)(*(longlong *)(param_1 + 0x478) + (longlong)iVar2 * 0x20) != param_2) {
        iVar2 = *(int *)(lVar3 + 0x18);
        if (iVar2 == -1) {
          return 0;
        }
      }
      if ((lVar3 != -8 && lVar3 != 0) && (cVar1 = FUN_144729dda(), cVar1 != '\0')) {
        return *(undefined8 *)(lVar3 + 0x10);
      }
    }
  }
  return 0;
}



// FUNCTION 147e7b31c FUN_147e7b31c body=335 status=ok
// SIG undefined FUN_147e7b31c(void)

void FUN_147e7b31c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  undefined8 local_38;
  longlong local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x280);
  local_30 = param_1 + 0x290;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (*(int *)(param_1 + 0x2a8) != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = local_28;
  iStack_5c = iStack_24;
  local_58 = local_20;
  local_54 = local_1c;
  local_70 = local_38;
  local_68 = local_30;
  local_40 = 0;
  local_78 = plVar1;
  local_50 = plVar1;
  local_48 = plVar1;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      plVar1 = (longlong *)FUN_14479d2ce(*local_78 + (longlong)iStack_5c * 0x48 + 0x38);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x7b0))(plVar1,param_2);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 0x18));
    if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
      FUN_147e87776(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7b46c FUN_147e7b46c body=167 status=ok
// SIG undefined FUN_147e7b46c(void)

void FUN_147e7b46c(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = FUN_147e7b52a(param_1 + 0xae,&local_28);
  if (iVar1 != 0) {
    FUN_147e7b668(param_1,param_2,1);
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar2 != 0) {
      FUN_1478c9b9e();
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7b52a FUN_147e7b52a body=318 status=ok
// SIG undefined FUN_147e7b52a(void)

undefined8 FUN_147e7b52a(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = *param_2;
    if ((uVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar6);
    }
    uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar4 + uVar6 * 4);
    if (iVar5 != -1) {
      puVar7 = (ulonglong *)((longlong)plVar4 + uVar6 * 4);
      bVar2 = DAT_14c950c29;
      do {
        puVar8 = (ulonglong *)((longlong)iVar5 * 0x10 + *param_1);
        uVar6 = *param_2;
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        uVar1 = *puVar8;
        if (((bVar2 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar2 = DAT_14c950c29;
        }
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        if (uVar1 == uVar6) {
          FUN_147e8819e(param_1,(int)*puVar7);
          return 1;
        }
        iVar5 = (int)puVar8[1];
        puVar7 = puVar8 + 1;
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 147e7b668 FUN_147e7b668 body=136 status=ok
// SIG undefined FUN_147e7b668(void)

void FUN_147e7b668(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
LAB_147e7b6ae:
        if (((*(byte *)(lVar3 + 0x65) & 2) == 0) && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) {
          FUN_147e7131c(lVar3,param_2,param_3);
        }
      }
      else if (lVar3 != 0) goto LAB_147e7b6ae;
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 147e7b700 FUN_147e7b700 body=70 status=ok
// SIG undefined FUN_147e7b700(void)

longlong FUN_147e7b700(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1478c9b79();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x168), lVar1 != 0)) {
    lVar2 = FUN_1409035a4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147e7b746 FUN_147e7b746 body=66 status=ok
// SIG undefined FUN_147e7b746(void)

void FUN_147e7b746(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_1 != 0) && (DAT_14cb1d8f0 == '\0')) {
    uVar1 = FUN_144a81dfc();
    lVar2 = FUN_144718840(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_14383810c(lVar2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147e7b78e FUN_147e7b78e body=242 status=ok
// SIG undefined FUN_147e7b78e(void)

void FUN_147e7b78e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [192];
  undefined1 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1 != 0) {
    if (DAT_14cb1d8f0 == '\0') {
      FUN_143838498(param_1);
    }
    local_28 = (undefined1 *)0x0;
    local_20 = 0x1800000000;
    FUN_1448c0c58(param_1,local_e8,0);
    if (0 < (int)local_20) {
      lVar4 = 0;
      iVar2 = (int)local_20;
      do {
        puVar3 = local_28;
        if (local_28 == (undefined1 *)0x0) {
          puVar3 = local_e8;
        }
        if ((*(longlong *)(puVar3 + lVar4 * 8) != 0) &&
           (((DAT_14c762388 != '\x01' ||
             (lVar1 = *(longlong *)(*(longlong *)(puVar3 + lVar4 * 8) + 0xa8), lVar1 == 0)) ||
            (*(char *)(lVar1 + 100) < '\0')))) {
          FUN_143838498();
          iVar2 = (int)local_20;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar2);
    }
    if (local_28 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7b882 FUN_147e7b882 body=191 status=ok
// SIG undefined FUN_147e7b882(void)

undefined8 FUN_147e7b882(longlong param_1,undefined4 *param_2,longlong *param_3,longlong *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb1d8f0 == '\0') {
    local_20 = param_1 + 0x4c8;
    local_28 = param_1 + 0x2d0;
    local_30 = *param_4;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_38 = *param_3;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    uVar1 = FUN_147e727f4(&local_28,&local_48,&local_38,&local_30);
  }
  else {
    uVar1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7b942 FUN_147e7b942 body=537 status=ok
// SIG undefined FUN_147e7b942(void)

void FUN_147e7b942(longlong param_1,int *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x100);
  lVar5 = *(longlong *)(param_1 + 0x100);
  iVar3 = *(int *)(param_1 + 0x108);
  lVar8 = (longlong)iVar3;
  if (lVar8 != 0) {
    lVar4 = 0;
    do {
      if (*param_2 == *(int *)(lVar5 + lVar4)) {
        uVar7 = (int)(lVar4 >> 3) * -0x45d1745d;
        if (uVar7 != 0xffffffff) {
          lVar8 = (longlong)(int)uVar7 * 0x58;
          if ((*(int *)(lVar5 + 0x50 + lVar8) != 1) || (param_2[0x14] != 0)) goto LAB_147e7bad8;
          local_50 = param_1 + 0x168;
          local_58 = 0x100000000;
          local_48 = 0xffffffff;
          local_40 = 0;
          if (*(int *)(param_1 + 0x180) != 0) {
            FUN_1449c0562(&local_58);
          }
          local_68 = local_48;
          uVar2 = local_68;
          local_60 = local_40;
          local_5c = local_3c;
          local_78 = local_58;
          local_70 = local_50;
          local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
          local_80 = (longlong *)(param_1 + 0x158);
          if (*(int *)(local_50 + 0x18) <= local_68._4_4_) goto LAB_147e7bad5;
          iVar3 = local_68._4_4_;
          local_68 = uVar2;
          goto LAB_147e7baa0;
        }
        break;
      }
      lVar4 = lVar4 + 0x58;
    } while (lVar8 * 0x58 - lVar4 != 0);
  }
  *(uint *)(param_1 + 0x108) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar3 + 1U) {
    FUN_147e883de(plVar1,iVar3);
    lVar5 = *plVar1;
  }
  puVar6 = (undefined8 *)(lVar8 * 0x58 + lVar5);
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *(undefined8 *)param_2;
    param_2 = param_2 + 2;
    puVar6 = puVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
  while( true ) {
    local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
    FUN_1449c0562(&local_78);
    iVar3 = local_68._4_4_;
    uVar2 = local_68;
    if (*(int *)(local_70 + 0x18) <= local_68._4_4_) break;
LAB_147e7baa0:
    if (*(int *)(*local_80 + (longlong)iVar3 * 0x58) == *param_2) {
      iVar3 = *(int *)(param_1 + 0x108);
      if (~uVar7 + iVar3 != 0) {
        memmove((void *)(*(longlong *)(param_1 + 0x100) + lVar8),
                (void *)(*(longlong *)(param_1 + 0x100) + lVar8 + 0x58),
                (longlong)(int)(~uVar7 + iVar3) * 0x58);
        iVar3 = *(int *)(param_1 + 0x108);
      }
      *(int *)(param_1 + 0x108) = iVar3 + -1;
      FUN_147e88338(plVar1);
      goto LAB_147e7bae6;
    }
  }
LAB_147e7bad5:
  local_68 = uVar2;
  lVar5 = *plVar1;
LAB_147e7bad8:
  puVar6 = (undefined8 *)(lVar5 + lVar8);
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *(undefined8 *)param_2;
    param_2 = param_2 + 2;
    puVar6 = puVar6 + 1;
  }
LAB_147e7bae6:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e7bb5c FUN_147e7bb5c body=189 status=ok
// SIG undefined FUN_147e7bb5c(void)

void FUN_147e7bb5c(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  undefined1 local_80 [48];
  undefined1 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 != (longlong *)0x0) && (DAT_14cb1d8f0 == '\0')) {
    local_50 = 0;
    local_48 = 0x7fffffff;
    local_40 = 0;
    local_88[0] = *(undefined4 *)((longlong)param_2 + 0xc);
    (**(code **)(*param_2 + 0x520))(param_2,local_80,1,0);
    uVar1 = FUN_144a79cc8(param_2);
    FUN_14485c47a((longlong)&local_48 + 4,uVar1);
    local_48 = CONCAT44(local_48._4_4_,(int)param_2[0x79]);
    local_38 = 0;
    FUN_147e7b942(param_1,local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7bc1a FUN_147e7bc1a body=199 status=ok
// SIG undefined FUN_147e7bc1a(void)

void FUN_147e7bc1a(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [40];
  undefined4 local_80 [2];
  undefined1 local_78 [48];
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 != (longlong *)0x0) && (DAT_14cb1d8f0 == '\0')) {
    local_48 = 0;
    local_40 = 0x7fffffff;
    local_38 = 0;
    local_80[0] = *(undefined4 *)((longlong)param_2 + 0xc);
    (**(code **)(*param_2 + 0x520))(param_2,local_78,1,0);
    uVar1 = FUN_144a79cc8(param_2);
    FUN_14485c47a((longlong)&local_40 + 4,uVar1);
    local_40 = CONCAT44(local_40._4_4_,(int)param_2[0x79]);
    local_30 = 1;
    FUN_147e7b942(param_1,local_80);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7bce2 FUN_147e7bce2 body=1146 status=ok
// SIG undefined FUN_147e7bce2(void)

void FUN_147e7bce2(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  longlong *plVar25;
  uint *puVar26;
  int iVar27;
  uint *puVar28;
  longlong lVar29;
  undefined8 *puVar30;
  uint *puVar31;
  longlong lVar32;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined3 uStack_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = 0;
  uStack_c0 = 0;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar31 = (uint *)*param_2;
    puVar26 = puVar31 + (longlong)*(int *)(param_2 + 1) * 0x16;
    plVar1 = param_1 + 0x2b;
    local_d0 = param_1 + 0x32;
    do {
      uVar22 = uStack_c0;
      if ((int)param_1[0x2c] != *(int *)((longlong)param_1 + 0x18c)) {
        plVar25 = (longlong *)param_1[0x33];
        if ((longlong *)param_1[0x33] == (longlong *)0x0) {
          plVar25 = local_d0;
        }
        iVar27 = *(int *)((longlong)plVar25 + (ulonglong)((int)param_1[0x34] - 1U & *puVar31) * 4);
        if (iVar27 != -1) {
          do {
            if (*(uint *)(*plVar1 + (longlong)iVar27 * 0x58) == *puVar31) goto LAB_147e7bd83;
            iVar27 = *(int *)((longlong)iVar27 * 0x58 + *plVar1 + 0x50);
          } while (iVar27 != -1);
        }
      }
      iVar27 = -1;
LAB_147e7bd83:
      uVar23 = puVar31[0x14];
      if ((uVar23 == 0) || (uVar23 == 2)) {
        if (iVar27 == -1) {
          FUN_147e8853a(plVar1,&local_b8,puVar31);
        }
        else {
          lVar24 = *plVar1;
          lVar29 = (longlong)iVar27 * 0x58;
          dVar3 = *(double *)(lVar24 + 8 + lVar29);
          dVar4 = *(double *)(lVar24 + 0x10 + lVar29);
          dVar5 = *(double *)(lVar24 + 0x18 + lVar29);
          dVar6 = *(double *)(lVar24 + 0x20 + lVar29);
          dVar7 = *(double *)(lVar24 + 0x28 + lVar29);
          dVar8 = *(double *)(lVar24 + 0x30 + lVar29);
          cVar9 = *(char *)(lVar24 + 0x38 + lVar29);
          uStack_b4 = (undefined3)((uint)*(undefined4 *)(lVar24 + 0x3c + lVar29) >> 8);
          local_b8 = *(undefined4 *)(lVar24 + 0x39 + lVar29);
          if ((char)puVar31[0xe] != '\0' || cVar9 != '\0') {
            if (((char)puVar31[0xe] != '\0') && (cVar9 != '\0')) {
              if ((*(double *)(puVar31 + 2) == dVar3) &&
                 (!NAN(*(double *)(puVar31 + 2)) && !NAN(dVar3))) {
                if ((*(double *)(puVar31 + 4) == dVar4) &&
                   (!NAN(*(double *)(puVar31 + 4)) && !NAN(dVar4))) {
                  if ((*(double *)(puVar31 + 6) == dVar5) &&
                     (!NAN(*(double *)(puVar31 + 6)) && !NAN(dVar5))) {
                    if ((*(double *)(puVar31 + 8) == dVar6) &&
                       (!NAN(*(double *)(puVar31 + 8)) && !NAN(dVar6))) {
                      if ((*(double *)(puVar31 + 10) == dVar7) &&
                         (!NAN(*(double *)(puVar31 + 10)) && !NAN(dVar7))) {
                        if ((*(double *)(puVar31 + 0xc) == dVar8) &&
                           (!NAN(*(double *)(puVar31 + 0xc)) && !NAN(dVar8))) goto LAB_147e7bf3d;
                      }
                    }
                  }
                }
              }
            }
            lVar24 = (longlong)(int)uStack_c0;
            uVar23 = (int)uStack_c0 + 1;
            uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar23);
            if (uStack_c0._4_4_ < uVar23) {
              FUN_140555802(&local_c8,uVar22 & 0xffffffff);
            }
            lVar24 = lVar24 * 0x38;
            *(double *)(local_c8 + lVar24) = dVar3;
            *(double *)(local_c8 + 8 + lVar24) = dVar4;
            *(double *)(local_c8 + 0x10 + lVar24) = dVar5;
            *(double *)(local_c8 + 0x18 + lVar24) = dVar6;
            *(double *)(local_c8 + 0x20 + lVar24) = dVar7;
            *(double *)(local_c8 + 0x28 + lVar24) = dVar8;
            *(char *)(local_c8 + 0x30 + lVar24) = cVar9;
            *(uint *)(local_c8 + 0x34 + lVar24) = CONCAT31(uStack_b4,local_b8._3_1_);
            *(undefined4 *)(local_c8 + 0x31 + lVar24) = local_b8;
            lVar24 = *plVar1;
          }
LAB_147e7bf3d:
          puVar28 = puVar31;
          puVar30 = (undefined8 *)(lVar24 + lVar29);
          for (lVar32 = 10; lVar32 != 0; lVar32 = lVar32 + -1) {
            *puVar30 = *(undefined8 *)puVar28;
            puVar28 = puVar28 + 2;
            puVar30 = puVar30 + 1;
          }
        }
        uVar22 = uStack_c0;
        lVar24 = (longlong)(int)uStack_c0;
        uVar23 = (int)uStack_c0 + 1;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar23);
        if (uStack_c0._4_4_ < uVar23) {
          FUN_140555802(&local_c8,uVar22 & 0xffffffff);
        }
        lVar24 = lVar24 * 0x38;
        *(undefined8 *)(local_c8 + 0x30 + lVar24) = *(undefined8 *)(puVar31 + 0xe);
        uVar10 = *(undefined8 *)(puVar31 + 2);
        uVar11 = *(undefined8 *)(puVar31 + 4);
        uVar19 = *(undefined8 *)(puVar31 + 6);
        uVar20 = *(undefined8 *)(puVar31 + 8);
        uVar21 = *(undefined8 *)(puVar31 + 0xc);
        puVar30 = (undefined8 *)(local_c8 + 0x20 + lVar24);
        *puVar30 = *(undefined8 *)(puVar31 + 10);
        puVar30[1] = uVar21;
        puVar30 = (undefined8 *)(local_c8 + 0x10 + lVar24);
        *puVar30 = uVar19;
        puVar30[1] = uVar20;
        *(undefined8 *)(local_c8 + lVar24) = uVar10;
        ((undefined8 *)(local_c8 + lVar24))[1] = uVar11;
      }
      else if ((uVar23 == 1) && (iVar27 != -1)) {
        lVar24 = *plVar1;
        lVar29 = (longlong)(int)uStack_c0;
        uVar23 = (int)uStack_c0 + 1;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar23);
        if (uStack_c0._4_4_ < uVar23) {
          FUN_140555802(&local_c8,uVar22 & 0xffffffff);
        }
        lVar24 = (longlong)iVar27 * 0x58 + lVar24;
        lVar29 = lVar29 * 0x38;
        *(undefined8 *)(local_c8 + 0x30 + lVar29) = *(undefined8 *)(lVar24 + 0x38);
        uVar10 = *(undefined8 *)(lVar24 + 8);
        uVar11 = *(undefined8 *)(lVar24 + 0x10);
        uVar12 = *(undefined4 *)(lVar24 + 0x18);
        uVar13 = *(undefined4 *)(lVar24 + 0x1c);
        uVar14 = *(undefined4 *)(lVar24 + 0x20);
        uVar15 = *(undefined4 *)(lVar24 + 0x24);
        uVar16 = *(undefined4 *)(lVar24 + 0x2c);
        uVar17 = *(undefined4 *)(lVar24 + 0x30);
        uVar18 = *(undefined4 *)(lVar24 + 0x34);
        puVar2 = (undefined4 *)(local_c8 + 0x20 + lVar29);
        *puVar2 = *(undefined4 *)(lVar24 + 0x28);
        puVar2[1] = uVar16;
        puVar2[2] = uVar17;
        puVar2[3] = uVar18;
        puVar2 = (undefined4 *)(local_c8 + 0x10 + lVar29);
        *puVar2 = uVar12;
        puVar2[1] = uVar13;
        puVar2[2] = uVar14;
        puVar2[3] = uVar15;
        *(undefined8 *)(local_c8 + lVar29) = uVar10;
        ((undefined8 *)(local_c8 + lVar29))[1] = uVar11;
        FUN_147e8846e(plVar1,iVar27);
      }
      puVar31 = puVar31 + 0x16;
    } while (puVar31 != puVar26);
    if (((int)uStack_c0 != 0) && (lVar24 = param_1[0x1d], (longlong)(int)lVar24 != 0)) {
      lVar29 = param_1[0x1c];
      lVar32 = 0;
      do {
        if (*(longlong **)(lVar29 + lVar32) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar29 + lVar32) + 0x668))();
        }
        lVar32 = lVar32 + 8;
      } while ((longlong)(int)lVar24 * 8 != lVar32);
    }
  }
  if ((char)param_1[0xa5] == '\0') {
    FUN_1446ddc76(&local_b8,"Navigation bounds update",1);
    if (0 < (int)uStack_c0) {
      lVar24 = 0;
      lVar29 = 0;
      do {
        FUN_147e7b1b6(param_1,local_c8 + lVar24,0xb);
        lVar29 = lVar29 + 1;
        lVar24 = lVar24 + 0x38;
      } while (lVar29 < (int)uStack_c0);
    }
  }
  if ((int)param_1[0x1d] == 0) {
    if ((((int)param_1[0x1f] < 1) ||
        ((**(code **)(*param_1 + 0x3c8))(param_1), (int)param_1[0x1d] == 0)) &&
       ((*(byte *)(param_1 + 0xd) & 1) != 0)) {
      (**(code **)(*param_1 + 0x468))(param_1);
      (**(code **)(*param_1 + 0x3c8))(param_1);
    }
    (**(code **)(*param_1 + 0x3b8))(param_1);
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e7c15e FUN_147e7c15e body=378 status=ok
// SIG undefined FUN_147e7c15e(void)

void FUN_147e7c15e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_128 [40];
  undefined4 local_100 [2];
  undefined1 local_f8 [48];
  undefined1 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined1 local_a4 [4];
  undefined1 local_a0 [8];
  undefined1 local_98 [28];
  char local_7c;
  longlong *local_70;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_147e7c2da(param_1 + 0x2b);
  local_b0 = FUN_1459eadfe();
  if ((local_b0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_b0);
  }
  uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_147e7a57e(local_a0,uVar2,&local_b0);
  if (local_7c == '\0') {
    do {
      plVar1 = local_70;
      if (((local_70 != (longlong *)0x0) && ((*(uint *)(local_70 + 1) >> 0x1e & 1) == 0)) &&
         (*(char *)((longlong)local_70 + 100) < '\0')) {
        local_c8 = 0;
        local_c0 = 0x7fffffff;
        local_b8 = 0;
        local_100[0] = *(undefined4 *)((longlong)local_70 + 0xc);
        (**(code **)(*local_70 + 0x520))(local_70,local_f8,1,0);
        uVar2 = FUN_144a79cc8(plVar1);
        FUN_14485c47a((longlong)&local_c0 + 4,uVar2);
        local_c0 = CONCAT44(local_c0._4_4_,(int)plVar1[0x79]);
        FUN_147e8853a(param_1 + 0x2b,local_a4,local_100);
      }
      FUN_147e7a600(local_a0);
    } while (local_7c == '\0');
  }
  if (local_48 == '\x01') {
    FUN_14024445c(local_98);
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7c2da FUN_147e7c2da body=63 status=ok
// SIG undefined FUN_147e7c2da(void)

void FUN_147e7c2da(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145d15246(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147e887ce(param_1);
    return;
  }
  FUN_147e88972(param_1);
  FUN_145d15246(param_1);
  return;
}



// FUNCTION 147e7c31a FUN_147e7c31a body=288 status=ok
// SIG undefined FUN_147e7c31a(void)

void FUN_147e7c31a(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_388 [40];
  undefined8 local_360 [96];
  undefined8 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_388;
  local_60 = (undefined8 *)0x0;
  local_58 = 0x2000000000;
  (**(code **)(*param_1 + 1000))(param_1,param_2,local_360);
  puVar6 = local_60;
  if (local_60 == (undefined8 *)0x0) {
    puVar6 = local_360;
  }
  if ((longlong)(int)local_58 != 0) {
    puVar1 = puVar6 + (longlong)(int)local_58 * 3;
    do {
      uVar2 = *puVar6;
      uVar3 = puVar6[1];
      iVar4 = *(int *)(param_3 + 0x208);
      *(uint *)(param_3 + 0x208) = iVar4 + 1U;
      if (*(uint *)(param_3 + 0x20c) < iVar4 + 1U) {
        FUN_147e88ab6(param_3,iVar4);
      }
      lVar5 = *(longlong *)(param_3 + 0x200);
      if (*(longlong *)(param_3 + 0x200) == 0) {
        lVar5 = param_3;
      }
      *(undefined8 *)(lVar5 + (longlong)iVar4 * 0x10) = uVar2;
      *(undefined8 *)(lVar5 + 8 + (longlong)iVar4 * 0x10) = uVar3;
      puVar6 = puVar6 + 3;
    } while (puVar6 != puVar1);
  }
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e7c43c FUN_147e7c43c body=404 status=ok
// SIG undefined FUN_147e7c43c(void)

void FUN_147e7c43c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a7d35a(param_2,&local_60);
  if (-1 < (int)local_58) {
    do {
      if ((int)local_60[1] <= (int)local_58) break;
      lVar8 = FUN_14479d2ce((ulonglong)local_58 * 8 + *local_60);
      if (lVar8 != 0) {
        if (*(longlong *)(lVar8 + 0x3d0) == 0) {
          plVar4 = *(longlong **)(lVar8 + 0x448);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x730))(plVar4,&local_78);
            iVar3 = *(int *)(param_3 + 0x308);
            *(uint *)(param_3 + 0x308) = iVar3 + 1U;
            if (*(uint *)(param_3 + 0x30c) < iVar3 + 1U) {
              FUN_147e43da8(param_3,iVar3);
            }
            lVar8 = *(longlong *)(param_3 + 0x300);
            if (*(longlong *)(param_3 + 0x300) == 0) {
              lVar8 = param_3;
            }
            *(undefined8 *)(lVar8 + 0x10 + (longlong)iVar3 * 0x18) = local_68;
            puVar2 = (undefined4 *)(lVar8 + (longlong)iVar3 * 0x18);
            *puVar2 = local_78;
            puVar2[1] = uStack_74;
            puVar2[2] = uStack_70;
            puVar2[3] = uStack_6c;
          }
        }
        else {
          lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x3d0) + 0x1c8);
          if (lVar8 == 0) {
            uVar10 = (undefined4)DAT_14c8464f0;
            uVar11 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            puVar9 = &DAT_14c8464e0;
          }
          else {
            uVar10 = (undefined4)*(undefined8 *)(lVar8 + 0x270);
            uVar11 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x270) >> 0x20);
            puVar9 = (undefined8 *)(lVar8 + 0x260);
          }
          uVar6 = *puVar9;
          uVar7 = puVar9[1];
          iVar3 = *(int *)(param_3 + 0x308);
          *(uint *)(param_3 + 0x308) = iVar3 + 1U;
          if (*(uint *)(param_3 + 0x30c) < iVar3 + 1U) {
            FUN_147e43da8(param_3,iVar3);
          }
          lVar8 = *(longlong *)(param_3 + 0x300);
          if (*(longlong *)(param_3 + 0x300) == 0) {
            lVar8 = param_3;
          }
          puVar9 = (undefined8 *)(lVar8 + (longlong)iVar3 * 0x18);
          *puVar9 = uVar6;
          puVar9[1] = uVar7;
          *(ulonglong *)(lVar8 + 0x10 + (longlong)iVar3 * 0x18) = CONCAT44(uVar11,uVar10);
        }
      }
      uVar1 = local_58 + 1;
      bVar5 = -2 < (int)local_58;
      local_58 = uVar1;
    } while (bVar5);
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e7c5d2 FUN_147e7c5d2 body=76 status=ok
// SIG undefined FUN_147e7c5d2(void)

void FUN_147e7c5d2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if ((lVar3 != 0) && (plVar4 = *(longlong **)(lVar3 + 0x468), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x18))();
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 147e7c61e FUN_147e7c61e body=236 status=ok
// SIG undefined FUN_147e7c61e(void)

void FUN_147e7c61e(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = 0;
  if (0 < (int)*(uint *)(param_1 + 0x98)) {
    uVar4 = 0;
    uVar3 = 0;
    do {
      if (uVar3 < 0x10) {
        bVar5 = (*(uint *)(param_1 + 0xa0) >> (uVar3 & 0x1f) & 1) != 0;
      }
      else {
        bVar5 = false;
      }
      uVar4 = uVar4 + bVar5;
      uVar3 = uVar3 + 1;
    } while (*(uint *)(param_1 + 0x98) != uVar3);
  }
  local_28 = 0;
  local_20 = 0x8000000000;
  bVar1 = FUN_147e7c70c(param_1);
  if (bVar1 < uVar4) {
    FUN_143838e5a(param_1,local_38);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (((lVar2 == 0) || ((*(byte *)(lVar2 + 0x65) & 2) != 0)) ||
     ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) {
    lVar2 = FUN_147e791d4(param_1);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x28) = lVar2;
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7c70c FUN_147e7c70c body=552 status=ok
// SIG undefined FUN_147e7c70c(void)

byte FUN_147e7c70c(longlong *param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte bVar7;
  void *pvVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  int *local_b0;
  void *local_a8;
  longlong *local_a0;
  byte *local_98;
  byte local_8d;
  int local_8c;
  undefined1 local_88 [8];
  undefined1 local_80 [28];
  char local_64;
  longlong local_58;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_8c = (int)param_1[0x13];
  *(int *)((longlong)param_2 + 0x18) = local_8c;
  uVar9 = local_8c + 0x1f;
  if (0x1f < uVar9) {
    uVar11 = uVar9 >> 5;
    if (*(int *)((longlong)param_2 + 0x1c) + 0x1fU >> 5 < uVar11) {
      FUN_14499171c(param_2,0,uVar11,4);
      *(uint *)((longlong)param_2 + 0x1c) = uVar9 & 0xffffffe0;
    }
    pvVar8 = *(void **)((longlong)param_2 + 0x10);
    if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
      pvVar8 = param_2;
    }
    if (uVar9 < 0x120) {
      uVar11 = uVar9 >> 3 & 0x3c;
    }
    else {
      uVar11 = uVar11 << 2;
    }
    memset(pvVar8,0,(ulonglong)uVar11);
    iVar1 = *(int *)((longlong)param_2 + 0x18);
    iVar3 = iVar1 + 0x1f;
    if (-1 < iVar1) {
      iVar3 = iVar1;
    }
    if (iVar1 % 0x20 != 0) {
      pvVar8 = *(void **)((longlong)param_2 + 0x10);
      if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
        pvVar8 = param_2;
      }
      bVar7 = -(char)(iVar1 % 0x20);
      *(uint *)((longlong)pvVar8 + (longlong)(iVar3 >> 5) * 4) =
           (uint)(*(int *)((longlong)pvVar8 + (longlong)(iVar3 >> 5) * 4) << (bVar7 & 0x1f)) >>
           (bVar7 & 0x1f);
    }
  }
  local_98 = &local_8d;
  local_8d = 0;
  local_b0 = &local_8c;
  local_a8 = param_2;
  local_a0 = param_1;
  lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  local_b8 = FUN_14110d034();
  if ((local_b8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_b8);
  }
  FUN_147e78ea6(local_88,lVar4);
  if ((local_64 == '\0') && ((int)(uint)local_8d < local_8c)) {
    do {
      lVar2 = local_58;
      if ((local_58 != 0) && ((*(uint *)(local_58 + 8) >> 0x1e & 1) == 0)) {
        uVar5 = FUN_144a7757c();
        lVar6 = FUN_144a78ede(lVar2,uVar5);
        if (lVar6 == lVar4) {
LAB_147e7c7ff:
          FUN_143839028(&local_b0,lVar2);
        }
        else {
          lVar6 = FUN_144a79cc8(lVar2);
          if ((longlong)*(int *)(lVar4 + 0x198) != 0) {
            lVar10 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 400) + lVar10) == lVar6) goto LAB_147e7c7ff;
              lVar10 = lVar10 + 8;
            } while ((longlong)*(int *)(lVar4 + 0x198) * 8 != lVar10);
          }
        }
      }
      FUN_147e78f28(local_88);
    } while ((local_64 == '\0') && ((int)(uint)local_8d < local_8c));
  }
  if (local_30 == '\x01') {
    FUN_14024445c(local_80);
  }
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_8d;
}



// FUNCTION 147e7c936 FUN_147e7c936 body=303 status=ok
// SIG undefined FUN_147e7c936(void)

longlong * FUN_147e7c936(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_1 + 0x60;
  lVar3 = FUN_14479d2ce(lVar4);
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 0x68) == 0) goto LAB_147e7ca51;
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(lVar4,lVar3);
      if (lVar3 == 0) goto LAB_147e7ca51;
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(lVar4,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) goto LAB_147e7ca51;
  }
  lVar4 = FUN_144a797b2();
  if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) && (lVar4 = FUN_144a6c4d8(), lVar4 != 0)) &&
     (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
    lVar5 = 0;
    if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30) {
      lVar5 = lVar3;
    }
    *param_2 = lVar5;
    if (lVar5 == 0) {
      return param_2;
    }
    if (DAT_14c950c29 == '\0') {
      return param_2;
    }
    FUN_1456cec3c();
    return param_2;
  }
LAB_147e7ca51:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 147e7ca66 FUN_147e7ca66 body=109 status=ok
// SIG undefined FUN_147e7ca66(void)

undefined8 FUN_147e7ca66(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = *(int *)(param_1 + 0xe8);
  if (iVar4 == 0) {
    FUN_147e791d4(param_1);
    iVar4 = *(int *)(param_1 + 0xe8);
  }
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + lVar5 * 8);
      if ((lVar1 != 0) && (plVar2 = *(longlong **)(lVar1 + 0x468), plVar2 != (longlong *)0x0)) {
        cVar3 = (**(code **)(*plVar2 + 0x38))();
        if (cVar3 != '\0') {
          return 1;
        }
        iVar4 = *(int *)(param_1 + 0xe8);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  return 0;
}



// FUNCTION 147e7cad4 FUN_147e7cad4 body=69 status=ok
// SIG undefined FUN_147e7cad4(void)

void FUN_147e7cad4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1 + 0x120,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7cb1c FUN_147e7cb1c body=218 status=ok
// SIG undefined FUN_147e7cb1c(void)

void FUN_147e7cb1c(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    local_30 = 0;
    local_28 = 0;
    FUN_144a450dc(*(longlong *)(param_1 + 0x4f8) + 0x50,&local_30);
    FUN_1449db362(&local_30);
    local_30 = 0;
    local_28 = 0;
    FUN_144a450dc(*(longlong *)(param_1 + 0x4f8) + 0x60,&local_30);
    FUN_1449db362(&local_30);
    local_30 = 0;
    local_28 = 0;
    FUN_144a450dc(*(longlong *)(param_1 + 0x4f8) + 0x30,&local_30);
    FUN_1449db362(&local_30);
    local_30 = 0;
    local_28 = 0;
    FUN_144a450dc(*(longlong *)(param_1 + 0x4f8) + 0x40,&local_30);
    FUN_1449db362(&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7cbf8 FUN_147e7cbf8 body=225 status=ok
// SIG undefined FUN_147e7cbf8(void)

void FUN_147e7cbf8(longlong param_1,ulonglong param_2,float param_3,float param_4,uint *param_5,
                  undefined1 param_6)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (3.4e+38 <= param_3) {
    param_3 = 3.4e+38;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  if (3.4e+38 <= param_4) {
    param_4 = 3.4e+38;
  }
  if (param_4 <= param_3) {
    param_4 = param_3;
  }
  uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  local_58 = param_2;
  lVar2 = FUN_147e88e20(param_1 + 0x1a8,uVar1 >> 0x10 ^ uVar1);
  FUN_14485c47a(lVar2,param_2);
  *(float *)(lVar2 + 0x18) = param_3;
  *(float *)(lVar2 + 0x1c) = param_4;
  *(uint *)(lVar2 + 0x20) = *param_5 | 0x80000000;
  *(undefined1 *)(lVar2 + 0x24) = param_6;
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7ccda FUN_147e7ccda body=214 status=ok
// SIG undefined FUN_147e7ccda(void)

void FUN_147e7ccda(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                  uint *param_5,undefined1 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = FUN_14479d2ce(param_2);
  if (local_58 != 0) {
    uVar4 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar5 = FUN_147e893c6(param_1 + 0x1a8,uVar4 >> 0x10 ^ uVar4,&local_58);
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(lVar5 + 8) = *param_2;
    *(undefined4 *)(lVar5 + 0xc) = uVar1;
    *(undefined4 *)(lVar5 + 0x10) = uVar2;
    *(undefined4 *)(lVar5 + 0x14) = uVar3;
    *(undefined4 *)(lVar5 + 0x18) = param_3;
    *(undefined4 *)(lVar5 + 0x1c) = param_4;
    *(uint *)(lVar5 + 0x20) = *param_5 | 0x80000000;
    *(undefined1 *)(lVar5 + 0x24) = param_6;
  }
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7cdbe FUN_147e7cdbe body=50 status=ok
// SIG undefined FUN_147e7cdbe(void)

void FUN_147e7cdbe(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_2);
  if (lVar1 == 0) {
    return;
  }
  FUN_147e895a4(param_1 + 0x1a8,lVar1);
  return;
}



// FUNCTION 147e7cdf2 FUN_147e7cdf2 body=225 status=ok
// SIG undefined FUN_147e7cdf2(void)

longlong FUN_147e7cdf2(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_1447210f0();
  if ((lVar1 == 0) || (plVar5 = *(longlong **)(lVar1 + 0x168), plVar5 == (longlong *)0x0)) {
LAB_147e7ce43:
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar1 = FUN_1409035a4();
    if ((*(int *)(plVar5[2] + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) goto LAB_147e7ce43;
  }
  uVar2 = FUN_145958f2a();
  plVar3 = (longlong *)FUN_144718840(param_1,uVar2);
  if (plVar3 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3,local_40);
    lVar1 = (**(code **)(*plVar5 + 0x340))(plVar5,uVar2,local_40,&DAT_14c8464e0);
    if (lVar1 != 0) goto LAB_147e7ce98;
  }
  lVar1 = FUN_147e791d4(plVar5);
LAB_147e7ce98:
  lVar4 = lVar1 + 0x390;
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7ced4 FUN_147e7ced4 body=561 status=ok
// SIG undefined FUN_147e7ced4(void)

int FUN_147e7ced4(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  int local_98;
  uint local_94;
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
  iVar18 = (int)param_3[1];
  iVar17 = (*(int *)(param_1 + 0x160) - *(int *)(param_1 + 0x18c)) + iVar18;
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar17);
  }
  local_a0 = param_3;
  if (*(int *)((longlong)param_3 + 0xc) < iVar17) {
    FUN_1401a2d6a(param_3);
  }
  uVar14 = FUN_147e713ac(param_1,param_2);
  uVar10 = local_78;
  if (uVar14 != 0xffffffff) {
    plVar1 = (longlong *)(param_1 + 0x158);
    lVar2 = param_1 + 0x168;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    local_98 = iVar18;
    uStack_60 = lVar2;
    if (*(int *)(param_1 + 0x180) == 0) {
      iVar17 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar17 = *(int *)(param_1 + 0x180);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar10 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar17) || (iVar18 = local_98, uStack_60 != lVar2)) {
      local_94 = 1 << ((byte)uVar14 & 0x1f);
      iVar15 = local_78._4_4_;
      local_78 = uVar10;
      do {
        lVar19 = (longlong)iVar15 * 0x58 + *local_90;
        if (param_4 == 0) {
          if (uVar14 < 0x10) goto LAB_147e7d00b;
        }
        else {
          cVar13 = FUN_1404e5e32(lVar19 + 0x44,param_4);
          if ((uVar14 < 0x10) && (cVar13 != '\0')) {
LAB_147e7d00b:
            if ((*(uint *)(lVar19 + 0x40) & local_94) != 0) {
              iVar18 = (int)local_a0[1];
              *(uint *)(local_a0 + 1) = iVar18 + 1U;
              if (*(uint *)((longlong)local_a0 + 0xc) < iVar18 + 1U) {
                FUN_140555802(local_a0,iVar18);
              }
              lVar5 = *local_a0;
              lVar16 = (longlong)iVar18 * 0x38;
              *(undefined8 *)(lVar5 + 0x30 + lVar16) = *(undefined8 *)(lVar19 + 0x38);
              uVar6 = *(undefined4 *)(lVar19 + 8);
              uVar7 = *(undefined4 *)(lVar19 + 0xc);
              uVar8 = *(undefined4 *)(lVar19 + 0x10);
              uVar9 = *(undefined4 *)(lVar19 + 0x14);
              uVar10 = *(undefined8 *)(lVar19 + 0x18);
              uVar11 = *(undefined8 *)(lVar19 + 0x20);
              uVar12 = *(undefined8 *)(lVar19 + 0x30);
              puVar4 = (undefined8 *)(lVar5 + 0x20 + lVar16);
              *puVar4 = *(undefined8 *)(lVar19 + 0x28);
              puVar4[1] = uVar12;
              puVar4 = (undefined8 *)(lVar5 + 0x10 + lVar16);
              *puVar4 = uVar10;
              puVar4[1] = uVar11;
              puVar3 = (undefined4 *)(lVar5 + lVar16);
              *puVar3 = uVar6;
              puVar3[1] = uVar7;
              puVar3[2] = uVar8;
              puVar3[3] = uVar9;
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar18 = local_98;
        iVar15 = local_78._4_4_;
        uVar10 = local_78;
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar17));
    }
  }
  local_78 = uVar10;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (int)local_a0[1] - iVar18;
}



// FUNCTION 147e7d108 FUN_147e7d108 body=265 status=ok
// SIG undefined FUN_147e7d108(void)

undefined * FUN_147e7d108(longlong param_1)

{
  undefined *puVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb1dae0) && (FUN_144b3d300(&DAT_14cb1dae0), DAT_14cb1dae0 == -1)) {
    FUN_145c12714(&DAT_14cb1da58,0x420c0000,0x43100000);
    atexit(FUN_143839e04);
    _Init_thread_footer(&DAT_14cb1dae0);
  }
  puVar1 = &DAT_14cb1da58;
  if (0 < (longlong)*(int *)(param_1 + 0x98)) {
    uVar2 = 0xffffffff;
    lVar3 = 0x38;
    uVar4 = 0;
    do {
      if ((uVar4 < 0x10) && ((*(uint *)(param_1 + 0xa0) >> ((uint)uVar4 & 0x1f) & 1) != 0)) {
        if ((*(longlong *)(param_1 + 0x38) == 0) ||
           (*(longlong *)(*(longlong *)(param_1 + 0x90) + lVar3) == *(longlong *)(param_1 + 0x38)))
        {
          return (undefined *)(*(longlong *)(param_1 + 0x90) + lVar3 + -0x38);
        }
        if (uVar2 == 0xffffffff) {
          uVar2 = (uint)uVar4;
        }
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x88;
    } while ((longlong)*(int *)(param_1 + 0x98) != uVar4);
    if (uVar2 != 0xffffffff) {
      puVar1 = (undefined *)((longlong)(int)uVar2 * 0x88 + *(longlong *)(param_1 + 0x90));
    }
  }
  return puVar1;
}



// FUNCTION 147e7d212 FUN_147e7d212 body=288 status=ok
// SIG undefined FUN_147e7d212(void)

undefined * FUN_147e7d212(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined *puVar5;
  
  if ((param_1 != 0) && (lVar4 = *(longlong *)(param_1 + 0x168), lVar4 != 0)) {
    lVar1 = FUN_1409035a4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_147e7d270;
  }
  plVar2 = (longlong *)FUN_1409035a4();
  lVar4 = plVar2[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar4 = plVar2[0x22];
  }
LAB_147e7d270:
  if ((longlong)*(int *)(lVar4 + 0x98) == 0) {
    puVar5 = &DAT_14cb1d9c8;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb1da50) {
      FUN_144b3d300(&DAT_14cb1da50);
      if (DAT_14cb1da50 == -1) {
        puVar5 = &DAT_14cb1d9c8;
        FUN_145c12714(&DAT_14cb1d9c8,0x420c0000,0x43100000);
        atexit(FUN_143839dd4);
        _Init_thread_footer(&DAT_14cb1da50);
      }
    }
  }
  else {
    puVar3 = *(undefined **)(lVar4 + 0x90);
    lVar4 = (longlong)*(int *)(lVar4 + 0x98) * 0x88;
    puVar5 = (undefined *)0x0;
    do {
      if ((puVar5 == (undefined *)0x0) ||
         (*(float *)(puVar5 + 4) <= *(float *)(puVar3 + 4) &&
          *(float *)(puVar3 + 4) != *(float *)(puVar5 + 4))) {
        puVar5 = puVar3;
      }
      puVar3 = puVar3 + 0x88;
      lVar4 = lVar4 + -0x88;
    } while (lVar4 != 0);
  }
  return puVar5;
}



// FUNCTION 147e7d332 FUN_147e7d332 body=95 status=ok
// SIG undefined FUN_147e7d332(void)

undefined8 * FUN_147e7d332(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147e850b3(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147e897a0(param_1,iVar1);
      FUN_147e89816(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147e7d392 FUN_147e7d392 body=117 status=ok
// SIG undefined FUN_147e7d392(void)

void FUN_147e7d392(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (0 < (int)param_1[0x13]) {
    lVar3 = 0x38;
    uVar2 = 0;
    do {
      if ((0xf < uVar2) || ((*(uint *)(param_1 + 0x14) >> ((uint)uVar2 & 0x1f) & 1) == 0)) {
        lVar1 = (**(code **)(*param_1 + 0x358))(param_1,*(undefined8 *)(param_1[0x12] + lVar3));
        if (lVar1 != 0) {
          (**(code **)(*param_1 + 0x3a0))(param_1,lVar1);
        }
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x88;
    } while ((longlong)uVar2 < (longlong)(int)param_1[0x13]);
  }
  return;
}



// FUNCTION 147e7d408 FUN_147e7d408 body=152 status=ok
// SIG undefined FUN_147e7d408(void)

void FUN_147e7d408(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_2 + 0x4c) != 0) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_2 + 0x4c);
  }
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0x48);
  FUN_147e785c8(param_1);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    if (*(int *)(param_1 + 0x98) == 1) {
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x38);
LAB_147e7d455:
      *(undefined8 *)(param_1 + 0x38) = *puVar3;
    }
    else if (0 < *(int *)(param_1 + 0x98)) {
      lVar4 = 0x38;
      lVar2 = 0;
      do {
        cVar1 = FUN_1478cda0a(*(longlong *)(param_1 + 0x90) + lVar4 + -0x38);
        if (cVar1 != '\0') {
          puVar3 = (undefined8 *)(lVar4 + *(longlong *)(param_1 + 0x90));
          goto LAB_147e7d455;
        }
        lVar2 = lVar2 + 1;
        lVar4 = lVar4 + 0x88;
      } while (lVar2 < *(int *)(param_1 + 0x98));
    }
  }
  return;
}



// FUNCTION 147e7d4a0 FUN_147e7d4a0 body=170 status=ok
// SIG undefined FUN_147e7d4a0(void)

void FUN_147e7d4a0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = *(uint *)(param_1 + 0xa0);
  if (((*(uint *)(param_2 + 0x48) ^ uVar2) & 0x7fffffff) != 0) {
    uVar1 = *(uint *)(param_1 + 0x98);
    if (0 < (int)uVar1) {
      bVar3 = false;
      uVar4 = 0;
      do {
        uVar5 = uVar4;
        while( true ) {
          uVar4 = uVar5 + 1;
          uVar6 = 1 << ((byte)uVar5 & 0x1f);
          if (((uVar6 & *(uint *)(param_2 + 0x48)) != 0 && uVar5 < 0x10) && (uVar6 & uVar2) == 0)
          break;
          uVar5 = uVar4;
          if (uVar4 == uVar1) {
            if (bVar3) goto LAB_147e7d540;
            goto LAB_147e7d529;
          }
        }
        uVar2 = uVar2 | uVar6;
        *(uint *)(param_1 + 0xa0) = uVar2;
        bVar3 = true;
      } while (uVar4 != uVar1);
LAB_147e7d540:
      FUN_147e785c8(param_1);
    }
LAB_147e7d529:
    if (*(longlong *)(param_1 + 0x38) == 0) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x4c);
    }
  }
  return;
}



// FUNCTION 147e7d54a FUN_147e7d54a body=45 status=ok
// SIG undefined FUN_147e7d54a(void)

longlong FUN_147e7d54a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e7d5b0 FUN_147e7d5b0 body=41 status=ok
// SIG undefined FUN_147e7d5b0(void)

void FUN_147e7d5b0(void)

{
  FUN_140033559(".\\Runtime/NavigationSystem/Public/CrowdManagerBase.h",0x11,
                L"Pure virtual not implemented (%s)",L"UCrowdManagerBase::Tick");
  return;
}



// FUNCTION 147e7d5da FUN_147e7d5da body=41 status=ok
// SIG undefined FUN_147e7d5da(void)

void FUN_147e7d5da(void)

{
  FUN_140033559(".\\Runtime/NavigationSystem/Public/CrowdManagerBase.h",0x14,
                L"Pure virtual not implemented (%s)",L"UCrowdManagerBase::OnNavDataRegistered");
  return;
}



// FUNCTION 147e7d604 FUN_147e7d604 body=41 status=ok
// SIG undefined FUN_147e7d604(void)

void FUN_147e7d604(void)

{
  FUN_140033559(".\\Runtime/NavigationSystem/Public/CrowdManagerBase.h",0x17,
                L"Pure virtual not implemented (%s)",L"UCrowdManagerBase::OnNavDataUnregistered");
  return;
}



// FUNCTION 147e7d62e FUN_147e7d62e body=41 status=ok
// SIG undefined FUN_147e7d62e(void)

void FUN_147e7d62e(void)

{
  FUN_140033559(".\\Runtime/NavigationSystem/Public/CrowdManagerBase.h",0x19,
                L"Pure virtual not implemented (%s)",L"UCrowdManagerBase::CleanUp");
  return;
}



// FUNCTION 147e7d6b6 FUN_147e7d6b6 body=56 status=ok
// SIG undefined FUN_147e7d6b6(void)

void FUN_147e7d6b6(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_3 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147e7d6e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e7d6ee FUN_147e7d6ee body=56 status=ok
// SIG undefined FUN_147e7d6ee(void)

undefined8 FUN_147e7d6ee(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e7d726 FUN_147e7d726 body=56 status=ok
// SIG undefined FUN_147e7d726(void)

undefined8 FUN_147e7d726(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000040;
  
  plVar3 = *(longlong **)(in_stack_00000040 + 8);
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
  return 0;
}



// FUNCTION 147e7d75e FUN_147e7d75e body=86 status=ok
// SIG undefined FUN_147e7d75e(void)

undefined4 * FUN_147e7d75e(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  *(undefined8 *)(param_2 + 6) = 0;
  plVar3 = *(longlong **)(param_3 + 8);
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
  return param_2;
}



// FUNCTION 147e7d7b4 FUN_147e7d7b4 body=56 status=ok
// SIG undefined FUN_147e7d7b4(void)

undefined8 FUN_147e7d7b4(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e7d7ec FUN_147e7d7ec body=56 status=ok
// SIG undefined FUN_147e7d7ec(void)

undefined8 FUN_147e7d7ec(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e7d824 FUN_147e7d824 body=56 status=ok
// SIG undefined FUN_147e7d824(void)

void FUN_147e7d824(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_3 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147e7d851. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e7d85c FUN_147e7d85c body=56 status=ok
// SIG undefined FUN_147e7d85c(void)

void FUN_147e7d85c(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_R9;
  
  plVar3 = *(longlong **)(in_R9 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147e7d889. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e7d894 FUN_147e7d894 body=56 status=ok
// SIG undefined FUN_147e7d894(void)

undefined8 FUN_147e7d894(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e7d8cc FUN_147e7d8cc body=56 status=ok
// SIG undefined FUN_147e7d8cc(void)

undefined8 FUN_147e7d8cc(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e7d904 FUN_147e7d904 body=56 status=ok
// SIG undefined FUN_147e7d904(void)

undefined8 FUN_147e7d904(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000030;
  
  plVar3 = *(longlong **)(in_stack_00000030 + 8);
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
  return 0;
}



// FUNCTION 147e7d956 FUN_147e7d956 body=56 status=ok
// SIG undefined FUN_147e7d956(void)

undefined8 FUN_147e7d956(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e7d98e FUN_147e7d98e body=56 status=ok
// SIG undefined FUN_147e7d98e(void)

undefined8 FUN_147e7d98e(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e7d9ca FUN_147e7d9ca body=38 status=ok
// SIG undefined FUN_147e7d9ca(void)

undefined8 FUN_147e7d9ca(undefined8 param_1,int param_2)

{
  FUN_147e898ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e7da22 FUN_147e7da22 body=38 status=ok
// SIG undefined FUN_147e7da22(void)

undefined8 FUN_147e7da22(undefined8 param_1,int param_2)

{
  FUN_147e6f9fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e7da76 FUN_147e7da76 body=52 status=ok
// SIG undefined FUN_147e7da76(void)

longlong FUN_147e7da76(undefined8 param_1,longlong param_2)

{
  FUN_140033559("Runtime\\NavigationSystem\\Public\\NavigationData.h",0x2ec,
                L"Pure virtual not implemented (%s)",L"ANavigationData::GetBounds");
  *(undefined1 *)(param_2 + 0x30) = 0;
  return param_2;
}



// FUNCTION 147e7daaa FUN_147e7daaa body=90 status=ok
// SIG undefined FUN_147e7daaa(void)

void FUN_147e7daaa(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140033559("Runtime\\NavigationSystem\\Public\\NavigationData.h",0x365,
                L"Pure virtual not implemented (%s)",L"ANavigationData::BatchRaycast");
  plVar3 = *(longlong **)(param_3 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147e7daf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e7db04 FUN_147e7db04 body=87 status=ok
// SIG undefined FUN_147e7db04(void)

undefined8 FUN_147e7db04(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  FUN_140033559("Runtime\\NavigationSystem\\Public\\NavigationData.h",0x374,
                L"Pure virtual not implemented (%s)",L"ANavigationData::FindOverlappingEdges");
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e7db5c FUN_147e7db5c body=87 status=ok
// SIG undefined FUN_147e7db5c(void)

undefined8 FUN_147e7db5c(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000040;
  
  FUN_140033559("Runtime\\NavigationSystem\\Public\\NavigationData.h",0x380,
                L"Pure virtual not implemented (%s)",L"ANavigationData::GetPathSegmentBoundaryEdges"
               );
  plVar3 = *(longlong **)(in_stack_00000040 + 8);
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
  return 0;
}



// FUNCTION 147e7dbb4 FUN_147e7dbb4 body=120 status=ok
// SIG undefined FUN_147e7dbb4(void)

undefined4 * FUN_147e7dbb4(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_140033559("Runtime\\NavigationSystem\\Public\\NavigationData.h",0x382,
                L"Pure virtual not implemented (%s)",L"ANavigationData::GetRandomPoint");
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  *(undefined8 *)(param_2 + 6) = 0;
  plVar3 = *(longlong **)(param_3 + 8);
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
  return param_2;
}



// FUNCTION 147e7dc2c FUN_147e7dc2c body=87 status=ok
// SIG undefined FUN_147e7dc2c(void)

undefined8 FUN_147e7dc2c(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  FUN_140033559("Runtime\\NavigationSystem\\Public\\NavigationData.h",0x385,
                L"Pure virtual not implemented (%s)",
                L"ANavigationData::GetRandomReachablePointInRadius");
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e7dc84 FUN_147e7dc84 body=87 status=ok
// SIG undefined FUN_147e7dc84(void)

undefined8 FUN_147e7dc84(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  FUN_140033559("Runtime\\NavigationSystem\\Public\\NavigationData.h",0x388,
                L"Pure virtual not implemented (%s)",
                L"ANavigationData::GetRandomPointInNavigableRadius");
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e7dcdc FUN_147e7dcdc body=90 status=ok
// SIG undefined FUN_147e7dcdc(void)

void FUN_147e7dcdc(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140033559("Runtime\\NavigationSystem\\Public\\NavigationData.h",0x396,
                L"Pure virtual not implemented (%s)",L"ANavigationData::BatchProjectPoints");
  plVar3 = *(longlong **)(param_3 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147e7dd2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e7dd36 FUN_147e7dd36 body=90 status=ok
// SIG undefined FUN_147e7dd36(void)

void FUN_147e7dd36(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_R9;
  
  FUN_140033559("Runtime\\NavigationSystem\\Public\\NavigationData.h",0x391,
                L"Pure virtual not implemented (%s)",L"ANavigationData::BatchProjectPoints");
  plVar3 = *(longlong **)(in_R9 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147e7dd85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e7dd90 FUN_147e7dd90 body=87 status=ok
// SIG undefined FUN_147e7dd90(void)

undefined8 FUN_147e7dd90(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  FUN_140033559("Runtime\\NavigationSystem\\Public\\NavigationData.h",0x39b,
                L"Pure virtual not implemented (%s)",L"ANavigationData::CalcPathCost");
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e7dde8 FUN_147e7dde8 body=87 status=ok
// SIG undefined FUN_147e7dde8(void)

undefined8 FUN_147e7dde8(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  FUN_140033559("Runtime\\NavigationSystem\\Public\\NavigationData.h",0x3a0,
                L"Pure virtual not implemented (%s)",L"ANavigationData::CalcPathLength");
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e7de40 FUN_147e7de40 body=87 status=ok
// SIG undefined FUN_147e7de40(void)

undefined8 FUN_147e7de40(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000030;
  
  FUN_140033559("Runtime\\NavigationSystem\\Public\\NavigationData.h",0x3a5,
                L"Pure virtual not implemented (%s)",L"ANavigationData::CalcPathLengthAndCost");
  plVar3 = *(longlong **)(in_stack_00000030 + 8);
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
  return 0;
}



// FUNCTION 147e7de98 FUN_147e7de98 body=42 status=ok
// SIG undefined FUN_147e7de98(void)

undefined8 FUN_147e7de98(void)

{
  FUN_140033559("Runtime\\NavigationSystem\\Public\\NavigationData.h",0x3a9,
                L"Pure virtual not implemented (%s)",L"ANavigationData::DoesNodeContainLocation");
  return 0;
}



// FUNCTION 147e7dec2 FUN_147e7dec2 body=87 status=ok
// SIG undefined FUN_147e7dec2(void)

undefined8 FUN_147e7dec2(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  FUN_140033559("Runtime\\NavigationSystem\\Public\\NavigationData.h",0x36b,
                L"Pure virtual not implemented (%s)",L"ANavigationData::FindMoveAlongSurface");
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e7df1a FUN_147e7df1a body=87 status=ok
// SIG undefined FUN_147e7df1a(void)

undefined8 FUN_147e7df1a(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  FUN_140033559("Runtime\\NavigationSystem\\Public\\NavigationData.h",0x38e,
                L"Pure virtual not implemented (%s)",L"ANavigationData::ProjectPoint");
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e7df72 FUN_147e7df72 body=42 status=ok
// SIG undefined FUN_147e7df72(void)

undefined1 FUN_147e7df72(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\AI/Navigation/NavigationDataInterface.h",0x2d,
                L"Pure virtual not implemented (%s)",L"INavigationDataInterface::IsNodeRefValid");
  return 1;
}



// FUNCTION 147e7df9c FUN_147e7df9c body=45 status=ok
// SIG undefined FUN_147e7df9c(void)

longlong FUN_147e7df9c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e7dfca FUN_147e7dfca body=38 status=ok
// SIG undefined FUN_147e7dfca(void)

undefined8 FUN_147e7dfca(undefined8 param_1,int param_2)

{
  FUN_14383466c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e7dff0 FUN_147e7dff0 body=38 status=ok
// SIG undefined FUN_147e7dff0(void)

undefined8 FUN_147e7dff0(undefined8 param_1,int param_2)

{
  FUN_147e898ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e7e016 FUN_147e7e016 body=43 status=ok
// SIG undefined FUN_147e7e016(void)

undefined8 FUN_147e7e016(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar2 = FUN_145a6cf5a();
    uVar2 = FUN_144718840(lVar1,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147e7e08e FUN_147e7e08e body=54 status=ok
// SIG undefined FUN_147e7e08e(void)

undefined1 FUN_147e7e08e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e7e18c(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147e7e0ec FUN_147e7e0ec body=59 status=ok
// SIG undefined FUN_147e7e0ec(void)

undefined8 FUN_147e7e0ec(longlong *param_1)

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



// FUNCTION 147e7e18c FUN_147e7e18c body=166 status=ok
// SIG undefined FUN_147e7e18c(void)

undefined4 * FUN_147e7e18c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  lVar9 = *(longlong *)(param_2 + 10);
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 10);
    }
  }
  bVar8 = DAT_14c950c29;
  *(longlong *)(param_1 + 10) = lVar9;
  lVar9 = *(longlong *)(param_2 + 0xc);
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0xc);
      bVar8 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0xc) = lVar9;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  lVar9 = *(longlong *)(param_2 + 0x10);
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar9;
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  return param_1;
}



// FUNCTION 147e7e234 FUN_147e7e234 body=29 status=ok
// SIG undefined FUN_147e7e234(void)

undefined8 FUN_147e7e234(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e7e336 FUN_147e7e336 body=59 status=ok
// SIG undefined FUN_147e7e336(void)

undefined8 FUN_147e7e336(longlong *param_1)

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



// FUNCTION 147e7e4a2 FUN_147e7e4a2 body=59 status=ok
// SIG undefined FUN_147e7e4a2(void)

undefined8 FUN_147e7e4a2(longlong *param_1)

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



// FUNCTION 147e7e543 FUN_147e7e543 body=148 status=ok
// SIG undefined FUN_147e7e543(void)

undefined8 FUN_147e7e543(undefined8 param_1)

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
  uVar1 = FUN_145b5f280();
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



// FUNCTION 147e7e61c FUN_147e7e61c body=110 status=ok
// SIG undefined FUN_147e7e61c(void)

undefined1 FUN_147e7e61c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(param_3 + lVar4);
      if ((bVar2 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + lVar4);
          bVar2 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar4);
      *plVar1 = lVar3;
      plVar1[1] = *(longlong *)(param_3 + 8 + lVar4);
      *(undefined1 *)(plVar1 + 2) = *(undefined1 *)(param_3 + 0x10 + lVar4);
      lVar4 = lVar4 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e7e6b2 FUN_147e7e6b2 body=59 status=ok
// SIG undefined FUN_147e7e6b2(void)

undefined8 FUN_147e7e6b2(longlong *param_1)

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



// FUNCTION 147e7e7be FUN_147e7e7be body=59 status=ok
// SIG undefined FUN_147e7e7be(void)

undefined8 FUN_147e7e7be(longlong *param_1)

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



// FUNCTION 147e7e8de FUN_147e7e8de body=59 status=ok
// SIG undefined FUN_147e7e8de(void)

undefined8 FUN_147e7e8de(longlong *param_1)

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



// FUNCTION 147e7e9d4 FUN_147e7e9d4 body=97 status=ok
// SIG undefined FUN_147e7e9d4(void)

undefined1 FUN_147e7e9d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      lVar1 = *(longlong *)(param_3 + -8);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *(longlong *)(param_3 + -8);
        }
      }
      *(longlong *)(param_2 + -8) = lVar1;
      FUN_147e7eb18(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e7ea5e FUN_147e7ea5e body=59 status=ok
// SIG undefined FUN_147e7ea5e(void)

undefined8 FUN_147e7ea5e(longlong *param_1)

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



// FUNCTION 147e7eaa4 FUN_147e7eaa4 body=38 status=ok
// SIG undefined FUN_147e7eaa4(void)

void FUN_147e7eaa4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147e7eb18 FUN_147e7eb18 body=89 status=ok
// SIG undefined FUN_147e7eb18(void)

undefined8 * FUN_147e7eb18(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147e7eb72(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 147e7eb72 FUN_147e7eb72 body=115 status=ok
// SIG undefined FUN_147e7eb72(void)

void FUN_147e7eb72(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147e7ebe6 FUN_147e7ebe6 body=66 status=ok
// SIG undefined FUN_147e7ebe6(void)

void FUN_147e7ebe6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  FUN_147e704e4(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7ec2a FUN_147e7ec2a body=66 status=ok
// SIG undefined FUN_147e7ec2a(void)

void FUN_147e7ec2a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  FUN_147e704e4(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7ec92 FUN_147e7ec92 body=54 status=ok
// SIG undefined FUN_147e7ec92(void)

undefined1 FUN_147e7ec92(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e7edaa(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 147e7ecf0 FUN_147e7ecf0 body=59 status=ok
// SIG undefined FUN_147e7ecf0(void)

undefined8 FUN_147e7ecf0(longlong *param_1)

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



// FUNCTION 147e7ed36 FUN_147e7ed36 body=37 status=ok
// SIG undefined FUN_147e7ed36(void)

void FUN_147e7ed36(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 147e7edaa FUN_147e7edaa body=68 status=ok
// SIG undefined FUN_147e7edaa(void)

longlong FUN_147e7edaa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_144a787a6();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  lVar1 = *(longlong *)(param_2 + 0x18);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x18);
    }
  }
  *(longlong *)(param_1 + 0x18) = lVar1;
  return param_1;
}



// FUNCTION 147e7edf0 FUN_147e7edf0 body=158 status=ok
// SIG undefined FUN_147e7edf0(void)

void FUN_147e7edf0(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_144a78877(param_2[1] ^ *param_2,
                          (int)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20) * 0x17 +
                          (int)*(undefined8 *)(param_2 + 2));
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar2 * 0x20;
        if (((*(uint *)(*param_1 + (longlong)iVar2 * 0x20) == *param_2) &&
            (*(uint *)(lVar1 + 4) == param_2[1])) &&
           (*(longlong *)(lVar1 + 8) == *(longlong *)(param_2 + 2))) {
          FUN_147e7ee8e(param_1);
          return;
        }
        iVar2 = *(int *)(lVar1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147e7ee8e FUN_147e7ee8e body=90 status=ok
// SIG undefined FUN_147e7ee8e(void)

void FUN_147e7ee8e(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_147e7eee8();
  return;
}



// FUNCTION 147e7eee8 FUN_147e7eee8 body=114 status=ok
// SIG undefined FUN_147e7eee8(void)

void FUN_147e7eee8(longlong *param_1,int param_2)

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



// FUNCTION 147e7ef5a FUN_147e7ef5a body=98 status=ok
// SIG undefined FUN_147e7ef5a(void)

void FUN_147e7ef5a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_147e7efbe();
  if (lVar1 == 0) {
    local_38 = param_2;
    local_30 = param_3;
    FUN_147e7f0a6(param_1,local_24);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7efbe FUN_147e7efbe body=231 status=ok
// SIG undefined FUN_147e7efbe(void)

longlong * FUN_147e7efbe(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[9] != 0) {
    iVar3 = FUN_144a78877(param_2[1] ^ *param_2,
                          (int)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20) * 0x17 +
                          (int)*(undefined8 *)(param_2 + 2));
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar2 = *param_1;
      while( true ) {
        lVar5 = (longlong)iVar3;
        iVar3 = *(int *)(lVar2 + 0x20 + lVar5 * 0x28);
        if (((*(uint *)(lVar2 + lVar5 * 0x28) == *param_2) &&
            (lVar1 = lVar2 + lVar5 * 0x28, *(uint *)(lVar1 + 4) == param_2[1])) &&
           (*(longlong *)(lVar1 + 8) == *(longlong *)(param_2 + 2))) break;
        if (iVar3 == -1) {
          return (longlong *)0x0;
        }
      }
      if (*(longlong *)(lVar2 + 0x10 + lVar5 * 0x28) == *param_3) {
        return (longlong *)(lVar2 + lVar5 * 0x28 + 0x10);
      }
      while (iVar3 != -1) {
        lVar5 = (longlong)iVar3;
        iVar3 = *(int *)(lVar2 + 0x20 + lVar5 * 0x28);
        if (((*(uint *)(lVar2 + lVar5 * 0x28) == *param_2) &&
            (lVar1 = lVar2 + lVar5 * 0x28, *(uint *)(lVar1 + 4) == param_2[1])) &&
           ((*(longlong *)(lVar1 + 8) == *(longlong *)(param_2 + 2) &&
            (plVar4 = (longlong *)(lVar2 + lVar5 * 0x28 + 0x10), *plVar4 == *param_3)))) {
          return plVar4;
        }
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 147e7f0a6 FUN_147e7f0a6 body=297 status=ok
// SIG undefined FUN_147e7f0a6(void)

undefined4 * FUN_147e7f0a6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  uint *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147e7f1d0(param_1,local_38);
  puVar1 = (uint *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar4 = puVar1[1];
  uVar6 = puVar1[2];
  uVar3 = puVar1[3];
  *local_30 = *puVar1;
  local_30[1] = uVar4;
  local_30[2] = uVar6;
  local_30[3] = uVar3;
  *(undefined8 *)(local_30 + 4) = *puVar2;
  lVar7 = puVar2[1];
  *(longlong *)(local_30 + 6) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  local_30[8] = 0xffffffff;
  uVar4 = FUN_144a78877(local_30[1] ^ *local_30,
                        (int)((ulonglong)*(undefined8 *)(local_30 + 2) >> 0x20) * 0x17 +
                        (int)*(undefined8 *)(local_30 + 2));
  uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar8 = 1;
  if (3 < uVar6) {
    uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
    lVar7 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar8 = 1 << ((byte)lVar7 & 0x1f);
  }
  if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
    uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
    local_30[9] = uVar4;
    lVar7 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar7 = param_1 + 0x38;
    }
    local_30[8] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4)
                                    * 4);
    lVar7 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar7 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar8;
    FUN_147e7f2b6(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7f1d0 FUN_147e7f1d0 body=230 status=ok
// SIG undefined FUN_147e7f1d0(void)

int * FUN_147e7f1d0(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 147e7f2b6 FUN_147e7f2b6 body=468 status=ok
// SIG undefined FUN_147e7f2b6(void)

void FUN_147e7f2b6(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + 8 + lVar10 * 0x28);
        iVar6 = FUN_144a78877(*(uint *)(lVar3 + 4 + lVar10 * 0x28) ^
                              *(uint *)(lVar3 + lVar10 * 0x28),
                              (int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x24 + lVar10 * 0x28) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar10 * 0x28) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e7f48c FUN_147e7f48c body=101 status=ok
// SIG undefined FUN_147e7f48c(void)

int FUN_147e7f48c(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1 * 0x20;
        if (((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 4) == param_3[1]))
           && (*(longlong *)(lVar2 + lVar4 + 8) == *(longlong *)(param_3 + 2))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147e7f4f2 FUN_147e7f4f2 body=133 status=ok
// SIG undefined FUN_147e7f4f2(void)

void FUN_147e7f4f2(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & 0xc0;
  *(undefined1 *)((longlong)param_1 + 0xd4) = 3;
  param_1[0x1b] = *param_2;
  lVar1 = param_2[1];
  param_1[0x1c] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) & 0xc0;
  return;
}



// FUNCTION 147e7f582 FUN_147e7f582 body=29 status=ok
// SIG undefined FUN_147e7f582(void)

undefined8 FUN_147e7f582(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e7f5a0 FUN_147e7f5a0 body=164 status=ok
// SIG undefined FUN_147e7f5a0(void)

void FUN_147e7f5a0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_147e7f618;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_147e7f618;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_147e7f618:
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
                    /* WARNING: Could not recover jumptable at 0x000147e7f638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147e7f644 FUN_147e7f644 body=231 status=ok
// SIG undefined FUN_147e7f644(void)

void FUN_147e7f644(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[9] != 0) {
    iVar4 = FUN_144a78877(param_2[1] ^ *param_2,
                          (int)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20) * 0x17 +
                          (int)*(undefined8 *)(param_2 + 2));
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        lVar6 = (longlong)iVar4;
        iVar2 = *(int *)(lVar3 + 0x20 + lVar6 * 0x28);
        if (((*(uint *)(lVar3 + lVar6 * 0x28) == *param_2) &&
            (lVar1 = lVar3 + lVar6 * 0x28, *(uint *)(lVar1 + 4) == param_2[1])) &&
           (*(longlong *)(lVar1 + 8) == *(longlong *)(param_2 + 2))) {
          lVar6 = *(longlong *)(lVar3 + 0x10 + lVar6 * 0x28);
          do {
            if (lVar6 == *param_3) {
              FUN_147e7f72c(param_1,iVar4);
              return;
            }
            do {
              iVar4 = iVar2;
              if (iVar4 == -1) {
                return;
              }
              lVar6 = (longlong)iVar4;
              iVar2 = *(int *)(lVar3 + 0x20 + lVar6 * 0x28);
            } while (((*(uint *)(lVar3 + lVar6 * 0x28) != *param_2) ||
                     (lVar1 = lVar3 + lVar6 * 0x28, *(uint *)(lVar1 + 4) != param_2[1])) ||
                    (*(longlong *)(lVar1 + 8) != *(longlong *)(param_2 + 2)));
            lVar6 = *(longlong *)(lVar3 + 0x10 + lVar6 * 0x28);
          } while( true );
        }
        iVar4 = iVar2;
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147e7f72c FUN_147e7f72c body=87 status=ok
// SIG undefined FUN_147e7f72c(void)

void FUN_147e7f72c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_147e7f784();
  return;
}



// FUNCTION 147e7f784 FUN_147e7f784 body=192 status=ok
// SIG undefined FUN_147e7f784(void)

void FUN_147e7f784(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  longlong lVar5;
  byte bVar6;
  longlong *plVar7;
  undefined4 uVar8;
  int iVar9;
  
  plVar7 = *(longlong **)(*param_1 + 0x18 + (longlong)param_2 * 0x28);
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
  lVar5 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar5 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar3 = (undefined4 *)(lVar5 + (longlong)param_2 * 0x28);
  *puVar3 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (undefined4)param_1[6];
  }
  puVar3[1] = uVar8;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar7 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[4];
  }
  iVar9 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar9 = param_2;
  }
  bVar6 = (byte)param_2 & 0x1f;
  puVar4 = (uint *)((longlong)plVar7 + (longlong)(iVar9 >> 5) * 4);
  *puVar4 = *puVar4 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  return;
}



// FUNCTION 147e7f844 FUN_147e7f844 body=312 status=ok
// SIG undefined FUN_147e7f844(void)

void FUN_147e7f844(longlong *param_1,uint *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((int)param_1[9] != 0) {
    iVar2 = FUN_144a78877(param_2[1] ^ *param_2,
                          (int)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20) * 0x17 +
                          (int)*(undefined8 *)(param_2 + 2));
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar6 = *param_1;
      do {
        lVar5 = (longlong)iVar2;
        iVar4 = *(int *)(lVar6 + 0x20 + lVar5 * 0x28);
        if (((*(uint *)(lVar6 + lVar5 * 0x28) == *param_2) &&
            (lVar5 = lVar6 + lVar5 * 0x28, *(uint *)(lVar5 + 4) == param_2[1])) &&
           (*(longlong *)(lVar5 + 8) == *(longlong *)(param_2 + 2))) {
          while( true ) {
            iVar1 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
              FUN_147e7f97c(param_3,iVar1);
            }
            lVar6 = lVar6 + (longlong)iVar2 * 0x28;
            lVar5 = *param_3;
            *(undefined8 *)(lVar5 + (longlong)iVar1 * 0x10) = *(undefined8 *)(lVar6 + 0x10);
            lVar6 = *(longlong *)(lVar6 + 0x18);
            *(longlong *)(lVar5 + 8 + (longlong)iVar1 * 0x10) = lVar6;
            if (lVar6 != 0) {
              LOCK();
              *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
              UNLOCK();
            }
            if (iVar4 == -1) break;
            lVar6 = *param_1;
            iVar2 = iVar4;
            while( true ) {
              lVar5 = (longlong)iVar2;
              iVar4 = *(int *)(lVar6 + 0x20 + lVar5 * 0x28);
              if (((*(uint *)(lVar6 + lVar5 * 0x28) == *param_2) &&
                  (lVar5 = lVar6 + lVar5 * 0x28, *(uint *)(lVar5 + 4) == param_2[1])) &&
                 (*(longlong *)(lVar5 + 8) == *(longlong *)(param_2 + 2))) break;
              iVar2 = iVar4;
              if (iVar4 == -1) {
                return;
              }
            }
          }
          return;
        }
        iVar2 = iVar4;
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 147e7f97c FUN_147e7f97c body=132 status=ok
// SIG undefined FUN_147e7f97c(void)

void FUN_147e7f97c(longlong param_1,int param_2)

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



// FUNCTION 147e7fa02 FUN_147e7fa02 body=52 status=ok
// SIG undefined FUN_147e7fa02(void)

void FUN_147e7fa02(longlong *param_1)

{
  FUN_147e7fa36();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e7fa36 FUN_147e7fa36 body=89 status=ok
// SIG undefined FUN_147e7fa36(void)

void FUN_147e7fa36(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 147e7fa8f FUN_147e7fa8f body=41 status=ok
// SIG undefined FUN_147e7fa8f(void)

void FUN_147e7fa8f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147e7fab8(param_1);
    param_1 = param_1 + 0x490;
  }
  return;
}



// FUNCTION 147e7fab8 FUN_147e7fab8 body=62 status=ok
// SIG undefined FUN_147e7fab8(void)

void FUN_147e7fab8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x480);
  if (*(longlong *)(param_1 + 0x480) == 0) {
    lVar1 = param_1;
  }
  FUN_147e7faf6(lVar1,*(undefined4 *)(param_1 + 0x488));
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e7faf6 FUN_147e7faf6 body=73 status=ok
// SIG undefined FUN_147e7faf6(void)

void FUN_147e7faf6(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x40);
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
      plVar4 = plVar4 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147e7fb40 FUN_147e7fb40 body=170 status=ok
// SIG undefined FUN_147e7fb40(void)

void FUN_147e7fb40(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_518 [32];
  undefined8 *local_4f8;
  undefined1 *local_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined1 local_4a0 [1152];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_518;
  local_20 = 0;
  local_18 = 0x1000000000;
  local_4e8 = *param_2;
  uStack_4e0 = param_2[1];
  local_4d8 = param_2[2];
  local_4c8 = *(undefined4 *)(param_2 + 3);
  uStack_4c4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_4c0 = *(undefined4 *)(param_2 + 4);
  uStack_4bc = *(undefined4 *)((longlong)param_2 + 0x24);
  local_4b8 = param_2[5];
  local_4b0 = 0;
  local_4d0 = 0;
  local_4f8 = param_2;
  local_4f0 = local_4a0;
  FUN_147e7fbec(local_4c8,0,param_1);
  FUN_147e7fab8(local_4a0);
  if ((local_10 ^ (ulonglong)auStack_518) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e7fbec FUN_147e7fbec body=1256 status=ok
// SIG undefined FUN_147e7fbec(void)

void FUN_147e7fbec(longlong param_1,int param_2,undefined4 **param_3,double *param_4,
                  longlong *param_5,longlong *param_6)

{
  undefined4 **ppuVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  double dVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar35;
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStack_148 [32];
  longlong *local_128;
  longlong *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined1 local_fc [4];
  undefined4 *local_f8;
  undefined8 *puStack_f0;
  double local_e8;
  double dStack_e0;
  undefined4 *local_d8;
  undefined4 *puStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  ulonglong local_90;
  undefined4 *puVar6;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar23 = (longlong)param_2;
  piVar3 = (int *)(*(longlong *)(param_1 + 0x60) + 4 + lVar23 * 8);
  *piVar3 = *piVar3 + 1;
  iVar18 = *(int *)(*(longlong *)(param_1 + 0x60) + lVar23 * 8);
  if (iVar18 == -1) {
    lVar25 = *(longlong *)(param_1 + 0x80) + lVar23 * 0x490;
    iVar18 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x488 + lVar23 * 0x490);
    lVar22 = (longlong)iVar18;
    if ((0xf < lVar22) &&
       (*(double *)(param_1 + 0xa0) <= (double)param_3[4] &&
        (double)param_3[4] != *(double *)(param_1 + 0xa0))) {
      FUN_147e800d6(param_6,lVar25);
      iVar18 = FUN_147e8017e(param_1);
      *(int *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(iVar18 - 1U >> 3) * 4) = param_2;
      *(int *)(*(longlong *)(param_1 + 0x60) + lVar23 * 8) = iVar18;
      *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 4 + lVar23 * 8) = 0;
      plVar24 = (longlong *)param_6[0x90];
      if ((longlong *)param_6[0x90] == (longlong *)0x0) {
        plVar24 = param_6;
      }
      if ((longlong)(int)param_6[0x91] != 0) {
        plVar2 = plVar24 + (longlong)(int)param_6[0x91] * 9;
        do {
          local_f8 = (undefined4 *)*plVar24;
          puStack_f0 = (undefined8 *)plVar24[1];
          local_e8 = (double)plVar24[2];
          local_d8 = (undefined4 *)plVar24[3];
          puStack_d0 = (undefined4 *)plVar24[4];
          local_c8._8_8_ = 0;
          local_c8._0_8_ = plVar24[5];
          dStack_e0 = 0.0;
          local_120 = param_6;
          local_128 = plVar24;
          FUN_147e7fbec(param_1,param_2,param_3,&local_f8);
          plVar24 = plVar24 + 9;
        } while (plVar24 != plVar2);
      }
      FUN_147e80202();
LAB_147e7ff21:
      local_120 = param_6;
      local_128 = param_5;
      FUN_147e7fbec(param_1,param_2,param_3,param_4);
      goto LAB_147e7ffec;
    }
    *(uint *)(lVar25 + 0x488) = iVar18 + 1U;
    if (*(uint *)(lVar25 + 0x48c) < iVar18 + 1U) {
      FUN_147e80576(lVar25,iVar18);
    }
    lVar23 = *(longlong *)(lVar25 + 0x480);
    if (*(longlong *)(lVar25 + 0x480) == 0) {
      lVar23 = lVar25;
    }
    *(longlong *)(lVar23 + 0x30 + lVar22 * 0x48) = param_5[6];
    lVar16 = *param_5;
    lVar17 = param_5[1];
    lVar25 = param_5[2];
    lVar20 = param_5[3];
    lVar13 = param_5[5];
    plVar24 = (longlong *)(lVar23 + 0x20 + lVar22 * 0x48);
    *plVar24 = param_5[4];
    plVar24[1] = lVar13;
    plVar24 = (longlong *)(lVar23 + 0x10 + lVar22 * 0x48);
    *plVar24 = lVar25;
    plVar24[1] = lVar20;
    plVar24 = (longlong *)(lVar23 + lVar22 * 0x48);
    *plVar24 = lVar16;
    plVar24[1] = lVar17;
    *(longlong *)(lVar23 + 0x38 + lVar22 * 0x48) = param_5[7];
    lVar25 = param_5[8];
    *(longlong *)(lVar23 + 0x40 + lVar22 * 0x48) = lVar25;
    if (lVar25 != 0) {
      LOCK();
      *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    dVar31 = *param_4;
    dVar32 = param_4[1];
    dVar35 = param_4[2];
    dVar11 = param_4[3];
    local_f8 = *param_3;
    puVar12 = param_3[1];
    puVar14 = param_3[2];
    puVar15 = param_3[3];
    puVar4 = param_3[9];
    dVar29 = dVar32 - ((double)puVar12 - (double)puVar4);
    auVar26._0_8_ = ((double)local_f8 + (double)puVar4) - dVar31;
    auVar26._8_8_ = ((double)puVar12 + (double)puVar4) - dVar32;
    auVar27._8_4_ = SUB84(dVar29,0);
    auVar27._0_8_ = dVar31 - ((double)local_f8 - (double)puVar4);
    auVar27._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    auVar27 = minpd(auVar26,auVar27);
    auVar36._0_8_ = ((double)puVar14 + (double)puVar4) - dVar35;
    auVar36._8_8_ = ((double)puVar15 + (double)puVar4) - dVar11;
    auVar37._8_8_ = dVar11 - ((double)puVar15 - (double)puVar4);
    auVar37._0_8_ = dVar35 - ((double)puVar14 - (double)puVar4);
    auVar37 = minpd(auVar36,auVar37);
    puVar5 = param_3[8];
    puVar6 = param_3[8];
    lVar25 = -(ulonglong)((double)puVar6 < auVar27._8_8_ + param_4[5]);
    auVar7._8_4_ = (int)lVar25;
    auVar7._0_8_ = -(ulonglong)((double)puVar5 < auVar27._0_8_ + param_4[4]);
    auVar7._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
    iVar19 = movmskpd((int)*(longlong *)(param_1 + 0x60),auVar7);
    auVar28._8_8_ = -(ulonglong)((double)puVar6 < auVar37._8_8_ + param_4[7]);
    auVar28._0_8_ = -(ulonglong)((double)puVar5 < auVar37._0_8_ + param_4[6]);
    uVar21 = movmskpd((int)param_3,auVar28);
    if ((uVar21 & 0x3fffffff) == 0 && iVar19 == 0) {
      ppuVar1 = param_3 + 8;
      auVar8._8_4_ = (int)-(ulonglong)((double)puVar12 < dVar32);
      auVar8._0_8_ = -(ulonglong)((double)local_f8 < dVar31);
      auVar8._12_4_ = (int)(-(ulonglong)((double)puVar12 < dVar32) >> 0x20);
      iVar19 = movmskpd(iVar19,auVar8);
      auVar33._8_8_ = -(ulonglong)((double)puVar15 < dVar11);
      auVar33._0_8_ = -(ulonglong)((double)puVar14 < dVar35);
      uVar21 = movmskpd(0,auVar33);
      iVar19 = iVar19 + (uVar21 & 1) * 4;
      param_2 = iVar18 + iVar19;
      auVar30._4_4_ = iVar19;
      auVar30._0_4_ = iVar19;
      auVar30._8_4_ = iVar19;
      auVar30._12_4_ = iVar19;
      auVar37 = pmovsxbd(auVar33,0x8040201);
      auVar30 = auVar30 & auVar37;
      dVar32 = (double)(float)-(uint)(auVar30._0_4_ == auVar37._0_4_);
      dVar35 = (double)(float)-(uint)(auVar30._4_4_ == auVar37._4_4_);
      dVar29 = (double)(float)-(uint)(auVar30._8_4_ == auVar37._8_4_);
      dVar31 = (double)(float)-(uint)(auVar30._12_4_ == auVar37._12_4_);
      uVar10 = (ulonglong)puVar4 & (ulonglong)dVar35;
      auVar34._0_8_ = ~(ulonglong)dVar32 & (ulonglong)-(double)puVar4;
      auVar34._8_8_ = ~(ulonglong)dVar35 & (ulonglong)-(double)puVar4;
      auVar9._8_4_ = (int)uVar10;
      auVar9._0_8_ = (ulonglong)puVar4 & (ulonglong)dVar32;
      auVar9._12_4_ = (int)(uVar10 >> 0x20);
      local_f8 = (undefined4 *)(SUB168(auVar34 | auVar9,0) + (double)local_f8);
      puStack_f0 = (undefined8 *)(SUB168(auVar34 | auVar9,8) + (double)puVar12);
      local_e8 = ((double)(~(ulonglong)dVar29 & (ulonglong)-(double)puVar4 |
                          (ulonglong)puVar4 & (ulonglong)dVar29) + (double)puVar14) * 1.0;
      dStack_e0 = ((double)(~(ulonglong)dVar31 & (ulonglong)-(double)puVar4 |
                           (ulonglong)puVar4 & (ulonglong)dVar31) + (double)puVar15) * 0.0;
      param_3 = &local_f8;
      local_b8 = (double)*ppuVar1 * 0.5 * 1.0625;
      local_c8._8_4_ = SUB84((double)puVar6 * 0.0,0);
      local_c8._0_8_ = (double)puVar5 * 1.0;
      local_c8._12_4_ = (int)((ulonglong)((double)puVar6 * 0.0) >> 0x20);
      local_b0 = (double)*ppuVar1 - local_b8;
      local_d8 = puVar5;
      puStack_d0 = puVar6;
      goto LAB_147e7ff21;
    }
    lVar22 = *(longlong *)(param_1 + 0x80);
    lVar23 = lVar23 * 0x490;
    lVar25 = lVar22 + lVar23;
    iVar18 = *(int *)(lVar22 + 0x488 + lVar23);
    lVar20 = (longlong)iVar18;
    *(uint *)(lVar22 + 0x488 + lVar23) = iVar18 + 1U;
    if (*(uint *)(lVar22 + 0x48c + lVar23) < iVar18 + 1U) {
      FUN_147e80576(lVar25,iVar18);
    }
    lVar23 = *(longlong *)(lVar25 + 0x480);
    if (*(longlong *)(lVar25 + 0x480) == 0) {
      lVar23 = lVar25;
    }
    *(longlong *)(lVar23 + 0x30 + lVar20 * 0x48) = param_5[6];
    lVar16 = *param_5;
    lVar17 = param_5[1];
    lVar25 = param_5[2];
    lVar22 = param_5[3];
    lVar13 = param_5[5];
    plVar24 = (longlong *)(lVar23 + 0x20 + lVar20 * 0x48);
    *plVar24 = param_5[4];
    plVar24[1] = lVar13;
    plVar24 = (longlong *)(lVar23 + 0x10 + lVar20 * 0x48);
    *plVar24 = lVar25;
    plVar24[1] = lVar22;
    plVar24 = (longlong *)(lVar23 + lVar20 * 0x48);
    *plVar24 = lVar16;
    plVar24[1] = lVar17;
    *(longlong *)(lVar23 + 0x38 + lVar20 * 0x48) = param_5[7];
    lVar25 = param_5[8];
    *(longlong *)(lVar23 + 0x40 + lVar20 * 0x48) = lVar25;
    if (lVar25 != 0) {
      LOCK();
      *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
      UNLOCK();
    }
  }
  local_108 = CONCAT44(iVar18,param_2);
  lVar23 = *(longlong *)(param_5[7] + 0xd8);
  local_118 = *(undefined4 *)(lVar23 + 0x40);
  uStack_114 = *(undefined4 *)(lVar23 + 0x44);
  uStack_110 = *(undefined4 *)(lVar23 + 0x48);
  uStack_10c = *(undefined4 *)(lVar23 + 0x4c);
  local_f8 = &local_118;
  puStack_f0 = &local_108;
  FUN_147e84744(param_1 + 0xe8,local_fc);
LAB_147e7ffec:
  if ((local_90 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e800d6 FUN_147e800d6 body=167 status=ok
// SIG undefined FUN_147e800d6(void)

void * FUN_147e800d6(void *param_1,void *param_2)

{
  void *pvVar1;
  
  if (param_1 != param_2) {
    pvVar1 = *(void **)((longlong)param_1 + 0x480);
    if (*(void **)((longlong)param_1 + 0x480) == (void *)0x0) {
      pvVar1 = param_1;
    }
    FUN_147e7faf6(pvVar1,*(undefined4 *)((longlong)param_1 + 0x488));
    if (*(longlong *)((longlong)param_2 + 0x480) == 0) {
      memmove(param_1,param_2,0x480);
    }
    if (*(longlong *)((longlong)param_1 + 0x480) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)((longlong)param_1 + 0x480) = *(undefined8 *)((longlong)param_2 + 0x480);
    *(undefined8 *)((longlong)param_2 + 0x480) = 0;
    *(undefined4 *)((longlong)param_1 + 0x488) = *(undefined4 *)((longlong)param_2 + 0x488);
    *(undefined4 *)((longlong)param_1 + 0x48c) = *(undefined4 *)((longlong)param_2 + 0x48c);
    *(undefined8 *)((longlong)param_2 + 0x488) = 0x1000000000;
  }
  return param_1;
}



// FUNCTION 147e8017e FUN_147e8017e body=132 status=ok
// SIG undefined FUN_147e8017e(void)

int FUN_147e8017e(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar2 == 0) {
    iVar2 = FUN_147e8024a(param_1 + 0x60);
    iVar1 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar1 + 1U) {
      FUN_1447808da(param_1 + 0x70,iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 4) = 0;
    FUN_147e8028e(param_1 + 0x80);
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x90) + -4 + (longlong)iVar2 * 4);
    *(int *)(param_1 + 0x98) = iVar2 + -1;
    FUN_144780a3c(param_1 + 0x90);
    iVar2 = iVar1 * 8 + 1;
  }
  return iVar2;
}



// FUNCTION 147e80202 FUN_147e80202 body=71 status=ok
// SIG undefined FUN_147e80202(void)

void FUN_147e80202(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x48c) < 0) {
    FUN_147e8041e(param_1);
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x480);
  if (*(longlong *)(param_1 + 0x480) == 0) {
    lVar1 = param_1;
  }
  FUN_147e7faf6(lVar1,*(undefined4 *)(param_1 + 0x488));
  *(undefined4 *)(param_1 + 0x488) = 0;
  return;
}



// FUNCTION 147e8024a FUN_147e8024a body=68 status=ok
// SIG undefined FUN_147e8024a(void)

int FUN_147e8024a(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 8;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 8) {
    FUN_147e802e6(param_1,iVar1);
  }
  FUN_147e802cf((longlong)iVar1 * 8 + *param_1,8);
  return iVar1;
}



// FUNCTION 147e8028e FUN_147e8028e body=65 status=ok
// SIG undefined FUN_147e8028e(void)

void FUN_147e8028e(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 8;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 8) {
    FUN_147e80394(param_1,iVar1);
  }
  FUN_147e8036b((longlong)iVar1 * 0x490 + *param_1,8);
  return;
}



// FUNCTION 147e802cf FUN_147e802cf body=22 status=ok
// SIG undefined FUN_147e802cf(void)

void FUN_147e802cf(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = 0xffffffff;
    lVar1 = lVar1 + 1;
  } while (param_2 != (int)lVar1);
  return;
}



// FUNCTION 147e802e6 FUN_147e802e6 body=132 status=ok
// SIG undefined FUN_147e802e6(void)

void FUN_147e802e6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147e8036b FUN_147e8036b body=41 status=ok
// SIG undefined FUN_147e8036b(void)

void FUN_147e8036b(longlong param_1,int param_2)

{
  param_1 = param_1 + 0x48c;
  do {
    *(undefined8 *)(param_1 + -0xc) = 0;
    *(undefined8 *)(param_1 + -4) = 0x1000000000;
    param_1 = param_1 + 0x490;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 147e80394 FUN_147e80394 body=136 status=ok
// SIG undefined FUN_147e80394(void)

void FUN_147e80394(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x490,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x490)) {
      uVar5 = uVar4 / 0x490 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_140043092(param_1,param_2,uVar5,0x490);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147e8041e FUN_147e8041e body=73 status=ok
// SIG undefined FUN_147e8041e(void)

void FUN_147e8041e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x480);
  if (*(longlong *)(param_1 + 0x480) == 0) {
    lVar1 = param_1;
  }
  FUN_147e7faf6(lVar1,*(undefined4 *)(param_1 + 0x488));
  *(undefined4 *)(param_1 + 0x488) = 0;
  if (*(int *)(param_1 + 0x48c) == 0) {
    return;
  }
  FUN_147e80468(param_1,0);
  return;
}



// FUNCTION 147e80468 FUN_147e80468 body=120 status=ok
// SIG undefined FUN_147e80468(void)

void FUN_147e80468(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x10;
    if (0x10 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x48,0);
      iVar2 = (int)(uVar1 / 0x48);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x48c)) {
    *(int *)(param_1 + 0x48c) = iVar3;
    FUN_147e804e0(param_1,*(undefined4 *)(param_1 + 0x488));
    return;
  }
  return;
}



// FUNCTION 147e804e0 FUN_147e804e0 body=149 status=ok
// SIG undefined FUN_147e804e0(void)

void FUN_147e804e0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x480);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x48);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x480,0,param_3,0x48);
    memmove(*(void **)((longlong)param_1 + 0x480),param_1,(longlong)param_2 * 0x48);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x480,param_2,param_3,0x48);
  return;
}



// FUNCTION 147e80576 FUN_147e80576 body=136 status=ok
// SIG undefined FUN_147e80576(void)

void FUN_147e80576(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x488);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x48c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x48,0);
      iVar4 = (int)(uVar3 / 0x48);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x48c) = iVar5;
    FUN_147e804e0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e80600 FUN_147e80600 body=628 status=ok
// SIG undefined FUN_147e80600(void)

void FUN_147e80600(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_528 [32];
  ulonglong local_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  ulonglong local_4f8;
  ulonglong *local_4f0;
  ulonglong *puStack_4e8;
  undefined1 local_4dc [4];
  undefined8 **local_4d8;
  ulonglong *local_4d0;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_528;
  lVar7 = (longlong)(int)param_2;
  lVar8 = lVar7 * 0x490;
  FUN_147e80908(*(longlong *)(param_1 + 0x80) + lVar8,param_2 >> 0x20);
  if ((int)(param_2 >> 0x20) < *(int *)(*(longlong *)(param_1 + 0x80) + 0x488 + lVar8)) {
    lVar8 = *(longlong *)(param_1 + 0x80) + lVar8;
    lVar9 = *(longlong *)(lVar8 + 0x480);
    if (lVar9 != 0) {
      lVar8 = lVar9;
    }
    lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x38 + ((longlong)param_2 >> 0x20) * 0x48) + 0xd8);
    local_4f0 = *(ulonglong **)(lVar8 + 0x40);
    puStack_4e8 = *(ulonglong **)(lVar8 + 0x48);
    local_4d8 = &local_4f0;
    local_4d0 = &local_508;
    local_508 = param_2;
    FUN_147e84744(param_1 + 0xe8,&local_4f8);
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 4 + lVar7 * 8);
  *piVar1 = *piVar1 + -1;
  lVar8 = *(longlong *)(param_1 + 0x60);
  uVar5 = 0xffffffff;
  if (*(uint *)(lVar8 + 4 + lVar7 * 8) < 7) {
    uVar5 = param_2 & 0xffffffff;
  }
  uVar4 = (uint)uVar5;
  if ((int)param_2 != 0) {
    do {
      uVar4 = *(uint *)(*(longlong *)(param_1 + 0x70) + (ulonglong)((int)param_2 - 1U >> 3) * 4);
      param_2 = (ulonglong)(int)uVar4;
      piVar1 = (int *)(lVar8 + 4 + param_2 * 8);
      *piVar1 = *piVar1 + -1;
      lVar8 = *(longlong *)(param_1 + 0x60);
      if (*(uint *)(lVar8 + 4 + param_2 * 8) < 7) {
        uVar5 = (ulonglong)uVar4;
      }
      uVar4 = (uint)uVar5;
    } while (param_2 != 0);
  }
  if ((uVar4 != 0xffffffff) && (lVar7 = (longlong)(int)uVar4, *(int *)(lVar8 + lVar7 * 8) != -1)) {
    lVar9 = lVar7 * 0x490;
    uVar2 = *(uint *)(lVar8 + 4 + lVar7 * 8);
    if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x488 + lVar9) < (int)uVar2) {
      local_58 = 0;
      local_50 = 0x1000000000;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar2);
      }
      if (0x10 < uVar2) {
        FUN_147e80468(&local_4d8);
      }
      FUN_147e80876(param_1,uVar4,&local_4d8);
      FUN_147e800d6(*(longlong *)(param_1 + 0x80) + lVar9,&local_4d8);
      lVar8 = *(longlong *)(param_1 + 0x80);
      if (0 < *(int *)(lVar8 + 0x488 + lVar9)) {
        uVar5 = (ulonglong)uVar4;
        lVar6 = 0x38;
        lVar7 = 0;
        do {
          lVar3 = *(longlong *)(lVar8 + lVar9 + 0x480);
          if (lVar3 == 0) {
            lVar3 = lVar8 + lVar9;
          }
          lVar8 = *(longlong *)(*(longlong *)(lVar3 + lVar6) + 0xd8);
          local_508 = *(ulonglong *)(lVar8 + 0x40);
          uStack_500 = *(undefined4 *)(lVar8 + 0x48);
          uStack_4fc = *(undefined4 *)(lVar8 + 0x4c);
          local_4f0 = &local_508;
          puStack_4e8 = &local_4f8;
          local_4f8 = uVar5;
          FUN_147e84744(param_1 + 0xe8,local_4dc,&local_4f0);
          lVar7 = lVar7 + 1;
          lVar8 = *(longlong *)(param_1 + 0x80);
          lVar6 = lVar6 + 0x48;
          uVar5 = uVar5 + 0x100000000;
        } while (lVar7 < *(int *)(lVar8 + 0x488 + lVar9));
      }
      FUN_147e7fab8(&local_4d8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_528) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e80876 FUN_147e80876 body=145 status=ok
// SIG undefined FUN_147e80876(void)

void FUN_147e80876(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = (longlong)param_2;
  FUN_147e809a8(param_3,*(longlong *)(param_1 + 0x80) + lVar2 * 0x490);
  FUN_147e80202(lVar2 * 0x490 + *(longlong *)(param_1 + 0x80));
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x60) + lVar2 * 8);
  if (iVar1 == -1) {
    return;
  }
  iVar3 = 0;
  do {
    FUN_147e80876(param_1,iVar1 + iVar3,param_3);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x60) + lVar2 * 8) = 0xffffffff;
  FUN_147e80a32(param_1,iVar1);
  return;
}



// FUNCTION 147e80908 FUN_147e80908 body=159 status=ok
// SIG undefined FUN_147e80908(void)

void FUN_147e80908(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 0x480);
  if (*(longlong *)(param_1 + 0x480) == 0) {
    lVar7 = param_1;
  }
  plVar3 = *(longlong **)(lVar7 + 0x40 + (longlong)(int)param_2 * 0x48);
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
  iVar4 = *(int *)(param_1 + 0x488);
  iVar5 = ~param_2 + iVar4;
  if (iVar5 != 0) {
    iVar6 = 1;
    if (iVar5 < 1) {
      iVar6 = iVar5;
    }
    memmove((void *)(lVar7 + (longlong)(int)param_2 * 0x48),
            (void *)(lVar7 + (longlong)(iVar4 - iVar6) * 0x48),(longlong)iVar6 * 0x48);
    iVar4 = *(int *)(param_1 + 0x488);
  }
  *(int *)(param_1 + 0x488) = iVar4 + -1;
  return;
}



// FUNCTION 147e809a8 FUN_147e809a8 body=138 status=ok
// SIG undefined FUN_147e809a8(void)

void FUN_147e809a8(longlong param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x488);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x488);
    *(uint *)(param_1 + 0x488) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x48c) - iVar2) < uVar1) {
      FUN_147e80576(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 0x480);
    if (*(void **)((longlong)param_2 + 0x480) == (void *)0x0) {
      _Src = param_2;
    }
    lVar3 = *(longlong *)(param_1 + 0x480);
    if (*(longlong *)(param_1 + 0x480) == 0) {
      lVar3 = param_1;
    }
    memmove((void *)(lVar3 + (longlong)iVar2 * 0x48),_Src,(longlong)(int)uVar1 * 0x48);
    *(undefined4 *)((longlong)param_2 + 0x488) = 0;
  }
  return;
}



// FUNCTION 147e80a32 FUN_147e80a32 body=114 status=ok
// SIG undefined FUN_147e80a32(void)

void FUN_147e80a32(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)(param_2 + (int)lVar2) * 8) =
         0xffffffff;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 8);
  uVar3 = param_2 - 1U >> 3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar3 * 4) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar1 + 1U) {
    FUN_1447808da((longlong *)(param_1 + 0x90),iVar1);
  }
  *(uint *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar1 * 4) = uVar3;
  return;
}



// FUNCTION 147e80aa4 FUN_147e80aa4 body=161 status=ok
// SIG undefined FUN_147e80aa4(void)

int FUN_147e80aa4(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = param_1[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar1 = *param_1;
    uVar4 = 0;
    do {
      cVar2 = FUN_147e80b46(lVar1 + uVar4,param_2);
      if (cVar2 != '\0') {
        iVar3 = (int)(uVar4 >> 3) * -0x55555555;
        if (iVar3 != -1) {
          return iVar3;
        }
        break;
      }
      uVar4 = uVar4 + 0x18;
    } while ((longlong)(int)lVar5 * 0x18 != uVar4);
  }
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_147e820e6(param_1,iVar3);
  }
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + lVar5 * 0x18) = *param_2;
  *(undefined8 *)(lVar1 + 8 + lVar5 * 0x18) = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) = *(undefined4 *)(param_2 + 2);
  return iVar3;
}



// FUNCTION 147e80b46 FUN_147e80b46 body=164 status=ok
// SIG undefined FUN_147e80b46(void)

bool FUN_147e80b46(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  plVar7 = (longlong *)param_1[1];
  if (plVar7 == (longlong *)0x0) {
LAB_147e80b6d:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar7[1];
    do {
      if (iVar5 == 0) goto LAB_147e80b6d;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
  }
  lVar6 = *param_1;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar8 = 0;
    do {
      if (iVar5 == 0) goto LAB_147e80bb4;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *param_2;
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
LAB_147e80bb4:
  if (plVar7 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  return lVar6 == lVar8;
}



// FUNCTION 147e80bea FUN_147e80bea body=230 status=ok
// SIG undefined FUN_147e80bea(void)

undefined8 * FUN_147e80bea(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e80cd2 FUN_147e80cd2 body=31 status=ok
// SIG undefined FUN_147e80cd2(void)

undefined8 FUN_147e80cd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e80d08 FUN_147e80d08 body=93 status=ok
// SIG undefined FUN_147e80d08(void)

void FUN_147e80d08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ca30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4590;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e80d66 FUN_147e80d66 body=93 status=ok
// SIG undefined FUN_147e80d66(void)

void FUN_147e80d66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ca30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4590;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e80dc4 FUN_147e80dc4 body=126 status=ok
// SIG undefined FUN_147e80dc4(void)

void FUN_147e80dc4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79ca30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb4590;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e80e33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e80e42 FUN_147e80e42 body=32 status=ok
// SIG undefined FUN_147e80e42(void)

undefined8 FUN_147e80e42(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 147e80e62 FUN_147e80e62 body=59 status=ok
// SIG undefined FUN_147e80e62(void)

undefined8 FUN_147e80e62(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(param_1 + 0x18))(local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e80e9e FUN_147e80e9e body=31 status=ok
// SIG undefined FUN_147e80e9e(void)

undefined8 FUN_147e80e9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e80ed4 FUN_147e80ed4 body=93 status=ok
// SIG undefined FUN_147e80ed4(void)

void FUN_147e80ed4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79caa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4600;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e80f32 FUN_147e80f32 body=93 status=ok
// SIG undefined FUN_147e80f32(void)

void FUN_147e80f32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79caa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4600;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e80f90 FUN_147e80f90 body=126 status=ok
// SIG undefined FUN_147e80f90(void)

void FUN_147e80f90(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79caa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb4600;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e80fff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e8100e FUN_147e8100e body=71 status=ok
// SIG undefined FUN_147e8100e(void)

void FUN_147e8100e(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  (**(code **)(param_1 + 0x18))(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e81056 FUN_147e81056 body=73 status=ok
// SIG undefined FUN_147e81056(void)

undefined8 FUN_147e81056(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  (**(code **)(param_1 + 0x18))(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e810a0 FUN_147e810a0 body=31 status=ok
// SIG undefined FUN_147e810a0(void)

undefined8 FUN_147e810a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e810d6 FUN_147e810d6 body=93 status=ok
// SIG undefined FUN_147e810d6(void)

void FUN_147e810d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cb10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4670;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e81134 FUN_147e81134 body=93 status=ok
// SIG undefined FUN_147e81134(void)

void FUN_147e81134(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cb10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4670;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e81192 FUN_147e81192 body=126 status=ok
// SIG undefined FUN_147e81192(void)

void FUN_147e81192(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cb10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb4670;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e81201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e81210 FUN_147e81210 body=74 status=ok
// SIG undefined FUN_147e81210(void)

void FUN_147e81210(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  (**(code **)(param_1 + 0x18))(param_2,&local_18,param_4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e8125c FUN_147e8125c body=76 status=ok
// SIG undefined FUN_147e8125c(void)

undefined8 FUN_147e8125c(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  (**(code **)(param_1 + 0x18))(param_2,&local_18,param_4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e812aa FUN_147e812aa body=31 status=ok
// SIG undefined FUN_147e812aa(void)

undefined8 FUN_147e812aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e812e0 FUN_147e812e0 body=93 status=ok
// SIG undefined FUN_147e812e0(void)

void FUN_147e812e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cbf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb47c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e8133e FUN_147e8133e body=93 status=ok
// SIG undefined FUN_147e8133e(void)

void FUN_147e8133e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cbf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb47c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e8139c FUN_147e8139c body=126 status=ok
// SIG undefined FUN_147e8139c(void)

void FUN_147e8139c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cbf0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb47c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e8140b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e81424 FUN_147e81424 body=20 status=ok
// SIG undefined FUN_147e81424(void)

undefined8 FUN_147e81424(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 147e81438 FUN_147e81438 body=31 status=ok
// SIG undefined FUN_147e81438(void)

undefined8 FUN_147e81438(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e8146e FUN_147e8146e body=93 status=ok
// SIG undefined FUN_147e8146e(void)

void FUN_147e8146e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4910;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e814cc FUN_147e814cc body=93 status=ok
// SIG undefined FUN_147e814cc(void)

void FUN_147e814cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4910;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e8152a FUN_147e8152a body=126 status=ok
// SIG undefined FUN_147e8152a(void)

void FUN_147e8152a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79ccd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb4910;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e81599. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e815b2 FUN_147e815b2 body=20 status=ok
// SIG undefined FUN_147e815b2(void)

undefined8 FUN_147e815b2(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 147e815c6 FUN_147e815c6 body=31 status=ok
// SIG undefined FUN_147e815c6(void)

undefined8 FUN_147e815c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e815fc FUN_147e815fc body=93 status=ok
// SIG undefined FUN_147e815fc(void)

void FUN_147e815fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4980;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e8165a FUN_147e8165a body=93 status=ok
// SIG undefined FUN_147e8165a(void)

void FUN_147e8165a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4980;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e816b8 FUN_147e816b8 body=126 status=ok
// SIG undefined FUN_147e816b8(void)

void FUN_147e816b8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cd40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb4980;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e81727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e81736 FUN_147e81736 body=20 status=ok
// SIG undefined FUN_147e81736(void)

undefined8 FUN_147e81736(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 147e8174a FUN_147e8174a body=31 status=ok
// SIG undefined FUN_147e8174a(void)

undefined8 FUN_147e8174a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e81780 FUN_147e81780 body=93 status=ok
// SIG undefined FUN_147e81780(void)

void FUN_147e81780(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4f30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e817de FUN_147e817de body=93 status=ok
// SIG undefined FUN_147e817de(void)

void FUN_147e817de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb4f30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e8183c FUN_147e8183c body=126 status=ok
// SIG undefined FUN_147e8183c(void)

void FUN_147e8183c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79d050;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb4f30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e818ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e818ba FUN_147e818ba body=23 status=ok
// SIG undefined FUN_147e818ba(void)

undefined8 FUN_147e818ba(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 147e818d2 FUN_147e818d2 body=31 status=ok
// SIG undefined FUN_147e818d2(void)

undefined8 FUN_147e818d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e81908 FUN_147e81908 body=93 status=ok
// SIG undefined FUN_147e81908(void)

void FUN_147e81908(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d130;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb5010;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e81966 FUN_147e81966 body=93 status=ok
// SIG undefined FUN_147e81966(void)

void FUN_147e81966(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d130;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb5010;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e819c4 FUN_147e819c4 body=126 status=ok
// SIG undefined FUN_147e819c4(void)

void FUN_147e819c4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79d130;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb5010;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e81a33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e81a4c FUN_147e81a4c body=20 status=ok
// SIG undefined FUN_147e81a4c(void)

undefined8 FUN_147e81a4c(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 147e81a60 FUN_147e81a60 body=45 status=ok
// SIG undefined FUN_147e81a60(void)

void FUN_147e81a60(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 147e81a8e FUN_147e81a8e body=175 status=ok
// SIG undefined FUN_147e81a8e(void)

void FUN_147e81a8e(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_147e81b17;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147e81b17:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147e81b3e FUN_147e81b3e body=132 status=ok
// SIG undefined FUN_147e81b3e(void)

void FUN_147e81b3e(longlong param_1,int param_2)

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



// FUNCTION 147e81bc4 FUN_147e81bc4 body=24 status=ok
// SIG undefined FUN_147e81bc4(void)

void FUN_147e81bc4(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e81bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147e81bdc FUN_147e81bdc body=29 status=ok
// SIG undefined FUN_147e81bdc(void)

undefined8 FUN_147e81bdc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e81bfa FUN_147e81bfa body=24 status=ok
// SIG undefined FUN_147e81bfa(void)

void FUN_147e81bfa(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e81c0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147e81c12 FUN_147e81c12 body=29 status=ok
// SIG undefined FUN_147e81c12(void)

undefined8 FUN_147e81c12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e81c30 FUN_147e81c30 body=133 status=ok
// SIG undefined FUN_147e81c30(void)

undefined4 * FUN_147e81c30(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
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
  
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = param_2[3];
  uVar10 = param_2[4];
  uVar11 = param_2[5];
  uVar12 = param_2[6];
  uVar13 = param_2[7];
  uVar14 = param_2[9];
  uVar15 = param_2[10];
  uVar16 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar14;
  param_1[10] = uVar15;
  param_1[0xb] = uVar16;
  param_1[4] = uVar10;
  param_1[5] = uVar11;
  param_1[6] = uVar12;
  param_1[7] = uVar13;
  *param_1 = uVar6;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
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
  uVar3 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)((longlong)param_1 + 0x4d) = *(undefined8 *)((longlong)param_2 + 0x4d);
  *(undefined8 *)(param_1 + 0x12) = uVar3;
  return param_1;
}



// FUNCTION 147e81cb6 FUN_147e81cb6 body=113 status=ok
// SIG undefined FUN_147e81cb6(void)

void FUN_147e81cb6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
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



// FUNCTION 147e81d28 FUN_147e81d28 body=147 status=ok
// SIG undefined FUN_147e81d28(void)

void FUN_147e81d28(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147e81dbc FUN_147e81dbc body=31 status=ok
// SIG undefined FUN_147e81dbc(void)

undefined8 FUN_147e81dbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e81df2 FUN_147e81df2 body=93 status=ok
// SIG undefined FUN_147e81df2(void)

void FUN_147e81df2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d280;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb51a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e81e50 FUN_147e81e50 body=93 status=ok
// SIG undefined FUN_147e81e50(void)

void FUN_147e81e50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d280;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abb51a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e81eae FUN_147e81eae body=126 status=ok
// SIG undefined FUN_147e81eae(void)

void FUN_147e81eae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79d280;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abb51a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e81f1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e81f36 FUN_147e81f36 body=20 status=ok
// SIG undefined FUN_147e81f36(void)

undefined8 FUN_147e81f36(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 147e81f4a FUN_147e81f4a body=24 status=ok
// SIG undefined FUN_147e81f4a(void)

void FUN_147e81f4a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e81f5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147e81f62 FUN_147e81f62 body=29 status=ok
// SIG undefined FUN_147e81f62(void)

undefined8 FUN_147e81f62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e81f80 FUN_147e81f80 body=130 status=ok
// SIG undefined FUN_147e81f80(void)

void FUN_147e81f80(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
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



// FUNCTION 147e82004 FUN_147e82004 body=112 status=ok
// SIG undefined FUN_147e82004(void)

void FUN_147e82004(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 147e82074 FUN_147e82074 body=113 status=ok
// SIG undefined FUN_147e82074(void)

void FUN_147e82074(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 8 + (longlong)(int)param_2 * 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  iVar4 = (int)param_1[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    iVar5 = 1;
    if (iVar6 < 1) {
      iVar5 = iVar6;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar2),
            (void *)((longlong)(iVar4 - iVar5) * 0x10 + lVar2),(longlong)iVar5 << 4);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 147e820e6 FUN_147e820e6 body=147 status=ok
// SIG undefined FUN_147e820e6(void)

void FUN_147e820e6(longlong param_1,int param_2)

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



// FUNCTION 147e8217a FUN_147e8217a body=106 status=ok
// SIG undefined FUN_147e8217a(void)

undefined8 FUN_147e8217a(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x18)) {
    uVar5 = uVar2 / 0x18 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 147e821e4 FUN_147e821e4 body=50 status=ok
// SIG undefined FUN_147e821e4(void)

void FUN_147e821e4(longlong param_1,longlong param_2,int param_3)

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
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 0x10 + lVar2) = *(undefined4 *)(param_2 + 0x10 + lVar2);
    lVar2 = lVar2 + 0x18;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 147e82216 FUN_147e82216 body=62 status=ok
// SIG undefined FUN_147e82216(void)

void FUN_147e82216(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147e82254(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 147e82254 FUN_147e82254 body=112 status=ok
// SIG undefined FUN_147e82254(void)

ulonglong FUN_147e82254(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147e8228e;
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
LAB_147e8228e:
  return param_2 & 0xffffffff;
}



// FUNCTION 147e822c4 FUN_147e822c4 body=101 status=ok
// SIG undefined FUN_147e822c4(void)

void FUN_147e822c4(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = 0;
    do {
      *(undefined8 *)(param_1 + 0x30 + lVar9) = *(undefined8 *)(param_2 + 0x30 + lVar9);
      uVar4 = *(undefined8 *)(param_2 + lVar9);
      uVar5 = ((undefined8 *)(param_2 + lVar9))[1];
      puVar1 = (undefined8 *)(param_2 + 0x10 + lVar9);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(param_2 + 0x20 + lVar9);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x20 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar1 = (undefined8 *)(param_1 + 0x10 + lVar9);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      *(undefined8 *)(param_1 + lVar9) = uVar4;
      ((undefined8 *)(param_1 + lVar9))[1] = uVar5;
      *(undefined8 *)(param_1 + 0x38 + lVar9) = *(undefined8 *)(param_2 + 0x38 + lVar9);
      lVar3 = *(longlong *)(param_2 + 0x40 + lVar9);
      *(longlong *)(param_1 + 0x40 + lVar9) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      *(undefined1 *)(param_1 + lVar9 + 0x48) = *(undefined1 *)(param_2 + lVar9 + 0x48);
      lVar9 = lVar9 + 0x50;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147e8232a FUN_147e8232a body=147 status=ok
// SIG undefined FUN_147e8232a(void)

void FUN_147e8232a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147e823be FUN_147e823be body=112 status=ok
// SIG undefined FUN_147e823be(void)

void FUN_147e823be(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 147e8242e FUN_147e8242e body=339 status=ok
// SIG undefined FUN_147e8242e(void)

undefined4 * FUN_147e8242e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146903798(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_40 = uVar4;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_58 = 0;
  cVar2 = FUN_14690387e(param_1,uVar3,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14690399c(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


