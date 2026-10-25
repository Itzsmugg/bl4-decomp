// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14323179f FUN_14323179f body=47 status=ok
// SIG undefined FUN_14323179f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14323179f(void)

{
  _DAT_14ca9a590 = 0;
  if (DAT_14ca9a588 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&DAT_14ca9a548);
  return;
}



// FUNCTION 1432317ce FUN_1432317ce body=41 status=ok
// SIG undefined FUN_1432317ce(void)

void FUN_1432317ce(void)

{
  DAT_14ca9a5f8 = 0;
  if (DAT_14ca9a5f0 != 0) {
    FUN_1400020a8();
  }
  FUN_146320cb8();
  return;
}



// FUNCTION 143231805 FUN_143231805 body=91 status=ok
// SIG undefined FUN_143231805(void)

void FUN_143231805(void)

{
  if (DAT_14ca9ee40 != 0) {
    if (DAT_14ca9ee38 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14ca9ee38)(DAT_14ca9ee38,0);
    FUN_1446efa72(&DAT_14ca9ee38,0,0,0x10);
    DAT_14ca9ee40 = 0;
  }
  if (DAT_14ca9ee38 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143231860 FUN_143231860 body=274 status=ok
// SIG undefined FUN_143231860(void)

longlong FUN_143231860(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x68) + 0x28))
                    ((longlong *)**(undefined8 **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70),
                     param_2);
  FUN_1407ee45e(*(undefined8 *)(param_1 + 0x68),&local_28,uVar4,param_3);
  if (local_28 == 0) {
    if ((char)param_3 == '\0') {
      lVar8 = 0;
      goto LAB_14323193a;
    }
    FUN_140033559(".\\Runtime/RenderCore/Private/ShaderCodeLibrary.cpp",0x564,
                  L"FShaderMapResource_SharedCode::InitRHI is unable to create a shader");
    lVar8 = 0;
  }
  else {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    lVar8 = local_28;
  }
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
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = local_28;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar9) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar9 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar9) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
LAB_14323193a:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 143231974 FUN_143231974 body=64 status=ok
// SIG undefined FUN_143231974(void)

void FUN_143231974(longlong param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x74) == '\x01') {
    uVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x68) + 0x28))
                      ((longlong *)**(undefined8 **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70)
                       ,param_2);
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x68) + 0x78);
                    /* WARNING: Could not recover jumptable at 0x0001432319aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((longlong *)**(undefined8 **)(param_1 + 0x68),uVar1,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}



// FUNCTION 1432319b4 FUN_1432319b4 body=346 status=ok
// SIG undefined FUN_1432319b4(void)

void FUN_1432319b4(undefined8 *param_1,uint param_2,undefined8 param_3)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong lStack_50;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar4 = param_2;
  }
  lVar9 = (longlong)(int)(param_2 - (uVar4 & 0xffffffe0));
  local_44 = param_2;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + lVar9 + 0x143));
  local_58 = 0;
  lStack_50 = 0;
  pcVar5 = (char *)FUN_144adc2b0(param_1 + lVar9 * 10 + 1,param_2,&local_44,&local_58);
  lVar3 = lStack_50;
  if (lStack_50 != 0) {
    LOCK();
    puVar1 = (uint *)(lStack_50 + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lStack_50 + 8);
      LOCK();
      uVar4 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar4 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lStack_50 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar3;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar10) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar10 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar10) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  if (*pcVar5 == '\x01') {
    (**(code **)(*(longlong *)*param_1 + 0x58))((longlong *)*param_1,local_44,param_3);
  }
  else if (*pcVar5 == '\0') {
    (**(code **)(*(longlong *)*param_1 + 0x60))((longlong *)*param_1,local_44,param_3);
    *pcVar5 = '\x01';
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x000143231aeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + lVar9 + 0x143));
  return;
}



// FUNCTION 143231b10 FUN_143231b10 body=585 status=ok
// SIG undefined FUN_143231b10(void)

void FUN_143231b10(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  PSRWLOCK SRWLock;
  longlong lVar8;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong **)(param_1 + 0x68) != (longlong *)0x0) && (**(longlong **)(param_1 + 0x68) != 0))
  {
    uVar1 = *(uint *)(param_1 + 0x58);
    local_58 = 0;
    uStack_50 = 0;
    uVar7 = 0;
    if ((uVar1 & 0x7fffffff) != 0) {
      do {
        uVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x68) + 0x28))
                          ((longlong *)**(undefined8 **)(param_1 + 0x68),
                           *(undefined4 *)(param_1 + 0x70),uVar7 & 0xffffffff);
        if (*(longlong *)(*(longlong *)(param_1 + 0x50) + uVar7 * 8) == 0) {
          if (*(char *)(param_1 + 0x74) == '\x01') {
            plVar2 = (longlong *)**(undefined8 **)(param_1 + 0x68);
            (**(code **)(*plVar2 + 0x78))(plVar2,uVar3);
          }
          else {
            FUN_14743c24c(*(undefined8 **)(param_1 + 0x68),uVar3);
          }
        }
        else {
          lVar6 = *(longlong *)(param_1 + 0x68);
          SRWLock = (PSRWLOCK)((longlong)((int)uVar3 % 0x20) * 8 + 0xa18 + lVar6);
          AcquireSRWLockExclusive(SRWLock);
          lVar4 = (longlong)((int)uVar3 % 0x20) * 0x50;
          if (*(int *)(lVar6 + 0x10 + lVar4) != *(int *)(lVar6 + 0x3c + lVar4)) {
            lVar4 = lVar4 + lVar6;
            lVar6 = lVar4 + 0x40;
            if (*(longlong *)(lVar4 + 0x48) != 0) {
              lVar6 = *(longlong *)(lVar4 + 0x48);
            }
            iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar4 + 0x50) - 1U & uVar3) * 4);
            if (iVar5 != -1) {
              lVar6 = *(longlong *)(lVar4 + 8);
              do {
                lVar8 = lVar6 + (longlong)iVar5 * 0x20;
                if (*(uint *)(lVar6 + (longlong)iVar5 * 0x20) == uVar3) {
                  if ((((lVar8 != 0) && (lVar8 != -8)) && (*(longlong *)(lVar8 + 0x10) != 0)) &&
                     ((*(uint *)(*(longlong *)(lVar8 + 0x10) + 8) & 0x3fffffff) == 2)) {
                    FUN_14054dc28((longlong *)(lVar4 + 8),uVar3);
                  }
                  break;
                }
                iVar5 = *(int *)(lVar8 + 0x18);
              } while (iVar5 != -1);
            }
          }
          ReleaseSRWLockExclusive(SRWLock);
        }
        if (DAT_14ca9a508 == '\x01') {
          local_5c = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x68) + 0x90))
                               ((longlong *)**(undefined8 **)(param_1 + 0x68),uVar3);
          FUN_1449e3bb0(&local_58,&local_5c);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != ((ulonglong)uVar1 & 0x7fffffff));
    }
    lVar4 = local_58;
    if (DAT_14ca9a508 != '\0') {
      lVar6 = (longlong)(int)uStack_50;
      if (lVar6 != 0) {
        lVar8 = 0;
        do {
          (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x68) + 0x88))
                    ((longlong *)**(undefined8 **)(param_1 + 0x68),*(undefined4 *)(lVar4 + lVar8));
          lVar8 = lVar8 + 4;
        } while (lVar6 * 4 != lVar8);
      }
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  *(undefined1 *)(param_1 + 0x74) = 0;
  FUN_144a4ece4(param_1);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if ((0 < *(int *)(param_1 + 0x60)) && (DAT_14ca9ee38 != (longlong *)0x0 && DAT_14ca9ee40 != 0)) {
    (**(code **)(*DAT_14ca9ee38 + 0x60))(DAT_14ca9ee38,param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143231d5a FUN_143231d5a body=91 status=ok
// SIG undefined FUN_143231d5a(void)

ulonglong FUN_143231d5a(longlong param_1)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xb18));
    bVar3 = *(int *)(param_1 + 0x60) == 0;
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),bVar3);
    if (bVar3) {
      *(undefined8 *)(*(longlong *)(lVar1 + 0xa08) + (longlong)*(int *)(param_1 + 0x70) * 8) = 0;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xb18));
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 143231db5 FUN_143231db5 body=59 status=ok
// SIG undefined FUN_143231db5(void)

void FUN_143231db5(void)

{
  FUN_144760e21(DAT_14ca9a650,DAT_14ca9a658);
  if (DAT_14ca9a650 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x000143231de2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14ca9a628);
  return;
}



// FUNCTION 143231df0 FUN_143231df0 body=3716 status=ok
// SIG undefined FUN_143231df0(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffed8 : 0x0001432327c2 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_143231df0(longlong *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  uint *puVar18;
  byte bVar19;
  int iVar20;
  undefined *puVar21;
  int iVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  longlong *plVar29;
  longlong lVar30;
  undefined8 *puVar31;
  uint *puVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  bool bVar37;
  undefined1 auStack_218 [40];
  uint local_1f0;
  int local_1ec;
  ulonglong local_1e8;
  longlong local_1e0;
  ulonglong local_1d8;
  uint *local_1d0;
  PSRWLOCK local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  void *local_1b0;
  int local_1a8;
  undefined4 local_1a4;
  void *local_1a0;
  int local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined2 local_188;
  void *local_180;
  undefined8 local_178;
  undefined4 local_170;
  void *local_168;
  int local_160;
  undefined4 local_15c;
  undefined8 *local_158;
  undefined8 uStack_150;
  undefined1 *local_148;
  undefined8 *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined4 local_100;
  int local_fc;
  uint local_f8 [4];
  uint *local_e8;
  int local_e0;
  uint local_dc;
  undefined8 local_d8;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  (**(code **)(*param_1 + 0x10))();
  puVar15 = (undefined8 *)(**(code **)*param_1)(param_1);
  local_1b0 = (void *)0x0;
  local_1a8 = *(int *)(puVar15 + 1);
  lVar30 = (longlong)local_1a8;
  pvVar2 = (void *)*puVar15;
  if (lVar30 == 0) {
    local_1a4 = 0;
  }
  else {
    FUN_1446dd670(&local_1b0,local_1a8,0);
    memcpy(local_1b0,pvVar2,lVar30 * 2);
  }
  puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x20))(param_1);
  local_1a0 = (void *)0x0;
  local_198 = *(int *)(puVar15 + 1);
  lVar30 = (longlong)local_198;
  pvVar2 = (void *)*puVar15;
  if (lVar30 == 0) {
    local_194 = 0;
  }
  else {
    FUN_1446dd670(&local_1a0,local_198,0);
    memcpy(local_1a0,pvVar2,lVar30 * 2);
  }
  local_190 = (**(code **)(*param_1 + 0x10))(param_1);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca9a600);
  iVar14 = DAT_14ca9a5e0;
  iVar22 = DAT_14ca9a5b8;
  if (DAT_14ca9a5e4 == 0) {
    iVar14 = DAT_14ca9a5b8 + 1;
    bVar37 = DAT_14ca9a5bc == DAT_14ca9a5b8;
    DAT_14ca9a5b8 = iVar14;
    if (bVar37) {
      FUN_140044672(&DAT_14ca9a5b0,iVar22);
    }
    iVar14 = DAT_14ca9a5d8;
    if (DAT_14ca9a5d8 == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = DAT_14ca9a5d8 + 0x1e;
      if (-1 < DAT_14ca9a5d8 + -1) {
        iVar12 = DAT_14ca9a5d8 + -1;
      }
      iVar12 = iVar12 >> 5;
    }
    iVar20 = DAT_14ca9a5d8 + 1;
    iVar25 = DAT_14ca9a5d8 + 0x1f;
    if (-1 < DAT_14ca9a5d8) {
      iVar25 = DAT_14ca9a5d8;
    }
    if (iVar25 >> 5 != iVar12) {
      if (DAT_14ca9a5dc <= DAT_14ca9a5d8) {
        if (DAT_14ca9a5d8 + 0x20U < 0xa0) {
          DAT_14ca9a5dc = 0x80;
        }
        else {
          uVar13 = DAT_14ca9a5d8 + 0x20U >> 5;
          if (DAT_14ca9a5dc + 0x1fU < 0xa0) {
            uVar27 = 4;
            if (4 < uVar13) {
              uVar27 = uVar13;
            }
          }
          else {
            uVar27 = uVar13 + (uVar13 * 3 >> 3) + 0x10;
          }
          uVar16 = (ulonglong)(uVar27 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar28 = (uint)(uVar16 + 0xf);
              if (uVar27 < 0x1ffd) {
                uVar16 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar16 + 0xf >> 4]];
              }
              else {
                uVar36 = (ulonglong)(uVar28 & 0xfffffff0);
                if (uVar36 < 0x7ff1) {
                  bVar19 = (&DAT_14c841e00)[uVar28 >> 4];
                  uVar24 = 0x32;
                  if (0x32 < bVar19) {
                    uVar24 = (ulonglong)bVar19;
                  }
                  uVar33 = 0x32 - (ulonglong)bVar19;
                  do {
                    uVar16 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar33 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar33 & 0xffffffff] & 0xf) == 0) goto LAB_143232ad0;
                    lVar30 = uVar24 + 1 + uVar33;
                    uVar33 = uVar33 - 1;
                  } while (lVar30 != 0x33);
                }
                uVar16 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar16 = (ulonglong)DAT_14c841df8;
                }
                uVar16 = -uVar16 & (uVar36 + uVar16) - 1;
              }
            }
            else {
              uVar16 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar16,0);
            }
          }
LAB_143232ad0:
          iVar12 = (int)(uVar16 >> 2);
          DAT_14ca9a5dc = -0x20;
          if ((int)uVar13 <= iVar12) {
            DAT_14ca9a5dc = iVar12 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14ca9a5c0,DAT_14ca9a5d8);
        iVar20 = DAT_14ca9a5d8 + 1;
      }
      iVar12 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar12 = iVar20;
      }
      if (iVar20 % 0x20 != 0) {
        puVar23 = &DAT_14ca9a5c0;
        if (DAT_14ca9a5d0 != (undefined4 *)0x0) {
          puVar23 = DAT_14ca9a5d0;
        }
        bVar19 = -(char)(iVar20 % 0x20);
        DAT_14ca9a5d8 = iVar20;
        puVar23[iVar12 >> 5] = (uint)(puVar23[iVar12 >> 5] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        iVar20 = DAT_14ca9a5d8;
      }
    }
    DAT_14ca9a5d8 = iVar20;
    lVar30 = (longlong)iVar22;
    puVar23 = &DAT_14ca9a5c0;
    if (DAT_14ca9a5d0 != (undefined4 *)0x0) {
      puVar23 = DAT_14ca9a5d0;
    }
    bVar19 = (byte)iVar14 & 0x1f;
    puVar23[iVar25 >> 5] = puVar23[iVar25 >> 5] & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
    iVar14 = iVar22;
  }
  else {
    lVar30 = (longlong)DAT_14ca9a5e0;
    DAT_14ca9a5e0 = *(int *)(DAT_14ca9a5b0 + 4 + lVar30 * 0x30);
    DAT_14ca9a5e4 = DAT_14ca9a5e4 + -1;
    if (DAT_14ca9a5e4 != 0) {
      *(undefined4 *)(DAT_14ca9a5b0 + (longlong)DAT_14ca9a5e0 * 0x30) = 0xffffffff;
    }
  }
  pvVar2 = local_1b0;
  puVar23 = &DAT_14ca9a5c0;
  if (DAT_14ca9a5d0 != (undefined4 *)0x0) {
    puVar23 = DAT_14ca9a5d0;
  }
  iVar22 = iVar14 + 0x1f;
  if (-1 < iVar14) {
    iVar22 = iVar14;
  }
  puVar23[iVar22 >> 5] = puVar23[iVar22 >> 5] | 1 << ((byte)iVar14 & 0x1f);
  lVar34 = DAT_14ca9a5b0;
  lVar30 = lVar30 * 0x30;
  puVar15 = (undefined8 *)(DAT_14ca9a5b0 + lVar30);
  *(undefined8 *)(DAT_14ca9a5b0 + lVar30) = 0;
  lVar26 = (longlong)local_1a8;
  *(int *)(lVar34 + 8 + lVar30) = local_1a8;
  if (lVar26 == 0) {
    *(undefined4 *)((longlong)puVar15 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar15,local_1a8,0);
    memcpy((void *)*puVar15,pvVar2,lVar26 * 2);
  }
  pvVar2 = local_1a0;
  puVar15[2] = 0;
  lVar30 = (longlong)local_198;
  *(int *)(puVar15 + 3) = local_198;
  if (lVar30 == 0) {
    *(undefined4 *)((longlong)puVar15 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar15 + 2,local_198,0);
    memcpy((void *)puVar15[2],pvVar2,lVar30 * 2);
  }
  *(undefined4 *)(puVar15 + 4) = local_190;
  *(undefined4 *)(puVar15 + 5) = 0xffffffff;
  uVar13 = FUN_141539f34(puVar15);
  lVar30 = DAT_14ca9a5b0;
  uVar27 = DAT_14ca9a5b8 - DAT_14ca9a5e4;
  if ((uVar27 != 0) && (uVar27 != 1)) {
    puVar21 = &DAT_14ca9a5e8;
    if (DAT_14ca9a5f0 != (undefined *)0x0) {
      puVar21 = DAT_14ca9a5f0;
    }
    for (iVar22 = *(int *)(puVar21 + (ulonglong)(DAT_14ca9a5f8 - 1U & uVar13) * 4); iVar22 != -1;
        iVar22 = *(int *)(lVar30 + 0x28 + (longlong)iVar22 * 0x30)) {
      plVar29 = (longlong *)(lVar30 + (longlong)iVar22 * 0x30);
      cVar11 = FUN_14743f150(plVar29,puVar15);
      if (cVar11 != '\0') {
        if (plVar29[2] != 0) {
          FUN_1400020a8();
        }
        if (*plVar29 != 0) {
          FUN_1400020a8();
        }
        uVar1 = *(undefined4 *)puVar15;
        uVar4 = *(undefined4 *)((longlong)puVar15 + 4);
        uVar5 = *(undefined4 *)(puVar15 + 1);
        uVar6 = *(undefined4 *)((longlong)puVar15 + 0xc);
        uVar7 = *(undefined4 *)(puVar15 + 2);
        uVar8 = *(undefined4 *)((longlong)puVar15 + 0x14);
        uVar9 = *(undefined4 *)(puVar15 + 3);
        uVar10 = *(undefined4 *)((longlong)puVar15 + 0x1c);
        plVar29[4] = puVar15[4];
        *(undefined4 *)(plVar29 + 2) = uVar7;
        *(undefined4 *)((longlong)plVar29 + 0x14) = uVar8;
        *(undefined4 *)(plVar29 + 3) = uVar9;
        *(undefined4 *)((longlong)plVar29 + 0x1c) = uVar10;
        *(undefined4 *)plVar29 = uVar1;
        *(undefined4 *)((longlong)plVar29 + 4) = uVar4;
        *(undefined4 *)(plVar29 + 1) = uVar5;
        *(undefined4 *)((longlong)plVar29 + 0xc) = uVar6;
        FUN_14743f0c8(iVar14);
        goto LAB_14323212b;
      }
    }
  }
  if (uVar27 < 4) {
    iVar22 = 1;
  }
  else {
    uVar16 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
    lVar30 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar30 == 0; lVar30 = lVar30 + -1) {
      }
    }
    iVar22 = 1 << ((byte)lVar30 & 0x1f);
  }
  if (((int)uVar27 < 1) || (iVar22 <= DAT_14ca9a5f8)) {
    uVar13 = DAT_14ca9a5f8 - 1U & uVar13;
    *(uint *)((longlong)puVar15 + 0x2c) = uVar13;
    puVar21 = DAT_14ca9a5f0;
    if (DAT_14ca9a5f0 == (undefined *)0x0) {
      puVar21 = &DAT_14ca9a5e8;
    }
    *(undefined4 *)(puVar15 + 5) =
         *(undefined4 *)(puVar21 + ((longlong)DAT_14ca9a5f8 - 1U & (longlong)(int)uVar13) * 4);
    puVar21 = DAT_14ca9a5f0;
    if (DAT_14ca9a5f0 == (undefined *)0x0) {
      puVar21 = &DAT_14ca9a5e8;
    }
    *(int *)(puVar21 + ((longlong)DAT_14ca9a5f8 - 1U & (longlong)(int)uVar13) * 4) = iVar14;
  }
  else {
    DAT_14ca9a5f8 = iVar22;
    FUN_141539d76(&DAT_14ca9a5b0);
  }
LAB_14323212b:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca9a600);
  lVar30 = DAT_14ca9a668;
  if (DAT_14ca9a668 != 0) {
    local_1c8 = (PSRWLOCK)(DAT_14ca9a668 + 0x58);
    local_158 = (undefined8 *)0x0;
    uStack_150 = 0;
    AcquireSRWLockExclusive(local_1c8);
    uVar13 = *(uint *)(lVar30 + 0x30);
    if (uVar13 == 0) {
      uVar36 = 1;
      uVar16 = 0;
      iVar22 = 0;
      uVar27 = 0;
    }
    else {
      puVar18 = *(uint **)(lVar30 + 0x28);
      if (*(uint **)(lVar30 + 0x28) == (uint *)0x0) {
        puVar18 = (uint *)(lVar30 + 0x18);
      }
      uVar27 = *puVar18;
      if (uVar27 == 0) {
        iVar22 = uVar13 + 0x1e;
        if (-1 < (int)(uVar13 - 1)) {
          iVar22 = uVar13 - 1;
        }
        uVar16 = 0;
        uVar36 = (ulonglong)(uint)(iVar22 >> 5);
        if (iVar22 >> 5 < 1) {
          uVar36 = uVar16;
        }
        iVar22 = 0;
        do {
          if (uVar36 == uVar16) goto LAB_1432321ed;
          iVar22 = iVar22 + 0x20;
          uVar27 = puVar18[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar27 == 0);
      }
      else {
        uVar16 = 0;
        iVar22 = 0;
      }
      uVar36 = (ulonglong)(-uVar27 & uVar27);
      uVar24 = uVar36 * 2 + 1;
      lVar34 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      uVar27 = (iVar22 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
      if ((int)uVar13 <= (int)uVar27) {
        uVar27 = uVar13;
      }
    }
    if (uVar27 != uVar13) {
      uVar28 = 0xffffffff;
      local_1e0 = lVar30;
      local_1e8 = (ulonglong)uVar13;
      local_1d0 = (uint *)(lVar30 + 0x18);
      do {
        lVar30 = *(longlong *)(lVar30 + 8);
        lVar26 = (longlong)(int)uVar27 * 0x20;
        local_98 = 0;
        local_90 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_8c = 0x80;
        uStack_88 = 0xffffffff;
        local_84 = 0;
        local_78 = 0;
        local_70 = 0;
        local_1d8 = uVar36;
        FUN_145c3f772(&local_b8,*(longlong *)(lVar30 + 0x10 + lVar26) + 0x28);
        lVar34 = *(longlong *)(lVar30 + 0x10 + lVar26);
        local_168 = (void *)0x0;
        local_160 = *(int *)(lVar34 + 0x20);
        lVar35 = (longlong)local_160;
        pvVar2 = *(void **)(lVar34 + 0x18);
        local_1f0 = uVar28;
        local_1ec = iVar22;
        local_1c0 = uVar16;
        if (lVar35 == 0) {
          local_15c = 0;
        }
        else {
          FUN_1446dd670(&local_168,local_160,0);
          memcpy(local_168,pvVar2,lVar35 * 2);
        }
        plVar29 = (longlong *)(lVar30 + lVar26 + 0x10);
        FUN_14150d6e8(*plVar29,&local_1b0,&local_168);
        local_1b8 = plVar29;
        FUN_146286f4e(*plVar29 + 0x28,&local_108,&local_b8);
        iVar22 = local_e0;
        if (local_e0 == 0) {
          uVar16 = 1;
          uVar36 = 0;
          iVar12 = 0;
          iVar14 = 0;
        }
        else {
          puVar18 = local_e8;
          if (local_e8 == (uint *)0x0) {
            puVar18 = local_f8;
          }
          uVar13 = *puVar18;
          if (uVar13 == 0) {
            iVar14 = local_e0 + 0x1e;
            if (-1 < local_e0 + -1) {
              iVar14 = local_e0 + -1;
            }
            uVar36 = 0;
            uVar16 = (ulonglong)(uint)(iVar14 >> 5);
            if (iVar14 >> 5 < 1) {
              uVar16 = uVar36;
            }
            iVar12 = 0;
            do {
              if (uVar16 == uVar36) goto LAB_14323240c;
              iVar12 = iVar12 + 0x20;
              uVar13 = puVar18[uVar36 + 1];
              uVar36 = uVar36 + 1;
            } while (uVar13 == 0);
          }
          else {
            uVar36 = 0;
            iVar12 = 0;
          }
          uVar16 = (ulonglong)(-uVar13 & uVar13);
          uVar24 = uVar16 * 2 + 1;
          lVar30 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar30 == 0; lVar30 = lVar30 + -1) {
            }
          }
          iVar14 = (iVar12 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
          if (local_e0 <= iVar14) {
            iVar14 = local_e0;
          }
        }
        if (iVar14 != local_e0) {
          uVar13 = 0xffffffff;
          do {
            uVar1 = *(undefined4 *)(local_108 + (longlong)iVar14 * 0xc);
            local_188 = *(undefined2 *)(*local_1b8 + 0x10);
            local_180 = (void *)0x0;
            uVar27 = *(uint *)((undefined8 *)*local_1b8 + 1);
            pvVar2 = *(void **)*local_1b8;
            local_178 = CONCAT44(local_178._4_4_,uVar27);
            if ((longlong)(int)uVar27 == 0) {
              local_178 = (ulonglong)uVar27;
            }
            else {
              FUN_1446dd670(&local_180,uVar27,0);
              memcpy(local_180,pvVar2,(longlong)(int)uVar27 * 2);
            }
            local_148 = (undefined1 *)0x0;
            local_138 = (undefined8 *)0x0;
            local_170 = uVar1;
            local_138 = (undefined8 *)FUN_14001cc68(0x28,8);
            uVar24 = uStack_150;
            *local_138 = &PTR_LAB_14a3954a0;
            *(undefined2 *)(local_138 + 1) = local_188;
            local_138[2] = local_180;
            local_180 = (void *)0x0;
            *(undefined4 *)(local_138 + 3) = (undefined4)local_178;
            *(undefined4 *)((longlong)local_138 + 0x1c) = local_178._4_4_;
            local_178 = 0;
            *(undefined4 *)(local_138 + 4) = local_170;
            if (local_138 + 1 != (undefined8 *)0x0) {
              local_148 = &LAB_14743e6e0;
            }
            lVar30 = (longlong)(int)uStack_150;
            uVar27 = (int)uStack_150 + 1;
            uStack_150 = CONCAT44(uStack_150._4_4_,uVar27);
            if (uStack_150._4_4_ < uVar27) {
              FUN_1460608c8(&local_158,uVar24 & 0xffffffff);
            }
            local_158[lVar30 * 8] = local_148;
            local_158[lVar30 * 8 + 2] = local_138;
            local_138 = (undefined8 *)0x0;
            puVar15 = local_158 + lVar30 * 8 + 6;
            *(undefined4 *)puVar15 = local_118;
            *(undefined4 *)((longlong)puVar15 + 4) = uStack_114;
            *(undefined4 *)(puVar15 + 1) = uStack_110;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_10c;
            puVar15 = local_158 + lVar30 * 8 + 4;
            *(undefined4 *)puVar15 = local_128;
            *(undefined4 *)((longlong)puVar15 + 4) = uStack_124;
            *(undefined4 *)(puVar15 + 1) = uStack_120;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_11c;
            if (local_158[lVar30 * 8] == 0) {
              if (local_148 != (undefined1 *)0x0) {
                (**(code **)(CONCAT44(uStack_124,local_128) + 0x10))();
              }
            }
            else {
              local_148 = (undefined1 *)0x0;
            }
            if (local_180 != (void *)0x0) {
              FUN_1400020a8();
            }
            uVar13 = uVar13 & ~(uint)uVar16;
            puVar18 = local_e8;
            if (local_e8 == (uint *)0x0) {
              puVar18 = local_f8;
            }
            iVar14 = (int)uVar36;
            lVar30 = (longlong)iVar14;
            uVar27 = puVar18[lVar30] & uVar13;
            if (uVar27 == 0) {
              iVar20 = local_e0 + 0x1e;
              if (-1 < local_e0 + -1) {
                iVar20 = local_e0 + -1;
              }
              iVar20 = iVar20 >> 5;
              iVar12 = iVar12 + 0x20;
              iVar25 = iVar20;
              if (iVar20 < iVar14) {
                iVar25 = iVar14;
              }
              if (iVar14 < iVar20) {
                lVar34 = 0;
                do {
                  uVar27 = puVar18[lVar30 + lVar34 + 1];
                  if (uVar27 != 0) {
                    uVar36 = (ulonglong)(iVar14 + (int)lVar34 + 1);
                    uVar13 = 0xffffffff;
                    goto LAB_14323285d;
                  }
                  iVar12 = iVar12 + 0x20;
                  lVar34 = lVar34 + 1;
                } while (iVar25 - lVar30 != lVar34);
                uVar13 = 0xffffffff;
                iVar14 = iVar25;
              }
              uVar36 = (ulonglong)(iVar14 + 1);
              iVar14 = local_e0;
            }
            else {
LAB_14323285d:
              uVar16 = (ulonglong)(-uVar27 & uVar27);
              uVar24 = uVar16 * 2 + 1;
              lVar30 = 0x3f;
              if (uVar24 != 0) {
                for (; uVar24 >> lVar30 == 0; lVar30 = lVar30 + -1) {
                }
              }
              iVar14 = (iVar12 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
              if (local_e0 <= iVar14) {
                iVar14 = local_e0;
              }
            }
          } while (iVar14 != iVar22);
        }
LAB_14323240c:
        local_c0 = 0;
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        uVar16 = local_1c0;
        puVar18 = local_1d0;
        uVar36 = local_1d8;
        lVar30 = local_1e0;
        iVar22 = local_1ec;
        uVar28 = local_1f0;
        local_100 = 0;
        if (local_fc != 0) {
          FUN_1447a08a2(&local_108,0);
        }
        local_d8 = 0xffffffff;
        local_e0 = 0;
        if (0x80 < local_dc) {
          local_dc = 0x80;
          FUN_1446efbd8(local_f8,0);
        }
        if (local_e8 != (uint *)0x0) {
          FUN_1400020a8();
        }
        if (local_108 != 0) {
          FUN_1400020a8();
        }
        if (local_168 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_70 = 0;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        uVar24 = uStack_b0 >> 0x20;
        uStack_b0 = uStack_b0 & 0xffffffff00000000;
        if ((int)uVar24 != 0) {
          FUN_1447a08a2(&local_b8,0);
        }
        uStack_88 = 0xffffffff;
        local_84 = 0;
        local_90 = 0;
        if (0x80 < local_8c) {
          local_8c = 0x80;
          FUN_1446efbd8(local_a8,0);
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        uVar28 = uVar28 & ~(uint)uVar36;
        puVar32 = *(uint **)(lVar30 + 0x28);
        if (*(uint **)(lVar30 + 0x28) == (uint *)0x0) {
          puVar32 = puVar18;
        }
        uVar13 = *(uint *)(lVar30 + 0x30);
        iVar14 = (int)uVar16;
        lVar34 = (longlong)iVar14;
        uVar27 = puVar32[lVar34] & uVar28;
        if (uVar27 == 0) {
          iVar12 = uVar13 + 0x1e;
          if (-1 < (int)(uVar13 - 1)) {
            iVar12 = uVar13 - 1;
          }
          iVar12 = iVar12 >> 5;
          iVar22 = iVar22 + 0x20;
          iVar20 = iVar12;
          if (iVar12 < iVar14) {
            iVar20 = iVar14;
          }
          if (iVar14 < iVar12) {
            lVar26 = 0;
            do {
              uVar27 = puVar32[lVar34 + lVar26 + 1];
              if (uVar27 != 0) {
                uVar16 = (ulonglong)(iVar14 + (int)lVar26 + 1);
                uVar28 = 0xffffffff;
                goto LAB_1432325c9;
              }
              iVar22 = iVar22 + 0x20;
              lVar26 = lVar26 + 1;
            } while (iVar20 - lVar34 != lVar26);
            uVar28 = 0xffffffff;
            iVar14 = iVar20;
          }
          uVar16 = (ulonglong)(iVar14 + 1);
          lVar30 = local_1e0;
          uVar36 = local_1d8;
          uVar27 = uVar13;
        }
        else {
LAB_1432325c9:
          uVar36 = (ulonglong)(-uVar27 & uVar27);
          uVar24 = uVar36 * 2 + 1;
          lVar34 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar34 == 0; lVar34 = lVar34 + -1) {
            }
          }
          uVar27 = (iVar22 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
          if ((int)uVar13 <= (int)uVar27) {
            uVar27 = uVar13;
          }
        }
      } while (uVar27 != (uint)local_1e8);
    }
LAB_1432321ed:
    ReleaseSRWLockExclusive(local_1c8);
    if ((longlong)(int)uStack_150 == 0) {
      uVar16 = 0;
    }
    else {
      puVar31 = local_158 + (longlong)(int)uStack_150 * 8;
      puVar15 = local_158;
      do {
        pcVar3 = (code *)*puVar15;
        plVar29 = puVar15 + 4;
        if ((longlong *)puVar15[2] != (longlong *)0x0) {
          plVar29 = (longlong *)puVar15[2];
        }
        uVar17 = (**(code **)(*plVar29 + 8))();
        (*pcVar3)(uVar17);
        puVar15 = puVar15 + 8;
      } while (puVar15 != puVar31);
      uVar16 = uStack_150 & 0xffffffff;
    }
    FUN_144a80dc3(local_158,uVar16);
    if (local_158 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_1a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_1b0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143232c76 FUN_143232c76 body=2302 status=ok
// SIG undefined FUN_143232c76(void)

void FUN_143232c76(undefined2 param_1)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined4 local_110;
  wchar_t **local_108;
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  longlong *local_f0 [2];
  wchar_t ***local_e0;
  longlong *local_d8;
  longlong local_d0 [2];
  longlong local_c0 [2];
  longlong *local_b0 [2];
  longlong *local_a0 [2];
  char local_89;
  wchar_t ***local_88;
  longlong *local_80;
  wchar_t **local_78;
  ulonglong *local_70;
  longlong *local_68;
  wchar_t ****local_60;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (DAT_14ca9a668 == (undefined2 *)0x0) {
    local_89 = '\0';
    local_118 = &DAT_14c872af8;
    FUN_14052bb08(DAT_14c872ce0,L"/Script/UnrealEd.ProjectPackagingSettings",
                  L"bShareMaterialShaderCode");
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar3 = DAT_14c8442b8;
    if (DAT_14c872bf0 == '\x01') {
      if (DAT_14c872bf1 != '\x01') goto LAB_143232d2f;
      bVar3 = DAT_14c8442b8 & 1;
    }
    if ((bVar3 == 0) && (local_89 == '\x01')) {
      puVar7 = (undefined2 *)FUN_14001cc68(0x68,0x10);
      *puVar7 = param_1;
      *(undefined8 *)(puVar7 + 0x14) = 0;
      *(undefined4 *)(puVar7 + 0x18) = 0;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 8) = 0;
      *(undefined8 *)(puVar7 + 0x1a) = 0xffffffff00000080;
      *(undefined4 *)(puVar7 + 0x1e) = 0;
      *(undefined8 *)(puVar7 + 0x24) = 0;
      *(undefined4 *)(puVar7 + 0x28) = 0;
      InitializeSRWLock((PSRWLOCK)(puVar7 + 0x2c));
      puVar7[0x30] = 0;
      if (DAT_14c868740 != 3) {
        FUN_1446efa72(&DAT_14c868738,0,3,0x10);
        DAT_14c868740 = 3;
      }
      puVar4 = DAT_14c868738;
      *DAT_14c868738 = &PTR_LAB_14a3952b0;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      puVar4[2] = lVar10;
      *puVar4 = &PTR_FUN_14a395240;
      puVar4[3] = puVar7;
      puVar4[4] = FUN_140754e3c;
      if (DAT_14c868750 != 3) {
        FUN_1446efa72(&DAT_14c868748,0,3,0x10);
        DAT_14c868750 = 3;
      }
      puVar4 = DAT_14c868748;
      *DAT_14c868748 = &PTR_LAB_14a395390;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      puVar4[2] = lVar10;
      *puVar4 = &PTR_FUN_14a395320;
      puVar4[3] = puVar7;
      puVar4[4] = FUN_14061d1a8;
      DAT_14ca9a668 = puVar7;
      FUN_1410f2562(&local_58);
      FUN_140056680(&local_68,L"Global");
      cVar6 = FUN_14168e766(puVar7,&local_68,&local_58,0);
      if (local_68 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (cVar6 == '\0') {
        FUN_145d32296();
        FUN_142855ca4();
        FUN_1410f2562(local_d0);
        FUN_140aa5ef8(local_c0,local_d0);
        FUN_140233b1a(local_b0,local_c0);
        local_58 = L"MissingGlobalShaderLibraryFiles_Body";
        local_50 = 0x24;
        FUN_1446e940c(local_f4,&local_58);
        local_58 = L"MessageDialog";
        local_50 = 0xd;
        FUN_1446e940c(local_f8,&local_58);
        local_58 = 
        L"Game files required to initialize the global shader library are missing from:\n\n{0}\n\nPlease make sure the game is installed correctly."
        ;
        local_50 = 0x85;
        FUN_140208c1e(local_f0,local_f8,local_f4,&local_58);
        FUN_14023409e(&local_e0,local_f0,1);
        local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
        FUN_14023423e(local_48,local_b0);
        local_70 = &local_38;
        local_78 = &local_58;
        FUN_14010d304(&local_68);
        local_88 = local_e0;
        local_80 = local_d8;
        if (local_d8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_a0,&local_88,&local_68);
        FUN_14007f2db(local_68,(ulonglong)local_60 & 0xffffffff);
        if (local_68 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_48[0] != (longlong *)0x0) {
          (**(code **)(*local_48[0] + 0x10))();
        }
        if (local_d8 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_d8 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*local_d8)(local_d8);
            LOCK();
            piVar1 = (int *)((longlong)local_d8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_d8 + 0x10))(local_d8);
            }
          }
        }
        if (local_b0[0] != (longlong *)0x0) {
          (**(code **)(*local_b0[0] + 0x10))();
        }
        if (local_f0[0] != (longlong *)0x0) {
          (**(code **)(*local_f0[0] + 0x10))();
        }
        if (local_c0[0] != 0) {
          FUN_1400020a8();
        }
        if (local_d0[0] != 0) {
          FUN_1400020a8();
        }
        local_58 = L"MissingGlobalShaderLibraryFiles_Title";
        local_50 = 0x25;
        FUN_1446e940c(&local_78,&local_58);
        local_58 = L"MessageDialog";
        local_50 = 0xd;
        FUN_1446e940c(&local_88,&local_58);
        local_58 = L"Missing game files";
        local_50 = 0x12;
        FUN_140208c1e(&local_68,&local_88,&local_78,&local_58);
        plVar9 = local_68;
        if (*(code **)(*local_68 + 0x50) != FUN_144828418) {
          plVar9 = (longlong *)(**(code **)(*local_68 + 0x50))();
        }
        FUN_1447a1fc0(plVar9);
        pcVar2 = *(code **)(*local_68 + 0x28);
        if (pcVar2 == FUN_14482841c) {
          plVar9 = local_68 + 3;
          if (local_68[5] != 0) {
            plVar9 = (longlong *)(local_68[5] + 8);
          }
        }
        else if (pcVar2 == (code *)&LAB_14010c34c) {
          plVar9 = local_68 + 2;
        }
        else {
          plVar9 = (longlong *)(*pcVar2)(local_68);
        }
        if ((int)plVar9[1] == 0) {
          puVar7 = &DAT_149dfb77a;
        }
        else {
          puVar7 = (undefined2 *)*plVar9;
        }
        plVar9 = local_a0[0];
        if (*(code **)(*local_a0[0] + 0x50) != FUN_144828418) {
          plVar9 = (longlong *)(**(code **)(*local_a0[0] + 0x50))(local_a0[0]);
        }
        FUN_1447a1fc0(plVar9);
        pcVar2 = *(code **)(*local_a0[0] + 0x28);
        if (pcVar2 == FUN_14482841c) {
          plVar9 = (longlong *)(local_a0[0][5] + 8);
          if (local_a0[0][5] == 0) {
            plVar9 = local_a0[0] + 3;
          }
        }
        else if (pcVar2 == (code *)&LAB_14010c34c) {
          plVar9 = local_a0[0] + 2;
        }
        else {
          plVar9 = (longlong *)(*pcVar2)(local_a0[0]);
        }
        if ((int)plVar9[1] == 0) {
          puVar11 = &DAT_149dfb77a;
        }
        else {
          puVar11 = (undefined2 *)*plVar9;
        }
        FUN_14682f732(0,puVar11,puVar7);
        if (local_68 != (longlong *)0x0) {
          (**(code **)(*local_68 + 0x10))();
        }
        if (local_a0[0] != (longlong *)0x0) {
          (**(code **)(*local_a0[0] + 0x10))(local_a0[0]);
        }
        FUN_142797bc0(1,(DAT_14c868880 != '\0') * '\x03');
      }
      else {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c926f30) &&
           (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
          FUN_1413288e0(&DAT_14c926ca8);
          atexit(FUN_1427ac032);
          _Init_thread_footer(&DAT_14c926f30);
        }
        uVar8 = (**(code **)(DAT_14c926ca8 + 0x118))(&DAT_14c926ca8);
        FUN_145a18826(uVar8,&local_58,FUN_143233575);
        DAT_14ca9a538 = local_58;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c926f30) &&
           (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
          FUN_1413288e0(&DAT_14c926ca8);
          atexit(FUN_1427ac032);
          _Init_thread_footer(&DAT_14c926f30);
        }
        uVar8 = (**(code **)(DAT_14c926ca8 + 0x130))(&DAT_14c926ca8);
        FUN_145a18826(uVar8,&local_58,FUN_143233655);
        DAT_14ca9a540 = local_58;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c926f30) &&
           (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
          FUN_1413288e0(&DAT_14c926ca8);
          atexit(FUN_1427ac032);
          _Init_thread_footer(&DAT_14c926f30);
        }
        (**(code **)(DAT_14c926ca8 + 200))(&DAT_14c926ca8,&local_78);
        local_60 = &local_88;
        local_58 = (wchar_t *)0x0;
        local_50 = 0;
        local_68 = (longlong *)&LAB_143235a2e;
        local_110 = 0;
        local_108 = &local_58;
        local_88 = &local_78;
        FUN_1401f8d10(L"ParallelFor Task",(ulonglong)local_70 & 0xffffffff,1);
        FUN_140a4981e(local_78,(ulonglong)local_70 & 0xffffffff);
        if (local_78 != (wchar_t **)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_143232d2f:
  if ((local_38 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143233575 FUN_143233575 body=224 status=ok
// SIG undefined FUN_143233575(void)

void FUN_143233575(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar1 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') {
      return;
    }
    bVar1 = DAT_14c8442b8 & 1;
  }
  if (bVar1 == 0) {
    uVar3 = (**(code **)(*param_1 + 8))(param_1);
    iVar2 = FUN_1411a58b4(&DAT_14ca9a548,uVar3);
    if (iVar2 == 0) {
      FUN_1432337f6(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 143233655 FUN_143233655 body=416 status=ok
// SIG undefined FUN_143233655(void)

ulonglong FUN_143233655(longlong *param_1)

{
  int iVar1;
  void *_Src;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  
  uVar4 = (**(code **)(*param_1 + 0x60))();
  if (((char)uVar4 != '\0') &&
     (uVar4 = (**(code **)(*param_1 + 0x48))(param_1), (char)uVar4 != '\0')) {
    puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1);
    *puVar5 = &PTR_FUN_14a395458;
    puVar5[1] = 0;
    iVar1 = *(int *)(puVar6 + 1);
    _Src = (void *)*puVar6;
    *(int *)(puVar5 + 2) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(puVar5 + 1,iVar1,0);
      memcpy((void *)puVar5[1],_Src,(longlong)iVar1 * 2);
    }
    uVar2 = FUN_14493c560();
    if (uVar2 == 0) {
      uVar3 = 0;
      uVar9 = 0;
      lVar8 = 0;
    }
    else {
      uVar9 = (ulonglong)(uVar2 >> 0xe);
      uVar3 = uVar2 & 0x3fff;
      lVar8 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar9 * 8);
    }
    *(undefined8 **)(lVar8 + 8) = puVar5;
    do {
      uVar4 = DAT_14ca96680;
      uVar7 = (DAT_14ca96680 & 0xfffffffffc000000) + 0x4000000;
      if (uVar7 >> 0x1a < DAT_14ca96680 >> 0x1a) {
        FUN_14274643a();
      }
      if (uVar2 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(longlong *)(&DAT_14c833b00 + uVar9 * 8) + (ulonglong)(uVar3 * 0x18);
      }
      *(uint *)(lVar8 + 0x10) = (uint)uVar4 & 0x3ffffff;
      LOCK();
      bVar10 = uVar4 != DAT_14ca96680;
      uVar7 = uVar7 | uVar2;
      if (bVar10) {
        uVar4 = DAT_14ca96680;
        uVar7 = DAT_14ca96680;
      }
      DAT_14ca96680 = uVar7;
      UNLOCK();
    } while (bVar10);
  }
  return uVar4;
}



// FUNCTION 1432337f6 FUN_1432337f6 body=325 status=ok
// SIG undefined FUN_1432337f6(void)

void FUN_1432337f6(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = (**(code **)(*param_1 + 0x60))();
  if ((cVar2 != '\0') && (cVar2 = (**(code **)(*param_1 + 0x48))(param_1), cVar2 != '\0')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar1 = DAT_14c8442b8;
    if (DAT_14c872bf0 == '\x01') {
      if (DAT_14c872bf1 != '\x01') goto LAB_1432338b9;
      bVar1 = DAT_14c8442b8 & 1;
    }
    if (bVar1 == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,local_20);
      uVar3 = (**(code **)(*param_1 + 8))(param_1);
      if (DAT_14ca9a668 != 0) {
        FUN_14168e766(DAT_14ca9a668,uVar3,local_20,1);
      }
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1432338b9:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14323393c FUN_14323393c body=240 status=ok
// SIG undefined FUN_14323393c(void)

undefined8 FUN_14323393c(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ushort uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  uVar1 = *(uint *)(*param_1 + 0x20);
  uVar2 = (ulonglong)uVar1;
  if (uVar1 == (uint)param_3[1]) {
    if (1 < (int)uVar1) {
      uVar2 = *param_3;
      lVar7 = 0;
      while( true ) {
        uVar9 = *(ushort *)(*(longlong *)(*param_1 + 0x18) + lVar7);
        uVar10 = (ulonglong)uVar9;
        uVar5 = *(ushort *)(uVar2 + lVar7);
        if (uVar9 != uVar5) break;
        if (uVar9 == 0) goto LAB_1432339b0;
LAB_143233987:
        lVar7 = lVar7 + 2;
      }
      if ((uVar5 | uVar9) < 0x80) {
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        uVar6 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar6]) goto LAB_143233987;
      }
      if (uVar9 != uVar5) {
        return 0;
      }
    }
  }
  else if ((uint)param_3[1] + uVar1 != 1) {
    return 0;
  }
LAB_1432339b0:
  iVar4 = (int)param_1[0x165];
  uVar3 = CONCAT71((int7)(uVar2 >> 8),1);
  if (1 < iVar4) {
    if (iVar4 == (int)param_2[1]) {
      uVar2 = *param_2;
      lVar7 = 0;
      while( true ) {
        uVar9 = *(ushort *)(param_1[0x164] + lVar7);
        uVar1 = (uint)uVar9;
        uVar5 = *(ushort *)(uVar2 + lVar7);
        uVar8 = (uint)uVar5;
        if (uVar9 != uVar5) {
          if ((uVar5 | uVar9) < 0x80) {
            uVar1 = (uint)(byte)(&DAT_149e05da0)[uVar9];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar5];
            if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar5]) goto LAB_1432339ef;
          }
          iVar4 = uVar1 - uVar8;
          goto LAB_143233a22;
        }
        if (uVar9 == 0) break;
LAB_1432339ef:
        lVar7 = lVar7 + 2;
      }
      iVar4 = 0;
LAB_143233a22:
      bVar11 = iVar4 == 0;
    }
    else {
      uVar1 = (int)param_2[1] + iVar4;
      uVar2 = (ulonglong)uVar1;
      bVar11 = uVar1 == 1;
    }
    uVar3 = CONCAT71((int7)(uVar2 >> 8),bVar11);
  }
  return uVar3;
}



// FUNCTION 143233a2c FUN_143233a2c body=69 status=ok
// SIG undefined FUN_143233a2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143233a2c(void)

{
  _DAT_14ca9a670 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143233a6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9a678,1);
  return;
}



// FUNCTION 143233a71 FUN_143233a71 body=69 status=ok
// SIG undefined FUN_143233a71(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143233a71(void)

{
  _DAT_14ca9a728 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143233ab3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9a730,1);
  return;
}



// FUNCTION 143233ab6 FUN_143233ab6 body=69 status=ok
// SIG undefined FUN_143233ab6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143233ab6(void)

{
  _DAT_14ca9a740 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143233af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9a748,1);
  return;
}



// FUNCTION 143233afb FUN_143233afb body=72 status=ok
// SIG undefined FUN_143233afb(void)

void FUN_143233afb(void)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
                    /* WARNING: Could not recover jumptable at 0x000143233b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    GetCurrentThreadId();
    return;
  }
  return;
}



// FUNCTION 143233b43 FUN_143233b43 body=108 status=ok
// SIG undefined FUN_143233b43(void)

void FUN_143233b43(void)

{
  longlong lVar1;
  
  lVar1 = 0xa58;
  do {
    *(undefined4 *)((longlong)&DAT_14ca9a7a8 + lVar1) = 0;
    if (*(longlong *)(lVar1 + 0x14ca9a7a0) != 0) {
      FUN_1400020a8();
    }
    FUN_1432357a6(&DAT_14ca9a760 + lVar1,0);
    if (*(longlong *)(lVar1 + 0x14ca9a780) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(&DAT_14ca9a760 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x58;
  } while (lVar1 != -0x50);
  return;
}



// FUNCTION 143233bc0 FUN_143233bc0 body=608 status=ok
// SIG undefined FUN_143233bc0(void)

void FUN_143233bc0(void)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint local_44;
  
  plVar9 = (longlong *)&DAT_14ca9ec40;
  do {
    *(undefined4 *)(plVar9 + -1) = 0;
    if (plVar9[-2] != 0) {
      FUN_1400020a8();
    }
    plVar1 = plVar9 + -10;
    puVar2 = (uint *)(plVar9 + -8);
    iVar3 = (int)plVar9[-5];
    if (iVar3 == 0) {
      uVar14 = 0;
      uVar15 = 1;
      iVar10 = 0;
      iVar5 = 0;
    }
    else {
      puVar6 = (uint *)plVar9[-6];
      if ((uint *)plVar9[-6] == (uint *)0x0) {
        puVar6 = puVar2;
      }
      uVar4 = *puVar6;
      if (uVar4 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        uVar14 = 0;
        uVar7 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar7 = uVar14;
        }
        iVar10 = 0;
        do {
          if (uVar7 == uVar14) goto LAB_143233c1c;
          iVar10 = iVar10 + 0x20;
          uVar4 = puVar6[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar14 = 0;
        iVar10 = 0;
      }
      uVar15 = (ulonglong)(-uVar4 & uVar4);
      uVar7 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar5) {
        iVar5 = iVar3;
      }
    }
    if (iVar5 < iVar3) {
      local_44 = 0xffffffff;
      do {
        if (*(longlong *)(*plVar1 + (longlong)iVar5 * 0x30) != 0) {
          FUN_1400020a8();
          iVar3 = (int)plVar9[-5];
        }
        local_44 = local_44 & ~(uint)uVar15;
        puVar6 = (uint *)plVar9[-6];
        if ((uint *)plVar9[-6] == (uint *)0x0) {
          puVar6 = puVar2;
        }
        iVar5 = (int)uVar14;
        lVar13 = (longlong)iVar5;
        uVar4 = puVar6[lVar13] & local_44;
        if (uVar4 == 0) {
          iVar11 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar11 = iVar3 + -1;
          }
          iVar12 = iVar11 >> 5;
          if (iVar11 >> 5 < iVar5) {
            iVar12 = iVar5;
          }
          lVar8 = 0;
          do {
            if (iVar12 - lVar13 == lVar8) goto LAB_143233c1c;
            iVar10 = iVar10 + 0x20;
            uVar4 = puVar6[lVar13 + lVar8 + 1];
            lVar8 = lVar8 + 1;
          } while (uVar4 == 0);
          uVar14 = (ulonglong)(uint)(iVar5 + (int)lVar8);
          local_44 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar4 & uVar4);
        uVar7 = uVar15 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar3);
    }
LAB_143233c1c:
    *(undefined4 *)(plVar9 + -9) = 0;
    if (*(int *)((longlong)plVar9 + -0x44) != 0) {
      FUN_14494313c(plVar1,0);
    }
    plVar9[-4] = 0xffffffff;
    *(undefined4 *)(plVar9 + -5) = 0;
    if (0x80 < *(uint *)((longlong)plVar9 + -0x24)) {
      *(undefined4 *)((longlong)plVar9 + -0x24) = 0x80;
      FUN_1446efbd8(puVar2);
    }
    if (plVar9[-6] != 0) {
      FUN_1400020a8();
    }
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    plVar9 = plVar9 + -0xc;
    if (*plVar9 != 0) {
      FUN_1400020a8();
    }
    if (plVar9 == (longlong *)&DAT_14ca9b220) {
      return;
    }
  } while( true );
}



// FUNCTION 143233e20 FUN_143233e20 body=47 status=ok
// SIG undefined FUN_143233e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143233e20(void)

{
  _DAT_14ca9ec90 = 0;
  if (DAT_14ca9ec88 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&DAT_14ca9ec48);
  return;
}



// FUNCTION 143233e4f FUN_143233e4f body=49 status=ok
// SIG undefined FUN_143233e4f(void)

void FUN_143233e4f(void)

{
  FUN_1447a1747(DAT_14ca9ec98,DAT_14ca9eca0);
  if (DAT_14ca9ec98 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143233e80 FUN_143233e80 body=69 status=ok
// SIG undefined FUN_143233e80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143233e80(void)

{
  _DAT_14ca9eca8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143233ec2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9ecb0,1);
  return;
}



// FUNCTION 143233ec5 FUN_143233ec5 body=1458 status=ok
// SIG undefined FUN_143233ec5(void)

/* WARNING: Removing unreachable block (ram,0x000143233f97) */

void FUN_143233ec5(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4,
                  int param_5,char param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  longlong lVar8;
  ushort uVar9;
  undefined2 *puVar10;
  int iVar11;
  short *psVar12;
  uint uVar13;
  ushort uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_108 [32];
  int local_e8;
  undefined1 local_e0;
  int local_cc;
  longlong *local_c8;
  undefined8 local_c0;
  short *local_b8;
  int local_b0;
  longlong local_a8 [2];
  short *local_98;
  undefined8 local_90;
  short *local_88;
  undefined8 uStack_80;
  short *local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar6 = *(int *)(param_2 + 1);
  if (iVar6 - 2U < 0x7fffffff) {
    if (param_6 != '\0') {
      FUN_140056680(&local_70,param_1);
      iVar6 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
        FUN_1447a1bd6(param_3,iVar6);
      }
      lVar8 = *param_3;
      lVar17 = (longlong)iVar6 * 0x10;
      *(undefined8 *)(lVar8 + lVar17) = 0;
      *(short **)(lVar8 + lVar17) = local_70;
      *(int *)(lVar8 + 8 + lVar17) = (int)uStack_68;
      *(undefined4 *)(lVar8 + 0xc + lVar17) = uStack_68._4_4_;
      uStack_68 = 0;
      local_70 = (short *)0x0;
      iVar6 = *(int *)(param_2 + 1);
    }
    if (iVar6 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = (undefined2 *)*param_2;
    }
    psVar7 = (short *)FUN_14323593a(puVar10);
    if ((param_5 != 0) && (psVar7 != (short *)0x0)) {
      param_5 = param_5 + -1;
      uVar13 = 0;
      do {
        lVar8 = 0;
        lVar17 = 0;
        while ((uVar9 = *(ushort *)((longlong)psVar7 + lVar8), 0x22 < uVar9 ||
               ((0x400000401U >> ((ulonglong)uVar9 & 0x3f) & 1) == 0))) {
          lVar17 = lVar17 + -2;
          lVar8 = lVar8 + 2;
        }
        lVar17 = (longlong)psVar7 - lVar17;
        if ((lVar17 != 0) && (uVar9 == 0x22)) {
          uVar15 = 2;
          while ((uVar9 = *(ushort *)((longlong)psVar7 + uVar15 + lVar8), 0x22 < uVar9 ||
                 ((0x400000401U >> ((ulonglong)uVar9 & 0x3f) & 1) == 0))) {
            uVar15 = uVar15 + 2;
          }
          if ((lVar17 + uVar15 != 0) && (uVar9 == 0x22)) {
            FUN_14006620a(&local_70,lVar17 + 2,(int)(uVar15 >> 1) + -1);
            psVar12 = local_70;
            if ((int)uStack_68 == 0) {
              psVar12 = &DAT_149dfb77a;
            }
            local_c0 = param_1;
            if (*psVar12 != 0x2f) {
              FUN_140056680(local_a8,param_1);
              FUN_140beea4a(&local_98,local_a8);
              iVar6 = (int)uStack_68 + -1;
              if ((int)uStack_68 == 0) {
                iVar6 = 0;
              }
              iVar2 = (int)local_90;
              iVar5 = iVar6 + 1 + (uint)((int)local_90 == 0);
              local_88 = local_98;
              local_98 = (short *)0x0;
              iVar3 = local_90._4_4_;
              uStack_80 = local_90;
              local_90 = 0;
              iVar11 = iVar5 + iVar2;
              if (iVar11 < iVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4((longlong)iVar5);
              }
              if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar11);
              }
              if (iVar3 < iVar11) {
                FUN_1446f8c06(&local_88);
              }
              FUN_1401aebe8(&local_88,local_70,iVar6);
              if (local_70 != (short *)0x0) {
                FUN_1400020a8();
              }
              local_70 = local_88;
              uStack_68 = uStack_80;
              local_88 = (short *)0x0;
              uStack_80 = 0;
              if (local_98 != (short *)0x0) {
                FUN_1400020a8();
              }
              if (local_a8[0] != 0) {
                FUN_1400020a8();
              }
              FUN_1448b5552(&local_70);
            }
            psVar12 = local_70;
            if ((int)uStack_68 == 0) {
              psVar12 = &DAT_149dfb77a;
            }
            lVar8 = 0;
            while( true ) {
              uVar9 = *(ushort *)((longlong)psVar12 + lVar8);
              uVar15 = (ulonglong)uVar9;
              uVar14 = *(ushort *)((longlong)L"/Engine/Generated/Material.ush" + lVar8);
              if (uVar9 != uVar14) break;
              if (uVar9 == 0) goto LAB_1432340f4;
LAB_1432340c2:
              lVar8 = lVar8 + 2;
            }
            if ((uVar14 | uVar9) < 0x80) {
              uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
              uVar16 = (ulonglong)uVar14;
              uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
              if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar16]) goto LAB_1432340c2;
            }
            if (uVar9 != uVar14) goto LAB_14323410a;
LAB_1432340f4:
            FUN_14020fad6(&local_70,L"/Engine/Private/MaterialTemplate.ush");
LAB_14323410a:
            FUN_14743cbc3(&local_70,param_4);
            FUN_14743ce48(&local_70,param_4);
            psVar12 = local_70;
            if ((int)uStack_68 == 0) {
              psVar12 = &DAT_149dfb77a;
            }
            lVar8 = 0x12;
            lVar17 = 0;
LAB_143234142:
            uVar9 = *(ushort *)((longlong)psVar12 + lVar17);
            uVar14 = *(ushort *)((longlong)L"/Engine/Generated/" + lVar17);
            if (uVar9 == uVar14) {
              iVar6 = 0;
              if ((uVar9 == 0) || (iVar6 = 0, lVar8 == 1)) goto LAB_1432342d2;
LAB_14323416e:
              lVar8 = lVar8 + -1;
              lVar17 = lVar17 + 2;
              goto LAB_143234142;
            }
            if ((uVar14 | uVar9) < 0x80) {
              if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[(uint)uVar14]) {
                iVar6 = (uint)(byte)(&DAT_149e05da0)[uVar9] -
                        (uint)(byte)(&DAT_149e05da0)[(uint)uVar14];
                goto LAB_1432342d2;
              }
              if (lVar8 == 1) {
                iVar6 = 0;
                goto LAB_1432342d2;
              }
              goto LAB_14323416e;
            }
            iVar6 = (uint)uVar9 - (uint)uVar14;
LAB_1432342d2:
            local_b8 = local_70;
            local_b0 = (int)uStack_68 + -1;
            if ((int)uStack_68 == 0) {
              local_b0 = 0;
            }
            local_cc = param_5;
            local_c8 = param_3;
            cVar4 = FUN_14743c5ac(&local_b8);
            AcquireSRWLockShared((PSRWLOCK)&DAT_14ca9b218);
            if (cVar4 == '\x01' && iVar6 != 0) {
              cVar4 = FUN_14743d15a(&local_70);
              ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca9b218);
              FUN_14743eb30(&local_70);
              param_1 = local_c0;
              param_3 = local_c8;
              param_5 = local_cc;
              if ((cVar4 == '\0') && (iVar6 = FUN_144a075de(local_c8), iVar6 == -1)) {
                local_88 = (short *)0x0;
                uStack_80 = 0;
                psVar12 = &DAT_149dfb77a;
                if ((int)uStack_68 != 0) {
                  psVar12 = local_70;
                }
                local_e8 = param_5;
                local_e0 = 1;
                FUN_143233ec5(psVar12,&local_88,param_3,param_4);
              }
            }
            else {
              ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca9b218);
              FUN_14743eb30(&local_70);
              param_3 = local_c8;
              param_1 = local_c0;
              param_5 = local_cc;
            }
            if (local_70 != (short *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        for (; (sVar1 = *psVar7, sVar1 != 0 && (sVar1 != 10)); psVar7 = psVar7 + 1) {
        }
      } while ((((psVar7 != (short *)0x0) && (sVar1 == 10)) &&
               (psVar7 = (short *)FUN_14323593a(psVar7 + 1), psVar7 != (short *)0x0)) &&
              (bVar18 = uVar13 < 199, uVar13 = uVar13 + 1, bVar18));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143234487 FUN_143234487 body=561 status=ok
// SIG undefined FUN_143234487(void)

longlong FUN_143234487(undefined2 *param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60;
  undefined8 *local_58;
  ulonglong uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14ca9b218);
  FUN_140056680(&local_48,param_1);
  lVar1 = FUN_14743d0e4(param_2,&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (param_3 != (longlong *)0x0 && lVar1 != 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) < 0) {
      FUN_1446f8c06(param_3,0);
    }
    if ((undefined2 *)*param_3 != (undefined2 *)0x0) {
      *(undefined2 *)*param_3 = 0;
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca9b218);
    goto LAB_143234536;
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca9b218);
  if (lVar1 != 0) goto LAB_143234536;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca9ecd0);
  FUN_140056680(&local_48,param_1);
  lVar1 = FUN_14743d0e4(param_2,&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (lVar1 == 0) {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_60 = 0;
    local_68 = 100;
    FUN_143233ec5(param_1,&local_48,&local_58,param_2);
    if ((int)uStack_50 < 1) {
      if (param_3 != (longlong *)0x0) goto LAB_143234643;
    }
    else if (param_3 != (longlong *)0x0) {
      if (*(int *)(local_58 + 1) == 0) {
        param_1 = &DAT_149dfb77a;
      }
      else {
        param_1 = (undefined2 *)*local_58;
      }
LAB_143234643:
      FUN_140002266(&local_48,L"Couldn\'t find source file of virtual shader path \'%s\'",param_1);
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
        *(undefined4 *)(param_3 + 1) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_40._4_4_;
      }
    }
    FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (param_3 != (longlong *)0x0) {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) < 0) {
      FUN_1446f8c06(param_3,0);
    }
    if ((undefined2 *)*param_3 != (undefined2 *)0x0) {
      *(undefined2 *)*param_3 = 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca9ecd0);
LAB_143234536:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 1432346b9 FUN_1432346b9 body=107 status=ok
// SIG undefined FUN_1432346b9(void)

void FUN_1432346b9(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  FUN_14631fe44();
  local_20 = 0;
  FUN_14619c52a(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143234725 FUN_143234725 body=162 status=ok
// SIG undefined FUN_143234725(void)

void FUN_143234725(void)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14ca9b218);
  lVar1 = 0;
  do {
    if (*(int *)((longlong)&DAT_14ca9b238 + lVar1) != *(int *)((longlong)&DAT_14ca9b264 + lVar1)) {
      FUN_14743ec6c(&DAT_14ca9b230 + lVar1);
      FUN_14743edb4(&DAT_14ca9b230 + lVar1);
    }
    lVar1 = lVar1 + 0x60;
  } while (lVar1 != 0x3a20);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14ca9b218);
  lVar1 = 0x1f;
  SRWLock = (PSRWLOCK)&DAT_14ca9a760;
  do {
    AcquireSRWLockExclusive(SRWLock);
    FUN_14743f67e(SRWLock + 1,0);
    ReleaseSRWLockExclusive(SRWLock);
    SRWLock = SRWLock + 0xb;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1432347c7 FUN_1432347c7 body=69 status=ok
// SIG undefined FUN_1432347c7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432347c7(void)

{
  _DAT_14ca9ed18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143234809. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9ed20,1);
  return;
}



// FUNCTION 14323480c FUN_14323480c body=69 status=ok
// SIG undefined FUN_14323480c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14323480c(void)

{
  _DAT_14ca9ed30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014323484e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9ed38,1);
  return;
}



// FUNCTION 143234851 FUN_143234851 body=69 status=ok
// SIG undefined FUN_143234851(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143234851(void)

{
  _DAT_14ca9ed48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143234893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9ed50,1);
  return;
}



// FUNCTION 1432348a7 FUN_1432348a7 body=41 status=ok
// SIG undefined FUN_1432348a7(void)

void FUN_1432348a7(void)

{
  DAT_14ca9edc0 = 0;
  if (DAT_14ca9edb8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d62a72();
  return;
}



// FUNCTION 1432348d0 FUN_1432348d0 body=41 status=ok
// SIG undefined FUN_1432348d0(void)

void FUN_1432348d0(void)

{
  DAT_14ca9ee20 = 0;
  if (DAT_14ca9ee18 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6b910();
  return;
}



// FUNCTION 1432348fa FUN_1432348fa body=896 status=ok
// SIG undefined FUN_1432348fa(void)

void FUN_1432348fa(ulonglong *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  ulonglong *puVar4;
  ushort *puVar5;
  ulonglong uVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  ulonglong uVar10;
  ushort *puVar11;
  ushort *puVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  ushort uVar18;
  uint uVar19;
  int iVar20;
  ushort *puVar21;
  ushort *puVar22;
  ushort *puVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_368 [32];
  ulonglong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  iVar14 = (int)param_1[1];
  if (1 < (longlong)iVar14) {
    uVar10 = *param_1;
    uVar6 = ((longlong)uVar10 >> 0x18) + (longlong)param_1;
    if ((uVar10 & 1) == 0) {
      uVar6 = uVar10;
    }
    memset(local_338,0,0x2f0);
    local_340 = uVar6 + (longlong)iVar14 * 4 + -4;
    local_348 = uVar6;
    fVar25 = logf((float)iVar14);
    local_338[0] = (int)(longlong)(fVar25 + fVar25);
    puVar4 = &local_348;
    do {
      puVar7 = (ushort *)*puVar4;
      puVar8 = (ushort *)puVar4[1];
      iVar14 = (int)puVar4[2];
      iVar20 = (int)((ulonglong)((longlong)puVar8 - (longlong)puVar7) >> 2);
      uVar19 = iVar20 + 1;
      puVar9 = puVar7;
      puVar11 = puVar8;
      if (iVar14 != 0) {
LAB_1432349a8:
        if (8 < (int)uVar19) {
          uVar2 = *(undefined4 *)(puVar9 + (ulonglong)(uVar19 >> 1) * 2);
          *(undefined4 *)(puVar9 + (ulonglong)(uVar19 >> 1) * 2) = *(undefined4 *)puVar9;
          *(undefined4 *)puVar9 = uVar2;
          puVar21 = puVar11 + 2;
          puVar5 = puVar9;
          do {
            puVar3 = puVar5 + 2;
            puVar12 = puVar5 + 2;
            do {
              puVar5 = puVar12;
              puVar23 = puVar3;
              if (puVar11 < puVar5) break;
              puVar3 = puVar23 + 2;
              puVar12 = puVar5 + 2;
            } while (*puVar5 <= *puVar9);
            puVar3 = puVar21 + -4;
            do {
              puVar12 = puVar21;
              puVar22 = puVar3;
              puVar21 = puVar12 + -2;
              if (puVar21 <= puVar9) break;
              puVar3 = puVar22 + -2;
            } while (*puVar9 <= *puVar21);
            if (puVar21 < puVar5) goto LAB_143234a29;
            uVar2 = *(undefined4 *)puVar5;
            *(undefined4 *)puVar5 = *(undefined4 *)puVar21;
            *(undefined4 *)puVar21 = uVar2;
          } while( true );
        }
        if (puVar9 < puVar11) {
          do {
            puVar7 = puVar9;
            if (puVar9 + 2 <= puVar11) {
              uVar18 = *puVar9;
              puVar8 = puVar9 + 2;
              do {
                uVar1 = *puVar8;
                bVar24 = uVar18 < uVar1;
                if (uVar18 <= uVar1) {
                  uVar18 = uVar1;
                }
                if (bVar24) {
                  puVar7 = puVar8;
                }
                puVar8 = puVar8 + 2;
              } while (puVar8 <= puVar11);
            }
            uVar2 = *(undefined4 *)puVar7;
            *(undefined4 *)puVar7 = *(undefined4 *)puVar11;
            *(undefined4 *)puVar11 = uVar2;
            puVar11 = puVar11 + -2;
          } while (puVar9 < puVar11);
        }
        goto LAB_143234c42;
      }
LAB_143234abc:
      if (uVar19 != 0) {
        iVar14 = (iVar20 - (iVar20 + -1 >> 0x1f)) + -1 >> 1;
        iVar20 = iVar14;
joined_r0x000143234ae3:
        do {
          iVar16 = iVar14 * 2 + 1;
          if (iVar16 < (int)uVar19) {
            iVar15 = iVar14 * 2 + 2;
            if ((iVar15 < (int)uVar19) &&
               (puVar9[(longlong)iVar16 * 2] <= puVar9[(longlong)iVar15 * 2])) {
              iVar16 = iVar15;
            }
            lVar17 = (longlong)iVar14;
            lVar13 = (longlong)iVar16;
            if (puVar9[lVar17 * 2] < puVar9[lVar13 * 2]) {
              uVar2 = *(undefined4 *)(puVar9 + lVar17 * 2);
              *(undefined4 *)(puVar9 + lVar17 * 2) = *(undefined4 *)(puVar9 + lVar13 * 2);
              *(undefined4 *)(puVar9 + lVar13 * 2) = uVar2;
              iVar14 = iVar16;
              goto joined_r0x000143234ae3;
            }
          }
          bVar24 = iVar20 != 0;
          iVar14 = iVar20 + -1;
          iVar20 = iVar14;
        } while (bVar24);
        if (1 < (int)uVar19) {
          uVar10 = (ulonglong)uVar19;
          uVar2 = *(undefined4 *)puVar9;
          *(undefined4 *)puVar9 = *(undefined4 *)(puVar9 + uVar10 * 2 + -2);
          *(undefined4 *)(puVar9 + uVar10 * 2 + -2) = uVar2;
          if (uVar19 != 2) {
            do {
              uVar10 = uVar10 - 1;
              iVar14 = 0;
              iVar16 = 1;
              iVar20 = 0;
              do {
                iVar14 = iVar14 + 2;
                iVar15 = iVar16;
                if (((longlong)iVar14 < (longlong)uVar10) &&
                   (puVar9[(longlong)iVar16 * 2] <= puVar9[(longlong)iVar14 * 2])) {
                  iVar15 = iVar14;
                }
                lVar13 = (longlong)iVar20;
                lVar17 = (longlong)iVar15;
                if (puVar9[lVar17 * 2] <= puVar9[lVar13 * 2]) break;
                uVar2 = *(undefined4 *)(puVar9 + lVar13 * 2);
                *(undefined4 *)(puVar9 + lVar13 * 2) = *(undefined4 *)(puVar9 + lVar17 * 2);
                *(undefined4 *)(puVar9 + lVar17 * 2) = uVar2;
                iVar14 = iVar15 * 2;
                iVar16 = iVar15 * 2 + 1;
                iVar20 = iVar15;
              } while ((longlong)iVar16 < (longlong)uVar10);
              uVar2 = *(undefined4 *)puVar9;
              *(undefined4 *)puVar9 = *(undefined4 *)(puVar9 + uVar10 * 2 + -2);
              *(undefined4 *)(puVar9 + uVar10 * 2 + -2) = uVar2;
            } while (2 < uVar10);
          }
        }
      }
LAB_143234c42:
      puVar4 = puVar4 + -3;
    } while (&local_348 <= puVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143234a29:
  uVar2 = *(undefined4 *)puVar9;
  *(undefined4 *)puVar9 = *(undefined4 *)puVar21;
  *(undefined4 *)puVar21 = uVar2;
  iVar14 = iVar14 + -1;
  puVar12 = puVar12 + -4;
  if ((longlong)puVar22 - (longlong)puVar7 < (longlong)puVar8 - (longlong)puVar23) {
    if (puVar5 < puVar11) {
      *puVar4 = (ulonglong)puVar5;
      puVar4[1] = (ulonglong)puVar11;
      *(int *)(puVar4 + 2) = iVar14;
      puVar4 = puVar4 + 3;
    }
    puVar7 = puVar9;
    puVar8 = puVar22;
    if (puVar21 <= puVar9 + 2) goto LAB_143234c42;
  }
  else {
    if (puVar9 + 2 < puVar21) {
      *puVar4 = (ulonglong)puVar9;
      puVar4[1] = (ulonglong)puVar12;
      *(int *)(puVar4 + 2) = iVar14;
      puVar4 = puVar4 + 3;
    }
    puVar7 = puVar23;
    puVar9 = puVar5;
    puVar12 = puVar11;
    puVar8 = puVar11;
    if (puVar11 <= puVar5) goto LAB_143234c42;
  }
  iVar20 = (int)((ulonglong)((longlong)puVar8 - (longlong)puVar7) >> 2);
  uVar19 = iVar20 + 1;
  puVar11 = puVar12;
  if (iVar14 == 0) goto LAB_143234abc;
  goto LAB_1432349a8;
}



// FUNCTION 143234c7c FUN_143234c7c body=1120 status=ok
// SIG undefined FUN_143234c7c(void)

void FUN_143234c7c(ulonglong *param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  ulonglong *puVar3;
  ushort *puVar4;
  ulonglong uVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  ushort *puVar9;
  ulonglong uVar10;
  ushort *puVar11;
  ushort *puVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  ushort uVar19;
  ushort *puVar20;
  ushort *puVar21;
  ushort *puVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStack_368 [32];
  ulonglong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  iVar14 = (int)param_1[1];
  if (1 < (longlong)iVar14) {
    uVar10 = *param_1;
    uVar5 = ((longlong)uVar10 >> 0x18) + (longlong)param_1;
    if ((uVar10 & 1) == 0) {
      uVar5 = uVar10;
    }
    memset(local_338,0,0x2f0);
    local_340 = uVar5 + (longlong)iVar14 * 4 + -4;
    local_348 = uVar5;
    fVar24 = logf((float)iVar14);
    local_338[0] = (int)(longlong)(fVar24 + fVar24);
    puVar3 = &local_348;
    do {
      puVar6 = (ushort *)*puVar3;
      puVar7 = (ushort *)puVar3[1];
      iVar14 = (int)puVar3[2];
      iVar8 = (int)((ulonglong)((longlong)puVar7 - (longlong)puVar6) >> 2);
      uVar10 = (ulonglong)(iVar8 + 1);
      puVar9 = puVar6;
      puVar11 = puVar7;
      if (iVar14 != 0) {
LAB_143234d2c:
        if (8 < (int)(uint)uVar10) {
          uVar10 = (ulonglong)((uint)uVar10 >> 1);
          uVar1 = *(undefined4 *)(puVar9 + uVar10 * 2);
          *(undefined4 *)(puVar9 + uVar10 * 2) = *(undefined4 *)puVar9;
          *(undefined4 *)puVar9 = uVar1;
          puVar20 = puVar11 + 2;
          puVar4 = puVar9;
          do {
            puVar2 = puVar4 + 2;
            puVar12 = puVar4 + 2;
            do {
              puVar4 = puVar12;
              puVar22 = puVar2;
              if (puVar11 < puVar4) break;
              bVar23 = (byte)puVar9[1] < (byte)puVar4[1];
              if ((byte)puVar9[1] == (byte)puVar4[1]) {
                bVar23 = *puVar9 < *puVar4;
              }
              puVar2 = puVar22 + 2;
              puVar12 = puVar4 + 2;
            } while (!bVar23);
            puVar2 = puVar20 + -4;
            do {
              puVar12 = puVar20;
              puVar21 = puVar2;
              puVar20 = puVar12 + -2;
              if (puVar20 <= puVar9) break;
              bVar23 = (byte)puVar12[-1] < (byte)puVar9[1];
              if ((byte)puVar12[-1] == (byte)puVar9[1]) {
                bVar23 = *puVar20 < *puVar9;
              }
              puVar2 = puVar21 + -2;
            } while (!bVar23);
            if (puVar20 < puVar4) goto LAB_143234ded;
            uVar1 = *(undefined4 *)puVar4;
            *(undefined4 *)puVar4 = *(undefined4 *)puVar20;
            *(undefined4 *)puVar20 = uVar1;
          } while( true );
        }
        if (puVar9 < puVar11) {
          do {
            puVar6 = puVar9;
            if (puVar9 + 2 <= puVar11) {
              uVar19 = *puVar9;
              puVar7 = puVar9 + 2;
              do {
                bVar23 = uVar19 < *puVar7;
                if ((byte)puVar6[1] != (byte)puVar7[1]) {
                  bVar23 = (byte)puVar6[1] < (byte)puVar7[1];
                }
                if (bVar23) {
                  puVar6 = puVar7;
                  uVar19 = *puVar7;
                }
                puVar7 = puVar7 + 2;
              } while (puVar7 <= puVar11);
            }
            uVar1 = *(undefined4 *)puVar6;
            *(undefined4 *)puVar6 = *(undefined4 *)puVar11;
            *(undefined4 *)puVar11 = uVar1;
            puVar11 = puVar11 + -2;
          } while (puVar9 < puVar11);
        }
        goto LAB_1432350a2;
      }
LAB_143234e80:
      iVar14 = (int)uVar10;
      if (iVar14 != 0) {
        iVar8 = (iVar8 - (iVar8 + -1 >> 0x1f)) + -1 >> 1;
        iVar17 = iVar8;
joined_r0x000143234ea7:
        do {
          iVar16 = iVar8 * 2 + 1;
          if (iVar16 < iVar14) {
            iVar15 = iVar8 * 2 + 2;
            if (iVar15 < iVar14) {
              bVar23 = (byte)puVar9[(longlong)iVar15 * 2 + 1] <
                       (byte)puVar9[(longlong)iVar16 * 2 + 1];
              if ((byte)puVar9[(longlong)iVar15 * 2 + 1] == (byte)puVar9[(longlong)iVar16 * 2 + 1])
              {
                bVar23 = puVar9[(longlong)iVar15 * 2] < puVar9[(longlong)iVar16 * 2];
              }
              if (!bVar23) {
                iVar16 = iVar15;
              }
            }
            lVar18 = (longlong)iVar8;
            lVar13 = (longlong)iVar16;
            bVar23 = (byte)puVar9[lVar18 * 2 + 1] < (byte)puVar9[lVar13 * 2 + 1];
            if ((byte)puVar9[lVar18 * 2 + 1] == (byte)puVar9[lVar13 * 2 + 1]) {
              bVar23 = puVar9[lVar18 * 2] < puVar9[lVar13 * 2];
            }
            if (bVar23) {
              uVar1 = *(undefined4 *)(puVar9 + lVar18 * 2);
              *(undefined4 *)(puVar9 + lVar18 * 2) = *(undefined4 *)(puVar9 + lVar13 * 2);
              *(undefined4 *)(puVar9 + lVar13 * 2) = uVar1;
              iVar8 = iVar16;
              goto joined_r0x000143234ea7;
            }
          }
          bVar23 = iVar17 != 0;
          iVar8 = iVar17 + -1;
          iVar17 = iVar8;
        } while (bVar23);
        if (1 < iVar14) {
          uVar1 = *(undefined4 *)puVar9;
          *(undefined4 *)puVar9 = *(undefined4 *)(puVar9 + uVar10 * 2 + -2);
          *(undefined4 *)(puVar9 + uVar10 * 2 + -2) = uVar1;
          if (iVar14 != 2) {
            do {
              uVar10 = uVar10 - 1;
              iVar14 = 0;
              iVar17 = 1;
              iVar8 = 0;
              do {
                lVar13 = (longlong)(iVar14 + 2);
                iVar16 = iVar17;
                if (lVar13 < (longlong)uVar10) {
                  bVar23 = (byte)puVar9[lVar13 * 2 + 1] < (byte)puVar9[(longlong)iVar17 * 2 + 1];
                  if ((byte)puVar9[lVar13 * 2 + 1] == (byte)puVar9[(longlong)iVar17 * 2 + 1]) {
                    bVar23 = puVar9[lVar13 * 2] < puVar9[(longlong)iVar17 * 2];
                  }
                  if (!bVar23) {
                    iVar16 = iVar14 + 2;
                  }
                }
                lVar13 = (longlong)iVar8;
                lVar18 = (longlong)iVar16;
                bVar23 = (byte)puVar9[lVar13 * 2 + 1] < (byte)puVar9[lVar18 * 2 + 1];
                if ((byte)puVar9[lVar13 * 2 + 1] == (byte)puVar9[lVar18 * 2 + 1]) {
                  bVar23 = puVar9[lVar13 * 2] < puVar9[lVar18 * 2];
                }
                if (!bVar23) break;
                uVar1 = *(undefined4 *)(puVar9 + lVar13 * 2);
                *(undefined4 *)(puVar9 + lVar13 * 2) = *(undefined4 *)(puVar9 + lVar18 * 2);
                *(undefined4 *)(puVar9 + lVar18 * 2) = uVar1;
                iVar14 = iVar16 * 2;
                iVar17 = iVar16 * 2 + 1;
                iVar8 = iVar16;
              } while ((longlong)iVar17 < (longlong)uVar10);
              uVar1 = *(undefined4 *)puVar9;
              *(undefined4 *)puVar9 = *(undefined4 *)(puVar9 + uVar10 * 2 + -2);
              *(undefined4 *)(puVar9 + uVar10 * 2 + -2) = uVar1;
            } while (2 < uVar10);
          }
        }
      }
LAB_1432350a2:
      puVar3 = puVar3 + -3;
    } while (&local_348 <= puVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143234ded:
  uVar1 = *(undefined4 *)puVar9;
  *(undefined4 *)puVar9 = *(undefined4 *)puVar20;
  *(undefined4 *)puVar20 = uVar1;
  iVar14 = iVar14 + -1;
  puVar12 = puVar12 + -4;
  if ((longlong)puVar21 - (longlong)puVar6 < (longlong)puVar7 - (longlong)puVar22) {
    if (puVar4 < puVar11) {
      *puVar3 = (ulonglong)puVar4;
      puVar3[1] = (ulonglong)puVar11;
      *(int *)(puVar3 + 2) = iVar14;
      puVar3 = puVar3 + 3;
    }
    puVar6 = puVar9;
    puVar7 = puVar21;
    if (puVar20 <= puVar9 + 2) goto LAB_1432350a2;
  }
  else {
    if (puVar9 + 2 < puVar20) {
      *puVar3 = (ulonglong)puVar9;
      puVar3[1] = (ulonglong)puVar12;
      *(int *)(puVar3 + 2) = iVar14;
      puVar3 = puVar3 + 3;
    }
    puVar6 = puVar22;
    puVar9 = puVar4;
    puVar12 = puVar11;
    puVar7 = puVar11;
    if (puVar11 <= puVar4) goto LAB_1432350a2;
  }
  iVar8 = (int)((ulonglong)((longlong)puVar7 - (longlong)puVar6) >> 2);
  uVar10 = (ulonglong)(iVar8 + 1);
  puVar11 = puVar12;
  if (iVar14 == 0) goto LAB_143234e80;
  goto LAB_143234d2c;
}



// FUNCTION 1432350ee FUN_1432350ee body=353 status=ok
// SIG undefined FUN_1432350ee(void)

undefined8 * FUN_1432350ee(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  PSRWLOCK SRWLock;
  longlong *plVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  uint uVar10;
  
  *param_1 = &PTR_FUN_14a395458;
  puVar3 = DAT_14ca9a668;
  plVar1 = param_1 + 1;
  if (DAT_14ca9a668 != (undefined2 *)0x0) {
    SRWLock = (PSRWLOCK)(DAT_14ca9a668 + 0x2c);
    AcquireSRWLockExclusive(SRWLock);
    plVar2 = (longlong *)(puVar3 + 4);
    iVar5 = *(int *)(param_1 + 2);
    uVar7 = 0;
    iVar6 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    if (0 < iVar6) {
      if (iVar5 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = (undefined2 *)*plVar1;
      }
      lVar8 = 0;
      uVar7 = 0;
      do {
        uVar4 = ((uint)(ushort)puVar9[lVar8] + (uint)(0x19 < (ushort)puVar9[lVar8] - 0x61) * 0x20) -
                0x20;
        uVar10 = (uint)(uVar7 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar7 ^ uVar4) & 0xff) * 4);
        uVar7 = (ulonglong)
                (uVar10 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar4 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar6 != (int)lVar8);
    }
    iVar5 = FUN_1414ee5e2(plVar2,uVar7,plVar1);
    if (iVar5 == -1) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    else {
      lVar8 = *(longlong *)(*plVar2 + 0x10 + (longlong)iVar5 * 0x20);
      *(undefined8 *)(*plVar2 + 0x10 + (longlong)iVar5 * 0x20) = 0;
      FUN_14743e758(plVar2,iVar5);
      ReleaseSRWLockExclusive(SRWLock);
      if (lVar8 != 0) {
        FUN_14120f0ba(lVar8);
        FUN_1400020a8(lVar8);
      }
    }
    FUN_145c86664(2,*puVar3,plVar1,0xffffffff);
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143235256 FUN_143235256 body=155 status=ok
// SIG undefined FUN_143235256(void)

undefined8 * FUN_143235256(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = 0;
  lVar2 = 0x50;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x28) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x20) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x48);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x1c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x14) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0xa50);
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  lVar2 = 0xa18;
  do {
    InitializeSRWLock((PSRWLOCK)((longlong)param_1 + lVar2));
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0xb18);
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x163));
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  return param_1;
}



// FUNCTION 1432352f2 FUN_1432352f2 body=1203 status=ok
// SIG undefined FUN_1432352f2(void)

void FUN_1432352f2(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  uint uVar14;
  longlong *plVar15;
  PSRWLOCK pRVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 auStack_148 [32];
  undefined2 *local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_110;
  double local_108;
  double local_100;
  double local_f8;
  int local_e4;
  ulonglong local_e0;
  uint local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8;
  ulonglong local_c0;
  PSRWLOCK local_b8;
  uint *local_b0;
  longlong *local_a8;
  PSRWLOCK local_a0;
  ulonglong local_98;
  longlong *local_90;
  undefined8 *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined2 *local_70;
  int local_68;
  ulonglong local_60;
  
  lVar11 = DAT_14ca9a668;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (DAT_14ca9a668 != 0) {
    puVar4 = (undefined1 *)FUN_1400d7a00();
    (**(code **)(*param_2 + 0x10))
              (param_2,
               L"ShaderLibraryName,LogicalName,OwnerName,Id,NumShaders,NumShaderMaps,LibrarySizeKb,RHILibrarySizeKb,ShaderMapsSizeKb"
               ,*puVar4,puVar4 + 4);
    pRVar16 = (PSRWLOCK)(lVar11 + 0x58);
    AcquireSRWLockShared(pRVar16);
    uVar3 = *(uint *)(lVar11 + 0x30);
    local_b8 = pRVar16;
    if (uVar3 == 0) {
      uVar12 = 1;
      uVar18 = 0;
      iVar8 = 0;
      uVar2 = 0;
    }
    else {
      puVar5 = *(uint **)(lVar11 + 0x28);
      if (*(uint **)(lVar11 + 0x28) == (uint *)0x0) {
        puVar5 = (uint *)(lVar11 + 0x18);
      }
      uVar2 = *puVar5;
      if (uVar2 == 0) {
        iVar8 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar8 = uVar3 - 1;
        }
        uVar18 = 0;
        uVar12 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar12 = uVar18;
        }
        iVar8 = 0;
        do {
          if (uVar12 == uVar18) goto LAB_1432353ef;
          iVar8 = iVar8 + 0x20;
          uVar2 = puVar5[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar2 == 0);
      }
      else {
        uVar18 = 0;
        iVar8 = 0;
      }
      uVar12 = (ulonglong)(-uVar2 & uVar2);
      uVar1 = uVar12 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar2 = (iVar8 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      if ((int)uVar3 <= (int)uVar2) {
        uVar2 = uVar3;
      }
    }
    if (uVar2 != uVar3) {
      uVar14 = 0xffffffff;
      local_c8 = lVar11;
      local_e0 = (ulonglong)uVar3;
      local_b0 = (uint *)(lVar11 + 0x18);
      local_a8 = param_2;
      do {
        lVar11 = *(longlong *)(local_c8 + 8);
        lVar9 = *(longlong *)(lVar11 + 0x10 + (longlong)(int)uVar2 * 0x20);
        local_a0 = (PSRWLOCK)(lVar9 + 0x78);
        local_e4 = iVar8;
        local_d8 = uVar14;
        local_c0 = uVar12;
        local_98 = uVar18;
        AcquireSRWLockShared(local_a0);
        if ((longlong)*(int *)(lVar9 + 0x88) != 0) {
          local_88 = (undefined8 *)(lVar11 + (longlong)(int)uVar2 * 0x20);
          plVar15 = *(longlong **)(lVar9 + 0x80);
          local_90 = plVar15 + *(int *)(lVar9 + 0x88);
          do {
            local_80 = *(longlong *)*plVar15;
            local_78 = 0;
            FUN_1400021e4(&local_78,&local_70);
            local_cc = (undefined4)(*(longlong **)*plVar15)[5];
            local_d0 = (**(code **)(**(longlong **)*plVar15 + 0x18))();
            lVar11 = *plVar15;
            local_d4 = *(undefined4 *)(lVar11 + 0xa10);
            pRVar16 = (PSRWLOCK)(lVar11 + 0xa18);
            lVar9 = 0;
            iVar8 = 0;
            do {
              AcquireSRWLockShared(pRVar16);
              uVar3 = *(uint *)(lVar11 + 0x50 + lVar9 * 8);
              iVar17 = uVar3 * 4;
              if (uVar3 < 2) {
                iVar17 = 0;
              }
              iVar8 = *(int *)(lVar11 + 0x14 + lVar9 * 8) * 0x20 + iVar8 +
                      (*(int *)(lVar11 + 0x34 + lVar9 * 8) + 0x1fU >> 5) * 4 + iVar17;
              ReleaseSRWLockShared(pRVar16);
              lVar9 = lVar9 + 10;
              pRVar16 = pRVar16 + 1;
            } while (lVar9 != 0x140);
            iVar17 = *(int *)(lVar11 + 0xa14);
            uVar3 = (**(code **)(**(longlong **)*plVar15 + 0x38))();
            uVar2 = FUN_14743e7cc(*plVar15);
            local_128 = &DAT_149dfb77a;
            if (local_68 != 0) {
              local_128 = local_70;
            }
            puVar13 = &DAT_149dfb77a;
            if (*(int *)(local_88 + 1) != 0) {
              puVar13 = (undefined2 *)*local_88;
            }
            puVar10 = &DAT_149dfb77a;
            if (*(int *)(local_80 + 0x20) != 0) {
              puVar10 = *(undefined2 **)(local_80 + 0x18);
            }
            local_f8 = (double)((float)uVar2 * 0.0009765625);
            local_100 = (double)((float)uVar3 * 0.0009765625);
            local_108 = (double)((float)(iVar8 + iVar17 * 8 + 0xb30) * 0.0009765625);
            local_110 = local_d4;
            local_118 = local_d0;
            local_120 = local_cc;
            FUN_140047918(local_a8,L"%s,%s,%s,%x,%d,%d,%.3f,%.3f,%.3f",puVar10,puVar13);
            if (local_70 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            plVar15 = plVar15 + 1;
          } while (plVar15 != local_90);
        }
        ReleaseSRWLockShared(local_a0);
        uVar14 = local_d8 & ~(uint)local_c0;
        puVar5 = *(uint **)(local_c8 + 0x28);
        if (*(uint **)(local_c8 + 0x28) == (uint *)0x0) {
          puVar5 = local_b0;
        }
        uVar3 = *(uint *)(local_c8 + 0x30);
        iVar17 = (int)local_98;
        lVar11 = (longlong)iVar17;
        uVar2 = puVar5[lVar11] & uVar14;
        uVar18 = local_98;
        iVar8 = local_e4;
        if (uVar2 == 0) {
          iVar6 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar6 = uVar3 - 1;
          }
          iVar6 = iVar6 >> 5;
          iVar8 = local_e4 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar17) {
            iVar7 = iVar17;
          }
          if (iVar17 < iVar6) {
            lVar9 = 0;
            do {
              uVar2 = puVar5[lVar11 + lVar9 + 1];
              if (uVar2 != 0) {
                uVar14 = 0xffffffff;
                uVar18 = (ulonglong)(iVar17 + (int)lVar9 + 1);
                goto LAB_14323573d;
              }
              iVar8 = iVar8 + 0x20;
              lVar9 = lVar9 + 1;
            } while (iVar7 - lVar11 != lVar9);
            uVar14 = 0xffffffff;
            iVar17 = iVar7;
          }
          uVar18 = (ulonglong)(iVar17 + 1);
          uVar12 = local_c0;
          uVar2 = uVar3;
        }
        else {
LAB_14323573d:
          uVar12 = (ulonglong)(-uVar2 & uVar2);
          uVar1 = uVar12 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          uVar2 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if ((int)uVar3 <= (int)uVar2) {
            uVar2 = uVar3;
          }
        }
      } while (uVar2 != (uint)local_e0);
    }
LAB_1432353ef:
    ReleaseSRWLockShared(local_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432357a6 FUN_1432357a6 body=403 status=ok
// SIG undefined FUN_1432357a6(void)

void FUN_1432357a6(longlong *param_1,int param_2)

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
      plVar2 = (longlong *)(*local_78 + (longlong)iStack_5c * 0x48);
      FUN_14743e83c(plVar2 + 2);
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
    FUN_1403af08a(param_1,param_2);
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



// FUNCTION 14323593a FUN_14323593a body=244 status=ok
// SIG undefined FUN_14323593a(void)

wchar_t * FUN_14323593a(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int iVar9;
  
  pwVar4 = wcsstr(param_1,L"#");
  do {
    if (pwVar4 == (wchar_t *)0x0) {
      return (wchar_t *)0x0;
    }
    pwVar6 = pwVar4 + 2;
    for (pwVar5 = pwVar4 + 1; (wVar1 = *pwVar5, wVar1 == L'\t' || (wVar1 == L' '));
        pwVar5 = pwVar5 + 1) {
      pwVar6 = pwVar6 + 1;
    }
    lVar7 = 7;
    pwVar8 = L"include";
    wVar3 = wVar1;
    while( true ) {
      wVar2 = *pwVar8;
      if (wVar3 != wVar2) break;
      if (wVar3 == L'\0') goto LAB_1432359ec;
LAB_1432359b0:
      lVar7 = lVar7 + -1;
      if (lVar7 == 0) goto LAB_1432359ec;
      pwVar8 = pwVar8 + 1;
      wVar3 = *pwVar6;
      pwVar6 = pwVar6 + 1;
    }
    if ((ushort)(wVar2 | wVar3) < 0x80) {
      if ((&DAT_149e05da0)[(ushort)wVar3] == (&DAT_149e05da0)[(uint)(ushort)wVar2])
      goto LAB_1432359b0;
      iVar9 = (uint)(byte)(&DAT_149e05da0)[(ushort)wVar3] -
              (uint)(byte)(&DAT_149e05da0)[(uint)(ushort)wVar2];
    }
    else {
      iVar9 = (uint)(ushort)wVar3 - (uint)(ushort)wVar2;
    }
    if (iVar9 != 0) goto LAB_1432359f1;
LAB_1432359ec:
    wVar1 = pwVar5[7];
LAB_1432359f1:
    if (wVar1 == L' ') {
      return pwVar4;
    }
    if (wVar1 == L'\t') {
      return pwVar4;
    }
    if (*pwVar4 == L'\0') {
      return (wchar_t *)0x0;
    }
    pwVar4 = wcsstr(pwVar4 + 1,L"#");
  } while( true );
}



// FUNCTION 143235a44 FUN_143235a44 body=2272 status=ok
// SIG undefined FUN_143235a44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143235a44(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong *local_60;
  ulonglong *local_58;
  longlong local_50 [2];
  ulonglong local_40 [3];
  
  local_40[0] = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140056680(&DAT_14ca9a470,L".ushaderbytecode");
  atexit((_func_5014 *)&LAB_143231614);
  FUN_140056680(&DAT_14ca9a480,L".assetinfo.json");
  atexit((_func_5014 *)&LAB_143231625);
  FUN_140056680(&DAT_14ca9a490,L".shk");
  atexit((_func_5014 *)&LAB_143231636);
  FUN_140056680(&DAT_14ca9a4a0,L".ushaderpipelines");
  atexit((_func_5014 *)&LAB_143231647);
  FUN_140056680(&DAT_14ca9a4b0,L"^ShaderCode\\-(\\w*)\\-([\\w\\-]*)\\.ushaderbytecode$");
  atexit((_func_5014 *)&LAB_143231658);
  FUN_140056680(&DAT_14ca9a4c0,L"^ShaderArchive\\-(\\w*)\\-([\\w\\-]*)\\.ushaderbytecode$");
  atexit((_func_5014 *)&LAB_143231669);
  FUN_140056680(&DAT_14ca9a4d0,L"^ShaderStableInfo\\-(\\w*)\\-([\\w\\-]*)\\.shk$");
  atexit((_func_5014 *)&LAB_14323167a);
  local_68 = 0;
  FUN_141471170(&DAT_14ca9a4e8,L"r.ShaderCodeLibrary.SeparateLoadingCache",&DAT_14ca9a4e0,
                L"if > 0, each shader code library has it\'s own loading cache.");
  atexit(FUN_14323168b);
  local_68 = 0;
  FUN_141471170(&DAT_14ca9a4f8,L"r.ShaderCodeLibrary.PreloadShaderMaps",&DAT_14c760e5c,
                L"If > 0, shader maps will be preloaded at package/resource load time.");
  atexit(FUN_1432316d0);
  local_68 = 0;
  FUN_14153156c(&DAT_14ca9a510,L"r.ShaderCodeLibrary.ShaderMapResourceRef",&DAT_14ca9a508,
                L"Track reference to the shader group for different shadermaps.\nNormally used when dynamic shader preloading is enable to make sure we dont unload a shader group shared by two different shadermaps"
               );
  atexit(FUN_143231715);
  local_68 = 0;
  FUN_141471170(&DAT_14ca9a520,L"r.ShaderLibrary.PrintExtendedStats",&DAT_14c760e60,
                L"if != 0, shader library will produce extended stats, including the textual representation"
               );
  atexit(FUN_14323175a);
  DAT_14ca9a530 = 0;
  DAT_14ca9a538 = 0;
  DAT_14ca9a540 = 0;
  _DAT_14ca9a568 = 0;
  _DAT_14ca9a570 = 0;
  _DAT_14ca9a548 = 0;
  uRam000000014ca9a550 = 0;
  _DAT_14ca9a574 = 0xffffffff00000080;
  _DAT_14ca9a57c = 0;
  DAT_14ca9a588 = 0;
  _DAT_14ca9a590 = 0;
  atexit(FUN_14323179f);
  DAT_14ca9a5d0 = 0;
  DAT_14ca9a5d8 = 0;
  DAT_14ca9a5b0 = 0;
  _DAT_14ca9a5b8 = 0;
  _DAT_14ca9a5dc = 0xffffffff00000080;
  DAT_14ca9a5e4 = 0;
  DAT_14ca9a5f0 = 0;
  DAT_14ca9a5f8 = 0;
  atexit(FUN_1432317ce);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca9a600);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca9a600,4000);
  atexit((_func_5014 *)&LAB_1432317f7);
  DAT_14ca9ee38 = 0;
  DAT_14ca9ee40 = 0;
  atexit(FUN_143231805);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca9a628);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca9a628,4000);
  DAT_14ca9a650 = 0;
  _DAT_14ca9a658 = 0;
  _DAT_14ca9a660 = 2;
  atexit(FUN_143231db5);
  local_60 = (longlong *)0x0;
  local_58._0_4_ = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58._0_4_ = 2;
  *local_60 = (longlong)&PTR_LAB_14a1361f0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_60[2] = lVar2;
  *local_60 = (longlong)&PTR_FUN_14a136180;
  local_60[3] = (longlong)FUN_1432352f2;
  local_68 = 0;
  FUN_1462961cc(&DAT_14ca9a670,L"ListShaderLibraries",
                L"Spits out a csv table containing stats of all shader libraries",&local_60);
  if ((int)local_58 != 0) {
    if (local_60 == (longlong *)0x0) goto LAB_143235df1;
    (**(code **)*local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58._0_4_ = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143235df1:
  atexit(FUN_143233a2c);
  FUN_1446f470e(&DAT_14ca9a680,L"PCD3D_SM6",1);
  FUN_1446f470e(&DAT_14ca9a688,L"PCD3D_SM5",1);
  FUN_1446f470e(&DAT_14ca9a690,L"PCD3D_ES31",1);
  FUN_1446f470e(&DAT_14ca9a698,L"GLSL_150_ES31",1);
  FUN_1446f470e(&DAT_14ca9a6a0,L"GLSL_ES3_1_ANDROID",1);
  FUN_1446f470e(&DAT_14ca9a6a8,L"SF_METAL",1);
  FUN_1446f470e(&DAT_14ca9a6b0,L"SF_METAL_MRT",1);
  FUN_1446f470e(&DAT_14ca9a6b8,L"SF_METAL_TVOS",1);
  FUN_1446f470e(&DAT_14ca9a6c0,L"SF_METAL_MRT_TVOS",1);
  FUN_1446f470e(&DAT_14ca9a6c8,L"SF_METAL_MRT_MAC",1);
  FUN_1446f470e(&DAT_14ca9a6d0,L"SF_METAL_SM5",1);
  FUN_1446f470e(&DAT_14ca9a6d8,L"SF_METAL_SM6",1);
  FUN_1446f470e(&DAT_14ca9a6e0,L"SF_METAL_SIM",1);
  FUN_1446f470e(&DAT_14ca9a6e8,L"SF_METAL_MACES3_1",1);
  FUN_1446f470e(&DAT_14ca9a6f0,L"SF_VULKAN_ES31_ANDROID",1);
  FUN_1446f470e(&DAT_14ca9a6f8,L"SF_VULKAN_ES31",1);
  FUN_1446f470e(&DAT_14ca9a700,L"SF_VULKAN_SM5",1);
  FUN_1446f470e(&DAT_14ca9a708,L"SF_VULKAN_SM6",1);
  FUN_1446f470e(&DAT_14ca9a710,L"SF_VULKAN_SM5_ANDROID",1);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14ca9a718);
  if (cVar1 == '\0') {
    _DAT_14ca9a718 = 0;
    uRam000000014ca9a720 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_60 = (longlong *)((ulonglong)local_60 & 0xffffffff00000000);
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca9a728,L"r.ShaderEnableDefineDebug",&local_60,
                L"0: Default, 1: Enable the search for define debug DEBUG_THIS_SHADER_GBX");
  atexit(FUN_143233a71);
  local_60 = (longlong *)CONCAT71(local_60._1_7_,1);
  local_68 = 0;
  FUN_140bd5914(&DAT_14ca9a740,L"r.ShaderCompiler.DumpDebugInfoForCacheHits",&local_60,
                L"If true, debug info (via IShaderFormat::OutputDebugData) will be output for all jobs including duplicates and cache/DDC hits. If false, only jobs that actually executed compilation will dump debug info."
               );
  atexit(FUN_143233ab6);
  lVar3 = 0;
  do {
    InitializeSRWLock((PSRWLOCK)(&DAT_14ca9a760 + lVar3));
    *(undefined8 *)((longlong)&DAT_14ca9a788 + lVar3) = 0;
    *(undefined4 *)((longlong)&DAT_14ca9a790 + lVar3) = 0;
    *(undefined8 *)(&DAT_14ca9a768 + lVar3) = 0;
    *(undefined8 *)(lVar3 + 0x14ca9a770) = 0;
    *(undefined8 *)((longlong)&DAT_14ca9a794 + lVar3) = 0xffffffff00000080;
    *(undefined4 *)((longlong)&DAT_14ca9a79c + lVar3) = 0;
    *(undefined8 *)((longlong)&DAT_14ca9a7a8 + lVar3) = 0;
    *(undefined4 *)((longlong)&DAT_14ca9a7b0 + lVar3) = 0;
    lVar3 = lVar3 + 0x58;
  } while (lVar3 != 0xaa8);
  atexit(FUN_143233b43);
  DAT_14ca9b208 = 0;
  uRam000000014ca9b210 = 0;
  atexit((_func_5014 *)&LAB_143233baf);
  InitializeSRWLock((PSRWLOCK)&DAT_14ca9b218);
  lVar3 = 0x58;
  do {
    *(undefined8 *)((longlong)&DAT_14ca9b1f8 + lVar3) = 0;
    *(undefined4 *)((longlong)&DAT_14ca9b200 + lVar3) = 0;
    *(undefined8 *)(lVar3 + 0x14ca9b1c8) = 0;
    *(undefined8 *)(lVar3 + 0x14ca9b1d0) = 0;
    *(undefined8 *)((longlong)&DAT_14ca9b1d8 + lVar3) = 0;
    *(undefined8 *)(lVar3 + 0x14ca9b1e0) = 0;
    *(undefined8 *)(lVar3 + 0x14ca9b204) = 0xffffffff00000080;
    *(undefined4 *)((longlong)&DAT_14ca9b208 + lVar3 + 4) = 0;
    *(undefined8 *)(&DAT_14ca9b218 + lVar3) = 0;
    *(undefined4 *)(&DAT_14ca9b220 + lVar3) = 0;
    lVar3 = lVar3 + 0x60;
  } while (lVar3 != 0x3a78);
  DAT_14ca9ec40 = 0;
  atexit(FUN_143233bc0);
  DAT_14ca9ec68 = 0;
  DAT_14ca9ec70 = 0;
  DAT_14ca9ec48 = 0;
  uRam000000014ca9ec50 = 0;
  _DAT_14ca9ec74 = 0xffffffff00000080;
  _DAT_14ca9ec7c = 0;
  DAT_14ca9ec88 = 0;
  _DAT_14ca9ec90 = 0;
  atexit(FUN_143233e20);
  FUN_140056680(local_50,L"/Engine/Shared/");
  local_58 = local_40;
  local_60 = local_50;
  FUN_141469cae(&DAT_14ca9ec98);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  atexit(FUN_143233e4f);
  local_60 = (longlong *)((ulonglong)local_60 & 0xffffffff00000000);
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14ca9eca8,L"r.ForceDebugViewModes",&local_60,
                L"0: Setting has no effect.\n1: Forces debug view modes to be available, even on cooked builds.2: Forces debug view modes to be unavailable, even on editor builds.  Removes many shader permutations for faster shader iteration."
               );
  atexit(FUN_143233e80);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca9ecd0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca9ecd0,4000);
  atexit((_func_5014 *)&LAB_143234479);
  _DAT_14ca9ed10 = 2;
  local_60 = (longlong *)((ulonglong)local_60 & 0xffffffff00000000);
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca9ed18,L"r.ShaderDevelopmentMode",&local_60,
                L"0: Default, 1: Enable various shader development utilities, such as the ability to retry on failed shader compile, and extra logging as shaders are compiled."
               );
  atexit(FUN_1432347c7);
  local_60 = (longlong *)((ulonglong)local_60 & 0xffffffff00000000);
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca9ed30,L"r.ShowShaderCompilerWarnings",&local_60,
                L"When set to 1, will display all warnings. Note that this flag is ignored if r.ShaderDevelopmentMode=1 (in dev mode warnings are shown by default)."
               );
  atexit(FUN_14323480c);
  local_60 = (longlong *)CONCAT44(local_60._4_4_,2);
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca9ed48,L"r.ShaderCompilerWarningsFilter",&local_60,
                L"Additional filtering for shader warnings; 2=show all, 1=show global shader warnings only, 0=show no shader warnings."
               );
  atexit(FUN_143234851);
  if ((local_40[0] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143236328 FUN_143236328 body=1200 status=ok
// SIG undefined FUN_143236328(void)

void FUN_143236328(longlong param_1,short param_2,longlong *param_3)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  ushort uVar16;
  uint uVar17;
  int iVar18;
  undefined1 auStack_128 [46];
  short local_fa;
  ulonglong *local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ushort local_4e;
  ushort local_4c;
  ushort local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar14 = *(longlong *)(param_1 + 0x50);
    local_e0 = (longlong)*(int *)(param_1 + 0x58) * 0x30 + lVar14;
    plVar1 = param_3 + 1;
    local_fa = param_2;
    do {
      bVar2 = *(byte *)(lVar14 + 0x18);
      uVar16 = *(short *)(lVar14 + 0x14) + param_2;
      if (bVar2 == 0x15) {
        local_88 = param_3[2];
        local_98 = (undefined4)*param_3;
        uStack_94 = *(undefined4 *)((longlong)param_3 + 4);
        uStack_90 = (undefined4)param_3[1];
        uStack_8c = *(undefined4 *)((longlong)param_3 + 0xc);
        uVar8 = *(undefined8 *)(lVar14 + 0x28);
        puVar11 = &local_98;
LAB_1432363ec:
        FUN_143236328(uVar8,uVar16,puVar11);
      }
      else {
        iVar3 = *(int *)(lVar14 + 0x24);
        if (iVar3 == 0 && bVar2 == 0x14) {
          local_a8 = param_3[2];
          local_b8 = (undefined4)*param_3;
          uStack_b4 = *(undefined4 *)((longlong)param_3 + 4);
          uStack_b0 = (undefined4)param_3[1];
          uStack_ac = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar8 = *(undefined8 *)(lVar14 + 0x28);
          puVar11 = &local_b8;
          goto LAB_1432363ec;
        }
        if (iVar3 == 0 || bVar2 != 0x14) {
          uVar17 = (uint)bVar2;
          if ((iVar3 == 0) ||
             (((0x18 < bVar2 || ((0x1000160U >> (uVar17 & 0x1f) & 1) == 0)) &&
              (bVar2 != 7 && 10 < (byte)(bVar2 - 9))))) {
            if (((uVar17 < 0x19) && ((0x10673e0U >> (uVar17 & 0x1f) & 1) != 0)) &&
               (local_4a = (ushort)bVar2, local_4e = uVar16, local_4c = uVar16,
               *(longlong *)(*plVar1 + (ulonglong)uVar16) != 0)) {
              local_78 = (undefined4)*plVar1;
              uStack_74 = *(undefined4 *)((longlong)param_3 + 0xc);
              uStack_70 = (undefined4)param_3[2];
              uStack_6c = *(undefined4 *)((longlong)param_3 + 0x14);
              FUN_147441c15(&local_60,&local_78,&local_4e);
              plVar4 = (longlong *)*param_3;
              lVar12 = *plVar4;
              puVar9 = (ulonglong *)(lVar12 + 0x88);
              lVar7 = (longlong)(int)plVar4[8] + 1;
              puVar11 = *(undefined4 **)(lVar12 + 0x88);
              if ((longlong)(int)plVar4[8] == 0) {
                puVar11 = (undefined4 *)((longlong)puVar11 + 7U & 0xfffffffffffffff8);
                puVar10 = puVar11 + 4;
                puVar6 = puVar11;
                if (*(undefined4 **)(lVar12 + 0x90) < puVar10) {
                  FUN_140023dd8(puVar9,0x18);
                  puVar11 = (undefined4 *)(*puVar9 + 7 & 0xfffffffffffffff8);
                  puVar10 = puVar11 + 4;
                  puVar6 = puVar11;
                }
LAB_1432366f4:
                *puVar9 = (ulonglong)puVar10;
              }
              else {
                puVar10 = puVar11 + 4;
                if (puVar10 <= *(undefined4 **)(lVar12 + 0x90)) {
                  puVar6 = (undefined4 *)plVar4[7];
                  goto LAB_1432366f4;
                }
                puVar6 = (undefined4 *)((longlong)puVar11 + 7U & 0xfffffffffffffff8);
                puVar11 = puVar6 + lVar7 * 4;
                if (*(undefined4 **)(lVar12 + 0x90) < puVar11) {
                  FUN_140023dd8(puVar9,(int)lVar7 * 0x10 | 8);
                  puVar6 = (undefined4 *)(*puVar9 + 7 & 0xfffffffffffffff8);
                  puVar11 = puVar6 + lVar7 * 4;
                }
                *puVar9 = (ulonglong)puVar11;
                puVar11 = puVar6;
                if (0 < (int)plVar4[8]) {
                  lVar12 = 0;
                  lVar13 = 0;
                  do {
                    uVar8 = ((undefined8 *)(plVar4[7] + lVar12))[1];
                    *(undefined8 *)((longlong)puVar6 + lVar12) = *(undefined8 *)(plVar4[7] + lVar12)
                    ;
                    ((undefined8 *)((longlong)puVar6 + lVar12))[1] = uVar8;
                    lVar13 = lVar13 + 1;
                    lVar12 = lVar12 + 0x10;
                  } while (lVar13 < (int)plVar4[8]);
                  puVar11 = (undefined4 *)(lVar12 + (longlong)puVar6);
                }
              }
              *puVar11 = local_60;
              puVar11[1] = uStack_5c;
              puVar11[2] = uStack_58;
              puVar11[3] = uStack_54;
              plVar4[7] = (longlong)puVar6;
              *(int *)(plVar4 + 8) = (int)lVar7;
            }
          }
          else {
            iVar18 = 0;
            do {
              if ((uVar17 < 0x19) && ((0x10673e0U >> (uVar17 & 0x1f) & 1) != 0)) {
                uVar5 = (uint)uVar16 + iVar18 * 8;
                local_4e = (ushort)uVar5;
                local_4a = (ushort)bVar2;
                local_4c = local_4e;
                if (*(longlong *)(*plVar1 + (ulonglong)(uVar5 & 0xffff)) != 0) {
                  local_78 = (undefined4)*plVar1;
                  uStack_74 = *(undefined4 *)((longlong)param_3 + 0xc);
                  uStack_70 = (undefined4)param_3[2];
                  uStack_6c = *(undefined4 *)((longlong)param_3 + 0x14);
                  FUN_147441c15(&local_60,&local_78,&local_4e);
                  plVar4 = (longlong *)*param_3;
                  lVar12 = *plVar4;
                  puVar9 = (ulonglong *)(lVar12 + 0x88);
                  lVar7 = (longlong)(int)plVar4[8] + 1;
                  puVar11 = *(undefined4 **)(lVar12 + 0x88);
                  if ((longlong)(int)plVar4[8] == 0) {
                    puVar11 = (undefined4 *)((longlong)puVar11 + 7U & 0xfffffffffffffff8);
                    puVar10 = puVar11 + 4;
                    puVar6 = puVar11;
                    if (*(undefined4 **)(lVar12 + 0x90) < puVar10) {
                      local_f8 = puVar9;
                      local_f0 = lVar7;
                      FUN_140023dd8(puVar9,0x18);
                      puVar11 = (undefined4 *)(*local_f8 + 7 & 0xfffffffffffffff8);
                      puVar10 = puVar11 + 4;
                      puVar9 = local_f8;
                      lVar7 = local_f0;
                      puVar6 = puVar11;
                    }
LAB_143236537:
                    uVar15 = (undefined4)lVar7;
                    *puVar9 = (ulonglong)puVar10;
                  }
                  else {
                    puVar10 = puVar11 + 4;
                    if (puVar10 <= *(undefined4 **)(lVar12 + 0x90)) {
                      puVar6 = (undefined4 *)plVar4[7];
                      goto LAB_143236537;
                    }
                    puVar6 = (undefined4 *)((longlong)puVar11 + 7U & 0xfffffffffffffff8);
                    puVar11 = puVar6 + lVar7 * 4;
                    local_f0 = lVar7;
                    if (*(undefined4 **)(lVar12 + 0x90) < puVar11) {
                      local_f8 = puVar9;
                      local_e8 = lVar7 * 0x10;
                      FUN_140023dd8(puVar9,(uint)(lVar7 * 0x10) | 8);
                      puVar6 = (undefined4 *)(*local_f8 + 7 & 0xfffffffffffffff8);
                      puVar11 = (undefined4 *)(local_e8 + (longlong)puVar6);
                      puVar9 = local_f8;
                    }
                    *puVar9 = (ulonglong)puVar11;
                    uVar15 = (undefined4)local_f0;
                    puVar11 = puVar6;
                    if (0 < (int)plVar4[8]) {
                      lVar7 = 0;
                      lVar12 = 0;
                      do {
                        uVar8 = ((undefined8 *)(plVar4[7] + lVar7))[1];
                        *(undefined8 *)((longlong)puVar6 + lVar7) =
                             *(undefined8 *)(plVar4[7] + lVar7);
                        ((undefined8 *)((longlong)puVar6 + lVar7))[1] = uVar8;
                        lVar12 = lVar12 + 1;
                        lVar7 = lVar7 + 0x10;
                      } while (lVar12 < (int)plVar4[8]);
                      puVar11 = (undefined4 *)(lVar7 + (longlong)puVar6);
                    }
                  }
                  *puVar11 = local_60;
                  puVar11[1] = uStack_5c;
                  puVar11[2] = uStack_58;
                  puVar11[3] = uStack_54;
                  plVar4[7] = (longlong)puVar6;
                  *(undefined4 *)(plVar4 + 8) = uVar15;
                  param_2 = local_fa;
                }
              }
              iVar18 = iVar18 + 1;
            } while (iVar18 != iVar3);
          }
        }
        else {
          lVar7 = *(longlong *)(lVar14 + 0x28);
          iVar18 = 0;
          do {
            local_c8 = param_3[2];
            local_d8 = (undefined4)*param_3;
            uStack_d4 = *(undefined4 *)((longlong)param_3 + 4);
            uStack_d0 = (undefined4)param_3[1];
            uStack_cc = *(undefined4 *)((longlong)param_3 + 0xc);
            FUN_143236328(lVar7,*(int *)(lVar7 + 0x3c) * iVar18 + (uint)uVar16,&local_d8);
            iVar18 = iVar18 + 1;
          } while (iVar3 != iVar18);
        }
      }
      lVar14 = lVar14 + 0x30;
    } while (lVar14 != local_e0);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432367d9 FUN_1432367d9 body=962 status=ok
// SIG undefined FUN_1432367d9(void)

void FUN_1432367d9(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_3;
  if ((longlong)*(int *)(param_2 + 0x28) != 0) {
    uVar4 = *(uint *)(param_3 + 0x3c);
    uVar6 = *(ulonglong *)(param_2 + 0x20);
    uVar13 = param_2 + 0x20 + ((longlong)uVar6 >> 0x18);
    if ((uVar6 & 1) == 0) {
      uVar13 = uVar6;
    }
    lVar11 = (longlong)*(int *)(param_2 + 0x28) * 6;
    do {
      local_68 = param_4;
      local_60 = (ulonglong)uVar4;
      FUN_147441c15(&local_58,&local_68,uVar13);
      iVar5 = *(int *)(param_1 + 0x608);
      uVar7 = iVar5 + 1;
      *(uint *)(param_1 + 0x608) = uVar7;
      if (*(uint *)(param_1 + 0x60c) < uVar7) {
        FUN_147442bd6((longlong *)(param_1 + 0x600));
      }
      puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x600) + (longlong)iVar5 * 0x10);
      *puVar2 = (undefined4)local_58;
      puVar2[1] = local_58._4_4_;
      puVar2[2] = uStack_50;
      puVar2[3] = uStack_4c;
      uVar13 = uVar13 + 6;
      lVar11 = lVar11 + -6;
    } while (lVar11 != 0);
  }
  uVar6 = *(ulonglong *)(param_2 + 0x10);
  uVar13 = param_2 + 0x10 + ((longlong)uVar6 >> 0x18);
  if ((uVar6 & 1) == 0) {
    uVar13 = uVar6;
  }
  iVar5 = *(int *)(param_2 + 0x18);
  if ((longlong)iVar5 != 0) {
    lVar11 = 0;
    do {
      switch(*(undefined1 *)(uVar13 + 3 + lVar11)) {
      case 5:
        uVar12 = *(undefined8 *)(param_4 + (ulonglong)*(ushort *)(uVar13 + lVar11));
        goto LAB_143236971;
      case 6:
        uVar12 = *(undefined8 *)(param_4 + (ulonglong)*(ushort *)(uVar13 + lVar11));
        goto LAB_14323693b;
      case 7:
        uVar12 = *(undefined8 *)(param_4 + (ulonglong)*(ushort *)(uVar13 + lVar11));
        goto LAB_143236917;
      case 8:
        *(undefined8 *)(param_1 + 0x480 + (ulonglong)*(byte *)(uVar13 + 2 + lVar11) * 8) =
             *(undefined8 *)(param_4 + (ulonglong)*(ushort *)(uVar13 + lVar11));
        break;
      case 9:
        uVar12 = *(undefined8 *)
                  (*(longlong *)(param_4 + (ulonglong)*(ushort *)(uVar13 + lVar11)) + 0x10);
LAB_143236971:
        *(undefined8 *)(param_1 + (ulonglong)*(byte *)(uVar13 + 2 + lVar11) * 8) = uVar12;
        break;
      case 0xc:
      case 0xd:
      case 0x11:
        uVar12 = *(undefined8 *)
                  (*(longlong *)(param_4 + (ulonglong)*(ushort *)(uVar13 + lVar11)) + 0x10);
LAB_14323693b:
        *(undefined8 *)(param_1 + 0x200 + (ulonglong)*(byte *)(uVar13 + 2 + lVar11) * 8) = uVar12;
        break;
      case 0xe:
      case 0x12:
        uVar12 = *(undefined8 *)
                  (*(longlong *)(param_4 + (ulonglong)*(ushort *)(uVar13 + lVar11)) + 0x10);
LAB_143236917:
        *(undefined8 *)(param_1 + 0x580 + (ulonglong)*(byte *)(uVar13 + 2 + lVar11) * 8) = uVar12;
      }
      lVar11 = lVar11 + 4;
    } while ((longlong)iVar5 * 4 != lVar11);
  }
  uVar6 = *(ulonglong *)(param_2 + 0x30);
  uVar13 = param_2 + 0x30 + ((longlong)uVar6 >> 0x18);
  if ((uVar6 & 1) == 0) {
    uVar13 = uVar6;
  }
  iVar5 = *(int *)(param_2 + 0x38);
  if ((longlong)iVar5 != 0) {
    lVar11 = 0;
    do {
      *(undefined8 *)(param_1 + 0x400 + (ulonglong)*(ushort *)(uVar13 + lVar11) * 8) =
           *(undefined8 *)
            (*(longlong *)(param_4 + (ulonglong)*(ushort *)(uVar13 + 2 + lVar11)) + 0x10);
      lVar11 = lVar11 + 4;
    } while ((longlong)iVar5 * 4 != lVar11);
  }
  uVar6 = *(ulonglong *)(param_2 + 0x40);
  uVar13 = param_2 + 0x40 + ((longlong)uVar6 >> 0x18);
  if ((uVar6 & 1) == 0) {
    uVar13 = uVar6;
  }
  iVar5 = *(int *)(param_2 + 0x48);
  if ((longlong)iVar5 != 0) {
    lVar11 = 0;
    do {
      *(undefined8 *)(param_1 + 0x400 + (ulonglong)*(ushort *)(uVar13 + lVar11) * 8) =
           *(undefined8 *)(param_4 + (ulonglong)*(ushort *)(uVar13 + 2 + lVar11));
      lVar11 = lVar11 + 4;
    } while ((longlong)iVar5 * 4 != lVar11);
  }
  if (*(short *)(param_2 + 0x54) == -1) goto LAB_143236b43;
  local_80 = 0;
  local_88 = 0;
  (**(code **)(*DAT_14ca83900 + 0x138))
            (DAT_14ca83900,&local_58,param_4,*(undefined8 *)(local_70 + 0x48));
  plVar10 = (longlong *)(param_1 + 0x610);
  if (plVar10 == &local_58) {
LAB_143236ad2:
    lVar11 = local_58;
    if (local_58 != 0) {
      LOCK();
      puVar1 = (uint *)(local_58 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_58 + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_58 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar11;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar14) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar14 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar14) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
  }
  else {
    lVar11 = *plVar10;
    *plVar10 = local_58;
    local_58 = 0;
    if (lVar11 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar11 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar11 + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar11 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar11;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar14) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar14 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar14) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
      goto LAB_143236ad2;
    }
  }
  *(undefined8 *)(param_1 + 0x400 + (ulonglong)*(ushort *)(param_2 + 0x54) * 8) =
       *(undefined8 *)(param_1 + 0x610);
LAB_143236b43:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143236b9c FUN_143236b9c body=301 status=ok
// SIG undefined FUN_143236b9c(void)

void FUN_143236b9c(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined4 local_50;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = *(undefined4 *)(param_3 + 0x3c);
  local_38 = param_4;
  FUN_140023e89();
  if (*(short *)(param_2 + 0x54) != -1) {
    local_50 = 0;
    local_58 = local_58 & 0xffffffff00000000;
    (**(code **)(*DAT_14ca83900 + 0x138))
              (DAT_14ca83900,&local_40,param_4,*(undefined8 *)(param_3 + 0x48));
    local_58 = param_2 + 0x54;
    FUN_147443c82(*param_1,*param_1 + 0x60,param_1 + 5,&local_40);
    if (local_40 != 0) {
      LOCK();
      puVar1 = (uint *)(local_40 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_40 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_40 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_40;
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
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143236cca FUN_143236cca body=69 status=ok
// SIG undefined FUN_143236cca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143236cca(void)

{
  _DAT_14ca9f018 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143236d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f020,1);
  return;
}



// FUNCTION 143236d0f FUN_143236d0f body=69 status=ok
// SIG undefined FUN_143236d0f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143236d0f(void)

{
  _DAT_14ca9f030 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143236d51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f038,1);
  return;
}



// FUNCTION 143236d54 FUN_143236d54 body=69 status=ok
// SIG undefined FUN_143236d54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143236d54(void)

{
  _DAT_14ca9f048 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143236d96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f050,1);
  return;
}



// FUNCTION 143236d99 FUN_143236d99 body=69 status=ok
// SIG undefined FUN_143236d99(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143236d99(void)

{
  _DAT_14ca9f060 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143236ddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f068,1);
  return;
}



// FUNCTION 143236dde FUN_143236dde body=69 status=ok
// SIG undefined FUN_143236dde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143236dde(void)

{
  _DAT_14ca9f078 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143236e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f080,1);
  return;
}



// FUNCTION 143236e23 FUN_143236e23 body=69 status=ok
// SIG undefined FUN_143236e23(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143236e23(void)

{
  _DAT_14ca9f090 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143236e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f098,1);
  return;
}



// FUNCTION 143236e68 FUN_143236e68 body=69 status=ok
// SIG undefined FUN_143236e68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143236e68(void)

{
  _DAT_14ca9f0a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143236eaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f0b0,1);
  return;
}



// FUNCTION 143236ead FUN_143236ead body=69 status=ok
// SIG undefined FUN_143236ead(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143236ead(void)

{
  _DAT_14ca9f0c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143236eef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f0c8,1);
  return;
}



// FUNCTION 143236ef2 FUN_143236ef2 body=69 status=ok
// SIG undefined FUN_143236ef2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143236ef2(void)

{
  _DAT_14ca9f0d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143236f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f0e0,1);
  return;
}



// FUNCTION 143236f37 FUN_143236f37 body=69 status=ok
// SIG undefined FUN_143236f37(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143236f37(void)

{
  _DAT_14ca9f0f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143236f79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f0f8,1);
  return;
}



// FUNCTION 143236f7c FUN_143236f7c body=69 status=ok
// SIG undefined FUN_143236f7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143236f7c(void)

{
  _DAT_14ca9f108 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143236fbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f110,1);
  return;
}



// FUNCTION 143236fc1 FUN_143236fc1 body=69 status=ok
// SIG undefined FUN_143236fc1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143236fc1(void)

{
  _DAT_14ca9f120 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143237003. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f128,1);
  return;
}



// FUNCTION 143237006 FUN_143237006 body=69 status=ok
// SIG undefined FUN_143237006(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143237006(void)

{
  _DAT_14ca9f138 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143237048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f140,1);
  return;
}



// FUNCTION 14323704b FUN_14323704b body=69 status=ok
// SIG undefined FUN_14323704b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14323704b(void)

{
  _DAT_14ca9f150 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014323708d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f158,1);
  return;
}



// FUNCTION 143237090 FUN_143237090 body=69 status=ok
// SIG undefined FUN_143237090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143237090(void)

{
  _DAT_14ca9f168 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432370d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f170,1);
  return;
}



// FUNCTION 1432370d5 FUN_1432370d5 body=69 status=ok
// SIG undefined FUN_1432370d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432370d5(void)

{
  _DAT_14ca9f180 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143237117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f188,1);
  return;
}



// FUNCTION 14323711a FUN_14323711a body=69 status=ok
// SIG undefined FUN_14323711a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14323711a(void)

{
  _DAT_14ca9f198 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014323715c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f1a0,1);
  return;
}



// FUNCTION 14323715f FUN_14323715f body=69 status=ok
// SIG undefined FUN_14323715f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14323715f(void)

{
  _DAT_14ca9f1b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432371a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f1b8,1);
  return;
}



// FUNCTION 1432371a4 FUN_1432371a4 body=143 status=ok
// SIG undefined FUN_1432371a4(void)

void FUN_1432371a4(undefined4 param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14ca9f278 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_14ca9f278 + 0x148);
    EnterCriticalSection(lpCriticalSection);
    FUN_1431defba(param_1);
    QueryPerformanceCounter(&local_20);
    *(double *)(DAT_14ca9f278 + 0x18) = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143237234 FUN_143237234 body=632 status=ok
// SIG undefined FUN_143237234(void)

void FUN_143237234(longlong *param_1)

{
  void *_Src;
  undefined1 uVar1;
  undefined8 uVar2;
  int iVar3;
  ushort uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ushort uVar10;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] < 1) goto LAB_143237459;
  local_38 = (undefined2 *)0x0;
  local_30 = *(int *)((undefined8 *)*param_1 + 1);
  lVar5 = (longlong)local_30;
  _Src = *(void **)*param_1;
  if (lVar5 == 0) {
    local_2c = 0;
    puVar7 = &DAT_149dfb77a;
    iVar3 = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar5 * 2);
    puVar7 = local_38;
    iVar3 = local_30;
    if (local_30 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
  }
  lVar5 = DAT_14ca9f278;
  lVar8 = 0;
  while( true ) {
    uVar10 = *(ushort *)((longlong)puVar7 + lVar8);
    uVar9 = (ulonglong)uVar10;
    uVar4 = *(ushort *)((longlong)L"Pause" + lVar8);
    if (uVar10 != uVar4) break;
    if (uVar10 == 0) goto LAB_14323742c;
LAB_1432372e6:
    lVar8 = lVar8 + 2;
  }
  if ((uVar4 | uVar10) < 0x80) {
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar6 = (ulonglong)uVar4;
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar6]) goto LAB_1432372e6;
  }
  if (uVar10 != uVar4) {
    puVar7 = local_38;
    if (iVar3 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    lVar5 = 0;
    goto LAB_143237321;
  }
LAB_14323742c:
  if (DAT_14ca9f278 != 0) {
    iVar3 = *(int *)(DAT_14ca9f278 + 0x14);
    *(int *)(DAT_14ca9f278 + 0x14) = iVar3 + 1;
    uVar1 = 1;
    if (iVar3 < 0) goto LAB_14323744a;
    goto LAB_143237447;
  }
  goto LAB_14323744a;
LAB_143237321:
  uVar10 = *(ushort *)((longlong)puVar7 + lVar5);
  uVar9 = (ulonglong)uVar10;
  uVar4 = *(ushort *)((longlong)L"Background" + lVar5);
  if (uVar10 == uVar4) {
    if (uVar10 == 0) goto LAB_14323747a;
LAB_14323733a:
    lVar5 = lVar5 + 2;
    goto LAB_143237321;
  }
  if ((uVar4 | uVar10) < 0x80) {
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar6 = (ulonglong)uVar4;
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar6]) goto LAB_14323733a;
  }
  if (uVar10 != uVar4) {
    lVar5 = 0;
    goto LAB_143237373;
  }
LAB_14323747a:
  uVar2 = 0;
  goto LAB_14323747c;
LAB_1432373c5:
  uVar10 = *(ushort *)((longlong)puVar7 + lVar5);
  uVar9 = (ulonglong)uVar10;
  uVar4 = *(ushort *)((longlong)L"Precompile" + lVar5);
  if (uVar10 == uVar4) {
    if (uVar10 == 0) goto LAB_143237406;
LAB_1432373da:
    lVar5 = lVar5 + 2;
    goto LAB_1432373c5;
  }
  if ((uVar4 | uVar10) < 0x80) {
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar6 = (ulonglong)uVar4;
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar6]) goto LAB_1432373da;
  }
  if (uVar10 != uVar4) goto LAB_14323744a;
LAB_143237406:
  FUN_1402cfafa(2);
  lVar5 = DAT_14ca9f278;
  if ((DAT_14ca9f278 == 0) ||
     (iVar3 = *(int *)(DAT_14ca9f278 + 0x14), *(int *)(DAT_14ca9f278 + 0x14) = iVar3 + -1, 1 < iVar3
     )) goto LAB_14323744a;
  goto LAB_14323749b;
LAB_143237373:
  uVar10 = *(ushort *)((longlong)puVar7 + lVar5);
  uVar9 = (ulonglong)uVar10;
  uVar4 = *(ushort *)((longlong)&DAT_149e0130e + lVar5);
  if (uVar10 == uVar4) {
    if (uVar10 == 0) goto LAB_1432374a6;
LAB_14323738c:
    lVar5 = lVar5 + 2;
    goto LAB_143237373;
  }
  if ((uVar4 | uVar10) < 0x80) {
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar6 = (ulonglong)uVar4;
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar6]) goto LAB_14323738c;
  }
  if (uVar10 != uVar4) {
    lVar5 = 0;
    goto LAB_1432373c5;
  }
LAB_1432374a6:
  uVar2 = 1;
LAB_14323747c:
  FUN_1402cfafa(uVar2);
  lVar5 = DAT_14ca9f278;
  if ((DAT_14ca9f278 != 0) &&
     (iVar3 = *(int *)(DAT_14ca9f278 + 0x14), *(int *)(DAT_14ca9f278 + 0x14) = iVar3 + -1, iVar3 < 2
     )) {
LAB_14323749b:
    *(undefined4 *)(lVar5 + 0x14) = 0;
    uVar1 = 0;
LAB_143237447:
    *(undefined1 *)(lVar5 + 0x10) = uVar1;
  }
LAB_14323744a:
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_143237459:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432374ad FUN_1432374ad body=69 status=ok
// SIG undefined FUN_1432374ad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432374ad(void)

{
  _DAT_14ca9f1c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432374ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f1d0,1);
  return;
}



// FUNCTION 1432374f2 FUN_1432374f2 body=69 status=ok
// SIG undefined FUN_1432374f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432374f2(void)

{
  _DAT_14ca9f1d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143237534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f1e0,1);
  return;
}



// FUNCTION 143237537 FUN_143237537 body=69 status=ok
// SIG undefined FUN_143237537(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143237537(void)

{
  _DAT_14ca9f1e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143237579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f1f0,1);
  return;
}



// FUNCTION 14323757c FUN_14323757c body=69 status=ok
// SIG undefined FUN_14323757c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14323757c(void)

{
  _DAT_14ca9f1f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432375be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f200,1);
  return;
}



// FUNCTION 1432375c1 FUN_1432375c1 body=69 status=ok
// SIG undefined FUN_1432375c1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432375c1(void)

{
  _DAT_14ca9f210 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143237603. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f218,1);
  return;
}



// FUNCTION 143237606 FUN_143237606 body=69 status=ok
// SIG undefined FUN_143237606(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143237606(void)

{
  _DAT_14ca9f220 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143237648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f228,1);
  return;
}



// FUNCTION 14323764b FUN_14323764b body=44 status=ok
// SIG undefined FUN_14323764b(void)

void FUN_14323764b(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14ca9f270;
  if (DAT_14ca9f270 == 0) {
    return;
  }
  FUN_145a08184(DAT_14ca9f270);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 143237688 FUN_143237688 body=49 status=ok
// SIG undefined FUN_143237688(void)

void FUN_143237688(void)

{
  FUN_144760e21(DAT_14ca9f290,DAT_14ca9f298);
  if (DAT_14ca9f290 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1432376b9 FUN_1432376b9 body=49 status=ok
// SIG undefined FUN_1432376b9(void)

void FUN_1432376b9(void)

{
  FUN_144760e21(DAT_14ca9f2a8,DAT_14ca9f2b0);
  if (DAT_14ca9f2a8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1432376ea FUN_1432376ea body=49 status=ok
// SIG undefined FUN_1432376ea(void)

void FUN_1432376ea(void)

{
  FUN_144760e21(DAT_14ca9f2c0,DAT_14ca9f2c8);
  if (DAT_14ca9f2c0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14323771b FUN_14323771b body=49 status=ok
// SIG undefined FUN_14323771b(void)

void FUN_14323771b(void)

{
  FUN_144760e21(DAT_14ca9f2d8,DAT_14ca9f2e0);
  if (DAT_14ca9f2d8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14323774c FUN_14323774c body=49 status=ok
// SIG undefined FUN_14323774c(void)

void FUN_14323774c(void)

{
  FUN_144760e21(DAT_14ca9f2f0,DAT_14ca9f2f8);
  if (DAT_14ca9f2f0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14323777e FUN_14323777e body=260 status=ok
// SIG undefined FUN_14323777e(void)

undefined4 FUN_14323777e(undefined2 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_58 [32];
  undefined2 local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  lVar2 = DAT_14ca9f1c0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar6 = 0;
  }
  else if (iVar1 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar6 = 1;
  }
  if (DAT_14ca9f278 == 0 || *(int *)(lVar2 + uVar6 * 4) != 0) {
    uVar3 = 0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_14ca9f278 + 0x148);
    EnterCriticalSection(lpCriticalSection);
    FUN_145c86e6e(local_30,0);
    local_38 = param_1;
    uVar3 = FUN_145c869aa(DAT_14ca9f278,0,local_30,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143237884 FUN_143237884 body=184 status=ok
// SIG undefined FUN_143237884(void)

undefined8 FUN_143237884(longlong param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  if (param_2 == 0) {
    if (*(int *)(param_4 + 1) == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    else {
      puVar1 = (undefined2 *)*param_4;
    }
    lVar3 = 0;
    while( true ) {
      uVar4 = *(ushort *)((longlong)puVar1 + lVar3);
      uVar5 = (ulonglong)uVar4;
      uVar6 = *(ushort *)((longlong)&DAT_14c764000 + lVar3);
      if (uVar4 != uVar6) break;
      if (uVar4 == 0) goto LAB_1432378fb;
LAB_1432378cf:
      lVar3 = lVar3 + 2;
    }
    if ((uVar6 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
      uVar7 = (ulonglong)uVar6;
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_1432378cf;
    }
    if (uVar4 != uVar6) goto LAB_14323790a;
LAB_1432378fb:
    if ((*(short *)(param_1 + 0x14) == (short)param_3) && (*(char *)(param_1 + 0xf9) == '\0')) {
      FUN_145a07b86(param_1);
    }
  }
LAB_14323790a:
  if (*(int *)(param_4 + 1) < 2) {
    return 0;
  }
  uVar2 = FUN_145c86d1a(param_1,param_4,param_4,param_3);
  return uVar2;
}



// FUNCTION 14323793c FUN_14323793c body=69 status=ok
// SIG undefined FUN_14323793c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14323793c(void)

{
  _DAT_14ca9f338 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014323797e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f340,1);
  return;
}



// FUNCTION 143237981 FUN_143237981 body=175 status=ok
// SIG undefined FUN_143237981(void)

ulonglong FUN_143237981(ulonglong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14ca9f148;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar6 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  if (*(int *)(lVar2 + uVar6 * 4) == 0) {
    uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
  }
  else {
    param_2 = param_2 & param_1;
    uVar5 = 0;
    if ((((param_2 & 0xfc0) != 0) && ((param_2 & 0x3f000) != 0)) &&
       (((param_2 & 0xe00000) != 0 && (uVar5 = 0, (param_2 & 0x1c0000) != 0)))) {
      uVar5 = (ulonglong)((param_2 & 0x3f) != 0);
    }
  }
  return uVar5;
}



// FUNCTION 143237a30 FUN_143237a30 body=49 status=ok
// SIG undefined FUN_143237a30(void)

void FUN_143237a30(void)

{
  char cVar1;
  
  cVar1 = FUN_1403963d0();
  if (cVar1 != '\0') {
    FUN_1432371a4(1);
  }
  cVar1 = FUN_140396325();
  if (cVar1 != '\0') {
    FUN_1432371a4(0);
    return;
  }
  return;
}



// FUNCTION 143237a62 FUN_143237a62 body=14169 status=ok
// SIG undefined FUN_143237a62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143237a62(longlong param_1)

{
  int *piVar1;
  float *pfVar2;
  undefined4 *puVar3;
  double dVar4;
  ushort uVar5;
  LONG LVar6;
  double dVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 *puVar44;
  char cVar45;
  int iVar46;
  int iVar47;
  undefined4 uVar48;
  int iVar49;
  uint uVar50;
  int iVar51;
  DWORD DVar52;
  DWORD DVar53;
  undefined8 uVar54;
  longlong *plVar55;
  longlong lVar56;
  longlong *plVar57;
  ulonglong uVar58;
  longlong *plVar59;
  undefined8 *puVar60;
  uint *puVar61;
  undefined8 *puVar62;
  undefined **ppuVar63;
  longlong lVar64;
  byte bVar65;
  int iVar66;
  ulonglong *puVar67;
  int *piVar68;
  ulonglong uVar69;
  uint uVar70;
  longlong lVar71;
  void *pvVar72;
  int *piVar73;
  longlong *plVar74;
  undefined1 *puVar75;
  byte bVar76;
  code *pcVar77;
  int iVar78;
  ulonglong uVar79;
  longlong lVar80;
  uint uVar81;
  uint uVar82;
  uint *puVar83;
  ulonglong uVar84;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar85;
  bool bVar86;
  float fVar87;
  undefined1 auVar88 [16];
  undefined1 local_658 [40];
  longlong *local_630;
  longlong *local_628;
  longlong local_620;
  longlong *local_618;
  longlong local_610;
  longlong *local_608;
  longlong local_600;
  ulonglong local_5f8;
  undefined1 *local_5f0;
  int *local_5e8;
  LPCRITICAL_SECTION local_5e0;
  int *local_5d8;
  undefined4 local_5cc;
  undefined1 local_5c8;
  undefined1 uStack_5c7;
  undefined2 uStack_5c6;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined2 local_5bc;
  undefined1 local_5ba;
  byte local_5a0;
  longlong *local_570;
  longlong local_550;
  undefined8 local_538;
  longlong local_530;
  longlong local_528;
  undefined4 local_51c;
  longlong local_518;
  undefined8 uStack_510;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined8 local_4ec;
  undefined4 local_4e4;
  longlong local_4d8;
  undefined4 local_4d0;
  undefined4 local_4c8;
  LARGE_INTEGER local_4b8;
  undefined8 uStack_4b0;
  undefined4 local_4a8;
  int iStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  ulonglong local_498;
  int iStack_490;
  undefined4 uStack_48c;
  undefined1 local_488;
  undefined1 uStack_487;
  undefined2 uStack_486;
  undefined4 uStack_484;
  undefined4 uStack_480;
  int iStack_47c;
  undefined8 local_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  int local_468;
  undefined4 uStack_464;
  int iStack_460;
  int iStack_45c;
  int iStack_458;
  int iStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  int iStack_448;
  undefined4 uStack_444;
  int iStack_440;
  undefined4 local_43c;
  int iStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  int iStack_420;
  int iStack_41c;
  int iStack_418;
  int iStack_414;
  undefined1 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  uint local_3f0;
  undefined8 local_3e8;
  undefined1 local_2e0 [16];
  int local_2d0;
  undefined8 *local_2c0;
  byte local_2b8;
  longlong local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  int local_274;
  longlong local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  int local_244;
  undefined1 local_240 [448];
  longlong local_80 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_658;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x148);
  EnterCriticalSection(lpCriticalSection);
  plVar74 = (longlong *)(param_1 + 0x130);
  uVar58 = 0;
  if (*(int *)(param_1 + 0x138) < 2) {
LAB_143237b9c:
    bVar85 = false;
    lVar80 = 0;
  }
  else {
    lVar80 = 0;
    do {
      uVar5 = *(ushort *)(*plVar74 + lVar80 * 2);
      uVar70 = ((uint)(0x19 < uVar5 - 0x61) * 0x20 + (uint)uVar5) - 0x20;
      uVar81 = (uint)(uVar58 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar58 ^ uVar70) & 0xff) * 4);
      uVar58 = (ulonglong)
               (uVar81 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar81 & 0xff ^ uVar70 >> 8 & 0xff) * 4));
      lVar80 = lVar80 + 1;
    } while (*(int *)(param_1 + 0x138) + -1 != (int)lVar80);
    iVar46 = FUN_14144853c((longlong *)(param_1 + 0xd0),uVar58,plVar74);
    if (iVar46 == -1) {
      lVar80 = 0;
    }
    else {
      lVar80 = (longlong)iVar46 * 0x20 + *(longlong *)(param_1 + 0xd0);
    }
    plVar57 = (longlong *)(lVar80 + 0x10);
    if (lVar80 == 0) {
      plVar57 = (longlong *)0x0;
    }
    lVar80 = *plVar57;
    if (lVar80 == 0) goto LAB_143237b9c;
    if ((((DAT_14ca813ac != 0) || (0 < DAT_14ca9f250)) || (0 < DAT_14ca9f248)) ||
       ((bVar85 = true, _DAT_14ca9f240 != 0 && (DAT_14ca9f258 == 0)))) goto LAB_143237c64;
  }
  lVar71 = DAT_14ca9f190;
  lVar56 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar46 = *(int *)(lVar56 + 0xc60);
  if (iVar46 == 0x40000002) {
    uVar58 = 0;
  }
  else {
    bVar86 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar46 != 2)) {
      if (iVar46 == 1) {
        DVar52 = FUN_140ad26c0();
        DVar53 = GetCurrentThreadId();
        bVar86 = DVar52 == DVar53;
      }
      else {
        bVar86 = false;
      }
    }
    uVar58 = (ulonglong)(bVar86 ^ 1);
  }
  lVar64 = DAT_14ca9f190;
  if (0.0 < *(float *)(lVar71 + uVar58 * 4)) {
    fVar87 = DAT_14ca9f238 + -20.0;
    iVar46 = *(int *)(lVar56 + 0xc60);
    if (iVar46 == 0x40000002) {
      uVar58 = 0;
    }
    else {
      bVar86 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar46 != 2)) {
        if (iVar46 == 1) {
          DVar52 = FUN_140ad26c0();
          DVar53 = GetCurrentThreadId();
          bVar86 = DVar52 == DVar53;
        }
        else {
          bVar86 = false;
        }
      }
      uVar58 = (ulonglong)(bVar86 ^ 1);
    }
    pfVar2 = (float *)(lVar64 + uVar58 * 4);
    if ((*pfVar2 <= fVar87 && fVar87 != *pfVar2) && (0 < _DAT_14ca9f240)) {
      FUN_1402cfafa();
    }
  }
  if (bVar85) {
    if ((longlong)DAT_14ca9f2f8 != 0) {
      lVar56 = 0;
      do {
        if ((*(int *)(DAT_14ca9f2f0 + 8 + lVar56) != 0) &&
           (*(longlong *)(DAT_14ca9f2f0 + lVar56) != 0)) {
          auVar88._0_8_ = (double)CONCAT44(0x43300000,(int)DAT_14ca9f260);
          auVar88._8_4_ = (int)((ulonglong)DAT_14ca9f260 >> 0x20);
          auVar88._12_4_ = 0x45300000;
          FUN_1474443e4(DAT_14ca9f258,
                        ((auVar88._0_8_ - 4503599627370496.0) +
                        (auVar88._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418,lVar80 + 200);
          break;
        }
        lVar56 = lVar56 + 0x10;
      } while ((longlong)DAT_14ca9f2f8 * 0x10 != lVar56);
    }
    FUN_147404fb6();
    DAT_14ca9f268 = 0.0;
    _DAT_14ca9f240 = 0;
    LOCK();
    DAT_14ca9f258 = 0;
    UNLOCK();
    LOCK();
    DAT_14ca9f260 = 0;
    UNLOCK();
    *(undefined1 *)(lVar80 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
    if (*(int *)(param_1 + 0x13c) != 0) {
      FUN_1446f8c06(plVar74,0);
    }
    FUN_145c873e8(param_1);
    lVar80 = 0;
  }
LAB_143237c64:
  cVar45 = FUN_1403964ee(param_1);
  if ((cVar45 != '\0') && (cVar45 = FUN_140396325(), cVar45 != '\0')) {
    FUN_1432371a4(0);
  }
  cVar45 = FUN_1403963d0();
  if ((cVar45 != '\0') &&
     (iVar46 = *(int *)(param_1 + 0x28), iVar47 = FUN_144972c84(), iVar46 < iVar47)) {
    QueryPerformanceCounter(&local_4b8);
    lVar56 = DAT_14ca9f118;
    dVar7 = (double)CONCAT44(local_4b8.s.HighPart,local_4b8.s.LowPart) * DAT_14c83f420;
    dVar4 = *(double *)(param_1 + 0x20);
    iVar46 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (iVar46 == 0x40000002) {
      uVar58 = 0;
    }
    else {
      bVar85 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar46 != 2)) {
        if (iVar46 == 1) {
          DVar52 = FUN_140ad26c0();
          DVar53 = GetCurrentThreadId();
          bVar85 = DVar52 == DVar53;
        }
        else {
          bVar85 = false;
        }
      }
      uVar58 = (ulonglong)(bVar85 ^ 1);
    }
    if ((double)*(int *)(lVar56 + uVar58 * 4) <= (dVar7 + 16777216.0) - dVar4) {
      FUN_1432371a4(1);
      QueryPerformanceCounter(&local_4b8);
      *(double *)(param_1 + 0x20) =
           (double)CONCAT44(local_4b8.s.HighPart,local_4b8.s.LowPart) * DAT_14c83f420 + 16777216.0;
      uVar48 = FUN_144972c84();
      *(undefined4 *)(param_1 + 0x28) = uVar48;
    }
  }
  if (DAT_14ca9f270 == (int *)0x0) {
    DAT_14ca9f270 = (int *)FUN_14001cc68(0x38,0x10);
    DAT_14ca9f270[4] = 0;
    DAT_14ca9f270[5] = 0;
    DAT_14ca9f270[6] = 0;
    DAT_14ca9f270[7] = 0;
    DAT_14ca9f270[0] = 0;
    DAT_14ca9f270[1] = 0;
    DAT_14ca9f270[2] = 0;
    DAT_14ca9f270[3] = 0;
    DAT_14ca9f270[8] = 0;
    DAT_14ca9f270[9] = 0;
    DAT_14ca9f270[10] = 0;
    DAT_14ca9f270[0xb] = 0;
    DAT_14ca9f270[0xc] = 0;
    DAT_14ca9f270[0xd] = 0;
    *(undefined ***)(DAT_14ca9f270 + 6) = &PTR_FUN_14a399cd0;
    DAT_14ca9f270[0xc] = 0;
  }
  piVar73 = DAT_14ca9f270;
  uVar70 = 0;
  local_620 = lVar80;
  if (DAT_14ca9f270[4] < 1) {
    lVar80 = 0;
  }
  else {
    plVar74 = (longlong *)(DAT_14ca9f270 + 2);
    lVar80 = 0;
    do {
      lVar56 = (longlong)(int)uVar70 * 0x208;
      cVar45 = FUN_140331224(*(undefined8 *)(*plVar74 + 0x1f8 + lVar56));
      if (cVar45 == '\0') {
        uVar70 = uVar70 + 1;
      }
      else {
        FUN_1407e8aa4(*plVar74 + lVar56);
        lVar71 = *plVar74;
        lVar64 = *(longlong *)(lVar71 + 0x1f8 + lVar56);
        if (lVar64 != 0) {
          FUN_1404d52d8(lVar64);
          FUN_1400020a8(lVar64);
          lVar71 = *plVar74;
        }
        *(undefined8 *)(lVar71 + 0x1f8 + lVar56) = 0;
        FUN_147442dd6(plVar74,uVar70);
        lVar80 = lVar80 + 1;
      }
    } while (uVar70 < (uint)piVar73[4]);
    if ((piVar73[4] == 0) && (piVar73[5] != 0)) {
      FUN_147442e42(plVar74);
    }
  }
  if ((0 < piVar73[0xc]) && (*(longlong **)(piVar73 + 8) != (longlong *)0x0)) {
    plVar74 = *(longlong **)(piVar73 + 8);
    do {
      lVar56 = *plVar74;
      plVar57 = (longlong *)plVar74[1];
      if ((*(char *)(lVar56 + 0x1c) != '\0') ||
         (cVar45 = FUN_140331224(*(undefined8 *)(lVar56 + 0x10)), cVar45 != '\0')) {
        if (lVar56 != 0) {
          FUN_1404d5224(lVar56);
          FUN_1400020a8(lVar56);
        }
        FUN_141790cc6(piVar73 + 6,plVar74);
        lVar80 = lVar80 + 1;
      }
      plVar74 = plVar57;
    } while (plVar57 != (longlong *)0x0);
  }
  lVar56 = local_620;
  if (0 < lVar80) {
    LOCK();
    *piVar73 = *piVar73 - (int)lVar80;
    UNLOCK();
  }
  if (local_620 != 0) {
    if (0.0 < DAT_14ca9f268) {
      QueryPerformanceCounter(&local_4b8);
      DAT_14ca9f238 =
           (float)(((double)CONCAT44(local_4b8.s.HighPart,local_4b8.s.LowPart) * DAT_14c83f420 +
                   16777216.0) - DAT_14ca9f268);
    }
    if (((DAT_14ca9f268 == 0.0) && (!NAN(DAT_14ca9f268))) &&
       ((*(int *)(lVar56 + 0xf0) != 0 ||
        ((*(int *)(lVar56 + 0x60) != 0 || (*(int *)(lVar56 + 0x40) != 0)))))) {
      QueryPerformanceCounter(&local_4b8);
      DAT_14ca9f268 =
           (double)CONCAT44(local_4b8.s.HighPart,local_4b8.s.LowPart) * DAT_14c83f420 + 16777216.0;
    }
    if (*(int *)(lVar56 + 0xf0) != 0) {
      FUN_147441e24(lVar56 + 0x38,lVar56 + 0xe8);
      FUN_1415146de(*(undefined8 *)(lVar56 + 0xe8),*(undefined4 *)(lVar56 + 0xf0));
      *(undefined4 *)(lVar56 + 0xf0) = 0;
      if (*(int *)(lVar56 + 0xf4) != 0) {
        FUN_147443fe4(lVar56 + 0xe8);
      }
    }
    local_608 = (longlong *)(lVar56 + 0x18);
    if (*(int *)(lVar56 + 0x20) != 0) {
      uVar70 = 0;
      do {
        lVar80 = (longlong)(int)uVar70 * 0x208;
        cVar45 = FUN_140331224(*(undefined8 *)(*local_608 + 0x1f8 + lVar80));
        if (cVar45 == '\0') {
          uVar70 = uVar70 + 1;
        }
        else {
          lVar71 = *(longlong *)(lVar56 + 0x18) + lVar80;
          iVar46 = *(int *)(lVar56 + 0x30);
          *(uint *)(lVar56 + 0x30) = iVar46 + 1U;
          if (*(uint *)(lVar56 + 0x34) < iVar46 + 1U) {
            FUN_141790e16(lVar56 + 0x28,iVar46);
          }
          lVar64 = *(longlong *)(lVar56 + 0x28);
          lVar8 = (longlong)iVar46 * 0x208;
          FUN_14143db70(lVar64 + lVar8,lVar71);
          *(undefined1 *)(lVar64 + 0x200 + lVar8) = *(undefined1 *)(lVar71 + 0x200);
          *(undefined8 *)(lVar64 + 0x1f8 + lVar8) = *(undefined8 *)(lVar71 + 0x1f8);
          iVar46 = *(int *)(lVar56 + 0x20);
          if (~uVar70 + iVar46 != 0) {
            memmove((void *)(*(longlong *)(lVar56 + 0x18) + lVar80),
                    (void *)(*(longlong *)(lVar56 + 0x18) + lVar80 + 0x208),
                    (longlong)(int)(~uVar70 + iVar46) * 0x208);
            iVar46 = *(int *)(lVar56 + 0x20);
          }
          *(int *)(lVar56 + 0x20) = iVar46 + -1;
          FUN_141790f90(local_608);
        }
      } while (uVar70 < *(uint *)(lVar56 + 0x20));
    }
    local_5e0 = lpCriticalSection;
    local_258 = (undefined1 *)CONCAT44(local_258._4_4_,(DWORD)local_258);
    uStack_250 = (longlong *)CONCAT44(uStack_250._4_4_,(undefined4)uStack_250);
    if ((*(int *)(lVar56 + 0x30) != 0) &&
       (local_258 = (undefined1 *)CONCAT44(local_258._4_4_,(DWORD)local_258),
       uStack_250 = (longlong *)CONCAT44(uStack_250._4_4_,(undefined4)uStack_250),
       DAT_14ca813ac < DAT_14c760e68)) {
      QueryPerformanceCounter(&local_4b8);
      piVar73 = (int *)CONCAT44(local_4b8.s.HighPart,local_4b8.s.LowPart);
      uVar70 = DAT_14ca9f230;
      if ((int)*(uint *)(lVar56 + 0x30) < (int)DAT_14ca9f230) {
        uVar70 = *(uint *)(lVar56 + 0x30);
      }
      FUN_14144846e();
      if (uVar70 == 0) {
        LOCK();
        UNLOCK();
      }
      else {
        plVar74 = (longlong *)(lVar56 + 0x28);
        local_5d8 = (int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60);
        uVar81 = 0;
        local_628 = (longlong *)CONCAT44(local_628._4_4_,uVar70);
        pcVar77 = QueryPerformanceCounter_exref;
        local_618 = plVar74;
        local_5e8 = piVar73;
        do {
          piVar73 = (int *)((longlong)(int)uVar81 * 0x208 + *plVar74);
          local_5cc = FUN_140975dc5(piVar73);
          (*pcVar77)(&local_4b8);
          local_600 = CONCAT44(local_4b8.s.HighPart,local_4b8.s.LowPart);
          cVar45 = FUN_1431dc74a(piVar73);
          if (cVar45 == '\0') {
LAB_143238f40:
            (*pcVar77)(&local_4b8);
            LOCK();
            DAT_14ca9f258 = DAT_14ca9f258 + 1;
            UNLOCK();
            LOCK();
            DAT_14ca9f260 =
                 DAT_14ca9f260 + (CONCAT44(local_4b8.s.HighPart,local_4b8.s.LowPart) - local_600);
            UNLOCK();
          }
          else {
            iVar46 = *piVar73;
            if (iVar46 == 0) {
              if ((DAT_14ca9f208 == 0) && (DAT_14ca9a668 != 0)) {
                FUN_1407ee3f2(DAT_14ca9a668,&local_4b8,5,piVar73 + 1);
                lVar80 = CONCAT44(local_4b8.s.HighPart,local_4b8.s.LowPart);
                if (lVar80 != 0) {
                  FUN_140029432(&DAT_14ca85100,lVar80,1);
                  LOCK();
                  puVar83 = (uint *)(lVar80 + 8);
                  uVar82 = *puVar83;
                  *puVar83 = *puVar83 - 1;
                  UNLOCK();
                  if ((uVar82 & 0x3fffffff) == 1) {
                    puVar83 = (uint *)(lVar80 + 8);
                    LOCK();
                    uVar82 = *puVar83;
                    *puVar83 = *puVar83 | 0x40000000;
                    UNLOCK();
                    if ((uVar82 >> 0x1e & 1) == 0) {
                      bVar65 = *(byte *)(lVar80 + 0xd);
                      plVar59 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar59[1] = lVar80;
                      plVar57 = DAT_14ca843c0;
                      plVar55 = DAT_14ca843c8;
                      if ((bVar65 & 2) == 0) {
                        do {
                          *plVar59 = (longlong)plVar57;
                          LOCK();
                          bVar85 = plVar57 != DAT_14ca843c0;
                          plVar55 = plVar59;
                          if (bVar85) {
                            plVar57 = DAT_14ca843c0;
                            plVar55 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar55;
                          UNLOCK();
                        } while (bVar85);
                      }
                      else {
                        do {
                          *plVar59 = (longlong)plVar55;
                          LOCK();
                          bVar85 = plVar55 != DAT_14ca843c8;
                          plVar57 = plVar59;
                          if (bVar85) {
                            plVar55 = DAT_14ca843c8;
                            plVar57 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar57;
                          UNLOCK();
                        } while (bVar85);
                      }
                    }
                  }
                }
              }
              goto LAB_143238f40;
            }
            if (iVar46 == 2) {
              if (DAT_14c760e64 == '\0') {
                if (*(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x110) < DAT_14ca97070) {
                  FUN_144b3d300(&DAT_14ca97070);
                  if (DAT_14ca97070 == -1) {
                    if (DAT_14c8407a8 == (longlong *)0x0) {
                      FUN_1414b00ea();
                    }
                    plVar74 = (longlong *)
                              (**(code **)(*DAT_14c8407a8 + 200))
                                        (DAT_14c8407a8,L"r.Raytracing.Enable",1);
                    if (plVar74 == (longlong *)0x0) {
                      DAT_14ca97068 = 0;
                    }
                    else {
                      DAT_14ca97068 = (**(code **)(*plVar74 + 0x68))(plVar74);
                    }
                    _Init_thread_footer(&DAT_14ca97070);
                    plVar74 = local_618;
                    uVar70 = (uint)local_628;
                  }
                }
                lVar80 = DAT_14ca97068;
                bVar85 = true;
                cVar45 = DAT_14ca96da8;
                if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
                  iVar46 = *local_5d8;
                  cVar45 = '\x02';
                  if (((iVar46 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar46 == 2)) {
                    uVar58 = 0;
                  }
                  else if (iVar46 == 1) {
                    DVar52 = FUN_140ad26c0();
                    DVar53 = GetCurrentThreadId();
                    uVar58 = (ulonglong)(DVar52 != DVar53);
                    cVar45 = DAT_14ca96da8;
                  }
                  else {
                    uVar58 = 1;
                  }
                  bVar85 = *(int *)(lVar80 + uVar58 * 4) != 0;
                  plVar74 = local_618;
                  uVar70 = (uint)local_628;
                }
                pcVar77 = QueryPerformanceCounter_exref;
                puVar67 = (ulonglong *)&local_4a8;
                if (((bVar85) && (cVar45 != '\0')) && (DAT_14ca9a668 != 0)) {
                  FUN_1407ee3f2(DAT_14ca9a668,&local_4b8,(char)piVar73[0x7c],piVar73 + 0x76);
                  uVar48 = local_4b8.s.LowPart;
                  lVar80 = CONCAT44(local_4b8.s.HighPart,local_4b8.s.LowPart);
                  if (lVar80 != 0) {
                    local_4b8.s.LowPart = 8;
                    uStack_4b0._0_4_ = CONCAT31(uStack_4b0._1_3_,1);
                    iStack_460 = 0;
                    iStack_45c = 0;
                    iStack_458 = 0;
                    uStack_450 = 0;
                    uStack_44c = 0;
                    iStack_448 = 0;
                    iStack_440 = 0;
                    local_43c = 0;
                    iStack_438 = 0;
                    local_498 = 0;
                    iStack_490 = 0;
                    uStack_48c = 0;
                    local_4a8 = 0;
                    iStack_4a4 = 0;
                    uStack_4a0 = 0;
                    uStack_49c = 0;
                    uStack_487 = 0;
                    uStack_470 = 0;
                    uStack_46c = 0;
                    local_468 = 0;
                    uStack_480 = 0;
                    iStack_47c = 0;
                    local_478._0_4_ = 0;
                    local_478._4_4_ = 0;
                    local_488 = 1;
                    LVar6 = *(LONG *)(lVar80 + 0xa4);
                    local_258._0_4_ = uVar48;
                    local_258._4_4_ = local_4b8.s.HighPart;
                    if (*(byte *)(piVar73 + 0x7c) - 6 < 4) {
                      plVar57 = (longlong *)&uStack_470;
                      piVar68 = &local_468;
                      switch((uint)*(byte *)(piVar73 + 0x7c)) {
                      case 7:
                        plVar57 = (longlong *)&iStack_460;
                        piVar68 = &iStack_458;
                        puVar67 = (ulonglong *)&uStack_4a0;
                        break;
                      case 8:
                        plVar57 = (longlong *)&uStack_450;
                        piVar68 = &iStack_448;
                        puVar67 = &local_498;
                        break;
                      case 9:
                        plVar57 = (longlong *)&iStack_440;
                        piVar68 = &iStack_438;
                        puVar67 = (ulonglong *)&iStack_490;
                      }
                      *plVar57 = (longlong)&local_258;
                      *piVar68 = 1;
                      *puVar67 = *(longlong *)(lVar80 + 0x88) + 0xda48bfd15ce60c08U ^
                                 0x4f1a08f64cae0c3d;
                    }
                    local_4b8.s.HighPart = LVar6;
                    FUN_1431e3d59(&DAT_14ca85100,&local_4b8,0);
                    lVar56 = CONCAT44(iStack_47c,uStack_480);
                    if (lVar56 != 0) {
                      LOCK();
                      puVar83 = (uint *)(lVar56 + 8);
                      uVar82 = *puVar83;
                      *puVar83 = *puVar83 - 1;
                      UNLOCK();
                      if ((uVar82 & 0x3fffffff) == 1) {
                        puVar83 = (uint *)(lVar56 + 8);
                        LOCK();
                        uVar82 = *puVar83;
                        *puVar83 = *puVar83 | 0x40000000;
                        UNLOCK();
                        if ((uVar82 >> 0x1e & 1) == 0) {
                          bVar65 = *(byte *)(lVar56 + 0xd);
                          plVar59 = (longlong *)FUN_14001cc68(0x10,8);
                          plVar59[1] = lVar56;
                          plVar57 = DAT_14ca843c0;
                          plVar55 = DAT_14ca843c8;
                          if ((bVar65 & 2) == 0) {
                            do {
                              *plVar59 = (longlong)plVar57;
                              LOCK();
                              bVar85 = plVar57 != DAT_14ca843c0;
                              plVar55 = plVar59;
                              if (bVar85) {
                                plVar57 = DAT_14ca843c0;
                                plVar55 = DAT_14ca843c0;
                              }
                              DAT_14ca843c0 = plVar55;
                              UNLOCK();
                            } while (bVar85);
                          }
                          else {
                            do {
                              *plVar59 = (longlong)plVar55;
                              LOCK();
                              bVar85 = plVar55 != DAT_14ca843c8;
                              plVar57 = plVar59;
                              if (bVar85) {
                                plVar55 = DAT_14ca843c8;
                                plVar57 = DAT_14ca843c8;
                              }
                              DAT_14ca843c8 = plVar57;
                              UNLOCK();
                            } while (bVar85);
                          }
                        }
                      }
                    }
                    LOCK();
                    puVar83 = (uint *)(lVar80 + 8);
                    uVar82 = *puVar83;
                    *puVar83 = *puVar83 - 1;
                    pcVar77 = QueryPerformanceCounter_exref;
                    UNLOCK();
                    local_258 = (undefined1 *)CONCAT44(local_258._4_4_,(DWORD)local_258);
                    if ((uVar82 & 0x3fffffff) == 1) {
                      puVar83 = (uint *)(lVar80 + 8);
                      LOCK();
                      uVar82 = *puVar83;
                      *puVar83 = *puVar83 | 0x40000000;
                      UNLOCK();
                      local_258 = (undefined1 *)CONCAT44(local_258._4_4_,(DWORD)local_258);
                      if ((uVar82 >> 0x1e & 1) == 0) {
                        bVar65 = *(byte *)(lVar80 + 0xd);
                        plVar59 = (longlong *)FUN_14001cc68(0x10,8);
                        plVar59[1] = lVar80;
                        plVar57 = DAT_14ca843c0;
                        plVar55 = DAT_14ca843c8;
                        if ((bVar65 & 2) == 0) {
                          do {
                            *plVar59 = (longlong)plVar57;
                            LOCK();
                            bVar85 = plVar57 != DAT_14ca843c0;
                            plVar55 = plVar59;
                            if (bVar85) {
                              plVar57 = DAT_14ca843c0;
                              plVar55 = DAT_14ca843c0;
                            }
                            DAT_14ca843c0 = plVar55;
                            UNLOCK();
                          } while (bVar85);
                        }
                        else {
                          do {
                            *plVar59 = (longlong)plVar55;
                            LOCK();
                            bVar85 = plVar55 != DAT_14ca843c8;
                            plVar57 = plVar59;
                            if (bVar85) {
                              plVar55 = DAT_14ca843c8;
                              plVar57 = DAT_14ca843c8;
                            }
                            DAT_14ca843c8 = plVar57;
                            UNLOCK();
                            local_258 = (undefined1 *)CONCAT44(local_258._4_4_,(DWORD)local_258);
                          } while (bVar85);
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_143238f40;
            }
            if (iVar46 != 1) goto LAB_143238f40;
            local_478._0_4_ = 0;
            local_478._4_4_ = 0;
            uStack_470 = 0;
            uStack_46c = 0;
            local_488 = 0;
            uStack_487 = 0;
            uStack_486 = 0;
            uStack_484 = 0;
            uStack_480 = 0;
            iStack_47c = 0;
            local_498 = 0;
            iStack_490 = 0;
            uStack_48c = 0;
            local_4a8 = 0;
            iStack_4a4 = 0;
            uStack_4a0 = 0;
            uStack_49c = 0;
            local_4b8.s.LowPart = 0;
            local_4b8.s.HighPart = 0;
            uStack_4b0._0_4_ = 0;
            uStack_4b0._4_4_ = 0;
            local_468 = 0;
            uStack_464 = 0;
            iStack_41c = 0;
            iStack_418 = 0;
            iStack_414 = 0;
            uStack_410 = 0;
            uStack_42c = 0;
            uStack_428 = 0;
            uStack_424 = 0;
            iStack_420 = 0;
            local_43c = 0;
            iStack_438 = 0;
            uStack_434 = 0;
            uStack_430 = 0;
            uStack_44c = 0;
            iStack_448 = 0;
            uStack_444 = 0;
            iStack_440 = 0;
            iStack_45c = 0;
            iStack_458 = 0;
            iStack_454 = 0;
            uStack_450 = 0;
            local_3f8 = 0;
            local_408 = 0;
            uStack_400 = 0;
            local_3f0 = 1;
            local_3e8 = 0;
            local_258._0_4_ = 0;
            local_258._4_4_ = 0;
            local_258 = (undefined1 *)0x0;
            uStack_250._0_4_ = 0;
            uStack_250._4_4_ = 0;
            uStack_250 = (longlong *)0x0;
            local_248 = 0;
            if (piVar73[0x19] == 0 &&
                *(undefined1 (*) [16])(piVar73 + 0x15) == (undefined1  [16])0x0) {
              uVar54 = FUN_14486d71a(piVar73 + 0x1f);
              local_4b8.s.LowPart = (DWORD)uVar54;
              local_4b8.s.HighPart = (LONG)((ulonglong)uVar54 >> 0x20);
              local_258._0_4_ = 0;
              local_258._4_4_ = 0;
              uStack_250._0_4_ = 0;
              uStack_250._4_4_ = 0;
              local_248 = 0;
              if (piVar73[10] == 0 && *(undefined1 (*) [16])(piVar73 + 6) == (undefined1  [16])0x0)
              {
                lVar80 = 0;
              }
              else {
                if (DAT_14ca9a668 == 0) {
                  lVar80 = 0;
                }
                else {
                  FUN_1407ee3f2(DAT_14ca9a668,&local_258,0,piVar73 + 6);
                  lVar80 = CONCAT44(local_258._4_4_,(DWORD)local_258);
                }
                uStack_4b0._0_4_ = (undefined4)lVar80;
                uStack_4b0._4_4_ = (undefined4)((ulonglong)lVar80 >> 0x20);
              }
              local_258._0_4_ = 0;
              local_258._4_4_ = 0;
              uStack_250._0_4_ = 0;
              uStack_250._4_4_ = 0;
              local_248 = 0;
              if (piVar73[0x14] != 0 ||
                  *(undefined1 (*) [16])(piVar73 + 0x10) != (undefined1  [16])0x0) {
                if (DAT_14ca9a668 == 0) {
                  iStack_490 = 0;
                  uStack_48c = 0;
                }
                else {
                  FUN_1407ee3f2(DAT_14ca9a668,&local_258,4,piVar73 + 0x10);
                  lVar56 = CONCAT44(local_258._4_4_,(DWORD)local_258);
                  iStack_490 = (DWORD)local_258;
                  uStack_48c = local_258._4_4_;
                  if (lVar56 != 0) {
                    LOCK();
                    puVar83 = (uint *)(lVar56 + 8);
                    uVar70 = *puVar83;
                    *puVar83 = *puVar83 - 1;
                    UNLOCK();
                    if ((uVar70 & 0x3fffffff) == 1) {
                      puVar83 = (uint *)(lVar56 + 8);
                      LOCK();
                      uVar70 = *puVar83;
                      *puVar83 = *puVar83 | 0x40000000;
                      UNLOCK();
                      if ((uVar70 >> 0x1e & 1) == 0) {
                        bVar65 = *(byte *)(lVar56 + 0xd);
                        plVar55 = (longlong *)FUN_14001cc68(0x10,8);
                        plVar55[1] = lVar56;
                        plVar74 = DAT_14ca843c0;
                        plVar57 = DAT_14ca843c8;
                        if ((bVar65 & 2) == 0) {
                          do {
                            *plVar55 = (longlong)plVar74;
                            LOCK();
                            bVar85 = plVar74 != DAT_14ca843c0;
                            plVar57 = plVar55;
                            if (bVar85) {
                              plVar74 = DAT_14ca843c0;
                              plVar57 = DAT_14ca843c0;
                            }
                            DAT_14ca843c0 = plVar57;
                            UNLOCK();
                          } while (bVar85);
                        }
                        else {
                          do {
                            *plVar55 = (longlong)plVar57;
                            LOCK();
                            bVar85 = plVar57 != DAT_14ca843c8;
                            plVar74 = plVar55;
                            if (bVar85) {
                              plVar57 = DAT_14ca843c8;
                              plVar74 = DAT_14ca843c8;
                            }
                            DAT_14ca843c8 = plVar74;
                            UNLOCK();
                          } while (bVar85);
                        }
                      }
                    }
                  }
                }
              }
              if (lVar80 != 0) {
                LOCK();
                puVar83 = (uint *)(lVar80 + 8);
                uVar70 = *puVar83;
                *puVar83 = *puVar83 - 1;
                UNLOCK();
                if ((uVar70 & 0x3fffffff) == 1) {
                  puVar83 = (uint *)(lVar80 + 8);
                  LOCK();
                  uVar70 = *puVar83;
                  *puVar83 = *puVar83 | 0x40000000;
                  UNLOCK();
                  if ((uVar70 >> 0x1e & 1) == 0) {
                    bVar65 = *(byte *)(lVar80 + 0xd);
                    plVar55 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar55[1] = lVar80;
                    plVar74 = DAT_14ca843c0;
                    plVar57 = DAT_14ca843c8;
                    if ((bVar65 & 2) == 0) {
                      do {
                        *plVar55 = (longlong)plVar74;
                        LOCK();
                        bVar85 = plVar74 != DAT_14ca843c0;
                        plVar57 = plVar55;
                        if (bVar85) {
                          plVar74 = DAT_14ca843c0;
                          plVar57 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar57;
                        UNLOCK();
                      } while (bVar85);
                    }
                    else {
                      do {
                        *plVar55 = (longlong)plVar57;
                        LOCK();
                        bVar85 = plVar57 != DAT_14ca843c8;
                        plVar74 = plVar55;
                        if (bVar85) {
                          plVar57 = DAT_14ca843c8;
                          plVar74 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar74;
                        UNLOCK();
                      } while (bVar85);
                    }
                  }
                }
              }
LAB_143238648:
              local_258._0_4_ = 0;
              local_258._4_4_ = 0;
              uStack_250._0_4_ = 0;
              uStack_250._4_4_ = 0;
              local_248 = 0;
              if (piVar73[0xf] == 0 &&
                  *(undefined1 (*) [16])(piVar73 + 0xb) == (undefined1  [16])0x0) {
                local_610 = 0;
              }
              else {
                if (DAT_14ca9a668 == 0) {
                  local_610 = 0;
                }
                else {
                  FUN_1407ee3f2(DAT_14ca9a668,&local_258,3,piVar73 + 0xb);
                  local_610 = CONCAT44(local_258._4_4_,(DWORD)local_258);
                }
                local_4a8 = (undefined4)local_610;
                iStack_4a4 = (int)((ulonglong)local_610 >> 0x20);
              }
              lVar80 = DAT_14ca9f278;
              pcVar77 = QueryPerformanceCounter_exref;
              piVar68 = piVar73 + 0x43;
              plVar74 = (longlong *)(DAT_14ca9f278 + 0x178);
              uVar48 = FUN_144a86616(piVar68);
              iVar46 = FUN_140622c24(plVar74,uVar48,piVar68);
              if ((iVar46 == -1) ||
                 (lVar56 = (longlong)iVar46 * 0x50 + *plVar74, plVar57 = (longlong *)(lVar56 + 0x40)
                 , plVar57 == (longlong *)0x0 || lVar56 == 0)) {
                (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,&local_258,piVar68);
                LOCK();
                piVar1 = (int *)(CONCAT44(local_258._4_4_,(DWORD)local_258) + 8);
                *piVar1 = *piVar1 + 1;
                UNLOCK();
                puVar75 = (undefined1 *)CONCAT44(local_258._4_4_,(DWORD)local_258);
                local_630 = plVar74;
                if (*(int *)(lVar80 + 0x1ac) == 0) {
                  iVar46 = *(int *)(lVar80 + 0x180);
                  *(int *)(lVar80 + 0x180) = iVar46 + 1;
                  if (*(int *)(lVar80 + 0x184) == iVar46) {
                    FUN_1406fba42(plVar74,iVar46);
                  }
                  iVar47 = *(int *)(lVar80 + 0x1a0);
                  if (iVar47 == 0) {
                    iVar49 = -1;
                  }
                  else {
                    iVar49 = iVar47 + 0x1e;
                    if (-1 < iVar47 + -1) {
                      iVar49 = iVar47 + -1;
                    }
                    iVar49 = iVar49 >> 5;
                  }
                  lVar71 = lVar80 + 0x188;
                  iVar66 = iVar47 + 1;
                  iVar78 = iVar47 + 0x1f;
                  if (-1 < iVar47) {
                    iVar78 = iVar47;
                  }
                  if (iVar78 >> 5 == iVar49) {
                    *(int *)(lVar80 + 0x1a0) = iVar66;
                  }
                  else {
                    if (*(int *)(lVar80 + 0x1a4) <= iVar47) {
                      iVar49 = iVar47;
                      local_5f0 = puVar75;
                      if (iVar47 + 0x20U < 0xa0) {
                        iVar66 = 0x80;
                      }
                      else {
                        uVar70 = iVar47 + 0x20U >> 5;
                        if (*(int *)(lVar80 + 0x1a4) + 0x1fU < 0xa0) {
                          uVar82 = 4;
                          if (4 < uVar70) {
                            uVar82 = uVar70;
                          }
                        }
                        else {
                          uVar82 = uVar70 + (uVar70 * 3 >> 3) + 0x10;
                        }
                        uVar58 = (ulonglong)(uVar82 * 4);
                        if (DAT_14c872d28 != (longlong *)0x0) {
                          if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                            uVar50 = (uint)(uVar58 + 0xf);
                            if (uVar82 < 0x1ffd) {
                              uVar58 = (ulonglong)
                                       (ushort)(&DAT_14c841d90)
                                               [0x32 - (byte)(&DAT_14c841e00)[uVar50 >> 4]];
                            }
                            else {
                              uVar84 = uVar58 + 0xf & 0xfffffffffffffff0;
                              if (uVar84 < 0x7ff1) {
                                bVar65 = (&DAT_14c841e00)[uVar50 >> 4];
                                uVar69 = 0x32;
                                if (0x32 < bVar65) {
                                  uVar69 = (ulonglong)bVar65;
                                }
                                uVar79 = 0x32 - (ulonglong)bVar65;
                                do {
                                  uVar58 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar79 & 0xffffffff];
                                  if (((&DAT_14c841d90)[uVar79 & 0xffffffff] & 0xf) == 0)
                                  goto LAB_1432393c6;
                                  lVar56 = uVar69 + 1 + uVar79;
                                  uVar79 = uVar79 - 1;
                                } while (lVar56 != 0x33);
                              }
                              uVar58 = (ulonglong)DAT_14c841df8;
                              if (DAT_14c841df8 < 0x11) {
                                uVar58 = 0x10;
                              }
                              uVar58 = -uVar58 & (uVar84 + uVar58) - 1;
                            }
                          }
                          else {
                            local_5f8 = (ulonglong)uVar70;
                            uVar58 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar58,0);
                            uVar70 = (uint)local_5f8;
                            iVar49 = *(int *)(lVar80 + 0x1a0);
                          }
                        }
LAB_1432393c6:
                        iVar51 = (int)(uVar58 >> 2);
                        iVar66 = iVar51 << 5;
                        if (iVar51 < (int)uVar70) {
                          iVar66 = -0x20;
                        }
                      }
                      *(int *)(lVar80 + 0x1a4) = iVar66;
                      FUN_1446efbd8(lVar71,iVar49);
                      iVar66 = *(int *)(lVar80 + 0x1a0) + 1;
                      puVar75 = local_5f0;
                    }
                    iVar49 = iVar66 + 0x1f;
                    if (-1 < iVar66) {
                      iVar49 = iVar66;
                    }
                    *(int *)(lVar80 + 0x1a0) = iVar66;
                    if (iVar66 % 0x20 != 0) {
                      lVar56 = *(longlong *)(lVar80 + 0x198);
                      if (*(longlong *)(lVar80 + 0x198) == 0) {
                        lVar56 = lVar71;
                      }
                      bVar65 = -(char)(iVar66 % 0x20);
                      *(uint *)(lVar56 + (longlong)(iVar49 >> 5) * 4) =
                           (uint)(*(int *)(lVar56 + (longlong)(iVar49 >> 5) * 4) << (bVar65 & 0x1f))
                           >> (bVar65 & 0x1f);
                    }
                  }
                  lVar56 = (longlong)iVar46;
                  if (*(longlong *)(lVar80 + 0x198) != 0) {
                    lVar71 = *(longlong *)(lVar80 + 0x198);
                  }
                  bVar65 = (byte)iVar47 & 0x1f;
                  puVar83 = (uint *)(lVar71 + (longlong)(iVar78 >> 5) * 4);
                  *puVar83 = *puVar83 & (-2 << bVar65 | 0xfffffffeU >> 0x20 - bVar65);
                }
                else {
                  iVar46 = *(int *)(lVar80 + 0x1a8);
                  lVar56 = (longlong)iVar46;
                  iVar47 = *(int *)(*(longlong *)(lVar80 + 0x178) + 4 + lVar56 * 0x50);
                  *(int *)(lVar80 + 0x1a8) = iVar47;
                  iVar49 = *(int *)(lVar80 + 0x1ac) + -1;
                  *(int *)(lVar80 + 0x1ac) = iVar49;
                  if (iVar49 != 0) {
                    *(undefined4 *)(*(longlong *)(lVar80 + 0x178) + (longlong)iVar47 * 0x50) =
                         0xffffffff;
                  }
                }
                lVar71 = lVar80 + 0x188;
                if (*(longlong *)(lVar80 + 0x198) != 0) {
                  lVar71 = *(longlong *)(lVar80 + 0x198);
                }
                iVar47 = iVar46 + 0x1f;
                if (-1 < iVar46) {
                  iVar47 = iVar46;
                }
                puVar83 = (uint *)(lVar71 + (longlong)(iVar47 >> 5) * 4);
                *puVar83 = *puVar83 | 1 << ((byte)iVar46 & 0x1f);
                iVar47 = 1;
                lVar71 = *(longlong *)(lVar80 + 0x178);
                lVar56 = lVar56 * 0x50;
                pvVar72 = (void *)(lVar71 + lVar56);
                uVar54 = *(undefined8 *)piVar68;
                uVar9 = *(undefined8 *)(piVar73 + 0x45);
                uVar10 = *(undefined8 *)(piVar73 + 0x47);
                uVar11 = *(undefined8 *)(piVar73 + 0x49);
                uVar14 = *(undefined8 *)(piVar73 + 0x4b);
                uVar15 = *(undefined8 *)(piVar73 + 0x4d);
                uVar48 = *(undefined4 *)((longlong)piVar73 + 0x13a);
                uVar12 = *(undefined4 *)((longlong)piVar73 + 0x13e);
                uVar13 = *(undefined4 *)((longlong)piVar73 + 0x142);
                puVar3 = (undefined4 *)(lVar71 + 0x2a + lVar56);
                *puVar3 = *(undefined4 *)((longlong)piVar73 + 0x136);
                puVar3[1] = uVar48;
                puVar3[2] = uVar12;
                puVar3[3] = uVar13;
                puVar62 = (undefined8 *)(lVar71 + 0x20 + lVar56);
                *puVar62 = uVar14;
                puVar62[1] = uVar15;
                puVar62 = (undefined8 *)(lVar71 + 0x10 + lVar56);
                *puVar62 = uVar10;
                puVar62[1] = uVar11;
                *(undefined8 *)(lVar71 + lVar56) = uVar54;
                ((undefined8 *)(lVar71 + lVar56))[1] = uVar9;
                *(undefined1 **)(lVar71 + 0x40 + lVar56) = puVar75;
                *(undefined4 *)(lVar71 + 0x48 + lVar56) = 0xffffffff;
                uVar70 = FUN_144a86616(pvVar72);
                uVar82 = *(int *)(lVar80 + 0x180) - *(int *)(lVar80 + 0x1ac);
                if (uVar82 == 1) {
LAB_1432388ab:
                  if (((int)uVar82 < 1) || (iVar47 <= *(int *)(lVar80 + 0x1c0))) {
                    uVar70 = *(int *)(lVar80 + 0x1c0) - 1U & uVar70;
                    *(uint *)((longlong)pvVar72 + 0x4c) = uVar70;
                    lVar56 = *(longlong *)(lVar80 + 0x1b8);
                    if (*(longlong *)(lVar80 + 0x1b8) == 0) {
                      lVar56 = lVar80 + 0x1b0;
                    }
                    *(undefined4 *)((longlong)pvVar72 + 0x48) =
                         *(undefined4 *)
                          (lVar56 + ((longlong)*(int *)(lVar80 + 0x1c0) - 1U & (longlong)(int)uVar70
                                    ) * 4);
                    lVar56 = *(longlong *)(lVar80 + 0x1b8);
                    if (*(longlong *)(lVar80 + 0x1b8) == 0) {
                      lVar56 = lVar80 + 0x1b0;
                    }
                    *(int *)(lVar56 + ((longlong)*(int *)(lVar80 + 0x1c0) - 1U &
                                      (longlong)(int)uVar70) * 4) = iVar46;
                  }
                  else {
                    *(int *)(lVar80 + 0x1c0) = iVar47;
                    FUN_141448a96(local_630);
                  }
                }
                else {
                  iVar49 = FUN_140622c24(local_630,uVar70,pvVar72);
                  plVar74 = local_630;
                  if (iVar49 == -1) {
                    if (3 < uVar82) {
                      uVar58 = (ulonglong)(uVar82 & 0xfffffffe) + 0xf;
                      lVar56 = 0x3f;
                      if (uVar58 != 0) {
                        for (; uVar58 >> lVar56 == 0; lVar56 = lVar56 + -1) {
                        }
                      }
                      iVar47 = 1 << ((byte)lVar56 & 0x1f);
                    }
                    goto LAB_1432388ab;
                  }
                  memmove((void *)((longlong)iVar49 * 0x50 + *local_630),pvVar72,0x48);
                  FUN_1474449f8(plVar74,iVar46);
                }
                pcVar77 = QueryPerformanceCounter_exref;
                lVar80 = CONCAT44(local_258._4_4_,(DWORD)local_258);
                if (lVar80 != 0) {
                  LOCK();
                  puVar83 = (uint *)(lVar80 + 8);
                  uVar70 = *puVar83;
                  *puVar83 = *puVar83 - 1;
                  UNLOCK();
                  if ((uVar70 & 0x3fffffff) == 1) {
                    puVar83 = (uint *)(lVar80 + 8);
                    LOCK();
                    uVar70 = *puVar83;
                    *puVar83 = *puVar83 | 0x40000000;
                    UNLOCK();
                    if ((uVar70 >> 0x1e & 1) == 0) {
                      bVar65 = *(byte *)(lVar80 + 0xd);
                      plVar55 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar55[1] = lVar80;
                      plVar74 = DAT_14ca843c0;
                      plVar57 = DAT_14ca843c8;
                      if ((bVar65 & 2) == 0) {
                        do {
                          *plVar55 = (longlong)plVar74;
                          LOCK();
                          bVar85 = plVar74 != DAT_14ca843c0;
                          plVar57 = plVar55;
                          if (bVar85) {
                            plVar74 = DAT_14ca843c0;
                            plVar57 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar57;
                          UNLOCK();
                        } while (bVar85);
                      }
                      else {
                        do {
                          *plVar55 = (longlong)plVar57;
                          LOCK();
                          bVar85 = plVar57 != DAT_14ca843c8;
                          plVar74 = plVar55;
                          if (bVar85) {
                            plVar57 = DAT_14ca843c8;
                            plVar74 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar74;
                          UNLOCK();
                        } while (bVar85);
                      }
                    }
                  }
                }
              }
              else {
                lVar80 = *plVar57;
              }
              local_488 = (undefined1)lVar80;
              uStack_487 = (undefined1)((ulonglong)lVar80 >> 8);
              uStack_486 = (undefined2)((ulonglong)lVar80 >> 0x10);
              uStack_484 = (undefined4)((ulonglong)lVar80 >> 0x20);
              plVar74 = (longlong *)(DAT_14ca9f278 + 0x1c8);
              local_5bc = *(undefined2 *)((longlong)piVar73 + 0x152);
              local_5c8 = (undefined1)(short)piVar73[0x54];
              uStack_5c7 = (undefined1)((ushort)(short)piVar73[0x54] >> 8);
              uStack_5c4 = (undefined4)*(undefined8 *)(piVar73 + 0x52);
              uStack_5c0 = (undefined4)((ulonglong)*(undefined8 *)(piVar73 + 0x52) >> 0x20);
              local_5ba = 0;
              uVar48 = FUN_144a74281(&local_5c8);
              iVar46 = FUN_140e7f160(plVar74,uVar48,&local_5c8);
              if (iVar46 == -1) {
LAB_143239076:
                (**(code **)(*DAT_14ca83900 + 0x50))(DAT_14ca83900,&local_518,&local_5c8);
                LOCK();
                *(int *)(local_518 + 8) = *(int *)(local_518 + 8) + 1;
                UNLOCK();
                local_2a8 = local_518;
                uStack_250 = &local_2a8;
                local_258 = &local_5c8;
                FUN_1457b9db2(plVar74,&local_51c,&local_258);
                lVar80 = local_518;
                if (local_518 != 0) {
                  LOCK();
                  puVar83 = (uint *)(local_518 + 8);
                  uVar70 = *puVar83;
                  *puVar83 = *puVar83 - 1;
                  UNLOCK();
                  if ((uVar70 & 0x3fffffff) == 1) {
                    puVar83 = (uint *)(local_518 + 8);
                    LOCK();
                    uVar70 = *puVar83;
                    *puVar83 = *puVar83 | 0x40000000;
                    UNLOCK();
                    if ((uVar70 >> 0x1e & 1) == 0) {
                      bVar65 = *(byte *)(local_518 + 0xd);
                      plVar55 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar55[1] = lVar80;
                      plVar74 = DAT_14ca843c0;
                      plVar57 = DAT_14ca843c8;
                      if ((bVar65 & 2) == 0) {
                        do {
                          *plVar55 = (longlong)plVar74;
                          LOCK();
                          bVar85 = plVar74 != DAT_14ca843c0;
                          plVar57 = plVar55;
                          if (bVar85) {
                            plVar74 = DAT_14ca843c0;
                            plVar57 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar57;
                          UNLOCK();
                        } while (bVar85);
                      }
                      else {
                        do {
                          *plVar55 = (longlong)plVar57;
                          LOCK();
                          bVar85 = plVar57 != DAT_14ca843c8;
                          plVar74 = plVar55;
                          if (bVar85) {
                            plVar57 = DAT_14ca843c8;
                            plVar74 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar74;
                          UNLOCK();
                        } while (bVar85);
                      }
                    }
                  }
                }
              }
              else {
                if ((*plVar74 + (longlong)iVar46 * 0x20 == 0) ||
                   (plVar57 = (longlong *)((longlong)iVar46 * 0x20 + *plVar74 + 0x10),
                   plVar57 == (longlong *)0x0)) goto LAB_143239076;
                lVar80 = *plVar57;
              }
              lVar56 = DAT_14ca9f278;
              uStack_480 = (undefined4)lVar80;
              iStack_47c = (int)((ulonglong)lVar80 >> 0x20);
              piVar68 = piVar73 + 0x55;
              plVar74 = (longlong *)(DAT_14ca9f278 + 0x218);
              uVar48 = FUN_144a85f5b(piVar68);
              iVar46 = FUN_140924716(plVar74,uVar48,piVar68);
              if ((iVar46 == -1) ||
                 (lVar80 = (longlong)iVar46 * 0x20 + *plVar74, plVar57 = (longlong *)(lVar80 + 0x10)
                 , plVar57 == (longlong *)0x0 || lVar80 == 0)) {
                (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_258,piVar68);
                puVar75 = local_258;
                LOCK();
                *(int *)(local_258 + 8) = *(int *)(local_258 + 8) + 1;
                UNLOCK();
                local_630 = plVar74;
                if (*(int *)(lVar56 + 0x24c) == 0) {
                  iVar46 = *(int *)(lVar56 + 0x220);
                  *(int *)(lVar56 + 0x220) = iVar46 + 1;
                  if (*(int *)(lVar56 + 0x224) == iVar46) {
                    FUN_1447711aa(plVar74,iVar46);
                  }
                  iVar47 = *(int *)(lVar56 + 0x240);
                  if (iVar47 == 0) {
                    iVar49 = -1;
                  }
                  else {
                    iVar49 = iVar47 + 0x1e;
                    if (-1 < iVar47 + -1) {
                      iVar49 = iVar47 + -1;
                    }
                    iVar49 = iVar49 >> 5;
                  }
                  lVar71 = lVar56 + 0x228;
                  iVar66 = iVar47 + 1;
                  iVar78 = iVar47 + 0x1f;
                  if (-1 < iVar47) {
                    iVar78 = iVar47;
                  }
                  if (iVar78 >> 5 == iVar49) {
                    *(int *)(lVar56 + 0x240) = iVar66;
                    puVar44 = local_258;
                  }
                  else {
                    if (*(int *)(lVar56 + 0x244) <= iVar47) {
                      iVar49 = iVar47;
                      local_5f0 = puVar75;
                      if (iVar47 + 0x20U < 0xa0) {
                        iVar66 = 0x80;
                      }
                      else {
                        uVar70 = iVar47 + 0x20U >> 5;
                        if (*(int *)(lVar56 + 0x244) + 0x1fU < 0xa0) {
                          uVar82 = 4;
                          if (4 < uVar70) {
                            uVar82 = uVar70;
                          }
                        }
                        else {
                          uVar82 = uVar70 + (uVar70 * 3 >> 3) + 0x10;
                        }
                        uVar58 = (ulonglong)(uVar82 * 4);
                        if (DAT_14c872d28 != (longlong *)0x0) {
                          if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                            uVar50 = (uint)(uVar58 + 0xf);
                            if (uVar82 < 0x1ffd) {
                              uVar58 = (ulonglong)
                                       (ushort)(&DAT_14c841d90)
                                               [0x32 - (byte)(&DAT_14c841e00)[uVar50 >> 4]];
                            }
                            else {
                              uVar84 = uVar58 + 0xf & 0xfffffffffffffff0;
                              if (uVar84 < 0x7ff1) {
                                bVar65 = (&DAT_14c841e00)[uVar50 >> 4];
                                uVar69 = 0x32;
                                if (0x32 < bVar65) {
                                  uVar69 = (ulonglong)bVar65;
                                }
                                uVar79 = 0x32 - (ulonglong)bVar65;
                                do {
                                  uVar58 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar79 & 0xffffffff];
                                  if (((&DAT_14c841d90)[uVar79 & 0xffffffff] & 0xf) == 0)
                                  goto LAB_143239470;
                                  lVar80 = uVar69 + 1 + uVar79;
                                  uVar79 = uVar79 - 1;
                                } while (lVar80 != 0x33);
                              }
                              uVar58 = (ulonglong)DAT_14c841df8;
                              if (DAT_14c841df8 < 0x11) {
                                uVar58 = 0x10;
                              }
                              uVar58 = -uVar58 & (uVar84 + uVar58) - 1;
                            }
                          }
                          else {
                            local_5f8 = (ulonglong)uVar70;
                            uVar58 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar58,0);
                            uVar70 = (uint)local_5f8;
                            iVar49 = *(int *)(lVar56 + 0x240);
                          }
                        }
LAB_143239470:
                        iVar51 = (int)(uVar58 >> 2);
                        iVar66 = iVar51 << 5;
                        if (iVar51 < (int)uVar70) {
                          iVar66 = -0x20;
                        }
                      }
                      *(int *)(lVar56 + 0x244) = iVar66;
                      FUN_1446efbd8(lVar71,iVar49);
                      iVar66 = *(int *)(lVar56 + 0x240) + 1;
                      puVar75 = local_5f0;
                    }
                    iVar49 = iVar66 + 0x1f;
                    if (-1 < iVar66) {
                      iVar49 = iVar66;
                    }
                    *(int *)(lVar56 + 0x240) = iVar66;
                    puVar44 = local_258;
                    if (iVar66 % 0x20 != 0) {
                      lVar80 = *(longlong *)(lVar56 + 0x238);
                      if (*(longlong *)(lVar56 + 0x238) == 0) {
                        lVar80 = lVar71;
                      }
                      bVar65 = -(char)(iVar66 % 0x20);
                      *(uint *)(lVar80 + (longlong)(iVar49 >> 5) * 4) =
                           (uint)(*(int *)(lVar80 + (longlong)(iVar49 >> 5) * 4) << (bVar65 & 0x1f))
                           >> (bVar65 & 0x1f);
                    }
                  }
                  lVar80 = (longlong)iVar46;
                  if (*(longlong *)(lVar56 + 0x238) != 0) {
                    lVar71 = *(longlong *)(lVar56 + 0x238);
                  }
                  bVar65 = (byte)iVar47 & 0x1f;
                  puVar83 = (uint *)(lVar71 + (longlong)(iVar78 >> 5) * 4);
                  *puVar83 = *puVar83 & (-2 << bVar65 | 0xfffffffeU >> 0x20 - bVar65);
                  local_258 = puVar75;
                }
                else {
                  iVar46 = *(int *)(lVar56 + 0x248);
                  lVar80 = (longlong)iVar46;
                  iVar47 = *(int *)(*(longlong *)(lVar56 + 0x218) + 4 + lVar80 * 0x20);
                  *(int *)(lVar56 + 0x248) = iVar47;
                  iVar49 = *(int *)(lVar56 + 0x24c) + -1;
                  *(int *)(lVar56 + 0x24c) = iVar49;
                  puVar44 = local_258;
                  if (iVar49 != 0) {
                    *(undefined4 *)(*(longlong *)(lVar56 + 0x218) + (longlong)iVar47 * 0x20) =
                         0xffffffff;
                  }
                }
                iVar47 = 1;
                lVar71 = lVar56 + 0x228;
                if (*(longlong *)(lVar56 + 0x238) != 0) {
                  lVar71 = *(longlong *)(lVar56 + 0x238);
                }
                iVar49 = iVar46 + 0x1f;
                if (-1 < iVar46) {
                  iVar49 = iVar46;
                }
                puVar83 = (uint *)(lVar71 + (longlong)(iVar49 >> 5) * 4);
                *puVar83 = *puVar83 | 1 << ((byte)iVar46 & 0x1f);
                lVar71 = *(longlong *)(lVar56 + 0x218);
                lVar80 = lVar80 * 0x20;
                puVar62 = (undefined8 *)(lVar71 + lVar80);
                uVar54 = *(undefined8 *)piVar68;
                *(undefined8 *)(lVar71 + 6 + lVar80) = *(undefined8 *)((longlong)piVar73 + 0x15a);
                *(undefined8 *)(lVar71 + lVar80) = uVar54;
                *(undefined1 **)(lVar71 + 0x10 + lVar80) = local_258;
                *(undefined4 *)(lVar71 + 0x18 + lVar80) = 0xffffffff;
                local_258 = puVar44;
                uVar70 = FUN_144a85f5b(puVar62);
                uVar82 = *(int *)(lVar56 + 0x220) - *(int *)(lVar56 + 0x24c);
                if (uVar82 == 1) {
LAB_143238bfd:
                  if (((int)uVar82 < 1) || (iVar47 <= *(int *)(lVar56 + 0x260))) {
                    uVar70 = *(int *)(lVar56 + 0x260) - 1U & uVar70;
                    *(uint *)((longlong)puVar62 + 0x1c) = uVar70;
                    lVar80 = *(longlong *)(lVar56 + 600);
                    if (*(longlong *)(lVar56 + 600) == 0) {
                      lVar80 = lVar56 + 0x250;
                    }
                    *(undefined4 *)(puVar62 + 3) =
                         *(undefined4 *)
                          (lVar80 + ((longlong)*(int *)(lVar56 + 0x260) - 1U & (longlong)(int)uVar70
                                    ) * 4);
                    lVar80 = *(longlong *)(lVar56 + 600);
                    if (*(longlong *)(lVar56 + 600) == 0) {
                      lVar80 = lVar56 + 0x250;
                    }
                    *(int *)(lVar80 + ((longlong)*(int *)(lVar56 + 0x260) - 1U &
                                      (longlong)(int)uVar70) * 4) = iVar46;
                    puVar75 = local_258;
                  }
                  else {
                    *(int *)(lVar56 + 0x260) = iVar47;
                    FUN_141448852(local_630);
                    puVar75 = local_258;
                  }
                }
                else {
                  iVar49 = FUN_140924716(local_630,uVar70,puVar62);
                  if (iVar49 == -1) {
                    if (3 < uVar82) {
                      uVar58 = (ulonglong)(uVar82 & 0xfffffffe) + 0xf;
                      lVar80 = 0x3f;
                      if (uVar58 != 0) {
                        for (; uVar58 >> lVar80 == 0; lVar80 = lVar80 + -1) {
                        }
                      }
                      iVar47 = 1 << ((byte)lVar80 & 0x1f);
                    }
                    goto LAB_143238bfd;
                  }
                  lVar80 = *local_630;
                  uVar54 = *puVar62;
                  uVar9 = puVar62[1];
                  *(undefined8 *)(lVar80 + 0x10 + (longlong)iVar49 * 0x20) = puVar62[2];
                  puVar62 = (undefined8 *)(lVar80 + (longlong)iVar49 * 0x20);
                  *puVar62 = uVar54;
                  puVar62[1] = uVar9;
                  FUN_147444ae4(local_630,iVar46);
                  puVar75 = local_258;
                }
                plVar74 = local_618;
                pcVar77 = QueryPerformanceCounter_exref;
                uVar70 = (uint)local_628;
                local_258 = puVar75;
                if (puVar75 != (undefined1 *)0x0) {
                  LOCK();
                  puVar83 = (uint *)(puVar75 + 8);
                  uVar82 = *puVar83;
                  *puVar83 = *puVar83 - 1;
                  UNLOCK();
                  if ((uVar82 & 0x3fffffff) == 1) {
                    puVar83 = (uint *)(puVar75 + 8);
                    LOCK();
                    uVar82 = *puVar83;
                    *puVar83 = *puVar83 | 0x40000000;
                    UNLOCK();
                    if ((uVar82 >> 0x1e & 1) == 0) {
                      bVar65 = puVar75[0xd];
                      plVar59 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar59[1] = (longlong)puVar75;
                      plVar57 = DAT_14ca843c0;
                      plVar55 = DAT_14ca843c8;
                      if ((bVar65 & 2) == 0) {
                        do {
                          *plVar59 = (longlong)plVar57;
                          LOCK();
                          bVar85 = plVar57 != DAT_14ca843c0;
                          plVar55 = plVar59;
                          if (bVar85) {
                            plVar57 = DAT_14ca843c0;
                            plVar55 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar55;
                          UNLOCK();
                        } while (bVar85);
                      }
                      else {
                        do {
                          *plVar59 = (longlong)plVar55;
                          LOCK();
                          bVar85 = plVar55 != DAT_14ca843c8;
                          plVar57 = plVar59;
                          if (bVar85) {
                            plVar55 = DAT_14ca843c8;
                            plVar57 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar57;
                          UNLOCK();
                        } while (bVar85);
                      }
                    }
                  }
                }
              }
              else {
                puVar75 = (undefined1 *)*plVar57;
                plVar74 = local_618;
                uVar70 = (uint)local_628;
              }
              uVar9 = local_3f8;
              uVar54 = uStack_400;
              lVar80 = local_610;
              local_478._0_4_ = SUB84(puVar75,0);
              local_478._4_4_ = (undefined4)((ulonglong)puVar75 >> 0x20);
              iStack_458 = (int)*(undefined8 *)((longlong)piVar73 + 0x162);
              iStack_454 = (int)((ulonglong)*(undefined8 *)((longlong)piVar73 + 0x162) >> 0x20);
              auVar88 = *(undefined1 (*) [16])(piVar73 + 0x60);
              iStack_420 = piVar73[0x68];
              iStack_41c = piVar73[0x69];
              iStack_418 = piVar73[0x6a];
              iStack_414 = piVar73[0x6b];
              uStack_430 = (undefined4)*(undefined8 *)(piVar73 + 100);
              uStack_42c = (undefined4)((ulonglong)*(undefined8 *)(piVar73 + 100) >> 0x20);
              uStack_428 = (undefined4)*(undefined8 *)(piVar73 + 0x66);
              uStack_424 = (undefined4)((ulonglong)*(undefined8 *)(piVar73 + 0x66) >> 0x20);
              iStack_440 = auVar88._0_4_;
              local_43c = auVar88._4_4_;
              iStack_438 = auVar88._8_4_;
              uStack_434 = auVar88._12_4_;
              uStack_450 = (undefined4)*(undefined8 *)(piVar73 + 0x5c);
              uStack_44c = (undefined4)((ulonglong)*(undefined8 *)(piVar73 + 0x5c) >> 0x20);
              iStack_448 = (int)*(undefined8 *)(piVar73 + 0x5e);
              uStack_444 = (undefined4)((ulonglong)*(undefined8 *)(piVar73 + 0x5e) >> 0x20);
              iStack_45c = piVar73[0x6c];
              local_3f8._4_4_ = SUB84(uVar9,4);
              local_3f8._0_4_ =
                   CONCAT13(*(undefined1 *)((longlong)piVar73 + 0x1d1),
                            CONCAT12((char)piVar73[0x74],(short)piVar73[0x6d]));
              local_3f8 = CONCAT26(*(undefined2 *)((longlong)piVar73 + 0x1d2),
                                   CONCAT15((char)piVar73[0x75],(undefined5)local_3f8));
              uStack_410 = (undefined1)piVar73[0x6e];
              local_408 = *(undefined8 *)(piVar73 + 0x70);
              uStack_400._0_2_ =
                   CONCAT11(*(undefined1 *)((longlong)piVar73 + 0x1ca),(char)piVar73[0x72]);
              uStack_400._4_4_ = SUB84(uVar54,4);
              uStack_400._0_4_ =
                   CONCAT13(*(undefined1 *)((longlong)piVar73 + 0x1cb),
                            CONCAT12(*(undefined1 *)((longlong)piVar73 + 0x1c9),
                                     (undefined2)uStack_400));
              iStack_460 = piVar73[0x73];
              local_3f0 = local_3f0 & 0xfffffff | 0x50000000;
              if (local_610 != 0) {
                LOCK();
                puVar83 = (uint *)(local_610 + 8);
                uVar82 = *puVar83;
                *puVar83 = *puVar83 - 1;
                UNLOCK();
                if ((uVar82 & 0x3fffffff) == 1) {
                  puVar83 = (uint *)(local_610 + 8);
                  LOCK();
                  uVar82 = *puVar83;
                  *puVar83 = *puVar83 | 0x40000000;
                  UNLOCK();
                  if ((uVar82 >> 0x1e & 1) == 0) {
                    bVar65 = *(byte *)(local_610 + 0xd);
                    plVar59 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar59[1] = lVar80;
                    plVar57 = DAT_14ca843c0;
                    plVar55 = DAT_14ca843c8;
                    if ((bVar65 & 2) == 0) {
                      do {
                        *plVar59 = (longlong)plVar57;
                        LOCK();
                        bVar85 = plVar57 != DAT_14ca843c0;
                        plVar55 = plVar59;
                        if (bVar85) {
                          plVar57 = DAT_14ca843c0;
                          plVar55 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar55;
                        UNLOCK();
                      } while (bVar85);
                    }
                    else {
                      do {
                        *plVar59 = (longlong)plVar55;
                        LOCK();
                        bVar85 = plVar55 != DAT_14ca843c8;
                        plVar57 = plVar59;
                        if (bVar85) {
                          plVar55 = DAT_14ca843c8;
                          plVar57 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar57;
                        UNLOCK();
                      } while (bVar85);
                    }
                  }
                }
              }
              lVar80 = FUN_140028f18(&DAT_14ca85100,&local_4b8);
              if ((lVar80 != 0) && ((local_3f0 & 0x10000000) == 0)) {
                _DAT_14ca85288 = CONCAT44(local_4b8.s.HighPart,local_4b8.s.LowPart);
                DAT_14ca85290 = CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0);
                DAT_14ca85298._4_4_ = iStack_4a4;
                DAT_14ca85298._0_4_ = local_4a8;
                unique0x100024db = uStack_4a0;
                unique0x100024df = uStack_49c;
                uRam000000014ca852b0 = CONCAT44(uStack_48c,iStack_490);
                _DAT_14ca852a8 = local_498;
                puVar60 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
                puVar62 = puVar60 + 4;
                if (DAT_14ca85108 < puVar62) {
                  FUN_140023dd8(&DAT_14ca85100,0x28);
                  puVar60 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
                  puVar62 = puVar60 + 4;
                }
                DAT_14ca85160 = DAT_14ca85160 + 1;
                DAT_14ca85100 = puVar62;
                *DAT_14ca85130 = puVar60;
                DAT_14ca85130 = puVar60 + 1;
                puVar60[1] = 0;
                *puVar60 = &PTR_LAB_14a37d348;
                puVar60[2] = lVar80;
                *(undefined4 *)(puVar60 + 3) = 0;
                *(undefined1 *)((longlong)puVar60 + 0x1c) = 0;
              }
              goto LAB_143238f40;
            }
            if (DAT_14ca84f63 == '\x01') {
              if (DAT_14ca9a668 == 0) {
                lVar80 = 0;
              }
              else {
                FUN_1407ee3f2(DAT_14ca9a668,&local_258,1,piVar73 + 0x15);
                lVar80 = CONCAT44(local_258._4_4_,(DWORD)local_258);
              }
              uStack_4a0 = (undefined4)lVar80;
              uStack_49c = (undefined4)((ulonglong)lVar80 >> 0x20);
              local_258._0_4_ = 0;
              local_258._4_4_ = 0;
              uStack_250._0_4_ = 0;
              uStack_250._4_4_ = 0;
              local_248 = 0;
              if (piVar73[0x1e] != 0 ||
                  *(undefined1 (*) [16])(piVar73 + 0x1a) != (undefined1  [16])0x0) {
                if (DAT_14ca9a668 == 0) {
                  local_498 = 0;
                }
                else {
                  FUN_1407ee3f2(DAT_14ca9a668,&local_258,2,piVar73 + 0x1a);
                  uVar58 = CONCAT44(local_258._4_4_,(DWORD)local_258);
                  local_498 = uVar58;
                  if (uVar58 != 0) {
                    LOCK();
                    puVar83 = (uint *)(uVar58 + 8);
                    uVar70 = *puVar83;
                    *puVar83 = *puVar83 - 1;
                    UNLOCK();
                    if ((uVar70 & 0x3fffffff) == 1) {
                      puVar83 = (uint *)(uVar58 + 8);
                      LOCK();
                      uVar70 = *puVar83;
                      *puVar83 = *puVar83 | 0x40000000;
                      UNLOCK();
                      if ((uVar70 >> 0x1e & 1) == 0) {
                        bVar65 = *(byte *)(uVar58 + 0xd);
                        plVar55 = (longlong *)FUN_14001cc68(0x10,8);
                        plVar55[1] = uVar58;
                        plVar74 = DAT_14ca843c0;
                        plVar57 = DAT_14ca843c8;
                        if ((bVar65 & 2) == 0) {
                          do {
                            *plVar55 = (longlong)plVar74;
                            LOCK();
                            bVar85 = plVar74 != DAT_14ca843c0;
                            plVar57 = plVar55;
                            if (bVar85) {
                              plVar74 = DAT_14ca843c0;
                              plVar57 = DAT_14ca843c0;
                            }
                            DAT_14ca843c0 = plVar57;
                            UNLOCK();
                          } while (bVar85);
                        }
                        else {
                          do {
                            *plVar55 = (longlong)plVar57;
                            LOCK();
                            bVar85 = plVar57 != DAT_14ca843c8;
                            plVar74 = plVar55;
                            if (bVar85) {
                              plVar57 = DAT_14ca843c8;
                              plVar74 = DAT_14ca843c8;
                            }
                            DAT_14ca843c8 = plVar74;
                            UNLOCK();
                          } while (bVar85);
                        }
                      }
                    }
                  }
                }
              }
              if (lVar80 != 0) {
                LOCK();
                puVar83 = (uint *)(lVar80 + 8);
                uVar70 = *puVar83;
                *puVar83 = *puVar83 - 1;
                UNLOCK();
                if ((uVar70 & 0x3fffffff) == 1) {
                  puVar83 = (uint *)(lVar80 + 8);
                  LOCK();
                  uVar70 = *puVar83;
                  *puVar83 = *puVar83 | 0x40000000;
                  UNLOCK();
                  if ((uVar70 >> 0x1e & 1) == 0) {
                    bVar65 = *(byte *)(lVar80 + 0xd);
                    plVar55 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar55[1] = lVar80;
                    plVar74 = DAT_14ca843c0;
                    plVar57 = DAT_14ca843c8;
                    if ((bVar65 & 2) == 0) {
                      do {
                        *plVar55 = (longlong)plVar74;
                        LOCK();
                        bVar85 = plVar74 != DAT_14ca843c0;
                        plVar57 = plVar55;
                        if (bVar85) {
                          plVar74 = DAT_14ca843c0;
                          plVar57 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar57;
                        UNLOCK();
                      } while (bVar85);
                    }
                    else {
                      do {
                        *plVar55 = (longlong)plVar57;
                        LOCK();
                        bVar85 = plVar57 != DAT_14ca843c8;
                        plVar74 = plVar55;
                        if (bVar85) {
                          plVar57 = DAT_14ca843c8;
                          plVar74 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar74;
                        UNLOCK();
                      } while (bVar85);
                    }
                  }
                }
              }
              goto LAB_143238648;
            }
          }
          FUN_144980568(DAT_14ca9f278 + 0x30,&local_4b8,&local_5cc,0);
          FUN_1407e8aa4(piVar73);
          lVar80 = *(longlong *)(piVar73 + 0x7e);
          if (lVar80 != 0) {
            FUN_1404d52d8(lVar80);
            FUN_1400020a8(lVar80);
          }
          lVar56 = local_620;
          piVar73[0x7e] = 0;
          piVar73[0x7f] = 0;
          uVar81 = uVar81 + 1;
        } while (uVar81 != uVar70);
        *(int *)(local_620 + 0x10) = *(int *)(local_620 + 0x10) + uVar70;
        LOCK();
        DAT_14ca9f248 = DAT_14ca9f248 - (int)uVar70;
        UNLOCK();
        iVar46 = *(int *)(local_620 + 0x30) - uVar70;
        uVar81 = uVar70;
        if (iVar46 != 0) {
          memmove(*(void **)(local_620 + 0x28),
                  (void *)((longlong)(int)uVar70 * 0x208 + (longlong)*(void **)(local_620 + 0x28)),
                  (longlong)iVar46 * 0x208);
          uVar81 = *(uint *)(lVar56 + 0x30);
        }
        *(uint *)(lVar56 + 0x30) = uVar81 - uVar70;
        FUN_141790f90(plVar74);
        piVar73 = local_5e8;
      }
      QueryPerformanceCounter(&local_4b8);
      if (0.0 < DAT_14ca9f234) {
        fVar87 = (float)((double)(local_4b8.s.LowPart - (int)piVar73) * DAT_14c83f420 * 1000.0);
        if (DAT_14ca9f234 <= fVar87) {
          if (1 < DAT_14ca9f230 && DAT_14ca9f234 < fVar87) {
            DAT_14ca9f230 = DAT_14ca9f230 - 1;
          }
        }
        else {
          DAT_14ca9f230 = DAT_14ca9f230 + 1;
        }
      }
    }
    uStack_4b0 = (longlong *)CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0);
    if (*(int *)(lVar56 + 0x20) == 0) {
      uVar70 = *(uint *)(local_620 + 0x40);
      uVar81 = *(uint *)(local_620 + 0x60);
      uStack_4b0 = (longlong *)CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0);
      if (uVar70 != 0 || uVar81 != 0) {
        plVar74 = (longlong *)(local_620 + 0x38);
        local_600 = local_620 + 0x48;
        plVar57 = (longlong *)0x0;
        uVar82 = DAT_14ca9f230 - uVar81;
        if (DAT_14ca9f230 < uVar81) {
          uVar82 = 0;
        }
        if (uVar70 <= uVar82) {
          uVar82 = uVar70;
        }
        iVar46 = uVar82 - uVar81;
        lVar80 = local_620;
        local_618 = plVar74;
        if (iVar46 != 0 && (int)uVar81 <= (int)uVar82) {
          local_4b8.s.LowPart = 0x4a399cd0;
          local_4b8.s.HighPart = 1;
          uStack_4b0._0_4_ = 0;
          uStack_4b0._4_4_ = 0;
          local_4a8 = 0;
          iStack_4a4 = 0;
          uStack_4a0 = 0;
          do {
            if ((*(int *)(lVar80 + 0x40) <= (int)plVar57) || (iVar46 == 0)) break;
            lVar80 = *plVar74;
            plVar55 = (longlong *)((longlong)plVar57 * 0x58);
            puVar83 = (uint *)((longlong)plVar55 + lVar80 + 0x10);
            plVar59 = (longlong *)(lVar80 + (longlong)plVar55);
            iVar47 = *(int *)((longlong)plVar55 + lVar80 + 0x28);
            local_610 = CONCAT44(local_610._4_4_,iVar46);
            local_630 = plVar57;
            if (iVar47 == 0) {
              uVar84 = 1;
              uVar58 = 0;
              iVar49 = 0;
              iVar46 = 0;
            }
            else {
              puVar61 = (uint *)plVar59[4];
              if ((uint *)plVar59[4] == (uint *)0x0) {
                puVar61 = puVar83;
              }
              uVar70 = *puVar61;
              if (uVar70 == 0) {
                iVar46 = iVar47 + 0x1e;
                if (-1 < iVar47 + -1) {
                  iVar46 = iVar47 + -1;
                }
                uVar58 = 0;
                uVar84 = (ulonglong)(uint)(iVar46 >> 5);
                if (iVar46 >> 5 < 1) {
                  uVar84 = uVar58;
                }
                iVar49 = 0;
                do {
                  if (uVar84 == uVar58) goto LAB_143239d34;
                  iVar49 = iVar49 + 0x20;
                  uVar70 = puVar61[uVar58 + 1];
                  uVar58 = uVar58 + 1;
                } while (uVar70 == 0);
              }
              else {
                uVar58 = 0;
                iVar49 = 0;
              }
              uVar84 = (ulonglong)(-uVar70 & uVar70);
              uVar69 = uVar84 * 2 + 1;
              lVar80 = 0x3f;
              if (uVar69 != 0) {
                for (; uVar69 >> lVar80 == 0; lVar80 = lVar80 + -1) {
                }
              }
              iVar46 = (iVar49 - ((uint)lVar80 ^ 0x3f)) + 0x3e;
              if (iVar47 <= iVar46) {
                iVar46 = iVar47;
              }
            }
            if (iVar46 == iVar47) {
LAB_143239d34:
              puVar62 = (undefined8 *)FUN_14001cc68(0x40,0x10);
              *puVar62 = 0;
              puVar62[1] = 0;
              *(undefined8 *)((longlong)puVar62 + 0xe) = 0;
              *(undefined8 *)((longlong)puVar62 + 0x16) = 0;
              puVar62[4] = 0;
              puVar62[5] = 0;
              puVar62[6] = 0;
              puVar62[7] = 0;
              local_258._0_4_ = (DWORD)puVar62;
              local_258._4_4_ = (LONG)((ulonglong)puVar62 >> 0x20);
              *(undefined4 *)(puVar62 + 3) = *(undefined4 *)(*plVar74 + 0x50 + (longlong)plVar55);
              puVar60 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
              FUN_144869430(puVar60);
              *puVar60 = &PTR_FUN_14a399590;
              puVar60[0x12] = 0;
              puVar60[0x13] = 0;
              puVar62[2] = puVar60;
              FUN_140282036(&local_4b8,&local_258);
              FUN_140282036(local_600,&local_258);
              lVar80 = *plVar74;
              uVar70 = (uint)local_630;
              lVar56 = (longlong)(int)uVar70 * 0x58;
              *(undefined4 *)(lVar80 + 0x48 + lVar56) = 0;
              if (*(longlong *)(lVar80 + 0x40 + lVar56) != 0) {
                FUN_1400020a8();
              }
              pvVar72 = (void *)(lVar80 + lVar56);
              FUN_1404112b2(pvVar72);
              lVar80 = local_620;
              iVar46 = *(int *)(local_620 + 0x40);
              if (~uVar70 + iVar46 != 0) {
                memmove(pvVar72,(void *)((longlong)pvVar72 + 0x58),
                        (longlong)(int)(~uVar70 + iVar46) * 0x58);
                iVar46 = *(int *)(lVar80 + 0x40);
              }
              *(int *)(lVar80 + 0x40) = iVar46 + -1;
              FUN_14179110e(plVar74);
              iVar47 = uVar70 - 1;
              LOCK();
              DAT_14ca9f248 = DAT_14ca9f248 + 1;
              UNLOCK();
              LOCK();
              DAT_14ca9f250 = DAT_14ca9f250 + -1;
              UNLOCK();
              iVar46 = (int)local_610 + -1;
            }
            else {
              uVar70 = 0xffffffff;
              bVar85 = true;
              lVar80 = DAT_14ca9a668;
              iVar66 = iVar47;
              local_628 = plVar55;
              puVar75 = local_258;
              do {
                local_258._4_4_ = (LONG)((ulonglong)puVar75 >> 0x20);
                if (lVar80 == 0) {
                  lVar80 = 0;
                  bVar86 = false;
                  local_258 = puVar75;
                }
                else {
                  local_258._0_4_ = 0xffffffff;
                  lVar80 = FUN_1404d2d58(lVar80,(longlong)iVar46 * 0x1c + *plVar59,&local_258);
                  bVar86 = lVar80 != 0;
                  iVar66 = (int)plVar59[5];
                  lVar80 = DAT_14ca9a668;
                  local_258 = (undefined1 *)CONCAT44(local_258._4_4_,(DWORD)local_258);
                }
                uVar70 = uVar70 & ~(uint)uVar84;
                puVar61 = (uint *)plVar59[4];
                if ((uint *)plVar59[4] == (uint *)0x0) {
                  puVar61 = puVar83;
                }
                iVar46 = (int)uVar58;
                lVar56 = (longlong)iVar46;
                uVar81 = puVar61[lVar56] & uVar70;
                if (uVar81 == 0) {
                  iVar78 = iVar66 + 0x1e;
                  if (-1 < iVar66 + -1) {
                    iVar78 = iVar66 + -1;
                  }
                  iVar78 = iVar78 >> 5;
                  iVar49 = iVar49 + 0x20;
                  iVar51 = iVar78;
                  if (iVar78 < iVar46) {
                    iVar51 = iVar46;
                  }
                  if (iVar46 < iVar78) {
                    lVar71 = 0;
                    do {
                      uVar81 = puVar61[lVar56 + lVar71 + 1];
                      if (uVar81 != 0) {
                        uVar58 = (ulonglong)(iVar46 + (int)lVar71 + 1);
                        uVar70 = 0xffffffff;
                        goto LAB_143239cd2;
                      }
                      iVar49 = iVar49 + 0x20;
                      lVar71 = lVar71 + 1;
                    } while (iVar51 - lVar56 != lVar71);
                    uVar70 = 0xffffffff;
                    lVar56 = (longlong)iVar51;
                  }
                  uVar58 = lVar56 + 1U & 0xffffffff;
                  iVar46 = iVar66;
                }
                else {
LAB_143239cd2:
                  uVar84 = (ulonglong)(-uVar81 & uVar81);
                  uVar69 = uVar84 * 2 + 1;
                  lVar56 = 0x3f;
                  if (uVar69 != 0) {
                    for (; uVar69 >> lVar56 == 0; lVar56 = lVar56 + -1) {
                    }
                  }
                  iVar46 = (iVar49 - ((uint)lVar56 ^ 0x3f)) + 0x3e;
                  if (iVar66 <= iVar46) {
                    iVar46 = iVar66;
                  }
                }
                bVar85 = (bool)(bVar85 & bVar86);
                puVar75 = local_258;
              } while (iVar46 != iVar47);
              plVar55 = local_628;
              plVar74 = local_618;
              if (bVar85) goto LAB_143239d34;
              iVar47 = (int)local_630;
              lVar80 = local_620;
              iVar46 = (int)local_610;
            }
            plVar57 = (longlong *)(ulonglong)(iVar47 + 1);
          } while (-2 < iVar47);
          FUN_140f0585e(lVar80,&local_4b8);
          ppuVar63 = &PTR_FUN_14a399cd0;
          local_4b8.s.LowPart = 0x4a399cd0;
          local_4b8.s.HighPart = 1;
          lVar56 = CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0);
          if (lVar56 != 0) {
            do {
              lVar56 = *(longlong *)(lVar56 + 8);
              FUN_1400020a8();
              uStack_4b0._0_4_ = (undefined4)lVar56;
              uStack_4b0._4_4_ = (undefined4)((ulonglong)lVar56 >> 0x20);
            } while (lVar56 != 0);
            ppuVar63 = (undefined **)CONCAT44(local_4b8.s.HighPart,local_4b8.s.LowPart);
          }
          uStack_4b0._0_4_ = 0;
          uStack_4b0._4_4_ = 0;
          local_4a8 = 0;
          iStack_4a4 = 0;
          (*(code *)ppuVar63[1])(&local_4b8,0);
        }
        plVar74 = *(longlong **)(lVar80 + 0x50);
        if (plVar74 != (longlong *)0x0) {
          local_628 = local_80;
          local_630 = (longlong *)local_2e0;
          local_5e8 = (int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0xc60);
          local_610 = 0x7fffffffffffffff;
          do {
            lVar80 = *plVar74;
            bVar65 = *(byte *)(lVar80 + 0x1d);
            if (bVar65 == 1) {
              if (*(char *)(lVar80 + 0x1c) == '\0') {
                cVar45 = FUN_140331224(*(undefined8 *)(lVar80 + 0x10));
                if (cVar45 == '\0') {
                  bVar65 = *(byte *)(lVar80 + 0x1d);
                  goto LAB_14323a1e0;
                }
              }
              FUN_1431dcd80(&local_258);
              memset(&local_5c8,0,0x90);
              FUN_144869430(&local_5c8);
              local_538 = 0;
              local_5c8 = 0x50;
              uStack_5c7 = 0xe0;
              uStack_5c6 = 0x49e1;
              uStack_5c4 = 1;
              local_528 = local_610;
              local_5a0 = local_5a0 | 1;
              local_530 = lVar80;
              FUN_1449c2eca(&local_5c8,0);
              FUN_1447a7c5a(&local_5c8,0x1c);
              FUN_140e712cd(&local_5c8,&local_258);
              local_288 = 0;
              local_280 = 0;
              local_2a8 = 0;
              uStack_2a0 = 0;
              local_27c = 0xffffffff00000080;
              local_274 = 0;
              local_268 = 0;
              local_260 = 0;
              FUN_1431dcd80(&local_4b8);
              local_2b8 = 0;
              local_4b8.s.LowPart = (DWORD)local_258;
              if ((DWORD)local_258 == 0) {
                iStack_4a4 = local_244;
                local_4b8.s.HighPart = local_258._4_4_;
                local_4a8 = local_248;
                uStack_4b0 = uStack_250;
              }
              else if ((DWORD)local_258 == 1) {
                memcpy(&uStack_4a0,local_240,0x1c0);
              }
              else if ((DWORD)local_258 == 2) {
                lVar56 = *local_628;
                lVar71 = local_628[1];
                *(undefined1 (*) [16])((longlong)local_630 + 0xc) =
                     *(undefined1 (*) [16])((longlong)local_628 + 0xc);
                *local_630 = lVar56;
                local_630[1] = lVar71;
              }
              puVar62 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
              FUN_144869430(puVar62);
              *puVar62 = &PTR_FUN_14a399590;
              puVar62[0x12] = 0;
              puVar62[0x13] = 0;
              local_2c0 = puVar62;
              plVar57 = uStack_4b0;
              if (*(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x110) < DAT_14ca9f31c) {
                FUN_144b3d300(&DAT_14ca9f31c);
                plVar57 = uStack_4b0;
                if (DAT_14ca9f31c == -1) {
                  _DAT_14ca9f308 = 0;
                  uRam000000014ca9f310 = 0;
                  DAT_14ca9f318 = 0;
                  _Init_thread_footer(&DAT_14ca9f31c);
                  plVar57 = uStack_4b0;
                }
              }
              uStack_4b0._4_4_ = (undefined4)((ulonglong)plVar57 >> 0x20);
              uStack_4b0._0_4_ = SUB84(plVar57,0);
              local_518 = 0;
              uStack_510 = 0;
              bVar65 = 1;
              uStack_4b0 = plVar57;
              if (local_4b8.s.LowPart == 0) {
                auVar31._4_4_ = (undefined4)uStack_4b0;
                auVar31._0_4_ = local_4b8.s.HighPart;
                auVar31._8_4_ = uStack_4b0._4_4_;
                auVar31._12_4_ = local_4a8;
                auVar29._8_8_ = uRam000000014ca9f310;
                auVar29._0_8_ = _DAT_14ca9f308;
                if (DAT_14ca9f318 == iStack_4a4 && auVar29 == auVar31) {
LAB_14323aa06:
                  uVar58 = uStack_510 >> 0x20;
                  uStack_510 = uStack_510 & 0xffffffff00000000;
                  if ((int)uVar58 != 0) {
                    uStack_4b0 = plVar57;
                    FUN_1401d5770(&local_518,0);
                    plVar57 = uStack_4b0;
                  }
                  bVar76 = 0;
                }
                else {
                  FUN_140623ef4(&local_2a8,&local_51c,&local_4b8.s.HighPart,0);
                  auVar32._4_4_ = (undefined4)uStack_4b0;
                  auVar32._0_4_ = local_4b8.s.HighPart;
                  auVar32._8_4_ = uStack_4b0._4_4_;
                  auVar32._12_4_ = local_4a8;
                  auVar30._8_8_ = uRam000000014ca9f310;
                  auVar30._0_8_ = _DAT_14ca9f308;
                  plVar57 = uStack_4b0;
                  if (DAT_14ca9f318 != iStack_4a4 || auVar30 != auVar32) {
                    cVar45 = FUN_1406af6ba(&local_4b8.s.HighPart,local_2c0);
                    uVar58 = uStack_510;
                    iVar46 = (int)uStack_510;
                    if (cVar45 != '\0') {
                      uVar70 = (int)uStack_510 + 1;
                      uStack_510 = CONCAT44(uStack_510._4_4_,uVar70);
                      plVar57 = uStack_4b0;
                      if (uStack_510._4_4_ < uVar70) {
                        FUN_14170552e(&local_518,uVar58 & 0xffffffff);
                        plVar57 = uStack_4b0;
                      }
                      uStack_4b0._4_4_ = (undefined4)((ulonglong)plVar57 >> 0x20);
                      uStack_4b0._0_4_ = SUB84(plVar57,0);
                      lVar64 = (longlong)iVar46;
                      *(int *)(local_518 + 0x10 + lVar64 * 0x14) = iStack_4a4;
                      lVar56 = CONCAT44((undefined4)uStack_4b0,local_4b8.s.HighPart);
                      lVar71 = CONCAT44(local_4a8,uStack_4b0._4_4_);
LAB_14323a44a:
                      plVar55 = (longlong *)(local_518 + lVar64 * 0x14);
                      *plVar55 = lVar56;
                      plVar55[1] = lVar71;
                      bVar65 = 1;
                      bVar76 = 1;
                      goto LAB_14323aa42;
                    }
                    goto LAB_14323a9dd;
                  }
LAB_14323a589:
                  bVar76 = 1;
                }
                bVar65 = 1;
              }
              else if (local_4b8.s.LowPart == 2) {
                if (*(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x110) < DAT_14ca97070) {
                  FUN_144b3d300(&DAT_14ca97070);
                  if (DAT_14ca97070 == -1) {
                    if (DAT_14c8407a8 == (longlong *)0x0) {
                      FUN_1414b00ea();
                    }
                    plVar57 = (longlong *)
                              (**(code **)(*DAT_14c8407a8 + 200))
                                        (DAT_14c8407a8,L"r.Raytracing.Enable",1);
                    if (plVar57 == (longlong *)0x0) {
                      DAT_14ca97068 = 0;
                    }
                    else {
                      DAT_14ca97068 = (**(code **)(*plVar57 + 0x68))(plVar57);
                    }
                    _Init_thread_footer(&DAT_14ca97070);
                  }
                }
                lVar56 = DAT_14ca97068;
                bVar76 = 1;
                bVar85 = true;
                cVar45 = DAT_14ca96da8;
                plVar57 = uStack_4b0;
                if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
                  iVar46 = *local_5e8;
                  cVar45 = '\x02';
                  if (((iVar46 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar46 == 2)) {
                    uVar58 = 0;
                  }
                  else if (iVar46 == 1) {
                    DVar52 = FUN_140ad26c0();
                    DVar53 = GetCurrentThreadId();
                    uVar58 = (ulonglong)(DVar52 != DVar53);
                    cVar45 = DAT_14ca96da8;
                    plVar57 = uStack_4b0;
                  }
                  else {
                    uVar58 = 1;
                  }
                  bVar85 = *(int *)(lVar56 + uVar58 * 4) != 0;
                }
                plVar55 = local_630;
                bVar65 = 0;
                if ((bVar85) && (cVar45 != '\0')) {
                  auVar27._8_8_ = uRam000000014ca9f310;
                  auVar27._0_8_ = _DAT_14ca9f308;
                  if (DAT_14ca9f318 != local_2d0 || auVar27 != local_2e0) {
                    uStack_4b0 = plVar57;
                    FUN_140623ef4(&local_2a8,&local_51c,local_630,0);
                    auVar28._8_8_ = uRam000000014ca9f310;
                    auVar28._0_8_ = _DAT_14ca9f308;
                    plVar57 = uStack_4b0;
                    if (DAT_14ca9f318 != local_2d0 || auVar28 != local_2e0) {
                      cVar45 = FUN_1406af6ba(plVar55,local_2c0);
                      uVar58 = uStack_510;
                      iVar46 = (int)uStack_510;
                      if (cVar45 != '\0') {
                        uVar70 = (int)uStack_510 + 1;
                        uStack_510 = CONCAT44(uStack_510._4_4_,uVar70);
                        plVar57 = uStack_4b0;
                        if (uStack_510._4_4_ < uVar70) {
                          FUN_14170552e(&local_518,uVar58 & 0xffffffff);
                          plVar57 = uStack_4b0;
                        }
                        lVar64 = (longlong)iVar46;
                        *(int *)(local_518 + 0x10 + lVar64 * 0x14) = (int)local_630[2];
                        lVar56 = *local_630;
                        lVar71 = local_630[1];
                        goto LAB_14323a44a;
                      }
                      goto LAB_14323a9dd;
                    }
                    goto LAB_14323a589;
                  }
                  goto LAB_14323aa06;
                }
              }
              else {
                bVar76 = 0;
                if (local_4b8.s.LowPart == 1) {
                  auVar40._4_4_ = iStack_460;
                  auVar40._0_4_ = uStack_464;
                  auVar40._8_4_ = iStack_45c;
                  auVar40._12_4_ = iStack_458;
                  auVar16._8_8_ = uRam000000014ca9f310;
                  auVar16._0_8_ = _DAT_14ca9f308;
                  if (DAT_14ca9f318 == iStack_454 && auVar16 == auVar40) {
                    auVar33._4_4_ = uStack_49c;
                    auVar33._0_4_ = uStack_4a0;
                    auVar33._8_8_ = local_498;
                    auVar24._8_8_ = uRam000000014ca9f310;
                    auVar24._0_8_ = _DAT_14ca9f308;
                    if (DAT_14ca9f318 != iStack_490 || auVar24 != auVar33) {
                      bVar85 = false;
                      FUN_140623ef4(&local_2a8,&local_51c,&uStack_4a0,0);
                      if (DAT_14ca9a668 != 0) {
                        local_51c = 0xffffffff;
                        lVar56 = FUN_1404d2d58(DAT_14ca9a668,&uStack_4a0,&local_51c);
                        bVar85 = lVar56 != 0;
                      }
                      auVar38._4_4_ = local_478._4_4_;
                      auVar38._0_4_ = (undefined4)local_478;
                      auVar38._8_4_ = uStack_470;
                      auVar38._12_4_ = uStack_46c;
                      auVar25._8_8_ = uRam000000014ca9f310;
                      auVar25._0_8_ = _DAT_14ca9f308;
                      plVar57 = uStack_4b0;
                      if (DAT_14ca9f318 != local_468 || auVar25 != auVar38) {
                        puVar62 = &local_478;
                        goto LAB_14323a545;
                      }
                      goto LAB_14323a5d4;
                    }
                    auVar37[4] = local_488;
                    auVar37._0_4_ = uStack_48c;
                    auVar37[5] = uStack_487;
                    auVar37._6_2_ = uStack_486;
                    auVar37._8_4_ = uStack_484;
                    auVar37._12_4_ = uStack_480;
                    auVar26._8_8_ = uRam000000014ca9f310;
                    auVar26._0_8_ = _DAT_14ca9f308;
                    if (DAT_14ca9f318 == iStack_47c && auVar26 == auVar37) goto LAB_14323a9d6;
                    bVar85 = false;
LAB_14323a609:
                    uStack_4b0 = plVar57;
                    FUN_140623ef4(&local_2a8,&local_51c,&uStack_48c,0);
                    if (DAT_14ca9a668 != 0) {
                      local_51c = 0xffffffff;
                      lVar56 = FUN_1404d2d58(DAT_14ca9a668,&uStack_48c,&local_51c);
                      plVar57 = uStack_4b0;
                      if ((bool)(bVar85 & lVar56 != 0)) goto LAB_14323a668;
                    }
                  }
                  else {
                    bVar85 = false;
                    FUN_140623ef4(&local_2a8,&local_51c,&uStack_464,0);
                    plVar57 = uStack_4b0;
                    if (DAT_14ca9a668 != 0) {
                      local_51c = 0xffffffff;
                      lVar56 = FUN_1404d2d58(DAT_14ca9a668,&uStack_464,&local_51c);
                      bVar85 = lVar56 != 0;
                      plVar57 = uStack_4b0;
                    }
                    auVar42._4_4_ = uStack_44c;
                    auVar42._0_4_ = uStack_450;
                    auVar42._8_4_ = iStack_448;
                    auVar42._12_4_ = uStack_444;
                    auVar17._8_8_ = uRam000000014ca9f310;
                    auVar17._0_8_ = _DAT_14ca9f308;
                    if (DAT_14ca9f318 != iStack_440 || auVar17 != auVar42) {
                      puVar62 = (undefined8 *)&uStack_450;
                      uStack_4b0 = plVar57;
LAB_14323a545:
                      FUN_140623ef4(&local_2a8,&local_51c,puVar62,0);
                      if (DAT_14ca9a668 == 0) {
                        bVar86 = false;
                        plVar57 = uStack_4b0;
                      }
                      else {
                        local_51c = 0xffffffff;
                        lVar56 = FUN_1404d2d58(DAT_14ca9a668,puVar62,&local_51c);
                        bVar86 = lVar56 != 0;
                        plVar57 = uStack_4b0;
                      }
                      bVar85 = (bool)(bVar85 & bVar86);
                    }
LAB_14323a5d4:
                    auVar35[4] = local_488;
                    auVar35._0_4_ = uStack_48c;
                    auVar35[5] = uStack_487;
                    auVar35._6_2_ = uStack_486;
                    auVar35._8_4_ = uStack_484;
                    auVar35._12_4_ = uStack_480;
                    auVar18._8_8_ = uRam000000014ca9f310;
                    auVar18._0_8_ = _DAT_14ca9f308;
                    if (DAT_14ca9f318 != iStack_47c || auVar18 != auVar35) goto LAB_14323a609;
                    uStack_4b0 = plVar57;
                    if (bVar85) {
LAB_14323a668:
                      auVar34._4_4_ = uStack_49c;
                      auVar34._0_4_ = uStack_4a0;
                      auVar34._8_8_ = local_498;
                      auVar19._8_8_ = uRam000000014ca9f310;
                      auVar19._0_8_ = _DAT_14ca9f308;
                      if (DAT_14ca9f318 != iStack_490 || auVar19 != auVar34) {
                        uStack_4b0 = plVar57;
                        cVar45 = FUN_1406af6ba(&uStack_4a0,local_2c0);
                        uVar58 = uStack_510;
                        iVar46 = (int)uStack_510;
                        if (cVar45 == '\0') goto LAB_14323a9dd;
                        uVar70 = (int)uStack_510 + 1;
                        uStack_510 = CONCAT44(uStack_510._4_4_,uVar70);
                        plVar57 = uStack_4b0;
                        if (uStack_510._4_4_ < uVar70) {
                          FUN_14170552e(&local_518,uVar58 & 0xffffffff);
                          plVar57 = uStack_4b0;
                        }
                        *(int *)(local_518 + 0x10 + (longlong)iVar46 * 0x14) = iStack_490;
                        puVar62 = (undefined8 *)(local_518 + (longlong)iVar46 * 0x14);
                        *puVar62 = CONCAT44(uStack_49c,uStack_4a0);
                        puVar62[1] = local_498;
                      }
                      auVar41._4_4_ = iStack_460;
                      auVar41._0_4_ = uStack_464;
                      auVar41._8_4_ = iStack_45c;
                      auVar41._12_4_ = iStack_458;
                      auVar20._8_8_ = uRam000000014ca9f310;
                      auVar20._0_8_ = _DAT_14ca9f308;
                      if (DAT_14ca9f318 != iStack_454 || auVar20 != auVar41) {
                        uStack_4b0 = plVar57;
                        cVar45 = FUN_1406af6ba(&uStack_464,local_2c0);
                        uVar58 = uStack_510;
                        iVar46 = (int)uStack_510;
                        if (cVar45 == '\0') goto LAB_14323a9dd;
                        uVar70 = (int)uStack_510 + 1;
                        uStack_510 = CONCAT44(uStack_510._4_4_,uVar70);
                        plVar57 = uStack_4b0;
                        if (uStack_510._4_4_ < uVar70) {
                          FUN_14170552e(&local_518,uVar58 & 0xffffffff);
                          plVar57 = uStack_4b0;
                        }
                        *(int *)(local_518 + 0x10 + (longlong)iVar46 * 0x14) = iStack_454;
                        puVar62 = (undefined8 *)(local_518 + (longlong)iVar46 * 0x14);
                        *puVar62 = CONCAT44(iStack_460,uStack_464);
                        puVar62[1] = CONCAT44(iStack_458,iStack_45c);
                      }
                      auVar43._4_4_ = uStack_44c;
                      auVar43._0_4_ = uStack_450;
                      auVar43._8_4_ = iStack_448;
                      auVar43._12_4_ = uStack_444;
                      auVar21._8_8_ = uRam000000014ca9f310;
                      auVar21._0_8_ = _DAT_14ca9f308;
                      if (DAT_14ca9f318 != iStack_440 || auVar21 != auVar43) {
                        uStack_4b0 = plVar57;
                        cVar45 = FUN_1406af6ba(&uStack_450,local_2c0);
                        uVar58 = uStack_510;
                        iVar46 = (int)uStack_510;
                        if (cVar45 == '\0') goto LAB_14323a9dd;
                        uVar70 = (int)uStack_510 + 1;
                        uStack_510 = CONCAT44(uStack_510._4_4_,uVar70);
                        plVar57 = uStack_4b0;
                        if (uStack_510._4_4_ < uVar70) {
                          FUN_14170552e(&local_518,uVar58 & 0xffffffff);
                          plVar57 = uStack_4b0;
                        }
                        *(int *)(local_518 + 0x10 + (longlong)iVar46 * 0x14) = iStack_440;
                        puVar62 = (undefined8 *)(local_518 + (longlong)iVar46 * 0x14);
                        *puVar62 = CONCAT44(uStack_44c,uStack_450);
                        puVar62[1] = CONCAT44(uStack_444,iStack_448);
                      }
                      auVar36[4] = local_488;
                      auVar36._0_4_ = uStack_48c;
                      auVar36[5] = uStack_487;
                      auVar36._6_2_ = uStack_486;
                      auVar36._8_4_ = uStack_484;
                      auVar36._12_4_ = uStack_480;
                      auVar22._8_8_ = uRam000000014ca9f310;
                      auVar22._0_8_ = _DAT_14ca9f308;
                      if (DAT_14ca9f318 != iStack_47c || auVar22 != auVar36) {
                        uStack_4b0 = plVar57;
                        cVar45 = FUN_1406af6ba(&uStack_48c,local_2c0);
                        uVar58 = uStack_510;
                        iVar46 = (int)uStack_510;
                        if (cVar45 == '\0') goto LAB_14323a9dd;
                        uVar70 = (int)uStack_510 + 1;
                        uStack_510 = CONCAT44(uStack_510._4_4_,uVar70);
                        plVar57 = uStack_4b0;
                        if (uStack_510._4_4_ < uVar70) {
                          FUN_14170552e(&local_518,uVar58 & 0xffffffff);
                          plVar57 = uStack_4b0;
                        }
                        *(int *)(local_518 + 0x10 + (longlong)iVar46 * 0x14) = iStack_47c;
                        puVar62 = (undefined8 *)(local_518 + (longlong)iVar46 * 0x14);
                        *puVar62 = CONCAT26(uStack_486,
                                            CONCAT15(uStack_487,CONCAT14(local_488,uStack_48c)));
                        puVar62[1] = CONCAT44(uStack_480,uStack_484);
                      }
                      auVar39._4_4_ = local_478._4_4_;
                      auVar39._0_4_ = (undefined4)local_478;
                      auVar39._8_4_ = uStack_470;
                      auVar39._12_4_ = uStack_46c;
                      auVar23._8_8_ = uRam000000014ca9f310;
                      auVar23._0_8_ = _DAT_14ca9f308;
                      if (DAT_14ca9f318 == local_468 && auVar23 == auVar39) {
                        bVar65 = 1;
                        bVar76 = 1;
                      }
                      else {
                        uStack_4b0 = plVar57;
                        cVar45 = FUN_1406af6ba(&local_478,local_2c0);
                        uVar58 = uStack_510;
                        iVar46 = (int)uStack_510;
                        if (cVar45 == '\0') goto LAB_14323a9dd;
                        uVar70 = (int)uStack_510 + 1;
                        uStack_510 = CONCAT44(uStack_510._4_4_,uVar70);
                        plVar57 = uStack_4b0;
                        if (uStack_510._4_4_ < uVar70) {
                          FUN_14170552e(&local_518,uVar58 & 0xffffffff);
                          plVar57 = uStack_4b0;
                        }
                        *(int *)(local_518 + 0x10 + (longlong)iVar46 * 0x14) = local_468;
                        puVar62 = (undefined8 *)(local_518 + (longlong)iVar46 * 0x14);
                        *puVar62 = CONCAT44(local_478._4_4_,(undefined4)local_478);
                        puVar62[1] = CONCAT44(uStack_46c,uStack_470);
                        bVar65 = 1;
                        bVar76 = 1;
                      }
                      goto LAB_14323aa42;
                    }
                  }
LAB_14323a9d6:
LAB_14323a9dd:
                  plVar57 = uStack_4b0;
                  if ((int)uStack_510 != 0) {
                    lVar56 = (longlong)(int)uStack_510 * 0x14;
                    lVar71 = local_518;
                    do {
                      FUN_1407e8cea(lVar71);
                      lVar71 = lVar71 + 0x14;
                      lVar56 = lVar56 + -0x14;
                      plVar57 = uStack_4b0;
                    } while (lVar56 != 0);
                  }
                  goto LAB_14323aa06;
                }
              }
LAB_14323aa42:
              local_2b8 = bVar76;
              uStack_4b0 = plVar57;
              if (local_518 != 0) {
                FUN_1400020a8();
              }
              if ((bVar65 & bVar76) == 1) {
                iVar46 = *(int *)(local_620 + 0x20);
                *(uint *)(local_620 + 0x20) = iVar46 + 1U;
                if (*(uint *)(local_620 + 0x24) < iVar46 + 1U) {
                  FUN_141790e16(local_608,iVar46);
                }
                lVar56 = *local_608;
                lVar71 = (longlong)iVar46 * 0x208;
                FUN_14143db70(lVar56 + lVar71,&local_4b8);
                *(undefined8 **)(lVar56 + 0x1f8 + lVar71) = local_2c0;
                *(byte *)(lVar56 + 0x200 + lVar71) = local_2b8;
              }
              else {
                if ((int)uStack_2a0 != local_274) {
                  local_4f8 = 0;
                  local_4f0 = 0;
                  local_518 = 0;
                  uStack_510 = 0;
                  local_4ec = 0xffffffff00000080;
                  local_4e4 = 0;
                  local_4d8 = 0;
                  local_4d0 = 0;
                  local_4c8 = *(undefined4 *)(lVar80 + 0x18);
                  FUN_1404114b2(&local_518,&local_2a8);
                  FUN_147441d3e(local_618,&local_518);
                  local_4d0 = 0;
                  if (local_4d8 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_1404112b2(&local_518);
                }
                if (DAT_14ca9f270 == (int *)0x0) {
                  DAT_14ca9f270 = (int *)FUN_14001cc68(0x38,0x10);
                  DAT_14ca9f270[4] = 0;
                  DAT_14ca9f270[5] = 0;
                  DAT_14ca9f270[6] = 0;
                  DAT_14ca9f270[7] = 0;
                  DAT_14ca9f270[0] = 0;
                  DAT_14ca9f270[1] = 0;
                  DAT_14ca9f270[2] = 0;
                  DAT_14ca9f270[3] = 0;
                  DAT_14ca9f270[8] = 0;
                  DAT_14ca9f270[9] = 0;
                  DAT_14ca9f270[10] = 0;
                  DAT_14ca9f270[0xb] = 0;
                  DAT_14ca9f270[0xc] = 0;
                  DAT_14ca9f270[0xd] = 0;
                  *(undefined ***)(DAT_14ca9f270 + 6) = &PTR_FUN_14a399cd0;
                  DAT_14ca9f270[0xc] = 0;
                }
                FUN_147441db6(DAT_14ca9f270,&local_4b8);
                LOCK();
                DAT_14ca9f248 = DAT_14ca9f248 + -1;
                UNLOCK();
              }
              local_260 = 0;
              if (local_268 != 0) {
                FUN_1400020a8();
              }
              FUN_1404112b2(&local_2a8);
              plVar57 = local_570;
              local_5c8 = 0x70;
              uStack_5c7 = 0x5f;
              uStack_5c6 = 0x49e3;
              uStack_5c4 = 1;
              if (local_570 != (longlong *)0x0) {
                if (*local_570 != 0) {
                  FUN_1400020a8();
                }
                FUN_1400020a8(plVar57);
              }
              lVar56 = local_550;
              if (local_550 != 0) {
                if (*(longlong *)(local_550 + 0x40) != 0) {
                  FUN_1400020a8();
                }
                FUN_1400020a8(lVar56);
              }
LAB_14323ab1b:
              plVar74 = (longlong *)plVar74[1];
              if (lVar80 != 0) {
                FUN_1404d5224(lVar80);
                FUN_1400020a8(lVar80);
              }
              FUN_141790cc6(local_600);
            }
            else {
LAB_14323a1e0:
              if ((bVar65 & 1) == 0) {
                LOCK();
                DAT_14ca9f248 = DAT_14ca9f248 + -1;
                UNLOCK();
                goto LAB_14323ab1b;
              }
              plVar74 = (longlong *)plVar74[1];
            }
          } while (plVar74 != (longlong *)0x0);
        }
      }
    }
    lpCriticalSection = local_5e0;
    lVar56 = local_620;
    lVar80 = DAT_14ca9f148;
    iVar46 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if ((iVar46 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) {
      uVar58 = 0;
    }
    else if (iVar46 == 2) {
      uVar58 = 0;
    }
    else if (iVar46 == 1) {
      DVar52 = FUN_140ad26c0();
      DVar53 = GetCurrentThreadId();
      uVar58 = (ulonglong)(DVar52 != DVar53);
    }
    else {
      uVar58 = 1;
    }
    if ((*(int *)(lVar80 + uVar58 * 4) != 0) && (DAT_14ca9f248 + DAT_14ca9f250 == 0)) {
      local_4b8.s.LowPart = (DWORD)DAT_14ca80690;
      local_4b8.s.HighPart = (LONG)((ulonglong)DAT_14ca80690 >> 0x20);
      local_5c8 = 0;
      FUN_1403458a2(lVar56 + 0x78,&local_258);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((local_60 ^ (ulonglong)local_658) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14323b1d6 FUN_14323b1d6 body=69 status=ok
// SIG undefined FUN_14323b1d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14323b1d6(void)

{
  _DAT_14ca9f3e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014323b218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca9f3f0,1);
  return;
}



// FUNCTION 14323b21c FUN_14323b21c body=91 status=ok
// SIG undefined FUN_14323b21c(void)

void FUN_14323b21c(longlong param_1)

{
  longlong lVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x400));
  lVar1 = 0x3f0;
  do {
    if (*(longlong *)(param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x1f0);
  lVar1 = 0x200;
  do {
    if (*(longlong *)(param_1 + -0x10 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 14323b29c FUN_14323b29c body=100 status=ok
// SIG undefined FUN_14323b29c(void)

void FUN_14323b29c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a395bd0;
  FUN_147443c52(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_147443c27(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149e002e8;
  return;
}



// FUNCTION 14323b300 FUN_14323b300 body=1293 status=ok
// SIG undefined FUN_14323b300(void)

void FUN_14323b300(longlong param_1)

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
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14323b33e;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14323b343;
      goto LAB_14323b39a;
    }
  }
  else {
LAB_14323b33e:
    if (iVar6 != 0x10) {
LAB_14323b39a:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2)) {
LAB_14323b7b6:
          if ((*(uint *)(param_1 + 0x58) & 0x7fffffff) != 0) {
            uVar15 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0x50) + uVar15 * 8) == 0) {
                FUN_1400bafc2(param_1,uVar15 & 0xffffffff,1);
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < (*(uint *)(param_1 + 0x58) & 0x7fffffff));
          }
          goto LAB_14323b439;
        }
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14323b7b6;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_14323b4fb;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14323dea8);
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
LAB_14323b4fb:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x16);
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
            puVar14 = (uint *)(puVar16 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_14323b57b;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_14323b57b:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a399d00;
        puVar16[0x15] = param_1;
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
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
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
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a399ce0;
        local_68[0] = FUN_14323e1e2;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"InitCommand",&DAT_14caa0ff4);
        if (local_68[0] != (code *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_14323b439;
    }
  }
LAB_14323b343:
  if ((*(uint *)(param_1 + 0x58) & 0x7fffffff) != 0) {
    uVar15 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x50) + uVar15 * 8) == 0) {
        FUN_1400bafc2(param_1,uVar15 & 0xffffffff,1);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < (*(uint *)(param_1 + 0x58) & 0x7fffffff));
  }
LAB_14323b439:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14323b80e FUN_14323b80e body=1859 status=ok
// SIG undefined FUN_14323b80e(void)

longlong FUN_14323b80e(longlong param_1,int param_2,char param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  DWORD DVar9;
  char cVar10;
  DWORD dwTlsIndex;
  DWORD DVar11;
  LPVOID lpTlsValue;
  int *piVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  undefined4 *puVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_e8 [32];
  ulonglong *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  longlong local_a8;
  longlong *local_a0;
  ulonglong *local_98;
  ulonglong local_90;
  ulonglong local_88;
  char local_80;
  ulonglong local_78;
  ulonglong *local_70;
  int iStack_68;
  undefined4 uStack_64;
  longlong local_60;
  ulonglong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar18 = (uint)DAT_14ca85550;
  cVar10 = FUN_147441efa(uVar18,*(undefined2 *)(param_1 + 0x5c));
  if (cVar10 == '\0') {
    local_70 = *(ulonglong **)(&DAT_14ca814bc + (ulonglong)uVar18 * 0x3c);
    FUN_1400021e4(&local_70,&local_98);
    local_c8 = (ulonglong *)&DAT_149dfb77a;
    if ((int)local_90 != 0) {
      local_c8 = local_98;
    }
    local_60 = *(longlong *)(&DAT_14ca814bc + (ulonglong)*(ushort *)(param_1 + 0x5c) * 0x3c);
    FUN_1400021e4(&local_60,&local_58);
    puVar21 = (ulonglong *)&DAT_149dfb77a;
    if ((int)uStack_50 != 0) {
      puVar21 = local_58;
    }
    FUN_140033559(".\\Runtime/RenderCore/Private/ShaderResource.cpp",0x289,
                  L"FShaderMapResource_InlineCode::InitRHI got platform %s but it is not compatible with %s"
                  ,puVar21);
    if (local_58 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    if (local_98 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    lVar23 = 0;
    goto LAB_14323b90c;
  }
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar11 = 0xffffffff;
    LOCK();
    bVar24 = DAT_14c7585d0 != 0xffffffff;
    DVar9 = dwTlsIndex;
    if (bVar24) {
      DVar11 = DAT_14c7585d0;
      DVar9 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar9;
    UNLOCK();
    if (bVar24) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar11;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_98);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  puVar21 = (ulonglong *)((longlong)lpTlsValue + 0x10);
  lVar23 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x48);
  lVar19 = (longlong)param_2;
  plVar17 = (longlong *)(lVar23 + lVar19 * 0x10);
  plVar5 = *(longlong **)(lVar23 + 8 + lVar19 * 0x10);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    puVar20 = (ulonglong *)(plVar5 + 3);
    uVar14 = *puVar20;
    *puVar20 = *puVar20 + 1;
    UNLOCK();
    if ((uVar14 & 0x3fffffff) == 0) {
      LOCK();
      plVar5[3] = plVar5[3] + 0x40000000;
      UNLOCK();
    }
  }
  FUN_14743951a(plVar17,&local_70);
  local_90 = *(ulonglong *)((longlong)lpTlsValue + 0x10);
  local_88 = *(ulonglong *)((longlong)lpTlsValue + 0x20);
  local_80 = '\0';
  local_78 = *(ulonglong *)((longlong)lpTlsValue + 0x28);
  *(ulonglong ***)((longlong)lpTlsValue + 0x28) = &local_98;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  plVar16 = (longlong *)*plVar17;
  local_a0 = plVar17;
  local_98 = puVar21;
  if (plVar16 == (longlong *)0x0) {
    piVar12 = (int *)0x0;
  }
  else {
    if ((plVar16[3] & 0x4000000000000000U) == 0) {
      (**(code **)(*plVar16 + 8))(plVar16);
    }
    piVar12 = (int *)plVar16[1];
  }
  iVar4 = *piVar12;
  lVar23 = (longlong)iVar4;
  if (plVar5 == (longlong *)0x0) {
    lVar13 = 0;
  }
  else {
    if ((plVar5[3] & 0x4000000000000000U) == 0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    lVar13 = plVar5[2];
  }
  if (lVar13 != lVar23) {
    puVar20 = (ulonglong *)(*(longlong *)((longlong)lpTlsValue + 0x10) + 0xfU & 0xfffffffffffffff0);
    uVar14 = lVar23 + (longlong)puVar20;
    local_a8 = lVar19;
    if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar14) {
      FUN_140023dd8(puVar21,iVar4 + 0x10);
      puVar20 = (ulonglong *)(*puVar21 + 0xf & 0xfffffffffffffff0);
      uVar14 = lVar23 + (longlong)puVar20;
    }
    *puVar21 = uVar14;
    if (plVar5 == (longlong *)0x0) {
      puVar21 = (ulonglong *)0x0;
      lVar19 = 0;
    }
    else {
      if ((plVar5[3] & 0x4000000000000000U) == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      puVar21 = (ulonglong *)plVar5[2];
      if ((plVar5[3] & 0x4000000000000000U) == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      lVar19 = plVar5[1];
    }
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = puVar21;
    FUN_140aa9920(DAT_14c892f54,puVar20,lVar23,lVar19);
    lVar19 = local_a8;
    local_70 = puVar20;
    iStack_68 = iVar4;
  }
  puVar22 = (undefined4 *)(lVar19 * 0x14 + *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x28));
  plVar17 = (longlong *)*local_a0;
  if (plVar17 == (longlong *)0x0) {
    lVar23 = 0;
  }
  else {
    if ((plVar17[3] & 0x4000000000000000U) == 0) {
      (**(code **)(*plVar17 + 8))(plVar17);
    }
    lVar23 = plVar17[1];
  }
  uVar2 = *(undefined1 *)(lVar23 + 8);
  switch(uVar2) {
  case 0:
    local_58 = local_70;
    uStack_50 = CONCAT44(uStack_64,iStack_68);
    (**(code **)(*DAT_14ca83900 + 0x78))(DAT_14ca83900,&local_60,&local_58,puVar22);
    break;
  case 1:
    local_58 = local_70;
    uStack_50 = CONCAT44(uStack_64,iStack_68);
    (**(code **)(*DAT_14ca83900 + 0x88))(DAT_14ca83900,&local_60,&local_58,puVar22);
    break;
  case 2:
    local_58 = local_70;
    uStack_50 = CONCAT44(uStack_64,iStack_68);
    (**(code **)(*DAT_14ca83900 + 0x90))(DAT_14ca83900,&local_60,&local_58,puVar22);
    break;
  case 3:
    local_58 = local_70;
    uStack_50 = CONCAT44(uStack_64,iStack_68);
    (**(code **)(*DAT_14ca83900 + 0x70))(DAT_14ca83900,&local_60,&local_58,puVar22);
    break;
  case 4:
    local_58 = local_70;
    uStack_50 = CONCAT44(uStack_64,iStack_68);
    (**(code **)(*DAT_14ca83900 + 0x80))(DAT_14ca83900,&local_60,&local_58,puVar22);
    break;
  case 5:
    local_58 = local_70;
    uStack_50 = CONCAT44(uStack_64,iStack_68);
    (**(code **)(*DAT_14ca83900 + 0xa0))(DAT_14ca83900,&local_60,&local_58,puVar22);
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    if ((DAT_14ca84ef4 == '\x01') && (DAT_14ca84ef5 == '\x01')) {
      local_58 = local_70;
      uStack_50 = CONCAT44(uStack_64,iStack_68);
      local_c8 = (ulonglong *)CONCAT71(local_c8._1_7_,uVar2);
      (**(code **)(*DAT_14ca83900 + 0x4e8))(DAT_14ca83900,&local_60,&local_58,puVar22);
      break;
    }
    goto switchD_14323bb6e_default;
  case 10:
    lVar23 = *DAT_14ca83900;
    local_c8 = (ulonglong *)CONCAT71(local_c8._1_7_,10);
    goto LAB_14323bd34;
  case 0xb:
    lVar23 = *DAT_14ca83900;
    local_c8 = (ulonglong *)CONCAT71(local_c8._1_7_,0xb);
LAB_14323bd34:
    uStack_50 = CONCAT44(uStack_64,iStack_68);
    local_58 = local_70;
    (**(code **)(lVar23 + 0xa8))(DAT_14ca83900,&local_60,&local_58,puVar22);
    break;
  default:
    goto switchD_14323bb6e_default;
  }
  lVar23 = local_60;
  if (local_60 == 0) {
switchD_14323bb6e_default:
    if (param_3 != '\0') {
      local_58 = (ulonglong *)0x0;
      uStack_50 = 0;
      FUN_1407c8a86(puVar22,0x14,&local_58);
      local_c8 = local_58;
      if ((int)uStack_50 == 0) {
        local_c8 = (ulonglong *)&DAT_149dfb77a;
      }
      FUN_140033559(".\\Runtime/RenderCore/Private/ShaderResource.cpp",699,
                    L"FShaderMapResource_InlineCode::InitRHI is unable to create a shader: frequency=%d, hash=%s."
                    ,uVar2);
      if (local_58 != (ulonglong *)0x0) {
        FUN_1400020a8();
      }
    }
    lVar23 = 0;
  }
  else {
    *(undefined4 *)(local_60 + 0x98) = puVar22[4];
    uVar6 = puVar22[1];
    uVar7 = puVar22[2];
    uVar8 = puVar22[3];
    *(undefined4 *)(local_60 + 0x88) = *puVar22;
    *(undefined4 *)(local_60 + 0x8c) = uVar6;
    *(undefined4 *)(local_60 + 0x90) = uVar7;
    *(undefined4 *)(local_60 + 0x94) = uVar8;
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
    LOCK();
    puVar1 = (uint *)(local_60 + 8);
    uVar18 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar18 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_60 + 8);
      LOCK();
      uVar18 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar18 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_60 + 0xd);
        plVar15 = (longlong *)FUN_14001cc68(0x10,8);
        plVar15[1] = lVar23;
        plVar17 = DAT_14ca843c0;
        plVar16 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar15 = (longlong)plVar17;
            LOCK();
            bVar24 = plVar17 != DAT_14ca843c0;
            plVar16 = plVar15;
            if (bVar24) {
              plVar17 = DAT_14ca843c0;
              plVar16 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar16;
            UNLOCK();
          } while (bVar24);
        }
        else {
          do {
            *plVar15 = (longlong)plVar16;
            LOCK();
            bVar24 = plVar16 != DAT_14ca843c8;
            plVar17 = plVar15;
            if (bVar24) {
              plVar16 = DAT_14ca843c8;
              plVar17 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar17;
            UNLOCK();
          } while (bVar24);
        }
      }
    }
  }
  if (local_80 == '\0') {
    local_80 = '\x01';
    *(int *)(local_98 + 4) = (int)local_98[4] + -1;
    if (local_88 != local_98[2]) {
      FUN_14004673c();
    }
    *local_98 = local_90;
    local_98[3] = local_78;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar5 + 3;
    lVar19 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (((uint)lVar19 & 0x3fffffff) == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      plVar5[1] = 0;
      plVar5[2] = 0;
      LOCK();
      puVar21 = (ulonglong *)(plVar5 + 3);
      uVar14 = *puVar21;
      *puVar21 = *puVar21 - 0x40000000;
      UNLOCK();
      if ((uVar14 & 0xfffffffc0000000) == 0x40000000) {
        (**(code **)*plVar5)(plVar5,1);
      }
    }
  }
LAB_14323b90c:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar23;
}



// FUNCTION 14323bf52 FUN_14323bf52 body=69 status=ok
// SIG undefined FUN_14323bf52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14323bf52(void)

{
  _DAT_14caa0078 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014323bf94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa0080,1);
  return;
}



// FUNCTION 14323bf97 FUN_14323bf97 body=69 status=ok
// SIG undefined FUN_14323bf97(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14323bf97(void)

{
  _DAT_14caa0088 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014323bfd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa0090,1);
  return;
}



// FUNCTION 14323c24f FUN_14323c24f body=741 status=ok
// SIG undefined FUN_14323c24f(void)

void FUN_14323c24f(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [32];
  int *local_78;
  undefined1 local_65;
  int local_64;
  undefined8 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = (**(code **)(*param_2 + 8))();
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar6 = puVar8 + 0xc;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x70);
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar6 = puVar8 + 0xc;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  *puVar8 = &PTR_FUN_14a399d78;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar8;
  *(undefined4 *)(puVar8 + 2) = *param_3;
  *(undefined4 *)((longlong)puVar8 + 0x14) = param_3[1];
  *(undefined4 *)((longlong)puVar8 + 0x1c) = param_3[2];
  if (*(char *)(lVar5 + 0x18) == '\0') {
    puVar8[0xb] = param_2;
    uVar2 = DAT_14ca84e40;
    if (0xfffe < (int)DAT_14ca84e40) {
      uVar2 = 0xffff;
    }
    *(uint *)(puVar8 + 4) =
         (uVar2 & 0xfffe) - ((uVar2 & 0xfffe) + ((uVar2 & 0xffff) / 0x2e) * -0x2e & 0xffff);
    iVar3 = 4;
  }
  else {
    if (*(char *)(lVar5 + 0x18) == '\x01') {
      if ((*(uint *)(lVar5 + 0x68) & 0x10) != 0) {
        puVar8[10] = param_2;
        uVar9 = 4;
        iVar7 = 2;
        iVar3 = 2;
        goto LAB_14323c39c;
      }
      if ((*(uint *)(lVar5 + 0x68) >> 0x10 & 1) != 0) {
        uVar2 = *(uint *)(param_2[7] + 0x60);
        uVar4 = uVar2;
        if ((int)uVar2 < 0) {
          uVar4 = uVar2 + 3;
        }
        iVar7 = 0x1f;
        if ((int)uVar4 >> 2 != 0) {
          for (; (uint)((int)uVar4 >> 2) >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        iVar3 = 0;
        if (6 < uVar2 + 3) {
          iVar3 = iVar7;
        }
        uVar9 = 1;
        switch(iVar3) {
        case 0:
          puVar8[9] = param_2;
          iVar7 = 0;
          break;
        case 1:
          puVar8[8] = param_2;
          iVar7 = 1;
          break;
        case 2:
          puVar8[7] = param_2;
          iVar7 = 2;
          break;
        case 3:
          puVar8[6] = param_2;
          iVar7 = 3;
        }
        iVar3 = 1;
        goto LAB_14323c39c;
      }
    }
    puVar8[5] = param_2;
    iVar3 = 0;
  }
  uVar9 = 1;
  iVar7 = 2;
LAB_14323c39c:
  uVar1 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  FUN_145d121c0();
  FUN_1448e935e(uVar1,local_58,&DAT_14caa04c0,iVar7 * 5 + iVar3);
  FUN_145d121c0();
  iVar3 = (int)((uint)param_3[1] / uVar9);
  iVar7 = iVar3 + 0x3f;
  local_64 = iVar3 + 0x7e;
  if (-1 < iVar7) {
    local_64 = iVar7;
  }
  local_64 = local_64 >> 6;
  local_60 = &DAT_100000001;
  iVar3 = 1;
  if (DAT_14ca84f24 < local_64) {
    iVar3 = local_64 + 0xfe;
    if (-1 < local_64 + 0x7f) {
      iVar3 = local_64 + 0x7f;
    }
    iVar3 = iVar3 >> 7;
    local_60 = (undefined1 *)CONCAT44(1,iVar3);
    local_64 = 0x80;
  }
  if (DAT_14ca84f28 < iVar3) {
    iVar7 = iVar3 + 0xfe;
    if (-1 < iVar3 + 0x7f) {
      iVar7 = iVar3 + 0x7f;
    }
    local_60 = (undefined1 *)CONCAT44(iVar7 >> 7,0x80);
  }
  local_78 = &local_64;
  FUN_1474428a3(param_1,&local_65,local_58,puVar8 + 2);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14323c536 FUN_14323c536 body=972 status=ok
// SIG undefined FUN_14323c536(void)

void FUN_14323c536(undefined8 *param_1,longlong param_2,int param_3,int param_4,byte param_5,
                  undefined8 param_6)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined4 local_a0;
  longlong *local_90;
  int local_84;
  uint local_80;
  uint local_7c;
  undefined8 *local_78;
  ulonglong local_70;
  longlong local_68;
  int local_60;
  uint local_5c;
  uint local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_1 + 2) = 0;
  *(int *)((longlong)param_1 + 0x14) = param_3;
  *(int *)(param_1 + 3) = param_4;
  iVar13 = 4;
  if (param_5 != 0) {
    iVar13 = 0x10;
  }
  uVar19 = param_3 * 4;
  *(byte *)(param_1 + 6) = param_5;
  bVar5 = 0;
  bVar9 = 0;
  uVar17 = (ulonglong)(uVar19 + (uVar19 == 0)) - 1;
  if (uVar17 != 0) {
    lVar14 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    bVar9 = (byte)lVar14 ^ 0x3f;
  }
  uVar17 = 1L << (-bVar9 & 0x3f);
  if (0x1fffffff < uVar17) {
    uVar17 = 0x20000000;
  }
  uVar12 = param_4 * param_3;
  uVar10 = (ulonglong)(uVar12 + (uVar12 == 0)) - 1;
  if (uVar10 != 0) {
    lVar14 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    bVar5 = (byte)lVar14 ^ 0x3f;
  }
  uVar10 = 1L << (-bVar5 & 0x3f);
  uVar20 = (uint)(param_5 ^ 1) * 0x10;
  if ((uint)(iVar13 << 0x1b) <= uVar10) {
    uVar10 = (ulonglong)(uint)(iVar13 << 0x1b);
  }
  local_68 = *(longlong *)(param_2 + 0x18);
  local_90 = param_1 + 4;
  puVar4 = (undefined8 *)param_1[4];
  if (puVar4 != (undefined8 *)0x0) {
    local_70 = puVar4[5];
    uVar6 = ((uint)(local_70 >> 0x14) & 0xffff ^ (uint)(local_70 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    uVar15 = uVar6 & 0x7fffffff ^ uVar6 >> 0x10;
    uVar6 = *(uint *)(param_2 + 0x2c0);
    uVar16 = uVar15 & uVar6;
    lVar14 = param_2 + 0x2a8;
    if (*(longlong *)(param_2 + 0x2b0) != 0) {
      lVar14 = *(longlong *)(param_2 + 0x2b0);
    }
    lVar7 = param_2 + 0x290;
    if (*(longlong *)(param_2 + 0x298) != 0) {
      lVar7 = *(longlong *)(param_2 + 0x298);
    }
    do {
      local_84 = iVar13;
      local_80 = uVar19;
      local_7c = uVar12;
      local_78 = puVar4;
      if (*(uint *)(lVar14 + (longlong)(int)uVar16 * 4) == uVar15) {
        iVar3 = *(int *)(lVar7 + (longlong)(int)uVar16 * 4);
        lVar11 = (longlong)iVar3 * 0x10;
        if (local_70 == *(ulonglong *)(*(longlong *)(param_2 + 0x250) + lVar11)) {
          if (((iVar3 != -1) &&
              (plVar18 = (longlong *)(lVar11 + *(longlong *)(param_2 + 0x250) + 8),
              plVar18 != (longlong *)0x0)) && (*plVar18 != 0)) {
            *local_90 = 0;
            LOCK();
            piVar1 = (int *)(puVar4 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar4)(puVar4,1);
            }
            puVar4 = (undefined8 *)param_1[5];
            if (puVar4 != (undefined8 *)0x0) {
              param_1[5] = 0;
              LOCK();
              piVar1 = (int *)(puVar4 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar4)(puVar4,1);
              }
            }
          }
          break;
        }
      }
      uVar16 = uVar16 + 1 & uVar6;
    } while (uVar16 != (*(int *)(param_2 + 0x2c4) + uVar15 + 1 & uVar6));
    lVar14 = *local_90;
    iVar13 = local_84;
    uVar12 = local_7c;
    uVar19 = local_80;
    if (((lVar14 != 0) &&
        (uVar6 = *(int *)(lVar14 + 0x14) * *(int *)(lVar14 + 0x10), local_80 <= uVar6)) &&
       (uVar6 >> 1 <= (uint)uVar17)) goto LAB_14323c7c7;
  }
  local_5c = (uint)uVar17 >> 2;
  local_50 = 0;
  local_60 = 4;
  local_58 = uVar20 + 0x10100;
  FUN_1449ed2ff(&local_60,local_90,param_6,0);
LAB_14323c7c7:
  lVar14 = param_1[5];
  if (((lVar14 == 0) || (uVar6 = *(int *)(lVar14 + 0x14) * *(int *)(lVar14 + 0x10), uVar6 < uVar12))
     || ((uint)uVar10 < uVar6 >> 1)) {
    local_5c = (uint)uVar10 >> (param_5 * '\x02' + 2 & 0x1f);
    local_50 = 0;
    local_58 = uVar20 | 0x10100;
    local_60 = iVar13;
    FUN_1449ed2ff(&local_60,param_1 + 5,param_6,0);
  }
  lVar14 = local_68;
  uVar8 = *(undefined8 *)(*local_90 + 0x28);
  cVar2 = *(char *)(local_68 + 0x69);
  if (cVar2 == '\0') {
    FUN_14002049c(local_68,1);
  }
  local_a0 = 1;
  local_a8 = uVar19;
  uVar8 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar14,uVar8,0);
  if (cVar2 == '\0') {
    FUN_14002049c(lVar14,0);
  }
  *param_1 = uVar8;
  uVar8 = *(undefined8 *)(param_1[5] + 0x28);
  cVar2 = *(char *)(lVar14 + 0x69);
  if (cVar2 == '\0') {
    FUN_14002049c(lVar14,1);
  }
  local_a0 = 1;
  local_a8 = uVar12;
  uVar8 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar14,uVar8,0);
  if (cVar2 == '\0') {
    FUN_14002049c(lVar14,0);
  }
  param_1[1] = uVar8;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14323c904 FUN_14323c904 body=793 status=ok
// SIG undefined FUN_14323c904(void)

void FUN_14323c904(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_1[4] + 0x28);
  if (*(char *)(lVar5 + 0x69) == '\0') {
    FUN_14002049c(lVar5,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar5,uVar3);
    FUN_14002049c(lVar5,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar5,uVar3);
  }
  uVar3 = *(undefined8 *)(param_1[5] + 0x28);
  if (*(char *)(lVar5 + 0x69) == '\0') {
    FUN_14002049c(lVar5,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar5,uVar3);
    FUN_14002049c(lVar5,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar5,uVar3);
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)(param_1 + 2) != 0) {
    lVar5 = FUN_144735dd8(param_2,param_1 + 4,0);
    cVar1 = *(char *)(lVar5 + 0x68);
    local_70 = (longlong *)(param_2 + 0x70);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar6) {
      FUN_140023dd8(local_70,0x50);
      puVar8 = (undefined8 *)(*local_70 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar6;
    puVar8[1] = *(undefined8 *)(lVar5 + 8);
    puVar8[2] = 0;
    *(undefined1 *)(puVar8 + 3) = 3;
    *(undefined8 *)((longlong)puVar8 + 0x1c) = 0xffffffffffffffff;
    *puVar8 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar8 + 5) = cVar1 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar8 + 0x2c) = 0xffffffff00000000;
    puVar8[7] = 0;
    puVar8[8] = lVar5;
    iVar2 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
    local_60 = param_3;
    if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar8;
    *(int *)((longlong)puVar8 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    local_68 = param_2 + 0x198;
    lVar5 = FUN_144735dd8(param_2,param_1 + 5,0);
    plVar4 = local_70;
    cVar1 = *(char *)(lVar5 + 0x68);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar6) {
      FUN_140023dd8(local_70,0x50);
      puVar7 = (undefined8 *)(*plVar4 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar6;
    puVar7[1] = *(undefined8 *)(lVar5 + 8);
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 3;
    *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
    *puVar7 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar7 + 5) = cVar1 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
    puVar7[7] = 0;
    puVar7[8] = lVar5;
    iVar2 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
      FUN_1447568fc(local_68,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar7;
    *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    local_54 = *(undefined4 *)(param_1 + 2);
    local_78 = &local_54;
    local_50 = *(undefined4 *)(param_1 + 3);
    local_4c = 0xffffffff;
    FUN_1401509dc(param_2,local_60,puVar8,puVar7);
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14323cc1e FUN_14323cc1e body=216 status=ok
// SIG undefined FUN_14323cc1e(void)

void FUN_14323cc1e(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  LOCK();
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  UNLOCK();
  uVar2 = *(undefined4 *)(param_1 + 7);
  uVar3 = param_1[5];
  cVar1 = *(char *)(param_2 + 0x69);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,1);
  }
  uVar3 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar3,0,uVar2,1);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,0);
  }
  *param_1 = uVar3;
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x3c);
  uVar3 = param_1[6];
  cVar1 = *(char *)(param_2 + 0x69);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,1);
  }
  uVar3 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar3,0,uVar2,1);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,0);
  }
  param_1[1] = uVar3;
  return;
}



// FUNCTION 14323ccf6 FUN_14323ccf6 body=186 status=ok
// SIG undefined FUN_14323ccf6(void)

void FUN_14323ccf6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  LOCK();
  *(undefined1 *)(param_1 + 0x41) = 2;
  UNLOCK();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar1);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  if (*(char *)(param_2 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014323cd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar1);
    return;
  }
  FUN_14002049c(param_2,1);
  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar1);
  FUN_14002049c(param_2,0);
  return;
}



// FUNCTION 14323cdb0 FUN_14323cdb0 body=1703 status=ok
// SIG undefined FUN_14323cdb0(void)

longlong * FUN_14323cdb0(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 local_b8 [32];
  int *local_98;
  longlong *local_90;
  ulonglong local_88;
  undefined4 local_80;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined4 local_67;
  undefined3 uStack_63;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_b8;
  if ((int)param_1[1] == 0) {
    *param_2 = 0;
    goto LAB_14323d012;
  }
  uVar5 = *(uint *)(param_1 + 2);
  *param_2 = 0;
  if ((uVar5 < 0x8001) || ((*(byte *)(param_3 + 0x520) & 1) == 0)) {
    uVar7 = *(undefined8 *)(param_3 + 0x18);
    piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    iVar6 = *piVar1;
    if (iVar6 == 1) {
      FUN_140ad26c0();
      GetCurrentThreadId();
      iVar6 = *piVar1;
    }
    if ((iVar6 == 0x60000000) || (iVar6 == 0)) {
      *piVar1 = 0x40000010;
    }
    local_98 = piVar1;
    local_90 = param_2;
    if ((longlong)(int)param_1[1] != 0) {
      lVar16 = (longlong)(int)param_1[1] * 0x50;
      plVar15 = (longlong *)(*param_1 + 0x30);
      do {
        FUN_14323cc1e(plVar15[-5],uVar7);
        lVar2 = plVar15[-5];
        pcVar3 = (code *)plVar15[-4];
        plVar13 = (longlong *)plVar15[-2];
        if ((longlong *)plVar15[-2] == (longlong *)0x0) {
          plVar13 = plVar15;
        }
        uVar9 = (**(code **)(*plVar13 + 8))();
        (*pcVar3)(uVar9,lVar2);
        FUN_14323ccf6(plVar15[-5],uVar7);
        plVar15 = plVar15 + 10;
        lVar16 = lVar16 + -0x50;
      } while (lVar16 != 0);
    }
    param_2 = local_90;
    if ((iVar6 == 0x60000000) || (iVar6 == 0)) {
      *local_98 = iVar6;
    }
LAB_14323cf8f:
    puVar11 = (undefined8 *)*param_2;
  }
  else {
    lVar16 = *(longlong *)(param_3 + 0x18);
    uVar7 = FUN_14001cc68(0x308,0x10);
    FUN_14009016e(uVar7,*(undefined4 *)(lVar16 + 0x17c),0);
    local_78 = 0;
    uStack_70 = 0;
    FUN_144775d28(&local_78,1);
    uVar4 = uStack_70;
    lVar16 = (longlong)(int)uStack_70;
    uVar5 = (int)uStack_70 + 1;
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
    if (uStack_70._4_4_ < uVar5) {
      FUN_14741464c(&local_78,uVar4 & 0xffffffff);
    }
    *(undefined8 *)(local_78 + lVar16 * 8) = uVar7;
    local_88 = local_78;
    local_80 = (int)uStack_70;
    FUN_14007658c(&DAT_14ca850c8,&local_88,0);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    puVar8 = TlsGetValue(DAT_14c896140);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined4 *)(puVar8 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar8);
    }
    puVar11 = (undefined8 *)puVar8[1];
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)*puVar8;
      if (puVar11 == (undefined8 *)0x0) {
        uVar5 = (uint)DAT_14c896180;
        uVar4 = DAT_14c896180;
        while (DAT_14c896180 = uVar4, local_78 = uVar4, (uVar4 & 0x3ffffff) != 0) {
          local_88 = (uVar4 & 0xfffffffffc000000) + 0x4000000;
          if (local_88 >> 0x1a < uVar4 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar14 = (ulonglong)((uVar5 & 0x3ffffff) >> 0xe);
          uVar17 = (ulonglong)((uint)uVar4 & 0x3fff);
          local_88 = local_88 & 0xfffffffffc000000 |
                     (ulonglong)
                     *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar14 * 8) + 0x10 + uVar17 * 0x18);
          LOCK();
          bVar18 = local_78 == DAT_14c896180;
          uVar4 = local_88;
          if (!bVar18) {
            uVar4 = DAT_14c896180;
          }
          DAT_14c896180 = uVar4;
          UNLOCK();
          if (bVar18) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar14 * 8) + uVar17 * 0x18 + 0x10) = 0;
            puVar11 = *(undefined8 **)
                       (*(longlong *)(&DAT_14c833b00 + uVar14 * 8) + 8 +
                       (ulonglong)(uVar5 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar5 & 0x3ffffff);
            puVar8[1] = puVar11;
            if (puVar11 != (undefined8 *)0x0) goto LAB_14323d1b5;
            goto LAB_14323d3e9;
          }
          uVar5 = (uint)DAT_14c896180;
          uVar4 = DAT_14c896180;
        }
        puVar8[1] = 0;
LAB_14323d3e9:
        puVar11 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar8[1] = puVar11;
        iVar6 = 0xff;
        puVar12 = puVar11;
        do {
          puVar10 = puVar12 + 0x20;
          *puVar12 = puVar10;
          iVar6 = iVar6 + -1;
          puVar12 = puVar10;
        } while (iVar6 != 0);
      }
      else {
        puVar8[1] = puVar11;
        puVar10 = puVar8;
      }
      *puVar10 = 0;
LAB_14323d1b5:
      *(undefined4 *)(puVar8 + 2) = 0x100;
      iVar6 = 0xff;
    }
    else {
      iVar6 = *(int *)(puVar8 + 2) + -1;
    }
    puVar8[1] = *puVar11;
    *(int *)(puVar8 + 2) = iVar6;
    *puVar11 = UE::Tasks::Private::FTaskBase::vftable;
    puVar11[1] = &DAT_100000002;
    puVar11[2] = 0;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined4 *)(puVar11 + 4) = 0xffffffff;
    puVar11[6] = 0;
    puVar11[7] = 0x100000000;
    *(undefined1 *)(puVar11 + 8) = 1;
    puVar11[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    puVar11[0xf] = 0;
    puVar11[0x10] = 0xe800000000000020;
    puVar11[0x12] = 0;
    puVar11[0x13] = 0x100000000;
    *(undefined2 *)(puVar11 + 0x14) = 0;
    LOCK();
    bVar18 = *(char *)(puVar11 + 8) == '\x01';
    if (bVar18) {
      *(char *)(puVar11 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar18) {
      FUN_14008cdb0(puVar11 + 8);
    }
    *puVar11 = &PTR_FUN_14a399e38;
    if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
    }
    puVar11[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar11[9] = puVar11;
    puVar11[10] = puVar11;
    lVar16 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar16 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar16 + 0x30);
    }
    puVar11[0xf] = uVar9;
    puVar11[0x10] = 0xc800005288327c00;
    *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
    puVar11[0x15] = param_3;
    puVar11[0x16] = param_1;
    puVar11[0x17] = uVar7;
    *(undefined1 *)(puVar11 + 0x18) = 1;
    *(undefined4 *)((longlong)puVar11 + 0xc1) = local_67;
    *(uint *)((longlong)puVar11 + 0xc4) = CONCAT31(uStack_63,local_67._3_1_);
    *puVar11 = &PTR_FUN_14a399e28;
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    local_78 = CONCAT71(local_78._1_7_,1);
    FUN_1447439e4(puVar11);
    puVar8 = (undefined8 *)*param_2;
    *param_2 = (longlong)puVar11;
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar8)(puVar8,1);
      }
      goto LAB_14323cf8f;
    }
  }
  if (puVar11 != (undefined8 *)0x0) {
    iVar6 = *(int *)(param_3 + 0x508);
    *(uint *)(param_3 + 0x508) = iVar6 + 1U;
    if (*(uint *)(param_3 + 0x50c) < iVar6 + 1U) {
      FUN_1401d03aa((longlong *)(param_3 + 0x500),iVar6);
    }
    *(undefined8 **)(*(longlong *)(param_3 + 0x500) + (longlong)iVar6 * 8) = puVar11;
    LOCK();
    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
    UNLOCK();
  }
  FUN_14473400f(0,0);
  if ((longlong)(int)param_1[1] != 0) {
    puVar8 = (undefined8 *)*param_1;
    puVar11 = puVar8 + (longlong)(int)param_1[1] * 10;
    do {
      FUN_1401d131a(*puVar8,param_3,puVar8[1]);
      puVar8 = puVar8 + 10;
    } while (puVar8 != puVar11);
  }
LAB_14323d012:
  if ((local_60 ^ (ulonglong)local_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14323d458 FUN_14323d458 body=1377 status=ok
// SIG undefined FUN_14323d458(void)

void FUN_14323d458(longlong *param_1,longlong param_2,undefined8 param_3,int param_4,int param_5,
                  uint param_6,byte param_7,char param_8,undefined4 param_9)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_5 = param_5 * param_4;
  *(int *)(param_1 + 3) = param_5;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_98 = CONCAT44(param_4,param_5);
  uStack_90 = CONCAT44(uStack_90._4_4_,param_6) | 0x10108;
  local_58 = param_3;
  if ((param_6 & 0x100000) == 0 && param_5 == 0) {
    FUN_14570b4be(param_2,&local_88);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,param_9);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = param_9;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,param_9);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = param_9;
  }
  if (&local_a0 == param_1) {
LAB_14323d60d:
    lVar3 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_a0 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar9) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  else {
    lVar3 = *param_1;
    *param_1 = local_a0;
    local_a0 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar9) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
      goto LAB_14323d60d;
    }
  }
  uStack_90 = 0;
  uVar2 = *(uint *)(*param_1 + 0x28);
  cVar8 = '\x04';
  if (((uVar2 & 0x10) == 0) && (cVar8 = '\x02', (uVar2 >> 0x10 & 1) == 0)) {
    cVar8 = ((byte)(uVar2 >> 0xd) & 1) * '\x02' + '\x01';
  }
  local_98 = (ulonglong)CONCAT13(param_8 * '\x02' | param_7,CONCAT12(cVar8,1));
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_a0,param_2);
  plVar7 = param_1 + 1;
  if (plVar7 == &local_a0) {
LAB_14323d75b:
    lVar3 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_a0 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar9) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  else {
    lVar3 = *plVar7;
    *plVar7 = local_a0;
    local_a0 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar9) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
      goto LAB_14323d75b;
    }
  }
  uStack_90 = 0;
  uVar2 = *(uint *)(*param_1 + 0x28);
  bVar4 = 4;
  if (((uVar2 & 0x10) == 0) && (bVar4 = 2, (uVar2 >> 0x10 & 1) == 0)) {
    bVar4 = ((byte)(uVar2 >> 0xd) & 1) * '\x02' + 1;
  }
  local_98 = (ulonglong)bVar4 << 0x10;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  param_1 = param_1 + 2;
  if (param_1 != &local_a0) {
    lVar3 = *param_1;
    *param_1 = local_a0;
    local_a0 = 0;
    if (lVar3 == 0) goto LAB_14323d8e2;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar3 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar3 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar3;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar9) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar9 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar9) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar3 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(local_a0 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar3;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar9) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar9 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar9) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
LAB_14323d8e2:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14323d9c6 FUN_14323d9c6 body=1102 status=ok
// SIG undefined FUN_14323d9c6(void)

void FUN_14323d9c6(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  ulonglong *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FPrimitiveIdDummyBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_98 = 4;
  uStack_90 = CONCAT44(uStack_90._4_4_,0x4101);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  plVar10 = (longlong *)(param_1 + 0x10);
  if (plVar10 == &local_a0) {
LAB_14323db5b:
    lVar5 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar5 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
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
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_14323db5b;
    }
  }
  lVar5 = *plVar10;
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
  local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,4);
  puVar7 = (undefined4 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar5,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,0);
  }
  *puVar7 = 0;
  lVar5 = *plVar10;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
  }
  if ((*plVar10 == 0) || ((*(byte *)(*plVar10 + 0x28) & 0x10) == 0)) {
    local_98._0_3_ = 0x11c00;
  }
  else {
    local_98._0_3_ = 0x40000;
  }
  local_98 = (ulonglong)(uint3)local_98;
  uStack_90 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar10 = (longlong *)(param_1 + 0x18);
  if (plVar10 != &local_a0) {
    lVar5 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar5 == 0) goto LAB_14323dd86;
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
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar5 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_14323dd86:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14323de15 FUN_14323de15 body=47 status=ok
// SIG undefined FUN_14323de15(void)

void FUN_14323de15(void)

{
  DAT_14caa0970 = &PTR_FUN_14a399e50;
  FUN_144725486(&DAT_14caa0970);
  FUN_1463214be(&DAT_14caa0970);
  return;
}



// FUNCTION 14323de44 FUN_14323de44 body=100 status=ok
// SIG undefined FUN_14323de44(void)

void FUN_14323de44(void)

{
  DAT_14caa0990 = &PTR_FUN_14a399eb0;
  FUN_144725486(&DAT_14caa0990);
  DAT_14caa0990 = &PTR_FUN_14a38cd70;
  DAT_14caa099e = 2;
  if ((DAT_14caa0998 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 14323df30 FUN_14323df30 body=515 status=ok
// SIG undefined FUN_14323df30(void)

void FUN_14323df30(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar14;
  
  uVar9 = *(uint *)(param_1 + 0x20);
  if ((*(longlong *)(param_1 + 0x18) == 0) ||
     (lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10), lVar12 == 0)) {
    uVar11 = *(uint *)(param_1 + 0x10);
    plVar6 = *(longlong **)(param_2 + 0x38);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x178);
    lVar12 = 0;
    if (UNRECOVERED_JUMPTABLE != FUN_144b1a0a0) goto LAB_14323e0b7;
  }
  else {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
    uVar11 = *(uint *)(param_1 + 0x10);
    LOCK();
    puVar1 = (uint *)(lVar12 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar12 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar12 + 0xd);
        plVar4 = (longlong *)FUN_14001cc68(0x10,8);
        plVar4[1] = lVar12;
        plVar6 = DAT_14ca843c0;
        plVar5 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar4 = (longlong)plVar6;
            LOCK();
            bVar14 = plVar6 != DAT_14ca843c0;
            plVar5 = plVar4;
            if (bVar14) {
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar5;
            UNLOCK();
          } while (bVar14);
        }
        else {
          do {
            *plVar4 = (longlong)plVar5;
            LOCK();
            bVar14 = plVar5 != DAT_14ca843c8;
            plVar6 = plVar4;
            if (bVar14) {
              plVar5 = DAT_14ca843c8;
              plVar6 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar6;
            UNLOCK();
          } while (bVar14);
        }
      }
    }
    plVar6 = *(longlong **)(param_2 + 0x38);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x178);
    if (UNRECOVERED_JUMPTABLE != FUN_144b1a0a0) {
LAB_14323e0b7:
                    /* WARNING: Could not recover jumptable at 0x00014323e0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,uVar11,lVar12,(ulonglong)uVar9);
      return;
    }
    uVar2 = *(uint *)(plVar6 + 0x23);
    if (uVar2 == 0) {
      uVar7 = 0x20;
    }
    else {
      uVar7 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
    }
    lVar12 = *(longlong *)(lVar12 + 0xf8 + (ulonglong)uVar7 * 8);
  }
  lVar10 = lVar12 + 0x78;
  if (lVar12 == 0) {
    lVar10 = 0;
  }
  uVar8 = (ulonglong)uVar11;
  if (lVar10 == 0) {
    lVar12 = 0;
    iVar13 = 0;
  }
  else {
    lVar12 = (ulonglong)uVar9 + *(longlong *)(lVar10 + 0x58);
    iVar13 = *(int *)(lVar10 + 0x68) - uVar9;
  }
  plVar5 = plVar6 + uVar8 * 2 + 0x74;
  uVar9 = (uint)*(ushort *)((longlong)plVar6 + uVar8 * 2 + 0x8cc);
  if (((lVar12 == *plVar5) && (*(uint *)((longlong)plVar6 + uVar8 * 0x10 + 0x3ac) == uVar9)) &&
     (iVar13 == (int)plVar6[uVar8 * 2 + 0x75])) {
    return;
  }
  *(undefined1 *)(plVar6 + 0x3d) = 1;
  plVar6[uVar8 + 0xb4] = lVar10;
  if (lVar10 == 0) {
    *plVar5 = 0;
    plVar6[uVar8 * 2 + 0x75] = 0;
    plVar6[uVar8 + 0xb4] = 0;
    plVar6[uVar8 + 0xd4] = 0;
    bVar3 = (byte)uVar11 & 0x1f;
    iVar13 = -1;
    uVar9 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & *(uint *)((longlong)plVar6 + 0x7a4);
    *(uint *)((longlong)plVar6 + 0x7a4) = uVar9;
    if (uVar9 == 0) goto LAB_14323e035;
  }
  else {
    plVar6[uVar8 + 0xd4] = *(longlong *)(lVar10 + 0x10);
    *plVar5 = lVar12;
    *(int *)(plVar6 + uVar8 * 2 + 0x75) = iVar13;
    *(uint *)((longlong)plVar6 + uVar8 * 0x10 + 0x3ac) = uVar9;
    uVar9 = *(uint *)((longlong)plVar6 + 0x7a4) | 1 << (uVar11 & 0x1f);
    *(uint *)((longlong)plVar6 + 0x7a4) = uVar9;
  }
  iVar13 = 0x1f;
  if (uVar9 != 0) {
    for (; uVar9 >> iVar13 == 0; iVar13 = iVar13 + -1) {
    }
  }
LAB_14323e035:
  *(int *)(plVar6 + 0xf4) = iVar13;
  return;
}



// FUNCTION 14323e144 FUN_14323e144 body=41 status=ok
// SIG undefined FUN_14323e144(void)

void FUN_14323e144(void)

{
  DAT_14caa0fe8 = 0;
  if (DAT_14caa0fe0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d62b10();
  return;
}



// FUNCTION 14323e16e FUN_14323e16e body=25 status=ok
// SIG undefined FUN_14323e16e(void)

void FUN_14323e16e(void)

{
  FUN_140ec6960();
  FUN_14170c56a(&DAT_14ca9ee58);
  return;
}



// FUNCTION 14323e188 FUN_14323e188 body=25 status=ok
// SIG undefined FUN_14323e188(void)

void FUN_14323e188(void)

{
  FUN_140fb78d0();
  FUN_14170c56a(&DAT_14ca9eec8);
  return;
}



// FUNCTION 14323e1a2 FUN_14323e1a2 body=25 status=ok
// SIG undefined FUN_14323e1a2(void)

void FUN_14323e1a2(void)

{
  FUN_14106a12a();
  FUN_14170c56a(&DAT_14ca9ef38);
  return;
}



// FUNCTION 14323e1bc FUN_14323e1bc body=25 status=ok
// SIG undefined FUN_14323e1bc(void)

void FUN_14323e1bc(void)

{
  FUN_1410b9266();
  FUN_14170c56a(&DAT_14ca9efa8);
  return;
}



// FUNCTION 14323e1e2 FUN_14323e1e2 body=70 status=ok
// SIG undefined FUN_14323e1e2(void)

void FUN_14323e1e2(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  if ((*(uint *)(lVar1 + 0x58) & 0x7fffffff) != 0) {
    uVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x50) + uVar2 * 8) == 0) {
        FUN_1400bafc2(lVar1,uVar2 & 0xffffffff,1);
      }
      uVar2 = uVar2 + 1;
      lVar1 = *param_1;
    } while (uVar2 < (*(uint *)(lVar1 + 0x58) & 0x7fffffff));
  }
  return;
}



// FUNCTION 14323e232 FUN_14323e232 body=12 status=ok
// SIG undefined FUN_14323e232(void)

void FUN_14323e232(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014323e23b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14323e23e FUN_14323e23e body=29 status=ok
// SIG undefined FUN_14323e23e(void)

undefined8 FUN_14323e23e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14323e25c FUN_14323e25c body=282 status=ok
// SIG undefined FUN_14323e25c(void)

undefined8 * FUN_14323e25c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14323dea8);
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



// FUNCTION 14323e376 FUN_14323e376 body=128 status=ok
// SIG undefined FUN_14323e376(void)

ulonglong FUN_14323e376(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = (ulonglong)DAT_14c7585c8;
  lVar3 = param_1[0x15];
  if ((*(uint *)(lVar3 + 0x58) & 0x7fffffff) != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar3 + 0x50) + uVar4 * 8) == 0) {
        FUN_1400bafc2(lVar3,uVar4 & 0xffffffff,1);
      }
      uVar4 = uVar4 + 1;
      lVar3 = param_1[0x15];
      uVar2 = (ulonglong)(*(uint *)(lVar3 + 0x58) & 0x7fffffff);
    } while (uVar4 < uVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014323e3eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)*param_1)(param_1,1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 14323e3f6 FUN_14323e3f6 body=481 status=ok
// SIG undefined FUN_14323e3f6(void)

void FUN_14323e3f6(longlong param_1,ulonglong *param_2)

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
  FUN_1474452c6(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14323e5d8 FUN_14323e5d8 body=232 status=ok
// SIG undefined FUN_14323e5d8(void)

void FUN_14323e5d8(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_144adc996(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14323e6c0 FUN_14323e6c0 body=81 status=ok
// SIG undefined FUN_14323e6c0(void)

void FUN_14323e6c0(undefined8 param_1,longlong *param_2)

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
  FUN_147445369(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14323e712 FUN_14323e712 body=31 status=ok
// SIG undefined FUN_14323e712(void)

undefined8 FUN_14323e712(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14323e732 FUN_14323e732 body=1315 status=ok
// SIG undefined FUN_14323e732(void)

void FUN_14323e732(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_144adc996(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14323ec56 FUN_14323ec56 body=481 status=ok
// SIG undefined FUN_14323ec56(void)

void FUN_14323ec56(longlong param_1,ulonglong *param_2)

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
  FUN_144add0dc(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14323ee38 FUN_14323ee38 body=31 status=ok
// SIG undefined FUN_14323ee38(void)

undefined8 FUN_14323ee38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14323ee58 FUN_14323ee58 body=559 status=ok
// SIG undefined FUN_14323ee58(void)

void FUN_14323ee58(longlong param_1,ulonglong *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int *_Src;
  undefined1 *_Src_00;
  undefined8 *puVar5;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 local_c8 [8];
  int local_c0;
  int local_b8;
  int iStack_b4;
  int local_b0;
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar5 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar5 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar5;
  param_2[6] = (ulonglong)(puVar5 + 1);
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_14a1fb978;
  puVar5[3] = 0;
  *(int *)(puVar5 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x24) = 8;
  }
  else {
    _Src = &local_b8;
    if ((int *)CONCAT44(uStack_ac,local_b0) != (int *)0x0) {
      _Src = (int *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar5 + 2,local_a8,0);
    puVar2 = (undefined8 *)puVar5[3];
    if ((undefined8 *)puVar5[3] == (undefined8 *)0x0) {
      puVar2 = puVar5 + 2;
    }
    memcpy(puVar2,_Src,(longlong)local_a8);
  }
  puVar5[0xd] = 0;
  *(int *)(puVar5 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x74) = 8;
  }
  else {
    _Src_00 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src_00 = local_a0;
    }
    FUN_1446fe1b8(puVar5 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar5[0xd];
    if ((undefined8 *)puVar5[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar5 + 5;
    }
    memcpy(puVar2,_Src_00,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar5 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar5 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar5 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar5 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  pcVar1 = *(code **)(param_1 + 0x1e0);
  plVar4 = (longlong *)(param_1 + 0x200);
  if (*(longlong **)(param_1 + 0x1f0) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x1f0);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_b8,uVar3);
  if (((0 < local_b8) && (0 < iStack_b4)) && (0 < local_b0)) {
    local_d8 = local_c8;
    local_c0 = local_b0;
    FUN_144add0dc(param_2,param_1 + 0x1d0,*(undefined8 *)(param_1 + 0x1c0),
                  *(undefined8 *)(param_1 + 0x1c8));
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14323f088 FUN_14323f088 body=143 status=ok
// SIG undefined FUN_14323f088(void)

uint * FUN_14323f088(uint *param_1,longlong *param_2)

{
  uint uVar1;
  
  uVar1 = (*(uint *)((longlong)param_2 + 0xc) >>
          ((*(uint *)((longlong)param_2 + 0xc) & 0xf) == 0) * '\x02' + 2) *
          *(int *)(param_2[2] + 0x10) + 0x3f >> 6;
  if (*(uint *)(param_2 + 1) < ((DAT_14ca84e30 + uVar1) - 1) / DAT_14ca84e30) {
    *(int *)(*param_2 + 0x50) = *(int *)(param_2[2] + 0x10);
    uVar1 = uVar1 - (int)param_2[1] * DAT_14ca84e30;
    if (DAT_14ca84e30 <= uVar1) {
      uVar1 = DAT_14ca84e30;
    }
    *param_1 = uVar1;
    *(undefined1 **)(param_1 + 1) = &DAT_100000001;
  }
  else {
    param_1[2] = DAT_14c9a52a0;
    *(undefined8 *)param_1 = DAT_14c9a5298;
  }
  return param_1;
}



// FUNCTION 14323f13e FUN_14323f13e body=12 status=ok
// SIG undefined FUN_14323f13e(void)

void FUN_14323f13e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014323f147. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14323f14a FUN_14323f14a body=29 status=ok
// SIG undefined FUN_14323f14a(void)

undefined8 FUN_14323f14a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14323f168 FUN_14323f168 body=547 status=ok
// SIG undefined FUN_14323f168(void)

longlong * FUN_14323f168(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 14323f38c FUN_14323f38c body=292 status=ok
// SIG undefined FUN_14323f38c(void)

void FUN_14323f38c(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar8 = *piVar1;
  if (iVar8 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar8 = *piVar1;
  }
  if ((iVar8 == 0x60000000) || (iVar8 == 0)) {
    *piVar1 = 0x40000010;
  }
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    FUN_14002049c(*(undefined8 *)(param_1 + 0xb8),1);
  }
  lVar5 = (longlong)(int)(*(longlong **)(param_1 + 0xb0))[1];
  if (lVar5 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    lVar5 = lVar5 * 0x50;
    plVar9 = (longlong *)(**(longlong **)(param_1 + 0xb0) + 0x30);
    do {
      FUN_14323cc1e(plVar9[-5],uVar2);
      lVar3 = plVar9[-5];
      pcVar4 = (code *)plVar9[-4];
      plVar7 = (longlong *)plVar9[-2];
      if ((longlong *)plVar9[-2] == (longlong *)0x0) {
        plVar7 = plVar9;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar4)(uVar6,lVar3);
      FUN_14323ccf6(plVar9[-5],uVar2);
      plVar9 = plVar9 + 10;
      lVar5 = lVar5 + -0x50;
    } while (lVar5 != 0);
  }
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    FUN_1447850c6(*(undefined8 *)(param_1 + 0xb8));
  }
  if ((iVar8 == 0x60000000) || (iVar8 == 0)) {
    *piVar1 = iVar8;
  }
  return;
}



// FUNCTION 14323f4b0 FUN_14323f4b0 body=110 status=ok
// SIG undefined FUN_14323f4b0(void)

undefined8 * FUN_14323f4b0(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14323f51e FUN_14323f51e body=25 status=ok
// SIG undefined FUN_14323f51e(void)

void FUN_14323f51e(void)

{
  FUN_1412f7d22();
  FUN_14170c56a(&DAT_14caa08f8);
  return;
}



// FUNCTION 14323f537 FUN_14323f537 body=3340 status=ok
// SIG undefined FUN_14323f537(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14323f537(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_98;
  code *local_90;
  undefined8 local_88;
  undefined **local_78;
  code *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1400b22c2(&local_98,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_98,&DAT_14ca9ee48);
  if (cVar2 == '\0') {
    _DAT_14ca9ee48 = 0;
    uRam000000014ca9ee50 = 0;
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_14323e16e;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca9eec0,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_14323e188;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca9ef30,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_14323e1a2;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca9efa0,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_14323e1bc;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca9f010,6,&local_98);
  local_98._0_4_ = 1;
  local_a8 = 0x20;
  FUN_14078dbce(&DAT_14ca9f018,L"r.ShaderPipelineCache.StartupMode",&local_98,
                L"Sets the startup mode for the PSO cache, determining what the cache does after initialisation:\n\t0: Precompilation is paused and nothing will compile until a call to ResumeBatching().\n\t1: Precompilation is enabled in the \'Fast\' mode.\n\t2: Precompilation is enabled in the \'Background\' mode.\nDefault is 1."
               );
  atexit(FUN_143236cca);
  local_98._0_4_ = 1;
  local_a8 = 0x20;
  FUN_14078dbce(&DAT_14ca9f030,L"r.ShaderPipelineCache.BackgroundBatchSize",&local_98,
                L"Set the number of PipelineStateObjects to compile in a single batch operation when compiling in the background. Defaults to a maximum of 1 per frame, due to async. file IO it is less in practice."
               );
  atexit(FUN_143236d0f);
  local_98._0_4_ = 0x32;
  local_a8 = 0x20;
  FUN_14078dbce(&DAT_14ca9f048,L"r.ShaderPipelineCache.BatchSize",&local_98,
                L"Set the number of PipelineStateObjects to compile in a single batch operation when compiling takes priority. Defaults to a maximum of 50 per frame, due to async. file IO it is less in practice."
               );
  atexit(FUN_143236d54);
  local_98._0_4_ = 0x32;
  local_a8 = 0x20;
  FUN_14078dbce(&DAT_14ca9f060,L"r.ShaderPipelineCache.PrecompileBatchSize",&local_98,
                L"Set the number of PipelineStateObjects to compile in a single batch operation when pre-optimizing the cache. Defaults to a maximum of 50 per frame, due to async. file IO it is less in practice."
               );
  atexit(FUN_143236d99);
  local_98._0_4_ = 0;
  local_a8 = 0x20;
  FUN_140a6b41e(&DAT_14ca9f078,L"r.ShaderPipelineCache.BackgroundBatchTime",&local_98,
                L"The target time (in ms) to spend precompiling each frame when in the background or 0.0 to disable. When precompiling is faster the batch size will grow and when slower will shrink to attempt to occupy the full amount. Defaults to 0.0 (off)."
               );
  atexit(FUN_143236dde);
  local_98._0_4_ = 0x41800000;
  local_a8 = 0x20;
  FUN_140a6b41e(&DAT_14ca9f090,L"r.ShaderPipelineCache.BatchTime",&local_98,
                L"The target time (in ms) to spend precompiling each frame when compiling takes priority or 0.0 to disable. When precompiling is faster the batch size will grow and when slower will shrink to attempt to occupy the full amount. Defaults to 16.0 (max. ms per-frame of precompilation)."
               );
  atexit(FUN_143236e23);
  local_98._0_4_ = 0;
  local_a8 = 0x20;
  FUN_140a6b41e(&DAT_14ca9f0a8,L"r.ShaderPipelineCache.PrecompileBatchTime",&local_98,
                L"The target time (in ms) to spend precompiling each frame when cpre-optimizing or 0.0 to disable. When precompiling is faster the batch size will grow and when slower will shrink to attempt to occupy the full amount. Defaults to 10.0 (off)."
               );
  atexit(FUN_143236e68);
  local_98._0_4_ = 0;
  local_a8 = 0x20;
  FUN_14078dbce(&DAT_14ca9f0c0,L"r.ShaderPipelineCache.SaveAfterPSOsLogged",&local_98,
                L"Set the number of PipelineStateObjects to log before automatically saving. 0 will disable automatic saving (which is the default now, as automatic saving is found to be broken)."
               );
  atexit(FUN_143236ead);
  local_98._0_4_ = 0x1e;
  local_a8 = 0x20;
  FUN_14078dbce(&DAT_14ca9f0d8,L"r.ShaderPipelineCache.AutoSaveTime",&local_98,
                L"Set the time where any logged PSO\'s will be saved if the number is < r.ShaderPipelineCache.SaveAfterPSOsLogged. Disabled when r.ShaderPipelineCache.SaveAfterPSOsLogged is 0"
               );
  atexit(FUN_143236ef2);
  local_98._0_4_ = 0xffffffff;
  local_a8 = 0x20;
  FUN_14078dbce(&DAT_14ca9f0f0,L"r.ShaderPipelineCache.PreCompileMask",&local_98,
                L"Mask used to precompile the cache. Defaults to all PSOs (-1)");
  atexit(FUN_143236f37);
  local_98._0_4_ = 0x7fffffff;
  local_a8 = 0x20;
  FUN_14078dbce(&DAT_14ca9f108,L"r.ShaderPipelineCache.AutoSaveTimeBoundPSO",&local_98,
                L"Set the time where any logged PSO\'s will be saved when -logpso is on the command line."
               );
  atexit(FUN_143236f7c);
  local_98._0_4_ = 0;
  local_a8 = 0x20;
  FUN_14078dbce(&DAT_14ca9f120,L"r.ShaderPipelineCache.SaveBoundPSOLog",&local_98,
                L"If > 0 then a log of all bound PSOs for this run of the program will be saved to a writable user cache file. Defaults to 0 but is forced on with -logpso."
               );
  atexit(FUN_143236fc1);
  local_98._0_4_ = 0;
  local_a8 = 0x24;
  FUN_14078dbce(&DAT_14ca9f138,L"r.ShaderPipelineCache.GameFileMaskEnabled",&local_98,
                L"Set non zero to use GameFileMask during PSO precompile - recording should always save out the usage masks to make that data availble when needed."
               );
  atexit(FUN_143237006);
  local_98._0_4_ = 0;
  local_a8 = 0x24;
  FUN_14078dbce(&DAT_14ca9f150,L"r.ShaderPipelineCache.PreOptimizeEnabled",&local_98,
                L"Set non zero to PreOptimize PSOs - this allows some PSOs to be compiled in the foreground before going in to game"
               );
  atexit(FUN_14323704b);
  local_98._0_4_ = 0;
  local_a8 = 0x20;
  FUN_14078dbce(&DAT_14ca9f168,L"r.ShaderPipelineCache.MinBindCount",&local_98,
                L"The minimum bind count to allow a PSO to be precompiled.  Changes to this value will not affect PSOs that have already been removed from consideration."
               );
  atexit(FUN_143237090);
  local_98._0_4_ = 0;
  local_a8 = 0x20;
  FUN_140a6b41e(&DAT_14ca9f180,L"r.ShaderPipelineCache.MaxPrecompileTime",&local_98,
                L"The maximum time to allow a PSO to be precompiled.  if greather than 0, the amount of wall time we will allow pre-compile of PSOs and then switch to background processing."
               );
  atexit(FUN_1432370d5);
  local_98._0_4_ = 0;
  local_a8 = 0x20;
  FUN_14078dbce(&DAT_14ca9f198,L"r.ShaderPipelineCache.GlobalShadersOnlyWhenPSOPrecaching",&local_98
                ,
                L"Only compile PSOs from the GlobalShader cache when runtime PSOPrecaching is enabled (default disabled)"
               );
  atexit(FUN_14323711a);
  local_98 = (code *)((ulonglong)local_98._4_4_ << 0x20);
  local_a8 = 4;
  FUN_14078dbce(&DAT_14ca9f1b0,L"r.ShaderPipelineCache.OnlyOpenUserCache",&local_98,
                L"If > 0, only the user cache file will be opened, and the static file cache will not be opened. Defaults to 0."
               );
  atexit(FUN_14323715f);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_98 + 0x10) = lVar3;
  *(undefined ***)local_98 = &PTR_FUN_149e062c0;
  *(code **)((longlong)local_98 + 0x18) = FUN_147441cee;
  local_a8 = 0;
  FUN_14152bcb8(&DAT_14ca9f1c8,L"r.ShaderPipelineCache.Open",L"Close and reopen the user cache.",
                &local_98);
  if ((int)local_90 == 0) {
LAB_14323fb0c:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
    goto LAB_14323fb0c;
  }
  atexit(FUN_1432374ad);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_98 + 0x10) = lVar3;
  *(undefined ***)local_98 = &PTR_FUN_149e062c0;
  *(code **)((longlong)local_98 + 0x18) = FUN_147441d0c;
  local_a8 = 0;
  FUN_14152bcb8(&DAT_14ca9f1d8,L"r.ShaderPipelineCache.Save",
                L"Save the current pipeline file cache.",&local_98);
  if ((int)local_90 == 0) {
LAB_14323fbea:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
    goto LAB_14323fbea;
  }
  atexit(FUN_1432374f2);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_98 + 0x10) = lVar3;
  *(undefined ***)local_98 = &PTR_FUN_149e062c0;
  *(undefined1 **)((longlong)local_98 + 0x18) = &LAB_147441d07;
  local_a8 = 0;
  FUN_14152bcb8(&DAT_14ca9f1e8,L"r.ShaderPipelineCache.Close",
                L"Close the current pipeline file cache.",&local_98);
  if ((int)local_90 == 0) {
LAB_14323fcc8:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
    goto LAB_14323fcc8;
  }
  atexit(FUN_143237537);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_98 + 0x10) = lVar3;
  *(undefined ***)local_98 = &PTR_FUN_149e00260;
  *(code **)((longlong)local_98 + 0x18) = FUN_143237234;
  local_a8 = 0;
  FUN_1415c7246(&DAT_14ca9f1f8,L"r.ShaderPipelineCache.SetBatchMode",
                L"Sets the compilation batch mode, which should be one of:\n\tPause: Suspend precompilation.\n\tBackground: Low priority precompilation.\n\tFast: High priority precompilation."
                ,&local_98);
  if ((int)local_90 != 0) {
    if (local_98 == (code *)0x0) goto LAB_14323fdc2;
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_14323fdc2:
  atexit(FUN_14323757c);
  local_a8 = 0;
  FUN_141471170(&DAT_14ca9f210,L"r.ShaderPipelineCache.DoNotPrecompileComputePSO",&DAT_14ca9f208,
                L"Disables precompilation of compute PSOs (replayed from a recorded file) on start. This is a safety switch in case things go wrong"
               );
  atexit(FUN_1432375c1);
  local_a8 = 0;
  FUN_14153156c(&DAT_14ca9f220,L"r.ShaderPipelineCache.DoNotPrecompileRayTracingPSO",&DAT_14c760e64,
                L"Disables precompilation of raytracing PSOs (from a file cache) on start.");
  atexit(FUN_143237606);
  DAT_14ca9f270 = 0;
  atexit(FUN_14323764b);
  DAT_14ca9f280 = 0;
  _DAT_14ca9f288 = 0;
  atexit((_func_5014 *)&LAB_143237677);
  DAT_14ca9f290 = 0;
  _DAT_14ca9f298 = 0;
  _DAT_14ca9f2a0 = 2;
  atexit(FUN_143237688);
  DAT_14ca9f2a8 = 0;
  _DAT_14ca9f2b0 = 0;
  _DAT_14ca9f2b8 = 2;
  atexit(FUN_1432376b9);
  DAT_14ca9f2c0 = 0;
  _DAT_14ca9f2c8 = 0;
  _DAT_14ca9f2d0 = 2;
  atexit(FUN_1432376ea);
  DAT_14ca9f2d8 = 0;
  _DAT_14ca9f2e0 = 0;
  _DAT_14ca9f2e8 = 2;
  atexit(FUN_14323771b);
  DAT_14ca9f2f0 = 0;
  _DAT_14ca9f2f8 = 0;
  _DAT_14ca9f300 = 2;
  atexit(FUN_14323774c);
  local_a8 = 0x20;
  FUN_141471170(&DAT_14ca9f338,L"shaderpipeline.MinPrecompileTasksInFlight",&DAT_14c760e68,
                L"Note: Only used when threadpool PSO precompiling is active.\nThe number of active PSO precompile jobs in flight before we will submit another batch of jobs. \ni.e. when the number of inflight precompile tasks drops below this threshold we can add the next batch of precompile tasks. \nThis is to prevent bubbles between precompile batches but also to avoid saturating dispatch."
               );
  atexit(FUN_14323793c);
  FUN_1461ecb12();
  atexit((_func_5014 *)&LAB_14323b1c0);
  local_a8 = 0;
  FUN_141471170(&DAT_14ca9f3e8,L"r.ShaderCompiler.EmitWarningsOnLoad",&DAT_14ca9f3f8,
                L"When 1, shader compiler warnings are emitted to the log for all shaders as they are loaded."
               );
  atexit(FUN_14323b1d6);
  FUN_147441f96(&DAT_14ca9f400);
  atexit((_func_5014 *)&LAB_14323b277);
  FUN_147441f96(&DAT_14ca9f828);
  atexit((_func_5014 *)&LAB_14323b283);
  FUN_147441f96(&DAT_14ca9fc50);
  atexit((_func_5014 *)&LAB_14323b28f);
  local_a8 = 0;
  FUN_141471170(&DAT_14caa0078,L"r.ShaderSource.CompressionMethod",&DAT_14c760e6c,
                L"Compression method for shader source stored in memory. See FOodleDataCompression::ECompressor enum for supported values; defaults to Mermaid."
               );
  atexit(FUN_14323bf52);
  local_a8 = 0;
  FUN_141471170(&DAT_14caa0088,L"r.ShaderSource.CompressionLevel",&DAT_14c760e70,
                L"Compression level for shader source stored in memory. See FOodleDataCompression::ECompressionLevel enum for supported values; default is SuperFast."
               );
  atexit(FUN_14323bf97);
  local_90 = FUN_145cdfbe6;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa01f8,&local_98);
  local_90 = FUN_145eb8b24;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa0320,&local_98);
  local_90 = FUN_145eb6e1e;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa0448,&local_98);
  local_90 = FUN_145d121c0;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa0570,&local_98);
  local_90 = FUN_1415a21f4;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa0698,&local_98);
  local_90 = FUN_144a93628;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa07c0,&local_98);
  local_90 = FUN_145f828fe;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa08e8,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_14323f51e;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caa0960,6,&local_98);
  _DAT_14caa0978 = 0xffffffff;
  _DAT_14caa097c = 0x105;
  DAT_14caa097e = 0;
  _DAT_14caa0980 = 0;
  uRam000000014caa0988 = 0;
  DAT_14caa0970 = &PTR_FUN_14a399e50;
  FUN_146321436();
  atexit(FUN_14323de15);
  DAT_14caa0998 = 0xffffffff;
  _DAT_14caa099c = 0x105;
  DAT_14caa099e = 0;
  DAT_14caa0990 = &PTR_FUN_14a399eb0;
  FUN_146321502();
  atexit(FUN_14323de44);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143240244 FUN_143240244 body=55 status=ok
// SIG undefined FUN_143240244(void)

void FUN_143240244(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1358 == 0) {
    uVar1 = FUN_14132555d();
    DAT_14caa1358 = FUN_14171c317(FUN_1463215e0,uVar1,L"FoliageVertexColorMask");
  }
  return;
}



// FUNCTION 14324027b FUN_14324027b body=55 status=ok
// SIG undefined FUN_14324027b(void)

void FUN_14324027b(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1370 == 0) {
    uVar1 = FUN_14132555d();
    DAT_14caa1370 = FUN_14171c317(FUN_14632160f,uVar1,L"EVertexColorMaskChannel");
  }
  return;
}



// FUNCTION 1432402b2 FUN_1432402b2 body=55 status=ok
// SIG undefined FUN_1432402b2(void)

void FUN_1432402b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa13a0 == 0) {
    uVar1 = FUN_14132555d();
    DAT_14caa13a0 = FUN_14171c317(FUN_14632169e,uVar1,L"EFoliageScaling");
  }
  return;
}



// FUNCTION 1432402ea FUN_1432402ea body=3818 status=ok
// SIG undefined FUN_1432402ea(void)

void FUN_1432402ea(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined1 *puVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong *plVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  code *local_88;
  code *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  uint *local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1402d084a();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14a3a14a4);
  local_78 = param_2;
  if ((((int)param_2[8] < 0x179) || (iVar4 = FUN_1448332aa(param_2,&DAT_14a3a14a4), iVar4 < 5)) ||
     (iVar4 = FUN_1448332aa(param_2,&DAT_14a3a14a4), iVar4 < 0xc)) goto LAB_143240367;
  local_70 = (longlong *)(param_1 + 0x3a0);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x3a8) * 0x18,
             (longlong)*(int *)(param_1 + 0x3ac) * 0x18);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x3c8) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x3cc) + 0x1fU >> 3 & 0xfffffffc);
  uVar22 = local_50._4_4_;
  plVar21 = local_78;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_50 = (code *)CONCAT44(local_50._4_4_,*(int *)(param_1 + 0x3a8) - *(int *)(param_1 + 0x3d4)
                               );
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)local_78 + 0x2a) & 2) == 0) {
        (**(code **)(*local_78 + 0x170))(local_78,&local_50,4);
      }
      else {
        thunk_FUN_14572512c(local_78,&local_50);
      }
    }
    else {
      local_50 = (code *)CONCAT44(local_50._4_4_,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar1;
    }
    plVar21 = local_78;
    iVar4 = *(int *)(param_1 + 0x3c8);
    param_2 = local_78;
    if (iVar4 == 0) {
      uVar24 = 0;
      uVar23 = 1;
      iVar16 = 0;
      iVar5 = 0;
    }
    else {
      puVar9 = *(uint **)(param_1 + 0x3c0);
      if (*(uint **)(param_1 + 0x3c0) == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 0x3b0);
      }
      uVar22 = *puVar9;
      if (uVar22 == 0) {
        iVar5 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar5 = iVar4 + -1;
        }
        uVar24 = 0;
        uVar23 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar23 = uVar24;
        }
        iVar16 = 0;
        do {
          if (uVar23 == uVar24) goto LAB_143240de9;
          iVar16 = iVar16 + 0x20;
          uVar22 = puVar9[uVar24 + 1];
          uVar24 = uVar24 + 1;
        } while (uVar22 == 0);
      }
      else {
        uVar24 = 0;
        iVar16 = 0;
      }
      uVar23 = (ulonglong)(-uVar22 & uVar22);
      uVar15 = uVar23 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar5 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar5) {
        iVar5 = iVar4;
      }
    }
    if (iVar5 < iVar4) {
      uVar22 = 0xffffffff;
      do {
        lVar17 = *(longlong *)(param_1 + 0x3a0) + (longlong)iVar5 * 0x18;
        (**(code **)(*plVar21 + 0x138))(plVar21,lVar17);
        FUN_140b3fd96(plVar21,*(undefined8 *)(lVar17 + 8));
        uVar22 = ~(uint)uVar23 & uVar22;
        puVar9 = *(uint **)(param_1 + 0x3c0);
        if (*(uint **)(param_1 + 0x3c0) == (uint *)0x0) {
          puVar9 = (uint *)(param_1 + 0x3b0);
        }
        iVar4 = *(int *)(param_1 + 0x3c8);
        iVar5 = (int)uVar24;
        lVar17 = (longlong)iVar5;
        uVar12 = puVar9[lVar17] & uVar22;
        param_2 = local_78;
        if (uVar12 == 0) {
          iVar6 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar6 = iVar4 + -1;
          }
          iVar13 = iVar6 >> 5;
          if (iVar6 >> 5 < iVar5) {
            iVar13 = iVar5;
          }
          lVar18 = 0;
          do {
            if (iVar13 - lVar17 == lVar18) goto LAB_143240de9;
            iVar16 = iVar16 + 0x20;
            uVar12 = puVar9[lVar17 + lVar18 + 1];
            lVar18 = lVar18 + 1;
          } while (uVar12 == 0);
          uVar24 = (ulonglong)(uint)(iVar5 + (int)lVar18);
          uVar22 = 0xffffffff;
        }
        uVar23 = (ulonglong)(-uVar12 & uVar12);
        uVar15 = uVar23 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar5 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar4);
    }
  }
  else {
    local_50 = (code *)((ulonglong)local_50._4_4_ << 0x20);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*local_78 + 0x170))(local_78,&local_50,4);
        param_2 = plVar21;
      }
      else {
        thunk_FUN_14572512c(local_78,&local_50);
        param_2 = plVar21;
      }
    }
    else {
      local_50 = (code *)CONCAT44(uVar22,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar1;
    }
    FUN_140cd3ae2(local_70,(ulonglong)local_50 & 0xffffffff);
    if (0 < (int)local_50) {
      lVar17 = param_1 + 0x3b0;
      iVar4 = 0;
      do {
        if (*(int *)(param_1 + 0x3d4) == 0) {
          iVar5 = *(int *)(param_1 + 0x3a8);
          *(int *)(param_1 + 0x3a8) = iVar5 + 1;
          if (*(int *)(param_1 + 0x3ac) == iVar5) {
            FUN_14482b872(local_70,iVar5);
          }
          iVar16 = *(int *)(param_1 + 0x3c8);
          if (iVar16 == 0) {
            iVar6 = -1;
          }
          else {
            iVar6 = iVar16 + 0x1e;
            if (-1 < iVar16 + -1) {
              iVar6 = iVar16 + -1;
            }
            iVar6 = iVar6 >> 5;
          }
          iVar13 = iVar16 + 1;
          iVar14 = iVar16 + 0x1f;
          if (-1 < iVar16) {
            iVar14 = iVar16;
          }
          if (iVar14 >> 5 == iVar6) {
            *(int *)(param_1 + 0x3c8) = iVar13;
          }
          else {
            if (*(int *)(param_1 + 0x3cc) <= iVar16) {
              iVar6 = iVar16;
              if (iVar16 + 0x20U < 0xa0) {
                iVar13 = 0x80;
              }
              else {
                uVar22 = iVar16 + 0x20U >> 5;
                if (*(int *)(param_1 + 0x3cc) + 0x1fU < 0xa0) {
                  uVar12 = 4;
                  if (4 < uVar22) {
                    uVar12 = uVar22;
                  }
                }
                else {
                  uVar12 = uVar22 + (uVar22 * 3 >> 3) + 0x10;
                }
                uVar23 = (ulonglong)(uVar12 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar7 = (uint)(uVar23 + 0xf);
                    if (uVar12 < 0x1ffd) {
                      uVar23 = (ulonglong)
                               (ushort)(&DAT_14c841d90)
                                       [0x32 - (byte)(&DAT_14c841e00)[uVar23 + 0xf >> 4]];
                    }
                    else {
                      uVar24 = (ulonglong)(uVar7 & 0xfffffff0);
                      param_2 = local_78;
                      if (uVar24 < 0x7ff1) {
                        bVar11 = (&DAT_14c841e00)[uVar7 >> 4];
                        uVar15 = 0x32;
                        if (0x32 < bVar11) {
                          uVar15 = (ulonglong)bVar11;
                        }
                        uVar19 = 0x32 - (ulonglong)bVar11;
                        do {
                          uVar23 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar19 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar19 & 0xffffffff] & 0xf) == 0)
                          goto LAB_143240a5c;
                          lVar18 = uVar15 + 1 + uVar19;
                          uVar19 = uVar19 - 1;
                        } while (lVar18 != 0x33);
                      }
                      uVar23 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar23 = 0x10;
                      }
                      uVar23 = -uVar23 & (uVar24 + uVar23) - 1;
                    }
                  }
                  else {
                    local_68 = (ulonglong)uVar22;
                    uVar23 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar23,0);
                    uVar22 = (uint)local_68;
                    iVar6 = *(int *)(param_1 + 0x3c8);
                  }
                }
LAB_143240a5c:
                iVar8 = (int)(uVar23 >> 2);
                iVar13 = iVar8 << 5;
                if (iVar8 < (int)uVar22) {
                  iVar13 = -0x20;
                }
              }
              *(int *)(param_1 + 0x3cc) = iVar13;
              FUN_1446efbd8(lVar17,iVar6);
              iVar13 = *(int *)(param_1 + 0x3c8) + 1;
            }
            iVar6 = iVar13 + 0x1f;
            if (-1 < iVar13) {
              iVar6 = iVar13;
            }
            *(int *)(param_1 + 0x3c8) = iVar13;
            if (iVar13 % 0x20 != 0) {
              lVar18 = *(longlong *)(param_1 + 0x3c0);
              if (*(longlong *)(param_1 + 0x3c0) == 0) {
                lVar18 = lVar17;
              }
              bVar11 = -(char)(iVar13 % 0x20);
              *(uint *)(lVar18 + (longlong)(iVar6 >> 5) * 4) =
                   (uint)(*(int *)(lVar18 + (longlong)(iVar6 >> 5) * 4) << (bVar11 & 0x1f)) >>
                   (bVar11 & 0x1f);
            }
          }
          lVar18 = (longlong)iVar5;
          lVar20 = *(longlong *)(param_1 + 0x3c0);
          if (*(longlong *)(param_1 + 0x3c0) == 0) {
            lVar20 = lVar17;
          }
          bVar11 = (byte)iVar16 & 0x1f;
          puVar9 = (uint *)(lVar20 + (longlong)(iVar14 >> 5) * 4);
          *puVar9 = *puVar9 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
        }
        else {
          iVar5 = *(int *)(param_1 + 0x3d0);
          lVar18 = (longlong)iVar5;
          iVar16 = *(int *)(*(longlong *)(param_1 + 0x3a0) + 4 + lVar18 * 0x18);
          *(int *)(param_1 + 0x3d0) = iVar16;
          iVar6 = *(int *)(param_1 + 0x3d4) + -1;
          *(int *)(param_1 + 0x3d4) = iVar6;
          param_2 = local_78;
          if (iVar6 != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x3a0) + (longlong)iVar16 * 0x18) = 0xffffffff;
          }
        }
        lVar20 = *(longlong *)(param_1 + 0x3c0);
        if (*(longlong *)(param_1 + 0x3c0) == 0) {
          lVar20 = lVar17;
        }
        iVar16 = iVar5 + 0x1f;
        if (-1 < iVar5) {
          iVar16 = iVar5;
        }
        puVar9 = (uint *)(lVar20 + (longlong)(iVar16 >> 5) * 4);
        *puVar9 = *puVar9 | 1 << ((byte)iVar5 & 0x1f);
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x3a0) + lVar18 * 0x18);
        *puVar2 = 0;
        puVar10 = (undefined1 *)FUN_14001cc68(0x10,0x10);
        *puVar10 = 1;
        *(undefined8 *)(puVar10 + 8) = 0;
        puVar2[1] = puVar10;
        *(undefined4 *)(puVar2 + 2) = 0xffffffff;
        (**(code **)(*param_2 + 0x138))(param_2,puVar2);
        FUN_140b3fd96(param_2,puVar2[1]);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_50);
    }
  }
LAB_143240de9:
  if (((*(byte *)(param_2 + 5) & 1) == 0) &&
     (((*(byte *)(param_2 + 5) & 4) != 0 || ((*(byte *)((longlong)param_2 + 0x2b) & 4) == 0))))
  goto LAB_143240367;
  plVar21 = (longlong *)(param_1 + 0x3e0);
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FUN_1446efa72(plVar21,0,0,4);
  }
  *(undefined4 *)(param_1 + 1000) = 0;
  uVar22 = *(int *)(param_1 + 0x3a8) - *(int *)(param_1 + 0x3d4);
  if (uVar22 < 4) {
    uVar12 = 1;
  }
  else {
    uVar23 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
    lVar17 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar17 & 0x1f);
  }
  if (((int)uVar22 < 1) || ((int)uVar12 < 1)) goto LAB_143240367;
  *(uint *)(param_1 + 1000) = uVar12;
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FUN_1446efa72(plVar21,0,0,4);
    uVar12 = *(uint *)(param_1 + 1000);
  }
  lVar17 = param_1 + 0x3d8;
  if (uVar12 == 1) {
    if (*plVar21 != 0) {
      FUN_1446efa72(plVar21,0,0,4);
    }
LAB_143240eb5:
    uVar22 = 0;
    do {
      lVar18 = *(longlong *)(param_1 + 0x3e0);
      if (*(longlong *)(param_1 + 0x3e0) == 0) {
        lVar18 = lVar17;
      }
      *(undefined4 *)(lVar18 + (ulonglong)(*(int *)(param_1 + 1000) + 0x7fffffffU & uVar22) * 4) =
           0xffffffff;
      uVar22 = uVar22 + 1;
    } while (uVar12 != uVar22);
  }
  else {
    if (uVar12 == 0) goto LAB_143240367;
    FUN_1446efa72(plVar21,0,uVar12,4);
    if (0 < (int)uVar12) goto LAB_143240eb5;
  }
  iVar4 = *(int *)(param_1 + 0x3c8);
  if (iVar4 == 0) {
    uVar23 = 0;
    uVar24 = 1;
    iVar5 = 0;
    local_68 = (ulonglong)local_68._4_4_ << 0x20;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x3c0);
    if (*(uint **)(param_1 + 0x3c0) == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 0x3b0);
    }
    uVar22 = *puVar9;
    if (uVar22 == 0) {
      iVar5 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar5 = iVar4 + -1;
      }
      uVar23 = 0;
      uVar24 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar24 = uVar23;
      }
      local_68 = local_68 & 0xffffffff00000000;
      do {
        if (uVar24 == uVar23) goto LAB_143240367;
        local_68 = CONCAT44(local_68._4_4_,(int)local_68 + 0x20);
        uVar22 = puVar9[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar22 == 0);
    }
    else {
      uVar23 = 0;
      local_68 = (ulonglong)local_68._4_4_ << 0x20;
    }
    uVar24 = (ulonglong)(-uVar22 & uVar22);
    uVar15 = uVar24 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar5 = ((int)local_68 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar5) {
      iVar5 = iVar4;
    }
  }
  if (iVar5 < iVar4) {
    uVar22 = 0xffffffff;
    plVar21 = local_70;
    bVar11 = DAT_14c950c29;
    local_60 = (uint *)(param_1 + 0x3b0);
    do {
      lVar18 = *plVar21;
      uVar15 = *(ulonglong *)(lVar18 + (longlong)iVar5 * 0x18);
      local_58 = uVar23;
      if (((bVar11 & 1) != 0) && (uVar15 != 0)) {
        FUN_1456cec3c(uVar15);
        plVar21 = local_70;
        bVar11 = DAT_14c950c29;
      }
      lVar18 = lVar18 + (longlong)iVar5 * 0x18;
      uVar12 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
      uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
      uVar23 = (longlong)(int)(uVar12 >> 0x10 ^ uVar12) & (longlong)*(int *)(param_1 + 1000) - 1U;
      iVar4 = (int)uVar23;
      *(int *)(lVar18 + 0x14) = iVar4;
      lVar20 = *(longlong *)(param_1 + 0x3e0);
      if (*(longlong *)(param_1 + 0x3e0) == 0) {
        lVar20 = lVar17;
      }
      *(undefined4 *)(lVar18 + 0x10) =
           *(undefined4 *)(lVar20 + ((longlong)*(int *)(param_1 + 1000) - 1U & uVar23) * 4);
      lVar18 = *(longlong *)(param_1 + 0x3e0);
      if (*(longlong *)(param_1 + 0x3e0) == 0) {
        lVar18 = lVar17;
      }
      *(int *)(lVar18 + ((longlong)iVar4 & (longlong)*(int *)(param_1 + 1000) - 1U) * 4) = iVar5;
      uVar22 = uVar22 & ~(uint)uVar24;
      puVar9 = *(uint **)(param_1 + 0x3c0);
      if (*(uint **)(param_1 + 0x3c0) == (uint *)0x0) {
        puVar9 = local_60;
      }
      iVar4 = *(int *)(param_1 + 0x3c8);
      iVar5 = (int)local_58;
      lVar18 = (longlong)iVar5;
      uVar12 = puVar9[lVar18] & uVar22;
      uVar23 = local_58;
      param_2 = local_78;
      if (uVar12 == 0) {
        iVar16 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar16 = iVar4 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar6 = iVar16;
        if (iVar16 < iVar5) {
          iVar6 = iVar5;
        }
        if (iVar16 <= iVar5) break;
        local_68 = CONCAT44(local_68._4_4_,(int)local_68 + 0x20);
        lVar20 = 0;
        while (uVar12 = puVar9[lVar18 + lVar20 + 1], uVar12 == 0) {
          local_68 = CONCAT44(local_68._4_4_,(int)local_68 + 0x20);
          lVar20 = lVar20 + 1;
          if (iVar6 - lVar18 == lVar20) goto LAB_143240367;
        }
        uVar22 = 0xffffffff;
        uVar23 = (ulonglong)(iVar5 + (int)lVar20 + 1);
      }
      uVar24 = (ulonglong)(-uVar12 & uVar12);
      uVar15 = uVar24 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar5 = ((int)local_68 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar4);
  }
LAB_143240367:
  iVar4 = FUN_1448332aa(param_2,&DAT_14a3a14a4);
  if (iVar4 < 1) {
    iVar4 = *(int *)(param_1 + 0x268);
    if (iVar4 == 0) {
      iVar16 = 0;
      uVar24 = 1;
      iVar5 = 0;
      uVar23 = 0;
    }
    else {
      puVar9 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 0x250);
      }
      uVar22 = *puVar9;
      if (uVar22 == 0) {
        iVar5 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar5 = iVar4 + -1;
        }
        uVar23 = 0;
        uVar24 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar24 = uVar23;
        }
        iVar16 = 0;
        do {
          if (uVar24 == uVar23) goto LAB_14324040b;
          iVar16 = iVar16 + 0x20;
          uVar22 = puVar9[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar22 == 0);
      }
      else {
        iVar16 = 0;
        uVar23 = 0;
      }
      uVar24 = (ulonglong)(-uVar22 & uVar22);
      uVar15 = uVar24 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar5 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar5) {
        iVar5 = iVar4;
      }
    }
    if (iVar5 != iVar4) {
      uVar22 = 0xffffffff;
      do {
        lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar5 * 0x10);
        if (lVar17 != 0) {
          if (DAT_14cac1d70 == 0) {
            local_50 = FUN_144b223ce;
            local_80 = FUN_14081d0ea;
            local_88 = FUN_1432411d6;
            local_90 = &local_50;
            local_98 = &LAB_147878f54;
            local_a0 = &LAB_1417ad3ba;
            local_a8 = L"Engine";
            local_b0 = 0;
            local_b8 = 0x10000004;
            local_c0 = 0x10;
            local_c8 = 0xb10;
            FUN_14081cfa3(L"/Script/Engine",L"InstancedStaticMeshComponent",&DAT_14cac1d70,
                          FUN_14637c2da);
          }
          if ((*(int *)(DAT_14cac1d70 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cac1d70 + 0x38) * 8) == DAT_14cac1d70 + 0x30)) {
            *(byte *)(lVar17 + 0x9d) = *(byte *)(lVar17 + 0x9d) & 0xdf;
          }
        }
        uVar22 = uVar22 & ~(uint)uVar24;
        puVar9 = *(uint **)(param_1 + 0x260);
        if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
          puVar9 = (uint *)(param_1 + 0x250);
        }
        iVar6 = *(int *)(param_1 + 0x268);
        iVar5 = (int)uVar23;
        lVar17 = (longlong)iVar5;
        uVar12 = puVar9[lVar17] & uVar22;
        if (uVar12 == 0) {
          iVar13 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar13 = iVar6 + -1;
          }
          iVar13 = iVar13 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar14 = iVar13;
          if (iVar13 < iVar5) {
            iVar14 = iVar5;
          }
          if (iVar5 < iVar13) {
            lVar18 = 0;
            do {
              uVar12 = puVar9[lVar17 + lVar18 + 1];
              if (uVar12 != 0) {
                uVar23 = (ulonglong)(iVar5 + (int)lVar18 + 1);
                uVar22 = 0xffffffff;
                goto LAB_1432406a0;
              }
              iVar16 = iVar16 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar14 - lVar17 != lVar18);
            uVar22 = 0xffffffff;
            lVar17 = (longlong)iVar14;
          }
          uVar23 = lVar17 + 1U & 0xffffffff;
          iVar5 = iVar6;
        }
        else {
LAB_1432406a0:
          uVar24 = (ulonglong)(-uVar12 & uVar12);
          uVar15 = uVar24 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar5 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar6 <= iVar5) {
            iVar5 = iVar6;
          }
        }
        param_2 = local_78;
      } while (iVar5 != iVar4);
    }
  }
LAB_14324040b:
  iVar4 = *(int *)(param_1 + 0x3c8);
  if (iVar4 == 0) {
    uVar23 = 1;
    uVar24 = 0;
    iVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x3c0);
    if (*(uint **)(param_1 + 0x3c0) == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 0x3b0);
    }
    uVar22 = *puVar9;
    if (uVar22 == 0) {
      iVar5 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar5 = iVar4 + -1;
      }
      uVar24 = 0;
      uVar23 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar23 = uVar24;
      }
      iVar16 = 0;
      do {
        if (uVar23 == uVar24) goto LAB_14324049f;
        iVar16 = iVar16 + 0x20;
        uVar22 = puVar9[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar22 == 0);
    }
    else {
      uVar24 = 0;
      iVar16 = 0;
    }
    uVar23 = (ulonglong)(-uVar22 & uVar22);
    uVar15 = uVar23 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar5 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar5) {
      iVar5 = iVar4;
    }
  }
  if (iVar5 != iVar4) {
    uVar22 = 0xffffffff;
    iVar6 = iVar4;
    do {
      plVar21 = *(longlong **)
                 (*(longlong *)(*(longlong *)(param_1 + 0x3a0) + 8 + (longlong)iVar5 * 0x18) + 8);
      if (plVar21 != (longlong *)0x0) {
        (**(code **)(*plVar21 + 0x18))(plVar21,param_2);
        iVar6 = *(int *)(param_1 + 0x3c8);
      }
      uVar22 = uVar22 & ~(uint)uVar23;
      puVar9 = *(uint **)(param_1 + 0x3c0);
      if (*(uint **)(param_1 + 0x3c0) == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 0x3b0);
      }
      iVar5 = (int)uVar24;
      lVar17 = (longlong)iVar5;
      uVar12 = puVar9[lVar17] & uVar22;
      if (uVar12 == 0) {
        iVar13 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar13 = iVar6 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar13;
        if (iVar13 < iVar5) {
          iVar14 = iVar5;
        }
        if (iVar5 < iVar13) {
          lVar18 = 0;
          do {
            uVar12 = puVar9[lVar17 + lVar18 + 1];
            if (uVar12 != 0) {
              uVar24 = (ulonglong)(iVar5 + (int)lVar18 + 1);
              uVar22 = 0xffffffff;
              goto LAB_143240579;
            }
            iVar16 = iVar16 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar14 - lVar17 != lVar18);
          uVar22 = 0xffffffff;
          iVar5 = iVar14;
        }
        uVar24 = (ulonglong)(iVar5 + 1);
        param_2 = local_78;
        iVar5 = iVar6;
      }
      else {
LAB_143240579:
        uVar23 = (ulonglong)(-uVar12 & uVar12);
        uVar15 = uVar23 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar5 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar5) {
          iVar5 = iVar6;
        }
      }
    } while (iVar5 != iVar4);
  }
LAB_14324049f:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432411d6 FUN_1432411d6 body=234 status=ok
// SIG undefined FUN_1432411d6(void)

longlong FUN_1432411d6(void)

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
  if (DAT_14cad3688 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144b223ce;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417963e0;
    local_38 = &LAB_147a2f4c9;
    local_40 = &LAB_1400ea6f8;
    local_48 = L"Engine";
    local_50 = 0x200000000000;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x720;
    FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad3688;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432412c2 FUN_1432412c2 body=1385 status=ok
// SIG undefined FUN_1432412c2(void)

void FUN_1432412c2(longlong param_1,longlong *param_2,undefined4 *param_3)

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
  longlong *plVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_d8 [32];
  undefined1 **local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  undefined1 *local_68 [2];
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = *param_2;
  lStack_80 = param_2[1];
  local_78 = param_2[2];
  local_a8 = *param_3;
  uStack_a4 = param_3[1];
  uStack_a0 = param_3[2];
  uStack_9c = param_3[3];
  local_98 = param_3[4];
  uStack_94 = param_3[5];
  uStack_90 = param_3[6];
  uStack_8c = param_3[7];
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143241327;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14324132c;
      goto LAB_14324137c;
    }
  }
  else {
LAB_143241327:
    if (iVar6 != 0x10) {
LAB_14324137c:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_14324132c;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14324132c;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143241520;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143241b74);
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
LAB_143241520:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 0xfU & 0xfffffffffffffff0);
          puVar14 = (uint *)(puVar16 + 0x1e);
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
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x67U & 0xfffffffffffffff0);
            puVar14 = (uint *)(puVar16 + 0x1e);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_1432415a0;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_1432415a0:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a3a1e90;
        puVar16[0x16] = param_1;
        puVar16[0x17] = local_88;
        puVar16[0x18] = lStack_80;
        puVar16[0x19] = local_78;
        *(undefined4 *)(puVar16 + 0x1a) = local_a8;
        *(undefined4 *)((longlong)puVar16 + 0xd4) = uStack_a4;
        *(undefined4 *)(puVar16 + 0x1b) = uStack_a0;
        *(undefined4 *)((longlong)puVar16 + 0xdc) = uStack_9c;
        *(undefined4 *)(puVar16 + 0x1c) = local_98;
        *(undefined4 *)((longlong)puVar16 + 0xe4) = uStack_94;
        *(undefined4 *)(puVar16 + 0x1d) = uStack_90;
        *(undefined4 *)((longlong)puVar16 + 0xec) = uStack_8c;
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
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
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
        local_68[0] = (undefined1 *)0x0;
        local_58 = (longlong *)FUN_14001cc68(0x50,0x10);
        *local_58 = (longlong)&PTR_LAB_14a3a1e40;
        local_58[2] = param_1;
        local_58[5] = local_78;
        local_58[3] = local_88;
        local_58[4] = lStack_80;
        *(undefined4 *)(local_58 + 6) = local_a8;
        *(undefined4 *)((longlong)local_58 + 0x34) = uStack_a4;
        *(undefined4 *)(local_58 + 7) = uStack_a0;
        *(undefined4 *)((longlong)local_58 + 0x3c) = uStack_9c;
        *(undefined4 *)(local_58 + 8) = local_98;
        *(undefined4 *)((longlong)local_58 + 0x44) = uStack_94;
        *(undefined4 *)(local_58 + 9) = uStack_90;
        *(undefined4 *)((longlong)local_58 + 0x4c) = uStack_8c;
        if (local_58 + 2 != (longlong *)0x0) {
          local_68[0] = &LAB_147448db2;
        }
        local_b8 = local_68;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateFoliageParameters",&DAT_14caa1538);
        if (local_68[0] != (undefined1 *)0x0) {
          plVar13 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar13 = local_48;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
      }
      goto LAB_14324145b;
    }
  }
LAB_14324132c:
  *(longlong *)(param_1 + 0x8c8) = local_78;
  *(longlong *)(param_1 + 0x8b8) = local_88;
  *(longlong *)(param_1 + 0x8c0) = lStack_80;
  *(undefined4 *)(param_1 + 0x8d0) = local_a8;
  *(undefined4 *)(param_1 + 0x8d4) = uStack_a4;
  *(undefined4 *)(param_1 + 0x8d8) = uStack_a0;
  *(undefined4 *)(param_1 + 0x8dc) = uStack_9c;
  *(ulonglong *)(param_1 + 0x8e0) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(param_1 + 0x8e8) = CONCAT44(uStack_8c,uStack_90);
LAB_14324145b:
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14324182d FUN_14324182d body=69 status=ok
// SIG undefined FUN_14324182d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14324182d(void)

{
  _DAT_14caa14c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014324186f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa14c8,1);
  return;
}



// FUNCTION 143241872 FUN_143241872 body=128 status=ok
// SIG undefined FUN_143241872(void)

undefined8 FUN_143241872(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 extraout_var;
  ulonglong uVar7;
  
  lVar2 = DAT_14caa14d0;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar7 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar7 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar7 = 1;
  }
  if (*(char *)(lVar2 + uVar7) == '\x01') {
    uVar5 = CONCAT71((int7)(uVar5 >> 8),*(undefined1 *)(param_1 + 0x66c)) & 0xffffffffffffff20;
    uVar6 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 5);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 1432418fe FUN_1432418fe body=69 status=ok
// SIG undefined FUN_1432418fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432418fe(void)

{
  _DAT_14caa14d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143241940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa14e0,1);
  return;
}



// FUNCTION 143241943 FUN_143241943 body=69 status=ok
// SIG undefined FUN_143241943(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143241943(void)

{
  _DAT_14caa14f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143241985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa14f8,1);
  return;
}



// FUNCTION 143241994 FUN_143241994 body=69 status=ok
// SIG undefined FUN_143241994(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143241994(void)

{
  _DAT_14caa1518 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432419d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa1520,1);
  return;
}



// FUNCTION 143241a0c FUN_143241a0c body=48 status=ok
// SIG undefined FUN_143241a0c(void)

longlong FUN_143241a0c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x718;
  FUN_140899b20(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143241a44 FUN_143241a44 body=48 status=ok
// SIG undefined FUN_143241a44(void)

longlong FUN_143241a44(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140cd3a56(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143241a74 FUN_143241a74 body=48 status=ok
// SIG undefined FUN_143241a74(void)

longlong FUN_143241a74(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140cd3a56(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143241ab4 FUN_143241ab4 body=48 status=ok
// SIG undefined FUN_143241ab4(void)

longlong FUN_143241ab4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x718;
  FUN_140899bb4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143241b9c FUN_143241b9c body=282 status=ok
// SIG undefined FUN_143241b9c(void)

undefined8 * FUN_143241b9c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143241b74);
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



// FUNCTION 143241cc4 FUN_143241cc4 body=31 status=ok
// SIG undefined FUN_143241cc4(void)

undefined8 FUN_143241cc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143241ce7 FUN_143241ce7 body=875 status=ok
// SIG undefined FUN_143241ce7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143241ce7(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  char *local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = "SMInstance";
  uStack_50 = 10;
  uStack_4c = uStack_4c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14caa1310 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14caa1318);
  if (cVar1 == '\0') {
    _DAT_14caa1318 = 0;
    uRam000000014caa1320 = 0;
  }
  if (local_58 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Foliage",&PTR_FUN_14a39b7a0,1,0);
  ppuStack_70 = &PTR_FUN_14a39e1c0;
  local_68 = 3;
  local_78 = 2;
  FUN_14282b410(L"/Script/Foliage",&PTR_FUN_14a39e270,1,&PTR_FUN_14a39e220);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Foliage",&PTR_FUN_14a39e750,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Foliage",&PTR_FUN_14a39ec90,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Foliage",&PTR_FUN_14a39f070,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Foliage",&PTR_FUN_14a39f820,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Foliage",&PTR_FUN_14a3a0540,1,0);
  local_58 = (char *)0x800000014a3a2380;
  local_44 = 7;
  uStack_50 = FUN_14577453c();
  uStack_4c = CONCAT31(uStack_4c._1_3_,1);
  FUN_146321926(&local_58);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Foliage",&PTR_FUN_14a3a0e20,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Foliage",0,0,&PTR_FUN_14a3a1010);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Foliage",&PTR_FUN_14a3a10e0,1,0);
  local_58 = (char *)CONCAT71(local_58._1_7_,1);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14caa14c0,L"r.Velocity.EnableLandscapeGrass",&local_58,
                L"Specify if you want to output velocity for the grass component for WPO.\n True (default)\n False"
               );
  atexit(FUN_14324182d);
  local_58 = (char *)((ulonglong)local_58 & 0xffffffff00000000);
  local_78._0_4_ = 0x40;
  FUN_14078dbce(&DAT_14caa14d8,L"foliage.DiscardDataOnLoad",&local_58,
                L"1: Discard foliage data on load if the foliage type has it enabled; 0: Keep foliage data regardless of whether the foliage type has it enabled or not (requires reloading level)"
               );
  atexit(FUN_1432418fe);
  local_58 = (char *)CONCAT44(local_58._4_4_,0x3f800000);
  local_78._0_4_ = 0x40;
  FUN_140a6b41e(&DAT_14caa14f0,L"foliage.CullDistanceScale",&local_58,
                L"Controls the cull distance scale. Foliage must opt-in to cull distance scaling through the foliage type."
               );
  atexit(FUN_143241943);
  local_58 = (char *)0x71544970430c4d19;
  uStack_50 = 0x87699b69;
  uStack_4c = 0xdf90b0e5;
  _DAT_14caa1508 = 0x430c4d19;
  uRam000000014caa150c = 0x71544970;
  uRam000000014caa1510 = 0x87699b69;
  uRam000000014caa1514 = 0xdf90b0e5;
  FUN_141005458(&local_58,0xf,L"FoliageVer",0);
  atexit((_func_5014 *)&LAB_143241988);
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  FUN_141471170(&DAT_14caa1518,L"TypedElements.EnableFoliageInstanceElements",&DAT_14caa1528,
                L"Is support for static mesh instance elements enabled for foliage owned instances?"
               );
  atexit(FUN_143241994);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143242054 FUN_143242054 body=993 status=ok
// SIG undefined FUN_143242054(void)

void FUN_143242054(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  byte bVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined4 *)(param_1 + 0xb50) = 0;
  uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0xb28) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0xb30) = uVar4;
  *(undefined8 *)(param_1 + 0xb38) = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0xb54) = param_4;
  uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0xba8) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0xbb0) = uVar4;
  *(undefined8 *)(param_1 + 3000) = DAT_14c8464f0;
  uVar7 = DAT_14c8464e8._4_4_;
  uVar6 = (undefined4)DAT_14c8464e8;
  uVar5 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xb90) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0xb94) = uVar5;
  *(undefined4 *)(param_1 + 0xb98) = uVar6;
  *(undefined4 *)(param_1 + 0xb9c) = uVar7;
  *(undefined8 *)(param_1 + 0xba0) = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0xbc0) = 0;
  *(undefined4 *)(param_1 + 0xbd0) = 0;
  if (*(int *)(param_1 + 0xbd4) != 0) {
    FUN_1401a2d6a(param_1 + 0xbc8,0);
  }
  puVar10 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar10 = 0;
  puVar10[1] = 0;
  plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14a3a6e70;
  plVar11[2] = (longlong)puVar10;
  *(undefined8 **)(param_1 + 0xb10) = puVar10;
  plVar3 = *(longlong **)(param_1 + 0xb18);
  if (plVar11 == plVar3) {
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar11 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar3 = plVar11;
        goto joined_r0x0001432421a2;
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0xb18) = plVar11;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar3 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001432421a2:
        if (iVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x7e0) = 0;
  if (*(int *)(param_1 + 0x7e4) != 0) {
    FUN_14481578e(param_1 + 0x7d8,0);
  }
  *(undefined4 *)(param_1 + 0xb48) = 0;
  if (*(int *)(param_1 + 0xb4c) != 0) {
    FUN_14481578e(param_1 + 0xb40,0);
  }
  *(undefined4 *)(param_1 + 0xbe0) = param_3;
  local_a8 = DAT_14c8464f0;
  local_b8 = (undefined8 *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_b0 = (undefined4)DAT_14c8464e8;
  uStack_ac = DAT_14c8464e8._4_4_;
  FUN_140b4defe(&local_98,param_2);
  *(undefined8 *)(param_1 + 0xb88) = local_68;
  *(undefined4 *)(param_1 + 0xb78) = local_78;
  *(undefined4 *)(param_1 + 0xb7c) = uStack_74;
  *(undefined4 *)(param_1 + 0xb80) = uStack_70;
  *(undefined4 *)(param_1 + 0xb84) = uStack_6c;
  *(undefined4 *)(param_1 + 0xb68) = local_88;
  *(undefined4 *)(param_1 + 0xb6c) = uStack_84;
  *(undefined4 *)(param_1 + 0xb70) = uStack_80;
  *(undefined4 *)(param_1 + 0xb74) = uStack_7c;
  *(undefined4 *)(param_1 + 0xb58) = (undefined4)local_98;
  *(undefined4 *)(param_1 + 0xb5c) = local_98._4_4_;
  *(undefined4 *)(param_1 + 0xb60) = (undefined4)uStack_90;
  *(undefined4 *)(param_1 + 0xb64) = uStack_90._4_4_;
  *(undefined4 *)(param_1 + 0xc20) = param_4;
  if (0 < *(int *)(param_1 + 0xb54)) {
    lVar12 = *(longlong *)(param_1 + 0x660);
    if ((lVar12 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar12);
      lVar12 = *(longlong *)(param_1 + 0x660);
    }
    else if (lVar12 == 0) goto LAB_1432422e8;
    if ((lVar12 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar12);
    }
    cVar8 = FUN_140081ab2(lVar12,1,0xffffffff);
    if ((cVar8 != '\0') && (plVar3 = *(longlong **)(param_1 + 0xb10), plVar3 != param_2)) {
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
      *plVar3 = *param_2;
      *param_2 = 0;
      *(int *)(plVar3 + 1) = (int)param_2[1];
      *(undefined4 *)((longlong)plVar3 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
      param_2[1] = 0;
    }
  }
LAB_1432422e8:
  local_b8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *local_b8 = 0;
  local_b8[1] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_b8[4] = 0;
  local_b8[5] = 0;
  local_b8[6] = 0;
  local_b8[7] = 0;
  *(undefined8 *)((longlong)local_b8 + 0x39) = 0;
  *(undefined8 *)((longlong)local_b8 + 0x41) = 0;
  puVar10 = local_b8;
  puVar13 = &local_98;
  for (lVar12 = 10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  puVar10 = param_5;
  puVar13 = local_b8;
  for (lVar12 = 10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  puVar10 = &local_98;
  for (lVar12 = 10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *param_5 = *puVar10;
    puVar10 = puVar10 + 1;
    param_5 = param_5 + 1;
  }
  local_98 = 0;
  uStack_90 = 0;
  FUN_140b4dfbe(param_1 + 0x8c0,&local_b8,param_1 + 0x7d8,&local_98);
  FUN_14477c0e3(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
    bVar9 = *(byte *)(param_1 + 0x9d);
    if ((bVar9 & 1) != 0) {
      if ((*(longlong *)(param_1 + 0xb0) != 0) || (lVar12 = FUN_1448abda6(param_1), lVar12 != 0))
      goto LAB_1432423c9;
      bVar9 = *(byte *)(param_1 + 0x9d);
    }
    *(byte *)(param_1 + 0x9d) = bVar9 | 1;
    FUN_1401057d4(param_1);
    FUN_14010586c(&DAT_14cad0140,param_1);
  }
LAB_1432423c9:
  puVar10 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    FUN_14006ea12(local_b8);
    FUN_1400020a8(puVar10);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143242436 FUN_143242436 body=221 status=ok
// SIG undefined FUN_143242436(void)

longlong FUN_143242436(void)

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
  if (DAT_14cad00c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1479b7a0c;
    local_40 = &LAB_1463b464e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad00c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143242514 FUN_143242514 body=55 status=ok
// SIG undefined FUN_143242514(void)

void FUN_143242514(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa15e0 == 0) {
    uVar1 = FUN_14132555d();
    DAT_14caa15e0 = FUN_14171c317(FUN_146321ee1,uVar1,L"ESimulationOverlap");
  }
  return;
}



// FUNCTION 14324254b FUN_14324254b body=55 status=ok
// SIG undefined FUN_14324254b(void)

void FUN_14324254b(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa15f8 == 0) {
    uVar1 = FUN_14132555d();
    DAT_14caa15f8 = FUN_14171c317(FUN_146321f10,uVar1,L"ESimulationQuery");
  }
  return;
}



// FUNCTION 14324258e FUN_14324258e body=48 status=ok
// SIG undefined FUN_14324258e(void)

longlong FUN_14324258e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_1402d9b92(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432425fe FUN_1432425fe body=29 status=ok
// SIG undefined FUN_1432425fe(void)

undefined8 FUN_1432425fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14324261c FUN_14324261c body=409 status=ok
// SIG undefined FUN_14324261c(void)

void FUN_14324261c(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = FUN_14744d304(param_1,param_3,local_48);
  if (iVar4 == 1) {
LAB_143242709:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  }
  if (iVar4 == 0) {
    iVar4 = (int)param_1[1];
    if (3 < iVar4 &&
        (double)(*(float *)(param_1 + 0xd) * *(float *)(param_1 + 0xd)) <
        ((double)param_1[8] - (double)param_1[6]) * ((double)param_1[8] - (double)param_1[6]) +
        ((double)param_1[9] - (double)param_1[7]) * ((double)param_1[9] - (double)param_1[7])) {
      FUN_14744d392(param_1);
      goto LAB_143242709;
    }
    local_58 = *(undefined8 *)(param_3 + 8);
    local_78 = *param_3;
    uStack_74 = param_3[1];
    uStack_70 = param_3[2];
    uStack_6c = param_3[3];
    local_68 = param_3[4];
    uStack_64 = param_3[5];
    uStack_60 = param_3[6];
    uStack_5c = param_3[7];
    uVar2 = *param_2;
    *(uint *)(param_1 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
      FUN_14744d7ee(param_1);
    }
    lVar3 = *param_1;
    lVar5 = (longlong)iVar4 * 0x30;
    *(undefined8 *)(lVar3 + 0x20 + lVar5) = local_58;
    puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar5);
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    puVar1 = (undefined4 *)(lVar3 + lVar5);
    *puVar1 = local_78;
    puVar1[1] = uStack_74;
    puVar1[2] = uStack_70;
    puVar1[3] = uStack_6c;
    *(undefined8 *)(lVar3 + 0x28 + lVar5) = uVar2;
  }
  else {
    local_58 = *(undefined8 *)(param_3 + 8);
    local_78 = *param_3;
    uStack_74 = param_3[1];
    uStack_70 = param_3[2];
    uStack_6c = param_3[3];
    local_68 = param_3[4];
    uStack_64 = param_3[5];
    uStack_60 = param_3[6];
    uStack_5c = param_3[7];
    uVar2 = *param_2;
    iVar4 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
      FUN_14744d7ee(param_1,iVar4);
    }
    lVar3 = *param_1;
    lVar5 = (longlong)iVar4 * 0x30;
    *(undefined8 *)(lVar3 + 0x20 + lVar5) = local_58;
    puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar5);
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    puVar1 = (undefined4 *)(lVar3 + lVar5);
    *puVar1 = local_78;
    puVar1[1] = uStack_74;
    puVar1[2] = uStack_70;
    puVar1[3] = uStack_6c;
    *(undefined8 *)(lVar3 + 0x28 + lVar5) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1432427ce FUN_1432427ce body=79 status=ok
// SIG undefined FUN_1432427ce(void)

undefined8 FUN_1432427ce(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = *param_1;
  lVar4 = param_1[1];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)(lVar4 + 0x168) = *(undefined4 *)(param_1 + 3);
  FUN_14744b202(lVar4,uVar3,uVar2);
  FUN_14744cd0e(lVar4,uVar1,0);
  FUN_14744cd0e(lVar4,uVar1,1);
  return param_1[1];
}



// FUNCTION 143242822 FUN_143242822 body=5 status=ok
// SIG undefined FUN_143242822(void)

longlong FUN_143242822(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143242828 FUN_143242828 body=29 status=ok
// SIG undefined FUN_143242828(void)

void FUN_143242828(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143242846 FUN_143242846 body=29 status=ok
// SIG undefined FUN_143242846(void)

undefined8 FUN_143242846(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143242863 FUN_143242863 body=514 status=ok
// SIG undefined FUN_143242863(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143242863(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_48;
  undefined4 uStack_40;
  uint uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = "SMInstance";
  uStack_40 = 10;
  uStack_3c = uStack_3c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_48,1);
  _DAT_14caa1558 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14caa1560);
  if (cVar1 == '\0') {
    _DAT_14caa1560 = 0;
    uRam000000014caa1568 = 0;
  }
  if (local_48 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Foliage",&PTR_FUN_14a3a4370,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Foliage",&PTR_FUN_14a3a4b90,1,0);
  FUN_1446f470e(&DAT_14caa15b8,L"ProceduralFoliageBlockingVolume",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Foliage",&PTR_FUN_14a3a5300,1,0);
  ppuStack_60 = &PTR_FUN_14a3a56a0;
  local_58 = 2;
  local_68 = 1;
  FUN_14282b410(L"/Script/Foliage",0,0,&PTR_FUN_14a3a56e0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Foliage",&PTR_FUN_14a3a5de0,1,0);
  local_48 = (char *)0x53954c14aafe32bd;
  uStack_40 = 0xb66a5e25;
  uStack_3c = 0x1032d1dd;
  _DAT_14caa1640 = 0xaafe32bd;
  uRam000000014caa1644 = 0x53954c14;
  uRam000000014caa1648 = 0xb66a5e25;
  uRam000000014caa164c = 0x1032d1dd;
  FUN_141005458(&local_48,1,L"ProceduralFoliageVer",0);
  atexit((_func_5014 *)&LAB_143242582);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Foliage",&PTR_FUN_14a3a62d0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Foliage",&PTR_FUN_14a3a6a80,1,0);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143242a68 FUN_143242a68 body=55 status=ok
// SIG undefined FUN_143242a68(void)

void FUN_143242a68(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa16d0 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa16d0 = FUN_14171c317(FUN_146322242,uVar1,L"ERTDrawingType");
  }
  return;
}



// FUNCTION 143242a9f FUN_143242a9f body=55 status=ok
// SIG undefined FUN_143242a9f(void)

void FUN_143242a9f(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa16e8 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa16e8 = FUN_14171c317(FUN_146322271,uVar1,L"EHeightmapRTType");
  }
  return;
}



// FUNCTION 143242ad6 FUN_143242ad6 body=55 status=ok
// SIG undefined FUN_143242ad6(void)

void FUN_143242ad6(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1700 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa1700 = FUN_14171c317(FUN_1463222a0,uVar1,L"EWeightmapRTType");
  }
  return;
}



// FUNCTION 143242b0d FUN_143242b0d body=55 status=ok
// SIG undefined FUN_143242b0d(void)

void FUN_143242b0d(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1730 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa1730 = FUN_14171c317(FUN_146322366,uVar1,L"ELandscapeBlendMode");
  }
  return;
}



// FUNCTION 143242b44 FUN_143242b44 body=55 status=ok
// SIG undefined FUN_143242b44(void)

void FUN_143242b44(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1858 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa1858 = FUN_14171c317(FUN_14632296a,uVar1,L"ELandscapeClearMode");
  }
  return;
}



// FUNCTION 143242b7b FUN_143242b7b body=55 status=ok
// SIG undefined FUN_143242b7b(void)

void FUN_143242b7b(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa19d0 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa19d0 = FUN_14171c317(FUN_146322ea3,uVar1,L"ELandscapeToolTargetType");
  }
  return;
}



// FUNCTION 143242bb2 FUN_143242bb2 body=55 status=ok
// SIG undefined FUN_143242bb2(void)

void FUN_143242bb2(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa19e8 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa19e8 = FUN_14171c317(FUN_146322ed2,uVar1,L"ELandscapeGizmoType");
  }
  return;
}



// FUNCTION 143242be9 FUN_143242be9 body=55 status=ok
// SIG undefined FUN_143242be9(void)

void FUN_143242be9(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1a00 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa1a00 = FUN_14171c317(FUN_146322f01,uVar1,L"ELandscapeGizmoSnapType");
  }
  return;
}



// FUNCTION 143242c20 FUN_143242c20 body=55 status=ok
// SIG undefined FUN_143242c20(void)

void FUN_143242c20(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1a60 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa1a60 = FUN_14171c317(FUN_146323024,uVar1,L"EGrassScaling");
  }
  return;
}



// FUNCTION 143242c62 FUN_143242c62 body=48 status=ok
// SIG undefined FUN_143242c62(void)

longlong FUN_143242c62(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140ededbe(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143242d4e FUN_143242d4e body=561 status=ok
// SIG undefined FUN_143242d4e(void)

void FUN_143242d4e(void)

{
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3a6f70,1,0,0,0,0);
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3a7310,1,0,0,0,0);
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3a73d0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3a84c0,1,&PTR_FUN_14a3a8470,2,&PTR_FUN_14a3a83f0,4)
  ;
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3aa810,2,&PTR_FUN_14a3aa6f0,7,&PTR_FUN_14a3aa6d0,1)
  ;
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3abae0,5,0,0,0,0);
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3abee0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3ac910,3,0,0,0,0);
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3acbb0,2,0,0,0,0);
  FUN_14098d3d2(FUN_143242b7b,L"/Script/Landscape",L"ELandscapeToolTargetType",&DAT_14caa19c8);
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3acf20,1,&PTR_FUN_14a3acef0,1,&PTR_FUN_14a3aceb0,2)
  ;
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3acff0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3ae010,1,&PTR_FUN_14a3adfe0,1,&PTR_FUN_14a3adfc0,1)
  ;
  return;
}



// FUNCTION 143242f80 FUN_143242f80 body=55 status=ok
// SIG undefined FUN_143242f80(void)

void FUN_143242f80(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1ac8 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa1ac8 = FUN_14171c317(FUN_146323586,uVar1,L"ESplineModulationColorMask");
  }
  return;
}



// FUNCTION 143242fb7 FUN_143242fb7 body=55 status=ok
// SIG undefined FUN_143242fb7(void)

void FUN_143242fb7(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1b80 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa1b80 = FUN_14171c317(FUN_14632374c,uVar1,L"ELandscapeDirtyingMode");
  }
  return;
}



// FUNCTION 143242fee FUN_143242fee body=55 status=ok
// SIG undefined FUN_143242fee(void)

void FUN_143242fee(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1c78 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa1c78 = FUN_14171c317(FUN_146323bfc,uVar1,L"LandscapeSplineMeshOrientation");
  }
  return;
}



// FUNCTION 143243025 FUN_143243025 body=55 status=ok
// SIG undefined FUN_143243025(void)

void FUN_143243025(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1d20 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa1d20 = FUN_14171c317(FUN_146323e35,uVar1,L"ELandscapeLayerBlendType");
  }
  return;
}



// FUNCTION 14324305c FUN_14324305c body=55 status=ok
// SIG undefined FUN_14324305c(void)

void FUN_14324305c(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1d68 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa1d68 = FUN_14171c317(FUN_146323f29,uVar1,L"ETerrainCoordMappingType");
  }
  return;
}



// FUNCTION 143243093 FUN_143243093 body=55 status=ok
// SIG undefined FUN_143243093(void)

void FUN_143243093(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1d80 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa1d80 = FUN_14171c317(FUN_146323f58,uVar1,L"ELandscapeCustomizedCoordType");
  }
  return;
}



// FUNCTION 1432430ca FUN_1432430ca body=48 status=ok
// SIG undefined FUN_1432430ca(void)

longlong FUN_1432430ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140edecd8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1432431a2 FUN_1432431a2 body=764 status=ok
// SIG undefined FUN_1432431a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432431a2(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3b4090,1,0);
  ppuStack_60 = &PTR_FUN_14a3b4320;
  local_68 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3b4340,1,0);
  FUN_1400b22c2(local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(local_50,&DAT_14caa1af0);
  if (cVar1 == '\0') {
    _DAT_14caa1af0 = 0;
    uRam000000014caa1af8 = 0;
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3b47a0,1,&PTR_FUN_14a3b4770);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3b48c0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3b49e0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3b4e00,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14a3b5830;
  local_68 = 0;
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3b5850,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3b5f80,1,&PTR_FUN_14a3b5f50);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3b6510,1,&PTR_FUN_14a3b6490);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14a3b7270;
  local_68 = 3;
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3b7310,1,&PTR_FUN_14a3b7290);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3b74d0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3b7640,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3b7c20,1,&PTR_FUN_14a3b7bf0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14a3b83a0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3b83f0,1,&PTR_FUN_14a3b83c0);
  ppuStack_60 = &PTR_FUN_14a3b8af0;
  local_68 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3b8b30,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432434a0 FUN_1432434a0 body=162 status=ok
// SIG undefined FUN_1432434a0(void)

void FUN_1432434a0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146324580(&local_28,0x10,1,0x200000);
  if (local_18 < local_20 && -1 < local_18) {
    do {
      lVar1 = (longlong)local_18;
      do {
        lVar2 = lVar1;
        lVar1 = lVar2 + 1;
        local_18 = local_18 + 1;
        if (local_20 <= lVar1) goto LAB_14324351c;
      } while (*(longlong *)(local_28 + lVar1 * 8) == 0);
    } while ((-2 < lVar2) && (local_18 < local_20));
  }
LAB_14324351c:
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143243543 FUN_143243543 body=69 status=ok
// SIG undefined FUN_143243543(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143243543(void)

{
  _DAT_14caa1df8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143243585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa1e00,1);
  return;
}



// FUNCTION 143243588 FUN_143243588 body=69 status=ok
// SIG undefined FUN_143243588(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143243588(void)

{
  _DAT_14caa1e10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432435ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa1e18,1);
  return;
}



// FUNCTION 1432435cd FUN_1432435cd body=69 status=ok
// SIG undefined FUN_1432435cd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432435cd(void)

{
  _DAT_14caa1e20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014324360f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa1e28,1);
  return;
}



// FUNCTION 143243612 FUN_143243612 body=864 status=ok
// SIG undefined FUN_143243612(void)

void FUN_143243612(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb60);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc28);
  FUN_1448284b2(param_1,param_2);
  bVar12 = *(byte *)(param_2 + 5);
  if (((bVar12 & 2) != 0) &&
     ((*(double *)(param_1 + 0x6f8) - *(double *)(param_1 + 0x6e0)) *
      (*(double *)(param_1 + 0x6f0) - *(double *)(param_1 + 0x6d8)) *
      (*(double *)(param_1 + 0x6e8) - *(double *)(param_1 + 0x6d0)) <= 0.0)) {
    dVar8 = (double)(*(int *)(param_1 + 0x628) + 1);
    *(undefined8 *)(param_1 + 0x6d0) = 0;
    *(undefined8 *)(param_1 + 0x6d8) = 0;
    *(undefined8 *)(param_1 + 0x6e0) = 0xc070000000000000;
    *(double *)(param_1 + 0x6e8) = dVar8;
    *(double *)(param_1 + 0x6f0) = dVar8;
    *(undefined8 *)(param_1 + 0x6f8) = 0x406fffc000000000;
    *(undefined1 *)(param_1 + 0x700) = 1;
    bVar12 = *(byte *)(param_2 + 5);
  }
  if (((bVar12 & 1) != 0) && (iVar13 = FUN_1448332aa(param_2,&DAT_149e3cb60), iVar13 < 9)) {
    puVar15 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    puVar15[3] = 0;
    puVar15[4] = 0;
    puVar15[5] = 0;
    puVar15[6] = 0;
    FUN_147457ee8(puVar15,param_2);
    FUN_147457f64(puVar15 + 1,param_2);
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_147457fe0(&local_58,0);
    uVar9 = *(undefined4 *)(param_1 + 0x784);
    uVar10 = *(undefined4 *)(param_1 + 0x788);
    uVar11 = *(undefined4 *)(param_1 + 0x78c);
    *(undefined4 *)local_58 = *(undefined4 *)(param_1 + 0x780);
    *(undefined4 *)((longlong)local_58 + 4) = uVar9;
    *(undefined4 *)(local_58 + 1) = uVar10;
    *(undefined4 *)((longlong)local_58 + 0xc) = uVar11;
    local_58[2] = puVar15;
    FUN_147458074(&DAT_14cae9ca0,param_1,&local_58);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (0x1b2 < (int)param_2[8]) {
    if ((*(byte *)((longlong)param_2 + 0x36) & 0x40) == 0) {
      FUN_140ca3840(param_2,*(undefined8 *)(param_1 + 0x7f8));
    }
    else if ((*(byte *)(param_2 + 5) & 4) == 0) {
      FUN_1408383eb(param_2,&local_58);
      uVar4 = *local_58;
      lVar5 = local_58[1];
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(param_1 + 0x800);
      *(undefined8 *)(param_1 + 0x7f8) = uVar4;
      *(longlong *)(param_1 + 0x800) = lVar5;
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
    }
    else {
      local_58 = (undefined8 *)(param_1 + 0x7f8);
      FUN_1408383eb(param_2);
    }
  }
  if ((0x122 < (int)param_2[8]) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
    if ((param_2[0xd] == 0) || (uVar14 = 1, *(longlong *)(param_2[0xd] + 0x10) == 0)) {
      uVar14 = *(uint *)(param_2 + 5) >> 2 & 1;
    }
    puVar7 = (ulonglong *)param_2[1];
    puVar3 = (uint *)*puVar7 + 1;
    if ((uint *)puVar7[1] < puVar3) {
      local_58 = (undefined8 *)CONCAT44(local_58._4_4_,uVar14);
      (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
      uVar14 = (uint)local_58;
      if (1 < (uint)local_58) {
        FUN_14572541c(param_2);
        uVar14 = (uint)local_58;
      }
    }
    else {
      uVar14 = *(uint *)*puVar7;
      *puVar7 = (ulonglong)puVar3;
    }
    if (uVar14 != 0) goto LAB_1432438a7;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    local_48 = *(undefined8 *)(param_1 + 0x18);
    FUN_1400021e4(&local_48,&local_58);
    puVar15 = local_58;
    if ((int)uStack_50 == 0) {
      puVar15 = (undefined8 *)&DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/Landscape/Private/Landscape.cpp",0x3f9,
                  L"This platform requires cooked packages, and this landscape does not contain cooked data %s."
                  ,puVar15);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1432438a7:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143243974 FUN_143243974 body=43 status=ok
// SIG undefined FUN_143243974(void)

void FUN_143243974(longlong *param_1)

{
  FUN_144842962();
  FUN_14324f56e(param_1[0xff]);
                    /* WARNING: Could not recover jumptable at 0x000143243998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1);
  return;
}



// FUNCTION 1432439b6 FUN_1432439b6 body=81 status=ok
// SIG undefined FUN_1432439b6(void)

undefined8 FUN_1432439b6(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14490dacc(param_1,2);
  if (((cVar1 == '\0') || (DAT_14c761950 != 1)) || (DAT_14cafb288 == 1)) {
    uVar2 = FUN_14001cc68(0x6a0,0x10);
    FUN_14326404e(uVar2,param_1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143243a07 FUN_143243a07 body=569 status=ok
// SIG undefined FUN_143243a07(void)

void FUN_143243a07(void)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  void *_Src;
  byte bVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  int local_60;
  void *local_58;
  int local_50;
  int local_48;
  ulonglong local_40;
  
  lVar7 = DAT_14ca4b438;
  fVar2 = DAT_14c760e78;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar10 + 0xc60);
  if (((iVar9 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar9 == 2)) {
    uVar8 = 0;
  }
  else if (iVar9 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar8 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar8 = 1;
  }
  lVar3 = DAT_14ca4b438;
  pfVar1 = (float *)(lVar7 + uVar8 * 4);
  if ((fVar2 != *pfVar1) || (NAN(fVar2) || NAN(*pfVar1))) {
    iVar9 = *(int *)(lVar10 + 0xc60);
    if ((iVar9 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar9 == 2)))) {
      uVar8 = 0;
    }
    else if (iVar9 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    DAT_14c760e78 = *(float *)(lVar3 + uVar8 * 4);
    FUN_146324580(&local_58,0x30,1,0x200000);
    _Src = local_58;
    local_70 = (void *)0x0;
    lVar10 = (longlong)local_50;
    local_68 = local_50;
    if (lVar10 == 0) {
      local_64 = 0;
      iVar9 = 0;
      local_60 = local_48;
    }
    else {
      FUN_14010590e(&local_70,local_50,0);
      memcpy(local_70,_Src,lVar10 << 3);
      local_60 = local_48;
      iVar9 = local_50;
    }
joined_r0x000143243b5a:
    if (local_60 != iVar9) {
      lVar10 = *(longlong *)((longlong)local_70 + (longlong)local_60 * 8);
      if ((~*(byte *)(lVar10 + 0x9c) & 3) == 0) {
        bVar4 = *(byte *)(lVar10 + 0x9d);
        if ((bVar4 & 1) != 0) {
          if ((*(longlong *)(lVar10 + 0xb0) != 0) || (lVar7 = FUN_1448abda6(lVar10), lVar7 != 0))
          goto LAB_143243bbb;
          bVar4 = *(byte *)(lVar10 + 0x9d);
        }
        *(byte *)(lVar10 + 0x9d) = bVar4 | 1;
        FUN_1401057d4(lVar10);
        FUN_14010586c(&DAT_14cad0140,lVar10);
      }
LAB_143243bbb:
      lVar10 = (longlong)local_60;
      do {
        lVar10 = lVar10 + 1;
        local_60 = (int)lVar10;
        if (local_68 <= lVar10) break;
      } while (*(longlong *)((longlong)local_70 + lVar10 * 8) == 0);
      goto joined_r0x000143243b5a;
    }
    if (local_70 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143243c42 FUN_143243c42 body=122 status=ok
// SIG undefined FUN_143243c42(void)

void FUN_143243c42(longlong param_1)

{
  undefined1 auStack_58 [32];
  GUID local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x3a4) == 0 && *(int *)(param_1 + 0x3a0) == 0) &&
      *(int *)(param_1 + 0x3a8) == 0) && *(int *)(param_1 + 0x3ac) == 0) {
    local_38.Data1 = 0;
    local_38.Data2 = 0;
    local_38.Data3 = 0;
    local_38.Data4[0] = '\0';
    local_38.Data4[1] = '\0';
    local_38.Data4[2] = '\0';
    local_38.Data4[3] = '\0';
    local_38.Data4[4] = '\0';
    local_38.Data4[5] = '\0';
    local_38.Data4[6] = '\0';
    local_38.Data4[7] = '\0';
    CoCreateGuid(&local_38);
    *(ulong *)(param_1 + 0x3a0) = local_38.Data1;
    *(undefined4 *)(param_1 + 0x3a4) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x3a8) = local_38.Data4._0_4_;
    *(undefined4 *)(param_1 + 0x3ac) = local_38.Data4._4_4_;
  }
  FUN_143243cbe(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143243cbe FUN_143243cbe body=476 status=ok
// SIG undefined FUN_143243cbe(void)

void FUN_143243cbe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  FUN_1401b2056();
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_1 + 0x3a0);
  *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_1 + 0x3a4);
  *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_1 + 0x3a8);
  *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(param_1 + 0x3ac);
  FUN_141791dc6(param_1 + 0x3a0,param_1);
  lVar4 = param_1;
  if (((*(int *)(param_1 + 0x83c) == 0) && (0 < *(int *)(param_1 + 0x598))) &&
     (lVar8 = **(longlong **)(param_1 + 0x590), lVar8 != 0)) {
    *(undefined4 *)(param_1 + 0x83c) = *(undefined4 *)(lVar8 + 0x628);
    *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(lVar8 + 0x62c);
    *(undefined4 *)(param_1 + 0x844) = *(undefined4 *)(lVar8 + 0x630);
  }
  for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x20)) {
    if ((*(uint *)(lVar4 + 8) & 0x30) != 0) goto LAB_143243d2d;
  }
  FUN_14013683c(param_1 + 0x6b0,param_1);
LAB_143243d2d:
  iVar3 = *(int *)(param_1 + 0x598);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x590);
    lVar8 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar8);
      if (((lVar5 != 0) && (DAT_14caa6c6c != 0)) &&
         ((*(char *)(param_1 + 0x3d8) == '\0' &&
          ((-1 < **(int **)(lVar5 + 0x7f8) && (0 < (*(int **)(lVar5 + 0x7f8))[0x18])))))) {
        puVar7 = (undefined8 *)FUN_14001cc68(0x78,0x10);
        puVar7[1] = &DAT_100000001;
        *puVar7 = &PTR_LAB_14a3c1a30;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[8] = 0;
        puVar7[9] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[10] = 0;
        puVar7[0xb] = 0;
        puVar7[0xc] = 0;
        *(undefined4 *)(puVar7 + 2) = 0xffffffff;
        puVar7[3] = 0;
        puVar7[4] = 0;
        *(undefined8 *)((longlong)puVar7 + 0x44) = 0xffffffff00000080;
        puVar7[0xd] = 0;
        puVar7[0xe] = 0;
        plVar6 = *(longlong **)(lVar5 + 0x800);
        *(undefined8 **)(lVar5 + 0x7f8) = puVar7 + 2;
        *(undefined8 **)(lVar5 + 0x800) = puVar7;
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
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar3 * 8 != lVar8);
  }
  return;
}



// FUNCTION 143243ebe FUN_143243ebe body=4309 status=ok
// SIG undefined FUN_143243ebe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143243ebe(double *param_1,longlong param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
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
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 uVar16;
  byte bVar17;
  byte bVar18;
  int iVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  double *pdVar22;
  undefined1 *puVar23;
  undefined8 *puVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  ulonglong *puVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined2 uVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  undefined2 *puVar39;
  uint uVar40;
  ulonglong uVar41;
  int iVar42;
  int iVar43;
  longlong *plVar44;
  undefined8 *puVar45;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined8 **local_260;
  uint local_250;
  uint local_24c;
  ulonglong *local_248;
  ulonglong local_240;
  ulonglong local_238;
  longlong *local_230;
  longlong local_228;
  uint local_220;
  int local_21c;
  int local_218;
  int local_214;
  longlong local_210;
  double *local_208;
  ulonglong local_200;
  longlong local_1f8;
  undefined8 *local_1f0;
  longlong *local_1e8;
  ulonglong local_1e0;
  double *local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong *local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  int local_19c;
  undefined8 *local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 local_160;
  uint local_15c;
  longlong local_158;
  uint local_150;
  longlong local_14c;
  int local_144;
  undefined1 local_140 [8];
  undefined1 *local_138;
  int local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  iVar35 = *(int *)(param_1 + 0x18);
  uVar41 = 1;
  local_250 = 0;
  uVar27 = 0;
  iVar37 = 0;
  iVar33 = 0;
  if (iVar35 != 0) {
    pdVar22 = (double *)param_1[0x17];
    if ((double *)param_1[0x17] == (double *)0x0) {
      pdVar22 = param_1 + 0x15;
    }
    uVar40 = *(uint *)pdVar22;
    if (uVar40 == 0) {
      iVar33 = iVar35 + 0x1e;
      if (-1 < iVar35 + -1) {
        iVar33 = iVar35 + -1;
      }
      uVar31 = 0;
      uVar41 = (ulonglong)(uint)(iVar33 >> 5);
      if (iVar33 >> 5 < 1) {
        uVar41 = uVar31;
      }
      uVar27 = 0;
      iVar37 = 0;
      do {
        if (uVar41 == uVar27) {
          local_250 = 0;
          local_24c = 0;
          local_240 = 0;
          goto LAB_143244131;
        }
        iVar37 = iVar37 + 0x20;
        uVar40 = *(uint *)((longlong)pdVar22 + uVar27 * 4 + 4);
        uVar27 = uVar27 + 1;
      } while (uVar40 == 0);
    }
    else {
      uVar27 = 0;
    }
    uVar41 = (ulonglong)(-uVar40 & uVar40);
    uVar31 = uVar41 * 2 + 1;
    lVar29 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    iVar33 = (iVar37 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
    if (iVar35 <= iVar33) {
      iVar33 = iVar35;
    }
  }
  uVar31 = 0;
  local_24c = 0;
  local_240 = 0;
  if (iVar33 < iVar35) {
    pdVar22 = param_1 + 0x15;
    if ((double *)param_1[0x17] != (double *)0x0) {
      pdVar22 = (double *)param_1[0x17];
    }
    iVar42 = iVar35 + 0x1e;
    if (-1 < iVar35 + -1) {
      iVar42 = iVar35 + -1;
    }
    iVar42 = iVar42 >> 5;
    uVar40 = 0xffffffff;
    local_240 = 0;
    local_24c = 0;
    uVar31 = 0;
    local_250 = 0;
    do {
      uVar20 = *(ulonglong *)((longlong)param_1[0x13] + (longlong)iVar33 * 0x30);
      uVar34 = (uint)uVar20;
      if ((int)uVar34 <= (int)local_250) {
        local_250 = uVar34;
      }
      uVar25 = (uint)(uVar20 >> 0x20);
      if ((int)uVar25 <= (int)uVar31) {
        uVar31 = (ulonglong)uVar25;
      }
      if ((int)local_24c < (int)uVar34) {
        local_24c = uVar34;
      }
      if ((int)local_240 < (int)uVar25) {
        local_240 = uVar20 >> 0x20;
      }
      uVar40 = ~(uint)uVar41 & uVar40;
      iVar33 = (int)uVar27;
      lVar29 = (longlong)iVar33;
      uVar34 = *(uint *)((longlong)pdVar22 + lVar29 * 4) & uVar40;
      if (uVar34 == 0) {
        iVar26 = iVar42;
        if (iVar42 < iVar33) {
          iVar26 = iVar33;
        }
        if (iVar42 <= iVar33) break;
        lVar30 = 0;
        while( true ) {
          iVar37 = iVar37 + 0x20;
          uVar34 = *(uint *)((longlong)pdVar22 + lVar30 * 4 + lVar29 * 4 + 4);
          if (uVar34 != 0) break;
          lVar30 = lVar30 + 1;
          if (iVar26 - lVar29 == lVar30) goto LAB_143244131;
        }
        uVar27 = (ulonglong)(iVar33 + (int)lVar30 + 1);
        uVar40 = 0xffffffff;
      }
      uVar41 = (ulonglong)(-uVar34 & uVar34);
      uVar20 = uVar41 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      iVar33 = (iVar37 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
    } while (iVar33 < iVar35);
  }
LAB_143244131:
  uVar40 = ((local_24c - local_250) + 1) * *(int *)(param_1 + 0x11) * *(int *)(param_1 + 0x10) + 1;
  local_150 = (((int)local_240 - (int)uVar31) + 1) * *(int *)(param_1 + 0x11) *
              *(int *)((longlong)param_1 + 0x84) + 1;
  local_160 = DAT_14ca83a40;
  uStack_170 = _DAT_14ca83a30;
  uStack_168 = _DAT_14ca83a38;
  local_15c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_178 = 9;
  local_14c = (ulonglong)(byte)(*(char *)((longlong)param_1 + 0x8c) + 3) << 0x38;
  local_144 = CONCAT22(local_144._2_2_,0xff00);
  local_14c = CONCAT26(local_14c._6_2_,0x10100010001);
  if ((int)DAT_14ca84e40 <= (int)uVar40) {
    uVar40 = DAT_14ca84e40;
  }
  if ((int)uVar40 < 2) {
    uVar40 = 1;
  }
  if ((int)DAT_14ca84e40 <= (int)local_150) {
    local_150 = DAT_14ca84e40;
  }
  local_158 = (ulonglong)uVar40 << 0x20;
  if ((int)local_150 < 2) {
    local_150 = 1;
  }
  puVar28 = (ulonglong *)(param_2 + 0x70);
  uVar41 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar27 = uVar41 + 0x120;
  local_248 = puVar28;
  local_1e8 = param_3;
  if (*(ulonglong *)(param_2 + 0x78) < uVar27) {
    FUN_140023dd8(puVar28,0x128);
    uVar41 = *puVar28 + 7 & 0xfffffffffffffff8;
    uVar27 = uVar41 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar27;
  FUN_1456bbb8c(uVar41,L"LandscapeMergedTextureAtlas",&local_178,0);
  iVar35 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar35 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar35 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar35);
  }
  puVar28 = local_248;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar35 * 8) = uVar41;
  *(int *)(uVar41 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  if ((*(char *)(uVar41 + 0x92) == '\x04') || (*(char *)(uVar41 + 0x92) == '\x01')) {
    uVar32 = *(undefined2 *)(uVar41 + 0x8e);
  }
  else {
    uVar32 = 0;
  }
  uVar16 = *(undefined1 *)(uVar41 + 0x90);
  local_1f0 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar24 = local_1f0 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar24) {
    FUN_140023dd8(local_248,0x48);
    local_1f0 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
    puVar24 = local_1f0 + 8;
  }
  local_210 = param_2 + 0x198;
  *(undefined8 **)(param_2 + 0x70) = puVar24;
  local_1f0[1] = *(undefined8 *)(uVar41 + 8);
  local_1f0[2] = 0;
  *(undefined1 *)(local_1f0 + 3) = 1;
  *(undefined8 *)((longlong)local_1f0 + 0x1c) = 0xffffffffffffffff;
  *local_1f0 = &PTR_FUN_14a203858;
  *(undefined2 *)(local_1f0 + 5) = 0;
  *(undefined1 *)((longlong)local_1f0 + 0x2a) = uVar16;
  *(undefined1 *)((longlong)local_1f0 + 0x2b) = 0;
  *(undefined2 *)((longlong)local_1f0 + 0x2c) = 0;
  *(undefined2 *)((longlong)local_1f0 + 0x2e) = uVar32;
  *(undefined1 *)(local_1f0 + 6) = 0;
  *(undefined1 *)((longlong)local_1f0 + 0x32) = 0;
  local_1f0[7] = uVar41;
  iVar35 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_210,iVar35);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar35 * 8) = local_1f0;
  *(int *)((longlong)local_1f0 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  local_108 = 0;
  local_104 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_100 = 1;
  local_f8 = 1;
  local_1d0 = uVar41;
  FUN_1401a4871(param_2,uVar41);
  local_158 = 0;
  local_150 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_14c = 0xffffffff00000080;
  local_144 = 0;
  local_138 = (undefined1 *)0x0;
  local_130 = 0;
  local_1d8 = param_1 + 0x1a;
  local_230 = (longlong *)(param_2 + 0x98);
  local_208 = param_1;
  local_1f8 = param_2;
LAB_14324440e:
  local_1e0 = uVar31 << 0x20;
  local_220 = (uint)(uVar31 >> 0xd);
  local_238 = (ulonglong)local_250;
  local_1c8 = uVar31;
LAB_143244437:
  if (*(int *)(param_1 + 0x14) != *(int *)((longlong)param_1 + 0xcc)) {
    iVar35 = (int)uVar31;
    uVar40 = (int)local_238 - iVar35 ^ local_220;
    uVar34 = uVar40 << 8 ^ (-0x61c88647 - iVar35) - uVar40;
    uVar25 = uVar34 >> 0xd ^ (iVar35 - uVar40) - uVar34;
    uVar38 = uVar25 >> 0xc ^ (uVar40 - uVar34) - uVar25;
    uVar40 = uVar38 << 0x10 ^ (uVar34 - uVar25) - uVar38;
    uVar34 = uVar40 >> 5 ^ (uVar25 - uVar38) - uVar40;
    uVar25 = uVar34 >> 3 ^ (uVar38 - uVar40) - uVar34;
    uVar40 = uVar25 << 10 ^ (uVar40 - uVar34) - uVar25;
    pdVar22 = (double *)param_1[0x1b];
    if ((double *)param_1[0x1b] == (double *)0x0) {
      pdVar22 = local_1d8;
    }
    iVar35 = *(int *)((longlong)pdVar22 +
                     (ulonglong)
                     (*(int *)(param_1 + 0x1c) - 1U & (uVar40 >> 0xf ^ uVar34 - (uVar25 + uVar40)))
                     * 4);
    if (iVar35 != -1) {
      do {
        lVar29 = (longlong)param_1[0x13] + (longlong)iVar35 * 0x30;
        if (*(ulonglong *)((longlong)param_1[0x13] + (longlong)iVar35 * 0x30) ==
            (local_238 | local_1e0)) {
          plVar44 = (longlong *)(lVar29 + 8);
          if (plVar44 != (longlong *)0x0 && lVar29 != 0) {
            iVar35 = *(int *)(param_1 + 0x11);
            local_1b8 = (longlong)(*(int *)(lVar29 + 0x18) - *(int *)(lVar29 + 0x10)) /
                        (longlong)iVar35 & 0xffffffff;
            local_200 = (longlong)(*(int *)(lVar29 + 0x1c) - *(int *)(lVar29 + 0x14)) /
                        (longlong)iVar35 & 0xffffffff;
            uVar27 = *(ulonglong *)(lVar29 + 8);
            local_228 = lVar29;
            if ((int)uStack_170 == local_144) goto LAB_143244618;
            uVar40 = ((uint)(uVar27 >> 0x14) & 0xffff ^ (uint)(uVar27 >> 4)) * -0x7a143595;
            uVar40 = (uVar40 >> 0xd ^ uVar40) * -0x3d4d51cb;
            puVar23 = local_138;
            if (local_138 == (undefined1 *)0x0) {
              puVar23 = local_140;
            }
            iVar33 = *(int *)(puVar23 + (ulonglong)(local_130 - 1U & (uVar40 >> 0x10 ^ uVar40)) * 4)
            ;
            goto joined_r0x0001432445e5;
          }
          break;
        }
        iVar35 = *(int *)(lVar29 + 0x28);
      } while (iVar35 != -1);
    }
  }
  goto LAB_143244b4b;
joined_r0x0001432445e5:
  if (iVar33 == -1) goto LAB_143244618;
  puVar28 = (ulonglong *)(local_178 + (longlong)iVar33 * 0x18);
  if (*puVar28 == uVar27) {
    if ((puVar28 != (ulonglong *)0x0) && (puVar28 = puVar28 + 1, puVar28 != (ulonglong *)0x0))
    goto LAB_143244857;
    goto LAB_143244618;
  }
  iVar33 = (int)puVar28[2];
  goto joined_r0x0001432445e5;
LAB_143244618:
  FUN_1400021e4(uVar27 + 0x74,&local_188);
  puVar28 = local_248;
  puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar24 = puVar45 + 3;
  if (*(undefined8 **)(param_2 + 0x78) < puVar24) {
    FUN_140023dd8(local_248,0x28);
    puVar45 = (undefined8 *)(*puVar28 + 0xf & 0xfffffffffffffff0);
    puVar24 = puVar45 + 3;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar24;
  *puVar45 = &PTR_FUN_14a3c1a20;
  puVar45[1] = local_188;
  local_188 = (longlong *)0x0;
  *(undefined4 *)(puVar45 + 2) = (undefined4)uStack_180;
  *(undefined4 *)((longlong)puVar45 + 0x14) = uStack_180._4_4_;
  uStack_180 = (undefined8 **)0x0;
  iVar35 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar35 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar35 + 1U) {
    FUN_1448cfae8(local_230,iVar35);
  }
  *(undefined8 **)(*local_230 + (longlong)iVar35 * 8) = puVar45;
  if (local_188 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  puVar39 = &DAT_149dfb77a;
  if (*(int *)(puVar45 + 2) != 0) {
    puVar39 = (undefined2 *)puVar45[1];
  }
  FUN_1447ec05f(&local_188,*(undefined8 *)(*plVar44 + 0x10),puVar39);
  lVar29 = FUN_14473c272(param_2,&local_188,0);
  if (local_188 != (longlong *)0x0) {
    (**(code **)(*local_188 + 0x38))();
  }
  puVar28 = local_248;
  uVar16 = *(undefined1 *)(lVar29 + 0x90);
  if ((*(char *)(lVar29 + 0x92) == '\x04') || (*(char *)(lVar29 + 0x92) == '\x01')) {
    uVar32 = *(undefined2 *)(lVar29 + 0x8e);
  }
  else {
    uVar32 = 0;
  }
  puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar24 = puVar45 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar24) {
    FUN_140023dd8(local_248,0x48);
    puVar45 = (undefined8 *)(*puVar28 + 7 & 0xfffffffffffffff8);
    puVar24 = puVar45 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar24;
  puVar45[1] = *(undefined8 *)(lVar29 + 8);
  puVar45[2] = 0;
  *(undefined1 *)(puVar45 + 3) = 1;
  *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
  *puVar45 = &PTR_FUN_14a203858;
  *(undefined2 *)(puVar45 + 5) = 0;
  *(undefined1 *)((longlong)puVar45 + 0x2a) = uVar16;
  *(undefined1 *)((longlong)puVar45 + 0x2b) = 0;
  *(undefined2 *)((longlong)puVar45 + 0x2c) = 0;
  *(undefined2 *)((longlong)puVar45 + 0x2e) = uVar32;
  *(undefined1 *)(puVar45 + 6) = 0;
  *(undefined1 *)((longlong)puVar45 + 0x32) = 0;
  puVar45[7] = lVar29;
  iVar35 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_210,iVar35);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar35 * 8) = puVar45;
  *(int *)((longlong)puVar45 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  uStack_180 = &local_198;
  local_198 = puVar45;
  local_188 = plVar44;
  FUN_147458e5a(&local_178,&local_19c,&local_188);
  puVar28 = (ulonglong *)(local_178 + (longlong)local_19c * 0x18 + 8);
  iVar35 = *(int *)(param_1 + 0x11);
LAB_143244857:
  local_1c0 = puVar28;
  if (0 < iVar35) {
    iVar33 = 0;
    lVar29 = local_228;
    do {
      if (0 < iVar35) {
        local_218 = iVar33 * (int)local_200;
        iVar37 = 0;
        local_214 = iVar33;
        do {
          puVar28 = local_248;
          iVar33 = (iVar35 * (int)local_238 + iVar37) * *(int *)(param_1 + 0x10);
          iVar35 = (iVar35 * (int)uVar31 + local_214) * *(int *)((longlong)param_1 + 0x84);
          local_198 = (undefined8 *)CONCAT44(iVar35,iVar33);
          uVar34 = *(int *)(param_1 + 0x10) + iVar33 + 1;
          local_1a8 = (ulonglong)uVar34;
          uVar40 = *(int *)((longlong)param_1 + 0x84) + iVar35 + 1;
          local_1b0 = (ulonglong)uVar40;
          local_190 = CONCAT44(uVar40,uVar34);
          uVar21 = *(undefined8 *)(lVar29 + 0x10);
          puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar24 = puVar45 + 0x28;
          if (*(undefined8 **)(param_2 + 0x78) < puVar24) {
            FUN_140023dd8(local_248,0x150);
            puVar45 = (undefined8 *)(*puVar28 + 0xf & 0xfffffffffffffff0);
            puVar24 = puVar45 + 0x28;
            lVar29 = local_228;
          }
          iVar43 = (int)uVar21 + iVar37 * (int)local_1b8;
          iVar36 = (int)((ulonglong)uVar21 >> 0x20) + local_218;
          iVar26 = (int)local_1b8 + iVar43;
          iVar42 = (int)local_200;
          *local_248 = (ulonglong)puVar24;
          *puVar45 = &PTR_FUN_14a3c1240;
          puVar45[7] = 0;
          lVar30 = 0x52;
          do {
            puVar24 = (undefined8 *)((longlong)puVar45 + lVar30 + -0x12);
            *puVar24 = 0;
            puVar24[1] = 0;
            *(undefined4 *)((longlong)puVar45 + lVar30 + -2) = 0xffff0000;
            lVar30 = lVar30 + 0x18;
          } while (lVar30 != 0x112);
          *(undefined4 *)((longlong)puVar45 + 0x114) = 0;
          puVar45[0x20] = 0;
          puVar45[0x21] = 0;
          *(undefined2 *)(puVar45 + 0x22) = 0;
          *(undefined4 *)(puVar45 + 0x23) = 0xffffffff;
          *(undefined4 *)((longlong)puVar45 + 0x11c) = 0xffffffff;
          *(undefined4 *)(puVar45 + 0x24) = 0xffffffff;
          *(undefined4 *)((longlong)puVar45 + 0x124) = 0xffffffff;
          *(undefined4 *)(puVar45 + 0x25) = 0;
          *(undefined2 *)((longlong)puVar45 + 300) = 0;
          puVar45[0x26] = 0;
          iVar19 = *(int *)(local_1f8 + 0xa0);
          *(uint *)(local_1f8 + 0xa0) = iVar19 + 1U;
          if (*(uint *)(local_1f8 + 0xa4) < iVar19 + 1U) {
            local_21c = iVar26;
            FUN_1448cfae8(local_230,iVar19);
            lVar29 = local_228;
            iVar26 = local_21c;
          }
          param_2 = local_1f8;
          param_1 = local_208;
          *(undefined8 **)(*(longlong *)(local_1f8 + 0x98) + (longlong)iVar19 * 8) = puVar45;
          *(int *)(puVar45 + 2) = iVar33;
          *(int *)((longlong)puVar45 + 0x14) = iVar35;
          *(int *)(puVar45 + 3) = (int)local_1a8;
          *(int *)((longlong)puVar45 + 0x1c) = (int)local_1b0;
          puVar45[7] = *local_1c0;
          *(int *)(puVar45 + 4) = iVar43;
          *(int *)((longlong)puVar45 + 0x24) = iVar36;
          *(int *)(puVar45 + 5) = iVar26;
          *(int *)((longlong)puVar45 + 0x2c) = iVar36 + iVar42;
          *(undefined4 *)(puVar45 + 6) = *(undefined4 *)(lVar29 + 0x20);
          puVar45[8] = local_1d0;
          puVar45[9] = 0;
          *(undefined4 *)(puVar45 + 10) = 0xffff0000;
          uVar16 = *(undefined1 *)((longlong)local_208 + 0x8c);
          uVar21 = *(undefined8 *)
                    (&DAT_14ca8c1f0 +
                    (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
          FUN_145e98e5a();
          FUN_1448e935e(uVar21,&local_188,&DAT_14caa1eb8,uVar16);
          FUN_145e98e5a();
          local_260 = &local_198;
          local_268 = puVar45 + 2;
          FUN_1474575ea(param_2,uVar21,&local_19c,&local_188);
          iVar37 = iVar37 + 1;
          iVar35 = *(int *)(param_1 + 0x11);
          uVar31 = local_1c8;
          lVar29 = local_228;
          iVar33 = local_214;
        } while (iVar37 < iVar35);
      }
      iVar33 = iVar33 + 1;
    } while (iVar33 < iVar35);
  }
LAB_143244b4b:
  plVar44 = local_1e8;
  puVar28 = local_248;
  uVar40 = (uint)local_238;
  local_238 = (ulonglong)(uVar40 + 1);
  if (uVar40 == local_24c) goto LAB_143244b9c;
  goto LAB_143244437;
LAB_143244b9c:
  iVar35 = (int)uVar31;
  uVar31 = (ulonglong)(iVar35 + 1);
  if (iVar35 == (int)local_240) {
    uVar21 = *(undefined8 *)(*local_1e8 + 0x84);
    puVar45 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar24 = puVar45 + 0x2e;
    if (*(undefined8 **)(param_2 + 0x78) < puVar24) {
      FUN_140023dd8(local_248,0x180);
      puVar45 = (undefined8 *)(*puVar28 + 0xf & 0xfffffffffffffff0);
      puVar24 = puVar45 + 0x2e;
    }
    *local_248 = (ulonglong)puVar24;
    *puVar45 = &PTR_FUN_14a3c1248;
    *(undefined1 (*) [16])(puVar45 + 10) = (undefined1  [16])0x0;
    lVar29 = 0x82;
    do {
      *(undefined1 (*) [16])((longlong)puVar45 + lVar29 + -0x12) = (undefined1  [16])0x0;
      *(undefined4 *)((longlong)puVar45 + lVar29 + -2) = 0xffff0000;
      lVar29 = lVar29 + 0x18;
    } while (lVar29 != 0x142);
    *(undefined4 *)((longlong)puVar45 + 0x144) = 0;
    *(undefined1 (*) [16])(puVar45 + 0x26) = (undefined1  [16])0x0;
    *(undefined2 *)(puVar45 + 0x28) = 0;
    *(undefined4 *)(puVar45 + 0x29) = 0xffffffff;
    *(undefined4 *)((longlong)puVar45 + 0x14c) = 0xffffffff;
    *(undefined4 *)(puVar45 + 0x2a) = 0xffffffff;
    *(undefined4 *)((longlong)puVar45 + 0x154) = 0xffffffff;
    *(undefined4 *)(puVar45 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x15c) = 0;
    puVar45[0x2c] = 0;
    iVar35 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar35 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar35 + 1U) {
      FUN_1448cfae8(local_230,iVar35);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar35 * 8) = puVar45;
    dVar1 = local_208[1];
    dVar2 = local_208[2];
    dVar3 = local_208[3];
    dVar4 = local_208[4];
    dVar5 = local_208[5];
    dVar6 = local_208[6];
    dVar7 = local_208[7];
    dVar8 = local_208[8];
    dVar9 = local_208[9];
    dVar10 = local_208[10];
    dVar11 = local_208[0xb];
    dVar12 = local_208[0xc];
    dVar13 = local_208[0xd];
    dVar14 = local_208[0xe];
    dVar15 = local_208[0xf];
    *(float *)(puVar45 + 2) = (float)*local_208;
    *(float *)((longlong)puVar45 + 0x14) = (float)dVar1;
    *(float *)(puVar45 + 3) = (float)dVar2;
    *(float *)((longlong)puVar45 + 0x1c) = (float)dVar3;
    *(float *)(puVar45 + 4) = (float)dVar4;
    *(float *)((longlong)puVar45 + 0x24) = (float)dVar5;
    *(float *)(puVar45 + 5) = (float)dVar6;
    *(float *)((longlong)puVar45 + 0x2c) = (float)dVar7;
    *(float *)(puVar45 + 6) = (float)dVar8;
    *(float *)((longlong)puVar45 + 0x34) = (float)dVar9;
    *(float *)(puVar45 + 7) = (float)dVar10;
    *(float *)((longlong)puVar45 + 0x3c) = (float)dVar11;
    *(float *)(puVar45 + 8) = (float)dVar12;
    *(float *)((longlong)puVar45 + 0x44) = (float)dVar13;
    *(float *)(puVar45 + 9) = (float)dVar14;
    *(float *)((longlong)puVar45 + 0x4c) = (float)dVar15;
    puVar45[10] = local_1f0;
    puVar45[0xb] = DAT_14c9c0de0;
    puVar45[0xc] = uVar21;
    puVar45[0x10] = plVar44[2];
    lVar29 = plVar44[1];
    puVar45[0xe] = *plVar44;
    puVar45[0xf] = lVar29;
    bVar17 = *(byte *)((longlong)local_208 + 0x8d);
    bVar18 = *(byte *)((longlong)local_208 + 0x8c);
    uVar21 = *(undefined8 *)
              (&DAT_14ca8c1f0 +
              (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
    FUN_145f0a378();
    FUN_1448e935e(uVar21,&local_188,&DAT_14caa1fe0,(uint)bVar18 + (uint)bVar17 * 2);
    FUN_145f0a378();
    local_190 = puVar45[0xc];
    local_198 = (undefined8 *)0x0;
    local_260 = &local_198;
    local_268 = puVar45 + 2;
    FUN_147457872(param_2,uVar21,&local_19c,&local_188);
    local_130 = 0;
    if (local_138 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_147457afa(&local_178);
    if ((local_f0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_14324440e;
}



// FUNCTION 143244f94 FUN_143244f94 body=6721 status=ok
// SIG undefined FUN_143244f94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143244f94(longlong param_1,double *param_2,undefined1 (*param_3) [16],
                       longlong *param_4,longlong *param_5)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  longlong *plVar24;
  ulonglong uVar25;
  uint *puVar26;
  code **ppcVar27;
  undefined8 *puVar28;
  double *pdVar29;
  undefined8 *puVar30;
  double *pdVar31;
  ulonglong uVar32;
  double *pdVar33;
  longlong lVar34;
  int iVar35;
  double dVar36;
  double dVar38;
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  double dVar52;
  undefined1 auStack_538 [32];
  code **local_518;
  undefined4 local_510;
  undefined4 local_508;
  undefined8 local_500;
  wchar_t *local_4f8;
  undefined1 *local_4f0;
  undefined1 *local_4e8;
  code **local_4e0;
  undefined1 *local_4d8;
  code *local_4d0;
  byte local_4c2;
  undefined1 local_4c1;
  int local_4c0;
  undefined4 local_4bc;
  double local_4b8;
  double dStack_4b0;
  double local_4a8;
  double dStack_4a0;
  undefined4 local_48c;
  longlong *local_488;
  ulonglong local_480;
  longlong *local_478;
  double *local_470;
  undefined8 *local_468;
  ulonglong local_460;
  ulonglong local_458;
  longlong local_450;
  ulonglong local_448;
  longlong local_440;
  double *local_438;
  code **ppcStack_430;
  double local_428;
  undefined8 uStack_420;
  double local_418;
  undefined8 uStack_410;
  double local_408;
  undefined8 uStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  undefined1 local_3c8 [16];
  longlong local_3b0;
  longlong local_3a8;
  undefined8 uStack_3a0;
  undefined1 local_390 [24];
  code *local_378;
  undefined8 uStack_370;
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  undefined8 local_348;
  double local_338 [4];
  double local_318;
  double dStack_310;
  double local_308;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2cc [4];
  double local_2c8 [16];
  double *local_248;
  undefined8 uStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c8 [2];
  uint local_1b8 [4];
  uint *local_1a8;
  int local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  longlong local_188;
  undefined4 local_180;
  code *local_178;
  double dStack_170;
  double *local_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_538;
  lVar9 = (**(code **)(*(longlong *)(param_1 + 0x390) + 0x18))(param_1 + 0x390);
  if (param_5 == (longlong *)0x0 || lVar9 == 0) {
LAB_143245058:
    uVar23 = 0;
    goto LAB_14324505a;
  }
  local_4c0 = (int)param_4[1];
  local_4c1 = local_4c0 == 0;
  if (DAT_14cb0b9a0 == 0) {
    local_4e0 = &local_178;
    local_178 = FUN_1449e2820;
    local_4d0 = FUN_14081d0ea;
    local_4d8 = &LAB_146408884;
    local_4e8 = &LAB_147d719e1;
    local_4f0 = &LAB_140fb41fe;
    local_4f8 = L"Engine";
    local_500 = 0;
    local_508 = 0x10000000;
    local_510 = 8;
    local_518 = (code **)CONCAT44(local_518._4_4_,0x168);
    FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
  }
  if ((*(int *)(param_5[2] + 0x38) < *(int *)(DAT_14cb0b9a0 + 0x38)) ||
     (plVar24 = param_5,
     *(longlong *)(*(longlong *)(param_5[2] + 0x30) + (longlong)*(int *)(DAT_14cb0b9a0 + 0x38) * 8)
     != DAT_14cb0b9a0 + 0x30)) {
    plVar24 = (longlong *)0x0;
  }
  lVar10 = FUN_1458bbce6();
  if ((*(int *)(param_5[2] + 0x38) < *(int *)(lVar10 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_5[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
      lVar10 + 0x30)) {
    if (plVar24 == (longlong *)0x0) goto LAB_143245058;
    uVar11 = (**(code **)(*plVar24 + 0x3b8))();
    bVar2 = true;
    plVar12 = (longlong *)0x0;
  }
  else {
    uVar11 = (**(code **)(*param_5 + 0x3b8))(param_5);
    bVar2 = false;
    plVar12 = param_5;
  }
  bVar16 = (byte)uVar11;
  if (local_4c0 == 0) {
    if (plVar24 == (longlong *)0x0) goto LAB_143245058;
    uVar23 = 0;
    if (0x28 < bVar16) goto LAB_14324505a;
    if ((0x16000000004U >> (uVar11 & 0x3f) & 1) == 0) {
      uVar23 = 0;
      uVar3 = 0;
      if ((uVar11 & 0xff) != 4) goto LAB_14324505a;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar23 = 0;
    if (0x28 < bVar16) goto LAB_14324505a;
    uVar23 = 0;
    if ((0x1600800000cU >> (uVar11 & 0x3f) & 1) == 0) goto LAB_14324505a;
    iVar6 = (int)param_4[1];
    if (1 < iVar6) {
      if ((plVar24 != (longlong *)0x0) &&
         (*(int *)(&DAT_14c87342c + ((uint)uVar11 & 0xff) * 0x30) < iVar6)) goto LAB_143245058;
      if (!bVar2) {
        uVar23 = 0;
        uVar3 = 0;
        if (*(int *)(&DAT_14c87342c + ((uint)uVar11 & 0xff) * 0x30) * (int)plVar12[0x29] < iVar6)
        goto LAB_14324505a;
        goto LAB_143245220;
      }
    }
    uVar3 = 0;
  }
LAB_143245220:
  local_48c = uVar3;
  pdVar33 = (double *)&DAT_14c846480;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    pdVar33 = (double *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
  }
  pdVar31 = local_338;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *pdVar31 = *param_2;
    param_2 = param_2 + 1;
    pdVar31 = pdVar31 + 1;
  }
  local_348 = *(undefined8 *)param_3[2];
  local_368 = *param_3;
  local_358 = *(double *)param_3[1];
  dStack_350 = *(double *)(param_3[1] + 8);
  local_4c2 = bVar16;
  local_470 = pdVar33;
  if ((param_3[2][0] != '\x01') ||
     ((((dVar39 = (*(double *)param_3[1] - *(double *)*param_3) * 0.5, dVar39 == 0.0 &&
        (!NAN(dVar39))) &&
       (dVar39 = (*(double *)(param_3[1] + 8) - *(double *)(*param_3 + 8)) * 0.5, dVar39 == 0.0)) &&
      (!NAN(dVar39))))) {
    pdVar31 = pdVar33;
    pdVar29 = local_338;
    for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
      *pdVar29 = *pdVar31;
      pdVar31 = pdVar31 + 1;
      pdVar29 = pdVar29 + 1;
    }
    FUN_1474538ac(lVar9,&local_178);
    dVar43 = *pdVar33;
    dVar42 = dStack_160 - pdVar33[4];
    dVar44 = dStack_158 - pdVar33[5];
    dVar39 = dStack_150 - pdVar33[6];
    dVar40 = -dVar43;
    dVar41 = -pdVar33[1];
    dVar36 = pdVar33[2] * -1.0;
    dVar38 = pdVar33[3] * 1.0;
    dVar47 = dVar44 * dVar40 - dVar42 * dVar41;
    dVar50 = dVar39 * dVar41 - dVar44 * dVar36;
    dVar52 = dVar42 * dVar36 - dVar39 * dVar40;
    dVar50 = dVar50 + dVar50;
    dVar52 = dVar52 + dVar52;
    dVar47 = dVar47 + dVar47;
    auVar37 = *(undefined1 (*) [16])(pdVar33 + 8);
    auVar51 = divpd(_DAT_149934d80,auVar37);
    dVar48 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar37._0_8_)) & auVar51._0_8_);
    dVar39 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar37._8_8_)) & auVar51._8_8_);
    local_358 = ((dVar47 * dVar41 - dVar52 * dVar36) + dVar38 * dVar50 + dVar42) * dVar48;
    dStack_350 = (dVar47 * dVar43 + dVar36 * dVar50 + dVar38 * dVar52 + dVar44) * dVar39;
    dVar47 = (double)local_178 - pdVar33[4];
    dVar50 = dStack_170 - pdVar33[5];
    dVar52 = (double)local_168 - pdVar33[6];
    dVar42 = dVar50 * dVar40 - dVar41 * dVar47;
    dVar44 = dVar52 * dVar41 - dVar36 * dVar50;
    dVar40 = dVar47 * dVar36 - dVar52 * dVar40;
    dVar44 = dVar44 + dVar44;
    dVar40 = dVar40 + dVar40;
    dVar42 = dVar42 + dVar42;
    dVar39 = (dVar42 * dVar43 + dVar36 * dVar44 + dVar38 * dVar40 + dVar50) * dVar39;
    local_368._8_4_ = SUB84(dVar39,0);
    local_368._0_8_ = ((dVar42 * dVar41 - dVar40 * dVar36) + dVar38 * dVar44 + dVar47) * dVar48;
    local_368._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    local_348 = CONCAT71(local_348._1_7_,1);
  }
  local_1a8 = (uint *)0x0;
  local_1a0 = 0;
  local_1c8[0] = 0;
  local_1c8[1] = 0;
  local_19c = 0xffffffff00000080;
  local_194 = 0;
  local_188 = 0;
  local_180 = 0;
  local_518 = &local_378;
  local_378 = (code *)0x0;
  uStack_370 = 0;
  pdVar33 = local_338;
  cVar4 = FUN_147453e50(lVar9,pdVar33,local_368);
  if (cVar4 != '\0') {
    FUN_143203394(local_390,DAT_14caa1e08 != 0,L"LandscapeRenderMergedTextureCapture",0);
    uVar21 = 1;
    if (DAT_14caa1e08 < 2) {
      DAT_14caa1e08 = 1;
    }
    DAT_14caa1e08 = DAT_14caa1e08 + -1;
    if (local_4c0 != 0) {
      uVar21 = *(uint *)(param_4 + 1);
    }
    local_3a8 = 0;
    uStack_3a0 = 0;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar21);
    }
    if (uVar21 != 0) {
      FUN_14745948e(&local_3a8);
      local_4a8 = local_2f8;
      dStack_4a0 = dStack_2f0;
      local_4b8 = local_2e8;
      dStack_4b0 = dStack_2e0;
      dVar38 = (double)local_368._0_8_ * local_2f8;
      dVar40 = (double)local_368._8_8_ * dStack_2f0;
      dVar36 = local_2e8 * 0.0;
      dVar43 = dVar40 * local_338[0] - dVar38 * local_338[1];
      dVar41 = dVar36 * local_338[1] - dVar40 * local_338[2];
      dVar42 = dVar38 * local_338[2] - local_338[0] * dVar36;
      dVar39 = dStack_2e0 * 0.0 * local_338[3] - local_338[3] * dStack_2e0 * 0.0;
      dVar41 = dVar41 + dVar41;
      dVar42 = dVar42 + dVar42;
      dVar43 = dVar43 + dVar43;
      auVar37._8_8_ = dVar39 + dVar39;
      dVar39 = local_338[1] + local_338[1];
      dVar44 = local_338[2] + local_338[2];
      dVar50 = local_338[0] * (local_338[0] + local_338[0]);
      dVar47 = (local_338[0] + local_338[0]) * local_338[3];
      local_3e8 = (dVar43 * local_338[1] - dVar42 * local_338[2]) + local_338[3] * dVar41 + dVar38 +
                  local_318;
      dStack_3e0 = (local_338[2] * dVar41 - local_338[0] * dVar43) + local_338[3] * dVar42 + dVar40
                   + dStack_310;
      auVar37._0_8_ =
           dVar43 * local_338[3] + dVar36 + (dVar42 * local_338[0] - dVar41 * local_338[1]) +
           local_308;
      local_448 = (ulonglong)uVar21;
      dStack_2f0 = (dStack_350 - (double)local_368._8_8_) * dStack_2f0;
      local_2f8 = (local_358 - (double)local_368._0_8_) * local_2f8;
      local_428 = (local_338[0] * dVar44 - dVar39 * local_338[3]) * local_2f8;
      local_438 = (double *)((1.0 - (local_338[2] * dVar44 + local_338[1] * dVar39)) * local_2f8);
      dStack_3f0 = (1.0 - (local_338[2] * dVar44 + dVar50)) * dStack_2f0;
      local_418 = (1.0 - (dVar50 + local_338[1] * dVar39)) * local_2e8;
      ppcStack_430 = (code **)((dVar39 * local_338[0] + dVar44 * local_338[3]) * local_2f8);
      local_408 = (dVar44 * local_338[1] + dVar47) * dStack_2f0;
      local_3d8 = (local_338[0] * dVar44 + dVar39 * local_338[3]) * local_2e8;
      local_3f8 = (dVar39 * local_338[0] - dVar44 * local_338[3]) * dStack_2f0;
      dStack_3d0 = (dVar44 * local_338[1] - dVar47) * local_2e8;
      uStack_410 = 0;
      uStack_420 = 0;
      uStack_400 = 0;
      local_3c8 = blendpd(auVar37,_DAT_149935300,2);
      uVar11 = 0;
      local_488 = param_4;
      local_440 = param_1;
      do {
        if (local_4c0 == 0) {
          FUN_1446f470e(&local_3b0,L"Heightmap",1);
        }
        else {
          local_3b0 = *(longlong *)(*param_4 + uVar11 * 8);
        }
        lVar9 = (longlong)(int)uStack_3a0;
        uVar21 = (int)uStack_3a0 + 1;
        uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar21);
        local_460 = uVar11;
        if (uStack_3a0._4_4_ < uVar21) {
          FUN_1474594f4(&local_3a8);
        }
        lVar10 = local_3a8;
        lVar9 = lVar9 * 0xf0;
        local_468 = (undefined8 *)(local_3a8 + lVar9);
        uVar11 = 0;
        memset(local_468,0,0xf0);
        iVar6 = local_1a0;
        *(undefined4 *)(lVar10 + 0x88 + lVar9) = 1;
        *(undefined1 *)(lVar10 + 0x8c + lVar9) = 1;
        puVar30 = (undefined8 *)(lVar10 + 0x90 + lVar9);
        *puVar30 = 0;
        puVar30[1] = 0;
        *(undefined8 *)(lVar10 + 0xa0 + lVar9) = 0;
        *(undefined8 *)(lVar10 + 0xc4 + lVar9) = 0xffffffff00000080;
        *(ulonglong *)(lVar10 + 0x80 + lVar9) =
             CONCAT44(*(undefined4 *)(param_1 + 0x840),*(undefined4 *)(param_1 + 0x840));
        *(undefined4 *)(lVar10 + 0x88 + lVar9) = *(undefined4 *)(param_1 + 0x844);
        *(undefined1 *)(lVar10 + 0x8c + lVar9) = local_4c1;
        *(char *)(lVar10 + 0x8d + lVar9) = (char)local_48c;
        *(longlong *)(lVar10 + 0x90 + lVar9) = local_3b0;
        if (local_1a0 == 0) {
          uVar23 = 1;
          iVar35 = 0;
          iVar17 = 0;
        }
        else {
          puVar14 = local_1a8;
          if (local_1a8 == (uint *)0x0) {
            puVar14 = local_1b8;
          }
          uVar21 = *puVar14;
          if (uVar21 == 0) {
            iVar17 = local_1a0 + 0x1e;
            if (-1 < local_1a0 + -1) {
              iVar17 = local_1a0 + -1;
            }
            uVar11 = 0;
            uVar23 = (ulonglong)(uint)(iVar17 >> 5);
            if (iVar17 >> 5 < 1) {
              uVar23 = uVar11;
            }
            iVar35 = 0;
            do {
              if (uVar23 == uVar11) goto LAB_143245a68;
              iVar35 = iVar35 + 0x20;
              uVar21 = puVar14[uVar11 + 1];
              uVar11 = uVar11 + 1;
            } while (uVar21 == 0);
          }
          else {
            uVar11 = 0;
            iVar35 = 0;
          }
          uVar23 = (ulonglong)(-uVar21 & uVar21);
          uVar32 = uVar23 * 2 + 1;
          lVar34 = 0x3f;
          if (uVar32 != 0) {
            for (; uVar32 >> lVar34 == 0; lVar34 = lVar34 + -1) {
            }
          }
          iVar17 = (iVar35 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
          if (local_1a0 <= iVar17) {
            iVar17 = local_1a0;
          }
        }
        if (iVar17 == local_1a0) {
LAB_143245a68:
          local_4a8 = 0.0;
          local_4b8 = 0.0;
        }
        else {
          local_450 = lVar10 + lVar9 + 0x98;
          uVar21 = 0xffffffff;
          local_4b8 = 0.0;
          local_4a8 = 0.0;
          iVar22 = local_1a0;
          do {
            local_2c8[0] = *(double *)(local_1c8[0] + (longlong)iVar17 * 0x18);
            lVar9 = *(longlong *)(local_1c8[0] + 8 + (longlong)iVar17 * 0x18);
            if (local_4c0 == 0) {
              plVar24 = (longlong *)(lVar9 + 0x728);
              pdVar33 = (double *)(lVar9 + 0x6c8);
              pdVar31 = (double *)(lVar9 + 0x6c0);
              uVar18 = 0xffffffff;
LAB_143245f55:
              plVar24 = (longlong *)*plVar24;
              if (plVar24 != (longlong *)0x0) {
                dVar39 = *pdVar33;
                dVar43 = *pdVar31;
                local_458 = (ulonglong)
                            (uint)((*(int *)(lVar9 + 0x62c) + 1) * *(int *)(lVar9 + 0x630));
                plVar12 = (longlong *)FUN_1447b4020(plVar24);
                local_4bc = 0;
                iVar17 = 0;
                local_480 = 0;
                local_478 = plVar12;
                if (plVar12 != (longlong *)0x0) {
                  uVar5 = (**(code **)(*plVar12 + 0x38))(plVar12);
                  local_480 = (ulonglong)
                              (uint)((int)ROUND(dVar39 * (double)uVar5 + dVar39 * (double)uVar5 +
                                                -0.5) >> 1);
                  uVar5 = (**(code **)(*plVar12 + 0x30))(plVar12);
                  iVar17 = (int)ROUND(dVar43 * (double)uVar5 + dVar43 * (double)uVar5 + -0.5) >> 1;
                }
                lVar9 = plVar24[0x29];
                if (lVar9 != 0) {
                  if (*(code **)(*plVar24 + 0x330) == (code *)&LAB_14014d366) {
                    if (((*(byte *)((longlong)plVar24 + 0xfe) & 4) == 0) ||
                       (lVar10 = *(longlong *)(lVar9 + 0x28), lVar10 == 0)) {
LAB_143246127:
                      local_4bc = *(undefined4 *)(lVar9 + 0x20);
                      goto LAB_14324612e;
                    }
                  }
                  else {
                    cVar4 = (**(code **)(*plVar24 + 0x330))(plVar24);
                    lVar9 = plVar24[0x29];
                    if (cVar4 == '\0') goto LAB_143246127;
                    lVar10 = *(longlong *)(lVar9 + 0x28);
                  }
                  local_4bc = *(undefined4 *)(lVar10 + 4);
                }
LAB_14324612e:
                cVar4 = FUN_1417f3e5c(plVar24);
                bVar16 = (char)local_4bc - cVar4;
                iVar17 = iVar17 >> (bVar16 & 0x1f);
                iVar19 = (int)local_480 >> (bVar16 & 0x1f);
                iVar22 = (int)local_458 >> (bVar16 & 0x1f);
                local_178 = (code *)(**(code **)(*local_478 + 0x58))();
                dStack_160 = (double)CONCAT44(dStack_160._4_4_,uVar18);
                local_248 = local_2c8;
                uStack_240 = &local_178;
                dStack_170 = (double)CONCAT44(iVar19,iVar17);
                local_168 = (double *)CONCAT44(iVar22 + iVar19,iVar17 + iVar22);
                FUN_147459588(local_450,local_2cc,&local_248);
                iVar17 = (int)((ulonglong)local_2c8[0] >> 0x20);
                uVar18 = iVar17 + 1;
                uVar5 = SUB84(local_2c8[0],0) + 1;
                dVar39 = local_2c8[0];
                if (SUB84(local_4a8,0) < SUB84(local_2c8[0],0)) {
                  dVar39 = local_4a8;
                }
                dVar43 = local_2c8[0];
                if ((int)((ulonglong)local_4a8 >> 0x20) < iVar17) {
                  dVar43 = local_4a8;
                }
                local_4a8 = (double)((ulonglong)dVar43 & 0xffffffff00000000 |
                                    (ulonglong)dVar39 & 0xffffffff);
                uVar32 = (ulonglong)uVar5;
                if ((int)uVar5 <= SUB84(local_4b8,0)) {
                  uVar32 = (ulonglong)local_4b8 & 0xffffffff;
                }
                uVar25 = (ulonglong)local_4b8 >> 0x20;
                if ((int)((ulonglong)local_4b8 >> 0x20) < (int)uVar18) {
                  uVar25 = (ulonglong)uVar18;
                }
                local_4b8 = (double)(uVar25 << 0x20 | uVar32);
                iVar22 = local_1a0;
              }
            }
            else if ((longlong)*(int *)(lVar9 + 0x738) != 0) {
              plVar24 = *(longlong **)(lVar9 + 0x730);
              lVar10 = (longlong)*(int *)(lVar9 + 0x738) << 4;
              do {
                uVar18 = (uint)*(byte *)((longlong)plVar24 + 9);
                if (*(byte *)(plVar24 + 1) != 0xff && *(byte *)((longlong)plVar24 + 9) != 0xff) {
                  if (*plVar24 == 0) {
                    lVar34 = 0;
                  }
                  else {
                    lVar34 = *(longlong *)(*plVar24 + 0x28);
                  }
                  if (lVar34 == local_3b0) {
                    if (plVar24 != (longlong *)0x0) {
                      plVar24 = (longlong *)
                                ((ulonglong)*(byte *)(plVar24 + 1) * 8 +
                                *(longlong *)(lVar9 + 0x740));
                      pdVar31 = (double *)&DAT_14c8463f0;
                      pdVar33 = (double *)&DAT_14c8463f8;
                      goto LAB_143245f55;
                    }
                    break;
                  }
                }
                plVar24 = plVar24 + 2;
                lVar10 = lVar10 + -0x10;
              } while (lVar10 != 0);
            }
            uVar21 = uVar21 & ~(uint)uVar23;
            puVar14 = local_1a8;
            if (local_1a8 == (uint *)0x0) {
              puVar14 = local_1b8;
            }
            iVar17 = (int)uVar11;
            lVar9 = (longlong)iVar17;
            uVar18 = puVar14[lVar9] & uVar21;
            if (uVar18 == 0) {
              iVar19 = iVar22 + 0x1e;
              if (-1 < iVar22 + -1) {
                iVar19 = iVar22 + -1;
              }
              iVar19 = iVar19 >> 5;
              iVar35 = iVar35 + 0x20;
              iVar20 = iVar19;
              if (iVar19 < iVar17) {
                iVar20 = iVar17;
              }
              if (iVar17 < iVar19) {
                lVar10 = 0;
                do {
                  uVar18 = puVar14[lVar9 + lVar10 + 1];
                  if (uVar18 != 0) {
                    uVar11 = (ulonglong)(iVar17 + (int)lVar10 + 1);
                    uVar21 = 0xffffffff;
                    goto LAB_143245fe7;
                  }
                  iVar35 = iVar35 + 0x20;
                  lVar10 = lVar10 + 1;
                } while (iVar20 - lVar9 != lVar10);
                uVar21 = 0xffffffff;
                iVar17 = iVar20;
              }
              uVar11 = (ulonglong)(iVar17 + 1);
              iVar17 = iVar22;
            }
            else {
LAB_143245fe7:
              uVar23 = (ulonglong)(-uVar18 & uVar18);
              uVar32 = uVar23 * 2 + 1;
              lVar9 = 0x3f;
              if (uVar32 != 0) {
                for (; uVar32 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                }
              }
              iVar17 = (iVar35 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
              if (iVar22 <= iVar17) {
                iVar17 = iVar22;
              }
            }
          } while (iVar17 != iVar6);
        }
        param_1 = local_440;
        iVar17 = SUB84(local_4b8,0);
        uVar11 = (ulonglong)local_4b8 >> 0x20;
        iVar6 = (int)((ulonglong)local_4a8 >> 0x20);
        dVar44 = (double)*(int *)(local_440 + 0x83c);
        dVar42 = *local_470;
        local_4b8 = local_470[1];
        dStack_4b0 = local_470[2];
        dVar52 = ((double)(iVar17 - SUB84(local_4a8,0)) * dVar44 + 1.0) * local_470[8];
        dVar36 = ((double)SUB84(local_4a8,0) * dVar44 + -0.5) * local_470[8];
        dVar38 = ((double)iVar6 * dVar44 + -0.5) * local_470[9];
        dVar49 = (double)((ulonglong)dVar44 & 0x8000000000000000) * local_470[10];
        dVar43 = local_470[3];
        dVar39 = local_470[3];
        dVar47 = dVar38 * dVar42 - local_4b8 * dVar36;
        dVar48 = dVar49 * local_4b8 - dStack_4b0 * dVar38;
        dVar50 = dVar36 * dStack_4b0 - dVar42 * dVar49;
        dVar40 = local_470[0xb] * 0.0 * local_470[3] - local_470[3] * local_470[0xb] * 0.0;
        dVar48 = dVar48 + dVar48;
        dVar50 = dVar50 + dVar50;
        dVar47 = dVar47 + dVar47;
        auVar51._8_8_ = dVar40 + dVar40;
        dVar40 = local_4b8 + local_4b8;
        dVar45 = dStack_4b0 + dStack_4b0;
        dVar41 = dVar42 * (dVar42 + dVar42);
        dVar46 = (dVar42 + dVar42) * dVar39;
        local_128 = 1.0 - (dVar41 + local_4b8 * dVar40);
        dStack_148 = ((double)((int)uVar11 - iVar6) * dVar44 + 1.0) * local_470[9];
        dStack_158 = (dVar40 * dVar42 - dVar45 * dVar43) * dStack_148;
        dStack_130 = (dVar45 * local_4b8 - dVar46) * 1.0;
        local_138 = *local_470 * dVar45 + dVar40 * dVar43;
        local_118 = (dVar47 * local_4b8 - dVar50 * dStack_4b0) + dVar43 * dVar48 + dVar36 +
                    local_470[4];
        dStack_110 = (dStack_4b0 * dVar48 - dVar42 * dVar47) + dVar39 * dVar50 + dVar38 +
                     local_470[5];
        auVar51._0_8_ =
             dVar47 * dVar43 + dVar49 + (dVar50 * dVar42 - dVar48 * local_4b8) + local_470[6];
        local_178 = (code *)((1.0 - (dStack_4b0 * dVar45 + local_4b8 * dVar40)) * dVar52);
        dStack_150 = (1.0 - (dStack_4b0 * dVar45 + dVar41)) * dStack_148;
        dStack_170 = (dVar40 * dVar42 + dVar45 * dVar43) * dVar52;
        dStack_148 = (dVar45 * local_4b8 + dVar46) * dStack_148;
        local_168 = (double *)((*local_470 * dVar45 - dVar40 * dVar43) * dVar52);
        dStack_160 = 0.0;
        uStack_140 = 0;
        uStack_120 = 0;
        local_108 = blendpd(auVar51,_DAT_149935300,2);
        local_248 = local_438;
        uStack_240 = ppcStack_430;
        local_238 = local_428;
        uStack_230 = uStack_420;
        local_228 = local_3f8;
        dStack_220 = dStack_3f0;
        local_218 = local_408;
        uStack_210 = uStack_400;
        local_208 = local_3d8;
        dStack_200 = dStack_3d0;
        local_1f8 = local_418;
        uStack_1f0 = uStack_410;
        local_1e8 = local_3e8;
        dStack_1e0 = dStack_3e0;
        local_1d8 = local_3c8._0_8_;
        uStack_1d0 = local_3c8._8_8_;
        if (((((9.99999993922529e-09 < ABS((double)local_178)) ||
              (9.99999993922529e-09 < ABS(dStack_170))) ||
             ((9.99999993922529e-09 < ABS((double)local_168) ||
              (((9.99999993922529e-09 < ABS(dStack_158) || (9.99999993922529e-09 < ABS(dStack_150)))
               || (9.99999993922529e-09 < ABS(dStack_148))))))) ||
            ((9.99999993922529e-09 < ABS(local_138) || (9.99999993922529e-09 < ABS(dStack_130)))))
           || (9.99999993922529e-09 < ABS(local_128))) {
          FUN_14007522e(local_2c8,&local_178);
        }
        else {
          pdVar33 = (double *)&DAT_14c846400;
          pdVar31 = local_2c8;
          for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
            *pdVar31 = *pdVar33;
            pdVar33 = pdVar33 + 1;
            pdVar31 = pdVar31 + 1;
          }
        }
        uVar11 = local_460;
        puVar30 = local_468;
        param_4 = local_488;
        FUN_1447fea8d(&local_178,&local_248,local_2c8);
        ppcVar27 = &local_178;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar30 = *ppcVar27;
          ppcVar27 = ppcVar27 + 1;
          puVar30 = puVar30 + 1;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != local_448);
    }
    dVar39 = (double)FUN_1447b4020(param_5);
    uVar11 = uStack_3a0;
    lVar9 = local_3a8;
    local_248 = (double *)0x0;
    uStack_240 = (code **)CONCAT44(uStack_240._4_4_,(int)uStack_3a0);
    if ((int)uStack_3a0 == 0) {
      uStack_240 = (code **)(uStack_3a0 & 0xffffffff);
    }
    else {
      FUN_147459a94(&local_248,uStack_3a0 & 0xffffffff);
      FUN_147459af9(local_248,lVar9,uVar11 & 0xffffffff);
    }
    uStack_230._0_2_ = CONCAT11(local_4c2,local_4c1);
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar6 = *(int *)(lVar9 + 0xc60);
    local_238 = dVar39;
    if (DAT_14c86a9fc == 0) {
      if (iVar6 != 2) {
        if (iVar6 != 1) goto LAB_1432463b1;
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_1432463ba;
        goto LAB_14324644f;
      }
LAB_1432463ba:
      FUN_143249a1c(&local_248,&DAT_14ca85100);
    }
    else {
LAB_1432463b1:
      if (iVar6 == 0x10) goto LAB_1432463ba;
LAB_14324644f:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar9 + 0xc60), iVar6 == 2))
        goto LAB_1432463ba;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1432463ba;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar30 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar14 = (uint *)*puVar30;
        if (puVar14 != (uint *)0x0) goto LAB_143246535;
        while( true ) {
          uVar21 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar21 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar21 | 1;
            __tlregdtor(&LAB_14324ac23);
          }
          lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar13 = *(undefined4 **)(lVar9 + 0x310);
          *(undefined8 *)(lVar9 + 0x310) = 0;
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar13 = 0xffffffff;
          *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar30 = puVar13;
          FUN_140217a48(puVar30);
          puVar14 = (uint *)*puVar30;
LAB_143246535:
          puVar28 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar26 = (uint *)(puVar28 + 0x19);
          uVar21 = puVar14[0x12];
          if (puVar26 <= puVar14 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
            LOCK();
            uVar18 = *puVar14;
            *puVar14 = *puVar14 + uVar21 + 1;
            UNLOCK();
            if ((uVar18 ^ uVar21) != 0xffffffff) break;
            puVar14 = (uint *)*puVar30;
            *puVar14 = 0xffffffff;
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar30 = puVar14;
            puVar28 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
            puVar26 = (uint *)(puVar28 + 0x19);
            uVar21 = 0;
            if (puVar26 <= puVar14 + 0x4000) {
              uVar21 = 1;
              goto LAB_1432465b5;
            }
          }
        }
        uVar21 = uVar21 + 1;
LAB_1432465b5:
        *(uint **)(puVar14 + 0x10) = puVar26;
        puVar14[0x12] = uVar21;
        iVar6 = 0;
        FUN_1447247dc(puVar28,0);
        *puVar28 = &PTR_FUN_14a3c1348;
        puVar28[0x15] = local_248;
        local_248 = (double *)0x0;
        *(undefined4 *)(puVar28 + 0x16) = (undefined4)uStack_240;
        *(undefined4 *)((longlong)puVar28 + 0xb4) = uStack_240._4_4_;
        uStack_240 = (code **)0x0;
        *(undefined2 *)(puVar28 + 0x18) = (undefined2)uStack_230;
        puVar28[0x17] = local_238;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar21 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar21 < 2) {
            uVar11 = (ulonglong)(byte)(&DAT_149e38edc)[uVar21];
          }
          else {
            uVar11 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar11 = 5;
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
        lVar9 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar9 == 0) {
          uVar23 = 1;
          if ((char)uVar11 != '\x06') {
            uVar23 = uVar11;
          }
          uVar11 = uVar23;
          uVar15 = 0;
        }
        else {
          if ((char)uVar11 == '\x06') {
            uVar11 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
          }
          uVar15 = *(undefined8 *)(lVar9 + 0x30);
        }
        puVar28[0xf] = uVar15;
        puVar28[0x10] = uVar11 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar28 + 0x1c) = iVar6;
        if (puVar28 == (undefined8 *)0x0) {
          local_178 = (code *)CONCAT71(local_178._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar28 + 1) = *(int *)(puVar28 + 1) + 1;
          UNLOCK();
          local_178 = (code *)CONCAT71(local_178._1_7_,1);
          FUN_1447439e4(puVar28);
          LOCK();
          piVar1 = (int *)(puVar28 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar28)(puVar28,1);
          }
        }
      }
      else {
        local_178 = (code *)0x0;
        local_168 = (double *)FUN_14001cc68(0x28,8);
        *local_168 = (double)&PTR_LAB_14a3c1300;
        local_168[1] = (double)local_248;
        local_248 = (double *)0x0;
        *(undefined4 *)(local_168 + 2) = (undefined4)uStack_240;
        *(undefined4 *)((longlong)local_168 + 0x14) = uStack_240._4_4_;
        uStack_240 = (code **)0x0;
        *(undefined2 *)(local_168 + 4) = (undefined2)uStack_230;
        local_168[3] = local_238;
        if (local_168 + 1 != (double *)0x0) {
          local_178 = (code *)&LAB_14324abb0;
        }
        local_518 = &local_178;
        FUN_14005a792(&DAT_14ca9a440,L"RenderMergedTexture",&DAT_14caa2560);
        if (local_178 != (code *)0x0) {
          pdVar33 = local_168;
          if (local_168 == (double *)0x0) {
            pdVar33 = &dStack_158;
          }
          (**(code **)((longlong)*pdVar33 + 0x10))();
        }
      }
    }
    FUN_147459391(local_248,(ulonglong)uStack_240 & 0xffffffff);
    if (local_248 != (double *)0x0) {
      FUN_1400020a8();
    }
    pdVar33 = (double *)(uStack_3a0 & 0xffffffff);
    FUN_147459391(local_3a8,pdVar33);
    if (local_3a8 != 0) {
      FUN_1400020a8();
    }
    FUN_140460f52(local_390);
  }
  local_180 = 0;
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  FUN_140f0de4e(local_1c8);
  uVar23 = CONCAT71((int7)((ulonglong)pdVar33 >> 8),1);
LAB_14324505a:
  if ((local_f0 ^ (ulonglong)auStack_538) == DAT_14c707940) {
    return uVar23 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1432469ee FUN_1432469ee body=369 status=ok
// SIG undefined FUN_1432469ee(void)

undefined8 FUN_1432469ee(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  byte bVar7;
  bool bVar8;
  undefined1 auStack_188 [32];
  longlong local_168 [26];
  longlong local_98;
  undefined8 local_88;
  undefined8 local_78;
  byte local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar1 = *(int *)(param_1 + 0x5d0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x5c8);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if (lVar3 == 0) {
LAB_143246b28:
        uVar4 = 0;
        goto LAB_143246b2a;
      }
      local_98 = 0;
      local_88 = 0x400000000;
      local_168[0] = 0;
      local_168[1] = 0;
      local_78 = 0;
      local_70 = local_70 & 0xf8;
      bVar7 = 1;
      FUN_1400508f4(lVar3,local_168,1);
      bVar5 = *(byte *)(lVar3 + 0x66c);
      lVar3 = FUN_1447210f0(param_1);
      if (lVar3 != 0) {
        if ((*(longlong *)(lVar3 + 0x30) != 0) &&
           (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x2b0), lVar3 != 0)) {
          bVar7 = *(byte *)(lVar3 + 0x470);
        }
      }
      if (DAT_14c761964 == 0) {
        bVar5 = 0;
      }
      else {
        bVar5 = bVar5 | bVar7;
      }
      bVar8 = (local_70 & 5) == 0;
      if (bVar8 && (bVar5 & 1) == 0) {
        bVar8 = (local_70 & 2) == 0;
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_168[0] != 0) {
        FUN_1400020a8();
      }
      if (!bVar8) goto LAB_143246b28;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  uVar4 = 1;
LAB_143246b2a:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 143246b60 FUN_143246b60 body=1331 status=ok
// SIG undefined FUN_143246b60(void)

ulonglong FUN_143246b60(char *param_1,undefined1 *param_2,char param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 local_79;
  undefined8 local_78;
  undefined ***local_68;
  undefined **local_58;
  char *local_50;
  char local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*param_1 == '\x01') {
    uVar17 = CONCAT71((int7)(local_38 >> 8),param_1[3]);
    goto LAB_143246ca5;
  }
  if ((param_1[2] & 1U) != 0) {
    if (param_3 == '\0') {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
      if ((lVar4 != 0) &&
         ((*(int *)(lVar4 + 0x10) != 0 ||
          (cVar7 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 8) + 0x18))(),
          cVar7 == '\0')))) goto LAB_143246ca3;
    }
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar8 = *(int *)(lVar4 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar8 != 2) {
        if (iVar8 != 1) goto LAB_143246bf1;
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) goto LAB_143246ff9;
        goto LAB_143246bfa;
      }
LAB_143246ff9:
      FUN_147455174(param_1);
    }
    else {
LAB_143246bf1:
      if (iVar8 == 0x10) goto LAB_143246ff9;
LAB_143246bfa:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar4 + 0xc60), iVar8 == 2))
        goto LAB_143246ff9;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143246ff9;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_143246d6b;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_14324ac23);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_143246d6b:
          puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x17);
          uVar14 = puVar12[0x12];
          if (puVar16 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar18 + 0x17);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_143246deb;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_143246deb:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar8 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14a3c13e0;
        puVar18[0x15] = param_1;
        *(char *)(puVar18 + 0x16) = param_3;
        uVar5 = (undefined4)local_78;
        *(undefined4 *)((longlong)puVar18 + 0xb1) = uVar5;
        *(undefined4 *)((longlong)puVar18 + 0xb4) = local_78._3_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar8 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar17 != '\x06') {
            uVar6 = uVar17;
          }
          uVar17 = uVar6;
          uVar13 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar18[0xf] = uVar13;
        puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar8;
        if (puVar18 == (undefined8 *)0x0) {
          local_79 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_79 = 1;
          FUN_1447439e4(puVar18);
          LOCK();
          piVar1 = (int *)(puVar18 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_88 = &local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14a3c1360;
        local_78 = &LAB_14324adda;
        local_50 = param_1;
        local_48 = param_3;
        FUN_14005a792(&DAT_14ca9a440,L"FLandscapeAsyncTextureReadback_FinishReadback",&DAT_14caa2564
                     );
        if (local_78 != (undefined1 *)0x0) {
          pppuVar15 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar15 = &local_58;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
    }
    *param_1 = '\x01';
    *param_2 = 1;
  }
LAB_143246ca3:
  uVar17 = 0;
LAB_143246ca5:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar17 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143247094 FUN_143247094 body=1254 status=ok
// SIG undefined FUN_143247094(void)

void FUN_143247094(byte *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  byte bVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_69;
  undefined8 local_68;
  undefined ***local_58;
  undefined **local_48;
  byte *local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar16 = *param_1;
  param_1[0] = 1;
  param_1[1] = 1;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_1432470d8;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1432470dd;
      goto LAB_143247135;
    }
  }
  else {
LAB_1432470d8:
    if (iVar7 != 0x10) {
LAB_143247135:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_1432470dd;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_1432470dd;
        }
      }
      bVar16 = bVar16 ^ 1;
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143247294;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_14324ac23);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_143247294:
          puVar18 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar18 + 0x17);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar18 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar18 + 0x17);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143247314;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143247314:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14a3c1450;
        puVar18[0x15] = param_1;
        *(byte *)(puVar18 + 0x16) = bVar16;
        uVar5 = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar18 + 0xb1) = uVar5;
        *(undefined4 *)((longlong)puVar18 + 0xb4) = local_68._3_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar17 != '\x06') {
            uVar6 = uVar17;
          }
          uVar17 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar18[0xf] = uVar12;
        puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar7;
        if (puVar18 == (undefined8 *)0x0) {
          local_69 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_69 = 1;
          FUN_1447439e4(puVar18);
          LOCK();
          piVar1 = (int *)(puVar18 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_78 = &local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a3c13f0;
        local_68 = FUN_14324af8e;
        local_40 = param_1;
        local_38 = bVar16;
        FUN_14005a792(&DAT_14ca9a440,L"FCancelAndSelfDestructCommand",&DAT_14caa2568);
        if (local_68 != (code *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_1432471d4;
    }
  }
LAB_1432470dd:
  if (bVar16 == 0) {
    FUN_147455174(param_1);
  }
  if (param_1 != (byte *)0x0) {
    FUN_14745aa24(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  }
LAB_1432471d4:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14324758c FUN_14324758c body=1200 status=ok
// SIG undefined FUN_14324758c(void)

void FUN_14324758c(longlong param_1)

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
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1432475ca;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1432475cf;
      goto LAB_14324761a;
    }
  }
  else {
LAB_1432475ca:
    if (iVar6 != 0x10) {
LAB_14324761a:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_1432475cf;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1432475cf;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143247773;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14324ac23);
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
LAB_143247773:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x16);
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
            puVar14 = (uint *)(puVar16 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_1432477f3;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_1432477f3:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a3c14e0;
        puVar16[0x15] = param_1;
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
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
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
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a3c1460;
        local_68[0] = FUN_14324b190;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"FLandscapeAsyncTextureReadback_CheckAndUpdate",&DAT_14caa256c
                     );
        if (local_68[0] != (code *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_1432476b1;
    }
  }
LAB_1432475cf:
  if (param_1 != 0) {
    FUN_14745aa24(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
LAB_1432476b1:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143247a4f FUN_143247a4f body=331 status=ok
// SIG undefined FUN_143247a4f(void)

void FUN_143247a4f(void)

{
  void *_Src;
  byte bVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  int local_48;
  void *local_40;
  int local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147457e66();
  _Src = local_40;
  local_58 = (void *)0x0;
  lVar4 = (longlong)local_38;
  local_50 = local_38;
  if (lVar4 == 0) {
    local_4c = 0;
    iVar3 = 0;
    local_48 = local_30;
  }
  else {
    FUN_14010590e(&local_58,local_38,0);
    memcpy(local_58,_Src,lVar4 << 3);
    local_48 = local_30;
    iVar3 = local_38;
  }
  do {
    if (local_48 == iVar3) {
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_40 != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar4 = *(longlong *)((longlong)local_58 + (longlong)local_48 * 8);
    if ((~*(byte *)(lVar4 + 0x9c) & 3) == 0) {
      bVar1 = *(byte *)(lVar4 + 0x9d);
      if ((bVar1 & 1) != 0) {
        if ((*(longlong *)(lVar4 + 0xb0) != 0) || (lVar2 = FUN_1448abda6(lVar4), lVar2 != 0))
        goto LAB_143247b30;
        bVar1 = *(byte *)(lVar4 + 0x9d);
      }
      *(byte *)(lVar4 + 0x9d) = bVar1 | 1;
      FUN_1401057d4(lVar4);
      FUN_14010586c(&DAT_14cad0140,lVar4);
    }
LAB_143247b30:
    lVar4 = (longlong)local_48;
    do {
      lVar4 = lVar4 + 1;
      local_48 = (int)lVar4;
      if (local_50 <= lVar4) break;
    } while (*(longlong *)((longlong)local_58 + lVar4 * 8) == 0);
  } while( true );
}



// FUNCTION 143247b9b FUN_143247b9b body=69 status=ok
// SIG undefined FUN_143247b9b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143247b9b(void)

{
  _DAT_14caa2240 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143247bdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa2248,1);
  return;
}



// FUNCTION 143247be0 FUN_143247be0 body=69 status=ok
// SIG undefined FUN_143247be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143247be0(void)

{
  _DAT_14caa2258 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143247c22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa2260,1);
  return;
}



// FUNCTION 143247c25 FUN_143247c25 body=69 status=ok
// SIG undefined FUN_143247c25(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143247c25(void)

{
  _DAT_14caa2270 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143247c67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa2278,1);
  return;
}



// FUNCTION 143247c6a FUN_143247c6a body=69 status=ok
// SIG undefined FUN_143247c6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143247c6a(void)

{
  _DAT_14caa2288 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143247cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa2290,1);
  return;
}



// FUNCTION 143247caf FUN_143247caf body=41 status=ok
// SIG undefined FUN_143247caf(void)

void FUN_143247caf(void)

{
  DAT_14caa22e0 = 0;
  if (DAT_14caa22d8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6b9b0();
  return;
}



// FUNCTION 143247cd8 FUN_143247cd8 body=41 status=ok
// SIG undefined FUN_143247cd8(void)

void FUN_143247cd8(void)

{
  DAT_14caa2330 = 0;
  if (DAT_14caa2328 != 0) {
    FUN_1400020a8();
  }
  FUN_145d7092a();
  return;
}



// FUNCTION 143247d02 FUN_143247d02 body=411 status=ok
// SIG undefined FUN_143247d02(void)

undefined1 FUN_143247d02(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    uVar4 = 3;
    goto LAB_143247dbc;
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (((((*(int *)(lVar2 + 0x7f4) == 0) || (uVar1 = *(uint *)(lVar2 + 0x7f0), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar5 == (longlong *)0x0 || ((int)plVar5[2] != *(int *)(lVar2 + 0x7f4))))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar3 = *plVar5, lVar3 == 0)))) {
LAB_143247db2:
    puVar6 = (undefined1 *)(lVar2 + 0x6c7);
  }
  else {
    if ((*(longlong *)(lVar3 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(lVar3 + 0xa8) + 0x65) & 1) == 0)) {
      uVar4 = 0;
      goto LAB_143247dbc;
    }
    if (DAT_14cad2858 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
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
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30)) goto LAB_143247db2;
    puVar6 = (undefined1 *)(lVar3 + 0x427);
  }
  uVar4 = *puVar6;
LAB_143247dbc:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143247eae FUN_143247eae body=952 status=ok
// SIG undefined FUN_143247eae(void)

void FUN_143247eae(longlong param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined1 auStack_1c8 [40];
  longlong local_1a0;
  undefined **local_198 [17];
  uchar local_110 [8];
  GUID *local_108;
  longlong local_100;
  undefined **local_f8;
  uchar aauStack_f0 [4] [8];
  byte local_d0;
  longlong *local_a0;
  longlong local_80;
  uchar local_70 [8];
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (*(longlong *)(param_1 + 0x728) == 0) {
    ppuVar2 = (undefined **)(param_1 + 0x718);
    if (((*(int *)(param_1 + 0x71c) == 0 && *(int *)(param_1 + 0x718) == 0) &&
        *(int *)(param_1 + 0x720) == 0) && *(int *)(param_1 + 0x724) == 0) {
      local_f8 = (undefined **)0x0;
      aauStack_f0[0][0] = '\0';
      aauStack_f0[0][1] = '\0';
      aauStack_f0[0][2] = '\0';
      aauStack_f0[0][3] = '\0';
      aauStack_f0[0][4] = '\0';
      aauStack_f0[0][5] = '\0';
      aauStack_f0[0][6] = '\0';
      aauStack_f0[0][7] = '\0';
      CoCreateGuid((GUID *)&local_f8);
      *(ulong *)ppuVar2 = (ulong)local_f8;
      *(undefined4 *)(param_1 + 0x71c) = local_f8._4_4_;
      *(undefined4 *)(param_1 + 0x720) = aauStack_f0[0]._0_4_;
      *(undefined4 *)(param_1 + 0x724) = aauStack_f0[0]._4_4_;
    }
    else {
      uVar8 = FUN_1447addd0(ppuVar2,0x10);
      iVar9 = FUN_14745ac62(uVar8,ppuVar2);
      lVar10 = (longlong)iVar9 * 0x20 + DAT_14caa22e8;
      if ((lVar10 != 0 && iVar9 != -1) && (lVar10 = *(longlong *)(lVar10 + 0x10), lVar10 != 0)) {
        lVar12 = *(longlong *)(param_1 + 0x728);
        if (lVar12 != lVar10) {
          *(longlong *)(param_1 + 0x728) = lVar10;
          *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
          if (lVar12 != 0) {
            piVar1 = (int *)(lVar12 + 8);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1c8);
            }
          }
        }
        goto LAB_143247f2c;
      }
    }
    if (*(int *)(param_1 + 0x6b0) != 0) {
      local_198[0] = (undefined **)FUN_14001cc68(0x40,0x10);
      *(undefined4 *)(local_198[0] + 1) = 0;
      *local_198[0] = (undefined *)&PTR_FUN_14a3c02b8;
      puVar7 = *(undefined **)(param_1 + 0x720);
      local_198[0][2] = *ppuVar2;
      local_198[0][3] = puVar7;
      local_198[0][6] = (undefined *)0x0;
      local_198[0][7] = (undefined *)0x0;
      local_198[0][4] = (undefined *)0x0;
      local_198[0][5] = (undefined *)0x0;
      local_f8 = ppuVar2;
      aauStack_f0[0] = (uchar  [8])local_198;
      FUN_14745ace4(&local_4c);
      puVar4 = *(undefined8 **)(DAT_14caa22e8 + 0x10 + (longlong)local_4c * 0x20);
      puVar5 = *(undefined8 **)(param_1 + 0x728);
      if (puVar5 != puVar4) {
        *(undefined8 **)(param_1 + 0x728) = puVar4;
        if (puVar4 != (undefined8 *)0x0) {
          *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
        }
        if (puVar5 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar5 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar5)();
          }
        }
      }
      memset(&local_f8,0,0x90);
      FUN_144869430(&local_f8);
      local_68 = 0;
      local_f8 = &PTR_FUN_149e1e050;
      local_58 = 0x7fffffffffffffff;
      local_d0 = local_d0 | 1;
      local_1a0 = param_1 + 0x6a8;
      local_60 = param_1 + 0x6a8;
      FUN_1449c2eca(&local_f8,0);
      FUN_1407134c4(local_198,&local_f8);
      local_110[0] = local_70[0];
      local_110[1] = local_70[1];
      local_110[2] = local_70[2];
      local_110[3] = local_70[3];
      local_110[4] = local_70[4];
      local_110[5] = local_70[5];
      local_110[6] = local_70[6];
      local_110[7] = local_70[7];
      local_198[0] = &PTR_FUN_149f52ef0;
      local_108 = (GUID *)&local_f8;
      local_70 = (uchar  [8])local_198;
      lVar10 = FUN_14001cc68(0x158,0x10);
      FUN_140dffb3a(lVar10);
      local_100 = lVar10;
      FUN_140625eca(local_198,*(longlong *)(param_1 + 0x728) + 0x30);
      iVar9 = *(int *)(param_1 + 0x6c0);
      if ((longlong)iVar9 != 0) {
        lVar10 = *(longlong *)(param_1 + 0x6b8);
        lVar12 = 0;
        do {
          lVar6 = *(longlong *)(param_1 + 0x728);
          puVar11 = (undefined4 *)FUN_14488068a(*(undefined8 *)(lVar10 + lVar12));
          iVar3 = *(int *)(lVar6 + 0x28);
          *(uint *)(lVar6 + 0x28) = iVar3 + 1U;
          if (*(uint *)(lVar6 + 0x2c) < iVar3 + 1U) {
            FUN_1417255d0((longlong *)(lVar6 + 0x20),iVar3);
          }
          *(undefined4 *)(*(longlong *)(lVar6 + 0x20) + (longlong)iVar3 * 4) = *puVar11;
          lVar12 = lVar12 + 8;
        } while ((longlong)iVar9 * 8 != lVar12);
      }
      *(undefined4 *)(param_1 + 0x6b0) = 0;
      if (*(int *)(param_1 + 0x6b4) != 0) {
        FUN_144893a1c(local_1a0,0);
      }
      lVar10 = local_100;
      *(undefined1 *)(param_1 + 0x644) = 1;
      local_198[0] = &PTR_FUN_149f52ef0;
      if (local_100 != 0) {
        FUN_14041e184(local_100);
        FUN_1400020a8(lVar10);
      }
      FUN_14041e0ea(local_198);
      local_f8 = &PTR__purecall_149e35f70;
      if (local_a0 != (longlong *)0x0) {
        if (*local_a0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_a0);
      }
      if (local_80 != 0) {
        if (*(longlong *)(local_80 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_80);
      }
    }
  }
LAB_143247f2c:
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143248288 FUN_143248288 body=1232 status=ok
// SIG undefined FUN_143248288(void)

void FUN_143248288(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  byte bVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  undefined8 *puVar17;
  double *pdVar18;
  double *pdVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_1a8 [32];
  double local_188 [3];
  longlong lStack_170;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  longlong lStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  longlong lStack_130;
  ulonglong local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  undefined4 local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  ulonglong uStack_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *(byte *)((longlong)param_1 + 0x9c) = *(byte *)((longlong)param_1 + 0x9c) | 8;
  if (param_1[0xa9] != 0) goto LAB_1432482fc;
  (**(code **)(*param_1 + 0x9f8))();
  puVar17 = (undefined8 *)param_1[0xe5];
  if (puVar17 == (undefined8 *)0x0) goto LAB_1432482fc;
  plVar2 = param_1 + 0x82;
  lVar13 = param_1[0x16];
  if (lVar13 == 0) {
    lVar13 = FUN_1448abda6(param_1);
    puVar17 = (undefined8 *)param_1[0xe5];
    if (puVar17 != (undefined8 *)0x0) goto LAB_1432483a4;
    pdVar18 = (double *)&DAT_14c846480;
    pdVar19 = local_188;
    for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
      *pdVar19 = *pdVar18;
      pdVar18 = pdVar18 + 1;
      pdVar19 = pdVar19 + 1;
    }
    local_118 = DAT_14c846520;
    local_128 = DAT_14c846510;
    uStack_120 = DAT_14c846518;
    local_108 = (undefined8 *)0x0;
    bVar11 = true;
  }
  else {
LAB_1432483a4:
    iVar3 = *(int *)(puVar17 + 1);
    *(int *)(puVar17 + 1) = iVar3 + 1;
    pdVar18 = (double *)&DAT_14c846480;
    pdVar19 = local_188;
    for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
      *pdVar19 = *pdVar18;
      pdVar18 = pdVar18 + 1;
      pdVar19 = pdVar19 + 1;
    }
    local_118 = DAT_14c846520;
    local_128 = DAT_14c846510;
    uStack_120 = DAT_14c846518;
    *(int *)(puVar17 + 1) = iVar3 + 2;
    bVar11 = false;
    local_108 = puVar17;
  }
  local_110 = 0x3f800000;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_100 = *(undefined8 *)(lVar13 + 0x260);
  local_c8 = lVar13;
  local_c0 = param_1;
  local_b8 = plVar2;
  if (!bVar11) {
    piVar1 = (int *)(local_108 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_108)(local_108,1);
    }
  }
  local_188[0] = (double)param_1[0x48];
  local_188[1] = (double)param_1[0x49];
  local_188[2] = (double)param_1[0x4a];
  lStack_170 = param_1[0x4b];
  local_168 = param_1[0x4c];
  lStack_160 = param_1[0x4d];
  local_158 = param_1[0x4e];
  lStack_150 = param_1[0x4f];
  local_148 = (double)param_1[0x50];
  dStack_140 = (double)param_1[0x51];
  local_138 = (double)param_1[0x52];
  lStack_130 = param_1[0x53];
  dVar21 = local_188[1] + local_188[1];
  dVar20 = (double)param_1[0x4b];
  dVar7 = local_188[2] + local_188[2];
  dVar8 = local_188[0] * (local_188[0] + local_188[0]);
  dVar24 = (1.0 - (local_188[2] * dVar7 + local_188[1] * dVar21)) * local_148;
  dVar10 = (1.0 - (local_188[2] * dVar7 + dVar8)) * dStack_140;
  dVar22 = dVar7 * dVar20;
  dVar9 = (local_188[0] + local_188[0]) * (double)param_1[0x4b];
  dVar23 = (dVar21 * local_188[0] + dVar22) * local_148;
  dVar25 = (dVar7 * local_188[1] + dVar9) * dStack_140;
  dVar20 = dVar21 * dVar20;
  dVar6 = (dVar7 * local_188[0] - dVar20) * local_148;
  dVar22 = (dVar21 * local_188[0] - dVar22) * dStack_140;
  dVar9 = (dVar7 * local_188[1] - dVar9) * local_138;
  dVar6 = dVar6 * dVar6 + dVar24 * dVar24 + dVar23 * dVar23;
  dVar24 = dVar25 * dVar25 + dVar22 * dVar22 + dVar10 * dVar10;
  dVar20 = (dVar20 + dVar7 * local_188[0]) * local_138;
  dVar22 = (1.0 - (dVar8 + local_188[1] * dVar21)) * local_138;
  dVar20 = dVar22 * dVar22 + dVar20 * dVar20 + dVar9 * dVar9;
  local_128 = -(ulonglong)(9.99999993922529e-09 < dVar6) & (ulonglong)SQRT(dVar6);
  uStack_120 = -(ulonglong)(9.99999993922529e-09 < dVar24) & (ulonglong)SQRT(dVar24);
  local_118 = -(ulonglong)(9.99999993922529e-09 < dVar20) & (ulonglong)SQRT(dVar20);
  local_110 = *(undefined4 *)((longlong)param_1 + 0x63c);
  if (local_108[6] != 0) {
    uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
    lVar13 = (**(code **)(*param_1 + 0x558))(param_1);
    uVar5 = *(undefined4 *)(param_1[0x15] + 0xc);
    bVar12 = (**(code **)(*param_1 + 0x580))();
    uVar14 = 0;
    uVar16 = 0;
    lVar15 = 0;
    do {
      if (*(char *)(lVar13 + lVar15) == '\x02') {
        uVar16 = uVar16 | 1 << ((uint)lVar15 & 0x1f);
      }
      else if (*(char *)(lVar13 + lVar15) == '\x01') {
        uVar14 = uVar14 | 1 << ((uint)lVar15 & 0x1f);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0x20);
    local_f8 = CONCAT44(uVar16,uVar5);
    uStack_f0 = CONCAT44((uint)bVar12 << 0x15,uVar14) | 0x1300000000;
    local_e8 = (ulonglong)uVar16 << 0x20;
    uStack_e0 = CONCAT44((uint)bVar12 << 0x15,uVar4) | 0x1300000000;
    FUN_147455fd4(local_188);
    FUN_1474564b2(local_188);
  }
  if (local_108 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_108 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_108)(local_108,1);
    }
  }
LAB_1432482fc:
  if ((local_a0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14324875a FUN_14324875a body=844 status=ok
// SIG undefined FUN_14324875a(void)

void FUN_14324875a(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  if (*(char *)(param_1 + 0x698) == '\0') {
    dVar6 = 0.0;
    dVar4 = 0.0;
    dVar8 = 0.0;
    dVar3 = 0.0;
    dVar9 = 0.0;
    dVar11 = 0.0;
  }
  else {
    dVar11 = *param_3;
    dVar14 = param_3[1];
    dVar3 = param_3[2];
    dVar2 = param_3[8];
    dVar1 = param_3[9];
    dVar18 = param_3[10];
    dVar9 = dVar3 + dVar3;
    dVar12 = dVar11 + dVar11;
    dVar15 = dVar14 + dVar14;
    dVar4 = param_3[3];
    dVar6 = param_3[3];
    dVar17 = dVar15 * dVar4;
    auVar10._0_8_ = (dVar17 + *param_3 * dVar9) * dVar18;
    auVar10._8_8_ = (dVar12 * dVar6 + *param_3 * dVar12) * param_3[0xb];
    dVar4 = dVar9 * dVar4;
    dVar6 = dVar12 * dVar6;
    dVar8 = (1.0 - (dVar9 * dVar3 + dVar15 * dVar14)) * dVar2;
    dVar3 = (1.0 - (dVar9 * dVar3 + dVar12 * dVar11)) * dVar1;
    dVar5 = (dVar4 + dVar15 * dVar11) * dVar2;
    dVar7 = (dVar6 + dVar9 * dVar14) * dVar1;
    dVar2 = (*param_3 * dVar9 - dVar17) * dVar2;
    auVar19._0_8_ = dVar1 * (dVar15 * dVar11 - dVar4);
    auVar19._8_8_ = dVar18 * (dVar9 * dVar14 - dVar6);
    auVar10 = blendpd(auVar10,auVar19,2);
    auVar20._8_4_ = SUB84(dVar3,0);
    auVar20._0_8_ = dVar8;
    auVar20._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    auVar20 = blendpd(auVar19,auVar20,2);
    dVar18 = (1.0 - (dVar12 * dVar11 + dVar15 * dVar14)) * dVar18;
    dVar14 = (*(double *)(param_1 + 0x668) + *(double *)(param_1 + 0x680)) * 0.5;
    dVar1 = (*(double *)(param_1 + 0x670) + *(double *)(param_1 + 0x688)) * 0.5;
    dVar17 = (*(double *)(param_1 + 0x678) + *(double *)(param_1 + 0x690)) * 0.5;
    dVar13 = (*(double *)(param_1 + 0x680) - *(double *)(param_1 + 0x668)) * 0.5;
    dVar16 = (*(double *)(param_1 + 0x688) - *(double *)(param_1 + 0x670)) * 0.5;
    dVar3 = (*(double *)(param_1 + 0x690) - *(double *)(param_1 + 0x678)) * 0.5;
    dVar12 = dVar17 * auVar10._0_8_ + dVar1 * auVar20._0_8_ + dVar14 * dVar8 + param_3[4];
    dVar15 = dVar17 * auVar10._8_8_ + dVar1 * auVar20._8_8_ + dVar14 * dVar5 + param_3[5];
    dVar6 = ABS(dVar3 * auVar10._0_8_) + ABS(auVar20._0_8_ * dVar16) + ABS(dVar13 * dVar8);
    dVar4 = ABS(dVar3 * auVar10._8_8_) + ABS(auVar20._8_8_ * dVar16) + ABS(dVar13 * dVar5);
    dVar9 = dVar12 - dVar6;
    dVar11 = dVar15 - dVar4;
    dVar6 = dVar6 + dVar12;
    dVar4 = dVar4 + dVar15;
    dVar8 = dVar17 * dVar18 + dVar1 * dVar7 + dVar14 * dVar2 + param_3[6];
    dVar14 = ABS(dVar16 * dVar7) + ABS(dVar13 * dVar2) + ABS(dVar3 * dVar18);
    dVar3 = dVar8 - dVar14;
    dVar8 = dVar8 + dVar14;
  }
  dVar8 = (dVar8 - dVar3) * 0.5;
  dVar4 = (dVar4 - dVar11) * 0.5;
  dVar6 = (dVar6 - dVar9) * 0.5;
  *param_2 = dVar9 + dVar6;
  param_2[1] = dVar11 + dVar4;
  param_2[2] = dVar3 + dVar8;
  param_2[3] = dVar6;
  param_2[4] = dVar4;
  param_2[5] = dVar8;
  param_2[6] = SQRT(dVar8 * dVar8 + dVar6 * dVar6 + dVar4 * dVar4);
  return;
}



// FUNCTION 143248aa6 FUN_143248aa6 body=291 status=ok
// SIG undefined FUN_143248aa6(void)

void FUN_143248aa6(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [40];
  uint local_30;
  undefined4 uStack_2c;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448284b2();
  if (0x15a < (int)param_2[8]) {
    if ((param_2[0xd] == 0) || (uVar3 = 1, *(longlong *)(param_2[0xd] + 0x10) == 0)) {
      uVar3 = *(uint *)(param_2 + 5) >> 2 & 1;
    }
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      local_30 = uVar3;
      (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
      uVar3 = local_30;
      if (1 < local_30) {
        FUN_14572541c(param_2);
        uVar3 = local_30;
      }
    }
    else {
      uVar3 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (uVar3 == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_144750a86(param_1,&local_30,0,0);
        if (local_28 == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        else {
          puVar4 = (undefined2 *)CONCAT44(uStack_2c,local_30);
        }
        FUN_140033559(".\\Runtime/Landscape/Private/LandscapeCollision.cpp",0x8f7,
                      L"This platform requires cooked packages, and physics data was not cooked into %s."
                      ,puVar4);
        if (CONCAT44(uStack_2c,local_30) != 0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      FUN_140d270aa(param_1 + 0x6a8,param_2,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143248bca FUN_143248bca body=265 status=ok
// SIG undefined FUN_143248bca(void)

void FUN_143248bca(undefined8 param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [40];
  uint local_30;
  undefined4 uStack_2c;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_143248aa6();
  if (0x104 < (int)param_2[8]) {
    uVar3 = 0;
    if (param_2[0xd] != 0) {
      uVar3 = (uint)(*(longlong *)(param_2[0xd] + 0x10) != 0);
    }
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      local_30 = uVar3;
      (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
      uVar3 = local_30;
      if (1 < local_30) {
        FUN_14572541c(param_2);
        uVar3 = local_30;
      }
    }
    else {
      uVar3 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (uVar3 != 0) goto LAB_143248ca4;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_144750a86(param_1,&local_30,0,0);
    if (local_28 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)CONCAT44(uStack_2c,local_30);
    }
    FUN_140033559(".\\Runtime/Landscape/Private/LandscapeCollision.cpp",0x929,
                  L"This platform requires cooked packages, and physics data was not cooked into %s."
                  ,puVar4);
    if (CONCAT44(uStack_2c,local_30) != 0) {
      FUN_1400020a8();
    }
  }
LAB_143248ca4:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143248cd4 FUN_143248cd4 body=461 status=ok
// SIG undefined FUN_143248cd4(void)

void FUN_143248cd4(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint *puVar9;
  longlong lVar10;
  double dVar11;
  
  lVar2 = *(longlong *)(param_1 + 0x420);
  if ((((lVar2 != 0) && (lVar4 = *(longlong *)(lVar2 + 0x30), lVar4 != 0)) &&
      (*(int *)(param_1 + 0x448) == 0)) && (*(int *)(param_1 + 0x468) == 0)) {
    uVar7 = 0;
    if (*(longlong *)(param_1 + -0x1f8) == 0) {
      lVar2 = FUN_1448abda6(param_1 + -0x2a8);
      if (lVar2 == 0) {
        return;
      }
      lVar2 = *(longlong *)(param_1 + 0x420);
      lVar4 = *(longlong *)(lVar2 + 0x30);
      uVar7 = *(uint *)(param_1 + 0x448);
    }
    uVar1 = *(ushort *)(lVar4 + 0x90);
    *(uint *)(param_1 + 0x438) = (uint)uVar1;
    uVar6 = (uint)*(ushort *)(*(longlong *)(lVar2 + 0x30) + 0x92);
    *(uint *)(param_1 + 0x43c) = uVar6;
    uVar6 = uVar6 * uVar1;
    if (uVar7 != uVar6) {
      FUN_147456a36((longlong *)(param_1 + 0x440),uVar6,1);
      if (uVar6 != 0) {
        uVar5 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x420) + 0x30);
          dVar11 = 1.79769313486232e+308;
          if ((int)uVar5 < *(int *)(lVar2 + 0x28)) {
            dVar11 = (double)*(ushort *)(*(longlong *)(lVar2 + 0x20) + uVar5 * 2) *
                     *(double *)(lVar2 + 0xa0) + *(double *)(lVar2 + 0x80);
          }
          *(short *)(*(longlong *)(param_1 + 0x440) + uVar5 * 2) = (short)(int)dVar11;
          uVar5 = uVar5 + 1;
        } while (uVar6 != uVar5);
      }
      uVar7 = (*(int *)(param_1 + 0x43c) + -1) * (*(int *)(param_1 + 0x438) + -1);
      lVar2 = param_1 + 0x450;
      FUN_144a686e6(lVar2,uVar7);
      if (0 < (int)uVar7) {
        uVar5 = 0;
        do {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x420) + 0x30);
          uVar8 = (ulonglong)*(int *)(lVar4 + 0x48);
          bVar3 = (byte)uVar5;
          if ((longlong)uVar8 < 1) {
            uVar6 = 1 << (bVar3 & 0x1f);
            lVar4 = *(longlong *)(param_1 + 0x460);
            if (*(longlong *)(param_1 + 0x460) == 0) {
              lVar4 = lVar2;
            }
            puVar9 = (uint *)(lVar4 + (uVar5 >> 5 & 0x7ffffff) * 4);
LAB_143248e63:
            uVar6 = ~uVar6 & *puVar9;
          }
          else {
            if (uVar5 < uVar8) {
              uVar6 = 1 << (bVar3 & 0x1f);
              lVar10 = *(longlong *)(param_1 + 0x460);
              if (*(longlong *)(param_1 + 0x460) == 0) {
                lVar10 = lVar2;
              }
              puVar9 = (uint *)(lVar10 + (uVar5 >> 5) * 4);
              if (*(char *)(*(longlong *)(lVar4 + 0x40) + uVar5) != -1) goto LAB_143248e63;
            }
            else {
              uVar6 = 1 << (bVar3 & 0x1f);
              lVar4 = *(longlong *)(param_1 + 0x460);
              if (*(longlong *)(param_1 + 0x460) == 0) {
                lVar4 = lVar2;
              }
              puVar9 = (uint *)(lVar4 + (uVar5 >> 5 & 0x7ffffff) * 4);
            }
            uVar6 = uVar6 | *puVar9;
          }
          *puVar9 = uVar6;
          uVar5 = uVar5 + 1;
        } while (uVar7 != uVar5);
      }
    }
  }
  return;
}



// FUNCTION 143248ea2 FUN_143248ea2 body=48 status=ok
// SIG undefined FUN_143248ea2(void)

longlong FUN_143248ea2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140ededbe(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143248ef6 FUN_143248ef6 body=1418 status=ok
// SIG undefined FUN_143248ef6(void)

void FUN_143248ef6(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar7 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar7 = uStack_160;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_158,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar7,(longlong)(int)local_158);
  }
  puVar12[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar12 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_150;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_108,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar7,(longlong)iStack_108 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar12 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_f4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x200);
  iVar2 = *(int *)(param_1 + 0x1e4);
  lVar8 = *(longlong *)(param_1 + 0x1f8);
  iVar3 = *(int *)(param_1 + 0x1e0);
  lVar9 = *(longlong *)(param_1 + 0x1f0);
  iVar4 = *(int *)(param_1 + 0x1dc);
  lVar11 = *(longlong *)(param_1 + 0x1e8);
  iVar5 = *(int *)(param_1 + 0x1d8);
  local_180 = *(undefined8 *)(param_1 + 0x1b8);
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar5;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar3;
  *(float *)(puVar12 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_178 = *(undefined8 *)(param_1 + 0x1c8);
  local_170 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,uVar6,&local_178,&local_168);
  if (lVar11 == 0) {
    lVar11 = local_138;
  }
  if (lVar9 == 0) {
    lVar9 = lStack_130;
  }
  if (lVar8 == 0) {
    lVar8 = local_128;
  }
  local_138 = lVar11;
  lStack_130 = lVar9;
  local_128 = lVar8;
  lVar8 = FUN_140028f18(param_2,&local_168);
  if ((lVar8 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar8;
    *(undefined4 *)(puVar12 + 3) = uVar1;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar11 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar8,lVar11,1);
    }
  }
  FUN_145e990c8();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14caa2338);
  uVar6 = DAT_14ca89240;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = uVar6;
  *(undefined4 *)(puVar12 + 4) = 0;
  uVar6 = DAT_14ca89258;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 6;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x38);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 6;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb5b0;
  puVar12[2] = uVar6;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
  *(undefined4 *)(puVar12 + 4) = 3;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 6;
  puVar12[5] = &DAT_100000001;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143249482 FUN_143249482 body=1418 status=ok
// SIG undefined FUN_143249482(void)

void FUN_143249482(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar7 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar7 = uStack_160;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_158,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar7,(longlong)(int)local_158);
  }
  puVar12[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar12 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_150;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_108,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar7,(longlong)iStack_108 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar12 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_f4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x200);
  iVar2 = *(int *)(param_1 + 0x1e4);
  lVar8 = *(longlong *)(param_1 + 0x1f8);
  iVar3 = *(int *)(param_1 + 0x1e0);
  lVar9 = *(longlong *)(param_1 + 0x1f0);
  iVar4 = *(int *)(param_1 + 0x1dc);
  lVar11 = *(longlong *)(param_1 + 0x1e8);
  iVar5 = *(int *)(param_1 + 0x1d8);
  local_180 = *(undefined8 *)(param_1 + 0x1b8);
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar5;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar3;
  *(float *)(puVar12 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_178 = *(undefined8 *)(param_1 + 0x1c8);
  local_170 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,uVar6,&local_178,&local_168);
  if (lVar11 == 0) {
    lVar11 = local_138;
  }
  if (lVar9 == 0) {
    lVar9 = lStack_130;
  }
  if (lVar8 == 0) {
    lVar8 = local_128;
  }
  local_138 = lVar11;
  lStack_130 = lVar9;
  local_128 = lVar8;
  lVar8 = FUN_140028f18(param_2,&local_168);
  if ((lVar8 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar8;
    *(undefined4 *)(puVar12 + 3) = uVar1;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar11 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar8,lVar11,1);
    }
  }
  FUN_145f0a5e6();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14caa23c0);
  uVar6 = DAT_14ca89240;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = uVar6;
  *(undefined4 *)(puVar12 + 4) = 0;
  uVar6 = DAT_14ca89258;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 6;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x38);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 6;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb5b0;
  puVar12[2] = uVar6;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
  *(undefined4 *)(puVar12 + 4) = 3;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 6;
  puVar12[5] = &DAT_100000001;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143249a1c FUN_143249a1c body=2901 status=ok
// SIG undefined FUN_143249a1c(void)

void FUN_143249a1c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  ushort uVar18;
  int iVar19;
  undefined1 auStack_808 [32];
  undefined8 *local_7e8;
  uint local_7dc;
  int local_7d8;
  int local_7d4;
  uint local_7d0;
  uint local_7cc;
  longlong local_7c8;
  ulonglong local_7c0;
  ulonglong local_7b8;
  int local_7b0;
  int local_7ac;
  undefined8 local_7a8;
  longlong *local_7a0;
  undefined8 *local_798;
  longlong *local_790;
  longlong *local_788;
  undefined4 local_780;
  undefined4 uStack_77c;
  undefined2 uStack_778;
  short sStack_776;
  undefined4 uStack_774;
  undefined8 local_770;
  undefined4 local_768;
  int local_764;
  int local_760;
  longlong local_75c;
  undefined8 uStack_754;
  undefined1 local_748 [32];
  undefined1 *local_728;
  undefined8 local_720;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined4 local_708;
  undefined1 local_6f8 [112];
  longlong *local_688;
  longlong *local_680;
  longlong local_660;
  uint local_658;
  uint local_654;
  longlong local_580;
  uint local_578;
  uint local_574;
  longlong local_560;
  uint local_558;
  uint local_554;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_808;
  FUN_1407779ba(local_6f8,param_2,param_3,0);
  (**(code **)(*(longlong *)param_1[2] + 0xa0))();
  local_7c8 = (**(code **)(*(longlong *)param_1[2] + 0xa8))();
  FUN_1447ec05f(&local_788,*(undefined8 *)(param_1[2] + 0x10),L"MergedTexture");
  plVar4 = (longlong *)FUN_14473c272(local_6f8,&local_788,0);
  if (local_788 != (longlong *)0x0) {
    (**(code **)(*local_788 + 0x38))();
  }
  local_7d8 = (int)param_1[1];
  if (local_7d8 == 1) {
    sStack_776 = -(ushort)(local_7c8 == 0);
    local_780 = 0;
    uStack_77c = 0;
    uStack_778 = 0;
    local_788 = plVar4;
    FUN_143243ebe(*param_1,local_6f8);
  }
  else {
    iVar19 = *(int *)(&DAT_14c87342c + (uint)*(byte *)((longlong)param_1 + 0x19) * 0x30);
    lVar5 = FUN_14476842e(local_6f8,&DAT_14ca63b28,L"BlackDummy",2);
    if ((*(char *)(lVar5 + 0x92) == '\x04') || (*(char *)(lVar5 + 0x92) == '\x01')) {
      uVar8 = *(undefined2 *)(lVar5 + 0x8e);
    }
    else {
      uVar8 = 0;
    }
    uVar1 = *(undefined1 *)(lVar5 + 0x90);
    local_7e8 = (undefined8 *)((longlong)local_688 + 7U & 0xfffffffffffffff8);
    plVar11 = local_7e8 + 8;
    if (local_680 < plVar11) {
      FUN_140023dd8(&local_688,0x48);
      local_7e8 = (undefined8 *)((longlong)local_688 + 7U & 0xfffffffffffffff8);
      plVar11 = local_7e8 + 8;
    }
    uVar3 = local_558;
    local_7e8[1] = *(undefined8 *)(lVar5 + 8);
    local_7e8[2] = 0;
    *(undefined1 *)(local_7e8 + 3) = 1;
    *(undefined8 *)((longlong)local_7e8 + 0x1c) = 0xffffffffffffffff;
    *local_7e8 = &PTR_FUN_14a203858;
    *(undefined2 *)(local_7e8 + 5) = 0;
    *(undefined1 *)((longlong)local_7e8 + 0x2a) = uVar1;
    *(undefined1 *)((longlong)local_7e8 + 0x2b) = 0;
    *(undefined2 *)((longlong)local_7e8 + 0x2c) = 0;
    *(undefined2 *)((longlong)local_7e8 + 0x2e) = uVar8;
    *(undefined1 *)(local_7e8 + 6) = 0;
    *(undefined1 *)((longlong)local_7e8 + 0x32) = 0;
    local_7e8[7] = lVar5;
    lVar5 = (longlong)(int)local_558;
    local_558 = local_558 + 1;
    local_688 = plVar11;
    if (local_554 < local_558) {
      FUN_1447568fc(&local_560,uVar3);
    }
    *(undefined8 **)(local_560 + lVar5 * 8) = local_7e8;
    *(uint *)((longlong)local_7e8 + 0x1c) = local_558 - 1;
    local_7b8 = (ulonglong)*(uint *)((longlong)plVar4 + 0x84);
    local_7c0 = (ulonglong)*(uint *)(plVar4 + 0x11);
    local_708 = DAT_14ca83a40;
    local_7cc = -1 << ((byte)DAT_14c760da4 & 0x1f);
    local_718 = DAT_14ca83a30;
    uStack_714 = DAT_14ca83a34;
    uStack_710 = DAT_14ca83a38;
    uStack_70c = DAT_14ca83a3c;
    local_7dc = 1;
    if ((local_7c8 == 0) || (local_7dc = (uint)*(ushort *)((longlong)plVar4 + 0x8e), local_7dc != 0)
       ) {
      local_7cc = ~local_7cc;
      local_7d4 = 0;
      uVar3 = 0;
      iVar10 = local_7d8;
      local_7b0 = iVar19;
      local_7a8 = *(undefined8 *)((longlong)plVar4 + 0x84);
      local_7a0 = param_1;
      local_790 = plVar4;
      do {
        iVar9 = iVar10;
        if (iVar19 < iVar10) {
          iVar9 = iVar19;
        }
        iVar14 = local_7d8 - uVar3 * iVar19;
        if (iVar19 < iVar14) {
          iVar14 = iVar19;
        }
        local_728 = (undefined1 *)0x0;
        local_720 = 0x400000000;
        local_7d0 = uVar3;
        local_7ac = iVar10;
        if (0 < iVar14) {
          lVar5 = (longlong)local_7d4 * 0xf0;
          iVar19 = 0;
          do {
            local_788 = (longlong *)0x9;
            local_75c = 0x300010100010001;
            local_780 = local_718;
            uStack_77c = uStack_714;
            uStack_778 = (undefined2)uStack_710;
            sStack_776 = (short)((uint)uStack_710 >> 0x10);
            uStack_774 = uStack_70c;
            local_764 = DAT_14ca84e40;
            if ((int)local_7b8 < DAT_14ca84e40) {
              local_764 = (int)local_7b8;
            }
            local_768 = 0;
            if (local_764 < 2) {
              local_764 = 1;
            }
            uStack_754 = CONCAT62((int6)((ulonglong)uStack_754 >> 0x10),0xff00);
            local_760 = DAT_14ca84e40;
            if ((int)local_7c0 < DAT_14ca84e40) {
              local_760 = (int)local_7c0;
            }
            local_770 = (longlong *)CONCAT44(local_7cc,local_708);
            if (local_760 < 2) {
              local_760 = 1;
            }
            plVar11 = (longlong *)((longlong)local_688 + 7U & 0xfffffffffffffff8);
            plVar4 = plVar11 + 0x24;
            if (local_680 < plVar4) {
              FUN_140023dd8(&local_688,0x128);
              plVar11 = (longlong *)((longlong)local_688 + 7U & 0xfffffffffffffff8);
              plVar4 = plVar11 + 0x24;
            }
            local_688 = plVar4;
            FUN_1456bbb8c(plVar11,L"LandscapeMergedTextureTargetLayer",&local_788,0);
            uVar3 = local_578;
            lVar16 = (longlong)(int)local_578;
            local_578 = local_578 + 1;
            if (local_574 < local_578) {
              FUN_14472c0f6(&local_580,uVar3);
            }
            uVar12 = local_720;
            *(longlong **)(local_580 + lVar16 * 8) = plVar11;
            *(uint *)((longlong)plVar11 + 0x9c) = local_578 - 1;
            lVar16 = (longlong)(int)local_720;
            uVar3 = (int)local_720 + 1;
            local_720 = CONCAT44(local_720._4_4_,uVar3);
            if (local_720._4_4_ < uVar3) {
              FUN_1471ead9c(local_748,uVar12 & 0xffffffff);
            }
            puVar6 = local_728;
            if (local_728 == (undefined1 *)0x0) {
              puVar6 = local_748;
            }
            *(longlong **)(puVar6 + lVar16 * 8) = plVar11;
            local_780 = 0;
            uStack_77c = 0;
            uStack_778 = 0;
            sStack_776 = -1;
            local_788 = plVar11;
            FUN_143243ebe(*param_1 + lVar5,local_6f8);
            iVar19 = iVar19 + -1;
            lVar5 = lVar5 + 0xf0;
          } while (-iVar9 != iVar19);
          local_7d4 = local_7d4 - iVar19;
        }
        puVar17 = (undefined8 *)((longlong)local_688 + 0xfU & 0xfffffffffffffff0);
        plVar4 = puVar17 + 0x28;
        if (local_680 < plVar4) {
          FUN_140023dd8(&local_688,0x150);
          puVar17 = (undefined8 *)((longlong)local_688 + 0xfU & 0xfffffffffffffff0);
          plVar4 = puVar17 + 0x28;
        }
        uVar3 = local_658;
        local_688 = plVar4;
        *puVar17 = &PTR_FUN_14a3c12d0;
        puVar13 = puVar17 + 3;
        puVar17[3] = 0;
        puVar17[4] = 0;
        puVar17[5] = 0;
        puVar17[6] = 0;
        lVar5 = 0x52;
        do {
          puVar7 = (undefined8 *)((longlong)puVar17 + lVar5 + -0x12);
          *puVar7 = 0;
          puVar7[1] = 0;
          *(undefined4 *)((longlong)puVar17 + lVar5 + -2) = 0xffff0000;
          lVar5 = lVar5 + 0x18;
        } while (lVar5 != 0x112);
        *(undefined4 *)((longlong)puVar17 + 0x114) = 0;
        puVar17[0x20] = 0;
        puVar17[0x21] = 0;
        *(undefined2 *)(puVar17 + 0x22) = 0;
        *(undefined4 *)(puVar17 + 0x23) = 0xffffffff;
        *(undefined4 *)((longlong)puVar17 + 0x11c) = 0xffffffff;
        *(undefined4 *)(puVar17 + 0x24) = 0xffffffff;
        *(undefined4 *)((longlong)puVar17 + 0x124) = 0xffffffff;
        *(undefined4 *)(puVar17 + 0x25) = 0;
        *(undefined2 *)((longlong)puVar17 + 300) = 0;
        puVar17[0x26] = 0;
        lVar5 = (longlong)(int)local_658;
        local_658 = local_658 + 1;
        if (local_654 < local_658) {
          FUN_1448cfae8(&local_660,uVar3);
        }
        *(undefined8 **)(local_660 + lVar5 * 8) = puVar17;
        *(int *)(puVar17 + 2) = iVar14;
        lVar5 = 0;
        puVar7 = local_7e8;
        do {
          puVar15 = puVar7;
          if (lVar5 < iVar14) {
            puVar6 = local_728;
            if (local_728 == (undefined1 *)0x0) {
              puVar6 = local_748;
            }
            lVar16 = *(longlong *)(puVar6 + lVar5 * 8);
            if ((*(char *)(lVar16 + 0x92) == '\x04') || (*(char *)(lVar16 + 0x92) == '\x01')) {
              uVar8 = *(undefined2 *)(lVar16 + 0x8e);
            }
            else {
              uVar8 = 0;
            }
            uVar1 = *(undefined1 *)(lVar16 + 0x90);
            puVar15 = (undefined8 *)((longlong)local_688 + 7U & 0xfffffffffffffff8);
            plVar4 = puVar15 + 8;
            if (local_680 < plVar4) {
              local_798 = puVar13;
              FUN_140023dd8(&local_688,0x48);
              puVar15 = (undefined8 *)((longlong)local_688 + 7U & 0xfffffffffffffff8);
              plVar4 = puVar15 + 8;
              puVar7 = local_7e8;
              puVar13 = local_798;
            }
            uVar3 = local_558;
            local_688 = plVar4;
            puVar15[1] = *(undefined8 *)(lVar16 + 8);
            puVar15[2] = 0;
            *(undefined1 *)(puVar15 + 3) = 1;
            *(undefined8 *)((longlong)puVar15 + 0x1c) = 0xffffffffffffffff;
            *puVar15 = &PTR_FUN_14a203858;
            *(undefined2 *)(puVar15 + 5) = 0;
            *(undefined1 *)((longlong)puVar15 + 0x2a) = uVar1;
            *(undefined1 *)((longlong)puVar15 + 0x2b) = 0;
            *(undefined2 *)((longlong)puVar15 + 0x2c) = 0;
            *(undefined2 *)((longlong)puVar15 + 0x2e) = uVar8;
            *(undefined1 *)(puVar15 + 6) = 0;
            *(undefined1 *)((longlong)puVar15 + 0x32) = 0;
            puVar15[7] = lVar16;
            lVar16 = (longlong)(int)local_558;
            local_558 = local_558 + 1;
            if (local_554 < local_558) {
              FUN_1447568fc(&local_560,uVar3);
              puVar7 = local_7e8;
            }
            *(undefined8 **)(local_560 + lVar16 * 8) = puVar15;
            *(uint *)((longlong)puVar15 + 0x1c) = local_558 - 1;
          }
          plVar4 = local_790;
          param_1 = local_7a0;
          uVar3 = local_7d0;
          puVar13[lVar5] = puVar15;
          lVar5 = lVar5 + 1;
        } while (lVar5 != 4);
        uVar18 = (ushort)local_7d0;
        if ((local_7c8 == 0) || ((*(byte *)((longlong)local_790 + 99) & 1) != 0)) {
          puVar17[8] = local_790;
          puVar17[9] = 0;
          *(undefined2 *)(puVar17 + 10) = 0;
          *(ushort *)((longlong)puVar17 + 0x52) = -(ushort)(local_7c8 == 0) | uVar18;
          local_788 = DAT_14c967818;
          local_780 = (undefined4)local_7a8;
          uStack_77c = (undefined4)((ulonglong)local_7a8 >> 0x20);
          FUN_14324a572(local_6f8,puVar17 + 2,&local_788);
          param_1 = local_7a0;
        }
        else {
          local_780 = DAT_14ca83a30;
          uStack_77c = DAT_14ca83a34;
          uStack_778 = (undefined2)DAT_14ca83a38;
          sStack_776 = (short)((uint)DAT_14ca83a38 >> 0x10);
          uStack_774 = DAT_14ca83a3c;
          local_788 = (longlong *)0x1;
          local_75c = (ulonglong)*(byte *)((longlong)local_790 + 0x93) << 0x38;
          uStack_754 = CONCAT62(uStack_754._2_6_,0xff00);
          local_764 = DAT_14ca84e40;
          if ((int)local_7b8 < DAT_14ca84e40) {
            local_764 = (int)local_7b8;
          }
          local_75c = CONCAT26(local_75c._6_2_,0x10100010001);
          if (local_764 < 2) {
            local_764 = 1;
          }
          local_768 = 0;
          local_760 = DAT_14ca84e40;
          if ((int)local_7c0 < DAT_14ca84e40) {
            local_760 = (int)local_7c0;
          }
          local_770 = (longlong *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
          if (local_760 < 2) {
            local_760 = 1;
          }
          uVar12 = (longlong)local_688 + 7U & 0xfffffffffffffff8;
          plVar11 = (longlong *)(uVar12 + 0x120);
          if (local_680 < plVar11) {
            FUN_140023dd8(&local_688,0x128);
            uVar12 = (longlong)local_688 + 7U & 0xfffffffffffffff8;
            plVar11 = (longlong *)(uVar12 + 0x120);
          }
          local_688 = plVar11;
          FUN_1456bbb8c(uVar12,L"PackedRGBASlice",&local_788,0);
          uVar2 = local_578;
          lVar5 = (longlong)(int)local_578;
          local_578 = local_578 + 1;
          if (local_574 < local_578) {
            FUN_14472c0f6(&local_580,uVar2);
          }
          *(ulonglong *)(local_580 + lVar5 * 8) = uVar12;
          *(uint *)(uVar12 + 0x9c) = local_578 - 1;
          puVar17[8] = uVar12;
          puVar17[9] = 0;
          *(undefined4 *)(puVar17 + 10) = 0xffff0000;
          local_788 = DAT_14c967818;
          local_780 = (undefined4)local_7a8;
          uStack_77c = (undefined4)((ulonglong)local_7a8 >> 0x20);
          FUN_14324a572(local_6f8,puVar17 + 2,&local_788);
          local_780 = DAT_14c9a52a0;
          local_788 = DAT_14c9a5298;
          uStack_774 = DAT_14c9a52a0;
          uStack_77c = SUB84(DAT_14c9a5298,0);
          uStack_778 = (undefined2)((ulonglong)DAT_14c9a5298 >> 0x20);
          sStack_776 = (short)((ulonglong)DAT_14c9a5298 >> 0x30);
          local_768 = DAT_14c9a52a0;
          local_770 = DAT_14c9a5298;
          local_764 = 0;
          local_75c = 1;
          uStack_754 = 0x100000000;
          local_760 = (int)(short)uVar18;
          FUN_1400e8d41(local_6f8,uVar12,plVar4);
        }
        iVar19 = local_7b0;
        if (local_728 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        uVar3 = uVar3 + 1;
        iVar10 = local_7ac - iVar19;
      } while (uVar3 != local_7dc);
    }
  }
  FUN_140779360(local_6f8);
  FUN_140778010(local_6f8);
  if ((local_80 ^ (ulonglong)auStack_808) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14324a572 FUN_14324a572 body=177 status=ok
// SIG undefined FUN_14324a572(void)

void FUN_14324a572(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_41;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  FUN_145e6028c();
  FUN_1448e935e(uVar1,local_40,&DAT_14caa2108,0);
  FUN_145e6028c();
  local_58 = param_2;
  local_50 = param_3;
  FUN_147459d1c(param_1,uVar1,&local_41,local_40);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14324a624 FUN_14324a624 body=1418 status=ok
// SIG undefined FUN_14324a624(void)

void FUN_14324a624(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar7 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar7 = uStack_160;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_158,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar7,(longlong)(int)local_158);
  }
  puVar12[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar12 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_150;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_108,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar7,(longlong)iStack_108 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar12 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_f4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x200);
  iVar2 = *(int *)(param_1 + 0x1e4);
  lVar8 = *(longlong *)(param_1 + 0x1f8);
  iVar3 = *(int *)(param_1 + 0x1e0);
  lVar9 = *(longlong *)(param_1 + 0x1f0);
  iVar4 = *(int *)(param_1 + 0x1dc);
  lVar11 = *(longlong *)(param_1 + 0x1e8);
  iVar5 = *(int *)(param_1 + 0x1d8);
  local_180 = *(undefined8 *)(param_1 + 0x1b8);
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar5;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar3;
  *(float *)(puVar12 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_178 = *(undefined8 *)(param_1 + 0x1c8);
  local_170 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,uVar6,&local_178,&local_168);
  if (lVar11 == 0) {
    lVar11 = local_138;
  }
  if (lVar9 == 0) {
    lVar9 = lStack_130;
  }
  if (lVar8 == 0) {
    lVar8 = local_128;
  }
  local_138 = lVar11;
  lStack_130 = lVar9;
  local_128 = lVar8;
  lVar8 = FUN_140028f18(param_2,&local_168);
  if ((lVar8 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar8;
    *(undefined4 *)(puVar12 + 3) = uVar1;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar11 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar8,lVar11,1);
    }
  }
  FUN_145e604fa();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14caa2448);
  uVar6 = DAT_14ca89240;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = uVar6;
  *(undefined4 *)(puVar12 + 4) = 0;
  uVar6 = DAT_14ca89258;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 6;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x38);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 6;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb5b0;
  puVar12[2] = uVar6;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
  *(undefined4 *)(puVar12 + 4) = 3;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 6;
  puVar12[5] = &DAT_100000001;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14324abc0 FUN_14324abc0 body=29 status=ok
// SIG undefined FUN_14324abc0(void)

void FUN_14324abc0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14324abde FUN_14324abde body=69 status=ok
// SIG undefined FUN_14324abde(void)

undefined8 * FUN_14324abde(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a3c1300;
  FUN_147459391(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14324ac4a FUN_14324ac4a body=282 status=ok
// SIG undefined FUN_14324ac4a(void)

undefined8 * FUN_14324ac4a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14324ac23);
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



// FUNCTION 14324ad64 FUN_14324ad64 body=117 status=ok
// SIG undefined FUN_14324ad64(void)

void FUN_14324ad64(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143249a1c(param_1 + 0x15,&DAT_14ca85100);
  FUN_147459391(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014324adcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14324adec FUN_14324adec body=12 status=ok
// SIG undefined FUN_14324adec(void)

void FUN_14324adec(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014324adf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14324adf8 FUN_14324adf8 body=29 status=ok
// SIG undefined FUN_14324adf8(void)

undefined8 FUN_14324adf8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14324ae16 FUN_14324ae16 body=282 status=ok
// SIG undefined FUN_14324ae16(void)

undefined8 * FUN_14324ae16(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14324ac23);
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



// FUNCTION 14324af30 FUN_14324af30 body=94 status=ok
// SIG undefined FUN_14324af30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14324af30(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_147455174(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_147455174(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014324af84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14324af8e FUN_14324af8e body=59 status=ok
// SIG undefined FUN_14324af8e(void)

void FUN_14324af8e(longlong *param_1)

{
  longlong lVar1;
  
  if ((char)param_1[1] == '\x01') {
    FUN_147455174(*param_1);
  }
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  FUN_14745aa24(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 14324afd4 FUN_14324afd4 body=12 status=ok
// SIG undefined FUN_14324afd4(void)

void FUN_14324afd4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014324afdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14324afe0 FUN_14324afe0 body=29 status=ok
// SIG undefined FUN_14324afe0(void)

undefined8 FUN_14324afe0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14324affe FUN_14324affe body=282 status=ok
// SIG undefined FUN_14324affe(void)

undefined8 * FUN_14324affe(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14324ac23);
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



// FUNCTION 14324b118 FUN_14324b118 body=119 status=ok
// SIG undefined FUN_14324b118(void)

ulonglong FUN_14324b118(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    uVar3 = FUN_147455174(param_1[0x15]);
  }
  lVar2 = param_1[0x15];
  if (lVar2 != 0) {
    FUN_14745aa24(lVar2);
    uVar3 = FUN_1400020a8(lVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014324b164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 14324b190 FUN_14324b190 body=40 status=ok
// SIG undefined FUN_14324b190(void)

void FUN_14324b190(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  FUN_14745aa24(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 14324b1c2 FUN_14324b1c2 body=12 status=ok
// SIG undefined FUN_14324b1c2(void)

void FUN_14324b1c2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014324b1cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14324b1ce FUN_14324b1ce body=29 status=ok
// SIG undefined FUN_14324b1ce(void)

undefined8 FUN_14324b1ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14324b1ec FUN_14324b1ec body=282 status=ok
// SIG undefined FUN_14324b1ec(void)

undefined8 * FUN_14324b1ec(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14324ac23);
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



// FUNCTION 14324b306 FUN_14324b306 body=96 status=ok
// SIG undefined FUN_14324b306(void)

ulonglong FUN_14324b306(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  lVar2 = param_1[0x15];
  if (lVar2 != 0) {
    FUN_14745aa24(lVar2);
    uVar3 = FUN_1400020a8(lVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014324b349. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 14324b378 FUN_14324b378 body=69 status=ok
// SIG undefined FUN_14324b378(void)

void FUN_14324b378(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *param_1;
  puVar3 = *(undefined8 **)(lVar2 + 0x6c8);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(lVar2 + 0x6c8) = 0;
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(undefined8 *)(lVar2 + 0x658) = 0;
  *(undefined8 *)(lVar2 + 0x660) = 0;
  FUN_1406cc378(lVar2);
  return;
}



// FUNCTION 14324b3be FUN_14324b3be body=99 status=ok
// SIG undefined FUN_14324b3be(void)

void FUN_14324b3be(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    *param_1 = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[1] = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014324b41e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 14324b438 FUN_14324b438 body=105 status=ok
// SIG undefined FUN_14324b438(void)

undefined8 * FUN_14324b438(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14a3c1500;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14324b4a1 FUN_14324b4a1 body=1633 status=ok
// SIG undefined FUN_14324b4a1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14324b4a1(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_54;
  char *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3be510,1,0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_50,&DAT_14caa1de0);
  if (cVar2 == '\0') {
    _DAT_14caa1de0 = 0;
    uRam000000014caa1de8 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_50 = "SMInstance";
  local_48 = (code *)CONCAT35(local_48._5_3_,10);
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14caa1df0 = (ulonglong)uVar3;
  local_50 = (char *)0x0;
  local_48 = (code *)((ulonglong)local_48 & 0xffffffff00000000);
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_50 + 0x10) = lVar4;
  *(undefined ***)local_50 = &PTR_FUN_149e062c0;
  *(code **)(local_50 + 0x18) = FUN_1432434a0;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14caa1df8,L"ls.PrintNumLandscapeShadows",
                L"Prints the number of landscape components that cast shadows.",&local_50);
  if ((int)local_48 == 0) {
LAB_14324b629:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
    goto LAB_14324b629;
  }
  atexit(FUN_143243543);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14caa1e10,L"landscape.RenderCaptureNextMergeRenders",&DAT_14caa1e08,
                L"Trigger a render capture during the next N RenderHeightmap/RenderWeightmap(s) draws"
               );
  atexit(FUN_143243588);
  local_78 = CONCAT44(local_78._4_4_,0x60);
  FUN_141471170(&DAT_14caa1e20,L"landscape.RenderNanite",&DAT_14c760e74,
                L"Render Landscape using Nanite.");
  atexit(FUN_1432435cd);
  local_50 = (char *)0x0;
  local_48._0_4_ = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_50 + 0x10) = lVar4;
  *(undefined ***)local_50 = &PTR_FUN_149e062c0;
  *(code **)(local_50 + 0x18) = FUN_143243a07;
  FUN_141253d16(&DAT_14caa1e38,&local_50);
  if ((int)local_48 == 0) {
LAB_14324b755:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
    goto LAB_14324b755;
  }
  local_48 = FUN_145e98e5a;
  local_50 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa1f68,&local_50);
  local_48 = FUN_145f0a378;
  local_50 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa2090,&local_50);
  local_48 = FUN_145e6028c;
  local_50 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa21b8,&local_50);
  FUN_1446f470e(&DAT_14caa21e0,L"GetBlueprintRenderDependencies",1);
  FUN_1446f470e(&DAT_14caa21f0,L"Initialize",1);
  FUN_1446f470e(&DAT_14caa2200,L"Render",1);
  FUN_1446f470e(&DAT_14caa2210,L"RenderLayer",1);
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Landscape",&PTR_FUN_14a3bfdb0,1,&PTR_FUN_14a3bfd80);
  local_50 = (char *)0x0;
  local_48 = (code *)((ulonglong)local_48 & 0xffffffff00000000);
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_50 + 0x10) = lVar4;
  *(undefined ***)local_50 = &PTR_FUN_149e17030;
  *(code **)(local_50 + 0x18) = FUN_143247a4f;
  local_54 = 1;
  local_78 = CONCAT44(local_78._4_4_,0x20);
  FUN_14078dbce(&DAT_14caa2240,L"landscape.CollisionMesh.Show",&local_54,
                L"Selects which heightfield to visualize when ShowFlags.Collision is used. 0 to disable, 1 for simple, 2 for complex, 3 for editor only."
               );
  (**(code **)(*DAT_14caa2248 + 200))(DAT_14caa2248,&local_50);
  if ((int)local_48 != 0) {
    if (local_50 == (char *)0x0) goto LAB_14324b95d;
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_14324b95d:
  atexit(FUN_143247b9b);
  local_50 = (char *)((ulonglong)local_50 & 0xffffffff00000000);
  local_78._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14caa2258,L"landscape.CollisionMesh.HeightOffset",&local_50,
                L"Offsets the collision mesh wireframe to assist in viewing from distances where the lower landscape lods might hide it."
               );
  atexit(FUN_143247be0);
  local_50 = (char *)((ulonglong)local_50 & 0xffffffffffffff00);
  local_78._0_4_ = 0x20;
  FUN_140bd5914(&DAT_14caa2270,L"landscape.CollisionMesh.ShowPhysicalMaterial",&local_50,
                L"When enabled, vertex colors of the collision mesh are chosen based on the physical material"
               );
  atexit(FUN_143247c25);
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  FUN_14632447a(&DAT_14caa2288,L"landscape.AllowPhysicsStripping",1,
                L"Enables the conditional stripping of physics data during cook.  Disabling this means the bStripPhysicsWhenCooked* will be ignored."
               );
  atexit(FUN_143247c6a);
  DAT_14caa22b8 = 0;
  DAT_14caa22c0 = 0;
  DAT_14caa2298 = 0;
  _DAT_14caa22a0 = 0;
  _DAT_14caa22c4 = 0xffffffff00000080;
  DAT_14caa22cc = 0;
  DAT_14caa22d8 = 0;
  DAT_14caa22e0 = 0;
  atexit(FUN_143247caf);
  DAT_14caa2308 = 0;
  DAT_14caa2310 = 0;
  DAT_14caa22e8 = 0;
  _DAT_14caa22f0 = 0;
  _DAT_14caa2314 = 0xffffffff00000080;
  DAT_14caa231c = 0;
  DAT_14caa2328 = 0;
  DAT_14caa2330 = 0;
  atexit(FUN_143247cd8);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14324bb04 FUN_14324bb04 body=55 status=ok
// SIG undefined FUN_14324bb04(void)

void FUN_14324bb04(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa2590 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa2590 = FUN_14171c317(FUN_146324835,uVar1,L"ELandscapeResizeMode");
  }
  return;
}



// FUNCTION 14324bb3b FUN_14324bb3b body=69 status=ok
// SIG undefined FUN_14324bb3b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14324bb3b(void)

{
  _DAT_14caa25a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014324bb7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa25a8,1);
  return;
}



// FUNCTION 14324bb80 FUN_14324bb80 body=69 status=ok
// SIG undefined FUN_14324bb80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14324bb80(void)

{
  _DAT_14caa25b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014324bbc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa25c0,1);
  return;
}



// FUNCTION 14324bbc5 FUN_14324bbc5 body=69 status=ok
// SIG undefined FUN_14324bbc5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14324bbc5(void)

{
  _DAT_14caa25d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014324bc07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa25d8,1);
  return;
}



// FUNCTION 14324bc0a FUN_14324bc0a body=116 status=ok
// SIG undefined FUN_14324bc0a(void)

void FUN_14324bc0a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
    FUN_14738ac8a(param_2,iVar1);
  }
  *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x400060000;
  iVar1 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
    FUN_14738ac8a(param_2,iVar1);
  }
  *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x1000401060001;
  return;
}



// FUNCTION 14324bc8f FUN_14324bc8f body=184 status=ok
// SIG undefined FUN_14324bc8f(void)

void FUN_14324bc8f(char param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  if (param_1 == '\x03') {
    FUN_143267c10(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11)
    ;
  }
  else if (param_1 == '\0') {
    FUN_1432675a8(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11)
    ;
  }
  return;
}



// FUNCTION 14324bd5e FUN_14324bd5e body=46 status=ok
// SIG undefined FUN_14324bd5e(void)

undefined4 * FUN_14324bd5e(char param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 == '\x03') || (param_1 == '\0')) {
    puVar1 = (undefined4 *)FUN_14001cc68(4,0x10);
    *puVar1 = 0;
  }
  else {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}



// FUNCTION 14324bda9 FUN_14324bda9 body=8 status=ok
// SIG undefined FUN_14324bda9(void)

undefined * FUN_14324bda9(void)

{
  return &DAT_14caa2608;
}



// FUNCTION 14324bdc2 FUN_14324bdc2 body=6895 status=ok
// SIG undefined FUN_14324bdc2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14324bdc2(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
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
  double dVar13;
  double dVar14;
  double dVar15;
  char cVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  size_t _Size;
  longlong lVar19;
  void *_Src;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined4 uVar23;
  undefined8 *puVar24;
  longlong lVar25;
  undefined8 uVar26;
  int *piVar27;
  longlong *plVar28;
  float *pfVar29;
  void *pvVar30;
  longlong *plVar31;
  longlong *plVar32;
  uint uVar33;
  double *pdVar34;
  int iVar35;
  undefined8 *puVar36;
  longlong lVar37;
  ulonglong *puVar38;
  longlong lVar39;
  ulonglong uVar40;
  undefined8 *puVar41;
  void *_Dst;
  int iVar42;
  longlong lVar43;
  ulonglong uVar44;
  undefined8 *puVar45;
  int iVar46;
  longlong lVar47;
  bool bVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  double dVar58;
  undefined1 auVar59 [16];
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auStack_3688 [32];
  int *local_3668;
  ulonglong local_3660;
  undefined1 local_3658;
  longlong local_3650;
  longlong local_3648;
  longlong local_3640;
  longlong *local_3638;
  longlong *local_3630;
  undefined8 *local_3628;
  ulonglong *local_3620;
  longlong local_3618;
  longlong *local_3610;
  undefined8 *local_3608;
  undefined8 *local_3600;
  longlong local_35f8;
  longlong local_35f0;
  ulonglong local_35e8;
  ulonglong *local_35e0;
  int local_35d4;
  longlong local_35d0;
  longlong *local_35c8;
  longlong local_35c0;
  ulonglong local_35b8;
  double *local_35b0;
  longlong *local_35a8;
  undefined8 *local_35a0;
  undefined8 local_3598;
  ulonglong local_3590;
  ulonglong local_3588;
  longlong local_3580;
  void *local_3578;
  double dStack_3570;
  double local_3568;
  int local_3560;
  int iStack_355c;
  undefined4 uStack_3558;
  undefined4 uStack_3554;
  undefined4 uStack_3550;
  undefined4 uStack_354c;
  double local_3538;
  int local_3524;
  int local_3520;
  int local_351c;
  int *local_3518;
  int local_350c;
  int local_3508 [384];
  int *local_2f08;
  ulonglong local_2ef8;
  int *local_688;
  undefined8 local_678;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 *local_628;
  undefined8 local_620;
  int local_618 [24];
  double local_5b8;
  double local_5b0;
  double local_5a8;
  int *local_118;
  ulonglong local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3688;
  if ((DAT_14caa27e0 != 0) && (*(int *)(DAT_14caa25c8 + 4) != 0)) {
    lVar39 = *param_2;
    lVar43 = (longlong)(int)param_2[1];
    local_2f08 = (int *)0x0;
    local_2ef8 = 0x1000000000;
    local_3650 = param_1;
    if (0 < lVar43) {
      lVar47 = 0;
      local_3640 = lVar39;
      local_3618 = lVar43;
      local_3610 = param_2;
      do {
        lVar25 = *(longlong *)(lVar39 + lVar47 * 8);
        lVar37 = (longlong)(int)DAT_14caa2800;
        DAT_14caa2800 = DAT_14caa2800 + 1;
        if (DAT_14caa2804 < DAT_14caa2800) {
          FUN_14745ceae(&DAT_14caa27e8);
        }
        puVar24 = DAT_14caa27f8;
        if (DAT_14caa27f8 == (undefined8 *)0x0) {
          puVar24 = &DAT_14caa27e8;
        }
        puVar24[lVar37] = lVar25;
        if (0 < DAT_14caa27e0) {
          lVar37 = 0;
          local_3648 = lVar25;
          do {
            lVar25 = local_3648;
            puVar24 = (undefined8 *)FUN_14745ce0e(DAT_14caa27d8 + lVar37 * 0x150 + 0x10);
            *puVar24 = 0;
            lVar25 = FUN_14746bd5e(*(undefined8 *)(*(longlong *)(lVar25 + 8) + 0x40));
            if (lVar25 != 0) {
              local_3628 = puVar24;
              local_35f8 = lVar47;
              local_3638 = (longlong *)FUN_14746bc08(lVar25);
              iVar22 = (int)local_3638[2];
              if (0 < iVar22) {
                puVar38 = (ulonglong *)(local_3638 + 1);
                local_3608 = local_3628 + 1;
                lVar39 = 0;
                local_35e0 = puVar38;
                do {
                  uVar40 = *puVar38;
                  uVar44 = ((longlong)uVar40 >> 0x18) + (longlong)puVar38;
                  if ((uVar40 & 1) == 0) {
                    uVar44 = uVar40;
                  }
                  if (((int)*(float *)(uVar44 + lVar39 * 4) == 0) &&
                     (plVar28 = *(longlong **)(*(longlong *)(lVar25 + 0x38) + lVar39 * 8),
                     plVar28 != (longlong *)0x0)) {
                    local_3600 = (undefined8 *)FUN_14745ce60(local_3508);
                    (**(code **)(*plVar28 + 0x30))(plVar28,&local_3560,local_618);
                    dVar58 = local_5b8 * 1.52587890625e-05;
                    dVar60 = local_5b0 * 1.52587890625e-05;
                    dVar57 = local_5a8 * 1.52587890625e-05;
                    lVar43 = plVar28[4];
                    local_3630 = plVar28;
                    if ((*(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x110) < DAT_14caa28f0) &&
                       (FUN_144b3d300(&DAT_14caa28f0), DAT_14caa28f0 == -1)) {
                      _DAT_14caa28d0 = 1;
                      _DAT_14caa28d8 = 0xffffffff;
                      _DAT_14caa28e0 = 0x100000000;
                      uRam000000014caa28e8 = 0xffffffff00000000;
                      _Init_thread_footer(&DAT_14caa28f0);
                    }
                    plVar28 = local_3630;
                    auVar59._0_8_ = dVar58 + 0.5;
                    auVar59._8_8_ = 0;
                    auVar50._8_8_ = 0;
                    auVar50._0_8_ = auVar59._0_8_;
                    auVar59 = roundpd(auVar59,auVar50,1);
                    local_3578 = (void *)(auVar59._0_8_ * 65536.0);
                    auVar61._0_8_ = dVar60 + 0.5;
                    auVar61._8_8_ = 0;
                    auVar53._8_8_ = 0;
                    auVar53._0_8_ = auVar61._0_8_;
                    auVar53 = roundpd(auVar61,auVar53,1);
                    dStack_3570 = auVar53._0_8_ * 65536.0;
                    auVar54._0_8_ = dVar57 + 0.5;
                    auVar54._8_8_ = 0;
                    auVar56._8_8_ = 0;
                    auVar56._0_8_ = auVar54._0_8_;
                    auVar50 = roundpd(auVar54,auVar56,1);
                    iVar22 = *(int *)(lVar25 + 4);
                    uVar40 = local_3638[1];
                    uVar44 = ((longlong)uVar40 >> 0x18) + (longlong)local_35e0;
                    if ((uVar40 & 1) == 0) {
                      uVar44 = uVar40;
                    }
                    auVar56 = ZEXT816(0);
                    lVar47 = 0;
                    do {
                      iVar42 = (&DAT_14caa28d0)[lVar47 * 2] + (int)lVar43;
                      if ((iVar22 <= iVar42) && (iVar42 < *(int *)(lVar25 + 0xc) + iVar22)) {
                        iVar35 = (&DAT_14caa28d4)[lVar47 * 2] + (int)((ulonglong)lVar43 >> 0x20);
                        iVar46 = *(int *)(lVar25 + 8);
                        if ((iVar46 <= iVar35) &&
                           (((iVar35 < iVar46 + *(int *)(lVar25 + 0x10) &&
                             (uVar20 = (iVar35 - iVar46) * *(int *)(lVar25 + 0xc) +
                                       (iVar42 - iVar22), -1 < (int)uVar20)) &&
                            ((int)uVar20 < (int)local_3638[2])))) {
                          fVar51 = *(float *)(uVar44 + (ulonglong)uVar20 * 4);
                          if (fVar51 <= auVar56._0_4_) {
                            fVar51 = auVar56._0_4_;
                          }
                          auVar56 = ZEXT416((uint)fVar51);
                        }
                      }
                      lVar47 = lVar47 + 1;
                    } while (lVar47 != 4);
                    auVar54 = blendps(auVar56,ZEXT816(0),0xe);
                    if (0.0 <= auVar56._0_4_) {
                      auVar56 = roundps(auVar54,auVar54,2);
                      fVar51 = auVar56._0_4_;
                    }
                    else {
                      auVar56 = roundps(auVar54,auVar54,1);
                      fVar51 = auVar56._0_4_;
                    }
                    local_3568 = auVar50._0_8_ * 65536.0;
                    FUN_14681244e(&local_668,&local_3578,local_618);
                    local_3600[6] = local_638;
                    local_3600[7] = uStack_630;
                    local_3600[4] = local_648;
                    local_3600[5] = uStack_640;
                    local_3600[2] = local_658;
                    local_3600[3] = uStack_650;
                    *local_3600 = local_668;
                    local_3600[1] = uStack_660;
                    *(float *)(local_3600 + 8) = (float)auVar59._0_8_;
                    *(float *)((longlong)local_3600 + 0x44) = (float)auVar53._0_8_;
                    *(float *)(local_3600 + 9) = (float)auVar50._0_8_;
                    *(float *)((longlong)local_3600 + 0x4c) =
                         (float)(double)CONCAT44(uStack_354c,uStack_3550);
                    fVar51 = (float)~(-1 << ((byte)(int)fVar51 & 0x1f));
                    *(float *)(local_3600 + 10) = (float)local_3538;
                    if (fVar51 <= 1.0) {
                      fVar51 = 1.0;
                    }
                    *(float *)((longlong)local_3600 + 0x54) = fVar51;
                    iVar22 = *(int *)(local_3628 + 10);
                    uVar20 = iVar22 + 1;
                    *(uint *)(local_3628 + 10) = uVar20;
                    if (*(uint *)((longlong)local_3628 + 0x54) < uVar20) {
                      FUN_14745d0fa(local_3608);
                    }
                    puVar24 = (undefined8 *)local_3628[9];
                    if ((undefined8 *)local_3628[9] == (undefined8 *)0x0) {
                      puVar24 = local_3608;
                    }
                    puVar24[iVar22] = plVar28[4];
                    iVar22 = (int)local_3638[2];
                    puVar38 = local_35e0;
                  }
                  lVar39 = lVar39 + 1;
                } while (lVar39 < iVar22);
              }
              lVar47 = local_35f8;
              lVar43 = local_3618;
              puVar24 = local_3628;
              lVar39 = local_3640;
              if ((int)local_2ef8 != 0) {
                local_3660 = (ulonglong)(uint)((int)local_2ef8 * 0x60);
                local_3668 = local_2f08;
                if (local_2f08 == (int *)0x0) {
                  local_3668 = local_3508;
                }
                local_3658 = 0;
                uVar26 = FUN_144942e63(local_3650);
                *puVar24 = uVar26;
                bVar48 = (longlong)local_2ef8 < 0;
                local_2ef8 = local_2ef8 & 0xffffffff00000000;
                if (bVar48) {
                  FUN_14745d1ee(local_3508);
                }
              }
            }
            lVar37 = lVar37 + 1;
          } while (lVar37 < DAT_14caa27e0);
        }
        param_2 = local_3610;
        lVar47 = lVar47 + 1;
      } while (lVar47 != lVar43);
      if (local_2f08 != (int *)0x0) {
        FUN_1400020a8();
      }
    }
    local_688 = (int *)0x0;
    local_678 = 0x400000000;
    plVar28 = (longlong *)*param_2;
    lVar39 = param_2[1];
    if ((longlong)(int)lVar39 == 0) {
      uVar40 = 0;
    }
    else {
      lVar43 = 0;
      do {
        uVar40 = local_678;
        lVar47 = *(longlong *)((longlong)plVar28 + lVar43);
        lVar25 = (longlong)(int)local_678;
        uVar20 = (int)local_678 + 1;
        local_678 = CONCAT44(local_678._4_4_,uVar20);
        if (local_678._4_4_ < uVar20) {
          FUN_14745e3aa(local_3508,uVar40 & 0xffffffff);
        }
        piVar27 = local_688;
        if (local_688 == (int *)0x0) {
          piVar27 = local_3508;
        }
        memcpy(piVar27 + lVar25 * 0x2e8,(void *)(lVar47 + 0x500),0xba0);
        lVar43 = lVar43 + 8;
      } while ((longlong)(int)lVar39 * 8 != lVar43);
      uVar40 = (ulonglong)*(uint *)(param_2 + 1);
      plVar28 = (longlong *)*param_2;
    }
    piVar27 = local_3508;
    if (local_688 != (int *)0x0) {
      piVar27 = local_688;
    }
    if (0 < (int)DAT_14caa2800) {
      local_35d0 = local_3650 + 0x188;
      local_3620 = (ulonglong *)(local_3650 + 0x70);
      local_35c8 = (longlong *)(local_3650 + 0x588);
      local_35c0 = local_3650 + 0x98;
      local_35f0 = local_3650 + 0x198;
      local_35a8 = (longlong *)(local_3650 + 0x598);
      pdVar34 = (double *)(piVar27 + 0xcc);
      lVar39 = 0;
      local_3610 = plVar28;
      local_35e8 = uVar40;
      local_35b8 = uVar40;
      local_35b0 = pdVar34;
      do {
        puVar24 = DAT_14caa27f8;
        if (DAT_14caa27f8 == (undefined8 *)0x0) {
          puVar24 = &DAT_14caa27e8;
        }
        lVar43 = puVar24[lVar39];
        plVar28 = *(longlong **)(lVar43 + 0x10);
        uVar23 = 0;
        local_3618 = lVar39;
        if (plVar28 != (longlong *)0x0) {
          if (*(code **)(*plVar28 + 0x58) == (code *)&LAB_144b15db2) {
            uVar23 = (undefined4)plVar28[4];
          }
          else {
            uVar23 = (**(code **)(*plVar28 + 0x58))();
          }
        }
        local_118 = (int *)0x0;
        local_108 = 0x800000000;
        uVar20 = (uint)uVar40;
        if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(local_35e8);
        }
        local_35e0 = (ulonglong *)CONCAT44(local_35e0._4_4_,uVar23);
        if (uVar20 < 9) {
          local_628 = (undefined8 *)0x0;
          local_620 = 0x800000000;
          lVar39 = local_3618;
          if (uVar20 != 0) goto LAB_14324c5ed;
        }
        else {
          FUN_14745d478(local_618,uVar40 & 0xffffffff);
          local_628 = (undefined8 *)0x0;
          local_620 = 0x800000000;
          FUN_14745d572(&local_668);
LAB_14324c5ed:
          uVar44 = 0;
          plVar28 = local_3610;
          uVar40 = local_35e8;
          lVar39 = local_3618;
          do {
            lVar47 = plVar28[uVar44];
            if (lVar47 == lVar43) {
              lVar39 = (longlong)(int)local_620;
              uVar20 = (int)local_620 + 1;
              local_620 = CONCAT44(local_620._4_4_,uVar20);
              if (local_620._4_4_ < uVar20) {
                FUN_14745d640(&local_668);
              }
              puVar24 = local_628;
              if (local_628 == (undefined8 *)0x0) {
                puVar24 = &local_668;
              }
              puVar24[lVar39] = lVar47;
              pfVar29 = (float *)FUN_14745d24c(local_618);
              dVar57 = pdVar34[1];
              dVar58 = pdVar34[2];
              dVar60 = pdVar34[3];
              dVar1 = pdVar34[4];
              dVar2 = pdVar34[5];
              dVar3 = pdVar34[6];
              dVar4 = pdVar34[7];
              dVar5 = pdVar34[8];
              dVar6 = pdVar34[9];
              dVar7 = pdVar34[10];
              dVar8 = pdVar34[0xb];
              dVar9 = pdVar34[0xc];
              dVar10 = pdVar34[0xd];
              dVar11 = pdVar34[0x103];
              dVar12 = pdVar34[0xe];
              dVar13 = pdVar34[0x104];
              dVar14 = pdVar34[0xf];
              dVar15 = pdVar34[0x105];
              *pfVar29 = (float)*pdVar34;
              pfVar29[1] = (float)dVar57;
              pfVar29[2] = (float)dVar58;
              pfVar29[3] = (float)dVar60;
              pfVar29[4] = (float)dVar1;
              pfVar29[5] = (float)dVar2;
              pfVar29[6] = (float)dVar3;
              pfVar29[7] = (float)dVar4;
              pfVar29[8] = (float)dVar5;
              pfVar29[9] = (float)dVar6;
              pfVar29[10] = (float)dVar7;
              pfVar29[0xb] = (float)dVar8;
              pfVar29[0xc] = (float)dVar9;
              pfVar29[0xd] = (float)dVar10;
              pfVar29[0xe] = (float)dVar12;
              pfVar29[0xf] = (float)dVar14;
              local_3630 = (longlong *)CONCAT44(local_3630._4_4_,(float)pdVar34[0xc0]);
              dVar57 = pdVar34[0xc1];
              dVar58 = pdVar34[0xc2];
              dVar60 = pdVar34[0xc3];
              dVar1 = pdVar34[0xc4];
              dVar2 = pdVar34[0xc5];
              dVar3 = pdVar34[0xc6];
              dVar4 = pdVar34[199];
              dVar5 = pdVar34[200];
              dVar6 = pdVar34[0xc9];
              dVar7 = pdVar34[0xca];
              dVar8 = pdVar34[0xcb];
              dVar9 = pdVar34[0xcc];
              dVar10 = pdVar34[0xcd];
              local_3628 = (undefined8 *)CONCAT44(local_3628._4_4_,(float)dVar10);
              dVar12 = pdVar34[0xce];
              local_3638 = (longlong *)CONCAT44(local_3638._4_4_,(float)dVar12);
              dVar14 = pdVar34[0xcf];
              local_3648 = CONCAT44(local_3648._4_4_,(float)dVar14);
              pfVar29[0x10] = (float)pdVar34[0xc0];
              pfVar29[0x11] = (float)dVar57;
              pfVar29[0x12] = (float)dVar58;
              pfVar29[0x13] = (float)dVar60;
              pfVar29[0x14] = (float)dVar1;
              pfVar29[0x15] = (float)dVar2;
              pfVar29[0x16] = (float)dVar3;
              pfVar29[0x17] = (float)dVar4;
              pfVar29[0x18] = (float)dVar5;
              pfVar29[0x19] = (float)dVar6;
              pfVar29[0x1a] = (float)dVar7;
              pfVar29[0x1b] = (float)dVar8;
              pfVar29[0x1c] = (float)dVar9;
              auVar55._0_8_ = dVar11 * 1.52587890625e-05 + 0.5;
              auVar55._8_8_ = 0;
              auVar56 = roundpd(auVar55,auVar55,1);
              pfVar29[0x1d] = (float)dVar10;
              auVar52._0_8_ = dVar13 * 1.52587890625e-05 + 0.5;
              auVar52._8_8_ = 0;
              auVar53 = roundpd(auVar52,auVar52,1);
              auVar49._0_8_ = dVar15 * 1.52587890625e-05 + 0.5;
              auVar49._8_8_ = 0;
              auVar50 = roundpd(auVar49,auVar49,1);
              pfVar29[0x1e] = (float)dVar12;
              pfVar29[0x1f] = (float)dVar14;
              dVar57 = pdVar34[0x102];
              dVar58 = pdVar34[0x101];
              pfVar29[0x20] = (float)(auVar56._0_8_ * 65536.0 + pdVar34[0x100]);
              pfVar29[0x21] = (float)(auVar53._0_8_ * 65536.0 + dVar58);
              pfVar29[0x22] = (float)(auVar50._0_8_ * 65536.0 + dVar57);
              pfVar29[0x24] = (float)auVar56._0_8_;
              pfVar29[0x25] = (float)auVar53._0_8_;
              pfVar29[0x26] = (float)auVar50._0_8_;
              plVar28 = local_3610;
              uVar40 = local_35e8;
              lVar39 = local_3618;
            }
            uVar44 = uVar44 + 1;
            pdVar34 = pdVar34 + 0x174;
          } while (uVar40 != uVar44);
        }
        if (0 < DAT_14caa27e0) {
          lVar43 = 0;
          lVar47 = 0;
          iVar22 = DAT_14caa27e0;
          do {
            lVar19 = DAT_14caa27d8;
            lVar25 = lVar43 * 0x150 + DAT_14caa27d8;
            lVar37 = *(longlong *)(lVar25 + 0xc0);
            if (lVar37 == 0) {
              lVar37 = lVar25 + 0x10;
            }
            iVar42 = (int)local_108;
            uVar20 = *(uint *)(lVar37 + 0x50 + lVar39 * 0x58);
            iVar46 = uVar20 * (int)local_108;
            if (iVar46 != 0) {
              local_3578 = (void *)0x0;
              dStack_3570 = 0.0;
              iStack_355c = 0;
              uStack_3558 = 0;
              uStack_3554 = 0;
              uStack_3550 = 0;
              local_3560 = 0x60;
              local_3640 = lVar47;
              local_3630 = (longlong *)(ulonglong)uVar20;
              local_3600 = (undefined8 *)(lVar39 * 0x58);
              local_3580 = lVar43;
              FUN_14745d29a(&local_3578,&local_3560,iVar46);
              puVar38 = local_3620;
              uVar20 = 4;
              if (DAT_14ca84e48 < 4) {
                uVar20 = DAT_14ca84e48;
              }
              local_3560 = uVar20 + (uVar20 == 0);
              uStack_3558 = 0x4189;
              uVar20 = DAT_14ca84e48;
              if ((uint)(dStack_3570._0_4_ * 5) < DAT_14ca84e48) {
                uVar20 = dStack_3570._0_4_ * 5;
              }
              uStack_3550 = 0;
              uStack_354c = 0;
              iStack_355c = uVar20 + (uVar20 == 0);
              puVar36 = (undefined8 *)(*(longlong *)(local_3650 + 0x70) + 0xfU & 0xfffffffffffffff0)
              ;
              puVar24 = puVar36 + 0x2a;
              if (*(undefined8 **)(local_3650 + 0x78) < puVar24) {
                FUN_140023dd8(local_3620,0x160);
                puVar36 = (undefined8 *)(*puVar38 + 0xf & 0xfffffffffffffff0);
                puVar24 = puVar36 + 0x2a;
              }
              *(undefined8 **)(local_3650 + 0x70) = puVar24;
              FUN_1456bd266(puVar36,L"LandscapeCulling.DrawIndirectArgsBuffer",&local_3560,0);
              iVar22 = *(int *)(local_3650 + 400);
              *(uint *)(local_3650 + 400) = iVar22 + 1U;
              if (*(uint *)(local_3650 + 0x194) < iVar22 + 1U) {
                FUN_144737178(local_35d0,iVar22);
              }
              puVar38 = local_3620;
              local_3648 = lVar19 + lVar43 * 0x150;
              *(undefined8 **)(*(longlong *)(local_3650 + 0x188) + (longlong)iVar22 * 8) = puVar36;
              *(int *)((longlong)puVar36 + 0x7c) = *(int *)(local_3650 + 400) + -1;
              local_35d4 = *(int *)(local_3648 + 8);
              uVar21 = *(int *)(local_3648 + 0xc) + 3U >> 2;
              local_35f8 = CONCAT44(local_35f8._4_4_,uVar21);
              uVar21 = uVar21 * local_35d4;
              local_3590 = (ulonglong)uVar21;
              uVar20 = uVar21 * uVar21 * iVar46 & 0x3fffffff;
              uVar33 = 4;
              if (DAT_14ca84e48 < 4) {
                uVar33 = DAT_14ca84e48;
              }
              local_3560 = uVar33 + (uVar33 == 0);
              uStack_3558 = 0x14119;
              if (DAT_14ca84e48 <= uVar20) {
                uVar20 = DAT_14ca84e48;
              }
              uStack_3550 = 0;
              uStack_354c = 0;
              iStack_355c = uVar20 + (uVar20 == 0);
              uVar44 = *(longlong *)(local_3650 + 0x70) + 0xfU & 0xfffffffffffffff0;
              uVar40 = uVar44 + 0x150;
              local_3608 = puVar36;
              if (*(ulonglong *)(local_3650 + 0x78) < uVar40) {
                FUN_140023dd8(local_3620,0x160);
                uVar44 = *puVar38 + 0xf & 0xfffffffffffffff0;
                uVar40 = uVar44 + 0x150;
              }
              local_3628 = (undefined8 *)CONCAT44(local_3628._4_4_,uVar21 * uVar21);
              *(ulonglong *)(local_3650 + 0x70) = uVar40;
              FUN_1456bd266(uVar44,L"LandscapeCulling.CulledTileDataBuffer",&local_3560,0);
              iVar22 = *(int *)(local_3650 + 400);
              *(uint *)(local_3650 + 400) = iVar22 + 1U;
              if (*(uint *)(local_3650 + 0x194) < iVar22 + 1U) {
                FUN_144737178(local_35d0,iVar22);
              }
              _Src = local_3578;
              puVar38 = local_3620;
              *(ulonglong *)(*(longlong *)(local_3650 + 0x188) + (longlong)iVar22 * 8) = uVar44;
              *(int *)(uVar44 + 0x7c) = *(int *)(local_3650 + 400) + -1;
              _Size = (longlong)dStack_3570._0_4_ * 0x14;
              _Dst = local_3578;
              if ((longlong)dStack_3570._0_4_ != 0) {
                _Dst = (void *)(*(longlong *)(local_3650 + 0x70) + 0xfU & 0xfffffffffffffff0);
                pvVar30 = (void *)(_Size + (longlong)_Dst);
                if (*(void **)(local_3650 + 0x78) < pvVar30) {
                  FUN_140023dd8(local_3620,(int)_Size + 0x10);
                  _Dst = (void *)(*puVar38 + 0xf & 0xfffffffffffffff0);
                  pvVar30 = (void *)(_Size + (longlong)_Dst);
                }
                *local_3620 = (ulonglong)pvVar30;
                memcpy(_Dst,_Src,_Size);
              }
              iVar22 = *(int *)(local_3650 + 0x590);
              uVar20 = iVar22 + 1;
              *(uint *)(local_3650 + 0x590) = uVar20;
              if (*(uint *)(local_3650 + 0x594) < uVar20) {
                FUN_144775ac8(local_35c8);
              }
              puVar24 = local_3608;
              lVar39 = *local_35c8;
              lVar43 = (longlong)iVar22 * 0x120;
              *(undefined2 *)(lVar39 + lVar43) = 0;
              *(undefined8 **)(lVar39 + 8 + lVar43) = local_3608;
              *(void **)(lVar39 + 0x10 + lVar43) = _Dst;
              *(size_t *)(lVar39 + 0x18 + lVar43) = _Size;
              *(undefined8 *)(lVar39 + 0x20 + lVar43) = 0;
              *(undefined8 *)(lVar39 + 0x30 + lVar43) = 0;
              *(undefined8 *)(lVar39 + 0x60 + lVar43) = 0;
              *(undefined8 *)(lVar39 + 0x70 + lVar43) = 0;
              *(undefined8 *)(lVar39 + 0xa0 + lVar43) = 0;
              *(undefined8 *)(lVar39 + 0xb0 + lVar43) = 0;
              *(undefined8 *)(lVar39 + 0xe0 + lVar43) = 0;
              *(undefined8 *)(lVar39 + 0xf0 + lVar43) = 0;
              *(byte *)((longlong)local_3608 + 0x24) = *(byte *)((longlong)local_3608 + 0x24) | 0x80
              ;
              if (local_3640 == 0) {
                uVar40 = local_108 & 0xffffffff;
                if ((int)local_108 == 0) {
                  local_3668 = (int *)&DAT_14a3c2c80;
                  local_3658 = 1;
                  local_3660 = 0xa0;
                  uVar40 = 1;
                }
                else {
                  local_3660 = (ulonglong)(uint)((int)local_108 * 0xa0);
                  local_3668 = local_118;
                  if (local_118 == (int *)0x0) {
                    local_3668 = local_618;
                  }
                  local_3658 = 0;
                }
                local_3640 = FUN_144942e63(local_3650,L"LandscapeCulling.ViewsData",0xa0,uVar40);
              }
              puVar38 = local_3620;
              local_3598 = *(undefined8 *)
                            (&DAT_14ca8c1f0 +
                            (ulonglong)
                            *(ushort *)
                             (&DAT_14ca85070 + (longlong)*(int *)(*local_3610 + 0x3090) * 2) * 8);
              puVar41 = (undefined8 *)(*(longlong *)(local_3650 + 0x70) + 0xfU & 0xfffffffffffffff0)
              ;
              puVar36 = puVar41 + 10;
              if (*(undefined8 **)(local_3650 + 0x78) < puVar36) {
                FUN_140023dd8(local_3620,0x60);
                puVar41 = (undefined8 *)(*puVar38 + 0xf & 0xfffffffffffffff0);
                puVar36 = puVar41 + 10;
              }
              *(undefined8 **)(local_3650 + 0x70) = puVar36;
              *puVar41 = &PTR_FUN_14a3c2d20;
              puVar41[2] = 0;
              puVar41[3] = 0;
              puVar41[4] = 0;
              puVar41[5] = 0;
              iVar22 = *(int *)(local_3650 + 0xa0);
              *(uint *)(local_3650 + 0xa0) = iVar22 + 1U;
              if (*(uint *)(local_3650 + 0xa4) < iVar22 + 1U) {
                FUN_1448cfae8(local_35c0,iVar22);
              }
              puVar38 = local_3620;
              *(undefined8 **)(*(longlong *)(local_3650 + 0x98) + (longlong)iVar22 * 8) = puVar41;
              cVar16 = *(char *)(puVar24 + 0xd);
              puVar45 = (undefined8 *)(*(longlong *)(local_3650 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar36 = puVar45 + 8;
              if (*(undefined8 **)(local_3650 + 0x78) < puVar36) {
                FUN_140023dd8(local_3620,0x48);
                puVar45 = (undefined8 *)(*puVar38 + 7 & 0xfffffffffffffff8);
                puVar36 = puVar45 + 8;
              }
              *(undefined8 **)(local_3650 + 0x70) = puVar36;
              puVar45[1] = puVar24[1];
              puVar45[2] = 0;
              *(undefined1 *)(puVar45 + 3) = 2;
              *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
              *(undefined1 *)(puVar45 + 5) = 0;
              *puVar45 = &PTR_FUN_14a1fb3e8;
              *(byte *)(puVar45 + 6) = cVar16 >> 7 & 0x1c;
              *(undefined2 *)((longlong)puVar45 + 0x31) = 0;
              puVar45[7] = puVar24;
              iVar22 = *(int *)(local_3650 + 0x1a0);
              *(uint *)(local_3650 + 0x1a0) = iVar22 + 1U;
              if (*(uint *)(local_3650 + 0x1a4) < iVar22 + 1U) {
                FUN_1447568fc(local_35f0,iVar22);
              }
              puVar38 = local_3620;
              local_35a0 = puVar41 + 2;
              *(undefined8 **)(*(longlong *)(local_3650 + 0x198) + (longlong)iVar22 * 8) = puVar45;
              *(int *)((longlong)puVar45 + 0x1c) = *(int *)(local_3650 + 0x1a0) + -1;
              *local_35a0 = puVar45;
              cVar16 = *(char *)(uVar44 + 0x68);
              puVar45 = (undefined8 *)(*(longlong *)(local_3650 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar36 = puVar45 + 8;
              if (*(undefined8 **)(local_3650 + 0x78) < puVar36) {
                FUN_140023dd8(local_3620,0x48);
                puVar45 = (undefined8 *)(*puVar38 + 7 & 0xfffffffffffffff8);
                puVar36 = puVar45 + 8;
              }
              *(undefined8 **)(local_3650 + 0x70) = puVar36;
              puVar45[1] = *(undefined8 *)(uVar44 + 8);
              puVar45[2] = 0;
              *(undefined1 *)(puVar45 + 3) = 2;
              *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
              *(undefined1 *)(puVar45 + 5) = 0;
              *puVar45 = &PTR_FUN_14a1fb3e8;
              *(byte *)(puVar45 + 6) = cVar16 >> 7 & 0x1c;
              *(undefined2 *)((longlong)puVar45 + 0x31) = 0;
              puVar45[7] = uVar44;
              iVar22 = *(int *)(local_3650 + 0x1a0);
              *(uint *)(local_3650 + 0x1a0) = iVar22 + 1U;
              if (*(uint *)(local_3650 + 0x1a4) < iVar22 + 1U) {
                FUN_1447568fc(local_35f0,iVar22);
              }
              puVar38 = local_3620;
              *(undefined8 **)(*(longlong *)(local_3650 + 0x198) + (longlong)iVar22 * 8) = puVar45;
              *(int *)((longlong)puVar45 + 0x1c) = *(int *)(local_3650 + 0x1a0) + -1;
              puVar41[3] = puVar45;
              cVar16 = *(char *)(local_3640 + 0x68);
              puVar45 = (undefined8 *)(*(longlong *)(local_3650 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar36 = puVar45 + 9;
              if (*(undefined8 **)(local_3650 + 0x78) < puVar36) {
                FUN_140023dd8(local_3620,0x50);
                puVar45 = (undefined8 *)(*puVar38 + 7 & 0xfffffffffffffff8);
                puVar36 = puVar45 + 9;
              }
              *(undefined8 **)(local_3650 + 0x70) = puVar36;
              puVar45[1] = *(undefined8 *)(local_3640 + 8);
              puVar45[2] = 0;
              *(undefined1 *)(puVar45 + 3) = 3;
              *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
              *puVar45 = &PTR_FUN_14a1fb168;
              *(byte *)(puVar45 + 5) = cVar16 >> 7 & 0x1c;
              *(undefined8 *)((longlong)puVar45 + 0x2c) = 0xffffffff00000000;
              puVar45[7] = 0;
              puVar45[8] = local_3640;
              iVar22 = *(int *)(local_3650 + 0x1a0);
              *(uint *)(local_3650 + 0x1a0) = iVar22 + 1U;
              local_3588 = uVar44;
              if (*(uint *)(local_3650 + 0x1a4) < iVar22 + 1U) {
                FUN_1447568fc(local_35f0,iVar22);
              }
              puVar38 = local_3620;
              local_3638 = (longlong *)(lVar37 + (longlong)local_3600);
              *(undefined8 **)(*(longlong *)(local_3650 + 0x198) + (longlong)iVar22 * 8) = puVar45;
              *(int *)((longlong)puVar45 + 0x1c) = *(int *)(local_3650 + 0x1a0) + -1;
              puVar41[4] = puVar45;
              lVar39 = *local_3638;
              cVar16 = *(char *)(lVar39 + 0x68);
              puVar45 = (undefined8 *)(*(longlong *)(local_3650 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar36 = puVar45 + 9;
              if (*(undefined8 **)(local_3650 + 0x78) < puVar36) {
                FUN_140023dd8(local_3620,0x50);
                puVar45 = (undefined8 *)(*puVar38 + 7 & 0xfffffffffffffff8);
                puVar36 = puVar45 + 9;
              }
              *(undefined8 **)(local_3650 + 0x70) = puVar36;
              puVar45[1] = *(undefined8 *)(lVar39 + 8);
              puVar45[2] = 0;
              *(undefined1 *)(puVar45 + 3) = 3;
              *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
              *puVar45 = &PTR_FUN_14a1fb168;
              *(byte *)(puVar45 + 5) = cVar16 >> 7 & 0x1c;
              *(undefined8 *)((longlong)puVar45 + 0x2c) = 0xffffffff00000000;
              puVar45[7] = 0;
              puVar45[8] = lVar39;
              iVar22 = *(int *)(local_3650 + 0x1a0);
              *(uint *)(local_3650 + 0x1a0) = iVar22 + 1U;
              if (*(uint *)(local_3650 + 0x1a4) < iVar22 + 1U) {
                FUN_1447568fc(local_35f0,iVar22);
              }
              lVar43 = local_3648;
              lVar39 = local_3650;
              *(undefined8 **)(*(longlong *)(local_3650 + 0x198) + (longlong)iVar22 * 8) = puVar45;
              *(int *)((longlong)puVar45 + 0x1c) = *(int *)(local_3650 + 0x1a0) + -1;
              puVar41[5] = puVar45;
              *(uint *)(puVar41 + 7) = *(int *)(local_3648 + 0xc) + 3U >> 2;
              *(undefined4 *)((longlong)puVar41 + 0x3c) = *(undefined4 *)(local_3648 + 8);
              *(int *)((longlong)puVar41 + 0x34) = iVar42;
              *(int *)(puVar41 + 6) = (int)local_3630;
              *(undefined4 *)(puVar41 + 8) = 1;
              FUN_14745d312(local_3598,&local_3560);
              iVar22 = (int)local_3590 + 7;
              local_3524 = (int)local_3590 + 0xe;
              if (-1 < iVar22) {
                local_3524 = iVar22;
              }
              local_3524 = local_3524 >> 3;
              local_3668 = &local_3524;
              local_3520 = local_3524;
              local_351c = iVar46;
              FUN_14745d37f(lVar39,&local_3518,&local_3560,local_35a0);
              plVar31 = (longlong *)FUN_14745d432(lVar43 + 0xd0);
              plVar32 = (longlong *)FUN_1449609de(lVar39,puVar24);
              uVar40 = local_3588;
              plVar28 = local_35a8;
              if ((*(byte *)(puVar24 + 4) & 0xc) == 0) {
                if ((*(byte *)(puVar24 + 4) & 0x10) != 0) {
                  FUN_140069376(local_3650);
                }
                iVar22 = *(int *)(local_3650 + 0x5a0);
                *(uint *)(local_3650 + 0x5a0) = iVar22 + 1U;
                if (*(uint *)(local_3650 + 0x5a4) < iVar22 + 1U) {
                  FUN_1400f155a(plVar28,iVar22);
                }
                *(undefined8 **)(*plVar28 + (longlong)iVar22 * 8) = puVar24;
                *(undefined4 *)((longlong)puVar24 + 0x1c) = 4;
                *(byte *)(puVar24 + 4) = *(byte *)(puVar24 + 4) & 0xe8 | 0x15;
                *(undefined4 *)(puVar24 + 0xb) = 4;
              }
              puVar24 = (undefined8 *)*plVar32;
              puVar36 = (undefined8 *)*plVar31;
              if (puVar36 != puVar24) {
                *plVar31 = (longlong)puVar24;
                if (puVar24 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
                  UNLOCK();
                }
                if (puVar36 != (undefined8 *)0x0) {
                  LOCK();
                  piVar27 = (int *)(puVar36 + 1);
                  *piVar27 = *piVar27 + -1;
                  UNLOCK();
                  if (*piVar27 == 0) {
                    (**(code **)*puVar36)(puVar36,1);
                  }
                }
              }
              plVar32 = (longlong *)FUN_1449609de(local_3650,uVar40);
              if ((*(byte *)(uVar40 + 0x20) & 0xc) == 0) {
                if ((*(byte *)(uVar40 + 0x20) & 0x10) != 0) {
                  FUN_140069376(local_3650);
                }
                iVar22 = *(int *)(local_3650 + 0x5a0);
                *(uint *)(local_3650 + 0x5a0) = iVar22 + 1U;
                if (*(uint *)(local_3650 + 0x5a4) < iVar22 + 1U) {
                  FUN_1400f155a(plVar28,iVar22);
                }
                *(ulonglong *)(*plVar28 + (longlong)iVar22 * 8) = uVar40;
                *(undefined4 *)(uVar40 + 0x1c) = 8;
                *(byte *)(uVar40 + 0x20) = *(byte *)(uVar40 + 0x20) & 0xe8 | 0x15;
                *(undefined4 *)(uVar40 + 0x58) = 8;
              }
              puVar24 = (undefined8 *)*plVar32;
              puVar36 = (undefined8 *)plVar31[1];
              if (puVar36 != puVar24) {
                plVar31[1] = (longlong)puVar24;
                if (puVar24 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
                  UNLOCK();
                }
                if (puVar36 != (undefined8 *)0x0) {
                  LOCK();
                  piVar27 = (int *)(puVar36 + 1);
                  *piVar27 = *piVar27 + -1;
                  UNLOCK();
                  if (*piVar27 == 0) {
                    (**(code **)*puVar36)(puVar36,1);
                  }
                }
              }
              if (0 < (int)local_620) {
                lVar43 = (longlong)local_3600 + lVar37 + 8;
                uVar26 = *(undefined8 *)(*plVar31 + 0x28);
                uVar17 = *(undefined8 *)(plVar31[1] + 0x28);
                plVar32 = (longlong *)(local_3648 + 0x100);
                local_3628 = (undefined8 *)CONCAT44(local_3628._4_4_,(int)local_3628 << 2);
                uVar40 = (ulonglong)*(uint *)(local_3638 + 10);
                local_35f8 = CONCAT44(local_35f8._4_4_,
                                      (int)local_35f8 * (int)local_35f8 * local_35d4 * local_35d4 *
                                      (int)local_3630 * 4);
                local_3608 = (undefined8 *)CONCAT44(local_3608._4_4_,(int)local_3630 * 0x14);
                plVar28 = (longlong *)0x0;
                iVar42 = 0;
                lVar39 = 0;
                plVar31 = local_3638;
                iVar22 = (int)local_620;
                do {
                  puVar24 = local_628;
                  if (local_628 == (undefined8 *)0x0) {
                    puVar24 = &local_668;
                  }
                  if (0 < (int)uVar40) {
                    local_3648 = puVar24[lVar39];
                    local_3600 = (undefined8 *)CONCAT44(local_3600._4_4_,iVar42);
                    lVar47 = 0;
                    local_3630 = plVar28;
                    do {
                      lVar25 = plVar31[9];
                      if (plVar31[9] == 0) {
                        lVar25 = lVar43;
                      }
                      uVar18 = *(undefined8 *)(lVar25 + lVar47 * 8);
                      local_3560 = (int)local_3648;
                      iStack_355c = (int)((ulonglong)local_3648 >> 0x20);
                      uStack_3558 = (undefined4)uVar18;
                      uStack_3554 = (undefined4)((ulonglong)uVar18 >> 0x20);
                      uStack_3550 = local_35e0._0_4_;
                      local_3518 = &local_3560;
                      FUN_14745dc72(plVar32,&local_350c,&local_3518);
                      lVar25 = *plVar32;
                      lVar37 = (longlong)local_350c * 0x38;
                      *(undefined8 *)(lVar25 + 0x18 + lVar37) = uVar26;
                      *(undefined8 *)(lVar25 + 0x20 + lVar37) = uVar17;
                      *(int *)(lVar25 + 0x28 + lVar37) = (int)plVar28;
                      *(int *)(lVar25 + 0x2c + lVar37) = iVar42;
                      lVar47 = lVar47 + 1;
                      uVar40 = (ulonglong)(int)local_3638[10];
                      iVar42 = iVar42 + (int)local_3628;
                      plVar28 = (longlong *)(ulonglong)((int)plVar28 + 0x14);
                      plVar31 = local_3638;
                    } while (lVar47 < (longlong)uVar40);
                    plVar28 = local_3630;
                    iVar22 = (int)local_620;
                    iVar42 = (int)local_3600;
                  }
                  lVar39 = lVar39 + 1;
                  iVar42 = iVar42 + (int)local_35f8;
                  plVar28 = (longlong *)(ulonglong)(uint)((int)plVar28 + (int)local_3608);
                } while (lVar39 < iVar22);
              }
              lVar43 = local_3580;
              lVar47 = local_3640;
              lVar39 = local_3618;
              iVar22 = DAT_14caa27e0;
              if (local_3578 != (void *)0x0) {
                FUN_1400020a8();
                lVar43 = local_3580;
                lVar47 = local_3640;
                lVar39 = local_3618;
                iVar22 = DAT_14caa27e0;
              }
            }
            lVar43 = lVar43 + 1;
          } while (lVar43 < iVar22);
        }
        if (local_628 != (undefined8 *)0x0) {
          FUN_1400020a8();
          lVar39 = local_3618;
        }
        pdVar34 = local_35b0;
        uVar40 = local_35b8;
        if (local_118 != (int *)0x0) {
          FUN_1400020a8();
          lVar39 = local_3618;
        }
        lVar39 = lVar39 + 1;
      } while (lVar39 < (int)DAT_14caa2800);
    }
    if (local_688 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_3688) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14324d8b3 FUN_14324d8b3 body=69 status=ok
// SIG undefined FUN_14324d8b3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14324d8b3(void)

{
  _DAT_14caa2810 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014324d8f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa2818,1);
  return;
}



// FUNCTION 14324d8f8 FUN_14324d8f8 body=348 status=ok
// SIG undefined FUN_14324d8f8(void)

void FUN_14324d8f8(void)

{
  void *_Src;
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  int local_48;
  void *local_40;
  int local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar4 = 0;
  FUN_146324580(&local_40,0x10,1,0);
  _Src = local_40;
  local_58 = (void *)0x0;
  lVar3 = (longlong)local_38;
  local_50 = local_38;
  if (lVar3 == 0) {
    local_4c = 0;
    local_48 = local_30;
  }
  else {
    FUN_14010590e(&local_58,local_38,0);
    memcpy(local_58,_Src,lVar3 << 3);
    local_48 = local_30;
    iVar4 = local_38;
  }
  do {
    if (local_48 == iVar4) {
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_40 != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar3 = *(longlong *)((longlong)local_58 + (longlong)local_48 * 8);
    if ((~*(byte *)(lVar3 + 0x9c) & 3) == 0) {
      bVar1 = *(byte *)(lVar3 + 0x9d);
      if ((bVar1 & 1) != 0) {
        if ((*(longlong *)(lVar3 + 0xb0) != 0) || (lVar2 = FUN_1448abda6(lVar3), lVar2 != 0))
        goto LAB_14324d9e8;
        bVar1 = *(byte *)(lVar3 + 0x9d);
      }
      *(byte *)(lVar3 + 0x9d) = bVar1 | 1;
      FUN_1401057d4(lVar3);
      FUN_14010586c(&DAT_14cad0140,lVar3);
    }
LAB_14324d9e8:
    lVar3 = (longlong)local_48;
    do {
      lVar3 = lVar3 + 1;
      local_48 = (int)lVar3;
      if (local_50 <= lVar3) break;
    } while (*(longlong *)((longlong)local_58 + lVar3 * 8) == 0);
  } while( true );
}



// FUNCTION 14324da72 FUN_14324da72 body=481 status=ok
// SIG undefined FUN_14324da72(void)

void FUN_14324da72(longlong param_1,ulonglong *param_2)

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
  FUN_14745d9d4(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14324dc54 FUN_14324dc54 body=232 status=ok
// SIG undefined FUN_14324dc54(void)

void FUN_14324dc54(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 14324dd3c FUN_14324dd3c body=81 status=ok
// SIG undefined FUN_14324dd3c(void)

void FUN_14324dd3c(undefined8 param_1,longlong *param_2)

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
  FUN_14745da77(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14324dd8d FUN_14324dd8d body=665 status=ok
// SIG undefined FUN_14324dd8d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14324dd8d(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined1 *local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  char *local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_38,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_38,&DAT_14caa2570);
  if (cVar1 == '\0') {
    _DAT_14caa2570 = 0;
    uRam000000014caa2578 = 0;
  }
  if (local_38 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_38 = "SMInstance";
  local_30 = (code *)CONCAT35(local_30._5_3_,10);
  uVar2 = FUN_14001a6c0(&local_38,1);
  _DAT_14caa2580 = (ulonglong)uVar2;
  FUN_14098d3d2(FUN_14324bb04,L"/Script/Landscape",L"ELandscapeResizeMode",&DAT_14caa2588);
  local_38._0_4_ = 1;
  local_68._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14caa25a0,L"landscape.SupportGPUCulling",&local_38,
                L"Whether to support landscape GPU culling");
  atexit(FUN_14324bb3b);
  local_38._0_4_ = 1;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14caa25b8,L"landscape.EnableGPUCulling",&local_38,
                L"Whether to use landscape GPU culling when it\'s supported. Allows to toggle culling at runtime"
               );
  atexit(FUN_14324bb80);
  local_38 = (char *)CONCAT44(local_38._4_4_,1);
  local_68 = (code *)CONCAT44(local_68._4_4_,0x20);
  FUN_14078dbce(&DAT_14caa25d0,L"landscape.EnableGPUCullingShadows",&local_38,
                L"Whether to use landscape GPU culling for a shadow views when it\'s supported. Allows to toggle shadow views culling at runtime"
               );
  atexit(FUN_14324bbc5);
  local_48 = FUN_14179225e;
  local_50 = FUN_14324bc0a;
  local_58 = FUN_14324bc8f;
  local_60 = &LAB_14324bd47;
  local_68 = FUN_14324bd5e;
  FUN_141585c60(&DAT_14caa2608,L"FLandscapeTileVertexFactory",
                L"/Engine/Private/LandscapeVertexFactory.ush",0x8300e);
  atexit((_func_5014 *)&LAB_14324bd8c);
  local_30 = FUN_145f0a966;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa27c8,&local_38);
  DAT_14caa27f8 = 0;
  _DAT_14caa2800 = 0x200000000;
  DAT_14caa27d8 = 0;
  _DAT_14caa27e0 = 0;
  atexit((_func_5014 *)&LAB_14324bdbd);
  local_38 = "AssetRegistry";
  local_30 = (code *)CONCAT35(local_30._5_3_,0xd);
  uVar2 = FUN_14001a6c0(&local_38,1);
  _DAT_14caa2808 = (ulonglong)uVar2;
  local_38 = (char *)CONCAT44(local_38._4_4_,1);
  local_68 = (code *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caa2810,L"landscape.ApplyPhysicalMaterialChangesImmediately",&local_38,
                L"Applies physical material task changes immediately rather than during the next cook/PIE."
               );
  atexit(FUN_14324d8b3);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14324e22c FUN_14324e22c body=1047 status=ok
// SIG undefined FUN_14324e22c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14324e22c(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_48 [32];
  char *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = FUN_146046a54;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa2a40,&local_28);
  local_20 = FUN_145edf4d2;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa2b68,&local_28);
  local_28 = "SMInstance";
  local_20 = (code *)CONCAT35(local_20._5_3_,10);
  uVar2 = FUN_14001a6c0(&local_28,1);
  _DAT_14caa2b78 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_28,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_28,&DAT_14caa2b80);
  if (cVar1 == '\0') {
    _DAT_14caa2b80 = 0;
    uRam000000014caa2b88 = 0;
  }
  if (local_28 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_20 = FUN_14612c91c;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa2ca8,&local_28);
  local_20 = FUN_145dbca28;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa2dd0,&local_28);
  local_20 = FUN_145eb32a6;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa2ef8,&local_28);
  local_20 = FUN_145dee39a;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa3020,&local_28);
  local_20 = FUN_145eb3756;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa3148,&local_28);
  local_20 = FUN_146084e9c;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa3270,&local_28);
  local_20 = FUN_145ef7390;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa3398,&local_28);
  local_20 = FUN_145ef77c6;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa34c0,&local_28);
  local_20 = FUN_145e19084;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa35e8,&local_28);
  local_20 = FUN_145e607f6;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa3710,&local_28);
  local_20 = FUN_145e993ca;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa3838,&local_28);
  local_20 = FUN_145e60d60;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa3960,&local_28);
  local_20 = FUN_145e612ca;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa3a88,&local_28);
  local_20 = FUN_145e9993a;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa3bb0,&local_28);
  local_20 = FUN_145e783d4;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa3cd8,&local_28);
  local_20 = FUN_145e61834;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa3e00,&local_28);
  local_20 = FUN_145f0af54;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa3f28,&local_28);
  local_20 = FUN_145e61d9e;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa4050,&local_28);
  local_20 = FUN_145e62308;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa4178,&local_28);
  local_20 = FUN_145f0b542;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa42a0,&local_28);
  local_20 = FUN_145f0bb30;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa43c8,&local_28);
  local_20 = FUN_145f5b7cc;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa44f0,&local_28);
  local_20 = FUN_145e62872;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa4618,&local_28);
  local_20 = FUN_145e99eaa;
  local_28 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caa4740,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14324e644 FUN_14324e644 body=69 status=ok
// SIG undefined FUN_14324e644(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14324e644(void)

{
  _DAT_14caa5ce8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014324e686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa5cf0,1);
  return;
}


