// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1468373f2 FUN_1468373f2 body=161 status=ok
// SIG undefined FUN_1468373f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468373f2(ulonglong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong *plVar8;
  bool bVar9;
  
  param_1 = param_1 & 0xffffffffff800000;
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
  lVar3 = *(longlong *)(param_2 + 0x398);
  plVar8 = (longlong *)(lVar3 + 0xe0);
  if (plVar8 < (longlong *)0x14c8c47c0 && &DAT_14c8c4580 <= plVar8) {
    LOCK();
    plVar1 = (longlong *)(lVar3 + 0xf8);
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    do {
      lVar4 = *(longlong *)(lVar3 + 0xf0);
      if (lVar2 < lVar4) break;
      LOCK();
      bVar9 = lVar4 == *(longlong *)(lVar3 + 0xf0);
      if (bVar9) {
        *(longlong *)(lVar3 + 0xf0) = lVar2 + 1;
      }
      UNLOCK();
    } while (!bVar9);
    LOCK();
    *plVar8 = *plVar8 + 1;
    UNLOCK();
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0xf8);
    lVar2 = lVar4 + 1;
    *(longlong *)(lVar3 + 0xf8) = lVar2;
    if (*(longlong *)(lVar3 + 0xf0) <= lVar4) {
      *(longlong *)(lVar3 + 0xf0) = lVar2;
    }
    *plVar8 = *plVar8 + 1;
  }
  if (*(longlong *)(param_1 + 0x48) != *(longlong *)(param_1 + 0x38)) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x78);
  if (0 < lVar3) {
    puVar7 = (uint *)(param_1 + 0x80);
    do {
      if (puVar7[7] == 0) {
        FUN_146838de9(puVar7,param_2);
        puVar7[7] = 0;
      }
      puVar7 = puVar7 + (ulonglong)*puVar7 * 0x14;
    } while (puVar7 < (uint *)(param_1 + lVar3 * 0x50 + 0x80));
  }
  if (DAT_14c75eadc == 0) {
    FUN_1412bb367(&DAT_14c75ead8);
  }
  FUN_146839183(param_1,DAT_14c75ead8 != 0);
  lVar3 = *(longlong *)(param_2 + 0x398);
  plVar8 = (longlong *)(lVar3 + 0xc0);
  if (plVar8 < (longlong *)0x14c8c47c0 && &DAT_14c8c4580 <= plVar8) {
    LOCK();
    plVar1 = (longlong *)(lVar3 + 0xd8);
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    do {
      lVar4 = *(longlong *)(lVar3 + 0xd0);
      if (lVar2 < lVar4) break;
      LOCK();
      bVar9 = lVar4 == *(longlong *)(lVar3 + 0xd0);
      if (bVar9) {
        *(longlong *)(lVar3 + 0xd0) = lVar2 + 1;
      }
      UNLOCK();
    } while (!bVar9);
    LOCK();
    *plVar8 = *plVar8 + 1;
    UNLOCK();
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0xd8);
    lVar2 = lVar4 + 1;
    *(longlong *)(lVar3 + 0xd8) = lVar2;
    if (*(longlong *)(lVar3 + 0xd0) <= lVar4) {
      *(longlong *)(lVar3 + 0xd0) = lVar2;
    }
    *plVar8 = *plVar8 + 1;
  }
  FUN_146838b08(*(int *)(param_1 + 0x58) * -0x10000,param_2);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x40) = 1;
  uVar6 = DAT_14c91ec00;
  do {
    *(ulonglong *)(param_1 + 0x28) = uVar6 & 0xffffffffff800000;
    LOCK();
    bVar9 = uVar6 != DAT_14c91ec00;
    uVar5 = (int)uVar6 + 1U & 0x7fffff | param_1;
    if (bVar9) {
      uVar6 = DAT_14c91ec00;
      uVar5 = DAT_14c91ec00;
    }
    DAT_14c91ec00 = uVar5;
    UNLOCK();
  } while (bVar9);
  LOCK();
  _DAT_14c91ec40 = _DAT_14c91ec40 + 1;
  UNLOCK();
  return;
}



// FUNCTION 146837493 FUN_146837493 body=114 status=ok
// SIG undefined FUN_146837493(void)

longlong FUN_146837493(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  FUN_145d75242();
  plVar1 = *(longlong **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xce8)
  ;
  lVar2 = plVar1[0x164];
  LOCK();
  lVar3 = *(longlong *)(param_1 + 0x70);
  bVar4 = lVar3 == 0;
  if (bVar4) {
    *(longlong *)(param_1 + 0x70) = lVar2;
    lVar3 = 0;
  }
  UNLOCK();
  if (bVar4) {
    *param_3 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 **)(param_2 + 0x10) = param_3;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + -1;
    *(byte *)(param_2 + 0xf) = *(byte *)(param_2 + 0xf) & 0xfe;
    lVar3 = FUN_146836e50(param_2,CONCAT71((int7)((ulonglong)lVar2 >> 8),1),*plVar1 + 0x20);
    return lVar3;
  }
  return lVar3;
}



// FUNCTION 146837505 FUN_146837505 body=107 status=ok
// SIG undefined FUN_146837505(void)

byte FUN_146837505(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  char cVar5;
  
  puVar3 = (undefined1 *)(param_1 + 7);
  bVar2 = 1;
  if ((undefined1 *)0xf < puVar3) {
    if (puVar3 < (undefined1 *)0x48) {
      bVar2 = (char)((ulonglong)puVar3 >> 3) + 1U & 0x1e;
    }
    else {
      bVar2 = 0x49;
      if (puVar3 < &DAT_00020008) {
        uVar4 = ((ulonglong)puVar3 >> 3) - 1;
        if (uVar4 == 0) {
          bVar2 = 0;
        }
        else {
          lVar1 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          bVar2 = (byte)lVar1 ^ 0x3f;
        }
        cVar5 = '\0';
        if (uVar4 != 0) {
          cVar5 = '?' - bVar2;
        }
        bVar2 = (((byte)(uVar4 >> (cVar5 - 2U & 0x3f)) & 3) + cVar5 * '\x04') - 3;
      }
    }
  }
  return bVar2;
}



// FUNCTION 146837570 FUN_146837570 body=156 status=ok
// SIG undefined FUN_146837570(void)

longlong FUN_146837570(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = *param_3;
  lVar2 = 0;
  if (lVar3 == 0) {
    return 0;
  }
LAB_146837586:
  *(undefined8 *)(lVar3 + 0x30) = param_1;
LAB_14683758a:
  uVar1 = *(ulonglong *)(lVar3 + 0x28);
  switch((uint)uVar1 & 3) {
  default:
    goto switchD_14683759c_caseD_0;
  case 1:
code_r0x0001468375f7:
    uVar1 = *(ulonglong *)(lVar3 + 0x28);
    switch((uint)uVar1 & 3) {
    default:
      goto switchD_14683759c_caseD_0;
    case 1:
      goto code_r0x0001468375f7;
    case 2:
      break;
    }
  case 2:
    break;
  }
  LOCK();
  bVar4 = uVar1 == *(ulonglong *)(lVar3 + 0x28);
  if (bVar4) {
    *(ulonglong *)(lVar3 + 0x28) = uVar1 & 0xfffffffffffffffc;
  }
  UNLOCK();
  if (bVar4) goto switchD_14683759c_caseD_0;
  goto LAB_14683758a;
switchD_14683759c_caseD_0:
  lVar2 = lVar2 + 1;
  lVar3 = *(longlong *)(lVar3 + 0x38);
  if (lVar3 == 0) {
    lVar3 = *param_3;
    if (param_2[1] != 0) {
      *(longlong *)(param_2[1] + 0x38) = lVar3;
      *(longlong *)(lVar3 + 0x40) = param_2[1];
      param_2[1] = param_3[1];
      return lVar2;
    }
    *param_2 = lVar3;
    param_2[1] = param_3[1];
    FUN_14683760c();
    return lVar2;
  }
  goto LAB_146837586;
}



// FUNCTION 14683760c FUN_14683760c body=330 status=ok
// SIG undefined FUN_14683760c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14683760c(longlong param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined *puVar9;
  undefined1 auVar10 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar4 = param_2[2];
  if (uVar4 < 0x401) {
    puVar9 = &DAT_149e42e80;
    if ((undefined *)*param_2 != (undefined *)0x0) {
      puVar9 = (undefined *)*param_2;
    }
    if (*(undefined **)(param_1 + 8 + (uVar4 + 7 & 0xfffffffffffffff8)) != puVar9) {
      uVar6 = uVar4 + 7 >> 3;
      if (uVar4 < 9) {
        uVar4 = 0;
      }
      else {
        cVar2 = FUN_146837505();
        do {
          puVar5 = param_2 + -3;
          lVar7 = param_2[-1];
          cVar3 = FUN_146837505(lVar7);
          param_2 = puVar5;
        } while (cVar2 == cVar3 && (undefined8 *)(param_1 + 0x410) < puVar5);
        uVar8 = lVar7 + 7U >> 3;
        uVar4 = uVar8 + 1;
        if (uVar6 <= uVar8) {
          uVar4 = uVar6;
        }
        if (uVar6 < uVar4) {
          return;
        }
      }
      auVar1 = _DAT_149931e80;
      lVar7 = uVar6 - uVar4;
      auVar10._8_4_ = (int)lVar7;
      auVar10._0_8_ = lVar7;
      auVar10._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
      param_1 = param_1 + uVar4 * 8;
      uVar4 = 0;
      auVar11 = pmovsxbq(in_XMM1,0x100);
      auVar10 = auVar10 ^ _DAT_149931e80;
      do {
        if ((bool)(~(auVar10._0_8_ < (longlong)(uVar4 ^ auVar1._0_8_)) & 1)) {
          *(undefined **)(param_1 + 8 + uVar4 * 8) = puVar9;
        }
        auVar12._8_4_ = (int)uVar4;
        auVar12._0_8_ = uVar4;
        auVar12._12_4_ = (int)(uVar4 >> 0x20);
        if ((longlong)((auVar12._8_8_ | auVar11._8_8_) ^ auVar1._8_8_) <= auVar10._8_8_) {
          *(undefined **)(param_1 + 0x10 + uVar4 * 8) = puVar9;
        }
        uVar4 = uVar4 + 2;
      } while ((lVar7 + 2U & 0xfffffffffffffffe) != uVar4);
    }
  }
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
  return;
}



// FUNCTION 146837756 FUN_146837756 body=228 status=ok
// SIG undefined FUN_146837756(void)

void FUN_146837756(longlong param_1,byte param_2)

{
  ushort uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  bool bVar9;
  
  uVar4 = *(ulonglong *)(param_1 + 0x28);
  if ((3 < *(ulonglong *)(param_1 + 0x28) | param_2) == 1) {
    do {
      uVar3 = uVar4;
      LOCK();
      uVar4 = *(ulonglong *)(param_1 + 0x28);
      bVar9 = uVar3 == uVar4;
      if (bVar9) {
        *(ulonglong *)(param_1 + 0x28) = (ulonglong)((uint)uVar3 & 3);
        uVar4 = uVar3;
      }
      UNLOCK();
    } while (!bVar9);
    plVar5 = (longlong *)(uVar3 & 0xfffffffffffffffc);
    if (plVar5 != (longlong *)0x0) {
      uVar1 = *(ushort *)(param_1 + 10);
      if (uVar1 == 0 || (longlong *)*plVar5 == (longlong *)0x0) {
        uVar6 = 1;
        plVar7 = plVar5;
      }
      else {
        plVar2 = (longlong *)*plVar5;
        uVar8 = 1;
        do {
          plVar7 = plVar2;
          uVar6 = uVar8 + 1;
          if ((longlong *)*plVar7 == (longlong *)0x0) break;
          bVar9 = uVar8 < uVar1;
          plVar2 = (longlong *)*plVar7;
          uVar8 = uVar6;
        } while (bVar9);
      }
      if (uVar1 < uVar6) {
        FUN_1468363fc(0xe,"corrupted thread-free list\n");
      }
      else {
        *plVar7 = *(longlong *)(param_1 + 0x20);
        *(longlong **)(param_1 + 0x20) = plVar5;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar6;
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x20);
  if (plVar5 != (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      if (param_2 == 0) {
        return;
      }
      do {
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar7;
      } while (plVar5 != (longlong *)0x0);
      *plVar7 = *(longlong *)(param_1 + 0x10);
      plVar5 = *(longlong **)(param_1 + 0x20);
    }
    *(longlong **)(param_1 + 0x10) = plVar5;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xfe;
  }
  return;
}



// FUNCTION 14683783a FUN_14683783a body=140 status=ok
// SIG undefined FUN_14683783a(void)

/* WARNING: Removing unreachable block (ram,0x0001468380da) */

void FUN_14683783a(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  bool bVar11;
  
  lVar8 = (ulonglong)((uint)((ulonglong)param_1 >> 0xc) & 0x7f0) * 5;
  lVar8 = (((ulonglong)param_1 & 0xffffffffff800000) + lVar8) -
          (ulonglong)*(uint *)(((ulonglong)param_1 & 0xffffffffff800000) + 0x84 + lVar8);
  lVar9 = lVar8 + 0x80;
LAB_146837872:
  uVar6 = *(ulonglong *)(lVar8 + 0xa8);
  switch((uint)uVar6 & 3) {
  default:
    goto switchD_146837882_caseD_0;
  case 1:
code_r0x000146837897:
    uVar6 = *(ulonglong *)(lVar8 + 0xa8);
    switch((uint)uVar6 & 3) {
    default:
      goto switchD_146837882_caseD_0;
    case 1:
      goto code_r0x000146837897;
    case 2:
      break;
    }
  case 2:
    break;
  }
  LOCK();
  bVar11 = uVar6 == *(ulonglong *)(lVar8 + 0xa8);
  if (bVar11) {
    *(ulonglong *)(lVar8 + 0xa8) = uVar6 & 0xfffffffffffffffc;
  }
  UNLOCK();
  if (bVar11) {
switchD_146837882_caseD_0:
    FUN_146837756(lVar9,0);
    *param_1 = *(undefined8 *)(lVar8 + 0xa0);
    *(undefined8 **)(lVar8 + 0xa0) = param_1;
    piVar1 = (int *)(lVar8 + 0x98);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      if ((*(byte *)(lVar8 + 0x8e) & 1) == 0) {
        return;
      }
      FUN_1468378c6();
      return;
    }
    bVar10 = *(byte *)(lVar8 + 0x8e);
    *(byte *)(lVar8 + 0x8e) = bVar10 & 0xfd;
    if ((bVar10 & 1) == 0) {
      uVar3 = *(uint *)(lVar8 + 0x9c);
      bVar5 = FUN_146837505(uVar3);
      uVar6 = (ulonglong)bVar5;
      lVar4 = *(longlong *)(lVar8 + 0xb0);
      lVar2 = lVar4 + uVar6 * 0x18;
      plVar7 = (longlong *)(lVar2 + 0x410);
      if (((((bVar10 & 1) == 0) && (uVar3 < 0x20001)) && (*(longlong *)(lVar2 + 0x418) == lVar9)) &&
         (*plVar7 == lVar9)) {
        bVar10 = 6;
        if (uVar3 < 0x4001) {
          bVar10 = 0x12;
        }
        *(byte *)(lVar8 + 0x8f) = *(byte *)(lVar8 + 0x8f) & 1 | bVar10;
        if (uVar6 < *(ulonglong *)(lVar4 + 0xbd0)) {
          *(ulonglong *)(lVar4 + 0xbd0) = uVar6;
        }
        if (*(ulonglong *)(lVar4 + 0xbd8) < uVar6) {
          *(ulonglong *)(lVar4 + 0xbd8) = uVar6;
        }
        return;
      }
    }
    else {
      plVar7 = (longlong *)(*(longlong *)(lVar8 + 0xb0) + 0xb00);
    }
    FUN_146837a2a(lVar9,plVar7,0);
    return;
  }
  goto LAB_146837872;
}



// FUNCTION 1468378c6 FUN_1468378c6 body=79 status=ok
// SIG undefined FUN_1468378c6(void)

void FUN_1468378c6(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x30);
  bVar2 = FUN_146837505(*(undefined4 *)(param_1 + 0x1c));
  FUN_146837915(lVar1 + (ulonglong)bVar2 * 0x18 + 0x410,lVar1 + 0xb00,param_1);
  return;
}



// FUNCTION 146837915 FUN_146837915 body=166 status=ok
// SIG undefined FUN_146837915(void)

void FUN_146837915(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  lVar2 = *(longlong *)(param_3 + 0x38);
  if (*(longlong *)(param_3 + 0x40) != 0) {
    *(longlong *)(*(longlong *)(param_3 + 0x40) + 0x38) = lVar2;
  }
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(param_3 + 0x40);
  }
  if (param_2[1] == param_3) {
    param_2[1] = *(longlong *)(param_3 + 0x40);
  }
  if (*param_2 == param_3) {
    *param_2 = *(longlong *)(param_3 + 0x38);
    FUN_14683760c(uVar1);
  }
  *(longlong *)(param_3 + 0x40) = param_1[1];
  *(undefined8 *)(param_3 + 0x38) = 0;
  if (param_1[1] == 0) {
    *param_1 = param_3;
    param_1[1] = param_3;
    FUN_14683760c(uVar1,param_1);
  }
  else {
    *(longlong *)(param_1[1] + 0x38) = param_3;
    param_1[1] = param_3;
  }
  *(byte *)(param_3 + 0xe) =
       *(byte *)(param_3 + 0xe) & 0xfe | (undefined1 *)param_1[2] == &DAT_00020010;
  return;
}



// FUNCTION 1468379bb FUN_1468379bb body=111 status=ok
// SIG undefined FUN_1468379bb(void)

void FUN_1468379bb(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_2 + 0x30);
  lVar3 = *(longlong *)(param_2 + 0x38);
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x38) = lVar3;
  }
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  }
  if (param_1[1] == param_2) {
    param_1[1] = *(longlong *)(param_2 + 0x40);
  }
  if (*param_1 == param_2) {
    *param_1 = *(longlong *)(param_2 + 0x38);
    FUN_14683760c(lVar2);
  }
  plVar1 = (longlong *)(lVar2 + 0xbc8);
  *plVar1 = *plVar1 + -1;
  *(longlong *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(byte *)(param_2 + 0xe) = *(byte *)(param_2 + 0xe) & 0xfe;
  return;
}



// FUNCTION 146837a2a FUN_146837a2a body=139 status=ok
// SIG undefined FUN_146837a2a(void)

void FUN_146837a2a(uint *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *(byte *)((longlong)param_1 + 0xe) = *(byte *)((longlong)param_1 + 0xe) & 0xfd;
  uVar3 = (ulonglong)param_1[7];
  if (0x7ffffff < uVar3) {
    uVar3 = (ulonglong)*param_1 << 0x10;
  }
  plVar1 = *(longlong **)(param_1 + 0xc);
  if (0x20000 < uVar3) {
    FUN_146834e7d(*plVar1 + (ulonglong)(uVar3 < 0x400001) * 0x20 + 0x518,-uVar3);
  }
  lVar2 = *plVar1;
  FUN_1468379bb(param_2,param_1);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_146836e50(param_1,param_3,lVar2 + 0x20);
  return;
}



// FUNCTION 146837ab5 FUN_146837ab5 body=186 status=ok
// SIG undefined FUN_146837ab5(void)

void FUN_146837ab5(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong *plVar6;
  byte bVar7;
  
  bVar7 = *(byte *)(param_1 + 0xe);
  *(byte *)(param_1 + 0xe) = bVar7 & 0xfd;
  if ((bVar7 & 1) == 0) {
    uVar2 = *(uint *)(param_1 + 0x1c);
    bVar4 = FUN_146837505(uVar2);
    uVar5 = (ulonglong)bVar4;
    lVar3 = *(longlong *)(param_1 + 0x30);
    lVar1 = lVar3 + uVar5 * 0x18;
    plVar6 = (longlong *)(lVar1 + 0x410);
    if (((((bVar7 & 1) == 0) && (uVar2 < 0x20001)) && (*(longlong *)(lVar1 + 0x418) == param_1)) &&
       (*plVar6 == param_1)) {
      bVar7 = 6;
      if (uVar2 < 0x4001) {
        bVar7 = 0x12;
      }
      *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 1 | bVar7;
      if (uVar5 < *(ulonglong *)(lVar3 + 0xbd0)) {
        *(ulonglong *)(lVar3 + 0xbd0) = uVar5;
      }
      if (*(ulonglong *)(lVar3 + 0xbd8) < uVar5) {
        *(ulonglong *)(lVar3 + 0xbd8) = uVar5;
      }
      return;
    }
  }
  else {
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xb00);
  }
  FUN_146837a2a(param_1,plVar6,0);
  return;
}



// FUNCTION 146837b6f FUN_146837b6f body=141 status=ok
// SIG undefined FUN_146837b6f(void)

void FUN_146837b6f(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0xbd0);
  if (uVar3 <= *(ulonglong *)(param_1 + 0xbd8)) {
    plVar4 = (longlong *)(param_1 + uVar3 * 0x18 + 0x410);
    do {
      lVar2 = *plVar4;
      if ((lVar2 != 0) && (bVar1 = *(byte *)(lVar2 + 0xf), 1 < bVar1)) {
        if (*(int *)(lVar2 + 0x18) == 0) {
          *(byte *)(lVar2 + 0xf) = bVar1 - 2;
          FUN_146837a2a(*plVar4,plVar4,1);
        }
        else {
          *(byte *)(lVar2 + 0xf) = bVar1 & 1;
        }
      }
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 3;
    } while (uVar3 <= *(ulonglong *)(param_1 + 0xbd8));
  }
  *(undefined8 *)(param_1 + 0xbd0) = 0x4a;
  *(undefined8 *)(param_1 + 0xbd8) = 0;
  return;
}



// FUNCTION 146837bfc FUN_146837bfc body=490 status=ok
// SIG undefined FUN_146837bfc(void)

bool FUN_146837bfc(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  
  bVar9 = param_1 == (longlong *)0x0;
  if (param_1 != (longlong *)&DAT_149e42280 && !bVar9) {
    *(longlong *)*param_1 = *(longlong *)*param_1 + 1;
    if ((DAT_14c91eb00 != (code *)0x0) && (*(char *)(*param_1 + 8) == '\0')) {
      *(undefined1 *)(*param_1 + 8) = 1;
      (*DAT_14c91eb00)(CONCAT71((int7)((ulonglong)*param_1 >> 8),1),*(undefined8 *)*param_1,0);
      *(undefined1 *)(*param_1 + 8) = 0;
    }
    if (param_1[0x179] != 0) {
      lVar8 = 0;
      do {
        lVar4 = param_1[lVar8 * 3 + 0x82];
LAB_146837d7e:
        lVar6 = lVar4;
        if (lVar6 != 0) {
          do {
            do {
              uVar2 = *(ulonglong *)(lVar6 + 0x28);
              uVar7 = (uint)uVar2 & 3;
              lVar4 = *(longlong *)(lVar6 + 0x38);
              if (uVar7 == 3) goto LAB_146837d7e;
            } while (uVar7 == 1);
            LOCK();
            bVar9 = uVar2 == *(ulonglong *)(lVar6 + 0x28);
            if (bVar9) {
              *(ulonglong *)(lVar6 + 0x28) = uVar2 | 3;
            }
            UNLOCK();
          } while (!bVar9);
          goto LAB_146837d7e;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0x4b);
    }
    puVar5 = (undefined8 *)param_1[0x163];
    do {
      puVar3 = puVar5;
      if (puVar3 == (undefined8 *)0x0) break;
      LOCK();
      puVar5 = (undefined8 *)param_1[0x163];
      bVar9 = puVar3 == puVar5;
      if (bVar9) {
        param_1[0x163] = 0;
        puVar5 = puVar3;
      }
      UNLOCK();
    } while (!bVar9);
    while (puVar3 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)*puVar3;
      FUN_14683783a(puVar3);
      puVar3 = puVar5;
    }
    FUN_146837b6f(param_1);
    if (param_1[0x179] != 0) {
      lVar8 = 0;
      do {
        if (param_1[lVar8 * 3 + 0x82] != 0) {
          lVar4 = param_1[lVar8 * 3 + 0x82];
          do {
            lVar6 = *(longlong *)(lVar4 + 0x38);
            FUN_146837756(lVar4,1);
            if (*(int *)(lVar4 + 0x18) == 0) {
              FUN_146837a2a(lVar4,param_1 + lVar8 * 3 + 0x82,1);
            }
            else {
              lVar1 = **(longlong **)(lVar4 + 0x30);
              FUN_1468379bb(param_1 + lVar8 * 3 + 0x82,lVar4);
              *(undefined8 *)(lVar4 + 0x30) = 0;
              FUN_1468373f2(lVar4,lVar1 + 0x20);
            }
            lVar4 = lVar6;
          } while (lVar6 != 0);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0x4b);
    }
    lVar8 = *param_1;
    while (lVar4 = FUN_146836c8a(lVar8 + 0x20), lVar4 != 0) {
      FUN_146836d46(lVar4,lVar8 + 0x20);
    }
    bVar9 = false;
    if (DAT_14c75e8f8 != 0) {
      bVar9 = false;
    }
  }
  return bVar9;
}



// FUNCTION 146837de6 FUN_146837de6 body=340 status=ok
// SIG undefined FUN_146837de6(void)

void FUN_146837de6(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  bool bVar6;
  
  if (param_1 == (longlong *)&DAT_149e42280) {
    return;
  }
  plVar1 = *(longlong **)(*param_1 + 0x10);
  if (plVar1 == param_1) {
    FUN_146837bfc(param_1);
  }
  else if (param_1[0x179] != 0) {
    puVar4 = (undefined8 *)param_1[0x163];
    do {
      puVar2 = puVar4;
      if (puVar2 == (undefined8 *)0x0) break;
      LOCK();
      puVar4 = (undefined8 *)param_1[0x163];
      bVar6 = puVar2 == puVar4;
      if (bVar6) {
        param_1[0x163] = 0;
        puVar4 = puVar2;
      }
      UNLOCK();
    } while (!bVar6);
    while (puVar2 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)*puVar2;
      FUN_14683783a(puVar2);
      puVar2 = puVar4;
    }
    lVar5 = 0x410;
    do {
      lVar3 = FUN_146837570(plVar1,(undefined *)((longlong)plVar1 + lVar5),
                            (undefined *)((longlong)param_1 + lVar5));
      plVar1[0x179] = plVar1[0x179] + lVar3;
      param_1[0x179] = param_1[0x179] - lVar3;
      lVar5 = lVar5 + 0x18;
    } while (lVar5 != 0xb18);
    puVar4 = (undefined8 *)param_1[0x163];
    do {
      puVar2 = puVar4;
      if (puVar2 == (undefined8 *)0x0) break;
      LOCK();
      puVar4 = (undefined8 *)param_1[0x163];
      bVar6 = puVar2 == puVar4;
      if (bVar6) {
        param_1[0x163] = 0;
        puVar4 = puVar2;
      }
      UNLOCK();
    } while (!bVar6);
    while (puVar2 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)*puVar2;
      FUN_14683783a(puVar2);
      puVar2 = puVar4;
    }
    memset(param_1 + 1,0,0x408);
    memcpy(param_1 + 0x82,&DAT_149e42690,0x708);
    param_1[0x163] = 0;
    param_1[0x179] = 0;
  }
  FUN_146837f3a(param_1);
  return;
}



