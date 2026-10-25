// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14986bc00 FUN_14986bc00 body=41 status=ok
// SIG undefined FUN_14986bc00(void)

void FUN_14986bc00(undefined8 param_1,longlong *param_2)

{
  switchD_143c3d4dc::caseD_21();
                    /* WARNING: Could not recover jumptable at 0x00014986bc26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bebede4);
  return;
}



// FUNCTION 14986bc2a FUN_14986bc2a body=225 status=ok
// SIG undefined FUN_14986bc2a(void)

undefined8 FUN_14986bc2a(longlong param_1,char param_2)

{
  void *_Src;
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = (undefined8 *)(param_1 + 0x30);
  if (param_2 != '\0') {
    puVar3 = (undefined8 *)(param_1 + 0x58);
  }
  local_48 = *puVar3;
  local_40 = *(undefined4 *)(puVar3 + 1);
  uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_38 = *(undefined4 *)(puVar3 + 2);
  uStack_34 = *(undefined4 *)((longlong)puVar3 + 0x14);
  local_30 = (void *)0x0;
  local_28 = *(int *)(puVar3 + 4);
  lVar4 = (longlong)local_28;
  _Src = (void *)puVar3[3];
  if (lVar4 == 0) {
    local_24 = 0;
  }
  else {
    FUN_1446dd670(&local_30,local_28,0);
    memcpy(local_30,_Src,lVar4 * 2);
  }
  lVar4 = FUN_14986bd0c(&local_48);
  if (lVar4 == 0) {
    cVar1 = FUN_144a61b4f();
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_14986bdce(&local_48);
    }
  }
  else {
    uVar2 = FUN_14986bd0c(&local_48);
  }
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14986bd0c FUN_14986bd0c body=193 status=ok
// SIG undefined FUN_14986bd0c(void)

longlong FUN_14986bd0c(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
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
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1458e79f8();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 14986bdce FUN_14986bdce body=63 status=ok
// SIG undefined FUN_14986bdce(void)

longlong FUN_14986bdce(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_1458e79f8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14986be0e FUN_14986be0e body=212 status=ok
// SIG undefined FUN_14986be0e(void)

undefined8 FUN_14986be0e(longlong param_1)

{
  void *_Src;
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_1 + 0x58);
  local_40 = *(undefined4 *)(param_1 + 0x60);
  uStack_3c = *(undefined4 *)(param_1 + 100);
  uStack_38 = *(undefined4 *)(param_1 + 0x68);
  uStack_34 = *(undefined4 *)(param_1 + 0x6c);
  local_30 = (void *)0x0;
  local_28 = *(int *)(param_1 + 0x78);
  lVar3 = (longlong)local_28;
  _Src = *(void **)(param_1 + 0x70);
  if (lVar3 == 0) {
    local_24 = 0;
  }
  else {
    FUN_1446dd670(&local_30,local_28,0);
    memcpy(local_30,_Src,lVar3 * 2);
  }
  lVar3 = FUN_14986bd0c(&local_48);
  if (lVar3 == 0) {
    cVar1 = FUN_144a61b4f();
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_14986bdce(&local_48);
    }
  }
  else {
    uVar2 = FUN_14986bd0c(&local_48);
  }
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14986bee6 FUN_14986bee6 body=361 status=ok
// SIG undefined FUN_14986bee6(void)

void FUN_14986bee6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  FUN_1446e0b6e();
  FUN_144757f48(param_1,2);
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x80);
    puVar7 = puVar6 + (longlong)*(int *)(param_1 + 0x88) * 2;
    do {
      if (puVar6[1] != 0) {
        if ((longlong)*(int *)(param_1 + 0x98) != 0) {
          plVar5 = *(longlong **)(param_1 + 0x90);
          lVar4 = (longlong)*(int *)(param_1 + 0x98) << 3;
          do {
            lVar2 = *plVar5;
            if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) == puVar6[1])) {
              if (plVar5 != (longlong *)0x0) {
                *(undefined8 *)(lVar2 + 0x28) = *puVar6;
                goto LAB_14986c026;
              }
              break;
            }
            plVar5 = plVar5 + 1;
            lVar4 = lVar4 + -8;
          } while (lVar4 != 0);
        }
        uVar3 = FUN_1459d9b76();
        lVar4 = FUN_14986c04f(param_1,uVar3);
        if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar4);
        }
        *(undefined8 *)(lVar4 + 0x30) = puVar6[1];
        *(undefined8 *)(lVar4 + 0x28) = *puVar6;
        iVar1 = *(int *)(param_1 + 0x98);
        *(uint *)(param_1 + 0x98) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x9c) < iVar1 + 1U) {
          FUN_14988d626((longlong *)(param_1 + 0x90),iVar1);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar1 * 8) = lVar4;
        if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar4);
        }
      }
LAB_14986c026:
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar7);
  }
  if (*(int *)(param_1 + 0x1c8) != *(int *)(param_1 + 500)) {
    FUN_14988a4f8(param_1 + 0x160,param_1 + 0x1c0);
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    *(longlong *)(param_1 + 0x1b8) = *(longlong *)(param_1 + 0x210);
  }
  FUN_145dc0c24(param_1);
  return;
}



// FUNCTION 14986c04f FUN_14986c04f body=175 status=ok
// SIG undefined FUN_14986c04f(void)

undefined8 FUN_14986c04f(undefined8 param_1,undefined8 param_2)

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
  local_a0 = 8;
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



// FUNCTION 14986c100 FUN_14986c100 body=151 status=ok
// SIG undefined FUN_14986c100(void)

longlong * FUN_14986c100(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    lVar1 = *param_3;
    plVar5 = *(longlong **)(param_1 + 0x90);
    lVar4 = (longlong)*(int *)(param_1 + 0x98) << 3;
    bVar3 = DAT_14c950c29;
    do {
      lVar2 = *plVar5;
      if ((lVar2 != 0 & bVar3) == 1) {
        FUN_1456cec3c(lVar2);
        bVar3 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + 0x30) == lVar1) {
        if (plVar5 != (longlong *)0x0) {
          lVar1 = *plVar5;
          *param_2 = lVar1;
          if (lVar1 == 0 || (~bVar3 & 1) != 0) {
            return param_2;
          }
          FUN_1456cec3c();
          return param_2;
        }
        break;
      }
      plVar5 = plVar5 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14986c198 FUN_14986c198 body=313 status=ok
// SIG undefined FUN_14986c198(void)

longlong FUN_14986c198(longlong param_1,char *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*param_2 == '\0') {
    if (*(int *)(param_1 + 0x118) != *(int *)(param_1 + 0x144)) {
      lVar1 = *(longlong *)(param_1 + 0x1b0);
      uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
      uVar5 = (uint)lVar1 & 0xffff;
      lVar4 = param_1 + 0x148;
      if (*(longlong *)(param_1 + 0x150) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x150);
      }
      iVar3 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_1 + 0x158) - 1U &
                               (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
      if (iVar3 != -1) {
        do {
          lVar4 = *(longlong *)(param_1 + 0x110) + (longlong)iVar3 * 0x80;
          if (*(longlong *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar3 * 0x80) == lVar1)
          goto LAB_14986c246;
          iVar3 = *(int *)(lVar4 + 0x78);
        } while (iVar3 != -1);
      }
    }
  }
  else if (*(int *)(param_1 + 0x168) != *(int *)(param_1 + 0x194)) {
    lVar1 = *(longlong *)(param_1 + 0x1b8);
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 0x198;
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1a0);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x1a8) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x160) + (longlong)iVar3 * 0x80;
        if (*(longlong *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar3 * 0x80) == lVar1)
        goto LAB_14986c246;
        iVar3 = *(int *)(lVar4 + 0x78);
      } while (iVar3 != -1);
    }
  }
  lVar4 = 0;
LAB_14986c246:
  return lVar4 + 8;
}



// FUNCTION 14986c2d2 FUN_14986c2d2 body=258 status=ok
// SIG undefined FUN_14986c2d2(void)

longlong FUN_14986c2d2(longlong param_1,char *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = (int)((ulonglong)param_3 >> 0x20);
  uVar1 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
  iVar2 = ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uint)(ushort)((ushort)param_3 >> 4) +
          (uVar1 << 0x13 | uVar1);
  if (*param_2 == '\0') {
    if (*(int *)(param_1 + 0x118) != *(int *)(param_1 + 0x144)) {
      lVar4 = param_1 + 0x148;
      if (*(longlong *)(param_1 + 0x150) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x150);
      }
      iVar2 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x158) - 1U & iVar2 + iVar5) * 4);
      if (iVar2 != -1) {
        do {
          lVar4 = *(longlong *)(param_1 + 0x110) + (longlong)iVar2 * 0x80;
          if (*(longlong *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar2 * 0x80) == param_3)
          goto LAB_14986c372;
          iVar2 = *(int *)(lVar4 + 0x78);
        } while (iVar2 != -1);
      }
    }
  }
  else if (*(int *)(param_1 + 0x168) != *(int *)(param_1 + 0x194)) {
    lVar4 = param_1 + 0x198;
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1a0);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x1a8) - 1U & iVar2 + iVar5) * 4);
    if (iVar2 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x160) + (longlong)iVar2 * 0x80;
        if (*(longlong *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar2 * 0x80) == param_3)
        goto LAB_14986c372;
        iVar2 = *(int *)(lVar4 + 0x78);
      } while (iVar2 != -1);
    }
  }
  lVar4 = 0;
LAB_14986c372:
  lVar3 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 14986c3d4 FUN_14986c3d4 body=171 status=ok
// SIG undefined FUN_14986c3d4(void)

longlong FUN_14986c3d4(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0xc0) != *(int *)(param_1 + 0xec)) {
    lVar2 = *param_2;
    uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2 & 0xffff;
    lVar3 = param_1 + 0xf0;
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xf8);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x100) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0xb8) + (longlong)iVar5 * 0x118;
        if (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar5 * 0x118) == lVar2)
        goto LAB_14986c3e4;
        iVar5 = *(int *)(lVar3 + 0x110);
      } while (iVar5 != -1);
    }
  }
  lVar3 = 0;
LAB_14986c3e4:
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 14986c484 FUN_14986c484 body=493 status=ok
// SIG undefined FUN_14986c484(void)

void FUN_14986c484(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  char local_7b;
  char local_7a;
  char local_79;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_4;
  FUN_14986c672();
  param_1[10] = (longlong)param_2;
  lVar3 = (**(code **)(*param_2 + 0x310))(param_2);
  if (0 < *(int *)(lVar3 + 0x28)) {
    lVar7 = 0;
    lVar5 = 0;
    do {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar3 + 0x20) + lVar7);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
      uVar6 = 0xffffffff;
      if (lVar5 < *(int *)(lVar3 + 0x28)) {
        uVar6 = *(undefined4 *)(*(longlong *)(lVar3 + 0x20) + 8 + lVar7);
      }
      iVar1 = (int)param_1[3];
      *(uint *)(param_1 + 3) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
        FUN_1446f48e2(param_1 + 2,iVar1);
      }
      *(undefined4 *)(param_1[2] + (longlong)iVar1 * 4) = uVar6;
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + 0xc;
    } while (lVar5 < *(int *)(lVar3 + 0x28));
  }
  local_78 = 0;
  FUN_146bfef22(param_1 + 0xb,&local_78,(int)param_1[1]);
  if ((longlong)(int)param_3[1] != 0) {
    puVar8 = (undefined8 *)*param_3;
    puVar4 = puVar8 + (longlong)(int)param_3[1] * 6;
    do {
      local_78 = 0;
      uStack_70 = 0;
      FUN_14986c702(&local_7b,puVar8,param_1,&local_78);
      if (((local_7b == '\x01') && (local_7a == '\x01')) && (local_79 == '\x01')) {
        if ((longlong)(int)uStack_70 != 0) {
          lVar3 = 0;
          do {
            *(undefined8 *)(param_1[0xb] + (longlong)*(int *)(local_78 + lVar3) * 8) = *puVar8;
            lVar3 = lVar3 + 4;
          } while ((longlong)(int)uStack_70 * 4 != lVar3);
        }
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      puVar8 = puVar8 + 6;
    } while (puVar8 != puVar4);
  }
  local_78 = CONCAT44(local_78._4_4_,0xfffffffe);
  FUN_1448156a8(param_1 + 0xd,&local_78,(int)param_1[3]);
  FUN_14986c8ce(param_1,local_88,param_5,param_6);
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14986c672 FUN_14986c672 body=144 status=ok
// SIG undefined FUN_14986c672(void)

void FUN_14986c672(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_1402191ca(param_1,0);
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_14481578e(param_1 + 0x10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x2c) < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_1401a2688(param_1 + 0x20,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_1401a2688(param_1 + 0x30,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 14986c702 FUN_14986c702 body=459 status=ok
// SIG undefined FUN_14986c702(void)

undefined2 * FUN_14986c702(undefined2 *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  uint *local_58;
  ulonglong *local_50;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  lVar5 = (longlong)(int)param_3[1];
  uVar7 = 0xffffffff;
  if (lVar5 == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    lVar8 = lVar5 * 8;
    lVar10 = 0;
    do {
      if (*(longlong *)(param_2 + 8) == *(longlong *)(*param_3 + lVar10 * 8)) goto LAB_14986c766;
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
    lVar10 = 0xffffffff;
LAB_14986c766:
    uVar9 = (uint)lVar10;
    lVar5 = lVar5 << 3;
    lVar8 = 0;
    do {
      if (*(longlong *)(param_2 + 0x18) == *(longlong *)(*param_3 + lVar8 * 8)) {
        uVar7 = (uint)lVar8;
        break;
      }
      lVar8 = lVar8 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(bool *)param_1 = -1 < (int)uVar9;
  *(bool *)((longlong)param_1 + 1) = -1 < (int)uVar7;
  if (-1 < (int)(uVar7 | uVar9) && (int)uVar9 <= (int)uVar7) {
    local_58 = &local_44;
    local_50 = &local_40;
    local_44 = uVar7;
    FUN_140aece26(param_4);
    if (uVar7 == uVar9) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else {
      uVar4 = 0xffffffff;
      if ((int)uVar7 < (int)param_3[3]) {
        uVar4 = *(uint *)(param_3[2] + (ulonglong)uVar7 * 4);
      }
      while (uVar7 = uVar4, (int)uVar9 <= (int)uVar7) {
        iVar1 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_4,iVar1);
        }
        *(uint *)(*param_4 + (longlong)iVar1 * 4) = uVar7;
        uVar4 = 0xffffffff;
        if ((int)uVar7 < (int)param_3[3]) {
          uVar4 = *(uint *)(param_3[2] + (ulonglong)uVar7 * 4);
        }
      }
      if (*(uint *)(*param_4 + (longlong)((int)param_4[1] + -1) * 4) == uVar9) {
        *(undefined1 *)(param_1 + 1) = 1;
        uVar7 = *(uint *)(param_4 + 1);
        lVar5 = (longlong)(int)uVar7;
        if (1 < lVar5) {
          puVar3 = (undefined4 *)*param_4;
          lVar8 = 0;
          puVar6 = puVar3;
          do {
            uVar2 = *puVar6;
            *puVar6 = puVar3[lVar5 + lVar8 + -1];
            puVar3[lVar5 + lVar8 + -1] = uVar2;
            lVar8 = lVar8 + -1;
            puVar6 = puVar6 + 1;
          } while (-lVar8 != (ulonglong)(uVar7 >> 1));
        }
      }
      else {
        *(undefined4 *)(param_4 + 1) = 0;
        if (*(int *)((longlong)param_4 + 0xc) < 0) {
          FUN_14481578e(param_4,0);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14986c8ce FUN_14986c8ce body=1031 status=ok
// SIG undefined FUN_14986c8ce(void)

void FUN_14986c8ce(longlong *param_1,longlong param_2,double *param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double dVar7;
  double dVar9;
  double dVar10;
  double dVar12;
  void *_Src;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  double dVar27;
  undefined1 auStack_108 [40];
  longlong local_e0;
  double *local_d8;
  undefined4 local_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong local_90;
  double dVar8;
  double dVar11;
  double dVar13;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  param_1[8] = param_2;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_3 + 0xd);
  (**(code **)(*(longlong *)param_1[10] + 0x310))();
  plVar1 = param_1 + 4;
  FUN_144756208(plVar1);
  plVar2 = param_1 + 6;
  iVar24 = (int)param_1[5];
  _Src = (void *)param_1[4];
  *(int *)(param_1 + 7) = iVar24;
  if (iVar24 == 0 && *(int *)((longlong)param_1 + 0x3c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_144756262(plVar2);
    if (iVar24 != 0) {
      memcpy((void *)*plVar2,_Src,(longlong)iVar24 * 0x60);
    }
    iVar24 = (int)param_1[7];
  }
  if (0 < iVar24) {
    iVar24 = 0;
    do {
      FUN_14986cd82(param_1,iVar24,plVar1,plVar2);
      iVar24 = iVar24 + 1;
    } while (iVar24 < (int)param_1[7]);
  }
  iVar24 = (int)param_1[1];
  if (0 < iVar24) {
    lVar22 = 0x50;
    lVar23 = 0;
    do {
      uVar19 = DAT_14c846520;
      uVar20 = DAT_14c846518;
      lVar25 = param_1[4];
      puVar3 = (undefined8 *)(lVar25 + -0x10 + lVar22);
      *puVar3 = DAT_14c846510;
      puVar3[1] = uVar20;
      puVar3 = (undefined8 *)(lVar25 + lVar22);
      *puVar3 = uVar19;
      puVar3[1] = 0;
      uVar19 = DAT_14c846520;
      uVar20 = DAT_14c846518;
      lVar25 = param_1[6];
      puVar3 = (undefined8 *)(lVar25 + -0x10 + lVar22);
      *puVar3 = DAT_14c846510;
      puVar3[1] = uVar20;
      puVar3 = (undefined8 *)(lVar25 + lVar22);
      *puVar3 = uVar19;
      puVar3[1] = 0;
      lVar23 = lVar23 + 1;
      iVar24 = (int)param_1[1];
      lVar22 = lVar22 + 0x60;
    } while (lVar23 < iVar24);
  }
  if (param_4 != 0) {
    if (iVar24 != 0) {
      lVar25 = (longlong)iVar24 << 3;
      lVar23 = 0;
      lVar22 = 0;
      do {
        if (*(longlong *)(*param_1 + lVar23 * 8) == param_4) {
          if ((int)lVar23 != -1) {
            lVar23 = param_1[6];
            lVar22 = (lVar22 >> 0x20) * 0x60;
            pdVar5 = (double *)(lVar23 + 0x20 + lVar22);
            dVar8 = param_3[1] + pdVar5[1];
            pdVar6 = (double *)(lVar23 + 0x30 + lVar22);
            dVar27 = param_3[2] + *pdVar6;
            dVar7 = pdVar6[1];
            auVar14._8_4_ = SUB84(dVar8,0);
            auVar14._0_8_ = *param_3 + *pdVar5;
            auVar14._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            *(undefined1 (*) [16])(lVar23 + 0x20 + lVar22) = auVar14;
            pdVar5 = (double *)(lVar23 + 0x30 + lVar22);
            *pdVar5 = dVar27;
            pdVar5[1] = dVar7 + 0.0;
            FUN_14986ccd6(param_1,dVar27,plVar1,plVar2);
          }
          break;
        }
        lVar22 = lVar22 + 0x100000000;
        lVar23 = lVar23 + 1;
        lVar25 = lVar25 + -8;
      } while (lVar25 != 0);
    }
    local_e0 = (**(code **)(*(longlong *)param_1[10] + 0x310))();
    pdVar5 = param_3 + 3;
    pdVar6 = param_3 + 5;
    local_b0 = 0x100000000;
    local_a0 = 0xffffffff;
    uStack_98 = 0;
    uStack_a8 = pdVar6;
    if (*(int *)(param_3 + 8) == 0) {
      iVar24 = 0;
    }
    else {
      FUN_1449c0562(&local_b0);
      iVar24 = *(int *)(param_3 + 8);
    }
    uStack_b8 = CONCAT44(uStack_94,uStack_98);
    local_c0 = local_a0;
    uVar20 = local_c0;
    local_d0 = (undefined4)local_b0;
    uStack_cc = local_b0._4_4_;
    uStack_c8 = (undefined4)uStack_a8;
    uStack_c4 = uStack_a8._4_4_;
    local_c0._4_4_ = (int)((ulonglong)local_a0 >> 0x20);
    local_d8 = pdVar5;
    if ((local_c0._4_4_ != iVar24) || (uStack_a8 != pdVar6)) {
      iVar21 = local_c0._4_4_;
      local_c0 = uVar20;
      do {
        if ((longlong)(int)param_1[1] != 0) {
          lVar22 = (longlong)*local_d8 + (longlong)iVar21 * 0x40;
          uVar26 = 0;
          lVar23 = 0;
          do {
            if (*(longlong *)((longlong)*local_d8 + (longlong)iVar21 * 0x40) ==
                *(longlong *)(*param_1 + uVar26)) {
              if ((~uVar26 & 0x7fffffff8) != 0) {
                lVar25 = *(longlong *)(local_e0 + 0x30);
                lVar23 = (lVar23 >> 0x20) * 0x60;
                dVar15 = *(double *)(lVar22 + 0x10);
                dVar16 = *(double *)(lVar22 + 0x18);
                dVar17 = *(double *)(lVar22 + 0x20);
                dVar18 = *(double *)(lVar22 + 0x28);
                pdVar4 = (double *)(lVar25 + 0x18 + lVar23);
                dVar7 = *pdVar4;
                dVar8 = *pdVar4;
                pdVar4 = (double *)(lVar25 + 8 + lVar23);
                dVar27 = *pdVar4;
                dVar9 = *pdVar4;
                dVar10 = *(double *)(lVar25 + lVar23);
                dVar11 = *(double *)(lVar25 + lVar23);
                pdVar4 = (double *)(lVar25 + 0x10 + lVar23);
                dVar12 = *pdVar4;
                dVar13 = *pdVar4;
                lVar22 = *plVar1;
                pdVar4 = (double *)(lVar22 + lVar23);
                *pdVar4 = dVar16 * dVar12 * -1.0 +
                          dVar17 * dVar27 + dVar10 * dVar18 * 1.0 + dVar7 * dVar15;
                pdVar4[1] = dVar15 * dVar13 * 1.0 +
                            dVar18 * dVar9 + dVar11 * dVar17 * -1.0 + dVar8 * dVar16;
                pdVar4 = (double *)(lVar22 + 0x10 + lVar23);
                *pdVar4 = dVar18 * dVar12 * 1.0 +
                          ((dVar10 * dVar16 * 1.0 + dVar7 * dVar17) - dVar27 * dVar15);
                pdVar4[1] = dVar17 * dVar13 * -1.0 +
                            ((dVar11 * dVar15 * -1.0 + dVar8 * dVar18) - dVar9 * dVar16);
              }
              break;
            }
            lVar23 = lVar23 + 0x100000000;
            uVar26 = uVar26 + 8;
          } while ((longlong)(int)param_1[1] * 8 != uVar26);
        }
        local_c0 = CONCAT44(local_c0._4_4_,(uint)local_c0 & ~uStack_cc);
        FUN_1449c0562(&local_d0);
        iVar21 = local_c0._4_4_;
        uVar20 = local_c0;
      } while (local_d8 != pdVar5 ||
               ((double *)CONCAT44(uStack_c4,uStack_c8) != pdVar6 || local_c0._4_4_ != iVar24));
    }
    local_c0 = uVar20;
    if (0 < (int)param_1[7]) {
      iVar24 = 0;
      do {
        FUN_14986cd82(param_1,iVar24,plVar1,plVar2);
        iVar24 = iVar24 + 1;
      } while (iVar24 < (int)param_1[7]);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14986ccd6 FUN_14986ccd6 body=171 status=ok
// SIG undefined FUN_14986ccd6(void)

void FUN_14986ccd6(longlong param_1,int param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 4);
  lVar3 = (longlong)param_2 * 0x60;
  puVar2 = (undefined8 *)(*param_4 + lVar3);
  if (lVar1 == -1) {
    puVar4 = (undefined8 *)(lVar3 + *param_3);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  }
  FUN_1449437a2(puVar2,local_88,*param_4 + lVar1 * 0x60);
  puVar2 = local_88;
  puVar4 = (undefined8 *)(lVar3 + *param_3);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14986cd82 FUN_14986cd82 body=1857 status=ok
// SIG undefined FUN_14986cd82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14986cd82(longlong param_1,int param_2,longlong *param_3,longlong *param_4)

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
  longlong lVar17;
  int iVar18;
  uint uVar19;
  double *pdVar20;
  longlong lVar21;
  double *pdVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  double dVar27;
  undefined1 auVar26 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auStack_298 [32];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
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
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  auVar39 = _DAT_149934d80;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar17 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 4);
  lVar23 = (longlong)param_2 * 0x60;
  pdVar20 = (double *)(*param_3 + lVar23);
  lVar21 = *param_4;
  if (lVar17 == -1) {
    pdVar22 = (double *)(lVar21 + lVar23);
    for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
      *pdVar22 = *pdVar20;
      pdVar20 = pdVar20 + 1;
      pdVar22 = pdVar22 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_298);
  }
  lVar17 = lVar17 * 0x60;
  pdVar22 = (double *)(lVar21 + lVar17);
  auVar30 = *(undefined1 (*) [16])(lVar21 + 0x40 + lVar17);
  dVar5 = auVar30._0_8_;
  dVar9 = auVar30._8_8_;
  auVar3 = *(undefined1 (*) [16])(lVar21 + 0x50 + lVar17);
  dVar6 = auVar3._0_8_;
  auVar31 = *(undefined1 (*) [16])(pdVar20 + 8);
  dVar7 = auVar31._0_8_;
  dVar10 = auVar31._8_8_;
  auVar4 = *(undefined1 (*) [16])(pdVar20 + 10);
  dVar8 = auVar4._0_8_;
  auVar30 = minpd(auVar31,auVar30);
  auVar34 = minpd(auVar4,auVar3);
  auVar31._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
  auVar31._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
  iVar18 = movmskpd((int)lVar17,auVar31);
  auVar30._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar30._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  uVar19 = movmskpd(param_2,auVar30);
  if ((uVar19 & 0x3fffffff) == 0 && iVar18 == 0) {
    dVar32 = *pdVar20;
    dVar36 = pdVar20[1];
    dVar37 = pdVar20[2];
    dVar38 = pdVar20[3];
    dVar13 = *pdVar22;
    dVar14 = pdVar22[1];
    dVar15 = pdVar22[2];
    dVar16 = pdVar22[3];
    dVar27 = pdVar22[3];
    dVar28 = pdVar22[3];
    dVar12 = pdVar22[1];
    dVar1 = pdVar22[1];
    dVar2 = pdVar22[2];
    dVar35 = pdVar22[2];
    dVar29 = dVar36 * dVar2 * -1.0 + dVar37 * dVar12 + dVar38 * *pdVar22 * 1.0 + dVar32 * dVar27;
    dVar33 = dVar32 * dVar35 * 1.0 + dVar38 * dVar1 + dVar37 * *pdVar22 * -1.0 + dVar36 * dVar28;
    auVar39._0_8_ =
         dVar38 * dVar2 * 1.0 + ((*pdVar22 * dVar36 * 1.0 + dVar37 * dVar27) - dVar32 * dVar12);
    auVar39._8_8_ =
         dVar37 * dVar35 * -1.0 + ((*pdVar22 * dVar32 * -1.0 + dVar38 * dVar28) - dVar36 * dVar1);
    dVar35 = pdVar20[4] * dVar5;
    dVar32 = pdVar20[5] * dVar9;
    dVar36 = pdVar20[6] * dVar6;
    dVar37 = pdVar20[7] * auVar3._8_8_;
    dVar12 = dVar32 * dVar13 - dVar14 * dVar35;
    dVar1 = dVar36 * dVar14 - dVar15 * dVar32;
    dVar2 = dVar35 * dVar15 - dVar13 * dVar36;
    dVar38 = dVar37 * dVar16 - dVar16 * dVar37;
    dVar1 = dVar1 + dVar1;
    dVar2 = dVar2 + dVar2;
    dVar12 = dVar12 + dVar12;
    dVar38 = dVar38 + dVar38;
    local_f8 = (dVar12 * dVar14 - dVar15 * dVar2) + dVar27 * dVar1 + dVar35 + pdVar22[4];
    dStack_f0 = (dVar1 * dVar15 - dVar12 * dVar13) + dVar28 * dVar2 + dVar32 + pdVar22[5];
    local_e8 = (dVar2 * dVar13 - dVar14 * dVar1) + dVar27 * dVar12 + dVar36 + pdVar22[6];
    dVar28 = (dVar38 * dVar16 - dVar38 * dVar16) + dVar28 * dVar38 + dVar37 + pdVar22[7];
  }
  else {
    dVar1 = *pdVar22;
    dVar2 = pdVar22[1];
    dVar35 = pdVar22[2];
    dVar32 = dVar2 + dVar2;
    dVar36 = dVar35 + dVar35;
    dVar27 = dVar1 * (dVar1 + dVar1);
    local_188 = (1.0 - (dVar27 + dVar2 * dVar32)) * dVar6;
    dVar28 = pdVar22[3];
    dVar37 = dVar36 * dVar28;
    dVar38 = (dVar1 + dVar1) * pdVar22[3];
    dVar28 = dVar32 * dVar28;
    local_198 = (dVar28 + *pdVar22 * dVar36) * dVar6;
    dVar27 = (DAT_149934d80._8_8_ - (dVar35 * dVar36 + dVar27)) * dVar9;
    dVar12 = (dVar32 * dVar1 + dVar37) * dVar5;
    local_1a8 = (dVar36 * dVar2 + dVar38) * dVar9;
    dStack_190 = (dVar36 * dVar2 - dVar38) * dVar6;
    local_1c8 = (*pdVar22 * dVar36 - dVar28) * dVar5;
    local_1d8._8_4_ = SUB84(dVar12,0);
    local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar35 * dVar36 + dVar2 * dVar32)) * dVar5;
    local_1d8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar27,0);
    local_1b8._0_8_ = (dVar32 * dVar1 - dVar37) * dVar9;
    local_1b8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = pdVar22[4];
    dStack_170 = pdVar22[5];
    local_168 = pdVar22[6];
    uStack_160 = 0x3ff0000000000000;
    dVar12 = *pdVar20;
    dVar1 = pdVar20[1];
    dVar2 = pdVar20[2];
    dVar35 = dVar1 + dVar1;
    dVar32 = dVar2 + dVar2;
    dVar27 = dVar12 * (dVar12 + dVar12);
    local_208 = (1.0 - (dVar27 + dVar1 * dVar35)) * dVar8;
    dVar28 = pdVar20[3];
    dVar36 = dVar32 * dVar28;
    dVar37 = (dVar12 + dVar12) * pdVar20[3];
    dVar28 = dVar35 * dVar28;
    local_218 = (dVar28 + *pdVar20 * dVar32) * dVar8;
    dStack_210 = (dVar32 * dVar1 - dVar37) * dVar8;
    local_258 = ((double)DAT_149934d80 - (dVar2 * dVar32 + dVar1 * dVar35)) * dVar7;
    dVar27 = (DAT_149934d80._8_8_ - (dVar2 * dVar32 + dVar27)) * dVar10;
    dStack_250 = (dVar35 * dVar12 + dVar36) * dVar7;
    local_228 = (dVar32 * dVar1 + dVar37) * dVar10;
    local_248 = (*pdVar20 * dVar32 - dVar28) * dVar7;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar27,0);
    local_238._0_8_ = (dVar35 * dVar12 - dVar36) * dVar10;
    local_238._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = pdVar20[4];
    dStack_1f0 = pdVar20[5];
    local_1e8 = pdVar20[6];
    uStack_1e0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar34._8_8_ = -(ulonglong)(0.0 <= dVar9 * dVar10);
    auVar34._0_8_ = -(ulonglong)(0.0 <= dVar5 * dVar7);
    auVar30 = blendvpd(_DAT_149936790,auVar39,auVar34);
    uVar24 = -(ulonglong)(0.0 <= dVar6 * dVar8);
    dVar28 = (double)(~uVar24 & 0xbff0000000000000 | uVar24 & 0x3ff0000000000000);
    dVar27 = auVar30._0_8_;
    local_148 = local_148 * dVar27;
    local_150 = local_150 * dVar27;
    local_158 = local_158 * dVar27;
    dVar27 = auVar30._8_8_;
    local_128 = local_128 * dVar27;
    local_130 = local_130 * dVar27;
    local_138 = dVar27 * local_138;
    local_108 = local_108 * dVar28;
    local_110 = local_110 * dVar28;
    local_118 = dVar28 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar28 = local_268 * local_268 + local_278 * local_278;
    dVar27 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar26._0_8_ = dVar28 + dVar27;
    auVar26._8_8_ = dVar28 + dVar27;
    auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
    auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
    auVar30 = sqrtpd(auVar26,auVar26);
    auVar39 = divpd(auVar39,auVar30);
    auVar40._0_8_ = auVar39._0_8_ * local_268;
    auVar40._8_8_ = auVar39._8_8_ * dStack_260;
    dVar29 = (double)((ulonglong)(local_278 * auVar39._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
    dVar33 = (double)((ulonglong)(dStack_270 * auVar39._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_));
    auVar39 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar25);
    dVar28 = 0.0;
    lVar21 = *param_4;
  }
  dVar27 = auVar3._8_8_ * auVar4._8_8_;
  *(double *)(lVar21 + lVar23) = dVar29;
  ((double *)(lVar21 + lVar23))[1] = dVar33;
  *(undefined1 (*) [16])(lVar21 + 0x10 + lVar23) = auVar39;
  auVar4._8_4_ = SUB84(dStack_f0,0);
  auVar4._0_8_ = local_f8;
  auVar4._12_4_ = (int)((ulonglong)dStack_f0 >> 0x20);
  *(undefined1 (*) [16])(lVar21 + 0x20 + lVar23) = auVar4;
  pdVar20 = (double *)(lVar21 + 0x30 + lVar23);
  *pdVar20 = local_e8;
  pdVar20[1] = dVar28;
  auVar11._8_4_ = SUB84(dVar9 * dVar10,0);
  auVar11._0_8_ = dVar5 * dVar7;
  auVar11._12_4_ = (int)((ulonglong)(dVar9 * dVar10) >> 0x20);
  *(undefined1 (*) [16])(lVar21 + 0x40 + lVar23) = auVar11;
  auVar3._8_4_ = SUB84(dVar27,0);
  auVar3._0_8_ = dVar6 * dVar8;
  auVar3._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  *(undefined1 (*) [16])(lVar21 + 0x50 + lVar23) = auVar3;
  if ((local_d0 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14986d4c4 FUN_14986d4c4 body=1865 status=ok
// SIG undefined FUN_14986d4c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14986d4c4(longlong param_1,double *param_2,int param_3,longlong *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
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
  longlong lVar32;
  int iVar33;
  uint uVar34;
  double *pdVar35;
  ulonglong uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  double dVar43;
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
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
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  lVar32 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + (longlong)param_3 * 4);
  pdVar35 = (double *)((longlong)param_3 * 0x60 + *(longlong *)(param_1 + 0x20));
  if (lVar32 == -1) {
    for (lVar32 = 0xc; lVar32 != 0; lVar32 = lVar32 + -1) {
      *param_2 = *pdVar35;
      pdVar35 = pdVar35 + 1;
      param_2 = param_2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_288);
  }
  lVar6 = *param_4;
  lVar32 = lVar32 * 0x60;
  pdVar1 = (double *)(lVar6 + lVar32);
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  auVar15 = _DAT_149934d80;
  auVar41 = *(undefined1 (*) [16])(lVar6 + 0x40 + lVar32);
  dVar7 = auVar41._0_8_;
  dVar16 = auVar41._8_8_;
  auVar49 = *(undefined1 (*) [16])(lVar6 + 0x50 + lVar32);
  dVar8 = auVar49._0_8_;
  dVar14 = auVar49._8_8_;
  auVar44 = *(undefined1 (*) [16])(pdVar35 + 8);
  dVar9 = auVar44._0_8_;
  dVar40 = auVar44._8_8_;
  auVar4 = *(undefined1 (*) [16])(pdVar35 + 10);
  dVar10 = auVar4._0_8_;
  auVar41 = minpd(auVar44,auVar41);
  auVar44 = minpd(auVar4,auVar49);
  auVar49._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
  auVar49._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
  iVar33 = movmskpd((int)lVar6,auVar49);
  auVar41._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
  auVar41._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
  uVar34 = movmskpd((int)lVar32,auVar41);
  if ((uVar34 & 0x3fffffff) == 0 && iVar33 == 0) {
    dVar24 = *pdVar35;
    dVar25 = pdVar35[1];
    dVar26 = pdVar35[2];
    dVar27 = pdVar35[3];
    dVar28 = *pdVar1;
    dVar29 = pdVar1[1];
    dVar30 = pdVar1[2];
    dVar31 = pdVar1[3];
    dVar17 = pdVar1[3];
    dVar39 = pdVar1[3];
    dVar2 = *pdVar1;
    dVar18 = *pdVar1;
    dVar45 = pdVar1[1];
    dVar3 = pdVar1[1];
    dVar46 = pdVar1[2];
    dVar43 = pdVar1[2];
    dVar19 = pdVar35[4] * dVar7;
    dVar48 = pdVar35[5] * dVar16;
    dVar20 = pdVar35[6] * dVar8;
    dVar21 = pdVar35[7] * dVar14;
    dVar11 = dVar48 * dVar28 - dVar29 * dVar19;
    dVar12 = dVar20 * dVar29 - dVar30 * dVar48;
    dVar22 = dVar19 * dVar30 - dVar28 * dVar20;
    dVar23 = dVar21 * dVar31 - dVar31 * dVar21;
    dVar12 = dVar12 + dVar12;
    dVar22 = dVar22 + dVar22;
    dVar11 = dVar11 + dVar11;
    dVar23 = dVar23 + dVar23;
    dVar47 = pdVar1[4];
    dVar13 = (dVar12 * dVar30 - dVar11 * dVar28) + dVar39 * dVar22 + dVar48 + pdVar1[5];
    dVar48 = pdVar1[6];
    dVar5 = pdVar1[7];
    *param_2 = dVar25 * dVar46 * -1.0 + dVar26 * dVar45 + dVar27 * dVar2 * 1.0 + dVar24 * dVar17;
    param_2[1] = dVar24 * dVar43 * 1.0 + dVar27 * dVar3 + dVar26 * dVar18 * -1.0 + dVar25 * dVar39;
    param_2[2] = dVar27 * dVar46 * 1.0 +
                 ((dVar2 * dVar25 * 1.0 + dVar26 * dVar17) - dVar24 * dVar45);
    param_2[3] = dVar26 * dVar43 * -1.0 +
                 ((dVar18 * dVar24 * -1.0 + dVar27 * dVar39) - dVar25 * dVar3);
    auVar44._8_4_ = SUB84(dVar13,0);
    auVar44._0_8_ = (dVar11 * dVar29 - dVar30 * dVar22) + dVar17 * dVar12 + dVar19 + dVar47;
    auVar44._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 4) = auVar44;
    param_2[6] = (dVar22 * dVar28 - dVar29 * dVar12) + dVar17 * dVar11 + dVar20 + dVar48;
    param_2[7] = (dVar23 * dVar31 - dVar23 * dVar31) + dVar39 * dVar23 + dVar21 + dVar5;
    param_2[8] = dVar9 * dVar7;
    param_2[9] = dVar40 * dVar16;
    param_2[10] = dVar10 * dVar8;
    param_2[0xb] = auVar4._8_8_ * dVar14;
  }
  else {
    dVar2 = *pdVar1;
    dVar3 = pdVar1[1];
    dVar45 = pdVar1[2];
    dVar43 = dVar3 + dVar3;
    dVar46 = dVar45 + dVar45;
    dVar17 = dVar2 * (dVar2 + dVar2);
    local_178 = (1.0 - (dVar17 + dVar3 * dVar43)) * dVar8;
    dVar39 = pdVar1[3];
    dVar47 = dVar46 * dVar39;
    dVar48 = (dVar2 + dVar2) * pdVar1[3];
    dVar39 = dVar43 * dVar39;
    local_188 = (dVar39 + *pdVar1 * dVar46) * dVar8;
    dVar14 = dVar14 * auVar4._8_8_;
    dVar17 = (DAT_149934d80._8_8_ - (dVar45 * dVar46 + dVar17)) * dVar16;
    dVar18 = (dVar43 * dVar2 + dVar47) * dVar7;
    local_198 = (dVar46 * dVar3 + dVar48) * dVar16;
    dStack_180 = (dVar46 * dVar3 - dVar48) * dVar8;
    local_1b8 = (*pdVar1 * dVar46 - dVar39) * dVar7;
    local_1c8._8_4_ = SUB84(dVar18,0);
    local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar45 * dVar46 + dVar3 * dVar43)) * dVar7;
    local_1c8._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar17,0);
    local_1a8._0_8_ = (dVar43 * dVar2 - dVar47) * dVar16;
    local_1a8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = pdVar1[4];
    dStack_160 = pdVar1[5];
    local_158 = pdVar1[6];
    uStack_150 = 0x3ff0000000000000;
    dVar18 = *pdVar35;
    dVar2 = pdVar35[1];
    dVar3 = pdVar35[2];
    dVar45 = dVar2 + dVar2;
    dVar43 = dVar3 + dVar3;
    dVar17 = dVar18 * (dVar18 + dVar18);
    local_1f8 = (1.0 - (dVar17 + dVar2 * dVar45)) * dVar10;
    dVar39 = pdVar35[3];
    dVar46 = dVar43 * dVar39;
    dVar47 = (dVar18 + dVar18) * pdVar35[3];
    dVar39 = dVar45 * dVar39;
    local_208 = (dVar39 + *pdVar35 * dVar43) * dVar10;
    dStack_200 = (dVar43 * dVar2 - dVar47) * dVar10;
    dVar16 = dVar16 * dVar40;
    local_248 = ((double)DAT_149934d80 - (dVar3 * dVar43 + dVar2 * dVar45)) * dVar9;
    dVar17 = (DAT_149934d80._8_8_ - (dVar3 * dVar43 + dVar17)) * dVar40;
    dStack_240 = (dVar45 * dVar18 + dVar46) * dVar9;
    local_218 = (dVar43 * dVar2 + dVar47) * dVar40;
    local_238 = (*pdVar35 * dVar43 - dVar39) * dVar9;
    uStack_230 = 0;
    local_228._8_4_ = SUB84(dVar17,0);
    local_228._0_8_ = (dVar45 * dVar18 - dVar46) * dVar40;
    local_228._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = pdVar35[4];
    dStack_1e0 = pdVar35[5];
    local_1d8 = pdVar35[6];
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar37._8_8_ = -(ulonglong)(0.0 <= dVar16);
    auVar37._0_8_ = -(ulonglong)(0.0 <= dVar7 * dVar9);
    auVar41 = blendvpd(_DAT_149936790,auVar15,auVar37);
    uVar36 = -(ulonglong)(0.0 <= dVar8 * dVar10);
    dVar40 = (double)(~uVar36 & 0xbff0000000000000 | uVar36 & 0x3ff0000000000000);
    dVar39 = auVar41._0_8_;
    local_138 = local_138 * dVar39;
    local_140 = local_140 * dVar39;
    local_148 = local_148 * dVar39;
    dVar39 = auVar41._8_8_;
    local_118 = local_118 * dVar39;
    local_120 = local_120 * dVar39;
    local_128 = dVar39 * local_128;
    local_f8 = local_f8 * dVar40;
    local_100 = local_100 * dVar40;
    local_108 = dVar40 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar40 = local_258 * local_258 + local_268 * local_268;
    dVar39 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar42._0_8_ = dVar40 + dVar39;
    auVar42._8_8_ = dVar40 + dVar39;
    auVar38._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
    auVar38._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
    auVar41 = sqrtpd(auVar42,auVar42);
    auVar49 = divpd(auVar15,auVar41);
    auVar50._0_8_ = auVar49._0_8_ * local_258;
    auVar50._8_8_ = auVar49._8_8_ * dStack_250;
    auVar41 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar50,auVar38);
    auVar15._8_4_ = SUB84(dVar16,0);
    auVar15._0_8_ = dVar7 * dVar9;
    auVar15._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 8) = auVar15;
    auVar4._8_4_ = SUB84(dVar14,0);
    auVar4._0_8_ = dVar8 * dVar10;
    auVar4._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 10) = auVar4;
    *param_2 = (double)((ulonglong)(local_268 * auVar49._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_));
    param_2[1] = (double)((ulonglong)(dStack_260 * auVar49._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_));
    *(undefined1 (*) [16])(param_2 + 2) = auVar41;
    param_2[4] = local_e8;
    param_2[5] = dStack_e0;
    param_2[6] = local_d8;
    param_2[7] = 0.0;
  }
  if ((local_c0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14986dc0e FUN_14986dc0e body=196 status=ok
// SIG undefined FUN_14986dc0e(void)

int FUN_14986dc0e(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar3 = -1;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x70))) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    uVar6 = (ulonglong)param_2;
    iVar3 = *(int *)(lVar2 + uVar6 * 4);
    if (iVar3 == -2) {
      iVar3 = *(int *)(param_1 + 8);
      if ((param_2 == 0) || (uVar4 = param_2 + 1, iVar3 <= (int)uVar4)) {
        *(int *)(lVar2 + uVar6 * 4) = iVar3 + -1;
      }
      else {
        *(undefined4 *)(lVar2 + uVar6 * 4) = 0xffffffff;
        iVar1 = *(int *)(param_1 + 0x18);
        iVar5 = -1;
        iVar7 = -1;
        if ((int)param_2 < iVar1) {
          iVar7 = *(int *)(*(longlong *)(param_1 + 0x10) + uVar6 * 4);
        }
        uVar8 = (ulonglong)uVar4;
        if ((int)uVar4 < iVar1) {
          iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + uVar8 * 4);
        }
        uVar4 = 0xfffffffe;
        if (iVar7 < iVar5) {
          do {
            uVar8 = uVar8 + 1;
            uVar4 = iVar3 - 1;
            if (iVar3 <= (int)(param_2 + 2)) break;
            iVar5 = -1;
            if ((int)(param_2 + 2) < iVar1) {
              iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + uVar8 * 4);
            }
            uVar4 = param_2 + 1;
            param_2 = uVar4;
          } while (iVar7 < iVar5);
        }
        *(uint *)(*(longlong *)(param_1 + 0x68) + uVar6 * 4) = uVar4;
      }
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x68) + uVar6 * 4);
    }
  }
  return iVar3;
}



// FUNCTION 14986dcd2 FUN_14986dcd2 body=100 status=ok
// SIG undefined FUN_14986dcd2(void)

void FUN_14986dcd2(undefined8 param_1,int param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_14986dc0e();
  if (param_2 < iVar2 && iVar2 != -1) {
    do {
      param_2 = param_2 + 1;
      iVar1 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(param_3,iVar1);
      }
      *(int *)(*param_3 + (longlong)iVar1 * 4) = param_2;
    } while (param_2 != iVar2);
  }
  return;
}



// FUNCTION 14986dd36 FUN_14986dd36 body=214 status=ok
// SIG undefined FUN_14986dd36(void)

void FUN_14986dd36(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14986de0e();
  local_58 = param_5;
  uStack_50 = param_6;
  FUN_14986c484(param_1,param_2,param_3,param_4);
  local_41 = 0;
  FUN_14475e60e(param_1 + 0x88,&local_41,*(undefined4 *)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(param_1 + 0x80) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0x84) == 0) {
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  else {
    FUN_144756262((undefined8 *)(param_1 + 0x78),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0x78),_Src,(longlong)iVar1 * 0x60);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14986de0e FUN_14986de0e body=112 status=ok
// SIG undefined FUN_14986de0e(void)

void FUN_14986de0e(longlong param_1)

{
  FUN_14986c672();
  if (*(int *)(param_1 + 0x84) < 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN_1401a2688(param_1 + 0x78,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x94)) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_14475e67c(param_1 + 0x88,0);
  return;
}



// FUNCTION 14986de7e FUN_14986de7e body=415 status=ok
// SIG undefined FUN_14986de7e(void)

void FUN_14986de7e(longlong *param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  
  plVar7 = param_1 + 8;
  FUN_14054c6c4(plVar7,param_3);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1401a2688(param_1,0);
  }
  iVar3 = (int)param_1[9];
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      iVar1 = *(int *)(*plVar7 + lVar5 * 4);
      if ((-1 < (longlong)iVar1) && (iVar1 < (int)param_4[1])) {
        lVar2 = *param_4;
        iVar3 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
          FUN_144a2c682(param_1,iVar3);
        }
        puVar6 = (undefined8 *)((longlong)iVar1 * 0x60 + lVar2);
        puVar9 = (undefined8 *)((longlong)iVar3 * 0x60 + *param_1);
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar9 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        }
        iVar3 = (int)param_1[9];
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  iVar3 = (int)param_1[1];
  _Src = (void *)*param_1;
  *(int *)(param_1 + 5) = iVar3;
  if (iVar3 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_144756262(param_1 + 4,iVar3);
    if (iVar3 != 0) {
      memcpy((void *)param_1[4],_Src,(longlong)iVar3 * 0x60);
    }
  }
  FUN_140ee84a4(param_1 + 2,(int)param_1[1],1);
  FUN_14986e01e(param_2,param_4,plVar7,param_1 + 2);
  iVar3 = *(int *)param_1[8];
  if (((longlong)iVar3 < 0) || (*(int *)(param_2 + 0x18) <= iVar3)) {
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
    plVar7 = param_1 + 0xc;
    plVar8 = &DAT_14c846480;
    lVar5 = 0xc;
  }
  else {
    iVar3 = *(int *)(*(longlong *)(param_2 + 0x10) + (longlong)iVar3 * 4);
    *(int *)(param_1 + 10) = iVar3;
    plVar7 = &DAT_14c846480;
    plVar8 = param_1 + 0xc;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *plVar8 = *plVar7;
      plVar7 = plVar7 + 1;
      plVar8 = plVar8 + 1;
    }
    if ((longlong)iVar3 == -1) goto LAB_14986dfd3;
    lVar5 = 0xc;
    plVar8 = (longlong *)((longlong)iVar3 * 0x60 + *param_4);
    plVar7 = param_1 + 0xc;
  }
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *plVar7 = *plVar8;
    plVar8 = plVar8 + 1;
    plVar7 = plVar7 + 1;
  }
LAB_14986dfd3:
  FUN_14986e100(param_1,param_5);
  return;
}



// FUNCTION 14986e01e FUN_14986e01e body=225 status=ok
// SIG undefined FUN_14986e01e(void)

void FUN_14986e01e(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (0 < (int)param_3[1]) {
    lVar4 = 0;
    lVar7 = 0;
    do {
      iVar1 = *(int *)(*param_3 + lVar7 * 4);
      lVar2 = (longlong)iVar1;
      if (((lVar2 < 0) || (*(int *)(param_1 + 0x18) <= iVar1)) ||
         (lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + lVar2 * 4), lVar3 == -1)) {
        puVar5 = (undefined8 *)(lVar2 * 0x60 + *param_2);
      }
      else {
        puVar5 = local_a8;
        FUN_1449437a2(lVar2 * 0x60 + *param_2,puVar5,lVar3 * 0x60 + *param_2);
      }
      puVar6 = (undefined8 *)(*param_4 + lVar4);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      lVar7 = lVar7 + 1;
      lVar4 = lVar4 + 0x60;
    } while (lVar7 < (int)param_3[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14986e100 FUN_14986e100 body=657 status=ok
// SIG undefined FUN_14986e100(void)

ulonglong FUN_14986e100(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  double *pdVar2;
  double *pdVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  undefined4 *local_98;
  undefined8 uStack_90;
  wchar_t *local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = param_1 + 6;
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) < 0) {
    FUN_14482f6fa(plVar1,0);
  }
  if ((int)param_1[1] == 1) {
    iVar5 = (int)param_1[7];
    *(uint *)(param_1 + 7) = iVar5 + 1U;
    if (*(uint *)((longlong)param_1 + 0x3c) < iVar5 + 1U) {
      FUN_14475e4ac(plVar1,iVar5);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar5 * 4) = 0x3f800000;
    uVar10 = CONCAT71((int7)(int3)((uint)iVar5 >> 8),1);
    goto LAB_14986e182;
  }
  local_98 = (undefined4 *)0x0;
  uStack_90 = 1;
  FUN_14475e4ac(&local_98,0);
  *local_98 = 0;
  if ((int)param_1[1] < 2) {
LAB_14986e30f:
    local_80 = L"TinyBoneChain";
    local_78 = 0xd;
    FUN_1446e940c(local_9c,&local_80);
    local_80 = L"IKRetargetProcessor";
    local_78 = 0x13;
    FUN_1446e940c(local_a0,&local_80);
    FUN_140208bae(&local_80,local_a0,local_9c,
                  L"IK Retargeter bone chain length is too small to reliably retarget.");
    FUN_14986922e(param_2,&local_80);
    if (local_80 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_80 + 0x10))();
    }
    uVar10 = 0;
  }
  else {
    fVar14 = 0.0;
    lVar11 = 1;
    lVar12 = 0x90;
    do {
      uVar10 = uStack_90;
      lVar13 = *param_1;
      dVar6 = *(double *)(lVar13 + lVar12) - *(double *)(lVar13 + -0x60 + lVar12);
      pdVar2 = (double *)(lVar13 + -0x10 + lVar12);
      pdVar3 = (double *)(lVar13 + -0x70 + lVar12);
      dVar7 = *pdVar2 - *pdVar3;
      dVar8 = pdVar2[1] - pdVar3[1];
      lVar13 = (longlong)(int)uStack_90;
      uVar9 = (int)uStack_90 + 1;
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar9);
      if (uStack_90._4_4_ < uVar9) {
        FUN_14475e4ac(&local_98,uVar10 & 0xffffffff);
      }
      fVar14 = (float)((double)fVar14 + SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar8 * dVar8));
      local_98[lVar13] = fVar14;
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + 0x60;
    } while (lVar11 < (int)param_1[1]);
    if (fVar14 <= 0.0001) goto LAB_14986e30f;
    uVar10 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if (0 < (int)param_1[1]) {
      lVar11 = 0;
      do {
        fVar4 = (float)local_98[lVar11];
        iVar5 = (int)param_1[7];
        *(uint *)(param_1 + 7) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0x3c) < iVar5 + 1U) {
          FUN_14475e4ac(plVar1,iVar5);
        }
        *(float *)(param_1[6] + (longlong)iVar5 * 4) = fVar4 / fVar14;
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)param_1[1]);
    }
  }
  if (local_98 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
LAB_14986e182:
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14986e392 FUN_14986e392 body=680 status=ok
// SIG undefined FUN_14986e392(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14986e392(longlong param_1,ulonglong *param_2,longlong *param_3,float *param_4)

{
  double *pdVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  longlong lVar9;
  float *pfVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  longlong lVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar28;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  
  uVar8 = *(uint *)(param_1 + 0x38);
  if (((ulonglong)uVar8 == 1) || (fVar3 = *param_4, fVar3 < 0.0001)) {
    puVar18 = (ulonglong *)*param_3;
  }
  else if (fVar3 <= 0.9999) {
    if (1 < (int)uVar8) {
      lVar17 = 0x18;
      pfVar10 = *(float **)(param_1 + 0x30);
      do {
        fVar4 = pfVar10[1];
        if (fVar3 < fVar4) {
          lVar9 = *param_3;
          pdVar1 = (double *)(lVar9 + 0x20 + lVar17 * 4);
          dVar11 = *pdVar1;
          dVar12 = pdVar1[1];
          pdVar1 = (double *)(lVar9 + -0x40 + lVar17 * 4);
          dVar13 = *pdVar1;
          dVar14 = pdVar1[1];
          dVar5 = *(double *)(lVar9 + -0x30 + lVar17 * 4);
          dVar6 = *(double *)(lVar9 + 0x30 + lVar17 * 4);
          dVar20 = (double)((fVar3 - *pfVar10) / (fVar4 - *pfVar10));
          dVar7 = *(double *)(lVar9 + -0x38 + lVar17 * 4);
          pdVar1 = (double *)(lVar9 + lVar17 * 4);
          dVar23 = *pdVar1;
          dVar24 = pdVar1[1];
          pdVar1 = (double *)(lVar9 + 0x10 + lVar17 * 4);
          dVar25 = *pdVar1;
          pdVar2 = (double *)(lVar9 + -0x60 + lVar17 * 4);
          dVar28 = *pdVar2;
          dVar15 = pdVar2[1];
          pdVar2 = (double *)(lVar9 + -0x50 + lVar17 * 4);
          dVar16 = *pdVar2;
          uVar19 = -(ulonglong)
                    (0.0 <= *(double *)(lVar9 + -0x48 + lVar17 * 4) *
                            *(double *)(lVar9 + 0x18 + lVar17 * 4) +
                            dVar16 * dVar25 + dVar28 * dVar23 + dVar24 * dVar15);
          dVar31 = (double)(~uVar19 & (ulonglong)-(1.0 - dVar20) |
                           (ulonglong)(1.0 - dVar20) & uVar19);
          dVar21 = dVar28 * dVar31 + dVar23 * dVar20;
          dVar22 = dVar15 * dVar31 + dVar24 * dVar20;
          dVar23 = dVar16 * dVar31 + dVar20 * dVar25;
          dVar24 = pdVar2[1] * dVar31 + dVar20 * pdVar1[1];
          dVar25 = dVar23 * dVar23 + dVar21 * dVar21;
          dVar28 = dVar24 * dVar24 + dVar22 * dVar22;
          auVar26._0_8_ = dVar25 + dVar28;
          auVar26._8_8_ = dVar25 + dVar28;
          uVar19 = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
          auVar27 = sqrtpd(auVar26,auVar26);
          auVar29 = divpd(_DAT_149934d80,auVar27);
          auVar30._0_8_ = auVar29._0_8_ * dVar23;
          auVar30._8_8_ = auVar29._8_8_ * dVar24;
          auVar27._8_4_ = (int)uVar19;
          auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
          auVar27._12_4_ = (int)(uVar19 >> 0x20);
          auVar27 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar30,auVar27);
          pdVar1 = (double *)(lVar9 + 0x40 + lVar17 * 4);
          dVar28 = *pdVar1;
          pdVar2 = (double *)(lVar9 + -0x20 + lVar17 * 4);
          dVar15 = *pdVar2;
          dVar23 = *(double *)(lVar9 + -0x10 + lVar17 * 4);
          dVar24 = *(double *)(lVar9 + 0x50 + lVar17 * 4);
          dVar25 = (pdVar1[1] - pdVar2[1]) * dVar20 + *(double *)(lVar9 + -0x18 + lVar17 * 4);
          *param_2 = (ulonglong)(dVar21 * auVar29._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
          param_2[1] = (ulonglong)(dVar22 * auVar29._8_8_) & uVar19;
          *(undefined1 (*) [16])(param_2 + 2) = auVar27;
          param_2[4] = (ulonglong)((dVar11 - dVar13) * dVar20 + dVar13);
          param_2[5] = (ulonglong)((dVar12 - dVar14) * dVar20 + dVar7);
          param_2[6] = (ulonglong)((dVar6 - dVar5) * dVar20 + dVar5);
          param_2[7] = 0;
          auVar29._8_4_ = SUB84(dVar25,0);
          auVar29._0_8_ = (dVar28 - dVar15) * dVar20 + dVar15;
          auVar29._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
          *(undefined1 (*) [16])(param_2 + 8) = auVar29;
          param_2[10] = (ulonglong)((dVar24 - dVar23) * dVar20 + dVar23);
          param_2[0xb] = 0;
          return;
        }
        lVar17 = lVar17 + 0x18;
        pfVar10 = pfVar10 + 1;
      } while ((ulonglong)uVar8 * 0x18 != lVar17);
    }
    puVar18 = &DAT_14c846480;
  }
  else {
    puVar18 = (ulonglong *)((longlong)((int)param_3[1] + -1) * 0x60 + *param_3);
  }
  for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
    *param_2 = *puVar18;
    puVar18 = puVar18 + 1;
    param_2 = param_2 + 1;
  }
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
  return;
}



// FUNCTION 14986e63a FUN_14986e63a body=2037 status=ok
// SIG undefined FUN_14986e63a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14986e63a(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  double *pdVar20;
  double *pdVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar39;
  undefined1 auVar38 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auStack_2c8 [40];
  undefined8 local_2a0;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
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
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178 [4];
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_2a0 = param_4;
  if (0 < *(int *)(param_2 + 1)) {
    lVar18 = 0;
    lVar19 = 0;
    do {
      auVar41 = _DAT_149934d80;
      if (lVar18 == 0) {
        FUN_14986d4c4(param_3,local_178,*(undefined4 *)*param_2,local_2a0);
        pdVar20 = local_178;
        pdVar21 = *(double **)(param_1 + 0x20);
        for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
          *pdVar21 = *pdVar20;
          pdVar20 = pdVar20 + 1;
          pdVar21 = pdVar21 + 1;
        }
      }
      else {
        lVar15 = *(longlong *)(param_1 + 0x20);
        lVar16 = *(longlong *)(param_3 + 0x20);
        lVar23 = (longlong)(int)((undefined4 *)*param_2)[lVar19] * 0x60;
        pdVar20 = (double *)(lVar16 + lVar23);
        auVar30 = *(undefined1 (*) [16])(lVar15 + -0x20 + lVar18);
        dVar5 = auVar30._0_8_;
        dVar7 = auVar30._8_8_;
        auVar2 = *(undefined1 (*) [16])(lVar15 + -0x10 + lVar18);
        dVar6 = auVar2._0_8_;
        auVar3 = *(undefined1 (*) [16])(lVar16 + 0x40 + lVar23);
        auVar4 = *(undefined1 (*) [16])(lVar16 + 0x50 + lVar23);
        auVar30 = minpd(auVar3,auVar30);
        auVar37 = minpd(auVar4,auVar2);
        auVar31._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
        auVar31._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
        iVar17 = movmskpd((int)lVar16,auVar31);
        auVar30._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
        auVar30._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
        uVar22 = movmskpd((int)lVar23,auVar30);
        if ((uVar22 & 0x3fffffff) == 0 && iVar17 == 0) {
          dVar40 = *pdVar20;
          dVar43 = pdVar20[1];
          dVar9 = pdVar20[2];
          dVar10 = pdVar20[3];
          pdVar21 = (double *)(lVar15 + -0x60 + lVar18);
          dVar11 = *pdVar21;
          dVar12 = pdVar21[1];
          pdVar21 = (double *)(lVar15 + -0x50 + lVar18);
          dVar13 = *pdVar21;
          dVar14 = pdVar21[1];
          pdVar21 = (double *)(lVar15 + -0x48 + lVar18);
          dVar26 = *pdVar21;
          dVar27 = *pdVar21;
          pdVar21 = (double *)(lVar15 + -0x60 + lVar18);
          dVar28 = *pdVar21;
          dVar36 = *pdVar21;
          pdVar21 = (double *)(lVar15 + -0x58 + lVar18);
          dVar34 = *pdVar21;
          dVar32 = *pdVar21;
          pdVar21 = (double *)(lVar15 + -0x50 + lVar18);
          dVar35 = *pdVar21;
          dVar39 = *pdVar21;
          dVar29 = dVar43 * dVar35 * -1.0 + dVar9 * dVar34 + dVar10 * dVar28 * 1.0 + dVar40 * dVar26
          ;
          dVar33 = dVar40 * dVar39 * 1.0 + dVar10 * dVar32 + dVar9 * dVar36 * -1.0 + dVar43 * dVar27
          ;
          auVar41._0_8_ =
               dVar10 * dVar35 * 1.0 + ((dVar28 * dVar43 * 1.0 + dVar9 * dVar26) - dVar40 * dVar34);
          auVar41._8_8_ =
               dVar9 * dVar39 * -1.0 +
               ((dVar36 * dVar40 * -1.0 + dVar10 * dVar27) - dVar43 * dVar32);
          dVar35 = pdVar20[4] * dVar5;
          dVar39 = pdVar20[5] * dVar7;
          dVar32 = pdVar20[6] * dVar6;
          dVar34 = pdVar20[7] * auVar2._8_8_;
          dVar36 = dVar39 * dVar11 - dVar12 * dVar35;
          dVar43 = dVar32 * dVar12 - dVar13 * dVar39;
          dVar40 = dVar35 * dVar13 - dVar11 * dVar32;
          dVar28 = dVar34 * dVar14 - dVar14 * dVar34;
          dVar43 = dVar43 + dVar43;
          dVar40 = dVar40 + dVar40;
          dVar36 = dVar36 + dVar36;
          dVar28 = dVar28 + dVar28;
          pdVar20 = (double *)(lVar15 + -0x40 + lVar18);
          dVar35 = (dVar36 * dVar12 - dVar13 * dVar40) + dVar26 * dVar43 + dVar35 + *pdVar20;
          dVar39 = (dVar43 * dVar13 - dVar36 * dVar11) + dVar27 * dVar40 + dVar39 + pdVar20[1];
          pdVar20 = (double *)(lVar15 + -0x30 + lVar18);
          dVar26 = (dVar40 * dVar11 - dVar12 * dVar43) + dVar26 * dVar36 + dVar32 + *pdVar20;
          dVar27 = (dVar28 * dVar14 - dVar28 * dVar14) + dVar27 * dVar28 + dVar34 + pdVar20[1];
        }
        else {
          pdVar21 = (double *)(lVar15 + -0x60 + lVar18);
          dVar36 = *pdVar21;
          dVar28 = pdVar21[1];
          dVar26 = *(double *)(lVar15 + -0x50 + lVar18);
          dVar32 = dVar28 + dVar28;
          dVar34 = dVar26 + dVar26;
          dVar27 = dVar36 * (dVar36 + dVar36);
          local_1f8 = ((double)DAT_149934d80 - (dVar26 * dVar34 + dVar28 * dVar32)) * dVar5;
          dStack_1d0 = (DAT_149934d80._8_8_ - (dVar26 * dVar34 + dVar27)) * dVar7;
          local_1a8 = (1.0 - (dVar27 + dVar28 * dVar32)) * dVar6;
          dVar26 = *(double *)(lVar15 + -0x60 + lVar18) * dVar34;
          pdVar21 = (double *)(lVar15 + -0x48 + lVar18);
          dVar27 = *pdVar21;
          dVar35 = dVar34 * dVar27;
          dVar39 = (dVar36 + dVar36) * *pdVar21;
          dVar27 = dVar32 * dVar27;
          dStack_1f0 = (dVar32 * dVar36 + dVar35) * dVar5;
          local_1c8 = (dVar34 * dVar28 + dVar39) * dVar7;
          local_1b8 = (dVar27 + dVar26) * dVar6;
          local_1d8 = (dVar32 * dVar36 - dVar35) * dVar7;
          dStack_1b0 = (dVar34 * dVar28 - dVar39) * dVar6;
          local_1e8 = (dVar26 - dVar27) * dVar5;
          uStack_1e0 = 0;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          puVar1 = (undefined8 *)(lVar15 + -0x40 + lVar18);
          local_198 = *puVar1;
          uStack_190 = puVar1[1];
          local_188 = *(undefined8 *)(lVar15 + -0x30 + lVar18);
          uStack_180 = 0x3ff0000000000000;
          dVar26 = *pdVar20;
          dVar36 = pdVar20[1];
          dVar28 = pdVar20[2];
          local_268 = pdVar20[8];
          local_258 = pdVar20[9];
          dStack_230 = pdVar20[10];
          dVar35 = dVar36 + dVar36;
          dVar32 = dVar28 + dVar28;
          dVar27 = dVar26 * (dVar26 + dVar26);
          local_278 = ((double)DAT_149934d80 - (dVar28 * dVar32 + dVar36 * dVar35)) * local_268;
          dStack_250 = (DAT_149934d80._8_8_ - (dVar28 * dVar32 + dVar27)) * local_258;
          local_228 = (1.0 - (dVar27 + dVar36 * dVar35)) * dStack_230;
          dVar27 = pdVar20[3];
          dVar28 = dVar32 * dVar27;
          dVar34 = (dVar26 + dVar26) * pdVar20[3];
          dVar27 = dVar35 * dVar27;
          dStack_270 = (dVar35 * dVar26 + dVar28) * local_268;
          local_248 = (dVar32 * dVar36 + dVar34) * local_258;
          local_238 = (dVar27 + *pdVar20 * dVar32) * dStack_230;
          local_268 = (*pdVar20 * dVar32 - dVar27) * local_268;
          local_258 = (dVar35 * dVar26 - dVar28) * local_258;
          dStack_230 = (dVar32 * dVar36 - dVar34) * dStack_230;
          uStack_260 = 0;
          uStack_240 = 0;
          uStack_220 = 0;
          local_218 = pdVar20[4];
          dStack_210 = pdVar20[5];
          local_208 = pdVar20[6];
          uStack_200 = 0x3ff0000000000000;
          FUN_1447fea8d(local_178,&local_278,&local_1f8);
          FUN_144a1c686(local_178,0x3e45798ee0000000);
          auVar37._8_8_ = -(ulonglong)(0.0 <= auVar3._8_8_ * dVar7);
          auVar37._0_8_ = -(ulonglong)(0.0 <= auVar3._0_8_ * dVar5);
          auVar30 = blendvpd(_DAT_149936790,auVar41,auVar37);
          uVar24 = -(ulonglong)(0.0 <= auVar4._0_8_ * dVar6);
          dVar27 = (double)(~uVar24 & 0xbff0000000000000 | uVar24 & 0x3ff0000000000000);
          dVar26 = auVar30._0_8_;
          local_178[2] = local_178[2] * dVar26;
          local_178[1] = local_178[1] * dVar26;
          local_178[0] = local_178[0] * dVar26;
          dVar26 = auVar30._8_8_;
          local_148 = local_148 * dVar26;
          local_150 = local_150 * dVar26;
          local_158 = dVar26 * local_158;
          local_128 = local_128 * dVar27;
          local_130 = local_130 * dVar27;
          local_138 = dVar27 * local_138;
          FUN_14481fd10(&local_298,local_178);
          dVar27 = local_288._0_8_;
          dVar26 = local_288._8_8_;
          dVar36 = dVar27 * dVar27 + local_298 * local_298;
          dVar28 = dVar26 * dVar26 + dStack_290 * dStack_290;
          auVar38._0_8_ = dVar36 + dVar28;
          auVar38._8_8_ = dVar36 + dVar28;
          auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
          auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
          auVar30 = sqrtpd(auVar38,auVar38);
          auVar41 = divpd(auVar41,auVar30);
          auVar42._0_8_ = auVar41._0_8_ * dVar27;
          auVar42._8_8_ = auVar41._8_8_ * dVar26;
          dVar29 = (double)((ulonglong)(local_298 * auVar41._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_));
          dVar33 = (double)((ulonglong)(dStack_290 * auVar41._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_));
          auVar41 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar42,auVar25);
          dVar27 = 0.0;
          lVar15 = *(longlong *)(param_1 + 0x20);
          dVar35 = local_118;
          dVar39 = dStack_110;
          dVar26 = local_108;
        }
        dVar36 = auVar4._8_8_ * auVar2._8_8_;
        dVar7 = auVar3._8_8_ * dVar7;
        *(double *)(lVar15 + lVar18) = dVar29;
        ((double *)(lVar15 + lVar18))[1] = dVar33;
        *(undefined1 (*) [16])(lVar15 + 0x10 + lVar18) = auVar41;
        pdVar20 = (double *)(lVar15 + 0x20 + lVar18);
        *pdVar20 = dVar35;
        pdVar20[1] = dVar39;
        auVar2._8_4_ = SUB84(dVar27,0);
        auVar2._0_8_ = dVar26;
        auVar2._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        *(undefined1 (*) [16])(lVar15 + 0x30 + lVar18) = auVar2;
        auVar8._8_4_ = SUB84(dVar7,0);
        auVar8._0_8_ = auVar3._0_8_ * dVar5;
        auVar8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        *(undefined1 (*) [16])(lVar15 + 0x40 + lVar18) = auVar8;
        auVar3._8_4_ = SUB84(dVar36,0);
        auVar3._0_8_ = auVar4._0_8_ * dVar6;
        auVar3._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
        *(undefined1 (*) [16])(lVar15 + 0x50 + lVar18) = auVar3;
      }
      lVar19 = lVar19 + 1;
      lVar18 = lVar18 + 0x60;
    } while (lVar19 < *(int *)(param_2 + 1));
  }
  if ((local_f0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14986ee30 FUN_14986ee30 body=184 status=ok
// SIG undefined FUN_14986ee30(void)

void FUN_14986ee30(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  uVar3 = (ulonglong)*(uint *)(param_3 + 1);
  if (0 < (int)*(uint *)(param_3 + 1)) {
    lVar1 = 0;
    lVar6 = 0;
    do {
      puVar4 = (undefined8 *)((longlong)*(int *)(*param_3 + lVar6 * 4) * 0x60 + *param_4);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + lVar1);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar6 = lVar6 + 1;
      uVar3 = (ulonglong)(int)param_3[1];
      lVar1 = lVar1 + 0x60;
    } while (lVar6 < (longlong)uVar3);
  }
  FUN_140ee84a4(param_1 + 0xc0,uVar3,1);
  FUN_14986e01e(param_2,param_4,param_3,param_1 + 0xc0);
  puVar4 = &DAT_14c846480;
  if ((longlong)*(int *)(param_1 + 0x50) != -1) {
    puVar4 = (undefined8 *)((longlong)*(int *)(param_1 + 0x50) * 0x60 + *param_4);
  }
  puVar5 = (undefined8 *)(param_1 + 0xd0);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return;
}



// FUNCTION 14986eee8 FUN_14986eee8 body=3542 status=ok
// SIG undefined FUN_14986eee8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14986eee8(double *param_1,double *param_2,double *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  double dVar14;
  double *pdVar15;
  uint uVar16;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar30;
  double dVar31;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auStack_2b8 [32];
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
  double *pdVar17;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (0 < *(int *)(param_1 + 5)) {
    lVar20 = 0;
    lVar18 = 0;
    pdVar15 = param_1;
    pdVar17 = param_2;
    do {
      auVar41 = _DAT_149934d80;
      pdVar4 = (double *)param_1[0x18];
      dVar40 = (double)DAT_149934d80;
      dVar39 = DAT_149934d80._8_8_;
      if (lVar20 == 0) {
        auVar26 = *(undefined1 (*) [16])(param_2 + 8);
        dVar5 = auVar26._0_8_;
        dVar7 = auVar26._8_8_;
        auVar1 = *(undefined1 (*) [16])(param_2 + 10);
        dVar6 = auVar1._0_8_;
        auVar2 = *(undefined1 (*) [16])(pdVar4 + 8);
        auVar3 = *(undefined1 (*) [16])(pdVar4 + 10);
        auVar26 = minpd(auVar2,auVar26);
        auVar35 = minpd(auVar3,auVar1);
        auVar32._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
        auVar32._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
        iVar13 = movmskpd((int)pdVar15,auVar32);
        auVar26._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
        auVar26._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
        uVar16 = movmskpd((int)pdVar17,auVar26);
        if ((uVar16 & 0x3fffffff) == 0 && iVar13 == 0) {
          dVar31 = *pdVar4;
          dVar28 = pdVar4[1];
          dVar29 = pdVar4[2];
          dVar30 = pdVar4[3];
          dVar37 = *param_2;
          dVar9 = param_2[1];
          dVar10 = param_2[2];
          dVar11 = param_2[3];
          dVar40 = param_2[3];
          dVar39 = param_2[3];
          dVar25 = param_2[1];
          dVar14 = param_2[1];
          dVar38 = param_2[2];
          dVar8 = param_2[2];
          dVar45 = dVar28 * dVar38 * -1.0 +
                   dVar29 * dVar25 + dVar30 * *param_2 * 1.0 + dVar31 * dVar40;
          dVar47 = dVar31 * dVar8 * 1.0 +
                   dVar30 * dVar14 + dVar29 * *param_2 * -1.0 + dVar28 * dVar39;
          auVar41._0_8_ =
               dVar30 * dVar38 * 1.0 +
               ((*param_2 * dVar28 * 1.0 + dVar29 * dVar40) - dVar31 * dVar25);
          auVar41._8_8_ =
               dVar29 * dVar8 * -1.0 +
               ((*param_2 * dVar31 * -1.0 + dVar30 * dVar39) - dVar28 * dVar14);
          dVar31 = pdVar4[4] * dVar5;
          dVar28 = pdVar4[5] * dVar7;
          dVar8 = pdVar4[6] * dVar6;
          dVar38 = pdVar4[7] * auVar1._8_8_;
          dVar25 = dVar28 * dVar37 - dVar9 * dVar31;
          dVar30 = dVar8 * dVar9 - dVar10 * dVar28;
          dVar29 = dVar31 * dVar10 - dVar37 * dVar8;
          dVar14 = dVar38 * dVar11 - dVar11 * dVar38;
          dVar30 = dVar30 + dVar30;
          dVar29 = dVar29 + dVar29;
          dVar25 = dVar25 + dVar25;
          dVar14 = dVar14 + dVar14;
          dVar31 = (dVar25 * dVar9 - dVar10 * dVar29) + dVar40 * dVar30 + dVar31 + param_2[4];
          dVar28 = (dVar30 * dVar10 - dVar25 * dVar37) + dVar39 * dVar29 + dVar28 + param_2[5];
          dVar40 = (dVar29 * dVar37 - dVar9 * dVar30) + dVar40 * dVar25 + dVar8 + param_2[6];
          dVar39 = (dVar14 * dVar11 - dVar14 * dVar11) + dVar39 * dVar14 + dVar38 + param_2[7];
          pdVar17 = (double *)0x0;
        }
        else {
          dVar14 = *param_2;
          dVar8 = param_2[1];
          dVar38 = param_2[2];
          dVar31 = dVar8 + dVar8;
          dVar28 = dVar38 + dVar38;
          dVar25 = dVar14 * (dVar14 + dVar14);
          local_1f8 = (dVar40 - (dVar38 * dVar28 + dVar8 * dVar31)) * dVar5;
          dStack_1d0 = (dVar39 - (dVar38 * dVar28 + dVar25)) * dVar7;
          local_1a8 = (1.0 - (dVar25 + dVar8 * dVar31)) * dVar6;
          dVar25 = param_2[3];
          dVar38 = dVar28 * dVar25;
          dVar29 = (dVar14 + dVar14) * param_2[3];
          dVar25 = dVar31 * dVar25;
          dStack_1f0 = (dVar31 * dVar14 + dVar38) * dVar5;
          local_1c8 = (dVar28 * dVar8 + dVar29) * dVar7;
          local_1b8 = (dVar25 + *param_2 * dVar28) * dVar6;
          local_1d8 = (dVar31 * dVar14 - dVar38) * dVar7;
          dStack_1b0 = (dVar28 * dVar8 - dVar29) * dVar6;
          local_1e8 = (*param_2 * dVar28 - dVar25) * dVar5;
          uStack_1e0 = 0;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = param_2[4];
          dStack_190 = param_2[5];
          local_188 = param_2[6];
          uStack_180 = 0x3ff0000000000000;
          dVar14 = *pdVar4;
          dVar8 = pdVar4[1];
          dVar38 = pdVar4[2];
          local_268 = pdVar4[8];
          local_258 = pdVar4[9];
          dStack_230 = pdVar4[10];
          dVar28 = dVar8 + dVar8;
          dVar31 = dVar38 + dVar38;
          dVar25 = dVar14 * (dVar14 + dVar14);
          local_278 = (dVar40 - (dVar38 * dVar31 + dVar8 * dVar28)) * local_268;
          dStack_250 = (dVar39 - (dVar38 * dVar31 + dVar25)) * local_258;
          local_228 = (1.0 - (dVar25 + dVar8 * dVar28)) * dStack_230;
          dVar40 = pdVar4[3];
          dVar39 = dVar31 * dVar40;
          dVar25 = (dVar14 + dVar14) * pdVar4[3];
          dVar40 = dVar28 * dVar40;
          dStack_270 = (dVar28 * dVar14 + dVar39) * local_268;
          local_248 = (dVar31 * dVar8 + dVar25) * local_258;
          local_238 = (dVar40 + *pdVar4 * dVar31) * dStack_230;
          local_268 = (*pdVar4 * dVar31 - dVar40) * local_268;
          local_258 = (dVar28 * dVar14 - dVar39) * local_258;
          dStack_230 = (dVar31 * dVar8 - dVar25) * dStack_230;
          uStack_260 = 0;
          uStack_240 = 0;
          uStack_220 = 0;
          local_218 = pdVar4[4];
          dStack_210 = pdVar4[5];
          local_208 = pdVar4[6];
          uStack_200 = 0x3ff0000000000000;
          param_3 = &local_1f8;
          FUN_1447fea8d(&local_178,&local_278);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar35._8_8_ = -(ulonglong)(0.0 <= auVar2._8_8_ * dVar7);
          auVar35._0_8_ = -(ulonglong)(0.0 <= auVar2._0_8_ * dVar5);
          auVar26 = blendvpd(_DAT_149936790,auVar41,auVar35);
          uVar21 = -(ulonglong)(0.0 <= auVar3._0_8_ * dVar6);
          dVar40 = (double)(~uVar21 & 0xbff0000000000000 | uVar21 & 0x3ff0000000000000);
          dVar39 = auVar26._0_8_;
          local_168 = local_168 * dVar39;
          local_170 = local_170 * dVar39;
          local_178 = local_178 * dVar39;
          dVar39 = auVar26._8_8_;
          local_148 = local_148 * dVar39;
          local_150 = local_150 * dVar39;
          local_158 = dVar39 * local_158;
          local_128 = local_128 * dVar40;
          local_130 = local_130 * dVar40;
          local_138 = dVar40 * local_138;
          pdVar17 = &local_178;
          FUN_14481fd10(&local_298);
          dVar40 = local_288 * local_288 + local_298 * local_298;
          dVar39 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
          auVar36._0_8_ = dVar40 + dVar39;
          auVar36._8_8_ = dVar40 + dVar39;
          auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
          auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
          auVar26 = sqrtpd(auVar36,auVar36);
          auVar41 = divpd(auVar41,auVar26);
          auVar43._0_8_ = auVar41._0_8_ * local_288;
          auVar43._8_8_ = auVar41._8_8_ * dStack_280;
          dVar45 = (double)((ulonglong)(local_298 * auVar41._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
          dVar47 = (double)((ulonglong)(dStack_290 * auVar41._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
          auVar41 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar43,auVar24);
          dVar39 = 0.0;
          dVar40 = local_108;
          dVar31 = local_118;
          dVar28 = dStack_110;
        }
        dVar25 = auVar3._8_8_ * auVar1._8_8_;
        dVar6 = auVar3._0_8_ * dVar6;
        dVar7 = auVar2._8_8_ * dVar7;
        dVar5 = auVar2._0_8_ * dVar5;
        pdVar15 = (double *)param_1[4];
        *pdVar15 = dVar45;
        pdVar15[1] = dVar47;
      }
      else {
        dVar14 = param_1[4];
        auVar26 = *(undefined1 (*) [16])(((longlong)dVar14 - 0x20U) + lVar20);
        dVar5 = auVar26._0_8_;
        dVar7 = auVar26._8_8_;
        auVar1 = *(undefined1 (*) [16])(((longlong)dVar14 - 0x10U) + lVar20);
        dVar6 = auVar1._0_8_;
        auVar2 = *(undefined1 (*) [16])((longlong)pdVar4 + lVar20 + 0x40);
        auVar3 = *(undefined1 (*) [16])((longlong)pdVar4 + lVar20 + 0x50);
        auVar26 = minpd(auVar2,auVar26);
        auVar32 = minpd(auVar3,auVar1);
        auVar27._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
        auVar27._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
        uVar16 = movmskpd((int)pdVar17,auVar27);
        pdVar17 = (double *)(ulonglong)uVar16;
        auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
        auVar33._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
        uVar19 = movmskpd((int)param_3,auVar33);
        if ((uVar19 & 0x3fffffff) == 0 && uVar16 == 0) {
          dVar30 = *(double *)((longlong)pdVar4 + lVar20);
          dVar37 = ((double *)((longlong)pdVar4 + lVar20))[1];
          pdVar15 = (double *)((longlong)pdVar4 + lVar20 + 0x10);
          dVar9 = *pdVar15;
          dVar10 = pdVar15[1];
          pdVar15 = (double *)(((longlong)dVar14 - 0x60U) + lVar20);
          dVar11 = *pdVar15;
          dVar45 = pdVar15[1];
          pdVar15 = (double *)(((longlong)dVar14 - 0x50U) + lVar20);
          dVar47 = *pdVar15;
          dVar12 = pdVar15[1];
          pdVar15 = (double *)(((longlong)dVar14 - 0x48U) + lVar20);
          dVar40 = *pdVar15;
          dVar39 = *pdVar15;
          pdVar15 = (double *)(((longlong)dVar14 - 0x60U) + lVar20);
          dVar8 = *pdVar15;
          dVar25 = *pdVar15;
          pdVar15 = (double *)(((longlong)dVar14 - 0x58U) + lVar20);
          dVar31 = *pdVar15;
          dVar38 = *pdVar15;
          pdVar15 = (double *)(((longlong)dVar14 - 0x50U) + lVar20);
          dVar29 = *pdVar15;
          dVar28 = *pdVar15;
          dVar44 = dVar37 * dVar29 * -1.0 + dVar9 * dVar31 + dVar10 * dVar8 * 1.0 + dVar30 * dVar40;
          dVar46 = dVar30 * dVar28 * 1.0 + dVar10 * dVar38 + dVar9 * dVar25 * -1.0 + dVar37 * dVar39
          ;
          auVar41._0_8_ =
               dVar10 * dVar29 * 1.0 + ((dVar8 * dVar37 * 1.0 + dVar9 * dVar40) - dVar30 * dVar31);
          auVar41._8_8_ =
               dVar9 * dVar28 * -1.0 +
               ((dVar25 * dVar30 * -1.0 + dVar10 * dVar39) - dVar37 * dVar38);
          pdVar15 = (double *)((longlong)pdVar4 + lVar20 + 0x20);
          dVar31 = *pdVar15 * dVar5;
          dVar28 = pdVar15[1] * dVar7;
          pdVar4 = (double *)((longlong)pdVar4 + lVar20 + 0x30);
          dVar38 = *pdVar4 * dVar6;
          dVar29 = pdVar4[1] * auVar1._8_8_;
          dVar25 = dVar28 * dVar11 - dVar45 * dVar31;
          dVar37 = dVar38 * dVar45 - dVar47 * dVar28;
          dVar30 = dVar31 * dVar47 - dVar11 * dVar38;
          dVar8 = dVar29 * dVar12 - dVar12 * dVar29;
          dVar37 = dVar37 + dVar37;
          dVar30 = dVar30 + dVar30;
          dVar25 = dVar25 + dVar25;
          dVar8 = dVar8 + dVar8;
          pdVar15 = (double *)(((longlong)dVar14 - 0x40U) + lVar20);
          dVar31 = (dVar25 * dVar45 - dVar47 * dVar30) + dVar40 * dVar37 + dVar31 + *pdVar15;
          dVar28 = (dVar37 * dVar47 - dVar25 * dVar11) + dVar39 * dVar30 + dVar28 + pdVar15[1];
          pdVar15 = (double *)(((longlong)dVar14 - 0x30U) + lVar20);
          dVar40 = (dVar30 * dVar11 - dVar45 * dVar37) + dVar40 * dVar25 + dVar38 + *pdVar15;
          dVar39 = (dVar8 * dVar12 - dVar8 * dVar12) + dVar39 * dVar8 + dVar29 + pdVar15[1];
          param_3 = (double *)0x0;
        }
        else {
          pdVar15 = (double *)(((longlong)dVar14 - 0x60U) + lVar20);
          dVar38 = *pdVar15;
          dVar31 = pdVar15[1];
          dVar8 = *(double *)(((longlong)dVar14 - 0x50U) + lVar20);
          dVar28 = dVar31 + dVar31;
          dVar29 = dVar8 + dVar8;
          dVar25 = dVar38 * (dVar38 + dVar38);
          local_1f8 = (dVar40 - (dVar8 * dVar29 + dVar31 * dVar28)) * dVar5;
          dStack_1d0 = (dVar39 - (dVar8 * dVar29 + dVar25)) * dVar7;
          local_1a8 = (1.0 - (dVar25 + dVar31 * dVar28)) * dVar6;
          dVar8 = *(double *)(((longlong)dVar14 - 0x60U) + lVar20) * dVar29;
          pdVar15 = (double *)(((longlong)dVar14 - 0x48U) + lVar20);
          dVar25 = *pdVar15;
          dVar30 = dVar29 * dVar25;
          dVar37 = (dVar38 + dVar38) * *pdVar15;
          dVar25 = dVar28 * dVar25;
          dStack_1f0 = (dVar28 * dVar38 + dVar30) * dVar5;
          local_1c8 = (dVar29 * dVar31 + dVar37) * dVar7;
          local_1b8 = (dVar25 + dVar8) * dVar6;
          local_1d8 = (dVar28 * dVar38 - dVar30) * dVar7;
          dStack_1b0 = (dVar29 * dVar31 - dVar37) * dVar6;
          local_1e8 = (dVar8 - dVar25) * dVar5;
          uStack_1e0 = 0;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          pdVar15 = (double *)(((longlong)dVar14 - 0x40U) + lVar20);
          local_198 = *pdVar15;
          dStack_190 = pdVar15[1];
          local_188 = *(double *)(((longlong)dVar14 - 0x30U) + lVar20);
          uStack_180 = 0x3ff0000000000000;
          dVar14 = *(double *)((longlong)pdVar4 + lVar20);
          dVar8 = ((double *)((longlong)pdVar4 + lVar20))[1];
          dVar38 = *(double *)((longlong)pdVar4 + lVar20 + 0x10);
          pdVar15 = (double *)((longlong)pdVar4 + lVar20 + 0x40);
          local_268 = *pdVar15;
          local_258 = pdVar15[1];
          dStack_230 = *(double *)((longlong)pdVar4 + lVar20 + 0x50);
          dVar28 = dVar8 + dVar8;
          dVar31 = dVar38 + dVar38;
          dVar25 = dVar14 * (dVar14 + dVar14);
          local_278 = (dVar40 - (dVar38 * dVar31 + dVar8 * dVar28)) * local_268;
          dStack_250 = (dVar39 - (dVar38 * dVar31 + dVar25)) * local_258;
          local_228 = (1.0 - (dVar25 + dVar8 * dVar28)) * dStack_230;
          dVar39 = *(double *)((longlong)pdVar4 + lVar20) * dVar31;
          pdVar15 = (double *)((longlong)pdVar4 + lVar20 + 0x18);
          dVar40 = *pdVar15;
          dVar25 = dVar31 * dVar40;
          dVar38 = (dVar14 + dVar14) * *pdVar15;
          dVar40 = dVar28 * dVar40;
          dStack_270 = (dVar28 * dVar14 + dVar25) * local_268;
          local_248 = (dVar31 * dVar8 + dVar38) * local_258;
          local_238 = (dVar40 + dVar39) * dStack_230;
          local_268 = (dVar39 - dVar40) * local_268;
          local_258 = (dVar28 * dVar14 - dVar25) * local_258;
          dStack_230 = (dVar31 * dVar8 - dVar38) * dStack_230;
          uStack_260 = 0;
          uStack_240 = 0;
          uStack_220 = 0;
          pdVar15 = (double *)((longlong)pdVar4 + lVar20 + 0x20);
          local_218 = *pdVar15;
          dStack_210 = pdVar15[1];
          local_208 = *(double *)((longlong)pdVar4 + lVar20 + 0x30);
          uStack_200 = 0x3ff0000000000000;
          param_3 = &local_1f8;
          FUN_1447fea8d(&local_178,&local_278);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar22._8_8_ = -(ulonglong)(0.0 <= auVar2._8_8_ * dVar7);
          auVar22._0_8_ = -(ulonglong)(0.0 <= auVar2._0_8_ * dVar5);
          auVar26 = blendvpd(_DAT_149936790,auVar41,auVar22);
          uVar21 = -(ulonglong)(0.0 <= auVar3._0_8_ * dVar6);
          dVar40 = (double)(~uVar21 & 0xbff0000000000000 | uVar21 & 0x3ff0000000000000);
          dVar39 = auVar26._0_8_;
          local_168 = local_168 * dVar39;
          local_170 = local_170 * dVar39;
          local_178 = local_178 * dVar39;
          dVar39 = auVar26._8_8_;
          local_148 = local_148 * dVar39;
          local_150 = local_150 * dVar39;
          local_158 = dVar39 * local_158;
          local_128 = local_128 * dVar40;
          local_130 = local_130 * dVar40;
          local_138 = dVar40 * local_138;
          pdVar17 = &local_178;
          FUN_14481fd10(&local_298);
          dVar40 = local_288 * local_288 + local_298 * local_298;
          dVar39 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
          auVar34._0_8_ = dVar40 + dVar39;
          auVar34._8_8_ = dVar40 + dVar39;
          auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_);
          auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_);
          auVar26 = sqrtpd(auVar34,auVar34);
          auVar41 = divpd(auVar41,auVar26);
          auVar42._0_8_ = auVar41._0_8_ * local_288;
          auVar42._8_8_ = auVar41._8_8_ * dStack_280;
          dVar44 = (double)((ulonglong)(local_298 * auVar41._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_));
          dVar46 = (double)((ulonglong)(dStack_290 * auVar41._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_));
          auVar41 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar42,auVar23);
          dVar39 = 0.0;
          dVar14 = param_1[4];
          dVar40 = local_108;
          dVar31 = local_118;
          dVar28 = dStack_110;
        }
        dVar25 = auVar3._8_8_ * auVar1._8_8_;
        dVar6 = auVar3._0_8_ * dVar6;
        dVar7 = auVar2._8_8_ * dVar7;
        dVar5 = auVar2._0_8_ * dVar5;
        *(double *)((longlong)dVar14 + lVar20) = dVar44;
        ((double *)((longlong)dVar14 + lVar20))[1] = dVar46;
        pdVar15 = (double *)((longlong)dVar14 + lVar20);
      }
      *(undefined1 (*) [16])(pdVar15 + 2) = auVar41;
      pdVar15[4] = dVar31;
      pdVar15[5] = dVar28;
      pdVar15[6] = dVar40;
      pdVar15[7] = dVar39;
      auVar2._8_4_ = SUB84(dVar7,0);
      auVar2._0_8_ = dVar5;
      auVar2._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(pdVar15 + 8) = auVar2;
      auVar1._8_4_ = SUB84(dVar25,0);
      auVar1._0_8_ = dVar6;
      auVar1._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      *(undefined1 (*) [16])(pdVar15 + 10) = auVar1;
      lVar18 = lVar18 + 1;
      lVar20 = lVar20 + 0x60;
    } while (lVar18 < *(int *)(param_1 + 5));
  }
  if ((local_f0 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14986fcc0 FUN_14986fcc0 body=8104 status=ok
// SIG undefined FUN_14986fcc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14986fcc0(longlong *param_1,longlong param_2,char *param_3,undefined8 param_4,
                  longlong *param_5,longlong param_6,longlong *param_7)

{
  undefined4 *puVar1;
  double *pdVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined8 uVar13;
  int iVar14;
  longlong lVar15;
  double *pdVar16;
  uint uVar17;
  int iVar18;
  double *pdVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  undefined8 *puVar24;
  longlong lVar25;
  undefined8 *puVar26;
  longlong *plVar27;
  longlong lVar28;
  ulonglong uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar44;
  double dVar45;
  undefined1 auVar42 [16];
  double dVar46;
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar58;
  double dVar62;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar70;
  double dVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined1 auStack_428 [32];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [24];
  char *local_3d0;
  undefined1 local_3c8 [24];
  longlong *local_3b0;
  double *local_3a8;
  longlong local_3a0;
  longlong local_398;
  longlong local_390;
  double local_388;
  double dStack_380;
  undefined1 local_378 [16];
  longlong local_368 [2];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
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
  undefined1 local_238 [16];
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
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_408._0_8_ = param_4;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  lVar28 = param_1[0x19];
  local_390 = param_2;
  if ((longlong)(int)lVar28 != 0) {
    lVar23 = param_1[0x18];
    lVar22 = 0;
    do {
      FUN_14986cd82(param_6,*(undefined4 *)(lVar23 + lVar22),param_6 + 0x20,param_7);
      lVar22 = lVar22 + 4;
    } while ((longlong)(int)lVar28 * 4 != lVar22);
  }
  FUN_1449437a2(param_5 + 0xc,&local_2f8,param_1 + 0xc);
  auVar59 = _DAT_149934d80;
  pdVar19 = (double *)((longlong)(int)param_1[10] * 0x60 + *param_7);
  if ((longlong)(int)param_1[10] == -1) {
    pdVar19 = (double *)&DAT_14c846480;
  }
  dVar71 = *pdVar19;
  dVar57 = pdVar19[1];
  dVar55 = pdVar19[2];
  dVar44 = pdVar19[3];
  local_3f8 = *(undefined1 (*) [16])(pdVar19 + 4);
  auVar63 = *(undefined1 (*) [16])(pdVar19 + 8);
  dVar51 = auVar63._0_8_;
  dVar45 = auVar63._8_8_;
  auVar36 = *(undefined1 (*) [16])(pdVar19 + 10);
  dVar46 = auVar36._0_8_;
  local_328 = 0.0;
  dStack_320 = 0.0;
  local_338 = 0.0;
  dStack_330 = 0.0;
  dVar67 = local_2b8._0_8_;
  dVar34 = local_2b8._8_8_;
  dVar39 = local_2a8._0_8_;
  auVar63 = minpd(local_2b8,auVar63);
  auVar69 = minpd(local_2a8,auVar36);
  auVar64._8_8_ = -(ulonglong)(auVar63._8_8_ < 0.0);
  auVar64._0_8_ = -(ulonglong)(auVar63._0_8_ < 0.0);
  iVar14 = movmskpd(0x4c846480,auVar64);
  auVar63._8_8_ = -(ulonglong)(auVar69._8_8_ < 0.0);
  auVar63._0_8_ = -(ulonglong)(auVar69._0_8_ < 0.0);
  uVar17 = movmskpd((int)pdVar19,auVar63);
  if ((uVar17 & 0x3fffffff) == 0 && iVar14 == 0) {
    dVar58 = local_2f8 * dVar55 * 1.0 +
             dStack_2e0 * dVar57 + dVar71 * local_2e8 * -1.0 + dVar44 * dStack_2f0;
    local_358._8_4_ = SUB84(dVar58,0);
    local_358._0_8_ =
         dStack_2f0 * dVar55 * -1.0 +
         local_2e8 * dVar57 + dVar71 * dStack_2e0 * 1.0 + dVar44 * local_2f8;
    local_358._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
    local_348._8_8_ =
         local_2e8 * dVar55 * -1.0 +
         ((dVar71 * local_2f8 * -1.0 + dVar44 * dStack_2e0) - dVar57 * dStack_2f0);
    local_348._0_8_ =
         dStack_2e0 * dVar55 * 1.0 +
         ((dVar71 * dStack_2f0 * 1.0 + dVar44 * local_2e8) - dVar57 * local_2f8);
    local_2d8 = local_2d8 * dVar51;
    dStack_2d0 = dStack_2d0 * dVar45;
    local_2c8 = local_2c8 * dVar46;
    dStack_2c0 = dStack_2c0 * auVar36._8_8_;
    dVar58 = dStack_2d0 * dVar71 - dVar57 * local_2d8;
    dVar62 = local_2c8 * dVar57 - dVar55 * dStack_2d0;
    dVar49 = local_2d8 * dVar55 - dVar71 * local_2c8;
    dVar54 = dStack_2c0 * dVar44 - dVar44 * dStack_2c0;
    dVar62 = dVar62 + dVar62;
    dVar49 = dVar49 + dVar49;
    dVar58 = dVar58 + dVar58;
    dVar54 = dVar54 + dVar54;
    local_338 = (double)local_3f8._0_8_ +
                (dVar58 * dVar57 - dVar55 * dVar49) + dVar44 * dVar62 + local_2d8;
    dStack_330 = (double)local_3f8._8_8_ +
                 (dVar62 * dVar55 - dVar58 * dVar71) + dVar44 * dVar49 + dStack_2d0;
    local_328 = pdVar19[6] + (dVar49 * dVar71 - dVar57 * dVar62) + dVar44 * dVar58 + local_2c8;
    dStack_320 = pdVar19[7] + (dVar54 * dVar44 - dVar54 * dVar44) + dVar44 * dVar54 + dStack_2c0;
  }
  else {
    dVar54 = dVar57 + dVar57;
    dVar49 = dVar55 + dVar55;
    dVar58 = dVar71 * (dVar71 + dVar71);
    local_1f8 = ((double)DAT_149934d80 - (dVar55 * dVar49 + dVar57 * dVar54)) * dVar51;
    dStack_1d0 = (DAT_149934d80._8_8_ - (dVar55 * dVar49 + dVar58)) * dVar45;
    dVar62 = (dVar71 + dVar71) * dVar44;
    local_1d8 = (dVar54 * dVar71 - dVar49 * dVar44) * dVar45;
    dVar55 = (dVar49 * dVar57 - dVar62) * dVar46;
    local_1a8 = (1.0 - (dVar58 + dVar57 * dVar54)) * dVar46;
    dStack_1f0 = (dVar54 * dVar71 + dVar49 * dVar44) * dVar51;
    local_1c8 = (dVar49 * dVar57 + dVar62) * dVar45;
    local_1e8 = (dVar71 * dVar49 - dVar54 * dVar44) * dVar51;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar55,0);
    local_1b8._0_8_ = (dVar54 * dVar44 + dVar71 * dVar49) * dVar46;
    local_1b8._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
    uStack_1a0 = 0;
    local_198 = (double)local_3f8._0_8_;
    dStack_190 = (double)local_3f8._8_8_;
    uStack_180 = 0x3ff0000000000000;
    dVar71 = dStack_2f0 + dStack_2f0;
    dVar57 = local_2e8 + local_2e8;
    dVar44 = local_2f8 * (local_2f8 + local_2f8);
    local_228 = (1.0 - (dVar44 + dStack_2f0 * dVar71)) * dVar39;
    dVar55 = (local_2f8 + local_2f8) * dStack_2e0;
    local_258 = (dVar71 * local_2f8 - dVar57 * dStack_2e0) * dVar34;
    local_278 = ((double)DAT_149934d80 - (local_2e8 * dVar57 + dStack_2f0 * dVar71)) * dVar67;
    dStack_250 = (DAT_149934d80._8_8_ - (local_2e8 * dVar57 + dVar44)) * dVar34;
    dStack_270 = (dVar71 * local_2f8 + dVar57 * dStack_2e0) * dVar67;
    local_248 = (dVar57 * dStack_2f0 + dVar55) * dVar34;
    local_268 = (local_2f8 * dVar57 - dVar71 * dStack_2e0) * dVar67;
    uStack_260 = 0;
    uStack_240 = 0;
    local_238._8_8_ = (dVar57 * dStack_2f0 - dVar55) * dVar39;
    local_238._0_8_ = (dVar71 * dStack_2e0 + local_2f8 * dVar57) * dVar39;
    uStack_220 = 0;
    local_218 = local_2d8;
    dStack_210 = dStack_2d0;
    local_208 = local_2c8;
    uStack_200 = 0x3ff0000000000000;
    local_188 = pdVar19[6];
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar69._8_8_ = -(ulonglong)(0.0 <= dVar45 * dVar34);
    auVar69._0_8_ = -(ulonglong)(0.0 <= dVar51 * dVar67);
    auVar63 = blendvpd(_DAT_149936790,auVar59,auVar69);
    uVar29 = -(ulonglong)(0.0 <= dVar46 * dVar39);
    dVar71 = (double)(~uVar29 & 0xbff0000000000000 | uVar29 & 0x3ff0000000000000);
    dVar57 = auVar63._0_8_;
    local_168 = (double)CONCAT44(local_168._4_4_,(undefined4)local_168) * dVar57;
    dStack_170 = dStack_170 * dVar57;
    local_178 = local_178 * dVar57;
    dVar57 = auVar63._8_8_;
    local_148 = local_148 * dVar57;
    uStack_150 = uStack_150 * dVar57;
    local_158 = dVar57 * local_158;
    local_128 = local_128 * dVar71;
    dStack_130 = dStack_130 * dVar71;
    local_138 = dVar71 * local_138;
    FUN_14481fd10(&local_298,&local_178);
    dVar71 = local_288 * local_288 + local_298 * local_298;
    dVar57 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar65._0_8_ = dVar71 + dVar57;
    auVar65._8_8_ = dVar71 + dVar57;
    auVar52._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar65._8_8_);
    auVar52._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar65._0_8_);
    auVar63 = sqrtpd(auVar65,auVar65);
    auVar59 = divpd(auVar59,auVar63);
    auVar68._0_8_ = auVar59._0_8_ * local_288;
    auVar68._8_8_ = auVar59._8_8_ * dStack_280;
    local_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar68,auVar52);
    local_358._8_8_ =
         (ulonglong)(dStack_290 * auVar59._8_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar65._8_8_);
    local_358._0_8_ =
         (ulonglong)(local_298 * auVar59._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar65._0_8_);
    local_338 = local_118;
    dStack_330 = dStack_110;
    local_328 = local_108;
    dStack_320 = 0.0;
  }
  dStack_310 = dVar34 * dVar45;
  local_318 = dVar67 * dVar51;
  dVar51 = local_2a8._8_8_ * auVar36._8_8_;
  dVar39 = dVar39 * dVar46;
  uVar13 = local_408._0_8_;
  local_308._8_4_ = SUB84(dVar51,0);
  local_308._0_8_ = dVar39;
  local_308._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
  FUN_14986eee8(param_5);
  if (*param_3 == '\0') {
    FUN_14986e63a(param_1,uVar13,param_6,param_7);
    if (0 < (int)*(longlong *)(uVar13 + 8)) {
      lVar28 = 0;
      lVar23 = 0;
      do {
        puVar24 = (undefined8 *)(param_1[4] + lVar28);
        puVar26 = (undefined8 *)
                  ((longlong)*(int *)(*(longlong *)uVar13 + lVar23 * 4) * 0x60 + *param_7);
        for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
          *puVar26 = *puVar24;
          puVar24 = puVar24 + 1;
          puVar26 = puVar26 + 1;
        }
        lVar23 = lVar23 + 1;
        lVar28 = lVar28 + 0x60;
      } while (lVar23 < (int)*(longlong *)(uVar13 + 8));
    }
  }
  else {
    iVar14 = (int)*(longlong *)(uVar13 + 8);
    if (0 < iVar14) {
      local_3b0 = param_5 + 4;
      iVar5 = (int)param_5[5];
      local_398 = (longlong)iVar5;
      iVar18 = iVar14 - iVar5;
      lVar28 = 0;
      iVar21 = iVar5 - iVar14;
      if (iVar5 - iVar14 < 1) {
        iVar21 = 0;
      }
      iVar14 = 0;
      if (0 < iVar18) {
        iVar14 = iVar18;
      }
      local_3a0 = (longlong)iVar18;
      pdVar19 = (double *)(ulonglong)(uint)(iVar21 - iVar14);
      lVar23 = 0;
      local_3d0 = param_3;
      local_3a8 = pdVar19;
      do {
        auVar59 = _DAT_149934d80;
        lVar25 = (longlong)*(int *)(*(longlong *)uVar13 + lVar23 * 4);
        lVar22 = *param_1;
        switch(param_3[1]) {
        case '\0':
          local_1f8 = (double)CONCAT44(local_1f8._4_4_,*(undefined4 *)(param_1[6] + lVar23 * 4));
          pdVar19 = &local_178;
          FUN_14986e392(param_5,pdVar19,local_3b0,&local_1f8);
          dVar49 = dStack_120;
          dVar46 = local_128;
          dVar67 = dStack_140;
          dVar45 = local_148;
          dVar44 = dStack_170;
          dVar55 = local_178;
          param_3 = local_3d0;
          auVar59._8_4_ = uStack_160;
          auVar59._0_8_ = local_168;
          auVar59._12_4_ = uStack_15c;
          uVar72 = (undefined4)local_158;
          uVar73 = local_158._4_4_;
          uVar74 = (undefined4)uStack_150;
          uVar75 = uStack_150._4_4_;
          local_408._8_8_ = dStack_130;
          local_408._0_8_ = local_138;
          FUN_14986e392(param_5,pdVar19,param_5,&local_1f8);
          local_3f8._8_8_ = dStack_130;
          local_3f8._0_8_ = local_138;
          uVar76 = uStack_160;
          uVar77 = uStack_15c;
          dVar58 = local_178;
          dVar54 = dStack_170;
          local_3e8._0_8_ = local_128;
          local_3e8._8_8_ = dStack_120;
          dVar57 = local_168;
          goto LAB_149870bc4;
        case '\x01':
          if (lVar23 < local_398) {
            lVar20 = *param_5;
            lVar15 = param_5[4];
            dVar55 = *(double *)(lVar15 + lVar28);
            dVar44 = ((double *)(lVar15 + lVar28))[1];
            auVar59 = *(undefined1 (*) [16])(lVar15 + 0x10 + lVar28);
            puVar1 = (undefined4 *)(lVar15 + 0x20 + lVar28);
            uVar72 = *puVar1;
            uVar73 = puVar1[1];
            uVar74 = puVar1[2];
            uVar75 = puVar1[3];
            pdVar16 = (double *)(lVar15 + 0x30 + lVar28);
            dVar45 = *pdVar16;
            dVar67 = pdVar16[1];
            local_408 = *(undefined1 (*) [16])(lVar15 + 0x40 + lVar28);
            pdVar16 = (double *)(lVar15 + 0x50 + lVar28);
            dVar46 = *pdVar16;
            dVar49 = pdVar16[1];
            pdVar16 = (double *)(lVar20 + 0x10 + lVar28);
            local_3f8 = *(undefined1 (*) [16])(lVar20 + 0x40 + lVar28);
            pdVar2 = (double *)(lVar20 + 0x50 + lVar28);
            uVar76 = *(undefined4 *)(pdVar16 + 1);
            uVar77 = *(undefined4 *)((longlong)pdVar16 + 0xc);
            dVar58 = *(double *)(lVar20 + lVar28);
            dVar54 = ((double *)(lVar20 + lVar28))[1];
            local_3e8._0_8_ = *pdVar2;
            local_3e8._8_8_ = pdVar2[1];
            dVar57 = *pdVar16;
          }
          else {
            lVar20 = param_5[4];
            lVar15 = (longlong)((int)param_5[5] + -1) * 0x60;
            dVar55 = *(double *)(lVar20 + lVar15);
            dVar44 = ((double *)(lVar20 + lVar15))[1];
            auVar59 = *(undefined1 (*) [16])(lVar20 + 0x10 + lVar15);
            puVar1 = (undefined4 *)(lVar20 + 0x20 + lVar15);
            uVar72 = *puVar1;
            uVar73 = puVar1[1];
            uVar74 = puVar1[2];
            uVar75 = puVar1[3];
            pdVar16 = (double *)(lVar20 + 0x30 + lVar15);
            dVar45 = *pdVar16;
            dVar67 = pdVar16[1];
            local_408 = *(undefined1 (*) [16])(lVar20 + 0x40 + lVar15);
            pdVar16 = (double *)(lVar20 + 0x50 + lVar15);
            dVar46 = *pdVar16;
            dVar49 = pdVar16[1];
            lVar20 = *param_5;
            lVar15 = (longlong)((int)param_5[1] + -1);
LAB_149870ba7:
            lVar15 = lVar15 * 0x60;
            pdVar16 = (double *)(lVar20 + 0x10 + lVar15);
            local_3f8 = *(undefined1 (*) [16])(lVar20 + 0x40 + lVar15);
            pdVar2 = (double *)(lVar20 + 0x50 + lVar15);
            uVar76 = *(undefined4 *)(pdVar16 + 1);
            uVar77 = *(undefined4 *)((longlong)pdVar16 + 0xc);
            dVar58 = *(double *)(lVar20 + lVar15);
            dVar54 = ((double *)(lVar20 + lVar15))[1];
            local_3e8._0_8_ = *pdVar2;
            local_3e8._8_8_ = pdVar2[1];
            dVar57 = *pdVar16;
          }
LAB_149870bc4:
          dVar71 = (double)CONCAT44(uVar75,uVar74);
          dVar34 = (double)CONCAT44(uVar73,uVar72);
          break;
        case '\x02':
          if (local_3a0 <= lVar23) {
            lVar20 = *param_5;
            pdVar19 = (double *)param_5[4];
            lVar15 = (longlong)((int)local_3a8 + (int)lVar23);
            dVar55 = pdVar19[lVar15 * 0xc];
            dVar44 = (pdVar19 + lVar15 * 0xc)[1];
            auVar59 = *(undefined1 (*) [16])(pdVar19 + lVar15 * 0xc + 2);
            pdVar16 = pdVar19 + lVar15 * 0xc + 4;
            uVar72 = *(undefined4 *)pdVar16;
            uVar73 = *(undefined4 *)((longlong)pdVar16 + 4);
            uVar74 = *(undefined4 *)(pdVar16 + 1);
            uVar75 = *(undefined4 *)((longlong)pdVar16 + 0xc);
            dVar45 = pdVar19[lVar15 * 0xc + 6];
            dVar67 = (pdVar19 + lVar15 * 0xc + 6)[1];
            local_408 = *(undefined1 (*) [16])(pdVar19 + lVar15 * 0xc + 8);
            dVar46 = pdVar19[lVar15 * 0xc + 10];
            dVar49 = (pdVar19 + lVar15 * 0xc + 10)[1];
            goto LAB_149870ba7;
          }
          pdVar16 = (double *)*param_5;
          dVar58 = *pdVar16;
          dVar54 = pdVar16[1];
          auVar59 = *(undefined1 (*) [16])(pdVar16 + 2);
          dVar57 = auVar59._0_8_;
          uVar76 = auVar59._8_4_;
          uVar77 = auVar59._12_4_;
          dVar34 = pdVar16[4];
          dVar71 = pdVar16[5];
          dVar45 = pdVar16[6];
          dVar67 = pdVar16[7];
          local_408 = *(undefined1 (*) [16])(pdVar16 + 8);
          local_3f8 = *(undefined1 (*) [16])(pdVar16 + 8);
          dVar46 = *(double *)*(undefined1 (*) [16])(pdVar16 + 10);
          dVar49 = pdVar16[0xb];
          local_3e8._0_16_ = *(undefined1 (*) [16])(pdVar16 + 10);
          dVar55 = dVar58;
          dVar44 = dVar54;
          break;
        case '\x03':
          local_3c8._8_4_ = SUB84(dVar51,0);
          local_3c8._0_8_ = dVar39;
          local_3c8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
          pdVar16 = (double *)*param_5;
          pdVar2 = (double *)param_5[2];
          local_388 = *pdVar16;
          dStack_380 = pdVar16[1];
          dVar57 = pdVar16[2];
          uVar76 = *(undefined4 *)(pdVar16 + 3);
          uVar77 = *(undefined4 *)((longlong)pdVar16 + 0x1c);
          local_3f8 = *(undefined1 (*) [16])(pdVar16 + 8);
          local_3e8._0_16_ = *(undefined1 (*) [16])(pdVar16 + 10);
          auVar63 = *(undefined1 (*) [16])(param_5 + 0x22);
          dVar51 = auVar63._0_8_;
          dVar67 = auVar63._8_8_;
          auVar36 = *(undefined1 (*) [16])(pdVar2 + 8);
          auVar64 = *(undefined1 (*) [16])(pdVar2 + 10);
          auVar69 = minpd(auVar36,auVar63);
          auVar63 = *(undefined1 (*) [16])(param_5 + 0x24);
          dVar46 = auVar63._0_8_;
          auVar52 = minpd(auVar64,auVar63);
          auVar35._8_8_ = -(ulonglong)(auVar69._8_8_ < 0.0);
          auVar35._0_8_ = -(ulonglong)(auVar69._0_8_ < 0.0);
          iVar14 = movmskpd((int)pdVar16,auVar35);
          auVar40._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
          auVar40._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
          uVar17 = movmskpd((int)pdVar19,auVar40);
          if ((uVar17 & 0x3fffffff) == 0 && iVar14 == 0) {
            dVar3 = *pdVar2;
            dVar38 = pdVar2[1];
            dVar10 = pdVar2[2];
            dVar12 = pdVar2[3];
            dVar37 = (double)param_5[0x1a];
            dVar50 = (double)param_5[0x1b];
            dVar56 = (double)param_5[0x1c];
            dVar70 = (double)param_5[0x1d];
            dVar39 = (double)param_5[0x1d];
            dVar58 = (double)param_5[0x1d];
            dVar34 = (double)param_5[0x1a];
            dVar45 = (double)param_5[0x1a];
            dVar54 = (double)param_5[0x1b];
            dVar71 = (double)param_5[0x1b];
            dVar62 = (double)param_5[0x1c];
            dVar49 = (double)param_5[0x1c];
            dVar55 = dVar38 * dVar62 * -1.0 +
                     dVar10 * dVar54 + dVar12 * dVar34 * 1.0 + dVar3 * dVar39;
            dVar44 = dVar3 * dVar49 * 1.0 +
                     dVar12 * dVar71 + dVar10 * dVar45 * -1.0 + dVar38 * dVar58;
            auVar59._0_8_ =
                 dVar12 * dVar62 * 1.0 +
                 ((dVar34 * dVar38 * 1.0 + dVar10 * dVar39) - dVar3 * dVar54);
            auVar59._8_8_ =
                 dVar10 * dVar49 * -1.0 +
                 ((dVar45 * dVar3 * -1.0 + dVar12 * dVar58) - dVar38 * dVar71);
            dVar34 = pdVar2[4] * dVar51;
            dVar71 = pdVar2[5] * dVar67;
            dVar45 = pdVar2[6] * dVar46;
            dVar54 = pdVar2[7] * auVar63._8_8_;
            dVar49 = dVar71 * dVar37 - dVar50 * dVar34;
            dVar3 = dVar45 * dVar50 - dVar56 * dVar71;
            dVar38 = dVar34 * dVar56 - dVar37 * dVar45;
            dVar62 = dVar54 * dVar70 - dVar70 * dVar54;
            dVar3 = dVar3 + dVar3;
            dVar38 = dVar38 + dVar38;
            dVar49 = dVar49 + dVar49;
            dVar62 = dVar62 + dVar62;
            local_408._8_8_ = auVar36._8_8_ * dVar67;
            local_408._0_8_ = auVar36._0_8_ * dVar51;
            dVar34 = (dVar49 * dVar50 - dVar56 * dVar38) + dVar39 * dVar3 + dVar34 +
                     (double)param_5[0x1e];
            dVar71 = (dVar3 * dVar56 - dVar49 * dVar37) + dVar58 * dVar38 + dVar71 +
                     (double)param_5[0x1f];
            dVar45 = (dVar38 * dVar37 - dVar50 * dVar3) + dVar39 * dVar49 + dVar45 +
                     (double)param_5[0x20];
            dVar67 = (dVar62 * dVar70 - dVar62 * dVar70) + dVar58 * dVar62 + dVar54 +
                     (double)param_5[0x21];
            pdVar19 = (double *)0x0;
          }
          else {
            local_408._8_8_ = auVar36._8_8_ * dVar67;
            local_408._0_8_ = auVar36._0_8_ * dVar51;
            dVar45 = (double)param_5[0x1a];
            dVar34 = (double)param_5[0x1b];
            dVar39 = (double)param_5[0x1c];
            dVar71 = dVar34 + dVar34;
            dVar55 = dVar39 + dVar39;
            dVar44 = dVar45 * (dVar45 + dVar45);
            local_1f8 = ((double)DAT_149934d80 - (dVar39 * dVar55 + dVar34 * dVar71)) * dVar51;
            dStack_1d0 = (DAT_149934d80._8_8_ - (dVar39 * dVar55 + dVar44)) * dVar67;
            local_1a8 = (1.0 - (dVar44 + dVar34 * dVar71)) * dVar46;
            dVar39 = (double)param_5[0x1d];
            dVar44 = dVar55 * dVar39;
            dVar58 = (dVar45 + dVar45) * (double)param_5[0x1d];
            dVar39 = dVar71 * dVar39;
            dStack_1f0 = (dVar71 * dVar45 + dVar44) * dVar51;
            local_1c8 = (dVar55 * dVar34 + dVar58) * dVar67;
            local_1d8 = (dVar71 * dVar45 - dVar44) * dVar67;
            dVar67 = (dVar55 * dVar34 - dVar58) * dVar46;
            local_1e8 = ((double)param_5[0x1a] * dVar55 - dVar39) * dVar51;
            uStack_1e0 = 0;
            uStack_1c0 = 0;
            local_1b8._8_4_ = SUB84(dVar67,0);
            local_1b8._0_8_ = (dVar39 + (double)param_5[0x1a] * dVar55) * dVar46;
            local_1b8._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
            uStack_1a0 = 0;
            local_198 = (double)param_5[0x1e];
            dStack_190 = (double)param_5[0x1f];
            local_188 = (double)param_5[0x20];
            uStack_180 = 0x3ff0000000000000;
            dVar67 = *pdVar2;
            dVar39 = pdVar2[1];
            dVar45 = pdVar2[2];
            local_268 = pdVar2[8];
            local_258 = pdVar2[9];
            dVar34 = pdVar2[10];
            dVar44 = dVar39 + dVar39;
            dVar71 = dVar45 + dVar45;
            dVar51 = dVar67 * (dVar67 + dVar67);
            local_278 = ((double)DAT_149934d80 - (dVar45 * dVar71 + dVar39 * dVar44)) * local_268;
            dStack_250 = (DAT_149934d80._8_8_ - (dVar45 * dVar71 + dVar51)) * local_258;
            local_228 = (1.0 - (dVar51 + dVar39 * dVar44)) * dVar34;
            dVar51 = pdVar2[3];
            dVar45 = dVar71 * dVar51;
            dVar55 = (dVar67 + dVar67) * pdVar2[3];
            dVar51 = dVar44 * dVar51;
            dStack_270 = (dVar44 * dVar67 + dVar45) * local_268;
            local_248 = (dVar71 * dVar39 + dVar55) * local_258;
            local_268 = (*pdVar2 * dVar71 - dVar51) * local_268;
            local_258 = (dVar44 * dVar67 - dVar45) * local_258;
            dVar67 = (dVar71 * dVar39 - dVar55) * dVar34;
            uStack_260 = 0;
            uStack_240 = 0;
            local_238._8_4_ = SUB84(dVar67,0);
            local_238._0_8_ = (dVar51 + *pdVar2 * dVar71) * dVar34;
            local_238._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
            uStack_220 = 0;
            local_218 = pdVar2[4];
            dStack_210 = pdVar2[5];
            local_208 = pdVar2[6];
            uStack_200 = 0x3ff0000000000000;
            pdVar19 = &local_178;
            FUN_1447fea8d(pdVar19,&local_278,&local_1f8);
            FUN_144a1c686(pdVar19,0x3e45798ee0000000);
            param_3 = local_3d0;
            auVar36._8_8_ = -(ulonglong)(0.0 <= (double)local_408._8_8_);
            auVar36._0_8_ = -(ulonglong)(0.0 <= (double)local_408._0_8_);
            auVar36 = blendvpd(_DAT_149936790,auVar59,auVar36);
            uVar29 = -(ulonglong)(0.0 <= auVar64._0_8_ * dVar46);
            dVar51 = (double)(~uVar29 & 0xbff0000000000000 | uVar29 & 0x3ff0000000000000);
            dVar67 = auVar36._0_8_;
            local_168 = local_168 * dVar67;
            dStack_170 = dStack_170 * dVar67;
            local_178 = local_178 * dVar67;
            dVar67 = auVar36._8_8_;
            local_148 = local_148 * dVar67;
            uStack_150 = uStack_150 * dVar67;
            local_158 = dVar67 * local_158;
            local_128 = local_128 * dVar51;
            dStack_130 = dStack_130 * dVar51;
            local_138 = dVar51 * local_138;
            FUN_14481fd10(&local_298);
            dVar51 = local_288 * local_288 + local_298 * local_298;
            dVar67 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar41._0_8_ = dVar51 + dVar67;
            auVar41._8_8_ = dVar51 + dVar67;
            auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
            auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
            auVar36 = sqrtpd(auVar41,auVar41);
            auVar59 = divpd(auVar59,auVar36);
            auVar47._0_8_ = auVar59._0_8_ * local_288;
            auVar47._8_8_ = auVar59._8_8_ * dStack_280;
            dVar55 = (double)((ulonglong)(local_298 * auVar59._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_));
            dVar44 = (double)((ulonglong)(dStack_290 * auVar59._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_));
            auVar59 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar47,auVar30);
            dVar67 = 0.0;
            dVar45 = local_108;
            dVar34 = local_118;
            dVar71 = dStack_110;
          }
          dVar49 = auVar64._8_8_ * auVar63._8_8_;
          dVar46 = auVar64._0_8_ * dVar46;
          dVar58 = local_388;
          dVar54 = dStack_380;
          dVar39 = (double)local_3c8._0_8_;
          dVar51 = (double)local_3c8._8_8_;
          break;
        default:
          dVar57 = 0.0;
          uVar76 = 0;
          uVar77 = 0x3ff00000;
          local_3f8._8_8_ = 0x3ff0000000000000;
          local_3f8._0_8_ = 0x3ff0000000000000;
          dVar46 = 1.0;
          dVar49 = 0.0;
          local_3e8._0_16_ = ZEXT816(0x3ff0000000000000);
          auVar59 = ZEXT816(0x3ff0000000000000) << 0x40;
          dVar34 = 0.0;
          dVar71 = 0.0;
          dVar45 = 0.0;
          dVar67 = 0.0;
          local_408._8_8_ = 0x3ff0000000000000;
          local_408._0_8_ = 0x3ff0000000000000;
          dVar58 = 0.0;
          dVar54 = 0.0;
          dVar55 = 0.0;
          dVar44 = 0.0;
        }
        dVar62 = *(double *)(lVar22 + lVar28);
        dVar3 = ((double *)(lVar22 + lVar28))[1];
        pdVar16 = (double *)(lVar22 + 0x10 + lVar28);
        dVar38 = *pdVar16;
        dVar10 = pdVar16[1];
        lVar20 = (longlong)*(int *)(*(longlong *)(param_6 + 0x10) + lVar25 * 4);
        pdVar16 = (double *)&DAT_14c846480;
        if (lVar20 != -1) {
          pdVar16 = (double *)(lVar20 * 0x60 + *param_7);
        }
        cVar4 = param_3[8];
        local_3c8._8_8_ = dVar49;
        local_3c8._0_8_ = dVar46;
        if (cVar4 != '\x02') {
          if (cVar4 == '\x01') {
            dVar45 = dVar45 * (double)*(float *)(local_390 + 0x15c) * *(double *)(local_390 + 0x1a8)
            ;
            dVar34 = (double)*(float *)(local_390 + 0x158) * *(double *)(local_390 + 0x198) * dVar34
            ;
            dVar71 = dVar71 * *(double *)(local_390 + 0x1a0) * (double)*(float *)(local_390 + 0x158)
            ;
          }
          else {
            dVar34 = dVar39;
            dVar71 = dVar51;
            dVar67 = (double)local_378._8_8_;
            dVar45 = (double)local_378._0_8_;
            if (cVar4 == '\0') {
              dVar12 = *pdVar16;
              dVar34 = pdVar16[1];
              dVar37 = pdVar16[2];
              pdVar19 = (double *)(lVar25 * 0x60);
              pdVar2 = (double *)(*(longlong *)(param_6 + 0x20) + 0x20 + (longlong)pdVar19);
              dVar50 = pdVar16[8] * *pdVar2;
              dVar56 = pdVar16[9] * pdVar2[1];
              dVar39 = *(double *)(*(longlong *)(param_6 + 0x20) + 0x30 + (longlong)pdVar19) *
                       pdVar16[10];
              dVar51 = pdVar16[3];
              dVar49 = dVar56 * dVar12 - dVar34 * dVar50;
              dVar70 = dVar39 * dVar34 - dVar37 * dVar56;
              dVar71 = dVar50 * dVar37 - dVar12 * dVar39;
              dVar67 = pdVar16[0xb] * 0.0 * pdVar16[3] - pdVar16[3] * pdVar16[0xb] * 0.0;
              dVar70 = dVar70 + dVar70;
              dVar71 = dVar71 + dVar71;
              dVar49 = dVar49 + dVar49;
              dVar67 = dVar67 + dVar67;
              dVar45 = dVar49 * dVar51 + dVar39 + (dVar71 * dVar12 - dVar70 * dVar34) + pdVar16[6];
              dVar34 = (dVar49 * dVar34 - dVar71 * dVar37) + dVar51 * dVar70 + dVar50 + pdVar16[4];
              dVar71 = (dVar37 * dVar70 - dVar12 * dVar49) + pdVar16[3] * dVar71 + dVar56 +
                       pdVar16[5];
            }
          }
        }
        dVar51 = dVar71;
        dVar39 = dVar34;
        dVar57 = dVar57 * -1.0;
        dVar34 = (double)CONCAT44(uVar77,uVar76) * 1.0;
        dVar50 = auVar59._8_8_;
        dVar71 = auVar59._0_8_;
        dVar49 = (dVar57 * dVar44 + (dVar34 * dVar55 * 1.0 - dVar50 * dVar58)) -
                 dVar54 * dVar71 * -1.0;
        dVar12 = (dVar34 * dVar44 + (dVar57 * dVar55 * -1.0 - dVar50 * dVar54)) -
                 dVar58 * dVar71 * 1.0;
        dVar37 = dVar34 * dVar71 * 1.0 + dVar44 * dVar58 + (dVar57 * dVar50 - dVar55 * dVar54 * 1.0)
        ;
        dVar44 = dVar57 * dVar71 * -1.0 +
                 dVar44 * dVar54 + (dVar34 * dVar50 - dVar55 * dVar58 * -1.0);
        dVar71 = dVar62 * dVar37 * 1.0 + dVar10 * dVar12 + dVar49 * dVar38 * -1.0 + dVar3 * dVar44;
        pdVar16 = (double *)(lVar22 + 0x40 + lVar28);
        dVar57 = *pdVar16;
        dVar55 = pdVar16[1];
        dVar34 = *(double *)(lVar22 + 0x50 + lVar28);
        lVar22 = param_1[4];
        auVar6._8_4_ = SUB84(dVar71,0);
        auVar6._0_8_ = dVar3 * dVar37 * -1.0 +
                       dVar38 * dVar12 + dVar49 * dVar10 * 1.0 + dVar62 * dVar44;
        auVar6._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
        *(undefined1 (*) [16])(lVar22 + lVar28) = auVar6;
        pdVar16 = (double *)(lVar22 + 0x10 + lVar28);
        *pdVar16 = dVar10 * dVar37 * 1.0 +
                   ((dVar49 * dVar3 * 1.0 + dVar44 * dVar38) - dVar12 * dVar62);
        pdVar16[1] = dVar38 * dVar37 * -1.0 +
                     ((dVar49 * dVar62 * -1.0 + dVar44 * dVar10) - dVar12 * dVar3);
        local_378._8_4_ = SUB84(dVar67,0);
        local_378._0_8_ = dVar45;
        local_378._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
        pdVar16 = (double *)(lVar22 + 0x20 + lVar28);
        *pdVar16 = dVar39;
        pdVar16[1] = dVar51;
        pdVar16 = (double *)(lVar22 + 0x30 + lVar28);
        *pdVar16 = dVar45;
        pdVar16[1] = 0.0;
        pdVar16 = (double *)(lVar22 + 0x40 + lVar28);
        *pdVar16 = (double)local_408._0_8_ + (dVar57 - (double)local_3f8._0_8_);
        pdVar16[1] = (double)local_408._8_8_ + (dVar55 - (double)local_3f8._8_8_);
        pdVar16 = (double *)(lVar22 + 0x50 + lVar28);
        *pdVar16 = dVar46 + (dVar34 - (double)local_3e8._0_8_);
        pdVar16[1] = 0.0;
        puVar24 = (undefined8 *)(param_1[4] + lVar28);
        puVar26 = (undefined8 *)(lVar25 * 0x60 + *param_7);
        for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
          *puVar26 = *puVar24;
          puVar24 = puVar24 + 1;
          puVar26 = puVar26 + 1;
        }
        lVar23 = lVar23 + 1;
        lVar28 = lVar28 + 0x60;
      } while (lVar23 < (int)*(longlong *)(uVar13 + 8));
    }
    if ((1e-08 < ABS(*(float *)(param_3 + 4) + -1.0)) ||
       (1e-08 < ABS(*(float *)(param_3 + 0xc) + -1.0))) {
      plVar27 = local_368;
      local_368[0] = 0;
      local_368[1] = 0;
      FUN_140ee84a4(plVar27,(int)param_1[3],1);
      FUN_14986e01e(param_6,param_7,uVar13);
      if (0 < (int)param_1[3]) {
        lVar23 = 0xc;
        lVar28 = 0;
        local_408 = ZEXT816(0x3ff0000000000000) << 0x40;
        auVar59 = _DAT_149934d80;
        do {
          lVar22 = param_1[2];
          pdVar19 = (double *)(local_368[0] + -0x30 + lVar23 * 4);
          dVar46 = *pdVar19;
          dVar67 = pdVar19[1];
          pdVar19 = (double *)(local_368[0] + -0x20 + lVar23 * 4);
          dVar39 = *pdVar19;
          dVar45 = pdVar19[1];
          pdVar19 = (double *)(local_368[0] + -0x10 + lVar23 * 4);
          pdVar16 = (double *)(lVar22 + -0x10 + lVar23 * 4);
          dVar34 = *pdVar16;
          dVar51 = *(double *)(lVar22 + lVar23 * 4);
          dVar71 = (double)*(float *)(param_3 + 0xc);
          dVar44 = (pdVar19[1] - pdVar16[1]) * dVar71 + *(double *)(lVar22 + -8 + lVar23 * 4);
          dVar51 = (*(double *)(local_368[0] + lVar23 * 4) - dVar51) * dVar71 + dVar51;
          dVar34 = (*pdVar19 - dVar34) * dVar71 + dVar34;
          pdVar19 = (double *)(local_368[0] + -0x10 + lVar23 * 4);
          *pdVar19 = dVar34;
          pdVar19[1] = dVar44;
          pdVar19 = (double *)(local_368[0] + lVar23 * 4);
          *pdVar19 = dVar51;
          pdVar19[1] = 0.0;
          dVar58 = (double)*(float *)(param_3 + 4);
          pdVar19 = (double *)(lVar22 + -0x30 + lVar23 * 4);
          dVar71 = *pdVar19;
          dVar57 = pdVar19[1];
          pdVar19 = (double *)(lVar22 + -0x20 + lVar23 * 4);
          dVar55 = *pdVar19;
          uVar29 = -(ulonglong)
                    (0.0 <= *(double *)(lVar22 + -0x18 + lVar23 * 4) *
                            *(double *)(local_368[0] + -0x18 + lVar23 * 4) +
                            dVar55 * dVar39 + dVar71 * dVar46 + dVar67 * dVar57);
          dVar54 = (double)(~uVar29 & (ulonglong)-(1.0 - dVar58) |
                           uVar29 & (ulonglong)(1.0 - dVar58));
          dVar46 = dVar71 * dVar54 + dVar46 * dVar58;
          dVar67 = dVar57 * dVar54 + dVar67 * dVar58;
          dVar71 = dVar55 * dVar54 + dVar39 * dVar58;
          dVar57 = pdVar19[1] * dVar54 + dVar45 * dVar58;
          dVar39 = dVar71 * dVar71 + dVar46 * dVar46;
          dVar45 = dVar57 * dVar57 + dVar67 * dVar67;
          auVar42._0_8_ = dVar39 + dVar45;
          auVar42._8_8_ = dVar39 + dVar45;
          auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
          auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
          auVar63 = sqrtpd(auVar42,auVar42);
          dVar39 = auVar59._0_8_;
          dVar45 = auVar59._8_8_;
          auVar59 = divpd(auVar59,auVar63);
          auVar60._0_8_ = auVar59._0_8_ * dVar71;
          auVar60._8_8_ = auVar59._8_8_ * dVar57;
          auVar63 = blendvpd(local_408,auVar60,auVar31);
          dVar46 = (double)((ulonglong)(dVar46 * auVar59._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_));
          dVar67 = (double)((ulonglong)(dVar67 * auVar59._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_));
          auVar7._8_4_ = SUB84(dVar67,0);
          auVar7._0_8_ = dVar46;
          auVar7._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
          *(undefined1 (*) [16])(local_368[0] + -0x30 + lVar23 * 4) = auVar7;
          *(undefined1 (*) [16])(local_368[0] + -0x20 + lVar23 * 4) = auVar63;
          auVar59 = _DAT_149934d80;
          lVar25 = (longlong)*(int *)(*(longlong *)uVar13 + lVar28 * 4);
          lVar20 = (longlong)*(int *)(*(longlong *)(param_6 + 0x10) + lVar25 * 4);
          lVar22 = *param_7;
          pdVar19 = (double *)(lVar20 * 0x60 + lVar22);
          if (lVar20 == -1) {
            pdVar19 = (double *)&DAT_14c846480;
          }
          auVar36 = *(undefined1 (*) [16])(pdVar19 + 8);
          dVar71 = auVar36._0_8_;
          dVar55 = auVar36._8_8_;
          auVar64 = *(undefined1 (*) [16])(pdVar19 + 10);
          dVar57 = auVar64._0_8_;
          auVar69 = *(undefined1 (*) [16])(local_368[0] + 0x10 + lVar23 * 4);
          auVar52 = minpd(auVar69,auVar36);
          auVar36 = *(undefined1 (*) [16])(local_368[0] + 0x20 + lVar23 * 4);
          auVar65 = minpd(auVar36,auVar64);
          auVar53._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
          auVar53._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
          uVar17 = movmskpd(0x4c846480,auVar53);
          auVar66._8_8_ = -(ulonglong)(auVar65._8_8_ < 0.0);
          auVar66._0_8_ = -(ulonglong)(auVar65._0_8_ < 0.0);
          iVar14 = movmskpd((int)plVar27,auVar66);
          uVar17 = iVar14 << 2 | uVar17;
          plVar27 = (longlong *)(ulonglong)uVar17;
          dVar58 = auVar63._8_8_;
          if (uVar17 == 0) {
            dVar12 = *pdVar19;
            dVar37 = pdVar19[1];
            dVar50 = pdVar19[2];
            dVar56 = pdVar19[3];
            dVar39 = pdVar19[3];
            dVar45 = pdVar19[3];
            dVar70 = auVar63._0_8_;
            dVar49 = pdVar19[1];
            dVar54 = pdVar19[1];
            dVar3 = pdVar19[2];
            dVar62 = pdVar19[2];
            dVar38 = dVar67 * dVar3 * -1.0 +
                     dVar70 * dVar49 + dVar58 * *pdVar19 * 1.0 + dVar46 * dVar39;
            dVar10 = dVar46 * dVar62 * 1.0 +
                     dVar58 * dVar54 + dVar70 * *pdVar19 * -1.0 + dVar67 * dVar45;
            auVar61._0_8_ =
                 dVar58 * dVar3 * 1.0 +
                 ((*pdVar19 * dVar67 * 1.0 + dVar70 * dVar39) - dVar46 * dVar49);
            auVar61._8_8_ =
                 dVar70 * dVar62 * -1.0 +
                 ((*pdVar19 * dVar46 * -1.0 + dVar58 * dVar45) - dVar67 * dVar54);
            dVar34 = dVar34 * dVar71;
            dVar44 = dVar44 * dVar55;
            dVar51 = dVar51 * dVar57;
            dVar54 = auVar64._8_8_ * 0.0;
            dVar46 = dVar44 * dVar12 - dVar34 * dVar37;
            dVar67 = dVar51 * dVar37 - dVar44 * dVar50;
            dVar58 = dVar34 * dVar50 - dVar51 * dVar12;
            dVar49 = dVar54 * dVar56 - dVar54 * dVar56;
            dVar67 = dVar67 + dVar67;
            dVar58 = dVar58 + dVar58;
            dVar46 = dVar46 + dVar46;
            dVar49 = dVar49 + dVar49;
            dVar34 = (dVar46 * dVar37 - dVar50 * dVar58) + dVar39 * dVar67 + dVar34 + pdVar19[4];
            dVar44 = (dVar67 * dVar50 - dVar46 * dVar12) + dVar45 * dVar58 + dVar44 + pdVar19[5];
            dVar51 = (dVar58 * dVar12 - dVar37 * dVar67) + dVar39 * dVar46 + dVar51 + pdVar19[6];
            dVar46 = (dVar49 * dVar56 - dVar49 * dVar56) + dVar45 * dVar49 + dVar54 + pdVar19[7];
            local_3f8 = auVar69;
            local_3e8._0_16_ = auVar36;
          }
          else {
            dVar46 = *pdVar19;
            dVar67 = pdVar19[1];
            dVar51 = pdVar19[2];
            dVar34 = dVar67 + dVar67;
            dVar44 = dVar51 + dVar51;
            dVar58 = dVar46 * (dVar46 + dVar46);
            local_1f8 = (dVar39 - (dVar51 * dVar44 + dVar67 * dVar34)) * dVar71;
            dStack_1d0 = (dVar45 - (dVar51 * dVar44 + dVar58)) * dVar55;
            local_1a8 = (1.0 - (dVar58 + dVar67 * dVar34)) * dVar57;
            dVar51 = pdVar19[3];
            dVar39 = dVar44 * dVar51;
            dVar45 = (dVar46 + dVar46) * pdVar19[3];
            dVar51 = dVar34 * dVar51;
            dStack_1f0 = (dVar34 * dVar46 + dVar39) * dVar71;
            local_1c8 = (dVar44 * dVar67 + dVar45) * dVar55;
            local_1d8 = (dVar34 * dVar46 - dVar39) * dVar55;
            dVar46 = (dVar44 * dVar67 - dVar45) * dVar57;
            local_1e8 = (*pdVar19 * dVar44 - dVar51) * dVar71;
            uStack_1e0 = 0;
            uStack_1c0 = 0;
            local_1b8._8_4_ = SUB84(dVar46,0);
            local_1b8._0_8_ = (dVar51 + *pdVar19 * dVar44) * dVar57;
            local_1b8._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
            uStack_1a0 = 0;
            local_198 = pdVar19[4];
            dStack_190 = pdVar19[5];
            local_188 = pdVar19[6];
            uStack_180 = 0x3ff0000000000000;
            pdVar19 = (double *)(local_368[0] + -0x30 + lVar23 * 4);
            dVar46 = *pdVar19;
            dVar39 = pdVar19[1];
            dVar51 = *(double *)(local_368[0] + -0x20 + lVar23 * 4);
            pdVar19 = (double *)(local_368[0] + 0x10 + lVar23 * 4);
            local_268 = *pdVar19;
            local_258 = pdVar19[1];
            dVar45 = *(double *)(local_368[0] + 0x20 + lVar23 * 4);
            dVar54 = dVar39 + dVar39;
            dVar34 = dVar51 + dVar51;
            dVar67 = dVar46 * (dVar46 + dVar46);
            local_278 = ((double)DAT_149934d80 - (dVar51 * dVar34 + dVar39 * dVar54)) * local_268;
            dStack_250 = (DAT_149934d80._8_8_ - (dVar51 * dVar34 + dVar67)) * local_258;
            local_228 = (1.0 - (dVar67 + dVar39 * dVar54)) * dVar45;
            dVar67 = *(double *)(local_368[0] + -0x30 + lVar23 * 4) * dVar34;
            pdVar19 = (double *)(local_368[0] + -0x18 + lVar23 * 4);
            dVar51 = *pdVar19;
            dVar44 = dVar34 * dVar51;
            dVar58 = (dVar46 + dVar46) * *pdVar19;
            dVar51 = dVar54 * dVar51;
            dStack_270 = (dVar54 * dVar46 + dVar44) * local_268;
            local_248 = (dVar34 * dVar39 + dVar58) * local_258;
            local_268 = (dVar67 - dVar51) * local_268;
            local_258 = (dVar54 * dVar46 - dVar44) * local_258;
            dVar46 = (dVar34 * dVar39 - dVar58) * dVar45;
            uStack_260 = 0;
            uStack_240 = 0;
            local_238._8_4_ = SUB84(dVar46,0);
            local_238._0_8_ = (dVar51 + dVar67) * dVar45;
            local_238._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
            uStack_220 = 0;
            pdVar19 = (double *)(local_368[0] + -0x10 + lVar23 * 4);
            local_218 = *pdVar19;
            dStack_210 = pdVar19[1];
            local_208 = *(double *)(local_368[0] + lVar23 * 4);
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(&local_178,&local_278,&local_1f8);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar32._8_8_ = -(ulonglong)(0.0 <= auVar69._8_8_ * dVar55);
            auVar32._0_8_ = -(ulonglong)(0.0 <= auVar69._0_8_ * dVar71);
            auVar63 = blendvpd(_DAT_149936790,auVar59,auVar32);
            uVar29 = -(ulonglong)(0.0 <= auVar36._0_8_ * dVar57);
            dVar51 = (double)(~uVar29 & 0xbff0000000000000 | uVar29 & 0x3ff0000000000000);
            dVar46 = auVar63._0_8_;
            local_168 = local_168 * dVar46;
            dStack_170 = dStack_170 * dVar46;
            local_178 = local_178 * dVar46;
            dVar46 = auVar63._8_8_;
            local_148 = local_148 * dVar46;
            uStack_150 = uStack_150 * dVar46;
            local_158 = dVar46 * local_158;
            local_128 = local_128 * dVar51;
            dStack_130 = dStack_130 * dVar51;
            local_138 = dVar51 * local_138;
            FUN_14481fd10(&local_298,&local_178);
            dVar51 = local_288 * local_288 + local_298 * local_298;
            dVar46 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar43._0_8_ = dVar51 + dVar46;
            auVar43._8_8_ = dVar51 + dVar46;
            auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
            auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
            auVar63 = sqrtpd(auVar43,auVar43);
            auVar63 = divpd(auVar59,auVar63);
            auVar48._0_8_ = auVar63._0_8_ * local_288;
            auVar48._8_8_ = auVar63._8_8_ * dStack_280;
            dVar38 = (double)((ulonglong)(local_298 * auVar63._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_));
            dVar10 = (double)((ulonglong)(dStack_290 * auVar63._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_));
            auVar61 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar48,auVar33);
            dVar46 = 0.0;
            lVar22 = *param_7;
            dVar34 = local_118;
            dVar44 = dStack_110;
            dVar51 = local_108;
          }
          dVar55 = auVar69._8_8_ * dVar55;
          lVar25 = lVar25 * 0x60;
          auVar9._8_4_ = SUB84(dVar10,0);
          auVar9._0_8_ = dVar38;
          auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          *(undefined1 (*) [16])(lVar22 + lVar25) = auVar9;
          *(undefined1 (*) [16])(lVar22 + 0x10 + lVar25) = auVar61;
          auVar8._8_4_ = SUB84(dVar44,0);
          auVar8._0_8_ = dVar34;
          auVar8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
          *(undefined1 (*) [16])(lVar22 + 0x20 + lVar25) = auVar8;
          pdVar19 = (double *)(lVar22 + 0x30 + lVar25);
          *pdVar19 = dVar51;
          pdVar19[1] = dVar46;
          auVar11._8_4_ = SUB84(dVar55,0);
          auVar11._0_8_ = auVar69._0_8_ * dVar71;
          auVar11._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
          *(undefined1 (*) [16])(lVar22 + 0x40 + lVar25) = auVar11;
          pdVar19 = (double *)(lVar22 + 0x50 + lVar25);
          *pdVar19 = auVar36._0_8_ * dVar57;
          pdVar19[1] = auVar36._8_8_ * auVar64._8_8_;
          lVar28 = lVar28 + 1;
          lVar23 = lVar23 + 0x18;
        } while (lVar28 < (int)param_1[3]);
      }
      if (local_368[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149871c6a FUN_149871c6a body=249 status=ok
// SIG undefined FUN_149871c6a(void)

void FUN_149871c6a(longlong param_1,uint param_2,int param_3,longlong param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) < 0) {
    FUN_14481578e(plVar1,0);
  }
  uVar7 = *(uint *)(*(longlong *)(param_4 + 0x10) + (longlong)param_3 * 4);
  if (uVar7 != param_2 && -1 < (int)uVar7) {
    while (*(char *)(*(longlong *)(param_4 + 0x88) + (ulonglong)uVar7) == '\0') {
      iVar3 = *(int *)(param_1 + 200);
      *(uint *)(param_1 + 200) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0xcc) < iVar3 + 1U) {
        FUN_1446f48e2(plVar1,iVar3);
      }
      *(uint *)(*plVar1 + (longlong)iVar3 * 4) = uVar7;
      uVar7 = *(uint *)(*(longlong *)(param_4 + 0x10) + (ulonglong)uVar7 * 4);
      if (((int)uVar7 < 0) || (uVar7 == param_2)) break;
    }
  }
  uVar7 = *(uint *)(param_1 + 200);
  lVar6 = (longlong)(int)uVar7;
  if (1 < lVar6) {
    puVar4 = *(undefined4 **)(param_1 + 0xc0);
    lVar8 = 0;
    puVar5 = puVar4;
    do {
      uVar2 = *puVar5;
      *puVar5 = puVar4[lVar6 + lVar8 + -1];
      puVar4[lVar6 + lVar8 + -1] = uVar2;
      lVar8 = lVar8 + -1;
      puVar5 = puVar5 + 1;
    } while (-lVar8 != (ulonglong)(uVar7 >> 1));
  }
  return;
}



// FUNCTION 149871d64 FUN_149871d64 body=495 status=ok
// SIG undefined FUN_149871d64(void)

undefined8 FUN_149871d64(int *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  double *pdVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  float fVar14;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_2[1] < 2) {
    local_38 = L"SourceChainLessThanThree";
    local_30 = 0x18;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"IKRetargetProcessor";
    local_30 = 0x13;
    FUN_1446e940c(local_40,&local_38);
    pwVar13 = 
    L"IK Retargeter trying to retarget source bone chain with IK but it has less than 2 joints.";
  }
  else {
    iVar4 = *(int *)*param_2;
    *param_1 = iVar4;
    iVar5 = *(int *)(*param_2 + (longlong)((int)param_2[1] + -1) * 4);
    param_1[1] = iVar5;
    lVar10 = *param_3;
    lVar12 = (longlong)iVar5 * 0x60;
    puVar1 = (undefined8 *)(lVar10 + 0x20 + lVar12);
    uVar8 = puVar1[1];
    uVar11 = *(undefined8 *)(lVar10 + 0x30 + lVar12);
    *(undefined8 *)(param_1 + 0x12) = *puVar1;
    *(undefined8 *)(param_1 + 0x14) = uVar8;
    *(undefined8 *)(param_1 + 0x16) = uVar11;
    pdVar2 = (double *)(lVar10 + 0x20 + lVar12);
    dVar6 = *pdVar2;
    dVar7 = pdVar2[1];
    dVar3 = *(double *)(lVar10 + 0x30 + lVar12);
    *(double *)(param_1 + 2) = dVar6;
    *(double *)(param_1 + 4) = dVar7;
    *(double *)(param_1 + 6) = dVar3;
    uVar11 = ((undefined8 *)(lVar10 + lVar12))[1];
    puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar12);
    uVar8 = *puVar1;
    uVar9 = puVar1[1];
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar10 + lVar12);
    *(undefined8 *)(param_1 + 10) = uVar11;
    *(undefined8 *)(param_1 + 0xc) = uVar8;
    *(undefined8 *)(param_1 + 0xe) = uVar9;
    lVar10 = (longlong)iVar4 * 0x60;
    pdVar2 = (double *)(*param_3 + 0x20 + lVar10);
    dVar3 = *(double *)(*param_3 + 0x30 + lVar10) - dVar3;
    dVar6 = *pdVar2 - dVar6;
    dVar7 = pdVar2[1] - dVar7;
    fVar14 = (float)SQRT(dVar3 * dVar3 + dVar6 * dVar6 + dVar7 * dVar7);
    if (0.0001 < fVar14) {
      param_1[0x10] = (int)(1.0 / fVar14);
      uVar11 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
      goto LAB_149871e5b;
    }
    local_38 = L"SourceZeroLengthIK";
    local_30 = 0x12;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"IKRetargetProcessor";
    local_30 = 0x13;
    FUN_1446e940c(local_40,&local_38);
    pwVar13 = L"IK Retargeter trying to retarget source bone chain with IK, but it is zero length!";
  }
  FUN_140208bae(&local_38,local_40,local_3c,pwVar13);
  FUN_14986922e(param_4,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  uVar11 = 0;
LAB_149871e5b:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149871f54 FUN_149871f54 body=340 status=ok
// SIG undefined FUN_149871f54(void)

void FUN_149871f54(int *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  double dVar17;
  float fVar18;
  
  lVar4 = *param_2;
  lVar16 = (longlong)param_1[1] * 0x60;
  pdVar2 = (double *)(lVar4 + 0x20 + lVar16);
  dVar10 = *pdVar2;
  dVar11 = pdVar2[1];
  dVar12 = *(double *)(lVar4 + 0x30 + lVar16);
  dVar5 = dVar12 - *(double *)(lVar4 + 0x30 + (longlong)*param_1 * 0x60);
  pdVar2 = (double *)(lVar4 + 0x20 + (longlong)*param_1 * 0x60);
  dVar6 = dVar10 - *pdVar2;
  dVar7 = dVar11 - pdVar2[1];
  fVar18 = (float)SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7);
  dVar17 = DAT_14c8464e8;
  dVar9 = DAT_14c8464f0;
  dVar8 = DAT_14c8464e0;
  if (1e-08 < fVar18) {
    dVar8 = (double)(1.0 / fVar18);
    dVar17 = dVar7 * dVar8;
    dVar9 = dVar5 * dVar8;
    dVar8 = dVar6 * dVar8;
  }
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x1a);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + 0x1c);
  *(double *)(param_1 + 0x18) = dVar10;
  *(double *)(param_1 + 0x1a) = dVar11;
  *(double *)(param_1 + 0x1c) = dVar12;
  dVar5 = (double)(fVar18 * (float)param_1[0x10]);
  *(double *)(param_1 + 0x1e) = dVar8 * dVar5;
  *(double *)(param_1 + 0x20) = dVar17 * dVar5;
  *(double *)(param_1 + 0x22) = dVar9 * dVar5;
  puVar1 = (undefined8 *)(*param_2 + lVar16);
  uVar13 = puVar1[1];
  puVar3 = (undefined8 *)(*param_2 + 0x10 + lVar16);
  uVar14 = *puVar3;
  uVar15 = puVar3[1];
  *(undefined8 *)(param_1 + 0x24) = *puVar1;
  *(undefined8 *)(param_1 + 0x26) = uVar13;
  *(undefined8 *)(param_1 + 0x28) = uVar14;
  *(undefined8 *)(param_1 + 0x2a) = uVar15;
  param_1[0x2c] = (int)(float)((double)(float)param_1[0x10] * (dVar12 - *(double *)(param_1 + 6)));
  return;
}



// FUNCTION 1498720a8 FUN_1498720a8 body=542 status=ok
// SIG undefined FUN_1498720a8(void)

undefined8 FUN_1498720a8(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  float fVar15;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_2[1] < 3) {
    local_38 = L"TargetChainLessThanThree";
    local_30 = 0x18;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"IKRetargetProcessor";
    local_30 = 0x13;
    FUN_1446e940c(local_40,&local_38);
    pwVar14 = 
    L"IK Retargeter trying to retarget target bone chain with IK but it has less than 3 joints.";
  }
  else {
    iVar4 = *(int *)*param_2;
    *(int *)(param_1 + 0xc0) = iVar4;
    *(undefined4 *)(param_1 + 0xc4) =
         *(undefined4 *)(*param_2 + (longlong)((int)param_2[1] + -1) * 4);
    lVar5 = *param_3;
    lVar13 = (longlong)*(int *)(*param_2 + (longlong)((int)param_2[1] + -1) * 4) * 0x60;
    puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar13);
    uVar9 = puVar1[1];
    uVar12 = *(undefined8 *)(lVar5 + 0x30 + lVar13);
    *(undefined8 *)(param_1 + 0x110) = *puVar1;
    *(undefined8 *)(param_1 + 0x118) = uVar9;
    *(undefined8 *)(param_1 + 0x120) = uVar12;
    puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar13);
    uVar9 = puVar1[1];
    uVar12 = *(undefined8 *)(lVar5 + 0x30 + lVar13);
    *(undefined8 *)(param_1 + 0xd0) = *puVar1;
    *(undefined8 *)(param_1 + 0xd8) = uVar9;
    *(undefined8 *)(param_1 + 0xe0) = uVar12;
    uVar12 = ((undefined8 *)(lVar5 + lVar13))[1];
    puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar13);
    uVar9 = *puVar1;
    uVar10 = puVar1[1];
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(lVar5 + lVar13);
    *(undefined8 *)(param_1 + 0xf8) = uVar12;
    *(undefined8 *)(param_1 + 0x100) = uVar9;
    *(undefined8 *)(param_1 + 0x108) = uVar10;
    lVar11 = (longlong)iVar4 * 0x60;
    pdVar2 = (double *)(*param_3 + 0x20 + lVar11);
    dVar8 = *(double *)(*param_3 + 0x30 + lVar11) - *(double *)(lVar5 + 0x30 + lVar13);
    pdVar3 = (double *)(lVar5 + 0x20 + lVar13);
    dVar6 = *pdVar2 - *pdVar3;
    dVar7 = pdVar2[1] - pdVar3[1];
    fVar15 = (float)SQRT(dVar8 * dVar8 + dVar6 * dVar6 + dVar7 * dVar7);
    *(float *)(param_1 + 200) = fVar15;
    *(undefined1 *)(param_1 + 400) = 1;
    uVar12 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
    if (0.0001 < fVar15) goto LAB_1498721ce;
    local_38 = L"TargetZeroLengthIK";
    local_30 = 0x12;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"IKRetargetProcessor";
    local_30 = 0x13;
    FUN_1446e940c(local_40,&local_38);
    pwVar14 = L"IK Retargeter trying to retarget target bone chain with IK, but it is zero length!";
  }
  FUN_140208bae(&local_38,local_40,local_3c,pwVar14);
  FUN_14986922e(param_4,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  uVar12 = 0;
LAB_1498721ce:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498722c8 FUN_1498722c8 body=2084 status=ok
// SIG undefined FUN_1498722c8(void)

void FUN_1498722c8(longlong param_1,longlong param_2,char *param_3,longlong param_4,
                  longlong *param_5,undefined4 param_6,longlong *param_7)

{
  float fVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  longlong lVar23;
  int iVar24;
  longlong *plVar25;
  uint uVar26;
  int iVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined1 local_188;
  double local_178;
  double local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  double local_150;
  double local_148;
  double local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  ulonglong local_e0;
  double dVar3;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar32 = *(double *)(param_1 + 0x30) * -1.0;
  dVar8 = *(double *)(param_1 + 0x38) * 1.0;
  dVar2 = *(double *)(param_1 + 0xa8);
  dVar3 = *(double *)(param_1 + 0xa8);
  dVar12 = *(double *)(param_1 + 0x20);
  dVar13 = *(double *)(param_1 + 0x28);
  dVar15 = *(double *)(param_1 + 0xf0);
  dVar16 = *(double *)(param_1 + 0xf8);
  dVar17 = *(double *)(param_1 + 0x100);
  dVar18 = *(double *)(param_1 + 0x108);
  dVar4 = *(double *)(param_1 + 0x90);
  dVar31 = *(double *)(param_1 + 0x90);
  dVar5 = *(double *)(param_1 + 0x98);
  dVar28 = *(double *)(param_1 + 0x98);
  dVar6 = *(double *)(param_1 + 0xa0);
  dVar30 = *(double *)(param_1 + 0xa0);
  dVar29 = (dVar32 * dVar5 + (dVar4 * dVar8 * 1.0 - dVar2 * dVar12)) - dVar13 * dVar6 * -1.0;
  dVar9 = (dVar8 * dVar28 + (dVar31 * dVar32 * -1.0 - dVar3 * dVar13)) - dVar12 * dVar30 * 1.0;
  dVar2 = dVar8 * dVar6 * 1.0 + dVar12 * dVar5 + (dVar32 * dVar2 - dVar4 * dVar13 * 1.0);
  dVar3 = dVar32 * dVar30 * -1.0 + dVar13 * dVar28 + (dVar8 * dVar3 - dVar31 * dVar12 * -1.0);
  dVar5 = dVar16 * dVar2 * -1.0 + dVar17 * dVar9 + dVar18 * dVar29 * 1.0 + dVar15 * dVar3;
  dVar28 = dVar15 * dVar2 * 1.0 + dVar18 * dVar9 + dVar17 * dVar29 * -1.0 + dVar16 * dVar3;
  dVar4 = dVar18 * dVar2 * 1.0 + ((dVar29 * dVar16 * 1.0 + dVar3 * dVar17) - dVar9 * dVar15);
  dVar31 = dVar17 * dVar2 * -1.0 + ((dVar29 * dVar15 * -1.0 + dVar3 * dVar18) - dVar9 * dVar16);
  FUN_144a7484c(param_2 + 0x50,&local_108);
  dVar3 = dStack_100 * dVar4 * -1.0 +
          local_f8 * dVar28 + dStack_f0 * dVar5 * 1.0 + local_108 * dVar31;
  dVar2 = local_108 * dVar4 * 1.0 +
          dStack_f0 * dVar28 + local_f8 * dVar5 * -1.0 + dStack_100 * dVar31;
  dVar6 = dStack_f0 * dVar4 * 1.0 +
          ((dVar5 * dStack_100 * 1.0 + dVar31 * local_f8) - dVar28 * local_108);
  dVar5 = local_f8 * dVar4 * -1.0 +
          ((dVar5 * local_108 * -1.0 + dVar31 * dStack_f0) - dVar28 * dStack_100);
  dVar28 = (double)*(float *)(param_4 + 400);
  lVar7 = *param_7;
  lVar23 = (longlong)*(int *)(param_1 + 0xc0) * 0x60;
  local_178 = *(double *)(lVar7 + 0x30 + lVar23) -
              (DAT_14c846520 - (double)*(float *)(param_4 + 0x194)) * *(double *)(param_4 + 0x108);
  local_170 = *(double *)(lVar7 + 0x20 + lVar23) -
              ((double)CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510) - dVar28) *
              *(double *)(param_4 + 0xf8);
  dVar30 = (double)*(float *)(param_1 + 200);
  dVar32 = *(double *)(lVar7 + 0x28 + lVar23) -
           ((double)CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518) - dVar28) *
           *(double *)(param_4 + 0x100);
  dVar31 = *(double *)(param_1 + 0x88) * dVar30 + local_178;
  dVar4 = *(double *)(param_1 + 0x80) * dVar30 + dVar32;
  dVar30 = dVar30 * *(double *)(param_1 + 0x78) + local_170;
  if (0.0001 < *(float *)(param_2 + 4)) {
    dVar29 = (double)*(float *)(param_2 + 4);
    dVar30 = dVar30 + ((*(double *)(param_4 + 0xf8) * dVar28 + *(double *)(param_1 + 0x60)) - dVar30
                      ) * dVar29 * *(double *)(param_2 + 8);
    dVar4 = dVar4 + ((*(double *)(param_4 + 0x100) * dVar28 + *(double *)(param_1 + 0x68)) - dVar4)
                    * *(double *)(param_2 + 0x10) * dVar29;
    dVar31 = dVar31 + ((*(double *)(param_4 + 0x108) * (double)*(float *)(param_4 + 0x194) +
                       *(double *)(param_1 + 0x70)) - dVar31) * *(double *)(param_2 + 0x18) * dVar29
    ;
  }
  dVar28 = *(double *)(param_2 + 0x38);
  dVar29 = *(double *)(param_2 + 0x40);
  dVar8 = *(double *)(param_2 + 0x48);
  dVar13 = dVar2 * dVar8 - dVar29 * dVar6;
  dVar13 = dVar13 + dVar13;
  dVar9 = dVar3 * dVar29 - dVar28 * dVar2;
  dVar9 = dVar9 + dVar9;
  dVar12 = dVar6 * dVar28 - dVar8 * dVar3;
  dVar12 = dVar12 + dVar12;
  dVar29 = (dVar6 * dVar13 - dVar9 * dVar3) + dVar5 * dVar12 + dVar29 +
           dVar4 + *(double *)(param_2 + 0x28);
  dVar4 = (dVar2 * dVar9 - dVar12 * dVar6) + dVar5 * dVar13 + dVar28 +
          dVar30 + *(double *)(param_2 + 0x20);
  dVar31 = (double)*(float *)(param_2 + 0x68) *
           ((dVar3 * dVar12 - dVar13 * dVar2) + dVar5 * dVar9 + dVar8 +
           dVar31 + *(double *)(param_2 + 0x30));
  if (1e-08 < ABS(*(float *)(param_2 + 0x6c) + -1.0)) {
    dVar28 = (double)*(float *)(param_2 + 0x6c);
    dVar31 = (dVar31 - local_178) * dVar28 + local_178;
    dVar29 = (dVar29 - dVar32) * dVar28 + dVar32;
    dVar4 = (dVar4 - local_170) * dVar28 + local_170;
  }
  if (((*(char *)(param_1 + 400) == '\0') && (*param_3 == '\x01')) &&
     ((int)param_5[1] != *(int *)((longlong)param_5 + 0x34))) {
    lVar7 = *(longlong *)(param_3 + 4);
    uVar14 = (uint)((ulonglong)lVar7 >> 0x10);
    uVar26 = (uint)lVar7 & 0xffff;
    plVar25 = param_5 + 7;
    if ((longlong *)param_5[8] != (longlong *)0x0) {
      plVar25 = (longlong *)param_5[8];
    }
    iVar24 = *(int *)((longlong)plVar25 +
                     (ulonglong)
                     ((int)param_5[9] - 1U &
                     (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar26) +
                     (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar26 >> 4)) * 4);
    if (iVar24 != -1) {
      lVar23 = *param_5;
      iVar27 = iVar24;
      do {
        if (*(longlong *)(lVar23 + (longlong)iVar27 * 0x14) == lVar7) goto LAB_14987298f;
        iVar27 = *(int *)(lVar23 + (longlong)iVar27 * 0x14 + 0xc);
      } while (iVar27 != -1);
    }
  }
  goto LAB_149872818;
  while (iVar24 = *(int *)((longlong)plVar25 + 0xc), iVar24 != -1) {
LAB_14987298f:
    plVar25 = (longlong *)(lVar23 + (longlong)iVar24 * 0x14);
    if (*plVar25 == lVar7) goto LAB_1498729a3;
  }
  plVar25 = (longlong *)0x0;
LAB_1498729a3:
  fVar1 = *(float *)(plVar25 + 1);
  if ((fVar1 < 0.0) || (*(float *)(param_3 + 0xc) <= fVar1 && fVar1 != *(float *)(param_3 + 0xc))) {
    local_190 = &local_120;
    local_120 = 0x3ff0000000000000;
    local_118 = 0x3ff0000000000000;
    local_110 = 0x3ff0000000000000;
    local_198 = &local_138;
    local_138 = 0xbff0000000000000;
    local_130 = 0xbff0000000000000;
    local_128 = 0xbff0000000000000;
    local_1c8 = *(undefined4 *)(param_3 + 0x10);
    local_1c0 = *(undefined4 *)(param_3 + 0x14);
    local_168 = *(undefined4 *)(param_1 + 0x110);
    uStack_164 = *(undefined4 *)(param_1 + 0x114);
    uStack_160 = *(undefined4 *)(param_1 + 0x118);
    uStack_15c = *(undefined4 *)(param_1 + 0x11c);
    local_158 = *(undefined8 *)(param_1 + 0x120);
    local_188 = 0;
    local_1a0 = 0;
    local_1b8 = param_6;
    local_1a8 = 0;
    local_1b0 = 0x3f800000;
    local_150 = dVar4;
    local_148 = dVar29;
    local_140 = dVar31;
    FUN_147b46922(&local_108,&local_168,&local_150,param_1 + 0x198);
    dVar29 = dStack_100;
    dVar31 = local_f8;
    dVar4 = local_108;
  }
  else {
    *(undefined8 *)(param_1 + 0x1c0) = DAT_14c8464f0;
    uVar19 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x1b0) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x1b8) = uVar19;
    uVar19 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x198) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x1a0) = uVar19;
    *(undefined8 *)(param_1 + 0x1a8) = DAT_14c8464f0;
    *(undefined1 *)(param_1 + 0x1c8) = 0;
    dVar29 = *(double *)(param_1 + 0x118);
    dVar31 = *(double *)(param_1 + 0x120);
    dVar4 = *(double *)(param_1 + 0x110);
  }
LAB_149872818:
  *(double *)(param_1 + 0x130) = dVar4;
  *(double *)(param_1 + 0x138) = dVar29;
  *(double *)(param_1 + 0x140) = dVar31;
  auVar10._8_4_ = SUB84(dVar2,0);
  auVar10._0_8_ = dVar3;
  auVar10._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x150) = auVar10;
  auVar11._8_4_ = SUB84(dVar5,0);
  auVar11._0_8_ = dVar6;
  auVar11._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x160) = auVar11;
  uVar22 = DAT_14c846518._4_4_;
  uVar21 = (undefined4)DAT_14c846518;
  uVar20 = DAT_14c846510._4_4_;
  *(undefined4 *)(param_1 + 0x170) = (undefined4)DAT_14c846510;
  *(undefined4 *)(param_1 + 0x174) = uVar20;
  *(undefined4 *)(param_1 + 0x178) = uVar21;
  *(undefined4 *)(param_1 + 0x17c) = uVar22;
  *(double *)(param_1 + 0x180) = DAT_14c846520;
  *(double *)(param_1 + 0x110) = dVar4;
  *(double *)(param_1 + 0x118) = dVar29;
  *(double *)(param_1 + 0x120) = dVar31;
  *(undefined1 *)(param_1 + 400) = 0;
  if ((local_e0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149872aee FUN_149872aee body=1248 status=ok
// SIG undefined FUN_149872aee(void)

undefined8
FUN_149872aee(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             longlong param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140 [2];
  longlong *local_130 [2];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_158 = param_6;
  cVar3 = FUN_149872fd0(param_1,1,param_2);
  if (cVar3 == '\0') {
    local_88 = *(wchar_t **)(*(longlong *)(param_4 + 0x50) + 0x18);
    FUN_1400021e4(&local_88,local_e8);
    FUN_140233b1a(local_d8,local_e8);
    FUN_145715fae(local_f8,param_2);
    local_88 = L"IncompatibleSourceChain";
    local_80[0] = 0x17;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"IKRetargetProcessor";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"IK Retargeter source bone chain, \'{0}\', is not compatible with Skeletal Mesh: \'{1}\'"
                 );
    FUN_14023409e(&local_108,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_f8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_108;
    local_b0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar5 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_80 + lVar5 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar5 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar5) = 0;
      }
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != -0x10);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_100 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
  }
  else {
    local_158 = param_6;
    cVar3 = FUN_149872fd0(param_1,0,param_3,param_5);
    if (cVar3 != '\0') {
      *(undefined8 *)(param_1 + 0x28) = *param_2;
      uVar4 = *param_3;
      *(undefined8 *)(param_1 + 0x30) = uVar4;
      uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      goto LAB_149872db6;
    }
    local_88 = *(wchar_t **)(*(longlong *)(param_5 + 0x50) + 0x18);
    FUN_1400021e4(&local_88,local_e8);
    FUN_140233b1a(local_130,local_e8);
    FUN_145715fae(local_140,param_3);
    local_88 = L"IncompatibleTargetChain";
    local_80[0] = 0x17;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"IKRetargetProcessor";
    local_80[0] = 0x13;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"IK Retargeter target bone chain, \'{0}\', is not compatible with Skeletal Mesh: \'{1}\'"
                 );
    FUN_14023409e(&local_150,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_140);
    local_68 = 4;
    FUN_14023423e(local_58,local_130);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_150;
    local_b0 = local_148;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_148 + 1) = (int)local_148[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar5 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_80 + lVar5 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar5 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar5) = 0;
      }
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != -0x10);
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_148 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_148 + 0x10))(local_148);
        }
      }
    }
    local_d8[0] = local_130[0];
    if (local_140[0] != (longlong *)0x0) {
      (**(code **)(*local_140[0] + 0x10))();
      local_d8[0] = local_130[0];
    }
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  FUN_14986922e(param_6,local_c8);
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  uVar4 = 0;
LAB_149872db6:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 149872fd0 FUN_149872fd0 body=2136 status=ok
// SIG undefined FUN_149872fd0(void)

char FUN_149872fd0(longlong param_1,byte param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  longlong *local_1d0;
  longlong *local_1c8 [2];
  longlong *local_1b8 [2];
  longlong *local_1a8 [2];
  undefined8 local_198;
  longlong *local_190;
  longlong *local_188 [2];
  longlong *local_178 [2];
  longlong *local_168 [2];
  undefined1 local_158 [4];
  undefined1 local_154 [4];
  longlong *local_150 [2];
  undefined8 local_140;
  longlong *local_138;
  longlong *local_130 [2];
  longlong *local_120 [2];
  longlong *local_110 [2];
  longlong *local_100 [2];
  longlong *local_f0 [2];
  char local_db;
  byte local_da;
  char local_d9;
  undefined8 local_d8;
  longlong *local_d0;
  wchar_t **local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0 [2];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_14986c702(&local_db,param_3,param_4,param_1 + (ulonglong)(param_2 ^ 1) * 0x10 + 8);
  if (local_db == '\0') {
    local_a8 = *(wchar_t **)(*(longlong *)(param_4 + 0x50) + 0x18);
    FUN_1400021e4(&local_a8,local_110);
    FUN_140233b1a(local_100,local_110);
    FUN_145715fae(local_120,param_3 + 8);
    FUN_145715fae(local_130,param_3);
    local_a8 = L"MissingStartBone";
    local_a0[0] = 0x10;
    FUN_1446e940c(local_154,&local_a8);
    local_a8 = L"IKRetargetProcessor";
    local_a0[0] = 0x13;
    FUN_1446e940c(local_158,&local_a8);
    FUN_140208bae(local_150,local_158,local_154,
                  L"IK Retargeter bone chain, {0}, could not find start bone, {1} in mesh {2}");
    FUN_14023409e(&local_140,local_150,1);
    local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
    FUN_14023423e(local_98,local_130);
    local_88 = 4;
    FUN_14023423e(local_78,local_120);
    local_68 = 4;
    FUN_14023423e(local_58,local_100);
    local_c0 = &local_48;
    local_c8 = &local_a8;
    FUN_14010d304(&local_b8);
    local_d8 = local_140;
    local_d0 = local_138;
    if (local_138 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_138 + 1) = (int)local_138[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_f0,&local_d8,&local_b8);
    FUN_14007f2db(local_b8,local_b0);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x50;
    do {
      plVar2 = *(longlong **)((longlong)local_a0 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_a0 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_a0 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_138 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar1 = (int *)((longlong)local_138 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_138 + 0x10))(local_138);
        }
      }
    }
    if (local_130[0] != (longlong *)0x0) {
      (**(code **)(*local_130[0] + 0x10))();
    }
    if (local_120[0] != (longlong *)0x0) {
      (**(code **)(*local_120[0] + 0x10))();
    }
    if (local_100[0] != (longlong *)0x0) {
      (**(code **)(*local_100[0] + 0x10))();
    }
    FUN_14986922e(param_5,local_f0);
    if (local_f0[0] != (longlong *)0x0) {
      (**(code **)(*local_f0[0] + 0x10))();
    }
    if (local_150[0] != (longlong *)0x0) {
      (**(code **)(*local_150[0] + 0x10))();
    }
    if (local_110[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_da == 0) {
    local_a8 = *(wchar_t **)(*(longlong *)(param_4 + 0x50) + 0x18);
    FUN_1400021e4(&local_a8,local_110);
    FUN_140233b1a(local_168,local_110);
    FUN_145715fae(local_178,param_3 + 0x18);
    FUN_145715fae(local_188,param_3);
    local_a8 = L"MissingEndBone";
    local_a0[0] = 0xe;
    FUN_1446e940c(local_154,&local_a8);
    local_a8 = L"IKRetargetProcessor";
    local_a0[0] = 0x13;
    FUN_1446e940c(local_158,&local_a8);
    FUN_140208bae(local_150,local_158,local_154,
                  L"IK Retargeter bone chain, {0}, could not find end bone, {1} in mesh {2}");
    FUN_14023409e(&local_198,local_150,1);
    local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
    FUN_14023423e(local_98,local_188);
    local_88 = 4;
    FUN_14023423e(local_78,local_178);
    local_68 = 4;
    FUN_14023423e(local_58,local_168);
    local_c0 = &local_48;
    local_c8 = &local_a8;
    FUN_14010d304(&local_b8);
    local_d8 = local_198;
    local_d0 = local_190;
    if (local_190 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_190 + 1) = (int)local_190[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_f0,&local_d8,&local_b8);
    FUN_14007f2db(local_b8,local_b0);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x50;
    do {
      plVar2 = *(longlong **)((longlong)local_a0 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_a0 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_a0 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_190 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar1 = (int *)((longlong)local_190 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_190 + 0x10))(local_190);
        }
      }
    }
    if (local_188[0] != (longlong *)0x0) {
      (**(code **)(*local_188[0] + 0x10))();
    }
    if (local_178[0] != (longlong *)0x0) {
      (**(code **)(*local_178[0] + 0x10))();
    }
    if (local_168[0] != (longlong *)0x0) {
      (**(code **)(*local_168[0] + 0x10))();
    }
    FUN_14986922e(param_5,local_f0);
    if (local_f0[0] != (longlong *)0x0) {
      (**(code **)(*local_f0[0] + 0x10))();
    }
    if (local_150[0] != (longlong *)0x0) {
      (**(code **)(*local_150[0] + 0x10))();
    }
    if (local_110[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (((local_da & 1) != 0) && (local_d9 == '\0')) {
    FUN_145715fae(local_1a8,param_3 + 8);
    FUN_145715fae(local_1b8,param_3 + 0x18);
    FUN_145715fae(local_1c8,param_3);
    local_a8 = L"EndNotChildtOfStart";
    local_a0[0] = 0x13;
    FUN_1446e940c(local_150,&local_a8);
    local_a8 = L"IKRetargetProcessor";
    local_a0[0] = 0x13;
    FUN_1446e940c(local_154,&local_a8);
    FUN_140208bae(local_110,local_154,local_150,
                  L"IK Retargeter bone chain, {0}, end bone, \'{1}\' was not a child of the start bone \'{2}\'."
                 );
    FUN_14023409e(&local_1d8,local_110,1);
    local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
    FUN_14023423e(local_98,local_1c8);
    local_88 = 4;
    FUN_14023423e(local_78,local_1b8);
    local_68 = 4;
    FUN_14023423e(local_58,local_1a8);
    local_c0 = &local_48;
    local_c8 = &local_a8;
    FUN_14010d304(&local_b8);
    local_d8 = local_1d8;
    local_d0 = local_1d0;
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_f0,&local_d8,&local_b8);
    FUN_14007f2db(local_b8,local_b0);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x50;
    do {
      plVar2 = *(longlong **)((longlong)local_a0 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_a0 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_a0 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_1d0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar1 = (int *)((longlong)local_1d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1d0 + 0x10))(local_1d0);
        }
      }
    }
    if (local_1c8[0] != (longlong *)0x0) {
      (**(code **)(*local_1c8[0] + 0x10))();
    }
    if (local_1b8[0] != (longlong *)0x0) {
      (**(code **)(*local_1b8[0] + 0x10))();
    }
    if (local_1a8[0] != (longlong *)0x0) {
      (**(code **)(*local_1a8[0] + 0x10))();
    }
    FUN_14986922e(param_5,local_f0);
    if (local_f0[0] != (longlong *)0x0) {
      (**(code **)(*local_f0[0] + 0x10))();
    }
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
  }
  if ((local_db != '\x01') || (local_da != 1)) {
    local_d9 = '\0';
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_d9;
}



// FUNCTION 14987382a FUN_14987382a body=1333 status=ok
// SIG undefined FUN_14987382a(void)

undefined8
FUN_14987382a(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             longlong param_5,longlong param_6)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140 [2];
  longlong *local_130 [2];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_160 = param_6;
  local_168 = param_5;
  cVar3 = FUN_149872aee();
  if (cVar3 != '\0') {
    local_168 = param_6;
    cVar3 = FUN_14986de7e(param_1 + 0x60,param_4,param_1 + 8,param_4 + 0x30);
    if (cVar3 == '\0') {
      local_88 = *(wchar_t **)(*(longlong *)(param_4 + 0x50) + 0x18);
      FUN_1400021e4(&local_88,local_e8);
      FUN_140233b1a(local_d8,local_e8);
      FUN_145715fae(local_f8,param_1 + 0x28);
      local_88 = L"BadFKEncoder";
      local_80[0] = 0xc;
      FUN_1446e940c(local_11c,&local_88);
      local_88 = L"IKRetargetProcessor";
      local_80[0] = 0x13;
      FUN_1446e940c(local_120,&local_88);
      FUN_140208bae(local_118,local_120,local_11c,
                    L"IK Retargeter failed to initialize FK encoder, \'{0}\', on Skeletal Mesh: \'{1}\'"
                   );
      FUN_14023409e(&local_108,local_118,1);
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
      FUN_14023423e(local_78,local_f8);
      local_68 = 4;
      FUN_14023423e(local_58,local_d8);
      local_a0 = &local_48;
      local_a8 = &local_88;
      FUN_14010d304(&local_98);
      local_b8 = local_108;
      local_b0 = local_100;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_100 + 1) = (int)local_100[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_c8,&local_b8,&local_98);
      FUN_14007f2db(local_98,local_90);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      lVar5 = 0x30;
      do {
        plVar2 = *(longlong **)((longlong)local_80 + lVar5 + -8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))();
          *(undefined8 *)((longlong)local_80 + lVar5 + -8) = 0;
          *(undefined4 *)((longlong)local_80 + lVar5) = 0;
        }
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != -0x10);
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_100 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar1 = (int *)((longlong)local_100 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_100 + 0x10))(local_100);
          }
        }
      }
      if (local_f8[0] != (longlong *)0x0) {
        (**(code **)(*local_f8[0] + 0x10))();
      }
    }
    else {
      local_168 = param_6;
      cVar3 = FUN_14986de7e(param_1 + 400,param_5,param_1 + 0x18,param_5 + 0x30);
      if (cVar3 != '\0') {
        local_160 = param_5;
        local_168 = param_5 + 0x30;
        FUN_149873d60(param_1 + 0x260,param_1 + 8,param_1 + 0x18,param_4 + 0x30);
        uVar4 = 1;
        goto LAB_14987387a;
      }
      local_88 = *(wchar_t **)(*(longlong *)(param_5 + 0x50) + 0x18);
      FUN_1400021e4(&local_88,local_e8);
      FUN_140233b1a(local_130,local_e8);
      FUN_145715fae(local_140,param_1 + 0x30);
      local_88 = L"BadFKDecoder";
      local_80[0] = 0xc;
      FUN_1446e940c(local_11c,&local_88);
      local_88 = L"IKRetargetProcessor";
      local_80[0] = 0x13;
      FUN_1446e940c(local_120,&local_88);
      FUN_140208bae(local_118,local_120,local_11c,
                    L"IK Retargeter failed to initialize FK decoder, \'{0}\', on Skeletal Mesh: \'{1}\'"
                   );
      FUN_14023409e(&local_150,local_118,1);
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
      FUN_14023423e(local_78,local_140);
      local_68 = 4;
      FUN_14023423e(local_58,local_130);
      local_a0 = &local_48;
      local_a8 = &local_88;
      FUN_14010d304(&local_98);
      local_b8 = local_150;
      local_b0 = local_148;
      if (local_148 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_148 + 1) = (int)local_148[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_c8,&local_b8,&local_98);
      FUN_14007f2db(local_98,local_90);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      lVar5 = 0x30;
      do {
        plVar2 = *(longlong **)((longlong)local_80 + lVar5 + -8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))();
          *(undefined8 *)((longlong)local_80 + lVar5 + -8) = 0;
          *(undefined4 *)((longlong)local_80 + lVar5) = 0;
        }
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != -0x10);
      if (local_148 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_148 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar1 = (int *)((longlong)local_148 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_148 + 0x10))(local_148);
          }
        }
      }
      local_d8[0] = local_130[0];
      if (local_140[0] != (longlong *)0x0) {
        (**(code **)(*local_140[0] + 0x10))();
        local_d8[0] = local_130[0];
      }
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    FUN_14986922e(param_6,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_118[0] != (longlong *)0x0) {
      (**(code **)(*local_118[0] + 0x10))();
    }
    if (local_e8[0] != 0) {
      FUN_1400020a8();
    }
  }
  uVar4 = 0;
LAB_14987387a:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 149873d60 FUN_149873d60 body=525 status=ok
// SIG undefined FUN_149873d60(void)

void FUN_149873d60(undefined4 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  int local_90;
  undefined1 local_88 [16];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = FUN_1498751ce(param_2,param_4);
  *param_1 = uVar5;
  uVar5 = FUN_1498751ce(param_3,param_5);
  param_1[1] = uVar5;
  FUN_1498752f0(&local_60,param_1,param_2,param_4);
  FUN_1498752f0(&local_78,param_1 + 1,param_3,param_5);
  dVar9 = local_68 * local_50 + local_78 * local_60 + local_70 * local_58;
  dVar10 = dVar9;
  if (1.0 <= dVar9) {
    dVar10 = 1.0;
  }
  dVar10 = acos((double)(-(ulonglong)(dVar9 < -1.0) & 0xbff0000000000000 |
                        ~-(ulonglong)(dVar9 < -1.0) & (ulonglong)dVar10));
  param_1[2] = (float)dVar10;
  local_88 = ZEXT416(0);
  FUN_14986dcd2(param_6,*(undefined4 *)*param_3);
  uVar5 = *(undefined4 *)(*param_3 + (longlong)((int)param_3[1] + -1) * 4);
  local_98 = (undefined4 *)0x0;
  local_90 = 1;
  FUN_144a06ca8(&local_98,1,0);
  *local_98 = uVar5;
  FUN_14986dcd2(param_6,*(undefined4 *)(*param_3 + (longlong)((int)param_3[1] + -1) * 4),&local_98);
  plVar1 = (longlong *)(param_1 + 4);
  param_1[6] = 0;
  if ((int)param_1[7] < 0) {
    FUN_14481578e(plVar1);
  }
  if ((longlong)(int)local_88._8_4_ != 0) {
    piVar2 = (int *)(local_88._0_8_ + (longlong)(int)local_88._8_4_ * 4);
    piVar8 = (int *)local_88._0_8_;
    do {
      iVar3 = *piVar8;
      if ((longlong)local_90 != 0) {
        lVar7 = 0;
        do {
          if (*(int *)((longlong)local_98 + lVar7) == iVar3) goto LAB_149873f1f;
          lVar7 = lVar7 + 4;
        } while ((longlong)local_90 * 4 != lVar7);
      }
      iVar4 = param_1[6];
      uVar6 = iVar4 + 1;
      param_1[6] = uVar6;
      if ((uint)param_1[7] < uVar6) {
        FUN_1446f48e2(plVar1);
      }
      *(int *)(*plVar1 + (longlong)iVar4 * 4) = iVar3;
LAB_149873f1f:
      piVar8 = piVar8 + 1;
    } while (piVar8 != piVar2);
  }
  if (local_98 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88._0_8_ != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149873f6e FUN_149873f6e body=1336 status=ok
// SIG undefined FUN_149873f6e(void)

undefined8
FUN_149873f6e(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,longlong param_5
             ,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_188 [32];
  longlong local_168;
  undefined8 local_160;
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140 [2];
  longlong *local_130 [2];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*(longlong *)(param_3 + 0x28) != 0) &&
     (cVar3 = FUN_144709e00(*(longlong *)(param_3 + 0x28),"- None -"), cVar3 == '\0')) {
    *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_3 + 0x28);
    local_160 = param_6;
    local_168 = param_5;
    cVar3 = FUN_149872aee(param_1,param_2,param_3,param_4);
    if (cVar3 != '\0') {
      cVar3 = FUN_149871d64(param_1 + 0xd0,param_1 + 8,param_4 + 0x30,param_6);
      if (cVar3 == '\0') {
        local_88 = *(wchar_t **)(*(longlong *)(param_4 + 0x50) + 0x18);
        FUN_1400021e4(&local_88,local_e8);
        FUN_140233b1a(local_d8,local_e8);
        FUN_145715fae(local_f8,param_1 + 0x28);
        local_88 = L"BadIKEncoder";
        local_80[0] = 0xc;
        FUN_1446e940c(local_11c,&local_88);
        local_88 = L"IKRetargetProcessor";
        local_80[0] = 0x13;
        FUN_1446e940c(local_120,&local_88);
        FUN_140208bae(local_118,local_120,local_11c,
                      L"IK Retargeter failed to initialize IK encoder, \'{0}\', on Skeletal Mesh: \'{1}\'"
                     );
        FUN_14023409e(&local_108,local_118,1);
        local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
        FUN_14023423e(local_78,local_f8);
        local_68 = 4;
        FUN_14023423e(local_58,local_d8);
        local_a0 = &local_48;
        local_a8 = &local_88;
        FUN_14010d304(&local_98);
        local_b8 = local_108;
        local_b0 = local_100;
        if (local_100 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_100 + 1) = (int)local_100[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_c8,&local_b8,&local_98);
        FUN_14007f2db(local_98,local_90);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        lVar5 = 0x30;
        do {
          plVar2 = *(longlong **)((longlong)local_80 + lVar5 + -8);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))();
            *(undefined8 *)((longlong)local_80 + lVar5 + -8) = 0;
            *(undefined4 *)((longlong)local_80 + lVar5) = 0;
          }
          lVar5 = lVar5 + -0x20;
        } while (lVar5 != -0x10);
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_100 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar1 = (int *)((longlong)local_100 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_100 + 0x10))(local_100);
            }
          }
        }
        if (local_f8[0] != (longlong *)0x0) {
          (**(code **)(*local_f8[0] + 0x10))();
        }
      }
      else {
        cVar3 = FUN_1498720a8(param_1 + 0xd0,param_1 + 0x18,param_5 + 0x30,param_6);
        uVar4 = 1;
        if (cVar3 != '\0') goto LAB_149873fba;
        local_88 = *(wchar_t **)(*(longlong *)(param_5 + 0x50) + 0x18);
        FUN_1400021e4(&local_88,local_e8);
        FUN_140233b1a(local_130,local_e8);
        FUN_145715fae(local_140,param_1 + 0x30);
        local_88 = L"BadIKDecoder";
        local_80[0] = 0xc;
        FUN_1446e940c(local_11c,&local_88);
        local_88 = L"IKRetargetProcessor";
        local_80[0] = 0x13;
        FUN_1446e940c(local_120,&local_88);
        FUN_140208bae(local_118,local_120,local_11c,
                      L"IK Retargeter failed to initialize IK decoder, \'{0}\', on Skeletal Mesh: \'{1}\'"
                     );
        FUN_14023409e(&local_150,local_118,1);
        local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
        FUN_14023423e(local_78,local_140);
        local_68 = 4;
        FUN_14023423e(local_58,local_130);
        local_a0 = &local_48;
        local_a8 = &local_88;
        FUN_14010d304(&local_98);
        local_b8 = local_150;
        local_b0 = local_148;
        if (local_148 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_148 + 1) = (int)local_148[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_c8,&local_b8,&local_98);
        FUN_14007f2db(local_98,local_90);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        lVar5 = 0x30;
        do {
          plVar2 = *(longlong **)((longlong)local_80 + lVar5 + -8);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))();
            *(undefined8 *)((longlong)local_80 + lVar5 + -8) = 0;
            *(undefined4 *)((longlong)local_80 + lVar5) = 0;
          }
          lVar5 = lVar5 + -0x20;
        } while (lVar5 != -0x10);
        if (local_148 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_148 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_148)(local_148);
            LOCK();
            piVar1 = (int *)((longlong)local_148 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_148 + 0x10))(local_148);
            }
          }
        }
        local_d8[0] = local_130[0];
        if (local_140[0] != (longlong *)0x0) {
          (**(code **)(*local_140[0] + 0x10))();
          local_d8[0] = local_130[0];
        }
      }
      if (local_d8[0] != (longlong *)0x0) {
        (**(code **)(*local_d8[0] + 0x10))();
      }
      FUN_14986922e(param_6,local_c8);
      if (local_c8[0] != (longlong *)0x0) {
        (**(code **)(*local_c8[0] + 0x10))();
      }
      if (local_118[0] != (longlong *)0x0) {
        (**(code **)(*local_118[0] + 0x10))();
      }
      if (local_e8[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  uVar4 = 0;
LAB_149873fba:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1498744a8 FUN_1498744a8 body=959 status=ok
// SIG undefined FUN_1498744a8(void)

undefined8 FUN_1498744a8(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auStack_148 [32];
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  longlong *local_120 [2];
  undefined8 local_110;
  longlong *local_108;
  longlong *local_100 [2];
  longlong local_f0 [2];
  longlong *local_e0 [2];
  longlong *local_d0 [2];
  longlong local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_1 = param_2;
  local_c0 = param_2;
  if ((longlong)(int)param_3[1] != 0) {
    lVar8 = (longlong)(int)param_3[1] << 3;
    lVar11 = 0;
    lVar10 = 0;
    do {
      if (*(longlong *)(*param_3 + lVar11 * 8) == param_2) {
        *(int *)(param_1 + 1) = (int)lVar11;
        if ((int)lVar11 == -1) goto LAB_14987451a;
        lVar8 = param_3[6];
        lVar11 = (lVar10 >> 0x20) * 0x60;
        lVar10 = ((longlong *)(lVar8 + lVar11))[1];
        puVar2 = (undefined4 *)(lVar8 + 0x10 + lVar11);
        uVar4 = *puVar2;
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        fVar12 = (float)*(double *)(lVar8 + 0x30 + lVar11);
        param_1[2] = *(longlong *)(lVar8 + lVar11);
        param_1[3] = lVar10;
        *(undefined4 *)(param_1 + 4) = uVar4;
        *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
        *(undefined4 *)(param_1 + 5) = uVar6;
        *(undefined4 *)((longlong)param_1 + 0x2c) = uVar7;
        if (fVar12 < 0.0001) {
          local_88 = L"BadRootHeight";
          local_80[0] = 0xd;
          FUN_1446e940c(&local_98,&local_88);
          local_88 = L"IKRetargetProcessor";
          local_80[0] = 0x13;
          FUN_1446e940c(&local_a8,&local_88);
          FUN_140208bae(&local_88,&local_a8,&local_98,
                        L"The source retarget root bone is very near the ground plane. This will cause the target to be moved very far. To resolve this, please create a retarget pose with the retarget root at the correct height off the ground."
                       );
          FUN_149869152(param_4,&local_88);
          if (local_88 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_88 + 0x10))();
          }
          fVar12 = 1.0;
        }
        *(float *)(param_1 + 6) = 1.0 / fVar12;
        uVar9 = 1;
        goto LAB_1498747a2;
      }
      lVar10 = lVar10 + 0x100000000;
      lVar11 = lVar11 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
LAB_14987451a:
  local_88 = *(wchar_t **)(param_3[10] + 0x18);
  FUN_1400021e4(&local_88,local_f0);
  FUN_140233b1a(local_e0,local_f0);
  FUN_145715fae(local_100,&local_c0);
  local_88 = L"MissingSourceRoot";
  local_80[0] = 0x11;
  FUN_1446e940c(local_124,&local_88);
  local_88 = L"IKRetargetProcessor";
  local_80[0] = 0x13;
  FUN_1446e940c(local_128,&local_88);
  FUN_140208bae(local_120,local_128,local_124,
                L"IK Retargeter could not find source root bone, {0} in mesh {1}");
  FUN_14023409e(&local_110,local_120,1);
  local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
  FUN_14023423e(local_78,local_100);
  local_68 = 4;
  FUN_14023423e(local_58,local_e0);
  local_a0 = &local_48;
  local_a8 = &local_88;
  FUN_14010d304(&local_98);
  local_b8 = local_110;
  local_b0 = local_108;
  if (local_108 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_108 + 1) = (int)local_108[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_d0,&local_b8,&local_98);
  FUN_14007f2db(local_98,local_90);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  lVar8 = 0x30;
  do {
    plVar3 = *(longlong **)((longlong)local_80 + lVar8 + -8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      *(undefined8 *)((longlong)local_80 + lVar8 + -8) = 0;
      *(undefined4 *)((longlong)local_80 + lVar8) = 0;
    }
    lVar8 = lVar8 + -0x20;
  } while (lVar8 != -0x10);
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_108 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)local_108 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_108 + 0x10))(local_108);
      }
    }
  }
  if (local_100[0] != (longlong *)0x0) {
    (**(code **)(*local_100[0] + 0x10))();
  }
  if (local_e0[0] != (longlong *)0x0) {
    (**(code **)(*local_e0[0] + 0x10))();
  }
  FUN_14986922e(param_4,local_d0);
  if (local_d0[0] != (longlong *)0x0) {
    (**(code **)(*local_d0[0] + 0x10))();
  }
  if (local_120[0] != (longlong *)0x0) {
    (**(code **)(*local_120[0] + 0x10))();
  }
  if (local_f0[0] != 0) {
    FUN_1400020a8();
  }
  uVar9 = 0;
LAB_1498747a2:
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149874868 FUN_149874868 body=862 status=ok
// SIG undefined FUN_149874868(void)

undefined8 FUN_149874868(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  double dVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auStack_148 [32];
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  longlong *local_120 [2];
  undefined8 local_110;
  longlong *local_108;
  longlong *local_100 [2];
  longlong local_f0 [2];
  longlong *local_e0 [2];
  longlong *local_d0 [2];
  longlong local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *(longlong *)(param_1 + 0xa0) = param_2;
  local_c0 = param_2;
  if ((longlong)(int)param_3[1] != 0) {
    lVar10 = (longlong)(int)param_3[1] << 3;
    lVar13 = 0;
    lVar12 = 0;
    do {
      if (*(longlong *)(*param_3 + lVar13 * 8) == param_2) {
        *(int *)(param_1 + 0xa8) = (int)lVar13;
        if ((int)lVar13 == -1) goto LAB_1498748df;
        lVar10 = param_3[6];
        lVar12 = (lVar12 >> 0x20) * 0x60;
        uVar11 = *(undefined8 *)(lVar10 + lVar12);
        uVar5 = ((undefined8 *)(lVar10 + lVar12))[1];
        puVar2 = (undefined8 *)(lVar10 + 0x10 + lVar12);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        puVar2 = (undefined8 *)(lVar10 + 0x20 + lVar12);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        dVar3 = *(double *)(lVar10 + 0x30 + lVar12);
        fVar14 = (float)dVar3;
        *(float *)(param_1 + 0xf0) = fVar14;
        *(undefined8 *)(param_1 + 0xd0) = uVar11;
        *(undefined8 *)(param_1 + 0xd8) = uVar5;
        *(undefined8 *)(param_1 + 0xe0) = uVar6;
        *(undefined8 *)(param_1 + 0xe8) = uVar7;
        *(undefined8 *)(param_1 + 0xb0) = uVar8;
        *(undefined8 *)(param_1 + 0xb8) = uVar9;
        *(double *)(param_1 + 0xc0) = dVar3;
        dVar3 = (double)(fVar14 * *(float *)(param_1 + 0x30));
        *(double *)(param_1 + 0x198) = dVar3;
        *(double *)(param_1 + 0x1a0) = dVar3;
        *(double *)(param_1 + 0x1a8) = dVar3;
        uVar11 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
        goto LAB_149874b99;
      }
      lVar12 = lVar12 + 0x100000000;
      lVar13 = lVar13 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
LAB_1498748df:
  local_88 = *(wchar_t **)(param_3[10] + 0x18);
  FUN_1400021e4(&local_88,local_f0);
  FUN_140233b1a(local_e0,local_f0);
  FUN_145715fae(local_100,&local_c0);
  local_88 = L"CountNotFindRootBone";
  local_80[0] = 0x14;
  FUN_1446e940c(local_124,&local_88);
  local_88 = L"IKRetargetProcessor";
  local_80[0] = 0x13;
  FUN_1446e940c(local_128,&local_88);
  FUN_140208bae(local_120,local_128,local_124,
                L"IK Retargeter could not find target root bone, {0} in mesh {1}");
  FUN_14023409e(&local_110,local_120,1);
  local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
  FUN_14023423e(local_78,local_100);
  local_68 = 4;
  FUN_14023423e(local_58,local_e0);
  local_a0 = &local_48;
  local_a8 = &local_88;
  FUN_14010d304(&local_98);
  local_b8 = local_110;
  local_b0 = local_108;
  if (local_108 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_108 + 1) = (int)local_108[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_d0,&local_b8,&local_98);
  FUN_14007f2db(local_98,local_90);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  lVar10 = 0x30;
  do {
    plVar4 = *(longlong **)((longlong)local_80 + lVar10 + -8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
      *(undefined8 *)((longlong)local_80 + lVar10 + -8) = 0;
      *(undefined4 *)((longlong)local_80 + lVar10) = 0;
    }
    lVar10 = lVar10 + -0x20;
  } while (lVar10 != -0x10);
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_108 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)local_108 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_108 + 0x10))(local_108);
      }
    }
  }
  if (local_100[0] != (longlong *)0x0) {
    (**(code **)(*local_100[0] + 0x10))();
  }
  if (local_e0[0] != (longlong *)0x0) {
    (**(code **)(*local_e0[0] + 0x10))();
  }
  FUN_14986922e(param_4,local_d0);
  if (local_d0[0] != (longlong *)0x0) {
    (**(code **)(*local_d0[0] + 0x10))();
  }
  if (local_120[0] != (longlong *)0x0) {
    (**(code **)(*local_120[0] + 0x10))();
  }
  if (local_f0[0] != 0) {
    FUN_1400020a8();
  }
  uVar11 = 0;
LAB_149874b99:
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149874bc8 FUN_149874bc8 body=1541 status=ok
// SIG undefined FUN_149874bc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149874bc8(longlong param_1,longlong *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  ulonglong uVar13;
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
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_108 [32];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar14 = (double)*(float *)(param_1 + 0xf0);
  dVar21 = *(double *)(param_1 + 0x78) * dVar14;
  dVar22 = *(double *)(param_1 + 0x70) * dVar14;
  dVar14 = dVar14 * *(double *)(param_1 + 0x68);
  dVar25 = (double)*(float *)(param_1 + 0x138);
  dVar2 = *(double *)(param_1 + 0xc0);
  dVar24 = *(double *)(param_1 + 0xb8);
  dVar3 = *(double *)(param_1 + 0xb0);
  dVar23 = (double)*(float *)(param_1 + 0x134);
  dVar2 = ((((double)*(float *)(param_1 + 0x15c) *
             ((*(double *)(param_1 + 0x60) - dVar21) * *(double *)(param_1 + 0x150) * dVar25 +
             dVar21) - dVar2) + dVar2 + *(double *)(param_1 + 0x170)) - dVar2) * dVar23 + dVar2;
  dVar24 = (((((*(double *)(param_1 + 0x58) - dVar22) * *(double *)(param_1 + 0x148) * dVar25 +
              dVar22) - dVar24) * (double)*(float *)(param_1 + 0x158) + dVar24 +
            *(double *)(param_1 + 0x168)) - dVar24) * dVar23 + dVar24;
  dVar3 = (((((*(double *)(param_1 + 0x50) - dVar14) * dVar25 * *(double *)(param_1 + 0x140) +
             dVar14) - dVar3) * (double)*(float *)(param_1 + 0x158) + dVar3 +
           *(double *)(param_1 + 0x160)) - dVar3) * dVar23 + dVar3;
  *(double *)(param_1 + 0xf8) = dVar3 - dVar14;
  *(double *)(param_1 + 0x100) = dVar24 - dVar22;
  *(double *)(param_1 + 0x108) = dVar2 - dVar21;
  dVar15 = *(double *)(param_1 + 0x20) * -1.0;
  dVar18 = *(double *)(param_1 + 0x28) * 1.0;
  dVar23 = *(double *)(param_1 + 0x98);
  dVar14 = *(double *)(param_1 + 0x98);
  dVar8 = *(double *)(param_1 + 0x10);
  dVar9 = *(double *)(param_1 + 0x18);
  dVar20 = *(double *)(param_1 + 0xd0);
  dVar28 = *(double *)(param_1 + 0xd8);
  dVar10 = *(double *)(param_1 + 0xe0);
  dVar11 = *(double *)(param_1 + 0xe8);
  dVar21 = *(double *)(param_1 + 0x80);
  dVar22 = *(double *)(param_1 + 0x80);
  dVar25 = *(double *)(param_1 + 0x88);
  dVar4 = *(double *)(param_1 + 0x88);
  dVar5 = *(double *)(param_1 + 0x90);
  dVar17 = *(double *)(param_1 + 0x90);
  dVar16 = (dVar15 * dVar25 + (dVar21 * dVar18 * 1.0 - dVar23 * dVar8)) - dVar9 * dVar5 * -1.0;
  dVar19 = (dVar18 * dVar4 + (dVar22 * dVar15 * -1.0 - dVar14 * dVar9)) - dVar8 * dVar17 * 1.0;
  dVar23 = dVar18 * dVar5 * 1.0 + dVar8 * dVar25 + (dVar15 * dVar23 - dVar21 * dVar9 * 1.0);
  dVar14 = dVar15 * dVar17 * -1.0 + dVar9 * dVar4 + (dVar18 * dVar14 - dVar22 * dVar8 * -1.0);
  dVar22 = dVar28 * dVar23 * -1.0 + dVar10 * dVar19 + dVar11 * dVar16 * 1.0 + dVar20 * dVar14;
  dVar25 = dVar20 * dVar23 * 1.0 + dVar11 * dVar19 + dVar10 * dVar16 * -1.0 + dVar28 * dVar14;
  dVar4 = dVar11 * dVar23 * 1.0 + ((dVar16 * dVar28 * 1.0 + dVar14 * dVar10) - dVar19 * dVar20);
  dVar5 = dVar10 * dVar23 * -1.0 + ((dVar16 * dVar20 * -1.0 + dVar14 * dVar11) - dVar19 * dVar28);
  FUN_144a7484c(param_1 + 0x178,&local_e8);
  dVar14 = dStack_e0 * dVar4 * -1.0 +
           local_d8 * dVar25 + dStack_d0 * dVar22 * 1.0 + local_e8 * dVar5;
  dVar21 = local_e8 * dVar4 * 1.0 +
           dStack_d0 * dVar25 + local_d8 * dVar22 * -1.0 + dStack_e0 * dVar5;
  dVar17 = dStack_d0 * dVar4 * 1.0 +
           ((dStack_e0 * dVar22 * 1.0 + local_d8 * dVar5) - local_e8 * dVar25);
  dVar20 = local_d8 * dVar4 * -1.0 +
           ((local_e8 * dVar22 * -1.0 + dStack_d0 * dVar5) - dStack_e0 * dVar25);
  dVar23 = (double)*(float *)(param_1 + 0x130);
  uVar13 = -(ulonglong)
            (0.0 <= dVar20 * *(double *)(param_1 + 0xe8) +
                    *(double *)(param_1 + 0xe0) * dVar17 +
                    *(double *)(param_1 + 0xd0) * dVar14 + dVar21 * *(double *)(param_1 + 0xd8));
  dVar28 = (double)(~uVar13 & (ulonglong)-(1.0 - dVar23) | (ulonglong)(1.0 - dVar23) & uVar13);
  dVar8 = *(double *)(param_1 + 0xd0);
  dVar9 = *(double *)(param_1 + 0xd8);
  dVar14 = dVar8 * dVar28 + dVar14 * dVar23;
  dVar21 = dVar9 * dVar28 + dVar21 * dVar23;
  dVar17 = dVar28 * *(double *)(param_1 + 0xe0) + dVar17 * dVar23;
  dVar23 = dVar28 * *(double *)(param_1 + 0xe8) + dVar20 * dVar23;
  dVar20 = dVar17 * dVar17 + dVar14 * dVar14;
  dVar28 = dVar23 * dVar23 + dVar21 * dVar21;
  auVar29._0_8_ = dVar20 + dVar28;
  auVar29._8_8_ = dVar20 + dVar28;
  auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
  auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
  auVar27 = sqrtpd(ZEXT816(0x3ff0000000000000),auVar29);
  auVar30 = divpd(_DAT_149934d80,auVar27);
  auVar31._0_8_ = auVar30._0_8_ * dVar17;
  auVar31._8_8_ = auVar30._8_8_ * dVar23;
  auVar26 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar31,auVar26);
  uVar13 = (ulonglong)(dVar21 * auVar30._8_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_)
  ;
  dVar23 = *(double *)(param_1 + 0xe0) * -1.0;
  dVar21 = *(double *)(param_1 + 0xe8) * 1.0;
  *(double *)(param_1 + 0x110) =
       ((dVar22 * dVar21 * 1.0 - dVar5 * dVar8) + dVar25 * dVar23) - dVar9 * dVar4 * -1.0;
  *(double *)(param_1 + 0x118) =
       ((dVar22 * dVar23 * -1.0 - dVar5 * dVar9) + dVar25 * dVar21) - dVar8 * dVar4 * 1.0;
  *(double *)(param_1 + 0x120) =
       dVar21 * dVar4 * 1.0 + dVar25 * dVar8 + (dVar5 * dVar23 - dVar22 * dVar9 * 1.0);
  *(double *)(param_1 + 0x128) =
       dVar23 * dVar4 * -1.0 + dVar25 * dVar9 + (dVar5 * dVar21 - dVar22 * dVar8 * -1.0);
  lVar6 = *param_2;
  lVar12 = (longlong)*(int *)(param_1 + 0xa8) * 0x60;
  auVar7._8_4_ = SUB84(dVar24,0);
  auVar7._0_8_ = dVar3;
  auVar7._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  *(undefined1 (*) [16])(lVar6 + 0x20 + lVar12) = auVar7;
  pdVar1 = (double *)(lVar6 + 0x30 + lVar12);
  *pdVar1 = dVar2;
  pdVar1[1] = 0.0;
  auVar27._8_4_ = (int)uVar13;
  auVar27._0_8_ =
       (ulonglong)(dVar14 * auVar30._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
  auVar27._12_4_ = (int)(uVar13 >> 0x20);
  *(undefined1 (*) [16])(lVar6 + lVar12) = auVar27;
  *(undefined1 (*) [16])(lVar6 + 0x10 + lVar12) = auVar26;
  if ((local_c0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498751ce FUN_1498751ce body=289 status=ok
// SIG undefined FUN_1498751ce(void)

undefined8 FUN_1498751ce(undefined8 *param_1,longlong *param_2)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auStack_48 [32];
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = 2;
  if (*(int *)(param_1 + 1) != 1) {
    lVar3 = *param_2;
    lVar6 = (longlong)*(int *)*param_1 * 0x60;
    lVar5 = (longlong)((int *)*param_1)[*(int *)(param_1 + 1) + -1] * 0x60;
    local_18 = *(double *)(lVar3 + 0x30 + lVar5) - *(double *)(lVar3 + 0x30 + lVar6);
    pdVar1 = (double *)(lVar3 + 0x20 + lVar5);
    pdVar2 = (double *)(lVar3 + 0x20 + lVar6);
    local_28 = *pdVar1 - *pdVar2;
    dStack_20 = pdVar1[1] - pdVar2[1];
    dVar7 = local_18 * local_18 + local_28 * local_28 + dStack_20 * dStack_20;
    if ((dVar7 != 1.0) || (NAN(dVar7))) {
      if (9.99999993922529e-09 <= dVar7) {
        dVar7 = 1.0 / SQRT(dVar7);
        local_18 = local_18 * dVar7;
        dStack_20 = dStack_20 * dVar7;
        local_28 = dVar7 * local_28;
      }
      else {
        local_18 = DAT_14c8464f0;
        local_28 = DAT_14c8464e0;
        dStack_20 = DAT_14c8464e8;
      }
    }
    uVar4 = FUN_14987641c(lVar3 + lVar6,&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1498752f0 FUN_1498752f0 body=799 status=ok
// SIG undefined FUN_1498752f0(void)

void FUN_1498752f0(double *param_1,int *param_2,undefined8 *param_3,longlong *param_4)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  longlong lVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
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
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  lVar4 = *param_4;
  lVar7 = (longlong)*(int *)*param_3 * 0x60;
  pdVar1 = (double *)(lVar4 + lVar7);
  lVar6 = (longlong)((int *)*param_3)[*(int *)(param_3 + 1) + -1] * 0x60;
  dVar8 = *(double *)(lVar4 + 0x30 + lVar6) - *(double *)(lVar4 + 0x30 + lVar7);
  pdVar2 = (double *)(lVar4 + 0x20 + lVar6);
  pdVar3 = (double *)(lVar4 + 0x20 + lVar7);
  dVar10 = *pdVar2 - *pdVar3;
  dVar12 = pdVar2[1] - pdVar3[1];
  dVar14 = dVar8 * dVar8 + dVar10 * dVar10 + dVar12 * dVar12;
  if (((dVar14 != 1.0) || (dVar9 = dVar8, dVar11 = dVar10, dVar13 = dVar12, NAN(dVar14))) &&
     (dVar9 = DAT_14c8464f0, dVar11 = DAT_14c8464e0, dVar13 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar14)) {
    dVar14 = 1.0 / SQRT(dVar14);
    dVar9 = dVar8 * dVar14;
    dVar11 = dVar10 * dVar14;
    dVar13 = dVar12 * dVar14;
  }
  dVar10 = *pdVar1;
  dVar12 = pdVar1[1];
  dVar14 = pdVar1[2];
  dVar8 = pdVar1[3];
  if (*param_2 == 1) {
    uVar20 = 0x3ff00000;
    uVar21 = 0;
    uVar19 = 0;
  }
  else {
    if (*param_2 != 2) {
      uVar18 = 0x3ff00000;
      uVar19 = 0;
      dVar15 = 1.0;
      uVar20 = 0;
      uVar21 = 0;
      goto LAB_149875441;
    }
    uVar20 = 0;
    uVar21 = 0x3ff00000;
    uVar19 = 0x3ff00000;
  }
  uVar18 = 0;
  dVar15 = 0.0;
LAB_149875441:
  dVar16 = (double)((ulonglong)uVar19 << 0x20) * dVar10 -
           dVar12 * (double)((ulonglong)uVar20 << 0x20);
  dVar5 = (double)((ulonglong)uVar18 << 0x20) * dVar12 -
          dVar14 * (double)((ulonglong)uVar21 << 0x20);
  dVar15 = (double)((ulonglong)uVar20 << 0x20) * dVar14 - dVar15 * dVar10;
  dVar5 = dVar5 + dVar5;
  dVar15 = dVar15 + dVar15;
  dVar16 = dVar16 + dVar16;
  dVar17 = dVar16 * dVar8 + (double)((ulonglong)uVar18 << 0x20) + (dVar15 * dVar10 - dVar5 * dVar12)
  ;
  dVar12 = (dVar16 * dVar12 - dVar15 * dVar14) + dVar8 * dVar5 + (double)((ulonglong)uVar20 << 0x20)
  ;
  dVar10 = (dVar14 * dVar5 - dVar10 * dVar16) +
           pdVar1[3] * dVar15 + (double)((ulonglong)uVar21 << 0x20);
  dVar8 = dVar17 * dVar9 + dVar12 * dVar11 + dVar13 * dVar10;
  dVar17 = dVar17 - dVar9 * dVar8;
  dVar10 = dVar10 - dVar13 * dVar8;
  dVar12 = dVar12 - dVar8 * dVar11;
  dVar8 = dVar17 * dVar17 + dVar12 * dVar12 + dVar10 * dVar10;
  if ((dVar8 != 1.0) || (NAN(dVar8))) {
    if (dVar8 < 9.99999993922529e-09) {
      param_1[2] = DAT_14c8464f0;
      dVar8 = DAT_14c8464e8;
      *param_1 = DAT_14c8464e0;
      param_1[1] = dVar8;
      return;
    }
    dVar8 = 1.0 / SQRT(dVar8);
    dVar17 = dVar17 * dVar8;
    dVar10 = dVar10 * dVar8;
    dVar12 = dVar12 * dVar8;
  }
  *param_1 = dVar12;
  param_1[1] = dVar10;
  param_1[2] = dVar17;
  return;
}



// FUNCTION 149875610 FUN_149875610 body=3595 status=ok
// SIG undefined FUN_149875610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149875610(longlong param_1,longlong param_2,undefined8 param_3,double *param_4,
                  undefined8 param_5,longlong *param_6,longlong param_7)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double *pdVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  double *pdVar17;
  longlong lVar18;
  undefined8 *puVar19;
  double *pdVar20;
  undefined8 *puVar21;
  double *pdVar22;
  longlong lVar23;
  ulonglong uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar31;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar43;
  double dVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined1 auStack_2e8 [32];
  longlong local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  double *local_2b0;
  longlong local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
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
  double local_178 [4];
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  fVar32 = *(float *)(param_2 + 0x10);
  fVar1 = *(float *)(param_2 + 0x18);
  if ((0.0001 < fVar32) || (1e-08 < ABS(fVar1))) {
    local_2a8 = 0;
    uStack_2a0 = 0;
    iVar14 = *(int *)(param_1 + 0x18);
    local_2c8 = param_2;
    local_2c0 = param_1;
    local_2b8 = param_3;
    local_2b0 = param_4;
    if ((longlong)iVar14 != 0) {
      lVar18 = *(longlong *)(param_1 + 0x10);
      lVar15 = 0;
      do {
        uVar24 = uStack_2a0;
        lVar11 = (longlong)*(int *)(lVar18 + lVar15);
        lVar16 = (longlong)*(int *)(*(longlong *)(param_7 + 0x10) + lVar11 * 4);
        if (lVar16 == -1) {
          lVar23 = *param_6;
          lVar13 = (longlong)(int)uStack_2a0;
          uVar10 = (int)uStack_2a0 + 1;
          uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar10);
          if (uStack_2a0._4_4_ < uVar10) {
            FUN_144a2c682(&local_2a8,uVar24 & 0xffffffff);
          }
          puVar19 = (undefined8 *)(lVar11 * 0x60 + lVar23);
          puVar21 = (undefined8 *)(lVar13 * 0x60 + local_2a8);
          for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
            *puVar21 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar21 = puVar21 + 1;
          }
        }
        FUN_1449437a2(lVar11 * 0x60 + *param_6,local_178,lVar16 * 0x60 + *param_6);
        uVar24 = uStack_2a0;
        lVar11 = (longlong)(int)uStack_2a0;
        uVar10 = (int)uStack_2a0 + 1;
        uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar10);
        if (uStack_2a0._4_4_ < uVar10) {
          FUN_144a2c682(&local_2a8,uVar24 & 0xffffffff);
        }
        pdVar17 = local_178;
        pdVar20 = (double *)(lVar11 * 0x60 + local_2a8);
        for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
          *pdVar20 = *pdVar17;
          pdVar17 = pdVar17 + 1;
          pdVar20 = pdVar20 + 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar14 * 4 != lVar15);
    }
    pdVar9 = local_2b0;
    lVar15 = local_2c0;
    lVar18 = *param_6;
    lVar16 = (longlong)*(int *)*local_2b0 * 0x60;
    pdVar22 = (double *)(longlong)(*(int *)(local_2b0 + 1) + -1);
    lVar11 = (longlong)((int *)*local_2b0)[(longlong)pdVar22] * 0x60;
    dVar26 = *(double *)(lVar18 + 0x30 + lVar11) - *(double *)(lVar18 + 0x30 + lVar16);
    pdVar17 = (double *)(lVar18 + 0x20 + lVar11);
    pdVar20 = (double *)(lVar18 + 0x20 + lVar16);
    dVar50 = *pdVar17 - *pdVar20;
    dVar28 = pdVar17[1] - pdVar20[1];
    dVar25 = dVar26 * dVar26 + dVar50 * dVar50 + dVar28 * dVar28;
    if (((dVar25 != 1.0) || (dVar51 = dVar26, dVar27 = dVar50, dVar31 = dVar28, NAN(dVar25))) &&
       (dVar51 = DAT_14c8464f0, dVar27 = DAT_14c8464e0, dVar31 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar25)) {
      dVar25 = 1.0 / SQRT(dVar25);
      dVar51 = dVar26 * dVar25;
      dVar27 = dVar50 * dVar25;
      dVar31 = dVar28 * dVar25;
    }
    if (0.0001 < fVar32) {
      FUN_1498752f0(local_178,local_2c0,local_2b8,param_5);
      pdVar22 = pdVar9;
      FUN_1498752f0(&local_1f8,lVar15 + 4,pdVar9,param_6);
      dVar50 = local_178[2] * local_1e8 + local_178[0] * local_1f8 + local_178[1] * dStack_1f0;
      dVar26 = dVar50;
      if (1.0 <= dVar50) {
        dVar26 = 1.0;
      }
      dVar26 = acos((double)(-(ulonglong)(dVar50 < -1.0) & 0xbff0000000000000 |
                            ~-(ulonglong)(dVar50 < -1.0) & (ulonglong)dVar26));
      fVar32 = 0.0;
      if (*(char *)(local_2c8 + 0x14) == '\x01') {
        fVar32 = *(float *)(lVar15 + 8);
      }
      dVar26 = (double)((float)dVar26 - fVar32) * 0.5;
      dVar28 = sin(dVar26);
      dVar25 = cos(dVar26);
      dVar37 = (double)*(float *)(local_2c8 + 0x10);
      uVar24 = -(ulonglong)
                (0.0 <= dVar25 * DAT_14c8463e8 +
                        dVar28 * dVar51 * DAT_14c8463e0 +
                        dVar27 * dVar28 * DAT_14c8463d0 + dVar31 * dVar28 * DAT_14c8463d8);
      dVar42 = (double)(~uVar24 & (ulonglong)-(1.0 - dVar37) | (ulonglong)(1.0 - dVar37) & uVar24);
      dVar26 = DAT_14c8463d0 * dVar42 + dVar27 * dVar28 * dVar37;
      dVar50 = DAT_14c8463d8 * dVar42 + dVar31 * dVar28 * dVar37;
      dVar43 = dVar42 * DAT_14c8463e0 + dVar28 * dVar51 * dVar37;
      dVar37 = dVar42 * DAT_14c8463e8 + dVar25 * dVar37;
      dVar28 = dVar43 * dVar43 + dVar26 * dVar26;
      dVar25 = dVar37 * dVar37 + dVar50 * dVar50;
      auVar41._0_8_ = dVar28 + dVar25;
      auVar41._8_8_ = dVar28 + dVar25;
      auVar34._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
      auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
      auVar46 = sqrtpd(auVar41,auVar41);
      auVar46 = divpd(_DAT_149934d80,auVar46);
      auVar48._0_8_ = auVar46._0_8_ * dVar43;
      auVar48._8_8_ = auVar46._8_8_ * dVar37;
      uVar24 = (ulonglong)(dVar26 * auVar46._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
      uVar52 = (undefined4)uVar24;
      uVar53 = (undefined4)(uVar24 >> 0x20);
      uVar24 = (ulonglong)(dVar50 * auVar46._8_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
      uVar54 = (undefined4)uVar24;
      uVar55 = (undefined4)(uVar24 >> 0x20);
      auVar46 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar48,auVar34);
    }
    else {
      auVar46._8_8_ = DAT_14c8463e8;
      auVar46._0_8_ = DAT_14c8463e0;
      uVar52 = SUB84(DAT_14c8463d0,0);
      uVar53 = (undefined4)((ulonglong)DAT_14c8463d0 >> 0x20);
      uVar54 = SUB84(DAT_14c8463d8,0);
      uVar55 = (undefined4)((ulonglong)DAT_14c8463d8 >> 0x20);
    }
    dVar50 = DAT_14c8463d0;
    dVar28 = DAT_14c8463d8;
    dVar26 = DAT_14c8463e0;
    dVar25 = DAT_14c8463e8;
    if (1e-08 < ABS(fVar1)) {
      dVar50 = (double)(*(float *)(local_2c8 + 0x18) * 0.017453292) * 0.5;
      dVar26 = sin(dVar50);
      dVar25 = cos(dVar50);
      dVar50 = dVar27 * dVar26;
      dVar28 = dVar31 * dVar26;
      dVar26 = dVar51 * dVar26;
    }
    lVar18 = *param_6;
    lVar11 = (longlong)*(int *)*pdVar9 * 0x60;
    dVar42 = auVar46._8_8_;
    dVar51 = auVar46._0_8_;
    dVar27 = dVar28 * dVar51 * -1.0 +
             dVar26 * (double)CONCAT44(uVar55,uVar54) +
             (double)CONCAT44(uVar53,uVar52) * dVar25 * 1.0 + dVar42 * dVar50;
    dVar31 = dVar50 * dVar51 * 1.0 +
             dVar25 * (double)CONCAT44(uVar55,uVar54) +
             (double)CONCAT44(uVar53,uVar52) * dVar26 * -1.0 + dVar42 * dVar28;
    dVar37 = dVar25 * dVar51 * 1.0 +
             (((double)CONCAT44(uVar53,uVar52) * dVar28 * 1.0 + dVar42 * dVar26) -
             (double)CONCAT44(uVar55,uVar54) * dVar50);
    dVar42 = dVar26 * dVar51 * -1.0 +
             (((double)CONCAT44(uVar53,uVar52) * dVar50 * -1.0 + dVar42 * dVar25) -
             (double)CONCAT44(uVar55,uVar54) * dVar28);
    dVar50 = *(double *)(lVar18 + lVar11);
    dVar28 = ((double *)(lVar18 + lVar11))[1];
    pdVar17 = (double *)(lVar18 + 0x10 + lVar11);
    dVar25 = *pdVar17;
    dVar51 = pdVar17[1];
    dVar26 = dVar25 * dVar37 * -1.0 + ((dVar27 * dVar50 * -1.0 + dVar42 * dVar51) - dVar31 * dVar28)
    ;
    *(double *)(lVar18 + lVar11) =
         dVar28 * dVar37 * -1.0 + dVar25 * dVar31 + dVar51 * dVar27 * 1.0 + dVar50 * dVar42;
    ((double *)(lVar18 + lVar11))[1] =
         dVar50 * dVar37 * 1.0 + dVar51 * dVar31 + dVar25 * dVar27 * -1.0 + dVar28 * dVar42;
    auVar2._8_4_ = SUB84(dVar26,0);
    auVar2._0_8_ = dVar51 * dVar37 * 1.0 +
                   ((dVar27 * dVar28 * 1.0 + dVar42 * dVar25) - dVar31 * dVar50);
    auVar2._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
    *(undefined1 (*) [16])(lVar18 + 0x10 + lVar11) = auVar2;
    if (0 < *(int *)(lVar15 + 0x18)) {
      lVar18 = 0;
      lVar11 = 0;
LAB_149875af8:
      auVar46 = _DAT_149934d80;
      lVar23 = (longlong)*(int *)(*(longlong *)(lVar15 + 0x10) + lVar11 * 4);
      lVar13 = (longlong)*(int *)(*(longlong *)(param_7 + 0x10) + lVar23 * 4);
      lVar16 = *param_6;
      if (lVar13 != -1) goto code_r0x000149875b2a;
      puVar19 = (undefined8 *)(lVar18 + local_2a8);
      puVar21 = (undefined8 *)(lVar16 + lVar23 * 0x60);
      for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
        *puVar21 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar21 = puVar21 + 1;
      }
    }
LAB_1498761a6:
    if (local_2a8 != 0) {
      FUN_1400020a8(local_2a8);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000149875b2a:
  lVar13 = lVar13 * 0x60;
  pdVar17 = (double *)(lVar16 + lVar13);
  auVar34 = *(undefined1 (*) [16])(lVar16 + 0x40 + lVar13);
  dVar26 = auVar34._0_8_;
  dVar28 = auVar34._8_8_;
  auVar41 = *(undefined1 (*) [16])(lVar16 + 0x50 + lVar13);
  dVar50 = auVar41._0_8_;
  auVar48 = *(undefined1 (*) [16])(local_2a8 + 0x40 + lVar18);
  auVar2 = *(undefined1 (*) [16])(local_2a8 + 0x50 + lVar18);
  auVar34 = minpd(auVar48,auVar34);
  auVar38 = minpd(auVar2,auVar41);
  auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  iVar14 = movmskpd((int)lVar13,auVar35);
  auVar39._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
  auVar39._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
  uVar10 = movmskpd((int)pdVar22,auVar39);
  if ((uVar10 & 0x3fffffff) == 0 && iVar14 == 0) {
    dVar43 = *(double *)(local_2a8 + lVar18);
    dVar44 = ((double *)(local_2a8 + lVar18))[1];
    pdVar20 = (double *)(local_2a8 + 0x10 + lVar18);
    dVar45 = *pdVar20;
    dVar49 = pdVar20[1];
    dVar5 = *pdVar17;
    dVar6 = pdVar17[1];
    dVar7 = pdVar17[2];
    dVar8 = pdVar17[3];
    dVar25 = pdVar17[3];
    dVar51 = pdVar17[3];
    dVar27 = pdVar17[1];
    dVar31 = pdVar17[1];
    dVar42 = pdVar17[2];
    dVar37 = pdVar17[2];
    dVar33 = dVar44 * dVar42 * -1.0 + dVar45 * dVar27 + dVar49 * *pdVar17 * 1.0 + dVar43 * dVar25;
    dVar36 = dVar43 * dVar37 * 1.0 + dVar49 * dVar31 + dVar45 * *pdVar17 * -1.0 + dVar44 * dVar51;
    auVar38._0_8_ =
         dVar49 * dVar42 * 1.0 + ((*pdVar17 * dVar44 * 1.0 + dVar45 * dVar25) - dVar43 * dVar27);
    auVar38._8_8_ =
         dVar45 * dVar37 * -1.0 + ((*pdVar17 * dVar43 * -1.0 + dVar49 * dVar51) - dVar44 * dVar31);
    pdVar20 = (double *)(local_2a8 + 0x20 + lVar18);
    dVar43 = *pdVar20 * dVar26;
    dVar44 = pdVar20[1] * dVar28;
    pdVar20 = (double *)(local_2a8 + 0x30 + lVar18);
    dVar27 = *pdVar20 * dVar50;
    dVar31 = pdVar20[1] * auVar41._8_8_;
    dVar37 = dVar44 * dVar5 - dVar6 * dVar43;
    dVar49 = dVar27 * dVar6 - dVar7 * dVar44;
    dVar45 = dVar43 * dVar7 - dVar5 * dVar27;
    dVar42 = dVar31 * dVar8 - dVar8 * dVar31;
    dVar49 = dVar49 + dVar49;
    dVar45 = dVar45 + dVar45;
    dVar37 = dVar37 + dVar37;
    dVar42 = dVar42 + dVar42;
    dVar43 = (dVar37 * dVar6 - dVar7 * dVar45) + dVar25 * dVar49 + dVar43 + pdVar17[4];
    dVar44 = (dVar49 * dVar7 - dVar37 * dVar5) + dVar51 * dVar45 + dVar44 + pdVar17[5];
    dVar25 = (dVar45 * dVar5 - dVar6 * dVar49) + dVar25 * dVar37 + dVar27 + pdVar17[6];
    dVar51 = (dVar42 * dVar8 - dVar42 * dVar8) + dVar51 * dVar42 + dVar31 + pdVar17[7];
    pdVar22 = (double *)0x0;
  }
  else {
    dVar51 = *pdVar17;
    dVar27 = pdVar17[1];
    dVar31 = pdVar17[2];
    dVar37 = dVar27 + dVar27;
    dVar42 = dVar31 + dVar31;
    dVar25 = dVar51 * (dVar51 + dVar51);
    local_1f8 = ((double)DAT_149934d80 - (dVar31 * dVar42 + dVar27 * dVar37)) * dVar26;
    dStack_1d0 = (DAT_149934d80._8_8_ - (dVar31 * dVar42 + dVar25)) * dVar28;
    local_1a8 = (1.0 - (dVar25 + dVar27 * dVar37)) * dVar50;
    dVar25 = pdVar17[3];
    dVar31 = dVar42 * dVar25;
    dVar43 = (dVar51 + dVar51) * pdVar17[3];
    dVar25 = dVar37 * dVar25;
    dStack_1f0 = (dVar37 * dVar51 + dVar31) * dVar26;
    local_1c8 = (dVar42 * dVar27 + dVar43) * dVar28;
    local_1b8 = (dVar25 + *pdVar17 * dVar42) * dVar50;
    local_1d8 = (dVar37 * dVar51 - dVar31) * dVar28;
    dStack_1b0 = (dVar42 * dVar27 - dVar43) * dVar50;
    local_1e8 = (*pdVar17 * dVar42 - dVar25) * dVar26;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = pdVar17[4];
    dStack_190 = pdVar17[5];
    local_188 = pdVar17[6];
    uStack_180 = 0x3ff0000000000000;
    dVar27 = *(double *)(local_2a8 + lVar18);
    dVar31 = ((double *)(local_2a8 + lVar18))[1];
    dVar51 = *(double *)(local_2a8 + 0x10 + lVar18);
    pdVar17 = (double *)(local_2a8 + 0x40 + lVar18);
    local_268 = *pdVar17;
    local_258 = pdVar17[1];
    dStack_230 = *(double *)(local_2a8 + 0x50 + lVar18);
    dVar44 = dVar31 + dVar31;
    dVar37 = dVar51 + dVar51;
    dVar25 = dVar27 * (dVar27 + dVar27);
    local_278 = ((double)DAT_149934d80 - (dVar51 * dVar37 + dVar31 * dVar44)) * local_268;
    dStack_250 = (DAT_149934d80._8_8_ - (dVar51 * dVar37 + dVar25)) * local_258;
    local_228 = (1.0 - (dVar25 + dVar31 * dVar44)) * dStack_230;
    dVar51 = *(double *)(local_2a8 + lVar18) * dVar37;
    pdVar17 = (double *)(local_2a8 + 0x18 + lVar18);
    dVar25 = *pdVar17;
    dVar42 = dVar37 * dVar25;
    dVar43 = (dVar27 + dVar27) * *pdVar17;
    dVar25 = dVar44 * dVar25;
    dStack_270 = (dVar44 * dVar27 + dVar42) * local_268;
    local_248 = (dVar37 * dVar31 + dVar43) * local_258;
    local_238 = (dVar25 + dVar51) * dStack_230;
    local_268 = (dVar51 - dVar25) * local_268;
    local_258 = (dVar44 * dVar27 - dVar42) * local_258;
    dStack_230 = (dVar37 * dVar31 - dVar43) * dStack_230;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    puVar19 = (undefined8 *)(local_2a8 + 0x20 + lVar18);
    local_218 = *puVar19;
    uStack_210 = puVar19[1];
    local_208 = *(undefined8 *)(local_2a8 + 0x30 + lVar18);
    uStack_200 = 0x3ff0000000000000;
    pdVar22 = &local_1f8;
    FUN_1447fea8d(local_178,&local_278);
    FUN_144a1c686(local_178,0x3e45798ee0000000);
    auVar29._8_8_ = -(ulonglong)(0.0 <= auVar48._8_8_ * dVar28);
    auVar29._0_8_ = -(ulonglong)(0.0 <= auVar48._0_8_ * dVar26);
    auVar34 = blendvpd(_DAT_149936790,auVar46,auVar29);
    uVar24 = -(ulonglong)(0.0 <= auVar2._0_8_ * dVar50);
    dVar25 = (double)(~uVar24 & 0xbff0000000000000 | uVar24 & 0x3ff0000000000000);
    dVar51 = auVar34._0_8_;
    local_178[2] = local_178[2] * dVar51;
    local_178[1] = local_178[1] * dVar51;
    local_178[0] = local_178[0] * dVar51;
    dVar51 = auVar34._8_8_;
    local_148 = local_148 * dVar51;
    local_150 = local_150 * dVar51;
    local_158 = dVar51 * local_158;
    local_128 = local_128 * dVar25;
    local_130 = local_130 * dVar25;
    local_138 = dVar25 * local_138;
    FUN_14481fd10(&local_298,local_178);
    dVar25 = local_288._0_8_;
    dVar51 = local_288._8_8_;
    dVar27 = dVar25 * dVar25 + local_298 * local_298;
    dVar31 = dVar51 * dVar51 + dStack_290 * dStack_290;
    auVar40._0_8_ = dVar27 + dVar31;
    auVar40._8_8_ = dVar27 + dVar31;
    auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_);
    auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_);
    auVar34 = sqrtpd(auVar40,auVar40);
    auVar46 = divpd(auVar46,auVar34);
    auVar47._0_8_ = auVar46._0_8_ * dVar25;
    auVar47._8_8_ = auVar46._8_8_ * dVar51;
    dVar33 = (double)((ulonglong)(local_298 * auVar46._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_));
    dVar36 = (double)((ulonglong)(dStack_290 * auVar46._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_));
    auVar38 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar47,auVar30);
    dVar51 = 0.0;
    lVar16 = *param_6;
    dVar43 = local_118;
    dVar44 = dStack_110;
    dVar25 = local_108;
  }
  dVar27 = auVar2._8_8_ * auVar41._8_8_;
  dVar28 = auVar48._8_8_ * dVar28;
  lVar23 = lVar23 * 0x60;
  *(double *)(lVar16 + lVar23) = dVar33;
  ((double *)(lVar16 + lVar23))[1] = dVar36;
  *(undefined1 (*) [16])(lVar16 + 0x10 + lVar23) = auVar38;
  pdVar17 = (double *)(lVar16 + 0x20 + lVar23);
  *pdVar17 = dVar43;
  pdVar17[1] = dVar44;
  pdVar17 = (double *)(lVar16 + 0x30 + lVar23);
  *pdVar17 = dVar25;
  pdVar17[1] = dVar51;
  auVar3._8_4_ = SUB84(dVar28,0);
  auVar3._0_8_ = auVar48._0_8_ * dVar26;
  auVar3._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  *(undefined1 (*) [16])(lVar16 + 0x40 + lVar23) = auVar3;
  auVar4._8_4_ = SUB84(dVar27,0);
  auVar4._0_8_ = auVar2._0_8_ * dVar50;
  auVar4._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  *(undefined1 (*) [16])(lVar16 + 0x50 + lVar23) = auVar4;
  lVar11 = lVar11 + 1;
  lVar18 = lVar18 + 0x60;
  if (*(int *)(lVar15 + 0x18) <= lVar11) goto LAB_1498761a6;
  goto LAB_149875af8;
}



// FUNCTION 14987641c FUN_14987641c body=1013 status=ok
// SIG undefined FUN_14987641c(void)

int FUN_14987641c(double *param_1,double *param_2)

{
  double dVar1;
  int iVar3;
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
  longlong lVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_108 [40];
  undefined8 *local_e0;
  int local_d8;
  ulonglong local_d0;
  double dVar2;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = (undefined8 *)0x0;
  local_d8 = 3;
  FUN_14988d9f8(&local_e0);
  *local_e0 = 0x200000001;
  *(undefined4 *)(local_e0 + 1) = 3;
  if ((longlong)local_d8 == 0) {
    iVar15 = 2;
  }
  else {
    dVar11 = *param_1;
    dVar12 = param_1[1];
    dVar13 = param_1[2];
    dVar1 = param_1[3];
    dVar2 = param_1[3];
    dVar16 = dVar11 * 1.0 - dVar12 * 0.0;
    dVar17 = dVar12 * 0.0 - dVar13 * 1.0;
    dVar18 = dVar13 * 0.0 - dVar11 * 0.0;
    dVar17 = dVar17 + dVar17;
    dVar18 = dVar18 + dVar18;
    dVar16 = dVar16 + dVar16;
    dVar20 = dVar11 * 0.0 - dVar12 * 1.0;
    dVar7 = dVar12 * 0.0 - dVar13 * 0.0;
    dVar19 = dVar13 * 1.0 - dVar11 * 0.0;
    dVar7 = dVar7 + dVar7;
    dVar19 = dVar19 + dVar19;
    dVar20 = dVar20 + dVar20;
    dVar5 = dVar11 * 0.0 - dVar12 * 0.0;
    dVar6 = dVar12 * 1.0 - dVar13 * 0.0;
    dVar4 = dVar13 * 0.0 - dVar11 * 1.0;
    dVar6 = dVar6 + dVar6;
    dVar4 = dVar4 + dVar4;
    dVar5 = dVar5 + dVar5;
    iVar15 = 2;
    fVar21 = 2.0;
    lVar14 = 0;
    do {
      iVar3 = *(int *)((longlong)local_e0 + lVar14);
      dVar8 = dVar20 * dVar1 + 0.0 + (dVar19 * dVar11 - dVar7 * dVar12);
      dVar9 = (dVar20 * dVar12 - dVar19 * dVar13) + dVar1 * dVar7 + 1.0;
      dVar10 = (dVar13 * dVar7 - dVar11 * dVar20) + dVar2 * dVar19 + 0.0;
      if ((iVar3 != 1) &&
         (dVar8 = dVar16 * dVar1 + 0.0 + (dVar18 * dVar11 - dVar17 * dVar12),
         dVar9 = (dVar16 * dVar12 - dVar18 * dVar13) + dVar1 * dVar17 + 0.0,
         dVar10 = (dVar13 * dVar17 - dVar11 * dVar16) + dVar2 * dVar18 + 1.0, iVar3 != 2)) {
        dVar8 = dVar5 * dVar1 + 1.0 + (dVar4 * dVar11 - dVar6 * dVar12);
        dVar9 = (dVar5 * dVar12 - dVar4 * dVar13) + dVar1 * dVar6 + 0.0;
        dVar10 = (dVar13 * dVar6 - dVar11 * dVar5) + dVar2 * dVar4 + 0.0;
      }
      fVar22 = ABS((float)(dVar9 * *param_2 + dVar10 * param_2[1] + dVar8 * param_2[2]));
      if (fVar21 <= fVar22) {
        fVar22 = fVar21;
        iVar3 = iVar15;
      }
      iVar15 = iVar3;
      fVar21 = fVar22;
      lVar14 = lVar14 + 4;
    } while ((longlong)local_d8 * 4 != lVar14);
  }
  if (local_e0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return iVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149876812 FUN_149876812 body=1439 status=ok
// SIG undefined FUN_149876812(void)

undefined8 FUN_149876812(longlong param_1)

{
  int *piVar1;
  void *_Dst;
  longlong *plVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_198 [39];
  byte local_171;
  longlong local_170;
  undefined1 local_164 [4];
  undefined8 local_160;
  longlong *local_158;
  longlong *local_150 [2];
  longlong *local_140 [2];
  undefined8 local_130;
  undefined1 local_124 [4];
  longlong *local_120 [2];
  undefined8 local_110;
  longlong *local_108;
  longlong *local_100 [2];
  longlong local_f0 [2];
  longlong *local_e0 [2];
  longlong *local_d0 [2];
  undefined8 *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  _Dst = (void *)(param_1 + 0x1b0);
  memset(_Dst,0,0x130);
  lVar5 = FUN_14986bc2a(*(undefined8 *)(param_1 + 0x70),0);
  local_c0 = *(undefined8 **)(lVar5 + 0xe8);
  lVar5 = param_1 + 0x28;
  uVar4 = FUN_1498744a8(_Dst,local_c0,param_1 + 0x78,lVar5);
  uVar7 = (ulonglong)uVar4;
  if ((byte)uVar4 == 0) {
    local_88 = *(wchar_t **)(*(longlong *)(param_1 + 200) + 0x18);
    local_171 = (byte)uVar4;
    local_170 = lVar5;
    FUN_1400021e4(&local_88,local_f0);
    FUN_140233b1a(local_e0,local_f0);
    FUN_145715fae(local_100,&local_c0);
    local_88 = L"NoSourceRoot";
    local_80[0] = 0xc;
    FUN_1446e940c(&local_130,&local_88);
    local_88 = L"IKRetargetProcessor";
    local_80[0] = 0x13;
    FUN_1446e940c(local_124,&local_88);
    FUN_140208bae(local_120,local_124,&local_130,
                  L"IK Retargeter unable to initialize source root, \'{0}\' on skeletal mesh: \'{1}\'"
                 );
    FUN_14023409e(&local_110,local_120,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_100);
    local_68 = 4;
    FUN_14023423e(local_58,local_e0);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_110;
    local_b0 = local_108;
    if (local_108 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_108 + 1) = (int)local_108[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_d0,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar5 = 0x30;
    uVar7 = (ulonglong)local_171;
    do {
      plVar2 = *(longlong **)((longlong)local_80 + lVar5 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar5 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar5) = 0;
      }
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != -0x10);
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_108 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar1 = (int *)((longlong)local_108 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_108 + 0x10))(local_108);
        }
      }
    }
    if (local_100[0] != (longlong *)0x0) {
      (**(code **)(*local_100[0] + 0x10))();
    }
    lVar5 = local_170;
    if (local_e0[0] != (longlong *)0x0) {
      (**(code **)(*local_e0[0] + 0x10))();
    }
    FUN_14986922e(lVar5,local_d0);
    if (local_d0[0] != (longlong *)0x0) {
      (**(code **)(*local_d0[0] + 0x10))();
    }
    if (local_120[0] != (longlong *)0x0) {
      (**(code **)(*local_120[0] + 0x10))();
    }
    if (local_f0[0] != 0) {
      FUN_1400020a8();
    }
  }
  lVar6 = FUN_14986bc2a(*(undefined8 *)(param_1 + 0x70),1);
  local_130 = *(undefined8 *)(lVar6 + 0xe8);
  bVar3 = FUN_149874868(_Dst,local_130,param_1 + 0xf0,lVar5);
  if (bVar3 == 0) {
    local_171 = (byte)uVar7;
    local_88 = *(wchar_t **)(*(longlong *)(param_1 + 0x140) + 0x18);
    local_170 = lVar5;
    FUN_1400021e4(&local_88,local_f0);
    FUN_140233b1a(local_140,local_f0);
    FUN_145715fae(local_150,&local_130);
    local_88 = L"NoTargetRoot";
    local_80[0] = 0xc;
    FUN_1446e940c(local_124,&local_88);
    local_88 = L"IKRetargetProcessor";
    local_80[0] = 0x13;
    FUN_1446e940c(local_164,&local_88);
    FUN_140208bae(local_120,local_164,local_124,
                  L"IK Retargeter unable to initialize target root, \'{0}\' on skeletal mesh: \'{1}\'"
                 );
    FUN_14023409e(&local_160,local_120,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_150);
    local_68 = 4;
    FUN_14023423e(local_58,local_140);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_160;
    local_b0 = local_158;
    if (local_158 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_158 + 1) = (int)local_158[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_d0,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar5 = local_170;
    lVar6 = 0x30;
    uVar7 = (ulonglong)local_171;
    do {
      plVar2 = *(longlong **)((longlong)local_80 + lVar6 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar6 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar6) = 0;
      }
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != -0x10);
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_158 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_158)(local_158);
        LOCK();
        piVar1 = (int *)((longlong)local_158 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_158 + 0x10))(local_158);
        }
      }
    }
    if (local_150[0] != (longlong *)0x0) {
      (**(code **)(*local_150[0] + 0x10))();
    }
    if (local_140[0] != (longlong *)0x0) {
      (**(code **)(*local_140[0] + 0x10))();
    }
    FUN_14986922e(lVar5,local_d0);
    if (local_d0[0] != (longlong *)0x0) {
      (**(code **)(*local_d0[0] + 0x10))();
    }
    if (local_120[0] != (longlong *)0x0) {
      (**(code **)(*local_120[0] + 0x10))();
    }
    if (local_f0[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 & bVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149876db2 FUN_149876db2 body=8037 status=ok
// SIG undefined FUN_149876db2(void)

bool FUN_149876db2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined *puVar3;
  void *_Src;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte extraout_var;
  int iVar11;
  byte extraout_var_00;
  byte extraout_var_01;
  byte extraout_var_02;
  byte extraout_var_03;
  byte extraout_var_04;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined **ppuVar20;
  undefined8 *puVar21;
  undefined **ppuVar22;
  longlong lVar23;
  undefined8 *puVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  undefined ***pppuVar32;
  bool bVar33;
  float fVar34;
  undefined1 auStack_7c8 [32];
  longlong local_7a8;
  longlong local_7a0;
  undefined ***local_790;
  longlong local_788;
  longlong local_780;
  undefined **local_778;
  longlong *local_770;
  longlong *local_768;
  longlong local_760;
  longlong local_758;
  undefined1 local_750 [4];
  undefined1 local_74c [4];
  longlong *local_748 [2];
  longlong local_738;
  longlong *local_730;
  longlong local_728 [2];
  longlong *local_718 [2];
  longlong *local_708 [2];
  longlong local_6f8;
  longlong *local_6f0;
  longlong *local_6e8 [2];
  longlong *local_6d8;
  int local_6d0;
  longlong local_6c8;
  longlong *local_6c0;
  longlong *local_6b8 [2];
  longlong local_6a8;
  longlong *local_6a0;
  undefined ****local_698;
  undefined ***local_690;
  longlong local_688;
  longlong *local_680;
  undefined ***local_678;
  undefined8 *local_670;
  longlong *local_668 [2];
  undefined **local_658;
  undefined **local_650;
  longlong *plStack_648;
  longlong local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined1 local_620 [4];
  undefined4 local_61c;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined1 *local_5b8;
  undefined1 local_5b0;
  undefined1 local_5a8;
  undefined8 local_5a4;
  undefined8 uStack_59c;
  undefined4 local_594;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined4 local_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined4 local_4d8;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined1 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined **local_358;
  ulonglong local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined2 local_320;
  undefined4 local_31c;
  undefined1 local_318;
  undefined8 local_314;
  undefined1 local_30c;
  undefined4 local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_7c8;
  iVar9 = *(int *)(param_1 + 0x19c);
  FUN_145afd018(*(undefined8 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x198));
  *(undefined4 *)(param_1 + 0x198) = 0;
  if ((iVar9 < 0) && (*(int *)(param_1 + 0x19c) != 0)) {
    FUN_14988da84((longlong *)(param_1 + 400));
  }
  iVar9 = *(int *)(param_1 + 0x1ac);
  local_770 = (longlong *)(param_1 + 400);
  FUN_145afd152(*(undefined8 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a8));
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if ((iVar9 < 0) && (*(int *)(param_1 + 0x1ac) != 0)) {
    FUN_14988dab4((longlong *)(param_1 + 0x1a0));
  }
  local_768 = (longlong *)(param_1 + 0x1a0);
  local_790 = (undefined ***)FUN_14986bc2a(*(undefined8 *)(param_1 + 0x70),0);
  lVar12 = FUN_14986bc2a(*(undefined8 *)(param_1 + 0x70));
  lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0x98);
  local_780 = param_1;
  if (lVar13 == 0) {
LAB_149877822:
    if ((longlong)*(int *)(local_780 + 0x198) != 0) {
      lVar12 = *(longlong *)(local_780 + 400);
      lVar13 = lVar12 + (longlong)*(int *)(local_780 + 0x198) * 0x280;
      do {
        if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
          lVar15 = *(longlong *)(lVar12 + 0x30);
          uVar29 = (uint)((ulonglong)lVar15 >> 0x10);
          uVar28 = (uint)lVar15 & 0xffff;
          plVar19 = (longlong *)param_2[8];
          if ((longlong *)param_2[8] == (longlong *)0x0) {
            plVar19 = param_2 + 7;
          }
          iVar9 = *(int *)((longlong)plVar19 +
                          (ulonglong)
                          ((int)param_2[9] - 1U &
                          (int)((ulonglong)lVar15 >> 0x20) + ((uint)lVar15 << 0x10 | uVar28) +
                          (uVar29 << 0x13 | uVar29 & 0xffff) + (uVar28 >> 4)) * 4);
          if (iVar9 != -1) {
            do {
              lVar23 = *param_2 + (longlong)iVar9 * 0xc0;
              if (*(longlong *)(*param_2 + (longlong)iVar9 * 0xc0) == lVar15) {
                if ((undefined8 *)(lVar23 + 8) != (undefined8 *)0x0 && lVar23 != 0) {
                  uVar4 = *(undefined8 *)(lVar23 + 8);
                  uVar5 = *(undefined8 *)(lVar23 + 0x10);
                  uVar6 = *(undefined8 *)(lVar23 + 0x1c);
                  *(undefined8 *)(lVar12 + 0x44) = *(undefined8 *)(lVar23 + 0x14);
                  *(undefined8 *)(lVar12 + 0x4c) = uVar6;
                  *(undefined8 *)(lVar12 + 0x38) = uVar4;
                  *(undefined8 *)(lVar12 + 0x40) = uVar5;
                }
                break;
              }
              iVar9 = *(int *)(lVar23 + 0xb8);
            } while (iVar9 != -1);
          }
        }
        lVar12 = lVar12 + 0x280;
      } while (lVar12 != lVar13);
    }
    if ((longlong)*(int *)(local_780 + 0x1a8) != 0) {
      lVar12 = *(longlong *)(local_780 + 0x1a0);
      lVar13 = lVar12 + (longlong)*(int *)(local_780 + 0x1a8) * 0x2b0;
      do {
        if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
          lVar15 = *(longlong *)(lVar12 + 0x30);
          uVar29 = (uint)((ulonglong)lVar15 >> 0x10);
          uVar28 = (uint)lVar15 & 0xffff;
          plVar19 = (longlong *)param_2[8];
          if ((longlong *)param_2[8] == (longlong *)0x0) {
            plVar19 = param_2 + 7;
          }
          iVar9 = *(int *)((longlong)plVar19 +
                          (ulonglong)
                          ((int)param_2[9] - 1U &
                          (int)((ulonglong)lVar15 >> 0x20) + ((uint)lVar15 << 0x10 | uVar28) +
                          (uVar29 << 0x13 | uVar29 & 0xffff) + (uVar28 >> 4)) * 4);
          if (iVar9 != -1) {
            do {
              lVar23 = *param_2 + (longlong)iVar9 * 0xc0;
              if (*(longlong *)(*param_2 + (longlong)iVar9 * 0xc0) == lVar15) {
                if ((lVar23 + 8U & 0xfffffffffffffff7) != 0) {
                  puVar21 = (undefined8 *)(lVar23 + 0x28);
                  puVar24 = (undefined8 *)(lVar12 + 0x38);
                  for (lVar15 = 0xf; lVar15 != 0; lVar15 = lVar15 + -1) {
                    *puVar24 = *puVar21;
                    puVar21 = puVar21 + 1;
                    puVar24 = puVar24 + 1;
                  }
                }
                break;
              }
              iVar9 = *(int *)(lVar23 + 0xb8);
            } while (iVar9 != -1);
          }
        }
        lVar12 = lVar12 + 0x2b0;
      } while (lVar12 != lVar13);
    }
    iVar9 = *(int *)(local_780 + 0x198);
    if (1 < (longlong)iVar9) {
      ppuVar20 = (undefined **)*local_770;
      memset(&plStack_648,0,0x2f0);
      local_650 = ppuVar20 + (longlong)iVar9 * 0x50 + -0x50;
      local_658 = ppuVar20;
      fVar34 = logf((float)iVar9);
      plStack_648 = (longlong *)CONCAT44(plStack_648._4_4_,(int)(longlong)(fVar34 + fVar34));
      pppuVar32 = &local_658;
      do {
        ppuVar20 = *pppuVar32;
        ppuVar16 = pppuVar32[1];
        iVar9 = *(int *)(pppuVar32 + 2);
        iVar8 = (int)((ulonglong)((longlong)ppuVar16 - (longlong)ppuVar20) >> 7) * -0x33333333;
        uVar29 = iVar8 + 1;
        local_790 = pppuVar32;
        if (iVar9 != 0) {
LAB_149877aa7:
          if (8 < (int)uVar29) {
            local_788 = CONCAT44(local_788._4_4_,iVar9);
            local_778 = ppuVar16;
            memcpy(&local_358,ppuVar20 + (ulonglong)(uVar29 >> 1) * 0x50,0x280);
            memcpy(ppuVar20 + (ulonglong)(uVar29 >> 1) * 0x50,ppuVar20,0x280);
            memcpy(ppuVar20,&local_358,0x280);
            ppuVar26 = ppuVar16 + 0x50;
            ppuVar25 = ppuVar20;
            do {
              ppuVar22 = ppuVar25 + 0x50;
              if (ppuVar22 <= ppuVar16) {
                ppuVar25 = ppuVar25 + 0x56;
                do {
                  ppuVar17 = ppuVar25;
                  iVar8 = -1;
                  iVar9 = -1;
                  if (0 < *(int *)(ppuVar20 + 4)) {
                    iVar9 = *(int *)ppuVar20[3];
                  }
                  if (0 < *(int *)(ppuVar17 + -2)) {
                    iVar8 = *(int *)ppuVar17[-3];
                  }
                  if (iVar9 == iVar8) {
                    iVar9 = FUN_144a78538(ppuVar20 + 6,ppuVar17);
                    if (iVar9 < 0) goto LAB_149877b27;
                  }
                  else if (iVar9 < iVar8) {
                    ppuVar22 = ppuVar17 + -6;
                    goto LAB_149877b27;
                  }
                  ppuVar22 = ppuVar22 + 0x50;
                  ppuVar25 = ppuVar17 + 0x50;
                } while (ppuVar17 + 0x4a <= ppuVar16);
                ppuVar22 = ppuVar17 + 0x4a;
              }
LAB_149877b27:
              do {
                ppuVar25 = ppuVar22;
                ppuVar17 = ppuVar26;
                ppuVar26 = ppuVar17 + -0x50;
                if (ppuVar26 <= ppuVar20) break;
                iVar8 = -1;
                iVar9 = -1;
                if (0 < *(int *)(ppuVar17 + -0x4c)) {
                  iVar9 = *(int *)ppuVar17[-0x4d];
                }
                if (0 < *(int *)(ppuVar20 + 4)) {
                  iVar8 = *(int *)ppuVar20[3];
                }
                ppuVar22 = ppuVar25;
                if (iVar9 == iVar8) {
                  iVar9 = FUN_144a78538(ppuVar17 + -0x4a,ppuVar20 + 6);
                  if (iVar9 < 0) break;
                  goto LAB_149877b27;
                }
              } while (iVar8 <= iVar9);
              if (ppuVar26 < ppuVar25) goto LAB_149877c3c;
              memcpy(&local_358,ppuVar25,0x280);
              memcpy(ppuVar25,ppuVar26,0x280);
              memcpy(ppuVar26,&local_358,0x280);
            } while( true );
          }
          pppuVar32 = local_790;
          if (ppuVar20 < ppuVar16) {
            ppuVar25 = ppuVar20 + 0x56;
            ppuVar26 = ppuVar20;
            ppuVar22 = ppuVar20 + 0x50;
            do {
              while (ppuVar22 <= ppuVar16) {
                iVar8 = -1;
                iVar9 = -1;
                if (0 < *(int *)(ppuVar26 + 4)) {
                  iVar9 = *(int *)ppuVar26[3];
                }
                if (0 < *(int *)(ppuVar25 + -2)) {
                  iVar8 = *(int *)ppuVar25[-3];
                }
                if (iVar9 == iVar8) {
                  FUN_144a78538(ppuVar26 + 6,ppuVar25);
                  bVar33 = (bool)(extraout_var_01 >> 7);
                }
                else {
                  bVar33 = iVar9 < iVar8;
                }
                if (bVar33 != false) {
                  ppuVar26 = ppuVar25 + -6;
                }
                ppuVar22 = ppuVar25 + 0x4a;
                ppuVar25 = ppuVar25 + 0x50;
              }
              ppuVar17 = ppuVar16 + -0x50;
              memcpy(&local_358,ppuVar26,0x280);
              memcpy(ppuVar26,ppuVar16,0x280);
              memcpy(ppuVar16,&local_358,0x280);
              pppuVar32 = local_790;
              ppuVar25 = ppuVar20 + 0x56;
              ppuVar26 = ppuVar20;
              ppuVar22 = ppuVar20 + 0x50;
              ppuVar16 = ppuVar17;
            } while (ppuVar20 < ppuVar17);
          }
          goto LAB_14987812f;
        }
LAB_149877d17:
        pppuVar32 = local_790;
        if (uVar29 != 0) {
          iVar9 = (iVar8 - (iVar8 + -1 >> 0x1f)) + -1 >> 1;
          iVar8 = iVar9;
joined_r0x000149877d39:
          do {
            iVar31 = iVar9 * 2 + 1;
            if (iVar31 < (int)uVar29) {
              iVar30 = iVar9 * 2 + 2;
              if (iVar30 < (int)uVar29) {
                lVar12 = (longlong)iVar30;
                iVar10 = -1;
                iVar11 = -1;
                if (0 < *(int *)(ppuVar20 + lVar12 * 0x50 + 4)) {
                  iVar11 = *(int *)ppuVar20[lVar12 * 0x50 + 3];
                }
                if (0 < *(int *)(ppuVar20 + (longlong)iVar31 * 0x50 + 4)) {
                  iVar10 = *(int *)ppuVar20[(longlong)iVar31 * 0x50 + 3];
                }
                if (iVar11 == iVar10) {
                  FUN_144a78538(ppuVar20 + lVar12 * 0x50 + 6,ppuVar20 + (longlong)iVar31 * 0x50 + 6)
                  ;
                  bVar33 = (bool)(extraout_var >> 7);
                }
                else {
                  bVar33 = iVar11 < iVar10;
                }
                if (bVar33 == false) {
                  iVar31 = iVar30;
                }
              }
              ppuVar16 = ppuVar20 + (longlong)iVar9 * 0x50;
              iVar11 = -1;
              iVar30 = -1;
              if (0 < *(int *)(ppuVar20 + (longlong)iVar9 * 0x50 + 4)) {
                iVar30 = *(int *)ppuVar16[3];
              }
              ppuVar26 = ppuVar20 + (longlong)iVar31 * 0x50;
              if (0 < *(int *)(ppuVar26 + 4)) {
                iVar11 = *(int *)ppuVar26[3];
              }
              if (iVar30 == iVar11) {
                iVar9 = FUN_144a78538(ppuVar16 + 6);
                if (iVar9 < 0) {
LAB_149877e0e:
                  memcpy(&local_358,ppuVar16,0x280);
                  memcpy(ppuVar16,ppuVar26,0x280);
                  memcpy(ppuVar26,&local_358,0x280);
                  iVar9 = iVar31;
                  goto joined_r0x000149877d39;
                }
              }
              else if (iVar30 < iVar11) goto LAB_149877e0e;
            }
            pppuVar32 = local_790;
            bVar33 = iVar8 != 0;
            iVar9 = iVar8 + -1;
            iVar8 = iVar9;
          } while (bVar33);
          if (1 < (int)uVar29) {
            memcpy(&local_358,ppuVar20,0x280);
            memcpy(ppuVar20,ppuVar20 + ((ulonglong)uVar29 - 1) * 0x50,0x280);
            memcpy(ppuVar20 + ((ulonglong)uVar29 - 1) * 0x50,&local_358,0x280);
            uVar18 = (ulonglong)uVar29 - 1;
            if (uVar29 != 2) {
              do {
                iVar9 = 0;
                iVar31 = 1;
                iVar8 = 0;
                do {
                  lVar12 = (longlong)(iVar9 + 2);
                  iVar30 = iVar31;
                  if (lVar12 < (longlong)uVar18) {
                    iVar10 = -1;
                    iVar11 = -1;
                    if (0 < *(int *)(ppuVar20 + lVar12 * 0x50 + 4)) {
                      iVar11 = *(int *)ppuVar20[lVar12 * 0x50 + 3];
                    }
                    if (0 < *(int *)(ppuVar20 + (longlong)iVar31 * 0x50 + 4)) {
                      iVar10 = *(int *)ppuVar20[(longlong)iVar31 * 0x50 + 3];
                    }
                    if (iVar11 == iVar10) {
                      FUN_144a78538(ppuVar20 + lVar12 * 0x50 + 6,
                                    ppuVar20 + (longlong)iVar31 * 0x50 + 6);
                      bVar33 = (bool)(extraout_var_00 >> 7);
                    }
                    else {
                      bVar33 = iVar11 < iVar10;
                    }
                    if (bVar33 == false) {
                      iVar30 = iVar9 + 2;
                    }
                  }
                  ppuVar16 = ppuVar20 + (longlong)iVar8 * 0x50;
                  iVar31 = -1;
                  iVar9 = -1;
                  if (0 < *(int *)(ppuVar20 + (longlong)iVar8 * 0x50 + 4)) {
                    iVar9 = *(int *)ppuVar16[3];
                  }
                  ppuVar26 = ppuVar20 + (longlong)iVar30 * 0x50;
                  if (0 < *(int *)(ppuVar26 + 4)) {
                    iVar31 = *(int *)ppuVar26[3];
                  }
                  if (iVar9 == iVar31) {
                    iVar9 = FUN_144a78538(ppuVar16 + 6,ppuVar26 + 6);
                    if (-1 < iVar9) break;
                  }
                  else if (iVar31 <= iVar9) break;
                  memcpy(&local_358,ppuVar16,0x280);
                  memcpy(ppuVar16,ppuVar26,0x280);
                  memcpy(ppuVar26,&local_358,0x280);
                  iVar9 = iVar30 * 2;
                  iVar31 = iVar30 * 2 + 1;
                  iVar8 = iVar30;
                } while ((longlong)iVar31 < (longlong)uVar18);
                memcpy(&local_358,ppuVar20,0x280);
                memcpy(ppuVar20,ppuVar20 + (uVar18 - 1) * 0x50,0x280);
                memcpy(ppuVar20 + (uVar18 - 1) * 0x50,&local_358,0x280);
                bVar33 = 2 < uVar18;
                uVar18 = uVar18 - 1;
                pppuVar32 = local_790;
              } while (bVar33);
            }
          }
        }
LAB_14987812f:
        pppuVar32 = pppuVar32 + -3;
      } while (&local_658 <= pppuVar32);
    }
    iVar9 = *(int *)(local_780 + 0x1a8);
    if (1 < (longlong)iVar9) {
      ppuVar20 = (undefined **)*local_768;
      memset(&plStack_648,0,0x2f0);
      local_650 = ppuVar20 + (longlong)iVar9 * 0x56 + -0x56;
      local_658 = ppuVar20;
      fVar34 = logf((float)iVar9);
      plStack_648 = (longlong *)CONCAT44(plStack_648._4_4_,(int)(longlong)(fVar34 + fVar34));
      pppuVar32 = &local_658;
      do {
        ppuVar20 = *pppuVar32;
        ppuVar16 = pppuVar32[1];
        iVar9 = *(int *)(pppuVar32 + 2);
        iVar8 = (int)((ulonglong)((longlong)ppuVar16 - (longlong)ppuVar20) >> 4) * 0x2fa0be83;
        uVar29 = iVar8 + 1;
        local_790 = pppuVar32;
        if (iVar9 != 0) {
LAB_1498781e9:
          if (8 < (int)uVar29) {
            local_788 = CONCAT44(local_788._4_4_,iVar9);
            local_778 = ppuVar16;
            memcpy(&local_358,ppuVar20 + (ulonglong)(uVar29 >> 1) * 0x56,0x2b0);
            memcpy(ppuVar20 + (ulonglong)(uVar29 >> 1) * 0x56,ppuVar20,0x2b0);
            memcpy(ppuVar20,&local_358,0x2b0);
            ppuVar26 = ppuVar16 + 0x56;
            ppuVar25 = ppuVar20;
            do {
              ppuVar22 = ppuVar25 + 0x56;
              if (ppuVar22 <= ppuVar16) {
                ppuVar25 = ppuVar25 + 0x5c;
                do {
                  ppuVar17 = ppuVar25;
                  iVar8 = -1;
                  iVar9 = -1;
                  if (0 < *(int *)(ppuVar20 + 4)) {
                    iVar9 = *(int *)ppuVar20[3];
                  }
                  if (0 < *(int *)(ppuVar17 + -2)) {
                    iVar8 = *(int *)ppuVar17[-3];
                  }
                  if (iVar9 == iVar8) {
                    iVar9 = FUN_144a78538(ppuVar20 + 6,ppuVar17);
                    if (iVar9 < 0) goto LAB_149878268;
                  }
                  else if (iVar9 < iVar8) {
                    ppuVar22 = ppuVar17 + -6;
                    goto LAB_149878268;
                  }
                  ppuVar22 = ppuVar22 + 0x56;
                  ppuVar25 = ppuVar17 + 0x56;
                } while (ppuVar17 + 0x50 <= ppuVar16);
                ppuVar22 = ppuVar17 + 0x50;
              }
LAB_149878268:
              do {
                ppuVar25 = ppuVar22;
                ppuVar17 = ppuVar26;
                ppuVar26 = ppuVar17 + -0x56;
                if (ppuVar26 <= ppuVar20) break;
                iVar8 = -1;
                iVar9 = -1;
                if (0 < *(int *)(ppuVar17 + -0x52)) {
                  iVar9 = *(int *)ppuVar17[-0x53];
                }
                if (0 < *(int *)(ppuVar20 + 4)) {
                  iVar8 = *(int *)ppuVar20[3];
                }
                ppuVar22 = ppuVar25;
                if (iVar9 == iVar8) {
                  iVar9 = FUN_144a78538(ppuVar17 + -0x50,ppuVar20 + 6);
                  if (iVar9 < 0) break;
                  goto LAB_149878268;
                }
              } while (iVar8 <= iVar9);
              if (ppuVar26 < ppuVar25) goto LAB_14987837d;
              memcpy(&local_358,ppuVar25,0x2b0);
              memcpy(ppuVar25,ppuVar26,0x2b0);
              memcpy(ppuVar26,&local_358,0x2b0);
            } while( true );
          }
          pppuVar32 = local_790;
          if (ppuVar20 < ppuVar16) {
            ppuVar25 = ppuVar20 + 0x5c;
            ppuVar26 = ppuVar20;
            ppuVar22 = ppuVar20 + 0x56;
            do {
              while (ppuVar22 <= ppuVar16) {
                iVar8 = -1;
                iVar9 = -1;
                if (0 < *(int *)(ppuVar26 + 4)) {
                  iVar9 = *(int *)ppuVar26[3];
                }
                if (0 < *(int *)(ppuVar25 + -2)) {
                  iVar8 = *(int *)ppuVar25[-3];
                }
                if (iVar9 == iVar8) {
                  FUN_144a78538(ppuVar26 + 6,ppuVar25);
                  bVar33 = (bool)(extraout_var_04 >> 7);
                }
                else {
                  bVar33 = iVar9 < iVar8;
                }
                if (bVar33 != false) {
                  ppuVar26 = ppuVar25 + -6;
                }
                ppuVar22 = ppuVar25 + 0x50;
                ppuVar25 = ppuVar25 + 0x56;
              }
              ppuVar17 = ppuVar16 + -0x56;
              memcpy(&local_358,ppuVar26,0x2b0);
              memcpy(ppuVar26,ppuVar16,0x2b0);
              memcpy(ppuVar16,&local_358,0x2b0);
              pppuVar32 = local_790;
              ppuVar25 = ppuVar20 + 0x5c;
              ppuVar26 = ppuVar20;
              ppuVar22 = ppuVar20 + 0x56;
              ppuVar16 = ppuVar17;
            } while (ppuVar20 < ppuVar17);
          }
          goto LAB_149878866;
        }
LAB_149878458:
        pppuVar32 = local_790;
        if (uVar29 != 0) {
          iVar9 = (iVar8 - (iVar8 + -1 >> 0x1f)) + -1 >> 1;
          iVar8 = iVar9;
joined_r0x00014987847a:
          do {
            iVar31 = iVar9 * 2 + 1;
            if (iVar31 < (int)uVar29) {
              iVar30 = iVar9 * 2 + 2;
              if (iVar30 < (int)uVar29) {
                lVar12 = (longlong)iVar30;
                iVar10 = -1;
                iVar11 = -1;
                if (0 < *(int *)(ppuVar20 + lVar12 * 0x56 + 4)) {
                  iVar11 = *(int *)ppuVar20[lVar12 * 0x56 + 3];
                }
                if (0 < *(int *)(ppuVar20 + (longlong)iVar31 * 0x56 + 4)) {
                  iVar10 = *(int *)ppuVar20[(longlong)iVar31 * 0x56 + 3];
                }
                if (iVar11 == iVar10) {
                  FUN_144a78538(ppuVar20 + lVar12 * 0x56 + 6,ppuVar20 + (longlong)iVar31 * 0x56 + 6)
                  ;
                  bVar33 = (bool)(extraout_var_02 >> 7);
                }
                else {
                  bVar33 = iVar11 < iVar10;
                }
                if (bVar33 == false) {
                  iVar31 = iVar30;
                }
              }
              ppuVar16 = ppuVar20 + (longlong)iVar9 * 0x56;
              iVar11 = -1;
              iVar30 = -1;
              if (0 < *(int *)(ppuVar20 + (longlong)iVar9 * 0x56 + 4)) {
                iVar30 = *(int *)ppuVar16[3];
              }
              ppuVar26 = ppuVar20 + (longlong)iVar31 * 0x56;
              if (0 < *(int *)(ppuVar26 + 4)) {
                iVar11 = *(int *)ppuVar26[3];
              }
              if (iVar30 == iVar11) {
                iVar9 = FUN_144a78538(ppuVar16 + 6,ppuVar26 + 6);
                if (iVar9 < 0) {
LAB_14987854b:
                  memcpy(&local_358,ppuVar16,0x2b0);
                  memcpy(ppuVar16,ppuVar26,0x2b0);
                  memcpy(ppuVar26,&local_358,0x2b0);
                  iVar9 = iVar31;
                  goto joined_r0x00014987847a;
                }
              }
              else if (iVar30 < iVar11) goto LAB_14987854b;
            }
            pppuVar32 = local_790;
            bVar33 = iVar8 != 0;
            iVar9 = iVar8 + -1;
            iVar8 = iVar9;
          } while (bVar33);
          if (1 < (int)uVar29) {
            memcpy(&local_358,ppuVar20,0x2b0);
            memcpy(ppuVar20,ppuVar20 + ((ulonglong)uVar29 - 1) * 0x56,0x2b0);
            memcpy(ppuVar20 + ((ulonglong)uVar29 - 1) * 0x56,&local_358,0x2b0);
            uVar18 = (ulonglong)uVar29 - 1;
            if (uVar29 != 2) {
              do {
                iVar9 = 0;
                iVar31 = 1;
                iVar8 = 0;
                do {
                  lVar12 = (longlong)(iVar9 + 2);
                  iVar30 = iVar31;
                  if (lVar12 < (longlong)uVar18) {
                    iVar10 = -1;
                    iVar11 = -1;
                    if (0 < *(int *)(ppuVar20 + lVar12 * 0x56 + 4)) {
                      iVar11 = *(int *)ppuVar20[lVar12 * 0x56 + 3];
                    }
                    if (0 < *(int *)(ppuVar20 + (longlong)iVar31 * 0x56 + 4)) {
                      iVar10 = *(int *)ppuVar20[(longlong)iVar31 * 0x56 + 3];
                    }
                    if (iVar11 == iVar10) {
                      FUN_144a78538(ppuVar20 + lVar12 * 0x56 + 6,
                                    ppuVar20 + (longlong)iVar31 * 0x56 + 6);
                      bVar33 = (bool)(extraout_var_03 >> 7);
                    }
                    else {
                      bVar33 = iVar11 < iVar10;
                    }
                    if (bVar33 == false) {
                      iVar30 = iVar9 + 2;
                    }
                  }
                  ppuVar16 = ppuVar20 + (longlong)iVar8 * 0x56;
                  iVar31 = -1;
                  iVar9 = -1;
                  if (0 < *(int *)(ppuVar20 + (longlong)iVar8 * 0x56 + 4)) {
                    iVar9 = *(int *)ppuVar16[3];
                  }
                  ppuVar26 = ppuVar20 + (longlong)iVar30 * 0x56;
                  if (0 < *(int *)(ppuVar26 + 4)) {
                    iVar31 = *(int *)ppuVar26[3];
                  }
                  if (iVar9 == iVar31) {
                    iVar9 = FUN_144a78538(ppuVar16 + 6,ppuVar26 + 6);
                    if (-1 < iVar9) break;
                  }
                  else if (iVar31 <= iVar9) break;
                  memcpy(&local_358,ppuVar16,0x2b0);
                  memcpy(ppuVar16,ppuVar26,0x2b0);
                  memcpy(ppuVar26,&local_358,0x2b0);
                  iVar9 = iVar30 * 2;
                  iVar31 = iVar30 * 2 + 1;
                  iVar8 = iVar30;
                } while ((longlong)iVar31 < (longlong)uVar18);
                memcpy(&local_358,ppuVar20,0x2b0);
                memcpy(ppuVar20,ppuVar20 + (uVar18 - 1) * 0x56,0x2b0);
                memcpy(ppuVar20 + (uVar18 - 1) * 0x56,&local_358,0x2b0);
                bVar33 = 2 < uVar18;
                uVar18 = uVar18 - 1;
                pppuVar32 = local_790;
              } while (bVar33);
            }
          }
        }
LAB_149878866:
        pppuVar32 = pppuVar32 + -3;
      } while (&local_658 <= pppuVar32);
    }
    lVar12 = local_780;
    if ((longlong)*(int *)(local_780 + 0x198) != 0) {
      lVar13 = *(longlong *)(local_780 + 400);
      lVar15 = (longlong)*(int *)(local_780 + 0x198) * 0x280 + lVar13;
      do {
        iVar9 = *(int *)(lVar13 + 0x20);
        if ((longlong)iVar9 != 0) {
          lVar23 = *(longlong *)(lVar13 + 0x18);
          lVar27 = 0;
          do {
            *(undefined1 *)(*(longlong *)(local_780 + 0x178) + (longlong)*(int *)(lVar23 + lVar27))
                 = 1;
            lVar27 = lVar27 + 4;
          } while ((longlong)iVar9 * 4 != lVar27);
        }
        lVar13 = lVar13 + 0x280;
      } while (lVar13 != lVar15);
      if ((longlong)*(int *)(local_780 + 0x198) != 0) {
        lVar13 = local_780 + 0xf0;
        lVar15 = (longlong)*(int *)(local_780 + 0x198) * 0x280;
        lVar23 = *(longlong *)(local_780 + 400) + 400;
        do {
          FUN_149871c6a(lVar23,*(undefined4 *)(lVar12 + 600),**(undefined4 **)(lVar23 + -0x178),
                        lVar13);
          lVar23 = lVar23 + 0x280;
          lVar15 = lVar15 + -0x280;
        } while (lVar15 != 0);
      }
    }
    if (*(char *)(lVar12 + 0x68) != '\0') {
      *(undefined1 *)(*(longlong *)(lVar12 + 0x178) + (longlong)*(int *)(lVar12 + 600)) = 1;
    }
    bVar33 = true;
    if (*(int *)(lVar12 + 0x1a8) == 0) {
      bVar33 = *(int *)(lVar12 + 0x198) != 0;
    }
    if ((local_a0 ^ (ulonglong)auStack_7c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return bVar33;
  }
  ppuVar16 = *(undefined ***)(*(longlong *)(param_1 + 0x70) + 0x90);
  ppuVar20 = ppuVar16 + lVar13;
  local_788 = param_1 + 0x28;
  local_778 = ppuVar20;
LAB_149876f11:
  puVar3 = *ppuVar16;
  if ((longlong)*(int *)(lVar12 + 0xf8) != 0) {
    plVar19 = *(longlong **)(lVar12 + 0xf0);
    lVar13 = (longlong)*(int *)(lVar12 + 0xf8) * 0x30;
    do {
      if (*plVar19 == *(longlong *)(puVar3 + 0x30)) {
        if (plVar19 != (longlong *)0x0) {
          if (*(undefined **)(puVar3 + 0x28) == (undefined *)0x0) goto LAB_149877165;
          if ((longlong)*(int *)(local_790 + 0x1f) == 0) goto LAB_1498771a8;
          ppuVar26 = local_790[0x1e];
          lVar13 = (longlong)*(int *)(local_790 + 0x1f) * 0x30;
          goto LAB_14987737b;
        }
        break;
      }
      plVar19 = plVar19 + 6;
      lVar13 = lVar13 + -0x30;
    } while (lVar13 != 0);
  }
  FUN_1400021e4(puVar3 + 0x30,&local_6a8);
  FUN_140233b1a(local_6b8,&local_6a8);
  local_658 = (undefined **)0x14bec3538;
  local_650._0_4_ = 0x12;
  FUN_1446e940c(local_708,&local_658);
  local_658 = (undefined **)0x14bec20ba;
  local_650 = (undefined **)CONCAT44(local_650._4_4_,0x13);
  FUN_1446e940c(local_728,&local_658);
  FUN_140208bae(&local_6d8,local_728,local_708);
  FUN_14023409e(&local_6c8,&local_6d8,1);
  local_658 = (undefined **)CONCAT44(local_658._4_4_,4);
  FUN_14023423e(&plStack_648,local_6b8);
  local_670 = &uStack_638;
  local_678 = &local_658;
  FUN_14010d304(&local_358,&local_678);
  local_688 = local_6c8;
  local_680 = local_6c0;
  if (local_6c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_6c0 + 1) = (int)local_6c0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(&local_698,&local_688,&local_358);
  FUN_14007f2db(local_358,local_350 & 0xffffffff);
  if (local_358 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  ppuVar20 = local_778;
  if (plStack_648 != (longlong *)0x0) {
    (**(code **)(*plStack_648 + 0x10))();
  }
  plVar19 = local_6c0;
  plVar14 = local_6b8[0];
  if (local_6c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_6c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_6c0)(local_6c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar19 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar14 = local_6b8[0];
      if (*piVar2 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        plVar14 = local_6b8[0];
      }
    }
  }
  goto LAB_149877101;
  while( true ) {
    ppuVar26 = ppuVar26 + 6;
    lVar13 = lVar13 + -0x30;
    if (lVar13 == 0) break;
LAB_14987737b:
    if (*ppuVar26 == *(undefined **)(puVar3 + 0x28)) {
      if (ppuVar26 != (undefined **)0x0) {
        local_7a8 = local_780 + 0xf0;
        lVar13 = local_780 + 0x78;
        local_330 = 0;
        uStack_328 = 0;
        local_340 = 0;
        uStack_338 = 0;
        local_350 = 0;
        uStack_348 = 0;
        local_358 = &PTR_FUN_14becce70;
        local_320 = 1;
        local_31c = 0x3f800000;
        local_318 = 0;
        local_314 = 0x3f800000;
        local_30c = 0;
        local_308 = 0;
        local_298 = 0;
        uStack_290 = 0;
        local_2f8 = 0;
        uStack_2f0 = 0;
        local_2e8 = 0;
        uStack_2e0 = 0;
        local_2d8 = 0;
        uStack_2d0 = 0;
        local_2c8 = 0;
        uStack_2c0 = 0;
        local_2b8 = 0;
        uStack_2b0 = 0;
        local_288 = 0;
        uStack_284 = 0;
        uStack_280 = 0;
        uStack_27c = 0x3ff00000;
        local_268 = 0;
        uStack_260 = 0;
        local_278 = 0;
        uStack_270 = 0;
        local_258 = 0x3ff0000000000000;
        uStack_250 = 0x3ff0000000000000;
        local_248 = 0x3ff0000000000000;
        uStack_240 = 0;
        local_238 = 0;
        uStack_230 = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_218 = 0;
        uStack_214 = 0;
        uStack_210 = 0;
        uStack_20c = 0x3ff00000;
        local_208 = 0;
        uStack_200 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_1e8 = 0x3ff0000000000000;
        uStack_1e0 = 0x3ff0000000000000;
        local_1d8 = 0x3ff0000000000000;
        uStack_1d0 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_188 = 0;
        uStack_180 = 0;
        local_158 = 0;
        uStack_154 = 0;
        uStack_150 = 0;
        uStack_14c = 0x3ff00000;
        local_138 = 0;
        uStack_130 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_128 = 0x3ff0000000000000;
        uStack_120 = 0x3ff0000000000000;
        local_118 = 0x3ff0000000000000;
        uStack_110 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_7a0 = local_788;
        local_758 = local_7a8;
        cVar7 = FUN_14987382a(&local_358,ppuVar26,plVar19,lVar13);
        if (cVar7 != '\0') {
          iVar9 = *(int *)(local_780 + 0x198);
          *(uint *)(local_780 + 0x198) = iVar9 + 1U;
          local_760 = lVar13;
          if (*(uint *)(local_780 + 0x19c) < iVar9 + 1U) {
            FUN_14988dbae(local_770,iVar9);
          }
          FUN_14988dae4((longlong)iVar9 * 0x280 + *local_770);
        }
        local_630 = 0;
        uStack_628 = 0;
        local_640 = 0;
        uStack_638 = 0;
        local_650 = (undefined **)0x0;
        plStack_648 = (longlong *)0x0;
        local_658 = &PTR_FUN_14becce90;
        local_620[0] = 1;
        local_61c = 0;
        local_618 = DAT_14c846510;
        uStack_610 = DAT_14c846518;
        local_608 = DAT_14c846520;
        local_600 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_5f8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_5f0 = DAT_14c8464f0;
        local_5d8 = DAT_14c8464f0;
        local_5d0 = DAT_14c8464f8;
        uStack_5c8 = DAT_14c846500;
        local_5c0 = DAT_14c846508;
        local_5b8 = &DAT_3f8000003f800000;
        local_5b0 = 1;
        local_5a8 = 0;
        local_5a4 = 0;
        uStack_59c = 0x437a000041700000;
        local_594 = 0x3f800000;
        local_588 = 0xffffffffffffffff;
        local_570 = DAT_14c8464f0;
        local_580 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_578 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_568 = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
        uStack_560 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
        local_558 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
        uStack_550 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
        local_548 = 0x3f800000;
        local_530 = DAT_14c8464f0;
        local_518 = DAT_14c8464f0;
        local_500 = DAT_14c8464f0;
        local_4d8 = 0;
        local_4c8 = 0xffffffffffffffff;
        local_4c0 = 0x3f800000;
        local_4a8 = DAT_14c8464f0;
        local_4b8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_4b0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_488 = (undefined4)DAT_14c8463e0;
        uStack_484 = DAT_14c8463e0._4_4_;
        uStack_480 = (undefined4)DAT_14c8463e8;
        uStack_47c = DAT_14c8463e8._4_4_;
        local_498 = (undefined4)DAT_14c8463d0;
        uStack_494 = DAT_14c8463d0._4_4_;
        uStack_490 = (undefined4)DAT_14c8463d8;
        uStack_48c = DAT_14c8463d8._4_4_;
        local_468 = DAT_14c8464f0;
        local_448 = DAT_14c8464f0;
        local_428 = (undefined4)DAT_14c8463e0;
        uStack_424 = DAT_14c8463e0._4_4_;
        uStack_420 = (undefined4)DAT_14c8463e8;
        uStack_41c = DAT_14c8463e8._4_4_;
        local_438 = (undefined4)DAT_14c8463d0;
        uStack_434 = DAT_14c8463d0._4_4_;
        uStack_430 = (undefined4)DAT_14c8463d8;
        uStack_42c = DAT_14c8463d8._4_4_;
        local_408 = DAT_14c8464f0;
        local_418 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_410 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_3e0 = DAT_14c8464f0;
        local_3f0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_3e8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_3c8 = DAT_14c8464f0;
        local_3d8 = (undefined4)DAT_14c8464e0;
        uStack_3d4 = DAT_14c8464e0._4_4_;
        uStack_3d0 = (undefined4)DAT_14c8464e8;
        uStack_3cc = DAT_14c8464e8._4_4_;
        local_3c0 = 0;
        local_3b8 = 0;
        uStack_3b0 = 0;
        local_7a0 = local_788;
        local_7a8 = local_758;
        local_5e8 = local_600;
        uStack_5e0 = uStack_5f8;
        local_540 = local_580;
        uStack_538 = uStack_578;
        local_528 = local_580;
        uStack_520 = uStack_578;
        local_510 = local_580;
        uStack_508 = uStack_578;
        local_4f8 = local_568;
        uStack_4f0 = uStack_560;
        local_4e8 = local_558;
        uStack_4e0 = uStack_550;
        local_478 = local_4b8;
        uStack_470 = uStack_4b0;
        local_458 = local_4b8;
        uStack_450 = uStack_4b0;
        cVar7 = FUN_149873f6e(&local_658,ppuVar26,plVar19);
        if (cVar7 != '\0') {
          iVar9 = *(int *)(local_780 + 0x1a8);
          *(uint *)(local_780 + 0x1a8) = iVar9 + 1U;
          if (*(uint *)(local_780 + 0x1ac) < iVar9 + 1U) {
            FUN_14988def0(local_768,iVar9);
          }
          lVar13 = *local_768;
          FUN_14988a7ea(lVar13 + (longlong)iVar9 * 0x2b0,&local_658);
          puVar21 = (undefined8 *)(lVar13 + (longlong)iVar9 * 0x2b0);
          *puVar21 = &PTR_FUN_14becce90;
          memcpy(puVar21 + 7,local_620,0x278);
        }
        local_6d8 = (longlong *)0x0;
        local_6d0 = *(int *)(lVar12 + 0xd0);
        lVar13 = (longlong)local_6d0;
        _Src = *(void **)(lVar12 + 200);
        if (lVar13 == 0) goto LAB_1498777e4;
        FUN_14988df84(&local_6d8,local_6d0);
        memcpy(local_6d8,_Src,lVar13 << 3);
        if ((longlong)local_6d0 == 0) goto LAB_149878abe;
        lVar13 = 0;
        goto LAB_149877177;
      }
      break;
    }
  }
LAB_1498771a8:
  FUN_1400021e4(puVar3 + 0x28,&local_6a8);
  FUN_140233b1a(local_6e8,&local_6a8);
  local_658 = (undefined **)0x14bec35b8;
  local_650._0_4_ = 0x12;
  FUN_1446e940c(local_708,&local_658);
  local_658 = (undefined **)0x14bec20ba;
  local_650 = (undefined **)CONCAT44(local_650._4_4_,0x13);
  FUN_1446e940c(local_728,&local_658);
  FUN_140208bae(&local_6d8,local_728,local_708);
  FUN_14023409e(&local_6f8,&local_6d8,1);
  local_658 = (undefined **)CONCAT44(local_658._4_4_,4);
  FUN_14023423e(&plStack_648,local_6e8);
  local_670 = &uStack_638;
  local_678 = &local_658;
  FUN_14010d304(&local_358,&local_678);
  local_688 = local_6f8;
  local_680 = local_6f0;
  if (local_6f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_6f0 + 1) = (int)local_6f0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(&local_698,&local_688,&local_358);
  FUN_14007f2db(local_358,local_350 & 0xffffffff);
  if (local_358 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  ppuVar20 = local_778;
  if (plStack_648 != (longlong *)0x0) {
    (**(code **)(*plStack_648 + 0x10))();
  }
  plVar19 = local_6f0;
  plVar14 = local_6e8[0];
  if (local_6f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_6f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_6f0)(local_6f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar19 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar14 = local_6e8[0];
      if (*piVar2 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        plVar14 = local_6e8[0];
      }
    }
  }
LAB_149877101:
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  FUN_14986922e(local_788);
  if (local_698 != (undefined ****)0x0) {
    (*(code *)(*local_698)[2])();
  }
  if (local_6d8 != (longlong *)0x0) {
    (**(code **)(*local_6d8 + 0x10))();
  }
  if (local_6a8 != 0) {
    FUN_1400020a8();
  }
LAB_149877165:
  ppuVar16 = ppuVar16 + 1;
  if (ppuVar16 == ppuVar20) goto LAB_149877822;
  goto LAB_149876f11;
  while (lVar13 = lVar13 + 8, (longlong)local_6d0 << 3 != lVar13) {
LAB_149877177:
    if (*(longlong *)(*(longlong *)((longlong)local_6d8 + lVar13) + 0x28) == plVar19[5]) {
      if (*(longlong *)(*(longlong *)((longlong)local_6d8 + lVar13) + 0x30) != plVar19[3]) {
        FUN_1400021e4(plVar19,local_728);
        FUN_140233b1a(local_718,local_728);
        local_678 = (undefined ***)0x14bec367c;
        local_670._0_4_ = 0x14;
        FUN_1446e940c(local_74c,&local_678);
        local_678 = (undefined ***)0x14bec20ba;
        local_670 = (undefined8 *)CONCAT44(local_670._4_4_,0x13);
        FUN_1446e940c(local_750,&local_678);
        FUN_140208bae(local_748,local_750,local_74c);
        FUN_14023409e(&local_738,local_748,1);
        local_678 = (undefined ***)CONCAT44(local_678._4_4_,4);
        FUN_14023423e(local_668,local_718);
        local_698 = &local_678;
        local_690 = &local_658;
        FUN_14010d304(&local_688,&local_698);
        local_6a8 = local_738;
        local_6a0 = local_730;
        if (local_730 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_730 + 1) = (int)local_730[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_708,&local_6a8,&local_688);
        FUN_14007f2db(local_688,(ulonglong)local_680 & 0xffffffff);
        if (local_688 != 0) {
          FUN_1400020a8();
        }
        if (local_668[0] != (longlong *)0x0) {
          (**(code **)(*local_668[0] + 0x10))();
        }
        plVar19 = local_730;
        if (local_730 != (longlong *)0x0) {
          LOCK();
          plVar14 = local_730 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*local_730)(local_730);
            LOCK();
            piVar2 = (int *)((longlong)plVar19 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
            }
          }
        }
        if (local_718[0] != (longlong *)0x0) {
          (**(code **)(*local_718[0] + 0x10))();
        }
        FUN_14986922e(local_788);
        if (local_708[0] != (longlong *)0x0) {
          (**(code **)(*local_708[0] + 0x10))();
        }
        if (local_748[0] != (longlong *)0x0) {
          (**(code **)(*local_748[0] + 0x10))();
        }
        if (local_728[0] != 0) {
          FUN_1400020a8();
        }
      }
      break;
    }
  }
LAB_149878abe:
  if (local_6d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1498777e4:
  local_658 = &PTR_FUN_14becce80;
  if (local_640 != 0) {
    FUN_1400020a8();
  }
  if (local_650 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_149879726(&local_358);
  goto LAB_149877165;
LAB_149877c3c:
  memcpy(&local_358,ppuVar20,0x280);
  memcpy(ppuVar20,ppuVar26,0x280);
  memcpy(ppuVar26,&local_358,0x280);
  iVar9 = (int)local_788 + -1;
  ppuVar17 = ppuVar17 + -0xa0;
  if ((longlong)ppuVar17 - (longlong)ppuVar20 < (longlong)local_778 - (longlong)ppuVar25) {
    if (ppuVar25 < ppuVar16) {
      *local_790 = ppuVar25;
      local_790[1] = ppuVar16;
      *(int *)(local_790 + 2) = iVar9;
      local_790 = local_790 + 3;
    }
    pppuVar32 = local_790;
    if (ppuVar26 <= ppuVar20 + 0x50) goto LAB_14987812f;
  }
  else {
    pppuVar32 = local_790;
    if (ppuVar20 + 0x50 < ppuVar26) {
      *local_790 = ppuVar20;
      local_790[1] = ppuVar17;
      *(int *)(local_790 + 2) = iVar9;
      pppuVar32 = local_790 + 3;
    }
    ppuVar17 = ppuVar16;
    ppuVar20 = ppuVar25;
    if (ppuVar16 <= ppuVar25) goto LAB_14987812f;
  }
  local_790 = pppuVar32;
  iVar8 = (int)((ulonglong)((longlong)ppuVar17 - (longlong)ppuVar20) >> 7) * -0x33333333;
  uVar29 = iVar8 + 1;
  ppuVar16 = ppuVar17;
  if (iVar9 == 0) goto LAB_149877d17;
  goto LAB_149877aa7;
LAB_14987837d:
  memcpy(&local_358,ppuVar20,0x2b0);
  memcpy(ppuVar20,ppuVar26,0x2b0);
  memcpy(ppuVar26,&local_358,0x2b0);
  iVar9 = (int)local_788 + -1;
  ppuVar17 = ppuVar17 + -0xac;
  if ((longlong)ppuVar17 - (longlong)ppuVar20 < (longlong)local_778 - (longlong)ppuVar25) {
    if (ppuVar25 < ppuVar16) {
      *local_790 = ppuVar25;
      local_790[1] = ppuVar16;
      *(int *)(local_790 + 2) = iVar9;
      local_790 = local_790 + 3;
    }
    pppuVar32 = local_790;
    if (ppuVar26 <= ppuVar20 + 0x56) goto LAB_149878866;
  }
  else {
    pppuVar32 = local_790;
    if (ppuVar20 + 0x56 < ppuVar26) {
      *local_790 = ppuVar20;
      local_790[1] = ppuVar17;
      *(int *)(local_790 + 2) = iVar9;
      pppuVar32 = local_790 + 3;
    }
    ppuVar17 = ppuVar16;
    ppuVar20 = ppuVar25;
    if (ppuVar16 <= ppuVar25) goto LAB_149878866;
  }
  local_790 = pppuVar32;
  iVar8 = (int)((ulonglong)((longlong)ppuVar17 - (longlong)ppuVar20) >> 4) * 0x2fa0be83;
  uVar29 = iVar8 + 1;
  ppuVar16 = ppuVar17;
  if (iVar9 == 0) goto LAB_149878458;
  goto LAB_1498781e9;
}



// FUNCTION 149878d18 FUN_149878d18 body=1809 status=ok
// SIG undefined FUN_149878d18(void)

ulonglong FUN_149878d18(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_418 [40];
  longlong *local_3f0;
  longlong *local_3e8;
  undefined8 local_3e0;
  undefined1 local_3d4 [4];
  longlong *local_3d0 [2];
  longlong *local_3c0;
  longlong *local_3b8;
  longlong *local_3b0 [2];
  undefined1 local_39c [4];
  longlong *local_398 [2];
  wchar_t **local_388;
  ulonglong *local_380;
  longlong *local_378 [2];
  longlong *local_368 [2];
  longlong local_358;
  undefined8 uStack_350;
  longlong *local_348;
  longlong *local_340;
  wchar_t **local_338;
  ulonglong *local_330;
  undefined ***local_328;
  undefined1 *local_320;
  undefined **local_318;
  undefined4 local_310 [2];
  undefined1 local_308 [8];
  longlong local_300;
  undefined4 local_2f8;
  undefined1 local_2e8 [8];
  char local_2e0 [8];
  undefined1 local_2d8 [24];
  undefined2 local_2c0;
  undefined8 local_78;
  wchar_t *local_68;
  undefined4 local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_418;
  local_3f0 = param_3;
  local_3e0 = param_2;
  lVar5 = FUN_14986be0e(param_1[0xe]);
  local_358 = 0;
  uStack_350 = 0;
  local_3e8 = param_1;
  if ((longlong)(int)param_1[0x35] != 0) {
    lVar12 = param_1[0x34];
    lVar7 = (longlong)(int)param_1[0x35] * 0x2b0 + lVar12;
    do {
      FUN_14988a7ea(&local_318,lVar12);
      local_318 = &PTR_FUN_14becce90;
      memcpy(local_2e0,(void *)(lVar12 + 0x38),0x278);
      uVar9 = uStack_350;
      if (local_2e0[0] == '\0') {
        param_1 = (longlong *)(longlong)(int)uStack_350;
        uVar4 = (int)uStack_350 + 1;
        uStack_350 = CONCAT44(uStack_350._4_4_,uVar4);
        if (uStack_350._4_4_ < uVar4) {
          FUN_1446f84a2(&local_358,uVar9 & 0xffffffff);
        }
        *(undefined8 *)(local_358 + (longlong)param_1 * 8) = local_78;
      }
      local_318 = &PTR_FUN_14becce80;
      if (local_300 != 0) {
        FUN_1400020a8();
      }
      if (CONCAT44(local_310[1],local_310[0]) != 0) {
        FUN_1400020a8();
      }
      lVar12 = lVar12 + 0x2b0;
    } while (lVar12 != lVar7);
  }
  lVar12 = FUN_14986677d(local_3e0);
  if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar12);
  }
  plVar11 = local_3e8;
  local_3e8[0x31] = lVar12;
  FUN_149864ec4(lVar12,lVar5,local_3f0,&local_358);
  lVar12 = plVar11[0x31];
  if (*(char *)(lVar12 + 0x140) == '\0') {
LAB_1498793e6:
    uVar9 = 0;
  }
  else {
    if ((longlong)(int)plVar11[0x35] != 0) {
      lVar7 = plVar11[0x34];
      lVar6 = (longlong)(int)plVar11[0x35] * 0x2b0 + lVar7;
      do {
        if ((int)uStack_350 != 0) {
          lVar10 = 0;
          do {
            if (*(longlong *)(local_358 + lVar10) == *(longlong *)(lVar7 + 0x2a0))
            goto LAB_149878f40;
            lVar10 = lVar10 + 8;
          } while ((longlong)(int)uStack_350 << 3 != lVar10);
        }
        if ((longlong)*(int *)(lVar12 + 0x78) == 0) {
LAB_1498791c9:
          FUN_145715fae(local_368,lVar7 + 0x2a0);
          FUN_145715fae(local_378,lVar7 + 0x30);
          local_318 = (undefined **)0x14bec37b6;
          local_310[0] = 0x17;
          FUN_1446e940c(local_3d0,&local_318);
          local_318 = (undefined **)0x14bec20ba;
          local_310[0] = 0x13;
          FUN_1446e940c(local_39c,&local_318);
          FUN_140208bae(local_398,local_39c,local_3d0,
                        L"IK Retargeter has target bone chain, {0} that references an IK Goal, {1} that is not present in any of the solvers in the IK Rig asset."
                       );
          FUN_14023409e(&local_388,local_398,1);
          local_318 = (undefined **)CONCAT44(local_318._4_4_,4);
          FUN_14023423e(local_308,local_378);
          local_2f8 = 4;
          FUN_14023423e(local_2e8,local_368);
          local_320 = local_2d8;
          local_328 = &local_318;
          FUN_14010d304(&local_68);
          local_338 = local_388;
          local_330 = local_380;
          if (local_380 != (ulonglong *)0x0) {
            LOCK();
            *(int *)(local_380 + 1) = (int)local_380[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(&local_348,&local_338,&local_68);
          FUN_14007f2db(local_68,local_60);
          if (local_68 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          lVar5 = 0x30;
          do {
            if (*(longlong **)((longlong)&local_318 + lVar5) != (longlong *)0x0) {
              (**(code **)(**(longlong **)((longlong)&local_318 + lVar5) + 0x10))();
              *(undefined8 *)((longlong)&local_318 + lVar5) = 0;
              *(undefined4 *)((longlong)local_310 + lVar5) = 0;
            }
            lVar5 = lVar5 + -0x20;
          } while (lVar5 != -0x10);
          if (local_380 != (ulonglong *)0x0) {
            LOCK();
            puVar2 = local_380 + 1;
            *(int *)puVar2 = (int)*puVar2 + -1;
            UNLOCK();
            if ((int)*puVar2 == 0) {
              (**(code **)*local_380)(local_380);
              LOCK();
              piVar3 = (int *)((longlong)local_380 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*local_380 + 0x10))(local_380);
              }
            }
          }
          if (local_378[0] != (longlong *)0x0) {
            (**(code **)(*local_378[0] + 0x10))();
          }
          if (local_368[0] != (longlong *)0x0) {
            (**(code **)(*local_368[0] + 0x10))();
          }
          FUN_149869152(plVar11 + 5,&local_348);
          if (local_348 != (longlong *)0x0) {
            (**(code **)(*local_348 + 0x10))();
          }
          if (local_398[0] != (longlong *)0x0) {
            (**(code **)(*local_398[0] + 0x10))();
          }
          goto LAB_1498793e6;
        }
        plVar8 = *(longlong **)(lVar12 + 0x70);
        param_1 = (longlong *)((longlong)*(int *)(lVar12 + 0x78) * 0xa0);
        while (*plVar8 != *(longlong *)(lVar7 + 0x2a0)) {
          plVar8 = plVar8 + 0x14;
          param_1 = param_1 + -0x14;
          if (param_1 == (longlong *)0x0) goto LAB_1498791c9;
        }
        if (plVar8 == (longlong *)0x0) goto LAB_1498791c9;
LAB_149878f40:
        lVar7 = lVar7 + 0x2b0;
      } while (lVar7 != lVar6);
    }
    if ((longlong)*(int *)(lVar12 + 0x78) != 0) {
      plVar8 = *(longlong **)(lVar12 + 0x70);
      param_1 = plVar8 + (longlong)*(int *)(lVar12 + 0x78) * 0x14;
      local_3f0 = plVar11 + 5;
      do {
        if ((longlong)*(int *)(lVar5 + 0xf8) != 0) {
          lVar12 = *(longlong *)(lVar5 + 0xf0);
          lVar7 = (longlong)*(int *)(lVar5 + 0xf8) * 0x30;
          do {
            if (*(longlong *)(lVar12 + 0x28) == *plVar8) {
              if (lVar12 != 0) goto LAB_1498791b1;
              break;
            }
            lVar12 = lVar12 + 0x30;
            lVar7 = lVar7 + -0x30;
          } while (lVar7 != 0);
        }
        memcpy(&local_318,plVar8,0xa0);
        local_2c0 = 0x101;
        FUN_14987f53a(plVar11[0x31] + 0x70,&local_318);
        FUN_145715fae(local_3b0,plVar8);
        local_68 = L"TargetIKGoalNotInChain";
        local_60 = 0x16;
        FUN_1446e940c(local_39c,&local_68);
        local_68 = L"IKRetargetProcessor";
        local_60 = 0x13;
        FUN_1446e940c(local_3d4,&local_68);
        FUN_140208bae(local_3d0,local_3d4,local_39c,
                      L"The target IK Rig has a Goal, {0} that is not present in any of the target chains. It has been set to \'Additive\' mode while retargeting."
                     );
        FUN_14023409e(&local_3c0,local_3d0,1);
        local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
        FUN_14023423e(local_58,local_3b0);
        local_330 = &local_48;
        local_338 = &local_68;
        FUN_14010d304(&local_328,&local_338);
        local_348 = local_3c0;
        local_340 = local_3b8;
        if (local_3b8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_3b8 + 1) = (int)local_3b8[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_398,&local_348,&local_328);
        FUN_14007f2db(local_328,(ulonglong)local_320 & 0xffffffff);
        if (local_328 != (undefined ***)0x0) {
          FUN_1400020a8();
        }
        if (local_58[0] != (longlong *)0x0) {
          (**(code **)(*local_58[0] + 0x10))();
        }
        plVar11 = local_3b8;
        if (local_3b8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_3b8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_3b8)(local_3b8);
            LOCK();
            piVar3 = (int *)((longlong)plVar11 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
        if (local_3b0[0] != (longlong *)0x0) {
          (**(code **)(*local_3b0[0] + 0x10))();
        }
        FUN_14986922e(local_3f0,local_398);
        plVar11 = local_3e8;
        if (local_398[0] != (longlong *)0x0) {
          (**(code **)(*local_398[0] + 0x10))();
        }
        if (local_3d0[0] != (longlong *)0x0) {
          (**(code **)(*local_3d0[0] + 0x10))();
        }
LAB_1498791b1:
        plVar8 = plVar8 + 0x14;
      } while (plVar8 != param_1);
    }
    uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  if (local_358 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 14987942a FUN_14987942a body=762 status=ok
// SIG undefined FUN_14987942a(void)

ulonglong FUN_14987942a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  byte bVar7;
  undefined7 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  byte local_a9;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80 [2];
  longlong local_70 [2];
  undefined8 local_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = (longlong *)(param_1 + 0x388);
  FUN_1498797bc(local_a8,(int)param_2[1]);
  uVar8 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong)(int)param_2[1] == 0) {
    bVar7 = 1;
  }
  else {
    lVar11 = *param_2;
    local_a0 = param_1 + 0x28;
    local_90 = param_1 + 0xf0;
    local_98 = param_1 + 0x78;
    lVar10 = (longlong)(int)param_2[1] << 3;
    bVar7 = 1;
    lVar9 = 0;
    local_88 = lVar11;
    do {
      lVar2 = *(longlong *)(lVar11 + lVar9);
      if (lVar2 == 0) {
        local_58 = L"UnknownPostOperation";
        local_50 = 0x14;
        FUN_1446e940c(local_70,&local_58);
        local_58 = L"IKRetargetProcessor";
        local_50 = 0x13;
        FUN_1446e940c(local_80,&local_58);
        FUN_140208bae(&local_58,local_80,local_70,
                      L"Retargeter has null/unknown post operation in it. Please remove it.");
        FUN_14986922e(local_a0,&local_58);
        if (local_58 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_58 + 0x10))();
        }
      }
      else {
        local_a9 = bVar7;
        FUN_1400b22c2(local_70,"_RetargetOpInstance_");
        local_58 = *(wchar_t **)(lVar2 + 0x18);
        FUN_1400021e4(&local_58,local_80);
        FUN_1401c7f3e(&local_58,local_80,local_70);
        pwVar6 = L"";
        if (local_50 != 0) {
          pwVar6 = local_58;
        }
        FUN_1446f470e(&local_60,pwVar6,1);
        if (local_58 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (local_80[0] != 0) {
          FUN_1400020a8();
        }
        bVar7 = local_a9;
        uVar8 = (undefined7)((ulonglong)lVar10 >> 8);
        if (local_70[0] != 0) {
          FUN_1400020a8();
        }
        local_b8 = CONCAT44(local_b8._4_4_,2);
        FUN_140af9fb2(&local_58,param_1,*(undefined8 *)(lVar2 + 0x10),local_60);
        pwVar6 = local_58;
        uVar4 = FUN_1458cc934();
        plVar5 = (longlong *)FUN_14092e757(uVar4,lVar2,param_1,pwVar6);
        local_b8 = local_a0;
        bVar3 = (**(code **)(*plVar5 + 0x2a0))(plVar5,param_1,local_98,local_90);
        *(byte *)((longlong)plVar5 + 0x29) = bVar3;
        if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(plVar5);
        }
        iVar1 = *(int *)(param_1 + 0x390);
        *(uint *)(param_1 + 0x390) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x394) < iVar1 + 1U) {
          FUN_14988e03e(local_a8,iVar1);
        }
        *(longlong **)(*local_a8 + (longlong)iVar1 * 8) = plVar5;
        if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(plVar5);
        }
        bVar7 = bVar7 & bVar3;
        lVar11 = local_88;
      }
      lVar9 = lVar9 + 8;
    } while (lVar10 != lVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return CONCAT71(uVar8,bVar7) & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149879726 FUN_149879726 body=149 status=ok
// SIG undefined FUN_149879726(void)

void FUN_149879726(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14becce70;
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  FUN_14988a790(param_1 + 0x32);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_14988a790(param_1 + 0xc);
  *param_1 = &PTR_FUN_14becce80;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498797bc FUN_1498797bc body=41 status=ok
// SIG undefined FUN_1498797bc(void)

void FUN_1498797bc(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_14988dfde();
  return;
}



// FUNCTION 1498797e6 FUN_1498797e6 body=382 status=ok
// SIG undefined FUN_1498797e6(void)

void FUN_1498797e6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar11 = 0;
  FUN_14987ade6(param_1,*(undefined8 *)(param_2 + 0x10),0);
  FUN_14987ade6(param_1,*(undefined8 *)(param_2 + 4),1);
  plVar1 = (longlong *)(param_2 + 0x20);
  lVar9 = param_2 + 0x30;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = lVar9;
  if (*(int *)(param_2 + 0x48) != 0) {
    FUN_1449c0562(&local_58);
    iVar11 = *(int *)(param_2 + 0x48);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar11) || (local_50 != lVar9)) {
    do {
      FUN_14987b07e(param_1,*(undefined8 *)(*local_80 + (longlong)iStack_64 * 0xc0));
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (local_70 != lVar9 || iStack_64 != iVar11));
  }
  puVar10 = (undefined8 *)(param_2 + 0x78);
  puVar12 = (undefined8 *)(param_1 + 0x2e0);
  for (lVar9 = 0xd; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_2 + 0x104);
  uVar2 = *(undefined4 *)(param_2 + 0xe4);
  uVar3 = *(undefined4 *)(param_2 + 0xe8);
  uVar4 = *(undefined4 *)(param_2 + 0xec);
  uVar5 = *(undefined4 *)(param_2 + 0xf0);
  uVar6 = *(undefined4 *)(param_2 + 0xf8);
  uVar7 = *(undefined4 *)(param_2 + 0xfc);
  uVar8 = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0x374) = uVar6;
  *(undefined4 *)(param_1 + 0x378) = uVar7;
  *(undefined4 *)(param_1 + 0x37c) = uVar8;
  *(undefined4 *)(param_1 + 0x360) = uVar2;
  *(undefined4 *)(param_1 + 0x364) = uVar3;
  *(undefined4 *)(param_1 + 0x368) = uVar4;
  *(undefined4 *)(param_1 + 0x36c) = uVar5;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149879966 FUN_149879966 body=182 status=ok
// SIG undefined FUN_149879966(void)

void FUN_149879966(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x198) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x198) * 0x280;
    lVar2 = *(longlong *)(param_1 + 400) + 400;
    do {
      FUN_14986ee30(lVar2 + -0x130,param_1 + 0x78,lVar2 + -0x188,param_2);
      FUN_14986fcc0(lVar2,param_1 + 0x1b0,lVar2 + -0x158,lVar2 + -0x178,lVar2 + -0x130,
                    param_1 + 0xf0,param_3);
      lVar2 = lVar2 + 0x280;
      lVar1 = lVar1 + -0x280;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 149879a1c FUN_149879a1c body=581 status=ok
// SIG undefined FUN_149879a1c(void)

void FUN_149879a1c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  undefined1 *local_b8;
  undefined2 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(char *)(*(longlong *)(param_1 + 0x188) + 0x140) == '\x01') &&
     ((longlong)*(int *)(param_1 + 0x1a8) != 0)) {
    lVar5 = (longlong)*(int *)(param_1 + 0x1a8) * 0x2b0;
    lVar4 = *(longlong *)(param_1 + 0x1a0) + 0xd0;
    do {
      FUN_149871f54(lVar4,param_2);
      local_120 = param_5;
      local_128 = param_4;
      local_118 = param_3;
      FUN_1498722c8(lVar4,lVar4 + -0x98,lVar4 + -0x20,param_1 + 0x1b0);
      lVar4 = lVar4 + 0x2b0;
      lVar5 = lVar5 + -0x2b0;
    } while (lVar5 != 0);
    FUN_149879c62(param_1);
    iVar3 = *(int *)(param_1 + 0x1a8);
    if ((longlong)iVar3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1a0);
      lVar5 = 0;
      do {
        local_108 = *(undefined8 *)(lVar4 + 0x2a0 + lVar5);
        local_100 = 0;
        local_fc = 0;
        local_f4 = 0xffffffff7fffffff;
        local_d8 = *(undefined8 *)(lVar4 + 0x210 + lVar5);
        puVar1 = (undefined4 *)(lVar4 + 0x200 + lVar5);
        local_e8 = *puVar1;
        uStack_e4 = puVar1[1];
        uStack_e0 = puVar1[2];
        uStack_dc = puVar1[3];
        FUN_1448052ee(lVar4 + 0x220 + lVar5,local_d0);
        local_b8 = &DAT_3f8000003f800000;
        local_b0 = 0;
        local_98 = *(undefined8 *)(lVar4 + 0x210 + lVar5);
        puVar2 = (undefined8 *)(lVar4 + 0x200 + lVar5);
        local_a8 = *puVar2;
        uStack_a0 = puVar2[1];
        puVar1 = (undefined4 *)(lVar4 + 0x220 + lVar5);
        local_88 = *puVar1;
        uStack_84 = puVar1[1];
        uStack_80 = puVar1[2];
        uStack_7c = puVar1[3];
        puVar1 = (undefined4 *)(lVar4 + 0x230 + lVar5);
        local_78 = *puVar1;
        uStack_74 = puVar1[1];
        uStack_70 = puVar1[2];
        uStack_6c = puVar1[3];
        FUN_14987f53a(*(longlong *)(param_1 + 0x188) + 0x70,&local_108);
        lVar5 = lVar5 + 0x2b0;
      } while ((longlong)iVar3 * 0x2b0 - lVar5 != 0);
    }
    if (*(char *)(param_1 + 0x362) != '\0') {
      lVar4 = *(longlong *)(param_1 + 0x188);
      FUN_144756208(lVar4 + 0x100,param_3);
      FUN_149864498(lVar4 + 0xd0);
      FUN_149863fa0(*(undefined8 *)(param_1 + 0x188),&DAT_14c846480);
      FUN_144756208(param_3,*(longlong *)(param_1 + 0x188) + 0x100);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149879c62 FUN_149879c62 body=4107 status=ok
// SIG undefined FUN_149879c62(void)

void FUN_149879c62(longlong param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar6;
  int iVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
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
  undefined1 auStack_318 [32];
  double *local_2f8;
  double local_2f0;
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
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  double local_188;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_e0;
  double dVar5;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  if ((*(char *)(param_1 + 0x364) == '\x01') && (*(char *)(param_1 + 0x68) == '\x01')) {
    iVar7 = *(int *)(param_1 + 0x368);
    if (iVar7 == 1) {
      if ((longlong)*(int *)(param_1 + 0x198) != 0) {
        lVar12 = *(longlong *)(param_1 + 400);
        lVar15 = (longlong)*(int *)(param_1 + 0x198) * 0x280;
LAB_149879dc5:
        if (*(longlong *)(lVar12 + 0x30) != *(longlong *)(param_1 + 0x370))
        goto code_r0x000149879dcb;
        if (lVar12 != 0) {
          uVar11 = *(uint *)(lVar12 + 0x198);
          uVar13 = (ulonglong)uVar11;
          if (uVar13 != 0) {
            local_e8 = DAT_14c8464f0;
            local_118 = DAT_14c8464e0;
            dStack_110 = DAT_14c8464e8;
            local_108 = DAT_14c8464f0;
            dVar24 = DAT_14c8464f0;
            local_f8 = DAT_14c8464e0;
            dVar4 = DAT_14c8464e0;
            dVar2 = DAT_14c8464e8;
            dVar5 = DAT_14c8464e8;
            dVar3 = DAT_14c8464f0;
            if (0 < (int)uVar11) {
              lVar15 = *(longlong *)(lVar12 + 400);
              lVar16 = *(longlong *)(lVar12 + 0x1b0);
              lVar14 = 0;
              do {
                local_f8 = local_f8 + *(double *)(lVar15 + 0x20 + lVar14);
                dVar2 = dVar2 + *(double *)(lVar15 + 0x28 + lVar14);
                dVar24 = dVar24 + *(double *)(lVar15 + 0x30 + lVar14);
                dVar4 = dVar4 + *(double *)(lVar16 + 0x20 + lVar14);
                dVar5 = dVar5 + *(double *)(lVar16 + 0x28 + lVar14);
                dVar3 = dVar3 + *(double *)(lVar16 + 0x30 + lVar14);
                lVar14 = lVar14 + 0x60;
              } while (uVar13 * 0x60 != lVar14);
            }
            dVar22 = (double)(1.0 / (float)(int)uVar11);
            local_f8 = local_f8 * dVar22;
            dVar2 = dVar2 * dVar22;
            dStack_f0 = dVar2;
            if (uVar13 == 1) {
              pdVar1 = *(double **)(lVar12 + 400);
              pdVar8 = *(double **)(lVar12 + 0x1b0);
              dVar23 = *pdVar8;
              dVar20 = pdVar8[1];
              dVar17 = pdVar8[2] * -1.0;
              dVar19 = pdVar8[3] * 1.0;
              dVar27 = pdVar1[3];
              dVar9 = pdVar1[3];
              dVar10 = pdVar1[1];
              dVar6 = pdVar1[1];
              dVar25 = pdVar1[2];
              dVar21 = pdVar1[2];
              local_138 = (dVar17 * dVar10 + (*pdVar1 * dVar19 * 1.0 - dVar27 * dVar23)) -
                          dVar20 * dVar25 * -1.0;
              dStack_130 = (dVar19 * dVar6 + (*pdVar1 * dVar17 * -1.0 - dVar9 * dVar20)) -
                           dVar23 * dVar21 * 1.0;
              local_128 = dVar19 * dVar25 * 1.0 +
                          dVar10 * dVar23 + (dVar27 * dVar17 - *pdVar1 * dVar20 * 1.0);
              dStack_120 = dVar17 * dVar21 * -1.0 +
                           dVar6 * dVar20 + (dVar9 * dVar19 - *pdVar1 * dVar23 * -1.0);
              FUN_14987ac6e(&local_158,param_1 + 0x36c);
              local_188 = local_148;
              local_198 = local_158;
              dStack_190 = uStack_150;
              FUN_14276fa40(&local_138,&local_178);
            }
            else {
              lVar15 = *(longlong *)(lVar12 + 400);
              lVar16 = (longlong)(int)(uVar11 - 1) * 0x60;
              pdVar1 = (double *)(lVar15 + 0x20 + lVar16);
              local_148 = *(double *)(lVar15 + 0x30 + lVar16) - *(double *)(lVar15 + 0x30);
              local_158 = *pdVar1 - *(double *)(lVar15 + 0x20);
              uStack_150 = pdVar1[1] - *(double *)(lVar15 + 0x28);
              lVar15 = *(longlong *)(lVar12 + 0x1b0);
              lVar12 = (longlong)(*(int *)(lVar12 + 0x1b8) + -1) * 0x60;
              pdVar1 = (double *)(lVar15 + 0x20 + lVar12);
              local_168 = *(double *)(lVar15 + 0x30 + lVar12) - *(double *)(lVar15 + 0x30);
              local_178 = *pdVar1 - *(double *)(lVar15 + 0x20);
              uStack_170 = pdVar1[1] - *(double *)(lVar15 + 0x28);
            }
            local_2f0 = dVar24 * dVar22;
            dVar4 = dVar4 * dVar22;
            dVar5 = dVar5 * dVar22;
            dVar3 = dVar3 * dVar22;
            FUN_1446720ea(&local_138,&local_158,&local_178);
            goto LAB_14987a268;
          }
        }
      }
    }
    else {
      if (iVar7 == 2) {
        pdVar1 = *(double **)(param_1 + 0x120);
        local_f8 = pdVar1[4];
        dStack_f0 = pdVar1[5];
        local_2f0 = pdVar1[6];
        dVar2 = pdVar1[5];
        pdVar8 = *(double **)(param_1 + 0x168);
        dVar3 = pdVar8[6];
        dVar10 = *pdVar8;
        dVar6 = pdVar8[1];
        dVar25 = pdVar8[2] * -1.0;
        dVar23 = pdVar8[3] * 1.0;
        dVar4 = pdVar1[3];
        dVar5 = pdVar1[3];
        dVar24 = pdVar1[1];
        dVar22 = pdVar1[1];
        dVar9 = pdVar1[2];
        dVar27 = pdVar1[2];
        dVar21 = (dVar25 * dVar24 + (*pdVar1 * dVar23 * 1.0 - dVar4 * dVar10)) -
                 dVar6 * dVar9 * -1.0;
        dVar20 = (dVar23 * dVar22 + (*pdVar1 * dVar25 * -1.0 - dVar5 * dVar6)) -
                 dVar10 * dVar27 * 1.0;
        dVar9 = dVar23 * dVar9 * 1.0 + dVar24 * dVar10 + (dVar4 * dVar25 - *pdVar1 * dVar6 * 1.0);
        dVar10 = dVar25 * dVar27 * -1.0 +
                 dVar22 * dVar6 + (dVar5 * dVar23 - *pdVar1 * dVar10 * -1.0);
        dVar5 = pdVar8[5];
        dVar4 = pdVar8[4];
        FUN_14987ac6e(&local_118,param_1 + 0x36c);
        dVar22 = dVar20 * local_108 - dStack_110 * dVar9;
        dVar22 = dVar22 + dVar22;
        dVar27 = dVar21 * dStack_110 - local_118 * dVar20;
        dVar27 = dVar27 + dVar27;
        dVar24 = dVar9 * local_118 - local_108 * dVar21;
        dVar24 = dVar24 + dVar24;
        local_148 = (dVar21 * dVar24 - dVar22 * dVar20) + dVar10 * dVar27 + local_108;
        uStack_150 = (dVar9 * dVar22 - dVar27 * dVar21) + dVar10 * dVar24 + dStack_110;
        local_158 = (dVar20 * dVar27 - dVar24 * dVar9) + dVar10 * dVar22 + local_118;
        FUN_1446720ea(&local_138,&local_118);
LAB_14987a268:
        local_2e8 = local_128;
        dStack_2e0 = dStack_120;
        local_2d8 = local_138;
        dStack_2d0 = dStack_130;
      }
      else {
        if (iVar7 != 0) goto LAB_149879d1a;
        local_158 = 0.0;
        uStack_150 = 0.0;
        local_178 = 0.0;
        uStack_170 = 0.0;
        iVar7 = *(int *)(param_1 + 0x1a8);
        if ((longlong)iVar7 != 0) {
          lVar12 = *(longlong *)(param_1 + 0x1a0);
          lVar15 = 0;
          do {
            dVar2 = uStack_150;
            if (*(char *)(lVar12 + 0xa8 + lVar15) == '\x01') {
              pdVar1 = (double *)(lVar12 + 0x1a0 + lVar15);
              local_138 = *pdVar1;
              dStack_130 = pdVar1[1];
              pdVar1 = (double *)(lVar12 + 0x200 + lVar15);
              local_f8 = *pdVar1;
              dStack_f0 = pdVar1[1];
              lVar16 = (longlong)(int)uStack_150;
              uVar11 = (int)uStack_150 + 1;
              uStack_150 = (double)CONCAT44(uStack_150._4_4_,uVar11);
              if (uStack_150._4_4_ < uVar11) {
                FUN_1403e3958(&local_158,(ulonglong)dVar2 & 0xffffffff);
              }
              dVar2 = uStack_170;
              pdVar1 = (double *)((longlong)local_158 + lVar16 * 0x18);
              *pdVar1 = local_138;
              pdVar1[1] = dStack_130;
              *(undefined8 *)((longlong)local_158 + 0x10 + lVar16 * 0x18) = 0;
              lVar16 = (longlong)(int)uStack_170;
              uVar11 = (int)uStack_170 + 1;
              uStack_170 = (double)CONCAT44(uStack_170._4_4_,uVar11);
              if (uStack_170._4_4_ < uVar11) {
                FUN_1403e3958(&local_178,(ulonglong)dVar2 & 0xffffffff);
              }
              pdVar1 = (double *)((longlong)local_178 + lVar16 * 0x18);
              *pdVar1 = local_f8;
              pdVar1[1] = dStack_f0;
              *(undefined8 *)((longlong)local_178 + 0x10 + lVar16 * 0x18) = 0;
            }
            lVar15 = lVar15 + 0x2b0;
          } while ((longlong)iVar7 * 0x2b0 - lVar15 != 0);
        }
        local_2f8 = &local_118;
        FUN_14467177a(&local_138,&local_158,&local_178,&local_f8);
        local_2d8 = local_138;
        dStack_2d0 = dStack_130;
        local_2e8 = local_128;
        dStack_2e0 = dStack_120;
        if (local_178 != 0.0) {
          FUN_1400020a8();
        }
        if (local_158 != 0.0) {
          FUN_1400020a8();
        }
        local_2f0 = local_e8;
        dVar3 = local_108;
        dVar4 = local_118;
        dVar5 = dStack_110;
        dVar2 = dStack_f0;
      }
      local_298 = DAT_14c8463d0;
      dStack_290 = DAT_14c8463d8;
      local_2a8 = DAT_14c8463e0;
      dStack_2a0 = DAT_14c8463e8;
      local_2b8 = local_f8;
      dStack_2b0 = dStack_f0;
      FUN_14987ac6e(&local_138,param_1 + 0x36c);
      dVar24 = local_128;
      dVar23 = dStack_130;
      dVar21 = local_138;
      dVar9 = DAT_14c8463c8;
      dVar27 = DAT_14c8463c0;
      dVar22 = DAT_14c8463b8;
      FUN_14987ac6e(&local_138);
      dVar25 = DAT_14c8464f0;
      dVar6 = DAT_14c8464e8;
      dVar10 = DAT_14c8464e0;
      iVar7 = *(int *)(param_1 + 0x1a8);
      if ((longlong)iVar7 != 0) {
        dVar24 = dVar24 * 1.0;
        dStack_1b0 = dStack_2e0;
        local_1b8 = local_2d8;
        dVar17 = dVar23 * local_2d8 - dStack_2d0 * dVar21;
        dVar19 = dVar24 * dStack_2d0 - local_2e8 * dVar23;
        dVar20 = dVar21 * local_2e8 - local_2d8 * dVar24;
        dStack_200 = dStack_2e0 * 0.0 - dStack_2e0 * 0.0;
        dVar19 = dVar19 + dVar19;
        dVar20 = dVar20 + dVar20;
        dVar17 = dVar17 + dVar17;
        dStack_200 = dStack_200 + dStack_200;
        local_1c8._8_4_ = SUB84(local_2e8,0);
        local_1c8._0_8_ = dStack_2d0;
        local_1c8._12_4_ = (int)((ulonglong)local_2e8 >> 0x20);
        local_1a8._8_4_ = SUB84(dStack_2e0,0);
        local_1a8._0_8_ = dStack_2e0;
        local_1a8._12_4_ = (int)((ulonglong)dStack_2e0 >> 0x20);
        local_1d8 = dVar17 * dStack_2e0 + dVar24 + (dVar20 * local_2d8 - dVar19 * dStack_2d0);
        local_1e8 = (dVar17 * dStack_2d0 - dVar20 * local_2e8) + dStack_2e0 * dVar19 + dVar21;
        dStack_2c0 = (local_2e8 * dVar19 - local_2d8 * dVar17) + dStack_2e0 * dVar20 + dVar23;
        local_218 = local_1e8 * dVar27 - dVar22 * dStack_2c0;
        local_208 = local_1d8 * dVar22 - dVar9 * local_1e8;
        local_2c8 = dStack_2c0 * dVar9 - dVar27 * local_1d8;
        local_270 = local_138 * DAT_14c8463c0 - DAT_14c8463b8 * dStack_130;
        local_268 = DAT_14c8463b8 * local_128 - local_138 * DAT_14c8463c8;
        local_260 = dStack_130 * DAT_14c8463c8 - DAT_14c8463c0 * local_128;
        local_298 = -local_298;
        dStack_290 = -dStack_290;
        lVar12 = *(longlong *)(param_1 + 0x1a0);
        local_2a8 = local_2a8 * -1.0;
        dStack_2a0 = dStack_2a0 * 1.0;
        lVar15 = 0;
        local_278 = DAT_14c8464e0;
        local_280 = DAT_14c8464e8;
        local_288 = DAT_14c8464f0;
        do {
          if (*(char *)(lVar12 + 0xa8 + lVar15) == '\x01') {
            pdVar1 = (double *)(lVar12 + 0x1a0 + lVar15);
            dVar19 = *pdVar1;
            dVar24 = *(double *)(lVar12 + 0x1b0 + lVar15);
            dVar27 = dVar19 - local_2b8;
            dVar9 = pdVar1[1] - dVar2;
            dVar22 = dVar24 - local_2f0;
            dVar21 = dVar9 * local_298 - dStack_290 * dVar27;
            dVar23 = dVar22 * dStack_290 - local_2a8 * dVar9;
            dVar17 = dVar27 * local_2a8 - dVar22 * local_298;
            dVar23 = dVar23 + dVar23;
            dVar17 = dVar17 + dVar17;
            dVar21 = dVar21 + dVar21;
            dVar18 = dVar21 * dStack_2a0 + dVar22 + (dVar17 * local_298 - dVar23 * dStack_290);
            dVar20 = (dVar21 * dStack_290 - dVar17 * local_2a8) + dStack_2a0 * dVar23 + dVar27;
            dVar17 = (local_2a8 * dVar23 - local_298 * dVar21) + dStack_2a0 * dVar17 + dVar9;
            dVar21 = dVar17 * local_2d8 - dStack_2d0 * dVar20;
            dVar23 = dVar18 * dStack_2d0 - (double)local_1c8._8_8_ * dVar17;
            dVar26 = dVar20 * local_2e8 - dVar18 * local_2d8;
            dVar23 = dVar23 + dVar23;
            dVar26 = dVar26 + dVar26;
            dVar21 = dVar21 + dVar21;
            dVar22 = *(double *)(lVar12 + 0x200 + lVar15);
            dVar27 = *(double *)(lVar12 + 0x208 + lVar15);
            dVar9 = *(double *)(lVar12 + 0x210 + lVar15);
            dVar23 = (local_1d8 * dVar9 + local_1e8 * dVar22 + dStack_2c0 * dVar27) -
                     ((dVar21 * dStack_2e0 + dVar18 + (dVar26 * local_2d8 - dVar23 * dStack_2d0) +
                      dVar3) * local_1d8 +
                     ((dVar21 * dStack_2d0 - dVar26 * (double)local_1c8._8_8_) +
                      dStack_2e0 * dVar23 + dVar20 + dVar4) * local_1e8 +
                     dStack_2c0 *
                     ((local_2e8 * dVar23 - local_2d8 * dVar21) +
                      (double)local_1a8._8_8_ * dVar26 + dVar17 + dVar5));
            dVar17 = dVar9 - local_1d8 * dVar23;
            dVar21 = dVar27 - dStack_2c0 * dVar23;
            dVar23 = dVar22 - dVar23 * local_1e8;
            dVar20 = (double)*(float *)(param_1 + 0x378);
            dVar17 = (dVar9 - dVar17) * dVar20 + dVar17;
            dVar21 = (dVar27 - dVar21) * dVar20 + dVar21;
            dVar23 = (dVar22 - dVar23) * dVar20 + dVar23;
            *(double *)(lVar12 + 0x200 + lVar15) = dVar23;
            *(double *)(lVar12 + 0x208 + lVar15) = dVar21;
            *(double *)(lVar12 + 0x210 + lVar15) = dVar17;
            dVar22 = *(double *)(lVar12 + 0x1a8 + lVar15);
            dVar27 = dVar24 * dVar24 + dVar19 * dVar19 + dVar22 * dVar22;
            if (((dVar27 != 1.0) || (dVar20 = dVar19, dVar18 = dVar22, dVar9 = dVar24, NAN(dVar27)))
               && (dVar20 = dVar10, dVar18 = dVar6, dVar9 = dVar25, 9.99999993922529e-09 <= dVar27))
            {
              dVar27 = 1.0 / SQRT(dVar27);
              dVar20 = dVar27 * dVar19;
              dVar18 = dVar22 * dVar27;
              dVar9 = dVar24 * dVar27;
            }
            dVar24 = (double)*(float *)(param_1 + 0x37c);
            dVar22 = (double)(float)(dVar18 * local_268 + dVar20 * local_260 + dVar9 * local_270);
            dVar23 = dVar23 + dVar24 * local_2c8 * dVar22;
            *(double *)(lVar12 + 0x200 + lVar15) = dVar23;
            dVar21 = dVar21 + local_208 * dVar24 * dVar22;
            *(double *)(lVar12 + 0x208 + lVar15) = dVar21;
            dVar17 = dVar17 + local_218 * dVar24 * dVar22;
            *(double *)(lVar12 + 0x210 + lVar15) = dVar17;
            dVar24 = (double)*(float *)(param_1 + 0x380);
            *(double *)(lVar12 + 0x200 + lVar15) = (dVar23 - dVar4) * dVar24 + dVar4;
            *(double *)(lVar12 + 0x208 + lVar15) = (dVar21 - dVar5) * dVar24 + dVar5;
            *(double *)(lVar12 + 0x210 + lVar15) = (dVar17 - dVar17) * dVar24 + dVar17;
          }
          lVar15 = lVar15 + 0x2b0;
          dStack_2b0 = dVar2;
          local_258 = dStack_290;
          dStack_250 = local_2a8;
          local_248 = local_298;
          dStack_240 = dStack_2a0;
          local_238 = dStack_2a0;
          dStack_230 = dStack_2a0;
          local_228 = dVar4;
          dStack_220 = dVar5;
          dStack_210 = dStack_2c0;
          local_1f8 = dStack_2c0;
          dStack_1f0 = dStack_2c0;
          dStack_1e0 = dStack_2c0;
          dStack_1d0 = dStack_200;
        } while ((longlong)iVar7 * 0x2b0 - lVar15 != 0);
      }
    }
  }
LAB_149879d1a:
  if ((local_e0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000149879dcb:
  lVar12 = lVar12 + 0x280;
  lVar15 = lVar15 + -0x280;
  if (lVar15 == 0) goto LAB_149879d1a;
  goto LAB_149879dc5;
}



// FUNCTION 14987ac6e FUN_14987ac6e body=206 status=ok
// SIG undefined FUN_14987ac6e(void)

void FUN_14987ac6e(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  switch(*param_2) {
  case 0:
    *(undefined8 *)(param_1 + 4) = DAT_14c8463b0;
    uVar2 = (undefined4)DAT_14c8463a0;
    uVar4 = DAT_14c8463a0._4_4_;
    uVar5 = (undefined4)DAT_14c8463a8;
    uVar6 = DAT_14c8463a8._4_4_;
    break;
  case 1:
    *(undefined8 *)(param_1 + 4) = DAT_14c846398;
    uVar2 = (undefined4)DAT_14c846388;
    uVar4 = DAT_14c846388._4_4_;
    uVar5 = (undefined4)DAT_14c846390;
    uVar6 = DAT_14c846390._4_4_;
    break;
  case 2:
    *(undefined8 *)(param_1 + 4) = DAT_14c8463c8;
    uVar2 = (undefined4)DAT_14c8463b8;
    uVar4 = DAT_14c8463b8._4_4_;
    uVar5 = (undefined4)DAT_14c8463c0;
    uVar6 = DAT_14c8463c0._4_4_;
    break;
  case 3:
    uVar1 = (undefined4)DAT_14c8463b0;
    uVar3 = (uint)((ulonglong)DAT_14c8463b0 >> 0x20) ^ 0x80000000;
    uVar2 = (undefined4)DAT_14c8463a0;
    uVar4 = DAT_14c8463a0._4_4_;
    uVar5 = (undefined4)DAT_14c8463a8;
    uVar6 = DAT_14c8463a8._4_4_;
    goto LAB_14987ad1b;
  case 4:
    uVar1 = (undefined4)DAT_14c846398;
    uVar3 = (uint)((ulonglong)DAT_14c846398 >> 0x20) ^ 0x80000000;
    uVar2 = (undefined4)DAT_14c846388;
    uVar4 = DAT_14c846388._4_4_;
    uVar5 = (undefined4)DAT_14c846390;
    uVar6 = DAT_14c846390._4_4_;
    goto LAB_14987ad1b;
  case 5:
    uVar1 = (undefined4)DAT_14c8463c8;
    uVar3 = (uint)((ulonglong)DAT_14c8463c8 >> 0x20) ^ 0x80000000;
    uVar2 = (undefined4)DAT_14c8463b8;
    uVar4 = DAT_14c8463b8._4_4_;
    uVar5 = (undefined4)DAT_14c8463c0;
    uVar6 = DAT_14c8463c0._4_4_;
LAB_14987ad1b:
    *param_1 = uVar2;
    param_1[1] = uVar4 ^ 0x80000000;
    param_1[2] = uVar5;
    param_1[3] = uVar6 ^ 0x80000000;
    *(ulonglong *)(param_1 + 4) = CONCAT44(uVar3,uVar1);
    return;
  default:
    *(undefined8 *)(param_1 + 4) = DAT_14c8464f0;
    uVar2 = (undefined4)DAT_14c8464e0;
    uVar4 = DAT_14c8464e0._4_4_;
    uVar5 = (undefined4)DAT_14c8464e8;
    uVar6 = DAT_14c8464e8._4_4_;
  }
  *param_1 = uVar2;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  return;
}



// FUNCTION 14987ad3c FUN_14987ad3c body=170 status=ok
// SIG undefined FUN_14987ad3c(void)

void FUN_14987ad3c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x140) == '\x01') {
    iVar1 = *(int *)(param_2 + 0xd0);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_2 + 200);
      lVar4 = 0;
      do {
        FUN_14987f5ba(param_1 + 0x70,*(undefined8 *)(lVar3 + lVar4));
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
    if (0 < *(int *)(param_1 + 0x68)) {
      lVar3 = 0;
      do {
        *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar3 * 8) + 0x28) =
             *(undefined1 *)(*(longlong *)(*(longlong *)(param_2 + 0xd8) + lVar3 * 8) + 0x28);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x60) + lVar3 * 8);
        (**(code **)(*plVar2 + 0x2c0))
                  (plVar2,*(undefined8 *)(*(longlong *)(param_2 + 0xd8) + lVar3 * 8));
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 0x68));
    }
  }
  return;
}



// FUNCTION 14987ade6 FUN_14987ade6 body=629 status=ok
// SIG undefined FUN_14987ade6(void)

void FUN_14987ade6(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_49 = param_3;
  lVar3 = FUN_14986c2d2(*(undefined8 *)(param_1 + 0x70),&local_49,param_2);
  if (lVar3 != 0) {
    lVar1 = param_1 + 0x78;
    lVar2 = param_1 + 0xf0;
    lVar4 = lVar2;
    if (param_3 == '\0') {
      lVar4 = lVar1;
    }
    if ((*(longlong *)(lVar4 + 0x40) != param_2) ||
       (*(int *)(lVar4 + 0x48) != *(int *)(lVar3 + 0x68))) {
      plVar9 = (longlong *)(param_1 + 0x1b0);
      plVar6 = (longlong *)(param_1 + 0x250);
      if (param_3 == '\0') {
        plVar6 = plVar9;
      }
      if (*plVar6 != 0) {
        FUN_14986c8ce(lVar4,param_2,lVar3);
        lVar3 = FUN_14986bc2a(*(undefined8 *)(param_1 + 0x70),0);
        lVar4 = FUN_14986bc2a(*(undefined8 *)(param_1 + 0x70),1);
        if (lVar4 != 0 && lVar3 != 0) {
          local_58 = plVar9;
          if ((longlong)*(int *)(param_1 + 0x198) != 0) {
            plVar9 = *(longlong **)(param_1 + 400);
            plVar6 = plVar9 + (longlong)*(int *)(param_1 + 0x198) * 0x50;
            do {
              if ((longlong)*(int *)(lVar3 + 0xf8) != 0) {
                plVar7 = *(longlong **)(lVar3 + 0xf0);
                lVar5 = (longlong)*(int *)(lVar3 + 0xf8) * 0x30;
                do {
                  if (*plVar7 == plVar9[5]) goto LAB_14987af21;
                  plVar7 = plVar7 + 6;
                  lVar5 = lVar5 + -0x30;
                } while (lVar5 != 0);
              }
              plVar7 = (longlong *)0x0;
LAB_14987af21:
              if ((longlong)*(int *)(lVar4 + 0xf8) != 0) {
                plVar8 = *(longlong **)(lVar4 + 0xf0);
                lVar5 = (longlong)*(int *)(lVar4 + 0xf8) * 0x30;
                do {
                  if (*plVar8 == plVar9[6]) goto LAB_14987af54;
                  plVar8 = plVar8 + 6;
                  lVar5 = lVar5 + -0x30;
                } while (lVar5 != 0);
              }
              plVar8 = (longlong *)0x0;
LAB_14987af54:
              local_68 = lVar2;
              local_60 = param_1 + 0x28;
              (**(code **)(*plVar9 + 8))(plVar9,plVar7,plVar8,lVar1);
              plVar9 = plVar9 + 0x50;
            } while (plVar9 != plVar6);
          }
          if ((longlong)*(int *)(param_1 + 0x1a8) != 0) {
            plVar9 = *(longlong **)(param_1 + 0x1a0);
            plVar6 = plVar9 + (longlong)*(int *)(param_1 + 0x1a8) * 0x56;
            do {
              if ((longlong)*(int *)(lVar3 + 0xf8) != 0) {
                plVar7 = *(longlong **)(lVar3 + 0xf0);
                lVar5 = (longlong)*(int *)(lVar3 + 0xf8) * 0x30;
                do {
                  if (*plVar7 == plVar9[5]) goto LAB_14987afd0;
                  plVar7 = plVar7 + 6;
                  lVar5 = lVar5 + -0x30;
                } while (lVar5 != 0);
              }
              plVar7 = (longlong *)0x0;
LAB_14987afd0:
              if ((longlong)*(int *)(lVar4 + 0xf8) != 0) {
                plVar8 = *(longlong **)(lVar4 + 0xf0);
                lVar5 = (longlong)*(int *)(lVar4 + 0xf8) * 0x30;
                do {
                  if (*plVar8 == plVar9[6]) goto LAB_14987b003;
                  plVar8 = plVar8 + 6;
                  lVar5 = lVar5 + -0x30;
                } while (lVar5 != 0);
              }
              plVar8 = (longlong *)0x0;
LAB_14987b003:
              local_68 = lVar2;
              local_60 = param_1 + 0x28;
              (**(code **)(*plVar9 + 8))(plVar9,plVar7,plVar8,lVar1);
              plVar9 = plVar9 + 0x56;
            } while (plVar9 != plVar6);
          }
          FUN_1498744a8(local_58,*(undefined8 *)(param_1 + 0x1b0),lVar1,param_1 + 0x28);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
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



// FUNCTION 14987b07e FUN_14987b07e body=226 status=ok
// SIG undefined FUN_14987b07e(void)

void FUN_14987b07e(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  longlong lVar9;
  
  if ((longlong)*(int *)(param_1 + 0x198) != 0) {
    lVar2 = *(longlong *)(param_1 + 400);
    lVar9 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x30 + lVar9) == param_2) {
        uVar3 = *param_3;
        uVar4 = param_3[1];
        uVar5 = *(undefined8 *)((longlong)param_3 + 0x14);
        puVar7 = (undefined8 *)(lVar2 + 0x44 + lVar9);
        *puVar7 = *(undefined8 *)((longlong)param_3 + 0xc);
        puVar7[1] = uVar5;
        puVar7 = (undefined8 *)(lVar2 + 0x38 + lVar9);
        *puVar7 = uVar3;
        puVar7[1] = uVar4;
        break;
      }
      lVar9 = lVar9 + 0x280;
    } while ((longlong)*(int *)(param_1 + 0x198) * 0x280 != lVar9);
  }
  if ((longlong)*(int *)(param_1 + 0x1a8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1a0);
    lVar9 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x30 + lVar9) == param_2) {
        pcVar8 = (char *)(lVar2 + lVar9 + 0x38);
        if (*pcVar8 != *(char *)(param_3 + 4)) {
          *(undefined1 *)(param_1 + 0x60) = 0;
          if (*(longlong *)(param_1 + 0x70) != 0) {
            piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x28);
            *piVar1 = *piVar1 + 1;
          }
          if (*(longlong *)(param_1 + 0x188) != 0) {
            *(undefined2 *)(*(longlong *)(param_1 + 0x188) + 0x140) = 0;
          }
        }
        puVar7 = param_3 + 4;
        for (lVar6 = 0xf; lVar6 != 0; lVar6 = lVar6 + -1) {
          *(undefined8 *)pcVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          pcVar8 = pcVar8 + 8;
        }
        *(undefined8 *)(lVar2 + 0xc0 + lVar9) = param_3[0x15];
        uVar3 = param_3[0x14];
        puVar7 = (undefined8 *)(lVar2 + 0xb0 + lVar9);
        *puVar7 = param_3[0x13];
        puVar7[1] = uVar3;
        return;
      }
      lVar9 = lVar9 + 0x2b0;
    } while ((longlong)*(int *)(param_1 + 0x1a8) * 0x2b0 - lVar9 != 0);
  }
  return;
}



// FUNCTION 14987b194 FUN_14987b194 body=1312 status=ok
// SIG undefined FUN_14987b194(void)

undefined8
FUN_14987b194(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  wchar_t **ppwVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  longlong *local_138;
  longlong *local_130 [2];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  wchar_t **local_c8;
  undefined1 *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  longlong *local_98 [2];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((longlong)*(int *)(param_1 + 0x38) == 0) {
LAB_14987b685:
    if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return 1;
  }
  plVar10 = *(longlong **)(param_1 + 0x30);
  plVar9 = plVar10 + (longlong)*(int *)(param_1 + 0x38) * 0x10;
  local_148 = param_3;
LAB_14987b1e7:
  iVar3 = -1;
  if ((longlong)(int)param_4[1] != 0) {
    lVar4 = (longlong)(int)param_4[1] << 3;
    lVar8 = 0;
    do {
      if (*plVar10 == *(longlong *)(*param_4 + lVar8 * 8)) {
        iVar3 = (int)lVar8;
        break;
      }
      lVar8 = lVar8 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  *(int *)(plVar10 + 2) = iVar3;
  if (*(char *)(param_1 + 0x40) == '\0') {
    iVar6 = -1;
    if ((longlong)(int)param_3[1] != 0) {
      lVar4 = (longlong)(int)param_3[1] << 3;
      lVar8 = 0;
      do {
        if (plVar10[1] == *(longlong *)(*param_3 + lVar8 * 8)) goto LAB_14987b278;
        lVar8 = lVar8 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
  }
  else {
    iVar6 = -1;
    if ((longlong)(int)param_4[1] != 0) {
      lVar4 = (longlong)(int)param_4[1] << 3;
      lVar8 = 0;
      do {
        if (plVar10[1] == *(longlong *)(*param_4 + lVar8 * 8)) goto LAB_14987b278;
        lVar8 = lVar8 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
  }
  goto LAB_14987b27b;
LAB_14987b278:
  iVar6 = (int)lVar8;
LAB_14987b27b:
  *(int *)((longlong)plVar10 + 0x14) = iVar6;
  if (iVar3 == -1) {
    FUN_145715fae(local_f8,plVar10);
    local_a8 = L"MissingSourceBone";
    local_a0 = 0x11;
    FUN_1446e940c(local_11c,&local_a8);
    local_a8 = L"UPinBoneOp";
    local_a0 = 10;
    FUN_1446e940c(local_120,&local_a8);
    FUN_140208bae(local_118,local_120,local_11c);
    FUN_14023409e(&local_108,local_118,1);
    local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
    FUN_14023423e(local_98,local_f8);
    local_c0 = local_88;
    local_c8 = &local_a8;
    FUN_14010d304(&local_b8,&local_c8);
    local_d8 = local_108;
    local_d0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_e8,&local_d8,&local_b8);
    FUN_14007f2db(local_b8,local_b0);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    param_3 = local_148;
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
    plVar7 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_100 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
    FUN_14986922e(param_5,local_e8);
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_118[0] != (longlong *)0x0) {
      (**(code **)(*local_118[0] + 0x10))();
    }
    if (iVar6 != -1) goto LAB_14987b2d1;
  }
  else if (iVar6 != -1) {
    lVar4 = param_4[6];
    if (*(char *)(param_1 + 0x40) == '\0') {
      lVar4 = param_3[6];
    }
    FUN_1449437a2((longlong)iVar6 * 0x60 + lVar4,&local_a8,param_4[6] + (longlong)iVar3 * 0x60);
    ppwVar5 = &local_a8;
    plVar7 = plVar10 + 4;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *plVar7 = (longlong)*ppwVar5;
      ppwVar5 = ppwVar5 + 1;
      plVar7 = plVar7 + 1;
    }
    goto LAB_14987b2d1;
  }
  FUN_145715fae(local_130,plVar10 + 1);
  local_a8 = L"MissingTargetBone";
  local_a0 = 0x11;
  FUN_1446e940c(local_11c,&local_a8);
  local_a8 = L"UPinBoneOp";
  local_a0 = 10;
  FUN_1446e940c(local_120,&local_a8);
  FUN_140208bae(local_118,local_120,local_11c);
  FUN_14023409e(&local_140,local_118,1);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
  FUN_14023423e(local_98,local_130);
  local_c0 = local_88;
  local_c8 = &local_a8;
  FUN_14010d304(&local_b8,&local_c8);
  local_d8 = local_140;
  local_d0 = local_138;
  if (local_138 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_138 + 1) = (int)local_138[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_e8,&local_d8,&local_b8);
  FUN_14007f2db(local_b8,local_b0);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  plVar7 = local_138;
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_138 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_130[0] != (longlong *)0x0) {
    (**(code **)(*local_130[0] + 0x10))();
  }
  FUN_14986922e(param_5,local_e8);
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
LAB_14987b2d1:
  plVar10 = plVar10 + 0x10;
  if (plVar10 == plVar9) goto LAB_14987b685;
  goto LAB_14987b1e7;
}



// FUNCTION 14987b6b6 FUN_14987b6b6 body=5483 status=ok
// SIG undefined FUN_14987b6b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14987b6b6(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  int iVar12;
  double *pdVar13;
  undefined1 (*pauVar14) [16];
  int iVar15;
  longlong *plVar16;
  double *pdVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  double *pdVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  double dVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar51;
  undefined1 auVar50 [16];
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  undefined4 uVar57;
  double dVar59;
  undefined1 auVar58 [16];
  double dVar60;
  double dVar61;
  double dVar64;
  double dVar65;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar66;
  double dVar67;
  double dVar68;
  undefined1 auVar69 [16];
  double dVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined1 auStack_2f8 [32];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
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
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar21 = (longlong)*(int *)(param_1 + 0x38) << 7;
    pdVar22 = (double *)(*(longlong *)(param_1 + 0x30) + 0x20);
    do {
      auVar45 = _DAT_149934d80;
      if ((*(int *)(pdVar22 + -2) == -1) || ((longlong)*(int *)((longlong)pdVar22 + -0xc) == -1))
      goto LAB_14987cb7b;
      plVar16 = param_4;
      if (*(char *)(param_1 + 0x40) == '\0') {
        plVar16 = param_3;
      }
      lVar18 = *plVar16;
      lVar20 = (longlong)*(int *)((longlong)pdVar22 + -0xc) * 0x60;
      pdVar13 = (double *)(lVar18 + lVar20);
      pdVar17 = (double *)&DAT_14c846480;
      if (*(char *)(param_1 + 0x42) != '\0') {
        pdVar17 = pdVar22;
      }
      dVar39 = *pdVar17;
      dVar32 = pdVar17[1];
      dVar52 = pdVar17[2];
      dVar70 = pdVar17[3];
      local_2d8 = *(undefined1 (*) [16])(pdVar17 + 4);
      auVar31 = *(undefined1 (*) [16])(pdVar17 + 8);
      dVar1 = auVar31._0_8_;
      dVar34 = auVar31._8_8_;
      local_2a8 = *(undefined1 (*) [16])(pdVar17 + 10);
      dVar40 = local_2a8._0_8_;
      auVar62 = *(undefined1 (*) [16])(lVar18 + 0x40 + lVar20);
      dVar2 = auVar62._0_8_;
      dVar3 = auVar62._8_8_;
      auVar35 = *(undefined1 (*) [16])(lVar18 + 0x50 + lVar20);
      dVar44 = auVar35._0_8_;
      dVar29 = auVar35._8_8_;
      auVar31 = minpd(auVar31,auVar62);
      auVar35 = minpd(local_2a8,auVar35);
      auVar62._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
      auVar62._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
      iVar15 = movmskpd((int)lVar18,auVar62);
      auVar31._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
      auVar31._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
      uVar19 = movmskpd((int)lVar20,auVar31);
      local_2c8 = ZEXT816(0x3ff0000000000000) << 0x40;
      if ((uVar19 & 0x3fffffff) == 0 && iVar15 == 0) {
        dVar60 = *pdVar13;
        dVar61 = pdVar13[1];
        dVar64 = pdVar13[2];
        dVar9 = pdVar13[3];
        dVar59 = pdVar13[3];
        dVar67 = pdVar13[3];
        dVar65 = pdVar13[1];
        dVar68 = pdVar13[1];
        dVar51 = pdVar13[2];
        dVar30 = pdVar13[2];
        dVar33 = dVar32 * dVar51 * -1.0 +
                 dVar52 * dVar65 + dVar70 * *pdVar13 * 1.0 + dVar39 * dVar59;
        dVar38 = dVar39 * dVar30 * 1.0 +
                 dVar70 * dVar68 + dVar52 * *pdVar13 * -1.0 + dVar32 * dVar67;
        auVar45._0_8_ =
             dVar70 * dVar51 * 1.0 + ((*pdVar13 * dVar32 * 1.0 + dVar52 * dVar59) - dVar39 * dVar65)
        ;
        auVar45._8_8_ =
             dVar52 * dVar30 * -1.0 +
             ((*pdVar13 * dVar39 * -1.0 + dVar70 * dVar67) - dVar32 * dVar68);
        dVar65 = (double)local_2d8._0_8_ * dVar2;
        dVar68 = (double)local_2d8._8_8_ * dVar3;
        dVar51 = pdVar17[6] * dVar44;
        dVar30 = pdVar17[7] * dVar29;
        dVar39 = dVar68 * dVar60 - dVar65 * dVar61;
        dVar32 = dVar51 * dVar61 - dVar68 * dVar64;
        dVar52 = dVar65 * dVar64 - dVar51 * dVar60;
        dVar70 = dVar30 * dVar9 - dVar30 * dVar9;
        dVar32 = dVar32 + dVar32;
        dVar52 = dVar52 + dVar52;
        dVar39 = dVar39 + dVar39;
        dVar70 = dVar70 + dVar70;
        auVar35._0_8_ = dVar40 * dVar44;
        auVar35._8_8_ = local_2a8._8_8_ * dVar29;
        dVar40 = (dVar39 * dVar61 - dVar64 * dVar52) + dVar59 * dVar32 + dVar65 + pdVar13[4];
        dVar44 = (dVar32 * dVar64 - dVar39 * dVar60) + dVar67 * dVar52 + dVar68 + pdVar13[5];
        local_2b8._0_8_ =
             (dVar52 * dVar60 - dVar61 * dVar32) + dVar59 * dVar39 + dVar51 + pdVar13[6];
        local_2b8._8_8_ = (dVar70 * dVar9 - dVar70 * dVar9) + dVar67 * dVar70 + dVar30 + pdVar13[7];
      }
      else {
        local_2b8._8_8_ = local_2a8._8_8_ * dVar29;
        local_2b8._0_8_ = dVar40 * dVar44;
        auVar35 = local_2b8;
        dVar65 = *pdVar13;
        dVar68 = pdVar13[1];
        dVar51 = pdVar13[2];
        dVar59 = dVar68 + dVar68;
        dVar60 = dVar51 + dVar51;
        dVar67 = dVar65 * (dVar65 + dVar65);
        local_1a8 = (1.0 - (dVar67 + dVar68 * dVar59)) * dVar44;
        dVar29 = pdVar13[3];
        dVar61 = dVar60 * dVar29;
        dVar64 = (dVar65 + dVar65) * pdVar13[3];
        dVar29 = dVar59 * dVar29;
        dVar67 = (1.0 - (dVar51 * dVar60 + dVar67)) * dVar3;
        dVar30 = (dVar59 * dVar65 + dVar61) * dVar2;
        local_1c8 = (dVar60 * dVar68 + dVar64) * dVar3;
        local_1e8 = (*pdVar13 * dVar60 - dVar29) * dVar2;
        local_1f8._8_4_ = SUB84(dVar30,0);
        local_1f8._0_8_ = (1.0 - (dVar51 * dVar60 + dVar68 * dVar59)) * dVar2;
        local_1f8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        uStack_1e0 = 0;
        local_1d8._8_4_ = SUB84(dVar67,0);
        local_1d8._0_8_ = (dVar59 * dVar65 - dVar61) * dVar3;
        local_1d8._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
        uStack_1c0 = 0;
        local_1b8._8_8_ = (dVar60 * dVar68 - dVar64) * dVar44;
        local_1b8._0_8_ = (dVar29 + *pdVar13 * dVar60) * dVar44;
        uStack_1a0 = 0;
        local_198 = pdVar13[4];
        dStack_190 = pdVar13[5];
        local_188 = pdVar13[6];
        uStack_180 = 0x3ff0000000000000;
        dVar65 = dVar32 + dVar32;
        dVar67 = dVar52 + dVar52;
        dVar29 = dVar39 * (dVar39 + dVar39);
        local_228 = (1.0 - (dVar29 + dVar32 * dVar65)) * dVar40;
        dVar59 = (dVar39 + dVar39) * dVar70;
        local_258 = (dVar65 * dVar39 - dVar67 * dVar70) * dVar34;
        local_278 = ((double)DAT_149934d80 - (dVar52 * dVar67 + dVar32 * dVar65)) * dVar1;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar52 * dVar67 + dVar29)) * dVar34;
        dStack_270 = (dVar65 * dVar39 + dVar67 * dVar70) * dVar1;
        local_248 = (dVar67 * dVar32 + dVar59) * dVar34;
        local_268 = (dVar39 * dVar67 - dVar65 * dVar70) * dVar1;
        uStack_260 = 0;
        uStack_240 = 0;
        local_238._8_8_ = (dVar67 * dVar32 - dVar59) * dVar40;
        local_238._0_8_ = (dVar65 * dVar70 + dVar39 * dVar67) * dVar40;
        uStack_220 = 0;
        uStack_200 = 0x3ff0000000000000;
        local_218 = local_2d8;
        local_208 = pdVar17[6];
        FUN_1447fea8d(&local_178,&local_278,local_1f8);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar24._8_8_ = -(ulonglong)(0.0 <= dVar34 * dVar3);
        auVar24._0_8_ = -(ulonglong)(0.0 <= dVar1 * dVar2);
        auVar31 = blendvpd(_DAT_149936790,auVar45,auVar24);
        uVar23 = -(ulonglong)(0.0 <= dVar40 * dVar44);
        dVar40 = (double)(~uVar23 & 0xbff0000000000000 | uVar23 & 0x3ff0000000000000);
        dVar44 = auVar31._0_8_;
        local_168 = local_168 * dVar44;
        local_170 = local_170 * dVar44;
        local_178 = local_178 * dVar44;
        dVar44 = auVar31._8_8_;
        local_148 = local_148 * dVar44;
        local_150 = local_150 * dVar44;
        local_158 = dVar44 * local_158;
        local_128 = local_128 * dVar40;
        local_130 = local_130 * dVar40;
        local_138 = dVar40 * local_138;
        pdVar17 = &local_298;
        pdVar13 = (double *)FUN_14481fd10(&local_298,&local_178);
        iVar15 = (int)pdVar17;
        dVar40 = local_288 * local_288 + local_298 * local_298;
        dVar44 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar41._0_8_ = dVar40 + dVar44;
        auVar41._8_8_ = dVar40 + dVar44;
        auVar54._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
        auVar54._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
        auVar31 = sqrtpd(auVar41,auVar41);
        auVar45 = divpd(auVar45,auVar31);
        auVar46._0_8_ = auVar45._0_8_ * local_288;
        auVar46._8_8_ = auVar45._8_8_ * dStack_280;
        dVar33 = (double)((ulonglong)(local_298 * auVar45._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_));
        dVar38 = (double)((ulonglong)(dStack_290 * auVar45._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_));
        auVar45 = blendvpd(local_2c8,auVar46,auVar54);
        local_2b8._8_8_ = 0.0;
        dVar40 = local_118;
        dVar44 = dStack_110;
        local_2b8._0_8_ = local_108;
      }
      auVar24 = _DAT_149934d80;
      dVar34 = dVar34 * dVar3;
      dVar1 = dVar1 * dVar2;
      auVar31 = *(undefined1 (*) [16])(param_1 + 0x90);
      dVar2 = auVar31._0_8_;
      dVar29 = auVar31._8_8_;
      auVar62 = *(undefined1 (*) [16])(param_1 + 0xa0);
      dVar3 = auVar62._0_8_;
      local_2d8._8_4_ = SUB84(dVar34,0);
      local_2d8._0_8_ = dVar1;
      local_2d8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      auVar47._8_8_ = dVar34;
      auVar47._0_8_ = dVar1;
      auVar31 = minpd(auVar47,auVar31);
      dVar34 = auVar35._0_8_;
      auVar54 = minpd(auVar35,auVar62);
      auVar48._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
      auVar48._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
      iVar12 = movmskpd((int)pdVar13,auVar48);
      auVar55._8_8_ = -(ulonglong)(auVar54._8_8_ < 0.0);
      auVar55._0_8_ = -(ulonglong)(auVar54._0_8_ < 0.0);
      uVar19 = movmskpd(iVar15,auVar55);
      dVar39 = auVar45._0_8_;
      dVar32 = auVar45._8_8_;
      uVar11 = local_2d8._8_8_;
      if ((uVar19 & 0x3fffffff) == 0 && iVar12 == 0) {
        dVar60 = *(double *)(param_1 + 0x50);
        dVar61 = *(double *)(param_1 + 0x58);
        dVar64 = *(double *)(param_1 + 0x60);
        dVar9 = *(double *)(param_1 + 0x68);
        dVar70 = *(double *)(param_1 + 0x68);
        dVar52 = *(double *)(param_1 + 0x68);
        dVar59 = *(double *)(param_1 + 0x50);
        dVar67 = *(double *)(param_1 + 0x50);
        dVar68 = *(double *)(param_1 + 0x58);
        dVar65 = *(double *)(param_1 + 0x58);
        dVar51 = *(double *)(param_1 + 0x60);
        dVar30 = *(double *)(param_1 + 0x60);
        dVar53 = dVar38 * dVar51 * -1.0 + dVar39 * dVar68 + dVar32 * dVar59 * 1.0 + dVar33 * dVar70;
        dVar56 = dVar33 * dVar30 * 1.0 + dVar32 * dVar65 + dVar39 * dVar67 * -1.0 + dVar38 * dVar52;
        auVar49._0_8_ =
             dVar32 * dVar51 * 1.0 + ((dVar59 * dVar38 * 1.0 + dVar39 * dVar70) - dVar33 * dVar68);
        auVar49._8_8_ =
             dVar39 * dVar30 * -1.0 + ((dVar67 * dVar33 * -1.0 + dVar32 * dVar52) - dVar38 * dVar65)
        ;
        dVar40 = dVar40 * dVar2;
        dVar44 = dVar44 * dVar29;
        local_2b8._0_8_ = (double)local_2b8._0_8_ * dVar3;
        local_2b8._8_8_ = (double)local_2b8._8_8_ * auVar62._8_8_;
        dVar39 = dVar44 * dVar60 - dVar40 * dVar61;
        dVar65 = (double)local_2b8._0_8_ * dVar61 - dVar44 * dVar64;
        dVar67 = dVar40 * dVar64 - (double)local_2b8._0_8_ * dVar60;
        dVar32 = (double)local_2b8._8_8_ * dVar9 - (double)local_2b8._8_8_ * dVar9;
        dVar65 = dVar65 + dVar65;
        dVar67 = dVar67 + dVar67;
        dVar39 = dVar39 + dVar39;
        dVar32 = dVar32 + dVar32;
        dVar59 = (dVar39 * dVar61 - dVar64 * dVar67) + dVar70 * dVar65 + dVar40 +
                 *(double *)(param_1 + 0x70);
        dVar44 = (dVar65 * dVar64 - dVar39 * dVar60) + dVar52 * dVar67 + dVar44 +
                 *(double *)(param_1 + 0x78);
        dVar40 = (dVar67 * dVar60 - dVar61 * dVar65) + dVar70 * dVar39 + (double)local_2b8._0_8_ +
                 *(double *)(param_1 + 0x80);
        dVar39 = (dVar32 * dVar9 - dVar32 * dVar9) + dVar52 * dVar32 + (double)local_2b8._8_8_ +
                 *(double *)(param_1 + 0x88);
        uVar72 = 0;
        local_2b8 = auVar35;
      }
      else {
        dVar65 = *(double *)(param_1 + 0x50);
        dVar68 = *(double *)(param_1 + 0x58);
        dVar51 = *(double *)(param_1 + 0x60);
        dVar30 = dVar68 + dVar68;
        dVar60 = dVar51 + dVar51;
        dVar67 = dVar65 * (dVar65 + dVar65);
        local_1a8 = (1.0 - (dVar67 + dVar68 * dVar30)) * dVar3;
        dVar59 = *(double *)(param_1 + 0x50) * dVar60;
        dVar52 = *(double *)(param_1 + 0x68);
        dVar61 = dVar60 * dVar52;
        dVar64 = (dVar65 + dVar65) * *(double *)(param_1 + 0x68);
        dVar52 = dVar30 * dVar52;
        dVar70 = (double)local_2d8._8_8_ * dVar29;
        dVar67 = (1.0 - (dVar51 * dVar60 + dVar67)) * dVar29;
        local_1c8 = (dVar60 * dVar68 + dVar64) * dVar29;
        local_1e8 = (dVar59 - dVar52) * dVar2;
        local_1f8._8_8_ = (dVar30 * dVar65 + dVar61) * dVar2;
        local_1f8._0_8_ = (1.0 - (dVar51 * dVar60 + dVar68 * dVar30)) * dVar2;
        uStack_1e0 = 0;
        local_1d8._8_4_ = SUB84(dVar67,0);
        local_1d8._0_8_ = (dVar30 * dVar65 - dVar61) * dVar29;
        local_1d8._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
        uStack_1c0 = 0;
        local_1b8._8_8_ = (dVar60 * dVar68 - dVar64) * dVar3;
        local_1b8._0_8_ = (dVar52 + dVar59) * dVar3;
        uStack_1a0 = 0;
        local_198 = *(double *)(param_1 + 0x70);
        dStack_190 = *(double *)(param_1 + 0x78);
        local_188 = *(double *)(param_1 + 0x80);
        uStack_180 = 0x3ff0000000000000;
        dVar65 = dVar38 + dVar38;
        dVar67 = dVar39 + dVar39;
        dVar68 = dVar33 * (dVar33 + dVar33);
        local_228 = (1.0 - (dVar68 + dVar38 * dVar65)) * dVar34;
        dVar59 = (dVar33 + dVar33) * dVar32;
        local_258 = (dVar65 * dVar33 - dVar67 * dVar32) * (double)local_2d8._8_8_;
        dVar52 = (dVar67 * dVar38 - dVar59) * dVar34;
        local_278 = ((double)DAT_149934d80 - (dVar39 * dVar67 + dVar38 * dVar65)) * dVar1;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar39 * dVar67 + dVar68)) * (double)local_2d8._8_8_;
        dStack_270 = (dVar65 * dVar33 + dVar67 * dVar32) * dVar1;
        local_248 = (dVar67 * dVar38 + dVar59) * (double)local_2d8._8_8_;
        local_268 = (dVar33 * dVar67 - dVar65 * dVar32) * dVar1;
        uStack_260 = 0;
        uStack_240 = 0;
        local_238._8_4_ = SUB84(dVar52,0);
        local_238._0_8_ = (dVar33 * dVar67 + dVar65 * dVar32) * dVar34;
        local_238._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
        uStack_220 = 0;
        local_218._8_4_ = SUB84(dVar44,0);
        local_218._0_8_ = dVar40;
        local_218._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        uStack_200 = 0x3ff0000000000000;
        local_208 = (double)local_2b8._0_8_;
        FUN_1447fea8d(&local_178,&local_278,local_1f8,0);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar25._8_8_ = -(ulonglong)(0.0 <= dVar70);
        auVar25._0_8_ = -(ulonglong)(0.0 <= dVar1 * dVar2);
        auVar45 = blendvpd(_DAT_149936790,auVar24,auVar25);
        uVar23 = -(ulonglong)(0.0 <= dVar34 * dVar3);
        dVar40 = (double)(~uVar23 & 0xbff0000000000000 | uVar23 & 0x3ff0000000000000);
        dVar44 = auVar45._0_8_;
        local_168 = local_168 * dVar44;
        local_170 = local_170 * dVar44;
        local_178 = local_178 * dVar44;
        dVar44 = auVar45._8_8_;
        local_148 = local_148 * dVar44;
        local_150 = local_150 * dVar44;
        local_158 = dVar44 * local_158;
        local_128 = local_128 * dVar40;
        local_130 = local_130 * dVar40;
        local_138 = dVar40 * local_138;
        pdVar13 = &local_298;
        iVar12 = FUN_14481fd10(&local_298,&local_178);
        uVar72 = SUB84(pdVar13,0);
        dVar40 = local_288 * local_288 + local_298 * local_298;
        dVar44 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar36._0_8_ = dVar40 + dVar44;
        auVar36._8_8_ = dVar40 + dVar44;
        auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
        auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
        auVar45 = sqrtpd(auVar36,auVar36);
        auVar45 = divpd(auVar24,auVar45);
        auVar42._0_8_ = auVar45._0_8_ * local_288;
        auVar42._8_8_ = auVar45._8_8_ * dStack_280;
        dVar53 = (double)((ulonglong)(local_298 * auVar45._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
        dVar56 = (double)((ulonglong)(dStack_290 * auVar45._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
        auVar49 = blendvpd(local_2c8,auVar42,auVar26);
        dVar39 = 0.0;
        dVar40 = local_108;
        dVar59 = local_118;
        dVar44 = dStack_110;
      }
      auVar24 = _DAT_149934d80;
      dVar34 = dVar34 * dVar3;
      dVar29 = (double)uVar11 * dVar29;
      dVar1 = dVar1 * dVar2;
      dVar52 = auVar35._8_8_ * auVar62._8_8_;
      uVar71 = (undefined4)((ulonglong)dVar52 >> 0x20);
      uVar57 = (undefined4)((ulonglong)dVar29 >> 0x20);
      auVar45 = *(undefined1 (*) [16])(param_1 + 0xf0);
      dVar2 = auVar45._0_8_;
      dVar32 = auVar45._8_8_;
      auVar31 = *(undefined1 (*) [16])(param_1 + 0x100);
      dVar3 = auVar31._0_8_;
      auVar4._8_4_ = SUB84(dVar29,0);
      auVar4._0_8_ = dVar1;
      auVar4._12_4_ = uVar57;
      auVar45 = minpd(auVar45,auVar4);
      auVar6._8_4_ = SUB84(dVar52,0);
      auVar6._0_8_ = dVar34;
      auVar6._12_4_ = uVar71;
      auVar62 = minpd(auVar31,auVar6);
      auVar58._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
      auVar58._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
      iVar15 = movmskpd(iVar12,auVar58);
      auVar63._8_8_ = -(ulonglong)(auVar62._8_8_ < 0.0);
      auVar63._0_8_ = -(ulonglong)(auVar62._0_8_ < 0.0);
      uVar19 = movmskpd(uVar72,auVar63);
      dVar70 = auVar49._0_8_;
      dVar67 = auVar49._8_8_;
      if ((uVar19 & 0x3fffffff) == 0 && iVar15 == 0) {
        dVar9 = *(double *)(param_1 + 0xb0);
        dVar33 = *(double *)(param_1 + 0xb8);
        dVar38 = *(double *)(param_1 + 0xc0);
        dVar10 = *(double *)(param_1 + 200);
        local_2c8._8_4_ = SUB84(dVar52,0);
        local_2c8._0_8_ = dVar34;
        local_2c8._12_4_ = uVar71;
        local_2d8._8_4_ = SUB84(dVar29,0);
        local_2d8._0_8_ = dVar1;
        local_2d8._12_4_ = uVar57;
        dVar65 = dVar33 * dVar70 * -1.0 + dVar38 * dVar56 + dVar53 * dVar10 * 1.0 + dVar67 * dVar9;
        dVar68 = dVar9 * dVar70 * 1.0 + dVar10 * dVar56 + dVar53 * dVar38 * -1.0 + dVar67 * dVar33;
        dVar60 = *(double *)(param_1 + 0xd0) * dVar1;
        dVar61 = *(double *)(param_1 + 0xd8) * (double)local_2d8._8_8_;
        dVar29 = *(double *)(param_1 + 0xe0) * dVar34;
        dVar52 = *(double *)(param_1 + 0xe8) * (double)local_2c8._8_8_;
        dVar64 = dVar61 * dVar53 - dVar56 * dVar60;
        dVar66 = dVar29 * dVar56 - dVar70 * dVar61;
        dVar51 = dVar60 * dVar70 - dVar53 * dVar29;
        dVar30 = dVar52 * dVar67 - dVar67 * dVar52;
        dVar66 = dVar66 + dVar66;
        dVar51 = dVar51 + dVar51;
        dVar64 = dVar64 + dVar64;
        dVar30 = dVar30 + dVar30;
        dVar59 = dVar59 + (dVar64 * dVar56 - dVar70 * dVar51) + dVar67 * dVar66 + dVar60;
        dVar44 = dVar44 + (dVar66 * dVar70 - dVar64 * dVar53) + dVar67 * dVar51 + dVar61;
        dVar40 = dVar40 + (dVar51 * dVar53 - dVar56 * dVar66) + dVar67 * dVar64 + dVar29;
        dVar39 = dVar39 + (dVar30 * dVar67 - dVar30 * dVar67) + dVar67 * dVar30 + dVar52;
        auVar50._8_8_ =
             dVar38 * dVar70 * -1.0 + ((dVar53 * dVar9 * -1.0 + dVar67 * dVar10) - dVar56 * dVar33);
        auVar50._0_8_ =
             (ulonglong)
             (dVar10 * dVar70 * 1.0 + ((dVar53 * dVar33 * 1.0 + dVar67 * dVar38) - dVar56 * dVar9));
        dVar29 = dVar32 * (double)local_2d8._8_8_;
        auVar69._8_8_ = auVar31._8_8_ * (double)local_2c8._8_8_;
        auVar69._0_8_ = dVar3 * dVar34;
      }
      else {
        dVar65 = dVar56 + dVar56;
        dVar68 = dVar70 + dVar70;
        dVar30 = dVar53 * (dVar53 + dVar53);
        dVar51 = (dVar53 + dVar53) * dVar67;
        dVar39 = (dVar68 * dVar56 - dVar51) * dVar34;
        local_1a8 = (1.0 - (dVar30 + dVar56 * dVar65)) * dVar34;
        auVar69._0_8_ = dVar34 * dVar3;
        auVar69._8_8_ = dVar52 * auVar31._8_8_;
        dVar52 = (dVar65 * dVar53 + dVar68 * dVar67) * dVar1;
        local_1c8 = (dVar68 * dVar56 + dVar51) * dVar29;
        local_1e8 = (dVar53 * dVar68 - dVar65 * dVar67) * dVar1;
        local_1f8._8_4_ = SUB84(dVar52,0);
        local_1f8._0_8_ = (1.0 - (dVar70 * dVar68 + dVar56 * dVar65)) * dVar1;
        local_1f8._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
        uStack_1e0 = 0;
        local_1d8._8_8_ = (1.0 - (dVar70 * dVar68 + dVar30)) * dVar29;
        local_1d8._0_8_ = (dVar65 * dVar53 - dVar68 * dVar67) * dVar29;
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar39,0);
        local_1b8._0_8_ = (dVar53 * dVar68 + dVar65 * dVar67) * dVar34;
        local_1b8._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
        uStack_1a0 = 0;
        uStack_180 = 0x3ff0000000000000;
        dVar39 = *(double *)(param_1 + 0xb0);
        dVar52 = *(double *)(param_1 + 0xb8);
        dVar70 = *(double *)(param_1 + 0xc0);
        dVar67 = dVar52 + dVar52;
        dVar65 = dVar70 + dVar70;
        dVar30 = dVar39 * (dVar39 + dVar39);
        local_228 = (1.0 - (dVar30 + dVar52 * dVar67)) * dVar3;
        dVar60 = *(double *)(param_1 + 0xb0) * dVar65;
        dVar34 = *(double *)(param_1 + 200);
        dVar68 = dVar65 * dVar34;
        dVar51 = (dVar39 + dVar39) * *(double *)(param_1 + 200);
        dVar34 = dVar67 * dVar34;
        local_258 = (dVar67 * dVar39 - dVar68) * dVar32;
        dVar29 = dVar29 * dVar32;
        local_278 = ((double)DAT_149934d80 - (dVar70 * dVar65 + dVar52 * dVar67)) * dVar2;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar70 * dVar65 + dVar30)) * dVar32;
        dStack_270 = (dVar67 * dVar39 + dVar68) * dVar2;
        local_248 = (dVar65 * dVar52 + dVar51) * dVar32;
        local_268 = (dVar60 - dVar34) * dVar2;
        uStack_260 = 0;
        uStack_240 = 0;
        local_238._8_8_ = (dVar65 * dVar52 - dVar51) * dVar3;
        local_238._0_8_ = (dVar34 + dVar60) * dVar3;
        uStack_220 = 0;
        local_218 = *(undefined1 (*) [16])(param_1 + 0xd0);
        local_208 = *(double *)(param_1 + 0xe0);
        uStack_200 = 0x3ff0000000000000;
        local_198 = dVar59;
        dStack_190 = dVar44;
        local_188 = dVar40;
        FUN_1447fea8d(&local_178,&local_278,local_1f8);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar27._8_8_ = -(ulonglong)(0.0 <= dVar29);
        auVar27._0_8_ = -(ulonglong)(0.0 <= dVar1 * dVar2);
        auVar45 = blendvpd(_DAT_149936790,auVar24,auVar27);
        dVar40 = (double)(~-(ulonglong)(0.0 <= auVar69._0_8_) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= auVar69._0_8_) & 0x3ff0000000000000);
        dVar44 = auVar45._0_8_;
        local_168 = local_168 * dVar44;
        local_170 = local_170 * dVar44;
        local_178 = local_178 * dVar44;
        dVar44 = auVar45._8_8_;
        local_148 = local_148 * dVar44;
        local_150 = local_150 * dVar44;
        local_158 = dVar44 * local_158;
        local_128 = local_128 * dVar40;
        local_130 = local_130 * dVar40;
        local_138 = dVar40 * local_138;
        FUN_14481fd10(&local_298,&local_178);
        dVar40 = local_288 * local_288 + local_298 * local_298;
        dVar44 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar37._0_8_ = dVar40 + dVar44;
        auVar37._8_8_ = dVar40 + dVar44;
        auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
        auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
        auVar45 = sqrtpd(auVar37,auVar37);
        auVar45 = divpd(auVar24,auVar45);
        auVar43._0_8_ = auVar45._0_8_ * local_288;
        auVar43._8_8_ = auVar45._8_8_ * dStack_280;
        dVar65 = (double)((ulonglong)(local_298 * auVar45._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_));
        dVar68 = (double)((ulonglong)(dStack_290 * auVar45._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_));
        auVar50 = blendvpd(local_2c8,auVar43,auVar28);
        dVar39 = 0.0;
        dVar59 = local_118;
        dVar44 = dStack_110;
        dVar40 = local_108;
      }
      uVar72 = (undefined4)((ulonglong)dVar68 >> 0x20);
      if (3 < *(byte *)(param_1 + 0x41)) goto LAB_14987cb7b;
      pauVar14 = (undefined1 (*) [16])((longlong)*(int *)(pdVar22 + -2) * 0x60 + *param_4);
      switch(*(byte *)(param_1 + 0x41)) {
      case 0:
        auVar8._8_4_ = SUB84(dVar68,0);
        auVar8._0_8_ = dVar65;
        auVar8._12_4_ = uVar72;
        *pauVar14 = auVar8;
        pauVar14[1] = auVar50;
        *(double *)pauVar14[2] = dVar59;
        *(double *)(pauVar14[2] + 8) = dVar44;
        *(double *)pauVar14[3] = dVar40;
        *(double *)(pauVar14[3] + 8) = dVar39;
        auVar50 = auVar69;
        goto LAB_14987cb6b;
      case 1:
        auVar50._8_8_ = 0;
        auVar50._0_8_ = (ulonglong)dVar40;
        *(double *)pauVar14[2] = dVar59;
        *(double *)(pauVar14[2] + 8) = dVar44;
        lVar18 = 0x30;
        break;
      case 2:
        auVar7._8_4_ = SUB84(dVar68,0);
        auVar7._0_8_ = dVar65;
        auVar7._12_4_ = uVar72;
        *pauVar14 = auVar7;
        lVar18 = 0x10;
        break;
      case 3:
        auVar50._0_8_ = auVar69._0_8_;
        auVar50._8_8_ = 0;
LAB_14987cb6b:
        auVar5._8_4_ = SUB84(dVar29,0);
        auVar5._0_8_ = dVar1 * dVar2;
        auVar5._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
        pauVar14[4] = auVar5;
        lVar18 = 0x50;
      }
      *(undefined1 (*) [16])(*pauVar14 + lVar18) = auVar50;
LAB_14987cb7b:
      pdVar22 = pdVar22 + 0x10;
      lVar21 = lVar21 + -0x80;
    } while (lVar21 != 0);
  }
  if ((local_f0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14987cc22 FUN_14987cc22 body=1904 status=ok
// SIG undefined FUN_14987cc22(void)

ulonglong FUN_14987cc22(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                       undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  wchar_t **ppwVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_188 [40];
  undefined8 local_160;
  longlong *local_158;
  longlong *local_150 [2];
  undefined8 local_140;
  longlong *local_138;
  longlong *local_130 [2];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  wchar_t **local_c8;
  undefined1 *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  longlong *local_98 [2];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((longlong)(int)param_3[1] != 0) {
    lVar4 = (longlong)(int)param_3[1] << 3;
    lVar5 = 0;
    do {
      if (*(longlong *)(*param_3 + lVar5 * 8) == *(longlong *)(param_1 + 0x30)) {
        *(int *)(param_1 + 0xb0) = (int)lVar5;
        bVar3 = true;
        if ((int)lVar5 == -1) goto LAB_14987cc8f;
        goto LAB_14987ce58;
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
LAB_14987cc8f:
  FUN_145715fae(local_f8);
  local_a8 = L"MissingSourceRootBone";
  local_a0 = 0x15;
  FUN_1446e940c(local_11c,&local_a8);
  local_a8 = L"RootMotionGeneratorOp";
  local_a0 = 0x15;
  FUN_1446e940c(local_120,&local_a8);
  FUN_140208bae(local_118,local_120,local_11c);
  FUN_14023409e(&local_108,local_118,1);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
  FUN_14023423e(local_98,local_f8);
  local_c0 = local_88;
  local_c8 = &local_a8;
  FUN_14010d304(&local_b8);
  local_d8 = local_108;
  local_d0 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_e8,&local_d8,&local_b8);
  FUN_14007f2db(local_b8,local_b0);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_100 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_100 + 0x10))(local_100);
      }
    }
  }
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
  FUN_14986922e(param_5,local_e8);
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  bVar3 = false;
LAB_14987ce58:
  if ((longlong)(int)param_4[1] != 0) {
    lVar4 = (longlong)(int)param_4[1] << 3;
    lVar5 = 0;
    do {
      if (*(longlong *)(*param_4 + lVar5 * 8) == *(longlong *)(param_1 + 0x38)) {
        *(int *)(param_1 + 0xb4) = (int)lVar5;
        if ((int)lVar5 == -1) goto LAB_14987ce90;
        goto LAB_14987d045;
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
LAB_14987ce90:
  FUN_145715fae(local_130);
  local_a8 = L"MissingTargetRootBone";
  local_a0 = 0x15;
  FUN_1446e940c(local_11c,&local_a8);
  local_a8 = L"RootMotionGeneratorOp";
  local_a0 = 0x15;
  FUN_1446e940c(local_120,&local_a8);
  FUN_140208bae(local_118,local_120,local_11c,L"Root Motion Remap Op, missing target root bone {0}."
               );
  FUN_14023409e(&local_140,local_118,1);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
  FUN_14023423e(local_98,local_130);
  local_c0 = local_88;
  local_c8 = &local_a8;
  FUN_14010d304(&local_b8);
  local_d8 = local_140;
  local_d0 = local_138;
  if (local_138 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_138 + 1) = (int)local_138[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_e8,&local_d8);
  FUN_14007f2db(local_b8,local_b0);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_138 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar1 = (int *)((longlong)local_138 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_138 + 0x10))(local_138);
      }
    }
  }
  if (local_130[0] != (longlong *)0x0) {
    (**(code **)(*local_130[0] + 0x10))();
  }
  FUN_14986922e(param_5,local_e8);
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  bVar3 = false;
LAB_14987d045:
  if ((longlong)(int)param_4[1] != 0) {
    lVar4 = (longlong)(int)param_4[1] << 3;
    lVar11 = 0;
    lVar5 = 0;
    do {
      if (*(longlong *)(*param_4 + lVar11 * 8) == *(longlong *)(param_1 + 0x40)) {
        *(int *)(param_1 + 0xb8) = (int)lVar11;
        if ((int)lVar11 == -1) goto LAB_14987d08d;
        if (bVar3) {
          puVar7 = (undefined8 *)((lVar5 >> 0x20) * 0x60 + param_4[6]);
          puVar10 = (undefined8 *)(param_1 + 0x120);
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar10 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar7 = (undefined8 *)((longlong)*(int *)(param_1 + 0xb0) * 0x60 + param_3[6]);
          puVar10 = (undefined8 *)(param_1 + 0x180);
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar10 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar7 = (undefined8 *)((longlong)*(int *)(param_1 + 0xb4) * 0x60 + param_4[6]);
          puVar10 = (undefined8 *)(param_1 + 0x1e0);
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar10 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar10 = puVar10 + 1;
          }
          FUN_1449437a2((undefined8 *)(param_1 + 0x1e0),&local_a8);
          ppwVar8 = &local_a8;
          puVar7 = (undefined8 *)(param_1 + 0xc0);
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *ppwVar8;
            ppwVar8 = ppwVar8 + 1;
            puVar7 = puVar7 + 1;
          }
          lVar4 = param_4[1];
          plVar2 = (longlong *)(param_1 + 0x240);
          *(undefined4 *)(param_1 + 0x248) = 0;
          if (*(int *)(param_1 + 0x24c) < 0) {
            FUN_14481578e(plVar2,0);
          }
          uVar9 = CONCAT71((int7)((ulonglong)ppwVar8 >> 8),1);
          if (1 < (int)lVar4) {
            iVar12 = 1;
            do {
              iVar6 = iVar12;
              do {
                if (*(char *)(param_4[0x11] + (longlong)iVar6) != '\0') goto LAB_14987d357;
                iVar6 = *(int *)(param_4[2] + (longlong)iVar6 * 4);
              } while (iVar6 != -1);
              iVar6 = *(int *)(param_1 + 0x248);
              *(uint *)(param_1 + 0x248) = iVar6 + 1U;
              if (*(uint *)(param_1 + 0x24c) < iVar6 + 1U) {
                FUN_1446f48e2(plVar2,iVar6);
              }
              *(int *)(*plVar2 + (longlong)iVar6 * 4) = iVar12;
LAB_14987d357:
              iVar12 = iVar12 + 1;
            } while (iVar12 != (int)lVar4);
          }
          goto LAB_14987d363;
        }
        goto LAB_14987d361;
      }
      lVar5 = lVar5 + 0x100000000;
      lVar11 = lVar11 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
LAB_14987d08d:
  FUN_145715fae(local_150);
  local_a8 = L"MissingPelvisBone";
  local_a0 = 0x11;
  FUN_1446e940c(local_11c,&local_a8);
  local_a8 = L"RootMotionGeneratorOp";
  local_a0 = 0x15;
  FUN_1446e940c(local_120,&local_a8);
  FUN_140208bae(local_118,local_120,local_11c,
                L"Root Motion Remap Op, missing target pelvis bone {0}.");
  FUN_14023409e(&local_160,local_118,1);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
  FUN_14023423e(local_98,local_150);
  local_c0 = local_88;
  local_c8 = &local_a8;
  FUN_14010d304(&local_b8);
  local_d8 = local_160;
  local_d0 = local_158;
  if (local_158 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_158 + 1) = (int)local_158[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_e8,&local_d8,&local_b8);
  FUN_14007f2db(local_b8,local_b0);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_158 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar1 = (int *)((longlong)local_158 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_158 + 0x10))(local_158);
      }
    }
  }
  if (local_150[0] != (longlong *)0x0) {
    (**(code **)(*local_150[0] + 0x10))();
  }
  FUN_14986922e(param_5,local_e8);
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
LAB_14987d361:
  uVar9 = 0;
LAB_14987d363:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 14987d394 FUN_14987d394 body=6058 status=ok
// SIG undefined FUN_14987d394(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14987d394(double *param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  double *pdVar12;
  longlong lVar13;
  double *pdVar14;
  longlong lVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar19;
  double *pdVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar30;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar37;
  undefined1 auVar36 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  double dVar47;
  double dVar48;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  double dVar52;
  double dVar53;
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar64;
  double dVar65;
  double dVar66;
  undefined1 auVar67 [16];
  undefined1 auStack_438 [32];
  undefined1 local_418 [8];
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  undefined8 uStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  undefined8 uStack_340;
  double local_338;
  undefined8 uStack_330;
  double local_328;
  undefined8 uStack_320;
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
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
  undefined1 local_258 [16];
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
  double *pdVar18;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_438;
  local_2f8 = 0.0;
  dStack_2f0 = 0.0;
  local_2e8 = 0.0;
  dStack_2e0 = 1.0;
  local_2d8 = 0.0;
  dStack_2d0 = 0.0;
  local_2c8 = 0.0;
  dStack_2c0 = 0.0;
  local_2b8 = 1.0;
  dStack_2b0 = 1.0;
  local_2a8 = 1.0;
  dStack_2a0 = 0.0;
  pdVar12 = param_1;
  if (*(char *)(param_1 + 9) == '\x01') {
    pdVar18 = &local_2f8;
    iVar11 = FUN_14987eb40(param_1,pdVar18,param_3,param_4);
    param_2 = (undefined4)param_3;
    uVar16 = SUB84(pdVar18,0);
  }
  else {
    uVar16 = SUB84(&local_2f8,0);
    iVar11 = FUN_14987f2ec();
  }
  dVar39 = dStack_2b0;
  dVar2 = local_2b8;
  auVar43 = _DAT_149934d80;
  if (*(char *)((longlong)param_1 + 0x4a) == '\x01') {
    lVar15 = (longlong)*(int *)((longlong)param_1 + 0xb4);
    pdVar12 = (double *)*param_4;
    auVar59 = *(undefined1 (*) [16])(pdVar12 + lVar15 * 0xc + 8);
    auVar62 = *(undefined1 (*) [16])(pdVar12 + lVar15 * 0xc + 10);
    auVar42._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar59._8_8_));
    auVar42._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar59._0_8_));
    uVar17 = movmskpd(uVar16,auVar42);
    pdVar18 = (double *)(ulonglong)uVar17;
    auVar51._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar62._8_8_));
    auVar51._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar62._0_8_));
    iVar11 = movmskpd(param_2,auVar51);
    uVar17 = iVar11 << 2 | uVar17;
    pdVar20 = (double *)(ulonglong)uVar17;
    if (uVar17 == 0) {
      local_418 = (undefined1  [8])DAT_14c8464b0;
      dStack_410 = DAT_14c8464b8;
      dVar22 = DAT_14c8464c0;
      dVar30 = DAT_14c8464c8;
      dVar31 = DAT_14c8464d0;
      dStack_400 = dRam000000014c8464d8;
      dVar50 = DAT_14c846490;
      dVar52 = DAT_14c846498;
      dVar40 = DAT_14c8464a0;
      dVar37 = DAT_14c8464a8;
      dVar53 = DAT_14c846480;
      dVar54 = DAT_14c846488;
    }
    else {
      pdVar12 = pdVar12 + lVar15 * 0xc;
      auVar51 = divpd(_DAT_149934d80,auVar59);
      auVar42 = divpd(ZEXT816(0x3ff0000000000000),auVar62);
      dVar22 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar59._0_8_)) & auVar51._0_8_);
      dVar30 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar59._8_8_)) & auVar51._8_8_);
      dVar31 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar62._0_8_)) & auVar42._0_8_);
      dVar53 = -*pdVar12;
      dVar54 = -pdVar12[1];
      dVar50 = pdVar12[2] * -1.0;
      dVar52 = pdVar12[3] * 1.0;
      dVar40 = pdVar12[4] * dVar22;
      dVar37 = pdVar12[5] * dVar30;
      dVar57 = pdVar12[6] * dVar31;
      dVar38 = dVar37 * dVar53 - dVar54 * dVar40;
      dVar47 = dVar57 * dVar54 - dVar50 * dVar37;
      dVar48 = dVar40 * dVar50 - dVar53 * dVar57;
      dVar47 = dVar47 + dVar47;
      dVar48 = dVar48 + dVar48;
      dVar38 = dVar38 + dVar38;
      local_418 = (undefined1  [8])
                  (0.0 - (dVar52 * dVar38 + dVar57 + (dVar48 * dVar53 - dVar47 * dVar54)));
      dStack_410 = 0.0;
      dStack_400 = 0.0;
      dVar40 = 0.0 - ((dVar38 * dVar54 - dVar48 * dVar50) + dVar52 * dVar47 + dVar40);
      dVar37 = 0.0 - (dVar38 * *pdVar12 + dVar50 * dVar47 + dVar52 * dVar48 + dVar37);
    }
    auVar59._8_8_ = dStack_2b0;
    auVar59._0_8_ = local_2b8;
    auVar62._8_8_ = dStack_2a0;
    auVar62._0_8_ = local_2a8;
    auVar58._8_8_ = dVar30;
    auVar58._0_8_ = dVar22;
    auVar59 = minpd(auVar58,auVar59);
    auVar61._8_8_ = dStack_400;
    auVar61._0_8_ = dVar31;
    auVar62 = minpd(auVar61,auVar62);
    auVar60._8_8_ = -(ulonglong)(auVar59._8_8_ < 0.0);
    auVar60._0_8_ = -(ulonglong)(auVar59._0_8_ < 0.0);
    iVar11 = movmskpd((int)pdVar12,auVar60);
    auVar63._8_8_ = -(ulonglong)(auVar62._8_8_ < 0.0);
    auVar63._0_8_ = -(ulonglong)(auVar62._0_8_ < 0.0);
    uVar17 = movmskpd(*(int *)((longlong)param_1 + 0xb4) * 0x60,auVar63);
    if ((uVar17 & 0x3fffffff) == 0 && iVar11 == 0) {
      dVar38 = dVar53 * local_2e8 * 1.0 +
               dVar52 * dStack_2f0 + dVar50 * local_2f8 * -1.0 + dVar54 * dStack_2e0;
      local_3e8._8_4_ = SUB84(dVar38,0);
      local_3e8._0_8_ =
           dVar54 * local_2e8 * -1.0 +
           dVar50 * dStack_2f0 + dVar52 * local_2f8 * 1.0 + dVar53 * dStack_2e0;
      local_3e8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      local_3d8._8_8_ =
           dVar50 * local_2e8 * -1.0 +
           ((local_2f8 * dVar53 * -1.0 + dVar52 * dStack_2e0) - dVar54 * dStack_2f0);
      local_3d8._0_8_ =
           dVar52 * local_2e8 * 1.0 +
           ((local_2f8 * dVar54 * 1.0 + dVar50 * dStack_2e0) - dVar53 * dStack_2f0);
      dVar40 = dVar40 * local_2b8;
      dVar37 = dVar37 * dStack_2b0;
      dVar38 = (double)local_418 * local_2a8;
      dVar48 = dStack_410 * dStack_2a0;
      dVar50 = dVar37 * local_2f8 - dVar40 * dStack_2f0;
      dVar53 = dVar38 * dStack_2f0 - dVar37 * local_2e8;
      dVar54 = dVar40 * local_2e8 - dVar38 * local_2f8;
      dVar52 = dVar48 * dStack_2e0 - dVar48 * dStack_2e0;
      dVar53 = dVar53 + dVar53;
      dVar54 = dVar54 + dVar54;
      dVar50 = dVar50 + dVar50;
      dVar52 = dVar52 + dVar52;
      local_408 = dVar31 * local_2a8;
      dStack_400 = dStack_400 * dStack_2a0;
      dVar31 = (dVar53 * local_2e8 - dVar50 * local_2f8) + dStack_2e0 * dVar54 + dVar37 + dStack_2d0
      ;
      unique0x10001a78 = SUB84(dVar31,0);
      local_418 = (undefined1  [8])
                  ((dVar50 * dStack_2f0 - local_2e8 * dVar54) + dStack_2e0 * dVar53 + dVar40 +
                  local_2d8);
      unique0x10001a7c = (int)((ulonglong)dVar31 >> 0x20);
      local_3f8 = (dVar54 * local_2f8 - dStack_2f0 * dVar53) + dStack_2e0 * dVar50 + dVar38 +
                  local_2c8;
      dStack_3f0 = (dVar52 * dStack_2e0 - dVar52 * dStack_2e0) + dStack_2e0 * dVar52 + dVar48 +
                   dStack_2c0;
      pdVar12 = (double *)0x0;
    }
    else {
      local_408 = dVar31 * local_2a8;
      dStack_400 = dStack_400 * dStack_2a0;
      dVar64 = dStack_2f0 + dStack_2f0;
      dVar38 = local_2e8 + local_2e8;
      dVar33 = local_2f8 * (local_2f8 + local_2f8);
      local_1a8 = (1.0 - (dVar33 + dStack_2f0 * dVar64)) * local_2a8;
      dVar48 = (local_2f8 + local_2f8) * dStack_2e0;
      local_1b8 = (dVar64 * dStack_2e0 + local_2f8 * dVar38) * local_2a8;
      dStack_1b0 = (dVar38 * dStack_2f0 - dVar48) * local_2a8;
      dVar47 = dVar22 * local_2b8;
      dVar57 = dVar30 * dStack_2b0;
      local_1f8 = (1.0 - (local_2e8 * dVar38 + dStack_2f0 * dVar64)) * local_2b8;
      dVar33 = (1.0 - (local_2e8 * dVar38 + dVar33)) * dStack_2b0;
      dStack_1f0 = (dVar64 * local_2f8 + dVar38 * dStack_2e0) * local_2b8;
      local_1c8 = (dVar38 * dStack_2f0 + dVar48) * dStack_2b0;
      local_1e8 = (local_2f8 * dVar38 - dVar64 * dStack_2e0) * local_2b8;
      pdVar20 = &local_1f8;
      uStack_1e0 = 0;
      local_1d8._8_4_ = SUB84(dVar33,0);
      local_1d8._0_8_ = (dVar64 * local_2f8 - dVar38 * dStack_2e0) * dStack_2b0;
      local_1d8._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = local_2d8;
      dStack_190 = dStack_2d0;
      local_188 = local_2c8;
      uStack_180 = 0x3ff0000000000000;
      dVar64 = dVar54 + dVar54;
      dVar38 = dVar50 + dVar50;
      dVar33 = dVar53 * (dVar53 + dVar53);
      local_228 = (1.0 - (dVar33 + dVar54 * dVar64)) * dVar31;
      dVar48 = (dVar53 + dVar53) * dVar52;
      local_238 = (dVar53 * dVar38 + dVar64 * dVar52) * dVar31;
      dStack_230 = (dVar38 * dVar54 - dVar48) * dVar31;
      local_278 = ((double)DAT_149934d80 - (dVar50 * dVar38 + dVar54 * dVar64)) * dVar22;
      dVar31 = (DAT_149934d80._8_8_ - (dVar50 * dVar38 + dVar33)) * dVar30;
      dStack_270 = (dVar64 * dVar53 + dVar38 * dVar52) * dVar22;
      local_248 = (dVar38 * dVar54 + dVar48) * dVar30;
      local_268 = (dVar53 * dVar38 - dVar64 * dVar52) * dVar22;
      uStack_260 = 0;
      local_258._8_4_ = SUB84(dVar31,0);
      local_258._0_8_ = (dVar64 * dVar53 - dVar38 * dVar52) * dVar30;
      local_258._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      uStack_240 = 0;
      uStack_220 = 0;
      local_208 = (double)local_418;
      uStack_200 = 0x3ff0000000000000;
      pdVar18 = &local_178;
      local_218 = dVar40;
      dStack_210 = dVar37;
      FUN_1447fea8d(pdVar18);
      FUN_144a1c686(pdVar18,0x3e45798ee0000000);
      auVar23._8_8_ = -(ulonglong)(0.0 <= dVar57);
      auVar23._0_8_ = -(ulonglong)(0.0 <= dVar47);
      auVar59 = blendvpd(_DAT_149936790,auVar43,auVar23);
      dVar31 = (double)(~-(ulonglong)(0.0 <= local_408) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= local_408) & 0x3ff0000000000000);
      dVar50 = auVar59._0_8_;
      local_168 = local_168 * dVar50;
      local_170 = local_170 * dVar50;
      local_178 = local_178 * dVar50;
      dVar50 = auVar59._8_8_;
      local_148 = local_148 * dVar50;
      local_150 = local_150 * dVar50;
      local_158 = dVar50 * local_158;
      local_128 = local_128 * dVar31;
      local_130 = local_130 * dVar31;
      local_138 = dVar31 * local_138;
      pdVar12 = &local_298;
      iVar11 = FUN_14481fd10();
      dVar31 = local_288 * local_288 + local_298 * local_298;
      dVar50 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar34._0_8_ = dVar31 + dVar50;
      auVar34._8_8_ = dVar31 + dVar50;
      auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_);
      auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_);
      auVar59 = sqrtpd(auVar34,auVar34);
      auVar43 = divpd(auVar43,auVar59);
      auVar44._0_8_ = auVar43._0_8_ * local_288;
      auVar44._8_8_ = auVar43._8_8_ * dStack_280;
      local_3e8._8_8_ =
           (ulonglong)(dStack_290 * auVar43._8_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_);
      local_3e8._0_8_ =
           (ulonglong)(local_298 * auVar43._0_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_);
      local_3d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar44,auVar24);
      dStack_410 = dStack_110;
      local_418 = (undefined1  [8])local_118;
      local_3f8 = local_108;
      dStack_3f0 = 0.0;
    }
    dVar30 = dVar30 * dVar39;
    dVar22 = dVar22 * dVar2;
    iVar1 = *(int *)(param_1 + 0x49);
    if ((longlong)iVar1 != 0) {
      dVar2 = param_1[0x48];
      dVar31 = (double)local_3e8._8_8_ + (double)local_3e8._8_8_;
      dVar50 = (double)local_3d8._0_8_ + (double)local_3d8._0_8_;
      dVar39 = (double)local_3e8._0_8_ * ((double)local_3e8._0_8_ + (double)local_3e8._0_8_);
      local_358 = (1.0 - ((double)local_3d8._0_8_ * dVar50 + (double)local_3e8._8_8_ * dVar31)) *
                  dVar22;
      dStack_300 = (1.0 - ((double)local_3d8._0_8_ * dVar50 + dVar39)) * dVar30;
      local_338 = (1.0 - (dVar39 + (double)local_3e8._8_8_ * dVar31)) * local_408;
      local_378 = (double)local_3e8._0_8_;
      dStack_370 = (double)local_3e8._0_8_;
      dVar39 = ((double)local_3e8._0_8_ + (double)local_3e8._0_8_) * (double)local_3d8._8_8_;
      local_3b8 = (double)local_3d8._8_8_;
      dStack_3b0 = (double)local_3d8._8_8_;
      dStack_350 = (dVar31 * (double)local_3e8._0_8_ + dVar50 * (double)local_3d8._8_8_) * dVar22;
      local_328 = (dVar50 * (double)local_3e8._8_8_ + dVar39) * dVar30;
      local_308 = (dVar31 * (double)local_3e8._0_8_ - dVar50 * (double)local_3d8._8_8_) * dVar30;
      dVar39 = (dVar50 * (double)local_3e8._8_8_ - dVar39) * local_408;
      local_348 = ((double)local_3e8._0_8_ * dVar50 - dVar31 * (double)local_3d8._8_8_) * dVar22;
      uStack_330 = 0;
      uStack_340 = 0;
      uStack_320 = 0;
      local_318._8_4_ = SUB84(dVar39,0);
      local_318._0_8_ =
           ((double)local_3e8._0_8_ * dVar50 + dVar31 * (double)local_3d8._8_8_) * local_408;
      local_318._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      local_368 = local_3f8;
      uStack_360 = 0x3ff0000000000000;
      local_388 = (double)local_3e8._8_8_;
      dStack_380 = (double)local_3e8._8_8_;
      local_398 = (double)local_3d8._0_8_;
      dStack_390 = (double)local_3d8._0_8_;
      local_3a8 = (double)local_3e8._0_8_;
      dStack_3a0 = (double)local_3d8._8_8_;
      local_3c8 = (double)local_3e8._8_8_;
      dStack_3c0 = (double)local_3d8._0_8_;
      lVar15 = 0;
      do {
        dVar31 = dStack_400;
        dVar39 = local_408;
        auVar62 = _DAT_149934d80;
        lVar13 = (longlong)*(int *)((longlong)dVar2 + lVar15);
        pdVar12 = (double *)*param_4;
        pdVar14 = pdVar12 + lVar13 * 0xc;
        auVar43 = *(undefined1 (*) [16])(pdVar12 + lVar13 * 0xc + 8);
        auVar59 = *(undefined1 (*) [16])(pdVar12 + lVar13 * 0xc + 10);
        auVar5._8_4_ = SUB84(dVar30,0);
        auVar5._0_8_ = dVar22;
        auVar5._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        auVar42 = minpd(auVar43,auVar5);
        auVar8._8_8_ = dStack_400;
        auVar8._0_8_ = local_408;
        auVar51 = minpd(auVar59,auVar8);
        auVar25._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
        auVar25._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
        uVar17 = movmskpd((int)pdVar18,auVar25);
        pdVar18 = (double *)(ulonglong)uVar17;
        auVar32._8_8_ = -(ulonglong)(auVar51._8_8_ < 0.0);
        auVar32._0_8_ = -(ulonglong)(auVar51._0_8_ < 0.0);
        uVar19 = movmskpd((int)pdVar20,auVar32);
        if ((uVar19 & 0x3fffffff) == 0 && uVar17 == 0) {
          dVar50 = *pdVar14;
          dVar52 = pdVar14[1];
          dVar40 = pdVar14[2];
          dVar37 = pdVar14[3];
          dVar54 = dVar52 * local_398 * -1.0 +
                   local_378 * dVar37 * 1.0 + local_3b8 * dVar50 + local_388 * dVar40;
          dVar38 = dVar50 * dStack_390 * 1.0 +
                   dStack_370 * dVar40 * -1.0 + dStack_3b0 * dVar52 + dStack_380 * dVar37;
          auVar35._0_8_ =
               dVar37 * local_398 * 1.0 +
               ((local_378 * dVar52 * 1.0 + local_3b8 * dVar40) - local_388 * dVar50);
          auVar35._8_8_ =
               dVar40 * dStack_390 * -1.0 +
               ((dStack_370 * dVar50 * -1.0 + dStack_3b0 * dVar37) - dStack_380 * dVar52);
          dVar50 = pdVar14[4] * dVar22;
          dVar52 = pdVar14[5] * dVar30;
          dVar48 = pdVar14[6] * local_408;
          dVar47 = pdVar14[7] * dStack_400;
          dVar40 = dVar52 * (double)local_3e8._0_8_ - local_3c8 * dVar50;
          dVar37 = dVar48 * (double)local_3e8._8_8_ - dStack_3c0 * dVar52;
          dVar53 = dVar50 * (double)local_3d8._0_8_ - local_3a8 * dVar48;
          dVar57 = dVar47 * (double)local_3d8._8_8_ - dStack_3a0 * dVar47;
          dVar37 = dVar37 + dVar37;
          dVar53 = dVar53 + dVar53;
          dVar40 = dVar40 + dVar40;
          dVar57 = dVar57 + dVar57;
          dVar50 = (dVar40 * (double)local_3e8._8_8_ - dStack_3c0 * dVar53) +
                   local_3b8 * dVar37 + dVar50 + (double)local_418;
          dVar52 = (dVar37 * (double)local_3d8._0_8_ - dVar40 * local_3a8) +
                   dStack_3b0 * dVar53 + dVar52 + dStack_410;
          dVar40 = (dVar53 * (double)local_3e8._0_8_ - local_3c8 * dVar37) +
                   local_3b8 * dVar40 + dVar48 + local_3f8;
          dVar37 = (dVar57 * (double)local_3d8._8_8_ - dVar57 * dStack_3a0) +
                   dStack_3b0 * dVar57 + dVar47 + dStack_3f0;
          pdVar20 = (double *)0x0;
        }
        else {
          local_1f8 = local_358;
          dStack_1f0 = dStack_350;
          local_1e8 = local_348;
          uStack_1e0 = uStack_340;
          local_1d8._8_8_ = dStack_300;
          local_1d8._0_8_ = local_308;
          local_1c8 = local_328;
          uStack_1c0 = uStack_320;
          local_1b8 = (double)local_318._0_8_;
          dStack_1b0 = (double)local_318._8_8_;
          local_1a8 = local_338;
          uStack_1a0 = uStack_330;
          local_198 = (double)local_418;
          dStack_190 = dStack_410;
          local_188 = local_368;
          uStack_180 = uStack_360;
          dVar40 = *pdVar14;
          dVar37 = pdVar14[1];
          dVar53 = pdVar14[2];
          local_268 = pdVar14[8];
          dVar54 = pdVar14[9];
          dStack_230 = pdVar14[10];
          dVar57 = dVar37 + dVar37;
          dVar38 = dVar53 + dVar53;
          dVar52 = dVar40 * (dVar40 + dVar40);
          local_278 = ((double)DAT_149934d80 - (dVar53 * dVar38 + dVar37 * dVar57)) * local_268;
          local_228 = (1.0 - (dVar52 + dVar37 * dVar57)) * dStack_230;
          dVar50 = pdVar14[3];
          dVar48 = dVar38 * dVar50;
          dVar47 = (dVar40 + dVar40) * pdVar14[3];
          dVar50 = dVar57 * dVar50;
          dStack_270 = (dVar57 * dVar40 + dVar48) * local_268;
          local_248 = (dVar38 * dVar37 + dVar47) * dVar54;
          local_238 = (dVar50 + *pdVar14 * dVar38) * dStack_230;
          local_268 = (*pdVar14 * dVar38 - dVar50) * local_268;
          dStack_230 = (dVar38 * dVar37 - dVar47) * dStack_230;
          uStack_260 = 0;
          local_258._8_8_ = (DAT_149934d80._8_8_ - (dVar53 * dVar38 + dVar52)) * dVar54;
          local_258._0_8_ = (dVar57 * dVar40 - dVar48) * dVar54;
          uStack_240 = 0;
          uStack_220 = 0;
          local_218 = pdVar14[4];
          dStack_210 = pdVar14[5];
          local_208 = pdVar14[6];
          uStack_200 = 0x3ff0000000000000;
          dVar50 = auVar59._0_8_ * local_408;
          pdVar20 = &local_1f8;
          FUN_1447fea8d(&local_178,&local_278);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar26._8_8_ = -(ulonglong)(0.0 <= auVar43._8_8_ * dVar30);
          auVar26._0_8_ = -(ulonglong)(0.0 <= auVar43._0_8_ * dVar22);
          auVar42 = blendvpd(_DAT_149936790,auVar62,auVar26);
          uVar21 = -(ulonglong)(0.0 <= dVar50);
          dVar50 = (double)(~uVar21 & 0xbff0000000000000 | uVar21 & 0x3ff0000000000000);
          dVar52 = auVar42._0_8_;
          local_168 = local_168 * dVar52;
          local_170 = local_170 * dVar52;
          local_178 = local_178 * dVar52;
          dVar52 = auVar42._8_8_;
          local_148 = local_148 * dVar52;
          local_150 = local_150 * dVar52;
          local_158 = dVar52 * local_158;
          local_128 = local_128 * dVar50;
          local_130 = local_130 * dVar50;
          local_138 = dVar50 * local_138;
          pdVar18 = &local_178;
          pdVar14 = (double *)FUN_14481fd10(&local_298);
          dVar50 = local_288 * local_288 + local_298 * local_298;
          dVar52 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
          auVar45._0_8_ = dVar50 + dVar52;
          auVar45._8_8_ = dVar50 + dVar52;
          auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
          auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
          auVar42 = sqrtpd(auVar45,auVar45);
          auVar62 = divpd(auVar62,auVar42);
          auVar55._0_8_ = auVar62._0_8_ * local_288;
          auVar55._8_8_ = auVar62._8_8_ * dStack_280;
          dVar54 = (double)((ulonglong)(local_298 * auVar62._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_));
          dVar38 = (double)((ulonglong)(dStack_290 * auVar62._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_));
          auVar35 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar55,auVar27);
          dVar37 = 0.0;
          pdVar12 = (double *)*param_4;
          dVar50 = local_118;
          dVar52 = dStack_110;
          dVar40 = local_108;
        }
        dVar53 = auVar43._8_8_ * dVar30;
        iVar11 = (int)pdVar14;
        pdVar12[lVar13 * 0xc] = dVar54;
        (pdVar12 + lVar13 * 0xc)[1] = dVar38;
        *(undefined1 (*) [16])(pdVar12 + lVar13 * 0xc + 2) = auVar35;
        pdVar12[lVar13 * 0xc + 4] = dVar50;
        (pdVar12 + lVar13 * 0xc + 4)[1] = dVar52;
        pdVar12[lVar13 * 0xc + 6] = dVar40;
        (pdVar12 + lVar13 * 0xc + 6)[1] = dVar37;
        auVar4._8_4_ = SUB84(dVar53,0);
        auVar4._0_8_ = auVar43._0_8_ * dVar22;
        auVar4._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
        *(undefined1 (*) [16])(pdVar12 + lVar13 * 0xc + 8) = auVar4;
        pdVar12[lVar13 * 0xc + 10] = auVar59._0_8_ * dVar39;
        (pdVar12 + lVar13 * 0xc + 10)[1] = auVar59._8_8_ * dVar31;
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar1 * 4 != lVar15);
    }
  }
  dVar30 = dStack_2a0;
  dVar52 = local_2a8;
  dVar50 = dStack_2b0;
  dVar31 = local_2b8;
  auVar62 = _DAT_149934d80;
  auVar43 = *(undefined1 (*) [16])(param_1 + 0x12);
  dVar2 = auVar43._0_8_;
  dVar22 = auVar43._8_8_;
  auVar59 = *(undefined1 (*) [16])(param_1 + 0x14);
  dVar39 = auVar59._0_8_;
  auVar9._8_8_ = dStack_2b0;
  auVar9._0_8_ = local_2b8;
  auVar10._8_8_ = dStack_2a0;
  auVar10._0_8_ = local_2a8;
  auVar43 = minpd(auVar9,auVar43);
  auVar42 = minpd(auVar10,auVar59);
  auVar46._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
  auVar46._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
  iVar11 = movmskpd(iVar11,auVar46);
  auVar43._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
  auVar43._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
  uVar17 = movmskpd((int)pdVar12,auVar43);
  if ((uVar17 & 0x3fffffff) == 0 && iVar11 == 0) {
    dVar33 = param_1[10];
    dVar64 = param_1[0xb];
    dVar6 = param_1[0xc];
    dVar7 = param_1[0xd];
    dVar40 = param_1[0xd];
    dVar37 = param_1[0xd];
    dVar53 = param_1[10];
    dVar54 = param_1[10];
    dVar38 = param_1[0xb];
    dVar48 = param_1[0xb];
    dVar57 = param_1[0xc];
    dVar47 = param_1[0xc];
    dVar41 = dStack_2f0 * dVar57 * -1.0 +
             local_2e8 * dVar38 + dStack_2e0 * dVar53 * 1.0 + local_2f8 * dVar40;
    dVar49 = local_2f8 * dVar47 * 1.0 +
             dStack_2e0 * dVar48 + local_2e8 * dVar54 * -1.0 + dStack_2f0 * dVar37;
    auVar56._0_8_ =
         dStack_2e0 * dVar57 * 1.0 +
         ((dVar53 * dStack_2f0 * 1.0 + local_2e8 * dVar40) - local_2f8 * dVar38);
    auVar56._8_8_ =
         local_2e8 * dVar47 * -1.0 +
         ((dVar54 * local_2f8 * -1.0 + dStack_2e0 * dVar37) - dStack_2f0 * dVar48);
    dVar53 = local_2d8 * dVar2;
    dVar54 = dStack_2d0 * dVar22;
    dVar38 = local_2c8 * dVar39;
    dVar48 = dStack_2c0 * auVar59._8_8_;
    dVar47 = dVar54 * dVar33 - dVar64 * dVar53;
    dVar65 = dVar38 * dVar64 - dVar6 * dVar54;
    dVar66 = dVar53 * dVar6 - dVar33 * dVar38;
    dVar57 = dVar48 * dVar7 - dVar7 * dVar48;
    dVar65 = dVar65 + dVar65;
    dVar66 = dVar66 + dVar66;
    dVar47 = dVar47 + dVar47;
    dVar57 = dVar57 + dVar57;
    local_118 = (dVar47 * dVar64 - dVar6 * dVar66) + dVar40 * dVar65 + dVar53 + param_1[0xe];
    dStack_110 = (dVar65 * dVar6 - dVar47 * dVar33) + dVar37 * dVar66 + dVar54 + param_1[0xf];
    local_108 = (dVar66 * dVar33 - dVar64 * dVar65) + dVar40 * dVar47 + dVar38 + param_1[0x10];
    dVar40 = (dVar57 * dVar7 - dVar57 * dVar7) + dVar37 * dVar57 + dVar48 + param_1[0x11];
  }
  else {
    dVar54 = param_1[10];
    dVar38 = param_1[0xb];
    dVar48 = param_1[0xc];
    dVar47 = dVar38 + dVar38;
    dVar57 = dVar48 + dVar48;
    dVar53 = dVar54 * (dVar54 + dVar54);
    local_1a8 = (1.0 - (dVar53 + dVar38 * dVar47)) * dVar39;
    dVar40 = param_1[0xd];
    dVar33 = dVar57 * dVar40;
    dVar64 = (dVar54 + dVar54) * param_1[0xd];
    dVar40 = dVar47 * dVar40;
    local_1b8 = (dVar40 + param_1[10] * dVar57) * dVar39;
    dVar37 = dVar39 * local_2a8;
    local_1f8 = ((double)DAT_149934d80 - (dVar48 * dVar57 + dVar38 * dVar47)) * dVar2;
    dStack_1f0 = (dVar47 * dVar54 + dVar33) * dVar2;
    local_1c8 = (dVar57 * dVar38 + dVar64) * dVar22;
    dStack_1b0 = (dVar57 * dVar38 - dVar64) * dVar39;
    local_1e8 = (param_1[10] * dVar57 - dVar40) * dVar2;
    uStack_1e0 = 0;
    local_1d8._8_8_ = (DAT_149934d80._8_8_ - (dVar48 * dVar57 + dVar53)) * dVar22;
    local_1d8._0_8_ = (dVar47 * dVar54 - dVar33) * dVar22;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = param_1[0xe];
    dStack_190 = param_1[0xf];
    local_188 = param_1[0x10];
    uStack_180 = 0x3ff0000000000000;
    dVar53 = dStack_2f0 + dStack_2f0;
    dVar54 = local_2e8 + local_2e8;
    dVar40 = local_2f8 * (local_2f8 + local_2f8);
    local_228 = (1.0 - (dVar40 + dStack_2f0 * dVar53)) * local_2a8;
    dVar38 = (local_2f8 + local_2f8) * dStack_2e0;
    local_238 = (dVar53 * dStack_2e0 + local_2f8 * dVar54) * local_2a8;
    dStack_230 = (dVar54 * dStack_2f0 - dVar38) * local_2a8;
    dVar48 = dVar2 * local_2b8;
    dVar47 = dVar22 * dStack_2b0;
    local_278 = ((double)DAT_149934d80 - (local_2e8 * dVar54 + dStack_2f0 * dVar53)) * local_2b8;
    dVar40 = (DAT_149934d80._8_8_ - (local_2e8 * dVar54 + dVar40)) * dStack_2b0;
    dStack_270 = (dVar53 * local_2f8 + dVar54 * dStack_2e0) * local_2b8;
    local_248 = (dVar54 * dStack_2f0 + dVar38) * dStack_2b0;
    local_268 = (local_2f8 * dVar54 - dVar53 * dStack_2e0) * local_2b8;
    uStack_260 = 0;
    local_258._8_4_ = SUB84(dVar40,0);
    local_258._0_8_ = (dVar53 * local_2f8 - dVar54 * dStack_2e0) * dStack_2b0;
    local_258._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    uStack_240 = 0;
    uStack_220 = 0;
    local_218 = local_2d8;
    dStack_210 = dStack_2d0;
    local_208 = local_2c8;
    uStack_200 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar28._8_8_ = -(ulonglong)(0.0 <= dVar47);
    auVar28._0_8_ = -(ulonglong)(0.0 <= dVar48);
    auVar43 = blendvpd(_DAT_149936790,auVar62,auVar28);
    uVar21 = -(ulonglong)(0.0 <= dVar37);
    dVar40 = (double)(~uVar21 & 0xbff0000000000000 | uVar21 & 0x3ff0000000000000);
    dVar37 = auVar43._0_8_;
    local_168 = local_168 * dVar37;
    local_170 = local_170 * dVar37;
    local_178 = local_178 * dVar37;
    dVar37 = auVar43._8_8_;
    local_148 = local_148 * dVar37;
    local_150 = local_150 * dVar37;
    local_158 = dVar37 * local_158;
    local_128 = local_128 * dVar40;
    local_130 = local_130 * dVar40;
    local_138 = dVar40 * local_138;
    FUN_14481fd10(&local_298,&local_178);
    dVar40 = local_288 * local_288 + local_298 * local_298;
    dVar37 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar36._0_8_ = dVar40 + dVar37;
    auVar36._8_8_ = dVar40 + dVar37;
    auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
    auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
    auVar43 = sqrtpd(auVar36,auVar36);
    auVar43 = divpd(auVar62,auVar43);
    auVar67._0_8_ = auVar43._0_8_ * local_288;
    auVar67._8_8_ = auVar43._8_8_ * dStack_280;
    dVar41 = (double)((ulonglong)(local_298 * auVar43._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
    dVar49 = (double)((ulonglong)(dStack_290 * auVar43._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
    auVar56 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar67,auVar29);
    dVar40 = 0.0;
  }
  dVar30 = auVar59._8_8_ * dVar30;
  lVar15 = *param_4;
  lVar13 = (longlong)*(int *)((longlong)param_1 + 0xb4) * 0x60;
  *(double *)(lVar15 + lVar13) = dVar41;
  ((double *)(lVar15 + lVar13))[1] = dVar49;
  *(undefined1 (*) [16])(lVar15 + 0x10 + lVar13) = auVar56;
  pdVar12 = (double *)(lVar15 + 0x20 + lVar13);
  *pdVar12 = local_118;
  pdVar12[1] = dStack_110;
  pdVar12 = (double *)(lVar15 + 0x30 + lVar13);
  *pdVar12 = local_108;
  pdVar12[1] = dVar40;
  pdVar12 = (double *)(lVar15 + 0x40 + lVar13);
  *pdVar12 = dVar2 * dVar31;
  pdVar12[1] = dVar22 * dVar50;
  auVar3._8_4_ = SUB84(dVar30,0);
  auVar3._0_8_ = dVar39 * dVar52;
  auVar3._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
  *(undefined1 (*) [16])(lVar15 + 0x50 + lVar13) = auVar3;
  if ((local_f0 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14987eb40 FUN_14987eb40 body=1963 status=ok
// SIG undefined FUN_14987eb40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14987eb40(longlong param_1,double *param_2,longlong *param_3,longlong *param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
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
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  double *pdVar21;
  double *pdVar22;
  ulonglong uVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar27;
  undefined1 auVar26 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auStack_298 [32];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  double dVar3;
  
  auVar38 = _DAT_149934d80;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (*(char *)(param_1 + 0x4b) == '\x01') {
    lVar18 = *param_4;
    lVar20 = (longlong)*(int *)(param_1 + 0xb8) * 0x60;
    pdVar21 = (double *)(lVar18 + lVar20);
    auVar30 = *(undefined1 (*) [16])(lVar18 + 0x40 + lVar20);
    dVar24 = auVar30._0_8_;
    dVar9 = auVar30._8_8_;
    auVar4 = *(undefined1 (*) [16])(lVar18 + 0x50 + lVar20);
    dVar6 = auVar4._0_8_;
    auVar31 = *(undefined1 (*) [16])(param_1 + 0x100);
    dVar7 = auVar31._0_8_;
    dVar10 = auVar31._8_8_;
    auVar5 = *(undefined1 (*) [16])(param_1 + 0x110);
    dVar8 = auVar5._0_8_;
    auVar30 = minpd(auVar31,auVar30);
    auVar34 = minpd(auVar5,auVar4);
    auVar31._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
    auVar31._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
    iVar17 = movmskpd((int)lVar18,auVar31);
    auVar30._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
    auVar30._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
    uVar19 = movmskpd((int)lVar20,auVar30);
    if ((uVar19 & 0x3fffffff) == 0 && iVar17 == 0) {
      dVar32 = *(double *)(param_1 + 0xc0);
      dVar35 = *(double *)(param_1 + 200);
      dVar36 = *(double *)(param_1 + 0xd0);
      dVar37 = *(double *)(param_1 + 0xd8);
      dVar13 = *pdVar21;
      dVar14 = pdVar21[1];
      dVar15 = pdVar21[2];
      dVar16 = pdVar21[3];
      dVar28 = pdVar21[3];
      dVar27 = pdVar21[3];
      dVar1 = pdVar21[1];
      dVar12 = pdVar21[1];
      dVar2 = pdVar21[2];
      dVar3 = pdVar21[2];
      dVar29 = dVar35 * dVar2 * -1.0 + dVar36 * dVar1 + dVar37 * *pdVar21 * 1.0 + dVar32 * dVar28;
      dVar33 = dVar32 * dVar3 * 1.0 + dVar37 * dVar12 + dVar36 * *pdVar21 * -1.0 + dVar35 * dVar27;
      auVar38._0_8_ =
           dVar37 * dVar2 * 1.0 + ((*pdVar21 * dVar35 * 1.0 + dVar36 * dVar28) - dVar32 * dVar1);
      auVar38._8_8_ =
           dVar36 * dVar3 * -1.0 + ((*pdVar21 * dVar32 * -1.0 + dVar37 * dVar27) - dVar35 * dVar12);
      dVar2 = *(double *)(param_1 + 0xe0) * dVar24;
      dVar32 = *(double *)(param_1 + 0xe8) * dVar9;
      dVar35 = *(double *)(param_1 + 0xf0) * dVar6;
      dVar36 = *(double *)(param_1 + 0xf8) * auVar4._8_8_;
      dVar12 = dVar32 * dVar13 - dVar14 * dVar2;
      dVar1 = dVar35 * dVar14 - dVar15 * dVar32;
      dVar3 = dVar2 * dVar15 - dVar13 * dVar35;
      dVar37 = dVar36 * dVar16 - dVar16 * dVar36;
      dVar1 = dVar1 + dVar1;
      dVar3 = dVar3 + dVar3;
      dVar12 = dVar12 + dVar12;
      dVar37 = dVar37 + dVar37;
      local_f8 = (dVar12 * dVar14 - dVar15 * dVar3) + dVar28 * dVar1 + dVar2 + pdVar21[4];
      dStack_f0 = (dVar1 * dVar15 - dVar12 * dVar13) + dVar27 * dVar3 + dVar32 + pdVar21[5];
      local_e8 = (dVar3 * dVar13 - dVar14 * dVar1) + dVar28 * dVar12 + dVar35 + pdVar21[6];
      dVar28 = (dVar37 * dVar16 - dVar37 * dVar16) + dVar27 * dVar37 + dVar36 + pdVar21[7];
    }
    else {
      dVar1 = *pdVar21;
      dVar3 = pdVar21[1];
      dVar2 = pdVar21[2];
      dVar32 = dVar3 + dVar3;
      dVar35 = dVar2 + dVar2;
      dVar27 = dVar1 * (dVar1 + dVar1);
      local_188 = (1.0 - (dVar27 + dVar3 * dVar32)) * dVar6;
      dVar28 = pdVar21[3];
      dVar36 = dVar35 * dVar28;
      dVar37 = (dVar1 + dVar1) * pdVar21[3];
      dVar28 = dVar32 * dVar28;
      local_198 = (dVar28 + *pdVar21 * dVar35) * dVar6;
      dVar27 = (DAT_149934d80._8_8_ - (dVar2 * dVar35 + dVar27)) * dVar9;
      dVar12 = (dVar32 * dVar1 + dVar36) * dVar24;
      local_1a8 = (dVar35 * dVar3 + dVar37) * dVar9;
      dStack_190 = (dVar35 * dVar3 - dVar37) * dVar6;
      local_1c8 = (*pdVar21 * dVar35 - dVar28) * dVar24;
      local_1d8._8_4_ = SUB84(dVar12,0);
      local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar2 * dVar35 + dVar3 * dVar32)) * dVar24;
      local_1d8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      uStack_1c0 = 0;
      local_1b8._8_4_ = SUB84(dVar27,0);
      local_1b8._0_8_ = (dVar32 * dVar1 - dVar36) * dVar9;
      local_1b8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      uStack_1a0 = 0;
      uStack_180 = 0;
      local_178 = pdVar21[4];
      dStack_170 = pdVar21[5];
      local_168 = pdVar21[6];
      uStack_160 = 0x3ff0000000000000;
      dVar1 = *(double *)(param_1 + 0xc0);
      dVar3 = *(double *)(param_1 + 200);
      dVar2 = *(double *)(param_1 + 0xd0);
      dVar32 = dVar3 + dVar3;
      dVar35 = dVar2 + dVar2;
      dVar27 = dVar1 * (dVar1 + dVar1);
      local_208 = (1.0 - (dVar27 + dVar3 * dVar32)) * dVar8;
      dVar12 = *(double *)(param_1 + 0xc0) * dVar35;
      dVar28 = *(double *)(param_1 + 0xd8);
      dVar36 = dVar35 * dVar28;
      dVar37 = (dVar1 + dVar1) * *(double *)(param_1 + 0xd8);
      dVar28 = dVar32 * dVar28;
      local_218 = (dVar28 + dVar12) * dVar8;
      dStack_210 = (dVar35 * dVar3 - dVar37) * dVar8;
      local_258 = ((double)DAT_149934d80 - (dVar2 * dVar35 + dVar3 * dVar32)) * dVar7;
      dVar27 = (DAT_149934d80._8_8_ - (dVar2 * dVar35 + dVar27)) * dVar10;
      dStack_250 = (dVar32 * dVar1 + dVar36) * dVar7;
      local_228 = (dVar35 * dVar3 + dVar37) * dVar10;
      local_248 = (dVar12 - dVar28) * dVar7;
      uStack_240 = 0;
      local_238._8_4_ = SUB84(dVar27,0);
      local_238._0_8_ = (dVar32 * dVar1 - dVar36) * dVar10;
      local_238._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      uStack_220 = 0;
      uStack_200 = 0;
      local_1f8 = *(undefined8 *)(param_1 + 0xe0);
      uStack_1f0 = *(undefined8 *)(param_1 + 0xe8);
      local_1e8 = *(undefined8 *)(param_1 + 0xf0);
      uStack_1e0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar34._8_8_ = -(ulonglong)(0.0 <= dVar9 * dVar10);
      auVar34._0_8_ = -(ulonglong)(0.0 <= dVar24 * dVar7);
      auVar30 = blendvpd(_DAT_149936790,auVar38,auVar34);
      uVar23 = -(ulonglong)(0.0 <= dVar6 * dVar8);
      dVar28 = (double)(~uVar23 & 0xbff0000000000000 | uVar23 & 0x3ff0000000000000);
      dVar27 = auVar30._0_8_;
      local_148 = local_148 * dVar27;
      local_150 = local_150 * dVar27;
      local_158 = local_158 * dVar27;
      dVar27 = auVar30._8_8_;
      local_128 = local_128 * dVar27;
      local_130 = local_130 * dVar27;
      local_138 = dVar27 * local_138;
      local_108 = local_108 * dVar28;
      local_110 = local_110 * dVar28;
      local_118 = dVar28 * local_118;
      FUN_14481fd10(&local_278,&local_158);
      dVar28 = local_268 * local_268 + local_278 * local_278;
      dVar27 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar26._0_8_ = dVar28 + dVar27;
      auVar26._8_8_ = dVar28 + dVar27;
      auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
      auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
      auVar30 = sqrtpd(auVar26,auVar26);
      auVar38 = divpd(auVar38,auVar30);
      auVar39._0_8_ = auVar38._0_8_ * local_268;
      auVar39._8_8_ = auVar38._8_8_ * dStack_260;
      dVar29 = (double)((ulonglong)(local_278 * auVar38._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
      dVar33 = (double)((ulonglong)(dStack_270 * auVar38._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_));
      auVar38 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,auVar25);
      dVar28 = 0.0;
    }
    dVar27 = auVar4._8_8_ * auVar5._8_8_;
    *param_2 = dVar29;
    param_2[1] = dVar33;
    *(undefined1 (*) [16])(param_2 + 2) = auVar38;
    auVar4._8_4_ = SUB84(dStack_f0,0);
    auVar4._0_8_ = local_f8;
    auVar4._12_4_ = (int)((ulonglong)dStack_f0 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 4) = auVar4;
    param_2[6] = local_e8;
    param_2[7] = dVar28;
    auVar11._8_4_ = SUB84(dVar9 * dVar10,0);
    auVar11._0_8_ = dVar24 * dVar7;
    auVar11._12_4_ = (int)((ulonglong)(dVar9 * dVar10) >> 0x20);
    *(undefined1 (*) [16])(param_2 + 8) = auVar11;
    auVar5._8_4_ = SUB84(dVar27,0);
    auVar5._0_8_ = dVar6 * dVar8;
    auVar5._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 10) = auVar5;
  }
  else {
    pdVar21 = (double *)((longlong)*(int *)(param_1 + 0xb8) * 0x60 + *param_4);
    pdVar22 = param_2;
    for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
      *pdVar22 = *pdVar21;
      pdVar21 = pdVar21 + 1;
      pdVar22 = pdVar22 + 1;
    }
  }
  if (*(char *)(param_1 + 0x4c) == '\0') {
    dVar24 = *(double *)(param_1 + 0x1e8);
    dVar6 = *(double *)(param_1 + 0x1f0);
    dVar7 = *(double *)(param_1 + 0x1f8);
    *param_2 = *(double *)(param_1 + 0x1e0);
    param_2[1] = dVar24;
    param_2[2] = dVar6;
    param_2[3] = dVar7;
  }
  if (*(char *)(param_1 + 0x49) == '\0') {
    dVar24 = *(double *)(*param_3 + 0x30 + (longlong)*(int *)(param_1 + 0xb0) * 0x60);
  }
  else {
    if (*(char *)(param_1 + 0x49) != '\x01') goto LAB_14987f0a4;
    dVar24 = 0.0;
  }
  param_2[6] = dVar24;
  param_2[7] = 0.0;
LAB_14987f0a4:
  if ((local_d0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14987f2ec FUN_14987f2ec body=590 status=ok
// SIG undefined FUN_14987f2ec(void)

void FUN_14987f2ec(longlong param_1,double *param_2,longlong param_3,longlong *param_4)

{
  double *pdVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar7;
  
  lVar15 = *param_4;
  lVar16 = (longlong)*(int *)(param_1 + 0xb0) * 0x60;
  dVar17 = *(double *)(param_1 + 400) * -1.0;
  dVar20 = *(double *)(param_1 + 0x198) * 1.0;
  pdVar1 = (double *)(lVar15 + 0x18 + lVar16);
  dVar22 = *pdVar1;
  dVar3 = *pdVar1;
  dVar9 = *(double *)(param_1 + 0x180);
  dVar10 = *(double *)(param_1 + 0x188);
  dVar11 = *(double *)(param_1 + 0x1e0);
  dVar12 = *(double *)(param_1 + 0x1e8);
  dVar13 = *(double *)(param_1 + 0x1f0);
  dVar14 = *(double *)(param_1 + 0x1f8);
  pdVar1 = (double *)(lVar15 + 8 + lVar16);
  dVar23 = *pdVar1;
  dVar4 = *pdVar1;
  dVar19 = *(double *)(lVar15 + lVar16);
  dVar5 = *(double *)(lVar15 + lVar16);
  pdVar1 = (double *)(lVar15 + 0x10 + lVar16);
  dVar6 = *pdVar1;
  dVar7 = *pdVar1;
  dVar18 = (dVar17 * dVar23 + (dVar19 * dVar20 * 1.0 - dVar22 * dVar9)) - dVar10 * dVar6 * -1.0;
  dVar21 = (dVar20 * dVar4 + (dVar5 * dVar17 * -1.0 - dVar3 * dVar10)) - dVar9 * dVar7 * 1.0;
  dVar22 = dVar20 * dVar6 * 1.0 + dVar23 * dVar9 + (dVar22 * dVar17 - dVar19 * dVar10 * 1.0);
  dVar23 = dVar17 * dVar7 * -1.0 + dVar4 * dVar10 + (dVar3 * dVar20 - dVar5 * dVar9 * -1.0);
  dVar3 = dVar13 * dVar22 * -1.0 + ((dVar18 * dVar11 * -1.0 + dVar23 * dVar14) - dVar21 * dVar12);
  *param_2 = dVar12 * dVar22 * -1.0 + dVar13 * dVar21 + dVar14 * dVar18 * 1.0 + dVar11 * dVar23;
  param_2[1] = dVar11 * dVar22 * 1.0 + dVar14 * dVar21 + dVar13 * dVar18 * -1.0 + dVar12 * dVar23;
  auVar8._8_4_ = SUB84(dVar3,0);
  auVar8._0_8_ = dVar14 * dVar22 * 1.0 +
                 ((dVar18 * dVar12 * 1.0 + dVar23 * dVar13) - dVar21 * dVar11);
  auVar8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar8;
  lVar15 = (longlong)*(int *)(param_1 + 0xb0) * 0x60;
  pdVar1 = (double *)(*param_4 + 0x20 + lVar15);
  dVar23 = pdVar1[1];
  dVar4 = *(double *)(param_1 + 0x1a8);
  fVar2 = *(float *)(param_3 + 0x308);
  dVar3 = *(double *)(param_3 + 0x350);
  dVar22 = *(double *)(param_1 + 0x1a8);
  dVar19 = 0.0;
  if (*(char *)(param_1 + 0x49) != '\x01') {
    dVar19 = (double)*(float *)(param_3 + 0x30c) * *(double *)(param_3 + 0x358) *
             (*(double *)(*param_4 + 0x30 + lVar15) - *(double *)(param_1 + 0x1b0)) +
             *(double *)(param_1 + 0x1b0);
  }
  param_2[4] = (double)fVar2 * *(double *)(param_3 + 0x348) *
               (*pdVar1 - *(double *)(param_1 + 0x1a0)) + *(double *)(param_1 + 0x1a0);
  param_2[5] = dVar3 * (double)fVar2 * (dVar23 - dVar4) + dVar22;
  param_2[6] = dVar19;
  param_2[7] = 0.0;
  return;
}



// FUNCTION 14987f53a FUN_14987f53a body=128 status=ok
// SIG undefined FUN_14987f53a(void)

void FUN_14987f53a(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *_Dst;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  lVar3 = (longlong)iVar1;
  if (lVar3 != 0) {
    lVar4 = lVar3 * 0xa0;
    _Dst = plVar2;
    do {
      if (*_Dst == *param_2) {
        if (_Dst != (longlong *)0x0) goto LAB_14987f58f;
        break;
      }
      _Dst = _Dst + 0x14;
      lVar4 = lVar4 + -0xa0;
    } while (lVar4 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14988e0c4(param_1,iVar1);
    plVar2 = (longlong *)*param_1;
  }
  _Dst = plVar2 + lVar3 * 0x14;
LAB_14987f58f:
  memcpy(_Dst,param_2,0xa0);
  return;
}



// FUNCTION 14987f5ba FUN_14987f5ba body=264 status=ok
// SIG undefined FUN_14987f5ba(void)

void FUN_14987f5ba(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  if ((longlong)iVar1 != 0) {
    lVar3 = (longlong)iVar1 * 0xa0;
    do {
      if (*plVar4 == *(longlong *)(param_2 + 0x28)) {
        if (plVar4 != (longlong *)0x0) {
          lVar2 = *(longlong *)(param_2 + 0x68);
          lVar3 = *(longlong *)(param_2 + 0x70);
          plVar4[4] = *(longlong *)(param_2 + 0x60);
          plVar4[5] = lVar2;
          plVar4[6] = lVar3;
          local_48 = *(undefined8 *)(param_2 + 0x40);
          uStack_40 = *(undefined8 *)(param_2 + 0x48);
          local_38 = *(undefined4 *)(param_2 + 0x50);
          uStack_34 = *(undefined4 *)(param_2 + 0x54);
          uStack_30 = *(undefined4 *)(param_2 + 0x58);
          uStack_2c = *(undefined4 *)(param_2 + 0x5c);
          FUN_1448052ee(&local_48,&local_60);
          plVar4[9] = local_50;
          plVar4[7] = local_60;
          plVar4[8] = lStack_58;
          *(undefined2 *)(plVar4 + 0xb) = 0;
          *(undefined4 *)(plVar4 + 10) = *(undefined4 *)(param_2 + 0x38);
          *(undefined4 *)((longlong)plVar4 + 0x54) = *(undefined4 *)(param_2 + 0x3c);
          if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        break;
      }
      plVar4 = plVar4 + 0x14;
      lVar3 = lVar3 + -0xa0;
    } while (lVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14988e0c4(param_1,iVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
}



// FUNCTION 14987f6e0 FUN_14987f6e0 body=99 status=ok
// SIG undefined FUN_14987f6e0(void)

void FUN_14987f6e0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  switchD_143c3d4dc::caseD_21(param_1,plVar1);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14bebede4);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14987f744 FUN_14987f744 body=41 status=ok
// SIG undefined FUN_14987f744(void)

void FUN_14987f744(undefined8 param_1,longlong *param_2)

{
  switchD_143c3d4dc::caseD_21();
                    /* WARNING: Could not recover jumptable at 0x00014987f76a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bebede4);
  return;
}



// FUNCTION 14987f770 FUN_14987f770 body=31 status=ok
// SIG undefined FUN_14987f770(void)

void FUN_14987f770(undefined8 param_1)

{
  FUN_1446e0b6e();
  FUN_144757f48(param_1,2);
  return;
}



// FUNCTION 14987f790 FUN_14987f790 body=312 status=ok
// SIG undefined FUN_14987f790(void)

void FUN_14987f790(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0x2c) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x20),0);
    }
    puVar2 = *(undefined2 **)(param_1 + 0x20);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48);
    *(undefined4 *)(param_1 + 0x10) = local_48;
    *(undefined4 *)(param_1 + 0x14) = uStack_44;
    *(undefined4 *)(param_1 + 0x18) = uStack_40;
    *(undefined4 *)(param_1 + 0x1c) = uStack_3c;
    if ((undefined4 *)(param_1 + 0x10) == &local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x20) = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x28) = local_30;
      *(undefined4 *)(param_1 + 0x2c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(param_2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
        *(undefined8 *)(param_1 + 8) = 0;
        goto LAB_14987f8a8;
      }
    }
    FUN_14485c47a((undefined8 *)(param_1 + 8),param_2);
  }
LAB_14987f8a8:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14987f8d8 FUN_14987f8d8 body=115 status=ok
// SIG undefined FUN_14987f8d8(void)

void FUN_14987f8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_28 = 0;
  FUN_149880ed2(&local_58);
  FUN_14988110e(param_1,&local_58,param_3);
  FUN_1498805d2(&local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14987f94c FUN_14987f94c body=3204 status=ok
// SIG undefined FUN_14987f94c(void)

ulonglong FUN_14987f94c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_258 [32];
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  longlong *local_220;
  longlong *local_218 [2];
  longlong *local_208 [2];
  longlong *local_1f8 [2];
  undefined8 local_1e8;
  longlong *local_1e0;
  longlong *local_1d8 [2];
  longlong *local_1c8 [2];
  undefined1 local_1b8 [4];
  undefined1 local_1b4 [4];
  longlong *local_1b0 [2];
  undefined8 local_1a0;
  longlong *local_198;
  longlong *local_190 [2];
  longlong *local_180 [2];
  longlong *local_170 [2];
  longlong *local_160 [2];
  longlong *local_150;
  undefined4 local_148;
  uint uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  uint local_138;
  uint uStack_134;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong *local_120;
  undefined8 *local_118;
  ulonglong *local_110;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8 [2];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  uint local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined4 local_68 [4];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_d8 = 0;
  local_d0 = 0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  iVar3 = *(int *)(param_1 + 0xe0);
  local_238 = param_1;
  local_230 = param_3;
  if ((longlong)iVar3 != 0) {
    lVar11 = *(longlong *)(param_1 + 0xd8);
    lVar9 = 0;
    do {
      plVar15 = *(longlong **)(lVar11 + lVar9);
      (**(code **)(*plVar15 + 0x2b0))(plVar15,&local_a8);
      if (local_a8 != (wchar_t *)0x0) {
        FUN_144a13f80(local_f8,&local_150,&local_a8);
      }
      (**(code **)(*plVar15 + 0x2b8))(plVar15,local_f8);
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar3 * 8 != lVar9);
  }
  lVar11 = local_238;
  iVar3 = *(int *)(local_238 + 0xd0);
  if ((longlong)iVar3 != 0) {
    lVar9 = *(longlong *)(local_238 + 200);
    lVar14 = 0;
    do {
      FUN_144a13f80(local_f8,&local_a8,*(longlong *)(lVar9 + lVar14) + 0x30);
      lVar14 = lVar14 + 8;
    } while ((longlong)iVar3 * 8 != lVar14);
  }
  local_a8 = (wchar_t *)0x100000000;
  uStack_a0 = local_e8;
  local_98 = 0xffffffff;
  uStack_94 = 0;
  uStack_90 = 0;
  if (local_d0 == 0) {
    uVar17 = 0;
  }
  else {
    FUN_1449c0562(&local_a8);
    uVar17 = (ulonglong)local_d0;
  }
  lVar9 = local_230;
  uStack_130 = CONCAT44(uStack_8c,uStack_90);
  local_138 = local_98;
  uStack_134 = uStack_94;
  local_148 = (undefined4)local_a8;
  uStack_144 = local_a8._4_4_;
  uStack_140 = (undefined4)uStack_a0;
  uStack_13c = uStack_a0._4_4_;
  local_150 = local_f8;
  if ((uStack_94 != (uint)uVar17) || (uStack_a0 != local_e8)) {
    bVar13 = true;
    do {
      if ((longlong)(int)param_2[1] != 0) {
        lVar11 = 0;
        do {
          if (*(longlong *)(*param_2 + lVar11) ==
              *(longlong *)((longlong)(int)uStack_134 * 0x10 + *local_150)) goto LAB_14987fc7c;
          lVar11 = lVar11 + 8;
        } while ((longlong)(int)param_2[1] * 8 != lVar11);
      }
      if (lVar9 != 0) {
        FUN_145715fae(local_170);
        local_a8 = *(wchar_t **)(local_238 + 0x18);
        FUN_1400021e4(&local_a8,local_190);
        FUN_140233b1a(local_180,local_190);
        local_a8 = L"MissingBone";
        uStack_a0._0_4_ = 0xb;
        FUN_1446e940c(local_1b4,&local_a8);
        local_a8 = L"IKRigProcessor";
        uStack_a0 = (undefined1 *)CONCAT44(uStack_a0._4_4_,0xe);
        FUN_1446e940c(local_1b8,&local_a8);
        FUN_140208bae(local_1b0,local_1b8,local_1b4);
        FUN_14023409e(&local_1a0,local_1b0,1);
        local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
        FUN_14023423e(&local_98,local_180);
        local_88 = 4;
        FUN_14023423e(local_78,local_170);
        local_118 = &local_a8;
        local_110 = (ulonglong *)local_68;
        FUN_14010d304(&local_108,&local_118);
        local_128 = local_1a0;
        local_120 = local_198;
        if (local_198 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_198 + 1) = (int)local_198[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_160,&local_128,&local_108);
        FUN_14007f2db(local_108,local_100);
        if (local_108 != 0) {
          FUN_1400020a8();
        }
        lVar11 = 0x30;
        do {
          if (*(longlong **)((longlong)&local_a8 + lVar11) != (longlong *)0x0) {
            (**(code **)(**(longlong **)((longlong)&local_a8 + lVar11) + 0x10))();
            *(undefined8 *)((longlong)&local_a8 + lVar11) = 0;
            *(undefined4 *)((longlong)&uStack_a0 + lVar11) = 0;
          }
          plVar15 = local_198;
          lVar11 = lVar11 + -0x20;
        } while (lVar11 != -0x10);
        if (local_198 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_198 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_198)(local_198);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        if (local_180[0] != (longlong *)0x0) {
          (**(code **)(*local_180[0] + 0x10))();
        }
        if (local_170[0] != (longlong *)0x0) {
          (**(code **)(*local_170[0] + 0x10))();
        }
        FUN_149869152(lVar9,local_160);
        if (local_160[0] != (longlong *)0x0) {
          (**(code **)(*local_160[0] + 0x10))();
        }
        if (local_1b0[0] != (longlong *)0x0) {
          (**(code **)(*local_1b0[0] + 0x10))();
        }
        if (local_190[0] != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      bVar13 = false;
LAB_14987fc7c:
      local_138 = local_138 & ~uStack_144;
      FUN_1449c0562(&local_148);
    } while (local_150 != local_f8 ||
             ((undefined1 *)CONCAT44(uStack_13c,uStack_140) != local_e8 ||
             uStack_134 != (uint)uVar17));
    if (!bVar13) {
      uVar17 = 0;
      goto LAB_14987fbd2;
    }
    uVar17 = (ulonglong)local_d0;
    lVar11 = local_238;
  }
  local_a8 = (wchar_t *)0x100000000;
  uStack_a0 = local_e8;
  local_98 = 0xffffffff;
  uStack_94 = 0;
  uStack_90 = 0;
  if ((int)uVar17 == 0) {
    uVar16 = 0;
  }
  else {
    FUN_1449c0562(&local_a8);
    uVar16 = local_d0;
  }
  uStack_130 = CONCAT44(uStack_8c,uStack_90);
  local_138 = local_98;
  uStack_134 = uStack_94;
  local_148 = (undefined4)local_a8;
  uStack_144 = local_a8._4_4_;
  uStack_140 = (undefined4)uStack_a0;
  uStack_13c = uStack_a0._4_4_;
  local_150 = local_f8;
  if ((uStack_94 != uVar16) || (uVar17 = CONCAT71((int7)(uVar17 >> 8),1), uStack_a0 != local_e8)) {
    uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
    do {
      plVar15 = (longlong *)((longlong)(int)uStack_134 * 0x10 + *local_150);
      lVar14 = *param_2;
      iVar3 = (int)param_2[1];
      iVar7 = -1;
      lVar10 = -1;
      if ((longlong)iVar3 != 0) {
        lVar12 = (longlong)iVar3 * 8;
        lVar10 = 0;
        do {
          if (*(longlong *)(lVar14 + lVar10 * 8) == *plVar15) goto LAB_14987ffdb;
          lVar10 = lVar10 + 1;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
        lVar10 = -1;
      }
LAB_14987ffdb:
      iVar4 = *(int *)(lVar11 + 0x60);
      if ((longlong)iVar4 != 0) {
        lVar9 = (longlong)iVar4 * 8;
        lVar12 = 0;
        do {
          lVar8 = lVar12;
          if (*(longlong *)(*(longlong *)(lVar11 + 0x58) + lVar12 * 8) == *plVar15) break;
          lVar12 = lVar12 + 1;
          lVar9 = lVar9 + -8;
          lVar8 = -1;
        } while (lVar9 != 0);
        iVar7 = (int)lVar8;
        lVar9 = local_230;
      }
      uVar5 = *(uint *)(*(longlong *)(lVar11 + 0x68) + (longlong)iVar7 * 4);
      if ((int)uVar5 < iVar4 && -1 < (int)uVar5) {
        uVar6 = *(uint *)(param_2[2] + (longlong)(int)lVar10 * 4);
        if ((int)uVar6 < 0 || iVar3 <= (int)uVar6) {
          if (lVar9 != 0) {
            FUN_145715fae(local_1c8);
            FUN_145715fae(local_1d8,plVar15);
            local_a8 = L"InvalidParent";
            uStack_a0._0_4_ = 0xd;
            FUN_1446e940c(local_1b0,&local_a8);
            local_a8 = L"IKRigProcessor";
            uStack_a0 = (undefined1 *)CONCAT44(uStack_a0._4_4_,0xe);
            FUN_1446e940c(local_1b4,&local_a8);
            FUN_140208bae(local_190,local_1b4,local_1b0,
                          L"IK Rig is running on a skeleton with a required bone, \'{0}\', that expected to have a valid parent. The expected parent was, \'{1}\'."
                         );
            FUN_14023409e(&local_1e8,local_190,1);
            local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
            FUN_14023423e(&local_98,local_1d8);
            local_88 = 4;
            FUN_14023423e(local_78,local_1c8);
            local_118 = &local_a8;
            local_110 = (ulonglong *)local_68;
            FUN_14010d304(&local_108,&local_118);
            local_128 = local_1e8;
            local_120 = local_1e0;
            if (local_1e0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_1e0 + 1) = (int)local_1e0[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_160,&local_128,&local_108);
            FUN_14007f2db(local_108,local_100);
            if (local_108 != 0) {
              FUN_1400020a8();
            }
            lVar14 = 0x30;
            do {
              if (*(longlong **)((longlong)&local_a8 + lVar14) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&local_a8 + lVar14) + 0x10))();
                *(undefined8 *)((longlong)&local_a8 + lVar14) = 0;
                *(undefined4 *)((longlong)&uStack_a0 + lVar14) = 0;
              }
              plVar15 = local_1e0;
              lVar14 = lVar14 + -0x20;
            } while (lVar14 != -0x10);
            if (local_1e0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_1e0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_1e0)(local_1e0);
                LOCK();
                piVar2 = (int *)((longlong)plVar15 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
              }
            }
            if (local_1d8[0] != (longlong *)0x0) {
              (**(code **)(*local_1d8[0] + 0x10))();
            }
            if (local_1c8[0] != (longlong *)0x0) {
              (**(code **)(*local_1c8[0] + 0x10))();
            }
            FUN_149869152(lVar9,local_160);
            if (local_160[0] != (longlong *)0x0) {
              (**(code **)(*local_160[0] + 0x10))();
            }
            if (local_190[0] != (longlong *)0x0) {
              (**(code **)(*local_190[0] + 0x10))();
            }
          }
          uVar17 = 0;
        }
        else if ((lVar9 != 0) &&
                (*(longlong *)(*(longlong *)(lVar11 + 0x58) + (ulonglong)uVar5 * 8) !=
                 *(longlong *)(lVar14 + (ulonglong)uVar6 * 8))) {
          FUN_145715fae(local_1f8);
          FUN_145715fae(local_208,lVar14 + (ulonglong)uVar6 * 8);
          FUN_145715fae(local_218,plVar15);
          local_a8 = L"UnexpectedParent";
          uStack_a0._0_4_ = 0x10;
          FUN_1446e940c(local_1b0,&local_a8);
          local_a8 = L"IKRigProcessor";
          uStack_a0 = (undefined1 *)CONCAT44(uStack_a0._4_4_,0xe);
          FUN_1446e940c(local_1b4,&local_a8);
          FUN_140208bae(local_190,local_1b4,local_1b0,
                        L"IK Rig is running on a skeleton with a required bone, \'{0}\', that has a different parent \'{1}\'. The expected parent was, \'{2}\'."
                       );
          FUN_14023409e(&local_228,local_190,1);
          local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
          FUN_14023423e(&local_98,local_218);
          local_88 = 4;
          FUN_14023423e(local_78,local_208);
          local_68[0] = 4;
          FUN_14023423e(local_58,local_1f8);
          local_118 = &local_a8;
          local_110 = &local_48;
          FUN_14010d304(&local_108,&local_118);
          local_128 = local_228;
          local_120 = local_220;
          if (local_220 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_220 + 1) = (int)local_220[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_160,&local_128,&local_108);
          FUN_14007f2db(local_108,local_100);
          if (local_108 != 0) {
            FUN_1400020a8();
          }
          lVar11 = local_238;
          lVar14 = 0x50;
          do {
            if (*(longlong **)((longlong)&local_a8 + lVar14) != (longlong *)0x0) {
              (**(code **)(**(longlong **)((longlong)&local_a8 + lVar14) + 0x10))();
              *(undefined8 *)((longlong)&local_a8 + lVar14) = 0;
              *(undefined4 *)((longlong)&uStack_a0 + lVar14) = 0;
            }
            plVar15 = local_220;
            lVar14 = lVar14 + -0x20;
          } while (lVar14 != -0x10);
          if (local_220 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_220 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_220)(local_220);
              LOCK();
              piVar2 = (int *)((longlong)plVar15 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
          if (local_218[0] != (longlong *)0x0) {
            (**(code **)(*local_218[0] + 0x10))();
          }
          if (local_208[0] != (longlong *)0x0) {
            (**(code **)(*local_208[0] + 0x10))();
          }
          if (local_1f8[0] != (longlong *)0x0) {
            (**(code **)(*local_1f8[0] + 0x10))();
          }
          FUN_14986922e(lVar9,local_160);
          if (local_160[0] != (longlong *)0x0) {
            (**(code **)(*local_160[0] + 0x10))();
          }
          if (local_190[0] != (longlong *)0x0) {
            (**(code **)(*local_190[0] + 0x10))();
          }
        }
      }
      local_138 = local_138 & ~uStack_144;
      FUN_1449c0562(&local_148);
    } while (local_150 != local_f8 ||
             ((undefined1 *)CONCAT44(uStack_13c,uStack_140) != local_e8 || uStack_134 != uVar16));
  }
LAB_14987fbd2:
  local_b0 = 0;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(local_f8);
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17;
}



// FUNCTION 1498805d2 FUN_1498805d2 body=61 status=ok
// SIG undefined FUN_1498805d2(void)

void FUN_1498805d2(longlong *param_1)

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



// FUNCTION 149880610 FUN_149880610 body=41 status=ok
// SIG undefined FUN_149880610(void)

void FUN_149880610(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_14988e8be();
  return;
}



// FUNCTION 14988063a FUN_14988063a body=400 status=ok
// SIG undefined FUN_14988063a(void)

ulonglong FUN_14988063a(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_78 [40];
  uint *local_50;
  ulonglong *local_48;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_14481578e(param_3,0);
  }
  lVar4 = (longlong)(int)param_1[1];
  uVar6 = 0xffffffff;
  if (lVar4 < 1) {
    uVar8 = 0xffffffff;
  }
  else {
    lVar9 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar9 * 8) == *(longlong *)(param_2 + 8)) goto LAB_1498806a3;
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar9 = 0xffffffff;
LAB_1498806a3:
    uVar8 = (uint)lVar9;
    lVar9 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar9 * 8) == *(longlong *)(param_2 + 0x18)) {
        uVar6 = (uint)lVar9;
        break;
      }
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
  }
  if ((int)uVar8 <= (int)uVar6 && -1 < (int)(uVar6 | uVar8)) {
    local_50 = &local_3c;
    local_48 = &local_38;
    local_3c = uVar6;
    FUN_140aece26(param_3);
    uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if (uVar6 == uVar8) goto LAB_149880797;
    while ((((int)uVar6 < (int)param_1[1] &&
            (uVar6 = *(uint *)(param_1[2] + (ulonglong)uVar6 * 4), -1 < (int)uVar6)) &&
           ((int)uVar8 <= (int)uVar6))) {
      iVar1 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(param_3,iVar1);
      }
      *(uint *)(*param_3 + (longlong)iVar1 * 4) = uVar6;
    }
    uVar6 = *(uint *)(param_3 + 1);
    puVar3 = (undefined4 *)*param_3;
    if (puVar3[(int)(uVar6 - 1)] == uVar8) {
      if (1 < (int)uVar6) {
        lVar4 = 0;
        puVar5 = puVar3;
        do {
          uVar2 = *puVar5;
          *puVar5 = puVar3[(ulonglong)uVar6 + lVar4 + -1];
          puVar3[(ulonglong)uVar6 + lVar4 + -1] = uVar2;
          lVar4 = lVar4 + -1;
          puVar5 = puVar5 + 1;
        } while (-lVar4 != (ulonglong)(uVar6 >> 1));
      }
      goto LAB_149880797;
    }
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) < 0) {
      uVar7 = 0;
      FUN_14481578e(param_3,0);
      goto LAB_149880797;
    }
  }
  uVar7 = 0;
LAB_149880797:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1498807cc FUN_1498807cc body=1684 status=ok
// SIG undefined FUN_1498807cc(void)

void FUN_1498807cc(longlong param_1,double *param_2)

{
  double *pdVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  longlong *plVar17;
  double *pdVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_158 [32];
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((longlong)*(int *)(param_1 + 0x78) == 0) {
LAB_149880de1:
    if ((local_f0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  plVar16 = *(longlong **)(param_1 + 0x70);
  plVar17 = plVar16 + (longlong)*(int *)(param_1 + 0x78) * 0x14;
LAB_149880897:
  if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
    lVar10 = *plVar16;
    uVar8 = (uint)((ulonglong)lVar10 >> 0x10);
    uVar11 = (uint)lVar10 & 0xffff;
    lVar9 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar9 = param_1 + 0xb8;
    }
    iVar12 = *(int *)(lVar9 + (ulonglong)
                              (*(int *)(param_1 + 200) - 1U &
                              (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar11) +
                              (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar12 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x80);
      iVar15 = iVar12;
      do {
        if (*(longlong *)(lVar9 + (longlong)iVar15 * 0x20) == lVar10) goto LAB_149880930;
        iVar15 = *(int *)((longlong)iVar15 * 0x20 + lVar9 + 0x18);
      } while (iVar15 != -1);
    }
  }
  goto LAB_1498808a5;
  while (iVar12 = *(int *)(lVar14 + 0x18), iVar12 != -1) {
LAB_149880930:
    lVar14 = lVar9 + (longlong)iVar12 * 0x20;
    if (*(longlong *)(lVar9 + (longlong)iVar12 * 0x20) == lVar10) goto LAB_14988094b;
  }
  lVar14 = 0;
LAB_14988094b:
  pdVar18 = (double *)((longlong)*(int *)(lVar14 + 0x10) * 0x60 + *(longlong *)(param_1 + 0x100));
  dVar24 = (double)plVar16[4];
  dVar20 = (double)plVar16[5];
  dVar3 = (double)plVar16[6];
  plVar2 = plVar16 + 7;
  FUN_144a7484c(plVar2,&local_118);
  if ((((char)plVar16[1] == '\x01') && (*(longlong *)((longlong)plVar16 + 0xc) != 0)) &&
     (0 < (longlong)*(int *)(param_1 + 0xd8))) {
    plVar13 = *(longlong **)(param_1 + 0xd0);
    lVar10 = 0;
    do {
      if (*plVar13 == *(longlong *)((longlong)plVar16 + 0xc)) {
        lVar9 = *(longlong *)(param_1 + 0x100);
        pdVar1 = (double *)(lVar9 + 0x20 + lVar10);
        dVar24 = *pdVar1;
        dVar20 = pdVar1[1];
        dVar3 = *(double *)(lVar9 + 0x30 + lVar10);
        local_118 = *(double *)(lVar9 + lVar10);
        pdVar1 = (double *)(lVar9 + 0x10 + lVar10);
        local_108 = *pdVar1;
        dVar23 = *(double *)(lVar9 + 8 + lVar10);
        dVar22 = *(double *)(lVar9 + 0x18 + lVar10);
        dStack_110 = ((double *)(lVar9 + lVar10))[1];
        dStack_100 = pdVar1[1];
        goto LAB_149880c82;
      }
      lVar10 = lVar10 + 0x60;
      plVar13 = plVar13 + 1;
    } while ((longlong)*(int *)(param_1 + 0xd8) * 0x60 != lVar10);
  }
  if ((char)plVar16[0xb] == '\x02') {
    dVar24 = (double)plVar16[4] * param_2[8];
    dVar25 = (double)plVar16[5] * param_2[9];
    dVar21 = (double)plVar16[6] * param_2[10];
    dVar4 = *param_2;
    dVar5 = param_2[1];
    dVar20 = param_2[2];
    dVar3 = param_2[3];
    dVar23 = dVar25 * dVar4 - dVar24 * dVar5;
    dVar26 = dVar21 * dVar5 - dVar25 * dVar20;
    dVar22 = dVar24 * dVar20 - dVar4 * dVar21;
    dVar26 = dVar26 + dVar26;
    dVar22 = dVar22 + dVar22;
    dVar23 = dVar23 + dVar23;
    dVar24 = (dVar23 * dVar5 - dVar22 * dVar20) + dVar3 * dVar26 + dVar24 + param_2[4];
    dVar20 = (dVar20 * dVar26 - dVar4 * dVar23) + param_2[3] * dVar22 + dVar25 + param_2[5];
    dVar3 = dVar23 * dVar3 + dVar21 + (dVar22 * dVar4 - dVar26 * dVar5) + param_2[6];
  }
  else if ((char)plVar16[0xb] == '\x01') {
    lVar10 = *(longlong *)(param_1 + 0x100);
    lVar9 = (longlong)*(int *)(lVar14 + 0x10) * 0x60;
    dVar3 = *(double *)(lVar10 + 0x30 + lVar9) + (double)plVar16[6];
    dVar20 = *(double *)(lVar10 + 0x28 + lVar9) + (double)plVar16[5];
    dVar24 = *(double *)(lVar10 + 0x20 + lVar9) + (double)plVar16[4];
  }
  if (*(char *)((longlong)plVar16 + 0x59) == '\x01') {
    FUN_144a7484c(plVar2,&local_138);
    lVar10 = (longlong)*(int *)(lVar14 + 0x10) * 0x60;
    pdVar1 = (double *)(*(longlong *)(param_1 + 0x100) + lVar10);
    dVar22 = *pdVar1;
    dVar4 = pdVar1[1];
    pdVar1 = (double *)(*(longlong *)(param_1 + 0x100) + 0x10 + lVar10);
    dVar5 = *pdVar1;
    dVar21 = pdVar1[1];
    local_118 = dVar4 * local_128 * -1.0 +
                dVar5 * dStack_130 + dVar21 * local_138 * 1.0 + dVar22 * dStack_120;
    dVar23 = dVar22 * local_128 * 1.0 +
             dVar21 * dStack_130 + dVar5 * local_138 * -1.0 + dVar4 * dStack_120;
    local_108 = dVar21 * local_128 * 1.0 +
                ((local_138 * dVar4 * 1.0 + dStack_120 * dVar5) - dVar22 * dStack_130);
    dVar22 = dVar5 * local_128 * -1.0 +
             ((local_138 * dVar22 * -1.0 + dStack_120 * dVar21) - dVar4 * dStack_130);
    dStack_110 = dVar23;
    dStack_100 = dVar22;
  }
  else {
    dVar22 = dStack_100;
    dVar23 = dStack_110;
    if (*(char *)((longlong)plVar16 + 0x59) == '\x02') {
      FUN_144a7484c(plVar2,&local_138);
      dVar22 = param_2[3];
      dVar4 = param_2[3];
      dVar21 = param_2[1];
      dVar5 = param_2[1];
      dVar26 = param_2[2];
      dVar25 = param_2[2];
      local_118 = dStack_130 * dVar26 * -1.0 +
                  local_128 * dVar21 + *param_2 * dStack_120 * 1.0 + dVar22 * local_138;
      dVar23 = local_138 * dVar25 * 1.0 +
               dStack_120 * dVar5 + *param_2 * local_128 * -1.0 + dVar4 * dStack_130;
      local_108 = dStack_120 * dVar26 * 1.0 +
                  ((*param_2 * dStack_130 * 1.0 + dVar22 * local_128) - dVar21 * local_138);
      dVar22 = local_128 * dVar25 * -1.0 +
               ((*param_2 * local_138 * -1.0 + dVar4 * dStack_120) - dVar5 * dStack_130);
      dStack_110 = dVar23;
      dStack_100 = dVar22;
    }
  }
LAB_149880c82:
  dVar25 = pdVar18[5];
  dVar4 = pdVar18[6];
  dVar21 = (double)*(float *)(plVar16 + 10);
  dVar5 = pdVar18[5];
  plVar16[0xc] = (longlong)((dVar24 - pdVar18[4]) * dVar21 + pdVar18[4]);
  plVar16[0xd] = (longlong)((dVar20 - dVar25) * dVar21 + dVar5);
  plVar16[0xe] = (longlong)((dVar3 - dVar4) * dVar21 + dVar4);
  dVar20 = (double)*(float *)((longlong)plVar16 + 0x54);
  dVar4 = pdVar18[2];
  uVar19 = -(ulonglong)
            (0.0 <= dVar22 * pdVar18[3] +
                    local_108 * dVar4 + local_118 * *pdVar18 + dVar23 * pdVar18[1]);
  dVar23 = (double)(~uVar19 & (ulonglong)-(1.0 - dVar20) | uVar19 & (ulonglong)(1.0 - dVar20));
  dVar3 = pdVar18[1] * dVar23 + dStack_110 * dVar20;
  dVar24 = pdVar18[3] * dVar23 + dStack_100 * dVar20;
  auVar6._8_4_ = SUB84(dVar3,0);
  auVar6._0_8_ = *pdVar18 * dVar23 + local_118 * dVar20;
  auVar6._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(plVar16 + 0x10) = auVar6;
  auVar7._8_4_ = SUB84(dVar24,0);
  auVar7._0_8_ = dVar4 * dVar23 + local_108 * dVar20;
  auVar7._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  *(undefined1 (*) [16])(plVar16 + 0x12) = auVar7;
LAB_1498808a5:
  plVar16 = plVar16 + 0x14;
  if (plVar16 == plVar17) goto LAB_149880de1;
  goto LAB_149880897;
}



// FUNCTION 149880e62 FUN_149880e62 body=111 status=ok
// SIG undefined FUN_149880e62(void)

void FUN_149880e62(void)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_149881aa6(0,&local_88);
  FUN_145c362a8(&local_88);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149880ed2 FUN_149880ed2 body=402 status=ok
// SIG undefined FUN_149880ed2(void)

void FUN_149880ed2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0;
  FUN_149881066(0,&local_88);
  FUN_1498805d2(&local_88);
  if (param_2 != (longlong *)0x0) {
    local_50 = param_2[3];
    FUN_1400021e4(&local_50,&local_88);
    iVar2 = (int)uStack_80 + -1;
    if ((int)uStack_80 == 0) {
      iVar2 = 0;
    }
    FUN_1446f82e2(&local_50,iVar2,local_88,1);
    param_1[6] = local_50;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    lVar3 = (**(code **)(*param_2 + 0x308))(param_2);
    if (0 < *(int *)(lVar3 + 0x28)) {
      lVar8 = 0;
      lVar5 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + 0x20);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1446f84a2(param_1,iVar2);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar1 + lVar8);
        lVar1 = *(longlong *)(lVar3 + 0x20);
        iVar2 = (int)param_1[3];
        *(uint *)(param_1 + 3) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
          FUN_1446f48e2(param_1 + 2,iVar2);
        }
        *(undefined4 *)(param_1[2] + (longlong)iVar2 * 4) = *(undefined4 *)(lVar1 + 8 + lVar8);
        lVar1 = *(longlong *)(lVar3 + 0x30);
        iVar2 = (int)param_1[5];
        *(uint *)(param_1 + 5) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0x2c) < iVar2 + 1U) {
          FUN_144a2c682(param_1 + 4,iVar2);
        }
        puVar6 = (undefined8 *)(lVar8 * 8 + lVar1);
        puVar7 = (undefined8 *)((longlong)iVar2 * 0x60 + param_1[4]);
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        lVar5 = lVar5 + 1;
        lVar8 = lVar8 + 0xc;
      } while (lVar5 < *(int *)(lVar3 + 0x28));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149881066 FUN_149881066 body=167 status=ok
// SIG undefined FUN_149881066(void)

longlong * FUN_149881066(longlong *param_1,longlong *param_2)

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
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
  }
  param_1[6] = param_2[6];
  return param_1;
}



// FUNCTION 14988110e FUN_14988110e body=360 status=ok
// SIG undefined FUN_14988110e(void)

void FUN_14988110e(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_149880e62();
  FUN_1406fa324(param_1,param_2);
  FUN_14054c6c4(param_1 + 0x10,param_2 + 0x10);
  FUN_1406fa324(param_1 + 0x20,param_3);
  local_58 = 0;
  uStack_50 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    lVar11 = 0;
    lVar4 = 0;
    lVar7 = 0;
    do {
      uVar3 = uStack_50;
      lVar2 = *(longlong *)(param_2 + 0x20);
      lVar9 = (longlong)(int)uStack_50;
      uVar5 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
      if (uStack_50._4_4_ < uVar5) {
        FUN_144a2c682(&local_58,uVar3 & 0xffffffff);
        lVar4 = local_58;
      }
      puVar8 = (undefined8 *)(lVar2 + lVar11);
      puVar10 = (undefined8 *)(lVar9 * 0x60 + lVar4);
      for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      lVar7 = lVar7 + 1;
      lVar11 = lVar11 + 0x60;
    } while (lVar7 < *(int *)(param_2 + 8));
  }
  FUN_149881278(param_1 + 0x10,&local_58,param_1 + 0x50);
  iVar1 = *(int *)(param_1 + 0x58);
  _Src = *(void **)(param_1 + 0x50);
  *(int *)(param_1 + 0x38) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0x3c) == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else {
    FUN_144756262((undefined8 *)(param_1 + 0x30),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0x30),_Src,(longlong)iVar1 * 0x60);
    }
  }
  FUN_149864498(param_1);
  local_5c = 0xfffffffe;
  FUN_1448156a8(param_1 + 0x60,&local_5c,*(undefined4 *)(param_1 + 0x18));
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149881278 FUN_149881278 body=2092 status=ok
// SIG undefined FUN_149881278(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149881278(longlong *param_1,longlong *param_2,longlong *param_3)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar37;
  undefined1 auVar36 [16];
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  double dVar43;
  double dVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auStack_2b8 [32];
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_1401a2688(param_3,0);
  }
  if (0 < (int)param_2[1]) {
    lVar24 = 0;
    lVar27 = 0;
    do {
      auVar41 = _DAT_149934d80;
      lVar21 = (longlong)*(int *)(*param_1 + lVar27 * 4);
      lVar6 = *param_2;
      if (lVar21 == -1) {
        iVar22 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar22 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar22 + 1U) {
          FUN_144a2c682(param_3,iVar22);
        }
        puVar25 = (undefined8 *)(lVar6 + lVar24);
        puVar26 = (undefined8 *)((longlong)iVar22 * 0x60 + *param_3);
        for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
          *puVar26 = *puVar25;
          puVar25 = puVar25 + 1;
          puVar26 = puVar26 + 1;
        }
      }
      else {
        lVar7 = *param_3;
        lVar21 = lVar21 * 0x60;
        pdVar1 = (double *)(lVar7 + lVar21);
        auVar34 = *(undefined1 (*) [16])(lVar7 + 0x40 + lVar21);
        dVar8 = auVar34._0_8_;
        dVar10 = auVar34._8_8_;
        auVar3 = *(undefined1 (*) [16])(lVar7 + 0x50 + lVar21);
        dVar9 = auVar3._0_8_;
        auVar4 = *(undefined1 (*) [16])(lVar6 + 0x40 + lVar24);
        auVar5 = *(undefined1 (*) [16])(lVar6 + 0x50 + lVar24);
        auVar34 = minpd(auVar4,auVar34);
        auVar40 = minpd(auVar5,auVar3);
        auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
        auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
        iVar22 = movmskpd((int)lVar7,auVar35);
        auVar34._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
        auVar34._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
        uVar23 = movmskpd((int)lVar21,auVar34);
        if ((uVar23 & 0x3fffffff) == 0 && iVar22 == 0) {
          dVar11 = *(double *)(lVar6 + lVar24);
          dVar12 = ((double *)(lVar6 + lVar24))[1];
          pdVar2 = (double *)(lVar6 + 0x10 + lVar24);
          dVar14 = *pdVar2;
          dVar33 = pdVar2[1];
          dVar19 = *pdVar1;
          dVar20 = pdVar1[1];
          dVar43 = SUB168(*(undefined1 (*) [16])(pdVar1 + 2),0);
          dVar44 = SUB168(*(undefined1 (*) [16])(pdVar1 + 2),8);
          dVar31 = pdVar1[3];
          dVar30 = pdVar1[3];
          dVar32 = pdVar1[1];
          dVar39 = pdVar1[1];
          dVar37 = pdVar1[2];
          dVar38 = pdVar1[2];
          dVar16 = dVar12 * dVar37 * -1.0 +
                   dVar14 * dVar32 + dVar33 * *pdVar1 * 1.0 + dVar11 * dVar31;
          dVar17 = dVar11 * dVar38 * 1.0 +
                   dVar33 * dVar39 + dVar14 * *pdVar1 * -1.0 + dVar12 * dVar30;
          auVar41._0_8_ =
               dVar33 * dVar37 * 1.0 +
               ((*pdVar1 * dVar12 * 1.0 + dVar14 * dVar31) - dVar11 * dVar32);
          auVar41._8_8_ =
               dVar14 * dVar38 * -1.0 +
               ((*pdVar1 * dVar11 * -1.0 + dVar33 * dVar30) - dVar12 * dVar39);
          pdVar2 = (double *)(lVar6 + 0x20 + lVar24);
          dVar11 = *pdVar2 * dVar8;
          dVar12 = pdVar2[1] * dVar10;
          pdVar2 = (double *)(lVar6 + 0x30 + lVar24);
          dVar37 = *pdVar2 * dVar9;
          dVar38 = pdVar2[1] * auVar3._8_8_;
          dVar32 = dVar12 * dVar19 - dVar20 * dVar11;
          dVar14 = dVar37 * dVar20 - dVar43 * dVar12;
          dVar33 = dVar11 * dVar43 - dVar19 * dVar37;
          dVar39 = dVar38 * dVar44 - dVar44 * dVar38;
          dVar14 = dVar14 + dVar14;
          dVar33 = dVar33 + dVar33;
          dVar32 = dVar32 + dVar32;
          dVar39 = dVar39 + dVar39;
          dVar11 = (dVar32 * dVar20 - dVar43 * dVar33) + dVar31 * dVar14 + dVar11 + pdVar1[4];
          dVar43 = (dVar14 * dVar43 - dVar32 * dVar19) + dVar30 * dVar33 + dVar12 + pdVar1[5];
          dVar31 = (dVar33 * dVar19 - dVar20 * dVar14) + dVar31 * dVar32 + dVar37 + pdVar1[6];
          dVar30 = (dVar39 * dVar44 - dVar39 * dVar44) + dVar30 * dVar39 + dVar38 + pdVar1[7];
        }
        else {
          dVar30 = *pdVar1;
          dVar32 = pdVar1[1];
          dVar39 = pdVar1[2];
          dVar37 = dVar32 + dVar32;
          dVar38 = dVar39 + dVar39;
          dVar31 = dVar30 * (dVar30 + dVar30);
          local_1f8 = ((double)DAT_149934d80 - (dVar39 * dVar38 + dVar32 * dVar37)) * dVar8;
          dStack_1d0 = (DAT_149934d80._8_8_ - (dVar39 * dVar38 + dVar31)) * dVar10;
          local_1a8 = (1.0 - (dVar31 + dVar32 * dVar37)) * dVar9;
          dVar31 = pdVar1[3];
          dVar39 = dVar38 * dVar31;
          dVar43 = (dVar30 + dVar30) * pdVar1[3];
          dVar31 = dVar37 * dVar31;
          dStack_1f0 = (dVar37 * dVar30 + dVar39) * dVar8;
          local_1c8 = (dVar38 * dVar32 + dVar43) * dVar10;
          local_1b8 = (dVar31 + *pdVar1 * dVar38) * dVar9;
          local_1d8 = (dVar37 * dVar30 - dVar39) * dVar10;
          dStack_1b0 = (dVar38 * dVar32 - dVar43) * dVar9;
          local_1e8 = (*pdVar1 * dVar38 - dVar31) * dVar8;
          uStack_1e0 = 0;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = pdVar1[4];
          dStack_190 = pdVar1[5];
          local_188 = pdVar1[6];
          uStack_180 = 0x3ff0000000000000;
          dVar32 = *(double *)(lVar6 + lVar24);
          dVar39 = ((double *)(lVar6 + lVar24))[1];
          dVar30 = *(double *)(lVar6 + 0x10 + lVar24);
          pdVar1 = (double *)(lVar6 + 0x40 + lVar24);
          local_268 = *pdVar1;
          local_258 = pdVar1[1];
          dStack_230 = *(double *)(lVar6 + 0x50 + lVar24);
          dVar44 = dVar39 + dVar39;
          dVar37 = dVar30 + dVar30;
          dVar31 = dVar32 * (dVar32 + dVar32);
          local_278 = ((double)DAT_149934d80 - (dVar30 * dVar37 + dVar39 * dVar44)) * local_268;
          dStack_250 = (DAT_149934d80._8_8_ - (dVar30 * dVar37 + dVar31)) * local_258;
          local_228 = (1.0 - (dVar31 + dVar39 * dVar44)) * dStack_230;
          dVar30 = *(double *)(lVar6 + lVar24) * dVar37;
          pdVar1 = (double *)(lVar6 + 0x18 + lVar24);
          dVar31 = *pdVar1;
          dVar38 = dVar37 * dVar31;
          dVar43 = (dVar32 + dVar32) * *pdVar1;
          dVar31 = dVar44 * dVar31;
          dStack_270 = (dVar44 * dVar32 + dVar38) * local_268;
          local_248 = (dVar37 * dVar39 + dVar43) * local_258;
          local_238 = (dVar31 + dVar30) * dStack_230;
          local_268 = (dVar30 - dVar31) * local_268;
          local_258 = (dVar44 * dVar32 - dVar38) * local_258;
          dStack_230 = (dVar37 * dVar39 - dVar43) * dStack_230;
          uStack_260 = 0;
          uStack_240 = 0;
          uStack_220 = 0;
          puVar25 = (undefined8 *)(lVar6 + 0x20 + lVar24);
          local_218 = *puVar25;
          uStack_210 = puVar25[1];
          local_208 = *(undefined8 *)(lVar6 + 0x30 + lVar24);
          uStack_200 = 0x3ff0000000000000;
          FUN_1447fea8d(&local_178,&local_278,&local_1f8);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar40._8_8_ = -(ulonglong)(0.0 <= auVar4._8_8_ * dVar10);
          auVar40._0_8_ = -(ulonglong)(0.0 <= auVar4._0_8_ * dVar8);
          auVar34 = blendvpd(_DAT_149936790,auVar41,auVar40);
          uVar28 = -(ulonglong)(0.0 <= auVar5._0_8_ * dVar9);
          dVar31 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
          dVar30 = auVar34._0_8_;
          local_168 = local_168 * dVar30;
          local_170 = local_170 * dVar30;
          local_178 = local_178 * dVar30;
          dVar30 = auVar34._8_8_;
          local_148 = local_148 * dVar30;
          local_150 = local_150 * dVar30;
          local_158 = dVar30 * local_158;
          local_128 = local_128 * dVar31;
          local_130 = local_130 * dVar31;
          local_138 = dVar31 * local_138;
          FUN_14481fd10(&local_298,&local_178);
          dVar31 = local_288._0_8_;
          dVar30 = local_288._8_8_;
          dVar32 = dVar31 * dVar31 + local_298 * local_298;
          dVar39 = dVar30 * dVar30 + dStack_290 * dStack_290;
          auVar36._0_8_ = dVar32 + dVar39;
          auVar36._8_8_ = dVar32 + dVar39;
          auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
          auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
          auVar34 = sqrtpd(auVar36,auVar36);
          auVar41 = divpd(auVar41,auVar34);
          auVar42._0_8_ = auVar41._0_8_ * dVar31;
          auVar42._8_8_ = auVar41._8_8_ * dVar30;
          dVar16 = (double)((ulonglong)(local_298 * auVar41._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
          dVar17 = (double)((ulonglong)(dStack_290 * auVar41._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
          auVar41 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar42,auVar29);
          dVar30 = 0.0;
          dVar11 = local_118;
          dVar43 = dStack_110;
          dVar31 = local_108;
        }
        dVar32 = auVar5._8_8_ * auVar3._8_8_;
        dVar10 = auVar4._8_8_ * dVar10;
        iVar22 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar22 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar22 + 1U) {
          FUN_144a2c682(param_3,iVar22);
        }
        lVar6 = *param_3;
        lVar21 = (longlong)iVar22 * 0x60;
        auVar15._8_4_ = SUB84(dVar17,0);
        auVar15._0_8_ = dVar16;
        auVar15._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        *(undefined1 (*) [16])(lVar6 + lVar21) = auVar15;
        *(undefined1 (*) [16])(lVar6 + 0x10 + lVar21) = auVar41;
        auVar13._8_4_ = SUB84(dVar43,0);
        auVar13._0_8_ = dVar11;
        auVar13._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
        *(undefined1 (*) [16])(lVar6 + 0x20 + lVar21) = auVar13;
        auVar18._8_4_ = SUB84(dVar30,0);
        auVar18._0_8_ = dVar31;
        auVar18._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        *(undefined1 (*) [16])(lVar6 + 0x30 + lVar21) = auVar18;
        auVar3._8_4_ = SUB84(dVar10,0);
        auVar3._0_8_ = auVar4._0_8_ * dVar8;
        auVar3._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *(undefined1 (*) [16])(lVar6 + 0x40 + lVar21) = auVar3;
        auVar4._8_4_ = SUB84(dVar32,0);
        auVar4._0_8_ = auVar5._0_8_ * dVar9;
        auVar4._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
        *(undefined1 (*) [16])(lVar6 + 0x50 + lVar21) = auVar4;
      }
      lVar27 = lVar27 + 1;
      lVar24 = lVar24 + 0x60;
    } while (lVar27 < (int)param_2[1]);
  }
  if ((local_f0 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149881aa6 FUN_149881aa6 body=335 status=ok
// SIG undefined FUN_149881aa6(void)

longlong * FUN_149881aa6(longlong *param_1,longlong *param_2)

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
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = param_2[6];
    param_2[6] = 0;
    *(int *)(param_1 + 7) = (int)param_2[7];
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    param_2[7] = 0;
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    param_1[8] = param_2[8];
    param_2[8] = 0;
    *(int *)(param_1 + 9) = (int)param_2[9];
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    param_2[9] = 0;
    if (param_1[10] != 0) {
      FUN_1400020a8();
    }
    param_1[10] = param_2[10];
    param_2[10] = 0;
    *(int *)(param_1 + 0xb) = (int)param_2[0xb];
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
    param_2[0xb] = 0;
    if (param_1[0xc] != 0) {
      FUN_1400020a8();
    }
    param_1[0xc] = param_2[0xc];
    param_2[0xc] = 0;
    *(int *)(param_1 + 0xd) = (int)param_2[0xd];
    *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
    param_2[0xd] = 0;
  }
  return param_1;
}



// FUNCTION 149881bf6 FUN_149881bf6 body=94 status=ok
// SIG undefined FUN_149881bf6(void)

ulonglong FUN_149881bf6(longlong *param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = 0xffffffff;
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[1])) {
    uVar1 = *(uint *)(param_1[2] + (ulonglong)param_2 * 4);
    while (((uVar2 = (ulonglong)uVar1, -1 < (int)uVar1 && ((int)uVar1 < (int)param_1[1])) &&
           ((longlong)(int)param_1[5] != 0))) {
      lVar3 = 0;
      while (*(longlong *)(param_1[4] + lVar3) != *(longlong *)(*param_1 + uVar2 * 8)) {
        lVar3 = lVar3 + 8;
        if ((longlong)(int)param_1[5] * 8 == lVar3) {
          return uVar2;
        }
      }
      uVar1 = *(uint *)(param_1[2] + uVar2 * 4);
    }
  }
  return uVar2;
}



// FUNCTION 149881c54 FUN_149881c54 body=164 status=ok
// SIG undefined FUN_149881c54(void)

void FUN_149881c54(longlong param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_14481578e(param_3,0);
  }
  uVar2 = FUN_149881cf8(param_1,param_2);
  if ((int)param_2 < (int)uVar2 && uVar2 != 0xffffffff) {
    uVar5 = (ulonglong)param_2;
    do {
      iVar1 = (int)uVar5;
      uVar4 = iVar1 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar3 = 0xffffffff;
      if ((-2 < iVar1) && ((int)uVar4 < *(int *)(param_1 + 8))) {
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + uVar5 * 4);
      }
      if (uVar3 == param_2) {
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_3,iVar1);
        }
        *(uint *)(*param_3 + (longlong)iVar1 * 4) = uVar4;
      }
    } while (uVar2 != uVar4);
  }
  return;
}



// FUNCTION 149881cf8 FUN_149881cf8 body=199 status=ok
// SIG undefined FUN_149881cf8(void)

int FUN_149881cf8(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar3 = -1;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x68))) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    uVar6 = (ulonglong)param_2;
    iVar3 = *(int *)(lVar2 + uVar6 * 4);
    if (iVar3 == -2) {
      iVar3 = *(int *)(param_1 + 8);
      if ((param_2 == 0) || (uVar4 = param_2 + 1, iVar3 <= (int)uVar4)) {
        *(int *)(lVar2 + uVar6 * 4) = iVar3 + -1;
      }
      else {
        *(undefined4 *)(lVar2 + uVar6 * 4) = 0xffffffff;
        iVar1 = *(int *)(param_1 + 8);
        iVar5 = -1;
        iVar7 = -1;
        if ((int)param_2 < iVar1) {
          iVar7 = *(int *)(*(longlong *)(param_1 + 0x10) + uVar6 * 4);
        }
        uVar8 = (ulonglong)uVar4;
        if ((int)uVar4 < iVar1) {
          iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + uVar8 * 4);
        }
        uVar4 = 0xfffffffe;
        if (iVar7 < iVar5) {
          do {
            uVar8 = uVar8 + 1;
            uVar4 = iVar3 - 1;
            if (iVar3 <= (int)(param_2 + 2)) break;
            uVar4 = param_2 + 1;
            iVar5 = -1;
            if ((-2 < (int)uVar4) && ((longlong)uVar8 < (longlong)iVar1)) {
              iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + uVar8 * 4);
            }
            param_2 = uVar4;
          } while (iVar7 < iVar5);
        }
        *(uint *)(*(longlong *)(param_1 + 0x60) + uVar6 * 4) = uVar4;
      }
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x60) + uVar6 * 4);
    }
  }
  return iVar3;
}



// FUNCTION 149881dc0 FUN_149881dc0 body=1860 status=ok
// SIG undefined FUN_149881dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149881dc0(longlong param_1,int param_2)

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
  longlong lVar17;
  int iVar18;
  uint uVar19;
  double *pdVar20;
  longlong lVar21;
  double *pdVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  double dVar27;
  undefined1 auVar26 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auStack_298 [32];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
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
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  auVar39 = _DAT_149934d80;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar21 = *(longlong *)(param_1 + 0x30);
  lVar17 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 4);
  lVar23 = (longlong)param_2 * 0x60;
  pdVar20 = (double *)(*(longlong *)(param_1 + 0x40) + lVar23);
  if (lVar17 == -1) {
    pdVar22 = (double *)(lVar21 + lVar23);
    for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
      *pdVar22 = *pdVar20;
      pdVar20 = pdVar20 + 1;
      pdVar22 = pdVar22 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_298);
  }
  lVar17 = lVar17 * 0x60;
  pdVar22 = (double *)(lVar21 + lVar17);
  auVar30 = *(undefined1 (*) [16])(lVar21 + 0x40 + lVar17);
  dVar5 = auVar30._0_8_;
  dVar9 = auVar30._8_8_;
  auVar3 = *(undefined1 (*) [16])(lVar21 + 0x50 + lVar17);
  dVar6 = auVar3._0_8_;
  auVar31 = *(undefined1 (*) [16])(pdVar20 + 8);
  dVar7 = auVar31._0_8_;
  dVar10 = auVar31._8_8_;
  auVar4 = *(undefined1 (*) [16])(pdVar20 + 10);
  dVar8 = auVar4._0_8_;
  auVar30 = minpd(auVar31,auVar30);
  auVar34 = minpd(auVar4,auVar3);
  auVar31._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
  auVar31._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
  iVar18 = movmskpd((int)lVar17,auVar31);
  auVar30._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar30._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  uVar19 = movmskpd(param_2,auVar30);
  if ((uVar19 & 0x3fffffff) == 0 && iVar18 == 0) {
    dVar32 = *pdVar20;
    dVar36 = pdVar20[1];
    dVar37 = pdVar20[2];
    dVar38 = pdVar20[3];
    dVar13 = *pdVar22;
    dVar14 = pdVar22[1];
    dVar15 = pdVar22[2];
    dVar16 = pdVar22[3];
    dVar27 = pdVar22[3];
    dVar28 = pdVar22[3];
    dVar12 = pdVar22[1];
    dVar1 = pdVar22[1];
    dVar2 = pdVar22[2];
    dVar35 = pdVar22[2];
    dVar29 = dVar36 * dVar2 * -1.0 + dVar37 * dVar12 + dVar38 * *pdVar22 * 1.0 + dVar32 * dVar27;
    dVar33 = dVar32 * dVar35 * 1.0 + dVar38 * dVar1 + dVar37 * *pdVar22 * -1.0 + dVar36 * dVar28;
    auVar39._0_8_ =
         dVar38 * dVar2 * 1.0 + ((*pdVar22 * dVar36 * 1.0 + dVar37 * dVar27) - dVar32 * dVar12);
    auVar39._8_8_ =
         dVar37 * dVar35 * -1.0 + ((*pdVar22 * dVar32 * -1.0 + dVar38 * dVar28) - dVar36 * dVar1);
    dVar35 = pdVar20[4] * dVar5;
    dVar32 = pdVar20[5] * dVar9;
    dVar36 = pdVar20[6] * dVar6;
    dVar37 = pdVar20[7] * auVar3._8_8_;
    dVar12 = dVar32 * dVar13 - dVar14 * dVar35;
    dVar1 = dVar36 * dVar14 - dVar15 * dVar32;
    dVar2 = dVar35 * dVar15 - dVar13 * dVar36;
    dVar38 = dVar37 * dVar16 - dVar16 * dVar37;
    dVar1 = dVar1 + dVar1;
    dVar2 = dVar2 + dVar2;
    dVar12 = dVar12 + dVar12;
    dVar38 = dVar38 + dVar38;
    local_f8 = (dVar12 * dVar14 - dVar15 * dVar2) + dVar27 * dVar1 + dVar35 + pdVar22[4];
    dStack_f0 = (dVar1 * dVar15 - dVar12 * dVar13) + dVar28 * dVar2 + dVar32 + pdVar22[5];
    local_e8 = (dVar2 * dVar13 - dVar14 * dVar1) + dVar27 * dVar12 + dVar36 + pdVar22[6];
    dVar28 = (dVar38 * dVar16 - dVar38 * dVar16) + dVar28 * dVar38 + dVar37 + pdVar22[7];
  }
  else {
    dVar1 = *pdVar22;
    dVar2 = pdVar22[1];
    dVar35 = pdVar22[2];
    dVar32 = dVar2 + dVar2;
    dVar36 = dVar35 + dVar35;
    dVar27 = dVar1 * (dVar1 + dVar1);
    local_188 = (1.0 - (dVar27 + dVar2 * dVar32)) * dVar6;
    dVar28 = pdVar22[3];
    dVar37 = dVar36 * dVar28;
    dVar38 = (dVar1 + dVar1) * pdVar22[3];
    dVar28 = dVar32 * dVar28;
    local_198 = (dVar28 + *pdVar22 * dVar36) * dVar6;
    dVar27 = (DAT_149934d80._8_8_ - (dVar35 * dVar36 + dVar27)) * dVar9;
    dVar12 = (dVar32 * dVar1 + dVar37) * dVar5;
    local_1a8 = (dVar36 * dVar2 + dVar38) * dVar9;
    dStack_190 = (dVar36 * dVar2 - dVar38) * dVar6;
    local_1c8 = (*pdVar22 * dVar36 - dVar28) * dVar5;
    local_1d8._8_4_ = SUB84(dVar12,0);
    local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar35 * dVar36 + dVar2 * dVar32)) * dVar5;
    local_1d8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar27,0);
    local_1b8._0_8_ = (dVar32 * dVar1 - dVar37) * dVar9;
    local_1b8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = pdVar22[4];
    dStack_170 = pdVar22[5];
    local_168 = pdVar22[6];
    uStack_160 = 0x3ff0000000000000;
    dVar12 = *pdVar20;
    dVar1 = pdVar20[1];
    dVar2 = pdVar20[2];
    dVar35 = dVar1 + dVar1;
    dVar32 = dVar2 + dVar2;
    dVar27 = dVar12 * (dVar12 + dVar12);
    local_208 = (1.0 - (dVar27 + dVar1 * dVar35)) * dVar8;
    dVar28 = pdVar20[3];
    dVar36 = dVar32 * dVar28;
    dVar37 = (dVar12 + dVar12) * pdVar20[3];
    dVar28 = dVar35 * dVar28;
    local_218 = (dVar28 + *pdVar20 * dVar32) * dVar8;
    dStack_210 = (dVar32 * dVar1 - dVar37) * dVar8;
    local_258 = ((double)DAT_149934d80 - (dVar2 * dVar32 + dVar1 * dVar35)) * dVar7;
    dVar27 = (DAT_149934d80._8_8_ - (dVar2 * dVar32 + dVar27)) * dVar10;
    dStack_250 = (dVar35 * dVar12 + dVar36) * dVar7;
    local_228 = (dVar32 * dVar1 + dVar37) * dVar10;
    local_248 = (*pdVar20 * dVar32 - dVar28) * dVar7;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar27,0);
    local_238._0_8_ = (dVar35 * dVar12 - dVar36) * dVar10;
    local_238._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = pdVar20[4];
    dStack_1f0 = pdVar20[5];
    local_1e8 = pdVar20[6];
    uStack_1e0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar34._8_8_ = -(ulonglong)(0.0 <= dVar9 * dVar10);
    auVar34._0_8_ = -(ulonglong)(0.0 <= dVar5 * dVar7);
    auVar30 = blendvpd(_DAT_149936790,auVar39,auVar34);
    uVar24 = -(ulonglong)(0.0 <= dVar6 * dVar8);
    dVar28 = (double)(~uVar24 & 0xbff0000000000000 | uVar24 & 0x3ff0000000000000);
    dVar27 = auVar30._0_8_;
    local_148 = local_148 * dVar27;
    local_150 = local_150 * dVar27;
    local_158 = local_158 * dVar27;
    dVar27 = auVar30._8_8_;
    local_128 = local_128 * dVar27;
    local_130 = local_130 * dVar27;
    local_138 = dVar27 * local_138;
    local_108 = local_108 * dVar28;
    local_110 = local_110 * dVar28;
    local_118 = dVar28 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar28 = local_268 * local_268 + local_278 * local_278;
    dVar27 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar26._0_8_ = dVar28 + dVar27;
    auVar26._8_8_ = dVar28 + dVar27;
    auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
    auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
    auVar30 = sqrtpd(auVar26,auVar26);
    auVar39 = divpd(auVar39,auVar30);
    auVar40._0_8_ = auVar39._0_8_ * local_268;
    auVar40._8_8_ = auVar39._8_8_ * dStack_260;
    dVar29 = (double)((ulonglong)(local_278 * auVar39._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
    dVar33 = (double)((ulonglong)(dStack_270 * auVar39._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_));
    auVar39 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar25);
    dVar28 = 0.0;
    lVar21 = *(longlong *)(param_1 + 0x30);
  }
  dVar27 = auVar3._8_8_ * auVar4._8_8_;
  *(double *)(lVar21 + lVar23) = dVar29;
  ((double *)(lVar21 + lVar23))[1] = dVar33;
  *(undefined1 (*) [16])(lVar21 + 0x10 + lVar23) = auVar39;
  auVar4._8_4_ = SUB84(dStack_f0,0);
  auVar4._0_8_ = local_f8;
  auVar4._12_4_ = (int)((ulonglong)dStack_f0 >> 0x20);
  *(undefined1 (*) [16])(lVar21 + 0x20 + lVar23) = auVar4;
  pdVar20 = (double *)(lVar21 + 0x30 + lVar23);
  *pdVar20 = local_e8;
  pdVar20[1] = dVar28;
  auVar11._8_4_ = SUB84(dVar9 * dVar10,0);
  auVar11._0_8_ = dVar5 * dVar7;
  auVar11._12_4_ = (int)((ulonglong)(dVar9 * dVar10) >> 0x20);
  *(undefined1 (*) [16])(lVar21 + 0x40 + lVar23) = auVar11;
  auVar3._8_4_ = SUB84(dVar27,0);
  auVar3._0_8_ = dVar6 * dVar8;
  auVar3._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  *(undefined1 (*) [16])(lVar21 + 0x50 + lVar23) = auVar3;
  if ((local_d0 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149882506 FUN_149882506 body=174 status=ok
// SIG undefined FUN_149882506(void)

void FUN_149882506(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 4);
  lVar3 = (longlong)param_2 * 0x60;
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar3);
  if (lVar1 == -1) {
    puVar4 = (undefined8 *)(lVar3 + *(longlong *)(param_1 + 0x40));
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  }
  FUN_1449437a2(puVar2,local_88,*(longlong *)(param_1 + 0x30) + lVar1 * 0x60);
  puVar2 = local_88;
  puVar4 = (undefined8 *)(lVar3 + *(longlong *)(param_1 + 0x40));
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498825b6 FUN_1498825b6 body=82 status=ok
// SIG undefined FUN_1498825b6(void)

void FUN_1498825b6(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_149881cf8();
  if (param_2 < iVar1 && iVar1 != -1) {
    do {
      param_2 = param_2 + 1;
      FUN_149881dc0(param_1,param_2);
      FUN_149882506(param_1,param_2);
    } while (param_2 != iVar1);
  }
  return;
}



// FUNCTION 149882648 FUN_149882648 body=1425 status=ok
// SIG undefined FUN_149882648(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149882648(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  double *pdVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_1a8 [32];
  double *local_188;
  undefined1 local_178 [16];
  undefined1 local_168 [24];
  double local_150;
  double local_148;
  double local_140;
  undefined1 local_138 [32];
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((*(int *)(param_1 + 0x78) != -1) && ((longlong)*(int *)(param_1 + 0x70) != 0)) {
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    plVar14 = *(longlong **)(param_1 + 0x68);
    plVar10 = plVar14 + *(int *)(param_1 + 0x70);
    do {
      uVar15 = uStack_d0;
      if ((longlong)*(int *)(param_3 + 1) == 0) goto LAB_149882b4b;
      lVar13 = *plVar14;
      plVar9 = (longlong *)*param_3;
      lVar11 = (longlong)*(int *)(param_3 + 1) * 0xa0;
      while (*plVar9 != *(longlong *)(lVar13 + 0x28)) {
        plVar9 = plVar9 + 0x14;
        lVar11 = lVar11 + -0xa0;
        if (lVar11 == 0) goto LAB_149882b4b;
      }
      if (plVar9 == (longlong *)0x0) goto LAB_149882b4b;
      lVar11 = -1;
      if (0 < (longlong)(int)param_2[1]) {
        lVar12 = 0;
        do {
          lVar11 = lVar12;
          if (*(longlong *)(*param_2 + lVar12 * 8) == *(longlong *)(lVar13 + 0x30)) break;
          lVar12 = lVar12 + 1;
          lVar11 = -1;
        } while ((int)param_2[1] != lVar12);
      }
      lVar12 = param_2[6];
      lVar11 = (longlong)(int)lVar11 * 0x60;
      pdVar1 = (double *)(lVar12 + 0x20 + lVar11);
      dVar7 = *pdVar1;
      dVar18 = pdVar1[1];
      dVar5 = *(double *)(lVar12 + 0x30 + lVar11);
      dVar6 = (double)plVar9[0xc];
      dVar16 = (double)plVar9[0xd];
      dVar25 = (double)plVar9[0xe];
      dVar23 = *(double *)(lVar12 + 0x28 + lVar11);
      dVar24 = (double)*(float *)(lVar13 + 0x38);
      lVar13 = (longlong)(int)uStack_d0;
      uVar8 = (int)uStack_d0 + 1;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar8);
      if (uStack_d0._4_4_ < uVar8) {
        FUN_1403e3958(&local_d8,uVar15 & 0xffffffff);
      }
      uVar15 = uStack_e0;
      pdVar1 = (double *)(local_d8 + lVar13 * 0x18);
      *pdVar1 = dVar7;
      pdVar1[1] = dVar18;
      *(double *)(local_d8 + 0x10 + lVar13 * 0x18) = dVar5;
      lVar13 = (longlong)(int)uStack_e0;
      uVar8 = (int)uStack_e0 + 1;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar8);
      if (uStack_e0._4_4_ < uVar8) {
        FUN_1403e3958(&local_e8,uVar15 & 0xffffffff);
      }
      *(double *)(local_e8 + lVar13 * 0x18) = (dVar6 - dVar7) * dVar24 + dVar7;
      *(double *)(local_e8 + 8 + lVar13 * 0x18) = (dVar16 - dVar23) * dVar24 + dVar23;
      *(double *)(local_e8 + 0x10 + lVar13 * 0x18) = (dVar25 - dVar5) * dVar24 + dVar5;
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar10);
    local_188 = &local_118;
    FUN_14467177a(local_138,&local_d8,&local_e8,&local_100);
    fVar3 = *(float *)(param_1 + 0x4c + (ulonglong)(local_108 - local_f0 <= 0.0) * 4);
    fVar4 = *(float *)(param_1 + 0x44 + (ulonglong)(local_110 - local_f8 <= 0.0) * 4);
    lVar13 = param_2[6];
    lVar11 = (longlong)*(int *)(param_1 + 0x78) * 0x60;
    dVar25 = (double)*(float *)(param_1 + 0x38);
    pdVar1 = (double *)(lVar13 + 0x20 + lVar11);
    dVar6 = pdVar1[1];
    pdVar2 = (double *)(lVar13 + 0x30 + lVar11);
    dVar5 = *pdVar2;
    dVar16 = pdVar2[1];
    pdVar2 = (double *)(lVar13 + 0x20 + lVar11);
    *pdVar2 = (double)*(float *)(param_1 + 0x3c + (ulonglong)(local_118 - local_100 <= 0.0) * 4) *
              dVar25 * (local_118 - local_100) + *pdVar1;
    pdVar2[1] = (double)fVar4 * dVar25 * (local_110 - local_f8) + dVar6;
    pdVar1 = (double *)(lVar13 + 0x30 + lVar11);
    *pdVar1 = (double)fVar3 * dVar25 * (local_108 - local_f0) + dVar5;
    pdVar1[1] = dVar16 + 0.0;
    FUN_1449413b4(local_138,local_178);
    local_140 = (double)*(float *)(param_1 + 0x60) * (double)local_168._0_8_;
    local_148 = (double)*(float *)(param_1 + 0x5c) * (double)local_178._8_8_;
    local_150 = (double)*(float *)(param_1 + 0x58) * (double)local_178._0_8_;
    FUN_144afe3ce(local_178);
    dVar16 = (double)*(float *)(param_1 + 0x54);
    uVar15 = -(ulonglong)
              (0.0 <= DAT_14c8463e8 * (double)local_168._8_8_ +
                      DAT_14c8463e0 * (double)local_168._0_8_ +
                      DAT_14c8463d0 * (double)local_178._0_8_ +
                      DAT_14c8463d8 * (double)local_178._8_8_);
    dVar25 = (double)(~uVar15 & (ulonglong)-(1.0 - dVar16) | (ulonglong)(1.0 - dVar16) & uVar15);
    dVar5 = DAT_14c8463d0 * dVar25 + (double)local_178._0_8_ * dVar16;
    dVar6 = DAT_14c8463d8 * dVar25 + (double)local_178._8_8_ * dVar16;
    dVar23 = dVar25 * DAT_14c8463e0 + dVar16 * (double)local_168._0_8_;
    dVar24 = dVar25 * DAT_14c8463e8 + dVar16 * (double)local_168._8_8_;
    dVar16 = dVar23 * dVar23 + dVar5 * dVar5;
    dVar25 = dVar24 * dVar24 + dVar6 * dVar6;
    auVar20._0_8_ = dVar16 + dVar25;
    auVar20._8_8_ = dVar16 + dVar25;
    auVar17._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_);
    auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_);
    auVar21 = sqrtpd(auVar20,auVar20);
    auVar21 = divpd(_DAT_149934d80,auVar21);
    auVar22._0_8_ = auVar21._0_8_ * dVar23;
    auVar22._8_8_ = auVar21._8_8_ * dVar24;
    dVar5 = (double)((ulonglong)(dVar5 * auVar21._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_));
    dVar6 = (double)((ulonglong)(dVar6 * auVar21._8_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_));
    local_168._0_16_ = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar22,auVar17);
    local_178._8_4_ = SUB84(dVar6,0);
    local_178._0_8_ = dVar5;
    local_178._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    dVar25 = *(double *)(lVar13 + lVar11);
    dVar23 = ((double *)(lVar13 + lVar11))[1];
    pdVar1 = (double *)(lVar13 + 0x10 + lVar11);
    dVar24 = *pdVar1;
    dVar7 = pdVar1[1];
    dVar18 = local_168._0_8_;
    dVar19 = local_168._8_8_;
    dVar16 = dVar24 * dVar18 * -1.0 + ((dVar5 * dVar25 * -1.0 + dVar19 * dVar7) - dVar23 * dVar6);
    *(double *)(lVar13 + lVar11) =
         dVar23 * dVar18 * -1.0 + dVar24 * dVar6 + dVar7 * dVar5 * 1.0 + dVar25 * dVar19;
    ((double *)(lVar13 + lVar11))[1] =
         dVar25 * dVar18 * 1.0 + dVar7 * dVar6 + dVar24 * dVar5 * -1.0 + dVar23 * dVar19;
    auVar21._8_4_ = SUB84(dVar16,0);
    auVar21._0_8_ =
         dVar7 * dVar18 * 1.0 + ((dVar5 * dVar23 * 1.0 + dVar19 * dVar24) - dVar25 * dVar6);
    auVar21._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    *(undefined1 (*) [16])(lVar13 + 0x10 + lVar11) = auVar21;
    FUN_1498825b6(param_2,*(undefined4 *)(param_1 + 0x78));
LAB_149882b4b:
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149882bda FUN_149882bda body=260 status=ok
// SIG undefined FUN_149882bda(void)

void FUN_149882bda(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    lVar3 = FUN_145bb1efa();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
      if ((longlong)*(int *)(param_2 + 0x70) != 0) {
        plVar4 = *(longlong **)(param_2 + 0x68);
        plVar1 = plVar4 + *(int *)(param_2 + 0x70);
        do {
          if ((longlong)*(int *)(param_1 + 0x70) != 0) {
            lVar3 = 0;
            do {
              lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x68) + lVar3);
              if (*(longlong *)(lVar2 + 0x28) == *(longlong *)(*plVar4 + 0x28)) {
                *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(*plVar4 + 0x38);
                break;
              }
              lVar3 = lVar3 + 8;
            } while ((longlong)*(int *)(param_1 + 0x70) * 8 != lVar3);
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar1);
      }
    }
  }
  return;
}



// FUNCTION 149882cde FUN_149882cde body=112 status=ok
// SIG undefined FUN_149882cde(void)

void FUN_149882cde(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x70);
  if (0 < (int)uVar2) {
    lVar1 = *(longlong *)(param_1 + 0x68);
    uVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar1 + uVar3 * 8) + 0x28) == *param_2) {
        if (uVar2 - 1 != (int)uVar3) {
          memmove((void *)(lVar1 + uVar3 * 8),(void *)(lVar1 + uVar3 * 8 + 8),
                  (longlong)(int)((uVar2 - 1) - (int)uVar3) << 3);
          uVar2 = *(uint *)(param_1 + 0x70);
        }
        *(uint *)(param_1 + 0x70) = uVar2 - 1;
        FUN_14988e9a4(param_1 + 0x68);
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}



// FUNCTION 149882daa FUN_149882daa body=974 status=ok
// SIG undefined FUN_149882daa(void)

void FUN_149882daa(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  char cVar14;
  int *piVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  int *local_80;
  uint local_78;
  uint local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_14988eadc(param_1 + 0x70);
  }
  plVar1 = (longlong *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_14481578e(plVar1,0);
  }
  if ((((*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x28) != 0) &&
       (lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x30), lVar22 != 0)) &&
      (*(longlong *)(param_1 + 0x30) != 0)) &&
     (uVar16 = (ulonglong)(int)param_2[1], 0 < (longlong)uVar16)) {
    uVar21 = 0;
    do {
      if (*(longlong *)(*param_2 + uVar21 * 8) == lVar22) goto LAB_149882e55;
      uVar21 = uVar21 + 1;
    } while (uVar16 != uVar21);
    uVar21 = 0xffffffff;
LAB_149882e55:
    uVar23 = 0;
    do {
      if (*(longlong *)(*param_2 + uVar23 * 8) == *(longlong *)(param_1 + 0x30)) {
        iVar20 = (int)uVar21;
        if (iVar20 != -1) {
          local_80 = (int *)0x0;
          local_78 = 1;
          FUN_144a06ca8(&local_80,1);
          *local_80 = iVar20;
          if ((-1 < iVar20) && (iVar20 < (int)param_2[1])) {
            uVar18 = *(uint *)(param_2[2] + (uVar21 & 0xffffffff) * 4);
            if ((int)uVar23 <= (int)uVar18 && uVar18 != 0xffffffff) {
              do {
                uVar13 = local_78;
                lVar22 = (longlong)(int)local_78;
                local_78 = local_78 + 1;
                if (local_74 < local_78) {
                  FUN_1446f48e2(&local_80,uVar13);
                }
                local_80[lVar22] = uVar18;
              } while (((-1 < (int)uVar18) && ((int)uVar18 < (int)param_2[1])) &&
                      ((uVar18 = *(uint *)(param_2[2] + (ulonglong)uVar18 * 4), uVar18 != 0xffffffff
                       && ((int)uVar23 <= (int)uVar18))));
            }
          }
          piVar12 = local_80;
          lVar22 = (longlong)(int)local_78;
          if (2 < lVar22) {
            lVar19 = 0;
            piVar15 = local_80;
            do {
              iVar20 = *piVar15;
              *piVar15 = local_80[lVar22 + lVar19 + -1];
              local_80[lVar22 + lVar19 + -1] = iVar20;
              lVar19 = lVar19 + -1;
              piVar15 = piVar15 + 1;
            } while (-lVar19 != (ulonglong)(local_78 >> 1));
            lVar22 = (longlong)(int)local_78;
            local_a8 = param_1 + 0x68;
            local_a0 = plVar1;
            if (lVar22 != 0) {
              lVar19 = 0;
              do {
                iVar20 = *(int *)((longlong)piVar12 + lVar19);
                lVar24 = (longlong)iVar20 * 0x60;
                puVar2 = (undefined8 *)(param_2[6] + 0x20 + lVar24);
                uVar7 = *puVar2;
                uVar8 = puVar2[1];
                uVar4 = *(undefined8 *)(param_2[6] + 0x30 + lVar24);
                iVar5 = *(int *)(param_1 + 0x78);
                *(uint *)(param_1 + 0x78) = iVar5 + 1U;
                if (*(uint *)(param_1 + 0x7c) < iVar5 + 1U) {
                  FUN_14988eb0c((longlong *)(param_1 + 0x70),iVar5);
                }
                lVar24 = *(longlong *)(param_1 + 0x70);
                lVar17 = (longlong)iVar5 * 0x68;
                *(undefined8 *)(lVar24 + lVar17) = uVar7;
                ((undefined8 *)(lVar24 + lVar17))[1] = uVar8;
                *(undefined8 *)(lVar24 + 0x10 + lVar17) = uVar4;
                *(undefined4 *)(lVar24 + 0x18 + lVar17) = 0;
                *(int *)(lVar24 + 0x1c + lVar17) = iVar20;
                *(undefined8 *)(lVar24 + 0x30 + lVar17) = DAT_14c8464f0;
                uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                puVar2 = (undefined8 *)(lVar24 + 0x20 + lVar17);
                *puVar2 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                puVar2[1] = uVar4;
                uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                puVar2 = (undefined8 *)(lVar24 + 0x38 + lVar17);
                *puVar2 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                puVar2[1] = uVar4;
                *(undefined8 *)(lVar24 + 0x48 + lVar17) = DAT_14c8464f0;
                uVar11 = DAT_14c8464e8._4_4_;
                uVar10 = (undefined4)DAT_14c8464e8;
                uVar9 = DAT_14c8464e0._4_4_;
                puVar3 = (undefined4 *)(lVar24 + 0x50 + lVar17);
                *puVar3 = (undefined4)DAT_14c8464e0;
                puVar3[1] = uVar9;
                puVar3[2] = uVar10;
                puVar3[3] = uVar11;
                *(undefined8 *)(lVar24 + 0x60 + lVar17) = DAT_14c8464f0;
                lVar19 = lVar19 + 4;
              } while (lVar22 * 4 != lVar19);
            }
            cVar14 = FUN_14988317a();
            if (cVar14 != '\0') {
              local_98 = 0;
              uStack_90 = 0;
              if ((longlong)(int)local_78 < 2) {
                lVar22 = (longlong)(int)local_78 + -1;
              }
              else {
                lVar19 = 0;
                do {
                  local_a8 = lVar19;
                  FUN_149881c54(param_2,local_80[lVar19],&local_98);
                  lVar22 = local_98;
                  lVar19 = (longlong)(int)uStack_90;
                  if (lVar19 != 0) {
                    iVar20 = local_80[local_a8 + 1];
                    lVar24 = 0;
                    do {
                      iVar5 = *(int *)(lVar22 + lVar24);
                      if (iVar5 != iVar20) {
                        iVar6 = *(int *)(param_1 + 0x88);
                        *(uint *)(param_1 + 0x88) = iVar6 + 1U;
                        if (*(uint *)(param_1 + 0x8c) < iVar6 + 1U) {
                          FUN_1446f48e2(local_a0,iVar6);
                        }
                        *(int *)(*local_a0 + (longlong)iVar6 * 4) = iVar5;
                        FUN_149883204(iVar5,param_2);
                      }
                      lVar24 = lVar24 + 4;
                    } while (lVar19 * 4 != lVar24);
                  }
                  lVar19 = local_a8 + 1;
                  lVar22 = (longlong)(int)local_78 + -1;
                } while (lVar19 < lVar22);
              }
              FUN_149883204(local_80[lVar22],param_2,local_a0);
              if (local_98 != 0) {
                FUN_1400020a8();
              }
            }
          }
          if (local_80 != (int *)0x0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      uVar23 = uVar23 + 1;
    } while (uVar16 != uVar23);
  }
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14988317a FUN_14988317a body=138 status=ok
// SIG undefined FUN_14988317a(void)

undefined8 FUN_14988317a(float *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  *param_1 = 0.0;
  if ((int)param_1[4] < 2) {
    uVar3 = 0;
  }
  else {
    lVar2 = 1;
    lVar4 = 0x80;
    do {
      lVar1 = *(longlong *)(param_1 + 2);
      dVar6 = *(double *)(lVar1 + -0x80 + lVar4) - *(double *)(lVar1 + -0x18 + lVar4);
      dVar8 = *(double *)(lVar1 + -0x78 + lVar4) - *(double *)(lVar1 + -0x10 + lVar4);
      dVar7 = *(double *)(lVar1 + -0x70 + lVar4) - *(double *)(lVar1 + -8 + lVar4);
      fVar5 = (float)SQRT(dVar7 * dVar7 + dVar8 * dVar8 + dVar6 * dVar6);
      *(float *)(lVar1 + lVar4) = fVar5;
      *param_1 = fVar5 + *param_1;
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 0x68;
    } while (lVar2 < (int)param_1[4]);
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),2 < (int)param_1[4]);
  }
  return uVar3;
}



// FUNCTION 149883204 FUN_149883204 body=194 status=ok
// SIG undefined FUN_149883204(void)

void FUN_149883204(undefined4 param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  FUN_149881c54(param_2,param_1,&local_58);
  lVar3 = local_58;
  lVar5 = (longlong)(int)uStack_50;
  if (lVar5 != 0) {
    lVar4 = 0;
    do {
      uVar1 = *(undefined4 *)(lVar3 + lVar4);
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(param_3,iVar2);
      }
      *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = uVar1;
      FUN_149883204(uVar1,param_2,param_3);
      lVar4 = lVar4 + 4;
    } while (lVar5 * 4 != lVar4);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498832c8 FUN_1498832c8 body=352 status=ok
// SIG undefined FUN_1498832c8(void)

void FUN_1498832c8(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((2 < *(int *)(param_1 + 0x78)) && ((longlong)(int)param_3[1] != 0)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      if (*(longlong *)(*param_3 + lVar3) == *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x28)) {
        lVar4 = *param_3 - lVar4;
        if (lVar4 != 0) {
          local_4c = *(undefined4 *)(param_1 + 0x38);
          local_58 = &local_4c;
          local_44 = *(undefined4 *)(param_1 + 0x40);
          local_40 = *(undefined1 *)(param_1 + 0x44);
          local_3c = *(undefined4 *)(param_1 + 0x48);
          local_2b = *(undefined1 *)(param_1 + 0x59);
          local_48 = *(undefined1 *)(param_1 + 0x3c);
          local_2c = *(undefined1 *)(param_1 + 0x58);
          local_30 = *(undefined4 *)(param_1 + 0x54);
          local_34 = *(undefined4 *)(param_1 + 0x50);
          local_38 = *(undefined1 *)(param_1 + 0x4c);
          cVar2 = FUN_14988342a(param_1 + 0x68,param_2 + 0x30,lVar4 + 0x60,lVar4 + 0x80);
          if (cVar2 != '\0') {
            if (0 < *(int *)(param_1 + 0x78)) {
              lVar3 = 0x1c;
              lVar4 = 0;
              do {
                FUN_149882506(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x70) + lVar3));
                lVar4 = lVar4 + 1;
                lVar3 = lVar3 + 0x68;
              } while (lVar4 < *(int *)(param_1 + 0x78));
            }
            iVar1 = *(int *)(param_1 + 0x88);
            if ((longlong)iVar1 != 0) {
              lVar3 = *(longlong *)(param_1 + 0x80);
              lVar4 = 0;
              do {
                FUN_149881dc0(param_2,*(undefined4 *)(lVar3 + lVar4));
                lVar4 = lVar4 + 4;
              } while ((longlong)iVar1 * 4 != lVar4);
            }
          }
        }
        break;
      }
      lVar4 = lVar4 + -0xa0;
      lVar3 = lVar3 + 0xa0;
    } while (-lVar4 != (longlong)(int)param_3[1] * 0xa0);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14988342a FUN_14988342a body=1417 status=ok
// SIG undefined FUN_14988342a(void)

undefined8
FUN_14988342a(undefined4 *param_1,longlong *param_2,undefined4 *param_3,undefined1 (*param_4) [16],
             undefined4 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  char cVar17;
  byte bVar18;
  undefined4 uVar19;
  longlong lVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  uint uVar23;
  longlong lVar24;
  undefined4 *puVar25;
  int iVar26;
  uint uVar27;
  longlong lVar28;
  double *pdVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined1 local_130;
  undefined4 local_128;
  undefined1 local_118 [16];
  double local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  cVar17 = FUN_149885538();
  if (0 < (int)param_1[4]) {
    lVar20 = 0x1c;
    lVar24 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 2);
      lVar28 = (longlong)*(int *)(lVar5 + lVar20) * 0x60;
      puVar1 = (undefined8 *)(*param_2 + 0x20 + lVar28);
      uVar16 = puVar1[1];
      uVar21 = *(undefined8 *)(*param_2 + 0x30 + lVar28);
      puVar2 = (undefined8 *)(lVar5 + -0x1c + lVar20);
      *puVar2 = *puVar1;
      puVar2[1] = uVar16;
      *(undefined8 *)(lVar5 + -0xc + lVar20) = uVar21;
      lVar24 = lVar24 + 1;
      lVar20 = lVar20 + 0x68;
    } while (lVar24 < (int)param_1[4]);
  }
  local_128 = param_5[6];
  local_130 = *(undefined1 *)(param_5 + 5);
  local_138 = param_5[7];
  local_140 = param_5[4];
  local_148 = *(undefined1 *)(param_5 + 3);
  puVar25 = param_1 + 2;
  pdVar29 = (double *)((longlong)*(int *)(*(longlong *)(param_1 + 2) + 0x1c) * 0x60 + *param_2);
  if (*(char *)(param_5 + 1) == '\x02') {
    dVar33 = *pdVar29;
    dVar14 = pdVar29[1];
    dVar15 = pdVar29[2];
    dVar3 = pdVar29[3];
    dVar11 = dVar33 * 1.0 - dVar14 * 0.0;
    dVar12 = dVar14 * 0.0 - dVar15 * 1.0;
    dVar13 = dVar15 * 0.0 - dVar33 * 0.0;
    dVar12 = dVar12 + dVar12;
    dVar13 = dVar13 + dVar13;
    dVar11 = dVar11 + dVar11;
    dVar6 = dVar3 * dVar11;
    local_108 = dVar13 * dVar33 - dVar12 * dVar14;
    dVar3 = (dVar11 * dVar14 - dVar13 * dVar15) + dVar3 * dVar12 + 0.0;
    dVar11 = (dVar15 * dVar12 - dVar11 * dVar33) + pdVar29[3] * dVar13 + 1.0;
LAB_1498836cb:
    local_118._8_4_ = SUB84(dVar11,0);
    local_118._0_8_ = dVar3;
    local_118._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    dVar34 = 0.0;
  }
  else {
    if (*(char *)(param_5 + 1) == '\x01') {
      dVar33 = *pdVar29;
      dVar14 = pdVar29[1];
      dVar15 = pdVar29[2];
      dVar3 = pdVar29[3];
      dVar11 = dVar33 * 0.0 - dVar14 * 1.0;
      dVar12 = dVar14 * 0.0 - dVar15 * 0.0;
      dVar13 = dVar15 * 1.0 - dVar33 * 0.0;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar6 = dVar3 * dVar11;
      local_108 = dVar13 * dVar33 - dVar12 * dVar14;
      dVar3 = (dVar11 * dVar14 - dVar13 * dVar15) + dVar3 * dVar12 + 1.0;
      dVar11 = (dVar15 * dVar12 - dVar11 * dVar33) + pdVar29[3] * dVar13 + 0.0;
      goto LAB_1498836cb;
    }
    dVar11 = *pdVar29;
    dVar14 = pdVar29[1];
    dVar15 = pdVar29[2];
    dVar3 = pdVar29[3];
    dVar34 = 1.0;
    dVar12 = dVar11 * 0.0 - dVar14 * 0.0;
    dVar13 = dVar14 * 1.0 - dVar15 * 0.0;
    dVar33 = dVar11 * -1.0 + dVar15 * 0.0;
    dVar13 = dVar13 + dVar13;
    dVar33 = dVar33 + dVar33;
    dVar12 = dVar12 + dVar12;
    dVar6 = dVar3 * dVar12;
    local_108 = dVar33 * dVar11 - dVar13 * dVar14;
    dVar11 = (dVar15 * dVar13 - dVar12 * dVar11) + pdVar29[3] * dVar33 + 0.0;
    local_118._8_4_ = SUB84(dVar11,0);
    local_118._0_8_ = (dVar12 * dVar14 - dVar33 * dVar15) + dVar3 * dVar13 + 0.0;
    local_118._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  }
  local_108 = dVar6 + dVar34 + local_108;
  local_150 = local_118;
  local_158 = param_5[2];
  uVar19 = FUN_149885b28(puVar25,*param_1,param_3,*param_5);
  if (*(char *)(param_5 + 8) == '\0') {
    bVar18 = 0;
  }
  else {
    local_118 = *param_4;
    local_108 = *(double *)param_4[1];
    uStack_100 = *(undefined8 *)(param_4[1] + 8);
    local_f8 = *param_3;
    uStack_f4 = param_3[1];
    uStack_f0 = (undefined4)*(undefined8 *)(param_3 + 2);
    uStack_ec = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20);
    local_e8 = *(undefined8 *)(param_3 + 4);
    uStack_e0 = 0;
    local_d8 = 0x3ff0000000000000;
    uStack_d0 = 0x3ff0000000000000;
    local_c8 = 0x3ff0000000000000;
    uStack_c0 = 0;
    puVar25 = param_1;
    bVar18 = FUN_149885c74(param_1,param_2,local_118,*(undefined1 *)((longlong)param_5 + 0x21));
  }
  uVar22 = (undefined4)CONCAT71((int7)((ulonglong)puVar25 >> 8),1);
  if (cVar17 == '\0') {
    uVar22 = CONCAT31((int3)((uint)uVar19 >> 8),(byte)uVar19 | bVar18);
  }
  pdVar29 = (double *)
            ((longlong)
             *(int *)(*(longlong *)(param_1 + 2) + 0x1c + (longlong)(param_1[4] + -1) * 0x68) * 0x60
            + *param_2);
  dVar3 = *(double *)*param_4;
  dVar6 = *(double *)(*param_4 + 8);
  if ((char)uVar22 == '\0') {
    auVar4 = param_4[1];
    uVar19 = auVar4._0_4_;
    uVar30 = auVar4._4_4_;
    uVar31 = auVar4._8_4_;
    uVar32 = auVar4._12_4_;
    lVar20 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar29[1] - dVar6));
    auVar10._8_4_ = (int)lVar20;
    auVar10._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar29 - dVar3));
    auVar10._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
    uVar23 = movmskpd(uVar22,auVar10);
    lVar20 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar29[3] - auVar4._8_8_));
    auVar9._8_4_ = (int)lVar20;
    auVar9._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar29[2] - auVar4._0_8_));
    auVar9._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
    iVar26 = movmskpd((int)*(longlong *)(param_1 + 2),auVar9);
    uVar27 = iVar26 << 2 | uVar23;
    if (uVar27 != 0) {
      auVar8._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar29[1] + dVar6));
      auVar8._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar29 + dVar3));
      iVar26 = movmskpd(uVar23,auVar8);
      lVar20 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar29[3] + auVar4._8_8_));
      auVar7._8_4_ = (int)lVar20;
      auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar29[2] + auVar4._0_8_));
      auVar7._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
      uVar23 = movmskpd(uVar27,auVar7);
      if ((uVar23 & 0x3fffffff) != 0 || iVar26 != 0) goto LAB_149883999;
    }
    uVar21 = 0;
  }
  else {
    uVar19 = *(undefined4 *)param_4[1];
    uVar30 = *(undefined4 *)(param_4[1] + 4);
    uVar31 = *(undefined4 *)(param_4[1] + 8);
    uVar32 = *(undefined4 *)(param_4[1] + 0xc);
LAB_149883999:
    *pdVar29 = dVar3;
    pdVar29[1] = dVar6;
    *(undefined4 *)(pdVar29 + 2) = uVar19;
    *(undefined4 *)((longlong)pdVar29 + 0x14) = uVar30;
    *(undefined4 *)(pdVar29 + 3) = uVar31;
    *(undefined4 *)((longlong)pdVar29 + 0x1c) = uVar32;
    FUN_1498865c8(param_1,param_2);
    uVar21 = 1;
  }
  if ((local_b0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498839b4 FUN_1498839b4 body=134 status=ok
// SIG undefined FUN_1498839b4(void)

void FUN_1498839b4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145bb1fe4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
      *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
      *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
      *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_2 + 0x4c);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
      *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
      *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
    }
  }
  return;
}



// FUNCTION 149883a74 FUN_149883a74 body=215 status=ok
// SIG undefined FUN_149883a74(void)

void FUN_149883a74(longlong param_1,longlong param_2,void **param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0x90);
  lVar1 = (longlong)local_30;
  _Src = *(void **)(param_1 + 0x88);
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_14988bf42(&local_38,local_30);
    memcpy(local_38,_Src,lVar1 << 3);
  }
  if (&local_38 == param_3) {
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != (void *)0x0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(int *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149883b4c FUN_149883b4c body=212 status=ok
// SIG undefined FUN_149883b4c(void)

void FUN_149883b4c(longlong param_1,longlong param_2,void **param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0x80);
  lVar1 = (longlong)local_30;
  _Src = *(void **)(param_1 + 0x78);
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_14988bf9c(&local_38,local_30);
    memcpy(local_38,_Src,lVar1 << 3);
  }
  if (&local_38 == param_3) {
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != (void *)0x0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(int *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149883c30 FUN_149883c30 body=416 status=ok
// SIG undefined FUN_149883c30(void)

void FUN_149883c30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined1 local_90;
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
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x78);
    plVar2 = plVar7 + *(int *)(param_1 + 0x80);
    uVar4 = *(uint *)(param_2 + 1);
    iVar9 = 0;
    do {
      if ((int)uVar4 < 1) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
        if (*(longlong *)*param_2 != *(longlong *)(*plVar7 + 0x30)) {
          uVar12 = 1;
          do {
            uVar11 = uVar12;
            if (uVar4 == uVar11) break;
            uVar12 = uVar11 + 1;
          } while (((longlong *)*param_2)[uVar11] != *(longlong *)(*plVar7 + 0x30));
          bVar8 = (longlong)uVar11 < (longlong)(int)uVar4;
        }
      }
      iVar9 = iVar9 + (uint)bVar8;
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar2);
    if ((iVar9 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
      lVar1 = param_1 + 0x98;
      FUN_144670042(lVar1);
      if (0 < (int)param_2[1]) {
        lVar10 = 6;
        uVar12 = 0;
        do {
          lVar13 = *param_2;
          uVar6 = FUN_149881bf6(param_2,uVar12 & 0xffffffff);
          lVar5 = param_2[10];
          puVar3 = (undefined4 *)(lVar5 + -0x30 + lVar10 * 8);
          local_88 = *puVar3;
          uStack_84 = puVar3[1];
          uStack_80 = puVar3[2];
          uStack_7c = puVar3[3];
          puVar3 = (undefined4 *)(lVar5 + -0x20 + lVar10 * 8);
          local_78 = *puVar3;
          uStack_74 = puVar3[1];
          uStack_70 = puVar3[2];
          uStack_6c = puVar3[3];
          puVar3 = (undefined4 *)(lVar5 + -0x10 + lVar10 * 8);
          local_68 = *puVar3;
          uStack_64 = puVar3[1];
          uStack_60 = puVar3[2];
          uStack_5c = puVar3[3];
          local_58 = *(undefined8 *)(lVar5 + lVar10 * 8);
          lVar13 = *(longlong *)(lVar13 + uVar12 * 8);
          local_90 = lVar13 == *(longlong *)(param_1 + 0x30);
          local_98 = &local_88;
          FUN_14986062e(lVar1,lVar13,uVar6,&local_68);
          uVar12 = uVar12 + 1;
          lVar10 = lVar10 + 0xc;
        } while ((longlong)uVar12 < (longlong)(int)param_2[1]);
      }
      iVar9 = *(int *)(param_1 + 0x80);
      if ((longlong)iVar9 != 0) {
        lVar10 = *(longlong *)(param_1 + 0x78);
        lVar13 = 0;
        do {
          lVar5 = *(longlong *)(lVar10 + lVar13);
          uVar6 = FUN_1498606e8(lVar1,*(undefined8 *)(lVar5 + 0x30));
          *(undefined4 *)(lVar5 + 0x48) = uVar6;
          lVar13 = lVar13 + 8;
        } while ((longlong)iVar9 * 8 != lVar13);
      }
      FUN_14466f6e8(lVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149883dd2 FUN_149883dd2 body=736 status=ok
// SIG undefined FUN_149883dd2(void)

void FUN_149883dd2(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined1 *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_1 + 0x98;
  cVar4 = FUN_14986062a(lVar1);
  if ((cVar4 != '\0') && (*(int *)(param_1 + 0xa8) == *(int *)(param_2 + 8))) {
    if (0 < *(int *)(param_1 + 0xa8)) {
      lVar8 = 0;
      uVar10 = 0;
      do {
        FUN_149860830(lVar1,uVar10 & 0xffffffff,*(longlong *)(param_2 + 0x30) + lVar8);
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 0x60;
      } while ((longlong)uVar10 < (longlong)*(int *)(param_1 + 0xa8));
    }
    iVar3 = *(int *)(param_1 + 0x90);
    if ((longlong)iVar3 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x88);
      lVar9 = 0;
      do {
        lVar7 = *(longlong *)(lVar8 + lVar9);
        uVar5 = FUN_149860906(lVar1,*(undefined8 *)(lVar7 + 0x28));
        puVar6 = (undefined4 *)FUN_149860886(lVar1,uVar5);
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *(undefined4 *)(lVar7 + 0x30);
          puVar6[1] = *(undefined4 *)(lVar7 + 0x34);
          *(undefined1 *)(puVar6 + 2) = *(undefined1 *)(lVar7 + 0x38);
          puVar6[3] = *(undefined4 *)(lVar7 + 0x3c);
          puVar6[4] = *(undefined4 *)(lVar7 + 0x40);
          *(undefined1 *)(puVar6 + 5) = *(undefined1 *)(lVar7 + 0x44);
          puVar6[6] = *(undefined4 *)(lVar7 + 0x48);
          puVar6[7] = *(undefined4 *)(lVar7 + 0x4c);
          *(undefined1 *)(puVar6 + 8) = *(undefined1 *)(lVar7 + 0x50);
          puVar6[9] = *(undefined4 *)(lVar7 + 0x54);
          puVar6[10] = *(undefined4 *)(lVar7 + 0x58);
          *(undefined1 *)(puVar6 + 0xb) = *(undefined1 *)(lVar7 + 0x5c);
          *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(lVar7 + 0x68);
          *(undefined8 *)(puVar6 + 0xe) = *(undefined8 *)(lVar7 + 0x70);
          *(undefined8 *)(puVar6 + 0x10) = *(undefined8 *)(lVar7 + 0x60);
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar3 * 8 != lVar9);
    }
    if ((longlong)*(int *)(param_1 + 0x80) != 0) {
      plVar11 = *(longlong **)(param_1 + 0x78);
      plVar2 = plVar11 + *(int *)(param_1 + 0x80);
      do {
        lVar8 = *plVar11;
        if (-1 < *(int *)(lVar8 + 0x48)) {
          if ((longlong)(int)param_3[1] == 0) goto LAB_14988408b;
          lVar7 = 0;
          lVar9 = 0;
          while (*(longlong *)(*param_3 + lVar7) != *(longlong *)(lVar8 + 0x28)) {
            lVar9 = lVar9 + -0xa0;
            lVar7 = lVar7 + 0xa0;
            if (-lVar9 == (longlong)(int)param_3[1] * 0xa0) goto LAB_14988408b;
          }
          lVar9 = *param_3 - lVar9;
          if (lVar9 == 0) goto LAB_14988408b;
          local_88 = &DAT_3f8000003f800000;
          local_80 = *(undefined4 *)(lVar8 + 0x3c);
          local_7c = *(undefined4 *)(lVar8 + 0x38);
          local_78 = *(undefined8 *)(lVar8 + 0x40);
          local_98 = &local_88;
          FUN_149860940(lVar1,*(int *)(lVar8 + 0x48),lVar9 + 0x60,lVar9 + 0x80);
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar2);
    }
    local_88 = *(undefined1 **)(param_1 + 0x38);
    local_80 = *(undefined4 *)(param_1 + 0x40);
    local_7c = CONCAT22(local_7c._2_2_,*(undefined2 *)(param_1 + 0x44));
    local_78 = *(undefined8 *)(param_1 + 0x48);
    uStack_70 = *(undefined8 *)(param_1 + 0x50);
    local_68 = *(undefined4 *)(param_1 + 0x58);
    uStack_64 = *(undefined4 *)(param_1 + 0x5c);
    uStack_60 = *(undefined4 *)(param_1 + 0x60);
    uStack_5c = *(undefined4 *)(param_1 + 100);
    local_58 = *(undefined4 *)(param_1 + 0x68);
    local_54 = *(undefined4 *)(param_1 + 0x6c);
    local_50 = *(undefined4 *)(param_1 + 0x70);
    local_4c = *(undefined1 *)(param_1 + 0x74);
    FUN_14466f55e(lVar1);
    if (0 < *(int *)(param_1 + 0xa8)) {
      lVar8 = 0;
      uVar10 = 0;
      do {
        FUN_1498608ba(lVar1,uVar10 & 0xffffffff,*(longlong *)(param_2 + 0x30) + lVar8);
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 0x60;
      } while ((longlong)uVar10 < (longlong)*(int *)(param_1 + 0xa8));
    }
  }
LAB_14988408b:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498840b4 FUN_1498840b4 body=130 status=ok
// SIG undefined FUN_1498840b4(void)

void FUN_1498840b4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x90);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x88);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_144a13f80(param_2,local_34,lVar3 + 0x28,0);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149884138 FUN_149884138 body=512 status=ok
// SIG undefined FUN_149884138(void)

void FUN_149884138(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if (param_2 != 0) {
    lVar6 = FUN_145a98220();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
         ) == lVar6 + 0x30)) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
      *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
      *(undefined1 *)(param_1 + 0x45) = *(undefined1 *)(param_2 + 0x45);
      uVar3 = *(undefined8 *)(param_2 + 0x50);
      uVar4 = *(undefined8 *)(param_2 + 0x58);
      uVar5 = *(undefined8 *)(param_2 + 0x60);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
      *(undefined8 *)(param_1 + 0x50) = uVar3;
      *(undefined8 *)(param_1 + 0x58) = uVar4;
      *(undefined8 *)(param_1 + 0x60) = uVar5;
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
      *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)(param_2 + 0x74);
      if ((longlong)*(int *)(param_2 + 0x80) != 0) {
        plVar7 = *(longlong **)(param_2 + 0x78);
        plVar1 = plVar7 + *(int *)(param_2 + 0x80);
        do {
          if ((longlong)*(int *)(param_1 + 0x80) != 0) {
            lVar6 = *plVar7;
            lVar8 = 0;
            do {
              lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + lVar8);
              if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x28) == *(longlong *)(lVar6 + 0x28))) {
                *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(lVar6 + 0x38);
                *(undefined4 *)(lVar2 + 0x3c) = *(undefined4 *)(lVar6 + 0x3c);
                *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(lVar6 + 0x40);
                *(undefined4 *)(lVar2 + 0x44) = *(undefined4 *)(lVar6 + 0x44);
                break;
              }
              lVar8 = lVar8 + 8;
            } while ((longlong)*(int *)(param_1 + 0x80) * 8 != lVar8);
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar1);
      }
      if ((longlong)*(int *)(param_2 + 0x90) != 0) {
        plVar7 = *(longlong **)(param_2 + 0x88);
        plVar1 = plVar7 + *(int *)(param_2 + 0x90);
        do {
          if ((longlong)*(int *)(param_1 + 0x90) != 0) {
            lVar6 = *plVar7;
            lVar8 = 0;
            do {
              lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x88) + lVar8);
              if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x28) == *(longlong *)(lVar6 + 0x28))) {
                *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(lVar6 + 0x30);
                *(undefined4 *)(lVar2 + 0x34) = *(undefined4 *)(lVar6 + 0x34);
                *(undefined1 *)(lVar2 + 0x38) = *(undefined1 *)(lVar6 + 0x38);
                *(undefined4 *)(lVar2 + 0x3c) = *(undefined4 *)(lVar6 + 0x3c);
                *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(lVar6 + 0x40);
                *(undefined1 *)(lVar2 + 0x44) = *(undefined1 *)(lVar6 + 0x44);
                *(undefined4 *)(lVar2 + 0x48) = *(undefined4 *)(lVar6 + 0x48);
                *(undefined4 *)(lVar2 + 0x4c) = *(undefined4 *)(lVar6 + 0x4c);
                *(undefined1 *)(lVar2 + 0x50) = *(undefined1 *)(lVar6 + 0x50);
                *(undefined4 *)(lVar2 + 0x54) = *(undefined4 *)(lVar6 + 0x54);
                *(undefined4 *)(lVar2 + 0x58) = *(undefined4 *)(lVar6 + 0x58);
                *(undefined1 *)(lVar2 + 0x5c) = *(undefined1 *)(lVar6 + 0x5c);
                uVar3 = *(undefined8 *)(lVar6 + 0x68);
                *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)(lVar6 + 0x60);
                *(undefined8 *)(lVar2 + 0x68) = uVar3;
                *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(lVar6 + 0x70);
                break;
              }
              lVar8 = lVar8 + 8;
            } while ((longlong)*(int *)(param_1 + 0x90) * 8 != lVar8);
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar1);
      }
    }
  }
  return;
}



// FUNCTION 149884338 FUN_149884338 body=121 status=ok
// SIG undefined FUN_149884338(void)

void FUN_149884338(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x80);
  if (0 < (int)uVar2) {
    lVar1 = *(longlong *)(param_1 + 0x78);
    uVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar1 + uVar3 * 8) + 0x28) == *param_2) {
        if (uVar2 - 1 != (int)uVar3) {
          memmove((void *)(lVar1 + uVar3 * 8),(void *)(lVar1 + uVar3 * 8 + 8),
                  (longlong)(int)((uVar2 - 1) - (int)uVar3) << 3);
          uVar2 = *(uint *)(param_1 + 0x80);
        }
        *(uint *)(param_1 + 0x80) = uVar2 - 1;
        FUN_14988ea40(param_1 + 0x78);
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}



// FUNCTION 149884400 FUN_149884400 body=611 status=ok
// SIG undefined FUN_149884400(void)

void FUN_149884400(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_14481578e(plVar1,0);
  }
  uVar6 = (ulonglong)(int)param_2[1];
  if (0 < (longlong)uVar6) {
    uVar12 = 0;
    do {
      if (*(longlong *)(*param_2 + uVar12 * 8) == *(longlong *)(param_1 + 0x38)) goto LAB_149884467;
      uVar12 = uVar12 + 1;
    } while (uVar6 != uVar12);
    uVar12 = 0xffffffff;
LAB_149884467:
    uVar14 = 0;
    do {
      if (*(longlong *)(*param_2 + uVar14 * 8) == *(longlong *)(param_1 + 0x30)) {
        iVar11 = (int)uVar12;
        if (iVar11 != -1) {
          iVar2 = *(int *)(param_1 + 0x50);
          *(uint *)(param_1 + 0x50) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
            FUN_1446f48e2(plVar1,iVar2);
          }
          *(int *)(*plVar1 + (longlong)iVar2 * 4) = iVar11;
          if ((-1 < iVar11) && (iVar11 < (int)param_2[1])) {
            uVar9 = *(uint *)(param_2[2] + (uVar12 & 0xffffffff) * 4);
            if ((int)uVar14 <= (int)uVar9 && uVar9 != 0xffffffff) {
              do {
                iVar11 = *(int *)(param_1 + 0x50);
                *(uint *)(param_1 + 0x50) = iVar11 + 1U;
                if (*(uint *)(param_1 + 0x54) < iVar11 + 1U) {
                  FUN_1446f48e2(plVar1,iVar11);
                }
                *(uint *)(*plVar1 + (longlong)iVar11 * 4) = uVar9;
              } while ((((-1 < (int)uVar9) && ((int)uVar9 < (int)param_2[1])) &&
                       (uVar9 = *(uint *)(param_2[2] + (ulonglong)uVar9 * 4), uVar9 != 0xffffffff))
                      && ((int)uVar14 <= (int)uVar9));
            }
          }
          uVar9 = *(uint *)(param_1 + 0x50);
          lVar8 = (longlong)(int)uVar9;
          if (lVar8 < 3) {
            *(undefined4 *)(param_1 + 0x50) = 0;
            if (*(int *)(param_1 + 0x54) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
            }
          }
          else {
            puVar5 = (undefined4 *)*plVar1;
            lVar10 = 0;
            puVar7 = puVar5;
            do {
              uVar3 = *puVar7;
              *puVar7 = puVar5[lVar8 + lVar10 + -1];
              puVar5[lVar8 + lVar10 + -1] = uVar3;
              lVar10 = lVar10 + -1;
              puVar7 = puVar7 + 1;
            } while (-lVar10 != (ulonglong)(uVar9 >> 1));
            local_58 = 0;
            uStack_50 = 0;
            if (1 < *(int *)(param_1 + 0x50)) {
              local_68 = (longlong *)(param_1 + 0x58);
              lVar8 = 0;
              local_70 = plVar1;
              do {
                FUN_149881c54(param_2,*(undefined4 *)(*local_70 + lVar8 * 4),&local_58);
                lVar10 = local_58;
                lVar15 = (longlong)(int)uStack_50;
                if (lVar15 != 0) {
                  iVar11 = *(int *)(*local_70 + 4 + lVar8 * 4);
                  lVar13 = 0;
                  local_60 = lVar8;
                  do {
                    iVar2 = *(int *)(lVar10 + lVar13);
                    if (iVar2 != iVar11) {
                      iVar4 = *(int *)(param_1 + 0x60);
                      *(uint *)(param_1 + 0x60) = iVar4 + 1U;
                      if (*(uint *)(param_1 + 100) < iVar4 + 1U) {
                        FUN_1446f48e2(local_68,iVar4);
                      }
                      *(int *)(*local_68 + (longlong)iVar4 * 4) = iVar2;
                      FUN_14988467e(iVar2,param_2);
                      lVar8 = local_60;
                    }
                    lVar13 = lVar13 + 4;
                  } while (lVar15 * 4 != lVar13);
                }
                lVar8 = lVar8 + 1;
              } while (lVar8 < (longlong)*(int *)(param_1 + 0x50) + -1);
              if (local_58 != 0) {
                FUN_1400020a8();
              }
            }
          }
        }
        break;
      }
      uVar14 = uVar14 + 1;
    } while (uVar6 != uVar14);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14988467e FUN_14988467e body=194 status=ok
// SIG undefined FUN_14988467e(void)

void FUN_14988467e(undefined4 param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  FUN_149881c54(param_2,param_1,&local_58);
  lVar3 = local_58;
  lVar5 = (longlong)(int)uStack_50;
  if (lVar5 != 0) {
    lVar4 = 0;
    do {
      uVar1 = *(undefined4 *)(lVar3 + lVar4);
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(param_3,iVar2);
      }
      *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = uVar1;
      FUN_14988467e(uVar1,param_2,param_3);
      lVar4 = lVar4 + 4;
    } while (lVar5 * 4 != lVar4);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149884742 FUN_149884742 body=2726 status=ok
// SIG undefined FUN_149884742(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149884742(longlong param_1,longlong param_2,undefined8 *param_3)

{
  double *pdVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  double *pdVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar25;
  undefined1 auVar24 [16];
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if ((2 < (longlong)*(int *)(param_1 + 0x50)) && ((longlong)*(int *)(param_3 + 1) != 0)) {
    plVar12 = (longlong *)*param_3;
    lVar18 = (longlong)*(int *)(param_3 + 1) * 0xa0;
    do {
      if (*plVar12 == *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x28)) {
        if ((plVar12 != (longlong *)0x0) &&
           (0.0001 < *(float *)(*(longlong *)(param_1 + 0x40) + 0x38))) {
          piVar2 = *(int **)(param_1 + 0x48);
          lVar18 = *(longlong *)(param_2 + 0x30);
          lVar16 = (longlong)*piVar2 * 0x60;
          pdVar15 = (double *)(lVar18 + 0x20 + lVar16);
          dVar8 = *pdVar15;
          dVar33 = pdVar15[1];
          auVar32 = *(undefined1 (*) [16])(lVar18 + 0x30 + lVar16);
          dVar30 = auVar32._0_8_;
          uVar37 = auVar32._0_4_;
          uVar38 = auVar32._4_4_;
          pdVar15 = (double *)(lVar18 + 0x20 + (longlong)piVar2[1] * 0x60);
          pdVar1 = (double *)
                   (lVar18 + 0x20 + (longlong)piVar2[(longlong)*(int *)(param_1 + 0x50) + -1] * 0x60
                   );
          dVar4 = *(double *)
                   (lVar18 + 0x30 + (longlong)piVar2[(longlong)*(int *)(param_1 + 0x50) + -1] * 0x60
                   ) - dVar30;
          dVar21 = *pdVar1 - dVar8;
          dVar25 = pdVar1[1] - dVar33;
          dVar34 = dVar4 * dVar4 + dVar21 * dVar21 + dVar25 * dVar25;
          if (((dVar34 != 1.0) || (dVar26 = dVar25, dVar22 = dVar21, dVar7 = dVar4, NAN(dVar34))) &&
             (dVar26 = DAT_14c8464e8, dVar22 = DAT_14c8464e0, dVar7 = DAT_14c8464f0,
             9.99999993922529e-09 <= dVar34)) {
            dVar34 = 1.0 / SQRT(dVar34);
            dVar26 = dVar25 * dVar34;
            dVar22 = dVar21 * dVar34;
            dVar7 = dVar4 * dVar34;
          }
          dVar4 = *(double *)(lVar18 + 0x30 + (longlong)piVar2[1] * 0x60) - dVar30;
          dVar25 = *pdVar15 - dVar8;
          dVar33 = pdVar15[1] - dVar33;
          dVar21 = dVar4 * dVar4 + dVar25 * dVar25 + dVar33 * dVar33;
          if (((dVar21 != 1.0) || (dVar23 = dVar25, dVar27 = dVar33, dVar34 = dVar4, NAN(dVar21)))
             && (dVar23 = DAT_14c8464e0, dVar27 = DAT_14c8464e8, dVar34 = DAT_14c8464f0,
                9.99999993922529e-09 <= dVar21)) {
            dVar21 = 1.0 / SQRT(dVar21);
            dVar23 = dVar25 * dVar21;
            dVar27 = dVar33 * dVar21;
            dVar34 = dVar4 * dVar21;
          }
          dVar4 = *(double *)(lVar18 + 0x28 + lVar16);
          if (((((dVar22 != 0.0) || (NAN(dVar22))) ||
               ((dVar26 != 0.0 || ((NAN(dVar26) || (dVar7 != 0.0)))))) || (NAN(dVar7))) &&
             (((((dVar23 != 0.0 || (NAN(dVar23))) || (dVar27 != 0.0)) ||
               ((NAN(dVar27) || (dVar34 != 0.0)))) || (NAN(dVar34))))) {
            local_128 = dVar22 * dVar27 - dVar23 * dVar26;
            dStack_130 = dVar7 * dVar23 - dVar34 * dVar22;
            local_138 = dVar26 * dVar34 - dVar27 * dVar7;
            dVar33 = local_128 * local_128 + local_138 * local_138 + dStack_130 * dStack_130;
            if ((dVar33 != 1.0) || (NAN(dVar33))) {
              if (9.99999993922529e-09 <= dVar33) {
                dVar33 = 1.0 / SQRT(dVar33);
                local_128 = local_128 * dVar33;
                dStack_130 = dStack_130 * dVar33;
                local_138 = local_138 * dVar33;
              }
              else {
                local_128 = DAT_14c8464f0;
                local_138 = DAT_14c8464e0;
                dStack_130 = DAT_14c8464e8;
              }
            }
            dVar30 = (double)plVar12[0xe] - dVar30;
            dVar21 = (double)plVar12[0xd] - dVar4;
            dVar25 = (double)plVar12[0xc] - dVar8;
            dVar33 = dVar30 * dVar30 + dVar25 * dVar25 + dVar21 * dVar21;
            if (((dVar33 != 1.0) || (dVar23 = dVar21, dVar27 = dVar25, dVar34 = dVar30, NAN(dVar33))
                ) && (dVar23 = DAT_14c8464e8, dVar27 = DAT_14c8464e0, dVar34 = DAT_14c8464f0,
                     9.99999993922529e-09 <= dVar33)) {
              dVar33 = 1.0 / SQRT(dVar33);
              dVar23 = dVar21 * dVar33;
              dVar27 = dVar25 * dVar33;
              dVar34 = dVar30 * dVar33;
            }
            if ((((dVar27 != 0.0) || (NAN(dVar27))) ||
                ((dVar23 != 0.0 || ((NAN(dVar23) || (dVar34 != 0.0)))))) || (NAN(dVar34))) {
              local_148 = dVar22 * dVar23 + -dVar26 * dVar27;
              dStack_150 = dVar7 * dVar27 + -dVar22 * dVar34;
              local_158 = dVar26 * dVar34 + -dVar7 * dVar23;
              dVar30 = local_148 * local_148 + local_158 * local_158 + dStack_150 * dStack_150;
              if ((dVar30 != 1.0) || (NAN(dVar30))) {
                if (9.99999993922529e-09 <= dVar30) {
                  dVar30 = 1.0 / SQRT(dVar30);
                  local_148 = local_148 * dVar30;
                  dStack_150 = dStack_150 * dVar30;
                  local_158 = local_158 * dVar30;
                }
                else {
                  local_148 = DAT_14c8464f0;
                  local_158 = DAT_14c8464e0;
                  dStack_150 = DAT_14c8464e8;
                }
              }
              if (((((local_138 != 0.0) || (NAN(local_138))) || (dStack_130 != 0.0)) ||
                  (((NAN(dStack_130) || (local_128 != 0.0)) || (NAN(local_128))))) &&
                 (((9.999999747378752e-05 < ABS(local_138 - local_158) ||
                   (9.999999747378752e-05 < ABS(dStack_130 - dStack_150))) ||
                  (9.999999747378752e-05 < ABS(local_128 - local_148))))) {
                pdVar15 = &local_178;
                uVar10 = FUN_144a9d448(pdVar15,&local_138,&local_158);
                dVar30 = (double)DAT_149e1ecd0;
                uVar39 = (undefined4)DAT_149e1ecd0;
                uVar40 = DAT_149e1ecd0._4_4_;
                dVar33 = DAT_149e1ecd0._8_8_;
                uVar41 = DAT_149e1ecd0._8_4_;
                uVar42 = DAT_149e1ecd0._12_4_;
                lVar18 = -(ulonglong)(dVar33 < ABS(dStack_170 - DAT_14c8463d8));
                auVar29._8_4_ = (int)lVar18;
                auVar29._0_8_ = -(ulonglong)(dVar30 < ABS(local_178 - DAT_14c8463d0));
                auVar29._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
                uVar11 = movmskpd(uVar10,auVar29);
                auVar35._8_8_ = -(ulonglong)(dVar33 < ABS(dStack_160 - DAT_14c8463e8));
                auVar35._0_8_ = -(ulonglong)(dVar30 < ABS(local_168 - DAT_14c8463e0));
                iVar13 = movmskpd((int)pdVar15,auVar35);
                uVar14 = iVar13 << 2 | uVar11;
                if (uVar14 != 0) {
                  auVar28._8_8_ = -(ulonglong)(dVar33 < ABS(dStack_170 + DAT_14c8463d8));
                  auVar28._0_8_ = -(ulonglong)(dVar30 < ABS(local_178 + DAT_14c8463d0));
                  iVar13 = movmskpd(uVar11,auVar28);
                  lVar18 = -(ulonglong)(dVar33 < ABS(dStack_160 + DAT_14c8463e8));
                  auVar3._8_4_ = (int)lVar18;
                  auVar3._0_8_ = -(ulonglong)(dVar30 < ABS(local_168 + DAT_14c8463e0));
                  auVar3._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
                  uVar11 = movmskpd(uVar14,auVar3);
                  if ((uVar11 & 0x3fffffff) != 0 || iVar13 != 0) {
                    if (1 < *(int *)(param_1 + 0x50)) {
                      lVar18 = 0;
                      local_1d8 = 0;
                      uStack_1d0 = 0x3ff0000000000000;
                      local_1c8 = auVar32;
                      do {
                        lVar16 = *(longlong *)(param_2 + 0x30);
                        lVar17 = (longlong)*(int *)(*(longlong *)(param_1 + 0x48) + lVar18 * 4) *
                                 0x60;
                        local_198 = *(double *)(lVar16 + lVar17);
                        dStack_190 = ((double *)(lVar16 + lVar17))[1];
                        pdVar15 = (double *)(lVar16 + 0x10 + lVar17);
                        local_188 = *pdVar15;
                        dStack_180 = pdVar15[1];
                        auVar31._0_8_ =
                             (local_178 * dStack_190 * 1.0 + dStack_160 * local_188) -
                             local_198 * dStack_170;
                        auVar31._8_8_ =
                             (local_178 * local_198 * -1.0 + dStack_160 * dStack_180) -
                             dStack_190 * dStack_170;
                        dVar30 = local_198 * local_168 * 1.0 +
                                 dStack_180 * dStack_170 +
                                 local_188 * local_178 * -1.0 + dStack_190 * dStack_160;
                        local_1a8 = dStack_180 * local_168 * 1.0 + auVar31._0_8_;
                        dStack_1a0 = local_188 * local_168 * -1.0 + auVar31._8_8_;
                        local_1b8._8_4_ = SUB84(dVar30,0);
                        local_1b8._0_8_ =
                             dStack_190 * local_168 * -1.0 +
                             local_188 * dStack_170 +
                             dStack_180 * local_178 * 1.0 + local_198 * dStack_160;
                        local_1b8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
                        FUN_144a44da6(&local_118,&local_198,local_1b8,
                                      SUB84((double)*(float *)(*(longlong *)(param_1 + 0x40) + 0x38)
                                            ,0));
                        dVar30 = local_108 * local_108 + local_118 * local_118;
                        dVar33 = dStack_100 * dStack_100 + dStack_110 * dStack_110;
                        auVar5._8_4_ = SUB84(dVar33,0);
                        auVar5._0_8_ = dVar30;
                        auVar5._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
                        dVar21 = dVar30 + auVar5._8_8_;
                        auVar6._8_4_ = SUB84(dVar21,0);
                        auVar6._0_8_ = dVar30 + dVar33;
                        auVar6._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
                        auVar32 = sqrtpd(auVar31,auVar6);
                        auVar35 = divpd(_DAT_149934d80,auVar32);
                        uVar19 = -(ulonglong)((double)CONCAT44(uVar40,uVar39) <= dVar30 + dVar33);
                        uVar20 = -(ulonglong)((double)CONCAT44(uVar42,uVar41) <= dVar21);
                        auVar24._8_8_ = uVar20;
                        auVar24._0_8_ = uVar19;
                        auVar36._0_8_ = auVar35._0_8_ * local_108;
                        auVar36._8_8_ = auVar35._8_8_ * dStack_100;
                        auVar9._8_8_ = uStack_1d0;
                        auVar9._0_8_ = local_1d8;
                        uVar20 = (ulonglong)(dStack_110 * auVar35._8_8_) & uVar20;
                        auVar29 = blendvpd(auVar9,auVar36,auVar24);
                        auVar32._8_4_ = (int)uVar20;
                        auVar32._0_8_ = (ulonglong)(local_118 * auVar35._0_8_) & uVar19;
                        auVar32._12_4_ = (int)(uVar20 >> 0x20);
                        *(undefined1 (*) [16])(lVar16 + lVar17) = auVar32;
                        *(undefined1 (*) [16])(lVar16 + 0x10 + lVar17) = auVar29;
                        dVar30 = *(double *)(lVar16 + 0x30 + lVar17);
                        dVar23 = dVar30 - (double)CONCAT44(uVar38,uVar37);
                        dVar33 = *(double *)(lVar16 + 0x20 + lVar17);
                        dVar21 = *(double *)(lVar16 + 0x28 + lVar17);
                        dVar22 = dVar21 - dVar4;
                        dVar25 = dVar33 - dVar8;
                        dVar7 = dStack_170 * dVar23 - dVar22 * local_168;
                        dVar7 = dVar7 + dVar7;
                        dVar27 = local_178 * dVar22 - dVar25 * dStack_170;
                        dVar27 = dVar27 + dVar27;
                        dVar26 = local_168 * dVar25 - dVar23 * local_178;
                        dVar26 = dVar26 + dVar26;
                        uVar37 = local_1c8._0_4_;
                        uVar38 = local_1c8._4_4_;
                        dVar34 = (double)*(float *)(*(longlong *)(param_1 + 0x40) + 0x38);
                        pdVar15 = (double *)(lVar16 + 0x20 + lVar17);
                        *pdVar15 = (((dStack_170 * dVar27 - dVar26 * local_168) +
                                     dVar7 * dStack_160 + dVar25 + dVar8) - dVar33) * dVar34 +
                                   dVar33;
                        pdVar15[1] = (((local_168 * dVar7 - dVar27 * local_178) +
                                       dStack_160 * dVar26 + dVar22 + dVar4) - dVar21) * dVar34 +
                                     dVar21;
                        uVar39 = 0xe0000000;
                        uVar40 = 0x3e45798e;
                        uVar41 = 0xe0000000;
                        uVar42 = 0x3e45798e;
                        pdVar15 = (double *)(lVar16 + 0x30 + lVar17);
                        *pdVar15 = (((local_178 * dVar26 - dVar7 * dStack_170) +
                                     dStack_160 * dVar27 + dVar23 + local_1c8._0_8_) - dVar30) *
                                   dVar34 + dVar30;
                        pdVar15[1] = 0.0;
                        lVar18 = lVar18 + 1;
                      } while (lVar18 < (longlong)*(int *)(param_1 + 0x50) + -1);
                    }
                    iVar13 = *(int *)(param_1 + 0x60);
                    if ((longlong)iVar13 != 0) {
                      lVar18 = *(longlong *)(param_1 + 0x58);
                      lVar16 = 0;
                      do {
                        FUN_149881dc0(param_2,*(undefined4 *)(lVar18 + lVar16));
                        lVar16 = lVar16 + 4;
                      } while ((longlong)iVar13 * 4 != lVar16);
                    }
                  }
                }
              }
            }
          }
        }
        break;
      }
      plVar12 = plVar12 + 0x14;
      lVar18 = lVar18 + -0xa0;
    } while (lVar18 != 0);
  }
  if ((local_f0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498851ea FUN_1498851ea body=76 status=ok
// SIG undefined FUN_1498851ea(void)

void FUN_1498851ea(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145bb20ce();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x38) =
           *(undefined4 *)(*(longlong *)(param_2 + 0x40) + 0x38);
    }
  }
  return;
}



// FUNCTION 1498852a4 FUN_1498852a4 body=505 status=ok
// SIG undefined FUN_1498852a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1498852a4(longlong param_1,longlong param_2,undefined8 *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = (longlong)*(int *)(param_1 + 0x48);
  if ((lVar6 != -1) && ((longlong)*(int *)(param_3 + 1) != 0)) {
    plVar9 = (longlong *)*param_3;
    lVar8 = (longlong)*(int *)(param_3 + 1) * 0xa0;
    do {
      if (*plVar9 == *(longlong *)(param_1 + 0x30)) {
        if (plVar9 == (longlong *)0x0) break;
        lVar8 = *(longlong *)(param_1 + 0x40);
        if (*(char *)(lVar8 + 0x28) == '\0') {
          bVar7 = *(byte *)(lVar8 + 0x29);
          if ((bVar7 == 0) || (*(float *)(lVar8 + 0x2c) <= 0.0001)) break;
          puVar10 = (ulonglong *)(lVar6 * 0x60 + *(longlong *)(param_2 + 0x30));
        }
        else {
          if (*(float *)(lVar8 + 0x2c) <= 0.0001) break;
          lVar5 = *(longlong *)(param_2 + 0x30);
          lVar6 = lVar6 * 0x60;
          puVar10 = (ulonglong *)(lVar5 + lVar6);
          dVar13 = *(double *)(lVar5 + 0x30 + lVar6);
          dVar16 = (double)plVar9[0xe];
          dVar2 = (double)plVar9[0xd];
          dVar3 = *(double *)(lVar5 + 0x20 + lVar6);
          dVar4 = *(double *)(lVar5 + 0x28 + lVar6);
          dVar11 = (double)*(float *)(lVar8 + 0x2c);
          pdVar1 = (double *)(lVar5 + 0x20 + lVar6);
          *pdVar1 = ((double)plVar9[0xc] - dVar3) * dVar11 + dVar3;
          pdVar1[1] = (dVar2 - dVar4) * dVar11 + dVar4;
          pdVar1 = (double *)(lVar5 + 0x30 + lVar6);
          *pdVar1 = (dVar16 - dVar13) * dVar11 + dVar13;
          pdVar1[1] = 0.0;
          lVar8 = *(longlong *)(param_1 + 0x40);
          bVar7 = *(byte *)(lVar8 + 0x29);
        }
        if ((bVar7 & 1) != 0) {
          local_88 = *puVar10;
          uStack_80 = puVar10[1];
          local_78 = puVar10[2];
          uStack_70 = puVar10[3];
          FUN_144a44da6(&local_68,&local_88,plVar9 + 0x10,(double)*(float *)(lVar8 + 0x2c));
          dVar13 = local_58 * local_58 + local_68 * local_68;
          dVar16 = dStack_50 * dStack_50 + dStack_60 * dStack_60;
          auVar14._0_8_ = dVar13 + dVar16;
          auVar14._8_8_ = dVar13 + dVar16;
          auVar12._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_);
          auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_);
          auVar15 = sqrtpd(auVar14,auVar14);
          auVar15 = divpd(_DAT_149934d80,auVar15);
          auVar17._0_8_ = auVar15._0_8_ * local_58;
          auVar17._8_8_ = auVar15._8_8_ * dStack_50;
          auVar12 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar17,auVar12);
          *puVar10 = (ulonglong)(local_68 * auVar15._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_);
          puVar10[1] = (ulonglong)(dStack_60 * auVar15._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_);
          *(undefined1 (*) [16])(puVar10 + 2) = auVar12;
        }
        FUN_1498825b6(param_2,*(undefined4 *)(param_1 + 0x48));
        break;
      }
      plVar9 = plVar9 + 0x14;
      lVar8 = lVar8 + -0xa0;
    } while (lVar8 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14988549e FUN_14988549e body=104 status=ok
// SIG undefined FUN_14988549e(void)

void FUN_14988549e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145bb21b8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x28) =
           *(undefined1 *)(*(longlong *)(param_2 + 0x40) + 0x28);
      *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x29) =
           *(undefined1 *)(*(longlong *)(param_2 + 0x40) + 0x29);
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x2c) =
           *(undefined4 *)(*(longlong *)(param_2 + 0x40) + 0x2c);
    }
  }
  return;
}



// FUNCTION 149885538 FUN_149885538 body=1519 status=ok
// SIG undefined FUN_149885538(void)

undefined8 FUN_149885538(longlong param_1,longlong *param_2,double *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  double *pdVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined1 auStack_138 [32];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar19 = *param_2;
  lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x1c) * 0x60;
  pdVar17 = (double *)(lVar19 + 0x20 + lVar16);
  dVar8 = *pdVar17;
  dVar9 = pdVar17[1];
  dVar10 = *(double *)(lVar19 + 0x30 + lVar16);
  lVar12 = (longlong)
           *(int *)(*(longlong *)(param_1 + 8) + 0x1c +
                   (longlong)(*(int *)(param_1 + 0x10) + -1) * 0x68) * 0x60;
  pdVar17 = (double *)(lVar19 + 0x20 + lVar12);
  dVar1 = *(double *)(lVar19 + 0x28 + lVar16);
  local_c8 = *(double *)(lVar19 + 0x30 + lVar12) - dVar10;
  local_d8 = *pdVar17 - dVar8;
  dStack_d0 = pdVar17[1] - dVar9;
  dVar23 = local_c8 * local_c8 + local_d8 * local_d8 + dStack_d0 * dStack_d0;
  if ((dVar23 != 1.0) || (NAN(dVar23))) {
    if (9.99999993922529e-09 <= dVar23) {
      dVar23 = 1.0 / SQRT(dVar23);
      local_c8 = local_c8 * dVar23;
      dStack_d0 = dStack_d0 * dVar23;
      local_d8 = dVar23 * local_d8;
    }
    else {
      local_c8 = DAT_14c8464f0;
      local_d8 = DAT_14c8464e0;
      dStack_d0 = DAT_14c8464e8;
    }
  }
  local_e8 = param_3[2] - dVar10;
  dStack_f0 = param_3[1] - dVar1;
  local_f8 = *param_3 - dVar8;
  dVar23 = local_e8 * local_e8 + local_f8 * local_f8 + dStack_f0 * dStack_f0;
  if ((dVar23 != 1.0) || (NAN(dVar23))) {
    if (9.99999993922529e-09 <= dVar23) {
      dVar23 = 1.0 / SQRT(dVar23);
      local_e8 = local_e8 * dVar23;
      dStack_f0 = dStack_f0 * dVar23;
      local_f8 = local_f8 * dVar23;
    }
    else {
      local_e8 = DAT_14c8464f0;
      local_f8 = DAT_14c8464e0;
      dStack_f0 = DAT_14c8464e8;
    }
  }
  if ((((((local_d8 != 0.0) || (NAN(local_d8))) || (dStack_d0 != 0.0)) ||
       ((NAN(dStack_d0) || (local_c8 != 0.0)))) || (NAN(local_c8))) &&
     (((9.999999747378752e-05 < ABS(local_d8 - local_f8) ||
       (9.999999747378752e-05 < ABS(dStack_d0 - dStack_f0))) ||
      (9.999999747378752e-05 < ABS(local_c8 - local_e8))))) {
    pdVar17 = &local_118;
    uVar13 = FUN_144a9d448(pdVar17,&local_d8,&local_f8);
    lVar19 = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_110 - DAT_14c8463d8));
    auVar4._8_4_ = (int)lVar19;
    auVar4._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_118 - DAT_14c8463d0));
    auVar4._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    uVar11 = movmskpd((int)uVar13,auVar4);
    lVar19 = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_100 - DAT_14c8463e8));
    auVar3._8_4_ = (int)lVar19;
    auVar3._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_108 - DAT_14c8463e0));
    auVar3._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    iVar14 = movmskpd((int)pdVar17,auVar3);
    uVar15 = iVar14 << 2 | uVar11;
    if (uVar15 != 0) {
      auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_110 + DAT_14c8463d8));
      auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_118 + DAT_14c8463d0));
      iVar14 = movmskpd(uVar11,auVar21);
      lVar19 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),iVar14);
      auVar2._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_100 + DAT_14c8463e8));
      auVar2._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_108 + DAT_14c8463e0));
      uVar11 = movmskpd(uVar15,auVar2);
      if ((uVar11 & 0x3fffffff) != 0 || iVar14 != 0) {
        iVar14 = *(int *)(param_1 + 0x10);
        if ((longlong)iVar14 != 0) {
          lVar19 = *(longlong *)(param_1 + 8);
          lVar12 = 0;
          do {
            lVar16 = *param_2;
            lVar18 = (longlong)*(int *)(lVar19 + 0x1c + lVar12) * 0x60;
            dVar23 = *(double *)(lVar16 + lVar18);
            dVar5 = ((double *)(lVar16 + lVar18))[1];
            pdVar17 = (double *)(lVar16 + 0x10 + lVar18);
            dVar6 = *pdVar17;
            dVar7 = pdVar17[1];
            pdVar17 = (double *)(lVar16 + 0x20 + lVar18);
            dVar20 = *pdVar17;
            dVar22 = pdVar17[1];
            *(double *)(lVar16 + lVar18) =
                 dVar5 * local_108 * -1.0 +
                 dVar6 * dStack_110 + dVar7 * local_118 * 1.0 + dVar23 * dStack_100;
            ((double *)(lVar16 + lVar18))[1] =
                 dVar23 * local_108 * 1.0 +
                 dVar7 * dStack_110 + dVar6 * local_118 * -1.0 + dVar5 * dStack_100;
            pdVar17 = (double *)(lVar16 + 0x10 + lVar18);
            *pdVar17 = dVar7 * local_108 * 1.0 +
                       ((local_118 * dVar5 * 1.0 + dStack_100 * dVar6) - dVar23 * dStack_110);
            pdVar17[1] = dVar6 * local_108 * -1.0 +
                         ((local_118 * dVar23 * -1.0 + dStack_100 * dVar7) - dVar5 * dStack_110);
            dVar20 = dVar20 - dVar8;
            dVar22 = dVar22 - dVar9;
            dVar23 = *(double *)(lVar16 + 0x30 + lVar18) - dVar10;
            dVar6 = dStack_110 * dVar23 - dVar22 * local_108;
            dVar6 = dVar6 + dVar6;
            dVar7 = local_118 * dVar22 - dVar20 * dStack_110;
            dVar7 = dVar7 + dVar7;
            dVar5 = local_108 * dVar20 - dVar23 * local_118;
            dVar5 = dVar5 + dVar5;
            pdVar17 = (double *)(lVar16 + 0x20 + lVar18);
            *pdVar17 = (dStack_110 * dVar7 - dVar5 * local_108) + dVar6 * dStack_100 + dVar20 +
                       dVar8;
            pdVar17[1] = (local_108 * dVar6 - dVar7 * local_118) + dStack_100 * dVar5 + dVar22 +
                         dVar1;
            pdVar17 = (double *)(lVar16 + 0x30 + lVar18);
            *pdVar17 = (local_118 * dVar5 - dVar6 * dStack_110) + dStack_100 * dVar7 + dVar23 +
                       dVar10;
            pdVar17[1] = 0.0;
            lVar12 = lVar12 + 0x68;
          } while ((longlong)iVar14 * 0x68 - lVar12 != 0);
        }
        uVar13 = CONCAT71((int7)((ulonglong)lVar19 >> 8),1);
        goto LAB_1498856fb;
      }
    }
  }
  uVar13 = 0;
LAB_1498856fb:
  if ((local_c0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 149885b28 FUN_149885b28 body=332 status=ok
// SIG undefined FUN_149885b28(void)

undefined8
FUN_149885b28(undefined8 *param_1,float param_2,double *param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,char param_7,float param_8,undefined4 param_9,
             undefined1 param_10,undefined4 param_11)

{
  double *pdVar1;
  undefined8 uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  
  pdVar1 = (double *)*param_1;
  lVar3 = (longlong)(*(int *)(param_1 + 1) + -1);
  dVar5 = (double)(float)param_4;
  if ((((dVar5 < ABS(pdVar1[lVar3 * 0xd] - *param_3)) ||
       (dVar5 < ABS(pdVar1[lVar3 * 0xd + 1] - param_3[1]))) ||
      (dVar5 < ABS(pdVar1[lVar3 * 0xd + 2] - param_3[2]))) || (param_7 != '\0')) {
    if (*(int *)(param_1 + 1) == 3) {
      dVar5 = *param_3 - *pdVar1;
      dVar4 = (double)(param_2 * param_2);
      if (dVar4 <= (param_3[2] - pdVar1[2]) * (param_3[2] - pdVar1[2]) +
                   (param_3[1] - pdVar1[1]) * (param_3[1] - pdVar1[1]) + dVar5 * dVar5) {
        FUN_149886956(dVar4,param_3);
      }
      else {
        FUN_149886a58(dVar4,param_3,param_6);
      }
    }
    else {
      if (90.0 <= param_8) {
        param_8 = 90.0;
      }
      if (param_8 <= 0.0) {
        param_8 = 0.0;
      }
      FUN_149888162(param_11,param_3,param_4,param_5,param_7,param_8 * 0.017453292,param_9,param_11,
                    param_10);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 149885c74 FUN_149885c74 body=2386 status=ok
// SIG undefined FUN_149885c74(void)

undefined8 FUN_149885c74(longlong param_1,longlong *param_2,double *param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  double *pdVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auStack_158 [32];
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar13 = *param_2;
  lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x1c) * 0x60;
  pdVar10 = (double *)(lVar13 + 0x20 + lVar9);
  local_128 = *pdVar10;
  dStack_120 = pdVar10[1];
  pdVar10 = (double *)(lVar13 + 0x30 + lVar9);
  local_138 = *pdVar10;
  dStack_130 = pdVar10[1];
  dVar17 = param_3[6] - local_138;
  dVar14 = param_3[4] - local_128;
  dVar16 = param_3[5] - dStack_120;
  dVar21 = dVar17 * dVar17 + dVar14 * dVar14 + dVar16 * dVar16;
  if (((dVar21 != 1.0) || (dVar15 = dVar14, dVar18 = dVar17, dVar20 = dVar16, NAN(dVar21))) &&
     (dVar15 = DAT_14c8464e0, dVar18 = DAT_14c8464f0, dVar20 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar21)) {
    dVar21 = 1.0 / SQRT(dVar21);
    dVar15 = dVar14 * dVar21;
    dVar18 = dVar17 * dVar21;
    dVar20 = dVar16 * dVar21;
  }
  lVar11 = (longlong)
           *(int *)(*(longlong *)(param_1 + 8) + 0x1c +
                   (longlong)(*(int *)(param_1 + 0x10) + -1) * 0x68) * 0x60;
  dVar17 = *(double *)(lVar13 + lVar11);
  dVar21 = ((double *)(lVar13 + lVar11))[1];
  dVar23 = *(double *)(lVar13 + 0x10 + lVar11);
  pdVar10 = (double *)(lVar13 + 0x18 + lVar11);
  dVar16 = *pdVar10;
  dVar14 = *pdVar10;
  if (param_4 == 2) {
    dVar22 = 1.0;
    dVar27 = 0.0;
    uVar5 = 0;
    uVar8 = 0x3ff00000;
    dVar24 = dVar17 * 1.0 - dVar21 * 0.0;
    dVar28 = dVar21 * 0.0 - dVar23 * 1.0;
    dVar26 = dVar23 * 0.0 - dVar17 * 0.0;
    dVar28 = dVar28 + dVar28;
    dVar26 = dVar26 + dVar26;
    dVar24 = dVar24 + dVar24;
    dVar25 = dVar24 * dVar16 + 0.0 + (dVar26 * dVar17 - dVar28 * dVar21);
    dVar16 = (dVar24 * dVar21 - dVar26 * dVar23) + dVar16 * dVar28 + 0.0;
    dVar14 = (dVar23 * dVar28 - dVar17 * dVar24) + dVar14 * dVar26 + 1.0;
LAB_149885f5d:
    uVar29 = 0;
    dVar24 = 0.0;
    uVar30 = 0;
  }
  else {
    if (param_4 == 1) {
      dVar22 = 0.0;
      dVar27 = 1.0;
      dVar24 = dVar17 * 0.0 - dVar21 * 1.0;
      dVar28 = dVar21 * 0.0 - dVar23 * 0.0;
      dVar26 = dVar23 * 1.0 - dVar17 * 0.0;
      dVar28 = dVar28 + dVar28;
      dVar26 = dVar26 + dVar26;
      dVar24 = dVar24 + dVar24;
      dVar25 = dVar24 * dVar16 + 0.0 + (dVar26 * dVar17 - dVar28 * dVar21);
      dVar16 = (dVar24 * dVar21 - dVar26 * dVar23) + dVar16 * dVar28 + 1.0;
      dVar14 = (dVar23 * dVar28 - dVar17 * dVar24) + dVar14 * dVar26 + 0.0;
      uVar5 = 0x3ff00000;
      uVar8 = 0;
      goto LAB_149885f5d;
    }
    uVar29 = 0x3ff00000;
    dVar27 = 0.0;
    dVar22 = 0.0;
    dVar24 = 1.0;
    uVar30 = 0x3ff00000;
    dVar26 = dVar17 * 0.0 - dVar21 * 0.0;
    dVar4 = dVar21 * 1.0 - dVar23 * 0.0;
    dVar28 = dVar23 * 0.0 - dVar17 * 1.0;
    dVar4 = dVar4 + dVar4;
    dVar28 = dVar28 + dVar28;
    dVar26 = dVar26 + dVar26;
    dVar25 = dVar26 * dVar16 + 1.0 + (dVar28 * dVar17 - dVar4 * dVar21);
    dVar16 = (dVar26 * dVar21 - dVar28 * dVar23) + dVar16 * dVar4 + 0.0;
    dVar14 = (dVar23 * dVar4 - dVar17 * dVar26) + dVar14 * dVar28 + 0.0;
    uVar5 = 0;
    uVar8 = 0;
  }
  dVar17 = *(double *)(lVar13 + 0x28 + lVar9);
  dVar28 = *param_3;
  dVar26 = param_3[1];
  dVar4 = param_3[2];
  dVar21 = param_3[3];
  dVar27 = dVar27 * dVar4 - dVar28 * (double)((ulonglong)uVar30 << 0x20);
  dVar23 = dVar22 * dVar28 - (double)((ulonglong)uVar5 << 0x20) * dVar26;
  dVar22 = dVar24 * dVar26 - (double)((ulonglong)uVar8 << 0x20) * dVar4;
  dVar22 = dVar22 + dVar22;
  dVar27 = dVar27 + dVar27;
  dVar23 = dVar23 + dVar23;
  dVar24 = dVar23 * dVar21 + (double)((ulonglong)uVar29 << 0x20) +
           (dVar27 * dVar28 - dVar22 * dVar26);
  dVar21 = (dVar23 * dVar26 - dVar27 * dVar4) + dVar21 * dVar22 + (double)((ulonglong)uVar5 << 0x20)
  ;
  dVar23 = (dVar4 * dVar22 - dVar28 * dVar23) +
           param_3[3] * dVar27 + (double)((ulonglong)uVar8 << 0x20);
  dVar28 = dVar15 * dVar14 - dVar16 * dVar20;
  dVar16 = dVar18 * dVar16 - dVar25 * dVar15;
  dVar14 = dVar20 * dVar25 - dVar14 * dVar18;
  local_c8 = dVar14 * dVar20 - dVar15 * dVar16;
  local_d0 = dVar28 * dVar15 - dVar18 * dVar14;
  local_d8 = dVar16 * dVar18 - dVar20 * dVar28;
  dVar14 = dVar15 * dVar23 - dVar21 * dVar20;
  dVar16 = dVar18 * dVar21 - dVar24 * dVar15;
  dVar21 = dVar20 * dVar24 - dVar23 * dVar18;
  local_e0 = dVar21 * dVar20 - dVar15 * dVar16;
  local_e8 = dVar14 * dVar15 - dVar18 * dVar21;
  local_f0 = dVar16 * dVar18 - dVar14 * dVar20;
  if (((((local_d8 != 0.0) || (NAN(local_d8))) ||
       ((local_d0 != 0.0 || ((NAN(local_d0) || (local_c8 != 0.0)))))) || (NAN(local_c8))) &&
     (((9.999999747378752e-05 < ABS(local_d8 - local_f0) ||
       (9.999999747378752e-05 < ABS(local_d0 - local_e8))) ||
      (9.999999747378752e-05 < ABS(local_c8 - local_e0))))) {
    pdVar10 = &local_118;
    uVar6 = FUN_144a9d448(pdVar10,&local_d8,&local_f0);
    lVar13 = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_110 - DAT_14c8463d8));
    auVar3._8_4_ = (int)lVar13;
    auVar3._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_118 - DAT_14c8463d0));
    auVar3._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar5 = movmskpd((int)uVar6,auVar3);
    lVar13 = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_100 - DAT_14c8463e8));
    auVar2._8_4_ = (int)lVar13;
    auVar2._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_108 - DAT_14c8463e0));
    auVar2._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar7 = movmskpd((int)pdVar10,auVar2);
    uVar8 = iVar7 << 2 | uVar5;
    if (uVar8 != 0) {
      auVar19._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_110 + DAT_14c8463d8));
      auVar19._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_118 + DAT_14c8463d0));
      iVar7 = movmskpd(uVar5,auVar19);
      lVar13 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),iVar7);
      auVar1._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_100 + DAT_14c8463e8));
      auVar1._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_108 + DAT_14c8463e0));
      uVar5 = movmskpd(uVar8,auVar1);
      if ((uVar5 & 0x3fffffff) != 0 || iVar7 != 0) {
        iVar7 = *(int *)(param_1 + 0x10);
        if ((longlong)iVar7 != 0) {
          lVar13 = *(longlong *)(param_1 + 8);
          lVar9 = 0;
          do {
            lVar11 = *param_2;
            lVar12 = (longlong)*(int *)(lVar13 + 0x1c + lVar9) * 0x60;
            dVar14 = *(double *)(lVar11 + lVar12);
            dVar16 = ((double *)(lVar11 + lVar12))[1];
            pdVar10 = (double *)(lVar11 + 0x10 + lVar12);
            dVar21 = *pdVar10;
            dVar15 = pdVar10[1];
            pdVar10 = (double *)(lVar11 + 0x20 + lVar12);
            dVar18 = *pdVar10;
            dVar20 = pdVar10[1];
            *(double *)(lVar11 + lVar12) =
                 dVar16 * local_108 * -1.0 +
                 dVar21 * dStack_110 + dVar15 * local_118 * 1.0 + dVar14 * dStack_100;
            ((double *)(lVar11 + lVar12))[1] =
                 dVar14 * local_108 * 1.0 +
                 dVar15 * dStack_110 + dVar21 * local_118 * -1.0 + dVar16 * dStack_100;
            pdVar10 = (double *)(lVar11 + 0x10 + lVar12);
            *pdVar10 = dVar15 * local_108 * 1.0 +
                       ((local_118 * dVar16 * 1.0 + dStack_100 * dVar21) - dVar14 * dStack_110);
            pdVar10[1] = dVar21 * local_108 * -1.0 +
                         ((local_118 * dVar14 * -1.0 + dStack_100 * dVar15) - dVar16 * dStack_110);
            dVar18 = dVar18 - local_128;
            dVar20 = dVar20 - dStack_120;
            dVar16 = *(double *)(lVar11 + 0x30 + lVar12) - local_138;
            dVar15 = dStack_110 * dVar16 - dVar20 * local_108;
            dVar15 = dVar15 + dVar15;
            dVar14 = local_118 * dVar20 - dVar18 * dStack_110;
            dVar14 = dVar14 + dVar14;
            dVar21 = local_108 * dVar18 - dVar16 * local_118;
            dVar21 = dVar21 + dVar21;
            pdVar10 = (double *)(lVar11 + 0x20 + lVar12);
            *pdVar10 = (dStack_110 * dVar14 - dVar21 * local_108) + dVar15 * dStack_100 + dVar18 +
                       local_128;
            pdVar10[1] = (local_108 * dVar15 - dVar14 * local_118) + dStack_100 * dVar21 + dVar20 +
                         dVar17;
            pdVar10 = (double *)(lVar11 + 0x30 + lVar12);
            *pdVar10 = (local_118 * dVar21 - dVar15 * dStack_110) + dStack_100 * dVar14 + dVar16 +
                       local_138;
            pdVar10[1] = 0.0;
            lVar9 = lVar9 + 0x68;
          } while ((longlong)iVar7 * 0x68 - lVar9 != 0);
        }
        uVar6 = CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
        goto LAB_14988615a;
      }
    }
  }
  uVar6 = 0;
LAB_14988615a:
  if ((local_c0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1498865c8 FUN_1498865c8 body=909 status=ok
// SIG undefined FUN_1498865c8(void)

void FUN_1498865c8(longlong param_1,longlong *param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  undefined1 auStack_128 [32];
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (1 < *(int *)(param_1 + 0x10)) {
    lVar14 = 1;
    lVar15 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 8);
      lVar6 = *param_2;
      lVar12 = (longlong)*(int *)(lVar5 + 0x84 + lVar15) * 0x60;
      lVar11 = (longlong)*(int *)(lVar5 + 0x1c + lVar15) * 0x60;
      pdVar13 = (double *)(lVar6 + 0x20 + lVar12);
      local_b8 = *(double *)(lVar6 + 0x30 + lVar12) - *(double *)(lVar6 + 0x30 + lVar11);
      pdVar1 = (double *)(lVar6 + 0x20 + lVar11);
      local_c8 = *pdVar13 - *pdVar1;
      dStack_c0 = pdVar13[1] - pdVar1[1];
      dVar16 = local_b8 * local_b8 + local_c8 * local_c8 + dStack_c0 * dStack_c0;
      if ((dVar16 != 1.0) || (NAN(dVar16))) {
        if (9.99999993922529e-09 <= dVar16) {
          dVar16 = 1.0 / SQRT(dVar16);
          local_b8 = local_b8 * dVar16;
          dStack_c0 = dStack_c0 * dVar16;
          local_c8 = dVar16 * local_c8;
        }
        else {
          local_b8 = DAT_14c8464f0;
          local_c8 = DAT_14c8464e0;
          dStack_c0 = DAT_14c8464e8;
        }
      }
      local_d8 = *(double *)(lVar5 + 0x78 + lVar15) - *(double *)(lVar5 + 0x10 + lVar15);
      dStack_e0 = *(double *)(lVar5 + 0x70 + lVar15) - *(double *)(lVar5 + 8 + lVar15);
      local_e8 = *(double *)(lVar5 + 0x68 + lVar15) - *(double *)(lVar5 + lVar15);
      dVar16 = local_d8 * local_d8 + local_e8 * local_e8 + dStack_e0 * dStack_e0;
      if ((dVar16 != 1.0) || (NAN(dVar16))) {
        if (9.99999993922529e-09 <= dVar16) {
          dVar16 = 1.0 / SQRT(dVar16);
          local_d8 = local_d8 * dVar16;
          dStack_e0 = dStack_e0 * dVar16;
          local_e8 = local_e8 * dVar16;
        }
        else {
          local_d8 = DAT_14c8464f0;
          local_e8 = DAT_14c8464e0;
          dStack_e0 = DAT_14c8464e8;
        }
      }
      pdVar13 = (double *)(lVar6 + lVar11);
      FUN_144a9d448(&local_108,&local_c8,&local_e8);
      dVar16 = *pdVar13;
      dVar7 = pdVar13[1];
      dVar8 = pdVar13[2];
      dVar9 = pdVar13[3];
      *pdVar13 = dVar7 * local_f8 * -1.0 +
                 dVar8 * local_100 + dVar9 * local_108 * 1.0 + dVar16 * local_f0;
      pdVar13[1] = dVar16 * local_f8 * 1.0 +
                   dVar9 * local_100 + dVar8 * local_108 * -1.0 + dVar7 * local_f0;
      pdVar13[2] = dVar9 * local_f8 * 1.0 +
                   ((local_108 * dVar7 * 1.0 + local_f0 * dVar8) - dVar16 * local_100);
      pdVar13[3] = dVar8 * local_f8 * -1.0 +
                   ((local_108 * dVar16 * -1.0 + local_f0 * dVar9) - dVar7 * local_100);
      lVar14 = lVar14 + 1;
      lVar15 = lVar15 + 0x68;
    } while (lVar14 < *(int *)(param_1 + 0x10));
    if (1 < *(int *)(param_1 + 0x10)) {
      lVar14 = 1;
      lVar15 = 0x84;
      do {
        lVar5 = *(longlong *)(param_1 + 8);
        lVar6 = *param_2;
        lVar11 = (longlong)*(int *)(lVar5 + lVar15) * 0x60;
        puVar2 = (undefined8 *)(lVar5 + -0x1c + lVar15);
        uVar10 = puVar2[1];
        uVar4 = *(undefined8 *)(lVar5 + -0xc + lVar15);
        puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar11);
        *puVar3 = *puVar2;
        puVar3[1] = uVar10;
        puVar2 = (undefined8 *)(lVar6 + 0x30 + lVar11);
        *puVar2 = uVar4;
        puVar2[1] = 0;
        lVar14 = lVar14 + 1;
        lVar15 = lVar15 + 0x68;
      } while (lVar14 < *(int *)(param_1 + 0x10));
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149886956 FUN_149886956 body=258 status=ok
// SIG undefined FUN_149886956(void)

void FUN_149886956(longlong *param_1,double *param_2)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  pdVar1 = (double *)*param_1;
  dVar5 = param_2[2] - pdVar1[2];
  dVar9 = param_2[1] - pdVar1[1];
  dVar7 = *param_2 - *pdVar1;
  dVar11 = dVar5 * dVar5 + dVar7 * dVar7 + dVar9 * dVar9;
  if (((dVar11 != 1.0) || (dVar6 = dVar5, dVar8 = dVar7, dVar10 = dVar9, NAN(dVar11))) &&
     (dVar6 = DAT_14c8464f0, dVar8 = DAT_14c8464e0, dVar10 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar11)) {
    dVar11 = 1.0 / SQRT(dVar11);
    dVar6 = dVar5 * dVar11;
    dVar8 = dVar7 * dVar11;
    dVar10 = dVar9 * dVar11;
  }
  if (1 < (int)param_1[1]) {
    lVar3 = 1;
    lVar4 = 0x80;
    do {
      lVar2 = *param_1;
      dVar5 = (double)*(float *)(lVar2 + lVar4);
      *(double *)(lVar2 + -0x18 + lVar4) = dVar5 * dVar8 + *(double *)(lVar2 + -0x80 + lVar4);
      *(double *)(lVar2 + -0x10 + lVar4) = dVar10 * dVar5 + *(double *)(lVar2 + -0x78 + lVar4);
      *(double *)(lVar2 + -8 + lVar4) = dVar6 * dVar5 + *(double *)(lVar2 + -0x70 + lVar4);
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x68;
    } while (lVar3 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 149886a58 FUN_149886a58 body=1824 status=ok
// SIG undefined FUN_149886a58(void)

void FUN_149886a58(longlong *param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  longlong lVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_138 [32];
  double local_118;
  float local_10c;
  undefined1 local_108 [16];
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  pdVar1 = (double *)*param_1;
  pdVar1[0x1c] = param_2[2];
  dVar12 = param_2[1];
  pdVar1[0x1a] = *param_2;
  pdVar1[0x1b] = dVar12;
  dVar14 = pdVar1[0x1c] - pdVar1[2];
  dVar13 = pdVar1[0x1b] - pdVar1[1];
  dVar12 = pdVar1[0x1a] - *pdVar1;
  fVar19 = *(float *)(*param_1 + 0x80);
  fVar18 = (float)SQRT(dVar14 * dVar14 + dVar12 * dVar12 + dVar13 * dVar13);
  fVar10 = (fVar19 + fVar19) * fVar18;
  fVar20 = 0.0;
  if (1e-08 < ABS(fVar10)) {
    fVar20 = *(float *)(*param_1 + 0xe8);
    fVar20 = ((fVar19 * fVar19 + fVar18 * fVar18) - fVar20 * fVar20) / fVar10;
  }
  fVar10 = fVar20;
  if (1.0 <= fVar20) {
    fVar10 = 1.0;
  }
  local_10c = acosf((float)(~-(uint)(fVar20 < -1.0) & (uint)fVar10 |
                           -(uint)(fVar20 < -1.0) & 0xbf800000));
  local_108 = ZEXT416((uint)fVar19);
  dVar8 = DAT_14c8464f0;
  dVar9 = DAT_14c8464e8;
  dVar15 = DAT_14c8464e0;
  if (1e-08 < ABS(fVar18)) {
    dVar15 = 1.0 / (double)fVar18;
    dVar8 = dVar14 * dVar15;
    dVar9 = dVar13 * dVar15;
    dVar15 = dVar12 * dVar15;
  }
  dVar11 = pdVar1[0xf] - pdVar1[2];
  dVar12 = pdVar1[0xe] - pdVar1[1];
  dVar17 = pdVar1[0xd] - *pdVar1;
  dVar13 = dVar11 * dVar8 + dVar17 * dVar15 + dVar9 * dVar12;
  dVar14 = pdVar1[0xf] - (dVar8 * dVar13 + pdVar1[2]);
  dVar6 = pdVar1[0xe] - (dVar9 * dVar13 + pdVar1[1]);
  dVar13 = pdVar1[0xd] - (dVar13 * dVar15 + *pdVar1);
  dVar16 = dVar14 * dVar14 + dVar13 * dVar13 + dVar6 * dVar6;
  if (((dVar16 != 1.0) || (dVar4 = dVar14, dVar7 = dVar6, dVar5 = dVar13, NAN(dVar16))) &&
     (dVar4 = DAT_14c8464f0, dVar7 = DAT_14c8464e8, dVar5 = DAT_14c8464e0,
     9.999999747378752e-05 <= dVar16)) {
    dVar16 = 1.0 / SQRT(dVar16);
    dVar4 = dVar14 * dVar16;
    dVar7 = dVar6 * dVar16;
    dVar5 = dVar13 * dVar16;
  }
  dVar13 = *param_3;
  dVar14 = param_3[1];
  if ((dVar13 == DAT_14c8464e0) && (!NAN(dVar13) && !NAN(DAT_14c8464e0))) {
    if ((dVar14 == DAT_14c8464e8) && (!NAN(dVar14) && !NAN(DAT_14c8464e8))) {
      if ((param_3[2] == DAT_14c8464f0) && (!NAN(param_3[2]) && !NAN(DAT_14c8464f0)))
      goto LAB_149886e8b;
    }
  }
  if ((dVar15 == DAT_14c8464e0) && (!NAN(dVar15) && !NAN(DAT_14c8464e0))) {
    if ((dVar9 == DAT_14c8464e8) && (!NAN(dVar9) && !NAN(DAT_14c8464e8))) {
      if ((dVar8 == DAT_14c8464f0) && (!NAN(dVar8) && !NAN(DAT_14c8464f0))) goto LAB_149886e8b;
    }
  }
  local_118 = dVar14;
  if (1e-08 < ABS(fVar19)) {
    dVar6 = 1.0 / (double)fVar19;
    bVar3 = true;
    if ((dVar5 == DAT_14c8464e0) && (!NAN(dVar5) && !NAN(DAT_14c8464e0))) {
      if ((dVar7 == DAT_14c8464e8) && (!NAN(dVar7) && !NAN(DAT_14c8464e8))) {
        bVar3 = DAT_14c8464f0 != dVar4;
      }
    }
    lVar2 = *param_1;
    if ((0.99 <= (float)(dVar11 * dVar6 * dVar8 + dVar6 * dVar17 * dVar15 + dVar12 * dVar6 * dVar9))
       || (!bVar3)) {
      if ((*(double *)(lVar2 + 0xa0) != DAT_14c8464e0) ||
         ((((NAN(*(double *)(lVar2 + 0xa0)) || NAN(DAT_14c8464e0) ||
            (*(double *)(lVar2 + 0xa8) != DAT_14c8464e8)) ||
           (NAN(*(double *)(lVar2 + 0xa8)) || NAN(DAT_14c8464e8))) ||
          ((*(double *)(lVar2 + 0xb0) != DAT_14c8464f0 ||
           (NAN(*(double *)(lVar2 + 0xb0)) || NAN(DAT_14c8464f0))))))) {
        local_c8 = dVar13 * dVar9 - dVar15 * dVar14;
        local_d0 = param_3[2] * dVar15 - dVar8 * dVar13;
        local_d8 = dVar14 * dVar8 - param_3[2] * dVar9;
        FUN_144a9d448(&local_f8,lVar2 + 0xb8);
        dVar12 = *(double *)(lVar2 + 0xa0);
        dVar13 = *(double *)(lVar2 + 0xa8);
        dVar14 = *(double *)(lVar2 + 0xb0);
        dVar11 = local_f0 * dVar14 - dVar13 * local_e8;
        dVar11 = dVar11 + dVar11;
        dVar6 = local_f8 * dVar13 - dVar12 * local_f0;
        dVar6 = dVar6 + dVar6;
        dVar17 = local_e8 * dVar12 - dVar14 * local_f8;
        dVar17 = dVar17 + dVar17;
        dVar4 = (local_f8 * dVar17 - dVar11 * local_f0) + local_e0 * dVar6 + dVar14;
        dVar7 = (local_e8 * dVar11 - dVar6 * local_f8) + local_e0 * dVar17 + dVar13;
        dVar5 = (local_f0 * dVar6 - dVar17 * local_e8) + dVar11 * local_e0 + dVar12;
        fVar19 = (float)local_108._0_4_;
      }
    }
    else {
      *(double *)(lVar2 + 0xa0) = dVar5;
      *(double *)(lVar2 + 0xa8) = dVar7;
      *(double *)(lVar2 + 0xb0) = dVar4;
      dVar12 = *param_3;
      dVar13 = param_3[1];
      dVar14 = param_3[2];
      *(double *)(lVar2 + 0xb8) = dVar13 * dVar8 - dVar14 * dVar9;
      *(double *)(lVar2 + 0xc0) = dVar14 * dVar15 - dVar8 * dVar12;
      *(double *)(lVar2 + 200) = dVar12 * dVar9 - dVar15 * dVar13;
    }
  }
LAB_149886e8b:
  dVar12 = (double)fVar20;
  fVar10 = sinf(local_10c);
  dVar13 = (double)fVar10;
  dVar14 = (double)fVar19;
  pdVar1[0xd] = (dVar5 * dVar13 + dVar15 * dVar12) * dVar14 + *pdVar1;
  pdVar1[0xe] = (dVar7 * dVar13 + dVar9 * dVar12) * dVar14 + pdVar1[1];
  pdVar1[0xf] = (dVar4 * dVar13 + dVar8 * dVar12) * dVar14 + pdVar1[2];
  if ((local_c0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149887179 FUN_149887179 body=827 status=ok
// SIG undefined FUN_149887179(void)

void FUN_149887179(double *param_1,longlong *param_2,double *param_3,double *param_4)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  dVar6 = param_4[2] - param_3[2];
  dVar10 = param_4[1] - param_3[1];
  dVar8 = *param_4 - *param_3;
  dVar5 = dVar6 * dVar6 + dVar8 * dVar8 + dVar10 * dVar10;
  if (((dVar5 != 1.0) || (dVar7 = dVar6, dVar9 = dVar8, dVar11 = dVar10, NAN(dVar5))) &&
     (dVar7 = DAT_14c8464f0, dVar9 = DAT_14c8464e0, dVar11 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar5)) {
    dVar5 = 1.0 / SQRT(dVar5);
    dVar7 = dVar6 * dVar5;
    dVar9 = dVar8 * dVar5;
    dVar11 = dVar10 * dVar5;
  }
  if (1 < (longlong)(int)param_2[1]) {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      dVar10 = *(double *)(lVar1 + 0x78 + lVar4) - param_3[2];
      dVar6 = *(double *)(lVar1 + 0x70 + lVar4) - param_3[1];
      dVar8 = *(double *)(lVar1 + 0x68 + lVar4) - *param_3;
      dVar5 = dVar10 * dVar10 + dVar8 * dVar8 + dVar6 * dVar6;
      if ((dVar5 != 1.0) || (NAN(dVar5))) {
        uVar12 = SUB84(DAT_14c8464f0,0);
        uVar13 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        dVar2 = DAT_14c8464e8;
        dVar3 = DAT_14c8464e0;
        if (9.99999993922529e-09 <= dVar5) {
          dVar5 = 1.0 / SQRT(dVar5);
          dVar10 = dVar10 * dVar5;
          dVar6 = dVar6 * dVar5;
          dVar8 = dVar8 * dVar5;
          goto LAB_149887303;
        }
      }
      else {
LAB_149887303:
        uVar12 = SUB84(dVar10,0);
        uVar13 = (undefined4)((ulonglong)dVar10 >> 0x20);
        dVar2 = dVar6;
        dVar3 = dVar8;
      }
      dVar5 = dVar9 * dVar2 + dVar3 * -dVar11;
      dVar8 = (double)CONCAT44(uVar13,uVar12) * -dVar9 + dVar7 * dVar3;
      dVar6 = dVar2 * -dVar7 + dVar11 * (double)CONCAT44(uVar13,uVar12);
      dVar10 = dVar5 * dVar5 + dVar6 * dVar6 + dVar8 * dVar8;
      if (9.99999993922529e-09 < dVar10) {
        dVar10 = 1.0 / SQRT(dVar10);
        *param_1 = dVar6 * dVar10;
        param_1[1] = dVar8 * dVar10;
        param_1[2] = dVar5 * dVar10;
        return;
      }
      lVar4 = lVar4 + 0x68;
    } while ((longlong)(int)param_2[1] * 0x68 + -0x68 != lVar4);
  }
  param_1[2] = DAT_14c8462d0;
  dVar5 = DAT_14c8462c8;
  *param_1 = DAT_14c8462c0;
  param_1[1] = dVar5;
  return;
}



// FUNCTION 1498874b4 FUN_1498874b4 body=903 status=ok
// SIG undefined FUN_1498874b4(void)

void FUN_1498874b4(longlong *param_1,uint param_2,float param_3)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  
  if ((0 < (int)param_2) && ((int)param_2 < (int)param_1[1] + -1)) {
    lVar2 = *param_1;
    lVar8 = (ulonglong)param_2 * 0x68;
    pdVar1 = (double *)(lVar2 + lVar8);
    dVar14 = *(double *)(lVar2 + 0x10 + lVar8);
    dVar4 = *(double *)(lVar2 + 0x78 + lVar8) - dVar14;
    dVar16 = *(double *)(lVar2 + 8 + lVar8);
    dVar10 = *(double *)(lVar2 + 0x70 + lVar8) - dVar16;
    dVar3 = *(double *)(lVar2 + 0x68 + lVar8) - *(double *)(lVar2 + lVar8);
    dVar13 = dVar4 * dVar4 + dVar3 * dVar3 + dVar10 * dVar10;
    if (((dVar13 != 1.0) || (dVar5 = dVar4, dVar6 = dVar10, dVar7 = dVar3, NAN(dVar13))) &&
       (dVar5 = DAT_14c8464f0, dVar6 = DAT_14c8464e8, dVar7 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar13)) {
      dVar13 = 1.0 / SQRT(dVar13);
      dVar5 = dVar4 * dVar13;
      dVar6 = dVar10 * dVar13;
      dVar7 = dVar3 * dVar13;
    }
    dVar10 = pdVar1[4] * dVar6 - dVar7 * pdVar1[5];
    dVar4 = pdVar1[6] * dVar7 - dVar5 * pdVar1[4];
    dVar3 = pdVar1[5] * dVar5 - pdVar1[6] * dVar6;
    dVar14 = pdVar1[-0xb] - dVar14;
    dVar16 = pdVar1[-0xc] - dVar16;
    dVar11 = pdVar1[-0xd] - *(double *)(lVar2 + lVar8);
    dVar13 = dVar14 * dVar14 + dVar11 * dVar11 + dVar16 * dVar16;
    if (((dVar13 != 1.0) || (dVar12 = dVar11, dVar15 = dVar14, dVar17 = dVar16, NAN(dVar13))) &&
       (dVar12 = DAT_14c8464e0, dVar15 = DAT_14c8464f0, dVar17 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar13)) {
      dVar13 = 1.0 / SQRT(dVar13);
      dVar12 = dVar11 * dVar13;
      dVar15 = dVar14 * dVar13;
      dVar17 = dVar16 * dVar13;
    }
    fVar18 = (float)(dVar15 * dVar5 + dVar12 * dVar7 + dVar6 * dVar17);
    if (((float)(dVar15 * dVar10 + dVar12 * dVar3 + dVar17 * dVar4) < 0.0) ||
       (fVar9 = cosf(param_3), fVar9 < fVar18)) {
      if (fVar18 <= 0.0) {
        dVar10 = (double)*(float *)(pdVar1 + 3);
        dVar14 = pdVar1[2] - dVar5 * dVar10;
        dVar16 = *pdVar1 - dVar7 * dVar10;
        dVar10 = pdVar1[1] - dVar6 * dVar10;
      }
      else {
        fVar18 = cosf(param_3);
        dVar16 = (double)fVar18;
        fVar18 = sinf(param_3);
        dVar13 = (double)fVar18;
        dVar11 = (double)*(float *)(pdVar1 + 3);
        dVar14 = (dVar10 * dVar13 + dVar5 * dVar16) * dVar11 + pdVar1[2];
        dVar10 = (dVar4 * dVar13 + dVar6 * dVar16) * dVar11 + pdVar1[1];
        dVar16 = (dVar3 * dVar13 + dVar7 * dVar16) * dVar11 + *pdVar1;
      }
      pdVar1[-0xd] = dVar16;
      pdVar1[-0xc] = dVar10;
      pdVar1[-0xb] = dVar14;
    }
  }
  return;
}



// FUNCTION 14988783b FUN_14988783b body=943 status=ok
// SIG undefined FUN_14988783b(void)

void FUN_14988783b(longlong *param_1,uint param_2,float param_3)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  
  if ((0 < (int)param_2) && ((int)param_2 < (int)param_1[1] + -1)) {
    lVar2 = *param_1;
    lVar8 = (ulonglong)param_2 * 0x68;
    pdVar1 = (double *)(lVar2 + lVar8);
    dVar14 = *(double *)(lVar2 + 0x10 + lVar8);
    dVar4 = *(double *)(lVar2 + -0x58 + lVar8) - dVar14;
    dVar16 = *(double *)(lVar2 + 8 + lVar8);
    dVar3 = *(double *)(lVar2 + -0x60 + lVar8) - dVar16;
    dVar11 = *(double *)(lVar2 + -0x68 + lVar8) - *(double *)(lVar2 + lVar8);
    dVar13 = dVar4 * dVar4 + dVar11 * dVar11 + dVar3 * dVar3;
    if (((dVar13 != 1.0) || (dVar5 = dVar4, dVar6 = dVar3, dVar7 = dVar11, NAN(dVar13))) &&
       (dVar5 = DAT_14c8464f0, dVar6 = DAT_14c8464e8, dVar7 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar13)) {
      dVar13 = 1.0 / SQRT(dVar13);
      dVar5 = dVar4 * dVar13;
      dVar6 = dVar3 * dVar13;
      dVar7 = dVar11 * dVar13;
    }
    dVar11 = pdVar1[4] * dVar6 - dVar7 * pdVar1[5];
    dVar4 = pdVar1[6] * dVar7 - dVar5 * pdVar1[4];
    dVar3 = pdVar1[5] * dVar5 - pdVar1[6] * dVar6;
    dVar14 = pdVar1[0xf] - dVar14;
    dVar16 = pdVar1[0xe] - dVar16;
    dVar13 = pdVar1[0xd] - *(double *)(lVar2 + lVar8);
    dVar12 = dVar14 * dVar14 + dVar13 * dVar13 + dVar16 * dVar16;
    if (((dVar12 != 1.0) || (dVar10 = dVar13, dVar15 = dVar14, dVar17 = dVar16, NAN(dVar12))) &&
       (dVar10 = DAT_14c8464e0, dVar15 = DAT_14c8464f0, dVar17 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar12)) {
      dVar12 = 1.0 / SQRT(dVar12);
      dVar10 = dVar13 * dVar12;
      dVar15 = dVar14 * dVar12;
      dVar17 = dVar16 * dVar12;
    }
    fVar18 = (float)(dVar15 * dVar5 + dVar10 * dVar7 + dVar6 * dVar17);
    fVar9 = cosf(param_3);
    if ((0.0 < (float)(dVar15 * dVar11 + dVar10 * dVar3 + dVar17 * dVar4)) || (fVar9 < fVar18)) {
      if (fVar18 <= 0.0) {
        dVar14 = (double)*(float *)(pdVar1 + 0x10);
        dVar11 = pdVar1[2] - dVar5 * dVar14;
        dVar16 = *pdVar1 - dVar7 * dVar14;
        dVar14 = pdVar1[1] - dVar6 * dVar14;
      }
      else {
        fVar18 = sinf(param_3);
        dVar12 = (double)fVar9;
        dVar16 = (double)fVar18;
        dVar13 = (double)*(float *)(pdVar1 + 0x10);
        dVar11 = (dVar5 * dVar12 - dVar11 * dVar16) * dVar13 + pdVar1[2];
        dVar14 = (dVar6 * dVar12 - dVar4 * dVar16) * dVar13 + pdVar1[1];
        dVar16 = (dVar7 * dVar12 - dVar3 * dVar16) * dVar13 + *pdVar1;
      }
      pdVar1[0xd] = dVar16;
      pdVar1[0xe] = dVar14;
      pdVar1[0xf] = dVar11;
    }
  }
  return;
}



// FUNCTION 149887bea FUN_149887bea body=711 status=ok
// SIG undefined FUN_149887bea(void)

void FUN_149887bea(longlong *param_1,double *param_2,float param_3,char param_4,undefined4 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  double *pdVar7;
  double *pdVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  
  uVar4 = *(uint *)(param_1 + 1);
  lVar10 = *param_1;
  lVar6 = (longlong)(int)(uVar4 - 1) * 0x68;
  dVar1 = *(double *)(lVar10 + 0x10 + lVar6);
  dVar12 = param_2[2] - dVar1;
  dVar2 = *(double *)(lVar10 + lVar6);
  dVar3 = *(double *)(lVar10 + 8 + lVar6);
  dVar15 = param_2[1] - dVar3;
  dVar14 = *param_2 - dVar2;
  fVar17 = (float)SQRT(dVar12 * dVar12 + dVar14 * dVar14 + dVar15 * dVar15);
  dVar13 = DAT_14c8464f0;
  dVar16 = DAT_14c8464e8;
  dVar18 = DAT_14c8464e0;
  if (1e-08 < fVar17) {
    dVar18 = (double)(1.0 / fVar17);
    dVar13 = dVar12 * dVar18;
    dVar16 = dVar15 * dVar18;
    dVar18 = dVar14 * dVar18;
  }
  pdVar7 = (double *)(lVar6 + lVar10);
  if (1 < (int)uVar4) {
    uVar9 = (ulonglong)uVar4 + 1;
    pdVar8 = (double *)(lVar10 + (ulonglong)uVar4 * 0x68 + -0x58);
    do {
      fVar19 = (float)((*pdVar8 - dVar1) * dVar13 +
                      (pdVar8[-2] - dVar2) * dVar18 + (pdVar8[-1] - dVar3) * dVar16);
      uVar11 = -(uint)(0.0 < fVar19);
      fVar19 = fVar19 * param_3;
      fVar20 = fVar17;
      if (fVar19 <= fVar17) {
        fVar20 = fVar19;
      }
      fVar17 = (float)(~uVar11 & (uint)fVar17 | (uint)fVar20 & uVar11);
      uVar9 = uVar9 - 1;
      pdVar8 = pdVar8 + -0xd;
    } while (2 < uVar9);
  }
  dVar14 = (double)fVar17;
  *pdVar7 = dVar2 + dVar18 * dVar14;
  pdVar7[1] = dVar3 + dVar16 * dVar14;
  pdVar7[2] = dVar1 + dVar13 * dVar14;
  if (2 < (int)uVar4) {
    lVar10 = (ulonglong)(uVar4 - 2) * 0x68;
    uVar9 = (ulonglong)(uVar4 - 2);
    do {
      lVar6 = *param_1;
      dVar1 = *(double *)(lVar6 + 0x78 + lVar10);
      dVar18 = *(double *)(lVar6 + 0x10 + lVar10) - dVar1;
      dVar2 = *(double *)(lVar6 + 0x70 + lVar10);
      dVar13 = *(double *)(lVar6 + 8 + lVar10) - dVar2;
      dVar3 = *(double *)(lVar6 + 0x68 + lVar10);
      dVar16 = *(double *)(lVar6 + lVar10) - dVar3;
      dVar14 = 1.0 / SQRT(dVar18 * dVar18 + dVar16 * dVar16 + dVar13 * dVar13);
      dVar12 = (double)*(float *)(lVar6 + 0x80 + lVar10);
      *(double *)(lVar6 + lVar10) = dVar14 * dVar16 * dVar12 + dVar3;
      *(double *)(lVar6 + 8 + lVar10) = dVar13 * dVar14 * dVar12 + dVar2;
      *(double *)(lVar6 + 0x10 + lVar10) = dVar18 * dVar14 * dVar12 + dVar1;
      if (param_4 != '\0') {
        FUN_1498874b4(param_1,uVar9 & 0xffffffff,param_5);
      }
      lVar10 = lVar10 + -0x68;
      bVar5 = 1 < (longlong)uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar5);
  }
  return;
}



// FUNCTION 149887eb1 FUN_149887eb1 body=689 status=ok
// SIG undefined FUN_149887eb1(void)

void FUN_149887eb1(longlong *param_1,double *param_2,float param_3,char param_4,undefined4 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double *pdVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  
  pdVar5 = (double *)*param_1;
  dVar1 = pdVar5[2];
  dVar10 = param_2[2] - dVar1;
  dVar2 = *pdVar5;
  dVar3 = pdVar5[1];
  dVar13 = param_2[1] - dVar3;
  dVar12 = *param_2 - dVar2;
  fVar15 = (float)SQRT(dVar10 * dVar10 + dVar12 * dVar12 + dVar13 * dVar13);
  iVar4 = (int)param_1[1];
  dVar11 = DAT_14c8464f0;
  dVar14 = DAT_14c8464e8;
  dVar16 = DAT_14c8464e0;
  if (1e-08 < fVar15) {
    dVar16 = (double)(1.0 / fVar15);
    dVar11 = dVar10 * dVar16;
    dVar14 = dVar13 * dVar16;
    dVar16 = dVar12 * dVar16;
  }
  if (1 < iVar4) {
    lVar8 = 0;
    do {
      fVar17 = (float)((*(double *)((longlong)pdVar5 + lVar8 + 0x10) - dVar1) * dVar11 +
                      (*(double *)((longlong)pdVar5 + lVar8) - dVar2) * dVar16 +
                      (*(double *)((longlong)pdVar5 + lVar8 + 8) - dVar3) * dVar14);
      uVar9 = -(uint)(0.0 < fVar17);
      fVar17 = fVar17 * param_3;
      fVar18 = fVar15;
      if (fVar17 <= fVar15) {
        fVar18 = fVar17;
      }
      fVar15 = (float)(~uVar9 & (uint)fVar15 | (uint)fVar18 & uVar9);
      lVar8 = lVar8 + 0x68;
    } while ((ulonglong)(iVar4 - 1) * 0x68 - lVar8 != 0);
  }
  dVar12 = (double)fVar15;
  *pdVar5 = dVar2 + dVar16 * dVar12;
  pdVar5[1] = dVar3 + dVar14 * dVar12;
  pdVar5[2] = dVar1 + dVar11 * dVar12;
  if (2 < iVar4) {
    uVar7 = 1;
    lVar8 = 0x68;
    do {
      lVar6 = *param_1;
      dVar1 = *(double *)(lVar6 + -0x58 + lVar8);
      dVar16 = *(double *)(lVar6 + 0x10 + lVar8) - dVar1;
      dVar2 = *(double *)(lVar6 + -0x68 + lVar8);
      dVar3 = *(double *)(lVar6 + -0x60 + lVar8);
      dVar11 = *(double *)(lVar6 + 8 + lVar8) - dVar3;
      dVar14 = *(double *)(lVar6 + lVar8) - dVar2;
      dVar12 = 1.0 / SQRT(dVar16 * dVar16 + dVar14 * dVar14 + dVar11 * dVar11);
      dVar10 = (double)*(float *)(lVar6 + 0x18 + lVar8);
      *(double *)(lVar6 + lVar8) = dVar12 * dVar14 * dVar10 + dVar2;
      *(double *)(lVar6 + 8 + lVar8) = dVar11 * dVar12 * dVar10 + dVar3;
      *(double *)(lVar6 + 0x10 + lVar8) = dVar16 * dVar12 * dVar10 + dVar1;
      if (param_4 != '\0') {
        FUN_14988783b(param_1,uVar7 & 0xffffffff,param_5);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x68;
    } while (iVar4 - 1 != uVar7);
  }
  return;
}



// FUNCTION 149888162 FUN_149888162 body=2364 status=ok
// SIG undefined FUN_149888162(void)

void FUN_149888162(longlong *param_1,double *param_2,float param_3,int param_4,byte param_5,
                  undefined4 param_6,undefined4 param_7,float param_8,char param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  void *pvVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double *pdVar9;
  ulonglong uVar10;
  longlong lVar11;
  void **unaff_RBX;
  int iVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  ulonglong local_150;
  int local_144;
  double *local_140;
  longlong local_138;
  void *local_130;
  int local_128;
  undefined4 local_124;
  void *local_120;
  int local_118;
  undefined4 uStack_114;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_150 = (ulonglong)*(uint *)(param_1 + 1);
  if (param_3 <= 0.0001) {
    param_3 = 0.0001;
  }
  pdVar9 = (double *)*param_1;
  local_f8 = pdVar9[2];
  local_108 = *pdVar9;
  dStack_100 = pdVar9[1];
  lVar11 = (longlong)(int)(*(uint *)(param_1 + 1) - 1);
  dVar15 = *param_2 - pdVar9[lVar11 * 0xd];
  dVar14 = param_2[1] - pdVar9[lVar11 * 0xd + 1];
  dVar16 = param_2[2] - pdVar9[lVar11 * 0xd + 2];
  fVar21 = (float)SQRT(dVar16 * dVar16 + dVar14 * dVar14 + dVar15 * dVar15);
  local_144 = param_4;
  if ((fVar21 <= param_3 & (param_5 ^ 1)) == 0) {
    if (param_5 != 0) {
      FUN_149887179(&local_120,param_1,&local_108,param_2);
      if (2 < (int)local_150) {
        dVar15 = -(double)CONCAT44(uStack_114,local_118);
        lVar11 = (ulonglong)((int)local_150 - 2) * 0x68;
        uVar10 = (ulonglong)((int)local_150 - 2) + 1;
        do {
          lVar4 = *param_1;
          dVar14 = *(double *)(lVar4 + 0x10 + lVar11);
          dVar7 = *(double *)(lVar4 + 0x78 + lVar11) - dVar14;
          dVar16 = *(double *)(lVar4 + 8 + lVar11);
          dVar19 = *(double *)(lVar4 + 0x70 + lVar11) - dVar16;
          dVar1 = *(double *)(lVar4 + 0x68 + lVar11) - *(double *)(lVar4 + lVar11);
          dVar18 = dVar7 * dVar7 + dVar1 * dVar1 + dVar19 * dVar19;
          if (((dVar18 != 1.0) || (dVar2 = dVar7, dVar3 = dVar19, dVar6 = dVar1, NAN(dVar18))) &&
             (dVar2 = DAT_14c8464f0, dVar3 = DAT_14c8464e8, dVar6 = DAT_14c8464e0,
             9.99999993922529e-09 <= dVar18)) {
            dVar18 = 1.0 / SQRT(dVar18);
            dVar2 = dVar7 * dVar18;
            dVar3 = dVar19 * dVar18;
            dVar6 = dVar1 * dVar18;
          }
          dVar14 = *(double *)(lVar4 + -0x58 + lVar11) - dVar14;
          dVar16 = *(double *)(lVar4 + -0x60 + lVar11) - dVar16;
          dVar19 = *(double *)(lVar4 + -0x68 + lVar11) - *(double *)(lVar4 + lVar11);
          dVar18 = dVar14 * dVar14 + dVar19 * dVar19 + dVar16 * dVar16;
          if (((dVar18 != 1.0) || (dVar7 = dVar14, dVar1 = dVar16, dVar8 = dVar19, NAN(dVar18))) &&
             (dVar7 = DAT_14c8464f0, dVar1 = DAT_14c8464e8, dVar8 = DAT_14c8464e0,
             9.99999993922529e-09 <= dVar18)) {
            dVar18 = 1.0 / SQRT(dVar18);
            dVar7 = dVar14 * dVar18;
            dVar1 = dVar16 * dVar18;
            dVar8 = dVar19 * dVar18;
          }
          dVar14 = (dVar3 * -local_110 + (double)CONCAT44(uStack_114,local_118) * dVar2) * dVar8 +
                   (dVar2 * -(double)local_120 + local_110 * dVar6) * dVar1 +
                   ((double)local_120 * dVar3 + dVar6 * dVar15) * dVar7;
          uVar22 = (undefined4)((ulonglong)local_110 >> 0x20);
          uVar20 = uStack_114;
          if (dVar14 <= 0.0) {
            uVar20 = (undefined4)((ulonglong)dVar15 >> 0x20);
            uVar22 = (undefined4)((ulonglong)-local_110 >> 0x20);
          }
          uVar13 = -(ulonglong)(0.0 < dVar14);
          *(ulonglong *)(lVar4 + 0x20 + lVar11) =
               ~uVar13 & (ulonglong)-(double)local_120 | uVar13 & (ulonglong)local_120;
          *(ulonglong *)(lVar4 + 0x28 + lVar11) = CONCAT44(uVar20,local_118);
          *(ulonglong *)(lVar4 + 0x30 + lVar11) = CONCAT44(uVar22,SUB84(local_110,0));
          uVar10 = uVar10 - 1;
          lVar11 = lVar11 + -0x68;
        } while (1 < uVar10);
      }
      pdVar9 = (double *)*param_1;
      lVar11 = (longlong)((int)param_1[1] + -1);
      dVar16 = param_2[2] - pdVar9[lVar11 * 0xd + 2];
      dVar14 = param_2[1] - pdVar9[lVar11 * 0xd + 1];
      dVar15 = *param_2 - pdVar9[lVar11 * 0xd];
    }
    dVar7 = local_f8;
    dVar19 = dStack_100;
    dVar18 = local_108;
    if (0 < (int)local_150) {
      dVar1 = pdVar9[2];
      dVar2 = pdVar9[1];
      dVar3 = *pdVar9;
      dVar8 = (double)param_8;
      dVar6 = (double)(1.0 - param_8);
      lVar11 = 0;
      do {
        lVar4 = *param_1;
        *(double *)(lVar4 + lVar11) =
             *(double *)(lVar4 + lVar11) + (local_108 - dVar3) * dVar6 + dVar15 * dVar8;
        *(double *)(lVar4 + 8 + lVar11) =
             *(double *)(lVar4 + 8 + lVar11) + (dStack_100 - dVar2) * dVar6 + dVar14 * dVar8;
        *(double *)(lVar4 + 0x10 + lVar11) =
             *(double *)(lVar4 + 0x10 + lVar11) + (local_f8 - dVar1) * dVar6 + dVar16 * dVar8;
        lVar11 = lVar11 + 0x68;
      } while (local_150 * 0x68 - lVar11 != 0);
    }
    local_138 = (longlong)(int)local_150;
    iVar12 = 1;
    do {
      if ((((int)local_150 < 4) || (fVar21 <= 1.0)) || (param_9 == '\0')) {
        local_158 = param_6;
        unaff_RBX = (void **)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5);
        FUN_149887bea(param_1,param_2,param_7,(ulonglong)unaff_RBX & 0xffffffff);
        local_158 = param_6;
        FUN_149887eb1(param_1,&local_108,param_7,(ulonglong)unaff_RBX & 0xffffffff);
      }
      else {
        local_120 = (void *)0x0;
        local_118 = (int)param_1[1];
        lVar11 = (longlong)local_118;
        pvVar5 = (void *)*param_1;
        if (lVar11 == 0) {
          uStack_114 = 0;
        }
        else {
          local_140 = param_2;
          FUN_14988c50c(&local_120,local_118,0);
          memcpy(local_120,pvVar5,lVar11 * 0x68);
          param_2 = local_140;
        }
        local_158 = param_6;
        FUN_149887bea(&local_120,param_2,param_7,param_5);
        local_130 = (void *)0x0;
        local_128 = (int)param_1[1];
        lVar11 = (longlong)local_128;
        pvVar5 = (void *)*param_1;
        if (lVar11 == 0) {
          local_124 = 0;
        }
        else {
          FUN_14988c50c(&local_130,local_128,0);
          memcpy(local_130,pvVar5,lVar11 * 0x68);
        }
        local_158 = param_6;
        FUN_149887eb1(&local_130,&local_108,param_7,param_5);
        lVar11 = 0x10;
        uVar10 = local_150;
        do {
          dVar15 = *(double *)((longlong)local_120 + lVar11);
          dVar14 = *(double *)((longlong)local_130 + lVar11);
          dVar16 = *(double *)((longlong)local_120 + lVar11 + -8);
          dVar1 = *(double *)((longlong)local_130 + lVar11 + -8);
          lVar4 = *param_1;
          *(double *)(lVar4 + -0x10 + lVar11) =
               (*(double *)((longlong)local_120 + lVar11 + -0x10) +
               *(double *)((longlong)local_130 + lVar11 + -0x10)) * 0.5;
          *(double *)(lVar4 + -8 + lVar11) = (dVar16 + dVar1) * 0.5;
          *(double *)(lVar4 + lVar11) = (dVar15 + dVar14) * 0.5;
          lVar11 = lVar11 + 0x68;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        if (local_130 != (void *)0x0) {
          FUN_1400020a8();
        }
        unaff_RBX = &local_130;
        if (local_120 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      pdVar9 = (double *)*param_1;
      lVar11 = (longlong)((int)param_1[1] + -1);
      dVar15 = dVar18 - *pdVar9;
      dVar14 = dVar19 - pdVar9[1];
      dVar16 = dVar7 - pdVar9[2];
      fVar17 = (float)(SQRT(dVar16 * dVar16 + dVar14 * dVar14 + dVar15 * dVar15) +
                      SQRT((param_2[2] - pdVar9[lVar11 * 0xd + 2]) *
                           (param_2[2] - pdVar9[lVar11 * 0xd + 2]) +
                           (param_2[1] - pdVar9[lVar11 * 0xd + 1]) *
                           (param_2[1] - pdVar9[lVar11 * 0xd + 1]) +
                           (*param_2 - pdVar9[lVar11 * 0xd]) * (*param_2 - pdVar9[lVar11 * 0xd])));
    } while ((fVar17 <= fVar21) &&
            (iVar12 = iVar12 + 1, fVar21 = fVar17, param_3 < fVar17 && iVar12 < local_144));
    if ((9.999999747378752e-05 < ABS(*pdVar9 - dVar18)) ||
       ((9.999999747378752e-05 < ABS(pdVar9[1] - dVar19) ||
        (9.999999747378752e-05 < ABS(pdVar9[2] - dVar7))))) {
      local_158 = param_6;
      FUN_149887eb1(param_1,&local_108,param_7,param_5);
      pdVar9 = (double *)*param_1;
    }
    dVar15 = pdVar9[local_138 * 0xd + -0xb] - pdVar9[local_138 * 0xd + -0x18];
    dVar16 = pdVar9[local_138 * 0xd + -0xc] - pdVar9[local_138 * 0xd + -0x19];
    dVar18 = pdVar9[local_138 * 0xd + -0xd] - pdVar9[local_138 * 0xd + -0x1a];
    dVar14 = 1.0 / SQRT(dVar15 * dVar15 + dVar18 * dVar18 + dVar16 * dVar16);
    dVar19 = (double)*(float *)(pdVar9 + local_138 * 0xd + -10);
    pdVar9[local_138 * 0xd + -0xd] = dVar14 * dVar18 * dVar19 + pdVar9[local_138 * 0xd + -0x1a];
    pdVar9[local_138 * 0xd + -0xc] = dVar16 * dVar14 * dVar19 + pdVar9[local_138 * 0xd + -0x19];
    pdVar9[local_138 * 0xd + -0xb] = dVar15 * dVar14 * dVar19 + pdVar9[local_138 * 0xd + -0x18];
  }
  if ((local_f0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149888abc FUN_149888abc body=134 status=ok
// SIG undefined FUN_149888abc(void)

void FUN_149888abc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar2 = (longlong)*(int *)(param_1 + 0x10) * 0xa0;
    do {
      local_48 = lVar1;
      local_40 = lVar1;
      FUN_14988eb9c(param_2,local_34,&local_48);
      lVar1 = lVar1 + 0xa0;
      lVar2 = lVar2 + -0xa0;
    } while (lVar2 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149888b58 FUN_149888b58 body=38 status=ok
// SIG undefined FUN_149888b58(void)

undefined8 FUN_149888b58(undefined8 param_1,int param_2)

{
  FUN_149889b36();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149888b7e FUN_149888b7e body=55 status=ok
// SIG undefined FUN_149888b7e(void)

void FUN_149888b7e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d968 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2d968 = FUN_140002ddd(FUN_14676942b,uVar1,L"AnimNode_IKRig");
  }
  return;
}



// FUNCTION 149888bc2 FUN_149888bc2 body=45 status=ok
// SIG undefined FUN_149888bc2(void)

longlong FUN_149888bc2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c3622c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149888bf6 FUN_149888bf6 body=41 status=ok
// SIG undefined FUN_149888bf6(void)

void FUN_149888bf6(void)

{
  FUN_140033559("..\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig/Solvers/IKRigSolver.h",
                0x1a,L"Pure virtual not implemented (%s)",L"\"Init\"");
  return;
}



// FUNCTION 149888c20 FUN_149888c20 body=41 status=ok
// SIG undefined FUN_149888c20(void)

void FUN_149888c20(void)

{
  FUN_140033559("..\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig/Solvers/IKRigSolver.h",
                0x1c,L"Pure virtual not implemented (%s)",L"\"Solve\"");
  return;
}



// FUNCTION 149888c5a FUN_149888c5a body=41 status=ok
// SIG undefined FUN_149888c5a(void)

void FUN_149888c5a(void)

{
  FUN_140033559("..\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Rig/Solvers/IKRigSolver.h",
                0x34,L"Pure virtual not implemented (%s)",L"\"RemoveGoal\"");
  return;
}



// FUNCTION 149888d30 FUN_149888d30 body=59 status=ok
// SIG undefined FUN_149888d30(void)

undefined8 FUN_149888d30(longlong *param_1)

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



// FUNCTION 149888dd2 FUN_149888dd2 body=37 status=ok
// SIG undefined FUN_149888dd2(void)

void FUN_149888dd2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x108);
  FUN_149868d64(param_2);
  return;
}



// FUNCTION 149888e00 FUN_149888e00 body=46 status=ok
// SIG undefined FUN_149888e00(void)

void FUN_149888e00(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x68) = 0;
  if (*(longlong *)(param_2 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_14988a0a6(param_2 + 0x20);
  return;
}



// FUNCTION 149888e44 FUN_149888e44 body=105 status=ok
// SIG undefined FUN_149888e44(void)

undefined8 FUN_149888e44(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0x13);
      uVar6 = *(undefined4 *)(param_3 + -0xf);
      uVar7 = *(undefined4 *)(param_3 + -0xb);
      *(undefined4 *)(param_2 + -0x17) = *(undefined4 *)(param_3 + -0x17);
      *(undefined4 *)(param_2 + -0x13) = uVar5;
      *(undefined4 *)(param_2 + -0xf) = uVar6;
      *(undefined4 *)(param_2 + -0xb) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_149888fae(param_2,param_3);
      memcpy((void *)(param_2 + 0x50),(void *)(param_3 + 0x50),0x98);
      param_3 = param_3 + 0x108;
      param_2 = param_2 + 0x108;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149888ed6 FUN_149888ed6 body=59 status=ok
// SIG undefined FUN_149888ed6(void)

undefined8 FUN_149888ed6(longlong *param_1)

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



// FUNCTION 149888f22 FUN_149888f22 body=62 status=ok
// SIG undefined FUN_149888f22(void)

void FUN_149888f22(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    *(undefined4 *)(param_2 + 0x68) = 0;
    if (*(longlong *)(param_2 + 0x60) != 0) {
      FUN_1400020a8();
    }
    FUN_14988a0a6(param_2 + 0x20);
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 149888fae FUN_149888fae body=122 status=ok
// SIG undefined FUN_149888fae(void)

longlong FUN_149888fae(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_149889028(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 149889028 FUN_149889028 body=121 status=ok
// SIG undefined FUN_149889028(void)

undefined8 * FUN_149889028(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1498890a2(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140d69980(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0xc0);
    }
  }
  return param_1;
}



// FUNCTION 1498890a2 FUN_1498890a2 body=128 status=ok
// SIG undefined FUN_1498890a2(void)

void FUN_1498890a2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1407da7e2(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 149889124 FUN_149889124 body=122 status=ok
// SIG undefined FUN_149889124(void)

longlong FUN_149889124(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_14988919e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14988919e FUN_14988919e body=123 status=ok
// SIG undefined FUN_14988919e(void)

undefined8 * FUN_14988919e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14988921a(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1457dd3c4(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0xc0);
    }
  }
  return param_1;
}



// FUNCTION 14988921a FUN_14988921a body=130 status=ok
// SIG undefined FUN_14988921a(void)

void FUN_14988921a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1457dd8f6(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14988929e FUN_14988929e body=54 status=ok
// SIG undefined FUN_14988929e(void)

void FUN_14988929e(longlong *param_1)

{
  FUN_14988921a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149889360 FUN_149889360 body=39 status=ok
// SIG undefined FUN_149889360(void)

undefined8 FUN_149889360(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1498893b0 FUN_1498893b0 body=59 status=ok
// SIG undefined FUN_1498893b0(void)

undefined8 FUN_1498893b0(longlong *param_1)

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



// FUNCTION 149889492 FUN_149889492 body=63 status=ok
// SIG undefined FUN_149889492(void)

undefined1 FUN_149889492(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1498895bc(param_2,param_3);
    param_3 = param_3 + 0x1e8;
    param_2 = param_2 + 0x1e8;
  }
  return 1;
}



// FUNCTION 1498894fa FUN_1498894fa body=59 status=ok
// SIG undefined FUN_1498894fa(void)

undefined8 FUN_1498894fa(longlong *param_1)

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



// FUNCTION 149889546 FUN_149889546 body=40 status=ok
// SIG undefined FUN_149889546(void)

void FUN_149889546(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e8) == '\x01') {
    FUN_149889b36(param_2);
    *(undefined1 *)(param_2 + 0x1e8) = 0;
  }
  return;
}



// FUNCTION 1498895bc FUN_1498895bc body=298 status=ok
// SIG undefined FUN_1498895bc(void)

longlong FUN_1498895bc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  
  FUN_145860c80();
  uVar1 = *(undefined4 *)(param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0x68);
  uVar3 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  lVar12 = *(longlong *)(param_2 + 0x70);
  if (DAT_14c950c29 == '\x01') {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 0x70);
    }
  }
  *(longlong *)(param_1 + 0x70) = lVar12;
  FUN_1498896e6(param_1 + 0x78,param_2 + 0x78);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  FUN_14123bd80(param_1 + 0x98,param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  uVar1 = *(undefined4 *)(param_2 + 0xe0);
  uVar2 = *(undefined4 *)(param_2 + 0xe4);
  uVar3 = *(undefined4 *)(param_2 + 0xe8);
  uVar4 = *(undefined4 *)(param_2 + 0xec);
  uVar5 = *(undefined4 *)(param_2 + 0xf0);
  uVar6 = *(undefined4 *)(param_2 + 0xf4);
  uVar7 = *(undefined4 *)(param_2 + 0xf8);
  uVar8 = *(undefined4 *)(param_2 + 0xfc);
  uVar9 = *(undefined4 *)(param_2 + 0x104);
  uVar10 = *(undefined4 *)(param_2 + 0x108);
  uVar11 = *(undefined4 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = uVar9;
  *(undefined4 *)(param_1 + 0x108) = uVar10;
  *(undefined4 *)(param_1 + 0x10c) = uVar11;
  *(undefined4 *)(param_1 + 0xf0) = uVar5;
  *(undefined4 *)(param_1 + 0xf4) = uVar6;
  *(undefined4 *)(param_1 + 0xf8) = uVar7;
  *(undefined4 *)(param_1 + 0xfc) = uVar8;
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0xe8) = uVar3;
  *(undefined4 *)(param_1 + 0xec) = uVar4;
  lVar12 = *(longlong *)(param_2 + 0x118);
  if (DAT_14c950c29 == '\x01') {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 0x118);
    }
  }
  *(longlong *)(param_1 + 0x118) = lVar12;
  FUN_149889740(param_1 + 0x120,param_2 + 0x120);
  FUN_149889124(param_1 + 0x130,param_2 + 0x130);
  FUN_1498898ce(param_1 + 0x180,param_2 + 0x180);
  FUN_149889798(param_1 + 0x1d0,param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  return param_1;
}



// FUNCTION 1498896e6 FUN_1498896e6 body=89 status=ok
// SIG undefined FUN_1498896e6(void)

undefined8 * FUN_1498896e6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1498897f8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xa0);
      }
    }
  }
  return param_1;
}



// FUNCTION 149889740 FUN_149889740 body=88 status=ok
// SIG undefined FUN_149889740(void)

undefined8 * FUN_149889740(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14988986c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 149889798 FUN_149889798 body=95 status=ok
// SIG undefined FUN_149889798(void)

undefined8 * FUN_149889798(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_149889a3f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_149889a7a(param_1,iVar1);
      FUN_149889adc(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1498897f8 FUN_1498897f8 body=115 status=ok
// SIG undefined FUN_1498897f8(void)

void FUN_1498897f8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,0x10);
    iVar2 = (int)(uVar1 / 0xa0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xa0,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14988986c FUN_14988986c body=98 status=ok
// SIG undefined FUN_14988986c(void)

void FUN_14988986c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1498898ce FUN_1498898ce body=122 status=ok
// SIG undefined FUN_1498898ce(void)

longlong FUN_1498898ce(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_149889948(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 149889948 FUN_149889948 body=117 status=ok
// SIG undefined FUN_149889948(void)

undefined8 * FUN_149889948(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1498899be(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_144869a3c(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 1498899be FUN_1498899be body=128 status=ok
// SIG undefined FUN_1498899be(void)

void FUN_1498899be(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 149889a3f FUN_149889a3f body=58 status=ok
// SIG undefined FUN_149889a3f(void)

void FUN_149889a3f(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 149889a7a FUN_149889a7a body=98 status=ok
// SIG undefined FUN_149889a7a(void)

void FUN_149889a7a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,0x10);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149889adc FUN_149889adc body=88 status=ok
// SIG undefined FUN_149889adc(void)

void FUN_149889adc(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x10);
    puVar4 = (undefined8 *)(param_2 + 0x20);
    do {
      lVar1 = puVar4[-4];
      puVar3[-2] = lVar1;
      *puVar3 = 0;
      if (lVar1 != 0) {
        puVar2 = (undefined8 *)puVar4[-2];
        if ((undefined8 *)puVar4[-2] == (undefined8 *)0x0) {
          puVar2 = puVar4;
        }
        (**(code **)*puVar2)(puVar2,puVar3);
      }
      puVar3 = puVar3 + 8;
      puVar4 = puVar4 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 149889b36 FUN_149889b36 body=183 status=ok
// SIG undefined FUN_149889b36(void)

void FUN_149889b36(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bebe820;
  FUN_149889a3f(param_1[0x3a],*(undefined4 *)(param_1 + 0x3b));
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x39) = 0;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_149889bee(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_14988929e(param_1 + 0x26);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145928e3e(param_1);
  return;
}



// FUNCTION 149889bee FUN_149889bee body=54 status=ok
// SIG undefined FUN_149889bee(void)

void FUN_149889bee(longlong *param_1)

{
  FUN_1498899be(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149889c24 FUN_149889c24 body=37 status=ok
// SIG undefined FUN_149889c24(void)

void FUN_149889c24(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1e8);
  FUN_149889da0(param_2);
  return;
}



// FUNCTION 149889c76 FUN_149889c76 body=63 status=ok
// SIG undefined FUN_149889c76(void)

undefined1 FUN_149889c76(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149889f5e(param_2,param_3);
    param_3 = param_3 + 0x1e8;
    param_2 = param_2 + 0x1e8;
  }
  return 1;
}



// FUNCTION 149889cde FUN_149889cde body=59 status=ok
// SIG undefined FUN_149889cde(void)

undefined8 FUN_149889cde(longlong *param_1)

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



// FUNCTION 149889d2a FUN_149889d2a body=40 status=ok
// SIG undefined FUN_149889d2a(void)

void FUN_149889d2a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e8) == '\x01') {
    FUN_149889ebc(param_2);
    *(undefined1 *)(param_2 + 0x1e8) = 0;
  }
  return;
}



// FUNCTION 149889da0 FUN_149889da0 body=178 status=ok
// SIG undefined FUN_149889da0(void)

undefined8 * FUN_149889da0(undefined8 *param_1)

{
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_14becca50;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[5] = 0;
  FUN_149868d64(param_1 + 6);
  *(undefined2 *)(param_1 + 0x27) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffffffffffff;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x171) = 0;
  *(undefined8 *)((longlong)param_1 + 0x179) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  return param_1;
}



// FUNCTION 149889e52 FUN_149889e52 body=38 status=ok
// SIG undefined FUN_149889e52(void)

undefined8 FUN_149889e52(undefined8 param_1,int param_2)

{
  FUN_149889ebc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149889e78 FUN_149889e78 body=55 status=ok
// SIG undefined FUN_149889e78(void)

void FUN_149889e78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d9e0 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2d9e0 = FUN_140002ddd(FUN_1467694c1,uVar1,L"AnimNode_RetargetPoseFromMesh");
  }
  return;
}



// FUNCTION 149889ebc FUN_149889ebc body=162 status=ok
// SIG undefined FUN_149889ebc(void)

void FUN_149889ebc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14becca50;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0x32);
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_14988a0a6(param_1 + 10);
  FUN_144a659aa(param_1);
  return;
}



// FUNCTION 149889f5e FUN_149889f5e body=326 status=ok
// SIG undefined FUN_149889f5e(void)

longlong FUN_149889f5e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  lVar8 = *(longlong *)(param_2 + 0x28);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x28);
    }
  }
  *(longlong *)(param_1 + 0x28) = lVar8;
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  uVar4 = *(undefined4 *)(param_2 + 0x39);
  uVar5 = *(undefined4 *)(param_2 + 0x3d);
  uVar6 = *(undefined4 *)(param_2 + 0x41);
  uVar7 = *(undefined4 *)(param_2 + 0x45);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x39) = uVar4;
  *(undefined4 *)(param_1 + 0x3d) = uVar5;
  *(undefined4 *)(param_1 + 0x41) = uVar6;
  *(undefined4 *)(param_1 + 0x45) = uVar7;
  FUN_149888fae(param_1 + 0x50,param_2 + 0x50);
  memcpy((void *)(param_1 + 0xa0),(void *)(param_2 + 0xa0),0x98);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  lVar8 = *(longlong *)(param_2 + 0x148);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x148);
    }
  }
  *(longlong *)(param_1 + 0x148) = lVar8;
  FUN_144756208(param_1 + 0x150,param_2 + 0x150);
  FUN_140cbd21c(param_1 + 0x160,param_2 + 0x160);
  FUN_14475634e(param_1 + 0x170,param_2 + 0x170);
  *(undefined1 *)(param_1 + 0x180) = *(undefined1 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  FUN_140d188f2(param_1 + 400,param_2 + 400);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  return param_1;
}



// FUNCTION 14988a0a6 FUN_14988a0a6 body=54 status=ok
// SIG undefined FUN_14988a0a6(void)

void FUN_14988a0a6(longlong *param_1)

{
  FUN_1498890a2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14988a148 FUN_14988a148 body=59 status=ok
// SIG undefined FUN_14988a148(void)

undefined8 FUN_14988a148(longlong *param_1)

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



// FUNCTION 14988a27a FUN_14988a27a body=46 status=ok
// SIG undefined FUN_14988a27a(void)

void FUN_14988a27a(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x60) = 0;
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_145be69fe(param_2 + 0x18);
  return;
}



// FUNCTION 14988a2be FUN_14988a2be body=84 status=ok
// SIG undefined FUN_14988a2be(void)

undefined8 FUN_14988a2be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_14988a406(param_2,param_3);
      *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14988a33a FUN_14988a33a body=59 status=ok
// SIG undefined FUN_14988a33a(void)

undefined8 FUN_14988a33a(longlong *param_1)

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



// FUNCTION 14988a380 FUN_14988a380 body=56 status=ok
// SIG undefined FUN_14988a380(void)

void FUN_14988a380(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *(undefined4 *)(param_2 + 0x60) = 0;
    if (*(longlong *)(param_2 + 0x58) != 0) {
      FUN_1400020a8();
    }
    FUN_145be69fe(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14988a406 FUN_14988a406 body=122 status=ok
// SIG undefined FUN_14988a406(void)

longlong FUN_14988a406(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_14988a480(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14988a480 FUN_14988a480 body=119 status=ok
// SIG undefined FUN_14988a480(void)

undefined8 * FUN_14988a480(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145be6a36(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_146fb2bb4(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 6);
    }
  }
  return param_1;
}



// FUNCTION 14988a4f8 FUN_14988a4f8 body=122 status=ok
// SIG undefined FUN_14988a4f8(void)

longlong FUN_14988a4f8(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_14988a572(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14988a572 FUN_14988a572 body=360 status=ok
// SIG undefined FUN_14988a572(void)

longlong * FUN_14988a572(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  if (param_1 != param_2) {
    uVar4 = *(uint *)(param_2 + 1);
    FUN_145be6872(param_1,(ulonglong)uVar4);
    lVar9 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar9 + uVar4;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar9) < uVar4) {
      FUN_140eca382(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar4) {
      lVar9 = *param_1;
      lVar5 = *param_2;
      lVar12 = 0;
      uVar11 = 0;
      do {
        plVar10 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar10 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar10 + (uVar11 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar11 & 0x1f) &
            1) == 0) {
          *(undefined4 *)(lVar9 + lVar12) = *(undefined4 *)(lVar5 + lVar12);
          *(undefined4 *)(lVar9 + 4 + lVar12) = *(undefined4 *)(lVar5 + 4 + lVar12);
        }
        else {
          *(undefined8 *)(lVar9 + lVar12) = *(undefined8 *)(lVar5 + lVar12);
          puVar1 = (undefined4 *)(lVar5 + 8 + lVar12);
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          uVar8 = puVar1[3];
          puVar2 = (undefined4 *)(lVar9 + 8 + lVar12);
          *puVar2 = *puVar1;
          puVar2[1] = uVar6;
          puVar2[2] = uVar7;
          puVar2[3] = uVar8;
          *(undefined8 *)(lVar9 + 0x18 + lVar12) = *(undefined8 *)(lVar5 + 0x18 + lVar12);
          *(undefined8 *)(lVar9 + 0x40 + lVar12) = 0;
          *(undefined4 *)(lVar9 + 0x48 + lVar12) = 0;
          puVar3 = (undefined8 *)(lVar9 + 0x20 + lVar12);
          *puVar3 = 0;
          puVar3[1] = 0;
          *(undefined8 *)(lVar9 + 0x4c + lVar12) = 0xffffffff00000080;
          *(undefined4 *)(lVar9 + 0x54 + lVar12) = 0;
          *(undefined8 *)(lVar9 + 0x60 + lVar12) = 0;
          *(undefined4 *)(lVar9 + 0x68 + lVar12) = 0;
          FUN_14988a406(lVar9 + 0x20 + lVar12,lVar5 + 0x20 + lVar12);
          *(undefined4 *)(lVar9 + 0x70 + lVar12) = *(undefined4 *)(lVar5 + 0x70 + lVar12);
          *(undefined8 *)(lVar9 + 0x78 + lVar12) = *(undefined8 *)(lVar5 + 0x78 + lVar12);
        }
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0x80;
      } while (uVar4 != uVar11);
    }
  }
  return param_1;
}



// FUNCTION 14988a6da FUN_14988a6da body=38 status=ok
// SIG undefined FUN_14988a6da(void)

undefined8 FUN_14988a6da(undefined8 param_1,int param_2)

{
  FUN_149879726();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14988a700 FUN_14988a700 body=71 status=ok
// SIG undefined FUN_14988a700(void)

undefined8 * FUN_14988a700(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14becce80;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14988a748 FUN_14988a748 body=71 status=ok
// SIG undefined FUN_14988a748(void)

undefined8 * FUN_14988a748(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14becce80;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14988a790 FUN_14988a790 body=89 status=ok
// SIG undefined FUN_14988a790(void)

void FUN_14988a790(longlong *param_1)

{
  if (param_1[8] != 0) {
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



// FUNCTION 14988a7ea FUN_14988a7ea body=186 status=ok
// SIG undefined FUN_14988a7ea(void)

undefined8 * FUN_14988a7ea(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_14becce80;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  pvVar2 = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 << 2);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar3;
  return param_1;
}



// FUNCTION 14988a950 FUN_14988a950 body=59 status=ok
// SIG undefined FUN_14988a950(void)

undefined8 FUN_14988a950(longlong *param_1)

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



// FUNCTION 14988aaa2 FUN_14988aaa2 body=59 status=ok
// SIG undefined FUN_14988aaa2(void)

undefined8 FUN_14988aaa2(longlong *param_1)

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



// FUNCTION 14988ac66 FUN_14988ac66 body=39 status=ok
// SIG undefined FUN_14988ac66(void)

undefined8 FUN_14988ac66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14988acb6 FUN_14988acb6 body=59 status=ok
// SIG undefined FUN_14988acb6(void)

undefined8 FUN_14988acb6(longlong *param_1)

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



// FUNCTION 14988ad58 FUN_14988ad58 body=185 status=ok
// SIG undefined FUN_14988ad58(void)

void FUN_14988ad58(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  memset(param_2,0,0xa8);
  *param_2 = 1;
  *(undefined4 *)(param_2 + 4) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xc) = 0x3f800000;
  param_2[0x20] = 1;
  *(undefined8 *)(param_2 + 0x38) = DAT_14c846520;
  uVar1 = DAT_14c846518;
  *(undefined8 *)(param_2 + 0x28) = DAT_14c846510;
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  *(undefined8 *)(param_2 + 0x50) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_2 + 0x40) = DAT_14c8464e0;
  *(undefined8 *)(param_2 + 0x48) = uVar1;
  *(undefined8 *)(param_2 + 0x68) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_2 + 0x58) = DAT_14c8464e0;
  *(undefined8 *)(param_2 + 0x60) = uVar1;
  *(undefined8 *)(param_2 + 0x80) = DAT_14c846508;
  uVar1 = DAT_14c846500;
  *(undefined8 *)(param_2 + 0x70) = DAT_14c8464f8;
  *(undefined8 *)(param_2 + 0x78) = uVar1;
  *(undefined1 **)(param_2 + 0x88) = &DAT_3f8000003f800000;
  param_2[0x90] = 1;
  *(undefined8 *)(param_2 + 0xa4) = 0x437a000041700000;
  *(undefined4 *)(param_2 + 0xac) = 0x3f800000;
  return;
}



// FUNCTION 14988aef0 FUN_14988aef0 body=68 status=ok
// SIG undefined FUN_14988aef0(void)

undefined8 FUN_14988aef0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xb0);
      lVar1 = lVar1 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14988af5c FUN_14988af5c body=59 status=ok
// SIG undefined FUN_14988af5c(void)

undefined8 FUN_14988af5c(longlong *param_1)

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



// FUNCTION 14988b0fc FUN_14988b0fc body=39 status=ok
// SIG undefined FUN_14988b0fc(void)

undefined8 FUN_14988b0fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14988b14c FUN_14988b14c body=59 status=ok
// SIG undefined FUN_14988b14c(void)

undefined8 FUN_14988b14c(longlong *param_1)

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



// FUNCTION 14988b2a6 FUN_14988b2a6 body=59 status=ok
// SIG undefined FUN_14988b2a6(void)

undefined8 FUN_14988b2a6(longlong *param_1)

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



// FUNCTION 14988b44c FUN_14988b44c body=68 status=ok
// SIG undefined FUN_14988b44c(void)

undefined8 FUN_14988b44c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xa0);
      lVar1 = lVar1 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14988b4b8 FUN_14988b4b8 body=109 status=ok
// SIG undefined FUN_14988b4b8(void)

int FUN_14988b4b8(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14988b5cc FUN_14988b5cc body=54 status=ok
// SIG undefined FUN_14988b5cc(void)

undefined1 FUN_14988b5cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1498896e6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14988b62a FUN_14988b62a body=59 status=ok
// SIG undefined FUN_14988b62a(void)

undefined8 FUN_14988b62a(longlong *param_1)

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



// FUNCTION 14988b670 FUN_14988b670 body=37 status=ok
// SIG undefined FUN_14988b670(void)

void FUN_14988b670(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14988b7ac FUN_14988b7ac body=59 status=ok
// SIG undefined FUN_14988b7ac(void)

undefined8 FUN_14988b7ac(longlong *param_1)

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



// FUNCTION 14988b892 FUN_14988b892 body=70 status=ok
// SIG undefined FUN_14988b892(void)

undefined8 FUN_14988b892(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_14988b9ba(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14988b900 FUN_14988b900 body=59 status=ok
// SIG undefined FUN_14988b900(void)

undefined8 FUN_14988b900(longlong *param_1)

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



// FUNCTION 14988b946 FUN_14988b946 body=38 status=ok
// SIG undefined FUN_14988b946(void)

void FUN_14988b946(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14988b9ba FUN_14988b9ba body=89 status=ok
// SIG undefined FUN_14988b9ba(void)

undefined8 * FUN_14988b9ba(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14988ba14(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 14988ba14 FUN_14988ba14 body=115 status=ok
// SIG undefined FUN_14988ba14(void)

void FUN_14988ba14(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,4);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14988bb0a FUN_14988bb0a body=59 status=ok
// SIG undefined FUN_14988bb0a(void)

undefined8 FUN_14988bb0a(longlong *param_1)

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



// FUNCTION 14988bbac FUN_14988bbac body=48 status=ok
// SIG undefined FUN_14988bbac(void)

void FUN_14988bbac(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xa0,0x10);
  }
  return;
}



// FUNCTION 14988bc2a FUN_14988bc2a body=88 status=ok
// SIG undefined FUN_14988bc2a(void)

undefined8 FUN_14988bc2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    FUN_14054c6c4(param_2 + 0x10,param_3 + 0x10);
    FUN_144756208(param_2 + 0x20,param_3 + 0x20);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}



// FUNCTION 14988bcaa FUN_14988bcaa body=59 status=ok
// SIG undefined FUN_14988bcaa(void)

undefined8 FUN_14988bcaa(longlong *param_1)

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



// FUNCTION 14988bcf0 FUN_14988bcf0 body=34 status=ok
// SIG undefined FUN_14988bcf0(void)

void FUN_14988bcf0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1498805d2(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14988bdc0 FUN_14988bdc0 body=54 status=ok
// SIG undefined FUN_14988bdc0(void)

undefined1 FUN_14988bdc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14988bed4(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 14988be1e FUN_14988be1e body=59 status=ok
// SIG undefined FUN_14988be1e(void)

undefined8 FUN_14988be1e(longlong *param_1)

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



// FUNCTION 14988be64 FUN_14988be64 body=34 status=ok
// SIG undefined FUN_14988be64(void)

void FUN_14988be64(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_145c362a8(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14988bed4 FUN_14988bed4 body=108 status=ok
// SIG undefined FUN_14988bed4(void)

longlong FUN_14988bed4(longlong param_1,longlong param_2)

{
  FUN_1406fa324();
  FUN_14054c6c4(param_1 + 0x10,param_2 + 0x10);
  FUN_1406fa324(param_1 + 0x20,param_2 + 0x20);
  FUN_144756208(param_1 + 0x30,param_2 + 0x30);
  FUN_144756208(param_1 + 0x40,param_2 + 0x40);
  FUN_144756208(param_1 + 0x50,param_2 + 0x50);
  FUN_14054c6c4(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 14988bf42 FUN_14988bf42 body=89 status=ok
// SIG undefined FUN_14988bf42(void)

void FUN_14988bf42(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14988bf9c FUN_14988bf9c body=89 status=ok
// SIG undefined FUN_14988bf9c(void)

void FUN_14988bf9c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14988c0d2 FUN_14988c0d2 body=59 status=ok
// SIG undefined FUN_14988c0d2(void)

undefined8 FUN_14988c0d2(longlong *param_1)

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



// FUNCTION 14988c258 FUN_14988c258 body=39 status=ok
// SIG undefined FUN_14988c258(void)

undefined8 FUN_14988c258(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14988c2a8 FUN_14988c2a8 body=59 status=ok
// SIG undefined FUN_14988c2a8(void)

undefined8 FUN_14988c2a8(longlong *param_1)

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



// FUNCTION 14988c38c FUN_14988c38c body=72 status=ok
// SIG undefined FUN_14988c38c(void)

undefined1 FUN_14988c38c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_14988c4b6(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14988c3fc FUN_14988c3fc body=59 status=ok
// SIG undefined FUN_14988c3fc(void)

undefined8 FUN_14988c3fc(longlong *param_1)

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



// FUNCTION 14988c442 FUN_14988c442 body=38 status=ok
// SIG undefined FUN_14988c442(void)

void FUN_14988c442(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14988c4b6 FUN_14988c4b6 body=85 status=ok
// SIG undefined FUN_14988c4b6(void)

undefined8 * FUN_14988c4b6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14988c50c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x68);
      }
    }
  }
  return param_1;
}



// FUNCTION 14988c50c FUN_14988c50c body=111 status=ok
// SIG undefined FUN_14988c50c(void)

void FUN_14988c50c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14988c57c FUN_14988c57c body=352 status=ok
// SIG undefined FUN_14988c57c(void)

undefined4 * FUN_14988c57c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14988c6de(param_1,local_48);
  _Src = (void *)param_3[1];
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  memcpy(local_40 + 1,_Src,0xb0);
  *(undefined4 *)(local_40 + 0x17) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_14988c7cc(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0xbc) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x17) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14988c8de(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14988c6de FUN_14988c6de body=238 status=ok
// SIG undefined FUN_14988c6de(void)

int * FUN_14988c6de(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140d69980(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0xc0);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0xc0) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0xc0 + *param_1;
  return param_2;
}



// FUNCTION 14988c7cc FUN_14988c7cc body=152 status=ok
// SIG undefined FUN_14988c7cc(void)

undefined8 FUN_14988c7cc(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xc0);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0xc0) == *param_3) {
          memmove(_Dst,param_3,0xb8);
          FUN_14988c864(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0xb8);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14988c864 FUN_14988c864 body=122 status=ok
// SIG undefined FUN_14988c864(void)

void FUN_14988c864(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xc0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xc0 + 4) = uVar4;
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



// FUNCTION 14988c8de FUN_14988c8de body=483 status=ok
// SIG undefined FUN_14988c8de(void)

void FUN_14988c8de(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0xc0;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xbc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xb8 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14988cac2 FUN_14988cac2 body=48 status=ok
// SIG undefined FUN_14988cac2(void)

void FUN_14988cac2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14988caf2 FUN_14988caf2 body=132 status=ok
// SIG undefined FUN_14988caf2(void)

void FUN_14988caf2(longlong param_1,int param_2)

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



// FUNCTION 14988cb78 FUN_14988cb78 body=70 status=ok
// SIG undefined FUN_14988cb78(void)

void FUN_14988cb78(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14988cbbe();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1457dd8f6(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14988cbbe FUN_14988cbbe body=329 status=ok
// SIG undefined FUN_14988cbbe(void)

void FUN_14988cbbe(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xb4 + (longlong)iVar4 * 0xc0) * 4) =
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



// FUNCTION 14988cd08 FUN_14988cd08 body=68 status=ok
// SIG undefined FUN_14988cd08(void)

void FUN_14988cd08(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14988cd4c();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14988cd4c FUN_14988cd4c body=322 status=ok
// SIG undefined FUN_14988cd4c(void)

void FUN_14988cd4c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 14988ce90 FUN_14988ce90 body=283 status=ok
// SIG undefined FUN_14988ce90(void)

undefined4 * FUN_14988ce90(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14988cfac(param_1,local_48);
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  local_40[1] = 0;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  cVar2 = FUN_14988d092(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14988d184(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14988cfac FUN_14988cfac body=229 status=ok
// SIG undefined FUN_14988cfac(void)

int * FUN_14988cfac(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_144869a3c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 14988d092 FUN_14988d092 body=127 status=ok
// SIG undefined FUN_14988d092(void)

undefined8 FUN_14988d092(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_14988d112(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 14988d112 FUN_14988d112 body=114 status=ok
// SIG undefined FUN_14988d112(void)

void FUN_14988d112(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 14988d184 FUN_14988d184 body=422 status=ok
// SIG undefined FUN_14988d184(void)

void FUN_14988d184(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14988d32c FUN_14988d32c body=57 status=ok
// SIG undefined FUN_14988d32c(void)

void FUN_14988d32c(undefined8 *param_1,int param_2)

{
  FUN_149889a3f(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14988d366(param_1,param_2);
  return;
}



// FUNCTION 14988d366 FUN_14988d366 body=95 status=ok
// SIG undefined FUN_14988d366(void)

void FUN_14988d366(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,0x10);
  }
  return;
}



// FUNCTION 14988d3c6 FUN_14988d3c6 body=132 status=ok
// SIG undefined FUN_14988d3c6(void)

void FUN_14988d3c6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14988d44c FUN_14988d44c body=174 status=ok
// SIG undefined FUN_14988d44c(void)

ulonglong FUN_14988d44c(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((char)param_1[2] == '\0') {
    FUN_140102786(*param_1,(int)param_1[1]);
    *(undefined1 *)(param_1 + 2) = 1;
  }
  uVar1 = *(uint *)(param_1 + 1);
  iVar6 = (int)((ulonglong)param_2 >> 0x20);
  if ((int)uVar1 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    uVar7 = (ulonglong)uVar1;
    uVar8 = uVar1;
    do {
      uVar7 = uVar7 >> 1;
      uVar9 = (uint)uVar7 + (int)uVar4;
      uVar2 = *(undefined8 *)(*param_1 + (ulonglong)uVar9 * 0x10);
      iVar5 = (int)uVar2 - (int)param_2;
      if (iVar5 == 0) {
        iVar5 = (int)((ulonglong)uVar2 >> 0x20) - iVar6;
      }
      if (iVar5 < 0) {
        uVar4 = (ulonglong)(uVar9 + (uVar8 & 1));
      }
      bVar3 = 1 < uVar8;
      uVar8 = (uint)uVar7;
    } while (bVar3);
  }
  if ((int)uVar4 < (int)uVar1) {
    uVar2 = *(undefined8 *)(*param_1 + uVar4 * 0x10);
    iVar5 = (int)param_2 - (int)uVar2;
    if (iVar5 == 0) {
      iVar5 = iVar6 - (int)((ulonglong)uVar2 >> 0x20);
    }
    if (-1 < iVar5) {
      return uVar4;
    }
  }
  return 0xffffffff;
}



// FUNCTION 14988d4fa FUN_14988d4fa body=31 status=ok
// SIG undefined FUN_14988d4fa(void)

undefined8 FUN_14988d4fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14988d536 FUN_14988d536 body=93 status=ok
// SIG undefined FUN_14988d536(void)

void FUN_14988d536(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bece8d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}


