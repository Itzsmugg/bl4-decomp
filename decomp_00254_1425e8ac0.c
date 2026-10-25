// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1425e8ac0 FUN_1425e8ac0 body=3 status=ok
// SIG undefined FUN_1425e8ac0(void)

undefined1 FUN_1425e8ac0(void)

{
  return 1;
}



// FUNCTION 1425e8ad0 FUN_1425e8ad0 body=6 status=ok
// SIG undefined FUN_1425e8ad0(void)

undefined8 FUN_1425e8ad0(void)

{
  return 5;
}



// FUNCTION 1425e8ae0 FUN_1425e8ae0 body=6 status=ok
// SIG undefined FUN_1425e8ae0(void)

undefined8 FUN_1425e8ae0(void)

{
  return 0x30;
}



// FUNCTION 1425e8af0 FUN_1425e8af0 body=6 status=ok
// SIG undefined FUN_1425e8af0(void)

undefined8 FUN_1425e8af0(void)

{
  return 0x10;
}



// FUNCTION 1425e8b00 FUN_1425e8b00 body=38 status=ok
// SIG undefined FUN_1425e8b00(void)

undefined8 FUN_1425e8b00(undefined8 param_1,int param_2)

{
  FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425e8b30 FUN_1425e8b30 body=46 status=ok
// SIG undefined FUN_1425e8b30(void)

void FUN_1425e8b30(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      FUN_142502220();
    }
    FUN_1401773f0(param_1);
    return;
  }
  return;
}



// FUNCTION 1425e8b60 FUN_1425e8b60 body=262 status=ok
// SIG undefined FUN_1425e8b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425e8b60(undefined8 param_1,int param_2,int param_3,undefined2 *param_4,undefined4 param_5
                  ,byte *param_6,int *param_7,undefined4 *param_8)

{
  char cVar1;
  undefined1 in_XMM0 [16];
  double dVar2;
  undefined1 auStack_98 [32];
  int *local_78;
  undefined4 *local_70;
  undefined2 *local_60;
  undefined4 local_58;
  undefined2 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  dVar2 = in_XMM0._0_8_;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)dVar2 < 0) {
    dVar2 = (double)((ulonglong)dVar2 ^ DAT_149931e80);
  }
  *param_6 = in_XMM0[7] >> 7;
  if ((param_2 == 3) && (param_3 == 0)) {
    *(undefined1 *)param_4 = 0;
    *param_7 = 0;
  }
  else if ((dVar2 != 0.0) || (NAN(dVar2))) {
    if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1425e8c80();
    }
    local_48 = param_5;
    local_70 = param_8;
    local_78 = param_7;
    local_50 = param_4;
    cVar1 = FUN_1426b2950(dVar2,0,0,&local_50);
    if (cVar1 == '\0') {
      local_58 = param_5;
      local_70 = param_8;
      local_78 = param_7;
      local_60 = param_4;
      FUN_1426b3300(dVar2,0,param_3,&local_60);
      *(undefined1 *)((longlong)param_4 + (longlong)*param_7) = 0;
    }
  }
  else {
    *param_4 = 0x30;
    *param_7 = 1;
    *param_8 = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
}



// FUNCTION 1425e8c80 FUN_1425e8c80 body=10 status=ok
// SIG undefined FUN_1425e8c80(void)

void FUN_1425e8c80(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



// FUNCTION 1425e8c90 FUN_1425e8c90 body=23 status=ok
// SIG undefined FUN_1425e8c90(void)

void FUN_1425e8c90(void)

{
  FUN_1425e8cb0();
  return;
}



// FUNCTION 1425e8cb0 FUN_1425e8cb0 body=3497 status=ok
// SIG undefined FUN_1425e8cb0(void)

void FUN_1425e8cb0(uint *param_1,ushort *param_2,int param_3,char param_4,int *param_5)

{
  ushort uVar1;
  ushort *puVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  ushort *puVar8;
  ushort *puVar9;
  undefined1 uVar10;
  ushort uVar11;
  uint uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ushort *puVar17;
  ushort uVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  ushort *puVar22;
  undefined1 auStack_428 [32];
  undefined1 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined1 *local_3f0;
  char *local_3e8;
  char local_3d5;
  undefined4 local_3d4;
  uint local_3d0;
  int local_3cc;
  int local_3c8;
  uint local_3c4;
  uint local_3c0;
  ushort local_3bc;
  ushort local_3ba;
  char *local_3b8;
  int local_3b0;
  char *local_3a8;
  int local_3a0;
  char *local_398;
  undefined1 local_389;
  ushort *local_388;
  ushort *local_380;
  char local_378 [792];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_428;
  puVar2 = param_2 + param_3;
  *param_5 = 0;
  local_388 = puVar2;
  local_380 = param_2;
  if (param_3 == 0) goto LAB_1425e9858;
  local_3d0 = *param_1;
  uVar14 = (ulonglong)*param_2;
  cVar4 = (char)((local_3d0 & 0x10) >> 4);
  local_3d5 = param_4;
  if ((((local_3d0 & 8) != 0) || (puVar9 = param_2, cVar4 != '\0')) &&
     (local_380 = param_2, cVar3 = FUN_1425e9f50(uVar14), puVar9 = param_2, cVar3 != '\0')) {
    lVar21 = 0;
    do {
      if ((longlong)param_3 * 2 + -2 == lVar21) {
        *param_5 = param_3;
        goto LAB_1425e9858;
      }
      uVar14 = (ulonglong)*(ushort *)((longlong)param_2 + lVar21 + 2);
      cVar3 = FUN_1425e9f50(uVar14);
      lVar21 = lVar21 + 2;
    } while (cVar3 != '\0');
    puVar9 = (ushort *)((longlong)param_2 + lVar21);
    if (((local_3d0 & 8) == 0) && (local_380 = puVar9, lVar21 != 0)) goto LAB_1425e9858;
  }
  local_380 = puVar9;
  if (((short)uVar14 == 0x2d) || ((int)uVar14 == 0x2b)) {
    uVar13 = (undefined4)CONCAT71((int7)(uVar14 >> 8),(short)uVar14 == 0x2d);
    puVar9 = local_380 + 1;
    local_380 = puVar9;
    if (puVar9 != puVar2) {
      lVar21 = 0;
      do {
        cVar3 = FUN_1425e9f50(*puVar9);
        if (cVar3 == '\0') {
          if (((local_3d0 & 0x20) != 0) || (lVar21 == 0)) goto LAB_1425e8e1d;
          break;
        }
        puVar9 = puVar9 + 1;
        lVar21 = lVar21 + -1;
      } while (puVar9 != puVar2);
    }
    goto LAB_1425e9858;
  }
  uVar13 = 0;
  puVar9 = local_380;
LAB_1425e8e1d:
  local_380 = puVar9;
  pcVar7 = *(char **)(param_1 + 6);
  if (pcVar7 == (char *)0x0) {
    pcVar7 = *(char **)(param_1 + 8);
    if (pcVar7 == (char *)0x0) {
      uVar18 = *local_380;
    }
    else {
      if ((local_3d0 & 0x40) != 0) goto LAB_1425e9a7a;
      uVar18 = *local_380;
LAB_1425e8e9d:
      puVar9 = local_380;
      if (*pcVar7 == (char)uVar18) {
        while( true ) {
          puVar9 = puVar9 + 1;
          pcVar7 = pcVar7 + 1;
          if (*pcVar7 == '\0') break;
          if ((puVar9 == puVar2) || (*pcVar7 != (char)*puVar9)) goto LAB_1425e9858;
        }
        local_380 = puVar9;
        if (cVar4 != '\0' || (char)((local_3d0 & 4) >> 2) != '\0') {
          puVar17 = puVar9;
          if (((local_3d0 & 4) != 0) || (puVar9 == puVar2)) goto LAB_1425e952a;
          cVar4 = FUN_1425e9f50(*puVar9);
          goto joined_r0x0001425e903b;
        }
        puVar17 = puVar2;
        if (puVar9 == puVar2) goto LAB_1425e952a;
        goto LAB_1425e9858;
      }
    }
  }
  else {
    if ((local_3d0 & 0x40) != 0) {
LAB_1425e9a7a:
                    /* WARNING: Subroutine does not return */
      FUN_1425e8c80();
    }
    uVar18 = *local_380;
    puVar9 = local_380;
    if (*pcVar7 == (char)uVar18) {
      while( true ) {
        puVar9 = puVar9 + 1;
        pcVar7 = pcVar7 + 1;
        if (*pcVar7 == '\0') break;
        if ((puVar9 == puVar2) || (*pcVar7 != (char)*puVar9)) goto LAB_1425e9858;
      }
      local_380 = puVar9;
      if (cVar4 != '\0' || (char)((local_3d0 & 4) >> 2) != '\0') {
        puVar17 = puVar9;
        if (((local_3d0 & 4) != 0) || (puVar9 == puVar2)) goto LAB_1425e9390;
        cVar4 = FUN_1425e9f50(*puVar9);
        goto joined_r0x0001425e8fd4;
      }
      puVar17 = puVar2;
      if (puVar9 == puVar2) goto LAB_1425e9390;
      goto LAB_1425e9858;
    }
    pcVar7 = *(char **)(param_1 + 8);
    if (pcVar7 != (char *)0x0) goto LAB_1425e8e9d;
  }
  uVar14 = 0;
  if (uVar18 == 0x30) {
    uVar11 = (ushort)param_1[10];
    puVar9 = local_380 + 1;
    if (uVar11 == 0) {
LAB_1425e8f3b:
      local_380 = puVar9;
      puVar9 = local_380;
      if (local_380 != puVar2) {
LAB_1425e8f44:
        uVar1 = *local_380;
        puVar17 = local_380;
        if ((local_3d0 & 0x81) == 0) goto joined_r0x0001425e907c;
        if (uVar1 == 0x30) {
          do {
            puVar8 = puVar17 + 1;
            puVar9 = local_380;
            if (uVar11 == 0) {
LAB_1425e9261:
              if (puVar8 == puVar2) goto LAB_1425e92a3;
            }
            else {
              if (puVar8 == puVar2) goto LAB_1425e92a3;
              puVar17 = puVar17 + 2;
              if (puVar17 != puVar2) {
                if (*puVar8 == uVar11) {
                  puVar22 = puVar17;
                  if (9 < *puVar17 - 0x30) {
                    puVar22 = puVar8;
                  }
                  if (*puVar17 < 0x3a) {
                    puVar8 = puVar22;
                  }
                }
                goto LAB_1425e9261;
              }
            }
            uVar1 = *puVar8;
            puVar17 = puVar8;
joined_r0x0001425e907c:
          } while (uVar1 == 0x30);
        }
        else if ((uVar1 == 0x78) || (uVar1 == 0x58)) {
          puVar9 = local_380 + 1;
          local_380 = puVar9;
          if ((char)local_3d0 < '\0') {
            if (puVar9 == puVar2) goto LAB_1425e9858;
            cVar4 = FUN_1425ea0d0(puVar9,puVar2,uVar11,(local_3d0 & 4) >> 2);
            uVar10 = 1;
            if (cVar4 == '\0') goto LAB_1425e945d;
          }
          else {
            if (puVar9 == puVar2) goto LAB_1425e9858;
LAB_1425e945d:
            uVar18 = *puVar9;
            if ((0x3f < uVar18 || 9 < uVar18 - 0x30) &&
               ((uVar5 = uVar18 - 0x41, 0x25 < (ushort)uVar5 ||
                ((0x3f0000003fU >> ((ulonglong)(uVar5 & 0xffff) & 0x3f) & 1) == 0))))
            goto LAB_1425e9858;
            uVar10 = 0;
          }
          uVar5 = local_3d0;
          local_3f8 = *(undefined8 *)(param_1 + 4);
          local_3e8 = local_378;
          local_3f0 = (undefined1 *)CONCAT71(local_3f0._1_7_,local_3d5);
          local_400 = CONCAT71(local_400._1_7_,(char)((local_3d0 & 4) >> 2));
          local_408 = uVar10;
          FUN_1425ea680(&local_380,puVar2,uVar13,uVar11);
          puVar9 = local_380;
          if (local_378[0] == '\0') {
            puVar17 = local_380;
            if (((uVar5 & 0x10) != 0) && (local_380 != puVar2)) {
              cVar4 = FUN_1425e9f50(*local_380);
              while ((puVar17 = puVar9, cVar4 != '\0' &&
                     (puVar9 = puVar9 + 1, puVar17 = puVar2, puVar9 != puVar2))) {
                cVar4 = FUN_1425e9f50(*puVar9);
              }
            }
            *param_5 = (int)((ulonglong)((longlong)puVar17 - (longlong)param_2) >> 1);
          }
          goto LAB_1425e9858;
        }
        uVar5 = (local_3d0 & 2) >> 1;
        uVar11 = *puVar17;
        goto LAB_1425e909c;
      }
    }
    else if (puVar9 != puVar2) {
      puVar17 = local_380 + 2;
      local_380 = puVar9;
      if (puVar17 != puVar2) {
        if (((*puVar9 == uVar11) && (*puVar17 < 0x3a)) && (*puVar17 - 0x30 < 10)) {
          puVar9 = puVar17;
        }
        goto LAB_1425e8f3b;
      }
      goto LAB_1425e8f44;
    }
LAB_1425e92a3:
    local_380 = puVar9;
    *param_5 = param_3;
    goto LAB_1425e9858;
  }
  uVar5 = 0;
  puVar17 = local_380;
  uVar11 = uVar18;
LAB_1425e909c:
  local_3d4 = uVar13;
  local_3ba = uVar18;
  if ((ushort)(uVar11 - 0x30) < 10) {
    uVar18 = (ushort)param_1[10];
    iVar19 = 0;
    iVar20 = 0;
    iVar16 = 0;
    uVar14 = 0;
    do {
      if (iVar20 < 0x304) {
        lVar21 = (longlong)iVar19;
        iVar19 = iVar19 + 1;
        local_378[lVar21] = (char)uVar11;
        iVar20 = iVar20 + 1;
        if ((char)uVar5 != '\0') goto LAB_1425e910d;
LAB_1425e9176:
        uVar5 = 0;
        if (uVar18 == 0) goto LAB_1425e917d;
LAB_1425e911a:
        puVar9 = puVar17 + 1;
        if ((0x39 < *puVar17) || (9 < *puVar17 - 0x30)) {
LAB_1425e90d0:
          puVar17 = puVar9;
          if (puVar9 != puVar2) goto LAB_1425e90d9;
          goto LAB_1425e918d;
        }
        if (puVar9 == puVar2) goto LAB_1425e918d;
        puVar8 = puVar17 + 2;
        puVar17 = puVar9;
        if (puVar8 != puVar2) {
          if (*puVar9 == uVar18) {
            puVar17 = puVar8;
            if (9 < *puVar8 - 0x30) {
              puVar17 = puVar9;
            }
            if (*puVar8 < 0x3a) {
              puVar9 = puVar17;
            }
          }
          goto LAB_1425e90d0;
        }
      }
      else {
        iVar16 = iVar16 + 1;
        uVar14 = (ulonglong)(byte)((byte)uVar14 | uVar11 != 0x30);
        if ((char)uVar5 == '\0') goto LAB_1425e9176;
LAB_1425e910d:
        uVar5 = (uint)(*puVar17 < 0x38);
        if (uVar18 != 0) goto LAB_1425e911a;
LAB_1425e917d:
        puVar17 = puVar17 + 1;
        if (puVar17 == puVar2) {
LAB_1425e918d:
          iVar15 = 0;
          puVar9 = puVar2;
          goto LAB_1425e919f;
        }
      }
LAB_1425e90d9:
      uVar11 = *puVar17;
      local_380 = puVar17;
    } while ((ushort)(uVar11 - 0x30) < 10);
  }
  else {
    iVar16 = 0;
    iVar20 = 0;
    iVar19 = 0;
    local_380 = puVar17;
  }
  uVar12 = uVar5;
  if (iVar20 == 0) {
    uVar12 = 0;
  }
  iVar15 = 0;
  if (uVar11 == 0x2e) {
    if (((char)uVar12 != '\0') && ((local_3d0 & 4) == 0)) goto LAB_1425e9858;
    if ((char)uVar12 == '\0') {
      local_3c4 = (uint)uVar14;
      uVar18 = (ushort)param_1[10];
      local_3cc = iVar19;
      local_3c8 = iVar16;
      local_3c0 = uVar12;
      cVar3 = FUN_1425ea000(&local_380,uVar18,10,&local_388);
      iVar16 = 0;
      iVar15 = 0;
      if (cVar3 == '\0') {
        uVar11 = *local_380;
        if ((iVar20 == 0) && (uVar11 == 0x30)) {
          iVar16 = 0;
          do {
            cVar3 = FUN_1425ea000(&local_380,uVar18,10,&local_388);
            if (cVar3 != '\0') {
              *param_5 = (int)((ulonglong)((longlong)local_380 - (longlong)param_2) >> 1);
              goto LAB_1425e9858;
            }
            iVar16 = iVar16 + -1;
            uVar11 = *local_380;
          } while (uVar11 == 0x30);
        }
        iVar19 = local_3cc;
        iVar15 = iVar16;
        iVar16 = local_3c8;
        uVar12 = local_3c0;
        if ((ushort)(uVar11 - 0x30) < 10) {
          uVar14 = (ulonglong)local_3c4;
          do {
            if (iVar20 < 0x304) {
              lVar21 = (longlong)iVar19;
              iVar19 = iVar19 + 1;
              local_378[lVar21] = (char)uVar11;
              iVar20 = iVar20 + 1;
              iVar15 = iVar15 + -1;
            }
            else {
              uVar14 = CONCAT71((int7)(uVar14 >> 8),(byte)uVar14 | uVar11 != 0x30) &
                       0xffffffffffffff01;
            }
            local_3bc = uVar18;
            if (uVar18 == 0) {
              puVar9 = local_380 + 1;
joined_r0x0001425e96a6:
              local_380 = puVar9;
              if (local_380 == puVar2) goto LAB_1425e99c9;
            }
            else {
              puVar9 = local_380 + 1;
              if ((0x39 < *local_380) || (9 < *local_380 - 0x30)) goto joined_r0x0001425e96a6;
              if (puVar9 == puVar2) goto LAB_1425e99c9;
              puVar17 = local_380 + 2;
              local_380 = puVar9;
              if (puVar17 != puVar2) {
                if (*puVar9 == uVar18) {
                  puVar8 = puVar17;
                  if (9 < *puVar17 - 0x30) {
                    puVar8 = puVar9;
                  }
                  if (*puVar17 < 0x3a) {
                    puVar9 = puVar8;
                  }
                }
                goto joined_r0x0001425e96a6;
              }
            }
            uVar11 = *local_380;
          } while ((ushort)(uVar11 - 0x30) < 10);
        }
        else {
          uVar14 = (ulonglong)local_3c4;
        }
        goto LAB_1425e9711;
      }
      iVar19 = local_3cc;
      iVar16 = local_3c8;
      if (iVar20 == 0) {
        iVar15 = 0;
        uVar14 = (ulonglong)local_3c4;
        puVar2 = local_380;
        if (local_3ba != 0x30) goto LAB_1425e9858;
        goto LAB_1425e99c9;
      }
      uVar14 = (ulonglong)local_3c4;
      puVar9 = local_380;
      goto LAB_1425e919f;
    }
LAB_1425e92c7:
    puVar2 = local_380;
    local_398 = local_378;
    local_400 = *(undefined8 *)(param_1 + 4);
    local_3f0 = &local_389;
    local_3f8 = CONCAT71(local_3f8._1_7_,local_3d5);
    local_408 = (undefined1)((local_3d0 & 4) >> 2);
    FUN_1425e9a80(&local_398,local_378 + iVar19,local_3d4,(short)param_1[10]);
    *param_5 = (int)((ulonglong)((longlong)puVar2 - (longlong)param_2) >> 1);
  }
  else {
LAB_1425e9711:
    uVar13 = local_3d4;
    if (((local_3ba != 0x30) && (iVar15 == 0)) && (iVar20 == 0)) goto LAB_1425e9858;
    if ((*local_380 | 0x20) == 0x65) {
      if (((char)uVar12 != '\0') && ((local_3d0 & 4) == 0)) goto LAB_1425e9858;
      local_3d4 = uVar13;
      puVar9 = local_380;
      if ((char)uVar12 != '\0') goto LAB_1425e919f;
      puVar9 = local_380 + 1;
      if (puVar9 != puVar2) {
        uVar18 = *puVar9;
        if ((uVar18 == 0x2d) || (cVar3 = '+', uVar18 == 0x2b)) {
          puVar9 = local_380 + 2;
          cVar3 = (char)uVar18;
          local_3c0 = uVar12;
          if (puVar9 == puVar2) goto joined_r0x0001425e9923;
        }
        local_3c0 = uVar12;
        if ((puVar9 != puVar2) && (uVar18 = *puVar9, 0xfff5 < (ushort)(uVar18 - 0x3a))) {
          iVar20 = 0;
          do {
            puVar9 = puVar9 + 1;
            if ((iVar20 < 0x6666666) ||
               ((iVar6 = 0x3fffffff, iVar20 == 0x6666666 && (uVar18 < 0x34)))) {
              iVar6 = (uint)uVar18 + iVar20 * 10 + -0x30;
            }
            iVar20 = iVar6;
            local_380 = puVar2;
          } while ((puVar9 != puVar2) &&
                  (uVar18 = *puVar9, local_380 = puVar9, (ushort)(uVar18 - 0x30) < 10));
          iVar6 = -iVar20;
          if (cVar3 != '-') {
            iVar6 = iVar20;
          }
          iVar15 = iVar15 + iVar6;
          local_3c4 = (uint)uVar14;
          goto LAB_1425e97d4;
        }
      }
joined_r0x0001425e9923:
      puVar2 = local_380;
      local_380 = puVar9;
      if ((local_3d0 & 4) == 0) goto LAB_1425e9858;
LAB_1425e99c9:
      local_380 = puVar2;
      iVar15 = iVar15 + iVar16;
    }
    else {
LAB_1425e97d4:
      puVar17 = local_380;
      puVar9 = local_380;
      uVar5 = uVar12;
      if (cVar4 == '\0' && (char)((local_3d0 & 4) >> 2) == '\0') {
        local_3d4 = uVar13;
        if (local_380 != puVar2) goto LAB_1425e9858;
      }
      else {
        if (((local_3d0 & 4) == 0) && (local_380 != puVar2)) {
          local_3cc = iVar19;
          local_3c8 = iVar16;
          local_3c4 = (uint)uVar14;
          cVar4 = FUN_1425e9f50(*local_380);
          iVar19 = local_3cc;
          while (local_3cc = iVar19, cVar4 != '\0') {
            puVar17 = puVar17 + 1;
            if (puVar17 == puVar2) {
              uVar14 = (ulonglong)local_3c4;
              local_3d4 = uVar13;
              puVar9 = puVar2;
              iVar16 = local_3c8;
              goto LAB_1425e919f;
            }
            cVar4 = FUN_1425e9f50(*puVar17);
            iVar19 = local_3cc;
          }
          goto LAB_1425e9858;
        }
        local_3d4 = uVar13;
        if (((local_3d0 & 0x10) != 0) && (local_380 != puVar2)) {
          local_3cc = iVar19;
          local_3c8 = iVar16;
          local_3c0 = uVar12;
          cVar4 = FUN_1425e9f50(*local_380);
          iVar19 = local_3cc;
          while ((local_3cc = iVar19, puVar9 = puVar17, iVar16 = local_3c8, uVar5 = local_3c0,
                 cVar4 != '\0' && (puVar17 = puVar17 + 1, puVar9 = puVar2, puVar17 != puVar2))) {
            cVar4 = FUN_1425e9f50(*puVar17);
            iVar19 = local_3cc;
          }
        }
      }
LAB_1425e919f:
      local_380 = puVar9;
      if ((uVar5 & 1) != 0) goto LAB_1425e92c7;
      iVar15 = iVar15 + iVar16;
    }
    if ((uVar14 & 1) != 0) {
      lVar21 = (longlong)iVar19;
      iVar19 = iVar19 + 1;
      local_378[lVar21] = '1';
      iVar15 = iVar15 + -1;
    }
    local_378[iVar19] = '\0';
    if (local_3d5 == '\0') {
      local_3b8 = local_378;
      local_3b0 = iVar19;
      FUN_1426b46a0(&local_3b8,iVar15);
    }
    else {
      local_3a8 = local_378;
      local_3a0 = iVar19;
      FUN_1426b3b20(&local_3a8,iVar15);
    }
    *param_5 = (int)((ulonglong)((longlong)local_380 - (longlong)param_2) >> 1);
  }
  goto LAB_1425e9858;
joined_r0x0001425e8fd4:
  if (cVar4 == '\0') goto LAB_1425e9858;
  puVar9 = puVar9 + 1;
  puVar17 = puVar2;
  if (puVar9 == puVar2) goto LAB_1425e9390;
  cVar4 = FUN_1425e9f50(*puVar9);
  goto joined_r0x0001425e8fd4;
LAB_1425e9390:
  *param_5 = (int)((ulonglong)((longlong)puVar17 - (longlong)param_2) >> 1);
  goto LAB_1425e9858;
joined_r0x0001425e903b:
  if (cVar4 == '\0') goto LAB_1425e9858;
  puVar9 = puVar9 + 1;
  puVar17 = puVar2;
  if (puVar9 == puVar2) goto LAB_1425e952a;
  cVar4 = FUN_1425e9f50(*puVar9);
  goto joined_r0x0001425e903b;
LAB_1425e952a:
  *param_5 = (int)((ulonglong)((longlong)puVar17 - (longlong)param_2) >> 1);
LAB_1425e9858:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_428);
}



// FUNCTION 1425e9a80 FUN_1425e9a80 body=1177 status=ok
// SIG undefined FUN_1425e9a80(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1425e9a80(longlong *param_1,char *param_2,char param_3,ushort param_4,char param_5,
                    double param_6,char param_7,undefined1 *param_8)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  double dVar6;
  byte bVar7;
  ulonglong uVar8;
  char *pcVar9;
  ulonglong uVar10;
  longlong lVar11;
  char *pcVar12;
  ulonglong uVar13;
  uint uVar14;
  byte bVar15;
  ulonglong uVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  
  *param_8 = 1;
  cVar3 = *(char *)*param_1;
  if (cVar3 == '0') {
    pcVar9 = (char *)*param_1;
    do {
      pcVar12 = pcVar9 + 1;
      *param_1 = (longlong)pcVar12;
      if (param_4 == 0) {
LAB_1425e9ac0:
        if (pcVar12 == param_2) {
LAB_1425e9c86:
          *param_8 = 0;
          if (param_3 != '\0') {
            return -0.0;
          }
          return 0.0;
        }
      }
      else {
        if (pcVar12 == param_2) goto LAB_1425e9c86;
        pcVar9 = pcVar9 + 2;
        if (pcVar9 != param_2) {
          if ((((int)*pcVar12 == (uint)param_4) && (*pcVar9 < 0x38)) && ((int)*pcVar9 - 0x30U < 10))
          {
            *param_1 = (longlong)pcVar9;
            pcVar12 = pcVar9;
          }
          goto LAB_1425e9ac0;
        }
      }
      cVar3 = *pcVar12;
      pcVar9 = pcVar12;
    } while (cVar3 == '0');
  }
  cVar3 = FUN_1425e9fd0((int)cVar3,8);
  if (cVar3 == '\0') {
    uVar16 = 0;
LAB_1425e9c36:
    pcVar9 = (char *)*param_1;
    if ((pcVar9 != param_2) && (param_5 == '\0')) {
      do {
        cVar3 = FUN_1425e9f50((int)*pcVar9);
        if (cVar3 == '\0') {
          return param_6;
        }
        pcVar9 = pcVar9 + 1;
        *param_1 = (longlong)pcVar9;
      } while (pcVar9 != param_2);
    }
LAB_1425e9c67:
    *param_8 = 0;
    bVar18 = uVar16 == 0;
LAB_1425e9c71:
    if (param_3 != '\0') {
      if (bVar18) {
        return -0.0;
      }
      uVar16 = -uVar16;
    }
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
    return (double)(longlong)uVar16;
  }
  lVar11 = 0x18;
  if (param_7 != '\0') {
    lVar11 = 0x35;
  }
  uVar16 = 0;
  while( true ) {
    pcVar9 = (char *)*param_1;
    cVar3 = *pcVar9;
    uVar10 = (ulonglong)cVar3;
    uVar16 = (uVar10 + uVar16 * 8) - 0x30;
    uVar13 = (longlong)uVar16 >> (sbyte)lVar11;
    if ((int)uVar13 != 0) break;
    if (param_4 == 0) {
      *param_1 = (longlong)(pcVar9 + 1);
      pcVar12 = pcVar9 + 1;
joined_r0x0001425e9b7c:
      if (pcVar12 == param_2) goto LAB_1425e9c67;
    }
    else {
      bVar18 = 0xfffffff5 < (int)cVar3 - 0x3aU;
      pcVar12 = pcVar9 + 1;
      *param_1 = (longlong)pcVar12;
      if ((cVar3 < '8' && bVar18) && (pcVar12 != param_2)) {
        pcVar9 = pcVar9 + 2;
        if (pcVar9 != param_2) {
          if ((((int)*pcVar12 == (uint)param_4) && (*pcVar9 < 0x38)) && ((int)*pcVar9 - 0x30U < 10))
          {
            *param_1 = (longlong)pcVar9;
            pcVar12 = pcVar9;
          }
          goto joined_r0x0001425e9b7c;
        }
      }
      else if (cVar3 < '8' && bVar18 || pcVar12 == param_2) goto LAB_1425e9c67;
    }
    cVar3 = FUN_1425e9fd0((int)*pcVar12,8);
    if (cVar3 == '\0') goto LAB_1425e9c36;
  }
  iVar17 = 1;
  if (1 < (int)uVar13) {
    uVar8 = uVar13 & 0xffffffff;
    do {
      iVar17 = iVar17 + 1;
      uVar8 = uVar8 >> 1;
      uVar14 = (uint)uVar13;
      uVar13 = uVar8;
    } while (3 < uVar14);
  }
  bVar7 = (byte)iVar17;
  uVar13 = (longlong)uVar16 >> (bVar7 & 0x3f);
  uVar14 = (uint)uVar16 & ~(-1 << (bVar7 & 0x1f));
  iVar17 = -iVar17;
  bVar15 = 1;
  if (param_4 == 0) goto LAB_1425e9db1;
  while( true ) {
    cVar3 = (char)uVar10;
    bVar18 = (int)cVar3 - 0x3aU < 0xfffffff6;
    pcVar12 = pcVar9 + 1;
    *param_1 = (longlong)pcVar12;
    if (('7' < cVar3 || bVar18) || (pcVar12 == param_2)) break;
    pcVar5 = pcVar9 + 2;
    pcVar9 = pcVar12;
    if (pcVar5 != param_2) {
      pcVar2 = param_2;
      if ((int)*pcVar12 != (uint)param_4) goto joined_r0x0001425e9d87;
      if (0x37 < *pcVar5) goto joined_r0x0001425e9d87;
      if (9 < (int)*pcVar5 - 0x30U) goto joined_r0x0001425e9d87;
      *param_1 = (longlong)pcVar5;
      pcVar9 = pcVar5;
      goto joined_r0x0001425e9d87;
    }
    while( true ) {
      uVar4 = (uint)*pcVar9;
      uVar10 = (ulonglong)uVar4;
      pcVar12 = pcVar9;
      if ((0x37 < (int)uVar4) || (9 < uVar4 - 0x30)) goto LAB_1425e9dc2;
      bVar15 = bVar15 & *pcVar9 == '0';
      iVar17 = iVar17 + -3;
      if (param_4 != 0) break;
LAB_1425e9db1:
      *param_1 = (longlong)(pcVar9 + 1);
      pcVar2 = param_2;
      pcVar9 = pcVar9 + 1;
joined_r0x0001425e9d87:
      pcVar12 = pcVar2;
      if (pcVar9 == param_2) goto LAB_1425e9dc2;
    }
  }
  pcVar2 = pcVar12;
  pcVar9 = pcVar12;
  if ('7' < cVar3 || bVar18) goto joined_r0x0001425e9d87;
LAB_1425e9dc2:
  if (param_5 == '\0') {
    while (pcVar12 != param_2) {
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
      cVar3 = FUN_1425e9f50((int)*pcVar12);
      if (cVar3 == '\0') {
        return param_6;
      }
      pcVar12 = pcVar12 + 1;
      *param_1 = (longlong)pcVar12;
    }
  }
  uVar4 = 1 << (bVar7 - 1 & 0x1f);
  if ((int)uVar4 < (int)uVar14) {
    uVar13 = uVar13 + 1;
  }
  else if (uVar14 == uVar4) {
    uVar13 = uVar13 + ((byte)(~bVar15 | (byte)uVar13) & 1);
  }
  bVar19 = (uVar13 >> lVar11 & 1) != 0;
  uVar16 = (longlong)uVar13 >> bVar19;
  bVar18 = uVar16 == 0;
  *param_8 = 0;
  iVar17 = (uint)bVar19 - iVar17;
  if ((iVar17 == 0) || (uVar16 == 0)) goto LAB_1425e9c71;
  uVar13 = uVar16 >> 0x35;
  while (uVar13 != 0) {
    iVar17 = iVar17 + 1;
    uVar13 = uVar16 >> 0x36;
    uVar16 = uVar16 >> 1;
  }
  if (iVar17 < 0x3cc) {
    dVar6 = 0.0;
    if (-0x433 < iVar17) {
      uVar10 = uVar16 & 0x10000000000000;
      bVar18 = uVar10 == 0;
      uVar13 = uVar16;
      iVar1 = iVar17;
      if (iVar17 != -0x432) {
        do {
          uVar16 = uVar13;
          iVar17 = iVar1;
          if (uVar10 != 0) break;
          uVar16 = uVar13 * 2;
          iVar17 = iVar1 + -1;
          uVar10 = uVar13 & 0x8000000000000;
          bVar18 = uVar10 == 0;
          bVar19 = -0x431 < iVar1;
          uVar13 = uVar16;
          iVar1 = iVar17;
        } while (bVar19);
      }
      uVar10 = (ulonglong)(iVar17 + 0x433) << 0x34;
      uVar13 = 0;
      if (!bVar18) {
        uVar13 = uVar10;
      }
      if (iVar17 != -0x432) {
        uVar13 = uVar10;
      }
      dVar6 = (double)(uVar16 & 0xfffffffffffff | uVar13);
    }
  }
  else {
    dVar6 = INFINITY;
  }
  if (param_3 == '\0') {
    return dVar6;
  }
  return (double)((ulonglong)dVar6 ^ DAT_149931e80);
}



// FUNCTION 1425e9f50 FUN_1425e9f50 body=114 status=ok
// SIG undefined FUN_1425e9f50(void)

undefined8 FUN_1425e9f50(ulonglong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  if ((int)uVar2 < 0x80) {
    if (uVar2 < 0x21) {
      return CONCAT71(0x100003e,(0x100003e00U >> (param_1 & 0x3f) & 1) != 0);
    }
  }
  else {
    uVar1 = 1;
    if ((int)uVar2 < 0x2000) {
      if (uVar2 == 0xa0) {
        return uVar1;
      }
      if (uVar2 == 0x1680) {
        return uVar1;
      }
      if (uVar2 == 0x180e) {
        return uVar1;
      }
    }
    else {
      switch(uVar2) {
      case 0x2000:
      case 0x2001:
      case 0x2002:
      case 0x2003:
      case 0x2004:
      case 0x2005:
      case 0x2006:
      case 0x2007:
      case 0x2008:
      case 0x2009:
      case 0x200a:
      case 0x2028:
      case 0x2029:
      case 0x202f:
      case 0x205f:
        return uVar1;
      case 0x200b:
      case 0x200c:
      case 0x200d:
      case 0x200e:
      case 0x200f:
      case 0x2010:
      case 0x2011:
      case 0x2012:
      case 0x2013:
      case 0x2014:
      case 0x2015:
      case 0x2016:
      case 0x2017:
      case 0x2018:
      case 0x2019:
      case 0x201a:
      case 0x201b:
      case 0x201c:
      case 0x201d:
      case 0x201e:
      case 0x201f:
      case 0x2020:
      case 0x2021:
      case 0x2022:
      case 0x2023:
      case 0x2024:
      case 0x2025:
      case 0x2026:
      case 0x2027:
      case 0x202a:
      case 0x202b:
      case 0x202c:
      case 0x202d:
      case 0x202e:
      case 0x2030:
      case 0x2031:
      case 0x2032:
      case 0x2033:
      case 0x2034:
      case 0x2035:
      case 0x2036:
      case 0x2037:
      case 0x2038:
      case 0x2039:
      case 0x203a:
      case 0x203b:
      case 0x203c:
      case 0x203d:
      case 0x203e:
      case 0x203f:
      case 0x2040:
      case 0x2041:
      case 0x2042:
      case 0x2043:
      case 0x2044:
      case 0x2045:
      case 0x2046:
      case 0x2047:
      case 0x2048:
      case 0x2049:
      case 0x204a:
      case 0x204b:
      case 0x204c:
      case 0x204d:
      case 0x204e:
      case 0x204f:
      case 0x2050:
      case 0x2051:
      case 0x2052:
      case 0x2053:
      case 0x2054:
      case 0x2055:
      case 0x2056:
      case 0x2057:
      case 0x2058:
      case 0x2059:
      case 0x205a:
      case 0x205b:
      case 0x205c:
      case 0x205d:
      case 0x205e:
        break;
      default:
        if (uVar2 == 0x3000) {
          return uVar1;
        }
        if (uVar2 == 0xfeff) {
          return uVar1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1425e9fd0 FUN_1425e9fd0 body=48 status=ok
// SIG undefined FUN_1425e9fd0(void)

bool FUN_1425e9fd0(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((0x2f < param_1) && (bVar1 = false, param_1 < 0x3a)) {
    bVar1 = param_1 + -0x30 < param_2;
  }
  return bVar1;
}



// FUNCTION 1425ea000 FUN_1425ea000 body=205 status=ok
// SIG undefined FUN_1425ea000(void)

undefined8 FUN_1425ea000(longlong *param_1,ushort param_2,int param_3,undefined8 *param_4)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  bool bVar5;
  
  puVar2 = (ushort *)*param_1;
  if (param_2 != 0) {
    uVar1 = *puVar2;
    if ((((uVar1 - 0x30 < 10) && ((int)(uint)uVar1 < param_3 + 0x30)) ||
        ((10 < param_3 && ((0x60 < uVar1 && ((int)(uint)uVar1 < param_3 + 0x57)))))) ||
       ((10 < param_3 && ((0x40 < uVar1 && ((uint)uVar1 < param_3 + 0x37U)))))) {
      puVar4 = puVar2 + 1;
      *param_1 = (longlong)puVar4;
      puVar3 = (ushort *)*param_4;
      if (puVar4 == puVar3) {
        return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
      }
      puVar2 = puVar2 + 2;
      if (puVar2 == puVar3) {
        return 0;
      }
      if ((*puVar4 == param_2) &&
         ((((uVar1 = *puVar2, uVar1 - 0x30 < 10 && ((int)(uint)uVar1 < param_3 + 0x30)) ||
           ((10 < param_3 && ((0x60 < uVar1 && ((int)(uint)uVar1 < param_3 + 0x57)))))) ||
          ((10 < param_3 && ((0x40 < uVar1 && ((uint)uVar1 < param_3 + 0x37U)))))))) {
        *param_1 = (longlong)puVar2;
        puVar3 = (ushort *)*param_4;
        puVar4 = puVar2;
      }
      bVar5 = puVar4 == puVar3;
      goto LAB_1425ea0bf;
    }
  }
  puVar2 = puVar2 + 1;
  *param_1 = (longlong)puVar2;
  bVar5 = puVar2 == (ushort *)*param_4;
LAB_1425ea0bf:
  return CONCAT71((int7)((ulonglong)puVar2 >> 8),bVar5);
}



// FUNCTION 1425ea0d0 FUN_1425ea0d0 body=1439 status=ok
// SIG undefined FUN_1425ea0d0(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1425ea0d0(ushort *param_1,ushort *param_2,ushort param_3,char param_4)

{
  bool bVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ushort *puVar5;
  uint uVar6;
  ushort *puVar7;
  ushort *puVar8;
  
  uVar2 = *param_1;
  if ((((uVar2 < 0x40) && (uVar2 - 0x30 < 10)) || ((ushort)(uVar2 - 0x61) < 6)) ||
     ((ushort)(uVar2 - 0x41) < 6)) {
    puVar5 = param_1;
    if (param_3 == 0) goto joined_r0x0001425ea16c;
    puVar5 = param_1 + 1;
    if (puVar5 == param_2) {
      return 0;
    }
    param_1 = param_1 + 2;
    if (param_1 != param_2) {
      if (*puVar5 != param_3) goto joined_r0x0001425ea15b;
      uVar2 = *param_1;
      if (0x3f < uVar2 || 9 < uVar2 - 0x30) {
        uVar6 = uVar2 - 0x41;
        if (0x25 < uVar6) goto joined_r0x0001425ea15b;
        if ((0x3f0000003fU >> ((ulonglong)uVar6 & 0x3f) & 1) == 0) goto joined_r0x0001425ea15b;
      }
      puVar5 = param_1;
      goto joined_r0x0001425ea15b;
    }
    while (((uVar2 = *puVar5, uVar2 < 0x40 && (uVar2 - 0x30 < 10)) ||
           (((ushort)(uVar2 - 0x61) < 6 || ((ushort)(uVar2 - 0x41) < 6))))) {
      if (param_3 == 0) {
joined_r0x0001425ea16c:
        puVar5 = puVar5 + 1;
        if (puVar5 == param_2) {
          return 0;
        }
      }
      else {
        puVar7 = puVar5 + 1;
        if (puVar7 == param_2) {
          return 0;
        }
        puVar8 = puVar5 + 2;
        puVar5 = puVar7;
        if (puVar8 != param_2) {
          if (((*puVar7 == param_3) &&
              (uVar2 = *puVar8, puVar5 = puVar8, 0x3f < uVar2 || 9 < uVar2 - 0x30)) &&
             ((uVar6 = uVar2 - 0x41, puVar5 = puVar7, uVar6 < 0x26 &&
              (puVar5 = puVar8, (0x3f0000003fU >> ((ulonglong)uVar6 & 0x3f) & 1) == 0)))) {
            puVar5 = puVar7;
          }
joined_r0x0001425ea15b:
          if (puVar5 == param_2) {
            return 0;
          }
        }
      }
    }
    bVar1 = true;
    param_1 = puVar5;
  }
  else {
    bVar1 = false;
  }
  if (uVar2 == 0x2e) {
    puVar5 = param_1 + 1;
    if (param_3 == 0) {
      if (puVar5 == param_2) {
        return 0;
      }
      uVar2 = *puVar5;
      if ((((uVar2 < 0x40) && (uVar2 - 0x30 < 10)) || ((ushort)(uVar2 - 0x61) < 6)) ||
         ((ushort)(uVar2 - 0x41) < 6)) {
        puVar5 = param_1 + 2;
joined_r0x0001425ea42e:
        if (puVar5 == param_2) {
          return 0;
        }
        goto LAB_1425ea451;
      }
    }
    else {
      if (puVar5 == param_2) {
        return 0;
      }
      uVar2 = *puVar5;
      if ((uVar2 < 0x40 && uVar2 - 0x30 < 10) ||
         ((uVar6 = uVar2 - 0x41, uVar6 < 0x26 &&
          ((0x3f0000003fU >> ((ulonglong)uVar6 & 0x3f) & 1) != 0)))) {
        puVar5 = param_1 + 2;
        if (puVar5 == param_2) {
          return 0;
        }
        param_1 = param_1 + 3;
        if (param_1 != param_2) {
          if ((*puVar5 == param_3) &&
             ((uVar2 = *param_1, uVar2 < 0x40 && uVar2 - 0x30 < 10 ||
              ((uVar6 = uVar2 - 0x41, uVar6 < 0x26 &&
               ((0x3f0000003fU >> ((ulonglong)uVar6 & 0x3f) & 1) != 0)))))) {
            puVar5 = param_1;
          }
          goto joined_r0x0001425ea42e;
        }
LAB_1425ea451:
        while ((((uVar2 = *puVar5, uVar2 < 0x40 && (uVar2 - 0x30 < 10)) ||
                ((ushort)(uVar2 - 0x61) < 6)) || (param_1 = puVar5, (ushort)(uVar2 - 0x41) < 6))) {
          if (param_3 == 0) {
            puVar5 = puVar5 + 1;
            if (puVar5 == param_2) {
              return 0;
            }
          }
          else {
            puVar7 = puVar5 + 1;
            if (puVar7 == param_2) {
              return 0;
            }
            puVar8 = puVar5 + 2;
            puVar5 = puVar7;
            if (puVar8 != param_2) {
              if (((*puVar7 == param_3) &&
                  (uVar2 = *puVar8, puVar5 = puVar8, 0x3f < uVar2 || 9 < uVar2 - 0x30)) &&
                 ((uVar6 = uVar2 - 0x41, puVar5 = puVar7, uVar6 < 0x26 &&
                  (puVar5 = puVar8, (0x3f0000003fU >> ((ulonglong)uVar6 & 0x3f) & 1) == 0)))) {
                puVar5 = puVar7;
              }
              if (puVar5 == param_2) {
                return 0;
              }
            }
          }
        }
        goto LAB_1425ea2a4;
      }
    }
    param_1 = puVar5;
    if (!bVar1) {
      return 0;
    }
  }
LAB_1425ea2a4:
  if ((uVar2 | 0x20) != 0x70) {
    return 0;
  }
  if (param_3 == 0) {
    puVar5 = param_1 + 1;
joined_r0x0001425ea3d7:
    if (puVar5 == param_2) {
      return 0;
    }
  }
  else {
    puVar5 = param_1 + 1;
    if (5 < (ushort)(uVar2 - 0x61)) goto joined_r0x0001425ea3d7;
    if (puVar5 == param_2) {
      return 0;
    }
    param_1 = param_1 + 2;
    if (param_1 != param_2) {
      if ((*puVar5 == param_3) &&
         ((uVar2 = *param_1, uVar2 < 0x40 && uVar2 - 0x30 < 10 ||
          ((uVar6 = uVar2 - 0x41, uVar6 < 0x26 &&
           ((0x3f0000003fU >> ((ulonglong)uVar6 & 0x3f) & 1) != 0)))))) {
        puVar5 = param_1;
      }
      goto joined_r0x0001425ea3d7;
    }
  }
  uVar2 = *puVar5;
  if ((uVar2 == 0x2d) || (uVar2 == 0x2b)) {
    puVar5 = puVar5 + 1;
    if (param_3 == 0) {
      if (puVar5 == param_2) {
        return 0;
      }
      if (0x39 < *puVar5) {
        return 0;
      }
      if (9 < *puVar5 - 0x30) {
        return 0;
      }
      goto LAB_1425ea599;
    }
    if (puVar5 == param_2) {
      return 0;
    }
    if (0x39 < *puVar5) {
      return 0;
    }
    if (9 < *puVar5 - 0x30) {
      return 0;
    }
  }
  else {
    if (0x39 < uVar2) {
      return 0;
    }
    if (9 < uVar2 - 0x30) {
      return 0;
    }
    if (param_3 == 0) {
LAB_1425ea599:
      uVar3 = 0;
      puVar7 = puVar5 + 1;
      if (puVar7 == param_2) {
LAB_1425ea67b:
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
      goto LAB_1425ea5a9;
    }
  }
  puVar7 = puVar5 + 1;
  if (puVar7 == param_2) {
    return 1;
  }
  puVar5 = puVar5 + 2;
  if (puVar5 != param_2) {
    if ((*puVar7 == param_3) &&
       ((uVar2 = *puVar5, uVar2 < 0x40 && uVar2 - 0x30 < 10 ||
        ((uVar6 = uVar2 - 0x41, uVar6 < 0x26 &&
         ((0x3f0000003fU >> ((ulonglong)uVar6 & 0x3f) & 1) != 0)))))) {
      puVar7 = puVar5;
    }
    if (puVar7 == param_2) {
      return 1;
    }
  }
LAB_1425ea5a9:
  uVar2 = *puVar7;
  while( true ) {
    uVar3 = (ulonglong)uVar2;
    if (0x39 < uVar2) break;
    uVar6 = uVar2 - 0x30;
    uVar3 = (ulonglong)uVar6;
    if (9 < uVar6) break;
    puVar5 = puVar7 + 1;
    if (param_3 == 0) {
      if (puVar5 == param_2) goto LAB_1425ea67b;
    }
    else {
      uVar4 = CONCAT71((uint7)(uint3)(uVar6 >> 8),1);
      if (puVar5 == param_2) {
        return uVar4;
      }
      puVar7 = puVar7 + 2;
      if (puVar7 != param_2) {
        if ((*puVar5 == param_3) &&
           ((uVar2 = *puVar7, uVar2 < 0x40 && uVar2 - 0x30 < 10 ||
            ((uVar6 = uVar2 - 0x41, uVar6 < 0x26 &&
             ((0x3f0000003fU >> ((ulonglong)uVar6 & 0x3f) & 1) != 0)))))) {
          puVar5 = puVar7;
        }
        if (puVar5 == param_2) {
          return uVar4;
        }
      }
    }
    uVar2 = *puVar5;
    puVar7 = puVar5;
  }
  uVar4 = CONCAT71((int7)(uVar3 >> 8),1);
  if (puVar7 == param_2) {
    return uVar4;
  }
  if (param_4 == '\0') {
    do {
      puVar5 = puVar7 + 1;
      uVar4 = FUN_1425e9f50(*puVar7);
      if ((char)uVar4 == '\0') {
        return uVar4;
      }
      puVar7 = puVar5;
    } while (puVar5 != param_2);
    return uVar4;
  }
  return uVar4;
}



// FUNCTION 1425ea680 FUN_1425ea680 body=2040 status=ok
// SIG undefined FUN_1425ea680(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1425ea680(longlong *param_1,ushort *param_2,char param_3,ushort param_4,char param_5,
                    char param_6,double param_7,char param_8,undefined1 *param_9)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ushort *puVar4;
  ulonglong uVar5;
  ushort *puVar6;
  ushort *puVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  ushort uVar11;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  bool bVar18;
  double dVar19;
  int iVar17;
  
  *param_9 = 1;
  uVar11 = *(ushort *)*param_1;
  puVar7 = (ushort *)*param_1;
  while (uVar11 == 0x30) {
    puVar4 = puVar7 + 1;
    *param_1 = (longlong)puVar4;
    if (param_4 == 0) {
LAB_1425ea6ca:
      if (puVar4 == param_2) {
LAB_1425ea8ed:
        *param_9 = 0;
        if (param_3 != '\0') {
          return -0.0;
        }
        return 0.0;
      }
    }
    else {
      if (puVar4 == param_2) goto LAB_1425ea8ed;
      puVar7 = puVar7 + 2;
      if (puVar7 != param_2) {
        if ((*puVar4 == param_4) &&
           ((uVar11 = *puVar7, uVar11 < 0x40 && uVar11 - 0x30 < 10 ||
            ((uVar13 = uVar11 - 0x41, uVar13 < 0x26 &&
             ((0x3f0000003fU >> ((ulonglong)uVar13 & 0x3f) & 1) != 0)))))) {
          *param_1 = (longlong)puVar7;
          puVar4 = puVar7;
        }
        goto LAB_1425ea6ca;
      }
    }
    puVar7 = puVar4;
    uVar11 = *puVar4;
  }
  lVar10 = 0x18;
  if (param_8 != '\0') {
    lVar10 = 0x35;
  }
  bVar18 = false;
  iVar16 = 0;
  uVar15 = 0;
LAB_1425ea78a:
  cVar2 = FUN_1425e9fd0(uVar11,0x10);
  puVar7 = (ushort *)*param_1;
  uVar11 = *puVar7;
  uVar13 = (uint)uVar11;
  if (cVar2 == '\0') {
    if ((ushort)(uVar11 - 0x61) < 6) {
      iVar3 = uVar11 - 0x57;
      goto LAB_1425ea7e0;
    }
    if ((ushort)(uVar11 - 0x41) < 6) {
      iVar3 = uVar11 - 0x37;
      goto LAB_1425ea7e0;
    }
    if (param_5 == '\0') {
LAB_1425eabe6:
      if ((puVar7 != param_2) && (param_6 == '\0')) {
        do {
          cVar2 = FUN_1425e9f50(*puVar7);
          if (cVar2 == '\0') {
            return param_7;
          }
          puVar7 = puVar7 + 1;
          *param_1 = (longlong)puVar7;
        } while (puVar7 != param_2);
      }
      goto LAB_1425eab1a;
    }
    if (uVar13 != 0x2e) {
      if ((uVar13 != 0x50) && (uVar13 != 0x70)) goto LAB_1425eabe6;
      *param_9 = 0;
      goto LAB_1425eab36;
    }
    puVar4 = puVar7 + 1;
    *param_1 = (longlong)puVar4;
    bVar18 = true;
  }
  else {
    iVar3 = (char)uVar11 + -0x30;
LAB_1425ea7e0:
    iVar17 = iVar16 + -4;
    if (!bVar18) {
      iVar17 = iVar16;
    }
    iVar16 = iVar17;
    uVar15 = (longlong)iVar3 + uVar15 * 0x10;
    uVar5 = (longlong)uVar15 >> (sbyte)lVar10;
    if ((int)uVar5 != 0) {
      iVar3 = 1;
      if (1 < (int)uVar5) {
        uVar14 = uVar5 & 0xffffffff;
        do {
          iVar3 = iVar3 + 1;
          uVar14 = uVar14 >> 1;
          uVar13 = (uint)uVar5;
          uVar5 = uVar14;
        } while (3 < uVar13);
      }
      bVar8 = (byte)iVar3;
      uVar5 = (longlong)uVar15 >> (bVar8 & 0x3f);
      uVar13 = (uint)uVar15 & ~(-1 << (bVar8 & 0x1f));
      bVar12 = 1;
      iVar3 = iVar16 + iVar3;
      while( true ) {
        iVar16 = iVar3;
        puVar4 = param_2;
        if ((param_4 == 0) ||
           ((0x3f < uVar11 || 9 < uVar11 - 0x30 &&
            ((0x25 < uVar11 - 0x41 ||
             ((0x3f0000003fU >> ((ulonglong)(uVar11 - 0x41) & 0x3f) & 1) == 0)))))) {
          puVar6 = puVar7 + 1;
          *param_1 = (longlong)puVar6;
          if (puVar6 != param_2) goto LAB_1425eaa0f;
          break;
        }
        puVar6 = puVar7 + 1;
        *param_1 = (longlong)puVar6;
        if (puVar6 == param_2) break;
        puVar7 = puVar7 + 2;
        if (puVar7 != param_2) {
          if ((*puVar6 == param_4) &&
             ((uVar11 = *puVar7, uVar11 < 0x40 && uVar11 - 0x30 < 10 ||
              ((uVar9 = uVar11 - 0x41, uVar9 < 0x26 &&
               ((0x3f0000003fU >> ((ulonglong)uVar9 & 0x3f) & 1) != 0)))))) {
            *param_1 = (longlong)puVar7;
            puVar6 = puVar7;
          }
          if (puVar6 == param_2) break;
        }
LAB_1425eaa0f:
        if (param_5 == '\0') {
LAB_1425eaa2b:
          uVar11 = *puVar6;
        }
        else {
          uVar11 = *puVar6;
          if (uVar11 == 0x2e) {
            puVar6 = puVar6 + 1;
            *param_1 = (longlong)puVar6;
            bVar18 = true;
            goto LAB_1425eaa2b;
          }
        }
        if ((0x3f < uVar11 || 9 < uVar11 - 0x30) &&
           ((puVar4 = puVar6, 0x25 < uVar11 - 0x41 ||
            ((0x3f0000003fU >> ((ulonglong)(uVar11 - 0x41) & 0x3f) & 1) == 0)))) break;
        bVar12 = bVar12 & uVar11 == 0x30;
        puVar7 = puVar6;
        iVar3 = iVar16 + 4;
        if (bVar18) {
          iVar3 = iVar16;
        }
      }
      if ((puVar4 != param_2) && ((param_6 == '\0' && (param_5 == '\0')))) {
        do {
          cVar2 = FUN_1425e9f50(*puVar4);
          if (cVar2 == '\0') {
            return param_7;
          }
          puVar4 = puVar4 + 1;
          *param_1 = (longlong)puVar4;
        } while (puVar4 != param_2);
      }
      uVar9 = 1 << (bVar8 - 1 & 0x1f);
      if ((int)uVar9 < (int)uVar13) {
        uVar5 = uVar5 + 1;
      }
      else if (uVar13 == uVar9) {
        uVar5 = uVar5 + ((byte)(~bVar12 | (byte)uVar5) & 1);
      }
      bVar18 = (uVar5 >> lVar10 & 1) != 0;
      iVar16 = iVar16 + (uint)bVar18;
      uVar15 = (longlong)uVar5 >> bVar18;
LAB_1425eab1a:
      *param_9 = 0;
      if (param_5 != '\0') {
LAB_1425eab36:
        puVar7 = (ushort *)*param_1;
        if ((param_4 == 0) ||
           ((uVar11 = *puVar7, 0x3f < uVar11 || 9 < uVar11 - 0x30 &&
            ((uVar13 = uVar11 - 0x41, 0x25 < uVar13 ||
             ((0x3f0000003fU >> ((ulonglong)uVar13 & 0x3f) & 1) == 0)))))) {
          puVar7 = puVar7 + 1;
LAB_1425eabde:
          *param_1 = (longlong)puVar7;
          puVar6 = puVar7;
LAB_1425eac2d:
          puVar4 = puVar6;
          uVar11 = *puVar4;
        }
        else {
          puVar4 = puVar7 + 1;
          *param_1 = (longlong)puVar4;
          puVar6 = param_2;
          if ((puVar4 == param_2) || (puVar7 = puVar7 + 2, puVar6 = puVar4, puVar7 == param_2))
          goto LAB_1425eac2d;
          uVar11 = *puVar4;
          if (uVar11 == param_4) {
            uVar11 = *puVar7;
            if ((uVar11 < 0x40 && uVar11 - 0x30 < 10) ||
               ((uVar13 = uVar11 - 0x41, uVar13 < 0x26 &&
                ((0x3f0000003fU >> ((ulonglong)uVar13 & 0x3f) & 1) != 0)))) goto LAB_1425eabde;
            goto LAB_1425eac2d;
          }
        }
        bVar18 = false;
        bVar1 = false;
        if (uVar11 == 0x2b) {
LAB_1425eac49:
          bVar18 = bVar1;
          puVar4 = puVar4 + 1;
          *param_1 = (longlong)puVar4;
        }
        else if (uVar11 == 0x2d) {
          bVar1 = true;
          goto LAB_1425eac49;
        }
        cVar2 = FUN_1425e9fd0(*puVar4,10);
        iVar3 = 0;
        if (cVar2 != '\0') {
          iVar3 = 0;
          do {
            puVar7 = (ushort *)*param_1;
            uVar13 = (uint)*puVar7;
            iVar3 = uVar13 + iVar3 * 10 + -0x30;
            if ((param_4 != 0) &&
               ((uVar13 - 0x30 < 10 && *puVar7 < 0x40 ||
                ((uVar13 - 0x41 < 0x26 &&
                 ((0x3f0000003fU >> ((ulonglong)(uVar13 - 0x41) & 0x3f) & 1) != 0)))))) {
              puVar4 = puVar7 + 1;
              *param_1 = (longlong)puVar4;
              if (puVar4 != param_2) {
                puVar7 = puVar7 + 2;
                if (puVar7 != param_2) {
                  if ((*puVar4 == param_4) &&
                     ((uVar11 = *puVar7, uVar11 < 0x40 && uVar11 - 0x30 < 10 ||
                      ((uVar13 = uVar11 - 0x41, uVar13 < 0x26 &&
                       ((0x3f0000003fU >> ((ulonglong)uVar13 & 0x3f) & 1) != 0)))))) {
                    *param_1 = (longlong)puVar7;
                    puVar4 = puVar7;
                  }
                  goto joined_r0x0001425eac7d;
                }
                goto LAB_1425eac83;
              }
              break;
            }
            *param_1 = (longlong)(puVar7 + 1);
            puVar4 = puVar7 + 1;
joined_r0x0001425eac7d:
            if (puVar4 == param_2) break;
LAB_1425eac83:
            cVar2 = FUN_1425e9fd0(*puVar4,10);
          } while (cVar2 != '\0');
        }
        iVar17 = -iVar3;
        if (!bVar18) {
          iVar17 = iVar3;
        }
        iVar16 = iVar17 + iVar16;
      }
      if ((iVar16 == 0) || (uVar15 == 0)) {
        if (param_3 != '\0') {
          if (uVar15 == 0) {
            return -0.0;
          }
          uVar15 = -uVar15;
        }
        return (double)(longlong)uVar15;
      }
      uVar5 = uVar15 >> 0x35;
      while (uVar5 != 0) {
        iVar16 = iVar16 + 1;
        uVar5 = uVar15 >> 0x36;
        uVar15 = uVar15 >> 1;
      }
      if (iVar16 < 0x3cc) {
        dVar19 = 0.0;
        if (-0x433 < iVar16) {
          uVar14 = uVar15 & 0x10000000000000;
          bVar18 = uVar14 == 0;
          uVar5 = uVar15;
          iVar3 = iVar16;
          if (iVar16 != -0x432) {
            do {
              uVar15 = uVar5;
              iVar16 = iVar3;
              if (uVar14 != 0) break;
              uVar15 = uVar5 * 2;
              iVar16 = iVar3 + -1;
              uVar14 = uVar5 & 0x8000000000000;
              bVar18 = uVar14 == 0;
              bVar1 = -0x431 < iVar3;
              uVar5 = uVar15;
              iVar3 = iVar16;
            } while (bVar1);
          }
          uVar14 = (ulonglong)(iVar16 + 0x433) << 0x34;
          uVar5 = 0;
          if (!bVar18) {
            uVar5 = uVar14;
          }
          if (iVar16 != -0x432) {
            uVar5 = uVar14;
          }
          dVar19 = (double)(uVar15 & 0xfffffffffffff | uVar5);
        }
      }
      else {
        dVar19 = INFINITY;
      }
      if (param_3 != '\0') {
        dVar19 = (double)((ulonglong)dVar19 ^ DAT_149931e80);
      }
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
      return dVar19;
    }
    if ((param_4 == 0) ||
       ((0x3f < uVar11 || 9 < uVar11 - 0x30 &&
        ((0x25 < uVar13 - 0x41 || ((0x3f0000003fU >> ((ulonglong)(uVar13 - 0x41) & 0x3f) & 1) == 0))
        )))) {
      *param_1 = (longlong)(puVar7 + 1);
      puVar4 = puVar7 + 1;
    }
    else {
      puVar4 = puVar7 + 1;
      *param_1 = (longlong)puVar4;
      if (puVar4 == param_2) goto LAB_1425eab1a;
      puVar7 = puVar7 + 2;
      if (puVar7 == param_2) goto LAB_1425ea783;
      if ((*puVar4 == param_4) &&
         ((uVar11 = *puVar7, uVar11 < 0x40 && uVar11 - 0x30 < 10 ||
          ((uVar13 = uVar11 - 0x41, uVar13 < 0x26 &&
           ((0x3f0000003fU >> ((ulonglong)uVar13 & 0x3f) & 1) != 0)))))) {
        *param_1 = (longlong)puVar7;
        puVar4 = puVar7;
      }
    }
    if (puVar4 == param_2) goto LAB_1425eab1a;
  }
LAB_1425ea783:
  uVar11 = *puVar4;
  goto LAB_1425ea78a;
}



// FUNCTION 1425eaea0 FUN_1425eaea0 body=991 status=ok
// SIG undefined FUN_1425eaea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1425eaea0(int param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined *puVar5;
  undefined1 local_a0 [64];
  undefined **local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  int local_3c [3];
  
  local_3c[1] = -2;
  local_3c[2] = -1;
  local_3c[0] = 0;
  if ((DAT_14c7fc340 == 2) || (cVar1 = FUN_142501800(&DAT_14c7fc340), cVar1 == '\0')) {
    if (0 < DAT_14c7fc344) {
      return &DAT_14c7fc1b0;
    }
  }
  else {
    FUN_1424d6720(0,FUN_1425eb5e0);
    FUN_142511900(&DAT_14c7fc1b0);
    FUN_1425151b0(&DAT_14c7fc1b0);
    DAT_14c7fc278 = 1;
    lVar2 = thunk_FUN_1424da030(200);
    if (lVar2 == 0) {
      DAT_14c7fc288 = 0;
    }
    else {
      local_48 = lVar2;
      FUN_1424a6c90(local_a0,L"[[:Zs:][\\u0009][:Bidi_Control:][:Variation_Selector:]]");
      lVar2 = local_48;
      FUN_1425c5b90(local_48,local_a0,local_3c);
      DAT_14c7fc288 = lVar2;
      FUN_140859a90(local_a0);
    }
    lVar2 = thunk_FUN_1424da030(200);
    if (lVar2 == 0) {
      DAT_14c7fc290 = 0;
    }
    else {
      local_48 = lVar2;
      FUN_1424a6c90(local_a0,L"[[:Bidi_Control:]]");
      lVar2 = local_48;
      FUN_1425c5b90(local_48,local_a0,local_3c);
      DAT_14c7fc290 = lVar2;
      FUN_140859a90(local_a0);
    }
    lVar2 = FUN_1424ebfe0(0,&DAT_14a418301,local_3c);
    if (local_3c[0] < 1) {
      local_60 = _anon_6C419E58::ParseDataSink::vftable;
      FUN_1424ec6e0(lVar2,"parse",&local_60,local_3c);
      if (local_3c[0] < 1) {
        lVar3 = thunk_FUN_1424da030(200);
        if (lVar3 == 0) {
          if (local_3c[0] < 1) {
            local_3c[0] = 7;
          }
        }
        else {
          local_50 = lVar3;
          local_48 = lVar2;
          FUN_1424a6c90(local_a0,&DAT_149c4cd16);
          FUN_1425c5b90(local_50,local_a0,local_3c);
          FUN_140859a90(local_a0);
          lVar2 = local_50;
          if (local_3c[0] < 1) {
            local_58 = local_50;
            FUN_142513300(local_50,DAT_14c7fc2b8);
            DAT_14c7fc2c0 = lVar2;
            local_58 = 0;
            _DAT_14c7fc2c8 = FUN_1425eb660(3,4);
            local_58 = 0;
            _DAT_14c7fc2d0 = FUN_1425eb660(5,6);
            lVar2 = thunk_FUN_1424da030(200);
            if (lVar2 == 0) {
              _DAT_14c7fc2f8 = 0;
            }
            else {
              local_50 = lVar2;
              FUN_1424a6c90(local_a0,&DAT_149c4cd76);
              lVar2 = local_50;
              FUN_1425c5b90(local_50,local_a0,local_3c);
              _DAT_14c7fc2f8 = lVar2;
              FUN_140859a90(local_a0);
            }
            lVar2 = local_48;
            if (local_3c[0] < 1) {
              lVar3 = thunk_FUN_1424da030(200);
              if (lVar3 == 0) {
                DAT_14c7fc328 = 0;
              }
              else {
                local_50 = lVar3;
                FUN_1424a6c90(local_a0,L"[:digit:]");
                lVar2 = local_50;
                FUN_1425c5b90(local_50,local_a0,local_3c);
                DAT_14c7fc328 = lVar2;
                FUN_140859a90(local_a0);
                lVar2 = local_48;
              }
              if (local_3c[0] < 1) {
                local_58 = 0;
                _DAT_14c7fc330 = FUN_1425eb740(9);
                local_58 = 0;
                _DAT_14c7fc338 = FUN_1425eb740(10);
                lVar2 = local_48;
                for (plVar4 = &DAT_14c7fc280; plVar4 != (longlong *)&DAT_14c7fc340;
                    plVar4 = plVar4 + 1) {
                  if (*plVar4 != 0) {
                    local_58 = 0;
                    FUN_1425151b0();
                  }
                }
              }
            }
          }
          else {
            FUN_1425121d0(local_50);
            FUN_1401773f0(lVar2);
            lVar2 = local_48;
          }
        }
      }
      thunk_FUN_1424b70d0(&local_60);
    }
    if (lVar2 != 0) {
      FUN_1424ea9f0(lVar2);
    }
    DAT_14c7fc344 = local_3c[0];
    FUN_1425019c0(&DAT_14c7fc340);
  }
  puVar5 = &DAT_14c7fc1b0;
  if (local_3c[0] < 1) {
    puVar5 = &DAT_14c7fc1b0;
    if ((undefined *)(&DAT_14c7fc280)[param_1] != (undefined *)0x0) {
      puVar5 = (undefined *)(&DAT_14c7fc280)[param_1];
    }
  }
  return puVar5;
}



// FUNCTION 1425eb280 Unwind@1425eb280 body=47 status=ok
// SIG undefined Unwind@1425eb280(void)

void Unwind_1425eb280(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425eb2b0 Unwind@1425eb2b0 body=47 status=ok
// SIG undefined Unwind@1425eb2b0(void)

void Unwind_1425eb2b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x80));
  return;
}



// FUNCTION 1425eb2e0 Unwind@1425eb2e0 body=47 status=ok
// SIG undefined Unwind@1425eb2e0(void)

void Unwind_1425eb2e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425eb310 Unwind@1425eb310 body=47 status=ok
// SIG undefined Unwind@1425eb310(void)

void Unwind_1425eb310(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x80));
  return;
}



// FUNCTION 1425eb340 Unwind@1425eb340 body=47 status=ok
// SIG undefined Unwind@1425eb340(void)

void Unwind_1425eb340(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425eb370 Unwind@1425eb370 body=47 status=ok
// SIG undefined Unwind@1425eb370(void)

void Unwind_1425eb370(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x78));
  return;
}



// FUNCTION 1425eb3a0 Unwind@1425eb3a0 body=47 status=ok
// SIG undefined Unwind@1425eb3a0(void)

void Unwind_1425eb3a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425eb3d0 Unwind@1425eb3d0 body=54 status=ok
// SIG undefined Unwind@1425eb3d0(void)

void Unwind_1425eb3d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x78));
  *(undefined8 *)(param_2 + 0x70) = 0;
  return;
}



// FUNCTION 1425eb410 Unwind@1425eb410 body=47 status=ok
// SIG undefined Unwind@1425eb410(void)

void Unwind_1425eb410(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425eb440 Unwind@1425eb440 body=54 status=ok
// SIG undefined Unwind@1425eb440(void)

void Unwind_1425eb440(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x78));
  *(undefined8 *)(param_2 + 0x70) = 0;
  return;
}



// FUNCTION 1425eb480 Unwind@1425eb480 body=63 status=ok
// SIG undefined Unwind@1425eb480(void)

void Unwind_1425eb480(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x70);
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  return;
}



// FUNCTION 1425eb4c0 Unwind@1425eb4c0 body=63 status=ok
// SIG undefined Unwind@1425eb4c0(void)

void Unwind_1425eb4c0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x68);
  if (*(longlong *)(param_2 + 0x80) != 0) {
    FUN_1424ea9f0(*(longlong *)(param_2 + 0x80));
  }
  return;
}



// FUNCTION 1425eb500 FUN_1425eb500 body=120 status=ok
// SIG undefined FUN_1425eb500(void)

uint FUN_1425eb500(undefined8 param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_68 [64];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_1;
  uVar2 = FUN_1425eaea0(param_2);
  cVar1 = FUN_142512960(uVar2,local_28);
  if (cVar1 == '\0') {
    FUN_1424a6be0(local_68,local_28);
    uVar2 = FUN_1425eaea0(param_3);
    cVar1 = FUN_142512960(uVar2,local_68);
    param_2 = -(uint)(cVar1 == '\0') | param_3;
    FUN_140859a90(local_68);
  }
  FUN_140859a90(local_28);
  return param_2;
}



// FUNCTION 1425eb580 Unwind@1425eb580 body=34 status=ok
// SIG undefined Unwind@1425eb580(void)

void Unwind_1425eb580(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x60));
  return;
}



// FUNCTION 1425eb5b0 Unwind@1425eb5b0 body=34 status=ok
// SIG undefined Unwind@1425eb5b0(void)

void Unwind_1425eb5b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1425eb5e0 FUN_1425eb5e0 body=112 status=ok
// SIG undefined FUN_1425eb5e0(void)

undefined8 FUN_1425eb5e0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (DAT_14c7fc278 != '\0') {
    FUN_1425121d0(&DAT_14c7fc1b0);
    DAT_14c7fc278 = '\0';
  }
  lVar3 = 0;
  do {
    lVar1 = *(longlong *)((longlong)&DAT_14c7fc280 + lVar3);
    if (lVar1 != 0) {
      FUN_1425121d0(lVar1);
      FUN_1401773f0(lVar1);
    }
    *(undefined8 *)((longlong)&DAT_14c7fc280 + lVar3) = 0;
    uVar2 = DAT_14c7fc340;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0xc0);
  LOCK();
  DAT_14c7fc340 = 0;
  UNLOCK();
  return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
}



// FUNCTION 1425eb660 FUN_1425eb660 body=163 status=ok
// SIG undefined FUN_1425eb660(void)

longlong FUN_1425eb660(int param_1,int param_2)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = thunk_FUN_1424da030(200);
  if (lVar1 != 0) {
    FUN_142511900(lVar1);
    puVar2 = (undefined *)(&DAT_14c7fc280)[param_1];
    if (puVar2 == (undefined *)0x0) {
      puVar2 = &DAT_14c7fc1b0;
    }
    FUN_142513300(lVar1,puVar2);
    puVar2 = (undefined *)(&DAT_14c7fc280)[param_2];
    if (puVar2 == (undefined *)0x0) {
      puVar2 = &DAT_14c7fc1b0;
    }
    FUN_142513300(lVar1,puVar2);
    puVar2 = DAT_14c7fc2c0;
    if (DAT_14c7fc2c0 == (undefined *)0x0) {
      puVar2 = &DAT_14c7fc1b0;
    }
    FUN_142513300(lVar1,puVar2);
    FUN_1425151b0(lVar1);
  }
  return lVar1;
}



// FUNCTION 1425eb710 Unwind@1425eb710 body=40 status=ok
// SIG undefined Unwind@1425eb710(void)

void Unwind_1425eb710(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425eb740 FUN_1425eb740 body=139 status=ok
// SIG undefined FUN_1425eb740(void)

longlong FUN_1425eb740(int param_1)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = thunk_FUN_1424da030(200);
  if (lVar1 != 0) {
    FUN_142511900(lVar1);
    puVar2 = DAT_14c7fc328;
    if (DAT_14c7fc328 == (undefined *)0x0) {
      puVar2 = &DAT_14c7fc1b0;
    }
    FUN_142513300(lVar1,puVar2);
    puVar2 = (undefined *)(&DAT_14c7fc280)[param_1];
    if (puVar2 == (undefined *)0x0) {
      puVar2 = &DAT_14c7fc1b0;
    }
    FUN_142513300(lVar1,puVar2);
    FUN_1425151b0(lVar1);
  }
  return lVar1;
}



// FUNCTION 1425eb7d0 Unwind@1425eb7d0 body=40 status=ok
// SIG undefined Unwind@1425eb7d0(void)

void Unwind_1425eb7d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425eb800 FUN_1425eb800 body=38 status=ok
// SIG undefined FUN_1425eb800(void)

undefined8 FUN_1425eb800(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425eb830 FUN_1425eb830 body=1451 status=ok
// SIG undefined FUN_1425eb830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425eb830(undefined8 param_1,char *param_2,longlong *param_3,undefined8 param_4,
                  int *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_118 [40];
  undefined1 local_f0 [40];
  undefined1 local_c8 [16];
  int local_b8;
  longlong local_b0;
  undefined1 local_a8 [8];
  short local_a0;
  int local_9c;
  int local_68;
  int local_64;
  char *local_60;
  undefined4 local_54;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_60 = param_2;
  (**(code **)(*param_3 + 0x50))(param_3,local_f0,param_5);
  if (*param_5 < 1) {
    iVar3 = 0;
    while (cVar1 = FUN_14258c4f0(local_f0,iVar3,&local_60,param_3), cVar1 != '\0') {
      iVar2 = strcmp(local_60,"date");
      if (iVar2 != 0) {
        (**(code **)(*param_3 + 0x50))(param_3,local_118,param_5);
        if (0 < *param_5) {
          return;
        }
        local_68 = 0;
        local_64 = iVar3;
        while (iVar3 = local_64, cVar1 = FUN_14258c4f0(local_118,local_68,&local_60,param_3),
              cVar1 != '\0') {
          iVar3 = strcmp(local_60,"lenient");
          (**(code **)(*param_3 + 0x48))(param_3,local_c8,param_5);
          if (0 < *param_5) {
            return;
          }
          local_b0 = (ulonglong)(iVar3 != 0) * 2 + 3;
          iVar2 = 0;
          while (iVar2 < local_b8) {
            FUN_14258c5f0(local_c8,iVar2,param_3);
            local_54 = 0;
            uVar5 = (**(code **)(*param_3 + 0x18))(param_3,&local_54,param_5);
            FUN_1424a7060(local_a8,1,uVar5,local_54);
            if (0 < *param_5) {
              FUN_140859a90(local_a8);
              return;
            }
            iVar4 = local_9c;
            if (-1 < local_a0) {
              iVar4 = (int)local_a0 >> 5;
            }
            iVar4 = FUN_1424a8940(local_a8,0x2e,0,iVar4);
            if (iVar4 == -1) {
              iVar4 = local_9c;
              if (-1 < local_a0) {
                iVar4 = (int)local_a0 >> 5;
              }
              iVar4 = FUN_1424a8940(local_a8,0x2c,0,iVar4);
              if (iVar4 == -1) {
                iVar4 = local_9c;
                if (-1 < local_a0) {
                  iVar4 = (int)local_a0 >> 5;
                }
                iVar4 = FUN_1424a8940(local_a8,0x2b,0,iVar4);
                if (iVar4 == -1) {
                  iVar4 = local_9c;
                  if (-1 < local_a0) {
                    iVar4 = (int)local_a0 >> 5;
                  }
                  iVar4 = FUN_1424a8940(local_a8,0x2d,0,iVar4);
                  if (iVar4 == -1) {
                    iVar4 = local_9c;
                    if (-1 < local_a0) {
                      iVar4 = (int)local_a0 >> 5;
                    }
                    iVar4 = FUN_1424a8940(local_a8,0x24,0,iVar4);
                    if (iVar4 == -1) {
                      iVar4 = local_9c;
                      if (-1 < local_a0) {
                        iVar4 = (int)local_a0 >> 5;
                      }
                      iVar4 = FUN_1424a8940(local_a8,0xa3,0,iVar4);
                      if (iVar4 == -1) {
                        iVar4 = local_9c;
                        if (-1 < local_a0) {
                          iVar4 = (int)local_a0 >> 5;
                        }
                        iVar4 = FUN_1424a8940(local_a8,0x20b9,0,iVar4);
                        if (iVar4 == -1) {
                          iVar4 = local_9c;
                          if (-1 < local_a0) {
                            iVar4 = (int)local_a0 >> 5;
                          }
                          iVar4 = FUN_1424a8940(local_a8,0xa5,0,iVar4);
                          if (iVar4 == -1) {
                            iVar4 = local_9c;
                            if (-1 < local_a0) {
                              iVar4 = (int)local_a0 >> 5;
                            }
                            iVar4 = FUN_1424a8940(local_a8,0x20a9,0,iVar4);
                            if (iVar4 == -1) {
                              iVar4 = local_9c;
                              if (-1 < local_a0) {
                                iVar4 = (int)local_a0 >> 5;
                              }
                              iVar4 = FUN_1424a8940(local_a8,0x25,0,iVar4);
                              if (iVar4 == -1) {
                                iVar4 = local_9c;
                                if (-1 < local_a0) {
                                  iVar4 = (int)local_a0 >> 5;
                                }
                                iVar4 = FUN_1424a8940(local_a8,0x2030,0,iVar4);
                                if (iVar4 == -1) {
                                  iVar4 = local_9c;
                                  if (-1 < local_a0) {
                                    iVar4 = (int)local_a0 >> 5;
                                  }
                                  iVar4 = FUN_1424a8940(local_a8,0x2019,0,iVar4);
                                  if (iVar4 != -1) {
                                    FUN_1425ec080(7,local_a8,param_5);
                                  }
                                }
                                else {
                                  FUN_1425ec080(0xe,local_a8,param_5);
                                }
                              }
                              else {
                                FUN_1425ec080(0xd,local_a8,param_5);
                              }
                            }
                            else {
                              local_50 = thunk_FUN_1424da030(200);
                              if (local_50 != 0) {
                                FUN_1425c5b90(local_50,local_a8,param_5);
                              }
                              _DAT_14c7fc320 = local_50;
                            }
                          }
                          else {
                            local_50 = thunk_FUN_1424da030(200);
                            if (local_50 != 0) {
                              FUN_1425c5b90(local_50,local_a8,param_5);
                            }
                            _DAT_14c7fc318 = local_50;
                          }
                        }
                        else {
                          local_50 = thunk_FUN_1424da030(200);
                          if (local_50 != 0) {
                            FUN_1425c5b90(local_50,local_a8,param_5);
                          }
                          _DAT_14c7fc310 = local_50;
                        }
                      }
                      else {
                        local_50 = thunk_FUN_1424da030(200);
                        if (local_50 != 0) {
                          FUN_1425c5b90(local_50,local_a8,param_5);
                        }
                        _DAT_14c7fc308 = local_50;
                      }
                    }
                    else {
                      local_50 = thunk_FUN_1424da030(200);
                      if (local_50 != 0) {
                        FUN_1425c5b90(local_50,local_a8,param_5);
                      }
                      _DAT_14c7fc300 = local_50;
                    }
                  }
                  else {
                    local_50 = thunk_FUN_1424da030(200);
                    if (local_50 != 0) {
                      FUN_1425c5b90(local_50,local_a8,param_5);
                    }
                    _DAT_14c7fc2d8 = local_50;
                  }
                }
                else {
                  local_50 = thunk_FUN_1424da030(200);
                  if (local_50 != 0) {
                    FUN_1425c5b90(local_50,local_a8,param_5);
                  }
                  _DAT_14c7fc2e0 = local_50;
                }
              }
              else {
                local_50 = thunk_FUN_1424da030(200);
                if (local_50 != 0) {
                  FUN_1425c5b90(local_50,local_a8,param_5);
                }
                (&DAT_14c7fc280)[local_b0] = local_50;
              }
            }
            else {
              local_50 = thunk_FUN_1424da030(200);
              if (local_50 != 0) {
                FUN_1425c5b90(local_50,local_a8,param_5);
              }
              (&DAT_14c7fc280)[(ulonglong)(iVar3 != 0) * 2 + 4] = local_50;
            }
            iVar4 = *param_5;
            FUN_140859a90(local_a8);
            iVar2 = iVar2 + 1;
            if (0 < iVar4) {
              return;
            }
          }
          local_68 = local_68 + 1;
        }
      }
      iVar3 = iVar3 + 1;
    }
  }
  return;
}



// FUNCTION 1425ebe00 Unwind@1425ebe00 body=55 status=ok
// SIG undefined Unwind@1425ebe00(void)

void Unwind_1425ebe00(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 1425ebe40 Unwind@1425ebe40 body=55 status=ok
// SIG undefined Unwind@1425ebe40(void)

void Unwind_1425ebe40(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xe8));
  return;
}



// FUNCTION 1425ebe80 Unwind@1425ebe80 body=55 status=ok
// SIG undefined Unwind@1425ebe80(void)

void Unwind_1425ebe80(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xe8));
  return;
}



// FUNCTION 1425ebec0 Unwind@1425ebec0 body=55 status=ok
// SIG undefined Unwind@1425ebec0(void)

void Unwind_1425ebec0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xe8));
  return;
}



// FUNCTION 1425ebf00 Unwind@1425ebf00 body=55 status=ok
// SIG undefined Unwind@1425ebf00(void)

void Unwind_1425ebf00(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xe8));
  return;
}



// FUNCTION 1425ebf40 Unwind@1425ebf40 body=55 status=ok
// SIG undefined Unwind@1425ebf40(void)

void Unwind_1425ebf40(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xe8));
  return;
}



// FUNCTION 1425ebf80 Unwind@1425ebf80 body=55 status=ok
// SIG undefined Unwind@1425ebf80(void)

void Unwind_1425ebf80(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xe8));
  return;
}



// FUNCTION 1425ebfc0 Unwind@1425ebfc0 body=55 status=ok
// SIG undefined Unwind@1425ebfc0(void)

void Unwind_1425ebfc0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xe8));
  return;
}



// FUNCTION 1425ec000 Unwind@1425ec000 body=55 status=ok
// SIG undefined Unwind@1425ec000(void)

void Unwind_1425ec000(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xe8));
  return;
}



// FUNCTION 1425ec040 Unwind@1425ec040 body=55 status=ok
// SIG undefined Unwind@1425ec040(void)

void Unwind_1425ec040(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xe8));
  return;
}



// FUNCTION 1425ec080 FUN_1425ec080 body=89 status=ok
// SIG undefined FUN_1425ec080(void)

void FUN_1425ec080(uint param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(200);
  if (lVar1 != 0) {
    FUN_1425c5b90(lVar1,param_2,param_3);
  }
  (&DAT_14c7fc280)[param_1] = lVar1;
  return;
}



// FUNCTION 1425ec0e0 Unwind@1425ec0e0 body=36 status=ok
// SIG undefined Unwind@1425ec0e0(void)

void Unwind_1425ec0e0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425ec110 FUN_1425ec110 body=8 status=ok
// SIG undefined FUN_1425ec110(void)

undefined * FUN_1425ec110(void)

{
  return &DAT_14c7fc348;
}



// FUNCTION 1425ec120 FUN_1425ec120 body=141 status=ok
// SIG undefined FUN_1425ec120(void)

void FUN_1425ec120(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = (longlong)icu_64::UnicodeSetIterator::vftable;
  param_1[7] = 0;
  param_1[3] = param_2;
  iVar1 = FUN_142512820(param_2);
  *(int *)(param_1 + 4) = iVar1 + -1;
  uVar2 = FUN_1425118f0(param_1[3]);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff00000000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(*param_1 + 0x10))(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 1425ec1b0 Unwind@1425ec1b0 body=30 status=ok
// SIG undefined Unwind@1425ec1b0(void)

void Unwind_1425ec1b0(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425ec1d0 FUN_1425ec1d0 body=50 status=ok
// SIG undefined FUN_1425ec1d0(void)

void FUN_1425ec1d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::UnicodeSetIterator::vftable;
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1425ec210 FUN_1425ec210 body=107 status=ok
// SIG undefined FUN_1425ec210(void)

undefined8 FUN_1425ec210(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)((longlong)param_1 + 0x2c);
  if ((int)param_1[5] < iVar2) {
    if ((int)param_1[4] <= *(int *)((longlong)param_1 + 0x24)) {
      if (*(int *)((longlong)param_1 + 0x34) <= (int)param_1[6]) {
        return 0;
      }
      *(undefined4 *)(param_1 + 1) = 0xffffffff;
      uVar1 = *(undefined8 *)(param_1[3] + 0x50);
      *(int *)(param_1 + 6) = (int)param_1[6] + 1;
      lVar3 = FUN_142516630(uVar1);
      goto LAB_1425ec247;
    }
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
    (**(code **)(*param_1 + 0x10))(param_1);
    iVar2 = *(int *)((longlong)param_1 + 0x2c);
  }
  *(int *)((longlong)param_1 + 0x2c) = iVar2 + 1;
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  *(int *)(param_1 + 1) = iVar2;
  lVar3 = 0;
LAB_1425ec247:
  param_1[2] = lVar3;
  return 1;
}



// FUNCTION 1425ec280 FUN_1425ec280 body=44 status=ok
// SIG undefined FUN_1425ec280(void)

void FUN_1425ec280(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_142512850(*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_142512830(*(undefined8 *)(param_1 + 0x18),param_2);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}



// FUNCTION 1425ec2b0 FUN_1425ec2b0 body=151 status=ok
// SIG undefined FUN_1425ec2b0(void)

longlong FUN_1425ec2b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    return *(longlong *)(param_1 + 0x10);
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == -1) {
    return 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)thunk_FUN_1424da030(0x40);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      lVar2 = 0;
      goto LAB_1425ec32f;
    }
    *puVar1 = &PTR_FUN_149e18960;
    *(undefined2 *)(puVar1 + 1) = 2;
    *(undefined8 **)(param_1 + 0x38) = puVar1;
    iVar3 = *(int *)(param_1 + 8);
  }
  FUN_1424a8e40(puVar1);
  if (*(short *)(puVar1 + 1) < 0) {
    iVar4 = *(int *)((longlong)puVar1 + 0xc);
  }
  else {
    iVar4 = (int)*(short *)(puVar1 + 1) >> 5;
  }
  FUN_1424a90a0(puVar1,0,iVar4,iVar3);
  lVar2 = *(longlong *)(param_1 + 0x38);
LAB_1425ec32f:
  *(longlong *)(param_1 + 0x10) = lVar2;
  return lVar2;
}



// FUNCTION 1425ec350 FUN_1425ec350 body=70 status=ok
// SIG undefined FUN_1425ec350(void)

undefined8 * FUN_1425ec350(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::UnicodeSetIterator::vftable;
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425ec3a0 FUN_1425ec3a0 body=97 status=ok
// SIG undefined FUN_1425ec3a0(void)

void FUN_1425ec3a0(undefined8 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = 0x3b9ac9ff00000009;
  param_1[1] = 0x2c4653601;
  param_1[2] = 0x22df;
  *(undefined1 *)(param_1 + 3) = 0;
  switch(param_2 << 0x1b | param_2 >> 5) {
  case 0:
    return;
  case 1:
    uVar1 = 7;
    uVar2 = 0x60;
    uVar3 = 0xffffffa1;
    break;
  case 2:
    uVar1 = 0x10;
    uVar2 = 0x180;
    uVar3 = 0xfffffe81;
    break;
  default:
    *(undefined4 *)((longlong)param_1 + 0x14) = 0x80;
    return;
  case 4:
    uVar1 = 0x22;
    uVar2 = 0x1800;
    uVar3 = 0xffffe801;
  }
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



// FUNCTION 1425ec410 FUN_1425ec410 body=7 status=ok
// SIG undefined FUN_1425ec410(void)

longlong FUN_1425ec410(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | param_2;
  return param_1;
}



// FUNCTION 1425ec420 FUN_1425ec420 body=7 status=ok
// SIG undefined FUN_1425ec420(void)

longlong FUN_1425ec420(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return param_1;
}



// FUNCTION 1425ec430 FUN_1425ec430 body=1333 status=ok
// SIG undefined FUN_1425ec430(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1425ec430(uint *param_1,byte *param_2,int *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  byte *pbVar13;
  ulonglong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte bVar17;
  char *pcVar18;
  bool bVar19;
  undefined1 auStack_b8 [32];
  uint *local_98;
  uint *local_90;
  int *local_88;
  uint local_80 [2];
  char local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar11 = *param_2;
  uVar7 = 0;
  pbVar1 = param_2;
  if ((byte)(bVar11 - 0x30) < 10) {
    uVar7 = 1;
    pbVar5 = (byte *)0x0;
    pbVar15 = param_2;
    pbVar16 = param_2;
LAB_1425ec4ab:
    bVar10 = 0;
LAB_1425ec4c0:
    while( true ) {
      while( true ) {
        while( true ) {
          pbVar1 = pbVar1 + 1;
          bVar11 = *pbVar1;
          if (9 < (byte)(bVar11 - 0x30)) break;
          uVar7 = uVar7 + 1;
          pbVar16 = pbVar1;
        }
        if ((bVar11 != 0x2e) || (pbVar5 != (byte *)0x0)) break;
        pbVar15 = pbVar15 + (pbVar1 == pbVar15);
        pbVar5 = pbVar1;
      }
      pbVar6 = pbVar1;
      if (pbVar1 != param_2) break;
      if (bVar11 == 0x2b) {
        pbVar15 = pbVar15 + 1;
      }
      else {
        pbVar6 = param_2;
        if (bVar11 != 0x2d) break;
        pbVar15 = pbVar15 + 1;
        bVar10 = 0x80;
      }
    }
    if (pbVar16 == (byte *)0x0) goto LAB_1425ec5eb;
    if (bVar11 != 0) {
      local_80[0] = 1;
      if ((bVar11 | 0x20) == 0x65) {
        bVar19 = (pbVar6[1] - 0x2b & 0xfd) == 0;
        pbVar1 = pbVar6 + 1;
        if (bVar19) {
          pbVar1 = pbVar6 + 2;
        }
        bVar11 = pbVar6[(ulonglong)bVar19 + 1];
        if (pbVar6[(ulonglong)bVar19 + 1] != 0) {
          do {
            bVar17 = bVar11;
            pbVar13 = pbVar1;
            pbVar1 = pbVar13 + 1;
            if (bVar17 != 0x30) break;
            bVar11 = *pbVar1;
          } while (*pbVar1 != 0);
          bVar11 = *pbVar13;
          if ((byte)(bVar11 - 0x3a) < 0xf6) {
            uVar14 = 0;
            iVar12 = 0;
          }
          else {
            iVar12 = 0;
            uVar14 = 0;
            do {
              iVar12 = (uint)bVar11 + iVar12 * 10 + -0x30;
              bVar11 = pbVar1[uVar14];
              uVar14 = uVar14 + 1;
            } while (0xf5 < (byte)(bVar11 - 0x3a));
          }
          if (bVar11 == 0) {
            iVar8 = iVar12;
            if (uVar14 != 10) {
              iVar8 = 0x773593fe;
            }
            if ('1' < (char)bVar17) {
              iVar8 = 0x773593fe;
            }
            if (uVar14 < 10) {
              iVar8 = iVar12;
            }
            iVar12 = -iVar8;
            if (pbVar6[1] != 0x2d) {
              iVar12 = iVar8;
            }
            bVar11 = *pbVar15;
            goto joined_r0x0001425ec718;
          }
        }
        goto LAB_1425ec86a;
      }
      uVar9 = 1;
      goto LAB_1425ec87d;
    }
LAB_1425ec5c1:
    iVar12 = 0;
    bVar11 = *pbVar15;
joined_r0x0001425ec718:
    pbVar1 = pbVar15;
    if ((bVar11 == 0x30) && (pbVar15 < pbVar16)) {
      lVar2 = (longlong)pbVar16 - (longlong)pbVar15;
      do {
        if (*pbVar15 != 0x2e) {
          pbVar1 = pbVar15;
          if (*pbVar15 != 0x30) break;
          uVar7 = uVar7 - 1;
        }
        pbVar15 = pbVar15 + 1;
        lVar2 = lVar2 + -1;
        pbVar1 = pbVar16;
      } while (lVar2 != 0);
    }
    local_80[0] = 0;
    iVar8 = (int)pbVar5 - (int)pbVar16;
    if (pbVar16 <= pbVar5) {
      iVar8 = 0;
    }
    if (pbVar5 == (byte *)0x0) {
      iVar8 = 0;
    }
    local_88 = param_3;
    if (*param_3 < (int)uVar7) {
      uVar9 = uVar7;
      if ((int)uVar7 < 0x32) {
        if (3 < (longlong)(int)uVar7 - 0x2eU) {
          pcVar3 = local_78;
          goto LAB_1425ec7b5;
        }
        uVar9 = (uint)(byte)(&DAT_149c4cee0)[(int)uVar7];
      }
      pcVar3 = (char *)FUN_1424da030(uVar9);
      pcVar18 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        param_3 = local_88;
        uVar9 = 0x10;
        goto LAB_1425ec87d;
      }
    }
    else {
      pcVar3 = (char *)((longlong)param_1 + 9);
LAB_1425ec7b5:
      pcVar18 = (char *)0x0;
    }
    param_3 = local_88;
    uVar9 = iVar8 + iVar12;
    pcVar4 = pcVar3;
    for (; pbVar1 <= pbVar16; pbVar16 = pbVar16 + -1) {
      if (*pbVar16 != 0x2e) {
        *pcVar4 = *pbVar16 - 0x30;
        pcVar4 = pcVar4 + 1;
      }
    }
    *(byte *)(param_1 + 2) = bVar10;
    param_1[1] = uVar9;
    *param_1 = uVar7;
    if (*local_88 < (int)uVar7) {
      local_90 = local_80;
      local_80[1] = 0;
      local_98 = local_80 + 1;
      FUN_1425ec990(param_1,local_88,pcVar3,uVar7);
LAB_1425ec848:
      FUN_1425ece20(param_1,param_3,local_80 + 1,local_80);
    }
    else if (((int)uVar9 <= (int)(local_88[2] - uVar7)) ||
            (local_88[1] - *local_88 < (int)(uVar9 - 1))) {
      local_80[1] = 0;
      goto LAB_1425ec848;
    }
    if (pcVar18 != (char *)0x0) {
      FUN_1424da110(pcVar18);
    }
LAB_1425ec86a:
    if (local_80[0] == 0) goto LAB_1425ec894;
    uVar9 = local_80[0];
    if ((local_80[0] & 0xdd) != 0) {
      if ((local_80[0] & 0x40000000) == 0) goto LAB_1425ec87d;
      uVar9 = local_80[0] & 0xbfffffff;
    }
  }
  else {
    pbVar5 = param_2;
    if (bVar11 == 0x2e) {
LAB_1425ec4a8:
      pbVar15 = param_2 + 1;
      uVar7 = 0;
      pbVar16 = (byte *)0x0;
      goto LAB_1425ec4ab;
    }
    if (bVar11 == 0x2d) {
      pbVar15 = param_2 + 1;
      bVar10 = 0x80;
      uVar7 = 0;
      pbVar5 = (byte *)0x0;
      pbVar16 = (byte *)0x0;
      goto LAB_1425ec4c0;
    }
    if (bVar11 == 0x2b) {
      pbVar5 = (byte *)0x0;
      goto LAB_1425ec4a8;
    }
    bVar10 = 0;
    pbVar5 = (byte *)0x0;
    pbVar6 = param_2;
LAB_1425ec5eb:
    local_80[0] = 1;
    uVar9 = 1;
    if ((bVar11 != 0) && (pbVar5 == (byte *)0x0)) {
      *(undefined2 *)(param_1 + 2) = 0;
      param_1[0] = 1;
      param_1[1] = 0;
      lVar2 = 0;
      while( true ) {
        bVar11 = pbVar6[lVar2];
        if ((bVar11 != "infinity"[lVar2]) && (bVar11 != "INFINITY"[lVar2])) {
          lVar2 = 0;
          goto LAB_1425ec670;
        }
        if (bVar11 == 0) break;
        lVar2 = lVar2 + 1;
      }
LAB_1425ec68f:
      *(byte *)(param_1 + 2) = bVar10 | 0x40;
      goto LAB_1425ec894;
    }
LAB_1425ec87d:
    param_1[0] = 1;
    param_1[1] = 0;
    *(undefined2 *)(param_1 + 2) = 0x20;
  }
  FUN_1425ec410(param_3,uVar9);
LAB_1425ec894:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
LAB_1425ec670:
  bVar11 = pbVar6[lVar2];
  if ((bVar11 != (&DAT_149c4d05d)[lVar2]) && (bVar11 != (&DAT_149c4d059)[lVar2])) {
    bVar17 = bVar10 | 0x20;
    *(byte *)(param_1 + 2) = bVar17;
    bVar11 = *pbVar6;
    if ((bVar11 | 0x20) == 0x73) {
      bVar17 = bVar10 | 0x10;
      *(byte *)(param_1 + 2) = bVar17;
      bVar11 = pbVar6[1];
      pbVar6 = pbVar6 + 1;
    }
    if ((((bVar11 | 0x20) == 0x6e) && ((pbVar6[1] | 0x20) == 0x61)) && ((pbVar6[2] | 0x20) == 0x6e))
    {
      for (pbVar15 = pbVar6 + 3; bVar11 = *pbVar15, bVar11 == 0x30; pbVar15 = pbVar15 + 1) {
      }
      if (bVar11 == 0) goto LAB_1425ec894;
      if ((byte)(bVar11 - 0x3a) < 0xf6) {
        pbVar16 = (byte *)0x0;
      }
      else {
        pbVar16 = pbVar15 + -1;
        do {
          uVar7 = uVar7 + 1;
          bVar11 = pbVar16[2];
          pbVar16 = pbVar16 + 1;
        } while (0xf5 < (byte)(bVar11 - 0x3a));
      }
      if ((bVar11 == 0) &&
         (((int)uVar7 < *param_3 || (((char)param_3[6] == '\0' && ((int)uVar7 <= *param_3)))))) {
        pbVar5 = (byte *)0x0;
        bVar10 = bVar17;
        goto LAB_1425ec5c1;
      }
    }
    goto LAB_1425ec86a;
  }
  if (bVar11 != 0) goto code_r0x0001425ec68a;
  goto LAB_1425ec68f;
code_r0x0001425ec68a:
  lVar2 = lVar2 + 1;
  goto LAB_1425ec670;
}



// FUNCTION 1425ec990 FUN_1425ec990 body=1149 status=ok
// SIG undefined FUN_1425ec990(void)

void FUN_1425ec990(uint *param_1,uint *param_2,byte *param_3,uint param_4,int *param_5,uint *param_6
                  )

{
  undefined8 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  
  uVar10 = *param_2;
  uVar9 = param_4 - uVar10;
  if (uVar9 == 0 || (int)param_4 < (int)uVar10) {
    pbVar12 = (byte *)((longlong)param_1 + 9);
    if (pbVar12 == param_3) goto LAB_1425eca25;
    if (0 < (int)param_4) {
      uVar10 = param_4;
      if ((7 < param_4) && (0x1f < (ulonglong)((longlong)param_1 + (9 - (longlong)param_3)))) {
        if (param_4 < 0x20) {
          uVar17 = 0;
        }
        else {
          uVar17 = (ulonglong)(param_4 & 0xffffffe0);
          uVar16 = 0;
          do {
            uVar6 = *(undefined8 *)(param_3 + uVar16 + 8);
            uVar7 = *(undefined8 *)(param_3 + uVar16 + 0x10);
            uVar8 = *(undefined8 *)(param_3 + uVar16 + 0x10 + 8);
            puVar1 = (undefined8 *)((longlong)param_1 + uVar16 + 9);
            *puVar1 = *(undefined8 *)(param_3 + uVar16);
            puVar1[1] = uVar6;
            puVar1 = (undefined8 *)((longlong)param_1 + uVar16 + 0x19);
            *puVar1 = uVar7;
            puVar1[1] = uVar8;
            uVar16 = uVar16 + 0x20;
          } while (uVar17 != uVar16);
          if (uVar17 == param_4) goto LAB_1425eca22;
          if ((param_4 & 0x18) == 0) {
            pbVar12 = pbVar12 + uVar17;
            param_3 = param_3 + uVar17;
            uVar10 = param_4 - (param_4 & 0xffffffe0);
            goto LAB_1425eca04;
          }
        }
        uVar16 = (ulonglong)(param_4 & 0xfffffff8);
        do {
          *(undefined8 *)(pbVar12 + uVar17) = *(undefined8 *)(param_3 + uVar17);
          uVar17 = uVar17 + 8;
        } while (uVar16 != uVar17);
        param_3 = param_3 + uVar16;
        pbVar12 = pbVar12 + uVar16;
        uVar10 = param_4 - (param_4 & 0xfffffff8);
        if (uVar16 == param_4) goto LAB_1425eca22;
      }
LAB_1425eca04:
      uVar10 = uVar10 + 1;
      lVar20 = 0;
      do {
        pbVar12[lVar20] = param_3[lVar20];
        lVar20 = lVar20 + 1;
        uVar10 = uVar10 - 1;
      } while (1 < uVar10);
    }
LAB_1425eca22:
    *param_1 = param_4;
LAB_1425eca25:
    if (*param_5 == 0) {
      return;
    }
    *param_6 = *param_6 | 0x820;
    return;
  }
  param_1[1] = param_1[1] + uVar9;
  *(byte *)((longlong)param_6 + 1) = *(byte *)((longlong)param_6 + 1) | 8;
  iVar15 = *param_5;
  if (iVar15 < 2) {
    if ((int)uVar10 < 0) {
      if (iVar15 < 1) {
        if (0 < (int)param_4) {
          iVar13 = param_4 + 1;
          do {
            if (*param_3 != 0) {
              *param_5 = 1;
              goto LAB_1425ecd65;
            }
            param_3 = param_3 + 1;
            iVar13 = iVar13 + -1;
          } while (1 < iVar13);
        }
        if (iVar15 == 0) goto LAB_1425ecd69;
      }
      goto LAB_1425ecd65;
    }
  }
  else {
    *param_5 = 1;
    iVar15 = 1;
    if ((int)uVar10 < 0) {
LAB_1425ecd65:
      *(byte *)param_6 = (byte)*param_6 | 0x20;
LAB_1425ecd69:
      *(undefined1 *)((longlong)param_1 + 9) = 0;
      *param_1 = 1;
      return;
    }
  }
  iVar13 = 0;
  if (1 < uVar9) {
    uVar14 = (param_4 - 1) - uVar10;
    uVar18 = uVar14 & 3;
    if (2 < uVar9 - 2) {
      uVar14 = uVar14 & 0xfffffffc;
      do {
        if (*param_3 != 0) {
          *param_5 = 1;
          iVar15 = 1;
        }
        if (param_3[1] != 0) {
          *param_5 = 1;
          iVar15 = 1;
        }
        if (param_3[2] != 0) {
          *param_5 = 1;
          iVar15 = 1;
        }
        if (param_3[3] != 0) {
          *param_5 = 1;
          iVar15 = 1;
        }
        param_3 = param_3 + 4;
        uVar14 = uVar14 - 4;
      } while (uVar14 != 0);
    }
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      if (*param_3 != 0) {
        *param_5 = 1;
        iVar15 = 1;
      }
      param_3 = param_3 + 1;
    }
    iVar13 = uVar10 - (param_4 - 1);
  }
  uVar9 = iVar13 + uVar9;
  bVar2 = *param_3;
  uVar18 = (uint)bVar2;
  uVar10 = uVar9 - 1;
  if (uVar10 == 0) {
    if (bVar2 < 5) {
      iVar13 = 3;
      if (uVar18 != 0) goto LAB_1425ecc50;
    }
    else {
      iVar13 = 7;
      if (uVar18 == 5) {
        iVar13 = iVar15 + 5;
      }
LAB_1425ecc50:
      *param_5 = iVar13;
    }
    uVar10 = *param_2;
    uVar16 = (ulonglong)uVar10;
    if (0 < (int)uVar10) {
      *param_1 = uVar10;
      lVar20 = (longlong)param_1 + 9;
      if ((7 < uVar10) && (0x1f < (longlong)param_1 + ~(ulonglong)param_3 + 9)) {
        if (uVar10 < 0x20) {
          uVar17 = 0;
        }
        else {
          uVar17 = (ulonglong)(uVar10 & 0xffffffe0);
          uVar19 = 0;
          do {
            uVar6 = *(undefined8 *)(param_3 + uVar19 + 1 + 8);
            uVar7 = *(undefined8 *)(param_3 + uVar19 + 0x11);
            uVar8 = *(undefined8 *)(param_3 + uVar19 + 0x11 + 8);
            puVar1 = (undefined8 *)((longlong)param_1 + uVar19 + 9);
            *puVar1 = *(undefined8 *)(param_3 + uVar19 + 1);
            puVar1[1] = uVar6;
            puVar1 = (undefined8 *)((longlong)param_1 + uVar19 + 0x19);
            *puVar1 = uVar7;
            puVar1[1] = uVar8;
            uVar19 = uVar19 + 0x20;
          } while (uVar17 != uVar19);
          if (uVar17 == uVar16) goto LAB_1425eccaf;
          if ((uVar10 & 0x18) == 0) {
            uVar10 = uVar10 - (uVar10 & 0xffffffe0);
            lVar20 = lVar20 + uVar17;
            param_3 = param_3 + uVar17;
            goto LAB_1425ecc7e;
          }
        }
        uVar19 = (ulonglong)(uVar10 & 0xfffffff8);
        uVar10 = uVar10 - (uVar10 & 0xfffffff8);
        do {
          *(undefined8 *)(lVar20 + uVar17) = *(undefined8 *)(param_3 + uVar17 + 1);
          uVar17 = uVar17 + 8;
        } while (uVar19 != uVar17);
        param_3 = param_3 + uVar19;
        lVar20 = lVar20 + uVar19;
        if (uVar19 == uVar16) goto LAB_1425eccaf;
      }
LAB_1425ecc7e:
      uVar10 = uVar10 + 1;
      lVar11 = 0;
      do {
        *(byte *)(lVar20 + lVar11) = param_3[lVar11 + 1];
        lVar11 = lVar11 + 1;
        uVar10 = uVar10 - 1;
      } while (1 < uVar10);
      goto LAB_1425eccaf;
    }
  }
  else {
    uVar14 = (uint)(bVar2 >> ((byte)uVar10 & 0x1f)) *
             *(int *)(&DAT_149c4cf20 + (ulonglong)uVar10 * 4) >> 0x11;
    if ((&DAT_149c4ceb0)[uVar10] * uVar14 != uVar18) {
      iVar15 = 1;
    }
    uVar18 = uVar14 * 0x199a >> 0x10;
    *param_5 = (uint)(byte)(&DAT_149c4cff5)[uVar14 + uVar18 * -10] + iVar15;
    uVar10 = *param_2;
    if (0 < (int)uVar10) {
      *param_1 = uVar10;
      *(char *)((longlong)param_1 + 9) = (char)(uVar14 * 0x199a >> 0x10);
      if (0 < (int)(uVar10 - (1 - uVar9))) {
        iVar15 = *(int *)(&DAT_149c4cf20 + (ulonglong)uVar9 * 4);
        uVar3 = (&DAT_149c4ceb0)[uVar9];
        uVar4 = (&DAT_149c4ceb0)[1 - uVar9];
        lVar20 = 0;
        do {
          uVar10 = uVar10 - 1;
          uVar14 = (uint)(param_3[lVar20 + 1] >> ((byte)uVar9 & 0x1f)) * iVar15 >> 0x11;
          cVar5 = (char)uVar14;
          *(byte *)((longlong)param_1 + lVar20 + 9) =
               (param_3[lVar20 + 1] - cVar5 * (char)uVar3) * (char)uVar4 + (char)uVar18;
          if ((int)uVar10 < 1) break;
          *(char *)((longlong)param_1 + lVar20 + 10) = cVar5;
          lVar20 = lVar20 + 1;
          uVar18 = uVar14;
        } while (0 < (int)(uVar9 + uVar10 + -1));
      }
      goto LAB_1425eccaf;
    }
  }
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  *param_1 = 1;
LAB_1425eccaf:
  if (*param_5 != 0) {
    *(byte *)param_6 = (byte)*param_6 | 0x20;
  }
  return;
}



// FUNCTION 1425ece20 FUN_1425ece20 body=314 status=ok
// SIG undefined FUN_1425ece20(void)

void FUN_1425ece20(int *param_1,int *param_2,int *param_3,byte *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  int local_38;
  undefined2 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = param_2[2];
  if ((iVar1 - *param_1) + 1 < param_1[1]) {
    iVar2 = *param_3;
LAB_1425ece61:
    if (iVar2 != 0) {
      FUN_1425efae0(param_1,param_2,iVar2,param_4);
    }
    iVar1 = param_1[1];
    iVar2 = (param_2[1] - *param_2) + 1;
    iVar3 = iVar1 - iVar2;
    if (iVar3 != 0 && iVar2 <= iVar1) {
      iVar2 = *param_1;
      if ((param_2[1] - iVar2) + 1 < iVar1) {
        FUN_1425efdc0(param_1,param_2,param_4);
      }
      else if ((char)param_2[6] != '\0') {
        if (((iVar2 != 1) || (*(char *)((longlong)param_1 + 9) != '\0')) ||
           ((*(byte *)(param_1 + 2) & 0x70) != 0)) {
          iVar1 = FUN_1425eef00((longlong)param_1 + 9,iVar2,iVar3);
          *param_1 = iVar1;
          iVar1 = param_1[1];
        }
        param_1[1] = iVar1 - iVar3;
        param_4[1] = param_4[1] | 4;
      }
    }
  }
  else {
    iVar2 = iVar1 - *param_1;
    if (iVar2 < param_1[1]) {
      local_34 = 0x100;
      local_3c = 1;
      local_38 = iVar1;
      iVar1 = FUN_1425eece0(param_1,&local_3c,CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1));
      if (iVar1 == -0x80000000) {
        *param_4 = *param_4 | 0x10;
        goto LAB_1425ecf4d;
      }
      iVar2 = *param_3;
      if ((iVar1 != 0) || (-1 < iVar2)) goto LAB_1425ece61;
      FUN_1425efae0(param_1,param_2,iVar2,param_4);
    }
    FUN_1425efec0(param_1,param_2,param_3,param_4);
  }
LAB_1425ecf4d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 1425ecf70 FUN_1425ecf70 body=278 status=ok
// SIG undefined FUN_1425ecf70(void)

void FUN_1425ecf70(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  if (param_1 == param_2) {
    return;
  }
  *(char *)(param_1 + 2) = (char)param_2[2];
  param_1[1] = param_2[1];
  *param_1 = *param_2;
  *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_2 + 9);
  uVar3 = *param_2;
  uVar11 = (ulonglong)uVar3;
  if ((int)uVar3 < 2) {
    return;
  }
  if (uVar3 < 0x32) {
    uVar11 = (ulonglong)(byte)(&DAT_149c4cee0)[uVar11];
  }
  puVar7 = (undefined1 *)((longlong)param_2 + uVar11 + 9);
  puVar9 = (undefined1 *)((longlong)param_2 + 10);
  if (puVar7 <= puVar9) {
    return;
  }
  puVar8 = (undefined1 *)((longlong)param_1 + 10);
  uVar11 = uVar11 - 1;
  if ((7 < uVar11) && (0x1f < (ulonglong)((longlong)param_1 - (longlong)param_2))) {
    if (uVar11 < 0x20) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar11 & 0xffffffffffffffe0;
      uVar10 = 0;
      do {
        puVar1 = (undefined8 *)((longlong)param_2 + uVar10 + 10);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)param_2 + uVar10 + 0x1a);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        puVar2 = (undefined8 *)((longlong)param_1 + uVar10 + 10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)((longlong)param_1 + uVar10 + 0x1a);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        uVar10 = uVar10 + 0x20;
      } while (uVar12 != uVar10);
      if (uVar11 == uVar12) {
        return;
      }
      if ((uVar11 & 0x18) == 0) {
        puVar9 = puVar9 + uVar12;
        puVar8 = puVar8 + uVar12;
        goto LAB_1425ed070;
      }
    }
    uVar10 = uVar11 & 0xfffffffffffffff8;
    do {
      *(undefined8 *)(puVar8 + uVar12) = *(undefined8 *)(puVar9 + uVar12);
      uVar12 = uVar12 + 8;
    } while (uVar10 != uVar12);
    puVar8 = puVar8 + uVar10;
    puVar9 = puVar9 + uVar10;
    if (uVar11 == uVar10) {
      return;
    }
  }
LAB_1425ed070:
  do {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  } while (puVar9 != puVar7);
  return;
}



// FUNCTION 1425ed090 FUN_1425ed090 body=118 status=ok
// SIG undefined FUN_1425ed090(void)

void FUN_1425ed090(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  uint *local_30;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  local_30 = &local_1c;
  local_38 = 0x80;
  FUN_1425ed110();
  if (local_1c != 0) {
    uVar1 = local_1c;
    if ((local_1c & 0xdd) != 0) {
      if ((local_1c & 0x40000000) == 0) {
        *param_1 = 1;
        *(undefined2 *)(param_1 + 1) = 0x20;
      }
      else {
        uVar1 = local_1c & 0xbfffffff;
      }
    }
    FUN_1425ec410(param_4,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1425ed110 FUN_1425ed110 body=3433 status=ok
// SIG undefined FUN_1425ed110(void)

void FUN_1425ed110(undefined8 *param_1,uint *param_2,uint *param_3,uint *param_4,byte param_5,
                  uint *param_6)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint *puVar15;
  int iVar16;
  byte bVar17;
  uint *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint *puVar21;
  uint *puVar22;
  ulonglong uVar23;
  uint uVar24;
  byte bVar25;
  uint uVar26;
  int iVar27;
  bool bVar29;
  undefined1 auStack_1a8 [32];
  uint *local_188;
  uint *local_180;
  int local_178;
  byte local_161;
  undefined8 *local_160;
  uint *local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  uint *local_130;
  ulonglong local_128;
  int local_11c;
  undefined1 *local_118;
  uint *local_110;
  uint *local_108;
  undefined1 *local_100;
  int local_f4;
  uint *local_f0;
  uint local_e4;
  byte *local_e0;
  longlong local_d8;
  uint local_cc;
  uint local_c8 [20];
  undefined1 local_78 [48];
  ulonglong local_48;
  ulonglong uVar28;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  bVar25 = (byte)param_2[2];
  bVar2 = (byte)param_3[2];
  bVar17 = (bVar2 ^ bVar25) & 0x80;
  if (((bVar25 | bVar2) & 0x70) == 0) {
    uVar5 = *param_4;
    uVar20 = (ulonglong)uVar5;
    if (((*(char *)((longlong)param_3 + 9) != '\0') || ((bVar2 & 0x70) != 0)) || (*param_3 != 1)) {
      uVar24 = *param_2;
      if (((*(char *)((longlong)param_2 + 9) == '\0') && ((bVar25 & 0x70) == 0)) && (uVar24 == 1)) {
        if ((char)param_5 < '\0') {
          local_cc = 0;
          uVar5 = param_2[1];
          uVar24 = param_3[1];
          FUN_1425ecf70(param_1,param_2);
          *(byte *)(param_1 + 1) = bVar17;
          *(uint *)((longlong)param_1 + 4) = uVar5 - uVar24;
LAB_1425ed79e:
          FUN_1425ece20(param_1,param_4,&local_cc,param_6);
          goto LAB_1425edcc1;
        }
        if ((param_5 & 0x20) == 0) {
          uVar5 = param_3[1];
          FUN_1425ecf70(param_1,param_2);
          if ((int)uVar5 < *(int *)((longlong)param_1 + 4)) {
            *(uint *)((longlong)param_1 + 4) = uVar5;
          }
          goto LAB_1425edcc1;
        }
LAB_1425ed3ff:
        *param_1 = 1;
        *(undefined1 *)((longlong)param_1 + 9) = 0;
        *(byte *)(param_1 + 1) = bVar17;
        goto LAB_1425edcc1;
      }
      pbVar10 = (byte *)((longlong)param_2 + 9);
      uVar6 = *param_3;
      uVar26 = ((uVar24 + param_2[1]) - param_3[1]) - uVar6;
      uVar28 = (ulonglong)uVar26;
      local_148 = uVar20;
      if ((param_5 != 0x80) && ((int)uVar26 < 0)) {
        if ((param_5 & 0x20) != 0) goto LAB_1425ed3ff;
        if (((int)param_2[1] <= (int)param_3[1]) &&
           (((param_5 & 0x40) != 0 || (uVar26 != 0xffffffff)))) {
          local_cc = 0;
          *(byte *)(param_1 + 1) = bVar25;
          *(uint *)((longlong)param_1 + 4) = param_2[1];
          local_180 = param_6;
          local_188 = &local_cc;
          FUN_1425ec990(param_1,param_4,pbVar10,*param_2);
          goto LAB_1425ed79e;
        }
      }
      if ((int)uVar5 < 0x31) {
        local_138 = (ulonglong)(byte)(&DAT_149c4cee1)[(int)uVar5];
        if (uVar5 - 0x2f < 2) goto LAB_1425ed355;
        puVar7 = (undefined1 *)0x0;
        local_100 = local_78;
      }
      else {
        local_138 = (longlong)(int)uVar5 + 1U & 0xffffffff;
LAB_1425ed355:
        puVar7 = (undefined1 *)FUN_1424da030();
        if (puVar7 == (undefined1 *)0x0) {
          *(byte *)param_6 = (byte)*param_6 | 0x10;
          goto LAB_1425edcc1;
        }
        uVar6 = *param_3;
        uVar24 = *param_2;
        local_100 = puVar7;
      }
      uVar5 = (uVar6 + (int)local_148) - 1;
      if ((int)(uVar6 + (int)local_148) <= (int)uVar24) {
        uVar5 = uVar24;
      }
      if ((int)uVar5 < 0x32) {
        uVar5 = (uint)(byte)(&DAT_149c4cee0)[(int)uVar5];
      }
      local_150 = CONCAT44(local_150._4_4_,uVar5 + 2);
      local_140 = CONCAT44(local_140._4_4_,uVar5 + 3);
      uVar6 = uVar5 + 2;
      if (-1 < (char)param_5) {
        uVar6 = uVar5 + 3;
      }
      uVar20 = (ulonglong)uVar6;
      local_158 = param_2;
      local_118 = puVar7;
      local_110 = param_3;
      if (uVar6 < 0x49) {
        puVar15 = local_c8;
        puVar8 = (uint *)0x0;
LAB_1425ed426:
        if ((int)uVar24 < 0x32) {
          uVar24 = (uint)(byte)(&DAT_149c4cee0)[(int)uVar24];
        }
        puVar18 = (uint *)((longlong)puVar15 + (uVar20 - 1));
        uVar12 = (ulonglong)uVar24;
        pbVar9 = pbVar10 + (uVar12 - 1);
        puVar22 = puVar18;
        if (pbVar10 <= pbVar9) {
          puVar13 = (uint *)((longlong)local_158 + uVar12 + 7);
          puVar21 = local_158 + 2;
          if (puVar13 < local_158 + 2) {
            puVar21 = puVar13;
          }
          uVar14 = (longlong)local_158 + (uVar12 - (longlong)puVar21) + 8;
          if ((0x1f < uVar14) &&
             (0xf < (longlong)local_158 + ((uVar12 - (longlong)puVar15) - uVar20) + 9)) {
            uVar23 = uVar14 & 0xfffffffffffffff0;
            pbVar9 = pbVar9 + -uVar23;
            puVar22 = (uint *)((longlong)puVar18 - uVar23);
            lVar19 = 0;
            do {
              uVar4 = *(undefined8 *)(pbVar10 + lVar19 + (uVar12 - 0x10) + 8);
              pbVar1 = (byte *)((longlong)puVar15 + lVar19 + (uVar20 - 0x10));
              *(undefined8 *)pbVar1 = *(undefined8 *)(pbVar10 + lVar19 + (uVar12 - 0x10));
              *(undefined8 *)(pbVar1 + 8) = uVar4;
              lVar19 = lVar19 + -0x10;
            } while (-lVar19 != uVar23);
            if (uVar14 == uVar23) goto LAB_1425ed4c1;
          }
          do {
            *(byte *)puVar22 = *pbVar9;
            puVar22 = (uint *)((longlong)puVar22 + -1);
            pbVar9 = pbVar9 + -1;
          } while (pbVar10 <= pbVar9);
        }
LAB_1425ed4c1:
        local_161 = bVar17;
        local_160 = param_1;
        local_108 = puVar8;
        local_f0 = param_4;
        if (puVar15 <= puVar22) {
          pbVar10 = (byte *)((longlong)puVar15 + -1);
          if ((byte *)((longlong)puVar22 + -1) < (byte *)((longlong)puVar15 + -1)) {
            pbVar10 = (byte *)((longlong)puVar22 + -1);
          }
          memset(pbVar10 + 1,0,(longlong)puVar22 - (longlong)pbVar10);
        }
        pbVar10 = (byte *)((longlong)local_110 + 9);
        uVar24 = *local_110;
        if ((longlong)(int)uVar24 < 0x32) {
          local_128 = (ulonglong)(byte)(&DAT_149c4cee0)[(int)uVar24];
          local_e0 = pbVar10 + (local_128 - 1);
          bVar25 = *(byte *)((longlong)local_110 + local_128 + 8);
          uVar12 = (ulonglong)bVar25;
          local_e4 = ((uint)bVar25 + (uint)bVar25) * 5;
          uVar6 = (uint)bVar25;
          bVar29 = 1 < uVar24;
          uVar24 = (uint)(byte)(&DAT_149c4cee0)[(int)uVar24];
          if (bVar29) goto LAB_1425ed568;
        }
        else {
          local_128 = (ulonglong)uVar24;
          local_e0 = pbVar10 + (local_128 - 1);
          bVar25 = *(byte *)((longlong)local_110 + local_128 + 8);
          local_e4 = ((uint)bVar25 + (uint)bVar25) * 5;
LAB_1425ed568:
          uVar6 = (uint)bVar25;
          uVar12 = (ulonglong)(uVar6 + 1);
          local_e4 = local_e4 +
                     (uint)(uVar24 != 2) + (uint)*(byte *)((longlong)local_110 + local_128 + 7);
          local_128 = (ulonglong)uVar24;
        }
        bVar2 = (byte)*puVar18;
        if (9 < bVar2) {
          puVar8 = &DAT_149c4ceb8;
          do {
            uVar28 = (ulonglong)((int)uVar28 - 1);
            uVar24 = *puVar8;
            puVar8 = puVar8 + 1;
          } while (uVar24 < bVar2 || uVar24 == bVar2);
        }
        if (9 < uVar6) {
          puVar8 = &DAT_149c4ceb8;
          do {
            uVar28 = (ulonglong)((int)uVar28 + 1);
            uVar24 = *puVar8;
            puVar8 = puVar8 + 1;
          } while (uVar24 <= uVar6);
        }
        iVar27 = (int)uVar28;
        if ((char)param_5 < '\0') {
          local_11c = local_158[1] - local_110[1];
          local_f4 = 0;
          if (bVar2 < bVar25) {
            local_140._0_4_ = uVar5 + 1;
            uVar28 = (ulonglong)(iVar27 - 1);
          }
          else {
            local_140._0_4_ = (int)local_150;
          }
        }
        else {
          uVar5 = *local_158;
          if ((longlong)(int)uVar5 < 0x32) {
            uVar5 = (uint)(byte)(&DAT_149c4cee0)[(int)uVar5];
          }
          uVar24 = 1;
          if (iVar27 < 0) {
            uVar24 = -iVar27;
          }
          iVar16 = (int)local_140;
          local_150 = uVar12;
          local_130 = (uint *)uVar20;
          FUN_1425ef3e0(puVar15);
          uVar28 = (ulonglong)(iVar27 + uVar24);
          local_f4 = iVar16 - (uVar5 + uVar24);
          if ((int)uVar24 < 1) {
            local_11c = 0;
          }
          else {
            local_11c = 0;
            memset((byte *)((longlong)puVar15 + ~(ulonglong)(uVar24 - 1) + (longlong)local_130),0,
                   (ulonglong)uVar24);
          }
          uVar12 = local_150;
        }
        local_130 = (uint *)(local_100 + (local_138 - 1));
        lVar19 = (longlong)(int)local_140;
        local_d8 = (longlong)(int)local_128;
        local_140 = 0;
        local_100 = (undefined1 *)((ulonglong)local_100 & 0xffffffff00000000);
        uVar14 = local_128;
        local_150 = uVar28;
LAB_1425ed812:
        local_138 = lVar19 - local_d8;
        puVar8 = (uint *)(local_138 + (longlong)puVar15);
        bVar25 = 0;
        while( true ) {
          bVar2 = (byte)*puVar18;
          while ((iVar27 = (int)uVar20, puVar15 < puVar18 && (bVar2 == 0))) {
            puVar18 = (uint *)((longlong)puVar18 + -1);
            uVar20 = (ulonglong)(iVar27 - 1);
            bVar2 = *(byte *)puVar18;
          }
          if (iVar27 < lVar19) break;
          uVar5 = (uint)uVar12;
          if (iVar27 == (int)lVar19) {
            puVar22 = puVar18;
            pbVar9 = local_e0;
            if (pbVar10 <= local_e0) goto LAB_1425ed8e0;
            do {
              bVar17 = 0;
              while( true ) {
                bVar3 = (byte)*puVar22;
                if ((bVar3 != bVar17) || (puVar22 == puVar15)) {
                  if (bVar3 < bVar17) goto LAB_1425ed91f;
                  uVar5 = local_e4;
                  if (bVar3 != bVar17) goto LAB_1425ed830;
                  bVar25 = bVar25 + 1;
                  *(byte *)puVar15 = 0;
                  uVar20 = 1;
                  goto LAB_1425ed91f;
                }
                puVar22 = (uint *)((longlong)puVar22 + -1);
                pbVar9 = pbVar9 + -1;
                if (pbVar9 < pbVar10) break;
LAB_1425ed8e0:
                bVar17 = *pbVar9;
              }
            } while( true );
          }
LAB_1425ed830:
          uVar5 = ((uint)*(byte *)((longlong)puVar18 + -1) + ((uint)bVar2 + (uint)bVar2 * 4) * 2) /
                  uVar5;
          local_178 = uVar5 + (uVar5 == 0);
          bVar25 = bVar25 + (char)local_178;
          local_178 = -local_178;
          local_188 = (uint *)((ulonglong)local_188 & 0xffffffff00000000);
          local_180 = puVar8;
          FUN_1425ef730(puVar8,iVar27 - (int)local_138,pbVar10,uVar14);
          uVar14 = local_128;
        }
LAB_1425ed91f:
        iVar27 = (int)uVar20;
        uVar5 = (uint)local_150;
        if (((int)local_100 == 0) && (bVar25 == 0)) {
          iVar16 = 0;
        }
        else {
          *(byte *)local_130 = bVar25;
          if ((int)local_100 == 0) {
            puVar8 = &DAT_149c4ceb4;
            do {
              local_140 = (ulonglong)((int)local_140 + 1);
              uVar24 = *puVar8;
              puVar8 = puVar8 + 1;
            } while (uVar24 <= bVar25);
          }
          else {
            local_140 = (ulonglong)((int)local_140 + 1);
          }
          iVar16 = (int)local_100 + 1;
          local_130 = (uint *)((longlong)local_130 + -1);
          if ((int)(uint)local_148 < (int)local_140) goto LAB_1425eda01;
        }
        if (((byte)*puVar15 == 0) && (iVar27 == 1)) {
          if (((param_5 & 0x50) != 0) ||
             (((int)uVar5 <= local_11c && (char)param_5 < '\0' ||
              ((char)param_5 >= '\0' && uVar5 == 0)))) goto LAB_1425eda01;
LAB_1425ed800:
          local_100 = (undefined1 *)CONCAT44(local_100._4_4_,iVar16);
          lVar19 = lVar19 + -1;
          local_150 = (ulonglong)(uVar5 - 1);
          goto LAB_1425ed812;
        }
        if (((char)param_5 < '\0') || (uVar5 != 0)) goto LAB_1425ed800;
        uVar5 = 0;
LAB_1425eda01:
        if (iVar16 == 0) {
          *(byte *)local_130 = 0;
          uVar24 = 1;
          puVar8 = local_130;
        }
        else {
          uVar24 = (uint)local_140;
          puVar8 = (uint *)((longlong)local_130 + 1);
        }
        local_cc = 0;
        puVar18 = puVar8;
        bVar25 = local_161;
        uVar6 = uVar24;
        if ((char)param_5 < '\0') {
          if (((byte)*puVar15 != 0) || (1 < iVar27)) {
            local_cc = 1;
          }
          goto LAB_1425edc52;
        }
        if ((int)(uint)local_148 < (int)(uVar24 + uVar5)) {
          *(byte *)param_6 = (byte)*param_6 | 4;
        }
        else {
          if ((param_5 & 0x50) == 0) goto LAB_1425edc52;
          bVar25 = (byte)local_158[2];
          if (((byte)*puVar15 == 0) && (iVar27 == 1)) {
            uVar5 = local_158[1];
            if ((int)local_110[1] < (int)local_158[1]) {
              uVar5 = local_110[1];
            }
            *(undefined4 *)local_160 = 1;
            *(undefined1 *)((longlong)local_160 + 9) = 0;
            *(uint *)((longlong)local_160 + 4) = uVar5;
            *(byte *)(local_160 + 1) = bVar25 & 0x80;
            puVar11 = local_160;
            puVar15 = local_f0;
          }
          else {
            iVar27 = ((uVar5 + local_f4) - local_158[1]) + local_110[1];
            local_138 = CONCAT71(local_138._1_7_,(byte)*puVar8);
            if (local_f4 < iVar27) {
              iVar27 = local_f4;
            }
            uVar6 = FUN_1425ef3e0(puVar15,uVar20,iVar27);
            puVar22 = local_110;
            if ((int)uVar6 < 1) {
LAB_1425edc0f:
              uVar26 = (uint)(byte)(&DAT_149c4cee0)[(int)uVar6];
            }
            else {
              puVar18 = (uint *)((ulonglong)(uVar6 - 1) + (longlong)puVar15);
              do {
                if (((byte)*puVar18 != 0) || (uVar6 == 1)) break;
                uVar6 = uVar6 - 1;
                puVar18 = (uint *)((longlong)puVar18 + -1);
              } while (puVar15 <= puVar18);
              uVar26 = uVar6;
              if ((int)uVar6 < 0x32) goto LAB_1425edc0f;
            }
            uVar5 = local_158[1];
            if ((int)local_110[1] < (int)local_158[1]) {
              uVar5 = local_110[1];
            }
            puVar18 = puVar15;
            local_130 = puVar8;
            if ((param_5 & 0x10) != 0) {
              local_178 = 1;
              local_188 = (uint *)((ulonglong)local_188 & 0xffffffff00000000);
              local_128 = CONCAT44(local_128._4_4_,uVar26);
              local_180 = puVar15;
              local_161 = bVar25;
              iVar27 = FUN_1425ef730(puVar15,uVar26,puVar15,uVar26);
              uVar20 = (ulonglong)(int)*puVar22;
              if ((longlong)uVar20 < 0x32) {
                uVar20 = (ulonglong)(byte)(&DAT_149c4cee0)[uVar20];
              }
              local_188 = (uint *)CONCAT44(local_188._4_4_,puVar22[1] - uVar5);
              iVar16 = FUN_1425ef940(puVar15,iVar27,pbVar10,uVar20);
              bVar25 = local_161;
              if (iVar16 == -0x80000000) {
                *(byte *)param_6 = (byte)*param_6 | 0x10;
                goto LAB_1425edca2;
              }
              if (0 < iVar27) {
                puVar8 = puVar15;
                do {
                  uVar26 = *puVar8;
                  *(byte *)puVar8 = (byte)uVar26 >> 1;
                  if (((byte)uVar26 & 1) != 0) {
                    *(byte *)((longlong)puVar8 + -1) = *(byte *)((longlong)puVar8 + -1) + 5;
                  }
                  puVar8 = (uint *)((longlong)puVar8 + 1);
                } while (puVar8 < (uint *)((longlong)iVar27 + (longlong)puVar15));
              }
              if (iVar16 < 1) {
                bVar2 = (byte)local_138 & iVar16 == 0;
                local_138 = CONCAT71(local_138._1_7_,bVar2);
                if (bVar2 == 0) goto LAB_1425edc52;
              }
              if (uVar24 == (uint)local_148) {
                puVar8 = local_130;
                if (1 < (int)(uint)local_148) {
                  uVar24 = (uint)local_148 - 2;
                  iVar27 = (uint)local_148 + 1;
                  do {
                    if ((byte)*puVar8 != 9) goto LAB_1425ede3f;
                    puVar8 = (uint *)((longlong)puVar8 + 1);
                    iVar27 = iVar27 + -1;
                  } while (2 < iVar27);
                  local_148 = 1;
                  puVar8 = (uint *)((longlong)local_130 + (ulonglong)uVar24 + 1);
                }
                if ((&DAT_149c4ceb0)[(int)(uint)local_148] - 1 == (uint)(byte)*puVar8) {
                  *(byte *)param_6 = (byte)*param_6 | 4;
                  goto LAB_1425edca2;
                }
              }
LAB_1425ede3f:
              uVar20 = (ulonglong)(int)*local_110;
              if ((longlong)uVar20 < 0x32) {
                uVar20 = (ulonglong)(byte)(&DAT_149c4cee0)[uVar20];
              }
              local_188 = (uint *)CONCAT44(local_188._4_4_,local_110[1] - uVar5);
              local_178 = -1;
              local_180 = puVar15;
              uVar24 = FUN_1425ef730(puVar15,local_128 & 0xffffffff,pbVar10,uVar20);
              uVar6 = -uVar24;
              if ((int)uVar24 < 0) {
                puVar8 = (uint *)((ulonglong)~uVar24 + (longlong)puVar15);
                do {
                  if (((byte)*puVar8 != 0) || (uVar6 == 1)) break;
                  uVar6 = uVar6 - 1;
                  puVar8 = (uint *)((longlong)puVar8 + -1);
                } while (puVar15 <= puVar8);
                bVar25 = bVar25 + 0x80;
              }
              else {
                bVar25 = bVar25 + 0x80;
              }
            }
LAB_1425edc52:
            puVar15 = local_f0;
            puVar11 = local_160;
            *(uint *)((longlong)local_160 + 4) = uVar5;
            *(byte *)(local_160 + 1) = bVar25 & 0x80;
            local_188 = &local_cc;
            local_180 = param_6;
            FUN_1425ec990(local_160,local_f0,puVar18,uVar6);
          }
          FUN_1425ece20(puVar11,puVar15,&local_cc,param_6);
        }
LAB_1425edca2:
        puVar7 = local_118;
        if (local_108 != (uint *)0x0) {
          FUN_1424da110();
        }
      }
      else {
        puVar8 = (uint *)FUN_1424da030(uVar6 + 1);
        if (puVar8 != (uint *)0x0) {
          uVar24 = *local_158;
          puVar15 = puVar8;
          goto LAB_1425ed426;
        }
        *(byte *)param_6 = (byte)*param_6 | 0x10;
        puVar7 = local_118;
      }
      if (puVar7 != (undefined1 *)0x0) {
        FUN_1424da110(puVar7);
      }
      goto LAB_1425edcc1;
    }
    if (((*(char *)((longlong)param_2 + 9) == '\0') && ((bVar25 & 0x70) == 0)) && (*param_2 == 1)) {
      *(undefined2 *)(param_1 + 1) = 0;
      *param_1 = 1;
      *(byte *)param_6 = (byte)*param_6 | 8;
      goto LAB_1425edcc1;
    }
    *(undefined2 *)(param_1 + 1) = 0;
    *param_1 = 1;
    if ((param_5 & 0x50) != 0) {
      *param_6 = *param_6 | 0x80;
      goto LAB_1425edcc1;
    }
    *param_6 = *param_6 | 2;
  }
  else {
    if (((bVar25 | bVar2) & 0x30) != 0) {
      local_188 = param_6;
      FUN_1425ee9a0(param_1,param_2,param_3,param_4);
      goto LAB_1425edcc1;
    }
    if ((bVar25 & 0x40) == 0) {
      local_cc = 0;
      if ((param_5 & 0x50) == 0) {
        *param_1 = 1;
        *(undefined1 *)((longlong)param_1 + 9) = 0;
        *(byte *)(param_1 + 1) = bVar17;
        if ((char)param_5 < '\0') {
          *(uint *)((longlong)param_1 + 4) = (param_4[2] - *param_4) + 1;
          *(byte *)((longlong)param_6 + 1) = *(byte *)((longlong)param_6 + 1) | 4;
        }
      }
      else {
        *(byte *)(param_1 + 1) = bVar25;
        *(uint *)((longlong)param_1 + 4) = param_2[1];
        local_180 = param_6;
        local_188 = &local_cc;
        FUN_1425ec990(param_1,param_4,(longlong)param_2 + 9,*param_2);
      }
      goto LAB_1425ed79e;
    }
    if (((param_5 & 0x50) != 0) || ((bVar2 & 0x40) != 0)) {
      *(byte *)param_6 = (byte)*param_6 | 0x80;
      goto LAB_1425edcc1;
    }
    *param_1 = 1;
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  *(byte *)(param_1 + 1) = bVar17 | 0x40;
LAB_1425edcc1:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1a8);
}



// FUNCTION 1425eded0 FUN_1425eded0 body=2678 status=ok
// SIG undefined FUN_1425eded0(void)

void FUN_1425eded0(int *param_1,uint *param_2,uint *param_3,undefined8 param_4,byte *param_5)

{
  ulonglong *puVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  char cVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  ulonglong *puVar16;
  char *pcVar17;
  uint uVar18;
  byte *pbVar19;
  ulonglong uVar20;
  char *pcVar21;
  longlong lVar22;
  uint *puVar23;
  ulonglong uVar24;
  byte bVar25;
  uint *puVar26;
  int iVar27;
  uint *puVar28;
  uint uVar29;
  uint *puVar30;
  uint uVar31;
  int iVar32;
  ulonglong uVar33;
  longlong lVar34;
  uint *puVar35;
  ulonglong *_Dst;
  undefined1 auStack_228 [32];
  byte *local_208;
  byte *local_200;
  uint local_1f8;
  byte local_1e9;
  uint *local_1e8;
  char *local_1e0;
  uint *local_1d8;
  ulonglong local_1d0;
  uint *local_1c8;
  uint *local_1c0;
  int *local_1b8;
  uint *local_1b0;
  undefined8 local_1a8;
  uint *local_1a0;
  char *local_198;
  ulonglong local_190;
  char *local_188;
  uint *local_180;
  longlong local_178;
  ulonglong local_170;
  ulonglong *local_168;
  char *local_160;
  char *local_158;
  undefined4 local_14c;
  char local_148 [160];
  uint local_a8 [12];
  uint local_78 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_14c = 0;
  bVar3 = (byte)param_2[2];
  bVar2 = (byte)param_3[2];
  bVar25 = (bVar2 ^ bVar3) & 0x80;
  if (((bVar2 | bVar3) & 0x70) != 0) {
    if (((bVar2 | bVar3) & 0x30) == 0) {
      if ((((((bVar3 & 0x40) == 0) && (*(char *)((longlong)param_2 + 9) == '\0')) &&
           ((bVar3 & 0x70) == 0)) && (*param_2 == 1)) ||
         ((((bVar2 & 0x40) == 0 && (*(char *)((longlong)param_3 + 9) == '\0')) &&
          (((bVar2 & 0x70) == 0 && (*param_3 == 1)))))) {
        *param_5 = *param_5 | 0x80;
      }
      else {
        param_1[0] = 1;
        param_1[1] = 0;
        *(undefined1 *)((longlong)param_1 + 9) = 0;
        *(byte *)(param_1 + 2) = bVar25 | 0x40;
      }
    }
    else {
      local_208 = param_5;
      FUN_1425ee9a0(param_1,param_2,param_3,param_4);
    }
    goto LAB_1425ee95a;
  }
  uVar14 = *param_2;
  uVar18 = *param_3;
  uVar31 = uVar18;
  if ((int)uVar18 < (int)uVar14) {
    uVar31 = uVar14;
  }
  puVar35 = param_3;
  if ((int)uVar14 < (int)uVar18) {
    puVar35 = param_2;
    uVar18 = uVar14;
    param_2 = param_3;
  }
  if ((int)uVar18 < 3) {
    if ((int)uVar31 < 0x32) {
      uVar31 = (uint)(byte)(&DAT_149c4cee0)[(int)uVar31];
    }
    if (uVar31 + (byte)(&DAT_149c4cee0)[(int)uVar18] < 0x92) {
      pcVar17 = local_148;
      pcVar21 = (char *)0x0;
      local_1e9 = bVar25;
    }
    else {
      local_1e9 = bVar25;
      pcVar21 = (char *)FUN_1424da030();
      pcVar17 = pcVar21;
      if (pcVar21 == (char *)0x0) {
        *param_5 = *param_5 | 0x10;
        goto LAB_1425ee95a;
      }
    }
    *pcVar17 = '\0';
    uVar14 = *param_2;
    if ((longlong)(int)uVar14 < 0x32) {
      uVar14 = (uint)(byte)(&DAT_149c4cee0)[(int)uVar14];
    }
    uVar18 = *puVar35;
    local_198 = pcVar21;
    if (0x31 < (longlong)(int)uVar18) {
LAB_1425ee4b9:
      iVar13 = 1;
      local_1c8 = (uint *)0x0;
      iVar27 = 0;
      lVar34 = 0;
      local_1b8 = param_1;
      local_1b0 = puVar35;
      local_1a8 = param_4;
      local_1a0 = param_2;
      do {
        bVar3 = *(byte *)((longlong)puVar35 + lVar34 + 9);
        if (bVar3 == 0) {
          pcVar17[iVar13] = '\0';
          iVar13 = iVar13 + 1;
        }
        else {
          local_200 = (byte *)(pcVar17 + lVar34);
          local_1f8 = (uint)bVar3;
          local_208 = (byte *)((ulonglong)local_208 & 0xffffffff00000000);
          iVar13 = FUN_1425ef730(local_200,iVar13 + iVar27,(longlong)param_2 + 9,uVar14);
          iVar13 = iVar13 + (int)lVar34;
        }
        iVar27 = iVar27 + -1;
        lVar22 = lVar34 + 10;
        lVar34 = lVar34 + 1;
      } while ((ulonglong)((longlong)puVar35 + lVar22) < (longlong)puVar35 + (ulonglong)uVar18 + 9);
      puVar26 = (uint *)0x0;
      goto LAB_1425ee885;
    }
    if (uVar18 != 0) {
      uVar18 = (uint)(byte)(&DAT_149c4cee0)[(int)uVar18];
      goto LAB_1425ee4b9;
    }
    *(byte *)(param_1 + 2) = local_1e9;
    iVar13 = 1;
    puVar26 = (uint *)0x0;
    puVar30 = (uint *)0x0;
LAB_1425ee8b9:
    pcVar21 = pcVar17 + (iVar13 - 1);
    do {
      if ((*pcVar21 != '\0') || (iVar13 == 1)) break;
      iVar13 = iVar13 + -1;
      pcVar21 = pcVar21 + -1;
    } while (pcVar17 <= pcVar21);
LAB_1425ee8d4:
    *param_1 = iVar13;
    iVar27 = puVar35[1] + param_2[1];
    iVar32 = -0x773593fe;
    if (iVar27 < 1) {
      iVar32 = iVar27;
    }
    if (-1 < (int)(param_2[1] & puVar35[1])) {
      iVar32 = iVar27;
    }
    param_1[1] = iVar32;
    local_200 = param_5;
    local_208 = (byte *)&local_14c;
    FUN_1425ec990(param_1,param_4,pcVar17,iVar13);
    FUN_1425ece20(param_1,param_4,&local_14c,param_5);
    pcVar21 = local_198;
    pcVar17 = local_198;
  }
  else {
    if ((int)uVar31 < 0x5b) {
      puVar26 = local_78;
      local_1c8 = (uint *)0x0;
      local_1a8 = param_4;
    }
    else {
      local_1a8 = param_4;
      local_1c8 = (uint *)FUN_1424da030();
      puVar26 = local_1c8;
    }
    local_1d0 = (ulonglong)((int)(uVar31 + 8) / 9 + (uVar18 + 8) / 9);
    if (uVar18 < 0x5b) {
      local_1d8 = local_a8;
      local_1c0 = (uint *)0x0;
    }
    else {
      local_1c0 = (uint *)FUN_1424da030();
      local_1d8 = local_1c0;
    }
    iVar13 = (int)local_1d0;
    iVar27 = iVar13 + 0xe;
    if (-1 < iVar13 + 7) {
      iVar27 = iVar13 + 7;
    }
    iVar13 = ((iVar27 >> 3) + iVar13) * 8;
    if (iVar13 < 0xa1) {
      pcVar15 = local_148;
      pcVar12 = (char *)0x0;
      pcVar17 = local_1e0;
      pcVar21 = local_198;
    }
    else {
      pcVar15 = (char *)FUN_1424da030(iVar13);
      pcVar12 = pcVar15;
      pcVar17 = local_1e0;
      pcVar21 = local_198;
    }
    local_198 = pcVar12;
    local_1e0 = pcVar15;
    if (((puVar26 != (uint *)0x0) && (local_1d8 != (uint *)0x0)) && (local_1e0 != (char *)0x0)) {
      local_1e8 = (uint *)(longlong)(iVar27 >> 3);
      uVar14 = *param_2;
      puVar30 = puVar26;
      if (0 < (int)uVar14) {
        pbVar19 = (byte *)((longlong)param_2 + 9);
        do {
          *puVar30 = 0;
          uVar18 = uVar14 - 1;
          if (7 < uVar14 - 1) {
            uVar18 = 8;
          }
          if (uVar18 == 0) {
            uVar33 = 0;
            uVar31 = 0;
LAB_1425ee200:
            *puVar30 = uVar31 + (uint)*pbVar19 * (&DAT_149c4ceb0)[uVar33];
            pbVar19 = pbVar19 + 1;
            uVar11 = uVar14 - 1;
            uVar29 = uVar14;
          }
          else {
            uVar33 = 0;
            uVar31 = 0;
            do {
              uVar31 = (uint)pbVar19[uVar33] * (&DAT_149c4ceb0)[uVar33] + uVar31;
              *puVar30 = uVar31;
              uVar31 = (uint)pbVar19[uVar33 + 1] * (&DAT_149c4ceb4)[uVar33] + uVar31;
              *puVar30 = uVar31;
              uVar33 = uVar33 + 2;
            } while ((uVar18 + 1 & 0x1e) != uVar33);
            uVar14 = uVar14 - (int)uVar33;
            pbVar19 = pbVar19 + uVar33;
            uVar11 = uVar14;
            uVar29 = uVar14 + 1;
            if ((uVar18 + 1 & 1) != 0) goto LAB_1425ee200;
          }
          uVar14 = uVar11;
          puVar30 = puVar30 + 1;
        } while (1 < (int)uVar29);
      }
      _Dst = (ulonglong *)(local_1e0 + (longlong)local_1e8 * 8);
      uVar14 = *puVar35;
      puVar28 = local_1d8;
      if (0 < (int)uVar14) {
        pbVar19 = (byte *)((longlong)puVar35 + 9);
        do {
          *puVar28 = 0;
          uVar18 = uVar14 - 1;
          if (7 < uVar14 - 1) {
            uVar18 = 8;
          }
          if (uVar18 == 0) {
            uVar33 = 0;
            uVar31 = 0;
LAB_1425ee31f:
            *puVar28 = uVar31 + (uint)*pbVar19 * (&DAT_149c4ceb0)[uVar33];
            pbVar19 = pbVar19 + 1;
            uVar29 = uVar14 - 1;
            uVar11 = uVar14;
          }
          else {
            uVar33 = 0;
            uVar31 = 0;
            do {
              uVar31 = (uint)pbVar19[uVar33] * (&DAT_149c4ceb0)[uVar33] + uVar31;
              *puVar28 = uVar31;
              uVar31 = (uint)pbVar19[uVar33 + 1] * (&DAT_149c4ceb4)[uVar33] + uVar31;
              *puVar28 = uVar31;
              uVar33 = uVar33 + 2;
            } while ((uVar18 + 1 & 0x1e) != uVar33);
            uVar14 = uVar14 - (int)uVar33;
            pbVar19 = pbVar19 + uVar33;
            uVar29 = uVar14;
            uVar11 = uVar14 + 1;
            if ((uVar18 + 1 & 1) != 0) goto LAB_1425ee31f;
          }
          uVar14 = uVar29;
          puVar28 = puVar28 + 1;
        } while (1 < (int)uVar11);
      }
      puVar28 = puVar28 + -1;
      puVar1 = _Dst + (int)local_1d0;
      local_1b8 = param_1;
      local_1b0 = puVar35;
      local_1a0 = param_2;
      if (0 < (int)local_1d0) {
        puVar16 = (ulonglong *)(local_1e0 + (longlong)local_1e8 * 8 + 8);
        if (local_1e0 + (longlong)local_1e8 * 8 + 8 < puVar1) {
          puVar16 = puVar1;
        }
        memset(_Dst,0,((ulonglong)
                       ((longlong)puVar16 + (longlong)local_1e8 * -8 + ~(ulonglong)local_1e0) &
                      0xfffffffffffffff8) + 8);
      }
      if (local_1d8 <= puVar28) {
        puVar35 = (uint *)((longlong)puVar30 + -3);
        if ((uint *)((longlong)puVar30 + -3) <= puVar26 + 1) {
          puVar35 = puVar26 + 1;
        }
        local_158 = (char *)(~(ulonglong)puVar26 + (longlong)puVar35);
        local_160 = local_1e0 +
                    (longlong)(((ulonglong)local_158 >> 2) + (longlong)local_1e8) * 8 + 8;
        local_168 = (ulonglong *)
                    ((longlong)puVar26 + ((ulonglong)local_158 & 0xfffffffffffffffc) + 4);
        local_170 = ((ulonglong)local_158 >> 2) + 1;
        local_190 = local_170 & 0xfffffffffffffffc;
        local_178 = local_190 * 8;
        local_180 = puVar26 + local_190;
        local_188 = local_1e0 + (longlong)local_1e8 * 8 + 0x10;
        lVar34 = 0;
        iVar13 = 0x12;
        puVar35 = local_1d8;
        do {
          if (puVar26 <= puVar30 + -1) {
            lVar22 = (longlong)puVar35 - (longlong)local_1d8 >> 2;
            puVar16 = _Dst + lVar22;
            puVar23 = puVar26;
            if (&DAT_00000023 < local_158) {
              if ((local_168 <= puVar16 || local_160 + lVar22 * 8 <= puVar26) &&
                 (local_1d8 + lVar34 + 1 <= puVar16 || local_160 + lVar22 * 8 <= puVar35)) {
                puVar16 = puVar16 + local_190;
                uVar14 = *puVar35;
                uVar33 = 0;
                do {
                  uVar20 = *(ulonglong *)(puVar26 + uVar33);
                  uVar24 = *(ulonglong *)(puVar26 + uVar33 + 2);
                  lVar8 = *(longlong *)((longlong)(local_188 + uVar33 * 8 + lVar22 * 8 + -0x10) + 8)
                  ;
                  lVar9 = *(longlong *)(local_188 + uVar33 * 8 + lVar22 * 8);
                  lVar10 = *(longlong *)((longlong)(local_188 + uVar33 * 8 + lVar22 * 8) + 8);
                  *(ulonglong *)(local_188 + uVar33 * 8 + lVar22 * 8 + -0x10) =
                       *(longlong *)(local_188 + uVar33 * 8 + lVar22 * 8 + -0x10) +
                       (uVar20 & 0xffffffff) * (ulonglong)uVar14;
                  *(ulonglong *)((longlong)(local_188 + uVar33 * 8 + lVar22 * 8 + -0x10) + 8) =
                       lVar8 + (uVar20 >> 0x20) * (ulonglong)uVar14;
                  *(ulonglong *)(local_188 + uVar33 * 8 + lVar22 * 8) =
                       lVar9 + (uVar24 & 0xffffffff) * (ulonglong)uVar14;
                  *(ulonglong *)((longlong)(local_188 + uVar33 * 8 + lVar22 * 8) + 8) =
                       lVar10 + (uVar24 >> 0x20) * (ulonglong)uVar14;
                  uVar33 = uVar33 + 4;
                } while (local_190 != uVar33);
                puVar23 = local_180;
                if (local_170 == local_190) goto LAB_1425ee77a;
              }
            }
            do {
              *puVar16 = *puVar16 + (ulonglong)*puVar35 * (ulonglong)*puVar23;
              puVar23 = puVar23 + 1;
              puVar16 = puVar16 + 1;
            } while (puVar23 <= puVar30 + -1);
          }
LAB_1425ee77a:
          bVar4 = iVar13 < 2;
          iVar13 = iVar13 + -1;
          if ((bVar4 || puVar35 == puVar28) && (iVar13 = 0x12, puVar16 = _Dst, 0 < (int)local_1d0))
          {
            do {
              uVar33 = *puVar16;
              if (999999999 < uVar33) {
                uVar20 = uVar33 / 1000000000;
                if (999999999999999999 < uVar33) {
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = uVar33 >> 0x12;
                  uVar24 = (ulonglong)(SUB164(auVar5 * ZEXT816(0x49c97747490f),8) >> 0x18);
                  puVar16[2] = puVar16[2] + uVar24;
                  uVar33 = uVar33 + uVar24 * -1000000000000000000;
                  uVar20 = uVar20 + uVar24 * 0xc4653600;
                }
                puVar16[1] = puVar16[1] + (uVar20 & 0xffffffff);
                *puVar16 = (uVar20 & 0xffffffff) * -1000000000 + uVar33;
              }
              puVar16 = puVar16 + 1;
            } while (puVar16 < puVar1);
            iVar13 = 0x12;
          }
          puVar35 = puVar35 + 1;
          lVar34 = lVar34 + 1;
          local_1e8 = puVar26;
        } while (puVar35 <= puVar28);
      }
      pcVar17 = local_1e0;
      pcVar21 = local_1e0;
      iVar13 = (int)local_1e0;
      if (0 < (int)local_1d0) {
        do {
          uVar14 = (uint)*_Dst;
          cVar6 = (char)(uVar14 / 10);
          *pcVar21 = cVar6 * -10 + (char)uVar14;
          cVar7 = (char)(uVar14 / 100);
          pcVar21[1] = cVar7 * -10 + cVar6;
          cVar6 = (char)(uVar14 / 1000);
          pcVar21[2] = cVar6 * -10 + cVar7;
          cVar7 = (char)(uVar14 / 10000);
          pcVar21[3] = cVar7 * -10 + cVar6;
          cVar6 = (char)(uVar14 / 100000);
          pcVar21[4] = cVar6 * -10 + cVar7;
          cVar7 = (char)(uVar14 / 1000000);
          pcVar21[5] = cVar7 * -10 + cVar6;
          cVar6 = (char)(uVar14 / 10000000);
          pcVar21[6] = cVar6 * -10 + cVar7;
          pcVar21[7] = (char)(uVar14 / 100000000) * -10 + cVar6;
          pcVar21[8] = (char)(uVar14 / 100000000);
          _Dst = _Dst + 1;
          iVar13 = (int)(pcVar17 + 9);
          pcVar17 = pcVar17 + 9;
          pcVar21 = pcVar21 + 9;
        } while (_Dst < puVar1);
      }
      iVar13 = iVar13 - (int)local_1e0;
      puVar26 = local_1c0;
      pcVar17 = local_1e0;
      local_1e9 = bVar25;
LAB_1425ee885:
      *(byte *)(local_1b8 + 2) = local_1e9;
      param_2 = local_1a0;
      puVar30 = local_1c8;
      puVar35 = local_1b0;
      param_4 = local_1a8;
      param_1 = local_1b8;
      if (0 < iVar13) goto LAB_1425ee8b9;
      goto LAB_1425ee8d4;
    }
    *param_5 = *param_5 | 0x10;
    puVar26 = local_1c0;
    puVar30 = local_1c8;
    local_1e0 = pcVar17;
    pcVar17 = local_198;
  }
  local_198 = pcVar21;
  if (pcVar17 != (char *)0x0) {
    FUN_1424da110();
  }
  if (puVar26 != (uint *)0x0) {
    FUN_1424da110(puVar26);
  }
  if (puVar30 != (uint *)0x0) {
    FUN_1424da110(puVar30);
  }
LAB_1425ee95a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_228);
}



// FUNCTION 1425ee9a0 FUN_1425ee9a0 body=823 status=ok
// SIG undefined FUN_1425ee9a0(void)

uint * FUN_1425ee9a0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  char *pcVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  char *pcVar15;
  byte *pbVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  if ((param_2[2] & 0x10) == 0) {
    if (param_3 != (uint *)0x0) {
      if ((param_3[2] & 0x10) == 0) {
        if ((param_2[2] & 0x20) == 0) {
          param_2 = param_3;
        }
      }
      else {
        *param_5 = *param_5 | 0x40000080;
        param_2 = param_3;
      }
    }
  }
  else {
    *param_5 = *param_5 | 0x40000080;
  }
  if ((int)*param_2 <= (int)*param_4) {
    if (param_2 == param_1) goto LAB_1425eec11;
    *(char *)(param_1 + 2) = (char)param_2[2];
    param_1[1] = param_2[1];
    *param_1 = *param_2;
    *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_2 + 9);
    uVar8 = *param_2;
    uVar18 = (ulonglong)uVar8;
    if ((int)uVar8 < 2) goto LAB_1425eec11;
    if (uVar8 < 0x32) {
      uVar18 = (ulonglong)(byte)(&DAT_149c4cee0)[uVar18];
    }
    puVar9 = (undefined1 *)((longlong)param_2 + uVar18 + 9);
    puVar14 = (undefined1 *)((longlong)param_2 + 10);
    if (puVar9 <= puVar14) goto LAB_1425eec11;
    puVar12 = (undefined1 *)((longlong)param_1 + 10);
    uVar18 = uVar18 - 1;
    if ((7 < uVar18) && (0x1f < (ulonglong)((longlong)param_1 - (longlong)param_2))) {
      if (uVar18 < 0x20) {
        uVar13 = 0;
      }
      else {
        uVar13 = uVar18 & 0xffffffffffffffe0;
        uVar17 = 0;
        do {
          puVar2 = (undefined8 *)((longlong)param_2 + uVar17 + 10);
          uVar4 = puVar2[1];
          puVar3 = (undefined8 *)((longlong)param_2 + uVar17 + 0x1a);
          uVar5 = *puVar3;
          uVar6 = puVar3[1];
          puVar3 = (undefined8 *)((longlong)param_1 + uVar17 + 10);
          *puVar3 = *puVar2;
          puVar3[1] = uVar4;
          puVar2 = (undefined8 *)((longlong)param_1 + uVar17 + 0x1a);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          uVar17 = uVar17 + 0x20;
        } while (uVar13 != uVar17);
        if (uVar18 == uVar13) goto LAB_1425eec11;
        if ((uVar18 & 0x18) == 0) {
          puVar14 = puVar14 + uVar13;
          puVar12 = puVar12 + uVar13;
          goto LAB_1425eecc0;
        }
      }
      uVar17 = uVar18 & 0xfffffffffffffff8;
      do {
        *(undefined8 *)(puVar12 + uVar13) = *(undefined8 *)(puVar14 + uVar13);
        uVar13 = uVar13 + 8;
      } while (uVar17 != uVar13);
      puVar12 = puVar12 + uVar17;
      puVar14 = puVar14 + uVar17;
      if (uVar18 == uVar17) goto LAB_1425eec11;
    }
LAB_1425eecc0:
    do {
      *puVar12 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar12 = puVar12 + 1;
    } while (puVar14 != puVar9);
    goto LAB_1425eec11;
  }
  *(char *)(param_1 + 2) = (char)param_2[2];
  pcVar1 = (char *)((longlong)param_1 + 9);
  uVar8 = *param_4;
  if ((longlong)(int)uVar8 < 0x32) {
    uVar7 = 0;
    if (uVar8 != 0) {
      uVar8 = (uint)(byte)(&DAT_149c4cee0)[(int)uVar8];
      goto LAB_1425eea0b;
    }
LAB_1425eeb7a:
    uVar7 = (uint)(byte)(&DAT_149c4cee0)[(int)uVar7];
  }
  else {
LAB_1425eea0b:
    uVar17 = (longlong)param_1 + (ulonglong)uVar8 + 9;
    uVar18 = (longlong)param_1 + 10U;
    if ((longlong)param_1 + 10U < uVar17) {
      uVar18 = uVar17;
    }
    pcVar15 = (char *)((longlong)param_2 + 9);
    uVar18 = (uVar18 - (longlong)param_1) - 9;
    pcVar11 = pcVar1;
    if ((uVar18 < 8) || ((ulonglong)((longlong)param_1 - (longlong)param_2) < 0x20)) {
LAB_1425eeb56:
      do {
        *pcVar11 = *pcVar15;
        pcVar11 = pcVar11 + 1;
        pcVar15 = pcVar15 + 1;
      } while (pcVar11 < pcVar1 + uVar8);
    }
    else if (uVar18 < 0x20) {
      uVar17 = 0;
LAB_1425eeb2c:
      uVar13 = uVar18 & 0xfffffffffffffff8;
      do {
        *(undefined8 *)(pcVar1 + uVar17) = *(undefined8 *)(pcVar15 + uVar17);
        uVar17 = uVar17 + 8;
      } while (uVar13 != uVar17);
      pcVar11 = pcVar1 + uVar13;
      pcVar15 = pcVar15 + uVar13;
      if (uVar18 != uVar13) goto LAB_1425eeb56;
    }
    else {
      uVar17 = uVar18 & 0xffffffffffffffe0;
      uVar13 = 0;
      do {
        puVar2 = (undefined8 *)((longlong)param_2 + uVar13 + 9);
        uVar4 = puVar2[1];
        puVar3 = (undefined8 *)((longlong)param_2 + uVar13 + 0x19);
        uVar5 = *puVar3;
        uVar6 = puVar3[1];
        puVar3 = (undefined8 *)((longlong)param_1 + uVar13 + 9);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar2 = (undefined8 *)((longlong)param_1 + uVar13 + 0x19);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        uVar13 = uVar13 + 0x20;
      } while (uVar17 != uVar13);
      if (uVar18 != uVar17) {
        if ((uVar18 & 0x18) == 0) {
          pcVar15 = pcVar15 + uVar17;
          pcVar11 = pcVar1 + uVar17;
          goto LAB_1425eeb56;
        }
        goto LAB_1425eeb2c;
      }
    }
    uVar7 = *param_4;
    if ((int)uVar7 < 0x32) goto LAB_1425eeb7a;
  }
  *param_1 = uVar7;
  uVar8 = *param_4;
  if ((int)uVar8 < (int)uVar7) {
    if ((int)uVar8 < 1) {
      *pcVar1 = '\0';
      uVar8 = 1;
    }
    else {
      uVar7 = uVar8;
      if (uVar8 < 0x32) {
        uVar7 = (uint)(byte)(&DAT_149c4cee0)[uVar8];
      }
      pbVar16 = (byte *)(pcVar1 + ((ulonglong)uVar7 - 1));
      iVar10 = (uVar8 - uVar7) + 1;
      if (iVar10 != 1) {
        *pbVar16 = (byte)((uint)*pbVar16 % (uint)(&DAT_149c4ceb0)[iVar10]);
      }
      uVar7 = (uint)((longlong)pbVar16 - (longlong)pcVar1);
      uVar8 = uVar7 + 1;
      if (uVar7 < 0x7fffffff) {
        pcVar15 = pcVar1 + ((longlong)pbVar16 - (longlong)pcVar1 & 0xffffffff);
        do {
          if ((*pcVar15 != '\0') || (uVar8 == 1)) break;
          uVar8 = uVar8 - 1;
          pcVar15 = pcVar15 + -1;
        } while (pcVar1 <= pcVar15);
      }
    }
    *param_1 = uVar8;
  }
LAB_1425eec11:
  *(byte *)(param_1 + 2) = (byte)param_1[2] & 0xcf | 0x20;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1425eece0 FUN_1425eece0 body=405 status=ok
// SIG undefined FUN_1425eece0(void)

uint FUN_1425eece0(int *param_1,int *param_2,char param_3)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar8;
  
  uVar3 = 1;
  if ((*(char *)((longlong)param_1 + 9) == '\0') && (*param_1 == 1)) {
    bVar8 = (*(byte *)(param_1 + 2) & 0x70) == 0;
    uVar3 = (uint)!bVar8;
  }
  else {
    bVar8 = false;
  }
  if (param_3 == '\0') {
    uVar5 = 0;
    if (!bVar8) {
      uVar5 = (uint)(-1 < (char)param_1[2]) * 2 - 1;
    }
    if (((*(char *)((longlong)param_2 + 9) == '\0') && (*param_2 == 1)) &&
       (bVar4 = *(byte *)(param_2 + 2), (bVar4 & 0x70) == 0)) {
      iVar7 = 0;
    }
    else {
      bVar4 = *(byte *)(param_2 + 2);
      iVar7 = (uint)(-1 < (char)bVar4) * 2 + -1;
    }
    if (iVar7 < (int)uVar5) {
      return 1;
    }
    if (bVar8 || (int)uVar5 < iVar7) {
      return -(uint)((int)uVar5 < iVar7);
    }
  }
  else if ((*(char *)((longlong)param_2 + 9) == '\0') && (*param_2 == 1)) {
    bVar4 = *(byte *)(param_2 + 2);
    uVar5 = 1;
    if ((bVar4 & 0x70) == 0 || bVar8) {
      return -(uint)((bVar4 & 0x70) != 0) | uVar3;
    }
  }
  else {
    if (bVar8) {
      return 0xffffffff;
    }
    bVar4 = *(byte *)(param_2 + 2);
    uVar5 = 1;
  }
  if (((bVar4 | *(byte *)(param_1 + 2)) & 0x40) == 0) {
    uVar3 = -uVar5;
    piVar1 = param_2;
    if (param_1[1] <= param_2[1]) {
      uVar3 = uVar5;
      piVar1 = param_1;
      param_1 = param_2;
    }
    uVar6 = (ulonglong)*param_1;
    if ((longlong)uVar6 < 0x32) {
      uVar6 = (ulonglong)(byte)(&DAT_149c4cee0)[uVar6];
    }
    uVar2 = (ulonglong)*piVar1;
    if ((longlong)uVar2 < 0x32) {
      uVar2 = (ulonglong)(byte)(&DAT_149c4cee0)[uVar2];
    }
    iVar7 = FUN_1425ef940((longlong)piVar1 + 9,uVar2,(longlong)param_1 + 9,uVar6,
                          param_1[1] - piVar1[1]);
    uVar5 = uVar3 * iVar7;
    if (iVar7 == -0x80000000) {
      uVar5 = 0x80000000;
    }
  }
  else if ((bVar4 & 0x40) != 0) {
    uVar3 = -uVar5;
    uVar5 = 0;
    if ((*(byte *)(param_1 + 2) & 0x40) == 0) {
      uVar5 = uVar3;
    }
  }
  return uVar5;
}



// FUNCTION 1425eee80 FUN_1425eee80 body=113 status=ok
// SIG undefined FUN_1425eee80(void)

void FUN_1425eee80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 auStack_48 [32];
  uint *local_28;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  local_28 = &local_1c;
  FUN_1425eded0();
  if (local_1c != 0) {
    uVar1 = local_1c;
    if ((local_1c & 0xdd) != 0) {
      if ((local_1c & 0x40000000) == 0) {
        *param_1 = 1;
        *(undefined2 *)(param_1 + 1) = 0x20;
      }
      else {
        uVar1 = local_1c & 0xbfffffff;
      }
    }
    FUN_1425ec410(param_4,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1425eef00 FUN_1425eef00 body=701 status=ok
// SIG undefined FUN_1425eef00(void)

uint FUN_1425eef00(byte *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar17;
  longlong lVar18;
  byte bVar19;
  int iVar20;
  byte *pbVar21;
  byte *pbVar22;
  uint uVar23;
  ulonglong uVar16;
  
  uVar10 = (ulonglong)param_3;
  if (param_3 == 0) {
    return param_2;
  }
  uVar13 = param_3 + param_2;
  if ((int)uVar13 < 2) {
    *param_1 = *param_1 * *(char *)(&DAT_149c4ceb0 + (int)param_3);
    return uVar13;
  }
  if ((int)param_2 < 0x32) {
    param_2 = (uint)(byte)(&DAT_149c4cee0)[(int)param_2];
  }
  uVar11 = (ulonglong)param_2;
  pbVar7 = param_1 + uVar11 + -1;
  if ((int)param_3 < 0x32) {
    uVar10 = (ulonglong)(byte)(&DAT_149c4cee0)[(int)param_3];
  }
  pbVar9 = pbVar7 + uVar10;
  iVar14 = param_3 - (int)uVar10;
  iVar3 = iVar14 + 1;
  if (iVar3 == 1) {
    if (param_1 <= pbVar7) {
      uVar12 = 1 - (longlong)(param_1 + uVar11);
      uVar16 = -(longlong)param_1;
      if ((ulonglong)-(longlong)param_1 < uVar12) {
        uVar16 = uVar12;
      }
      pbVar15 = param_1 + uVar11 + uVar16;
      if (&DAT_0000004f < pbVar15) {
        lVar18 = 0;
        if (param_1 + -1 <= param_1 + (uVar11 - 2)) {
          lVar18 = (longlong)(param_1 + (uVar11 - 2)) - (longlong)(param_1 + -1);
        }
        if (((pbVar9 + -lVar18 <= pbVar9) && (pbVar7 + -lVar18 <= pbVar7)) && ((int)uVar10 != 0)) {
          pbVar21 = (byte *)((ulonglong)pbVar15 & 0xfffffffffffffff0);
          pbVar9 = pbVar9 + -(longlong)pbVar21;
          pbVar7 = pbVar7 + -(longlong)pbVar21;
          pbVar22 = pbVar21;
          pbVar17 = param_1 + uVar11;
          do {
            pbVar8 = pbVar17 + -0x10;
            uVar4 = *(undefined4 *)(pbVar17 + -0xc);
            uVar5 = *(undefined4 *)(pbVar17 + -8);
            uVar6 = *(undefined4 *)(pbVar17 + -4);
            pbVar17 = pbVar8 + uVar10;
            *(undefined4 *)pbVar17 = *(undefined4 *)pbVar8;
            *(undefined4 *)(pbVar17 + 4) = uVar4;
            *(undefined4 *)(pbVar17 + 8) = uVar5;
            *(undefined4 *)(pbVar17 + 0xc) = uVar6;
            pbVar22 = pbVar22 + -0x10;
            pbVar17 = pbVar8;
          } while (pbVar22 != (byte *)0x0);
          if (pbVar15 == pbVar21) goto LAB_1425eefc0;
        }
      }
      do {
        *pbVar9 = *pbVar7;
        pbVar7 = pbVar7 + -1;
        pbVar9 = pbVar9 + -1;
      } while (param_1 <= pbVar7);
    }
LAB_1425eefc0:
    bVar19 = 0;
  }
  else {
    uVar11 = (ulonglong)uVar13;
    if (uVar13 < 0x32) {
      uVar11 = (ulonglong)(byte)(&DAT_149c4cee0)[uVar13];
    }
    iVar20 = 0;
    bVar19 = 0;
    if (param_1 <= pbVar7) {
      iVar14 = -iVar14;
      iVar1 = *(int *)(&DAT_149c4cf20 + (longlong)iVar14 * 4);
      iVar2 = (&DAT_149c4ceb0)[iVar14];
      iVar3 = (&DAT_149c4ceb0)[iVar3];
      do {
        bVar19 = *pbVar7;
        uVar23 = (uint)(bVar19 >> ((byte)iVar14 & 0x1f)) * iVar1 >> 0x11;
        if (pbVar7 + uVar10 <= param_1 + (uVar11 - 1)) {
          pbVar7[uVar10] = (char)iVar20 + (char)uVar23;
        }
        iVar20 = ((uint)bVar19 - uVar23 * iVar2) * iVar3;
        bVar19 = (byte)iVar20;
        pbVar7 = pbVar7 + -1;
      } while (param_1 <= pbVar7);
      pbVar9 = pbVar7 + uVar10;
    }
  }
  if (pbVar9 < param_1) {
    return uVar13;
  }
  *pbVar9 = bVar19;
  pbVar7 = pbVar9 + -1;
  if (pbVar7 < param_1) {
    return uVar13;
  }
  uVar10 = 1 - (longlong)pbVar9;
  if (uVar10 <= (ulonglong)-(longlong)param_1 && (byte *)-uVar10 != param_1) {
    uVar10 = -(longlong)param_1;
  }
  pbVar15 = pbVar9 + uVar10;
  if (&DAT_00000003 < pbVar15) {
    if (&DAT_0000001f < pbVar15) {
      pbVar17 = (byte *)((ulonglong)pbVar15 & 0xffffffffffffffe0);
      lVar18 = 0;
      do {
        pbVar22 = pbVar9 + lVar18 + -0x10;
        pbVar22[0] = 0;
        pbVar22[1] = 0;
        pbVar22[2] = 0;
        pbVar22[3] = 0;
        pbVar22[4] = 0;
        pbVar22[5] = 0;
        pbVar22[6] = 0;
        pbVar22[7] = 0;
        pbVar22[8] = 0;
        pbVar22[9] = 0;
        pbVar22[10] = 0;
        pbVar22[0xb] = 0;
        pbVar22[0xc] = 0;
        pbVar22[0xd] = 0;
        pbVar22[0xe] = 0;
        pbVar22[0xf] = 0;
        pbVar22 = pbVar9 + lVar18 + -0x20;
        pbVar22[0] = 0;
        pbVar22[1] = 0;
        pbVar22[2] = 0;
        pbVar22[3] = 0;
        pbVar22[4] = 0;
        pbVar22[5] = 0;
        pbVar22[6] = 0;
        pbVar22[7] = 0;
        pbVar22[8] = 0;
        pbVar22[9] = 0;
        pbVar22[10] = 0;
        pbVar22[0xb] = 0;
        pbVar22[0xc] = 0;
        pbVar22[0xd] = 0;
        pbVar22[0xe] = 0;
        pbVar22[0xf] = 0;
        lVar18 = lVar18 + -0x20;
      } while ((byte *)-lVar18 != pbVar17);
      if (pbVar15 == pbVar17) {
        return uVar13;
      }
      if (((ulonglong)pbVar15 & 0x1c) == 0) {
        pbVar7 = pbVar7 + -(longlong)pbVar17;
        goto LAB_1425ef1a0;
      }
    }
    else {
      pbVar17 = (byte *)0x0;
    }
    pbVar22 = (byte *)((ulonglong)pbVar15 & 0xfffffffffffffffc);
    pbVar7 = pbVar7 + -(longlong)pbVar22;
    lVar18 = -(longlong)pbVar17;
    do {
      pbVar17 = pbVar9 + lVar18 + -4;
      pbVar17[0] = 0;
      pbVar17[1] = 0;
      pbVar17[2] = 0;
      pbVar17[3] = 0;
      lVar18 = lVar18 + -4;
    } while ((byte *)-lVar18 != pbVar22);
    if (pbVar15 == pbVar22) {
      return uVar13;
    }
  }
LAB_1425ef1a0:
  do {
    *pbVar7 = 0;
    pbVar7 = pbVar7 + -1;
  } while (param_1 <= pbVar7);
  return uVar13;
}



// FUNCTION 1425ef1c0 FUN_1425ef1c0 body=241 status=ok
// SIG undefined FUN_1425ef1c0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1425ef1c0(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auStack_68 [32];
  uint *local_48;
  longlong local_40;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 0;
  local_30 = 0;
  if ((*(byte *)(param_2 + 2) & 0x30) == 0) {
    *(byte *)(param_1 + 1) = *(byte *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 4) = param_2[1];
    local_48 = &local_30;
    local_40 = (longlong)&local_2c;
    FUN_1425ec990(param_1,param_3,(longlong)param_2 + 9,*param_2);
    FUN_1425ece20(param_1,param_3,&local_30,&local_2c);
    local_48 = &local_34;
    FUN_1425ef2c0(param_1,param_3,1,0);
  }
  else {
    local_48 = &local_2c;
    FUN_1425ee9a0(param_1,param_2,0,param_3);
  }
  if (local_2c != 0) {
    uVar1 = local_2c;
    if ((local_2c & 0xdd) != 0) {
      if ((local_2c & 0x40000000) == 0) {
        *param_1 = 1;
        *(undefined2 *)(param_1 + 1) = 0x20;
      }
      else {
        uVar1 = local_2c & 0xbfffffff;
      }
    }
    FUN_1425ec410(param_3,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 1425ef2c0 FUN_1425ef2c0 body=269 status=ok
// SIG undefined FUN_1425ef2c0(void)

uint * FUN_1425ef2c0(uint *param_1,int *param_2,char param_3,char param_4,int *param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  *param_5 = 0;
  if (((param_1[2] & 0x70) == 0) && ((*(byte *)((longlong)param_1 + 9) & 1) == 0)) {
    uVar2 = *param_1;
    if ((*(byte *)((longlong)param_1 + 9) == 0) && (uVar2 == 1)) {
      param_1[1] = 0;
    }
    else if (1 < (int)uVar2) {
      iVar4 = uVar2 - 1;
      lVar6 = 0;
      uVar3 = param_1[1];
      do {
        bVar1 = *(byte *)((longlong)param_1 + lVar6 + 9);
        if (((uint)(bVar1 >> 1) * 0x6667 >> 0x10 & 0xfffffffe) * 5 != (uint)bVar1) {
LAB_1425ef37a:
          iVar4 = (int)lVar6;
          break;
        }
        if ((param_3 == '\0') && ((int)uVar3 < 1)) {
          if (uVar3 == 0) goto LAB_1425ef37a;
          uVar3 = uVar3 + 1;
        }
        lVar6 = lVar6 + 1;
      } while (iVar4 != (int)lVar6);
      if (iVar4 != 0) {
        if ((param_4 == '\0') && ((char)param_2[6] != '\0')) {
          iVar5 = (param_2[1] - (param_1[1] + *param_2)) + 1;
          if (iVar5 <= iVar4) {
            iVar4 = iVar5;
          }
          if (iVar5 < 1) {
            return param_1;
          }
        }
        if ((int)uVar2 < 0x32) {
          uVar2 = (uint)(byte)(&DAT_149c4cee0)[(int)uVar2];
        }
        FUN_1425ef3e0((longlong)param_1 + 9,uVar2,iVar4);
        param_1[1] = param_1[1] + iVar4;
        *param_1 = *param_1 - iVar4;
        *param_5 = iVar4;
      }
    }
  }
  return param_1;
}



// FUNCTION 1425ef3e0 FUN_1425ef3e0 body=417 status=ok
// SIG undefined FUN_1425ef3e0(void)

uint FUN_1425ef3e0(char *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  
  if (param_3 == 0) {
    return param_2;
  }
  if (param_3 == param_2) {
    *param_1 = '\0';
    return 1;
  }
  iVar9 = (int)param_1;
  if ((int)param_3 < 0x32) {
    uVar18 = (ulonglong)(byte)(&DAT_149c4cee0)[(int)param_3];
    iVar10 = param_3 - ((byte)(&DAT_149c4cee0)[(int)param_3] - 1);
    if (iVar10 != 1) {
      bVar1 = (&DAT_149c4cedf)[uVar18];
      iVar2 = *(int *)(&DAT_149c4cf20 + (longlong)iVar10 * 4);
      uVar20 = (uint)((byte)param_1[bVar1] >> ((byte)iVar10 & 0x1f)) * iVar2 >> 0x11;
      iVar13 = 1 - iVar10;
      *param_1 = (char)uVar20;
      iVar15 = (param_2 - iVar13) - param_3;
      if (0 < iVar15) {
        uVar3 = (&DAT_149c4ceb0)[iVar10];
        uVar4 = (&DAT_149c4ceb0)[iVar13];
        iVar16 = ~param_3 + param_2;
        do {
          uVar21 = (uint)((byte)param_1[(ulonglong)bVar1 + 1] >> ((byte)iVar10 & 0x1f)) * iVar2 >>
                   0x11;
          cVar5 = (char)uVar21;
          *param_1 = (param_1[(ulonglong)bVar1 + 1] - cVar5 * (char)uVar3) * (char)uVar4 +
                     (char)uVar20;
          if (iVar16 < 1) break;
          param_1[1] = cVar5;
          param_1 = param_1 + 1;
          iVar15 = (iVar15 - iVar10) - iVar13;
          iVar16 = iVar16 + -1;
          uVar20 = uVar21;
        } while (0 < iVar15);
      }
      return ((int)param_1 - iVar9) + 1;
    }
  }
  else {
    uVar18 = (ulonglong)param_3;
  }
  pcVar12 = param_1;
  if ((longlong)uVar18 < (longlong)(int)param_2) {
    pcVar11 = param_1 + (int)param_2;
    pcVar12 = param_1 + uVar18 + 1;
    if (param_1 + uVar18 + 1 <= pcVar11) {
      pcVar12 = pcVar11;
    }
    pcVar17 = param_1 + uVar18;
    uVar19 = (longlong)pcVar12 - (longlong)pcVar17;
    if ((0x1f < uVar19) && ((int)uVar18 != 0)) {
      uVar22 = uVar19 & 0xffffffffffffffe0;
      pcVar12 = param_1 + uVar22;
      pcVar17 = pcVar17 + uVar22;
      uVar14 = 0;
      do {
        uVar6 = *(undefined8 *)(param_1 + uVar14 + uVar18 + 8);
        uVar7 = *(undefined8 *)(param_1 + uVar14 + uVar18 + 0x10);
        uVar8 = *(undefined8 *)(param_1 + uVar14 + uVar18 + 0x10 + 8);
        *(undefined8 *)(param_1 + uVar14) = *(undefined8 *)(param_1 + uVar14 + uVar18);
        *(undefined8 *)(param_1 + uVar14 + 8) = uVar6;
        *(undefined8 *)(param_1 + uVar14 + 0x10) = uVar7;
        *(undefined8 *)(param_1 + uVar14 + 0x10 + 8) = uVar8;
        uVar14 = uVar14 + 0x20;
      } while (uVar22 != uVar14);
      param_1 = pcVar12;
      if (uVar19 == uVar22) goto LAB_1425ef572;
    }
    do {
      *param_1 = *pcVar17;
      param_1 = param_1 + 1;
      pcVar17 = pcVar17 + 1;
      pcVar12 = param_1;
    } while (pcVar17 < pcVar11);
  }
LAB_1425ef572:
  return (int)pcVar12 - iVar9;
}



// FUNCTION 1425ef590 FUN_1425ef590 body=413 status=ok
// SIG undefined FUN_1425ef590(void)

void FUN_1425ef590(uint *param_1,undefined1 *param_2,uint param_3)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [11];
  undefined1 auVar36 [15];
  undefined1 auVar37 [11];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 *puVar42;
  ulonglong uVar43;
  undefined1 *puVar44;
  ulonglong uVar45;
  char *pcVar46;
  undefined1 *puVar47;
  uint uVar48;
  ulonglong uVar49;
  ulonglong uVar51;
  undefined4 *puVar52;
  undefined1 auVar53 [11];
  undefined1 auVar55 [16];
  undefined1 auVar56 [11];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 *puVar50;
  undefined1 auVar54 [15];
  undefined1 auVar57 [15];
  
  uVar48 = *param_1;
  if ((longlong)(int)uVar48 < 0x32) {
    uVar48 = (uint)(byte)(&DAT_149c4cee0)[(int)uVar48];
  }
  if (param_3 == 0) goto LAB_1425ef610;
  puVar47 = param_2 + param_3;
  uVar51 = (ulonglong)uVar48;
  puVar42 = (undefined1 *)((longlong)param_1 + uVar51 + 9);
  puVar44 = param_2 + 1;
  puVar50 = puVar44;
  if (puVar44 < puVar47) {
    puVar50 = puVar47;
  }
  uVar49 = (longlong)puVar50 - (longlong)param_2;
  if (3 < uVar49) {
    if (puVar44 < puVar47) {
      puVar44 = puVar47;
    }
    if ((puVar44 <=
         (undefined1 *)((longlong)param_1 + (longlong)(param_2 + (uVar51 - (longlong)puVar44) + 9)))
       || (puVar42 <= param_2)) {
      if (uVar49 < 0x20) {
        uVar45 = 0;
      }
      else {
        uVar45 = uVar49 & 0xffffffffffffffe0;
        pcVar46 = (char *)((longlong)param_1 + (uVar51 - 7));
        uVar43 = 0;
        do {
          auVar55 = *(undefined1 (*) [16])(param_2 + uVar43);
          auVar58 = *(undefined1 (*) [16])(param_2 + uVar43 + 0x10);
          auVar18[0xd] = 0;
          auVar18._0_13_ = auVar55._0_13_;
          auVar18[0xe] = auVar55[7];
          auVar20[0xc] = auVar55[6];
          auVar20._0_12_ = auVar55._0_12_;
          auVar20._13_2_ = auVar18._13_2_;
          auVar22[0xb] = 0;
          auVar22._0_11_ = auVar55._0_11_;
          auVar22._12_3_ = auVar20._12_3_;
          auVar24[10] = auVar55[5];
          auVar24._0_10_ = auVar55._0_10_;
          auVar24._11_4_ = auVar22._11_4_;
          auVar26[9] = 0;
          auVar26._0_9_ = auVar55._0_9_;
          auVar26._10_5_ = auVar24._10_5_;
          auVar28[8] = auVar55[4];
          auVar28._0_8_ = auVar55._0_8_;
          auVar28._9_6_ = auVar26._9_6_;
          auVar59[7] = 0;
          auVar59._0_7_ = auVar28._8_7_;
          auVar34._7_8_ = 0;
          auVar34._0_7_ = auVar28._8_7_;
          auVar38._1_8_ = SUB158(auVar34 << 0x40,7);
          auVar38[0] = auVar55[3];
          auVar38._9_6_ = 0;
          auVar35._1_10_ = SUB1510(auVar38 << 0x30,5);
          auVar35[0] = auVar55[2];
          auVar39._11_4_ = 0;
          auVar39._0_11_ = auVar35;
          auVar30[2] = auVar55[1];
          auVar30._0_2_ = auVar55._0_2_;
          auVar30._3_12_ = SUB1512(auVar39 << 0x20,3);
          auVar32._2_13_ = auVar30._2_13_;
          auVar32._0_2_ = auVar55._0_2_ & 0xff;
          auVar59._8_4_ = auVar32._0_4_;
          auVar59._12_4_ = auVar35._0_4_;
          auVar60 = pshuflw(auVar59,auVar59,0x1b);
          auVar61 = pshufhw(auVar60,auVar60,0x1b);
          auVar60[8] = auVar55[8];
          auVar60[9] = 0;
          auVar60[10] = auVar55[9];
          auVar53._0_10_ = (unkuint10)auVar55[0xc] << 0x40;
          auVar53[10] = auVar55[0xd];
          auVar54[0xb] = 0;
          auVar54._0_11_ = auVar53;
          auVar54[0xc] = auVar55[0xe];
          auVar54[0xd] = 0;
          auVar54[0xe] = auVar55[0xf];
          auVar60[3] = 0;
          auVar60._0_3_ = auVar53._8_3_;
          auVar60._4_3_ = auVar54._12_3_;
          auVar60[7] = 0;
          auVar60[0xb] = 0;
          auVar60._12_3_ = (int3)(CONCAT16(auVar55[0xb],(uint6)auVar55[10] << 0x20) >> 0x20);
          auVar60[0xf] = 0;
          auVar55 = pshuflw(auVar60,auVar60,0x1b);
          auVar55 = pshufhw(auVar55,auVar55,0x1b);
          sVar2 = auVar55._0_2_;
          sVar3 = auVar55._2_2_;
          sVar4 = auVar55._4_2_;
          sVar5 = auVar55._6_2_;
          sVar6 = auVar55._8_2_;
          sVar7 = auVar55._10_2_;
          sVar8 = auVar55._12_2_;
          sVar9 = auVar55._14_2_;
          sVar10 = auVar61._0_2_;
          sVar11 = auVar61._2_2_;
          sVar12 = auVar61._4_2_;
          sVar13 = auVar61._6_2_;
          sVar14 = auVar61._8_2_;
          sVar15 = auVar61._10_2_;
          sVar16 = auVar61._12_2_;
          sVar17 = auVar61._14_2_;
          *pcVar46 = (0 < sVar2) * (sVar2 < 0x100) * auVar55[0] - (0xff < sVar2);
          pcVar46[1] = (0 < sVar3) * (sVar3 < 0x100) * auVar55[2] - (0xff < sVar3);
          pcVar46[2] = (0 < sVar4) * (sVar4 < 0x100) * auVar55[4] - (0xff < sVar4);
          pcVar46[3] = (0 < sVar5) * (sVar5 < 0x100) * auVar55[6] - (0xff < sVar5);
          pcVar46[4] = (0 < sVar6) * (sVar6 < 0x100) * auVar55[8] - (0xff < sVar6);
          pcVar46[5] = (0 < sVar7) * (sVar7 < 0x100) * auVar55[10] - (0xff < sVar7);
          pcVar46[6] = (0 < sVar8) * (sVar8 < 0x100) * auVar55[0xc] - (0xff < sVar8);
          pcVar46[7] = (0 < sVar9) * (sVar9 < 0x100) * auVar55[0xe] - (0xff < sVar9);
          pcVar46[8] = (0 < sVar10) * (sVar10 < 0x100) * auVar61[0] - (0xff < sVar10);
          pcVar46[9] = (0 < sVar11) * (sVar11 < 0x100) * auVar61[2] - (0xff < sVar11);
          pcVar46[10] = (0 < sVar12) * (sVar12 < 0x100) * auVar61[4] - (0xff < sVar12);
          pcVar46[0xb] = (0 < sVar13) * (sVar13 < 0x100) * auVar61[6] - (0xff < sVar13);
          pcVar46[0xc] = (0 < sVar14) * (sVar14 < 0x100) * auVar61[8] - (0xff < sVar14);
          pcVar46[0xd] = (0 < sVar15) * (sVar15 < 0x100) * auVar61[10] - (0xff < sVar15);
          pcVar46[0xe] = (0 < sVar16) * (sVar16 < 0x100) * auVar61[0xc] - (0xff < sVar16);
          pcVar46[0xf] = (0 < sVar17) * (sVar17 < 0x100) * auVar61[0xe] - (0xff < sVar17);
          auVar19[0xd] = 0;
          auVar19._0_13_ = auVar58._0_13_;
          auVar19[0xe] = auVar58[7];
          auVar21[0xc] = auVar58[6];
          auVar21._0_12_ = auVar58._0_12_;
          auVar21._13_2_ = auVar19._13_2_;
          auVar23[0xb] = 0;
          auVar23._0_11_ = auVar58._0_11_;
          auVar23._12_3_ = auVar21._12_3_;
          auVar25[10] = auVar58[5];
          auVar25._0_10_ = auVar58._0_10_;
          auVar25._11_4_ = auVar23._11_4_;
          auVar27[9] = 0;
          auVar27._0_9_ = auVar58._0_9_;
          auVar27._10_5_ = auVar25._10_5_;
          auVar29[8] = auVar58[4];
          auVar29._0_8_ = auVar58._0_8_;
          auVar29._9_6_ = auVar27._9_6_;
          auVar55[7] = 0;
          auVar55._0_7_ = auVar29._8_7_;
          auVar36._7_8_ = 0;
          auVar36._0_7_ = auVar29._8_7_;
          auVar40._1_8_ = SUB158(auVar36 << 0x40,7);
          auVar40[0] = auVar58[3];
          auVar40._9_6_ = 0;
          auVar37._1_10_ = SUB1510(auVar40 << 0x30,5);
          auVar37[0] = auVar58[2];
          auVar41._11_4_ = 0;
          auVar41._0_11_ = auVar37;
          auVar31[2] = auVar58[1];
          auVar31._0_2_ = auVar58._0_2_;
          auVar31._3_12_ = SUB1512(auVar41 << 0x20,3);
          auVar33._2_13_ = auVar31._2_13_;
          auVar33._0_2_ = auVar58._0_2_ & 0xff;
          auVar55._8_4_ = auVar33._0_4_;
          auVar55._12_4_ = auVar37._0_4_;
          auVar55 = pshuflw(auVar55,auVar55,0x1b);
          auVar55 = pshufhw(auVar55,auVar55,0x1b);
          auVar61[8] = auVar58[8];
          auVar61[9] = 0;
          auVar61[10] = auVar58[9];
          auVar56._0_10_ = (unkuint10)auVar58[0xc] << 0x40;
          auVar56[10] = auVar58[0xd];
          auVar57[0xb] = 0;
          auVar57._0_11_ = auVar56;
          auVar57[0xc] = auVar58[0xe];
          auVar57[0xd] = 0;
          auVar57[0xe] = auVar58[0xf];
          auVar61[3] = 0;
          auVar61._0_3_ = auVar56._8_3_;
          auVar61._4_3_ = auVar57._12_3_;
          auVar61[7] = 0;
          auVar61[0xb] = 0;
          auVar61._12_3_ = (int3)(CONCAT16(auVar58[0xb],(uint6)auVar58[10] << 0x20) >> 0x20);
          auVar61[0xf] = 0;
          auVar58 = pshuflw(auVar61,auVar61,0x1b);
          auVar58 = pshufhw(auVar58,auVar58,0x1b);
          sVar2 = auVar58._0_2_;
          sVar3 = auVar58._2_2_;
          sVar4 = auVar58._4_2_;
          sVar5 = auVar58._6_2_;
          sVar6 = auVar58._8_2_;
          sVar7 = auVar58._10_2_;
          sVar8 = auVar58._12_2_;
          sVar9 = auVar58._14_2_;
          sVar10 = auVar55._0_2_;
          sVar11 = auVar55._2_2_;
          sVar12 = auVar55._4_2_;
          sVar13 = auVar55._6_2_;
          sVar14 = auVar55._8_2_;
          sVar15 = auVar55._10_2_;
          sVar16 = auVar55._12_2_;
          sVar17 = auVar55._14_2_;
          pcVar46[-0x10] = (0 < sVar2) * (sVar2 < 0x100) * auVar58[0] - (0xff < sVar2);
          pcVar46[-0xf] = (0 < sVar3) * (sVar3 < 0x100) * auVar58[2] - (0xff < sVar3);
          pcVar46[-0xe] = (0 < sVar4) * (sVar4 < 0x100) * auVar58[4] - (0xff < sVar4);
          pcVar46[-0xd] = (0 < sVar5) * (sVar5 < 0x100) * auVar58[6] - (0xff < sVar5);
          pcVar46[-0xc] = (0 < sVar6) * (sVar6 < 0x100) * auVar58[8] - (0xff < sVar6);
          pcVar46[-0xb] = (0 < sVar7) * (sVar7 < 0x100) * auVar58[10] - (0xff < sVar7);
          pcVar46[-10] = (0 < sVar8) * (sVar8 < 0x100) * auVar58[0xc] - (0xff < sVar8);
          pcVar46[-9] = (0 < sVar9) * (sVar9 < 0x100) * auVar58[0xe] - (0xff < sVar9);
          pcVar46[-8] = (0 < sVar10) * (sVar10 < 0x100) * auVar55[0] - (0xff < sVar10);
          pcVar46[-7] = (0 < sVar11) * (sVar11 < 0x100) * auVar55[2] - (0xff < sVar11);
          pcVar46[-6] = (0 < sVar12) * (sVar12 < 0x100) * auVar55[4] - (0xff < sVar12);
          pcVar46[-5] = (0 < sVar13) * (sVar13 < 0x100) * auVar55[6] - (0xff < sVar13);
          pcVar46[-4] = (0 < sVar14) * (sVar14 < 0x100) * auVar55[8] - (0xff < sVar14);
          pcVar46[-3] = (0 < sVar15) * (sVar15 < 0x100) * auVar55[10] - (0xff < sVar15);
          pcVar46[-2] = (0 < sVar16) * (sVar16 < 0x100) * auVar55[0xc] - (0xff < sVar16);
          pcVar46[-1] = (0 < sVar17) * (sVar17 < 0x100) * auVar55[0xe] - (0xff < sVar17);
          uVar43 = uVar43 + 0x20;
          pcVar46 = pcVar46 + -0x20;
        } while (uVar45 != uVar43);
        if (uVar49 == uVar45) goto LAB_1425ef610;
        if ((uVar49 & 0x1c) == 0) {
          puVar42 = puVar42 + -uVar45;
          param_2 = param_2 + uVar45;
          goto LAB_1425ef600;
        }
      }
      uVar43 = uVar49 & 0xfffffffffffffffc;
      puVar42 = puVar42 + -uVar43;
      puVar52 = (undefined4 *)((longlong)param_1 + (uVar51 - uVar45) + 5);
      do {
        uVar1 = *(undefined4 *)(param_2 + uVar45);
        auVar58._8_8_ = 0;
        auVar58._0_8_ =
             (ulonglong)
             CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                      CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1)) >> 0x10),
                      (short)uVar1) & 0xffffffff00ff00ff;
        auVar55 = pshuflw(auVar58,auVar58,0x1b);
        sVar2 = auVar55._0_2_;
        sVar3 = auVar55._2_2_;
        sVar4 = auVar55._4_2_;
        sVar5 = auVar55._6_2_;
        *puVar52 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * auVar55[6] - (0xff < sVar5),
                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) * auVar55[4] - (0xff < sVar4),
                                     CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar55[2] -
                                              (0xff < sVar3),
                                              (0 < sVar2) * (sVar2 < 0x100) * auVar55[0] -
                                              (0xff < sVar2))));
        uVar45 = uVar45 + 4;
        puVar52 = puVar52 + -1;
      } while (uVar43 != uVar45);
      param_2 = param_2 + uVar43;
      if (uVar49 == uVar43) goto LAB_1425ef610;
    }
  }
LAB_1425ef600:
  do {
    puVar42 = puVar42 + -1;
    *puVar42 = *param_2;
    param_2 = param_2 + 1;
  } while (param_2 < puVar47);
LAB_1425ef610:
  *param_1 = param_3;
  return;
}



// FUNCTION 1425ef730 FUN_1425ef730 body=490 status=ok
// SIG undefined FUN_1425ef730(void)

int FUN_1425ef730(byte *param_1,int param_2,byte *param_3,ulonglong param_4,int param_5,
                 byte *param_6,int param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  
  pbVar2 = param_6 + param_2;
  pbVar3 = param_6 + (param_4 & 0xffffffff);
  pbVar1 = param_6;
  pbVar8 = param_1;
  if (param_5 != 0) {
    pbVar3 = pbVar3 + param_5;
    pbVar7 = param_6 + param_5;
    if (((param_2 < param_5) || (pbVar1 = pbVar7, pbVar8 = pbVar7, param_1 != param_6)) &&
       (pbVar1 = param_6, pbVar8 = param_1, 0 < param_5)) {
      do {
        if (pbVar8 < param_1 + param_2) {
          bVar5 = *pbVar8;
        }
        else {
          bVar5 = 0;
        }
        *pbVar1 = bVar5;
        pbVar8 = pbVar8 + 1;
        pbVar1 = pbVar1 + 1;
      } while (pbVar1 < pbVar7);
    }
  }
  pbVar7 = pbVar2;
  if (pbVar2 < pbVar3) {
    pbVar7 = pbVar3;
    pbVar3 = pbVar2;
  }
  uVar9 = 0;
  if (pbVar1 < pbVar3) {
    uVar9 = 0;
    do {
      uVar9 = (uint)*param_3 * param_7 + *pbVar8 + uVar9;
      bVar5 = (byte)uVar9;
      if (uVar9 < 10) {
        *pbVar1 = bVar5;
        uVar9 = 0;
      }
      else if ((int)uVar9 < 0) {
        uVar9 = (uVar9 + 100 >> 1) * 0x6667 >> 0x11;
        *pbVar1 = (char)uVar9 * -10 + bVar5 + 100;
        uVar9 = uVar9 - 10;
      }
      else {
        uVar9 = (uVar9 >> 1) * 0x6667 >> 0x11;
        *pbVar1 = (char)uVar9 * -10 + bVar5;
      }
      pbVar8 = pbVar8 + 1;
      param_3 = param_3 + 1;
      pbVar1 = pbVar1 + 1;
    } while (pbVar1 < pbVar3);
  }
  if (pbVar1 < pbVar7) {
    do {
      if (pbVar8 < param_1 + param_2) {
        uVar4 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      }
      else {
        uVar4 = (uint)*param_3 * param_7;
        param_3 = param_3 + 1;
      }
      uVar4 = uVar4 + uVar9;
      bVar5 = (byte)uVar4;
      if (uVar4 < 10) {
        *pbVar1 = bVar5;
        uVar9 = 0;
      }
      else if ((int)uVar4 < 0) {
        uVar9 = (uVar4 + 100 >> 1) * 0x6667 >> 0x11;
        *pbVar1 = bVar5 + (char)uVar9 * -10 + 100;
        uVar9 = uVar9 - 10;
      }
      else {
        uVar9 = (uVar4 >> 1) * 0x6667 >> 0x11;
        *pbVar1 = (char)uVar9 * -10 + bVar5;
      }
      pbVar1 = pbVar1 + 1;
    } while (pbVar1 < pbVar7);
  }
  pbVar2 = param_6;
  if (uVar9 != 0) {
    if ((int)uVar9 < 1) {
      uVar4 = 1;
      if (param_6 < pbVar7) {
        uVar4 = 1;
        do {
          iVar6 = (uVar4 - *pbVar2) + 9;
          uVar4 = (uint)(9 < iVar6);
          bVar5 = (byte)iVar6;
          if (9 < iVar6) {
            bVar5 = 0;
          }
          *pbVar2 = bVar5;
          pbVar2 = pbVar2 + 1;
        } while (pbVar2 < pbVar7);
      }
      pbVar1 = param_6;
      if (~uVar9 + uVar4 != 0) {
        *pbVar2 = (byte)(~uVar9 + uVar4);
        pbVar2 = pbVar2 + 1;
      }
    }
    else {
      *pbVar1 = (byte)uVar9;
      pbVar1 = pbVar1 + 1;
    }
  }
  return (int)pbVar1 - (int)pbVar2;
}



// FUNCTION 1425ef940 FUN_1425ef940 body=392 status=ok
// SIG undefined FUN_1425ef940(void)

void FUN_1425ef940(byte *param_1,uint param_2,longlong param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  char *pcVar4;
  longlong lVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined1 auStack_d8 [32];
  uint local_b8;
  char *local_b0;
  undefined4 local_a8;
  char local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_5 == 0) {
    if (((int)param_2 <= param_4) && (param_4 <= (int)param_2)) {
      pbVar3 = param_1 + param_2;
      pbVar6 = (byte *)((ulonglong)param_2 + param_3);
      while( true ) {
        pbVar6 = pbVar6 + -1;
        pbVar3 = pbVar3 + -1;
        if (pbVar3 < param_1) break;
        if ((*pbVar6 < *pbVar3) || (*pbVar3 < *pbVar6)) break;
      }
    }
  }
  else {
    uVar2 = param_5;
    if ((int)param_5 < 0x32) {
      uVar2 = (uint)(byte)(&DAT_149c4cee0)[(int)param_5];
    }
    iVar1 = uVar2 + param_4;
    if (((int)param_2 <= iVar1) && (iVar1 <= (int)(param_2 + 1))) {
      if (iVar1 + 2U < 0x4a) {
        pcVar4 = local_98;
        pcVar7 = (char *)0x0;
      }
      else {
        pcVar4 = (char *)FUN_1424da030((longlong)(int)(iVar1 + 2U));
        pcVar7 = pcVar4;
        if (pcVar4 == (char *)0x0) goto LAB_1425efab8;
      }
      local_b8 = param_5;
      local_a8 = 0xffffffff;
      local_b0 = pcVar4;
      uVar2 = FUN_1425ef730(param_1,param_2,param_3,param_4);
      if ((-1 < (int)uVar2) && (pcVar4 < pcVar4 + ((ulonglong)uVar2 - 1))) {
        lVar5 = (ulonglong)uVar2 - 1;
        do {
          if (*pcVar4 != '\0') break;
          pcVar4 = pcVar4 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      if (pcVar7 != (char *)0x0) {
        FUN_1424da110(pcVar7);
      }
    }
  }
LAB_1425efab8:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1425efae0 FUN_1425efae0 body=736 status=ok
// SIG undefined FUN_1425efae0(void)

void FUN_1425efae0(uint *param_1,int *param_2,int param_3,uint *param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  uint *puVar8;
  byte *pbVar9;
  
  if (param_3 == 0) {
    return;
  }
  switch(param_2[3]) {
  case 0:
    if ((char)param_1[2] < '\0') goto switchD_1425efb15_caseD_5;
  case 1:
switchD_1425efb15_caseD_1:
    if (param_3 < 1) {
      return;
    }
    break;
  case 2:
    if (param_3 < 5) {
      return;
    }
    break;
  case 3:
    if (param_3 < 6) {
      if (param_3 != 5) {
        return;
      }
      if ((*(byte *)((longlong)param_1 + 9) & 1) == 0) {
        return;
      }
    }
    break;
  case 4:
    if (param_3 < 6) {
      return;
    }
    break;
  case 5:
switchD_1425efb15_caseD_5:
    if (-1 < param_3) {
      return;
    }
LAB_1425efba4:
    uVar5 = *param_1;
    pbVar1 = (byte *)((longlong)param_1 + 9);
    pbVar9 = pbVar1;
    uVar4 = uVar5;
    if (1 < uVar5) {
      pbVar9 = (byte *)((longlong)param_1 + (ulonglong)(uVar5 - 2) + 10);
      pbVar7 = pbVar1;
      do {
        if (*pbVar7 != 0) {
          uVar6 = 0xffffffff;
          goto LAB_1425efd5f;
        }
        uVar4 = uVar4 - 1;
        pbVar7 = pbVar7 + 1;
      } while (1 < uVar4);
      uVar4 = 1;
    }
    bVar3 = *pbVar9;
    uVar6 = 0xffffffff;
    if ((&DAT_149c4ceb0)[uVar4 - 1] == (uint)bVar3) {
      *pbVar9 = *(char *)(&DAT_149c4ceb0 + uVar4) - 1;
      if (pbVar1 <= pbVar9 + -1) {
        puVar8 = param_1 + 2;
        if (pbVar9 + -2 < param_1 + 2) {
          puVar8 = (uint *)(pbVar9 + -2);
        }
        memset((byte *)((longlong)puVar8 + 1),(int)CONCAT71((uint7)(uint3)(uVar4 >> 8),9),
               (size_t)(pbVar9 + ~(ulonglong)puVar8));
      }
      uVar5 = param_1[1];
      param_1[1] = uVar5 - 1;
      if (uVar5 != (param_2[2] - *param_2) + 1U) {
        return;
      }
      uVar2 = *param_1;
      if ((uVar4 == 0) || (uVar2 != 1)) {
        *pbVar9 = bVar3 - 1;
        *param_1 = uVar2 - 1;
      }
      else {
        *pbVar9 = 0;
      }
      param_1[1] = uVar5;
      *param_4 = *param_4 | 0x3820;
      return;
    }
    goto LAB_1425efd5f;
  case 6:
    if (-1 < (char)param_1[2]) goto switchD_1425efb15_caseD_5;
    goto switchD_1425efb15_caseD_1;
  case 7:
    bVar3 = *(byte *)((longlong)param_1 + 9) % 5;
    if ((param_3 < 0) && (bVar3 != 1)) goto LAB_1425efba4;
    if (param_3 < 1) {
      return;
    }
    if (bVar3 != 0) {
      return;
    }
    break;
  default:
    *(byte *)param_4 = (byte)*param_4 | 0x40;
    return;
  }
  uVar5 = *param_1;
  pbVar1 = (byte *)((longlong)param_1 + 9);
  pbVar9 = pbVar1;
  uVar4 = uVar5;
  if (1 < uVar5) {
    pbVar9 = (byte *)((longlong)param_1 + (ulonglong)(uVar5 - 2) + 10);
    pbVar7 = pbVar1;
    do {
      if (*pbVar7 != 9) {
        uVar6 = 1;
        goto LAB_1425efd5f;
      }
      uVar4 = uVar4 - 1;
      pbVar7 = pbVar7 + 1;
    } while (1 < uVar4);
    uVar4 = 1;
  }
  uVar6 = 1;
  if ((&DAT_149c4ceb0)[uVar4] - 1 == (uint)*pbVar9) {
    *pbVar9 = *(byte *)(&DAT_149c4ceb0 + (uVar4 - 1));
    if (pbVar1 <= pbVar9 + -1) {
      puVar8 = param_1 + 2;
      if (pbVar9 + -2 < param_1 + 2) {
        puVar8 = (uint *)(pbVar9 + -2);
      }
      memset((byte *)((longlong)puVar8 + 1),0,(size_t)(pbVar9 + ~(ulonglong)puVar8));
      uVar5 = *param_1;
    }
    uVar4 = param_1[1];
    param_1[1] = uVar4 + 1;
    if (param_2[1] + 1 < (int)(uVar4 + uVar5 + 1)) {
      FUN_1425efdc0(param_1,param_2,param_4);
      return;
    }
  }
  else {
LAB_1425efd5f:
    if ((int)uVar5 < 0x32) {
      uVar5 = (uint)(byte)(&DAT_149c4cee0)[(int)uVar5];
    }
    FUN_1425ef730((longlong)param_1 + 9,uVar5,&DAT_149c4cff4,1,0,(longlong)param_1 + 9,uVar6);
  }
  return;
}



// FUNCTION 1425efdc0 FUN_1425efdc0 body=247 status=ok
// SIG undefined FUN_1425efdc0(void)

void FUN_1425efdc0(int *param_1,int *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  char *_Dst;
  byte bVar3;
  
  if (((*(char *)((longlong)param_1 + 9) == '\0') && (*param_1 == 1)) &&
     ((*(byte *)(param_1 + 2) & 0x70) == 0)) {
    iVar1 = param_2[1];
    if ((char)param_2[6] != '\0') {
      iVar1 = (iVar1 - *param_2) + 1;
    }
    if (param_1[1] <= iVar1) {
      return;
    }
    param_1[1] = iVar1;
    uVar2 = 0x400;
    goto LAB_1425efeaa;
  }
  bVar3 = *(byte *)(param_1 + 2) & 0x80;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[0] = 1;
  param_1[1] = 0;
  switch(param_2[3]) {
  case 0:
    if (bVar3 != 0) goto switchD_1425efe09_caseD_5;
    break;
  case 5:
  case 7:
switchD_1425efe09_caseD_5:
    _Dst = (char *)((longlong)param_1 + 9);
    iVar1 = *param_2;
    *param_1 = iVar1;
    if (1 < iVar1) {
      memset(_Dst,(int)CONCAT71((int7)((ulonglong)param_2 >> 8),9),(ulonglong)(iVar1 - 1));
      _Dst = (char *)((longlong)param_1 + (ulonglong)(iVar1 - 2) + 10);
      iVar1 = 1;
    }
    *_Dst = *(char *)(&DAT_149c4ceb0 + iVar1) + -1;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[1] = (param_2[1] - *param_2) + 1;
    goto LAB_1425efea1;
  case 6:
    if (bVar3 == 0) goto switchD_1425efe09_caseD_5;
  }
  bVar3 = bVar3 | 0x40;
LAB_1425efea1:
  *(byte *)(param_1 + 2) = bVar3;
  uVar2 = 0xa20;
LAB_1425efeaa:
  *param_3 = *param_3 | uVar2;
  return;
}



// FUNCTION 1425efec0 FUN_1425efec0 body=276 status=ok
// SIG undefined FUN_1425efec0(void)

void FUN_1425efec0(int *param_1,int *param_2,undefined4 *param_3,uint *param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  uint *local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar5 = (param_2[2] - *param_2) + 1;
  if (((*(char *)((longlong)param_1 + 9) == '\0') && (*param_1 == 1)) &&
     ((*(byte *)(param_1 + 2) & 0x70) == 0)) {
    if (iVar5 <= param_1[1]) goto LAB_1425effc7;
    param_1[1] = iVar5;
LAB_1425effbe:
    uVar3 = *param_4 | 0x400;
  }
  else {
    uVar3 = *param_4;
    *param_4 = uVar3 | 0x1000;
    iVar4 = iVar5 - param_1[1];
    if (iVar4 != 0 && param_1[1] <= iVar5) {
      pcVar1 = (char *)((longlong)param_1 + 9);
      iStack_54 = param_2[1];
      iStack_4c = param_2[3];
      iStack_48 = param_2[4];
      iStack_44 = param_2[5];
      iStack_40 = param_2[6];
      local_58 = *param_1 - iVar4;
      iStack_50 = param_2[2] - iVar4;
      local_68 = param_3;
      local_60 = param_4;
      FUN_1425ec990(param_1,&local_58,pcVar1);
      FUN_1425efae0(param_1,&local_58,*param_3,param_4);
      if ((*param_4 & 0x20) == 0) {
        if (param_1[1] <= iVar5) goto LAB_1425eff71;
LAB_1425eff8f:
        iVar5 = FUN_1425eef00(pcVar1,*param_1,1);
        *param_1 = iVar5;
        param_1[1] = param_1[1] + -1;
        cVar2 = *pcVar1;
      }
      else {
        *param_4 = *param_4 | 0x2000;
        if (iVar5 < param_1[1]) goto LAB_1425eff8f;
LAB_1425eff71:
        cVar2 = *pcVar1;
      }
      if (((cVar2 != '\0') || (*param_1 != 1)) || ((*(byte *)(param_1 + 2) & 0x70) != 0))
      goto LAB_1425effc7;
      goto LAB_1425effbe;
    }
    if ((uVar3 & 0x20) == 0) goto LAB_1425effc7;
    uVar3 = uVar3 | 0x3000;
  }
  *param_4 = uVar3;
LAB_1425effc7:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
}



// FUNCTION 1425efff0 FUN_1425efff0 body=867 status=ok
// SIG undefined FUN_1425efff0(void)

undefined8 *
FUN_1425efff0(undefined8 *param_1,undefined8 param_2,longlong param_3,int param_4,int *param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  short *psVar8;
  short sVar9;
  uint uVar10;
  longlong lVar11;
  ushort *puVar12;
  undefined1 local_c8 [72];
  wchar_t *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 1) = 2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x10] = param_2;
  uVar7 = FUN_1424da030(0x50);
  param_1[0x11] = uVar7;
  param_1[0x12] = 0xa00000000;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9a) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (0 < *param_5) {
    return param_1;
  }
  lVar11 = (longlong)param_4 * 0x40;
  uVar4 = *(ushort *)(param_3 + 8 + lVar11);
  if ((short)uVar4 < 0) {
    if (*(int *)(param_3 + 0xc + lVar11) == 0) {
LAB_1425f013d:
      *param_5 = 9;
      return param_1;
    }
  }
  else if ((short)uVar4 >> 5 == 0) goto LAB_1425f013d;
  lVar1 = param_3 + lVar11;
  psVar8 = (short *)(lVar1 + 10);
  if ((uVar4 & 2) == 0) {
    psVar8 = *(short **)(param_3 + 0x18 + lVar11);
  }
  local_78 = param_1 + 8;
  local_70 = param_1 + 0x11;
  lVar2 = param_3 + lVar11;
  puVar12 = (ushort *)(lVar2 + 8);
  local_68 = param_1;
  if (*psVar8 == 0x25) {
    uVar5 = FUN_1424a8940(lVar1,CONCAT62((int6)((ulonglong)local_78 >> 0x10),0x3a),0);
    if (uVar5 == 0xffffffff) {
      *param_5 = 9;
    }
    else {
      FUN_1424a8e40(local_68);
      if (*(short *)(local_68 + 1) < 0) {
        iVar6 = *(int *)((longlong)local_68 + 0xc);
      }
      else {
        iVar6 = (int)*(short *)(local_68 + 1) >> 5;
      }
      FUN_1424a9610(local_68,0,iVar6,lVar1,0,uVar5);
      do {
        uVar4 = *puVar12;
        if ((short)uVar4 < 0) {
          uVar10 = *(uint *)(lVar2 + 0xc);
        }
        else {
          uVar10 = (int)(short)uVar4 >> 5;
        }
        if ((int)uVar10 <= (int)uVar5) break;
        uVar5 = uVar5 + 1;
        sVar9 = -1;
        if (uVar5 < uVar10) {
          psVar8 = (short *)(lVar1 + 10);
          if (((int)(short)uVar4 & 2U) == 0) {
            psVar8 = *(short **)(param_3 + lVar11 + 0x18);
          }
          sVar9 = psVar8[(int)uVar5];
        }
        cVar3 = FUN_1425cc7f0(sVar9);
      } while (cVar3 != '\0');
      if (uVar5 == 0x7fffffff) {
        uVar4 = 2;
        if ((*puVar12 & 1) == 0) {
          uVar4 = *puVar12 & 0x1f;
        }
        *puVar12 = uVar4;
      }
      else {
        FUN_1424a9130(lVar1,0,uVar5,0,0,0);
      }
    }
  }
  else {
    FUN_1424a7060(local_c8,CONCAT71((int7)((ulonglong)local_78 >> 8),1),L"%default",0xffffffff);
    FUN_1424a7600(local_68,local_c8,0);
    FUN_140859a90(local_c8);
  }
  if ((short)*puVar12 < 0) {
    iVar6 = *(int *)(lVar2 + 0xc);
  }
  else {
    iVar6 = (int)(short)*puVar12 >> 5;
  }
  if (iVar6 == 0) {
    *param_5 = 9;
  }
  if (*(short *)(local_68 + 1) < 0) {
    uVar5 = *(uint *)((longlong)local_68 + 0xc);
  }
  else {
    uVar5 = (int)*(short *)(local_68 + 1) >> 5;
  }
  uVar10 = (int)uVar5 >> 0x1f & uVar5;
  iVar6 = FUN_1424a8860(local_68,&DAT_149c4d0f0,0,2,uVar10,uVar5 - uVar10);
  *(bool *)((longlong)local_68 + 0x99) = iVar6 != 0;
  if (*(short *)(local_68 + 1) < 0) {
    iVar6 = *(int *)((longlong)local_68 + 0xc);
  }
  else {
    iVar6 = (int)*(short *)(local_68 + 1) >> 5;
  }
  cVar3 = FUN_1424a7e30(local_68,iVar6 + -8,8,L"@noparse",0,8);
  local_80 = L"@noparse";
  if (cVar3 == '\0') {
    *(undefined1 *)((longlong)local_68 + 0x9a) = 0;
    uVar4 = *(ushort *)(local_68 + 1);
    if ((short)uVar4 < 0) {
      uVar5 = *(uint *)((longlong)local_68 + 0xc);
    }
    else {
      uVar5 = (int)(short)uVar4 >> 5;
    }
    iVar6 = uVar5 - 8;
    if (((uVar4 & 1) == 0) || (iVar6 != 0)) {
      if (7 < uVar5) {
        if ((int)uVar5 < 0x408) {
          *(ushort *)(local_68 + 1) = (short)iVar6 * 0x20 | uVar4 & 0x1f;
        }
        else {
          *(ushort *)(local_68 + 1) = uVar4 | 0xffe0;
          *(int *)((longlong)local_68 + 0xc) = iVar6;
        }
      }
    }
    else {
      FUN_1424a8e40();
    }
  }
  return local_68;
}



// FUNCTION 1425f0360 Unwind@1425f0360 body=64 status=ok
// SIG undefined Unwind@1425f0360(void)

void Unwind_1425f0360(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425f03a0 Unwind@1425f03a0 body=82 status=ok
// SIG undefined Unwind@1425f03a0(void)

void Unwind_1425f03a0(undefined8 param_1,longlong param_2)

{
  FUN_1425f0450(*(undefined8 *)(param_2 + 0x88));
  FUN_1425f0450(*(undefined8 *)(param_2 + 0x80));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x90));
  return;
}



// FUNCTION 1425f0400 Unwind@1425f0400 body=66 status=ok
// SIG undefined Unwind@1425f0400(void)

void Unwind_1425f0400(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x70) = L"@noparse";
  return;
}



// FUNCTION 1425f0450 FUN_1425f0450 body=95 status=ok
// SIG undefined FUN_1425f0450(void)

void FUN_1425f0450(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 1);
    if (uVar1 != 0) {
      uVar3 = 0;
      do {
        lVar2 = *(longlong *)(*param_1 + uVar3 * 8);
        if (lVar2 != 0) {
          FUN_1425f22d0(lVar2);
          FUN_1401773f0(lVar2);
          uVar1 = *(uint *)(param_1 + 1);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
      lVar2 = *param_1;
    }
    FUN_1424da110(lVar2);
    return;
  }
  return;
}



// FUNCTION 1425f04c0 FUN_1425f04c0 body=424 status=ok
// SIG undefined FUN_1425f04c0(void)

void FUN_1425f04c0(longlong param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *in_stack_ffffffffffffff68;
  undefined4 uVar11;
  int *in_stack_ffffffffffffff70;
  undefined4 uVar12;
  undefined **local_88;
  short local_80;
  int local_7c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*param_3 < 1) {
    plVar1 = (longlong *)(param_1 + 0x40);
    FUN_1425f06d0(plVar1);
    local_88 = &PTR_FUN_149e18960;
    local_80 = 2;
    iVar8 = 0;
    while( true ) {
      uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
      uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
      if (*(short *)(param_2 + 8) < 0) {
        iVar5 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar5 = (int)*(short *)(param_2 + 8) >> 5;
      }
      if (iVar5 <= iVar8) break;
      iVar6 = 0;
      if (0 < iVar8) {
        iVar6 = iVar8;
      }
      iVar5 = FUN_1424a8940(param_2,0x3b,iVar6,iVar5 - iVar6);
      if (iVar5 == -1) {
        if (*(short *)(param_2 + 8) < 0) {
          iVar5 = *(int *)(param_2 + 0xc);
        }
        else {
          iVar5 = (int)*(short *)(param_2 + 8) >> 5;
        }
      }
      FUN_1424a8e40(&local_88);
      iVar6 = local_7c;
      if (-1 < local_80) {
        iVar6 = (int)local_80 >> 5;
      }
      FUN_1424a9610(&local_88,0,iVar6,param_2,CONCAT44(uVar11,iVar8),CONCAT44(uVar12,iVar5 - iVar8))
      ;
      if ((*(int *)(param_1 + 0x48) == 0) || (*plVar1 == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(*plVar1 + (ulonglong)(*(int *)(param_1 + 0x48) - 1) * 8);
      }
      in_stack_ffffffffffffff68 = plVar1;
      in_stack_ffffffffffffff70 = param_3;
      FUN_1425f2350(&local_88,param_1,uVar7,*(undefined8 *)(param_1 + 0x80),plVar1,param_3);
      iVar8 = iVar5 + 1;
    }
    iVar8 = *(int *)(param_1 + 0x48);
    lVar10 = 0;
    for (uVar9 = 0; (int)uVar9 < iVar8; uVar9 = uVar9 + 1) {
      plVar2 = *(longlong **)(*plVar1 + (ulonglong)uVar9 * 8);
      lVar3 = *plVar2;
      if (lVar3 == 0) {
        FUN_1425f2c90(plVar2,lVar10,param_3);
      }
      else {
        bVar4 = lVar3 < lVar10;
        lVar10 = lVar3;
        if (bVar4) {
          *param_3 = 9;
          break;
        }
      }
      lVar10 = lVar10 + (ulonglong)(*(char *)(param_1 + 0x98) == '\0');
    }
    FUN_140859a90(&local_88);
  }
  return;
}



// FUNCTION 1425f0690 Unwind@1425f0690 body=52 status=ok
// SIG undefined Unwind@1425f0690(void)

void Unwind_1425f0690(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425f06d0 FUN_1425f06d0 body=154 status=ok
// SIG undefined FUN_1425f06d0(void)

void FUN_1425f06d0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar1) {
    if (uVar1 == *(uint *)((longlong)param_1 + 0xc)) {
      *(uint *)((longlong)param_1 + 0xc) = uVar1 + 10;
      lVar3 = FUN_1424da060(*param_1,(ulonglong)uVar1 * 8 + 0x50);
      *param_1 = lVar3;
    }
    else {
      lVar3 = *param_1;
    }
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      *(undefined8 *)(lVar3 + (ulonglong)*(uint *)(param_1 + 1) * 8) = 0;
      lVar3 = *param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    uVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + uVar4 * 8);
      if (lVar2 != 0) {
        FUN_1425f22d0(lVar2);
        FUN_1401773f0(lVar2);
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
    FUN_1424da110(lVar3);
    return;
  }
  return;
}



// FUNCTION 1425f0780 FUN_1425f0780 body=191 status=ok
// SIG undefined FUN_1425f0780(void)

void FUN_1425f0780(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  switch(*param_2) {
  case 0xfffffffffffffffa:
    lVar1 = *(longlong *)(param_1 + 0x78);
    if (lVar1 != 0) {
      FUN_1425f22d0(lVar1);
      FUN_1401773f0(lVar1);
    }
    *(undefined8 **)(param_1 + 0x78) = param_2;
    break;
  case 0xfffffffffffffffb:
    lVar1 = *(longlong *)(param_1 + 0x70);
    if (lVar1 != 0) {
      FUN_1425f22d0(lVar1);
      FUN_1401773f0(lVar1);
    }
    *(undefined8 **)(param_1 + 0x70) = param_2;
    break;
  case 0xfffffffffffffffc:
    uVar2 = 3;
    goto LAB_1425f0808;
  case 0xfffffffffffffffd:
    uVar2 = 2;
    goto LAB_1425f0808;
  case 0xfffffffffffffffe:
    uVar2 = 1;
LAB_1425f0808:
    FUN_1425f0840(param_1,uVar2,param_2,1);
    return;
  case 0xffffffffffffffff:
    lVar1 = *(longlong *)(param_1 + 0x50);
    if (lVar1 != 0) {
      FUN_1425f22d0(lVar1);
      FUN_1401773f0(lVar1);
    }
    *(undefined8 **)(param_1 + 0x50) = param_2;
  }
  return;
}



// FUNCTION 1425f0840 FUN_1425f0840 body=244 status=ok
// SIG undefined FUN_1425f0840(void)

void FUN_1425f0840(longlong param_1,int param_2,longlong param_3,char param_4)

{
  short sVar1;
  longlong lVar2;
  uint uVar3;
  short sVar4;
  undefined1 local_68 [8];
  ushort local_60;
  short local_5e;
  int local_5c;
  short *local_50;
  
  if (param_4 != '\0') {
    if (*(int *)(param_1 + 0x90) == *(int *)(param_1 + 0x94)) {
      uVar3 = *(int *)(param_1 + 0x90) + 10;
      *(uint *)(param_1 + 0x94) = uVar3;
      lVar2 = FUN_1424da060(*(undefined8 *)(param_1 + 0x88),(ulonglong)uVar3 << 3);
      *(longlong *)(param_1 + 0x88) = lVar2;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x88);
    }
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x90);
      *(uint *)(param_1 + 0x90) = uVar3 + 1;
      *(longlong *)(lVar2 + (ulonglong)uVar3 * 8) = param_3;
    }
  }
  if (*(longlong *)(param_1 + 0x50 + (longlong)param_2 * 8) == 0) goto LAB_1425f0924;
  lVar2 = FUN_142546200(*(undefined8 *)(param_1 + 0x80));
  FUN_1424a6be0(local_68,lVar2 + 8);
  if ((short)local_60 < 0) {
    if (local_5c == 0) goto LAB_1425f0901;
LAB_1425f08ed:
    if ((local_60 & 2) != 0) {
      local_50 = &local_5e;
    }
    sVar4 = *local_50;
  }
  else {
    if ((short)local_60 >> 5 != 0) goto LAB_1425f08ed;
LAB_1425f0901:
    sVar4 = -1;
  }
  sVar1 = *(short *)(param_3 + 0xe);
  FUN_140859a90(local_68);
  if (sVar4 != sVar1) {
    return;
  }
LAB_1425f0924:
  *(longlong *)(param_1 + 0x50 + (longlong)param_2 * 8) = param_3;
  return;
}



// FUNCTION 1425f0940 FUN_1425f0940 body=261 status=ok
// SIG undefined FUN_1425f0940(void)

void FUN_1425f0940(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (lVar2 != 0) {
    FUN_1425f22d0(lVar2);
    FUN_1401773f0(lVar2);
  }
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (lVar2 != 0) {
    FUN_1425f22d0(lVar2);
    FUN_1401773f0(lVar2);
  }
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (lVar2 != 0) {
    FUN_1425f22d0(lVar2);
    FUN_1401773f0(lVar2);
  }
  lVar2 = *(longlong *)(param_1 + 0x88);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x90);
    if (uVar1 != 0) {
      uVar3 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar3 * 8);
        if (lVar2 != 0) {
          FUN_1425f22d0(lVar2);
          FUN_1401773f0(lVar2);
          uVar1 = *(uint *)(param_1 + 0x90);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
      lVar2 = *(longlong *)(param_1 + 0x88);
    }
    FUN_1424da110(lVar2);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x48);
    if (uVar1 != 0) {
      uVar3 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + uVar3 * 8);
        if (lVar2 != 0) {
          FUN_1425f22d0(lVar2);
          FUN_1401773f0(lVar2);
          uVar1 = *(uint *)(param_1 + 0x48);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
      lVar2 = *(longlong *)(param_1 + 0x40);
    }
    FUN_1424da110(lVar2);
  }
  FUN_140859a90(param_1);
  return;
}



// FUNCTION 1425f0a60 FUN_1425f0a60 body=453 status=ok
// SIG undefined FUN_1425f0a60(void)

bool FUN_1425f0a60(longlong param_1,longlong param_2)

{
  ushort uVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  
  if ((*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48)) &&
     (*(char *)(param_1 + 0x98) == *(char *)(param_2 + 0x98))) {
    uVar1 = *(ushort *)(param_1 + 8);
    if ((uVar1 & 1) == 0) {
      if ((short)uVar1 < 0) {
        iVar7 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar7 = (int)(short)uVar1 >> 5;
      }
      sVar2 = *(short *)(param_2 + 8);
      if (sVar2 < 0) {
        iVar5 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar5 = (int)sVar2 >> 5;
      }
      if (((int)sVar2 & 1U) != 0) {
        return false;
      }
      if (iVar7 != iVar5) {
        return false;
      }
      bVar3 = FUN_1412ae090(param_1,param_2);
    }
    else {
      bVar3 = *(byte *)(param_2 + 8) & 1;
    }
    if (bVar3 != 0) {
      if (*(longlong *)(param_1 + 0x50) == 0) {
        if (*(longlong *)(param_2 + 0x50) != 0) {
          return false;
        }
      }
      else {
        if (*(longlong *)(param_2 + 0x50) == 0) {
          return false;
        }
        cVar4 = FUN_1425f2fe0();
        if (cVar4 == '\0') {
          return false;
        }
      }
      if (*(longlong *)(param_1 + 0x58) == 0) {
        if (*(longlong *)(param_2 + 0x58) != 0) {
          return false;
        }
      }
      else {
        if (*(longlong *)(param_2 + 0x58) == 0) {
          return false;
        }
        cVar4 = FUN_1425f2fe0();
        if (cVar4 == '\0') {
          return false;
        }
      }
      if (*(longlong *)(param_1 + 0x60) == 0) {
        if (*(longlong *)(param_2 + 0x60) != 0) {
          return false;
        }
      }
      else {
        if (*(longlong *)(param_2 + 0x60) == 0) {
          return false;
        }
        cVar4 = FUN_1425f2fe0();
        if (cVar4 == '\0') {
          return false;
        }
      }
      if (*(longlong *)(param_1 + 0x68) == 0) {
        if (*(longlong *)(param_2 + 0x68) != 0) {
          return false;
        }
      }
      else {
        if (*(longlong *)(param_2 + 0x68) == 0) {
          return false;
        }
        cVar4 = FUN_1425f2fe0();
        if (cVar4 == '\0') {
          return false;
        }
      }
      if (*(longlong *)(param_1 + 0x70) == 0) {
        if (*(longlong *)(param_2 + 0x70) != 0) {
          return false;
        }
      }
      else {
        if (*(longlong *)(param_2 + 0x70) == 0) {
          return false;
        }
        cVar4 = FUN_1425f2fe0();
        if (cVar4 == '\0') {
          return false;
        }
      }
      if (*(longlong *)(param_1 + 0x78) == 0) {
        if (*(longlong *)(param_2 + 0x78) == 0) goto LAB_1425f0bdf;
      }
      else if ((*(longlong *)(param_2 + 0x78) != 0) && (cVar4 = FUN_1425f2fe0(), cVar4 != '\0')) {
LAB_1425f0bdf:
        if (*(int *)(param_1 + 0x48) == 0) {
          return true;
        }
        uVar6 = 0;
        do {
          cVar4 = FUN_1425f2fe0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + uVar6 * 8),
                                *(undefined8 *)(*(longlong *)(param_2 + 0x40) + uVar6 * 8));
          if (cVar4 == '\0') break;
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(param_1 + 0x48));
        return cVar4 != '\0';
      }
    }
  }
  return false;
}



// FUNCTION 1425f0c30 FUN_1425f0c30 body=441 status=ok
// SIG undefined FUN_1425f0c30(void)

void FUN_1425f0c30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  longlong lVar2;
  short *psVar3;
  longlong *plVar4;
  short sVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_80 [8];
  ushort local_78;
  short local_76;
  int local_74;
  short *local_68;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar8 = 0;
    do {
      FUN_1425f5690(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + uVar8 * 8),param_2,param_3);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x48));
  }
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x90);
  lVar6 = 1;
  do {
    if ((*(longlong *)(param_1 + 0x50 + lVar6 * 8) != 0) && ((int)uVar8 != 0)) {
      uVar7 = 0;
      do {
        if (*(longlong *)(param_1 + 0x88) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x88) + uVar7 * 8);
        }
        if (**(longlong **)(param_1 + 0x50 + lVar6 * 8) == *plVar4) {
          lVar2 = FUN_142546200(*(undefined8 *)(param_1 + 0x80));
          FUN_1424a6be0(local_80,lVar2 + 8);
          if ((short)local_78 < 0) {
            if (local_74 != 0) goto LAB_1425f0d1a;
LAB_1425f0d39:
            sVar5 = -1;
          }
          else {
            if ((short)local_78 >> 5 == 0) goto LAB_1425f0d39;
LAB_1425f0d1a:
            psVar3 = &local_76;
            if ((local_78 & 2) == 0) {
              psVar3 = local_68;
            }
            sVar5 = *psVar3;
          }
          sVar1 = *(short *)((longlong)plVar4 + 0xe);
          FUN_140859a90(local_80);
          if (sVar5 == sVar1) {
            *(longlong **)(param_1 + 0x50 + lVar6 * 8) = plVar4;
          }
        }
        uVar7 = uVar7 + 1;
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x90);
      } while (uVar7 < uVar8);
    }
    lVar6 = lVar6 + 1;
    if (lVar6 == 4) {
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_1425f5690(*(longlong *)(param_1 + 0x50),param_2,param_3);
      }
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1425f5690(*(longlong *)(param_1 + 0x58),param_2,param_3);
      }
      if (*(longlong *)(param_1 + 0x60) != 0) {
        FUN_1425f5690(*(longlong *)(param_1 + 0x60),param_2,param_3);
      }
      if (*(longlong *)(param_1 + 0x68) != 0) {
        FUN_1425f5690(*(longlong *)(param_1 + 0x68),param_2,param_3);
      }
      if (*(longlong *)(param_1 + 0x70) != 0) {
        FUN_1425f5690(*(longlong *)(param_1 + 0x70),param_2,param_3);
      }
      if (*(longlong *)(param_1 + 0x78) != 0) {
        FUN_1425f5690(*(longlong *)(param_1 + 0x78),param_2,param_3);
      }
      return;
    }
  } while( true );
}



// FUNCTION 1425f0df0 FUN_1425f0df0 body=98 status=ok
// SIG undefined FUN_1425f0df0(void)

void FUN_1425f0df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  int param_5,undefined4 *param_6)

{
  longlong lVar1;
  
  if (param_5 < 0x40) {
    lVar1 = FUN_1425f0e60();
    if (lVar1 != 0) {
      FUN_1425f36e0(lVar1,param_2,param_3,param_4,param_5 + 1,param_6);
    }
  }
  else {
    *param_6 = 0x1b;
  }
  return;
}



// FUNCTION 1425f0e60 FUN_1425f0e60 body=189 status=ok
// SIG undefined FUN_1425f0e60(void)

longlong * FUN_1425f0e60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x98) != '\0') {
    plVar3 = (longlong *)FUN_1425f10c0(param_1,(double)param_2);
    return plVar3;
  }
  if (param_2 < 0) {
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      return *(longlong **)(param_1 + 0x50);
    }
    param_2 = -param_2;
  }
  if ((int)*(uint *)(param_1 + 0x48) < 1) {
    return *(longlong **)(param_1 + 0x68);
  }
  iVar5 = 0;
  uVar4 = *(uint *)(param_1 + 0x48);
  do {
    while( true ) {
      uVar6 = (int)(iVar5 + uVar4) / 2;
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar6 * 8);
      lVar1 = *plVar3;
      if (lVar1 == param_2) {
        return plVar3;
      }
      if (lVar1 <= param_2) break;
      uVar4 = uVar6;
      if ((int)uVar6 <= iVar5) goto LAB_1425f0ed0;
    }
    iVar5 = uVar6 + 1;
  } while (iVar5 < (int)uVar4);
LAB_1425f0ed0:
  if (uVar4 != 0) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x40) + (ulonglong)(uVar4 - 1) * 8);
    cVar2 = FUN_1425f3eb0(plVar3);
    if (cVar2 == '\0') {
      return plVar3;
    }
    if ((uVar4 != 1) && (*(longlong *)(param_1 + 0x40) != 0)) {
      return *(longlong **)(*(longlong *)(param_1 + 0x40) + (ulonglong)(uVar4 - 2) * 8);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1425f0f30 FUN_1425f0f30 body=102 status=ok
// SIG undefined FUN_1425f0f30(void)

void FUN_1425f0f30(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  int param_5,undefined4 *param_6)

{
  longlong lVar1;
  
  if (param_5 < 0x40) {
    lVar1 = FUN_1425f0fa0();
    if (lVar1 != 0) {
      FUN_1425f3a90(lVar1,param_2,param_3,param_4,param_5 + 1,param_6);
    }
  }
  else {
    *param_6 = 0x1b;
  }
  return;
}



// FUNCTION 1425f0fa0 FUN_1425f0fa0 body=274 status=ok
// SIG undefined FUN_1425f0fa0(void)

void FUN_1425f0fa0(longlong param_1,double param_2)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar4 = SUB84(param_2,0);
  uVar5 = (uint)((ulonglong)param_2 >> 0x20);
  if (*(char *)(param_1 + 0x98) != '\0') {
    FUN_1425f10c0(param_1,param_2);
    return;
  }
  cVar1 = FUN_1424d9700(param_2);
  if (cVar1 == '\0') {
    if (param_2 < 0.0) {
      if (*(longlong *)(param_1 + 0x50) != 0) {
        return;
      }
      uVar5 = uVar5 ^ 0x80000000;
    }
    cVar1 = FUN_1424d9730(CONCAT44(uVar5,uVar4));
    if (cVar1 == '\0') {
      dVar3 = (double)FUN_1424d97b0(CONCAT44(uVar5,uVar4));
      if (((((double)CONCAT44(uVar5,uVar4) == dVar3) &&
           (!NAN((double)CONCAT44(uVar5,uVar4)) && !NAN(dVar3))) ||
          (((1.0 < (double)CONCAT44(uVar5,uVar4) || (double)CONCAT44(uVar5,uVar4) == 1.0 ||
            (*(longlong *)(param_1 + 0x60) == 0)) && (*(longlong *)(param_1 + 0x58) == 0)))) &&
         (*(longlong *)(param_1 + 0x68) == 0)) {
        uVar2 = FUN_1425f13c0((double)CONCAT44(uVar5,uVar4) + 0.5);
        FUN_1425f0e60(param_1,uVar2);
        return;
      }
    }
    else if (*(longlong *)(param_1 + 0x70) == 0) {
      FUN_142548c20(*(undefined8 *)(param_1 + 0x80));
      return;
    }
  }
  else if (*(longlong *)(param_1 + 0x78) == 0) {
    FUN_142548c30(*(undefined8 *)(param_1 + 0x80));
    return;
  }
  return;
}



// FUNCTION 1425f10c0 FUN_1425f10c0 body=709 status=ok
// SIG undefined FUN_1425f10c0(void)

undefined8 FUN_1425f10c0(longlong param_1,double param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong in_RDX;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  uVar8 = *(ulonglong *)**(undefined8 **)(param_1 + 0x40);
  if (1 < (ulonglong)*(uint *)(param_1 + 0x48)) {
    uVar9 = 1;
    do {
      lVar13 = *(longlong *)(*(undefined8 **)(param_1 + 0x40))[uVar9];
      uVar3 = uVar8 & 1;
      if ((((uint)uVar8 | (uint)lVar13) & 1) == 0) {
        bVar7 = 0;
        lVar12 = lVar13;
        uVar10 = uVar8;
        do {
          in_RDX = (longlong)uVar10 >> 1;
          lVar4 = lVar12 >> 1;
          uVar11 = (uint)lVar12;
          uVar2 = (uint)uVar10;
          uVar3 = uVar10 & 2;
          bVar7 = bVar7 + 1;
          lVar12 = lVar4;
          uVar10 = in_RDX;
        } while (((uVar11 | uVar2) & 2) == 0);
      }
      else {
        bVar7 = 0;
        lVar4 = lVar13;
        in_RDX = uVar8;
      }
      uVar10 = -lVar4;
      if (uVar3 == 0) {
        uVar10 = in_RDX;
      }
      while (uVar10 != 0) {
        do {
          uVar3 = uVar10;
          uVar10 = (longlong)uVar3 >> 1;
        } while ((uVar3 & 1) == 0);
        lVar12 = -uVar3;
        if (0 < (longlong)uVar3) {
          in_RDX = uVar3;
          lVar12 = lVar4;
        }
        lVar4 = lVar12;
        uVar10 = in_RDX - lVar12;
      }
      in_RDX = in_RDX << (bVar7 & 0x3f);
      if ((uVar8 | in_RDX) >> 0x20 == 0) {
        uVar3 = (uVar8 & 0xffffffff) / (in_RDX & 0xffffffff);
        in_RDX = (uVar8 & 0xffffffff) % (in_RDX & 0xffffffff);
      }
      else {
        uVar3 = (longlong)uVar8 / (longlong)in_RDX;
        in_RDX = (longlong)uVar8 % (longlong)in_RDX;
      }
      uVar8 = uVar3 * lVar13;
      uVar9 = uVar9 + 1;
    } while (uVar9 != *(uint *)(param_1 + 0x48));
  }
  dVar15 = (double)(longlong)uVar8 * param_2 + 0.5;
  cVar1 = FUN_1424d9700(dVar15,in_RDX);
  if (cVar1 == '\0') {
    dVar14 = (double)FUN_1424d9880();
    dVar16 = -dVar14;
    if ((dVar16 <= dVar15) && (dVar16 = dVar15, dVar14 < dVar15)) {
      dVar16 = dVar14;
    }
    dVar15 = -dVar16;
    dVar14 = dVar15;
    if (dVar15 <= dVar16) {
      dVar14 = dVar16;
    }
    dVar14 = (double)FUN_1424d97b0(dVar14);
    lVar13 = -(longlong)dVar14;
    if (dVar15 <= dVar16) {
      lVar13 = (longlong)dVar14;
    }
  }
  else {
    lVar13 = 0;
  }
  dVar15 = (double)FUN_1424d9880();
  uVar18 = (undefined4)((ulonglong)dVar15 >> 0x20);
  cVar1 = FUN_1424d9700();
  uVar9 = 0;
  if (cVar1 == '\0') {
    dVar16 = (double)FUN_1424d9880();
    if (-dVar16 <= dVar15) {
      uVar17 = SUB84(dVar15,0);
      if (dVar16 < dVar15) {
        uVar18 = (undefined4)((ulonglong)dVar16 >> 0x20);
        uVar17 = SUB84(dVar16,0);
      }
    }
    else {
      uVar18 = (undefined4)((ulonglong)-dVar16 >> 0x20);
      uVar17 = SUB84(dVar16,0);
    }
    dVar16 = -(double)CONCAT44(uVar18,uVar17);
    dVar15 = dVar16;
    if (dVar16 <= (double)CONCAT44(uVar18,uVar17)) {
      dVar15 = (double)CONCAT44(uVar18,uVar17);
    }
    dVar15 = (double)FUN_1424d97b0(dVar15);
    uVar3 = -(longlong)dVar15;
    if (dVar16 < (double)CONCAT44(uVar18,uVar17) || dVar16 == (double)CONCAT44(uVar18,uVar17)) {
      uVar3 = (longlong)dVar15;
    }
  }
  else {
    uVar3 = 0;
  }
  uVar11 = *(uint *)(param_1 + 0x48);
  lVar4 = *(longlong *)(param_1 + 0x40);
  if ((ulonglong)uVar11 != 0) {
    uVar10 = 0;
    uVar9 = 0;
    do {
      uVar5 = **(longlong **)(lVar4 + uVar10 * 8) * lVar13;
      if ((uVar5 | uVar8) >> 0x20 == 0) {
        uVar5 = (uVar5 & 0xffffffff) % (uVar8 & 0xffffffff);
      }
      else {
        uVar5 = (longlong)uVar5 % (longlong)uVar8;
      }
      uVar6 = uVar8 - uVar5;
      if ((longlong)uVar5 <= (longlong)(uVar8 - uVar5)) {
        uVar6 = uVar5;
      }
      if ((longlong)uVar6 < (longlong)uVar3) {
        if (uVar6 == 0) {
          uVar9 = uVar10 & 0xffffffff;
          break;
        }
        uVar9 = uVar10 & 0xffffffff;
        uVar3 = uVar6;
      }
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
  }
  uVar2 = (int)uVar9 + 1;
  if (uVar2 < uVar11) {
    lVar13 = **(longlong **)(lVar4 + (ulonglong)uVar2 * 8);
    if (lVar13 == **(longlong **)(lVar4 + uVar9 * 8)) {
      param_2 = (double)lVar13 * param_2;
      if (2.0 <= param_2) {
        uVar9 = (ulonglong)uVar2;
      }
      if (param_2 < 0.5) {
        uVar9 = (ulonglong)uVar2;
      }
    }
  }
  else if (lVar4 == 0) {
    return 0;
  }
  return *(undefined8 *)(lVar4 + uVar9 * 8);
}



// FUNCTION 1425f13c0 FUN_1425f13c0 body=130 status=ok
// SIG undefined FUN_1425f13c0(void)

longlong FUN_1425f13c0(double param_1)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulonglong)param_1 >> 0x20);
  cVar2 = FUN_1424d9700();
  if (cVar2 == '\0') {
    dVar4 = (double)FUN_1424d9880();
    if (-dVar4 <= param_1) {
      uVar5 = SUB84(param_1,0);
      if (dVar4 < param_1) {
        uVar6 = (undefined4)((ulonglong)dVar4 >> 0x20);
        uVar5 = SUB84(dVar4,0);
      }
    }
    else {
      uVar6 = (undefined4)((ulonglong)-dVar4 >> 0x20);
      uVar5 = SUB84(dVar4,0);
    }
    dVar1 = -(double)CONCAT44(uVar6,uVar5);
    dVar4 = dVar1;
    if (dVar1 <= (double)CONCAT44(uVar6,uVar5)) {
      dVar4 = (double)CONCAT44(uVar6,uVar5);
    }
    dVar4 = (double)FUN_1424d97b0(dVar4);
    lVar3 = -(longlong)dVar4;
    if (dVar1 < (double)CONCAT44(uVar6,uVar5) || dVar1 == (double)CONCAT44(uVar6,uVar5)) {
      lVar3 = (longlong)dVar4;
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 1425f1450 FUN_1425f1450 body=765 status=ok
// SIG undefined FUN_1425f1450(void)

ulonglong FUN_1425f1450(longlong param_1,longlong param_2,longlong param_3,double param_4,
                       uint param_5,undefined8 param_6)

{
  double dVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_128 [112];
  undefined **local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  
  local_80 = 0xfffffffffffffffe;
  uVar7 = 0;
  local_a0 = param_3;
  FUN_14252d370(param_6,0);
  if (*(short *)(param_2 + 8) < 0) {
    if (*(int *)(param_2 + 0xc) != 0) {
LAB_1425f14c7:
      local_b8 = icu_64::ParsePosition::vftable;
      local_b0 = 0xffffffff00000000;
      local_98 = icu_64::ParsePosition::vftable;
      local_90 = *(undefined8 *)(local_a0 + 8);
      local_84 = 0xffffffff;
      iVar5 = 0;
      uVar4 = 0;
      local_a8 = param_2;
      do {
        if ((*(longlong *)(param_1 + 0x50 + (ulonglong)uVar4 * 8) != 0) &&
           ((param_5 >> (uVar4 & 0x1f) & 1) == 0)) {
          FUN_14252c810(local_128);
          param_5 = param_5 | 1 << ((byte)uVar4 & 0x1f);
          cVar2 = FUN_1425f3f40(*(undefined8 *)(param_1 + 0x50 + (ulonglong)uVar4 * 8),local_a8,
                                &local_98,0,param_4,param_5,local_128);
          if ((cVar2 != '\0') && (iVar5 < (int)local_90)) {
            FUN_14252ce00(param_6,local_128);
            local_84 = local_90._4_4_;
            local_b0 = local_90;
            iVar5 = (int)local_90;
          }
          local_90 = *(undefined8 *)(local_a0 + 8);
          FUN_14252d110(local_128);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 6);
      cVar2 = FUN_1424d9700(param_4);
      if (cVar2 == '\0') {
        dVar8 = (double)FUN_1424d9880();
        uVar10 = (undefined4)((ulonglong)-dVar8 >> 0x20);
        uVar9 = SUB84(dVar8,0);
        if (-dVar8 <= param_4) {
          uVar10 = (undefined4)((ulonglong)param_4 >> 0x20);
          uVar9 = SUB84(param_4,0);
          if (dVar8 < param_4) {
            uVar10 = (undefined4)((ulonglong)dVar8 >> 0x20);
            uVar9 = SUB84(dVar8,0);
          }
        }
        dVar1 = -(double)CONCAT44(uVar10,uVar9);
        dVar8 = dVar1;
        if (dVar1 <= (double)CONCAT44(uVar10,uVar9)) {
          dVar8 = (double)CONCAT44(uVar10,uVar9);
        }
        dVar8 = (double)FUN_1424d97b0(dVar8);
        lVar6 = -(longlong)dVar8;
        if (dVar1 < (double)CONCAT44(uVar10,uVar9) || dVar1 == (double)CONCAT44(uVar10,uVar9)) {
          lVar6 = (longlong)dVar8;
        }
      }
      else {
        lVar6 = 0;
      }
      uVar4 = *(uint *)(param_1 + 0x48);
      do {
        if (*(short *)(local_a8 + 8) < 0) {
          iVar3 = *(int *)(local_a8 + 0xc);
        }
        else {
          iVar3 = (int)*(short *)(local_a8 + 8) >> 5;
        }
        do {
          if (((int)uVar4 < 1) || (iVar3 <= iVar5)) {
            *(int *)(local_a0 + 8) = iVar5;
            *(undefined4 *)(local_a0 + 0xc) = local_84;
            thunk_FUN_1424b70d0(&local_98);
            thunk_FUN_1424b70d0(&local_b8);
            uVar7 = CONCAT71((int7)((ulonglong)local_128 >> 8),1);
            goto LAB_1425f173f;
          }
          uVar4 = uVar4 - 1;
        } while ((*(char *)(param_1 + 0x98) == '\0') &&
                (lVar6 <= **(longlong **)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 8)));
        FUN_14252c810(local_128);
        cVar2 = FUN_1425f3f40(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 8),
                              local_a8,&local_98,*(undefined1 *)(param_1 + 0x98),param_4,param_5,
                              local_128);
        if ((cVar2 != '\0') && (iVar5 < (int)local_90)) {
          FUN_14252ce00(param_6,local_128);
          local_84 = local_90._4_4_;
          local_b0 = local_90;
          iVar5 = (int)local_90;
        }
        local_90 = *(undefined8 *)(local_a0 + 8);
        FUN_14252d110(local_128);
      } while( true );
    }
  }
  else if (*(short *)(param_2 + 8) >> 5 != 0) goto LAB_1425f14c7;
LAB_1425f173f:
  return uVar7 & 0xffffffff;
}



// FUNCTION 1425f1770 Unwind@1425f1770 body=92 status=ok
// SIG undefined Unwind@1425f1770(void)

void Unwind_1425f1770(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(param_2 + 0x40);
  return;
}



// FUNCTION 1425f17d0 Unwind@1425f17d0 body=98 status=ok
// SIG undefined Unwind@1425f17d0(void)

void Unwind_1425f17d0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0xd0);
  thunk_FUN_1424b70d0(param_2 + 0xb0);
  return;
}



// FUNCTION 1425f1840 Unwind@1425f1840 body=89 status=ok
// SIG undefined Unwind@1425f1840(void)

void Unwind_1425f1840(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(param_2 + 0x40);
  return;
}



// FUNCTION 1425f18a0 FUN_1425f18a0 body=378 status=ok
// SIG undefined FUN_1425f18a0(void)

void FUN_1425f18a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_68 [46];
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(short *)(param_1 + 8) < 0) {
    iVar4 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar4 = (int)*(short *)(param_1 + 8) >> 5;
  }
  FUN_1424a9690(param_2,param_1,0,iVar4);
  local_3a = 0x3a;
  FUN_1424a6cf0(param_2,&local_3a,0,1);
  local_3a = 10;
  FUN_1424a6cf0(param_2,&local_3a,0,1);
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar5 = 0;
    do {
      FUN_1425f30d0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + uVar5 * 8),param_2);
      local_3a = 10;
      FUN_1424a6cf0(param_2,&local_3a,0,1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x48));
  }
  lVar6 = 0;
  do {
    plVar1 = *(longlong **)(param_1 + 0x50 + lVar6 * 8);
    if (plVar1 != (longlong *)0x0) {
      if (*plVar1 + 4U < 3) {
        uVar3 = *(uint *)(param_1 + 0x90);
        if (uVar3 != 0) {
          uVar5 = 0;
          do {
            plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x88) + uVar5 * 8);
            if (*plVar2 == *plVar1) {
              FUN_1425f30d0(plVar2,param_2);
              local_3a = 10;
              FUN_1424a6cf0(param_2,&local_3a,0,1);
              uVar3 = *(uint *)(param_1 + 0x90);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar3);
        }
      }
      else {
        FUN_1425f30d0(plVar1,param_2);
        local_3a = 10;
        FUN_1424a6cf0(param_2,&local_3a,0,1);
      }
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 6);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 1425f1a40 FUN_1425f1a40 body=74 status=ok
// SIG undefined FUN_1425f1a40(void)

ulonglong FUN_1425f1a40(uint param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ushort uVar4;
  
  if (param_1 != 0) {
    uVar2 = (ulonglong)param_1;
    uVar1 = uVar2;
    if ((param_2 & 1) == 0) {
      uVar1 = 1;
    }
    if (1 < (ushort)param_2) {
      do {
        uVar2 = uVar2 * uVar2;
        uVar3 = uVar2;
        if ((param_2 & 2) == 0) {
          uVar3 = 1;
        }
        uVar1 = uVar1 * uVar3;
        uVar4 = (ushort)param_2;
        param_2 = (param_2 & 0xffff) >> 1;
      } while (3 < uVar4);
    }
    return uVar1;
  }
  return 0;
}



// FUNCTION 1425f1a90 FUN_1425f1a90 body=301 status=ok
// SIG undefined FUN_1425f1a90(void)

ulonglong FUN_1425f1a90(ulonglong param_1,ushort *param_2,int param_3,uint param_4,char param_5)

{
  ushort *puVar1;
  ulonglong uVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *puVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  ulonglong uVar9;
  
  uVar4 = 2;
  if (2 < param_4) {
    uVar4 = param_4;
  }
  uVar9 = 0x24;
  if (uVar4 < 0x24) {
    uVar9 = (ulonglong)uVar4;
  }
  if ((((param_5 == '\0') && (param_3 != 0)) && ((longlong)param_1 < 0)) && ((int)uVar9 == 10)) {
    param_1 = -param_1;
    *param_2 = 0x2d;
    param_3 = param_3 + -1;
    puVar5 = param_2 + 1;
joined_r0x0001425f1b0e:
    while ((param_3 != 0 && (param_1 != 0))) {
      param_3 = param_3 + -1;
      if (param_1 >> 0x20 == 0) {
        uVar2 = (param_1 & 0xffffffff) / uVar9;
        param_1 = (param_1 & 0xffffffff) % uVar9;
        iVar7 = (int)param_1;
      }
      else {
        uVar2 = (longlong)param_1 / (longlong)uVar9;
        param_1 = (longlong)param_1 % (longlong)uVar9;
        iVar7 = (int)param_1;
      }
      uVar6 = (ushort)param_1;
      if (param_5 == '\0') {
        uVar6 = (ushort)(byte)(&DAT_149c4d120)[iVar7];
      }
      *puVar5 = uVar6;
      param_1 = uVar2;
      puVar5 = puVar5 + 1;
    }
    if (param_3 == 0) goto LAB_1425f1b75;
  }
  else {
    puVar5 = param_2;
    if ((param_1 != 0) || (param_3 == 0)) goto joined_r0x0001425f1b0e;
    uVar6 = 0x30;
    if (param_5 != '\0') {
      uVar6 = 0;
    }
    puVar5 = param_2 + 1;
    *param_2 = uVar6;
    if (param_3 == 1) goto LAB_1425f1b75;
  }
  *puVar5 = 0;
LAB_1425f1b75:
  puVar3 = puVar5 + -1;
  if (param_2 + (*param_2 == 0x2d) < puVar3) {
    puVar1 = param_2 + (*param_2 == 0x2d);
    do {
      puVar8 = puVar1 + 1;
      uVar6 = *puVar3;
      *puVar3 = *puVar1;
      *puVar1 = uVar6;
      puVar3 = puVar3 + -1;
      puVar1 = puVar8;
    } while (puVar8 < puVar3);
  }
  return (ulonglong)((longlong)puVar5 - (longlong)param_2) >> 1 & 0xffffffff;
}



// FUNCTION 1425f1bd0 FUN_1425f1bd0 body=114 status=ok
// SIG undefined FUN_1425f1bd0(void)

undefined8 *
FUN_1425f1bd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  param_1[1] = 10;
  FUN_1424a6be0(param_1 + 2,param_3);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  if (0x1f < *(ushort *)(param_1 + 3)) {
    FUN_1425f1c80(param_1,param_1 + 2,param_4);
  }
  return param_1;
}



// FUNCTION 1425f1c50 Unwind@1425f1c50 body=36 status=ok
// SIG undefined Unwind@1425f1c50(void)

void Unwind_1425f1c50(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425f1c80 FUN_1425f1c80 body=1406 status=ok
// SIG undefined FUN_1425f1c80(void)

void FUN_1425f1c80(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  short *psVar3;
  longlong lVar4;
  undefined2 uVar5;
  ushort uVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  double dVar12;
  double dVar13;
  undefined **local_a0;
  short local_98;
  short local_96;
  uint local_94 [3];
  short *local_88;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (*(short *)(param_2 + 8) < 0) {
    iVar10 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar10 = (int)*(short *)(param_2 + 8) >> 5;
  }
  uVar2 = FUN_1424a8940(param_2,0x3a,0,iVar10);
  if (uVar2 == 0xffffffff) goto LAB_1425f21bd;
  local_a0 = &PTR_FUN_149e18960;
  local_98 = 2;
  FUN_1424a8e40(&local_a0);
  uVar9 = local_94[0];
  if (-1 < local_98) {
    uVar9 = (int)local_98 >> 5;
  }
  FUN_1424a9610(&local_a0,0,uVar9,param_2,0,uVar2);
  do {
    sVar8 = *(short *)(param_2 + 8);
    if (sVar8 < 0) {
      uVar9 = *(uint *)(param_2 + 0xc);
    }
    else {
      uVar9 = (int)sVar8 >> 5;
    }
    uVar2 = uVar2 + 1;
    if ((int)uVar9 <= (int)uVar2) break;
    uVar5 = 0xffff;
    if (uVar2 < uVar9) {
      lVar4 = param_2 + 10;
      if (((int)sVar8 & 2U) == 0) {
        lVar4 = *(longlong *)(param_2 + 0x18);
      }
      uVar5 = *(undefined2 *)(lVar4 + (longlong)(int)uVar2 * 2);
    }
    cVar1 = FUN_1425cc7f0(uVar5);
  } while (cVar1 != '\0');
  FUN_1424a9130(param_2,0,uVar2,0,0,0);
  if (local_98 < 0) {
    uVar2 = local_94[0];
    if (local_94[0] != 0) goto LAB_1425f1db3;
LAB_1425f1dc9:
    sVar7 = -1;
    sVar8 = -1;
LAB_1425f1fa9:
    cVar1 = FUN_1424a7e30(&local_a0,0,uVar2,&DAT_149c4d170,0,2);
    if (cVar1 == '\0') {
      *param_1 = -1;
    }
    else if (uVar2 == 3) {
      if ((sVar8 == 0x30) && (sVar7 == 0x78)) {
        *param_1 = -3;
      }
      else if ((sVar8 == 0x78) && (sVar7 == 0x78)) {
        *param_1 = -2;
      }
      else {
        if ((sVar8 != 0x78) || (sVar7 != 0x30)) {
          cVar1 = FUN_1424c19f0(&local_a0,&DAT_149c4d176,3);
          if (cVar1 == '\0') {
            *param_1 = -6;
          }
          else {
            cVar1 = FUN_1424c19f0(&local_a0,&DAT_149c4d17e,3);
            if (cVar1 != '\0') goto LAB_1425f21b4;
            *param_1 = -5;
          }
          *(undefined4 *)(param_1 + 1) = 10;
          *(undefined2 *)((longlong)param_1 + 0xc) = 0;
          goto LAB_1425f21b4;
        }
        *param_1 = -4;
      }
      *(undefined4 *)(param_1 + 1) = 10;
      *(undefined2 *)((longlong)param_1 + 0xc) = 0;
      if (-1 < local_98) {
        local_94[0] = (int)local_98 >> 5;
      }
      sVar8 = -1;
      if (1 < local_94[0]) {
        puVar11 = local_94;
        if (((int)local_98 & 2U) == 0) {
          puVar11 = (uint *)(local_88 + 1);
        }
        sVar8 = (short)*puVar11;
      }
      *(short *)((longlong)param_1 + 0xe) = sVar8;
    }
  }
  else {
    uVar2 = (int)local_98 >> 5;
    if (uVar2 == 0) goto LAB_1425f1dc9;
LAB_1425f1db3:
    psVar3 = local_88;
    if (((int)local_98 & 2U) != 0) {
      psVar3 = &local_96;
    }
    sVar8 = *psVar3;
    sVar7 = psVar3[(longlong)(int)uVar2 + -1];
    if ((9 < (ushort)(sVar8 - 0x30U)) || (sVar7 == 0x78)) goto LAB_1425f1fa9;
    uVar6 = 0x20;
    uVar9 = 0;
    lVar4 = 0;
    if (0 < (int)uVar2) {
      do {
        while (local_98 < 0) {
          if (local_94[0] <= uVar9) goto LAB_1425f1efd;
LAB_1425f1f1a:
          psVar3 = &local_96;
          if (((int)local_98 & 2U) == 0) {
            psVar3 = local_88;
          }
          uVar6 = psVar3[uVar9];
          if (9 < (ushort)(uVar6 - 0x30)) {
            if ((uVar6 != 0x2f) && (uVar6 != 0x3e)) goto LAB_1425f1f72;
            goto LAB_1425f1e18;
          }
          lVar4 = (ulonglong)(uVar6 - 0x30) + lVar4 * 10;
          uVar9 = uVar9 + 1;
          if ((int)uVar2 <= (int)uVar9) goto LAB_1425f1e18;
        }
        if (uVar9 < (uint)((int)local_98 >> 5)) goto LAB_1425f1f1a;
LAB_1425f1efd:
        uVar6 = 0xffff;
LAB_1425f1f72:
        cVar1 = FUN_1425cc7f0(uVar6);
        if (((uVar6 & 0xfffd) != 0x2c) && (cVar1 == '\0')) goto LAB_1425f1f91;
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar2);
    }
LAB_1425f1e18:
    FUN_1425f2c90(param_1,lVar4,param_3);
    if (uVar6 == 0x2f) {
      uVar6 = 0x2f;
      iVar10 = 0;
LAB_1425f1e40:
      do {
        uVar9 = uVar9 + 1;
        if ((int)uVar2 <= (int)uVar9) {
LAB_1425f20c3:
          *(int *)(param_1 + 1) = iVar10;
          if (((iVar10 == 0) && (*param_3 = 9, (int)param_1[1] == 0)) || (*param_1 < 1)) {
            uVar5 = 0;
          }
          else {
            dVar12 = (double)FUN_1424d9890((double)*param_1);
            dVar13 = (double)FUN_1424d9890((double)(int)param_1[1]);
            iVar10 = (int)(dVar12 / dVar13) + 1;
            lVar4 = FUN_1425f1a40((int)param_1[1],iVar10);
            if (*param_1 < lVar4) {
              iVar10 = (int)(dVar12 / dVar13);
            }
            uVar5 = (undefined2)iVar10;
          }
          *(undefined2 *)((longlong)param_1 + 0xc) = uVar5;
          goto LAB_1425f2128;
        }
        if (local_98 < 0) {
          if (local_94[0] <= uVar9) goto LAB_1425f1e5d;
LAB_1425f1e7a:
          psVar3 = &local_96;
          if (((int)local_98 & 2U) == 0) {
            psVar3 = local_88;
          }
          uVar6 = psVar3[uVar9];
          if ((ushort)(uVar6 - 0x30) < 10) {
            iVar10 = (uint)uVar6 + iVar10 * 10 + -0x30;
            goto LAB_1425f1e40;
          }
          if (uVar6 == 0x3e) {
            uVar6 = 0x3e;
            goto LAB_1425f20c3;
          }
        }
        else {
          if (uVar9 < (uint)((int)local_98 >> 5)) goto LAB_1425f1e7a;
LAB_1425f1e5d:
          uVar6 = 0xffff;
        }
        cVar1 = FUN_1425cc7f0(uVar6);
      } while (((uVar6 & 0xfffd) == 0x2c) || (cVar1 != '\0'));
LAB_1425f1f91:
      *param_3 = 9;
      FUN_140859a90(&local_a0);
      return;
    }
LAB_1425f2128:
    if (uVar6 == 0x3e) {
      if (-1 < local_98) {
        local_94[0] = (int)local_98 >> 5;
      }
      if ((int)uVar9 < (int)local_94[0]) {
        psVar3 = &local_96;
        if (((int)local_98 & 2U) == 0) {
          psVar3 = local_88;
        }
        sVar8 = *(short *)((longlong)param_1 + 0xc);
        psVar3 = psVar3 + (int)uVar9;
        do {
          if (((local_94[0] <= uVar9) || (*psVar3 != 0x3e)) || (sVar8 < 1)) goto LAB_1425f1f91;
          sVar8 = sVar8 + -1;
          *(short *)((longlong)param_1 + 0xc) = sVar8;
          uVar9 = uVar9 + 1;
          psVar3 = psVar3 + 1;
        } while (local_94[0] != uVar9);
      }
    }
  }
LAB_1425f21b4:
  FUN_140859a90(&local_a0);
LAB_1425f21bd:
  uVar6 = *(ushort *)(param_2 + 8);
  if ((short)uVar6 < 0) {
    if (*(int *)(param_2 + 0xc) < 1) {
      return;
    }
  }
  else if ((short)uVar6 >> 5 < 1) {
    return;
  }
  if ((uVar6 & 2) == 0) {
    sVar8 = **(short **)(param_2 + 0x18);
  }
  else {
    sVar8 = *(short *)(param_2 + 10);
  }
  if (sVar8 == 0x27) {
    FUN_1424a9130(param_2,0,1,0,0,0);
  }
  return;
}



// FUNCTION 1425f2230 Unwind@1425f2230 body=68 status=ok
// SIG undefined Unwind@1425f2230(void)

void Unwind_1425f2230(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x30) = &DAT_149c4d170;
  return;
}



// FUNCTION 1425f2280 Unwind@1425f2280 body=65 status=ok
// SIG undefined Unwind@1425f2280(void)

void Unwind_1425f2280(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x48);
  return;
}



// FUNCTION 1425f22d0 FUN_1425f22d0 body=119 status=ok
// SIG undefined FUN_1425f22d0(void)

void FUN_1425f22d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  if (puVar2 != puVar1) {
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      puVar2 = *(undefined8 **)(param_1 + 0x50);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_140859a90(param_1 + 0x10);
  return;
}



// FUNCTION 1425f2350 FUN_1425f2350 body=1014 status=ok
// SIG undefined FUN_1425f2350(void)

void FUN_1425f2350(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,undefined4 *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  undefined **local_d8;
  undefined2 local_d0;
  undefined **local_98;
  undefined2 local_90;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = (longlong *)thunk_FUN_1424da030(0x70);
  if (local_50 == (longlong *)0x0) {
    *param_6 = 7;
    return;
  }
  *local_50 = 0;
  local_50[1] = 10;
  local_58 = local_50 + 2;
  FUN_1424a6be0(local_58,param_1);
  local_50[10] = 0;
  local_50[0xb] = 0;
  local_50[0xc] = param_4;
  local_50[0xd] = 0;
  if (0x1f < *(ushort *)(local_50 + 3)) {
    FUN_1425f1c80(local_50,local_58,param_6);
  }
  FUN_1424a7c80(param_1,local_58);
  if (*(short *)(param_1 + 8) < 0) {
    iVar7 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar7 = (int)*(short *)(param_1 + 8) >> 5;
  }
  uVar1 = FUN_1424a8940(param_1,0x5b,0,iVar7);
  if (-1 < (int)uVar1) {
    if (*(short *)(param_1 + 8) < 0) {
      iVar7 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar7 = (int)*(short *)(param_1 + 8) >> 5;
    }
    uVar2 = FUN_1424a8940(param_1,0x5d,0,iVar7);
    if ((-1 < (int)uVar2) && ((int)uVar1 <= (int)uVar2)) {
      iVar7 = -7;
      if (*local_50 < 1) {
        iVar7 = (int)*local_50;
      }
      if ((5 < iVar7 + 6U) || ((0x2bU >> (iVar7 + 6U & 0x1f) & 1) == 0)) {
        local_98 = &PTR_FUN_149e18960;
        local_90 = 2;
        plVar6 = (longlong *)*local_50;
        if ((longlong)plVar6 < 1) {
LAB_1425f254a:
          uVar3 = 0xfffffff9;
          if ((longlong)plVar6 < 1) {
            uVar3 = (uint)plVar6;
          }
          if ((uVar3 | 2) == 0xfffffffe) goto LAB_1425f255d;
          plVar6 = (longlong *)0x0;
        }
        else {
          local_58 = plVar6;
          uVar5 = FUN_1425f1a40((int)local_50[1],*(undefined2 *)((longlong)local_50 + 0xc));
          if ((uVar5 | (ulonglong)local_58) >> 0x20 == 0) {
            uVar5 = ((ulonglong)local_58 & 0xffffffff) % (uVar5 & 0xffffffff);
          }
          else {
            uVar5 = (ulonglong)local_58 % uVar5;
          }
          if (uVar5 != 0) {
            plVar6 = (longlong *)*local_50;
            goto LAB_1425f254a;
          }
LAB_1425f255d:
          plVar6 = (longlong *)thunk_FUN_1424da030(0x70);
          if (plVar6 == (longlong *)0x0) {
            *param_6 = 7;
            FUN_140859a90(&local_98);
            return;
          }
          local_d8 = &PTR_FUN_149e18960;
          local_d0 = 2;
          local_58 = plVar6;
          FUN_1425f1bd0(plVar6,param_4,&local_d8,param_6);
          FUN_140859a90(&local_d8);
          plVar6 = local_58;
          lVar4 = *local_50;
          if (lVar4 < 0) {
            if ((int)lVar4 == -4) {
              *local_58 = lVar4;
              *local_50 = -2;
            }
            else if ((int)lVar4 == -2) {
              *local_58 = -3;
            }
          }
          else {
            *local_58 = lVar4;
            if (*(char *)(param_2 + 0x98) == '\0') {
              *local_50 = *local_50 + 1;
            }
          }
          *(int *)(local_58 + 1) = (int)local_50[1];
          *(undefined2 *)((longlong)local_58 + 0xc) = *(undefined2 *)((longlong)local_50 + 0xc);
          FUN_1424a9690(&local_98,param_1,0,uVar1);
          if (*(short *)(param_1 + 8) < 0) {
            iVar7 = *(int *)(param_1 + 0xc);
          }
          else {
            iVar7 = (int)*(short *)(param_1 + 8) >> 5;
          }
          if ((int)(uVar2 + 1) < iVar7) {
            FUN_1424a9690(&local_98,param_1,uVar2 + 1,iVar7 + ~uVar2);
          }
          FUN_1425f2850(plVar6,param_2,&local_98,param_3,param_6);
        }
        FUN_1424bce00(&local_98,param_1,0,uVar1);
        FUN_1424a9690(&local_98,param_1,uVar1 + 1,~uVar1 + uVar2);
        if (*(short *)(param_1 + 8) < 0) {
          iVar7 = *(int *)(param_1 + 0xc);
        }
        else {
          iVar7 = (int)*(short *)(param_1 + 8) >> 5;
        }
        if ((int)(uVar2 + 1) < iVar7) {
          FUN_1424a9690(&local_98,param_1,uVar2 + 1,iVar7 + ~uVar2);
        }
        FUN_1425f2850(local_50,param_2,&local_98,param_3,param_6);
        if (plVar6 != (longlong *)0x0) {
          if (*plVar6 < 0) {
            FUN_1425f0780(param_2,plVar6);
          }
          else {
            FUN_1425f2c30(param_5,plVar6);
          }
        }
        FUN_140859a90(&local_98);
        lVar4 = *local_50;
        plVar6 = local_50;
        goto joined_r0x0001425f2720;
      }
    }
  }
  plVar6 = local_50;
  FUN_1425f2850(local_50,param_2,param_1,param_3,param_6);
  lVar4 = *plVar6;
joined_r0x0001425f2720:
  if (lVar4 < 0) {
    FUN_1425f0780(param_2,plVar6);
  }
  else {
    if ((int)param_5[1] == *(int *)((longlong)param_5 + 0xc)) {
      uVar1 = (int)param_5[1] + 10;
      *(uint *)((longlong)param_5 + 0xc) = uVar1;
      lVar4 = FUN_1424da060(*param_5,(ulonglong)uVar1 << 3);
      *param_5 = lVar4;
    }
    else {
      lVar4 = *param_5;
    }
    if (lVar4 == 0) {
      param_5[1] = 0;
    }
    else {
      uVar1 = *(uint *)(param_5 + 1);
      *(uint *)(param_5 + 1) = uVar1 + 1;
      *(longlong **)(lVar4 + (ulonglong)uVar1 * 8) = plVar6;
    }
  }
  return;
}



// FUNCTION 1425f2750 Unwind@1425f2750 body=55 status=ok
// SIG undefined Unwind@1425f2750(void)

void Unwind_1425f2750(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0xb0));
  return;
}



// FUNCTION 1425f2790 Unwind@1425f2790 body=55 status=ok
// SIG undefined Unwind@1425f2790(void)

void Unwind_1425f2790(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xb8));
  return;
}



// FUNCTION 1425f27d0 Unwind@1425f27d0 body=64 status=ok
// SIG undefined Unwind@1425f27d0(void)

void Unwind_1425f27d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xb0));
  return;
}



// FUNCTION 1425f2810 Unwind@1425f2810 body=55 status=ok
// SIG undefined Unwind@1425f2810(void)

void Unwind_1425f2810(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 1425f2850 FUN_1425f2850 body=736 status=ok
// SIG undefined FUN_1425f2850(void)

void FUN_1425f2850(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined1 local_c8 [8];
  byte local_c0;
  undefined1 local_88 [8];
  ushort local_80;
  undefined1 local_7e [2];
  uint local_7c;
  undefined1 *local_70;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_5) {
    return;
  }
  lVar1 = param_1 + 0x10;
  FUN_1424a7c80(lVar1,param_3);
  lVar8 = FUN_1425f2d50(param_1,param_2,param_4,param_5);
  *(longlong *)(param_1 + 0x50) = lVar8;
  if (lVar8 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_1425f2d50(param_1,param_2,param_4,param_5);
  }
  *(undefined8 *)(param_1 + 0x58) = uVar9;
  if (*(short *)(param_1 + 0x18) < 0) {
    uVar7 = *(uint *)(param_1 + 0x1c);
  }
  else {
    uVar7 = (int)*(short *)(param_1 + 0x18) >> 5;
  }
  uVar10 = (int)uVar7 >> 0x1f & uVar7;
  iVar5 = FUN_1424a8860(lVar1,&DAT_149c4d186,0,0xffffffff,uVar10,uVar7 - uVar10);
  if (iVar5 < 0) {
    return;
  }
  if (*(short *)(param_1 + 0x18) < 0) {
    iVar6 = *(int *)(param_1 + 0x1c);
  }
  else {
    iVar6 = (int)*(short *)(param_1 + 0x18) >> 5;
  }
  iVar12 = iVar5;
  if (iVar6 < iVar5) {
    iVar12 = iVar6;
  }
  iVar6 = FUN_1424a8860(lVar1,&DAT_149c4d18c,0,0xffffffff,iVar12,iVar6 - iVar12);
  if (iVar6 < 0) {
    return;
  }
  if (*(short *)(param_1 + 0x18) < 0) {
    iVar12 = *(int *)(param_1 + 0x1c);
  }
  else {
    iVar12 = (int)*(short *)(param_1 + 0x18) >> 5;
  }
  iVar3 = iVar5;
  if (iVar12 < iVar5) {
    iVar3 = iVar12;
  }
  uVar7 = FUN_1424a8940(lVar1,0x2c,iVar3,iVar12 - iVar3);
  if ((int)uVar7 < 0) {
    *param_5 = 9;
    return;
  }
  FUN_1424a84d0(lVar1,local_c8,iVar5 + 2,(uVar7 - iVar5) + -2);
  FUN_1424a7060(local_88,1,L"cardinal",0xffffffff);
  if ((local_80 & 1) == 0) {
    uVar10 = local_7c;
    if (-1 < (short)local_80) {
      uVar10 = (int)(short)local_80 >> 5;
    }
    uVar11 = 0;
    if (0 < (int)uVar10) {
      uVar11 = uVar10;
    }
    puVar13 = local_70;
    if ((local_80 & 2) != 0) {
      puVar13 = local_7e;
    }
    cVar4 = FUN_1424a7e30(local_c8,0,uVar10,puVar13,(int)uVar10 >> 0x1f & uVar10,uVar11);
  }
  else {
    cVar4 = (local_c0 & 1) == 0;
  }
  FUN_140859a90(local_88);
  if (cVar4 == '\0') {
    uVar9 = 0;
  }
  else {
    FUN_1424a7060(local_88,1,L"ordinal",0xffffffff);
    if ((local_80 & 1) == 0) {
      if (-1 < (short)local_80) {
        local_7c = (int)(short)local_80 >> 5;
      }
      uVar10 = 0;
      if (0 < (int)local_7c) {
        uVar10 = local_7c;
      }
      if ((local_80 & 2) != 0) {
        local_70 = local_7e;
      }
      cVar4 = FUN_1424a7e30(local_c8,0,local_7c,local_70,(int)local_7c >> 0x1f & local_7c,uVar10);
    }
    else {
      cVar4 = (local_c0 & 1) == 0;
    }
    FUN_140859a90(local_88);
    if (cVar4 != '\0') {
      *param_5 = 1;
      goto LAB_1425f2b22;
    }
    uVar9 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  FUN_1424a84d0(lVar1,local_88,uVar7 + 1,iVar6 + ~uVar7);
  uVar9 = FUN_142548de0(uVar2,uVar9,local_88,param_5);
  *(undefined8 *)(param_1 + 0x68) = uVar9;
  FUN_140859a90(local_88);
LAB_1425f2b22:
  FUN_140859a90(local_c8);
  return;
}



// FUNCTION 1425f2b30 Unwind@1425f2b30 body=55 status=ok
// SIG undefined Unwind@1425f2b30(void)

void Unwind_1425f2b30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 1425f2b70 Unwind@1425f2b70 body=55 status=ok
// SIG undefined Unwind@1425f2b70(void)

void Unwind_1425f2b70(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 1425f2bb0 Unwind@1425f2bb0 body=55 status=ok
// SIG undefined Unwind@1425f2bb0(void)

void Unwind_1425f2bb0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 1425f2bf0 Unwind@1425f2bf0 body=55 status=ok
// SIG undefined Unwind@1425f2bf0(void)

void Unwind_1425f2bf0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425f2c30 FUN_1425f2c30 body=84 status=ok
// SIG undefined FUN_1425f2c30(void)

void FUN_1425f2c30(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0xc)) {
    uVar2 = (int)param_1[1] + 10;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
    lVar1 = FUN_1424da060(*param_1,(ulonglong)uVar2 << 3);
    *param_1 = lVar1;
  }
  else {
    lVar1 = *param_1;
  }
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    *(undefined8 *)(lVar1 + (ulonglong)uVar2 * 8) = param_2;
  }
  return;
}



// FUNCTION 1425f2c90 FUN_1425f2c90 body=190 status=ok
// SIG undefined FUN_1425f2c90(void)

void FUN_1425f2c90(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 10;
  if (param_2 < 1) {
    *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    dVar4 = (double)FUN_1424d9890((double)param_2);
    dVar5 = (double)FUN_1424d9890((double)(int)param_1[1]);
    iVar3 = (int)(dVar4 / dVar5) + 1;
    lVar2 = FUN_1425f1a40((int)param_1[1],iVar3);
    if (*param_1 < lVar2) {
      iVar3 = (int)(dVar4 / dVar5);
    }
    *(short *)((longlong)param_1 + 0xc) = (short)iVar3;
    plVar1 = (longlong *)param_1[10];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,(int)param_1[1],iVar3,param_3);
    }
    plVar1 = (longlong *)param_1[0xb];
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425f2d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))
                (plVar1,(int)param_1[1],*(undefined2 *)((longlong)param_1 + 0xc),param_3);
      return;
    }
  }
  return;
}



// FUNCTION 1425f2d50 FUN_1425f2d50 body=572 status=ok
// SIG undefined FUN_1425f2d50(void)

undefined8 FUN_1425f2d50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  short sVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar12;
  ulonglong uVar11;
  undefined8 in_stack_ffffffffffffff60;
  undefined8 uVar13;
  undefined4 uVar15;
  undefined ***pppuVar14;
  undefined **local_90;
  short local_88;
  int local_84;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = param_1 + 0x10;
  uVar9 = 0xffffffff;
  lVar8 = 0;
  local_50 = param_2;
  do {
    if (*(short *)(param_1 + 0x18) < 0) {
      iVar10 = *(int *)(param_1 + 0x1c);
    }
    else {
      iVar10 = (int)*(short *)(param_1 + 0x18) >> 5;
    }
    uVar3 = FUN_1424a8940(lVar1,**(undefined2 **)((longlong)&PTR_DAT_149c4d1a0 + lVar8),0,iVar10);
    uVar4 = uVar9;
    if ((int)uVar3 < (int)uVar9) {
      uVar4 = uVar3;
    }
    if (uVar9 == 0xffffffff) {
      uVar4 = uVar3;
    }
    if (uVar3 != 0xffffffff) {
      uVar9 = uVar4;
    }
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0x58);
  if (uVar9 == 0xffffffff) {
LAB_1425f2e37:
    uVar5 = 0;
  }
  else {
    if (*(short *)(param_1 + 0x18) < 0) {
      uVar4 = *(uint *)(param_1 + 0x1c);
    }
    else {
      uVar4 = (int)*(short *)(param_1 + 0x18) >> 5;
    }
    uVar3 = (int)uVar4 >> 0x1f & uVar4;
    uVar5 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff58 >> 0x20),uVar3);
    uVar13 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff60 >> 0x20),uVar4 - uVar3);
    uVar4 = FUN_1424a8860(lVar1,&DAT_149c4d192,0,3,uVar5,uVar13);
    uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar15 = (undefined4)((ulonglong)uVar13 >> 0x20);
    if (uVar4 == uVar9) {
      uVar4 = uVar9 + 2;
LAB_1425f2e2d:
      if (uVar4 == 0xffffffff) goto LAB_1425f2e37;
    }
    else {
      sVar2 = *(short *)(param_1 + 0x18);
      if (sVar2 < 0) {
        uVar4 = *(uint *)(param_1 + 0x1c);
      }
      else {
        uVar4 = (int)sVar2 >> 5;
      }
      sVar7 = -1;
      if (uVar9 < uVar4) {
        if (((int)sVar2 & 2U) == 0) {
          lVar8 = *(longlong *)(param_1 + 0x28);
        }
        else {
          lVar8 = param_1 + 0x1a;
        }
        sVar7 = *(short *)(lVar8 + (longlong)(int)uVar9 * 2);
      }
      uVar3 = 0;
      if ((-2 < (int)uVar9) && (uVar3 = uVar4, (int)uVar9 < (int)uVar4)) {
        uVar3 = uVar9 + 1;
      }
      uVar4 = FUN_1424a8940(lVar1,sVar7,uVar3,uVar4 - uVar3);
      if ((sVar7 != 0x3c) || (uVar4 == 0xffffffff)) goto LAB_1425f2e2d;
      sVar2 = *(short *)(param_1 + 0x18);
      if (sVar2 < 0) {
        uVar3 = *(uint *)(param_1 + 0x1c);
      }
      else {
        uVar3 = (int)sVar2 >> 5;
      }
      if (((int)uVar4 < (int)(uVar3 - 1)) && (uVar6 = uVar4 + 1, uVar6 < uVar3)) {
        if (((int)sVar2 & 2U) == 0) {
          lVar8 = *(longlong *)(param_1 + 0x28);
        }
        else {
          lVar8 = param_1 + 0x1a;
        }
        if (*(short *)(lVar8 + (longlong)(int)uVar6 * 2) == 0x3c) {
          uVar4 = uVar6;
        }
      }
    }
    local_90 = &PTR_FUN_149e18960;
    local_88 = 2;
    FUN_1424a8e40(&local_90);
    iVar10 = (uVar4 - uVar9) + 1;
    if (-1 < local_88) {
      local_84 = (int)local_88 >> 5;
    }
    pppuVar14 = &local_90;
    FUN_1424a9610(pppuVar14,0,local_84,lVar1,CONCAT44(uVar12,uVar9),CONCAT44(uVar15,iVar10));
    uVar11 = *(ulonglong *)(param_1 + 0x60);
    uVar5 = FUN_1426b4ce0(uVar9,param_1,param_3,local_50,uVar11,pppuVar14,param_4);
    FUN_1424a9130(lVar1,uVar9,iVar10,0,uVar11 & 0xffffffff00000000,
                  (ulonglong)pppuVar14 & 0xffffffff00000000);
    FUN_140859a90(&local_90);
  }
  return uVar5;
}



// FUNCTION 1425f2fa0 Unwind@1425f2fa0 body=55 status=ok
// SIG undefined Unwind@1425f2fa0(void)

void Unwind_1425f2fa0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1425f2fe0 FUN_1425f2fe0 body=229 status=ok
// SIG undefined FUN_1425f2fe0(void)

bool FUN_1425f2fe0(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  if (((*param_1 == *param_2) && ((int)param_1[1] == (int)param_2[1])) &&
     (*(short *)((longlong)param_1 + 0xc) == *(short *)((longlong)param_2 + 0xc))) {
    uVar1 = *(ushort *)(param_1 + 3);
    if ((uVar1 & 1) == 0) {
      if ((short)uVar1 < 0) {
        iVar6 = *(int *)((longlong)param_1 + 0x1c);
      }
      else {
        iVar6 = (int)(short)uVar1 >> 5;
      }
      sVar2 = (short)param_2[3];
      if (sVar2 < 0) {
        iVar5 = *(int *)((longlong)param_2 + 0x1c);
      }
      else {
        iVar5 = (int)sVar2 >> 5;
      }
      if (((int)sVar2 & 1U) != 0) {
        return false;
      }
      if (iVar6 != iVar5) {
        return false;
      }
      bVar3 = FUN_1412ae090(param_1 + 2,param_2 + 2);
    }
    else {
      bVar3 = *(byte *)(param_2 + 3) & 1;
    }
    if (bVar3 != 0) {
      if ((longlong *)param_1[10] == (longlong *)0x0) {
        if (param_2[10] != 0) {
          return false;
        }
      }
      else {
        if (param_2[10] == 0) {
          return false;
        }
        cVar4 = (**(code **)(*(longlong *)param_1[10] + 0x10))();
        if (cVar4 == '\0') {
          return false;
        }
      }
      if ((longlong *)param_1[0xb] == (longlong *)0x0) {
        if (param_2[0xb] == 0) {
          return true;
        }
      }
      else if (param_2[0xb] != 0) {
        cVar4 = (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
        return cVar4 != '\0';
      }
    }
  }
  return false;
}



// FUNCTION 1425f30d0 FUN_1425f30d0 body=1007 status=ok
// SIG undefined FUN_1425f30d0(void)

void FUN_1425f30d0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined **local_f8;
  short local_f0;
  int local_ec;
  undefined *local_b0;
  undefined *local_a0;
  undefined *local_90;
  undefined **local_88;
  short local_80;
  int local_7c;
  undefined2 local_42;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar2 = 0xfffffff9;
  if (*param_1 < 1) {
    uVar2 = (undefined4)*param_1;
  }
  switch(uVar2) {
  case 0xfffffffa:
    FUN_1424a6cf0(param_2,&DAT_149c4d176,0,3);
    local_b0 = &DAT_149c4d176;
    break;
  case 0xfffffffb:
    FUN_1424a6cf0(param_2,&DAT_149c4d17e,0,3);
    local_a0 = &DAT_149c4d17e;
    break;
  case 0xfffffffc:
    local_88._0_2_ = 0x78;
    uVar3 = FUN_1424a6cf0(param_2,&local_88,0,1);
    local_88._0_2_ = 0x2e;
    if (*(short *)((longlong)param_1 + 0xe) != 0) {
      local_88._0_2_ = *(short *)((longlong)param_1 + 0xe);
    }
    uVar3 = FUN_1424a6cf0(uVar3,&local_88,0,1);
    local_88 = (undefined **)CONCAT62(local_88._2_6_,0x30);
    goto LAB_1425f320e;
  case 0xfffffffd:
    local_88._0_2_ = 0x30;
    goto LAB_1425f31cb;
  case 0xfffffffe:
    local_88._0_2_ = 0x78;
LAB_1425f31cb:
    uVar3 = FUN_1424a6cf0(param_2,&local_88,0,1);
    local_88._0_2_ = 0x2e;
    if (*(short *)((longlong)param_1 + 0xe) != 0) {
      local_88._0_2_ = *(short *)((longlong)param_1 + 0xe);
    }
    uVar3 = FUN_1424a6cf0(uVar3,&local_88,0,1);
    local_88 = (undefined **)CONCAT62(local_88._2_6_,0x78);
LAB_1425f320e:
    FUN_1424a6cf0(uVar3,&local_88,0,1);
    break;
  case 0xffffffff:
    FUN_1424a6cf0(param_2,&DAT_149c4d170,0,2);
    local_90 = &DAT_149c4d170;
    break;
  default:
    FUN_1425f3600(param_2);
    if ((int)param_1[1] == 10) {
LAB_1425f3266:
      if (*param_1 < 1) {
        iVar6 = 0;
      }
      else {
        dVar8 = (double)FUN_1424d9890((double)*param_1);
        dVar9 = (double)FUN_1424d9890((double)(int)param_1[1]);
        iVar6 = (int)(dVar8 / dVar9) + 1;
        lVar4 = FUN_1425f1a40((int)param_1[1],iVar6);
        sVar5 = (short)iVar6;
        if (*param_1 < lVar4) {
          sVar5 = (short)(int)(dVar8 / dVar9);
        }
        iVar6 = (int)sVar5;
      }
    }
    else {
      local_88 = (undefined **)CONCAT62(local_88._2_6_,0x2f);
      iVar6 = 0;
      FUN_1424a6cf0(param_2,&local_88,0,1);
      FUN_1425f3600(param_2,(longlong)(int)param_1[1]);
      if ((int)param_1[1] != 0) goto LAB_1425f3266;
    }
    iVar7 = iVar6 - *(short *)((longlong)param_1 + 0xc);
    if (iVar7 != 0 && *(short *)((longlong)param_1 + 0xc) <= iVar6) {
      do {
        local_88 = (undefined **)CONCAT62(local_88._2_6_,0x3e);
        FUN_1424a6cf0(param_2,&local_88,0,1);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  local_88._0_2_ = 0x3a;
  FUN_1424a6cf0(param_2,&local_88,0,1);
  local_88._0_2_ = 0x20;
  FUN_1424a6cf0(param_2,&local_88,0,1);
  sVar5 = (short)param_1[3];
  if (sVar5 < 0) {
    iVar6 = *(int *)((longlong)param_1 + 0x1c);
  }
  else {
    iVar6 = (int)sVar5 >> 5;
  }
  if (iVar6 != 0) {
    if (((int)sVar5 & 2U) == 0) {
      sVar5 = *(short *)param_1[5];
    }
    else {
      sVar5 = *(short *)((longlong)param_1 + 0x1a);
    }
    if ((sVar5 == 0x20) && ((param_1[10] == 0 || (*(int *)(param_1[10] + 8) != 0)))) {
      local_88 = (undefined **)CONCAT62(local_88._2_6_,0x27);
      FUN_1424a6cf0(param_2,&local_88,0,1);
    }
  }
  local_88 = &PTR_FUN_149e18960;
  local_80 = 2;
  FUN_1424a7600(&local_88,param_1 + 2,0);
  local_f8 = &PTR_FUN_149e18960;
  local_f0 = 2;
  plVar1 = (longlong *)param_1[0xb];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_f8);
    iVar6 = local_ec;
    if (-1 < local_f0) {
      iVar6 = (int)local_f0 >> 5;
    }
    FUN_1424a9610(&local_88,*(undefined4 *)(param_1[0xb] + 8),0,&local_f8,0,iVar6);
  }
  plVar1 = (longlong *)param_1[10];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_f8);
    if (-1 < local_f0) {
      local_ec = (int)local_f0 >> 5;
    }
    FUN_1424a9610(&local_88,*(undefined4 *)(param_1[10] + 8),0,&local_f8,0,local_ec);
  }
  if (-1 < local_80) {
    local_7c = (int)local_80 >> 5;
  }
  FUN_1424a9690(param_2,&local_88,0,local_7c);
  local_42 = 0x3b;
  FUN_1424a6cf0(param_2,&local_42,0,1);
  FUN_140859a90(&local_f8);
  FUN_140859a90(&local_88);
  return;
}



// FUNCTION 1425f34c0 Unwind@1425f34c0 body=55 status=ok
// SIG undefined Unwind@1425f34c0(void)

void Unwind_1425f34c0(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x90) = &DAT_149c4d170;
  return;
}



// FUNCTION 1425f3500 Unwind@1425f3500 body=55 status=ok
// SIG undefined Unwind@1425f3500(void)

void Unwind_1425f3500(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x80) = &DAT_149c4d17e;
  return;
}



// FUNCTION 1425f3540 Unwind@1425f3540 body=55 status=ok
// SIG undefined Unwind@1425f3540(void)

void Unwind_1425f3540(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x70) = &DAT_149c4d176;
  return;
}



// FUNCTION 1425f3580 Unwind@1425f3580 body=54 status=ok
// SIG undefined Unwind@1425f3580(void)

void Unwind_1425f3580(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425f35c0 Unwind@1425f35c0 body=53 status=ok
// SIG undefined Unwind@1425f35c0(void)

void Unwind_1425f35c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xa0);
  return;
}



// FUNCTION 1425f3600 FUN_1425f3600 body=152 status=ok
// SIG undefined FUN_1425f3600(void)

void FUN_1425f3600(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 local_268 [512];
  undefined1 local_68 [8];
  short local_60;
  int local_5c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar1 = FUN_1425f1a90(param_2,local_268,0x200,10,0);
  FUN_1424a7000(local_68,local_268,uVar1);
  if (-1 < local_60) {
    local_5c = (int)local_60 >> 5;
  }
  FUN_1424a9690(param_1,local_68,0,local_5c);
  FUN_140859a90(local_68);
  return;
}



// FUNCTION 1425f36a0 Unwind@1425f36a0 body=42 status=ok
// SIG undefined Unwind@1425f36a0(void)

void Unwind_1425f36a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x230);
  return;
}



// FUNCTION 1425f36d0 FUN_1425f36d0 body=12 status=ok
// SIG undefined FUN_1425f36d0(void)

void FUN_1425f36d0(longlong param_1)

{
  FUN_1425f1a40(*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 0xc));
  return;
}



// FUNCTION 1425f36e0 FUN_1425f36e0 body=745 status=ok
// SIG undefined FUN_1425f36e0(void)

void FUN_1425f36e0(longlong param_1,ulonglong param_2,longlong param_3,int param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  short sVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar14;
  undefined8 uVar13;
  undefined1 local_98 [8];
  short local_90;
  int local_8c;
  int local_54;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(short *)(param_1 + 0x18) < 0) {
    uVar5 = *(uint *)(param_1 + 0x1c);
  }
  else {
    uVar5 = (int)*(short *)(param_1 + 0x18) >> 5;
  }
  lVar1 = param_1 + 0x10;
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  local_50 = param_2;
  if (*(longlong *)(param_1 + 0x68) == 0) {
    iVar7 = 0;
    FUN_1424a9610(param_3,param_4,0,lVar1,0,CONCAT44(uVar14,uVar5));
  }
  else {
    uVar4 = (int)uVar5 >> 0x1f & uVar5;
    uVar13 = CONCAT44(uVar14,uVar5 - uVar4);
    uVar12 = 0;
    uVar5 = FUN_1424a8860(lVar1,&DAT_149c4d186,0,0xffffffff,uVar4,uVar13);
    sVar2 = *(short *)(param_1 + 0x18);
    if ((int)uVar5 < 0) {
      uVar4 = *(uint *)(param_1 + 0x1c);
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x1c);
      uVar12 = (int)sVar2 >> 5;
      if (sVar2 < 0) {
        uVar12 = uVar4;
      }
      if ((int)uVar5 <= (int)uVar12) {
        uVar12 = uVar5;
      }
    }
    uVar6 = (int)sVar2 >> 5;
    if (sVar2 < 0) {
      uVar6 = uVar4;
    }
    uVar13 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),uVar6 - uVar12);
    iVar7 = FUN_1424a8860(lVar1,&DAT_149c4d18c,0,0xffffffff,uVar12,uVar13);
    uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    if (*(short *)(param_3 + 8) < 0) {
      iVar11 = *(int *)(param_3 + 0xc);
    }
    else {
      iVar11 = (int)*(short *)(param_3 + 8) >> 5;
    }
    if (*(short *)(param_1 + 0x18) < 0) {
      iVar10 = *(int *)(param_1 + 0x1c);
    }
    else {
      iVar10 = (int)*(short *)(param_1 + 0x18) >> 5;
    }
    if (iVar7 < iVar10 + -1) {
      FUN_1424a84d0(lVar1,local_98,iVar7 + 2,0x7fffffff);
      iVar7 = local_8c;
      if (-1 < local_90) {
        iVar7 = (int)local_90 >> 5;
      }
      uVar13 = CONCAT44(uVar14,iVar7);
      FUN_1424a9610(param_3,param_4,0,local_98,0,uVar13);
      uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
      FUN_140859a90(local_98);
    }
    uVar13 = *(undefined8 *)(param_1 + 0x68);
    uVar9 = FUN_1425f1a40(*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 0xc));
    if ((uVar9 | local_50) >> 0x20 == 0) {
      uVar8 = (undefined4)((local_50 & 0xffffffff) / (uVar9 & 0xffffffff));
    }
    else {
      uVar8 = (undefined4)(local_50 / uVar9);
    }
    local_54 = iVar11;
    FUN_1425fa9e0(uVar13,local_98,uVar8,param_6);
    iVar7 = local_8c;
    if (-1 < local_90) {
      iVar7 = (int)local_90 >> 5;
    }
    uVar13 = CONCAT44(uVar14,iVar7);
    FUN_1424a9610(param_3,param_4,0,local_98,0,uVar13);
    uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    FUN_140859a90(local_98);
    if (0 < (int)uVar5) {
      FUN_1424a84d0(lVar1,local_98,0,uVar5);
      if (-1 < local_90) {
        local_8c = (int)local_90 >> 5;
      }
      FUN_1424a9610(param_3,param_4,0,local_98,0,CONCAT44(uVar14,local_8c));
      FUN_140859a90(local_98);
    }
    if (*(short *)(param_1 + 0x18) < 0) {
      iVar11 = *(int *)(param_1 + 0x1c);
    }
    else {
      iVar11 = (int)*(short *)(param_1 + 0x18) >> 5;
    }
    if (*(short *)(param_3 + 8) < 0) {
      iVar7 = *(int *)(param_3 + 0xc);
    }
    else {
      iVar7 = (int)*(short *)(param_3 + 8) >> 5;
    }
    iVar7 = (iVar11 + local_54) - iVar7;
  }
  plVar3 = *(longlong **)(param_1 + 0x58);
  if (plVar3 != (longlong *)0x0) {
    iVar11 = 0;
    if ((int)uVar5 < (int)plVar3[1]) {
      iVar11 = iVar7;
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,local_50,param_3,param_4 - iVar11,param_5,param_6);
  }
  plVar3 = *(longlong **)(param_1 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    iVar11 = 0;
    if ((int)uVar5 < (int)plVar3[1]) {
      iVar11 = iVar7;
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,local_50,param_3,param_4 - iVar11,param_5,param_6);
  }
  return;
}



// FUNCTION 1425f39d0 Unwind@1425f39d0 body=55 status=ok
// SIG undefined Unwind@1425f39d0(void)

void Unwind_1425f39d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425f3a10 Unwind@1425f3a10 body=55 status=ok
// SIG undefined Unwind@1425f3a10(void)

void Unwind_1425f3a10(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425f3a50 Unwind@1425f3a50 body=55 status=ok
// SIG undefined Unwind@1425f3a50(void)

void Unwind_1425f3a50(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425f3a90 FUN_1425f3a90 body=816 status=ok
// SIG undefined FUN_1425f3a90(void)

void FUN_1425f3a90(longlong param_1,double param_2,longlong param_3,int param_4,undefined4 param_5,
                  undefined8 param_6)

{
  longlong lVar1;
  short sVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar14;
  undefined1 local_a0 [8];
  short local_98;
  int local_94;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (*(short *)(param_1 + 0x18) < 0) {
    uVar5 = *(uint *)(param_1 + 0x1c);
  }
  else {
    uVar5 = (int)*(short *)(param_1 + 0x18) >> 5;
  }
  lVar1 = param_1 + 0x10;
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  if (*(longlong *)(param_1 + 0x68) == 0) {
    iVar7 = 0;
    FUN_1424a9610(param_3,param_4,0,lVar1,0,CONCAT44(uVar14,uVar5));
  }
  else {
    uVar4 = (int)uVar5 >> 0x1f & uVar5;
    uVar8 = CONCAT44(uVar14,uVar5 - uVar4);
    uVar9 = 0;
    uVar5 = FUN_1424a8860(lVar1,&DAT_149c4d186,0,0xffffffff,uVar4,uVar8);
    sVar2 = *(short *)(param_1 + 0x18);
    if ((int)uVar5 < 0) {
      uVar4 = *(uint *)(param_1 + 0x1c);
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x1c);
      uVar9 = (int)sVar2 >> 5;
      if (sVar2 < 0) {
        uVar9 = uVar4;
      }
      if ((int)uVar5 <= (int)uVar9) {
        uVar9 = uVar5;
      }
    }
    uVar6 = (int)sVar2 >> 5;
    if (sVar2 < 0) {
      uVar6 = uVar4;
    }
    uVar8 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),uVar6 - uVar9);
    iVar7 = FUN_1424a8860(lVar1,&DAT_149c4d18c,0,0xffffffff,uVar9,uVar8);
    uVar14 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (*(short *)(param_3 + 8) < 0) {
      iVar11 = *(int *)(param_3 + 0xc);
    }
    else {
      iVar11 = (int)*(short *)(param_3 + 8) >> 5;
    }
    if (*(short *)(param_1 + 0x18) < 0) {
      iVar10 = *(int *)(param_1 + 0x1c);
    }
    else {
      iVar10 = (int)*(short *)(param_1 + 0x18) >> 5;
    }
    if (iVar7 < iVar10 + -1) {
      FUN_1424a84d0(lVar1,local_a0,iVar7 + 2,0x7fffffff);
      iVar7 = local_94;
      if (-1 < local_98) {
        iVar7 = (int)local_98 >> 5;
      }
      uVar8 = CONCAT44(uVar14,iVar7);
      FUN_1424a9610(param_3,param_4,0,local_a0,0,uVar8);
      uVar14 = (undefined4)((ulonglong)uVar8 >> 0x20);
      FUN_140859a90(local_a0);
    }
    uVar8 = FUN_1425f1a40(*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 0xc));
    auVar13._8_4_ = (int)((ulonglong)uVar8 >> 0x20);
    auVar13._0_8_ = uVar8;
    auVar13._12_4_ = 0x45300000;
    dVar12 = (auVar13._8_8_ - 1.9342813113834067e+25) +
             ((double)CONCAT44(0x43300000,(int)uVar8) - 4503599627370496.0);
    if ((param_2 < 0.0) || (1.0 <= param_2)) {
      param_2 = param_2 / dVar12;
    }
    else {
      param_2 = (double)FUN_1424d97d0(dVar12 * param_2);
    }
    FUN_1425fa9e0(*(undefined8 *)(param_1 + 0x68),local_a0,(int)param_2,param_6);
    iVar7 = local_94;
    if (-1 < local_98) {
      iVar7 = (int)local_98 >> 5;
    }
    uVar8 = CONCAT44(uVar14,iVar7);
    FUN_1424a9610(param_3,param_4,0,local_a0,0,uVar8);
    uVar14 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_140859a90(local_a0);
    if (0 < (int)uVar5) {
      FUN_1424a84d0(lVar1,local_a0,0,uVar5);
      if (-1 < local_98) {
        local_94 = (int)local_98 >> 5;
      }
      FUN_1424a9610(param_3,param_4,0,local_a0,0,CONCAT44(uVar14,local_94));
      FUN_140859a90(local_a0);
    }
    if (*(short *)(param_1 + 0x18) < 0) {
      iVar10 = *(int *)(param_1 + 0x1c);
    }
    else {
      iVar10 = (int)*(short *)(param_1 + 0x18) >> 5;
    }
    if (*(short *)(param_3 + 8) < 0) {
      iVar7 = *(int *)(param_3 + 0xc);
    }
    else {
      iVar7 = (int)*(short *)(param_3 + 8) >> 5;
    }
    iVar7 = (iVar10 + iVar11) - iVar7;
  }
  plVar3 = *(longlong **)(param_1 + 0x58);
  if (plVar3 != (longlong *)0x0) {
    iVar11 = 0;
    if ((int)uVar5 < (int)plVar3[1]) {
      iVar11 = iVar7;
    }
    (**(code **)(*plVar3 + 0x28))(plVar3,param_6,param_3,param_4 - iVar11,param_5,param_6);
  }
  plVar3 = *(longlong **)(param_1 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    iVar11 = 0;
    if ((int)uVar5 < (int)plVar3[1]) {
      iVar11 = iVar7;
    }
    (**(code **)(*plVar3 + 0x28))(plVar3,param_6,param_3,param_4 - iVar11,param_5,param_6);
  }
  return;
}



// FUNCTION 1425f3dc0 Unwind@1425f3dc0 body=65 status=ok
// SIG undefined Unwind@1425f3dc0(void)

void Unwind_1425f3dc0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1425f3e10 Unwind@1425f3e10 body=65 status=ok
// SIG undefined Unwind@1425f3e10(void)

void Unwind_1425f3e10(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1425f3e60 Unwind@1425f3e60 body=65 status=ok
// SIG undefined Unwind@1425f3e60(void)

void Unwind_1425f3e60(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1425f3eb0 FUN_1425f3eb0 body=144 status=ok
// SIG undefined FUN_1425f3eb0(void)

undefined8 FUN_1425f3eb0(ulonglong *param_1,ulonglong param_2)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((((longlong *)param_1[10] != (longlong *)0x0) &&
      (cVar1 = (**(code **)(*(longlong *)param_1[10] + 0x68))(), cVar1 != '\0')) ||
     (((longlong *)param_1[0xb] != (longlong *)0x0 &&
      (cVar1 = (**(code **)(*(longlong *)param_1[0xb] + 0x68))(), cVar1 != '\0')))) {
    uVar2 = FUN_1425f1a40((int)param_1[1]);
    if ((param_2 | uVar2) >> 0x20 == 0) {
      param_2 = (param_2 & 0xffffffff) % (uVar2 & 0xffffffff);
    }
    else {
      param_2 = (longlong)param_2 % (longlong)uVar2;
    }
    if (param_2 == 0) {
      uVar4 = *param_1;
      if ((uVar2 | uVar4) >> 0x20 == 0) {
        uVar3 = (uVar4 & 0xffffffff) / (uVar2 & 0xffffffff);
        uVar4 = (uVar4 & 0xffffffff) % (uVar2 & 0xffffffff);
      }
      else {
        uVar3 = (longlong)uVar4 / (longlong)uVar2;
        uVar4 = (longlong)uVar4 % (longlong)uVar2;
      }
      return CONCAT71((int7)(uVar3 >> 8),uVar4 != 0);
    }
  }
  return 0;
}



// FUNCTION 1425f3f40 FUN_1425f3f40 body=1524 status=ok
// SIG undefined FUN_1425f3f40(void)

undefined8
FUN_1425f3f40(ulonglong *param_1,longlong param_2,longlong param_3,char param_4,undefined8 param_5,
             undefined4 param_6,undefined8 param_7)

{
  ushort uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 in_stack_fffffffffffffe08;
  uint uVar18;
  undefined ***pppuVar16;
  undefined4 uVar19;
  undefined8 uVar17;
  undefined8 in_stack_fffffffffffffe10;
  undefined ***pppuVar20;
  undefined4 uVar22;
  undefined8 uVar21;
  undefined **local_1d0;
  short local_1c8;
  int local_1c4;
  undefined **local_190;
  short local_188;
  int local_184;
  undefined **local_150;
  short local_148;
  int local_144;
  undefined1 local_110 [8];
  ushort local_108;
  int local_104;
  undefined **local_d0;
  undefined8 local_c8;
  int local_c0;
  int local_bc;
  ulonglong *local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  longlong local_a0;
  int local_98;
  char local_91;
  undefined8 local_90;
  
  uVar18 = (uint)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffe10 >> 0x20);
  local_90 = 0xfffffffffffffffe;
  local_b0 = icu_64::ParsePosition::vftable;
  local_a8 = 0xffffffff00000000;
  local_a0 = param_3;
  FUN_1424a6be0(local_110);
  if (param_1[10] == 0) {
    if ((short)param_1[3] < 0) {
      iVar9 = *(int *)((longlong)param_1 + 0x1c);
    }
    else {
      iVar9 = (int)(short)param_1[3] >> 5;
    }
  }
  else {
    iVar9 = *(int *)(param_1[10] + 8);
  }
  if (param_1[0xb] == 0) {
    if ((short)param_1[3] < 0) {
      iVar8 = *(int *)((longlong)param_1 + 0x1c);
    }
    else {
      iVar8 = (int)(short)param_1[3] >> 5;
    }
  }
  else {
    iVar8 = *(int *)(param_1[0xb] + 8);
  }
  local_190 = &PTR_FUN_149e18960;
  local_188 = 2;
  FUN_1424a8e40(&local_190);
  local_b8 = param_1 + 2;
  iVar4 = local_184;
  if (-1 < local_188) {
    iVar4 = (int)local_188 >> 5;
  }
  pppuVar20 = (undefined ***)CONCAT44(uVar14,iVar9);
  pppuVar16 = (undefined ***)((ulonglong)uVar18 << 0x20);
  FUN_1424a9610(&local_190,0,iVar4,local_b8,pppuVar16,pppuVar20);
  if (local_188 < 0) {
    if (local_184 == 0) {
LAB_1425f40d7:
      iVar4 = 0;
      goto LAB_1425f4102;
    }
  }
  else if (local_188 >> 5 == 0) goto LAB_1425f40d7;
  local_150 = (undefined **)((ulonglong)local_150 & 0xffffffff00000000);
  iVar3 = FUN_1425f4cc0(param_1,local_110,&local_190,&local_150);
  iVar4 = 0;
  if ((iVar3 != 0) && ((int)local_150 < 1)) {
    local_a8 = CONCAT44(local_a8._4_4_,iVar3);
    if (iVar3 == 0x7fffffff) {
      uVar5 = local_108 & 0x1f;
      uVar1 = local_108 & 1;
      local_108 = 2;
      if (uVar1 == 0) {
        local_108 = uVar5;
      }
      iVar4 = 0x7fffffff;
    }
    else {
      pppuVar20 = (undefined ***)((ulonglong)pppuVar20 & 0xffffffff00000000);
      pppuVar16 = (undefined ***)((ulonglong)pppuVar16 & 0xffffffff00000000);
      FUN_1424a9130(local_110,0,iVar3,0,pppuVar16,pppuVar20);
      iVar4 = iVar3;
    }
  }
LAB_1425f4102:
  if (*(short *)(param_2 + 8) < 0) {
    iVar3 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar3 = (int)*(short *)(param_2 + 8) >> 5;
  }
  iVar6 = local_104;
  if (-1 < (short)local_108) {
    iVar6 = (int)(short)local_108 >> 5;
  }
  if ((iVar9 == 0) || (iVar4 != 0)) {
    uVar7 = *param_1;
    if (uVar7 == 0xfffffffffffffffa) {
      *(int *)(local_a0 + 8) = iVar4;
      uVar12 = FUN_1424d9790();
      FUN_14252d340(param_7,uVar12);
    }
    else if (uVar7 == 0xfffffffffffffffb) {
      *(int *)(local_a0 + 8) = iVar4;
      uVar12 = FUN_1424d97a0();
      FUN_14252d340(param_7,uVar12);
    }
    else {
      local_bc = iVar3 - iVar6;
      uVar11 = 0;
      if ((longlong)uVar7 < 1) {
        uVar7 = uVar11;
      }
      local_150 = &PTR_FUN_149e18960;
      local_148 = 2;
      local_c0 = iVar8 - iVar9;
      uVar14 = 0;
      uVar15 = 0;
      local_98 = 0;
      lVar10 = local_a0;
      local_91 = param_4;
      while( true ) {
        uVar19 = (undefined4)((ulonglong)pppuVar16 >> 0x20);
        uVar22 = (undefined4)((ulonglong)pppuVar20 >> 0x20);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1424a8e40(&local_150);
        iVar4 = local_144;
        if (-1 < local_148) {
          iVar4 = (int)local_148 >> 5;
        }
        FUN_1424a9610(&local_150,0,iVar4,local_b8,CONCAT44(uVar19,iVar9),CONCAT44(uVar22,local_c0));
        pppuVar20 = &local_b0;
        pppuVar16 = &local_150;
        uVar12 = FUN_1425f47c0(param_1,local_110,uVar11,(double)(longlong)uVar7,&local_150,pppuVar20
                               ,param_1[10],param_6,param_5);
        uVar2 = local_a8;
        iVar4 = local_104;
        uVar1 = local_108;
        uVar19 = (undefined4)((ulonglong)pppuVar16 >> 0x20);
        uVar22 = (undefined4)((ulonglong)pppuVar20 >> 0x20);
        iVar3 = (int)local_a8;
        if (((int)local_a8 == 0) && (param_1[10] != 0)) {
          if (*(int *)(lVar10 + 0xc) < local_a8._4_4_ + iVar9) {
            *(int *)(lVar10 + 0xc) = local_a8._4_4_ + iVar9;
          }
        }
        else {
          local_1d0 = &PTR_FUN_149e18960;
          local_1c8 = 2;
          FUN_1424a8e40(&local_1d0);
          iVar6 = (int)(short)uVar1 >> 5;
          if ((short)uVar1 < 0) {
            iVar6 = iVar4;
          }
          iVar4 = local_1c4;
          if (-1 < local_1c8) {
            iVar4 = (int)local_1c8 >> 5;
          }
          uVar21 = CONCAT44(uVar22,iVar6 - iVar3);
          uVar17 = CONCAT44(uVar19,iVar3);
          FUN_1424a9610(&local_1d0,0,iVar4,local_110,uVar17,uVar21);
          uVar19 = (undefined4)((ulonglong)uVar17 >> 0x20);
          uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
          local_d0 = icu_64::ParsePosition::vftable;
          local_c8 = 0xffffffff00000000;
          uVar11 = param_1[3];
          iVar4 = *(int *)((longlong)param_1 + 0x1c);
          FUN_1424a8e40(&local_150);
          iVar6 = (int)(short)uVar11 >> 5;
          if ((short)uVar11 < 0) {
            iVar6 = iVar4;
          }
          iVar4 = local_144;
          if (-1 < local_148) {
            iVar4 = (int)local_148 >> 5;
          }
          FUN_1424a9610(&local_150,0,iVar4,local_b8,CONCAT44(uVar19,iVar8),
                        CONCAT44(uVar22,iVar6 - iVar8));
          pppuVar20 = &local_d0;
          pppuVar16 = &local_150;
          uVar12 = FUN_1425f47c0(param_1,&local_1d0,0,uVar12,&local_150,pppuVar20,param_1[0xb],
                                 param_6,param_5);
          lVar10 = local_a0;
          if (((int)local_c8 == 0) && (param_1[0xb] != 0)) {
            iVar4 = local_c8._4_4_ + iVar9 + iVar3;
            if (*(int *)(local_a0 + 0xc) < iVar4) {
              *(int *)(local_a0 + 0xc) = iVar4;
            }
          }
          else {
            iVar4 = (int)local_c8 + local_bc + iVar3;
            if (local_98 < iVar4) {
              uVar14 = (undefined4)uVar12;
              uVar15 = (undefined4)((ulonglong)uVar12 >> 0x20);
              local_98 = iVar4;
            }
          }
          thunk_FUN_1424b70d0(&local_d0);
          FUN_140859a90(&local_1d0);
          uVar11 = uVar2 & 0xffffffff;
        }
        if ((iVar8 == iVar9) || (iVar3 < 1)) break;
        iVar4 = local_104;
        if (-1 < (short)local_108) {
          iVar4 = (int)(short)local_108 >> 5;
        }
        if ((iVar4 <= iVar3) || (iVar3 == (int)uVar11)) break;
      }
      *(int *)(lVar10 + 8) = local_98;
      if (0 < local_98) {
        *(undefined4 *)(lVar10 + 0xc) = 0;
      }
      if (param_1[10] == 0) {
        dVar13 = 1.0 / (double)CONCAT44(uVar15,uVar14);
      }
      else {
        dVar13 = (double)CONCAT44(uVar15,uVar14);
      }
      if (local_98 < 1) {
        dVar13 = (double)CONCAT44(uVar15,uVar14);
      }
      if (local_91 == '\0') {
        dVar13 = (double)CONCAT44(uVar15,uVar14);
      }
      FUN_14252d340(param_7,dVar13);
      FUN_140859a90(&local_150);
    }
  }
  else {
    *(undefined4 *)(local_a0 + 0xc) = 0xffffffff;
    FUN_14252d370(param_7,0);
  }
  FUN_140859a90(&local_190);
  FUN_140859a90(local_110);
  thunk_FUN_1424b70d0(&local_b0);
  return 1;
}



// FUNCTION 1425f4570 Unwind@1425f4570 body=113 status=ok
// SIG undefined Unwind@1425f4570(void)

void Unwind_1425f4570(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x148);
  return;
}



// FUNCTION 1425f45f0 Unwind@1425f45f0 body=107 status=ok
// SIG undefined Unwind@1425f45f0(void)

void Unwind_1425f45f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x48);
  return;
}



// FUNCTION 1425f4660 Unwind@1425f4660 body=110 status=ok
// SIG undefined Unwind@1425f4660(void)

void Unwind_1425f4660(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 200);
  return;
}



// FUNCTION 1425f46d0 Unwind@1425f46d0 body=122 status=ok
// SIG undefined Unwind@1425f46d0(void)

void Unwind_1425f46d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x88);
  FUN_140859a90(param_2 + 0x108);
  return;
}



// FUNCTION 1425f4750 Unwind@1425f4750 body=110 status=ok
// SIG undefined Unwind@1425f4750(void)

void Unwind_1425f4750(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x168);
  return;
}



// FUNCTION 1425f47c0 FUN_1425f47c0 body=782 status=ok
// SIG undefined FUN_1425f47c0(void)

undefined8
FUN_1425f47c0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6,longlong *param_7,undefined4 param_8,
             undefined8 param_9)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined ***pppuVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined1 local_148 [112];
  undefined **local_d8;
  undefined8 local_d0;
  undefined **local_98;
  undefined8 local_90;
  int local_88;
  int local_84 [17];
  
  uVar8 = (undefined4)((ulonglong)param_4 >> 0x20);
  uVar6 = (undefined4)param_4;
  local_84[1] = -2;
  local_84[2] = -1;
  local_88 = 0;
  cVar1 = FUN_1425f4f70(param_1,param_5,&local_88);
  if (cVar1 == '\0') {
    uVar8 = 0;
    uVar7 = 0;
    if (0 < local_88) goto LAB_1425f4aae;
    local_98 = icu_64::ParsePosition::vftable;
    local_90 = 0xffffffff00000000;
    FUN_14252c810(local_148);
    piVar9 = local_84;
    iVar3 = FUN_1425f5080(param_1,param_2,param_5,param_3,piVar9);
    if (-1 < iVar3) {
      do {
        local_d8 = &PTR_FUN_149e18960;
        local_d0 = CONCAT62(local_d0._2_6_,2);
        FUN_1424a8e40(&local_d8);
        if ((short)local_d0 < 0) {
          iVar5 = local_d0._4_4_;
        }
        else {
          iVar5 = (int)(short)local_d0 >> 5;
        }
        FUN_1424a9610(&local_d8,0,iVar5,param_2,(ulonglong)piVar9 & 0xffffffff00000000,iVar3);
        if ((short)local_d0 < 0) {
          if (0 < local_d0._4_4_) {
LAB_1425f49a7:
            uVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0xc0))();
            cVar1 = (**(code **)(*param_7 + 0x48))
                              (param_7,&local_d8,&local_98,uVar6,param_9,uVar2,param_8,local_148);
            if ((cVar1 != '\0') && ((int)local_90 == iVar3)) {
              *(int *)(param_6 + 8) = iVar3 + local_84[0];
              uVar7 = (undefined4)local_148._8_8_;
              uVar8 = SUB84(local_148._8_8_,4);
              FUN_140859a90(&local_d8);
              goto LAB_1425f4a9c;
            }
            iVar5 = (int)local_90;
            if (0 < local_90._4_4_) {
              iVar5 = local_90._4_4_;
            }
            *(int *)(param_6 + 0xc) = iVar5;
          }
        }
        else if (0 < (short)local_d0 >> 5) goto LAB_1425f49a7;
        local_90 = local_90 & 0xffffffff00000000;
        piVar9 = local_84;
        iVar3 = FUN_1425f5080(param_1,param_2,param_5,iVar3 + local_84[0],piVar9);
        FUN_140859a90(&local_d8);
      } while (-1 < iVar3);
    }
    *(undefined4 *)(param_6 + 8) = 0;
    uVar7 = 0;
    uVar8 = 0;
LAB_1425f4a9c:
    FUN_14252d110(local_148);
    pppuVar4 = &local_98;
  }
  else {
    uVar7 = uVar6;
    if (param_7 == (longlong *)0x0) goto LAB_1425f4aae;
    local_d8 = icu_64::ParsePosition::vftable;
    local_d0 = 0xffffffff00000000;
    FUN_14252c810(local_148);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0xc0))();
    cVar1 = (**(code **)(*param_7 + 0x48))
                      (param_7,param_2,&local_d8,uVar6,param_9,uVar2,param_8,local_148);
    if ((cVar1 == '\0') || ((int)local_d0 == 0)) {
      *(int *)(param_6 + 0xc) = local_d0._4_4_;
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      *(int *)(param_6 + 8) = (int)local_d0;
      uVar7 = (undefined4)local_148._8_8_;
      uVar8 = SUB84(local_148._8_8_,4);
    }
    FUN_14252d110(local_148);
    pppuVar4 = &local_d8;
  }
  thunk_FUN_1424b70d0(pppuVar4);
LAB_1425f4aae:
  return CONCAT44(uVar8,uVar7);
}



// FUNCTION 1425f4ae0 Unwind@1425f4ae0 body=86 status=ok
// SIG undefined Unwind@1425f4ae0(void)

void Unwind_1425f4ae0(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(param_2 + 0x40);
  return;
}



// FUNCTION 1425f4b40 Unwind@1425f4b40 body=86 status=ok
// SIG undefined Unwind@1425f4b40(void)

void Unwind_1425f4b40(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0xf0);
  return;
}



// FUNCTION 1425f4ba0 Unwind@1425f4ba0 body=86 status=ok
// SIG undefined Unwind@1425f4ba0(void)

void Unwind_1425f4ba0(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(param_2 + 0x40);
  return;
}



// FUNCTION 1425f4c00 Unwind@1425f4c00 body=86 status=ok
// SIG undefined Unwind@1425f4c00(void)

void Unwind_1425f4c00(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0xb0);
  return;
}



// FUNCTION 1425f4c60 Unwind@1425f4c60 body=86 status=ok
// SIG undefined Unwind@1425f4c60(void)

void Unwind_1425f4c60(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb0);
  return;
}



// FUNCTION 1425f4cc0 FUN_1425f4cc0 body=577 status=ok
// SIG undefined FUN_1425f4cc0(void)

int FUN_1425f4cc0(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*(short *)(param_3 + 8) < 0) {
    iVar3 = *(int *)(param_3 + 0xc);
  }
  else {
    iVar3 = (int)*(short *)(param_3 + 8) >> 5;
  }
  iVar6 = 0;
  if (iVar3 != 0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0xc0))();
    if (cVar2 == '\0') {
      uVar1 = *(ushort *)(param_3 + 8);
      if ((uVar1 & 1) == 0) {
        if ((short)uVar1 < 0) {
          uVar4 = *(uint *)(param_3 + 0xc);
        }
        else {
          uVar4 = (int)(short)uVar1 >> 5;
        }
        uVar5 = 0;
        if (0 < (int)uVar4) {
          uVar5 = uVar4;
        }
        if ((uVar1 & 2) == 0) {
          lVar8 = *(longlong *)(param_3 + 0x18);
        }
        else {
          lVar8 = param_3 + 10;
        }
        cVar2 = FUN_1424a7e30(param_2,0,uVar4,lVar8,(int)uVar4 >> 0x1f & uVar4,uVar5);
        if (cVar2 != '\0') {
          return 0;
        }
      }
      else if ((*(byte *)(param_2 + 8) & 1) == 0) {
        return 0;
      }
      if (*(short *)(param_3 + 8) < 0) {
        iVar6 = *(int *)(param_3 + 0xc);
      }
      else {
        iVar6 = (int)*(short *)(param_3 + 8) >> 5;
      }
    }
    else {
      plVar7 = (longlong *)FUN_142548a40(*(undefined8 *)(param_1 + 0x60));
      if (plVar7 == (longlong *)0x0) {
        *param_4 = 7;
        iVar6 = 0;
      }
      else {
        lVar8 = (**(code **)(*plVar7 + 0x138))(plVar7,param_2);
        lVar9 = (**(code **)(*plVar7 + 0x138))(plVar7,param_3);
        if ((lVar9 == 0) || (lVar8 == 0)) {
          *param_4 = 7;
LAB_1425f4e4c:
          iVar6 = 0;
        }
        else {
          local_44 = 0;
          uVar4 = FUN_14261fc70(lVar8,&local_44);
          uVar5 = FUN_14261fc70(lVar9,&local_44);
          while (uVar5 != 0xffffffff) {
            while (uVar4 < 0x10000) {
              uVar4 = FUN_14261fc70(lVar8,&local_44);
            }
            while (uVar5 < 0x10000) {
              uVar5 = FUN_14261fc70(lVar9,&local_44);
            }
            if (uVar5 == 0xffffffff) break;
            if ((uVar4 == 0xffffffff) || (0xffff < (uVar5 ^ uVar4))) goto LAB_1425f4e4c;
            uVar4 = FUN_14261fc70(lVar8,&local_44);
            uVar5 = FUN_14261fc70(lVar9,&local_44);
          }
          iVar6 = FUN_14261fc20(lVar8);
          iVar6 = iVar6 - (uint)(uVar4 != 0xffffffff);
        }
        if (lVar9 != 0) {
          FUN_14261fbd0(lVar9);
          FUN_1401773f0(lVar9);
        }
        if (lVar8 != 0) {
          FUN_14261fbd0(lVar8);
          FUN_1401773f0(lVar8);
        }
      }
    }
  }
  return iVar6;
}



// FUNCTION 1425f4f10 Unwind@1425f4f10 body=48 status=ok
// SIG undefined Unwind@1425f4f10(void)

void Unwind_1425f4f10(undefined8 param_1,longlong param_2)

{
  FUN_1425f54f0(param_2 + 0x30);
  return;
}



// FUNCTION 1425f4f40 Unwind@1425f4f40 body=48 status=ok
// SIG undefined Unwind@1425f4f40(void)

void Unwind_1425f4f40(undefined8 param_1,longlong param_2)

{
  FUN_1425f54f0(param_2 + 0x38);
  return;
}



// FUNCTION 1425f4f70 FUN_1425f4f70 body=209 status=ok
// SIG undefined FUN_1425f4f70(void)

ulonglong FUN_1425f4f70(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(short *)(param_2 + 8) < 0) {
    if (*(int *)(param_2 + 0xc) == 0) {
LAB_1425f500b:
      uVar5 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      goto LAB_1425f5018;
    }
  }
  else if (*(short *)(param_2 + 8) >> 5 == 0) goto LAB_1425f500b;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0xc0))();
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_142548a40(*(undefined8 *)(param_1 + 0x60));
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x138))(plVar3,param_2);
      if (lVar4 != 0) {
        local_2c = 0;
        uVar2 = FUN_14261fc70(lVar4,&local_2c);
        while (uVar2 < 0x10000) {
          uVar2 = FUN_14261fc70(lVar4,&local_2c);
        }
        uVar5 = CONCAT71((int7)((ulonglong)&local_2c >> 8),uVar2 == 0xffffffff);
        if (lVar4 != 0) {
          FUN_14261fbd0(lVar4);
          FUN_1401773f0(lVar4);
        }
        goto LAB_1425f5018;
      }
    }
    *param_3 = 7;
  }
  uVar5 = 0;
LAB_1425f5018:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1425f5050 Unwind@1425f5050 body=36 status=ok
// SIG undefined Unwind@1425f5050(void)

void Unwind_1425f5050(undefined8 param_1,longlong param_2)

{
  FUN_1425f54f0(param_2 + 0x20);
  return;
}



// FUNCTION 1425f5080 FUN_1425f5080 body=927 status=ok
// SIG undefined FUN_1425f5080(void)

ulonglong FUN_1425f5080(longlong param_1,longlong param_2,longlong param_3,uint param_4,int *param_5
                       )

{
  longlong lVar1;
  short sVar2;
  ushort uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 in_stack_fffffffffffffe98;
  undefined4 uVar16;
  undefined ***pppuVar14;
  undefined8 uVar15;
  undefined1 local_150 [112];
  undefined1 local_e0 [8];
  ushort local_d8;
  undefined1 local_d6 [2];
  uint local_d4;
  undefined1 *local_c8;
  undefined1 local_a0 [8];
  ushort local_98;
  undefined1 local_96 [2];
  uint local_94;
  undefined1 *local_88;
  undefined **local_60;
  undefined4 local_58;
  uint local_54;
  int local_50;
  undefined8 local_48;
  
  uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  local_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x68) == 0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0xc0))();
    if (cVar5 != '\0') {
      uVar10 = FUN_1425f5520(param_1,param_2,param_3,param_4);
      return uVar10;
    }
    if (*(short *)(param_3 + 8) < 0) {
      iVar7 = *(int *)(param_3 + 0xc);
    }
    else {
      iVar7 = (int)*(short *)(param_3 + 8) >> 5;
    }
    *param_5 = iVar7;
    sVar2 = *(short *)(param_2 + 8);
    if ((int)param_4 < 0) {
      uVar13 = *(uint *)(param_2 + 0xc);
      uVar11 = (int)sVar2 >> 5;
      uVar6 = 0;
    }
    else {
      uVar11 = (int)sVar2 >> 5;
      uVar13 = *(uint *)(param_2 + 0xc);
      uVar6 = uVar11;
      if (sVar2 < 0) {
        uVar6 = uVar13;
      }
      if ((int)param_4 <= (int)uVar6) {
        uVar6 = param_4;
      }
    }
    if (sVar2 < 0) {
      uVar11 = uVar13;
    }
    uVar3 = *(ushort *)(param_3 + 8);
    uVar13 = 0xffffffff;
    if ((uVar3 & 1) == 0) {
      if ((short)uVar3 < 0) {
        iVar7 = *(int *)(param_3 + 0xc);
      }
      else {
        iVar7 = (int)(short)uVar3 >> 5;
      }
      if (0 < iVar7) {
        if ((uVar3 & 2) == 0) {
          param_3 = *(longlong *)(param_3 + 0x18);
        }
        else {
          param_3 = param_3 + 10;
        }
        uVar10 = FUN_1424a8860(param_2,param_3,0,iVar7,CONCAT44(uVar16,uVar6),uVar11 - uVar6);
        return uVar10;
      }
    }
    goto LAB_1425f53ec;
  }
  FUN_14252c810(local_150);
  local_60 = icu_64::FieldPosition::vftable;
  local_58 = 0;
  local_50 = 0;
  pppuVar14 = &local_60;
  local_54 = param_4;
  FUN_1425fb150(*(undefined8 *)(param_1 + 0x68),param_2,param_1,local_150,pppuVar14);
  uVar13 = local_54;
  if ((int)local_54 < 0) {
LAB_1425f53ca:
    *param_5 = 0;
    uVar13 = 0xffffffff;
  }
  else {
    lVar1 = param_1 + 0x10;
    if (*(short *)(param_1 + 0x18) < 0) {
      uVar6 = *(uint *)(param_1 + 0x1c);
    }
    else {
      uVar6 = (int)*(short *)(param_1 + 0x18) >> 5;
    }
    uVar11 = (int)uVar6 >> 0x1f & uVar6;
    uVar15 = CONCAT44((int)((ulonglong)pppuVar14 >> 0x20),uVar11);
    iVar7 = FUN_1424a8860(lVar1,&DAT_149c4d186,0,0xffffffff,uVar15,uVar6 - uVar11);
    sVar2 = *(short *)(param_1 + 0x18);
    if (iVar7 < 0) {
      iVar12 = *(int *)(param_1 + 0x1c);
      iVar9 = 0;
    }
    else {
      iVar12 = *(int *)(param_1 + 0x1c);
      iVar9 = (int)sVar2 >> 5;
      if (sVar2 < 0) {
        iVar9 = iVar12;
      }
      if (iVar7 <= iVar9) {
        iVar9 = iVar7;
      }
    }
    iVar8 = (int)sVar2 >> 5;
    if (sVar2 < 0) {
      iVar8 = iVar12;
    }
    uVar15 = CONCAT44((int)((ulonglong)uVar15 >> 0x20),iVar9);
    iVar9 = FUN_1424a8860(lVar1,&DAT_149c4d18c,0,0xffffffff,uVar15,iVar8 - iVar9);
    iVar12 = local_50;
    uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
    FUN_1424a84d0(lVar1,local_e0,0,iVar7);
    FUN_1424a84d0(lVar1,local_a0,iVar9 + 2,0x7fffffff);
    if ((local_d8 & 1) == 0) {
      uVar6 = local_d4;
      if (-1 < (short)local_d8) {
        uVar6 = (int)(short)local_d8 >> 5;
      }
      uVar11 = 0;
      if (0 < (int)uVar6) {
        uVar11 = uVar6;
      }
      if ((local_d8 & 2) != 0) {
        local_c8 = local_d6;
      }
      uVar15 = CONCAT44(uVar16,(int)uVar6 >> 0x1f & uVar6);
      cVar5 = FUN_1424a7e30(param_2,uVar13 - uVar6,uVar6,local_c8,uVar15,uVar11);
      uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
    }
    else {
      cVar5 = (*(byte *)(param_2 + 8) & 1) == 0;
    }
    bVar4 = true;
    if (cVar5 == '\0') {
      if ((local_98 & 1) == 0) {
        uVar6 = local_94;
        if (-1 < (short)local_98) {
          uVar6 = (int)(short)local_98 >> 5;
        }
        uVar11 = 0;
        if (0 < (int)uVar6) {
          uVar11 = uVar6;
        }
        if ((local_98 & 2) != 0) {
          local_88 = local_96;
        }
        cVar5 = FUN_1424a7e30(param_2,iVar12,uVar6,local_88,
                              CONCAT44(uVar16,(int)uVar6 >> 0x1f & uVar6),uVar11);
      }
      else {
        cVar5 = (*(byte *)(param_2 + 8) & 1) == 0;
      }
      if (cVar5 == '\0') {
        if (-1 < (short)local_d8) {
          local_d4 = (int)(short)local_d8 >> 5;
        }
        if (-1 < (short)local_98) {
          local_94 = (int)(short)local_98 >> 5;
        }
        *param_5 = (iVar12 - uVar13) + local_d4 + local_94;
        uVar13 = uVar13 - local_d4;
        bVar4 = false;
      }
    }
    FUN_140859a90(local_a0);
    FUN_140859a90(local_e0);
    if (bVar4) goto LAB_1425f53ca;
  }
  thunk_FUN_1424b70d0(&local_60);
  FUN_14252d110(local_150);
LAB_1425f53ec:
  return (ulonglong)uVar13;
}



// FUNCTION 1425f5420 Unwind@1425f5420 body=55 status=ok
// SIG undefined Unwind@1425f5420(void)

void Unwind_1425f5420(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xe8);
  return;
}



// FUNCTION 1425f5460 Unwind@1425f5460 body=55 status=ok
// SIG undefined Unwind@1425f5460(void)

void Unwind_1425f5460(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xa8);
  return;
}



// FUNCTION 1425f54a0 Unwind@1425f54a0 body=67 status=ok
// SIG undefined Unwind@1425f54a0(void)

void Unwind_1425f54a0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x128);
  FUN_14252d110(param_2 + 0x38);
  return;
}



// FUNCTION 1425f54f0 FUN_1425f54f0 body=41 status=ok
// SIG undefined FUN_1425f54f0(void)

void FUN_1425f54f0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_14261fbd0(lVar1);
    FUN_1401773f0(lVar1);
    return;
  }
  return;
}



// FUNCTION 1425f5520 FUN_1425f5520 body=276 status=ok
// SIG undefined FUN_1425f5520(void)

int FUN_1425f5520(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined **local_90;
  short local_88;
  int local_84;
  int local_4c [3];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  local_90 = &PTR_FUN_149e18960;
  local_88 = 2;
  local_4c[0] = 0;
  if (*(short *)(param_2 + 8) < 0) {
    iVar2 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar2 = (int)*(short *)(param_2 + 8) >> 5;
  }
  if (param_4 < iVar2) {
    iVar3 = -param_4;
    do {
      FUN_1424a8e40(&local_90);
      iVar1 = local_84;
      if (-1 < local_88) {
        iVar1 = (int)local_88 >> 5;
      }
      FUN_1424a9610(&local_90,0,iVar1,param_2,param_4,iVar2 + iVar3);
      iVar2 = FUN_1425f4cc0(param_1,&local_90,param_3,local_4c);
      if (0 < local_4c[0]) break;
      if (iVar2 != 0) goto LAB_1425f5621;
      if (*(short *)(param_2 + 8) < 0) {
        iVar2 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar2 = (int)*(short *)(param_2 + 8) >> 5;
      }
      param_4 = param_4 + 1;
      iVar3 = iVar3 + -1;
    } while (param_4 < iVar2);
  }
  iVar2 = 0;
  param_4 = -1;
LAB_1425f5621:
  *param_5 = iVar2;
  FUN_140859a90(&local_90);
  return param_4;
}



// FUNCTION 1425f5650 Unwind@1425f5650 body=55 status=ok
// SIG undefined Unwind@1425f5650(void)

void Unwind_1425f5650(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1425f5690 FUN_1425f5690 body=72 status=ok
// SIG undefined FUN_1425f5690(void)

void FUN_1425f5690(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1426b5a10(*(longlong *)(param_1 + 0x50),param_2,param_3);
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1426b5a10(*(longlong *)(param_1 + 0x58),param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1425f56e0 FUN_1425f56e0 body=181 status=ok
// SIG undefined FUN_1425f56e0(void)

undefined8
FUN_1425f56e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_3c;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_38 = (undefined8 *)0x0;
  local_3c = 0;
  lVar2 = FUN_1426b7b80(param_3,&DAT_149e02088,param_4,param_2,&local_38,&local_3c);
  if (lVar2 == 0) {
    FUN_1424a7130(param_1);
  }
  else {
    uVar3 = FUN_1424a5500(param_3);
    uVar1 = FUN_1424da220(uVar3);
    FUN_14257ea70(param_1,uVar1,param_4,lVar2,FUN_14257c4a0);
  }
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  return param_1;
}



// FUNCTION 1425f57a0 Unwind@1425f57a0 body=50 status=ok
// SIG undefined Unwind@1425f57a0(void)

void Unwind_1425f57a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 1425f57e0 FUN_1425f57e0 body=8 status=ok
// SIG undefined FUN_1425f57e0(void)

void FUN_1425f57e0(void)

{
  FUN_1425f56e0();
  return;
}



// FUNCTION 1425f57f0 FUN_1425f57f0 body=167 status=ok
// SIG undefined FUN_1425f57f0(void)

undefined8 * FUN_1425f57f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_1424bf170();
  *param_1 = icu_64::RuleBasedCollator::vftable;
  puVar1 = param_1 + 5;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1412ae150(puVar1,&DAT_149e02088,0,0,0);
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
  FUN_1425f5900(param_1,param_2,0xffffffff,0xffffffff,0,0,param_3,puVar1,param_1,uVar2);
  return param_1;
}



// FUNCTION 1425f58a0 Unwind@1425f58a0 body=45 status=ok
// SIG undefined Unwind@1425f58a0(void)

void Unwind_1425f58a0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1425f58d0 Unwind@1425f58d0 body=45 status=ok
// SIG undefined Unwind@1425f58d0(void)

void Unwind_1425f58d0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 1425f5900 FUN_1425f5900 body=537 status=ok
// SIG undefined FUN_1425f5900(void)

void FUN_1425f5900(longlong *param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
                  longlong param_6,int *param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined **local_308 [9];
  undefined8 *local_2c0;
  undefined1 local_2b0 [200];
  longlong local_1e8;
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [68];
  undefined4 local_5c;
  undefined **local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar1 = FUN_142563830(param_7);
  if (*param_7 < 1) {
    if (param_6 != 0) {
      uVar3 = 2;
      if ((*(ushort *)(param_6 + 8) & 1) == 0) {
        uVar3 = *(ushort *)(param_6 + 8) & 0x1f;
      }
      *(ushort *)(param_6 + 8) = uVar3;
    }
    FUN_1425f5bc0(local_308,uVar1,param_7);
    local_5c = 0;
    local_58 = icu_64::_anon_52181CED::BundleImporter::vftable;
    puVar2 = (undefined8 *)FUN_1425f5e20(local_308,param_2,&local_5c,&local_58,param_5,param_7);
    if (*param_7 < 1) {
      local_50 = puVar2;
      FUN_1424a3c70(puVar2 + 0xd);
      local_50 = (undefined8 *)0x0;
      FUN_14255d820(param_1,puVar2,param_7);
      if (param_3 != -1) {
        local_50 = (undefined8 *)0x0;
        (**(code **)(*param_1 + 0xb0))(param_1,5,param_3,param_7);
      }
      if (param_4 != -1) {
        local_50 = (undefined8 *)0x0;
        (**(code **)(*param_1 + 0xb0))(param_1,4,param_4,param_7);
      }
    }
    else {
      if ((param_6 != 0) && (local_1e8 != 0)) {
        local_50 = puVar2;
        FUN_1424a7220(local_a0,local_1e8,0xffffffff,0);
        FUN_1424a7ca0(param_6,local_a0);
        FUN_140859a90(local_a0);
      }
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    thunk_FUN_1424b70d0(&local_58);
    local_308[0] = icu_64::CollationBuilder::vftable;
    if (local_2c0 != (undefined8 *)0x0) {
      (**(code **)*local_2c0)(local_2c0,1);
    }
    FUN_14250dd70(local_c0);
    FUN_142517df0(local_e0);
    FUN_1425121d0(local_2b0);
    thunk_FUN_1424b70d0(local_308);
  }
  return;
}



// FUNCTION 1425f5b20 Unwind@1425f5b20 body=68 status=ok
// SIG undefined Unwind@1425f5b20(void)

void Unwind_1425f5b20(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x2e8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 1425f5b70 Unwind@1425f5b70 body=67 status=ok
// SIG undefined Unwind@1425f5b70(void)

void Unwind_1425f5b70(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x2e0);
  FUN_1425f6180(param_2 + 0x30);
  return;
}



// FUNCTION 1425f5bc0 FUN_1425f5bc0 body=356 status=ok
// SIG undefined FUN_1425f5bc0(void)

void FUN_1425f5bc0(undefined8 *param_1,longlong param_2,int *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  char *pcVar4;
  
  *param_1 = icu_64::CollationBuilder::vftable;
  uVar2 = FUN_1425ce570(param_3);
  param_1[1] = uVar2;
  uVar2 = FUN_1425ce600(param_3);
  param_1[2] = uVar2;
  uVar2 = FUN_1425ce690(param_3);
  param_1[3] = uVar2;
  param_1[4] = param_2;
  param_1[5] = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x88);
  param_1[6] = *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x80);
  *(undefined4 *)(param_1 + 7) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar3 = thunk_FUN_1424da030(0x278);
  if (lVar3 != 0) {
    FUN_1426bca40(lVar3,param_3);
  }
  param_1[9] = lVar3;
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_142511900();
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_142517d10(param_1 + 0x45,param_3);
  FUN_14250dd10(param_1 + 0x49,param_3);
  FUN_1425d0e00(param_1[3],param_3);
  if (*param_3 < 1) {
    if (param_1[9] == 0) {
      *param_3 = 7;
      return;
    }
    FUN_1426bcd40(param_1[9],param_1[5],param_3);
    if (*param_3 < 1) {
      return;
    }
    pcVar4 = "CollationBuilder initialization failed";
  }
  else {
    pcVar4 = "CollationBuilder fields initialization failed";
  }
  param_1[0x24] = pcVar4;
  return;
}



// FUNCTION 1425f5d30 Unwind@1425f5d30 body=34 status=ok
// SIG undefined Unwind@1425f5d30(void)

void Unwind_1425f5d30(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1425f5d60 Unwind@1425f5d60 body=34 status=ok
// SIG undefined Unwind@1425f5d60(void)

void Unwind_1425f5d60(undefined8 param_1,longlong param_2)

{
  FUN_14250dd70(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1425f5d90 Unwind@1425f5d90 body=34 status=ok
// SIG undefined Unwind@1425f5d90(void)

void Unwind_1425f5d90(undefined8 param_1,longlong param_2)

{
  FUN_142517df0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425f5dc0 Unwind@1425f5dc0 body=34 status=ok
// SIG undefined Unwind@1425f5dc0(void)

void Unwind_1425f5dc0(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1425f5df0 Unwind@1425f5df0 body=34 status=ok
// SIG undefined Unwind@1425f5df0(void)

void Unwind_1425f5df0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 1425f5e20 FUN_1425f5e20 body=663 status=ok
// SIG undefined FUN_1425f5e20(void)

undefined8 *
FUN_1425f5e20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,int *param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_98 [48];
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (0 < *param_6) {
    return (undefined8 *)0x0;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x80) == 0) {
    *param_6 = 2;
    *(char **)(param_1 + 0x120) = "missing root elements data, tailoring not supported";
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)thunk_FUN_1424da030(400);
  if ((puVar3 == (undefined8 *)0x0) ||
     (local_48 = puVar3, FUN_142589f60(puVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x20))
     , puVar3 = local_48, local_48[4] == 0)) {
    *param_6 = 7;
    puVar5 = (undefined8 *)0x0;
    goto joined_r0x0001425f5f43;
  }
  FUN_1426b7dd0(local_98,*(undefined8 *)(param_1 + 0x28),param_6);
  if (*param_6 < 1) {
    *(undefined4 *)(param_1 + 0x40) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0x1c);
    local_60 = param_1;
    local_58 = param_4;
    lVar4 = FUN_14255e3b0(local_48 + 4);
    FUN_1426b7e30(local_98,param_2,lVar4,param_5,param_6);
    *(undefined8 *)(param_1 + 0x120) = local_68;
    if (0 < *param_6) goto LAB_1425f5f1f;
    if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x260) == '\0') {
      local_48[3] = *(undefined8 *)(param_1 + 0x28);
    }
    else {
      FUN_1425f61e0(param_1,param_6);
      FUN_1425f67b0(param_1,param_6);
      FUN_1425f6ad0(param_1,param_6);
      lVar1 = param_1 + 0x58;
      FUN_142511a00(lVar1,0,0x7f);
      FUN_142511a00(lVar1,0xc0,0xff);
      FUN_142514420(lVar1,0xac00,0xd7a3);
      FUN_1426be600(*(undefined8 *)(param_1 + 0x48),lVar1,param_6);
      FUN_14258a200(local_48,param_6);
      if (0 < *param_6) goto LAB_1425f5f1f;
      if (*(char *)(param_1 + 0x50) != '\0') {
        *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x261) = 1;
      }
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))
                (*(longlong **)(param_1 + 0x48),local_48[0x2a],param_6);
      local_48[0x2b] = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    if (0 < *param_6) goto LAB_1425f5f1f;
    uVar2 = FUN_142615670(local_48[3],lVar4,lVar4 + 0x54,0x180);
    *(undefined4 *)(lVar4 + 0x50) = uVar2;
    puVar3 = local_48 + 5;
    FUN_1424a7c80(puVar3,param_2);
    FUN_1424a8e50(puVar3);
    FUN_14258a2b0(local_48,*(longlong *)(param_1 + 0x20) + 0x148,param_3);
    puVar3 = (undefined8 *)0x0;
    puVar5 = local_48;
  }
  else {
LAB_1425f5f1f:
    puVar5 = (undefined8 *)0x0;
    puVar3 = local_48;
  }
  FUN_1426b7e20(local_98);
joined_r0x0001425f5f43:
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    return puVar5;
  }
  return puVar5;
}



// FUNCTION 1425f60c0 Unwind@1425f60c0 body=51 status=ok
// SIG undefined Unwind@1425f60c0(void)

void Unwind_1425f60c0(undefined8 param_1,longlong param_2)

{
  FUN_1426b7e20(param_2 + 0x30);
  return;
}



// FUNCTION 1425f6100 Unwind@1425f6100 body=51 status=ok
// SIG undefined Unwind@1425f6100(void)

void Unwind_1425f6100(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x80));
  return;
}



// FUNCTION 1425f6140 Unwind@1425f6140 body=56 status=ok
// SIG undefined Unwind@1425f6140(void)

void Unwind_1425f6140(undefined8 param_1,longlong param_2)

{
  (**(code **)**(undefined8 **)(param_2 + 0x80))(*(undefined8 **)(param_2 + 0x80),1);
  return;
}



// FUNCTION 1425f6180 FUN_1425f6180 body=83 status=ok
// SIG undefined FUN_1425f6180(void)

void FUN_1425f6180(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::CollationBuilder::vftable;
  puVar1 = (undefined8 *)param_1[9];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_14250dd70(param_1 + 0x49);
  FUN_142517df0(param_1 + 0x45);
  FUN_1425121d0(param_1 + 0xb);
  thunk_FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1425f61e0 FUN_1425f61e0 body=1385 status=ok
// SIG undefined FUN_1425f61e0(void)

void FUN_1425f61e0(longlong param_1,int *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auStack_298 [32];
  longlong *local_278;
  uint local_270;
  undefined4 local_26c;
  longlong local_268;
  uint local_260;
  uint local_25c;
  int *local_258;
  ulonglong local_250;
  longlong local_248;
  ulonglong local_240;
  undefined1 local_234 [164];
  undefined1 local_190 [164];
  undefined1 local_ec [164];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (*param_2 < 1) {
    local_258 = param_2;
    FUN_1426c03e0(local_ec);
    FUN_1426c03e0(local_190);
    FUN_1426c03e0(local_234);
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x230);
    if (0 < (int)*(uint *)(param_1 + 0x230)) {
      lVar2 = *(longlong *)(param_1 + 0x260);
      local_278 = (longlong *)(param_1 + 0x30);
      lVar13 = 0;
      local_268 = param_1;
      do {
        iVar9 = 0;
        if (0 < (int)uVar8) {
          iVar9 = *(int *)(*(longlong *)(local_268 + 0x240) + lVar13 * 4);
        }
        uVar8 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 8);
        uVar16 = uVar8 >> 0x20;
        local_26c = 0;
        uVar14 = 0x500;
        local_248 = lVar13;
        if (uVar16 == 0) {
          uVar14 = 0;
        }
        else {
          local_26c = FUN_1426c1420(local_278,uVar16);
        }
        uVar19 = (uint)(uVar8 >> 8) & 0xfffff;
        if ((uVar8 & 0xfffff00) != 0) {
          bVar5 = false;
          uVar8 = 0;
          uVar18 = 0;
          iVar9 = 0;
          uVar20 = uVar14;
          do {
            uVar15 = (ulonglong)uVar19;
            uVar3 = *(ulonglong *)(lVar2 + uVar15 * 8);
            uVar19 = (uint)(uVar3 >> 8) & 0xfffff;
            uVar12 = (uint)uVar3 & 3;
            uVar17 = (uint)uVar18;
            cVar6 = (char)uVar18;
            uVar10 = (uint)uVar14;
            if (uVar12 == 1) {
              if ((uVar3 & 8) == 0) {
                uVar14 = uVar3 >> 0x30;
                uVar8 = 0;
              }
              else {
                if ((char)uVar8 == '\0') {
                  iVar9 = 0;
                  uVar12 = uVar19;
                  if ((uVar3 & 0xfffff00) != 0) {
                    do {
                      uVar8 = *(ulonglong *)(lVar2 + (ulonglong)uVar12 * 8);
                      if (((uint)uVar8 & 3) == 1) {
                        if ((uVar8 & 8) == 0) break;
                        iVar9 = iVar9 + 1;
                      }
                      else if ((uVar8 & 3) == 0) break;
                      uVar12 = (uint)uVar8 >> 8 & 0xfffff;
                    } while (uVar12 != 0);
                  }
                  if (uVar10 == 0) {
                    lVar13 = *local_278;
                    uVar10 = (*(uint *)(lVar13 + 0x10) >> 8 & 0xff00) - 0x100;
                    uVar14 = (ulonglong)uVar10;
                    uVar12 = (uint)*(ushort *)(lVar13 + 2 + (ulonglong)*(uint *)(lVar13 + 4) * 4);
                    local_260 = uVar17;
                    local_250 = uVar16;
joined_r0x0001425f66a7:
                    if (uVar10 == 0x500) {
                      uVar14 = (ulonglong)*(byte *)(*local_278 + 0x13) << 8;
                    }
                  }
                  else {
                    if (cVar6 == '\0') {
                      local_260 = uVar17;
                      local_250 = uVar16;
                      uVar12 = FUN_1426c1760(local_278,local_26c,uVar14);
                      goto joined_r0x0001425f66a7;
                    }
                    if (uVar10 != 0x100) {
                      uVar12 = *(uint *)(*local_278 + 0x10) >> 8 & 0xff00;
                      local_260 = uVar17;
                      local_250 = uVar16;
                      goto joined_r0x0001425f66a7;
                    }
                    uVar14 = 0x100;
                    uVar12 = 0x500;
                    local_260 = uVar17;
                    local_250 = uVar16;
                  }
                  FUN_1426c0460(local_190);
                  uVar8 = (ulonglong)(iVar9 + 1);
                  cVar6 = FUN_1426c0e30(local_190,uVar14,uVar12,uVar8);
                  uVar18 = (ulonglong)local_260;
                  uVar16 = local_250;
                  if (cVar6 == '\0') {
                    pcVar11 = "secondary tailoring gap too small";
                    goto LAB_1425f676d;
                  }
                }
                uVar12 = FUN_1426c0ff0();
                uVar14 = (ulonglong)uVar12;
                uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
              }
              uVar20 = uVar14;
              if ((int)uVar14 != 0) {
                uVar20 = 0x500;
              }
joined_r0x0001425f6642:
              bVar5 = false;
              iVar9 = 0;
            }
            else {
              if (uVar12 != 2) {
                if (uVar12 != 3) {
                  uVar12 = uVar19;
                  uVar8 = uVar3;
                  if (cVar6 == '\0') {
                    while (((uVar8 & 0xfffff00) != 0 &&
                           ((uVar8 = *(ulonglong *)(lVar2 + (ulonglong)uVar12 * 8), (uVar8 & 3) != 0
                            || ((uVar8 & 8) != 0))))) {
                      uVar12 = (uint)(uVar8 >> 8) & 0xfffff;
                    }
                    uVar1 = *(undefined1 *)
                             (*(longlong *)(*(longlong *)(local_268 + 0x28) + 0x48) +
                             (uVar16 >> 0x18 & 0xff));
                    local_240 = uVar15;
                    uVar7 = FUN_1426c1710(local_278,uVar16 & 0xffffffff,local_26c,uVar1);
                    FUN_1426c0400(local_ec,uVar1);
                    cVar6 = FUN_1426c0e30(local_ec,uVar16 & 0xffffffff,uVar7);
                    uVar15 = local_240;
                    uVar18 = uVar16;
                    if (cVar6 == '\0') {
                      pcVar11 = "primary tailoring gap too small";
                      goto LAB_1425f676d;
                    }
                  }
                  uVar12 = FUN_1426c0ff0();
                  uVar16 = (ulonglong)uVar12;
                  uVar18 = CONCAT71((int7)(uVar18 >> 8),1);
                  uVar8 = 0;
                  uVar14 = 0x500;
                  uVar20 = 0x500;
                  goto joined_r0x0001425f6642;
                }
                if (iVar9 != 3) {
                  iVar9 = iVar9 + 1;
                  goto joined_r0x0001425f6736;
                }
                pcVar11 = "quaternary tailoring gap too small";
LAB_1425f676d:
                *local_258 = 0xf;
                *(char **)(local_268 + 0x120) = pcVar11;
                goto LAB_1425f677f;
              }
              if ((uVar3 & 8) == 0) {
                uVar20 = uVar3 >> 0x30;
                goto joined_r0x0001425f6642;
              }
              local_25c = (uint)uVar8;
              if (!bVar5) {
                if ((uVar3 & 0xfffff00) == 0) {
                  iVar9 = 0;
                }
                else {
                  iVar9 = 0;
                  uVar12 = uVar19;
                  do {
                    uVar18 = *(ulonglong *)(lVar2 + (ulonglong)uVar12 * 8);
                    uVar12 = (uint)uVar18;
                    uVar10 = uVar12 & 3;
                    if (uVar10 < 2) break;
                    if (uVar10 == 2) {
                      if ((uVar18 & 8) == 0) break;
                      iVar9 = iVar9 + 1;
                    }
                    uVar12 = uVar12 >> 8 & 0xfffff;
                  } while (uVar12 != 0);
                }
                if ((int)uVar20 == 0) {
                  puVar4 = (uint *)*local_278;
                  uVar20 = (ulonglong)((puVar4[4] & 0xff) * 0x100 - 0x100);
                  local_270 = puVar4[*puVar4] & 0x3f3f;
                  local_260 = uVar17;
                  local_250 = uVar16;
                }
                else if (cVar6 == '\0' && (char)uVar8 == '\0') {
                  local_260 = uVar17;
                  local_250 = uVar16;
                  local_270 = FUN_1426c17e0(local_278,local_26c,uVar14,uVar20);
                }
                else if ((int)uVar20 == 0x100) {
                  local_270 = 0x500;
                  uVar20 = 0x100;
                  local_260 = uVar17;
                  local_250 = uVar16;
                }
                else {
                  local_270 = (*(uint *)(*local_278 + 0x10) & 0xff) << 8;
                  local_260 = uVar17;
                  local_250 = uVar16;
                }
                FUN_1426c0480(local_234);
                cVar6 = FUN_1426c0e30(local_234,uVar20,local_270,iVar9 + 1);
                uVar18 = (ulonglong)local_260;
                uVar16 = local_250;
                if (cVar6 == '\0') {
                  pcVar11 = "tertiary tailoring gap too small";
                  goto LAB_1425f676d;
                }
              }
              uVar12 = FUN_1426c0ff0();
              uVar20 = (ulonglong)uVar12;
              bVar5 = true;
              iVar9 = 0;
              uVar8 = (ulonglong)local_25c;
            }
joined_r0x0001425f6736:
            if ((uVar3 & 8) != 0) {
              *(ulonglong *)(lVar2 + uVar15 * 8) =
                   (ulonglong)(iVar9 << 6 | (uint)uVar20) |
                   (ulonglong)(uint)((int)uVar14 << 0x10) | uVar16 << 0x20;
            }
          } while ((uVar3 & 0xfffff00) != 0);
        }
        lVar13 = local_248 + 1;
        uVar8 = (ulonglong)*(int *)(local_268 + 0x230);
      } while (lVar13 < (longlong)uVar8);
    }
  }
LAB_1425f677f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_298);
}



// FUNCTION 1425f67b0 FUN_1425f67b0 body=528 status=ok
// SIG undefined FUN_1425f67b0(void)

void FUN_1425f67b0(longlong param_1,int *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  int *in_stack_fffffffffffffd28;
  longlong local_2c8;
  longlong alStack_2c0 [30];
  undefined1 local_1d0 [200];
  undefined **local_108;
  undefined2 local_100;
  undefined1 local_c8 [8];
  undefined4 local_c0;
  undefined **local_88;
  undefined2 local_80;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_1424a7060(&local_2c8,1,L"[:NFD_QC=N:]",0xffffffff);
  FUN_1425c5b90(local_1d0,&local_2c8,param_2);
  FUN_140859a90(&local_2c8);
  if (*param_2 < 1) {
    FUN_142514420(local_1d0,0xac00,0xd7a3);
    local_88 = &PTR_FUN_149e18960;
    local_80 = 2;
    local_108 = &PTR_FUN_149e18960;
    local_100 = 2;
    FUN_1425ec120(local_c8,local_1d0);
    plVar2 = (longlong *)(param_1 + 0x128);
LAB_1425f6890:
    cVar6 = FUN_1425ec210(local_c8);
    if (cVar6 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                (*(longlong **)(param_1 + 8),local_c0,&local_108);
      iVar7 = FUN_1426bf7e0(*(undefined8 *)(param_1 + 0x48),&local_108,plVar2,0);
      *(int *)(param_1 + 0x220) = iVar7;
      if (iVar7 < 0x20) {
        uVar10 = FUN_1425ec2b0(local_c8);
        if (*param_2 < 1) {
          uVar5 = *(uint *)(param_1 + 0x220);
          in_stack_fffffffffffffd28 =
               (int *)((ulonglong)in_stack_fffffffffffffd28 & 0xffffffff00000000);
          uVar8 = FUN_1426bfb90(*(undefined8 *)(param_1 + 0x48),&local_88,uVar10,&local_2c8,
                                in_stack_fffffffffffffd28);
          if (uVar8 == uVar5) {
            if ((int)uVar5 < 1) goto LAB_1425f6890;
            if (*plVar2 == local_2c8) {
              uVar11 = 0;
              do {
                if ((ulonglong)uVar5 - 1 == uVar11) goto LAB_1425f6890;
                lVar4 = uVar11 * 8;
                uVar1 = uVar11 + 1;
                plVar3 = alStack_2c0 + uVar11;
                uVar11 = uVar1;
              } while (*(longlong *)(param_1 + 0x130 + lVar4) == *plVar3);
              if (uVar5 <= uVar1) goto LAB_1425f6890;
            }
          }
          uVar9 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))
                            (*(longlong **)(param_1 + 0x48),plVar2,uVar5,param_2);
          in_stack_fffffffffffffd28 = param_2;
          FUN_1426bcf00(*(undefined8 *)(param_1 + 0x48),&local_88,uVar10,uVar9,param_2);
        }
      }
      goto LAB_1425f6890;
    }
    FUN_1425ec1d0(local_c8);
    FUN_140859a90(&local_108);
    FUN_140859a90(&local_88);
  }
  FUN_1425121d0(local_1d0);
  return;
}



// FUNCTION 1425f69c0 Unwind@1425f69c0 body=58 status=ok
// SIG undefined Unwind@1425f69c0(void)

void Unwind_1425f69c0(undefined8 param_1,longlong param_2)

{
  FUN_1425ec1d0(param_2 + 0x230);
  return;
}



// FUNCTION 1425f6a00 Unwind@1425f6a00 body=70 status=ok
// SIG undefined Unwind@1425f6a00(void)

void Unwind_1425f6a00(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x1f0);
  FUN_140859a90(param_2 + 0x270);
  return;
}



// FUNCTION 1425f6a50 Unwind@1425f6a50 body=58 status=ok
// SIG undefined Unwind@1425f6a50(void)

void Unwind_1425f6a50(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x128);
  return;
}



// FUNCTION 1425f6a90 Unwind@1425f6a90 body=55 status=ok
// SIG undefined Unwind@1425f6a90(void)

void Unwind_1425f6a90(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425f6ad0 FUN_1425f6ad0 body=216 status=ok
// SIG undefined FUN_1425f6ad0(void)

void FUN_1425f6ad0(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_2 < 1) {
    local_28 = (undefined8 *)thunk_FUN_1424da030(0x278);
    if (local_28 == (undefined8 *)0x0) {
      if (*param_2 < 1) {
        *param_2 = 7;
      }
    }
    else {
      FUN_1426bca40(local_28,param_2);
      if (*param_2 < 1) {
        FUN_1426bcd40(local_28,*(undefined8 *)(param_1 + 0x28),param_2);
        local_30 = *(undefined8 *)(param_1 + 0x260);
        local_38 = icu_64::CEFinalizer::vftable;
        FUN_1426be4c0(local_28,*(undefined8 *)(param_1 + 0x48),&local_38,param_2);
        puVar2 = local_28;
        if (*param_2 < 1) {
          puVar1 = *(undefined8 **)(param_1 + 0x48);
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
          *(undefined8 **)(param_1 + 0x48) = puVar2;
          thunk_FUN_1424b70d0(&local_38);
          return;
        }
        thunk_FUN_1424b70d0(&local_38);
      }
      (**(code **)*local_28)(local_28,1);
    }
  }
  return;
}



// FUNCTION 1425f6bb0 Unwind@1425f6bb0 body=34 status=ok
// SIG undefined Unwind@1425f6bb0(void)

void Unwind_1425f6bb0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1425f6be0 Unwind@1425f6be0 body=34 status=ok
// SIG undefined Unwind@1425f6be0(void)

void Unwind_1425f6be0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x20);
  return;
}



// FUNCTION 1425f6c10 Unwind@1425f6c10 body=39 status=ok
// SIG undefined Unwind@1425f6c10(void)

void Unwind_1425f6c10(undefined8 param_1,longlong param_2)

{
  (**(code **)**(undefined8 **)(param_2 + 0x30))(*(undefined8 **)(param_2 + 0x30),1);
  return;
}



// FUNCTION 1425f6c40 FUN_1425f6c40 body=1266 status=ok
// SIG undefined FUN_1425f6c40(void)

void FUN_1425f6c40(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,int *param_5)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined **local_88;
  undefined2 local_80;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_5) {
    return;
  }
  uVar1 = *(ushort *)(param_3 + 8);
  if ((short)uVar1 < 0) {
    if (*(int *)(param_3 + 0xc) == 0) goto LAB_1425f6c9e;
LAB_1425f6c90:
    if ((uVar1 & 2) == 0) {
      sVar2 = **(short **)(param_3 + 0x18);
    }
    else {
      sVar2 = *(short *)(param_3 + 10);
    }
    if (sVar2 != -2) goto LAB_1425f6c9e;
    uVar7 = FUN_1425f71c0(param_1,param_3,param_4,param_5);
    *(undefined8 *)(param_1 + 0x128) = uVar7;
    *(undefined4 *)(param_1 + 0x220) = 1;
    if (param_2 == 0xf) {
      return;
    }
    if (0 < *param_5) {
      return;
    }
LAB_1425f6d6a:
    uVar4 = FUN_1425f7a00(param_1,param_2,param_4,param_5);
    if (*param_5 < 1) {
      uVar11 = (ulonglong)uVar4;
      uVar9 = 0;
      iVar3 = *(int *)(param_1 + 0x250);
      if ((-1 < (int)uVar4) && ((int)uVar4 < iVar3)) {
        uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + uVar11 * 8);
      }
      uVar4 = (uint)uVar9 & 3;
      if ((int)param_2 < (int)uVar4) {
        do {
          uVar12 = (uint)(uVar9 >> 0x1c);
          uVar4 = uVar12 & 0xfffff;
          uVar11 = (ulonglong)uVar4;
          if ((int)uVar4 < iVar3) {
            uVar9 = *(ulonglong *)
                     (*(longlong *)(param_1 + 0x260) + (ulonglong)(uVar12 & 0xfffff) * 8);
          }
          else {
            uVar9 = 0;
          }
          uVar4 = (uint)uVar9 & 3;
        } while ((int)param_2 < (int)uVar4);
      }
      if (((uVar9 & 8) == 0) || (uVar4 != param_2)) {
        if (param_2 == 0) {
          if (uVar9 >> 0x20 == 0) {
            *param_5 = 0x10;
            *param_4 = "reset primary-before ignorable not possible";
            return;
          }
          uVar4 = (uint)(uVar9 >> 0x20);
          if (uVar4 <= *(uint *)(*(longlong *)(param_1 + 0x30) +
                                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x30) + 8) * 4)) {
            *param_5 = 0x10;
            *param_4 = "reset primary-before first non-ignorable not supported";
            return;
          }
          if (uVar4 == 0xff020200) {
            *param_5 = 0x10;
            *param_4 = "reset primary-before [first trailing] not supported";
            return;
          }
          uVar5 = FUN_1426c1310(param_1 + 0x30,uVar9 >> 0x20,
                                *(undefined1 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x48) +
                                 (uVar9 >> 0x38)));
          uVar4 = FUN_1425f7bb0(param_1,uVar5,param_5);
          param_2 = 0;
          do {
            uVar12 = uVar4;
            if (((int)uVar12 < 0) || (*(int *)(param_1 + 0x250) <= (int)uVar12)) break;
            uVar4 = *(uint *)(*(longlong *)(param_1 + 0x260) + (ulonglong)uVar12 * 8) >> 8 & 0xfffff
            ;
          } while (uVar4 != 0);
        }
        else {
          if ((-1 < (int)uVar11) && ((int)uVar11 < iVar3)) {
            lVar8 = *(longlong *)(param_1 + 0x260);
            uVar9 = *(ulonglong *)(lVar8 + uVar11 * 8);
            if (((uVar9 & 0x40) != 0) && ((uVar9 & 3) == 0)) {
              uVar4 = (uint)uVar9 >> 8 & 0xfffff;
              if ((int)uVar4 < iVar3) {
                uVar9 = *(ulonglong *)(lVar8 + (ulonglong)uVar4 * 8);
              }
              else {
                uVar9 = 0;
              }
              do {
                do {
                  uVar4 = (uint)(uVar9 >> 8) & 0xfffff;
                  uVar11 = (ulonglong)uVar4;
                  uVar9 = 0;
                } while (iVar3 <= (int)uVar4);
                uVar9 = *(ulonglong *)(lVar8 + uVar11 * 8);
              } while ((((uVar9 & 8) != 0) || ((uVar9 & 2) != 0)) ||
                      ((ushort)(uVar9 >> 0x30) < 0x500));
            }
          }
          uVar4 = (uint)uVar11;
          if (1 < (int)param_2) {
            uVar4 = FUN_1425f7cf0(param_1,uVar11,2);
          }
          if ((((int)uVar4 < 0) || (iVar3 <= (int)uVar4)) ||
             (uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + (ulonglong)uVar4 * 8),
             ((uint)uVar9 & 3) != param_2)) {
            uVar5 = FUN_1425f7da0(param_1);
            uVar12 = FUN_1425f7fc0(param_1,uVar4,uVar5,param_2,param_5);
          }
          else {
            if (uVar9 >> 0x30 == 0) {
              *param_5 = 0x10;
              pcVar6 = "reset tertiary-before completely ignorable not possible";
              if (param_2 == 1) {
                pcVar6 = "reset secondary-before secondary ignorable not possible";
              }
              *param_4 = pcVar6;
              return;
            }
            lVar8 = FUN_1425f7da0(param_1);
            uVar12 = (uint)(uVar9 >> 0x1c) & 0xfffff;
            uVar10 = uVar12;
            while( true ) {
              if ((int)uVar10 < *(int *)(param_1 + 0x250)) {
                uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + (ulonglong)uVar10 * 8);
              }
              else {
                uVar9 = 0;
              }
              uVar10 = (uint)uVar9 & 3;
              if ((int)uVar10 < (int)param_2) {
                uVar10 = 0x500;
                goto LAB_1425f7110;
              }
              if (((uVar9 & 8) == 0) && (uVar10 == param_2)) break;
              uVar10 = (uint)(uVar9 >> 0x1c) & 0xfffff;
            }
            uVar10 = (uint)(ushort)(uVar9 >> 0x30);
LAB_1425f7110:
            if (uVar10 != (uint)lVar8) {
              uVar12 = FUN_1425f7e90(param_1,uVar12,uVar4,(longlong)(int)param_2 | lVar8 << 0x30,
                                     param_5);
            }
          }
          uVar9 = *(ulonglong *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x220) * 8);
          if ((int)uVar9 + 0xba000000U < 0xc0000000) {
            param_2 = 0;
            if (((uVar9 >> 0x38 == 0) && (param_2 = 1, (char)(uVar9 >> 0x18) == '\0')) &&
               (param_2 = 2, uVar9 == 0)) {
              param_2 = 0xf;
            }
          }
          else {
            param_2 = (uint)(uVar9 >> 8) & 3;
          }
        }
      }
      else {
        uVar12 = (uint)(uVar9 >> 0x1c) & 0xfffff;
      }
      if (*param_5 < 1) {
        *(ulonglong *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x220) * 8) =
             (longlong)(int)(param_2 << 8) + 0x4040000006002000 +
             ((ulonglong)((uVar12 & 0x3f) << 0x18) |
             (ulonglong)(uVar12 & 0x1fc0) << 0x2a | (ulonglong)(uVar12 & 0xfe000) << 0x2b);
      }
      else {
        *param_4 = "inserting reset position for &[before n]";
      }
    }
  }
  else {
    if ((short)uVar1 >> 5 != 0) goto LAB_1425f6c90;
LAB_1425f6c9e:
    local_88 = &PTR_FUN_149e18960;
    local_80 = 2;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
              (*(longlong **)(param_1 + 8),param_3,&local_88,param_5);
    if (*param_5 < 1) {
      iVar3 = FUN_1426bf7e0(*(undefined8 *)(param_1 + 0x48),&local_88,param_1 + 0x128,0);
      *(int *)(param_1 + 0x220) = iVar3;
      if (iVar3 < 0x20) {
        FUN_140859a90(&local_88);
        if (param_2 == 0xf) {
          return;
        }
        goto LAB_1425f6d6a;
      }
      *param_5 = 1;
      pcVar6 = "reset position maps to too many collation elements (more than 31)";
    }
    else {
      pcVar6 = "normalizing the reset position";
    }
    *param_4 = pcVar6;
    FUN_140859a90(&local_88);
  }
  return;
}



// FUNCTION 1425f7140 Unwind@1425f7140 body=52 status=ok
// SIG undefined Unwind@1425f7140(void)

void Unwind_1425f7140(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425f7180 Unwind@1425f7180 body=52 status=ok
// SIG undefined Unwind@1425f7180(void)

void Unwind_1425f7180(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425f71c0 FUN_1425f71c0 body=2090 status=ok
// SIG undefined FUN_1425f71c0(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1425f71c0(longlong param_1,longlong param_2,undefined8 *param_3,int *param_4)

{
  short sVar1;
  ushort uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  char *pcVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  
  sVar1 = *(short *)(param_2 + 8);
  if (sVar1 < 0) {
    uVar12 = *(uint *)(param_2 + 0xc);
  }
  else {
    uVar12 = (int)sVar1 >> 5;
  }
  if (uVar12 < 2) {
switchD_1425f7228_default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (((int)sVar1 & 2U) == 0) {
    param_2 = *(longlong *)(param_2 + 0x18);
  }
  else {
    param_2 = param_2 + 10;
  }
  uVar2 = *(ushort *)(param_2 + 2);
  uVar12 = 0;
  bVar3 = 1;
  switch(uVar2) {
  case 0x2800:
  case 0x2801:
    goto LAB_1425f7461;
  case 0x2802:
    if (0 < *param_4) {
      return 0;
    }
    uVar6 = 0;
    uVar12 = FUN_1425f7bb0(param_1,0,param_4);
    iVar17 = *param_4;
    if (0 < iVar17) {
      return 0;
    }
    uVar15 = (ulonglong)uVar12;
    if (((int)uVar12 < 0) || (*(int *)(param_1 + 0x250) <= (int)uVar12)) {
LAB_1425f77ba:
      uVar9 = FUN_1425f7e90(param_1,uVar15,uVar6,1,param_4);
      iVar17 = *param_4;
    }
    else {
      uVar12 = *(uint *)(*(longlong *)(param_1 + 0x260) + uVar15 * 8);
      uVar9 = uVar15;
      do {
        do {
          uVar15 = uVar9;
          uVar6 = uVar12 >> 8 & 0xfffff;
          if ((uVar6 == 0) || (*(int *)(param_1 + 0x250) <= (int)uVar6)) goto LAB_1425f77ba;
          uVar9 = (ulonglong)uVar6;
          uVar16 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + (ulonglong)uVar6 * 8);
          uVar12 = (uint)uVar16;
        } while (1 < (uVar12 & 3));
        if ((uVar16 & 3) == 0) goto LAB_1425f77ba;
      } while ((uVar16 & 8) != 0);
      if (uVar16 >> 0x30 != 0) goto LAB_1425f77ba;
    }
    iVar8 = (int)uVar9;
    uVar12 = 0;
    if (0 < iVar17) {
      return 0;
    }
    if ((-1 < iVar8) && (iVar8 < *(int *)(param_1 + 0x250))) {
      uVar6 = *(uint *)(*(longlong *)(param_1 + 0x260) + (uVar9 & 0xffffffff) * 8);
      do {
        do {
          iVar8 = (int)uVar9;
          uVar12 = uVar6 >> 8 & 0xfffff;
          if ((uVar12 == 0) || (*(int *)(param_1 + 0x250) <= (int)uVar12)) goto LAB_1425f7940;
          uVar9 = (ulonglong)uVar12;
          uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + (ulonglong)uVar12 * 8);
          uVar6 = (uint)uVar15;
        } while ((uVar6 & 3) == 3);
        if ((uVar6 & 3) < 2) goto LAB_1425f7940;
      } while ((uVar15 & 8) != 0);
      if (uVar15 >> 0x30 == 0) goto LAB_1425f795d;
    }
LAB_1425f7940:
    uVar12 = FUN_1425f7e90(param_1,iVar8,uVar12,2,param_4);
    iVar17 = *param_4;
LAB_1425f795d:
    if (0 < iVar17) {
      return 0;
    }
    if ((-1 < (int)uVar12) && ((int)uVar12 < *(int *)(param_1 + 0x250))) {
      uVar12 = *(uint *)(*(longlong *)(param_1 + 0x260) + (ulonglong)uVar12 * 8) >> 8;
      uVar6 = uVar12 & 0xfffff;
      if ((uVar6 != 0) &&
         (((int)uVar6 < *(int *)(param_1 + 0x250) &&
          ((*(uint *)(*(longlong *)(param_1 + 0x260) + (ulonglong)uVar6 * 8) & 0xb) == 10)))) {
        return ((ulonglong)((uVar12 & 0x3f) << 0x18) |
               (ulonglong)(uVar12 & 0x1fc0) << 0x2a | (ulonglong)(uVar12 & 0xfe000) << 0x2b) +
               0x4040000006002200;
      }
    }
    return (ulonglong)((*(uint **)(param_1 + 0x30))[**(uint **)(param_1 + 0x30)] & 0xffffff7f);
  case 0x2803:
    uVar15 = (ulonglong)
             (*(uint *)(*(longlong *)(param_1 + 0x30) +
                       (ulonglong)(*(int *)(*(longlong *)(param_1 + 0x30) + 4) - 1) * 4) &
             0xffffff7f);
    uVar12 = 2;
    bVar4 = true;
    bVar3 = 0;
    goto LAB_1425f73e6;
  case 0x2804:
    if (0 < *param_4) {
      return 0;
    }
    uVar12 = 0;
    uVar6 = FUN_1425f7bb0(param_1,0,param_4);
    iVar17 = *param_4;
    if (0 < iVar17) {
      return 0;
    }
    if (((int)uVar6 < 0) || (*(int *)(param_1 + 0x250) <= (int)uVar6)) {
LAB_1425f7857:
      uVar12 = FUN_1425f7e90(param_1,uVar6,uVar12,1,param_4);
      iVar17 = *param_4;
    }
    else {
      uVar13 = *(uint *)(*(longlong *)(param_1 + 0x260) + (ulonglong)uVar6 * 8);
      uVar12 = uVar6;
      do {
        do {
          uVar6 = uVar12;
          uVar12 = uVar13 >> 8 & 0xfffff;
          if ((uVar12 == 0) || (*(int *)(param_1 + 0x250) <= (int)uVar12)) goto LAB_1425f7857;
          uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + (ulonglong)uVar12 * 8);
          uVar13 = (uint)uVar15;
        } while (1 < (uVar13 & 3));
        if ((uVar15 & 3) == 0) goto LAB_1425f7857;
      } while ((uVar15 & 8) != 0);
      if (uVar15 >> 0x30 != 0) goto LAB_1425f7857;
    }
    if (0 < iVar17) {
      return 0;
    }
    uVar15 = 0;
    iVar17 = *(int *)(param_1 + 0x250);
    lVar11 = *(longlong *)(param_1 + 0x260);
    if ((-1 < (int)uVar12) && ((int)uVar12 < iVar17)) {
      uVar15 = *(ulonglong *)(lVar11 + (ulonglong)uVar12 * 8);
    }
    do {
      uVar12 = (uint)(uVar15 >> 8) & 0xfffff;
      if (((uVar15 >> 8 & 0xfffff) == 0) || (iVar17 <= (int)uVar12)) goto LAB_1425f78c9;
      uVar15 = *(ulonglong *)(lVar11 + (ulonglong)uVar12 * 8);
      if ((uVar15 & 3) == 0) goto LAB_1425f78c9;
    } while (((uint)uVar15 & 3) != 1);
    if ((uVar15 & 8) != 0) {
      if ((uVar15 & 0x20) != 0) {
        uVar6 = (uint)uVar15 >> 8 & 0xfffff;
        uVar12 = 0;
        if ((int)uVar6 < iVar17) {
          uVar12 = *(uint *)(lVar11 + (ulonglong)uVar6 * 8) >> 8 & 0xfffff;
        }
      }
      return ((ulonglong)((uVar12 & 0x3f) << 0x18) |
             (ulonglong)(uVar12 & 0x1fc0) << 0x2a | (ulonglong)(uVar12 & 0xfe000) << 0x2b) +
             0x4040000006002100;
    }
LAB_1425f78c9:
    lVar11 = *(longlong *)(param_1 + 0x30);
    uVar12 = *(uint *)(lVar11 + 4);
    goto LAB_1425f7301;
  case 0x2805:
    lVar11 = *(longlong *)(param_1 + 0x30);
    uVar12 = *(int *)(lVar11 + 8) - 1;
LAB_1425f7301:
    uVar15 = (ulonglong)(*(uint *)(lVar11 + (ulonglong)uVar12 * 4) & 0xffffff7f);
    uVar12 = 1;
    bVar4 = true;
    bVar3 = 0;
    bVar5 = true;
    iVar17 = *param_4;
    goto joined_r0x0001425f73b9;
  case 0x2806:
    uVar15 = (ulonglong)
             *(uint *)(*(longlong *)(param_1 + 0x30) +
                      (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x30) + 8) * 4) << 0x20 |
             0x5000500;
    goto LAB_1425f73ad;
  case 0x2807:
    uVar15 = FUN_1426c1110(param_1 + 0x30);
    break;
  case 0x2808:
    uVar15 = FUN_1426c1230(param_1 + 0x30);
    goto LAB_1425f73ad;
  case 0x2809:
    FUN_142563bc0(*(undefined8 *)(param_1 + 0x28),0x11);
    uVar15 = FUN_1426c1230(param_1 + 0x30);
    break;
  case 0x280a:
    uVar15 = FUN_142563920(*(undefined8 *)(param_1 + 0x28),0x4e00,param_4);
    break;
  case 0x280b:
    *param_4 = 0x10;
    pcVar10 = "reset to [last implicit] not supported";
    goto LAB_1425f74eb;
  case 0x280c:
    uVar15 = 0xff02020005000500;
    bVar4 = false;
LAB_1425f73e6:
    bVar5 = false;
    iVar17 = *param_4;
    goto joined_r0x0001425f73b9;
  case 0x280d:
    *param_4 = 1;
    pcVar10 = "LDML forbids tailoring to U+FFFF";
LAB_1425f74eb:
    *param_3 = pcVar10;
    return 0;
  default:
    goto switchD_1425f7228_default;
  }
  bVar3 = 0;
LAB_1425f73ad:
  bVar4 = false;
  bVar5 = false;
  uVar12 = 0;
  iVar17 = *param_4;
joined_r0x0001425f73b9:
  if (0 < iVar17) {
LAB_1425f7461:
    return 0;
  }
  uVar16 = uVar15 >> 0x20;
  uVar9 = FUN_1425f7bb0(param_1,uVar16,param_4);
  if (bVar4) {
    uVar9 = FUN_1425f7fc0(param_1,uVar9 & 0xffffffff,uVar15 >> 0x10 & 0xffff,1,param_4);
    if (!bVar5) {
      uVar9 = FUN_1425f7fc0(param_1,uVar9 & 0xffffffff,(uint)uVar15 & 0x3f3f,2,param_4);
    }
  }
  uVar6 = (uint)uVar9;
  if (0 < *param_4) {
    return 0;
  }
  uVar14 = 0;
  iVar17 = *(int *)(param_1 + 0x250);
  if ((-1 < (int)uVar6) && ((int)uVar6 < iVar17)) {
    uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + (uVar9 & 0xffffffff) * 8);
  }
  if ((uVar2 & 1) != 0) {
    uVar13 = (uint)(uVar14 >> 8);
    if ((uVar14 & 0xfffff00) != 0) {
      do {
        uVar18 = uVar13 & 0xfffff;
        uVar6 = (uint)uVar9;
        uVar9 = (ulonglong)uVar18;
        if ((int)uVar18 < iVar17) {
          uVar16 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + uVar9 * 8);
        }
        else {
          uVar16 = 0;
        }
      } while ((uVar12 <= ((uint)uVar16 & 3)) &&
              (uVar13 = (uint)(uVar16 >> 8), uVar14 = uVar16, uVar6 = uVar18,
              (uVar16 & 0xfffff00) != 0));
    }
    if ((uVar14 & 8) == 0) {
      return uVar15;
    }
    lVar11 = (ulonglong)((uVar6 & 0x3f) << 0x18) + ((ulonglong)(uVar6 & 0x1fc0) << 0x2a);
    goto LAB_1425f77ad;
  }
  if (!(bool)(bVar3 ^ 1 | (uVar14 & 0x60) != 0)) {
    uVar13 = (uint)uVar14 >> 8;
    uVar6 = uVar13 & 0xfffff;
    if (uVar6 == 0) {
      uVar7 = FUN_1426c1420(param_1 + 0x30,uVar16);
      uVar13 = FUN_1426c1710(param_1 + 0x30,uVar16,uVar7,
                             *(undefined1 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x48) +
                              (uVar15 >> 0x38)));
      if (0 < *param_4) {
        return 0;
      }
      uVar6 = FUN_1425f7bb0(param_1,uVar13,param_4);
      if (0 < *param_4) {
        return 0;
      }
      uVar15 = (ulonglong)uVar13 << 0x20 | 0x5000500;
      if ((int)uVar6 < 0) {
        return uVar15;
      }
      iVar17 = *(int *)(param_1 + 0x250);
      if (iVar17 <= (int)uVar6) {
        return uVar15;
      }
      uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + (ulonglong)uVar6 * 8);
    }
    else {
      if ((int)uVar6 < iVar17) {
        uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + (ulonglong)uVar6 * 8);
      }
      else {
        uVar14 = 0;
      }
      uVar15 = ((ulonglong)(uVar12 << 8) | 0x4040000006002000) +
               ((ulonglong)(uVar13 & 0xfe000) << 0x2b) +
               (ulonglong)((uVar13 & 0x3f) << 0x18) + ((ulonglong)(uVar13 & 0x1fc0) << 0x2a);
    }
  }
  if ((uVar14 & 0x60) == 0) {
    return uVar15;
  }
  if ((uVar14 & 0x40) == 0) {
LAB_1425f7753:
    if ((uVar14 & 0x20) != 0) {
      uVar13 = (uint)(uVar14 >> 8) & 0xfffff;
      uVar6 = 0;
      if ((int)uVar13 < iVar17) {
        uVar6 = *(uint *)(*(longlong *)(param_1 + 0x260) + (ulonglong)uVar13 * 8) >> 8 & 0xfffff;
      }
    }
  }
  else {
    uVar6 = (uint)(uVar14 >> 8) & 0xfffff;
    uVar15 = 0;
    if ((int)uVar6 < iVar17) {
      uVar15 = (ulonglong)
               (*(uint *)(*(longlong *)(param_1 + 0x260) + (ulonglong)uVar6 * 8) >> 8 & 0xfffff);
    }
    uVar6 = (uint)uVar15;
    if ((int)uVar6 < iVar17) {
      uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + uVar15 * 8);
      goto LAB_1425f7753;
    }
  }
  lVar11 = (ulonglong)((uVar6 & 0x3f) << 0x18) + ((ulonglong)(uVar6 & 0x1fc0) << 0x2a);
LAB_1425f77ad:
  return ((ulonglong)(uVar12 << 8) | 0x4040000006002000) + ((ulonglong)(uVar6 & 0xfe000) << 0x2b) +
         lVar11;
}



// FUNCTION 1425f7a00 FUN_1425f7a00 body=407 status=ok
// SIG undefined FUN_1425f7a00(void)

ulonglong FUN_1425f7a00(longlong param_1,int param_2,undefined8 *param_3,int *param_4)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar1 = 0;
  if (*param_4 < 1) {
    iVar2 = *(int *)(param_1 + 0x220);
    if ((longlong)iVar2 != 0) {
      puVar3 = (ulonglong *)(param_1 + (longlong)iVar2 * 8 + 0x120);
      do {
        iVar2 = iVar2 + -1;
        uVar6 = *puVar3;
        uVar5 = (int)uVar6 + 0xba000000;
        if (uVar5 < 0xc0000000) {
          iVar4 = 0;
          if (((uVar6 >> 0x38 == 0) && (iVar4 = 1, (char)(uVar6 >> 0x18) == '\0')) &&
             (iVar4 = 2, uVar6 == 0)) {
            iVar4 = 0xf;
          }
          if (iVar4 <= param_2) {
            if (0xbfffffff < uVar5) {
LAB_1425f7b5e:
              uVar5 = (uint)(uVar6 + 0xbfbffffff9ffe000 >> 0x20);
              return (ulonglong)
                     ((uint)(uVar6 + 0xbfbffffff9ffe000 >> 0x18) & 0x3f |
                     uVar5 >> 10 & 0x1fc0 | uVar5 >> 0xb & 0xfe000);
            }
            if ((char)(uVar6 >> 0x38) == -2) {
              *param_4 = 0x10;
              *param_3 = "tailoring relative to an unassigned code point not supported";
              return 0;
            }
            goto LAB_1425f7afd;
          }
        }
        else if ((int)((uint)(uVar6 >> 8) & 3) <= param_2) goto LAB_1425f7b5e;
        *(int *)(param_1 + 0x220) = iVar2;
        puVar3 = puVar3 + -1;
      } while (iVar2 != 0);
    }
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x220) = 1;
    uVar6 = 0;
LAB_1425f7afd:
    if ((*param_4 < 1) && (uVar1 = FUN_1425f7bb0(param_1,uVar6 >> 0x20,param_4), 0 < param_2)) {
      uVar1 = FUN_1425f7fc0(param_1,uVar1 & 0xffffffff,uVar6 >> 0x10 & 0xffff,1,param_4);
      if (param_2 != 1) {
        uVar1 = FUN_1425f7fc0(param_1,uVar1 & 0xffffffff,(uint)uVar6 & 0x3f3f,2,param_4);
      }
    }
  }
  return uVar1;
}



// FUNCTION 1425f7bb0 FUN_1425f7bb0 body=305 status=ok
// SIG undefined FUN_1425f7bb0(void)

int FUN_1425f7bb0(longlong param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  if (0 < *param_3) {
    return 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x260);
  uVar1 = *(uint *)(param_1 + 0x230);
  if (uVar1 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x240);
    uVar7 = (int)uVar1 / 2;
    uVar8 = *(uint *)(lVar5 + 4 + (longlong)*(int *)(lVar3 + (longlong)(int)uVar7 * 4) * 8);
    if (uVar8 != param_2) {
      uVar9 = 0;
      uVar10 = uVar1;
      do {
        if (param_2 < uVar8) {
          uVar10 = uVar7;
          if (uVar7 == uVar9) {
            uVar8 = ~uVar7;
            if (-1 < (int)uVar7) goto LAB_1425f7c76;
            goto LAB_1425f7c61;
          }
        }
        else {
          bVar11 = uVar7 == uVar9;
          uVar9 = uVar7;
          if (bVar11) {
            uVar7 = -uVar7 - 2;
            break;
          }
        }
        uVar7 = (int)(uVar9 + uVar10) / 2;
        uVar8 = *(uint *)(lVar5 + 4 + (longlong)*(int *)(lVar3 + (longlong)(int)uVar7 * 4) * 8);
      } while (uVar8 != param_2);
    }
    uVar8 = uVar7;
    if (-1 < (int)uVar7) {
LAB_1425f7c61:
      if ((int)uVar1 < 1) {
        return 0;
      }
      if ((int)uVar1 <= (int)uVar8) {
        return 0;
      }
      return *(int *)(lVar3 + (ulonglong)uVar8 * 4);
    }
  }
LAB_1425f7c76:
  iVar2 = *(int *)(param_1 + 0x250);
  if ((iVar2 < -1) || (iVar6 = iVar2, *(int *)(param_1 + 0x254) <= iVar2)) {
    cVar4 = FUN_14250e240(param_1 + 0x248,iVar2 + 1,param_3);
    if (cVar4 == '\0') goto LAB_1425f7cc6;
    iVar6 = *(int *)(param_1 + 0x250);
    lVar5 = *(longlong *)(param_1 + 0x260);
  }
  *(ulonglong *)(lVar5 + (longlong)iVar6 * 8) = (ulonglong)param_2 << 0x20;
  *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
LAB_1425f7cc6:
  FUN_142518160(param_1 + 0x228,iVar2,~uVar8,param_3);
  return iVar2;
}



// FUNCTION 1425f7cf0 FUN_1425f7cf0 body=176 status=ok
// SIG undefined FUN_1425f7cf0(void)

void FUN_1425f7cf0(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x250);
  if ((-1 < (int)param_2) && ((int)param_2 < iVar1)) {
    uVar3 = (uint)*(undefined8 *)(*(longlong *)(param_1 + 0x260) + (ulonglong)param_2 * 8);
  }
  if ((int)(uVar3 & 3) < param_3) {
    if (param_3 == 1) {
      uVar2 = uVar3 & 0x40;
    }
    else {
      uVar2 = uVar3 & 0x20;
    }
    if (uVar2 != 0) {
      uVar3 = uVar3 >> 8 & 0xfffff;
      if ((int)uVar3 < iVar1) {
        uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + (ulonglong)uVar3 * 8);
      }
      else {
        uVar4 = 0;
      }
      do {
        do {
          uVar3 = (uint)(uVar4 >> 8) & 0xfffff;
          uVar4 = 0;
        } while (iVar1 <= (int)uVar3);
        uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + (ulonglong)uVar3 * 8);
      } while ((((uVar4 & 8) != 0) || (param_3 < (int)((uint)uVar4 & 3))) ||
              ((ushort)(uVar4 >> 0x30) < 0x500));
    }
  }
  return;
}



// FUNCTION 1425f7da0 FUN_1425f7da0 body=235 status=ok
// SIG undefined FUN_1425f7da0(void)

undefined8 FUN_1425f7da0(longlong param_1,undefined8 param_2,ulonglong param_3,int param_4)

{
  undefined2 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = (uint)param_3 & 3;
  uVar1 = 0x500;
  if (uVar3 == 2) {
    uVar1 = (undefined2)(param_3 >> 0x30);
  }
  if (1 < uVar3) {
    do {
      uVar3 = (uint)(param_3 >> 0x1c);
      if (*(int *)(param_1 + 0x250) <= (int)(uVar3 & 0xfffff)) {
        uVar4 = 0x500;
        goto LAB_1425f7e65;
      }
      param_3 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + (ulonglong)(uVar3 & 0xfffff) * 8);
      uVar3 = (uint)param_3 & 3;
    } while (1 < uVar3);
  }
  if ((param_3 & 8) == 0) {
    uVar4 = 0x500;
    if (uVar3 == 1) {
      uVar4 = param_3 >> 0x30;
    }
    if ((param_3 & 3) != 0) {
      do {
        uVar3 = (uint)(param_3 >> 0x1c);
        if (*(int *)(param_1 + 0x250) <= (int)(uVar3 & 0xfffff)) goto LAB_1425f7e65;
        param_3 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + (ulonglong)(uVar3 & 0xfffff) * 8);
      } while ((param_3 & 3) != 0);
    }
    if ((param_3 & 8) == 0) goto LAB_1425f7e68;
  }
  return 0x100;
LAB_1425f7e65:
  param_3 = 0;
LAB_1425f7e68:
  if (param_4 == 1) {
    uVar2 = FUN_1426c14d0();
    return uVar2;
  }
  uVar2 = FUN_1426c15d0(param_1 + 0x30,param_3 >> 0x20,uVar4,uVar1);
  return uVar2;
}



// FUNCTION 1425f7e90 FUN_1425f7e90 body=293 status=ok
// SIG undefined FUN_1425f7e90(void)

int FUN_1425f7e90(longlong param_1,uint param_2,uint param_3,ulonglong param_4,int *param_5)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (0 < *param_5) {
    return 0;
  }
  lVar1 = param_1 + 0x248;
  iVar2 = *(int *)(param_1 + 0x250);
  if (((longlong)iVar2 < -1) || (iVar4 = iVar2, *(int *)(param_1 + 0x254) <= iVar2)) {
    cVar3 = FUN_14250e240(lVar1,iVar2 + 1,param_5);
    if (cVar3 == '\0') goto LAB_1425f7f21;
    iVar4 = *(int *)(param_1 + 0x250);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x260) + (longlong)iVar4 * 8) =
       (longlong)(int)param_2 << 0x1c | param_4 | (longlong)(int)(param_3 << 8);
  *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
LAB_1425f7f21:
  iVar4 = 0;
  if (*param_5 < 1) {
    uVar5 = 0;
    if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x250))) {
      uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + (ulonglong)param_2 * 8) &
              0xfffffffff00000ff;
    }
    FUN_14250e0c0(lVar1,(longlong)(iVar2 << 8) | uVar5,param_2);
    iVar4 = iVar2;
    if (param_3 != 0) {
      uVar5 = 0;
      if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x250))) {
        uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + (ulonglong)param_3 * 8) &
                0xffff00000fffffff;
      }
      FUN_14250e0c0(lVar1,(longlong)iVar2 << 0x1c | uVar5,param_3);
    }
  }
  return iVar4;
}



// FUNCTION 1425f7fc0 FUN_1425f7fc0 body=585 status=ok
// SIG undefined FUN_1425f7fc0(void)

ulonglong FUN_1425f7fc0(longlong param_1,uint param_2,longlong param_3,int param_4,int *param_5)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar1 = 0;
  if (*param_5 < 1) {
    uVar2 = (uint)param_3;
    uVar1 = (ulonglong)param_2;
    if (uVar2 == 0x500) {
      uVar4 = 0;
      iVar7 = *(int *)(param_1 + 0x250);
      if ((-1 < (int)param_2) && ((int)param_2 < iVar7)) {
        uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + (ulonglong)param_2 * 8);
      }
      if ((int)((uint)uVar4 & 3) < param_4) {
        if (param_4 == 1) {
          uVar3 = uVar4 & 0x40;
        }
        else {
          uVar3 = uVar4 & 0x20;
        }
        if (uVar3 != 0) {
          uVar2 = (uint)uVar4 >> 8 & 0xfffff;
          if ((int)uVar2 < iVar7) {
            uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + (ulonglong)uVar2 * 8);
          }
          else {
            uVar4 = 0;
          }
          do {
            do {
              uVar2 = (uint)(uVar4 >> 8) & 0xfffff;
              uVar1 = (ulonglong)uVar2;
              uVar4 = 0;
            } while (iVar7 <= (int)uVar2);
            uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + uVar1 * 8);
          } while ((((uVar4 & 8) != 0) || (param_4 < (int)((uint)uVar4 & 3))) ||
                  ((ushort)(uVar4 >> 0x30) < 0x500));
        }
      }
    }
    else {
      uVar4 = 0;
      if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x250))) {
        uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + uVar1 * 8);
      }
      if (uVar2 - 1 < 0x4ff) {
        uVar3 = (ulonglong)(param_4 == 1) * 0x20 + 0x20;
        if (((uint)uVar4 & (uint)uVar3) == 0) {
          uVar8 = (ulonglong)((uint)uVar4 & 0x20);
          uVar9 = uVar4 & 0xffffffffffffffdf;
          if (param_4 != 1) {
            uVar9 = uVar4;
            uVar8 = 0;
          }
          FUN_14250e0c0(param_1 + 0x248,uVar3 | uVar9,uVar1);
          uVar5 = (uint)(uVar9 >> 8) & 0xfffff;
          uVar2 = FUN_1425f7e90(param_1,uVar1,uVar5,param_3 << 0x30 | (longlong)param_4,param_5);
          FUN_1425f7e90(param_1,uVar2,uVar5,(longlong)param_4 | 0x500000000000000U | uVar8,param_5);
          return (ulonglong)uVar2;
        }
      }
      uVar3 = uVar1;
      do {
        uVar5 = (uint)(uVar4 >> 8) & 0xfffff;
        uVar1 = (ulonglong)uVar5;
        if ((uVar4 >> 8 & 0xfffff) == 0) goto LAB_1425f80f4;
        if ((int)uVar5 < *(int *)(param_1 + 0x250)) {
          uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x260) + (ulonglong)uVar5 * 8);
        }
        else {
          uVar4 = 0;
        }
        uVar6 = (uint)uVar4 & 3;
        if (param_4 < (int)uVar6) {
LAB_1425f80e0:
          iVar7 = 0;
          uVar3 = (ulonglong)uVar5;
        }
        else {
          if ((int)uVar6 < param_4) goto LAB_1425f80f4;
          if ((uVar4 & 8) != 0) goto LAB_1425f80e0;
          uVar6 = (uint)(ushort)(uVar4 >> 0x30);
          if (uVar6 == uVar2) {
            return uVar1;
          }
          iVar7 = 3;
          if (uVar6 <= uVar2) goto LAB_1425f80e0;
        }
      } while (iVar7 == 0);
      if (iVar7 == 3) {
LAB_1425f80f4:
        uVar1 = FUN_1425f7e90(param_1,uVar3,uVar5,(longlong)param_4 | param_3 << 0x30);
        return uVar1;
      }
    }
  }
  return uVar1;
}



// FUNCTION 1425f8210 FUN_1425f8210 body=1108 status=ok
// SIG undefined FUN_1425f8210(void)

void FUN_1425f8210(longlong param_1,uint param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,undefined8 *param_6,int *param_7)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined **local_110;
  undefined2 local_108;
  undefined **local_d0;
  undefined2 local_c8;
  undefined **local_90;
  short local_88;
  ushort local_86;
  int local_84;
  ushort *local_78;
  bool local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_7) {
    return;
  }
  local_110 = &PTR_FUN_149e18960;
  local_108 = 2;
  if ((0x1f < *(ushort *)(param_3 + 8)) &&
     ((**(code **)(**(longlong **)(param_1 + 8) + 0x10))
                (*(longlong **)(param_1 + 8),param_3,&local_110,param_7), 0 < *param_7)) {
    *param_6 = "normalizing the relation prefix";
    goto LAB_1425f82d4;
  }
  local_90 = &PTR_FUN_149e18960;
  local_88 = 2;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
            (*(longlong **)(param_1 + 8),param_4,&local_90,param_7);
  if (0 < *param_7) {
    pcVar7 = "normalizing the relation string";
    goto LAB_1425f82c1;
  }
  if (local_88 < 0) {
    if (local_84 < 2) goto LAB_1425f8379;
LAB_1425f830f:
    if (((int)local_88 & 2U) != 0) {
      local_78 = &local_86;
    }
    if ((*local_78 - 0x1113 < 0xffffffed) && (*local_78 - 0x1176 < 0xffffffeb)) {
      if ((local_78[local_84 - 1] - 0x1113 < 0xffffffed) &&
         ((local_78[local_84 - 1] - 0x1176 < 0xffffffeb ||
          (local_78[local_84 - 2] - 0x1113 < 0xffffffed)))) goto LAB_1425f8379;
      *param_7 = 0x10;
      pcVar7 = "contractions ending with conjoining Jamo L or L+V not supported";
    }
    else {
      *param_7 = 0x10;
      pcVar7 = "contractions starting with conjoining Jamo L or V not supported";
    }
    goto LAB_1425f82c1;
  }
  local_84 = (int)local_88 >> 5;
  if (1 < local_84) goto LAB_1425f830f;
LAB_1425f8379:
  if (param_2 == 0xf) {
LAB_1425f837f:
    FUN_1425f8980(param_1,&local_90,param_6,param_7);
    if (*param_7 < 1) {
      uVar3 = *(undefined4 *)(param_1 + 0x220);
      if (*(ushort *)(param_5 + 8) < 0x20) {
LAB_1425f8595:
        cVar2 = FUN_1425dd580(param_3,&local_110);
        if (cVar2 == '\0') {
          cVar2 = FUN_1425dd580(param_4,&local_90);
          uVar6 = 0xffffffff;
          if (cVar2 != '\0') goto LAB_1425f85c3;
        }
        else {
LAB_1425f85c3:
          uVar6 = 0xffffffff;
          if (((*param_7 < 1) &&
              (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
                                 (*(longlong **)(param_1 + 0x10),param_3,param_7), cVar2 != '\0'))
             && (cVar2 = FUN_1425f8d00(param_1,param_4,param_7), cVar2 == '\0')) {
            uVar6 = FUN_1425f8d70(param_1,param_3,param_4,param_1 + 0x128,
                                  *(undefined4 *)(param_1 + 0x220),0xffffffff,param_7);
          }
        }
        FUN_1425f8e70(param_1,&local_110,&local_90,param_1 + 0x128,*(undefined4 *)(param_1 + 0x220),
                      uVar6,param_7);
        if (0 < *param_7) {
          pcVar7 = "writing collation elements";
          goto LAB_1425f82c1;
        }
        *(undefined4 *)(param_1 + 0x220) = uVar3;
      }
      else {
        local_d0 = &PTR_FUN_149e18960;
        local_c8 = 2;
        (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
                  (*(longlong **)(param_1 + 8),param_5,&local_d0,param_7);
        if (*param_7 < 1) {
          iVar5 = FUN_1426bf7e0(*(undefined8 *)(param_1 + 0x48),&local_d0,param_1 + 0x128,
                                *(undefined4 *)(param_1 + 0x220));
          *(int *)(param_1 + 0x220) = iVar5;
          if (iVar5 < 0x20) {
            FUN_140859a90(&local_d0);
            goto LAB_1425f8595;
          }
          *param_7 = 1;
          pcVar7 = "extension string adds too many collation elements (more than 31 total)";
        }
        else {
          pcVar7 = "normalizing the relation extension";
        }
        *param_6 = pcVar7;
        FUN_140859a90(&local_d0);
      }
    }
  }
  else {
    uVar3 = FUN_1425f7a00(param_1,param_2,param_6,param_7);
    uVar1 = *(ulonglong *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x220) * 8);
    if (param_2 == 0) {
      if ((0xbfffffff < (int)uVar1 + 0xba000000U) || (uVar1 >> 0x20 != 0)) goto LAB_1425f8487;
      *param_7 = 0x10;
      pcVar7 = "tailoring primary after ignorables not supported";
    }
    else if ((param_2 == 3) && (uVar1 == 0)) {
      *param_7 = 0x10;
      pcVar7 = "tailoring quaternary after tertiary ignorables not supported";
      local_49 = true;
    }
    else {
LAB_1425f8487:
      local_49 = uVar1 == 0;
      uVar4 = FUN_1425f87b0(param_1,uVar3,param_2,param_7);
      if (*param_7 < 1) {
        if ((int)uVar1 + 0xba000000U < 0xc0000000) {
          uVar8 = 0;
          if (uVar1 >> 0x38 == 0) {
            uVar9 = 2;
            if (local_49 != false) {
              uVar9 = 0xf;
            }
            uVar8 = 1;
            if ((char)(uVar1 >> 0x18) == '\0') {
              uVar8 = uVar9;
            }
          }
        }
        else {
          uVar8 = (uint)(uVar1 >> 8) & 3;
        }
        if ((int)uVar8 < (int)param_2) {
          param_2 = uVar8;
        }
        *(ulonglong *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x220) * 8) =
             ((ulonglong)((uVar4 & 0x3f) << 0x18) |
             (ulonglong)(uVar4 & 0x1fc0) << 0x2a | (ulonglong)(uVar4 & 0xfe000) << 0x2b) +
             0x4040000006002000 + (longlong)(int)(param_2 << 8);
        goto LAB_1425f837f;
      }
      pcVar7 = "modifying collation elements";
    }
LAB_1425f82c1:
    *param_6 = pcVar7;
  }
  FUN_140859a90(&local_90);
LAB_1425f82d4:
  FUN_140859a90(&local_110);
  return;
}



// FUNCTION 1425f8670 Unwind@1425f8670 body=55 status=ok
// SIG undefined Unwind@1425f8670(void)

void Unwind_1425f8670(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb8);
  return;
}



// FUNCTION 1425f86b0 Unwind@1425f86b0 body=55 status=ok
// SIG undefined Unwind@1425f86b0(void)

void Unwind_1425f86b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 1425f86f0 Unwind@1425f86f0 body=55 status=ok
// SIG undefined Unwind@1425f86f0(void)

void Unwind_1425f86f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb8);
  return;
}



// FUNCTION 1425f8730 Unwind@1425f8730 body=55 status=ok
// SIG undefined Unwind@1425f8730(void)

void Unwind_1425f8730(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1425f8770 Unwind@1425f8770 body=55 status=ok
// SIG undefined Unwind@1425f8770(void)

void Unwind_1425f8770(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 1425f87b0 FUN_1425f87b0 body=459 status=ok
// SIG undefined FUN_1425f87b0(void)

undefined8 FUN_1425f87b0(longlong param_1,ulonglong param_2,uint param_3,int *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (*param_4 < 1) {
    if ((int)param_3 < 1) {
      iVar4 = *(int *)(param_1 + 0x250);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x250);
      if ((-1 < (int)param_2) && ((int)param_2 < iVar4)) {
        lVar1 = *(longlong *)(param_1 + 0x260);
        uVar6 = *(ulonglong *)(lVar1 + (param_2 & 0xffffffff) * 8);
        if (((uVar6 & 0x40) != 0) && ((uVar6 & 3) == 0)) {
          uVar5 = (uint)uVar6 >> 8 & 0xfffff;
          if ((int)uVar5 < iVar4) {
            uVar6 = *(ulonglong *)(lVar1 + (ulonglong)uVar5 * 8);
          }
          else {
            uVar6 = 0;
          }
          do {
            do {
              uVar5 = (uint)(uVar6 >> 8) & 0xfffff;
              param_2 = (ulonglong)uVar5;
              uVar6 = 0;
            } while (iVar4 <= (int)uVar5);
            uVar6 = *(ulonglong *)(lVar1 + (ulonglong)uVar5 * 8);
          } while ((((uVar6 & 8) != 0) || ((uVar6 & 2) != 0)) || ((ushort)(uVar6 >> 0x30) < 0x500));
        }
      }
      if (((param_3 != 1) && (-1 < (int)param_2)) && ((int)param_2 < iVar4)) {
        lVar1 = *(longlong *)(param_1 + 0x260);
        uVar6 = *(ulonglong *)(lVar1 + (param_2 & 0xffffffff) * 8);
        if (((uVar6 & 0x20) != 0) && ((uVar6 & 2) == 0)) {
          uVar5 = (uint)uVar6 >> 8 & 0xfffff;
          if ((int)uVar5 < iVar4) {
            uVar6 = *(ulonglong *)(lVar1 + (ulonglong)uVar5 * 8);
          }
          else {
            uVar6 = 0;
          }
          do {
            do {
              uVar5 = (uint)(uVar6 >> 8) & 0xfffff;
              param_2 = (ulonglong)uVar5;
              uVar6 = 0;
            } while (iVar4 <= (int)uVar5);
            uVar6 = *(ulonglong *)(lVar1 + (ulonglong)uVar5 * 8);
          } while ((((uVar6 & 8) != 0) || ((~(uint)uVar6 & 3) == 0)) ||
                  ((ushort)(uVar6 >> 0x30) < 0x500));
        }
      }
    }
    uVar5 = 0;
    if (((-1 < (int)param_2) && ((int)param_2 < iVar4)) &&
       (uVar3 = *(uint *)(*(longlong *)(param_1 + 0x260) + (param_2 & 0xffffffff) * 8) >> 8 &
                0xfffff, uVar3 != 0)) {
      do {
        uVar5 = uVar3;
        if ((int)uVar5 < iVar4) {
          uVar3 = (uint)*(undefined8 *)(*(longlong *)(param_1 + 0x260) + (ulonglong)uVar5 * 8);
        }
        else {
          uVar3 = 0;
        }
        if ((int)(uVar3 & 3) <= (int)param_3) goto LAB_1425f895d;
        uVar3 = uVar3 >> 8 & 0xfffff;
        param_2 = (ulonglong)uVar5;
      } while (uVar3 != 0);
      param_2 = (ulonglong)uVar5;
      uVar5 = 0;
    }
LAB_1425f895d:
    uVar2 = FUN_1425f7e90(param_1,param_2,uVar5,(longlong)(int)(param_3 | 8),param_4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1425f8980 FUN_1425f8980 body=793 status=ok
// SIG undefined FUN_1425f8980(void)

void FUN_1425f8980(longlong param_1,longlong param_2,undefined8 *param_3,int *param_4)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  bool bVar12;
  undefined **local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined4 local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined1 local_1a0 [320];
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (0 < *param_4) {
    return;
  }
  uVar7 = *(uint *)(param_1 + 0x220);
  if ((int)uVar7 < 1) {
    return;
  }
  if (uVar7 == 1) {
    uVar10 = 0;
    iVar11 = 0;
  }
  else {
    uVar10 = 0;
    iVar11 = 0;
    do {
      uVar3 = *(ulonglong *)(param_1 + 0x128 + uVar10 * 8);
      if ((int)uVar3 + 0xba000000U < 0xc0000000) {
        if (uVar3 >> 0x38 != 0) {
LAB_1425f8a5a:
          iVar11 = iVar11 + 1;
        }
      }
      else if ((uVar3 & 0x300) == 0) goto LAB_1425f8a5a;
      uVar3 = *(ulonglong *)(param_1 + 0x130 + uVar10 * 8);
      if ((int)uVar3 + 0xba000000U < 0xc0000000) {
        if (uVar3 >> 0x38 != 0) {
LAB_1425f8a30:
          iVar11 = iVar11 + 1;
        }
      }
      else if ((uVar3 & 0x300) == 0) goto LAB_1425f8a30;
      uVar10 = uVar10 + 2;
    } while ((uVar7 & 0xfffffffe) != uVar10);
  }
  if ((uVar7 & 1) != 0) {
    uVar10 = *(ulonglong *)(param_1 + 0x128 + uVar10 * 8);
    if ((int)uVar10 + 0xba000000U < 0xc0000000) {
      if (uVar10 >> 0x38 != 0) {
LAB_1425f89f7:
        iVar11 = iVar11 + 1;
      }
    }
    else if ((uVar10 & 0x300) == 0) goto LAB_1425f89f7;
  }
  if (iVar11 < 1) {
    uVar10 = 0;
    goto joined_r0x0001425f8a9f;
  }
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) != 0) {
      local_48 = param_2 + 10;
      goto joined_r0x0001425f8ad7;
    }
    local_48 = *(longlong *)(param_2 + 0x18);
    if ((short)uVar1 < 0) goto LAB_1425f8ad9;
LAB_1425f8ac8:
    iVar2 = (int)(short)uVar1 >> 5;
  }
  else {
    local_48 = 0;
joined_r0x0001425f8ad7:
    if (-1 < (short)uVar1) goto LAB_1425f8ac8;
LAB_1425f8ad9:
    iVar2 = *(int *)(param_2 + 0xc);
  }
  local_38 = local_48 + (longlong)iVar2 * 2;
  local_1c0 = *(undefined8 **)(param_1 + 0x28);
  local_1c8 = *local_1c0;
  local_1b8 = 0;
  local_1b0 = local_1a0;
  local_1a8 = 0x28;
  local_1a4 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0xffffffff;
  local_4c = 0;
  local_1d0 = icu_64::UTF16CollationIterator::vftable;
  local_40 = local_48;
  iVar2 = FUN_142619300();
  if (0 < *param_4) {
    *param_3 = "fetching root CEs for tailored string";
    thunk_FUN_1426191b0(&local_1d0);
    return;
  }
  if (iVar2 < 2) {
    uVar3 = 0;
    uVar7 = 0;
    iVar9 = 0;
  }
  else {
    uVar10 = 0;
    uVar3 = 0;
    iVar8 = 0;
    uVar6 = 0;
    do {
      uVar7 = uVar6;
      if (*(ulonglong *)(local_1b0 + uVar10 * 8) >> 0x20 != 0) {
        iVar9 = iVar8 + 1;
        uVar7 = (uint)(*(ulonglong *)(local_1b0 + uVar10 * 8) >> 0xe) & 3;
        if (iVar9 < iVar11) {
          uVar3 = uVar3 | (ulonglong)uVar7 << ((char)iVar8 * '\x02' & 0x3fU);
          iVar8 = iVar9;
          uVar7 = uVar6;
        }
        else {
          iVar8 = iVar11;
          if ((iVar9 != iVar11) && (bVar12 = uVar7 != uVar6, iVar8 = iVar9, uVar7 = uVar6, bVar12))
          {
            uVar7 = 1;
            break;
          }
        }
      }
      uVar10 = uVar10 + 1;
      iVar9 = iVar8;
      uVar6 = uVar7;
    } while (iVar2 - 1 != uVar10);
  }
  uVar10 = 0;
  if (iVar11 <= iVar9) {
    uVar10 = (ulonglong)uVar7 << ((char)iVar11 * '\x02' - 2U & 0x3f);
  }
  uVar10 = uVar10 | uVar3;
  thunk_FUN_1426191b0(&local_1d0);
  uVar7 = *(uint *)(param_1 + 0x220);
joined_r0x0001425f8a9f:
  if (0 < (int)uVar7) {
    lVar4 = 0;
    do {
      uVar3 = *(ulonglong *)(param_1 + 0x128 + lVar4 * 8);
      uVar5 = uVar3 & 0xffffffffffff3fff;
      if ((int)uVar5 + 0xba000000U < 0xc0000000) {
        if (uVar3 >> 0x38 == 0) {
          if ((char)(uVar3 >> 0x18) == '\0') {
            if (uVar5 != 0) goto LAB_1425f8cc0;
            uVar5 = 0;
          }
        }
        else {
LAB_1425f8c30:
          uVar5 = uVar5 | ((uint)uVar10 & 3) << 0xe;
          uVar10 = (longlong)uVar10 >> 2;
        }
      }
      else if (((uint)(uVar3 >> 8) & 3) == 2) {
LAB_1425f8cc0:
        uVar5 = uVar5 | 0x8000;
      }
      else if ((uVar3 & 0x300) == 0) goto LAB_1425f8c30;
      *(ulonglong *)(param_1 + 0x128 + lVar4 * 8) = uVar5;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x220));
  }
  return;
}



// FUNCTION 1425f8cd0 Unwind@1425f8cd0 body=43 status=ok
// SIG undefined Unwind@1425f8cd0(void)

void Unwind_1425f8cd0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1426191b0(param_2 + 0x28);
  return;
}



// FUNCTION 1425f8d00 FUN_1425f8d00 body=103 status=ok
// SIG undefined FUN_1425f8d00(void)

ulonglong FUN_1425f8d00(longlong param_1,longlong param_2,int *param_3)

{
  ushort uVar1;
  char cVar2;
  ushort *puVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  undefined7 uVar5;
  
  uVar5 = (undefined7)((ulonglong)unaff_RDI >> 8);
  uVar4 = CONCAT71(uVar5,1);
  if (0 < *param_3) goto LAB_1425f8d0f;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))();
  if (cVar2 == '\0') goto LAB_1425f8d0f;
  uVar1 = *(ushort *)(param_2 + 8);
  if ((short)uVar1 < 0) {
    if (*(int *)(param_2 + 0xc) == 0) {
LAB_1425f8d4c:
      uVar4 = 0;
      goto LAB_1425f8d0f;
    }
  }
  else if ((short)uVar1 >> 5 == 0) goto LAB_1425f8d4c;
  if ((uVar1 & 2) == 0) {
    puVar3 = *(ushort **)(param_2 + 0x18);
  }
  else {
    puVar3 = (ushort *)(param_2 + 10);
  }
  uVar4 = CONCAT71(uVar5,*puVar3 - 0xac00 < 0x2ba4);
LAB_1425f8d0f:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1425f8d70 FUN_1425f8d70 body=221 status=ok
// SIG undefined FUN_1425f8d70(void)

void FUN_1425f8d70(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  uint param_5,int param_6,int *param_7)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_168 [32];
  int *local_148;
  longlong local_138 [31];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*param_7 < 1) {
    local_148 = (int *)((ulonglong)local_148 & 0xffffffff00000000);
    uVar2 = FUN_1426bfb90(*(undefined8 *)(param_1 + 0x48),param_2,param_3,local_138);
    if (uVar2 == param_5) {
      if ((int)param_5 < 1) goto LAB_1425f8e3d;
      if (*param_4 == local_138[0]) {
        uVar1 = 1;
        do {
          uVar3 = uVar1;
          if (param_5 == uVar3) break;
          uVar1 = uVar3 + 1;
        } while (param_4[uVar3] == local_138[uVar3]);
        if (param_5 <= uVar3) goto LAB_1425f8e3d;
      }
    }
    if (param_6 == -1) {
      param_6 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))
                          (*(longlong **)(param_1 + 0x48),param_4,param_5,param_7);
    }
    local_148 = param_7;
    FUN_1426bcf00(*(undefined8 *)(param_1 + 0x48),param_2,param_3,param_6);
  }
LAB_1425f8e3d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_168);
}



// FUNCTION 1425f8e70 FUN_1425f8e70 body=290 status=ok
// SIG undefined FUN_1425f8e70(void)

void FUN_1425f8e70(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  uint param_5,int param_6,int *param_7)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_178 [32];
  int *local_158;
  int local_150;
  int *local_148;
  longlong local_138;
  longlong alStack_130 [30];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*param_7 < 1) {
    local_158 = (int *)((ulonglong)local_158 & 0xffffffff00000000);
    uVar4 = FUN_1426bfb90(*(undefined8 *)(param_1 + 0x48),param_2,param_3,&local_138);
    if (uVar4 == param_5) {
      if ((int)param_5 < 1) goto LAB_1425f8f50;
      if (*param_4 == local_138) {
        uVar5 = 0;
        do {
          if ((ulonglong)param_5 - 1 == uVar5) goto LAB_1425f8f50;
          lVar3 = uVar5 + 1;
          uVar1 = uVar5 + 1;
          plVar2 = alStack_130 + uVar5;
          uVar5 = uVar1;
        } while (param_4[lVar3] == *plVar2);
        if (param_5 <= uVar1) goto LAB_1425f8f50;
      }
    }
    if (param_6 == -1) {
      param_6 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))
                          (*(longlong **)(param_1 + 0x48),param_4,param_5,param_7);
    }
    local_158 = param_7;
    FUN_1426bcf00(*(undefined8 *)(param_1 + 0x48),param_2,param_3,param_6);
  }
LAB_1425f8f50:
  local_148 = param_7;
  local_158 = (int *)CONCAT44(local_158._4_4_,param_5);
  local_150 = param_6;
  FUN_1425f9000(param_1,param_2,param_3,param_4);
  FUN_1425f97b0(param_1,param_2,param_3,param_7);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_178);
}



// FUNCTION 1425f8fb0 FUN_1425f8fb0 body=52 status=ok
// SIG undefined FUN_1425f8fb0(void)

void FUN_1425f8fb0(longlong param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  if (*param_4 < 1) {
    FUN_1426be7d0(*(undefined8 *)(param_1 + 0x48),param_2,param_4);
    if (0 < *param_4) {
      *param_3 = "application of [suppressContractions [set]] failed";
    }
  }
  return;
}



// FUNCTION 1425f8ff0 FUN_1425f8ff0 body=16 status=ok
// SIG undefined FUN_1425f8ff0(void)

void FUN_1425f8ff0(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  if (0 < *param_4) {
    return;
  }
  FUN_142513300(param_1 + 0x58);
  return;
}



// FUNCTION 1425f9000 FUN_1425f9000 body=1556 status=ok
// SIG undefined FUN_1425f9000(void)

int FUN_1425f9000(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,uint param_5,
                 int param_6,int *param_7)

{
  ulonglong uVar1;
  longlong *plVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ushort *puVar11;
  bool bVar12;
  int *in_stack_fffffffffffffc78;
  longlong local_378;
  longlong alStack_370 [31];
  undefined1 local_278 [200];
  undefined **local_1b0;
  undefined2 local_1a8;
  undefined1 local_e8 [8];
  ushort local_e0;
  ushort local_de;
  int local_dc;
  ushort *local_d0;
  undefined1 local_a8 [8];
  ushort local_a0;
  ushort local_9e;
  int local_9c;
  ushort *local_90;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*param_7 < 1) {
    local_4c = param_6;
    if (*(ushort *)(param_2 + 8) < 0x20) {
      FUN_1426c18a0(local_278,param_3,param_7);
      if (*param_7 < 1) {
        local_1b0 = &PTR_FUN_149e18960;
        local_1a8 = 2;
        local_68 = (ulonglong)param_5 - 1;
        local_58 = param_3;
        while (FUN_1426c1f10(local_278,local_a8), (local_a0 & 1) == 0) {
          if ((*param_7 < 1) &&
             (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
                                (*(longlong **)(param_1 + 0x10),local_a8,param_7), cVar7 != '\0')) {
            iVar5 = local_9c;
            if (-1 < (short)local_a0) {
              iVar5 = (int)(short)local_a0 >> 5;
            }
            if (iVar5 != 0) {
              puVar11 = &local_9e;
              if ((local_a0 & 2) == 0) {
                puVar11 = local_90;
              }
              if (0xffffd45b < *puVar11 - 0xd7a4) goto LAB_1425f9110;
            }
            uVar4 = *(ushort *)(local_58 + 8);
            if ((local_a0 & 1) == 0) {
              if ((short)uVar4 < 0) {
                iVar8 = *(int *)(local_58 + 0xc);
              }
              else {
                iVar8 = (int)(short)uVar4 >> 5;
              }
              if ((((uVar4 & 1) != 0) || (iVar5 != iVar8)) ||
                 (cVar7 = FUN_1412ae090(local_a8,local_58), cVar7 == '\0')) {
LAB_1425f91ed:
                if (0 < *param_7) break;
                in_stack_fffffffffffffc78 =
                     (int *)((ulonglong)in_stack_fffffffffffffc78 & 0xffffffff00000000);
                uVar9 = FUN_1426bfb90(*(undefined8 *)(param_1 + 0x48),&local_1b0,local_a8,&local_378
                                      ,in_stack_fffffffffffffc78);
                if (uVar9 == param_5) {
                  if (0 < (int)param_5) {
                    if (*param_4 == local_378) {
                      uVar10 = 0;
                      do {
                        if (local_68 == uVar10) goto LAB_1425f92ad;
                        lVar6 = uVar10 + 1;
                        uVar1 = uVar10 + 1;
                        plVar2 = alStack_370 + uVar10;
                        uVar10 = uVar1;
                      } while (param_4[lVar6] == *plVar2);
                      if (param_5 <= uVar1) goto LAB_1425f92ad;
                    }
                    goto LAB_1425f9267;
                  }
                }
                else {
LAB_1425f9267:
                  if (local_4c == -1) {
                    local_4c = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))
                                         (*(longlong **)(param_1 + 0x48),param_4,param_5,param_7);
                  }
                  in_stack_fffffffffffffc78 = param_7;
                  FUN_1426bcf00(*(undefined8 *)(param_1 + 0x48),&local_1b0,local_a8,local_4c,param_7
                               );
                }
LAB_1425f92ad:
                if (0 < *param_7) break;
              }
            }
            else if ((uVar4 & 1) == 0) goto LAB_1425f91ed;
          }
LAB_1425f9110:
          FUN_140859a90(local_a8);
        }
        FUN_140859a90(local_a8);
        FUN_140859a90(&local_1b0);
        FUN_1426c1dd0(local_278);
        param_6 = local_4c;
      }
      else {
        FUN_1426c1dd0(local_278);
      }
    }
    else {
      FUN_1426c18a0(local_278,param_2,param_7);
      FUN_1426c18a0(&local_1b0,param_3,param_7);
      if (*param_7 < 1) {
        local_68 = (ulonglong)param_5 - 1;
        local_60 = param_2;
        local_58 = param_3;
        while (FUN_1426c1f10(local_278,local_a8), (local_a0 & 1) == 0) {
          if ((*param_7 < 1) &&
             (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
                                (*(longlong **)(param_1 + 0x10),local_a8,param_7), cVar7 != '\0')) {
            if ((local_a0 & 1) == 0) {
              iVar5 = local_9c;
              if (-1 < (short)local_a0) {
                iVar5 = (int)(short)local_a0 >> 5;
              }
              sVar3 = *(short *)(local_60 + 8);
              if (sVar3 < 0) {
                iVar8 = *(int *)(local_60 + 0xc);
              }
              else {
                iVar8 = (int)sVar3 >> 5;
              }
              bVar12 = false;
              if ((((int)sVar3 & 1U) == 0) && (bVar12 = false, iVar5 == iVar8)) {
                cVar7 = FUN_1412ae090(local_a8,local_60);
                bVar12 = cVar7 != '\0';
              }
            }
            else {
              bVar12 = (bool)(*(byte *)(local_60 + 8) & 1);
            }
            while (FUN_1426c1f10(&local_1b0,local_e8), (local_e0 & 1) == 0) {
              if ((0 < *param_7) ||
                 (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
                                    (*(longlong **)(param_1 + 0x10),local_e8,param_7), cVar7 == '\0'
                 )) goto LAB_1425f9420;
              iVar5 = local_dc;
              if (-1 < (short)local_e0) {
                iVar5 = (int)(short)local_e0 >> 5;
              }
              if (iVar5 != 0) {
                puVar11 = &local_de;
                if ((local_e0 & 2) == 0) {
                  puVar11 = local_d0;
                }
                if (0xffffd45b < *puVar11 - 0xd7a4) goto LAB_1425f9420;
              }
              if (bVar12 == false) {
LAB_1425f9529:
                if (*param_7 < 1) {
                  in_stack_fffffffffffffc78 =
                       (int *)((ulonglong)in_stack_fffffffffffffc78 & 0xffffffff00000000);
                  uVar9 = FUN_1426bfb90(*(undefined8 *)(param_1 + 0x48),local_a8,local_e8,&local_378
                                        ,in_stack_fffffffffffffc78);
                  if (uVar9 == param_5) {
                    if (0 < (int)param_5) {
                      if (*param_4 == local_378) {
                        uVar10 = 0;
                        do {
                          if (local_68 == uVar10) goto LAB_1425f940c;
                          lVar6 = uVar10 + 1;
                          uVar1 = uVar10 + 1;
                          plVar2 = alStack_370 + uVar10;
                          uVar10 = uVar1;
                        } while (param_4[lVar6] == *plVar2);
                        if (param_5 <= uVar1) goto LAB_1425f940c;
                      }
                      goto LAB_1425f93e0;
                    }
                  }
                  else {
LAB_1425f93e0:
                    if (local_4c == -1) {
                      local_4c = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))
                                           (*(longlong **)(param_1 + 0x48),param_4,param_5,param_7);
                    }
                    in_stack_fffffffffffffc78 = param_7;
                    FUN_1426bcf00(*(undefined8 *)(param_1 + 0x48),local_a8,local_e8,local_4c,param_7
                                 );
                  }
LAB_1425f940c:
                  if (*param_7 < 1) goto LAB_1425f9420;
                }
                FUN_140859a90(local_e8);
                FUN_140859a90(local_a8);
                goto LAB_1425f95df;
              }
              uVar4 = *(ushort *)(local_58 + 8);
              if ((local_e0 & 1) == 0) {
                if ((short)uVar4 < 0) {
                  iVar8 = *(int *)(local_58 + 0xc);
                }
                else {
                  iVar8 = (int)(short)uVar4 >> 5;
                }
                if ((((uVar4 & 1) != 0) || (iVar5 != iVar8)) ||
                   (cVar7 = FUN_1412ae090(local_e8,local_58), cVar7 == '\0')) goto LAB_1425f9529;
              }
              else if ((uVar4 & 1) == 0) goto LAB_1425f9529;
LAB_1425f9420:
              FUN_140859a90(local_e8);
            }
            FUN_140859a90(local_e8);
            FUN_1426c1ee0(&local_1b0);
          }
          FUN_140859a90(local_a8);
        }
        FUN_140859a90(local_a8);
      }
LAB_1425f95df:
      FUN_1426c1dd0(&local_1b0);
      FUN_1426c1dd0(local_278);
      param_6 = local_4c;
    }
  }
  return param_6;
}



// FUNCTION 1425f9620 Unwind@1425f9620 body=58 status=ok
// SIG undefined Unwind@1425f9620(void)

void Unwind_1425f9620(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x300);
  return;
}



// FUNCTION 1425f9660 Unwind@1425f9660 body=70 status=ok
// SIG undefined Unwind@1425f9660(void)

void Unwind_1425f9660(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x1f8);
  FUN_1426c1dd0(param_2 + 0x130);
  return;
}



// FUNCTION 1425f96b0 Unwind@1425f96b0 body=58 status=ok
// SIG undefined Unwind@1425f96b0(void)

void Unwind_1425f96b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x2c0);
  return;
}



// FUNCTION 1425f96f0 Unwind@1425f96f0 body=58 status=ok
// SIG undefined Unwind@1425f96f0(void)

void Unwind_1425f96f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x300);
  return;
}



// FUNCTION 1425f9730 Unwind@1425f9730 body=58 status=ok
// SIG undefined Unwind@1425f9730(void)

void Unwind_1425f9730(undefined8 param_1,longlong param_2)

{
  FUN_1426c1dd0(param_2 + 0x1f8);
  return;
}



// FUNCTION 1425f9770 Unwind@1425f9770 body=58 status=ok
// SIG undefined Unwind@1425f9770(void)

void Unwind_1425f9770(undefined8 param_1,longlong param_2)

{
  FUN_1426c1dd0(param_2 + 0x130);
  return;
}



// FUNCTION 1425f97b0 FUN_1425f97b0 body=765 status=ok
// SIG undefined FUN_1425f97b0(void)

void FUN_1425f97b0(longlong param_1,undefined8 param_2,longlong param_3,int *param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined4 uVar13;
  longlong local_408;
  longlong alStack_400 [30];
  undefined1 local_310 [200];
  longlong local_248;
  longlong alStack_240 [31];
  undefined1 local_148 [8];
  undefined4 local_140;
  undefined **local_108;
  undefined2 local_100;
  undefined **local_c8;
  undefined2 local_c0;
  undefined **local_88;
  undefined2 local_80;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_4) {
    return;
  }
  if (*(short *)(param_3 + 8) < 0) {
    iVar6 = *(int *)(param_3 + 0xc);
  }
  else {
    iVar6 = (int)*(short *)(param_3 + 8) >> 5;
  }
  while( true ) {
    if (iVar6 == 0) {
      return;
    }
    uVar5 = FUN_1424a8030(param_3,iVar6 + -1);
    cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),uVar5);
    if (cVar4 == '\0') break;
    iVar6 = (uVar5 < 0x10000 | 0xfffffffe) + iVar6;
  }
  if (0xffffffec < uVar5 - 0x1113) {
    return;
  }
  FUN_142511900(local_310);
  cVar4 = FUN_1425d6ed0(*(undefined8 *)(param_1 + 0x18),uVar5,local_310);
  if (cVar4 != '\0') {
    local_108 = &PTR_FUN_149e18960;
    local_100 = 2;
    local_c8 = &PTR_FUN_149e18960;
    local_c0 = 2;
    local_88 = &PTR_FUN_149e18960;
    local_80 = 2;
    FUN_1425ec120(local_148,local_310);
LAB_1425f98e0:
    cVar4 = FUN_1425ec210(local_148);
    uVar13 = local_140;
    if (cVar4 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                (*(longlong **)(param_1 + 8),local_140,&local_108);
      pppuVar12 = &local_c8;
      pppuVar11 = &local_108;
      cVar4 = FUN_1425f9b90(param_1,param_3,iVar6,uVar13,pppuVar11,pppuVar12,&local_88,param_4);
      uVar13 = (undefined4)((ulonglong)pppuVar12 >> 0x20);
      if (cVar4 != '\0') {
        uVar9 = (ulonglong)pppuVar11 & 0xffffffff00000000;
        uVar5 = FUN_1426bfb90(*(undefined8 *)(param_1 + 0x48),param_2,&local_c8,&local_248,uVar9);
        uVar10 = (ulonglong)uVar5;
        if (((int)uVar5 < 0x20) && (*param_4 < 1)) {
          uVar7 = FUN_1426bfb90(*(undefined8 *)(param_1 + 0x48),param_2,&local_88,&local_408,
                                uVar9 & 0xffffffff00000000);
          if (uVar7 == uVar5) {
            if ((int)uVar5 < 1) goto LAB_1425f98e0;
            if (local_248 == local_408) {
              uVar9 = 0;
              do {
                if (uVar10 - 1 == uVar9) goto LAB_1425f98e0;
                plVar3 = alStack_240 + uVar9;
                uVar1 = uVar9 + 1;
                plVar2 = alStack_400 + uVar9;
                uVar9 = uVar1;
              } while (*plVar3 == *plVar2);
              if (uVar10 <= uVar1) goto LAB_1425f98e0;
            }
          }
          iVar8 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))
                            (*(longlong **)(param_1 + 0x48),&local_248,uVar10,param_4);
          FUN_1426bcf00(*(undefined8 *)(param_1 + 0x48),param_2,&local_88,iVar8,param_4);
          if (iVar8 != -1) {
            FUN_1425f9000(param_1,param_2,&local_c8,&local_248,uVar5,CONCAT44(uVar13,iVar8),param_4)
            ;
          }
        }
      }
      goto LAB_1425f98e0;
    }
    FUN_1425ec1d0(local_148);
    FUN_140859a90(&local_88);
    FUN_140859a90(&local_c8);
    FUN_140859a90(&local_108);
  }
  FUN_1425121d0(local_310);
  return;
}



// FUNCTION 1425f9ab0 Unwind@1425f9ab0 body=58 status=ok
// SIG undefined Unwind@1425f9ab0(void)

void Unwind_1425f9ab0(undefined8 param_1,longlong param_2)

{
  FUN_1425ec1d0(param_2 + 0x300);
  return;
}



// FUNCTION 1425f9af0 Unwind@1425f9af0 body=82 status=ok
// SIG undefined Unwind@1425f9af0(void)

void Unwind_1425f9af0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x3c0);
  FUN_140859a90(param_2 + 0x380);
  FUN_140859a90(param_2 + 0x340);
  return;
}



// FUNCTION 1425f9b50 Unwind@1425f9b50 body=58 status=ok
// SIG undefined Unwind@1425f9b50(void)

void Unwind_1425f9b50(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x138);
  return;
}



// FUNCTION 1425f9b90 FUN_1425f9b90 body=721 status=ok
// SIG undefined FUN_1425f9b90(void)

undefined8
FUN_1425f9b90(longlong param_1,longlong param_2,int param_3,undefined4 param_4,longlong param_5,
             longlong param_6,longlong param_7,int *param_8)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  if (*param_8 < 1) {
    iVar7 = FUN_1424a81b0(param_5,0);
    uVar1 = *(ushort *)(param_5 + 8);
    if ((short)uVar1 < 0) {
      iVar10 = *(int *)(param_5 + 0xc);
    }
    else {
      iVar10 = (int)(short)uVar1 >> 5;
    }
    if (iVar7 == iVar10) {
      return 0;
    }
    if (((int)(short)uVar1 & 1U) == 0) {
      if (iVar7 < 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = iVar10;
        if (iVar7 <= iVar10) {
          iVar12 = iVar7;
        }
      }
      if ((uVar1 & 2) == 0) {
        lVar13 = *(longlong *)(param_5 + 0x18);
      }
      else {
        lVar13 = param_5 + 10;
      }
      cVar3 = FUN_1424a7e30(param_2,param_3,0x7fffffff,lVar13,iVar12,iVar10 - iVar12);
      if (cVar3 == '\0') {
        return 0;
      }
    }
    else if ((*(byte *)(param_2 + 8) & 1) != 0) {
      return 0;
    }
    FUN_1424a8e40(param_6);
    if (*(short *)(param_6 + 8) < 0) {
      iVar10 = *(int *)(param_6 + 0xc);
    }
    else {
      iVar10 = (int)*(short *)(param_6 + 8) >> 5;
    }
    bVar4 = 0;
    FUN_1424a9610(param_6,0,iVar10,param_2,0,param_3);
    FUN_1424a8e40(param_7);
    if (*(short *)(param_7 + 8) < 0) {
      iVar10 = *(int *)(param_7 + 0xc);
    }
    else {
      iVar10 = (int)*(short *)(param_7 + 8) >> 5;
    }
    uVar11 = FUN_1424a9610(param_7,0,iVar10,param_2,0,param_3 - iVar7);
    FUN_1424a7d60(uVar11,param_4);
    uVar14 = 0xffffffff;
    bVar5 = 0;
    while( true ) {
      if ((int)uVar14 < 0) {
        if (*(short *)(param_2 + 8) < 0) {
          iVar10 = *(int *)(param_2 + 0xc);
        }
        else {
          iVar10 = (int)*(short *)(param_2 + 8) >> 5;
        }
        if (iVar10 <= param_3) {
          sVar6 = *(short *)(param_5 + 8);
          iVar10 = *(int *)(param_5 + 0xc);
          iVar12 = (int)sVar6 >> 5;
          goto LAB_1425f9e39;
        }
        uVar8 = FUN_1424a8030(param_2,param_3);
        uVar14 = (ulonglong)uVar8;
        bVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
                          (*(longlong **)(param_1 + 8),uVar14);
      }
      sVar6 = *(short *)(param_5 + 8);
      iVar12 = (int)sVar6 >> 5;
      iVar10 = *(int *)(param_5 + 0xc);
      iVar2 = iVar12;
      if (sVar6 < 0) {
        iVar2 = iVar10;
      }
      uVar8 = (uint)uVar14;
      if (iVar2 <= iVar7) break;
      uVar9 = FUN_1424a8030(param_5,iVar7);
      bVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),uVar9);
      if (bVar4 <= (byte)(bVar5 - 1)) {
        return 0;
      }
      if (bVar5 < bVar4) {
        FUN_1424a7d60(param_6,uVar9);
        iVar7 = iVar7 + (2 - (uint)(uVar9 < 0x10000));
      }
      else {
        if (uVar9 != uVar8) {
          return 0;
        }
        FUN_1424a7d60(param_6,uVar14);
        iVar10 = 2 - (uint)(uVar8 < 0x10000);
        param_3 = param_3 + iVar10;
        iVar7 = iVar7 + iVar10;
        uVar14 = 0xffffffff;
      }
    }
    if ((int)uVar8 < 0) {
LAB_1425f9e39:
      if (sVar6 < 0) {
        iVar12 = iVar10;
      }
      uVar11 = CONCAT71((int7)(uVar14 >> 8),1);
      if (iVar7 < iVar12) {
        FUN_1424a9690(param_6,param_5,iVar7,0x7fffffff);
        return uVar11;
      }
      return uVar11;
    }
    if (bVar5 <= bVar4) {
      FUN_1424a9690(param_6,param_2,param_3,0x7fffffff);
      FUN_1424a9690(param_7,param_2,param_3,0x7fffffff);
      return CONCAT71((int7)(uVar14 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 1425f9e70 FUN_1425f9e70 body=103 status=ok
// SIG undefined FUN_1425f9e70(void)

undefined8 * FUN_1425f9e70(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::CollationBuilder::vftable;
  puVar1 = (undefined8 *)param_1[9];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_14250dd70(param_1 + 0x49);
  FUN_142517df0(param_1 + 0x45);
  FUN_1425121d0(param_1 + 0xb);
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425f9ee0 FUN_1425f9ee0 body=38 status=ok
// SIG undefined FUN_1425f9ee0(void)

undefined8 FUN_1425f9ee0(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425f9f10 FUN_1425f9f10 body=22 status=ok
// SIG undefined FUN_1425f9f10(void)

void FUN_1425f9f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1424e26a0(param_2,param_3,param_4,param_6);
  return;
}



// FUNCTION 1425f9f30 FUN_1425f9f30 body=38 status=ok
// SIG undefined FUN_1425f9f30(void)

undefined8 FUN_1425f9f30(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425f9f60 FUN_1425f9f60 body=106 status=ok
// SIG undefined FUN_1425f9f60(void)

ulonglong FUN_1425f9f60(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar1 = 0x101000100;
  if (((param_2 & 0xfe) != 0) && (0xffffffbf < ((uint)(param_2 >> 8) & 0xfe) - 0x46)) {
    uVar2 = (uint)param_2 + 0xbfbff9e0;
    uVar1 = (ulonglong)(((uint)param_2 & 0xc0) << 8) |
            *(ulonglong *)
             (*(longlong *)(param_1 + 8) +
             (ulonglong)(uVar2 >> 8 & 0x3f | uVar2 >> 10 & 0x1fc0 | uVar2 >> 0xb & 0xfe000) * 8);
  }
  return uVar1;
}



// FUNCTION 1425f9fd0 FUN_1425f9fd0 body=95 status=ok
// SIG undefined FUN_1425f9fd0(void)

ulonglong FUN_1425f9fd0(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  if ((uint)param_2 + 0xba000000 < 0xc0000000) {
    return 0x101000100;
  }
  uVar1 = (uint)((ulonglong)(param_2 + -0x4040000006002000) >> 0x20);
  return (ulonglong)((uint)param_2 & 0xc000) |
         *(ulonglong *)
          (*(longlong *)(param_1 + 8) +
          (ulonglong)
          ((uint)((ulonglong)(param_2 + -0x4040000006002000) >> 0x18) & 0x3f |
          uVar1 >> 10 & 0x1fc0 | uVar1 >> 0xb & 0xfe000) * 8);
}



// FUNCTION 1425fa030 FUN_1425fa030 body=8 status=ok
// SIG undefined FUN_1425fa030(void)

undefined * FUN_1425fa030(void)

{
  return &DAT_14c7fc34c;
}



// FUNCTION 1425fa040 FUN_1425fa040 body=277 status=ok
// SIG undefined FUN_1425fa040(void)

void FUN_1425fa040(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  int *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_142537a10();
  *param_1 = icu_64::PluralFormat::vftable;
  puVar1 = param_1 + 0x29;
  FUN_1424a3ce0(puVar1,param_2);
  puVar2 = param_1 + 0x45;
  FUN_1426c3c60(puVar2,param_5);
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = icu_64::PluralFormat::PluralSelectorAdapter::vftable;
  param_1[0x58] = 0;
  if (*param_5 < 1) {
    uVar3 = FUN_1412ad590(puVar1,param_3,param_5);
    param_1[0x58] = uVar3;
    uVar3 = FUN_140236d20(puVar1,param_5);
    param_1[0x55] = uVar3;
  }
  FUN_1426c4940(puVar2,param_4,0,param_5);
  if (*param_5 < 1) {
    uVar3 = FUN_1426c5240(puVar2,0);
  }
  else {
    uVar3 = 0;
    FUN_1426c40e0(puVar2);
  }
  param_1[0x56] = uVar3;
  return;
}



// FUNCTION 1425fa160 Unwind@1425fa160 body=89 status=ok
// SIG undefined Unwind@1425fa160(void)

void Unwind_1425fa160(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  *(undefined ***)(lVar1 + 0x2b8) = icu_64::PluralFormat::PluralSelectorAdapter::vftable;
  puVar2 = *(undefined8 **)(lVar1 + 0x2c0);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_1426c4110(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425fa1c0 Unwind@1425fa1c0 body=49 status=ok
// SIG undefined Unwind@1425fa1c0(void)

void Unwind_1425fa1c0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425fa200 Unwind@1425fa200 body=49 status=ok
// SIG undefined Unwind@1425fa200(void)

void Unwind_1425fa200(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1425fa240 FUN_1425fa240 body=171 status=ok
// SIG undefined FUN_1425fa240(void)

undefined8 *
FUN_1425fa240(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_142537a40();
  *param_1 = icu_64::PluralFormat::vftable;
  FUN_1424a3ce0(param_1 + 0x29,param_2 + 0x148,param_3,param_4,param_1 + 0x29);
  FUN_1426c3db0(param_1 + 0x45,param_2 + 0x228);
  param_1[0x55] = 0;
  param_1[0x56] = *(undefined8 *)(param_2 + 0x2b0);
  param_1[0x57] = icu_64::PluralFormat::PluralSelectorAdapter::vftable;
  param_1[0x58] = 0;
  FUN_1425fa3a0(param_1,param_2);
  return param_1;
}