// FUNCTION 146837f3a FUN_146837f3a body=429 status=ok
// SIG undefined FUN_146837f3a(void)

void FUN_146837f3a(longlong *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  byte bVar13;
  ulonglong uVar14;
  
  lVar7 = *param_1;
  plVar12 = *(longlong **)(lVar7 + 0x10);
  if (plVar12 == param_1) {
    return;
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(longlong **)(lVar4 + 0xce8) == param_1) {
    *(longlong **)(lVar4 + 0xce8) = plVar12;
    FlsSetValue(DAT_14c75e9c8,plVar12);
    lVar7 = *param_1;
  }
  plVar5 = (longlong *)0x0;
  plVar12 = (longlong *)(lVar7 + 0x18);
  do {
    plVar11 = plVar5;
    plVar5 = (longlong *)*plVar12;
    if (plVar5 == param_1) break;
    plVar12 = plVar5 + 0x17c;
  } while (plVar5 != (longlong *)0x0);
  if (plVar5 == param_1) {
    plVar12 = plVar11 + 0x17c;
    if (plVar11 == (longlong *)0x0) {
      plVar12 = (longlong *)(lVar7 + 0x18);
    }
    *plVar12 = param_1[0x17c];
  }
  uVar8 = (ulonglong)param_1 & 0xffffffffff800000;
  if (uVar8 == 0) {
    return;
  }
  if (*(void ***)(uVar8 + 0x70) == &ExceptionList) {
    uVar14 = (ulonglong)(((uint)((ulonglong)param_1 >> 0x10) & 0x7f) * 0x50);
    lVar7 = (uVar8 + uVar14) - (ulonglong)*(uint *)(uVar8 + 0x84 + uVar14);
    if (*(char *)(lVar7 + 0x8e) == '\0') {
      *param_1 = *(longlong *)(lVar7 + 0xa0);
      *(longlong **)(lVar7 + 0xa0) = param_1;
      piVar1 = (int *)(lVar7 + 0x98);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_146837ab5(lVar7 + 0x80);
      return;
    }
  }
  lVar7 = uVar8 + ((longlong)param_1 - uVar8 >> 0x10) * 0x50;
  puVar9 = (uint *)((lVar7 + 0x80) - (ulonglong)*(uint *)(lVar7 + 0x84));
  if ((*(byte *)((longlong)puVar9 + 0xe) & 2) != 0) {
    uVar14 = (ulonglong)puVar9[7];
    if (0x7ffffff < uVar14) {
      uVar14 = (ulonglong)*puVar9 << 0x10;
    }
    param_1 = (longlong *)
              ((longlong)param_1 -
              ((longlong)param_1 -
              (uVar8 + ((longlong)puVar9 - (uVar8 + 0x80) >> 4) * -0x3333333333330000)) % uVar14);
  }
  if (*(void ***)(uVar8 + 0x70) != &ExceptionList) {
    FUN_14683921b(puVar9,param_1);
    return;
  }
  *param_1 = *(longlong *)(puVar9 + 8);
  *(longlong **)(puVar9 + 8) = param_1;
  puVar2 = puVar9 + 6;
  *puVar2 = *puVar2 - 1;
  if (*puVar2 != 0) {
    if ((*(byte *)((longlong)puVar9 + 0xe) & 1) != 0) {
      FUN_1468378c6();
      return;
    }
    return;
  }
  bVar13 = *(byte *)((longlong)puVar9 + 0xe);
  *(byte *)((longlong)puVar9 + 0xe) = bVar13 & 0xfd;
  if ((bVar13 & 1) == 0) {
    uVar3 = puVar9[7];
    bVar6 = FUN_146837505(uVar3);
    uVar8 = (ulonglong)bVar6;
    lVar4 = *(longlong *)(puVar9 + 0xc);
    lVar7 = lVar4 + uVar8 * 0x18;
    puVar10 = (undefined8 *)(lVar7 + 0x410);
    if (((((bVar13 & 1) == 0) && (uVar3 < 0x20001)) && (*(uint **)(lVar7 + 0x418) == puVar9)) &&
       ((uint *)*puVar10 == puVar9)) {
      bVar13 = 6;
      if (uVar3 < 0x4001) {
        bVar13 = 0x12;
      }
      *(byte *)((longlong)puVar9 + 0xf) = *(byte *)((longlong)puVar9 + 0xf) & 1 | bVar13;
      if (uVar8 < *(ulonglong *)(lVar4 + 0xbd0)) {
        *(ulonglong *)(lVar4 + 0xbd0) = uVar8;
      }
      if (*(ulonglong *)(lVar4 + 0xbd8) < uVar8) {
        *(ulonglong *)(lVar4 + 0xbd8) = uVar8;
      }
      return;
    }
  }
  else {
    puVar10 = (undefined8 *)(*(longlong *)(puVar9 + 0xc) + 0xb00);
  }
  FUN_146837a2a(puVar9,puVar10,0);
  return;
}



// FUNCTION 1468380e7 FUN_1468380e7 body=354 status=ok
// SIG undefined FUN_1468380e7(void)

/* WARNING: Removing unreachable block (ram,0x00014683810f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468380e7(longlong *param_1)

{
  undefined **ppuVar1;
  longlong lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulonglong uVar5;
  bool bVar6;
  
  LOCK();
  lVar2 = DAT_14c8c4698 + -1;
  UNLOCK();
  if (DAT_14c8c4690 < DAT_14c8c4698 + -1) {
    LOCK();
    UNLOCK();
    DAT_14c8c4690 = DAT_14c8c4698 + -1;
  }
  LOCK();
  _DAT_14c8c4688 = _DAT_14c8c4688 + 1;
  UNLOCK();
  DAT_14c8c4698 = lVar2;
  if ((param_1 != (longlong *)&DAT_149e42280) && ((void **)param_1[0x164] == &ExceptionList)) {
    if (DAT_14c75e8f8 == (void **)0x0) {
      ppuVar4 = &PTR_DAT_14c75ddd8;
    }
    else {
      ppuVar4 = &PTR_DAT_14c75ddd8;
      if (DAT_14c75e8f8 != &ExceptionList) {
        ppuVar4 = (undefined **)&DAT_149e42280;
      }
    }
    *(undefined ***)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xce8) =
         ppuVar4;
    FlsSetValue(DAT_14c75e9c8,ppuVar4);
    ppuVar4 = *(undefined ***)(*param_1 + 0x10);
    if (ppuVar4 != (undefined **)&DAT_149e42280) {
      ppuVar3 = *(undefined ***)(*ppuVar4 + 0x18);
      while (ppuVar3 != (undefined **)0x0) {
        ppuVar1 = (undefined **)ppuVar3[0x17c];
        bVar6 = ppuVar3 != ppuVar4;
        ppuVar3 = ppuVar1;
        if (bVar6) {
          FUN_146837de6();
        }
      }
      if (ppuVar4 == &PTR_DAT_14c75ddd8) {
        FUN_146834ef6(PTR_DAT_14c75ddd8 + 0x3d8);
        return;
      }
      FUN_146837bfc(ppuVar4);
      FUN_146834ef6(*ppuVar4 + 0x3d8);
      if (ppuVar4 != (undefined **)0x0) {
        uVar5 = DAT_14c75d698 + 0x1207;
        if ((DAT_14c75d698 & DAT_14c75d698 - 1) == 0) {
          uVar5 = uVar5 & -DAT_14c75d698;
        }
        else {
          uVar5 = uVar5 - uVar5 % DAT_14c75d698;
        }
        FUN_14279e0e4(ppuVar4,uVar5,CONCAT71((int7)(uVar5 >> 8),1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 146838263 FUN_146838263 body=192 status=ok
// SIG undefined FUN_146838263(void)

void FUN_146838263(code *UNRECOVERED_JUMPTABLE,undefined8 param_2,longlong param_3,
                  undefined8 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    pcVar3 = (code *)__acrt_iob_func(1);
    if (pcVar3 != UNRECOVERED_JUMPTABLE) {
      pcVar3 = (code *)__acrt_iob_func(2);
      if (pcVar3 != UNRECOVERED_JUMPTABLE) {
        if (param_3 != 0) {
          (*UNRECOVERED_JUMPTABLE)(param_3,param_2);
        }
                    /* WARNING: Could not recover jumptable at 0x0001468382c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_4,param_2);
        return;
      }
    }
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0xcf0) == '\0') {
    puVar1 = (undefined1 *)(lVar2 + 0xcf0);
    *puVar1 = 1;
    pcVar3 = FUN_1468392cc;
    if (DAT_14c91eb48 != (code *)0x0) {
      pcVar3 = DAT_14c91eb48;
    }
    if (param_3 != 0) {
      (*pcVar3)(param_3,0);
    }
    (*pcVar3)(param_4,0);
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 146838323 FUN_146838323 body=85 status=ok
// SIG undefined FUN_146838323(void)

void FUN_146838323(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_18 = &local_res20;
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_res20 = param_4;
  local_10 = local_18;
  FUN_146838379(FUN_146838453,param_2,0,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146838379 FUN_146838379 body=217 status=ok
// SIG undefined FUN_146838379(void)

void FUN_146838379(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined8 local_240;
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (param_4 != 0) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0xcf0) == '\0') {
      puVar1 = (undefined1 *)(lVar2 + 0xcf0);
      *puVar1 = 1;
      puVar3 = (ulonglong *)FUN_144737586();
      local_240 = param_5;
      local_248 = 0;
      __stdio_common_vsprintf(*puVar3 | 2,local_238,0x1ff,param_4);
      *puVar1 = 0;
      FUN_146838263(param_1,param_2,param_3,local_238);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146838453 FUN_146838453 body=159 status=ok
// SIG undefined FUN_146838453(void)

void FUN_146838453(char *param_1,undefined8 *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if (param_2 != (undefined8 *)0x0 && param_1 != (char *)0x0) {
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      param_1 = param_1 + 1;
      uVar2 = param_2[3];
      if ((ulonglong)param_2[4] <= uVar2) {
        *(undefined1 *)(param_2[2] + uVar2) = 0;
        FUN_146838263(*param_2,param_2[1],0,param_2[2]);
        uVar2 = 0;
      }
      param_2[3] = uVar2 + 1;
      *(char *)(param_2[2] + uVar2) = cVar1;
      if (cVar1 == '\n') {
        *(undefined1 *)(param_2[2] + param_2[3]) = 0;
        FUN_146838263(*param_2,param_2[1],0,param_2[2]);
        param_2[3] = 0;
      }
      cVar1 = *param_1;
    }
  }
  return;
}



// FUNCTION 1468384f2 FUN_1468384f2 body=545 status=ok
// SIG undefined FUN_1468384f2(void)

void FUN_1468384f2(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_78 [32];
  undefined *local_58;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146838323(param_1,param_4,"%10s:",param_2);
  if (param_3 < 1) {
    if (param_3 < 0) {
      FUN_146838714(param_1[2],0xffffffffffffffff,param_4,0);
      FUN_146838714(*param_1,0xffffffffffffffff,param_4,0);
      FUN_146838714(param_1[1],0xffffffffffffffff,param_4,0);
      FUN_146838714(param_1[3],0xffffffffffffffff,param_4,0);
      FUN_146838323();
    }
    else {
      FUN_146838714(param_1[2],1,param_4,0);
      FUN_146838714(*param_1,1,param_4,0);
      FUN_146838323();
      FUN_146838714(param_1[3],1,param_4,0);
    }
    FUN_146838323();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  FUN_146838714(param_1[2],1,param_4,0);
  FUN_146838714(*param_1,1,param_4,0);
  FUN_146838714(param_1[1],1,param_4,0);
  FUN_146838714(param_1[3],1,param_4,0);
  local_58 = &DAT_149e430b6;
  FUN_14626ea25(local_48,0x20,"%d %s ",1);
  FUN_146838323();
  FUN_146838323();
  FUN_146838323();
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146838714 FUN_146838714 body=335 status=ok
// SIG undefined FUN_146838714(void)

void FUN_146838714(ulonglong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_88 [32];
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined1 local_48 [40];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar8 = &DAT_149e430b6;
  if (param_2 < 1) {
    puVar8 = &DAT_149dfc0cb;
  }
  uVar5 = 0x400;
  if (param_2 == 0) {
    uVar5 = 1000;
  }
  uVar11 = -param_1;
  if ((longlong)-param_1 < 0) {
    uVar11 = param_1;
  }
  if (uVar11 < uVar5) {
    pcVar9 = "%d %s ";
    param_1 = param_1 & 0xffffffff;
    local_68 = puVar8;
  }
  else {
    uVar12 = 0x100000;
    if (param_2 == 0) {
      uVar12 = 1000000;
    }
    puVar7 = &DAT_149e430c1;
    if (uVar11 < uVar12) {
      puVar7 = &DAT_149e430bf;
      uVar12 = uVar5;
    }
    uVar6 = uVar5 * uVar12;
    local_60 = &DAT_149e430c3;
    if (uVar11 < uVar5 * uVar12) {
      uVar6 = uVar12;
      local_60 = puVar7;
    }
    lVar3 = (longlong)param_1 / (longlong)(uVar6 / 10);
    auVar1 = SEXT816(lVar3) * SEXT816(0x6666666666666667);
    uVar10 = (int)(auVar1._8_8_ >> 2) - (auVar1._12_4_ >> 0x1f);
    param_1 = (ulonglong)uVar10;
    iVar4 = (int)lVar3 + uVar10 * -10;
    iVar2 = -iVar4;
    if (iVar2 < 0) {
      iVar2 = iVar4;
    }
    local_68 = (undefined *)CONCAT44(local_68._4_4_,iVar2);
    pcVar9 = "%ld.%ld %s%s";
    local_58 = puVar8;
  }
  FUN_14626ea25(local_48,0x20,pcVar9,param_1);
  FUN_146838323();
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146838864 FUN_146838864 body=261 status=ok
// SIG undefined FUN_146838864(void)

void FUN_146838864(void)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE ProcessHandle;
  undefined1 auStackY_58 [32];
  HANDLE local_28;
  _TOKEN_PRIVILEGES local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStackY_58;
  if (DAT_14c8c47d0 != 0) goto LAB_146838882;
  local_28 = (HANDLE)0x0;
  ProcessHandle = GetCurrentProcess();
  BVar1 = OpenProcessToken(ProcessHandle,0x28,&local_28);
  if (BVar1 == 0) {
LAB_146838940:
    DVar2 = GetLastError();
  }
  else {
    BVar1 = LookupPrivilegeValueW
                      ((LPCWSTR)0x0,L"SeLockMemoryPrivilege",&local_20.Privileges[0].Luid);
    if (BVar1 == 0) {
LAB_146838935:
      CloseHandle(local_28);
      goto LAB_146838940;
    }
    local_20.PrivilegeCount = 1;
    local_20.Privileges[0].Attributes = 2;
    BVar1 = AdjustTokenPrivileges(local_28,0,&local_20,0,(PTOKEN_PRIVILEGES)0x0,(PDWORD)0x0);
    if (BVar1 == 0) goto LAB_146838935;
    DVar2 = GetLastError();
    if (DVar2 == 0) {
      DAT_14c8c47d0 = GetLargePageMinimum();
      CloseHandle(local_28);
      goto LAB_146838882;
    }
    CloseHandle(local_28);
  }
  FUN_146835ac3("cannot enable large OS page support, error %lu\n",DVar2);
LAB_146838882:
  if ((local_10 ^ (ulonglong)auStackY_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683896a FUN_14683896a body=286 status=ok
// SIG undefined FUN_14683896a(void)

/* WARNING: Removing unreachable block (ram,0x000146838a0d) */

longlong FUN_14683896a(undefined8 param_1,ulonglong param_2,ulonglong param_3,char param_4,
                      undefined1 *param_5)

{
  DWORD DVar1;
  longlong lVar2;
  
  if (DAT_14c8c47d0 != 0) {
    if (DAT_14c75ea64 == 0) {
      FUN_1412bb367(&DAT_14c75ea60);
    }
    if (((DAT_14c75ea60 != 0) && (param_2 % DAT_14c8c47d0 == 0)) &&
       (param_4 == '\x01' && param_3 % DAT_14c8c47d0 == 0)) {
      if (DAT_14c91eb68 == 0) {
        *param_5 = 1;
        lVar2 = FUN_14279e682(param_1,param_2,param_3,0x20003000);
        if (lVar2 != 0) {
          return lVar2;
        }
        DAT_14c91eb68 = 10;
      }
      else {
        DAT_14c91eb68 = DAT_14c91eb68 + -1;
        LOCK();
        UNLOCK();
      }
    }
  }
  *param_5 = 0;
  lVar2 = FUN_14279e682(param_1,param_2,param_3,0x3000);
  if (lVar2 == 0) {
    DVar1 = GetLastError();
    FUN_146835ac3("unable to allocate OS memory (%zu bytes, error code: %i, address: %p, large only: %d, allow large: %d)\n"
                  ,param_2,DVar1,param_1,0,param_4);
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 146838a88 FUN_146838a88 body=128 status=ok
// SIG undefined FUN_146838a88(void)

ulonglong FUN_146838a88(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_3 != (longlong *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0 || param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = (DAT_14c75d698 + param_1) - 1;
    if ((DAT_14c75d698 & DAT_14c75d698 - 1) == 0) {
      uVar2 = uVar2 & -DAT_14c75d698;
    }
    else {
      uVar2 = uVar2 - uVar2 % DAT_14c75d698;
    }
    lVar1 = (param_1 + param_2) - ((ulonglong)(param_1 + param_2) % DAT_14c75d698 + uVar2);
    uVar3 = 0;
    if (0 < lVar1) {
      uVar3 = uVar2;
    }
    if ((param_3 != (longlong *)0x0) && (0 < lVar1)) {
      *param_3 = lVar1;
      uVar3 = uVar2;
    }
  }
  return uVar3;
}



// FUNCTION 146838b08 FUN_146838b08 body=259 status=ok
// SIG undefined FUN_146838b08(void)

void FUN_146838b08(int param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  
  plVar2 = *(longlong **)(param_2 + 0x398);
  if (param_1 < 0) {
    if ((longlong *)0x14c8c47bf < plVar2 || plVar2 < &DAT_14c8c4580) {
      lVar4 = plVar2[3] + -1;
      plVar2[3] = lVar4;
      if (plVar2[2] < lVar4) {
        plVar2[2] = lVar4;
      }
      plVar2[1] = plVar2[1] + 1;
    }
    else {
      LOCK();
      plVar1 = plVar2 + 3;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      do {
        lVar3 = plVar2[2];
        if (lVar4 + -1 <= lVar3) break;
        LOCK();
        bVar6 = lVar3 == plVar2[2];
        if (bVar6) {
          plVar2[2] = lVar4 + -1;
        }
        UNLOCK();
      } while (!bVar6);
      LOCK();
      plVar2[1] = plVar2[1] + 1;
      UNLOCK();
    }
    lVar4 = -1;
  }
  else {
    if ((longlong *)0x14c8c47bf < plVar2 || plVar2 < &DAT_14c8c4580) {
      lVar3 = plVar2[3];
      lVar4 = lVar3 + 1;
      plVar2[3] = lVar4;
      if (plVar2[2] <= lVar3) {
        plVar2[2] = lVar4;
      }
      *plVar2 = *plVar2 + 1;
    }
    else {
      LOCK();
      plVar1 = plVar2 + 3;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      do {
        lVar3 = plVar2[2];
        if (lVar4 < lVar3) break;
        LOCK();
        bVar6 = lVar3 == plVar2[2];
        if (bVar6) {
          plVar2[2] = lVar4 + 1;
        }
        UNLOCK();
      } while (!bVar6);
      LOCK();
      *plVar2 = *plVar2 + 1;
      UNLOCK();
    }
    lVar4 = 1;
  }
  uVar5 = lVar4 + *(longlong *)(param_2 + 0x360);
  *(ulonglong *)(param_2 + 0x360) = uVar5;
  if (*(ulonglong *)(param_2 + 0x368) < uVar5) {
    *(ulonglong *)(param_2 + 0x368) = uVar5;
  }
  uVar5 = (longlong)param_1 + *(longlong *)(param_2 + 0x370);
  *(ulonglong *)(param_2 + 0x370) = uVar5;
  if (*(ulonglong *)(param_2 + 0x378) < uVar5) {
    *(ulonglong *)(param_2 + 0x378) = uVar5;
  }
  return;
}



// FUNCTION 146838c0b FUN_146838c0b body=237 status=ok
// SIG undefined FUN_146838c0b(void)

longlong FUN_146838c0b(longlong param_1,char param_2,ulonglong param_3,longlong param_4,
                      longlong *param_5,ulonglong *param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((0xffffffffff7fffff < param_4 - 0x800001U) &&
     (param_3 < (ulonglong)(*(longlong *)(param_1 + 0x58) * 0x10000 + param_1))) {
    uVar2 = param_3 - param_1;
    uVar3 = uVar2 + 0x1ffff;
    lVar1 = param_4;
    if (param_2 == '\0') {
      uVar3 = uVar2;
      lVar1 = param_4 + 0x1ffff;
    }
    uVar4 = uVar3 & 0xfffffffffffe0000;
    uVar5 = lVar1 + uVar2 & 0xfffffffffffe0000;
    *param_5 = param_1 + uVar4;
    uVar2 = uVar5 - uVar4;
    if (uVar5 < uVar4) {
      uVar2 = 0;
    }
    *param_6 = uVar2;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      return 0;
    }
    uVar3 = uVar3 >> 0x11;
    uVar2 = uVar2 >> 0x11;
    if (0x40 < uVar2 + uVar3) {
      FUN_146835ac3("commit mask overflow: %zu %zu %zu %zu 0x%p %zu\n",uVar3,uVar2,uVar4,uVar5,
                    param_3,param_4);
    }
    if (uVar2 == 0x40) {
      return -1;
    }
    if (uVar2 != 0) {
      return ~(-1L << ((byte)uVar2 & 0x3f)) << ((byte)uVar3 & 0x3f);
    }
  }
  return 0;
}



// FUNCTION 146838cf8 FUN_146838cf8 body=241 status=ok
// SIG undefined FUN_146838cf8(void)

void FUN_146838cf8(uint *param_1,undefined8 param_2)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = (ulonglong)param_1 & 0xffffffffff800000;
  if (*(int *)(uVar3 + 0x68) != 1) {
    lVar1 = *(longlong *)(uVar3 + 0x70);
    uVar4 = (ulonglong)*param_1;
    puVar2 = param_1 + uVar4 * 0x14;
    if (((puVar2 < (uint *)(*(longlong *)(uVar3 + 0x78) * 0x50 + uVar3 + 0x80)) && (puVar2[7] == 0))
       && (uVar4 = *puVar2 + uVar4, lVar1 != 0)) {
      FUN_146838de9(puVar2,param_2);
    }
    if (((uint *)(uVar3 + 0x80) < param_1) &&
       (*(int *)((longlong)param_1 + (-0x34 - (ulonglong)param_1[-0x13])) == 0)) {
      param_1 = (uint *)((longlong)param_1 + (-0x50 - (ulonglong)param_1[-0x13]));
      uVar4 = uVar4 + *param_1;
      if (lVar1 != 0) {
        FUN_146838de9(param_1,param_2);
      }
    }
    FUN_146838e4b(uVar3,((longlong)((ulonglong)((uint)param_1 & 0x7fffff) - 0x80) >> 4) *
                        -0x3333333333333333,uVar4,param_2);
    return;
  }
  param_1[7] = 0;
  return;
}



