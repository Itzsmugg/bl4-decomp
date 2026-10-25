// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14083e9a6 FUN_14083e9a6 body=752 status=ok
// SIG undefined FUN_14083e9a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14083e9a6(longlong param_1)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0xf8) + 0x90);
  if ((plVar3 == (longlong *)0x0) || (lVar7 = (**(code **)(*plVar3 + 0x30))(), lVar7 != 0))
  goto LAB_14083eacd;
  plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0xf8) + 0x90);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  uVar8 = (**(code **)(*plVar3 + 8))(plVar3);
  lVar7 = DAT_14cc28ee8;
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    uVar10 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    lVar11 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar11 = *(longlong *)(param_1 + 200);
    }
    iVar12 = *(int *)(lVar11 + (ulonglong)
                               (*(int *)(param_1 + 0xd0) - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
    if (iVar12 != -1) {
      do {
        puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar12 * 0x18);
        if (*puVar2 == uVar8) {
          if ((puVar2 != (ulonglong *)0x0) && (puVar2 + 1 != (ulonglong *)0x0)) {
            uVar8 = puVar2[1];
            lVar7 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0xf8);
            plVar9 = *(longlong **)(lVar7 + 0x90);
            if (plVar9 == (longlong *)0x0) {
              *(longlong *)(uVar8 + 0x60) = lVar7;
              *(undefined8 *)(uVar8 + 0x68) = 0;
              (**(code **)(_DAT_00000000 + 0x28))(0);
            }
            else {
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
              *(undefined8 *)(uVar8 + 0x60) =
                   *(undefined8 *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0xf8);
              *(longlong **)(uVar8 + 0x68) = plVar9;
              (**(code **)(*plVar9 + 0x28))(plVar9);
              LOCK();
              puVar1 = (uint *)(plVar9 + 1);
              uVar10 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar10 & 0x3fffffff) == 1) {
                FUN_144a54812(plVar9);
              }
            }
            goto LAB_14083eab0;
          }
          break;
        }
        iVar12 = (int)puVar2[2];
      } while (iVar12 != -1);
    }
  }
  iVar12 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (((iVar12 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar12 == 2)) {
    uVar8 = 0;
  }
  else if (iVar12 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar8 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar8 = 1;
  }
  if (*(int *)(lVar7 + uVar8 * 4) == 0) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar4 = FUN_14054d46e(&DAT_14c846b20,L"fsr3rhi");
    if (cVar4 != '\0') goto LAB_14083ebec;
  }
  else {
LAB_14083ebec:
    FUN_1446f470e(&local_28,L"FFXRHIBackend",1);
    plVar9 = (longlong *)FUN_1447c1074(local_28);
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x40))(plVar9);
    (**(code **)(*plVar9 + 0x28))(plVar9);
  }
LAB_14083eab0:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(plVar3 + 1);
    uVar10 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar10 & 0x3fffffff) == 1) {
      FUN_144a54812(plVar3);
    }
  }
LAB_14083eacd:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14083eca6 FUN_14083eca6 body=90 status=ok
// SIG undefined FUN_14083eca6(void)

undefined8 * FUN_14083eca6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b35c3a0;
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
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14083ed00 FUN_14083ed00 body=144 status=ok
// SIG undefined FUN_14083ed00(void)

void FUN_14083ed00(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0xd4) == '\x01') {
    *(undefined1 *)(param_1 + 0xd4) = 0;
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    plVar1 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0xa0);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_14083ed90(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14083ed90 FUN_14083ed90 body=55 status=ok
// SIG undefined FUN_14083ed90(void)

void FUN_14083ed90(longlong *param_1)

{
  FUN_14083edc8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14083edc8 FUN_14083edc8 body=513 status=ok
// SIG undefined FUN_14083edc8(void)

void FUN_14083edc8(longlong *param_1,int param_2)

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
  uint uVar11;
  longlong lVar12;
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
    uVar11 = *puVar7;
    if (uVar11 == 0) {
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
        if (uVar8 == uVar13) goto LAB_14083edfb;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar11 = uVar11 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar11;
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
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_14083edfb;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_14083edfb:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar11 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar11) {
    uVar3 = uVar11;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14083efca FUN_14083efca body=152 status=ok
// SIG undefined FUN_14083efca(void)

void FUN_14083efca(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(longlong *)(param_1 + 0x28) = param_3;
  uVar2 = FUN_14083f088(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x270);
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&local_38);
    *(undefined4 *)(param_1 + 0x30) = local_38;
    *(undefined4 *)(param_1 + 0x34) = uStack_34;
    *(undefined4 *)(param_1 + 0x38) = uStack_30;
    *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  }
  if (param_4 != 0) {
    uVar2 = FUN_147605c20(param_4,*(undefined2 *)(param_3 + 0x16));
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14083f088 FUN_14083f088 body=129 status=ok
// SIG undefined FUN_14083f088(void)

undefined8 FUN_14083f088(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14083f10a(&local_1c);
  if ((-1 < (int)local_1c) && ((int)local_1c < *(int *)(param_1 + 0x630))) {
    lVar2 = param_1 + 0x618;
    if (*(longlong *)(param_1 + 0x628) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x628);
    }
    if ((*(uint *)(lVar2 + (ulonglong)(local_1c >> 5) * 4) >> (local_1c & 0x1f) & 1) != 0) {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + (ulonglong)local_1c * 8);
      goto LAB_14083f0bd;
    }
  }
  uVar1 = 0;
LAB_14083f0bd:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14083f10a FUN_14083f10a body=104 status=ok
// SIG undefined FUN_14083f10a(void)

undefined4 * FUN_14083f10a(undefined4 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab4994) {
    FUN_144b3d300(&DAT_14cab4994);
    if (DAT_14cab4994 == -1) {
      DAT_14cab4990 = FUN_14574d76e();
      _Init_thread_footer(&DAT_14cab4994);
    }
  }
  *param_1 = DAT_14cab4990;
  return param_1;
}



// FUNCTION 14083f178 FUN_14083f178 body=57 status=ok
// SIG undefined FUN_14083f178(void)

void FUN_14083f178(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23060 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23060 = FUN_140002ddd(FUN_14643ca9b,uVar1,L"GpsTest_AttitudeTowards");
  }
  return;
}



// FUNCTION 14083f1b2 FUN_14083f1b2 body=40 status=ok
// SIG undefined FUN_14083f1b2(void)

undefined8 FUN_14083f1b2(undefined8 param_1,int param_2)

{
  FUN_14083f1da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14083f1da FUN_14083f1da body=95 status=ok
// SIG undefined FUN_14083f1da(void)

void FUN_14083f1da(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a84cec0;
  param_1[5] = &PTR_LAB_14a84d520;
  param_1[6] = &PTR_LAB_14a84d560;
  puVar2 = (undefined8 *)param_1[0x7e];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_1401c051c(param_1 + 0x74);
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 14083f246 FUN_14083f246 body=157 status=ok
// SIG undefined FUN_14083f246(void)

void FUN_14083f246(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_14083f2e4(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x30 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2[1] = 0x3f80000000000000;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = &DAT_3f8000003f800000;
      puVar2[5] = 0x3f800000;
      puVar2 = puVar2 + 6;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146de6a08(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14083f2e4 FUN_14083f2e4 body=275 status=ok
// SIG undefined FUN_14083f2e4(void)

void FUN_14083f2e4(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14083f3f8 FUN_14083f3f8 body=3292 status=ok
// SIG undefined FUN_14083f3f8(void)

void FUN_14083f3f8(longlong *param_1,ulonglong param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  byte bVar19;
  ulonglong uVar20;
  undefined *puVar21;
  longlong *plVar22;
  longlong lVar23;
  LARGE_INTEGER LVar24;
  byte bVar25;
  int iVar26;
  ulonglong uVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  LARGE_INTEGER *local_a0;
  undefined1 *local_98;
  code *local_90;
  uint local_84;
  longlong *local_80;
  undefined4 local_74;
  LARGE_INTEGER local_70;
  longlong *local_68;
  ulonglong local_60;
  
  uVar20 = param_2 & 0xffffffff;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(byte *)((longlong)param_1 + 0x7cc) = *(byte *)((longlong)param_1 + 0x7cc) & 0xfd;
  if ((char)param_2 != '\0') {
    param_1[0x10b] = DAT_14c8464f0;
    lVar14 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    param_1[0x109] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    param_1[0x10a] = lVar14;
    uVar6 = DAT_14c8464e8._4_4_;
    uVar5 = (undefined4)DAT_14c8464e8;
    uVar10 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0x106) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_1 + 0x834) = uVar10;
    *(undefined4 *)(param_1 + 0x107) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0x83c) = uVar6;
    param_1[0x108] = DAT_14c8464f0;
    *(undefined1 *)(param_1 + 0x10c) = 0;
  }
  if (DAT_14cb39d10 != 0) {
    FUN_140388f74(param_1);
    uVar20 = 0;
    FUN_140557bc8(param_1,0);
    goto LAB_14083f494;
  }
  lVar14 = param_1[0x16];
  if ((((lVar14 == 0) && (lVar14 = FUN_1448abda6(param_1), lVar14 == 0)) || (DAT_14caf6068 < 1)) ||
     (((DAT_14c7616fc & 1) == 0 || (lVar14 = FUN_14005c7aa(lVar14), lVar14 == 0)))) {
    bVar4 = true;
    LVar24.QuadPart = -1;
    lVar14 = 0;
  }
  else {
    QueryPerformanceCounter(&local_70);
    bVar4 = false;
    LVar24 = local_70;
  }
  if (param_1[0xcd] == 0) {
    FUN_14080aa0e(param_1);
LAB_14083f90f:
    uVar20 = 0;
  }
  else {
    lVar15 = param_1[0x16];
    if (lVar15 == 0) {
      lVar15 = FUN_1448abda6(param_1);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    if ((((DAT_14c872bf0 != '\x01') || (DAT_14c872bf1 == '\x01')) && (lVar15 != 0)) &&
       ((DAT_14c8442b8 == '\0' && ((*(byte *)(lVar15 + 0x155) & 0x20) == 0)))) {
      if ((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0) {
        lVar15 = param_1[0xcd];
        if ((DAT_14cb39fc5 == '\x01') && (DAT_14cb39fd0 != DAT_14cb39ffc)) {
          lVar17 = *(longlong *)(lVar15 + 0x18);
          uVar12 = (uint)((ulonglong)lVar17 >> 0x10);
          uVar9 = (uint)lVar17 & 0xffff;
          puVar21 = &DAT_14cb3a000;
          if (DAT_14cb3a008 != (undefined *)0x0) {
            puVar21 = DAT_14cb3a008;
          }
          for (iVar13 = *(int *)(puVar21 +
                                (ulonglong)
                                (DAT_14cb3a010 - 1U &
                                (int)((ulonglong)lVar17 >> 0x20) + ((uint)lVar17 << 0x10 | uVar9) +
                                (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar9 >> 4)) * 4);
              iVar13 != -1; iVar13 = *(int *)((longlong)iVar13 * 0x10 + DAT_14cb39fc8 + 8)) {
            if (*(longlong *)(DAT_14cb39fc8 + (longlong)iVar13 * 0x10) == lVar17)
            goto LAB_14083f90f;
          }
        }
        if ((param_1[0xec] != 0) &&
           (lVar15 != *(longlong *)(*(longlong *)(param_1[0xec] + 0x30) + 0x38))) {
          FUN_140388f74(param_1);
          FUN_140557bc8(param_1,0);
          lVar15 = param_1[0xcd];
        }
        bVar19 = (byte)uVar20;
        if ((((*(longlong *)(lVar15 + 0x4d8) != 0) &&
             ((*(byte *)(*(longlong *)(lVar15 + 0x4d8) + 0xa0) & 1) == 0)) ||
            ((*(byte *)(lVar15 + 0x4a0) & 2) == 0)) ||
           ((((lVar15 = param_1[0x16], lVar15 == 0 && (lVar15 = FUN_1448abda6(param_1), lVar15 == 0)
              ) || ((*(longlong **)(lVar15 + 0x218) == (longlong *)0x0 ||
                    ((puVar16 = (undefined8 *)
                                (**(code **)(**(longlong **)(lVar15 + 0x218) + 0x420))(),
                     puVar16 == (undefined8 *)0x0 ||
                     (lVar17 = (**(code **)*puVar16)(puVar16,&DAT_14cb3e918), lVar17 == 0)))))) ||
            (lVar15 = FUN_1400bd118(lVar15), lVar15 == 0)))) {
          *(uint *)((longlong)param_1 + 0x7cc) =
               (*(uint *)((longlong)param_1 + 0x7cc) & 0xfffffff9) + (uint)bVar19 * 4 + 2;
          uVar20 = CONCAT71((int7)(uVar20 >> 8),1);
          goto LAB_14083f911;
        }
        if (bVar19 != 0) {
          FUN_140388f74(param_1);
        }
        if (((param_3 != '\0') || ((*(byte *)((longlong)param_1 + 0x7cc) & 0x80) == 0)) ||
           ((int)param_1[0x105] == -1)) {
          cVar7 = FUN_1401e6e8e(param_1[0xcd] + 0x88);
          if (cVar7 != '\0') {
            uVar12 = *(uint *)((longlong)param_1 + 0x7cc);
            *(uint *)((longlong)param_1 + 0x7cc) = uVar12 & 0xffffff7f;
            if (param_3 == '\0') {
              *(uint *)((longlong)param_1 + 0x7cc) = uVar12 & 0xfffffd7f;
              FUN_1402442c2(param_1,0,0);
            }
            FUN_14043807e(param_1,0);
            lVar15 = param_1[0x16];
            if (lVar15 == 0) {
              lVar15 = FUN_1448abda6(param_1);
            }
            fVar29 = (float)*(double *)(lVar15 + 0x6d0);
            *(float *)((longlong)param_1 + 0x3c4) = fVar29;
            lVar15 = param_1[0x15];
            if ((lVar15 != 0) && (fVar28 = (float)FUN_1449734f0(lVar15), fVar28 < fVar29)) {
              *(float *)(lVar15 + 0x1a8) = fVar29;
            }
            uVar12 = *(uint *)((longlong)param_1 + 0x7cc);
            uVar9 = uVar12 & 0xfffffff7;
            *(uint *)((longlong)param_1 + 0x7cc) = uVar9;
            if ((*(byte *)(param_1 + 0xf2) & 4) != 0) {
              if (((*(int *)((longlong)param_1 + 0x7b4) == 0) ||
                  (uVar2 = *(uint *)(param_1 + 0xf6), (int)uVar2 < 0)) ||
                 ((DAT_14c9647dc <= (int)uVar2 ||
                  ((((plVar22 = (longlong *)
                                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                     plVar22 == (longlong *)0x0 ||
                     ((int)plVar22[2] != *(int *)((longlong)param_1 + 0x7b4))) ||
                    ((*(uint *)(plVar22 + 1) & 0x10200000) != 0)) ||
                   (lVar15 = *plVar22, lVar15 == 0)))))) {
                FUN_141821d0e(param_1);
                uVar9 = *(uint *)((longlong)param_1 + 0x7cc);
              }
              else {
                lVar17 = param_1[0x24];
                if (((lVar17 == lVar15) && (param_1[0x25] == param_1[0xf7])) &&
                   ((longlong)*(int *)(lVar17 + 0x140) != 0)) {
                  lVar23 = 0;
                  do {
                    if (*(longlong **)(*(longlong *)(lVar17 + 0x138) + lVar23) == param_1)
                    goto LAB_14083f8d5;
                    lVar23 = lVar23 + 8;
                  } while ((longlong)*(int *)(lVar17 + 0x140) * 8 != lVar23);
                }
                *(uint *)((longlong)param_1 + 0x7cc) = uVar12;
                FUN_141821d0e(param_1);
                param_1[0xfc] = param_1[0x35];
                param_1[0xfa] = param_1[0x33];
                param_1[0xfb] = param_1[0x34];
                param_1[0xfd] = param_1[0x36];
                param_1[0xfe] = param_1[0x37];
                param_1[0xff] = param_1[0x38];
                *(int *)(param_1 + 0x100) = (int)param_1[0x39];
                *(undefined4 *)((longlong)param_1 + 0x804) =
                     *(undefined4 *)((longlong)param_1 + 0x1cc);
                *(int *)(param_1 + 0x101) = (int)param_1[0x3a];
                *(undefined4 *)((longlong)param_1 + 0x80c) =
                     *(undefined4 *)((longlong)param_1 + 0x1d4);
                param_1[0x102] = param_1[0x3b];
                local_70.QuadPart =
                     CONCAT44(local_70.s.HighPart,
                              CONCAT13(*(byte *)(param_1 + 0xf2) >> 3,(int3)param_1[0xf8])) &
                     0xffffffff01ffffff;
                (**(code **)(*param_1 + 0x490))(param_1,lVar15,&local_70,param_1[0xf7]);
                uVar9 = *(uint *)((longlong)param_1 + 0x7cc);
LAB_14083f8d5:
                uVar9 = uVar9 | 8;
                *(uint *)((longlong)param_1 + 0x7cc) = uVar9;
              }
            }
            if ((((~uVar9 & 0x50) == 0) && (param_1[0xcd] != 0)) &&
               (lVar15 = *(longlong *)(param_1[0xcd] + 0x68), lVar15 != 0)) {
              lVar17 = param_1[0x16];
              if (lVar17 == 0) {
                lVar17 = FUN_1448abda6(param_1);
              }
              lVar17 = FUN_1400bd118(lVar17);
              if (((lVar17 != 0) && (*(int *)(lVar15 + 0x2c) == 0)) &&
                 (cVar7 = FUN_14085e3f4(lVar17,param_1[0xcd],param_1), cVar7 != '\0'))
              goto LAB_14083fba1;
            }
            if (bVar19 == 0) {
              if ((((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0) && (param_1[0xec] != 0)) &&
                 ((lVar15 = *(longlong *)(param_1[0xec] + 0x30), *(int *)(lVar15 + 0x868) == 0 &&
                  (*(int *)(lVar15 + 0x86c) == 0)))) {
                (**(code **)(*param_1 + 0x3b8))(param_1);
                uVar12 = (**(code **)(*param_1 + 0x3b8))(param_1);
                uVar20 = (ulonglong)uVar12;
                goto LAB_14083f911;
              }
              FUN_1402442c2(param_1,0,0);
              if (param_1[0x118] != 0) {
                FUN_148110b96(param_1[0x118],param_1);
                param_1[0x118] = 0;
              }
              FUN_143ac453a(param_1[0xcd]);
              cVar7 = (**(code **)(*param_1 + 0x2f0))(param_1);
              if (cVar7 != '\0') goto LAB_14083fa47;
              uVar10 = FUN_1439f62f4(param_1);
              uVar12 = CONCAT31((int3)((uint)uVar10 >> 8),(char)uVar10 * '\x02' + '\x01');
            }
            else {
              FUN_1402442c2(param_1,0,0);
              if (param_1[0x118] != 0) {
                FUN_148110b96(param_1[0x118],param_1);
                param_1[0x118] = 0;
              }
              FUN_143ac453a(param_1[0xcd]);
LAB_14083fa47:
              FUN_1402a37f2(param_1,1);
              FUN_140845556((longlong)param_1 + 0xba,&local_70);
              if ((code *)local_70.QuadPart != (code *)0x0) {
                FUN_1479b6f4b(local_70.QuadPart,param_1,uVar20);
              }
              if (local_68 != (longlong *)0x0) {
                LOCK();
                plVar22 = local_68 + 1;
                *(int *)plVar22 = (int)*plVar22 + -1;
                UNLOCK();
                if ((int)*plVar22 == 0) {
                  (**(code **)*local_68)(local_68);
                  LOCK();
                  piVar1 = (int *)((longlong)local_68 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_68 + 0x10))(local_68);
                  }
                }
              }
              iVar13 = *(int *)((longlong)param_1 + 0x64c);
              *(int *)((longlong)param_1 + 0x64c) = iVar13 + 1;
              uVar18 = (ulonglong)(int)param_1[200];
              if ((longlong)uVar18 < 1) {
                *(int *)((longlong)param_1 + 0x64c) = iVar13;
              }
              else {
                plVar22 = param_1 + 199;
                local_84 = 0;
                local_80 = plVar22;
                do {
                  lVar15 = uVar18 * 0x10 + -8;
                  uVar27 = uVar18;
                  while (((*(int *)(*local_80 + lVar15) != 0 &&
                          (plVar22 = *(longlong **)(*local_80 + -8 + lVar15),
                          plVar22 != (longlong *)0x0)) &&
                         (cVar7 = (**(code **)(*plVar22 + 0x60))(plVar22,param_1,uVar20),
                         cVar7 != '\0'))) {
                    lVar15 = lVar15 + -0x10;
                    bVar3 = uVar27 < 2;
                    uVar27 = uVar27 - 1;
                    if (bVar3) {
                      iVar13 = *(int *)((longlong)param_1 + 0x64c) + -1;
                      *(int *)((longlong)param_1 + 0x64c) = iVar13;
                      if ((local_84 & 1) == 0) goto LAB_14083faaa;
                      goto LAB_14083ffc3;
                    }
                  }
                  uVar18 = uVar27 - 1;
                  plVar22 = (longlong *)CONCAT71((int7)((ulonglong)plVar22 >> 8),1);
                  local_84 = (uint)plVar22;
                } while (1 < uVar27);
                iVar13 = *(int *)((longlong)param_1 + 0x64c) + -1;
                *(int *)((longlong)param_1 + 0x64c) = iVar13;
LAB_14083ffc3:
                if (iVar13 < 1) {
                  iVar13 = (int)param_1[200];
                  iVar11 = iVar13;
                  if (0 < iVar13) {
                    iVar26 = 0;
                    do {
                      if (((*(int *)(*local_80 + 8 + (longlong)iVar26 * 0x10) == 0) ||
                          (plVar22 = *(longlong **)(*local_80 + (longlong)iVar26 * 0x10),
                          plVar22 == (longlong *)0x0)) ||
                         (cVar7 = (**(code **)(*plVar22 + 0x28))(), cVar7 != '\0')) {
                        FUN_14005b288(local_80,iVar26);
                        FUN_14005b248(local_80);
                      }
                      else {
                        iVar26 = iVar26 + 1;
                      }
                      iVar11 = (int)param_1[200];
                    } while (iVar26 < iVar11);
                  }
                  iVar26 = 2;
                  if (2 < iVar11 * 2) {
                    iVar26 = iVar11 * 2;
                  }
                  *(int *)(param_1 + 0xc9) = iVar26;
                  if ((iVar26 < iVar13) && (*(int *)((longlong)param_1 + 0x644) != iVar11)) {
                    FUN_14045812c(local_80);
                  }
                }
              }
LAB_14083faaa:
              uVar10 = FUN_1439f62f4();
              bVar25 = (char)uVar10 * '\x02' + 1;
              uVar12 = CONCAT31((int3)((uint)uVar10 >> 8),bVar25);
              if ((bVar19 != 0) &&
                 (uVar12 = (uint)bVar25, (*(byte *)(param_1[0xcd] + 100) & 2) != 0)) {
                uVar12 = 0;
              }
            }
            lVar15 = param_1[0xec];
            if (lVar15 != 0) {
              if ((*(int *)((longlong)param_1 + 0x3d4) < 0) &&
                 ((lVar17 = param_1[0x16], lVar17 != 0 ||
                  (lVar17 = FUN_1448abda6(param_1), lVar17 != 0)))) {
                fVar29 = (float)*(double *)(lVar17 + 0x6d0);
              }
              else {
                fVar29 = *(float *)((longlong)param_1 + 0x3c4);
              }
              *(float *)(*(longlong *)(lVar15 + 0x30) + 0xd4) = fVar29;
              FUN_14043827e(param_1);
              if ((*(byte *)((longlong)param_1 + 0x9c) & 2) == 0) {
                (**(code **)(*param_1 + 800))(param_1,0);
              }
              if ((*(byte *)(param_1[0xcd] + 100) & 4) != 0) {
                local_74 = 0;
                lVar15 = param_1[0xb8];
                local_84 = uVar12;
                if (lVar15 == 0) {
LAB_14083fb9d:
                  uVar8 = 0;
                }
                else {
                  if (DAT_14caf9cd0 == 0) {
                    local_a0 = &local_70;
                    local_70.QuadPart = (LONGLONG)FUN_141030f22;
                    local_90 = FUN_14081d0ea;
                    local_98 = &LAB_1463c0cc2;
                    local_a8 = &LAB_147c9db5b;
                    local_b0 = &LAB_1463f9c44;
                    local_b8 = &DAT_149e063b2;
                    local_c0 = 0x2000000000;
                    local_c8 = 0x10000004;
                    local_d0 = 8;
                    local_d8 = 0x958;
                    FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22
                                 );
                    lVar15 = param_1[0xb8];
                    if (lVar15 == 0) goto LAB_14083fb9d;
                  }
                  uVar8 = 0;
                  if ((DAT_14caf9cd0 != 0) &&
                     (lVar17 = *(longlong *)(lVar15 + 0x10), uVar8 = 0, lVar17 != 0)) {
                    if ((*(int *)(lVar17 + 0x38) < *(int *)(DAT_14caf9cd0 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(lVar17 + 0x30) +
                         (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) != DAT_14caf9cd0 + 0x30))
                    goto LAB_14083fb9d;
                    FUN_14016169c(lVar15,&local_74);
                    uVar8 = (undefined1)local_74;
                  }
                }
                lVar15 = *(longlong *)(param_1[0xec] + 0x30);
                *(undefined1 *)(lVar15 + 0x974) = uVar8;
                uVar20 = 0;
                uVar12 = local_84;
                if ((longlong)*(int *)(lVar15 + 0x110) != 0) {
                  local_80 = *(longlong **)(lVar15 + 0x108);
                  uVar20 = (longlong)*(int *)(lVar15 + 0x110) * 0x10;
                  uVar18 = 0;
                  do {
                    (**(code **)(**(longlong **)((longlong)local_80 + uVar18) + 0x80))
                              (*(longlong **)((longlong)local_80 + uVar18),
                               *(undefined1 *)(lVar15 + 0x974));
                    uVar18 = uVar18 + 0x10;
                    uVar12 = local_84;
                  } while (uVar20 != uVar18);
                }
              }
              FUN_143ac66de(*(undefined8 *)(param_1[0xec] + 0x30),uVar12);
              if (param_1[0xec] == 0) {
LAB_14083fc93:
                uVar20 = 0;
              }
              else {
                lVar15 = *(longlong *)(param_1[0xec] + 0x30);
                if (*(int *)(lVar15 + 0x86c) - 3U < 2) {
                  uVar20 = 0;
                  FUN_140557bc8(param_1,0);
                }
                else {
                  if ((*(byte *)(lVar15 + 0x790) & 4) == 0) goto LAB_14083fc93;
                  iVar11 = FUN_143ac6210();
                  iVar13 = (uint)(DAT_14c762810 == 0) * 2;
                  if (iVar13 < iVar11) {
                    iVar13 = iVar11;
                  }
                  *(char *)(param_1 + 9) = (char)iVar13;
                  uVar8 = 6;
                  if (DAT_14c762814 == 0) {
                    uVar8 = (char)iVar13;
                  }
                  *(undefined1 *)((longlong)param_1 + 0x49) = uVar8;
                  uVar20 = CONCAT71((int7)(uVar20 >> 8),1);
                }
              }
              if (param_3 != '\0') {
                FUN_1402442c2(param_1,*(uint *)((longlong)param_1 + 0x7cc) >> 9 & 1,0);
              }
              goto LAB_14083f911;
            }
          }
LAB_14083fba1:
          uVar20 = 0;
          FUN_140557bc8(param_1,0);
          goto LAB_14083f911;
        }
      }
      goto LAB_14083f90f;
    }
    if ((*(byte *)(param_1 + 0xf2) & 1) == 0) goto LAB_14083f90f;
    uVar20 = 0;
    (**(code **)(*param_1 + 0x420))(param_1,0);
  }
LAB_14083f911:
  if (((code *)LVar24.QuadPart != (code *)0xffffffffffffffff) &&
     (QueryPerformanceCounter(&local_70), !bVar4)) {
    LOCK();
    *(longlong *)(lVar14 + 0x28) =
         *(longlong *)(lVar14 + 0x28) + (local_70.QuadPart - (longlong)LVar24);
    UNLOCK();
  }
LAB_14083f494:
  (**(code **)(*param_1 + 0x3b0))(param_1,uVar20 & 0xffffffff);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408400e4 FUN_1408400e4 body=40 status=ok
// SIG undefined FUN_1408400e4(void)

undefined8 FUN_1408400e4(undefined8 param_1,int param_2)

{
  FUN_14084010c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14084010c FUN_14084010c body=320 status=ok
// SIG undefined FUN_14084010c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14084010c(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14b127a60;
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054e5f7(param_1[0x49],*(undefined4 *)(param_1 + 0x4a));
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  lVar2 = 0x1a0;
  do {
    if (*(longlong *)((longlong)param_1 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x20;
  } while (lVar2 != 0x140);
  FUN_14084024c(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000140840219. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 14084024c FUN_14084024c body=52 status=ok
// SIG undefined FUN_14084024c(void)

void FUN_14084024c(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140840280 FUN_140840280 body=329 status=ok
// SIG undefined FUN_140840280(void)

undefined1 *
FUN_140840280(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_1447262c2(param_4);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_140840456();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = FUN_140840456();
      plVar4 = (longlong *)FUN_144718840(plVar2,uVar3);
      if ((plVar2 != plVar4) && (plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_30);
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0x100000000;
        goto joined_r0x00014084039f;
      }
    }
  }
  FUN_140232ee4(param_4,&local_30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x100000000;
joined_r0x00014084039f:
  if (local_30 != 0) {
    *(undefined4 *)(param_2 + 0x38) = 1;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    FUN_1408403ca(param_2,&local_30);
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408403ca FUN_1408403ca body=140 status=ok
// SIG undefined FUN_1408403ca(void)

void FUN_1408403ca(char *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*param_1 == '\x03') {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  else if (*param_1 == '\x01') {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  *param_1 = '\x03';
  *(undefined8 *)(param_1 + 8) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(param_1 + 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x20] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,*(int *)(param_1 + 0x28) + -1,1);
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
  }
  return;
}



// FUNCTION 140840456 FUN_140840456 body=228 status=ok
// SIG undefined FUN_140840456(void)

longlong FUN_140840456(void)

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
  if (DAT_14cb6a140 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14875cec7;
    local_40 = FUN_146524f56;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"InventoryIdentityProvider",&DAT_14cb6a140,&DAT_14875cec6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6a140;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14084053c FUN_14084053c body=98 status=ok
// SIG undefined FUN_14084053c(void)

longlong FUN_14084053c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14084059e();
  lVar3 = param_1;
  if ((lVar2 != param_2) && (lVar3 = switchD_143c3d4dc::caseD_57(param_1,param_2), lVar3 == 0)) {
    lVar3 = FUN_1401fa540();
    if ((lVar3 == param_2) && (plVar1 = *(longlong **)(param_1 + 0x1b0), plVar1 != (longlong *)0x0))
    {
                    /* WARNING: Could not recover jumptable at 0x000140840592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,param_2);
      return lVar3;
    }
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 14084059e FUN_14084059e body=228 status=ok
// SIG undefined FUN_14084059e(void)

longlong FUN_14084059e(void)

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
  if (DAT_14cb69860 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148755b89;
    local_40 = FUN_146521d8e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"JunkSystemObject",&DAT_14cb69860,&DAT_148755b88);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb69860;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140840684 FUN_140840684 body=1105 status=ok
// SIG undefined FUN_140840684(void)

undefined8 * FUN_140840684(undefined8 *param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  undefined1 auStack_368 [32];
  undefined1 local_348 [600];
  uint local_f0;
  undefined8 local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  *param_1 = &PTR_FUN_14a34ab10;
  if ((((byte)(DAT_14c760d84 != 0 & DAT_14ca84f5a & (DAT_14ca76a68 ^ 1)) != 0) ||
      (DAT_14ca76a80 == 0)) && (puVar5 = (undefined8 *)param_1[4], puVar5 != (undefined8 *)0x0)) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*puVar5)(puVar5,1);
    }
    else if (((iVar3 == 2) &&
             (bVar9 = (*(ushort *)((longlong)param_1 + 0xfa) >> 0xb & 1) == 0,
             (~(bVar9 | DAT_14ca76a68) & 1) != 0 || (bVar9 & (DAT_14ca76a80 ^ 1)) != 0)) &&
            ((~DAT_14ca76a68 & DAT_14ca84f5a & DAT_14c760d84 != 0) != 0 ||
             ((DAT_14ca76a80 ^ 1) & 1) != 0)) {
      lVar6 = **(longlong **)(DAT_14ca77418 + 0x1b0);
      uVar7 = param_1[3];
      puVar5 = (undefined8 *)param_1[4];
      if ((DAT_14ca77568 == '\x01') && (DAT_14ca81488 != 0)) {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x368));
        if (*(int *)(puVar5 + 1) != 1) {
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x368));
          goto LAB_140840860;
        }
        FUN_1406f72f9(local_348,param_1 + 6,uVar7);
        local_f0 = 1;
        if (DAT_14ca81480 == 0) {
          local_f0 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
        }
        local_78 = FUN_1406f7120(local_348);
        FUN_140840ad6(lVar6 + 0x2c8,local_348);
        if (((DAT_14ca77568 != '\x01') || (DAT_14ca81488 == 0)) ||
           (cVar8 = FUN_140840c92(DAT_14ca81488,puVar5), cVar8 == '\0')) {
          piVar1 = (int *)(puVar5 + 1);
          LOCK();
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (puVar5 != (undefined8 *)0x0 && *piVar1 == 0) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
      }
      else {
LAB_140840860:
        AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x368));
        LOCK();
        piVar1 = (int *)(puVar5 + 1);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (puVar5 == (undefined8 *)0x0 || iVar3 != 1) {
          if (iVar3 != 1) {
            LOCK();
            *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
            UNLOCK();
            goto LAB_1408408fb;
          }
        }
        else {
          (**(code **)*puVar5)(puVar5,1);
        }
        FUN_1406f72f9(local_348,param_1 + 6,uVar7);
        local_f0 = 1;
        if (DAT_14ca81480 == 0) {
          local_f0 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
        }
        local_78 = FUN_1406f7120(local_348);
        FUN_140840ad6(lVar6 + 0x2c8,local_348);
      }
LAB_1408408fb:
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x368));
    }
  }
  if (param_1[9] == 0) {
    LOCK();
    puVar2 = (uint *)(param_1[6] + 8);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
    LOCK();
    puVar2 = (uint *)(param_1[7] + 8);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
  }
  else {
    LOCK();
    puVar2 = (uint *)(param_1[9] + 8);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
    if (param_1[10] == 0) goto LAB_14084094a;
    LOCK();
    puVar2 = (uint *)(param_1[10] + 8);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
  }
  if ((uVar4 & 0x3fffffff) == 1) {
    FUN_144a54812();
  }
LAB_14084094a:
  if (param_1[8] != 0) {
    LOCK();
    puVar2 = (uint *)(param_1[8] + 8);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0xb] != 0) {
    LOCK();
    puVar2 = (uint *)(param_1[0xb] + 8);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0xc] != 0) {
    LOCK();
    puVar2 = (uint *)(param_1[0xc] + 8);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0xd] != 0) {
    LOCK();
    puVar2 = (uint *)(param_1[0xd] + 8);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0xe] != 0) {
    LOCK();
    puVar2 = (uint *)(param_1[0xe] + 8);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140840ad6 FUN_140840ad6 body=321 status=ok
// SIG undefined FUN_140840ad6(void)

void FUN_140840ad6(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    uVar7 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(param_2 + 0x2d0);
    lVar3 = (longlong)*(int *)((longlong)plVar8 + uVar7 * 4);
    if (lVar3 != -1) {
      lVar3 = lVar3 * 0x310 + *param_1;
      cVar2 = FUN_14049ae8a(&local_39,lVar3,param_2);
      if (cVar2 == '\0') {
        do {
          lVar5 = lVar3;
          lVar3 = (longlong)*(int *)(lVar5 + 0x308);
          if (lVar3 == -1) goto LAB_140840b97;
          lVar3 = lVar3 * 0x310 + *param_1;
          cVar2 = FUN_14049ae8a(&local_39,lVar3,param_2);
        } while (cVar2 == '\0');
        piVar6 = (int *)(lVar5 + 0x308);
      }
      else {
        piVar6 = (int *)((longlong)plVar8 + uVar7 * 4);
      }
      iVar1 = *piVar6;
      lVar3 = *param_1;
      plVar8 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar8 = (longlong *)param_1[8];
      }
      lVar5 = (longlong)*(int *)(lVar3 + 0x30c + (longlong)iVar1 * 0x310);
      iVar4 = *(int *)((longlong)plVar8 + lVar5 * 4);
      if (iVar4 == iVar1) {
        piVar6 = (int *)((longlong)plVar8 + lVar5 * 4);
      }
      else {
        do {
          piVar6 = (int *)(lVar3 + (longlong)iVar4 * 0x310 + 0x308);
          iVar4 = *piVar6;
        } while (iVar4 != iVar1);
      }
      *piVar6 = *(int *)(lVar3 + (longlong)iVar1 * 0x310 + 0x308);
      FUN_140840c18(param_1);
    }
  }
LAB_140840b97:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140840c18 FUN_140840c18 body=122 status=ok
// SIG undefined FUN_140840c18(void)

void FUN_140840c18(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x310) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x310) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x310 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 140840c92 FUN_140840c92 body=132 status=ok
// SIG undefined FUN_140840c92(void)

ulonglong FUN_140840c92(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    if (*(longlong *)(param_1 + 0x40) == 0) {
      FUN_1431805de(param_1);
    }
    puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *(undefined1 *)(puVar1 + 1) = 1;
    *puVar1 = param_2;
    puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar2 = 0;
    puVar2[1] = puVar1;
    uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),puVar2 != (undefined8 *)0x0);
    if (puVar2 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_1 + 0x10);
      *(undefined8 **)(param_1 + 0x10) = puVar2;
      *puVar1 = puVar2;
    }
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 140840d16 FUN_140840d16 body=304 status=ok
// SIG undefined FUN_140840d16(void)

void FUN_140840d16(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(param_1 + 0x208) != 0) && (lVar3 = *(longlong *)(param_1 + 0x288), lVar3 != 0)) {
    FUN_1448d5e3c(&local_40,param_1 + 0x208);
    lVar4 = *(longlong *)(local_40 + 0x4f0);
    AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x30));
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
    if (*(int *)(param_1 + 0x298) != *(int *)(lVar4 + 0x28)) {
      *(int *)(param_1 + 0x298) = *(int *)(lVar4 + 0x28);
      *(undefined4 *)(lVar3 + 0xc0) = *(undefined4 *)(lVar4 + 0x10);
      FUN_140840e48(lVar3 + 0xb0,lVar4);
      *(bool *)(lVar3 + 0xcc) = *(int *)(param_1 + 0x29c) < *(int *)(lVar3 + 0xb8);
      iVar6 = *(int *)(lVar3 + 0xb8) - *(int *)(param_1 + 0x29c);
      iVar7 = 0;
      if (0 < iVar6) {
        iVar7 = iVar6;
      }
      *(int *)(lVar3 + 200) = iVar7;
      puVar5 = *(ushort **)(lVar3 + 0x80);
      if (puVar5 != (ushort *)0x0) {
        *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x30));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140840e48 FUN_140840e48 body=93 status=ok
// SIG undefined FUN_140840e48(void)

undefined8 * FUN_140840e48(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140840ea5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140840f58(param_1,iVar1);
      FUN_140840ed4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140840ea5 FUN_140840ea5 body=47 status=ok
// SIG undefined FUN_140840ea5(void)

void FUN_140840ea5(longlong param_1,int param_2)

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



// FUNCTION 140840ed4 FUN_140840ed4 body=132 status=ok
// SIG undefined FUN_140840ed4(void)

void FUN_140840ed4(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      *(undefined8 *)((longlong)puVar5 + -0xb) = *(undefined8 *)((longlong)param_2 + 0xd);
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      *(undefined4 *)(puVar5 + -3) = *param_2;
      *(undefined4 *)((longlong)puVar5 + -0x14) = uVar2;
      *(undefined4 *)(puVar5 + -2) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar4;
      *puVar5 = 0;
      iVar1 = param_2[8];
      _Src = *(void **)(param_2 + 6);
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 10;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140840f58 FUN_140840f58 body=336 status=ok
// SIG undefined FUN_140840f58(void)

void FUN_140840f58(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140840fca;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_140840fca:
    iVar5 = (int)(uVar4 / 0x28);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x28,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1408410b2 FUN_1408410b2 body=62 status=ok
// SIG undefined FUN_1408410b2(void)

void FUN_1408410b2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1408410f0(param_1 + 8);
  return;
}



// FUNCTION 1408410f0 FUN_1408410f0 body=55 status=ok
// SIG undefined FUN_1408410f0(void)

void FUN_1408410f0(longlong *param_1)

{
  FUN_140841128(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140841128 FUN_140841128 body=121 status=ok
// SIG undefined FUN_140841128(void)

void FUN_140841128(longlong param_1,int param_2)

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



// FUNCTION 1408411a2 FUN_1408411a2 body=1657 status=ok
// SIG undefined FUN_1408411a2(void)

undefined8 * FUN_1408411a2(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
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
  longlong lVar16;
  undefined8 *puVar17;
  void *pvVar18;
  undefined8 *puVar19;
  
  *param_1 = &PTR_FUN_14a2e9940;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = uVar4;
  lVar16 = *(longlong *)(param_2 + 0x18);
  param_1[3] = lVar16;
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  uVar5 = *(undefined4 *)(param_2 + 0x20);
  uVar6 = *(undefined4 *)(param_2 + 0x24);
  uVar7 = *(undefined4 *)(param_2 + 0x28);
  uVar8 = *(undefined4 *)(param_2 + 0x2c);
  uVar9 = *(undefined4 *)(param_2 + 0x34);
  uVar10 = *(undefined4 *)(param_2 + 0x38);
  uVar11 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar9;
  *(undefined4 *)(param_1 + 7) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar11;
  *(undefined4 *)(param_1 + 4) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 5) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar8;
  FUN_144893b4c(param_1 + 8,param_2 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x4c8);
  param_1[0x98] = *(undefined8 *)(param_2 + 0x4c0);
  param_1[0x99] = uVar4;
  param_1[0x9a] = *(undefined8 *)(param_2 + 0x4d0);
  param_1[0x9b] = *(undefined8 *)(param_2 + 0x4d8);
  param_1[0x9c] = *(undefined8 *)(param_2 + 0x4e0);
  param_1[0x9d] = *(undefined8 *)(param_2 + 0x4e8);
  param_1[0x9e] = *(undefined8 *)(param_2 + 0x4f0);
  memcpy(param_1 + 0x9f,(void *)(param_2 + 0x4f8),0xc14);
  cVar1 = *(char *)(param_2 + 0x1170);
  *(char *)(param_1 + 0x22e) = cVar1;
  if (cVar1 == '\x01') {
    puVar17 = (undefined8 *)(param_2 + 0x1110);
    puVar19 = param_1 + 0x222;
    for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar19 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar19 = puVar19 + 1;
    }
  }
  memcpy(param_1 + 0x230,(void *)(param_2 + 0x1180),0xd14);
  param_1[0x3d7] = 0;
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  param_1[0x3d3] = 0;
  param_1[0x3d4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ecc) = 0;
  param_1[0x3db] = 0;
  *(undefined4 *)(param_1 + 0x3dc) = 0;
  FUN_144899d7a(param_1 + 0x3d3,param_2 + 0x1e98);
  if (*(int *)(param_2 + 0x1ef4) == -1) {
    param_1[0x3dd] = 0;
    param_1[0x3de] = 0xffffffff00000000;
    param_1[0x3e1] = 0;
    *(undefined4 *)(param_1 + 0x3e2) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1f14) = 0x80;
    *(undefined4 *)(param_1 + 0x3e3) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x1f1c) = 0;
    param_1[0x3e5] = 0;
    *(undefined4 *)(param_1 + 0x3e6) = 0;
  }
  else {
    param_1[0x3e1] = 0;
    *(undefined4 *)(param_1 + 0x3e2) = 0;
    param_1[0x3dd] = 0;
    param_1[0x3de] = 0;
    *(undefined8 *)((longlong)param_1 + 0x1f14) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + 0x1f1c) = 0;
    param_1[0x3e5] = 0;
    *(undefined4 *)(param_1 + 0x3e6) = 0;
    FUN_144899d7a(param_1 + 0x3dd,param_2 + 0x1ee8);
  }
  *(undefined1 *)(param_1 + 999) = *(undefined1 *)(param_2 + 0x1f38);
  param_1[0x400] = 0;
  iVar2 = *(int *)(param_2 + 0x2010);
  pvVar3 = *(void **)(param_2 + 0x2000);
  *(int *)(param_1 + 0x402) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2014) = 6;
  }
  else {
    pvVar18 = (void *)(param_2 + 8000);
    if (pvVar3 != (void *)0x0) {
      pvVar18 = pvVar3;
    }
    FUN_144715b40(param_1 + 1000,iVar2,0);
    puVar17 = (undefined8 *)param_1[0x400];
    if ((undefined8 *)param_1[0x400] == (undefined8 *)0x0) {
      puVar17 = param_1 + 1000;
    }
    memcpy(puVar17,pvVar18,(longlong)iVar2 << 5);
  }
  param_1[0x424] = 0;
  iVar2 = *(int *)(param_2 + 0x2130);
  pvVar3 = *(void **)(param_2 + 0x2120);
  *(int *)(param_1 + 0x426) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2134) = 8;
  }
  else {
    pvVar18 = (void *)(param_2 + 0x2020);
    if (pvVar3 != (void *)0x0) {
      pvVar18 = pvVar3;
    }
    FUN_144715cb0(param_1 + 0x404,iVar2,0);
    puVar17 = (undefined8 *)param_1[0x424];
    if ((undefined8 *)param_1[0x424] == (undefined8 *)0x0) {
      puVar17 = param_1 + 0x404;
    }
    memcpy(puVar17,pvVar18,(longlong)iVar2 << 5);
  }
  *(undefined4 *)(param_1 + 0x42e) = *(undefined4 *)(param_2 + 0x2170);
  uVar5 = *(undefined4 *)(param_2 + 0x2140);
  uVar6 = *(undefined4 *)(param_2 + 0x2144);
  uVar7 = *(undefined4 *)(param_2 + 0x2148);
  uVar8 = *(undefined4 *)(param_2 + 0x214c);
  uVar9 = *(undefined4 *)(param_2 + 0x2150);
  uVar10 = *(undefined4 *)(param_2 + 0x2154);
  uVar11 = *(undefined4 *)(param_2 + 0x2158);
  uVar12 = *(undefined4 *)(param_2 + 0x215c);
  uVar13 = *(undefined4 *)(param_2 + 0x2164);
  uVar14 = *(undefined4 *)(param_2 + 0x2168);
  uVar15 = *(undefined4 *)(param_2 + 0x216c);
  *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_2 + 0x2160);
  *(undefined4 *)((longlong)param_1 + 0x2164) = uVar13;
  *(undefined4 *)(param_1 + 0x42d) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0x216c) = uVar15;
  *(undefined4 *)(param_1 + 0x42a) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x2154) = uVar10;
  *(undefined4 *)(param_1 + 0x42b) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x215c) = uVar12;
  *(undefined4 *)(param_1 + 0x428) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x2144) = uVar6;
  *(undefined4 *)(param_1 + 0x429) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x214c) = uVar8;
  param_1[0x448] = 0;
  iVar2 = *(int *)(param_2 + 0x2250);
  pvVar3 = *(void **)(param_2 + 0x2240);
  *(int *)(param_1 + 0x44a) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2254) = 6;
  }
  else {
    pvVar18 = (void *)(param_2 + 0x2180);
    if (pvVar3 != (void *)0x0) {
      pvVar18 = pvVar3;
    }
    FUN_144715b40(param_1 + 0x430,iVar2,0);
    puVar17 = (undefined8 *)param_1[0x448];
    if ((undefined8 *)param_1[0x448] == (undefined8 *)0x0) {
      puVar17 = param_1 + 0x430;
    }
    memcpy(puVar17,pvVar18,(longlong)iVar2 << 5);
  }
  param_1[0x46c] = 0;
  iVar2 = *(int *)(param_2 + 0x2370);
  pvVar3 = *(void **)(param_2 + 0x2360);
  *(int *)(param_1 + 0x46e) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2374) = 8;
  }
  else {
    pvVar18 = (void *)(param_2 + 0x2260);
    if (pvVar3 != (void *)0x0) {
      pvVar18 = pvVar3;
    }
    FUN_144715cb0(param_1 + 0x44c,iVar2,0);
    puVar17 = (undefined8 *)param_1[0x46c];
    if ((undefined8 *)param_1[0x46c] == (undefined8 *)0x0) {
      puVar17 = param_1 + 0x44c;
    }
    memcpy(puVar17,pvVar18,(longlong)iVar2 << 5);
  }
  memcpy(param_1 + 0x470,(void *)(param_2 + 0x2380),0xa0);
  param_1[0x484] = *(undefined8 *)(param_2 + 0x2420);
  param_1[0x485] = *(undefined8 *)(param_2 + 0x2428);
  uVar4 = *(undefined8 *)(param_2 + 0x2441);
  *(undefined8 *)((longlong)param_1 + 0x2439) = *(undefined8 *)(param_2 + 0x2439);
  *(undefined8 *)((longlong)param_1 + 0x2441) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x2438);
  param_1[0x486] = *(undefined8 *)(param_2 + 0x2430);
  param_1[0x487] = uVar4;
  cVar1 = *(char *)(param_2 + 0x2450);
  *(char *)(param_1 + 0x48a) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x244c) = *(undefined4 *)(param_2 + 0x244c);
  }
  cVar1 = *(char *)(param_2 + 0x2458);
  *(char *)(param_1 + 0x48b) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x2454) = *(undefined4 *)(param_2 + 0x2454);
  }
  uVar5 = *(undefined4 *)(param_2 + 0x2464);
  uVar6 = *(undefined4 *)(param_2 + 0x2468);
  uVar7 = *(undefined4 *)(param_2 + 0x246c);
  *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_2 + 0x2460);
  *(undefined4 *)((longlong)param_1 + 0x2464) = uVar5;
  *(undefined4 *)(param_1 + 0x48d) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x246c) = uVar7;
  cVar1 = *(char *)(param_2 + 0x2471);
  *(char *)((longlong)param_1 + 0x2471) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x48e) = *(undefined1 *)(param_2 + 0x2470);
  }
  cVar1 = *(char *)(param_2 + 0x2500);
  *(char *)(param_1 + 0x4a0) = cVar1;
  if (cVar1 == '\x01') {
    puVar17 = (undefined8 *)(param_2 + 0x2480);
    puVar19 = param_1 + 0x490;
    for (lVar16 = 0x10; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar19 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar19 = puVar19 + 1;
    }
  }
  FUN_14021dd82(param_1 + 0x4a2,param_2 + 0x2510);
  param_1[0x604] = *(undefined8 *)(param_2 + 0x3020);
  lVar16 = *(longlong *)(param_2 + 0x3028);
  param_1[0x605] = lVar16;
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  lVar16 = *(longlong *)(param_2 + 0x3030);
  param_1[0x606] = lVar16;
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  lVar16 = *(longlong *)(param_2 + 0x3038);
  param_1[0x607] = lVar16;
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  param_1[0x608] = *(undefined8 *)(param_2 + 0x3040);
  lVar16 = *(longlong *)(param_2 + 0x3048);
  param_1[0x609] = lVar16;
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  lVar16 = *(longlong *)(param_2 + 0x3050);
  param_1[0x60a] = lVar16;
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x60b) = *(undefined4 *)(param_2 + 0x3058);
  param_1[0x60c] = 0;
  iVar2 = *(int *)(param_2 + 0x3068);
  uVar4 = *(undefined8 *)(param_2 + 0x3060);
  *(int *)(param_1 + 0x60d) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x306c) = 0;
  }
  else {
    FUN_1472ce84c(param_1 + 0x60c,iVar2,0);
    FUN_1472ce8bf(param_1[0x60c],uVar4,iVar2);
  }
  lVar16 = *(longlong *)(param_2 + 0x3070);
  param_1[0x60e] = lVar16;
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  lVar16 = *(longlong *)(param_2 + 0x3078);
  param_1[0x60f] = lVar16;
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  param_1[0x610] = *(undefined8 *)(param_2 + 0x3080);
  lVar16 = *(longlong *)(param_2 + 0x3088);
  param_1[0x611] = lVar16;
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  puVar17 = (undefined8 *)(param_2 + 0x3090);
  puVar19 = param_1 + 0x612;
  for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar19 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar19 = puVar19 + 1;
  }
  lVar16 = *(longlong *)(param_2 + 0x30e0);
  param_1[0x61c] = lVar16;
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  param_1[0x61d] = *(undefined8 *)(param_2 + 0x30e8);
  return param_1;
}



// FUNCTION 14084181c FUN_14084181c body=297 status=ok
// SIG undefined FUN_14084181c(void)

void FUN_14084181c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14042b052();
  lVar2 = param_1[0x18];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = param_1[0x17];
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar5) != 0) {
        FUN_1400337aa();
      }
      lVar5 = lVar5 + 0x80;
    } while ((longlong)(int)lVar2 * 0x80 != lVar5);
  }
  (**(code **)(*param_1 + 0x340))(param_1,(char)param_1[0x19]);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14094967a(param_1,&local_48,(char)param_1[0x19]);
  lVar2 = param_1[0x1c];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = param_1[0x1b];
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar5) != 0) {
        FUN_1400337aa();
      }
      lVar5 = lVar5 + 0x28;
    } while ((longlong)(int)lVar2 * 0x28 != lVar5);
  }
  if ((longlong)(int)param_1[0x1e] != 0) {
    plVar3 = (longlong *)param_1[0x1d];
    plVar4 = plVar3 + (longlong)(int)param_1[0x1e] * 2;
    do {
      if (*plVar3 != 0) {
        FUN_1400337aa();
      }
      if (plVar3[1] != 0) {
        FUN_1400337aa();
      }
      plVar3 = plVar3 + 2;
    } while (plVar3 != plVar4);
  }
  FUN_14042b016(param_1 + 0x99);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140841948 FUN_140841948 body=375 status=ok
// SIG undefined FUN_140841948(void)

longlong FUN_140841948(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_140841ac0();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 140841ac0 FUN_140841ac0 body=228 status=ok
// SIG undefined FUN_140841ac0(void)

longlong FUN_140841ac0(void)

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
  if (DAT_14cbbf338 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14585df80;
    local_38 = &LAB_148caccd7;
    local_40 = FUN_1457d0f1d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/OakGame",L"OakWorldPainterLayer_Spawn",&DAT_14cbbf338,&DAT_148caccd6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbf338;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140841ba6 FUN_140841ba6 body=94 status=ok
// SIG undefined FUN_140841ba6(void)

undefined8 * FUN_140841ba6(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140841c04(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b455b90;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return puVar1;
}



// FUNCTION 140841c04 FUN_140841c04 body=140 status=ok
// SIG undefined FUN_140841c04(void)

undefined8 * FUN_140841c04(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  
  *param_1 = &PTR_LAB_14b4575b0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 0x10);
  *param_1 = &PTR_LAB_14b455710;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = 0;
  iVar2 = *(int *)(param_2 + 0x28);
  _Src = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 5) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    uVar3 = 0;
  }
  else {
    puVar1 = param_1 + 4;
    FUN_140841c90(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2);
    uVar3 = *puVar1;
  }
  param_1[1] = uVar3;
  return param_1;
}



// FUNCTION 140841c90 FUN_140841c90 body=309 status=ok
// SIG undefined FUN_140841c90(void)

void FUN_140841c90(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = param_2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = (longlong)(int)param_2 + 0xf;
        if (param_2 < 0x7ff1) {
          uVar3 = (uint)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar7 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (uint)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140841cfa;
              lVar1 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar1 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = DAT_14c841df8;
          }
          uVar3 = -uVar6 & ((int)(uVar4 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,(longlong)(int)param_2,1);
      }
    }
LAB_140841cfa:
    uVar6 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar3) {
      uVar6 = uVar3;
    }
  }
  if ((int)param_3 < (int)uVar6) {
    FUN_1446f8d3c(param_1,0,uVar6,1,1);
    param_3 = uVar6;
  }
  *(uint *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140841dcc FUN_140841dcc body=57 status=ok
// SIG undefined FUN_140841dcc(void)

void FUN_140841dcc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb213a8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb213a8 = FUN_140002ddd(FUN_146432c72,uVar1,L"GbxBrainAspect_Gps");
  }
  return;
}



// FUNCTION 140841e06 FUN_140841e06 body=13 status=ok
// SIG undefined FUN_140841e06(void)

void FUN_140841e06(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
  FUN_140841e14(param_1,1);
  return;
}



// FUNCTION 140841e14 FUN_140841e14 body=151 status=ok
// SIG undefined FUN_140841e14(void)

void FUN_140841e14(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  
  fVar5 = (float)param_1[2];
  iVar1 = param_1[1];
  iVar2 = *param_1;
  lVar4 = (longlong)iVar2;
  if (lVar4 != 0) {
    fVar5 = (float)FUN_14020a770(lVar4 * 0x88 + DAT_14c9a3d60 + -0x88,fVar5,0);
  }
  iVar3 = (int)fVar5;
  param_1[1] = iVar3;
  if (((iVar2 != 0) && (param_2 != '\0')) && (iVar1 != iVar3)) {
    FUN_14020a86a(DAT_14c9a3d60 + lVar4 * 0x88 + -0x18,(float)iVar1,(float)iVar3);
    return;
  }
  return;
}



// FUNCTION 140841eba FUN_140841eba body=259 status=ok
// SIG undefined FUN_140841eba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140841eba(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b04b5b0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140841fbd(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
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
    thunk_FUN_1400020a8(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 140841fbd FUN_140841fbd body=51 status=ok
// SIG undefined FUN_140841fbd(void)

void FUN_140841fbd(longlong param_1,int param_2)

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



// FUNCTION 140841ff0 FUN_140841ff0 body=108 status=ok
// SIG undefined FUN_140841ff0(void)

void FUN_140841ff0(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *param_1;
  puVar3 = *(undefined8 **)(lVar2 + (longlong)(int)param_2 * 8);
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  iVar4 = (int)param_1[1];
  iVar5 = ~param_2 + iVar4;
  if (iVar5 != 0) {
    iVar6 = 1;
    if (iVar5 < 1) {
      iVar6 = iVar5;
    }
    memmove((void *)(lVar2 + (longlong)(int)param_2 * 8),
            (void *)(lVar2 + (longlong)(iVar4 - iVar6) * 8),(longlong)iVar6 << 3);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 14084205c FUN_14084205c body=370 status=ok
// SIG undefined FUN_14084205c(void)

void FUN_14084205c(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140842103;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_140842103:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
    }
  }
  return;
}



// FUNCTION 1408421ce FUN_1408421ce body=2717 status=ok
// SIG undefined FUN_1408421ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408421ce(longlong *param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar1;
  float *pfVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Src;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  void **ppvVar11;
  byte *pbVar12;
  longlong *plVar13;
  int *piVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  longlong lVar19;
  int iVar20;
  undefined4 uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  ulonglong uVar28;
  bool bVar29;
  double dVar30;
  float fVar31;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  longlong local_108;
  void *local_100;
  int local_f8;
  void **local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_100 = (void *)CONCAT44(local_100._4_4_,param_2);
    FUN_14477b072(param_1,DAT_14cac9bd0);
    (**(code **)(*param_1 + 0x248))(param_1);
    lVar9 = FUN_1447210f0(param_1);
    if (lVar9 != 0) {
      uVar15 = FUN_14119d0a4(lVar9);
      FUN_140e65914(uVar15,param_1,*(undefined4 *)(lVar9 + 0x6f4));
    }
  }
  lVar9 = FUN_1447210f0(param_1);
  if (lVar9 != 0) {
    fVar31 = (float)*(double *)(lVar9 + 0x6d0);
    if (_DAT_14c7639f4 < fVar31 - *(float *)(param_1 + 0x84)) {
      *(float *)(param_1 + 0x84) = fVar31;
      fVar31 = fVar31 - _DAT_14c7639f0;
      uVar8 = *(uint *)(param_1 + 0x81);
      uVar24 = (ulonglong)(int)uVar8;
      if (0 < (longlong)uVar24) {
        iVar25 = -uVar8;
        lVar9 = uVar24 << 4;
        do {
          pfVar2 = (float *)(param_1[0x80] + -8 + lVar9);
          if (*pfVar2 <= fVar31 && fVar31 != *pfVar2) {
            plVar13 = *(longlong **)(param_1[0x80] + -0x10 + lVar9);
            if ((plVar13 != (longlong *)0x0) && ((*(uint *)(plVar13 + 1) >> 0x1e & 1) == 0)) {
              (**(code **)(*plVar13 + 0x420))();
              uVar8 = *(uint *)(param_1 + 0x81);
            }
            if (uVar24 != uVar8) {
              iVar27 = 1;
              if ((int)(uVar8 + iVar25) < 1) {
                iVar27 = uVar8 + iVar25;
              }
              memmove((void *)(param_1[0x80] + lVar9 + -0x10),
                      (void *)((longlong)(int)(uVar8 - iVar27) * 0x10 + param_1[0x80]),
                      (longlong)iVar27 << 4);
              uVar8 = *(uint *)(param_1 + 0x81);
            }
            uVar8 = uVar8 - 1;
            *(uint *)(param_1 + 0x81) = uVar8;
          }
          iVar25 = iVar25 + 1;
          lVar9 = lVar9 + -0x10;
          bVar29 = 1 < uVar24;
          uVar24 = uVar24 - 1;
        } while (bVar29);
      }
      uVar8 = *(uint *)(param_1 + 0x83);
      uVar24 = (ulonglong)(int)uVar8;
      if (0 < (longlong)uVar24) {
        iVar25 = -uVar8;
        lVar9 = uVar24 * 0x18;
        do {
          pfVar2 = (float *)(param_1[0x82] + -8 + lVar9);
          if (*pfVar2 <= fVar31 && fVar31 != *pfVar2) {
            plVar13 = *(longlong **)(param_1[0x82] + -0x10 + lVar9);
            if ((plVar13 != (longlong *)0x0) && ((*(uint *)(plVar13 + 1) >> 0x1e & 1) == 0)) {
              (**(code **)(*plVar13 + 0x420))();
              uVar8 = *(uint *)(param_1 + 0x83);
            }
            if (uVar24 != uVar8) {
              iVar27 = uVar8 + iVar25;
              if (0 < iVar27) {
                iVar27 = 1;
              }
              memmove((void *)(param_1[0x82] + lVar9 + -0x18),
                      (void *)(param_1[0x82] + (longlong)(int)(uVar8 - iVar27) * 0x18),
                      (longlong)iVar27 * 0x18);
              uVar8 = *(uint *)(param_1 + 0x83);
            }
            uVar8 = uVar8 - 1;
            *(uint *)(param_1 + 0x83) = uVar8;
          }
          iVar25 = iVar25 + 1;
          lVar9 = lVar9 + -0x18;
          bVar29 = 1 < uVar24;
          uVar24 = uVar24 - 1;
        } while (bVar29);
      }
      local_118 = CONCAT44(local_118._4_4_,(int)DAT_14c872be0);
      iVar25 = (int)param_1[0x8a];
      if (iVar25 == 0) {
        uVar24 = 1;
        uVar28 = 0;
        iVar27 = 0;
        iVar7 = 0;
      }
      else {
        puVar18 = (uint *)param_1[0x89];
        if ((uint *)param_1[0x89] == (uint *)0x0) {
          puVar18 = (uint *)(param_1 + 0x87);
        }
        uVar8 = *puVar18;
        if (uVar8 == 0) {
          iVar27 = iVar25 + 0x1e;
          if (-1 < iVar25 + -1) {
            iVar27 = iVar25 + -1;
          }
          uVar28 = 0;
          uVar24 = (ulonglong)(uint)(iVar27 >> 5);
          if (iVar27 >> 5 < 1) {
            uVar24 = uVar28;
          }
          iVar7 = 0;
          do {
            if (uVar24 == uVar28) goto LAB_140842255;
            iVar7 = iVar7 + 0x20;
            uVar8 = puVar18[uVar28 + 1];
            uVar28 = uVar28 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar28 = 0;
          iVar7 = 0;
        }
        uVar24 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar24 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar27 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar25 <= iVar27) {
          iVar27 = iVar25;
        }
      }
      if (iVar27 < iVar25) {
        local_118 = CONCAT44(local_118._4_4_,(int)DAT_14c872be0 + DAT_14c7639e0 * -2);
        uVar8 = 0xffffffff;
        do {
          lVar9 = param_1[0x85];
          lVar19 = (longlong)iVar27;
          if (*(uint *)(lVar9 + 4 + lVar19 * 0x14) < (uint)local_118) {
            plVar13 = (longlong *)param_1[0x8d];
            if ((longlong *)param_1[0x8d] == (longlong *)0x0) {
              plVar13 = param_1 + 0x8c;
            }
            lVar26 = (longlong)*(int *)(lVar9 + 0x10 + lVar19 * 0x14);
            iVar25 = *(int *)((longlong)plVar13 + lVar26 * 4);
            if (iVar25 == iVar27) {
              piVar14 = (int *)((longlong)plVar13 + lVar26 * 4);
            }
            else {
              do {
                piVar14 = (int *)(lVar9 + (longlong)iVar25 * 0x14 + 0xc);
                iVar25 = *piVar14;
              } while (iVar25 != iVar27);
            }
            *piVar14 = *(int *)(lVar9 + lVar19 * 0x14 + 0xc);
            FUN_140842cb4(param_1 + 0x85);
            iVar25 = (int)param_1[0x8a];
          }
          uVar8 = uVar8 & ~(uint)uVar24;
          puVar18 = (uint *)param_1[0x89];
          if ((uint *)param_1[0x89] == (uint *)0x0) {
            puVar18 = (uint *)(param_1 + 0x87);
          }
          iVar27 = (int)uVar28;
          lVar9 = (longlong)iVar27;
          uVar16 = puVar18[lVar9] & uVar8;
          if (uVar16 == 0) {
            iVar20 = iVar25 + 0x1e;
            if (-1 < iVar25 + -1) {
              iVar20 = iVar25 + -1;
            }
            iVar20 = iVar20 >> 5;
            iVar17 = iVar20;
            if (iVar20 < iVar27) {
              iVar17 = iVar27;
            }
            if (iVar20 <= iVar27) break;
            lVar19 = 0;
            while( true ) {
              iVar7 = iVar7 + 0x20;
              uVar16 = puVar18[lVar9 + lVar19 + 1];
              if (uVar16 != 0) break;
              lVar19 = lVar19 + 1;
              if (iVar17 - lVar9 == lVar19) goto LAB_140842255;
            }
            uVar28 = (ulonglong)(iVar27 + (int)lVar19 + 1);
            uVar8 = 0xffffffff;
          }
          uVar24 = (ulonglong)(-uVar16 & uVar16);
          uVar1 = uVar24 * 2 + 1;
          lVar9 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar27 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        } while (iVar27 < iVar25);
      }
    }
LAB_140842255:
    FUN_140385b76(param_1);
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x9b);
    EnterCriticalSection(lpCriticalSection);
    plVar13 = param_1 + 0xa0;
    uVar8 = *(uint *)(param_1 + 0xa3);
    if ((longlong)(int)uVar8 != 0) {
      iVar25 = (int)param_1[0xa1];
      *(uint *)(param_1 + 0xa1) = iVar25 + uVar8;
      if ((uint)(*(int *)((longlong)param_1 + 0x50c) - iVar25) < uVar8) {
        FUN_145a23a0e(plVar13,iVar25);
      }
      memcpy((void *)((longlong)iVar25 * 0x18 + *plVar13),(void *)param_1[0xa2],
             (longlong)(int)uVar8 * 0x18);
    }
    *(undefined4 *)(param_1 + 0xa3) = 0;
    if (*(int *)((longlong)param_1 + 0x51c) < 0) {
      FUN_1488ee8e6(param_1 + 0xa2);
    }
    LeaveCriticalSection(lpCriticalSection);
    fVar31 = (float)FUN_140842c6c(param_1);
    lVar9 = param_1[0xa1];
    if (0 < (longlong)(int)lVar9) {
      lVar19 = 0;
      do {
        lVar26 = param_1[0xa0];
        uVar21 = 2;
        if (*(longlong **)(lVar26 + lVar19) != (longlong *)0x0) {
          fVar3 = *(float *)(param_1 + 0x9a);
          cVar6 = (**(code **)(**(longlong **)(lVar26 + lVar19) + 0x20))();
          if (cVar6 != '\0') {
            if (fVar31 <= fVar3) {
              lVar10 = FUN_1447210f0(param_1);
              dVar30 = (double)*(float *)(lVar26 + 0xc + lVar19);
              uVar21 = 0;
              if (*(double *)(lVar10 + 0x6d0) <= dVar30 && dVar30 != *(double *)(lVar10 + 0x6d0))
              goto LAB_1408424a5;
            }
            FUN_140842d26(param_1);
            uVar21 = 1;
          }
        }
LAB_1408424a5:
        *(undefined4 *)(lVar26 + 0x10 + lVar19) = uVar21;
        lVar19 = lVar19 + 0x18;
      } while ((longlong)(int)lVar9 * 0x18 != lVar19);
      uVar24 = (ulonglong)(int)param_1[0xa1];
      local_80 = (void **)0x0;
      local_78 = 0x1000000000;
      if (0 < (longlong)uVar24) {
        iVar25 = -(int)param_1[0xa1];
        lVar9 = uVar24 * 0x18;
        do {
          lVar19 = *plVar13;
          if (*(int *)(lVar19 + -8 + lVar9) != 0) {
            lVar26 = (longlong)(int)(uint)local_78;
            uVar8 = (uint)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,uVar8);
            if (local_78._4_4_ < uVar8) {
              FUN_1488eeece(&local_100);
            }
            ppvVar11 = local_80;
            if (local_80 == (void **)0x0) {
              ppvVar11 = &local_100;
            }
            ppvVar11[lVar26] = *(void **)(lVar19 + -0x18 + lVar9);
            uVar8 = *(uint *)(param_1 + 0xa1);
            if (uVar24 != uVar8) {
              memmove((void *)(param_1[0xa0] + lVar9 + -0x18),(void *)(param_1[0xa0] + lVar9),
                      (longlong)(int)(uVar8 + iVar25) * 0x18);
              uVar8 = *(uint *)(param_1 + 0xa1);
            }
            *(uint *)(param_1 + 0xa1) = uVar8 - 1;
          }
          iVar25 = iVar25 + 1;
          lVar9 = lVar9 + -0x18;
          bVar29 = 1 < uVar24;
          uVar24 = uVar24 - 1;
        } while (bVar29);
        if (0 < (int)(uint)local_78) {
          EnterCriticalSection(lpCriticalSection);
          lVar9 = (longlong)(int)(uint)local_78;
          if (lVar9 != 0) {
            iVar25 = (int)param_1[0xa5];
            *(uint *)(param_1 + 0xa5) = iVar25 + (uint)local_78;
            if ((uint)(*(int *)((longlong)param_1 + 0x52c) - iVar25) < (uint)local_78) {
              FUN_14574dc1a(param_1 + 0xa4,iVar25);
            }
            ppvVar11 = &local_100;
            if (local_80 != (void **)0x0) {
              ppvVar11 = local_80;
            }
            memcpy((void *)((longlong)iVar25 * 8 + param_1[0xa4]),ppvVar11,lVar9 << 3);
          }
          bVar29 = (longlong)local_78 < 0;
          local_78 = local_78 & 0xffffffff00000000;
          if (bVar29) {
            FUN_1488eefd4(&local_100);
          }
          LeaveCriticalSection(lpCriticalSection);
        }
      }
      if (local_80 != (void **)0x0) {
        FUN_1400020a8();
      }
    }
  }
  iVar25 = DAT_14c7639d8;
  if (0 < (int)param_1[0x79]) {
    iVar27 = (int)param_1[0x79] + -1;
    lVar9 = 0;
    do {
      lVar19 = *(longlong *)(param_1[0x78] + lVar9 * 8);
      if (*(char *)(lVar19 + 8) == '\x01') {
        *(undefined1 *)(lVar19 + 8) = 0;
        iVar7 = *(int *)(lVar19 + 0x18);
        if (0 < iVar7) {
          lVar26 = 0;
          iVar20 = 0;
          do {
            lVar10 = *(longlong *)(*(longlong *)(lVar19 + 0x10) + lVar26 * 8);
            if (lVar10 == 0) {
              iVar20 = iVar20 + -1;
            }
            else if (iVar20 < 0) {
              *(longlong *)(*(longlong *)(lVar19 + 0x10) + (longlong)((int)lVar26 + iVar20) * 8) =
                   lVar10;
              iVar7 = *(int *)(lVar19 + 0x18);
            }
            lVar26 = lVar26 + 1;
          } while (lVar26 < iVar7);
          if (iVar20 < 0) {
            iVar7 = iVar20 + iVar7;
            if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar7);
            }
            *(int *)(lVar19 + 0x18) = iVar7;
          }
        }
        if (iVar7 == 0) {
          *(undefined4 *)(lVar19 + 4) = 0;
          pbVar12 = *(byte **)(lVar19 + 0x50);
          if ((pbVar12 == (byte *)0x0) || ((*pbVar12 & 1) == 0)) {
            *(undefined1 *)(lVar19 + 0x3b) = 0;
          }
          else {
            if (*(char *)(lVar19 + 0x3b) != '\0') {
              uVar15 = *(undefined8 *)(pbVar12 + 0x28);
              FUN_1402eb48e(uVar15,lVar19 + 0x30);
              *(undefined1 *)(lVar19 + 0x3b) = 0;
              FUN_1402eb97e(uVar15);
              if (*(char *)(lVar19 + 0x3b) != '\0') goto LAB_1408422f6;
              pbVar12 = *(byte **)(lVar19 + 0x50);
            }
            pbVar12[0x24] = 0;
            pbVar12[0x25] = 0;
            pbVar12[0x26] = 0x80;
            pbVar12[0x27] = 0xbf;
          }
        }
      }
LAB_1408422f6:
      iVar7 = *(int *)(lVar19 + 0x18);
      if (((0 < iVar7) && (iVar20 = iVar25 - iVar7, iVar20 != 0 && iVar7 <= iVar25)) &&
         (lVar26 = (longlong)iVar27, lVar9 < lVar26)) {
        lVar10 = lVar19 + 0x10;
        do {
          lVar4 = *(longlong *)(param_1[0x78] + lVar26 * 8);
          iVar27 = *(int *)(lVar4 + 0x18);
          if (iVar27 < iVar25) {
            if (0 < iVar27) {
LAB_1408425d4:
              lVar23 = 0;
              do {
                lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar23 * 8);
                if (lVar5 != 0) {
                  *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + lVar23 * 8) = 0;
                  *(undefined1 *)(lVar4 + 8) = 1;
                  *(int *)(lVar5 + 0x60) = (int)lVar9;
                  iVar27 = *(int *)(lVar19 + 0x18);
                  *(uint *)(lVar19 + 0x18) = iVar27 + 1U;
                  lVar22 = (longlong)iVar27;
                  local_118 = lVar10;
                  local_108 = lVar23;
                  if (*(uint *)(lVar19 + 0x1c) < iVar27 + 1U) {
                    local_110 = (longlong)iVar27;
                    FUN_140893524(lVar10,iVar27);
                    lVar22 = local_110;
                  }
                  *(longlong *)(*(longlong *)(lVar19 + 0x10) + lVar22 * 8) = lVar5;
                  FUN_14082bb18(lVar5);
                  iVar20 = iVar20 + -1;
                  if (iVar20 == 0) goto LAB_14084237f;
                  iVar27 = *(int *)(lVar4 + 0x18);
                  lVar10 = local_118;
                  lVar23 = local_108;
                }
                lVar23 = lVar23 + 1;
              } while (lVar23 < iVar27);
            }
          }
          else if ((0 < iVar27) && (*(char *)(lVar4 + 8) != '\0')) goto LAB_1408425d4;
          lVar26 = lVar26 + -1;
        } while (lVar9 < lVar26);
LAB_14084237f:
        iVar27 = (int)lVar26;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)param_1[0x79]);
  }
  iVar25 = (int)param_1[0x7b];
  if (0 < (longlong)iVar25) {
    local_100 = (void *)0x0;
    _Src = (void *)param_1[0x7a];
    local_f8 = iVar25;
    FUN_14084365a(&local_100,iVar25);
    memcpy(local_100,_Src,(longlong)iVar25 << 3);
    *(undefined4 *)(param_1 + 0x7b) = 0;
    if (*(int *)((longlong)param_1 + 0x3dc) < 0) {
      FUN_145bdc622(param_1 + 0x7a);
    }
    lVar9 = (longlong)local_f8;
    if (0 < lVar9) {
      lVar19 = 0;
      do {
        FUN_1408931be(param_1,*(undefined8 *)((longlong)local_100 + lVar19 * 8));
        lVar19 = lVar19 + 1;
      } while (lVar9 != lVar19);
    }
    if (local_100 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140842c6c FUN_140842c6c body=72 status=ok
// SIG undefined FUN_140842c6c(void)

float FUN_140842c6c(longlong param_1)

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
  return fVar3 * *(float *)(param_1 + 0x4cc);
}



// FUNCTION 140842cb4 FUN_140842cb4 body=114 status=ok
// SIG undefined FUN_140842cb4(void)

void FUN_140842cb4(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 140842d26 FUN_140842d26 body=2355 status=ok
// SIG undefined FUN_140842d26(void)

uint * FUN_140842d26(longlong param_1,uint *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint *_Dst;
  double dVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  LARGE_INTEGER LVar9;
  longlong lVar10;
  undefined8 uVar11;
  LARGE_INTEGER LVar12;
  LARGE_INTEGER *pLVar13;
  undefined8 *puVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  longlong *plVar18;
  uint *puVar19;
  bool bVar20;
  undefined1 auStack_198 [32];
  wchar_t *local_178;
  undefined4 local_170;
  undefined8 local_168;
  wchar_t *local_160;
  wchar_t *local_158;
  code *local_150;
  undefined1 *local_148;
  LARGE_INTEGER *local_140;
  code *local_138;
  code *local_130;
  uint local_11c;
  longlong local_118;
  uint *local_110;
  LARGE_INTEGER local_108;
  undefined1 local_100 [8];
  LARGE_INTEGER local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined2 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong lStack_b8;
  longlong *local_a8;
  longlong local_98 [4];
  undefined8 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar8 = FUN_1403d77ae(param_3 + 1);
  if (lVar8 != 0) {
    if ((((*(DWORD *)(lVar8 + 0x1c) == 0) || (uVar6 = *(uint *)(lVar8 + 0x18), (int)uVar6 < 0)) ||
        (DAT_14c9647dc <= (int)uVar6)) ||
       (((pLVar13 = (LARGE_INTEGER *)
                    ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
         pLVar13 == (LARGE_INTEGER *)0x0 || (pLVar13[2].s.LowPart != *(DWORD *)(lVar8 + 0x1c))) ||
        (((pLVar13[1].s.LowPart & 0x10200000) != 0 ||
         (LVar9 = (LARGE_INTEGER)pLVar13->QuadPart, (code *)LVar9.QuadPart == (code *)0x0)))))) {
      if (*(longlong *)(lVar8 + 0x20) != 0) {
        LVar9.QuadPart = FUN_140007850();
        cVar5 = (*(code *)PTR_FUN_14c758760)();
        if (((code *)LVar9.QuadPart == (code *)0x0) || (cVar5 == '\0')) {
          if ((code *)LVar9.QuadPart != (code *)0x0) {
            uVar6 = *(uint *)(LVar9.QuadPart + 0xc);
            goto LAB_140842ebb;
          }
          *(undefined8 *)(lVar8 + 0x18) = 0;
        }
        else {
          uVar6 = *(uint *)(LVar9.QuadPart + 0xc);
          if ((int)uVar6 < DAT_14c9647dc) {
            lVar10 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
          }
          else {
            lVar10 = 0;
          }
          if ((*(uint *)(lVar10 + 8) & 0x8400000) == 0) {
LAB_140842ebb:
            *(uint *)(lVar8 + 0x18) = uVar6;
            if ((int)uVar6 < DAT_14c9647dc) {
              lVar10 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            }
            else {
              lVar10 = 0;
            }
            iVar7 = *(int *)(lVar10 + 0x10);
            if (*(int *)(lVar10 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              iVar17 = DAT_14c964868 + 1;
              bVar20 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar20) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar17);
              }
              LOCK();
              iVar7 = *(int *)(lVar10 + 0x10);
              bVar20 = iVar7 == 0;
              if (bVar20) {
                *(int *)(lVar10 + 0x10) = iVar17;
                iVar7 = 0;
              }
              UNLOCK();
              if (bVar20) {
                iVar7 = iVar17;
              }
            }
            *(int *)(lVar8 + 0x1c) = iVar7;
          }
          if ((*(uint *)(LVar9.QuadPart + 8) >> 0x1e & 1) == 0) goto LAB_140842dd1;
        }
      }
LAB_140842f00:
      LVar12.QuadPart = 0;
    }
    else {
LAB_140842dd1:
      if (DAT_14c949118 == 0) {
        local_108.QuadPart = (LONGLONG)FUN_140631fbe;
        lVar8 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar8;
        FUN_1446f470e(local_100,L"Class",1);
        local_148 = &LAB_146891e90;
        local_150 = (code *)&LAB_146273097;
        local_160 = L"Engine";
        local_158 = (wchar_t *)CONCAT44(local_158._4_4_,199);
        local_168 = 0x20;
        local_170 = 0x10000000;
        local_178._0_4_ = 8;
        local_140 = &local_108;
        FUN_14574b4b2(lVar8);
        DAT_14c949118 = lVar8;
        if (DAT_14c951858 == 0) {
          local_140 = &local_f8;
          local_f8.QuadPart = (LONGLONG)FUN_1449e2820;
          local_130 = FUN_14081d0ea;
          local_138 = FUN_14081d0ea;
          local_148 = &LAB_1468c5283;
          local_150 = FUN_142809da0;
          local_158 = L"Engine";
          local_160 = (wchar_t *)0x400000000;
          local_168 = CONCAT44(local_168._4_4_,0x10000000);
          local_170 = 8;
          local_178._0_4_ = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar10 = DAT_14c951858;
        lVar8 = DAT_14c949118;
        uVar11 = FUN_1449e2fb2();
        local_178 = L"Class";
        FUN_14574b446(uVar11,lVar8,lVar10,L"/Script/CoreUObject");
      }
      if ((((*(int *)(*(longlong *)(LVar9.QuadPart + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38))
           || (*(longlong *)
                (*(longlong *)(*(longlong *)(LVar9.QuadPart + 0x10) + 0x30) +
                (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
          (lVar8 = FUN_140f1e398(), lVar8 == 0)) ||
         (*(int *)(LVar9.QuadPart + 0x38) < *(int *)(lVar8 + 0x38))) goto LAB_140842f00;
      LVar12.QuadPart = 0;
      if (*(longlong *)(*(longlong *)(LVar9.QuadPart + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
          == lVar8 + 0x30) {
        LVar12 = LVar9;
      }
      if (((code *)LVar12.QuadPart != (code *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
        LVar12 = LVar9;
      }
    }
    if (*(char *)(param_1 + 0x178) == '\x03') {
      lVar8 = FUN_1447210f0(param_1);
      plVar1 = (longlong *)(param_1 + 0x3e0);
      iVar7 = *(int *)(param_1 + 1000);
      if (0 < iVar7) {
        dVar2 = *(double *)(lVar8 + 0x6d0);
        lVar8 = 0;
        do {
          lVar10 = *(longlong *)(*plVar1 + lVar8 * 8);
          if (((lVar10 != 0) && (*(char *)(lVar10 + 0x68) == '\x01')) &&
             (*(float *)(lVar10 + 100) <= (float)dVar2)) {
            pcVar3 = *(code **)(lVar10 + 0x10);
            if ((((code *)LVar12.QuadPart == (code *)0x0) || (lVar10 = FUN_140f1e398(), lVar10 == 0)
                ) || (*(int *)(LVar12.QuadPart + 0x38) < *(int *)(lVar10 + 0x38))) {
              LVar9.QuadPart = 0;
            }
            else {
              LVar9.QuadPart = 0;
              if (*(longlong *)
                   (*(longlong *)(LVar12.QuadPart + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                  == lVar10 + 0x30) {
                LVar9 = LVar12;
              }
            }
            if (pcVar3 == (code *)LVar9.QuadPart) goto LAB_1408430ad;
            iVar7 = *(int *)(param_1 + 1000);
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar7);
      }
      if ((((code *)LVar12.QuadPart == (code *)0x0) || (lVar8 = FUN_140f1e398(), lVar8 == 0)) ||
         (*(int *)(LVar12.QuadPart + 0x38) < *(int *)(lVar8 + 0x38))) {
        LVar9.QuadPart = 0;
      }
      else {
        LVar9.QuadPart = 0;
        if (*(longlong *)
             (*(longlong *)(LVar12.QuadPart + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
            lVar8 + 0x30) {
          LVar9 = LVar12;
        }
      }
      FUN_14058b40c(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                   );
      local_a8 = (longlong *)0x0;
      local_78 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      lStack_b8 = 0;
      local_f8 = LVar9;
      local_f0 = param_1;
      lVar10 = FUN_1402710dd(&local_f8);
      if (lStack_b8 != 0) {
        plVar18 = local_a8;
        if (local_a8 == (longlong *)0x0) {
          plVar18 = local_98;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      *(undefined1 *)(lVar10 + 0x68) = 1;
      iVar7 = *(int *)(param_1 + 0x494) + 1;
      *(int *)(param_1 + 0x494) = iVar7;
      *(int *)(lVar10 + 0x58) = iVar7;
      if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar10);
      }
      iVar7 = *(int *)(param_1 + 1000);
      lVar8 = (longlong)iVar7;
      *(uint *)(param_1 + 1000) = iVar7 + 1U;
      if (*(uint *)(param_1 + 0x3ec) < iVar7 + 1U) {
        FUN_14575354e(plVar1,iVar7);
      }
      *(longlong *)(*plVar1 + lVar8 * 8) = lVar10;
      if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar10);
      }
LAB_1408430ad:
      lVar8 = *(longlong *)(*plVar1 + lVar8 * 8);
      if (lVar8 != 0) {
        *(undefined1 *)(lVar8 + 0x68) = 0;
        local_110 = param_2;
        QueryPerformanceCounter(&local_f8);
        dVar2 = (double)local_f8.QuadPart * DAT_14c83f420;
        (**(code **)(*param_3 + 0x10))(param_3,lVar8);
        local_118 = param_1;
        if ((longlong)*(int *)(param_1 + 0x538) != 0) {
          puVar19 = *(uint **)(param_1 + 0x530);
          puVar15 = puVar19 + (longlong)*(int *)(param_1 + 0x538) * 6;
          plVar1 = (longlong *)(lVar8 + 0x70);
          do {
            if ((((puVar19[1] != 0) && (uVar6 = *puVar19, -1 < (int)uVar6)) &&
                ((int)uVar6 < DAT_14c9647dc)) &&
               (((puVar14 = (undefined8 *)
                            ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
                 puVar14 != (undefined8 *)0x0 && (*(uint *)(puVar14 + 2) == puVar19[1])) &&
                ((*(uint *)(puVar14 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(puVar14 + 1) & 0x10200000) == 0) {
                uVar11 = *puVar14;
              }
              else {
                uVar11 = 0;
              }
              cVar5 = FUN_14069eaf4((longlong)param_3 + 0x74,uVar11);
              if (cVar5 != '\0') {
                local_f8 = (LARGE_INTEGER)((LARGE_INTEGER *)(puVar19 + 2))->QuadPart;
                local_f0 = *(longlong *)(puVar19 + 4);
                FUN_1403350f6(plVar1,&local_f8);
                iVar7 = *(int *)(lVar8 + 0x78);
                if (0 < iVar7) {
                  lVar10 = 0;
                  bVar20 = false;
                  do {
                    local_11c = ~(uint)lVar10;
                    while( true ) {
                      lVar4 = *plVar1;
                      _Dst = (uint *)(lVar4 + lVar10 * 0x10);
                      if (((*(longlong *)(lVar4 + 8 + lVar10 * 0x10) != 0) && (_Dst[1] != 0)) &&
                         ((uVar6 = *_Dst, -1 < (int)uVar6 &&
                          (((((int)uVar6 < DAT_14c9647dc &&
                             (plVar18 = (longlong *)
                                        ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                                        *(longlong *)
                                         (DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
                             plVar18 != (longlong *)0x0)) && (*(uint *)(plVar18 + 2) == _Dst[1])) &&
                           (((*(uint *)(plVar18 + 1) >> 0x1c & 1) == 0 && (*plVar18 != 0))))))))
                      break;
                      iVar17 = iVar7 + local_11c;
                      if (iVar17 != 0) {
                        if (0 < iVar17) {
                          iVar17 = 1;
                        }
                        memmove(_Dst,(void *)(lVar4 + (longlong)(iVar7 - iVar17) * 0x10),
                                (longlong)iVar17 << 4);
                        iVar7 = *(int *)(lVar8 + 0x78);
                      }
                      iVar7 = iVar7 + -1;
                      *(int *)(lVar8 + 0x78) = iVar7;
                      bVar20 = true;
                      if (iVar7 <= lVar10) goto LAB_1408432df;
                    }
                    lVar10 = lVar10 + 1;
                  } while (lVar10 < iVar7);
                  if (bVar20) {
LAB_1408432df:
                    FUN_1400bbcfc(plVar1);
                  }
                }
              }
            }
            puVar19 = puVar19 + 6;
          } while (puVar19 != puVar15);
        }
        QueryPerformanceCounter(&local_f8);
        param_2 = local_110;
        *(float *)(local_118 + 0x4d0) =
             (float)(((((double)local_f8.QuadPart * DAT_14c83f420 + 16777216.0) -
                      (dVar2 + 16777216.0)) + 0.0) * 1000.0 + (double)*(float *)(local_118 + 0x4d0))
        ;
        local_110[1] = 0;
        uVar6 = *(uint *)(lVar8 + 0xc);
        *local_110 = uVar6;
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        uVar6 = *(uint *)(lVar8 + 0x10);
        if (*(uint *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          uVar16 = DAT_14c964868 + 1;
          bVar20 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar20) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar16);
          }
          LOCK();
          uVar6 = *(uint *)(lVar8 + 0x10);
          bVar20 = uVar6 == 0;
          if (bVar20) {
            *(uint *)(lVar8 + 0x10) = uVar16;
            uVar6 = 0;
          }
          UNLOCK();
          if (bVar20) {
            uVar6 = uVar16;
          }
        }
        param_2[1] = uVar6;
        goto LAB_14084339c;
      }
    }
  }
  param_2[0] = 0;
  param_2[1] = 0;
LAB_14084339c:
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14084365a FUN_14084365a body=311 status=ok
// SIG undefined FUN_14084365a(void)

void FUN_14084365a(longlong param_1,uint param_2)

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
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1408436bb;
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
LAB_1408436bb:
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



// FUNCTION 140843792 FUN_140843792 body=90 status=ok
// SIG undefined FUN_140843792(void)

void FUN_140843792(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a59a580;
  param_1[0xd] = &PTR_FUN_14a59a8f0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1408437ec(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1404db954(param_1);
  return;
}



// FUNCTION 1408437ec FUN_1408437ec body=58 status=ok
// SIG undefined FUN_1408437ec(void)

void FUN_1408437ec(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      FUN_140843826(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140843826 FUN_140843826 body=53 status=ok
// SIG undefined FUN_140843826(void)

void FUN_140843826(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (((*(byte *)(param_1 + 0x1f) & 1) != 0) && (DAT_14c872bd8 == '\0')) {
      FUN_14084385c(param_1);
    }
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 14084385c FUN_14084385c body=299 status=ok
// SIG undefined FUN_14084385c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14084385c(undefined8 *param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar2 = *(byte *)((longlong)param_1 + 0x1f);
  if ((bVar2 & 1) != 0) {
    puVar3 = param_1;
    if ((bVar2 & 2) == 0) {
      puVar3 = (undefined8 *)*param_1;
    }
    lVar5 = (ulonglong)((uint)(1L << (bVar2 >> 2)) & 0xfffffffe) + (longlong)puVar3;
    if (*(char *)((longlong)param_1 + 0x1e) != -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c99e178) {
        FUN_144b3d300(&DAT_14c99e178);
        if (DAT_14c99e178 == -1) {
          _DAT_14c99e148 = &PTR_LAB_149e668b0;
          _DAT_14c99e150 = 0;
          FUN_1405bceb4(&DAT_14c99e148);
          _DAT_14c99e148 = &PTR_FUN_149fcd880;
          DAT_14c99e158 = 0;
          _DAT_14c99e160 = 0;
          _DAT_14c99e168 = 0;
          _DAT_14c99e170 = 0;
          atexit((_func_5014 *)&LAB_142aedb63);
          _Init_thread_footer(&DAT_14c99e178);
        }
      }
      lVar4 = (ulonglong)*(byte *)((longlong)param_1 + 0x1e) * 0x58 + _DAT_14c99e168;
      if ((lVar4 != 0) && (plVar1 = *(longlong **)(lVar4 + 0x28), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x2f0))(plVar1,lVar5,1);
      }
    }
    bVar2 = *(byte *)((longlong)param_1 + 0x1f);
    if ((bVar2 & 2) == 0) {
      FUN_1400020a8(lVar5 - (ulonglong)((uint)(1L << (bVar2 >> 2)) & 0xfffffffe));
      bVar2 = *(byte *)((longlong)param_1 + 0x1f);
    }
    *(byte *)((longlong)param_1 + 0x1f) = bVar2 & 0xfe;
  }
  return;
}



// FUNCTION 14084398e FUN_14084398e body=269 status=ok
// SIG undefined FUN_14084398e(void)

void FUN_14084398e(longlong param_1,int param_2)

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



// FUNCTION 140843a9c FUN_140843a9c body=1209 status=ok
// SIG undefined FUN_140843a9c(void)

void FUN_140843a9c(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar3 = FUN_140843f56();
  cVar1 = *(char *)(param_1 + 0x243);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x238) + 0x3c8);
  if (plVar2 == (longlong *)0x0) {
    bVar4 = 0;
  }
  else {
    bVar4 = (**(code **)(*plVar2 + 0x6c8))();
  }
  if (cVar1 == '\x01') {
    uVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x238) + 0x3b28) + 0x18))
                      (*(longlong *)(param_1 + 0x238) + 0x3b28);
    FUN_140843fac(uVar6);
  }
  if (((*(byte *)(param_1 + 0x240) | bVar3 | bVar4) & 1) == 0) goto LAB_140843c20;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x238) + 0x11e8);
  if (lVar7 == 0) {
LAB_140843f32:
    lVar7 = *(longlong *)(param_1 + 0x230);
    if (lVar7 != 0) {
      if (cVar1 == '\x01') {
LAB_140843d71:
        FUN_1407af814(*(undefined8 *)(param_1 + 0x238),DAT_14cbc67a0,*(undefined4 *)(lVar7 + 0x6c),0
                     );
      }
      else {
LAB_140843c06:
        FUN_140bc2046(*(undefined8 *)(param_1 + 0x238),DAT_14cbc67a0,*(undefined4 *)(lVar7 + 0x6c),0
                     );
      }
    }
  }
  else {
    if (cVar1 == '\x01') {
      FUN_1400bc96c(lVar7 + 0x1c10,&DAT_14cbc67a0);
    }
    else {
      FUN_1400bc8c2();
    }
    if (((*(byte *)(param_1 + 0x240) & 2) == 0) ||
       (lVar8 = *(longlong *)(param_1 + 0x230), lVar8 == 0)) goto LAB_140843f32;
    lVar9 = *(longlong *)(lVar8 + 0x78);
    if (lVar9 == 0) {
      uVar6 = FUN_145ef08be();
      lVar9 = FUN_14477b664(uVar6);
      *(longlong *)(lVar8 + 0x78) = lVar9;
    }
    if (*(longlong *)(lVar8 + 0x80) == 0) {
      if ((lVar9 != 0) && (*(longlong *)(lVar8 + 0x70) != 0)) {
        plVar2 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
          *(undefined8 *)(lVar8 + 0x80) = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar9 = FUN_144aff482(uVar6,(longlong *)(lVar8 + 0x70));
          *(longlong *)(lVar8 + 0x80) = lVar9;
          if (lVar9 != 0) goto LAB_140843b94;
        }
      }
      goto LAB_140843f32;
    }
LAB_140843b94:
    lVar8 = lVar7 + 0x1288;
    if (cVar1 == '\x01') {
      lVar7 = *(longlong *)(param_1 + 0x230);
      lVar9 = *(longlong *)(lVar7 + 0x78);
      if (lVar9 == 0) {
        uVar6 = FUN_145ef08be();
        lVar9 = FUN_14477b664(uVar6);
        *(longlong *)(lVar7 + 0x78) = lVar9;
      }
      if (((*(longlong *)(lVar7 + 0x80) == 0) && (lVar9 != 0)) && (*(longlong *)(lVar7 + 0x70) != 0)
         ) {
        plVar2 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
          uVar6 = FUN_144aff482(uVar6,(longlong *)(lVar7 + 0x70));
        }
        *(undefined8 *)(lVar7 + 0x80) = uVar6;
      }
      FUN_14084412e(lVar8,&DAT_14cbc67a0);
      lVar7 = *(longlong *)(param_1 + 0x230);
      if (lVar7 == 0) goto LAB_140843c20;
      goto LAB_140843d71;
    }
    if (0 < *(int *)(lVar7 + 0x14b8)) {
      local_50 = &DAT_14cbc67a0;
      FUN_140b042ce(lVar7 + 0x1430);
    }
    if (*(char *)(lVar7 + 0x13a0) == '\0') {
      uVar6 = FUN_144836af6(lVar8);
      FUN_1448367ba(lVar8,uVar6);
    }
    if (((*(char *)(lVar7 + 0x13e8) == '\x01') &&
        (4 < DAT_14c872be0 - *(longlong *)(lVar7 + 0x13e0))) &&
       ((*(longlong *)(lVar7 + 0x13d8) + 4U <= DAT_14c872be0 || (*(char *)(lVar7 + 0x13d0) == '\0'))
       )) {
      FUN_14012b994(lVar8);
    }
    lVar7 = *(longlong *)(param_1 + 0x230);
    if (lVar7 != 0) goto LAB_140843c06;
  }
LAB_140843c20:
  if ((bVar4 | bVar3) != 1) goto LAB_140843c29;
  lVar7 = *(longlong *)(param_1 + 0x238);
  if (bVar3 == 0) {
    if (*(longlong *)(lVar7 + 0x3c8) == 0) goto LAB_140843c29;
    lVar8 = FUN_144a5dd5e();
    lVar7 = *(longlong *)(lVar7 + 0x3c8);
    if ((((lVar7 == 0) || (lVar8 == 0)) || (lVar9 = *(longlong *)(lVar7 + 0x10), lVar9 == 0)) ||
       ((*(int *)(lVar9 + 0x38) < *(int *)(lVar8 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
         lVar8 + 0x30)))) goto LAB_140843c29;
  }
  else {
    lVar7 = FUN_140cf8aa6(lVar7);
    if (lVar7 == 0) goto LAB_140843c29;
  }
  (**(code **)(*(longlong *)(lVar7 + 0xda8) + 0x70))
            (lVar7 + 0xda8,*(char *)(param_1 + 0x243) != '\0',DAT_14cbc67a0);
  if ((*(longlong *)(param_1 + 0x230) != 0) && (*(longlong *)(lVar7 + 0x508) != 0)) {
    lVar8 = FUN_140dd10c4();
    plVar2 = *(longlong **)(lVar7 + 0x508);
    if ((plVar2 != (longlong *)0x0) &&
       ((((lVar8 != 0 && (lVar7 = plVar2[2], lVar7 != 0)) &&
         (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
         lVar8 + 0x30)))) {
      (**(code **)(*plVar2 + 0x308 + (ulonglong)(cVar1 != '\x01') * 0x10))
                (plVar2,*(longlong *)(param_1 + 0x230) + 0x268);
    }
  }
LAB_140843c29:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140843f56 FUN_140843f56 body=86 status=ok
// SIG undefined FUN_140843f56(void)

undefined8 FUN_140843f56(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x238) != 0) {
    plVar2 = (longlong *)FUN_140cf8aa6();
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x238) + 0x700))();
    if (cVar1 != '\0') {
      return 1;
    }
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140843fa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 140843fac FUN_140843fac body=135 status=ok
// SIG undefined FUN_140843fac(void)

void FUN_140843fac(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(char *)(param_1 + 0x79) == '\0') && (*(char *)(param_1 + 0x100) != '\0')) {
    plVar1 = (longlong *)FUN_14479d2ce(param_1 + 8);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_140e81900();
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
      if (plVar1 != (longlong *)0x0) {
        uVar2 = FUN_140e81900();
        plVar3 = (longlong *)FUN_144718840(plVar1,uVar2);
        if ((plVar1 != plVar3) && (plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x38))(plVar3,*(undefined1 *)(param_1 + 0x100));
          *(undefined1 *)(param_1 + 0x100) = 0;
        }
      }
    }
  }
  FUN_140844034(param_1);
  return;
}



// FUNCTION 140844034 FUN_140844034 body=87 status=ok
// SIG undefined FUN_140844034(void)

void FUN_140844034(longlong *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  FUN_14084408c();
  uVar1 = *(undefined1 *)((longlong)param_1 + 0xcd);
  *(undefined1 *)((longlong)param_1 + 0xcd) = 1;
  iVar2 = (int)param_1[5];
  if (iVar2 != 3) {
    if (iVar2 != 2) {
      if (iVar2 != 1) goto LAB_140844061;
      (**(code **)(*param_1 + 0x10))(param_1);
    }
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  (**(code **)(*param_1 + 0x20))(param_1);
LAB_140844061:
  *(undefined1 *)((longlong)param_1 + 0xcd) = uVar1;
  return;
}



// FUNCTION 14084408c FUN_14084408c body=161 status=ok
// SIG undefined FUN_14084408c(void)

void FUN_14084408c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar5 != (undefined8 *)0x0) && (*(int *)(puVar5 + 2) == *(int *)(param_1 + 0xc))) &&
       ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
        uVar3 = *puVar5;
      }
      else {
        uVar3 = 0;
      }
      uVar3 = FUN_1401b4c98(uVar3);
      lVar2 = *(longlong *)(param_1 + 0xe8);
      if (lVar2 != 0) {
        lVar4 = FUN_144a61814(uVar3,(undefined8 *)(param_1 + 0xe8));
        if (lVar4 != 0) {
          FUN_1405a424c(uVar3,lVar2);
        }
        *(undefined8 *)(param_1 + 0xe8) = 0;
      }
    }
  }
  return;
}



// FUNCTION 14084412e FUN_14084412e body=483 status=ok
// SIG undefined FUN_14084412e(void)

void FUN_14084412e(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    FUN_140844312(&local_40,param_1);
    puVar3 = (undefined8 *)(param_1 + 0x1a8);
    puVar7 = *(undefined8 **)(param_1 + 0x228);
    puVar8 = puVar7;
    if (puVar7 == (undefined8 *)0x0) {
      puVar8 = puVar3;
    }
    iVar4 = *(int *)(param_1 + 0x230);
    lVar10 = (longlong)iVar4;
    if (lVar10 != 0) {
      lVar9 = lVar10 << 5;
      do {
        if (puVar8[3] == *param_2) {
          if (puVar8 != (undefined8 *)0x0) goto LAB_1408441a7;
          break;
        }
        puVar8 = puVar8 + 4;
        lVar9 = lVar9 + -0x20;
      } while (lVar9 != 0);
    }
    *(uint *)(param_1 + 0x230) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x234) < iVar4 + 1U) {
      FUN_147e437d0(puVar3,iVar4);
      puVar7 = *(undefined8 **)(param_1 + 0x228);
    }
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = puVar3;
    }
    puVar7[lVar10 * 4 + 2] = 0;
    (puVar7 + lVar10 * 4 + 2)[1] = 0;
    puVar7[lVar10 * 4] = 0;
    (puVar7 + lVar10 * 4)[1] = 0;
    puVar7 = *(undefined8 **)(param_1 + 0x228);
    if (*(undefined8 **)(param_1 + 0x228) == (undefined8 *)0x0) {
      puVar7 = puVar3;
    }
    puVar8 = puVar7 + lVar10 * 4;
    puVar7[lVar10 * 4 + 3] = *param_2;
LAB_1408441a7:
    *puVar8 = local_40;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    plVar5 = (longlong *)puVar8[2];
    puVar8[1] = local_38;
    puVar8[2] = local_30;
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
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    if (*(char *)(param_1 + 0x118) == '\0') {
      uVar6 = FUN_144836af6(param_1);
      FUN_1448367ba(param_1,uVar6);
    }
    if (((*(char *)(param_1 + 0x160) == '\x01') &&
        (4 < DAT_14c872be0 - *(longlong *)(param_1 + 0x158))) &&
       ((*(longlong *)(param_1 + 0x150) + 4U <= DAT_14c872be0 ||
        (*(char *)(param_1 + 0x148) == '\0')))) {
      FUN_14012b994(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140844312 FUN_140844312 body=589 status=ok
// SIG undefined FUN_140844312(void)

longlong * FUN_140844312(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined8 *local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    uVar6 = FUN_14050fd64();
    uVar4 = DAT_14cb1d1f0;
    puVar9 = &DAT_14c9485f0;
    if (*(undefined4 **)(*param_1 + 8) != (undefined4 *)0x0) {
      puVar9 = *(undefined4 **)(*param_1 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar7 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar7);
      DAT_14c947fe0 = lVar7;
    }
    FUN_140045924(DAT_14c947fe0,&local_60,puVar9,1);
    local_80 = 0;
    local_88 = 0;
    FUN_140844808(uVar6,&local_58,local_60,uVar4);
    plVar1 = local_50;
    if (param_1 + 1 != &local_58) {
      param_1[1] = local_58;
      local_58 = 0;
      plVar3 = (longlong *)param_1[2];
      if (local_50 != plVar3) {
        local_50 = (longlong *)0x0;
        param_1[2] = (longlong)plVar1;
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
    }
    plVar1 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    lVar7 = param_1[1];
    if (lVar7 != 0) {
      local_70 = (undefined8 *)0x0;
      local_68 = 0;
      FUN_1446efa72(&local_70,0,2,0x10);
      local_68 = 2;
      *local_70 = &PTR_LAB_14aba5670;
      local_70[1] = *(undefined8 *)(param_2 + 0xa8);
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_70[2] = lVar8;
      *local_70 = &PTR_FUN_14aba5600;
      local_70[3] = FUN_1407f21f1;
      FUN_140844560(lVar7,&local_58,&local_70);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140844560 FUN_140844560 body=679 status=ok
// SIG undefined FUN_140844560(void)

undefined8 * FUN_140844560(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_14009d848(&local_50,param_3);
  if (((local_48 == 0) || (local_50 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_50 + 0x30))(), cVar4 == '\0')) {
    if (local_48 == 0) goto LAB_140844671;
    if (local_50 != (longlong *)0x0) {
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_140844664;
    }
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x88);
    if (*(int *)(param_1 + 0x9c) < 1) {
      iVar6 = *(int *)(param_1 + 0x90);
      iVar5 = *(int *)(param_1 + 0x98) + -1;
      *(int *)(param_1 + 0x98) = iVar5;
      if (iVar5 <= iVar6) {
        iVar5 = iVar6;
        if (0 < iVar6) {
          iVar8 = 0;
          do {
            if (((*(int *)(*plVar1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*plVar1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar1,iVar8);
              FUN_14005b248(plVar1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = *(int *)(param_1 + 0x90);
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 0x98) = iVar8;
        if ((iVar8 < iVar6) && (*(int *)(param_1 + 0x94) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,local_40);
    }
    iVar6 = *(int *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x90) = iVar6 + 1U;
    if (*(uint *)(param_1 + 0x94) < iVar6 + 1U) {
      FUN_1447a71f6(plVar1,iVar6);
    }
    lVar2 = *plVar1;
    lVar9 = (longlong)iVar6 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
    *(longlong **)(lVar2 + lVar9) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar9) = local_48;
LAB_140844664:
    local_48 = 0;
LAB_140844671:
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((((*(char *)(param_1 + 0x30) == '\0') && (*(char *)(param_1 + 0x31) == '\0')) &&
      (*(int *)(param_1 + 0x6c) == 2)) &&
     (((int)param_3[1] != 0 && ((longlong *)*param_3 != (longlong *)0x0)))) {
    (**(code **)(*(longlong *)*param_3 + 0x60))();
  }
  iVar6 = (int)param_3[1];
  if ((iVar6 == 0) || (plVar1 = (longlong *)*param_3, plVar1 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
    iVar6 = (int)param_3[1];
  }
  puVar7 = (undefined8 *)*param_3;
  if (iVar6 != 0) {
    if (puVar7 == (undefined8 *)0x0) goto LAB_1408446d3;
    (**(code **)*puVar7)(puVar7,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar7 = (undefined8 *)*param_3;
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1408446d3:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140844808 FUN_140844808 body=1493 status=ok
// SIG undefined FUN_140844808(void)

longlong *
FUN_140844808(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4,int param_5,
             undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = *(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x18);
  local_78 = param_6;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_80 = param_3;
  local_70 = param_3;
  FUN_1405209e8(param_1,&local_98,&local_88);
  plVar10 = local_90;
  bVar16 = true;
  if (local_90 == (longlong *)0x0) {
LAB_1408448ea:
    plVar10 = (longlong *)0x0;
LAB_1408448ec:
    local_b8 = (uint)local_88;
    uStack_b4 = local_88._4_4_;
    uStack_b0 = (uint)uStack_80;
    uStack_ac = uStack_80._4_4_;
    local_a8 = local_78;
    FUN_14050f74e(param_1,&local_68,&local_b8,0);
    plVar2 = local_60;
    if (&local_68 != param_2) {
      *param_2 = local_68;
      local_68 = 0;
      plVar3 = (longlong *)param_2[1];
      if (local_60 != plVar3) {
        local_60 = (longlong *)0x0;
        param_2[1] = (longlong)plVar2;
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
    plVar2 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_60 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    *(int *)(*param_2 + 0x68) = param_5;
    FUN_14050f264(*param_2,*(undefined8 *)(param_4 + 0x148));
    FUN_1446dcdd4(&local_68,&local_70);
    FUN_140067796(param_4,*param_2,&local_68);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_1 + 0x578))(param_1,param_2,0);
    FUN_1407d0516(*param_2,4,100);
    if (bVar16) goto LAB_140844a1d;
  }
  else {
    iVar7 = (int)local_90[1];
    do {
      if (iVar7 == 0) goto LAB_1408448ea;
      LOCK();
      iVar6 = (int)local_90[1];
      bVar15 = iVar7 == iVar6;
      if (bVar15) {
        *(int *)(local_90 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar15);
    if (local_98 == 0) {
      bVar16 = false;
      goto LAB_1408448ec;
    }
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
    plVar2 = (longlong *)param_2[1];
    *param_2 = local_98;
    param_2[1] = (longlong)local_90;
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
    iVar7 = *(int *)(*param_2 + 0x68);
    if (iVar7 < param_5) {
      iVar7 = param_5;
    }
    *(int *)(*param_2 + 0x68) = iVar7;
  }
  LOCK();
  plVar2 = plVar10 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
LAB_140844a1d:
  uVar9 = local_78._4_4_ >> 0xd ^
          (((uint)local_78 << 0x10 | (uint)local_78 & 0xffff) - local_78._4_4_) +
          (((uint)local_78 >> 0x10) << 0x13 | (uint)local_78 >> 0x10) +
          (((uint)local_78 & 0xffff) >> 4);
  uVar13 = uVar9 << 8 ^ (-0x61c88647 - local_78._4_4_) - uVar9;
  uVar11 = uVar13 >> 0xd ^ (local_78._4_4_ - uVar9) - uVar13;
  uVar9 = uVar11 >> 0xc ^ (uVar9 - uVar13) - uVar11;
  uVar13 = uVar9 << 0x10 ^ (uVar13 - uVar11) - uVar9;
  uVar14 = uVar13 >> 5 ^ (uVar11 - uVar9) - uVar13;
  uVar11 = uVar14 >> 3 ^ (uVar9 - uVar13) - uVar14;
  uVar9 = uVar11 << 10 ^ (uVar13 - uVar14) - uVar11;
  uVar9 = uVar9 >> 0xf ^ uVar14 - (uVar11 + uVar9);
  uVar13 = uStack_80._4_4_ >> 0xd ^
           (((uint)uStack_80 << 0x10 | (uint)uStack_80 & 0xffff) - uStack_80._4_4_) +
           (((uint)uStack_80 >> 0x10) << 0x13 | (uint)uStack_80 >> 0x10) +
           (((uint)uStack_80 & 0xffff) >> 4);
  uVar14 = uVar13 << 8 ^ (-0x61c88647 - uStack_80._4_4_) - uVar13;
  uVar12 = uVar14 >> 0xd ^ (uStack_80._4_4_ - uVar13) - uVar14;
  uVar11 = uVar12 >> 0xc ^ (uVar13 - uVar14) - uVar12;
  uVar13 = uVar11 << 0x10 ^ (uVar14 - uVar12) - uVar11;
  uVar14 = uVar13 >> 5 ^ (uVar12 - uVar11) - uVar13;
  uVar11 = uVar14 >> 3 ^ (uVar11 - uVar13) - uVar14;
  uVar13 = uVar11 << 10 ^ (uVar13 - uVar14) - uVar11;
  uVar14 = uVar13 >> 0xf ^ uVar14 - (uVar11 + uVar13);
  uVar11 = uVar14 >> 0xd ^
           (((uint)local_88 << 0x10 | (uint)local_88 & 0xffff) + (((uint)local_88 & 0xffff) >> 4) +
           (((uint)local_88 >> 0x10) << 0x13 | (uint)local_88 >> 0x10)) - uVar14;
  uVar13 = uVar11 << 8 ^ (-0x61c88647 - uVar14) - uVar11;
  uVar12 = uVar13 >> 0xd ^ (uVar14 - uVar11) - uVar13;
  uVar14 = uVar12 >> 0xc ^ (uVar11 - uVar13) - uVar12;
  uVar11 = uVar14 << 0x10 ^ (uVar13 - uVar12) - uVar14;
  uVar13 = uVar11 >> 5 ^ (uVar12 - uVar14) - uVar11;
  uVar14 = uVar13 >> 3 ^ (uVar14 - uVar11) - uVar13;
  uVar11 = uVar14 << 10 ^ (uVar11 - uVar13) - uVar14;
  uVar13 = uVar9 >> 0xd ^ (uVar11 >> 0xf ^ uVar13 - (uVar14 + uVar11)) - uVar9;
  uVar11 = uVar13 << 8 ^ (-0x61c88647 - uVar9) - uVar13;
  uVar9 = uVar11 >> 0xd ^ (uVar9 - uVar13) - uVar11;
  uVar13 = uVar9 >> 0xc ^ (uVar13 - uVar11) - uVar9;
  uVar14 = uVar13 << 0x10 ^ (uVar11 - uVar9) - uVar13;
  uVar11 = uVar14 >> 5 ^ (uVar9 - uVar13) - uVar14;
  uVar9 = uVar11 >> 3 ^ (uVar13 - uVar14) - uVar11;
  uVar13 = uVar9 << 10 ^ (uVar14 - uVar11) - uVar9;
  iVar7 = FUN_14069bcca(param_1 + 0xa7,uVar13 >> 0xf ^ uVar11 - (uVar9 + uVar13));
  if (iVar7 != -1) {
    lVar8 = (longlong)iVar7 * 0x30 + param_1[0xa7];
    if (((longlong *)(lVar8 + 0x18) != (longlong *)0x0 && lVar8 != 0) &&
       (plVar10 = *(longlong **)(lVar8 + 0x20), plVar10 != (longlong *)0x0)) {
      iVar7 = (int)plVar10[1];
      do {
        if (iVar7 == 0) goto LAB_140844d38;
        LOCK();
        iVar6 = (int)plVar10[1];
        bVar16 = iVar7 == iVar6;
        if (bVar16) {
          *(int *)(plVar10 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar16);
      lVar8 = *(longlong *)(lVar8 + 0x18);
      if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x20) == 0)) {
        lVar4 = *param_2;
        lVar5 = param_2[1];
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        plVar2 = *(longlong **)(lVar8 + 0x28);
        *(longlong *)(lVar8 + 0x20) = lVar4;
        *(longlong *)(lVar8 + 0x28) = lVar5;
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
      LOCK();
      plVar2 = plVar10 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
LAB_140844d38:
  if (local_90 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140844dde FUN_140844dde body=635 status=ok
// SIG undefined FUN_140844dde(void)

void FUN_140844dde(longlong *param_1,float param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[0x51] != 0) {
    *(byte *)(param_1[0x51] + 0xa8) = *(byte *)((longlong)param_1 + 0x8c) >> 7;
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  if ((*(byte *)((longlong)param_1 + 0x8c) & 0x80) == 0) goto LAB_140844e2f;
  if (((*(int *)((longlong)param_1 + 0x34) != 0) &&
      (uVar1 = *(uint *)(param_1 + 6), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar7 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == *(int *)((longlong)param_1 + 0x34))) &&
       ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
        lVar6 = *plVar7;
      }
      else {
        lVar6 = 0;
      }
      cVar3 = FUN_14030d2b6(lVar6 + 0x3c0,&DAT_14cbd9708);
      if (cVar3 != '\0') goto LAB_140844e2f;
      if (*(int *)((longlong)param_1 + 0x34) == 0) {
LAB_140844ff5:
        lVar6 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 6);
        lVar6 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          plVar7 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((plVar7 == (longlong *)0x0) ||
             (((int)plVar7[2] != *(int *)((longlong)param_1 + 0x34) ||
              ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) goto LAB_140844ff5;
          lVar6 = *plVar7;
        }
      }
      cVar3 = FUN_14030d2b6(lVar6 + 0x3c0,&DAT_14cbd92d8);
      if (cVar3 != '\0') goto LAB_140844e2f;
    }
  }
  if ((char)param_1[0x53] == '\x01') {
    lVar6 = param_1[0x51];
    if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x1ea) & 1) != 0)) {
      param_2 = *(float *)(lVar6 + 0x1f0) - param_2;
      *(float *)(lVar6 + 0x1f0) = param_2;
      if (0.0 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
      puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar2 = *(undefined4 *)(lVar6 + 0x1ec);
      lVar6 = param_1[6];
      *puVar5 = &PTR_FUN_14b9bf890;
      local_50 = "RemoveMessage";
      local_48 = 0xd;
      local_44 = 0;
      uVar4 = FUN_14001a6c0(&local_50,1);
      FUN_14039176c(puVar5,lVar6,uVar4,1);
      *puVar5 = &PTR_FUN_14b9bf890;
      *(undefined4 *)(puVar5 + 7) = uVar2;
      FUN_140391314(param_1,puVar5);
    }
  }
  else if ((char)param_1[0x53] == '\x02') {
    param_2 = *(float *)((longlong)param_1 + 0x2b4) - param_2;
    *(float *)((longlong)param_1 + 0x2b4) = param_2;
    if (param_2 <= 0.0) {
      *(undefined1 *)(param_1 + 0x53) = 0;
      *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
    }
  }
LAB_140844e2f:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140845074 FUN_140845074 body=176 status=ok
// SIG undefined FUN_140845074(void)

void FUN_140845074(longlong param_1,uint *param_2)

{
  uint uVar1;
  ushort *puVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  bVar3 = 1;
  if (((param_2[1] != 0) && (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_2[1])) &&
       ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar5;
      }
      else {
        lVar4 = 0;
      }
      bVar3 = FUN_14030d2b6(lVar4 + 0x3c0,&DAT_14cbd96b8);
      bVar3 = bVar3 ^ 1;
    }
  }
  if ((*(byte *)(param_1 + 0x198) & 1) != bVar3) {
    *(byte *)(param_1 + 0x198) = *(byte *)(param_1 + 0x198) & 0xfe | bVar3;
    puVar2 = *(ushort **)(param_1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 140845124 FUN_140845124 body=26 status=ok
// SIG undefined FUN_140845124(void)

void FUN_140845124(undefined8 param_1)

{
  FUN_144a3ee64();
  FUN_14084513e(param_1);
  return;
}



// FUNCTION 14084513e FUN_14084513e body=654 status=ok
// SIG undefined FUN_14084513e(void)

void FUN_14084513e(longlong param_1)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((*(longlong *)(param_1 + 0x1d8) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x550), lVar2 != 0)) ||
      (((lVar2 = *(longlong *)(param_1 + 0xb0), lVar2 != 0 ||
        (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) &&
       ((*(longlong *)(lVar2 + 0x260) != 0 &&
        (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x260) + 0x38), lVar2 != 0)))))) &&
     (lVar2 = *(longlong *)(lVar2 + 0x9d0), lVar2 != 0)) {
    SRWLock = (PSRWLOCK)(lVar2 + 0x20);
    AcquireSRWLockShared(SRWLock);
    plVar1 = (longlong *)**(undefined8 **)(lVar2 + 8);
    local_68 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *local_68 = &PTR_FUN_14a3ef310;
    local_68[1] = param_1;
    local_68[2] = FUN_1400d4daa;
    *(undefined4 *)(local_68 + 3) = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    (**(code **)(*plVar1 + 8))(plVar1,&local_68);
    ReleaseSRWLockShared(SRWLock);
    AcquireSRWLockShared(SRWLock);
    plVar1 = *(longlong **)(*(longlong *)(lVar2 + 8) + 8);
    local_68 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *local_68 = &PTR_FUN_14a3ef330;
    local_68[1] = param_1;
    local_68[2] = FUN_140710112;
    *(undefined4 *)(local_68 + 3) = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    (**(code **)(*plVar1 + 8))(plVar1,&local_68);
    ReleaseSRWLockShared(SRWLock);
    AcquireSRWLockShared(SRWLock);
    plVar1 = *(longlong **)(*(longlong *)(lVar2 + 8) + 0x18);
    local_68 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *local_68 = &PTR_FUN_14a3ef350;
    local_68[1] = param_1;
    local_68[2] = FUN_1448917b2;
    *(undefined4 *)(local_68 + 3) = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    (**(code **)(*plVar1 + 8))(plVar1,&local_68);
    ReleaseSRWLockShared(SRWLock);
    AcquireSRWLockShared(SRWLock);
    plVar1 = *(longlong **)(*(longlong *)(lVar2 + 8) + 0x20);
    local_68 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *local_68 = &PTR_FUN_14a3ef370;
    local_68[1] = param_1;
    local_68[2] = FUN_14487e0ac;
    *(undefined4 *)(local_68 + 3) = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    (**(code **)(*plVar1 + 8))(plVar1,&local_68);
    ReleaseSRWLockShared(SRWLock);
    AcquireSRWLockShared(SRWLock);
    plVar1 = *(longlong **)(*(longlong *)(lVar2 + 8) + 0x28);
    local_68 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *local_68 = &PTR_FUN_14a3ef390;
    local_68[1] = param_1;
    local_68[2] = FUN_143276ac4;
    *(undefined4 *)(local_68 + 3) = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    (**(code **)(*plVar1 + 8))(plVar1,&local_68);
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_60 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408453d0 FUN_1408453d0 body=249 status=ok
// SIG undefined FUN_1408453d0(void)

void FUN_1408453d0(longlong *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  undefined *puVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  
  if (((char)param_2 == '\0') && (cVar2 = (**(code **)(*param_1 + 0x2f0))(param_1), cVar2 == '\0'))
  {
    return;
  }
  (**(code **)(*param_1 + 0x3b0))(param_1,1);
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 0x10;
  uVar1 = param_1[7];
  if (uVar1 < 0xffffffff00000000) {
    plVar6 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar6 = (longlong *)0x0;
    }
    (**(code **)(*plVar6 + 0x58))(plVar6,param_1,uVar1,1);
  }
  else {
    uVar7 = (uint)uVar1;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
      puVar4 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar4 = DAT_14c998080;
      }
      if ((*(uint *)(puVar4 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
        lVar3 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
        puVar5 = *(uint **)(lVar3 + 0x18);
        if (*(uint **)(lVar3 + 0x18) == (uint *)0x0) {
          puVar5 = (uint *)(lVar3 + 8);
        }
        *puVar5 = *puVar5 | 2;
        *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
      }
    }
  }
  FUN_1408454ca((longlong)param_1 + 0xba,param_1,param_2);
  return;
}



// FUNCTION 1408454ca FUN_1408454ca body=138 status=ok
// SIG undefined FUN_1408454ca(void)

void FUN_1408454ca(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140845556(param_1,&local_40);
  if (local_40 != 0) {
    local_30 = param_2;
    local_28 = param_3;
    FUN_1447cd2ec();
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140845556 FUN_140845556 body=266 status=ok
// SIG undefined FUN_140845556(void)

undefined8 * FUN_140845556(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_14084557a;
  FUN_1477ec146(0,&local_38);
  FUN_14018932e(&local_30,param_1 + -0xba,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_14084557a;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x00014084561e:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x00014084561e;
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
LAB_14084557a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140845661 FUN_140845661 body=424 status=ok
// SIG undefined FUN_140845661(void)

void FUN_140845661(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar1 = (longlong *)(param_1 + 0x78);
  lVar3 = FUN_140185f3e();
  if (0 < (int)*(uint *)(param_1 + 0x80)) {
    uVar4 = 0;
    do {
      lVar7 = *(longlong *)(*plVar1 + uVar4 * 8);
      if (lVar7 != 0) {
        lVar7 = *(longlong *)(lVar7 + 0x10);
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          return;
        }
      }
      uVar4 = uVar4 + 1;
    } while (*(uint *)(param_1 + 0x80) != uVar4);
  }
  lVar3 = FUN_140845809(DAT_14c951640,0,*(uint *)(param_1 + 8) & 8,0,0,0);
  if (param_1 == 0) {
    *(undefined4 *)(lVar3 + 0x78) = 0;
    iVar6 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(lVar3 + 0x78) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar6 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar6 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar6 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar5;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar6 = iVar5;
      }
    }
  }
  *(int *)(lVar3 + 0x7c) = iVar6;
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  iVar6 = *(int *)(param_1 + 0x80);
  *(uint *)(param_1 + 0x80) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x84) < iVar6 + 1U) {
    FUN_140845902(plVar1,iVar6);
  }
  *(longlong *)(*plVar1 + (longlong)iVar6 * 8) = lVar3;
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
    return;
  }
  return;
}



// FUNCTION 140845809 FUN_140845809 body=248 status=ok
// SIG undefined FUN_140845809(void)

undefined8
FUN_140845809(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_d8 = FUN_140185f3e();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140845902 FUN_140845902 body=353 status=ok
// SIG undefined FUN_140845902(void)

void FUN_140845902(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140845987;
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
LAB_140845987:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140845a64 FUN_140845a64 body=16291 status=ok
// SIG undefined FUN_140845a64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140845a64(double param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,byte param_6,code *param_7,code **param_8)

{
  int *piVar1;
  code **ppcVar2;
  float fVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  void *pvVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 uVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  code **ppcVar24;
  longlong *plVar25;
  code *pcVar26;
  double *pdVar27;
  longlong lVar28;
  code *pcVar29;
  longlong *plVar30;
  undefined8 *puVar31;
  undefined8 unaff_RDI;
  ulonglong uVar32;
  undefined4 *puVar33;
  uint uVar34;
  undefined8 uVar35;
  int iVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  uint uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [8];
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  double dVar57;
  double dVar58;
  float fVar59;
  float fVar60;
  undefined1 auStack_348 [32];
  code **local_328;
  code **local_320;
  uint local_318;
  undefined8 local_310;
  longlong *local_308;
  undefined1 *local_300;
  undefined1 *local_2f8;
  code **local_2f0;
  code *local_2e8;
  code *local_2e0;
  longlong local_2d8;
  longlong *local_2d0;
  byte local_2c3;
  byte local_2c2;
  byte local_2c1;
  longlong local_2c0;
  double local_2b8;
  undefined8 uStack_2b0;
  longlong local_2a0;
  uint local_294;
  code *local_290;
  longlong *plStack_288;
  code *local_280;
  code *local_278;
  longlong *plStack_270;
  code *local_268;
  code *local_258;
  double dStack_250;
  code *local_248;
  code *local_238;
  double dStack_230;
  code *local_228;
  void *local_220;
  double dStack_218;
  double local_210;
  code *local_208;
  longlong *plStack_200;
  code *local_1f8;
  longlong local_1f0;
  code *local_1e8;
  longlong *plStack_1e0;
  code *local_1d8;
  code *local_1c8;
  undefined8 uStack_1c0;
  code *local_1b8;
  code *local_1a8;
  longlong *plStack_1a0;
  code *local_198;
  longlong *plStack_190;
  code *local_188;
  undefined4 local_180 [2];
  undefined1 local_178 [8];
  code *pcStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined2 local_110;
  undefined2 uStack_10e;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_2d0 = param_4;
  local_2b8 = param_1;
  local_2c0 = FUN_1447210f0(param_4);
  uStack_1c0 = (code *)CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0);
  if ((local_2c0 == 0) ||
     (uStack_1c0 = (code *)CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0),
     (*(byte *)(local_2c0 + 0x155) & 0x20) != 0)) goto LAB_1408465eb;
  plVar23 = (longlong *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),param_6);
  uVar15 = FUN_14490d72a(local_2c0);
  if ((uVar15 == 1 & (param_6 ^ 1)) != 0) goto LAB_1408465eb;
  local_2c1 = uVar15 == 3 & param_6;
  local_2d8 = param_2;
  if (local_2c1 == 0) {
    param_6 = uVar15 != 0 & param_6;
    local_2c3 = param_6;
    if (((ulonglong)param_8[8] & 2) == 0) {
      if ((*(longlong *)(param_3 + 0x1c8) != 0) && (*(int *)(param_3 + 0x1d0) - 1U < 0xfffffffe)) {
        plVar30 = local_2d0;
        if ((*(byte *)(param_3 + 0x1c0) & 1) != 0) {
          plVar30 = (longlong *)FUN_14485cccc(param_5 + 0xb8);
        }
        param_2 = local_2d8;
        if (plVar30 != (longlong *)0x0) {
          FUN_148832248(param_3 + 0x1c8,*(undefined4 *)(param_3 + 0x1e0),plVar30,local_2c3);
        }
      }
      if ((*(longlong *)(param_3 + 0x1e8) != 0) && (*(int *)(param_3 + 0x1f0) - 1U < 0xfffffffe)) {
        plVar23 = local_2d0;
        if ((*(byte *)(param_3 + 0x1c0) & 1) != 0) {
          plVar23 = (longlong *)FUN_14485cccc(param_5 + 0xb8);
        }
        if ((plVar23 == (longlong *)0x0) || (plVar23[0x36] == 0)) {
LAB_1408487a9:
          lVar18 = 0;
        }
        else {
          lVar18 = *(longlong *)(plVar23[0x36] + 0x3c0);
          if ((DAT_14c950c29 == '\x01') && (lVar18 != 0)) {
            FUN_1456cec3c(lVar18);
          }
          else if (lVar18 == 0) goto LAB_1408487a9;
          lVar19 = FUN_1449f3324();
          if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x38) < *(int *)(lVar19 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar19 + 0x38) * 8) != lVar19 + 0x30)) goto LAB_1408487a9;
        }
        uVar40 = -(uint)(0.0 < *(float *)(param_8 + 0x20));
        fVar59 = (float)(~uVar40 & *(uint *)(param_3 + 0x204) |
                        (uint)*(float *)(param_8 + 0x20) & uVar40);
        local_300 = local_178;
        local_168._0_8_ = *(undefined8 *)(param_5 + 0x38);
        _local_178 = *(undefined1 (*) [16])(param_5 + 0x28);
        lVar19 = lVar18 + 0x960;
        if (lVar18 == 0) {
          lVar19 = 0;
        }
        local_1a8 = *(code **)(param_3 + 0x1e8);
        plStack_1a0 = (longlong *)CONCAT44(plStack_1a0._4_4_,*(undefined4 *)(param_3 + 0x1f0));
        local_198 = (code *)0x0;
        local_2f0 = (code **)CONCAT44(local_2f0._4_4_,fVar59);
        local_2f8 = (undefined1 *)CONCAT44(local_2f8._4_4_,*(float *)(param_3 + 0x208) * fVar59);
        local_318 = local_318 & 0xffffff00;
        local_320 = (code **)(CONCAT71(local_320._1_7_,param_6) ^ 1);
        local_328 = (code **)((ulonglong)local_328 & 0xffffffffffffff00);
        local_310 = CONCAT44(local_310._4_4_,0x3f800000);
        local_308 = plVar23;
        FUN_1410a29b6(local_2d0,&local_1a8,*(undefined4 *)(param_3 + 0x200),lVar19);
        param_2 = local_2d8;
      }
    }
    uVar40 = *(uint *)(param_8 + 8);
    local_2c2 = param_6 ^ 1;
    if ((uVar40 & 4) == 0) {
      lVar18 = FUN_1402d1dc0(param_3 + 0x10);
      uVar32 = CONCAT71((int7)((ulonglong)plVar23 >> 8),lVar18 != 0);
      uVar40 = *(uint *)(param_8 + 8);
    }
    else {
      uVar32 = 0;
    }
    bVar39 = 0 < *(int *)(param_3 + 200);
    bVar37 = (uVar40 & 8) == 0;
    if (((char)uVar32 != '\0') ||
       (uStack_1c0 = (code *)CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0), bVar37 && bVar39)) {
      if (*(char *)(param_2 + 0x204) == '\x01') {
        cVar13 = (**(code **)(*DAT_14cb0d2b0 + 0x3c0))(DAT_14cb0d2b0,local_2c0);
        if (cVar13 != '\0') goto LAB_140845c1c;
      }
      local_294 = (uint)uVar32;
      if ((local_2c3 & uVar15 < 3) == 0) {
        fVar59 = *(float *)(param_8 + 0x20);
        if (fVar59 <= 0.0) {
          fVar59 = 0.0;
          if (bVar37 && bVar39) {
            dVar41 = *(double *)(param_3 + 0xd0);
            if (*(double *)(param_3 + 0xd0) <= *(double *)(param_3 + 0xd8)) {
              dVar41 = *(double *)(param_3 + 0xd8);
            }
            pcVar26 = param_8[0x1e];
            if ((double)param_8[0x1e] <= (double)param_8[0x1f]) {
              pcVar26 = param_8[0x1f];
            }
            fVar59 = (float)((double)pcVar26 * (double)*(float *)(param_3 + 0xec) * dVar41);
          }
          if ((char)uVar32 != '\0') {
            plVar23 = (longlong *)FUN_1402d1dc0(param_3 + 0x10);
            local_148 = (double)((ulonglong)local_148 & 0xffffffffffffff00);
            if ((plVar23 != (longlong *)0x0) &&
               (cVar13 = (**(code **)(*plVar23 + 0x2b0))(plVar23,local_178), cVar13 != '\0')) {
              dVar44 = ((double)local_158._8_8_ - (double)local_168._0_8_) * 0.5;
              dVar45 = ((double)local_158._0_8_ - (double)pcStack_170) * 0.5;
              dVar41 = ((double)local_168._8_8_ - (double)local_178) * 0.5;
              if (dVar41 <= dVar45) {
                dVar41 = dVar45;
              }
              if (dVar41 <= dVar44) {
                dVar41 = dVar44;
              }
              if ((double)fVar59 <= dVar41) {
                fVar59 = (float)dVar41;
              }
            }
          }
        }
        lVar18 = param_5 + 0x28;
        if ((*(byte *)(param_3 + 0xbc) & 0x20) == 0) {
          lVar18 = param_5 + 0x10;
        }
        while (param_2 != 0) {
          if (*(char *)(param_2 + 0x1d0) == '\0') {
            param_2 = param_2 + 0x1d8;
            goto LAB_1408467e3;
          }
          param_2 = FUN_1401f6e4a(param_2 + 0x18);
        }
        param_2 = FUN_14084c139();
        param_2 = param_2 + 0x20;
LAB_1408467e3:
        if ((local_2d0 != (longlong *)0x0) &&
           (plVar23 = (longlong *)(**(code **)(*local_2d0 + 0x5f0))(), plVar23 != (longlong *)0x0))
        {
          lVar19 = *plVar23;
          if (*(code **)(lVar19 + 0x5e8) == FUN_140972dde) {
            if (plVar23[0x76] == 0) {
              if (*(code **)(lVar19 + 0x5f8) == FUN_144784df4) {
                if (*(code **)(plVar23[0x784] + 0x18) == (code *)&LAB_144904684) {
                  if (((((*(int *)((longlong)plVar23 + 0x75b4) == 0) ||
                        (uVar15 = *(uint *)(plVar23 + 0xeb6), (int)uVar15 < 0)) ||
                       (DAT_14c9647dc <= (int)uVar15)) ||
                      ((plVar30 = (longlong *)
                                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
                       plVar30 == (longlong *)0x0 ||
                       ((int)plVar30[2] != *(int *)((longlong)plVar23 + 0x75b4))))) ||
                     ((*(uint *)(plVar30 + 1) & 0x10200000) != 0)) goto LAB_1408468ae;
                  if ((*(uint *)(plVar30 + 1) & 0x10200000) == 0) {
                    lVar19 = *plVar30;
                  }
                  else {
                    lVar19 = 0;
                  }
                  lVar19 = lVar19 + 0x110;
                }
                else {
                  lVar19 = (**(code **)(plVar23[0x784] + 0x18))(plVar23 + 0x784);
                }
                if (lVar19 == 0) goto LAB_1408468ae;
                lVar19 = *(longlong *)(lVar19 + 0x20);
              }
              else {
                lVar19 = (**(code **)(lVar19 + 0x5f8))(plVar23);
              }
              if (lVar19 == 0) goto LAB_1408468ae;
              lVar19 = *(longlong *)(lVar19 + 0x3b0);
              goto LAB_140847f36;
            }
          }
          else {
            lVar19 = (**(code **)(lVar19 + 0x5e8))(plVar23);
LAB_140847f36:
            if (lVar19 == 0) goto LAB_1408468ae;
            lVar19 = *plVar23;
          }
          (**(code **)(lVar19 + 0x700))(plVar23);
        }
LAB_1408468ae:
        ppcVar24 = (code **)FUN_140385aec(param_2);
        param_2 = local_2d8;
        if (ppcVar24 != (code **)0x0) {
          if (*(longlong *)((longlong)local_2b8 + 0x130) != DAT_14c872be0) {
            *(longlong *)((longlong)local_2b8 + 0x130) = DAT_14c872be0;
            local_1c8 = (code *)0x0;
            uStack_1c0._0_4_ = 0;
            uStack_1c0._4_4_ = 0;
            if (0 < *(int *)(local_2c0 + 0x238)) {
              lVar19 = 0;
              do {
                iVar36 = *(int *)(*(longlong *)(local_2c0 + 0x230) + 4 + lVar19 * 8);
                if ((((iVar36 != 0) &&
                     (uVar15 = *(uint *)(*(longlong *)(local_2c0 + 0x230) + lVar19 * 8),
                     -1 < (int)uVar15)) &&
                    (((int)uVar15 < DAT_14c9647dc &&
                     (((plVar23 = (longlong *)
                                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
                       plVar23 != (longlong *)0x0 && ((int)plVar23[2] == iVar36)) &&
                      ((*(uint *)(plVar23 + 1) & 0x10200000) == 0)))))) &&
                   (((plVar23 = (longlong *)*plVar23, plVar23 != (longlong *)0x0 &&
                     ((*(byte *)(plVar23 + 0x84) & 2) != 0)) &&
                    (cVar13 = (**(code **)(*plVar23 + 0x6c8))(plVar23), cVar13 != '\0')))) {
                  local_2a0 = CONCAT44(local_2a0._4_4_,fVar59);
                  (**(code **)(*plVar23 + 0x718))(plVar23,local_178,&local_1a8);
                  iVar36 = (int)uStack_1c0;
                  lVar28 = (longlong)(int)uStack_1c0;
                  iVar16 = (int)uStack_1c0 + 1;
                  bVar38 = uStack_1c0._4_4_ == (int)uStack_1c0;
                  uStack_1c0._0_4_ = iVar16;
                  if (bVar38) {
                    FUN_140849f8a(&local_1c8,iVar36);
                  }
                  *(undefined8 *)(local_1c8 + (lVar28 * 8 + 6) * 8) = 0;
                  *(undefined8 *)(local_1c8 + (lVar28 * 8 + 6) * 8 + 8) = 0;
                  *(undefined8 *)(local_1c8 + (lVar28 * 8 + 4) * 8) = 0;
                  *(undefined8 *)(local_1c8 + (lVar28 * 8 + 4) * 8 + 8) = 0;
                  *(undefined8 *)(local_1c8 + (lVar28 * 8 + 2) * 8) = 0;
                  *(undefined8 *)(local_1c8 + (lVar28 * 8 + 2) * 8 + 8) = 0;
                  *(undefined8 *)(local_1c8 + lVar28 * 0x40) = 0;
                  *(undefined8 *)(local_1c8 + lVar28 * 0x40 + 8) = 0;
                  *(undefined8 *)(local_1c8 + (lVar28 * 8 + 2) * 8) = local_168._0_8_;
                  *(undefined1 (*) [8])(local_1c8 + lVar28 * 0x40) = local_178;
                  *(code **)(local_1c8 + lVar28 * 0x40 + 8) = pcStack_170;
                  dVar41 = (double)FUN_144719204(local_1a8);
                  dVar44 = (double)FUN_144719204(plStack_1a0);
                  dVar45 = sin(dVar41 * 0.017453292519943295);
                  dVar41 = cos(dVar41 * 0.017453292519943295);
                  dVar46 = sin(dVar44 * 0.017453292519943295);
                  dVar44 = cos(dVar44 * 0.017453292519943295);
                  *(double *)(local_1c8 + (lVar28 * 8 + 3) * 8) = dVar44 * dVar41;
                  *(double *)(local_1c8 + (lVar28 * 8 + 4) * 8) = dVar46 * dVar41;
                  *(double *)(local_1c8 + (lVar28 * 8 + 5) * 8) = dVar45;
                  *(undefined4 *)(local_1c8 + (lVar28 * 8 + 6) * 8) =
                       *(undefined4 *)((longlong)plVar23 + 0x494);
                  fVar59 = 0.7853982;
                  if ((longlong *)plVar23[0x89] != (longlong *)0x0) {
                    fVar59 = (float)(**(code **)(*(longlong *)plVar23[0x89] + 0x6e8))();
                    fVar59 = fVar59 * 0.5 * 0.017453292;
                  }
                  fVar59 = (float)(longlong)
                                  (fVar59 * 0.15915494 +
                                  *(float *)(&DAT_14a184448 + (ulonglong)(fVar59 < 0.0) * 4)) *
                           -6.2831855 + fVar59;
                  if (1.5707964 < fVar59) {
                    fVar59 = 3.1415927 - fVar59;
                    fVar60 = -1.0;
                  }
                  else if (fVar59 < -1.5707964) {
                    fVar59 = -3.1415927 - fVar59;
                    fVar60 = -1.0;
                  }
                  else {
                    fVar60 = 1.0;
                  }
                  fVar52 = fVar59 * fVar59;
                  *(float *)(local_1c8 + lVar28 * 0x40 + 0x34) =
                       (((((fVar52 * -2.3889859e-08 + 2.7525562e-06) * fVar52 + -0.00019840874) *
                          fVar52 + 0.008333331) * fVar52 + -0.16666667) * fVar52 + 1.0) * fVar59;
                  *(float *)(local_1c8 + (lVar28 * 8 + 7) * 8) =
                       (((((fVar52 * -2.6051615e-07 + 2.4760495e-05) * fVar52 + -0.0013888378) *
                          fVar52 + 0.041666638) * fVar52 + -0.5) * fVar52 + 1.0) * fVar60;
                  fVar59 = (float)local_2a0;
                }
                lVar19 = lVar19 + 1;
              } while ((int)lVar19 < *(int *)(local_2c0 + 0x238));
            }
            iVar36 = (int)uStack_1c0;
            pcVar26 = local_1c8;
            ppcVar2 = (code **)((longlong)local_2b8 + 0x138);
            if (ppcVar2 != &local_1c8) {
              lVar19 = (longlong)(int)uStack_1c0;
              *(int *)((longlong)local_2b8 + 0x140) = (int)uStack_1c0;
              if ((int)uStack_1c0 == 0 && *(int *)((longlong)local_2b8 + 0x144) == 0) {
                *(undefined4 *)((longlong)local_2b8 + 0x144) = 0;
              }
              else {
                FUN_140849eb0(ppcVar2,(int)uStack_1c0);
                if (iVar36 != 0) {
                  memcpy(*ppcVar2,pcVar26,lVar19 << 6);
                }
              }
            }
            uVar32 = (ulonglong)local_294;
            if (local_1c8 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
          param_2 = local_2d8;
          local_328 = (code **)((longlong)local_2b8 + 0x138);
          local_320 = ppcVar24;
          cVar13 = FUN_140385ec6(local_2c0,0,lVar18);
          uStack_1c0 = (code *)CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0);
          if (cVar13 == '\0') goto LAB_140845c1c;
        }
      }
      cVar13 = (char)uVar32;
      if (bVar37 && bVar39) {
        if ((((ulonglong)param_8[8] & 8) == 0) && (iVar36 = *(int *)(param_3 + 200), iVar36 != 0)) {
          if (iVar36 < 1) {
            lVar18 = 0;
          }
          else {
            uVar15 = rand();
            iVar17 = (int)((float)iVar36 * ((float)(uVar15 & 0x7fff) / 32767.0));
            iVar16 = iVar36 + -1;
            if (iVar17 < iVar36 + -1) {
              iVar16 = iVar17;
            }
            lVar18 = (longlong)iVar16;
          }
          lVar18 = FUN_1402d20ea(lVar18 * 0x28 + *(longlong *)(param_3 + 0xc0));
          if (lVar18 != 0) {
            if (0.0 < *(float *)(param_8 + 0x20)) {
              dVar41 = (double)*(float *)(param_8 + 0x20);
              dVar44 = dVar41;
            }
            else {
              dVar41 = *(double *)(param_3 + 0xd0);
              dVar44 = *(double *)(param_3 + 0xd8);
            }
            fVar59 = *(float *)(param_3 + 0xec);
            fVar60 = *(float *)(param_3 + 0xe8);
            uVar15 = rand();
            dVar45 = (double)(((float)(uVar15 & 0x7fff) / 32767.0) * (fVar59 - fVar60) + fVar60);
            fVar59 = (float)(dVar41 * dVar45 * (double)param_8[0x1e]);
            if ((0.0 < fVar59) &&
               (fVar60 = (float)(dVar44 * dVar45 * (double)param_8[0x1f]), 0.0 < fVar60)) {
              fVar52 = *(float *)(param_3 + 0xe0);
              pcVar26 = param_8[0x1d];
              local_1f8 = *(code **)(param_5 + 0x38);
              local_208 = *(code **)(param_5 + 0x28);
              plStack_200 = *(longlong **)(param_5 + 0x30);
              dVar41 = *(double *)(param_5 + 0x50);
              dVar46 = -dVar41;
              dVar44 = *(double *)(param_5 + 0x40);
              dVar45 = *(double *)(param_5 + 0x48);
              dVar48 = -dVar45;
              pvVar6 = (void *)-dVar44;
              local_220 = pvVar6;
              dStack_218 = dVar48;
              local_210 = dVar46;
              if (*(char *)(param_2 + 0x204) == '\x01') {
                if (local_2d0[0x39] == 0) {
                  local_168._0_8_ = DAT_14c8462e8;
                  pcStack_170 = (code *)DAT_14c8462e0;
                  local_178 = (undefined1  [8])DAT_14c8462d8;
                }
                else {
                  FUN_14141a100(local_2d0[0x39],local_178);
                }
                param_2 = local_2d8;
                auVar47 = local_178;
                pcVar4 = pcStack_170;
                pcVar29 = (code *)local_168._0_8_;
              }
              else {
                auVar47 = (undefined1  [8])param_8[0x1a];
                pcVar4 = param_8[0x1b];
                pcVar29 = param_8[0x1c];
              }
              uVar32 = DAT_149931180;
              if (((9.999999747378752e-05 < (double)((ulonglong)auVar47 & uVar32)) ||
                  (9.999999747378752e-05 < (double)((ulonglong)pcVar4 & uVar32))) ||
                 (9.999999747378752e-05 < (double)((ulonglong)pcVar29 & uVar32))) {
                dVar43 = (double)auVar47 * dVar48 + dVar44 * (double)pcVar4;
                dVar57 = (double)pcVar29 * (double)pvVar6 + dVar41 * (double)auVar47;
                dVar56 = (double)pcVar4 * dVar46 + dVar45 * (double)pcVar29;
                dVar42 = dVar43 * dVar43 + dVar56 * dVar56 + dVar57 * dVar57;
                if (9.99999993922529e-09 < dVar42) {
                  dVar42 = 1.0 / SQRT(dVar42);
                  dVar56 = dVar56 * dVar42;
                  dVar57 = dVar57 * dVar42;
                  dVar43 = dVar43 * dVar42;
                  dVar45 = (double)pvVar6 * dVar57 + dVar45 * dVar56;
                  dVar44 = dVar46 * dVar56 + dVar44 * dVar43;
                  dVar41 = dVar48 * dVar43 + dVar41 * dVar57;
                  if (((9.999999747378752e-05 < (double)((ulonglong)dVar41 & uVar32)) ||
                      (9.999999747378752e-05 < (double)((ulonglong)dVar44 & uVar32))) ||
                     (9.999999747378752e-05 < (double)(uVar32 & (ulonglong)dVar45))) {
                    pcStack_170 = (code *)dVar48;
                    local_178 = (undefined1  [8])pvVar6;
                    local_168._8_8_ = 0;
                    local_168._0_8_ = dVar46;
                    local_158._8_8_ = dVar57;
                    local_158._0_8_ = dVar56;
                    uStack_140 = 0;
                    local_138._8_8_ = dVar44;
                    local_138._0_8_ = dVar41;
                    local_128._8_8_ = 0;
                    local_128._0_8_ = dVar45;
                    local_118 = DAT_14c8464e0;
                    local_110 = (undefined2)DAT_14c8464e8;
                    uStack_10e = (undefined2)((ulonglong)DAT_14c8464e8 >> 0x10);
                    uStack_10c = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
                    uStack_108 = (undefined4)DAT_14c8464f0;
                    uStack_104 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                    local_100 = 0x3ff0000000000000;
                    local_148 = dVar43;
                    FUN_141706d54(local_178,&local_1a8);
                    param_2 = local_2d8;
                    goto LAB_140847280;
                  }
                }
                FUN_144afe7fe(&local_220,&local_1a8);
                param_2 = local_2d8;
              }
              else {
                dVar42 = 0.0;
                if (((dVar45 != 0.0) || (NAN(dVar45))) || ((dVar44 != 0.0 || (NAN(dVar44))))) {
                  dVar42 = atan2(dVar48,(double)pvVar6);
                  dVar42 = dVar42 * 0.5;
                }
                dVar45 = SQRT(dVar44 * dVar44 + dVar45 * dVar45);
                dVar44 = 0.0;
                if ((((dVar41 != 0.0) || (NAN(dVar41))) || (dVar45 != 0.0)) || (NAN(dVar45))) {
                  dVar44 = atan2(dVar46,dVar45);
                  dVar44 = dVar44 * 0.5;
                }
                dVar41 = sin(dVar44);
                dVar44 = cos(dVar44);
                dVar45 = sin(dVar42);
                dVar46 = cos(dVar42);
                local_1a8 = (code *)(dVar41 * dVar45);
                plStack_1a0 = (longlong *)(-dVar41 * dVar46);
                local_198 = (code *)(dVar45 * dVar44);
                plStack_190 = (longlong *)(dVar44 * dVar46);
              }
LAB_140847280:
              if ((*(byte *)(param_3 + 0xfc) & 4) != 0) {
                fVar3 = *(float *)(param_3 + 0xf0);
                uVar15 = rand();
                dVar41 = *(double *)(param_5 + 0x40);
                dVar44 = *(double *)(param_5 + 0x48);
                dVar45 = *(double *)(param_5 + 0x50);
                dVar46 = (double)((((float)(uVar15 & 0x7fff) / 32767.0) * (fVar3 + fVar3) - fVar3) *
                                 0.017453292) * 0.5;
                dVar48 = sin(dVar46);
                dVar46 = cos(dVar46);
                dVar41 = dVar41 * dVar48;
                dVar44 = dVar44 * dVar48;
                dVar45 = dVar45 * dVar48;
                dVar43 = dVar41 * (double)plStack_1a0;
                dVar56 = dVar41 * (double)local_1a8;
                dVar57 = (double)local_1a8 * dVar44;
                dVar58 = (double)plStack_1a0 * dVar44;
                dVar48 = (double)local_1a8 * dVar45;
                dVar42 = (double)local_198 * dVar45;
                local_1a8 = (code *)((double)plStack_1a0 * dVar45 * -1.0 +
                                    (double)local_198 * dVar44 +
                                    dVar41 * (double)plStack_190 * 1.0 + (double)local_1a8 * dVar46)
                ;
                plStack_1a0 = (longlong *)
                              (dVar48 * 1.0 +
                              (double)plStack_190 * dVar44 +
                              dVar41 * (double)local_198 * -1.0 + (double)plStack_1a0 * dVar46);
                local_198 = (code *)((double)plStack_190 * dVar45 * 1.0 +
                                    ((dVar43 * 1.0 + dVar46 * (double)local_198) - dVar57));
                plStack_190 = (longlong *)
                              (dVar42 * -1.0 +
                              ((dVar56 * -1.0 + dVar46 * (double)plStack_190) - dVar58));
              }
              fVar52 = (float)((double)fVar52 * (double)pcVar26);
              FUN_1448052ee(&local_1a8,&local_238);
              dVar41 = local_2b8;
              bVar14 = *(byte *)(param_3 + 0xfc);
              uVar15 = *(uint *)(param_3 + 0xe4);
              if ((bVar14 & 1) == 0) {
                uStack_1c0._0_4_ = SUB84(dStack_230,0);
                uStack_1c0._4_4_ = (int)((ulonglong)dStack_230 >> 0x20);
                if ((bVar14 & 2) == 0) {
                  local_328 = &local_1c8;
                  local_1b8 = local_228;
                  local_1c8 = local_238;
                  local_1e8 = local_208;
                  plStack_1e0 = plStack_200;
                  local_1d8 = local_1f8;
                  local_248 = (code *)(double)fVar60;
                  dStack_250 = (double)fVar59;
                  local_258 = (code *)(double)fVar52;
                  local_320 = (code **)CONCAT44(local_320._4_4_,uVar15);
                  lVar18 = FUN_14084aba6(local_2b8,lVar18);
                }
                else {
                  local_1b8 = local_228;
                  local_1c8 = local_238;
                  local_1e8 = local_208;
                  plStack_1e0 = plStack_200;
                  local_1d8 = local_1f8;
                  uVar20 = FUN_14479d2ce(param_5 + 0xd8);
                  local_248 = (code *)(double)fVar60;
                  dStack_250 = (double)fVar59;
                  local_258 = (code *)(double)fVar52;
                  local_328 = &local_1e8;
                  local_320 = &local_1c8;
                  local_318 = uVar15;
                  lVar18 = FUN_14084c336(local_2b8,lVar18,&local_258,uVar20);
                }
              }
              else {
                local_2a0 = lVar18;
                if ((bVar14 & 2) == 0) {
                  local_248 = local_228;
                  local_258 = local_238;
                  dStack_250 = dStack_230;
                  local_278 = local_208;
                  plStack_270 = plStack_200;
                  local_268 = local_1f8;
                  local_280 = (code *)(double)fVar60;
                  plStack_288 = (longlong *)(double)fVar59;
                  local_290 = (code *)(double)fVar52;
                  uVar20 = *(undefined8 *)(param_3 + 0x100);
                  uVar40 = (uint)((ulonglong)uVar20 >> 0x10);
                  uVar34 = (uint)uVar20 & 0xffff;
                  plVar23 = (longlong *)
                            FUN_14084a08a((longlong)local_2b8 + 0x70,
                                          ((uint)uVar20 << 0x10 | uVar34) +
                                          (int)((ulonglong)uVar20 >> 0x20) +
                                          (uVar40 << 0x13 | uVar40 & 0xffff) + (uVar34 >> 4),
                                          param_3 + 0x100);
                  cVar13 = FUN_14084c86a(plVar23,&local_290,&local_278,&local_258);
                  if (cVar13 != '\0') {
                    local_328 = (code **)local_178;
                    local_168._0_8_ = local_228;
                    pcStack_170 = (code *)dStack_230;
                    local_178 = (undefined1  [8])local_238;
                    local_1c8 = local_208;
                    uStack_1c0._0_4_ = (int)plStack_200;
                    uStack_1c0._4_4_ = (int)((ulonglong)plStack_200 >> 0x20);
                    local_1b8 = local_1f8;
                    local_1e8 = local_290;
                    plStack_1e0 = plStack_288;
                    local_1d8 = local_280;
                    local_320 = (code **)CONCAT44(local_320._4_4_,uVar15);
                    lVar18 = FUN_14084aba6(dVar41,local_2a0);
                    if (lVar18 == 0) {
                      lVar18 = 0;
                      param_2 = local_2d8;
                      goto LAB_14084764b;
                    }
LAB_1408475ce:
                    *(undefined1 *)(lVar18 + 0x310) = 1;
                    *(undefined8 *)(lVar18 + 0x314) = *(undefined8 *)(param_3 + 0x100);
                    uVar15 = *(uint *)(lVar18 + 0xc);
                    if ((int)uVar15 < DAT_14c9647dc) {
                      lVar19 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
                    }
                    else {
                      lVar19 = 0;
                    }
                    iVar36 = *(int *)(lVar19 + 0x10);
                    if (*(int *)(lVar19 + 0x10) == 0) {
                      LOCK();
                      iVar36 = DAT_14c964868 + 1;
                      UNLOCK();
                      iVar16 = DAT_14c964868 + 1;
                      bVar39 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar36;
                      if (bVar39) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,iVar16);
                      }
                      LOCK();
                      iVar36 = *(int *)(lVar19 + 0x10);
                      bVar39 = iVar36 == 0;
                      if (bVar39) {
                        *(int *)(lVar19 + 0x10) = iVar16;
                        iVar36 = 0;
                      }
                      UNLOCK();
                      if (bVar39) {
                        iVar36 = iVar16;
                      }
                    }
                    iVar16 = (int)plVar23[1];
                    *(uint *)(plVar23 + 1) = iVar16 + 1U;
                    if (*(uint *)((longlong)plVar23 + 0xc) < iVar16 + 1U) {
                      FUN_14084fd54(plVar23,iVar16);
                    }
                    *(ulonglong *)(*plVar23 + (longlong)iVar16 * 8) = CONCAT44(iVar36,uVar15);
                    param_2 = local_2d8;
                    goto LAB_14084764b;
                  }
                }
                else {
                  local_248 = local_228;
                  local_258 = local_238;
                  dStack_250 = dStack_230;
                  local_268 = local_1f8;
                  local_278 = local_208;
                  plStack_270 = plStack_200;
                  if (*(int *)(param_5 + 0xdc) == 0) {
LAB_140848338:
                    uVar20 = 0;
                  }
                  else {
                    uVar40 = *(uint *)(param_5 + 0xd8);
                    uVar20 = 0;
                    if ((-1 < (int)uVar40) && ((int)uVar40 < DAT_14c9647dc)) {
                      puVar31 = (undefined8 *)
                                ((ulonglong)((uVar40 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar40 >> 0x10) * 8));
                      if ((puVar31 == (undefined8 *)0x0) ||
                         ((*(int *)(puVar31 + 2) != *(int *)(param_5 + 0xdc) ||
                          ((*(uint *)(puVar31 + 1) & 0x10200000) != 0)))) goto LAB_140848338;
                      uVar20 = *puVar31;
                    }
                  }
                  local_280 = (code *)(double)fVar60;
                  plStack_288 = (longlong *)(double)fVar59;
                  local_290 = (code *)(double)fVar52;
                  uVar35 = *(undefined8 *)(param_3 + 0x100);
                  uVar40 = (uint)((ulonglong)uVar35 >> 0x10);
                  uVar34 = (uint)uVar35 & 0xffff;
                  plVar23 = (longlong *)
                            FUN_14084a08a((longlong)local_2b8 + 0x70,
                                          ((uint)uVar35 << 0x10 | uVar34) +
                                          (int)((ulonglong)uVar35 >> 0x20) +
                                          (uVar40 << 0x13 | uVar40 & 0xffff) + (uVar34 >> 4),
                                          param_3 + 0x100);
                  cVar13 = FUN_14084c86a(plVar23,&local_290,&local_278,&local_258);
                  if (cVar13 != '\0') {
                    local_320 = (code **)local_178;
                    local_168._0_8_ = local_248;
                    pcStack_170 = (code *)dStack_250;
                    local_178 = (undefined1  [8])local_258;
                    local_328 = &local_1c8;
                    local_1c8 = local_278;
                    uStack_1c0._0_4_ = (int)plStack_270;
                    uStack_1c0._4_4_ = (int)((ulonglong)plStack_270 >> 0x20);
                    local_1b8 = local_268;
                    local_1e8 = local_290;
                    plStack_1e0 = plStack_288;
                    local_1d8 = local_280;
                    local_318 = uVar15;
                    lVar18 = FUN_14084c336(dVar41,local_2a0,&local_1e8,uVar20);
                    if (lVar18 != 0) goto LAB_1408475ce;
                  }
                }
                lVar18 = 0;
                param_2 = local_2d8;
              }
LAB_14084764b:
              if (lVar18 != 0) {
                FUN_14084aab8(lVar18);
                plVar23 = local_2d0;
                auVar51[0xf] = 0;
                auVar51._0_15_ = stack0xfffffffffffffe89;
                _local_178 = auVar51 << 8;
                local_158._8_4_ = 0;
                FUN_1456bb102(local_178,local_2d0);
                FUN_14084bac2(lVar18,param_2 + 0x40,local_178);
                FUN_1448173f8(local_158 + 8);
                if ((local_178[0] == '\x03') && ((longlong *)local_168._0_8_ != (longlong *)0x0)) {
                  LOCK();
                  piVar1 = (int *)(local_168._0_8_ + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*(longlong *)local_168._0_8_ + 0x10))();
                  }
                }
                auVar54[0xf] = 0;
                auVar54._0_15_ = stack0xfffffffffffffe89;
                _local_178 = auVar54 << 8;
                local_158._8_4_ = 0;
                FUN_1456bb102(local_178,plVar23);
                FUN_14084bac2(lVar18,param_8 + 2,local_178);
                FUN_1448173f8(local_158 + 8);
                if ((local_178[0] == '\x03') && ((longlong *)local_168._0_8_ != (longlong *)0x0)) {
                  LOCK();
                  piVar1 = (int *)(local_168._0_8_ + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*(longlong *)local_168._0_8_ + 0x10))();
                  }
                }
                pcVar26 = param_8[10];
                param_2 = local_2d8;
                if (pcVar26 != (code *)0x0) {
                  local_178 = (undefined1  [8])param_7;
                  ppcVar24 = param_8 + 0xe;
                  if ((code **)param_8[0xc] != (code **)0x0) {
                    ppcVar24 = (code **)param_8[0xc];
                  }
                  local_1f0 = lVar18;
                  uVar20 = (**(code **)(*ppcVar24 + 8))();
                  param_2 = local_2d8;
                  (*pcVar26)(uVar20,&local_1f0,local_178);
                }
              }
            }
          }
        }
        cVar13 = (char)local_294;
      }
      uStack_1c0 = (code *)CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0);
      if ((cVar13 != '\0') &&
         (uStack_1c0 = (code *)CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0),
         ((ulonglong)param_8[8] & 4) == 0)) {
        plVar23 = (longlong *)FUN_1402d1dc0(param_3 + 0x10);
        if ((~local_2c3 & plVar23 == (longlong *)0x0) == 0) {
          if ((plVar23 != (longlong *)0x0) && (((ulonglong)param_8[8] & 0x40) != 0)) {
            cVar13 = (**(code **)(*plVar23 + 0x2a0))(plVar23);
            if (cVar13 != '\0') goto LAB_140845c1c;
          }
          plVar30 = (longlong *)FUN_14485cccc(param_5 + 0xb8);
          pdVar27 = (double *)(param_5 + 0x10);
          if ((*(byte *)(param_3 + 0xbc) & 0x20) != 0) {
            pdVar27 = (double *)(param_5 + 0x28);
          }
          dVar41 = *pdVar27;
          local_2b8 = pdVar27[1];
          uStack_2b0 = 0;
          dVar44 = pdVar27[2];
          local_328 = param_8;
          FUN_14084b22d(&local_1e8,local_2d0,param_5,*(undefined1 *)(param_2 + 0x204));
          auVar11._8_8_ = plStack_1e0;
          auVar11._0_8_ = local_1e8;
          auVar51 = divpd(auVar11,_DAT_1499387d0);
          auVar55._8_8_ = 0;
          auVar55._0_8_ = local_1d8;
          auVar54 = divpd(auVar55,_DAT_1499387d0);
          auVar51 = roundpd(auVar51,auVar51,3);
          auVar54 = roundpd(auVar54,auVar54,3);
          dVar45 = ((double)local_1e8 - auVar51._0_8_ * (double)DAT_1499387d0) *
                   0.008726646259971648;
          dVar46 = ((double)plStack_1e0 - auVar51._8_8_ * DAT_1499387d0._8_8_) *
                   0.008726646259971648;
          dVar48 = ((double)local_1d8 - auVar54._0_8_ * (double)DAT_1499387d0) *
                   0.008726646259971648;
          dVar42 = (0.0 - auVar54._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
          dVar43 = sin(dVar45);
          dVar56 = sin(dVar46);
          dVar57 = sin(dVar48);
          sin(dVar42);
          dVar58 = cos(dVar45);
          dVar49 = cos(dVar46);
          dVar48 = cos(dVar48);
          cos(dVar42);
          dVar45 = -(dVar49 * dVar43 * dVar57) + dVar56 * dVar58 * dVar48;
          dVar46 = dVar56 * dVar43 * dVar57 + dVar49 * dVar58 * dVar48;
          local_148 = dVar44 + *(double *)(param_3 + 0x80);
          dVar44 = local_2b8 + *(double *)(param_3 + 0x78);
          dVar50 = dVar43 * dVar56 * dVar48 - dVar58 * dVar49 * dVar57;
          dVar56 = -(dVar43 * dVar49 * dVar48) - dVar58 * dVar56 * dVar57;
          local_158._8_4_ = SUB84(dVar44,0);
          local_158._0_8_ = dVar41 + *(double *)(param_3 + 0x70);
          local_158._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
          uStack_140 = 0;
          dVar44 = *(double *)(param_3 + 0x50);
          dVar48 = *(double *)(param_3 + 0x58);
          dVar42 = *(double *)(param_3 + 0x60);
          dVar43 = *(double *)(param_3 + 0x68);
          dVar41 = dVar44 * dVar45 * 1.0 +
                   dVar43 * dVar56 + dVar50 * dVar42 * -1.0 + dVar48 * dVar46;
          local_168._0_8_ =
               dVar43 * dVar45 * 1.0 + ((dVar48 * dVar50 * 1.0 + dVar46 * dVar42) - dVar56 * dVar44)
          ;
          local_168._8_8_ =
               dVar42 * dVar45 * -1.0 +
               ((dVar44 * dVar50 * -1.0 + dVar46 * dVar43) - dVar56 * dVar48);
          unique0x10000ae4 = SUB84(dVar41,0);
          local_178 = (undefined1  [8])
                      (dVar48 * dVar45 * -1.0 +
                      dVar42 * dVar56 + dVar50 * dVar43 * 1.0 + dVar44 * dVar46);
          unique0x10000ae8 = (int)((ulonglong)dVar41 >> 0x20);
          local_138 = *(undefined1 (*) [16])(param_3 + 0x90);
          local_128._8_8_ = 0;
          local_128._0_8_ = *(ulonglong *)(param_3 + 0xa0);
          if (local_2c2 == 1 && plVar23 != (longlong *)0x0) {
            local_328 = (code **)CONCAT71(local_328._1_7_,*(byte *)(param_8 + 8) >> 7);
            local_320 = (code **)CONCAT71(local_320._1_7_,1);
            pcVar26 = (code *)FUN_1405837ac(local_2c0,plVar23,local_178,1);
            if (pcVar26 != (code *)0x0) {
              if ((*(byte *)(param_3 + 0xbc) & 0x10) == 0) {
                plVar23 = local_2d0;
                if ((*(byte *)((longlong)param_8 + 0x41) & 1) != 0) {
LAB_14084841c:
                  FUN_140e996a4(pcVar26,plVar23);
                  FUN_140c0563c(pcVar26,1);
                }
              }
              else if (plVar30 != (longlong *)0x0) {
                if (DAT_14caf64b8 == 0) {
                  local_2f0 = &local_1a8;
                  local_1a8 = FUN_141030f22;
                  local_2e0 = FUN_14081d0ea;
                  local_2e8 = FUN_142b4754c;
                  local_2f8 = &LAB_147c45ce0;
                  local_300 = &LAB_1463f1ff4;
                  local_308 = (longlong *)&DAT_149e063b2;
                  local_310 = 0x4000000000;
                  local_318 = 0x10000004;
                  local_320 = (code **)CONCAT44(local_320._4_4_,8);
                  local_328 = (code **)CONCAT44(local_328._4_4_,0x428);
                  FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
                }
                if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(plVar30[2] + 0x38)) &&
                   (plVar23 = plVar30,
                   *(longlong *)
                    (*(longlong *)(plVar30[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8
                    ) == DAT_14caf64b8 + 0x30)) goto LAB_14084841c;
              }
              local_1a8 = (code *)((ulonglong)local_1a8 & 0xffffffffffffff00);
              local_180[0] = 0;
              FUN_1456bb102(&local_1a8,local_2d0);
              if (1e-08 < ABS(*(float *)((longlong)param_8 + 0x104) + -1.0)) {
                (**(code **)(*(longlong *)pcVar26 + 0xab0))(pcVar26);
              }
              local_1c8 = *(code **)(param_2 + 0x30);
              uStack_1c0._0_4_ = *(undefined4 *)(param_2 + 0x38);
              FUN_140e99737(pcVar26,&local_1c8,&local_1a8);
              local_1c8 = *(code **)(param_3 + 0x38);
              uStack_1c0._0_4_ = *(undefined4 *)(param_3 + 0x40);
              FUN_140e99737(pcVar26,&local_1c8,&local_1a8);
              local_1c8 = *param_8;
              uStack_1c0._0_4_ = *(int *)(param_8 + 1);
              FUN_140e99737(pcVar26,&local_1c8,&local_1a8);
              uStack_1c0 = (code *)CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0);
              if ((0.0 < *(float *)(param_8 + 0x20)) &&
                 (uStack_1c0 = (code *)CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0),
                 0.0 < *(float *)(param_3 + 0xb0))) {
                if (*(longlong *)(param_3 + 0xb4) == 0) {
                  local_1c8 = (code *)(double)(*(float *)(param_8 + 0x20) /
                                              *(float *)(param_3 + 0xb0));
                  local_1b8 = local_1c8;
                  uStack_1c0 = local_1c8;
                  (**(code **)(*(longlong *)pcVar26 + 0x478))(pcVar26);
                }
                else {
                  (**(code **)(*(longlong *)pcVar26 + 0xa08))(pcVar26);
                }
              }
              if (0.0 < *(float *)(param_8 + 0x21)) {
                (**(code **)(*(longlong *)pcVar26 + 0xa08))(pcVar26,*(undefined8 *)(param_2 + 0x58))
                ;
              }
              FUN_1448173f8(local_180);
              if (((char)local_1a8 == '\x03') && (local_198 != (code *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_198 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*(longlong *)local_198 + 0x10))();
                }
              }
            }
            pcVar29 = param_8[10];
            if (pcVar29 != (code *)0x0) {
              local_1a8 = param_7;
              ppcVar24 = param_8 + 0xe;
              if ((code **)param_8[0xc] != (code **)0x0) {
                ppcVar24 = (code **)param_8[0xc];
              }
              local_1c8 = pcVar26;
              uVar20 = (**(code **)(*ppcVar24 + 8))();
              (*pcVar29)(uVar20,&local_1c8,&local_1a8);
            }
            param_2 = local_2d8;
            if ((pcVar26 != (code *)0x0) && ((*(byte *)(param_3 + 0xbc) & 2) != 0)) {
              FUN_14057a3b2(pcVar26,0,0,1);
              if (((*(int *)(param_5 + 0xdc) == 0) ||
                  (((uVar15 = *(uint *)(param_5 + 0xd8), (int)uVar15 < 0 ||
                    (DAT_14c9647dc <= (int)uVar15)) ||
                   (plVar23 = (longlong *)
                              ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
                   plVar23 == (longlong *)0x0)))) ||
                 ((((int)plVar23[2] != *(int *)(param_5 + 0xdc) ||
                   ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)) || (lVar18 = *plVar23, lVar18 == 0)
                  ))) {
                if ((plVar30 != (longlong *)0x0) && (lVar18 = plVar30[0x39], lVar18 != 0))
                goto LAB_140847b8c;
              }
              else if ((*(uint *)(plVar23 + 1) & 0x10200000) == 0) {
LAB_140847b8c:
                uVar8 = DAT_14cadad90;
                if (*(longlong *)(param_5 + 0xf0) != 0 && (*(byte *)(param_3 + 0xbc) & 8) != 0) {
                  uVar8 = DAT_14cadada0;
                }
                local_1a8 = (code *)CONCAT44(local_1a8._4_4_,uVar8);
                lVar19 = *(longlong *)(param_5 + 0xf0);
                if ((*(byte *)(param_3 + 0xbc) & 4) == 0) {
                  lVar19 = 0;
                }
                (**(code **)(*(longlong *)pcVar26 + 0x490))(pcVar26,lVar18,&local_1a8,lVar19);
              }
            }
          }
        }
      }
    }
  }
LAB_140845c1c:
  if ((((ulonglong)param_8[8] & 1) != 0) ||
     ((local_2c1 & *(char *)(param_2 + 0x204) != '\x01') != 0)) goto LAB_1408465eb;
  plVar23 = (longlong *)(param_3 + 0x110);
  if ((*(byte *)(param_3 + 0x108) & 1) == 0) {
    plVar23 = (longlong *)(param_2 + 0x68);
  }
  lVar18 = plVar23[1];
  if (lVar18 == 0) {
    uVar20 = FUN_140067708();
    lVar18 = FUN_14477b664(uVar20);
    plVar23[1] = lVar18;
  }
  lVar19 = plVar23[2];
  if (lVar19 == 0) {
    if ((lVar18 == 0) || (*plVar23 == 0)) goto LAB_1408465eb;
    plVar30 = *(longlong **)(lVar18 + 0xb8);
    if (plVar30 != (longlong *)0x0) {
      cVar13 = (**(code **)(*plVar30 + 0x108))(plVar30);
      if (cVar13 != '\0') {
        uVar20 = (**(code **)(*plVar30 + 0x110))(plVar30);
        lVar19 = FUN_144aff482(uVar20,plVar23);
        plVar23[2] = lVar19;
        if (lVar19 == 0) goto LAB_1408465eb;
        goto LAB_140845c71;
      }
    }
    plVar23[2] = 0;
    goto LAB_1408465eb;
  }
LAB_140845c71:
  plVar30 = plVar23 + 0x15;
  if ((plVar23[0x15] != 0) && ((DAT_14cb26569 & 1) != 0)) goto LAB_140845c93;
  if (plVar23[1] != 0) goto LAB_14084821f;
  uVar20 = FUN_140067708();
  lVar18 = FUN_14477b664(uVar20);
  plVar23[1] = lVar18;
  lVar19 = plVar23[2];
  if (lVar19 == 0) {
    param_2 = local_2d8;
    if ((lVar18 != 0) && (*plVar23 != 0)) {
      plVar25 = *(longlong **)(lVar18 + 0xb8);
      if (plVar25 != (longlong *)0x0) {
        cVar13 = (**(code **)(*plVar25 + 0x108))(plVar25);
        if (cVar13 != '\0') {
          uVar20 = (**(code **)(*plVar25 + 0x110))(plVar25);
          lVar19 = FUN_144aff482(uVar20,plVar23);
          plVar23[2] = lVar19;
          param_2 = local_2d8;
          if (lVar19 != 0) {
            lVar18 = plVar23[1];
            goto LAB_1408497c6;
          }
          goto LAB_140845c93;
        }
      }
      plVar23[2] = 0;
      param_2 = local_2d8;
    }
  }
  else {
LAB_1408497c6:
    param_2 = local_2d8;
    if (lVar18 == 0) {
      uVar20 = FUN_140067708();
      lVar18 = FUN_14477b664(uVar20);
      plVar23[1] = lVar18;
      lVar19 = plVar23[2];
      if (((lVar19 == 0) && (lVar19 = 0, param_2 = local_2d8, lVar18 != 0)) && (*plVar23 != 0)) {
        plVar25 = *(longlong **)(lVar18 + 0xb8);
        if (plVar25 == (longlong *)0x0) {
LAB_140849a01:
          lVar19 = 0;
        }
        else {
          cVar13 = (**(code **)(*plVar25 + 0x108))(plVar25);
          if (cVar13 == '\0') goto LAB_140849a01;
          uVar20 = (**(code **)(*plVar25 + 0x110))(plVar25);
          lVar19 = FUN_144aff482(uVar20,plVar23);
        }
        plVar23[2] = lVar19;
        param_2 = local_2d8;
      }
    }
LAB_14084821f:
    local_178 = (undefined1  [8])lVar19;
    FUN_140942716(local_178);
    FUN_1407ec87c(plVar30,local_178);
    if ((local_178 != (undefined1  [8])0x0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)((longlong)local_178 + 0x50));
    }
  }
LAB_140845c93:
  if ((*(byte *)(plVar23 + 0x10) & 2) == 0) {
LAB_140845ca1:
    bVar39 = false;
  }
  else {
    if (local_2d0 != (longlong *)0x0) {
      if (DAT_14caf64b8 == 0) {
        local_2f0 = (code **)local_178;
        local_178 = (undefined1  [8])FUN_141030f22;
        local_2e0 = FUN_14081d0ea;
        local_2e8 = FUN_142b4754c;
        local_2f8 = &LAB_147c45ce0;
        local_300 = &LAB_1463f1ff4;
        local_308 = (longlong *)&DAT_149e063b2;
        local_310 = 0x4000000000;
        local_318 = 0x10000004;
        local_320 = (code **)CONCAT44(local_320._4_4_,8);
        local_328 = (code **)CONCAT44(local_328._4_4_,0x428);
        FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
      }
      if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(local_2d0[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(local_2d0[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) ==
          DAT_14caf64b8 + 0x30)) {
        cVar13 = (**(code **)(*local_2d0 + 0x700))();
        if (cVar13 != '\0') goto LAB_140845ca1;
      }
    }
    bVar39 = true;
  }
  if ((*(byte *)(param_3 + 0xbc) & 0x10) == 0) {
LAB_140845cb2:
    if (bVar39) goto LAB_1408465eb;
  }
  else {
    plVar25 = (longlong *)FUN_14485cccc(param_5 + 0xb8);
    if (plVar25 == (longlong *)0x0) goto LAB_140845cb2;
    if (DAT_14caf64b8 == 0) {
      local_2f0 = (code **)local_178;
      local_178 = (undefined1  [8])FUN_141030f22;
      local_2e0 = FUN_14081d0ea;
      local_2e8 = FUN_142b4754c;
      local_2f8 = &LAB_147c45ce0;
      local_300 = &LAB_1463f1ff4;
      local_308 = (longlong *)&DAT_149e063b2;
      local_310 = 0x4000000000;
      local_318 = 0x10000004;
      local_320 = (code **)CONCAT44(local_320._4_4_,8);
      local_328 = (code **)CONCAT44(local_328._4_4_,0x428);
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(plVar25[2] + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar25[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) !=
        DAT_14caf64b8 + 0x30)) goto LAB_140845cb2;
    lVar18 = *plVar25;
    if (*(code **)(lVar18 + 0x5e8) == FUN_140972dde) {
      if (plVar25[0x76] == 0) {
        if (*(code **)(lVar18 + 0x5f8) == FUN_144784df4) {
          if (*(code **)(plVar25[0x784] + 0x18) == (code *)&LAB_144904684) {
            if (((((*(int *)((longlong)plVar25 + 0x75b4) == 0) ||
                  (uVar15 = *(uint *)(plVar25 + 0xeb6), (int)uVar15 < 0)) ||
                 (DAT_14c9647dc <= (int)uVar15)) ||
                ((plVar21 = (longlong *)
                            ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
                 plVar21 == (longlong *)0x0 ||
                 ((int)plVar21[2] != *(int *)((longlong)plVar25 + 0x75b4))))) ||
               ((*(uint *)(plVar21 + 1) & 0x10200000) != 0)) goto LAB_140845cb2;
            if ((*(uint *)(plVar21 + 1) & 0x10200000) == 0) {
              lVar18 = *plVar21;
            }
            else {
              lVar18 = 0;
            }
            lVar18 = lVar18 + 0x110;
          }
          else {
            lVar18 = (**(code **)(plVar25[0x784] + 0x18))(plVar25 + 0x784);
          }
          if (lVar18 == 0) goto LAB_140845cb2;
          lVar18 = *(longlong *)(lVar18 + 0x20);
        }
        else {
          lVar18 = (**(code **)(lVar18 + 0x5f8))(plVar25);
        }
        if (lVar18 == 0) goto LAB_140845cb2;
        lVar18 = *(longlong *)(lVar18 + 0x3b0);
        goto LAB_140846f7b;
      }
    }
    else {
      lVar18 = (**(code **)(lVar18 + 0x5e8))(plVar25);
LAB_140846f7b:
      if (lVar18 == 0) goto LAB_140845cb2;
      lVar18 = *plVar25;
    }
    cVar13 = (**(code **)(lVar18 + 0x700))(plVar25);
    if (bVar39 || cVar13 != '\0') goto LAB_1408465eb;
  }
  cVar13 = FUN_140849a6e(*plVar30,local_2c0,(undefined4 *)(param_5 + 0x28));
  if (cVar13 == '\0') goto LAB_1408465eb;
  lVar18 = FUN_14485cccc(param_5 + 0xb8);
  puVar33 = (undefined4 *)(param_5 + 0x28);
  if (lVar18 == 0) {
    puVar33 = (undefined4 *)(param_5 + 0x10);
  }
  uVar20 = *(undefined8 *)(puVar33 + 2);
  uVar8 = *puVar33;
  uVar9 = puVar33[1];
  uVar10 = puVar33[2];
  dVar41 = *(double *)(puVar33 + 4);
  local_328 = param_8;
  FUN_14084b22d(&local_1c8,local_2d0,param_5,*(undefined1 *)(param_2 + 0x204));
  if ((*plVar30 == 0) || ((DAT_14cb26569 & 1) == 0)) goto LAB_1408465eb;
  local_238 = (code *)0x0;
  local_208 = (code *)0x0;
  plStack_200 = (longlong *)0x0;
  if ((*(byte *)(param_3 + 0xbc) & 2) == 0) {
    pcVar26 = (code *)0x0;
  }
  else {
    FUN_14026e798(local_178,lVar18);
    auVar47 = local_178;
    pcVar26 = pcStack_170;
    local_208 = (code *)local_178;
    if (pcStack_170 != (code *)0x0) {
      plStack_200 = (longlong *)pcStack_170;
    }
    param_2 = local_2d8;
    if (local_178 != (undefined1  [8])0x0) {
      _local_178 = ZEXT816(0);
      local_168 = ZEXT816(0x3ff0000000000000) << 0x40;
      local_128 = ZEXT816(0x3ff0000000000000);
      local_158 = ZEXT816(0);
      local_148 = 0.0;
      uStack_140 = 0;
      local_138 = _DAT_149934d80;
      local_118 = CONCAT44(*(undefined4 *)(param_8 + 0x20),0x3f800000);
      local_110 = 0;
      uStack_10c = 0;
      uStack_108 = 0;
      uVar35 = 0;
      if ((*(byte *)(param_3 + 0xbc) & 4) != 0) {
        uVar35 = *(undefined8 *)(param_5 + 0xf0);
      }
      local_320 = (code **)0x0;
      local_328 = (code **)local_178;
      FUN_14071b0f2(auVar47,&local_1a8,&DAT_14cb78c78,uVar35);
      FUN_1403c75f4(&local_238,&local_1a8);
      FUN_144a61ac8(&local_1a8);
      param_2 = local_2d8;
    }
  }
  plVar25 = local_2d0;
  if ((local_238 == (code *)0x0) || (*(longlong *)local_238 == -1)) {
    FUN_14026e798(&local_1a8,local_2d0);
    plVar21 = plStack_1a0;
    local_208 = local_1a8;
    local_1a8 = (code *)0x0;
    if ((code *)plStack_1a0 == pcVar26) {
LAB_14084904e:
      plVar21 = plStack_1a0;
      if (plStack_1a0 != (longlong *)0x0) {
        LOCK();
        plVar22 = plStack_1a0 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*plStack_1a0)(plStack_1a0);
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
    else {
      plStack_1a0 = (longlong *)0x0;
      plStack_200 = plVar21;
      if (pcVar26 != (code *)0x0) {
        LOCK();
        plVar21 = (longlong *)((longlong)pcVar26 + 8);
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        plVar25 = local_2d0;
        if ((int)*plVar21 == 0) {
          (*(code *)**(undefined8 **)pcVar26)(pcVar26);
          LOCK();
          piVar1 = (int *)((longlong)pcVar26 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar25 = local_2d0;
          if (*piVar1 == 0) {
            (**(code **)(*(longlong *)pcVar26 + 0x10))(pcVar26);
            plVar25 = local_2d0;
          }
        }
        goto LAB_14084904e;
      }
    }
    pvVar6 = DAT_14cb78c78;
    if (local_208 == (code *)0x0) {
      local_220 = (void *)0x0;
      lVar18 = (longlong)(int)DAT_14cb78c80;
      dStack_218 = (double)CONCAT44(dStack_218._4_4_,DAT_14cb78c80);
      if (lVar18 == 0) {
        dStack_218 = (double)(ulonglong)DAT_14cb78c80;
      }
      else {
        FUN_1446dd670(&local_220,DAT_14cb78c80,0);
        memcpy(local_220,pvVar6,lVar18 * 2);
      }
      FUN_14084feb6(&local_1a8,local_2c0,&local_220);
      FUN_1403c75f4(&local_238,&local_1a8);
      pcVar29 = local_1a8;
      pcVar26 = uStack_1c0;
      if ((local_1a8 != (code *)0x0) &&
         (*(int *)(local_1a8 + 0x108) = *(int *)(local_1a8 + 0x108) + -1,
         *(int *)(local_1a8 + 0x130) < 1)) {
        FUN_1400847bc(local_1a8 + 0xb8,0);
        pcVar26 = uStack_1c0;
        if (*(int *)(pcVar29 + 0x108) == 0) {
          FUN_140087e46(pcVar29);
          plVar25 = local_2d0;
          if (*(longlong *)pcVar29 != -1) {
            pcVar26 = uStack_1c0;
            if (DAT_14cb259f8 == 0) goto LAB_140845e53;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),pcVar29);
            plVar25 = local_2d0;
          }
          goto joined_r0x000140848154;
        }
      }
    }
    else {
      local_328 = (code **)((ulonglong)local_328 & 0xffffffffffffff00);
      FUN_14084a140(local_208,&local_1a8,&DAT_14cb78c78,0);
      FUN_1403c75f4(&local_238,&local_1a8);
      pcVar29 = local_1a8;
      pcVar26 = uStack_1c0;
      if ((local_1a8 != (code *)0x0) &&
         (*(int *)(local_1a8 + 0x108) = *(int *)(local_1a8 + 0x108) + -1,
         *(int *)(local_1a8 + 0x130) < 1)) {
        FUN_1400847bc(local_1a8 + 0xb8,0);
        pcVar26 = uStack_1c0;
        if (*(int *)(pcVar29 + 0x108) == 0) {
          FUN_140087e46(pcVar29);
          if (*(longlong *)pcVar29 != -1) {
            pcVar26 = uStack_1c0;
            if (DAT_14cb259f8 == 0) goto LAB_140845e53;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),pcVar29);
          }
joined_r0x000140848154:
          pcVar26 = uStack_1c0;
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),pcVar29);
            pcVar26 = uStack_1c0;
          }
        }
      }
    }
LAB_140845e53:
    uStack_1c0._4_4_ = (int)((ulonglong)pcVar26 >> 0x20);
    uStack_1c0._0_4_ = (int)pcVar26;
    if ((local_238 != (code *)0x0) && (*(longlong *)local_238 != -1)) {
      uStack_2b0 = 0;
      auVar12._8_4_ = (int)uStack_1c0;
      auVar12._0_8_ = local_1c8;
      auVar12._12_4_ = uStack_1c0._4_4_;
      auVar51 = divpd(auVar12,_DAT_1499387d0);
      auVar53._8_8_ = 0;
      auVar53._0_8_ = local_1b8;
      auVar54 = divpd(auVar53,_DAT_1499387d0);
      auVar51 = roundpd(auVar51,auVar51,3);
      auVar54 = roundpd(auVar54,auVar54,3);
      dVar44 = ((double)local_1c8 - auVar51._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar45 = ((double)pcVar26 - auVar51._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar46 = ((double)local_1b8 - auVar54._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar48 = (0.0 - auVar54._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      local_2b8 = dVar41;
      uStack_1c0 = pcVar26;
      dVar41 = sin(dVar44);
      dVar42 = sin(dVar45);
      dVar43 = sin(dVar46);
      sin(dVar48);
      dVar44 = cos(dVar44);
      dVar45 = cos(dVar45);
      dVar46 = cos(dVar46);
      cos(dVar48);
      pcVar29 = local_238;
      fVar59 = *(float *)(param_8 + 0x20);
      pcVar26 = local_238 + 0x140;
      uVar15 = *(uint *)(local_238 + 0x1d4);
      iVar36 = 0;
      *(undefined4 *)(local_238 + 0x1d0) = 0;
      if ((int)uVar15 < 0) {
        FUN_147f80112(pcVar26,0);
        iVar36 = *(int *)(pcVar29 + 0x1d0);
        uVar15 = *(uint *)(pcVar29 + 0x1d4);
      }
      dVar57 = local_2b8;
      dVar56 = -(dVar41 * dVar45 * dVar46) - dVar44 * dVar42 * dVar43;
      dVar48 = dVar45 * dVar44 * dVar46 + dVar42 * dVar41 * dVar43;
      pcVar29[0x26c] = (code)0x0;
      *(uint *)(pcVar29 + 0x1d0) = iVar36 + 1U;
      if (uVar15 < iVar36 + 1U) {
        FUN_140089f7a(pcVar26,iVar36);
      }
      if (*(code **)(pcVar29 + 0x1c0) != (code *)0x0) {
        pcVar26 = *(code **)(pcVar29 + 0x1c0);
      }
      lVar18 = (longlong)iVar36;
      lVar19 = lVar18 * 0x80;
      auVar7._8_4_ = SUB84(dVar56,0);
      auVar7._0_8_ = dVar41 * dVar42 * dVar46 - dVar44 * dVar45 * dVar43;
      auVar7._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
      *(undefined1 (*) [16])(pcVar26 + lVar18 * 0x80) = auVar7;
      auVar5._8_4_ = SUB84(dVar48,0);
      auVar5._0_8_ = dVar42 * dVar44 * dVar46 + -(dVar45 * dVar41 * dVar43);
      auVar5._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
      *(undefined1 (*) [16])(pcVar26 + (lVar18 * 0x10 + 2) * 8) = auVar5;
      pcVar4 = pcVar26 + (lVar18 * 0x10 + 4) * 8;
      *(undefined4 *)pcVar4 = uVar8;
      *(undefined4 *)(pcVar4 + 4) = uVar9;
      *(undefined4 *)(pcVar4 + 8) = uVar10;
      *(int *)(pcVar4 + 0xc) = (int)((ulonglong)uVar20 >> 0x20);
      *(double *)(pcVar26 + (lVar18 * 0x10 + 6) * 8) = dVar57;
      *(double *)((longlong)(pcVar26 + (lVar18 * 0x10 + 6) * 8) + 8) = 0.0;
      *(undefined8 *)(pcVar26 + (lVar18 * 0x10 + 8) * 8) = 0x3ff0000000000000;
      *(undefined8 *)(pcVar26 + (lVar18 * 0x10 + 8) * 8 + 8) = 0x3ff0000000000000;
      *(undefined8 *)(pcVar26 + (lVar18 * 0x10 + 10) * 8) = 0x3ff0000000000000;
      *(undefined8 *)(pcVar26 + (lVar18 * 0x10 + 10) * 8 + 8) = 0;
      *(undefined4 *)(pcVar26 + (lVar18 * 0x10 + 0xc) * 8) = 0x3f800000;
      *(float *)(pcVar26 + lVar19 + 100) = fVar59;
      *(undefined2 *)(pcVar26 + (lVar18 * 0x10 + 0xd) * 8) = 0;
      *(undefined8 *)(pcVar26 + lVar19 + 0x6c) = 0;
      if (fVar59 < 0.0) {
        *(undefined4 *)(pcVar26 + lVar19 + 100) = *(undefined4 *)(pcVar29 + 0x268);
        pcVar29[0x26c] = (code)0x1;
      }
      FUN_1447906c0(pcVar29,0);
      pcVar26 = uStack_1c0;
      if ((local_238 != (code *)0x0) && (param_2 = local_2d8, *(longlong *)local_238 != -1))
      goto LAB_1408460ac;
    }
  }
  else {
LAB_1408460ac:
    bVar14 = *(byte *)(plVar23 + 0x10) & 1;
    if (param_7 == (code *)0x0) {
      if ((((bVar14 != 0) && (*(int *)(param_5 + 0xb4) != 0)) &&
          (uVar15 = *(uint *)(param_5 + 0xb0), -1 < (int)uVar15)) &&
         ((((int)uVar15 < DAT_14c9647dc &&
           (puVar31 = (undefined8 *)
                      ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
           puVar31 != (undefined8 *)0x0)) &&
          ((*(int *)(puVar31 + 2) == *(int *)(param_5 + 0xb4) &&
           ((*(uint *)(puVar31 + 1) & 0x10200000) == 0)))))) {
        param_7 = (code *)*puVar31;
        bVar14 = 1;
        goto LAB_1408460c6;
      }
    }
    else {
LAB_1408460c6:
      if ((bVar14 != 0) && (param_7 != (code *)0x0)) {
        if (DAT_14cb253f8 == 0) {
          local_2f0 = &local_1a8;
          local_1a8 = FUN_1449e2820;
          local_2e0 = FUN_14081d0ea;
          local_2e8 = FUN_14081d0ea;
          local_2f8 = &LAB_147f6f09d;
          local_300 = &LAB_146201c25;
          local_308 = (longlong *)&DAT_149e063b2;
          local_310 = 0;
          local_318 = 0x10000006;
          local_320 = (code **)CONCAT44(local_320._4_4_,8);
          local_328 = (code **)CONCAT44(local_328._4_4_,0x480);
          FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
        }
        lVar19 = DAT_14cb253f8;
        lVar18 = *(longlong *)(DAT_14cb253f8 + 0x110);
        if (lVar18 == 0) {
          FUN_140aa6c08(DAT_14cb253f8);
          lVar18 = *(longlong *)(lVar19 + 0x110);
          if (lVar18 == 0) goto LAB_140846108;
        }
        uVar20 = FUN_140849db6(lVar18,param_7[0x60]);
        FUN_140849a08(local_238,uVar20);
      }
    }
LAB_140846108:
    lVar18 = plVar23[7];
    if (lVar18 == 0) {
      uVar20 = FUN_1405b1a32();
      lVar18 = FUN_14477b664(uVar20);
      plVar23[7] = lVar18;
    }
    plVar21 = plVar23 + 6;
    if (plVar23[8] == 0) {
      if ((*plVar21 != 0) && (lVar18 != 0)) {
        plVar22 = *(longlong **)(lVar18 + 0xb8);
        if (plVar22 != (longlong *)0x0) {
          cVar13 = (**(code **)(*plVar22 + 0x108))(plVar22);
          if (cVar13 != '\0') {
            uVar20 = (**(code **)(*plVar22 + 0x110))(plVar22);
            lVar18 = FUN_144aff482(uVar20,plVar21);
            plVar23[8] = lVar18;
            if (lVar18 != 0) {
              lVar18 = plVar23[7];
              goto LAB_1408483e1;
            }
            goto LAB_140846130;
          }
        }
        plVar23[8] = 0;
      }
    }
    else {
LAB_1408483e1:
      pcVar26 = local_238;
      if (lVar18 == 0) {
        uVar20 = FUN_1405b1a32();
        lVar18 = FUN_14477b664(uVar20);
        plVar23[7] = lVar18;
        if (((plVar23[8] == 0) && (plVar25 = local_2d0, param_2 = local_2d8, lVar18 != 0)) &&
           (*plVar21 != 0)) {
          plVar25 = *(longlong **)(lVar18 + 0xb8);
          if (plVar25 == (longlong *)0x0) {
LAB_1408499d7:
            lVar18 = 0;
          }
          else {
            cVar13 = (**(code **)(*plVar25 + 0x108))(plVar25);
            if (cVar13 == '\0') goto LAB_1408499d7;
            uVar20 = (**(code **)(*plVar25 + 0x110))(plVar25);
            lVar18 = FUN_144aff482(uVar20,plVar21);
          }
          plVar23[8] = lVar18;
          plVar25 = local_2d0;
          param_2 = local_2d8;
        }
      }
      FUN_140849a08(pcVar26);
    }
LAB_140846130:
    lVar18 = plVar23[10];
    if (lVar18 == 0) {
      uVar20 = FUN_1407f787c();
      lVar18 = FUN_14477b664(uVar20);
      plVar23[10] = lVar18;
    }
    plVar21 = plVar23 + 9;
    if (plVar23[0xb] == 0) {
      if ((*plVar21 != 0) && (lVar18 != 0)) {
        plVar22 = *(longlong **)(lVar18 + 0xb8);
        if (plVar22 != (longlong *)0x0) {
          cVar13 = (**(code **)(*plVar22 + 0x108))(plVar22);
          if (cVar13 != '\0') {
            uVar20 = (**(code **)(*plVar22 + 0x110))(plVar22);
            lVar18 = FUN_144aff482(uVar20,plVar21);
            plVar23[0xb] = lVar18;
            if (lVar18 != 0) {
              lVar18 = plVar23[10];
              goto LAB_1408488cb;
            }
            goto LAB_140846158;
          }
        }
        plVar23[0xb] = 0;
      }
    }
    else {
LAB_1408488cb:
      pcVar26 = local_238;
      if (lVar18 == 0) {
        uVar20 = FUN_1407f787c();
        lVar18 = FUN_14477b664(uVar20);
        plVar23[10] = lVar18;
        if (((plVar23[0xb] == 0) && (plVar25 = local_2d0, param_2 = local_2d8, lVar18 != 0)) &&
           (*plVar21 != 0)) {
          plVar25 = *(longlong **)(lVar18 + 0xb8);
          if (plVar25 == (longlong *)0x0) {
LAB_1408499e5:
            lVar18 = 0;
          }
          else {
            cVar13 = (**(code **)(*plVar25 + 0x108))(plVar25);
            if (cVar13 == '\0') goto LAB_1408499e5;
            uVar20 = (**(code **)(*plVar25 + 0x110))(plVar25);
            lVar18 = FUN_144aff482(uVar20,plVar21);
          }
          plVar23[0xb] = lVar18;
          plVar25 = local_2d0;
          param_2 = local_2d8;
        }
      }
      local_328 = (code **)((ulonglong)local_328 & 0xffffffffffffff00);
      FUN_1447997cc(pcVar26);
    }
LAB_140846158:
    lVar18 = plVar23[0xe];
    if (lVar18 == 0) {
      uVar20 = FUN_1407f787c();
      lVar18 = FUN_14477b664(uVar20);
      plVar23[0xe] = lVar18;
    }
    plVar21 = plVar23 + 0xd;
    if (plVar23[0xf] == 0) {
      if ((*plVar21 != 0) && (lVar18 != 0)) {
        plVar22 = *(longlong **)(lVar18 + 0xb8);
        if (plVar22 != (longlong *)0x0) {
          cVar13 = (**(code **)(*plVar22 + 0x108))(plVar22);
          if (cVar13 != '\0') {
            uVar20 = (**(code **)(*plVar22 + 0x110))(plVar22);
            lVar18 = FUN_144aff482(uVar20,plVar21);
            plVar23[0xf] = lVar18;
            if (lVar18 != 0) {
              lVar18 = plVar23[0xe];
              goto LAB_1408485d3;
            }
            goto LAB_140846180;
          }
        }
        plVar23[0xf] = 0;
      }
    }
    else {
LAB_1408485d3:
      pcVar26 = local_238;
      if (lVar18 == 0) {
        uVar20 = FUN_1407f787c();
        lVar18 = FUN_14477b664(uVar20);
        plVar23[0xe] = lVar18;
        if (((plVar23[0xf] == 0) && (plVar25 = local_2d0, param_2 = local_2d8, lVar18 != 0)) &&
           (*plVar21 != 0)) {
          plVar25 = *(longlong **)(lVar18 + 0xb8);
          if (plVar25 == (longlong *)0x0) {
LAB_1408499de:
            lVar18 = 0;
          }
          else {
            cVar13 = (**(code **)(*plVar25 + 0x108))(plVar25);
            if (cVar13 == '\0') goto LAB_1408499de;
            uVar20 = (**(code **)(*plVar25 + 0x110))(plVar25);
            lVar18 = FUN_144aff482(uVar20,plVar21);
          }
          plVar23[0xf] = lVar18;
          plVar25 = local_2d0;
          param_2 = local_2d8;
        }
      }
      local_328 = (code **)((ulonglong)local_328 & 0xffffffffffffff00);
      FUN_1447997cc(pcVar26);
    }
LAB_140846180:
    if ((longlong)*(int *)(param_8 + 5) != 0) {
      pcVar26 = param_8[4];
      lVar18 = (longlong)*(int *)(param_8 + 5) * 0x18;
      do {
        pcVar29 = local_238;
        lVar19 = *(longlong *)(pcVar26 + 8);
        if (lVar19 == 0) {
          uVar20 = FUN_1405b1a32();
          lVar19 = FUN_14477b664(uVar20);
          *(longlong *)(pcVar26 + 8) = lVar19;
        }
        lVar28 = *(longlong *)(pcVar26 + 0x10);
        if (lVar28 == 0) {
          if (lVar19 == 0) {
            lVar28 = 0;
          }
          else {
            lVar28 = 0;
            if (*(longlong *)pcVar26 != 0) {
              plVar21 = *(longlong **)(lVar19 + 0xb8);
              if (plVar21 == (longlong *)0x0) {
LAB_140849446:
                lVar28 = 0;
              }
              else {
                cVar13 = (**(code **)(*plVar21 + 0x108))(plVar21);
                if (cVar13 == '\0') goto LAB_140849446;
                uVar20 = (**(code **)(*plVar21 + 0x110))(plVar21);
                lVar28 = FUN_144aff482(uVar20,pcVar26);
              }
              *(longlong *)(pcVar26 + 0x10) = lVar28;
              param_2 = local_2d8;
            }
          }
        }
        FUN_140849a08(pcVar29,lVar28);
        pcVar26 = pcVar26 + 0x18;
        lVar18 = lVar18 + -0x18;
      } while (lVar18 != 0);
    }
    if ((longlong)*(int *)(param_8 + 7) != 0) {
      pcVar26 = param_8[6];
      lVar18 = (longlong)*(int *)(param_8 + 7) << 5;
      do {
        pcVar29 = local_238;
        lVar19 = *(longlong *)(pcVar26 + 8);
        if (lVar19 == 0) {
          uVar20 = FUN_1407f787c();
          lVar19 = FUN_14477b664(uVar20);
          *(longlong *)(pcVar26 + 8) = lVar19;
        }
        lVar28 = *(longlong *)(pcVar26 + 0x10);
        if (lVar28 == 0) {
          if (lVar19 == 0) {
            lVar28 = 0;
          }
          else {
            lVar28 = 0;
            if (*(longlong *)pcVar26 != 0) {
              plVar21 = *(longlong **)(lVar19 + 0xb8);
              if (plVar21 == (longlong *)0x0) {
LAB_140848fad:
                lVar28 = 0;
              }
              else {
                cVar13 = (**(code **)(*plVar21 + 0x108))(plVar21);
                if (cVar13 == '\0') goto LAB_140848fad;
                uVar20 = (**(code **)(*plVar21 + 0x110))(plVar21);
                lVar28 = FUN_144aff482(uVar20,pcVar26);
              }
              *(longlong *)(pcVar26 + 0x10) = lVar28;
              param_2 = local_2d8;
            }
          }
        }
        local_328 = (code **)((ulonglong)local_328 & 0xffffffffffffff00);
        FUN_1447997cc(pcVar29,lVar28);
        pcVar26 = pcVar26 + 0x20;
        lVar18 = lVar18 + -0x20;
      } while (lVar18 != 0);
    }
    plVar21 = (longlong *)FUN_1449e3f1e();
    if (plVar21 != (longlong *)0x0) {
      plVar22 = (longlong *)FUN_140849bbe(plVar25);
      if (plVar22 == (longlong *)0x0) {
        plVar22 = (longlong *)FUN_14084c0d2(plVar25);
        if (plVar22 != (longlong *)0x0) {
          cVar13 = (**(code **)(*plVar22 + 0x480))(plVar22,0);
          if (cVar13 != '\0') goto LAB_140847fd3;
        }
      }
      else {
        cVar13 = (**(code **)(*plVar22 + 0x480))(plVar22,0);
        if (cVar13 == '\0') {
          FUN_140849ce4(plVar22);
        }
        else {
LAB_140847fd3:
          (**(code **)(*plVar22 + 0x8d8))(plVar22);
        }
      }
      pcVar26 = local_238;
      lVar18 = plVar21[0x58];
      if (lVar18 == 0) {
        uVar20 = FUN_1407f787c();
        lVar18 = FUN_14477b664(uVar20);
        plVar21[0x58] = lVar18;
      }
      if (((plVar21[0x59] == 0) && (plVar25 = local_2d0, param_2 = local_2d8, lVar18 != 0)) &&
         (plVar21[0x57] != 0)) {
        plVar25 = *(longlong **)(lVar18 + 0xb8);
        if (plVar25 == (longlong *)0x0) {
LAB_1408498c6:
          lVar18 = 0;
        }
        else {
          cVar13 = (**(code **)(*plVar25 + 0x108))(plVar25);
          if (cVar13 == '\0') goto LAB_1408498c6;
          uVar20 = (**(code **)(*plVar25 + 0x110))(plVar25);
          lVar18 = FUN_144aff482(uVar20,plVar21 + 0x57);
        }
        plVar21[0x59] = lVar18;
        plVar25 = local_2d0;
        param_2 = local_2d8;
      }
      local_328 = (code **)((ulonglong)local_328 & 0xffffffffffffff00);
      FUN_1447997cc(pcVar26);
      pcVar26 = local_238;
      lVar18 = plVar21[0x55];
      if (lVar18 == 0) {
        uVar20 = FUN_1407f787c();
        lVar18 = FUN_14477b664(uVar20);
        plVar21[0x55] = lVar18;
      }
      if (((plVar21[0x56] == 0) && (plVar25 = local_2d0, param_2 = local_2d8, lVar18 != 0)) &&
         (plVar21[0x54] != 0)) {
        plVar25 = *(longlong **)(lVar18 + 0xb8);
        if (plVar25 == (longlong *)0x0) {
LAB_1408498cd:
          lVar18 = 0;
        }
        else {
          cVar13 = (**(code **)(*plVar25 + 0x108))(plVar25);
          if (cVar13 == '\0') goto LAB_1408498cd;
          uVar20 = (**(code **)(*plVar25 + 0x110))(plVar25);
          lVar18 = FUN_144aff482(uVar20,plVar21 + 0x54);
        }
        plVar21[0x56] = lVar18;
        plVar25 = local_2d0;
        param_2 = local_2d8;
      }
      local_328 = (code **)((ulonglong)local_328 & 0xffffffffffffff00);
      FUN_1447997cc(pcVar26);
      if (plVar25 != (longlong *)0x0) {
        if (DAT_14caf64b8 == 0) {
          local_2f0 = &local_1a8;
          local_1a8 = FUN_141030f22;
          local_2e0 = FUN_14081d0ea;
          local_2e8 = FUN_142b4754c;
          local_2f8 = &LAB_147c45ce0;
          local_300 = &LAB_1463f1ff4;
          local_308 = (longlong *)&DAT_149e063b2;
          local_310 = 0x4000000000;
          local_318 = 0x10000004;
          local_320 = (code **)CONCAT44(local_320._4_4_,8);
          local_328 = (code **)CONCAT44(local_328._4_4_,0x428);
          FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
        }
        pcVar26 = local_238;
        if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(plVar25[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar25[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) ==
            DAT_14caf64b8 + 0x30)) {
          (**(code **)(*plVar21 + 0x2b0))(plVar21,plVar25,local_2c0);
          lVar18 = plVar21[0x19];
          if (lVar18 == 0) {
            uVar20 = FUN_1407f787c();
            lVar18 = FUN_14477b664(uVar20);
            plVar21[0x19] = lVar18;
          }
          if (((plVar21[0x1a] == 0) && (plVar25 = local_2d0, param_2 = local_2d8, lVar18 != 0)) &&
             (plVar21[0x18] != 0)) {
            plVar25 = *(longlong **)(lVar18 + 0xb8);
            if (plVar25 == (longlong *)0x0) {
LAB_1408499d0:
              lVar18 = 0;
            }
            else {
              cVar13 = (**(code **)(*plVar25 + 0x108))(plVar25);
              if (cVar13 == '\0') goto LAB_1408499d0;
              uVar20 = (**(code **)(*plVar25 + 0x110))(plVar25);
              lVar18 = FUN_144aff482(uVar20,plVar21 + 0x18);
            }
            plVar21[0x1a] = lVar18;
            plVar25 = local_2d0;
            param_2 = local_2d8;
          }
          local_328 = (code **)((ulonglong)local_328 & 0xffffffffffffff00);
          FUN_1447997cc(pcVar26);
        }
      }
    }
    local_1a8 = (code *)0x0;
    local_198 = (code *)0x0;
    plStack_190 = (longlong *)0xffffffffffffffff;
    local_188 = (code *)0x0;
    plStack_1a0 = (longlong *)*plVar30;
    if ((plStack_1a0 != (longlong *)0x0) && ((DAT_14cb26569 & 1) != 0)) {
      piVar1 = (int *)plStack_1a0[10];
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (DAT_14cb259f8 == 0) {
        iVar36 = 5;
      }
      else {
        if ((char)piVar1[1] != '\x01') {
          FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
          goto LAB_140846429;
        }
        iVar36 = 2;
      }
      LOCK();
      piVar1[2] = iVar36;
      UNLOCK();
    }
LAB_140846429:
    lVar18 = FUN_140849a2e();
    if (lVar18 != 0) {
      dVar41 = ABS(((double)(*(float *)(param_8 + 0x21) * *(float *)(param_8 + 0x21)) * 0.5) /
                   (double)*(float *)(lVar18 + 0x38));
      if (*(double *)(param_2 + 0x108) <= dVar41 && dVar41 != *(double *)(param_2 + 0x108)) {
        lVar18 = plVar23[0x12];
        if (lVar18 == 0) {
          uVar20 = FUN_140067708();
          lVar18 = FUN_14477b664(uVar20);
          plVar23[0x12] = lVar18;
        }
        plVar21 = plVar23 + 0x11;
        if (plVar23[0x13] == 0) {
          if ((*plVar21 != 0) && (lVar18 != 0)) {
            plVar25 = *(longlong **)(lVar18 + 0xb8);
            if (plVar25 != (longlong *)0x0) {
              cVar13 = (**(code **)(*plVar25 + 0x108))(plVar25);
              if (cVar13 != '\0') {
                uVar20 = (**(code **)(*plVar25 + 0x110))(plVar25);
                lVar18 = FUN_144aff482(uVar20,plVar21);
                plVar23[0x13] = lVar18;
                plVar25 = local_2d0;
                if (lVar18 != 0) goto LAB_1408482e8;
                goto LAB_140846472;
              }
            }
            plVar23[0x13] = 0;
            plVar25 = local_2d0;
          }
          goto LAB_140846472;
        }
LAB_1408482e8:
        local_328 = (code **)((ulonglong)local_328 & 0xffffffff00000000);
        FUN_14071ab80(local_238,&local_1e8,plVar21,plVar25);
      }
      else {
LAB_140846472:
        local_328 = (code **)((ulonglong)local_328 & 0xffffffff00000000);
        FUN_14084a448(local_238,&local_1e8,*plVar30,plVar25);
      }
      local_188 = local_1d8;
      local_198 = local_1e8;
      plStack_190 = plStack_1e0;
    }
    pcVar26 = local_198;
    if ((((local_188 != (code *)0x0) && (local_198 != (code *)0x0)) &&
        (plStack_190 != (longlong *)0xffffffffffffffff)) && (*(longlong **)local_198 == plStack_190)
       ) {
      iVar36 = *(int *)(local_198 + 0x108);
      *(int *)(local_198 + 0x108) = iVar36 + 1;
      pcVar29 = local_198 + 0x120;
      do {
        pcVar4 = *(code **)pcVar29;
        if (pcVar4 == (code *)0x0) break;
        pcVar29 = pcVar4 + 0x30;
      } while (local_188 != pcVar4);
      *(int *)(local_198 + 0x108) = iVar36;
      if (*(int *)(local_198 + 0x130) < 1) {
        FUN_1400847bc(local_198 + 0xb8,0);
        if (*(int *)(pcVar26 + 0x108) == 0) {
          FUN_140087e46(pcVar26);
          if (*(longlong *)pcVar26 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_140846526;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),pcVar26);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),pcVar26);
          }
        }
      }
LAB_140846526:
      if (((pcVar4 != (code *)0x0) && (pcVar4 != (code *)0x0)) && (param_8[0x12] != (code *)0x0)) {
        FUN_140d27362(&local_1a8,&local_238);
        local_1e8 = (code *)(plVar23 + 3);
        pcVar26 = param_8[0x12];
        ppcVar24 = param_8 + 0x16;
        if ((code **)param_8[0x14] != (code **)0x0) {
          ppcVar24 = (code **)param_8[0x14];
        }
        uVar20 = (**(code **)(*ppcVar24 + 8))(ppcVar24);
        (*pcVar26)(uVar20,&local_208,&local_1a8,&local_1e8);
      }
    }
    local_198 = (code *)0x0;
    plStack_190 = (longlong *)0xffffffffffffffff;
    if ((plStack_1a0 != (longlong *)0x0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(plStack_1a0[10]);
    }
    pcVar29 = local_1a8;
    pcVar26 = uStack_1c0;
    if ((local_1a8 != (code *)0x0) &&
       (*(int *)(local_1a8 + 0x108) = *(int *)(local_1a8 + 0x108) + -1,
       *(int *)(local_1a8 + 0x130) < 1)) {
      FUN_1400847bc(local_1a8 + 0xb8,0);
      pcVar26 = uStack_1c0;
      if (*(int *)(pcVar29 + 0x108) == 0) {
        FUN_140087e46(pcVar29);
        if (*(longlong *)pcVar29 != -1) {
          pcVar26 = uStack_1c0;
          if (DAT_14cb259f8 == 0) goto LAB_14084659d;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),pcVar29);
        }
        pcVar26 = uStack_1c0;
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),pcVar29);
          pcVar26 = uStack_1c0;
        }
      }
    }
  }
LAB_14084659d:
  plVar23 = plStack_200;
  uStack_1c0 = pcVar26;
  if (plStack_200 != (longlong *)0x0) {
    LOCK();
    plVar30 = plStack_200 + 1;
    *(int *)plVar30 = (int)*plVar30 + -1;
    UNLOCK();
    if ((int)*plVar30 == 0) {
      (**(code **)*plStack_200)(plStack_200);
      LOCK();
      piVar1 = (int *)((longlong)plVar23 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
      }
    }
  }
  pcVar26 = local_238;
  if ((local_238 != (code *)0x0) &&
     (*(int *)(local_238 + 0x108) = *(int *)(local_238 + 0x108) + -1,
     *(int *)(local_238 + 0x130) < 1)) {
    FUN_1400847bc(local_238 + 0xb8,0);
    if (*(int *)(pcVar26 + 0x108) == 0) {
      FUN_140087e46(pcVar26);
      if (*(longlong *)pcVar26 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_1408465eb;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),pcVar26);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),pcVar26);
      }
    }
  }
LAB_1408465eb:
  if ((local_f0 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140849a08 FUN_140849a08 body=37 status=ok
// SIG undefined FUN_140849a08(void)

void FUN_140849a08(__uint64 *param_1,longlong param_2)

{
  if (((param_2 != 0) && (*param_1 != 0xffffffffffffffff)) && (DAT_14cb25ab0 == '\x01')) {
    AK::SoundEngine::SetSwitch(*(uint *)(param_2 + 0x48),*(uint *)(param_2 + 0x38),*param_1);
    return;
  }
  return;
}



// FUNCTION 140849a2e FUN_140849a2e body=64 status=ok
// SIG undefined FUN_140849a2e(void)

longlong FUN_140849a2e(void)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = DAT_14c997cc0;
  if (DAT_14c997cc0 == 0) {
    plVar2 = (longlong *)FUN_145a62958();
    lVar1 = plVar2[0x22];
    if (lVar1 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar1 = plVar2[0x22];
    }
  }
  return lVar1;
}



// FUNCTION 140849a6e FUN_140849a6e body=335 status=ok
// SIG undefined FUN_140849a6e(void)

undefined8 FUN_140849a6e(longlong param_1,longlong param_2,double *param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  double dVar8;
  float fVar9;
  
  lVar1 = DAT_14cb259f8;
  if (param_1 != 0) {
    if (param_2 == 0) {
      return 0;
    }
    if (DAT_14cb259f8 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x40) != '\x01') {
      return 1;
    }
    if (*(float *)(param_1 + 0x48) <= 0.0001) {
      return 1;
    }
    iVar4 = _finite((double)*(float *)(param_1 + 0x4c));
    if (iVar4 == 0) {
      return 1;
    }
    if (*(float *)(param_1 + 0x4c) <= 0.0001) {
      return 1;
    }
    if (DAT_14cb25ab0 == '\x01') {
      lVar5 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x40) + 0x18);
      if (lVar5 != 0) {
        plVar7 = *(longlong **)(*(longlong *)(lVar1 + 0x40) + 0x10);
        plVar6 = plVar7 + lVar5 * 2;
        do {
          lVar1 = *plVar7;
          if (((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == param_2)) &&
             (dVar8 = *(double *)(lVar1 + 0xc0) - param_3[2],
             dVar2 = *(double *)(lVar1 + 0xb0) - *param_3,
             dVar3 = *(double *)(lVar1 + 0xb8) - param_3[1],
             fVar9 = *(float *)(param_1 + 0x48) * 1000.0 + *(float *)(param_1 + 0x4c),
             (float)(dVar8 * dVar8 + dVar2 * dVar2 + dVar3 * dVar3) < fVar9 * fVar9)) {
            return 1;
          }
          plVar7 = plVar7 + 2;
        } while (plVar7 != plVar6);
      }
    }
  }
  return 0;
}



// FUNCTION 140849bbe FUN_140849bbe body=292 status=ok
// SIG undefined FUN_140849bbe(void)

void FUN_140849bbe(longlong *param_1)

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
  undefined1 *local_38;
  code *local_30;
  longlong local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cad2858 == 0) {
    local_40 = &local_18;
    local_18 = FUN_144a7958c;
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
  local_20 = DAT_14cad2858;
  if ((DAT_14cad2858 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_20);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140849ce4 FUN_140849ce4 body=208 status=ok
// SIG undefined FUN_140849ce4(void)

float FUN_140849ce4(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_98 [40];
  float *local_70;
  undefined1 *local_68;
  undefined4 **local_60;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = *(int *)(param_1 + 0xd78);
  if (iVar2 < 1) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = 0.0;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xd70) + lVar3 * 8);
      if (*(longlong *)(lVar1 + 0x138) != 0) {
        local_54 = 0.0;
        local_68 = &LAB_14362051c;
        local_70 = &local_54;
        local_60 = &local_70;
        FUN_1448e6002(lVar1 + 0x138,&local_68);
        fVar4 = fVar4 + local_54;
        iVar2 = *(int *)(param_1 + 0xd78);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return fVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140849db6 FUN_140849db6 body=250 status=ok
// SIG undefined FUN_140849db6(void)

longlong FUN_140849db6(longlong param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (*(int *)(param_1 + 0x288) != *(int *)(param_1 + 0x2b4)) {
    lVar6 = param_1 + 0x2b8;
    if (*(longlong *)(param_1 + 0x2c0) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x2c0);
    }
    iVar2 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x2c8) - 1U & param_2 & 0xff) * 4);
    if (iVar2 != -1) {
      while (pcVar1 = (char *)(*(longlong *)(param_1 + 0x280) + (longlong)iVar2 * 0x28),
            *pcVar1 != (char)param_2) {
        iVar2 = *(int *)(pcVar1 + 0x20);
        if (iVar2 == -1) {
          return 0;
        }
      }
      if (pcVar1 == (char *)0x0) {
        return 0;
      }
      plVar7 = (longlong *)(pcVar1 + 8);
      if (plVar7 == (longlong *)0x0) {
        return 0;
      }
      lVar6 = *(longlong *)(pcVar1 + 0x10);
      if (lVar6 == 0) {
        uVar5 = FUN_1405b1a32();
        lVar6 = FUN_14477b664(uVar5);
        *(longlong *)(pcVar1 + 0x10) = lVar6;
      }
      if (*(longlong *)(pcVar1 + 0x18) != 0) {
        return *(longlong *)(pcVar1 + 0x18);
      }
      if (lVar6 == 0) {
        return 0;
      }
      if (*plVar7 == 0) {
        return 0;
      }
      plVar3 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar6 = FUN_144aff482(uVar5,plVar7);
      }
      *(longlong *)(pcVar1 + 0x18) = lVar6;
      return lVar6;
    }
  }
  return 0;
}



// FUNCTION 140849eb0 FUN_140849eb0 body=218 status=ok
// SIG undefined FUN_140849eb0(void)

void FUN_140849eb0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x3ffffffffffffffU) * 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 6);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x40,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140849f8a FUN_140849f8a body=255 status=ok
// SIG undefined FUN_140849f8a(void)

void FUN_140849f8a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14084a08a FUN_14084a08a body=181 status=ok
// SIG undefined FUN_14084a08a(void)

longlong FUN_14084a08a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_14084a122;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14574dca0(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_14084a122:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14084a140 FUN_14084a140 body=775 status=ok
// SIG undefined FUN_14084a140(void)

longlong **
FUN_14084a140(longlong param_1,longlong **param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong **pplVar11;
  undefined8 *puVar12;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 auStack_e8 [2];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_7c;
  undefined2 local_68;
  longlong local_60;
  ulonglong uStack_58;
  undefined1 local_50;
  longlong *local_48;
  undefined1 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  auStack_e8[1] = 0;
  uStack_f0 = 0;
  auStack_e8[0] = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0x3ff00000;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0x3ff00000;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0x3ff0000000000000;
  uStack_90 = 0;
  local_88 = 0x3f800000;
  local_80 = 0;
  local_7c = 0;
  local_68 = 0;
  local_48 = (longlong *)0x0;
  local_60 = 0;
  uStack_58 = 0;
  local_40 = 1;
  local_50 = param_5;
  local_f8 = param_4;
  FUN_1403c7a68(param_1,&local_f8);
  pplVar11 = param_2;
  if (local_48 != (longlong *)0x0) {
    if (*local_48 == -1) {
      *param_2 = (longlong *)0x0;
      iVar6 = (int)local_48[0x21] + -1;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x1a8);
      *(uint *)(param_1 + 0x1a8) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x1ac) < iVar6 + 1U) {
        FUN_14084a9a4((longlong *)(param_1 + 0x1a0),iVar6);
      }
      uVar4 = uStack_58;
      lVar3 = local_60;
      lVar2 = *(longlong *)(param_1 + 0x1a0);
      lVar10 = (longlong)iVar6 * 0xc0;
      lVar1 = lVar2 + lVar10;
      puVar12 = (undefined8 *)(lVar2 + lVar10);
      *puVar12 = local_f8;
      puVar12[1] = uStack_f0;
      puVar8 = auStack_e8;
      puVar9 = puVar12 + 2;
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      *(undefined4 *)(puVar12 + 0xe) = (undefined4)local_88;
      *(undefined4 *)((longlong)puVar12 + 0x74) = local_88._4_4_;
      *(undefined1 *)(puVar12 + 0xf) = (undefined1)local_80;
      *(undefined1 *)((longlong)puVar12 + 0x79) = local_80._1_1_;
      *(undefined8 *)((longlong)puVar12 + 0x7c) = local_7c;
      *(undefined2 *)(puVar12 + 0x12) = local_68;
      puVar12[0x13] = 0;
      *(int *)(puVar12 + 0x14) = (int)uStack_58;
      if ((int)uStack_58 == 0) {
        *(undefined4 *)(lVar1 + 0xa4) = 0;
      }
      else {
        puVar12 = (undefined8 *)(lVar2 + lVar10 + 0x98);
        FUN_140d27400(puVar12,uStack_58 & 0xffffffff,0);
        FUN_144796a68(*puVar12,lVar3,uVar4 & 0xffffffff);
      }
      *(undefined1 *)(lVar1 + 0xa8) = local_50;
      *(longlong **)(lVar1 + 0xb0) = local_48;
      if (local_48 != (longlong *)0x0) {
        *(int *)(local_48 + 0x21) = (int)local_48[0x21] + 1;
      }
      *(undefined1 *)(lVar1 + 0xb8) = local_40;
      *param_2 = local_48;
      if (local_48 == (longlong *)0x0) goto LAB_14084a365;
      iVar6 = (int)local_48[0x21];
      *(int *)(local_48 + 0x21) = iVar6 + 1;
    }
    plVar5 = local_48;
    pplVar11 = &local_48;
    *(int *)(local_48 + 0x21) = iVar6;
    if ((int)local_48[0x26] < 1) {
      FUN_1400847bc(local_48 + 0x17,0);
      if ((int)plVar5[0x21] == 0) {
        FUN_140087e46(plVar5);
        if (*plVar5 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_14084a35e;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar5);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar5);
        }
      }
    }
  }
LAB_14084a35e:
  *pplVar11 = (longlong *)0x0;
LAB_14084a365:
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14084a448 FUN_14084a448 body=1371 status=ok
// SIG undefined FUN_14084a448(void)

undefined8 *
FUN_14084a448(__uint64 *param_1,undefined8 *param_2,__uint64 *param_3,longlong param_4,uint param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  __uint64 _Var9;
  __uint64 *p_Var10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStackY_a8 [32];
  __uint64 *local_68;
  __uint64 _Stack_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_a8;
  *param_2 = 0;
  param_2[1] = 0xffffffffffffffff;
  param_2[2] = 0;
  if ((param_3 == (__uint64 *)0x0) || (*param_1 == 0xffffffffffffffff)) goto LAB_14084a8a9;
  if ((*(char *)((longlong)param_1 + 0x114) != '\x01') &&
     ((_Var9 = param_1[0x3a], (longlong)(int)_Var9 != 0 &&
      (*(char *)((longlong)param_3 + 0x42) == '\0')))) {
    p_Var10 = param_1 + 0x28;
    if ((__uint64 *)param_1[0x38] != (__uint64 *)0x0) {
      p_Var10 = (__uint64 *)param_1[0x38];
    }
    lVar13 = 0;
    do {
      puVar2 = (undefined8 *)((longlong)p_Var10 + lVar13 + 0x20);
      local_68 = (__uint64 *)*puVar2;
      _Stack_60 = puVar2[1];
      local_58 = *(longlong **)((longlong)p_Var10 + lVar13 + 0x30);
      cVar6 = FUN_140849a6e(param_3,param_1[1],&local_68);
      if (cVar6 != '\0') goto LAB_14084a4b7;
      lVar13 = lVar13 + 0x80;
    } while ((longlong)(int)_Var9 * 0x80 != lVar13);
    goto LAB_14084a8a9;
  }
LAB_14084a4b7:
  if ((*(char *)((longlong)param_3 + 0x42) == '\x01') && (DAT_14cb25ed0 != (longlong *)0x0)) {
    local_68 = (__uint64 *)((ulonglong)local_68 & 0xffffffffffffff00);
    (**(code **)(*DAT_14cb25ed0 + 0x2c0))(DAT_14cb25ed0,param_3,param_1,&local_68);
    if ((char)local_68 != '\0') goto LAB_14084a8a9;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar1 = plVar8 + 3;
  plVar8[3] = 0;
  *(undefined2 *)(plVar8 + 4) = 0;
  plVar8[1] = 0;
  *(undefined4 *)(plVar8 + 2) = 0;
  *(undefined1 *)((longlong)plVar8 + 0x22) = 2;
  plVar8[5] = 0;
  plVar8[6] = 0;
  *plVar8 = (longlong)param_1;
  local_68 = param_3;
  FUN_140942716(&local_68);
  FUN_1407ec87c(plVar1,&local_68);
  if ((local_68 != (__uint64 *)0x0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(local_68[10]);
  }
  if (param_4 == 0) {
    *(undefined4 *)((longlong)plVar8 + 0xc) = 0;
    iVar7 = 0;
  }
  else {
    uVar12 = *(uint *)(param_4 + 0xc);
    *(uint *)((longlong)plVar8 + 0xc) = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar7 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar7 = *(int *)(lVar13 + 0x10);
      bVar14 = iVar7 == 0;
      if (bVar14) {
        *(int *)(lVar13 + 0x10) = iVar11;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar7 = iVar11;
      }
    }
  }
  *(int *)(plVar8 + 2) = iVar7;
  uVar12 = (uint)*(byte *)((longlong)param_3 + 0x42) << 3 | param_5 | (uint)param_1[0x23] | 1;
  if (*(int *)(param_3[10] + 8) == 2) {
    if (DAT_14cb25ab0 != '\0') {
      uVar12 = AK::SoundEngine::PostEvent
                         (*(uint *)(plVar8[3] + 0x38),*param_1,uVar12,FUN_1438aa952,plVar8,0,
                          (AkExternalSourceInfo *)0x0,0);
      *(uint *)(plVar8 + 1) = uVar12;
      if (uVar12 != 0) {
        if (plVar8 != (longlong *)0x0) goto LAB_14084a81a;
LAB_14084a847:
        if (param_1 == (__uint64 *)0x0) {
          _Var9 = 0xffffffffffffffff;
        }
        else {
          _Var9 = *param_1;
        }
        *param_2 = param_1;
        param_2[1] = _Var9;
        param_2[2] = plVar8;
        if (DAT_14cb259f8 != 0) {
          local_68 = param_1;
          _Stack_60 = _Var9;
          local_58 = plVar8;
          FUN_140b75fe8(DAT_14cb259f8 + 0x18);
        }
        if ((*(char *)(*plVar1 + 0x42) == '\x01') && (DAT_14cb25ed0 != (longlong *)0x0)) {
          (**(code **)(*DAT_14cb25ed0 + 0x2c8))(DAT_14cb25ed0,param_2);
        }
        goto LAB_14084a8a9;
      }
    }
LAB_14084a782:
    if (plVar8 == (longlong *)0x0) goto LAB_14084a8a9;
    lVar13 = *plVar1;
  }
  else {
    if (*(int *)(param_3[10] + 8) != 3) goto LAB_14084a782;
    if (plVar8 == (longlong *)0x0) goto LAB_14084a8a9;
    plVar3 = (longlong *)*plVar8;
    lVar13 = plVar8[3];
    if ((((plVar3 != (longlong *)0x0) && (_Var9 = *param_1, _Var9 != 0xffffffffffffffff)) &&
        (lVar13 != 0)) && ((DAT_14cb26569 & 1) != 0)) {
      *(undefined1 *)(plVar8 + 4) = 1;
      iVar7 = (int)plVar3[0x21] + 1;
      *(int *)(plVar3 + 0x21) = iVar7;
      uVar5 = DAT_14cb25a08;
      lVar13 = (longlong)(int)DAT_14cb25a08;
      DAT_14cb25a08 = DAT_14cb25a08 + 1;
      if (DAT_14cb25a0c < DAT_14cb25a08) {
        FUN_141819d8c(uVar5);
        iVar7 = (int)plVar3[0x21];
      }
      lVar4 = DAT_14cb25a00;
      lVar13 = lVar13 * 0x30;
      *(int *)(plVar3 + 0x21) = iVar7 + 1;
      *(longlong **)(lVar4 + lVar13) = plVar8;
      *(__uint64 *)(lVar4 + 8 + lVar13) = _Var9;
      *(ulonglong *)(lVar4 + 0x10 + lVar13) = (ulonglong)uVar12;
      *(longlong **)(lVar4 + 0x18 + lVar13) = plVar3;
      *(int *)(plVar3 + 0x21) = (int)plVar3[0x21] + 1;
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar13);
      *puVar2 = 0;
      puVar2[1] = 0;
      lVar13 = plVar3[0x21];
      *(int *)(plVar3 + 0x21) = (int)lVar13 + -1;
      if (0 < (int)plVar3[0x26]) {
        *(int *)(plVar3 + 0x21) = (int)lVar13 + -2;
        goto LAB_14084a81a;
      }
      FUN_1400847bc(plVar3 + 0x17,0);
      if ((int)plVar3[0x21] == 0) {
        FUN_140087e46(plVar3);
        if (*plVar3 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_14084a722;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar3);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar3);
        }
      }
LAB_14084a722:
      *(int *)(plVar3 + 0x21) = (int)plVar3[0x21] + -1;
      if (((int)plVar3[0x26] < 1) && (FUN_1400847bc(plVar3 + 0x17,0), (int)plVar3[0x21] == 0)) {
        FUN_140087e46(plVar3);
        if (*plVar3 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_14084a81a;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar3);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar3);
        }
      }
LAB_14084a81a:
      _Var9 = param_1[0x25];
      plVar8[5] = _Var9;
      p_Var10 = (__uint64 *)(_Var9 + 0x30);
      if (_Var9 == 0) {
        p_Var10 = param_1 + 0x24;
      }
      *p_Var10 = (__uint64)plVar8;
      param_1[0x25] = (__uint64)plVar8;
      *(int *)(param_1 + 0x26) = (int)param_1[0x26] + 1;
      goto LAB_14084a847;
    }
  }
  if ((lVar13 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(lVar13 + 0x50));
  }
  FUN_1400020a8(plVar8);
LAB_14084a8a9:
  if ((local_48 ^ (ulonglong)auStackY_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14084a9a4 FUN_14084a9a4 body=275 status=ok
// SIG undefined FUN_14084a9a4(void)

void FUN_14084a9a4(longlong param_1,int param_2)

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



// FUNCTION 14084aab8 FUN_14084aab8 body=237 status=ok
// SIG undefined FUN_14084aab8(void)

void FUN_14084aab8(longlong param_1,float param_2,float param_3,byte param_4)

{
  float fVar1;
  byte bVar2;
  longlong lVar3;
  float fVar4;
  
  fVar1 = *DAT_14cad1138;
  fVar4 = (float)(~-(uint)(fVar1 <= 1e-08) & (uint)fVar1);
  param_2 = param_2 * fVar4;
  *(float *)(param_1 + 0x2b8) = param_2;
  fVar4 = fVar4 * param_3;
  *(float *)(param_1 + 700) = fVar4;
  *(byte *)(param_1 + 0x2c8) = *(byte *)(param_1 + 0x2c8) & 0xfe | param_4;
  FUN_14084ac3e(fVar1,param_2 + fVar4);
  if (*(longlong *)(param_1 + 0x300) != 0) {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00014084ab3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar3 + 0x218) + 0x130))(*(longlong **)(lVar3 + 0x218),param_1);
    return;
  }
  if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
    bVar2 = *(byte *)(param_1 + 0x9d);
    if ((bVar2 & 1) == 0) {
LAB_14084ab81:
      *(byte *)(param_1 + 0x9d) = bVar2 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
      return;
    }
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar3 = FUN_1448abda6(param_1);
      if (lVar3 == 0) {
        bVar2 = *(byte *)(param_1 + 0x9d);
        goto LAB_14084ab81;
      }
    }
  }
  return;
}



// FUNCTION 14084aba6 FUN_14084aba6 body=150 status=ok
// SIG undefined FUN_14084aba6(void)

longlong FUN_14084aba6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                      undefined8 *param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_14084d56e(param_1,param_2,param_3,param_6);
  if (lVar1 != 0) {
    local_28 = param_5[2];
    local_38 = *param_5;
    uStack_30 = param_5[1];
    local_58 = *param_4;
    uStack_54 = param_4[1];
    uStack_50 = param_4[2];
    uStack_4c = param_4[3];
    local_48 = *(undefined8 *)(param_4 + 4);
    local_60 = 0;
    local_68 = 0;
    FUN_14084af84(lVar1,&local_58,&local_38,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14084ac3e FUN_14084ac3e body=837 status=ok
// SIG undefined FUN_14084ac3e(void)

void FUN_14084ac3e(longlong param_1,float param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar9 = *(longlong *)(param_1 + 0xb0);
  if (param_2 <= 0.0) {
    if (lVar9 == 0) {
      lVar9 = FUN_1448abda6(param_1);
    }
    if (*(longlong *)(lVar9 + 0x1f0) == 0) {
      plVar4 = (longlong *)(lVar9 + 0x458);
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
    }
    lVar9 = *(longlong *)(param_1 + 0x308);
    if (lVar9 != 0) {
      lVar3 = *plVar4;
      uVar5 = (uint)lVar9;
      if ((int)(uVar5 & 0xffffff) < *(int *)(lVar3 + 0x10)) {
        lVar8 = lVar3 + 0x18;
        if (*(longlong *)(lVar3 + 0x28) != 0) {
          lVar8 = *(longlong *)(lVar3 + 0x28);
        }
        if ((*(uint *)(lVar8 + (ulonglong)((uVar5 & 0xffffff) >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0
           ) {
          lVar3 = *(longlong *)(lVar3 + 8);
          lVar8 = (ulonglong)(uVar5 & 0xffffff) * 0x70;
          if (((lVar3 + lVar8 != 0) && (*(longlong *)(lVar3 + 0x60 + lVar8) == lVar9)) &&
             (*(char *)(lVar3 + 1 + lVar8) != '\x04')) {
            FUN_1405a424c();
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x308) = 0;
  }
  else {
    if (lVar9 == 0) {
      lVar9 = FUN_1448abda6(param_1);
    }
    if (*(longlong *)(lVar9 + 0x1f0) == 0) {
      puVar2 = (undefined8 *)(lVar9 + 0x458);
    }
    else {
      puVar2 = (undefined8 *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar2;
    local_c0 = (undefined8 *)0x0;
    local_b8 = 0;
    FUN_1446efa72(&local_c0,0,3,0x10);
    puVar2 = local_c0;
    local_b8 = 3;
    *local_c0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_c0[2] = lVar3;
    *local_c0 = &PTR_FUN_14a8614c0;
    local_c0[3] = 0;
    iVar6 = 0;
    if (param_1 != 0) {
      uVar5 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_c0 + 3) = uVar5;
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar6 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar6 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar7;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar6 = iVar7;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar6;
    puVar2[4] = &LAB_1406cb0b2;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_a8 = 0;
    local_a0 = 0;
    FUN_14487d8d8(&local_a8,&local_c0);
    local_68 = 1;
    local_c8 = local_b0;
    local_b0[0] = 0;
    local_ac = 0xbf800000;
    FUN_1406f4044(uVar1,param_1 + 0x308,&local_a8,param_2);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
    if (local_b8 != 0) {
      if (local_c0 == (undefined8 *)0x0) goto LAB_14084ae78;
      (**(code **)*local_c0)(local_c0,0);
      FUN_1446efa72(&local_c0,0,0,0x10);
      local_b8 = 0;
    }
    if (local_c0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14084ae78:
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14084af84 FUN_14084af84 body=680 status=ok
// SIG undefined FUN_14084af84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14084af84(longlong param_1,undefined4 *param_2,undefined1 (*param_3) [16],
                  undefined4 param_4,undefined8 param_5,undefined1 param_6)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined1 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  double local_108;
  double dStack_100;
  undefined1 local_f8 [16];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(longlong *)(param_1 + 0x120) == 0) {
    local_b8 = *(undefined8 *)param_3[1];
    local_c8 = *(undefined8 *)*param_3;
    uStack_c0 = *(undefined8 *)(*param_3 + 8);
    local_e8 = *param_2;
    uStack_e4 = param_2[1];
    uStack_e0 = param_2[2];
    uStack_dc = param_2[3];
    local_d8 = *(undefined8 *)(param_2 + 4);
    local_130 = param_6;
    local_138 = param_5;
    FUN_1401ca0e6(param_1,&local_e8,&local_c8,param_4);
  }
  else {
    auVar1 = *param_3;
    auVar9 = divpd(auVar1,_DAT_1499387d0);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(double *)param_3[1];
    auVar10 = divpd(auVar10,_DAT_1499387d0);
    auVar9 = roundpd(auVar9,auVar9,3);
    auVar10 = roundpd(auVar10,auVar10,3);
    dVar7 = (auVar1._0_8_ - auVar9._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar8 = (auVar1._8_8_ - auVar9._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar5 = (*(double *)param_3[1] - auVar10._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar6 = (0.0 - auVar10._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar2 = sin(dVar7);
    dVar3 = sin(dVar8);
    dVar4 = sin(dVar5);
    sin(dVar6);
    dVar7 = cos(dVar7);
    dVar8 = cos(dVar8);
    dVar5 = cos(dVar5);
    cos(dVar6);
    dVar6 = dVar3 * dVar2 * dVar4 + dVar8 * dVar7 * dVar5;
    local_108 = dVar2 * dVar3 * dVar5 - dVar7 * dVar8 * dVar4;
    dStack_100 = -(dVar2 * dVar8 * dVar5) - dVar7 * dVar3 * dVar4;
    local_f8._8_4_ = SUB84(dVar6,0);
    local_f8._0_8_ = -(dVar8 * dVar2 * dVar4) + dVar3 * dVar7 * dVar5;
    local_f8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    local_128 = *param_2;
    uStack_124 = param_2[1];
    uStack_120 = param_2[2];
    uStack_11c = param_2[3];
    local_118 = *(undefined8 *)(param_2 + 4);
    local_130 = param_6;
    local_138 = param_5;
    FUN_14084f9fc(param_1,&local_128,&local_108,param_4);
  }
  if ((local_b0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14084b22d FUN_14084b22d body=2197 status=ok
// SIG undefined FUN_14084b22d(void)

/* WARNING: Type propagation algorithm not settling */

double * FUN_14084b22d(double *param_1,longlong param_2,longlong param_3,char param_4,
                      longlong param_5)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
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
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  FUN_14485cccc(param_3 + 0xb8);
  if (param_4 != '\x01') {
    dVar10 = *(double *)(param_5 + 0xd0);
    dVar7 = *(double *)(param_5 + 0xd8);
    dVar13 = 0.0;
    dVar11 = *(double *)(param_5 + 0xe0);
    if ((((dVar10 != 0.0) || (NAN(dVar10))) || (dVar7 != 0.0)) ||
       (((NAN(dVar7) || (dVar11 != 0.0)) || (NAN(dVar11))))) {
      dVar13 = *(double *)(param_3 + 0x40);
      uVar16 = SUB84(dVar13,0);
      uVar17 = (undefined4)((ulonglong)dVar13 >> 0x20);
      dVar1 = *(double *)(param_3 + 0x48);
      uVar18 = SUB84(dVar1,0);
      uVar19 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = *(double *)(param_3 + 0x50);
      uVar14 = SUB84(dVar2,0);
      uVar15 = (undefined4)((ulonglong)dVar2 >> 0x20);
      dVar4 = dVar10 * dVar1 - dVar13 * dVar7;
      dVar12 = dVar11 * dVar13 - dVar2 * dVar10;
      dVar10 = dVar7 * dVar2 - dVar1 * dVar11;
      dVar7 = dVar4 * dVar4 + dVar10 * dVar10 + dVar12 * dVar12;
      if (9.99999993922529e-09 < dVar7) {
        dVar7 = 1.0 / SQRT(dVar7);
        dVar10 = dVar10 * dVar7;
        dVar12 = dVar12 * dVar7;
        dVar4 = dVar4 * dVar7;
        if (((dVar13 != -dVar13) || (NAN(dVar13) || NAN(-dVar13))) ||
           ((dVar1 != 0.0 || (NAN(dVar1))))) {
          dVar7 = atan2(dVar1,dVar13);
          dVar7 = dVar7 * 57.29577951308232;
        }
        else {
          dVar7 = 0.0;
        }
        dVar5 = SQRT(dVar1 * dVar1 + dVar13 * dVar13);
        dVar11 = 0.0;
        if ((((dVar2 != 0.0) || (NAN(dVar2))) || (dVar5 != 0.0)) || (NAN(dVar5))) {
          dVar11 = atan2(dVar2,dVar5);
          dVar11 = dVar11 * 57.29577951308232;
        }
        *param_1 = dVar11;
        param_1[1] = dVar7;
        dVar5 = sin(dVar11 * 0.01745329238474369);
        dVar8 = sin(dVar7 * 0.01745329238474369);
        dVar6 = cos(dVar11 * 0.01745329238474369);
        dVar11 = cos(dVar7 * 0.01745329238474369);
        dVar9 = dVar5 * 0.0 * dVar11 - dVar8;
        dVar11 = dVar5 * 0.0 * dVar8 + dVar11;
        dVar7 = dVar4 * dVar6 * -0.0 + dVar10 * dVar9 + dVar12 * dVar11;
        dVar10 = (dVar13 * dVar12 - dVar10 * dVar1) * dVar6 * -0.0 +
                 (dVar1 * dVar4 - dVar12 * dVar2) * dVar9 +
                 (dVar2 * dVar10 - dVar4 * dVar13) * dVar11;
        goto joined_r0x00014084b6bc;
      }
      dVar10 = 0.0;
      if (((dVar13 != 0.0) || (NAN(dVar13))) || ((dVar1 != 0.0 || (NAN(dVar1))))) {
        dVar10 = atan2(dVar1,dVar13);
        dVar10 = dVar10 * 57.29577951308232;
        uVar16 = (undefined4)*(undefined8 *)(param_3 + 0x40);
        uVar17 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
        uVar18 = (undefined4)*(undefined8 *)(param_3 + 0x48);
        uVar19 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x48) >> 0x20);
        uVar14 = (undefined4)*(undefined8 *)(param_3 + 0x50);
        uVar15 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x50) >> 0x20);
      }
      param_1[1] = dVar10;
      dVar10 = SQRT((double)CONCAT44(uVar17,uVar16) * (double)CONCAT44(uVar17,uVar16) +
                    (double)CONCAT44(uVar19,uVar18) * (double)CONCAT44(uVar19,uVar18));
      dVar7 = 0.0;
      if (((dVar10 == 0.0) && (!NAN(dVar10))) &&
         (((double)CONCAT44(uVar15,uVar14) == 0.0 && (!NAN((double)CONCAT44(uVar15,uVar14))))))
      goto LAB_14084ba50;
      dVar11 = (double)CONCAT44(uVar15,uVar14);
    }
    else {
      dVar10 = *(double *)(param_3 + 0x40);
      dVar7 = *(double *)(param_3 + 0x48);
      if ((((dVar10 != 0.0) || (NAN(dVar10))) || (dVar7 != 0.0)) || (NAN(dVar7))) {
        dVar13 = atan2(dVar7,dVar10);
        dVar13 = dVar13 * 57.29577951308232;
        dVar10 = *(double *)(param_3 + 0x40);
        dVar7 = *(double *)(param_3 + 0x48);
      }
      param_1[1] = dVar13;
      dVar10 = SQRT(dVar10 * dVar10 + dVar7 * dVar7);
      dVar11 = *(double *)(param_3 + 0x50);
      if (((dVar10 == 0.0) && (!NAN(dVar10))) && (dVar11 == 0.0)) goto joined_r0x00014084b43a;
    }
    goto LAB_14084ba43;
  }
  lVar3 = *(longlong *)(param_2 + 0x1c8);
  dVar10 = DAT_14c8462e8;
  dVar7 = DAT_14c8462d8;
  dVar13 = DAT_14c8462e0;
  if (lVar3 != 0) {
    dVar1 = *(double *)(lVar3 + 0x240);
    dVar2 = *(double *)(lVar3 + 0x248);
    dVar4 = *(double *)(lVar3 + 0x250);
    dVar7 = *(double *)(lVar3 + 600);
    dVar11 = dVar1 * 0.0 - dVar2 * 1.0;
    dVar12 = dVar2 * 0.0 - dVar4 * 0.0;
    dVar13 = dVar4 * 1.0 - dVar1 * 0.0;
    dVar12 = dVar12 + dVar12;
    dVar13 = dVar13 + dVar13;
    dVar11 = dVar11 + dVar11;
    dVar10 = dVar11 * dVar7 + 0.0 + (dVar13 * dVar1 - dVar12 * dVar2);
    dVar7 = (dVar11 * dVar2 - dVar13 * dVar4) + dVar7 * dVar12 + 1.0;
    dVar13 = (dVar4 * dVar12 - dVar1 * dVar11) + *(double *)(lVar3 + 600) * dVar13 + 0.0;
  }
  dVar1 = *(double *)(param_3 + 0x40);
  uVar16 = SUB84(dVar1,0);
  uVar17 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = *(double *)(param_3 + 0x48);
  uVar14 = SUB84(dVar2,0);
  uVar15 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar11 = *(double *)(param_3 + 0x50);
  dVar4 = dVar1 * dVar13 - dVar7 * dVar2;
  dVar7 = dVar11 * dVar7 - dVar10 * dVar1;
  dVar10 = dVar2 * dVar10 - dVar13 * dVar11;
  dVar13 = dVar4 * dVar4 + dVar10 * dVar10 + dVar7 * dVar7;
  if (9.99999993922529e-09 < dVar13) {
    dVar13 = 1.0 / SQRT(dVar13);
    dVar10 = dVar10 * dVar13;
    dVar7 = dVar7 * dVar13;
    dVar4 = dVar4 * dVar13;
    dVar13 = dVar10 * dVar2 - dVar1 * dVar7;
    dVar5 = dVar4 * dVar1 - dVar11 * dVar10;
    dVar8 = dVar7 * dVar11 - dVar2 * dVar4;
    dVar12 = 0.0;
    if (((dVar5 != 0.0) || (NAN(dVar5))) || ((dVar8 != 0.0 || (NAN(dVar8))))) {
      dVar12 = atan2(dVar5,dVar8);
      dVar12 = dVar12 * 57.29577951308232;
    }
    dVar8 = SQRT(dVar5 * dVar5 + dVar8 * dVar8);
    dVar5 = 0.0;
    if ((((dVar13 != 0.0) || (NAN(dVar13))) || (dVar8 != 0.0)) || (NAN(dVar8))) {
      dVar5 = atan2(dVar13,dVar8);
      dVar5 = dVar5 * 57.29577951308232;
    }
    *param_1 = dVar5;
    param_1[1] = dVar12;
    dVar8 = sin(dVar5 * 0.01745329238474369);
    dVar6 = sin(dVar12 * 0.01745329238474369);
    dVar5 = cos(dVar5 * 0.01745329238474369);
    dVar13 = cos(dVar12 * 0.01745329238474369);
    dVar12 = dVar8 * 0.0 * dVar13 - dVar6;
    dVar13 = dVar8 * 0.0 * dVar6 + dVar13;
    dVar7 = dVar4 * dVar5 * -0.0 + dVar10 * dVar12 + dVar7 * dVar13;
    dVar10 = dVar11 * dVar5 * -0.0 + dVar1 * dVar12 + dVar2 * dVar13;
joined_r0x00014084b6bc:
    if (((dVar10 != 0.0) || (NAN(dVar10))) || ((dVar7 != 0.0 || (dVar11 = 0.0, NAN(dVar7))))) {
      dVar11 = atan2(dVar10,dVar7);
      dVar11 = dVar11 * 57.29577951308232;
    }
    goto LAB_14084ba58;
  }
  dVar10 = 0.0;
  if (((dVar1 != 0.0) || (NAN(dVar1))) || ((dVar2 != 0.0 || (NAN(dVar2))))) {
    dVar10 = atan2(dVar2,dVar1);
    dVar10 = dVar10 * 57.29577951308232;
    uVar16 = (undefined4)*(undefined8 *)(param_3 + 0x40);
    uVar17 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
    uVar14 = (undefined4)*(undefined8 *)(param_3 + 0x48);
    uVar15 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x48) >> 0x20);
    dVar11 = *(double *)(param_3 + 0x50);
  }
  param_1[1] = dVar10;
  dVar10 = SQRT((double)CONCAT44(uVar17,uVar16) * (double)CONCAT44(uVar17,uVar16) +
                (double)CONCAT44(uVar15,uVar14) * (double)CONCAT44(uVar15,uVar14));
  if (((dVar10 != 0.0) || (NAN(dVar10))) || (dVar11 != 0.0)) {
LAB_14084ba43:
    dVar7 = atan2(dVar11,dVar10);
    dVar7 = dVar7 * 57.29577951308232;
  }
  else {
joined_r0x00014084b43a:
    dVar7 = 0.0;
    if (NAN(dVar11)) goto LAB_14084ba43;
  }
LAB_14084ba50:
  *param_1 = dVar7;
  dVar11 = 0.0;
LAB_14084ba58:
  param_1[2] = dVar11;
  return param_1;
}



// FUNCTION 14084bac2 FUN_14084bac2 body=1551 status=ok
// SIG undefined FUN_14084bac2(void)

void FUN_14084bac2(longlong *param_1,longlong *param_2,char *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  float fVar16;
  undefined1 auStack_178 [32];
  ulonglong *local_158;
  longlong local_150;
  int local_144;
  ulonglong local_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  ulonglong local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8 [2];
  undefined8 ***local_e0 [3];
  ushort local_c8;
  byte local_c0;
  undefined8 local_b8;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined8 *local_88;
  int local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (((0 < (int)param_2[1]) &&
      (local_150 = (**(code **)(*param_1 + 0x5d8))(param_1,0,0,0), local_150 != 0)) &&
     ((longlong)(int)param_2[1] != 0)) {
    plVar10 = (longlong *)(*param_2 + 0x40);
    lVar11 = (longlong)(int)param_2[1] * 0x58;
    do {
      lVar8 = plVar10[1];
      if (lVar8 == 0) {
        uVar7 = FUN_14016979c();
        lVar8 = FUN_14477b664(uVar7);
        plVar10[1] = lVar8;
      }
      if (plVar10[2] != 0) {
LAB_14084bb83:
        cVar5 = *param_3;
        local_140 = CONCAT71(local_140._1_7_,cVar5);
        if (cVar5 == '\x01') {
          lVar8 = *(longlong *)(param_3 + 8);
          local_140 = CONCAT71(local_140._1_7_,2);
          if (lVar8 == 0) {
            local_138._0_4_ = 0;
            iVar6 = 0;
            uVar2 = (uint)local_138;
          }
          else {
            uVar2 = *(uint *)(lVar8 + 0xc);
            local_138 = (ulonglong)uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar8 = 0;
            }
            iVar6 = *(int *)(lVar8 + 0x10);
            if (*(int *)(lVar8 + 0x10) == 0) {
              LOCK();
              iVar6 = DAT_14c964868 + 1;
              UNLOCK();
              iVar13 = DAT_14c964868 + 1;
              bVar15 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar6;
              if (bVar15) {
                local_144 = iVar13;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar13);
                iVar13 = local_144;
              }
              LOCK();
              iVar6 = *(int *)(lVar8 + 0x10);
              bVar15 = iVar6 == 0;
              if (bVar15) {
                *(int *)(lVar8 + 0x10) = iVar13;
                iVar6 = 0;
              }
              UNLOCK();
              uVar2 = (uint)local_138;
              if (bVar15) {
                iVar6 = iVar13;
              }
            }
          }
          local_138._0_4_ = uVar2;
          local_138 = CONCAT44(iVar6,(uint)local_138);
        }
        else if (cVar5 == '\x02') {
          local_138 = *(ulonglong *)(param_3 + 8);
        }
        else if (cVar5 == '\x03') {
          local_138 = *(longlong *)(param_3 + 8);
          plStack_130 = *(longlong **)(param_3 + 0x10);
          if (plStack_130 == (longlong *)0x0) {
            local_128 = *(undefined8 *)(param_3 + 0x18);
            uStack_120 = CONCAT71(uStack_120._1_7_,param_3[0x20]);
          }
          else {
            LOCK();
            *(int *)((longlong)plStack_130 + 0xc) = *(int *)((longlong)plStack_130 + 0xc) + 1;
            UNLOCK();
            local_128 = *(undefined8 *)(param_3 + 0x18);
            uStack_120 = CONCAT71(uStack_120._1_7_,param_3[0x20]);
          }
        }
        local_118 = local_118 & 0xffffffff00000000;
        if (*(int *)(param_3 + 0x28) != 0) {
          uVar7 = FUN_1448174c4(&local_118);
          FUN_1400e08b0(uVar7,DAT_14c9a3da0 + (longlong)*(int *)(param_3 + 0x28) * 0x10 + -0x10);
        }
        uStack_110 = uStack_110 & 0xffffffffffffff00;
        local_e8[0] = 0;
        lVar8 = plVar10[1];
        if (lVar8 == 0) {
          uVar7 = FUN_14016979c();
          lVar8 = FUN_14477b664(uVar7);
          plVar10[1] = lVar8;
        }
        lVar14 = plVar10[2];
        if (lVar14 == 0) {
          if (lVar8 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*plVar10 != 0) {
              plVar3 = *(longlong **)(lVar8 + 0xb8);
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
                lVar14 = 0;
              }
              else {
                uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar14 = FUN_144aff482(uVar7,plVar10);
              }
              plVar10[2] = lVar14;
            }
          }
        }
        FUN_1400606f6(&local_b8,lVar14,&local_140);
        puVar12 = local_88;
        if (local_88 == (undefined8 *)0x0) {
          puVar12 = &local_b8;
        }
        if (local_80 < 1) {
          puVar12 = (undefined8 *)&DAT_14c9a40e0;
        }
        FUN_1400603ec(local_e0,lVar14,puVar12);
        puVar12 = local_88;
        if (local_88 == (undefined8 *)0x0) {
          puVar12 = &local_b8;
        }
        FUN_1446fdf58(puVar12,local_80);
        if (local_88 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        cVar5 = FUN_140168b7a(local_e0,0);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppuVar9 = local_e0;
          if (0x18 < local_c8) {
            ppppuVar9 = (undefined8 ****)local_e0[0];
          }
          (*pcVar4)(ppppuVar9);
        }
        if (0x18 < local_c8) {
          FUN_1400020a8(local_e0[0]);
        }
        FUN_1448173f8(local_e8);
        if ((char)uStack_110 != '\0') {
          if ((char)uStack_110 == '\x01') {
            local_108 = 0;
          }
          else if (((char)uStack_110 == '\x03') && (plStack_100 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)plStack_100 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plStack_100 + 0x10))();
            }
          }
          uStack_110 = uStack_110 & 0xffffffffffffff00;
        }
        FUN_1448173f8(&local_118);
        if (((char)local_140 == '\x03') && (plStack_130 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)plStack_130 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plStack_130 + 0x10))();
          }
        }
        if (cVar5 != '\0') goto LAB_14084be6d;
        goto switchD_14084be89_default;
      }
      if ((lVar8 != 0) && (*plVar10 != 0)) {
        plVar3 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
          plVar10[2] = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar8 = FUN_144aff482(uVar7,plVar10);
          plVar10[2] = lVar8;
          if (lVar8 != 0) goto LAB_14084bb83;
        }
      }
LAB_14084be6d:
      switch((char)plVar10[-7]) {
      case '\0':
        fVar16 = (float)*(int *)((longlong)plVar10 + -0x34);
        break;
      case '\x01':
        fVar16 = *(float *)(plVar10 + -6);
        break;
      case '\x02':
        fStack_b0 = (float)(double)plVar10[-3];
        local_140 = plVar10[-8];
        local_138 = CONCAT71(local_138._1_7_,2);
        local_b8 = CONCAT44((float)(double)plVar10[-4],(float)(double)plVar10[-5]);
        uStack_ac = 0x3f800000;
        goto LAB_14084bf25;
      case '\x03':
        local_b8 = plVar10[-2];
        fStack_b0 = *(float *)(plVar10 + -1);
        uStack_ac = *(undefined4 *)((longlong)plVar10 + -4);
        local_140 = plVar10[-8];
        local_138 = CONCAT71(local_138._1_7_,2);
LAB_14084bf25:
        local_138 = CONCAT44(0xffffffff,(uint)local_138);
        FUN_14016d7a8(local_150,&local_140,&local_b8);
        goto switchD_14084be89_default;
      case '\x04':
        fVar16 = 1.0;
        if (*(char *)((longlong)plVar10 + -0x37) == '\0') {
          fVar16 = 0.0;
        }
        break;
      default:
        goto switchD_14084be89_default;
      }
      local_b8 = plVar10[-8];
      fStack_b0 = (float)CONCAT31(fStack_b0._1_3_,2);
      uStack_ac = 0xffffffff;
      local_140 = local_140 & 0xffffffffffffff00;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      plStack_100 = (longlong *)0x0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_138 = 0;
      plStack_130 = (longlong *)0x0;
      local_158 = &local_140;
      FUN_140042bb4(local_150,&local_b8,fVar16,0);
switchD_14084be89_default:
      plVar10 = plVar10 + 0xb;
      lVar11 = lVar11 + -0x58;
    } while (lVar11 != 0);
  }
  if ((local_70 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14084c0d2 FUN_14084c0d2 body=102 status=ok
// SIG undefined FUN_14084c0d2(void)

void FUN_14084c0d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14081cebe();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14084c139 FUN_14084c139 body=508 status=ok
// SIG undefined FUN_14084c139(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14084c139(void)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb78cc8 == (longlong *)0x0) {
    _DAT_14cb78ce0 = 0;
    _DAT_14cb78cf0 = 0;
    DAT_14cb78cd8 = 0;
    plVar4 = &DAT_14cb78cd8;
    _DAT_14cb78ce8 = 0xffffffff;
    _DAT_14cb78cd0 = &PTR_FUN_14b181320;
    _DAT_14cb78cf8 = 0x4fc71eb6;
    _DAT_14cb78d00 = 0;
    DAT_14cb78cc8 = (longlong *)&DAT_14cb78cd0;
LAB_14084c16c:
    bVar1 = true;
    plVar6 = plVar4;
LAB_14084c16f:
    plVar5 = DAT_14cb78cc8;
    if (*plVar4 == 0) goto LAB_14084c23b;
    plVar4 = plVar6;
    if (!bVar1) {
      plVar4 = (longlong *)(*plVar6 + 0x30);
    }
    if (*plVar4 == 0) {
      if (((DAT_14c9a1ab0 == 0) || (*plVar6 == 0)) ||
         (plVar4 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar6 + 0x28)),
         plVar4 == (longlong *)0x0)) goto LAB_14084c19c;
      puVar7 = &DAT_14c9485f0;
      if ((undefined4 *)*plVar6 != (undefined4 *)0x0) {
        puVar7 = (undefined4 *)*plVar6;
      }
      cVar2 = (**(code **)(*plVar4 + 0x2a0))(plVar4,plVar5,puVar7);
    }
    else {
      if ((((int)DAT_14cb78cc8[3] == *(int *)(*plVar4 + 0x44)) || (DAT_14c9a1ab0 == 0)) ||
         ((*plVar6 == 0 ||
          (plVar4 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar6 + 0x28)),
          plVar4 == (longlong *)0x0)))) goto LAB_14084c19c;
      cVar2 = (**(code **)(*plVar4 + 0x2a8))(plVar4,plVar5);
    }
    if (cVar2 == '\0') goto LAB_14084c19c;
  }
  else {
    plVar6 = DAT_14cb78cc8 + 1;
    plVar4 = plVar6;
    if ((char)DAT_14cb78cc8[2] == '\0') goto LAB_14084c16c;
    if ((char)DAT_14cb78cc8[2] == '\x02') {
      plVar4 = (longlong *)(*plVar6 + 0x30);
      bVar1 = false;
      goto LAB_14084c16f;
    }
LAB_14084c23b:
    plVar5 = DAT_14cb78cc8;
    lVar3 = FUN_140162146();
    if (lVar3 == 0) goto LAB_14084c19c;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_effects",0);
    FUN_140024ada(&local_48,plVar5);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar5 + 0x20))(plVar5);
LAB_14084c19c:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5;
}



// FUNCTION 14084c336 FUN_14084c336 body=1330 status=ok
// SIG undefined FUN_14084c336(void)

longlong *
FUN_14084c336(undefined8 param_1,undefined8 param_2,undefined4 *param_3,longlong param_4,
             undefined8 *param_5,undefined8 *param_6,uint param_7)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  code *pcVar11;
  int iVar12;
  longlong *plVar13;
  double extraout_RAX;
  double dVar14;
  longlong lVar15;
  double *pdVar16;
  undefined4 uVar17;
  uint uVar18;
  longlong *plVar19;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  uint local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  wchar_t *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  undefined8 *local_1c0;
  code *local_1b8;
  code *local_1b0;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (param_4 != 0) {
    if (DAT_14cac6e60 == 0) {
      local_1c0 = &local_e8;
      local_e8 = FUN_144a7958c;
      local_1b0 = FUN_14081d0ea;
      local_1b8 = FUN_142b47bc4;
      local_1c8 = &LAB_1478989f1;
      local_1d0 = &LAB_146391124;
      local_1d8 = L"Engine";
      local_1e0 = 0x10000000000;
      local_1e8 = 0x10000005;
      local_1f0 = 0x10;
      local_1f8 = (undefined8 *)CONCAT44(local_1f8._4_4_,0x620);
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x38) < *(int *)(DAT_14cac6e60 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) != DAT_14cac6e60 + 0x30)) goto LAB_14084c3fb;
    if ((*(byte *)(param_4 + 0x2d4) & 0x40) != 0) {
      if (*(char *)(param_4 + 0x1fb) == '\0') {
LAB_14084c70f:
        local_f8 = param_6[2];
        local_1f8 = &local_108;
        local_108 = *param_6;
        uStack_100 = param_6[1];
        local_128 = *param_5;
        uStack_120 = param_5[1];
        local_118 = param_5[2];
        local_148 = *param_3;
        uStack_144 = param_3[1];
        uStack_140 = param_3[2];
        uStack_13c = param_3[3];
        local_138 = *(undefined8 *)(param_3 + 4);
        local_1f0 = param_7;
        plVar13 = (longlong *)FUN_14084aba6(param_1,param_2);
      }
      else {
        lVar2 = *(longlong *)(param_4 + 0xa8);
        if (lVar2 != 0) {
          lVar15 = FUN_14059e8cc();
          lVar2 = *(longlong *)(lVar2 + 0x10);
          if ((*(int *)(lVar15 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
             (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) ==
              lVar15 + 0x30)) goto LAB_14084c70f;
        }
LAB_14084c3fb:
        plVar13 = (longlong *)FUN_14084d56e(param_1,param_2,param_3,param_7);
        (**(code **)(*plVar13 + 0x490))(plVar13,param_4,&DAT_14cadad98,0);
        local_168 = *param_6;
        uStack_160 = param_6[1];
        local_158 = param_6[2];
        local_188 = *(undefined4 *)param_5;
        uStack_184 = *(undefined4 *)((longlong)param_5 + 4);
        uStack_180 = *(undefined4 *)(param_5 + 1);
        uStack_17c = *(undefined4 *)((longlong)param_5 + 0xc);
        local_178 = param_5[2];
        local_1f0 = local_1f0 & 0xffffff00;
        local_1f8 = (undefined8 *)0x0;
        plVar19 = plVar13;
        FUN_14084af84(plVar13,&local_188,&local_168,0);
        uVar17 = SUB84(plVar19,0);
        dVar6 = (double)FUN_144719204((int)*param_6,0);
        dVar7 = (double)FUN_144719204((int)param_6[1],0);
        dVar3 = sin(dVar6 * 0.017453292519943295);
        dVar6 = cos(dVar6 * 0.017453292519943295);
        dVar4 = sin(dVar7 * 0.017453292519943295);
        dVar7 = cos(dVar7 * 0.017453292519943295);
        pcVar11 = (code *)plVar13[0x48];
        dVar1 = (double)plVar13[0x49];
        dVar9 = (double)plVar13[0x4a];
        dVar5 = (double)plVar13[0x4b];
        pdVar16 = (double *)plVar13[0x45];
        dVar14 = extraout_RAX;
        local_e8 = pcVar11;
        uStack_e0 = dVar1;
        local_d8 = dVar9;
        uStack_d0 = dVar5;
        if (pdVar16 == (double *)0x0) {
          uVar17 = 0x40;
          pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
          dVar14 = DAT_14c8463d8;
          *pdVar16 = DAT_14c8463d0;
          pdVar16[1] = dVar14;
          dVar14 = DAT_14c8463e8;
          pdVar16[2] = DAT_14c8463e0;
          pdVar16[3] = dVar14;
          dVar14 = DAT_14c846500;
          pdVar16[4] = DAT_14c8464f8;
          pdVar16[5] = dVar14;
          dVar14 = DAT_14c846508;
          pdVar16[6] = DAT_14c846508;
          plVar13[0x45] = (longlong)pdVar16;
        }
        auVar8._8_4_ = (int)-(ulonglong)(dVar1 != pdVar16[1]);
        auVar8._0_8_ = -(ulonglong)((double)pcVar11 != *pdVar16);
        auVar8._12_4_ = (int)(-(ulonglong)(dVar1 != pdVar16[1]) >> 0x20);
        iVar12 = movmskpd(SUB84(dVar14,0),auVar8);
        auVar10._8_4_ = (int)-(ulonglong)(dVar5 != pdVar16[3]);
        auVar10._0_8_ = -(ulonglong)(dVar9 != pdVar16[2]);
        auVar10._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar16[3]) >> 0x20);
        uVar18 = movmskpd(uVar17,auVar10);
        if ((uVar18 & 0x3fffffff) != 0 || iVar12 != 0) {
          *(undefined4 *)(pdVar16 + 2) = (undefined4)local_d8;
          *(undefined4 *)((longlong)pdVar16 + 0x14) = local_d8._4_4_;
          *(undefined4 *)(pdVar16 + 3) = (undefined4)uStack_d0;
          *(undefined4 *)((longlong)pdVar16 + 0x1c) = uStack_d0._4_4_;
          *(undefined4 *)pdVar16 = (undefined4)local_e8;
          *(undefined4 *)((longlong)pdVar16 + 4) = local_e8._4_4_;
          *(undefined4 *)(pdVar16 + 1) = (undefined4)uStack_e0;
          *(undefined4 *)((longlong)pdVar16 + 0xc) = uStack_e0._4_4_;
          FUN_1448052ee(&local_e8,&local_c8);
          pdVar16[6] = local_b8;
          pdVar16[4] = local_c8;
          pdVar16[5] = dStack_c0;
        }
        dVar1 = pdVar16[5];
        dVar9 = (double)FUN_144719204(SUB84(pdVar16[4],0),0);
        dVar14 = (double)FUN_144719204(SUB84(dVar1,0),0);
        dVar1 = sin(dVar9 * 0.017453292519943295);
        dVar9 = cos(dVar9 * 0.017453292519943295);
        dVar5 = sin(dVar14 * 0.017453292519943295);
        dVar14 = cos(dVar14 * 0.017453292519943295);
        if (dVar3 * dVar1 + dVar7 * dVar6 * dVar14 * dVar9 + dVar4 * dVar6 * dVar5 * dVar9 < 0.0) {
          local_1a0 = 0xbff0000000000000;
          local_198 = 0x3ff0000000000000;
          local_190 = 0x3ff0000000000000;
          (**(code **)(*plVar13 + 0x478))(plVar13);
        }
      }
      goto LAB_14084c660;
    }
  }
  plVar13 = (longlong *)0x0;
LAB_14084c660:
  if ((local_b0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return plVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14084c86a FUN_14084c86a body=3029 status=ok
// SIG undefined FUN_14084c86a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14084c86a(longlong *param_1,double *param_2,double *param_3,undefined1 (*param_4) [16]
                       )

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
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
  char cVar18;
  uint uVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 unaff_RBP;
  ulonglong uVar24;
  int iVar25;
  ulonglong uVar26;
  int iVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  float fVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  float fVar48;
  float local_1f4;
  double dStack_180;
  
  auVar30 = divpd(*param_4,_DAT_1499387d0);
  auVar35._8_8_ = 0;
  auVar35._0_8_ = *(double *)param_4[1];
  auVar35 = divpd(auVar35,_DAT_1499387d0);
  auVar30 = roundpd(auVar30,auVar30,3);
  auVar35 = roundpd(auVar35,auVar35,3);
  dVar41 = (*(double *)*param_4 - auVar30._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar45 = (*(double *)(*param_4 + 8) - auVar30._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar47 = (*(double *)param_4[1] - auVar35._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar7 = (0.0 - auVar35._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar37 = sin(dVar41);
  dVar5 = sin(dVar45);
  dVar38 = sin(dVar47);
  sin(dVar7);
  dVar41 = cos(dVar41);
  dVar45 = cos(dVar45);
  dVar47 = cos(dVar47);
  cos(dVar7);
  local_1f4 = DAT_14c7638f0;
  if (*param_2 < (double)DAT_14c7638f0) {
    local_1f4 = (float)*param_2;
  }
  iVar25 = (int)param_1[1];
  uVar24 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (0 < (longlong)iVar25) {
    dVar12 = -(dVar37 * dVar45 * dVar38) + dVar5 * dVar41 * dVar47;
    dVar13 = dVar37 * dVar5 * dVar38 + dVar45 * dVar41 * dVar47;
    dVar7 = dVar37 * dVar5 * dVar47 - dVar45 * dVar41 * dVar38;
    dVar5 = -(dVar37 * dVar45 * dVar47) - dVar5 * dVar41 * dVar38;
    dVar32 = dVar7 * 0.0 - dVar5 * 1.0;
    dVar36 = dVar5 * 0.0 - dVar12 * 0.0;
    dVar38 = dVar7 * 1.0 - dVar5 * 0.0;
    dVar40 = dVar5 * 0.0 - dVar12 * 1.0;
    dVar45 = dVar7 * 0.0 - dVar5 * 0.0;
    dVar46 = dVar5 * 1.0 - dVar12 * 0.0;
    dVar37 = dVar12 * 1.0 - dVar7 * 0.0;
    dVar41 = dVar12 * 0.0 - dVar7 * 0.0;
    dVar47 = dVar12 * 0.0 - dVar7 * 1.0;
    dVar36 = dVar36 + dVar36;
    dVar37 = dVar37 + dVar37;
    dVar32 = dVar32 + dVar32;
    dVar40 = dVar40 + dVar40;
    dVar41 = dVar41 + dVar41;
    dVar38 = dVar38 + dVar38;
    dVar46 = dVar46 + dVar46;
    dVar47 = dVar47 + dVar47;
    dVar45 = dVar45 + dVar45;
    dVar28 = dVar13 * dVar32 + 0.0 + (dVar37 * dVar7 - dVar5 * dVar36);
    dVar14 = (dVar32 * dVar5 - dVar12 * dVar37) + dVar13 * dVar36 + 1.0;
    dVar37 = (dVar36 * dVar12 - dVar32 * dVar7) + dVar13 * dVar37 + 0.0;
    iVar27 = -iVar25;
    uVar26 = (longlong)iVar25;
    do {
      iVar25 = *(int *)(*param_1 + -4 + uVar26 * 8);
      if ((((iVar25 == 0) || (uVar19 = *(uint *)(*param_1 + -8 + uVar26 * 8), (int)uVar19 < 0)) ||
          (DAT_14c9647dc <= (int)uVar19)) ||
         (((puVar23 = (undefined8 *)
                      ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
           puVar23 == (undefined8 *)0x0 || (*(int *)(puVar23 + 2) != iVar25)) ||
          ((*(uint *)(puVar23 + 1) & 0x10200000) != 0)))) {
LAB_14084d372:
        uVar19 = *(uint *)(param_1 + 1);
        if (uVar26 != uVar19) {
          iVar25 = iVar27 + uVar19;
          if (0 < iVar25) {
            iVar25 = 1;
          }
          memmove((void *)(*param_1 + uVar26 * 8 + -8),
                  (void *)(*param_1 + (longlong)(int)(uVar19 - iVar25) * 8),(longlong)iVar25 << 3);
          uVar19 = *(uint *)(param_1 + 1);
        }
        *(uint *)(param_1 + 1) = uVar19 - 1;
      }
      else {
        if ((*(uint *)(puVar23 + 1) & 0x10200000) == 0) {
          uVar22 = *puVar23;
        }
        else {
          uVar22 = 0;
        }
        cVar18 = FUN_14084d440(uVar22);
        if (cVar18 != '\0') goto LAB_14084d372;
        iVar25 = *(int *)(*param_1 + -4 + uVar26 * 8);
        if ((iVar25 == 0) || (uVar19 = *(uint *)(*param_1 + -8 + uVar26 * 8), (int)uVar19 < 0)) {
LAB_14084d3c3:
          lVar20 = 0;
        }
        else {
          lVar20 = 0;
          if ((int)uVar19 < DAT_14c9647dc) {
            plVar21 = (longlong *)
                      ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
            if (((plVar21 == (longlong *)0x0) || ((int)plVar21[2] != iVar25)) ||
               ((*(uint *)(plVar21 + 1) & 0x10200000) != 0)) goto LAB_14084d3c3;
            lVar20 = *plVar21;
          }
        }
        dVar15 = *(double *)(lVar20 + 0x240);
        dVar16 = *(double *)(lVar20 + 0x248);
        dVar17 = *(double *)(lVar20 + 0x250);
        dVar32 = *(double *)(lVar20 + 600);
        dVar36 = *(double *)(lVar20 + 600);
        dVar29 = dVar15 * 0.0 - dVar16 * 1.0;
        dVar31 = dVar16 * 0.0 - dVar17 * 0.0;
        dVar33 = dVar17 * 1.0 - dVar15 * 0.0;
        dVar31 = dVar31 + dVar31;
        dVar33 = dVar33 + dVar33;
        dVar29 = dVar29 + dVar29;
        auVar30._8_4_ = SUB84(dVar36,0);
        auVar30._0_8_ = dVar32;
        auVar30._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
        dVar6 = dVar29 * dVar32 + 0.0 + (dVar33 * dVar15 - dVar31 * dVar16);
        dVar39 = (dVar29 * dVar16 - dVar33 * dVar17) + dVar32 * dVar31 + 1.0;
        dVar29 = (dVar17 * dVar31 - dVar15 * dVar29) + dVar36 * dVar33 + 0.0;
        dVar36 = dVar28 * dVar6 + dVar14 * dVar39 + dVar37 * dVar29;
        if (1e-08 < ABS(dVar36)) {
          dVar31 = *(double *)(lVar20 + 0x270);
          dVar33 = param_3[2];
          dVar1 = *(double *)(lVar20 + 0x260);
          dVar2 = *(double *)(lVar20 + 0x268);
          dVar34 = *param_3;
          dVar3 = param_3[1];
          fVar48 = (float)(((dVar31 - dVar33) * dVar6 +
                           (dVar1 - dVar34) * dVar39 + (dVar2 - dVar3) * dVar29) / dVar36);
          if (ABS(fVar48) <= local_1f4) {
            dVar44 = dVar15 * 1.0 - dVar16 * 0.0;
            dVar11 = dVar16 * 0.0 - dVar17 * 1.0;
            dVar43 = dVar17 * 0.0 - dVar15 * 0.0;
            dVar44 = dVar44 + dVar44;
            dStack_180 = auVar30._8_8_;
            dVar11 = dVar11 + dVar11;
            dVar43 = dVar43 + dVar43;
            dVar8 = (double)fVar48;
            dVar10 = (dVar37 * dVar8 + dVar3) - dVar2;
            dVar9 = (dVar8 * dVar14 + dVar34) - dVar1;
            dVar8 = (dVar28 * dVar8 + dVar33) - dVar31;
            if ((double)(float)*(double *)(lVar20 + 0x2d8) <
                ABS((dVar32 * dVar44 + 0.0 + (dVar43 * dVar15 - dVar16 * dVar11)) * dVar8 +
                    ((dVar44 * dVar16 - dVar17 * dVar43) + dVar32 * dVar11 + 0.0) * dVar9 +
                    ((dVar11 * dVar17 - dVar44 * dVar15) + dStack_180 * dVar43 + 1.0) * dVar10))
            goto LAB_14084d222;
            dVar44 = dVar15 * 0.0 - dVar16 * 0.0;
            dVar11 = dVar16 * 1.0 - dVar17 * 0.0;
            dVar43 = dVar17 * 0.0 + dVar15 * -1.0;
            dVar11 = dVar11 + dVar11;
            dVar43 = dVar43 + dVar43;
            dVar44 = dVar44 + dVar44;
            if ((double)(float)*(double *)(lVar20 + 0x2e0) <
                ABS((dVar44 * dVar32 + 1.0 + (dVar43 * dVar15 - dVar11 * dVar16)) * dVar8 +
                    ((dVar44 * dVar16 - dVar43 * dVar17) + dVar32 * dVar11 + 0.0) * dVar9 +
                    ((dVar17 * dVar11 - dVar15 * dVar44) + dStack_180 * dVar43 + 0.0) * dVar10))
            goto LAB_14084d222;
LAB_14084d3ca:
            uVar24 = 0;
            break;
          }
LAB_14084d222:
          fVar48 = DAT_14c7638f0;
          if (*(double *)(lVar20 + 0x2d0) < (double)DAT_14c7638f0) {
            fVar48 = (float)*(double *)(lVar20 + 0x2d0);
          }
          fVar42 = (float)(((dVar33 - dVar31) * dVar28 +
                           (dVar34 - dVar1) * dVar14 + (dVar3 - dVar2) * dVar37) / dVar36);
          if (ABS(fVar42) <= fVar48) {
            dVar32 = (double)fVar42;
            dVar33 = (dVar31 + dVar6 * dVar32) - dVar33;
            dVar3 = (dVar2 + dVar29 * dVar32) - dVar3;
            dVar34 = (dVar1 + dVar39 * dVar32) - dVar34;
            if ((ABS((dVar13 * dVar38 + 0.0 + (dVar41 * dVar7 - dVar5 * dVar40)) * dVar33 +
                     ((dVar38 * dVar5 - dVar12 * dVar41) + dVar13 * dVar40 + 0.0) * dVar34 +
                     ((dVar40 * dVar12 - dVar38 * dVar7) + dVar13 * dVar41 + 1.0) * dVar3) <=
                 (double)(float)param_2[1]) &&
               (ABS(dVar33 * (dVar13 * dVar45 + 1.0 + (dVar47 * dVar7 - dVar5 * dVar46)) +
                    dVar34 * ((dVar45 * dVar5 - dVar12 * dVar47) + dVar13 * dVar46 + 0.0) +
                    dVar3 * ((dVar46 * dVar12 - dVar45 * dVar7) + dVar13 * dVar47 + 0.0)) <=
                (double)(float)param_2[2])) goto LAB_14084d3ca;
          }
        }
      }
      iVar27 = iVar27 + 1;
      bVar4 = 1 < uVar26;
      uVar26 = uVar26 - 1;
    } while (bVar4);
  }
  return uVar24 & 0xffffffff;
}



// FUNCTION 14084d440 FUN_14084d440 body=234 status=ok
// SIG undefined FUN_14084d440(void)

bool FUN_14084d440(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  float extraout_XMM0_Da;
  
  if ((*(longlong *)(param_1 + 0x308) == 0) || (*(float *)(param_1 + 700) <= 0.0)) {
    return false;
  }
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_1);
  }
  if (*(longlong *)(lVar4 + 0x1f0) == 0) {
    plVar5 = (longlong *)(lVar4 + 0x458);
  }
  else {
    plVar5 = (longlong *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
  }
  lVar4 = *plVar5;
  lVar1 = *(longlong *)(param_1 + 0x308);
  if (lVar1 != 0) {
    uVar3 = (uint)lVar1;
    if ((int)(uVar3 & 0xffffff) < *(int *)(lVar4 + 0x10)) {
      lVar6 = lVar4 + 0x18;
      if (*(longlong *)(lVar4 + 0x28) != 0) {
        lVar6 = *(longlong *)(lVar4 + 0x28);
      }
      if ((*(uint *)(lVar6 + (ulonglong)((uVar3 & 0xffffff) >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0)
      {
        lVar2 = *(longlong *)(lVar4 + 8);
        lVar7 = (ulonglong)(uVar3 & 0xffffff) * 0x70;
        lVar6 = lVar2 + lVar7;
        if (*(char *)(lVar2 + 1 + lVar7) == '\x04') {
          lVar6 = 0;
        }
        if (*(longlong *)(lVar2 + 0x60 + lVar7) != lVar1) {
          lVar6 = 0;
        }
        goto LAB_14084d4f2;
      }
    }
  }
  lVar6 = 0;
LAB_14084d4f2:
  FUN_14084d52a(lVar4,lVar6);
  return *(float *)(param_1 + 0x2b8) <= extraout_XMM0_Da &&
         extraout_XMM0_Da != *(float *)(param_1 + 0x2b8);
}



// FUNCTION 14084d52a FUN_14084d52a body=67 status=ok
// SIG undefined FUN_14084d52a(void)

undefined8 FUN_14084d52a(longlong param_1,longlong param_2)

{
  double dVar1;
  
  if (param_2 != 0) {
    if ((*(char *)(param_2 + 1) == '\x01') || (*(char *)(param_2 + 1) == '\x03')) {
      dVar1 = (double)*(float *)(param_2 + 4) -
              (*(double *)(param_2 + 8) - *(double *)(param_1 + 0x140));
    }
    else {
      dVar1 = (double)*(float *)(param_2 + 4) - *(double *)(param_2 + 8);
    }
    return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
  }
  return 0xbf800000;
}



// FUNCTION 14084d56e FUN_14084d56e body=6476 status=ok
// SIG undefined FUN_14084d56e(void)

longlong FUN_14084d56e(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong lVar24;
  longlong *plVar25;
  uint uVar26;
  int iVar27;
  longlong *plVar28;
  int iVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_428 [32];
  longlong *local_408;
  longlong local_400;
  int local_3f4;
  undefined8 local_3f0;
  undefined4 *local_3e8;
  longlong *local_3e0;
  longlong *local_3d8;
  longlong local_3d0;
  longlong *local_3c8;
  longlong *local_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 local_3a8;
  undefined8 local_398;
  longlong local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined2 local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  longlong lStack_358;
  longlong *local_348;
  longlong local_338 [4];
  undefined8 local_318;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_428;
  plVar16 = (longlong *)(param_1 + 0x30);
  lVar7 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x48))(plVar16);
  if ((lVar7 == 0) || ((*(byte *)(lVar7 + 0x155) & 0x20) != 0)) {
    lVar7 = 0;
    goto LAB_14084e94f;
  }
  plVar13 = (longlong *)(param_1 + 0x60);
  uVar26 = *(uint *)(param_1 + 0x68);
  local_400 = param_1;
  local_3d0 = lVar7;
  if ((int)uVar26 < DAT_14c7638e8) {
    if (DAT_14c7638e4 == '\x01') {
      iVar12 = *(int *)(param_1 + 0x58);
      if ((longlong)iVar12 < 1) goto LAB_14084ea8f;
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)iVar12 * 8);
      if ((DAT_14c950c29 == 1) && (lVar7 != 0)) {
        FUN_1456cec3c(lVar7);
        iVar12 = *(int *)(param_1 + 0x58);
      }
      bVar6 = DAT_14c950c29;
      *(int *)(param_1 + 0x58) = iVar12 + -1;
      if ((lVar7 != 0) && ((bVar6 & 1) != 0)) {
        FUN_1456cec3c(lVar7);
      }
      iVar12 = *(int *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x68) = iVar12 + 1U;
      if (*(uint *)(param_1 + 0x6c) < iVar12 + 1U) {
        FUN_1488382ce(plVar13,iVar12);
      }
      *(longlong *)(*plVar13 + (longlong)iVar12 * 8) = lVar7;
      if ((DAT_14c950c29 != 1) || (lVar7 == 0)) goto LAB_14084e8b7;
    }
    else {
LAB_14084ea8f:
      FUN_14058b40c(lVar7,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                   );
      local_398 = FUN_1408502ea();
      local_348 = (longlong *)0x0;
      local_318 = 0;
      local_388 = 0;
      uStack_380 = 0;
      local_378 = 0;
      local_370 = 0;
      uStack_368 = 0;
      local_360 = 0;
      lStack_358 = 0;
      local_390 = lVar7;
      lVar7 = FUN_1402710dd(&local_398);
      if (lStack_358 != 0) {
        plVar11 = local_348;
        if (local_348 == (longlong *)0x0) {
          plVar11 = local_338;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      lVar21 = local_400;
      if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar7);
      }
      iVar12 = *(int *)(lVar21 + 0x68);
      *(uint *)(lVar21 + 0x68) = iVar12 + 1U;
      if (*(uint *)(lVar21 + 0x6c) < iVar12 + 1U) {
        FUN_1488382ce(plVar13,iVar12);
      }
      *(longlong *)(*plVar13 + (longlong)iVar12 * 8) = lVar7;
      if ((lVar7 == 0) || (DAT_14c950c29 == 0)) goto LAB_14084e8b7;
    }
    FUN_1456cec3c(lVar7);
  }
  else {
    local_3f0 = param_2;
    local_3e8 = param_3;
    if (1 < (int)uVar26) {
      lVar7 = *plVar13;
      local_3e0 = plVar13;
      local_3d8 = plVar16;
      memset(&local_388,0,0x2f0);
      local_390 = lVar7 + (ulonglong)uVar26 * 8 + -8;
      local_398 = lVar7;
      fVar31 = logf((float)(int)uVar26);
      local_388 = CONCAT44(local_388._4_4_,(int)(longlong)(fVar31 + fVar31));
      plVar11 = &local_398;
      do {
        plVar13 = (longlong *)*plVar11;
        plVar16 = (longlong *)plVar11[1];
        iVar12 = (int)plVar11[2];
        iVar17 = (int)((ulonglong)((longlong)plVar16 - (longlong)plVar13) >> 3);
        uVar26 = iVar17 + 1;
        plVar28 = plVar16;
        plVar25 = plVar13;
        plVar15 = plVar13;
        if (iVar12 != 0) {
LAB_14084d6a7:
          if (8 < (int)uVar26) {
            lVar7 = plVar25[uVar26 >> 1];
            plVar25[uVar26 >> 1] = *plVar25;
            *plVar25 = lVar7;
            plVar18 = plVar16 + 1;
            plVar15 = plVar25;
            local_3f4 = iVar12;
            local_3c8 = plVar13;
            local_3c0 = plVar28;
            do {
              plVar13 = plVar15 + 1;
              plVar28 = plVar15 + 1;
              do {
                plVar15 = plVar28;
                plVar8 = plVar13;
                if (plVar16 < plVar15) break;
                lVar7 = *plVar15;
                lVar21 = *plVar25;
                fVar31 = 3.4028235e+38;
                if (*(longlong *)(lVar21 + 0x308) != 0) {
                  lVar9 = *(longlong *)(lVar21 + 0xb0);
                  if (lVar9 == 0) {
                    lVar9 = FUN_1448abda6(lVar21);
                  }
                  if (*(longlong *)(lVar9 + 0x1f0) == 0) {
                    plVar13 = (longlong *)(lVar9 + 0x458);
                  }
                  else {
                    plVar13 = (longlong *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
                  }
                  lVar9 = *(longlong *)(lVar21 + 0x308);
                  fVar31 = -1.0;
                  if (lVar9 != 0) {
                    lVar2 = *plVar13;
                    uVar26 = (uint)lVar9;
                    fVar31 = -1.0;
                    if ((int)(uVar26 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
                      lVar23 = lVar2 + 0x18;
                      if (*(longlong *)(lVar2 + 0x28) != 0) {
                        lVar23 = *(longlong *)(lVar2 + 0x28);
                      }
                      fVar31 = -1.0;
                      if ((*(uint *)(lVar23 + (ulonglong)((uVar26 & 0xffffff) >> 5) * 4) >>
                           (uVar26 & 0x1f) & 1) != 0) {
                        lVar23 = *(longlong *)(lVar2 + 8);
                        lVar24 = (ulonglong)(uVar26 & 0xffffff) * 0x70;
                        fVar31 = -1.0;
                        lVar14 = lVar23 + lVar24;
                        if ((lVar14 != 0) &&
                           (fVar31 = -1.0, *(longlong *)(lVar23 + 0x60 + lVar24) == lVar9)) {
                          cVar1 = *(char *)(lVar23 + 1 + lVar24);
                          fVar31 = -1.0;
                          if (cVar1 != '\x04') {
                            if (cVar1 == '\x01') {
                              fVar31 = (float)(*(double *)(lVar14 + 8) - *(double *)(lVar2 + 0x140))
                              ;
                            }
                            else if (cVar1 == '\x03') {
                              fVar31 = 0.0;
                            }
                            else {
                              fVar31 = (float)*(double *)(lVar14 + 8);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                fVar32 = 3.4028235e+38;
                if (*(longlong *)(lVar7 + 0x308) != 0) {
                  lVar9 = *(longlong *)(lVar7 + 0xb0);
                  if (lVar9 == 0) {
                    lVar9 = FUN_1448abda6(lVar7);
                  }
                  if (*(longlong *)(lVar9 + 0x1f0) == 0) {
                    plVar13 = (longlong *)(lVar9 + 0x458);
                  }
                  else {
                    plVar13 = (longlong *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
                  }
                  lVar9 = *(longlong *)(lVar7 + 0x308);
                  fVar32 = -1.0;
                  if (lVar9 != 0) {
                    lVar2 = *plVar13;
                    uVar26 = (uint)lVar9;
                    fVar32 = -1.0;
                    if ((int)(uVar26 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
                      lVar23 = lVar2 + 0x18;
                      if (*(longlong *)(lVar2 + 0x28) != 0) {
                        lVar23 = *(longlong *)(lVar2 + 0x28);
                      }
                      fVar32 = -1.0;
                      if ((*(uint *)(lVar23 + (ulonglong)((uVar26 & 0xffffff) >> 5) * 4) >>
                           (uVar26 & 0x1f) & 1) != 0) {
                        lVar23 = *(longlong *)(lVar2 + 8);
                        lVar24 = (ulonglong)(uVar26 & 0xffffff) * 0x70;
                        fVar32 = -1.0;
                        lVar14 = lVar23 + lVar24;
                        if ((lVar14 != 0) &&
                           (fVar32 = -1.0, *(longlong *)(lVar23 + 0x60 + lVar24) == lVar9)) {
                          cVar1 = *(char *)(lVar23 + 1 + lVar24);
                          fVar32 = -1.0;
                          if (cVar1 != '\x04') {
                            if (cVar1 == '\x01') {
                              fVar32 = (float)(*(double *)(lVar14 + 8) - *(double *)(lVar2 + 0x140))
                              ;
                            }
                            else if (cVar1 == '\x03') {
                              fVar32 = 0.0;
                            }
                            else {
                              fVar32 = (float)*(double *)(lVar14 + 8);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                bVar30 = *(float *)(lVar21 + 0x31c) <= *(float *)(lVar7 + 0x31c) &&
                         *(float *)(lVar7 + 0x31c) != *(float *)(lVar21 + 0x31c);
                if (fVar31 != fVar32) {
                  bVar30 = fVar31 < fVar32;
                }
                if (NAN(fVar31) || NAN(fVar32)) {
                  bVar30 = fVar31 < fVar32;
                }
                plVar13 = plVar8 + 1;
                plVar28 = plVar15 + 1;
              } while (!bVar30);
              plVar13 = plVar18 + -2;
              do {
                plVar22 = plVar18;
                plVar28 = plVar13;
                plVar18 = plVar22 + -1;
                if (plVar18 <= plVar25) break;
                lVar7 = *plVar25;
                lVar21 = *plVar18;
                fVar31 = 3.4028235e+38;
                if (*(longlong *)(lVar21 + 0x308) != 0) {
                  lVar9 = *(longlong *)(lVar21 + 0xb0);
                  if (lVar9 == 0) {
                    local_408 = plVar11;
                    lVar9 = FUN_1448abda6(lVar21);
                    plVar11 = local_408;
                  }
                  if (*(longlong *)(lVar9 + 0x1f0) == 0) {
                    plVar13 = (longlong *)(lVar9 + 0x458);
                  }
                  else {
                    plVar13 = (longlong *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
                  }
                  lVar9 = *(longlong *)(lVar21 + 0x308);
                  fVar31 = -1.0;
                  if (lVar9 != 0) {
                    lVar2 = *plVar13;
                    uVar26 = (uint)lVar9;
                    fVar31 = -1.0;
                    if ((int)(uVar26 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
                      lVar23 = lVar2 + 0x18;
                      if (*(longlong *)(lVar2 + 0x28) != 0) {
                        lVar23 = *(longlong *)(lVar2 + 0x28);
                      }
                      fVar31 = -1.0;
                      if ((*(uint *)(lVar23 + (ulonglong)((uVar26 & 0xffffff) >> 5) * 4) >>
                           (uVar26 & 0x1f) & 1) != 0) {
                        lVar23 = *(longlong *)(lVar2 + 8);
                        lVar24 = (ulonglong)(uVar26 & 0xffffff) * 0x70;
                        fVar31 = -1.0;
                        lVar14 = lVar23 + lVar24;
                        if ((lVar14 != 0) &&
                           (fVar31 = -1.0, *(longlong *)(lVar23 + 0x60 + lVar24) == lVar9)) {
                          cVar1 = *(char *)(lVar23 + 1 + lVar24);
                          fVar31 = -1.0;
                          if (cVar1 != '\x04') {
                            if (cVar1 == '\x01') {
                              fVar31 = (float)(*(double *)(lVar14 + 8) - *(double *)(lVar2 + 0x140))
                              ;
                            }
                            else if (cVar1 == '\x03') {
                              fVar31 = 0.0;
                            }
                            else {
                              fVar31 = (float)*(double *)(lVar14 + 8);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                fVar32 = 3.4028235e+38;
                if (*(longlong *)(lVar7 + 0x308) != 0) {
                  lVar9 = *(longlong *)(lVar7 + 0xb0);
                  if (lVar9 == 0) {
                    local_408 = plVar11;
                    lVar9 = FUN_1448abda6(lVar7);
                    plVar11 = local_408;
                  }
                  if (*(longlong *)(lVar9 + 0x1f0) == 0) {
                    plVar13 = (longlong *)(lVar9 + 0x458);
                  }
                  else {
                    plVar13 = (longlong *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
                  }
                  lVar9 = *(longlong *)(lVar7 + 0x308);
                  fVar32 = -1.0;
                  if (lVar9 != 0) {
                    lVar2 = *plVar13;
                    uVar26 = (uint)lVar9;
                    fVar32 = -1.0;
                    if ((int)(uVar26 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
                      lVar23 = lVar2 + 0x18;
                      if (*(longlong *)(lVar2 + 0x28) != 0) {
                        lVar23 = *(longlong *)(lVar2 + 0x28);
                      }
                      fVar32 = -1.0;
                      if ((*(uint *)(lVar23 + (ulonglong)((uVar26 & 0xffffff) >> 5) * 4) >>
                           (uVar26 & 0x1f) & 1) != 0) {
                        lVar23 = *(longlong *)(lVar2 + 8);
                        lVar24 = (ulonglong)(uVar26 & 0xffffff) * 0x70;
                        fVar32 = -1.0;
                        lVar14 = lVar23 + lVar24;
                        if ((lVar14 != 0) &&
                           (fVar32 = -1.0, *(longlong *)(lVar23 + 0x60 + lVar24) == lVar9)) {
                          cVar1 = *(char *)(lVar23 + 1 + lVar24);
                          fVar32 = -1.0;
                          if (cVar1 != '\x04') {
                            if (cVar1 == '\x01') {
                              fVar32 = (float)(*(double *)(lVar14 + 8) - *(double *)(lVar2 + 0x140))
                              ;
                            }
                            else if (cVar1 == '\x03') {
                              fVar32 = 0.0;
                            }
                            else {
                              fVar32 = (float)*(double *)(lVar14 + 8);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                bVar30 = *(float *)(lVar21 + 0x31c) <= *(float *)(lVar7 + 0x31c) &&
                         *(float *)(lVar7 + 0x31c) != *(float *)(lVar21 + 0x31c);
                if (fVar31 != fVar32) {
                  bVar30 = fVar31 < fVar32;
                }
                if (NAN(fVar31) || NAN(fVar32)) {
                  bVar30 = fVar31 < fVar32;
                }
                plVar13 = plVar28 + -1;
              } while (!bVar30);
              if (plVar18 < plVar15) goto code_r0x00014084dae5;
              lVar7 = *plVar15;
              *plVar15 = *plVar18;
              *plVar18 = lVar7;
            } while( true );
          }
          for (; plVar15 = plVar25, plVar13 = plVar25, plVar25 < plVar16; plVar16 = plVar16 + -1) {
            while (plVar28 = plVar15, plVar13 = plVar13 + 1, plVar13 <= plVar16) {
              lVar7 = *plVar13;
              lVar21 = *plVar28;
              fVar31 = 3.4028235e+38;
              if (*(longlong *)(lVar21 + 0x308) != 0) {
                lVar9 = *(longlong *)(lVar21 + 0xb0);
                if (lVar9 == 0) {
                  lVar9 = FUN_1448abda6(lVar21);
                }
                if (*(longlong *)(lVar9 + 0x1f0) == 0) {
                  plVar15 = (longlong *)(lVar9 + 0x458);
                }
                else {
                  plVar15 = (longlong *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
                }
                lVar9 = *(longlong *)(lVar21 + 0x308);
                fVar31 = -1.0;
                if (lVar9 != 0) {
                  lVar2 = *plVar15;
                  uVar26 = (uint)lVar9;
                  fVar31 = -1.0;
                  if ((int)(uVar26 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
                    lVar23 = lVar2 + 0x18;
                    if (*(longlong *)(lVar2 + 0x28) != 0) {
                      lVar23 = *(longlong *)(lVar2 + 0x28);
                    }
                    fVar31 = -1.0;
                    if ((*(uint *)(lVar23 + (ulonglong)((uVar26 & 0xffffff) >> 5) * 4) >>
                         (uVar26 & 0x1f) & 1) != 0) {
                      lVar23 = *(longlong *)(lVar2 + 8);
                      lVar24 = (ulonglong)(uVar26 & 0xffffff) * 0x70;
                      fVar31 = -1.0;
                      lVar14 = lVar23 + lVar24;
                      if ((lVar14 != 0) &&
                         (fVar31 = -1.0, *(longlong *)(lVar23 + 0x60 + lVar24) == lVar9)) {
                        cVar1 = *(char *)(lVar23 + 1 + lVar24);
                        fVar31 = -1.0;
                        if (cVar1 != '\x04') {
                          if (cVar1 == '\x01') {
                            fVar31 = (float)(*(double *)(lVar14 + 8) - *(double *)(lVar2 + 0x140));
                          }
                          else if (cVar1 == '\x03') {
                            fVar31 = 0.0;
                          }
                          else {
                            fVar31 = (float)*(double *)(lVar14 + 8);
                          }
                        }
                      }
                    }
                  }
                }
              }
              fVar32 = 3.4028235e+38;
              if (*(longlong *)(lVar7 + 0x308) != 0) {
                lVar9 = *(longlong *)(lVar7 + 0xb0);
                if (lVar9 == 0) {
                  lVar9 = FUN_1448abda6(lVar7);
                }
                if (*(longlong *)(lVar9 + 0x1f0) == 0) {
                  plVar15 = (longlong *)(lVar9 + 0x458);
                }
                else {
                  plVar15 = (longlong *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
                }
                lVar9 = *(longlong *)(lVar7 + 0x308);
                fVar32 = -1.0;
                if (lVar9 != 0) {
                  lVar2 = *plVar15;
                  uVar26 = (uint)lVar9;
                  fVar32 = -1.0;
                  if ((int)(uVar26 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
                    lVar23 = lVar2 + 0x18;
                    if (*(longlong *)(lVar2 + 0x28) != 0) {
                      lVar23 = *(longlong *)(lVar2 + 0x28);
                    }
                    fVar32 = -1.0;
                    if ((*(uint *)(lVar23 + (ulonglong)((uVar26 & 0xffffff) >> 5) * 4) >>
                         (uVar26 & 0x1f) & 1) != 0) {
                      lVar23 = *(longlong *)(lVar2 + 8);
                      lVar24 = (ulonglong)(uVar26 & 0xffffff) * 0x70;
                      fVar32 = -1.0;
                      lVar14 = lVar23 + lVar24;
                      if ((lVar14 != 0) &&
                         (fVar32 = -1.0, *(longlong *)(lVar23 + 0x60 + lVar24) == lVar9)) {
                        cVar1 = *(char *)(lVar23 + 1 + lVar24);
                        fVar32 = -1.0;
                        if (cVar1 != '\x04') {
                          if (cVar1 == '\x01') {
                            fVar32 = (float)(*(double *)(lVar14 + 8) - *(double *)(lVar2 + 0x140));
                          }
                          else if (cVar1 == '\x03') {
                            fVar32 = 0.0;
                          }
                          else {
                            fVar32 = (float)*(double *)(lVar14 + 8);
                          }
                        }
                      }
                    }
                  }
                }
              }
              bVar30 = *(float *)(lVar21 + 0x31c) <= *(float *)(lVar7 + 0x31c) &&
                       *(float *)(lVar7 + 0x31c) != *(float *)(lVar21 + 0x31c);
              if (fVar31 != fVar32) {
                bVar30 = fVar31 < fVar32;
              }
              if (NAN(fVar31) || NAN(fVar32)) {
                bVar30 = fVar31 < fVar32;
              }
              plVar15 = plVar13;
              if (!bVar30) {
                plVar15 = plVar28;
              }
            }
            lVar7 = *plVar28;
            *plVar28 = *plVar16;
            *plVar16 = lVar7;
          }
          goto LAB_14084e26f;
        }
LAB_14084ea73:
        if (uVar26 != 0) {
          iVar12 = (iVar17 - (iVar17 + -1 >> 0x1f)) + -1 >> 1;
          iVar17 = iVar12;
joined_r0x00014084e340:
          do {
            iVar27 = iVar12 * 2 + 1;
            if (iVar27 < (int)uVar26) {
              iVar29 = iVar12 * 2 + 2;
              if (iVar29 < (int)uVar26) {
                lVar7 = plVar15[iVar27];
                lVar21 = plVar15[iVar29];
                fVar31 = 3.4028235e+38;
                if (*(longlong *)(lVar21 + 0x308) != 0) {
                  lVar9 = *(longlong *)(lVar21 + 0xb0);
                  if (lVar9 == 0) {
                    local_408 = plVar11;
                    lVar9 = FUN_1448abda6(lVar21);
                    plVar11 = local_408;
                  }
                  if (*(longlong *)(lVar9 + 0x1f0) == 0) {
                    plVar16 = (longlong *)(lVar9 + 0x458);
                  }
                  else {
                    plVar16 = (longlong *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
                  }
                  lVar9 = *(longlong *)(lVar21 + 0x308);
                  fVar31 = -1.0;
                  if (lVar9 != 0) {
                    lVar2 = *plVar16;
                    uVar10 = (uint)lVar9;
                    fVar31 = -1.0;
                    if ((int)(uVar10 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
                      lVar23 = lVar2 + 0x18;
                      if (*(longlong *)(lVar2 + 0x28) != 0) {
                        lVar23 = *(longlong *)(lVar2 + 0x28);
                      }
                      fVar31 = -1.0;
                      if ((*(uint *)(lVar23 + (ulonglong)((uVar10 & 0xffffff) >> 5) * 4) >>
                           (uVar10 & 0x1f) & 1) != 0) {
                        lVar23 = *(longlong *)(lVar2 + 8);
                        lVar24 = (ulonglong)(uVar10 & 0xffffff) * 0x70;
                        fVar31 = -1.0;
                        lVar14 = lVar23 + lVar24;
                        if ((lVar14 != 0) &&
                           (fVar31 = -1.0, *(longlong *)(lVar23 + 0x60 + lVar24) == lVar9)) {
                          cVar1 = *(char *)(lVar23 + 1 + lVar24);
                          fVar31 = -1.0;
                          if (cVar1 != '\x04') {
                            if (cVar1 == '\x01') {
                              fVar31 = (float)(*(double *)(lVar14 + 8) - *(double *)(lVar2 + 0x140))
                              ;
                            }
                            else if (cVar1 == '\x03') {
                              fVar31 = 0.0;
                            }
                            else {
                              fVar31 = (float)*(double *)(lVar14 + 8);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                fVar32 = 3.4028235e+38;
                if (*(longlong *)(lVar7 + 0x308) != 0) {
                  lVar9 = *(longlong *)(lVar7 + 0xb0);
                  if (lVar9 == 0) {
                    local_408 = plVar11;
                    lVar9 = FUN_1448abda6(lVar7);
                    plVar11 = local_408;
                  }
                  if (*(longlong *)(lVar9 + 0x1f0) == 0) {
                    plVar16 = (longlong *)(lVar9 + 0x458);
                  }
                  else {
                    plVar16 = (longlong *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
                  }
                  lVar9 = *(longlong *)(lVar7 + 0x308);
                  fVar32 = -1.0;
                  if (lVar9 != 0) {
                    lVar2 = *plVar16;
                    uVar10 = (uint)lVar9;
                    fVar32 = -1.0;
                    if ((int)(uVar10 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
                      lVar23 = lVar2 + 0x18;
                      if (*(longlong *)(lVar2 + 0x28) != 0) {
                        lVar23 = *(longlong *)(lVar2 + 0x28);
                      }
                      fVar32 = -1.0;
                      if ((*(uint *)(lVar23 + (ulonglong)((uVar10 & 0xffffff) >> 5) * 4) >>
                           (uVar10 & 0x1f) & 1) != 0) {
                        lVar23 = *(longlong *)(lVar2 + 8);
                        lVar24 = (ulonglong)(uVar10 & 0xffffff) * 0x70;
                        fVar32 = -1.0;
                        lVar14 = lVar23 + lVar24;
                        if ((lVar14 != 0) &&
                           (fVar32 = -1.0, *(longlong *)(lVar23 + 0x60 + lVar24) == lVar9)) {
                          cVar1 = *(char *)(lVar23 + 1 + lVar24);
                          fVar32 = -1.0;
                          if (cVar1 != '\x04') {
                            if (cVar1 == '\x01') {
                              fVar32 = (float)(*(double *)(lVar14 + 8) - *(double *)(lVar2 + 0x140))
                              ;
                            }
                            else if (cVar1 == '\x03') {
                              fVar32 = 0.0;
                            }
                            else {
                              fVar32 = (float)*(double *)(lVar14 + 8);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                bVar30 = *(float *)(lVar21 + 0x31c) <= *(float *)(lVar7 + 0x31c) &&
                         *(float *)(lVar7 + 0x31c) != *(float *)(lVar21 + 0x31c);
                if (fVar31 != fVar32) {
                  bVar30 = fVar31 < fVar32;
                }
                if (NAN(fVar31) || NAN(fVar32)) {
                  bVar30 = fVar31 < fVar32;
                }
                if (!bVar30) {
                  iVar27 = iVar29;
                }
              }
              lVar7 = plVar15[iVar27];
              lVar21 = plVar15[iVar12];
              fVar31 = 3.4028235e+38;
              if (*(longlong *)(lVar21 + 0x308) != 0) {
                lVar9 = *(longlong *)(lVar21 + 0xb0);
                if (lVar9 == 0) {
                  local_408 = plVar11;
                  lVar9 = FUN_1448abda6(lVar21);
                  plVar11 = local_408;
                }
                if (*(longlong *)(lVar9 + 0x1f0) == 0) {
                  plVar16 = (longlong *)(lVar9 + 0x458);
                }
                else {
                  plVar16 = (longlong *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
                }
                lVar9 = *(longlong *)(lVar21 + 0x308);
                fVar31 = -1.0;
                if (lVar9 != 0) {
                  lVar2 = *plVar16;
                  uVar10 = (uint)lVar9;
                  fVar31 = -1.0;
                  if ((int)(uVar10 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
                    lVar23 = lVar2 + 0x18;
                    if (*(longlong *)(lVar2 + 0x28) != 0) {
                      lVar23 = *(longlong *)(lVar2 + 0x28);
                    }
                    fVar31 = -1.0;
                    if ((*(uint *)(lVar23 + (ulonglong)((uVar10 & 0xffffff) >> 5) * 4) >>
                         (uVar10 & 0x1f) & 1) != 0) {
                      lVar23 = *(longlong *)(lVar2 + 8);
                      lVar24 = (ulonglong)(uVar10 & 0xffffff) * 0x70;
                      fVar31 = -1.0;
                      lVar14 = lVar23 + lVar24;
                      if ((lVar14 != 0) &&
                         (fVar31 = -1.0, *(longlong *)(lVar23 + 0x60 + lVar24) == lVar9)) {
                        cVar1 = *(char *)(lVar23 + 1 + lVar24);
                        fVar31 = -1.0;
                        if (cVar1 != '\x04') {
                          if (cVar1 == '\x01') {
                            fVar31 = (float)(*(double *)(lVar14 + 8) - *(double *)(lVar2 + 0x140));
                          }
                          else if (cVar1 == '\x03') {
                            fVar31 = 0.0;
                          }
                          else {
                            fVar31 = (float)*(double *)(lVar14 + 8);
                          }
                        }
                      }
                    }
                  }
                }
              }
              fVar32 = 3.4028235e+38;
              if (*(longlong *)(lVar7 + 0x308) != 0) {
                lVar9 = *(longlong *)(lVar7 + 0xb0);
                if (lVar9 == 0) {
                  local_408 = plVar11;
                  lVar9 = FUN_1448abda6(lVar7);
                  plVar11 = local_408;
                }
                if (*(longlong *)(lVar9 + 0x1f0) == 0) {
                  plVar16 = (longlong *)(lVar9 + 0x458);
                }
                else {
                  plVar16 = (longlong *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
                }
                lVar9 = *(longlong *)(lVar7 + 0x308);
                fVar32 = -1.0;
                if (lVar9 != 0) {
                  lVar2 = *plVar16;
                  uVar10 = (uint)lVar9;
                  fVar32 = -1.0;
                  if ((int)(uVar10 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
                    lVar23 = lVar2 + 0x18;
                    if (*(longlong *)(lVar2 + 0x28) != 0) {
                      lVar23 = *(longlong *)(lVar2 + 0x28);
                    }
                    fVar32 = -1.0;
                    if ((*(uint *)(lVar23 + (ulonglong)((uVar10 & 0xffffff) >> 5) * 4) >>
                         (uVar10 & 0x1f) & 1) != 0) {
                      lVar23 = *(longlong *)(lVar2 + 8);
                      lVar24 = (ulonglong)(uVar10 & 0xffffff) * 0x70;
                      fVar32 = -1.0;
                      lVar14 = lVar23 + lVar24;
                      if ((lVar14 != 0) &&
                         (fVar32 = -1.0, *(longlong *)(lVar23 + 0x60 + lVar24) == lVar9)) {
                        cVar1 = *(char *)(lVar23 + 1 + lVar24);
                        fVar32 = -1.0;
                        if (cVar1 != '\x04') {
                          if (cVar1 == '\x01') {
                            fVar32 = (float)(*(double *)(lVar14 + 8) - *(double *)(lVar2 + 0x140));
                          }
                          else if (cVar1 == '\x03') {
                            fVar32 = 0.0;
                          }
                          else {
                            fVar32 = (float)*(double *)(lVar14 + 8);
                          }
                        }
                      }
                    }
                  }
                }
              }
              bVar30 = *(float *)(lVar21 + 0x31c) <= *(float *)(lVar7 + 0x31c) &&
                       *(float *)(lVar7 + 0x31c) != *(float *)(lVar21 + 0x31c);
              if (fVar31 != fVar32) {
                bVar30 = fVar31 < fVar32;
              }
              if (NAN(fVar31) || NAN(fVar32)) {
                bVar30 = fVar31 < fVar32;
              }
              if (bVar30) {
                lVar7 = plVar15[iVar12];
                plVar15[iVar12] = plVar15[iVar27];
                plVar15[iVar27] = lVar7;
                iVar12 = iVar27;
                goto joined_r0x00014084e340;
              }
            }
            bVar30 = iVar17 != 0;
            iVar12 = iVar17 + -1;
            iVar17 = iVar12;
          } while (bVar30);
          if (1 < (int)uVar26) {
            uVar19 = (ulonglong)uVar26;
            lVar7 = *plVar15;
            *plVar15 = plVar15[uVar19 - 1];
            plVar15[uVar19 - 1] = lVar7;
            if (uVar26 != 2) {
              do {
                uVar20 = uVar19 - 1;
                iVar12 = 0;
                iVar27 = 1;
                iVar17 = 0;
                do {
                  iVar12 = iVar12 + 2;
                  iVar29 = iVar27;
                  if ((longlong)iVar12 < (longlong)uVar20) {
                    lVar7 = plVar15[iVar27];
                    lVar21 = plVar15[iVar12];
                    fVar31 = 3.4028235e+38;
                    if (*(longlong *)(lVar21 + 0x308) != 0) {
                      lVar9 = *(longlong *)(lVar21 + 0xb0);
                      if (lVar9 == 0) {
                        lVar9 = FUN_1448abda6(lVar21);
                      }
                      if (*(longlong *)(lVar9 + 0x1f0) == 0) {
                        plVar16 = (longlong *)(lVar9 + 0x458);
                      }
                      else {
                        plVar16 = (longlong *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
                      }
                      lVar9 = *(longlong *)(lVar21 + 0x308);
                      fVar31 = -1.0;
                      if (lVar9 != 0) {
                        lVar2 = *plVar16;
                        uVar26 = (uint)lVar9;
                        fVar31 = -1.0;
                        if ((int)(uVar26 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
                          lVar23 = lVar2 + 0x18;
                          if (*(longlong *)(lVar2 + 0x28) != 0) {
                            lVar23 = *(longlong *)(lVar2 + 0x28);
                          }
                          fVar31 = -1.0;
                          if ((*(uint *)(lVar23 + (ulonglong)((uVar26 & 0xffffff) >> 5) * 4) >>
                               (uVar26 & 0x1f) & 1) != 0) {
                            lVar23 = *(longlong *)(lVar2 + 8);
                            lVar24 = (ulonglong)(uVar26 & 0xffffff) * 0x70;
                            fVar31 = -1.0;
                            lVar14 = lVar23 + lVar24;
                            if ((lVar14 != 0) &&
                               (fVar31 = -1.0, *(longlong *)(lVar23 + 0x60 + lVar24) == lVar9)) {
                              cVar1 = *(char *)(lVar23 + 1 + lVar24);
                              fVar31 = -1.0;
                              if (cVar1 != '\x04') {
                                if (cVar1 == '\x01') {
                                  fVar31 = (float)(*(double *)(lVar14 + 8) -
                                                  *(double *)(lVar2 + 0x140));
                                }
                                else if (cVar1 == '\x03') {
                                  fVar31 = 0.0;
                                }
                                else {
                                  fVar31 = (float)*(double *)(lVar14 + 8);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    fVar32 = 3.4028235e+38;
                    if (*(longlong *)(lVar7 + 0x308) != 0) {
                      lVar9 = *(longlong *)(lVar7 + 0xb0);
                      if (lVar9 == 0) {
                        lVar9 = FUN_1448abda6(lVar7);
                      }
                      if (*(longlong *)(lVar9 + 0x1f0) == 0) {
                        plVar16 = (longlong *)(lVar9 + 0x458);
                      }
                      else {
                        plVar16 = (longlong *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
                      }
                      lVar9 = *(longlong *)(lVar7 + 0x308);
                      fVar32 = -1.0;
                      if (lVar9 != 0) {
                        lVar2 = *plVar16;
                        uVar26 = (uint)lVar9;
                        fVar32 = -1.0;
                        if ((int)(uVar26 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
                          lVar23 = lVar2 + 0x18;
                          if (*(longlong *)(lVar2 + 0x28) != 0) {
                            lVar23 = *(longlong *)(lVar2 + 0x28);
                          }
                          fVar32 = -1.0;
                          if ((*(uint *)(lVar23 + (ulonglong)((uVar26 & 0xffffff) >> 5) * 4) >>
                               (uVar26 & 0x1f) & 1) != 0) {
                            lVar23 = *(longlong *)(lVar2 + 8);
                            lVar24 = (ulonglong)(uVar26 & 0xffffff) * 0x70;
                            fVar32 = -1.0;
                            lVar14 = lVar23 + lVar24;
                            if ((lVar14 != 0) &&
                               (fVar32 = -1.0, *(longlong *)(lVar23 + 0x60 + lVar24) == lVar9)) {
                              cVar1 = *(char *)(lVar23 + 1 + lVar24);
                              fVar32 = -1.0;
                              if (cVar1 != '\x04') {
                                if (cVar1 == '\x01') {
                                  fVar32 = (float)(*(double *)(lVar14 + 8) -
                                                  *(double *)(lVar2 + 0x140));
                                }
                                else if (cVar1 == '\x03') {
                                  fVar32 = 0.0;
                                }
                                else {
                                  fVar32 = (float)*(double *)(lVar14 + 8);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    bVar30 = *(float *)(lVar21 + 0x31c) <= *(float *)(lVar7 + 0x31c) &&
                             *(float *)(lVar7 + 0x31c) != *(float *)(lVar21 + 0x31c);
                    if (fVar31 != fVar32) {
                      bVar30 = fVar31 < fVar32;
                    }
                    if (NAN(fVar31) || NAN(fVar32)) {
                      bVar30 = fVar31 < fVar32;
                    }
                    if (!bVar30) {
                      iVar29 = iVar12;
                    }
                  }
                  lVar7 = plVar15[iVar29];
                  lVar21 = plVar15[iVar17];
                  fVar31 = 3.4028235e+38;
                  if (*(longlong *)(lVar21 + 0x308) != 0) {
                    lVar9 = *(longlong *)(lVar21 + 0xb0);
                    if (lVar9 == 0) {
                      lVar9 = FUN_1448abda6(lVar21);
                    }
                    if (*(longlong *)(lVar9 + 0x1f0) == 0) {
                      plVar16 = (longlong *)(lVar9 + 0x458);
                    }
                    else {
                      plVar16 = (longlong *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
                    }
                    lVar9 = *(longlong *)(lVar21 + 0x308);
                    fVar31 = -1.0;
                    if (lVar9 != 0) {
                      lVar2 = *plVar16;
                      uVar26 = (uint)lVar9;
                      fVar31 = -1.0;
                      if ((int)(uVar26 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
                        lVar23 = lVar2 + 0x18;
                        if (*(longlong *)(lVar2 + 0x28) != 0) {
                          lVar23 = *(longlong *)(lVar2 + 0x28);
                        }
                        fVar31 = -1.0;
                        if ((*(uint *)(lVar23 + (ulonglong)((uVar26 & 0xffffff) >> 5) * 4) >>
                             (uVar26 & 0x1f) & 1) != 0) {
                          lVar23 = *(longlong *)(lVar2 + 8);
                          lVar24 = (ulonglong)(uVar26 & 0xffffff) * 0x70;
                          fVar31 = -1.0;
                          lVar14 = lVar23 + lVar24;
                          if ((lVar14 != 0) &&
                             (fVar31 = -1.0, *(longlong *)(lVar23 + 0x60 + lVar24) == lVar9)) {
                            cVar1 = *(char *)(lVar23 + 1 + lVar24);
                            fVar31 = -1.0;
                            if (cVar1 != '\x04') {
                              if (cVar1 == '\x01') {
                                fVar31 = (float)(*(double *)(lVar14 + 8) -
                                                *(double *)(lVar2 + 0x140));
                              }
                              else if (cVar1 == '\x03') {
                                fVar31 = 0.0;
                              }
                              else {
                                fVar31 = (float)*(double *)(lVar14 + 8);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  fVar32 = 3.4028235e+38;
                  if (*(longlong *)(lVar7 + 0x308) != 0) {
                    lVar9 = *(longlong *)(lVar7 + 0xb0);
                    if (lVar9 == 0) {
                      lVar9 = FUN_1448abda6(lVar7);
                    }
                    if (*(longlong *)(lVar9 + 0x1f0) == 0) {
                      plVar16 = (longlong *)(lVar9 + 0x458);
                    }
                    else {
                      plVar16 = (longlong *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
                    }
                    lVar9 = *(longlong *)(lVar7 + 0x308);
                    fVar32 = -1.0;
                    if (lVar9 != 0) {
                      lVar2 = *plVar16;
                      uVar26 = (uint)lVar9;
                      fVar32 = -1.0;
                      if ((int)(uVar26 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
                        lVar23 = lVar2 + 0x18;
                        if (*(longlong *)(lVar2 + 0x28) != 0) {
                          lVar23 = *(longlong *)(lVar2 + 0x28);
                        }
                        fVar32 = -1.0;
                        if ((*(uint *)(lVar23 + (ulonglong)((uVar26 & 0xffffff) >> 5) * 4) >>
                             (uVar26 & 0x1f) & 1) != 0) {
                          lVar23 = *(longlong *)(lVar2 + 8);
                          lVar24 = (ulonglong)(uVar26 & 0xffffff) * 0x70;
                          fVar32 = -1.0;
                          lVar14 = lVar23 + lVar24;
                          if ((lVar14 != 0) &&
                             (fVar32 = -1.0, *(longlong *)(lVar23 + 0x60 + lVar24) == lVar9)) {
                            cVar1 = *(char *)(lVar23 + 1 + lVar24);
                            fVar32 = -1.0;
                            if (cVar1 != '\x04') {
                              if (cVar1 == '\x01') {
                                fVar32 = (float)(*(double *)(lVar14 + 8) -
                                                *(double *)(lVar2 + 0x140));
                              }
                              else if (cVar1 == '\x03') {
                                fVar32 = 0.0;
                              }
                              else {
                                fVar32 = (float)*(double *)(lVar14 + 8);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  bVar30 = *(float *)(lVar21 + 0x31c) <= *(float *)(lVar7 + 0x31c) &&
                           *(float *)(lVar7 + 0x31c) != *(float *)(lVar21 + 0x31c);
                  if (fVar31 != fVar32) {
                    bVar30 = fVar31 < fVar32;
                  }
                  if (NAN(fVar31) || NAN(fVar32)) {
                    bVar30 = fVar31 < fVar32;
                  }
                  if (!bVar30) break;
                  lVar7 = plVar15[iVar17];
                  plVar15[iVar17] = plVar15[iVar29];
                  plVar15[iVar29] = lVar7;
                  iVar12 = iVar29 * 2;
                  iVar27 = iVar29 * 2 + 1;
                  iVar17 = iVar29;
                } while ((longlong)iVar27 < (longlong)uVar20);
                lVar7 = *plVar15;
                *plVar15 = plVar15[uVar19 - 2];
                plVar15[uVar19 - 2] = lVar7;
                uVar19 = uVar20;
              } while (2 < uVar20);
            }
          }
        }
LAB_14084e26f:
        plVar11 = plVar11 + -3;
        plVar13 = local_3e0;
        plVar16 = local_3d8;
      } while (&local_398 <= plVar11);
    }
    lVar7 = *(longlong *)*plVar13;
    param_3 = local_3e8;
    param_2 = local_3f0;
    if (*(char *)(lVar7 + 0x310) == '\x01') {
      if (*(int *)(local_400 + 0x78) != *(int *)(local_400 + 0xa4)) {
        lVar21 = *(longlong *)(lVar7 + 0x314);
        uVar26 = (uint)((ulonglong)lVar21 >> 0x10);
        uVar10 = (uint)lVar21 & 0xffff;
        lVar9 = local_400 + 0xa8;
        if (*(longlong *)(local_400 + 0xb0) != 0) {
          lVar9 = *(longlong *)(local_400 + 0xb0);
        }
        iVar12 = *(int *)(lVar9 + (ulonglong)
                                  (*(int *)(local_400 + 0xb8) - 1U &
                                  (int)((ulonglong)lVar21 >> 0x20) + ((uint)lVar21 << 0x10 | uVar10)
                                  + (uVar26 << 0x13 | uVar26 & 0xffff) + (uVar10 >> 4)) * 4);
        if (iVar12 != -1) {
          do {
            lVar9 = *(longlong *)(local_400 + 0x70) + (longlong)iVar12 * 0x20;
            if (*(longlong *)(*(longlong *)(local_400 + 0x70) + (longlong)iVar12 * 0x20) == lVar21)
            goto LAB_14084e835;
            iVar12 = *(int *)(lVar9 + 0x18);
          } while (iVar12 != -1);
        }
      }
      lVar9 = 0;
LAB_14084e835:
      if (lVar7 == 0) {
        local_398._0_4_ = 0;
        iVar12 = 0;
        uVar26 = (uint)local_398;
      }
      else {
        uVar26 = *(uint *)(lVar7 + 0xc);
        local_398 = (ulonglong)uVar26;
        if ((int)uVar26 < DAT_14c9647dc) {
          lVar21 = (ulonglong)((uVar26 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8);
        }
        else {
          lVar21 = 0;
        }
        iVar12 = *(int *)(lVar21 + 0x10);
        if (*(int *)(lVar21 + 0x10) == 0) {
          LOCK();
          iVar12 = DAT_14c964868 + 1;
          UNLOCK();
          iVar17 = DAT_14c964868 + 1;
          bVar30 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar12;
          if (bVar30) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar17);
          }
          LOCK();
          iVar12 = *(int *)(lVar21 + 0x10);
          bVar30 = iVar12 == 0;
          if (bVar30) {
            *(int *)(lVar21 + 0x10) = iVar17;
            iVar12 = 0;
          }
          UNLOCK();
          uVar26 = (uint)local_398;
          if (bVar30) {
            iVar12 = iVar17;
          }
        }
      }
      local_398._0_4_ = uVar26;
      local_398 = CONCAT44(iVar12,(uint)local_398);
      FUN_14084f16a(lVar9 + 8);
      *(undefined1 *)(lVar7 + 0x310) = 0;
      *(undefined8 *)(lVar7 + 0x314) = 0;
      param_3 = local_3e8;
      param_2 = local_3f0;
    }
  }
LAB_14084e8b7:
  *(byte *)(lVar7 + 0x9e) = *(byte *)(lVar7 + 0x9e) & 0xfb;
  FUN_14084ef06(lVar7,param_2);
  *(undefined8 *)(lVar7 + 0x2e0) = *(undefined8 *)(param_3 + 4);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(lVar7 + 0x2d0) = *param_3;
  *(undefined4 *)(lVar7 + 0x2d4) = uVar3;
  *(undefined4 *)(lVar7 + 0x2d8) = uVar4;
  *(undefined4 *)(lVar7 + 0x2dc) = uVar5;
  FUN_140583e18(lVar7,1);
  local_3a8 = DAT_14c846520;
  local_3b8 = (undefined4)DAT_14c846510;
  uStack_3b4 = DAT_14c846510._4_4_;
  uStack_3b0 = (undefined4)DAT_14c846518;
  uStack_3ac = DAT_14c846518._4_4_;
  FUN_14084f00a(lVar7);
  if ((*(byte *)(lVar7 + 0x9c) & 1) == 0) {
    FUN_140b506dc(lVar7,local_3d0,0);
  }
  FUN_14084ef9c(lVar7,param_4);
  lVar21 = (**(code **)(*plVar16 + 0x48))(plVar16);
  *(float *)(lVar7 + 0x31c) = (float)*(double *)(lVar21 + 0x6d0);
LAB_14084e94f:
  if ((local_90 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
code_r0x00014084dae5:
  lVar7 = *plVar25;
  *plVar25 = *plVar18;
  *plVar18 = lVar7;
  iVar12 = local_3f4 + -1;
  plVar22 = plVar22 + -2;
  if ((longlong)plVar28 - (longlong)local_3c8 < (longlong)local_3c0 - (longlong)plVar8) {
    if (plVar15 < plVar16) {
      *plVar11 = (longlong)plVar15;
      plVar11[1] = (longlong)plVar16;
      *(int *)(plVar11 + 2) = iVar12;
      plVar11 = plVar11 + 3;
    }
    plVar15 = plVar25;
    if (plVar18 <= plVar25 + 1) goto LAB_14084e26f;
  }
  else {
    if (plVar25 + 1 < plVar18) {
      *plVar11 = (longlong)plVar25;
      plVar11[1] = (longlong)plVar22;
      *(int *)(plVar11 + 2) = iVar12;
      plVar11 = plVar11 + 3;
    }
    plVar22 = plVar16;
    plVar25 = plVar8;
    plVar28 = plVar16;
    if (plVar16 <= plVar15) goto LAB_14084e26f;
  }
  iVar17 = (int)((ulonglong)((longlong)plVar28 - (longlong)plVar25) >> 3);
  uVar26 = iVar17 + 1;
  plVar16 = plVar22;
  plVar13 = plVar25;
  plVar25 = plVar15;
  if (iVar12 == 0) goto LAB_14084ea73;
  goto LAB_14084d6a7;
}



// FUNCTION 14084ef06 FUN_14084ef06 body=150 status=ok
// SIG undefined FUN_14084ef06(void)

void FUN_14084ef06(longlong *param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x55] = param_2;
  (**(code **)(*param_1 + 0x310))(param_1);
  if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
    bVar1 = *(byte *)((longlong)param_1 + 0x9d);
    if ((bVar1 & 1) == 0) {
LAB_14084ef6d:
      *(byte *)((longlong)param_1 + 0x9d) = bVar1 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
      return;
    }
    if (param_1[0x16] == 0) {
      lVar2 = FUN_1448abda6(param_1);
      if (lVar2 == 0) {
        bVar1 = *(byte *)((longlong)param_1 + 0x9d);
        goto LAB_14084ef6d;
      }
    }
  }
  return;
}



// FUNCTION 14084ef9c FUN_14084ef9c body=109 status=ok
// SIG undefined FUN_14084ef9c(void)

void FUN_14084ef9c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  byte bVar2;
  
  *(undefined4 *)(param_1 + 0x2b4) = param_2;
  if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
    bVar2 = *(byte *)(param_1 + 0x9d);
    if ((bVar2 & 1) == 0) {
LAB_14084efe5:
      *(byte *)(param_1 + 0x9d) = bVar2 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
      return;
    }
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar1 = FUN_1448abda6(param_1);
      if (lVar1 == 0) {
        bVar2 = *(byte *)(param_1 + 0x9d);
        goto LAB_14084efe5;
      }
    }
  }
  return;
}



// FUNCTION 14084f00a FUN_14084f00a body=352 status=ok
// SIG undefined FUN_14084f00a(void)

void FUN_14084f00a(longlong param_1,double *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar9 = *param_2;
  dVar8 = param_2[1];
  dVar7 = param_2[2];
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,7);
  }
  else {
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 0x80;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  if (ABS((float)dVar7) < 0.001) {
    dVar7 = (double)((ulonglong)((uint)((ulonglong)dVar7 >> 0x20) & 0x80000000) << 0x20 |
                    0x3f50624de0000000);
  }
  if (ABS((float)dVar8) < 0.001) {
    dVar8 = (double)((ulonglong)((uint)((ulonglong)dVar8 >> 0x20) & 0x80000000) << 0x20 |
                    0x3f50624de0000000);
  }
  if (ABS((float)dVar9) < 0.001) {
    dVar9 = (double)((ulonglong)((uint)((ulonglong)dVar9 >> 0x20) & 0x80000000) << 0x20 |
                    0x3f50624de0000000);
  }
  *(double *)(param_1 + 0x1c8) = dVar9;
  *(double *)(param_1 + 0x1d0) = dVar8;
  *(double *)(param_1 + 0x1d8) = dVar7;
  return;
}



// FUNCTION 14084f16a FUN_14084f16a body=186 status=ok
// SIG undefined FUN_14084f16a(void)

void FUN_14084f16a(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar7 = (longlong)(int)param_1[1] << 3;
    iVar4 = 1;
    lVar6 = 0;
    do {
      cVar1 = FUN_14084f224(lVar3,param_2);
      if (cVar1 != '\0') {
        if (iVar4 == 0) {
          return;
        }
        iVar2 = (int)param_1[1];
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(*param_1 + (lVar6 >> 0x20) * 8),
                  (void *)(*param_1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        FUN_14084f28c(param_1);
        return;
      }
      lVar3 = lVar3 + 8;
      lVar6 = lVar6 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 14084f224 FUN_14084f224 body=104 status=ok
// SIG undefined FUN_14084f224(void)

ulonglong FUN_14084f224(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 == *param_2) && (uVar2 == param_2[1])) {
    uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
  }
  else {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)))) &&
       ((*(uint *)(lVar4 + 0x10) == uVar2 && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar3 = FUN_144729dda(param_2);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// FUNCTION 14084f28c FUN_14084f28c body=137 status=ok
// SIG undefined FUN_14084f28c(void)

void FUN_14084f28c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,4);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,4);
    }
  }
  return;
}



// FUNCTION 14084f316 FUN_14084f316 body=1765 status=ok
// SIG undefined FUN_14084f316(void)

void FUN_14084f316(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined1 *puVar18;
  bool bVar19;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  longlong *local_c0;
  longlong local_b8 [3];
  ulonglong local_a0;
  undefined1 local_91;
  undefined1 local_90 [32];
  undefined1 *local_70;
  int local_68;
  undefined *local_60;
  undefined8 local_58;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar6 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_14084f541;
    bVar6 = DAT_14c8442b8 & 1;
  }
  if (bVar6 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar6 = DAT_14c8442b8;
    if (DAT_14c872bf0 == '\x01') {
      if (DAT_14c872bf1 != '\x01') goto LAB_14084f541;
      bVar6 = DAT_14c8442b8 & 1;
    }
    if ((bVar6 == 0) &&
       ((((DAT_14c760d84 != 0 && ((DAT_14ca84f5a & 1) != 0)) ||
         (cVar7 = FUN_1406917e6(), cVar7 != '\0')) &&
        ((DAT_14c76194c != 0 && (*(longlong *)(param_1 + 0x2a8) != 0)))))) {
      local_a0 = (ulonglong)(*(byte *)(param_1 + 0x2c8) >> 1 & 1) << 0x32 | 0x9e00;
      lVar9 = FUN_140a1dfd8();
      plVar14 = *(longlong **)(param_1 + 0x2a8);
      if (plVar14 == (longlong *)0x0) {
        plVar14 = (longlong *)0x0;
      }
      else if (((lVar9 != 0) && (lVar5 = plVar14[2], lVar5 != 0)) &&
              ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar5 + 0x38) &&
               (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                lVar9 + 0x30)))) {
        *(byte *)(plVar14 + 0x39) =
             *(byte *)(plVar14 + 0x39) & 0xfe | *(byte *)(param_1 + 0x2c8) >> 1 & 1;
        plVar14 = *(longlong **)(param_1 + 0x2a8);
      }
      local_40 = 0;
      local_38 = 0x200000001;
      local_60 = &DAT_14cae9e78;
      local_58 = 0;
      local_c0 = local_b8;
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_c8 = 1;
      (**(code **)(*plVar14 + 0x368))(0,local_90,&local_60,&local_a0);
      if (DAT_14c761950 == 1) {
        iVar8 = *(int *)(param_1 + 0x2fc) + 1;
        *(int *)(param_1 + 0x2fc) = iVar8;
        if (local_68 < 1) {
          LOCK();
          *(int *)(param_1 + 0x2f8) = iVar8;
          UNLOCK();
        }
        else {
          puVar2 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar11 = (uint *)*puVar2;
          if (puVar11 != (uint *)0x0) goto LAB_14084f609;
          while( true ) {
            uVar13 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar13 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar13 | 1;
              __tlregdtor(&LAB_14348442c);
            }
            lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar10 = *(undefined4 **)(lVar9 + 0x310);
            *(undefined8 *)(lVar9 + 0x310) = 0;
            if (puVar10 == (undefined4 *)0x0) {
              puVar10 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar10 = 0xffffffff;
            *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            FUN_140217a48(puVar2);
            puVar11 = (uint *)*puVar2;
LAB_14084f609:
            puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar16 + 0x17);
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
              puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
              puVar15 = (uint *)(puVar16 + 0x17);
              uVar13 = 0;
              if (puVar15 <= puVar11 + 0x4000) {
                uVar13 = 1;
                goto LAB_14084f689;
              }
            }
          }
          uVar13 = uVar13 + 1;
LAB_14084f689:
          *(uint **)(puVar11 + 0x10) = puVar15;
          puVar11[0x12] = uVar13;
          FUN_1447247dc(puVar16,local_90);
          *puVar16 = &PTR_FUN_14a861528;
          uVar4 = *(undefined4 *)(param_1 + 0x2fc);
          puVar16[0x15] = 0;
          if (param_1 == 0) {
            *(undefined4 *)(puVar16 + 0x15) = 0;
            iVar8 = 0;
          }
          else {
            uVar13 = *(uint *)(param_1 + 0xc);
            *(uint *)(puVar16 + 0x15) = uVar13;
            if ((int)uVar13 < DAT_14c9647dc) {
              lVar9 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
            }
            else {
              lVar9 = 0;
            }
            iVar8 = *(int *)(lVar9 + 0x10);
            if (*(int *)(lVar9 + 0x10) == 0) {
              LOCK();
              iVar8 = DAT_14c964868 + 1;
              UNLOCK();
              iVar17 = DAT_14c964868 + 1;
              bVar19 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar8;
              if (bVar19) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar17);
              }
              LOCK();
              iVar8 = *(int *)(lVar9 + 0x10);
              bVar19 = iVar8 == 0;
              if (bVar19) {
                *(int *)(lVar9 + 0x10) = iVar17;
                iVar8 = 0;
              }
              UNLOCK();
              if (bVar19) {
                iVar8 = iVar17;
              }
            }
          }
          *(int *)((longlong)puVar16 + 0xac) = iVar8;
          *(undefined4 *)(puVar16 + 0x16) = uVar4;
          if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
          }
          puVar16[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar16[9] = puVar16;
          puVar16[10] = puVar16;
          lVar9 = *(longlong *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2b8);
          if (lVar9 == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(undefined8 *)(lVar9 + 0x30);
          }
          puVar16[0xf] = uVar12;
          puVar16[0x10] = 0xe80000527800b400;
          *(undefined4 *)((longlong)puVar16 + 0x1c) = 3;
          if (puVar16 == (undefined8 *)0x0) {
            local_91 = 1;
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
            UNLOCK();
            local_91 = 1;
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
      }
      puVar18 = local_90;
      if (local_70 != (undefined1 *)0x0) {
        puVar18 = local_70;
      }
      FUN_144717c65(puVar18,local_68);
      if (local_70 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14084f541:
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14084f9fc FUN_14084f9fc body=855 status=ok
// SIG undefined FUN_14084f9fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14084f9fc(longlong param_1,undefined1 (*param_2) [16],double *param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined1 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined1 local_d8 [16];
  double local_c8;
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_b8 = *param_3;
  dStack_b0 = param_3[1];
  local_a8 = *(undefined1 (*) [16])(param_3 + 2);
  plVar1 = *(longlong **)(param_1 + 0x120);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x4a8))(plVar1,&local_118,*(undefined8 *)(param_1 + 0x128),0);
    bVar8 = *(byte *)(param_1 + 0x1f8);
    if ((bVar8 & 4) == 0) {
      local_f8 = *(double *)*param_2 - local_f8;
      dStack_f0 = *(double *)(*param_2 + 8) - dStack_f0;
      local_e8 = *(double *)param_2[1] - local_e8;
      dVar4 = -local_118;
      dVar5 = -dStack_110;
      dVar10 = local_108 * -1.0;
      dVar11 = dStack_100 * 1.0;
      dVar12 = local_f8 * dVar10 - dVar4 * local_e8;
      dVar6 = dStack_f0 * dVar4 - local_f8 * dVar5;
      dVar7 = local_e8 * dVar5 - dStack_f0 * dVar10;
      dVar7 = dVar7 + dVar7;
      dVar12 = dVar12 + dVar12;
      dVar6 = dVar6 + dVar6;
      auVar9 = divpd(_DAT_149934d80,local_d8);
      dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_d8._8_8_)) & auVar9._8_8_) *
              (local_118 * dVar6 + dVar10 * dVar7 + dVar11 * dVar12 + dStack_f0);
      auVar2._8_4_ = SUB84(dVar3,0);
      auVar2._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_d8._0_8_)) &
                             auVar9._0_8_) *
                     ((dVar6 * dVar5 - dVar12 * dVar10) + dVar11 * dVar7 + local_f8);
      auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *param_2 = auVar2;
      *(double *)param_2[1] =
           (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8)) & (ulonglong)(1.0 / local_c8)
                   ) * (dVar11 * dVar6 + local_e8 + (dVar12 * dVar4 - dVar7 * dVar5));
      bVar8 = *(byte *)(param_1 + 0x1f8);
    }
    if ((bVar8 & 8) == 0) {
      local_108 = local_108 * -1.0;
      dStack_100 = dStack_100 * 1.0;
      dVar6 = *param_3;
      dVar4 = param_3[1];
      dVar5 = param_3[2];
      dVar7 = param_3[3];
      local_b8 = dVar4 * local_108 * -1.0 +
                 ((dVar6 * dStack_100 - local_118 * dVar7 * 1.0) - dVar5 * dStack_110);
      dStack_b0 = dVar6 * local_108 * 1.0 +
                  ((dVar4 * dStack_100 - local_118 * dVar5 * -1.0) - dVar7 * dStack_110);
      dVar3 = dVar5 * local_108 * -1.0 +
              dStack_110 * dVar4 + (dStack_100 * dVar7 - local_118 * dVar6 * -1.0);
      local_a8._8_4_ = SUB84(dVar3,0);
      local_a8._0_8_ =
           dVar7 * local_108 * 1.0 +
           dStack_110 * dVar6 + (dStack_100 * dVar5 - local_118 * dVar4 * 1.0);
      local_a8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    }
  }
  local_128 = *(undefined8 *)param_2[1];
  local_138 = *(undefined4 *)*param_2;
  uStack_134 = *(undefined4 *)(*param_2 + 4);
  uStack_130 = *(undefined4 *)(*param_2 + 8);
  uStack_12c = *(undefined4 *)(*param_2 + 0xc);
  local_140 = param_6;
  local_148 = param_5;
  FUN_144927ad4(param_1,&local_138,&local_b8,param_4);
  if ((local_90 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14084fd54 FUN_14084fd54 body=353 status=ok
// SIG undefined FUN_14084fd54(void)

void FUN_14084fd54(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14084fdd9;
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
LAB_14084fdd9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 14084feb6 FUN_14084feb6 body=998 status=ok
// SIG undefined FUN_14084feb6(void)

undefined8 * FUN_14084feb6(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_148 [40];
  longlong *local_120;
  longlong local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_8c;
  undefined2 local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  longlong *local_58;
  undefined1 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1408f67ec(&local_118,param_2,1);
  if (local_118 != 0) {
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0x3ff00000;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b4 = 0x3ff00000;
    uStack_b0 = 0;
    uStack_ac = 0x3ff00000;
    local_a8 = 0x3ff0000000000000;
    uStack_a0 = 0;
    local_98 = 0x3f800000;
    local_90 = 0;
    local_8c = 0;
    local_78 = 0;
    local_58 = (longlong *)0x0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_50 = 1;
    FUN_1403c7a68(local_118,&local_108,param_3);
    plVar1 = local_58;
    *param_1 = local_58;
    if (local_58 != (longlong *)0x0) {
      iVar3 = (int)local_58[0x21];
      *(int *)(local_58 + 0x21) = iVar3 + 1;
      lVar6 = DAT_14cb259f8;
      if (*local_58 != -1) {
        if (DAT_14cb259f8 != 0) {
          if (param_2 != 0) {
            local_120 = local_58;
            *(int *)(local_58 + 0x21) = iVar3 + 2;
            plVar4 = *(longlong **)(*(longlong *)(lVar6 + 0x70) + 0x20);
            plVar5 = *(longlong **)(*(longlong *)(lVar6 + 0x70) + 0x28);
            if (plVar5 == (longlong *)0x0) {
LAB_140850004:
              if (((*local_58 != -1) && (plVar4 != (longlong *)0x0)) &&
                 (*(longlong *)(lVar6 + 0xa8) != 0)) {
                (**(code **)(*plVar4 + 0x30))(plVar4,&local_120,param_2);
              }
              if (plVar5 != (longlong *)0x0) goto LAB_14085002c;
            }
            else {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
              if (local_58 != (longlong *)0x0) goto LAB_140850004;
LAB_14085002c:
              LOCK();
              plVar4 = plVar5 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
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
            plVar4 = local_120;
            if (local_120 != (longlong *)0x0) {
              *(int *)(local_120 + 0x21) = (int)local_120[0x21] + -1;
              if ((int)local_120[0x26] < 1) {
                FUN_1400847bc(local_120 + 0x17,0);
                if ((int)plVar4[0x21] == 0) {
                  FUN_140087e46(plVar4);
                  if (*plVar4 != -1) {
                    if (DAT_14cb259f8 == 0) goto LAB_14085006f;
                    FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar4);
                  }
                  if (DAT_14cb259f8 != 0) {
                    FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar4);
                  }
                }
              }
LAB_14085006f:
              local_120 = (longlong *)0x0;
            }
          }
          if (*plVar1 != -1) {
            FUN_144963c84(*(undefined8 *)(lVar6 + 0x70),param_1);
          }
        }
        FUN_14085029e(local_118,param_1);
        plVar1 = local_58;
        if (local_58 != (longlong *)0x0) {
          *(int *)(local_58 + 0x21) = (int)local_58[0x21] + -1;
          if ((int)local_58[0x26] < 1) {
            FUN_1400847bc(local_58 + 0x17,0);
            if ((int)plVar1[0x21] == 0) {
              FUN_140087e46(plVar1);
              if (*plVar1 != -1) {
                if (DAT_14cb259f8 == 0) goto LAB_1408500c8;
                FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
              }
              if (DAT_14cb259f8 != 0) {
                FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
              }
            }
          }
LAB_1408500c8:
          local_58 = (longlong *)0x0;
        }
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        if (local_110 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_110 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_110)(local_110);
            LOCK();
            piVar2 = (int *)((longlong)local_110 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_110 + 0x10))(local_110);
            }
          }
        }
        goto LAB_1408500f9;
      }
      *(int *)(local_58 + 0x21) = iVar3;
      FUN_140d274d8(local_58);
      *param_1 = 0;
      if (local_58 != (longlong *)0x0) {
        *(int *)(local_58 + 0x21) = (int)local_58[0x21] + -1;
        FUN_140d274d8();
        local_58 = (longlong *)0x0;
      }
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)local_110 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_110 + 0x10))(local_110);
      }
    }
  }
  *param_1 = 0;
LAB_1408500f9:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14085029e FUN_14085029e body=76 status=ok
// SIG undefined FUN_14085029e(void)

void FUN_14085029e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
      FUN_14574ddb4((longlong *)(param_1 + 0x40),iVar1);
    }
    lVar2 = *param_2;
    *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar1 * 8) = lVar2;
    if (lVar2 != 0) {
      *(int *)(lVar2 + 0x108) = *(int *)(lVar2 + 0x108) + 1;
    }
  }
  return;
}



// FUNCTION 1408502ea FUN_1408502ea body=228 status=ok
// SIG undefined FUN_1408502ea(void)

longlong FUN_1408502ea(void)

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
  if (DAT_14cb5db30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b6eca;
    local_38 = &LAB_14869b5b7;
    local_40 = FUN_1410346cd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 0x10;
    local_68 = 800;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxPooledDecalComponent",&DAT_14cb5db30,&DAT_14869b5b6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5db30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408503d0 FUN_1408503d0 body=239 status=ok
// SIG undefined FUN_1408503d0(void)

void FUN_1408503d0(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(int *)((longlong)param_1 + 0x4c) != 0) &&
       (uVar1 = *(uint *)(param_1 + 9), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar2 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar2 != (longlong *)0x0 && ((int)plVar2[2] == *(int *)((longlong)param_1 + 0x4c))) &&
      (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 &&
       (plVar2 = (longlong *)*plVar2, plVar2 != (longlong *)0x0)))))) {
    local_38 = param_1;
    FUN_144a3f2ea(&local_30);
    if (local_28 == 0) {
      (**(code **)(*plVar2 + 0x288))(plVar2,param_2);
    }
    if ((local_28 & 1) == 0) {
      *(int *)(local_30 + 0x28) = *(int *)(local_30 + 0x28) + -1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
                    /* WARNING: Could not recover jumptable at 0x0001408504bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a0))(param_1,param_2,*(code **)(*param_1 + 0x2a0));
  return;
}



// FUNCTION 1408504cc FUN_1408504cc body=414 status=ok
// SIG undefined FUN_1408504cc(void)

undefined1 FUN_1408504cc(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined1 auStack_b8 [47];
  undefined1 local_89;
  longlong local_88 [2];
  undefined2 *local_78;
  undefined8 uStack_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_89 = FUN_1408508fe();
  uVar5 = DAT_14cb32868;
  local_64 = 0;
  puVar4 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_64,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_64);
    }
  }
  else {
    local_64 = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar1;
  }
  if (local_64 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_64);
  }
  plVar2 = (longlong *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) < local_64) {
    FUN_1408507be(plVar2);
  }
  if (0 < local_64) {
    iVar8 = 0;
    do {
      local_78 = (undefined2 *)0x0;
      uStack_70 = 0;
      FUN_14021219d(param_2,&local_78);
      puVar7 = &DAT_149dfb77a;
      if ((int)uStack_70 != 0) {
        puVar7 = local_78;
      }
      FUN_140056680(local_88,puVar7);
      uVar6 = FUN_14085066c(uVar5,local_88);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      iVar3 = *(int *)(param_1 + 0x90);
      *(uint *)(param_1 + 0x90) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x94) < iVar3 + 1U) {
        FUN_14574e1b2(plVar2,iVar3);
      }
      *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = uVar6;
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_64);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_89;
}



// FUNCTION 14085066c FUN_14085066c body=336 status=ok
// SIG undefined FUN_14085066c(void)

void FUN_14085066c(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x20) != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
    if (cVar1 != '\0') goto LAB_14085073e;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  FUN_1446f470e(&local_30,L"Niagara",1);
  FUN_1409983d4(&DAT_14c874628,local_30,local_24,0);
  if ((*(int *)(param_1 + 0x20) != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
    if (cVar1 != '\0') goto LAB_14085073e;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  FUN_140033559(".\\../Plugins/FX/Niagara/Source/NiagaraShader/Private/NiagaraShaderModule.cpp",0x45
                ,
                L"Failed to start Niagara module for serialization of shader that requires data interface \'%s\'.  This is a load order issue that can not be resolved, content dependencies will need fixing."
                ,puVar3);
LAB_14085073e:
  if (*(int *)(param_1 + 0x20) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x18);
  }
  (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408507be FUN_1408507be body=320 status=ok
// SIG undefined FUN_1408507be(void)

void FUN_1408507be(longlong param_1,uint param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140850827;
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
LAB_140850827:
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



// FUNCTION 1408508fe FUN_1408508fe body=965 status=ok
// SIG undefined FUN_1408508fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1408508fe(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_98 [39];
  undefined1 local_71;
  longlong local_70;
  int local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar6 = FUN_144a61b9e();
  local_64 = 0;
  local_68 = 0;
  puVar4 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_64,4);
    }
    else {
      FUN_14572512c(param_2,&local_64);
    }
  }
  else {
    local_64 = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar1;
  }
  puVar4 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
    }
    else {
      FUN_14572512c(param_2,&local_68);
    }
  }
  else {
    local_68 = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar1;
  }
  iVar10 = local_64;
  if (-1 < local_64) {
    plVar2 = (longlong *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = 0;
    local_71 = uVar6;
    if (*(int *)(param_1 + 0x34) < local_64) {
      FUN_14179049c(plVar2);
    }
    if (0 < local_64) {
      iVar10 = 0;
      do {
        local_70 = 0;
        plVar5 = (longlong *)param_2[1];
        if ((longlong *)plVar5[1] < (longlong *)*plVar5 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_70,8);
          }
          else {
            FUN_146821949(param_2,&local_70);
          }
        }
        else {
          local_70 = *(longlong *)*plVar5;
          *plVar5 = *plVar5 + 8;
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14ca98598) &&
           (FUN_144b3d300(&DAT_14ca98598), DAT_14ca98598 == -1)) {
          DAT_14ca98568 = 0;
          DAT_14ca98570 = 0;
          DAT_14ca98548 = 0;
          _DAT_14ca98550 = 0;
          _DAT_14ca98574 = 0xffffffff00000080;
          DAT_14ca9857c = 0;
          DAT_14ca98588 = (undefined *)0x0;
          DAT_14ca98590 = 0;
          atexit(FUN_143226fe8);
          _Init_thread_footer(&DAT_14ca98598);
        }
        if (DAT_14ca98550 != DAT_14ca9857c) {
          puVar8 = DAT_14ca98588;
          if (DAT_14ca98588 == (undefined *)0x0) {
            puVar8 = &DAT_14ca98580;
          }
          iVar3 = *(int *)(puVar8 + (ulonglong)
                                    (DAT_14ca98590 - 1U &
                                    (int)local_70 + (int)((ulonglong)local_70 >> 0x20) * 0x17) * 4);
          while (iVar3 != -1) {
            plVar5 = (longlong *)(DAT_14ca98548 + (longlong)iVar3 * 0x18);
            if (*plVar5 == local_70) {
              if (plVar5 != (longlong *)0x0) {
                lVar9 = 0;
                if (plVar5 + 1 != (longlong *)0x0) {
                  lVar9 = plVar5[1];
                }
                goto LAB_140850ada;
              }
              break;
            }
            iVar3 = (int)plVar5[2];
          }
        }
        lVar9 = 0;
LAB_140850ada:
        iVar3 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar3 + 1U) {
          FUN_14178e7bc(plVar2,iVar3);
        }
        *(longlong *)(*plVar2 + (longlong)iVar3 * 8) = lVar9;
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_64);
    }
    iVar10 = local_68;
    if (-1 < local_68) {
      plVar2 = (longlong *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x60) = 0;
      if (*(int *)(param_1 + 100) < local_68) {
        FUN_1417905dc(plVar2);
      }
      if (0 < local_68) {
        iVar10 = 0;
        do {
          local_70 = 0;
          plVar5 = (longlong *)param_2[1];
          if ((longlong *)plVar5[1] < (longlong *)*plVar5 + 1) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,&local_70,8);
            }
            else {
              FUN_146821949(param_2,&local_70);
            }
          }
          else {
            local_70 = *(longlong *)*plVar5;
            *plVar5 = *plVar5 + 8;
          }
          uVar7 = FUN_140187afe(&local_70);
          iVar3 = *(int *)(param_1 + 0x60);
          *(uint *)(param_1 + 0x60) = iVar3 + 1U;
          if (*(uint *)(param_1 + 100) < iVar3 + 1U) {
            FUN_145ed2d64(plVar2,iVar3);
          }
          *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = uVar7;
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_68);
      }
      if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return local_71;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar10);
}



// FUNCTION 140850cc5 FUN_140850cc5 body=92 status=ok
// SIG undefined FUN_140850cc5(void)

char FUN_140850cc5(short *param_1)

{
  wchar_t *pwVar1;
  short sVar2;
  char cVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t wVar6;
  
  cVar3 = '\0';
  do {
    sVar2 = *param_1;
    if (sVar2 == 0) {
      return cVar3;
    }
    param_1 = param_1 + 1;
    if (sVar2 == 0x5f) {
      if (*param_1 == 0x44) {
        wVar6 = L'D';
        pwVar5 = L"DEPRECATED";
        do {
          if (wVar6 == L'\0') {
            return cVar3;
          }
          pwVar4 = pwVar5 + 1;
          wVar6 = param_1[1];
          param_1 = param_1 + 1;
          pwVar1 = pwVar5 + 1;
          pwVar5 = pwVar4;
        } while (wVar6 == *pwVar1);
      }
      else {
        pwVar4 = L"DEPRECATED";
      }
      cVar3 = cVar3 + (char)((int)pwVar4 + 0xb61c7ce8U >> 1);
    }
    cVar3 = cVar3 + '\x01';
  } while( true );
}



// FUNCTION 140850d22 FUN_140850d22 body=71 status=ok
// SIG undefined FUN_140850d22(void)

void FUN_140850d22(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_38 [40];
  undefined8 *local_10;
  ulonglong local_8;
  
  local_10 = &local_res18;
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_140850d6a(param_1,param_2,local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140850d6a FUN_140850d6a body=203 status=ok
// SIG undefined FUN_140850d6a(void)

longlong FUN_140850d6a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong *puVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = param_3;
  while( true ) {
    uVar2 = local_48;
    local_50 = local_48;
    uVar1 = *(undefined8 *)(param_1 + 8);
    iVar5 = (int)*(undefined8 *)(param_1 + 0x10) - (int)uVar1;
    puVar4 = (ulonglong *)FUN_144737586();
    local_60 = uVar2;
    local_68 = 0;
    uVar3 = __stdio_common_vsprintf(*puVar4 | 2,uVar1,(longlong)iVar5,param_2);
    if ((int)uVar3 < 0) {
      uVar3 = 0xffffffff;
    }
    if (iVar5 <= (int)uVar3) {
      uVar3 = 0xffffffff;
    }
    if ((-1 < (int)uVar3) && ((int)uVar3 < iVar5)) break;
    FUN_1402134d6(param_1,0x40);
  }
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + (ulonglong)uVar3;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140850e3c FUN_140850e3c body=990 status=ok
// SIG undefined FUN_140850e3c(void)

void FUN_140850e3c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong *local_98;
  longlong local_88;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_2 + 0x10) != '\0') {
    uVar4 = FUN_140dddafc(param_3);
    FUN_14045886c(uVar4,&DAT_14cb1add8);
    if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
    }
    goto LAB_140851036;
  }
  lVar10 = param_1[5];
  if (lVar10 == 0) {
    local_48 = (longlong *)FUN_14001cc68(0x98,0x10);
    local_48[1] = (longlong)&DAT_100000001;
    *local_48 = (longlong)&PTR_FUN_14a1b6cc0;
    local_50 = local_48 + 2;
    local_48[2] = (longlong)&PTR_FUN_14a18e458;
    local_48[3] = 0;
    local_48[4] = 0;
    local_48[5] = 0;
    local_48[6] = 0;
    local_48[7] = 0;
    local_48[8] = 0;
    local_48[9] = 0;
    local_48[10] = 0;
    local_48[0xb] = 0;
    local_48[0xc] = 0;
    local_48[0xd] = 0;
    local_48[0xe] = 0;
    local_48[0xf] = 0;
    local_48[0x10] = 0;
    local_48[0x11] = 0;
    local_48[0x12] = 0;
    FUN_1404e24cc(&local_50);
    FUN_1404e256a(&local_a0,&local_50);
    FUN_14029d0b6(param_1 + 5,&local_a0);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_98 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_98 + 0x10))(local_98);
        }
      }
    }
    plVar8 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_48 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    lVar10 = param_1[5];
  }
  if ((*(longlong *)(lVar10 + 0x20) == 0) &&
     ((*(longlong *)(lVar10 + 0x40) == 0 || (*(longlong *)(lVar10 + 0x48) == 0)))) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
    uVar4 = FUN_140927942();
    lVar5 = FUN_14477b664(uVar4);
    lVar6 = FUN_140927942();
    uVar4 = FUN_140927942();
    FUN_1402d1bfa(&local_a0,uVar4,param_1);
    if (local_a0 != (longlong *)0x0) {
      plStack_40 = (longlong *)0x0;
    }
    local_50 = local_a0;
    lVar7 = FUN_140927942();
    if (lVar6 == 0) {
LAB_140850f14:
      lVar7 = lVar6;
    }
    else if (lVar7 == 0) {
      lVar7 = 0;
    }
    else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
             lVar7 + 0x30)) goto LAB_140850f14;
    if (lVar5 != lVar7) {
      plStack_40 = (longlong *)0x0;
    }
    uVar4 = FUN_14477b664(lVar7);
    local_48 = (longlong *)FUN_14477b664(uVar4);
    if ((local_a0 != (longlong *)0x0) && (local_48 != (longlong *)0x0)) {
      plStack_40 = param_1;
    }
    FUN_14031575e(&local_a0,&local_50);
    FUN_14085123a(lVar10,&local_a0,0,0);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  pbVar2 = (byte *)*param_3;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar8 = &DAT_14c9a1288;
    }
    else {
      plVar8 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
      plVar11 = plVar8 + 8;
      if ((longlong *)plVar8[9] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar8[9];
      }
      iVar3 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar8[10] - 1U & DAT_14cb1adb0) * 4);
      if (iVar3 != -1) {
        do {
          lVar10 = *plVar8 + (longlong)iVar3 * 0x40;
          if (*(uint *)(*plVar8 + (longlong)iVar3 * 0x40) == DAT_14cb1adb0) {
            if ((((lVar10 != 0) &&
                 (puVar9 = (undefined8 *)(lVar10 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
            goto LAB_140850ffa;
            break;
          }
          iVar3 = *(int *)(lVar10 + 0x38);
        } while (iVar3 != -1);
      }
    }
  }
  puVar9 = &DAT_14c9a1308;
LAB_140850ffa:
  if ((byte *)*puVar9 == (byte *)0x0) {
    *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    bVar12 = (*(byte *)*puVar9 & 0x6b) == 1;
    *(bool *)((longlong)param_1 + 0x4c) = bVar12;
    if (bVar12) goto LAB_140851036;
  }
  iVar3 = (**(code **)(*param_1 + 0xc0))(param_1);
  fVar13 = 0.0;
  if (0 < iVar3) {
    fVar13 = 7.0 / (float)iVar3;
  }
  *(float *)(param_1 + 9) = fVar13;
LAB_140851036:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14085123a FUN_14085123a body=465 status=ok
// SIG undefined FUN_14085123a(void)

void FUN_14085123a(longlong param_1,undefined8 *param_2,undefined4 param_3,char param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (param_4 == '\0') {
    if ((longlong)*(int *)(param_1 + 0x80) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x78);
      lVar10 = (longlong)*(int *)(param_1 + 0x80) * 0x90;
      do {
        FUN_140851464(lVar9,0);
        lVar9 = lVar9 + 0x90;
        lVar10 = lVar10 + -0x90;
      } while (lVar10 != 0);
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x84);
    FUN_1401edebb(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x80) = 0;
    if ((iVar3 < 0) && (*(int *)(param_1 + 0x84) != 0)) {
      FUN_1408522b2(param_1 + 0x78,0);
    }
  }
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar6 = *(undefined4 *)(param_2 + 2);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  *(undefined4 *)(param_1 + 0x28) = uVar6;
  *(undefined4 *)(param_1 + 0x2c) = uVar7;
  puVar1 = (undefined8 *)(param_1 + 0x30);
  if (puVar1 != param_2 + 3) {
    iVar3 = *(int *)(param_2 + 4);
    _Src = (void *)param_2[3];
    *(int *)(param_1 + 0x38) = iVar3;
    if (iVar3 == 0 && *(int *)(param_1 + 0x3c) == 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar3);
      if (iVar3 != 0) {
        memcpy((void *)*puVar1,_Src,(longlong)iVar3 * 2);
      }
    }
  }
  lVar9 = param_2[5];
  if (*(longlong *)(param_1 + 0x40) != lVar9) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(longlong *)(param_1 + 0x40) = lVar9;
  if (*(longlong *)(param_1 + 0x48) != param_2[6]) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  uVar8 = FUN_14477b664();
  uVar8 = FUN_14477b664(uVar8);
  *(undefined8 *)(param_1 + 0x48) = uVar8;
  *(undefined8 *)(param_1 + 0x50) = param_2[7];
  uVar8 = param_2[8];
  lVar9 = param_2[9];
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 0xc) = *(int *)(lVar9 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar8;
  *(longlong *)(param_1 + 0x60) = lVar9;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  iVar3 = *(int *)(param_1 + 0x74);
  FUN_1401ede73(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x70) = 0;
  if ((iVar3 < 0) && (*(int *)(param_1 + 0x74) != 0)) {
    FUN_14085151e(param_1 + 0x68,0);
  }
  FUN_14085140c(param_1,param_2,param_3);
  if (*(int *)(param_1 + 0x74) == *(int *)(param_1 + 0x70)) {
    return;
  }
  FUN_14085151e(param_1 + 0x68);
  return;
}



// FUNCTION 14085140c FUN_14085140c body=88 status=ok
// SIG undefined FUN_14085140c(void)

void FUN_14085140c(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_2 + 0x28) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
    FUN_140851606(param_1,param_2 + 0x28,param_3);
    return;
  }
  lVar1 = FUN_1401fe4bc(param_2);
  if (lVar1 != 0) {
    FUN_140851930(param_1,lVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 140851464 FUN_140851464 body=185 status=ok
// SIG undefined FUN_140851464(void)

void FUN_140851464(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  *(undefined1 *)(param_1 + 0x88) = 0;
  plVar1 = (longlong *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0x10);
  if (0 < iVar4) {
    if (iVar4 == DAT_14c9a6310) {
      cVar2 = FUN_14000b9e1(*plVar1,DAT_14c9a6308);
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1 + 0x88) = 1;
        return;
      }
      iVar4 = *(int *)(param_1 + 0x10);
    }
    if (iVar4 != DAT_14c9a6310) {
      return;
    }
    if (DAT_14c9a6310 != 0) {
      plVar3 = DAT_14c9a6308;
      do {
        lVar5 = 0;
        while (*(longlong *)(*plVar1 + lVar5) != *plVar3) {
          lVar5 = lVar5 + 8;
          if ((longlong)DAT_14c9a6310 * 8 == lVar5) {
            return;
          }
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != DAT_14c9a6308 + DAT_14c9a6310);
    }
  }
  *(undefined1 *)(param_1 + 0x88) = 1;
  if (param_2 == '\0') {
    return;
  }
  FUN_1406fa324(plVar1,&DAT_14c9a6308);
  return;
}



// FUNCTION 14085151e FUN_14085151e body=231 status=ok
// SIG undefined FUN_14085151e(void)

void FUN_14085151e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x50;
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



// FUNCTION 140851606 FUN_140851606 body=809 status=ok
// SIG undefined FUN_140851606(void)

void FUN_140851606(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_458 [32];
  longlong local_438;
  longlong *plStack_430;
  undefined8 local_428;
  longlong lStack_420;
  undefined8 local_418;
  longlong local_410;
  undefined8 local_408;
  longlong local_400;
  undefined8 local_3f8;
  longlong *plStack_3f0;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_458;
  if ((*param_2 == 0) || (param_2[1] == 0)) goto LAB_140851710;
  plVar7 = (longlong *)param_2[2];
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2[1] + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar4 == '\0')) {
      param_2[2] = 0;
      goto LAB_140851710;
    }
    uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
    plVar7 = (longlong *)FUN_144aff482(uVar5,param_2);
    param_2[2] = (longlong)plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_140851710;
  }
  uVar5 = (**(code **)(*plVar7 + 8))(plVar7);
  puVar6 = (undefined8 *)FUN_1401fe61e(uVar5);
  if (puVar6 == (undefined8 *)0x0) {
    if (param_3 == '\0') goto LAB_140851710;
    uVar5 = (**(code **)(*plVar7 + 8))(plVar7);
    puVar6 = (undefined8 *)FUN_14042bb62(uVar5);
    if (puVar6 == (undefined8 *)0x0) goto LAB_140851710;
    local_78 = (longlong *)0x0;
    local_70 = 0xc00000000;
    (*(code *)*puVar6)(plVar7,&local_438);
    plVar7 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar7 = &local_438;
    }
    if ((longlong)(int)local_70 != 0) {
      lVar8 = (longlong)(int)local_70 * 0x50;
      do {
        FUN_1409080e2(param_1,plVar7,1);
        plVar7 = plVar7 + 10;
        lVar8 = lVar8 + -0x50;
      } while (lVar8 != 0);
    }
  }
  else {
    local_428 = 0;
    lStack_420 = 0;
    local_438 = 0;
    plStack_430 = (longlong *)0x0;
    local_418 = 0;
    local_410 = *param_2;
    uVar5 = FUN_14477b664(param_2[1]);
    local_408 = FUN_14477b664(uVar5);
    local_400 = param_2[2];
    local_3f8 = 0;
    plStack_3f0 = (longlong *)0x0;
    FUN_1403157e6(&local_410);
    cVar4 = FUN_14042b392(param_1 + 0x18,&local_438);
    if (plStack_3f0 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plStack_3f0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_3f0 + 0x10))();
      }
    }
    if (lStack_420 != 0) {
      FUN_1400020a8();
    }
    if (cVar4 == '\0') {
      (*(code *)*puVar6)(&local_438,plVar7);
      if (local_438 != 0) {
        if (local_438 == param_1) {
          (*(code *)puVar6[2])(plVar7,param_1);
        }
        else {
          FUN_140852074(param_1);
        }
      }
      plVar3 = plStack_430;
      if (plStack_430 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_430 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_430)(plStack_430);
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
    else {
      (*(code *)puVar6[2])(plVar7,param_1);
    }
    if (param_3 == '\0') goto LAB_140851710;
    local_78 = (longlong *)0x0;
    local_70 = 0xc00000000;
    (*(code *)puVar6[1])(plVar7,&local_438);
    plVar7 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar7 = &local_438;
    }
    if ((longlong)(int)local_70 != 0) {
      lVar8 = (longlong)(int)local_70 * 0x50;
      do {
        FUN_1409080e2(param_1,plVar7,1);
        plVar7 = plVar7 + 10;
        lVar8 = lVar8 + -0x50;
      } while (lVar8 != 0);
    }
  }
  FUN_14078a6b6(&local_438);
LAB_140851710:
  if ((local_60 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140851930 FUN_140851930 body=1097 status=ok
// SIG undefined FUN_140851930(void)

void FUN_140851930(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_478 [32];
  wchar_t *local_458;
  undefined4 local_450;
  undefined8 local_448;
  wchar_t *local_440;
  undefined4 local_438;
  undefined1 *local_430;
  undefined1 *local_428;
  code **local_420;
  code *local_418;
  longlong local_410;
  longlong *local_408;
  longlong local_3f8;
  longlong *local_3c8;
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_478;
  if (param_2 != 0) {
    while( true ) {
      if ((*(uint *)(param_2 + 8) & 0x10) == 0) {
        uVar4 = FUN_140437988();
        lVar5 = FUN_144718840(param_2,uVar4);
        if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_478);
        }
      }
      lVar5 = FUN_140851d9a();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
        local_410 = *(longlong *)(param_2 + 0x18);
        FUN_1409f75d4(param_1,&local_410,param_2,0);
        goto LAB_140851a9d;
      }
      uVar4 = FUN_1401fe3d6();
      plVar6 = (longlong *)FUN_144718840(param_2,uVar4);
      if (plVar6 != (longlong *)0x0) break;
      uVar4 = FUN_14042ba7c();
      plVar6 = (longlong *)FUN_144718840(param_2,uVar4);
      if (plVar6 != (longlong *)0x0) {
        local_50 = (longlong *)0x0;
        local_48 = 0xc00000000;
        (**(code **)(*plVar6 + 0x10))(plVar6,&local_410);
        plVar6 = local_50;
        if (local_50 == (longlong *)0x0) {
          plVar6 = &local_410;
        }
        if ((longlong)(int)local_48 != 0) {
          lVar5 = (longlong)(int)local_48 * 0x50;
          do {
            FUN_1409080e2(param_1,plVar6,0);
            plVar6 = plVar6 + 10;
            lVar5 = lVar5 + -0x50;
          } while (lVar5 != 0);
        }
        goto LAB_140851b15;
      }
      if (DAT_14c949118 == 0) {
        local_418 = FUN_140631fbe;
        lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar5;
        FUN_1446f470e(&local_410,L"Class",1);
        local_428 = &LAB_146891e90;
        local_430 = &LAB_146273097;
        local_440 = L"Engine";
        local_438 = 199;
        local_448 = 0x20;
        local_450 = 0x10000000;
        local_458 = (wchar_t *)CONCAT44(local_458._4_4_,8);
        local_420 = &local_418;
        FUN_14574b4b2(lVar5);
        DAT_14c949118 = lVar5;
        FUN_144a7a812();
        lVar5 = DAT_14c949118;
        uVar4 = FUN_1449e2fb2();
        local_458 = L"Class";
        FUN_14574b446(uVar4,lVar5);
      }
      if (((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
          (*(longlong *)
            (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
         (*(int *)(param_2 + 0xd4) < 0)) goto LAB_140851a9d;
      lVar5 = *(longlong *)(param_2 + 0x110);
      if (lVar5 == 0) {
        FUN_140aa6c08(param_2);
        lVar5 = *(longlong *)(param_2 + 0x110);
      }
      param_2 = lVar5;
      if (lVar5 == 0) goto LAB_140851a9d;
    }
    uVar4 = (**(code **)(*plVar6 + 8))(plVar6);
    FUN_140851e80(&local_410,uVar4);
    cVar3 = FUN_14042b392(param_1 + 0x18,&local_410);
    if (local_3c8 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_3c8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_3c8 + 0x10))();
      }
    }
    if (local_3f8 != 0) {
      FUN_1400020a8();
    }
    if (cVar3 == '\0') {
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_410);
      if (local_410 != 0) {
        if (local_410 == param_1) {
          (**(code **)(*plVar6 + 0x20))(plVar6,param_1);
        }
        else {
          FUN_140852074(param_1);
        }
      }
      if (local_408 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_408 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_408)(local_408);
          LOCK();
          piVar2 = (int *)((longlong)local_408 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_408 + 0x10))(local_408);
          }
        }
      }
    }
    else {
      (**(code **)(*plVar6 + 0x20))(plVar6,param_1);
    }
    if (param_3 != '\0') {
      local_50 = (longlong *)0x0;
      local_48 = 0xc00000000;
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_410);
      plVar6 = local_50;
      if (local_50 == (longlong *)0x0) {
        plVar6 = &local_410;
      }
      if ((longlong)(int)local_48 != 0) {
        lVar5 = (longlong)(int)local_48 * 0x50;
        do {
          FUN_1409080e2(param_1,plVar6,0);
          plVar6 = plVar6 + 10;
          lVar5 = lVar5 + -0x50;
        } while (lVar5 != 0);
      }
LAB_140851b15:
      FUN_14078a6b6(&local_410);
    }
  }
LAB_140851a9d:
  if ((local_40 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140851d9a FUN_140851d9a body=228 status=ok
// SIG undefined FUN_140851d9a(void)

longlong FUN_140851d9a(void)

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
  if (DAT_14c949670 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146272f5e;
    local_38 = &LAB_14689a891;
    local_40 = FUN_146273b2b;
    local_48 = L"Engine";
    local_50 = 4;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Enum",&DAT_14c949670,&DAT_14689a896);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c949670;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140851e80 FUN_140851e80 body=498 status=ok
// SIG undefined FUN_140851e80(void)

uint * FUN_140851e80(uint *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
LAB_14085200f:
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[8] = 0;
  }
  else {
    if ((*(uint *)(param_2 + 8) & 0x10) == 0) {
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
    }
    else {
      param_2 = *(longlong *)(param_2 + 0x10);
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      if (param_2 == 0) goto LAB_14085200f;
    }
    FUN_1400bbfc4(&local_48,param_2);
    param_1[2] = local_48;
    param_1[3] = uStack_44;
    param_1[4] = uStack_40;
    param_1[5] = uStack_3c;
    if (param_1 + 2 == &local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 6) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 6) = local_38;
      local_38 = 0;
      param_1[8] = local_30;
      param_1[9] = local_2c;
    }
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    uVar3 = *(uint *)(param_2 + 0xc);
    if (cVar2 != '\0') {
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        goto LAB_140851f5b;
      }
    }
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
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
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
    param_1[1] = uVar3;
  }
LAB_140851f5b:
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140852074 FUN_140852074 body=572 status=ok
// SIG undefined FUN_140852074(void)

void FUN_140852074(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  void *_Src;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [24];
  longlong local_98;
  longlong *local_68;
  longlong local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 != param_1) {
    lVar4 = (longlong)*(int *)(param_2 + 0x80);
    if (0 < lVar4) {
      iVar5 = *(int *)(param_1 + 0x80) + *(int *)(param_2 + 0x80);
      if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar5);
      }
      if (*(int *)(param_1 + 0x84) < iVar5) {
        FUN_1408522b2(param_1 + 0x78);
        lVar4 = (longlong)*(int *)(param_2 + 0x80);
        if (lVar4 == 0) goto LAB_14085221c;
      }
      lVar2 = *(longlong *)(param_2 + 0x78);
      lVar6 = lVar2 + 0x28;
      do {
        local_d8 = *(undefined8 *)(lVar6 + -0x28);
        local_d0 = (void *)0x0;
        local_c8 = *(int *)(lVar6 + -0x18);
        lVar7 = (longlong)local_c8;
        _Src = *(void **)(lVar6 + -0x20);
        if (lVar7 == 0) {
          local_c4 = 0;
        }
        else {
          FUN_1401b309e(&local_d0,local_c8,0);
          memcpy(local_d0,_Src,lVar7 << 3);
        }
        local_b8 = *(undefined4 *)(lVar6 + -8);
        local_c0 = *(undefined8 *)(lVar6 + -0x10);
        FUN_14042b2d2(local_b0,lVar6);
        local_60 = 0;
        local_58 = *(int *)(lVar6 + 0x58);
        uVar3 = *(undefined8 *)(lVar6 + 0x50);
        if (local_58 == 0) {
          local_54 = 0;
        }
        else {
          FUN_140e96728(&local_60,local_58,0);
          FUN_140e966db(local_60,uVar3);
        }
        local_50 = *(undefined1 *)(lVar6 + 0x60);
        FUN_140ab6af6(param_1,&local_d8);
        FUN_14072ffb2(local_60,local_58);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        if (local_68 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_68 + 0x10))();
          }
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (local_d0 != (void *)0x0) {
          FUN_1400020a8();
        }
        lVar7 = lVar6 + 0x68;
        lVar6 = lVar6 + 0x90;
      } while (lVar7 != lVar4 * 0x90 + lVar2);
    }
  }
LAB_14085221c:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408522b2 FUN_1408522b2 body=231 status=ok
// SIG undefined FUN_1408522b2(void)

void FUN_1408522b2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x90;
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
    if (param_2 <= (int)(uVar1 / 0x90)) {
      uVar2 = uVar1 / 0x90 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x90,8);
  }
  return;
}



// FUNCTION 14085239a FUN_14085239a body=757 status=ok
// SIG undefined FUN_14085239a(void)

undefined8 * FUN_14085239a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae20d10;
  if (param_1[0xf7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xef] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xed] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xcb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xbd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xae] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xac] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xaa] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x97] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x90] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_140852690(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140852690 FUN_140852690 body=96 status=ok
// SIG undefined FUN_140852690(void)

void FUN_140852690(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14adc1600;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1408526f0 FUN_1408526f0 body=104 status=ok
// SIG undefined FUN_1408526f0(void)

undefined8 * FUN_1408526f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be71ae0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if ((param_1[0x14] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x14] + 0x50));
  }
  FUN_140852758(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140852758 FUN_140852758 body=60 status=ok
// SIG undefined FUN_140852758(void)

void FUN_140852758(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be74fa0;
  if ((param_1[0xc] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xc] + 0x50));
  }
  FUN_1403159fa(param_1);
  return;
}



// FUNCTION 140852794 FUN_140852794 body=9 status=ok
// SIG undefined FUN_140852794(void)

void FUN_140852794(longlong param_1)

{
  FUN_14085279e(param_1 + 0x10);
  return;
}



// FUNCTION 14085279e FUN_14085279e body=96 status=ok
// SIG undefined FUN_14085279e(void)

void FUN_14085279e(longlong *param_1)

{
  FUN_1428669ec(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_14286735a(param_1[9],(int)param_1[10]);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140af7df7(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1408527fe FUN_1408527fe body=264 status=ok
// SIG undefined FUN_1408527fe(void)

undefined8 * FUN_1408527fe(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_140852822;
  FUN_140852908(0,&local_38);
  FUN_14018932e(&local_30,param_1 + -0x59a,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_140852822;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001408528e4:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001408528e4;
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
LAB_140852822:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140852908 FUN_140852908 body=120 status=ok
// SIG undefined FUN_140852908(void)

undefined8 * FUN_140852908(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1fd4) {
    FUN_144b3d300(&DAT_14cad1fd4);
    if (DAT_14cad1fd4 == -1) {
      FUN_1446ddc76(&DAT_14cad1fcc,"OnComponentEndOverlap",1);
      _Init_thread_footer(&DAT_14cad1fd4);
    }
  }
  *param_2 = DAT_14cad1fcc;
  return param_2;
}



// FUNCTION 140852980 FUN_140852980 body=304 status=ok
// SIG undefined FUN_140852980(void)

undefined4 *
FUN_140852980(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140852b6a(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  local_50[2] = 0;
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_140852ab2(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_50 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_140852d4c(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140852ab2 FUN_140852ab2 body=184 status=ok
// SIG undefined FUN_140852ab2(void)

void FUN_140852ab2(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          FUN_146902874(puVar1 + 2);
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_1428403a6(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_140852b25;
        }
        iVar8 = puVar1[6];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_140852b25:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 140852b6a FUN_140852b6a body=482 status=ok
// SIG undefined FUN_140852b6a(void)

int * FUN_140852b6a(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 140852d4c FUN_140852d4c body=590 status=ok
// SIG undefined FUN_140852d4c(void)

void FUN_140852d4c(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x20;
        uVar3 = ((uint)(*(ulonglong *)(lVar11 + lVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar11 + lVar10) >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_140852f55;
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
LAB_140852f55:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140852f9c FUN_140852f9c body=307 status=ok
// SIG undefined FUN_140852f9c(void)

undefined4 *
FUN_140852f9c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140853256(param_1,local_58);
  FUN_14085317c(param_4,local_50);
  *(undefined4 *)(local_50 + 0x530) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1408530d0(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_50 + 0x534) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0x530) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14044c6bc(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408530d0 FUN_1408530d0 body=171 status=ok
// SIG undefined FUN_1408530d0(void)

void FUN_1408530d0(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  uVar2 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar2 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar4 * 0x538;
        if ((*(longlong *)(lVar1 + lVar5) == *param_3) &&
           (*(longlong *)(lVar1 + 8 + lVar5) == param_3[1])) {
          memmove((void *)(lVar1 + lVar5),param_3,0x530);
          FUN_140897f02(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          goto LAB_140853145;
        }
        iVar4 = *(int *)(lVar1 + lVar5 + 0x530);
      } while (iVar4 != -1);
    }
    uVar2 = 0;
  }
LAB_140853145:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 14085317c FUN_14085317c body=216 status=ok
// SIG undefined FUN_14085317c(void)

undefined4 * FUN_14085317c(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 auStack_5b8 [11];
  undefined *puStack_560;
  undefined1 auStack_558 [24];
  undefined8 uStack_540;
  undefined4 auStack_538 [2];
  undefined **local_530;
  undefined1 local_528 [8];
  undefined8 local_520 [157];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_558;
  local_528[0] = 0;
  local_520[0] = 0;
  local_530 = &PTR_LAB_14a1e1920;
  lVar5 = 0x130;
  do {
    *(undefined8 *)((longlong)auStack_5b8 + lVar5) = 0;
    *(undefined8 *)((longlong)auStack_5b8 + lVar5 + 8) = 0;
    *(undefined8 *)((longlong)auStack_5b8 + lVar5 + 0x10) = 0;
    *(undefined8 *)((longlong)&uStack_540 + lVar5) = 0xffffffffffffffff;
    *(undefined4 *)((longlong)auStack_538 + lVar5) = 0xffffffff;
    *(undefined8 *)(local_528 + lVar5 + -8) = 0;
    *(undefined8 *)(local_528 + lVar5) = 0;
    *(undefined8 *)((longlong)local_520 + lVar5) = 0;
    *(undefined8 *)((longlong)local_520 + lVar5 + 8) = 0;
    lVar5 = lVar5 + 0x138;
  } while (lVar5 != 0x610);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  puVar1 = (undefined4 *)*param_1;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  puStack_560 = (undefined *)0x14085322f;
  FUN_14574e24e(param_2 + 4);
  if ((local_10 ^ (ulonglong)auStack_558) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  puStack_560 = &UNK_140853254;
  FUN_144d8e3a0();
}



// FUNCTION 140853256 FUN_140853256 body=501 status=ok
// SIG undefined FUN_140853256(void)

int * FUN_140853256(longlong *param_1,int *param_2)

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
      FUN_14085344c(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x538);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x538) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x538 + *param_1;
  return param_2;
}



// FUNCTION 14085344c FUN_14085344c body=372 status=ok
// SIG undefined FUN_14085344c(void)

void FUN_14085344c(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x538;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408534d6;
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
LAB_1408534d6:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x538)) {
    uVar7 = uVar5 / 0x538 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x538,8);
  return;
}



// FUNCTION 1408535c8 FUN_1408535c8 body=57 status=ok
// SIG undefined FUN_1408535c8(void)

void FUN_1408535c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb637f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb637f8 = FUN_140002ddd(FUN_1464fe292,uVar1,L"GbxShotOriginActorDef");
  }
  return;
}



// FUNCTION 14085360e FUN_14085360e body=269 status=ok
// SIG undefined FUN_14085360e(void)

undefined8 FUN_14085360e(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x140) & 1) == 0) {
    auVar4 = roundpd(ZEXT816(0x412e848100000000),ZEXT816(0x412e848100000000),1);
    do {
      FUN_140212f8e(&local_38);
      *(undefined8 *)(param_1 + 0x120) = local_38;
      FUN_14085383a(param_1);
      FUN_14085371c(param_1);
      plVar1 = *(longlong **)(param_1 + 0x158);
      if (*(int *)(param_1 + 0x130) < 1) {
LAB_14085368f:
        lVar3 = (longlong)auVar4._0_8_;
      }
      else {
        plVar2 = (longlong *)(**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x128) + 0x68))()
        ;
        lVar3 = *plVar2 - *(longlong *)(param_1 + 0x120);
        if ((longlong)auVar4._0_8_ <= lVar3) goto LAB_14085368f;
      }
      lVar3 = lVar3 / 10000;
      if (0xfffffffe < lVar3) {
        lVar3 = 0xffffffff;
      }
      if (lVar3 < 1) {
        lVar3 = 0;
      }
      (**(code **)(*plVar1 + 0x20))(plVar1,lVar3,0);
    } while ((*(byte *)(param_1 + 0x140) & 1) == 0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 14085371c FUN_14085371c body=284 status=ok
// SIG undefined FUN_14085371c(void)

void FUN_14085371c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  if (0 < *(int *)(param_1 + 0x130)) {
    do {
      plVar3 = (longlong *)(**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x128) + 0x68))();
      if (*(longlong *)(param_1 + 0x120) < *plVar3) break;
      FUN_147071d74(param_1 + 0x128,&local_48);
      local_58 = local_48;
      local_50 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
      }
      FUN_142aff96a(param_1,&local_58);
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
    } while (0 < *(int *)(param_1 + 0x130));
    plVar3 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14085383a FUN_14085383a body=337 status=ok
// SIG undefined FUN_14085383a(void)

void FUN_14085383a(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (longlong *)0x0;
  local_38 = 0;
  lVar4 = **(longlong **)(param_1 + 0x118);
  if (lVar4 != 0) {
    do {
      plVar2 = *(longlong **)(lVar4 + 8);
      *(undefined8 *)(lVar4 + 8) = 0;
      iVar1 = *(int *)(lVar4 + 0x10);
      *(undefined4 *)(lVar4 + 0x10) = 0;
      FUN_1400020a8(*(undefined8 *)(param_1 + 0x118));
      *(longlong *)(param_1 + 0x118) = lVar4;
      if (local_38 == 0) {
LAB_140853916:
        if (local_40 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_40 != (longlong *)0x0) {
        (**(code **)*local_40)(local_40,0);
        FUN_1446efa72(&local_40,0,0,0x10);
        local_38 = 0;
        goto LAB_140853916;
      }
      plVar3 = plVar2;
      if (iVar1 == 0) {
        plVar3 = (longlong *)0x0;
      }
      local_40 = plVar2;
      local_38 = iVar1;
      (**(code **)(*plVar3 + 0x58))(plVar3);
      lVar4 = **(longlong **)(param_1 + 0x118);
    } while (lVar4 != 0);
  }
  if (local_38 != 0) {
    if (local_40 == (longlong *)0x0) goto LAB_140853888;
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_40 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140853888:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14085398c FUN_14085398c body=101 status=ok
// SIG undefined FUN_14085398c(void)

void FUN_14085398c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = *(longlong *)(param_1 + 0x20);
  pcVar3 = *(code **)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x30);
  local_18 = *(undefined8 *)(param_1 + 8);
  local_10 = *(longlong *)(param_1 + 0x10);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar2 + iVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408539f2 FUN_1408539f2 body=701 status=ok
// SIG undefined FUN_1408539f2(void)

/* WARNING: Removing unreachable block (ram,0x000140853c51) */
/* WARNING: Removing unreachable block (ram,0x000140853c5d) */
/* WARNING: Removing unreachable block (ram,0x000140853c61) */

longlong FUN_1408539f2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88 [2];
  undefined8 local_78;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = (**(code **)(*(longlong *)*param_2 + 0x20))();
  plVar12 = *(longlong **)(lVar7 + 8);
  if (plVar12 == (longlong *)0x0) {
LAB_140853a3c:
    plVar12 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar12[1];
    do {
      if (iVar5 == 0) goto LAB_140853a3c;
      LOCK();
      iVar4 = (int)plVar12[1];
      bVar16 = iVar5 == iVar4;
      if (bVar16) {
        *(int *)(plVar12 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar16);
  }
  (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,local_88);
  uVar14 = local_88[1]._0_4_ & 0xffff;
  uVar6 = (uint)((ulonglong)local_88[0] >> 0x10);
  uVar13 = local_88[0].s.LowPart & 0xffff;
  uVar6 = (local_88[0].s.LowPart << 0x10 | uVar13) + local_88[0].s.HighPart +
          (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar13 >> 4);
  plVar8 = (longlong *)
           FUN_141323356(param_1 + 0xb0,
                         (uVar6 >> 2) +
                         (local_88[1]._0_4_ << 0x10 | uVar14) + local_88[1]._4_4_ +
                         (local_88[1]._2_4_ << 0x13 | local_88[1]._2_4_ & 0xffff) + (uVar14 >> 4) +
                         uVar6 * 0x40 + 0x9e3779b9 ^ uVar6,local_88);
  lVar7 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  lVar9 = *plVar8;
  iVar5 = (int)plVar8[1];
  lVar15 = (longlong)iVar5;
  if (lVar15 != 0) {
    uVar11 = 0;
    do {
      if (*(longlong *)(lVar9 + uVar11) == lVar7) {
        if ((int)(~uVar11 >> 4) != 0) {
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar3 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              lVar9 = (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                lVar9 = (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          goto LAB_140853b35;
        }
        break;
      }
      uVar11 = uVar11 + 0x10;
    } while (lVar15 << 4 != uVar11);
  }
  *(uint *)(plVar8 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar8 + 0xc) < iVar5 + 1U) {
    FUN_1417362c2(plVar8,iVar5);
    lVar9 = *plVar8;
  }
  *(longlong *)(lVar9 + lVar15 * 0x10) = lVar7;
  *(longlong **)(lVar9 + 8 + lVar15 * 0x10) = plVar3;
LAB_140853b35:
  lVar7 = *(longlong *)(param_1 + 0x148);
  if (*(char *)(lVar7 + 0x1b9) == '\x01') {
    QueryPerformanceCounter(local_88);
    local_68 = &PTR_LAB_14a158620;
    puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *puVar10 = 0;
    puVar10[2] = &DAT_142b01a9c;
    puVar10[4] = 0;
    local_78 = 0;
    *(undefined4 *)(puVar10 + 6) = (undefined4)local_68;
    *(undefined4 *)((longlong)puVar10 + 0x34) = local_68._4_4_;
    *(undefined4 *)(puVar10 + 7) = uStack_60;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = uStack_5c;
    *(undefined4 *)(puVar10 + 8) = local_58;
    *(undefined4 *)((longlong)puVar10 + 0x44) = uStack_54;
    *(undefined4 *)(puVar10 + 9) = uStack_50;
    *(undefined4 *)((longlong)puVar10 + 0x4c) = uStack_4c;
    local_88[0].QuadPart = 0;
    lVar9 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      LOCK();
      puVar2 = (undefined8 *)(lVar7 + 0x1d0);
      plVar3 = (longlong *)*puVar2;
      *puVar2 = puVar10;
      UNLOCK();
      LOCK();
      lVar9 = *plVar3;
      *plVar3 = (longlong)puVar10;
      UNLOCK();
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar12 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      lVar9 = (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        lVar9 = (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  plVar12 = (longlong *)param_2[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar12 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      lVar9 = (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        lVar9 = (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140853cb0 FUN_140853cb0 body=334 status=ok
// SIG undefined FUN_140853cb0(void)

void FUN_140853cb0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
    iVar7 = (int)plVar2[1];
    do {
      if (iVar7 == 0) goto LAB_140853d14;
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    lVar3 = *param_3;
    if (lVar3 != 0) {
      uVar8 = FUN_1448eb174(param_2,0x10,0);
      plVar9 = (longlong *)FUN_14594f520(param_1 + 0x60,uVar8,param_2);
      *plVar9 = lVar3;
      if ((longlong *)plVar9[1] != plVar2) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar4 = (longlong *)plVar9[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        plVar9[1] = (longlong)plVar2;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x148);
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      local_48 = lVar3;
      local_40 = plVar2;
      FUN_14629d580(uVar5,param_2,&local_48);
      plVar9 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      FUN_142b0025c(param_1,param_2,0);
    }
    LOCK();
    plVar9 = plVar2 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
LAB_140853d14:
    if (param_3[1] != 0) {
      LOCK();
      piVar1 = (int *)(param_3[1] + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140853e16 FUN_140853e16 body=235 status=ok
// SIG undefined FUN_140853e16(void)

void FUN_140853e16(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar1 = (longlong *)(param_1 + 0x60);
  uVar5 = FUN_1448eb174(param_2,0x10,0);
  iVar6 = FUN_1413e1950(plVar1,uVar5,param_2);
  if (((iVar6 != -1) && (lVar7 = (longlong)iVar6 * 0x28 + *plVar1, lVar7 != 0)) &&
     (plVar3 = *(longlong **)(lVar7 + 0x18), plVar3 != (longlong *)0x0)) {
    lVar7 = *(longlong *)(lVar7 + 0x10);
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    iVar6 = (int)plVar3[1];
    do {
      plVar8 = (longlong *)0x0;
      if (iVar6 == 0) break;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar9 = iVar6 == iVar4;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
      plVar8 = plVar3;
    } while (!bVar9);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if ((plVar8 == (longlong *)0x0) || (lVar7 == 0)) {
      if (plVar8 == (longlong *)0x0) {
        return;
      }
    }
    else {
      FUN_147071bd2(plVar1,param_2);
      FUN_14706e4f0(*(undefined8 *)(param_1 + 0x148),param_2);
      FUN_142b0025c(param_1,param_2,1);
    }
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
                    /* WARNING: Could not recover jumptable at 0x000140853ec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x10))(plVar8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140853f02 FUN_140853f02 body=61 status=ok
// SIG undefined FUN_140853f02(void)

void FUN_140853f02(longlong *param_1)

{
  char cVar1;
  
  FUN_1402bfe30();
  cVar1 = FUN_1402bfec4(param_1,0);
  if ((cVar1 == '\0') && ((*(byte *)((longlong)param_1 + 0x195) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000140853f31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x310))(param_1);
    return;
  }
  return;
}



// FUNCTION 140853f40 FUN_140853f40 body=1398 status=ok
// SIG undefined FUN_140853f40(void)

void FUN_140853f40(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  longlong *plVar5;
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
  longlong lVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auStack_a8 [32];
  code **local_88;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar5 = *(longlong **)(param_1 + 0xe0);
  if (plVar5 == (longlong *)0x0) goto LAB_14085410c;
  cVar4 = *(char *)((longlong)plVar5 + 0x91);
  *(undefined1 *)((longlong)plVar5 + 0x91) = 0;
  if (plVar5[9] != 0) {
    FUN_147d52990();
  }
  iVar7 = (int)plVar5[1];
  if (0 < iVar7) {
    lVar16 = 0;
    lVar18 = 0;
    do {
      if (*(int *)(*(longlong *)(*plVar5 + lVar18 * 8) + 0x10c) != 0) {
        FUN_1404142d0();
        FUN_1417f1988(plVar5[2] + lVar16);
        iVar7 = (int)plVar5[1];
      }
      lVar18 = lVar18 + 1;
      lVar16 = lVar16 + 0x450;
    } while (lVar18 < iVar7);
  }
  if ((cVar4 != '\0') && (DAT_14ca96da8 != '\0')) {
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar7 = *(int *)(lVar16 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar7 != 2) {
        if (iVar7 != 1) goto LAB_140854007;
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_14085400c;
        goto LAB_14085405e;
      }
    }
    else {
LAB_140854007:
      if (iVar7 != 0x10) {
LAB_14085405e:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar16 + 0xc60), iVar7 == 2))
          goto LAB_14085400c;
          if (iVar7 == 1) {
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            if (DVar8 == DVar9) goto LAB_14085400c;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar2 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar11 = (uint *)*puVar2;
          if (puVar11 != (uint *)0x0) goto LAB_1408541d9;
          while( true ) {
            uVar13 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar13 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar13 | 1;
              __tlregdtor(&LAB_143715770);
            }
            lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar10 = *(undefined4 **)(lVar16 + 0x310);
            *(undefined8 *)(lVar16 + 0x310) = 0;
            if (puVar10 == (undefined4 *)0x0) {
              puVar10 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar10 = 0xffffffff;
            *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            FUN_140217a48(puVar2);
            puVar11 = (uint *)*puVar2;
LAB_1408541d9:
            puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x16);
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
              puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
              puVar15 = (uint *)(puVar17 + 0x16);
              uVar13 = 0;
              if (puVar15 <= puVar11 + 0x4000) {
                uVar13 = 1;
                goto LAB_140854259;
              }
            }
          }
          uVar13 = uVar13 + 1;
LAB_140854259:
          *(uint **)(puVar11 + 0x10) = puVar15;
          puVar11[0x12] = uVar13;
          iVar7 = 0;
          FUN_1447247dc(puVar17,0);
          *puVar17 = &PTR_FUN_14aabc918;
          puVar17[0x15] = plVar5;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar13 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
              uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
              iVar7 = 0;
            }
            else {
              uVar19 = 2;
            }
          }
          else {
            iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                    *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar19 = 5;
          }
          if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
          }
          puVar17[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar17[9] = puVar17;
          puVar17[10] = puVar17;
          lVar16 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar16 == 0) {
            uVar6 = 1;
            if ((char)uVar19 != '\x06') {
              uVar6 = uVar19;
            }
            uVar19 = uVar6;
            uVar12 = 0;
          }
          else {
            if ((char)uVar19 == '\x06') {
              uVar19 = *(ulonglong *)(lVar16 + 0x38) >> 0x3b;
            }
            uVar12 = *(undefined8 *)(lVar16 + 0x30);
          }
          puVar17[0xf] = uVar12;
          puVar17[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar17 + 0x1c) = iVar7;
          if (puVar17 == (undefined8 *)0x0) {
            local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
            UNLOCK();
            local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
            FUN_1447439e4(puVar17);
            LOCK();
            piVar1 = (int *)(puVar17 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar17)(puVar17,1);
            }
          }
        }
        else {
          local_88 = local_78;
          local_68 = (undefined ***)0x0;
          local_58 = &PTR_LAB_14aabc8b0;
          local_78[0] = FUN_14371829c;
          local_50 = plVar5;
          FUN_14005a792(&DAT_14ca9a440,L"CmdReleaseRayTracingGeometryGroup",&DAT_14cb09dac);
          if (local_78[0] != (code *)0x0) {
            pppuVar14 = local_68;
            if (local_68 == (undefined ***)0x0) {
              pppuVar14 = &local_58;
            }
            (*(code *)(*pppuVar14)[2])();
          }
        }
        goto LAB_1408540f5;
      }
    }
LAB_14085400c:
    if ((int)plVar5[0x11] != -1) {
      (**(code **)(*DAT_14ca964f8 + 0x48))();
      *(undefined4 *)(plVar5 + 0x11) = 0xffffffff;
    }
  }
LAB_1408540f5:
  FUN_14109c0c2(plVar5[8]);
  FUN_1400fb146(param_1 + 0x198,0);
LAB_14085410c:
  *(byte *)(param_1 + 0x195) = *(byte *)(param_1 + 0x195) & 0xfe;
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408544b8 FUN_1408544b8 body=583 status=ok
// SIG undefined FUN_1408544b8(void)

void FUN_1408544b8(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_90 [8];
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = (**(code **)(*param_1 + 0x48))();
  if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x155) & 4) == 0)) {
    local_50 = (longlong *)0x0;
    local_48 = 0x400000000;
    fVar10 = (float)(int)param_1[0x11];
    fVar11 = fVar10;
    if (DAT_14c763950 <= fVar10) {
      fVar11 = DAT_14c763950;
    }
    iVar9 = (int)(float)(~-(uint)(0.0 < DAT_14c763950) & (uint)fVar10 |
                        (uint)fVar11 & -(uint)(0.0 < DAT_14c763950));
    uVar8 = 0;
    if (0 < iVar9) {
      do {
        uVar4 = *(uint *)(param_1 + 0x12);
        if ((int)uVar4 < 0 || (int)param_1[0x11] <= (int)uVar4) {
          *(undefined4 *)(param_1 + 0x12) = 0;
          uVar4 = 0;
          if ((int)param_1[0x11] < 1) break;
        }
        lVar5 = param_1[0x10];
        plVar6 = *(longlong **)(lVar5 + (ulonglong)uVar4 * 0x10);
        plVar2 = *(longlong **)(lVar5 + 8 + (ulonglong)uVar4 * 0x10);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        (**(code **)(*plVar6 + 0x60))(plVar6);
        uVar3 = local_48;
        *(int *)(param_1 + 0x12) = (int)param_1[0x12] + 1;
        if (*(char *)((longlong)plVar6 + 0x16c) == '\x02') {
          lVar5 = (longlong)(int)local_48;
          uVar4 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,uVar4);
          if (local_48._4_4_ < uVar4) {
            FUN_1488a5392(local_90,uVar3 & 0xffffffff);
          }
          plVar7 = local_50;
          if (local_50 == (longlong *)0x0) {
            plVar7 = local_90;
          }
          plVar7[lVar5 * 2] = (longlong)plVar6;
          plVar7[lVar5 * 2 + 1] = (longlong)plVar2;
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            goto LAB_1408545b2;
          }
        }
        else if (plVar2 != (longlong *)0x0) {
LAB_1408545b2:
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
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      plVar6 = local_90;
      if (local_50 != (longlong *)0x0) {
        plVar6 = local_50;
      }
      if ((longlong)(int)local_48 != 0) {
        lVar5 = (longlong)(int)local_48 << 4;
        do {
          local_98 = plVar6;
          FUN_14574e856(param_1 + 0x10,&local_98);
          local_98 = (longlong *)CONCAT44(local_98._4_4_,*(undefined4 *)(*plVar6 + 0x184));
          FUN_14574e5b6(param_1 + 4,&local_98);
          plVar6 = plVar6 + 2;
          lVar5 = lVar5 + -0x10;
        } while (lVar5 != 0);
        uVar8 = local_48 & 0xffffffff;
      }
    }
    plVar6 = local_50;
    if (local_50 == (longlong *)0x0) {
      plVar6 = local_90;
    }
    FUN_140854700(plVar6,uVar8);
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140854700 FUN_140854700 body=77 status=ok
// SIG undefined FUN_140854700(void)

void FUN_140854700(longlong param_1,int param_2)

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



// FUNCTION 14085474e FUN_14085474e body=1213 status=ok
// SIG undefined FUN_14085474e(void)

void FUN_14085474e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  code *local_78;
  longlong **local_70;
  undefined1 local_68 [8];
  code **local_60;
  code *local_58;
  code ***local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = FUN_1408d3a8a();
  if ((lVar7 == 0) || ((*(byte *)(lVar7 + 0x155) & 0x20) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
  cVar5 = *(char *)((longlong)param_1 + 0x16c);
  if (cVar5 == '\0') {
    (**(code **)(*param_1 + 0x58))(param_1);
    if (((((*(longlong *)(lVar7 + 0x30) != 0) &&
          (lVar13 = *(longlong *)(*(longlong *)(lVar7 + 0x30) + 0x2b0), lVar13 != 0)) &&
         (*(longlong *)(lVar13 + 0x588) != 0)) &&
        (*(double *)(lVar7 + 0x708) <= *(double *)(lVar7 + 0x6d0))) ||
       (((*(byte *)(lVar7 + 0x154) & 0x40) != 0 && (iVar6 = FUN_14490d72a(lVar7), iVar6 == 3))))
    goto LAB_140854bb8;
    if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
      lVar13 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar13);
        if (*(longlong *)(lVar2 + 0x360) == lVar7) {
          if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x278) & 1) != 0)) goto LAB_140854bb8;
          break;
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar13);
    }
    cVar5 = FUN_144a80e00(lVar7);
    if ((cVar5 != '\0') && (*(char *)(lVar7 + 0x155) < '\0')) goto LAB_140854bb8;
    cVar5 = *(char *)((longlong)param_1 + 0x16c);
  }
  if (cVar5 == '\x01') {
    uVar9 = *(uint *)(param_1 + 0x2f);
    local_88 = lVar7;
    if (0 < (int)uVar9) {
      lVar13 = 0;
      plVar14 = (longlong *)0x0;
      do {
        plVar1 = *(longlong **)(param_1[0x2e] + lVar13 * 8);
        plVar11 = plVar14;
        if (plVar1 != (longlong *)0x0) {
          cVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
          if (cVar5 == '\0') {
            FUN_14097c15a(plVar1);
          }
          else {
            cVar5 = (char)plVar1[10];
            if (cVar5 == '\0') {
              *(undefined1 *)(plVar1 + 10) = 1;
              uVar16 = FUN_141236616(plVar1);
              *(undefined4 *)((longlong)plVar1 + 0x54) = uVar16;
              cVar5 = (char)plVar1[10];
            }
            if ((cVar5 == '\x01') && (cVar5 = (**(code **)(*plVar1 + 0x78))(plVar1), cVar5 != '\0'))
            {
              if ((char)plVar1[10] != '\x02') {
                *(undefined1 *)(plVar1 + 10) = 2;
                uVar16 = FUN_141236616(plVar1);
                *(undefined4 *)((longlong)plVar1 + 0x54) = uVar16;
              }
              (**(code **)(*plVar1 + 0x88))(plVar1);
              FUN_1410c88e8(plVar1[8] + 0x28);
              cVar5 = (**(code **)(*(longlong *)plVar1[9] + 0xb8))();
              if ((cVar5 == '\0') &&
                 (cVar5 = (**(code **)(*(longlong *)plVar1[9] + 0xb0))(), cVar5 != '\0')) {
                FUN_14122bd5e(plVar1[9],DAT_14cb809d0);
                FUN_14122bd00(plVar1);
              }
            }
            if (((char)plVar1[10] == '\x02') &&
               (cVar5 = (**(code **)(*(longlong *)plVar1[9] + 0x98))(), plVar11 = plVar1,
               cVar5 == '\0')) {
              (**(code **)(*plVar1 + 0x90))(plVar1);
              plVar11 = plVar14;
            }
          }
          local_70 = &local_80;
          local_78 = FUN_143d7b0d4;
          lVar7 = plVar1[0xc];
          local_80 = param_1;
          if ((longlong)(int)lVar7 != 0) {
            lVar2 = plVar1[0xb];
            lVar8 = 0;
            do {
              local_60 = &local_78;
              local_50 = &local_60;
              local_58 = FUN_143d7b154;
              FUN_14063f9b0(plVar1[9],local_68,*(undefined4 *)(lVar2 + lVar8));
              FUN_142b3fa7c(plVar1,local_68,&local_58);
              lVar8 = lVar8 + 4;
            } while ((longlong)(int)lVar7 * 4 != lVar8);
          }
          uVar9 = *(uint *)(param_1 + 0x2f);
        }
        lVar7 = local_88;
        lVar13 = lVar13 + 1;
        plVar14 = plVar11;
      } while (lVar13 < (int)uVar9);
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x90))(plVar11);
        uVar9 = *(uint *)(param_1 + 0x2f);
      }
    }
    if (uVar9 != 0) {
      plVar14 = (longlong *)param_1[0x2e];
      if (*plVar14 == 0) {
        bVar15 = true;
      }
      else {
        bVar15 = *(char *)(*plVar14 + 0x50) == '\x03';
      }
      iVar6 = 0;
      uVar12 = 0;
LAB_140854a82:
      do {
        iVar4 = (int)uVar12;
        uVar12 = (ulonglong)(iVar4 + 1U);
        if ((int)(iVar4 + 1U) < (int)uVar9) {
          uVar12 = (longlong)iVar4 + 1;
          bVar3 = true;
          do {
            if (plVar14[uVar12] == 0) {
              if (bVar15 == false) goto LAB_140854add;
            }
            else if ((*(char *)(plVar14[uVar12] + 0x50) == '\x03') != bVar15) goto LAB_140854ac5;
            uVar12 = uVar12 + 1;
            bVar3 = (longlong)uVar12 < (longlong)(int)uVar9;
          } while (uVar12 != (longlong)(int)uVar9);
          uVar12 = (ulonglong)uVar9;
LAB_140854ac5:
          if (bVar15 != false) {
            bVar15 = false;
            if (!bVar3) break;
            goto LAB_140854a82;
          }
        }
        else {
          if (bVar15 != false) break;
          bVar3 = false;
        }
LAB_140854add:
        iVar10 = (int)uVar12 - iVar4;
        if (iVar6 != iVar4) {
          memmove(plVar14 + iVar6,plVar14 + iVar4,(longlong)iVar10 << 3);
        }
        iVar6 = iVar6 + iVar10;
        bVar15 = true;
      } while (bVar3);
      *(int *)(param_1 + 0x2f) = iVar6;
      lVar7 = local_88;
      if (0 < iVar6) goto LAB_140854bb8;
    }
    if (((*(char *)((longlong)param_1 + 0x16c) != '\x02') &&
        ((((*(longlong *)(lVar7 + 0x30) == 0 ||
           (lVar13 = *(longlong *)(*(longlong *)(lVar7 + 0x30) + 0x2b0), lVar13 == 0)) ||
          (*(longlong *)(lVar13 + 0x588) == 0)) ||
         (*(double *)(lVar7 + 0x6d0) < *(double *)(lVar7 + 0x708))))) &&
       (((*(byte *)(lVar7 + 0x154) & 0x40) == 0 || (iVar6 = FUN_14490d72a(lVar7), iVar6 != 3)))) {
      if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
        lVar13 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar13);
          if (*(longlong *)(lVar2 + 0x360) == lVar7) {
            if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x278) & 1) != 0)) goto LAB_140854bb8;
            break;
          }
          lVar13 = lVar13 + 8;
        } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar13);
      }
      cVar5 = FUN_144a80e00(lVar7);
      if ((cVar5 == '\0') || (-1 < *(char *)(lVar7 + 0x155))) {
        (**(code **)(*param_1 + 0x68))(param_1);
      }
    }
  }
LAB_140854bb8:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140854c26 FUN_140854c26 body=95 status=ok
// SIG undefined FUN_140854c26(void)

ulonglong FUN_140854c26(longlong param_1)

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
LAB_140854c68:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140854c68;
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



// FUNCTION 140854c86 FUN_140854c86 body=70 status=ok
// SIG undefined FUN_140854c86(void)

void FUN_140854c86(longlong *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x50))();
  cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  if (((cVar1 == '\0') && ((char)param_1[0xd] == '\x01')) && (param_1[10] != 0)) {
    if (param_1[0xc] != 0) {
      FUN_14480f766(param_1[10] + 0x28);
    }
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  return;
}



// FUNCTION 140854cd4 FUN_140854cd4 body=621 status=ok
// SIG undefined FUN_140854cd4(void)

undefined8 FUN_140854cd4(uint *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_3a;
  undefined1 local_39;
  longlong local_38;
  undefined8 uStack_30;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14a90de84);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar4 = FUN_1448332aa(param_2,&DAT_14a90de84);
    if (iVar4 < 0) {
      uVar5 = FUN_1463796e4();
      local_58 = 0;
      uStack_50 = 0;
      FUN_14496b17c(uVar5,param_2,param_1,uVar5);
      goto LAB_140854d5c;
    }
    if (iVar4 == 0) {
      puVar2 = *(uint **)param_2[1];
      if ((uint *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
        }
        else {
          thunk_FUN_14572512c(param_2,param_1);
        }
      }
      else {
        *param_1 = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      goto LAB_140854d5c;
    }
  }
  if (((*(byte *)((longlong)param_2 + 0x2b) & 10) != 0) ||
     (((*(byte *)(param_2 + 5) & 4) != 0 &&
      ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))))) {
    *(byte *)((longlong)param_1 + 3) = *(byte *)((longlong)param_1 + 3) | 0x80;
  }
  puVar2 = *(uint **)param_2[1];
  if ((uint *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((int)*param_1 < 0) {
    *param_1 = *param_1 & 0x7fffffff;
    local_38 = 0;
    uStack_30 = 0;
    local_39 = 0;
    local_3a = 0;
    FUN_14574e94c(param_2);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (undefined1 *)*puVar3 + 1;
    if ((undefined1 *)puVar3[1] < puVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_39,1);
    }
    else {
      local_39 = *(undefined1 *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (undefined1 *)*puVar3 + 1;
    if ((undefined1 *)puVar3[1] < puVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_3a,1);
    }
    else {
      local_3a = *(undefined1 *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    puVar3 = (ulonglong *)param_2[1];
    if (puVar3[1] < *puVar3 + 4) {
      local_1c = 0;
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
      if (1 < local_1c) {
        FUN_14572541c(param_2);
      }
    }
    else {
      *puVar3 = *puVar3 + 4;
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140854d5c:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140854f42 FUN_140854f42 body=142 status=ok
// SIG undefined FUN_140854f42(void)

undefined8
FUN_140854f42(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4,undefined1 param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined8 unaff_R15;
  undefined1 uVar2;
  
  *(undefined4 *)(param_6 + 8) = 0;
  if (*(int *)(param_6 + 0xc) < 0) {
    FUN_1467d78be(param_6,0);
  }
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = 1;
    FUN_140854fd0();
    uVar1 = FUN_140855172(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_3,
                          CONCAT71((int7)((ulonglong)unaff_R15 >> 8),param_5) & 0xffffffff,param_6,
                          uVar2);
  }
  return uVar1;
}



// FUNCTION 140854fd0 FUN_140854fd0 body=154 status=ok
// SIG undefined FUN_140854fd0(void)

void FUN_140854fd0(undefined8 param_1,longlong param_2,int param_3,uint param_4,longlong param_5,
                  char param_6)

{
  ushort uVar1;
  void *_Dst;
  
  if (0 < (int)param_4) {
    _Dst = (void *)FUN_140855070(param_5,param_4 + 1);
    memcpy(_Dst,(void *)(param_2 + (longlong)param_3 * 2),(ulonglong)param_4 * 2);
    if (param_6 != '\0') {
      *(undefined2 *)((longlong)_Dst + (ulonglong)param_4 * 2) = 0;
    }
    FUN_1408550d0(param_5,param_4);
    return;
  }
  uVar1 = 2;
  if ((*(ushort *)(param_5 + 8) & 1) == 0) {
    uVar1 = *(ushort *)(param_5 + 8) & 0x1e;
  }
  *(ushort *)(param_5 + 8) = uVar1;
  return;
}



// FUNCTION 140855070 FUN_140855070 body=88 status=ok
// SIG undefined FUN_140855070(void)

longlong FUN_140855070(longlong param_1,int param_2)

{
  ushort uVar1;
  char cVar2;
  
  if ((-2 < param_2) && (cVar2 = FUN_1424a7300(param_1,param_2,0xffffffff,1,0,0), cVar2 != '\0')) {
    uVar1 = *(ushort *)(param_1 + 8);
    *(ushort *)(param_1 + 8) = uVar1 & 0xf | 0x10;
    if ((uVar1 & 2) == 0) {
      return *(longlong *)(param_1 + 0x18);
    }
    return param_1 + 10;
  }
  return 0;
}



// FUNCTION 1408550d0 FUN_1408550d0 body=162 status=ok
// SIG undefined FUN_1408550d0(void)

void FUN_1408550d0(longlong param_1,int param_2)

{
  ushort uVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  
  if (param_2 < -1) {
    return;
  }
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 0x10) == 0) {
    return;
  }
  iVar4 = 0x1b;
  if ((uVar1 & 2) == 0) {
    iVar4 = *(int *)(param_1 + 0x10);
  }
  if (param_2 == -1) {
    if ((uVar1 & 2) == 0) {
      psVar3 = *(short **)(param_1 + 0x18);
    }
    else {
      psVar3 = (short *)(param_1 + 10);
    }
    psVar2 = psVar3;
    if (0 < iVar4) {
      do {
        if (*psVar2 == 0) break;
        psVar2 = psVar2 + 1;
      } while (psVar2 < psVar3 + iVar4);
    }
    param_2 = (int)((ulonglong)((longlong)psVar2 - (longlong)psVar3) >> 1);
  }
  else if (iVar4 < param_2) {
    param_2 = iVar4;
  }
  if (param_2 < 0x400) {
    uVar1 = (ushort)(param_2 << 5) | uVar1 & 0x1f;
  }
  else {
    uVar1 = uVar1 | 0xffe0;
    *(int *)(param_1 + 0xc) = param_2;
  }
  *(ushort *)(param_1 + 8) = uVar1 & 0xffef;
  return;
}



// FUNCTION 140855172 FUN_140855172 body=411 status=ok
// SIG undefined FUN_140855172(void)

uint FUN_140855172(undefined8 param_1,longlong param_2,int param_3,char param_4,longlong *param_5)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int *local_60;
  uint local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = 0;
  uVar1 = *(ushort *)(param_2 + 8);
  if ((short)uVar1 < 0) {
    uVar5 = *(uint *)(param_2 + 0xc);
  }
  else {
    uVar5 = (uint)(uVar1 >> 5);
  }
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      param_2 = *(longlong *)(param_2 + 0x18);
    }
    else {
      param_2 = param_2 + 10;
    }
  }
  else {
    param_2 = 0;
  }
  local_60 = &local_4c;
  local_68 = 0;
  FUN_1424db570(param_1,param_2,uVar5,param_4 != '\0');
  if (local_4c < 1) {
    iVar3 = FUN_1424de330(param_1);
    uVar5 = (uint)(iVar3 == 1);
    if (iVar3 == 2) {
      uVar5 = 2;
    }
    uVar4 = FUN_1424dfd80(param_1);
    iVar3 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar3 + uVar4;
    if ((uint)(*(int *)((longlong)param_5 + 0xc) - iVar3) < uVar4) {
      FUN_140868826(param_5);
    }
    memset((void *)((longlong)iVar3 * 0xc + *param_5),0,(longlong)(int)uVar4 * 0xc);
    if (0 < (int)uVar4) {
      lVar7 = 8;
      uVar6 = 0;
      local_58 = uVar5;
      do {
        lVar2 = *param_5;
        local_50 = 0;
        local_54 = 0;
        iVar3 = FUN_1424e05e0(param_1,uVar6 & 0xffffffff,&local_50,&local_54);
        uVar8 = iVar3 == 1;
        if (iVar3 == 2) {
          uVar8 = 2;
        }
        *(undefined1 *)(lVar2 + lVar7) = uVar8;
        *(int *)(lVar2 + -8 + lVar7) = local_50 + param_3;
        *(undefined4 *)(lVar2 + -4 + lVar7) = local_54;
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0xc;
        uVar5 = local_58;
      } while (uVar4 != uVar6);
    }
  }
  else {
    uVar5 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14085530e FUN_14085530e body=368 status=ok
// SIG undefined FUN_14085530e(void)

void FUN_14085530e(longlong *param_1)

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
  iVar6 = (int)param_1[9];
  if (iVar6 < 2) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
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
    else if (iVar6 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[9]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  FUN_140855494(param_1,0);
  *(undefined4 *)(param_1 + 9) = 1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1402ebebe(param_1);
  return;
}



// FUNCTION 140855494 FUN_140855494 body=121 status=ok
// SIG undefined FUN_140855494(void)

void FUN_140855494(longlong param_1,int param_2)

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



// FUNCTION 14085550e FUN_14085550e body=1224 status=ok
// SIG undefined FUN_14085550e(void)

/* WARNING: Removing unreachable block (ram,0x0001408559c2) */
/* WARNING: Removing unreachable block (ram,0x0001408559cc) */
/* WARNING: Removing unreachable block (ram,0x000140855994) */
/* WARNING: Removing unreachable block (ram,0x00014085599e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14085550e(double *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                      char param_5)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined1 auStack_3d8 [32];
  undefined8 local_3b8;
  int local_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double local_390;
  double dStack_388;
  double local_380;
  undefined8 local_378;
  longlong *plStack_370;
  undefined4 local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined8 local_350;
  longlong *plStack_348;
  undefined8 local_340;
  undefined1 local_338 [768];
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  param_1[2] = DAT_14cb1d030;
  dVar3 = DAT_14cb1d028;
  *param_1 = DAT_14cb1d020;
  param_1[1] = dVar3;
  *(undefined2 *)(param_1 + 3) = 0;
  local_340 = param_3;
  if (param_5 == '\0') {
    local_38 = 0;
    local_30 = 0;
    uStack_2c = 0x20;
    uStack_28 = 0xffffffff;
    local_24 = 0xffffffff;
    local_358 = *(undefined4 *)(param_4 + 1);
    local_360 = *param_4;
    local_350 = param_4[2];
    plStack_348 = (longlong *)param_4[3];
    if (plStack_348 == (longlong *)0x0) {
      plStack_348 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)((longlong)plStack_348 + 0xc) = *(int *)((longlong)plStack_348 + 0xc) + 1;
      UNLOCK();
    }
    FUN_1408559d8(param_2,local_338,*(undefined4 *)param_4);
    cVar5 = FUN_140855a9c(&local_360,param_1,0);
    if (cVar5 == '\0') {
      dVar3 = *param_1;
      if (((((-DAT_14cb1d020 < dVar3) && (dVar3 < DAT_14cb1d020)) && (-DAT_14cb1d028 < param_1[1]))
          && ((param_1[1] < DAT_14cb1d028 && (-DAT_14cb1d030 < param_1[2])))) &&
         (((param_1[2] < DAT_14cb1d030 &&
           ((iVar6 = _finite(dVar3), iVar6 != 0 && (iVar6 = _finite(param_1[1]), iVar6 != 0)))) &&
          (iVar6 = _finite(param_1[2]), iVar6 != 0)))) {
        *(undefined1 *)(param_1 + 3) = 1;
      }
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x19) = 1;
    }
    goto LAB_140855620;
  }
  local_38 = 0;
  local_30 = 0;
  uStack_2c = 0x20;
  local_358 = *(undefined4 *)(param_4 + 1);
  local_360 = *param_4;
  local_350 = param_4[2];
  plStack_348 = (longlong *)param_4[3];
  if (plStack_348 == (longlong *)0x0) {
    plStack_348 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)((longlong)plStack_348 + 0xc) = *(int *)((longlong)plStack_348 + 0xc) + 1;
    UNLOCK();
  }
  FUN_1408559d8(param_2,local_338,*(undefined4 *)param_4);
  local_3b8 = 0xffffffffffffffff;
  local_3b0 = 0;
  local_3a8 = DAT_14cb1d020;
  dStack_3a0 = DAT_14cb1d028;
  local_398 = DAT_14cb1d030;
  local_390 = DAT_14cb1d020;
  dStack_388 = DAT_14cb1d028;
  local_380 = DAT_14cb1d030;
  local_378 = 0;
  plStack_370 = (longlong *)0x0;
  local_368 = 0xffffffff;
  iVar6 = FUN_140855c74(&local_360);
  if (iVar6 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  }
  else if (local_3b0 - 1U < 2) {
    if (((int)local_3b8 != -1) && (local_3b8._4_4_ != -1)) {
LAB_14085587a:
      if (((-DAT_14cb1d020 < local_3a8) &&
          (((local_3a8 < DAT_14cb1d020 && (-DAT_14cb1d028 < dStack_3a0)) &&
           (dStack_3a0 < DAT_14cb1d028)))) &&
         ((((-DAT_14cb1d030 < local_398 && (local_398 < DAT_14cb1d030)) &&
           (iVar6 = _finite(local_3a8), iVar6 != 0)) &&
          ((iVar6 = _finite(dStack_3a0), iVar6 != 0 && (iVar6 = _finite(local_398), iVar6 != 0))))))
      {
        *(undefined1 *)(param_1 + 3) = 1;
        *param_1 = local_3a8;
        param_1[1] = dStack_3a0;
        param_1[2] = local_398;
      }
    }
  }
  else if (local_3b0 == 3) goto LAB_14085587a;
  plVar4 = plStack_370;
  if (plStack_370 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_370 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_370)(plStack_370);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_140855620:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (plStack_348 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_348 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_348 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1408559d8 FUN_1408559d8 body=196 status=ok
// SIG undefined FUN_1408559d8(void)

void FUN_1408559d8(undefined4 *param_1,longlong param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  iVar3 = *(int *)(param_2 + 0x308);
  *(uint *)(param_2 + 0x308) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x30c) < iVar3 + 1U) {
    FUN_147e43da8(param_2,iVar3);
  }
  lVar8 = *(longlong *)(param_2 + 0x300);
  if (*(longlong *)(param_2 + 0x300) == 0) {
    lVar8 = param_2;
  }
  *(undefined8 *)(lVar8 + 0x10 + (longlong)iVar3 * 0x18) = *(undefined8 *)(param_1 + 4);
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  puVar1 = (undefined4 *)(lVar8 + (longlong)iVar3 * 0x18);
  *puVar1 = *param_1;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  FUN_14022d076(param_1,param_2,param_1 + 6,param_3);
  iVar3 = *(int *)(param_2 + 0x308);
  *(uint *)(param_2 + 0x308) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x30c) < iVar3 + 1U) {
    FUN_147e43da8(param_2,iVar3);
  }
  lVar8 = *(longlong *)(param_2 + 0x300);
  if (*(longlong *)(param_2 + 0x300) == 0) {
    lVar8 = param_2;
  }
  *(undefined8 *)(lVar8 + 0x10 + (longlong)iVar3 * 0x18) = *(undefined8 *)(param_1 + 0x16);
  uVar7 = *(undefined8 *)(param_1 + 0x14);
  puVar2 = (undefined8 *)(lVar8 + (longlong)iVar3 * 0x18);
  *puVar2 = *(undefined8 *)(param_1 + 0x12);
  puVar2[1] = uVar7;
  return;
}



// FUNCTION 140855a9c FUN_140855a9c body=471 status=ok
// SIG undefined FUN_140855a9c(void)

ulonglong FUN_140855a9c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong unaff_RBP;
  longlong lVar8;
  undefined1 auStack_e8 [40];
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (1 < *(int *)(param_1 + 0x66)) {
    if (param_2 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)param_1[0x65];
      if ((undefined8 *)param_1[0x65] == (undefined8 *)0x0) {
        puVar6 = param_1 + 5;
      }
      param_2[2] = puVar6[2];
      uVar3 = puVar6[1];
      *param_2 = *puVar6;
      param_2[1] = uVar3;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = param_1[0x67];
    }
    lVar5 = param_1[4];
    if (lVar5 != 0) {
      local_a8 = *(undefined4 *)(param_1 + 1);
      local_b0 = *param_1;
      local_a0 = param_1[2];
      local_98 = (longlong *)param_1[3];
      if (local_98 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_98 + 0xc) = *(int *)((longlong)local_98 + 0xc) + 1;
        UNLOCK();
        lVar5 = param_1[4];
      }
      local_88 = DAT_14cb1cda8;
      uStack_80 = DAT_14cb1cdb0;
      local_78 = DAT_14cb1cdb8;
      local_70 = DAT_14cb1cda8;
      uStack_68 = DAT_14cb1cdb0;
      local_60 = DAT_14cb1cdb8;
      local_58 = 0xffffffffffffffff;
      uStack_50 = 0xffffffff;
      uStack_4c = 0xffffffff;
      local_b8 = param_1[0x67];
      lVar8 = -1;
      lVar7 = 0;
      local_c0 = param_3;
      local_90 = lVar5;
      do {
        lVar8 = lVar8 + 1;
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),(longlong)*(int *)(param_1 + 0x66) + -1 <= lVar8
                            );
        if ((longlong)*(int *)(param_1 + 0x66) + -1 <= lVar8) break;
        local_58 = local_b8;
        puVar6 = (undefined8 *)param_1[0x65];
        if ((undefined8 *)param_1[0x65] == (undefined8 *)0x0) {
          puVar6 = param_1 + 5;
        }
        local_78 = *(undefined8 *)((longlong)puVar6 + lVar7 + 0x10);
        local_88 = *(undefined8 *)((longlong)puVar6 + lVar7);
        uStack_80 = ((undefined8 *)((longlong)puVar6 + lVar7))[1];
        puVar2 = (undefined8 *)((longlong)puVar6 + lVar7 + 0x18);
        local_70 = *puVar2;
        uStack_68 = puVar2[1];
        local_60 = *(undefined8 *)((longlong)puVar6 + lVar7 + 0x28);
        cVar4 = FUN_14038d3af(&local_b0,param_2,&local_b8);
        lVar7 = lVar7 + 0x18;
      } while (cVar4 != '\0');
      if (local_c0 != (undefined8 *)0x0) {
        *local_c0 = local_b8;
      }
      if (local_98 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_98 + 0x10))();
        }
      }
      goto LAB_140855c1f;
    }
  }
  unaff_RBP = 0;
LAB_140855c1f:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140855c74 FUN_140855c74 body=440 status=ok
// SIG undefined FUN_140855c74(void)

/* WARNING: Removing unreachable block (ram,0x000140855e10) */
/* WARNING: Removing unreachable block (ram,0x000140855e1a) */

int FUN_140855c74(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong *plStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x66) < 2) {
    iVar2 = 9;
  }
  else if (param_1[4] == 0) {
    iVar2 = 4;
  }
  else {
    local_98 = DAT_14cb1c748;
    local_a8 = DAT_14cb1c738;
    uStack_a0 = DAT_14cb1c740;
    local_8c = 0;
    local_78 = DAT_14cb1c748;
    local_88 = DAT_14cb1c738;
    uStack_80 = DAT_14cb1c740;
    local_68 = *(undefined4 *)(param_1 + 1);
    local_70 = *param_1;
    local_60 = param_1[2];
    plStack_58 = (longlong *)param_1[3];
    if (plStack_58 == (longlong *)0x0) {
      plStack_58 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)((longlong)plStack_58 + 0xc) = *(int *)((longlong)plStack_58 + 0xc) + 1;
      UNLOCK();
    }
    local_50 = param_1[4];
    lVar5 = -1;
    lVar4 = 0;
    do {
      lVar5 = lVar5 + 1;
      iVar2 = 0;
      if ((longlong)*(int *)(param_1 + 0x66) + -1 <= lVar5) break;
      puVar3 = (undefined8 *)param_1[0x65];
      if ((undefined8 *)param_1[0x65] == (undefined8 *)0x0) {
        puVar3 = param_1 + 5;
      }
      local_98 = *(undefined8 *)((longlong)puVar3 + lVar4 + 0x10);
      local_a8 = *(undefined8 *)((longlong)puVar3 + lVar4);
      uStack_a0 = ((undefined8 *)((longlong)puVar3 + lVar4))[1];
      local_78 = *(undefined8 *)((longlong)puVar3 + lVar4 + 0x28);
      puVar3 = (undefined8 *)((longlong)puVar3 + lVar4 + 0x18);
      local_88 = *puVar3;
      uStack_80 = puVar3[1];
      iVar2 = FUN_140855e2d(&local_a8,param_2,0);
      lVar4 = lVar4 + 0x18;
    } while (iVar2 == 0);
    if (plStack_58 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plStack_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_58 + 0x10))();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140855e2d FUN_140855e2d body=6224 status=ok
// SIG undefined FUN_140855e2d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_140855e2d(double *param_1,uint *param_2,double *param_3)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined1 (*pauVar22) [16];
  double *pdVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  char cVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  LPVOID pvVar32;
  longlong lVar33;
  undefined **ppuVar34;
  undefined **ppuVar35;
  int iVar36;
  undefined **ppuVar37;
  bool bVar38;
  undefined8 unaff_RBX;
  ulonglong uVar39;
  undefined **ppuVar40;
  undefined **ppuVar41;
  longlong lVar42;
  undefined1 (*pauVar43) [16];
  longlong lVar44;
  longlong *plVar45;
  longlong lVar46;
  undefined **ppuVar47;
  ulonglong uVar48;
  longlong lVar49;
  undefined **ppuVar50;
  undefined **ppuVar51;
  undefined ***pppuVar52;
  bool bVar53;
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  uint uVar66;
  uint uVar67;
  undefined1 auVar65 [16];
  uint uVar68;
  double dVar69;
  undefined1 auVar70 [16];
  float fVar71;
  double dVar72;
  float fVar76;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar84;
  undefined1 auVar83 [16];
  undefined1 auStack_538 [32];
  double *local_518;
  undefined **local_510;
  longlong local_508;
  float local_4fc;
  uint *local_4f8;
  undefined1 (*local_4f0) [16];
  double *local_4e8;
  longlong local_4e0;
  uint local_4d4;
  longlong local_4d0;
  undefined1 local_4c8 [16];
  double local_4b0;
  undefined **local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_490;
  undefined8 uStack_488;
  double local_480;
  longlong local_478;
  ulonglong local_470;
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined **local_448;
  undefined **ppuStack_440;
  undefined1 local_438;
  undefined **local_428;
  undefined **ppuStack_420;
  undefined **local_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined **local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d8;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined **local_118;
  undefined *puStack_110;
  double local_108;
  undefined *puStack_100;
  ulonglong local_f0;
  undefined1 auVar73 [16];
  undefined1 auVar82 [16];
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_538;
  dVar61 = *param_1;
  fVar80 = 1.26117e-44;
  if ((((((dVar61 <= -DAT_14cb1c738) || (DAT_14cb1c738 <= dVar61)) || (param_1[1] <= -DAT_14cb1c740)
        ) || ((DAT_14cb1c740 <= param_1[1] || (param_1[2] <= -DAT_14cb1c748)))) ||
      ((DAT_14cb1c748 <= param_1[2] ||
       ((iVar28 = _finite(dVar61), iVar28 == 0 || (iVar28 = _finite(param_1[1]), iVar28 == 0))))))
     || ((iVar28 = _finite(param_1[2]), iVar28 == 0 ||
         (((((dVar61 = param_1[4], dVar61 <= -DAT_14cb1c738 || (DAT_14cb1c738 <= dVar61)) ||
            (param_1[5] <= -DAT_14cb1c740)) ||
           (((DAT_14cb1c740 <= param_1[5] || (param_1[6] <= -DAT_14cb1c748)) ||
            ((DAT_14cb1c748 <= param_1[6] ||
             ((iVar28 = _finite(dVar61), iVar28 == 0 || (iVar28 = _finite(param_1[5]), iVar28 == 0))
             )))))) ||
          (iVar28 = _finite(param_1[6]), ppuVar41 = DAT_14cb1c870, ppuVar34 = DAT_14cb1c868,
          ppuVar47 = DAT_14cb1c860, iVar28 == 0)))))) goto LAB_140856911;
  pauVar43 = (undefined1 (*) [16])(param_1 + 4);
  if ((0x1e < *(uint *)(param_1 + 8)) && (*(uint *)(param_1 + 8) == 0x200)) {
    ppuStack_408 = (undefined **)param_1[6];
    local_418 = *(undefined ***)*pauVar43;
    ppuStack_410 = (undefined **)param_1[5];
    local_468 = *pauVar43;
    local_458._8_8_ = DAT_14cb1c860;
    local_458._0_8_ = ppuStack_408;
    local_448 = DAT_14cb1c868;
    ppuStack_440 = DAT_14cb1c870;
    local_428 = (undefined **)0xffffffffffffffff;
    ppuStack_420 = (undefined **)CONCAT44(ppuStack_420._4_4_,3);
    local_400 = DAT_14cb1c860;
    local_3f8 = DAT_14cb1c868;
    uStack_3f0 = DAT_14cb1c870;
    local_3e8 = 0;
    uStack_3e0 = (longlong *)0x0;
    local_3d8 = 0xffffffff;
    param_2[0] = 0xffffffff;
    param_2[1] = 0xffffffff;
    param_2[2] = 3;
    *(undefined ***)(param_2 + 4) = local_418;
    *(undefined ***)(param_2 + 6) = ppuStack_410;
    *(undefined ***)(param_2 + 8) = ppuStack_408;
    *(undefined ***)(param_2 + 10) = ppuVar47;
    *(undefined ***)(param_2 + 0xc) = ppuVar34;
    *(undefined ***)(param_2 + 0xe) = ppuVar41;
    FUN_144a7c4b8(param_2 + 0x10,&local_3e8);
    plVar45 = uStack_3e0;
    if (uStack_3e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = uStack_3e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*uStack_3e0)(uStack_3e0);
        LOCK();
        piVar2 = (int *)((longlong)plVar45 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar45 + 0x10))(plVar45);
        }
      }
    }
    fVar80 = 0.0;
    goto LAB_140856911;
  }
  if (param_1[0xb] == 0.0) {
    fVar80 = 5.60519e-45;
    goto LAB_140856911;
  }
  lVar42 = *(longlong *)((longlong)param_1[0xb] + 0x598);
  local_4f0 = pauVar43;
  if (DAT_14cb1d000 == 0) {
LAB_1408571bc:
    uVar39 = 0;
  }
  else {
    pvVar32 = TlsGetValue(DAT_14cb1d000);
    TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar32 + 1));
    if ((int)pvVar32 != 0) goto LAB_1408571bc;
    AcquireSRWLockShared((PSRWLOCK)(lVar42 + 0x250));
    uVar39 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  fVar80 = 7.00649e-45;
  if ((*(longlong *)(lVar42 + 0x78) != 0) &&
     (lVar33 = *(longlong *)(*(longlong *)(lVar42 + 0x78) + 0x140), lVar33 != 0)) {
    local_4e0 = lVar33;
    lVar33 = FUN_144b3f1e0();
    if (lVar33 != 0) {
      local_478 = 0;
      local_470 = 0x8000000000000000;
      if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
        fVar77 = 0.01;
      }
      else {
        fVar77 = *(float *)(param_1 + 3);
      }
      fVar80 = 1.26117e-44;
      if (0.0 <= fVar77) {
        dVar61 = param_1[4];
        dVar69 = (double)fVar77;
        dVar54 = *param_1 - dVar69;
        if (dVar61 <= dVar54) {
          dVar54 = dVar61;
        }
        dVar3 = param_1[5];
        dVar72 = param_1[1] - dVar69;
        if (dVar3 <= dVar72) {
          dVar72 = dVar3;
        }
        dVar4 = param_1[6];
        fVar77 = 0.0;
        fVar78 = 0.0;
        dVar10 = param_1[2] - dVar69;
        if (dVar4 <= dVar10) {
          dVar10 = dVar4;
        }
        dVar57 = *param_1 + dVar69;
        if (dVar57 <= dVar61) {
          dVar57 = dVar61;
        }
        dVar61 = param_1[1] + dVar69;
        if (dVar61 <= dVar3) {
          dVar61 = dVar3;
        }
        dVar69 = param_1[2] + dVar69;
        if (dVar69 <= dVar4) {
          dVar69 = dVar4;
        }
        ppuStack_410 = (undefined **)0x0;
        ppuStack_408 = (undefined **)0x0;
        local_400 = (undefined **)0x0;
        local_428 = &PTR_LAB_14ab9eff0;
        fVar64 = (float)dVar69;
        local_468._4_4_ = (float)dVar72;
        local_468._0_4_ = (float)dVar54;
        local_128 = (undefined **)CONCAT44((float)dVar61,(float)dVar57);
        local_3f8 = (undefined **)CONCAT44((float)dVar72 * 0.01,(float)dVar54 * 0.01);
        uStack_3f0 = (undefined **)CONCAT44((float)dVar10 * 0.01,(float)dVar10 * 0.01);
        local_3e8 = CONCAT44((float)dVar61 * 0.01,(float)dVar57 * 0.01);
        uStack_3e0 = (longlong *)CONCAT44(fVar64 * 0.01,fVar64 * 0.01);
        iVar28 = -0x80000000;
        if (*(int *)(param_1 + 8) != -1) {
          iVar28 = 1 << ((byte)*(int *)(param_1 + 8) & 0x1f);
        }
        local_418 = (undefined **)CONCAT44(local_418._4_4_,iVar28);
        FUN_144b44640(lVar33,&local_428,&local_478,fVar64);
        if ((local_470 & 0xffffffff) != 0) {
          local_480 = param_1[6] - param_1[2];
          auVar58._0_8_ = (undefined **)(param_1[5] - param_1[1]);
          auVar58._8_8_ = 0;
          local_490 = param_1[4] - *param_1;
          local_4a8 = (undefined **)0x0;
          uStack_4a0 = 0;
          uStack_488 = (double)auVar58._0_8_;
          if ((int)(uint)local_470 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(local_470 & 0xffffffff);
          }
          uVar29 = FUN_14085767e(&local_4a8);
          if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
            fVar80 = -1.0;
          }
          else {
            fVar80 = *(float *)(param_1 + 3) * *(float *)(param_1 + 3);
          }
          local_4d4 = (uint)uVar39;
          fVar64 = fVar77;
          fVar79 = fVar78;
          local_4e8 = param_3;
          local_4d0 = lVar42;
          if ((uint)local_470 == 0) {
            uVar30 = 0xffffffff;
            bVar38 = false;
            uVar31 = 0xffffffff;
          }
          else {
            uVar30 = 0xffffffff;
            uVar39 = 0;
            uVar29 = 0xffffffff;
            bVar38 = false;
            lVar42 = local_4e0;
            pauVar43 = local_4f0;
            uVar31 = (uint)local_470;
            do {
              uVar66 = *(uint *)(local_478 + uVar39 * 4);
              lVar33 = *(longlong *)
                        (*(longlong *)(lVar42 + 0x38) + 8 + (ulonglong)((uVar66 >> 0x16) * 0x120));
              if (lVar33 != 0) {
                lVar49 = *(longlong *)(*(longlong *)(lVar33 + 0x20) + 0x38);
                auVar59 = *(undefined1 (*) [16])
                           (*(longlong *)(*(longlong *)(lVar33 + 0x20) + 0x18) +
                           (ulonglong)(uVar66 & 0x3fffff) * 0x18);
                auVar58 = pmovzxwd(auVar58,auVar59);
                auVar75._0_4_ =
                     (float)auVar58._0_4_ * *(float *)(lVar49 + 0xa0) + *(float *)(lVar49 + 0xb0);
                auVar75._4_4_ =
                     (float)auVar58._4_4_ * *(float *)(lVar49 + 0xa4) + *(float *)(lVar49 + 0xb4);
                auVar75._8_4_ =
                     (float)auVar58._8_4_ * *(float *)(lVar49 + 0xa8) + *(float *)(lVar49 + 0xb8);
                auVar75._12_4_ =
                     (float)auVar58._12_4_ * *(float *)(lVar49 + 0xac) + *(float *)(lVar49 + 0xbc);
                auVar62._0_4_ =
                     (float)auVar59._8_2_ * *(float *)(lVar49 + 0xa0) + *(float *)(lVar49 + 0xb0);
                auVar62._4_4_ =
                     (float)auVar59._10_2_ * *(float *)(lVar49 + 0xa4) + *(float *)(lVar49 + 0xb4);
                auVar62._8_4_ =
                     (float)auVar59._12_2_ * *(float *)(lVar49 + 0xa8) + *(float *)(lVar49 + 0xb8);
                auVar62._12_4_ =
                     (float)auVar59._14_2_ * *(float *)(lVar49 + 0xac) + *(float *)(lVar49 + 0xbc);
                if (*(byte *)(lVar33 + 0x40) != 0) {
                  uVar31 = (uint)*(byte *)(lVar33 + 0x40);
                  auVar60._0_4_ = 0x16a8300 << uVar31;
                  auVar60._4_4_ = 0x502ab000 << uVar31;
                  auVar60._8_4_ = 0xa2a8c00 << uVar31;
                  auVar60._12_4_ = 0 << uVar31;
                  auVar65._4_4_ = auVar75._8_4_;
                  auVar65._0_4_ = auVar75._4_4_;
                  auVar65._8_4_ = auVar75._0_4_;
                  auVar65._12_4_ = auVar75._12_4_;
                  auVar63._0_4_ = 0xa154c00 << uVar31;
                  auVar63._4_4_ = 0x1554300 << uVar31;
                  auVar63._8_4_ = 0x50157000 << uVar31;
                  auVar63._12_4_ = 0 << uVar31;
                  auVar58 = blendvps(auVar75,auVar65,auVar60);
                  auVar59._4_4_ = auVar75._0_4_;
                  auVar59._0_4_ = auVar75._8_4_;
                  auVar59._8_4_ = auVar75._4_4_;
                  auVar59._12_4_ = auVar75._12_4_;
                  auVar58 = blendvps(auVar58,auVar59,auVar63);
                  uVar48 = (ulonglong)uVar31;
                  uVar31 = (0xae71e0U >> uVar48) << 0x1f;
                  uVar66 = (0xb9e306U >> uVar48) << 0x1f;
                  uVar67 = (0xeb903cU >> uVar48) << 0x1f;
                  uVar68 = (0U >> uVar48) << 0x1f;
                  auVar70._4_4_ = auVar62._8_4_;
                  auVar70._0_4_ = auVar62._4_4_;
                  auVar70._8_4_ = auVar62._0_4_;
                  auVar70._12_4_ = auVar62._12_4_;
                  auVar59 = blendvps(auVar62,auVar70,auVar60);
                  auVar7._4_4_ = auVar62._0_4_;
                  auVar7._0_4_ = auVar62._8_4_;
                  auVar7._8_4_ = auVar62._4_4_;
                  auVar7._12_4_ = auVar62._12_4_;
                  auVar59 = blendvps(auVar59,auVar7,auVar63);
                  auVar74._0_8_ = CONCAT44(auVar58._4_4_ ^ uVar66,auVar58._0_4_ ^ uVar31);
                  auVar74._8_4_ = auVar58._8_4_ ^ uVar67;
                  auVar74._12_4_ = auVar58._12_4_ ^ uVar68;
                  auVar83._0_4_ = auVar59._0_4_ ^ uVar31;
                  auVar83._4_4_ = auVar59._4_4_ ^ uVar66;
                  auVar83._8_4_ = auVar59._8_4_ ^ uVar67;
                  auVar83._12_4_ = auVar59._12_4_ ^ uVar68;
                  auVar56._8_4_ = auVar74._8_4_;
                  auVar56._0_8_ = auVar74._0_8_;
                  auVar56._12_4_ = auVar74._12_4_;
                  auVar75 = minps(auVar74,auVar83);
                  auVar62 = maxps(auVar56,auVar83);
                }
                fVar71 = auVar75._0_4_ + *(float *)(lVar33 + 0x50);
                fVar76 = auVar75._4_4_ + *(float *)(lVar33 + 0x54);
                auVar73._0_8_ = (double)CONCAT44(fVar76,fVar71);
                auVar73._8_4_ = auVar75._8_4_ + *(float *)(lVar33 + 0x58);
                auVar73._12_4_ = auVar75._12_4_ + *(float *)(lVar33 + 0x5c);
                fVar81 = auVar62._0_4_ + *(float *)(lVar33 + 0x50);
                fVar84 = auVar62._4_4_ + *(float *)(lVar33 + 0x54);
                auVar82._0_8_ = (double)CONCAT44(fVar84,fVar81);
                auVar82._8_4_ = auVar62._8_4_ + *(float *)(lVar33 + 0x58);
                auVar82._12_4_ = auVar62._12_4_ + *(float *)(lVar33 + 0x5c);
                local_428 = (undefined **)((double)fVar71 * 100.0);
                auVar58._0_8_ = (undefined **)((double)fVar76 * 100.0);
                auVar58._8_8_ = 0;
                local_418 = (undefined **)((double)auVar73._8_4_ * 100.0);
                ppuStack_410 = (undefined **)((double)fVar81 * 100.0);
                ppuStack_408 = (undefined **)((double)fVar84 * 100.0);
                local_400 = (undefined **)((double)auVar82._8_4_ * 100.0);
                local_3f8 = (undefined **)CONCAT71(local_3f8._1_7_,1);
                if (uVar30 == 0xffffffff) {
                  ppuVar47 = (undefined **)*param_1;
                  if (((((double)ppuVar47 < (double)local_428) ||
                       ((double)ppuStack_410 < (double)ppuVar47)) ||
                      (param_1[1] < (double)auVar58._0_8_)) ||
                     ((((double)ppuStack_408 < param_1[1] || (param_1[2] < (double)local_418)) ||
                      ((double)local_400 < param_1[2])))) {
                    uVar30 = 0xffffffff;
                    if (0.0 < fVar80) {
                      local_4c8._8_4_ = fVar77;
                      local_4c8._0_8_ = dVar69;
                      local_4c8._12_4_ = fVar78;
                      ppuVar34 = local_428;
                      if (((double)local_428 <= (double)ppuVar47) &&
                         (ppuVar34 = ppuVar47, (double)ppuStack_410 < (double)ppuVar47)) {
                        ppuVar34 = ppuStack_410;
                      }
                      ppuVar41 = (undefined **)param_1[1];
                      ppuVar51 = auVar58._0_8_;
                      if (((double)auVar58._0_8_ <= (double)ppuVar41) &&
                         (ppuVar51 = ppuVar41, (double)ppuStack_408 < (double)ppuVar41)) {
                        ppuVar51 = ppuStack_408;
                      }
                      ppuVar40 = (undefined **)param_1[2];
                      ppuVar37 = local_418;
                      if (((double)local_418 <= (double)ppuVar40) &&
                         (ppuVar37 = ppuVar40, (double)local_400 < (double)ppuVar40)) {
                        ppuVar37 = local_400;
                      }
                      fVar71 = (float)(((double)ppuVar37 - (double)ppuVar40) *
                                       ((double)ppuVar37 - (double)ppuVar40) +
                                      ((double)ppuVar34 - (double)ppuVar47) *
                                      ((double)ppuVar34 - (double)ppuVar47) +
                                      ((double)ppuVar51 - (double)ppuVar41) *
                                      ((double)ppuVar51 - (double)ppuVar41));
                      local_4fc = fVar80;
                      if ((fVar71 < fVar80) && ((local_510._0_4_ <= fVar71 & bVar38) == 0)) {
                        local_508 = CONCAT44(local_508._4_4_,*(undefined4 *)(local_478 + uVar39 * 4)
                                            );
                        bVar38 = true;
                        local_510 = (undefined **)CONCAT44(local_510._4_4_,fVar71);
                        fVar77 = auVar73._8_4_;
                        fVar78 = auVar73._12_4_;
                        fVar64 = auVar82._8_4_;
                        fVar79 = auVar82._12_4_;
                        dVar69 = auVar73._0_8_;
                        dVar10 = auVar82._0_8_;
                      }
                    }
                  }
                  else {
                    uVar30 = *(uint *)(local_478 + uVar39 * 4);
                    if (bVar38) {
                      bVar38 = false;
                    }
                  }
                }
                if (uVar29 == 0xffffffff) {
                  uVar29 = 0xffffffff;
                  if ((((((double)local_428 <= *(double *)*pauVar43) &&
                        (*(double *)*pauVar43 <= (double)ppuStack_410)) &&
                       ((double)auVar58._0_8_ <= param_1[5])) &&
                      ((param_1[5] <= (double)ppuStack_408 && ((double)local_418 <= param_1[6]))))
                     && (param_1[6] <= (double)local_400)) {
                    uVar29 = *(uint *)(local_478 + uVar39 * 4);
                  }
                }
                ppuStack_420 = auVar58._0_8_;
                if ((uVar30 != 0xffffffff) && (uVar30 == uVar29)) {
                  local_458._8_4_ = fVar64;
                  local_458._0_8_ = dVar10;
                  local_458._12_4_ = fVar79;
                  local_448 = (undefined **)CONCAT44((int)local_510,(uint)local_508);
                  ppuStack_440 = (undefined **)CONCAT44(ppuStack_440._4_4_,0xbf800000);
                  local_468._8_4_ = fVar77;
                  local_468._0_8_ = dVar69;
                  local_468._12_4_ = fVar78;
                  bVar53 = (longlong)uStack_4a0 < 0;
                  uStack_4a0 = uStack_4a0 & 0xffffffff00000000;
                  uVar31 = uVar30;
                  uVar29 = (uint)local_508;
                  local_438 = bVar38;
                  if (bVar53) {
                    FUN_14085767e(&local_4a8);
                    uVar29 = (uint)local_508;
                  }
                  goto LAB_140856770;
                }
                local_518 = (double *)&local_128;
                cVar27 = FUN_144a3f41e(&local_428,param_1,pauVar43,&local_490);
                auVar59 = local_458;
                if (cVar27 != '\0') {
                  local_458._4_4_ = (uint)((ulonglong)local_480 >> 0x20) ^ DAT_149931e80._4_4_;
                  local_458._0_4_ = SUB84(local_480,0) ^ (uint)DAT_149931e80;
                  auVar58._0_4_ = (uint)local_490 ^ (uint)DAT_149931e80;
                  auVar58._4_4_ = local_490._4_4_ ^ DAT_149931e80._4_4_;
                  auVar58._8_4_ = (uint)uStack_488 ^ DAT_149931e80._8_4_;
                  auVar58._12_4_ = uStack_488._4_4_ ^ DAT_149931e80._12_4_;
                  local_458._8_8_ = auVar59._8_8_;
                  local_518 = &local_4b0;
                  local_468 = auVar58;
                  cVar27 = FUN_144a3f41e(&local_428,pauVar43,param_1,local_468);
                  if (cVar27 != '\0') {
                    uVar6 = *(undefined4 *)(local_478 + uVar39 * 4);
                    fVar71 = (float)(double)local_128;
                    fVar76 = (float)local_4b0;
                    lVar42 = (longlong)(int)uStack_4a0;
                    uVar31 = (int)uStack_4a0 + 1;
                    uStack_4a0 = CONCAT44(uStack_4a0._4_4_,uVar31);
                    if (uStack_4a0._4_4_ < uVar31) {
                      FUN_147e3e4de(&local_4a8);
                    }
                    *(undefined1 (*) [16])(local_4a8 + lVar42 * 6) = auVar73;
                    *(undefined1 (*) [16])(local_4a8 + lVar42 * 6 + 2) = auVar82;
                    *(undefined4 *)(local_4a8 + lVar42 * 6 + 4) = uVar6;
                    *(float *)((longlong)local_4a8 + lVar42 * 0x30 + 0x24) = fVar71;
                    *(float *)(local_4a8 + lVar42 * 6 + 5) = 1.0 - fVar76;
                    lVar42 = local_4e0;
                    pauVar43 = local_4f0;
                  }
                }
                uVar31 = (uint)local_470;
              }
              uVar39 = uVar39 + 1;
            } while (uVar39 < uVar31);
            local_458._8_4_ = fVar64;
            local_458._0_8_ = dVar10;
            local_458._12_4_ = fVar79;
            local_448 = (undefined **)CONCAT44((int)local_510,(uint)local_508);
            ppuStack_440 = (undefined **)CONCAT44(ppuStack_440._4_4_,0xbf800000);
            uVar31 = uVar30;
            uVar30 = uVar29;
            uVar29 = (uint)local_508;
          }
          local_468._8_4_ = fVar77;
          local_468._0_8_ = dVar69;
          local_468._12_4_ = fVar78;
          local_438 = bVar38;
LAB_140856770:
          ppuVar47 = local_4a8;
          iVar28 = (int)uStack_4a0;
          lVar42 = (longlong)(int)uStack_4a0;
          if (1 < lVar42) {
            local_508 = CONCAT44(local_508._4_4_,uVar29);
            local_4f8 = param_2;
            memset(&local_418,0,0x2f0);
            local_428 = ppuVar47;
            ppuStack_420 = ppuVar47 + lVar42 * 6 + -6;
            fVar80 = logf((float)iVar28);
            local_418 = (undefined **)CONCAT44(local_418._4_4_,(int)(longlong)(fVar80 + fVar80));
            pppuVar52 = &local_428;
            do {
              ppuVar34 = *pppuVar52;
              ppuVar47 = pppuVar52[1];
              iVar28 = *(int *)(pppuVar52 + 2);
              iVar36 = (int)((ulonglong)((longlong)ppuVar47 - (longlong)ppuVar34) >> 4);
              ppuVar41 = ppuVar34;
              ppuVar51 = ppuVar47;
              if (iVar28 != 0) {
LAB_140856dd0:
                ppuVar40 = ppuVar41;
                uVar29 = iVar36 * -0x55555555 + 1;
                if (8 < (int)uVar29) {
                  uVar39 = (ulonglong)(uVar29 >> 1);
                  puVar11 = ppuVar34[uVar39 * 6];
                  puVar12 = (ppuVar34 + uVar39 * 6)[1];
                  puVar13 = ppuVar34[uVar39 * 6 + 2];
                  puVar14 = (ppuVar34 + uVar39 * 6 + 2)[1];
                  puVar15 = ppuVar34[uVar39 * 6 + 4];
                  puVar16 = (ppuVar34 + uVar39 * 6 + 4)[1];
                  puVar17 = *ppuVar34;
                  puVar18 = ppuVar34[1];
                  puVar19 = ppuVar34[2];
                  puVar20 = ppuVar34[3];
                  puVar21 = ppuVar34[5];
                  ppuVar34[uVar39 * 6 + 4] = ppuVar34[4];
                  (ppuVar34 + uVar39 * 6 + 4)[1] = puVar21;
                  ppuVar34[uVar39 * 6 + 2] = puVar19;
                  (ppuVar34 + uVar39 * 6 + 2)[1] = puVar20;
                  ppuVar34[uVar39 * 6] = puVar17;
                  (ppuVar34 + uVar39 * 6)[1] = puVar18;
                  ppuVar34[4] = puVar15;
                  ppuVar34[5] = puVar16;
                  ppuVar34[2] = puVar13;
                  ppuVar34[3] = puVar14;
                  *ppuVar34 = puVar11;
                  ppuVar34[1] = puVar12;
                  ppuVar37 = ppuVar47 + 6;
                  ppuVar35 = ppuVar34;
                  do {
                    ppuVar25 = ppuVar35 + 6;
                    ppuVar26 = ppuVar35 + 6;
                    do {
                      ppuVar41 = ppuVar26;
                      ppuVar35 = ppuVar25;
                      if (ppuVar47 < ppuVar35) break;
                      ppuVar25 = ppuVar35 + 6;
                      ppuVar26 = ppuVar41 + 6;
                    } while (*(float *)(ppuVar35 + 5) < *(float *)(ppuVar34 + 5) ||
                             *(float *)(ppuVar35 + 5) == *(float *)(ppuVar34 + 5));
                    ppuVar25 = ppuVar37 + -0xc;
                    do {
                      ppuVar26 = ppuVar37;
                      ppuVar50 = ppuVar25;
                      ppuVar37 = ppuVar26 + -6;
                      if (ppuVar37 <= ppuVar34) break;
                      ppuVar25 = ppuVar50 + -6;
                    } while (*(float *)(ppuVar34 + 5) < *(float *)(ppuVar26 + -1) ||
                             *(float *)(ppuVar34 + 5) == *(float *)(ppuVar26 + -1));
                    if (ppuVar37 < ppuVar35) goto LAB_140857244;
                    puVar11 = *ppuVar35;
                    puVar12 = ppuVar35[1];
                    puVar13 = ppuVar35[2];
                    puVar14 = ppuVar35[3];
                    puVar15 = ppuVar35[4];
                    puVar16 = ppuVar35[5];
                    puVar17 = *ppuVar37;
                    puVar18 = ppuVar26[-5];
                    puVar19 = ppuVar26[-4];
                    puVar20 = ppuVar26[-3];
                    puVar21 = ppuVar26[-1];
                    ppuVar35[4] = ppuVar26[-2];
                    ppuVar35[5] = puVar21;
                    ppuVar35[2] = puVar19;
                    ppuVar35[3] = puVar20;
                    *ppuVar35 = puVar17;
                    ppuVar35[1] = puVar18;
                    ppuVar26[-2] = puVar15;
                    ppuVar26[-1] = puVar16;
                    ppuVar26[-4] = puVar13;
                    ppuVar26[-3] = puVar14;
                    *ppuVar37 = puVar11;
                    ppuVar26[-5] = puVar12;
                  } while( true );
                }
                for (; ppuVar51 = ppuVar34, ppuVar41 = ppuVar34, ppuVar34 < ppuVar47;
                    ppuVar47 = ppuVar47 + -6) {
                  while (ppuVar40 = ppuVar51, ppuVar41 = ppuVar41 + 6, ppuVar41 <= ppuVar47) {
                    ppuVar51 = ppuVar41;
                    if (*(float *)(ppuVar41 + 5) < *(float *)(ppuVar40 + 5) ||
                        *(float *)(ppuVar41 + 5) == *(float *)(ppuVar40 + 5)) {
                      ppuVar51 = ppuVar40;
                    }
                  }
                  local_128 = (undefined **)*ppuVar40;
                  uStack_120 = (undefined **)ppuVar40[1];
                  auVar58 = *(undefined1 (*) [16])(ppuVar40 + 2);
                  auVar59 = *(undefined1 (*) [16])(ppuVar40 + 4);
                  local_108 = *(double *)*(undefined1 (*) [16])(ppuVar40 + 4);
                  puStack_100 = ppuVar40[5];
                  local_118 = *(undefined ***)*(undefined1 (*) [16])(ppuVar40 + 2);
                  puStack_110 = ppuVar40[3];
                  ppuVar41 = local_128;
                  ppuVar51 = uStack_120;
                  puVar11 = *ppuVar47;
                  puVar12 = ppuVar47[1];
                  puVar13 = ppuVar47[2];
                  puVar14 = ppuVar47[3];
                  puVar15 = ppuVar47[5];
                  ppuVar40[4] = ppuVar47[4];
                  ppuVar40[5] = puVar15;
                  ppuVar40[2] = puVar13;
                  ppuVar40[3] = puVar14;
                  *ppuVar40 = puVar11;
                  ppuVar40[1] = puVar12;
                  local_128._4_4_ = (undefined4)((ulonglong)local_128 >> 0x20);
                  uStack_120._4_4_ = (undefined4)((ulonglong)uStack_120 >> 0x20);
                  *(undefined1 (*) [16])(ppuVar47 + 4) = auVar59;
                  *(undefined1 (*) [16])(ppuVar47 + 2) = auVar58;
                  *(undefined4 *)ppuVar47 = (undefined4)local_128;
                  *(undefined4 *)((longlong)ppuVar47 + 4) = local_128._4_4_;
                  *(undefined4 *)(ppuVar47 + 1) = (undefined4)uStack_120;
                  *(undefined4 *)((longlong)ppuVar47 + 0xc) = uStack_120._4_4_;
                  local_128 = ppuVar41;
                  uStack_120 = ppuVar51;
                }
                goto LAB_140856f4d;
              }
LAB_1408574ad:
              FUN_14574eba9(ppuVar34);
LAB_140856f4d:
              pppuVar52 = pppuVar52 + -3;
            } while (&local_428 <= pppuVar52);
            param_2 = local_4f8;
            uVar29 = (uint)local_508;
          }
          pdVar23 = local_4e8;
          if (uVar31 == 0xffffffff) {
            fVar80 = 1.12104e-44;
            if (bVar38 != false) {
              if ((int)uStack_4a0 != 0) {
                iVar28 = 0;
                if (uVar29 == uVar30) {
                  if ((int)uStack_4a0 + -1 != 0) {
                    memmove(local_4a8,local_4a8 + 6,(longlong)((int)uStack_4a0 + -1) * 0x30);
                    iVar28 = (int)uStack_4a0 + -1;
                  }
                  uStack_4a0 = CONCAT44(uStack_4a0._4_4_,iVar28);
                  FUN_14574eafc();
                  uVar31 = uVar29;
                  goto LAB_14085678b;
                }
                goto LAB_1408569b3;
              }
              auVar55._0_4_ = (float)*param_1 * 0.01;
              auVar55._4_4_ = (float)param_1[1] * 0.01;
              auVar55._8_4_ = (float)param_1[2] * 0.01;
              auVar55._12_4_ = (float)param_1[2] * 0.01;
              auVar8._8_4_ = fVar77;
              auVar8._0_8_ = dVar69;
              auVar8._12_4_ = fVar78;
              auVar58 = maxps(auVar55,auVar8);
              auVar9._8_4_ = fVar64;
              auVar9._0_8_ = dVar10;
              auVar9._12_4_ = fVar79;
              auVar58 = minps(auVar58,auVar9);
              local_128 = (undefined **)((double)auVar58._0_4_ * 100.0);
              uStack_120 = (undefined **)((double)auVar58._4_4_ * 100.0);
              local_118 = (undefined **)((double)auVar58._8_4_ * 100.0);
              if (local_4e8 != (double *)0x0) {
                FUN_140857764(&local_428,&local_128,local_468);
                pdVar23[2] = (double)local_418;
                *pdVar23 = (double)local_428;
                pdVar23[1] = (double)ppuStack_420;
              }
              ppuVar41 = DAT_14cb1c870;
              ppuVar34 = DAT_14cb1c868;
              ppuVar47 = DAT_14cb1c860;
              local_418 = local_118;
              local_428 = local_128;
              ppuStack_420 = uStack_120;
              local_400 = DAT_14cb1c870;
              ppuStack_410 = DAT_14cb1c860;
              ppuStack_408 = DAT_14cb1c868;
              uVar31 = uVar29 & 0x3fffff;
              uVar30 = uVar29 >> 0x16;
              if (uVar29 == 0xffffffff) {
                uVar31 = 0xffffffff;
                uVar30 = 0xffffffff;
              }
              *param_2 = uVar30;
              param_2[1] = uVar31;
              param_2[2] = 2;
              *(undefined ***)(param_2 + 0xc) = ppuVar34;
              *(undefined ***)(param_2 + 0xe) = ppuVar41;
              *(undefined ***)(param_2 + 8) = local_118;
              *(undefined ***)(param_2 + 10) = ppuVar47;
              *(undefined ***)(param_2 + 4) = local_128;
              *(undefined ***)(param_2 + 6) = uStack_120;
              param_2[0x10] = 0;
              param_2[0x11] = 0;
              plVar45 = *(longlong **)(param_2 + 0x12);
              if (plVar45 != (longlong *)0x0) {
                param_2[0x12] = 0;
                param_2[0x13] = 0;
                LOCK();
                plVar1 = plVar45 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar45)(plVar45);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar45 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar45 + 0x10))(plVar45);
                  }
                }
              }
              param_2[0x14] = 0xffffffff;
              fVar80 = 1.4013e-44;
            }
          }
          else {
LAB_14085678b:
            uVar29 = uVar31;
            uVar39 = (ulonglong)uVar29;
            if ((int)uStack_4a0 != 0) {
LAB_1408569b3:
              pdVar23 = local_4e8;
              if (1 < (int)uStack_4a0) {
                pauVar43 = local_4f0;
                ppuVar47 = (undefined **)0x0;
                local_4fc = (float)((uint)(uVar30 == 0xffffffff) * 2);
                local_4f8 = param_2;
LAB_1408569d5:
                ppuVar34 = ppuVar47;
                pauVar22 = local_4f0;
                if ((longlong)(int)uStack_4a0 + -1 <= (longlong)ppuVar34) {
                  local_118 = *(undefined ***)pauVar43[1];
                  local_128 = *(undefined ***)*pauVar43;
                  uStack_120 = *(undefined ***)((longlong)*pauVar43 + 8);
                  uVar39 = (ulonglong)uVar30;
                  param_2 = local_4f8;
                  fVar80 = local_4fc;
                  goto LAB_1408567cb;
                }
                uVar29 = *(uint *)(local_4a8 + (longlong)ppuVar34 * 6 + 4);
                uVar31 = *(uint *)(local_4a8 + (longlong)ppuVar34 * 6 + 10);
                lVar42 = *(longlong *)
                          (*(longlong *)(local_4e0 + 0x38) + 8 +
                          (ulonglong)((uVar29 >> 0x16) * 0x120));
                local_510 = ppuVar34;
                if (uVar29 >> 0x16 == uVar31 >> 0x16) {
                  lVar42 = *(longlong *)(lVar42 + 0x20);
                  lVar33 = (longlong)
                           *(short *)(*(longlong *)(lVar42 + 0x18) + 6 +
                                     (ulonglong)(uVar29 & 0x3fffff) * 0x18);
                  if (0 < lVar33) {
                    local_508 = (longlong)
                                *(int *)(*(longlong *)(lVar42 + 0x18) +
                                         (ulonglong)(uVar29 & 0x3fffff) * 0x18 + 0x10);
                    lVar44 = 0;
                    lVar49 = local_508;
                    do {
                      lVar46 = lVar49;
                      plVar45 = (longlong *)(lVar42 + 0x28);
                      if (*(int *)(lVar42 + 0x30) <= lVar49) {
                        plVar45 = (longlong *)(lVar42 + 0x60);
                        lVar46 = (local_508 + lVar44) - (longlong)*(int *)(lVar42 + 0x30);
                      }
                      bVar5 = *(byte *)(*plVar45 + 2 + lVar46 * 8);
                      if ((bVar5 & 0x10) == 0) {
                        uVar29 = *(uint *)(*plVar45 + 4 + lVar46 * 8);
                        uVar66 = *(int *)(lVar42 + 0x94) << 0x16 | uVar29 & 0x3fffff;
                        if (uVar29 == 0xffffffff) {
                          uVar66 = uVar29;
                        }
                        if ((bVar5 & 0x40) != 0) {
                          uVar66 = uVar29;
                        }
                        if (uVar31 == uVar66) goto LAB_140856b30;
                      }
                      lVar44 = lVar44 + 1;
                      lVar49 = lVar49 + 1;
                      lVar33 = lVar33 + -1;
                      if (lVar33 == 0) break;
                    } while( true );
                  }
                }
                else {
                  lVar42 = *(longlong *)(lVar42 + 0x20);
                  if ((*(int *)(lVar42 + 0x48) != 0) &&
                     (lVar33 = (longlong)
                               *(int *)(*(longlong *)(lVar42 + 0x40) +
                                       (ulonglong)(uVar29 & 0x3fffff) * 4), lVar33 != -1)) {
                    uVar39 = *(ulonglong *)(*(longlong *)(lVar42 + 0x50) + lVar33 * 8);
                    uVar48 = uVar39 >> 0x20;
                    if (0 < (int)(uVar39 >> 0x20)) {
                      lVar33 = (longlong)(int)uVar39;
                      lVar49 = (longlong)*(int *)(lVar42 + 0x30);
                      do {
                        plVar45 = (longlong *)(lVar42 + 0x60);
                        if (lVar33 < lVar49) {
                          plVar45 = (longlong *)(lVar42 + 0x28);
                        }
                        lVar44 = 0;
                        if (lVar49 <= lVar33) {
                          lVar44 = lVar49;
                        }
                        lVar44 = *plVar45 + lVar44 * -8;
                        bVar5 = *(byte *)(lVar44 + 2 + lVar33 * 8);
                        if ((bVar5 & 0x10) == 0) {
                          uVar29 = *(uint *)(lVar44 + 4 + lVar33 * 8);
                          uVar66 = *(int *)(lVar42 + 0x94) << 0x16 | uVar29 & 0x3fffff;
                          if (uVar29 == 0xffffffff) {
                            uVar66 = uVar29;
                          }
                          if ((bVar5 & 0x40) != 0) {
                            uVar66 = uVar29;
                          }
                          if (uVar31 == uVar66) goto LAB_140856b30;
                        }
                        lVar33 = lVar33 + 1;
                        uVar48 = uVar48 - 1;
                        if (uVar48 == 0) break;
                      } while( true );
                    }
                  }
                }
                goto LAB_140856c24;
              }
              dVar61 = (double)*(float *)(local_4a8 + 5);
              local_118 = (undefined **)(local_480 * dVar61 + param_1[2]);
              uStack_120 = (undefined **)(uStack_488 * dVar61 + param_1[1]);
              local_128 = (undefined **)(dVar61 * local_490 + *param_1);
              fVar80 = 1.4013e-44;
              if (local_4e8 != (double *)0x0) {
                FUN_140857764(&local_428,&local_128);
                pdVar23[2] = (double)local_418;
                *pdVar23 = (double)local_428;
                pdVar23[1] = (double)ppuStack_420;
              }
              uVar39 = (ulonglong)uVar29;
              goto LAB_1408567cb;
            }
            if (uVar30 != 0xffffffff) {
              local_118 = *(undefined ***)local_4f0[1];
              local_128 = *(undefined ***)*local_4f0;
              uStack_120 = *(undefined ***)((longlong)*local_4f0 + 8);
              fVar80 = 0.0;
              goto LAB_1408567cb;
            }
            fVar80 = 1.12104e-44;
          }
          goto LAB_140856887;
        }
      }
      goto LAB_1408568a2;
    }
    fVar80 = 8.40779e-45;
  }
  goto LAB_1408568dc;
LAB_140857244:
  local_128 = (undefined **)*ppuVar34;
  uStack_120 = (undefined **)ppuVar34[1];
  auVar58 = *(undefined1 (*) [16])(ppuVar34 + 2);
  auVar59 = *(undefined1 (*) [16])(ppuVar34 + 4);
  local_108 = *(double *)*(undefined1 (*) [16])(ppuVar34 + 4);
  puStack_100 = ppuVar34[5];
  local_118 = *(undefined ***)*(undefined1 (*) [16])(ppuVar34 + 2);
  puStack_110 = ppuVar34[3];
  ppuVar25 = local_128;
  ppuVar24 = uStack_120;
  puVar11 = *ppuVar37;
  puVar12 = ppuVar26[-5];
  puVar13 = ppuVar26[-4];
  puVar14 = ppuVar26[-3];
  puVar15 = ppuVar26[-1];
  ppuVar34[4] = ppuVar26[-2];
  ppuVar34[5] = puVar15;
  ppuVar34[2] = puVar13;
  ppuVar34[3] = puVar14;
  *ppuVar34 = puVar11;
  ppuVar34[1] = puVar12;
  local_128._4_4_ = (undefined4)((ulonglong)local_128 >> 0x20);
  uStack_120._4_4_ = (undefined4)((ulonglong)uStack_120 >> 0x20);
  *(undefined1 (*) [16])(ppuVar26 + -2) = auVar59;
  *(undefined1 (*) [16])(ppuVar26 + -4) = auVar58;
  *(undefined4 *)ppuVar37 = (undefined4)local_128;
  *(undefined4 *)((longlong)ppuVar26 + -0x2c) = local_128._4_4_;
  *(undefined4 *)(ppuVar26 + -5) = (undefined4)uStack_120;
  *(undefined4 *)((longlong)ppuVar26 + -0x24) = uStack_120._4_4_;
  iVar28 = iVar28 + -1;
  local_510 = ppuVar40;
  local_128 = ppuVar25;
  uStack_120 = ppuVar24;
  if ((longlong)ppuVar50 - (longlong)ppuVar40 < (longlong)ppuVar51 - (longlong)ppuVar41) {
    if (ppuVar35 < ppuVar47) {
      *pppuVar52 = ppuVar35;
      pppuVar52[1] = ppuVar47;
      *(int *)(pppuVar52 + 2) = iVar28;
      pppuVar52 = pppuVar52 + 3;
    }
    ppuVar35 = ppuVar34;
    ppuVar41 = ppuVar34;
    ppuVar47 = ppuVar26 + -0xc;
    if (ppuVar37 <= ppuVar34 + 6) goto LAB_140856f4d;
  }
  else {
    if (ppuVar34 + 6 < ppuVar37) {
      *pppuVar52 = ppuVar34;
      pppuVar52[1] = ppuVar26 + -0xc;
      *(int *)(pppuVar52 + 2) = iVar28;
      pppuVar52 = pppuVar52 + 3;
    }
    ppuVar50 = ppuVar47;
    if (ppuVar47 <= ppuVar35) goto LAB_140856f4d;
  }
  iVar36 = (int)((ulonglong)((longlong)ppuVar50 - (longlong)ppuVar41) >> 4);
  ppuVar34 = ppuVar35;
  ppuVar51 = ppuVar50;
  if (iVar28 == 0) goto LAB_1408574ad;
  goto LAB_140856dd0;
LAB_140856b30:
  ppuVar47 = (undefined **)((longlong)ppuVar34 + 1);
  auVar59 = minps(*(undefined1 (*) [16])(local_4a8 + (longlong)ppuVar34 * 6 + 2),
                  *(undefined1 (*) [16])(local_4a8 + (longlong)ppuVar47 * 6 + 2));
  auVar58 = maxps(*(undefined1 (*) [16])(local_4a8 + (longlong)ppuVar34 * 6),
                  *(undefined1 (*) [16])(local_4a8 + (longlong)ppuVar47 * 6));
  auVar62 = minps(auVar58,auVar59);
  auVar58 = maxps(auVar58,auVar59);
  local_428 = (undefined **)((double)auVar62._0_4_ * 100.0);
  ppuStack_420 = (undefined **)((double)auVar62._4_4_ * 100.0);
  local_418 = (undefined **)((double)auVar62._8_4_ * 100.0);
  ppuStack_410 = (undefined **)((double)auVar58._0_4_ * 100.0);
  ppuStack_408 = (undefined **)((double)auVar58._4_4_ * 100.0);
  local_400 = (undefined **)((double)auVar58._8_4_ * 100.0);
  local_3f8 = (undefined **)CONCAT71(local_3f8._1_7_,1);
  local_518 = (double *)0x0;
  cVar27 = FUN_144a3f41e(&local_428,param_1,local_4f0,&local_490);
  pauVar43 = pauVar22;
  if (cVar27 == '\0') goto LAB_140856c24;
  goto LAB_1408569d5;
LAB_140856c24:
  pdVar23 = local_4e8;
  param_2 = local_4f8;
  uVar48 = (ulonglong)ppuVar34 & 0xffffffff;
  dVar61 = (double)*(float *)(local_4a8 + uVar48 * 6 + 5);
  local_118 = (undefined **)(local_480 * dVar61 + param_1[2]);
  uStack_120 = (undefined **)(uStack_488 * dVar61 + param_1[1]);
  uVar39 = (ulonglong)*(uint *)(local_4a8 + uVar48 * 6 + 4);
  local_128 = (undefined **)(dVar61 * local_490 + *param_1);
  fVar80 = 1.4013e-44;
  if (local_4e8 != (double *)0x0) {
    FUN_140857764(&local_428,&local_128,local_4a8 + uVar48 * 6);
    pdVar23[2] = (double)local_418;
    *pdVar23 = (double)local_428;
    pdVar23[1] = (double)ppuStack_420;
  }
LAB_1408567cb:
  ppuVar41 = DAT_14cb1c870;
  ppuVar34 = DAT_14cb1c868;
  ppuVar47 = DAT_14cb1c860;
  local_418 = local_118;
  local_428 = local_128;
  ppuStack_420 = uStack_120;
  local_400 = DAT_14cb1c870;
  ppuStack_410 = DAT_14cb1c860;
  ppuStack_408 = DAT_14cb1c868;
  uVar30 = (uint)uVar39 & 0x3fffff;
  uVar29 = (uint)(uVar39 >> 0x16);
  if ((uint)uVar39 == 0xffffffff) {
    uVar29 = 0xffffffff;
    uVar30 = 0xffffffff;
  }
  *param_2 = uVar29;
  param_2[1] = uVar30;
  param_2[2] = 2;
  *(undefined ***)(param_2 + 0xc) = ppuVar34;
  *(undefined ***)(param_2 + 0xe) = ppuVar41;
  *(undefined ***)(param_2 + 8) = local_118;
  *(undefined ***)(param_2 + 10) = ppuVar47;
  *(undefined ***)(param_2 + 4) = local_128;
  *(undefined ***)(param_2 + 6) = uStack_120;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  plVar45 = *(longlong **)(param_2 + 0x12);
  if (plVar45 != (longlong *)0x0) {
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    LOCK();
    plVar1 = plVar45 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar45)(plVar45);
      LOCK();
      piVar2 = (int *)((longlong)plVar45 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar45 + 0x10))(plVar45);
      }
    }
  }
  param_2[0x14] = 0xffffffff;
LAB_140856887:
  if (local_4a8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  uVar39 = (ulonglong)local_4d4;
  lVar42 = local_4d0;
LAB_1408568a2:
  uVar48 = local_470 >> 0x20;
  local_470 = local_470 & 0xffffffff00000000;
  lVar33 = (longlong)(int)uVar48;
  if ((-1 < lVar33) && (local_478 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))(&PTR_vftable_14c6e47c0,local_478,lVar33 << 2);
  }
LAB_1408568dc:
  if ((char)uVar39 != '\0') {
    ReleaseSRWLockShared((PSRWLOCK)(lVar42 + 0x250));
  }
  if (DAT_14cb1d000 != 0) {
    pvVar32 = TlsGetValue(DAT_14cb1d000);
    TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar32 + -1));
  }
LAB_140856911:
  if ((local_f0 ^ (ulonglong)auStack_538) == DAT_14c707940) {
    return fVar80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14085767e FUN_14085767e body=230 status=ok
// SIG undefined FUN_14085767e(void)

void FUN_14085767e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x2ab) {
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
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,0x10);
  }
  return;
}



// FUNCTION 140857764 FUN_140857764 body=405 status=ok
// SIG undefined FUN_140857764(void)

void FUN_140857764(undefined8 *param_1,double *param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar5 = ABS((double)param_3[2] * 100.0 - param_2[2]);
  dVar6 = ABS((double)param_3[1] * 100.0 - param_2[1]);
  dVar7 = ABS((double)*param_3 * 100.0 - *param_2);
  dVar8 = ABS((double)param_3[6] * 100.0 - param_2[2]);
  dVar9 = ABS((double)param_3[5] * 100.0 - param_2[1]);
  dVar10 = ABS((double)param_3[4] * 100.0 - *param_2);
  dVar1 = dVar7;
  if (dVar6 <= dVar7) {
    dVar1 = dVar6;
  }
  if (dVar5 <= dVar1) {
    dVar1 = dVar5;
  }
  dVar2 = dVar10;
  if (dVar9 <= dVar10) {
    dVar2 = dVar9;
  }
  if (dVar8 <= dVar2) {
    dVar2 = dVar8;
  }
  if (dVar2 <= dVar1) {
    if ((dVar10 < dVar9) && (dVar10 < dVar8)) {
      uVar3 = 0xbff0000000000000;
      goto LAB_140857851;
    }
    if ((dVar10 <= dVar9) || (dVar8 <= dVar9)) {
      *param_1 = 0;
      param_1[1] = 0;
      uVar4 = 0xbff0000000000000;
      goto LAB_140857896;
    }
    *param_1 = 0;
    uVar3 = 0xbff0000000000000;
  }
  else {
    if ((dVar7 < dVar6) && (dVar7 < dVar5)) {
      uVar3 = 0x3ff0000000000000;
LAB_140857851:
      *param_1 = uVar3;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    if ((dVar5 <= dVar6) || (dVar7 <= dVar6)) {
      *param_1 = 0;
      param_1[1] = 0;
      uVar4 = 0x3ff0000000000000;
      goto LAB_140857896;
    }
    *param_1 = 0;
    uVar3 = 0x3ff0000000000000;
  }
  uVar4 = 0;
  param_1[1] = uVar3;
LAB_140857896:
  param_1[2] = uVar4;
  return;
}



// FUNCTION 1408578fa FUN_1408578fa body=95 status=ok
// SIG undefined FUN_1408578fa(void)

ulonglong FUN_1408578fa(longlong param_1)

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
LAB_14085793c:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14085793c;
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



// FUNCTION 14085795a FUN_14085795a body=320 status=ok
// SIG undefined FUN_14085795a(void)

void FUN_14085795a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  ulonglong uVar9;
  
  if (*(char *)(param_1 + 0x110) == '\0') {
    if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
      lVar7 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + lVar7);
        if (*(char *)(lVar2 + 0x30) != '\0') {
          return;
        }
        if (*(char *)(lVar2 + 0x31) != '\0') {
          return;
        }
        if (*(int *)(lVar2 + 0x6c) != 2) {
          return;
        }
        lVar7 = lVar7 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0xf0) * 0x10 != lVar7);
    }
    uVar6 = (ulonglong)*(int *)(param_1 + 0x100);
    if (uVar6 != 0) {
      lVar7 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0xf8) + 8 + lVar7) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0xf8) + lVar7) != 0)) {
          iVar1 = *(int *)(param_1 + 0x10c);
          *(int *)(param_1 + 0x10c) = iVar1 + 1;
          if (*(int *)(param_1 + 0x100) < 1) {
            *(int *)(param_1 + 0x10c) = iVar1;
            return;
          }
          bVar8 = false;
          do {
            lVar7 = uVar6 * 0x10 + -8;
            uVar9 = uVar6;
            while (((lVar2 = *(longlong *)(param_1 + 0xf8), *(int *)(lVar2 + lVar7) != 0 &&
                    (plVar3 = *(longlong **)(lVar2 + -8 + lVar7), plVar3 != (longlong *)0x0)) &&
                   (cVar5 = (**(code **)(*plVar3 + 0x60))(), cVar5 != '\0'))) {
              lVar7 = lVar7 + -0x10;
              bVar4 = uVar9 < 2;
              uVar9 = uVar9 - 1;
              if (bVar4) {
                *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + -1;
                if (!bVar8) {
                  return;
                }
                goto LAB_140857a68;
              }
            }
            uVar6 = uVar9 - 1;
            bVar8 = true;
          } while (1 < uVar9);
          *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + -1;
LAB_140857a68:
          FUN_14474d06a((longlong *)(param_1 + 0xf8),0);
          return;
        }
        lVar7 = lVar7 + 0x10;
      } while (uVar6 << 4 != lVar7);
    }
  }
  return;
}



// FUNCTION 140857a9a FUN_140857a9a body=718 status=ok
// SIG undefined FUN_140857a9a(void)

void FUN_140857a9a(longlong param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  uint *local_b8;
  undefined2 local_ac;
  undefined2 local_aa;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined2 local_a4;
  undefined2 local_a2;
  uint local_a0 [8];
  undefined8 local_80;
  uint local_78 [8];
  undefined8 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = FUN_14009d2a0();
  lVar4 = FUN_14038fb82();
  local_80 = 0x10000000000;
  local_58 = 0x10000000000;
  local_50 = 0;
  uStack_48 = 0;
  local_c0._0_6_ =
       CONCAT24(*(undefined2 *)(lVar3 + 0x11a),
                CONCAT22(*(undefined2 *)(lVar3 + 0x110),*(undefined2 *)(lVar4 + 0x84)));
  lVar4 = 0;
  do {
    uVar2 = local_80;
    uVar1 = *(ushort *)((longlong)&local_c0 + lVar4);
    iVar6 = uVar1 + 1;
    iVar8 = iVar6 - (int)local_80;
    if (iVar8 != 0 && (int)local_80 <= iVar6) {
      if ((int)local_80 == 0) {
LAB_140857b47:
        if (local_80._4_4_ <= (int)(uint)uVar1) {
          local_80 = CONCAT44(0x100,(int)local_80);
          FUN_14497ddce(local_a0,uVar2 & 0xffffffff);
          iVar6 = (int)local_80 + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        local_80 = CONCAT44(local_80._4_4_,iVar6);
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          local_a0[iVar7 >> 5] = (local_a0[iVar7 >> 5] << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = (int)local_80 + 0x1e;
        if (-1 < (int)local_80 + -1) {
          iVar7 = (int)local_80 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar1 >> 5)) goto LAB_140857b47;
        local_80 = CONCAT44(local_80._4_4_,iVar6);
      }
      FUN_1447c45ca(local_a0,uVar2 & 0xffffffff,iVar8,0);
    }
    local_a0[uVar1 >> 5] = local_a0[uVar1 >> 5] | 1 << ((byte)uVar1 & 0x1f);
    uVar2 = local_58;
    lVar4 = lVar4 + 2;
  } while (lVar4 != 6);
  uVar1 = *(ushort *)(lVar3 + 0x5c);
  iVar6 = uVar1 + 1;
  iVar8 = iVar6 - (int)local_58;
  if (iVar8 == 0 || iVar6 < (int)local_58) goto LAB_140857c39;
  if ((int)local_58 == 0) {
LAB_140857bf0:
    if (local_58._4_4_ <= (int)(uint)uVar1) {
      local_58 = CONCAT44(0x100,(int)local_58);
      FUN_14497ddce(local_78,uVar2 & 0xffffffff);
      iVar6 = (int)local_58 + iVar8;
    }
    iVar7 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar7 = iVar6;
    }
    local_58 = CONCAT44(local_58._4_4_,iVar6);
    if (iVar6 % 0x20 != 0) {
      bVar5 = -(char)(iVar6 % 0x20);
      local_78[iVar7 >> 5] = (local_78[iVar7 >> 5] << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
    }
  }
  else {
    iVar7 = (int)local_58 + 0x1e;
    if (-1 < (int)local_58 + -1) {
      iVar7 = (int)local_58 + -1;
    }
    if (iVar7 >> 5 != (uint)(uVar1 >> 5)) goto LAB_140857bf0;
    local_58 = CONCAT44(local_58._4_4_,iVar6);
  }
  FUN_1447c45ca(local_78,uVar2 & 0xffffffff,iVar8,0);
LAB_140857c39:
  local_78[uVar1 >> 5] = local_78[uVar1 >> 5] | 1 << ((byte)uVar1 & 0x1f);
  local_ac = *(undefined2 *)(lVar3 + 0xbc);
  local_b8 = local_a0;
  local_aa = *(undefined2 *)(lVar3 + 0xbe);
  local_a8 = *(undefined2 *)(lVar3 + 0xc0);
  local_a6 = *(undefined2 *)(lVar3 + 0xc2);
  local_a4 = *(undefined2 *)(lVar3 + 0xc4);
  local_a2 = *(undefined2 *)(lVar3 + 0xc6);
  local_c0 = (undefined **)&local_ac;
  FUN_1403b5126(local_a0,&local_c0,2);
  local_c0 = &PTR_FUN_14a4e0350;
  local_b8 = (uint *)CONCAT62(local_b8._2_6_,*(undefined2 *)(lVar3 + 0x134));
  FUN_140857d6a(*(longlong *)(param_1 + 0x28) + 0x28,local_a0,&local_c0,1);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140857d6a FUN_140857d6a body=1534 status=ok
// SIG undefined FUN_140857d6a(void)

int FUN_140857d6a(longlong param_1,undefined8 param_2,longlong *param_3,uint param_4)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint *_Dst;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 local_f9;
  longlong *local_f8;
  uint local_f0;
  int local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined4 local_c8;
  uint local_c4;
  undefined8 local_c0;
  uint local_b8 [8];
  longlong local_98;
  uint local_90 [8];
  ulonglong local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x200000000;
  local_c0 = *(undefined8 *)(param_1 + 0x248);
  local_f8 = param_3;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar9 = (ulonglong)param_4;
    local_d8 = param_1 + 0x18;
    uVar13 = 0;
    iVar18 = 0;
    do {
      lVar16 = *(longlong *)(param_1 + 0x28);
      if (*(longlong *)(param_1 + 0x28) == 0) {
        lVar16 = local_d8;
      }
      if ((*(uint *)(lVar16 + (uVar13 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar13 & 0x1f) & 1) != 0) {
        lVar16 = uVar13 * 0x28;
        cVar4 = FUN_1403b852a(param_2,*(longlong *)(param_1 + 8) + lVar16);
        if (cVar4 != '\0') {
          pvVar1 = (void *)(*(longlong *)(param_1 + 8) + uVar13 * 0x28);
          local_70 = 0;
          iVar19 = *(int *)((longlong)pvVar1 + 0x20);
          uVar5 = iVar19 + 0x1fU & 0xffffffe0;
          local_e0 = param_2;
          if (0 < (int)uVar5) {
            if (uVar5 < 0x101) {
              uVar5 = 0x100;
            }
            local_70 = (ulonglong)uVar5 << 0x20;
            FUN_14497ddce(local_90,0);
            iVar19 = *(int *)((longlong)pvVar1 + 0x20);
          }
          local_70 = CONCAT44(local_70._4_4_,iVar19);
          if (iVar19 != 0) {
            memcpy(local_90,pvVar1,(ulonglong)(iVar19 + 0x1fU >> 3 & 0xfffffffc));
          }
          (**(code **)(*local_f8 + 8))(local_f8,param_1,local_90);
          bVar21 = (longlong)local_50 < 0;
          local_50 = local_50 & 0xffffffff00000000;
          if (bVar21) {
            FUN_147580872(local_68,0);
          }
          lVar8 = *(longlong *)(param_1 + 0x230);
          if (*(char *)(lVar8 + 0x110) == '\x01') {
            FUN_140ae8660(lVar8 + 0x60);
          }
          local_108 = local_68;
          FUN_140ae8062(lVar8 + 0x100,uVar9 & 0xffffffff,local_90,local_90);
          uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + uVar13 * 8);
          cVar4 = FUN_1403b8874(local_90,*(longlong *)(param_1 + 8) + lVar16,0);
          if (cVar4 == '\0') {
            local_f9 = (undefined1)uVar9;
            local_ec = iVar18;
            local_e8 = uVar3;
            lVar8 = FUN_140858670(param_1,uVar13 & 0xffffffff,local_90);
            local_f0 = (uint)*(ushort *)(lVar8 + 0xe);
            pvVar1 = (void *)(*(longlong *)(param_1 + 8) + uVar13 * 0x28);
            local_98 = 0;
            iVar18 = *(int *)((longlong)pvVar1 + 0x20);
            uVar5 = iVar18 + 0x1fU & 0xffffffe0;
            if (0 < (int)uVar5) {
              if (uVar5 < 0x101) {
                uVar5 = 0x100;
              }
              local_98 = (ulonglong)uVar5 << 0x20;
              FUN_14497ddce(local_b8,0);
              iVar18 = *(int *)((longlong)pvVar1 + 0x20);
            }
            local_98 = CONCAT44(local_98._4_4_,iVar18);
            if (iVar18 != 0) {
              memcpy(local_b8,pvVar1,(ulonglong)(iVar18 + 0x1fU >> 3 & 0xfffffffc));
            }
            _Dst = (uint *)(lVar16 + *(longlong *)(param_1 + 8));
            if (_Dst != local_90) {
              uVar5 = (uint)local_70 + 0x1f & 0xffffffe0;
              _Dst[8] = 0;
              if (((int)_Dst[9] < (int)uVar5) || (0x100 < (int)_Dst[9])) {
                if ((int)uVar5 < 0x101) {
                  uVar5 = 0x100;
                }
                _Dst[9] = uVar5;
                FUN_14497ddce(_Dst,0);
              }
              _Dst[8] = (uint)local_70;
              if ((uint)local_70 != 0) {
                memcpy(_Dst,local_90,(ulonglong)((uint)local_70 + 0x1f >> 3 & 0xfffffffc));
              }
            }
            *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar13 * 8) = lVar8;
            *(undefined4 *)(lVar8 + 0x14) = 0;
            if ((uint)local_70 == 0) {
              uVar15 = 1;
              uVar9 = 0;
              uVar20 = 0;
              iVar18 = 0;
            }
            else {
              uVar20 = 0;
              iVar18 = 0;
              uVar5 = local_90[0];
              if (local_90[0] == 0) {
                uVar20 = 0;
                do {
                  iVar19 = (uint)local_70 + 0x1e;
                  if (-1 < (int)((uint)local_70 + -1)) {
                    iVar19 = (uint)local_70 + -1;
                  }
                  uVar5 = iVar19 >> 5;
                  if (iVar19 >> 5 < 1) {
                    uVar5 = 0;
                  }
                  if (uVar20 == uVar5) goto LAB_1408581bd;
                  iVar18 = iVar18 + 0x20;
                  uVar5 = local_90[uVar20 + 1];
                  uVar20 = uVar20 + 1;
                } while (uVar5 == 0);
              }
              uVar15 = (ulonglong)(-uVar5 & uVar5);
              uVar9 = uVar15 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar9 != 0) {
                for (; uVar9 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              uVar5 = (iVar18 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
              uVar9 = (ulonglong)uVar5;
              if ((int)(uint)local_70 <= (int)uVar5) {
                uVar9 = local_70 & 0xffffffff;
              }
            }
            if ((int)uVar9 < (int)(uint)local_70) {
              uVar5 = 0xffffffff;
              do {
                if ((short)uVar9 == -1) {
LAB_14085814e:
                  if (*(ushort *)(lVar8 + 0xc) != 0) {
                    puVar10 = *(undefined8 **)(lVar8 + 0x28);
                    lVar16 = (ulonglong)*(ushort *)(lVar8 + 0xc) << 5;
                    do {
                      if (*(short *)((longlong)puVar10 + 0x1e) == (short)uVar9) goto LAB_140858177;
                      puVar10 = puVar10 + 4;
                      lVar16 = lVar16 + -0x20;
                    } while (lVar16 != 0);
                  }
                  puVar10 = (undefined8 *)0x0;
LAB_140858177:
                  if (*(char *)((longlong)puVar10 + 0x1c) != '\0') {
                    lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x230) + 0x118);
                    uVar9 = (ulonglong)(((uint)uVar9 & 0xffff) << 4);
                    puVar2 = (undefined8 *)(lVar16 + uVar9);
                    if ((*(byte *)(lVar16 + 10 + uVar9) & 1) == 0) {
                      (**(code **)(*(longlong *)*puVar2 + 8))();
                    }
                    else {
                      memset((void *)*puVar10,0,
                             (ulonglong)
                             ((uint)*(byte *)(puVar2 + 1) * (uint)*(ushort *)(lVar8 + 0xe)));
                    }
                  }
                }
                else if (((int)local_98 <= (int)(uVar9 & 0xffff)) ||
                        ((local_b8[(uVar9 & 0xffff) >> 5] >> ((uint)uVar9 & 0x1f) & 1) == 0))
                goto LAB_14085814e;
                uVar5 = uVar5 & ~(uint)uVar15;
                iVar19 = (int)uVar20;
                lVar16 = (longlong)iVar19;
                uVar6 = local_90[lVar16] & uVar5;
                if (uVar6 == 0) {
                  iVar11 = (uint)local_70 + 0x1e;
                  if (-1 < (int)((uint)local_70 - 1)) {
                    iVar11 = (uint)local_70 - 1;
                  }
                  iVar12 = iVar11 >> 5;
                  if (iVar11 >> 5 < iVar19) {
                    iVar12 = iVar19;
                  }
                  lVar17 = 0;
                  do {
                    if (iVar12 - lVar16 == lVar17) goto LAB_1408581bd;
                    iVar18 = iVar18 + 0x20;
                    uVar6 = local_90[lVar16 + lVar17 + 1];
                    lVar17 = lVar17 + 1;
                  } while (uVar6 == 0);
                  uVar20 = (ulonglong)(uint)(iVar19 + (int)lVar17);
                  uVar5 = 0xffffffff;
                }
                uVar15 = (ulonglong)(-uVar6 & uVar6);
                uVar9 = uVar15 * 2 + 1;
                lVar16 = 0x3f;
                if (uVar9 != 0) {
                  for (; uVar9 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                  }
                }
                uVar7 = (iVar18 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                uVar6 = uVar7;
                if ((int)(uint)local_70 <= (int)uVar7) {
                  uVar6 = (uint)local_70;
                }
                uVar9 = (ulonglong)uVar6;
              } while ((int)uVar7 < (int)(uint)local_70);
            }
LAB_1408581bd:
            local_c8 = 0;
            local_c4 = (uint)*(ushort *)(lVar8 + 0xe);
            puVar14 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar14 = local_68;
            }
            lVar16 = (longlong)(int)local_50;
            local_d0 = lVar8;
            if (lVar16 != 0) {
              uVar20 = 0;
              do {
                (**(code **)(**(longlong **)(puVar14 + uVar20) + 8))
                          (*(longlong **)(puVar14 + uVar20),&local_d0,&local_c0);
                uVar20 = uVar20 + 8;
              } while (lVar16 * 8 != uVar20);
            }
            (**(code **)(*local_f8 + 0x10))(local_f8,lVar8,local_90);
            FUN_14085836e(param_1,local_e8);
            if (lVar8 != 0) {
              *(undefined4 *)(lVar8 + 0x14) = 1;
            }
            iVar18 = local_ec + local_f0;
            uVar9 = CONCAT71((int7)(uVar20 >> 8),local_f9);
            param_2 = local_e0;
          }
          else {
            (**(code **)(*local_f8 + 0x18))(local_f8,uVar3,local_90);
            param_2 = local_e0;
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while ((longlong)uVar13 < (longlong)*(int *)(param_1 + 0x10));
    if (iVar18 != 0) {
      *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x248);
      *(undefined1 *)(param_1 + 0x261) = 1;
      goto LAB_140858278;
    }
  }
  iVar18 = 0;
LAB_140858278:
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar18;
}



// FUNCTION 14085836e FUN_14085836e body=141 status=ok
// SIG undefined FUN_14085836e(void)

void FUN_14085836e(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((*(short *)(param_2 + 0xe) != 0) && (uVar1 = *(ushort *)(param_2 + 0xc), uVar1 != 0)) {
    lVar2 = *(longlong *)(param_2 + 0x28);
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar7);
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x230) + 0x118);
        lVar6 = (ulonglong)*(ushort *)(lVar2 + 0x1e + lVar7) * 0x10;
        if ((*(byte *)(lVar4 + 10 + lVar6) & 2) == 0) {
          plVar5 = *(longlong **)(lVar4 + lVar6);
          (**(code **)(*plVar5 + 0x10))(plVar5,lVar3,*(undefined2 *)(param_2 + 0xe));
        }
      }
      lVar7 = lVar7 + 0x20;
    } while ((ulonglong)uVar1 * 0x20 != lVar7);
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 140858420 FUN_140858420 body=69 status=ok
// SIG undefined FUN_140858420(void)

void FUN_140858420(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_14497de01(param_1 + 8,param_3,0x14,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140858466 FUN_140858466 body=521 status=ok
// SIG undefined FUN_140858466(void)

void FUN_140858466(undefined8 param_1,longlong *param_2,ulonglong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  
  lVar7 = FUN_14009d2a0();
  lVar3 = *param_2;
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    plVar12 = *(longlong **)(lVar3 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == *(short *)(lVar7 + 0x4a)) goto LAB_1408584ad;
      plVar12 = plVar12 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_1408584ad:
  iVar1 = *(int *)(lVar3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  lVar3 = *param_2;
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    plVar11 = *(longlong **)(lVar3 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(lVar7 + 0x4c)) goto LAB_1408584f0;
      plVar11 = plVar11 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_1408584f0:
  lVar7 = *plVar12;
  uVar4 = *param_3;
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  if (0 < *(int *)((longlong)param_2 + 0xc)) {
    lVar3 = *plVar11;
    lVar9 = 0;
    do {
      lVar10 = (int)param_2[1] + lVar9;
      lVar15 = *(longlong *)(lVar7 + lVar10 * 8);
      uVar8 = 0;
      uVar14 = 0;
      if (lVar15 != 0) {
        uVar14 = *(uint *)(lVar15 + 0xc);
        if ((int)uVar14 < DAT_14c9647dc) {
          lVar15 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
        }
        else {
          lVar15 = 0;
        }
        uVar6 = *(uint *)(lVar15 + 0x10);
        if (*(uint *)(lVar15 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          uVar13 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                         );
          }
          LOCK();
          uVar6 = *(uint *)(lVar15 + 0x10);
          bVar16 = uVar6 == 0;
          if (bVar16) {
            *(uint *)(lVar15 + 0x10) = uVar13;
            uVar6 = 0;
          }
          UNLOCK();
          if (bVar16) {
            uVar6 = uVar13;
          }
        }
        uVar8 = (ulonglong)uVar6;
        lVar10 = (longlong)((int)param_2[1] + (int)lVar9);
      }
      *(ulonglong *)(lVar3 + lVar10 * 8) = (ulonglong)uVar14 | uVar8 << 0x20;
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < *(int *)((longlong)param_2 + 0xc));
  }
  if (plVar11 != (longlong *)0x0) {
    uVar8 = plVar11[2];
    if ((ulonglong)plVar11[2] < uVar4) {
      uVar8 = uVar4;
    }
    plVar11[2] = uVar8;
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001408585ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar12 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 140858670 FUN_140858670 body=1182 status=ok
// SIG undefined FUN_140858670(void)

longlong FUN_140858670(longlong param_1,int param_2,longlong param_3)

{
  void *pvVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  bool bVar27;
  undefined1 auStack_138 [32];
  uint *local_118;
  longlong local_108;
  longlong local_100;
  uint local_f8 [4];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  undefined4 local_d4;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined4 local_a4;
  uint local_98 [8];
  int local_78;
  uint local_74;
  uint local_70 [4];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)param_2 * 8);
  pvVar1 = (void *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 0x28);
  local_74 = 0;
  iVar19 = *(int *)((longlong)pvVar1 + 0x20);
  local_78 = 0;
  uVar10 = iVar19 + 0x1fU & 0xffffffe0;
  local_108 = param_3;
  if (0 < (int)uVar10) {
    local_74 = 0x100;
    if (0x100 < uVar10) {
      local_74 = uVar10;
    }
    FUN_14497ddce(local_98,0);
    iVar19 = *(int *)((longlong)pvVar1 + 0x20);
  }
  local_78 = iVar19;
  iVar11 = 0;
  local_100 = lVar3;
  if (iVar19 != 0) {
    memcpy(local_98,pvVar1,(ulonglong)(iVar19 + 0x1fU >> 3 & 0xfffffffc));
    iVar11 = local_78;
  }
  local_50._0_4_ = 0;
  local_50._4_4_ = 0x100;
  iVar19 = *(int *)(local_108 + 0x20);
  iVar8 = iVar11;
  if (iVar11 < iVar19) {
    iVar8 = iVar19;
  }
  if (iVar8 == 0) {
    local_a8 = 0;
  }
  else {
    if (0x100 < iVar8) {
      FUN_14497ddce(local_70,0);
      iVar19 = *(int *)(local_108 + 0x20);
      iVar11 = local_78;
    }
    uVar10 = 0xffffffff >> (-(char)(iVar11 % 0x20) & 0x1fU);
    if (iVar11 % 0x20 < 1) {
      uVar10 = 0xffffffff;
    }
    uVar7 = 0xffffffff >> (-(char)(iVar19 % 0x20) & 0x1fU);
    if (iVar19 % 0x20 < 1) {
      uVar7 = 0xffffffff;
    }
    local_50._0_4_ = iVar8;
    local_a8 = iVar8;
    if (0 < iVar8) {
      uVar20 = iVar8 + 0x1fU >> 5;
      iVar13 = iVar19 + 0x3e;
      if (-1 < iVar19 + 0x1f) {
        iVar13 = iVar19 + 0x1f;
      }
      iVar17 = iVar11 + 0x3e;
      if (-1 < iVar11 + 0x1f) {
        iVar17 = iVar11 + 0x1f;
      }
      uVar16 = 0xffffffff;
      if (iVar19 - 1U < 0x20) {
        uVar16 = uVar7;
      }
      uVar24 = 0xffffffff;
      if (iVar11 - 1U < 0x20) {
        uVar24 = uVar10;
      }
      uVar23 = 0;
      do {
        uVar25 = 0;
        if ((longlong)uVar23 < (longlong)(iVar17 >> 5)) {
          uVar25 = uVar24 & local_98[uVar23];
        }
        if ((longlong)uVar23 < (longlong)(iVar13 >> 5)) {
          uVar16 = uVar16 & *(uint *)(local_108 + uVar23 * 4);
        }
        else {
          uVar16 = 0;
        }
        uVar14 = 0xffffffff;
        if (uVar20 - 1 == uVar23) {
          uVar14 = 0xffffffff >> (-(char)(iVar8 % 0x20) & 0x1fU);
        }
        if (iVar8 % 0x20 < 1) {
          uVar14 = 0xffffffff;
        }
        uVar24 = 0xffffffff;
        if ((iVar17 >> 5) - 2 == uVar23) {
          uVar24 = uVar10;
        }
        local_70[uVar23] = uVar14 & (uVar16 ^ uVar25);
        bVar26 = (iVar13 >> 5) - 2 == uVar23;
        uVar23 = uVar23 + 1;
        uVar16 = 0xffffffff;
        if (bVar26) {
          uVar16 = uVar7;
        }
        local_a8 = (int)local_50;
      } while (uVar20 != uVar23);
    }
  }
  local_b8 = local_60;
  uStack_b4 = uStack_5c;
  uStack_b0 = uStack_58;
  uStack_ac = uStack_54;
  local_c8 = local_70[0];
  uStack_c4 = local_70[1];
  uStack_c0 = local_70[2];
  uStack_bc = local_70[3];
  local_a4 = local_50._4_4_;
  local_50 = 0x10000000000;
  puVar18 = local_f8;
  local_118 = puVar18;
  FUN_14009e926(*(longlong *)(param_1 + 0x230) + 0x188,&local_c8,local_70,1);
  lVar3 = local_100;
  local_f8[0] = local_70[0];
  local_f8[1] = local_70[1];
  local_f8[2] = local_70[2];
  local_f8[3] = local_70[3];
  local_e8 = local_60;
  uStack_e4 = uStack_5c;
  uStack_e0 = uStack_58;
  uStack_dc = uStack_54;
  local_d8 = (int)local_50;
  local_d4 = local_50._4_4_;
  bVar26 = true;
  local_118 = (uint *)local_100;
  if (0x1f < (int)local_50 + 0x1fU) {
    lVar12 = 0;
    do {
      uVar10 = *puVar18;
      if (uVar10 != 0) {
        iVar19 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> iVar19 & 1) == 0; iVar19 = iVar19 + 1) {
          }
        }
        iVar11 = (int)lVar12;
        bVar6 = (int)local_50 <= iVar19 - iVar11;
        bVar27 = iVar19 + 1 == iVar11;
        bVar26 = bVar27 || bVar6;
        local_118 = (uint *)0;
        if (bVar27 || bVar6) {
          local_118 = (uint *)local_100;
        }
        break;
      }
      lVar12 = lVar12 + -0x20;
      puVar18 = puVar18 + 1;
    } while ((ulonglong)((int)local_50 + 0x1fU & 0xffffffe0) + lVar12 != 0);
  }
  lVar12 = FUN_1449e000e(param_1,local_108,*(undefined2 *)(local_100 + 0x10),
                         *(undefined2 *)(local_100 + 0x12));
  uVar9 = *(ushort *)(lVar3 + 0xe);
  *(ushort *)(lVar12 + 0xe) = uVar9;
  memcpy(*(void **)(lVar12 + 0x18),*(void **)(lVar3 + 0x18),(ulonglong)((uint)uVar9 * 2));
  if ((!bVar26) && (uVar9 = *(ushort *)(lVar12 + 0xc), uVar9 != 0)) {
    puVar22 = *(undefined8 **)(lVar3 + 0x28);
    puVar15 = puVar22 + (ulonglong)*(ushort *)(lVar3 + 0xc) * 4 + -4;
    uVar23 = 0;
    do {
      uVar2 = *(ushort *)(*(longlong *)(lVar12 + 0x28) + 0x1e + uVar23 * 0x20);
      for (puVar21 = puVar22;
          (puVar22 = puVar15, puVar21 != puVar15 &&
          (puVar22 = puVar21, *(ushort *)((longlong)puVar21 + 0x1e) < uVar2)); puVar21 = puVar21 + 4
          ) {
      }
      if ((uVar2 == *(ushort *)((longlong)puVar22 + 0x1e)) &&
         (*(char *)((longlong)puVar22 + 0x1c) != '\0')) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x230) + 0x118);
        puVar21 = (undefined8 *)(lVar4 + (ulonglong)uVar2 * 0x10);
        pvVar1 = *(void **)(*(longlong *)(lVar12 + 0x28) + uVar23 * 0x20);
        if ((~*(byte *)(lVar4 + 10 + (ulonglong)uVar2 * 0x10) & 6) == 0) {
          memmove(pvVar1,(void *)*puVar22,
                  (ulonglong)((uint)*(byte *)(puVar21 + 1) * (uint)*(ushort *)(lVar3 + 0xe)));
        }
        else {
          plVar5 = (longlong *)*puVar21;
          (**(code **)(*plVar5 + 0x20))(plVar5,pvVar1,(void *)*puVar22);
        }
        *puVar22 = 0;
        uVar9 = *(ushort *)(lVar12 + 0xc);
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 < uVar9);
  }
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x248);
  *(undefined1 *)(param_1 + 0x261) = 1;
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return lVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140858b2e FUN_140858b2e body=873 status=ok
// SIG undefined FUN_140858b2e(void)

void FUN_140858b2e(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = *(longlong *)(param_1 + 8);
  uVar3 = *(uint *)(lVar4 + 0xd8);
  local_a0 = param_1;
  if (uVar3 == 0) {
    uVar13 = 0;
    uVar12 = 1;
    uVar6 = 0;
    iVar15 = 0;
  }
  else {
    puVar7 = *(uint **)(lVar4 + 0xd0);
    if (*(uint **)(lVar4 + 0xd0) == (uint *)0x0) {
      puVar7 = (uint *)(lVar4 + 0xc0);
    }
    uVar6 = *puVar7;
    if (uVar6 == 0) {
      iVar15 = uVar3 + 0x1e;
      if (-1 < (int)(uVar3 - 1)) {
        iVar15 = uVar3 - 1;
      }
      uVar13 = 0;
      uVar12 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar12 = uVar13;
      }
      iVar15 = 0;
      do {
        if (uVar12 == uVar13) goto LAB_140858d49;
        iVar15 = iVar15 + 0x20;
        uVar6 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar13 = 0;
      iVar15 = 0;
    }
    uVar12 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar12 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar6 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if ((int)uVar3 <= (int)uVar6) {
      uVar6 = uVar3;
    }
  }
  if (uVar6 != uVar3) {
    uVar16 = 0xffffffff;
    local_b0 = param_3;
    local_a8 = (ulonglong)uVar3;
    do {
      lVar17 = *(longlong *)(lVar4 + 0xb0) + (longlong)(int)uVar6 * 0x130 + 0x108;
      local_50 = 0x10000000000;
      local_b8 = &local_98;
      FUN_14009e926(local_b0,lVar17,&local_70,2);
      local_98 = local_70;
      uStack_94 = uStack_6c;
      uStack_90 = uStack_68;
      uStack_8c = uStack_64;
      local_88 = local_60;
      uStack_84 = uStack_5c;
      uStack_80 = uStack_58;
      uStack_7c = uStack_54;
      local_78 = local_50;
      cVar5 = FUN_1403b8874(&local_98,lVar17,0);
      if (cVar5 != '\0') {
        uVar2 = *(ushort *)(*(longlong *)(local_a0 + 0x10) + 0x58);
        iVar11 = uVar2 + 1;
        iVar15 = *(int *)(local_b0 + 0x20);
        iVar9 = iVar11 - iVar15;
        if (iVar9 != 0 && iVar15 <= iVar11) {
          if (iVar15 == 0) {
LAB_140858db5:
            if (*(int *)(local_b0 + 0x24) <= (int)(uint)uVar2) {
              *(undefined4 *)(local_b0 + 0x24) = 0x100;
              FUN_14497ddce(local_b0,iVar15);
              iVar11 = *(int *)(local_b0 + 0x20) + iVar9;
            }
            iVar10 = iVar11 + 0x1f;
            if (-1 < iVar11) {
              iVar10 = iVar11;
            }
            *(int *)(local_b0 + 0x20) = iVar11;
            if (iVar11 % 0x20 != 0) {
              bVar8 = -(char)(iVar11 % 0x20);
              *(uint *)(local_b0 + (longlong)(iVar10 >> 5) * 4) =
                   (uint)(*(int *)(local_b0 + (longlong)(iVar10 >> 5) * 4) << (bVar8 & 0x1f)) >>
                   (bVar8 & 0x1f);
            }
          }
          else {
            iVar10 = iVar15 + 0x1e;
            if (-1 < iVar15 + -1) {
              iVar10 = iVar15 + -1;
            }
            if (iVar10 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140858db5;
            *(int *)(local_b0 + 0x20) = iVar11;
          }
          FUN_1447c45ca(local_b0,iVar15,iVar9,0);
        }
        puVar7 = (uint *)(local_b0 + (ulonglong)(uVar2 >> 5) * 4);
        *puVar7 = *puVar7 | 1 << ((byte)uVar2 & 0x1f);
        break;
      }
      uVar16 = uVar16 & ~(uint)uVar12;
      puVar7 = *(uint **)(lVar4 + 0xd0);
      if (*(uint **)(lVar4 + 0xd0) == (uint *)0x0) {
        puVar7 = (uint *)(lVar4 + 0xc0);
      }
      uVar3 = *(uint *)(lVar4 + 0xd8);
      iVar11 = (int)uVar13;
      lVar17 = (longlong)iVar11;
      uVar6 = puVar7[lVar17] & uVar16;
      if (uVar6 == 0) {
        iVar9 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar9 = uVar3 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar11) {
          iVar10 = iVar11;
        }
        if (iVar11 < iVar9) {
          lVar14 = 0;
          do {
            uVar6 = puVar7[lVar17 + lVar14 + 1];
            if (uVar6 != 0) {
              uVar13 = (ulonglong)(iVar11 + (int)lVar14 + 1);
              uVar16 = 0xffffffff;
              goto LAB_140858cfe;
            }
            iVar15 = iVar15 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar10 - lVar17 != lVar14);
          uVar16 = 0xffffffff;
          iVar11 = iVar10;
        }
        uVar13 = (ulonglong)(iVar11 + 1);
        uVar6 = uVar3;
      }
      else {
LAB_140858cfe:
        uVar12 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar12 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar6 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar6) {
          uVar6 = uVar3;
        }
      }
    } while (uVar6 != (uint)local_a8);
  }
LAB_140858d49:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140858e98 FUN_140858e98 body=916 status=ok
// SIG undefined FUN_140858e98(void)

void FUN_140858e98(longlong param_1,longlong param_2,undefined8 param_3)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  int local_c0;
  uint local_bc;
  ulonglong local_b8;
  uint *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar13 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar13 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x10) + 0x58))
      goto LAB_140858ef3;
      plVar13 = plVar13 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar13 = (longlong *)0x0;
LAB_140858ef3:
  iVar2 = *(int *)(param_2 + 0x14);
  local_a0 = param_3;
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar13 + 1));
  }
  LOCK();
  *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
  UNLOCK();
  lVar4 = *plVar13;
  lVar12 = *(longlong *)(param_1 + 8);
  local_b0 = (uint *)(lVar12 + 0xc0);
  iVar6 = *(int *)(lVar12 + 0xd8);
  if (iVar6 == 0) {
    local_b8 = 0;
    uVar15 = 1;
    iVar18 = 0;
    local_c0 = 0;
  }
  else {
    puVar7 = *(uint **)(lVar12 + 0xd0);
    if (*(uint **)(lVar12 + 0xd0) == (uint *)0x0) {
      puVar7 = local_b0;
    }
    uVar5 = *puVar7;
    if (uVar5 == 0) {
      iVar18 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar18 = iVar6 + -1;
      }
      uVar15 = 0;
      uVar11 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar11 = uVar15;
      }
      iVar17 = 0;
      do {
        if (uVar11 == uVar15) goto LAB_1408590f1;
        iVar17 = iVar17 + 0x20;
        uVar5 = puVar7[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar5 == 0);
    }
    else {
      local_b8 = 0;
      iVar17 = 0;
      uVar15 = local_b8;
    }
    local_b8 = uVar15;
    uVar15 = (ulonglong)(-uVar5 & uVar5);
    uVar11 = uVar15 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar18 = (iVar17 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    local_c0 = iVar17;
    if (iVar6 <= iVar18) {
      iVar18 = iVar6;
    }
  }
  if (iVar18 < iVar6) {
    local_bc = 0xffffffff;
    local_a8 = lVar12;
    do {
      iVar6 = iVar18;
      lVar16 = *(longlong *)(lVar12 + 0xb0) + (longlong)iVar6 * 0x130 + 0x108;
      local_50 = 0x10000000000;
      local_c8 = &local_98;
      FUN_14009e926(local_a0,lVar16,&local_70,2);
      lVar12 = local_a8;
      local_98 = local_70;
      uStack_94 = uStack_6c;
      uStack_90 = uStack_68;
      uStack_8c = uStack_64;
      local_88 = local_60;
      uStack_84 = uStack_5c;
      uStack_80 = uStack_58;
      uStack_7c = uStack_54;
      local_78 = local_50;
      cVar3 = FUN_1403b8874(&local_98,lVar16,0);
      if (cVar3 != '\0') break;
      uVar5 = local_bc & ~(uint)uVar15;
      puVar7 = *(uint **)(lVar12 + 0xd0);
      if (*(uint **)(lVar12 + 0xd0) == (uint *)0x0) {
        puVar7 = local_b0;
      }
      iVar17 = *(int *)(lVar12 + 0xd8);
      iVar18 = (int)local_b8;
      lVar16 = (longlong)iVar18;
      uVar8 = puVar7[lVar16] & uVar5;
      if (uVar8 == 0) {
        iVar9 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar9 = iVar17 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = -1;
        iVar10 = iVar9;
        if (iVar9 < iVar18) {
          iVar10 = iVar18;
        }
        if (iVar9 <= iVar18) break;
        lVar14 = 0;
        iVar9 = local_c0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar8 = puVar7[lVar16 + lVar14 + 1];
          if (uVar8 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar10 - lVar16 == lVar14) goto LAB_14085906e;
        }
        local_b8 = (ulonglong)(iVar18 + (int)lVar14 + 1);
        local_bc = 0xffffffff;
        local_c0 = iVar9;
        uVar5 = local_bc;
      }
      local_bc = uVar5;
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar11 = uVar15 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar18 = (local_c0 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      iVar6 = -1;
    } while (iVar18 < iVar17);
  }
  else {
LAB_1408590f1:
    iVar6 = -1;
  }
LAB_14085906e:
  uVar1 = *(ushort *)(param_2 + 0xe);
  if (uVar1 != 0) {
    lVar12 = 0;
    do {
      *(int *)(lVar4 + lVar12) = iVar6;
      *(undefined4 *)(lVar4 + 4 + lVar12) = 0xffffffff;
      *(undefined1 *)(lVar4 + 8 + lVar12) = 0;
      lVar12 = lVar12 + 0xc;
    } while ((ulonglong)uVar1 * 0xc != lVar12);
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 3) = (int)plVar13[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar13 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14085922e FUN_14085922e body=223 status=ok
// SIG undefined FUN_14085922e(void)

longlong * FUN_14085922e(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb8);
    lVar5 = lVar2 + 0x10;
    do {
      if ((*(longlong *)(lVar5 + -0x10) != 0) ||
         ((*(longlong *)(lVar5 + -8) != 0 &&
          (plVar3 = (longlong *)FUN_144741050(lVar5), *plVar3 != 0)))) {
        plVar3 = (longlong *)FUN_14001cc68(0x280,0x10);
        FUN_14085930e(plVar3,param_2,param_1,param_3);
        (**(code **)(*plVar3 + 8))(plVar3,param_1,param_3,param_4);
        if (0 < (int)plVar3[0x36]) {
          return plVar3;
        }
        if (plVar3 == (longlong *)0x0) {
          return (longlong *)0x0;
        }
        (**(code **)*plVar3)(plVar3,1);
        return (longlong *)0x0;
      }
      lVar4 = lVar5 + 0x70;
      lVar5 = lVar5 + 0x80;
    } while (lVar4 != (longlong)iVar1 * 0x80 + lVar2);
  }
  return (longlong *)0x0;
}



// FUNCTION 14085930e FUN_14085930e body=1872 status=ok
// SIG undefined FUN_14085930e(void)

undefined8 * FUN_14085930e(undefined8 *param_1,int param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_5c [4];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1401f77c6();
  *param_1 = &PTR_FUN_14ae0a310;
  param_1[0x34] = 0;
  param_1[0x36] = 0x100000000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  uVar5 = DAT_14c84635c;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = DAT_14c84635c;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = DAT_14c846358;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = DAT_14c846350;
  *(undefined4 *)(param_1 + 0x3d) = DAT_14c846338;
  param_1[0x3c] = DAT_14c846330;
  param_1[0x3e] = uVar5;
  param_1[0x3f] = uVar5;
  param_1[0x40] = 0xffffffffffffffff;
  param_1[0x41] = 0xffffffff00000000;
  param_1[0x42] = 0xffffffff;
  param_1[0x43] = 0xffffffffffffffff;
  *(char *)((longlong)param_1 + 0x1c4) = (char)param_3[0x19];
  *(char *)((longlong)param_1 + 0x1c6) = (char)param_3[0x27];
  dVar2 = (double)param_3[0x26];
  dVar3 = (double)param_3[0x25];
  *(float *)((longlong)param_1 + 0x1d4) = (float)(double)param_3[0x24];
  *(float *)(param_1 + 0x3b) = (float)dVar3;
  *(float *)((longlong)param_1 + 0x1dc) = (float)dVar2;
  uVar13 = *(uint *)(param_1 + 0x39);
  *(uint *)(param_1 + 0x39) = uVar13 & 0xffffffef | *(uint *)((longlong)param_3 + 0xcc) >> 3 & 0x10;
  dVar2 = (double)param_3[0x23];
  dVar3 = (double)param_3[0x22];
  *(float *)(param_1 + 0x3c) = (float)(double)param_3[0x21];
  *(float *)((longlong)param_1 + 0x1e4) = (float)dVar3;
  *(float *)(param_1 + 0x3d) = (float)dVar2;
  *(undefined1 *)((longlong)param_1 + 0x1ec) = *(undefined1 *)((longlong)param_3 + 0x139);
  *(undefined1 *)((longlong)param_1 + 0x1c5) = *(undefined1 *)((longlong)param_3 + 0xc9);
  bVar7 = FUN_1401f78e6(CONCAT31((int3)((uVar13 & 0xffffffef) >> 8),
                                 *(undefined1 *)((longlong)param_3 + 0xca)));
  uVar13 = (*(uint *)(param_1 + 0x39) & 0xfffffffd) + (uint)bVar7 * 2;
  *(uint *)(param_1 + 0x39) = uVar13;
  uVar13 = uVar13 & 0xfffffffb;
  uVar14 = uVar13 | *(uint *)((longlong)param_3 + 0xcc) & 4;
  *(uint *)(param_1 + 0x39) = uVar14;
  uVar17 = 0;
  if (2 < param_2) {
    cVar8 = FUN_14010070a(CONCAT31((int3)(uVar13 >> 8),*(undefined1 *)((longlong)param_3 + 0xcb)));
    uVar14 = *(uint *)(param_1 + 0x39);
    uVar17 = 0;
    if (cVar8 != '\0') {
      uVar17 = 8;
    }
  }
  *(uint *)(param_1 + 0x39) = uVar14 & 0xfffffff7 | uVar17;
  uVar13 = *(uint *)((longlong)param_3 + 0xcc) & 1;
  *(uint *)(param_1 + 0x39) = uVar14 & 0xfffffff6 | uVar17 | uVar13;
  dVar2 = (double)param_3[0x20];
  *(float *)((longlong)param_1 + 0x1cc) = (float)(double)param_3[0x1f];
  *(float *)(param_1 + 0x3a) = (float)dVar2;
  uVar9 = (*(uint *)((longlong)param_3 + 0xcc) & 8) << 8;
  *(uint *)(param_1 + 0x39) = uVar14 & 0xfffff7f6 | uVar17 | uVar13 | uVar9;
  *(uint *)(param_1 + 0x39) =
       (uVar14 & 0xfffff716 | uVar17 | uVar13 | uVar9) +
       (*(uint *)((longlong)param_3 + 0xcc) & 0x10) * 6;
  param_1[0x3e] = 0x7f7fffff00000000;
  param_1[0x3f] = 0x7f7fffff00000000;
  *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)((longlong)param_3 + 0x144);
  bVar7 = FUN_1401f76a8(param_3);
  *(uint *)(param_1 + 0x39) = *(uint *)(param_1 + 0x39) & 0xfffffeff | (uint)bVar7 << 8;
  bVar7 = (**(code **)(*param_3 + 0x338))(param_3);
  uVar13 = *(uint *)(param_1 + 0x39) & 0xfffffdff | (uint)bVar7 << 9;
  *(uint *)(param_1 + 0x39) = uVar13;
  *(uint *)(param_1 + 0x39) = uVar13 & 0xfffffbff | (*(byte *)(param_3 + 0x1a) & 1) << 10;
  cVar8 = (**(code **)(*param_3 + 0x338))(param_3);
  if (cVar8 != '\0') {
    plVar1 = (longlong *)(param_4 + 0x40);
    FUN_1446ddc76(&local_58,"User.ResolutionMaxAxis",1);
    local_50 = local_58;
    local_48[0] = FUN_144830b78(local_48,&DAT_14cb420d0);
    puVar12 = (undefined4 *)(**(code **)(*(longlong *)(param_4 + 0x40) + 0x58))(plVar1,&local_50,0);
    uVar16 = 0xffffffff;
    uVar15 = 0xffffffff;
    if (puVar12 != (undefined4 *)0x0) {
      uVar15 = *puVar12;
    }
    *(undefined4 *)(param_1 + 0x43) = uVar15;
    FUN_1446ddc76(&local_58,"User.WorldSpaceSize",1);
    local_50 = local_58;
    local_48[0] = FUN_144830b78(local_48,&DAT_14cb42140);
    puVar12 = (undefined4 *)(**(code **)(*plVar1 + 0x58))(plVar1,&local_50,0);
    if (puVar12 != (undefined4 *)0x0) {
      uVar16 = *puVar12;
    }
    *(undefined4 *)((longlong)param_1 + 0x21c) = uVar16;
  }
  if ((*(byte *)((longlong)param_3 + 0xcc) & 0x20) != 0) {
    fVar19 = *(float *)((longlong)param_3 + 0x13c);
    fVar20 = *(float *)(param_3 + 0x28);
    *(float *)(param_1 + 0x3e) = fVar19;
    *(float *)((longlong)param_1 + 500) = fVar20;
    *(float *)(param_1 + 0x3f) = fVar19 * fVar19;
    *(float *)((longlong)param_1 + 0x1fc) = fVar20 * fVar20;
    *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) | 0x20;
  }
  fVar19 = *(float *)(param_1 + 0x3c);
  fVar20 = *(float *)((longlong)param_1 + 0x1e4);
  fVar21 = *(float *)(param_1 + 0x3d);
  fVar22 = fVar21 * fVar21 + fVar19 * fVar19 + fVar20 * fVar20;
  if (fVar22 <= 1e-08) {
    fVar21 = 1.0;
    fVar19 = 0.0;
    fVar20 = 0.0;
  }
  else {
    fVar22 = 1.0 / SQRT(fVar22);
    fVar19 = fVar19 * fVar22;
    fVar20 = fVar20 * fVar22;
    fVar21 = fVar21 * fVar22;
  }
  *(float *)(param_1 + 0x3c) = fVar19;
  *(float *)((longlong)param_1 + 0x1e4) = fVar20;
  *(float *)(param_1 + 0x3d) = fVar21;
  uVar5 = *(undefined8 *)(param_4 + 0x10);
  uVar15 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0xffffffff;
  if ((*(byte *)((longlong)param_3 + 0x48d) & 3) == 1) {
    puVar12 = (undefined4 *)
              (**(code **)(*(longlong *)(param_4 + 0x40) + 0x58))(param_4 + 0x40,param_3 + 0x8f,0);
    if (puVar12 != (undefined4 *)0x0) {
      uVar15 = *puVar12;
    }
    *(undefined4 *)((longlong)param_1 + 0x20c) = uVar15;
  }
  else {
    uVar10 = FUN_144741050(param_3 + 0x90);
    local_50 = *(undefined8 *)((longlong)param_3 + 0x484);
    local_48[0] = FUN_144830b78(local_48,uVar10);
    local_68 = local_5c;
    cVar8 = FUN_1448e9d24(uVar5,&local_50,&local_58,param_1 + 0x40);
    if (cVar8 != '\0') {
      *(uint *)(param_1 + 0x39) =
           *(uint *)(param_1 + 0x39) & 0xffffffdf |
           (uint)((*(uint *)(param_1 + 0x39) & 0x20) != 0 || *(int *)(param_1 + 0x40) != -1) << 5;
    }
  }
  uVar15 = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  if ((*(byte *)((longlong)param_3 + 0x4c5) & 3) == 1) {
    puVar12 = (undefined4 *)
              (**(code **)(*(longlong *)(param_4 + 0x40) + 0x58))(param_4 + 0x40,param_3 + 0x96,0);
    if (puVar12 != (undefined4 *)0x0) {
      uVar15 = *puVar12;
    }
    *(undefined4 *)(param_1 + 0x42) = uVar15;
  }
  else {
    uVar10 = FUN_144741050(param_3 + 0x97);
    local_50 = *(undefined8 *)((longlong)param_3 + 0x4bc);
    local_48[0] = FUN_144830b78(local_48,uVar10);
    local_68 = local_5c;
    cVar8 = FUN_1448e9d24(uVar5,&local_50,&local_58,(longlong)param_1 + 0x204);
    if (cVar8 != '\0') {
      *(uint *)(param_1 + 0x39) =
           *(uint *)(param_1 + 0x39) & 0xffffffdf |
           (uint)((*(uint *)(param_1 + 0x39) & 0x20) != 0 ||
                 *(int *)((longlong)param_1 + 0x204) != -1) << 5;
    }
  }
  *(int *)((longlong)param_1 + 0x214) = (int)param_3[0xc6];
  param_1[0x4e] = param_3 + 199;
  param_1[0x4f] = param_3 + 0xcc;
  *(byte *)((longlong)param_1 + 0x26c) = *(byte *)((longlong)param_1 + 0x26c) & 0xfe;
  if (*(int *)(param_4 + 0x58) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x25c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x264) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4d) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4a) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x254) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4b) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x25c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x244) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x49) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x24c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x46) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x234) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x47) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x23c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x224) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x22c) = 0xffffffff;
  }
  else {
    bVar7 = *(byte *)((longlong)param_1 + 0x1c9);
    uVar18 = 0;
    do {
      *(undefined4 *)((longlong)param_1 + uVar18 * 4 + 0x220) = 0xffffffff;
      if (((uVar18 < (ulonglong)(bVar7 & 1) * 5 + 0xe) &&
          (lVar6 = *(longlong *)(param_3[0x15] + uVar18 * 8), lVar6 != 0)) &&
         ((*(byte *)(lVar6 + 0x35) & 3) == 1)) {
        piVar11 = (int *)(**(code **)(*(longlong *)(param_4 + 0x40) + 0x58))
                                   ((longlong *)(param_4 + 0x40),lVar6 + 0x20,0);
        if (piVar11 == (int *)0x0) {
          *(undefined4 *)((longlong)param_1 + uVar18 * 4 + 0x220) = 0xffffffff;
        }
        else {
          iVar4 = *piVar11;
          *(int *)((longlong)param_1 + uVar18 * 4 + 0x220) = iVar4;
          if (iVar4 != -1) {
            *(byte *)((longlong)param_1 + 0x26c) = *(byte *)((longlong)param_1 + 0x26c) | 1;
          }
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != 0x13);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140859a60 FUN_140859a60 body=38 status=ok
// SIG undefined FUN_140859a60(void)

undefined8 FUN_140859a60(undefined8 param_1,int param_2)

{
  FUN_140859a90();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 140859a90 FUN_140859a90 body=60 status=ok
// SIG undefined FUN_140859a90(void)

void FUN_140859a90(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_149e18960;
  if ((*(byte *)(param_1 + 1) & 4) != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + -4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_1424da110(param_1[3] + -4);
    }
  }
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 140859ad2 FUN_140859ad2 body=57 status=ok
// SIG undefined FUN_140859ad2(void)

void FUN_140859ad2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b028 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b028 = FUN_140002ddd(FUN_1464ce076,uVar1,L"GbxBrainTask_MeleeAttack");
  }
  return;
}



// FUNCTION 140859b0c FUN_140859b0c body=73 status=ok
// SIG undefined FUN_140859b0c(void)

void FUN_140859b0c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_140859c7a();
  lVar4 = FUN_140859b56(param_1,param_2);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0xa20) = *(undefined8 *)(param_1 + 0x68);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(lVar4 + 0xa10) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(lVar4 + 0xa18) = uVar3;
    *(undefined8 *)(lVar4 + 0xa00) = uVar1;
    *(undefined8 *)(lVar4 + 0xa08) = uVar2;
  }
  return;
}



// FUNCTION 140859b56 FUN_140859b56 body=62 status=ok
// SIG undefined FUN_140859b56(void)

undefined8 FUN_140859b56(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_140859b94();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return *(undefined8 *)(param_2 + 0x990);
    }
  }
  return 0;
}



// FUNCTION 140859b94 FUN_140859b94 body=228 status=ok
// SIG undefined FUN_140859b94(void)

longlong FUN_140859b94(void)

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
  if (DAT_14cb991c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b639a;
    local_38 = &LAB_148acd7f1;
    local_40 = &LAB_14658c4e1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x9c0;
    FUN_14081cfa3(L"/Script/ChaosVehicles",L"ChaosVehicleMovementComponent",&DAT_14cb991c8,
                  FUN_14658c4ba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb991c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140859c7a FUN_140859c7a body=136 status=ok
// SIG undefined FUN_140859c7a(void)

void FUN_140859c7a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar4 = FUN_140859b94();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
       (lVar4 = *(longlong *)(param_2 + 0x990), lVar4 != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(lVar4 + 0x208) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(lVar4 + 0x210) = uVar3;
      *(undefined8 *)(lVar4 + 0x1f8) = uVar1;
      *(undefined8 *)(lVar4 + 0x200) = uVar2;
      lVar4 = *(longlong *)(lVar4 + 0x1a0);
      if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x20))) {
        lVar4 = *(longlong *)(lVar4 + 0x18);
        *(undefined4 *)(lVar4 + 8) = *(undefined4 *)(param_1 + 0x3c);
        *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)(param_1 + 0x40);
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(param_1 + 0x38);
      }
    }
  }
  return;
}



// FUNCTION 140859d02 FUN_140859d02 body=44 status=ok
// SIG undefined FUN_140859d02(void)

void FUN_140859d02(void)

{
  FUN_140859d2e();
  return;
}



// FUNCTION 140859d2e FUN_140859d2e body=3148 status=ok
// SIG undefined FUN_140859d2e(void)

void FUN_140859d2e(longlong param_1,double param_2,int param_3,int param_4,int param_5,int param_6,
                  longlong param_7)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
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
  float local_14c;
  float local_148;
  
  if (((param_5 < param_6) && (DAT_14c75f0ed != '\0')) &&
     (FUN_1408366aa(param_1), 0 < *(int *)(param_1 + 0x50))) {
    fVar22 = (float)param_2;
    iVar13 = *(int *)(param_7 + 0x10);
    lVar20 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x48) + lVar20 * 0x60;
      if ((1 < *(int *)(*(longlong *)(param_1 + 0x48) + 0x58 + lVar20 * 0x60)) &&
         ((DAT_14c993198 & 1) != 0)) {
        FUN_146d6f5f8(lVar1);
      }
      local_148 = 0.0;
      if ((0.0 < fVar22 && param_4 - iVar13 <= param_3) && (DAT_14c75f0f4 == '\x01')) {
        local_148 = *(float *)(lVar1 + 8);
      }
      if (0 < *(int *)(lVar1 + 0x58)) {
        lVar18 = 0x100;
        lVar19 = 0;
        do {
          lVar14 = *(longlong *)(lVar1 + 0x50);
          fVar27 = *(float *)(lVar14 + -0x18 + lVar18);
          bVar17 = 0.0 < local_148;
          if (0.0 < fVar27 || local_148 <= 0.0) {
LAB_140859ef9:
            if ((0.0 < fVar27) || (bVar17)) {
              fVar23 = *(float *)(lVar14 + lVar18) + fVar27;
              fVar9 = 0.0;
              if (-fVar23 / fVar22 <= 0.0) {
                fVar9 = -fVar23 / fVar22;
              }
              if (bVar17) goto LAB_140859f3e;
              if (0.0 < fVar27) {
                lVar15 = *(longlong *)(lVar1 + 0x18);
                lVar16 = *(longlong *)(lVar1 + 0x30);
                fVar27 = *(float *)(lVar14 + -0xe8 + lVar18);
                fVar23 = *(float *)(lVar14 + -0xe4 + lVar18);
                fVar33 = *(float *)(lVar14 + -0xe0 + lVar18);
                fVar29 = -*(float *)(lVar14 + -0x24 + lVar18) * *(float *)(lVar1 + 0x10) *
                         ((*(float *)(lVar15 + 0x38) * *(float *)(lVar14 + -0xac + lVar18) +
                           *(float *)(lVar15 + 0x30) * *(float *)(lVar14 + -0xb4 + lVar18) +
                           *(float *)(lVar15 + 0x34) * *(float *)(lVar14 + -0xb0 + lVar18) +
                          (((*(float *)(lVar15 + 0x28) - *(float *)(lVar16 + 0x28)) * fVar33 +
                           (*(float *)(lVar15 + 0x20) - *(float *)(lVar16 + 0x20)) * fVar27 +
                           (*(float *)(lVar15 + 0x24) - *(float *)(lVar16 + 0x24)) * fVar23) -
                          *(float *)(lVar14 + -0xb8 + lVar18))) -
                         (*(float *)(lVar16 + 0x38) * *(float *)(lVar14 + -0xa0 + lVar18) +
                         *(float *)(lVar16 + 0x30) * *(float *)(lVar14 + -0xa8 + lVar18) +
                         *(float *)(lVar16 + 0x34) * *(float *)(lVar14 + -0xa4 + lVar18)));
                fVar26 = *(float *)(lVar14 + -0xc + lVar18);
                uVar21 = -(uint)(fVar26 + fVar29 < fVar9);
                fVar29 = (float)((uint)(fVar9 - fVar26) & uVar21 | ~uVar21 & (uint)fVar29);
                *(float *)(lVar14 + -0xc + lVar18) = fVar26 + fVar29;
                fVar27 = fVar27 * fVar29;
                fVar23 = fVar23 * fVar29;
                fVar33 = fVar29 * fVar33;
                fVar9 = *(float *)(lVar1 + 0x48);
                if (1.1754944e-38 < fVar9) {
                  fVar26 = *(float *)(lVar14 + -100 + lVar18);
                  fVar3 = *(float *)(lVar14 + -0x68 + lVar18);
                  lVar15 = *(longlong *)(lVar1 + 0x18);
                  fVar4 = *(float *)(lVar14 + -0x6c + lVar18);
                  *(float *)(lVar15 + 0x20) = fVar9 * fVar27 + *(float *)(lVar15 + 0x20);
                  *(float *)(lVar15 + 0x24) = fVar9 * fVar23 + *(float *)(lVar15 + 0x24);
                  *(float *)(lVar15 + 0x28) = fVar9 * fVar33 + *(float *)(lVar15 + 0x28);
                  *(float *)(lVar15 + 0x30) = fVar4 * fVar29 + *(float *)(lVar15 + 0x30);
                  *(float *)(lVar15 + 0x34) = fVar3 * fVar29 + *(float *)(lVar15 + 0x34);
                  *(float *)(lVar15 + 0x38) = fVar26 * fVar29 + *(float *)(lVar15 + 0x38);
                }
                fVar9 = *(float *)(lVar1 + 0x4c);
                if (1.1754944e-38 < fVar9) {
                  lVar15 = *(longlong *)(lVar1 + 0x30);
                  fVar26 = *(float *)(lVar14 + -0x40 + lVar18);
                  fVar3 = *(float *)(lVar14 + -0x44 + lVar18);
                  fVar4 = *(float *)(lVar14 + -0x48 + lVar18);
                  *(float *)(lVar15 + 0x20) = *(float *)(lVar15 + 0x20) - fVar27 * fVar9;
                  *(float *)(lVar15 + 0x24) = *(float *)(lVar15 + 0x24) - fVar23 * fVar9;
                  *(float *)(lVar15 + 0x28) = *(float *)(lVar15 + 0x28) - fVar33 * fVar9;
                  *(float *)(lVar15 + 0x30) = *(float *)(lVar15 + 0x30) - fVar4 * fVar29;
                  *(float *)(lVar15 + 0x34) = *(float *)(lVar15 + 0x34) - fVar3 * fVar29;
                  *(float *)(lVar15 + 0x38) = *(float *)(lVar15 + 0x38) - fVar26 * fVar29;
                }
              }
            }
          }
          else {
            pfVar2 = (float *)(lVar14 + -0xc4 + lVar18);
            if (*(float *)(lVar1 + 0x14) < *pfVar2 || *(float *)(lVar1 + 0x14) == *pfVar2) {
              bVar17 = 0.0 < *(float *)(lVar14 + lVar18);
              goto LAB_140859ef9;
            }
            fVar23 = *(float *)(lVar14 + lVar18) + fVar27;
            fVar9 = 0.0;
            if (-fVar23 / fVar22 <= 0.0) {
              fVar9 = -fVar23 / fVar22;
            }
LAB_140859f3e:
            lVar15 = *(longlong *)(lVar1 + 0x18);
            lVar16 = *(longlong *)(lVar1 + 0x30);
            fVar30 = *(float *)(lVar15 + 0x28) - *(float *)(lVar16 + 0x28);
            fVar24 = *(float *)(lVar15 + 0x24) - *(float *)(lVar16 + 0x24);
            fVar28 = *(float *)(lVar15 + 0x20) - *(float *)(lVar16 + 0x20);
            local_14c = *(float *)(lVar14 + -0xe8 + lVar18);
            fVar33 = *(float *)(lVar14 + -0xe4 + lVar18);
            fVar26 = *(float *)(lVar14 + -0xe0 + lVar18);
            fVar29 = *(float *)(lVar15 + 0x30);
            fVar3 = *(float *)(lVar15 + 0x34);
            fVar4 = *(float *)(lVar15 + 0x38);
            fVar5 = *(float *)(lVar16 + 0x30);
            fVar6 = *(float *)(lVar16 + 0x34);
            fVar7 = *(float *)(lVar16 + 0x38);
            fVar35 = *(float *)(lVar1 + 0x10);
            fVar25 = -fVar35 * *(float *)(lVar14 + -0x24 + lVar18) *
                     (float)(-(uint)(0.0 < fVar27) &
                            (uint)((*(float *)(lVar14 + -0xac + lVar18) * fVar4 +
                                    *(float *)(lVar14 + -0xb4 + lVar18) * fVar29 +
                                    *(float *)(lVar14 + -0xb0 + lVar18) * fVar3 +
                                   ((fVar30 * fVar26 + fVar28 * local_14c + fVar24 * fVar33) -
                                   *(float *)(lVar14 + -0xb8 + lVar18))) -
                                  (*(float *)(lVar14 + -0xa0 + lVar18) * fVar7 +
                                  *(float *)(lVar14 + -0xa8 + lVar18) * fVar5 +
                                  *(float *)(lVar14 + -0xa4 + lVar18) * fVar6)));
            fVar27 = *(float *)(lVar14 + -0xc + lVar18);
            uVar21 = -(uint)(fVar27 + fVar25 < fVar9);
            fVar8 = *(float *)(lVar14 + -0xdc + lVar18);
            fVar32 = (float)((uint)(fVar9 - fVar27) & uVar21 | ~uVar21 & (uint)fVar25);
            fVar26 = fVar32 * fVar26;
            fVar9 = *(float *)(lVar14 + -0xd8 + lVar18);
            fVar25 = *(float *)(lVar14 + -0xd4 + lVar18);
            fVar10 = *(float *)(lVar14 + -0xd0 + lVar18);
            fVar11 = *(float *)(lVar14 + -0xcc + lVar18);
            fVar12 = *(float *)(lVar14 + -200 + lVar18);
            *(float *)(lVar14 + -0xc + lVar18) = fVar27 + fVar32;
            local_14c = local_14c * fVar32;
            fVar33 = fVar33 * fVar32;
            fVar34 = 0.0;
            if (fVar22 <= 0.0 || 0.0 >= local_148) {
              fVar31 = 0.0;
            }
            else {
              fVar35 = fVar35 * -DAT_14c75f0f8;
              fVar31 = *(float *)(lVar14 + -0x20 + lVar18) * fVar35 *
                       ((*(float *)(lVar14 + -0x94 + lVar18) * fVar4 +
                         *(float *)(lVar14 + -0x9c + lVar18) * fVar29 +
                         *(float *)(lVar14 + -0x98 + lVar18) * fVar3 +
                        fVar30 * fVar25 + fVar28 * fVar8 + fVar24 * fVar9 + 0.0) -
                       (*(float *)(lVar14 + -0x7c + lVar18) * fVar7 +
                       *(float *)(lVar14 + -0x84 + lVar18) * fVar5 +
                       *(float *)(lVar14 + -0x80 + lVar18) * fVar6));
              fVar34 = fVar35 * *(float *)(lVar14 + -0x1c + lVar18) *
                       ((*(float *)(lVar14 + -0x88 + lVar18) * fVar4 +
                         *(float *)(lVar14 + -0x90 + lVar18) * fVar29 +
                         *(float *)(lVar14 + -0x8c + lVar18) * fVar3 +
                        fVar30 * fVar12 + fVar28 * fVar10 + fVar24 * fVar11 + 0.0) -
                       (*(float *)(lVar14 + -0x70 + lVar18) * fVar7 +
                       *(float *)(lVar14 + -0x78 + lVar18) * fVar5 +
                       *(float *)(lVar14 + -0x74 + lVar18) * fVar6));
              fVar23 = fVar23 / fVar22 + fVar27 + fVar32 + fVar32;
              fVar27 = *(float *)(lVar1 + 0xc) / fVar22;
              if (fVar27 <= fVar23) {
                fVar27 = fVar23;
              }
              fVar27 = fVar27 * local_148;
              fVar23 = fVar34 * fVar34 + fVar31 * fVar31;
              if (fVar27 * fVar27 + 1e-08 < fVar23) {
                fVar27 = fVar27 * (1.0 / SQRT(fVar23));
                fVar31 = fVar31 * fVar27;
                fVar34 = fVar34 * fVar27;
              }
              *(float *)(lVar14 + -8 + lVar18) = *(float *)(lVar14 + -8 + lVar18) + fVar31;
              *(float *)(lVar14 + -4 + lVar18) = *(float *)(lVar14 + -4 + lVar18) + fVar34;
              local_14c = local_14c + fVar10 * fVar34 + fVar8 * fVar31;
              fVar33 = fVar33 + fVar11 * fVar34 + fVar9 * fVar31;
              fVar26 = fVar26 + fVar12 * fVar34 + fVar25 * fVar31;
            }
            fVar27 = *(float *)(lVar1 + 0x48);
            if (1.1754944e-38 < fVar27) {
              fVar9 = *(float *)(lVar14 + -100 + lVar18);
              fVar23 = *(float *)(lVar14 + -0x68 + lVar18);
              fVar29 = *(float *)(lVar14 + -0x6c + lVar18);
              fVar3 = *(float *)(lVar14 + -0x58 + lVar18);
              fVar4 = *(float *)(lVar14 + -0x5c + lVar18);
              fVar5 = *(float *)(lVar14 + -0x60 + lVar18);
              fVar6 = *(float *)(lVar14 + -0x4c + lVar18);
              fVar7 = *(float *)(lVar14 + -0x50 + lVar18);
              lVar15 = *(longlong *)(lVar1 + 0x18);
              fVar35 = *(float *)(lVar14 + -0x54 + lVar18);
              *(float *)(lVar15 + 0x20) = local_14c * fVar27 + *(float *)(lVar15 + 0x20);
              *(float *)(lVar15 + 0x24) = fVar33 * fVar27 + *(float *)(lVar15 + 0x24);
              *(float *)(lVar15 + 0x28) = fVar27 * fVar26 + *(float *)(lVar15 + 0x28);
              *(float *)(lVar15 + 0x30) =
                   fVar35 * fVar34 + fVar5 * fVar31 + fVar29 * fVar32 + *(float *)(lVar15 + 0x30);
              *(float *)(lVar15 + 0x34) =
                   fVar7 * fVar34 + fVar4 * fVar31 + fVar23 * fVar32 + *(float *)(lVar15 + 0x34);
              *(float *)(lVar15 + 0x38) =
                   fVar6 * fVar34 + fVar3 * fVar31 + fVar9 * fVar32 + *(float *)(lVar15 + 0x38);
            }
            fVar27 = *(float *)(lVar1 + 0x4c);
            if (1.1754944e-38 < fVar27) {
              fVar31 = -fVar31;
              fVar9 = *(float *)(lVar14 + -0x34 + lVar18);
              fVar23 = *(float *)(lVar14 + -0x38 + lVar18);
              fVar29 = *(float *)(lVar14 + -0x3c + lVar18);
              fVar3 = *(float *)(lVar14 + -0x40 + lVar18);
              fVar4 = *(float *)(lVar14 + -0x44 + lVar18);
              fVar5 = *(float *)(lVar14 + -0x48 + lVar18);
              fVar6 = *(float *)(lVar14 + -0x28 + lVar18);
              fVar7 = *(float *)(lVar14 + -0x2c + lVar18);
              fVar35 = *(float *)(lVar14 + -0x30 + lVar18);
              lVar14 = *(longlong *)(lVar1 + 0x30);
              *(float *)(lVar14 + 0x20) = *(float *)(lVar14 + 0x20) - local_14c * fVar27;
              *(float *)(lVar14 + 0x24) = *(float *)(lVar14 + 0x24) - fVar33 * fVar27;
              *(float *)(lVar14 + 0x28) = *(float *)(lVar14 + 0x28) - fVar26 * fVar27;
              *(float *)(lVar14 + 0x30) =
                   ((fVar31 * fVar29 - fVar5 * fVar32) - fVar34 * fVar35) +
                   *(float *)(lVar14 + 0x30);
              *(float *)(lVar14 + 0x34) =
                   ((fVar23 * fVar31 - fVar4 * fVar32) - fVar7 * fVar34) + *(float *)(lVar14 + 0x34)
              ;
              *(float *)(lVar14 + 0x38) =
                   ((fVar9 * fVar31 - fVar3 * fVar32) - fVar6 * fVar34) + *(float *)(lVar14 + 0x38);
            }
          }
          lVar19 = lVar19 + 1;
          lVar18 = lVar18 + 0x10c;
        } while (lVar19 < *(int *)(lVar1 + 0x58));
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 < *(int *)(param_1 + 0x50));
  }
  return;
}



// FUNCTION 14085a986 FUN_14085a986 body=144 status=ok
// SIG undefined FUN_14085a986(void)

void FUN_14085a986(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_14085aa16(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      puVar2 = puVar2 + 2;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146d9b8ec(param_1);
    return;
  }
  return;
}



// FUNCTION 14085aa16 FUN_14085aa16 body=269 status=ok
// SIG undefined FUN_14085aa16(void)

void FUN_14085aa16(longlong param_1,int param_2)

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



// FUNCTION 14085ab24 FUN_14085ab24 body=1370 status=ok
// SIG undefined FUN_14085ab24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14085ab24(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  
  lVar1 = *(longlong *)(param_1 + -8);
  fVar9 = *(float *)(param_1 + 0x18);
  fVar10 = *(float *)(param_1 + 0x1c);
  fVar7 = *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x18) = fVar9 - param_2;
  fVar6 = fVar10 - param_2;
  *(float *)(param_1 + 0x1c) = fVar6;
  param_2 = fVar7 - param_2;
  auVar18 = ZEXT416((uint)param_2);
  *(float *)(param_1 + 0x20) = param_2;
  if ((fVar7 <= 0.0) || (0.0 < param_2)) goto LAB_14085abc7;
  uVar4 = rand();
  uVar2 = DAT_14c8463e8;
  auVar17 = ZEXT416((uint)*(float *)(lVar1 + 0x60));
  if (*(float *)(lVar1 + 0x60) <= (float)(uVar4 & 0x7fff) / 32767.0) {
    *(undefined8 *)(param_1 + 0x80) = DAT_14c8463e0;
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    uVar2 = DAT_14c8463d8;
    *(undefined8 *)(param_1 + 0x70) = DAT_14c8463d0;
    *(undefined8 *)(param_1 + 0x78) = uVar2;
    goto switchD_14085acc1_default;
  }
  fVar7 = (float)FUN_14085b07e(lVar1 + 100);
  uVar4 = rand();
  iVar5 = (int)(((float)(uVar4 & 0x7fff) / 32767.0) * 4.0);
  iVar3 = 3;
  if (iVar5 < 3) {
    iVar3 = iVar5;
  }
  switch(iVar3) {
  case 0:
    fVar6 = *(float *)(lVar1 + 0x74) + *(float *)(lVar1 + 0x78);
    break;
  case 1:
    fVar6 = *(float *)(lVar1 + 0x74) - *(float *)(lVar1 + 0x78);
    break;
  case 2:
    fVar6 = *(float *)(lVar1 + 0x6c) + *(float *)(lVar1 + 0x70);
    goto LAB_14085aed5;
  case 3:
    fVar6 = *(float *)(lVar1 + 0x6c) - *(float *)(lVar1 + 0x70);
LAB_14085aed5:
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (double)(fVar7 * fVar6);
    auVar17 = divpd(auVar17 << 0x40,_DAT_1499387d0);
    auVar17 = roundpd(auVar17,auVar17,3);
    auVar18 = roundpd(auVar18,ZEXT816(0),3);
    dVar11 = auVar18._0_8_ * (double)DAT_1499387d0;
    dVar19 = auVar18._8_8_ * DAT_1499387d0._8_8_;
    dVar12 = 0.0 - auVar17._0_8_ * (double)DAT_1499387d0;
    dVar13 = (double)(fVar7 * fVar6) - auVar17._8_8_ * DAT_1499387d0._8_8_;
    goto LAB_14085af6e;
  default:
    goto switchD_14085acc1_default;
  }
  auVar15._0_8_ = (double)(fVar7 * fVar6) / 360.0;
  auVar15._8_8_ = 0;
  auVar18 = roundpd(auVar15,auVar15,3);
  auVar17 = roundpd(auVar17,ZEXT816(0),3);
  dVar12 = (double)(fVar7 * fVar6) - auVar18._0_8_ * 360.0;
  dVar13 = 0.0 - auVar18._8_8_ * 360.0;
  dVar11 = auVar17._0_8_ * 360.0;
  dVar19 = auVar17._8_8_ * 360.0;
LAB_14085af6e:
  dVar11 = (0.0 - dVar11) * 0.008726646259971648;
  dVar19 = (0.0 - dVar19) * 0.008726646259971648;
  dVar14 = sin(dVar12 * 0.008726646259971648);
  dVar20 = sin(dVar13 * 0.008726646259971648);
  dVar21 = sin(dVar11);
  sin(dVar19);
  dVar12 = cos(dVar12 * 0.008726646259971648);
  dVar13 = cos(dVar13 * 0.008726646259971648);
  dVar11 = cos(dVar11);
  cos(dVar19);
  auVar18._0_8_ = dVar12 * dVar13 * dVar21;
  auVar18._8_8_ = dVar12 * dVar20 * dVar21;
  *(double *)(param_1 + 0x70) = dVar14 * dVar20 * dVar11 - auVar18._0_8_;
  *(double *)(param_1 + 0x78) = -(dVar14 * dVar13 * dVar11) - auVar18._8_8_;
  *(double *)(param_1 + 0x80) = -(dVar13 * dVar14 * dVar21) + dVar20 * dVar12 * dVar11;
  *(double *)(param_1 + 0x88) = dVar20 * dVar14 * dVar21 + dVar13 * dVar12 * dVar11;
switchD_14085acc1_default:
  uVar8 = FUN_14085b07e(lVar1 + 0x58);
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  fVar6 = *(float *)(param_1 + 0x1c);
LAB_14085abc7:
  uVar2 = DAT_14c8463e8;
  if ((0.0 < fVar6) || (fVar10 <= 0.0)) {
    fVar10 = *(float *)(param_1 + 0x18);
  }
  else {
    *(undefined8 *)(param_1 + 0x60) = DAT_14c8463e0;
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    uVar2 = DAT_14c8463d8;
    *(undefined8 *)(param_1 + 0x50) = DAT_14c8463d0;
    *(undefined8 *)(param_1 + 0x58) = uVar2;
    fVar10 = (float)FUN_14085b07e(lVar1 + 0x38);
    *(float *)(param_1 + 0x18) = fVar10;
  }
  if ((fVar10 <= 0.0) && (0.0 < fVar9)) {
    uVar8 = FUN_14085b07e(lVar1 + 0x40);
    *(undefined4 *)(param_1 + 0x1c) = uVar8;
    uVar4 = rand();
    fVar9 = (float)(uVar4 & 0x7fff) / 32767.0;
    fVar9 = (float)FUN_14085b07e(param_1 + (ulonglong)((int)(fVar9 + fVar9) < 1) * 8 + 0x34);
    uVar4 = rand();
    fVar10 = (float)(uVar4 & 0x7fff) / 32767.0;
    fVar10 = (float)FUN_14085b07e(param_1 + (ulonglong)((int)(fVar10 + fVar10) < 1) * 8 + 0x24);
    dVar11 = (double)fVar10;
    auVar16._8_4_ = SUB84(dVar11,0);
    auVar16._0_8_ = (double)fVar9;
    auVar16._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar17 = divpd(auVar16,_DAT_1499387d0);
    auVar17 = roundpd(auVar17,auVar17,3);
    auVar18 = roundpd(auVar18,ZEXT816(0),3);
    dVar20 = ((double)fVar9 - auVar17._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar21 = (dVar11 - auVar17._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar11 = (0.0 - auVar18._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar19 = (0.0 - auVar18._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar12 = sin(dVar20);
    dVar13 = sin(dVar21);
    dVar14 = sin(dVar11);
    sin(dVar19);
    dVar20 = cos(dVar20);
    dVar21 = cos(dVar21);
    dVar11 = cos(dVar11);
    cos(dVar19);
    *(double *)(param_1 + 0x50) = dVar12 * dVar13 * dVar11 - dVar20 * dVar21 * dVar14;
    *(double *)(param_1 + 0x58) = -(dVar12 * dVar21 * dVar11) - dVar20 * dVar13 * dVar14;
    *(double *)(param_1 + 0x60) = -(dVar21 * dVar12 * dVar14) + dVar13 * dVar20 * dVar11;
    *(double *)(param_1 + 0x68) = dVar13 * dVar12 * dVar14 + dVar21 * dVar20 * dVar11;
  }
  return;
}



// FUNCTION 14085b07e FUN_14085b07e body=124 status=ok
// SIG undefined FUN_14085b07e(void)

float FUN_14085b07e(float *param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  
  fVar3 = *param_1;
  fVar1 = param_1[1];
  if (1e-08 < ABS(fVar1)) {
    uVar2 = rand();
    fVar3 = fVar3 + (((float)(uVar2 & 0x7fff) / 32767.0) * (fVar1 + fVar1) - fVar1);
  }
  return fVar3;
}



// FUNCTION 14085b0fa FUN_14085b0fa body=1141 status=ok
// SIG undefined FUN_14085b0fa(void)

void FUN_14085b0fa(longlong param_1)

{
  uint *_Dst;
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  wchar_t awStack_68 [20];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = *(longlong **)(param_1 + 0xa8);
  if (plVar5 == (longlong *)0x0) {
LAB_14085b3e5:
    uStack_70 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar4 = FUN_14085b570();
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar4);
    if (plVar5 == (longlong *)0x0) goto LAB_14085b3e5;
    uVar4 = FUN_14085b570();
    plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
    if (plVar5 == plVar6) goto LAB_14085b3e5;
    local_78 = 0;
    uStack_70 = (longlong *)0x0;
    if (plVar6 == (longlong *)0x0) goto LAB_14085b3e5;
    lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
    if (lVar7 != 0) {
      uVar12 = *(uint *)(lVar7 + 0xc);
      local_78 = CONCAT44(local_78._4_4_,uVar12);
      if ((int)uVar12 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar2 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar2 = *(int *)(lVar7 + 0x10);
        bVar13 = iVar2 == 0;
        if (bVar13) {
          *(int *)(lVar7 + 0x10) = iVar9;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar2 = iVar9;
        }
      }
      goto LAB_14085b1c9;
    }
  }
  local_78 = 0;
  iVar2 = 0;
LAB_14085b1c9:
  local_78._4_4_ = iVar2;
  cVar1 = FUN_14493c216(&local_78,0);
  if (cVar1 == '\0') {
    uStack_70 = plVar6;
  }
  *(undefined4 *)(param_1 + 0x11d0) = (undefined4)local_78;
  *(int *)(param_1 + 0x11d4) = local_78._4_4_;
  *(undefined4 *)(param_1 + 0x11d8) = (undefined4)uStack_70;
  *(undefined4 *)(param_1 + 0x11dc) = uStack_70._4_4_;
  FUN_14085b844(param_1);
  *(undefined1 *)(param_1 + 0x117c) = 0;
  FUN_14085b656(param_1,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb76278) && (FUN_144b3d300(&DAT_14cb76278), DAT_14cb76278 == -1)) {
    builtin_wcsncpy(awStack_68 + 8,L"lized",6);
    builtin_wcsncpy(awStack_68,L"imInitia",8);
    local_78._0_4_ = 0x6f004e;
    local_78._4_2_ = L't';
    local_78._6_2_ = L'i';
    uStack_70 = (longlong *)0x6e004100790066;
    FUN_1446f470e(&DAT_14cb76270);
    _Init_thread_footer(&DAT_14cb76278);
  }
  lVar7 = DAT_14cb76270;
  plVar5 = (longlong *)(param_1 + 0xf20);
  if (param_1 == 0) {
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    uVar12 = *(uint *)(param_1 + 0xc);
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    uVar3 = *(uint *)(lVar10 + 0x10);
    if (*(uint *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar8 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar8);
      }
      LOCK();
      uVar3 = *(uint *)(lVar10 + 0x10);
      bVar13 = uVar3 == 0;
      if (bVar13) {
        *(uint *)(lVar10 + 0x10) = uVar8;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar13) {
        uVar3 = uVar8;
      }
    }
    uVar11 = (ulonglong)uVar3;
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else if (uVar3 == 0) {
      uVar11 = 0;
    }
    else if ((((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) &&
             (plVar6 = (longlong *)
                       ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
             plVar6 != (longlong *)0x0)) &&
            (((*(uint *)(plVar6 + 2) == uVar3 && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) &&
             (*plVar6 != 0)))) {
      FUN_1400796d0(*(undefined8 *)(*plVar6 + 0x10),lVar7);
    }
  }
  local_78 = (ulonglong)uVar12 | uVar11 << 0x20;
  uStack_70 = (longlong *)lVar7;
  FUN_1403350f6(plVar5);
  iVar2 = *(int *)(param_1 + 0xf28);
  if (0 < iVar2) {
    lVar7 = 0;
    bVar13 = false;
    do {
      while( true ) {
        lVar10 = *plVar5;
        _Dst = (uint *)(lVar10 + lVar7 * 0x10);
        if (((*(longlong *)(lVar10 + 8 + lVar7 * 0x10) != 0) && (_Dst[1] != 0)) &&
           ((uVar12 = *_Dst, -1 < (int)uVar12 &&
            (((((int)uVar12 < DAT_14c9647dc &&
               (plVar6 = (longlong *)
                         ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
               plVar6 != (longlong *)0x0)) && (*(uint *)(plVar6 + 2) == _Dst[1])) &&
             (((*(uint *)(plVar6 + 1) >> 0x1c & 1) == 0 && (*plVar6 != 0)))))))) break;
        iVar9 = ~(uint)lVar7 + iVar2;
        if (iVar9 != 0) {
          if (0 < iVar9) {
            iVar9 = 1;
          }
          memmove(_Dst,(void *)(lVar10 + (longlong)(iVar2 - iVar9) * 0x10),(longlong)iVar9 << 4);
          iVar2 = *(int *)(param_1 + 0xf28);
        }
        iVar2 = iVar2 + -1;
        *(int *)(param_1 + 0xf28) = iVar2;
        bVar13 = true;
        if (iVar2 <= lVar7) goto LAB_14085b44f;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar2);
    if (bVar13) {
LAB_14085b44f:
      FUN_1400bbcfc(plVar5);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14085b570 FUN_14085b570 body=228 status=ok
// SIG undefined FUN_14085b570(void)

longlong FUN_14085b570(void)

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
  if (DAT_14cb59f78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148662963;
    local_40 = FUN_1464c78b6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxAnimOptimizationInterface",&DAT_14cb59f78,&DAT_148662962);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb59f78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14085b656 FUN_14085b656 body=493 status=ok
// SIG undefined FUN_14085b656(void)

void FUN_14085b656(longlong param_1,char param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(char *)(param_1 + 0x1178) != param_2) &&
      (*(char *)(param_1 + 0x1178) = param_2, DAT_14cb71bf8 == '\x01')) &&
     ((lVar5 = *(longlong *)(param_1 + 0xb0), lVar5 != 0 ||
      (lVar5 = FUN_1448abda6(param_1), lVar5 != 0)))) {
    uVar2 = DAT_14cb71f80;
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_48,uVar2,lVar5);
    plVar6 = local_40;
    if ((local_48 == 0) || (local_40 == (longlong *)0x0)) {
      plVar6 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_40 + 0xc) = *(int *)((longlong)local_40 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar7 = local_40 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_40 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    if (plVar6 != (longlong *)0x0) {
      iVar4 = (int)plVar6[1];
      do {
        plVar7 = (longlong *)0x0;
        if (iVar4 == 0) break;
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = plVar6;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      if (plVar7 != (longlong *)0x0) {
        if (local_48 != 0) {
          if (param_2 == '\0') {
            FUN_1406c4404(local_48,param_1);
          }
          else {
            FUN_1406c4164();
          }
        }
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
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14085b844 FUN_14085b844 body=1728 status=ok
// SIG undefined FUN_14085b844(void)

void FUN_14085b844(longlong *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  code *pcVar14;
  code *pcVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  code *local_80;
  ulonglong local_78;
  longlong local_70;
  int local_68;
  longlong *local_60;
  code *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1406c97fc();
  FUN_14348c840(param_1);
  FUN_1406c4074(param_1);
  if ((*(byte *)(param_1 + 0x18e) & 0x20) == 0) {
    FUN_1407ec9d0(param_1);
  }
  else {
    (**(code **)(*param_1 + 0xc68))(param_1,1);
  }
  if ((*(byte *)(param_1 + 0x114) & 0x20) != 0) goto LAB_14085b8ff;
  if (*(char *)((longlong)param_1 + 0x89c) == '\x04') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    if (DAT_14c872bf0 == '\x01') {
      if ((DAT_14c872bf1 != '\x01') || ((DAT_14c8442b8 & 1) != 0)) {
LAB_14085b8ff:
        (**(code **)(*param_1 + 0x3b0))(param_1,0);
      }
    }
    else if (DAT_14c8442b8 == 1) goto LAB_14085b8ff;
  }
  lVar9 = param_1[0x199];
  if ((((lVar9 == 0) || (lVar8 = FUN_14010780e(), lVar8 == 0)) ||
      (*(int *)(lVar9 + 0x38) < *(int *)(lVar8 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
       lVar8 + 0x30 || (pcVar14 = (code *)param_1[0x199], pcVar14 == (code *)0x0)))) {
    FUN_14099d156(&local_58);
    pcVar14 = local_58;
    if (DAT_14c950c29 == 1) {
      if (local_58 == (code *)0x0) {
        pcVar14 = (code *)0x0;
      }
      else {
        FUN_1456cec3c(local_58);
        pcVar14 = local_58;
      }
    }
    param_1[0x199] = (longlong)pcVar14;
  }
  if (param_1[0xcb] == 0) {
    if ((DAT_14c950c29 & param_1[0xcc] != 0) != 0) goto LAB_14085bede;
    if (param_1[0xcc] == 0) goto LAB_14085b99e;
  }
  else if (DAT_14c950c29 == 1) {
LAB_14085bede:
    FUN_1456cec3c();
  }
  if (DAT_14cb06da8 == 0) {
    local_a0 = &local_58;
    local_58 = FUN_1449e2820;
    local_90 = FUN_14081d0ea;
    local_98 = &LAB_1464003b0;
    local_a8 = &LAB_147d17bdf;
    local_b0 = &LAB_1417edf22;
    local_b8 = L"Engine";
    local_c0 = 0;
    local_c8 = 0x10000000;
    local_d0 = 8;
    local_d8 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  pcVar14 = (code *)param_1[0x199];
LAB_14085b99e:
  if (((pcVar14 != (code *)0x0) && (lVar9 = FUN_14010780e(), lVar9 != 0)) &&
     ((*(int *)(lVar9 + 0x38) <= *(int *)(pcVar14 + 0x38) &&
      ((*(longlong *)(*(longlong *)(pcVar14 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
        lVar9 + 0x30 && (lVar9 = param_1[0x199], lVar9 != 0)))))) {
    lVar8 = FUN_14010780e();
    if ((lVar8 == 0) ||
       ((*(int *)(lVar9 + 0x38) < *(int *)(lVar8 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
         lVar8 + 0x30)))) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)param_1[0x199];
    }
    plVar11 = (longlong *)plVar10[0x22];
    if (plVar11 == (longlong *)0x0) {
      (**(code **)(*plVar10 + 1000))(plVar10);
      plVar11 = (longlong *)plVar10[0x22];
    }
    (**(code **)(*param_1 + 0xd08))(param_1,&local_58);
    pcVar14 = local_58;
    lVar9 = (longlong)(int)uStack_50;
    if (lVar9 == 0) {
      bVar2 = true;
    }
    else {
      lVar8 = 0;
      do {
        if ((*(longlong *)(pcVar14 + lVar8) != 0) &&
           (cVar4 = (**(code **)(*plVar11 + 0x2b0))(plVar11), cVar4 == '\0')) {
          bVar2 = false;
          goto LAB_14085bad4;
        }
        lVar8 = lVar8 + 8;
      } while (lVar9 * 8 != lVar8);
      bVar2 = true;
    }
LAB_14085bad4:
    if (local_58 != (code *)0x0) {
      FUN_1400020a8(local_58);
    }
    if (!bVar2) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1))
      {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
      uVar3 = DAT_14c99d400;
      local_58 = (code *)0x0;
      uStack_50 = 0;
      iVar6 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,DAT_14c99d400);
      if (0 < iVar6) {
        iVar12 = 0;
        do {
          lVar8 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,uVar3,iVar12);
          uVar16 = uStack_50;
          lVar9 = lVar8 + -8;
          if (lVar8 == 0) {
            lVar9 = 0;
          }
          lVar8 = (longlong)(int)uStack_50;
          uVar7 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar7);
          if (uStack_50._4_4_ < uVar7) {
            FUN_14099d612(&local_58,uVar16 & 0xffffffff);
          }
          *(longlong *)(local_58 + lVar8 * 8) = lVar9;
          iVar12 = iVar12 + 1;
        } while (iVar6 != iVar12);
      }
      if ((longlong)(int)uStack_50 != 0) {
        pcVar14 = local_58 + (longlong)(int)uStack_50 * 8;
        uVar16 = 0;
        pcVar15 = local_58;
        local_80 = pcVar14;
        do {
          puVar1 = *(undefined8 **)pcVar15;
          if ((((puVar1 != (undefined8 *)0x0) &&
               ((**(code **)*puVar1)(puVar1,&local_60), plVar10 = local_60,
               local_60 != (longlong *)0x0)) &&
              (lVar9 = FUN_14010780e(), plVar11 = local_60, lVar9 != 0)) &&
             ((*(int *)(lVar9 + 0x38) <= (int)plVar10[7] &&
              (local_60 != (longlong *)0x0 &&
               *(longlong *)(plVar10[6] + (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30))))
          {
            lVar9 = FUN_14010780e();
            if ((lVar9 == 0) ||
               (((int)plVar11[7] < *(int *)(lVar9 + 0x38) ||
                (plVar10 = local_60,
                *(longlong *)(plVar11[6] + (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30))))
            {
              plVar10 = (longlong *)0x0;
            }
            plVar11 = (longlong *)plVar10[0x22];
            local_78 = uVar16;
            if (plVar11 == (longlong *)0x0) {
              (**(code **)(*plVar10 + 1000))(plVar10);
              plVar11 = (longlong *)plVar10[0x22];
            }
            (**(code **)(*param_1 + 0xd08))(param_1,&local_70);
            lVar9 = local_70;
            lVar8 = (longlong)local_68;
            if (lVar8 == 0) {
              iVar6 = 0;
              uVar13 = 0;
            }
            else {
              lVar17 = 0;
              uVar13 = 0;
              iVar6 = 0;
              do {
                if (*(longlong *)(lVar9 + lVar17) != 0) {
                  bVar5 = (**(code **)(*plVar11 + 0x2b0))(plVar11);
                  uVar13 = (ulonglong)((int)uVar13 + (uint)bVar5);
                  iVar6 = iVar6 + 1;
                }
                lVar17 = lVar17 + 8;
                pcVar14 = local_80;
              } while (lVar8 * 8 != lVar17);
            }
            uVar16 = local_78;
            if (local_70 != 0) {
              FUN_1400020a8(local_70);
            }
            if ((int)uVar16 < (int)uVar13) {
              plVar10 = local_60;
              if (DAT_14c950c29 == 1) {
                if (local_60 == (longlong *)0x0) {
                  plVar10 = (longlong *)0x0;
                }
                else {
                  FUN_1456cec3c();
                  plVar10 = local_60;
                }
              }
              param_1[0x199] = (longlong)plVar10;
              uVar16 = uVar13;
              if ((int)uVar13 == iVar6) break;
            }
          }
          pcVar15 = pcVar15 + 8;
        } while (pcVar15 != pcVar14);
      }
      if (local_58 != (code *)0x0) {
        FUN_1400020a8(local_58);
      }
    }
  }
  FUN_1401ff858(param_1);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14085bf06 FUN_14085bf06 body=306 status=ok
// SIG undefined FUN_14085bf06(void)

undefined4 * FUN_14085bf06(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14085c0b4(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_14085c03a(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar7 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140576b56(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14085c03a FUN_14085c03a body=122 status=ok
// SIG undefined FUN_14085c03a(void)

undefined8 FUN_14085c03a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_147bf1216((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14085c0b4 FUN_14085c0b4 body=485 status=ok
// SIG undefined FUN_14085c0b4(void)

int * FUN_14085c0b4(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14085c29a FUN_14085c29a body=105 status=ok
// SIG undefined FUN_14085c29a(void)

void FUN_14085c29a(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  if ((param_2 != 0) && (*(char *)(param_2 + 0x220) == '\0')) {
    FUN_14085c304(param_1,param_2,param_3,param_4,param_1 + 0x100,1);
    FUN_14085c304(param_1,param_2,param_3,param_4,param_1 + 0x110,0);
  }
  return;
}



// FUNCTION 14085c304 FUN_14085c304 body=7375 status=ok
// SIG undefined FUN_14085c304(void)

void FUN_14085c304(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong *param_5,byte param_6)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  byte bVar11;
  byte bVar12;
  longlong lVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  int *piVar24;
  double *pdVar25;
  longlong *plVar26;
  int iVar27;
  int iVar28;
  longlong *plVar29;
  uint uVar30;
  longlong lVar31;
  int iVar32;
  ulonglong uVar33;
  uint *puVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  byte bVar40;
  longlong lVar41;
  longlong lVar42;
  undefined1 auStack_2b8 [32];
  undefined4 *local_298;
  undefined4 *local_290;
  undefined4 *local_288;
  undefined4 *local_280;
  longlong local_270;
  ulonglong local_268;
  longlong *local_260;
  longlong *local_258;
  longlong local_250;
  ulonglong local_248;
  longlong *local_240;
  uint *local_238;
  longlong *local_230;
  longlong local_228;
  longlong *local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  longlong local_1e8;
  undefined8 uStack_1e0;
  longlong *local_1d8;
  undefined4 local_1cc;
  longlong *local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  longlong *local_1b8;
  int local_1b0;
  longlong local_1ac [2];
  undefined1 local_198 [64];
  longlong local_158;
  undefined4 local_150;
  undefined8 *local_148;
  uint *local_118;
  undefined8 uStack_110;
  double local_108 [2];
  double *local_f8;
  int local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  uVar37 = (ulonglong)*(uint *)(param_5 + 1);
  local_270 = param_2;
  local_250 = param_3;
  if (param_2 != 0 && uVar37 != 0) {
    local_1e8 = 0;
    uStack_1e0 = 0;
    if ((int)*(uint *)(param_5 + 1) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar37);
    }
    FUN_14481578e(&local_1e8,uVar37);
    local_1ec = 3;
    local_1f0 = 6;
    local_1f4 = 5;
    local_1f8 = 2;
    local_220 = (longlong *)(param_1 + 0x80);
    local_230 = param_4 + 7;
    local_238 = (uint *)(param_1 + 0xa0);
    local_258 = (longlong *)(param_1 + 0xc0);
    uVar33 = 0;
    local_248 = uVar37;
    local_240 = param_4;
    do {
      lVar36 = *param_5 + uVar33 * 200;
      iVar19 = (**(code **)(**(longlong **)(*param_5 + 8 + uVar33 * 200) + 8))();
      if (iVar19 == 2) {
        uVar21 = *(uint *)(lVar36 + 0x58);
        if (uVar21 < 0x11) {
          uVar30 = 0x18002;
          goto LAB_14085c4d4;
        }
      }
      else {
        iVar19 = (**(code **)(**(longlong **)(lVar36 + 8) + 8))();
        if (iVar19 == 3) {
          uVar21 = *(uint *)(lVar36 + 0x58);
          if (uVar21 < 0xb) {
            uVar30 = 0x718;
LAB_14085c4d4:
            if ((uVar30 >> (uVar21 & 0x1f) & 1) != 0) {
              local_280 = &local_1f8;
              local_288 = &local_1f4;
              local_298 = &local_1ec;
              local_290 = &local_1f0;
              cVar18 = FUN_142a2966c(param_1,local_270,lVar36,param_1);
              if (cVar18 != '\0') {
                FUN_1407225a4(&local_1b8,param_1,lVar36 + 0x78,
                              *(double *)(local_270 + 0x1f8) - (double)*(float *)(lVar36 + 0x18));
                iVar19 = (**(code **)(**(longlong **)(lVar36 + 8) + 8))();
                plVar26 = local_258;
                local_268 = uVar33;
                if (iVar19 == 2) {
                  uVar21 = *(uint *)(param_1 + 8);
                  uVar37 = (ulonglong)uVar21;
                  iVar19 = *(int *)(param_1 + 200);
                  if (iVar19 < (int)uVar21) {
                    *(uint *)(param_1 + 200) = uVar21;
                    if ((uint)(*(int *)(param_1 + 0xcc) - iVar19) < uVar21 - iVar19) {
                      FUN_1446f48e2(local_258);
                    }
                    memset((void *)((longlong)iVar19 * 4 + *plVar26),0,
                           (longlong)(int)(uVar21 - iVar19) << 2);
                  }
                  else {
                    if ((int)uVar21 < 0) {
LAB_14085dfcc:
                    /* WARNING: Subroutine does not return */
                      FUN_1456afac4(uVar37);
                    }
                    if ((int)uVar21 < iVar19) {
                      *(uint *)(param_1 + 200) = uVar21;
                    }
                  }
                  uVar33 = local_268;
                  if (0 < (int)uVar21) {
                    uVar22 = 0;
                    do {
                      *(undefined4 *)(*plVar26 + uVar22 * 4) = 0;
                      uVar22 = uVar22 + 1;
                    } while (uVar37 != uVar22);
                  }
                  local_1bc = *(undefined4 *)(param_1 + 200);
                  local_1c8 = plVar26;
                  local_1c0 = 0;
                  iVar19 = *(int *)(lVar36 + 0x58);
                  param_4 = local_240;
                  uVar37 = local_248;
                  if (iVar19 < 0xf) {
                    if (iVar19 == 1) {
                      if (*(char *)(local_148 + 1) == '\0') {
                        lVar42 = (longlong)local_1b0;
                        plVar23 = local_1ac;
                        plVar29 = local_1b8;
                      }
                      else {
                        plVar23 = (longlong *)local_148[2] + 1;
                        lVar42 = 0;
                        plVar29 = (longlong *)local_148[2];
                      }
                      if ((longlong)(int)*plVar23 != 0) {
                        piVar24 = (int *)(lVar42 * 8 + *plVar29);
                        piVar4 = piVar24 + (longlong)(int)*plVar23 * 2;
                        do {
                          plVar23 = *(longlong **)
                                     (*(longlong *)(param_1 + 0x30) + (longlong)*piVar24 * 8);
                          bVar40 = *(byte *)((longlong)plVar23 + 0xc);
                          if ((bVar40 < 2 || plVar23 == (longlong *)0x0) ||
                             (*(char *)(*(longlong *)(*plVar23 + 0x2c0) + 0xb +
                                       (longlong)(int)plVar23[1] * 0x10) != '\0')) {
                            if (bVar40 < 2 || plVar23 == (longlong *)0x0) {
                              bVar40 = (plVar23 == (longlong *)0x0 || bVar40 == 0) | 2;
                            }
                            else {
                              bVar40 = *(byte *)(*(longlong *)(*plVar23 + 0x2c0) + 0xb +
                                                (longlong)(int)plVar23[1] * 0x10);
                            }
                          }
                          else {
                            bVar40 = 4;
                          }
                          *(int *)(*plVar26 + (longlong)piVar24[1] * 4) = (int)(char)bVar40;
                          piVar24 = piVar24 + 2;
                        } while (piVar24 != piVar4);
                      }
                      (**(code **)(**(longlong **)(lVar36 + 8) + 0x50))
                                (*(longlong **)(lVar36 + 8),&local_1b8,&local_1c8);
                      if (*(char *)(local_148 + 1) == '\0') {
                        plVar26 = local_1ac;
                        plVar23 = local_1b8;
                        iVar19 = local_1b0;
                      }
                      else {
                        plVar26 = (longlong *)local_148[2] + 1;
                        plVar23 = (longlong *)local_148[2];
                        iVar19 = 0;
                      }
                      lVar36 = (longlong)(int)*plVar26;
                      param_4 = local_240;
                      uVar37 = local_248;
                      if (lVar36 != 0) {
                        lVar42 = *plVar23 + (longlong)iVar19 * 8;
                        lVar38 = 0;
                        bVar40 = 0;
                        local_260 = plVar23;
                        local_228 = lVar36;
                        do {
                          uVar37 = local_268;
                          plVar26 = *(longlong **)
                                     (*(longlong *)(param_1 + 0x30) +
                                     (longlong)*(int *)(lVar42 + lVar38) * 8);
                          if ((plVar26 != (longlong *)0x0) &&
                             (1 < *(byte *)((longlong)plVar26 + 0xc))) {
                            bVar11 = *(byte *)(*local_1c8 +
                                              ((longlong)local_1c0 +
                                              (longlong)*(int *)(lVar42 + 4 + lVar38)) * 4);
                            iVar20 = (int)plVar26[1];
                            bVar12 = *(byte *)(*(longlong *)(*plVar26 + 0x2c0) + 0xb +
                                              (longlong)iVar20 * 0x10);
                            if (bVar11 == 4) {
                              bVar14 = 0;
                              uVar33 = uVar37;
                              if ((1.1920928955078125e-07 <
                                   *(double *)
                                    (*(longlong *)(*plVar26 + 0x3b0) + (longlong)iVar20 * 8)) &&
                                 (bVar12 != 4)) {
                                FUN_142a2cc01(local_270,CONCAT71((int7)(int3)((uint)iVar20 >> 8),4),
                                              plVar26);
                                bVar14 = 1;
                              }
                            }
                            else if (bVar12 == bVar11) {
                              bVar14 = 0;
                              uVar33 = uVar37;
                            }
                            else {
                              FUN_142a2cc01(local_270,
                                            CONCAT71((int7)(uVar33 >> 8),bVar11) & 0xffffffff);
                              bVar14 = 1;
                              uVar33 = local_268;
                              if ((bVar11 & 0xfe) == 2) {
                                lVar41 = plVar26[1];
                                lVar31 = *(longlong *)(*plVar26 + 0x278);
                                *(undefined8 *)(lVar31 + (longlong)(int)lVar41 * 0xc) = 0;
                                *(undefined4 *)(lVar31 + 8 + (longlong)(int)lVar41 * 0xc) = 0;
                                lVar41 = plVar26[1];
                                lVar31 = *(longlong *)(*plVar26 + 0x290);
                                *(undefined8 *)(lVar31 + (longlong)(int)lVar41 * 0xc) = 0;
                                *(undefined4 *)(lVar31 + 8 + (longlong)(int)lVar41 * 0xc) = 0;
                              }
                            }
                            bVar40 = bVar40 | bVar14;
                          }
                          lVar38 = lVar38 + 8;
                        } while (lVar36 * 8 - lVar38 != 0);
                        param_4 = local_240;
                        uVar37 = local_248;
                        if ((bool)(0 < (int)local_228 & bVar40)) {
                          local_f8 = (double *)0x0;
                          local_f0 = 0;
                          local_118 = (uint *)0x0;
                          uStack_110 = (undefined4 *)0x0;
                          local_ec = 0xffffffff00000080;
                          local_e4 = 0;
                          local_d8 = 0;
                          local_d0 = 0;
                          piVar24 = (int *)((longlong)iVar19 * 8 + *local_260);
                          piVar4 = piVar24 + local_228 * 2;
                          do {
                            plVar26 = *(longlong **)
                                       (*(longlong *)(param_1 + 0x30) + (longlong)*piVar24 * 8);
                            if ((plVar26 != (longlong *)0x0) &&
                               (2 < *(byte *)((longlong)plVar26 + 0xc))) {
                              do {
                                local_1d8 = plVar26;
                                plVar26 = *(longlong **)
                                           (*(longlong *)(*local_1d8 + 0x5a8) +
                                           (longlong)(int)local_1d8[1] * 0x10);
                                if (plVar26 == (longlong *)0x0) break;
                              } while (2 < *(byte *)((longlong)plVar26 + 0xc));
                              FUN_140a3609c(&local_118,&local_1cc,&local_1d8,0);
                            }
                            iVar19 = local_f0;
                            piVar24 = piVar24 + 2;
                          } while (piVar24 != piVar4);
                          local_260 = *(longlong **)(local_270 + 0x9c8);
                          if (local_f0 == 0) {
                            uVar33 = 1;
                            uVar37 = 0;
                            iVar32 = 0;
                            iVar20 = 0;
                          }
                          else {
                            pdVar25 = local_f8;
                            if (local_f8 == (double *)0x0) {
                              pdVar25 = local_108;
                            }
                            uVar21 = *(uint *)pdVar25;
                            if (uVar21 == 0) {
                              iVar20 = local_f0 + 0x1e;
                              if (-1 < local_f0 + -1) {
                                iVar20 = local_f0 + -1;
                              }
                              uVar37 = 0;
                              uVar33 = (ulonglong)(uint)(iVar20 >> 5);
                              if (iVar20 >> 5 < 1) {
                                uVar33 = uVar37;
                              }
                              iVar32 = 0;
                              do {
                                if (uVar33 == uVar37) goto LAB_14085dc9a;
                                iVar32 = iVar32 + 0x20;
                                uVar21 = *(uint *)((longlong)pdVar25 + (uVar37 + 1) * 4);
                                uVar37 = uVar37 + 1;
                              } while (uVar21 == 0);
                            }
                            else {
                              uVar37 = 0;
                              iVar32 = 0;
                            }
                            uVar33 = (ulonglong)(-uVar21 & uVar21);
                            uVar22 = uVar33 * 2 + 1;
                            lVar36 = 0x3f;
                            if (uVar22 != 0) {
                              for (; uVar22 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                              }
                            }
                            iVar20 = (iVar32 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
                            if (local_f0 <= iVar20) {
                              iVar20 = local_f0;
                            }
                          }
                          if (iVar20 != local_f0) {
                            local_260 = local_260 + 0xa2;
                            uVar21 = 0xffffffff;
                            do {
                              plVar26 = *(longlong **)(local_118 + (longlong)iVar20 * 4);
                              if (plVar26 != (longlong *)0x0) {
                                lVar36 = *plVar26;
                                lVar42 = (longlong)(int)plVar26[1] * 0x10;
                                if (*(char *)(*(longlong *)(lVar36 + 0x2c0) + 0xd + lVar42) == '\0')
                                {
                                  if (*(int *)(*(longlong *)(lVar36 + 0x5a8) + 8 + lVar42) == 0) {
                                    if ((*(char *)(*(longlong *)(lVar36 + 0x2c0) + 0xb + lVar42) ==
                                         '\x04') && (*(char *)((longlong)plVar26 + 0xc) == '\x01'))
                                    {
                                      lVar36 = *(longlong *)(lVar36 + 0x2a8);
                                      lVar42 = (longlong)(int)plVar26[1] * 0x40;
                                      *(undefined8 *)(lVar36 + lVar42) = 0;
                                      ((undefined8 *)(lVar36 + lVar42))[1] = 0;
                                      *(undefined8 *)(lVar36 + 0x10 + lVar42) = 0;
                                      puVar5 = (undefined8 *)(lVar36 + 0x20 + lVar42);
                                      *puVar5 = 0;
                                      puVar5[1] = 0x3f80000000000000;
                                      *(undefined4 *)(lVar36 + 0x30 + lVar42) = 0;
                                    }
                                  }
                                  else {
                                    FUN_140a357a8(plVar26,local_260,
                                                  *(undefined8 *)(local_270 + 0x9c8));
                                  }
                                }
                              }
                              uVar21 = uVar21 & ~(uint)uVar33;
                              pdVar25 = local_f8;
                              if (local_f8 == (double *)0x0) {
                                pdVar25 = local_108;
                              }
                              iVar20 = (int)uVar37;
                              lVar36 = (longlong)iVar20;
                              uVar30 = *(uint *)((longlong)pdVar25 + lVar36 * 4) & uVar21;
                              if (uVar30 == 0) {
                                iVar27 = local_f0 + 0x1e;
                                if (-1 < local_f0 + -1) {
                                  iVar27 = local_f0 + -1;
                                }
                                iVar27 = iVar27 >> 5;
                                iVar32 = iVar32 + 0x20;
                                iVar28 = iVar27;
                                if (iVar27 < iVar20) {
                                  iVar28 = iVar20;
                                }
                                if (iVar20 < iVar27) {
                                  lVar42 = 0;
                                  do {
                                    uVar30 = *(uint *)((longlong)pdVar25 + (lVar36 + lVar42 + 1) * 4
                                                      );
                                    if (uVar30 != 0) {
                                      uVar37 = (ulonglong)(iVar20 + (int)lVar42 + 1);
                                      uVar21 = 0xffffffff;
                                      goto LAB_14085de62;
                                    }
                                    iVar32 = iVar32 + 0x20;
                                    lVar42 = lVar42 + 1;
                                  } while (iVar28 - lVar36 != lVar42);
                                  uVar21 = 0xffffffff;
                                  iVar20 = iVar28;
                                }
                                uVar37 = (ulonglong)(iVar20 + 1);
                                iVar20 = local_f0;
                              }
                              else {
LAB_14085de62:
                                uVar33 = (ulonglong)(-uVar30 & uVar30);
                                uVar22 = uVar33 * 2 + 1;
                                lVar36 = 0x3f;
                                if (uVar22 != 0) {
                                  for (; uVar22 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                                  }
                                }
                                iVar20 = (iVar32 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
                                if (local_f0 <= iVar20) {
                                  iVar20 = local_f0;
                                }
                              }
                            } while (iVar20 != iVar19);
                          }
LAB_14085dc9a:
                          local_d0 = 0;
                          if (local_d8 != 0) {
                            FUN_1400020a8();
                          }
                          FUN_140d9ce6e(&local_118);
                          param_4 = local_240;
                          uVar33 = local_268;
                          uVar37 = local_248;
                        }
                      }
                    }
                    else if (iVar19 == 0xb) {
                      (**(code **)(**(longlong **)(lVar36 + 8) + 0x50))
                                (*(longlong **)(lVar36 + 8),&local_1b8,&local_1c8);
                      if (*(char *)(local_148 + 1) == '\0') {
                        lVar36 = (longlong)local_1b0;
                        plVar26 = local_1ac;
                        plVar23 = local_1b8;
                      }
                      else {
                        plVar26 = (longlong *)local_148[2] + 1;
                        lVar36 = 0;
                        plVar23 = (longlong *)local_148[2];
                      }
                      param_4 = local_240;
                      uVar37 = local_248;
                      if ((longlong)(int)*plVar26 != 0) {
                        puVar34 = (uint *)(lVar36 * 8 + *plVar23);
                        puVar1 = puVar34 + (longlong)(int)*plVar26 * 2;
LAB_14085c92e:
                        plVar23 = local_240;
                        uVar21 = *puVar34;
                        plVar26 = *(longlong **)
                                   (*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar21 * 8);
                        if (((plVar26 != (longlong *)0x0) &&
                            (2 < *(byte *)((longlong)plVar26 + 0xc))) &&
                           (*(int *)(*local_1c8 +
                                    ((longlong)local_1c0 + (longlong)(int)puVar34[1]) * 4) != 0)) {
                          if ((int)local_240[1] != *(int *)((longlong)local_240 + 0x34)) {
                            plVar29 = (longlong *)local_240[8];
                            if ((longlong *)local_240[8] == (longlong *)0x0) {
                              plVar29 = local_230;
                            }
                            iVar19 = *(int *)((longlong)plVar29 +
                                             (ulonglong)((int)local_240[9] - 1U & uVar21) * 4);
                            if (iVar19 != -1) {
                              lVar36 = *local_240;
                              iVar20 = iVar19;
                              do {
                                if (*(uint *)(lVar36 + (longlong)iVar20 * 0x10) == uVar21)
                                goto LAB_14085ca1e;
                                iVar20 = *(int *)((longlong)iVar20 * 0x10 + lVar36 + 8);
                              } while (iVar20 != -1);
                            }
                          }
                          local_1cc = *(undefined4 *)(local_250 + 0x38);
                          FUN_146eece88(local_250,plVar26,
                                        (longlong)(int)plVar26[1] * 0x18 +
                                        *(longlong *)(*plVar26 + 0x28));
                          uStack_110 = &local_1cc;
                          local_118 = puVar34;
                          FUN_140263e2a(plVar23,&local_1d8,&local_118,0);
                        }
                        goto LAB_14085ca6f;
                      }
                    }
                  }
                  else if (iVar19 == 0xf) {
                    (**(code **)(**(longlong **)(lVar36 + 8) + 0x50))
                              (*(longlong **)(lVar36 + 8),&local_1b8,&local_1c8);
                    if (*(char *)(local_148 + 1) == '\0') {
                      lVar36 = (longlong)local_1b0;
                      plVar26 = local_1ac;
                      plVar23 = local_1b8;
                    }
                    else {
                      plVar26 = (longlong *)local_148[2] + 1;
                      lVar36 = 0;
                      plVar23 = (longlong *)local_148[2];
                    }
                    lVar42 = *plVar26;
                    param_4 = local_240;
                    uVar37 = local_248;
                    if ((longlong)(int)lVar42 != 0) {
                      lVar36 = *plVar23 + lVar36 * 8;
                      lVar38 = 0;
                      do {
                        plVar26 = *(longlong **)
                                   (*(longlong *)(param_1 + 0x30) +
                                   (longlong)*(int *)(lVar36 + lVar38) * 8);
                        if ((plVar26 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar26 + 0xc))
                           ) {
                          *(undefined4 *)
                           (*(longlong *)(*plVar26 + 0x2c0) + (longlong)(int)plVar26[1] * 0x10) =
                               *(undefined4 *)
                                (*local_1c8 +
                                ((longlong)local_1c0 + (longlong)*(int *)(lVar36 + 4 + lVar38)) * 4)
                          ;
                        }
                        lVar38 = lVar38 + 8;
                      } while ((longlong)(int)lVar42 * 8 != lVar38);
                    }
                  }
                  else if (iVar19 == 0x10) {
                    if (*(char *)(local_148 + 1) == '\0') {
                      lVar42 = (longlong)local_1b0;
                      plVar26 = local_1ac;
                      plVar23 = local_1b8;
                    }
                    else {
                      plVar26 = (longlong *)local_148[2] + 1;
                      lVar42 = 0;
                      plVar23 = (longlong *)local_148[2];
                    }
                    lVar38 = *plVar26;
                    if ((longlong)(int)lVar38 != 0) {
                      lVar42 = *plVar23 + lVar42 * 8;
                      lVar31 = 0;
                      do {
                        plVar26 = *(longlong **)
                                   (*(longlong *)(param_1 + 0x30) +
                                   (longlong)*(int *)(lVar42 + lVar31) * 8);
                        if ((plVar26 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar26 + 0xc))
                           ) {
                          *(uint *)(*local_258 + (longlong)*(int *)(lVar42 + 4 + lVar31) * 4) =
                               (uint)*(byte *)(*(longlong *)(*plVar26 + 0x2c0) + 0xd +
                                              (longlong)(int)plVar26[1] * 0x10);
                        }
                        lVar31 = lVar31 + 8;
                      } while ((longlong)(int)lVar38 * 8 != lVar31);
                    }
                    (**(code **)(**(longlong **)(lVar36 + 8) + 0x50))
                              (*(longlong **)(lVar36 + 8),&local_1b8,&local_1c8);
                    if (*(char *)(local_148 + 1) == '\0') {
                      lVar36 = (longlong)local_1b0;
                      plVar26 = local_1ac;
                      plVar23 = local_1b8;
                    }
                    else {
                      plVar26 = (longlong *)local_148[2] + 1;
                      lVar36 = 0;
                      plVar23 = (longlong *)local_148[2];
                    }
                    lVar42 = *plVar26;
                    param_4 = local_240;
                    uVar37 = local_248;
                    if ((longlong)(int)lVar42 != 0) {
                      lVar36 = *plVar23 + lVar36 * 8;
                      lVar38 = 0;
                      do {
                        lVar31 = local_270;
                        plVar26 = *(longlong **)
                                   (*(longlong *)(param_1 + 0x30) +
                                   (longlong)*(int *)(lVar36 + lVar38) * 8);
                        if ((((plVar26 != (longlong *)0x0) &&
                             (1 < *(byte *)((longlong)plVar26 + 0xc))) &&
                            (*(char *)(*(longlong *)(*plVar26 + 0x2c0) + 0xd +
                                      (longlong)(int)plVar26[1] * 0x10) == '\x01')) &&
                           (*(int *)(*local_1c8 +
                                    ((longlong)local_1c0 + (longlong)*(int *)(lVar36 + 4 + lVar38))
                                    * 4) == 0)) {
                          FUN_140a36458(*(undefined8 *)(local_270 + 0x9c8),plVar26);
                          FUN_142a2cc01(lVar31,4,plVar26);
                        }
                        lVar38 = lVar38 + 8;
                        param_4 = local_240;
                        uVar37 = local_248;
                      } while ((longlong)(int)lVar42 * 8 != lVar38);
                    }
                  }
                }
                else {
                  iVar19 = (**(code **)(**(longlong **)(lVar36 + 8) + 8))();
                  puVar1 = local_238;
                  if (iVar19 == 3) {
                    uVar21 = *(uint *)(param_1 + 8);
                    uVar37 = (ulonglong)uVar21;
                    iVar19 = *(int *)(param_1 + 0xa8);
                    if (iVar19 < (int)uVar21) {
                      *(uint *)(param_1 + 0xa8) = uVar21;
                      if ((uint)(*(int *)(param_1 + 0xac) - iVar19) < uVar21 - iVar19) {
                        FUN_14475e4ac(local_238);
                      }
                      memset((void *)((longlong)iVar19 * 4 + *(longlong *)puVar1),0,
                             (longlong)(int)(uVar21 - iVar19) << 2);
                    }
                    else {
                      if ((int)uVar21 < 0) goto LAB_14085dfcc;
                      if ((int)uVar21 < iVar19) {
                        *(uint *)(param_1 + 0xa8) = uVar21;
                      }
                    }
                    if (0 < (int)uVar21) {
                      uVar33 = 0;
                      do {
                        *(undefined4 *)(*(longlong *)puVar1 + uVar33 * 4) = 0;
                        uVar33 = uVar33 + 1;
                      } while (uVar37 != uVar33);
                    }
                    local_118 = puVar1;
                    uStack_110 = (undefined4 *)((ulonglong)*(uint *)(param_1 + 0xa8) << 0x20);
                    switch(*(undefined4 *)(lVar36 + 0x58)) {
                    case 3:
                      lVar42 = *(longlong *)(local_270 + 0x9c8);
                      (**(code **)(**(longlong **)(lVar36 + 8) + 0x50))
                                (*(longlong **)(lVar36 + 8),&local_1b8,&local_118);
                      if (*(char *)(local_148 + 1) == '\0') {
                        lVar36 = (longlong)local_1b0;
                        plVar26 = local_1ac;
                        plVar23 = local_1b8;
                      }
                      else {
                        plVar26 = (longlong *)local_148[2] + 1;
                        lVar36 = 0;
                        plVar23 = (longlong *)local_148[2];
                      }
                      lVar38 = *plVar26;
                      if ((longlong)(int)lVar38 != 0) {
                        lVar36 = *plVar23 + lVar36 * 8;
                        lVar31 = 0;
                        do {
                          fVar6 = *(float *)(*(longlong *)local_118 +
                                            ((longlong)(int)uStack_110 +
                                            (longlong)*(int *)(lVar36 + 4 + lVar31)) * 4);
                          if (((0.0 < fVar6) &&
                              (plVar26 = *(longlong **)
                                          (*(longlong *)(param_1 + 0x30) +
                                          (longlong)*(int *)(lVar36 + lVar31) * 8),
                              plVar26 != (longlong *)0x0)) &&
                             (2 < *(byte *)((longlong)plVar26 + 0xc))) {
                            fVar7 = *(float *)(*(longlong *)(*plVar26 + 0x638) +
                                              (longlong)(int)plVar26[1] * 4);
                            if (fVar7 <= fVar6) {
                              fVar7 = fVar6;
                            }
                            *(float *)(*(longlong *)(*plVar26 + 0x638) +
                                      (longlong)(int)plVar26[1] * 4) = fVar7;
                            FUN_1402bf4a4(lVar42 + 0x448);
                          }
                          lVar31 = lVar31 + 8;
                        } while ((longlong)(int)lVar38 * 8 != lVar31);
                      }
                      break;
                    case 4:
                      (**(code **)(**(longlong **)(lVar36 + 8) + 0x50))
                                (*(longlong **)(lVar36 + 8),&local_1b8,&local_118);
                      if (*(char *)(local_148 + 1) == '\0') {
                        lVar36 = (longlong)local_1b0;
                        plVar26 = local_1ac;
                        plVar23 = local_1b8;
                      }
                      else {
                        plVar26 = (longlong *)local_148[2] + 1;
                        lVar36 = 0;
                        plVar23 = (longlong *)local_148[2];
                      }
                      lVar42 = *plVar26;
                      if ((longlong)(int)lVar42 != 0) {
                        lVar36 = *plVar23 + lVar36 * 8;
                        lVar38 = 0;
                        do {
                          lVar31 = *(longlong *)
                                    (*(longlong *)(param_1 + 0x30) +
                                    (longlong)*(int *)(lVar36 + lVar38) * 8);
                          if (((lVar31 != 0) && (1 < *(byte *)(lVar31 + 0xc))) &&
                             (0.0 < *(float *)(*(longlong *)local_118 +
                                              ((longlong)(int)uStack_110 +
                                              (longlong)*(int *)(lVar36 + 4 + lVar38)) * 4))) {
                            FUN_14016e00e(*(undefined8 *)(local_270 + 0x9c8));
                          }
                          lVar38 = lVar38 + 8;
                        } while ((longlong)(int)lVar42 * 8 != lVar38);
                      }
                      break;
                    case 8:
                      lVar42 = *(longlong *)(local_270 + 0x9c8);
                      (**(code **)(**(longlong **)(lVar36 + 8) + 0x50))
                                (*(longlong **)(lVar36 + 8),&local_1b8,&local_118);
                      if (*(char *)(local_148 + 1) == '\0') {
                        lVar36 = (longlong)local_1b0;
                        plVar26 = local_1ac;
                        plVar23 = local_1b8;
                      }
                      else {
                        plVar26 = (longlong *)local_148[2] + 1;
                        lVar36 = 0;
                        plVar23 = (longlong *)local_148[2];
                      }
                      lVar38 = *plVar26;
                      if ((longlong)(int)lVar38 != 0) {
                        lVar36 = *plVar23 + lVar36 * 8;
                        lVar31 = 0;
                        do {
                          plVar26 = *(longlong **)
                                     (*(longlong *)(param_1 + 0x30) +
                                     (longlong)*(int *)(lVar36 + lVar31) * 8);
                          if ((plVar26 != (longlong *)0x0) &&
                             (2 < *(byte *)((longlong)plVar26 + 0xc))) {
                            lVar41 = (longlong)(int)plVar26[1];
                            if (*(char *)(*(longlong *)(*plVar26 + 0x2c0) + lVar41 * 0x10 + 0xb) ==
                                '\x04') {
                              lVar13 = *(longlong *)(*plVar26 + 0x650);
                              *(float *)(lVar13 + lVar41 * 4) =
                                   *(float *)(lVar13 + lVar41 * 4) +
                                   *(float *)(*(longlong *)local_118 +
                                             ((longlong)(int)uStack_110 +
                                             (longlong)*(int *)(lVar36 + 4 + lVar31)) * 4);
                              FUN_1402bf4a4(lVar42 + 0x448);
                            }
                          }
                          lVar31 = lVar31 + 8;
                        } while ((longlong)(int)lVar38 * 8 != lVar31);
                      }
                      break;
                    case 9:
                      (**(code **)(**(longlong **)(lVar36 + 8) + 0x50))
                                (*(longlong **)(lVar36 + 8),&local_1b8,&local_118);
                      if (*(char *)(local_148 + 1) == '\0') {
                        lVar36 = (longlong)local_1b0;
                        plVar26 = local_1ac;
                        plVar23 = local_1b8;
                      }
                      else {
                        plVar26 = (longlong *)local_148[2] + 1;
                        lVar36 = 0;
                        plVar23 = (longlong *)local_148[2];
                      }
                      lVar42 = *plVar26;
                      if ((longlong)(int)lVar42 != 0) {
                        lVar36 = *plVar23 + lVar36 * 8;
                        lVar38 = 0;
                        do {
                          plVar26 = *(longlong **)
                                     (*(longlong *)(param_1 + 0x30) +
                                     (longlong)*(int *)(lVar36 + lVar38) * 8);
                          if ((((plVar26 != (longlong *)0x0) &&
                               (1 < *(byte *)((longlong)plVar26 + 0xc))) &&
                              (*(char *)(*(longlong *)(*plVar26 + 0x2c0) + 0xb +
                                        (longlong)(int)plVar26[1] * 0x10) == '\x04')) &&
                             (0 < uStack_110._4_4_)) {
                            dVar8 = (double)*(float *)(*(longlong *)local_118 +
                                                      ((longlong)(int)uStack_110 +
                                                      (longlong)*(int *)(lVar36 + 4 + lVar38)) * 4);
                            lVar31 = *(longlong *)(local_270 + 0x9c8);
                            lVar35 = plVar26[2];
                            lVar41 = *(longlong *)(lVar31 + 0x2a0);
                            lVar13 = *(longlong *)(lVar41 + (longlong)(int)lVar35 * 8);
                            if (lVar13 == 0) {
                              local_1c8 = (longlong *)FUN_14001cc68(0x80,0x10);
                              *local_1c8 = 0x3fe0000000000000;
                              local_1c8[1] = 0;
                              local_1c8[2] = 0x3fb99999a0000000;
                              local_1c8[3] = 0x3ff0000000000000;
                              local_1c8[4] = 0;
                              local_1c8[5] = 0;
                              local_1c8[6] = 0x3ff0000000000000;
                              local_1c8[7] = 0x3ff0000000000000;
                              *(undefined4 *)(local_1c8 + 10) = 0;
                              local_1c8[0xb] = 0;
                              *(undefined8 *)((longlong)local_1c8 + 0x5e) = 0;
                              local_1c8[0xd] = 0x48435000469c4000;
                              local_1c8[0xe] = 0x3f800000476a6000;
                              *(undefined1 *)(local_1c8 + 0xf) = 0;
                              *(undefined4 *)((longlong)local_1c8 + 0x7c) = 0;
                              local_1c8[8] = (longlong)dVar8;
                              local_1c8[9] = (longlong)dVar8;
                              *(longlong **)
                               (*(longlong *)(lVar31 + 0x288) + (longlong)(int)plVar26[2] * 8) =
                                   local_1c8;
                              lVar41 = *(longlong *)
                                        (*(longlong *)(*plVar26 + 0x1e8) +
                                        (longlong)(int)plVar26[1] * 8);
                              if ((lVar41 != 0) && ((*(byte *)(lVar41 + 0x2c) & 1) != 0)) {
                                FUN_14082044e(lVar31 + 0x100);
                              }
                              FUN_146eed06a(*(undefined8 *)(local_270 + 0x9c8),plVar26,&local_1c8);
                              if (local_1c8 != (longlong *)0x0) {
                                FUN_1400020a8();
                              }
                            }
                            else if ((*(double *)(lVar13 + 0x40) != dVar8) ||
                                    (NAN(*(double *)(lVar13 + 0x40)) || NAN(dVar8))) {
                              *(double *)(lVar13 + 0x40) = dVar8;
                              *(double *)(*(longlong *)(lVar41 + (longlong)(int)lVar35 * 8) + 0x48)
                                   = dVar8;
                            }
                          }
                          lVar38 = lVar38 + 8;
                        } while ((longlong)(int)lVar42 * 8 != lVar38);
                      }
                      break;
                    case 10:
                      (**(code **)(**(longlong **)(lVar36 + 8) + 0x50))
                                (*(longlong **)(lVar36 + 8),&local_1b8,&local_118);
                      if (*(char *)(local_148 + 1) == '\0') {
                        lVar36 = (longlong)local_1b0;
                        plVar26 = local_1ac;
                        plVar23 = local_1b8;
                      }
                      else {
                        plVar26 = (longlong *)local_148[2] + 1;
                        lVar36 = 0;
                        plVar23 = (longlong *)local_148[2];
                      }
                      lVar42 = *plVar26;
                      if ((longlong)(int)lVar42 != 0) {
                        lVar36 = *plVar23 + lVar36 * 8;
                        lVar38 = 0;
                        do {
                          plVar26 = *(longlong **)
                                     (*(longlong *)(param_1 + 0x30) +
                                     (longlong)*(int *)(lVar36 + lVar38) * 8);
                          if (*(byte *)((longlong)plVar26 + 0xc) < 2) {
                            plVar26 = (longlong *)0x0;
                          }
                          if ((plVar26 != (longlong *)0x0) && (0 < uStack_110._4_4_)) {
                            dVar8 = (double)*(float *)(*(longlong *)local_118 +
                                                      ((longlong)(int)uStack_110 +
                                                      (longlong)*(int *)(lVar36 + 4 + lVar38)) * 4);
                            lVar31 = *(longlong *)(local_270 + 0x9c8);
                            lVar35 = plVar26[2];
                            lVar41 = *(longlong *)(lVar31 + 0x2a0);
                            lVar13 = *(longlong *)(lVar41 + (longlong)(int)lVar35 * 8);
                            if (lVar13 == 0) {
                              local_1c8 = (longlong *)FUN_14001cc68(0x80,0x10);
                              *local_1c8 = 0x3fe0000000000000;
                              local_1c8[1] = 0;
                              local_1c8[2] = 0x3fb99999a0000000;
                              local_1c8[3] = 0x3ff0000000000000;
                              local_1c8[4] = 0;
                              local_1c8[5] = 0;
                              local_1c8[8] = 0;
                              local_1c8[9] = 0;
                              *(undefined4 *)(local_1c8 + 10) = 0;
                              local_1c8[0xb] = 0;
                              *(undefined8 *)((longlong)local_1c8 + 0x5e) = 0;
                              local_1c8[0xd] = 0x48435000469c4000;
                              local_1c8[0xe] = 0x3f800000476a6000;
                              *(undefined1 *)(local_1c8 + 0xf) = 0;
                              *(undefined4 *)((longlong)local_1c8 + 0x7c) = 0;
                              local_1c8[6] = (longlong)dVar8;
                              local_1c8[7] = (longlong)dVar8;
                              *(longlong **)
                               (*(longlong *)(lVar31 + 0x288) + (longlong)(int)plVar26[2] * 8) =
                                   local_1c8;
                              lVar41 = *(longlong *)
                                        (*(longlong *)(*plVar26 + 0x1e8) +
                                        (longlong)(int)plVar26[1] * 8);
                              if ((lVar41 != 0) && ((*(byte *)(lVar41 + 0x2c) & 1) != 0)) {
                                FUN_14082044e(lVar31 + 0x100);
                              }
                              FUN_146eed06a(*(undefined8 *)(local_270 + 0x9c8),plVar26,&local_1c8);
                              if (local_1c8 != (longlong *)0x0) {
                                FUN_1400020a8();
                              }
                            }
                            else if ((*(double *)(lVar13 + 0x40) != dVar8) ||
                                    (NAN(*(double *)(lVar13 + 0x40)) || NAN(dVar8))) {
                              *(double *)(lVar13 + 0x30) = dVar8;
                              *(double *)(*(longlong *)(lVar41 + (longlong)(int)lVar35 * 8) + 0x38)
                                   = dVar8;
                            }
                          }
                          lVar38 = lVar38 + 8;
                        } while ((longlong)(int)lVar42 * 8 != lVar38);
                      }
                    }
                    param_4 = local_240;
                    uVar33 = local_268;
                    uVar37 = local_248;
                  }
                  else {
                    iVar19 = (**(code **)(**(longlong **)(lVar36 + 8) + 8))();
                    plVar26 = local_220;
                    if (iVar19 == 4) {
                      local_208 = DAT_14c8464f0;
                      local_218 = (undefined4)DAT_14c8464e0;
                      uStack_214 = DAT_14c8464e0._4_4_;
                      uStack_210 = (undefined4)DAT_14c8464e8;
                      uStack_20c = DAT_14c8464e8._4_4_;
                      iVar19 = *(int *)(param_1 + 8);
                      FUN_14051b394(local_220,iVar19,0);
                      if (0 < (longlong)iVar19) {
                        lVar42 = 0;
                        do {
                          lVar38 = *plVar26;
                          *(undefined8 *)(lVar38 + 0x10 + lVar42) = local_208;
                          puVar2 = (undefined4 *)(lVar38 + lVar42);
                          *puVar2 = local_218;
                          puVar2[1] = uStack_214;
                          puVar2[2] = uStack_210;
                          puVar2[3] = uStack_20c;
                          lVar42 = lVar42 + 0x18;
                        } while ((longlong)iVar19 * 0x18 != lVar42);
                      }
                      local_1bc = *(undefined4 *)(param_1 + 0x88);
                      local_1c8 = plVar26;
                      local_1c0 = 0;
                      iVar19 = *(int *)(lVar36 + 0x58);
                      uVar37 = local_248;
                      if (iVar19 < 0xd) {
                        if (iVar19 == 5) {
                          (**(code **)(**(longlong **)(lVar36 + 8) + 0x50))
                                    (*(longlong **)(lVar36 + 8),&local_1b8,&local_1c8);
                          if (*(char *)(local_148 + 1) == '\0') {
                            lVar36 = (longlong)local_1b0;
                            plVar26 = local_1ac;
                            plVar23 = local_1b8;
                          }
                          else {
                            plVar26 = (longlong *)local_148[2] + 1;
                            lVar36 = 0;
                            plVar23 = (longlong *)local_148[2];
                          }
                          lVar42 = *plVar26;
                          uVar37 = local_248;
                          if ((longlong)(int)lVar42 != 0) {
                            lVar36 = *plVar23 + lVar36 * 8;
                            lVar38 = 0;
                            do {
                              plVar26 = *(longlong **)
                                         (*(longlong *)(param_1 + 0x30) +
                                         (longlong)*(int *)(lVar36 + lVar38) * 8);
                              if ((plVar26 != (longlong *)0x0) &&
                                 (1 < *(byte *)((longlong)plVar26 + 0xc))) {
                                lVar31 = (longlong)(int)plVar26[1];
                                if (*(char *)(*(longlong *)(*plVar26 + 0x2c0) + 0xb + lVar31 * 0x10)
                                    == '\x04') {
                                  lVar41 = *(longlong *)(*plVar26 + 0x278);
                                  lVar35 = (longlong)local_1c0 +
                                           (longlong)*(int *)(lVar36 + 4 + lVar38);
                                  lVar13 = *local_1c8;
                                  dVar8 = *(double *)(lVar13 + 0x10 + lVar35 * 0x18);
                                  dVar9 = *(double *)(lVar13 + 8 + lVar35 * 0x18);
                                  *(float *)(lVar41 + lVar31 * 0xc) =
                                       (float)((double)*(float *)(lVar41 + lVar31 * 0xc) +
                                              *(double *)(lVar13 + lVar35 * 0x18));
                                  *(float *)(lVar41 + 4 + lVar31 * 0xc) =
                                       (float)((double)*(float *)(lVar41 + 4 + lVar31 * 0xc) + dVar9
                                              );
                                  *(float *)(lVar41 + 8 + lVar31 * 0xc) =
                                       (float)((double)*(float *)(lVar41 + 8 + lVar31 * 0xc) + dVar8
                                              );
                                }
                              }
                              lVar38 = lVar38 + 8;
                            } while ((longlong)(int)lVar42 * 8 != lVar38);
                          }
                        }
                        else if (iVar19 == 6) {
                          (**(code **)(**(longlong **)(lVar36 + 8) + 0x50))
                                    (*(longlong **)(lVar36 + 8),&local_1b8,&local_1c8);
                          if (*(char *)(local_148 + 1) == '\0') {
                            lVar36 = (longlong)local_1b0;
                            plVar26 = local_1ac;
                            plVar23 = local_1b8;
                          }
                          else {
                            plVar26 = (longlong *)local_148[2] + 1;
                            lVar36 = 0;
                            plVar23 = (longlong *)local_148[2];
                          }
                          lVar42 = *plVar26;
                          uVar37 = local_248;
                          if ((longlong)(int)lVar42 != 0) {
                            lVar36 = *plVar23 + lVar36 * 8;
                            lVar38 = 0;
                            do {
                              plVar26 = *(longlong **)
                                         (*(longlong *)(param_1 + 0x30) +
                                         (longlong)*(int *)(lVar36 + lVar38) * 8);
                              if ((plVar26 != (longlong *)0x0) &&
                                 (1 < *(byte *)((longlong)plVar26 + 0xc))) {
                                lVar31 = (longlong)(int)plVar26[1];
                                if (*(char *)(*(longlong *)(*plVar26 + 0x2c0) + 0xb + lVar31 * 0x10)
                                    == '\x04') {
                                  lVar41 = *(longlong *)(*plVar26 + 0x290);
                                  lVar35 = (longlong)local_1c0 +
                                           (longlong)*(int *)(lVar36 + 4 + lVar38);
                                  lVar13 = *local_1c8;
                                  dVar8 = *(double *)(lVar13 + 0x10 + lVar35 * 0x18);
                                  dVar9 = *(double *)(lVar13 + 8 + lVar35 * 0x18);
                                  *(float *)(lVar41 + lVar31 * 0xc) =
                                       (float)((double)*(float *)(lVar41 + lVar31 * 0xc) +
                                              *(double *)(lVar13 + lVar35 * 0x18));
                                  *(float *)(lVar41 + 4 + lVar31 * 0xc) =
                                       (float)((double)*(float *)(lVar41 + 4 + lVar31 * 0xc) + dVar9
                                              );
                                  *(float *)(lVar41 + 8 + lVar31 * 0xc) =
                                       (float)((double)*(float *)(lVar41 + 8 + lVar31 * 0xc) + dVar8
                                              );
                                }
                              }
                              lVar38 = lVar38 + 8;
                            } while ((longlong)(int)lVar42 * 8 != lVar38);
                          }
                        }
                      }
                      else if (iVar19 == 0xd) {
                        (**(code **)(**(longlong **)(lVar36 + 8) + 0x50))
                                  (*(longlong **)(lVar36 + 8),&local_1b8,&local_1c8);
                        if (*(char *)(local_148 + 1) == '\0') {
                          lVar36 = (longlong)local_1b0;
                          plVar26 = local_1ac;
                          plVar23 = local_1b8;
                        }
                        else {
                          plVar26 = (longlong *)local_148[2] + 1;
                          lVar36 = 0;
                          plVar23 = (longlong *)local_148[2];
                        }
                        uVar37 = local_248;
                        if ((longlong)(int)*plVar26 != 0) {
                          puVar34 = (uint *)(lVar36 * 8 + *plVar23);
                          puVar1 = puVar34 + (longlong)(int)*plVar26 * 2;
LAB_14085db02:
                          uVar21 = *puVar34;
                          lVar36 = *(longlong *)
                                    (*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar21 * 8);
                          if (((lVar36 != 0) && (2 < *(byte *)(lVar36 + 0xc))) &&
                             (((pdVar25 = (double *)
                                          (*local_1c8 +
                                          ((longlong)local_1c0 + (longlong)(int)puVar34[1]) * 0x18),
                               *pdVar25 != 3.4028234663852886e+38 ||
                               ((pdVar25[1] != 3.4028234663852886e+38 ||
                                (pdVar25[2] != 3.4028234663852886e+38)))) || (NAN(pdVar25[2]))))) {
                            if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
                              plVar26 = (longlong *)param_4[8];
                              if ((longlong *)param_4[8] == (longlong *)0x0) {
                                plVar26 = local_230;
                              }
                              iVar19 = *(int *)((longlong)plVar26 +
                                               (ulonglong)((int)param_4[9] - 1U & uVar21) * 4);
                              if (iVar19 != -1) {
                                lVar42 = *param_4;
                                iVar20 = iVar19;
                                do {
                                  if (*(uint *)(lVar42 + (longlong)iVar20 * 0x10) == uVar21)
                                  goto LAB_14085dc29;
                                  iVar20 = *(int *)(lVar42 + ((longlong)iVar20 * 2 + 1) * 8);
                                } while (iVar20 != -1);
                              }
                            }
                            local_1cc = *(undefined4 *)(local_250 + 0x38);
                            local_118 = (uint *)*pdVar25;
                            uStack_110 = (undefined4 *)pdVar25[1];
                            local_108[0] = pdVar25[2];
                            FUN_146eece88(local_250,lVar36,&local_118);
                            uStack_110 = &local_1cc;
                            local_118 = puVar34;
                            FUN_140263e2a(param_4,&local_1d8,&local_118,0);
                          }
                          goto LAB_14085dc6a;
                        }
                      }
                      else if (iVar19 == 0x13) {
                        (**(code **)(**(longlong **)(lVar36 + 8) + 0x50))
                                  (*(longlong **)(lVar36 + 8),&local_1b8,&local_1c8);
                        if (*(char *)(local_148 + 1) == '\0') {
                          lVar36 = (longlong)local_1b0;
                          plVar26 = local_1ac;
                          plVar23 = local_1b8;
                        }
                        else {
                          plVar26 = (longlong *)local_148[2] + 1;
                          lVar36 = 0;
                          plVar23 = (longlong *)local_148[2];
                        }
                        lVar42 = *plVar26;
                        uVar37 = local_248;
                        if ((longlong)(int)lVar42 != 0) {
                          lVar36 = *plVar23 + lVar36 * 8;
                          lVar38 = 0;
                          do {
                            plVar26 = *(longlong **)
                                       (*(longlong *)(param_1 + 0x30) +
                                       (longlong)*(int *)(lVar36 + lVar38) * 8);
                            if ((plVar26 != (longlong *)0x0) &&
                               (1 < *(byte *)((longlong)plVar26 + 0xc))) {
                              lVar31 = *plVar26;
                              lVar41 = (longlong)(int)plVar26[1];
                              if (*(char *)(*(longlong *)(lVar31 + 0x2c0) + 0xb + lVar41 * 0x10) ==
                                  '\x04') {
                                lVar39 = (longlong)local_1c0 +
                                         (longlong)*(int *)(lVar36 + 4 + lVar38);
                                lVar13 = *local_1c8;
                                lVar35 = *(longlong *)(lVar31 + 0x338);
                                dVar8 = *(double *)(*(longlong *)(lVar31 + 0x3c8) + lVar41 * 8);
                                dVar9 = *(double *)(lVar13 + 0x10 + lVar39 * 0x18);
                                dVar10 = *(double *)(lVar13 + 8 + lVar39 * 0x18);
                                *(double *)(lVar35 + lVar41 * 0x18) =
                                     dVar8 * *(double *)(lVar13 + lVar39 * 0x18) +
                                     *(double *)(lVar35 + lVar41 * 0x18);
                                *(double *)(lVar35 + 8 + lVar41 * 0x18) =
                                     dVar10 * dVar8 + *(double *)(lVar35 + 8 + lVar41 * 0x18);
                                *(double *)(lVar35 + 0x10 + lVar41 * 0x18) =
                                     dVar9 * dVar8 + *(double *)(lVar35 + 0x10 + lVar41 * 0x18);
                              }
                            }
                            lVar38 = lVar38 + 8;
                          } while ((longlong)(int)lVar42 * 8 != lVar38);
                        }
                      }
                    }
                  }
                }
LAB_14085dce3:
                if (local_148 != (undefined8 *)0x0) {
                  (**(code **)*local_148)(local_148,1);
                }
                local_150 = 0;
                if (local_158 != 0) {
                  FUN_1400020a8();
                }
                FUN_1402a03ba(local_198);
              }
              uVar22 = uStack_1e0;
              lVar36 = (longlong)(int)uStack_1e0;
              uVar21 = (int)uStack_1e0 + 1;
              uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar21);
              if (uStack_1e0._4_4_ < uVar21) {
                FUN_1446f48e2(&local_1e8,uVar22 & 0xffffffff);
              }
              *(int *)(local_1e8 + lVar36 * 4) = (int)uVar33;
            }
          }
        }
        else {
          iVar19 = (**(code **)(**(longlong **)(lVar36 + 8) + 8))();
          if ((iVar19 == 4) && (uVar21 = *(uint *)(lVar36 + 0x58), uVar21 < 0x14)) {
            uVar30 = 0x80060;
            goto LAB_14085c4d4;
          }
        }
      }
      uVar33 = uVar33 + 1;
    } while (uVar33 != uVar37);
    if ((param_6 & 0 < (int)uStack_1e0) == 1) {
      uVar37 = (uStack_1e0 & 0xffffffff) + 1;
      do {
        FUN_14046b56a(param_5,*(undefined4 *)(local_1e8 + -8 + uVar37 * 4),1);
        uVar37 = uVar37 - 1;
      } while (1 < uVar37);
    }
    if (local_1e8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (iVar19 = *(int *)(lVar42 + 8), iVar19 != -1) {
LAB_14085ca1e:
    lVar42 = lVar36 + (longlong)iVar19 * 0x10;
    if (*(uint *)(lVar36 + (longlong)iVar19 * 0x10) == uVar21) goto LAB_14085ca3c;
  }
  lVar42 = 0;
LAB_14085ca3c:
  iVar19 = *(int *)(lVar42 + 4);
  lVar38 = plVar26[1];
  lVar36 = *(longlong *)(*plVar26 + 0x28);
  lVar42 = *(longlong *)(local_250 + 0x20);
  *(undefined8 *)(lVar42 + ((longlong)iVar19 * 3 + 2) * 8) =
       *(undefined8 *)(lVar36 + 0x10 + (longlong)(int)lVar38 * 0x18);
  puVar2 = (undefined4 *)(lVar36 + (longlong)(int)lVar38 * 0x18);
  uVar15 = puVar2[1];
  uVar16 = puVar2[2];
  uVar17 = puVar2[3];
  puVar3 = (undefined4 *)(lVar42 + (longlong)iVar19 * 0x18);
  *puVar3 = *puVar2;
  puVar3[1] = uVar15;
  puVar3[2] = uVar16;
  puVar3[3] = uVar17;
LAB_14085ca6f:
  puVar34 = puVar34 + 2;
  param_4 = local_240;
  uVar37 = local_248;
  if (puVar34 == puVar1) goto LAB_14085dce3;
  goto LAB_14085c92e;
  while (iVar19 = *(int *)(lVar36 + 8), iVar19 != -1) {
LAB_14085dc29:
    lVar36 = lVar42 + (longlong)iVar19 * 0x10;
    if (*(uint *)(lVar42 + (longlong)iVar19 * 0x10) == uVar21) goto LAB_14085dc46;
  }
  lVar36 = 0;
LAB_14085dc46:
  iVar19 = *(int *)(lVar36 + 4);
  lVar36 = *(longlong *)(local_250 + 0x20);
  dVar8 = *pdVar25;
  dVar9 = pdVar25[1];
  *(double *)(lVar36 + 0x10 + (longlong)iVar19 * 0x18) = pdVar25[2];
  pdVar25 = (double *)(lVar36 + (longlong)iVar19 * 0x18);
  *pdVar25 = dVar8;
  pdVar25[1] = dVar9;
LAB_14085dc6a:
  puVar34 = puVar34 + 2;
  uVar37 = local_248;
  if (puVar34 == puVar1) goto LAB_14085dce3;
  goto LAB_14085db02;
}



// FUNCTION 14085dfd6 FUN_14085dfd6 body=49 status=ok
// SIG undefined FUN_14085dfd6(void)

void FUN_14085dfd6(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0xfb0) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0xfb0) + 0x9c) & 1) != 0)) {
    FUN_1401bf202();
  }
  FUN_14085e008(param_1);
  return;
}



// FUNCTION 14085e008 FUN_14085e008 body=53 status=ok
// SIG undefined FUN_14085e008(void)

void FUN_14085e008(longlong param_1)

{
  FUN_1447c0e7a();
  if ((*(longlong *)(param_1 + 0x878) != 0) && (*(longlong **)(param_1 + 0x880) != (longlong *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x00014085e039. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x880) + 0x28))();
    return;
  }
  return;
}



// FUNCTION 14085e04c FUN_14085e04c body=96 status=ok
// SIG undefined FUN_14085e04c(void)

undefined8 * FUN_14085e04c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14afda310;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14085e0c4 FUN_14085e0c4 body=405 status=ok
// SIG undefined FUN_14085e0c4(void)

void FUN_14085e0c4(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = FUN_14486f0b8();
  lVar7 = (longlong)iVar2 * 0x50 + *(longlong *)(param_1 + 0x200);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *(undefined4 *)(puVar3 + 1) = 4;
    *puVar3 = &PTR_FUN_14a2e82e0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar3;
  }
  uVar1 = *(ulonglong *)(lVar7 + 8);
  uVar5 = (uint)uVar1 & 3;
  uVar6 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1);
  uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
  uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if ((uVar1 & 4) == 0) {
    local_34 = *(undefined4 *)(puVar3 + 5);
    *(ulonglong *)(lVar7 + 8) = uVar1 | 4;
    FUN_1402a8efa(lVar7 + 0x20);
  }
  else {
    lVar4 = *(longlong *)(lVar7 + 0x40);
    if (*(longlong *)(lVar7 + 0x40) == 0) {
      lVar4 = lVar7 + 0x20;
    }
    iVar8 = *(int *)(lVar4 + uVar6 * 4);
    if (iVar8 != -1) goto LAB_14085e1f3;
    lVar4 = lVar7 + 0x20;
    if (*(longlong *)(lVar7 + 0x40) != 0) {
      lVar4 = *(longlong *)(lVar7 + 0x40);
    }
    *(undefined4 *)(lVar4 + uVar6 * 4) = *(undefined4 *)(puVar3 + 5);
  }
  iVar8 = *(int *)(puVar3 + 5);
  *(uint *)(puVar3 + 5) = iVar8 + 1U;
  if (*(uint *)((longlong)puVar3 + 0x2c) < iVar8 + 1U) {
    FUN_1446f48e2(puVar3 + 4,iVar8);
  }
  *(int *)(puVar3[4] + (longlong)iVar8 * 4) = iVar2;
  iVar8 = *(int *)(puVar3 + 3);
  *(uint *)(puVar3 + 3) = iVar8 + 1U;
  if (*(uint *)((longlong)puVar3 + 0x1c) < iVar8 + 1U) {
    FUN_14085e25a(puVar3 + 2,iVar8);
  }
LAB_14085e1f3:
  *(undefined4 *)(puVar3[2] + (longlong)iVar8 * 4) = *param_3;
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14085e25a FUN_14085e25a body=353 status=ok
// SIG undefined FUN_14085e25a(void)

void FUN_14085e25a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14085e2df;
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
LAB_14085e2df:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 14085e3bc FUN_14085e3bc body=55 status=ok
// SIG undefined FUN_14085e3bc(void)

void FUN_14085e3bc(longlong *param_1)

{
  FUN_144a3f72c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14085e3f4 FUN_14085e3f4 body=161 status=ok
// SIG undefined FUN_14085e3f4(void)

undefined8 FUN_14085e3f4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_38;
  undefined8 *local_30;
  undefined8 local_1c;
  undefined2 local_14;
  undefined1 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = 0;
  if ((param_2 != 0) && (DAT_14cb444a0 == '\0')) {
    if ((*(longlong *)(param_2 + 0x68) == 0) ||
       (1 < *(uint *)(*(longlong *)(param_2 + 0x68) + 0x30))) {
      uVar1 = 0;
    }
    else {
      local_30 = &local_1c;
      local_1c = 0x3f800000;
      local_14 = 0xffff;
      local_12 = 1;
      local_38 = DAT_14caf2f10;
      local_40 = 1;
      local_48 = param_3;
      uVar1 = FUN_14085e496(DAT_14caf2f10,param_2,*(undefined8 *)(param_2 + 0x4e0));
      uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),local_12) & 0xffffffffffffff04;
      uVar1 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 2);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14085e496 FUN_14085e496 body=1099 status=ok
// SIG undefined FUN_14085e496(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14085e496(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,char param_6,float param_7,longlong param_8)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  bool bVar5;
  longlong lVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (DAT_14cb444a0 == '\x02') goto LAB_14085e880;
  *(byte *)(param_8 + 10) = *(byte *)(param_8 + 10) & 0xfb;
  uVar2 = *(uint *)((longlong)param_5 + 0x7cc);
  if ((uVar2 & 1) == 0) {
    if ((longlong)*(int *)(param_1 + 0x1b20) < 1) {
      fVar8 = 0.0;
    }
    else {
      lVar3 = param_1 + 0x410;
      if (*(longlong *)(param_1 + 0x1b10) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x1b10);
      }
      fVar8 = 3.4028235e+38;
      lVar6 = 0;
      do {
        dVar11 = (double)param_5[0x4c] - *(double *)(lVar3 + 0x1e0 + lVar6);
        dVar13 = (double)param_5[0x4d] - *(double *)(lVar3 + 0x1e8 + lVar6);
        dVar12 = (double)param_5[0x4e] - *(double *)(lVar3 + 0x1f0 + lVar6);
        fVar10 = (float)(dVar12 * dVar12 + dVar13 * dVar13 + dVar11 * dVar11);
        if (fVar10 <= fVar8) {
          fVar8 = fVar10;
        }
        lVar6 = lVar6 + 0x2e0;
      } while ((longlong)*(int *)(param_1 + 0x1b20) * 0x2e0 - lVar6 != 0);
      if (fVar8 < 0.0) {
        fVar8 = sqrtf(fVar8);
      }
      else {
        fVar8 = SQRT(fVar8);
      }
      uVar2 = *(uint *)((longlong)param_5 + 0x7cc);
    }
  }
  else {
    fVar8 = *(float *)((longlong)param_5 + 0x7c4);
  }
  fVar10 = *(float *)(param_3 + 0x34);
  if (((uVar2 & 1) == 0) && (param_5[0xec] != 0)) {
    fVar9 = fVar10;
    if (fVar10 <= 1.0) {
      fVar9 = 1.0;
    }
    lVar3 = *(longlong *)(param_5[0xec] + 0x30);
    *(byte *)(lVar3 + 0x798) = *(byte *)(lVar3 + 0x798) & 0x3f | 0x40;
    *(float *)(lVar3 + 0xe4) = fVar8;
    *(float *)(lVar3 + 0xe8) = fVar9;
  }
  if (((DAT_14cb444a0 == '\0') && (DAT_14c762a34 != 0)) && ((*(byte *)(param_3 + 0x30) & 1) != 0)) {
    bVar5 = fVar10 < fVar8;
    bVar4 = (*(byte *)(param_8 + 10) & 4) >> 2 | bVar5;
    bVar1 = *(byte *)(param_8 + 10) & 0xfb;
    *(byte *)(param_8 + 10) = bVar4 * '\x04' | bVar1;
    if (((DAT_14c762a48 != 0) && (DAT_14caf2ef8 == '\x01')) &&
       ((fVar8 <= fVar10 && (DAT_14c76292c != '\0')))) {
      if ((*(byte *)(param_3 + 0x5c) & 2) == 0) {
        bVar5 = false;
      }
      else {
        fVar9 = *(float *)(param_3 + 100);
        if (DAT_14caf2f10 <= fVar9) {
          fVar9 = *(float *)(param_3 + 0x68);
        }
        else if (*(float *)(param_3 + 0x6c) <= DAT_14caf2f10) {
          fVar9 = *(float *)(param_3 + 0x70);
        }
        else {
          fVar9 = (*(float *)(param_3 + 0x70) - *(float *)(param_3 + 0x68)) *
                  ((DAT_14caf2f10 - fVar9) / (*(float *)(param_3 + 0x6c) - fVar9)) +
                  *(float *)(param_3 + 0x68);
        }
        bVar5 = fVar10 * fVar9 < fVar8;
      }
    }
    *(byte *)(param_8 + 10) = (bVar4 | bVar5) << 2 | bVar1;
  }
  if (DAT_14c762a30 != 0) {
    (**(code **)(*param_5 + 0x528))(param_5,&local_88,param_5 + 0x48);
    dVar11 = *(double *)(*(longlong *)(param_1 + 0x10) + 0x148);
    if (*(int *)((longlong)param_5 + 0x3d4) < 0) {
      lVar3 = param_5[0x16];
      if (lVar3 == 0) {
        lVar3 = FUN_1448abda6(param_5);
        if (lVar3 == 0) goto LAB_14085e733;
      }
      fVar8 = (float)*(double *)(lVar3 + 0x6d0);
    }
    else {
LAB_14085e733:
      fVar8 = *(float *)((longlong)param_5 + 0x3c4);
    }
    dVar11 = ((dVar11 - (double)fVar8) - (double)*(float *)(*(longlong *)(param_1 + 0x10) + 0x6f4))
             - (double)_DAT_14c762a18;
    dVar12 = 0.0;
    if (0.0 <= dVar11) {
      dVar12 = dVar11;
    }
    if (param_6 == '\0') {
      if ((DAT_14c762a2c != 0) || ((*(byte *)(param_2 + 100) & 1) != 0)) {
        puVar7 = &local_c8;
        local_c8 = local_88;
        uStack_c4 = uStack_84;
        uStack_c0 = uStack_80;
        uStack_bc = uStack_7c;
        local_b8 = local_78;
        local_b0 = local_58;
        local_d8 = 0;
        goto LAB_14085e7fe;
      }
    }
    else if ((*(byte *)(param_2 + 100) & 1) != 0) {
      puVar7 = &local_a8;
      local_a8 = local_88;
      uStack_a4 = uStack_84;
      uStack_a0 = uStack_80;
      uStack_9c = uStack_7c;
      local_98 = local_78;
      local_90 = local_58;
      local_d8 = 1;
LAB_14085e7fe:
      local_d0 = param_8;
      FUN_143ad12b8(param_1,param_3,puVar7,(float)dVar12);
    }
  }
  if ((param_6 == '\x01' && DAT_14c762a38 != 0) && (*(longlong *)(param_4 + 0x38) == 0)) {
    FUN_143ad14ac(param_4,param_2,param_3,param_8);
  }
  if ((((DAT_14c762a48 != 0) && (DAT_14caf2ef8 == '\x01')) && ((*(byte *)(param_8 + 10) & 4) == 0))
     && ((DAT_14c76292c != '\0' && ((*(byte *)(param_3 + 0x5c) & 1) != 0)))) {
    *(byte *)(param_8 + 10) =
         (*(float *)(param_3 + 0x60) <= param_7 && DAT_14cb444a0 == '\0') << 2 |
         *(byte *)(param_8 + 10);
  }
LAB_14085e880:
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14085e8e2 FUN_14085e8e2 body=21 status=ok
// SIG undefined FUN_14085e8e2(void)

undefined8 FUN_14085e8e2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14085e8f8 FUN_14085e8f8 body=337 status=ok
// SIG undefined FUN_14085e8f8(void)

void FUN_14085e8f8(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((param_2 != 0) && (param_3 != 0)) && (lVar1 = *(longlong *)(param_2 + 0x20), lVar1 != 0)) {
    if (DAT_14cb10130 == 0) {
      local_50 = &local_38;
      local_38 = FUN_140754f84;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_147da9a76;
      local_60 = FUN_1409f3105;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if (((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (lVar1 != param_3)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14085ea6a FUN_14085ea6a body=30 status=ok
// SIG undefined FUN_14085ea6a(void)

bool FUN_14085ea6a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x268))();
  return (*(byte *)((longlong)param_1 + 0x29) & 2) == 0;
}



// FUNCTION 14085eab2 FUN_14085eab2 body=167 status=ok
// SIG undefined FUN_14085eab2(void)

void FUN_14085eab2(uint *param_1,longlong param_2,longlong param_3,char param_4,undefined1 param_5)

{
  longlong lVar1;
  
  FUN_14085ec3f(param_2,param_1,param_3,param_4 * '\x02' + '\x01',param_5);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    if ((int)param_1[8] < 1) {
      lVar1 = *(longlong *)(param_1 + 10);
      if (lVar1 != 0) {
        *param_1 = *(uint *)(lVar1 + 8);
        param_1[1] = *(uint *)(lVar1 + 0xc);
      }
    }
    else {
      *param_1 = (uint)*(ushort *)(**(longlong **)(param_1 + 6) + 0x48);
      param_1[1] = (uint)*(ushort *)(**(longlong **)(param_1 + 6) + 0x4a);
      if (param_3 != 0) {
        lVar1 = FUN_14085eb5a();
        if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
          param_1[2] = param_1[2] & 0xe0000000 |
                       (uint)*(ushort *)(**(longlong **)(param_1 + 6) + 0x4c);
        }
      }
    }
  }
  return;
}



// FUNCTION 14085eb5a FUN_14085eb5a body=228 status=ok
// SIG undefined FUN_14085eb5a(void)

longlong FUN_14085eb5a(void)

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
  if (DAT_14cb0f6d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14580b774;
    local_38 = &LAB_147da57c5;
    local_40 = FUN_14640ca30;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x148;
    FUN_14081cfa3(L"/Script/Engine",L"VolumeTexture",&DAT_14cb0f6d8,&DAT_147da57c4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0f6d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14085ec3f FUN_14085ec3f body=4416 status=ok
// SIG undefined FUN_14085ec3f(void)

void FUN_14085ec3f(longlong *param_1,uint *param_2,undefined8 param_3,ulonglong param_4,char param_5
                  )

{
  uint *puVar1;
  int *piVar2;
  byte *pbVar3;
  byte bVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint *puVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  void *_Dst;
  undefined1 uVar15;
  uint uVar16;
  undefined2 *puVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  undefined1 auStack_f8 [32];
  uint local_d8;
  undefined1 local_d0;
  undefined8 local_c0;
  uint local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_94;
  byte local_8d;
  int local_8c;
  int local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  undefined4 uStack_74;
  uint uStack_70;
  uint uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar13 = FUN_141165238();
  bVar4 = *(byte *)(param_1 + 5);
  uVar12 = 0;
  if ((bVar4 & 4) != 0) {
    uVar12 = (uint)(*(longlong *)(param_2 + 10) != 0);
  }
  puVar1 = param_2 + 6;
  local_84 = param_2[8];
  local_88 = 0;
  local_8c = 0;
  local_c0 = param_3;
  if ((param_4 & 1) == 0) {
    local_8d = 0;
  }
  else {
    if (((bVar4 & 4) != 0) && ((param_4 & 2) != 0 && (char)uVar12 == '\0')) {
      if (local_84 == 0) {
        uVar16 = 0;
      }
      else {
        lVar20 = 0;
        uVar16 = local_84;
        do {
          if ((*(char *)(*(longlong *)(*(longlong *)puVar1 + lVar20) + 0x1b) == '\0') &&
             ((*(ushort *)(*(longlong *)(*(longlong *)puVar1 + lVar20) + 0x34) & 0x101) == 0))
          break;
          uVar16 = uVar16 - 1;
          lVar20 = lVar20 + 8;
        } while ((longlong)(int)local_84 * 8 != lVar20);
        if (uVar16 == 0) {
          uVar16 = 1;
        }
      }
      if ((int)local_84 <= (int)uVar16) {
        uVar16 = local_84;
      }
      local_8c = local_84 - uVar16;
    }
    if ((bVar4 & 4) == 0 || (char)uVar12 != '\0') {
      local_8d = 0;
    }
    else {
      local_8d = (*(byte *)((longlong)param_1 + 0x2b) & 0x20) >> 5;
    }
    (**(code **)(*param_1 + 0x170))(param_1,&local_8d,1);
    if (local_8d == 1) {
      if (local_84 == 0) {
        local_7c = 0;
        local_80 = 0;
        local_94 = 0;
      }
      else {
        lVar20 = *(longlong *)(*(longlong *)puVar1 + (longlong)local_88 * 8);
        local_7c = (uint)*(ushort *)(lVar20 + 0x48);
        local_80 = (uint)*(ushort *)(lVar20 + 0x4a);
        local_94 = (uint)*(ushort *)(lVar20 + 0x4c);
      }
      puVar8 = (ulonglong *)param_1[1];
      puVar6 = (uint *)*puVar8 + 1;
      if ((uint *)puVar8[1] < puVar6) {
        local_78 = uVar12;
        (**(code **)(*param_1 + 0x170))(param_1,&local_78,4);
        uVar12 = local_78;
        if (1 < local_78) {
          FUN_14572541c(param_1);
          uVar12 = local_78;
        }
      }
      else {
        uVar12 = *(uint *)*puVar8;
        *puVar8 = (ulonglong)puVar6;
      }
      if (uVar12 == 0) {
        puVar8 = (ulonglong *)param_1[1];
        puVar6 = (uint *)*puVar8 + 1;
        if ((uint *)puVar8[1] < puVar6) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_7c,4);
          }
          else {
            FUN_14572512c(param_1,&local_7c);
          }
        }
        else {
          local_7c = *(uint *)*puVar8;
          *puVar8 = (ulonglong)puVar6;
        }
        puVar8 = (ulonglong *)param_1[1];
        puVar6 = (uint *)*puVar8 + 1;
        if ((uint *)puVar8[1] < puVar6) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_80,4);
          }
          else {
            FUN_14572512c(param_1,&local_80);
          }
        }
        else {
          local_80 = *(uint *)*puVar8;
          *puVar8 = (ulonglong)puVar6;
        }
        puVar8 = (ulonglong *)param_1[1];
        puVar6 = (uint *)*puVar8 + 1;
        if ((uint *)puVar8[1] < puVar6) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_94,4);
          }
          else {
            FUN_14572512c(param_1,&local_94);
          }
        }
        else {
          local_94 = *(uint *)*puVar8;
          *puVar8 = (ulonglong)puVar6;
        }
        if ((*(byte *)(param_1 + 5) & 1) != 0) {
          *param_2 = local_7c;
          param_2[1] = local_80;
        }
      }
      puVar6 = param_2 + 2;
      puVar7 = *(uint **)param_1[1];
      if ((uint *)((undefined8 *)param_1[1])[1] < puVar7 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar6,4);
        }
        else {
          FUN_14572512c(param_1,puVar6);
        }
      }
      else {
        *puVar6 = *puVar7;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      if ((*(byte *)((longlong)param_2 + 0xb) & 0x40) != 0) {
        FUN_147d70888(param_1,param_2 + 4);
      }
      if ((*(byte *)(param_1 + 5) & 4) == 0) {
        local_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        FUN_14021219d(param_1,&local_78);
        if (uStack_70 == 0) {
          puVar17 = &DAT_149dfb77a;
        }
        else {
          puVar17 = (undefined2 *)CONCAT44(uStack_74,local_78);
        }
        FUN_1446f470e(&local_a8,puVar17,1);
        iVar23 = FUN_1448e5bf4(lVar13,local_a8,0);
        if (iVar23 == -1) {
          lVar13 = -1;
        }
        else {
          lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x40) + 8 + (longlong)iVar23 * 0x10);
        }
        uVar15 = 0;
        if (lVar13 < 0x5d) {
          uVar15 = (undefined1)lVar13;
        }
        if (lVar13 == -1) {
          uVar15 = 0;
        }
        *(undefined1 *)(param_2 + 3) = uVar15;
        lVar13 = CONCAT44(uStack_74,local_78);
      }
      else {
        if ((longlong)*(int *)(lVar13 + 0x48) == 0) {
          local_a0 = 0;
        }
        else {
          local_a0 = 0;
          lVar20 = 0;
          do {
            if (*(ulonglong *)(*(longlong *)(lVar13 + 0x40) + 8 + lVar20) ==
                (ulonglong)(byte)param_2[3]) {
              local_a0 = *(ulonglong *)(*(longlong *)(lVar13 + 0x40) + lVar20);
              break;
            }
            lVar20 = lVar20 + 0x10;
          } while ((longlong)*(int *)(lVar13 + 0x48) * 0x10 != lVar20);
        }
        FUN_14029eeae(&local_a0,&local_78);
        FUN_14021219d(param_1,&local_78);
        lVar13 = CONCAT44(uStack_74,local_78);
      }
      if (lVar13 != 0) {
        FUN_1400020a8();
      }
      if (uVar12 != 0) goto LAB_14085fa5e;
      puVar8 = (ulonglong *)param_1[1];
      puVar6 = (uint *)*puVar8 + 1;
      if ((uint *)puVar8[1] < puVar6) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_84,4);
        }
        else {
          FUN_14572512c(param_1,&local_84);
        }
      }
      else {
        local_84 = *(uint *)*puVar8;
        *puVar8 = (ulonglong)puVar6;
      }
      puVar8 = (ulonglong *)param_1[1];
      piVar2 = (int *)*puVar8 + 1;
      if ((int *)puVar8[1] < piVar2) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_8c,4);
        }
        else {
          FUN_14572512c(param_1,&local_8c);
        }
      }
      else {
        local_8c = *(int *)*puVar8;
        *puVar8 = (ulonglong)piVar2;
      }
      if ((*(byte *)(param_1 + 5) & 1) == 0) {
LAB_14085f966:
        uVar21 = (ulonglong)local_84;
        if (0 < (int)local_84) {
          lVar13 = (longlong)local_88;
          do {
            if ((*(byte *)(param_1 + 5) & 4) == 0) {
              lVar20 = *(longlong *)(*(longlong *)puVar1 + lVar13 * 8);
              *(short *)(lVar20 + 0x48) = (short)local_7c;
              *(short *)(lVar20 + 0x4a) = (short)local_80;
              *(undefined2 *)(lVar20 + 0x4c) = (undefined2)local_94;
            }
            local_7c = (int)local_7c / 2;
            if ((int)local_7c < 2) {
              local_7c = 1;
            }
            local_80 = (int)local_80 / 2;
            if ((int)local_80 < 2) {
              local_80 = 1;
            }
            lVar13 = lVar13 + 1;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
      }
      else {
        FUN_1417f4044(puVar1);
        if (0 < (int)local_84) {
          iVar23 = 0;
          do {
            puVar14 = (undefined8 *)FUN_14001cc68(0x50,0x10);
            puVar14[4] = 0;
            puVar14[5] = 0;
            *puVar14 = 0;
            puVar14[1] = 0;
            puVar14[2] = 0;
            puVar14[3] = 0;
            puVar14[6] = 0;
            *(undefined1 *)((longlong)puVar14 + 0x31) = 0xff;
            *(undefined4 *)((longlong)puVar14 + 0x2d) = 0xffffffff;
            puVar14[7] = DAT_14c845dbc;
            *(undefined4 *)(puVar14 + 8) = DAT_14c845dc4;
            *(undefined4 *)(puVar14 + 9) = 0;
            *(undefined2 *)((longlong)puVar14 + 0x4c) = 0;
            uVar12 = param_2[8];
            param_2[8] = uVar12 + 1;
            if (param_2[9] < uVar12 + 1) {
              FUN_1456bd870(puVar1,uVar12);
            }
            *(undefined8 **)(*(longlong *)(param_2 + 6) + (longlong)(int)uVar12 * 8) = puVar14;
            lVar13 = *(longlong *)(*(longlong *)(param_2 + 6) + (longlong)(int)(param_2[8] - 1) * 8)
            ;
            *(undefined1 *)(lVar13 + 0x2c) = 0;
            *(undefined4 *)(lVar13 + 0x28) = 0;
            FUN_1400ea36e(lVar13 + 0x20,lVar13 + 0x20);
            *(byte *)(lVar13 + 0x36) = *(byte *)(lVar13 + 0x36) & 0xfb;
            iVar23 = iVar23 + 1;
          } while (iVar23 < (int)local_84);
          goto LAB_14085f966;
        }
      }
      iVar23 = local_8c;
      if (0 < local_8c) {
        lVar13 = 0;
        do {
          if (((*(byte *)((longlong)param_1 + 0x29) & 1) != 0) &&
             ((*(byte *)((longlong)param_1 + 0x2b) & 0x12) == 0)) {
            FUN_146888dc4(*(undefined8 *)(*(longlong *)puVar1 + (local_88 + lVar13) * 8),param_1);
            iVar23 = local_8c;
          }
          lVar13 = lVar13 + 1;
        } while ((int)lVar13 < iVar23);
      }
      if (iVar23 < (int)local_84) {
        lVar13 = (longlong)iVar23;
        do {
          local_d0 = 0;
          local_d8 = local_d8 & 0xffffff00;
          FUN_147473790(*(longlong *)(*(longlong *)puVar1 + (local_88 + lVar13) * 8) + 0x20,param_1,
                        local_c0,0x48);
          lVar13 = lVar13 + 1;
        } while ((int)lVar13 < (int)local_84);
      }
      goto LAB_14085fa5e;
    }
    uStack_70 = 0;
    uStack_6c = uStack_6c & 0xff000000;
    local_78 = 0;
    uStack_74 = 0;
    (**(code **)(*param_1 + 0x170))(param_1,&local_78,0xf);
  }
  puVar6 = *(uint **)param_1[1];
  if ((uint *)((undefined8 *)param_1[1])[1] < puVar6 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar6;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar6 = *(uint **)param_1[1];
  if ((uint *)((undefined8 *)param_1[1])[1] < puVar6 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar6;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar6 = param_2 + 2;
  puVar7 = *(uint **)param_1[1];
  if ((uint *)((undefined8 *)param_1[1])[1] < puVar7 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar6,4);
    }
    else {
      FUN_14572512c(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar7;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  local_b4 = uVar12;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((*(byte *)(param_1 + 5) & 4) != 0) {
      if ((longlong)*(int *)(lVar13 + 0x48) == 0) {
        local_a0 = 0;
      }
      else {
        local_a0 = 0;
        lVar20 = 0;
        do {
          if (*(ulonglong *)(*(longlong *)(lVar13 + 0x40) + 8 + lVar20) ==
              (ulonglong)(byte)param_2[3]) {
            local_a0 = *(ulonglong *)(*(longlong *)(lVar13 + 0x40) + lVar20);
            break;
          }
          lVar20 = lVar20 + 0x10;
        } while ((longlong)*(int *)(lVar13 + 0x48) * 0x10 != lVar20);
      }
      FUN_14029eeae(&local_a0,&local_78);
      FUN_14021219d(param_1,&local_78);
      lVar13 = CONCAT44(uStack_74,local_78);
      goto LAB_14085ef6d;
    }
  }
  else {
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    FUN_14021219d(param_1,&local_78);
    if (uStack_70 == 0) {
      puVar17 = &DAT_149dfb77a;
    }
    else {
      puVar17 = (undefined2 *)CONCAT44(uStack_74,local_78);
    }
    FUN_1446f470e(&local_b0,puVar17,1);
    iVar23 = FUN_1448e5bf4(lVar13,local_b0,0);
    if (iVar23 == -1) {
      lVar13 = -1;
    }
    else {
      lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x40) + 8 + (longlong)iVar23 * 0x10);
    }
    uVar15 = 0;
    if (lVar13 < 0x5d) {
      uVar15 = (undefined1)lVar13;
    }
    if (lVar13 == -1) {
      uVar15 = 0;
    }
    *(undefined1 *)(param_2 + 3) = uVar15;
    lVar13 = CONCAT44(uStack_74,local_78);
LAB_14085ef6d:
    if (lVar13 != 0) {
      FUN_1400020a8();
    }
  }
  uVar12 = *puVar6;
  if ((uVar12 >> 0x1e & 1) != 0) {
    FUN_147d70888(param_1,param_2 + 4);
    uVar12 = param_2[2];
  }
  if ((uVar12 >> 0x1d & 1) != 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar14 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      puVar14[2] = 0;
      puVar14[3] = 0;
      *puVar14 = 0;
      puVar14[1] = 0;
      *(undefined2 *)((longlong)puVar14 + 0x1c) = 0x201;
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar14[6] = 0;
      *puVar14 = &PTR_FUN_149e002e8;
      *(undefined4 *)(puVar14 + 1) = 0;
      *puVar14 = &PTR_FUN_14aad4598;
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
      }
      puVar9 = *(undefined8 **)(param_2 + 0xc);
      *(undefined8 **)(param_2 + 0xc) = puVar14;
      if (puVar9 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar9 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar9)(puVar9,1);
        }
      }
    }
    lVar13 = *(longlong *)(param_2 + 0xc);
    puVar10 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar10 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(lVar13 + 0x10),4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(lVar13 + 0x10) = *puVar10;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar10 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar10 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(lVar13 + 0x14),4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(lVar13 + 0x14) = *puVar10;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar10 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar10 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(lVar13 + 0x18),4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(lVar13 + 0x18) = *puVar10;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar11 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar11 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(lVar13 + 0x1c),1);
    }
    else {
      *(undefined1 *)(lVar13 + 0x1c) = *puVar11;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    puVar11 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar11 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(lVar13 + 0x1d),1);
    }
    else {
      *(undefined1 *)(lVar13 + 0x1d) = *puVar11;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    FUN_145ad9e74(param_1,lVar13 + 0x20);
  }
  if ((param_4 & 1) == 0) {
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
  }
  else {
    puVar8 = (ulonglong *)param_1[1];
    piVar2 = (int *)*puVar8 + 1;
    if ((int *)puVar8[1] < piVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_88,4);
      }
      else {
        FUN_14572512c(param_1,&local_88);
      }
    }
    else {
      local_88 = *(int *)*puVar8;
      *puVar8 = (ulonglong)piVar2;
    }
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      local_88 = 0;
    }
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    if ((*(byte *)(param_1 + 5) & 4) != 0) {
      if ((char)local_b4 == '\0') {
        iVar23 = local_84 + local_88;
        if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar23);
        }
        if (iVar23 != 0) {
          FUN_14480809c(&local_78);
        }
        uVar12 = param_2[8];
        if ((longlong)(int)uVar12 != 0) {
          lVar13 = *(longlong *)(param_2 + 6);
          lVar20 = 0;
          do {
            uVar16 = uStack_70;
            uVar5 = *(undefined4 *)(*(longlong *)(lVar13 + lVar20) + 0x34);
            lVar19 = (longlong)(int)uStack_70;
            uStack_70 = uStack_70 + 1;
            if (uStack_6c < uStack_70) {
              FUN_1447808da(&local_78,uVar16);
            }
            *(undefined4 *)(CONCAT44(uStack_74,local_78) + lVar19 * 4) = uVar5;
            lVar20 = lVar20 + 8;
          } while ((longlong)(int)uVar12 * 8 != lVar20);
        }
        lVar13 = (longlong)local_8c;
        if (0 < lVar13) {
          lVar19 = (longlong)local_88;
          lVar20 = lVar13;
          do {
            puVar6 = (uint *)(*(longlong *)(*(longlong *)puVar1 + lVar19 * 8) + 0x34);
            *puVar6 = *puVar6 | 0x400;
            lVar19 = lVar19 + 1;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        if (local_8c < (int)local_84) {
          lVar20 = local_88 + lVar13;
          lVar13 = (int)local_84 - lVar13;
          do {
            puVar6 = (uint *)(*(longlong *)(*(longlong *)puVar1 + lVar20 * 8) + 0x34);
            *puVar6 = *puVar6 | 0x48;
            lVar20 = lVar20 + 1;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
      }
      else {
        iVar23 = *(int *)(*(longlong *)(param_2 + 10) + 0xb0);
        if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar23);
        }
        if (iVar23 != 0) {
          FUN_14480809c(&local_78);
          lVar13 = (longlong)*(int *)(*(longlong *)(param_2 + 10) + 0xb0);
          if (lVar13 != 0) {
            lVar20 = *(longlong *)(*(longlong *)(param_2 + 10) + 0xa8);
            lVar19 = 0;
            do {
              uVar12 = uStack_70;
              uVar5 = *(undefined4 *)(lVar20 + 0x34 + lVar19);
              lVar22 = (longlong)(int)uStack_70;
              uStack_70 = uStack_70 + 1;
              if (uStack_6c < uStack_70) {
                FUN_1447808da(&local_78,uVar12);
              }
              *(undefined4 *)(CONCAT44(uStack_74,local_78) + lVar22 * 4) = uVar5;
              pbVar3 = (byte *)(lVar20 + 0x35 + lVar19);
              *pbVar3 = *pbVar3 | 4;
              lVar19 = lVar19 + 0x90;
            } while (lVar13 * 0x90 != lVar19);
          }
        }
      }
    }
  }
  uVar18 = local_c0;
  puVar8 = (ulonglong *)param_1[1];
  puVar6 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar6) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_84,4);
    }
    else {
      FUN_14572512c(param_1,&local_84);
    }
  }
  else {
    local_84 = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar6;
  }
  uVar12 = local_84;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
LAB_14085f0fb:
    if (0 < (int)uVar12) {
      lVar13 = 0;
      do {
        lVar20 = *(longlong *)(*(longlong *)puVar1 + (local_88 + lVar13) * 8);
        if (param_5 == '\0') {
          if ((*(byte *)(param_1 + 5) & 1) != 0) {
            *(undefined1 *)(lVar20 + 0x2c) = 0;
            *(undefined4 *)(lVar20 + 0x28) = 0;
            FUN_1400ea36e(lVar20 + 0x20,lVar20 + 0x20);
            *(byte *)(lVar20 + 0x36) = *(byte *)(lVar20 + 0x36) & 0xfb;
          }
        }
        else {
          local_d0 = 0;
          local_d8 = 1;
          FUN_140430222(lVar20 + 0x20,param_1,uVar18,0);
        }
        local_a0 = CONCAT44(local_a0._4_4_,(uint)*(ushort *)(lVar20 + 0x48));
        local_7c = (uint)*(ushort *)(lVar20 + 0x4a);
        local_80 = (uint)*(ushort *)(lVar20 + 0x4c);
        puVar8 = (ulonglong *)param_1[1];
        puVar10 = (undefined4 *)*puVar8 + 1;
        if ((undefined4 *)puVar8[1] < puVar10) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_a0,4);
            uVar18 = local_c0;
          }
          else {
            FUN_14572512c(param_1,&local_a0);
            uVar18 = local_c0;
          }
        }
        else {
          local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)*puVar8);
          *puVar8 = (ulonglong)puVar10;
        }
        puVar8 = (ulonglong *)param_1[1];
        puVar6 = (uint *)*puVar8 + 1;
        if ((uint *)puVar8[1] < puVar6) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_7c,4);
            uVar18 = local_c0;
          }
          else {
            FUN_14572512c(param_1,&local_7c);
            uVar18 = local_c0;
          }
        }
        else {
          local_7c = *(uint *)*puVar8;
          *puVar8 = (ulonglong)puVar6;
        }
        puVar8 = (ulonglong *)param_1[1];
        puVar6 = (uint *)*puVar8 + 1;
        if ((uint *)puVar8[1] < puVar6) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_80,4);
            uVar18 = local_c0;
          }
          else {
            FUN_14572512c(param_1,&local_80);
            uVar18 = local_c0;
          }
        }
        else {
          local_80 = *(uint *)*puVar8;
          *puVar8 = (ulonglong)puVar6;
        }
        *(undefined2 *)(lVar20 + 0x48) = (undefined2)local_a0;
        *(undefined2 *)(lVar20 + 0x4a) = (undefined2)local_7c;
        *(undefined2 *)(lVar20 + 0x4c) = (undefined2)local_80;
        lVar13 = lVar13 + 1;
      } while ((int)lVar13 < (int)local_84);
    }
  }
  else {
    FUN_1417f4044(puVar1,local_84);
    if (0 < (int)local_84) {
      iVar23 = 0;
      uVar12 = local_84;
      do {
        puVar14 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        puVar14[4] = 0;
        puVar14[5] = 0;
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        puVar14[6] = 0;
        *(undefined1 *)((longlong)puVar14 + 0x31) = 0xff;
        *(undefined4 *)((longlong)puVar14 + 0x2d) = 0xffffffff;
        puVar14[7] = DAT_14c845dbc;
        *(undefined4 *)(puVar14 + 8) = DAT_14c845dc4;
        *(undefined4 *)(puVar14 + 9) = 0;
        *(undefined2 *)((longlong)puVar14 + 0x4c) = 0;
        uVar16 = param_2[8];
        param_2[8] = uVar16 + 1;
        if (param_2[9] < uVar16 + 1) {
          FUN_1456bd870(puVar1,uVar16);
          uVar12 = local_84;
        }
        *(undefined8 **)(*(longlong *)puVar1 + (longlong)(int)uVar16 * 8) = puVar14;
        iVar23 = iVar23 + 1;
      } while (iVar23 < (int)uVar12);
      goto LAB_14085f0fb;
    }
  }
  puVar8 = (ulonglong *)param_1[1];
  puVar6 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar6) {
    local_a0 = CONCAT44(local_a0._4_4_,local_b4) & 0xffffffff000000ff;
    (**(code **)(*param_1 + 0x170))(param_1,&local_a0,4);
    uVar12 = (uint)local_a0;
    if (1 < (uint)local_a0) {
      FUN_14572541c(param_1);
      uVar12 = (uint)local_a0;
    }
  }
  else {
    uVar12 = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar6;
  }
  if (uVar12 == 0) {
    if (0 < (longlong)(int)uStack_70) {
      lVar13 = 0;
      do {
        *(undefined4 *)(*(longlong *)(*(longlong *)puVar1 + lVar13 * 8) + 0x34) =
             *(undefined4 *)(CONCAT44(uStack_74,local_78) + lVar13 * 4);
        lVar13 = lVar13 + 1;
      } while ((int)uStack_70 != lVar13);
    }
  }
  else {
    _Dst = *(void **)(param_2 + 10);
    if ((_Dst == (void *)0x0 & *(byte *)(param_1 + 5)) == 1) {
      _Dst = (void *)FUN_14001cc68(0x128);
      memset(_Dst,0,0x128);
      *(void **)(param_2 + 10) = _Dst;
    }
    FUN_14378146e(_Dst,param_1,uVar18,local_88);
    if (0 < (int)uStack_70) {
      lVar13 = 0xd;
      lVar20 = 0;
      do {
        *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 10) + 0xa8) + lVar13 * 4) =
             *(undefined4 *)(CONCAT44(uStack_74,local_78) + lVar20 * 4);
        lVar20 = lVar20 + 1;
        lVar13 = lVar13 + 0x24;
      } while (lVar20 < (int)uStack_70);
    }
  }
  if (CONCAT44(uStack_74,local_78) != 0) {
    FUN_1400020a8();
  }
LAB_14085fa5e:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14085fd86 FUN_14085fd86 body=57 status=ok
// SIG undefined FUN_14085fd86(void)

void FUN_14085fd86(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21928 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21928 = FUN_140002ddd(FUN_146434683,uVar1,L"GbxBrainAspect_Ticket");
  }
  return;
}



// FUNCTION 14085fdc0 FUN_14085fdc0 body=3853 status=ok
// SIG undefined FUN_14085fdc0(void)

/* WARNING: Removing unreachable block (ram,0x000140860cb2) */

void FUN_14085fdc0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined4 *puVar24;
  bool bVar25;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  longlong local_170;
  undefined8 *local_168;
  undefined4 local_160;
  undefined8 *local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  void *local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong *local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong *local_b8;
  int local_b0;
  undefined8 *local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((int)param_1[0x13d] < 1) {
    *(undefined4 *)(param_1 + 0x13d) = 2;
    plVar16 = (longlong *)param_1[0x53];
    if (plVar16 != (longlong *)0x0) {
      lVar10 = FUN_14098e070();
      if ((*(int *)(lVar10 + 0x38) <= *(int *)(plVar16[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar16[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
          lVar10 + 0x30)) {
        lVar10 = param_1[0x53];
        local_188 = param_1;
        local_180 = plVar16;
        if (lVar10 != 0) {
          lVar11 = FUN_140861c56();
          if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
            local_e8 = (longlong *)0x0;
            uStack_e0 = 0;
            lVar11 = *(longlong *)(lVar10 + 0x70);
            if (lVar11 != 0) {
              local_a8 = (undefined8 *)0x0;
              plStack_a0 = (longlong *)0x0;
              uVar22 = 0;
              if ((longlong)*(int *)(lVar11 + 0x88) != 0) {
                lVar23 = *(longlong *)(lVar11 + 0x80);
                lVar11 = (longlong)*(int *)(lVar11 + 0x88) * 0x30;
                do {
                  local_68 = 0;
                  local_98 = 0x3f800000;
                  local_90 = local_90 & 0xffffffff00000000;
                  local_88 = 0;
                  uStack_80 = 0;
                  local_198 = &local_78;
                  FUN_140860ccf(lVar10,lVar23,&local_a8,&local_98);
                  param_1 = local_188;
                  lVar23 = lVar23 + 0x30;
                  lVar11 = lVar11 + -0x30;
                } while (lVar11 != 0);
                plVar16 = local_180;
                if ((longlong)(int)plStack_a0 != 0) {
                  puVar20 = local_a8 + (longlong)(int)plStack_a0 * 7;
                  puVar18 = local_a8;
                  do {
                    local_148 = (code *)*puVar18;
                    FUN_144a3f8b4(&uStack_140,puVar18 + 1);
                    local_120 = *(undefined4 *)(puVar18 + 5);
                    uStack_11c = *(undefined4 *)((longlong)puVar18 + 0x2c);
                    uStack_118 = *(undefined4 *)(puVar18 + 6);
                    uStack_114 = *(undefined4 *)((longlong)puVar18 + 0x34);
                    if (local_148 != (code *)0x0) {
                      puVar15 = (undefined8 *)(**(code **)(*(longlong *)local_148 + 0x328))();
                      local_b8 = (longlong *)0x0;
                      local_b0 = *(int *)(puVar15 + 1);
                      lVar10 = (longlong)local_b0;
                      pvVar4 = (void *)*puVar15;
                      if (lVar10 != 0) {
                        FUN_14574f05a(&local_b8,local_b0,0);
                        memcpy(local_b8,pvVar4,lVar10 << 3);
                        if ((longlong)local_b0 != 0) {
                          local_178 = local_b8 + local_b0;
                          plVar16 = local_b8;
                          do {
                            lVar10 = *plVar16;
                            if (lVar10 != 0) {
                              lVar11 = FUN_1459f03c0();
                              if ((*(int *)(lVar11 + 0x38) <=
                                   *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                                   (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
                                FUN_140861d3c(&local_d8,lVar10 + 0x110,lVar10 + 0x160,lVar10 + 0x180
                                             );
                                if ((longlong)*(int *)(lVar10 + 0x178) != 0) {
                                  plVar21 = *(longlong **)(lVar10 + 0x170);
                                  lVar10 = (longlong)*(int *)(lVar10 + 0x178) * 0x18;
                                  do {
                                    lVar11 = plVar21[1];
                                    if (lVar11 == 0) {
                                      uVar12 = FUN_14012344a();
                                      lVar11 = FUN_14477b664(uVar12);
                                      plVar21[1] = lVar11;
                                    }
                                    if (plVar21[2] == 0) {
                                      if ((lVar11 != 0) && (*plVar21 != 0)) {
                                        plVar3 = *(longlong **)(lVar11 + 0xb8);
                                        if ((plVar3 == (longlong *)0x0) ||
                                           (cVar8 = (**(code **)(*plVar3 + 0x108))(plVar3),
                                           cVar8 == '\0')) {
                                          plVar21[2] = 0;
                                        }
                                        else {
                                          uVar12 = (**(code **)(*plVar3 + 0x110))(plVar3);
                                          lVar11 = FUN_144aff482(uVar12,plVar21);
                                          plVar21[2] = lVar11;
                                          if (lVar11 != 0) goto LAB_14086071b;
                                        }
                                      }
                                    }
                                    else {
LAB_14086071b:
                                      uVar22 = uStack_e0;
                                      lVar11 = (longlong)(int)uStack_e0;
                                      uVar9 = (int)uStack_e0 + 1;
                                      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar9);
                                      if (uStack_e0._4_4_ < uVar9) {
                                        FUN_14574f2f8(&local_e8,uVar22 & 0xffffffff);
                                      }
                                      FUN_140862250(local_e8 + lVar11 * 3,plVar21);
                                    }
                                    plVar21 = plVar21 + 3;
                                    lVar10 = lVar10 + -0x18;
                                  } while (lVar10 != 0);
                                }
                              }
                            }
                            plVar16 = plVar16 + 1;
                          } while (plVar16 != local_178);
                        }
                        if (local_b8 != (longlong *)0x0) {
                          FUN_1400020a8(local_b8);
                        }
                      }
                    }
                    FUN_1447bda9c(local_130,local_128);
                    plVar16 = local_180;
                    if (local_130 != 0) {
                      FUN_1400020a8();
                    }
                    puVar18 = puVar18 + 7;
                  } while (puVar18 != puVar20);
                  uVar22 = (ulonglong)plStack_a0 & 0xffffffff;
                }
              }
              FUN_140861930(local_a8,uVar22);
              if (local_a8 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              if ((longlong)(int)uStack_e0 != 0) {
                plVar3 = local_e8 + (longlong)(int)uStack_e0 * 3;
                plVar21 = param_1 + 0x13e;
                plVar17 = local_e8;
                do {
                  lVar10 = plVar17[1];
                  if (lVar10 == 0) {
                    uVar12 = FUN_14012344a();
                    lVar10 = FUN_14477b664(uVar12);
                    plVar17[1] = lVar10;
                  }
                  lVar11 = plVar17[2];
                  if (lVar11 == 0) {
                    if ((lVar10 != 0) && (*plVar17 != 0)) {
                      plVar16 = *(longlong **)(lVar10 + 0xb8);
                      if ((plVar16 == (longlong *)0x0) ||
                         (cVar8 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar8 == '\0')) {
                        plVar17[2] = 0;
                        param_1 = local_188;
                      }
                      else {
                        uVar12 = (**(code **)(*plVar16 + 0x110))(plVar16);
                        lVar11 = FUN_144aff482(uVar12,plVar17);
                        plVar17[2] = lVar11;
                        param_1 = local_188;
                        if (lVar11 != 0) goto LAB_1408604f7;
                      }
                    }
                  }
                  else {
LAB_1408604f7:
                    if ((longlong)*(int *)(lVar11 + 0x20) != 0) {
                      lVar10 = (longlong)*(int *)(lVar11 + 0x20) * 0x60;
                      lVar11 = *(longlong *)(lVar11 + 0x18) + 0x30;
                      do {
                        iVar2 = (int)param_1[0x13f];
                        *(uint *)(param_1 + 0x13f) = iVar2 + 1U;
                        if (*(uint *)((longlong)param_1 + 0x9fc) < iVar2 + 1U) {
                          FUN_14574f38c(plVar21,iVar2);
                        }
                        lVar23 = (longlong)iVar2 * 0x30 + *plVar21;
                        FUN_1412bd664(lVar23,lVar11);
                        FUN_140862298(lVar23);
                        lVar11 = lVar11 + 0x60;
                        lVar10 = lVar10 + -0x60;
                      } while (lVar10 != 0);
                    }
                  }
                  plVar17 = plVar17 + 3;
                  plVar16 = local_180;
                } while (plVar17 != plVar3);
              }
              if (local_e8 != (longlong *)0x0) {
                FUN_1400020a8(local_e8);
              }
            }
          }
        }
        iVar2 = *(int *)((longlong)param_1 + 0x8e4);
        FUN_140e5e08b(param_1[0x11b],(int)param_1[0x11c]);
        *(undefined4 *)(param_1 + 0x11c) = 0;
        if ((iVar2 < 0) && (*(int *)((longlong)param_1 + 0x8e4) != 0)) {
          FUN_148957f72(param_1 + 0x11b);
        }
        uVar12 = (**(code **)(*param_1 + 0x180))(param_1);
        local_d8 = 0;
        uStack_d0 = 0;
        (**(code **)(*plVar16 + 0x370))(plVar16,uVar12,&DAT_14cb8a42c,&local_d8);
        local_90 = 0;
        local_88 = 0x100000000;
        if ((longlong)(int)uStack_d0 != 0) {
          puVar24 = (undefined4 *)(local_d8 + 0x30);
          lVar10 = (longlong)(int)uStack_d0 * 0x50;
          local_178 = param_1 + 0x11b;
          do {
            bVar25 = (longlong)local_88 < 0;
            local_88 = local_88 & 0xffffffff00000000;
            if (bVar25) {
              FUN_148957fda(&local_98);
            }
            if ((param_1[0x74] != 0) &&
               (plVar21 = (longlong *)param_1[0x75], plVar21 != (longlong *)0x0)) {
              (**(code **)(*plVar21 + 0x10))(plVar21,puVar24,puVar24[4],&local_98);
            }
            if ((int)local_88 == 0) {
              lVar11 = *(longlong *)(puVar24 + -10);
              if (lVar11 == 0) {
                uVar13 = FUN_140927942();
                lVar11 = FUN_14477b664(uVar13);
                *(longlong *)(puVar24 + -10) = lVar11;
              }
              lVar23 = *(longlong *)(puVar24 + -8);
              if (lVar23 == 0) {
                if ((lVar11 != 0) && (*(longlong *)(puVar24 + -0xc) != 0)) {
                  plVar21 = *(longlong **)(lVar11 + 0xb8);
                  if ((plVar21 == (longlong *)0x0) ||
                     (cVar8 = (**(code **)(*plVar21 + 0x108))(plVar21), cVar8 == '\0')) {
                    *(undefined8 *)(puVar24 + -8) = 0;
                  }
                  else {
                    uVar13 = (**(code **)(*plVar21 + 0x110))(plVar21);
                    lVar23 = FUN_144aff482(uVar13,puVar24 + -0xc);
                    *(longlong *)(puVar24 + -8) = lVar23;
                    if (lVar23 != 0) goto LAB_14086020d;
                  }
                }
              }
              else {
LAB_14086020d:
                FUN_140861c24(&local_148,lVar23);
                plVar16 = *(longlong **)(puVar24 + 6);
                if (*(longlong **)(puVar24 + 6) == (longlong *)0x0) {
                  plVar16 = param_1;
                }
                uVar13 = FUN_140fb04f0(&local_148,plVar16);
                local_158 = (undefined8 *)0x0;
                local_150 = 0;
                FUN_1446efa72(&local_158,0,3,0x10);
                puVar18 = local_158;
                local_150 = 3;
                *local_158 = &PTR_LAB_149e020b0;
                LOCK();
                UNLOCK();
                lVar23 = DAT_14c758608 + 1;
                lVar11 = DAT_14c758608 + 1;
                if (lVar23 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar23 = DAT_14c758608 + 2;
                  lVar11 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar11;
                local_158[2] = lVar23;
                *local_158 = &PTR_FUN_14b424980;
                local_158[3] = 0;
                FUN_14485c47a(local_158 + 3,param_1);
                puVar18[4] = FUN_1413ea58e;
                *(undefined4 *)(puVar18 + 5) = 0;
                uVar13 = FUN_140861d4c(uVar13,&local_158);
                FUN_140697a82(uVar13,&local_78);
                FUN_140861dac(&local_148);
                if (local_78 != 0) {
                  puVar14 = (undefined4 *)FUN_14574eebc(local_178);
                  if (uStack_70 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(uStack_70 + 1) = (int)uStack_70[1] + 1;
                    UNLOCK();
                  }
                  plVar16 = *(longlong **)(puVar14 + 6);
                  *(longlong *)(puVar14 + 4) = local_78;
                  *(longlong **)(puVar14 + 6) = uStack_70;
                  if (plVar16 != (longlong *)0x0) {
                    LOCK();
                    plVar21 = plVar16 + 1;
                    *(int *)plVar21 = (int)*plVar21 + -1;
                    UNLOCK();
                    if ((int)*plVar21 == 0) {
                      (**(code **)*plVar16)(plVar16);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar16 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar16 + 0x10))(plVar16);
                      }
                    }
                  }
                  uVar5 = puVar24[1];
                  uVar6 = puVar24[2];
                  uVar7 = puVar24[3];
                  *puVar14 = *puVar24;
                  puVar14[1] = uVar5;
                  puVar14[2] = uVar6;
                  puVar14[3] = uVar7;
                  lVar11 = *(longlong *)(puVar24 + -4);
                  if (lVar11 == 0) {
                    uVar13 = FUN_140927942();
                    lVar11 = FUN_14477b664(uVar13);
                    *(longlong *)(puVar24 + -4) = lVar11;
                  }
                  lVar23 = *(longlong *)(puVar24 + -2);
                  if (lVar23 == 0) {
                    if ((lVar11 != 0) && (*(longlong *)(puVar24 + -6) != 0)) {
                      plVar16 = *(longlong **)(lVar11 + 0xb8);
                      if ((plVar16 == (longlong *)0x0) ||
                         (cVar8 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar8 == '\0')) {
                        *(undefined8 *)(puVar24 + -2) = 0;
                      }
                      else {
                        uVar13 = (**(code **)(*plVar16 + 0x110))(plVar16);
                        lVar23 = FUN_144aff482(uVar13,puVar24 + -6);
                        *(longlong *)(puVar24 + -2) = lVar23;
                        if (lVar23 != 0) goto LAB_14086034e;
                      }
                    }
                  }
                  else {
LAB_14086034e:
                    local_170 = lVar10;
                    FUN_140861c24(&local_148,lVar23);
                    plVar16 = *(longlong **)(puVar24 + 6);
                    if (*(longlong **)(puVar24 + 6) == (longlong *)0x0) {
                      plVar16 = param_1;
                    }
                    uVar13 = FUN_140fb04f0(&local_148,plVar16);
                    local_168 = (undefined8 *)0x0;
                    local_160 = 0;
                    FUN_1446efa72(&local_168,0,3,0x10);
                    puVar18 = local_168;
                    local_160 = 3;
                    *local_168 = &PTR_LAB_149e020b0;
                    LOCK();
                    UNLOCK();
                    lVar11 = DAT_14c758608 + 1;
                    lVar10 = DAT_14c758608 + 1;
                    if (lVar11 == 0) {
                      LOCK();
                      UNLOCK();
                      lVar11 = DAT_14c758608 + 2;
                      lVar10 = DAT_14c758608 + 2;
                    }
                    DAT_14c758608 = lVar10;
                    local_168[2] = lVar11;
                    *local_168 = &PTR_FUN_14b424980;
                    local_168[3] = 0;
                    FUN_14485c47a(local_168 + 3,param_1);
                    puVar18[4] = FUN_1413ea58e;
                    *(undefined4 *)(puVar18 + 5) = 0;
                    uVar13 = FUN_140861d4c(uVar13,&local_168);
                    FUN_140697a82(uVar13,&local_a8);
                    plVar16 = plStack_a0;
                    if ((undefined8 **)(puVar14 + 8) == &local_a8) {
LAB_140860b9f:
                      plVar16 = plStack_a0;
                      param_1 = local_188;
                      if (plStack_a0 != (longlong *)0x0) {
                        LOCK();
                        plVar21 = plStack_a0 + 1;
                        *(int *)plVar21 = (int)*plVar21 + -1;
                        UNLOCK();
                        if ((int)*plVar21 == 0) {
                          (**(code **)*plStack_a0)(plStack_a0);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar16 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (**(code **)(*plVar16 + 0x10))(plVar16);
                          }
                        }
                      }
                    }
                    else {
                      *(undefined8 **)(puVar14 + 8) = local_a8;
                      local_a8 = (undefined8 *)0x0;
                      plVar21 = *(longlong **)(puVar14 + 10);
                      if (plStack_a0 == plVar21) goto LAB_140860b9f;
                      plStack_a0 = (longlong *)0x0;
                      *(longlong **)(puVar14 + 10) = plVar16;
                      if (plVar21 != (longlong *)0x0) {
                        LOCK();
                        plVar16 = plVar21 + 1;
                        *(int *)plVar16 = (int)*plVar16 + -1;
                        UNLOCK();
                        if ((int)*plVar16 == 0) {
                          (**(code **)*plVar21)(plVar21);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar21 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (**(code **)(*plVar21 + 0x10))(plVar21);
                          }
                        }
                        goto LAB_140860b9f;
                      }
                    }
                    FUN_140861dac(&local_148);
                    lVar10 = local_170;
                  }
                }
                plVar21 = uStack_70;
                plVar16 = local_180;
                if (uStack_70 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = uStack_70 + 1;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)*plVar3 == 0) {
                    (**(code **)*uStack_70)(uStack_70);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar21 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    plVar16 = local_180;
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar21 + 0x10))(plVar21);
                      plVar16 = local_180;
                    }
                  }
                }
              }
            }
            puVar24 = puVar24 + 0x14;
            lVar10 = lVar10 + -0x50;
          } while (lVar10 != 0);
        }
        plVar21 = param_1 + 0x11d;
        FUN_140efa5a0(plVar21);
        FUN_1448a8284(plVar21);
        param_1[0x120] = 0;
        FUN_140efa5a0(param_1 + 0x12e);
        FUN_1448a8284(param_1 + 0x12e);
        param_1[0x131] = 0;
        iVar2 = *(int *)((longlong)param_1 + 0x96c);
        FUN_140890760(param_1[300],(int)param_1[0x12d]);
        *(undefined4 *)(param_1 + 0x12d) = 0;
        if ((iVar2 < 0) && (*(int *)((longlong)param_1 + 0x96c) != 0)) {
          FUN_14895818c(param_1 + 300);
        }
        (**(code **)(*plVar16 + 0x378))(plVar16,uVar12,param_1 + 300);
        if ((int)param_1[0x12d] != 0) {
          FUN_14036b79c(plVar21,param_1);
          local_148 = FUN_1459562a4;
          uStack_140 = 0;
          FUN_14574f420(plVar21,&local_78,param_1);
          local_78 = 0;
          uStack_70 = (longlong *)0x0;
          lVar10 = param_1[0x12d];
          if ((longlong)(int)lVar10 != 0) {
            lVar11 = local_188[300];
            lVar19 = 0;
            lVar23 = local_130;
            do {
              local_130 = lVar23;
              puVar18 = (undefined8 *)(lVar11 + 8 + lVar19);
              local_148 = (code *)*puVar18;
              uStack_140 = *(undefined4 *)(puVar18 + 1);
              uStack_13c = *(undefined4 *)((longlong)puVar18 + 0xc);
              local_138 = (void *)0x0;
              uVar9 = *(uint *)(lVar11 + 0x20 + lVar19);
              pvVar4 = *(void **)(lVar11 + 0x18 + lVar19);
              local_130 = CONCAT44(local_130._4_4_,uVar9);
              if ((longlong)(int)uVar9 == 0) {
                local_130 = (ulonglong)uVar9;
              }
              else {
                FUN_1446dd670(&local_138,uVar9,0);
                memcpy(local_138,pvVar4,(longlong)(int)uVar9 * 2);
              }
              plVar16 = uStack_70;
              lVar23 = (longlong)(int)uStack_70;
              uVar9 = (int)uStack_70 + 1;
              uStack_70 = (longlong *)CONCAT44(uStack_70._4_4_,uVar9);
              if (uStack_70._4_4_ < uVar9) {
                FUN_1406f071e(&local_78,(ulonglong)plVar16 & 0xffffffff);
              }
              lVar23 = lVar23 * 0x20;
              puVar24 = (undefined4 *)(local_78 + lVar23);
              *puVar24 = (undefined4)local_148;
              puVar24[1] = local_148._4_4_;
              puVar24[2] = uStack_140;
              puVar24[3] = uStack_13c;
              *(undefined8 *)(local_78 + 0x10 + lVar23) = 0;
              *(void **)(local_78 + 0x10 + lVar23) = local_138;
              *(undefined4 *)(local_78 + 0x18 + lVar23) = (undefined4)local_130;
              *(undefined4 *)(local_78 + 0x1c + lVar23) = local_130._4_4_;
              local_130 = 0;
              lVar23 = local_130;
              local_130 = 0;
              local_138 = (void *)0x0;
              lVar19 = lVar19 + 0x28;
            } while ((longlong)(int)lVar10 * 0x28 != lVar19);
          }
          FUN_1405eb5c0(plVar21,&local_78,1);
          FUN_140861e20(local_78,(ulonglong)uStack_70 & 0xffffffff);
          param_1 = local_188;
          if (local_78 != 0) {
            FUN_1400020a8();
            param_1 = local_188;
          }
        }
        lVar10 = param_1[0x11c];
        if ((longlong)(int)lVar10 != 0) {
          lVar11 = param_1[0x11b];
          lVar23 = 0;
          do {
            if (*(longlong *)(lVar11 + 0x10 + lVar23) != 0) {
              FUN_1406979e8();
            }
            if (*(longlong *)(lVar11 + 0x20 + lVar23) != 0) {
              FUN_1406979e8();
            }
            lVar19 = *(longlong *)(lVar11 + 0x10 + lVar23);
            if (((lVar19 != 0) &&
                (((*(char *)(lVar19 + 0x68) != '\x01' || (*(char *)(lVar19 + 0x69) != '\x01')) ||
                 (*(char *)(lVar19 + 0x6a) != '\x01')))) ||
               ((lVar19 = *(longlong *)(lVar11 + 0x20 + lVar23), lVar19 != 0 &&
                (((*(char *)(lVar19 + 0x68) != '\x01' || (*(char *)(lVar19 + 0x69) != '\x01')) ||
                 (*(char *)(lVar19 + 0x6a) == '\0')))))) {
              *(undefined4 *)(local_188 + 0x13d) = 1;
            }
            lVar23 = lVar23 + 0x30;
          } while ((longlong)(int)lVar10 * 0x30 != lVar23);
        }
        if (local_90 != 0) {
          FUN_1400020a8();
        }
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140860ccf FUN_140860ccf body=1545 status=ok
// SIG undefined FUN_140860ccf(void)

void FUN_140860ccf(longlong *param_1,int *param_2,longlong *param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  longlong *local_148;
  undefined8 local_140;
  ulonglong local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108 [2];
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_f0;
  int local_e8;
  undefined4 local_e4;
  undefined8 local_e0 [2];
  longlong local_d0;
  undefined4 local_c8;
  longlong local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  int local_98;
  undefined4 local_94;
  longlong local_90;
  longlong local_88;
  int local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined2 local_74;
  undefined1 local_72;
  undefined1 local_70;
  undefined2 local_6f;
  undefined1 local_6d;
  undefined4 local_6c;
  char local_68;
  undefined2 local_67;
  undefined1 local_65;
  undefined4 local_64;
  undefined1 local_60;
  undefined8 local_5c [2];
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_148 = param_3;
  local_130 = param_4;
  lVar6 = (**(code **)(*param_1 + 0x2e8))();
  if (lVar6 != 0) {
    if (*(char *)(param_5 + 4) == '\0') {
      uVar11 = *(undefined4 *)(lVar6 + 0x10c);
      uVar8 = *(undefined4 *)(lVar6 + 0x110);
      uVar4 = *(undefined4 *)(lVar6 + 0x114);
      *param_5 = *(undefined4 *)(lVar6 + 0x108);
      param_5[1] = uVar11;
      param_5[2] = uVar8;
      param_5[3] = uVar4;
      *(undefined1 *)(param_5 + 4) = 1;
    }
    local_e0[0] = 0;
    local_90 = FUN_1408613c0();
    if ((local_90 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_90);
    }
    local_158 = local_e0;
    FUN_1408614a6(lVar6,&local_88,&local_90,param_2);
    lVar9 = local_88;
    if ((longlong)local_80 != 0) {
      lVar10 = 0;
      do {
        uVar3 = *(undefined8 *)(lVar9 + lVar10);
        iVar5 = (int)local_148[1];
        *(uint *)(local_148 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)local_148 + 0xc) < iVar5 + 1U) {
          FUN_14574f268(local_148,iVar5);
        }
        puVar1 = (undefined8 *)(*local_148 + (longlong)iVar5 * 0x38);
        *puVar1 = uVar3;
        FUN_144a3f8b4(puVar1 + 1,local_130);
        uVar11 = param_5[1];
        uVar8 = param_5[2];
        uVar4 = param_5[3];
        *(undefined4 *)(puVar1 + 5) = *param_5;
        *(undefined4 *)((longlong)puVar1 + 0x2c) = uVar11;
        *(undefined4 *)(puVar1 + 6) = uVar8;
        *(undefined4 *)((longlong)puVar1 + 0x34) = uVar4;
        lVar10 = lVar10 + 8;
      } while ((longlong)local_80 * 8 != lVar10);
    }
    iVar5 = *(int *)(lVar6 + 0x78);
    if (0 < iVar5) {
      lVar10 = 0x74;
      lVar9 = 0;
      do {
        lVar7 = *(longlong *)(lVar6 + 0x70);
        if ((((*(int *)(lVar7 + -0xc + lVar10) == *param_2) &&
             (*(int *)(lVar7 + -8 + lVar10) == param_2[1])) &&
            (*(int *)(lVar7 + -4 + lVar10) == param_2[2])) &&
           (*(int *)(lVar7 + lVar10) == param_2[3])) {
          local_4c = 0;
          local_b0 = *local_130;
          local_a8 = *(undefined4 *)(local_130 + 1);
          local_a0 = 0;
          local_98 = *(int *)(local_130 + 3);
          if (local_98 == 0) {
            local_94 = 0;
          }
          else {
            local_138 = CONCAT44(local_138._4_4_,local_98);
            local_140 = local_130[2];
            FUN_14753cf4a(&local_a0,local_98,0);
            FUN_14753cfbd(local_a0,local_140,local_138 & 0xffffffff);
          }
          local_158 = local_5c;
          FUN_140860ccf(param_1,lVar7 + lVar10 + -0x3c,local_148,&local_b0);
          iVar5 = *(int *)(lVar6 + 0x78);
        }
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 0x80;
      } while (lVar9 < iVar5);
    }
    FUN_140861620(lVar6,&local_c0);
    lVar6 = local_c0;
    if ((longlong)local_b8 != 0) {
      lVar9 = 0;
      do {
        lVar10 = *(longlong *)(lVar6 + lVar9);
        if (lVar10 != 0) {
          lVar7 = FUN_1408612da();
          if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
             (local_138 = *(ulonglong *)(lVar10 + 0x7d8), local_138 != 0)) {
            FUN_140e50294(lVar10,local_e0);
            FUN_140e500ac(lVar10,local_e0);
            local_f8 = *(undefined4 *)(local_130 + 1);
            local_100 = *local_130;
            local_f0 = 0;
            iVar5 = *(int *)(local_130 + 3);
            uVar3 = local_130[2];
            local_e8 = iVar5;
            if (iVar5 == 0) {
              local_e4 = 0;
            }
            else {
              FUN_14753cf4a(&local_f0,iVar5,0);
              FUN_14753cfbd(local_f0,uVar3,iVar5);
            }
            FUN_14086196e(&local_100,local_e0);
            local_72 = *(undefined1 *)(lVar10 + 0x9b);
            local_74 = *(undefined2 *)(lVar10 + 0x99);
            cVar2 = *(char *)(lVar10 + 0xa0);
            local_76 = *(undefined1 *)(lVar10 + 0xa3);
            local_78 = *(undefined2 *)(lVar10 + 0xa1);
            uVar11 = *(undefined4 *)(lVar10 + 0xa4);
            local_140 = CONCAT71(local_140._1_7_,*(char *)(lVar10 + 0x98));
            uVar8 = *(undefined4 *)(lVar10 + 0x9c);
            if (*(char *)(lVar10 + 0x98) != '\x02') {
              FUN_14040645e(local_e0,local_108,*(undefined4 *)(lVar10 + 0x9c));
              uVar8 = local_108[0];
            }
            if (cVar2 != '\x02') {
              FUN_14040645e(local_e0,local_108,uVar11);
              uVar11 = local_108[0];
            }
            iVar5 = local_e8;
            lVar10 = local_f0;
            local_70 = (undefined1)local_140;
            local_6f = local_74;
            local_6d = local_72;
            local_67 = local_78;
            local_65 = local_76;
            local_60 = 1;
            local_128 = local_100;
            local_120 = local_f8;
            local_118 = 0;
            local_110 = local_e8;
            local_6c = uVar8;
            local_68 = cVar2;
            local_64 = uVar11;
            if (local_e8 == 0) {
              local_10c = 0;
            }
            else {
              FUN_14753cf4a(&local_118,local_e8,0);
              FUN_14753cfbd(local_118,lVar10,iVar5);
            }
            local_158 = (undefined8 *)&local_70;
            FUN_140860ccf(local_138,param_2,local_148,&local_128);
            FUN_1447bda9c(local_f0,local_e8);
            if (local_f0 != 0) {
              FUN_1400020a8();
            }
            FUN_1447bda9c(local_d0,local_c8);
            if (local_d0 != 0) {
              FUN_1400020a8();
            }
          }
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)local_b8 * 8 != lVar9);
    }
    if (local_c0 != 0) {
      FUN_1400020a8(local_c0);
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  puVar1 = local_130;
  FUN_1447bda9c(local_130[2],*(undefined4 *)(local_130 + 3));
  if (puVar1[2] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_5 + 4) == '\x01') {
    *(undefined1 *)(param_5 + 4) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408612da FUN_1408612da body=228 status=ok
// SIG undefined FUN_1408612da(void)

longlong FUN_1408612da(void)

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
  if (DAT_14cab3ec8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14179c8d4;
    local_38 = &LAB_14758597d;
    local_40 = &LAB_14634327b;
    local_48 = L"EditorPerProjectUserSettings";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x7e0;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneSubSection",&DAT_14cab3ec8,FUN_146343254);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3ec8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408613c0 FUN_1408613c0 body=228 status=ok
// SIG undefined FUN_1408613c0(void)

longlong FUN_1408613c0(void)

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
  if (DAT_14cb63300 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1410f863e;
    local_38 = &LAB_1486f1a73;
    local_40 = &LAB_145859f72;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSequenceDialogTrack",&DAT_14cb63300,&DAT_1486f1a72);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb63300;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408614a6 FUN_1408614a6 body=377 status=ok
// SIG undefined FUN_1408614a6(void)

longlong *
FUN_1408614a6(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = FUN_140b2f12c(0,param_4);
  if (((iVar3 != -1) && (lVar4 = (longlong)iVar3 * 0x30 + *(longlong *)(param_1 + 0x80), lVar4 != 0)
      ) && (iVar3 = *(int *)(lVar4 + 0x28), (longlong)iVar3 != 0)) {
    lVar4 = *(longlong *)(lVar4 + 0x20);
    lVar7 = 0;
    do {
      plVar6 = (longlong *)*param_3;
      if (plVar6 == (longlong *)0x0) {
LAB_1408615ce:
        if ((*param_5 == 0) ||
           ((**(code **)(**(longlong **)(lVar4 + lVar7) + 0x2d0))
                      (*(longlong **)(lVar4 + lVar7),&local_50), local_50 == *param_5)) {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_14574f0bc(param_2,iVar1);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar4 + lVar7);
        }
      }
      else if (plVar6[0x22] == 0) {
        (**(code **)(*plVar6 + 1000))(plVar6);
        if (plVar6[0x22] == 0) goto LAB_1408615ce;
        plVar6 = (longlong *)*param_3;
        if (plVar6 != (longlong *)0x0) goto LAB_14086152e;
      }
      else {
LAB_14086152e:
        lVar2 = *(longlong *)(*(longlong *)(lVar4 + lVar7) + 0x10);
        lVar5 = FUN_1402984e6();
        if ((((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= (int)plVar6[7])) &&
            ((*(longlong *)(plVar6[6] + (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30 &&
             ((lVar5 = *param_3, lVar5 != 0 && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38)))))
            )) && (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
                   == lVar5 + 0x30)) goto LAB_1408615ce;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar3 * 8 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140861620 FUN_140861620 body=430 status=ok
// SIG undefined FUN_140861620(void)

longlong * FUN_140861620(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < *(int *)(param_1 + 0xe8)) {
    lVar7 = 0;
    do {
      puVar5 = (undefined8 *)
               (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xe0) + lVar7 * 8) + 0x328))();
      uVar1 = *(uint *)(puVar5 + 1);
      if ((longlong)(int)uVar1 != 0) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + uVar1;
        if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar1) {
          FUN_1408617ce(param_2,iVar2);
        }
        memcpy((void *)((longlong)iVar2 * 8 + *param_2),(void *)*puVar5,(longlong)(int)uVar1 << 3);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0xe8));
  }
  if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
    puVar5 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0xf0) + 0x328))();
    uVar1 = *(uint *)(puVar5 + 1);
    if ((longlong)(int)uVar1 != 0) {
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + uVar1;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar1) {
        FUN_1408617ce(param_2,iVar2);
      }
      memcpy((void *)((longlong)iVar2 * 8 + *param_2),(void *)*puVar5,(longlong)(int)uVar1 << 3);
    }
  }
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x80);
    lVar6 = (longlong)*(int *)(param_1 + 0x88) * 0x30 + lVar7;
    do {
      iVar2 = *(int *)(lVar7 + 0x28);
      if ((longlong)iVar2 != 0) {
        lVar4 = *(longlong *)(lVar7 + 0x20);
        lVar8 = 0;
        do {
          puVar5 = (undefined8 *)(**(code **)(**(longlong **)(lVar4 + lVar8) + 0x328))();
          uVar1 = *(uint *)(puVar5 + 1);
          if ((longlong)(int)uVar1 != 0) {
            iVar3 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar3 + uVar1;
            if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar3) < uVar1) {
              FUN_1408617ce(param_2,iVar3);
            }
            memcpy((void *)((longlong)iVar3 * 8 + *param_2),(void *)*puVar5,
                   (longlong)(int)uVar1 << 3);
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar2 * 8 != lVar8);
      }
      lVar7 = lVar7 + 0x30;
    } while (lVar7 != lVar6);
  }
  return param_2;
}



// FUNCTION 1408617ce FUN_1408617ce body=353 status=ok
// SIG undefined FUN_1408617ce(void)

void FUN_1408617ce(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140861855;
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
LAB_140861855:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140861930 FUN_140861930 body=62 status=ok
// SIG undefined FUN_140861930(void)

void FUN_140861930(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      FUN_1447bda9c(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14086196e FUN_14086196e body=589 status=ok
// SIG undefined FUN_14086196e(void)

void FUN_14086196e(float *param_1,float *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  
  fVar4 = param_1[6];
  lVar5 = (longlong)(int)fVar4;
  if (lVar5 != 0) {
    if (param_2[1] == 0.0) {
      fVar7 = *param_2;
      if ((ABS(param_2[2]) <= 1e-08) && (ABS(fVar7 + -1.0) <= 1e-08)) goto LAB_140861a1a;
    }
    else {
      fVar7 = *param_2;
    }
    uVar6 = -(ulonglong)(1e-08 < ABS((double)fVar7));
    uVar1 = *(undefined8 *)(param_2 + 1);
    param_1[6] = (float)((int)fVar4 + 1);
    if ((uint)param_1[7] < (uint)((int)fVar4 + 1)) {
      FUN_140407554(param_1 + 4,fVar4);
    }
    lVar2 = *(longlong *)(param_1 + 4);
    *(ulonglong *)(lVar2 + lVar5 * 0x18) =
         (ulonglong)(~(uint)(uVar6 >> 0x20) & 0xfff90000) << 0x20 | (ulonglong)(double)fVar7 & uVar6
    ;
    *(undefined8 *)(lVar2 + 8 + lVar5 * 0x18) = uVar1;
    *(undefined8 *)(lVar2 + 0x10 + lVar5 * 0x18) = 0;
    goto LAB_140861a1a;
  }
  if ((param_2[1] != 0.0) || (1e-08 < ABS(param_2[2]))) {
    fVar4 = *param_2;
  }
  else {
    fVar4 = *param_2;
    if (ABS(fVar4 + -1.0) <= 1e-08) goto LAB_140861a1a;
  }
  fVar7 = 1.0;
  if ((fVar4 != 1.0) || (NAN(fVar4))) {
    iVar3 = _finite((double)fVar4);
    fVar7 = *param_2;
    if (iVar3 == 0) goto LAB_1408619b7;
    dVar12 = ((double)param_1[2] + (double)(int)param_1[1]) * (double)fVar7;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = dVar12;
    auVar13 = roundpd(auVar13,auVar13,1);
    dVar10 = auVar13._0_8_;
    dVar12 = dVar12 - dVar10;
    if (2147483647.0 <= dVar10) {
      dVar10 = 2147483647.0;
    }
    if (dVar10 <= -2147483648.0) {
      dVar10 = -2147483648.0;
    }
    fVar4 = (float)(int)dVar10;
    fVar9 = (float)dVar12;
    if (0.99999994 <= fVar9) {
      fVar9 = 0.99999994;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fVar9 = fVar9 + 0.5 + -0.5;
    if (0.99999994 <= fVar9) {
      fVar9 = 0.99999994;
    }
    auVar13 = ZEXT416((uint)fVar9);
    if (fVar9 <= 0.0) {
      auVar13 = ZEXT816(0) << 0x20;
    }
  }
  else {
LAB_1408619b7:
    fVar4 = param_1[1];
    auVar13 = ZEXT416((uint)param_1[2]);
  }
  auVar11._4_12_ = auVar13._4_12_;
  auVar11._0_4_ = auVar13._0_4_ + param_2[2];
  auVar13 = roundss(ZEXT416(0),auVar11,9);
  fVar9 = param_2[1];
  fVar8 = (auVar11._0_4_ - auVar13._0_4_) + 0.5 + -0.5;
  if (0.99999994 <= fVar8) {
    fVar8 = 0.99999994;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  *param_1 = fVar7 * *param_1;
  param_1[1] = (float)((int)fVar4 + (int)fVar9 +
                      ((int)ROUND(auVar11._0_4_ + auVar11._0_4_ + -0.5) >> 1));
  param_1[2] = fVar8;
LAB_140861a1a:
  FUN_140861bbc(param_1 + 4,param_2 + 4);
  return;
}



// FUNCTION 140861bbc FUN_140861bbc body=95 status=ok
// SIG undefined FUN_140861bbc(void)

void FUN_140861bbc(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_140407554(param_1,iVar2);
  }
  FUN_14753cfbd((longlong)iVar2 * 0x18 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 140861c24 FUN_140861c24 body=49 status=ok
// SIG undefined FUN_140861c24(void)

void FUN_140861c24(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0x10000;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}



// FUNCTION 140861c56 FUN_140861c56 body=228 status=ok
// SIG undefined FUN_140861c56(void)

longlong FUN_140861c56(void)

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
  if (DAT_14cb60000 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464eaa2e;
    local_38 = &LAB_1486c1029;
    local_40 = &LAB_1464eaa33;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x1a0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxLevelSequence",&DAT_14cb60000,&DAT_1486c1028);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb60000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140861d3c FUN_140861d3c body=15 status=ok
// SIG undefined FUN_140861d3c(void)

undefined8 *
FUN_140861d3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_2;
  return param_1;
}



// FUNCTION 140861d4c FUN_140861d4c body=95 status=ok
// SIG undefined FUN_140861d4c(void)

longlong FUN_140861d4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  FUN_14009d848(param_1 + 0x30);
  if ((int)param_2[1] != 0) {
    puVar1 = (undefined8 *)*param_2;
    if (puVar1 == (undefined8 *)0x0) {
      return param_1;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_2,0,0,0x10);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 140861dac FUN_140861dac body=116 status=ok
// SIG undefined FUN_140861dac(void)

void FUN_140861dac(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_140861e20(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140861e20 FUN_140861e20 body=49 status=ok
// SIG undefined FUN_140861e20(void)

void FUN_140861e20(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140861e52 FUN_140861e52 body=77 status=ok
// SIG undefined FUN_140861e52(void)

void FUN_140861e52(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  FUN_14064d948(*(undefined8 *)(param_1 + 0x2a0));
  if (*(int *)(param_4 + 0x10) < 1) {
    FUN_14064d948(*(undefined8 *)(param_1 + 0x60),param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 140861ea0 FUN_140861ea0 body=628 status=ok
// SIG undefined FUN_140861ea0(void)

void FUN_140861ea0(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_5c [4];
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0x70);
  local_70 = param_4;
  if (lVar5 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    if (0 < *(int *)(lVar5 + 0x68)) {
      iVar12 = 0;
      local_78 = param_3;
      do {
        lVar7 = FUN_14574ef0a(lVar5,iVar12);
        lVar5 = *(longlong *)(lVar7 + 0xc0);
        if (lVar5 != 0) {
          uVar8 = FUN_14574ef74();
          plVar9 = (longlong *)FUN_144718840(lVar5,uVar8);
          if (plVar9 != (longlong *)0x0) {
            bVar14 = (longlong)uStack_50 < 0;
            uStack_50 = uStack_50 & 0xffffffff00000000;
            if (bVar14) {
              FUN_1489553c0(&local_58);
            }
            (**(code **)(*plVar9 + 0x10))(plVar9,&local_58,param_2);
            local_68 = (**(code **)(*plVar9 + 0x18))(plVar9,param_2);
            if ((longlong)(int)uStack_50 != 0) {
              lVar6 = (longlong)(int)uStack_50 * 0x30 + local_58;
              lVar5 = local_58;
              do {
                lVar10 = FUN_14574ef1a(local_70);
                FUN_140862116(lVar10,lVar5);
                FUN_140862116(lVar10 + 0x18,lVar5 + 0x18);
                uVar2 = *(undefined4 *)(lVar7 + 0xa4);
                uVar3 = *(undefined4 *)(lVar7 + 0xa8);
                uVar4 = *(undefined4 *)(lVar7 + 0xac);
                *(undefined4 *)(lVar10 + 0x30) = *(undefined4 *)(lVar7 + 0xa0);
                *(undefined4 *)(lVar10 + 0x34) = uVar2;
                *(undefined4 *)(lVar10 + 0x38) = uVar3;
                *(undefined4 *)(lVar10 + 0x3c) = uVar4;
                *(undefined4 *)(lVar10 + 0x40) = *local_78;
                *(undefined8 *)(lVar10 + 0x48) = local_68;
                lVar5 = lVar5 + 0x30;
              } while (lVar5 != lVar6);
            }
          }
        }
        iVar12 = iVar12 + 1;
        lVar5 = *(longlong *)(param_1 + 0x70);
      } while (iVar12 < *(int *)(lVar5 + 0x68));
    }
    if ((longlong)*(int *)(lVar5 + 0xe8) != 0) {
      plVar13 = *(longlong **)(lVar5 + 0xe0);
      plVar9 = plVar13 + *(int *)(lVar5 + 0xe8);
      do {
        plVar1 = (longlong *)*plVar13;
        if (plVar1 != (longlong *)0x0) {
          lVar5 = FUN_14086216a();
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
              == lVar5 + 0x30)) {
            puVar11 = (undefined8 *)(**(code **)(*plVar1 + 0x328))(plVar1);
            iVar12 = *(int *)(puVar11 + 1);
            if ((longlong)iVar12 != 0) {
              local_78 = (undefined4 *)*puVar11;
              lVar5 = 0;
              do {
                lVar7 = *(longlong *)((longlong)local_78 + lVar5);
                plVar1 = *(longlong **)(lVar7 + 0x7d8);
                if (plVar1 != (longlong *)0x0) {
                  lVar6 = FUN_14098e070();
                  if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                      lVar6 + 0x30)) {
                    FUN_14029898a(lVar7,local_5c);
                    (**(code **)(*plVar1 + 0x370))(plVar1,param_2,local_5c,local_70);
                  }
                }
                lVar5 = lVar5 + 8;
              } while ((longlong)iVar12 << 3 != lVar5);
            }
          }
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar9);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140862116 FUN_140862116 body=84 status=ok
// SIG undefined FUN_140862116(void)

longlong * FUN_140862116(longlong *param_1,longlong *param_2)

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



// FUNCTION 14086216a FUN_14086216a body=228 status=ok
// SIG undefined FUN_14086216a(void)

longlong FUN_14086216a(void)

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
  if (DAT_14cab3fe0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1410f863e;
    local_38 = &LAB_147588291;
    local_40 = FUN_1463436b6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x108;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneSubTrack",&DAT_14cab3fe0,&DAT_147588290);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3fe0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