// FUNCTION 146838de9 FUN_146838de9 body=98 status=ok
// SIG undefined FUN_146838de9(void)

void FUN_146838de9(uint *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = (ulonglong)*param_1;
  if (1 < uVar1) {
    uVar3 = 0x40;
    uVar2 = uVar1 - 1;
    if (uVar2 != 0) {
      uVar3 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> uVar3 == 0; uVar3 = uVar3 - 1) {
        }
      }
      uVar3 = uVar3 ^ 0x3f;
    }
    uVar3 = 0x3f - uVar3;
    if (uVar2 == 0) {
      uVar3 = 0x40;
    }
    if (2 < uVar3) {
      uVar1 = ((ulonglong)((uint)(uVar2 >> ((char)uVar3 - 2U & 0x3f)) & 3) + uVar3 * 4) - 4;
    }
  }
  FUN_146839064(param_2 + uVar1 * 0x18,param_1);
  return;
}



// FUNCTION 146838e4b FUN_146838e4b body=536 status=ok
// SIG undefined FUN_146838e4b(void)

void FUN_146838e4b(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  longlong *local_50;
  longlong local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_1 + 0x68) == 1) || (*(longlong *)(param_1 + 0x70) == 0)) {
    puVar5 = (ulonglong *)0x0;
  }
  else {
    uVar2 = param_3;
    if (8 < param_3) {
      uVar2 = param_3 - 1;
      uVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> uVar6 == 0; uVar6 = uVar6 - 1) {
        }
      }
      uVar2 = ((ulonglong)((uint)(uVar2 >> (0x3dU - (char)(uVar6 ^ 0x3f) & 0x3f)) & 3) +
               ((uVar6 ^ 0x3f) & 0xffffffff) * 4 ^ 0xfc) - 4;
    }
    puVar5 = (ulonglong *)(param_4 + uVar2 * 0x18);
  }
  lVar1 = param_2 * 0x50;
  uVar2 = 1;
  if (1 < param_3) {
    uVar2 = param_3;
  }
  *(int *)(param_1 + 0x80 + lVar1) = (int)uVar2;
  *(undefined4 *)(param_1 + 0x84 + lVar1) = 0;
  if (1 < param_3) {
    lVar4 = param_1 + 0x80;
    lVar3 = (param_2 + uVar2) * 0x50;
    *(undefined4 *)(lVar3 + -0x50 + lVar4) = 0;
    *(int *)(lVar3 + -0x4c + lVar4) = (int)uVar2 * 0x50 + -0x50;
    *(undefined4 *)(lVar3 + -0x34 + lVar4) = 0;
  }
  lVar1 = param_1 + lVar1;
  uVar6 = lVar1 + 0x80;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    if (DAT_14c75eb3c == 0) {
      FUN_1412bb367(&DAT_14c75eb38);
    }
    lVar4 = (uVar6 & 0xffffffffff800000) +
            ((ulonglong)((uint)uVar6 & 0x7fffff) - 0x80 >> 4) * -0x3333333333330000;
    if (DAT_14c75eb38 == 0) {
      FUN_1468390a7(param_1,lVar4,uVar2 << 0x10);
    }
    else {
      local_50 = &local_48;
      local_58 = local_40;
      uVar2 = FUN_146838c0b(param_1,1,lVar4,uVar2 << 0x10);
      if ((uVar2 != 0) && (local_48 != 0)) {
        *(ulonglong *)(param_1 + 0x18) =
             *(ulonglong *)(param_1 + 0x18) | uVar2 & *(ulonglong *)(param_1 + 0x20);
        lVar4 = FUN_145d75773();
        if (DAT_14c75eb3c == 0) {
          FUN_1412bb367(&DAT_14c75eb38);
        }
        *(longlong *)(param_1 + 0x10) = lVar4 + DAT_14c75eb38;
      }
    }
  }
  if (puVar5 != (ulonglong *)0x0) {
    *(undefined8 *)(lVar1 + 0xc0) = 0;
    *(ulonglong *)(lVar1 + 0xb8) = *puVar5;
    *puVar5 = uVar6;
    puVar5 = puVar5 + 1;
    if (*(longlong *)(lVar1 + 0xb8) != 0) {
      puVar5 = (ulonglong *)(*(longlong *)(lVar1 + 0xb8) + 0x40);
    }
    *puVar5 = uVar6;
  }
  *(undefined4 *)(lVar1 + 0x9c) = 0;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146839064 FUN_146839064 body=67 status=ok
// SIG undefined FUN_146839064(void)

void FUN_146839064(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x38) = lVar1;
  }
  if (*param_1 == param_2) {
    *param_1 = lVar1;
  }
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  }
  if (param_1[1] == param_2) {
    param_1[1] = *(longlong *)(param_2 + 0x40);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 1;
  return;
}



// FUNCTION 1468390a7 FUN_1468390a7 body=219 status=ok
// SIG undefined FUN_1468390a7(void)

void FUN_1468390a7(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &local_38;
  local_48 = &local_30;
  uVar2 = FUN_146838c0b(param_1,1,param_2,param_3);
  if (local_38 != 0 && uVar2 != 0) {
    uVar4 = *(ulonglong *)(param_1 + 0x20) & uVar2;
    if (uVar4 != 0) {
      lVar3 = 0x800000;
      if (uVar4 != 0xffffffffffffffff) {
        lVar3 = 0;
        do {
          lVar3 = lVar3 + (ulonglong)((uint)uVar4 & 1);
          bVar1 = 1 < uVar4;
          uVar4 = uVar4 >> 1;
        } while (bVar1);
        lVar3 = lVar3 * 0x20000;
      }
      FUN_146834e7d(&DAT_14c8c45e0,local_38 - lVar3);
      if (*(char *)(param_1 + 0xb) == '\x01') {
        FUN_14279e169(local_30,local_38,&local_21);
      }
      *(ulonglong *)(param_1 + 0x20) = *(ulonglong *)(param_1 + 0x20) & ~uVar2;
    }
    *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) & ~uVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146839183 FUN_146839183 body=152 status=ok
// SIG undefined FUN_146839183(void)

void FUN_146839183(longlong param_1,char param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  if (((*(char *)(param_1 + 0xb) == '\x01') && (*(longlong *)(param_1 + 0x18) != 0)) &&
     ((lVar2 = FUN_145d75773(), param_2 != '\0' || (*(longlong *)(param_1 + 0x10) <= lVar2)))) {
    uVar4 = *(ulonglong *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (uVar4 != 0) {
      lVar2 = 0;
      do {
        if ((uVar4 & 1) == 0) {
LAB_1468391cf:
          lVar6 = 0;
        }
        else {
          lVar5 = 0;
          lVar6 = 0;
          uVar3 = uVar4;
          do {
            uVar4 = uVar3 >> 1;
            lVar6 = lVar6 + 1;
            lVar5 = lVar5 + 0x20000;
            uVar1 = uVar3 & 2;
            uVar3 = uVar4;
          } while (uVar1 != 0);
          if (lVar6 == 0) goto LAB_1468391cf;
          FUN_1468390a7(param_1,lVar2 * 0x20000 + param_1,lVar5);
        }
        lVar2 = lVar2 + lVar6 + 1;
        bVar7 = uVar4 != 0;
        uVar4 = uVar4 >> 1;
      } while (bVar7);
    }
  }
  return;
}



// FUNCTION 14683921b FUN_14683921b body=128 status=ok
// SIG undefined FUN_14683921b(void)

ulonglong FUN_14683921b(ulonglong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  if (*(int *)((param_1 & 0xffffffffff800000) + 0x68) == 1) {
    FUN_145d75242();
    plVar2 = *(longlong **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xce8);
    uVar5 = plVar2[0x164];
    puVar1 = (ulonglong *)((param_1 & 0xffffffffff800000) + 0x70);
    LOCK();
    uVar4 = *puVar1;
    bVar6 = uVar4 == 0;
    if (bVar6) {
      *puVar1 = uVar5;
      uVar4 = 0;
    }
    UNLOCK();
    if (!bVar6) {
      return uVar4;
    }
    *param_2 = *(ulonglong *)(param_1 + 0x10);
    *(ulonglong **)(param_1 + 0x10) = param_2;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xfe;
    uVar4 = FUN_146836e50(param_1,CONCAT71((int7)(uVar5 >> 8),1),*plVar2 + 0x20);
    return uVar4;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x28);
  do {
    while ((uVar4 & 3) == 0) {
      LOCK();
      uVar5 = *(ulonglong *)(param_1 + 0x28);
      bVar6 = uVar4 == uVar5;
      if (bVar6) {
        *(ulonglong *)(param_1 + 0x28) = uVar4 | 1;
        uVar5 = uVar4;
      }
      UNLOCK();
      uVar4 = uVar5;
      if (bVar6) {
        lVar3 = *(longlong *)(param_1 + 0x30);
        if (lVar3 != 0) {
          uVar4 = *(ulonglong *)(lVar3 + 0xb18);
          do {
            *param_2 = uVar4;
            LOCK();
            uVar5 = *(ulonglong *)(lVar3 + 0xb18);
            bVar6 = uVar4 == uVar5;
            if (bVar6) {
              *(ulonglong *)(lVar3 + 0xb18) = (ulonglong)param_2;
              uVar5 = uVar4;
            }
            UNLOCK();
            uVar4 = uVar5;
          } while (!bVar6);
        }
        uVar4 = *(ulonglong *)(param_1 + 0x28);
        do {
          LOCK();
          uVar5 = *(ulonglong *)(param_1 + 0x28);
          bVar6 = uVar4 == uVar5;
          if (bVar6) {
            *(ulonglong *)(param_1 + 0x28) = uVar4 & 0xfffffffffffffffc | 2;
            uVar5 = uVar4;
          }
          UNLOCK();
          uVar4 = uVar5;
        } while (!bVar6);
        return uVar5;
      }
    }
    *param_2 = uVar4 & 0xfffffffffffffffc;
    LOCK();
    uVar5 = *(ulonglong *)(param_1 + 0x28);
    bVar6 = uVar4 == uVar5;
    if (bVar6) {
      *(ulonglong *)(param_1 + 0x28) = uVar4 & 3 | (ulonglong)param_2;
      uVar5 = uVar4;
    }
    UNLOCK();
    uVar4 = uVar5;
  } while (!bVar6);
  return uVar5;
}



// FUNCTION 1468392a5 FUN_1468392a5 body=39 status=ok
// SIG undefined FUN_1468392a5(void)

void FUN_1468392a5(char *param_1)

{
  if (DAT_14c91eb09 == '\x01') {
    _cputs(param_1);
  }
  FUN_1468392cc(param_1);
  return;
}



// FUNCTION 1468392cc FUN_1468392cc body=132 status=ok
// SIG undefined FUN_1468392cc(void)

void FUN_1468392cc(char *param_1)

{
  ulonglong uVar1;
  size_t sVar2;
  char *_Dst;
  size_t _Size;
  
  uVar1 = DAT_14c91ec50;
  if (((param_1 != (char *)0x0) && (DAT_14c91ec50 < 0x8000)) &&
     (sVar2 = strlen(param_1), uVar1 = DAT_14c91ec50, sVar2 != 0)) {
    LOCK();
    uVar1 = DAT_14c91ec50 + sVar2;
    UNLOCK();
    if (DAT_14c91ec50 < 0x8000) {
      _Size = 0x7fff - DAT_14c91ec50;
      if (DAT_14c91ec50 + sVar2 < 0x8000) {
        _Size = sVar2;
      }
      _Dst = &DAT_14c91ec60 + DAT_14c91ec50;
      DAT_14c91ec50 = uVar1;
      if (DAT_14c91eb40 != '\x01') {
        memcpy(_Dst,param_1,_Size);
        return;
      }
      for (; uVar1 = DAT_14c91ec50, _Size != 0; _Size = _Size - 1) {
        *_Dst = *param_1;
        param_1 = param_1 + 1;
        _Dst = _Dst + 1;
      }
    }
  }
  DAT_14c91ec50 = uVar1;
  return;
}



// FUNCTION 146839350 FUN_146839350 body=74 status=ok
// SIG undefined FUN_146839350(void)

void FUN_146839350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  local_18 = param_3;
  FUN_1449b9e04(param_1,local_c,&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683939c FUN_14683939c body=42 status=ok
// SIG undefined FUN_14683939c(void)

void FUN_14683939c(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144a49b4a(*(undefined4 *)(param_2 + 1),*param_2);
  FUN_14683c01a(param_1,uVar1,param_2);
  return;
}



// FUNCTION 1468393c6 FUN_1468393c6 body=138 status=ok
// SIG undefined FUN_1468393c6(void)

undefined4 FUN_1468393c6(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14047e0ee(local_38,&local_48,&local_38,0);
  uVar3 = FUN_141360850(local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146839452 FUN_146839452 body=142 status=ok
// SIG undefined FUN_146839452(void)

undefined4 FUN_146839452(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1449ba96e(local_38,&local_28);
  if (local_28 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*local_28 + 0x50))(local_28,param_3);
  }
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468394e2 FUN_1468394e2 body=142 status=ok
// SIG undefined FUN_1468394e2(void)

undefined4 FUN_1468394e2(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1449ba96e(local_38,&local_28);
  if (local_28 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*local_28 + 0x28))(local_28,param_3);
  }
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146839572 FUN_146839572 body=142 status=ok
// SIG undefined FUN_146839572(void)

undefined4 FUN_146839572(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1449ba96e(local_38,&local_28);
  if (local_28 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*local_28 + 8))(local_28,param_3);
  }
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146839602 FUN_146839602 body=174 status=ok
// SIG undefined FUN_146839602(void)

void FUN_146839602(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_48;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar1 * 2);
  }
  FUN_14626eb76(param_1,&local_50,param_3);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468396b2 FUN_1468396b2 body=168 status=ok
// SIG undefined FUN_1468396b2(void)

void FUN_1468396b2(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_38;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar1 * 2);
  }
  FUN_145964f10(param_1,&local_40,param_3);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683975c FUN_14683975c body=255 status=ok
// SIG undefined FUN_14683975c(void)

void FUN_14683975c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_38;
  pvVar1 = (void *)*param_3;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar1,lVar2 * 2);
  }
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_2 + 1);
  lVar2 = (longlong)local_48;
  pvVar1 = (void *)*param_2;
  if (lVar2 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,pvVar1,lVar2 * 2);
  }
  FUN_145964f10(param_1,&local_50,&local_40);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683985c FUN_14683985c body=265 status=ok
// SIG undefined FUN_14683985c(void)

void FUN_14683985c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  longlong local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  local_38 = iVar1;
  if (iVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_14047d15e(&local_40,iVar1,0);
    FUN_14047cdb6(local_40,uVar2,iVar1);
  }
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_48;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar3 * 2);
  }
  FUN_14609b62e(param_1,&local_50,&local_40);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_14047c710(local_40,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146839966 FUN_146839966 body=145 status=ok
// SIG undefined FUN_146839966(void)

undefined4 FUN_146839966(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1449ba96e(local_38,&local_28);
  if (local_28 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*local_28 + 0x80))(local_28,param_3);
  }
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468399f8 FUN_1468399f8 body=498 status=ok
// SIG undefined FUN_1468399f8(void)

void FUN_1468399f8(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong **local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *param_3;
  local_48 = param_2;
  if (lVar5 == 0) {
    plVar6 = (longlong *)FUN_14001cc68(0x20,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_149e43cb0;
    local_58 = plVar6 + 2;
    plVar6[2] = (longlong)&PTR_FUN_149e43cd0;
    *(undefined4 *)(plVar6 + 3) = 1;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_40 = &local_58;
    local_50 = plVar6;
    FUN_1413ef6fe(param_1,local_34,&local_48,0);
    plVar4 = local_50;
    if (local_50 == (longlong *)0x0) goto LAB_146839afe;
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_146839afe;
    (**(code **)*local_50)(local_50);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) goto LAB_146839afe;
    lVar5 = *plVar4;
  }
  else {
    plVar6 = (longlong *)param_3[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    plVar4 = (longlong *)FUN_14001cc68(0x30,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_149e440d0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_58 = plVar4 + 2;
    plVar4[2] = (longlong)&PTR_FUN_149e440f0;
    plVar4[4] = lVar5;
    plVar4[5] = (longlong)plVar6;
    *(undefined4 *)(plVar4 + 3) = 6;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_40 = &local_58;
    local_50 = plVar4;
    FUN_1413ef6fe(param_1,local_34,&local_48,0);
    plVar3 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (plVar4 == (longlong *)0x0) goto LAB_146839afe;
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_146839afe;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) goto LAB_146839afe;
    lVar5 = *plVar4;
  }
  (**(code **)(lVar5 + 0x10))(plVar4);
LAB_146839afe:
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146839bec FUN_146839bec body=168 status=ok
// SIG undefined FUN_146839bec(void)

void FUN_146839bec(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_38;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar1 * 2);
  }
  FUN_1468399f8(param_1,&local_40,param_3);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146839c96 FUN_146839c96 body=352 status=ok
// SIG undefined FUN_146839c96(void)

longlong FUN_146839c96(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
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
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = *(int *)((longlong)param_1 + 0x2c);
  iVar7 = 0;
  lVar6 = (longlong)(int)param_1[9] * 4;
  if ((ulonglong)(longlong)(int)param_1[9] < 2) {
    lVar6 = 0;
  }
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
    iVar7 = (int)param_1[5];
  }
  lVar6 = (ulonglong)(iVar3 + 0x1fU >> 5) * 4 + (longlong)iVar2 * 0x28 + lVar6;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if ((iStack_44 != iVar7) || (local_50 != plVar1)) {
    do {
      iVar2 = *(int *)(*local_80 + 0xc + (longlong)iStack_64 * 0x28);
      plVar4 = *(longlong **)(*local_80 + 0x10 + (longlong)iStack_64 * 0x28);
      if (plVar4 == (longlong *)0x0) {
        lVar5 = 0;
      }
      else {
        lVar5 = (**(code **)(*plVar4 + 0x90))();
      }
      lVar6 = lVar6 + (longlong)iVar2 * 2 + lVar5;
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_1 || (local_70 != plVar1 || iStack_64 != iVar7));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 146839df8 FUN_146839df8 body=76 status=ok
// SIG undefined FUN_146839df8(void)

void FUN_146839df8(longlong *param_1,float *param_2)

{
  char cVar1;
  undefined1 auStack_38 [32];
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = (**(code **)(*param_1 + 0x50))(param_1,&local_18);
  if (cVar1 != '\0') {
    *param_2 = (float)local_18;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146839e46 FUN_146839e46 body=115 status=ok
// SIG undefined FUN_146839e46(void)

undefined8 FUN_146839e46(longlong *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_38 [32];
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = (**(code **)(*param_1 + 0x50))(param_1,&local_18);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((0.0 <= local_18) && (local_18 <= 255.0)) {
      dVar3 = (double)FUN_14047fbb4();
      *param_2 = (char)(int)dVar3;
      uVar2 = CONCAT71((uint7)(uint3)((uint)(int)dVar3 >> 8),1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146839eba FUN_146839eba body=116 status=ok
// SIG undefined FUN_146839eba(void)

undefined8 FUN_146839eba(longlong *param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_38 [32];
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = (**(code **)(*param_1 + 0x50))(param_1,&local_18);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((0.0 <= local_18) && (local_18 <= 65535.0)) {
      dVar3 = (double)FUN_14047fbb4();
      *param_2 = (short)(int)dVar3;
      uVar2 = CONCAT71((uint7)(uint3)((uint)(int)dVar3 >> 8),1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146839f30 FUN_146839f30 body=116 status=ok
// SIG undefined FUN_146839f30(void)

undefined8 FUN_146839f30(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_38 [32];
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = (**(code **)(*param_1 + 0x50))(param_1,&local_18);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((0.0 <= local_18) && (local_18 <= 4294967295.0)) {
      dVar3 = (double)FUN_14047fbb4();
      *param_2 = (int)(longlong)dVar3;
      uVar2 = CONCAT71((int7)((ulonglong)(longlong)dVar3 >> 8),1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146839fa6 FUN_146839fa6 body=155 status=ok
// SIG undefined FUN_146839fa6(void)

undefined8 FUN_146839fa6(longlong *param_1,ulonglong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = (**(code **)(*param_1 + 0x50))(param_1,&local_20);
  uVar2 = -(ulonglong)(0.0 <= local_20 && local_20 < 1.8446744073709552e+19) & 0xffffffff;
  bVar1 = (byte)uVar2 & bVar1;
  if (bVar1 == 1) {
    dVar3 = (double)FUN_14047fbb4();
    *param_2 = (longlong)(dVar3 - 9.223372036854776e+18) & (longlong)dVar3 >> 0x3f | (longlong)dVar3
    ;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)(uVar2 >> 8),bVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683a042 FUN_14683a042 body=115 status=ok
// SIG undefined FUN_14683a042(void)

undefined8 FUN_14683a042(longlong *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_38 [32];
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = (**(code **)(*param_1 + 0x50))(param_1,&local_18);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((-128.0 <= local_18) && (local_18 <= 127.0)) {
      dVar3 = (double)FUN_14047fbb4();
      *param_2 = (char)(int)dVar3;
      uVar2 = CONCAT71((uint7)(uint3)((uint)(int)dVar3 >> 8),1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683a0b6 FUN_14683a0b6 body=116 status=ok
// SIG undefined FUN_14683a0b6(void)

undefined8 FUN_14683a0b6(longlong *param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_38 [32];
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = (**(code **)(*param_1 + 0x50))(param_1,&local_18);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((-32768.0 <= local_18) && (local_18 <= 32767.0)) {
      dVar3 = (double)FUN_14047fbb4();
      *param_2 = (short)(int)dVar3;
      uVar2 = CONCAT71((uint7)(uint3)((uint)(int)dVar3 >> 8),1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683a12c FUN_14683a12c body=133 status=ok
// SIG undefined FUN_14683a12c(void)

undefined8 FUN_14683a12c(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = (**(code **)(*param_1 + 0x50))(param_1,&local_20);
  uVar2 = -(ulonglong)(-9.223372036854776e+18 <= local_20 && local_20 < 9.223372036854776e+18) &
          0xffffffff;
  bVar1 = (byte)uVar2 & bVar1;
  if (bVar1 == 1) {
    dVar3 = (double)FUN_14047fbb4();
    *param_2 = (longlong)dVar3;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)(uVar2 >> 8),bVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683a1b2 FUN_14683a1b2 body=460 status=ok
// SIG undefined FUN_14683a1b2(void)

undefined8 * FUN_14683a1b2(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined **local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 == '\0') {
    FUN_145fe0690(&local_30,param_2,0);
    plVar3 = local_28;
    if (local_28 == (longlong *)0x0) {
      local_48 = &PTR_LAB_149e445d0;
      local_40 = local_30;
      local_38 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      local_48 = &PTR_LAB_149e445d0;
      local_40 = local_30;
      local_38 = local_28;
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
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
        }
      }
    }
    (**(code **)(*param_1 + 0x28))(param_1,&local_48,0);
    (**(code **)(*local_30 + 8))();
    local_48 = &PTR_LAB_149e445d0;
  }
  else {
    FUN_14619f8aa(&local_30,param_2,0);
    plVar3 = local_28;
    if (local_28 == (longlong *)0x0) {
      local_48 = &PTR_LAB_149e44420;
      local_40 = local_30;
      local_38 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      local_48 = &PTR_LAB_149e44420;
      local_40 = local_30;
      local_38 = local_28;
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
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
        }
      }
    }
    (**(code **)(*param_1 + 0x28))(param_1,&local_48,0);
    (**(code **)(*local_30 + 8))();
    local_48 = &PTR_LAB_149e44420;
  }
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683a380 FUN_14683a380 body=78 status=ok
// SIG undefined FUN_14683a380(void)

void FUN_14683a380(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_10 = 0;
  }
  local_18 = *param_2;
  FUN_14279eb63();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683a3d0 FUN_14683a3d0 body=144 status=ok
// SIG undefined FUN_14683a3d0(void)

longlong * FUN_14683a3d0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = FUN_14001cc68(0x88,0x10);
  FUN_1468421f0(lVar3,param_2);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149e44a40;
  plVar4[2] = lVar3;
  *param_1 = lVar3;
  param_1[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
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
  return param_1;
}



// FUNCTION 14683a460 FUN_14683a460 body=282 status=ok
// SIG undefined FUN_14683a460(void)

bool FUN_14683a460(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined **local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    plVar4 = (longlong *)param_2[1];
    local_38 = lVar3;
    if (plVar4 == (longlong *)0x0) {
      local_40 = &PTR_LAB_149e43b50;
      local_30 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_40 = &PTR_LAB_149e43b50;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      local_30 = plVar4;
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
    (**(code **)(*param_1 + 0x28))(param_1,&local_40,0);
    plVar4 = local_30;
    local_40 = &PTR_LAB_149e43b50;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
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
  plVar4 = (longlong *)param_2[1];
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683a5ac FUN_14683a5ac body=114 status=ok
// SIG undefined FUN_14683a5ac(void)

void FUN_14683a5ac(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  cVar1 = FUN_146843260(*(undefined8 *)(param_1 + 8),&local_38,3);
  if (cVar1 != '\0') {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    FUN_14047faa2(*(undefined8 *)(param_1 + 8),&local_48,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683a620 FUN_14683a620 body=116 status=ok
// SIG undefined FUN_14683a620(void)

void FUN_14683a620(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  cVar1 = FUN_146843260(*(undefined8 *)(param_1 + 8),&local_38,3);
  if (cVar1 != '\0') {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    FUN_146247938(*(undefined8 *)(param_1 + 8),&local_48,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683a696 FUN_14683a696 body=116 status=ok
// SIG undefined FUN_14683a696(void)

void FUN_14683a696(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  cVar1 = FUN_146843260(*(undefined8 *)(param_1 + 8),&local_38,3);
  if (cVar1 != '\0') {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    FUN_1468394e2(*(undefined8 *)(param_1 + 8),&local_48,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683a70c FUN_14683a70c body=113 status=ok
// SIG undefined FUN_14683a70c(void)

void FUN_14683a70c(longlong param_1,undefined4 *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  cVar1 = FUN_146843260(*(undefined8 *)(param_1 + 8),&local_38,4);
  if (cVar1 != '\0') {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    uVar2 = FUN_140b87380(*(undefined8 *)(param_1 + 8));
    *param_3 = uVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683a77e FUN_14683a77e body=179 status=ok
// SIG undefined FUN_14683a77e(void)

void FUN_14683a77e(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  cVar1 = FUN_146843260(*(undefined8 *)(param_1 + 8),&local_38,2);
  if (cVar1 != '\0') {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    FUN_14047df9c(*(undefined8 *)(param_1 + 8),&local_38);
    if ((longlong *)&local_38 == param_3) {
      if (CONCAT44(uStack_34,local_38) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      *param_3 = CONCAT44(uStack_34,local_38);
      *(undefined4 *)(param_3 + 1) = uStack_30;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_2c;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683a832 FUN_14683a832 body=176 status=ok
// SIG undefined FUN_14683a832(void)

void FUN_14683a832(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  cVar1 = FUN_146843260(*(undefined8 *)(param_1 + 8),&local_38,2);
  if (cVar1 != '\0') {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    FUN_14047df9c(*(undefined8 *)(param_1 + 8),local_48);
    FUN_140233b1a(&local_38,local_48);
    FUN_140008f88(param_3,&local_38);
    if ((longlong *)CONCAT44(uStack_34,local_38) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_34,local_38) + 0x10))();
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683a8e4 FUN_14683a8e4 body=121 status=ok
// SIG undefined FUN_14683a8e4(void)

void FUN_14683a8e4(longlong param_1,undefined4 *param_2,float *param_3)

{
  double dVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  cVar2 = FUN_146843260(*(undefined8 *)(param_1 + 8),&local_38,3);
  if (cVar2 != '\0') {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    dVar1 = (double)FUN_1468393c6(*(undefined8 *)(param_1 + 8));
    *param_3 = (float)dVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683a95e FUN_14683a95e body=117 status=ok
// SIG undefined FUN_14683a95e(void)

void FUN_14683a95e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  cVar2 = FUN_146843260(*(undefined8 *)(param_1 + 8),&local_38,3);
  if (cVar2 != '\0') {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    uVar1 = FUN_1468393c6(*(undefined8 *)(param_1 + 8));
    *param_3 = uVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683a9d4 FUN_14683a9d4 body=163 status=ok
// SIG undefined FUN_14683a9d4(void)

void FUN_14683a9d4(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  iStack_30 = param_2[2];
  uStack_2c = param_2[3];
  cVar1 = FUN_146843260(*(undefined8 *)(param_1 + 8),&local_38,2);
  if (cVar1 != '\0') {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    FUN_14047df9c(*(undefined8 *)(param_1 + 8),&local_38);
    if (iStack_30 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)CONCAT44(uStack_34,local_38);
    }
    FUN_14170a85e(puVar2,param_3);
    if (CONCAT44(uStack_34,local_38) != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683aa78 FUN_14683aa78 body=274 status=ok
// SIG undefined FUN_14683aa78(void)

void FUN_14683aa78(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_80;
  longlong *local_78;
  undefined4 local_70 [4];
  byte local_60;
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
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  FUN_1449ba96e(*(undefined8 *)(param_1 + 8),&local_80);
  if (local_80 != 0) {
    FUN_14279e8d0(local_70);
    if (local_70 != param_3) {
      local_48 = CONCAT71(local_48._1_7_,local_60);
      (*(code *)(&PTR_LAB_149e450a0)[local_60])(&local_58);
      local_28 = local_48;
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      uVar3 = *(ulonglong *)(param_3 + 4);
      uVar4 = *param_3;
      uVar5 = param_3[1];
      uVar6 = param_3[2];
      uVar7 = param_3[3];
      *param_3 = local_58;
      param_3[1] = uStack_54;
      param_3[2] = uStack_50;
      param_3[3] = uStack_4c;
      *(ulonglong *)(param_3 + 4) = local_48;
      local_58 = uVar4;
      uStack_54 = uVar5;
      uStack_50 = uVar6;
      uStack_4c = uVar7;
      local_48 = uVar3;
      (*(code *)(&PTR_caseD_3_149e43c90)[uVar3 & 0xff])(&local_58);
    }
    (*(code *)(&PTR_caseD_3_149e43c90)[local_60])();
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683ab8e FUN_14683ab8e body=387 status=ok
// SIG undefined FUN_14683ab8e(void)

/* WARNING: Removing unreachable block (ram,0x00014683accb) */

void FUN_14683ab8e(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = *param_2;
  iStack_50 = (int)param_2[1];
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  cVar5 = FUN_146843260(*(undefined8 *)(param_1 + 8),&local_58,5);
  if (cVar5 != '\0') {
    local_68 = (undefined4)*param_2;
    uStack_64 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_60 = (undefined4)param_2[1];
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
    puVar6 = (undefined8 *)FUN_14571608c(*(undefined8 *)(param_1 + 8));
    local_58 = 0;
    iVar7 = *(int *)(puVar6 + 1);
    uVar1 = *puVar6;
    iStack_50 = iVar7;
    if (iVar7 == 0) {
      uStack_4c = 0;
      iVar7 = 0;
    }
    else {
      FUN_14047d15e(&local_58,iVar7,0);
      FUN_14047cdb6(local_58,uVar1,iVar7);
      lVar3 = local_58;
      lVar10 = (longlong)iStack_50;
      iVar7 = 0;
      if (lVar10 != 0) {
        lVar8 = 0;
        uVar1 = local_78;
        uVar4 = local_70;
        do {
          local_70 = uVar4;
          local_78 = uVar1;
          FUN_14047e026(*(undefined8 *)(lVar3 + lVar8),&local_78);
          iVar7 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar7 + 1U) {
            FUN_1447a1bd6(param_3,iVar7);
          }
          lVar2 = *param_3;
          lVar9 = (longlong)iVar7 * 0x10;
          *(undefined8 *)(lVar2 + lVar9) = 0;
          *(undefined8 *)(lVar2 + lVar9) = local_78;
          local_78 = 0;
          uVar1 = local_78;
          *(undefined4 *)(lVar2 + 8 + lVar9) = (undefined4)local_70;
          *(undefined4 *)(lVar2 + 0xc + lVar9) = local_70._4_4_;
          local_70 = 0;
          uVar4 = local_70;
          local_70 = 0;
          local_78 = 0;
          lVar8 = lVar8 + 0x10;
          iVar7 = iStack_50;
        } while (lVar10 * 0x10 != lVar8);
      }
    }
    FUN_14047c710(local_58,iVar7);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683ad12 FUN_14683ad12 body=328 status=ok
// SIG undefined FUN_14683ad12(void)

void FUN_14683ad12(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = *param_2;
  lStack_50 = param_2[1];
  cVar4 = FUN_146843260(*(undefined8 *)(param_1 + 8),&local_58,5);
  if (cVar4 != '\0') {
    local_68 = *param_2;
    lStack_60 = param_2[1];
    puVar5 = (undefined8 *)FUN_14571608c(*(undefined8 *)(param_1 + 8));
    local_58 = 0;
    iVar1 = *(int *)(puVar5 + 1);
    uVar2 = *puVar5;
    lStack_50 = CONCAT44(lStack_50._4_4_,iVar1);
    if (iVar1 == 0) {
      lStack_50 = 0;
      uVar6 = 0;
    }
    else {
      FUN_14047d15e(&local_58,iVar1,0);
      FUN_14047cdb6(local_58,uVar2,iVar1);
      lVar3 = local_58;
      lVar7 = (longlong)(int)lStack_50;
      uVar6 = 0;
      if (lVar7 != 0) {
        lVar8 = 0;
        do {
          dVar9 = (double)FUN_141360850(*(undefined8 *)(lVar3 + lVar8));
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_1446f48e2(param_3,iVar1);
          }
          *(int *)(*param_3 + (longlong)iVar1 * 4) = (int)dVar9;
          lVar8 = lVar8 + 0x10;
        } while (lVar7 * 0x10 != lVar8);
        uVar6 = (int)lStack_50;
      }
    }
    FUN_14047c710(local_58,uVar6);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683ae5c FUN_14683ae5c body=327 status=ok
// SIG undefined FUN_14683ae5c(void)

void FUN_14683ae5c(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  double dVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = *param_2;
  iStack_50 = (int)param_2[1];
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  cVar4 = FUN_146843260(*(undefined8 *)(param_1 + 8),&local_58,5);
  if (cVar4 != '\0') {
    local_68 = (undefined4)*param_2;
    uStack_64 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_60 = (undefined4)param_2[1];
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
    puVar5 = (undefined8 *)FUN_14571608c(*(undefined8 *)(param_1 + 8));
    local_58 = 0;
    iVar6 = *(int *)(puVar5 + 1);
    uVar1 = *puVar5;
    iStack_50 = iVar6;
    if (iVar6 == 0) {
      uStack_4c = 0;
      iVar6 = 0;
    }
    else {
      FUN_14047d15e(&local_58,iVar6,0);
      FUN_14047cdb6(local_58,uVar1,iVar6);
      lVar3 = local_58;
      lVar7 = (longlong)iStack_50;
      iVar6 = 0;
      if (lVar7 != 0) {
        lVar8 = 0;
        do {
          dVar2 = (double)FUN_141360850(*(undefined8 *)(lVar3 + lVar8));
          iVar6 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar6 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
            FUN_14475e4ac(param_3,iVar6);
          }
          *(float *)(*param_3 + (longlong)iVar6 * 4) = (float)dVar2;
          lVar8 = lVar8 + 0x10;
          iVar6 = iStack_50;
        } while (lVar7 * 0x10 != lVar8);
      }
    }
    FUN_14047c710(local_58,iVar6);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14683afa4 FUN_14683afa4 body=461 status=ok
// SIG undefined FUN_14683afa4(void)

void FUN_14683afa4(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  longlong *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = (longlong *)*param_2;
  uStack_b0 = (undefined4)param_2[1];
  uStack_ac = *(uint *)((longlong)param_2 + 0xc);
  cVar6 = FUN_146843260(*(undefined8 *)(param_1 + 8),&local_b8,6);
  if (cVar6 != '\0') {
    local_88 = (undefined4)*param_2;
    uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_80 = (undefined4)param_2[1];
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
    plVar8 = (longlong *)FUN_14047df14(*(undefined8 *)(param_1 + 8));
    plVar4 = (longlong *)*plVar8;
    plVar8 = (longlong *)plVar8[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    plVar1 = plVar4 + 2;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    uStack_58 = 0;
    uStack_68 = plVar1;
    if ((int)plVar4[5] == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_70);
      iVar9 = (int)plVar4[5];
    }
    uStack_98 = CONCAT44(uStack_54,uStack_58);
    local_a0 = local_60;
    uVar5 = local_a0;
    uStack_b0 = (undefined4)local_70;
    uStack_ac = local_70._4_4_;
    local_a8 = (undefined4)uStack_68;
    uStack_a4 = uStack_68._4_4_;
    local_a0._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    iVar7 = local_a0._4_4_;
    local_b8 = plVar4;
    if ((local_a0._4_4_ != iVar9) || (local_a0 = uVar5, uStack_68 != plVar1)) {
      do {
        local_a0 = uVar5;
        lVar3 = *local_b8 + (longlong)iVar7 * 0x28;
        FUN_14047e026(*(undefined8 *)(lVar3 + 0x10),local_c8);
        local_70 = lVar3;
        uStack_68 = local_c8;
        FUN_140dbdf0c(param_3,local_4c,&local_70,0);
        if (local_c8[0] != 0) {
          FUN_1400020a8();
        }
        local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_ac);
        FUN_1449c0562(&uStack_b0);
        iVar7 = local_a0._4_4_;
        uVar5 = local_a0;
      } while (local_b8 != plVar4 ||
               ((longlong *)CONCAT44(uStack_a4,local_a8) != plVar1 || local_a0._4_4_ != iVar9));
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683b172 FUN_14683b172 body=441 status=ok
// SIG undefined FUN_14683b172(void)

void FUN_14683b172(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_d8 [44];
  int local_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = (longlong *)*param_2;
  uStack_a0 = (undefined4)param_2[1];
  uStack_9c = *(uint *)((longlong)param_2 + 0xc);
  cVar7 = FUN_146843260(*(undefined8 *)(param_1 + 8),&local_a8,6);
  if (cVar7 != '\0') {
    local_78 = (undefined4)*param_2;
    uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_70 = (undefined4)param_2[1];
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
    plVar9 = (longlong *)FUN_14047df14(*(undefined8 *)(param_1 + 8));
    plVar4 = (longlong *)*plVar9;
    plVar9 = (longlong *)plVar9[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    plVar1 = plVar4 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = plVar1;
    if ((int)plVar4[5] == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar10 = (int)plVar4[5];
    }
    uStack_88 = CONCAT44(uStack_4c,uStack_50);
    local_90 = local_58;
    uVar6 = local_90;
    uStack_a0 = (undefined4)local_68;
    uStack_9c = local_68._4_4_;
    local_98 = (undefined4)uStack_60;
    uStack_94 = uStack_60._4_4_;
    local_90._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar8 = local_90._4_4_;
    local_a8 = plVar4;
    if ((local_90._4_4_ != iVar10) || (local_90 = uVar6, uStack_60 != plVar1)) {
      do {
        local_90 = uVar6;
        lVar3 = *local_a8 + (longlong)iVar8 * 0x28;
        dVar5 = (double)FUN_141360850(*(undefined8 *)(lVar3 + 0x10));
        local_ac = (int)dVar5;
        uStack_60 = (longlong *)&local_ac;
        local_68 = lVar3;
        FUN_1409bc59c(param_3,local_44,&local_68,0);
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~uStack_9c);
        FUN_1449c0562(&uStack_a0);
        iVar8 = local_90._4_4_;
        uVar6 = local_90;
      } while (local_a8 != plVar4 ||
               ((longlong *)CONCAT44(uStack_94,local_98) != plVar1 || local_90._4_4_ != iVar10));
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar9 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683b32c FUN_14683b32c body=635 status=ok
// SIG undefined FUN_14683b32c(void)

void FUN_14683b32c(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  int local_d4;
  longlong *local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_b8 = (longlong *)*param_2;
  uStack_b0 = (undefined4)param_2[1];
  uStack_ac = *(uint *)((longlong)param_2 + 0xc);
  cVar8 = FUN_146843260(*(undefined8 *)(param_1 + 8),&local_b8,6);
  if (cVar8 != '\0') {
    local_88 = (undefined4)*param_2;
    uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_80 = (undefined4)param_2[1];
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
    plVar11 = (longlong *)FUN_14047df14(*(undefined8 *)(param_1 + 8));
    plVar2 = (longlong *)*plVar11;
    local_e0 = (longlong *)plVar11[1];
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    plVar11 = plVar2 + 2;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    uStack_58 = 0;
    uStack_68 = plVar11;
    if ((int)plVar2[5] == 0) {
      local_d4 = 0;
    }
    else {
      FUN_1449c0562(&local_70);
      local_d4 = (int)plVar2[5];
    }
    uStack_98 = CONCAT44(uStack_54,uStack_58);
    local_a0 = local_60;
    uVar7 = local_a0;
    uStack_b0 = (undefined4)local_70;
    uStack_ac = local_70._4_4_;
    local_a8 = (undefined4)uStack_68;
    uStack_a4 = uStack_68._4_4_;
    local_a0._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    iVar9 = local_a0._4_4_;
    local_d0 = plVar11;
    local_b8 = plVar2;
    if ((local_a0._4_4_ != local_d4) || (local_a0 = uVar7, uStack_68 != plVar11)) {
      do {
        local_a0 = uVar7;
        lVar3 = *local_b8;
        local_c8 = 0;
        uStack_c0 = 0;
        plVar11 = (longlong *)FUN_140482996(*(undefined8 *)(lVar3 + 0x10 + (longlong)iVar9 * 0x28));
        lVar5 = plVar11[1];
        if ((longlong)(int)lVar5 != 0) {
          lVar4 = *plVar11;
          lVar12 = 0;
          do {
            plVar11 = *(longlong **)(lVar4 + lVar12);
            if (plVar11 != (longlong *)0x0) {
              cVar8 = (**(code **)(*plVar11 + 0x30))(plVar11,&local_70);
              uVar6 = uStack_c0;
              if (cVar8 != '\0') {
                lVar13 = (longlong)(int)uStack_c0;
                uVar10 = (int)uStack_c0 + 1;
                uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar10);
                if (uStack_c0._4_4_ < uVar10) {
                  FUN_1446f48e2(&local_c8,uVar6 & 0xffffffff);
                }
                *(undefined4 *)(local_c8 + lVar13 * 4) = (undefined4)local_70;
              }
            }
            lVar12 = lVar12 + 0x10;
          } while ((longlong)(int)lVar5 * 0x10 != lVar12);
        }
        local_70 = (longlong)iVar9 * 0x28 + lVar3;
        uStack_68 = &local_c8;
        FUN_1468432de(param_3,local_4c);
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_ac);
        FUN_1449c0562(&uStack_b0);
        iVar9 = local_a0._4_4_;
        uVar7 = local_a0;
      } while (local_b8 != plVar2 ||
               ((longlong *)CONCAT44(uStack_a4,local_a8) != local_d0 || local_a0._4_4_ != local_d4))
      ;
    }
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_e0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_e0 + 0x10))();
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683b5a8 FUN_14683b5a8 body=440 status=ok
// SIG undefined FUN_14683b5a8(void)

void FUN_14683b5a8(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = (longlong *)*param_2;
  uStack_a0 = (undefined4)param_2[1];
  uStack_9c = *(uint *)((longlong)param_2 + 0xc);
  cVar7 = FUN_146843260(*(undefined8 *)(param_1 + 8),&local_a8,6);
  if (cVar7 != '\0') {
    local_78 = (undefined4)*param_2;
    uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_70 = (undefined4)param_2[1];
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
    plVar9 = (longlong *)FUN_14047df14(*(undefined8 *)(param_1 + 8));
    plVar4 = (longlong *)*plVar9;
    plVar9 = (longlong *)plVar9[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    plVar1 = plVar4 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = plVar1;
    if ((int)plVar4[5] == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar10 = (int)plVar4[5];
    }
    uStack_88 = CONCAT44(uStack_4c,uStack_50);
    local_90 = local_58;
    uVar6 = local_90;
    uStack_a0 = (undefined4)local_68;
    uStack_9c = local_68._4_4_;
    local_98 = (undefined4)uStack_60;
    uStack_94 = uStack_60._4_4_;
    local_90._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar8 = local_90._4_4_;
    local_a8 = plVar4;
    if ((local_90._4_4_ != iVar10) || (local_90 = uVar6, uStack_60 != plVar1)) {
      do {
        local_90 = uVar6;
        lVar3 = *local_a8 + (longlong)iVar8 * 0x28;
        dVar5 = (double)FUN_141360850(*(undefined8 *)(lVar3 + 0x10));
        local_b0 = (longlong)dVar5;
        uStack_60 = &local_b0;
        local_68 = lVar3;
        FUN_145ad94a6(param_3,local_44);
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~uStack_9c);
        FUN_1449c0562(&uStack_a0);
        iVar8 = local_90._4_4_;
        uVar6 = local_90;
      } while (local_a8 != plVar4 ||
               ((longlong *)CONCAT44(uStack_94,local_98) != plVar1 || local_90._4_4_ != iVar10));
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar9 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683b762 FUN_14683b762 body=436 status=ok
// SIG undefined FUN_14683b762(void)

void FUN_14683b762(longlong param_1,longlong *param_2,undefined8 param_3)

{
  float *pfVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_d8 [44];
  float local_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = (longlong *)*param_2;
  uStack_a0 = (undefined4)param_2[1];
  uStack_9c = *(uint *)((longlong)param_2 + 0xc);
  cVar7 = FUN_146843260(*(undefined8 *)(param_1 + 8),&local_a8,6);
  if (cVar7 != '\0') {
    local_78 = (undefined4)*param_2;
    uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_70 = (undefined4)param_2[1];
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
    plVar9 = (longlong *)FUN_14047df14(*(undefined8 *)(param_1 + 8));
    plVar4 = (longlong *)*plVar9;
    plVar9 = (longlong *)plVar9[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    pfVar1 = (float *)(plVar4 + 2);
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = pfVar1;
    if ((int)plVar4[5] == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar10 = (int)plVar4[5];
    }
    uStack_88 = CONCAT44(uStack_4c,uStack_50);
    local_90 = local_58;
    uVar6 = local_90;
    uStack_a0 = (undefined4)local_68;
    uStack_9c = local_68._4_4_;
    local_98 = (undefined4)uStack_60;
    uStack_94 = uStack_60._4_4_;
    local_90._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar8 = local_90._4_4_;
    local_a8 = plVar4;
    if ((local_90._4_4_ != iVar10) || (local_90 = uVar6, uStack_60 != pfVar1)) {
      do {
        local_90 = uVar6;
        lVar3 = *local_a8 + (longlong)iVar8 * 0x28;
        dVar5 = (double)FUN_141360850(*(undefined8 *)(lVar3 + 0x10));
        local_ac = (float)dVar5;
        uStack_60 = &local_ac;
        local_68 = lVar3;
        FUN_14684354c(param_3,local_44);
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~uStack_9c);
        FUN_1449c0562(&uStack_a0);
        iVar8 = local_90._4_4_;
        uVar6 = local_90;
      } while (local_a8 != plVar4 ||
               ((float *)CONCAT44(uStack_94,local_98) != pfVar1 || local_90._4_4_ != iVar10));
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar9 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683b918 FUN_14683b918 body=478 status=ok
// SIG undefined FUN_14683b918(void)

void FUN_14683b918(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_80;
  undefined8 *local_78;
  undefined1 local_6c [4];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = (longlong *)*param_2;
  uStack_c0 = (undefined4)param_2[1];
  uStack_bc = *(uint *)((longlong)param_2 + 0xc);
  cVar6 = FUN_146843260(*(undefined8 *)(param_1 + 8),&local_c8,6);
  if (cVar6 != '\0') {
    local_98 = (undefined4)*param_2;
    uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_90 = (undefined4)param_2[1];
    uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
    plVar8 = (longlong *)FUN_14047df14(*(undefined8 *)(param_1 + 8));
    plVar3 = (longlong *)*plVar8;
    plVar8 = (longlong *)plVar8[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    plVar1 = plVar3 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = plVar1;
    if ((int)plVar3[5] == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar9 = (int)plVar3[5];
    }
    uStack_a8 = CONCAT44(uStack_4c,uStack_50);
    local_b0 = local_58;
    uVar5 = local_b0;
    uStack_c0 = (undefined4)local_68;
    uStack_bc = local_68._4_4_;
    local_b8 = (undefined4)uStack_60;
    uStack_b4 = uStack_60._4_4_;
    local_b0._4_4_ = (int)(local_58 >> 0x20);
    iVar7 = local_b0._4_4_;
    local_c8 = plVar3;
    if ((local_b0._4_4_ != iVar9) || (local_b0 = uVar5, uStack_60 != plVar1)) {
      do {
        local_b0 = uVar5;
        lVar4 = *local_c8;
        if (*(longlong *)(lVar4 + 0x10 + (longlong)iVar7 * 0x28) != 0) {
          FUN_14279e8d0(&local_68);
          local_80 = lVar4 + (longlong)iVar7 * 0x28;
          local_78 = &local_68;
          FUN_146843ba6(param_3,local_6c);
          (*(code *)(&PTR_caseD_3_149e43c90)[local_58 & 0xff])(&local_68);
        }
        local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0 & ~uStack_bc);
        FUN_1449c0562(&uStack_c0);
        iVar7 = local_b0._4_4_;
        uVar5 = local_b0;
      } while (local_c8 != plVar3 ||
               ((longlong *)CONCAT44(uStack_b4,local_b8) != plVar1 || local_b0._4_4_ != iVar9));
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14683baf8 FUN_14683baf8 body=384 status=ok
// SIG undefined FUN_14683baf8(void)

void FUN_14683baf8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_c8 [32];
  longlong local_a8 [3];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = *(longlong **)(param_1 + 8);
  local_60 = plVar1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if ((int)plVar1[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if (iStack_54 < (int)local_60[3]) {
    do {
      local_a8[0] = 0;
      local_a8[1] = 0;
      plVar1 = *(longlong **)(*local_90 + 0x10 + (longlong)iStack_74 * 0x28);
      cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,local_a8);
      if (cVar2 != '\0') {
        local_68 = (longlong)iStack_74 * 0x28 + *local_90;
        local_60 = local_a8;
        FUN_140dbdf0c(param_2,local_44,&local_68,0);
      }
      if (local_a8[0] != 0) {
        FUN_1400020a8();
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < (int)local_80[3]);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683bc7a FUN_14683bc7a body=505 status=ok
// SIG undefined FUN_14683bc7a(void)

void FUN_14683bc7a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong local_c8 [2];
  longlong *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = (longlong *)*param_2;
  uStack_b0 = (undefined4)param_2[1];
  uStack_ac = *(uint *)((longlong)param_2 + 0xc);
  cVar6 = FUN_146843260(*(undefined8 *)(param_1 + 8),&local_b8,6);
  if (cVar6 != '\0') {
    local_88 = (undefined4)*param_2;
    uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_80 = (undefined4)param_2[1];
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
    plVar8 = (longlong *)FUN_14047df14(*(undefined8 *)(param_1 + 8));
    plVar2 = (longlong *)*plVar8;
    local_d0 = (longlong *)plVar8[1];
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    plVar8 = plVar2 + 2;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    uStack_58 = 0;
    uStack_68 = plVar8;
    if ((int)plVar2[5] == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_70);
      iVar9 = (int)plVar2[5];
    }
    uStack_98 = CONCAT44(uStack_54,uStack_58);
    local_a0 = local_60;
    uVar5 = local_a0;
    uStack_b0 = (undefined4)local_70;
    uStack_ac = local_70._4_4_;
    local_a8 = (undefined4)uStack_68;
    uStack_a4 = uStack_68._4_4_;
    local_a0._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    iVar7 = local_a0._4_4_;
    local_b8 = plVar2;
    if ((local_a0._4_4_ != iVar9) || (local_a0 = uVar5, uStack_68 != plVar8)) {
      do {
        local_a0 = uVar5;
        lVar3 = *local_b8;
        local_c8[0] = 0;
        local_c8[1] = 0;
        plVar4 = *(longlong **)(lVar3 + 0x10 + (longlong)iVar7 * 0x28);
        cVar6 = (**(code **)(*plVar4 + 0x58))(plVar4,local_c8);
        if (cVar6 != '\0') {
          local_70 = (longlong)iVar7 * 0x28 + lVar3;
          uStack_68 = local_c8;
          FUN_140dbdf0c(param_3,local_4c,&local_70,0);
        }
        if (local_c8[0] != 0) {
          FUN_1400020a8();
        }
        local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_ac);
        FUN_1449c0562(&uStack_b0);
        iVar7 = local_a0._4_4_;
        uVar5 = local_a0;
      } while (local_b8 != plVar2 ||
               ((longlong *)CONCAT44(uStack_a4,local_a8) != plVar8 || local_a0._4_4_ != iVar9));
    }
    plVar2 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_d0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_d0)(local_d0);
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
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683be78 FUN_14683be78 body=83 status=ok
// SIG undefined FUN_14683be78(void)

undefined8 * FUN_14683be78(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149e43b50;
  plVar3 = (longlong *)param_1[2];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14683beda caseD_3 body=9 status=ok
// SIG undefined caseD_3(void)

void switchD_1468432da::caseD_3(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}



// FUNCTION 14683bf08 FUN_14683bf08 body=29 status=ok
// SIG undefined FUN_14683bf08(void)

undefined8 FUN_14683bf08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14683bf26 FUN_14683bf26 body=32 status=ok
// SIG undefined FUN_14683bf26(void)

undefined8 FUN_14683bf26(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149e43d78);
  return param_2;
}



// FUNCTION 14683bf46 FUN_14683bf46 body=138 status=ok
// SIG undefined FUN_14683bf46(void)

void FUN_14683bf46(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14683bfd0 FUN_14683bfd0 body=74 status=ok
// SIG undefined FUN_14683bfd0(void)

void FUN_14683bfd0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[3];
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14683c01a FUN_14683c01a body=247 status=ok
// SIG undefined FUN_14683c01a(void)

undefined8 FUN_14683c01a(longlong *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar4 = (longlong)param_2 & (longlong)(int)param_1[9] - 1U;
    lVar2 = (longlong)*(int *)((longlong)plVar7 + uVar4 * 4);
    if (lVar2 != -1) {
      lVar2 = lVar2 * 0x28 + *param_1;
      local_48 = *param_3;
      uStack_44 = param_3[1];
      uStack_40 = param_3[2];
      uStack_3c = param_3[3];
      cVar1 = FUN_14277ac86(lVar2);
      if (cVar1 == '\0') {
        do {
          lVar6 = lVar2;
          lVar2 = (longlong)*(int *)(lVar6 + 0x20);
          if (lVar2 == -1) goto LAB_14683c040;
          lVar2 = lVar2 * 0x28 + *param_1;
          local_48 = *param_3;
          uStack_44 = param_3[1];
          uStack_40 = param_3[2];
          uStack_3c = param_3[3];
          cVar1 = FUN_14277ac86(lVar2,&local_48);
        } while (cVar1 == '\0');
        puVar5 = (undefined4 *)(lVar6 + 0x20);
      }
      else {
        puVar5 = (undefined4 *)((longlong)plVar7 + uVar4 * 4);
      }
      FUN_14683c112(param_1,*puVar5);
      uVar3 = 1;
    }
  }
LAB_14683c040:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683c112 FUN_14683c112 body=123 status=ok
// SIG undefined FUN_14683c112(void)

void FUN_14683c112(longlong *param_1,int param_2)

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
  FUN_14683bfd0((longlong)param_2 * 0x28 + *param_1);
  FUN_14683bf46(param_1,param_2,1);
  return;
}



// FUNCTION 14683c18e FUN_14683c18e body=133 status=ok
// SIG undefined FUN_14683c18e(void)

undefined8 FUN_14683c18e(longlong param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406112c4(&local_28,*(undefined8 *)(param_1 + 0x10),0);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683c230 FUN_14683c230 body=29 status=ok
// SIG undefined FUN_14683c230(void)

undefined8 FUN_14683c230(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14683c24e FUN_14683c24e body=32 status=ok
// SIG undefined FUN_14683c24e(void)

undefined8 FUN_14683c24e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Number");
  return param_2;
}



// FUNCTION 14683c26e FUN_14683c26e body=49 status=ok
// SIG undefined FUN_14683c26e(void)

undefined1 FUN_14683c26e(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  wchar_t *_Str;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)(param_1 + 0x10);
  }
  uVar1 = _wcstoui64(_Str,(wchar_t **)0x0,0);
  *param_2 = uVar1;
  return 1;
}



// FUNCTION 14683c2a0 FUN_14683c2a0 body=43 status=ok
// SIG undefined FUN_14683c2a0(void)

undefined4 FUN_14683c2a0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  wchar_t *_Str;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)(param_1 + 0x10);
  }
  lVar1 = _wtoi64(_Str);
  *param_2 = (int)lVar1;
  return 1;
}



// FUNCTION 14683c2cc FUN_14683c2cc body=44 status=ok
// SIG undefined FUN_14683c2cc(void)

undefined1 FUN_14683c2cc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  wchar_t *_Str;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)(param_1 + 0x10);
  }
  lVar1 = _wtoi64(_Str);
  *param_2 = lVar1;
  return 1;
}



// FUNCTION 14683c2f8 FUN_14683c2f8 body=43 status=ok
// SIG undefined FUN_14683c2f8(void)

undefined4 FUN_14683c2f8(longlong param_1,int *param_2)

{
  int iVar1;
  wchar_t *_Str;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)(param_1 + 0x10);
  }
  iVar1 = _wtoi(_Str);
  *param_2 = iVar1;
  return 1;
}



// FUNCTION 14683c324 FUN_14683c324 body=76 status=ok
// SIG undefined FUN_14683c324(void)

undefined4 FUN_14683c324(longlong param_1,double *param_2)

{
  undefined4 uVar1;
  wchar_t *_Str;
  double dVar2;
  
  uVar1 = FUN_1405b43cc((undefined8 *)(param_1 + 0x10));
  if ((char)uVar1 != '\0') {
    if (*(int *)(param_1 + 0x18) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)(param_1 + 0x10);
    }
    dVar2 = wcstod(_Str,(wchar_t **)0x0);
    *param_2 = dVar2;
  }
  return uVar1;
}



// FUNCTION 14683c370 FUN_14683c370 body=27 status=ok
// SIG undefined FUN_14683c370(void)

undefined1 FUN_14683c370(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1456afa18(param_1 + 0x10);
  *param_2 = uVar1;
  return 1;
}



// FUNCTION 14683c39a FUN_14683c39a body=32 status=ok
// SIG undefined FUN_14683c39a(void)

undefined8 FUN_14683c39a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"String");
  return param_2;
}



// FUNCTION 14683c3ca FUN_14683c3ca body=44 status=ok
// SIG undefined FUN_14683c3ca(void)

undefined8 FUN_14683c3ca(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"false";
  if (*(char *)(param_1 + 0x10) != '\0') {
    pwVar1 = L"true";
  }
  FUN_14020fad6(param_2,pwVar1);
  return 1;
}



// FUNCTION 14683c3fc FUN_14683c3fc body=29 status=ok
// SIG undefined FUN_14683c3fc(void)

undefined8 FUN_14683c3fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14683c41a FUN_14683c41a body=32 status=ok
// SIG undefined FUN_14683c41a(void)

undefined8 FUN_14683c41a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Boolean");
  return param_2;
}



// FUNCTION 14683c444 FUN_14683c444 body=90 status=ok
// SIG undefined FUN_14683c444(void)

longlong FUN_14683c444(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)*(int *)(param_1 + 0x1c) << 4;
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (plVar3 == (longlong *)0x0) {
        lVar4 = 0;
      }
      else {
        lVar4 = (**(code **)(*plVar3 + 0x90))();
      }
      lVar5 = lVar5 + lVar4;
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar6);
  }
  return lVar5 + 0x20;
}



// FUNCTION 14683c49e FUN_14683c49e body=69 status=ok
// SIG undefined FUN_14683c49e(void)

undefined8 * FUN_14683c49e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e44020;
  FUN_14047c710(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14683c4e4 FUN_14683c4e4 body=32 status=ok
// SIG undefined FUN_14683c4e4(void)

undefined8 FUN_14683c4e4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Array");
  return param_2;
}



// FUNCTION 14683c50e FUN_14683c50e body=34 status=ok
// SIG undefined FUN_14683c50e(void)

longlong FUN_14683c50e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0x20;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = FUN_146839c96();
    lVar1 = lVar1 + 0x70;
  }
  return lVar1;
}



// FUNCTION 14683c530 FUN_14683c530 body=83 status=ok
// SIG undefined FUN_14683c530(void)

undefined8 * FUN_14683c530(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149e440f0;
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14683c584 FUN_14683c584 body=32 status=ok
// SIG undefined FUN_14683c584(void)

undefined8 FUN_14683c584(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Object");
  return param_2;
}



// FUNCTION 14683c5a4 FUN_14683c5a4 body=95 status=ok
// SIG undefined FUN_14683c5a4(void)

void FUN_14683c5a4(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_149e440d0;
  uVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar3[2] = &PTR_FUN_149e440f0;
  puVar3[4] = uVar1;
  puVar3[5] = lVar2;
  *(undefined4 *)(puVar3 + 3) = 6;
  return;
}



// FUNCTION 14683c604 FUN_14683c604 body=34 status=ok
// SIG undefined FUN_14683c604(void)

void FUN_14683c604(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149e44230;
  return;
}



// FUNCTION 14683c626 FUN_14683c626 body=31 status=ok
// SIG undefined FUN_14683c626(void)

undefined8 FUN_14683c626(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14683c662 FUN_14683c662 body=93 status=ok
// SIG undefined FUN_14683c662(void)

void FUN_14683c662(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149e441c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14683c6c0 FUN_14683c6c0 body=123 status=ok
// SIG undefined FUN_14683c6c0(void)

void FUN_14683c6c0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e441c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14683c748 FUN_14683c748 body=21 status=ok
// SIG undefined FUN_14683c748(void)

undefined8 FUN_14683c748(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14683c75e FUN_14683c75e body=29 status=ok
// SIG undefined FUN_14683c75e(void)

undefined8 FUN_14683c75e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14683c784 FUN_14683c784 body=158 status=ok
// SIG undefined FUN_14683c784(void)

void FUN_14683c784(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  local_48 = CONCAT62(local_48._2_6_,0x22);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_48,2);
  local_48 = uVar1;
  local_40 = iVar2;
  FUN_14153ce42(param_1,&local_48);
  local_32 = 0x22;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_32,2);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683c824 FUN_14683c824 body=140 status=ok
// SIG undefined FUN_14683c824(void)

void FUN_14683c824(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2a = 0x22;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_2a,2);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_14683c98e(param_1);
  local_2a = 0x22;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_2a,2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683c8b2 FUN_14683c8b2 body=57 status=ok
// SIG undefined FUN_14683c8b2(void)

undefined8 * FUN_14683c8b2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e442a0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14683c90a FUN_14683c90a body=131 status=ok
// SIG undefined FUN_14683c90a(void)

void FUN_14683c90a(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_158 [40];
  undefined1 local_130 [256];
  longlong local_30;
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_14682dc3e(local_130,*param_2,*(undefined4 *)(param_2 + 1));
  (**(code **)(*param_1 + 0x170))(param_1,local_28,(longlong)local_20 * 2);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683c98e FUN_14683c98e body=802 status=ok
// SIG undefined FUN_14683c98e(void)

void FUN_14683c98e(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined2 **ppuVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_128 [40];
  undefined1 *local_100;
  int local_f8;
  undefined2 *local_f0;
  undefined4 local_e8;
  undefined2 *local_e0;
  undefined4 local_d8;
  undefined2 *local_d0;
  undefined4 local_c8;
  undefined2 *local_c0;
  undefined4 local_b8;
  undefined2 *local_b0;
  undefined4 local_a8;
  undefined2 *local_a0;
  undefined4 local_98;
  undefined2 *local_90;
  undefined4 local_88;
  longlong local_80;
  uint local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  ulonglong *local_60;
  undefined1 local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (*(uint *)(param_2 + 1) != 0) {
    lVar7 = *param_2;
    do {
      uVar10 = 0;
      uVar8 = (uint)uVar5;
      if (0 < (int)uVar8) {
        uVar10 = uVar8 - 1;
        if (0x7fe < uVar10) {
          uVar10 = 0x7ff;
        }
        uVar10 = uVar10 + 1;
        uVar5 = 0;
        do {
          bVar1 = *(byte *)(lVar7 + uVar5);
          if (((((ulonglong)bVar1 < 0x23) && ((0x400003700U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0))
              || (bVar1 == 0x5c)) || ((char)bVar1 < ' ')) {
            uVar10 = (uint)uVar5;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar10 != uVar5);
      }
      uVar3 = uVar8;
      if ((int)uVar10 < (int)uVar8) {
        uVar3 = uVar10;
      }
      if (0 < (int)uVar3) {
        local_80 = lVar7;
        local_78 = uVar3;
        FUN_14683c90a(*(undefined8 *)(param_1 + 8),&local_80);
        uVar8 = *(uint *)(param_2 + 1);
        lVar7 = *param_2;
      }
      uVar3 = uVar8 - uVar10;
      if ((int)uVar8 <= (int)(uVar8 - uVar10)) {
        uVar3 = uVar8;
      }
      lVar11 = 0;
      uVar5 = 0;
      if (0 < (int)uVar3) {
        uVar5 = (ulonglong)uVar3;
      }
      lVar7 = ((int)uVar8 + lVar7) - uVar5;
      *param_2 = lVar7;
      *(int *)(param_2 + 1) = (int)uVar5;
      if (0 < (int)uVar3) {
        lVar11 = 0;
        do {
          lVar7 = *param_2;
          bVar1 = *(byte *)(lVar7 + lVar11);
          switch(bVar1) {
          case 8:
            local_c0 = (undefined2 *)&DAT_149e38588;
            local_b8 = 2;
            uVar2 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_c0;
            break;
          case 9:
            local_b0 = (undefined2 *)&DAT_149e01ffe;
            local_a8 = 2;
            uVar2 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_b0;
            break;
          case 10:
            local_a0 = (undefined2 *)&DAT_149e01ff8;
            local_98 = 2;
            uVar2 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_a0;
            break;
          case 0xb:
switchD_14683ca91_caseD_b:
            if (bVar1 < 0x20) {
              local_58 = 0;
              local_60 = &local_48;
              local_70 = local_50;
              local_68 = local_50;
              FUN_14089c9ba(&local_70,"\\u%04x",(int)(char)bVar1);
              local_f8 = (int)local_68 - (int)local_70;
              local_100 = local_70;
              FUN_14683c90a(*(undefined8 *)(param_1 + 8),&local_100);
              FUN_144aa0d5a(&local_70);
              goto LAB_14683cbf1;
            }
            goto LAB_14683cc25;
          case 0xc:
            local_d0 = (undefined2 *)&DAT_149e3858e;
            local_c8 = 2;
            uVar2 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_d0;
            break;
          case 0xd:
            local_e0 = (undefined2 *)&DAT_149e02004;
            local_d8 = 2;
            uVar2 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_e0;
            break;
          default:
            if (bVar1 == 0x22) {
              local_f0 = (undefined2 *)&DAT_149e0200a;
              local_e8 = 2;
              uVar2 = *(undefined8 *)(param_1 + 8);
              ppuVar6 = &local_f0;
            }
            else {
              if (bVar1 != 0x5c) goto switchD_14683ca91_caseD_b;
              local_90 = &DAT_149e01ff2;
              local_88 = 2;
              uVar2 = *(undefined8 *)(param_1 + 8);
              ppuVar6 = &local_90;
            }
          }
          FUN_145d3640c(uVar2,ppuVar6);
LAB_14683cbf1:
          lVar11 = lVar11 + 1;
          uVar5 = (ulonglong)(int)param_2[1];
        } while (lVar11 < (longlong)uVar5);
        lVar7 = *param_2;
      }
LAB_14683cc25:
      iVar4 = (int)uVar5;
      uVar8 = iVar4 - (int)lVar11;
      uVar9 = (ulonglong)uVar8;
      if (iVar4 <= (int)uVar8) {
        uVar9 = uVar5 & 0xffffffff;
      }
      uVar5 = 0;
      if (0 < (int)uVar9) {
        uVar5 = uVar9;
      }
      lVar7 = (iVar4 + lVar7) - uVar5;
      *param_2 = lVar7;
      *(int *)(param_2 + 1) = (int)uVar5;
    } while (0 < (int)uVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14683ccb2 FUN_14683ccb2 body=194 status=ok
// SIG undefined FUN_14683ccb2(void)

undefined4 FUN_14683ccb2(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149e442f0;
  FUN_14683cd76(plVar4 + 2,param_1);
  local_40 = plVar4 + 2;
  local_38 = plVar4;
  uVar3 = FUN_145d35a58(&local_40,param_2,param_3);
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
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
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683cd76 FUN_14683cd76 body=143 status=ok
// SIG undefined FUN_14683cd76(void)

undefined8 * FUN_14683cd76(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar3 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&DAT_149e44000;
  FUN_14047cd48(plVar3 + 2,param_2);
  param_1[2] = plVar3 + 2;
  param_1[3] = plVar3;
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
  *(undefined2 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 14683ce06 FUN_14683ce06 body=282 status=ok
// SIG undefined FUN_14683ce06(void)

void FUN_14683ce06(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((0xc < uVar2) || ((0x1014U >> (uVar2 & 0x1f) & 1) == 0)) {
    local_40 = (undefined1 *)CONCAT62(local_40._2_6_,0x2c);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_40,2);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if ((uVar2 < 0xb) && ((0x610U >> (uVar2 & 0x1f) & 1) != 0)) {
    local_40 = (undefined1 *)CONCAT62(local_40._2_6_,0x20);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_40,2);
  }
  else {
    local_40 = &DAT_149e02010;
    local_38 = 2;
    FUN_145d3640c(*(undefined8 *)(param_1 + 8));
    iVar3 = *(int *)(param_1 + 0x24);
    if (0 < iVar3) {
      plVar1 = *(longlong **)(param_1 + 8);
      do {
        local_40 = (undefined1 *)CONCAT62(local_40._2_6_,9);
        (**(code **)(*plVar1 + 0x170))(plVar1,&local_40,2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x20) = 7;
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14683cf22 FUN_14683cf22 body=277 status=ok
// SIG undefined FUN_14683cf22(void)

void FUN_14683cf22(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((0xc < uVar2) || ((0x1014U >> (uVar2 & 0x1f) & 1) == 0)) {
    local_50 = (undefined1 *)CONCAT62(local_50._2_6_,0x2c);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_50,2);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if (uVar2 == 4 || (uVar2 & 0xfffffffc) == 8) {
    local_50 = (undefined1 *)CONCAT62(local_50._2_6_,0x20);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_50,2);
  }
  else {
    local_50 = &DAT_149e02010;
    local_48 = 2;
    FUN_145d3640c();
    iVar3 = *(int *)(param_1 + 0x24);
    if (0 < iVar3) {
      plVar1 = *(longlong **)(param_1 + 8);
      do {
        local_50 = (undefined1 *)CONCAT62(local_50._2_6_,9);
        (**(code **)(*plVar1 + 0x170))(plVar1,&local_50,2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_145928232(*(undefined8 *)(param_1 + 8),param_2);
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14683d038 FUN_14683d038 body=330 status=ok
// SIG undefined FUN_14683d038(void)

void FUN_14683d038(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  int local_50;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_58 = (undefined1 *)CONCAT62(local_58._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_58,2);
  }
  local_58 = &DAT_149e02010;
  local_50 = 2;
  FUN_145d3640c();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_58 = (undefined1 *)CONCAT62(local_58._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_58,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_58 = (undefined1 *)*param_2;
  local_50 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_50 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_58);
  local_42 = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_42,2);
  local_58 = (undefined1 *)CONCAT62(local_58._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_58,2);
  FUN_145928232(param_1[1],param_3);
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683d184 FUN_14683d184 body=310 status=ok
// SIG undefined FUN_14683d184(void)

void FUN_14683d184(longlong param_1,byte param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  wchar_t *local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((0xc < uVar2) || ((0x1014U >> (uVar2 & 0x1f) & 1) == 0)) {
    local_40 = (wchar_t *)CONCAT62(local_40._2_6_,0x2c);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_40,2);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if (uVar2 == 4 || (uVar2 & 0xfffffffc) == 8) {
    local_40 = (wchar_t *)CONCAT62(local_40._2_6_,0x20);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_40,2);
  }
  else {
    local_40 = L"\r\n";
    local_38 = 2;
    FUN_145d3640c();
    iVar3 = *(int *)(param_1 + 0x24);
    if (0 < iVar3) {
      plVar1 = *(longlong **)(param_1 + 8);
      do {
        local_40 = (wchar_t *)CONCAT62(local_40._2_6_,9);
        (**(code **)(*plVar1 + 0x170))(plVar1,&local_40,2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  local_40 = L"false";
  if (param_2 != 0) {
    local_40 = L"true";
  }
  local_38 = param_2 ^ 5;
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  *(uint *)(param_1 + 0x20) = 10 - (uint)param_2;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14683d2bc FUN_14683d2bc body=366 status=ok
// SIG undefined FUN_14683d2bc(void)

void FUN_14683d2bc(longlong *param_1,undefined8 *param_2,byte param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_78 [46];
  undefined2 local_4a;
  wchar_t *local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_48 = (wchar_t *)CONCAT62(local_48._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  }
  local_48 = L"\r\n";
  local_40 = 2;
  FUN_145d3640c();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_48 = (wchar_t *)CONCAT62(local_48._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_48,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_48 = (wchar_t *)*param_2;
  local_40 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_40 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  local_4a = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_4a,2);
  local_48 = (wchar_t *)CONCAT62(local_48._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  local_48 = L"false";
  if (param_3 != 0) {
    local_48 = L"true";
  }
  local_40 = param_3 ^ 5;
  FUN_145d3640c(param_1[1],&local_48);
  *(uint *)(param_1 + 4) = 10 - (uint)param_3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683d42c FUN_14683d42c body=244 status=ok
// SIG undefined FUN_14683d42c(void)

void FUN_14683d42c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_40 = (undefined1 *)CONCAT62(local_40._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_40,2);
  }
  local_40 = &DAT_149e02010;
  local_38 = 2;
  FUN_145d3640c(param_1[1]);
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_40 = (undefined1 *)CONCAT62(local_40._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_40,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_40 = (undefined1 *)*param_2;
  local_38 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_38 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined4 *)(param_1 + 4) = 7;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683d522 FUN_14683d522 body=245 status=ok
// SIG undefined FUN_14683d522(void)

void FUN_14683d522(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 3:
  case 5:
  case 7:
    local_38 = &DAT_149e02010;
    local_30 = 2;
    FUN_145d3640c(*(undefined8 *)(param_1 + 8));
    iVar2 = *(int *)(param_1 + 0x24);
    if (0 < iVar2) {
      plVar1 = *(longlong **)(param_1 + 8);
      do {
        local_38 = (undefined1 *)CONCAT62(local_38._2_6_,9);
        (**(code **)(*plVar1 + 0x170))(plVar1,&local_38,2);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    break;
  case 4:
    break;
  default:
    local_38 = (undefined1 *)CONCAT62(local_38._2_6_,0x20);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_38,2);
  }
  local_38 = (undefined1 *)CONCAT62(local_38._2_6_,0x5d);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_38,2);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  FUN_14047c610(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = 5;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683d618 FUN_14683d618 body=283 status=ok
// SIG undefined FUN_14683d618(void)

void FUN_14683d618(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((6 < (uVar2 >> 1 | (uint)((uVar2 & 1) != 0) << 0x1f)) ||
     ((0x47U >> (uVar2 >> 1 & 0x1f) & 1) == 0)) {
    local_38 = (undefined1 *)CONCAT62(local_38._2_6_,0x2c);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_38,2);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if (uVar2 != 0) {
    local_38 = &DAT_149e02010;
    local_30 = 2;
    FUN_145d3640c(*(undefined8 *)(param_1 + 8));
    iVar3 = *(int *)(param_1 + 0x24);
    if (0 < iVar3) {
      plVar1 = *(longlong **)(param_1 + 8);
      do {
        local_38 = (undefined1 *)CONCAT62(local_38._2_6_,9);
        (**(code **)(*plVar1 + 0x170))(plVar1,&local_38,2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  local_38 = (undefined1 *)CONCAT62(local_38._2_6_,0x5b);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_38,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar3 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar3 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar3);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 4) = 5;
  *(undefined4 *)(param_1 + 0x20) = 4;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683d734 FUN_14683d734 body=377 status=ok
// SIG undefined FUN_14683d734(void)

void FUN_14683d734(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  int local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  }
  local_48 = &DAT_149e02010;
  local_40 = 2;
  FUN_145d3640c();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_48 = (undefined1 *)CONCAT62(local_48._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_48,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_48 = (undefined1 *)*param_2;
  local_40 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_40 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  local_32 = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_32,2);
  local_48._0_2_ = 0x20;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x5b);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  iVar2 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
    FUN_14047d866(param_1 + 2,iVar2);
  }
  *(undefined4 *)(param_1[2] + (longlong)iVar2 * 4) = 5;
  *(undefined4 *)(param_1 + 4) = 4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683d8ae FUN_14683d8ae body=424 status=ok
// SIG undefined FUN_14683d8ae(void)

void FUN_14683d8ae(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_78 [46];
  undefined2 local_4a;
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  }
  local_48 = &DAT_149e02010;
  local_40 = 2;
  FUN_145d3640c();
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar1) {
    plVar2 = (longlong *)param_1[1];
    do {
      local_48 = (undefined1 *)CONCAT62(local_48._2_6_,9);
      (**(code **)(*plVar2 + 0x170))(plVar2,&local_48,2);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_48 = (undefined1 *)*param_2;
  local_40 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_40 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  local_4a = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_4a,2);
  local_48 = &DAT_149e02010;
  local_40 = 2;
  FUN_145d3640c(param_1[1],&local_48);
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  plVar2 = (longlong *)param_1[1];
  if (0 < iVar1) {
    do {
      local_48 = (undefined1 *)CONCAT62(local_48._2_6_,9);
      (**(code **)(*plVar2 + 0x170))(plVar2,&local_48,2);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar2 = (longlong *)param_1[1];
  }
  local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x7b);
  (**(code **)(*plVar2 + 0x170))(plVar2,&local_48,2);
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  iVar1 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 2,iVar1);
  }
  *(undefined4 *)(param_1[2] + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 4) = 2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683da58 FUN_14683da58 body=252 status=ok
// SIG undefined FUN_14683da58(void)

void FUN_14683da58(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_40 = (undefined1 *)CONCAT62(local_40._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_40,2);
  }
  local_40 = &DAT_149e02010;
  local_38 = 2;
  FUN_145d3640c(param_1[1]);
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_40 = (undefined1 *)CONCAT62(local_40._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_40,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  (**(code **)(*param_1 + 0x18))(param_1);
  local_40 = (undefined1 *)CONCAT62(local_40._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_40,2);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683db56 FUN_14683db56 body=286 status=ok
// SIG undefined FUN_14683db56(void)

void FUN_14683db56(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((0xc < uVar2) || ((0x1014U >> (uVar2 & 0x1f) & 1) == 0)) {
    local_38 = (wchar_t *)CONCAT62(local_38._2_6_,0x2c);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_38,2);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if (uVar2 == 4 || (uVar2 & 0xfffffffc) == 8) {
    local_38 = (wchar_t *)CONCAT62(local_38._2_6_,0x20);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_38,2);
  }
  else {
    local_38 = L"\r\n";
    local_30 = 2;
    FUN_145d3640c();
    iVar3 = *(int *)(param_1 + 0x24);
    if (0 < iVar3) {
      plVar1 = *(longlong **)(param_1 + 8);
      do {
        local_38 = (wchar_t *)CONCAT62(local_38._2_6_,9);
        (**(code **)(*plVar1 + 0x170))(plVar1,&local_38,2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  local_38 = L"null";
  local_30 = 4;
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x20) = 0xb;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14683dc76 FUN_14683dc76 body=339 status=ok
// SIG undefined FUN_14683dc76(void)

void FUN_14683dc76(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_68 [38];
  undefined2 local_42;
  wchar_t *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_40 = (wchar_t *)CONCAT62(local_40._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_40,2);
  }
  local_40 = L"\r\n";
  local_38 = 2;
  FUN_145d3640c();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_40 = (wchar_t *)CONCAT62(local_40._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_40,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_40 = (wchar_t *)*param_2;
  local_38 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_38 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_40);
  local_42 = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_42,2);
  local_40 = (wchar_t *)CONCAT62(local_40._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_40,2);
  local_40 = L"null";
  local_38 = 4;
  FUN_145d3640c(param_1[1],&local_40);
  *(undefined4 *)(param_1 + 4) = 0xb;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683ddca FUN_14683ddca body=158 status=ok
// SIG undefined FUN_14683ddca(void)

void FUN_14683ddca(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  local_48 = CONCAT62(local_48._2_6_,0x22);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_48,2);
  local_48 = uVar1;
  local_40 = iVar2;
  FUN_1413608c0(param_1,&local_48);
  local_32 = 0x22;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_32,2);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683de6a FUN_14683de6a body=140 status=ok
// SIG undefined FUN_14683de6a(void)

void FUN_14683de6a(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2a = 0x22;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_2a,2);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_14683df50(param_1);
  local_2a = 0x22;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_2a,2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683def8 FUN_14683def8 body=57 status=ok
// SIG undefined FUN_14683def8(void)

undefined8 * FUN_14683def8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e443d0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14683df50 FUN_14683df50 body=802 status=ok
// SIG undefined FUN_14683df50(void)

void FUN_14683df50(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined2 **ppuVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_128 [40];
  undefined1 *local_100;
  int local_f8;
  undefined2 *local_f0;
  undefined4 local_e8;
  undefined2 *local_e0;
  undefined4 local_d8;
  undefined2 *local_d0;
  undefined4 local_c8;
  undefined2 *local_c0;
  undefined4 local_b8;
  undefined2 *local_b0;
  undefined4 local_a8;
  undefined2 *local_a0;
  undefined4 local_98;
  undefined2 *local_90;
  undefined4 local_88;
  longlong local_80;
  uint local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  ulonglong *local_60;
  undefined1 local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (*(uint *)(param_2 + 1) != 0) {
    lVar7 = *param_2;
    do {
      uVar10 = 0;
      uVar8 = (uint)uVar5;
      if (0 < (int)uVar8) {
        uVar10 = uVar8 - 1;
        if (0x7fe < uVar10) {
          uVar10 = 0x7ff;
        }
        uVar10 = uVar10 + 1;
        uVar5 = 0;
        do {
          bVar1 = *(byte *)(lVar7 + uVar5);
          if (((((ulonglong)bVar1 < 0x23) && ((0x400003700U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0))
              || (bVar1 == 0x5c)) || ((char)bVar1 < ' ')) {
            uVar10 = (uint)uVar5;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar10 != uVar5);
      }
      uVar3 = uVar8;
      if ((int)uVar10 < (int)uVar8) {
        uVar3 = uVar10;
      }
      if (0 < (int)uVar3) {
        local_80 = lVar7;
        local_78 = uVar3;
        FUN_14683c90a(*(undefined8 *)(param_1 + 8),&local_80);
        uVar8 = *(uint *)(param_2 + 1);
        lVar7 = *param_2;
      }
      uVar3 = uVar8 - uVar10;
      if ((int)uVar8 <= (int)(uVar8 - uVar10)) {
        uVar3 = uVar8;
      }
      lVar11 = 0;
      uVar5 = 0;
      if (0 < (int)uVar3) {
        uVar5 = (ulonglong)uVar3;
      }
      lVar7 = ((int)uVar8 + lVar7) - uVar5;
      *param_2 = lVar7;
      *(int *)(param_2 + 1) = (int)uVar5;
      if (0 < (int)uVar3) {
        lVar11 = 0;
        do {
          lVar7 = *param_2;
          bVar1 = *(byte *)(lVar7 + lVar11);
          switch(bVar1) {
          case 8:
            local_c0 = (undefined2 *)&DAT_149e38588;
            local_b8 = 2;
            uVar2 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_c0;
            break;
          case 9:
            local_b0 = (undefined2 *)&DAT_149e01ffe;
            local_a8 = 2;
            uVar2 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_b0;
            break;
          case 10:
            local_a0 = (undefined2 *)&DAT_149e01ff8;
            local_98 = 2;
            uVar2 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_a0;
            break;
          case 0xb:
switchD_14683e053_caseD_b:
            if (bVar1 < 0x20) {
              local_58 = 0;
              local_60 = &local_48;
              local_70 = local_50;
              local_68 = local_50;
              FUN_14089c9ba(&local_70,"\\u%04x",(int)(char)bVar1);
              local_f8 = (int)local_68 - (int)local_70;
              local_100 = local_70;
              FUN_14683c90a(*(undefined8 *)(param_1 + 8),&local_100);
              FUN_144aa0d5a(&local_70);
              goto LAB_14683e1b3;
            }
            goto LAB_14683e1e7;
          case 0xc:
            local_d0 = (undefined2 *)&DAT_149e3858e;
            local_c8 = 2;
            uVar2 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_d0;
            break;
          case 0xd:
            local_e0 = (undefined2 *)&DAT_149e02004;
            local_d8 = 2;
            uVar2 = *(undefined8 *)(param_1 + 8);
            ppuVar6 = &local_e0;
            break;
          default:
            if (bVar1 == 0x22) {
              local_f0 = (undefined2 *)&DAT_149e0200a;
              local_e8 = 2;
              uVar2 = *(undefined8 *)(param_1 + 8);
              ppuVar6 = &local_f0;
            }
            else {
              if (bVar1 != 0x5c) goto switchD_14683e053_caseD_b;
              local_90 = &DAT_149e01ff2;
              local_88 = 2;
              uVar2 = *(undefined8 *)(param_1 + 8);
              ppuVar6 = &local_90;
            }
          }
          FUN_145d3640c(uVar2,ppuVar6);
LAB_14683e1b3:
          lVar11 = lVar11 + 1;
          uVar5 = (ulonglong)(int)param_2[1];
        } while (lVar11 < (longlong)uVar5);
        lVar7 = *param_2;
      }
LAB_14683e1e7:
      iVar4 = (int)uVar5;
      uVar8 = iVar4 - (int)lVar11;
      uVar9 = (ulonglong)uVar8;
      if (iVar4 <= (int)uVar8) {
        uVar9 = uVar5 & 0xffffffff;
      }
      uVar5 = 0;
      if (0 < (int)uVar9) {
        uVar5 = uVar9;
      }
      lVar7 = (iVar4 + lVar7) - uVar5;
      *param_2 = lVar7;
      *(int *)(param_2 + 1) = (int)uVar5;
    } while (0 < (int)uVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14683e274 FUN_14683e274 body=132 status=ok
// SIG undefined FUN_14683e274(void)

void FUN_14683e274(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((0xc < *(uint *)(param_1 + 0x20)) ||
     ((0x1014U >> (*(uint *)(param_1 + 0x20) & 0x1f) & 1) == 0)) {
    local_1a = 0x2c;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  }
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x20) = 7;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683e2fa FUN_14683e2fa body=132 status=ok
// SIG undefined FUN_14683e2fa(void)

void FUN_14683e2fa(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [38];
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((0xc < *(uint *)(param_1 + 0x20)) ||
     ((0x1014U >> (*(uint *)(param_1 + 0x20) & 0x1f) & 1) == 0)) {
    local_22 = 0x2c;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_22,2);
  }
  FUN_145928232(*(undefined8 *)(param_1 + 8),param_2);
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683e380 FUN_14683e380 body=162 status=ok
// SIG undefined FUN_14683e380(void)

void FUN_14683e380(longlong param_1,byte param_2)

{
  undefined1 auStack_58 [40];
  wchar_t *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((0xc < *(uint *)(param_1 + 0x20)) ||
     ((0x1014U >> (*(uint *)(param_1 + 0x20) & 0x1f) & 1) == 0)) {
    local_30 = (wchar_t *)CONCAT62(local_30._2_6_,0x2c);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_30,2);
  }
  local_30 = L"false";
  if (param_2 != 0) {
    local_30 = L"true";
  }
  local_28 = param_2 ^ 5;
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  *(uint *)(param_1 + 0x20) = 10 - (uint)param_2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683e424 FUN_14683e424 body=248 status=ok
// SIG undefined FUN_14683e424(void)

void FUN_14683e424(longlong *param_1,undefined8 *param_2,byte param_3)

{
  undefined1 auStack_68 [46];
  undefined2 local_3a;
  wchar_t *local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_38 = (wchar_t *)CONCAT62(local_38._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_38,2);
  }
  local_38 = (wchar_t *)*param_2;
  local_30 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_30 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_38);
  local_3a = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_3a,2);
  local_38 = L"false";
  if (param_3 != 0) {
    local_38 = L"true";
  }
  local_30 = param_3 ^ 5;
  FUN_145d3640c(param_1[1],&local_38);
  *(uint *)(param_1 + 4) = 10 - (uint)param_3;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683e51e FUN_14683e51e body=183 status=ok
// SIG undefined FUN_14683e51e(void)

void FUN_14683e51e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_48 [44];
  undefined2 local_1c;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *(uint *)(param_1 + 0x20) >> 1;
  if ((6 < (uVar2 | (uint)((*(uint *)(param_1 + 0x20) & 1) != 0) << 0x1f)) ||
     ((0x47U >> (uVar2 & 0x1f) & 1) == 0)) {
    local_1c = 0x2c;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1c,2);
  }
  local_1a = 0x5b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x20) = 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683e5d6 FUN_14683e5d6 body=260 status=ok
// SIG undefined FUN_14683e5d6(void)

void FUN_14683e5d6(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_38 = CONCAT62(local_38._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_38,2);
  }
  local_38 = *param_2;
  local_30 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_30 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_38);
  local_22 = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_22,2);
  local_38 = CONCAT62(local_38._2_6_,0x7b);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_38,2);
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  iVar1 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 2,iVar1);
  }
  *(undefined4 *)(param_1[2] + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 4) = 2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683e6dc FUN_14683e6dc body=154 status=ok
// SIG undefined FUN_14683e6dc(void)

void FUN_14683e6dc(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_1a = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_1a,2);
  }
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  (**(code **)(*param_1 + 0x18))(param_1);
  local_1a = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_1a,2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683e778 FUN_14683e778 body=138 status=ok
// SIG undefined FUN_14683e778(void)

void FUN_14683e778(longlong param_1)

{
  undefined1 auStack_48 [40];
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((0xc < *(uint *)(param_1 + 0x20)) ||
     ((0x1014U >> (*(uint *)(param_1 + 0x20) & 0x1f) & 1) == 0)) {
    local_20 = (wchar_t *)CONCAT62(local_20._2_6_,0x2c);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_20,2);
  }
  local_20 = L"null";
  local_18 = 4;
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x20) = 0xb;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683e804 FUN_14683e804 body=222 status=ok
// SIG undefined FUN_14683e804(void)

void FUN_14683e804(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [38];
  undefined2 local_32;
  wchar_t *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_30 = (wchar_t *)CONCAT62(local_30._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_30,2);
  }
  local_30 = (wchar_t *)*param_2;
  local_28 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_28 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_30);
  local_32 = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_32,2);
  local_30 = L"null";
  local_28 = 4;
  FUN_145d3640c(param_1[1],&local_30);
  *(undefined4 *)(param_1 + 4) = 0xb;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683e928 FUN_14683e928 body=80 status=ok
// SIG undefined FUN_14683e928(void)

void FUN_14683e928(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_1;
  local_10 = param_2;
  (*(code *)(&PTR_LAB_149e44530)[*(byte *)(param_3 + 0x10)])(&local_18,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683e97a FUN_14683e97a body=97 status=ok
// SIG undefined FUN_14683e97a(void)

void FUN_14683e97a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < *param_3) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    FUN_14680f2de(param_3,local_30);
    FUN_14683ff74(uVar1,param_2,local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683e9dc FUN_14683e9dc body=134 status=ok
// SIG undefined FUN_14683e9dc(void)

void FUN_14683e9dc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 8);
  uVar1 = *param_3;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14683da58(lVar2);
  local_22 = 0x20;
  (**(code **)(**(longlong **)(lVar2 + 8) + 0x170))(*(longlong **)(lVar2 + 8),&local_22,2);
  FUN_145928232(*(undefined8 *)(lVar2 + 8),(int)uVar1);
  *(undefined4 *)(lVar2 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683ea64 FUN_14683ea64 body=134 status=ok
// SIG undefined FUN_14683ea64(void)

void FUN_14683ea64(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 8);
  uVar1 = *param_3;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14683da58(lVar2);
  local_22 = 0x20;
  (**(code **)(**(longlong **)(lVar2 + 8) + 0x170))(*(longlong **)(lVar2 + 8),&local_22,2);
  FUN_14683fd9e(*(undefined8 *)(lVar2 + 8),uVar1);
  *(undefined4 *)(lVar2 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683eaec FUN_14683eaec body=161 status=ok
// SIG undefined FUN_14683eaec(void)

void FUN_14683eaec(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 8);
  puVar2 = (undefined8 *)FUN_1447a1f4a(param_3);
  local_40 = (void *)0x0;
  local_38 = *(int *)(puVar2 + 1);
  lVar3 = (longlong)local_38;
  _Src = (void *)*puVar2;
  if (lVar3 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar3 * 2);
  }
  FUN_14683ff74(uVar1,param_2,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683eb8e FUN_14683eb8e body=153 status=ok
// SIG undefined FUN_14683eb8e(void)

void FUN_14683eb8e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  FUN_14683ff74(uVar1,param_2,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683ec58 FUN_14683ec58 body=85 status=ok
// SIG undefined FUN_14683ec58(void)

void FUN_14683ec58(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14683f85c(*(undefined8 *)(param_1 + 8));
  lVar2 = param_3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_3;
    lVar3 = 0;
    do {
      FUN_146840016(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + lVar3));
      lVar3 = lVar3 + 4;
    } while ((longlong)(int)lVar2 * 4 != lVar3);
  }
  FUN_14683d522(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 14683ecae FUN_14683ecae body=83 status=ok
// SIG undefined FUN_14683ecae(void)

void FUN_14683ecae(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14683f85c(*(undefined8 *)(param_1 + 8));
  lVar2 = param_3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_3;
    lVar3 = 0;
    do {
      FUN_14684012c(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + lVar3));
      lVar3 = lVar3 + 4;
    } while ((longlong)(int)lVar2 * 4 != lVar3);
  }
  FUN_14683d522(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 14683ed02 FUN_14683ed02 body=76 status=ok
// SIG undefined FUN_14683ed02(void)

void FUN_14683ed02(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14683f85c(*(undefined8 *)(param_1 + 8));
  if ((longlong)(int)param_3[1] != 0) {
    lVar2 = *param_3;
    lVar1 = (longlong)(int)param_3[1] << 4;
    do {
      FUN_14683d42c(*(undefined8 *)(param_1 + 8),lVar2);
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  FUN_14683d522(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 14683ed4e FUN_14683ed4e body=76 status=ok
// SIG undefined FUN_14683ed4e(void)

void FUN_14683ed4e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  FUN_14683d618(*(undefined8 *)(param_1 + 8));
  if (0 < (int)param_2[1]) {
    lVar1 = 0;
    iVar2 = 0;
    do {
      FUN_14683d42c(*(undefined8 *)(param_1 + 8),*param_2 + lVar1);
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (iVar2 < (int)param_2[1]);
  }
  FUN_14683d522(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 14683ed9a FUN_14683ed9a body=318 status=ok
// SIG undefined FUN_14683ed9a(void)

void FUN_14683ed9a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14683f774(*(undefined8 *)(param_1 + 8));
  plVar1 = param_3 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar2 = 0;
  local_48 = plVar1;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_3[5];
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_3;
  if ((iStack_3c != iVar2) || (local_48 != plVar1)) {
    do {
      local_48 = (longlong *)(*local_78 + (longlong)iStack_5c * 0x30);
      local_50 = param_1;
      (*(code *)(&PTR_LAB_149e44580)[*(byte *)(*local_78 + (longlong)iStack_5c * 0x30 + 0x20)])();
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_3 || (local_68 != plVar1 || iStack_5c != iVar2));
  }
  FUN_145d36462(*(undefined8 *)(param_1 + 8));
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683eeda FUN_14683eeda body=370 status=ok
// SIG undefined FUN_14683eeda(void)

void FUN_14683eeda(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  size_t sVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14683f774(param_1[1]);
  plVar1 = param_3 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar4 = 0;
  local_58 = plVar1;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_60);
    iVar4 = (int)param_3[5];
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = param_3;
  if ((iStack_4c != iVar4) || (local_58 != plVar1)) {
    do {
      lVar2 = *local_88;
      lVar5 = (longlong)iStack_6c * 0x20;
      if (*(int *)(lVar2 + 8 + lVar5) == 0) {
        local_98 = L"";
LAB_14683efc5:
        sVar3 = wcslen(local_98);
        local_90 = (int)sVar3;
      }
      else {
        local_98 = *(wchar_t **)(lVar2 + lVar5);
        if (local_98 != (wchar_t *)0x0) goto LAB_14683efc5;
        local_90 = 0;
      }
      (**(code **)(*param_1 + 0x58))(param_1,&local_98,lVar2 + lVar5 + 0x10);
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_3 || (local_78 != plVar1 || iStack_6c != iVar4));
  }
  FUN_145d36462(param_1[1]);
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14683f04e FUN_14683f04e body=370 status=ok
// SIG undefined FUN_14683f04e(void)

void FUN_14683f04e(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  size_t sVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14683f774(param_1[1]);
  plVar1 = param_3 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar4 = 0;
  local_58 = plVar1;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_60);
    iVar4 = (int)param_3[5];
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = param_3;
  if ((iStack_4c != iVar4) || (local_58 != plVar1)) {
    do {
      lVar2 = *local_88;
      lVar5 = (longlong)iStack_6c * 0x20;
      if (*(int *)(lVar2 + 8 + lVar5) == 0) {
        local_98 = L"";
LAB_14683f139:
        sVar3 = wcslen(local_98);
        local_90 = (int)sVar3;
      }
      else {
        local_98 = *(wchar_t **)(lVar2 + lVar5);
        if (local_98 != (wchar_t *)0x0) goto LAB_14683f139;
        local_90 = 0;
      }
      (**(code **)(*param_1 + 0x78))(param_1,&local_98,lVar2 + lVar5 + 0x10);
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_3 || (local_78 != plVar1 || iStack_6c != iVar4));
  }
  FUN_145d36462(param_1[1]);
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14683f1c2 FUN_14683f1c2 body=372 status=ok
// SIG undefined FUN_14683f1c2(void)

void FUN_14683f1c2(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  size_t sVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14683f774(param_1[1]);
  plVar1 = param_3 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar5 = 0;
  local_58 = plVar1;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_60);
    iVar5 = (int)param_3[5];
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = param_3;
  if ((iStack_4c != iVar5) || (local_58 != plVar1)) {
    do {
      lVar2 = *local_88;
      lVar3 = (longlong)iStack_6c;
      if (*(int *)(lVar2 + 8 + lVar3 * 0x28) == 0) {
        local_98 = L"";
LAB_14683f2ac:
        sVar4 = wcslen(local_98);
        local_90 = (int)sVar4;
      }
      else {
        local_98 = *(wchar_t **)(lVar2 + lVar3 * 0x28);
        if (local_98 != (wchar_t *)0x0) goto LAB_14683f2ac;
        local_90 = 0;
      }
      (**(code **)(*param_1 + 0x98))(param_1,&local_98,lVar2 + lVar3 * 0x28 + 0x10);
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_3 || (local_78 != plVar1 || iStack_6c != iVar5));
  }
  FUN_145d36462(param_1[1]);
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14683f338 FUN_14683f338 body=373 status=ok
// SIG undefined FUN_14683f338(void)

void FUN_14683f338(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  size_t sVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14683f774(param_1[1]);
  plVar1 = param_3 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar4 = 0;
  local_58 = plVar1;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_60);
    iVar4 = (int)param_3[5];
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = param_3;
  if ((iStack_4c != iVar4) || (local_58 != plVar1)) {
    do {
      lVar2 = *local_88;
      lVar5 = (longlong)iStack_6c * 0x20;
      if (*(int *)(lVar2 + 8 + lVar5) == 0) {
        local_98 = L"";
LAB_14683f423:
        sVar3 = wcslen(local_98);
        local_90 = (int)sVar3;
      }
      else {
        local_98 = *(wchar_t **)(lVar2 + lVar5);
        if (local_98 != (wchar_t *)0x0) goto LAB_14683f423;
        local_90 = 0;
      }
      (**(code **)(*param_1 + 0x88))(param_1,&local_98,lVar2 + lVar5 + 0x10);
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_3 || (local_78 != plVar1 || iStack_6c != iVar4));
  }
  FUN_145d36462(param_1[1]);
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14683f4ae FUN_14683f4ae body=369 status=ok
// SIG undefined FUN_14683f4ae(void)

void FUN_14683f4ae(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  size_t sVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14683f774(param_1[1]);
  plVar1 = param_3 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar5 = 0;
  local_58 = plVar1;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_60);
    iVar5 = (int)param_3[5];
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = param_3;
  if ((iStack_4c != iVar5) || (local_58 != plVar1)) {
    do {
      lVar2 = *local_88;
      lVar3 = (longlong)iStack_6c;
      if (*(int *)(lVar2 + 8 + lVar3 * 0x28) == 0) {
        local_98 = L"";
LAB_14683f598:
        sVar4 = wcslen(local_98);
        local_90 = (int)sVar4;
      }
      else {
        local_98 = *(wchar_t **)(lVar2 + lVar3 * 0x28);
        if (local_98 != (wchar_t *)0x0) goto LAB_14683f598;
        local_90 = 0;
      }
      (**(code **)(*param_1 + 0x68))(param_1,&local_98,lVar2 + lVar3 * 0x28 + 0x10);
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_3 || (local_78 != plVar1 || iStack_6c != iVar5));
  }
  FUN_145d36462(param_1[1]);
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14683f622 FUN_14683f622 body=66 status=ok
// SIG undefined FUN_14683f622(void)

void FUN_14683f622(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(*param_1 + 0xd8))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683f670 FUN_14683f670 body=107 status=ok
// SIG undefined FUN_14683f670(void)

void FUN_14683f670(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 8);
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_14683da58(lVar1);
  local_12 = 0x20;
  (**(code **)(**(longlong **)(lVar1 + 8) + 0x170))(*(longlong **)(lVar1 + 8),&local_12,2);
  *(undefined4 *)(lVar1 + 0x20) = 0xc;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683f6dc FUN_14683f6dc body=66 status=ok
// SIG undefined FUN_14683f6dc(void)

void FUN_14683f6dc(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_14683ce06(*(undefined8 *)(param_1 + 8));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683f720 FUN_14683f720 body=83 status=ok
// SIG undefined FUN_14683f720(void)

undefined8 * FUN_14683f720(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149e44420;
  plVar3 = (longlong *)param_1[2];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14683f774 FUN_14683f774 body=231 status=ok
// SIG undefined FUN_14683f774(void)

void FUN_14683f774(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_14683da58();
  local_38 = &DAT_149e02010;
  local_30 = 2;
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x24);
  plVar2 = *(longlong **)(param_1 + 8);
  if (0 < iVar1) {
    do {
      local_38 = (undefined1 *)CONCAT62(local_38._2_6_,9);
      (**(code **)(*plVar2 + 0x170))(plVar2,&local_38,2);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar2 = *(longlong **)(param_1 + 8);
  }
  local_38 = (undefined1 *)CONCAT62(local_38._2_6_,0x7b);
  (**(code **)(*plVar2 + 0x170))(plVar2,&local_38,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 0x20) = 2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683f85c FUN_14683f85c body=177 status=ok
// SIG undefined FUN_14683f85c(void)

void FUN_14683f85c(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14683da58();
  local_1a = 0x20;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  local_1a = 0x5b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x20) = 4;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683f924 FUN_14683f924 body=84 status=ok
// SIG undefined FUN_14683f924(void)

void FUN_14683f924(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  local_10 = param_1[1];
  (*(code *)(&PTR_LAB_149e44550)[*(byte *)(param_2 + 8)])(&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683f97e FUN_14683f97e body=162 status=ok
// SIG undefined FUN_14683f97e(void)

void FUN_14683f97e(longlong param_1,undefined4 *param_2,byte param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  wchar_t *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_14683da58();
  local_30 = (wchar_t *)CONCAT62(local_30._2_6_,0x20);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_30,2);
  local_30 = L"false";
  if (param_3 != 0) {
    local_30 = L"true";
  }
  local_28 = param_3 ^ 5;
  FUN_145d3640c(*(undefined8 *)(param_1 + 8),&local_30);
  *(uint *)(param_1 + 0x20) = 10 - (uint)param_3;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683fa6e FUN_14683fa6e body=223 status=ok
// SIG undefined FUN_14683fa6e(void)

void FUN_14683fa6e(longlong param_1,undefined4 *param_2,int param_3)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  ulonglong *local_68;
  char local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  FUN_14683da58();
  local_78 = (undefined1 *)CONCAT62(local_78._2_6_,0x20);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_78,2);
  local_78 = local_58;
  local_60 = '\0';
  local_68 = &local_18;
  local_70 = local_78;
  FUN_140212e80(&local_78,L"%lld",(longlong)param_3);
  local_88 = local_78;
  local_80 = (undefined4)((ulonglong)((longlong)local_70 - (longlong)local_78) >> 1);
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  if (local_60 == '\x01') {
    FUN_1400020a8(local_78);
  }
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683fb4e FUN_14683fb4e body=223 status=ok
// SIG undefined FUN_14683fb4e(void)

void FUN_14683fb4e(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  ulonglong *local_68;
  char local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  FUN_14683da58();
  local_78 = (undefined1 *)CONCAT62(local_78._2_6_,0x20);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_78,2);
  local_78 = local_58;
  local_60 = '\0';
  local_68 = &local_18;
  local_70 = local_78;
  FUN_140212e80(&local_78,L"%llu",param_3);
  local_88 = local_78;
  local_80 = (undefined4)((ulonglong)((longlong)local_70 - (longlong)local_78) >> 1);
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  if (local_60 == '\x01') {
    FUN_1400020a8(local_78);
  }
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683fc2e FUN_14683fc2e body=225 status=ok
// SIG undefined FUN_14683fc2e(void)

void FUN_14683fc2e(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  ulonglong *local_70;
  char local_68;
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = *param_2;
  uStack_a4 = param_2[1];
  uStack_a0 = param_2[2];
  uStack_9c = param_2[3];
  FUN_14683da58();
  local_80 = (undefined1 *)CONCAT62(local_80._2_6_,0x20);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_80,2);
  local_80 = local_60;
  local_68 = '\0';
  local_70 = &local_20;
  local_78 = local_80;
  FUN_140212e80(&local_80,L"%lld",param_3);
  local_90 = local_80;
  local_88 = (undefined4)((ulonglong)((longlong)local_78 - (longlong)local_80) >> 1);
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  if (local_68 == '\x01') {
    FUN_1400020a8(local_80);
  }
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683fd10 FUN_14683fd10 body=140 status=ok
// SIG undefined FUN_14683fd10(void)

void FUN_14683fd10(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined4 *)param_1[1];
  lVar3 = *(longlong *)(*param_1 + 8);
  uVar1 = *param_2;
  local_38 = *puVar2;
  uStack_34 = puVar2[1];
  uStack_30 = puVar2[2];
  uStack_2c = puVar2[3];
  FUN_14683da58(lVar3);
  local_22 = 0x20;
  (**(code **)(**(longlong **)(lVar3 + 8) + 0x170))(*(longlong **)(lVar3 + 8),&local_22,2);
  FUN_14683fd9e(*(undefined8 *)(lVar3 + 8),uVar1);
  *(undefined4 *)(lVar3 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683fd9e FUN_14683fd9e body=168 status=ok
// SIG undefined FUN_14683fd9e(void)

void FUN_14683fd9e(longlong *param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28,&DAT_149e14292,(double)param_2);
  uVar1 = local_20 - 1;
  puVar3 = local_28;
  if (local_20 == 0) {
    puVar3 = &DAT_149dfb77a;
    uVar1 = 0;
  }
  uVar2 = 0;
  if (((puVar3 != (undefined2 *)0x0) && (uVar2 = uVar1, 0 < (int)uVar1)) && (puVar3[uVar1 - 1] == 0)
     ) {
    uVar2 = uVar1 - 1;
  }
  (**(code **)(*param_1 + 0x170))(param_1,puVar3,(longlong)(int)uVar2 * 2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683fe48 FUN_14683fe48 body=140 status=ok
// SIG undefined FUN_14683fe48(void)

void FUN_14683fe48(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined4 *)param_1[1];
  lVar3 = *(longlong *)(*param_1 + 8);
  uVar1 = *param_2;
  local_38 = *puVar2;
  uStack_34 = puVar2[1];
  uStack_30 = puVar2[2];
  uStack_2c = puVar2[3];
  FUN_14683da58(lVar3);
  local_22 = 0x20;
  (**(code **)(**(longlong **)(lVar3 + 8) + 0x170))(*(longlong **)(lVar3 + 8),&local_22,2);
  FUN_145928232(*(undefined8 *)(lVar3 + 8),(int)uVar1);
  *(undefined4 *)(lVar3 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683fed6 FUN_14683fed6 body=157 status=ok
// SIG undefined FUN_14683fed6(void)

void FUN_14683fed6(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(*param_1 + 8);
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_2 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_2;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  FUN_14683ff74(uVar1,param_1[1],&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683ff74 FUN_14683ff74 body=160 status=ok
// SIG undefined FUN_14683ff74(void)

void FUN_14683ff74(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_14683da58();
  local_30 = CONCAT62(local_30._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_30,2);
  local_28 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    local_28 = 0;
  }
  local_30 = *param_3;
  (**(code **)(*param_1 + 0x18))(param_1,&local_30);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146840016 FUN_146840016 body=277 status=ok
// SIG undefined FUN_146840016(void)

void FUN_146840016(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((0xc < uVar2) || ((0x1014U >> (uVar2 & 0x1f) & 1) == 0)) {
    local_50 = (undefined1 *)CONCAT62(local_50._2_6_,0x2c);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_50,2);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if (uVar2 == 4 || (uVar2 & 0xfffffffc) == 8) {
    local_50 = (undefined1 *)CONCAT62(local_50._2_6_,0x20);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_50,2);
  }
  else {
    local_50 = &DAT_149e02010;
    local_48 = 2;
    FUN_145d3640c();
    iVar3 = *(int *)(param_1 + 0x24);
    if (0 < iVar3) {
      plVar1 = *(longlong **)(param_1 + 8);
      do {
        local_50 = (undefined1 *)CONCAT62(local_50._2_6_,9);
        (**(code **)(*plVar1 + 0x170))(plVar1,&local_50,2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_14683fd9e(*(undefined8 *)(param_1 + 8),param_2);
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14684012c FUN_14684012c body=391 status=ok
// SIG undefined FUN_14684012c(void)

void FUN_14684012c(longlong param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_c8 [40];
  undefined1 *local_a0;
  undefined4 local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  ulonglong *local_80;
  char local_78;
  undefined1 local_70 [64];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((0xc < uVar2) || ((0x1014U >> (uVar2 & 0x1f) & 1) == 0)) {
    local_90 = (undefined1 *)CONCAT62(local_90._2_6_,0x2c);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_90,2);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if (uVar2 == 4 || (uVar2 & 0xfffffffc) == 8) {
    local_90 = (undefined1 *)CONCAT62(local_90._2_6_,0x20);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_90,2);
  }
  else {
    local_90 = &DAT_149e02010;
    local_88 = (undefined1 *)CONCAT44(local_88._4_4_,2);
    FUN_145d3640c();
    iVar3 = *(int *)(param_1 + 0x24);
    if (0 < iVar3) {
      plVar1 = *(longlong **)(param_1 + 8);
      do {
        local_90 = (undefined1 *)CONCAT62(local_90._2_6_,9);
        (**(code **)(*plVar1 + 0x170))(plVar1,&local_90,2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  local_90 = local_70;
  local_78 = '\0';
  local_80 = &local_30;
  local_88 = local_90;
  FUN_140212e80(&local_90,L"%lld",(longlong)param_2);
  local_a0 = local_90;
  local_98 = (undefined4)((ulonglong)((longlong)local_88 - (longlong)local_90) >> 1);
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  if (local_78 == '\x01') {
    FUN_1400020a8(local_90);
  }
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468402b9 FUN_1468402b9 body=84 status=ok
// SIG undefined FUN_1468402b9(void)

void FUN_1468402b9(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  local_10 = param_1[1];
  (*(code *)(&PTR_LAB_149e445a0)[*(byte *)(param_2 + 8)])(&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146840314 FUN_146840314 body=123 status=ok
// SIG undefined FUN_146840314(void)

void FUN_146840314(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  size_t sVar2;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_1;
  if ((int)((longlong *)param_1[1])[1] == 0) {
    local_28 = L"";
  }
  else {
    local_28 = *(wchar_t **)param_1[1];
    if (local_28 == (wchar_t *)0x0) {
      local_20 = 0;
      goto LAB_14684034c;
    }
  }
  sVar2 = wcslen(local_28);
  local_20 = (int)sVar2;
LAB_14684034c:
  (**(code **)(*plVar1 + 0x70))(plVar1,&local_28,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468403aa FUN_1468403aa body=126 status=ok
// SIG undefined FUN_1468403aa(void)

void FUN_1468403aa(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  size_t sVar2;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_1;
  if ((int)((longlong *)param_1[1])[1] == 0) {
    local_28 = L"";
  }
  else {
    local_28 = *(wchar_t **)param_1[1];
    if (local_28 == (wchar_t *)0x0) {
      local_20 = 0;
      goto LAB_1468403e2;
    }
  }
  sVar2 = wcslen(local_28);
  local_20 = (int)sVar2;
LAB_1468403e2:
  (**(code **)(*plVar1 + 0x88))(plVar1,&local_28,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684042a FUN_14684042a body=126 status=ok
// SIG undefined FUN_14684042a(void)

void FUN_14684042a(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  size_t sVar2;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_1;
  if ((int)((longlong *)param_1[1])[1] == 0) {
    local_28 = L"";
  }
  else {
    local_28 = *(wchar_t **)param_1[1];
    if (local_28 == (wchar_t *)0x0) {
      local_20 = 0;
      goto LAB_146840462;
    }
  }
  sVar2 = wcslen(local_28);
  local_20 = (int)sVar2;
LAB_146840462:
  (**(code **)(*plVar1 + 0x80))(plVar1,&local_28,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468404aa FUN_1468404aa body=123 status=ok
// SIG undefined FUN_1468404aa(void)

void FUN_1468404aa(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  size_t sVar2;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_1;
  if ((int)((longlong *)param_1[1])[1] == 0) {
    local_28 = L"";
  }
  else {
    local_28 = *(wchar_t **)param_1[1];
    if (local_28 == (wchar_t *)0x0) {
      local_20 = 0;
      goto LAB_1468404e2;
    }
  }
  sVar2 = wcslen(local_28);
  local_20 = (int)sVar2;
LAB_1468404e2:
  (**(code **)(*plVar1 + 0x78))(plVar1,&local_28,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146840526 FUN_146840526 body=123 status=ok
// SIG undefined FUN_146840526(void)

void FUN_146840526(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  size_t sVar2;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_1;
  if ((int)((longlong *)param_1[1])[1] == 0) {
    local_28 = L"";
  }
  else {
    local_28 = *(wchar_t **)param_1[1];
    if (local_28 == (wchar_t *)0x0) {
      local_20 = 0;
      goto LAB_14684055e;
    }
  }
  sVar2 = wcslen(local_28);
  local_20 = (int)sVar2;
LAB_14684055e:
  (**(code **)(*plVar1 + 0x58))(plVar1,&local_28,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468405a2 FUN_1468405a2 body=123 status=ok
// SIG undefined FUN_1468405a2(void)

void FUN_1468405a2(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  size_t sVar2;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_1;
  if ((int)((longlong *)param_1[1])[1] == 0) {
    local_28 = L"";
  }
  else {
    local_28 = *(wchar_t **)param_1[1];
    if (local_28 == (wchar_t *)0x0) {
      local_20 = 0;
      goto LAB_1468405da;
    }
  }
  sVar2 = wcslen(local_28);
  local_20 = (int)sVar2;
LAB_1468405da:
  (**(code **)(*plVar1 + 0x50))(plVar1,&local_28,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684061e FUN_14684061e body=123 status=ok
// SIG undefined FUN_14684061e(void)

void FUN_14684061e(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  size_t sVar2;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_1;
  if ((int)((longlong *)param_1[1])[1] == 0) {
    local_28 = L"";
  }
  else {
    local_28 = *(wchar_t **)param_1[1];
    if (local_28 == (wchar_t *)0x0) {
      local_20 = 0;
      goto LAB_146840656;
    }
  }
  sVar2 = wcslen(local_28);
  local_20 = (int)sVar2;
LAB_146840656:
  (**(code **)(*plVar1 + 0x68))(plVar1,&local_28,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468406b6 FUN_1468406b6 body=103 status=ok
// SIG undefined FUN_1468406b6(void)

void FUN_1468406b6(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [38];
  undefined2 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 8);
  *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + -1;
  local_12 = 0x7d;
  (**(code **)(**(longlong **)(lVar1 + 8) + 0x170))(*(longlong **)(lVar1 + 8),&local_12,2);
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1;
  FUN_14047c610(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x20) = 3;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684073c FUN_14684073c body=80 status=ok
// SIG undefined FUN_14684073c(void)

void FUN_14684073c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_1;
  local_10 = param_2;
  (*(code *)(&PTR_LAB_149e446e0)[*(byte *)(param_3 + 0x10)])(&local_18,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684078e FUN_14684078e body=97 status=ok
// SIG undefined FUN_14684078e(void)

void FUN_14684078e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < *param_3) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    FUN_14680f2de(param_3,local_30);
    FUN_146841c16(uVar1,param_2,local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468407f0 FUN_1468407f0 body=105 status=ok
// SIG undefined FUN_1468407f0(void)

void FUN_1468407f0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 8);
  uVar1 = *param_3;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14683e6dc(lVar2);
  FUN_145928232(*(undefined8 *)(lVar2 + 8),(int)uVar1);
  *(undefined4 *)(lVar2 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684085a FUN_14684085a body=105 status=ok
// SIG undefined FUN_14684085a(void)

void FUN_14684085a(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 8);
  uVar1 = *param_3;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14683e6dc(lVar2);
  FUN_14683fd9e(*(undefined8 *)(lVar2 + 8),uVar1);
  *(undefined4 *)(lVar2 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468408c4 FUN_1468408c4 body=161 status=ok
// SIG undefined FUN_1468408c4(void)

void FUN_1468408c4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 8);
  puVar2 = (undefined8 *)FUN_1447a1f4a(param_3);
  local_40 = (void *)0x0;
  local_38 = *(int *)(puVar2 + 1);
  lVar3 = (longlong)local_38;
  _Src = (void *)*puVar2;
  if (lVar3 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar3 * 2);
  }
  FUN_146841c16(uVar1,param_2,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146840966 FUN_146840966 body=153 status=ok
// SIG undefined FUN_146840966(void)

void FUN_146840966(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  FUN_146841c16(uVar1,param_2,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146840a30 FUN_146840a30 body=85 status=ok
// SIG undefined FUN_146840a30(void)

void FUN_146840a30(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_146841682(*(undefined8 *)(param_1 + 8));
  lVar2 = param_3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_3;
    lVar3 = 0;
    do {
      FUN_146841c96(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + lVar3));
      lVar3 = lVar3 + 4;
    } while ((longlong)(int)lVar2 * 4 != lVar3);
  }
  FUN_1459282dc(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 146840a86 FUN_146840a86 body=83 status=ok
// SIG undefined FUN_146840a86(void)

void FUN_146840a86(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_146841682(*(undefined8 *)(param_1 + 8));
  lVar2 = param_3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_3;
    lVar3 = 0;
    do {
      FUN_146841d1c(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + lVar3));
      lVar3 = lVar3 + 4;
    } while ((longlong)(int)lVar2 * 4 != lVar3);
  }
  FUN_1459282dc(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 146840ada FUN_146840ada body=76 status=ok
// SIG undefined FUN_146840ada(void)

void FUN_146840ada(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_146841682(*(undefined8 *)(param_1 + 8));
  if ((longlong)(int)param_3[1] != 0) {
    lVar2 = *param_3;
    lVar1 = (longlong)(int)param_3[1] << 4;
    do {
      FUN_145927f78(*(undefined8 *)(param_1 + 8),lVar2);
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  FUN_1459282dc(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 146840b26 FUN_146840b26 body=76 status=ok
// SIG undefined FUN_146840b26(void)

void FUN_146840b26(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  FUN_14683e51e(*(undefined8 *)(param_1 + 8));
  if (0 < (int)param_2[1]) {
    lVar1 = 0;
    iVar2 = 0;
    do {
      FUN_145927f78(*(undefined8 *)(param_1 + 8),*param_2 + lVar1);
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (iVar2 < (int)param_2[1]);
  }
  FUN_1459282dc(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 146840b72 FUN_146840b72 body=350 status=ok
// SIG undefined FUN_146840b72(void)

void FUN_146840b72(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
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
  FUN_1468415f0(*(undefined8 *)(param_1 + 8));
  plVar1 = param_3 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_3[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_3[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_3;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      uStack_48 = (longlong *)(*local_78 + (longlong)iStack_5c * 0x30);
      local_50 = param_1;
      (*(code *)(&PTR_LAB_149e44730)[*(byte *)(*local_78 + (longlong)iStack_5c * 0x30 + 0x20)])();
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_3 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  lVar2 = *(longlong *)(param_1 + 8);
  *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + -1;
  local_78 = (longlong *)CONCAT62(local_78._2_6_,0x7d);
  (**(code **)(**(longlong **)(lVar2 + 8) + 0x170))(*(longlong **)(lVar2 + 8),&local_78,2);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
  FUN_14047c610(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 0x20) = 3;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146840cd2 FUN_146840cd2 body=402 status=ok
// SIG undefined FUN_146840cd2(void)

void FUN_146840cd2(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  size_t sVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1468415f0(param_1[1]);
  plVar1 = param_3 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = plVar1;
  if ((int)param_3[5] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar4 = (int)param_3[5];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = param_3;
  if ((iStack_4c != iVar4) || (uStack_58 != plVar1)) {
    do {
      lVar2 = *local_88;
      lVar5 = (longlong)iStack_6c * 0x20;
      if (*(int *)(lVar2 + 8 + lVar5) == 0) {
        local_98 = L"";
LAB_146840da8:
        sVar3 = wcslen(local_98);
        local_90 = (int)sVar3;
      }
      else {
        local_98 = *(wchar_t **)(lVar2 + lVar5);
        if (local_98 != (wchar_t *)0x0) goto LAB_146840da8;
        local_90 = 0;
      }
      (**(code **)(*param_1 + 0x58))(param_1,&local_98,lVar2 + lVar5 + 0x10);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_3 ||
             ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || iStack_6c != iVar4));
  }
  lVar2 = param_1[1];
  *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + -1;
  local_88 = (longlong *)CONCAT62(local_88._2_6_,0x7d);
  (**(code **)(**(longlong **)(lVar2 + 8) + 0x170))(*(longlong **)(lVar2 + 8),&local_88,2);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
  FUN_14047c610(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 0x20) = 3;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146840e66 FUN_146840e66 body=402 status=ok
// SIG undefined FUN_146840e66(void)

void FUN_146840e66(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  size_t sVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1468415f0(param_1[1]);
  plVar1 = param_3 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = plVar1;
  if ((int)param_3[5] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar4 = (int)param_3[5];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = param_3;
  if ((iStack_4c != iVar4) || (uStack_58 != plVar1)) {
    do {
      lVar2 = *local_88;
      lVar5 = (longlong)iStack_6c * 0x20;
      if (*(int *)(lVar2 + 8 + lVar5) == 0) {
        local_98 = L"";
LAB_146840f3c:
        sVar3 = wcslen(local_98);
        local_90 = (int)sVar3;
      }
      else {
        local_98 = *(wchar_t **)(lVar2 + lVar5);
        if (local_98 != (wchar_t *)0x0) goto LAB_146840f3c;
        local_90 = 0;
      }
      (**(code **)(*param_1 + 0x78))(param_1,&local_98,lVar2 + lVar5 + 0x10);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_3 ||
             ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || iStack_6c != iVar4));
  }
  lVar2 = param_1[1];
  *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + -1;
  local_88 = (longlong *)CONCAT62(local_88._2_6_,0x7d);
  (**(code **)(**(longlong **)(lVar2 + 8) + 0x170))(*(longlong **)(lVar2 + 8),&local_88,2);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
  FUN_14047c610(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 0x20) = 3;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146840ffa FUN_146840ffa body=404 status=ok
// SIG undefined FUN_146840ffa(void)

void FUN_146840ffa(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  size_t sVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1468415f0(param_1[1]);
  plVar1 = param_3 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = plVar1;
  if ((int)param_3[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = (int)param_3[5];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = param_3;
  if ((iStack_4c != iVar5) || (uStack_58 != plVar1)) {
    do {
      lVar2 = *local_88;
      lVar3 = (longlong)iStack_6c;
      if (*(int *)(lVar2 + 8 + lVar3 * 0x28) == 0) {
        local_98 = L"";
LAB_1468410cf:
        sVar4 = wcslen(local_98);
        local_90 = (int)sVar4;
      }
      else {
        local_98 = *(wchar_t **)(lVar2 + lVar3 * 0x28);
        if (local_98 != (wchar_t *)0x0) goto LAB_1468410cf;
        local_90 = 0;
      }
      (**(code **)(*param_1 + 0x98))(param_1,&local_98,lVar2 + lVar3 * 0x28 + 0x10);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_3 ||
             ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || iStack_6c != iVar5));
  }
  lVar2 = param_1[1];
  *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + -1;
  local_88 = (longlong *)CONCAT62(local_88._2_6_,0x7d);
  (**(code **)(**(longlong **)(lVar2 + 8) + 0x170))(*(longlong **)(lVar2 + 8),&local_88,2);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
  FUN_14047c610(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 0x20) = 3;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146841190 FUN_146841190 body=405 status=ok
// SIG undefined FUN_146841190(void)

void FUN_146841190(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  size_t sVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1468415f0(param_1[1]);
  plVar1 = param_3 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = plVar1;
  if ((int)param_3[5] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar4 = (int)param_3[5];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = param_3;
  if ((iStack_4c != iVar4) || (uStack_58 != plVar1)) {
    do {
      lVar2 = *local_88;
      lVar5 = (longlong)iStack_6c * 0x20;
      if (*(int *)(lVar2 + 8 + lVar5) == 0) {
        local_98 = L"";
LAB_146841266:
        sVar3 = wcslen(local_98);
        local_90 = (int)sVar3;
      }
      else {
        local_98 = *(wchar_t **)(lVar2 + lVar5);
        if (local_98 != (wchar_t *)0x0) goto LAB_146841266;
        local_90 = 0;
      }
      (**(code **)(*param_1 + 0x88))(param_1,&local_98,lVar2 + lVar5 + 0x10);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_3 ||
             ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || iStack_6c != iVar4));
  }
  lVar2 = param_1[1];
  *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + -1;
  local_88 = (longlong *)CONCAT62(local_88._2_6_,0x7d);
  (**(code **)(**(longlong **)(lVar2 + 8) + 0x170))(*(longlong **)(lVar2 + 8),&local_88,2);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
  FUN_14047c610(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 0x20) = 3;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146841326 FUN_146841326 body=401 status=ok
// SIG undefined FUN_146841326(void)

void FUN_146841326(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  size_t sVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1468415f0(param_1[1]);
  plVar1 = param_3 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = plVar1;
  if ((int)param_3[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = (int)param_3[5];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = param_3;
  if ((iStack_4c != iVar5) || (uStack_58 != plVar1)) {
    do {
      lVar2 = *local_88;
      lVar3 = (longlong)iStack_6c;
      if (*(int *)(lVar2 + 8 + lVar3 * 0x28) == 0) {
        local_98 = L"";
LAB_1468413fb:
        sVar4 = wcslen(local_98);
        local_90 = (int)sVar4;
      }
      else {
        local_98 = *(wchar_t **)(lVar2 + lVar3 * 0x28);
        if (local_98 != (wchar_t *)0x0) goto LAB_1468413fb;
        local_90 = 0;
      }
      (**(code **)(*param_1 + 0x68))(param_1,&local_98,lVar2 + lVar3 * 0x28 + 0x10);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_3 ||
             ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || iStack_6c != iVar5));
  }
  lVar2 = param_1[1];
  *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + -1;
  local_88 = (longlong *)CONCAT62(local_88._2_6_,0x7d);
  (**(code **)(**(longlong **)(lVar2 + 8) + 0x170))(*(longlong **)(lVar2 + 8),&local_88,2);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
  FUN_14047c610(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 0x20) = 3;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468414ba FUN_1468414ba body=66 status=ok
// SIG undefined FUN_1468414ba(void)

void FUN_1468414ba(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(*param_1 + 0xd8))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146841508 FUN_146841508 body=78 status=ok
// SIG undefined FUN_146841508(void)

void FUN_146841508(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 8);
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_14683e6dc(lVar1);
  *(undefined4 *)(lVar1 + 0x20) = 0xc;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146841558 FUN_146841558 body=66 status=ok
// SIG undefined FUN_146841558(void)

void FUN_146841558(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_14683e274(*(undefined8 *)(param_1 + 8));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684159c FUN_14684159c body=83 status=ok
// SIG undefined FUN_14684159c(void)

undefined8 * FUN_14684159c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149e445d0;
  plVar3 = (longlong *)param_1[2];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468415f0 FUN_1468415f0 body=145 status=ok
// SIG undefined FUN_1468415f0(void)

void FUN_1468415f0(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14683e6dc();
  local_1a = 0x7b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 0x20) = 2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146841682 FUN_146841682 body=145 status=ok
// SIG undefined FUN_146841682(void)

void FUN_146841682(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14683e6dc();
  local_1a = 0x5b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x20) = 4;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684172a FUN_14684172a body=84 status=ok
// SIG undefined FUN_14684172a(void)

void FUN_14684172a(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  local_10 = param_1[1];
  (*(code *)(&PTR_LAB_149e44700)[*(byte *)(param_2 + 8)])(&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146841784 FUN_146841784 body=130 status=ok
// SIG undefined FUN_146841784(void)

void FUN_146841784(longlong param_1,undefined4 *param_2,byte param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  wchar_t *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_14683e6dc();
  local_30 = L"false";
  if (param_3 != 0) {
    local_30 = L"true";
  }
  local_28 = param_3 ^ 5;
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  *(uint *)(param_1 + 0x20) = 10 - (uint)param_3;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146841849 FUN_146841849 body=111 status=ok
// SIG undefined FUN_146841849(void)

void FUN_146841849(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined4 *)param_1[1];
  lVar3 = *(longlong *)(*param_1 + 8);
  uVar1 = *param_2;
  local_38 = *puVar2;
  uStack_34 = puVar2[1];
  uStack_30 = puVar2[2];
  uStack_2c = puVar2[3];
  FUN_14683e6dc(lVar3);
  FUN_14683fd9e(*(undefined8 *)(lVar3 + 8),uVar1);
  *(undefined4 *)(lVar3 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468418b9 FUN_1468418b9 body=111 status=ok
// SIG undefined FUN_1468418b9(void)

void FUN_1468418b9(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined4 *)param_1[1];
  lVar3 = *(longlong *)(*param_1 + 8);
  uVar1 = *param_2;
  local_38 = *puVar2;
  uStack_34 = puVar2[1];
  uStack_30 = puVar2[2];
  uStack_2c = puVar2[3];
  FUN_14683e6dc(lVar3);
  FUN_145928232(*(undefined8 *)(lVar3 + 8),(int)uVar1);
  *(undefined4 *)(lVar3 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684192a FUN_14684192a body=194 status=ok
// SIG undefined FUN_14684192a(void)

void FUN_14684192a(longlong param_1,undefined4 *param_2,int param_3)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  ulonglong *local_68;
  char local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  FUN_14683e6dc();
  local_78 = local_58;
  local_60 = '\0';
  local_68 = &local_18;
  local_70 = local_78;
  FUN_140212e80(&local_78,L"%lld",(longlong)param_3);
  local_88 = local_78;
  local_80 = (undefined4)((ulonglong)((longlong)local_70 - (longlong)local_78) >> 1);
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  if (local_60 == '\x01') {
    FUN_1400020a8(local_78);
  }
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468419ee FUN_1468419ee body=194 status=ok
// SIG undefined FUN_1468419ee(void)

void FUN_1468419ee(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  ulonglong *local_68;
  char local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  FUN_14683e6dc();
  local_78 = local_58;
  local_60 = '\0';
  local_68 = &local_18;
  local_70 = local_78;
  FUN_140212e80(&local_78,L"%llu",param_3);
  local_88 = local_78;
  local_80 = (undefined4)((ulonglong)((longlong)local_70 - (longlong)local_78) >> 1);
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  if (local_60 == '\x01') {
    FUN_1400020a8(local_78);
  }
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146841ab2 FUN_146841ab2 body=196 status=ok
// SIG undefined FUN_146841ab2(void)

void FUN_146841ab2(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  ulonglong *local_70;
  char local_68;
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = *param_2;
  uStack_a4 = param_2[1];
  uStack_a0 = param_2[2];
  uStack_9c = param_2[3];
  FUN_14683e6dc();
  local_80 = local_60;
  local_68 = '\0';
  local_70 = &local_20;
  local_78 = local_80;
  FUN_140212e80(&local_80,L"%lld",param_3);
  local_90 = local_80;
  local_88 = (undefined4)((ulonglong)((longlong)local_78 - (longlong)local_80) >> 1);
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  if (local_68 == '\x01') {
    FUN_1400020a8(local_80);
  }
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146841b78 FUN_146841b78 body=157 status=ok
// SIG undefined FUN_146841b78(void)

void FUN_146841b78(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(*param_1 + 8);
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_2 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_2;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  FUN_146841c16(uVar1,param_1[1],&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146841c16 FUN_146841c16 body=126 status=ok
// SIG undefined FUN_146841c16(void)

void FUN_146841c16(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14683e6dc();
  local_28 = *param_3;
  local_20 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    local_20 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146841c96 FUN_146841c96 body=132 status=ok
// SIG undefined FUN_146841c96(void)

void FUN_146841c96(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [38];
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((0xc < *(uint *)(param_1 + 0x20)) ||
     ((0x1014U >> (*(uint *)(param_1 + 0x20) & 0x1f) & 1) == 0)) {
    local_22 = 0x2c;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_22,2);
  }
  FUN_14683fd9e(*(undefined8 *)(param_1 + 8),param_2);
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146841d1c FUN_146841d1c body=237 status=ok
// SIG undefined FUN_146841d1c(void)

void FUN_146841d1c(longlong param_1,int param_2)

{
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  ulonglong *local_68;
  char local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((0xc < *(uint *)(param_1 + 0x20)) ||
     ((0x1014U >> (*(uint *)(param_1 + 0x20) & 0x1f) & 1) == 0)) {
    local_78 = (undefined1 *)CONCAT62(local_78._2_6_,0x2c);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_78,2);
  }
  local_78 = local_58;
  local_60 = '\0';
  local_68 = &local_18;
  local_70 = local_78;
  FUN_140212e80(&local_78,L"%lld",(longlong)param_2);
  local_88 = local_78;
  local_80 = (undefined4)((ulonglong)((longlong)local_70 - (longlong)local_78) >> 1);
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  if (local_60 == '\x01') {
    FUN_1400020a8(local_78);
  }
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146841e0f FUN_146841e0f body=84 status=ok
// SIG undefined FUN_146841e0f(void)

void FUN_146841e0f(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  local_10 = param_1[1];
  (*(code *)(&PTR_LAB_149e44750)[*(byte *)(param_2 + 8)])(&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146841e6a FUN_146841e6a body=123 status=ok
// SIG undefined FUN_146841e6a(void)

void FUN_146841e6a(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  size_t sVar2;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_1;
  if ((int)((longlong *)param_1[1])[1] == 0) {
    local_28 = L"";
  }
  else {
    local_28 = *(wchar_t **)param_1[1];
    if (local_28 == (wchar_t *)0x0) {
      local_20 = 0;
      goto LAB_146841ea2;
    }
  }
  sVar2 = wcslen(local_28);
  local_20 = (int)sVar2;
LAB_146841ea2:
  (**(code **)(*plVar1 + 0x70))(plVar1,&local_28,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146841f00 FUN_146841f00 body=126 status=ok
// SIG undefined FUN_146841f00(void)

void FUN_146841f00(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  size_t sVar2;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_1;
  if ((int)((longlong *)param_1[1])[1] == 0) {
    local_28 = L"";
  }
  else {
    local_28 = *(wchar_t **)param_1[1];
    if (local_28 == (wchar_t *)0x0) {
      local_20 = 0;
      goto LAB_146841f38;
    }
  }
  sVar2 = wcslen(local_28);
  local_20 = (int)sVar2;
LAB_146841f38:
  (**(code **)(*plVar1 + 0x88))(plVar1,&local_28,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146841f80 FUN_146841f80 body=126 status=ok
// SIG undefined FUN_146841f80(void)

void FUN_146841f80(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  size_t sVar2;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_1;
  if ((int)((longlong *)param_1[1])[1] == 0) {
    local_28 = L"";
  }
  else {
    local_28 = *(wchar_t **)param_1[1];
    if (local_28 == (wchar_t *)0x0) {
      local_20 = 0;
      goto LAB_146841fb8;
    }
  }
  sVar2 = wcslen(local_28);
  local_20 = (int)sVar2;
LAB_146841fb8:
  (**(code **)(*plVar1 + 0x80))(plVar1,&local_28,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146842000 FUN_146842000 body=123 status=ok
// SIG undefined FUN_146842000(void)

void FUN_146842000(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  size_t sVar2;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_1;
  if ((int)((longlong *)param_1[1])[1] == 0) {
    local_28 = L"";
  }
  else {
    local_28 = *(wchar_t **)param_1[1];
    if (local_28 == (wchar_t *)0x0) {
      local_20 = 0;
      goto LAB_146842038;
    }
  }
  sVar2 = wcslen(local_28);
  local_20 = (int)sVar2;
LAB_146842038:
  (**(code **)(*plVar1 + 0x78))(plVar1,&local_28,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684207c FUN_14684207c body=123 status=ok
// SIG undefined FUN_14684207c(void)

void FUN_14684207c(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  size_t sVar2;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_1;
  if ((int)((longlong *)param_1[1])[1] == 0) {
    local_28 = L"";
  }
  else {
    local_28 = *(wchar_t **)param_1[1];
    if (local_28 == (wchar_t *)0x0) {
      local_20 = 0;
      goto LAB_1468420b4;
    }
  }
  sVar2 = wcslen(local_28);
  local_20 = (int)sVar2;
LAB_1468420b4:
  (**(code **)(*plVar1 + 0x58))(plVar1,&local_28,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468420f8 FUN_1468420f8 body=123 status=ok
// SIG undefined FUN_1468420f8(void)

void FUN_1468420f8(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  size_t sVar2;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_1;
  if ((int)((longlong *)param_1[1])[1] == 0) {
    local_28 = L"";
  }
  else {
    local_28 = *(wchar_t **)param_1[1];
    if (local_28 == (wchar_t *)0x0) {
      local_20 = 0;
      goto LAB_146842130;
    }
  }
  sVar2 = wcslen(local_28);
  local_20 = (int)sVar2;
LAB_146842130:
  (**(code **)(*plVar1 + 0x50))(plVar1,&local_28,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146842174 FUN_146842174 body=123 status=ok
// SIG undefined FUN_146842174(void)

void FUN_146842174(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  size_t sVar2;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_1;
  if ((int)((longlong *)param_1[1])[1] == 0) {
    local_28 = L"";
  }
  else {
    local_28 = *(wchar_t **)param_1[1];
    if (local_28 == (wchar_t *)0x0) {
      local_20 = 0;
      goto LAB_1468421ac;
    }
  }
  sVar2 = wcslen(local_28);
  local_20 = (int)sVar2;
LAB_1468421ac:
  (**(code **)(*plVar1 + 0x68))(plVar1,&local_28,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468421f0 FUN_1468421f0 body=360 status=ok
// SIG undefined FUN_1468421f0(void)

undefined8 * FUN_1468421f0(undefined8 *param_1,undefined8 *param_2)

{
  longlong **pplVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 1;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_FUN_149e44780;
  param_1[0xe] = 0;
  param_1[0xe] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[0x10] = 0;
  iVar2 = *(int *)(param_1 + 0xf);
  if (1 < iVar2) {
    pplVar1 = (longlong **)(param_1 + 0x10);
    lVar3 = param_1[0xe];
    plVar5 = (longlong *)FUN_14001cc68(0xb0,0x10);
    FUN_144869430(plVar5);
    *plVar5 = (longlong)&PTR__purecall_149e30ac0;
    plVar5[0x12] = lVar3;
    plVar5[0x13] = 0;
    plVar5[0x14] = (ulonglong)(iVar2 - 1) * 2;
    *(undefined1 *)(plVar5 + 0x15) = 0;
    FUN_140996f94(plVar5,1);
    (**(code **)(*plVar5 + 0xf0))(plVar5,0);
    *plVar5 = (longlong)&PTR_FUN_149e447c0;
    local_40 = plVar5;
    if (pplVar1 != &local_40) {
      plVar4 = *pplVar1;
      *pplVar1 = plVar5;
      local_40 = (longlong *)0x0;
      FUN_14047b1f0(pplVar1,plVar4);
    }
    FUN_14047b1f0(&local_40,local_40);
    param_1[4] = *pplVar1;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684235a FUN_14684235a body=38 status=ok
// SIG undefined FUN_14684235a(void)

undefined8 FUN_14684235a(undefined8 param_1,int param_2)

{
  FUN_140dc6f94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146842380 FUN_146842380 body=73 status=ok
// SIG undefined FUN_146842380(void)

longlong FUN_146842380(longlong param_1,int param_2)

{
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  FUN_144a7fc42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468423ca FUN_1468423ca body=32 status=ok
// SIG undefined FUN_1468423ca(void)

undefined8 FUN_1468423ca(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FBufferReader");
  return param_2;
}



// FUNCTION 1468423ea FUN_1468423ea body=104 status=ok
// SIG undefined FUN_1468423ea(void)

void FUN_1468423ea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
  FUN_14047c710(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146842452 FUN_146842452 body=185 status=ok
// SIG undefined FUN_146842452(void)

undefined4 * FUN_146842452(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    iVar3 = param_2[4];
    _Src = *(void **)(param_2 + 2);
    param_1[4] = iVar3;
    if (iVar3 == 0 && param_1[5] == 0) {
      param_1[5] = 0;
    }
    else {
      FUN_1446dd670(param_1 + 2,iVar3);
      if (iVar3 != 0) {
        memcpy(*(void **)(param_1 + 2),_Src,(longlong)iVar3 * 2);
      }
    }
  }
  FUN_14047d664(param_1 + 6,param_2 + 6);
  uVar4 = *(undefined8 *)(param_2 + 10);
  lVar5 = *(longlong *)(param_2 + 0xc);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0xc);
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(longlong *)(param_1 + 0xc) = lVar5;
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
  return param_1;
}



// FUNCTION 14684250c FUN_14684250c body=199 status=ok
// SIG undefined FUN_14684250c(void)

void FUN_14684250c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(local_48,L" Line: %u Ch: %u",*(undefined4 *)(param_1 + 0x60),
                *(undefined4 *)(param_1 + 100));
  FUN_1407ec8fc(&local_38,param_2,local_48);
  if ((longlong *)(param_1 + 0x38) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x38) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 0x40) = (undefined4)local_30;
    *(undefined4 *)(param_1 + 0x44) = local_30._4_4_;
    local_30 = 0;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468425d4 FUN_1468425d4 body=197 status=ok
// SIG undefined FUN_1468425d4(void)

bool FUN_1468425d4(longlong param_1,void *param_2,size_t param_3)

{
  byte bVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (*(code **)(*plVar2 + 0x170) == FUN_1447395b8) {
    memcpy(param_2,(void *)(plVar2[0x12] + plVar2[0x13]),param_3);
    plVar2[0x13] = plVar2[0x13] + param_3;
  }
  else {
    (**(code **)(*plVar2 + 0x170))(plVar2,param_2,param_3);
  }
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x20) + 0x29);
  if ((bVar1 & 2) != 0) {
    FUN_140056680(local_30,L"Stream I/O Error");
    FUN_14684250c(param_1,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (bVar1 & 2) == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684269a FUN_14684269a body=115 status=ok
// SIG undefined FUN_14684269a(void)

undefined8 * FUN_14684269a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_149e44f90;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 1) = 3;
  return param_1;
}



// FUNCTION 146842728 FUN_146842728 body=29 status=ok
// SIG undefined FUN_146842728(void)

undefined8 FUN_146842728(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146842872 FUN_146842872 body=26 status=ok
// SIG undefined FUN_146842872(void)

undefined8 FUN_146842872(longlong param_1,undefined8 param_2)

{
  FUN_144a787a6(param_2,param_1 + 0x10);
  return 1;
}



// FUNCTION 14684288c FUN_14684288c body=27 status=ok
// SIG undefined FUN_14684288c(void)

undefined1 FUN_14684288c(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1456afa18(param_1 + 0x10);
  *param_2 = uVar1;
  return 1;
}



// FUNCTION 1468428ba FUN_1468428ba body=57 status=ok
// SIG undefined FUN_1468428ba(void)

undefined8 * FUN_1468428ba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e44f90;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468428f4 FUN_1468428f4 body=32 status=ok
// SIG undefined FUN_1468428f4(void)

undefined8 FUN_1468428f4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"NumberString");
  return param_2;
}



// FUNCTION 146842914 FUN_146842914 body=182 status=ok
// SIG undefined FUN_146842914(void)

ulonglong FUN_146842914(ulonglong *param_1,wchar_t *param_2)

{
  wchar_t _C;
  int iVar1;
  ulonglong uVar2;
  wchar_t *pwVar3;
  ulonglong uVar4;
  
  if (*param_2 == L'\0') {
    *param_1 = 0;
  }
  else {
    uVar2 = _wcstoui64(param_2,(wchar_t **)0x0,0);
    *param_1 = uVar2;
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if ((uVar2 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) goto LAB_146842984;
    do {
      do {
        do {
          pwVar3 = param_2 + 1;
          _C = *param_2;
          param_2 = pwVar3;
        } while (_C == L'+');
      } while (_C == L'-');
      if (_C == L'\0') goto LAB_146842982;
      iVar1 = iswspace(_C);
    } while (iVar1 != 0);
    if (_C != L'\0') {
      uVar4 = 0;
      do {
        iVar1 = iswspace(_C);
        if ((_C == L'.') || (iVar1 != 0)) break;
        if ((~(byte)uVar4 & _C != L'0') != 0) goto LAB_146842982;
        _C = *pwVar3;
        pwVar3 = pwVar3 + 1;
        uVar4 = 1;
      } while (_C != L'\0');
      goto LAB_146842984;
    }
  }
LAB_146842982:
  uVar4 = 0;
LAB_146842984:
  return uVar4 & 0xffffff01;
}


